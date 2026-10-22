/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100084f14 | FUN_100084f14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100084f14(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::closeButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::stackDirectionButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::tableView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::emptyPlaceholder) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste24PasteStackViewController::___lazy_storage___heightContraint) = 0;
  *(undefined **)(unaff_x20 + _TtC5Paste24PasteStackViewController::snippets) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::observer);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::pasteShortcut);
  uVar3 = 0x76;
  FUN_1001e94d4(0x76,0xe100000000000000);
  *puVar1 = uVar3;
  puVar1[1] = 0x100000;
  lVar2 = _TtC5Paste24PasteStackViewController::globalShortcutMonitor;
  puVar4 = &DAT_100c27ae0;
  _swift_getKeyPath();
  puVar5 = &DAT_100faa368;
  FUN_1000037f0(&DAT_100faa368,&DAT_100c27b10);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24PasteStackViewController::_pasteStackDirection);
  puVar4 = &DAT_100c27b18;
  _swift_getKeyPath(&DAT_100c27b18);
  puVar5 = puVar4;
  FUN_1000869e8();
  FUN_1002cbe78(&local_78,puVar4,puVar5);
  puVar1[1] = uStack_70;
  *puVar1 = local_78;
  puVar1[3] = uStack_60;
  puVar1[2] = local_68;
  puVar1[5] = uStack_50;
  puVar1[4] = local_58;
  puVar1[6] = local_48;
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"initWithCoder:",param_1);
  return IVar6;
}



/* Address: 0x1000850b0 | _TtC5Paste24PasteStackViewController::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste24PasteStackViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/PasteStackViewController.swift",0x24,1,0xf,UVar4.unknown,puVar3);
  }
  FUN_100084f14();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100085178 | FUN_100085178 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100085178(void)

{
  return ZEXT816(0x100f91ec8);
}



/* Address: 0x100085198 | FUN_100085198 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100085198(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = ram0x000100faa278;
  auVar1._0_8_ = s_PasteStack_100faa270._0_8_;
  _swift_bridgeObjectRetain(ram0x000100faa278);
  return auVar1;
}



/* Address: 0x1000851cc | FUN_1000851cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1000851cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = ram0x000100faa268;
  auVar1._0_8_ = s_PasteStack_100faa260._0_8_;
  _swift_bridgeObjectRetain(ram0x000100faa268);
  return auVar1;
}



/* Address: 0x100085200 | FUN_100085200 */

void FUN_100085200(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  thunk_FUN_10020a8c4();
  *param_1 = unaff_x20;
  return;
}



/* Address: 0x100085230 | _TtC5Paste24PasteStackViewController::numberOfRowsInTableView: */

/* Function Stack Size: 0x18 bytes */

long_long _TtC5Paste24PasteStackViewController::numberOfRowsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  long_long lVar8;
  undefined1 auStack_48 [24];
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackViewController.swift",0x24,1,0xb3,UVar5.unknown,puVar4);
  }
  lVar2 = snippets;
  _swift_beginAccess(param_1 + snippets,auStack_48,0,0);
  puVar7 = *(undefined **)(param_1 + lVar2);
  if ((ulong)puVar7 >> 0x3e == 0) {
    lVar8 = *(long_long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      _Var1.unknown = puVar7;
    }
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_release(pMVar3);
  return lVar8;
}



/* Address: 0x100085324 | _TtC5Paste24PasteStackViewController::tableView:viewForTableColumn:row: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC5Paste24PasteStackViewController::tableView_viewForTableColumn_row_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

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
              ("Paste/PasteStackViewController.swift",0x24,1,0xb7,UVar4.unknown,puVar3);
  }
  FUN_100086658(param_3,param_5);
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100085434 | FUN_100085434 */

void FUN_100085434(undefined8 param_1,undefined8 param_2)

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
              ("Paste/PasteStackViewController.swift",0x24,1,200,UVar4.unknown,puVar3);
  }
  FUN_10008499c(param_2);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000854ec | FUN_1000854ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000854ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x10008554c | _TtC5Paste24PasteStackViewController::tableView:rowActionsForRow:edge: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC5Paste24PasteStackViewController::tableView_rowActionsForRow_edge_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  NSArray *pNVar6;
  
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
              ("Paste/PasteStackViewController.swift",0x24,1,0xc2,UVar4.unknown,puVar3);
  }
  FUN_100086794(param_5);
  FUN_10000ec2c(0,&DAT_100faa2f8,&PTR__OBJC_CLASS___NSTableViewRowAction_100f8d7e8);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(param_5);
  return (ID)pNVar6;
}



/* Address: 0x100085670 | _TtC5Paste24PasteStackViewController::tableView:shouldSelectRow: */

/* Function Stack Size: 0x20 bytes */

bool _TtC5Paste24PasteStackViewController::tableView_shouldSelectRow_
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
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackViewController.swift",0x24,1,0xd2,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100085710 | FUN_100085710 */

undefined1 FUN_100085710(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x68,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x1000857f0 | FUN_1000857f0 */

void FUN_1000857f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char local_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = &DAT_100c279b8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa8f60;
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  puVar1 = &DAT_100c279f0;
  _swift_getKeyPath();
  puVar2 = &DAT_100faa360;
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = &DAT_100c27a28;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa6688;
  FUN_1000037f0(&DAT_100fa6688,&DAT_100c22eb0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = &DAT_100c27a60;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  _swift_getKeyPath(&DAT_100c27a90);
  FUN_1002cb7e0(&local_100);
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x30) = local_100;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x50) = local_e0;
  *(undefined8 *)(unaff_x20 + 0x60) = local_d0;
  _swift_getKeyPath(&DAT_100c27ab8);
  FUN_1002cb7e0(&local_c8);
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x68) = local_c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x78) = local_b8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x88) = local_a8;
  *(undefined8 *)(unaff_x20 + 0x98) = local_98;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_1;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar4 = *(ulong **)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  local_90 = puVar4;
  uStack_88 = uVar6;
  local_80 = uVar7;
  local_70 = uVar5;
  local_60 = uVar3;
  _swift_retain(puVar4);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_101);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release();
  if (local_101 == '\x01') {
    FUN_10037aa04();
    *(ulong *)(unaff_x20 + 0xa0) = *(ulong *)(unaff_x20 + 0xa0) ^ *puVar4;
  }
  return;
}



/* Address: 0x100085a6c | FUN_100085a6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100085a6c(DispatchQoS param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  DispatchWorkItemFlags DVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  OS_dispatch_queue *pOVar10;
  void *aBlock;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  long lVar13;
  DispatchTime DVar14;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  code *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  flags.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar13 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  DVar14.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1000da768(&local_98);
  pcVar3 = local_78;
  puVar6 = local_80;
  ppuVar5 = &local_98;
  FUN_100004640(ppuVar5,local_80);
  FUN_1001a15c4(puVar6,pcVar3,ppuVar5);
  uVar9 = 0;
  FUN_100004594();
  if (((ulong)puVar6 & 1) == 0) {
    if ((ulong)param_1.unknown >> 0x3e == 0) {
      lVar7 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
        _Var1.unknown = param_1.unknown;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar7 != 0) {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100085f7c);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(param_1.unknown + 0x20);
      }
      else {
        uVar8 = 0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)param_1.unknown);
      }
      FUN_10030cc3c();
      uVar9 = 0;
      if ((uVar8 & 1) != 0) goto LAB_100085be4;
    }
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
    FUN_1000da768(&local_98);
    puVar6 = local_98;
    FUN_100064afc(1,0,0);
  }
  else {
LAB_100085be4:
    FUN_1000da768(&local_98);
    puVar6 = local_98;
    FUN_100ae5e74();
    _swift_release(puVar6);
    if ((uVar9 & 1) == 0) {
      FUN_1000da768(&local_98);
      if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100085f80);
        (*pcVar3)();
      }
      puVar12 = (undefined8 *)objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
      if (DAT_100fa7760 != -1) {
        puVar12 = &DAT_100fa7760;
        _swift_once(&DAT_100fa7760,FUN_100024fb0);
      }
      FUN_1000da768(&local_68);
      puVar6 = local_68;
      FUN_100ae4f8c();
      _swift_release(puVar6);
      _swift_release(local_98);
      if (((uint)puVar12 & 0xff) != 2) {
        FUN_1000da768(&local_98);
        puVar6 = local_98;
        FUN_10037a144(param_1.unknown,*(undefined8 *)(unaff_x20 + 0xa0));
        _swift_release(puVar6);
        if (((ulong)puVar12 & 1) == 0) {
          return;
        }
        _swift_getKeyPath(&DAT_100c27968);
        _swift_getKeyPath(&DAT_100c27990);
        local_98 = (undefined *)((ulong)local_98 & 0xffffffffffffff00);
        _swift_retain();
        FUN_1002cb5a0(&local_98);
        return;
      }
      FUN_1000da768(&local_98);
      FUN_1000da768(&local_68);
      puVar6 = local_68;
      FUN_100ae5248();
      _swift_release(puVar6);
      puVar6 = local_98;
    }
    else {
      pOVar10 = (OS_dispatch_queue *)0x0;
      FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
      local_c8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
      Dispatch::DispatchTime::now((DispatchTime)local_c8);
      Dispatch::__infix(DVar14,0.15);
      puVar2 = local_b8;
      local_c0 = *(code **)(lVar13 + 8);
      (*local_c0)(DVar14.unknown,local_b8);
      puVar6 = &DAT_100eb3278;
      _swift_allocObject(&DAT_100eb3278,0x20,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(undefined **)(puVar6 + 0x18) = param_1.unknown;
      local_78 = FUN_10008661c;
      local_98 = PTR___NSConcreteStackBlock_100ea82a0;
      local_90 = 0x42000000;
      local_88 = FUN_100030410;
      local_80 = &DAT_100eb3290;
      local_70 = puVar6;
      aBlock = __Block_copy(&local_98);
      _swift_retain();
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(param_1);
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar12 = &DAT_100fa82c0;
      FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar6 = &DAT_100fa7850;
      FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
      puVar11 = &DAT_100fa82d0;
      FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      Swift::SetAlgebra::_init(flags.unknown,&local_68,puVar6,puVar11,DVar4.unknown,puVar12);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
                ((DispatchTime)(DVar14.unknown + -extraout_x12),qos,flags);
      __Block_release(aBlock);
      (**(code **)(local_a0 + 8))(flags.unknown,DVar4.unknown);
      (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
      (*local_c0)(DVar14.unknown + -extraout_x12,puVar2);
      puVar6 = local_70;
    }
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x100085f80 | FUN_100085f80 */

void FUN_100085f80(undefined8 param_1,undefined8 param_2)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackViewController.swift",0x24,1,0x104,UVar4.unknown,puVar3);
  }
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_1000582d0(FUN_100086640,auStack_60,"Paste/PasteStackViewController.swift",0x24,2,0x105);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100086068 | FUN_100086068 */

void FUN_100086068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined8 local_48;
  
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
              ("Paste/PasteStackViewController.swift",0x24,1,0x105,UVar5.unknown,puVar4);
  }
  FUN_1000da768(&local_48);
  uVar2 = local_48;
  FUN_10037a144(param_2,*(undefined8 *)(param_1 + 0xa0));
  _swift_release(uVar2);
  FUN_1000da768(&local_48);
  FUN_100ae641c();
  _swift_release(pMVar3);
  _swift_release(local_48);
  return;
}



/* Address: 0x100086168 | FUN_100086168 */

void FUN_100086168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100086224 | FUN_100086224 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100086224(void)

{
  return ZEXT816(0x100faa168);
}



/* Address: 0x100086244 | FUN_100086244 */

int FUN_100086244(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1000862c0;
        goto LAB_1000862a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1000862a4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1000862c0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1000862d4 | FUN_1000862d4 */

undefined1  [16] FUN_1000862d4(void)

{
  return ZEXT816(0x100eb3228);
}



/* Address: 0x1000862e4 | thunk_FUN_1000862e8 */

void thunk_FUN_1000862e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faa258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2790c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2790c,&DAT_100eb3228);
  DAT_100faa258 = pTVar1;
  return;
}



/* Address: 0x1000862e8 | FUN_1000862e8 */

void FUN_1000862e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faa258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2790c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2790c,&DAT_100eb3228);
  DAT_100faa258 = pTVar1;
  return;
}



/* Address: 0x100086328 | FUN_100086328 */

void FUN_100086328(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + _TtC5Paste24PasteStackViewController::_pasteStackDirection);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa380,&DAT_100c27b48);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10008641c | FUN_10008641c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10008641c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c27b50;
  _swift_getKeyPath(&DAT_100c27b50);
  puVar3 = &DAT_100c27b78;
  _swift_getKeyPath(&DAT_100c27b78);
  local_31 = uVar1;
  FUN_1002cb5a0(&local_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x10008648c | FUN_10008648c */

void FUN_10008648c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x68,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x70);
  uVar3 = *(undefined8 *)(lVar1 + 0x68);
  uStack_78 = *(undefined8 *)(lVar1 + 0x80);
  uVar6 = *(undefined8 *)(lVar1 + 0x78);
  uStack_68 = *(undefined8 *)(lVar1 + 0x90);
  uVar4 = *(undefined8 *)(lVar1 + 0x88);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100086578 | thunk_FUN_10008648c */

void thunk_FUN_10008648c(void)

{
  FUN_10008648c();
  return;
}



/* Address: 0x10008657c | FUN_10008657c */

void FUN_10008657c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c27968;
  _swift_getKeyPath(&DAT_100c27968);
  puVar3 = &DAT_100c27990;
  _swift_getKeyPath(&DAT_100c27990);
  local_31 = uVar1;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x1000865ec | thunk_FUN_10008657c */

void thunk_FUN_10008657c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c27968;
  _swift_getKeyPath(&DAT_100c27968);
  puVar3 = &DAT_100c27990;
  _swift_getKeyPath(&DAT_100c27990);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x1000865f0 | FUN_1000865f0 */

void FUN_1000865f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10008661c | FUN_10008661c */

void FUN_10008661c(void)

{
  long unaff_x20;
  
  FUN_100085f80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100086624 | FUN_100086624 */

void FUN_100086624(long param_1,long param_2)

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



/* Address: 0x100086638 | FUN_100086638 */

void FUN_100086638(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100086640 | FUN_100086640 */

void FUN_100086640(void)

{
  long unaff_x20;
  
  FUN_100086068(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100086658 | FUN_100086658 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100086658(ID param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  _ArrayBuffer _Var6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC5Paste24PasteStackViewController::snippets;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24PasteStackViewController::snippets,auStack_48,0x20,0);
  _Var6.unknown = *(undefined **)(unaff_x20 + lVar1);
  if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100086790);
      (*pcVar2)();
    }
    if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100086794);
      (*pcVar2)();
    }
    param_2 = *(ulong *)(_Var6.unknown + param_2 * 8 + 0x20);
  }
  else {
    Swift::_ArrayBuffer::__getElementSlowPath(param_2,_Var6);
  }
  _swift_endAccess(auStack_48);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = objc_stub::makeViewWithIdentifier_owner_(param_1,pNVar3,0);
  if (IVar4 == 0) {
    IVar4 = 0;
  }
  else {
    uVar5 = 0;
    FUN_100051d0c(0);
    _swift_dynamicCastClass(IVar4,uVar5);
    if (IVar4 != 0) {
      FUN_1000519f8(param_2);
    }
  }
  return IVar4;
}



/* Address: 0x100086794 | FUN_100086794 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100086794(long param_1)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  NSString *pNVar3;
  void *aBlock;
  ID IVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  String SVar5;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_1 == 1) {
    FUN_1001c1088(LVar1.unknown);
    SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
    puVar2 = &DAT_100eb32c8;
    _swift_allocObject(&DAT_100eb32c8,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    local_40 = FUN_100086934;
    local_60 = PTR___NSConcreteStackBlock_100ea82a0;
    local_58 = 0x42000000;
    local_50 = FUN_1000854ec;
    puStack_48 = &DAT_100eb32e0;
    local_38 = puVar2;
    aBlock = __Block_copy(&local_60);
    IVar4 = NSTableViewRowAction::rowActionWithStyle_title_handler_
                      ((ID)&_OBJC_CLASS___NSTableViewRowAction,1,pNVar3,aBlock);
    __Block_release(aBlock);
    _swift_release(local_38);
    puVar2 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 3;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(ID *)(puVar2 + 0x20) = IVar4;
  }
  return;
}



/* Address: 0x100086910 | FUN_100086910 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100086910(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100086934 | FUN_100086934 */

void FUN_100086934(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100085434(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10008693c | FUN_10008693c */

void FUN_10008693c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100086960 | FUN_100086960 */

void FUN_100086960(void)

{
  FUN_100083df8();
  return;
}



/* Address: 0x100086968 | FUN_100086968 */

void FUN_100086968(void)

{
  FUN_100083e58();
  return;
}



/* Address: 0x100086980 | FUN_100086980 */

void FUN_100086980(void)

{
  long unaff_x20;
  
  FUN_100084210(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100086988 | thunk_FUN_10009db64 */

void thunk_FUN_10009db64(void)

{
  FUN_10009db64();
  return;
}



/* Address: 0x10008698c | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x100086990 | thunk_FUN_10008d724 */

void thunk_FUN_10008d724(void)

{
  FUN_10008d724();
  return;
}



/* Address: 0x100086994 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x100086998 | thunk_FUN_100070eb8 */

void thunk_FUN_100070eb8(void)

{
  FUN_100070eb8();
  return;
}



/* Address: 0x10008699c | thunk_FUN_100091254 */

void thunk_FUN_100091254(void)

{
  FUN_100091254();
  return;
}



/* Address: 0x1000869a0 | thunk_FUN_1000a2f94 */

void thunk_FUN_1000a2f94(void)

{
  FUN_1000a2f94();
  return;
}



/* Address: 0x1000869a4 | FUN_1000869a4 */

void FUN_1000869a4(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0xd000000000000013,0x8000000100d8ef50,&local_11,&DAT_100eb3228);
  return;
}



/* Address: 0x1000869e8 | FUN_1000869e8 */

void FUN_1000869e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faa370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c27894;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c27894,&DAT_100eb3228);
  DAT_100faa370 = pTVar1;
  return;
}



/* Address: 0x100086a28 | thunk_FUN_100086328 */

void thunk_FUN_100086328(void)

{
  FUN_100086328();
  return;
}



/* Address: 0x100086a2c | thunk_FUN_10008641c */

void thunk_FUN_10008641c(void)

{
  FUN_10008641c();
  return;
}



/* Address: 0x100086a30 | FUN_100086a30 */

void FUN_100086a30(void)

{
  FUN_10008333c();
  return;
}



/* Address: 0x100086a38 | FUN_100086a38 */

void FUN_100086a38(void)

{
  FUN_100084948();
  return;
}



/* Address: 0x100086a40 | FUN_100086a40 */

void FUN_100086a40(void)

{
  FUN_10008339c();
  return;
}



/* Address: 0x100086a58 | FUN_100086a58 */

void FUN_100086a58(void)

{
  long unaff_x20;
  
  FUN_100083818(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100086a60 | thunk_FUN_100086624 */

void thunk_FUN_100086624(void)

{
  FUN_100086624();
  return;
}



/* Address: 0x100086a64 | thunk_FUN_100086624 */

void thunk_FUN_100086624(void)

{
  FUN_100086624();
  return;
}



/* Address: 0x100086a68 | thunk_FUN_100086638 */

void thunk_FUN_100086638(void)

{
  FUN_100086638();
  return;
}



/* Address: 0x100086a6c | thunk_FUN_100086638 */

void thunk_FUN_100086638(void)

{
  FUN_100086638();
  return;
}



/* Address: 0x100086a70 | FUN_100086a70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100086a70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100086aac | FUN_100086aac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100086aac(void)

{
  return ZEXT816(0x100faa440);
}



/* Address: 0x100086acc | FUN_100086acc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100086b24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100086acc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_10009d668();
  _swift_allocObject();
  lVar1 = _TtC5Paste18SearchBarViewModel::_searchQuery;
  FUN_1002ddf60();
  _swift_bridgeObjectRetain();
  Combine::Published::init(lVar2 + lVar1,lVar2,&DAT_100ec8470);
  lVar1 = _TtC5Paste18SearchBarViewModel::searchService;
  puVar3 = &DAT_100c27c10;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa67f0;
  FUN_1000037f0(&DAT_100fa67f0,&DAT_100c22fb0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar2 + lVar1) = puVar3;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  IVar5 = 0;
  FUN_10003b990();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + 0x18) = IVar5;
  uVar6 = 0;
  FUN_100094574();
  _swift_allocObject();
  FUN_100092f88();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
  puVar3 = &DAT_100c27c48;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa7840;
  FUN_1000037f0(&DAT_100fa7840,&DAT_100c27c70);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  return;
}


