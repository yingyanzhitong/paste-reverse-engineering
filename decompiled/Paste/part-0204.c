/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10025cb30 | FUN_10025cb30 */

void FUN_10025cb30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar4 = _TtC22PasteLicensingAppStore16PaywallViewModel::_state;
  puVar5 = &DAT_100fb8ed8;
  FUN_1000037f0(&DAT_100fb8ed8,&DAT_100c38980);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  lVar4 = _TtC22PasteLicensingAppStore16PaywallViewModel::_subscriptionsTrialEligibility;
  puVar5 = &DAT_100fb8ee0;
  FUN_1000037f0(&DAT_100fb8ee0,&DAT_100c38988);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  lVar4 = _TtC22PasteLicensingAppStore16PaywallViewModel::_isTrialEligible;
  puVar5 = &DAT_100fb8ee8;
  FUN_1000037f0(&DAT_100fb8ee8,&DAT_100c38990);
  pcVar6 = *(code **)(*(long *)(puVar5 + -8) + 8);
  (*pcVar6)(unaff_x20 + lVar4,puVar5);
  (*pcVar6)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::_isShowingAllPlans,puVar5);
  (*pcVar6)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::_isShowingTrialStarted,
            puVar5);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions));
  lVar4 = _TtC22PasteLicensingAppStore16PaywallViewModel::_defaultSubscription;
  puVar5 = &DAT_100fb8ef0;
  FUN_1000037f0(&DAT_100fb8ef0,&DAT_100c38998);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  lVar4 = _TtC22PasteLicensingAppStore16PaywallViewModel::_effectiveVariant;
  puVar5 = &DAT_100fb8ef8;
  FUN_1000037f0(&DAT_100fb8ef8,&DAT_100c389a0);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
  FUN_10025f528(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
  FUN_100005808(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,
                &DAT_100fb8618,&DAT_100c385c0);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::licenseManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptionManager))
  ;
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC22PasteLicensingAppStore16PaywallViewModel::localNotificationService));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::offerManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::analytics));
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::_paywallVariant);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_release(puVar1[2]);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::cancellables));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::restorePurchasesTask)
                );
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
  FUN_10025fb30(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],puVar1[9],puVar1[10],puVar1[0xb]);
  FUN_100004594(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::router);
  return;
}



/* Address: 0x10025cd9c | FUN_10025cd9c */

void FUN_10025cd9c(void)

{
  FUN_10025cb30();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10025cdc0 | FUN_10025cdc0 */

void FUN_10025cdc0(void)

{
  FUN_10025cdc8(0);
  return;
}



/* Address: 0x10025cdc8 | FUN_10025cdc8 */

void FUN_10025cdc8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb8970,&TargetClassDescriptor_100ca9928);
  return;
}



/* Address: 0x10025cddc | FUN_10025cddc */

void FUN_10025cddc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar3 = &DAT_100fb8980;
  lVar2 = 0x13f;
  FUN_1000c9144(0x13f,&DAT_100fb8980,FUN_10025cfc4,PTR_typeMetadataAccessor_100ea98d8);
  if (puVar3 < (undefined *)0x40) {
    local_e8 = *(long *)(lVar2 + -8) + 0x40;
    puVar3 = &DAT_100fb8988;
    lVar2 = 0x13f;
    FUN_100007750(0x13f,&DAT_100fb8988,&DAT_100fb8990,&DAT_100c385b8);
    if (puVar3 < (undefined *)0x40) {
      local_e0 = *(long *)(lVar2 + -8) + 0x40;
      puVar3 = &DAT_100fb8998;
      lVar2 = 0x13f;
      FUN_1000f0a38(0x13f,&DAT_100fb8998,PTR___type_metadata_for_Swift_Bool_100eac570);
      puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38;
      if (puVar3 < (undefined *)0x40) {
        local_d8 = *(long *)(lVar2 + -8) + 0x40;
        puStack_c0 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
        puVar3 = &DAT_100fb89a0;
        lVar2 = 0x13f;
        lStack_d0 = local_d8;
        local_c8 = local_d8;
        FUN_100007750(0x13f,&DAT_100fb89a0,&DAT_100fb8618,&DAT_100c385c0);
        if (puVar3 < (undefined *)0x40) {
          local_b8 = *(long *)(lVar2 + -8) + 0x40;
          puVar3 = &DAT_100fb89a8;
          lVar2 = 0x13f;
          FUN_1000f0a38(0x13f,&DAT_100fb89a8,&DAT_100ec4358);
          if (puVar3 < (undefined *)0x40) {
            local_b0 = *(long *)(lVar2 + -8) + 0x40;
            puStack_a8 = &DAT_100c385c8;
            puVar3 = &DAT_100fb89b0;
            lVar2 = 0x13f;
            FUN_1000c9144(0x13f,&DAT_100fb89b0,FUN_1002abb94,PTR_typeMetadataAccessor_100eac9c8);
            if (puVar3 < (undefined *)0x40) {
              local_a0 = *(long *)(lVar2 + -8) + 0x40;
              puStack_98 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
              local_70 = &DAT_100c385e0;
              puStack_68 = &DAT_100c385f8;
              local_60 = &DAT_100c385f8;
              puStack_58 = &DAT_100c385f8;
              local_50 = puVar1 + 0x40;
              puStack_48 = &DAT_100c38610;
              local_40 = &DAT_100c38628;
              puStack_38 = &DAT_100c385f8;
              local_30 = &DAT_100c38640;
              puStack_28 = &DAT_100c38658;
              local_90 = puStack_98;
              puStack_88 = puStack_98;
              local_80 = puStack_98;
              puStack_78 = puStack_98;
              _swift_updateClassMetadata2(param_1,0x100,0x19,&local_e8,param_1 + 0x50);
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10025cfc4 | FUN_10025cfc4 */

void FUN_10025cfc4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb8e30,&TargetEnumDescriptor_100ca9c30);
  return;
}



/* Address: 0x10025cfd8 | FUN_10025cfd8 */

long * FUN_10025cfd8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  DateComponents DVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  Product PVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  lVar13 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar13 + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar12 = (ulong)uVar3 & 0xff;
    _swift_retain();
    return (long *)(lVar13 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
  }
  plVar8 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)plVar8 != 1) {
    if ((int)plVar8 != 0) {
      plVar8 = _memcpy(param_1,param_2,*(size_t *)(lVar13 + 0x40));
      return plVar8;
    }
    *(char *)param_1 = (char)*param_2;
    lVar5 = 0;
    FUN_1002abb94();
    lVar14 = (long)*(int *)(lVar5 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar15 = *(long *)(DVar6.unknown + -8);
    lVar13 = (long)param_2 + lVar14;
    (**(code **)(lVar15 + 0x30))(lVar13,1,DVar6.unknown);
    if ((int)lVar13 == 0) {
      (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar6.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar13 = 0;
    FUN_1002abbf0();
    lVar14 = *(long *)(lVar13 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar14 + 0x30))(puVar2,1,lVar13);
    if ((int)puVar9 == 0) {
      puVar9 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar13);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar11 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar11;
        _swift_bridgeObjectRetain();
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar16 = *(code **)(lVar15 + 0x10);
        (*pcVar16)((long)puVar1 + (long)*(int *)(puVar7 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar7 + 0x30),DVar6.unknown);
        (*pcVar16)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar7 + 0x40),DVar6.unknown);
      }
      else {
        (**(code **)(lVar15 + 0x10))(puVar1,puVar2,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar13);
    }
    else {
      puVar7 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(lVar5 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,PVar10.unknown);
    uVar11 = 0;
    goto LAB_10025d2ec;
  }
  lVar13 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar13;
  lVar13 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar13;
  lVar5 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar13);
  if (lVar5 == 0) {
    lVar13 = param_2[4];
    lVar14 = param_2[7];
    lVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar13;
    param_1[7] = lVar14;
    param_1[6] = lVar5;
    lVar13 = param_2[9];
    if (lVar13 != 0) goto LAB_10025d104;
LAB_10025d268:
    lVar13 = param_2[8];
    lVar14 = param_2[0xb];
    lVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar13;
    param_1[0xb] = lVar14;
    param_1[10] = lVar5;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar5;
    lVar13 = param_2[7];
    lVar14 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar14;
    _swift_bridgeObjectRetain(lVar5);
    _swift_retain(lVar13);
    lVar13 = param_2[9];
    if (lVar13 == 0) goto LAB_10025d268;
LAB_10025d104:
    param_1[8] = param_2[8];
    param_1[9] = lVar13;
    lVar13 = param_2[0xb];
    lVar5 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar5;
    _swift_bridgeObjectRetain();
    _swift_retain(lVar13);
  }
  uVar11 = 1;
LAB_10025d2ec:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar11);
  return param_1;
}



/* Address: 0x10025d314 | FUN_10025d314 */

void FUN_10025d314(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  DateComponents DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar2 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x28) != 0) {
      _swift_bridgeObjectRelease();
      _swift_release(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      _swift_bridgeObjectRelease();
      _swift_release(*(undefined8 *)(param_1 + 0x58));
      return;
    }
  }
  else if ((int)lVar2 == 0) {
    lVar3 = 0;
    FUN_1002abb94();
    iVar1 = *(int *)(lVar3 + 0x14);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    lVar9 = *(long *)(DVar4.unknown + -8);
    lVar2 = param_1 + iVar1;
    (**(code **)(lVar9 + 0x30))(lVar2,1,DVar4.unknown);
    if ((int)lVar2 == 0) {
      (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar4.unknown);
    }
    lVar2 = param_1 + *(int *)(lVar3 + 0x18);
    lVar5 = 0;
    FUN_1002abbf0();
    lVar6 = lVar2;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
    if ((int)lVar6 == 0) {
      lVar6 = lVar2;
      _swift_getEnumCaseMultiPayload(lVar2,lVar5);
      iVar1 = (int)lVar6;
      if ((iVar1 == 2) || (iVar1 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar2 + *(int *)(puVar7 + 0x30),DVar4.unknown);
        (*pcVar10)(lVar2 + *(int *)(puVar7 + 0x40),DVar4.unknown);
      }
      else if (iVar1 == 0) {
        (**(code **)(lVar9 + 8))(lVar2,DVar4.unknown);
      }
    }
    iVar1 = *(int *)(lVar3 + 0x1c);
    PVar8 = StoreKit::Product::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010025d4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
    return;
  }
  return;
}



/* Address: 0x10025d4b8 | FUN_10025d4b8 */

undefined8 * FUN_10025d4b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  DateComponents DVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  Product PVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar6 != 1) {
    if ((int)puVar6 != 0) {
      puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar6;
    }
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    lVar3 = 0;
    FUN_1002abb94();
    lVar11 = (long)*(int *)(lVar3 + 0x14);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar4.unknown + -8);
    lVar7 = (long)param_2 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar7,1,DVar4.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar4.unknown);
    }
    else {
      puVar5 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    lVar7 = 0;
    FUN_1002abbf0();
    lVar11 = *(long *)(lVar7 + -8);
    puVar8 = puVar1;
    (**(code **)(lVar11 + 0x30))(puVar1,1,lVar7);
    if ((int)puVar8 == 0) {
      puVar8 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar7);
      if (((int)puVar8 == 2) || ((int)puVar8 == 1)) {
        uVar10 = puVar1[1];
        *puVar6 = *puVar1;
        puVar6[1] = uVar10;
        _swift_bridgeObjectRetain();
        puVar5 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 0x10);
        (*pcVar13)((long)puVar6 + (long)*(int *)(puVar5 + 0x30),
                   (long)puVar1 + (long)*(int *)(puVar5 + 0x30),DVar4.unknown);
        (*pcVar13)((long)puVar6 + (long)*(int *)(puVar5 + 0x40),
                   (long)puVar1 + (long)*(int *)(puVar5 + 0x40),DVar4.unknown);
      }
      else {
        (**(code **)(lVar12 + 0x10))(puVar6,puVar1,DVar4.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar6,lVar7,(ulong)puVar8 & 0xffffffff);
      (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar7);
    }
    else {
      puVar5 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar6,puVar1,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    iVar2 = *(int *)(lVar3 + 0x1c);
    PVar9 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,PVar9.unknown);
    uVar10 = 0;
    goto LAB_10025d7a4;
  }
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  lVar7 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar10);
  if (lVar7 == 0) {
    uVar10 = param_2[4];
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar10;
    param_1[7] = uVar15;
    param_1[6] = uVar14;
    lVar7 = param_2[9];
    if (lVar7 == 0) goto LAB_10025d720;
LAB_10025d5b8:
    param_1[8] = param_2[8];
    param_1[9] = lVar7;
    uVar10 = param_2[0xb];
    uVar14 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar14;
    _swift_bridgeObjectRetain();
    _swift_retain(uVar10);
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar7;
    uVar10 = param_2[7];
    uVar14 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar14;
    _swift_bridgeObjectRetain(lVar7);
    _swift_retain(uVar10);
    lVar7 = param_2[9];
    if (lVar7 != 0) goto LAB_10025d5b8;
LAB_10025d720:
    uVar10 = param_2[8];
    uVar15 = param_2[0xb];
    uVar14 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar10;
    param_1[0xb] = uVar15;
    param_1[10] = uVar14;
  }
  uVar10 = 1;
LAB_10025d7a4:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}



/* Address: 0x10025d7cc | FUN_10025d7cc */

undefined8 * FUN_10025d7cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  DateComponents DVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Product PVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_10025cfc4);
  puVar7 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar7 != 1) {
    if ((int)puVar7 != 0) {
      puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar7;
    }
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    lVar3 = 0;
    FUN_1002abb94();
    lVar11 = (long)*(int *)(lVar3 + 0x14);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    lVar13 = *(long *)(DVar4.unknown + -8);
    puVar5 = (undefined1 *)((long)param_2 + lVar11);
    (**(code **)(lVar13 + 0x30))(puVar5,1,DVar4.unknown);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar13 + 0x10))
                ((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                 DVar4.unknown);
      (**(code **)(lVar13 + 0x38))((undefined1 *)((long)param_1 + lVar11),0,1,DVar4.unknown);
    }
    else {
      puVar6 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    lVar11 = 0;
    FUN_1002abbf0();
    lVar12 = *(long *)(lVar11 + -8);
    puVar8 = puVar1;
    (**(code **)(lVar12 + 0x30))(puVar1,1,lVar11);
    if ((int)puVar8 == 0) {
      puVar8 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar11);
      if (((int)puVar8 == 2) || ((int)puVar8 == 1)) {
        *puVar7 = *puVar1;
        puVar7[1] = puVar1[1];
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar14 = *(code **)(lVar13 + 0x10);
        (*pcVar14)((undefined1 *)((long)puVar7 + (long)*(int *)(puVar6 + 0x30)),
                   (undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),DVar4.unknown);
        (*pcVar14)((undefined1 *)((long)puVar7 + (long)*(int *)(puVar6 + 0x40)),
                   (undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),DVar4.unknown);
      }
      else {
        (**(code **)(lVar13 + 0x10))(puVar7,puVar1,DVar4.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar7,lVar11,(ulong)puVar8 & 0xffffffff);
      (**(code **)(lVar12 + 0x38))(puVar7,0,1,lVar11);
    }
    else {
      puVar6 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar7,puVar1,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar2 = *(int *)(lVar3 + 0x1c);
    PVar9 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar2),
               (undefined1 *)((long)param_2 + (long)iVar2),PVar9.unknown);
    uVar10 = 0;
    goto LAB_10025daf4;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar10 = param_2[3];
  param_1[3] = uVar10;
  lVar3 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar10);
  if (lVar3 == 0) {
    uVar10 = param_2[4];
    uVar16 = param_2[7];
    uVar15 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar10;
    param_1[7] = uVar16;
    param_1[6] = uVar15;
    if (param_2[9] != 0) goto LAB_10025d8f8;
LAB_10025da70:
    uVar10 = param_2[8];
    uVar16 = param_2[0xb];
    uVar15 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar10;
    param_1[0xb] = uVar16;
    param_1[10] = uVar15;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    uVar10 = param_2[7];
    uVar15 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar15;
    _swift_bridgeObjectRetain();
    _swift_retain(uVar10);
    if (param_2[9] == 0) goto LAB_10025da70;
LAB_10025d8f8:
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    uVar10 = param_2[0xb];
    uVar15 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar15;
    _swift_bridgeObjectRetain();
    _swift_retain(uVar10);
  }
  uVar10 = 1;
LAB_10025daf4:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}



/* Address: 0x10025db1c | FUN_10025db1c */

undefined1 * FUN_10025db1c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  DateComponents DVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar4 != 0) {
    puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar4;
  }
  *param_1 = *param_2;
  lVar5 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar5 + 0x14);
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  puVar4 = param_2 + iVar3;
  (**(code **)(lVar12 + 0x30))(puVar4,1,DVar6.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar6.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar11 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar14 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 0x20);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar6.unknown);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar6.unknown);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar6.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(lVar5 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
            (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x10025dd88 | FUN_10025dd88 */

undefined1 * FUN_10025dd88(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  DateComponents DVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_10025cfc4);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar4 != 0) {
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    *param_1 = *param_2;
    lVar5 = 0;
    FUN_1002abb94();
    iVar3 = *(int *)(lVar5 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar6.unknown + -8);
    puVar4 = param_2 + iVar3;
    (**(code **)(lVar12 + 0x30))(puVar4,1,DVar6.unknown);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x18));
    lVar8 = 0;
    FUN_1002abbf0();
    lVar11 = *(long *)(lVar8 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar11 + 0x30))(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      puVar9 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar8);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar14 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar14;
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 0x20);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar6.unknown);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar6.unknown);
      }
      else {
        (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      puVar7 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar5 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
              (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x10025e00c | FUN_10025e00c */

void FUN_10025e00c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c38690;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
  }
  return;
}



/* Address: 0x10025e078 | FUN_10025e078 */

void FUN_10025e078(undefined8 *param_1)

{
  ObservableObjectPublisher *pOVar1;
  
  FUN_10025cdc8(0);
  pOVar1 = (extension_Combine)::Combine::ObservableObject::_get_objectWillChange();
  *param_1 = pOVar1;
  return;
}



/* Address: 0x10025e0b4 | FUN_10025e0b4 */

void FUN_10025e0b4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x10025e0c8 | FUN_10025e0c8 */

void FUN_10025e0c8(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x10025e0dc | FUN_10025e0dc */

void FUN_10025e0dc(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x10025e0f0 | FUN_10025e0f0 */

void FUN_10025e0f0(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x10025e104 | FUN_10025e104 */

void FUN_10025e104(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c38778;
  _swift_getKeyPath(&DAT_100c38778);
  puVar2 = &DAT_100c387a0;
  _swift_getKeyPath(&DAT_100c387a0);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10025e16c | FUN_10025e16c */

void FUN_10025e16c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c38778;
  _swift_getKeyPath(&DAT_100c38778);
  puVar2 = &DAT_100c387a0;
  _swift_getKeyPath(&DAT_100c387a0);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x10025e1e4 | FUN_10025e1e4 */

void FUN_10025e1e4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c38858;
  _swift_getKeyPath(&DAT_100c38858);
  puVar2 = &DAT_100c38880;
  _swift_getKeyPath(&DAT_100c38880);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10025e24c | FUN_10025e24c */

void FUN_10025e24c(Published *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_100c38858;
  _swift_getKeyPath(&DAT_100c38858);
  puVar2 = &DAT_100c38880;
  _swift_getKeyPath(&DAT_100c38880);
  FUN_100011090(param_1,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100fb8618,&DAT_100c385c0);
  _swift_retain(uVar3);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffb0 + -extraout_x8,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x10025e320 | FUN_10025e320 */

void FUN_10025e320(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar2 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10025e388 | FUN_10025e388 */

void FUN_10025e388(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar3 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x10025e3f8 | FUN_10025e3f8 */

void FUN_10025e3f8(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined1 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  
  this = (_DictionaryStorage *)&DAT_100fb8ec8;
  FUN_1000037f0(&DAT_100fb8ec8,&DAT_100c3c6d0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_10025e4d0;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined1 *)(*(long *)(original + 0x38) + uVar9);
        *(undefined1 *)(*(long *)(p_Var4 + 0x30) + uVar9) =
             *(undefined1 *)(*(long *)(original + 0x30) + uVar9);
        *(undefined1 *)(*(long *)(p_Var4 + 0x38) + uVar9) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_10025e4d0:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10025e544);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_10025e524;
          uVar5 = *(ulong *)(p_Var1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_10025e524:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x10025e544 | FUN_10025e544 */

void FUN_10025e544(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fb8f08;
  FUN_1000037f0(&DAT_100fb8f08,&DAT_100c389b0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_10025e620;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_10025e620:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10025e6bc);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_10025e694;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_10025e694:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x10025e6bc | FUN_10025e6bc */

void FUN_10025e6bc(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fb8f00;
  FUN_1000037f0(&DAT_100fb8f00,&DAT_100c389a8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10025e838:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_10025e7a4;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_10025e7a4:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10025e860);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_10025e838;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x10025e860 | FUN_10025e860 */

void FUN_10025e860(long param_1,bool param_2)

{
  __int64 capacity;
  code *pcVar1;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var6;
  long lVar7;
  ulong uVar8;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb8ec8;
  FUN_1000037f0(&DAT_100fb8ec8,&DAT_100c3c6d0);
  p_Var2 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10025e9ac:
    _swift_release(original);
    *unaff_x20 = p_Var2;
    return;
  }
  p_Var6 = original + 0x40;
  uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)p_Var6;
  lVar4 = 0;
  do {
    if (uVar8 == 0) {
      do {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10025e9d4);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar7) {
          if ((param_2 & 1U) != 0) {
            uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var6 = -1L << (uVar8 & 0x3f);
            }
            else {
              _bzero(p_Var6,uVar8 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10025e9ac;
        }
        uVar8 = *(ulong *)(p_Var6 + lVar7 * 8);
        lVar4 = lVar4 + 1;
      } while (uVar8 == 0);
      uVar3 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
    }
    else {
      uVar3 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar7 = lVar4;
    }
    uVar3 = LZCOUNT(uVar3) | lVar7 << 6;
    FUN_10025ef44(*(undefined1 *)(*(long *)(original + 0x30) + uVar3),
                  *(undefined1 *)(*(long *)(original + 0x38) + uVar3),p_Var2);
    lVar4 = lVar7;
  } while( true );
}



/* Address: 0x10025e9d4 | FUN_10025e9d4 */

void FUN_10025e9d4(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb8f08;
  FUN_1000037f0(&DAT_100fb8f08,&DAT_100c389b0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10025ec54:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10025ec84);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10025ec54;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10025ec88);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x10025ec88 | FUN_10025ec88 */

void FUN_10025ec88(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb8f00;
  FUN_1000037f0(&DAT_100fb8f00,&DAT_100c389a8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10025ef10:
    _swift_release(original);
LAB_10025ef18:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10025ef40);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10025ef18;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10025ef10;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10025ef44);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x10025ef44 | FUN_10025ef44 */

void FUN_10025ef44(byte param_1,byte param_2,long param_3)

{
  _HashTable _Var1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  Hasher HVar8;
  ulong uVar9;
  Bucket BVar10;
  String SVar11;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
  pcVar2 = "verified";
  pcVar5 = &DAT_d000000000000032;
  if (param_1 != 4) {
    pcVar2 = "onBarViewModel.swift";
    pcVar5 = (char *)0xd00000000000002d;
  }
  pcVar4 = "tion.annual.legacy";
  pcVar6 = &DAT_d000000000000032;
  if (param_1 != 3) {
    pcVar4 = pcVar2;
    pcVar6 = pcVar5;
  }
  pcVar2 = (char *)0xd00000000000002b;
  pcVar5 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (param_1 != 1) {
    pcVar2 = (char *)0xd000000000000031;
    pcVar5 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar3 = "e.macos.subscription.annual";
  pcVar7 = (char *)0xd00000000000002c;
  if (param_1 != 0) {
    pcVar3 = pcVar5 + 0x20;
    pcVar7 = pcVar2;
  }
  if (param_1 < 3) {
    pcVar4 = pcVar3;
    pcVar6 = pcVar7;
  }
  SVar11.bridgeObject = (void *)((ulong)pcVar4 | 0x8000000000000000);
  SVar11.str = pcVar6;
  Swift::String::hash((Hasher)auStack_78,SVar11);
  HVar8.unknown = (undefined *)((ulong)pcVar4 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  uVar9 = Swift::Hasher::_finalize(HVar8);
  _Var1.unknown = (undefined *)(param_3 + 0x40);
  BVar10 = Swift::_HashTable::nextHole
                     ((Bucket)(uVar9 & (-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f) ^
                                       0xffffffffffffffffU)),_Var1);
  uVar9 = (ulong)BVar10.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar9) =
       1L << (BVar10.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar9);
  *(byte *)(*(long *)(param_3 + 0x30) + BVar10.offset) = param_1;
  *(byte *)(*(long *)(param_3 + 0x38) + BVar10.offset) = param_2 & 1;
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  return;
}



/* Address: 0x10025f09c | FUN_10025f09c */

bool FUN_10025f09c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined *local_130;
  undefined *puStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  _StringGuts local_d0;
  _StringGuts _Stack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar11 = (char *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar12 = pcVar11 + -extraout_x12;
  lVar6 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  pcVar13 = pcVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)pcVar13 - extraout_x12_00;
  puVar7 = &DAT_100fb8e68;
  FUN_1000037f0(&DAT_100fb8e68,&DAT_100c38708);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar14 - extraout_x8_01;
  plVar9 = (long *)(lVar10 + *(int *)(puVar7 + 0x30));
  FUN_1000c495c(param_1,lVar10,FUN_10025cfc4);
  FUN_1000c495c(param_2,plVar9,FUN_10025cfc4);
  lVar5 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar6);
  iVar4 = (int)lVar5;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      FUN_1000c495c(lVar10,lVar14,FUN_10025cfc4);
      plVar8 = plVar9;
      _swift_getEnumCaseMultiPayload(plVar9,lVar6);
      if ((int)plVar8 == 0) {
        FUN_1000523d8(lVar14,pcVar12,FUN_1002abb94);
        FUN_1000523d8(plVar9,pcVar11,FUN_1002abb94);
        cVar1 = *pcVar12;
        cVar2 = *pcVar11;
        FUN_10005241c(pcVar11,FUN_1002abb94);
        FUN_10005241c(pcVar12,FUN_1002abb94);
        FUN_10005241c(lVar10,FUN_10025cfc4);
        return cVar1 == cVar2;
      }
      FUN_10005241c(lVar14,FUN_1002abb94);
    }
    else if (iVar4 == 1) {
      FUN_1000c495c(lVar10,pcVar13,FUN_10025cfc4);
      uStack_a8 = *(undefined8 *)(pcVar13 + 0x28);
      local_b0 = *(undefined8 *)(pcVar13 + 0x20);
      uStack_98 = *(undefined8 *)(pcVar13 + 0x38);
      uStack_a0 = *(undefined8 *)(pcVar13 + 0x30);
      uStack_88 = *(undefined8 *)(pcVar13 + 0x48);
      local_90 = *(undefined8 *)(pcVar13 + 0x40);
      uStack_78 = *(undefined8 *)(pcVar13 + 0x58);
      uStack_80 = *(undefined8 *)(pcVar13 + 0x50);
      _Stack_c8.unknown = *(undefined **)(pcVar13 + 8);
      local_d0.unknown = *(undefined **)pcVar13;
      uStack_b8 = *(undefined8 *)(pcVar13 + 0x18);
      uStack_c0 = *(undefined8 *)(pcVar13 + 0x10);
      plVar8 = plVar9;
      _swift_getEnumCaseMultiPayload(plVar9,lVar6);
      if ((int)plVar8 == 1) {
        lStack_108 = plVar9[5];
        local_110 = plVar9[4];
        lStack_f8 = plVar9[7];
        lStack_100 = plVar9[6];
        lStack_e8 = plVar9[9];
        local_f0 = plVar9[8];
        lStack_d8 = plVar9[0xb];
        lStack_e0 = plVar9[10];
        puStack_128 = (undefined *)plVar9[1];
        local_130 = (undefined *)*plVar9;
        lStack_118 = plVar9[3];
        local_120 = plVar9[2];
        if ((local_d0.unknown == local_130) && (_Stack_c8.unknown == puStack_128)) {
          FUN_1002538e0(&local_130);
          FUN_1002538e0(&local_d0);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_d0,_Stack_c8,(_StringComparisonResult)(__int8)local_130);
          FUN_1002538e0(&local_130);
          FUN_1002538e0(&local_d0);
          if (!bVar3) {
            FUN_10005241c(lVar10,FUN_10025cfc4);
            return false;
          }
        }
LAB_10025f334:
        FUN_10005241c(lVar10,FUN_10025cfc4);
        return true;
      }
      FUN_1002538e0(&local_d0);
    }
    else {
      _swift_getEnumCaseMultiPayload(plVar9,lVar6);
      if ((int)plVar9 == 2) goto LAB_10025f334;
    }
  }
  else if (iVar4 == 3) {
    _swift_getEnumCaseMultiPayload(plVar9,lVar6);
    if ((int)plVar9 == 3) goto LAB_10025f334;
  }
  else if (iVar4 == 4) {
    _swift_getEnumCaseMultiPayload(plVar9,lVar6);
    if ((int)plVar9 == 4) goto LAB_10025f334;
  }
  else {
    _swift_getEnumCaseMultiPayload(plVar9,lVar6);
    if ((int)plVar9 == 5) goto LAB_10025f334;
  }
  FUN_100005808(lVar10,&DAT_100fb8e68,&DAT_100c38708);
  return false;
}



/* Address: 0x10025f42c | thunk_FUN_10029fe38 */

void thunk_FUN_10029fe38(void)

{
  FUN_10029fe38();
  return;
}



/* Address: 0x10025f430 | thunk_FUN_10029fea0 */

void thunk_FUN_10029fea0(void)

{
  FUN_10029fea0();
  return;
}



/* Address: 0x10025f434 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x10025f438 | FUN_10025f438 */

void FUN_10025f438(undefined8 param_1)

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
  plVar3 = (long *)0x380;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10025a038(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10025f4a4 | FUN_10025f4a4 */

void FUN_10025f4a4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10025f4c8 | FUN_10025f4c8 */

void FUN_10025f4c8(void)

{
  FUN_10025c9bc();
  return;
}



/* Address: 0x10025f4d0 | FUN_10025f4d0 */

void FUN_10025f4d0(void)

{
  FUN_10025c9f8();
  return;
}



/* Address: 0x10025f4d8 | FUN_10025f4d8 */

void FUN_10025f4d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8ea8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c383e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c383e4,&DAT_100ec4248);
  DAT_100fb8ea8 = pTVar1;
  return;
}



/* Address: 0x10025f518 | thunk_FUN_10025e104 */

void thunk_FUN_10025e104(void)

{
  FUN_10025e104();
  return;
}



/* Address: 0x10025f51c | thunk_FUN_10025e16c */

void thunk_FUN_10025e16c(void)

{
  FUN_10025e16c();
  return;
}



/* Address: 0x10025f520 | thunk_FUN_1002a737c */

void thunk_FUN_1002a737c(void)

{
  FUN_1002a737c();
  return;
}



/* Address: 0x10025f524 | thunk_FUN_1002a73e4 */

void thunk_FUN_1002a73e4(void)

{
  FUN_1002a73e4();
  return;
}



/* Address: 0x10025f528 | FUN_10025f528 */

void FUN_10025f528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  return;
}



/* Address: 0x10025f558 | FUN_10025f558 */

undefined8 FUN_10025f558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10025f5a8 | thunk_FUN_10025e320 */

void thunk_FUN_10025e320(void)

{
  FUN_10025e320();
  return;
}



/* Address: 0x10025f5ac | thunk_FUN_10025e388 */

void thunk_FUN_10025e388(void)

{
  FUN_10025e388();
  return;
}



/* Address: 0x10025f5b0 | thunk_FUN_10025e1e4 */

void thunk_FUN_10025e1e4(void)

{
  FUN_10025e1e4();
  return;
}



/* Address: 0x10025f5b4 | thunk_FUN_10025e24c */

void thunk_FUN_10025e24c(void)

{
  FUN_10025e24c();
  return;
}



/* Address: 0x10025f5b8 | FUN_10025f5b8 */

void FUN_10025f5b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8eb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38470;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38470,&DAT_100ec4358);
  DAT_100fb8eb8 = pTVar1;
  return;
}



/* Address: 0x10025f5f8 | FUN_10025f5f8 */

void FUN_10025f5f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38448;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38448,&DAT_100ec4358);
  DAT_100fb8ec0 = pTVar1;
  return;
}



/* Address: 0x10025f638 | FUN_10025f638 */

undefined8 FUN_10025f638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10025f688 | FUN_10025f688 */

undefined * FUN_10025f688(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *capacity;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb8f20;
    FUN_1000037f0(&DAT_100fb8f20,&DAT_100c38b00);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_a8;
      FUN_100011090(param_1,puVar5,&DAT_100fb8f28,&DAT_100c38b08);
      puVar3 = &local_a8;
      FUN_1000f1290();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025f7bc);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = local_88;
      puVar5[1] = uStack_a0;
      *puVar5 = local_a8;
      puVar5[3] = uStack_90;
      puVar5[2] = local_98;
      FUN_100011080(auStack_80,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025f7c0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x48;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x10025f7c0 | FUN_10025f7c0 */

void FUN_10025f7c0(undefined8 param_1)

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
  plVar3 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100258954(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10025f82c | FUN_10025f82c */

void FUN_10025f82c(void)

{
  FUN_100259104();
  return;
}



/* Address: 0x10025f844 | FUN_10025f844 */

void FUN_10025f844(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  DateComponents DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar3 = 0;
  FUN_1002abb94();
  lVar11 = *(long *)(lVar3 + -8);
  uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + uVar10;
  iVar2 = *(int *)(lVar3 + 0x14);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  lVar9 = lVar1 + iVar2;
  (**(code **)(lVar12 + 0x30))(lVar9,1,DVar4.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar12 + 8))(lVar1 + iVar2,DVar4.unknown);
  }
  lVar9 = lVar1 + *(int *)(lVar3 + 0x18);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar6 = lVar9;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar9,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = lVar9;
    _swift_getEnumCaseMultiPayload(lVar9,lVar5);
    iVar2 = (int)lVar6;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(lVar9 + *(int *)(puVar7 + 0x30),DVar4.unknown);
      (*pcVar13)(lVar9 + *(int *)(puVar7 + 0x40),DVar4.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar12 + 8))(lVar9,DVar4.unknown);
    }
  }
  lVar9 = *(long *)(lVar11 + 0x40);
  iVar2 = *(int *)(lVar3 + 0x1c);
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(lVar1 + iVar2,PVar8.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + (uVar10 + lVar9 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x10025f9d8 | FUN_10025f9d8 */

void FUN_10025f9d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar7 = 0;
  FUN_1002abb94();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  plVar8 = (long *)0x210;
  uVar6 = *(undefined1 *)(puVar1 + 2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_100008284;
  FUN_100257484(plVar8,param_1,uVar2,uVar4,uVar10,unaff_x20 + uVar9,uVar3,uVar5,uVar6);
  return;
}



/* Address: 0x10025faa0 | FUN_10025faa0 */

void FUN_10025faa0(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x10025fac4 | FUN_10025fac4 */

void FUN_10025fac4(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x10025fae8 | FUN_10025fae8 */

void FUN_10025fae8(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x10025fb0c | FUN_10025fb0c */

void FUN_10025fb0c(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x10025fb30 | FUN_10025fb30 */

void FUN_10025fb30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    FUN_10025fbc0(param_5,param_6,param_7,param_8);
    FUN_10025fbc0(param_9,param_10,param_11,param_12);
    return;
  }
  return;
}



/* Address: 0x10025fbc0 | FUN_10025fbc0 */

void FUN_10025fbc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_4);
    return;
  }
  return;
}


