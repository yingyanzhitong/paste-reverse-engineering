/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000ad22c | FUN_1000ad22c */

void FUN_1000ad22c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  **(undefined1 **)(unaff_x22 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000ad260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ad264 | FUN_1000ad264 */

void FUN_1000ad264(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  **(undefined1 **)(unaff_x22 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001000ad29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ad2a0 | FUN_1000ad2a0 */

void FUN_1000ad2a0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x38) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar3;
  _swift_task_switch(FUN_1000ad334,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000ad334 | FUN_1000ad334 */

void FUN_1000ad334(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ad3a4;
  FUN_1003a5520(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1000ad3a4 | FUN_1000ad3a4 */

void FUN_1000ad3a4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x48);
  *(long *)(lVar4 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_1000ad410;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_1000ad440;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1000ad410 | FUN_1000ad410 */

void FUN_1000ad410(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001000ad43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ad440 | FUN_1000ad440 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ad440(void)

{
  NSError *pNVar1;
  ID self;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  _swift_errorRetain(uVar2);
  pNVar1 = Foundation::__convertErrorToNSError();
  self = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar1);
  _swift_errorRelease(uVar2);
  NSAlert::runModal(self);
  _swift_errorRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000ad4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ad4d8 | FUN_1000ad4d8 */

void FUN_1000ad4d8(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
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
              ("Paste/GeneralSettingsViewModel.swift",0x24,1,0x5f,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _TtC5Paste24GeneralSettingsViewModel::router);
    _swift_retain(uVar6);
    _swift_release(param_2);
    FUN_1000da768(&local_70);
    _swift_release(uVar6);
    if (DAT_100fa7760 != -1) {
      _swift_once(&DAT_100fa7760,FUN_100024fb0);
    }
    FUN_1000da768(local_88);
    FUN_100ae5248();
    _swift_release(local_88[0]);
    _swift_release(local_70);
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  _swift_beginAccess(param_3 + 0x10,local_88,1,0);
  FUN_1000adc04(&local_70,param_3 + 0x10);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000ad648 | FUN_1000ad648 */

void FUN_1000ad648(void)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_100357e58(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(*(long *)(lStack_38 + 0x10) + 0x38))(local_40);
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x1000ad6b0 | FUN_1000ad6b0 */

void FUN_1000ad6b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = _TtC5Paste24GeneralSettingsViewModel::_isOpenAtLoginEnabled;
  puVar5 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  pcVar9 = *(code **)(*(long *)(puVar5 + -8) + 8);
  (*pcVar9)(unaff_x20 + lVar4,puVar5);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::pasteHelper));
  (*pcVar9)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isRunInBackgroundEnabled,puVar5);
  (*pcVar9)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSyncAvailable,puVar5);
  (*pcVar9)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSyncEnabled,puVar5);
  lVar4 = _TtC5Paste24GeneralSettingsViewModel::_syncStatus;
  puVar6 = &DAT_100fab638;
  FUN_1000037f0(&DAT_100fab638,&DAT_100c294d8);
  (**(code **)(*(long *)(puVar6 + -8) + 8))(unaff_x20 + lVar4,puVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isStatusIconEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar8);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSoundEffectsEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar8);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar8);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_release(uVar2);
  (*pcVar9)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isAccessibilityAccessEnabled,puVar5);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isPasteAsPlainTextEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar8);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::syncManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::accessibilityService));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::router));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::cancellables));
  return;
}



/* Address: 0x1000ad8f0 | FUN_1000ad8f0 */

void FUN_1000ad8f0(void)

{
  FUN_1000ad6b0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000ad914 | FUN_1000ad914 */

void FUN_1000ad914(void)

{
  FUN_1000ad91c(0);
  return;
}



/* Address: 0x1000ad91c | FUN_1000ad91c */

void FUN_1000ad91c(undefined8 param_1)

{
  if (DAT_100fab530 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca2188);
  return;
}



/* Address: 0x1000ad954 | FUN_1000ad954 */

void FUN_1000ad954(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58;
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar3 = 0x13f;
  local_b0 = puVar1;
  FUN_1000056c4();
  if (param_2 < 0x40) {
    lVar3 = *(long *)(lVar3 + -8) + 0x40;
    lVar4 = 0x13f;
    local_a8 = lVar3;
    puStack_a0 = puVar1;
    local_98 = lVar3;
    lStack_90 = lVar3;
    local_88 = lVar3;
    FUN_1000ada20();
    if (param_2 < 0x40) {
      local_80 = *(long *)(lVar4 + -8) + 0x40;
      puStack_78 = &DAT_100c29480;
      local_70 = &DAT_100c29480;
      puStack_68 = &DAT_100c29480;
      puStack_58 = &DAT_100c29480;
      local_50 = puVar2 + 0x40;
      puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      local_60 = lVar3;
      puStack_48 = local_50;
      local_40 = local_50;
      _swift_updateClassMetadata2(param_1,0x100,0x10,&local_b0,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1000ada20 | FUN_1000ada20 */

void FUN_1000ada20(void)

{
  long lVar1;
  Published PVar2;
  
  if (DAT_100fab540.unknown == (undefined *)0x0) {
    lVar1 = 0xff;
    FUN_1003b2fc0();
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fab540 = PVar2;
    }
  }
  return;
}



/* Address: 0x1000ada74 | thunk_FUN_1000a1bf4 */

void thunk_FUN_1000a1bf4(void)

{
  FUN_1000a1bf4();
  return;
}



/* Address: 0x1000ada78 | thunk_FUN_10008d770 */

void thunk_FUN_10008d770(void)

{
  FUN_10008d770();
  return;
}



/* Address: 0x1000ada7c | thunk_FUN_10002646c */

void thunk_FUN_10002646c(void)

{
  FUN_10002646c();
  return;
}



/* Address: 0x1000ada80 | thunk_FUN_100077164 */

void thunk_FUN_100077164(void)

{
  FUN_100077164();
  return;
}



/* Address: 0x1000ada84 | thunk_FUN_100091254 */

void thunk_FUN_100091254(void)

{
  FUN_100091254();
  return;
}



/* Address: 0x1000ada88 | thunk_FUN_100070eb8 */

void thunk_FUN_100070eb8(void)

{
  FUN_100070eb8();
  return;
}



/* Address: 0x1000ada8c | thunk_FUN_10008d74c */

void thunk_FUN_10008d74c(void)

{
  FUN_10008d74c();
  return;
}



/* Address: 0x1000ada90 | thunk_FUN_10009db64 */

void thunk_FUN_10009db64(void)

{
  FUN_10009db64();
  return;
}



/* Address: 0x1000ada94 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x1000ada98 | FUN_1000ada98 */

void FUN_1000ada98(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000adabc | FUN_1000adabc */

void FUN_1000adabc(undefined1 *param_1)

{
  FUN_1000abb44(*param_1);
  return;
}



/* Address: 0x1000adae0 | FUN_1000adae0 */

void FUN_1000adae0(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000adb04 | FUN_1000adb04 */

void FUN_1000adb04(undefined1 *param_1)

{
  FUN_1000aba1c(*param_1);
  return;
}



/* Address: 0x1000adb28 | thunk_FUN_1000a094c */

void thunk_FUN_1000a094c(void)

{
  FUN_1000a094c();
  return;
}



/* Address: 0x1000adb2c | thunk_FUN_1000a09b4 */

void thunk_FUN_1000a09b4(void)

{
  FUN_1000a09b4();
  return;
}



/* Address: 0x1000adb30 | FUN_1000adb30 */

void FUN_1000adb30(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_100004594(unaff_x20 + 0x10);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1000adb5c | FUN_1000adb5c */

undefined8 FUN_1000adb5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fab670;
  FUN_1000037f0(&DAT_100fab670,&DAT_100c297d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000adbac | FUN_1000adbac */

void FUN_1000adbac(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000adbd0 | FUN_1000adbd0 */

void FUN_1000adbd0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000adbfc | FUN_1000adbfc */

void FUN_1000adbfc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000ad4d8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000adc04 | FUN_1000adc04 */

undefined8 FUN_1000adc04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fab670;
  FUN_1000037f0(&DAT_100fab670,&DAT_100c297d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000adc54 | thunk_FUN_100061dc4 */

void thunk_FUN_100061dc4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000adc58 | thunk_FUN_100061dd8 */

void thunk_FUN_100061dd8(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000adc5c | thunk_FUN_100061e6c */

void thunk_FUN_100061e6c(void)

{
  FUN_100061e6c();
  return;
}



/* Address: 0x1000adc60 | thunk_FUN_100061ed4 */

void thunk_FUN_100061ed4(void)

{
  FUN_100061ed4();
  return;
}



/* Address: 0x1000adc64 | thunk_FUN_100061d94 */

void thunk_FUN_100061d94(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000adc68 | thunk_FUN_100061da8 */

void thunk_FUN_100061da8(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000adc6c | FUN_1000adc6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000adc6c(CurrentValueSubject *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 *puVar1;
  CurrentValueSubject *pCVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  char *pcVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  char local_b8 [24];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_80 [3];
  undefined *local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pCVar2 = param_1;
  FUN_1000ae1d0();
  local_80[0] = CONCAT71(local_80[0]._1_7_,(char)param_1);
  Combine::CurrentValueSubject::send(pCVar2,local_80);
  _swift_release(pCVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar3);
  if (((ulong)param_1 & 1) == 0) {
    local_80[0] = 0;
    pcVar8 = (char *)local_80;
    IVar4 = SMAppService::unregisterAndReturnError_(IVar4);
    if ((int)IVar4 == 0) {
      pcVar10 = (char *)0x7473696765726e75;
      pvVar9 = (void *)0xed0000676e697265;
      goto LAB_1000adef0;
    }
    FUN_1000d468c(local_80,local_80[0]);
    puVar5 = local_80;
    FUN_100004640(puVar5,local_68);
    pcVar8 = "Unregistered background helper";
    uVar6 = 0xd00000000000001e;
  }
  else {
    IVar4 = SMAppService::status(IVar4);
    if (IVar4 == 1) {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar4 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar3);
      local_80[0] = 0;
      IVar4 = SMAppService::unregisterAndReturnError_(IVar4,local_80);
      if ((int)IVar4 == 0) {
        uVar6 = local_80[0];
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar6);
      }
    }
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar3);
    local_80[0] = 0;
    pcVar8 = (char *)local_80;
    IVar4 = SMAppService::registerAndReturnError_(IVar4);
    if ((int)IVar4 == 0) {
      pcVar10 = (char *)0x7265747369676572;
      pvVar9 = (void *)0xeb00000000676e69;
LAB_1000adef0:
      uVar6 = local_80[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_1000da768(local_80);
      FUN_100bad754(0);
      FUN_100bac57c(uVar6);
      FUN_100004594(local_80);
      FUN_1000d468c(local_80);
      _Var7.unknown = local_68;
      FUN_100004640(local_80);
      local_98 = 0;
      local_90 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,_Var7);
      _swift_bridgeObjectRelease(local_90);
      local_98 = 0x20726f727245;
      local_90 = &DAT_e600000000000000;
      SVar12.bridgeObject = pvVar9;
      SVar12.str = pcVar10;
      SVar13.bridgeObject = param_4;
      SVar13.str = pcVar8;
      Swift::String::append(SVar12,SVar13);
      _swift_bridgeObjectRelease(pvVar9);
      SVar11.bridgeObject = (void *)0x8000000100d8f610;
      SVar11.str = (char *)0xd000000000000012;
      SVar14.bridgeObject = param_4;
      SVar14.str = pcVar8;
      Swift::String::append(SVar11,SVar14);
      pcVar8 = local_b8;
      _swift_getErrorValue(uVar6,auStack_a0);
      SVar12 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar15.bridgeObject = param_4;
      SVar15.str = pcVar8;
      Swift::String::append(SVar12,SVar15);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      puVar1 = local_90;
      FUN_1000d4e0c(local_98,local_90,local_68,uStack_60);
      _swift_errorRelease(uVar6);
      _swift_bridgeObjectRelease(puVar1);
      goto LAB_1000ae024;
    }
    FUN_1000d468c(local_80,local_80[0]);
    puVar5 = local_80;
    FUN_100004640(puVar5,local_68);
    pcVar8 = "Registered background helper";
    uVar6 = 0xd00000000000001c;
  }
  FUN_1000d4dd4(uVar6,(ulong)(pcVar8 + -0x20) | 0x8000000000000000,local_68,uStack_60,puVar5);
LAB_1000ae024:
  FUN_100004594(local_80);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1000ae064 | FUN_1000ae064 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint FUN_1000ae064(ID param_1)

{
  NSString *pNVar1;
  ID IVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x68);
  if (*(byte *)(unaff_x20 + 0x68) == 2) {
    FUN_1000ae2bc();
    if (param_1 == 0) {
      uVar3 = 0;
      IVar2 = *(ID *)(unaff_x20 + 0x30);
    }
    else {
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar2 = objc_stub::boolForKey_(param_1,pNVar1);
      uVar3 = (uint)IVar2;
      IVar2 = *(ID *)(unaff_x20 + 0x30);
    }
    if (IVar2 != 0) {
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::removeObjectForKey_(IVar2,pNVar1);
      FUN_10001486c(IVar2);
    }
    *(char *)(unaff_x20 + 0x68) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Address: 0x1000ae12c | FUN_1000ae12c */

undefined * FUN_1000ae12c(void)

{
  undefined *puVar1;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  AVar2.unknown = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_1000ae1d0();
    FUN_1000037f0(&DAT_100faae30,&DAT_100c286c8);
    FUN_10009b1a0();
    AVar2 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    _swift_release(puVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = AVar2.unknown;
    _swift_retain(AVar2.unknown);
    _swift_release(uVar3);
    puVar1 = (undefined *)0x0;
  }
  _swift_retain(puVar1);
  return AVar2.unknown;
}



/* Address: 0x1000ae1d0 | FUN_1000ae1d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_1000ae1d0(void)

{
  undefined1 *puVar1;
  NSString *pNVar2;
  ID IVar3;
  CurrentValueSubject *pCVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 local_31;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x28);
  puVar5 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar3 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar2);
    IVar3 = SMAppService::status(IVar3);
    local_31 = IVar3 == 1;
    pCVar4 = (CurrentValueSubject *)&DAT_100faae30;
    FUN_1000037f0(&DAT_100faae30,&DAT_100c286c8);
    _swift_allocObject();
    puVar5 = &local_31;
    Combine::CurrentValueSubject::_init(pCVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x28) = puVar5;
    _swift_retain();
    _swift_release(uVar6);
    puVar1 = (undefined1 *)0x0;
  }
  _swift_retain(puVar1);
  return puVar5;
}



/* Address: 0x1000ae2bc | FUN_1000ae2bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000ae2bc(void)

{
  undefined *self;
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  IVar3 = *(ID *)(unaff_x20 + 0x30);
  IVar2 = IVar3;
  if (IVar3 == 1) {
    self = &_OBJC_CLASS___NSUserDefaults;
    _objc_allocWithZone();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = objc_stub::initWithSuiteName_((ID)self,pNVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(ID *)(unaff_x20 + 0x30) = IVar2;
    FUN_10001486c(uVar4);
  }
  FUN_10001487c(IVar3);
  return IVar2;
}



/* Address: 0x1000ae358 | FUN_1000ae358 */

void FUN_1000ae358(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10001486c(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1000ae3ac | FUN_1000ae3ac */

void FUN_1000ae3ac(void)

{
  FUN_1000ae358();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000ae3cc | FUN_1000ae3cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000ae3cc(void)

{
  return ZEXT816(0x100fab6c8);
}



/* Address: 0x1000ae3ec | FUN_1000ae3ec */

void FUN_1000ae3ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &DAT_100c29930;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa8360;
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar3 = 0x6c65486574736150;
  FUN_1000d4624(0x6c65486574736150,0xeb00000000726570);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xd00000000000001c;
  *(undefined8 *)(unaff_x20 + 0x40) = 0x8000000100d8f670;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x5273496574736170;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xee00676e696e6e75;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xd000000000000015;
  *(undefined8 *)(unaff_x20 + 0x60) = 0x8000000100d8f690;
  *(undefined1 *)(unaff_x20 + 0x68) = 2;
  return;
}



/* Address: 0x1000ae4fc | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1000ae500 | FUN_1000ae500 */

void FUN_1000ae500(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c29a00;
  _swift_getKeyPath(&DAT_100c29a00);
  puVar2 = &DAT_100c29a28;
  _swift_getKeyPath(&DAT_100c29a28);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000ae568 | FUN_1000ae568 */

void FUN_1000ae568(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c29a00;
  _swift_getKeyPath(&DAT_100c29a00);
  puVar2 = &DAT_100c29a28;
  _swift_getKeyPath(&DAT_100c29a28);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000ae5e0 | FUN_1000ae5e0 */

void FUN_1000ae5e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c29a48;
  _swift_getKeyPath(&DAT_100c29a48);
  puVar2 = &DAT_100c29a70;
  _swift_getKeyPath(&DAT_100c29a70);
  Combine::Published::_get_subscript(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000ae644 | FUN_1000ae644 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ae838 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ae644(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Published PVar10;
  AnyCancellable *pAVar11;
  undefined *puVar12;
  undefined *puVar13;
  __int64 _Var14;
  ContiguousArray CVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x20;
  long lVar17;
  long lVar18;
  ContiguousArray CVar19;
  long lVar20;
  String SVar21;
  undefined1 auStack_130 [8];
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8 [3];
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  puVar4 = &DAT_100fab850;
  FUN_1000037f0(&DAT_100fab850,&DAT_100c299c0);
  local_e0 = *(long *)(puVar4 + -8);
  local_d8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa9068;
  local_e8 = auStack_130 + -extraout_x8;
  FUN_1000037f0(&DAT_100fa9068,&DAT_100c25d48);
  local_128 = *(long *)(puVar4 + -8);
  local_120 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = (long)(auStack_130 + -extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100fab858;
  FUN_1000037f0(&DAT_100fab858,&DAT_100c299d0);
  local_110 = *(long *)(puVar4 + -8);
  local_108 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = lVar20 - extraout_x8_01;
  puVar4 = &DAT_100fab860;
  local_118 = lVar16;
  FUN_1000037f0(&DAT_100fab860,&DAT_100c299d8);
  local_f8 = *(long *)(puVar4 + -8);
  local_f0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_02;
  local_100 = lVar16;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = (undefined *)(lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fa9290;
  FUN_1000037f0(&DAT_100fa9290,&DAT_100c26128);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = _TtC5Paste17SettingsViewModel::_selectedPane;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_87 = 0;
  uStack_90 = 0;
  FUN_1000594f4(&local_a0,local_c8);
  puVar6 = &DAT_100fa92b0;
  FUN_1000037f0(&DAT_100fa92b0,&DAT_100c26138);
  Combine::Published::init((long)LVar5.unknown - extraout_x8_04,puVar6,puVar6);
  FUN_1000af6f4(&local_a0);
  (**(code **)(lVar17 + 0x20))(unaff_x20 + lVar16,(long)LVar5.unknown - extraout_x8_04,puVar4);
  lVar16 = _TtC5Paste17SettingsViewModel::panes;
  puVar4 = &DAT_100fab868;
  FUN_1000037f0(&DAT_100fab868,&DAT_100c299e0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 10;
  *(undefined8 *)(puVar4 + 0x10) = 5;
  puVar7 = (undefined8 *)0x0;
  FUN_1000ad91c();
  _swift_allocObject();
  FUN_1000ac170();
  *(undefined **)(puVar4 + 0x38) = &DAT_100eb3c30;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100eb3c48;
  puVar4[0x20] = 0;
  *(undefined8 **)(puVar4 + 0x28) = puVar7;
  FUN_10020d164();
  uVar9 = *puVar7;
  uVar2 = puVar7[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001e16d4(LVar5.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar5);
  uVar8 = 0;
  FUN_10000c0ec();
  _swift_allocObject();
  FUN_10000a90c();
  *(undefined **)(puVar4 + 0x60) = &DAT_100eb0328;
  *(undefined ***)(puVar4 + 0x68) = &PTR_PTR_100eb0348;
  puVar7 = (undefined8 *)&DAT_100eb41f0;
  _swift_allocObject(&DAT_100eb41f0,0x50,7);
  *(undefined8 **)(puVar4 + 0x48) = puVar7;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined1 *)(puVar7 + 3) = 1;
  puVar7[4] = uVar9;
  puVar7[5] = uVar2;
  *(String *)(puVar7 + 6) = SVar21;
  *(undefined1 *)(puVar7 + 8) = 0;
  puVar7[9] = uVar8;
  FUN_10020d284();
  uVar9 = *puVar7;
  uVar2 = puVar7[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001e25d4(LVar5.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar5);
  uVar8 = 0;
  FUN_100064238();
  _swift_allocObject();
  FUN_100064258();
  *(undefined **)(puVar4 + 0x88) = &DAT_100eb1eb0;
  *(undefined ***)(puVar4 + 0x90) = &PTR_PTR_100eb1ed0;
  puVar7 = (undefined8 *)&DAT_100eb4218;
  _swift_allocObject(&DAT_100eb4218,0x50,7);
  *(undefined8 **)(puVar4 + 0x70) = puVar7;
  *(undefined1 *)(puVar7 + 2) = 2;
  *(undefined1 *)(puVar7 + 3) = 2;
  puVar7[4] = uVar9;
  puVar7[5] = uVar2;
  *(String *)(puVar7 + 6) = SVar21;
  *(undefined1 *)(puVar7 + 8) = 0;
  puVar7[9] = uVar8;
  FUN_10020d70c();
  uVar9 = *puVar7;
  uVar2 = puVar7[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001dee54(LVar5.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar5);
  uVar8 = 0;
  FUN_1000c8fd0();
  _swift_allocObject();
  FUN_1000c80c4();
  *(undefined **)(puVar4 + 0xb0) = &DAT_100eb4410;
  *(undefined ***)(puVar4 + 0xb8) = &PTR_PTR_100eb4430;
  puVar6 = &DAT_100eb4240;
  _swift_allocObject(&DAT_100eb4240,0x50,7);
  *(undefined **)(puVar4 + 0x98) = puVar6;
  puVar6[0x10] = 3;
  puVar6[0x18] = 3;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  *(String *)(puVar6 + 0x30) = SVar21;
  puVar6[0x40] = 0;
  *(undefined8 *)(puVar6 + 0x48) = uVar8;
  uVar9 = 0;
  FUN_100094e34();
  _swift_allocObject();
  FUN_100094a5c();
  *(undefined **)(puVar4 + 0xd8) = &DAT_100eb40b8;
  *(undefined ***)(puVar4 + 0xe0) = &PTR_PTR_100eb40d0;
  puVar4[0xc0] = 4;
  *(undefined8 *)(puVar4 + 200) = uVar9;
  *(undefined **)(unaff_x20 + lVar16) = puVar4;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var14 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var14 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste17SettingsViewModel::cancellables) = puVar4;
  lVar17 = *(long *)(unaff_x20 + lVar16);
  lVar16 = *(long *)(lVar17 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar16 != 0) {
    local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(lVar17);
    FUN_100071838(0,lVar16,0);
    lVar18 = lVar17 + 0x20;
    do {
      puVar4 = local_d0;
      FUN_100076688(lVar18,local_c8);
      puVar6 = puStack_a8;
      uVar9 = local_b0;
      FUN_100004640(local_c8,local_b0);
      (**(code **)(puVar6 + 0x10))(&local_a0,uVar9,puVar6);
      FUN_100004594(local_c8);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_d0 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100071838(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_d0;
      *(ulong *)(local_d0 + 0x10) = uVar1 + 1;
      *(ulong *)(local_d0 + uVar1 * 0x30 + 0x41) = CONCAT17(uStack_78,uStack_7f);
      *(ulong *)(local_d0 + uVar1 * 0x30 + 0x39) = CONCAT17(uStack_80,local_87);
      *(undefined8 *)(local_d0 + uVar1 * 0x30 + 0x28) = uStack_98;
      *(undefined8 *)(local_d0 + uVar1 * 0x30 + 0x20) = local_a0;
      *(ulong *)(local_d0 + uVar1 * 0x30 + 0x38) = CONCAT71(local_87,uStack_88);
      *(undefined8 *)(local_d0 + uVar1 * 0x30 + 0x30) = uStack_90;
      lVar18 = lVar18 + 0x28;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    _swift_bridgeObjectRelease(lVar17);
  }
  FUN_100055770();
  _swift_allocObject();
  FUN_100054fe0();
  *(undefined **)(unaff_x20 + _TtC5Paste17SettingsViewModel::sidebarViewModel) = puVar4;
  _swift_beginAccess(puVar4 + _TtC5Paste16SidebarViewModel::_selectedItem,local_c8,0x21,0);
  PVar10.unknown = &DAT_100fa9080;
  FUN_1000037f0(&DAT_100fa9080,&DAT_100c25d60);
  Combine::Published::_get_projectedValue(PVar10);
  _swift_endAccess(local_c8);
  FUN_100016eac(&DAT_100fab870,&DAT_100fa9068,&DAT_100c25d48,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  lVar16 = local_118;
  puVar4 = local_120;
  (extension_Combine)::Combine::Publisher::_compactMap();
  (**(code **)(local_128 + 8))(lVar20,puVar4);
  FUN_100016eac(&DAT_100fab878,&DAT_100fab858,&DAT_100c299d0,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  FUN_10002b9d4();
  lVar17 = local_100;
  puVar4 = local_108;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_110 + 8))(lVar16,puVar4);
  puVar4 = &DAT_100eb4268;
  _swift_allocObject(&DAT_100eb4268,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  FUN_100016eac(&DAT_100fab880,&DAT_100fab860,&DAT_100c299d8,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  _swift_retain();
  puVar6 = local_f0;
  pAVar11 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (**(code **)(local_f8 + 8))(lVar17,puVar6);
  lVar17 = _TtC5Paste17SettingsViewModel::cancellables;
  CVar15.unknown = (undefined *)local_c8;
  _swift_beginAccess(unaff_x20 + _TtC5Paste17SettingsViewModel::cancellables,CVar15.unknown,0x21,0);
  Combine::AnyCancellable::store(pAVar11,(undefined *)(unaff_x20 + lVar17));
  _swift_endAccess(local_c8);
  _swift_release(pAVar11);
  lVar20 = *(long *)(unaff_x20 + _TtC5Paste17SettingsViewModel::panes);
  lVar16 = *(long *)(lVar20 + 0x10);
  local_c8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar16 != 0) {
    local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(lVar20);
    Swift::ContiguousArray::_reserveCapacity(lVar16,CVar15);
    lVar18 = lVar20 + 0x20;
    do {
      FUN_100076688(lVar18,local_c8);
      CVar15.unknown = puStack_a8;
      uVar9 = local_b0;
      FUN_100004640(local_c8,local_b0);
      (**(code **)(CVar15.unknown + 0x18))(uVar9);
      CVar19.unknown = (undefined *)local_c8;
      FUN_100004594();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar19);
                    /* WARNING: Load size is inaccurate */
      CVar19.unknown = local_d0[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar19.unknown,CVar15);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar19.unknown,uVar9);
      Swift::ContiguousArray::__endMutation(CVar19);
      lVar18 = lVar18 + 0x28;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    _swift_bridgeObjectRelease(lVar20);
    local_c8[0] = local_d0;
  }
  puVar4 = &DAT_100fab888;
  FUN_1000037f0(&DAT_100fab888,&DAT_100c299f0);
  puVar6 = &DAT_100fab890;
  FUN_1000037f0(&DAT_100fab890,&DAT_100c299f8);
  puVar12 = &DAT_100fab898;
  FUN_100016eac(&DAT_100fab898,&DAT_100fab888,&DAT_100c299f0,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  puVar13 = &DAT_100fab8a0;
  FUN_100016eac(&DAT_100fab8a0,&DAT_100fab890,&DAT_100c299f8,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  puVar3 = local_e8;
  Combine::Publishers::MergeMany::_init(local_e8,puVar13,puVar4,puVar6,puVar12,puVar13);
  puVar4 = &DAT_100eb4268;
  _swift_allocObject(&DAT_100eb4268,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  _swift_release();
  FUN_100016eac(&DAT_100fab8a8,&DAT_100fab850,&DAT_100c299c0,
                PTR_Combine__Combine__Publishers__MergeMany<undefined>_>Combine__Publisher_100ea9720
               );
  puVar6 = local_d8;
  pAVar11 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (**(code **)(local_e0 + 8))(puVar3,puVar6);
  _swift_beginAccess(unaff_x20 + lVar17,local_c8,0x21,0);
  Combine::AnyCancellable::store(pAVar11,(undefined *)(unaff_x20 + lVar17));
  _swift_endAccess(local_c8);
  _swift_release(pAVar11);
  return;
}



/* Address: 0x1000af01c | FUN_1000af01c */

void FUN_1000af01c(undefined1 *param_1,undefined8 *param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *param_2;
  lVar7 = param_2[2];
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsViewModel.swift",0x1d,1,0x17,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  uVar5 = 6;
  if (lVar7 != 0) {
    uVar5 = (undefined1)uVar6;
  }
  *param_1 = uVar5;
  return;
}



/* Address: 0x1000af0c0 | FUN_1000af0c0 */

void FUN_1000af0c0(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  undefined *puVar11;
  Published *pPVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  long lStack_c0;
  MainActor aMStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  bVar1 = *param_1;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(this,this);
  pMVar5 = pMVar4;
  FUN_1000081a8();
  pMVar8 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsViewModel.swift",0x1d,1,0x19,UVar6.unknown,pMVar8);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar4);
    return;
  }
  lVar14 = *(long *)(param_2 + _TtC5Paste17SettingsViewModel::panes);
  uVar13 = *(ulong *)(lVar14 + 0x10);
  if (uVar13 != 0) {
    lVar15 = lVar14 + 0x20;
    _swift_bridgeObjectRetain(lVar14);
    uVar16 = 0;
    do {
      if (*(ulong *)(lVar14 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000af314);
        (*pcVar3)();
      }
      FUN_100076688(lVar15,aMStack_b8);
      pMVar8 = aMStack_b8;
      FUN_100076508(pMVar8,auStack_e0);
      pMVar9 = Swift::MainActor::get_shared(this,pMVar8);
      pMVar8 = pMVar5;
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/SettingsViewModel.swift",0x1d,1,0x1c,UVar6.unknown,pMVar8);
      }
      lVar2 = lStack_c0;
      uVar10 = local_c8;
      FUN_100004640(auStack_e0,local_c8);
      (**(code **)(lVar2 + 8))(uVar10,lVar2);
      _swift_release(pMVar9);
      if ((uint)bVar1 == ((uint)uVar10 & 0xff)) {
        _swift_bridgeObjectRelease(lVar14);
        FUN_100076508(auStack_e0,&local_90);
        goto LAB_1000af2a0;
      }
      uVar16 = uVar16 + 1;
      FUN_100004594(auStack_e0);
      lVar15 = lVar15 + 0x28;
    } while (uVar13 != uVar16);
    _swift_bridgeObjectRelease(lVar14);
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_70 = 0;
LAB_1000af2a0:
  puVar11 = &DAT_100c29a48;
  _swift_getKeyPath(&DAT_100c29a48);
  pPVar12 = (Published *)&DAT_100c29a70;
  _swift_getKeyPath(&DAT_100c29a70);
  FUN_1000594f4(&local_90,aMStack_b8);
  Combine::Published::_set_subscript(pPVar12,aMStack_b8,param_2,puVar11,pPVar12);
  FUN_1000af6f4(&local_90);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000af314 | FUN_1000af314 */

void FUN_1000af314(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  Published *pPVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *local_c0 [3];
  undefined8 local_a8;
  long lStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar4 = pMVar5;
  FUN_1000081a8();
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SettingsViewModel.swift",0x1d,1,0x21,UVar6.unknown,pMVar4);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar10 = *(undefined8 *)(param_2 + _TtC5Paste17SettingsViewModel::sidebarViewModel);
    lVar11 = *(long *)(param_2 + _TtC5Paste17SettingsViewModel::panes);
    lVar12 = *(long *)(lVar11 + 0x10);
    if (lVar12 == 0) {
      _swift_retain(uVar10);
      local_c0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_retain(uVar10);
      _swift_bridgeObjectRetain(lVar11);
      FUN_100071838(0,lVar12,0);
      lVar13 = lVar11 + 0x20;
      do {
        puVar9 = local_98;
        FUN_100076688(lVar13,local_c0);
        lVar3 = lStack_a0;
        uVar2 = local_a8;
        FUN_100004640(local_c0,local_a8);
        (**(code **)(lVar3 + 0x10))(&local_90,uVar2,lVar3);
        FUN_100004594(local_c0);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        local_98 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          FUN_100071838(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar9 = local_98;
        *(ulong *)(local_98 + 0x10) = uVar1 + 1;
        *(undefined8 *)(local_98 + uVar1 * 0x30 + 0x41) = uStack_6f;
        *(ulong *)(local_98 + uVar1 * 0x30 + 0x39) = CONCAT17(uStack_70,local_77);
        *(undefined8 *)(local_98 + uVar1 * 0x30 + 0x28) = uStack_88;
        *(undefined8 *)(local_98 + uVar1 * 0x30 + 0x20) = local_90;
        *(ulong *)(local_98 + uVar1 * 0x30 + 0x38) = CONCAT71(local_77,uStack_78);
        *(undefined8 *)(local_98 + uVar1 * 0x30 + 0x30) = uStack_80;
        lVar13 = lVar13 + 0x28;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_bridgeObjectRelease(lVar11);
      local_c0[0] = puVar9;
    }
    pPVar8 = (Published *)&DAT_100c29a00;
    _swift_getKeyPath(&DAT_100c29a00);
    puVar9 = &DAT_100c29a28;
    _swift_getKeyPath(&DAT_100c29a28);
    Combine::Published::_set_subscript(pPVar8,local_c0,uVar10,pPVar8,puVar9);
    _swift_release(pMVar5);
    _swift_release(param_2);
    return;
  }
  _swift_release(pMVar5);
  return;
}



/* Address: 0x1000af544 | FUN_1000af544 */

void FUN_1000af544(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste17SettingsViewModel::_selectedPane;
  puVar2 = &DAT_100fa9290;
  FUN_1000037f0(&DAT_100fa9290,&DAT_100c26128);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste17SettingsViewModel::sidebarViewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste17SettingsViewModel::panes));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste17SettingsViewModel::cancellables));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000af5cc | FUN_1000af5cc */

void FUN_1000af5cc(void)

{
  FUN_1000af5d4(0);
  return;
}



/* Address: 0x1000af5d4 | FUN_1000af5d4 */

void FUN_1000af5d4(undefined8 param_1)

{
  if (DAT_100fab7a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca220c);
  return;
}



/* Address: 0x1000af60c | FUN_1000af60c */

void FUN_1000af60c(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1000af694();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    puStack_28 = local_30;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000af694 | FUN_1000af694 */

void FUN_1000af694(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fab7b8.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fa92b0;
    FUN_100005c24(&DAT_100fa92b0,&DAT_100c26138);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fab7b8 = PVar2;
    }
  }
  return;
}


