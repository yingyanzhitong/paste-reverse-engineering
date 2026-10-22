/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100025b30 | FUN_100025b30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100025b30(undefined *param_1,DispatchQoS param_2,char *param_3,void *param_4)

{
  DispatchWorkItemFlags flags;
  undefined *puVar1;
  undefined8 uVar2;
  DispatchTime DVar3;
  NSString *pNVar4;
  ID IVar5;
  ID self;
  OS_dispatch_queue *pOVar6;
  DispatchTime DVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar11;
  DispatchTime DVar12;
  DispatchQoS qos;
  String SVar13;
  String SVar14;
  String SVar15;
  code *local_d0;
  undefined *local_c8;
  DispatchWorkItemFlags local_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  
  local_a0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  puVar8 = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_c0.unknown = puVar8;
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  qos.unknown = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  DVar12.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_98 = (undefined *)0x7449737574617453;
  local_90 = 0xeb000000002f6d65;
  local_c8 = param_1;
  local_68 = param_1;
  SVar13 = Swift::CustomStringConvertible::get_description();
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar13,SVar14);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  uVar2 = local_90;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  IVar5 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage);
  self = objc_stub::button(*(ID *)(param_2.unknown + 0x20));
  if (IVar5 == 0) {
    if (self != 0) {
      local_98 = (undefined *)0x7449737574617453;
      local_90 = 0xeb000000002f6d65;
      local_68 = (undefined *)0x0;
      SVar13 = Swift::CustomStringConvertible::get_description();
      SVar15.bridgeObject = param_4;
      SVar15.str = (char *)pNVar4;
      Swift::String::append(SVar13,SVar15);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      uVar2 = local_90;
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar2);
      IVar5 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar4);
      objc_stub::setImage_(self,IVar5);
    }
  }
  else {
    if (self != 0) {
      objc_stub::setImage_(self,IVar5);
    }
    pOVar6 = (OS_dispatch_queue *)0x0;
    FUN_10002137c();
    DVar7.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
    Dispatch::DispatchTime::now(DVar7);
    Dispatch::__infix(DVar12,0.020833333333333332);
    local_d0 = *(code **)(lVar11 + 8);
    (*local_d0)(DVar12.unknown,DVar3.unknown);
    puVar8 = &DAT_100eb0e48;
    _swift_allocObject(&DAT_100eb0e48,0x20,7);
    *(undefined **)(puVar8 + 0x10) = param_2.unknown;
    *(undefined **)(puVar8 + 0x18) = local_c8;
    local_78 = FUN_10002655c;
    local_98 = PTR___NSConcreteStackBlock_100ea82a0;
    local_90 = 0x42000000;
    local_88 = FUN_100030410;
    puStack_80 = &DAT_100eb0e60;
    local_70 = puVar8;
    aBlock = __Block_copy(&local_98);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_2);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar9 = &DAT_100fa82c0;
    FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar8 = &DAT_100fa7850;
    FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
    puVar10 = &DAT_100fa82d0;
    FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    puVar1 = local_a0;
    flags.unknown = local_c0.unknown;
    Swift::SetAlgebra::_init(local_c0.unknown,&local_68,puVar8,puVar10,local_a0,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar12.unknown + -extraout_x12),qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_a8 + 8))(flags.unknown,puVar1);
    (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
    (*local_d0)(DVar12.unknown + -extraout_x12,DVar3.unknown);
    _swift_release(local_70);
  }
  return;
}



/* Address: 0x100025f6c | FUN_100025f6c */

void FUN_100025f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x42,UVar4.unknown,puVar3);
  }
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_1000582d0(FUN_100026580,auStack_60,"Paste/StatusItem.swift",0x16,2,0x43);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100026054 | FUN_100026054 */

void FUN_100026054(undefined8 param_1,long param_2)

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
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x43,UVar5.unknown,puVar4);
  }
  if (!SCARRY8(param_2,1)) {
    FUN_100025b30(param_2 + 1,param_1);
    _swift_release(pMVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10002611c);
  (*pcVar2)();
}



/* Address: 0x10002611c | FUN_10002611c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_10002611c(void)

{
  ID IVar1;
  ID IVar2;
  long unaff_x20;
  undefined8 uVar3;
  ID self;
  code *pcVar4;
  undefined8 local_38;
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10002625c);
    (*pcVar4)();
  }
  IVar1 = objc_stub::currentEvent(*(ID *)PTR__NSApp_100ea8fa0);
  if (IVar1 != 0) {
    IVar2 = objc_stub::type(IVar1);
    if ((IVar2 != 4) &&
       ((IVar2 = objc_stub::type(IVar1), IVar2 != 2 ||
        (IVar2 = objc_stub::modifierFlags(IVar1), ((uint)IVar2 >> 0x12 & 1) == 0)))) {
      pcVar4 = *(code **)(unaff_x20 + 0x10);
      if (pcVar4 != (code *)0x0) {
        uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
        _swift_retain(uVar3);
        (*pcVar4)();
        FUN_100004550(pcVar4,uVar3);
        return pcVar4;
      }
      return (code *)0x0;
    }
    self = *(ID *)(unaff_x20 + 0x20);
    FUN_1000da768(&local_38);
    FUN_10004bcb8();
    _swift_release(local_38);
    objc_stub::setMenu_(self,IVar2);
    IVar1 = objc_stub::button(self);
    if (IVar1 != 0) {
      objc_stub::performClick_(IVar1,0);
    }
    objc_stub::setMenu_(self,0);
  }
  return (code *)0x0;
}



/* Address: 0x10002625c | _TtC5Paste10StatusItem::statusItemAction */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10StatusItem::statusItemAction(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/StatusItem.swift",0x16,1,0x4a,UVar4.unknown,puVar3);
  }
  _swift_retain(param_1);
  FUN_10002611c();
  _swift_release(pMVar2);
  _swift_release(param_1);
  return;
}



/* Address: 0x10002631c | FUN_10002631c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002631c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000263ac | FUN_1000263ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000263ac(void)

{
  return ZEXT816(0x100fa77a8);
}



/* Address: 0x1000263cc | FUN_1000263cc */

void FUN_1000263cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10004e57c(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x18,0x13,thunk_FUN_100008f9c,0,uVar1);
  return;
}



/* Address: 0x10002641c | FUN_10002641c */

void FUN_10002641c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000055ec(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x24,0x13,FUN_1000090c4,0,uVar1);
  return;
}



/* Address: 0x10002646c | FUN_10002646c */

void FUN_10002646c(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000013,0x8000000100d8e160,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000264b4 | FUN_1000264b4 */

void FUN_1000264b4(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000013,0x8000000100d8e160,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000264fc | FUN_1000264fc */

void FUN_1000264fc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100026520 | FUN_100026520 */

void FUN_100026520(void)

{
  FUN_1000257a8();
  return;
}



/* Address: 0x100026528 | FUN_100026528 */

void FUN_100026528(void)

{
  FUN_100025880();
  return;
}



/* Address: 0x100026530 | FUN_100026530 */

void FUN_100026530(void)

{
  FUN_100025a88();
  return;
}



/* Address: 0x100026538 | FUN_100026538 */

void FUN_100026538(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10002655c | FUN_10002655c */

void FUN_10002655c(void)

{
  long unaff_x20;
  
  FUN_100025f6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100026564 | FUN_100026564 */

void FUN_100026564(long param_1,long param_2)

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



/* Address: 0x100026578 | FUN_100026578 */

void FUN_100026578(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100026580 | FUN_100026580 */

void FUN_100026580(void)

{
  long unaff_x20;
  
  FUN_100026054(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100026598 | thunk_FUN_100008f9c */

void thunk_FUN_100008f9c(void)

{
  FUN_100009774(FUN_1000099c8,0x19,FUN_1000580c4);
  return;
}



/* Address: 0x10002659c | FUN_10002659c */

long * FUN_10002659c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  ControlActiveState CVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar7 = (long)*(int *)(param_3 + 0x14);
    _swift_retain();
    puVar4 = &DAT_100fa7858;
    FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
    lVar5 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar5,puVar4);
    bVar2 = (int)lVar5 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
      _swift_retain();
    }
    else {
      CVar3 = SwiftUI::ControlActiveState::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,CVar3.value) + -8) + 0x10))
                ((long)param_1 + lVar7,(long)param_2 + lVar7,CONCAT71(extraout_var,CVar3.value));
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,puVar4,!bVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10002667c | FUN_10002667c */

void FUN_10002667c(long param_1,long param_2)

{
  ControlActiveState CVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar4;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  lVar4 = (long)*(int *)(param_2 + 0x14);
  puVar2 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  lVar3 = param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 == 1) {
    CVar1 = SwiftUI::ControlActiveState::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000266e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 8))
              (param_1 + lVar4,CONCAT71(extraout_var,CVar1.value));
    return;
  }
  _swift_release(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Address: 0x1000266f8 | FUN_1000266f8 */

undefined8 * FUN_1000266f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ControlActiveState CVar3;
  undefined *puVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar6 = (long)*(int *)(param_3 + 0x14);
  _swift_retain();
  puVar4 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  lVar5 = (long)param_2 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar5,puVar4);
  bVar2 = (int)lVar5 != 1;
  if (bVar2) {
    *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
    _swift_retain();
  }
  else {
    CVar3 = SwiftUI::ControlActiveState::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar3.value) + -8) + 0x10))
              ((long)param_1 + lVar6,(long)param_2 + lVar6,CONCAT71(extraout_var,CVar3.value));
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,puVar4,!bVar2);
  return param_1;
}



/* Address: 0x1000267a4 | FUN_1000267a4 */

undefined8 * FUN_1000267a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  ControlActiveState CVar2;
  undefined *puVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar5);
  if (param_1 != param_2) {
    lVar6 = (long)*(int *)(param_3 + 0x14);
    puVar3 = &DAT_100fa7858;
    FUN_100005808((long)param_1 + lVar6,&DAT_100fa7858,&DAT_100c26170);
    FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
    lVar4 = (long)param_2 + lVar6;
    _swift_getEnumCaseMultiPayload(lVar4,puVar3);
    bVar1 = (int)lVar4 != 1;
    if (bVar1) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      _swift_retain();
    }
    else {
      CVar2 = SwiftUI::ControlActiveState::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,CVar2.value) + -8) + 0x10))
                ((long)param_1 + lVar6,(long)param_2 + lVar6,CONCAT71(extraout_var,CVar2.value));
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,puVar3,!bVar1);
  }
  return param_1;
}



/* Address: 0x100026890 | FUN_100026890 */

undefined8 * FUN_100026890(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ControlActiveState CVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  puVar2 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  lVar3 = (long)param_2 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 == 1) {
    CVar1 = SwiftUI::ControlActiveState::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x20))
              ((long)param_1 + lVar4,(long)param_2 + lVar4,CONCAT71(extraout_var,CVar1.value));
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar4,puVar2,1);
  }
  else {
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10002693c | FUN_10002693c */

undefined8 * FUN_10002693c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  ControlActiveState CVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_release(uVar3);
  if (param_1 != param_2) {
    lVar6 = (long)*(int *)(param_3 + 0x14);
    puVar4 = &DAT_100fa7858;
    FUN_100005808((long)param_1 + lVar6,&DAT_100fa7858,&DAT_100c26170);
    FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
    lVar5 = (long)param_2 + lVar6;
    _swift_getEnumCaseMultiPayload(lVar5,puVar4);
    if ((int)lVar5 == 1) {
      CVar2 = SwiftUI::ControlActiveState::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,CVar2.value) + -8) + 0x20))
                ((long)param_1 + lVar6,(long)param_2 + lVar6,CONCAT71(extraout_var,CVar2.value));
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,puVar4,1);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Address: 0x100026a1c | FUN_100026a1c */

void FUN_100026a1c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100026a28 | FUN_100026a28 */

ulong FUN_100026a28(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fa7860;
  FUN_1000037f0(&DAT_100fa7860,&DAT_100c246c0);
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100026ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x100026ab4 | FUN_100026ab4 */

void FUN_100026ab4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100026ac0 | FUN_100026ac0 */

void FUN_100026ac0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fa7860;
  FUN_1000037f0(&DAT_100fa7860,&DAT_100c246c0);
                    /* WARNING: Could not recover jumptable at 0x000100026b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,puVar1);
  return;
}



/* Address: 0x100026b40 | FUN_100026b40 */

void FUN_100026b40(undefined8 param_1)

{
  if (DAT_100fa78c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca0828);
  return;
}



/* Address: 0x100026b78 | FUN_100026b78 */

void FUN_100026b78(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c246e0;
  lVar1 = 0x13f;
  FUN_100026bec();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100026bec | FUN_100026bec */

void FUN_100026bec(void)

{
  ControlActiveState CVar1;
  Content CVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  
  if (DAT_100fa78d0 == 0) {
    CVar1 = SwiftUI::ControlActiveState::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var,CVar1.value);
    CVar2 = SwiftUI::Environment::Content::typeMetadataAccessor();
    if (lVar3 == 0) {
      DAT_100fa78d0 = CONCAT71(extraout_var_00,CVar2.value);
    }
  }
  return;
}



/* Address: 0x100026c40 | FUN_100026c40 */

void FUN_100026c40(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0874,1);
  return;
}



/* Address: 0x100026c50 | FUN_100026c50 */

void FUN_100026c50(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ControlActiveState CVar2;
  bool bVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  Wrapper WVar11;
  Wrapper dynamicMember;
  Set SVar12;
  CGFloat _all;
  SidebarListStyle SVar13;
  SidebarListStyle SVar14;
  PlainButtonStyle PVar15;
  undefined7 extraout_var_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ObservedObject OVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auStack_240 [8];
  long local_238 [2];
  undefined *local_228 [2];
  ulong local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 local_200;
  ulong local_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined1 *local_1e0;
  long local_1d8;
  MainActor *local_1d0;
  undefined8 *local_1c8;
  undefined1 auStack_1c0 [80];
  undefined **local_170;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_12f;
  undefined *local_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_9f;
  undefined7 extraout_var;
  
  local_1d8 = param_1;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1d0 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,10,UVar6.unknown,puVar5);
  }
  puVar8 = &DAT_100fa7910;
  FUN_1000037f0(&DAT_100fa7910,&DAT_100c24758);
  local_1f0 = *(long *)(puVar8 + -8);
  local_200 = *(undefined8 *)(local_1f0 + 0x40);
  local_1e8 = puVar8;
  local_1e0 = auStack_240;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_1f8 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  puVar19 = auStack_240 + -local_1f8;
  puVar8 = &DAT_100fa7918;
  local_210 = puVar19;
  FUN_1000037f0(&DAT_100fa7918,&DAT_100c24760);
  local_208 = puVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar19 - extraout_x8;
  uVar21 = param_2[1];
  puVar9 = &DAT_100c24768;
  local_1c8 = param_2;
  _swift_getKeyPath(&DAT_100c24768);
  puVar10 = &DAT_100c24790;
  _swift_getKeyPath(&DAT_100c24790);
  Combine::Published::_get_subscript(&local_d0,uVar21,puVar9,puVar10);
  _swift_release(puVar9);
  _swift_release(puVar10);
  SVar12.unknown = local_d0;
  OVar24.unknown = (undefined *)*param_2;
  FUN_100055770(0);
  FUN_100003a00(&DAT_100fa7920,FUN_100055770,&TargetProtocolConformanceDescriptor_100c25cc8);
  WVar11 = SwiftUI::ObservedObject::_get_projectedValue(OVar24);
  dynamicMember.unknown = &DAT_100c247b0;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar11.unknown);
  _swift_release(dynamicMember.unknown);
  uStack_c8 = uStack_108;
  local_d0 = local_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  local_b0 = local_f0;
  uVar21 = CONCAT17(uStack_e0,uStack_e7);
  uStack_9f = uStack_df;
  uStack_158 = uStack_108;
  local_160 = local_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  local_140 = local_f0;
  uStack_12f = uStack_df;
  local_118 = SVar12.unknown;
  local_170 = &local_118;
  FUN_100011090(&local_d0,auStack_1c0,&DAT_100fa7928,&DAT_100c247d8);
  FUN_1000037f0(&DAT_100fa7930,&DAT_100c247e0);
  FUN_100028750();
  FUN_100028790();
  SwiftUI::List::_init();
  FUN_100005808(&local_d0,&DAT_100fa7928,&DAT_100c247d8);
  _swift_bridgeObjectRelease();
  SVar12 = SwiftUI::Edge::Set::get_top(SVar12);
  _all.unknown._0_1_ = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  _all.unknown._1_7_ = extraout_var;
  uVar30 = 0xc030000000000000;
  uVar29 = 0xc030000000000000;
  if (((byte)_all.unknown & 1) == 0) {
    uVar29 = 0;
  }
  uVar31 = local_f0;
  SwiftUI::EdgeInsets::init(_all);
  puVar1 = (undefined1 *)(lVar17 + *(int *)(puVar8 + 0x24));
  *puVar1 = (char)SVar12.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar29;
  *(undefined8 *)(puVar1 + 0x10) = uVar30;
  *(undefined8 *)(puVar1 + 0x18) = uVar31;
  *(undefined8 *)(puVar1 + 0x20) = uVar21;
  puVar1[0x28] = 0;
  SVar13 = SwiftUI::SidebarListStyle::typeMetadataAccessor();
  lVar25 = *(long *)(SVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  lVar18 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SVar14 = SwiftUI::SidebarListStyle::init();
  FUN_100028840();
  (extension_SwiftUI)::SwiftUI::View::_listStyle
            (puVar19,lVar18,puVar8,SVar13.unknown,SVar14.unknown,
             PTR___protocol_witness_table_for_SwiftUI_SidebarListStyle___SwiftUI_ListStyle_in_SwiftUI_100eaaa00
            );
  (**(code **)(lVar25 + 8))(lVar18,SVar13.unknown);
  FUN_100005808(lVar17,&DAT_100fa7918,&DAT_100c24760);
  puVar19 = local_208;
  puVar8 = &DAT_100fa7968;
  FUN_1000037f0(&DAT_100fa7968,&DAT_100c247f0);
  local_228[1] = *(undefined **)(*(long *)(puVar8 + -8) + 0x40);
  local_228[0] = puVar8;
  local_208 = puVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_218 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar27 = (long)puVar19 - local_218;
  puVar8 = &DAT_100fa7970;
  FUN_1000037f0(&DAT_100fa7970,&DAT_100c247f8);
  lVar28 = *(long *)(puVar8 + -8);
  local_238[0] = lVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar12.unknown = (undefined *)(lVar27 - extraout_x8_01);
  lVar17 = 0;
  FUN_100026b40();
  lVar25 = *(long *)(lVar17 + -8);
  lVar18 = *(long *)(lVar25 + 0x40);
  local_238[1] = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)SVar12.unknown - (lVar18 + 0xfU & 0xfffffffffffffff0);
  FUN_1000288d8(local_1c8,lVar17);
  uVar16 = (ulong)*(byte *)(lVar25 + 0x50);
  uVar22 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100eb0e98;
  _swift_allocObject(&DAT_100eb0e98,uVar22 + lVar18,uVar16 | 7);
  FUN_1000289d0(lVar17,puVar9 + uVar22);
  FUN_100028800();
  SwiftUI::Button::_init();
  PVar15 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar17 = *(long *)(PVar15.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)SVar12.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::PlainButtonStyle::init();
  puVar9 = &DAT_100fa7978;
  FUN_100016eac(&DAT_100fa7978,&DAT_100fa7970,&DAT_100c247f8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar10 = &DAT_100fa7200;
  FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar27,lVar18,puVar8,PVar15.unknown,puVar9,puVar10);
  (**(code **)(lVar17 + 8))(lVar18,PVar15.unknown);
  (**(code **)(lVar28 + 8))(SVar12.unknown,puVar8);
  lVar17 = local_238[0];
  SVar12 = SwiftUI::Edge::Set::get_all(SVar12);
  uVar29 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  puVar8 = &DAT_100fa7980;
  FUN_1000037f0(&DAT_100fa7980,&DAT_100c24800);
  puVar19 = (undefined1 *)(lVar27 + *(int *)(puVar8 + 0x24));
  *puVar19 = (char)SVar12.unknown;
  *(undefined8 *)(puVar19 + 8) = uVar29;
  *(undefined8 *)(puVar19 + 0x10) = uVar30;
  *(undefined8 *)(puVar19 + 0x18) = uVar31;
  *(undefined8 *)(puVar19 + 0x20) = uVar21;
  puVar19[0x28] = 0;
  CVar2 = SwiftUI::ControlActiveState::typeMetadataAccessor();
  lVar25 = CONCAT71(extraout_var_00,CVar2.value);
  lVar26 = *(long *)(lVar25 + -8);
  lVar18 = *(long *)(lVar26 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = lVar18 + 0xfU & 0xfffffffffffffff0;
  lVar23 = lVar17 - uVar16;
  FUN_100027ec8(lVar23);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar23 - uVar16;
  lVar18 = lVar25;
  (**(code **)(lVar26 + 0x68))
            (lVar28,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_ControlActiveState_key_SwiftUI_ControlActiveState_Type___>_SwiftUI_ControlActiveState_100eaac00
            );
  bVar3 = SwiftUI::ControlActiveState::___infix
                    ((ControlActiveState)(__int8)lVar23,(ControlActiveState)(__int8)lVar28,
                     (ControlActiveState)(__int8)lVar18);
  pcVar20 = *(code **)(lVar26 + 8);
  (*pcVar20)(lVar28,lVar25);
  (*pcVar20)(lVar23,lVar25);
  local_1c8 = (undefined8 *)lVar17;
  uVar21 = 0x3ff0000000000000;
  if (!bVar3) {
    uVar21 = 0x3fd999999999999a;
  }
  *(undefined8 *)(lVar27 + *(int *)(local_228[0] + 0x24)) = uVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = local_1e8;
  lVar18 = local_1f0;
  puVar19 = local_210;
  lVar17 = lVar17 - local_1f8;
  pcVar20 = *(code **)(local_1f0 + 0x10);
  (*pcVar20)(lVar17,local_210,local_1e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar17 - local_218;
  FUN_100028a40(lVar27,lVar28);
  lVar25 = local_1d8;
  (*pcVar20)(local_1d8,lVar17,puVar9);
  puVar8 = &DAT_100fa7988;
  FUN_1000037f0(&DAT_100fa7988,&DAT_100c24808);
  FUN_100028a40(lVar28,lVar25 + *(int *)(puVar8 + 0x30));
  FUN_100028a90(lVar27);
  pcVar20 = *(code **)(lVar18 + 8);
  (*pcVar20)(puVar19,puVar9);
  FUN_100028a90(lVar28);
  (*pcVar20)(lVar17,puVar9);
  _swift_release(local_1d0);
  return;
}



/* Address: 0x10002747c | FUN_10002747c */

void FUN_10002747c(void)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/SidebarView.swift";
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,0x11,UVar5.unknown,puVar4)
    ;
  }
  FUN_1000da768(&local_58);
  FUN_1001abc30();
  (**(code **)(lVar9 + 0x10))(puVar8,pcVar6,UVar2.unknown);
  uVar7 = 0;
  FUN_1001adc9c(0);
  FUN_1001ad0d8(puVar8,uVar7,&PTR_PTR_100ebe0c0,&PTR_PTR_100ec6cd0);
  (**(code **)(lVar9 + 8))(puVar8,UVar2.unknown);
  _swift_release(pMVar3);
  _swift_release(local_58);
  return;
}



/* Address: 0x1000275e4 | FUN_1000275e4 */

void FUN_1000275e4(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SidebarView.swift",0x17,1,0x13,UVar10.unknown,puVar9);
  }
  if (DAT_100fa9a30 != -1) {
    _swift_once(&DAT_100fa9a30,FUN_100077514);
  }
  uVar7 = DAT_101057010;
  uVar6 = DAT_101057008;
  uVar5 = DAT_101057000;
  uVar4 = DAT_101056ff8;
  uVar3 = DAT_101056ff0;
  uVar2 = DAT_101056fe8;
  _swift_bridgeObjectRetain(DAT_101056ff8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_release(pMVar8);
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  param_1[0x28] = uVar7;
  return;
}



/* Address: 0x1000276f4 | FUN_1000276f4 */

void FUN_1000276f4(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  Alignment unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &DAT_100fa7900;
  FUN_1000037f0(&DAT_100fa7900,&DAT_100c24748);
  FUN_100026c50((long)param_1 + (long)*(int *)(puVar2 + 0x2c));
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar2 = &DAT_100fa7908;
  FUN_1000037f0(&DAT_100fa7908,&DAT_100c24750);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x24));
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = local_30;
  return;
}



/* Address: 0x1000277a0 | FUN_1000277a0 */

void FUN_1000277a0(long param_1,long param_2)

{
  undefined4 uVar1;
  String systemName;
  TemplateRenderingMode TVar2;
  Design DVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Label<undefined,undefined> LVar9;
  Image IVar10;
  undefined7 extraout_var;
  Image IVar12;
  undefined7 extraout_var_00;
  Font FVar13;
  Font FVar14;
  Color CVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined1 *puVar21;
  Image IVar22;
  Color CVar23;
  undefined *puVar24;
  undefined1 auStack_c0 [8];
  long local_b8;
  MainActor *local_b0;
  long local_a8;
  long local_90;
  long local_70;
  long lVar11;
  
  puVar4 = &DAT_100fa73a0;
  local_a8 = param_1;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = auStack_c0 + -extraout_x8;
  puVar4 = &DAT_100fa79f8;
  FUN_1000037f0(&DAT_100fa79f8,&DAT_100c25750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar22.unknown = puVar21 + -extraout_x8_00;
  puVar4 = &DAT_100fa7a00;
  FUN_1000037f0(&DAT_100fa7a00,&DAT_100c248a8);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar20 = (long)IVar22.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar24 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar24,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_b0 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,0x22,UVar7.unknown,puVar6)
    ;
  }
  local_90 = param_2;
  local_70 = param_2;
  FUN_1000037f0(&DAT_100fa73c0,&DAT_100c241d8);
  FUN_1000202f0();
  LVar9 = SwiftUI::Label::_init();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    IVar12.unknown = (undefined *)0x0;
    CVar23.unknown = (undefined *)0x0;
    FVar14.unknown = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    CVar15.unknown = (undefined *)0x0;
  }
  else {
    FUN_10020cef0();
    systemName = *(String *)LVar9.unknown;
    _swift_bridgeObjectRetain(((String *)LVar9.unknown)->bridgeObject);
    IVar10 = SwiftUI::Image::init(systemName);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_original_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab768
    ;
    TVar2 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
    lVar11 = CONCAT71(extraout_var,TVar2.value);
    lVar18 = *(long *)(lVar11 + -8);
    (**(code **)(lVar18 + 0x68))(IVar22.unknown,uVar1,lVar11);
    (**(code **)(lVar18 + 0x38))(IVar22.unknown,0,1,lVar11);
    IVar12 = SwiftUI::Image::_renderingMode(IVar22);
    _swift_release(IVar10.unknown);
    FUN_100005808(IVar22.unknown,&DAT_100fa79f8,&DAT_100c25750);
    DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar3.value) + -8) + 0x38))
              (puVar21,1,1,CONCAT71(extraout_var_00,DVar3.value));
    FVar13 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_100005808(puVar21,&DAT_100fa73a0,&DAT_100c241c8);
    FVar14 = SwiftUI::Font::bold(FVar13);
    _swift_release(FVar13.unknown);
    CVar23.unknown = &DAT_100c248b8;
    _swift_getKeyPath();
    CVar15 = SwiftUI::Color::get_red(CVar23);
    puVar24 = &DAT_100c248e8;
    _swift_getKeyPath();
    _swift_retain(IVar12.unknown);
    _swift_retain(CVar23.unknown);
    _swift_retain(FVar14.unknown);
    _swift_retain(puVar24);
    _swift_retain(CVar15.unknown);
  }
  pcVar19 = *(code **)(lVar17 + 0x10);
  (*pcVar19)(lVar20,lVar20 - extraout_x12,puVar4);
  lVar11 = local_a8;
  local_b8 = lVar20 - extraout_x12;
  (*pcVar19)(local_a8,lVar20,puVar4);
  puVar16 = &DAT_100fa7a08;
  FUN_1000037f0(&DAT_100fa7a08,&DAT_100c248b0);
  puVar6 = (undefined8 *)(lVar11 + *(int *)(puVar16 + 0x30));
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  puVar6 = (undefined8 *)(lVar11 + *(int *)(puVar16 + 0x40));
  FUN_100028e78(IVar12.unknown,CVar23.unknown,FVar14.unknown,puVar24,CVar15.unknown);
  FUN_100028ed4(IVar12.unknown,CVar23.unknown,FVar14.unknown,puVar24,CVar15.unknown);
  *puVar6 = IVar12.unknown;
  puVar6[1] = CVar23.unknown;
  puVar6[2] = FVar14.unknown;
  puVar6[3] = puVar24;
  puVar6[4] = CVar15.unknown;
  pcVar19 = *(code **)(lVar17 + 8);
  (*pcVar19)(local_b8,puVar4);
  FUN_100028ed4(IVar12.unknown,CVar23.unknown,FVar14.unknown,puVar24,CVar15.unknown);
  (*pcVar19)(lVar20,puVar4);
  _swift_release(local_b0);
  return;
}



/* Address: 0x100027be0 | FUN_100027be0 */

void FUN_100027be0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  uVar8 = SUB81(UVar5.unknown,0);
  if (((ulong)UVar5.unknown & 1) == 0) {
    uVar8 = 0xa0;
    param_5 = 0x23;
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,0x23,UVar4.unknown,puVar3)
    ;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_100008378();
  _swift_bridgeObjectRetain(uVar1);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x100027cdc | FUN_100027cdc */

void FUN_100027cdc(undefined8 *param_1,long param_2)

{
  String systemName;
  Design DVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  Image IVar7;
  undefined7 extraout_var;
  Font FVar8;
  long extraout_x8;
  
  puVar2 = &DAT_100fa73a0;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,0x25,UVar5.unknown,puVar4)
    ;
  }
  systemName = *(String *)(param_2 + 8);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_2 + 0x10));
  IVar7 = SwiftUI::Image::init(systemName);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar8 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_100005808(&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100fa73a0,&DAT_100c241c8);
  puVar2 = &DAT_100c248b8;
  _swift_getKeyPath();
  _swift_release(pMVar3);
  *param_1 = IVar7.unknown;
  param_1[1] = puVar2;
  param_1[2] = FVar8.unknown;
  return;
}



/* Address: 0x100027e50 | FUN_100027e50 */

void FUN_100027e50(undefined8 *param_1,VerticalAlignment param_2)

{
  VerticalAlignment VVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_40 = unaff_x20[2];
  uStack_38 = (undefined1)unaff_x20[3];
  uStack_2f = *(undefined8 *)((long)unaff_x20 + 0x21);
  local_37 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_2);
  *param_1 = VVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &DAT_100fa79f0;
  FUN_1000037f0(&DAT_100fa79f0,&DAT_100c248a0);
  FUN_1000277a0((long)param_1 + (long)*(int *)(puVar2 + 0x2c),&local_50);
  return;
}



/* Address: 0x100027eb8 | thunk_FUN_1000ae500 */

void thunk_FUN_1000ae500(void)

{
  FUN_1000ae500();
  return;
}



/* Address: 0x100027ebc | thunk_FUN_1000ae568 */

void thunk_FUN_1000ae568(void)

{
  FUN_1000ae568();
  return;
}



/* Address: 0x100027ec0 | thunk_FUN_100054ebc */

void thunk_FUN_100054ebc(void)

{
  FUN_100054ebc();
  return;
}



/* Address: 0x100027ec4 | thunk_FUN_100054f24 */

void thunk_FUN_100054f24(void)

{
  FUN_100054f24();
  return;
}



/* Address: 0x100027ec8 | FUN_100027ec8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100027ec8(undefined8 param_1)

{
  ControlActiveState CVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  OS_os_log *pOVar6;
  OS_os_log *pOVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EnvironmentValues EVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_50 [2];
  ulong uVar5;
  
  puVar3 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)auStack_50 - extraout_x8);
  FUN_100011090();
  puVar4 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,puVar3);
  if ((int)puVar4 == 1) {
    CVar1 = SwiftUI::ControlActiveState::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x20))
              (param_1,puVar12,CONCAT71(extraout_var,CVar1.value));
  }
  else {
    uVar13 = *puVar12;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xb,0,0,0xe,0,0);
    uVar5 = (ulong)bVar2;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar6 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)uVar5);
    if ((bVar2 & 1) == 0) {
      os::_os_log(uVar5,0x100000000,pOVar6,
                  "Accessing Environment\'s value outside of being installed on a View. This will always read the default value and will not update."
                  ,0x80,2,PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    else {
      pOVar7 = pOVar6;
      _os_log_type_enabled(pOVar6,(uint)uVar5 & 0xff);
      if (((ulong)pOVar7 & 1) != 0) {
        puVar8 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar9 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar8 = 0x8200102;
        uVar10 = 0xd000000000000012;
        auStack_50[1] = uVar9;
        FUN_100028124(0xd000000000000012,0x8000000100d8e230,auStack_50 + 1);
        *(undefined8 *)(puVar8 + 1) = uVar10;
        __os_log_impl(0x100000000,pOVar6,(uint)uVar5 & 0xff,
                      "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                      ,puVar8,0xc);
        FUN_100004594(uVar9);
        _swift_slowDealloc(uVar9,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    EVar11 = SwiftUI::EnvironmentValues::typeMetadataAccessor();
    lVar15 = *(long *)(EVar11.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
    lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::EnvironmentValues::init();
    _swift_getAtKeyPath(param_1,lVar14,uVar13);
    _swift_release(uVar13);
    (**(code **)(lVar15 + 8))(lVar14,EVar11.unknown);
  }
  return;
}



/* Address: 0x100028124 | FUN_100028124 */

undefined * FUN_100028124(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  ppuVar2 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_1000281ec(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100eace60;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    local_60 = (undefined *)ppuVar2;
    local_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_10000cbfc(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100004594(&local_60);
  return puVar1;
}



/* Address: 0x1000281ec | FUN_1000281ec */

void FUN_1000281ec(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
                  ulong param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  undefined *local_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if (((ulong)param_5.unknown >> 0x3c & 1) == 0) {
        UVar2 = Swift::_StringObject::get_sharedUTF8(param_5);
        if (UVar2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000282fc);
          (*pcVar1)();
        }
      }
      else {
        UVar2.unknown = (undefined *)((param_6 & 0xfffffffffffffff) + 0x20);
      }
      *param_1 = (ulong)UVar2.unknown;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != (void *)0x0)) &&
          (uVar3 = param_6 >> 0x38 & 0xf, uVar3 < (ulong)(param_3 - (long)param_2))) {
    uStack_38 = param_6 & 0xffffffffffffff;
    local_40 = param_5.unknown;
    _memcpy(param_2,&local_40,uVar3);
    *(undefined1 *)((long)param_2 + uVar3) = 0;
    *param_1 = (ulong)param_2;
    return;
  }
  FUN_1000282fc(param_5.unknown);
  *param_1 = param_6;
  return;
}



/* Address: 0x1000282fc | FUN_1000282fc */

void FUN_1000282fc(void)

{
  FUN_100028360();
  FUN_1000037f0(&DAT_100fa79c0,&DAT_100c26d00);
  _swift_initStaticObject();
  FUN_100028494();
  return;
}



/* Address: 0x100028360 | FUN_100028360 */

undefined * FUN_100028360(UTF8View param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  UnsafeMutableBufferPointer<__int8> into;
  UnsafeBufferPointer<__int8> UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar7 = param_1.unknown & 0xffffffffffff;
    puVar8 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar7;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar8;
    }
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      FUN_100074038(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_100028490;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_100028490:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100028494);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_1000283fc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100028400);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        local_50 = param_1.unknown;
        _memcpy(puVar2 + 0x20,&local_50,(size_t)puVar8);
      }
    }
  }
  else {
    _Var3.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_100074038(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_100028490;
      if (into.unknown != _Var3.unknown) goto LAB_1000283fc;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x100028494 | FUN_100028494 */

void FUN_100028494(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100028578);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100028584();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10002857c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100028580);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100028584);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100028584 | FUN_100028584 */

undefined * FUN_100028584(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100028674);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fa79c0;
    FUN_1000037f0(&DAT_100fa79c0,&DAT_100c26d00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100028674 | FUN_100028674 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010002872c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100028674(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = &DAT_100c24818;
  _swift_getKeyPath(&DAT_100c24818);
  _swift_bridgeObjectRetain();
  puVar2 = &DAT_100fa79c8;
  FUN_1000037f0(&DAT_100fa79c8,&DAT_100c24830);
  puVar3 = &DAT_100fa79d0;
  FUN_100016eac(&DAT_100fa79d0,&DAT_100fa79c8,&DAT_100c24830,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar4 = puVar3;
  FUN_100028750();
  FUN_100028800();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar4,puVar1,FUN_100028ad8,0,puVar2,&DAT_100eb0f18,puVar3,puVar4);
  return;
}



/* Address: 0x100028748 | FUN_100028748 */

void FUN_100028748(void)

{
  long unaff_x20;
  
  FUN_100028674(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100028750 | FUN_100028750 */

void FUN_100028750(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7938 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c27010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c27010,&DAT_100eb2d50);
  DAT_100fa7938 = pTVar1;
  return;
}



/* Address: 0x100028790 | FUN_100028790 */

void FUN_100028790(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fa7940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7930;
  FUN_100005c24(&DAT_100fa7930,&DAT_100c247e0);
  puVar2 = puVar1;
  FUN_100028800();
  puVar3 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_28);
  DAT_100fa7940 = puVar3;
  return;
}



/* Address: 0x100028800 | FUN_100028800 */

void FUN_100028800(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c24850;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c24850,&DAT_100eb0f18);
  DAT_100fa7948 = pTVar1;
  return;
}



/* Address: 0x100028840 | FUN_100028840 */

void FUN_100028840(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7918;
  FUN_100005c24(&DAT_100fa7918,&DAT_100c24760);
  puVar2 = &DAT_100fa7958;
  FUN_100016eac(&DAT_100fa7958,&DAT_100fa7960,&DAT_100c247e8,
                PTR_SwiftUI__SwiftUI__List<undefined,undefined>_>SwiftUI__View_100eab2c8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7950 = puVar3;
  return;
}



/* Address: 0x1000288d8 | FUN_1000288d8 */

undefined8 FUN_1000288d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100026b40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10002891c | FUN_10002891c */

void FUN_10002891c(void)

{
  long lVar1;
  ControlActiveState CVar2;
  long lVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar3 = 0;
  FUN_100026b40();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  lVar5 = (long)*(int *)(lVar3 + 0x14);
  puVar4 = &DAT_100fa7858;
  FUN_1000037f0(&DAT_100fa7858,&DAT_100c26170);
  lVar3 = lVar1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar3,puVar4);
  if ((int)lVar3 == 1) {
    CVar2 = SwiftUI::ControlActiveState::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar2.value) + -8) + 8))
              (lVar1 + lVar5,CONCAT71(extraout_var,CVar2.value));
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar5));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1000289d0 | FUN_1000289d0 */

undefined8 FUN_1000289d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100026b40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100028a14 | FUN_100028a14 */

void FUN_100028a14(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100026b40();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10002747c(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}


