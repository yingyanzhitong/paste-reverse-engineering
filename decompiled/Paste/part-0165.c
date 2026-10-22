/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001f9f18 | FUN_1001f9f18 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001f9f18(undefined8 param_1,undefined8 param_2,ID param_3,long param_4)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = param_3;
  (**(code **)(param_4 + 0x38))(param_3,param_4);
  IVar2 = objc_stub::constraintGreaterThanOrEqualToConstant_(IVar2,param_1);
  *(ID *)(puVar1 + 0x20) = IVar2;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  IVar2 = objc_stub::constraintGreaterThanOrEqualToConstant_(param_3,param_2);
  *(ID *)(puVar1 + 0x28) = IVar2;
  return puVar1;
}



/* Address: 0x1001f9ff4 | FUN_1001f9ff4 */

void FUN_1001f9ff4(void)

{
  DAT_101057758 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_100ea9038 + 8);
  DAT_101057750 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_100ea9038;
  DAT_101057768 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_100ea9038 + 0x18);
  DAT_101057760 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_100ea9038 + 0x10);
  return;
}



/* Address: 0x1001fa010 | FUN_1001fa010 */

undefined8 FUN_1001fa010(void)

{
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  return DAT_101057750;
}



/* Address: 0x1001fa058 | FUN_1001fa058 */

void FUN_1001fa058(void)

{
  return;
}



/* Address: 0x1001fa068 | FUN_1001fa068 */

undefined8 FUN_1001fa068(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Address: 0x1001fa07c | thunk_FUN_1001f9694 */

void thunk_FUN_1001f9694(void)

{
  FUN_1001f9694();
  return;
}



/* Address: 0x1001fa080 | thunk_FUN_1001f96b0 */

void thunk_FUN_1001f96b0(void)

{
  FUN_1001f96b0();
  return;
}



/* Address: 0x1001fa084 | thunk_FUN_1001f96cc */

void thunk_FUN_1001f96cc(void)

{
  FUN_1001f96cc();
  return;
}



/* Address: 0x1001fa088 | thunk_FUN_1001f96e8 */

void thunk_FUN_1001f96e8(void)

{
  FUN_1001f96e8();
  return;
}



/* Address: 0x1001fa08c | thunk_FUN_1001f9704 */

void thunk_FUN_1001f9704(void)

{
  FUN_1001f9704();
  return;
}



/* Address: 0x1001fa090 | thunk_FUN_1001f9720 */

void thunk_FUN_1001f9720(void)

{
  FUN_1001f9720();
  return;
}



/* Address: 0x1001fa094 | thunk_FUN_1001f973c */

void thunk_FUN_1001f973c(void)

{
  FUN_1001f973c();
  return;
}



/* Address: 0x1001fa098 | thunk_FUN_1001f9758 */

void thunk_FUN_1001f9758(void)

{
  FUN_1001f9758();
  return;
}



/* Address: 0x1001fa09c | FUN_1001fa09c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001fa09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  puVar2 = puVar1;
  FUN_1001fa150(puVar1,param_2,param_3);
  _swift_setDeallocating(puVar1);
  _swift_arrayDestroy(puVar1 + 0x20,*(undefined8 *)(puVar1 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return puVar2;
}



/* Address: 0x1001fa14c | thunk_FUN_1001fa150 */

void thunk_FUN_1001fa150(void)

{
  FUN_1001fa150();
  return;
}



/* Address: 0x1001fa150 | FUN_1001fa150 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

MainActor * FUN_1001fa150(_ArrayBuffer param_1,code *param_2)

{
  MainActor *pMVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong self;
  MainActor *pMVar4;
  _ArrayBuffer _Var5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  NSArray *pNVar8;
  ID unaff_x20;
  MainActor *pMVar9;
  ulong uVar10;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    pMVar9 = *(MainActor **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
    _Var5.unknown = param_1.unknown;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    pMVar9 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    _Var5.unknown = pMVar9;
  }
  if (pMVar9 != (MainActor *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001fa270);
          (*pcVar3)();
        }
        self = *(ulong *)(param_1.unknown + uVar10 * 8 + 0x20);
      }
      else {
        self = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,param_1);
      }
      pMVar1 = (MainActor *)(uVar10 + 1);
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001fa26c);
        (*pcVar3)();
      }
      pMVar4 = Swift::MainActor::typeMetadataAccessor();
      _Var5.unknown = Swift::MainActor::get_shared(pMVar4,pMVar4);
      pMVar4 = (MainActor *)_Var5.unknown;
      FUN_1001f7290();
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar6.unknown,pMVar4);
      }
      objc_stub::addSubview_(unaff_x20,self);
      objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self,0);
      _swift_release(_Var5.unknown);
      uVar10 = uVar10 + 1;
    } while (pMVar1 != pMVar9);
  }
  (*param_2)();
  FUN_1001f91f4(0);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar8);
  return (MainActor *)_Var5.unknown;
}



/* Address: 0x1001fa2f4 | FUN_1001fa2f4 */

void FUN_1001fa2f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Address: 0x1001fa2fc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::EnvironmentKey::$_valuesEqual */

bool (extension_SwiftUI)::SwiftUI::EnvironmentKey::__valuesEqual(void)

{
  bool bVar1;
  
  bVar1 = __valuesEqual();
  return bVar1;
}



/* Address: 0x1001fa300 | FUN_1001fa300 */

undefined1  [16] FUN_1001fa300(void)

{
  DismissAction DVar1;
  EnvironmentValues EVar2;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x12;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)&local_70 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1001fa414();
  EVar2.unknown = &DAT_100ec0260;
  SwiftUI::EnvironmentValues::_get_subscript((EnvironmentValues)0x100ec0260);
  SwiftUI::EnvironmentValues::get_dismiss(EVar2);
  pcVar9 = *(code **)(lVar8 + 0x20);
  (*pcVar9)(lVar6,lVar6 - extraout_x12,DVar1.unknown);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ec0190;
  _swift_allocObject(&DAT_100ec0190,uVar7 + lVar5,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = local_70;
  *(undefined8 *)(puVar3 + 0x18) = uStack_68;
  (*pcVar9)(puVar3 + uVar7,lVar6,DVar1.unknown);
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = thunk_FUN_1001fa744;
  return auVar10;
}



/* Address: 0x1001fa414 | FUN_1001fa414 */

void FUN_1001fa414(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c350b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c350b8,&DAT_100ec0260);
  DAT_100fb6238 = pTVar1;
  return;
}



/* Address: 0x1001fa454 | FUN_1001fa454 */

void FUN_1001fa454(code *param_1,undefined8 param_2)

{
  if (param_1 != (code *)0x0) {
    _swift_retain(param_2);
    (*param_1)();
    FUN_100004550(param_1,param_2);
    return;
  }
  SwiftUI::DismissAction::callAsFunction((DismissAction)0x0);
  return;
}



/* Address: 0x1001fa4a0 | thunk_FUN_1001fa6d0 */

void thunk_FUN_1001fa6d0(void)

{
  DismissAction DVar1;
  long unaff_x20;
  ulong uVar2;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(DVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),DVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001fa4a4 | thunk_FUN_1001fa744 */

void thunk_FUN_1001fa744(void)

{
  DismissAction DVar1;
  long unaff_x20;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  FUN_1001fa454(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1001fa4a8 | FUN_1001fa4a8 */

void FUN_1001fa4a8(void)

{
  EnvironmentValues *unaff_x20;
  
  FUN_1001fa414();
  SwiftUI::EnvironmentValues::_set_subscript(unaff_x20);
  return;
}



/* Address: 0x1001fa4e0 | FUN_1001fa4e0 */

undefined1  [16] FUN_1001fa4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  DismissAction DVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  EnvironmentValues EVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  
  puVar9 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x60;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0x606d);
  }
  *param_1 = puVar3;
  puVar3[8] = unaff_x20;
  DVar4 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  pvVar11 = *(void **)(lVar13 + 0x40);
  if (puVar9 == (undefined *)0x0) {
    pvVar5 = _malloc((size_t)pvVar11);
    puVar3[9] = pvVar5;
    pvVar6 = _malloc((size_t)pvVar11);
  }
  else {
    pvVar5 = pvVar11;
    _swift_coroFrameAlloc(pvVar11,0x606d);
    puVar3[9] = pvVar5;
    pvVar6 = pvVar11;
    _swift_coroFrameAlloc(pvVar11,0x606d);
  }
  puVar3[10] = pvVar6;
  pvVar7 = pvVar6;
  FUN_1001fa414();
  puVar3[0xb] = pvVar7;
  EVar8.unknown = &DAT_100ec0260;
  SwiftUI::EnvironmentValues::_get_subscript((EnvironmentValues)0x100ec0260);
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  SwiftUI::EnvironmentValues::get_dismiss(EVar8);
  pcVar14 = *(code **)(lVar13 + 0x20);
  (*pcVar14)(pvVar5,pvVar6,DVar4.unknown);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100ec01b8;
  _swift_allocObject(&DAT_100ec01b8,uVar12 + (long)pvVar11,uVar10 | 7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar2;
  (*pcVar14)(puVar9 + uVar12,pvVar5,DVar4.unknown);
  *puVar3 = thunk_FUN_1001fa744;
  puVar3[1] = puVar9;
  auVar15._8_8_ = puVar3;
  auVar15._0_8_ = FUN_1001fa630;
  return auVar15;
}



/* Address: 0x1001fa630 | FUN_1001fa630 */

void FUN_1001fa630(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  EnvironmentValues *this;
  void *pvVar2;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[10];
  this = (EnvironmentValues *)param_1[8];
  pvVar2 = (void *)param_1[9];
  if ((param_2 & 1) == 0) {
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    SwiftUI::EnvironmentValues::_set_subscript(this);
  }
  else {
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    _swift_retain();
    SwiftUI::EnvironmentValues::_set_subscript(this);
    _swift_release(param_1[1]);
  }
  _free(pvVar1);
  _free(pvVar2);
  _free(param_1);
  return;
}



/* Address: 0x1001fa6d0 | FUN_1001fa6d0 */

void FUN_1001fa6d0(void)

{
  DismissAction DVar1;
  long unaff_x20;
  ulong uVar2;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(DVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),DVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001fa744 | FUN_1001fa744 */

void FUN_1001fa744(void)

{
  DismissAction DVar1;
  long unaff_x20;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  FUN_1001fa454(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1001fa774 | FUN_1001fa774 */

undefined1  [16] FUN_1001fa774(void)

{
  return ZEXT816(0x100ec0238);
}



/* Address: 0x1001fa784 | FUN_1001fa784 */

undefined1  [16] FUN_1001fa784(void)

{
  return ZEXT816(0x100ec0260);
}



/* Address: 0x1001fa794 | thunk_FUN_1001fa6d0 */

void thunk_FUN_1001fa6d0(void)

{
  thunk_FUN_1001fa6d0();
  return;
}



/* Address: 0x1001fa798 | thunk_FUN_1001fa744 */

void thunk_FUN_1001fa744(void)

{
  DismissAction DVar1;
  long unaff_x20;
  
  DVar1 = SwiftUI::DismissAction::typeMetadataAccessor();
  FUN_1001fa454(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1001fa79c | thunk_FUN_1001a7dac */

void thunk_FUN_1001a7dac(void)

{
  FUN_1001a7dac();
  return;
}



/* Address: 0x1001fa7a0 | FUN_1001fa7a0 */

void FUN_1001fa7a0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  puVar1 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  local_33 = param_2;
  local_32 = param_3;
  local_31 = param_4;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,param_5);
  puVar2 = puVar1;
  FUN_1001fa814();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,&local_33,param_5,&DAT_100ec0518,puVar1,puVar2);
  return;
}



/* Address: 0x1001fa814 | FUN_1001fa814 */

void FUN_1001fa814(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c352f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c352f8,&DAT_100ec0518);
  DAT_100fb6240 = pTVar1;
  return;
}



/* Address: 0x1001fa854 | FUN_1001fa854 */

void FUN_1001fa854(undefined8 param_1,CGFloat param_2,byte param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Design DVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  ModifiedContent MVar5;
  undefined7 extraout_var;
  Set SVar6;
  Font FVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  Alignment AVar12;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 auStack_c0 [4];
  long local_a0;
  long local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_100fb6248;
  local_8c = param_4;
  local_88 = param_1;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_a0 - extraout_x8;
  FUN_100005c24(&DAT_100fb6250,&DAT_100c35108);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_a0 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar12.unknown = (undefined *)(lVar10 - extraout_x8_00);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_98 = *(long *)(MVar4.unknown + -8);
  MVar5 = MVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)AVar12.unknown - extraout_x8_01;
  if (param_3 < 2) {
    SwiftUI::Font::Weight::get_medium((Weight)MVar5.unknown);
    DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
              (lVar10,1,1,CONCAT71(extraout_var,DVar1.value));
    SVar6.unknown = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_1001fab44(lVar10);
  }
  else {
    FVar7 = SwiftUI::Font::get_body(MVar5.unknown);
    SVar6.unknown = (undefined *)SwiftUI::Font::bold(FVar7);
    _swift_release(FVar7.unknown);
  }
  (extension_SwiftUI)::SwiftUI::View::_font();
  _swift_release();
  SVar6 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  puVar2 = &DAT_100fb6258;
  FUN_100016eac(&DAT_100fb6258,&DAT_100fb6250,&DAT_100c35108,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = param_6;
  puStack_68 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_70);
  (extension_SwiftUI)::SwiftUI::View::_padding(SVar6);
  (**(code **)(local_a0 + 8))();
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  puStack_78 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  local_80 = puVar8;
  _swift_getWitnessTable(puVar9,MVar4.unknown,&local_80);
  *(undefined **)(lVar11 + -0x10) = MVar4.unknown;
  *(undefined **)(lVar11 + -8) = puVar9;
  *(undefined **)(lVar11 + -0x20) = AVar12.unknown;
  *(undefined **)(lVar11 + -0x18) = MVar3.unknown;
  *(undefined1 *)(lVar11 + -0x28) = 1;
  *(undefined8 *)(lVar11 + -0x30) = 0;
  *(undefined1 *)(lVar11 + -0x38) = 1;
  *(undefined8 *)(lVar11 + -0x40) = 0;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
  (**(code **)(local_98 + 8))(lVar11,MVar4.unknown);
  return;
}



/* Address: 0x1001fab44 | FUN_1001fab44 */

undefined8 FUN_1001fab44(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1001fab8c | FUN_1001fab8c */

void FUN_1001fab8c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  _ConditionalContent _Var5;
  undefined7 extraout_var;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e4;
  long local_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 uVar6;
  
  puVar2 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  local_e4 = param_4;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,param_5);
  puVar3 = puVar2;
  FUN_1001fa814();
  puStack_80 = &DAT_100ec0518;
  lVar4 = 0xff;
  local_88 = param_5;
  local_78 = puVar2;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,0);
  _Var5 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  lVar9 = *(long *)(_Var5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_100 - extraout_x8;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar6 = CONCAT71(extraout_var,bVar1);
  if ((bVar1 & 1) == 0) {
    lVar14 = *(long *)(lVar4 + -8);
    lVar11 = *(long *)(lVar14 + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar13 = lVar11 + 0xfU & 0xfffffffffffffff0;
    lVar7 = lVar10 - uVar13;
    local_f0 = lVar7;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar6 = local_88;
    lVar11 = lVar7 - uVar13;
    local_88._0_2_ = CONCAT11(param_3,param_2);
    local_88._3_5_ = SUB85(uVar6,3);
    local_88 = CONCAT53(local_88._3_5_,CONCAT12((char)local_e4,(undefined2)local_88)) &
               0xffffffffff01ffff;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar11,&local_88,param_5,&DAT_100ec0518,puVar2,puVar3);
    puStack_80 = &DAT_100ec0518;
    puVar8 = &local_88;
    local_88 = param_5;
    local_78 = puVar2;
    puStack_70 = puVar3;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
               ,1);
    pcVar12 = *(code **)(lVar14 + 0x10);
    (*pcVar12)(lVar7,lVar11,lVar4);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar11,lVar4);
    lVar11 = local_f0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar11 = lVar11 - uVar13;
    (*pcVar12)(lVar11,lVar7,lVar4);
    FUN_1001fb178(lVar10,lVar11,PTR___type_metadata_for_SwiftUI_AnyView_100eab970,lVar4,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                  ,puVar8);
    (*pcVar15)(lVar11,lVar4);
    (*pcVar15)(lVar7,lVar4);
  }
  else {
    FUN_1001fb23c();
    puStack_80 = &DAT_100ec0498;
    lVar7 = 0;
    local_f0 = lVar4;
    local_88 = param_5;
    local_78 = puVar2;
    puStack_70 = (undefined *)uVar6;
    _swift_getOpaqueTypeMetadata2
              (0,&local_88,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,0);
    lVar14 = *(long *)(lVar7 + -8);
    lVar4 = *(long *)(lVar14 + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar13 = lVar4 + 0xfU & 0xfffffffffffffff0;
    lVar11 = lVar10 - uVar13;
    local_100 = lVar11;
    local_f8 = lVar11;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar11 = lVar11 - uVar13;
    local_88 = CONCAT62(local_88._2_6_,CONCAT11((char)local_e4,param_3)) & 0xffffffffffff01ff;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar11,&local_88,param_5,&DAT_100ec0498,puVar2,uVar6);
    puStack_80 = &DAT_100ec0498;
    puVar8 = &local_88;
    local_88 = param_5;
    local_78 = puVar2;
    puStack_70 = (undefined *)uVar6;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,1);
    lVar4 = local_100;
    pcVar12 = *(code **)(lVar14 + 0x10);
    (*pcVar12)(local_100,lVar11,lVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar11,lVar7);
    lVar11 = local_f8;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar11 = lVar11 - uVar13;
    (*pcVar12)(lVar11,lVar4,lVar7);
    lVar14 = lVar11;
    FUN_1001fb038(lVar11,lVar7,puVar8);
    puStack_80 = &DAT_100ec0518;
    puVar8 = &local_88;
    local_a0 = lVar14;
    local_88 = param_5;
    local_78 = puVar2;
    puStack_70 = puVar3;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
               ,1);
    FUN_1001fb0b4(lVar10,&local_a0,PTR___type_metadata_for_SwiftUI_AnyView_100eab970,local_f0,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                  ,puVar8);
    _swift_release(lVar14);
    (*pcVar15)(lVar11,lVar7);
    (*pcVar15)(lVar4,lVar7);
  }
  puStack_80 = &DAT_100ec0518;
  puVar8 = &local_88;
  local_88 = param_5;
  local_78 = puVar2;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeConformance2
            (puVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  local_98 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puStack_90 = puVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var5.unknown,&local_98);
  (**(code **)(lVar9 + 0x10))(param_1,lVar10,_Var5.unknown);
  (**(code **)(lVar9 + 8))(lVar10,_Var5.unknown);
  return;
}



/* Address: 0x1001fb038 | FUN_1001fb038 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001fb09c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001fb038(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(param_2 + -8) + 0x40),param_1,param_1);
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SwiftUI::AnyView::_init(param_1,param_2,param_3);
  return;
}



/* Address: 0x1001fb0b4 | FUN_1001fb0b4 */

void FUN_1001fb0b4(undefined8 param_1,long param_2)

{
  Storage SVar1;
  undefined7 extraout_var;
  long extraout_x8;
  undefined1 *puVar2;
  
  SVar1 = SwiftUI::_ConditionalContent::Storage::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(CONCAT71(extraout_var,SVar1.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(puVar2,param_1,param_2);
  _swift_storeEnumTagMultiPayload(puVar2,CONCAT71(extraout_var,SVar1.value),0);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar2);
  return;
}



/* Address: 0x1001fb178 | FUN_1001fb178 */

void FUN_1001fb178(undefined8 param_1,undefined8 param_2,long param_3)

{
  Storage SVar1;
  undefined7 extraout_var;
  long extraout_x8;
  undefined1 *puVar2;
  
  SVar1 = SwiftUI::_ConditionalContent::Storage::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(CONCAT71(extraout_var,SVar1.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_1,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,CONCAT71(extraout_var,SVar1.value),1);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar2);
  return;
}



/* Address: 0x1001fb23c | FUN_1001fb23c */

void FUN_1001fb23c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6260 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c352c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c352c0,&DAT_100ec0498);
  DAT_100fb6260 = pTVar1;
  return;
}



/* Address: 0x1001fb27c | FUN_1001fb27c */

void FUN_1001fb27c(undefined8 param_1,undefined1 param_2,undefined4 param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  _ConditionalContent _Var5;
  undefined7 extraout_var;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long local_f0;
  long local_e8;
  undefined4 local_dc;
  long local_98;
  undefined *local_90;
  ulong *puStack_88;
  ulong local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 uVar6;
  
  puVar2 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  local_dc = param_3;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,param_4);
  puVar3 = puVar2;
  FUN_1001fa814();
  puStack_78 = &DAT_100ec0518;
  lVar4 = 0xff;
  local_80 = param_4;
  local_70 = puVar2;
  puStack_68 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,0);
  _Var5 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  lVar9 = *(long *)(_Var5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_f0 - extraout_x8;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar6 = CONCAT71(extraout_var,bVar1);
  if ((bVar1 & 1) == 0) {
    lVar11 = *(long *)(lVar4 + -8);
    lVar12 = *(long *)(lVar11 + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar16 = lVar12 + 0xfU & 0xfffffffffffffff0;
    lVar14 = lVar10 - uVar16;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar12 = lVar14 - uVar16;
    local_80 = ((ulong)CONCAT52((int5)(local_80 >> 0x18),CONCAT11((char)local_dc,param_2)) &
               0xffffffffff01ff) << 8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar12,&local_80,param_4,&DAT_100ec0518,puVar2,puVar3);
    puStack_78 = &DAT_100ec0518;
    puVar8 = &local_80;
    local_80 = param_4;
    local_70 = puVar2;
    puStack_68 = puVar3;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
               ,1);
    pcVar15 = *(code **)(lVar11 + 0x10);
    (*pcVar15)(lVar14,lVar12,lVar4);
    pcVar13 = *(code **)(lVar11 + 8);
    (*pcVar13)(lVar12,lVar4);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar12 = lVar14 - uVar16;
    (*pcVar15)(lVar12,lVar14,lVar4);
    FUN_1001fb178(lVar10,lVar12,PTR___type_metadata_for_SwiftUI_AnyView_100eab970,lVar4,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                  ,puVar8);
    (*pcVar13)(lVar12,lVar4);
    (*pcVar13)(lVar14,lVar4);
  }
  else {
    FUN_1001fb734();
    puStack_78 = &DAT_100ec0418;
    lVar7 = 0;
    local_80 = param_4;
    local_70 = puVar2;
    puStack_68 = (undefined *)uVar6;
    _swift_getOpaqueTypeMetadata2
              (0,&local_80,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,0);
    lVar14 = *(long *)(lVar7 + -8);
    lVar12 = *(long *)(lVar14 + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar16 = lVar12 + 0xfU & 0xfffffffffffffff0;
    lVar11 = lVar10 - uVar16;
    local_f0 = lVar11;
    local_e8 = lVar11;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar11 = lVar11 - uVar16;
    local_80 = CONCAT62(local_80._2_6_,CONCAT11((char)local_dc,param_2)) & 0xffffffffffff01ff;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar11,&local_80,param_4,&DAT_100ec0418,puVar2,uVar6);
    puStack_78 = &DAT_100ec0418;
    puVar8 = &local_80;
    local_80 = param_4;
    local_70 = puVar2;
    puStack_68 = (undefined *)uVar6;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,1);
    lVar12 = local_f0;
    pcVar13 = *(code **)(lVar14 + 0x10);
    (*pcVar13)(local_f0,lVar11,lVar7);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar11,lVar7);
    lVar11 = local_e8;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar11 = lVar11 - uVar16;
    (*pcVar13)(lVar11,lVar12,lVar7);
    lVar14 = lVar11;
    FUN_1001fb038(lVar11,lVar7,puVar8);
    puStack_78 = &DAT_100ec0518;
    puVar8 = &local_80;
    local_98 = lVar14;
    local_80 = param_4;
    local_70 = puVar2;
    puStack_68 = puVar3;
    _swift_getOpaqueTypeConformance2
              (puVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
               ,1);
    FUN_1001fb0b4(lVar10,&local_98,PTR___type_metadata_for_SwiftUI_AnyView_100eab970,lVar4,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                  ,puVar8);
    _swift_release(lVar14);
    (*pcVar15)(lVar11,lVar7);
    (*pcVar15)(lVar12,lVar7);
  }
  puStack_78 = &DAT_100ec0518;
  puVar8 = &local_80;
  local_80 = param_4;
  local_70 = puVar2;
  puStack_68 = puVar3;
  _swift_getOpaqueTypeConformance2
            (puVar8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  local_90 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puStack_88 = puVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var5.unknown,&local_90);
  (**(code **)(lVar9 + 0x10))(param_1,lVar10,_Var5.unknown);
  (**(code **)(lVar9 + 8))(lVar10,_Var5.unknown);
  return;
}



/* Address: 0x1001fb734 | FUN_1001fb734 */

void FUN_1001fb734(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35288;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35288,&DAT_100ec0418);
  DAT_100fb6268 = pTVar1;
  return;
}



/* Address: 0x1001fb774 | thunk_FUN_1001fb778 */

void thunk_FUN_1001fb778(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35110;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35110,&DAT_100ec0310);
  DAT_100fb6270 = pTVar1;
  return;
}



/* Address: 0x1001fb778 | FUN_1001fb778 */

void FUN_1001fb778(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35110;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35110,&DAT_100ec0310);
  DAT_100fb6270 = pTVar1;
  return;
}



/* Address: 0x1001fb7b8 | thunk_FUN_1001fb7bc */

void thunk_FUN_1001fb7bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35178,&DAT_100ec03a0);
  DAT_100fb6278 = pTVar1;
  return;
}



/* Address: 0x1001fb7bc | FUN_1001fb7bc */

void FUN_1001fb7bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35178,&DAT_100ec03a0);
  DAT_100fb6278 = pTVar1;
  return;
}



/* Address: 0x1001fb7fc | FUN_1001fb7fc */

void FUN_1001fb7fc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001fb808 | FUN_1001fb808 */

undefined1  [16] FUN_1001fb808(void)

{
  return ZEXT816(0x100ec0310);
}



/* Address: 0x1001fb818 | FUN_1001fb818 */

undefined1  [16] FUN_1001fb818(void)

{
  return ZEXT816(0x100ec03a0);
}



/* Address: 0x1001fb828 | FUN_1001fb828 */

void FUN_1001fb828(void)

{
  Button BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  BVar1 = SwiftUI::Button::typeMetadataAccessor();
  puVar2 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,BVar1.unknown);
  puVar3 = puVar2;
  FUN_1001fa814();
  puStack_38 = &DAT_100ec0518;
  local_40 = BVar1.unknown;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_40,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  return;
}



/* Address: 0x1001fb894 | FUN_1001fb894 */

void FUN_1001fb894(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  ModifiedContent MVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100005c24(&DAT_100fb6250,&DAT_100c35108);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar6 = &DAT_100fb6258;
  FUN_100016eac(&DAT_100fb6258,&DAT_100fb6250,&DAT_100c35108,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_50 = uVar1;
  puStack_48 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_50);
  puStack_58 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar6 = puVar2;
  local_60 = puVar7;
  _swift_getWitnessTable(puVar2,MVar4.unknown,&local_60);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  local_70 = puVar6;
  _swift_getWitnessTable(puVar2,MVar5.unknown,&local_70);
  return;
}



/* Address: 0x1001fb998 | FUN_1001fb998 */

void FUN_1001fb998(void)

{
  undefined *puVar1;
  Button BVar2;
  undefined *puVar3;
  undefined *puVar4;
  _ConditionalContent _Var5;
  undefined **ppuVar6;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  BVar2 = SwiftUI::Button::typeMetadataAccessor();
  puVar3 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,BVar2.unknown);
  puVar4 = puVar3;
  FUN_1001fa814();
  puVar1 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
  ;
  puStack_58 = &DAT_100ec0518;
  local_60 = BVar2.unknown;
  local_50 = puVar3;
  puStack_48 = puVar4;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,0);
  _Var5 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  puStack_58 = &DAT_100ec0518;
  ppuVar6 = &local_60;
  local_60 = BVar2.unknown;
  local_50 = puVar3;
  puStack_48 = puVar4;
  _swift_getOpaqueTypeConformance2(ppuVar6,puVar1,1);
  local_70 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  ppuStack_68 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var5.unknown,&local_70);
  return;
}



/* Address: 0x1001fba70 | FUN_1001fba70 */

void FUN_1001fba70(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001fba7c | FUN_1001fba7c */

undefined1  [16] FUN_1001fba7c(void)

{
  return ZEXT816(0x100ec0418);
}



/* Address: 0x1001fba8c | thunk_FUN_1001fba90 */

int thunk_FUN_1001fba90(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_1001fbb0c;
        goto LAB_1001fbaec;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1001fbaec:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_1001fbb0c:
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 1)) {
    uVar1 = *(byte *)((long)param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1001fba90 | FUN_1001fba90 */

int FUN_1001fba90(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_1001fbb0c;
        goto LAB_1001fbaec;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1001fbaec:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_1001fbb0c:
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 1)) {
    uVar1 = *(byte *)((long)param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1001fbb30 | thunk_FUN_1001fbb34 */

void thunk_FUN_1001fbb34(undefined2 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        if (param_2 == 0) {
          return;
        }
        goto LAB_1001fbbb0;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
LAB_1001fbbb0:
      *(char *)((long)param_1 + 1) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      param_1[1] = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      *(char *)(param_1 + 1) = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1001fbb34 | FUN_1001fbb34 */

void FUN_1001fbb34(undefined2 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        if (param_2 == 0) {
          return;
        }
        goto LAB_1001fbbb0;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
LAB_1001fbbb0:
      *(char *)((long)param_1 + 1) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      param_1[1] = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      *(char *)(param_1 + 1) = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1001fbbe0 | FUN_1001fbbe0 */

undefined1  [16] FUN_1001fbbe0(void)

{
  return ZEXT816(0x100ec0498);
}



/* Address: 0x1001fbbf0 | FUN_1001fbbf0 */

void FUN_1001fbbf0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001fbc04 | FUN_1001fbc04 */

int FUN_1001fbc04(uint3 *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    if (param_2 + 0x1ffff01 >> 0x18 == 0) {
      uVar1 = (uint)*(ushort *)((long)param_1 + 3);
      if (*(ushort *)((long)param_1 + 3) == 0) goto LAB_1001fbc60;
    }
    else {
      uVar1 = (uint)*(byte *)((long)param_1 + 3);
      if (uVar1 == 0) goto LAB_1001fbc60;
    }
    return ((uint)*param_1 | uVar1 << 0x18) - 0xffff01;
  }
LAB_1001fbc60:
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 2)) {
    uVar1 = *(byte *)((long)param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1001fbc84 | FUN_1001fbc84 */

void FUN_1001fbc84(undefined2 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_3 + 0x1ffff01 >> 0x18 == 0) {
    iVar2 = 2;
  }
  if (param_3 < 0xff) {
    iVar2 = 0;
  }
  if (param_2 < 0xff) {
    if (iVar2 != 0) {
      if (iVar2 != 2) {
        *(undefined1 *)((long)param_1 + 3) = 0;
        if (param_2 == 0) {
          return;
        }
        goto LAB_1001fbcfc;
      }
      *(undefined2 *)((long)param_1 + 3) = 0;
    }
    if (param_2 != 0) {
LAB_1001fbcfc:
      *(char *)(param_1 + 1) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    *param_1 = (short)param_2;
    *(char *)(param_1 + 1) = (char)(param_2 >> 0x10);
    if (iVar2 != 0) {
      iVar1 = (param_2 >> 0x18) + 1;
      if (iVar2 != 2) {
        *(char *)((long)param_1 + 3) = (char)iVar1;
        return;
      }
      *(short *)((long)param_1 + 3) = (short)iVar1;
      return;
    }
  }
  return;
}


