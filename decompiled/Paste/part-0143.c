/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001ae148 | _TtC12PasteRouting16WindowTransition::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC12PasteRouting16WindowTransition::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PasteRouting.WindowTransition",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ae174);
  (*pcVar1)();
}



/* Address: 0x1001ae174 | _TtC12PasteRouting16WindowTransition::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC12PasteRouting16WindowTransition::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onPresented),((undefined8 *)(param_1 + onPresented))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onDismissed),((undefined8 *)(param_1 + onDismissed))[1]);
  return;
}



/* Address: 0x1001ae1c4 | FUN_1001ae1c4 */

undefined1 FUN_1001ae1c4(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC12PasteRouting16WindowTransition::isAnimated,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Address: 0x1001ae208 | FUN_1001ae208 */

void FUN_1001ae208(undefined1 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC12PasteRouting16WindowTransition::isAnimated,auStack_48,1,0);
  *(undefined1 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Address: 0x1001ae258 | FUN_1001ae258 */

undefined1  [16] FUN_1001ae258(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC12PasteRouting16WindowTransition::isAnimated,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1001ae29c | FUN_1001ae29c */

void FUN_1001ae29c(void)

{
  FUN_1001ae4f0();
  return;
}



/* Address: 0x1001ae2bc | FUN_1001ae2bc */

void FUN_1001ae2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001ae600(param_2,param_3);
  return;
}



/* Address: 0x1001ae2e4 | FUN_1001ae2e4 */

void FUN_1001ae2e4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  objc_stub::setContentViewController_
            (*(ID *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::window),0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _swift_retain(uVar3);
    (*pcVar2)(1);
    FUN_100004550(pcVar2,uVar3);
  }
  return;
}



/* Address: 0x1001ae360 | _TtC12PasteRouting16WindowTransition::windowWillClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC12PasteRouting16WindowTransition::windowWillClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  Notification NVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  NVar11 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar11.syncInProgress.bridgeObject;
  pcVar6 = NVar11.syncInProgress.str;
  pcVar2 = NVar11.pastePaused.str;
  lVar10 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar10 + 0x40),pcVar2,NVar11.pastePaused.bridgeObject);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001ae6c8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    pMVar3 = (MainActor *)0x23;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0x34;
    _swift_task_reportUnexpectedExecutor("PasteRouting/WindowTransition.swift");
  }
  NVar11.pastePaused.bridgeObject = pMVar3;
  NVar11.pastePaused.str = (char *)param_3;
  NVar11.syncInProgress.bridgeObject = pvVar7;
  NVar11.syncInProgress.str = pcVar6;
  NVar11 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar11);
  objc_stub::setContentViewController_
            (*(ID *)(param_1 + window),0,NVar11.syncInProgress.bridgeObject);
  puVar1 = (undefined8 *)(param_1 + onDismissed);
  _swift_beginAccess(puVar1,auStack_68,0,0);
  pcVar9 = (code *)*puVar1;
  if (pcVar9 == (code *)0x0) {
    (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
    _swift_release(pMVar4);
  }
  else {
    uVar8 = puVar1[1];
    _swift_retain(uVar8);
    (*pcVar9)(1);
    FUN_100004550(pcVar9,uVar8);
    (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
    _swift_release(pMVar4);
  }
  return;
}



/* Address: 0x1001ae4f0 | FUN_1001ae4f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ae4f0(undefined8 param_1,undefined8 param_2,ID param_3)

{
  undefined8 *puVar1;
  ID self;
  ID self_00;
  ID self_01;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 extraout_d0;
  undefined1 auStack_68 [24];
  
  self_01 = *(ID *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::window);
  objc_stub::setDelegate_(self_01);
  self = objc_stub::view(param_3);
  self_00 = objc_stub::view(param_3);
  objc_stub::fittingSize(self_00);
  objc_stub::setFrameSize_(self,extraout_d0,param_2);
  objc_stub::setContentViewController_(self_01,param_3);
  objc_stub::makeKeyAndOrderFront_(self_01,0);
  objc_stub::orderFrontRegardless(self_01);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_68,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar2 = puVar1[1];
    _swift_retain(uVar2);
    (*pcVar3)(self_01);
    FUN_100004550(pcVar3,uVar2);
  }
  return;
}



/* Address: 0x1001ae600 | FUN_1001ae600 */

void FUN_1001ae600(code *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  ID self;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::window);
  objc_stub::orderOut_(self,0);
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  objc_stub::setContentViewController_(self,0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _swift_retain(uVar3);
    (*pcVar2)(0);
    FUN_100004550(pcVar2,uVar3);
  }
  return;
}



/* Address: 0x1001ae6a8 | FUN_1001ae6a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001ae6a8(void)

{
  return ZEXT816(0x100f95e08);
}



/* Address: 0x1001ae6c8 | FUN_1001ae6c8 */

void FUN_1001ae6c8(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fb4b18 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fb4b18 = puVar2;
  return;
}



/* Address: 0x1001ae70c | thunk_FUN_100011128 */

void thunk_FUN_100011128(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_retain(param_2);
    return;
  }
  return;
}



/* Address: 0x1001ae710 | thunk_FUN_100004550 */

void thunk_FUN_100004550(void)

{
  FUN_100004550();
  return;
}



/* Address: 0x1001ae714 | FUN_1001ae714 */

undefined8 FUN_1001ae714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1001ae768(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1001ae768 | FUN_1001ae768 */

void FUN_1001ae768(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x12;
  long *unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar5 = *unaff_x20;
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = auStack_70 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_68 = extraout_x12;
  (**(code **)(lVar2 + 0x10))(puVar4,param_1,param_2);
  uVar8 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar7 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe1d0;
  _swift_allocObject(&DAT_100ebe1d0,uVar7 + extraout_x12,uVar8 | 7);
  lVar6 = *(long *)(lVar5 + 0x50);
  *(long *)(puVar1 + 0x10) = lVar6;
  *(long *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  pcVar3 = *(code **)(lVar2 + 0x20);
  (*pcVar3)(puVar1 + uVar7,puVar4,param_2);
  unaff_x20[2] = (long)FUN_1001ae8dc;
  unaff_x20[3] = (long)puVar1;
  lVar2 = param_1;
  lVar5 = lVar6;
  FUN_1001ae914(param_1,lVar6,param_2,param_3);
  unaff_x20[4] = lVar2;
  unaff_x20[5] = lVar5;
  lVar2 = param_1;
  lVar5 = lVar6;
  FUN_1001ae9dc(param_1,lVar6,param_2,param_3);
  unaff_x20[6] = lVar2;
  unaff_x20[7] = lVar5;
  (*pcVar3)(puVar4,param_1,param_2);
  puVar1 = &DAT_100ebe1f8;
  _swift_allocObject(&DAT_100ebe1f8,uVar7 + local_68,uVar8 | 7);
  *(long *)(puVar1 + 0x10) = lVar6;
  *(long *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  (*pcVar3)(puVar1 + uVar7,puVar4,param_2);
  unaff_x20[8] = (long)FUN_1001aeaa4;
  unaff_x20[9] = (long)puVar1;
  return;
}



/* Address: 0x1001ae8d8 | thunk_FUN_1001aecb8 */

void thunk_FUN_1001aecb8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001ae8dc | FUN_1001ae8dc */

void FUN_1001ae8dc(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x1001ae914 | FUN_1001ae914 */

undefined1  [16]
FUN_1001ae914(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe328;
  _swift_allocObject(&DAT_100ebe328,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1001aed08;
  return auVar6;
}



/* Address: 0x1001ae9dc | FUN_1001ae9dc */

undefined1  [16]
FUN_1001ae9dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe300;
  _swift_allocObject(&DAT_100ebe300,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1001aec80;
  return auVar6;
}



/* Address: 0x1001aeaa4 | FUN_1001aeaa4 */

void FUN_1001aeaa4(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x30))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x1001aeadc | FUN_1001aeadc */

void FUN_1001aeadc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Address: 0x1001aeafc | FUN_1001aeafc */

void FUN_1001aeafc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  return;
}



/* Address: 0x1001aeb1c | FUN_1001aeb1c */

void FUN_1001aeb1c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x40))();
  return;
}



/* Address: 0x1001aeb3c | FUN_1001aeb3c */

void FUN_1001aeb3c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1001aeb70 | FUN_1001aeb70 */

void FUN_1001aeb70(void)

{
  FUN_1001aeb3c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001aeb90 | FUN_1001aeb90 */

void FUN_1001aeb90(void)

{
  FUN_1000386a0();
  return;
}



/* Address: 0x1001aebb0 | FUN_1001aebb0 */

void FUN_1001aebb0(void)

{
  FUN_1001aeadc();
  return;
}



/* Address: 0x1001aebd0 | FUN_1001aebd0 */

void FUN_1001aebd0(void)

{
  FUN_1001aeafc();
  return;
}



/* Address: 0x1001aebf0 | FUN_1001aebf0 */

void FUN_1001aebf0(void)

{
  FUN_1001aeb1c();
  return;
}



/* Address: 0x1001aec10 | FUN_1001aec10 */

tuple2_conflict3 FUN_1001aec10(undefined8 param_1)

{
  tuple2_conflict3 tVar1;
  
  tVar1 = Swift::Array<undefined>::_allocateUninitialized(0,param_1);
  return tVar1;
}



/* Address: 0x1001aec1c | FUN_1001aec1c */

undefined8 FUN_1001aec1c(void)

{
  return 300;
}



/* Address: 0x1001aec24 | FUN_1001aec24 */

undefined8 FUN_1001aec24(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x58);
}



/* Address: 0x1001aec2c | FUN_1001aec2c */

void FUN_1001aec2c(long param_1)

{
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  puStack_28 = local_30;
  local_20 = local_30;
  puStack_18 = local_30;
  _swift_initClassMetadata2(param_1,0,4,&local_30,param_1 + 0x60);
  return;
}



/* Address: 0x1001aec74 | FUN_1001aec74 */

void FUN_1001aec74(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001aec80 | FUN_1001aec80 */

void FUN_1001aec80(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x28))();
  return;
}



/* Address: 0x1001aecb8 | FUN_1001aecb8 */

void FUN_1001aecb8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001aed08 | FUN_1001aed08 */

void FUN_1001aed08(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x20))();
  return;
}



/* Address: 0x1001aed40 | thunk_FUN_1001aecb8 */

void thunk_FUN_1001aecb8(void)

{
  thunk_FUN_1001aecb8();
  return;
}



/* Address: 0x1001aed44 | thunk_FUN_1001aecb8 */

void thunk_FUN_1001aecb8(void)

{
  thunk_FUN_1001aecb8();
  return;
}



/* Address: 0x1001aed48 | thunk_FUN_1001aecb8 */

void thunk_FUN_1001aecb8(void)

{
  thunk_FUN_1001aecb8();
  return;
}



/* Address: 0x1001aed4c | _swift_bridgeObjectRetain */

void _swift_bridgeObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_100eae170)();
  return;
}



/* Address: 0x1001aed50 | FUN_1001aed50 */

void FUN_1001aed50(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001aed78 | FUN_1001aed78 */

void FUN_1001aed78(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x1001aeda0 | FUN_1001aeda0 */

undefined1  [16] FUN_1001aeda0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001aedb0 | FUN_1001aedb0 */

void FUN_1001aedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1001aedb8 | FUN_1001aedb8 */

void FUN_1001aedb8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x1001aede0 | FUN_1001aede0 */

void FUN_1001aede0(void)

{
  undefined8 in_x3;
  
  _swift_bridgeObjectRetain(in_x3);
  return;
}



/* Address: 0x1001aede8 | FUN_1001aede8 */

void FUN_1001aede8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x1001aee10 | FUN_1001aee10 */

undefined1  [16] FUN_1001aee10(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001aee20 | FUN_1001aee20 */

bool FUN_1001aee20(long param_1,long param_2,long param_3,long param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



/* Address: 0x1001aee30 | FUN_1001aee30 */

void FUN_1001aee30(undefined8 param_1,Hasher param_2,__uint64 param_3)

{
  Swift::Hasher::_combine((__uint64)param_2.unknown,param_2);
  Swift::Hasher::_combine(param_3,param_2);
  return;
}



/* Address: 0x1001aee60 | FUN_1001aee60 */

void FUN_1001aee60(__uint64 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(param_1,HVar1);
  Swift::Hasher::_combine((__uint64)param_2.unknown,HVar1);
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1001aeebc | FUN_1001aeebc */

void FUN_1001aeebc(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  Hasher HVar2;
  __uint64 *unaff_x20;
  
  _Var1 = *unaff_x20;
  HVar2.unknown = (undefined *)unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1001aef14 | FUN_1001aef14 */

void FUN_1001aef14(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 *unaff_x20;
  
  _Var1 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x1001aef4c | FUN_1001aef4c */

void FUN_1001aef4c(__int64 param_1,Hasher param_2)

{
  __uint64 _Var1;
  Hasher HVar2;
  __uint64 *unaff_x20;
  
  _Var1 = *unaff_x20;
  HVar2.unknown = (undefined *)unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1001aefa0 | FUN_1001aefa0 */

bool FUN_1001aefa0(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Address: 0x1001aefb8 | FUN_1001aefb8 */

bool FUN_1001aefb8(long param_1,long param_2,long param_3,long param_4)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return false;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    return false;
  }
  return *(long *)(param_4 + 0x10) == 0;
}



/* Address: 0x1001aeff8 | FUN_1001aeff8 */

long FUN_1001aeff8(long param_1,long param_2)

{
  return *(long *)(param_2 + 0x10) - *(long *)(param_1 + 0x10);
}



/* Address: 0x1001af008 | FUN_1001af008 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001af14c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined *
FUN_1001af008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Set<undefined> SVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = param_12;
  local_98 = (undefined *)param_10;
  local_a8 = (undefined *)param_9;
  local_80 = *(long *)(param_8 + -8);
  local_78 = (undefined *)param_11;
  lVar7 = param_5;
  lVar10 = param_6;
  local_d0 = param_7;
  local_b0 = param_2;
  local_90 = param_1;
  local_88 = param_3;
  local_70 = param_4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40),param_1,param_1);
  lVar12 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  lVar9 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar10 + -8);
  local_c0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  local_a0 = lVar7;
  (**(code **)(lVar8 + 0x10))(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar2 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708;
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  SVar6 = Swift::Set::_init(param_1,PTR___type_metadata_for_Swift_Int_100eac6f8,param_5,
                            PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708
                            ,local_a8);
  uVar3 = local_b0;
  local_c8 = param_6;
  local_a8 = SVar6.unknown;
  (**(code **)(lVar11 + 0x10))(lVar10,local_b0,param_6);
  local_98 = (undefined *)Swift::Set::_init(SVar6.unknown,puVar1,param_6,puVar2,local_98);
  uVar4 = local_88;
  lVar10 = local_b8;
  lVar7 = local_d0;
  (**(code **)(local_b8 + 0x10))(lVar9,local_88,local_d0);
  FUN_1001af27c();
  SVar6 = Swift::Set::_init(lVar9,&DAT_100ebe460,lVar7,lVar9,local_78);
  uVar5 = local_70;
  lVar9 = local_80;
  local_78 = SVar6.unknown;
  (**(code **)(local_80 + 0x10))(lVar12,local_70,param_8);
  Swift::Set::_init(SVar6.unknown,PTR___type_metadata_for_Swift_Int_100eac6f8,param_8,puVar2,
                    local_68);
  (**(code **)(lVar9 + 8))(uVar5,param_8);
  (**(code **)(lVar10 + 8))(uVar4,lVar7);
  (**(code **)(local_c0 + 8))(uVar3,local_c8);
  (**(code **)(lVar8 + 8))(local_90,local_a0);
  return local_a8;
}



/* Address: 0x1001af27c | FUN_1001af27c */

void FUN_1001af27c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4c38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32b48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32b48,&DAT_100ebe460);
  DAT_100fb4c38 = pTVar1;
  return;
}



/* Address: 0x1001af2bc | FUN_1001af2bc */

void FUN_1001af2bc(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_1001b0218(auStack_18,param_1);
  return;
}



/* Address: 0x1001af2e0 | FUN_1001af2e0 */

void FUN_1001af2e0(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_1001b0218(auStack_28,param_1);
  return;
}


