/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003982f4 | FUN_1003982f4 */

void FUN_1003982f4(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x218) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x220) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x228) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100398388,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100398388 | FUN_100398388 */

void FUN_100398388(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  UnownedSerialExecutor UVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  MainActor *this;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  pMVar1 = *(MainActor **)(unaff_x22 + 0x220);
  this = *(MainActor **)(unaff_x22 + 0x218);
  _swift_release();
  pMVar1 = Swift::MainActor::get_shared(this,pMVar1);
  UVar2 = Swift::Actor::get_unownedExecutor();
  UVar3 = UVar2;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar3.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/SyncEngine+Delegate.swift",0x23,1,0x2b,UVar2.unknown,uVar6);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = 2;
  if (*(long *)(unaff_x22 + 0x170) != *(long *)(unaff_x22 + 0x1f8) ||
      *(long *)(unaff_x22 + 0x1f8) == 0) {
    uVar6 = 3;
  }
  FUN_10039bb78(uVar6);
  _swift_release(pMVar1);
  FUN_1000da368(uVar4,uVar5);
  _swift_task_switch(thunk_FUN_100398580,uVar4,uVar5);
  return;
}



/* Address: 0x10039845c | FUN_10039845c */

void FUN_10039845c(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x230) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003984e8,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003984e8 | FUN_1003984e8 */

/* WARNING: Removing unreachable block (ram,0x000100398534) */

void FUN_1003984e8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x1f8);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
  uVar2 = 2;
  if (lVar1 != lVar4 || lVar4 == 0) {
    uVar2 = 3;
  }
  FUN_10039bfb4(uVar3,uVar2,0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_100398580,uVar2,uVar3);
  return;
}



/* Address: 0x100398580 | FUN_100398580 */

void FUN_100398580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1e0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100398628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10039862c | FUN_10039862c */

void FUN_10039862c(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x238) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x240) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x248) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003986c0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003986c0 | FUN_1003986c0 */

void FUN_1003986c0(void)

{
  long lVar1;
  long lVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  MainActor *this;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  pMVar3 = *(MainActor **)(unaff_x22 + 0x240);
  this = *(MainActor **)(unaff_x22 + 0x238);
  _swift_release();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/SyncEngine+Delegate.swift",0x23,1,0x3b,UVar4.unknown,uVar8);
  }
  lVar1 = *(long *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar8 = 2;
  if (*(long *)(unaff_x22 + 0x170) != *(long *)(unaff_x22 + 0x1f8) ||
      *(long *)(unaff_x22 + 0x1f8) == 0) {
    uVar8 = 3;
  }
  FUN_10039bb78(uVar8);
  lVar2 = _TtC9PasteCore10SyncEngine::activeSyncScopes;
  _swift_beginAccess(lVar1 + _TtC9PasteCore10SyncEngine::activeSyncScopes,unaff_x22 + 0xd8,0,0);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(*(long *)(lVar1 + lVar2) + 0x10);
  _swift_release(pMVar3);
  FUN_1000da368(uVar6,uVar7);
  _swift_task_switch(FUN_1003987c8,uVar6,uVar7);
  return;
}



/* Address: 0x1003987c8 | FUN_1003987c8 */

void FUN_1003987c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(unaff_x22 + 0x250) == 0) {
    FUN_10038ebc4();
  }
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1e0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010039887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100398880 | FUN_100398880 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100398880(undefined8 param_1,CKSyncEngine *param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ChangeType CVar3;
  PendingDatabaseChange PVar4;
  int iVar5;
  undefined7 extraout_var;
  AccountChange AVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  CKSyncEngine *pCVar10;
  State *pSVar11;
  undefined *puVar12;
  undefined7 extraout_var_00;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar13;
  undefined *puVar14;
  _StringGuts _Var15;
  char *pcVar16;
  undefined *puVar17;
  long extraout_x8;
  ulong uVar18;
  long extraout_x12;
  ID IVar19;
  long unaff_x20;
  undefined1 *puVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String zoneName;
  String SVar26;
  String SVar27;
  undefined1 auStack_e0 [8];
  CKSyncEngine *local_d8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  char *pcVar6;
  
  pcVar16 = param_3;
  local_d8 = param_2;
  CVar3 = CloudKit::CKSyncEngine::Event::AccountChange::ChangeType::typeMetadataAccessor();
  pcVar6 = (char *)CONCAT71(extraout_var,CVar3.value);
  lVar23 = *(long *)(pcVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  puVar20 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1000d468c(auStack_88);
  uVar2 = uStack_68;
  puVar1 = local_70;
  _Var15.unknown = local_70;
  FUN_100004640();
  local_98 = 0;
  uStack_90 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2d,_Var15);
  AVar7.unknown = (undefined *)0xd000000000000022;
  SVar25.bridgeObject = (void *)0x8000000100da4450;
  SVar25.str = (char *)0xd000000000000022;
  SVar26.bridgeObject = param_4;
  SVar26.str = pcVar16;
  Swift::String::append(SVar25,SVar26);
  CloudKit::CKSyncEngine::Event::AccountChange::get_changeType(AVar7);
  puVar14 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  pcVar16 = pcVar6;
  puVar17 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            ((long)puVar20 - extraout_x12,&local_98,pcVar6,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  pcVar22 = *(code **)(lVar23 + 8);
  (*pcVar22)((long)puVar20 - extraout_x12,pcVar6);
  SVar24.bridgeObject = &DAT_e700000000000000;
  SVar24.str = (char *)0x3d65706f637320;
  SVar27.bridgeObject = puVar17;
  SVar27.str = pcVar16;
  Swift::String::append(SVar24,SVar27);
  uVar8 = 0;
  pcStack_a0 = param_3;
  FUN_1002fbb6c(0);
  Swift::__print_unlocked(&pcStack_a0,&local_98,uVar8,puVar12,puVar14);
  uVar8 = uStack_90;
  FUN_1000d4dd4(local_98,uStack_90,puVar1,uVar2);
  _swift_bridgeObjectRelease(uVar8);
  AVar7.unknown = auStack_88;
  FUN_100004594();
  CloudKit::CKSyncEngine::Event::AccountChange::get_changeType(AVar7);
  puVar9 = puVar20;
  (**(code **)(lVar23 + 0x58))(puVar20,pcVar6);
  iVar5 = (int)puVar9;
  if (iVar5 == *(int *)
                PTR___enum_case_for_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_signIn_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_100ea92f8
     ) {
    (*pcVar22)(puVar20,pcVar6);
    FUN_1000d468c(auStack_88);
    puVar9 = auStack_88;
    FUN_100004640(puVar9,local_70);
    FUN_1000d4dd4(0xd000000000000027,0x8000000100da4520,local_70,uStack_68,puVar9);
    FUN_100004594(auStack_88);
    if (param_3 != (char *)0x2) {
      return;
    }
    IVar19 = *(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::syncLock);
    objc_stub::lock(IVar19);
    *(undefined1 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 1;
    pCVar10 = (CKSyncEngine *)objc_stub::unlock(IVar19);
LAB_100398aec:
    pSVar11 = CloudKit::CKSyncEngine::get_state(local_d8,pCVar10);
    puVar12 = &DAT_100fc1b80;
    FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
    PVar4 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
    lVar23 = *(long *)(CONCAT71(extraout_var_00,PVar4.value) + -8);
    uVar18 = (ulong)*(byte *)(lVar23 + 0x50);
    uVar21 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar12,uVar21 + *(long *)(lVar23 + 0x48),uVar18 | 7);
    *(undefined8 *)(puVar12 + 0x18) = 2;
    *(undefined8 *)(puVar12 + 0x10) = 1;
    this = (CKRecordZoneID *)0x0;
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    zoneName.bridgeObject = &DAT_e500000000000000;
    zoneName.str = (char *)0x6574736150;
    pCVar13 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(this,zoneName,SVar25);
    puVar14 = &_OBJC_CLASS___CKRecordZone;
    _objc_allocWithZone();
    IVar19 = objc_stub::initWithZoneID_((ID)puVar14,pCVar13);
    *(ID *)(puVar12 + uVar21) = IVar19;
    (**(code **)(lVar23 + 0x68))
              (puVar12 + uVar21,
               *(undefined4 *)
                PTR___enum_case_for_CloudKit_CKSyncEngine_PendingDatabaseChange_saveZone_CloudKit_CKSyncEngine_PendingDatabaseChange_Type___>____C_CKRecordZone___>_CloudKit_CKSyncEngine_PendingDatabaseChange_100ea9290
               ,CONCAT71(extraout_var_00,PVar4.value));
    CloudKit::CKSyncEngine::State::add(pSVar11,puVar12);
    _swift_release(pSVar11);
    _swift_release(puVar12);
  }
  else {
    if (iVar5 == *(int *)
                  PTR___enum_case_for_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_signOut_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_100ea9300
       ) {
      (*pcVar22)(puVar20,pcVar6);
      FUN_1000d468c(auStack_88);
      puVar9 = auStack_88;
      FUN_100004640(puVar9,local_70);
      FUN_1000d4dd4(0xd000000000000028,0x8000000100da44f0,local_70,uStack_68,puVar9);
      FUN_100004594(auStack_88);
    }
    else {
      if (iVar5 != *(int *)
                    PTR___enum_case_for_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_switchAccounts_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_Type___>____C_CKRecordID___C_CKRecordID___>_CloudKit_CKSyncEngine_Event_AccountChange_ChangeType_100ea92f0
         ) {
        FUN_1000d468c(auStack_88);
        puVar9 = auStack_88;
        FUN_100004640(puVar9,local_70);
        FUN_1000d4df0(0xd000000000000031,0x8000000100da4480,local_70,uStack_68,puVar9);
        FUN_100004594(auStack_88);
        (*pcVar22)(puVar20,pcVar6);
        return;
      }
      (*pcVar22)(puVar20,pcVar6);
      FUN_1000d468c(auStack_88);
      puVar9 = auStack_88;
      FUN_100004640(puVar9,local_70);
      FUN_1000d4dd4(0xd000000000000026,0x8000000100da44c0,local_70,uStack_68,puVar9);
      FUN_100004594(auStack_88);
      if (param_3 == (char *)0x2) {
        IVar19 = *(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::syncLock);
        objc_stub::lock(IVar19);
        *(undefined1 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 1;
        pCVar10 = (CKSyncEngine *)objc_stub::unlock(IVar19);
        FUN_10039e014();
        goto LAB_100398aec;
      }
    }
    FUN_10039e014();
  }
  return;
}



/* Address: 0x100398d9c | FUN_100398d9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100398d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  PendingRecordZoneChange PVar5;
  Reason RVar6;
  PendingDatabaseChange PVar7;
  bool bVar8;
  int iVar9;
  undefined7 extraout_var;
  ulong uVar10;
  undefined7 extraout_var_00;
  ulong uVar11;
  Deletion DVar12;
  FetchedDatabaseChanges FVar13;
  CKRecordZoneID *pCVar14;
  CKSyncEngine *pCVar15;
  State *pSVar16;
  undefined7 extraout_var_01;
  undefined *puVar17;
  ID IVar18;
  long *plVar19;
  _StringGuts _Var20;
  char *pcVar21;
  char *pcVar22;
  void *pvVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long unaff_x20;
  long lVar30;
  code *pcVar31;
  long lVar32;
  long unaff_x22;
  undefined8 uVar33;
  ID self;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  
  *(void **)(unaff_x22 + 0xe0) = param_4;
  *(long *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  PVar5 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xf0) = CONCAT71(extraout_var,PVar5.value);
  lVar24 = *(long *)(CONCAT71(extraout_var,PVar5.value) + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar24;
  uVar10 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar10;
  RVar6 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::Reason::
          typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x108) = CONCAT71(extraout_var_00,RVar6.value);
  lVar24 = *(long *)(CONCAT71(extraout_var_00,RVar6.value) + -8);
  *(long *)(unaff_x22 + 0x110) = lVar24;
  uVar10 = *(long *)(lVar24 + 0x40) + 0xf;
  uVar11 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar11;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar10;
  DVar12 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x128) = DVar12.unknown;
  lVar30 = *(long *)(DVar12.unknown + -8);
  *(long *)(unaff_x22 + 0x130) = lVar30;
  uVar10 = *(long *)(lVar30 + 0x40) + 0xf;
  uVar11 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar11;
  FVar13.unknown = (undefined *)(uVar10 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x140) = FVar13.unknown;
  CloudKit::CKSyncEngine::Event::FetchedDatabaseChanges::get_deletions(FVar13);
  *(undefined **)(unaff_x22 + 0x148) = FVar13.unknown;
  lVar25 = *(long *)(FVar13.unknown + 0x10);
  *(long *)(unaff_x22 + 0x150) = lVar25;
  lVar32 = _TtC9PasteCore10SyncEngine::syncLock;
  uVar29 = _TtC9PasteCore10SyncEngine::persistentStack;
  lVar24 = _TtC9PasteCore10SyncEngine::logger;
  if (lVar25 != 0) {
    uVar10 = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = _TtC9PasteCore10SyncEngine::_needsPostFetchSeed;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x20 + lVar24);
    uVar29 = *(undefined8 *)PTR__CKCurrentUserDefaultName_100ea95d0;
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x20 + lVar32);
    *(undefined8 *)(unaff_x22 + 0x178) = uVar29;
    *(undefined4 *)(unaff_x22 + 0x1b8) = *(undefined4 *)(lVar30 + 0x50);
    puVar17 = 
    PTR___enum_case_for__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_purged__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_Type___>__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_100ea94d0
    ;
    *(undefined4 *)(unaff_x22 + 0x1bc) =
         *(undefined4 *)
          PTR___enum_case_for__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_deleted__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_Type___>__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_100ea94d8
    ;
    *(undefined4 *)(unaff_x22 + 0x1c0) = *(undefined4 *)puVar17;
    *(undefined4 *)(unaff_x22 + 0x1c4) =
         *(undefined4 *)
          PTR___enum_case_for__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_encryptedDataReset__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_Type___>__extension_in_CloudKit____C_CKDatabase_DatabaseChange_Deletion_Reason_100ea94c8
    ;
    *(undefined4 *)(unaff_x22 + 0x1c8) =
         *(undefined4 *)
          PTR___enum_case_for_CloudKit_CKSyncEngine_PendingDatabaseChange_saveZone_CloudKit_CKSyncEngine_PendingDatabaseChange_Type___>____C_CKRecordZone___>_CloudKit_CKSyncEngine_PendingDatabaseChange_100ea9290
    ;
    *(undefined4 *)(unaff_x22 + 0x1cc) =
         *(undefined4 *)
          PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
    ;
    do {
      *(ulong *)(unaff_x22 + 0x180) = uVar10;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x148) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x100399670);
        (*pcVar31)();
      }
      iVar1 = *(int *)(unaff_x22 + 0x1c0);
      iVar2 = *(int *)(unaff_x22 + 0x1bc);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x140);
      pcVar21 = *(char **)(unaff_x22 + 0x128);
      lVar24 = *(long *)(unaff_x22 + 0x130);
      pCVar15 = *(CKSyncEngine **)(unaff_x22 + 0x118);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x108);
      lVar32 = *(long *)(unaff_x22 + 0x110);
      (**(code **)(lVar24 + 0x10))
                (uVar26,*(long *)(unaff_x22 + 0x148) +
                        ((ulong)*(byte *)(unaff_x22 + 0x1b8) + 0x20 &
                        ((ulong)*(byte *)(unaff_x22 + 0x1b8) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar24 + 0x48) * uVar10,pcVar21);
      (**(code **)(lVar24 + 0x20))(uVar29,uVar26);
      FUN_1000d468c(unaff_x22 + 0x10);
      pcVar22 = *(char **)(unaff_x22 + 0x28);
      pvVar23 = *(void **)(unaff_x22 + 0x30);
      _Var20.unknown = pcVar22;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x29,_Var20);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xa0);
      DVar12.unknown = (undefined *)0xd00000000000001b;
      SVar34.bridgeObject = (void *)0x8000000100da4570;
      SVar34.str = (char *)0xd00000000000001b;
      SVar37.bridgeObject = param_4;
      SVar37.str = pcVar21;
      Swift::String::append(SVar34,SVar37);
      pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar12);
      objc_stub::zoneName((ID)pCVar14);
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar38.bridgeObject = param_4;
      SVar38.str = pcVar21;
      Swift::String::append(SVar34,SVar38);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      DVar12.unknown = (undefined *)0x6e6f73616572202c;
      SVar35.bridgeObject = (void *)0xea0000000000203a;
      SVar35.str = (char *)0x6e6f73616572202c;
      SVar39.bridgeObject = param_4;
      SVar39.str = pcVar21;
      Swift::String::append(SVar35,SVar39);
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar12);
      Swift::__print_unlocked
                (uVar33,unaff_x22 + 0x88,uVar27,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pcVar31 = *(code **)(lVar32 + 8);
      (*pcVar31)(uVar33,uVar27);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
      FUN_1000d4dd4(*(undefined8 *)(unaff_x22 + 0x88),uVar29);
      _swift_bridgeObjectRelease(uVar29);
      DVar12.unknown = (undefined *)(unaff_x22 + 0x10);
      FUN_100004594();
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar12);
      (**(code **)(lVar32 + 0x58))(pCVar15,uVar27);
      iVar9 = (int)pCVar15;
      if ((iVar9 == iVar2) || (iVar9 == iVar1)) {
        IVar18 = *(ID *)(unaff_x22 + 0x170);
        lVar24 = *(long *)(unaff_x22 + 0x158);
        lVar32 = *(long *)(unaff_x22 + 0xe8);
        objc_stub::lock(IVar18);
        cVar4 = *(char *)(lVar32 + lVar24);
        objc_stub::unlock(IVar18);
        if (cVar4 != '\x01') {
          lVar24 = *(long *)(unaff_x22 + 0xe8) + *(long *)(unaff_x22 + 0x160);
          uVar29 = *(undefined8 *)(lVar24 + 0x18);
          lVar32 = *(long *)(lVar24 + 0x20);
          FUN_100004640(lVar24,uVar29);
          (**(code **)(lVar32 + 0x18))(uVar29,lVar32);
          *(undefined8 *)(unaff_x22 + 0x188) = uVar29;
          lVar24 = 0;
          FUN_100385b74();
          _swift_allocObject();
          *(long *)(unaff_x22 + 400) = lVar24;
          FUN_1000d4ca4(0);
          _swift_allocObject();
          DVar12.unknown = (undefined *)0x725065676e616843;
          FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
          *(undefined **)(lVar24 + 0x10) = DVar12.unknown;
          *(undefined8 *)(lVar24 + 0x18) = uVar29;
          pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                              (DVar12);
          objc_stub::ownerName((ID)pCVar14);
          SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          DVar12.unknown = SVar34.bridgeObject;
          SVar35 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar34 == SVar35) {
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            _swift_bridgeObjectRelease();
          }
          else {
            bVar8 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar34.str,(_StringGuts)DVar12.unknown,
                               (_StringComparisonResult)(__int8)SVar35.str);
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            _swift_bridgeObjectRelease();
            if (!bVar8) {
              uVar10 = *(ulong *)(unaff_x22 + 0xd8);
              pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                                  (DVar12);
              *(CKRecordZoneID **)(unaff_x22 + 0x1a8) = pCVar14;
              plVar19 = (long *)0x50;
              _swift_task_alloc();
              *(long **)(unaff_x22 + 0x1b0) = plVar19;
              *plVar19 = unaff_x22;
              plVar19[1] = (long)FUN_10039a094;
              FUN_100388514(*(undefined8 *)(unaff_x22 + 0xd0),uVar10 & 0xcfffffffffffffff,pCVar14);
              return;
            }
          }
          uVar10 = *(ulong *)(unaff_x22 + 0xd8);
          pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                              (DVar12);
          *(CKRecordZoneID **)(unaff_x22 + 0x198) = pCVar14;
          plVar19 = (long *)0x50;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1a0) = plVar19;
          *plVar19 = unaff_x22;
          plVar19[1] = (long)FUN_100399670;
          FUN_100388e34(*(undefined8 *)(unaff_x22 + 0xd0),uVar10 & 0xcfffffffffffffff,pCVar14);
          return;
        }
        lVar32 = *(long *)(unaff_x22 + 0x130);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
        FUN_1000d468c(unaff_x22 + 0x60);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x78);
        param_4 = *(void **)(unaff_x22 + 0x80);
        lVar24 = unaff_x22 + 0x60;
        FUN_100004640(lVar24,uVar29);
        FUN_1000d4dd4(0xd000000000000040,0x8000000100da45e0,uVar29,param_4,lVar24);
        (**(code **)(lVar32 + 8))(uVar27,uVar26);
        FUN_100004594(unaff_x22 + 0x60);
      }
      else if (iVar9 == *(int *)(unaff_x22 + 0x1c4)) {
        uVar3 = *(undefined4 *)(unaff_x22 + 0x1c8);
        self = *(ID *)(unaff_x22 + 0x170);
        lVar25 = *(long *)(unaff_x22 + 0x158);
        lVar24 = *(long *)(unaff_x22 + 0x130);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar32 = *(long *)(unaff_x22 + 0xe8);
        pSVar16 = CloudKit::CKSyncEngine::get_state(*(CKSyncEngine **)(unaff_x22 + 0xe0),pCVar15);
        DVar12.unknown = &DAT_100fc1b80;
        FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
        PVar7 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
        lVar30 = *(long *)(CONCAT71(extraout_var_01,PVar7.value) + -8);
        uVar10 = (ulong)*(byte *)(lVar30 + 0x50);
        uVar11 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
        _swift_allocObject(DVar12.unknown,uVar11 + *(long *)(lVar30 + 0x48),uVar10 | 7);
        *(undefined8 *)(DVar12.unknown + 0x18) = 2;
        *(undefined8 *)(DVar12.unknown + 0x10) = 1;
        pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                            (DVar12);
        puVar17 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        IVar18 = objc_stub::initWithZoneID_((ID)puVar17,pCVar14);
        *(ID *)(DVar12.unknown + uVar11) = IVar18;
        (**(code **)(lVar30 + 0x68))
                  (DVar12.unknown + uVar11,uVar3,CONCAT71(extraout_var_01,PVar7.value));
        CloudKit::CKSyncEngine::State::add(pSVar16,DVar12.unknown);
        _swift_release(DVar12.unknown);
        _swift_release(pSVar16);
        objc_stub::lock(self);
        *(undefined1 *)(lVar32 + lVar25) = 1;
        objc_stub::unlock(self);
        (**(code **)(lVar24 + 8))(uVar29,uVar27);
        param_4 = pvVar23;
      }
      else {
        lVar24 = *(long *)(unaff_x22 + 0x130);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x108);
        FUN_1000d468c(unaff_x22 + 0x38);
        puVar17 = *(undefined **)(unaff_x22 + 0x50);
        param_4 = *(void **)(unaff_x22 + 0x58);
        _Var20.unknown = puVar17;
        FUN_100004640(unaff_x22 + 0x38);
        *(undefined8 *)(unaff_x22 + 0xb8) = 0;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var20);
        DVar12.unknown = *(undefined **)(unaff_x22 + 0xc0);
        _swift_bridgeObjectRelease();
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000002e;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100da4590;
        pCVar14 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                            (DVar12);
        objc_stub::zoneName((ID)pCVar14);
        SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar36.bridgeObject = pvVar23;
        SVar36.str = pcVar22;
        Swift::String::append(SVar34,SVar36);
        _swift_bridgeObjectRelease(SVar34.bridgeObject);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
        FUN_1000d4df0(*(undefined8 *)(unaff_x22 + 0xa8),uVar27,puVar17);
        _swift_bridgeObjectRelease(uVar27);
        (**(code **)(lVar24 + 8))(uVar29,uVar26);
        FUN_100004594(unaff_x22 + 0x38);
        (*pcVar31)(uVar28,uVar33);
      }
      uVar10 = *(long *)(unaff_x22 + 0x180) + 1;
    } while (uVar10 != *(ulong *)(unaff_x22 + 0x150));
  }
  _swift_bridgeObjectRelease();
  uVar29 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar33);
                    /* WARNING: Could not recover jumptable at 0x000100399454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100399670 | FUN_100399670 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100399670(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  PendingDatabaseChange PVar7;
  bool bVar8;
  int iVar9;
  State *pSVar10;
  undefined7 extraout_var;
  CKRecordZoneID *pCVar11;
  undefined *puVar12;
  ID IVar13;
  ulong uVar14;
  Deletion DVar15;
  long lVar16;
  long *plVar17;
  _StringGuts _Var18;
  undefined8 uVar19;
  undefined8 uVar20;
  char *pcVar21;
  char *pcVar22;
  void *pvVar23;
  void *pvVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  code *pcVar30;
  CKSyncEngine *pCVar31;
  undefined8 uVar32;
  ID self;
  long *unaff_x22;
  long lVar33;
  undefined8 uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  
  lVar37 = *unaff_x22;
  uVar3 = *(undefined4 *)(lVar37 + 0x1c8);
  pCVar31 = *(CKSyncEngine **)(lVar37 + 0xe0);
  lVar25 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar37 + 0x1a0));
  pSVar10 = CloudKit::CKSyncEngine::get_state(pCVar31,(CKSyncEngine *)0x0);
  DVar15.unknown = &DAT_100fc1b80;
  FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
  PVar7 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
  lVar16 = CONCAT71(extraout_var,PVar7.value);
  lVar36 = *(long *)(lVar16 + -8);
  uVar29 = (ulong)*(byte *)(lVar36 + 0x50);
  uVar38 = uVar29 + 0x20 & (uVar29 ^ 0xffffffffffffffff);
  _swift_allocObject(DVar15.unknown,uVar38 + *(long *)(lVar36 + 0x48),uVar29 | 7);
  *(undefined8 *)(DVar15.unknown + 0x18) = 2;
  *(undefined8 *)(DVar15.unknown + 0x10) = 1;
  pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar15);
  puVar12 = &_OBJC_CLASS___CKRecordZone;
  _objc_allocWithZone();
  IVar13 = objc_stub::initWithZoneID_((ID)puVar12,pCVar11);
  *(ID *)(DVar15.unknown + uVar38) = IVar13;
  pcVar26 = *(code **)(lVar36 + 0x68);
  (*pcVar26)(DVar15.unknown + uVar38,uVar3,lVar16);
  CloudKit::CKSyncEngine::State::add(pSVar10,DVar15.unknown);
  _swift_release(DVar15.unknown);
  _swift_release(pSVar10);
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar29 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    uVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar29 == 0) {
    _swift_bridgeObjectRelease(param_1.unknown);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    *(undefined **)(lVar37 + 200) = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003077f8(0,uVar29 & ((long)uVar29 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar29 < 0) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x10039a094);
      (*pcVar26)();
    }
    uVar35 = 0;
    puVar12 = *(undefined **)(lVar37 + 200);
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x1003998ac);
          (*pcVar26)();
        }
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x1003998b0);
          (*pcVar26)();
        }
        uVar14 = *(ulong *)(param_1.unknown + uVar35 * 8 + 0x20);
      }
      else {
        uVar14 = uVar35;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar35,param_1);
      }
      uVar3 = *(undefined4 *)(lVar37 + 0x1cc);
      lVar36 = *(long *)(lVar37 + 0xf8);
      puVar2 = *(ulong **)(lVar37 + 0x100);
      uVar19 = *(undefined8 *)(lVar37 + 0xf0);
      *puVar2 = uVar14;
      (**(code **)(lVar36 + 0x68))(puVar2,uVar3,uVar19);
      *(undefined **)(lVar37 + 200) = puVar12;
      uVar14 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar14) {
        FUN_1003077f8(1 < *(ulong *)(puVar12 + 0x18),uVar14 + 1,1);
        puVar12 = *(undefined **)(lVar37 + 200);
      }
      lVar36 = *(long *)(lVar37 + 0xf8);
      uVar19 = *(undefined8 *)(lVar37 + 0x100);
      uVar20 = *(undefined8 *)(lVar37 + 0xf0);
      uVar35 = uVar35 + 1;
      *(ulong *)(puVar12 + 0x10) = uVar14 + 1;
      (**(code **)(lVar36 + 0x20))
                (puVar12 + *(long *)(lVar36 + 0x48) * uVar14 +
                           ((ulong)*(byte *)(lVar36 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar36 + 0x50) ^ 0xffffffffffffffff)),uVar19,uVar20);
    } while (uVar29 != uVar35);
    _swift_bridgeObjectRelease(param_1.unknown);
  }
  FUN_1003aa368(puVar12);
  _swift_bridgeObjectRelease(puVar12);
  uVar19 = *(undefined8 *)(lVar37 + 400);
  lVar36 = *(long *)(lVar37 + 0x130);
  uVar20 = *(undefined8 *)(lVar37 + 0x138);
  uVar34 = *(undefined8 *)(lVar37 + 0x128);
  pvVar23 = (void *)0x0;
  FUN_100395ff8(0xd00000000000001c,0x8000000100da45c0,*(undefined8 *)(lVar37 + 0x188));
  _swift_release(uVar19);
  (**(code **)(lVar36 + 8))(uVar20,uVar34);
  uVar29 = *(long *)(lVar37 + 0x180) + 1;
  if (uVar29 != *(ulong *)(lVar37 + 0x150)) {
    do {
      *(ulong *)(lVar37 + 0x180) = uVar29;
      if (*(ulong *)(*(long *)(lVar37 + 0x148) + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x10039a090);
        (*pcVar26)();
      }
      iVar4 = *(int *)(lVar37 + 0x1c0);
      iVar5 = *(int *)(lVar37 + 0x1bc);
      uVar19 = *(undefined8 *)(lVar37 + 0x138);
      uVar34 = *(undefined8 *)(lVar37 + 0x140);
      pcVar21 = *(char **)(lVar37 + 0x128);
      lVar36 = *(long *)(lVar37 + 0x130);
      pCVar31 = *(CKSyncEngine **)(lVar37 + 0x118);
      uVar32 = *(undefined8 *)(lVar37 + 0x120);
      uVar20 = *(undefined8 *)(lVar37 + 0x108);
      lVar33 = *(long *)(lVar37 + 0x110);
      (**(code **)(lVar36 + 0x10))
                (uVar34,*(long *)(lVar37 + 0x148) +
                        ((ulong)*(byte *)(lVar37 + 0x1b8) + 0x20 &
                        ((ulong)*(byte *)(lVar37 + 0x1b8) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar36 + 0x48) * uVar29,pcVar21);
      (**(code **)(lVar36 + 0x20))(uVar19,uVar34);
      FUN_1000d468c(lVar37 + 0x10);
      pcVar22 = *(char **)(lVar37 + 0x28);
      pvVar24 = *(void **)(lVar37 + 0x30);
      _Var18.unknown = pcVar22;
      FUN_100004640(lVar37 + 0x10);
      *(undefined8 *)(lVar37 + 0x98) = 0;
      *(undefined8 *)(lVar37 + 0xa0) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x29,_Var18);
      *(undefined8 *)(lVar37 + 0x88) = *(undefined8 *)(lVar37 + 0x98);
      *(undefined8 *)(lVar37 + 0x90) = *(undefined8 *)(lVar37 + 0xa0);
      DVar15.unknown = (undefined *)0xd00000000000001b;
      SVar39.bridgeObject = (void *)0x8000000100da4570;
      SVar39.str = (char *)0xd00000000000001b;
      SVar42.bridgeObject = pvVar23;
      SVar42.str = pcVar21;
      Swift::String::append(SVar39,SVar42);
      pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar15);
      objc_stub::zoneName((ID)pCVar11);
      SVar39 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar43.bridgeObject = pvVar23;
      SVar43.str = pcVar21;
      Swift::String::append(SVar39,SVar43);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      DVar15.unknown = (undefined *)0x6e6f73616572202c;
      SVar40.bridgeObject = (void *)0xea0000000000203a;
      SVar40.str = (char *)0x6e6f73616572202c;
      SVar44.bridgeObject = pvVar23;
      SVar44.str = pcVar21;
      Swift::String::append(SVar40,SVar44);
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar15);
      Swift::__print_unlocked
                (uVar32,lVar37 + 0x88,uVar20,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pcVar30 = *(code **)(lVar33 + 8);
      (*pcVar30)(uVar32,uVar20);
      uVar19 = *(undefined8 *)(lVar37 + 0x90);
      FUN_1000d4dd4(*(undefined8 *)(lVar37 + 0x88),uVar19);
      _swift_bridgeObjectRelease(uVar19);
      DVar15.unknown = (undefined *)(lVar37 + 0x10);
      FUN_100004594();
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar15);
      (**(code **)(lVar33 + 0x58))(pCVar31,uVar20);
      iVar9 = (int)pCVar31;
      if ((iVar9 == iVar5) || (iVar9 == iVar4)) {
        IVar13 = *(ID *)(lVar37 + 0x170);
        lVar33 = *(long *)(lVar37 + 0x158);
        lVar36 = *(long *)(lVar37 + 0xe8);
        objc_stub::lock(IVar13);
        cVar6 = *(char *)(lVar36 + lVar33);
        objc_stub::unlock(IVar13);
        if (cVar6 != '\x01') {
          lVar16 = *(long *)(lVar37 + 0xe8) + *(long *)(lVar37 + 0x160);
          uVar19 = *(undefined8 *)(lVar16 + 0x18);
          lVar36 = *(long *)(lVar16 + 0x20);
          FUN_100004640(lVar16,uVar19);
          (**(code **)(lVar36 + 0x18))(uVar19,lVar36);
          *(undefined8 *)(lVar37 + 0x188) = uVar19;
          lVar16 = 0;
          FUN_100385b74();
          _swift_allocObject();
          *(long *)(lVar37 + 400) = lVar16;
          FUN_1000d4ca4(0);
          _swift_allocObject();
          DVar15.unknown = (undefined *)0x725065676e616843;
          FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
          *(undefined **)(lVar16 + 0x10) = DVar15.unknown;
          *(undefined8 *)(lVar16 + 0x18) = uVar19;
          pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                              (DVar15);
          objc_stub::ownerName((ID)pCVar11);
          SVar39 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          DVar15.unknown = SVar39.bridgeObject;
          SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar39 == SVar40) {
            _swift_bridgeObjectRelease(SVar40.bridgeObject);
            _swift_bridgeObjectRelease();
          }
          else {
            bVar8 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar39.str,(_StringGuts)DVar15.unknown,
                               (_StringComparisonResult)(__int8)SVar40.str);
            _swift_bridgeObjectRelease(SVar40.bridgeObject);
            _swift_bridgeObjectRelease();
            if (!bVar8) {
              uVar29 = *(ulong *)(lVar37 + 0xd8);
              pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                                  (DVar15);
              *(CKRecordZoneID **)(lVar37 + 0x1a8) = pCVar11;
              plVar17 = (long *)0x50;
              _swift_task_alloc();
              *(long **)(lVar37 + 0x1b0) = plVar17;
              *plVar17 = lVar25;
              plVar17[1] = (long)FUN_10039a094;
              FUN_100388514(*(undefined8 *)(lVar37 + 0xd0),uVar29 & 0xcfffffffffffffff,pCVar11);
              return;
            }
          }
          uVar29 = *(ulong *)(lVar37 + 0xd8);
          pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                              (DVar15);
          *(CKRecordZoneID **)(lVar37 + 0x198) = pCVar11;
          plVar17 = (long *)0x50;
          _swift_task_alloc();
          *(long **)(lVar37 + 0x1a0) = plVar17;
          *plVar17 = lVar25;
          plVar17[1] = (long)FUN_100399670;
          FUN_100388e34(*(undefined8 *)(lVar37 + 0xd0),uVar29 & 0xcfffffffffffffff,pCVar11);
          return;
        }
        lVar33 = *(long *)(lVar37 + 0x130);
        uVar20 = *(undefined8 *)(lVar37 + 0x138);
        uVar34 = *(undefined8 *)(lVar37 + 0x128);
        FUN_1000d468c(lVar37 + 0x60);
        uVar19 = *(undefined8 *)(lVar37 + 0x78);
        pvVar23 = *(void **)(lVar37 + 0x80);
        lVar36 = lVar37 + 0x60;
        FUN_100004640(lVar36,uVar19);
        FUN_1000d4dd4(0xd000000000000040,0x8000000100da45e0,uVar19,pvVar23,lVar36);
        (**(code **)(lVar33 + 8))(uVar20,uVar34);
        FUN_100004594(lVar37 + 0x60);
      }
      else if (iVar9 == *(int *)(lVar37 + 0x1c4)) {
        uVar3 = *(undefined4 *)(lVar37 + 0x1c8);
        self = *(ID *)(lVar37 + 0x170);
        lVar28 = *(long *)(lVar37 + 0x158);
        lVar36 = *(long *)(lVar37 + 0x130);
        uVar19 = *(undefined8 *)(lVar37 + 0x138);
        uVar20 = *(undefined8 *)(lVar37 + 0x128);
        lVar33 = *(long *)(lVar37 + 0xe8);
        pSVar10 = CloudKit::CKSyncEngine::get_state(*(CKSyncEngine **)(lVar37 + 0xe0),pCVar31);
        DVar15.unknown = &DAT_100fc1b80;
        FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
        _swift_allocObject();
        *(undefined8 *)(DVar15.unknown + 0x18) = 2;
        *(undefined8 *)(DVar15.unknown + 0x10) = 1;
        pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                            (DVar15);
        puVar12 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        IVar13 = objc_stub::initWithZoneID_((ID)puVar12,pCVar11);
        *(ID *)(DVar15.unknown + uVar38) = IVar13;
        (*pcVar26)(DVar15.unknown + uVar38,uVar3,lVar16);
        CloudKit::CKSyncEngine::State::add(pSVar10,DVar15.unknown);
        _swift_release(DVar15.unknown);
        _swift_release(pSVar10);
        objc_stub::lock(self);
        *(undefined1 *)(lVar33 + lVar28) = 1;
        objc_stub::unlock(self);
        (**(code **)(lVar36 + 8))(uVar19,uVar20);
        pvVar23 = pvVar24;
      }
      else {
        lVar36 = *(long *)(lVar37 + 0x130);
        uVar19 = *(undefined8 *)(lVar37 + 0x138);
        uVar27 = *(undefined8 *)(lVar37 + 0x128);
        uVar34 = *(undefined8 *)(lVar37 + 0x118);
        uVar32 = *(undefined8 *)(lVar37 + 0x108);
        FUN_1000d468c(lVar37 + 0x38);
        puVar12 = *(undefined **)(lVar37 + 0x50);
        pvVar23 = *(void **)(lVar37 + 0x58);
        _Var18.unknown = puVar12;
        FUN_100004640(lVar37 + 0x38);
        *(undefined8 *)(lVar37 + 0xb8) = 0;
        *(undefined8 *)(lVar37 + 0xc0) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var18);
        DVar15.unknown = *(undefined **)(lVar37 + 0xc0);
        _swift_bridgeObjectRelease();
        *(undefined8 *)(lVar37 + 0xa8) = 0xd00000000000002e;
        *(undefined8 *)(lVar37 + 0xb0) = 0x8000000100da4590;
        pCVar11 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                            (DVar15);
        objc_stub::zoneName((ID)pCVar11);
        SVar39 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar41.bridgeObject = pvVar24;
        SVar41.str = pcVar22;
        Swift::String::append(SVar39,SVar41);
        _swift_bridgeObjectRelease(SVar39.bridgeObject);
        uVar20 = *(undefined8 *)(lVar37 + 0xb0);
        FUN_1000d4df0(*(undefined8 *)(lVar37 + 0xa8),uVar20,puVar12);
        _swift_bridgeObjectRelease(uVar20);
        (**(code **)(lVar36 + 8))(uVar19,uVar27);
        FUN_100004594(lVar37 + 0x38);
        (*pcVar30)(uVar34,uVar32);
      }
      uVar29 = *(long *)(lVar37 + 0x180) + 1;
    } while (uVar29 != *(ulong *)(lVar37 + 0x150));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar37 + 0x148));
  uVar19 = *(undefined8 *)(lVar37 + 0x138);
  uVar20 = *(undefined8 *)(lVar37 + 0x118);
  uVar34 = *(undefined8 *)(lVar37 + 0x120);
  uVar32 = *(undefined8 *)(lVar37 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(lVar37 + 0x140));
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar32);
                    /* WARNING: Could not recover jumptable at 0x0001003999b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar25 + 8))();
  return;
}



/* Address: 0x10039a094 | FUN_10039a094 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039a094(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  PendingDatabaseChange PVar5;
  bool bVar6;
  int iVar7;
  Deletion DVar8;
  CKRecordZoneID *pCVar9;
  CKSyncEngine *pCVar10;
  State *pSVar11;
  undefined7 extraout_var;
  undefined *puVar12;
  ID IVar13;
  undefined8 uVar14;
  long *plVar15;
  _StringGuts _Var16;
  char *pcVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  code *pcVar29;
  long *unaff_x22;
  long lVar30;
  undefined8 uVar31;
  ID self;
  long lVar32;
  ulong uVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  
  lVar32 = *unaff_x22;
  lVar21 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar32 + 0x1b0));
  uVar14 = *(undefined8 *)(lVar32 + 400);
  lVar27 = *(long *)(lVar32 + 0x130);
  uVar23 = *(undefined8 *)(lVar32 + 0x138);
  uVar31 = *(undefined8 *)(lVar32 + 0x128);
  puVar19 = &DAT_00000001;
  FUN_100395ff8(0xd00000000000001c,0x8000000100da45c0,*(undefined8 *)(lVar32 + 0x188));
  _swift_release(uVar14);
  (**(code **)(lVar27 + 8))(uVar23,uVar31);
  uVar25 = *(long *)(lVar32 + 0x180) + 1;
  if (uVar25 != *(ulong *)(lVar32 + 0x150)) {
    do {
      *(ulong *)(lVar32 + 0x180) = uVar25;
      if (*(ulong *)(*(long *)(lVar32 + 0x148) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x10039a8b8);
        (*pcVar29)();
      }
      iVar1 = *(int *)(lVar32 + 0x1c0);
      iVar2 = *(int *)(lVar32 + 0x1bc);
      uVar14 = *(undefined8 *)(lVar32 + 0x138);
      uVar31 = *(undefined8 *)(lVar32 + 0x140);
      pcVar17 = *(char **)(lVar32 + 0x128);
      lVar27 = *(long *)(lVar32 + 0x130);
      pCVar10 = *(CKSyncEngine **)(lVar32 + 0x118);
      uVar28 = *(undefined8 *)(lVar32 + 0x120);
      uVar23 = *(undefined8 *)(lVar32 + 0x108);
      lVar30 = *(long *)(lVar32 + 0x110);
      (**(code **)(lVar27 + 0x10))
                (uVar31,*(long *)(lVar32 + 0x148) +
                        ((ulong)*(byte *)(lVar32 + 0x1b8) + 0x20 &
                        ((ulong)*(byte *)(lVar32 + 0x1b8) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar27 + 0x48) * uVar25,pcVar17);
      (**(code **)(lVar27 + 0x20))(uVar14,uVar31);
      FUN_1000d468c(lVar32 + 0x10);
      pcVar18 = *(char **)(lVar32 + 0x28);
      puVar20 = *(undefined1 **)(lVar32 + 0x30);
      _Var16.unknown = pcVar18;
      FUN_100004640(lVar32 + 0x10);
      *(undefined8 *)(lVar32 + 0x98) = 0;
      *(undefined8 *)(lVar32 + 0xa0) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x29,_Var16);
      *(undefined8 *)(lVar32 + 0x88) = *(undefined8 *)(lVar32 + 0x98);
      *(undefined8 *)(lVar32 + 0x90) = *(undefined8 *)(lVar32 + 0xa0);
      DVar8.unknown = (undefined *)0xd00000000000001b;
      SVar34.bridgeObject = (void *)0x8000000100da4570;
      SVar34.str = (char *)0xd00000000000001b;
      SVar37.bridgeObject = puVar19;
      SVar37.str = pcVar17;
      Swift::String::append(SVar34,SVar37);
      pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar8);
      objc_stub::zoneName((ID)pCVar9);
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar38.bridgeObject = puVar19;
      SVar38.str = pcVar17;
      Swift::String::append(SVar34,SVar38);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      DVar8.unknown = (undefined *)0x6e6f73616572202c;
      SVar35.bridgeObject = (void *)0xea0000000000203a;
      SVar35.str = (char *)0x6e6f73616572202c;
      SVar39.bridgeObject = puVar19;
      SVar39.str = pcVar17;
      Swift::String::append(SVar35,SVar39);
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar8);
      Swift::__print_unlocked
                (uVar28,lVar32 + 0x88,uVar23,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pcVar29 = *(code **)(lVar30 + 8);
      (*pcVar29)(uVar28,uVar23);
      uVar14 = *(undefined8 *)(lVar32 + 0x90);
      FUN_1000d4dd4(*(undefined8 *)(lVar32 + 0x88),uVar14);
      _swift_bridgeObjectRelease(uVar14);
      DVar8.unknown = (undefined *)(lVar32 + 0x10);
      FUN_100004594();
      (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_reason(DVar8);
      (**(code **)(lVar30 + 0x58))(pCVar10,uVar23);
      iVar7 = (int)pCVar10;
      if ((iVar7 == iVar2) || (iVar7 == iVar1)) {
        IVar13 = *(ID *)(lVar32 + 0x170);
        lVar30 = *(long *)(lVar32 + 0x158);
        lVar27 = *(long *)(lVar32 + 0xe8);
        objc_stub::lock(IVar13);
        cVar4 = *(char *)(lVar27 + lVar30);
        objc_stub::unlock(IVar13);
        if (cVar4 != '\x01') {
          lVar27 = *(long *)(lVar32 + 0xe8) + *(long *)(lVar32 + 0x160);
          uVar14 = *(undefined8 *)(lVar27 + 0x18);
          lVar30 = *(long *)(lVar27 + 0x20);
          FUN_100004640(lVar27,uVar14);
          (**(code **)(lVar30 + 0x18))(uVar14,lVar30);
          *(undefined8 *)(lVar32 + 0x188) = uVar14;
          lVar27 = 0;
          FUN_100385b74();
          _swift_allocObject();
          *(long *)(lVar32 + 400) = lVar27;
          FUN_1000d4ca4(0);
          _swift_allocObject();
          DVar8.unknown = (undefined *)0x725065676e616843;
          FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
          *(undefined **)(lVar27 + 0x10) = DVar8.unknown;
          *(undefined8 *)(lVar27 + 0x18) = uVar14;
          pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                             (DVar8);
          objc_stub::ownerName((ID)pCVar9);
          SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          DVar8.unknown = SVar34.bridgeObject;
          SVar35 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar34 == SVar35) {
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            _swift_bridgeObjectRelease();
          }
          else {
            bVar6 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar34.str,(_StringGuts)DVar8.unknown,
                               (_StringComparisonResult)(__int8)SVar35.str);
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            _swift_bridgeObjectRelease();
            if (!bVar6) {
              uVar25 = *(ulong *)(lVar32 + 0xd8);
              pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                                 (DVar8);
              *(CKRecordZoneID **)(lVar32 + 0x1a8) = pCVar9;
              plVar15 = (long *)0x50;
              _swift_task_alloc();
              *(long **)(lVar32 + 0x1b0) = plVar15;
              *plVar15 = lVar21;
              plVar15[1] = (long)FUN_10039a094;
              FUN_100388514(*(undefined8 *)(lVar32 + 0xd0),uVar25 & 0xcfffffffffffffff,pCVar9);
              return;
            }
          }
          uVar25 = *(ulong *)(lVar32 + 0xd8);
          pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID
                             (DVar8);
          *(CKRecordZoneID **)(lVar32 + 0x198) = pCVar9;
          plVar15 = (long *)0x50;
          _swift_task_alloc();
          *(long **)(lVar32 + 0x1a0) = plVar15;
          *plVar15 = lVar21;
          plVar15[1] = (long)FUN_100399670;
          FUN_100388e34(*(undefined8 *)(lVar32 + 0xd0),uVar25 & 0xcfffffffffffffff,pCVar9);
          return;
        }
        lVar30 = *(long *)(lVar32 + 0x130);
        uVar23 = *(undefined8 *)(lVar32 + 0x138);
        uVar31 = *(undefined8 *)(lVar32 + 0x128);
        FUN_1000d468c(lVar32 + 0x60);
        uVar14 = *(undefined8 *)(lVar32 + 0x78);
        puVar19 = *(undefined1 **)(lVar32 + 0x80);
        lVar27 = lVar32 + 0x60;
        FUN_100004640(lVar27,uVar14);
        FUN_1000d4dd4(0xd000000000000040,0x8000000100da45e0,uVar14,puVar19,lVar27);
        (**(code **)(lVar30 + 8))(uVar23,uVar31);
        FUN_100004594(lVar32 + 0x60);
      }
      else if (iVar7 == *(int *)(lVar32 + 0x1c4)) {
        uVar3 = *(undefined4 *)(lVar32 + 0x1c8);
        self = *(ID *)(lVar32 + 0x170);
        lVar24 = *(long *)(lVar32 + 0x158);
        lVar27 = *(long *)(lVar32 + 0x130);
        uVar14 = *(undefined8 *)(lVar32 + 0x138);
        uVar23 = *(undefined8 *)(lVar32 + 0x128);
        lVar30 = *(long *)(lVar32 + 0xe8);
        pSVar11 = CloudKit::CKSyncEngine::get_state(*(CKSyncEngine **)(lVar32 + 0xe0),pCVar10);
        DVar8.unknown = &DAT_100fc1b80;
        FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
        PVar5 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
        lVar26 = *(long *)(CONCAT71(extraout_var,PVar5.value) + -8);
        uVar25 = (ulong)*(byte *)(lVar26 + 0x50);
        uVar33 = uVar25 + 0x20 & (uVar25 ^ 0xffffffffffffffff);
        _swift_allocObject(DVar8.unknown,uVar33 + *(long *)(lVar26 + 0x48),uVar25 | 7);
        *(undefined8 *)(DVar8.unknown + 0x18) = 2;
        *(undefined8 *)(DVar8.unknown + 0x10) = 1;
        pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar8);
        puVar12 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        IVar13 = objc_stub::initWithZoneID_((ID)puVar12,pCVar9);
        *(ID *)(DVar8.unknown + uVar33) = IVar13;
        (**(code **)(lVar26 + 0x68))
                  (DVar8.unknown + uVar33,uVar3,CONCAT71(extraout_var,PVar5.value));
        CloudKit::CKSyncEngine::State::add(pSVar11,DVar8.unknown);
        _swift_release(DVar8.unknown);
        _swift_release(pSVar11);
        objc_stub::lock(self);
        *(undefined1 *)(lVar30 + lVar24) = 1;
        objc_stub::unlock(self);
        (**(code **)(lVar27 + 8))(uVar14,uVar23);
        puVar19 = puVar20;
      }
      else {
        lVar27 = *(long *)(lVar32 + 0x130);
        uVar14 = *(undefined8 *)(lVar32 + 0x138);
        uVar31 = *(undefined8 *)(lVar32 + 0x128);
        uVar28 = *(undefined8 *)(lVar32 + 0x118);
        uVar22 = *(undefined8 *)(lVar32 + 0x108);
        FUN_1000d468c(lVar32 + 0x38);
        puVar12 = *(undefined **)(lVar32 + 0x50);
        puVar19 = *(undefined1 **)(lVar32 + 0x58);
        _Var16.unknown = puVar12;
        FUN_100004640(lVar32 + 0x38);
        *(undefined8 *)(lVar32 + 0xb8) = 0;
        *(undefined8 *)(lVar32 + 0xc0) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var16);
        DVar8.unknown = *(undefined **)(lVar32 + 0xc0);
        _swift_bridgeObjectRelease();
        *(undefined8 *)(lVar32 + 0xa8) = 0xd00000000000002e;
        *(undefined8 *)(lVar32 + 0xb0) = 0x8000000100da4590;
        pCVar9 = (extension_CloudKit)::__C::CKDatabase::DatabaseChange::Deletion::get_zoneID(DVar8);
        objc_stub::zoneName((ID)pCVar9);
        SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar36.bridgeObject = puVar20;
        SVar36.str = pcVar18;
        Swift::String::append(SVar34,SVar36);
        _swift_bridgeObjectRelease(SVar34.bridgeObject);
        uVar23 = *(undefined8 *)(lVar32 + 0xb0);
        FUN_1000d4df0(*(undefined8 *)(lVar32 + 0xa8),uVar23,puVar12);
        _swift_bridgeObjectRelease(uVar23);
        (**(code **)(lVar27 + 8))(uVar14,uVar31);
        FUN_100004594(lVar32 + 0x38);
        (*pcVar29)(uVar28,uVar22);
      }
      uVar25 = *(long *)(lVar32 + 0x180) + 1;
    } while (uVar25 != *(ulong *)(lVar32 + 0x150));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar32 + 0x148));
  uVar14 = *(undefined8 *)(lVar32 + 0x138);
  uVar23 = *(undefined8 *)(lVar32 + 0x118);
  uVar31 = *(undefined8 *)(lVar32 + 0x120);
  uVar28 = *(undefined8 *)(lVar32 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(lVar32 + 0x140));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar28);
                    /* WARNING: Could not recover jumptable at 0x00010039a1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar21 + 8))();
  return;
}



/* Address: 0x10039a8b8 | FUN_10039a8b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039a8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  undefined4 uVar2;
  PendingRecordZoneChange PVar3;
  ScheduledTaskType SVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined7 extraout_var_00;
  ulong uVar7;
  Deletion DVar8;
  undefined *puVar9;
  Modification MVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  FetchedRecordZoneChanges FVar14;
  Modification MVar15;
  CKRecord *this;
  Deletion DVar16;
  CKRecord *pCVar17;
  __int64 _Var18;
  undefined *puVar19;
  undefined *puVar20;
  ContiguousArray CVar21;
  _StringGuts _Var22;
  Modification recordID;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long unaff_x20;
  ContiguousArray CVar28;
  long *plVar29;
  long unaff_x22;
  code *pcVar30;
  long lVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  long lVar6;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(long *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  PVar3 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xa8) = CONCAT71(extraout_var,PVar3.value);
  lVar23 = *(long *)(CONCAT71(extraout_var,PVar3.value) + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar23;
  uVar5 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  SVar4 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar6 = CONCAT71(extraout_var_00,SVar4.value);
  *(long *)(unaff_x22 + 0xc0) = lVar6;
  lVar24 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 200) = lVar24;
  uVar5 = *(long *)(lVar24 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  DVar8 = (extension_CloudKit)::__C::CKDatabase::RecordZoneChange::Deletion::typeMetadataAccessor();
  lVar25 = *(long *)(DVar8.unknown + -8);
  puVar9 = (undefined *)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xe0) = puVar9;
  MVar10 = (extension_CloudKit)::__C::CKDatabase::RecordZoneChange::Modification::
           typeMetadataAccessor();
  lVar26 = *(long *)(MVar10.unknown + -8);
  puVar11 = (undefined *)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xe8) = puVar11;
  lVar23 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  uVar12 = *(undefined8 *)(lVar23 + 0x18);
  lVar13 = *(long *)(lVar23 + 0x20);
  FUN_100004640(lVar23,uVar12);
  (**(code **)(lVar13 + 0x18))(uVar12,lVar13);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar12;
  lVar13 = 0;
  FUN_100385b74();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0xf8) = lVar13;
  FUN_1000d4ca4(0);
  recordID.unknown = (CKRecordID *)0x7;
  _swift_allocObject();
  FVar14.unknown = (undefined *)0x725065676e616843;
  CVar21.unknown = (undefined *)0xef726f737365636f;
  FUN_1000d4624();
  *(undefined **)(lVar13 + 0x10) = FVar14.unknown;
  *(undefined8 *)(lVar13 + 0x18) = uVar12;
  CloudKit::CKSyncEngine::Event::FetchedRecordZoneChanges::get_modifications(FVar14);
  puVar27 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar23 = *(long *)(FVar14.unknown + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease();
    puVar27 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    Swift::ContiguousArray::_reserveCapacity(lVar23,CVar21);
    puVar19 = FVar14.unknown +
              ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff));
    lVar31 = *(long *)(lVar26 + 0x48);
    pcVar30 = *(code **)(lVar26 + 0x10);
    do {
      MVar15.unknown = puVar11;
      recordID = MVar10;
      (*pcVar30)(puVar11,puVar19);
      CVar21.unknown =
           (extension_CloudKit)::__C::CKDatabase::RecordZoneChange::Modification::get_record(MVar15)
      ;
      CVar28.unknown = puVar11;
      MVar15 = MVar10;
      (**(code **)(lVar26 + 8))();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar28);
                    /* WARNING: Load size is inaccurate */
      CVar28.unknown = puVar27[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                ((__int64)CVar28.unknown,(ContiguousArray)MVar15.unknown);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
      Swift::ContiguousArray::__endMutation(CVar28);
      puVar19 = puVar19 + lVar31;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    _swift_bridgeObjectRelease();
  }
  *(undefined **)(unaff_x22 + 0x100) = puVar27;
  CloudKit::CKSyncEngine::Event::FetchedRecordZoneChanges::get_deletions(FVar14);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar23 = *(long *)(FVar14.unknown + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease(FVar14.unknown);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    Swift::ContiguousArray::_reserveCapacity(lVar23,CVar21);
    this = (CKRecord *)0x0;
    FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
    puVar19 = FVar14.unknown +
              ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff));
    lVar26 = *(long *)(lVar25 + 0x48);
    pcVar30 = *(code **)(lVar25 + 0x10);
    do {
      DVar16.unknown = puVar9;
      (*pcVar30)(puVar9,puVar19,DVar8.unknown);
      SVar32 = (extension_CloudKit)::__C::CKDatabase::RecordZoneChange::Deletion::get_recordType
                         (DVar16);
      recordID.unknown =
           (extension_CloudKit)::__C::CKDatabase::RecordZoneChange::Deletion::get_recordID
                     ((Deletion)SVar32.str);
      pCVar17 = (extension_CloudKit)::__C::CKRecord::__allocating_init
                          (this,SVar32,(CKRecordID *)recordID.unknown);
      CVar21.unknown = puVar9;
      DVar16 = DVar8;
      (**(code **)(lVar25 + 8))();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar21);
                    /* WARNING: Load size is inaccurate */
      CVar21.unknown = puVar11[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                ((__int64)CVar21.unknown,(ContiguousArray)DVar16.unknown);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar21.unknown,pCVar17);
      Swift::ContiguousArray::__endMutation(CVar21);
      puVar19 = puVar19 + lVar26;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    _swift_bridgeObjectRelease(FVar14.unknown);
  }
  *(undefined **)(unaff_x22 + 0x108) = puVar11;
  if ((ulong)puVar27 >> 0x3e == 0) {
    lVar23 = *(long *)((undefined *)((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
    if (((ulong)puVar27 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar27;
    }
    lVar23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar23 == 0) {
    if ((ulong)puVar11 >> 0x3e == 0) {
      lVar23 = *(long *)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar11) {
        _Var1.unknown = puVar11;
      }
      lVar23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar23 == 0) goto LAB_10039adfc;
  }
  FUN_1000d468c(unaff_x22 + 0x10);
  puVar9 = *(undefined **)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
  _Var22.unknown = puVar9;
  FUN_100004640(unaff_x22 + 0x10);
  Swift::_StringGuts::grow(0x33,_Var22);
  SVar32.bridgeObject = (void *)0x8000000100da4630;
  SVar32.str = (char *)0xd000000000000015;
  SVar35.bridgeObject = param_4;
  SVar35.str = recordID.unknown;
  Swift::String::append(SVar32,SVar35);
  if ((ulong)puVar27 >> 0x3e == 0) {
    _Var18 = *(__int64 *)((undefined *)((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
    if (((ulong)puVar27 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar27;
    }
    _Var18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  *(__int64 *)(unaff_x22 + 0x78) = _Var18;
  SVar32 = Swift::CustomStringConvertible::get_description();
  SVar36.bridgeObject = param_4;
  SVar36.str = recordID.unknown;
  Swift::String::append(SVar32,SVar36);
  _swift_bridgeObjectRelease(SVar32.bridgeObject);
  SVar33.bridgeObject = (void *)0x8000000100da4650;
  SVar33.str = (char *)0xd000000000000010;
  SVar37.bridgeObject = param_4;
  SVar37.str = recordID.unknown;
  Swift::String::append(SVar33,SVar37);
  if ((ulong)puVar11 >> 0x3e == 0) {
    _Var18 = *(__int64 *)((undefined *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      _Var1.unknown = puVar11;
    }
    _Var18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  *(__int64 *)(unaff_x22 + 0x80) = _Var18;
  SVar32 = Swift::CustomStringConvertible::get_description();
  SVar38.bridgeObject = param_4;
  SVar38.str = recordID.unknown;
  Swift::String::append(SVar32,SVar38);
  _swift_bridgeObjectRelease(SVar32.bridgeObject);
  SVar34.bridgeObject = (void *)0xea0000000000736e;
  SVar34.str = (char *)0x6f6974656c656420;
  SVar39.bridgeObject = param_4;
  SVar39.str = recordID.unknown;
  Swift::String::append(SVar34,SVar39);
  FUN_1000d4db8(0,0xe000000000000000,puVar9,uVar12);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(unaff_x22 + 0x10);
LAB_10039adfc:
  puVar9 = &DAT_100ecdf48;
  _swift_allocObject(&DAT_100ecdf48,0x18,7);
  *(undefined **)(unaff_x22 + 0x110) = puVar9;
  *(undefined **)(puVar9 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar19 = &DAT_100ecdf70;
  _swift_allocObject(&DAT_100ecdf70,0x18,7);
  _swift_weakInit(puVar19 + 0x10,lVar13);
  puVar20 = &DAT_100ecdf98;
  _swift_allocObject(&DAT_100ecdf98,0x30,7);
  *(undefined **)(unaff_x22 + 0x118) = puVar20;
  *(undefined **)(puVar20 + 0x10) = puVar19;
  *(undefined **)(puVar20 + 0x18) = puVar11;
  *(undefined **)(puVar20 + 0x20) = puVar27;
  *(undefined **)(puVar20 + 0x28) = puVar9;
  uVar2 = *(undefined4 *)
           PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
  ;
  *(undefined4 *)(unaff_x22 + 0x160) = uVar2;
  pcVar30 = *(code **)(lVar24 + 0x68);
  *(code **)(unaff_x22 + 0x120) = pcVar30;
  (*pcVar30)(uVar5,uVar2,lVar6);
  plVar29 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_bridgeObjectRetain(puVar11);
  _swift_bridgeObjectRetain(puVar27);
  _swift_retain(puVar9);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar29;
  *plVar29 = unaff_x22;
  plVar29[1] = (long)FUN_10039af50;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar29);
  return;
}



/* Address: 0x10039af50 | FUN_10039af50 */

void FUN_10039af50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x128));
  uVar4 = *(undefined8 *)(lVar5 + 0x118);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar4);
    return;
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x90);
  uVar2 = *(undefined8 *)(lVar5 + 0x98);
  pcVar3 = *(code **)(*(long *)(lVar5 + 200) + 8);
  *(code **)(lVar5 + 0x130) = pcVar3;
  (*pcVar3)(*(undefined8 *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0xc0));
  _swift_release(uVar4);
  FUN_1000da368();
  *(undefined8 *)(lVar5 + 0x138) = uVar1;
  *(undefined8 *)(lVar5 + 0x140) = uVar2;
  _swift_task_switch(FUN_10039affc,uVar1,uVar2);
  return;
}



/* Address: 0x10039affc | FUN_10039affc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039affc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  
  pcVar12 = *(code **)(unaff_x22 + 0x120);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar2 = *(long *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x60,0,0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(lVar2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_release(lVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar10);
  puVar4 = &DAT_100ecdfc0;
  _swift_allocObject(&DAT_100ecdfc0,0x18,7);
  _swift_weakInit(puVar4 + 0x10,uVar11);
  puVar5 = &DAT_100ecdfe8;
  _swift_allocObject(&DAT_100ecdfe8,0x20,7);
  *(undefined **)(unaff_x22 + 0x150) = puVar5;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  (*pcVar12)(uVar9,uVar3,uVar8);
  plVar6 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x158) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10039b13c;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar6);
  return;
}



/* Address: 0x10039b13c | FUN_10039b13c */

void FUN_10039b13c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  uVar1 = *(undefined8 *)(lVar2 + 0x150);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar1);
    return;
  }
  (**(code **)(lVar2 + 0x130))(*(undefined8 *)(lVar2 + 0xd0),*(undefined8 *)(lVar2 + 0xc0));
  _swift_release(uVar1);
  _swift_task_switch(FUN_10039b1c8,*(undefined8 *)(lVar2 + 0x138),*(undefined8 *)(lVar2 + 0x140));
  return;
}



/* Address: 0x10039b1c8 | FUN_10039b1c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039b1c8(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  __int64 _Var7;
  ulong uVar8;
  _StringGuts _Var9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  long unaff_x22;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  
  uVar17 = *(ulong *)(unaff_x22 + 0x148);
  pcVar10 = *(char **)(unaff_x22 + 0xf0);
  puVar13 = &DAT_00000001;
  FUN_100395ff8(0xd00000000000001e,0x8000000100da4670);
  uVar18 = uVar17 >> 0x3e;
  if (uVar18 == 0) {
    lVar6 = *(long *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)(uVar17 & 0xffffffffffffff8);
    if ((uVar17 & 0x8000000000000000) != 0) {
      _Var1.unknown = *(undefined **)(unaff_x22 + 0x148);
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 == 0) {
    puVar15 = *(undefined **)(unaff_x22 + 0x148);
    goto LAB_10039b4a0;
  }
  FUN_1000d468c(unaff_x22 + 0x38);
  puVar15 = *(undefined **)(unaff_x22 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  _Var9.unknown = puVar15;
  FUN_100004640(unaff_x22 + 0x38);
  Swift::_StringGuts::grow(0x36,_Var9);
  SVar21.bridgeObject = (void *)0x8000000100da4690;
  SVar21.str = (char *)0xd000000000000015;
  SVar23.bridgeObject = puVar13;
  SVar23.str = pcVar10;
  Swift::String::append(SVar21,SVar23);
  if (uVar18 == 0) {
    _Var7 = *(__int64 *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)(uVar17 & 0xffffffffffffff8);
    if ((uVar17 & 0x8000000000000000) != 0) {
      _Var1.unknown = *(undefined **)(unaff_x22 + 0x148);
    }
    _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  *(__int64 *)(unaff_x22 + 0x88) = _Var7;
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar24.bridgeObject = puVar13;
  SVar24.str = pcVar10;
  Swift::String::append(SVar21,SVar24);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0x8000000100da46b0;
  SVar22.str = (char *)0xd00000000000001f;
  SVar25.bridgeObject = puVar13;
  SVar25.str = pcVar10;
  Swift::String::append(SVar22,SVar25);
  FUN_1000d4db8(0,0xe000000000000000,puVar15,uVar11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(unaff_x22 + 0x38);
  if (uVar18 == 0) {
    uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    if (uVar18 == 0) goto LAB_10039b464;
LAB_10039b344:
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003077f8(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10039b514);
      (*pcVar5)();
    }
    uVar16 = 0;
    lVar6 = *(long *)(unaff_x22 + 0x148);
    lVar19 = *(long *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined4 *)
             PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
    ;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(lVar6 + 0x20 + uVar16 * 8);
      }
      else {
        uVar8 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath
                  (uVar16,(_ArrayBuffer)*(undefined **)(unaff_x22 + 0x148));
      }
      puVar14 = *(ulong **)(unaff_x22 + 0xb8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar14 = uVar8;
      (**(code **)(lVar19 + 0x68))(puVar14,uVar4,uVar11);
      uVar8 = *(ulong *)(puVar15 + 0x10);
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar8) {
        FUN_1003077f8(1 < *(ulong *)(puVar15 + 0x18),uVar8 + 1,1);
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar15 + 0x10) = uVar8 + 1;
      (**(code **)(lVar19 + 0x20))
                (puVar15 + *(long *)(lVar19 + 0x48) * uVar8 +
                           ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)),uVar11,uVar12);
    } while (uVar18 != uVar16);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x148));
  }
  else {
    _Var1.unknown = (undefined *)(uVar17 & 0xffffffffffffff8);
    if ((uVar17 & 0x8000000000000000) != 0) {
      _Var1.unknown = *(undefined **)(unaff_x22 + 0x148);
    }
    uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (uVar18 != 0) goto LAB_10039b344;
LAB_10039b464:
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x148));
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  FUN_1003aa368(puVar15);
LAB_10039b4a0:
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_bridgeObjectRelease(puVar15);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010039b50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10039b514 | FUN_10039b514 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10039b514(undefined8 param_1,CKSyncEngine *param_2,char *param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  void *pvVar3;
  code *pcVar4;
  SentRecordZoneChanges SVar5;
  undefined **ppuVar6;
  char *pcVar7;
  SentRecordZoneChanges SVar8;
  ID self;
  undefined *puVar9;
  CKSyncEngine *pCVar10;
  void *pvVar11;
  CKSyncEngine *pCVar12;
  State *pSVar13;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  long unaff_x20;
  __int64 _Var19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined **local_f0;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  CKSyncEngine *local_88;
  CKSyncEngine *local_80;
  undefined *local_78;
  String local_70;
  _StringGuts _Var14;
  
  SVar5 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::typeMetadataAccessor();
  lVar15 = *(long *)(SVar5.unknown + -8);
  lVar24 = *(long *)(lVar15 + 0x40);
  SVar8 = SVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)&local_f0 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined *)0x2;
  if (param_2 != *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) ||
      *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) ==
      (CKSyncEngine *)0x0) {
    puVar9 = (undefined *)0x3;
  }
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_deletedRecordIDs(SVar8);
  if ((ulong)SVar8.unknown >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)SVar8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = SVar8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar8.unknown) {
      _Var1.unknown = SVar8.unknown;
    }
    puVar18 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease();
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_savedRecords(SVar8);
  if ((ulong)SVar8.unknown >> 0x3e == 0) {
    _Var19 = *(long *)(((ulong)SVar8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = SVar8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar8.unknown) {
      _Var1.unknown = SVar8.unknown;
    }
    _Var19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease();
  if (_Var19 == 0) {
    CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_failedRecordSaves(SVar8);
    lVar21 = *(long *)(SVar8.unknown + 0x10);
    _swift_bridgeObjectRelease();
    if ((lVar21 == 0) && ((long)puVar18 < 1)) goto LAB_10039b7fc;
  }
  FUN_1000d468c(&local_b0);
  ppuVar6 = &local_b0;
  _Var14.unknown = local_98;
  FUN_100004640();
  local_70.str = (char *)0x0;
  local_70.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x1f,_Var14);
  SVar25.bridgeObject = (void *)0x8000000100da48d0;
  SVar25.str = (char *)0xd000000000000011;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar25,SVar30);
  pcVar7 = (char *)0x0;
  local_78 = puVar9;
  FUN_1002fbb6c();
  puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_78,&local_70,pcVar7,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar27.bridgeObject = &SUB_e200000000000000;
  SVar27.str = (char *)0x203a;
  SVar8.unknown = (undefined *)0x203a;
  SVar31.bridgeObject = puVar9;
  SVar31.str = pcVar7;
  Swift::String::append(SVar27,SVar31);
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_savedRecords(SVar8);
  local_f0 = ppuVar6;
  if ((ulong)SVar8.unknown >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)SVar8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = SVar8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar8.unknown) {
      _Var1.unknown = SVar8.unknown;
    }
    puVar20 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease();
  local_78 = puVar20;
  SVar25 = Swift::CustomStringConvertible::get_description();
  SVar32.bridgeObject = puVar9;
  SVar32.str = pcVar7;
  Swift::String::append(SVar25,SVar32);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar26.bridgeObject = &DAT_e800000000000000;
  SVar26.str = (char *)0x202c646576617320;
  _Var14.unknown = &DAT_e800000000000000;
  SVar33.bridgeObject = puVar9;
  SVar33.str = pcVar7;
  Swift::String::append(SVar26,SVar33);
  SVar25 = local_70;
  pvVar11 = local_70.bridgeObject;
  local_70.str = (char *)0x0;
  local_70.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var14);
  pvVar3 = local_70.bridgeObject;
  local_78 = puVar18;
  SVar27 = Swift::CustomStringConvertible::get_description();
  _swift_bridgeObjectRelease(pvVar3);
  SVar8.unknown = (undefined *)0x646574656c656420;
  SVar28.bridgeObject = (void *)0xea0000000000202c;
  SVar28.str = (char *)0x646574656c656420;
  SVar34.bridgeObject = puVar9;
  SVar34.str = pcVar7;
  local_70 = SVar27;
  Swift::String::append(SVar28,SVar34);
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_failedRecordSaves(SVar8);
  puVar18 = *(undefined **)(SVar8.unknown + 0x10);
  _swift_bridgeObjectRelease();
  local_78 = puVar18;
  SVar27 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = puVar9;
  SVar35.str = pcVar7;
  Swift::String::append(SVar27,SVar35);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar29.bridgeObject = &DAT_e700000000000000;
  SVar29.str = (char *)0x64656c69616620;
  SVar36.bridgeObject = puVar9;
  SVar36.str = pcVar7;
  Swift::String::append(SVar29,SVar36);
  SVar27 = local_70;
  pvVar3 = local_70.bridgeObject;
  local_70 = SVar25;
  _swift_bridgeObjectRetain(pvVar11);
  SVar37.bridgeObject = puVar9;
  SVar37.str = pcVar7;
  Swift::String::append(SVar27,SVar37);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_bridgeObjectRelease(pvVar3);
  pvVar11 = local_70.bridgeObject;
  FUN_1000d4db8(local_70.str,local_70.bridgeObject,local_98,local_90);
  _swift_bridgeObjectRelease(pvVar11);
  FUN_100004594(&local_b0);
LAB_10039b7fc:
  lVar21 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar21 + 0x18);
  lVar2 = *(long *)(lVar21 + 0x20);
  FUN_100004640(lVar21,self);
  (**(code **)(lVar2 + 0x18))(self,lVar2);
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_70.str = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_80 = (CKSyncEngine *)PTR___swiftEmptyArrayStorage_100eae0d8;
  (**(code **)(lVar15 + 0x10))(lVar16,param_1,SVar5.unknown);
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar22 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  uVar23 = lVar24 + uVar22 + 7 & 0xfffffffffffffff8;
  puVar9 = &DAT_100ece010;
  _swift_allocObject(&DAT_100ece010,uVar23 + 0x28,uVar17 | 7);
  (**(code **)(lVar15 + 0x20))(puVar9 + uVar22,lVar16,SVar5.unknown);
  *(ID *)(puVar9 + uVar23) = self;
  *(long *)(puVar9 + uVar23 + 8) = unaff_x20;
  *(String **)(puVar9 + uVar23 + 0x10) = &local_70;
  *(CKSyncEngine ***)(puVar9 + uVar23 + 0x18) = &local_80;
  *(undefined ***)(puVar9 + uVar23 + 0x20) = &local_78;
  pCVar10 = (CKSyncEngine *)&DAT_100ece038;
  _swift_allocObject(&DAT_100ece038,0x20,7);
  *(code **)(pCVar10 + 0x10) = FUN_1003a25dc;
  *(undefined **)(pCVar10 + 0x18) = puVar9;
  local_90 = thunk_FUN_100209b34;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000d5218;
  local_98 = &DAT_100ece050;
  local_88 = pCVar10;
  pvVar11 = __Block_copy(&local_b0);
  pCVar12 = local_88;
  _swift_retain(unaff_x20);
  _swift_retain(pCVar10);
  _swift_release(pCVar12);
  objc_stub::performBlockAndWait_(self,pvVar11);
  __Block_release(pvVar11);
  pCVar12 = pCVar10;
  _swift_isEscapingClosureAtFileLocation(pCVar10,"",0x99,0x157,0x20,1);
  _swift_release();
  if (((ulong)pCVar12 & 1) == 0) {
    if (*(long *)(local_80 + 0x10) != 0) {
      pSVar13 = CloudKit::CKSyncEngine::get_state(param_2,pCVar10);
      pCVar10 = local_80;
      _swift_bridgeObjectRetain(local_80);
      CloudKit::CKSyncEngine::State::add(pSVar13);
      _swift_release(pSVar13);
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(local_70.str + 0x10) != 0) {
      pSVar13 = CloudKit::CKSyncEngine::get_state(param_2,pCVar10);
      pCVar10 = (CKSyncEngine *)local_70.str;
      _swift_bridgeObjectRetain(local_70.str);
      CloudKit::CKSyncEngine::State::add(pSVar13);
      _swift_release(pSVar13);
      _swift_bridgeObjectRelease();
    }
    if (*(long *)(local_78 + 0x10) != 0) {
      pSVar13 = CloudKit::CKSyncEngine::get_state(param_2,pCVar10);
      puVar18 = local_78;
      _swift_bridgeObjectRetain(local_78);
      CloudKit::CKSyncEngine::State::remove(pSVar13);
      _swift_release(pSVar13);
      _swift_bridgeObjectRelease(puVar18);
    }
    FUN_100395ff8(0xd00000000000001b,0x8000000100da48f0,self,0);
    _swift_bridgeObjectRelease(local_80);
    _swift_bridgeObjectRelease(local_78);
    pcVar7 = local_70.str;
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(pcVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10039bb54);
  (*pcVar4)();
}



/* Address: 0x10039bb78 | FUN_10039bb78 */

void FUN_10039bb78(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  Published *pPVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar9;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  local_80 = param_1;
  local_88 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_98 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc2280;
  local_a0 = lVar8;
  FUN_1000037f0(&DAT_100fc2280,&DAT_100c440a8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12_00;
  lVar4 = 0;
  FUN_1003b2fc0();
  lVar15 = *(long *)(lVar4 + -8);
  local_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = _TtC9PasteCore10SyncEngine::activeSyncScopes;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore10SyncEngine::activeSyncScopes,auStack_78,0x21,0);
  FUN_100370ab0(local_80);
  _swift_endAccess(auStack_78);
  if (*(long *)(*(long *)(unaff_x20 + lVar4) + 0x10) != 0) {
    return;
  }
  puVar3 = &DAT_100c44060;
  local_c0 = lVar8;
  local_b8 = lVar13;
  local_b0 = lVar14 - extraout_x12_03;
  local_80 = lVar15;
  _swift_getKeyPath(&DAT_100c44060);
  DVar5.unknown = &DAT_100c44088;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(lVar14);
  _swift_release(puVar3);
  _swift_release();
  lVar15 = local_a0;
  Foundation::Date::get_now(DVar5);
  FUN_10006313c(lVar14,lVar11);
  lVar13 = local_a8;
  lVar6 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,local_a8);
  lVar2 = local_98;
  lVar8 = local_b0;
  lVar4 = local_b8;
  uVar1 = 1 << (ulong)((uint)lVar6 & 0x1f);
  if ((uVar1 & 3) == 0) {
    if ((uVar1 & 0xc) == 0) {
      (**(code **)(local_98 + 8))(lVar15,local_88);
      FUN_1000629fc(lVar14);
      lVar11 = local_80;
      (**(code **)(local_80 + 0x38))(lVar9,1,1,lVar13);
      pcVar12 = *(code **)(lVar11 + 0x30);
      goto LAB_10039bf0c;
    }
  }
  else {
    FUN_1000629fc(lVar11);
  }
  lVar8 = local_90;
  FUN_1000629fc(lVar14);
  lVar11 = local_80;
  lVar4 = local_c0;
  pcVar10 = *(code **)(local_80 + 0x38);
  (*pcVar10)(local_c0,1,1,lVar13);
  FUN_1003a2654(lVar4,lVar8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar8;
  (*pcVar12)(lVar8,1,lVar13);
  puVar3 = local_88;
  if ((int)lVar4 == 1) {
    (**(code **)(lVar2 + 0x20))(lVar9,lVar15,local_88);
    (**(code **)(lVar2 + 0x38))(lVar9,0,1,puVar3);
    _swift_storeEnumTagMultiPayload(lVar9,lVar13,0);
    lVar4 = lVar8;
    (*pcVar12)(lVar8,1,lVar13);
    if ((int)lVar4 != 1) {
      FUN_1003a26a4(lVar8);
    }
  }
  else {
    (**(code **)(lVar2 + 8))(lVar15,local_88);
    FUN_1003a26ec(lVar8,lVar9);
  }
  (*pcVar10)(lVar9,0,1,lVar13);
  lVar4 = local_b8;
  lVar8 = local_b0;
LAB_10039bf0c:
  lVar11 = lVar9;
  (*pcVar12)(lVar9,1,lVar13);
  if ((int)lVar11 == 1) {
    FUN_1003a26a4(lVar9);
  }
  else {
    FUN_1003a26ec(lVar9,lVar8);
    pPVar7 = (Published *)&DAT_100c44060;
    _swift_getKeyPath(&DAT_100c44060);
    _swift_getKeyPath(&DAT_100c44088);
    FUN_10006313c(lVar8,lVar4);
    _swift_retain();
    Combine::Published::_set_subscript(pPVar7,lVar4);
    FUN_1003b2054();
    FUN_1000629fc(lVar8);
  }
  return;
}



/* Address: 0x10039bfb4 | FUN_10039bfb4 */

void FUN_10039bfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  Published *pPVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_58 [8];
  
  lVar1 = 0;
  local_88 = param_3;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)puVar9 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/SyncEngine+Delegate.swift",0x23,1,local_88,UVar4.unknown,puVar3);
  }
  _swift_beginAccess(param_1 + _TtC9PasteCore10SyncEngine::activeSyncScopes,auStack_78,0x21,0);
  FUN_10036a20c(auStack_58,param_2);
  _swift_endAccess(auStack_78);
  _swift_storeEnumTagMultiPayload(lVar8,lVar1,2);
  puVar6 = &DAT_100c44060;
  _swift_getKeyPath(&DAT_100c44060);
  pPVar7 = (Published *)&DAT_100c44088;
  _swift_getKeyPath(&DAT_100c44088);
  FUN_10006313c(lVar8,puVar9);
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar7,puVar9,param_1,puVar6,pPVar7);
  FUN_1003b2054();
  FUN_1000629fc(lVar8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10039c178 | FUN_10039c178 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10039c178(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID self;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,self);
  (**(code **)(lVar2 + 0x18))(self,lVar2);
  puVar4 = &DAT_100ece088;
  _swift_allocObject(&DAT_100ece088,0x18,7);
  *(ID *)(puVar4 + 0x10) = self;
  puVar5 = &DAT_100ece0b0;
  _swift_allocObject(&DAT_100ece0b0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003a2730;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_60 = thunk_FUN_100209b34;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ece0c8;
  local_58 = puVar5;
  aBlock = __Block_copy(&local_80);
  puVar6 = local_58;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x99,300,0x20,1);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100395ff8(0xd00000000000001f,0x8000000100da4a40,self,1);
    _swift_release(puVar4);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10039c30c);
  (*pcVar3)();
}



/* Address: 0x10039c30c | FUN_10039c30c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039c30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  CKSyncEngine *param_5)

{
  ulong uVar1;
  code *pcVar2;
  Scope SVar3;
  PendingRecordZoneChange PVar4;
  bool bVar5;
  undefined7 extraout_var;
  ulong uVar6;
  SendChangesOptions SVar7;
  ulong uVar8;
  undefined7 extraout_var_00;
  CKSyncEngine *pCVar9;
  State *this;
  SendChangesContext SVar10;
  SendChangesOptions SVar11;
  undefined *puVar12;
  ID self;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  void *pvVar16;
  _StringGuts _Var17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long unaff_x20;
  State *pSVar24;
  long unaff_x22;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  SVar3 = CloudKit::CKSyncEngine::SendChangesOptions::Scope::typeMetadataAccessor();
  lVar19 = *(long *)(CONCAT71(extraout_var,SVar3.value) + -8);
  uVar6 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar6;
  SVar7 = CloudKit::CKSyncEngine::SendChangesOptions::typeMetadataAccessor();
  lVar20 = *(long *)(SVar7.unknown + -8);
  uVar8 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar8;
  PVar4 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var_00,PVar4.value);
  lVar23 = *(long *)(lVar13 + -8);
  pCVar9 = (CKSyncEngine *)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0xc0) = pCVar9;
  uVar26 = 2;
  if (param_5 != *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) ||
      *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) ==
      (CKSyncEngine *)0x0) {
    uVar26 = 3;
  }
  this = CloudKit::CKSyncEngine::get_state(param_5,pCVar9);
  pSVar24 = this;
  CloudKit::CKSyncEngine::State::get_pendingRecordZoneChanges(this,this);
  _swift_release(pSVar24);
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar21 = *(ulong *)(this + 0x10);
  if (uVar21 != 0) {
    uVar28 = 0;
    do {
      if (*(ulong *)(this + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10039c8f8);
        (*pcVar2)();
      }
      uVar22 = (ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff);
      lVar27 = *(long *)(lVar23 + 0x48);
      SVar10.unknown = pCVar9;
      (**(code **)(lVar23 + 0x10))(pCVar9,this + lVar27 * uVar28 + uVar22,lVar13);
      SVar11 = CloudKit::CKSyncEngine::SendChangesContext::get_options(SVar10);
      CloudKit::CKSyncEngine::SendChangesOptions::get_scope(SVar11);
      SVar11 = SVar7;
      (**(code **)(lVar20 + 8))(uVar8);
      bVar5 = CloudKit::CKSyncEngine::SendChangesOptions::Scope::contains
                        ((PendingRecordZoneChange)(__int8)pCVar9,(Scope)(__int8)SVar11.unknown);
      (**(code **)(lVar19 + 8))(uVar6,CONCAT71(extraout_var,SVar3.value));
      if (bVar5) {
        puVar12 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar12 & 1) == 0) {
          FUN_1003077f8(0,*(long *)(puVar15 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar15 + 0x10);
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
          FUN_1003077f8(1 < *(ulong *)(puVar15 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar15 + 0x10) = uVar1 + 1;
        (**(code **)(lVar23 + 0x20))(puVar15 + uVar1 * lVar27 + uVar22,pCVar9,lVar13);
      }
      else {
        (**(code **)(lVar23 + 8))(pCVar9,lVar13);
      }
      uVar28 = uVar28 + 1;
    } while (uVar21 != uVar28);
  }
  _swift_bridgeObjectRelease();
  lVar13 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar13 + 0x18);
  lVar19 = *(long *)(lVar13 + 0x20);
  FUN_100004640(lVar13,self);
  (**(code **)(lVar19 + 0x18))(self,lVar19);
  *(ID *)(unaff_x22 + 200) = self;
  objc_stub::FUN_100c0a9e0(self,0);
  *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  lVar13 = 0;
  FUN_100385b74();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0xd0) = lVar13;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar14 = 0x725065676e616843;
  FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
  *(undefined8 *)(lVar13 + 0x10) = uVar14;
  *(ID *)(lVar13 + 0x18) = self;
  FUN_100389d04();
  puVar12 = &DAT_100ecdde0;
  _swift_allocObject(&DAT_100ecdde0,0x58,7);
  *(undefined **)(unaff_x22 + 0xd8) = puVar12;
  *(undefined **)(puVar12 + 0x10) = puVar15;
  *(ID *)(puVar12 + 0x18) = self;
  *(long *)(puVar12 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar12 + 0x28) = uVar26;
  *(long *)(puVar12 + 0x30) = lVar13;
  *(undefined8 *)(puVar12 + 0x38) = uVar14;
  *(long **)(puVar12 + 0x40) = (long *)(unaff_x22 + 0x90);
  *(long *)(puVar12 + 0x48) = unaff_x22 + 0x88;
  *(CKSyncEngine **)(puVar12 + 0x50) = param_5;
  puVar15 = &DAT_100ecde08;
  _swift_allocObject(&DAT_100ecde08,0x20,7);
  *(code **)(puVar15 + 0x10) = FUN_1003a22ec;
  *(undefined **)(puVar15 + 0x18) = puVar12;
  *(code **)(unaff_x22 + 0x50) = FUN_100209b34;
  *(undefined **)(unaff_x22 + 0x58) = puVar15;
  *(undefined **)(unaff_x22 + 0x30) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0x42000000;
  *(code **)(unaff_x22 + 0x40) = FUN_1000d5218;
  *(undefined **)(unaff_x22 + 0x48) = &DAT_100ecde20;
  pvVar16 = __Block_copy((void *)(unaff_x22 + 0x30));
  uVar26 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_retain(unaff_x20);
  _swift_retain(lVar13);
  _swift_retain(param_5);
  _swift_retain(puVar15);
  _swift_release(uVar26);
  objc_stub::performBlockAndWait_(self,pvVar16);
  __Block_release(pvVar16);
  pcVar18 = (char *)0x99;
  pvVar16 = (void *)0x5e;
  puVar12 = puVar15;
  _swift_isEscapingClosureAtFileLocation(puVar15,"",0x99,0x5e,0x22,1);
  _swift_release(puVar15);
  if (((ulong)puVar12 & 1) == 0) {
    if (0 < *(long *)(unaff_x22 + 0x90)) {
      FUN_1000d468c(unaff_x22 + 0x60);
      puVar15 = *(undefined **)(unaff_x22 + 0x78);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x80);
      _Var17.unknown = puVar15;
      FUN_100004640(unaff_x22 + 0x60);
      Swift::_StringGuts::grow(0x40,_Var17);
      SVar29.bridgeObject = (void *)0x8000000100da4340;
      SVar29.str = (char *)0xd000000000000015;
      SVar31.bridgeObject = pvVar16;
      SVar31.str = pcVar18;
      Swift::String::append(SVar29,SVar31);
      *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x90);
      SVar29 = Swift::CustomStringConvertible::get_description();
      SVar32.bridgeObject = pvVar16;
      SVar32.str = pcVar18;
      Swift::String::append(SVar29,SVar32);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      SVar30.bridgeObject = (void *)0x8000000100da4360;
      SVar30.str = (char *)0xd000000000000029;
      SVar33.bridgeObject = pvVar16;
      SVar33.str = pcVar18;
      Swift::String::append(SVar30,SVar33);
      FUN_1000d4db8(0,0xe000000000000000,puVar15,uVar26);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(unaff_x22 + 0x60);
    }
    uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
    *(ID *)(unaff_x22 + 0x20) = self;
    *(long *)(unaff_x22 + 0x28) = unaff_x20;
    plVar25 = (long *)(ulong)*(uint *)(PTR__init_100ea92b0 + 4);
    _swift_bridgeObjectRetain(uVar26);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar25;
    *plVar25 = unaff_x22;
    plVar25[1] = (long)FUN_10039c8fc;
    CloudKit::CKSyncEngine::RecordZoneChangeBatch::_init
              (param_1,uVar26,&DAT_100c43fc8,unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10039c8fc);
  (*pcVar2)();
}



/* Address: 0x10039c8fc | FUN_10039c8fc */

void FUN_10039c8fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  uVar2 = *(undefined8 *)(lVar3 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xe0));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10039c95c,uVar1,uVar2);
  return;
}



/* Address: 0x10039c95c | FUN_10039c95c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10039c95c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010039c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10039c9d4 | FUN_10039c9d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039c9d4(long param_1,CKSyncEngine *param_2,long param_3,void *param_4,undefined *param_5,
                  void *param_6,long *param_7,ulong *param_8,CKSyncEngine *param_9)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  code *pcVar4;
  PendingRecordZoneChange PVar5;
  undefined7 extraout_var;
  char *pcVar7;
  State *pSVar8;
  ID *pIVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  CKSyncEngine *self;
  CKSyncEngine *pCVar13;
  CKSyncEngine *pCVar14;
  void *pvVar15;
  void *pvVar16;
  _StringGuts _Var17;
  long extraout_x8;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  void *pvVar19;
  ID IVar20;
  CKSyncEngine *pCVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ID *pIVar25;
  code *pcVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  ID local_250;
  void *local_248;
  long local_240;
  long *local_238;
  void *local_230;
  char *local_228;
  undefined *local_220;
  void *local_218;
  CKSyncEngine *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  CKSyncEngine *local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  ID *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  void *local_180;
  ulong *local_178;
  CKSyncEngine *local_170;
  long local_168;
  ulong local_160;
  ID local_158;
  long local_150;
  int local_144;
  long local_140;
  code *local_138;
  long local_130;
  ulong local_120;
  void *local_118;
  undefined *local_110 [2];
  CKSyncEngine *local_100;
  undefined *local_f8;
  void *local_f0;
  long lVar6;
  
  local_248 = param_6;
  local_238 = param_7;
  local_220 = param_5;
  local_180 = param_4;
  local_178 = param_8;
  local_170 = param_2;
  PVar5 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,PVar5.value);
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar18 = (long)&local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_188 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12;
  local_190 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_00;
  local_240 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar25 = (ID *)(lVar18 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = (long)pIVar25 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar18 - extraout_x12_03;
  local_130 = *(long *)(param_1 + 0x10);
  if (local_130 != 0) {
    local_210 = (CKSyncEngine *)0x0;
    local_208 = *(undefined8 *)(param_3 + _TtC9PasteCore10SyncEngine::logger);
    local_1e8 = (ulong)*(byte *)(lVar23 + 0x50);
    local_160 = local_1e8 + 0x20 & (local_1e8 ^ 0xffffffffffffffff);
    param_1 = param_1 + local_160;
    local_1b8 = 0x8000000100da2b30;
    local_1f0 = param_9;
    local_250 = *(ID *)(local_220 + 0x18);
    local_1c0 = 0x8000000100da2b50;
    local_140 = *(long *)(lVar23 + 0x48);
    local_138 = *(code **)(lVar23 + 0x10);
    local_1c8 = 0x8000000100da2b70;
    local_144 = *(int *)
                 PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
    ;
    local_1cc = *(int *)
                 PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_deleteRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92c0
    ;
    local_218 = (void *)0x8000000100da43e0;
    local_228 = "[SYNC:SEND] REMOVE ";
    local_230 = (void *)0x8000000100da4430;
    uStack_1d8 = 6;
    local_1e0 = 3;
    uStack_1f8 = 2;
    local_200 = 1;
    local_1b0 = lVar24;
    local_1a8 = pIVar25;
    local_1a0 = lVar23;
    local_198 = lVar6;
    local_168 = lVar18;
    do {
      pcVar4 = local_138;
      (*local_138)(lVar24,param_1,lVar6);
      pcVar26 = *(code **)(lVar23 + 0x20);
      (*pcVar26)(lVar18,lVar24,lVar6);
      (*pcVar4)(pIVar25,lVar18,lVar6);
      pIVar9 = pIVar25;
      (**(code **)(lVar23 + 0x58))(pIVar25,lVar6);
      if ((int)pIVar9 != local_144) {
        if ((int)pIVar9 == local_1cc) {
          pcVar4 = *(code **)(lVar23 + 8);
          (*pcVar4)(pIVar25,lVar6);
          (*local_138)(local_190,lVar18,lVar6);
          puVar3 = local_178;
          pvVar19 = (void *)*local_178;
          pvVar15 = pvVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar3 = (ulong)pvVar19;
          pvVar16 = pvVar19;
          if (((ulong)pvVar15 & 1) == 0) {
            pvVar16 = (void *)0x0;
            FUN_100380498(0,*(long *)((long)pvVar19 + 0x10) + 1,1);
            *local_178 = (ulong)pvVar16;
            param_4 = pvVar19;
          }
          uVar2 = *(ulong *)((long)pvVar16 + 0x10);
          pvVar15 = pvVar16;
          if (*(ulong *)((long)pvVar16 + 0x18) >> 1 <= uVar2) {
            pvVar15 = (void *)(ulong)(1 < *(ulong *)((long)pvVar16 + 0x18));
            FUN_100380498(pvVar15,uVar2 + 1,1);
            *local_178 = (ulong)pvVar15;
            param_4 = pvVar16;
          }
          lVar22 = local_140;
          *(ulong *)((long)pvVar15 + 0x10) = uVar2 + 1;
          (*pcVar26)((long)pvVar15 + uVar2 * local_140 + local_160,local_190,lVar6);
          lVar18 = local_168;
          (*pcVar4)(local_168,lVar6);
        }
        else {
          (*local_138)(local_188,lVar18,lVar6);
          puVar3 = local_178;
          pvVar19 = (void *)*local_178;
          pvVar15 = pvVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar3 = (ulong)pvVar19;
          pvVar16 = pvVar19;
          if (((ulong)pvVar15 & 1) == 0) {
            pvVar16 = (void *)0x0;
            FUN_100380498(0,*(long *)((long)pvVar19 + 0x10) + 1,1);
            *local_178 = (ulong)pvVar16;
            param_4 = pvVar19;
          }
          uVar2 = *(ulong *)((long)pvVar16 + 0x10);
          pvVar15 = pvVar16;
          if (*(ulong *)((long)pvVar16 + 0x18) >> 1 <= uVar2) {
            pvVar15 = (void *)(ulong)(1 < *(ulong *)((long)pvVar16 + 0x18));
            FUN_100380498(pvVar15,uVar2 + 1,1);
            *local_178 = (ulong)pvVar15;
            param_4 = pvVar16;
          }
          lVar22 = local_140;
          *(ulong *)((long)pvVar15 + 0x10) = uVar2 + 1;
          (*pcVar26)((long)pvVar15 + uVar2 * local_140 + local_160,local_188,lVar6);
          pcVar4 = *(code **)(lVar23 + 8);
          (*pcVar4)(lVar18,lVar6);
          (*pcVar4)(pIVar25,lVar6);
        }
        goto LAB_10039ce54;
      }
      local_150 = param_1;
      (**(code **)(lVar23 + 0x60))(pIVar25,lVar6);
      IVar20 = *pIVar25;
      FUN_10038fef4(0);
      objc_stub::recordName(IVar20);
      SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      local_158 = IVar20;
      IVar20 = objc_stub::zoneID(IVar20);
      puVar10 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = uStack_1d8;
      *(undefined8 *)(puVar10 + 0x10) = local_1e0;
      *(undefined8 *)(puVar10 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(puVar10 + 0x28) = local_1b8;
      *(String *)(puVar10 + 0x30) = SVar28;
      *(undefined8 *)(puVar10 + 0x40) = 0xd000000000000010;
      *(undefined8 *)(puVar10 + 0x48) = local_1c0;
      _swift_bridgeObjectRetain(SVar28.bridgeObject);
      objc_stub::zoneName(IVar20);
      SVar29 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar10 + 0x50) = SVar29;
      *(undefined8 *)(puVar10 + 0x60) = 0xd000000000000015;
      *(undefined8 *)(puVar10 + 0x68) = local_1c8;
      objc_stub::ownerName(IVar20);
      SVar29 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar10 + 0x70) = SVar29;
      puVar11 = puVar10;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar10);
      puVar12 = &DAT_100fbef70;
      FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
      _swift_arrayDestroy(puVar10 + 0x20,3,puVar12);
      puVar10 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      self = (CKSyncEngine *)local_110;
      pCVar21 = local_170;
      local_110[0] = puVar11;
      local_f8 = puVar10;
      FUN_100328974(self,0);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      FUN_100004594(local_110);
      pCVar13 = self;
      FUN_100395b70(self,local_180);
      lVar22 = local_140;
      IVar20 = local_158;
      lVar18 = local_168;
      lVar6 = local_198;
      lVar23 = local_1a0;
      pIVar25 = local_1a8;
      pCVar14 = local_210;
      uVar1 = (uint)pCVar13 & 0xff;
      if (uVar1 < 3) {
        if (((ulong)pCVar13 & 0xff) == 0) {
          if (self == (CKSyncEngine *)0x0) {
            (**(code **)(local_1a0 + 8))(local_168,local_198);
          }
          else {
            local_f8 = local_220;
            local_f0 = local_248;
            local_100 = self;
            (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
            local_210 = pCVar14;
            if ((local_120 & 1) != 0) {
              (*local_138)(local_240,lVar18,lVar6);
              puVar3 = local_178;
              pvVar19 = (void *)*local_178;
              pvVar15 = pvVar19;
              _swift_isUniquelyReferenced_nonNull_native();
              param_1 = local_150;
              pIVar25 = local_1a8;
              *puVar3 = (ulong)pvVar19;
              pvVar16 = pvVar19;
              if (((ulong)pvVar15 & 1) == 0) {
                pvVar16 = (void *)0x0;
                FUN_100380498(0,*(long *)((long)pvVar19 + 0x10) + 1,1);
                *local_178 = (ulong)pvVar16;
                param_4 = pvVar19;
              }
              uVar2 = *(ulong *)((long)pvVar16 + 0x10);
              pvVar15 = pvVar16;
              if (*(ulong *)((long)pvVar16 + 0x18) >> 1 <= uVar2) {
                pvVar15 = (void *)(ulong)(1 < *(ulong *)((long)pvVar16 + 0x18));
                FUN_100380498(pvVar15,uVar2 + 1,1);
                *local_178 = (ulong)pvVar15;
                param_4 = pvVar16;
              }
              lVar22 = local_140;
              *(ulong *)((long)pvVar15 + 0x10) = uVar2 + 1;
              (*pcVar26)((long)pvVar15 + uVar2 * local_140 + local_160,local_240,lVar6);
              (**(code **)(lVar23 + 8))(lVar18,lVar6);
              lVar24 = local_1b0;
              goto LAB_10039ce54;
            }
            (**(code **)(lVar23 + 8))(lVar18,lVar6);
          }
          if (SCARRY8(*local_238,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10039da10);
            (*pcVar4)();
          }
          *local_238 = *local_238 + 1;
          param_1 = local_150;
          lVar24 = local_1b0;
          pIVar25 = local_1a8;
        }
        else {
          if (uVar1 != 1) {
            FUN_1000d468c(local_110);
            pvVar16 = local_f0;
            puVar10 = local_f8;
            _Var17.unknown = local_f8;
            FUN_100004640(local_110);
            local_120 = 0;
            local_118 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x1e,_Var17);
            _swift_bridgeObjectRelease(local_118);
            local_120 = 0xd000000000000013;
            local_118 = local_230;
            objc_stub::recordName(local_158);
            SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar29.bridgeObject = param_4;
            SVar29.str = (char *)pCVar21;
            Swift::String::append(SVar28,SVar29);
            _swift_bridgeObjectRelease(SVar28.bridgeObject);
            SVar28.bridgeObject = (void *)0xe900000000000064;
            SVar28.str = (char *)0x656e616870726f20;
            SVar38.bridgeObject = param_4;
            SVar38.str = (char *)pCVar21;
            Swift::String::append(SVar28,SVar38);
            pvVar15 = local_118;
            FUN_1000d4df0(local_120,local_118,puVar10);
            _swift_bridgeObjectRelease(pvVar15);
            FUN_100004594(local_110);
            pIVar25 = local_1a8;
            param_4 = pvVar16;
            if (self != (CKSyncEngine *)0x0) {
              IVar20 = objc_stub::managedObjectContext((ID)self);
              objc_stub::deleteObject_(IVar20,self);
              param_4 = pvVar16;
            }
            pCVar14 = local_210;
            pCVar13 = local_170;
            FUN_100395d98(local_170,0);
            lVar22 = local_140;
            lVar18 = local_168;
            lVar6 = local_198;
            lVar23 = local_1a0;
            pCVar21 = pCVar14;
            if (pCVar14 != (CKSyncEngine *)0x0) {
              _swift_errorRelease();
              pCVar21 = (CKSyncEngine *)0x0;
              pCVar13 = pCVar14;
            }
            local_210 = pCVar21;
            pSVar8 = CloudKit::CKSyncEngine::get_state(local_1f0,pCVar13);
            puVar10 = &DAT_100fbe618;
            FUN_1000037f0(&DAT_100fbe618,&DAT_100c40720);
            uVar2 = local_160;
            _swift_allocObject();
            *(undefined8 *)(puVar10 + 0x18) = uStack_1f8;
            *(undefined8 *)(puVar10 + 0x10) = local_200;
            (*local_138)(puVar10 + uVar2,lVar18,lVar6);
            CloudKit::CKSyncEngine::State::remove(pSVar8,puVar10);
            _swift_release(pSVar8);
            _swift_release(puVar10);
            goto LAB_10039ce34;
          }
          pSVar8 = CloudKit::CKSyncEngine::get_state(local_1f0,pCVar13);
          puVar10 = &DAT_100fbe618;
          FUN_1000037f0(&DAT_100fbe618,&DAT_100c40720);
          uVar2 = local_160;
          _swift_allocObject();
          lVar18 = local_168;
          lVar6 = local_198;
          *(undefined8 *)(puVar10 + 0x18) = uStack_1f8;
          *(undefined8 *)(puVar10 + 0x10) = local_200;
          (*local_138)(puVar10 + uVar2,local_168,local_198);
          CloudKit::CKSyncEngine::State::remove(pSVar8,puVar10);
          _swift_release(pSVar8);
          _swift_release(puVar10);
          lVar23 = local_1a0;
          (**(code **)(local_1a0 + 8))(lVar18,lVar6);
          param_1 = local_150;
          lVar24 = local_1b0;
          pIVar25 = local_1a8;
        }
      }
      else {
        if (uVar1 < 5) {
          if (uVar1 != 3) {
            FUN_1000d468c(local_110);
            pvVar15 = local_f0;
            puVar10 = local_f8;
            _Var17.unknown = local_f8;
            FUN_100004640(local_110);
            local_120 = 0;
            local_118 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x21,_Var17);
            _swift_bridgeObjectRelease(local_118);
            local_120 = 0xd000000000000013;
            local_118 = local_218;
            objc_stub::recordName(IVar20);
            SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar32.bridgeObject = param_4;
            SVar32.str = (char *)pCVar21;
            Swift::String::append(SVar28,SVar32);
            _swift_bridgeObjectRelease(SVar28.bridgeObject);
            pcVar7 = (char *)0x636e7953746f6e20;
            pvVar16 = (void *)0xec000000656c6261;
            goto LAB_10039cd4c;
          }
          FUN_1000d468c(local_110);
          pvVar15 = local_f0;
          puVar10 = local_f8;
          _Var17.unknown = local_f8;
          FUN_100004640(local_110);
          local_120 = 0;
          local_118 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x37,_Var17);
          SVar30.bridgeObject = local_218;
          SVar30.str = (char *)0xd000000000000013;
          SVar34.bridgeObject = param_4;
          SVar34.str = (char *)pCVar21;
          Swift::String::append(SVar30,SVar34);
          objc_stub::recordName(IVar20);
          SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar35.bridgeObject = param_4;
          SVar35.str = (char *)pCVar21;
          Swift::String::append(SVar28,SVar35);
          _swift_bridgeObjectRelease(SVar28.bridgeObject);
          SVar31.bridgeObject = (void *)((ulong)local_228 | 0x8000000000000000);
          SVar31.str = (char *)0xd000000000000022;
          SVar36.bridgeObject = param_4;
          SVar36.str = (char *)pCVar21;
          Swift::String::append(SVar31,SVar36);
          param_4 = pvVar15;
        }
        else {
          if (uVar1 != 5) {
            (**(code **)(local_1a0 + 8))(local_168,local_198);
            param_1 = local_150;
            lVar22 = local_140;
            lVar24 = local_1b0;
            goto LAB_10039ce54;
          }
          FUN_1000d468c(local_110);
          pvVar15 = local_f0;
          puVar10 = local_f8;
          _Var17.unknown = local_f8;
          FUN_100004640(local_110);
          local_120 = 0;
          local_118 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x20,_Var17);
          _swift_bridgeObjectRelease(local_118);
          local_120 = 0xd000000000000013;
          local_118 = local_218;
          objc_stub::recordName(IVar20);
          SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar37.bridgeObject = param_4;
          SVar37.str = (char *)pCVar21;
          Swift::String::append(SVar28,SVar37);
          _swift_bridgeObjectRelease(SVar28.bridgeObject);
          pcVar7 = (char *)0x6353676e6f727720;
          pvVar16 = (void *)0xeb0000000065706f;
LAB_10039cd4c:
          SVar27.bridgeObject = pvVar16;
          SVar27.str = pcVar7;
          SVar33.bridgeObject = param_4;
          SVar33.str = (char *)pCVar21;
          Swift::String::append(SVar27,SVar33);
          param_4 = pvVar15;
        }
        pvVar15 = local_118;
        FUN_1000d4db8(local_120,local_118,puVar10);
        _swift_bridgeObjectRelease(pvVar15);
        pCVar14 = (CKSyncEngine *)local_110;
        FUN_100004594();
        pSVar8 = CloudKit::CKSyncEngine::get_state(local_1f0,pCVar14);
        puVar10 = &DAT_100fbe618;
        FUN_1000037f0(&DAT_100fbe618,&DAT_100c40720);
        lVar22 = local_140;
        uVar2 = local_160;
        _swift_allocObject();
        lVar18 = local_168;
        lVar6 = local_198;
        *(undefined8 *)(puVar10 + 0x18) = uStack_1f8;
        *(undefined8 *)(puVar10 + 0x10) = local_200;
        (*local_138)(puVar10 + uVar2,local_168,local_198);
        CloudKit::CKSyncEngine::State::remove(pSVar8,puVar10);
        _swift_release(pSVar8);
        _swift_release(puVar10);
        lVar23 = local_1a0;
LAB_10039ce34:
        (**(code **)(lVar23 + 8))(lVar18,lVar6);
        param_1 = local_150;
        lVar24 = local_1b0;
      }
LAB_10039ce54:
      param_1 = param_1 + lVar22;
      local_130 = local_130 + -1;
    } while (local_130 != 0);
  }
  return;
}



/* Address: 0x10039da10 | FUN_10039da10 */

void FUN_10039da10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_10039da2c,0,0);
  return;
}



/* Address: 0x10039da2c | FUN_10039da2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039da2c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  ID self;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar2 = &DAT_100ecde58;
  _swift_allocObject(&DAT_100ecde58,0x30,7);
  self = *(ID *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 **)(puVar2 + 0x20) = (undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  puVar3 = &DAT_100ecde80;
  _swift_allocObject(&DAT_100ecde80,0x20,7);
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
  *(code **)(puVar3 + 0x10) = FUN_1003a23d0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100209b34;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000d5218;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100ecde98;
  aBlock = __Block_copy((undefined8 *)(unaff_x22 + 0x10));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_retain(uVar7,uVar5);
  _swift_retain(puVar3);
  _swift_release(uVar6);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x99,0x9a,0x26,1);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010039db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10039db9c);
  (*pcVar1)();
}



/* Address: 0x10039db9c | FUN_10039db9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010039dc98) */

undefined8 FUN_10039db9c(ID param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  ID IVar2;
  undefined *self;
  undefined8 uVar3;
  String SVar4;
  
  FUN_10038fef4(0);
  objc_stub::recordName(param_1);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar4.str;
  IVar2 = objc_stub::zoneID(param_1);
  FUN_1003905c0(pcVar1,SVar4.bridgeObject,IVar2);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  objc_stub::zoneID(param_1);
  self = &_OBJC_CLASS___CKRecordZone;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithZoneID_((ID)self);
  uVar3 = 0;
  FUN_10038fa04(0,IVar2);
  *param_3 = uVar3;
  return 0;
}



/* Address: 0x10039de08 | FUN_10039de08 */

void FUN_10039de08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_10039de58,uVar1,uVar2);
  return;
}



/* Address: 0x10039de58 | FUN_10039de58 */

void FUN_10039de58(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002c1104;
  FUN_100397544(0,0,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x10039deac | FUN_10039deac */

void FUN_10039deac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_10039defc,uVar1,uVar2);
  return;
}



/* Address: 0x10039defc | FUN_10039defc */

void FUN_10039defc(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10039df54;
  FUN_10039c30c(plVar1,*(undefined8 *)(unaff_x22 + 0x10),0,0,*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x10039df54 | FUN_10039df54 */

void FUN_10039df54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010039df8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10039df90 | FUN_10039df90 */

void FUN_10039df90(FetchChangesContext param_1,CKSyncEngine *param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__nextFetchChangesOptions_100ea94a0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  (extension_CloudKit)::CloudKit::CKSyncEngineDelegate::_nextFetchChangesOptions(param_1,param_2);
  return;
}



/* Address: 0x10039e014 | FUN_10039e014 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10039e014(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID self;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,self);
  (**(code **)(lVar2 + 0x18))(self,lVar2);
  puVar4 = &DAT_100ecded0;
  _swift_allocObject(&DAT_100ecded0,0x18,7);
  *(ID *)(puVar4 + 0x10) = self;
  puVar5 = &DAT_100ecdef8;
  _swift_allocObject(&DAT_100ecdef8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003a242c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_60 = thunk_FUN_100209b34;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ecdf10;
  local_58 = puVar5;
  aBlock = __Block_copy(&local_80);
  puVar6 = local_58;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x99,0xda,0x20,1);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100395ff8(0xd000000000000011,0x8000000100da4550,self,1);
    _swift_release(puVar4);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10039e1a8);
  (*pcVar3)();
}



/* Address: 0x10039e1a8 | FUN_10039e1a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039e1a8(undefined8 param_1,CKRecord *param_2,long param_3,CKRecord *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  PendingDatabaseChange PVar3;
  PendingRecordZoneChange PVar4;
  bool bVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  _ArrayBuffer _Var6;
  undefined **ppuVar7;
  ID self;
  Data DVar8;
  NSData *pNVar9;
  undefined **ppuVar10;
  CKRecord *pCVar11;
  undefined8 uVar12;
  FailedRecordSave FVar13;
  undefined *puVar14;
  undefined *puVar15;
  SentRecordZoneChanges SVar16;
  Dictionary<CKRecordID,CloudKit_CKSyncEngine_Event_SentRecordZoneChanges_failedRecordDeletes_getter_:_[__C_CKRecordID_:___C_Synthesized_related_decl__e__for_CKErrorCode]>
  DVar17;
  undefined8 extraout_x1;
  _StringGuts _Var18;
  undefined8 extraout_x1_00;
  TargetProtocolConformanceDescriptor *pTVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar20;
  ID *pIVar21;
  CKRecord **ppCVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined *puVar24;
  CKRecord *pCVar25;
  char *pcVar26;
  CKRecord *pCVar27;
  CKRecord *pCVar28;
  ID IVar29;
  code *pcVar30;
  CKRecord *pCVar31;
  code *pcVar32;
  Dictionary<CKRecordID,CloudKit_CKSyncEngine_Event_SentRecordZoneChanges_failedRecordDeletes_getter_:_[__C_CKRecordID_:___C_Synthesized_related_decl__e__for_CKErrorCode]>
  DVar33;
  ID IVar34;
  ulong uVar35;
  long lVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  char *local_210 [2];
  CKRecord *local_200;
  undefined8 local_1f8;
  char *local_1f0;
  undefined *local_1e8;
  ID *local_1e0;
  undefined4 local_1d4;
  undefined8 *local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  ID *local_1b8;
  ID *local_1b0;
  undefined8 *local_1a8;
  ID *local_1a0;
  ID *local_198;
  ID *local_190;
  long local_188;
  long local_180;
  undefined *local_178;
  ID *local_170;
  CKRecord *local_168;
  CKRecord *local_160;
  char *local_158;
  char *local_150;
  undefined8 uStack_148;
  CKRecord *local_140;
  undefined8 uStack_138;
  undefined **local_128;
  CKRecord *local_120;
  CKRecord *local_118;
  char *local_110;
  _ArrayBuffer local_108;
  _ArrayBuffer local_100;
  undefined8 uStack_f8;
  char *local_f0;
  long local_e8;
  long local_e0;
  ID local_d8;
  undefined *local_d0;
  CKRecord *local_c8;
  CKRecord *local_c0;
  CKRecord *local_b8;
  CKRecord *local_b0;
  CKRecord *local_a8;
  CKRecord *local_a0;
  CKRecord *local_98;
  undefined *local_90 [3];
  CKRecord *local_78;
  CKRecord *local_70 [2];
  
  local_1d0 = param_5;
  local_1c8 = param_3;
  local_1a8 = param_6;
  local_168 = param_4;
  local_c0 = param_2;
  PVar3 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
  local_180 = CONCAT71(extraout_var,PVar3.value);
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_188 + 0x40));
  pIVar21 = (ID *)((long)local_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_190 = pIVar21;
  PVar4 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var_00,PVar4.value);
  local_e8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  pIVar21 = (ID *)((long)pIVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_170 = pIVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar21 = (ID *)((long)pIVar21 - extraout_x12);
  local_198 = pIVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar21 = (ID *)((long)pIVar21 - extraout_x12_00);
  local_1a0 = pIVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar21 = (ID *)((long)pIVar21 - extraout_x12_01);
  local_1b0 = pIVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar21 = (ID *)((long)pIVar21 - extraout_x12_02);
  local_1b8 = pIVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar21 = (ID *)((long)pIVar21 - extraout_x12_03);
  local_1e0 = pIVar21;
  _Var6.unknown =
       (undefined *)
       CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::typeMetadataAccessor
                 ();
  local_c8 = *(CKRecord **)(_Var6.unknown + -8);
  local_d0 = _Var6.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  puVar24 = (undefined *)((long)pIVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_f0 = (char *)((long)puVar24 - extraout_x12_04);
  local_1c0 = param_1;
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_savedRecords
            ((SentRecordZoneChanges)_Var6.unknown);
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    IVar29 = *(ID *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((code *)0x7fffffffffffffff < _Var6.unknown) {
      _Var1.unknown = _Var6.unknown;
    }
    IVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  lVar36 = _TtC9PasteCore10SyncEngine::logger;
  local_178 = puVar24;
  if (IVar29 != 0) {
    puVar24 = (undefined *)0x0;
    FUN_10038fef4();
    local_100.unknown = puVar24;
    if ((long)IVar29 < 1) {
                    /* WARNING: Does not return */
      pcVar30 = (code *)SoftwareBreakpoint(1,0x1003a0684);
      (*pcVar30)();
    }
    IVar34 = 0;
    local_160 = *(CKRecord **)(local_1c8 + lVar36);
    local_118 = (CKRecord *)((ulong)_Var6.unknown & 0xc000000000000001);
    local_120 = (CKRecord *)0x8000000100da2b30;
    local_128 = (undefined **)0x8000000100da2b50;
    local_140 = (CKRecord *)0x8000000100da2b70;
    uStack_148 = 6;
    local_150 = (char *)0x3;
    local_158 = (char *)0xd000000000000010;
    local_110 = (char *)IVar29;
    local_108.unknown = _Var6.unknown;
    do {
      if (local_118 == (CKRecord *)0x0) {
        IVar29 = *(ID *)(local_108.unknown + IVar34 * 8 + 0x20);
      }
      else {
        IVar29 = IVar34;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar34,local_108);
      }
      local_d8 = IVar29;
      IVar29 = objc_stub::recordID(IVar29);
      objc_stub::recordName(IVar29);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar29 = objc_stub::zoneID(IVar29);
      puVar24 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_allocObject();
      *(undefined8 *)(puVar24 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(puVar24 + 0x18) = uStack_148;
      *(char **)(puVar24 + 0x10) = local_150;
      *(CKRecord **)(puVar24 + 0x28) = local_120;
      *(String *)(puVar24 + 0x30) = SVar37;
      *(char **)(puVar24 + 0x40) = local_158;
      *(undefined ***)(puVar24 + 0x48) = local_128;
      _swift_bridgeObjectRetain(SVar37.bridgeObject);
      objc_stub::zoneName(IVar29);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar24 + 0x50) = SVar38;
      *(undefined8 *)(puVar24 + 0x60) = 0xd000000000000015;
      *(CKRecord **)(puVar24 + 0x68) = local_140;
      objc_stub::ownerName(IVar29);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar24 + 0x70) = SVar38;
      puVar14 = puVar24;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar24);
      puVar15 = &DAT_100fbef70;
      FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
      _swift_arrayDestroy(puVar24 + 0x20,3,puVar15);
      _swift_deallocClassInstance(puVar24,0x20,7);
      pCVar31 = (CKRecord *)&DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      ppuVar7 = local_90;
      local_90[0] = puVar14;
      local_78 = pCVar31;
      FUN_100328974(ppuVar7,0,local_c0);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      FUN_100004594(local_90);
      if (ppuVar7 != (undefined **)0x0) {
        puVar24 = &_OBJC_CLASS___NSKeyedArchiver;
        _objc_allocWithZone();
        self = objc_stub::FUN_100c039c0((ID)puVar24,1);
        IVar29 = local_d8;
        objc_stub::FUN_100c019c0(local_d8,self);
        objc_stub::FUN_100c02680(self);
        DVar8.unknown = (undefined *)objc_stub::FUN_100c01a00(self);
        uVar12 = extraout_x1;
        DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
        pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar8);
        FUN_10003bf2c(DVar8.unknown,uVar12);
        objc_stub::FUN_100c0ae60((ID)ppuVar7);
        FUN_1000d468c(local_90,0);
        pCVar27 = local_70[0];
        pCVar11 = local_78;
        _Var18.unknown = local_78;
        FUN_100004640(local_90);
        local_a0 = (CKRecord *)0x0;
        local_98 = (CKRecord *)0xe000000000000000;
        Swift::_StringGuts::grow(0x1b,_Var18);
        pCVar31 = local_98;
        _swift_bridgeObjectRelease();
        local_a0 = (CKRecord *)0x45533a434e59535b;
        local_98 = (CKRecord *)0xef204b4f205d444e;
        SVar37 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)pCVar31);
        SVar54.bridgeObject = param_4;
        SVar54.str = (char *)pNVar9;
        Swift::String::append(SVar37,SVar54);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar37.bridgeObject = (void *)0xe100000000000000;
        SVar37.str = (char *)0x2f;
        SVar55.bridgeObject = param_4;
        SVar55.str = (char *)pNVar9;
        Swift::String::append(SVar37,SVar55);
        IVar29 = objc_stub::recordID(IVar29);
        objc_stub::recordName(IVar29);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar56.bridgeObject = param_4;
        SVar56.str = (char *)pNVar9;
        Swift::String::append(SVar37,SVar56);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar38.bridgeObject = &DAT_e500000000000000;
        SVar38.str = (char *)0x3d69727520;
        SVar57.bridgeObject = param_4;
        SVar57.str = (char *)pNVar9;
        Swift::String::append(SVar38,SVar57);
        objc_stub::FUN_100c07540((ID)ppuVar7);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar58.bridgeObject = param_4;
        SVar58.str = (char *)pNVar9;
        Swift::String::append(SVar37,SVar58);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        pCVar31 = local_98;
        FUN_1000d4db8(local_a0,local_98,pCVar11);
        _swift_bridgeObjectRelease(pCVar31);
        FUN_100004594(local_90);
        param_4 = pCVar27;
      }
      IVar34 = IVar34 + 1;
      _Var6.unknown = local_108.unknown;
    } while (local_110 != (char *)IVar34);
  }
  _swift_bridgeObjectRelease();
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_deletedRecordIDs
            ((SentRecordZoneChanges)_Var6.unknown);
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    pcVar30 = *(code **)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    lVar36 = _TtC9PasteCore10SyncEngine::logger;
  }
  else {
    _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var1.unknown = _Var6.unknown;
    }
    pcVar30 = (code *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    lVar36 = _TtC9PasteCore10SyncEngine::logger;
  }
  _TtC9PasteCore10SyncEngine::logger = lVar36;
  if (pcVar30 != (code *)0x0) {
    IVar29 = 0;
    FUN_10038fef4();
    local_d8 = IVar29;
    if ((long)pcVar30 < 1) {
                    /* WARNING: Does not return */
      pcVar30 = (code *)SoftwareBreakpoint(1,0x1003a0688);
      (*pcVar30)();
    }
    pcVar32 = (code *)0x0;
    local_158 = *(char **)(local_1c8 + lVar36);
    local_110 = (char *)((ulong)_Var6.unknown & 0xc000000000000001);
    local_118 = (CKRecord *)0x8000000100da2b30;
    local_120 = (CKRecord *)0x8000000100da2b50;
    local_128 = (undefined **)0x8000000100da2b70;
    local_160 = (CKRecord *)0x8000000100da4930;
    uStack_138 = 6;
    local_140 = (CKRecord *)0x3;
    local_150 = (char *)0xd000000000000010;
    local_108.unknown = pcVar30;
    local_100.unknown = _Var6.unknown;
    do {
      if (local_110 == (char *)0x0) {
        pcVar30 = *(code **)(local_100.unknown + (long)pcVar32 * 8 + 0x20);
        pCVar31 = param_4;
      }
      else {
        pcVar30 = pcVar32;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pcVar32,local_100);
        pCVar31 = param_4;
      }
      objc_stub::recordName((ID)pcVar30);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar29 = objc_stub::zoneID((ID)pcVar30);
      puVar24 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_allocObject();
      *(undefined8 *)(puVar24 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(puVar24 + 0x18) = uStack_138;
      *(CKRecord **)(puVar24 + 0x10) = local_140;
      *(CKRecord **)(puVar24 + 0x28) = local_118;
      *(String *)(puVar24 + 0x30) = SVar37;
      *(char **)(puVar24 + 0x40) = local_150;
      *(CKRecord **)(puVar24 + 0x48) = local_120;
      _swift_bridgeObjectRetain(SVar37.bridgeObject);
      objc_stub::zoneName(IVar29);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar24 + 0x50) = SVar38;
      *(undefined8 *)(puVar24 + 0x60) = 0xd000000000000015;
      *(undefined ***)(puVar24 + 0x68) = local_128;
      objc_stub::ownerName(IVar29);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar24 + 0x70) = SVar38;
      puVar14 = puVar24;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar24);
      puVar15 = &DAT_100fbef70;
      FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
      _swift_arrayDestroy(puVar24 + 0x20,3,puVar15);
      _swift_deallocClassInstance(puVar24,0x20,7);
      pCVar11 = (CKRecord *)&DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      ppuVar7 = local_90;
      pCVar27 = local_c0;
      local_90[0] = puVar14;
      local_78 = pCVar11;
      FUN_100328974(ppuVar7,0);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      ppuVar10 = local_90;
      FUN_100004594();
      param_4 = pCVar31;
      if ((ppuVar7 != (undefined **)0x0) &&
         ((FUN_10038f124(), ppuVar10 == (undefined **)0x0 ||
          (IVar29 = objc_stub::isDeleted((ID)ppuVar10), param_4 = pCVar31, (int)IVar29 != 0)))) {
        FUN_1000d468c(local_90);
        param_4 = local_70[0];
        pCVar11 = local_78;
        _Var18.unknown = local_78;
        FUN_100004640(local_90);
        local_a0 = (CKRecord *)0x0;
        local_98 = (CKRecord *)0xe000000000000000;
        Swift::_StringGuts::grow(0x18,_Var18);
        _swift_bridgeObjectRelease(local_98);
        local_a0 = (CKRecord *)0xd000000000000016;
        local_98 = local_160;
        objc_stub::recordName((ID)pcVar30);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar59.bridgeObject = pCVar31;
        SVar59.str = (char *)pCVar27;
        Swift::String::append(SVar37,SVar59);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        pCVar31 = local_98;
        FUN_1000d4db8(local_a0,local_98,pCVar11);
        _swift_bridgeObjectRelease(pCVar31);
        FUN_100004594(local_90);
        IVar29 = objc_stub::managedObjectContext((ID)ppuVar7);
        objc_stub::deleteObject_(IVar29,ppuVar7);
      }
      pcVar32 = pcVar32 + 1;
      _Var6.unknown = local_100.unknown;
    } while ((code *)local_108.unknown != pcVar32);
  }
  _swift_bridgeObjectRelease();
  CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::get_failedRecordSaves
            ((SentRecordZoneChanges)_Var6.unknown);
  pCVar31 = *(CKRecord **)(_Var6.unknown + 0x10);
  local_1e8 = _Var6.unknown;
  if (pCVar31 != (CKRecord *)0x0) {
    local_110 = *(char **)(local_1c8 + _TtC9PasteCore10SyncEngine::logger);
    local_1f8 = *(undefined8 *)(local_1c8 + _TtC9PasteCore10SyncEngine::conflictResolver);
    puVar24 = _Var6.unknown +
              ((ulong)(byte)local_c8[0x50] + 0x20 &
              ((ulong)(byte)local_c8[0x50] ^ 0xffffffffffffffff));
    local_150 = "led, will retry: ";
    local_d8 = *(ID *)PTR__CKCurrentUserDefaultName_100ea95d0;
    local_128 = (undefined **)0x100da4390;
    local_158 = " local won, retrying";
    local_160 = (CKRecord *)(s_unknownItem_clearing_system_fiel_100da4a10 + 0x10);
    local_100.unknown = *(undefined **)(local_c8 + 0x48);
    local_108.unknown = *(undefined **)(local_c8 + 0x10);
    local_200 = (CKRecord *)0x8000000100da4990;
    local_118 = (CKRecord *)
                CONCAT44(local_118._4_4_,
                         *(undefined4 *)
                          PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
                        );
    local_1d4 = *(undefined4 *)
                 PTR___enum_case_for_CloudKit_CKSyncEngine_PendingDatabaseChange_saveZone_CloudKit_CKSyncEngine_PendingDatabaseChange_Type___>____C_CKRecordZone___>_CloudKit_CKSyncEngine_PendingDatabaseChange_100ea9290
    ;
    local_210[1] = "[SYNC:SEND] CONFLICT ";
    local_210[0] = " server won, accepting";
    local_1f0 = " already deleted on server";
    puVar15 = local_178;
    do {
      puVar14 = local_d0;
      pcVar26 = local_f0;
      (*(code *)local_108.unknown)(local_f0,puVar24,local_d0);
      FVar13.unknown = puVar15;
      (**(code **)(local_c8 + 0x20))(puVar15,pcVar26,puVar14);
      pCVar11 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::get_record
                          (FVar13);
      IVar29 = objc_stub::recordID((ID)pCVar11);
      IVar34 = objc_stub::zoneID(IVar29);
      objc_stub::ownerName(IVar34);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FVar13.unknown = SVar38.bridgeObject;
      if (SVar37 == SVar38) {
        bVar5 = true;
      }
      else {
        param_4 = (CKRecord *)FVar13.unknown;
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar37.str,(_StringGuts)SVar37.bridgeObject,
                           (_StringComparisonResult)(__int8)SVar38.str);
      }
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      _swift_bridgeObjectRelease();
      CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error(FVar13);
      uVar12 = 0;
      local_90[0] = FVar13.unknown;
      FUN_1002fbb58(0);
      pTVar19 = &TargetProtocolConformanceDescriptor_100c3fa10;
      FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58);
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
      puVar14 = (undefined *)0x0;
      if ((long)local_a0 < 0xe) {
        if (local_a0 == (CKRecord *)0xa) {
LAB_10039efa8:
          local_120 = pCVar31;
          FUN_1000d468c(local_90);
          pCVar11 = local_78;
          local_140 = local_70[0];
          _Var18.unknown = local_78;
          FUN_100004640(local_90);
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          Swift::_StringGuts::grow(0x24,_Var18);
          SVar39.bridgeObject = (void *)((ulong)local_150 | 0x8000000000000000);
          SVar39.str = (char *)0xd000000000000013;
          SVar60.bridgeObject = param_4;
          SVar60.str = (char *)pTVar19;
          Swift::String::append(SVar39,SVar60);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar61.bridgeObject = param_4;
          SVar61.str = (char *)pTVar19;
          Swift::String::append(SVar37,SVar61);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          FVar13.unknown = (undefined *)0x7571206d6f726620;
          SVar40.bridgeObject = (void *)0xed0000203a657565;
          SVar40.str = (char *)0x7571206d6f726620;
          SVar62.bridgeObject = param_4;
          SVar62.str = (char *)pTVar19;
          Swift::String::append(SVar40,SVar62);
          CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error(FVar13)
          ;
          local_a8 = (CKRecord *)FVar13.unknown;
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
          uVar12 = 0;
          FUN_1002fbed0(0);
          Swift::__print_unlocked
                    (&local_b0,&local_a0,uVar12,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pCVar31 = local_98;
          param_4 = local_140;
          FUN_1000d4df0(local_a0,local_98,pCVar11);
          _swift_bridgeObjectRelease(pCVar31);
          FUN_100004594(local_90);
          pIVar21 = local_170;
          *local_170 = IVar29;
          (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
          puVar2 = local_1a8;
          pCVar27 = (CKRecord *)*local_1a8;
          pCVar31 = pCVar27;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar2 = pCVar27;
          pCVar11 = pCVar27;
          if (((ulong)pCVar31 & 1) == 0) {
            pCVar11 = (CKRecord *)0x0;
            FUN_100380498(0,*(long *)(pCVar27 + 0x10) + 1,1);
            *local_1a8 = pCVar11;
            param_4 = pCVar27;
          }
          pCVar31 = local_120;
          puVar15 = local_178;
          uVar35 = *(ulong *)(pCVar11 + 0x10);
          pCVar27 = pCVar11;
          if (*(ulong *)(pCVar11 + 0x18) >> 1 <= uVar35) {
            pCVar27 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar11 + 0x18));
            FUN_100380498(pCVar27,uVar35 + 1,1);
            *local_1a8 = pCVar27;
            param_4 = pCVar11;
          }
          *(ulong *)(pCVar27 + 0x10) = uVar35 + 1;
          pCVar27 = pCVar27 + *(long *)(local_e8 + 0x48) * uVar35 +
                              ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff));
          pcVar30 = *(code **)(local_e8 + 0x20);
          ppCVar22 = local_70;
        }
        else {
          if (local_a0 != (CKRecord *)0xb) {
            if ((local_a0 != (CKRecord *)0xc) || (bVar5 != false)) goto LAB_10039f704;
            goto LAB_10039efa8;
          }
          FUN_1000d468c(local_90);
          pCVar28 = local_70[0];
          pCVar27 = local_78;
          _Var18.unknown = local_78;
          FUN_100004640(local_90);
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          Swift::_StringGuts::grow(0x3b,_Var18);
          SVar48.bridgeObject = (void *)((ulong)local_128 | 0x8000000000000000);
          SVar48.str = (char *)0xd000000000000012;
          SVar74.bridgeObject = param_4;
          SVar74.str = (char *)pTVar19;
          Swift::String::append(SVar48,SVar74);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar75.bridgeObject = param_4;
          SVar75.str = (char *)pTVar19;
          Swift::String::append(SVar37,SVar75);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar49.bridgeObject = (void *)((ulong)local_158 | 0x8000000000000000);
          SVar49.str = (char *)0x1000000000000027;
          SVar76.bridgeObject = param_4;
          SVar76.str = (char *)pTVar19;
          Swift::String::append(SVar49,SVar76);
          pCVar11 = local_98;
          FUN_1000d4df0(local_a0,local_98,pCVar27,pCVar28);
          _swift_bridgeObjectRelease(pCVar11);
          FUN_100004594(local_90);
          FUN_10038fef4(0);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pcVar26 = SVar37.str;
          IVar34 = objc_stub::zoneID(IVar29);
          param_4 = local_c0;
          FUN_1003905c0(pcVar26,SVar37.bridgeObject,IVar34);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          if (pcVar26 != (char *)0x0) {
            objc_stub::FUN_100c0ae60((ID)pcVar26,0);
          }
          pIVar21 = local_198;
          *local_198 = IVar29;
          (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
          pCVar11 = local_168;
          pCVar28 = *(CKRecord **)local_168;
          pCVar27 = pCVar28;
          _swift_isUniquelyReferenced_nonNull_native();
          *(CKRecord **)pCVar11 = pCVar28;
          pCVar11 = pCVar28;
          if (((ulong)pCVar27 & 1) == 0) {
            pCVar11 = (CKRecord *)0x0;
            FUN_100380498(0,*(long *)(pCVar28 + 0x10) + 1,1);
            *(CKRecord **)local_168 = pCVar11;
            param_4 = pCVar28;
          }
          uVar35 = *(ulong *)(pCVar11 + 0x10);
          pCVar27 = pCVar11;
          if (*(ulong *)(pCVar11 + 0x18) >> 1 <= uVar35) {
            pCVar27 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar11 + 0x18));
            FUN_100380498(pCVar27,uVar35 + 1,1);
            *(CKRecord **)local_168 = pCVar27;
            param_4 = pCVar11;
          }
          *(ulong *)(pCVar27 + 0x10) = uVar35 + 1;
          pCVar27 = pCVar27 + *(long *)(local_e8 + 0x48) * uVar35 +
                              ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff));
          pcVar30 = *(code **)(local_e8 + 0x20);
          ppCVar22 = &local_98;
        }
LAB_10039fc70:
        (*pcVar30)(pCVar27,ppCVar22[-0x20],local_e0);
LAB_10039fc7c:
        (**(code **)(local_c8 + 8))(puVar15,local_d0);
      }
      else {
        if ((local_a0 == (CKRecord *)0xe) || (local_a0 == (CKRecord *)0x10)) {
          CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error
                    ((FailedRecordSave)0x0);
          local_90[0] = puVar14;
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
          uVar35 = 0;
          if (local_a0 != (CKRecord *)0xe) {
LAB_10039f86c:
            puVar14 = (undefined *)0x0;
            CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error
                      ((FailedRecordSave)0x0);
            local_90[0] = puVar14;
            (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
            pIVar21 = local_1b0;
            if (local_a0 == (CKRecord *)0x10) {
              FUN_1000d468c(local_90,0);
              pCVar28 = local_70[0];
              pCVar27 = local_78;
              _Var18.unknown = local_78;
              FUN_100004640(local_90);
              local_a0 = (CKRecord *)0x0;
              local_98 = (CKRecord *)0xe000000000000000;
              Swift::_StringGuts::grow(0x33,_Var18);
              SVar46.bridgeObject = (void *)((ulong)local_128 | 0x8000000000000000);
              SVar46.str = (char *)0xd000000000000012;
              SVar71.bridgeObject = param_4;
              SVar71.str = (char *)pTVar19;
              Swift::String::append(SVar46,SVar71);
              objc_stub::recordName(IVar29);
              SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              SVar72.bridgeObject = param_4;
              SVar72.str = (char *)pTVar19;
              Swift::String::append(SVar37,SVar72);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              SVar47.bridgeObject = (void *)((ulong)local_1f0 | 0x8000000000000000);
              SVar47.str = (char *)0x100000000000001f;
              SVar73.bridgeObject = param_4;
              SVar73.str = (char *)pTVar19;
              Swift::String::append(SVar47,SVar73);
              pCVar11 = local_98;
              FUN_1000d4df0(local_a0,local_98,pCVar27);
              _swift_bridgeObjectRelease(pCVar11);
              FUN_100004594(local_90);
              pIVar21 = local_1b8;
              *local_1b8 = IVar29;
              (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
              pCVar11 = local_168;
              pCVar25 = *(CKRecord **)local_168;
              pCVar27 = pCVar25;
              _swift_isUniquelyReferenced_nonNull_native();
              *(CKRecord **)pCVar11 = pCVar25;
              pCVar11 = pCVar25;
              if (((ulong)pCVar27 & 1) == 0) {
                pCVar11 = (CKRecord *)0x0;
                FUN_100380498(0,*(long *)(pCVar25 + 0x10) + 1,1);
                *(CKRecord **)local_168 = pCVar11;
                pCVar28 = pCVar25;
              }
              uVar35 = *(ulong *)(pCVar11 + 0x10);
              param_4 = pCVar28;
              pCVar27 = pCVar11;
              if (*(ulong *)(pCVar11 + 0x18) >> 1 <= uVar35) {
                pCVar27 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar11 + 0x18));
                FUN_100380498(pCVar27,uVar35 + 1,1);
                *(CKRecord **)local_168 = pCVar27;
                param_4 = pCVar11;
              }
              *(ulong *)(pCVar27 + 0x10) = uVar35 + 1;
              pCVar27 = pCVar27 + *(long *)(local_e8 + 0x48) * uVar35 +
                                  ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff));
              pcVar30 = *(code **)(local_e8 + 0x20);
              ppCVar22 = &local_b8;
            }
            else {
              *local_1b0 = IVar29;
              (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
              pCVar11 = local_168;
              pCVar28 = *(CKRecord **)local_168;
              pCVar27 = pCVar28;
              _swift_isUniquelyReferenced_nonNull_native();
              *(CKRecord **)pCVar11 = pCVar28;
              pCVar11 = pCVar28;
              if (((ulong)pCVar27 & 1) == 0) {
                pCVar11 = (CKRecord *)0x0;
                FUN_100380498(0,*(long *)(pCVar28 + 0x10) + 1,1);
                *(CKRecord **)local_168 = pCVar11;
                param_4 = pCVar28;
              }
              uVar35 = *(ulong *)(pCVar11 + 0x10);
              pCVar27 = pCVar11;
              if (*(ulong *)(pCVar11 + 0x18) >> 1 <= uVar35) {
                pCVar27 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar11 + 0x18));
                FUN_100380498(pCVar27,uVar35 + 1,1);
                *(CKRecord **)local_168 = pCVar27;
                param_4 = pCVar11;
              }
              *(ulong *)(pCVar27 + 0x10) = uVar35 + 1;
              pCVar27 = pCVar27 + *(long *)(local_e8 + 0x48) * uVar35 +
                                  ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff));
              pcVar30 = *(code **)(local_e8 + 0x20);
              ppCVar22 = &local_b0;
            }
            goto LAB_10039fc70;
          }
          CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error
                    ((FailedRecordSave)0x0);
          (extension_CloudKit)::
          (extension_in_CloudKit):__C_Synthesized.related_decl_'e'_for_CKErrorCode.serverRecord.getter_:___C.CKRecord?
          ::_get_serverRecord();
          if (uVar35 == 0) goto LAB_10039f86c;
          local_120 = pCVar31;
          pCVar11 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::
                    get_record((FailedRecordSave)0x0);
          FUN_100394f08();
          FUN_10038fef4(0);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pcVar26 = SVar37.str;
          pNVar9 = (NSData *)objc_stub::zoneID(IVar29);
          pCVar31 = local_c0;
          FUN_1003905c0(pcVar26,SVar37.bridgeObject);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          local_140 = pCVar11;
          if (pcVar26 != (char *)0x0) {
            puVar15 = &_OBJC_CLASS___NSKeyedArchiver;
            _objc_allocWithZone();
            IVar34 = objc_stub::FUN_100c039c0((ID)puVar15,1);
            objc_stub::FUN_100c019c0((ID)pCVar11,IVar34);
            objc_stub::FUN_100c02680(IVar34);
            DVar8.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar34);
            uVar12 = extraout_x1_00;
            DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
            pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar8);
            FUN_10003bf2c(DVar8.unknown,uVar12);
            objc_stub::FUN_100c0ae60((ID)pcVar26);
          }
          if ((uVar35 & 1) == 0) {
            FUN_1000d468c(local_90,0);
            param_4 = local_70[0];
            pCVar11 = local_78;
            _Var18.unknown = local_78;
            FUN_100004640(local_90);
            local_a0 = (CKRecord *)0x0;
            local_98 = (CKRecord *)0xe000000000000000;
            Swift::_StringGuts::grow(0x2d,_Var18);
            _swift_bridgeObjectRelease(local_98);
            local_a0 = (CKRecord *)0xd000000000000015;
            local_98 = local_200;
            objc_stub::recordName(IVar29);
            SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar77.bridgeObject = pCVar31;
            SVar77.str = (char *)pNVar9;
            Swift::String::append(SVar37,SVar77);
            _swift_bridgeObjectRelease(SVar37.bridgeObject);
            SVar50.bridgeObject = (void *)((ulong)local_210[1] | 0x8000000000000000);
            SVar50.str = (char *)0xd000000000000016;
            SVar78.bridgeObject = pCVar31;
            SVar78.str = (char *)pNVar9;
            Swift::String::append(SVar50,SVar78);
            pCVar31 = local_98;
            FUN_1000d4db8(local_a0,local_98,pCVar11);
            _swift_bridgeObjectRelease(pCVar31);
            puVar15 = local_178;
            (**(code **)(local_c8 + 8))(local_178,local_d0);
            FUN_100004594(local_90);
            pCVar31 = local_120;
            goto LAB_10039ee30;
          }
          FUN_1000d468c(local_90,0);
          param_4 = local_70[0];
          pCVar11 = local_78;
          _Var18.unknown = local_78;
          FUN_100004640(local_90);
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2b,_Var18);
          _swift_bridgeObjectRelease(local_98);
          local_a0 = (CKRecord *)0xd000000000000015;
          local_98 = local_200;
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar66.bridgeObject = pCVar31;
          SVar66.str = (char *)pNVar9;
          Swift::String::append(SVar37,SVar66);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar43.bridgeObject = (void *)((ulong)local_210[0] | 0x8000000000000000);
          SVar43.str = (char *)0xd000000000000014;
          SVar67.bridgeObject = pCVar31;
          SVar67.str = (char *)pNVar9;
          Swift::String::append(SVar43,SVar67);
          pCVar31 = local_98;
          FUN_1000d4db8(local_a0,local_98,pCVar11);
          _swift_bridgeObjectRelease(pCVar31);
          FUN_100004594(local_90);
          pIVar21 = local_1e0;
          *local_1e0 = IVar29;
          (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
          pCVar31 = local_168;
          pCVar28 = *(CKRecord **)local_168;
          pCVar11 = pCVar28;
          _swift_isUniquelyReferenced_nonNull_native();
          *(CKRecord **)pCVar31 = pCVar28;
          pCVar27 = pCVar28;
          if (((ulong)pCVar11 & 1) == 0) {
            pCVar27 = (CKRecord *)0x0;
            FUN_100380498(0,*(long *)(pCVar28 + 0x10) + 1,1);
            *(CKRecord **)local_168 = pCVar27;
            param_4 = pCVar28;
          }
          pCVar31 = local_120;
          puVar15 = local_178;
          uVar35 = *(ulong *)(pCVar27 + 0x10);
          pCVar11 = pCVar27;
          if (*(ulong *)(pCVar27 + 0x18) >> 1 <= uVar35) {
            pCVar11 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar27 + 0x18));
            FUN_100380498(pCVar11,uVar35 + 1,1);
            *(CKRecord **)local_168 = pCVar11;
            param_4 = pCVar27;
          }
          *(ulong *)(pCVar11 + 0x10) = uVar35 + 1;
          (**(code **)(local_e8 + 0x20))
                    (pCVar11 + *(long *)(local_e8 + 0x48) * uVar35 +
                               ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff)),local_1e0,
                     local_e0);
          goto LAB_10039fc7c;
        }
        if (local_a0 == (CKRecord *)0x1a) {
          FUN_1000d468c(local_90);
          pCVar28 = local_70[0];
          pCVar27 = local_78;
          _Var18.unknown = local_78;
          FUN_100004640(local_90);
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          Swift::_StringGuts::grow(0x33,_Var18);
          SVar41.bridgeObject = (void *)((ulong)local_128 | 0x8000000000000000);
          SVar41.str = (char *)0xd000000000000012;
          SVar63.bridgeObject = param_4;
          SVar63.str = (char *)pTVar19;
          Swift::String::append(SVar41,SVar63);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar64.bridgeObject = param_4;
          SVar64.str = (char *)pTVar19;
          Swift::String::append(SVar37,SVar64);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar42.bridgeObject = (void *)((ulong)local_160 | 0x8000000000000000);
          SVar42.str = (char *)0x100000000000001f;
          SVar65.bridgeObject = param_4;
          SVar65.str = (char *)pTVar19;
          Swift::String::append(SVar42,SVar65);
          pCVar11 = local_98;
          FUN_1000d4df0(local_a0,local_98,pCVar27);
          _swift_bridgeObjectRelease(pCVar11);
          FUN_100004594(local_90);
          IVar34 = objc_stub::zoneID(IVar29);
          puVar14 = &_OBJC_CLASS___CKRecordZone;
          _objc_allocWithZone();
          IVar34 = objc_stub::initWithZoneID_((ID)puVar14,IVar34);
          pIVar21 = local_190;
          *local_190 = IVar34;
          (**(code **)(local_188 + 0x68))(pIVar21,local_1d4,local_180);
          puVar2 = local_1d0;
          pCVar25 = (CKRecord *)*local_1d0;
          pCVar11 = pCVar25;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar2 = pCVar25;
          pCVar27 = pCVar25;
          if (((ulong)pCVar11 & 1) == 0) {
            pCVar27 = (CKRecord *)0x0;
            FUN_1003804b4(0,*(long *)(pCVar25 + 0x10) + 1,1);
            *local_1d0 = pCVar27;
            pCVar28 = pCVar25;
          }
          uVar35 = *(ulong *)(pCVar27 + 0x10);
          pCVar11 = pCVar27;
          if (*(ulong *)(pCVar27 + 0x18) >> 1 <= uVar35) {
            pCVar11 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar27 + 0x18));
            FUN_1003804b4(pCVar11,uVar35 + 1,1);
            *local_1d0 = pCVar11;
            pCVar28 = pCVar27;
          }
          *(ulong *)(pCVar11 + 0x10) = uVar35 + 1;
          (**(code **)(local_188 + 0x20))
                    (pCVar11 + *(long *)(local_188 + 0x48) * uVar35 +
                               ((ulong)*(byte *)(local_188 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(local_188 + 0x50) ^ 0xffffffffffffffff)),local_190,
                     local_180);
          pIVar21 = local_1a0;
          *local_1a0 = IVar29;
          (**(code **)(local_e8 + 0x68))(pIVar21,(ulong)local_118 & 0xffffffff,local_e0);
          pCVar11 = local_168;
          pCVar25 = *(CKRecord **)local_168;
          pCVar27 = pCVar25;
          _swift_isUniquelyReferenced_nonNull_native();
          *(CKRecord **)pCVar11 = pCVar25;
          pCVar11 = pCVar25;
          if (((ulong)pCVar27 & 1) == 0) {
            pCVar11 = (CKRecord *)0x0;
            FUN_100380498(0,*(long *)(pCVar25 + 0x10) + 1,1);
            *(CKRecord **)local_168 = pCVar11;
            pCVar28 = pCVar25;
          }
          uVar35 = *(ulong *)(pCVar11 + 0x10);
          param_4 = pCVar28;
          pCVar27 = pCVar11;
          if (*(ulong *)(pCVar11 + 0x18) >> 1 <= uVar35) {
            pCVar27 = (CKRecord *)(ulong)(1 < *(ulong *)(pCVar11 + 0x18));
            FUN_100380498(pCVar27,uVar35 + 1,1);
            *(CKRecord **)local_168 = pCVar27;
            param_4 = pCVar11;
          }
          *(ulong *)(pCVar27 + 0x10) = uVar35 + 1;
          pCVar27 = pCVar27 + *(long *)(local_e8 + 0x48) * uVar35 +
                              ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff));
          pcVar30 = *(code **)(local_e8 + 0x20);
          ppCVar22 = &local_a0;
          goto LAB_10039fc70;
        }
LAB_10039f704:
        CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error
                  ((FailedRecordSave)0x0);
        local_90[0] = puVar14;
        (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
        if (local_a0 == (CKRecord *)0x16) {
          (**(code **)(local_c8 + 8))(puVar15,local_d0);
        }
        else {
          FUN_1000d468c(local_90,0);
          pCVar27 = local_78;
          local_120 = local_70[0];
          _Var18.unknown = local_78;
          FUN_100004640(local_90);
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          Swift::_StringGuts::grow(0x17,_Var18);
          SVar44.bridgeObject = (void *)((ulong)local_128 | 0x8000000000000000);
          SVar44.str = (char *)0xd000000000000012;
          SVar68.bridgeObject = param_4;
          SVar68.str = (char *)pTVar19;
          Swift::String::append(SVar44,SVar68);
          objc_stub::recordName(IVar29);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar69.bridgeObject = param_4;
          SVar69.str = (char *)pTVar19;
          Swift::String::append(SVar37,SVar69);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar45.bridgeObject = (void *)0xe100000000000000;
          SVar45.str = (char *)0x20;
          FVar13.unknown = (undefined *)0x20;
          SVar70.bridgeObject = param_4;
          SVar70.str = (char *)pTVar19;
          Swift::String::append(SVar45,SVar70);
          CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::FailedRecordSave::_get_error(FVar13)
          ;
          local_a8 = (CKRecord *)FVar13.unknown;
          Swift::__print_unlocked
                    (&local_a8,&local_a0,uVar12,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pCVar11 = local_98;
          param_4 = local_120;
          FUN_1000d4e0c(local_a0,local_98,pCVar27);
          _swift_bridgeObjectRelease(pCVar11);
          (**(code **)(local_c8 + 8))(puVar15,local_d0);
          FUN_100004594(local_90);
        }
      }
LAB_10039ee30:
      puVar24 = puVar24 + local_100.unknown;
      pCVar31 = pCVar31 + -1;
    } while (pCVar31 != (CKRecord *)0x0);
  }
  SVar16.unknown = local_1e8;
  _swift_bridgeObjectRelease();
  DVar17 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::_get_failedRecordDeletes(SVar16);
  lVar36 = 0;
  uVar23 = 1L << ((ulong)(byte)DVar17.unknown[0x20] & 0x3f);
  uVar35 = 0xffffffffffffffff;
  if ((DVar17.unknown[0x20] & 0x3f) < 6) {
    uVar35 = ~(-1L << (uVar23 & 0x3f));
  }
  uVar35 = uVar35 & *(ulong *)(DVar17.unknown + 0x40);
  local_d0 = *(undefined **)(local_1c8 + _TtC9PasteCore10SyncEngine::logger);
  local_d8 = 0x8000000100da2b30;
  local_e8 = 0x8000000100da2b70;
  local_e0 = 0x8000000100da2b50;
  local_110 = "[SYNC:SEND] DELETE OK ";
  local_108.unknown = (CKRecord *)0x8000000100da4930;
  local_f0 = "handleSentRecordZoneChanges";
  uStack_f8 = 6;
  local_100.unknown = (undefined *)0x3;
  DVar33 = DVar17;
  while( true ) {
    while (uVar35 != 0) {
      uVar20 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar35 = uVar35 - 1 & uVar35;
      uVar20 = lVar36 << 9 | LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) << 3;
      pcVar26 = *(char **)(*(long *)(DVar33.unknown + 0x30) + uVar20);
      pCVar31 = *(CKRecord **)(*(long *)(DVar33.unknown + 0x38) + uVar20);
      uVar12 = 0;
      local_a8 = pCVar31;
      FUN_1002fbb58(0);
      pTVar19 = &TargetProtocolConformanceDescriptor_100c3fa10;
      FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58);
      local_c8 = pCVar31;
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
      switch(local_b0) {
      case (CKRecord *)0x3:
      case (CKRecord *)0x4:
      case (CKRecord *)0x6:
      case (CKRecord *)0x7:
      case (CKRecord *)0x9:
      case (CKRecord *)0x14:
      case (CKRecord *)0x17:
      case (CKRecord *)0x1a:
      case (CKRecord *)0x24:
        break;
      default:
        FUN_1000d468c(local_90);
        local_120 = local_78;
        local_118 = local_70[0];
        ppuVar7 = local_90;
        _Var18.unknown = local_78;
        FUN_100004640();
        local_a0 = (CKRecord *)0x0;
        local_98 = (CKRecord *)0xe000000000000000;
        local_128 = ppuVar7;
        Swift::_StringGuts::grow(0x1f,_Var18);
        SVar51.bridgeObject = (void *)((ulong)local_f0 | 0x8000000000000000);
        SVar51.str = (char *)0xd000000000000019;
        SVar79.bridgeObject = param_4;
        SVar79.str = (char *)pTVar19;
        Swift::String::append(SVar51,SVar79);
        local_150 = pcVar26;
        objc_stub::recordName((ID)pcVar26);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar80.bridgeObject = param_4;
        SVar80.str = (char *)pTVar19;
        Swift::String::append(SVar37,SVar80);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar52.bridgeObject = &SUB_e200000000000000;
        SVar52.str = (char *)0x203a;
        SVar81.bridgeObject = param_4;
        SVar81.str = (char *)pTVar19;
        Swift::String::append(SVar52,SVar81);
        local_b8 = local_c8;
        Swift::__print_unlocked
                  (&local_b8,&local_a0,uVar12,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        pCVar31 = local_98;
        param_4 = local_118;
        FUN_1000d4e0c(local_a0,local_98,local_120);
        _swift_bridgeObjectRelease(pCVar31);
        FUN_100004594(local_90);
        break;
      case (CKRecord *)0xb:
        pCVar31 = (CKRecord *)0x0;
        local_118 = (CKRecord *)DVar33.unknown;
        FUN_10038fef4();
        local_120 = pCVar31;
        objc_stub::recordName((ID)pcVar26);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        IVar29 = objc_stub::zoneID((ID)pcVar26);
        puVar24 = &DAT_100fbef68;
        FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
        _swift_allocObject();
        *(undefined8 *)(puVar24 + 0x18) = uStack_f8;
        *(undefined **)(puVar24 + 0x10) = local_100.unknown;
        local_140 = (CKRecord *)(puVar24 + 0x20);
        *(undefined8 *)local_140 = 0xd000000000000012;
        *(ID *)(puVar24 + 0x28) = local_d8;
        *(String *)(puVar24 + 0x30) = SVar37;
        *(undefined8 *)(puVar24 + 0x40) = 0xd000000000000010;
        *(long *)(puVar24 + 0x48) = local_e0;
        local_128 = SVar37.bridgeObject;
        _swift_bridgeObjectRetain(SVar37.bridgeObject);
        objc_stub::zoneName(IVar29);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar24 + 0x50) = SVar37;
        *(undefined8 *)(puVar24 + 0x60) = 0xd000000000000015;
        *(long *)(puVar24 + 0x68) = local_e8;
        objc_stub::ownerName(IVar29);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar24 + 0x70) = SVar37;
        puVar14 = puVar24;
        FUN_1003c92b8();
        _swift_setDeallocating(puVar24);
        puVar15 = &DAT_100fbef70;
        FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
        _swift_arrayDestroy(local_140,3,puVar15);
        _swift_deallocClassInstance(puVar24,0x20,7);
        pCVar31 = (CKRecord *)&DAT_100fbef78;
        FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
        ppuVar7 = local_90;
        pCVar11 = local_c0;
        local_90[0] = puVar14;
        local_78 = pCVar31;
        FUN_100328974(ppuVar7,0);
        _swift_bridgeObjectRelease(local_128);
        FUN_100004594(local_90);
        DVar33.unknown = local_118;
        if (((ppuVar7 != (undefined **)0x0) &&
            (IVar29 = objc_stub::FUN_100c05b40((ID)ppuVar7), DVar33.unknown = local_118,
            (int)IVar29 != 0)) &&
           ((FUN_10038f124(), IVar29 == 0 ||
            (IVar29 = objc_stub::isDeleted(IVar29), DVar33.unknown = local_118, (int)IVar29 != 0))))
        {
          FUN_1000d468c(local_90);
          pCVar27 = local_78;
          local_120 = local_70[0];
          ppuVar10 = local_90;
          _Var18.unknown = local_78;
          FUN_100004640();
          local_a0 = (CKRecord *)0x0;
          local_98 = (CKRecord *)0xe000000000000000;
          local_128 = ppuVar10;
          Swift::_StringGuts::grow(0x32,_Var18);
          _swift_bridgeObjectRelease(local_98);
          local_a0 = (CKRecord *)0xd000000000000016;
          local_98 = (CKRecord *)local_108.unknown;
          objc_stub::recordName((ID)pcVar26);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar82.bridgeObject = param_4;
          SVar82.str = (char *)pCVar11;
          Swift::String::append(SVar37,SVar82);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar53.bridgeObject = (void *)((ulong)local_110 | 0x8000000000000000);
          SVar53.str = (char *)0xd00000000000001a;
          SVar83.bridgeObject = param_4;
          SVar83.str = (char *)pCVar11;
          Swift::String::append(SVar53,SVar83);
          pCVar31 = local_98;
          param_4 = local_120;
          FUN_1000d4db8(local_a0,local_98,pCVar27);
          _swift_bridgeObjectRelease(pCVar31);
          FUN_100004594(local_90);
          pCVar31 = (CKRecord *)objc_stub::managedObjectContext((ID)ppuVar7);
          objc_stub::deleteObject_((ID)pCVar31,ppuVar7);
          local_c8 = pCVar31;
          DVar33.unknown = local_118;
        }
      }
    }
    bVar5 = SCARRY8(lVar36,1);
    lVar36 = lVar36 + 1;
    if (bVar5) break;
    if ((long)(uVar23 + 0x3f >> 6) <= lVar36) {
      _swift_release(DVar33.unknown);
      return;
    }
    uVar35 = *(ulong *)((long)(DVar17.unknown + 0x40) + lVar36 * 8);
  }
                    /* WARNING: Does not return */
  pcVar30 = (code *)SoftwareBreakpoint(1,0x1003a0680);
  (*pcVar30)();
}



/* Address: 0x1003a0710 | FUN_1003a0710 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003a0710(long param_1,ID param_2,undefined8 param_3,void *param_4)

{
  __CocoaSet _Var1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  Set<undefined> SVar9;
  Iterator *pIVar10;
  Iterator IVar11;
  ID IVar12;
  _StringGuts _Var13;
  undefined **ppuVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  void *pvVar25;
  ulong *puVar26;
  ulong uVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  undefined *local_270;
  undefined *local_268;
  long local_238;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 auStack_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [8];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined *local_148;
  undefined8 uStack_140;
  undefined *local_138;
  ulong *puStack_130;
  ulong local_128;
  void *pvStack_120;
  ulong local_118;
  undefined *local_110;
  ulong *puStack_108;
  ulong local_100;
  void *pvStack_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong *puStack_e0;
  char *local_d8;
  void *pvStack_d0;
  ulong local_c8;
  undefined *local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  void *pvStack_a8;
  ulong local_a0;
  undefined *local_98;
  ulong *puStack_90;
  char *local_88;
  undefined *local_80;
  void *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    objc_stub::insertedObjects(param_2);
    pvVar8 = (void *)0x0;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    FUN_1003084a8();
    SVar9 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    IVar11.unknown = (undefined *)0x0;
    if (((ulong)SVar9.unknown & 0xc000000000000001) == 0) {
      pvStack_120 = (void *)0x0;
      uVar18 = -1L << ((ulong)(byte)SVar9.unknown[0x20] & 0x3f);
      puVar26 = (ulong *)(SVar9.unknown + 0x38);
      uVar19 = ~uVar18;
      uVar18 = -uVar18;
      local_118 = 0xffffffffffffffff;
      if (uVar18 < 0x40) {
        local_118 = ~(-1L << (uVar18 & 0x3f));
      }
      local_118 = local_118 & *puVar26;
    }
    else {
      _Var1.unknown = SVar9.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar9.unknown) {
        _Var1.unknown = SVar9.unknown;
      }
      pIVar10 = Swift::__CocoaSet::makeIterator(_Var1);
      IVar11 = Swift::Set::Iterator::_init(pIVar10);
      uVar19 = local_128;
      SVar9.unknown = local_138;
      puVar26 = puStack_130;
    }
    local_270 = (undefined *)0x0;
    pvVar25 = pvStack_120;
    uVar18 = local_118;
    while (pvVar17 = pvVar25, uVar27 = uVar18, (long)SVar9.unknown < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar9.unknown & 0x7fffffffffffffff));
      if ((IVar11.unknown == (undefined *)0x0) ||
         (pvVar15 = pvVar8, local_c0 = IVar11.unknown,
         _swift_dynamicCast(&local_98,&local_c0,
                            PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,pvVar8,7),
         puVar21 = local_98, local_98 == (undefined *)0x0)) goto LAB_1003a0a90;
LAB_1003a08e8:
      local_98 = (undefined *)0x0;
      ppuVar14 = &local_98;
      IVar12 = objc_stub::validateForInsert_((ID)puVar21);
      pvVar25 = pvVar17;
      uVar18 = uVar27;
      if ((IVar12 & 1) == 0) {
        IVar11.unknown = local_98;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_1000d468c(&local_98);
        param_4 = local_78;
        puVar24 = local_80;
        _Var13.unknown = local_80;
        FUN_100004640();
        local_c0 = (undefined *)0x0;
        puStack_b8 = (ulong *)0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var13);
        SVar37.bridgeObject = (void *)0x8000000100da4820;
        SVar37.str = (char *)0xd00000000000002a;
        SVar47.bridgeObject = pvVar15;
        SVar47.str = (char *)ppuVar14;
        Swift::String::append(SVar37,SVar47);
        IVar12 = objc_stub::entity((ID)puVar21);
        IVar12 = objc_stub::name(IVar12);
        if (IVar12 == 0) {
          SVar28.bridgeObject = (void *)0xe100000000000000;
          SVar28.str = (char *)0x3f;
        }
        else {
          SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        SVar48.bridgeObject = pvVar15;
        SVar48.str = (char *)ppuVar14;
        Swift::String::append(SVar28,SVar48);
        _swift_bridgeObjectRelease(SVar28.bridgeObject);
        SVar29.bridgeObject = &SUB_e200000000000000;
        SVar29.str = (char *)0x203a;
        SVar49.bridgeObject = pvVar15;
        SVar49.str = (char *)ppuVar14;
        Swift::String::append(SVar29,SVar49);
        _swift_getErrorValue(IVar11.unknown,auStack_200,&local_218);
        Swift::DefaultStringInterpolation::_appendInterpolation(local_218,uStack_210);
        puVar5 = puStack_b8;
        FUN_1000d4e0c(local_c0,puStack_b8,puVar24);
        _swift_bridgeObjectRelease(puVar5);
        FUN_100004594(&local_98);
        objc_stub::deleteObject_(param_2,puVar21);
        _swift_errorRelease();
        bVar7 = SCARRY8((long)local_270,1);
        local_270 = local_270 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a0a8c);
          (*pcVar6)();
        }
      }
      else {
        IVar11.unknown = (undefined *)0x0;
        param_4 = pvVar15;
      }
    }
    while (uVar27 == 0) {
      pvVar15 = (void *)((long)pvVar17 + 1);
      if (SCARRY8((long)pvVar17,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a19fc);
        (*pcVar6)();
      }
      if ((long)(uVar19 + 0x40 >> 6) <= (long)pvVar15) {
        uVar18 = 0;
        goto LAB_1003a0a90;
      }
      pvVar17 = pvVar15;
      uVar27 = puVar26[(long)pvVar15];
    }
    uVar2 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    puVar21 = *(undefined **)
               (*(long *)(SVar9.unknown + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
               (long)pvVar17 * 0x200);
    pvVar15 = param_4;
    uVar27 = uVar27 - 1 & uVar27;
    if (puVar21 != (undefined *)0x0) goto LAB_1003a08e8;
LAB_1003a0a90:
    FUN_10000c650(SVar9.unknown,puVar26,uVar19,pvVar25,uVar18);
    objc_stub::updatedObjects(param_2);
    SVar9 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    IVar11.unknown = (undefined *)0x0;
    if (((ulong)SVar9.unknown & 0xc000000000000001) == 0) {
      pvStack_f8 = (void *)0x0;
      uVar18 = -1L << ((ulong)(byte)SVar9.unknown[0x20] & 0x3f);
      puVar26 = (ulong *)(SVar9.unknown + 0x38);
      uVar19 = ~uVar18;
      uVar18 = -uVar18;
      local_f0 = 0xffffffffffffffff;
      if (uVar18 < 0x40) {
        local_f0 = ~(-1L << (uVar18 & 0x3f));
      }
      local_f0 = local_f0 & *puVar26;
    }
    else {
      _Var1.unknown = SVar9.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar9.unknown) {
        _Var1.unknown = SVar9.unknown;
      }
      pIVar10 = Swift::__CocoaSet::makeIterator(_Var1);
      IVar11 = Swift::Set::Iterator::_init(pIVar10);
      uVar19 = local_100;
      SVar9.unknown = local_110;
      puVar26 = puStack_108;
    }
    local_268 = (undefined *)0x0;
    pvVar17 = pvStack_f8;
    uVar18 = local_f0;
    while (pvVar15 = pvVar17, uVar27 = uVar18, (long)SVar9.unknown < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar9.unknown & 0x7fffffffffffffff));
      if ((IVar11.unknown == (undefined *)0x0) ||
         (pvVar25 = pvVar8, local_c0 = IVar11.unknown,
         _swift_dynamicCast(&local_98,&local_c0,
                            PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,pvVar8,7),
         puVar21 = local_98, local_98 == (undefined *)0x0)) goto LAB_1003a0dbc;
LAB_1003a0c10:
      local_98 = (undefined *)0x0;
      ppuVar14 = &local_98;
      IVar12 = objc_stub::validateForUpdate_((ID)puVar21);
      pvVar17 = pvVar15;
      uVar18 = uVar27;
      if ((IVar12 & 1) == 0) {
        IVar11.unknown = local_98;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_1000d468c(&local_98);
        pvVar15 = local_78;
        puVar24 = local_80;
        _Var13.unknown = local_80;
        FUN_100004640();
        local_c0 = (undefined *)0x0;
        puStack_b8 = (ulong *)0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var13);
        SVar30.bridgeObject = (void *)0x8000000100da47f0;
        SVar30.str = (char *)0xd00000000000002a;
        SVar50.bridgeObject = pvVar25;
        SVar50.str = (char *)ppuVar14;
        Swift::String::append(SVar30,SVar50);
        IVar12 = objc_stub::entity((ID)puVar21);
        IVar12 = objc_stub::name(IVar12);
        if (IVar12 == 0) {
          SVar31.bridgeObject = (void *)0xe100000000000000;
          SVar31.str = (char *)0x3f;
        }
        else {
          SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        SVar51.bridgeObject = pvVar25;
        SVar51.str = (char *)ppuVar14;
        Swift::String::append(SVar31,SVar51);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        SVar32.bridgeObject = &SUB_e200000000000000;
        SVar32.str = (char *)0x203a;
        SVar52.bridgeObject = pvVar25;
        SVar52.str = (char *)ppuVar14;
        Swift::String::append(SVar32,SVar52);
        _swift_getErrorValue(IVar11.unknown,auStack_1e0,&local_1f8);
        Swift::DefaultStringInterpolation::_appendInterpolation(local_1f8,uStack_1f0);
        puVar5 = puStack_b8;
        FUN_1000d4e0c(local_c0,puStack_b8,puVar24,pvVar15);
        _swift_bridgeObjectRelease(puVar5);
        FUN_100004594(&local_98);
        pvVar25 = (void *)0x0;
        objc_stub::FUN_100c08be0(param_2,puVar21);
        _swift_errorRelease();
        bVar7 = SCARRY8((long)local_268,1);
        local_268 = local_268 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a0db8);
          (*pcVar6)();
        }
      }
      else {
        IVar11.unknown = (undefined *)0x0;
      }
    }
    while (uVar27 == 0) {
      pvVar16 = (void *)((long)pvVar15 + 1);
      if (SCARRY8((long)pvVar15,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1a00);
        (*pcVar6)();
      }
      if ((long)(uVar19 + 0x40 >> 6) <= (long)pvVar16) {
        uVar18 = 0;
        goto LAB_1003a0dbc;
      }
      pvVar15 = pvVar16;
      uVar27 = puVar26[(long)pvVar16];
    }
    uVar2 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    puVar21 = *(undefined **)
               (*(long *)(SVar9.unknown + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
               (long)pvVar15 * 0x200);
    uVar27 = uVar27 - 1 & uVar27;
    if (puVar21 != (undefined *)0x0) goto LAB_1003a0c10;
LAB_1003a0dbc:
    FUN_10000c650(SVar9.unknown,puVar26,uVar19,pvVar17,uVar18);
    objc_stub::deletedObjects(param_2);
    SVar9 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    IVar11.unknown = (undefined *)0x0;
    if (((ulong)SVar9.unknown & 0xc000000000000001) == 0) {
      pvVar25 = (void *)0x0;
      uVar18 = -1L << ((ulong)(byte)SVar9.unknown[0x20] & 0x3f);
      puVar26 = (ulong *)(SVar9.unknown + 0x38);
      pcVar20 = (char *)~uVar18;
      uVar18 = -uVar18;
      uVar19 = 0xffffffffffffffff;
      if (uVar18 < 0x40) {
        uVar19 = ~(-1L << (uVar18 & 0x3f));
      }
      uVar19 = uVar19 & *puVar26;
    }
    else {
      _Var1.unknown = SVar9.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar9.unknown) {
        _Var1.unknown = SVar9.unknown;
      }
      pIVar10 = Swift::__CocoaSet::makeIterator(_Var1);
      IVar11 = Swift::Set::Iterator::_init(pIVar10);
      pcVar20 = local_d8;
      pvVar25 = pvStack_d0;
      uVar19 = local_c8;
      puVar26 = puStack_e0;
      SVar9.unknown = local_e8;
    }
    uVar18 = uVar19;
    pvVar15 = pvVar25;
    if (-1 < (long)SVar9.unknown) goto joined_r0x0001003a0f00;
    while ((Swift::__CocoaSet::Iterator::_next
                      ((Iterator *)((ulong)SVar9.unknown & 0x7fffffffffffffff)), pvVar15 = pvVar25,
           uVar18 = uVar19, IVar11.unknown != (undefined *)0x0 &&
           (pvVar17 = pvVar8, local_c0 = IVar11.unknown,
           _swift_dynamicCast(&local_98,&local_c0,
                              PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,pvVar8,7),
           puVar21 = local_98, local_98 != (undefined *)0x0))) {
      while( true ) {
        local_98 = (undefined *)0x0;
        ppuVar14 = &local_98;
        IVar12 = objc_stub::FUN_100c111e0((ID)puVar21);
        if ((IVar12 & 1) == 0) {
          IVar11.unknown = local_98;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_1000d468c(&local_98);
          pvVar15 = local_78;
          puVar24 = local_80;
          _Var13.unknown = local_80;
          FUN_100004640();
          local_c0 = (undefined *)0x0;
          puStack_b8 = (ulong *)0xe000000000000000;
          Swift::_StringGuts::grow(0x30,_Var13);
          SVar33.bridgeObject = (void *)0x8000000100da47c0;
          SVar33.str = (char *)0xd00000000000002a;
          SVar53.bridgeObject = pvVar17;
          SVar53.str = (char *)ppuVar14;
          Swift::String::append(SVar33,SVar53);
          IVar12 = objc_stub::entity((ID)puVar21);
          IVar12 = objc_stub::name(IVar12);
          if (IVar12 == 0) {
            SVar34.bridgeObject = (void *)0xe100000000000000;
            SVar34.str = (char *)0x3f;
          }
          else {
            SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          SVar54.bridgeObject = pvVar17;
          SVar54.str = (char *)ppuVar14;
          Swift::String::append(SVar34,SVar54);
          _swift_bridgeObjectRelease(SVar34.bridgeObject);
          SVar35.bridgeObject = &SUB_e200000000000000;
          SVar35.str = (char *)0x203a;
          SVar55.bridgeObject = pvVar17;
          SVar55.str = (char *)ppuVar14;
          Swift::String::append(SVar35,SVar55);
          _swift_getErrorValue(IVar11.unknown,auStack_1c0,&local_1d8);
          Swift::DefaultStringInterpolation::_appendInterpolation(local_1d8,uStack_1d0);
          puVar5 = puStack_b8;
          FUN_1000d4e0c(local_c0,puStack_b8,puVar24,pvVar15);
          _swift_bridgeObjectRelease(puVar5);
          FUN_100004594(&local_98);
          pvVar17 = (void *)0x0;
          objc_stub::FUN_100c08be0(param_2,puVar21);
          _swift_errorRelease();
        }
        else {
          IVar11.unknown = (undefined *)0x0;
        }
        uVar18 = uVar19;
        pvVar15 = pvVar25;
        if ((long)SVar9.unknown < 0) break;
joined_r0x0001003a0f00:
        while (uVar19 == 0) {
          bVar7 = SCARRY8((long)pvVar25,1);
          pvVar25 = (void *)((long)pvVar25 + 1);
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1a04);
            (*pcVar6)();
          }
          if ((long)((ulong)(pcVar20 + 0x40) >> 6) <= (long)pvVar25) {
            uVar18 = 0;
            goto LAB_1003a10ec;
          }
          uVar19 = puVar26[(long)pvVar25];
        }
        uVar27 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
        uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        uVar19 = uVar19 - 1 & uVar19;
        puVar21 = *(undefined **)
                   (*(long *)(SVar9.unknown + 0x30) + LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) * 8 +
                   (long)pvVar25 * 0x200);
        if (puVar21 == (undefined *)0x0) goto LAB_1003a10ec;
      }
    }
LAB_1003a10ec:
    FUN_10000c650(SVar9.unknown,puVar26,pcVar20,pvVar15,uVar18);
    lVar3 = _TtC9PasteCore10SyncEngine::logger;
    if ((0 < (long)local_270) || (0 < (long)local_268)) {
      uVar23 = *(undefined8 *)(param_1 + _TtC9PasteCore10SyncEngine::logger);
      _swift_retain(uVar23);
      FUN_1000d468c(&local_98);
      _swift_release(uVar23);
      pvVar25 = local_78;
      puVar21 = local_80;
      _Var13.unknown = local_80;
      FUN_100004640(&local_98);
      local_c0 = (undefined *)0x0;
      puStack_b8 = (ulong *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3d,_Var13);
      SVar36.bridgeObject = (void *)0x8000000100da46d0;
      SVar36.str = (char *)0xd000000000000017;
      SVar56.bridgeObject = pvVar15;
      SVar56.str = pcVar20;
      Swift::String::append(SVar36,SVar56);
      local_160 = local_270;
      SVar37 = Swift::CustomStringConvertible::get_description();
      SVar57.bridgeObject = pvVar15;
      SVar57.str = pcVar20;
      Swift::String::append(SVar37,SVar57);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      SVar38.bridgeObject = (void *)0x8000000100da46f0;
      SVar38.str = (char *)0xd000000000000012;
      SVar58.bridgeObject = pvVar15;
      SVar58.str = pcVar20;
      Swift::String::append(SVar38,SVar58);
      local_160 = local_268;
      SVar37 = Swift::CustomStringConvertible::get_description();
      SVar59.bridgeObject = pvVar15;
      SVar59.str = pcVar20;
      Swift::String::append(SVar37,SVar59);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      SVar39.bridgeObject = (void *)0x8000000100da4710;
      SVar39.str = (char *)0xd000000000000010;
      SVar60.bridgeObject = pvVar15;
      SVar60.str = pcVar20;
      Swift::String::append(SVar39,SVar60);
      puVar26 = puStack_b8;
      FUN_1000d4dd4(local_c0,puStack_b8,puVar21);
      _swift_bridgeObjectRelease(puVar26);
      FUN_100004594(&local_98);
      objc_stub::insertedObjects(param_2);
      SVar9 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
      IVar11.unknown = (undefined *)0x0;
      if (((ulong)SVar9.unknown & 0xc000000000000001) == 0) {
        pvStack_a8 = (void *)0x0;
        uVar18 = -1L << ((ulong)(byte)SVar9.unknown[0x20] & 0x3f);
        puVar26 = (ulong *)(SVar9.unknown + 0x38);
        uVar19 = ~uVar18;
        uVar18 = -uVar18;
        local_a0 = 0xffffffffffffffff;
        if (uVar18 < 0x40) {
          local_a0 = ~(-1L << (uVar18 & 0x3f));
        }
        local_a0 = local_a0 & *puVar26;
      }
      else {
        _Var1.unknown = SVar9.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < SVar9.unknown) {
          _Var1.unknown = SVar9.unknown;
        }
        pIVar10 = Swift::__CocoaSet::makeIterator(_Var1);
        IVar11 = Swift::Set::Iterator::_init(pIVar10);
        uVar19 = local_b0;
        SVar9.unknown = local_c0;
        puVar26 = puStack_b8;
      }
      local_238 = 0;
      pvVar17 = pvStack_a8;
      uVar18 = local_a0;
      while (pvVar15 = pvVar17, uVar27 = uVar18, (long)SVar9.unknown < 0) {
        Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar9.unknown & 0x7fffffffffffffff));
        if ((IVar11.unknown == (undefined *)0x0) ||
           (pvVar16 = pvVar8, local_160 = IVar11.unknown,
           _swift_dynamicCast(&local_98,&local_160,
                              PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,pvVar8,7),
           puVar21 = local_98, local_98 == (undefined *)0x0)) goto LAB_1003a1564;
LAB_1003a13b8:
        local_98 = (undefined *)0x0;
        ppuVar14 = &local_98;
        IVar12 = objc_stub::validateForInsert_((ID)puVar21);
        pvVar17 = pvVar15;
        uVar18 = uVar27;
        if ((IVar12 & 1) == 0) {
          IVar11.unknown = local_98;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_1000d468c(&local_98);
          pvVar25 = local_78;
          puVar24 = local_80;
          _Var13.unknown = local_80;
          FUN_100004640();
          local_160 = (undefined *)0x0;
          uStack_158 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x2f,_Var13);
          SVar40.bridgeObject = (void *)0x8000000100da4790;
          SVar40.str = (char *)0xd000000000000029;
          SVar61.bridgeObject = pvVar16;
          SVar61.str = (char *)ppuVar14;
          Swift::String::append(SVar40,SVar61);
          IVar12 = objc_stub::entity((ID)puVar21);
          IVar12 = objc_stub::name(IVar12);
          if (IVar12 == 0) {
            SVar41.bridgeObject = (void *)0xe100000000000000;
            SVar41.str = (char *)0x3f;
          }
          else {
            SVar41 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          SVar62.bridgeObject = pvVar16;
          SVar62.str = (char *)ppuVar14;
          Swift::String::append(SVar41,SVar62);
          _swift_bridgeObjectRelease(SVar41.bridgeObject);
          SVar42.bridgeObject = &SUB_e200000000000000;
          SVar42.str = (char *)0x203a;
          SVar63.bridgeObject = pvVar16;
          SVar63.str = (char *)ppuVar14;
          Swift::String::append(SVar42,SVar63);
          _swift_getErrorValue(IVar11.unknown,auStack_1a0,&local_1b8);
          Swift::DefaultStringInterpolation::_appendInterpolation(local_1b8,uStack_1b0);
          uVar23 = uStack_158;
          FUN_1000d4e0c(local_160,uStack_158,puVar24);
          _swift_bridgeObjectRelease(uVar23);
          FUN_100004594(&local_98);
          objc_stub::deleteObject_(param_2,puVar21);
          _swift_errorRelease();
          bVar7 = SCARRY8(local_238,1);
          local_238 = local_238 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1560);
            (*pcVar6)();
          }
        }
        else {
          IVar11.unknown = (undefined *)0x0;
          pvVar25 = pvVar16;
        }
      }
      while (uVar27 == 0) {
        pvVar16 = (void *)((long)pvVar15 + 1);
        if (SCARRY8((long)pvVar15,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1a08);
          (*pcVar6)();
        }
        if ((long)(uVar19 + 0x40 >> 6) <= (long)pvVar16) {
          uVar18 = 0;
          goto LAB_1003a1564;
        }
        pvVar15 = pvVar16;
        uVar27 = puVar26[(long)pvVar16];
      }
      uVar2 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar21 = *(undefined **)
                 (*(long *)(SVar9.unknown + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                 (long)pvVar15 * 0x200);
      pvVar16 = pvVar25;
      uVar27 = uVar27 - 1 & uVar27;
      if (puVar21 != (undefined *)0x0) goto LAB_1003a13b8;
LAB_1003a1564:
      FUN_10000c650(SVar9.unknown,puVar26,uVar19,pvVar17,uVar18);
      objc_stub::updatedObjects(param_2);
      SVar9 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
      IVar11.unknown = (undefined *)0x0;
      if (((ulong)SVar9.unknown & 0xc000000000000001) == 0) {
        local_80 = (undefined *)0x0;
        uVar18 = -1L << ((ulong)(byte)SVar9.unknown[0x20] & 0x3f);
        puVar26 = (ulong *)(SVar9.unknown + 0x38);
        pcVar20 = (char *)~uVar18;
        uVar18 = -uVar18;
        uVar19 = 0xffffffffffffffff;
        if (uVar18 < 0x40) {
          uVar19 = ~(-1L << (uVar18 & 0x3f));
        }
        local_78 = (void *)(uVar19 & *puVar26);
      }
      else {
        _Var1.unknown = SVar9.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < SVar9.unknown) {
          _Var1.unknown = SVar9.unknown;
        }
        pIVar10 = Swift::__CocoaSet::makeIterator(_Var1);
        IVar11 = Swift::Set::Iterator::_init(pIVar10);
        pcVar20 = local_88;
        puVar26 = puStack_90;
        SVar9.unknown = local_98;
      }
      puVar21 = local_80;
      pvVar25 = local_78;
      while (puVar24 = puVar21, pvVar15 = pvVar25, (long)SVar9.unknown < 0) {
        Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar9.unknown & 0x7fffffffffffffff));
        if ((IVar11.unknown == (undefined *)0x0) ||
           (pvVar17 = pvVar8, local_170 = IVar11.unknown,
           _swift_dynamicCast(&local_160,&local_170,
                              PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,pvVar8,7),
           puVar22 = local_160, local_160 == (undefined *)0x0)) goto LAB_1003a188c;
LAB_1003a16dc:
        local_160 = (undefined *)0x0;
        ppuVar14 = &local_160;
        IVar12 = objc_stub::validateForUpdate_((ID)puVar22);
        puVar21 = puVar24;
        pvVar25 = pvVar15;
        if ((IVar12 & 1) == 0) {
          IVar11.unknown = local_160;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_1000d468c(&local_160);
          uVar23 = uStack_140;
          puVar24 = local_148;
          _Var13.unknown = local_148;
          FUN_100004640();
          local_170 = (undefined *)0x0;
          local_168 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x2f,_Var13);
          SVar43.bridgeObject = (void *)0x8000000100da4760;
          SVar43.str = (char *)0xd000000000000029;
          SVar64.bridgeObject = pvVar17;
          SVar64.str = (char *)ppuVar14;
          Swift::String::append(SVar43,SVar64);
          IVar12 = objc_stub::entity((ID)puVar22);
          IVar12 = objc_stub::name(IVar12);
          if (IVar12 == 0) {
            SVar44.bridgeObject = (void *)0xe100000000000000;
            SVar44.str = (char *)0x3f;
          }
          else {
            SVar44 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          SVar65.bridgeObject = pvVar17;
          SVar65.str = (char *)ppuVar14;
          Swift::String::append(SVar44,SVar65);
          _swift_bridgeObjectRelease(SVar44.bridgeObject);
          SVar45.bridgeObject = &SUB_e200000000000000;
          SVar45.str = (char *)0x203a;
          SVar66.bridgeObject = pvVar17;
          SVar66.str = (char *)ppuVar14;
          Swift::String::append(SVar45,SVar66);
          _swift_getErrorValue(IVar11.unknown,auStack_180,&local_198);
          Swift::DefaultStringInterpolation::_appendInterpolation(local_198,uStack_190);
          uVar4 = local_168;
          FUN_1000d4e0c(local_170,local_168,puVar24,uVar23);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100004594(&local_160);
          pvVar17 = (void *)0x0;
          objc_stub::FUN_100c08be0(param_2,puVar22);
          _swift_errorRelease();
          bVar7 = SCARRY8(local_238,1);
          local_238 = local_238 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1888);
            (*pcVar6)();
          }
        }
        else {
          IVar11.unknown = (undefined *)0x0;
        }
      }
      while (pvVar15 == (void *)0x0) {
        puVar22 = puVar24 + 1;
        if (SCARRY8((long)puVar24,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003a1a0c);
          (*pcVar6)();
        }
        if ((long)((ulong)(pcVar20 + 0x40) >> 6) <= (long)puVar22) {
          pvVar25 = (void *)0x0;
          goto LAB_1003a188c;
        }
        puVar24 = puVar22;
        pvVar15 = (void *)puVar26[(long)puVar22];
      }
      uVar19 = ((ulong)pvVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)pvVar15 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      puVar22 = *(undefined **)
                 (*(long *)(SVar9.unknown + 0x30) + LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) * 8 +
                 (long)puVar24 * 0x200);
      pvVar15 = (void *)((long)pvVar15 - 1U & (ulong)pvVar15);
      if (puVar22 != (undefined *)0x0) goto LAB_1003a16dc;
LAB_1003a188c:
      FUN_10000c650(SVar9.unknown,puVar26,pcVar20,puVar21,pvVar25);
      if (0 < local_238) {
        uVar23 = *(undefined8 *)(param_1 + lVar3);
        _swift_retain(uVar23);
        FUN_1000d468c(&local_160);
        _swift_release(uVar23);
        _Var13.unknown = local_148;
        FUN_100004640(&local_160);
        local_170 = (undefined *)0x0;
        local_168 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x32,_Var13);
        _swift_bridgeObjectRelease(local_168);
        local_170 = (undefined *)0xd000000000000023;
        local_168 = 0x8000000100da4730;
        local_178 = local_238;
        SVar37 = Swift::CustomStringConvertible::get_description();
        SVar67.bridgeObject = puVar21;
        SVar67.str = pcVar20;
        Swift::String::append(SVar37,SVar67);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar46.bridgeObject = (void *)0xed0000737463656a;
        SVar46.str = (char *)0x626f2065726f6d20;
        SVar68.bridgeObject = puVar21;
        SVar68.str = pcVar20;
        Swift::String::append(SVar46,SVar68);
        uVar23 = local_168;
        FUN_1000d4dd4(local_170,local_168,local_148,uStack_140);
        _swift_bridgeObjectRelease(uVar23);
        _swift_release(param_1);
        FUN_100004594(&local_160);
        goto LAB_1003a19bc;
      }
    }
    _swift_release(param_1);
  }
LAB_1003a19bc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1003a1a10 | FUN_1003a1a10 */

undefined1  [16] FUN_1003a1a10(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0x6e776f6e6b6e75;
  if (param_1 == 3) {
    uVar4 = 0x646572616873;
  }
  puVar1 = &DAT_e700000000000000;
  if (param_1 == 3) {
    puVar1 = &DAT_e600000000000000;
  }
  uVar2 = 0x65746176697270;
  if (param_1 != 2) {
    uVar2 = uVar4;
  }
  puVar3 = &DAT_e700000000000000;
  if (param_1 != 2) {
    puVar3 = puVar1;
  }
  uVar4 = 0x63696c627570;
  if (param_1 != 1) {
    uVar4 = uVar2;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 1) {
    puVar1 = puVar3;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x1003a1a80 | FUN_1003a1a80 */

undefined1  [16] FUN_1003a1a80(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  
  lVar5 = *unaff_x20;
  uVar4 = 0x6e776f6e6b6e75;
  if (lVar5 == 3) {
    uVar4 = 0x646572616873;
  }
  puVar1 = &DAT_e700000000000000;
  if (lVar5 == 3) {
    puVar1 = &DAT_e600000000000000;
  }
  uVar2 = 0x65746176697270;
  if (lVar5 != 2) {
    uVar2 = uVar4;
  }
  puVar3 = &DAT_e700000000000000;
  if (lVar5 != 2) {
    puVar3 = puVar1;
  }
  uVar4 = 0x63696c627570;
  if (lVar5 != 1) {
    uVar4 = uVar2;
  }
  puVar1 = &DAT_e600000000000000;
  if (lVar5 != 1) {
    puVar1 = puVar3;
  }
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1003a1af4 | FUN_1003a1af4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a1af4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  bool bVar3;
  FailedZoneSave FVar4;
  FailedZoneSave FVar5;
  ID IVar6;
  ID IVar7;
  CKRecordZone *self;
  FailedZoneSave FVar8;
  undefined8 uVar9;
  Dictionary<CKRecordZoneID,CloudKit_CKSyncEngine_Event_SentDatabaseChanges_failedZoneDeletes_getter_:_[__C_CKRecordZoneID_:___C_Synthesized_related_decl__e__for_CKErrorCode]>
  DVar10;
  _StringGuts _Var11;
  char *pcVar12;
  FailedZoneSave FVar13;
  void *pvVar14;
  long extraout_x8;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long extraout_x12;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ID IVar23;
  ulong uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  long local_f0;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  char *local_70;
  void *pvStack_68;
  
  FVar4 = CloudKit::CKSyncEngine::Event::SentDatabaseChanges::FailedZoneSave::typeMetadataAccessor()
  ;
  lVar20 = *(long *)(FVar4.unknown + -8);
  FVar5 = FVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar22 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar22 - extraout_x12;
  CloudKit::CKSyncEngine::Event::SentDatabaseChanges::get_savedZones
            ((SentDatabaseChanges)FVar5.unknown);
  if ((ulong)FVar5.unknown >> 0x3e == 0) {
    IVar6 = *(ID *)(((ulong)FVar5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = FVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < FVar5.unknown) {
      _Var1.unknown = FVar5.unknown;
    }
    IVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  local_f0 = lVar21;
  if (IVar6 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    if ((long)IVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1003a229c);
      (*pcVar15)();
    }
    IVar23 = 0;
    pcVar12 = param_3;
    pvVar14 = param_4;
    do {
      if (((ulong)FVar5.unknown & 0xc000000000000001) == 0) {
        IVar7 = *(ID *)(FVar5.unknown + IVar23 * 8 + 0x20);
      }
      else {
        IVar7 = IVar23;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar23,(_ArrayBuffer)FVar5.unknown);
      }
      IVar23 = IVar23 + 1;
      FUN_1000d468c(auStack_88);
      param_4 = pvStack_68;
      param_3 = local_70;
      _Var11.unknown = local_70;
      FUN_100004640(auStack_88);
      local_98 = 0;
      local_90 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1b,_Var11);
      _swift_bridgeObjectRelease(local_90);
      local_98 = 0xd000000000000019;
      local_90 = 0x8000000100da4850;
      IVar7 = objc_stub::zoneID(IVar7);
      objc_stub::zoneName(IVar7);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar29.bridgeObject = pvVar14;
      SVar29.str = pcVar12;
      Swift::String::append(SVar25,SVar29);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      uVar9 = local_90;
      FUN_1000d4db8(local_98,local_90);
      _swift_bridgeObjectRelease(uVar9);
      FUN_100004594(auStack_88);
      pcVar12 = param_3;
      pvVar14 = param_4;
    } while (IVar6 != IVar23);
    _swift_bridgeObjectRelease();
  }
  CloudKit::CKSyncEngine::Event::SentDatabaseChanges::get_failedZoneSaves
            ((SentDatabaseChanges)FVar5.unknown);
  lVar2 = local_f0;
  lVar21 = *(long *)(FVar5.unknown + 0x10);
  if (lVar21 != 0) {
    puVar19 = FVar5.unknown +
              ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar20 + 0x48);
    pcVar15 = *(code **)(lVar20 + 0x10);
    pvVar14 = param_4;
    do {
      (*pcVar15)(lVar2,puVar19,FVar4.unknown);
      FVar13 = FVar4;
      (**(code **)(lVar20 + 0x20))(lVar22,lVar2);
      FUN_1000d468c(auStack_88);
      param_4 = pvStack_68;
      param_3 = local_70;
      _Var11.unknown = local_70;
      FUN_100004640(auStack_88);
      local_98 = 0;
      local_90 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x27,_Var11);
      FVar8.unknown = (undefined *)0xd000000000000021;
      SVar25.bridgeObject = (void *)0x8000000100da4870;
      SVar25.str = (char *)0xd000000000000021;
      SVar30.bridgeObject = pvVar14;
      SVar30.str = FVar13.unknown;
      Swift::String::append(SVar25,SVar30);
      self = CloudKit::CKSyncEngine::Event::SentDatabaseChanges::FailedZoneSave::get_zone(FVar8);
      IVar6 = objc_stub::zoneID((ID)self);
      objc_stub::zoneName(IVar6);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar31.bridgeObject = pvVar14;
      SVar31.str = FVar13.unknown;
      Swift::String::append(SVar25,SVar31);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      SVar26.bridgeObject = &SUB_e200000000000000;
      SVar26.str = (char *)0x203a;
      FVar8.unknown = (undefined *)0x203a;
      SVar32.bridgeObject = pvVar14;
      SVar32.str = FVar13.unknown;
      Swift::String::append(SVar26,SVar32);
      CloudKit::CKSyncEngine::Event::SentDatabaseChanges::FailedZoneSave::_get_error(FVar8);
      uVar9 = 0;
      local_a0 = FVar8.unknown;
      FUN_1002fbb58(0);
      Swift::__print_unlocked
                (&local_a0,&local_98,uVar9,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      uVar9 = local_90;
      FUN_1000d4e0c(local_98,local_90);
      _swift_bridgeObjectRelease(uVar9);
      (**(code **)(lVar20 + 8))(lVar22,FVar4.unknown);
      FUN_100004594(auStack_88);
      puVar19 = puVar19 + lVar17;
      lVar21 = lVar21 + -1;
      pvVar14 = param_4;
    } while (lVar21 != 0);
  }
  _swift_bridgeObjectRelease();
  CloudKit::CKSyncEngine::Event::SentDatabaseChanges::get_deletedZoneIDs
            ((SentDatabaseChanges)FVar5.unknown);
  if ((ulong)FVar5.unknown >> 0x3e == 0) {
    IVar6 = *(ID *)(((ulong)FVar5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = FVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < FVar5.unknown) {
      _Var1.unknown = FVar5.unknown;
    }
    IVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar6 != 0) {
    if ((long)IVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1003a22a0);
      (*pcVar15)();
    }
    IVar23 = 0;
    pcVar12 = param_3;
    pvVar14 = param_4;
    do {
      if (((ulong)FVar5.unknown & 0xc000000000000001) == 0) {
        IVar7 = *(ID *)(FVar5.unknown + IVar23 * 8 + 0x20);
      }
      else {
        IVar7 = IVar23;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar23,(_ArrayBuffer)FVar5.unknown);
      }
      IVar23 = IVar23 + 1;
      FUN_1000d468c(auStack_88);
      param_4 = pvStack_68;
      param_3 = local_70;
      _Var11.unknown = local_70;
      FUN_100004640(auStack_88);
      local_98 = 0;
      local_90 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1d,_Var11);
      _swift_bridgeObjectRelease(local_90);
      local_98 = 0xd00000000000001b;
      local_90 = 0x8000000100da4570;
      objc_stub::zoneName(IVar7);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar33.bridgeObject = pvVar14;
      SVar33.str = pcVar12;
      Swift::String::append(SVar25,SVar33);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      uVar9 = local_90;
      FUN_1000d4db8(local_98,local_90);
      _swift_bridgeObjectRelease(uVar9);
      FUN_100004594(auStack_88);
      pcVar12 = param_3;
      pvVar14 = param_4;
    } while (IVar6 != IVar23);
  }
  _swift_bridgeObjectRelease();
  DVar10 = CloudKit::CKSyncEngine::Event::SentDatabaseChanges::_get_failedZoneDeletes(FVar5.unknown)
  ;
  lVar20 = 0;
  uVar18 = 1L << ((ulong)(byte)DVar10.unknown[0x20] & 0x3f);
  uVar24 = 0xffffffffffffffff;
  if ((DVar10.unknown[0x20] & 0x3f) < 6) {
    uVar24 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar24 = uVar24 & *(ulong *)(DVar10.unknown + 0x40);
  while( true ) {
    for (; uVar24 != 0; uVar24 = uVar24 - 1 & uVar24) {
      uVar16 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = lVar20 << 9 | LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) << 3;
      IVar6 = *(ID *)(*(long *)(DVar10.unknown + 0x30) + uVar16);
      puVar19 = *(undefined **)(*(long *)(DVar10.unknown + 0x38) + uVar16);
      FUN_1000d468c(auStack_88);
      pvVar14 = pvStack_68;
      pcVar12 = local_70;
      _Var11.unknown = local_70;
      FUN_100004640();
      local_98 = 0;
      local_90 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x29,_Var11);
      SVar27.bridgeObject = (void *)0x8000000100da48a0;
      SVar27.str = (char *)0xd000000000000023;
      SVar34.bridgeObject = param_4;
      SVar34.str = param_3;
      Swift::String::append(SVar27,SVar34);
      objc_stub::zoneName(IVar6);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar35.bridgeObject = param_4;
      SVar35.str = param_3;
      Swift::String::append(SVar25,SVar35);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      SVar28.bridgeObject = &SUB_e200000000000000;
      SVar28.str = (char *)0x203a;
      SVar36.bridgeObject = param_4;
      SVar36.str = param_3;
      Swift::String::append(SVar28,SVar36);
      uVar9 = 0;
      local_a0 = puVar19;
      FUN_1002fbb58(0);
      Swift::__print_unlocked
                (&local_a0,&local_98,uVar9,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      uVar9 = local_90;
      FUN_1000d4e0c(local_98,local_90);
      _swift_bridgeObjectRelease(uVar9);
      FUN_100004594(auStack_88);
      param_3 = pcVar12;
      param_4 = pvVar14;
    }
    bVar3 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar3) break;
    if ((long)(uVar18 + 0x3f >> 6) <= lVar20) {
      _swift_release(DVar10.unknown);
      return;
    }
    uVar24 = *(ulong *)((long)(DVar10.unknown + 0x40) + lVar20 * 8);
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1003a2298);
  (*pcVar15)();
}



/* Address: 0x1003a22a0 | FUN_1003a22a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a22a0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a22ec | FUN_1003a22ec */

void FUN_1003a22ec(void)

{
  long unaff_x20;
  
  FUN_10039c9d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1003a2320 | FUN_1003a2320 */

void FUN_1003a2320(long param_1,long param_2)

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



/* Address: 0x1003a2334 | FUN_1003a2334 */

void FUN_1003a2334(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003a233c | FUN_1003a233c */

void FUN_1003a233c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001a7a2c;
  FUN_10039da10(param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003a239c | FUN_1003a239c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a239c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a23d0 | FUN_1003a23d0 */

void FUN_1003a23d0(void)

{
  long unaff_x20;
  
  FUN_10039db9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1003a23dc | FUN_1003a23dc */

void FUN_1003a23dc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a23ec | FUN_1003a23ec */

void FUN_1003a23ec(void)

{
  long unaff_x20;
  
  FUN_1003899d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003a2408 | FUN_1003a2408 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a2408(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a242c | FUN_1003a242c */

void FUN_1003a242c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10039333c(uVar1);
  FUN_1003a29e0(uVar1);
  FUN_1003a29f4(uVar1);
  return;
}



/* Address: 0x1003a245c | FUN_1003a245c */

void FUN_1003a245c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a2480 | FUN_1003a2480 */

void FUN_1003a2480(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a24a4 | FUN_1003a24a4 */

void FUN_1003a24a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a24e0 | FUN_1003a24e0 */

void FUN_1003a24e0(void)

{
  long unaff_x20;
  
  FUN_100385b94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1003a24fc | FUN_1003a24fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a24fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a2528 | FUN_1003a2528 */

void FUN_1003a2528(void)

{
  long unaff_x20;
  
  FUN_1003a0710(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003a2540 | FUN_1003a2540 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a2540(void)

{
  SentRecordZoneChanges SVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  SVar1 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::typeMetadataAccessor();
  lVar2 = *(long *)(SVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,SVar1.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a25dc | FUN_1003a25dc */

void FUN_1003a25dc(void)

{
  SentRecordZoneChanges SVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  SVar1 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(SVar1.unknown + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(SVar1.unknown + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_10039e1a8(unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + uVar2 + 8),*(undefined8 *)(unaff_x20 + uVar2 + 0x10),
                *(undefined8 *)(unaff_x20 + uVar2 + 0x18),*(undefined8 *)(unaff_x20 + uVar2 + 0x20))
  ;
  return;
}



/* Address: 0x1003a264c | thunk_FUN_1003b1f24 */

void thunk_FUN_1003b1f24(void)

{
  FUN_1003b1f24();
  return;
}



/* Address: 0x1003a2650 | thunk_FUN_1003b1f90 */

void thunk_FUN_1003b1f90(void)

{
  FUN_1003b1f90();
  return;
}



/* Address: 0x1003a2654 | FUN_1003a2654 */

undefined8 FUN_1003a2654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2280;
  FUN_1000037f0(&DAT_100fc2280,&DAT_100c440a8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003a26a4 | FUN_1003a26a4 */

undefined8 FUN_1003a26a4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2280;
  FUN_1000037f0(&DAT_100fc2280,&DAT_100c440a8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003a26ec | FUN_1003a26ec */

undefined8 FUN_1003a26ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}


