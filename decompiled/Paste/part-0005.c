/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10000b668 | FUN_10000b668 */

void FUN_10000b668(void)

{
  long *unaff_x22;
  
  _swift_task_switch(FUN_10000b6a4,*(undefined8 *)(*unaff_x22 + 0x178),
                     *(undefined8 *)(*unaff_x22 + 0x180));
  return;
}



/* Address: 0x10000b6a4 | FUN_10000b6a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10000b6a4(void)

{
  long *plVar1;
  ulong uVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID IVar8;
  NSString *pNVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  ulong uVar20;
  MainActor *this;
  undefined8 uVar21;
  long unaff_x22;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined *local_68;
  
  IVar16 = *(ID *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x168));
  IVar16 = objc_stub::URLs(IVar16);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar28 = *(long *)(IVar16 + 0x10);
  if (lVar28 == 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar15 = *(long *)(unaff_x22 + 0x130);
    lVar24 = IVar16 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
    lVar22 = *(long *)(lVar15 + 0x48);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pcVar26 = *(code **)(lVar15 + 0x10);
    do {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x170);
      this = *(MainActor **)(unaff_x22 + 0x160);
      pMVar3 = *(MainActor **)(unaff_x22 + 0x140);
      (*pcVar26)(pMVar3,lVar24,*(undefined8 *)(unaff_x22 + 0x128));
      pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
      UVar4 = Swift::Actor::get_unownedExecutor();
      UVar5 = UVar4;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar5.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/PrivacySettingsViewModel.swift",0x24,1,0x44,UVar4.unknown,uVar18);
      }
      (*pcVar26)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140),
                 *(undefined8 *)(unaff_x22 + 0x128));
      UVar6.unknown = &_OBJC_CLASS___NSBundle;
      _objc_allocWithZone();
      pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
      IVar8 = objc_stub::initWithURL_((ID)UVar6.unknown,pNVar7);
      if ((IVar8 == 0) || (IVar8 = objc_stub::bundleIdentifier(IVar8), IVar8 == 0)) {
        uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
        pcVar19 = *(code **)(lVar15 + 8);
        (*pcVar19)(*(undefined8 *)(unaff_x22 + 0x138),uVar17);
        (*pcVar19)(uVar18,uVar17);
        _swift_release(pMVar3);
      }
      else {
        uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x128);
        SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        UVar6.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
        SVar33 = Foundation::URL::get_path(UVar6);
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar33.bridgeObject);
        NSFileManager::displayNameAtPath_((ID)UVar6.unknown,pNVar9);
        SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar34 = Foundation::URL::get_path((URL)0x0);
        pcVar19 = *(code **)(lVar15 + 8);
        (*pcVar19)(uVar18,uVar21);
        (*pcVar19)(uVar17,uVar21);
        _swift_release(pMVar3);
        puVar10 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar10 & 1) == 0) {
          plVar1 = (long *)(local_68 + 0x10);
          local_68 = (undefined *)0x0;
          FUN_100088ad0(0,*plVar1 + 1,1);
        }
        uVar20 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar20) {
          local_68 = (undefined *)(ulong)(1 < *(ulong *)(local_68 + 0x18));
          FUN_100088ad0(local_68,uVar20 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar20 + 1;
        *(String *)(local_68 + uVar20 * 0x30 + 0x20) = SVar32;
        *(String *)(local_68 + uVar20 * 0x30 + 0x30) = SVar33;
        *(String *)(local_68 + uVar20 * 0x30 + 0x40) = SVar34;
      }
      lVar24 = lVar24 + lVar22;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  _swift_bridgeObjectRelease(IVar16);
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar28 = *(long *)(local_68 + 0x10);
  if (lVar28 != 0) {
    FUN_100071750(0,lVar28,0);
    lVar24 = *(ulong *)(puVar10 + 0x10) << 4;
    puVar27 = (undefined8 *)(local_68 + 0x28);
    uVar20 = *(ulong *)(puVar10 + 0x10);
    do {
      uVar18 = puVar27[-1];
      uVar17 = *puVar27;
      uVar2 = uVar20 + 1;
      uVar29 = *(ulong *)(puVar10 + 0x18);
      _swift_bridgeObjectRetain(uVar17);
      if (uVar29 >> 1 <= uVar20) {
        FUN_100071750(1 < uVar29,uVar2,1);
      }
      puVar27 = puVar27 + 6;
      *(ulong *)(puVar10 + 0x10) = uVar2;
      *(undefined8 *)(puVar10 + lVar24 + 0x20) = uVar18;
      *(undefined8 *)(puVar10 + lVar24 + 0x28) = uVar17;
      lVar24 = lVar24 + 0x10;
      lVar28 = lVar28 + -1;
      uVar20 = uVar2;
    } while (lVar28 != 0);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar28 = *(long *)(unaff_x22 + 0x120);
  puVar11 = &DAT_100c23588;
  _swift_getKeyPath();
  puVar12 = &DAT_100c235b0;
  _swift_getKeyPath(&DAT_100c235b0);
  _swift_beginAccess(lVar28 + 0x88,unaff_x22 + 0xe8,0,0);
  uVar13 = *(undefined8 *)(lVar28 + 0xb8);
  uVar30 = *(undefined8 *)(lVar28 + 0xb0);
  uVar17 = *(undefined8 *)(lVar28 + 0xa8);
  uVar25 = *(undefined8 *)(lVar28 + 0xa0);
  uVar23 = *(undefined8 *)(lVar28 + 0x98);
  uVar31 = *(undefined8 *)(lVar28 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar28 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar31;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar25;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar23;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar30;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar17;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar13;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_retain(lVar28);
  _swift_retain(uVar17);
  _swift_retain(uVar30);
  _swift_retain(uVar23);
  _swift_retain(uVar25);
  _swift_retain(uVar13);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(unaff_x22 + 0x108);
  _swift_release(uVar17);
  _swift_release(uVar30);
  _swift_release(uVar23);
  _swift_release(uVar25);
  _swift_release(uVar13);
  FUN_10000cc40(puVar10);
  _swift_bridgeObjectRelease(puVar10);
  FUN_1002cb5a0(unaff_x22 + 0x108,lVar28,puVar11,puVar12);
  puVar10 = &DAT_100c234f8;
  _swift_getKeyPath(&DAT_100c234f8);
  puVar11 = &DAT_100c23520;
  _swift_getKeyPath(&DAT_100c23520);
  pcVar26 = (code *)(unaff_x22 + 200);
  Combine::Published::_modify_subscript
            ((Published *)(unaff_x22 + 0x108),pcVar26,lVar28,puVar10,puVar11);
  FUN_10000ccac(local_68);
  _swift_bridgeObjectRelease(local_68);
  (*pcVar26)(unaff_x22 + 200,0);
  _swift_release(puVar11);
  _swift_release(puVar10);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010000bbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10000bc00 | FUN_10000bc00 */

void FUN_10000bc00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  puVar1 = &DAT_100fa6aa0;
  local_28 = param_2;
  FUN_1000037f0(&DAT_100fa6aa0,&DAT_100c235f8);
  Swift::CheckedContinuation::resume(&local_28,puVar1);
  return;
}



/* Address: 0x10000bc58 | FUN_10000bc58 */

void FUN_10000bc58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_e0 [4];
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pcVar6 = (code *)local_e0;
  pcVar7 = (code *)local_e0;
  puVar1 = &DAT_100c23540;
  _swift_getKeyPath(&DAT_100c23540);
  puVar2 = &DAT_100c23568;
  _swift_getKeyPath(&DAT_100c23568);
  Combine::Published::_get_subscript(&local_a0);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar3 = local_a0;
  FUN_100009d58(local_a0);
  _swift_bridgeObjectRelease(local_a0);
  _swift_getKeyPath(&DAT_100c23588);
  _swift_getKeyPath(&DAT_100c235b0);
  _swift_beginAccess(unaff_x20 + 0x11,auStack_c0,0,0);
  uVar11 = unaff_x20[0x12];
  uVar9 = unaff_x20[0x11];
  uStack_88 = unaff_x20[0x14];
  uVar12 = unaff_x20[0x13];
  uStack_78 = unaff_x20[0x16];
  uVar10 = unaff_x20[0x15];
  uVar8 = unaff_x20[0x17];
  local_a0 = uVar9;
  uStack_98 = uVar11;
  local_90 = uVar12;
  local_80 = uVar10;
  local_70 = uVar8;
  _swift_retain();
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar8);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(local_e0);
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar11);
  _swift_release(uVar9);
  FUN_10000bf14(uVar3);
  FUN_1002cb5a0(local_e0);
  _swift_bridgeObjectRelease(uVar3);
  puVar1 = &DAT_100c23540;
  puVar4 = puVar1;
  _swift_getKeyPath(&DAT_100c23540);
  puVar2 = &DAT_100c23568;
  puVar5 = puVar2;
  _swift_getKeyPath(&DAT_100c23568);
  Combine::Published::_get_subscript(local_e0);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar4 = &DAT_100c234f8;
  _swift_getKeyPath(&DAT_100c234f8);
  puVar5 = &DAT_100c23520;
  _swift_getKeyPath(&DAT_100c23520);
  Combine::Published::_modify_subscript();
  FUN_10000c848(local_e0[0]);
  _swift_bridgeObjectRelease(local_e0[0]);
  (*pcVar6)(local_e0,0);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_getKeyPath(&DAT_100c23540);
  _swift_getKeyPath(&DAT_100c23568);
  Combine::Published::_modify_subscript();
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = PTR___swiftEmptySetSingleton_100eae0e8;
  (*pcVar7)(local_e0,0);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10000bf14 | FUN_10000bf14 */

void FUN_10000bf14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      uVar3 = uVar2;
      FUN_10000798c(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar3);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x10000bf8c | FUN_10000bf8c */

void FUN_10000bf8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xf0));
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  lVar3 = _TtC5Paste24PrivacySettingsViewModel::_ignoredApplications;
  puVar4 = &DAT_100fa6a68;
  FUN_1000037f0(&DAT_100fa6a68,&DAT_100c23400);
  pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 8);
  (*pcVar6)(unaff_x20 + lVar3,puVar4);
  (*pcVar6)(unaff_x20 + _TtC5Paste24PrivacySettingsViewModel::_selectedApplications,puVar4);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10000c0e4 | FUN_10000c0e4 */

void FUN_10000c0e4(void)

{
  FUN_10000c0ec(0);
  return;
}



/* Address: 0x10000c0ec | FUN_10000c0ec */

void FUN_10000c0ec(undefined8 param_1)

{
  if (DAT_100fa6998 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca0128);
  return;
}



/* Address: 0x10000c124 | FUN_10000c124 */

void FUN_10000c124(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  long lStack_28;
  
  local_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_50 = &DAT_100c23330;
  local_48 = &DAT_100c23330;
  puStack_40 = &DAT_100c23330;
  local_38 = &DAT_100c23330;
  lVar1 = 0x13f;
  FUN_10000c1b0();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = local_30;
    _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10000c1b0 | FUN_10000c1b0 */

void FUN_10000c1b0(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fa69a8.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fa69b0;
    FUN_100005c24(&DAT_100fa69b0,&DAT_100c27450);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fa69a8 = PVar2;
    }
  }
  return;
}



/* Address: 0x10000c210 | FUN_10000c210 */

void FUN_10000c210(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10000c240 | FUN_10000c240 */

undefined8 * FUN_10000c240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x10000c294 | FUN_10000c294 */

undefined8 * FUN_10000c294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10000c320 | FUN_10000c320 */

void FUN_10000c320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10000c334 | FUN_10000c334 */

undefined8 * FUN_10000c334(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x10000c388 | FUN_10000c388 */

int FUN_10000c388(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10000c3d0 | FUN_10000c3d0 */

void FUN_10000c3d0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10000c41c | FUN_10000c41c */

undefined1  [16] FUN_10000c41c(void)

{
  return ZEXT816(0x100eb0108);
}



/* Address: 0x10000c42c | thunk_FUN_10000c430 */

void thunk_FUN_10000c430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa6a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2335c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2335c,&DAT_100eb0108);
  DAT_100fa6a60 = pTVar1;
  return;
}



/* Address: 0x10000c430 | FUN_10000c430 */

void FUN_10000c430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa6a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2335c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2335c,&DAT_100eb0108);
  DAT_100fa6a60 = pTVar1;
  return;
}



/* Address: 0x10000c470 | thunk_FUN_100009208 */

void thunk_FUN_100009208(void)

{
  FUN_100009208();
  return;
}



/* Address: 0x10000c474 | FUN_10000c474 */

void FUN_10000c474(undefined8 param_1,long *param_2)

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
  _swift_beginAccess(lVar1 + 0x50,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x58);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  uStack_78 = *(undefined8 *)(lVar1 + 0x68);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  uStack_68 = *(undefined8 *)(lVar1 + 0x78);
  uVar4 = *(undefined8 *)(lVar1 + 0x70);
  uVar2 = *(undefined8 *)(lVar1 + 0x80);
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
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10000c55c | thunk_FUN_1000098e0 */

void thunk_FUN_1000098e0(void)

{
  FUN_1000098e0();
  return;
}



/* Address: 0x10000c560 | FUN_10000c560 */

void FUN_10000c560(void)

{
  FUN_10000c5e0();
  return;
}



/* Address: 0x10000c56c | FUN_10000c56c */

void FUN_10000c56c(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fa6730;
    FUN_100005c24(&DAT_100fa6730,&DAT_100c22f10);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10000c5d4 | FUN_10000c5d4 */

void FUN_10000c5d4(void)

{
  FUN_10000c5e0();
  return;
}



/* Address: 0x10000c5e0 | FUN_10000c5e0 */

void FUN_10000c5e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100fa6a88;
  puVar2 = &DAT_100c234f0;
  FUN_1000037f0();
  (*param_5)();
  *param_1 = puVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x10000c64c | thunk_FUN_10006d2a4 */

void thunk_FUN_10006d2a4(void)

{
  FUN_10006d2a4();
  return;
}



/* Address: 0x10000c650 | FUN_10000c650 */

void FUN_10000c650(ulong param_1)

{
  _swift_release(param_1 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x10000c658 | FUN_10000c658 */

void FUN_10000c658(undefined8 param_1,long *param_2)

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
  _swift_beginAccess(lVar1 + 0x88,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x90);
  uVar3 = *(undefined8 *)(lVar1 + 0x88);
  uStack_78 = *(undefined8 *)(lVar1 + 0xa0);
  uVar6 = *(undefined8 *)(lVar1 + 0x98);
  uStack_68 = *(undefined8 *)(lVar1 + 0xb0);
  uVar4 = *(undefined8 *)(lVar1 + 0xa8);
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
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
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10000c744 | FUN_10000c744 */

void FUN_10000c744(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c234f8;
  _swift_getKeyPath(&DAT_100c234f8);
  puVar2 = &DAT_100c23520;
  _swift_getKeyPath(&DAT_100c23520);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10000c7ac | FUN_10000c7ac */

void FUN_10000c7ac(void)

{
  FUN_10000c7c8();
  return;
}



/* Address: 0x10000c7c8 | FUN_10000c7c8 */

void FUN_10000c7c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_48 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  (*param_7)(&local_48,uVar2,param_5,param_6);
  return;
}



/* Address: 0x10000c848 | FUN_10000c848 */

void FUN_10000c848(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [48];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    puVar6 = (ulong *)(param_1 + 0x38);
    uVar8 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (-uVar8 < 0x40) {
      uVar9 = ~(-1L << (-uVar8 & 0x3f));
    }
    uVar9 = uVar9 & *puVar6;
    _swift_bridgeObjectRetain();
    lVar7 = 0;
    lVar1 = lVar7;
    while( true ) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
        uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar5 = (undefined8 *)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x30 +
                 lVar1 * 0xc00);
        uStack_b8 = puVar5[3];
        local_c0 = puVar5[2];
        uStack_a8 = puVar5[5];
        uStack_b0 = puVar5[4];
        uStack_c8 = puVar5[1];
        local_d0 = *puVar5;
        local_a0 = local_d0;
        uStack_98 = uStack_c8;
        uStack_90 = local_c0;
        uStack_88 = uStack_b8;
        local_80 = uStack_b0;
        uStack_78 = uStack_a8;
        FUN_10000ca28(&local_a0,auStack_110);
        FUN_10000ca28(&uStack_90,auStack_110);
        FUN_10000ca28(&local_80,auStack_110);
        FUN_100007ab8(auStack_100,&local_d0);
        FUN_10000ca64(auStack_100);
        FUN_10000caac(&local_a0);
        FUN_10000caac(&uStack_90);
        FUN_10000caac(&local_80);
        lVar7 = lVar1;
      }
      bVar4 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10000c9c0);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar8 >> 6) <= lVar1) break;
      uVar9 = puVar6[lVar1];
    }
    FUN_10000c650(param_1,puVar6,~uVar8,lVar7,0);
  }
  return;
}



/* Address: 0x10000c9c0 | thunk_FUN_10000c744 */

void thunk_FUN_10000c744(void)

{
  FUN_10000c744();
  return;
}



/* Address: 0x10000c9c4 | FUN_10000c9c4 */

void FUN_10000c9c4(void)

{
  FUN_10000c7c8();
  return;
}



/* Address: 0x10000c9f0 | thunk_FUN_100080d38 */

void thunk_FUN_100080d38(void)

{
  FUN_100080d38();
  return;
}



/* Address: 0x10000c9f4 | thunk_FUN_100080da0 */

void thunk_FUN_100080da0(void)

{
  FUN_100080da0();
  return;
}



/* Address: 0x10000c9f8 | thunk_FUN_10000c658 */

void thunk_FUN_10000c658(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x88,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x90);
  uVar3 = *(undefined8 *)(lVar1 + 0x88);
  uStack_78 = *(undefined8 *)(lVar1 + 0xa0);
  uVar6 = *(undefined8 *)(lVar1 + 0x98);
  uStack_68 = *(undefined8 *)(lVar1 + 0xb0);
  uVar4 = *(undefined8 *)(lVar1 + 0xa8);
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  uStack_90 = uVar3;
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  uStack_70 = uVar4;
  uStack_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10000c9fc | FUN_10000c9fc */

void FUN_10000c9fc(void)

{
  FUN_10000c7c8();
  return;
}



/* Address: 0x10000ca28 | FUN_10000ca28 */

undefined8 FUN_10000ca28(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Swift_String_100eac208 + -8) + 0x10))
            (param_2,param_1);
  return param_2;
}



/* Address: 0x10000ca64 | FUN_10000ca64 */

undefined8 FUN_10000ca64(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6a90;
  FUN_1000037f0(&DAT_100fa6a90,&DAT_100c235d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10000caac | FUN_10000caac */

undefined8 FUN_10000caac(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Swift_String_100eac208 + -8) + 8))();
  return param_1;
}



/* Address: 0x10000cae0 | FUN_10000cae0 */

void FUN_10000cae0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x10000caf4 | FUN_10000caf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000caf4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10000cb30 | FUN_10000cb30 */

void FUN_10000cb30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_10000b468(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x10000cbb0 | FUN_10000cbb0 */

long * FUN_10000cbb0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    _swift_allocBox();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Address: 0x10000cbec | FUN_10000cbec */

void FUN_10000cbec(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x10000cbfc | FUN_10000cbfc */

long FUN_10000cbfc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Address: 0x10000cc38 | FUN_10000cc38 */

void FUN_10000cc38(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x10000cc40 | FUN_10000cc40 */

void FUN_10000cc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10007253c(auStack_50,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_48);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x10000ccac | FUN_10000ccac */

void FUN_10000ccac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      uStack_78 = puVar2[3];
      uStack_80 = puVar2[2];
      uStack_68 = puVar2[5];
      local_70 = puVar2[4];
      local_60 = local_90;
      uStack_58 = uStack_88;
      uStack_50 = uStack_80;
      uStack_48 = uStack_78;
      local_40 = local_70;
      uStack_38 = uStack_68;
      FUN_10000ca28(&local_60,auStack_c0);
      FUN_10000ca28(&uStack_50,auStack_c0);
      FUN_10000ca28(&local_40,auStack_c0);
      FUN_100072680(auStack_c0,&local_90);
      _swift_bridgeObjectRelease(local_b8);
      _swift_bridgeObjectRelease(local_a8);
      _swift_bridgeObjectRelease(local_98);
      puVar2 = puVar2 + 6;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Address: 0x10000cd4c | thunk_FUN_10000c474 */

void thunk_FUN_10000c474(void)

{
  FUN_10000c474();
  return;
}



/* Address: 0x10000cd50 | FUN_10000cd50 */

void FUN_10000cd50(void)

{
  FUN_10000c7c8();
  return;
}



/* Address: 0x10000cd7c | FUN_10000cd7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10000cd7c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___searchBar;
  lVar2 = *(long *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___searchBar);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel) + 0x10);
    FUN_100041a54();
    _objc_allocWithZone();
    _swift_retain();
    FUN_10003e848();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x10000ce08 | FUN_10000ce08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10000ce08(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___tabBar;
  lVar2 = *(long *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___tabBar);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel) + 0x18);
    FUN_100096ecc();
    _objc_allocWithZone();
    FUN_100095c94();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x10000ce94 | FUN_10000ce94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10000ce94(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long unaff_x20;
  String SVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar3 = _TtC5Paste7Toolbar::___lazy_storage___createPinboardButton;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined8 **)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___createPinboardButton);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10020d734();
    puVar9 = (undefined8 *)*puVar5;
    uVar1 = puVar5[1];
    _swift_bridgeObjectRetain(uVar1);
    uVar6 = 0x6e;
    FUN_1001e94d4(0x6e,0xe100000000000000);
    FUN_1001c0f08(&stack0xffffffffffffffb0 + lVar2);
    SVar10 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(&stack0xffffffffffffffb0 + lVar2));
    puVar7 = &DAT_100eb01f0;
    _swift_allocObject(&DAT_100eb01f0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    uVar8 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar2) = FUN_10000ecd4;
    *(undefined **)((long)auStack_60 + lVar2 + 8) = puVar7;
    auStack_68[lVar2] = 1;
    *(void **)((long)&uStack_70 + lVar2) = SVar10.bridgeObject;
    FUN_10023e034(uVar8,puVar9,uVar1,0,0xe000000000000000,uVar6,0x120000,0,SVar10.str);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar9;
    puVar5 = puVar9;
  }
  return puVar5;
}



/* Address: 0x10000cff0 | FUN_10000cff0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10000cff0(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100039618(*(undefined8 *)(*(long *)(param_1 + _TtC5Paste7Toolbar::viewModel) + 0x18));
    return 0;
  }
  return 0;
}



/* Address: 0x10000d050 | FUN_10000d050 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10000d050(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar2 = _TtC5Paste7Toolbar::___lazy_storage___menuButton;
  puVar3 = *(undefined8 **)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___menuButton);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_10020cecc();
    puVar5 = (undefined8 *)*puVar3;
    uVar1 = puVar3[1];
    puVar4 = &DAT_100eb01f0;
    _swift_allocObject(&DAT_100eb01f0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    FUN_100240298(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar1);
    FUN_10023e034(puVar5,uVar1,0,0xe000000000000000,0,0,1,0,0,1);
    *(undefined8 **)(unaff_x20 + lVar2) = puVar5;
    puVar3 = puVar5;
  }
  return puVar3;
}



/* Address: 0x10000d144 | FUN_10000d144 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10000d144(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10000d180();
    return 0;
  }
  return 0;
}



/* Address: 0x10000d180 | FUN_10000d180 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10000d180(void)

{
  ID IVar1;
  long unaff_x20;
  ID self;
  undefined8 local_38;
  
  self = *(ID *)(*(long *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel) + 0x28);
  _swift_retain(self);
  FUN_1000da768(&local_38);
  _swift_release();
  FUN_10004bcb8();
  _swift_release(local_38);
  IVar1 = objc_stub::setDelegate_(self);
  FUN_10000d050();
  objc_stub::popUpMenuPositioningItem_atLocation_inView_(self,0,0xc024000000000000,0,IVar1);
  return 0;
}



/* Address: 0x10000d228 | FUN_10000d228 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10000d228(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___notificationBar;
  lVar2 = *(long *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___notificationBar);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel) + 0x20);
    FUN_10002c69c();
    _objc_allocWithZone();
    _swift_retain();
    FUN_10002c150();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x10000d2b4 | FUN_10000d2b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_10000d2b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  NSArray *pNVar7;
  Published PVar8;
  AnyCancellable *this;
  __int64 _Var9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 auStack_e0 [16];
  ID local_d0;
  undefined1 local_c8;
  
  _swift_getObjectType();
  puVar3 = &DAT_100fa6b78;
  FUN_1000037f0(&DAT_100fa6b78,&DAT_100c236a0);
  local_e8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___searchBar) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___tabBar) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___createPinboardButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___menuButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste7Toolbar::___lazy_storage___notificationBar) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtC5Paste7Toolbar::activeSearchConstraints) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar10 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)puVar5 >> 0x3e != 0) &&
     (_Var9 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar10 = PTR___swiftEmptySetSingleton_100eae0e8, _Var9 != 0)) {
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste7Toolbar::cancellables) = puVar10;
  *(long *)(unaff_x20 + _TtC5Paste7Toolbar::viewModel) = param_1;
  _swift_retain(param_1);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  puVar5 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 0xb;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  IVar6 = IVar4;
  FUN_10000d228();
  *(ID *)(puVar5 + 0x20) = IVar6;
  FUN_10000cd7c();
  *(ID *)(puVar5 + 0x28) = IVar6;
  FUN_10000ce08();
  *(ID *)(puVar5 + 0x30) = IVar6;
  FUN_10000ce94();
  *(ID *)(puVar5 + 0x38) = IVar6;
  FUN_10000d050();
  *(ID *)(puVar5 + 0x40) = IVar6;
  local_d0 = IVar4;
  FUN_1001fa150(puVar5,FUN_10000ebd4,auStack_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  lVar12 = _TtC5Paste7Toolbar::___lazy_storage___searchBar;
  lVar11 = *(long *)(IVar4 + _TtC5Paste7Toolbar::___lazy_storage___searchBar);
  puVar5 = &DAT_100eb01f0;
  puVar10 = puVar5;
  _swift_allocObject(&DAT_100eb01f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,IVar4);
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste9SearchBar::onActivate);
  uVar13 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000ec00;
  puVar1[1] = puVar10;
  _swift_retain(puVar10);
  FUN_100004550(uVar13,uVar2);
  _swift_release(puVar10);
  lVar11 = *(long *)(IVar4 + lVar12);
  puVar10 = puVar5;
  _swift_allocObject(&DAT_100eb01f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,IVar4);
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste9SearchBar::onDismiss);
  uVar13 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000ec08;
  puVar1[1] = puVar10;
  _swift_retain(puVar10);
  FUN_100004550(uVar13,uVar2);
  _swift_release(puVar10);
  lVar12 = *(long *)(IVar4 + lVar12);
  puVar10 = puVar5;
  _swift_allocObject(&DAT_100eb01f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,IVar4);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste9SearchBar::onResignKey);
  uVar13 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000ec10;
  puVar1[1] = puVar10;
  _swift_retain(puVar10);
  FUN_100004550(uVar13,uVar2);
  _swift_release(puVar10);
  lVar12 = *(long *)(IVar4 + _TtC5Paste7Toolbar::___lazy_storage___tabBar);
  puVar10 = puVar5;
  _swift_allocObject(&DAT_100eb01f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,IVar4);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste6TabBar::isSearchActive);
  uVar13 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000ec18;
  puVar1[1] = puVar10;
  _swift_retain(puVar10);
  FUN_100004550(uVar13,uVar2);
  _swift_release(puVar10);
  uVar13 = *(undefined8 *)(IVar4 + _TtC5Paste7Toolbar::activeSearchConstraints);
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  _swift_bridgeObjectRetain(uVar13);
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar13);
  NSLayoutConstraint::deactivateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar7);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  local_c8 = 0;
  uVar13 = 0;
  local_d0 = IVar4;
  FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
  FUN_10021ccd4();
  FUN_10021cadc(0,1,uVar13,0,FUN_10000ec20,auStack_e0,0,0);
  _swift_beginAccess(*(long *)(param_1 + 0x18) + _TtC5Paste15TabBarViewModel::_selectedList,
                     auStack_e0,0x21,0);
  PVar8.unknown = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  Combine::Published::_get_projectedValue(PVar8);
  _swift_endAccess(auStack_e0);
  _swift_allocObject(&DAT_100eb01f0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar4);
  FUN_10000ec74(0);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar5);
  (**(code **)(local_e8 + 8))(auStack_f0 + -extraout_x8,puVar3);
  lVar12 = _TtC5Paste7Toolbar::cancellables;
  _swift_beginAccess(IVar4 + _TtC5Paste7Toolbar::cancellables,auStack_e0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(IVar4 + lVar12));
  _swift_endAccess(auStack_e0);
  _swift_release(param_1);
  _swift_release(this);
  return IVar4;
}



/* Address: 0x10000d884 | FUN_10000d884 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10000d884(ID param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  ID *pIVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID *pIVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  ID local_98 [3];
  ID local_80;
  undefined **local_78;
  ID local_70;
  
  IVar11 = param_1;
  _swift_getObjectType();
  IVar6 = IVar11;
  FUN_10000d228();
  local_78 = &PTR_PTR_100ec00e8;
  uVar4 = 0;
  local_98[0] = param_1;
  local_80 = IVar11;
  local_70 = IVar6;
  FUN_10002c69c(0);
  pIVar5 = local_98;
  FUN_1001f9cd8(0,pIVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste7Toolbar::___lazy_storage___notificationBar;
  IVar6 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___notificationBar));
  IVar7 = objc_stub::leadingAnchor(param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_constant_(IVar6,0x4030000000000000,IVar7);
  IVar6 = IVar7;
  FUN_10000cd7c();
  IVar6 = objc_stub::centerYAnchor(IVar6);
  IVar8 = objc_stub::centerYAnchor(param_1);
  IVar8 = objc_stub::constraintEqualToAnchor_(IVar6,IVar8);
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___searchBar;
  IVar6 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___searchBar));
  IVar9 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar2));
  IVar9 = objc_stub::constraintGreaterThanOrEqualToAnchor_constant_(IVar6,0x4020000000000000,IVar9);
  IVar6 = IVar9;
  FUN_10000ce08();
  local_78 = &PTR_PTR_100ec00e8;
  uVar4 = 0;
  local_98[0] = param_1;
  local_80 = IVar11;
  local_70 = IVar6;
  FUN_100096ecc(0);
  pIVar10 = local_98;
  FUN_1001f9cd8(0,pIVar10,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste7Toolbar::___lazy_storage___tabBar;
  IVar11 = objc_stub::leadingAnchor(*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___tabBar))
  ;
  IVar6 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar6 = objc_stub::constraintEqualToAnchor_constant_(IVar11,0x4020000000000000,IVar6);
  IVar11 = objc_stub::centerXAnchor(*(ID *)(param_1 + lVar2));
  IVar12 = objc_stub::centerXAnchor(param_1);
  objc_stub::constraintEqualToAnchor_(IVar11,IVar12);
  IVar12 = 0;
  FUN_1001f9678(0x437a0000);
  IVar11 = IVar12;
  FUN_10000ce94();
  IVar11 = objc_stub::centerYAnchor(IVar11);
  IVar13 = objc_stub::centerYAnchor(param_1);
  IVar13 = objc_stub::constraintEqualToAnchor_(IVar11,IVar13);
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___createPinboardButton;
  IVar11 = objc_stub::leadingAnchor
                     (*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___createPinboardButton))
  ;
  IVar14 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar2));
  objc_stub::constraintEqualToAnchor_constant_(IVar11,0x4020000000000000,IVar14);
  uVar4 = 0;
  FUN_1001f9678(0x443b8000);
  IVar14 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar11 = IVar14;
  FUN_10000d050();
  IVar11 = objc_stub::leadingAnchor(IVar11);
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar20 = 0xc020000000000000;
  if ((bVar3 & 1) == 0) {
    uVar20 = 0xc030000000000000;
  }
  IVar11 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar14,uVar20,IVar11);
  lVar1 = _TtC5Paste7Toolbar::___lazy_storage___menuButton;
  IVar14 = objc_stub::centerYAnchor
                     (*(ID *)(param_1 + _TtC5Paste7Toolbar::___lazy_storage___menuButton));
  IVar15 = objc_stub::centerYAnchor(param_1);
  IVar14 = objc_stub::constraintEqualToAnchor_(IVar14,IVar15);
  IVar15 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar16 = objc_stub::trailingAnchor(param_1);
  IVar15 = objc_stub::constraintEqualToAnchor_constant_(IVar15,0xc030000000000000,IVar16);
  puVar17 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar17 + 0x18) = 0x18;
  *(undefined8 *)(puVar17 + 0x10) = 0xc;
  puVar18 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar17 + 0x38) = puVar18;
  *(undefined ***)(puVar17 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar17 + 0x20) = pIVar5;
  uVar20 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar17 + 0x60) = uVar20;
  *(undefined ***)(puVar17 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x48) = IVar7;
  *(undefined8 *)(puVar17 + 0x88) = uVar20;
  *(undefined ***)(puVar17 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x70) = IVar8;
  *(undefined8 *)(puVar17 + 0xb0) = uVar20;
  *(undefined ***)(puVar17 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x98) = IVar9;
  *(undefined **)(puVar17 + 0xd8) = puVar18;
  *(undefined ***)(puVar17 + 0xe0) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar17 + 0xc0) = pIVar10;
  *(undefined8 *)(puVar17 + 0x100) = uVar20;
  *(undefined ***)(puVar17 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0xe8) = IVar6;
  *(undefined8 *)(puVar17 + 0x128) = uVar20;
  *(undefined ***)(puVar17 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x110) = IVar12;
  *(undefined8 *)(puVar17 + 0x150) = uVar20;
  *(undefined ***)(puVar17 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x138) = IVar13;
  *(undefined8 *)(puVar17 + 0x178) = uVar20;
  *(undefined ***)(puVar17 + 0x180) = &PTR_PTR_100ec00a8;
  *(undefined8 *)(puVar17 + 0x160) = uVar4;
  *(undefined8 *)(puVar17 + 0x1a0) = uVar20;
  *(undefined ***)(puVar17 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x188) = IVar11;
  *(undefined8 *)(puVar17 + 0x1c8) = uVar20;
  *(undefined ***)(puVar17 + 0x1d0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x1b0) = IVar14;
  *(undefined8 *)(puVar17 + 0x1f0) = uVar20;
  *(undefined ***)(puVar17 + 0x1f8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x1d8) = IVar15;
  _swift_bridgeObjectRetain(pIVar5);
  _swift_bridgeObjectRetain(pIVar10);
  puVar19 = puVar17;
  FUN_1001f8d60(puVar17);
  _swift_bridgeObjectRelease(pIVar5);
  _swift_bridgeObjectRelease(pIVar10);
  _swift_setDeallocating(puVar17);
  uVar4 = *(undefined8 *)(puVar17 + 0x10);
  puVar18 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar17 + 0x20,uVar4,puVar18);
  return puVar19;
}


