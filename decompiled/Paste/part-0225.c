/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002ad79c | FUN_1002ad79c */

undefined1  [16] FUN_1002ad79c(void)

{
  return ZEXT816(0x100ec6860);
}



/* Address: 0x1002ad7ac | FUN_1002ad7ac */

void FUN_1002ad7ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  SubscriptionOffer SVar11;
  ulong uVar12;
  SubscriptionPeriod SVar13;
  SubscriptionInfo SVar14;
  Product PVar15;
  undefined *puVar16;
  long *plVar17;
  long lVar18;
  long unaff_x20;
  long unaff_x22;
  byte *pbVar19;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(long *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  puVar9 = &DAT_100fbba98;
  FUN_1000037f0(&DAT_100fbba98,&DAT_100c3c5c0);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar10;
  puVar9 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar10;
  puVar9 = &DAT_100fb8660;
  FUN_1000037f0(&DAT_100fb8660,&DAT_100c38228);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar10;
  SVar11 = StoreKit::Product::SubscriptionOffer::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa0) = SVar11.unknown;
  lVar18 = *(long *)(SVar11.unknown + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar18;
  uVar10 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar12 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar12;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar10;
  SVar13 = StoreKit::Product::SubscriptionPeriod::typeMetadataAccessor();
  uVar10 = *(long *)(*(long *)(SVar13.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar10;
  puVar9 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar10;
  puVar9 = &DAT_100fb8658;
  FUN_1000037f0(&DAT_100fb8658,&DAT_100c38220);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar10;
  SVar14 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = SVar14.unknown;
  lVar18 = *(long *)(SVar14.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar18;
  uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar10;
  puVar9 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar10;
  lVar18 = 0;
  FUN_1002abb94();
  *(long *)(unaff_x22 + 0xf8) = lVar18;
  lVar18 = *(long *)(lVar18 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar18;
  uVar10 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar12 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar12;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar10;
  PVar15 = StoreKit::Product::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x118) = PVar15.unknown;
  lVar18 = *(long *)(PVar15.unknown + -8);
  *(long *)(unaff_x22 + 0x120) = lVar18;
  uVar10 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar12 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar12;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar18 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar18 + 0x30))
            (0xd00000000000001d,0x8000000100da0120,0xd000000000000016,0x8000000100da0140,uVar4,
             lVar18);
  FUN_100004594(unaff_x22 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar18 = *(long *)(param_3 + 0x10);
  if (lVar18 != 0) {
    FUN_1002b1034(0,lVar18,0);
    pbVar19 = (byte *)(param_3 + 0x20);
    do {
      bVar5 = *pbVar19;
      pcVar1 = "verified";
      puVar6 = &DAT_d000000000000032;
      if (bVar5 != 4) {
        pcVar1 = "onBarViewModel.swift";
        puVar6 = (undefined1 *)0xd00000000000002d;
      }
      pcVar3 = "tion.annual.legacy";
      puVar7 = &DAT_d000000000000032;
      if (bVar5 != 3) {
        pcVar3 = pcVar1;
        puVar7 = puVar6;
      }
      puVar6 = (undefined1 *)0xd00000000000002b;
      pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
      if (bVar5 != 1) {
        puVar6 = (undefined1 *)0xd000000000000031;
        pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
      }
      pcVar2 = "e.macos.subscription.annual";
      puVar8 = (undefined1 *)0xd00000000000002c;
      if (bVar5 != 0) {
        pcVar2 = pcVar1 + 0x20;
        puVar8 = puVar6;
      }
      if (bVar5 < 3) {
        pcVar3 = pcVar2;
        puVar7 = puVar8;
      }
      uVar10 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar10) {
        FUN_1002b1034(1 < *(ulong *)(puVar9 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar10 + 1;
      *(undefined1 **)(puVar9 + uVar10 * 0x10 + 0x20) = puVar7;
      *(ulong *)(puVar9 + uVar10 * 0x10 + 0x28) = (ulong)pcVar3 | 0x8000000000000000;
      lVar18 = lVar18 + -1;
      pbVar19 = pbVar19 + 1;
    } while (lVar18 != 0);
  }
  puVar16 = puVar9;
  FUN_1002b36f4();
  *(undefined **)(unaff_x22 + 0x140) = puVar16;
  _swift_bridgeObjectRelease(puVar9);
  *(undefined8 *)(unaff_x22 + 0x60) = puVar16;
  plVar17 = (long *)(ulong)*(uint *)(PTR__products_100ea8050 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar17;
  puVar9 = &DAT_100fbbae8;
  FUN_1000037f0(&DAT_100fbbae8,&DAT_100c3c678);
  puVar16 = puVar9;
  FUN_1002b5024();
  *plVar17 = unaff_x22;
  plVar17[1] = (long)FUN_1002adc08;
  StoreKit::Product::_products((undefined8 *)(unaff_x22 + 0x60),puVar9,puVar16);
  return;
}



/* Address: 0x1002adc08 | FUN_1002adc08 */

void FUN_1002adc08(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x150) = param_1;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x148));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x70);
    uVar3 = *(undefined8 *)(lVar4 + 0x78);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x140));
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002adc98;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x70);
    uVar3 = *(undefined8 *)(lVar4 + 0x78);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002ae35c;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002adc98 | FUN_1002adc98 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002ade10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002adc98(void)

{
  long lVar1;
  SubscriptionPeriod subscriptionPeriod;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  DateComponents DVar10;
  long lVar11;
  Product PVar12;
  ulong uVar13;
  SubscriptionInfo SVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  SubscriptionInfo SVar27;
  undefined8 uVar28;
  long unaff_x22;
  code *pcVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  String SVar38;
  undefined *local_68 [2];
  
  lVar9 = *(long *)(unaff_x22 + 0x150);
  lVar25 = *(long *)(lVar9 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar25 != 0) {
    lVar23 = *(long *)(unaff_x22 + 0x120);
    lVar1 = *(long *)(unaff_x22 + 0xf8);
    lVar2 = *(long *)(unaff_x22 + 0x100);
    lVar30 = *(long *)(unaff_x22 + 0xe0);
    lVar18 = *(long *)(unaff_x22 + 0xa8);
    lVar9 = lVar9 + ((ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff));
    FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
    _swift_initStaticObject();
    lVar19 = *(long *)(lVar23 + 0x48);
    pcVar29 = *(code **)(lVar23 + 0x10);
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar37 = *(long *)(unaff_x22 + 0x108);
      (*pcVar29)(uVar31,lVar9,uVar32);
      (*pcVar29)(uVar26,uVar31,uVar32);
      lVar35 = (long)*(int *)(lVar1 + 0x14);
      DVar10 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar20 = *(code **)(*(long *)(DVar10.unknown + -8) + 0x38);
      (*pcVar20)(lVar37 + lVar35,1,1,DVar10.unknown);
      lVar24 = (long)*(int *)(lVar1 + 0x18);
      lVar11 = 0;
      FUN_1002abbf0();
      PVar12.unknown = (undefined *)(lVar37 + lVar24);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(PVar12.unknown,1,1,lVar11);
      SVar38 = StoreKit::Product::get_id(PVar12);
      uVar13 = Swift::_findStringSwitchCase(SVar38.str,SVar38.str,SVar38.bridgeObject);
      _swift_bridgeObjectRelease(SVar38.bridgeObject);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x118);
      if (uVar13 < 6) {
        puVar21 = *(undefined1 **)(unaff_x22 + 0x108);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0xd8);
        *puVar21 = (char)uVar13;
        PVar12.unknown = puVar21 + *(int *)(lVar1 + 0x1c);
        (*pcVar29)(PVar12.unknown,uVar26,uVar31);
        StoreKit::Product::_get_subscription(PVar12);
        (**(code **)(lVar30 + 0x30))(uVar32,1,uVar33);
        if ((int)uVar32 == 1) {
          uVar31 = *(undefined8 *)(unaff_x22 + 0x130);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar26 = *(undefined8 *)(unaff_x22 + 0xd0);
          pcVar20 = *(code **)(lVar23 + 8);
          (*pcVar20)(*(undefined8 *)(unaff_x22 + 0x128),uVar32);
          (*pcVar20)(uVar31,uVar32);
          puVar15 = &DAT_100fb8658;
          puVar16 = &DAT_100c38220;
LAB_1002ae028:
          FUN_100005808(uVar26,puVar15,puVar16);
        }
        else {
          SVar27.unknown = *(undefined **)(unaff_x22 + 0xe8);
          subscriptionPeriod.unknown = *(undefined **)(unaff_x22 + 0xc0);
          SVar14.unknown = *(undefined **)(unaff_x22 + 200);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar31 = *(undefined8 *)(unaff_x22 + 0xa0);
          (**(code **)(lVar30 + 0x20))
                    (SVar27.unknown,*(undefined8 *)(unaff_x22 + 0xd0),
                     *(undefined8 *)(unaff_x22 + 0xd8));
          StoreKit::Product::SubscriptionInfo::get_subscriptionPeriod(SVar27);
          (extension_StoreKit)::Foundation::DateComponents::init(subscriptionPeriod);
          (*pcVar20)(SVar14.unknown,0,1,DVar10.unknown);
          FUN_1001a7c4c(SVar14.unknown,lVar37 + lVar35,&DAT_100fb86e0,&DAT_100c38670);
          StoreKit::Product::SubscriptionInfo::_get_introductoryOffer(SVar14);
          (**(code **)(lVar18 + 0x30))(uVar26,1,uVar31);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x128);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar33 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar36 = *(undefined8 *)(unaff_x22 + 0xd8);
          if ((int)uVar26 == 1) {
            uVar26 = *(undefined8 *)(unaff_x22 + 0x98);
            (**(code **)(lVar30 + 8))(uVar33,uVar36);
            pcVar20 = *(code **)(lVar23 + 8);
            (*pcVar20)(uVar31,uVar34);
            (*pcVar20)(uVar32,uVar34);
            puVar15 = &DAT_100fb8660;
            puVar16 = &DAT_100c38228;
            goto LAB_1002ae028;
          }
          uVar26 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x90);
          (**(code **)(lVar18 + 0x20))(uVar3,*(undefined8 *)(unaff_x22 + 0x98),uVar4);
          (**(code **)(lVar18 + 0x10))(uVar26,uVar3,uVar4);
          FUN_1002ab594(uVar28,uVar26);
          (**(code **)(lVar18 + 8))(uVar3,uVar4);
          (**(code **)(lVar30 + 8))(uVar33,uVar36);
          pcVar20 = *(code **)(lVar23 + 8);
          (*pcVar20)(uVar31,uVar34);
          (*pcVar20)(uVar32,uVar34);
          FUN_1001a7c4c(uVar28,lVar37 + lVar24,&DAT_100fb8db8,&DAT_100c38680);
        }
        uVar32 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar31 = *(undefined8 *)(unaff_x22 + 0xf8);
        FUN_100252c50(uVar32,uVar26);
        (**(code **)(lVar2 + 0x38))(uVar26,0,1,uVar31);
        FUN_10005241c(uVar32,FUN_1002abb94);
      }
      else {
        uVar34 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0xf8);
        pcVar20 = *(code **)(lVar23 + 8);
        (*pcVar20)(uVar26,uVar31);
        (*pcVar20)(uVar34,uVar31);
        FUN_100005808(lVar37 + lVar35,&DAT_100fb86e0,&DAT_100c38670);
        FUN_100005808(lVar37 + lVar24,&DAT_100fb8db8,&DAT_100c38680);
        (**(code **)(lVar2 + 0x38))(uVar32,1,1,uVar33);
      }
      uVar26 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar31 = uVar26;
      (**(code **)(lVar2 + 0x30))(uVar26,1,*(undefined8 *)(unaff_x22 + 0xf8));
      if ((int)uVar31 == 1) {
        FUN_100005808(uVar26,&DAT_100fb8618,&DAT_100c385c0);
      }
      else {
        FUN_10026d1d8(uVar26,*(undefined8 *)(unaff_x22 + 0x110));
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          FUN_1002b1474(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17,&DAT_100fbbbb0,&DAT_100c3c688,
                        FUN_1002abb94,PTR__swift_bridgeObjectRelease_100eae160);
        }
        uVar13 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1002b1474(puVar17,uVar13 + 1,1,puVar16,&DAT_100fbbbb0,&DAT_100c3c688,FUN_1002abb94,
                        PTR__swift_bridgeObjectRelease_100eae160);
        }
        uVar26 = *(undefined8 *)(unaff_x22 + 0x110);
        *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
        FUN_10026d1d8(uVar26,puVar17 + *(long *)(lVar2 + 0x48) * uVar13 +
                                       ((ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
                                       ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff)));
      }
      lVar9 = lVar9 + lVar19;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar9 = *(long *)(unaff_x22 + 0x150);
  }
  lVar25 = *(long *)(unaff_x22 + 0x158);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_bridgeObjectRelease(lVar9);
  local_68[0] = puVar17;
  _swift_bridgeObjectRetain(uVar26);
  _swift_bridgeObjectRetain(puVar17);
  FUN_1002b4938(local_68,uVar26);
  if (lVar25 == 0) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar33 = *(undefined8 *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_bridgeObjectRelease(puVar17);
    puVar17 = local_68[0];
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002ae358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar17);
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_release(local_68[0]);
  return;
}



/* Address: 0x1002ae35c | FUN_1002ae35c */

void FUN_1002ae35c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  StoreKitError SVar12;
  undefined *puVar13;
  undefined7 extraout_var;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  long lVar19;
  long lVar14;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x140));
  *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
  _swift_errorRetain(uVar17);
  puVar13 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  SVar12 = StoreKit::StoreKitError::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var,SVar12.value);
  _swift_dynamicCast(uVar18,(undefined8 *)(unaff_x22 + 0x68),puVar13,lVar14,6);
  lVar19 = *(long *)(lVar14 + -8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
  if ((int)uVar18 == 0) {
    (**(code **)(lVar19 + 0x38))(uVar17,1,1,lVar14);
    FUN_100005808(uVar17,&DAT_100fbba98,&DAT_100c3c5c0);
  }
  else {
    (**(code **)(lVar19 + 0x38))(uVar17,0,1,lVar14);
    uVar18 = uVar17;
    (**(code **)(lVar19 + 0x58))(uVar17,lVar14);
    iVar11 = *(int *)
              PTR___enum_case_for_StoreKit_StoreKitError_networkError_StoreKit_StoreKitError_Type___>__Foundation_URLError___>_StoreKit_StoreKitError_100ea7cd0
    ;
    (**(code **)(lVar19 + 8))(uVar17,lVar14);
    if ((int)uVar18 == iVar11) goto LAB_1002ae4ac;
  }
  lVar19 = unaff_x22 + 0x38;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
  FUN_1000da768(lVar19);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar14 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(lVar19,uVar18);
  (**(code **)(lVar14 + 0x20))(uVar17,uVar18,lVar14);
  FUN_100004594(lVar19);
LAB_1002ae4ac:
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_willThrow();
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001002ae574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002ae578 | FUN_1002ae578 */

void FUN_1002ae578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  PurchaseResult PVar4;
  undefined7 extraout_var;
  ulong uVar5;
  PurchaseOption PVar6;
  ulong uVar7;
  UUID UVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x90) = param_5;
  *(long *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  PVar4 = StoreKit::Product::PurchaseResult::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xa0) = CONCAT71(extraout_var,PVar4.value);
  lVar9 = *(long *)(CONCAT71(extraout_var,PVar4.value) + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar5;
  PVar6 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb8) = PVar6.unknown;
  lVar9 = *(long *)(PVar6.unknown + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar5;
  lVar9 = 0;
  FUN_1002a8bac();
  uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  lVar9 = 0;
  FUN_1002a75a4();
  *(long *)(unaff_x22 + 0xe0) = lVar9;
  uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar5;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf0) = UVar8.unknown;
  lVar9 = *(long *)(UVar8.unknown + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar5;
  pcVar1 = "restore_purchases_outcome";
  uVar3 = 0xd000000000000010;
  if (param_5 != 0) {
    pcVar1 = "licensing-purchase";
    uVar3 = 0xd00000000000001c;
  }
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar9 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar9 + 0x30))
            (0xd000000000000012,0x8000000100da00a0,uVar3,(ulong)pcVar1 | 0x8000000000000000,uVar2,
             lVar9);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  FUN_100004594(unaff_x22 + 0x10);
  FUN_1000da768(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_switch(FUN_1002ae740,*(undefined8 *)(unaff_x22 + 0x60),0);
  return;
}



/* Address: 0x1002ae740 | FUN_1002ae740 */

void FUN_1002ae740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1002437d8(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_release(uVar3);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  _swift_task_switch(FUN_1002ae7a8,uVar1,uVar2);
  return;
}



/* Address: 0x1002ae7a8 | FUN_1002ae7a8 */

void FUN_1002ae7a8(void)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  Product PVar5;
  long *plVar6;
  PurchaseOption PVar7;
  code *pcVar8;
  undefined1 *puVar9;
  UUID UVar10;
  long unaff_x22;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  
  UVar10.unknown = *(undefined **)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar2 = *(long *)(unaff_x22 + 0xc0);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  puVar4 = &DAT_100fbbac8;
  FUN_1000037f0(&DAT_100fbbac8,&DAT_100c3c648);
  uVar14 = (ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  PVar7.unknown = (undefined *)(uVar14 + *(long *)(lVar2 + 0x48));
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  StoreKit::Product::PurchaseOption::appAccountToken(UVar10,PVar7);
  PVar5.unknown = puVar4;
  FUN_1002b4d4c();
  *(undefined **)(unaff_x22 + 0x128) = PVar5.unknown;
  _swift_setDeallocating(puVar4);
  pcVar8 = *(code **)(lVar2 + 8);
  *(code **)(unaff_x22 + 0x130) = pcVar8;
  (*pcVar8)(puVar4 + uVar14,uVar1);
  _swift_deallocClassInstance(puVar4,0x20,7);
  *(undefined **)(unaff_x22 + 0x68) = PVar5.unknown;
  if (lVar13 != 0) {
    puVar9 = &DAT_d000000000000032;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    pbVar11 = *(byte **)(unaff_x22 + 0x80);
    FUN_1000da768(*(undefined8 *)(unaff_x22 + 0xd8));
    bVar3 = *pbVar11;
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        puVar9 = (undefined1 *)0xd00000000000002c;
        pcVar12 = "e.macos.subscription.annual";
      }
      else if (bVar3 == 1) {
        pcVar12 = "tion.annual.intro";
        puVar9 = (undefined1 *)0xd00000000000002b;
      }
      else {
        pcVar12 = "tion.annual.family";
        puVar9 = (undefined1 *)0xd000000000000031;
      }
    }
    else if (bVar3 == 3) {
      pcVar12 = "tion.annual.legacy";
    }
    else if (bVar3 == 4) {
      pcVar12 = "verified";
    }
    else {
      pcVar12 = "onBarViewModel.swift";
      puVar9 = (undefined1 *)0xd00000000000002d;
    }
    *(char **)(unaff_x22 + 0x138) = pcVar12;
    uVar14 = *(ulong *)(unaff_x22 + 0x78);
    plVar6 = (long *)0x120;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x140) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1002ae9e4;
    FUN_1002a8c5c(plVar6,*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0x70),
                  uVar14 & 0xcfffffffffffffff,puVar9,(ulong)pcVar12 | 0x8000000000000000,
                  *(undefined8 *)(unaff_x22 + 0x88),uVar1,*(undefined8 *)(unaff_x22 + 0x100));
    return;
  }
  *(undefined **)(unaff_x22 + 0x148) = PVar5.unknown;
  FUN_1002abb94();
  plVar6 = (long *)(ulong)*(uint *)(PTR__purchase_100ea8060 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002aec0c;
  StoreKit::Product::_purchase((Set<PurchaseOption>)*(undefined **)(unaff_x22 + 0xb0),PVar5);
  return;
}



/* Address: 0x1002ae9e4 | FUN_1002ae9e4 */

void FUN_1002ae9e4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  String *pSVar5;
  String offerID;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  Product PVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar15 = *unaff_x22;
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0x140));
  if (unaff_x20 != 0) {
    uVar10 = *(undefined8 *)(lVar15 + 0xd8);
    _swift_bridgeObjectRelease(*(ulong *)(lVar15 + 0x138) | 0x8000000000000000);
    FUN_10005241c(uVar10,FUN_1002a8bac);
    uVar11 = *(undefined8 *)(lVar15 + 0x128);
    uVar10 = *(undefined8 *)(lVar15 + 0x100);
    uVar16 = *(undefined8 *)(lVar15 + 0xe8);
    uVar13 = *(undefined8 *)(lVar15 + 0xd0);
    uVar14 = *(undefined8 *)(lVar15 + 0xd8);
    uVar12 = *(undefined8 *)(lVar15 + 200);
    uVar8 = *(undefined8 *)(lVar15 + 0xb0);
    (**(code **)(*(long *)(lVar15 + 0xf8) + 8))(uVar10,*(undefined8 *)(lVar15 + 0xf0));
    _swift_bridgeObjectRelease(uVar11);
    FUN_1000da768(lVar15 + 0x38);
    lVar3 = *(long *)(lVar15 + 0x58);
    FUN_100004640(lVar15 + 0x38,*(undefined8 *)(lVar15 + 0x50));
    (**(code **)(lVar3 + 0x20))();
    FUN_100004594(lVar15 + 0x38);
    _swift_willThrow();
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002aeb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 8))();
    return;
  }
  pcVar2 = *(code **)(lVar15 + 0x130);
  uVar4 = *(ulong *)(lVar15 + 0x138);
  lVar3 = *(long *)(lVar15 + 0xe0);
  pSVar5 = *(String **)(lVar15 + 0xe8);
  uVar10 = *(undefined8 *)(lVar15 + 0xd0);
  uVar14 = *(undefined8 *)(lVar15 + 200);
  uVar13 = *(undefined8 *)(lVar15 + 0xb8);
  offerID = *(String *)(lVar15 + 0x88);
  FUN_10005241c(*(undefined8 *)(lVar15 + 0xd8),FUN_1002a8bac);
  _swift_bridgeObjectRelease(uVar4 | 0x8000000000000000);
  puVar1 = (undefined8 *)((long)&pSVar5->str + (long)*(int *)(lVar3 + 0x18));
  StoreKit::Product::PurchaseOption::promotionalOffer
            (offerID,*pSVar5,(undefined *)((long)&pSVar5->str + (long)*(int *)(lVar3 + 0x14)),
             (undefined *)*puVar1,puVar1[1],
             (PurchaseOption)*(undefined **)((long)&pSVar5->str + (long)*(int *)(lVar3 + 0x1c)));
  FUN_1002b1900(uVar10,uVar14);
  (*pcVar2)(uVar10,uVar13);
  FUN_10005241c(pSVar5,FUN_1002a75a4);
  PVar9.unknown = *(undefined **)(lVar15 + 0x68);
  *(undefined **)(lVar15 + 0x148) = PVar9.unknown;
  FUN_1002abb94();
  plVar6 = (long *)(ulong)*(uint *)(PTR__purchase_100ea8060 + 4);
  _swift_task_alloc();
  *(long **)(lVar15 + 0x150) = plVar6;
  *plVar6 = lVar7;
  plVar6[1] = (long)FUN_1002aec0c;
  StoreKit::Product::_purchase((Set<PurchaseOption>)*(undefined **)(lVar15 + 0xb0),PVar9);
  return;
}



/* Address: 0x1002aec0c | FUN_1002aec0c */

void FUN_1002aec0c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002aec64;
  }
  else {
    pcVar1 = FUN_1002aee80;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
  return;
}



/* Address: 0x1002aec64 | FUN_1002aec64 */

void FUN_1002aec64(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x78);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002aecc0;
  FUN_1002aef74(*(undefined8 *)(unaff_x22 + 0x70),uVar2 & 0xcfffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Address: 0x1002aecc0 | FUN_1002aecc0 */

void FUN_1002aecc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *unaff_x22;
  lVar9 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x160));
  if (unaff_x20 != 0) {
    (**(code **)(*(long *)(lVar10 + 0xa8) + 8))
              (*(undefined8 *)(lVar10 + 0xb0),*(undefined8 *)(lVar10 + 0xa0));
    uVar8 = *(undefined8 *)(lVar10 + 0x148);
    uVar1 = *(undefined8 *)(lVar10 + 0x100);
    uVar11 = *(undefined8 *)(lVar10 + 0xe8);
    uVar2 = *(undefined8 *)(lVar10 + 0xd0);
    uVar3 = *(undefined8 *)(lVar10 + 0xd8);
    uVar6 = *(undefined8 *)(lVar10 + 200);
    uVar5 = *(undefined8 *)(lVar10 + 0xb0);
    (**(code **)(*(long *)(lVar10 + 0xf8) + 8))(uVar1,*(undefined8 *)(lVar10 + 0xf0));
    _swift_bridgeObjectRelease(uVar8);
    FUN_1000da768(lVar10 + 0x38);
    lVar4 = *(long *)(lVar10 + 0x58);
    FUN_100004640(lVar10 + 0x38,*(undefined8 *)(lVar10 + 0x50));
    (**(code **)(lVar4 + 0x20))();
    FUN_100004594(lVar10 + 0x38);
    _swift_willThrow();
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002aeddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 8))();
    return;
  }
  uVar7 = *(undefined8 *)(lVar10 + 0x148);
  lVar4 = *(long *)(lVar10 + 0xf8);
  uVar3 = *(undefined8 *)(lVar10 + 0x100);
  uVar1 = *(undefined8 *)(lVar10 + 0xe8);
  uVar5 = *(undefined8 *)(lVar10 + 0xf0);
  uVar2 = *(undefined8 *)(lVar10 + 0xd0);
  uVar6 = *(undefined8 *)(lVar10 + 0xd8);
  uVar11 = *(undefined8 *)(lVar10 + 200);
  uVar8 = *(undefined8 *)(lVar10 + 0xb0);
  (**(code **)(*(long *)(lVar10 + 0xa8) + 8))(uVar8,*(undefined8 *)(lVar10 + 0xa0));
  (**(code **)(lVar4 + 8))(uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002aee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))(param_1);
  return;
}



/* Address: 0x1002aee80 | FUN_1002aee80 */

void FUN_1002aee80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xf8) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_bridgeObjectRelease(uVar7);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar7);
  (**(code **)(lVar4 + 0x20))(uVar6,uVar7,lVar4);
  FUN_100004594(unaff_x22 + 0x38);
  _swift_willThrow();
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002aef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002aef74 | FUN_1002aef74 */

/* WARNING: Removing unreachable block (ram,0x0001002af0d4) */

void FUN_1002aef74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  PurchaseResult PVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  Transaction TVar6;
  ulong uVar7;
  undefined7 extraout_var;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  puVar4 = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar5;
  TVar6 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = TVar6.unknown;
  lVar9 = *(long *)(TVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar5;
  puVar4 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar7 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar7;
  PVar2 = StoreKit::Product::PurchaseResult::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,PVar2.value);
  lVar13 = *(long *)(lVar9 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar8;
  (**(code **)(lVar13 + 0x10))();
  uVar5 = uVar8;
  (**(code **)(lVar13 + 0x58))(uVar8,lVar9);
  iVar3 = (int)uVar5;
  if (iVar3 == *(int *)
                PTR___enum_case_for_StoreKit_Product_PurchaseResult_success_StoreKit_Product_PurchaseResult_Type___>__StoreKit_VerificationResult<StoreKit_Transaction>___>_StoreKit_Product_PurchaseResult_100ea7ed8
     ) {
    (**(code **)(lVar13 + 0x60))(uVar8,lVar9);
    FUN_10019ffdc(uVar8,uVar7,&DAT_100fb7f90,&DAT_100c3c630);
    StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)puVar4);
    TVar6.unknown = (undefined *)(ulong)*(uint *)(PTR__finish_100ea7dd0 + 4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0xa8) = TVar6.unknown;
    *(long *)TVar6.unknown = unaff_x22;
    *(code **)(TVar6.unknown + 8) = FUN_1002af284;
    StoreKit::Transaction::_finish(TVar6);
    return;
  }
  if (iVar3 == *(int *)
                PTR___enum_case_for_StoreKit_Product_PurchaseResult_userCancelled_StoreKit_Product_PurchaseResult_Type___>_StoreKit_Product_PurchaseResult_100ea7ec8
     ) {
    FUN_1000da768(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar9 = *(long *)(unaff_x22 + 0x30);
    FUN_100004640(unaff_x22 + 0x10,uVar10);
    (**(code **)(lVar9 + 0x30))
              (0xd000000000000012,0x8000000100da00a0,0xd000000000000012,0x8000000100da00e0,uVar10,
               lVar9);
    FUN_100004594(unaff_x22 + 0x10);
    uVar10 = 2;
  }
  else if (iVar3 == *(int *)
                     PTR___enum_case_for_StoreKit_Product_PurchaseResult_pending_StoreKit_Product_PurchaseResult_Type___>_StoreKit_Product_PurchaseResult_100ea7ed0
          ) {
    uVar10 = 3;
  }
  else {
    (**(code **)(lVar13 + 8))(uVar8,lVar9);
    uVar10 = 4;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  (**(code **)(unaff_x22 + 8))(uVar10);
  return;
}



/* Address: 0x1002af284 | FUN_1002af284 */

void FUN_1002af284(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1002af2e4,uVar1,uVar2);
  return;
}



/* Address: 0x1002af2e4 | FUN_1002af2e4 */

void FUN_1002af2e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  Transaction TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  String SVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar6);
  (**(code **)(lVar4 + 0x30))
            (0xd000000000000012,0x8000000100da00a0,0xd000000000000012,0x8000000100da0100,uVar6,lVar4
            );
  TVar5.unknown = (undefined *)(unaff_x22 + 0x38);
  FUN_100004594();
  StoreKit::Transaction::_get_offerType(TVar5);
  SVar9 = StoreKit::Transaction::get_productID(TVar5);
  uVar6 = uVar3;
  FUN_1002bb348(uVar3,SVar9.str,SVar9.bridgeObject);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  FUN_100005808(uVar3,&DAT_100fbb630,&DAT_100c3c660);
  (**(code **)(lVar2 + 8))(uVar1,uVar7);
  FUN_100005808(uVar8,&DAT_100fb7f90,&DAT_100c3c630);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002af438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))((uint)uVar6 & 1);
  return;
}



/* Address: 0x1002af43c | FUN_1002af43c */

void FUN_1002af43c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  *(ulong *)(unaff_x22 + 0x138) = param_2;
  *(long *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  puVar3 = &DAT_100fbba98;
  FUN_1000037f0(&DAT_100fbba98,&DAT_100c3c5c0);
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000da768(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  FUN_100004640(unaff_x22 + 0x80,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0xd00000000000001b,0x8000000100d9ff00,0xd000000000000019,0x8000000100d9ff20,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x80);
  plVar6 = (long *)0xc10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002af558;
  FUN_1002b2cd0(plVar6,unaff_x22 + 0x48,param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002af558 | FUN_1002af558 */

void FUN_1002af558(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  plVar1 = (long *)(ulong)*(uint *)(PTR__sync_100ea7cc8 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x168) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1002af5b4;
  StoreKit::AppStore::_sync((AppStore)(__int8)plVar1);
  return;
}



/* Address: 0x1002af5b4 | FUN_1002af5b4 */

void FUN_1002af5b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x170) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x168));
  uVar1 = *(undefined8 *)(lVar4 + 0x130);
  uVar3 = *(undefined8 *)(lVar4 + 0x138);
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1002af61c;
  }
  else {
    pcVar2 = FUN_1002afa5c;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002af61c | FUN_1002af61c */

void FUN_1002af61c(void)

{
  int iVar1;
  StoreKitError SVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  FUN_1000da768(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar7 = *(long *)(unaff_x22 + 0x118);
  FUN_100004640(unaff_x22 + 0xf8,uVar8);
  (**(code **)(lVar7 + 0x30))
            (0xd00000000000001b,0x8000000100d9ff00,0xd00000000000001b,0x8000000100d9ff60,uVar8,lVar7
            );
  FUN_100004594(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x178) = 0;
  uVar3 = 0;
  FUN_1002b3374();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(unaff_x22 + 0x138);
    plVar5 = (long *)0xc10;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x180) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1002af888;
    FUN_1002b2cd0(plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x130),
                  uVar3 & 0xcfffffffffffffff);
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x178);
  FUN_1002b4ff4(unaff_x22 + 0x48);
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_1002af86c;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  _swift_errorRetain(uVar6);
  puVar4 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  SVar2 = StoreKit::StoreKitError::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,SVar2.value);
  _swift_dynamicCast(uVar8,unaff_x22 + 0x128,puVar4,lVar7,6);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  if ((int)uVar8 == 0) {
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,lVar7);
    FUN_100005808(uVar9,&DAT_100fbba98,&DAT_100c3c5c0);
LAB_1002af80c:
    FUN_1000da768(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar7 = *(long *)(unaff_x22 + 200);
    FUN_100004640(unaff_x22 + 0xa8,uVar8);
    (**(code **)(lVar7 + 0x20))(uVar6,uVar8,lVar7);
    FUN_100004594(unaff_x22 + 0xa8);
  }
  else {
    (**(code **)(lVar10 + 0x38))(uVar9,0,1,lVar7);
    uVar8 = uVar9;
    (**(code **)(lVar10 + 0x58))(uVar9,lVar7);
    iVar1 = *(int *)
             PTR___enum_case_for_StoreKit_StoreKitError_userCancelled_StoreKit_StoreKitError_Type___>_StoreKit_StoreKitError_100ea7cd8
    ;
    (**(code **)(lVar10 + 8))(uVar9,lVar7);
    if ((int)uVar8 != iVar1) goto LAB_1002af80c;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_willThrow();
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1002af86c:
                    /* WARNING: Could not recover jumptable at 0x0001002af884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002af888 | FUN_1002af888 */

void FUN_1002af888(void)

{
  int iVar1;
  StoreKitError SVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *unaff_x22;
  uVar6 = *(undefined8 *)(lVar9 + 0x178);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x180));
  FUN_1002afd98(lVar9 + 0x48,lVar9 + 0x10,uVar6);
  FUN_1002b4ff4(lVar9 + 0x10);
  lVar5 = *(long *)(lVar9 + 0x178);
  FUN_1002b4ff4(lVar9 + 0x48);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(lVar9 + 0x148);
    _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x150));
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
    goto LAB_1002afa40;
  }
  uVar4 = *(undefined8 *)(lVar9 + 0x178);
  uVar6 = *(undefined8 *)(lVar9 + 0x150);
  *(undefined8 *)(lVar9 + 0x128) = uVar4;
  _swift_errorRetain(uVar4);
  puVar3 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  SVar2 = StoreKit::StoreKitError::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  _swift_dynamicCast(uVar6,lVar9 + 0x128,puVar3,lVar5,6);
  lVar10 = *(long *)(lVar5 + -8);
  uVar7 = *(undefined8 *)(lVar9 + 0x150);
  if ((int)uVar6 == 0) {
    (**(code **)(lVar10 + 0x38))(uVar7,1,1,lVar5);
    FUN_100005808(uVar7,&DAT_100fbba98,&DAT_100c3c5c0);
LAB_1002af9e0:
    FUN_1000da768(lVar9 + 0xa8);
    uVar6 = *(undefined8 *)(lVar9 + 0xc0);
    lVar5 = *(long *)(lVar9 + 200);
    FUN_100004640(lVar9 + 0xa8,uVar6);
    (**(code **)(lVar5 + 0x20))(uVar4,uVar6,lVar5);
    FUN_100004594(lVar9 + 0xa8);
  }
  else {
    (**(code **)(lVar10 + 0x38))(uVar7,0,1,lVar5);
    uVar6 = uVar7;
    (**(code **)(lVar10 + 0x58))(uVar7,lVar5);
    iVar1 = *(int *)
             PTR___enum_case_for_StoreKit_StoreKitError_userCancelled_StoreKit_StoreKitError_Type___>_StoreKit_StoreKitError_100ea7cd8
    ;
    (**(code **)(lVar10 + 8))(uVar7,lVar5);
    if ((int)uVar6 != iVar1) goto LAB_1002af9e0;
  }
  uVar6 = *(undefined8 *)(lVar9 + 0x148);
  uVar4 = *(undefined8 *)(lVar9 + 0x150);
  _swift_willThrow();
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
LAB_1002afa40:
                    /* WARNING: Could not recover jumptable at 0x0001002afa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002afa5c | FUN_1002afa5c */

void FUN_1002afa5c(void)

{
  int iVar1;
  StoreKitError SVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  uVar10 = *(ulong *)(unaff_x22 + 0x170);
  uVar6 = *(ulong *)(unaff_x22 + 0x148);
  *(ulong *)(unaff_x22 + 0x120) = uVar10;
  _swift_errorRetain(uVar10);
  puVar3 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  SVar2 = StoreKit::StoreKitError::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,SVar2.value);
  _swift_dynamicCast(uVar6,unaff_x22 + 0x120,puVar3,lVar4,6);
  lVar12 = *(long *)(lVar4 + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  if ((uVar6 & 1) == 0) {
    (*UNRECOVERED_JUMPTABLE)(uVar7,1,1,lVar4);
    FUN_100005808(uVar7,&DAT_100fbba98,&DAT_100c3c5c0);
  }
  else {
    (*UNRECOVERED_JUMPTABLE)(uVar7,0,1,lVar4);
    uVar9 = uVar7;
    (**(code **)(lVar12 + 0x58))(uVar7,lVar4);
    iVar1 = *(int *)
             PTR___enum_case_for_StoreKit_StoreKitError_userCancelled_StoreKit_StoreKitError_Type___>_StoreKit_StoreKitError_100ea7cd8
    ;
    (**(code **)(lVar12 + 8))(uVar7,lVar4);
    if ((int)uVar9 == iVar1) {
      FUN_1000da768(unaff_x22 + 0xd0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar8 = *(long *)(unaff_x22 + 0xf0);
      FUN_100004640(unaff_x22 + 0xd0,uVar7);
      (**(code **)(lVar8 + 0x30))
                (0xd00000000000001b,0x8000000100d9ff00,0xd00000000000001b,0x8000000100d9ff40,uVar7,
                 lVar8);
      FUN_100004594(unaff_x22 + 0xd0);
    }
  }
  *(ulong *)(unaff_x22 + 0x178) = uVar10;
  FUN_1002b3374();
  if ((uVar10 & 1) == 0) {
    uVar6 = *(ulong *)(unaff_x22 + 0x138);
    plVar5 = (long *)0xc10;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x180) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1002af888;
    FUN_1002b2cd0(plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x130),
                  uVar6 & 0xcfffffffffffffff);
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x178);
  FUN_1002b4ff4(unaff_x22 + 0x48);
  if (lVar8 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_1002afd78;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
  _swift_errorRetain(uVar11);
  puVar3 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  _swift_dynamicCast(uVar7,unaff_x22 + 0x128,puVar3,lVar4,6);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  if ((int)uVar7 == 0) {
    (*UNRECOVERED_JUMPTABLE)(uVar9,1,1,lVar4);
    FUN_100005808(uVar9,&DAT_100fbba98,&DAT_100c3c5c0);
LAB_1002afd18:
    FUN_1000da768(unaff_x22 + 0xa8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar4 = *(long *)(unaff_x22 + 200);
    FUN_100004640(unaff_x22 + 0xa8,uVar7);
    (**(code **)(lVar4 + 0x20))(uVar11,uVar7,lVar4);
    FUN_100004594(unaff_x22 + 0xa8);
  }
  else {
    (*UNRECOVERED_JUMPTABLE)(uVar9,0,1,lVar4);
    uVar7 = uVar9;
    (**(code **)(lVar12 + 0x58))(uVar9,lVar4);
    iVar1 = *(int *)
             PTR___enum_case_for_StoreKit_StoreKitError_userCancelled_StoreKit_StoreKitError_Type___>_StoreKit_StoreKitError_100ea7cd8
    ;
    (**(code **)(lVar12 + 8))(uVar9,lVar4);
    if ((int)uVar7 != iVar1) goto LAB_1002afd18;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_willThrow();
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1002afd78:
                    /* WARNING: Could not recover jumptable at 0x0001002afd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002afd98 | FUN_1002afd98 */

void FUN_1002afd98(long param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_270 [24];
  undefined8 local_258;
  long lStack_250;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    bVar2 = 0 < (long)param_2[5];
  }
  else {
    bVar2 = false;
  }
  uVar13 = 0x65736c6166;
  uVar15 = 0x65757274;
  puVar3 = &DAT_100fbbaa0;
  FUN_1000037f0(&DAT_100fbbaa0,&DAT_100c3c5d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x20) = 0x73736563637573;
  *(undefined8 *)(puVar3 + 0x18) = 0xe;
  *(undefined8 *)(puVar3 + 0x10) = 7;
  uVar9 = uVar15;
  if (param_3 != 0) {
    uVar9 = uVar13;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_3 != 0) {
    puVar1 = &DAT_e500000000000000;
  }
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e700000000000000;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  *(undefined1 **)(puVar3 + 0x38) = puVar1;
  *(undefined8 *)(puVar3 + 0x40) = 0x657265766f636572;
  uVar9 = uVar15;
  if (!bVar2) {
    uVar9 = uVar13;
  }
  puVar1 = &DAT_e400000000000000;
  if (!bVar2) {
    puVar1 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar3 + 0x48) = 0xe900000000000064;
  *(undefined8 *)(puVar3 + 0x50) = uVar9;
  *(undefined1 **)(puVar3 + 0x58) = puVar1;
  *(undefined8 *)(puVar3 + 0x60) = 0x6f726665726f7473;
  *(undefined8 *)(puVar3 + 0x68) = 0xed000064695f746e;
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    lVar12 = -0x1d00000000000000;
    uVar9 = 0x6c696e;
  }
  else {
    uVar9 = *param_2;
    lVar12 = lVar8;
  }
  *(undefined8 *)(puVar3 + 0x70) = uVar9;
  *(long *)(puVar3 + 0x78) = lVar12;
  *(undefined8 *)(puVar3 + 0x80) = 0xd000000000000012;
  *(undefined8 *)(puVar3 + 0x88) = 0x8000000100d9ff80;
  lVar12 = param_2[3];
  if (lVar12 == 0) {
    lVar14 = -0x1d00000000000000;
    uVar9 = 0x6c696e;
  }
  else {
    uVar9 = param_2[2];
    lVar14 = lVar12;
  }
  *(undefined8 *)(puVar3 + 0x90) = uVar9;
  *(long *)(puVar3 + 0x98) = lVar14;
  *(undefined8 *)(puVar3 + 0xa0) = 0x765f78745f707061;
  *(undefined8 *)(puVar3 + 0xa8) = 0xef64656966697265;
  bVar2 = (*(byte *)(param_2 + 4) & 1) == 0;
  uVar9 = uVar15;
  if (bVar2) {
    uVar9 = uVar13;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar2) {
    puVar1 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar3 + 0xb0) = uVar9;
  *(undefined1 **)(puVar3 + 0xb8) = puVar1;
  *(undefined8 *)(puVar3 + 0xc0) = 0xd000000000000016;
  *(undefined8 *)(puVar3 + 200) = 0x8000000100d9ffa0;
  lVar14 = *(long *)(param_1 + 0x30);
  uVar9 = uVar15;
  if (lVar14 < 1) {
    uVar9 = uVar13;
  }
  puVar1 = &DAT_e400000000000000;
  if (lVar14 < 1) {
    puVar1 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar3 + 0xd0) = uVar9;
  *(undefined1 **)(puVar3 + 0xd8) = puVar1;
  *(undefined8 *)(puVar3 + 0xe0) = 0xd000000000000015;
  *(undefined8 *)(puVar3 + 0xe8) = 0x8000000100d9ffc0;
  lVar11 = param_2[6];
  if (lVar11 < 1) {
    uVar15 = uVar13;
  }
  puVar1 = &DAT_e400000000000000;
  if (lVar11 < 1) {
    puVar1 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar3 + 0xf0) = uVar15;
  *(undefined1 **)(puVar3 + 0xf8) = puVar1;
  _swift_bridgeObjectRetain(lVar8);
  _swift_bridgeObjectRetain(lVar12);
  puVar4 = puVar3;
  FUN_1002b34b8(puVar3);
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fbbaa8;
  FUN_1000037f0(&DAT_100fbbaa8,&DAT_100c3c5e0);
  _swift_arrayDestroy(puVar3 + 0x20,7,puVar5);
  puVar3 = &DAT_100fbbab0;
  FUN_1000037f0(&DAT_100fbbab0,&DAT_100c3cbf0);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 8;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  *(undefined8 *)(puVar3 + 0x20) = 0xd000000000000013;
  puVar5 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar3 + 0x28) = 0x8000000100d9ffe0;
  *(long *)(puVar3 + 0x30) = lVar7;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0xd000000000000012;
  uVar9 = param_2[5];
  *(undefined8 *)(puVar3 + 0x58) = 0x8000000100da0000;
  *(undefined8 *)(puVar3 + 0x60) = uVar9;
  *(undefined **)(puVar3 + 0x78) = puVar5;
  *(undefined8 *)(puVar3 + 0x80) = 0xd000000000000016;
  *(undefined8 *)(puVar3 + 0x88) = 0x8000000100da0020;
  *(long *)(puVar3 + 0x90) = lVar14;
  *(undefined **)(puVar3 + 0xa8) = puVar5;
  *(undefined8 *)(puVar3 + 0xb0) = 0xd000000000000015;
  *(undefined **)(puVar3 + 0xd8) = puVar5;
  *(undefined8 *)(puVar3 + 0xb8) = 0x8000000100da0040;
  *(long *)(puVar3 + 0xc0) = lVar11;
  puVar6 = puVar3;
  FUN_1002b35c8();
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fbb7b0;
  FUN_1000037f0(&DAT_100fbb7b0,&DAT_100c3c090);
  _swift_arrayDestroy(puVar3 + 0x20,4,puVar5);
  FUN_1000da768(auStack_270);
  FUN_100004640(auStack_270,local_258);
  uVar10 = 1;
  if (param_3 != 0) {
    uVar10 = 2;
  }
  (**(code **)(lStack_250 + 0x38))
            (0xd000000000000019,0x8000000100da0060,uVar10,puVar4,puVar6,local_258,lStack_250);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100004594(auStack_270);
  return;
}



/* Address: 0x1002b0184 | FUN_1002b0184 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002b0184(void)

{
  return ZEXT816(0x100fbba28);
}



/* Address: 0x1002b01a4 | FUN_1002b01a4 */

void FUN_1002b01a4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  
  puVar1 = &DAT_100fb8650;
  FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
  _swift_initStaticObject();
  plVar2 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002b022c;
  FUN_1002ad7ac(param_1,param_2 & 0xcfffffffffffffff,puVar1);
  return;
}



/* Address: 0x1002b022c | FUN_1002b022c */

void FUN_1002b022c(undefined8 param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002b0274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1002b0278 | FUN_1002b0278 */

void FUN_1002b0278(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ced68;
  FUN_1002ad7ac(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x1002b02e0 | FUN_1002b02e0 */

void FUN_1002b02e0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ced68;
  FUN_1002ae578(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,param_5);
  return;
}



/* Address: 0x1002b0360 | FUN_1002b0360 */

void FUN_1002b0360(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1002af43c(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002b03c0 | FUN_1002b03c0 */

void FUN_1002b03c0(Storefront param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__get_current_100ea7d08 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000749a0;
  StoreKit::Storefront::_get_current(param_1);
  return;
}



/* Address: 0x1002b0414 | FUN_1002b0414 */

void FUN_1002b0414(AppTransaction param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined **)(unaff_x22 + 0x10) = param_1.unknown;
  plVar1 = (long *)(ulong)*(uint *)(PTR__get_shared_100ea7e50 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002b046c;
  StoreKit::AppTransaction::_get_shared(param_1);
  return;
}



/* Address: 0x1002b046c | FUN_1002b046c */

void FUN_1002b046c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar3 = 0;
    FUN_1000da368(0,0);
    pcVar2 = FUN_1002b04f4;
  }
  else {
    _swift_errorRelease();
    uVar1 = 0;
    uVar3 = 0;
    FUN_1000da368(0,0);
    pcVar2 = FUN_1002b0554;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002b04f4 | FUN_1002b04f4 */

void FUN_1002b04f4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1 = &DAT_100fb7fa8;
  FUN_1000037f0(&DAT_100fb7fa8,&DAT_100c37b00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(uVar2,0,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002b0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b0554 | FUN_1002b0554 */

void FUN_1002b0554(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1 = &DAT_100fb7fa8;
  FUN_1000037f0(&DAT_100fb7fa8,&DAT_100c37b00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(uVar2,1,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002b05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b05b4 | FUN_1002b05b4 */

void FUN_1002b05b4(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncIterator AVar3;
  Transactions TVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x10) = uVar2;
  AVar3 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = AVar3.unknown;
  lVar5 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  TVar4 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = TVar4.unknown;
  lVar5 = *(long *)(TVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_1002b0664,0,0);
  return;
}



/* Address: 0x1002b0664 | FUN_1002b0664 */

void FUN_1002b0664(Transaction param_1)

{
  Transactions TVar1;
  long *plVar2;
  long unaff_x22;
  
  TVar1 = StoreKit::Transaction::get_currentEntitlements(param_1);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002b06d4;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1002b06d4 | FUN_1002b06d4 */

void FUN_1002b06d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1002b0730,uVar1,uVar2);
  return;
}



/* Address: 0x1002b0730 | FUN_1002b0730 */

void FUN_1002b0730(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar4 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar5 = uVar8;
  (**(code **)(*(long *)(puVar4 + -8) + 0x30))(uVar8,1,puVar4);
  if ((int)uVar5 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x18));
    (**(code **)(lVar7 + 8))(uVar1,uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002b07e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x48);
  if (!SCARRY8(lVar7,1)) {
    FUN_100005808(uVar8,&DAT_100fb83a0,&DAT_100c37ad0);
    *(long *)(unaff_x22 + 0x48) = lVar7 + 1;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1002b06d4;
    StoreKit::Transaction::Transactions::AsyncIterator::_next
              ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0858);
  (*pcVar3)();
}



/* Address: 0x1002b0858 | FUN_1002b0858 */

void FUN_1002b0858(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002b08a0;
  FUN_1002b05b4();
  return;
}



/* Address: 0x1002b08a0 | FUN_1002b08a0 */

void FUN_1002b08a0(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001002b08e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1002b08e8 | FUN_1002b08e8 */

void FUN_1002b08e8(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1002b08a0;
  FUN_1002b0930();
  return;
}



/* Address: 0x1002b0930 | FUN_1002b0930 */

void FUN_1002b0930(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncIterator AVar3;
  Transactions TVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x10) = uVar2;
  AVar3 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = AVar3.unknown;
  lVar5 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  TVar4 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = TVar4.unknown;
  lVar5 = *(long *)(TVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_1002b09e0,0,0);
  return;
}



/* Address: 0x1002b09e0 | FUN_1002b09e0 */

void FUN_1002b09e0(Transaction param_1)

{
  Transactions TVar1;
  long *plVar2;
  long unaff_x22;
  
  TVar1 = StoreKit::Transaction::get_all(param_1);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002b0a50;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1002b0a50 | FUN_1002b0a50 */

void FUN_1002b0a50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1002b0aac,uVar1,uVar2);
  return;
}



/* Address: 0x1002b0aac | FUN_1002b0aac */

void FUN_1002b0aac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar4 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar5 = uVar8;
  (**(code **)(*(long *)(puVar4 + -8) + 0x30))(uVar8,1,puVar4);
  if ((int)uVar5 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x18));
    (**(code **)(lVar7 + 8))(uVar1,uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002b0b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x48);
  if (!SCARRY8(lVar7,1)) {
    FUN_100005808(uVar8,&DAT_100fb83a0,&DAT_100c37ad0);
    *(long *)(unaff_x22 + 0x48) = lVar7 + 1;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1002b0a50;
    StoreKit::Transaction::Transactions::AsyncIterator::_next
              ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0bd4);
  (*pcVar3)();
}



/* Address: 0x1002b0bd4 | FUN_1002b0bd4 */

void FUN_1002b0bd4(void)

{
  FUN_1002b10e4();
  return;
}



/* Address: 0x1002b0be0 | FUN_1002b0be0 */

undefined * FUN_1002b0be0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b0cfc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbbc00;
    FUN_1000037f0(&DAT_100fbbc00,&DAT_100c3c6d8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ebcb60);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002b0cfc | FUN_1002b0cfc */

void FUN_1002b0cfc(void)

{
  FUN_1002b1474();
  return;
}



/* Address: 0x1002b0d20 | FUN_1002b0d20 */

void FUN_1002b0d20(void)

{
  FUN_1002b1474();
  return;
}



/* Address: 0x1002b0d44 | FUN_1002b0d44 */

undefined * FUN_1002b0d44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0ec0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fbbbe8;
    FUN_1000037f0(&DAT_100fbbbe8,&DAT_100c3c6b8);
    lVar5 = 0;
    FUN_1002bd9c0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0eb8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0ebc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1002bd9c0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1002b0ec0 | FUN_1002b0ec0 */

void FUN_1002b0ec0(ulong param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  Hasher HVar8;
  __int64 _Var9;
  long unaff_x20;
  String SVar10;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  uVar1 = (uint)param_1 & 0xff;
  pcVar2 = "verified";
  pcVar5 = &DAT_d000000000000032;
  if (uVar1 != 4) {
    pcVar2 = "onBarViewModel.swift";
    pcVar5 = (char *)0xd00000000000002d;
  }
  pcVar4 = "tion.annual.legacy";
  pcVar6 = &DAT_d000000000000032;
  if (uVar1 != 3) {
    pcVar4 = pcVar2;
    pcVar6 = pcVar5;
  }
  pcVar2 = (char *)0xd00000000000002b;
  pcVar5 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (uVar1 != 1) {
    pcVar2 = (char *)0xd000000000000031;
    pcVar5 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar3 = "e.macos.subscription.annual";
  pcVar7 = (char *)0xd00000000000002c;
  if ((param_1 & 0xff) != 0) {
    pcVar3 = pcVar5 + 0x20;
    pcVar7 = pcVar2;
  }
  if (uVar1 < 3) {
    pcVar4 = pcVar3;
    pcVar6 = pcVar7;
  }
  SVar10.bridgeObject = (void *)((ulong)pcVar4 | 0x8000000000000000);
  SVar10.str = pcVar6;
  Swift::String::hash((Hasher)auStack_78,SVar10);
  HVar8.unknown = (undefined *)((ulong)pcVar4 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  _Var9 = Swift::Hasher::_finalize(HVar8);
  FUN_100071664(param_1,_Var9);
  return;
}



/* Address: 0x1002b0fc0 | FUN_1002b0fc0 */

void FUN_1002b0fc0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x10);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b1010);
  (*pcVar3)();
}



/* Address: 0x1002b1010 | FUN_1002b1010 */

void FUN_1002b1010(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002b10e4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002b1034 | FUN_1002b1034 */

void FUN_1002b1034(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002b127c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002b1050 | FUN_1002b1050 */

void FUN_1002b1050(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002b1474();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002b108c | FUN_1002b108c */

void FUN_1002b108c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002b1384();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002b10a8 | FUN_1002b10a8 */

void FUN_1002b10a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002b1474();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002b10e4 | FUN_1002b10e4 */

undefined *
FUN_1002b10e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b127c);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fb7de0;
    FUN_1000037f0(&DAT_100fb7de0,&DAT_100c37680);
    puVar6 = &DAT_100fb7dd8;
    FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b1274);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b1278);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar5;
}



/* Address: 0x1002b127c | FUN_1002b127c */

undefined * FUN_1002b127c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b1384);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbbbc8;
    FUN_1000037f0(&DAT_100fbbbc8,&DAT_100c3c6a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002b1384 | FUN_1002b1384 */

undefined * FUN_1002b1384(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b1474);
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
    puVar3 = &DAT_100fb8650;
    FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002b1474 | FUN_1002b1474 */

undefined *
FUN_1002b1474(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7,code *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b15f8);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    FUN_1000037f0(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b15f0);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b15f4);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_8)(param_4);
  return puVar6;
}



/* Address: 0x1002b15f8 | FUN_1002b15f8 */

undefined * FUN_1002b15f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b16f8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbbbb8;
    FUN_1000037f0(&DAT_100fbbbb8,&DAT_100c3c690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002b16f8 | FUN_1002b16f8 */

void FUN_1002b16f8(ulong *param_1,ulong *param_2,long *param_3)

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
  FUN_1002abb94();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b17a4);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b17a8);
  (*pcVar2)();
}



/* Address: 0x1002b17a8 | FUN_1002b17a8 */

void FUN_1002b17a8(long param_1)

{
  FUN_1002b15f8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}


