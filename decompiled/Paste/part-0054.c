/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000a5540 | FUN_1000a5540 */

void FUN_1000a5540(Duration param_1,undefined8 param_2)

{
  Duration DVar1;
  long *plVar2;
  long unaff_x22;
  
  DVar1 = Swift::Duration::seconds(0.1,param_1);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000a55e0;
  FUN_100091764(DVar1.unknown,param_2,0,0,1);
  return;
}



/* Address: 0x1000a55e0 | FUN_1000a55e0 */

void FUN_1000a55e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x20) + 8))
              (*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x18));
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_1000a5650;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_1000a5694;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1000a5650 | FUN_1000a5650 */

void FUN_1000a5650(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_1000a56f4();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000a5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a5694 | FUN_1000a5694 */

void FUN_1000a5694(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_1000a56f4();
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000a56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a56f4 | FUN_1000a56f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000a56f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  Published PVar8;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa6670;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  lVar12 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = PTR__NSApp_100ea8fa0;
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5af4);
    (*pcVar3)();
  }
  IVar6 = objc_stub::modalWindow(*(ID *)PTR__NSApp_100ea8fa0);
  if (IVar6 != 0) {
    if (*(ID *)puVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5af8);
      (*pcVar3)();
    }
    objc_stub::activateIgnoringOtherApps_(*(ID *)puVar7,1);
    return;
  }
  IVar6 = *(ID *)(unaff_x20 + 0xd0);
  if (IVar6 == 0) {
    FUN_10001a258();
    _objc_allocWithZone();
    IVar6 = objc_stub::init(IVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(ID *)(unaff_x20 + 0xd0) = IVar6;
    lVar11 = *(long *)(unaff_x20 + 0xd0);
    if (lVar11 == 0) goto LAB_1000a5828;
    puVar7 = &DAT_100eb3d08;
    _swift_allocObject(uVar9,&DAT_100eb3d08,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar1 = (undefined8 *)(lVar11 + _TtC5Paste20MainWindowController::onDidShow);
    uVar9 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_1000a9960;
    puVar1[1] = puVar7;
    _swift_retain(puVar7);
    FUN_100004550(uVar9,uVar2);
    _swift_release(puVar7);
    lVar11 = *(long *)(unaff_x20 + 0xd0);
    if (lVar11 == 0) goto LAB_1000a5828;
    puVar7 = &DAT_100eb3d08;
    _swift_allocObject(&DAT_100eb3d08,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar1 = (undefined8 *)(lVar11 + _TtC5Paste20MainWindowController::onWillClose);
    uVar9 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_1000a9968;
    puVar1[1] = puVar7;
    _swift_retain(puVar7);
    FUN_100004550(uVar9,uVar2);
    _swift_release(puVar7);
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_1000a5828;
    _swift_beginAccess(*(long *)(unaff_x20 + 0xd0) + _TtC5Paste20MainWindowController::_isVisible,
                       &local_80,0x21,0);
    PVar8.unknown = &DAT_100fa6680;
    FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
    Combine::Published::_get_projectedValue(PVar8);
    _swift_endAccess(&local_80);
    puVar7 = &DAT_100eb3d08;
    _swift_allocObject(&DAT_100eb3d08,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    FUN_100016eac(&DAT_100fa7848,&DAT_100fa6670,&DAT_100c28380,
                  PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar7);
    (**(code **)(lVar12 + 8))(lVar10 - extraout_x8_00,puVar5);
    _swift_beginAccess(unaff_x20 + 0x208,&local_80,0x21,0);
    Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x208));
    _swift_endAccess(&local_80);
    _swift_release(this);
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_1000a5828;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_1000192b0(&local_80);
  FUN_100005808(&local_80,&DAT_100fa8810,&DAT_100c23ce0);
LAB_1000a5828:
  FUN_1000da768(&local_80);
  uVar9 = local_80;
  FUN_1003b11bc(lVar10);
  _swift_release(uVar9);
  lVar12 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar4);
  FUN_10005241c(lVar10,FUN_1003b2fc0);
  if ((uint)lVar12 < 2) {
    FUN_1000da768(&local_80);
    uVar9 = local_80;
    FUN_1003a4c78(0,0);
    _swift_release(uVar9);
  }
  return;
}



/* Address: 0x1000a5af8 | FUN_1000a5af8 */

void FUN_1000a5af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1000a5b10,0,0);
  return;
}



/* Address: 0x1000a5b10 | FUN_1000a5b10 */

void FUN_1000a5b10(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000a5b90;
                    /* WARNING: Could not recover jumptable at 0x0001000a5b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0,0,uVar2,lVar3);
  return;
}



/* Address: 0x1000a5b90 | FUN_1000a5b90 */

void FUN_1000a5b90(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
  }
  *(bool *)*(undefined8 *)(lVar1 + 0x10) = unaff_x20 != 0;
                    /* WARNING: Could not recover jumptable at 0x0001000a5be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1000a5bec | FUN_1000a5bec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a5bec(void)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  MainActor *pMVar16;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  undefined1 *puVar20;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  long lVar22;
  code *pcVar23;
  long unaff_x20;
  MainActor *pMVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_110 [8];
  byte local_c0;
  undefined7 uStack_bf;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar4 = 0;
  FUN_1003efa8c();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar20 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)puVar20 - extraout_x12;
  puVar5 = &DAT_100fa9910;
  FUN_1000037f0(&DAT_100fa9910,&DAT_100c26ec0);
  lVar22 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar26 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = &DAT_100fab338;
  FUN_1000037f0(&DAT_100fab338,&DAT_100c29210);
  lVar21 = *(long *)(lVar22 + 0x48);
  bVar3 = *(byte *)(lVar22 + 0x50);
  _swift_allocObject();
  pMVar24 = (MainActor *)(puVar6 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  FUN_1000da768(&local_a0);
  _swift_release(local_a0);
  IVar7 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar7 = SMAppService::status(IVar7);
  if (IVar7 != 1) {
    FUN_100400f5c(pMVar24,0);
  }
  pcVar23 = *(code **)(lVar18 + 0x38);
  pMVar16 = pMVar24;
  (*pcVar23)(pMVar24,IVar7 == 1,1,lVar4);
  FUN_1000da768(&local_a0);
  FUN_1003b14d4();
  _swift_release(local_a0);
  bVar1 = ((ulong)pMVar16 & 1) != 0;
  if (!bVar1) {
    FUN_1003fd448(pMVar24 + lVar21);
  }
  (*pcVar23)(pMVar24 + lVar21,bVar1,1,lVar4);
  _swift_beginAccess(unaff_x20 + 0x160,auStack_b8,0,0);
  uVar29 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar30 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar25 = *(undefined8 *)(unaff_x20 + 400);
  local_a0 = uVar27;
  uStack_98 = uVar29;
  local_90 = uVar30;
  local_80 = uVar28;
  local_70 = uVar25;
  _swift_retain(uVar27);
  _swift_retain(uVar29);
  _swift_retain(uVar30);
  _swift_retain(uVar28);
  _swift_retain(uVar25);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_c0);
  _swift_release(uVar25);
  _swift_release(uVar28);
  _swift_release(uVar30);
  _swift_release(uVar29);
  _swift_release(uVar27);
  bVar1 = (local_c0 & 1) != 0;
  if (!bVar1) {
    FUN_100400ddc(pMVar24 + lVar21 * 2);
  }
  (*pcVar23)(pMVar24 + lVar21 * 2,bVar1,1,lVar4);
  this = Swift::MainActor::typeMetadataAccessor();
  lVar22 = 3;
  pMVar16 = pMVar24;
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    pMVar8 = pMVar16;
    FUN_1000aa268(pMVar16,lVar26 - extraout_x12_00);
    pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
    puVar9 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar17 = puVar9;
    UVar10 = Swift::Actor::get_unownedExecutor();
    UVar11 = UVar10;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar11.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/AppCoordinator.swift",0x1a,1,0x19d,UVar10.unknown,puVar17);
    }
    FUN_1000aa2b8(lVar26 - extraout_x12_00,lVar26);
    _swift_release(pMVar8);
    lVar12 = lVar26;
    (**(code **)(lVar18 + 0x30))(lVar26,1,lVar4);
    if ((int)lVar12 == 1) {
      FUN_100005808(lVar26,&DAT_100fa9910,&DAT_100c26ec0);
    }
    else {
      FUN_1000aa308(lVar26,puVar20);
      puVar13 = puVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar15;
      if (((ulong)puVar13 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_1000893ac(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
      }
      uVar2 = *(ulong *)(puVar14 + 0x10);
      puVar15 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_1000893ac(puVar15,uVar2 + 1,1,puVar14);
      }
      *(ulong *)(puVar15 + 0x10) = uVar2 + 1;
      FUN_1000aa308(puVar20,puVar15 + *(long *)(lVar18 + 0x48) * uVar2 +
                                      ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)));
    }
    pMVar16 = pMVar16 + lVar21;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(pMVar24,3,puVar5);
  _swift_deallocClassInstance(puVar6,0x20,7);
  lVar4 = *(long *)(puVar15 + 0x10);
  if (lVar4 != 0) {
    pMVar24 = (MainActor *)
              (puVar15 +
              ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)));
    lVar18 = *(long *)(lVar18 + 0x48);
    do {
      pMVar16 = pMVar24;
      FUN_10008c240(pMVar24,lVar19);
      pMVar16 = Swift::MainActor::get_shared(this,pMVar16);
      puVar17 = puVar9;
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/AppCoordinator.swift",0x1a,1,0x19e,UVar10.unknown,puVar17);
      }
      FUN_1000da768(&local_c0);
      uVar25 = CONCAT71(uStack_bf,local_c0);
      FUN_1003fea8c(lVar19);
      _swift_release(uVar25);
      FUN_10005241c(lVar19,FUN_1003efa8c);
      _swift_release(pMVar16);
      pMVar24 = pMVar24 + lVar18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x1000a6148 | FUN_1000a6148 */

void FUN_1000a6148(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = 0;
  FUN_1000263ac();
  _swift_allocObject();
  FUN_1000250e0();
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar1;
  _swift_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + 0xe0);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    *(code **)(lVar3 + 0x10) = FUN_1000aa748;
    *(long *)(lVar3 + 0x18) = unaff_x20;
    _swift_retain(lVar3);
    _swift_retain();
    FUN_100004550(uVar1,uVar2);
    _swift_release(lVar3);
    return;
  }
  return;
}



/* Address: 0x1000a61e0 | FUN_1000a61e0 */

void FUN_1000a61e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyCancellable *pAVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x120);
  local_a0 = uVar5;
  uStack_98 = uVar8;
  local_90 = uVar9;
  local_80 = uVar6;
  local_70 = uVar4;
  _swift_retain(uVar5);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  puVar1 = &DAT_100faa910;
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  puVar2 = puVar1;
  FUN_1002cb1ec();
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar9);
  _swift_release(uVar8);
  _swift_release(uVar5);
  puVar7 = &DAT_100eb3d08;
  local_e0 = puVar2;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  FUN_1000037f0(&DAT_100faad60,&DAT_100c28680);
  FUN_100016eac(&DAT_100faad68,&DAT_100faad60,&DAT_100c28680,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  _swift_release(puVar7);
  _swift_beginAccess(unaff_x20 + 0x208,&local_e0,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(&local_e0);
  _swift_release(pAVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
  puVar7 = *(undefined **)(unaff_x20 + 0x128);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x158);
  local_e0 = puVar7;
  uStack_d8 = uVar6;
  local_d0 = uVar8;
  local_c0 = uVar5;
  local_b0 = uVar4;
  _swift_retain(puVar7);
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar5);
  _swift_retain(uVar4);
  FUN_1002cb1ec();
  _swift_release(uVar4);
  _swift_release(uVar5);
  _swift_release(uVar8);
  _swift_release(uVar6);
  _swift_release(puVar7);
  puVar7 = &DAT_100eb3d08;
  local_f8[0] = puVar1;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar1);
  _swift_release(puVar7);
  _swift_beginAccess(unaff_x20 + 0x208,local_f8,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_f8);
  _swift_release(pAVar3);
  return;
}



/* Address: 0x1000a648c | FUN_1000a648c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a6704 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a648c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  OS_dispatch_queue *pOVar4;
  OS_dispatch_queue *pOVar5;
  SchedulerOptions SVar6;
  undefined *puVar7;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  OS_dispatch_queue *local_b8 [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fa7510;
  FUN_1000037f0(&DAT_100fa7510,&DAT_100c24330);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fab378;
  local_e0 = (long)&local_e0 - extraout_x8;
  FUN_1000037f0(&DAT_100fab378,&DAT_100c29318);
  local_d0 = *(long *)(puVar3 + -8);
  local_d8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&local_e0 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100fab380;
  FUN_1000037f0(&DAT_100fab380,&DAT_100c29320);
  local_c0 = *(long *)(puVar3 + -8);
  local_c8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_01;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x200);
  local_a0 = uVar11;
  uStack_98 = uVar13;
  local_90 = uVar14;
  local_80 = uVar12;
  local_70 = uVar10;
  _swift_retain(uVar11);
  _swift_retain(uVar13);
  _swift_retain(uVar14);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  pOVar4 = (OS_dispatch_queue *)&DAT_100fa8320;
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002cb1ec();
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar14);
  _swift_release(uVar13);
  _swift_release(uVar11);
  local_b8[0] = pOVar4;
  FUN_1000037f0(&DAT_100fa8388,&DAT_100c25470);
  FUN_100016eac(&DAT_100fa8390,&DAT_100fa8388,&DAT_100c25470,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(pOVar4);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  local_b8[0] = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  SVar6 = SchedulerOptions::_typeMetadataAccessor();
  lVar1 = local_e0;
  (**(code **)(*(long *)(SVar6.unknown + -8) + 0x38))(local_e0,1,1,SVar6.unknown);
  puVar3 = &DAT_100fab388;
  FUN_100016eac(&DAT_100fab388,&DAT_100fab378,&DAT_100c29318,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  puVar7 = puVar3;
  FUN_1000aa6c4();
  puVar2 = local_d8;
  (extension_Combine)::Combine::Publisher::_receive
            (lVar9,puVar7,lVar1,local_d8,pOVar5,puVar3,puVar7);
  FUN_100005808(lVar1,&DAT_100fa7510,&DAT_100c24330);
  (**(code **)(local_d0 + 8))(lVar8,puVar2);
  FUN_100016eac(&DAT_100fab390,&DAT_100fab380,&DAT_100c29320,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  puVar3 = local_c8;
  this = (extension_Combine)::Combine::Publisher::_sink();
  (**(code **)(local_c0 + 8))(lVar9,puVar3);
  _swift_beginAccess(unaff_x20 + 0x208,local_b8,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_b8);
  _swift_release(this);
  return;
}



/* Address: 0x1000a67e4 | FUN_1000a67e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a6cd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a67e4(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  AnyCancellable *pAVar7;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [8];
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  long local_e0;
  AnyCancellable *local_d8;
  undefined *local_d0 [3];
  undefined *local_b8 [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_e8 = (undefined *)Publisher::_typeMetadataAccessor();
  local_e0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e0 + 0x40));
  puVar2 = &DAT_100fa9850;
  local_f0 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fa9850,&DAT_100c26e28);
  local_108 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  FUN_1000da768(&local_a0);
  FUN_10009afdc();
  _swift_release(local_a0);
  puVar4 = &DAT_100eb3d08;
  local_b8[0] = puVar3;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &DAT_100fa7ac8;
  FUN_1000037f0(&DAT_100fa7ac8,&DAT_100c28460);
  puVar6 = &DAT_100fa7ad0;
  local_f8 = puVar5;
  FUN_100016eac(&DAT_100fa7ad0,&DAT_100fa7ac8,&DAT_100c28460,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  local_100 = puVar6;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_beginAccess(unaff_x20 + 0x208,&local_a0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(&local_a0);
  _swift_release(pAVar7);
  _swift_beginAccess(unaff_x20 + 0x160,local_b8,0,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x20 + 400);
  local_a0 = uVar11;
  uStack_98 = uVar13;
  local_90 = uVar14;
  local_80 = uVar12;
  local_70 = uVar9;
  _swift_retain(uVar11);
  _swift_retain(uVar13);
  _swift_retain(uVar14);
  _swift_retain(uVar12);
  _swift_retain(uVar9);
  puVar4 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar9);
  _swift_release(uVar12);
  _swift_release(uVar14);
  _swift_release(uVar13);
  _swift_release(uVar11);
  local_d0[0] = puVar4;
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(puVar4);
  puVar4 = &DAT_100eb3d08;
  puVar5 = puVar4;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  FUN_100016eac(&DAT_100fa9858,&DAT_100fa9850,&DAT_100c26e28,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar5);
  pcVar8 = *(code **)(local_108 + 8);
  (*pcVar8)(lVar10,puVar2);
  _swift_beginAccess(unaff_x20 + 0x208,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_d0);
  _swift_release();
  FUN_1000da768(local_d0);
  puVar5 = local_d0[0];
  FUN_1003b1db4();
  _swift_release(puVar5);
  local_d8 = pAVar7;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(pAVar7);
  puVar5 = puVar4;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar5);
  (*pcVar8)(lVar10,puVar2);
  _swift_beginAccess(unaff_x20 + 0x208,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_d0);
  _swift_release();
  FUN_1000da768(local_d0);
  puVar2 = local_d0[0];
  FUN_1000ae12c();
  _swift_release(puVar2);
  puVar2 = puVar4;
  local_d8 = pAVar7;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(pAVar7);
  _swift_release(puVar2);
  _swift_beginAccess(unaff_x20 + 0x208,local_d0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_d0);
  _swift_release(this);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a7ec();
  puVar1 = local_f0;
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(local_f0,local_d0,0);
  puVar5 = puVar4;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  FUN_100003a00(&DAT_100fa6698,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  puVar2 = local_e8;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar5);
  pcVar8 = *(code **)(local_e0 + 8);
  (*pcVar8)(puVar1,puVar2);
  _swift_beginAccess(unaff_x20 + 0x208,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_d0);
  _swift_release(pAVar7);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a99c();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar1,local_d0,0);
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (*pcVar8)(puVar1,puVar2);
  _swift_beginAccess(unaff_x20 + 0x208,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + 0x208));
  _swift_endAccess(local_d0);
  _swift_release(pAVar7);
  FUN_1004004b0();
  return;
}



/* Address: 0x1000a6e7c | FUN_1000a6e7c */

void FUN_1000a6e7c(void)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 in_x3;
  undefined1 in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 in_w7;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x79) = in_w7;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x6;
  *(undefined1 *)(unaff_x22 + 0x78) = in_w4;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x58) = pMVar3;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x60) = pMVar3;
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x68) = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000a6f4c,UVar5.unknown,puVar4);
  return;
}



/* Address: 0x1000a6f4c | FUN_1000a6f4c */

void FUN_1000a6f4c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar3);
  piVar7 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000a6fe8;
                    /* WARNING: Could not recover jumptable at 0x0001000a6fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar2,uVar4,uVar3,lVar5);
  return;
}



/* Address: 0x1000a6fe8 | FUN_1000a6fe8 */

void FUN_1000a6fe8(void)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined *puVar10;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar12 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar12 + 0x68);
  pMVar9 = *(MainActor **)(lVar12 + 0x58);
  uVar3 = *(undefined8 *)(lVar12 + 0x60);
  uVar5 = *(undefined1 *)(lVar12 + 0x79);
  pMVar2 = *(MainActor **)(lVar12 + 0x48);
  uVar4 = *(undefined8 *)(lVar12 + 0x50);
  uVar6 = *(undefined1 *)(lVar12 + 0x78);
  lVar11 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x70));
  uVar14 = *(undefined8 *)(lVar12 + 0x40);
  uVar13 = *(undefined8 *)(lVar12 + 0x38);
  _swift_release(uVar3);
  FUN_100004594(lVar12 + 0x10);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar4,1,1,TVar7.unknown);
  _swift_retain(uVar13);
  pMVar8 = pMVar2;
  _swift_retain();
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar8);
  puVar10 = &DAT_100eb3f10;
  _swift_allocObject(&DAT_100eb3f10,0x41,7);
  *(MainActor **)(puVar10 + 0x10) = pMVar9;
  *(undefined8 *)(puVar10 + 0x18) = uVar1;
  puVar10[0x20] = uVar6;
  *(undefined8 *)(puVar10 + 0x30) = uVar14;
  *(undefined8 *)(puVar10 + 0x28) = uVar13;
  *(MainActor **)(puVar10 + 0x38) = pMVar2;
  puVar10[0x40] = uVar5;
  FUN_1000645b0(0,0,uVar4,&DAT_100c29298,puVar10);
  _swift_release();
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000a70fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))();
  return;
}



/* Address: 0x1000a7100 | FUN_1000a7100 */

void FUN_1000a7100(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined1 in_w3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 in_w7;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x59) = in_w7;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x4;
  *(undefined1 *)(unaff_x22 + 0x58) = in_w3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000a719c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000a719c | FUN_1000a719c */

void FUN_1000a719c(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  bVar1 = *(byte *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  if ((bVar1 & 1) == 0) {
    FUN_1000da768(unaff_x22 + 0x10);
    uVar3 = *(ulong *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar2 = unaff_x22 + 0x10;
    FUN_100004640(lVar2,uVar3);
    FUN_1001a15c4(uVar3,uVar5,lVar2);
    FUN_100004594(unaff_x22 + 0x10);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      FUN_1000da768(unaff_x22 + 0x10);
      puVar4 = &DAT_100eb3f38;
      _swift_allocObject(&DAT_100eb3f38,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uVar7;
      *(undefined8 *)(puVar4 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_retain(uVar5);
      FUN_100064afc(4,FUN_1000386a0,puVar4);
    }
    else {
      if (*(char *)(unaff_x22 + 0x59) != '\x01') goto LAB_1000a72e8;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      FUN_1000da768(unaff_x22 + 0x10);
      puVar4 = &DAT_100eb3f60;
      _swift_allocObject(&DAT_100eb3f60,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uVar7;
      *(undefined8 *)(puVar4 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
      _swift_retain(uVar5);
      FUN_1000a477c(FUN_1000386a0,puVar4);
    }
    _swift_release(puVar4);
    _swift_release(uVar6);
  }
  else {
    (**(code **)(unaff_x22 + 0x40))();
  }
LAB_1000a72e8:
                    /* WARNING: Could not recover jumptable at 0x0001000a72fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a7300 | FUN_1000a7300 */

void FUN_1000a7300(void)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  ulong uVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(LVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  lVar4 = 0;
  FUN_1003efa8c();
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x48) = pMVar5;
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x50) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0x58) = puVar6;
  _swift_task_switch(FUN_1000a73d0,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1000a73d0 | FUN_1000a73d0 */

void FUN_1000a73d0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    _swift_retain(uVar3);
    FUN_1000da768(unaff_x22 + 0x10);
    _swift_release(uVar3);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
    plVar2 = (long *)0xc0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1000a747c;
    FUN_1003a2b14();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000a7478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a747c | FUN_1000a747c */

void FUN_1000a747c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  *(long *)(lVar4 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_1000a74e8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_1000a7610;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1000a74e8 | FUN_1000a74e8 */

void FUN_1000a74e8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  LocalizedStringResource localized;
  long unaff_x22;
  String SVar6;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x40);
  localized.unknown = *(undefined **)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  _swift_retain(uVar3);
  FUN_1000da768(unaff_x22 + 0x20);
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_1003fd448(puVar4);
  FUN_1003feee0(*puVar4,puVar4[1]);
  _swift_release(uVar3);
  FUN_10005241c(puVar4,FUN_1003efa8c);
  puVar4 = *(undefined8 **)(lVar2 + 0x58);
  _swift_retain(puVar4);
  FUN_1000da768(unaff_x22 + 0x28);
  _swift_release();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_10020c980();
  uVar3 = *puVar4;
  uVar1 = puVar4[1];
  _swift_bridgeObjectRetain(uVar1);
  FUN_1001c4cd0(localized.unknown);
  SVar6 = (extension_Foundation)::Swift::String::init(localized);
  FUN_10020b084(uVar3,uVar1,SVar6.str,SVar6.bridgeObject,0,0,0,0);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(lVar2);
  _swift_release(uVar5);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000a760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a7610 | FUN_1000a7610 */

void FUN_1000a7610(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  _swift_retain(uVar2);
  FUN_1000da768(unaff_x22 + 0x18);
  _swift_release(uVar2);
  FUN_1000a2e04();
  _swift_errorRelease(uVar1);
  _swift_release(lVar3);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000a7694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a7698 | FUN_1000a7698 */

void FUN_1000a7698(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x48) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000a7728,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000a7728 | FUN_1000a7728 */

void FUN_1000a7728(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar1,FUN_100004520,0,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001000a77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a77ac | FUN_1000a77ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a77ac(void)

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
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe8));
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x120));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x158));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x180);
  _swift_release(*(undefined8 *)(unaff_x20 + 400));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1b8);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1c8));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1f0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x200));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x208));
  return;
}



/* Address: 0x1000a79b4 | FUN_1000a79b4 */

void FUN_1000a79b4(void)

{
  FUN_1000a77ac();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000a79d4 | FUN_1000a79d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000a79d4(void)

{
  return ZEXT816(0x100fab198);
}



/* Address: 0x1000a79f4 | FUN_1000a79f4 */

void FUN_1000a79f4(void)

{
  URL UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000a7a68 | FUN_1000a7a68 */

void FUN_1000a7a68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  URL UVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  bVar3 = *(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1000a7698(plVar5,param_1,uVar1,uVar2,uVar6,
                unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000a7af8 | FUN_1000a7af8 */

void FUN_1000a7af8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  __int64 _Var7;
  long unaff_x20;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar3 = &DAT_100c28dc8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa360;
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  puVar3 = &DAT_100c28df8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab308;
  FUN_1000037f0(&DAT_100fab308,&DAT_100c28e20);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  puVar3 = &DAT_100c28e28;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa8f60;
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar3 = &DAT_100c28e58;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa818;
  FUN_1000037f0(&DAT_100faa818,&DAT_100c27e48);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar3 = &DAT_100c28e88;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa8360;
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  puVar3 = &DAT_100c28eb8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  puVar3 = &DAT_100c28ee0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab310;
  FUN_1000037f0(&DAT_100fab310,&DAT_100c28f10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  puVar3 = &DAT_100c28f18;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa368;
  FUN_1000037f0(&DAT_100faa368,&DAT_100c27b10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  puVar3 = &DAT_100c28f48;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab318;
  FUN_1000037f0(&DAT_100fab318,&DAT_100c28f78);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  puVar3 = &DAT_100c28f80;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa6690;
  FUN_1000037f0(&DAT_100fa6690,&DAT_100c22ee0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  puVar3 = &DAT_100c28fa8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  puVar3 = &DAT_100c28fd8;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa830;
  FUN_1000037f0(&DAT_100faa830,&DAT_100c271b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x68) = puVar3;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0x64726f6f43707041;
  FUN_1000d4624(0x64726f6f43707041,0xee00726f74616e69);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  puVar3 = &DAT_100c29008;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab320;
  FUN_1000037f0(&DAT_100fab320,&DAT_100c29038);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x98) = puVar3;
  puVar3 = &DAT_100c29040;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa9940;
  FUN_1000037f0(&DAT_100fa9940,&DAT_100c26f40);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0xa0) = puVar3;
  puVar3 = &DAT_100c29068;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa848;
  FUN_1000037f0(&DAT_100faa848,&DAT_100c27fd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0xa8) = puVar3;
  uVar5 = 0;
  FUN_100400dbc();
  _swift_allocObject();
  FUN_10040037c();
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar5;
  puVar3 = &DAT_100c29090;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab328;
  FUN_1000037f0(&DAT_100fab328,&DAT_100c290c0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0xb8) = puVar3;
  puVar3 = &DAT_100c290c8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fab330;
  FUN_1000037f0(&DAT_100fab330,&DAT_100c290f8);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0xc0) = puVar3;
  puVar3 = &DAT_100c29100;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa6a70;
  FUN_1000037f0(&DAT_100fa6a70,&DAT_100c23430);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 200) = puVar3;
  uVar5 = 0;
  FUN_100077144();
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  _swift_allocObject();
  FUN_100076884();
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar5;
  puVar3 = &DAT_100c29128;
  _swift_getKeyPath(&DAT_100c29128);
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
  ;
  puVar4 = &DAT_100fa80e0;
  FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar1 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
  ;
  puVar6 = &DAT_100faa900;
  FUN_100038704(&DAT_100faa900,FUN_100038774,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_168,puVar3,puVar4,puVar6);
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0xf0) = local_168;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x100) = local_158;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x110) = local_148;
  *(undefined8 *)(unaff_x20 + 0x120) = local_138;
  _swift_getKeyPath(&DAT_100c29150);
  FUN_1002cb88c(&local_130);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x128) = local_130;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x148) = local_110;
  *(undefined8 *)(unaff_x20 + 0x158) = local_100;
  _swift_getKeyPath(&DAT_100c29178);
  FUN_1002cb7e0(&local_f8);
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x160) = local_f8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x170) = local_e8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x180) = local_d8;
  *(undefined8 *)(unaff_x20 + 400) = local_c8;
  puVar3 = &DAT_100c291a0;
  _swift_getKeyPath(&DAT_100c291a0);
  puVar4 = &DAT_100faa850;
  FUN_100091540(&DAT_100faa850,FUN_100091500,puVar2);
  puVar6 = &DAT_100faa868;
  FUN_100091540(&DAT_100faa868,FUN_1000915b0,puVar1);
  FUN_1002cb88c(&local_c0,puVar3,puVar4,puVar6);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x198) = local_c0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1b8) = local_a0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = local_90;
  puVar3 = &DAT_100c28da0;
  _swift_getKeyPath(&DAT_100c28da0);
  puVar4 = puVar3;
  FUN_100009bac();
  FUN_1002cb7e0(&local_88,puVar3,puVar4);
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x1d0) = local_88;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x1e0) = local_78;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x1f0) = local_68;
  *(undefined8 *)(unaff_x20 + 0x200) = local_58;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var7 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var7 != 0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + 0x208) = puVar3;
  return;
}



/* Address: 0x1000a8280 | FUN_1000a8280 */

void FUN_1000a8280(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  pcVar1 = *(code **)(param_1 + 0x78);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    FUN_100011128(pcVar1,uVar2);
    _swift_release(param_1);
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x1000a82fc | FUN_1000a82fc */

void FUN_1000a82fc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  pcVar1 = *(code **)(param_1 + 0x88);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    FUN_100011128(pcVar1,uVar2);
    _swift_release(param_1);
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x1000a8378 | FUN_1000a8378 */

void FUN_1000a8378(char *param_1,long param_2)

{
  char cVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  MainActor *local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  cVar1 = *param_1;
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
              ("Paste/AppCoordinator.swift",0x1a,1,0xf5,UVar5.unknown,puVar4);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar3);
    return;
  }
  uVar11 = *(undefined8 *)(param_2 + 0x130);
  uVar9 = *(undefined8 *)(param_2 + 0x128);
  uStack_88 = *(undefined8 *)(param_2 + 0x140);
  uVar12 = *(undefined8 *)(param_2 + 0x138);
  uStack_78 = *(undefined8 *)(param_2 + 0x150);
  uVar10 = *(undefined8 *)(param_2 + 0x148);
  uVar8 = *(undefined8 *)(param_2 + 0x158);
  local_a0 = uVar9;
  uStack_98 = uVar11;
  local_90 = uVar12;
  local_80 = uVar10;
  local_70 = uVar8;
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar8);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(&local_b8);
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar11);
  _swift_release(uVar9);
  pMVar2 = local_b8;
  if (local_a8 != '\x01') {
    if (cVar1 == '\0') {
      FUN_1000da768(&local_b8);
      puVar7 = &DAT_100eb3d08;
      _swift_allocObject(&DAT_100eb3d08,0x18,7);
      _swift_weakInit(puVar7 + 0x10,param_2);
      _swift_retain(puVar7);
      FUN_1001eaa64(pMVar2,uStack_b0,FUN_1000a9978,puVar7);
      _swift_release(pMVar3);
      _swift_release(local_b8);
      _swift_release_n(puVar7,2);
      goto LAB_1000a85b0;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    _swift_retain(uVar8);
    FUN_1000da768(&local_b8);
    _swift_release(uVar8);
    FUN_1001eae90(pMVar2,uStack_b0);
    _swift_release(pMVar3);
    pMVar3 = local_b8;
  }
  _swift_release(pMVar3);
LAB_1000a85b0:
  _swift_release(param_2);
  return;
}



/* Address: 0x1000a85d8 | FUN_1000a85d8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000a85d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(unaff_x20 + 0xd8) == 0) {
    uVar1 = 0;
    FUN_10001148c();
    thunk_FUN_10020a8c4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x20 + 0xd8) = uVar1;
    if (*(long *)(unaff_x20 + 0xd8) != 0) {
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      puVar2 = &DAT_100eb3d08;
      _swift_allocObject(uVar3,&DAT_100eb3d08,0x18,7);
      _swift_weakInit(puVar2 + 0x10);
      _swift_retain(puVar2);
      FUN_100217e4c(&local_50,FUN_1000a9998,puVar2);
      _swift_release(puVar2);
      FUN_100005808(&local_50,&DAT_100fa8810,&DAT_100c23ce0);
      _swift_release(puVar2);
    }
  }
  return;
}



/* Address: 0x1000a86c0 | FUN_1000a86c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a86c0(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0xd8) = 0;
    _swift_release();
    return 0;
  }
  return 0;
}



/* Address: 0x1000a8700 | FUN_1000a8700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a8700(long param_1)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  
  self = *(ID *)(param_1 + 0xd0);
  if ((((self == 0) || (IVar1 = objc_stub::window(self), IVar1 == 0)) ||
      (IVar1 = objc_stub::isVisible(IVar1), (int)IVar1 == 0)) ||
     ((*(byte *)(self + _TtC5Paste20MainWindowController::closing) & 1) != 0)) {
    uVar2 = 0;
    FUN_1000a56f4(0);
  }
  else {
    uVar2 = 0;
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_100019a84(*(long *)(param_1 + 0xd0));
      return 0;
    }
  }
  return uVar2;
}



/* Address: 0x1000a87a8 | FUN_1000a87a8 */

void FUN_1000a87a8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined8 uVar12;
  undefined8 local_68;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  lVar2 = param_1[3];
  lVar4 = param_1[4];
  lVar6 = param_1[5];
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,0x12e,UVar10.unknown,puVar9);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar8);
    return;
  }
  if ((char)lVar5 != '\x01') {
    if ((((char)lVar6 != '\x01') && (lVar1 == lVar2)) && (lVar3 == lVar4)) goto LAB_1000a88f0;
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    _swift_retain(uVar12);
    FUN_1000da768(&local_68);
    _swift_release(uVar12);
    uVar12 = local_68;
    FUN_1001eae90(lVar1,lVar3);
    _swift_release(uVar12);
  }
  if ((char)lVar6 == '\x01') {
    _swift_release(pMVar8);
    _swift_release(param_2);
    return;
  }
LAB_1000a88f0:
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  _swift_retain(uVar12);
  FUN_1000da768(&local_68);
  _swift_release(uVar12);
  _swift_retain(param_2);
  FUN_1001eaa64(lVar2,lVar4,FUN_1000aa728,param_2);
  _swift_release(pMVar8);
  _swift_release(local_68);
  _swift_release_n(param_2,2);
  return;
}



/* Address: 0x1000a8994 | FUN_1000a8994 */

void FUN_1000a8994(undefined8 param_1)

{
  Swift::MainActor::typeMetadataAccessor();
  FUN_1000582d0(FUN_1000aa730,param_1,"Paste/AppCoordinator.swift",0x1a,2,0x137);
  return;
}



/* Address: 0x1000a89f4 | FUN_1000a89f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a89f4(long param_1)

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
    UVar5.unknown = (undefined *)0x0;
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,0x137,UVar4.unknown,puVar3);
  }
  FUN_1000a5300();
  if (((ulong)UVar5.unknown & 1) == 0) {
    FUN_1000a56f4();
  }
  else if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100019a84(*(long *)(param_1 + 0xd0));
    _swift_release(pMVar2);
    return;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000a8ae4 | FUN_1000a8ae4 */

void FUN_1000a8ae4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 local_68;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  lVar2 = param_1[3];
  lVar4 = param_1[4];
  lVar6 = param_1[5];
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,0x13e,UVar9.unknown,puVar8);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar7);
    return;
  }
  if ((char)lVar5 == '\x01') {
LAB_1000a8c0c:
    if ((char)lVar6 == '\x01') {
      _swift_release(pMVar7);
      goto LAB_1000a8ca0;
    }
  }
  else if ((((char)lVar6 == '\x01') || (lVar1 != lVar2)) || (lVar3 != lVar4)) {
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    _swift_retain(uVar12);
    FUN_1000da768(&local_68);
    _swift_release(uVar12);
    uVar12 = local_68;
    FUN_1001eae90(lVar1,lVar3);
    _swift_release(uVar12);
    goto LAB_1000a8c0c;
  }
  FUN_1000da768(&local_68);
  puVar11 = &DAT_100eb3d08;
  _swift_allocObject(&DAT_100eb3d08,0x18,7);
  _swift_weakInit(puVar11 + 0x10,param_2);
  _swift_retain(puVar11);
  FUN_1001eaa64(lVar2,lVar4,thunk_FUN_1000a9978,puVar11);
  _swift_release(pMVar7);
  _swift_release(local_68);
  _swift_release_n(puVar11,2);
LAB_1000a8ca0:
  _swift_release(param_2);
  return;
}



/* Address: 0x1000a8ce8 | FUN_1000a8ce8 */

void FUN_1000a8ce8(void)

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
              ("Paste/AppCoordinator.swift",0x1a,1,0x151,UVar4.unknown,puVar3);
  }
  FUN_1000582d0(FUN_1000a8db8,0,"Paste/AppCoordinator.swift",0x1a,2,0x152);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000a8db8 | FUN_1000a8db8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a8db8(void)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  ID self;
  
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
              ("Paste/AppCoordinator.swift",0x1a,1,0x152,UVar5.unknown,puVar4);
  }
  self = *(ID *)PTR__NSApp_100ea8fa0;
  if (self != 0) {
    FUN_10000ec2c(0,&DAT_100fa8ac0,&PTR__OBJC_CLASS___NSMenu_100f8d780);
    IVar7 = self;
    FUN_10009d77c();
    objc_stub::setMainMenu_(self,IVar7);
    _swift_release(pMVar3);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a8ecc);
  (*pcVar2)();
}



/* Address: 0x1000a8ecc | FUN_1000a8ecc */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000a8ecc(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  MainActor *pMVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  lVar3 = 0;
  FUN_1003efa8c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_70 + lVar3);
  cVar1 = *(char *)(param_1 + 1);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,param_3,UVar6.unknown,puVar5);
  }
  pMVar8 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar8 != (MainActor *)0x0) {
    if (cVar1 != '\0') {
      uVar10 = *(undefined8 *)(pMVar8 + 0x40);
      _swift_retain(uVar10);
      FUN_1000da768(auStack_70 + 1);
      _swift_release(uVar10);
      (*param_4)(puVar9);
      FUN_1003feee0(*puVar9,*(undefined8 *)((long)auStack_70 + lVar3 + 8U));
      _swift_release(pMVar8);
      _swift_release(auStack_70[1]);
      FUN_10005241c(puVar9,FUN_1003efa8c);
      _swift_release(pMVar4);
      return;
    }
    _swift_release(pMVar4);
    pMVar4 = pMVar8;
  }
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000a9070 | FUN_1000a9070 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000a9070(char *param_1,long param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  MainActor *pMVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  lVar3 = 0;
  FUN_1003efa8c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_70 + lVar3);
  cVar1 = *param_1;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,param_3,UVar6.unknown,puVar5);
  }
  pMVar8 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar8 != (MainActor *)0x0) {
    if (cVar1 != '\0') {
      uVar10 = *(undefined8 *)(pMVar8 + 0x40);
      _swift_retain(uVar10);
      FUN_1000da768(auStack_70 + 1);
      _swift_release(uVar10);
      (*param_4)(puVar9);
      FUN_1003feee0(*puVar9,*(undefined8 *)((long)auStack_70 + lVar3 + 8U));
      _swift_release(pMVar8);
      _swift_release(auStack_70[1]);
      FUN_10005241c(puVar9,FUN_1003efa8c);
      _swift_release(pMVar4);
      return;
    }
    _swift_release(pMVar4);
    pMVar4 = pMVar8;
  }
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000a9214 | FUN_1000a9214 */

void FUN_1000a9214(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 local_48;
  
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
              ("Paste/AppCoordinator.swift",0x1a,1,0x172,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0xa0);
    _swift_retain(uVar6);
    _swift_release(param_2);
    FUN_1000da768(&local_48);
    _swift_release(uVar6);
    FUN_100af4a68();
    _swift_release(pMVar2);
    _swift_release(local_48);
    return;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000a9328 | FUN_1000a9328 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a9328(undefined8 param_1,long param_2)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined8 uStack_90;
  ulong *local_88 [8];
  undefined8 local_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppCoordinator.swift",0x1a,1,0x177,UVar3.unknown,puVar2);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    _swift_retain(uVar7);
    _swift_release(param_2);
    FUN_1000da768(&local_48);
    _swift_release(uVar7);
    puVar5 = &DAT_100c292e0;
    _swift_getKeyPath(&DAT_100c292e0);
    puVar6 = &DAT_100fab370;
    FUN_1000037f0(&DAT_100fab370,&DAT_100c29310);
    _swift_initStackObject();
    FUN_1000da6e0(puVar5,puVar6);
    FUN_1000da768(&local_98);
    local_a8 = FUN_100004520;
    uStack_a0 = 0;
    (*local_98)(local_88,&local_a8);
    _swift_release(uStack_90);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *local_88[0]) + 0xd8))();
    _swift_release(puVar5);
    _swift_release(local_48);
    _swift_release(pMVar1);
    return;
  }
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000a94d4 | FUN_1000a94d4 */

void FUN_1000a94d4(undefined8 param_1)

{
  Swift::MainActor::typeMetadataAccessor();
  FUN_1000582d0(FUN_1000a9980,param_1,"Paste/AppCoordinator.swift",0x1a,2,0x182);
  return;
}



/* Address: 0x1000a9534 | FUN_1000a9534 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000a9534(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  ID IVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  MainActor *local_48;
  
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
              ("Paste/AppCoordinator.swift",0x1a,1,0x182,UVar5.unknown,puVar4);
  }
  pMVar7 = (MainActor *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar7 != (MainActor *)0x0) {
    if (((*(ID *)(pMVar7 + 0xd8) == 0) ||
        (IVar8 = objc_stub::window(*(ID *)(pMVar7 + 0xd8)), IVar8 == 0)) ||
       (IVar8 = objc_stub::isVisible(IVar8), (int)IVar8 == 0)) {
      uVar9 = *(ulong *)(pMVar7 + 0x20);
      _swift_retain(uVar9);
      FUN_1000da768(&local_48);
      _swift_release();
      pMVar2 = local_48;
      FUN_100ae5e74();
      _swift_release(pMVar2);
      if ((uVar9 & 1) == 0) {
        uVar10 = *(undefined8 *)(pMVar7 + 0x38);
        _swift_retain(uVar10);
        FUN_1000da768(&local_48);
        _swift_release(uVar10);
        if (DAT_100fa7760 != -1) {
          _swift_once(&DAT_100fa7760,FUN_100024fb0);
        }
        FUN_1000da768(&local_50);
        FUN_100ae5248();
        _swift_release(pMVar7);
        _swift_release(local_50);
        _swift_release(pMVar3);
        pMVar3 = local_48;
        goto LAB_1000a971c;
      }
      uVar10 = *(undefined8 *)(pMVar7 + 0x20);
      _swift_retain(uVar10);
      FUN_1000da768(&local_48);
      _swift_release(uVar10);
      FUN_100ae664c();
      _swift_release(local_48);
      FUN_1000a85d8();
    }
    else if (*(ID *)(pMVar7 + 0xd8) != 0) {
      objc_stub::close(*(ID *)(pMVar7 + 0xd8));
      _swift_release(pMVar3);
      pMVar3 = pMVar7;
      goto LAB_1000a971c;
    }
    _swift_release(pMVar3);
    pMVar3 = pMVar7;
  }
LAB_1000a971c:
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000a9754 | FUN_1000a9754 */

void FUN_1000a9754(undefined8 param_1,long *param_2)

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
  _swift_beginAccess(lVar1 + 0x160,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x168);
  uVar3 = *(undefined8 *)(lVar1 + 0x160);
  uStack_78 = *(undefined8 *)(lVar1 + 0x178);
  uVar6 = *(undefined8 *)(lVar1 + 0x170);
  uStack_68 = *(undefined8 *)(lVar1 + 0x188);
  uVar4 = *(undefined8 *)(lVar1 + 0x180);
  uVar2 = *(undefined8 *)(lVar1 + 400);
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



/* Address: 0x1000a983c | FUN_1000a983c */

void FUN_1000a983c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c28d50;
  _swift_getKeyPath(&DAT_100c28d50);
  puVar3 = &DAT_100c28d78;
  _swift_getKeyPath(&DAT_100c28d78);
  local_31 = uVar1;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x1000a98ac | FUN_1000a98ac */

void FUN_1000a98ac(void)

{
  long unaff_x20;
  
  FUN_1000a2af4(**(undefined8 **)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000a98c8 | FUN_1000a98c8 */

void FUN_1000a98c8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000a98ec | FUN_1000a98ec */

void FUN_1000a98ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1000a7300(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000a9958 | thunk_FUN_1000a9754 */

void thunk_FUN_1000a9754(void)

{
  FUN_1000a9754();
  return;
}



/* Address: 0x1000a995c | thunk_FUN_1000a983c */

void thunk_FUN_1000a983c(void)

{
  FUN_1000a983c();
  return;
}



/* Address: 0x1000a9960 | FUN_1000a9960 */

void FUN_1000a9960(void)

{
  FUN_1000a8280();
  return;
}



/* Address: 0x1000a9968 | FUN_1000a9968 */

void FUN_1000a9968(void)

{
  FUN_1000a82fc();
  return;
}



/* Address: 0x1000a9970 | FUN_1000a9970 */

void FUN_1000a9970(void)

{
  FUN_1000a8378();
  return;
}



/* Address: 0x1000a9978 | FUN_1000a9978 */

void FUN_1000a9978(void)

{
  FUN_1000a94d4();
  return;
}



/* Address: 0x1000a9980 | FUN_1000a9980 */

void FUN_1000a9980(void)

{
  FUN_1000a9534();
  return;
}



/* Address: 0x1000a9998 | FUN_1000a9998 */

void FUN_1000a9998(void)

{
  FUN_1000a86c0();
  return;
}



/* Address: 0x1000a99a0 | thunk_FUN_1000b0718 */

void thunk_FUN_1000b0718(void)

{
  FUN_1000b0718();
  return;
}



/* Address: 0x1000a99a4 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}


