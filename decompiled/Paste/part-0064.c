/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000c9ff0 | FUN_1000c9ff0 */

void FUN_1000c9ff0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Address: 0x1000c9ffc | FUN_1000c9ffc */

void FUN_1000c9ffc(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ca004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + -8) + 0x38))();
  return;
}



/* Address: 0x1000ca008 | _swift_getEnumCaseMultiPayload */

void _swift_getEnumCaseMultiPayload(void)

{
  _swift_getEnumCaseMultiPayload();
  return;
}



/* Address: 0x1000ca00c | FUN_1000ca00c */

void FUN_1000ca00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_storeEnumTagMultiPayload(param_1,param_3,param_2);
  return;
}



/* Address: 0x1000ca01c | FUN_1000ca01c */

undefined1  [16] FUN_1000ca01c(undefined8 param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_48 = *(long *)(UVar1.unknown + -8) + 0x40;
    local_38 = &DAT_100c2a3f8;
    puStack_30 = &DAT_100c2a410;
    local_28 = &DAT_100c2a428;
    lStack_40 = local_48;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,5,&local_48);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x1000ca0a0 | FUN_1000ca0a0 */

void FUN_1000ca0a0(void)

{
  FUN_100003a00(&DAT_100fac2e0,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  return;
}



/* Address: 0x1000ca0cc | FUN_1000ca0cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000ca1c8) */

void FUN_1000ca0cc(long param_1,undefined8 param_2,URL param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  URL UVar2;
  ulong uVar3;
  ulong uVar4;
  ID self;
  URL UVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  code *pcVar9;
  String SVar10;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = (undefined *)NSFileManager::temporaryDirectory(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  SVar10.bridgeObject = (void *)0xea00000000006270;
  SVar10.str = (char *)0x636d2e6574736170;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(uVar3,UVar2.unknown);
  FUN_100476804(uVar4,param_6,param_4,param_5);
  lVar6 = 0;
  FUN_1000c99d0();
  iVar1 = *(int *)(lVar6 + 0x18);
  (**(code **)(lVar8 + 0x10))(param_1 + iVar1,uVar4,UVar2.unknown);
  uVar7 = 0;
  FUN_1000c932c(0);
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar7,0);
  Foundation::UUID::init();
  (*pcVar9)(uVar4,UVar2.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar6 + 0x14)) = param_7;
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ca288 | FUN_1000ca288 */

void FUN_1000ca288(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_62;
  byte local_61;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100c2a738;
  _swift_getKeyPath(&DAT_100c2a738);
  puVar2 = &DAT_100c2a760;
  _swift_getKeyPath(&DAT_100c2a760);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((local_61 & 1) == 0) {
    pPVar3 = (Published *)&DAT_100c2a738;
    _swift_getKeyPath(&DAT_100c2a738);
    _swift_getKeyPath(&DAT_100c2a760);
    local_62 = 1;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar3,&local_62);
    FUN_1000da768(&local_70);
    TVar4 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(auStack_80 + -extraout_x8,1,1,TVar4.unknown)
    ;
    pMVar5 = (MainActor *)&DAT_100eb4a40;
    _swift_allocObject(&DAT_100eb4a40,0x18,7);
    _swift_weakInit(pMVar5 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::logger);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_100eaec10;
    local_78 = param_4;
    _swift_retain(uVar8);
    _swift_retain(local_70);
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(param_5);
    pMVar6 = pMVar5;
    _swift_retain();
    pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
    puVar7 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar1 = &DAT_100eb4b08;
    _swift_allocObject(&DAT_100eb4b08,0x60,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar6;
    *(undefined8 **)(puVar1 + 0x18) = puVar7;
    *(undefined8 *)(puVar1 + 0x20) = local_70;
    puVar1[0x28] = param_1;
    *(undefined8 *)(puVar1 + 0x30) = param_2;
    *(undefined8 *)(puVar1 + 0x38) = param_3;
    *(undefined8 *)(puVar1 + 0x40) = local_78;
    *(undefined8 *)(puVar1 + 0x48) = param_5;
    *(MainActor **)(puVar1 + 0x50) = pMVar5;
    *(undefined8 *)(puVar1 + 0x58) = uVar8;
    _swift_release(pMVar5);
    FUN_1000645b0(0,0,auStack_80 + -extraout_x8,&DAT_100c2a788,puVar1);
    _swift_release();
    _swift_release(local_70);
  }
  return;
}



/* Address: 0x1000ca4e4 | FUN_1000ca4e4 */

void FUN_1000ca4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1000c99d0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x18));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  uVar3 = 0;
  FUN_1000c932c(0);
  _swift_storeEnumTagMultiPayload(puVar1,uVar3,4);
  _swift_bridgeObjectRetain(param_5);
  Foundation::UUID::init();
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x14)) = param_6;
                    /* WARNING: Could not recover jumptable at 0x0001000ca574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ca578 | FUN_1000ca578 */

void FUN_1000ca578(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78 [3];
  
  puVar1 = &DAT_100fabcd0;
  puVar5 = &DAT_100c29f10;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  puVar1 = &DAT_100fabcc8;
  FUN_1000037f0(&DAT_100fabcc8,&DAT_100c2a4d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined1 *)(lVar7 - extraout_x8_00);
  puVar1 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar2 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  Combine::Published::_get_subscript(local_78);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar3 = local_78[0];
  FUN_10046c49c();
  _swift_bridgeObjectRelease(local_78[0]);
  *puVar8 = param_1;
  *(undefined8 *)(puVar8 + 8) = uVar3;
  lVar4 = 0;
  FUN_10046de5c();
  _swift_storeEnumTagMultiPayload(puVar8,lVar4,1);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar8,0,1,lVar4);
  lVar4 = _TtC5Paste20MCPSettingsViewModel::pendingWatch;
  _swift_beginAccess(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::pendingWatch,local_78,0x21,0);
  FUN_1000c4cc4(puVar8,unaff_x20 + lVar4);
  _swift_endAccess(local_78);
  lVar4 = 0;
  FUN_1000c99d0();
  FUN_1000c495c(param_2,lVar7 + *(int *)(lVar4 + 0x18),FUN_1000c932c);
  Foundation::UUID::init();
  *(undefined1 *)(lVar7 + *(int *)(lVar4 + 0x14)) = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar7,0,1,lVar4);
  _swift_getKeyPath(&DAT_100c2a5e8);
  _swift_getKeyPath(&DAT_100c2a610);
  FUN_100011090(lVar7,puVar6,&DAT_100fabcd0,&DAT_100c29f10);
  _swift_retain();
  Combine::Published::_set_subscript((Published *)&DAT_100c29f10,puVar6);
  FUN_100005808(lVar7,&DAT_100fabcd0,puVar5);
  return;
}



/* Address: 0x1000ca7e0 | FUN_1000ca7e0 */

void FUN_1000ca7e0(void)

{
  MainActor *pMVar1;
  long *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  *(long **)(unaff_x22 + 0x58) = in_x3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x70) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(*in_x3 + 0xf0);
  _swift_task_switch(FUN_1000ca844,in_x3,0);
  return;
}



/* Address: 0x1000ca844 | FUN_1000ca844 */

/* WARNING: Removing unreachable block (ram,0x0001000ca8b0) */

void FUN_1000ca844(void)

{
  undefined8 *puVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x80))(*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  puVar1 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000a14d8,UVar2.unknown,puVar1);
  return;
}



/* Address: 0x1000ca8e0 | FUN_1000ca8e0 */

void FUN_1000ca8e0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  _StringGuts _Var3;
  char *pcVar4;
  undefined8 uVar5;
  long unaff_x22;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  FUN_1000d468c(unaff_x22 + 0x10);
  puVar1 = *(undefined **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  _Var3.unknown = puVar1;
  FUN_100004640(unaff_x22 + 0x10);
  Swift::_StringGuts::grow(0x1e,_Var3);
  SVar6.bridgeObject = (void *)0x8000000100d8f750;
  SVar6.str = (char *)0xd000000000000018;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  Foundation::UUID::typeMetadataAccessor();
  pcVar4 = PTR_Foundation__Foundation__UUID_>Swift__CustomStringConvertible_100ea7530;
  FUN_100003a00(&DAT_100fac318,PTR_typeMetadataAccessor_100ea7500);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar4;
  Swift::String::append(SVar6,SVar9);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar7.bridgeObject = &SUB_e200000000000000;
  SVar7.str = (char *)0x203a;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar4;
  Swift::String::append(SVar7,SVar10);
  _swift_getErrorValue(uVar5,unaff_x22 + 0x50,unaff_x22 + 0x38);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  FUN_1000d4e0c(0,0xe000000000000000,puVar1,uVar2);
  _swift_errorRelease(uVar5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001000caa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000caa30 | FUN_1000caa30 */

void FUN_1000caa30(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  MainActor *pMVar5;
  long *in_x3;
  undefined1 in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x98) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x7;
  *(undefined1 *)(unaff_x22 + 0x142) = in_w4;
  *(long **)(unaff_x22 + 0x68) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x5;
  lVar1 = 0;
  FUN_1000c99d0();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  puVar3 = &DAT_100faba40;
  FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar1 = 0;
  FUN_10045ba0c();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0xc0) = pMVar5;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 200) = pMVar5;
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(*in_x3 + 0xf8);
  _swift_task_switch(FUN_1000cab24,in_x3,0);
  return;
}



/* Address: 0x1000cab24 | FUN_1000cab24 */

/* WARNING: Removing unreachable block (ram,0x0001000cab7c) */

void FUN_1000cab24(void)

{
  undefined8 *puVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0xd0))(*(undefined1 *)(unaff_x22 + 0x142));
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  puVar1 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0xe0) = puVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xe8) = UVar2.unknown;
  *(undefined8 **)(unaff_x22 + 0xf0) = puVar1;
  _swift_task_switch(FUN_1000cabd8,UVar2.unknown,puVar1);
  return;
}



/* Address: 0x1000cabd8 | FUN_1000cabd8 */

void FUN_1000cabd8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  plVar2 = *(long **)(unaff_x22 + 0x68);
  lVar1 = 0;
  FUN_10045bd80();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar3,1,1,lVar1);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(*plVar2 + 0xe0);
  _swift_task_switch(FUN_1000cac44,plVar2,0);
  return;
}



/* Address: 0x1000cac44 | FUN_1000cac44 */

void FUN_1000cac44(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0xf8))
            (uVar1,uVar3,*(undefined8 *)(unaff_x22 + 0x78),*(undefined1 *)(unaff_x22 + 0x142),
             *(undefined8 *)(unaff_x22 + 0xa8));
  *(long *)(unaff_x22 + 0x100) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
  if (lVar4 == 0) {
    *(undefined8 *)(unaff_x22 + 0x110) = uVar1;
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0xa8),&DAT_100faba40,&DAT_100c2a790);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    pcVar2 = FUN_1000cacd0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    pcVar2 = FUN_1000cb354;
  }
  _swift_task_switch(pcVar2,uVar3,uVar1);
  return;
}



/* Address: 0x1000cacd0 | FUN_1000cacd0 */

void FUN_1000cacd0(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  piVar4 = *(int **)(unaff_x22 + 0x80);
  FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8),FUN_10045ba0c);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000cad6c;
                    /* WARNING: Could not recover jumptable at 0x0001000cad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar2,*(undefined8 *)(unaff_x22 + 0xa0),uVar3,uVar5,*(undefined8 *)(unaff_x22 + 0x110)
             ,*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Address: 0x1000cad6c | FUN_1000cad6c */

void FUN_1000cad6c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long lVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  lVar10 = *unaff_x22;
  *(long *)(lVar10 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x118));
  if (unaff_x20 == 0) {
    uVar7 = *(undefined8 *)(lVar10 + 0x108);
    _swift_release(*(undefined8 *)(lVar10 + 200));
    _swift_bridgeObjectRelease(uVar7);
    pcVar3 = FUN_1000caf0c;
  }
  else {
    uVar7 = *(undefined8 *)(lVar10 + 0x108);
    uVar9 = *(undefined8 *)(lVar10 + 200);
    FUN_10005241c(*(undefined8 *)(lVar10 + 0xb8),FUN_10045ba0c);
    _swift_release(uVar9);
    _swift_bridgeObjectRelease(uVar7);
    uVar2 = *(undefined1 *)(lVar10 + 0x142);
    FUN_1000d468c(lVar10 + 0x10);
    puVar1 = *(undefined **)(lVar10 + 0x28);
    uVar7 = *(undefined8 *)(lVar10 + 0x30);
    _Var4.unknown = puVar1;
    FUN_100004640(lVar10 + 0x10);
    Swift::_StringGuts::grow(0x19,_Var4);
    puVar8 = (undefined8 *)(lVar10 + 0x50);
    *puVar8 = 0;
    *(undefined8 *)(lVar10 + 0x58) = 0xe000000000000000;
    SVar11.bridgeObject = (void *)0x8000000100d8f7d0;
    SVar11.str = (char *)0xd000000000000013;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar11,SVar13);
    *(undefined1 *)(lVar10 + 0x140) = uVar2;
    pcVar5 = "\x01\x02";
    puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (lVar10 + 0x140,puVar8,&DAT_100ed6a60,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = &SUB_e200000000000000;
    SVar12.str = (char *)0x203a;
    SVar14.bridgeObject = puVar6;
    SVar14.str = pcVar5;
    Swift::String::append(SVar12,SVar14);
    _swift_getErrorValue();
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(lVar10 + 0x40));
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    FUN_1000d4e0c(*puVar8,uVar9,puVar1,uVar7);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar9);
    FUN_100004594(lVar10 + 0x10);
    pcVar3 = FUN_1000cb050;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1000caf0c | FUN_1000caf0c */

void FUN_1000caf0c(MainActor *param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  pMVar1 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0xc0),param_1);
  *(MainActor **)(unaff_x22 + 0x128) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000caf74,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x1000caf74 | FUN_1000caf74 */

void FUN_1000caf74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  FUN_1000cb4a0(uVar4,uVar3,uVar2);
  if (lVar1 != 0) {
    _swift_errorRelease(lVar1);
    return;
  }
  _swift_task_switch(FUN_1000caff8,*(undefined8 *)(unaff_x22 + 0xe8),
                     *(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Address: 0x1000caff8 | FUN_1000caff8 */

void FUN_1000caff8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xa0),FUN_1000c99d0);
  FUN_10005241c(uVar1,FUN_10045ba0c);
  _swift_task_switch(FUN_1000cb050,0,0);
  return;
}



/* Address: 0x1000cb050 | FUN_1000cb050 */

void FUN_1000cb050(MainActor *param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0xc0),param_1);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar1;
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x138) = puVar2;
  UVar3 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000cb0cc,UVar3.unknown,puVar2);
  return;
}



/* Address: 0x1000cb0cc | FUN_1000cb0cc */

void FUN_1000cb0cc(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined *puVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  MainActor *this;
  long unaff_x22;
  long lVar7;
  
  pMVar1 = *(MainActor **)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  this = *(MainActor **)(unaff_x22 + 0xc0);
  lVar7 = *(long *)(unaff_x22 + 0x90);
  _swift_release();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  UVar2 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar2;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsViewModel.swift",0x20,1,199,UVar2.unknown,uVar6);
  }
  lVar7 = lVar7 + 0x10;
  _swift_weakLoadStrong();
  if (lVar7 != 0) {
    puVar3 = &DAT_100c2a738;
    _swift_getKeyPath(&DAT_100c2a738);
    puVar4 = &DAT_100c2a760;
    _swift_getKeyPath(&DAT_100c2a760);
    *(undefined1 *)(unaff_x22 + 0x141) = 0;
    Combine::Published::_set_subscript((Published *)pMVar1,unaff_x22 + 0x141,lVar7,puVar3,puVar4);
  }
  _swift_release(pMVar1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000cb1c0,UVar5.unknown,uVar6);
  return;
}



/* Address: 0x1000cb1c0 | FUN_1000cb1c0 */

void FUN_1000cb1c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000cb21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000cb220 | FUN_1000cb220 */

void FUN_1000cb220(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x142);
  FUN_1000d468c(unaff_x22 + 0x10);
  puVar1 = *(undefined **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  _Var4.unknown = puVar1;
  FUN_100004640(unaff_x22 + 0x10);
  Swift::_StringGuts::grow(0x19,_Var4);
  puVar8 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0xe000000000000000;
  SVar10.bridgeObject = (void *)0x8000000100d8f7d0;
  SVar10.str = (char *)0xd000000000000013;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  *(undefined1 *)(unaff_x22 + 0x140) = uVar3;
  pcVar5 = "\x01\x02";
  puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (unaff_x22 + 0x140,puVar8,&DAT_100ed6a60,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x203a;
  SVar13.bridgeObject = puVar6;
  SVar13.str = pcVar5;
  Swift::String::append(SVar11,SVar13);
  _swift_getErrorValue(uVar7,unaff_x22 + 0x60,unaff_x22 + 0x38);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1000d4e0c(*puVar8,uVar9,puVar1,uVar2);
  _swift_errorRelease(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  FUN_100004594(unaff_x22 + 0x10);
  _swift_task_switch(FUN_1000cb050,0,0);
  return;
}



/* Address: 0x1000cb354 | FUN_1000cb354 */

void FUN_1000cb354(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *in_x3;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  pcVar5 = "";
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0xa8),&DAT_100faba40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x142);
  FUN_1000d468c(unaff_x22 + 0x10);
  puVar1 = *(undefined **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  _Var4.unknown = puVar1;
  FUN_100004640(unaff_x22 + 0x10);
  Swift::_StringGuts::grow(0x19,_Var4);
  puVar8 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0xe000000000000000;
  SVar10.bridgeObject = (void *)0x8000000100d8f7d0;
  SVar10.str = (char *)0xd000000000000013;
  SVar12.bridgeObject = in_x3;
  SVar12.str = pcVar5;
  Swift::String::append(SVar10,SVar12);
  *(undefined1 *)(unaff_x22 + 0x140) = uVar3;
  pcVar5 = "\x01\x02";
  puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (unaff_x22 + 0x140,puVar8,&DAT_100ed6a60,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x203a;
  SVar13.bridgeObject = puVar6;
  SVar13.str = pcVar5;
  Swift::String::append(SVar11,SVar13);
  _swift_getErrorValue(uVar7,unaff_x22 + 0x60,unaff_x22 + 0x38);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1000d4e0c(*puVar8,uVar9,puVar1,uVar2);
  _swift_errorRelease(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  FUN_100004594(unaff_x22 + 0x10);
  _swift_task_switch(FUN_1000cb050,0,0);
  return;
}



/* Address: 0x1000cb4a0 | FUN_1000cb4a0 */

void FUN_1000cb4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  UUID UVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fabcd0;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar10 - extraout_x12;
  puVar1 = &DAT_100fabcc8;
  FUN_1000037f0(&DAT_100fabcc8,&DAT_100c2a4d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_00;
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
              ("Paste/MCPSettingsViewModel.swift",0x20,1,0xc0,UVar4.unknown,puVar3);
  }
  lVar6 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar6 != 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(lVar12,param_2,UVar7.unknown);
    lVar8 = 0;
    FUN_10046de5c();
    _swift_storeEnumTagMultiPayload(lVar12,lVar8,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar12,0,1,lVar8);
    lVar8 = _TtC5Paste20MCPSettingsViewModel::pendingWatch;
    _swift_beginAccess(lVar6 + _TtC5Paste20MCPSettingsViewModel::pendingWatch,auStack_78,0x21,0);
    FUN_1000c4cc4(lVar12,lVar6 + lVar8);
    _swift_endAccess(auStack_78);
    _swift_release(lVar6);
  }
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_1000c495c(param_3,lVar11,FUN_1000c99d0);
    lVar12 = 0;
    FUN_1000c99d0();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11,0,1,lVar12);
    puVar1 = &DAT_100c2a5e8;
    _swift_getKeyPath(&DAT_100c2a5e8);
    puVar9 = &DAT_100c2a610;
    _swift_getKeyPath(&DAT_100c2a610);
    FUN_100011090(lVar11,puVar10,&DAT_100fabcd0,&DAT_100c29f10);
    Combine::Published::_set_subscript((Published *)pMVar2,puVar10,param_1,puVar1,puVar9);
    FUN_100005808(lVar11,&DAT_100fabcd0,&DAT_100c29f10);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000cb758 | FUN_1000cb758 */

void FUN_1000cb758(undefined8 param_1)

{
  UUID UVar1;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000cb78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1000cb790 | thunk_FUN_10009163c */

void thunk_FUN_10009163c(void)

{
  FUN_10009163c();
  return;
}



/* Address: 0x1000cb794 | thunk_FUN_10008d8b8 */

void thunk_FUN_10008d8b8(void)

{
  FUN_10008d8b8();
  return;
}



/* Address: 0x1000cb798 | FUN_1000cb798 */

void FUN_1000cb798(undefined8 *param_1,undefined8 param_2)

{
  FUN_10046e654();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000cb7bc | FUN_1000cb7bc */

void FUN_1000cb7bc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cb7e0 | FUN_1000cb7e0 */

void FUN_1000cb7e0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cb814 | FUN_1000cb814 */

void FUN_1000cb814(undefined8 param_1)

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
  plVar5 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1000c86e4(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1000cb88c | FUN_1000cb88c */

void FUN_1000cb88c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar2 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000cb8f4 | thunk_FUN_1000cb88c */

void thunk_FUN_1000cb88c(void)

{
  FUN_1000cb88c();
  return;
}



/* Address: 0x1000cb8f8 | FUN_1000cb8f8 */

void FUN_1000cb8f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar2 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000cb970 | thunk_FUN_1000cb8f8 */

void thunk_FUN_1000cb8f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar2 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  uStack_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&uStack_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000cb974 | FUN_1000cb974 */

void FUN_1000cb974(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000cb998 | thunk_FUN_1000c6688 */

void thunk_FUN_1000c6688(void)

{
  FUN_1000c6688();
  return;
}



/* Address: 0x1000cb99c | FUN_1000cb99c */

void FUN_1000cb99c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  Date DVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar3 = 0;
  FUN_10045ba0c();
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + uVar7;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(lVar1,UVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  pcVar9 = *(code **)(lVar10 + 8);
  (*pcVar9)(lVar1 + iVar2,DVar5.unknown);
  iVar2 = *(int *)(lVar3 + 0x20);
  lVar6 = lVar1 + iVar2;
  (**(code **)(lVar10 + 0x30))(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar9)(lVar1 + iVar2,DVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  lVar1 = lVar1 + *(int *)(lVar3 + 0x28);
  lVar3 = 0;
  FUN_10045bd80();
  lVar6 = lVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
    (*pcVar9)(lVar1 + *(int *)(lVar3 + 0x18),DVar5.unknown);
  }
  _swift_release(*(undefined8 *)
                  (unaff_x20 + (uVar7 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cbb00 | FUN_1000cbb00 */

void FUN_1000cbb00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = 0;
  FUN_10045ba0c();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar4 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_1000ca7e0(plVar4,param_1,uVar1,uVar2,uVar6,unaff_x20 + uVar5,uVar7);
  return;
}



/* Address: 0x1000cbbb0 | FUN_1000cbbb0 */

void FUN_1000cbbb0(void)

{
  undefined8 local_18;
  
  local_18 = 0x9b2d;
  FUN_1002ccc34(0x74726f5070636d,&DAT_e700000000000000,&local_18,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x1000cbbf4 | FUN_1000cbbf4 */

void FUN_1000cbbf4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000cbc18 | thunk_FUN_1000c7eb4 */

void thunk_FUN_1000c7eb4(void)

{
  FUN_1000c7eb4();
  return;
}



/* Address: 0x1000cbc1c | FUN_1000cbc1c */

void FUN_1000cbc1c(ulong *param_1)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  ulong uStack_58;
  
  CVar1.unknown = (undefined *)0x0;
  FUN_10045ba0c();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_10009aa74();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_60 = uVar4 + uVar7;
  uStack_58 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_78 = _Var3.unknown + uVar7;
    uStack_70 = minimumCapacity;
    FUN_1000cbd38(&local_78,auStack_68,&local_60,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_1000cc600(0,uVar6,1,&local_60);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x1000cbd38 | FUN_1000cbd38 */

void FUN_1000cbd38(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  MainActor *pMVar3;
  bool bVar4;
  long lVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined7 extraout_var;
  MainActor *this;
  MainActor *pMVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  Date DVar14;
  code *pcVar15;
  long extraout_x8;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long unaff_x21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_108;
  long local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  MainActor *local_c0;
  long local_b8;
  MainActor *local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_58;
  
  lVar5 = 0;
  local_f8 = param_1;
  FUN_10045ba0c();
  local_e8 = *(long *)(lVar5 + -8);
  local_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  local_90 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_00;
  local_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_01;
  local_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_02;
  local_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_03;
  local_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_04;
  local_100 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_108 = lVar5 - extraout_x12_05;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar5 = param_3[1];
  if (0 < lVar5) {
    puVar17 = (undefined8 *)0x0;
    local_118 = param_4;
    local_110 = param_3;
    do {
      puVar20 = (undefined8 *)((long)puVar17 + 1);
      puVar22 = puVar17;
      local_d0 = puVar17;
      if ((long)puVar20 < lVar5) {
        lVar19 = *param_3;
        puVar22 = *(undefined8 **)(local_e8 + 0x48);
        FUN_1000c495c(lVar19 + (long)puVar22 * (long)puVar20,local_108,FUN_10045ba0c);
        local_a8 = puVar22;
        FUN_1000c495c(lVar19 + (long)puVar22 * (long)puVar17,local_100,FUN_10045ba0c);
        pMVar6 = Swift::MainActor::typeMetadataAccessor();
        pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
        puVar17 = &DAT_100fa6bb0;
        DVar14.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10);
        local_c8 = puVar17;
        local_c0 = pMVar6;
        UVar8 = Swift::Actor::get_unownedExecutor();
        UVar9 = UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar9.unknown & 1) == 0) {
          DVar14.unknown = &DAT_00000001;
          _swift_task_reportUnexpectedExecutor
                    ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar8.unknown,puVar17);
        }
        lVar18 = local_100;
        lVar24 = local_108;
        local_f0 = unaff_x21;
        bVar4 = Foundation::Date::<_infix
                          ((undefined *)(local_108 + *(int *)(local_70 + 0x1c)),
                           (undefined *)(local_100 + *(int *)(local_70 + 0x1c)),DVar14);
        local_b0 = (MainActor *)CONCAT44(local_b0._4_4_,(int)CONCAT71(extraout_var,bVar4));
        _swift_release(pMVar7);
        FUN_10005241c(lVar18,FUN_10045ba0c);
        FUN_10005241c(lVar24,FUN_10045ba0c);
        lVar18 = (long)local_a8 * ((long)local_d0 + 2);
        lVar24 = lVar19 + lVar18;
        pMVar6 = (MainActor *)(lVar19 + (long)local_a8 * (long)puVar20);
        puVar17 = (undefined8 *)((long)local_d0 + 2);
        lVar19 = 0;
        lVar23 = (long)local_a8 * (long)puVar20;
        local_b8 = lVar5;
        do {
          lVar26 = lVar23;
          lVar25 = lVar19;
          puVar20 = puVar17;
          pcVar15 = FUN_10045ba0c;
          lVar5 = lVar18;
          if (local_b8 <= (long)puVar20) break;
          local_88 = lVar18;
          FUN_1000c495c(lVar24,local_a0,FUN_10045ba0c);
          pMVar7 = pMVar6;
          FUN_1000c495c(pMVar6,local_98);
          pMVar7 = Swift::MainActor::get_shared(local_c0,pMVar7);
          puVar17 = local_c8;
          UVar8 = Swift::Actor::get_unownedExecutor();
          UVar9 = UVar8;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar9.unknown & 1) == 0) {
            pcVar15 = (code *)&DAT_00000001;
            _swift_task_reportUnexpectedExecutor
                      ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar8.unknown,puVar17);
          }
          lVar19 = local_98;
          lVar5 = local_a0;
          bVar4 = Foundation::Date::<_infix
                            ((undefined *)(local_a0 + *(int *)(local_70 + 0x1c)),
                             (undefined *)(local_98 + *(int *)(local_70 + 0x1c)),(Date)pcVar15);
          _swift_release(pMVar7);
          FUN_10005241c(lVar19,FUN_10045ba0c);
          FUN_10005241c(lVar5,FUN_10045ba0c);
          lVar24 = lVar24 + (long)local_a8;
          pMVar6 = pMVar6 + (long)local_a8;
          lVar18 = local_88 + (long)local_a8;
          puVar17 = (undefined8 *)((long)puVar20 + 1);
          lVar19 = lVar25 + 1;
          lVar23 = lVar26 + (long)local_a8;
          lVar5 = local_88;
        } while (((uint)local_b0 & 1) == (uint)bVar4);
        puVar22 = local_d0;
        param_4 = local_118;
        param_3 = local_110;
        unaff_x21 = local_f0;
        if (((ulong)local_b0 & 1) != 0) {
          if ((long)puVar20 < (long)local_d0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5d4);
            (*pcVar15)();
          }
          if ((long)local_d0 < (long)puVar20) {
            lVar19 = 0;
            lVar18 = *local_110;
            lVar24 = (long)local_d0 * (long)local_a8;
            do {
              if ((long)puVar22 + lVar19 != (long)puVar22 + lVar25 + 1) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5f4);
                  (*pcVar15)();
                }
                uVar21 = lVar18 + lVar24;
                FUN_1000523d8(uVar21,local_e0,FUN_10045ba0c);
                if ((lVar24 < lVar26) || ((ulong)(lVar18 + lVar5) <= uVar21)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar21,lVar18 + lVar26,1,local_70);
                }
                else if (local_a8 != (undefined8 *)0x0) {
                  _swift_arrayInitWithTakeBackToFront(uVar21,lVar18 + lVar26,1,local_70);
                }
                FUN_1000523d8(local_e0,lVar18 + lVar26,FUN_10045ba0c);
                puVar22 = local_d0;
              }
              lVar19 = lVar19 + 1;
              lVar23 = lVar25 + 1;
              lVar26 = lVar26 - (long)local_a8;
              lVar5 = lVar5 - (long)local_a8;
              lVar24 = lVar24 + (long)local_a8;
              lVar25 = lVar25 + -1;
              param_4 = local_118;
              param_3 = local_110;
              unaff_x21 = local_f0;
            } while (lVar19 + (long)puVar22 < (long)puVar22 + lVar23);
          }
        }
      }
      puVar16 = (undefined8 *)param_3[1];
      puVar17 = puVar20;
      if ((long)puVar20 < (long)puVar16) {
        if (SBORROW8((long)puVar20,(long)puVar22)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5d0);
          (*pcVar15)();
        }
        if ((long)puVar20 - (long)puVar22 < param_4) {
          if (SCARRY8((long)puVar22,param_4)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5d8);
            (*pcVar15)();
          }
          puVar1 = (undefined8 *)((long)puVar22 + param_4);
          if ((long)puVar16 <= (long)puVar22 + param_4) {
            puVar1 = puVar16;
          }
          if ((long)puVar1 < (long)puVar22) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5dc);
            (*pcVar15)();
          }
          if (puVar20 != puVar1) {
            lVar24 = *param_3;
            local_f0 = unaff_x21;
            this = Swift::MainActor::typeMetadataAccessor();
            local_d8 = *(long *)(local_e8 + 0x48);
            pMVar6 = (MainActor *)(lVar24 + local_d8 * ((long)puVar20 + -1));
            lVar18 = -local_d8;
            lVar5 = (long)puVar22 - (long)puVar20;
            pMVar7 = (MainActor *)(lVar24 + (long)puVar20 * local_d8);
            local_c8 = puVar1;
            pMVar10 = pMVar7;
            lVar19 = lVar5;
            pMVar3 = pMVar6;
            local_88 = lVar24;
LAB_1000cc2cc:
            do {
              local_a8 = puVar20;
              local_b0 = pMVar3;
              local_b8 = lVar19;
              local_c0 = pMVar10;
              FUN_1000c495c(pMVar7,local_80,FUN_10045ba0c);
              pMVar10 = pMVar6;
              FUN_1000c495c(pMVar6,local_78,FUN_10045ba0c);
              pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
              puVar17 = &DAT_100fa6bb0;
              DVar14.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
              FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10);
              UVar8 = Swift::Actor::get_unownedExecutor();
              UVar9 = UVar8;
              _swift_task_isCurrentExecutor();
              if (((ulong)UVar9.unknown & 1) == 0) {
                DVar14.unknown = &DAT_00000001;
                _swift_task_reportUnexpectedExecutor
                          ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar8.unknown,puVar17);
              }
              lVar24 = local_78;
              lVar19 = local_80;
              bVar4 = Foundation::Date::<_infix
                                ((undefined *)(local_80 + *(int *)(local_70 + 0x1c)),
                                 (undefined *)(local_78 + *(int *)(local_70 + 0x1c)),DVar14);
              _swift_release(pMVar10);
              FUN_10005241c(lVar24,FUN_10045ba0c);
              FUN_10005241c(lVar19,FUN_10045ba0c);
              puVar2 = local_90;
              if (bVar4) {
                if (local_88 == 0) {
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5e0);
                  (*pcVar15)();
                }
                FUN_1000523d8(pMVar7,local_90,FUN_10045ba0c);
                _swift_arrayInitWithTakeFrontToBack(pMVar7,pMVar6,1,local_70);
                FUN_1000523d8(puVar2,pMVar6,FUN_10045ba0c);
                pMVar6 = pMVar6 + lVar18;
                pMVar7 = pMVar7 + lVar18;
                bVar4 = lVar5 != -1;
                lVar5 = lVar5 + 1;
                pMVar10 = local_c0;
                lVar19 = local_b8;
                pMVar3 = local_b0;
                puVar20 = local_a8;
                if (bVar4) goto LAB_1000cc2cc;
              }
              pMVar6 = local_b0 + local_d8;
              lVar5 = local_b8 + -1;
              pMVar7 = local_c0 + local_d8;
              puVar22 = local_d0;
              puVar17 = local_c8;
              param_4 = local_118;
              param_3 = local_110;
              unaff_x21 = local_f0;
              pMVar10 = pMVar7;
              lVar19 = lVar5;
              pMVar3 = pMVar6;
              puVar20 = (undefined8 *)((long)local_a8 + 1);
            } while ((undefined8 *)((long)local_a8 + 1) != local_c8);
          }
        }
      }
      puVar13 = local_58;
      if ((long)puVar17 < (long)puVar22) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5c4);
        (*pcVar15)();
      }
      puVar11 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_10009a5c8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar21 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_10009a5c8(puVar13,uVar21 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar21 + 1;
      *(undefined8 **)(puVar13 + uVar21 * 0x10 + 0x20) = local_d0;
      *(undefined8 **)(puVar13 + uVar21 * 0x10 + 0x28) = puVar17;
      local_58 = puVar13;
      if (*local_f8 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5f8);
        (*pcVar15)();
      }
      FUN_1000cc864(&local_58,*local_f8,param_3);
      puVar13 = local_58;
      if (unaff_x21 != 0) goto LAB_1000cc594;
      lVar5 = param_3[1];
    } while ((long)puVar17 < lVar5);
    unaff_x21 = 0;
  }
  puVar13 = local_58;
  lVar5 = *local_f8;
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc600);
    (*pcVar15)();
  }
  puVar11 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_10009a958();
  }
  uVar21 = *(ulong *)(puVar13 + 0x10);
  while (local_58 = puVar13, 1 < uVar21) {
    lVar19 = *param_3;
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5fc);
      (*pcVar15)();
    }
    lVar23 = uVar21 - 1;
    lVar25 = *(long *)(puVar13 + uVar21 * 0x10);
    lVar24 = *(long *)(puVar13 + lVar23 * 0x10 + 0x28);
    lVar18 = *(long *)(local_e8 + 0x48);
    FUN_1000ccae4(lVar19 + lVar18 * lVar25,
                  lVar19 + lVar18 * *(long *)(puVar13 + lVar23 * 0x10 + 0x20),
                  lVar19 + lVar18 * lVar24,lVar5);
    if (unaff_x21 != 0) break;
    if (lVar24 < lVar25) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5c8);
      (*pcVar15)();
    }
    puVar11 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar11 & 1) == 0) {
      FUN_10009a958();
    }
    if (*(ulong *)(puVar13 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cc5cc);
      (*pcVar15)();
    }
    *(long *)(puVar13 + uVar21 * 0x10) = lVar25;
    *(long *)((long)(puVar13 + uVar21 * 0x10) + 8) = lVar24;
    local_58 = puVar13;
    FUN_10009a8d0(lVar23);
    puVar13 = local_58;
    uVar21 = *(ulong *)(local_58 + 0x10);
  }
LAB_1000cc594:
  _swift_bridgeObjectRelease(puVar13);
  return;
}



/* Address: 0x1000cc600 | FUN_1000cc600 */

void FUN_1000cc600(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  Date DVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long lVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  
  lVar3 = 0;
  FUN_10045ba0c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_00;
  if (param_3 != param_2) {
    lVar13 = *param_4;
    this = Swift::MainActor::typeMetadataAccessor();
    lVar10 = *(long *)(lVar14 + 0x48);
    pMVar11 = (MainActor *)(lVar13 + lVar10 * (param_3 + -1));
    param_1 = param_1 - param_3;
    lVar14 = lVar13 + lVar10 * param_3;
    lVar18 = param_1;
    lVar15 = lVar14;
    pMVar12 = pMVar11;
LAB_1000cc744:
    do {
      FUN_1000c495c(lVar14,lVar17,FUN_10045ba0c);
      pMVar4 = pMVar11;
      FUN_1000c495c(pMVar11,lVar16,FUN_10045ba0c);
      pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
      puVar5 = &DAT_100fa6bb0;
      DVar8.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10);
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        DVar8.unknown = &DAT_00000001;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar6.unknown,puVar5);
      }
      bVar2 = Foundation::Date::<_infix
                        ((undefined *)(lVar17 + *(int *)(lVar3 + 0x1c)),
                         (undefined *)(lVar16 + *(int *)(lVar3 + 0x1c)),DVar8);
      _swift_release(pMVar4);
      FUN_10005241c(lVar16,FUN_10045ba0c);
      FUN_10005241c(lVar17,FUN_10045ba0c);
      if (bVar2) {
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cc864);
          (*pcVar1)();
        }
        FUN_1000523d8(lVar14,puVar9,FUN_10045ba0c);
        _swift_arrayInitWithTakeFrontToBack(lVar14,pMVar11,1,lVar3);
        FUN_1000523d8(puVar9,pMVar11,FUN_10045ba0c);
        pMVar11 = pMVar11 + -lVar10;
        lVar14 = lVar14 + -lVar10;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1000cc744;
      }
      param_3 = param_3 + 1;
      pMVar11 = pMVar12 + lVar10;
      param_1 = lVar18 + -1;
      lVar14 = lVar15 + lVar10;
      lVar18 = param_1;
      lVar15 = lVar14;
      pMVar12 = pMVar11;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1000cc864 | FUN_1000cc864 */

undefined8 FUN_1000cc864(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_10009a958();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1000cc938;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccacc);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_1000cc99c:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccabc);
          (*pcVar2)();
        }
        lVar6 = uVar8 + lVar9 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccac4);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccaa4);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccaa8);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccab0);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccab8);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar12 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_1000cc938:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccaac);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccab4);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccac0);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccac8);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar12 < lVar6) goto LAB_1000cc99c;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar6) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccad0);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cca98);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccae4);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      FUN_10045ba0c();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      FUN_1000ccae4(lVar9 + lVar4 * lVar12,lVar9 + lVar4 * lVar6,lVar9 + lVar4 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cca9c);
        (*pcVar2)();
      }
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_10009a958();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccaa0);
        (*pcVar2)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_10009a8d0(lVar10);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Address: 0x1000ccae4 | FUN_1000ccae4 */

undefined8 FUN_1000ccae4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  Date DVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar6 = 0;
  FUN_10045ba0c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar12 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar13 - extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar14 - extraout_x13_01;
  lVar19 = *(long *)(extraout_x12 + 0x48);
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000cd0b4);
    (*pcVar4)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar19 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000cd0b8);
    (*pcVar4)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar19 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000cd0bc);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (lVar19 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar19;
  }
  lVar3 = 0;
  if (lVar19 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar19;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar2 < lVar3) {
    lVar13 = lVar2 * lVar19;
    if ((param_4 < param_1) || (param_1 + lVar13 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar6);
    }
    uVar16 = param_4 + lVar13;
    local_70 = uVar16;
    if (0 < lVar13 && param_2 < param_3) {
      do {
        FUN_1000c495c(param_2,lVar15,FUN_10045ba0c);
        FUN_1000c495c(param_4,lVar14,FUN_10045ba0c);
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
        puVar9 = &DAT_100fa6bb0;
        DVar11.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10);
        UVar8 = Swift::Actor::get_unownedExecutor();
        UVar10 = UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar10.unknown & 1) == 0) {
          DVar11.unknown = &DAT_00000001;
          _swift_task_reportUnexpectedExecutor
                    ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar8.unknown,puVar9);
        }
        bVar5 = Foundation::Date::<_infix
                          ((undefined *)(lVar15 + *(int *)(lVar6 + 0x1c)),
                           (undefined *)(lVar14 + *(int *)(lVar6 + 0x1c)),DVar11);
        _swift_release(pMVar7);
        FUN_10005241c(lVar14,FUN_10045ba0c);
        FUN_10005241c(lVar15,FUN_10045ba0c);
        if (bVar5) {
          uVar18 = param_2 + lVar19;
          uVar17 = param_4;
          if ((param_1 < param_2) || (uVar18 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar17 = param_4 + lVar19;
          uVar18 = param_2;
          uVar1 = uVar17;
          if ((param_1 < param_4) || (uVar17 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar19;
        local_58 = param_1;
      } while ((uVar17 < uVar16) &&
              (param_4 = uVar17, param_2 = uVar18, local_58 = param_1, uVar18 < param_3));
    }
  }
  else {
    lVar14 = lVar3 * lVar19;
    if ((param_4 < param_2) || (param_2 + lVar14 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar6);
    }
    uVar16 = param_4 + lVar14;
    local_70 = uVar16;
    local_58 = param_2;
    if (0 < lVar14 && param_1 < param_2) {
      lVar19 = -lVar19;
      local_58 = param_2;
      local_b8 = param_1;
      do {
        uVar18 = local_58 + lVar19;
        uVar17 = param_3;
        local_b0 = local_58;
        while( true ) {
          uVar1 = uVar16 + lVar19;
          FUN_1000c495c(uVar1,lVar13,FUN_10045ba0c);
          FUN_1000c495c(uVar18,puVar12,FUN_10045ba0c);
          pMVar7 = Swift::MainActor::typeMetadataAccessor();
          pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
          puVar9 = &DAT_100fa6bb0;
          DVar11.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
          FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10);
          UVar8 = Swift::Actor::get_unownedExecutor();
          UVar10 = UVar8;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar10.unknown & 1) == 0) {
            DVar11.unknown = &DAT_00000001;
            _swift_task_reportUnexpectedExecutor
                      ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3f,UVar8.unknown,puVar9);
          }
          param_3 = uVar17 + lVar19;
          bVar5 = Foundation::Date::<_infix
                            ((undefined *)(lVar13 + *(int *)(lVar6 + 0x1c)),
                             (Date)(puVar12 + *(int *)(lVar6 + 0x1c)),DVar11);
          _swift_release(pMVar7);
          FUN_10005241c(puVar12,FUN_10045ba0c);
          FUN_10005241c(lVar13,FUN_10045ba0c);
          if (bVar5) break;
          local_70 = uVar1;
          if ((uVar17 < uVar16) || (uVar16 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar6);
          }
          else if (uVar17 != uVar16) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar6);
          }
          uVar16 = uVar1;
          uVar17 = param_3;
          if (uVar1 <= param_4) goto LAB_1000cce78;
        }
        if ((uVar17 < local_b0) || (local_b0 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar18,1,lVar6);
        }
        else if (uVar17 != local_b0) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar18,1,lVar6);
        }
        local_58 = uVar18;
      } while ((param_4 < uVar16) && (local_b8 < uVar18));
    }
  }
LAB_1000cce78:
  FUN_1000cd0bc(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x1000cd0bc | FUN_1000cd0bc */

void FUN_1000cd0bc(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  lVar3 = 0;
  FUN_10045ba0c();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cd168);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
        _swift_arrayInitWithTakeBackToFront(uVar6,uVar5);
        return;
      }
      return;
    }
    _swift_arrayInitWithTakeFrontToBack(uVar6,uVar5,lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cd16c);
  (*pcVar2)();
}



/* Address: 0x1000cd16c | FUN_1000cd16c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000cd16c(long param_1)

{
  long lVar1;
  URL UVar2;
  long lVar3;
  undefined1 *puVar4;
  URL self;
  NSURL *pNVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0;
  FUN_1000c932c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000c99d0();
  FUN_1000c495c(param_1 + *(int *)(lVar3 + 0x18),puVar7,FUN_1000c932c);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar1);
  if (((int)(uint)puVar4 < 3) && ((uint)puVar4 < 2)) {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,UVar2.unknown);
    self.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(self);
    NSWorkspace::openURL_((ID)self.unknown,pNVar5);
    (**(code **)(lVar8 + 8))(lVar6,UVar2.unknown);
  }
  else {
    FUN_10005241c(puVar7,FUN_1000c932c);
  }
  return;
}



/* Address: 0x1000cd2cc | FUN_1000cd2cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000cd2cc(void)

{
  undefined8 uVar1;
  ID self;
  NSString *pNVar2;
  NSString *pNVar3;
  
  self = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  NSPasteboard::clearContents(self);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSPasteboard::setString_forType_(self,pNVar2,*(undefined8 *)PTR__NSPasteboardTypeString_100ea9100)
  ;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = pNVar3;
  FUN_1003857b8();
  uVar1 = *(undefined8 *)(pNVar2 + 8);
  _swift_bridgeObjectRetain(uVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  NSPasteboard::setString_forType_(self,pNVar3,pNVar2);
  return 0;
}



/* Address: 0x1000cd3a0 | thunk_FUN_1000b5728 */

void thunk_FUN_1000b5728(void)

{
  FUN_1000b5728();
  return;
}



/* Address: 0x1000cd3a4 | thunk_FUN_1000b5790 */

void thunk_FUN_1000b5790(void)

{
  FUN_1000b5790();
  return;
}



/* Address: 0x1000cd3a8 | FUN_1000cd3a8 */

void FUN_1000cd3a8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cd3b8 | FUN_1000cd3b8 */

void FUN_1000cd3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x10;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100008284;
  FUN_1000ca4e4(plVar2,param_1,param_2,param_3,param_4,param_5,uVar1);
  return;
}



/* Address: 0x1000cd440 | FUN_1000cd440 */

void FUN_1000cd440(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cd464 | FUN_1000cd464 */

void FUN_1000cd464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x10;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100008284;
  FUN_1000ca0cc(plVar2,param_1,param_2,param_3,param_4,param_5,uVar3,uVar1);
  return;
}



/* Address: 0x1000cd4fc | thunk_FUN_1000c7fec */

void thunk_FUN_1000c7fec(void)

{
  FUN_1000c7fec();
  return;
}



/* Address: 0x1000cd500 | thunk_FUN_1000c8054 */

void thunk_FUN_1000c8054(void)

{
  FUN_1000c8054();
  return;
}



/* Address: 0x1000cd504 | FUN_1000cd504 */

void FUN_1000cd504(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000cd550 | FUN_1000cd550 */

void FUN_1000cd550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar6 = (long *)0x150;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100008284;
  FUN_1000caa30(plVar6,param_1,uVar1,uVar3,uVar7,uVar5,uVar2,uVar4,uVar8,uVar10,uVar11,uVar9);
  return;
}


