/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002b5eb0 | FUN_1002b5eb0 */

void FUN_1002b5eb0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fb81c8,&DAT_100c38060);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fb81c8,&DAT_100c38060);
    uVar10 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1000;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100ec6a98;
    _swift_allocObject(&DAT_100ec6a98,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c3c8d8,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    puVar2 = &DAT_100ec6ac0;
    _swift_allocObject(&DAT_100ec6ac0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c3c8e0,
                       puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x1002b610c | FUN_1002b610c */

void FUN_1002b610c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1002b85e4(0);
  plVar1 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1002b617c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002b617c | FUN_1002b617c */

void FUN_1002b617c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  RenewalState RVar9;
  ulong uVar10;
  undefined *puVar11;
  Transaction TVar12;
  ulong uVar13;
  RenewalInfo RVar14;
  SubscriptionInfo SVar15;
  Product PVar16;
  undefined *puVar17;
  long *plVar18;
  long lVar19;
  long unaff_x22;
  long lVar20;
  Status SVar21;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  RVar9 = StoreKit::Product::SubscriptionInfo::RenewalState::typeMetadataAccessor();
  uVar10 = *(long *)(*(long *)(RVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar10;
  puVar11 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x58) = puVar11;
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar10;
  puVar11 = &DAT_100fbb638;
  FUN_1000037f0(&DAT_100fbb638,&DAT_100c3c050);
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar10;
  TVar12 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = TVar12.unknown;
  lVar19 = *(long *)(TVar12.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar10;
  puVar11 = &DAT_100fbbed0;
  FUN_1000037f0(&DAT_100fbbed0,&DAT_100c3c900);
  *(undefined **)(unaff_x22 + 0x90) = puVar11;
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar10;
  puVar11 = &DAT_100fbbed8;
  FUN_1000037f0(&DAT_100fbbed8,&DAT_100c3c908);
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar10;
  RVar14 = StoreKit::Product::SubscriptionInfo::RenewalInfo::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = RVar14.unknown;
  lVar19 = *(long *)(RVar14.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar10;
  lVar19 = 0;
  FUN_1002b5a40();
  *(long *)(unaff_x22 + 200) = lVar19;
  lVar19 = *(long *)(lVar19 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar10;
  SVar21 = StoreKit::Product::SubscriptionInfo::Status::typeMetadataAccessor();
  *(__int64 *)(unaff_x22 + 0xf8) = SVar21.code;
  lVar19 = *(long *)(SVar21.code + -8);
  *(long *)(unaff_x22 + 0x100) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10,SVar21.reasonPhrase.str,SVar21.reasonPhrase.bridgeObject);
  *(ulong *)(unaff_x22 + 0x108) = uVar10;
  SVar15 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x110) = SVar15.unknown;
  lVar19 = *(long *)(SVar15.unknown + -8);
  *(long *)(unaff_x22 + 0x118) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar10;
  puVar11 = &DAT_100fbbee0;
  FUN_1000037f0(&DAT_100fbbee0,&DAT_100c3c910);
  *(undefined **)(unaff_x22 + 0x130) = puVar11;
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar10;
  puVar11 = &DAT_100fb8658;
  FUN_1000037f0(&DAT_100fb8658,&DAT_100c38220);
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar10;
  PVar16 = StoreKit::Product::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x160) = PVar16.unknown;
  lVar19 = *(long *)(PVar16.unknown + -8);
  *(long *)(unaff_x22 + 0x168) = lVar19;
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar19 = 0;
  *(ulong *)(unaff_x22 + 0x180) = uVar10;
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    cVar4 = (&DAT_100fbb870)[lVar19];
    if (cVar4 != '\x05') {
      puVar17 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar17 & 1) == 0) {
        FUN_1002b108c(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar10) {
        FUN_1002b108c(1 < *(ulong *)(puVar11 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar10 + 1;
      puVar11[uVar10 + 0x20] = cVar4;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 6);
  lVar19 = *(long *)(puVar11 + 0x10);
  if (lVar19 == 0) {
    _swift_release(puVar11);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1002b1034(0,lVar19,0);
    lVar20 = 0x20;
    do {
      bVar5 = puVar11[lVar20];
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
      uVar10 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar10) {
        FUN_1002b1034(1 < *(ulong *)(puVar11 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar10 + 1;
      *(undefined1 **)(puVar11 + uVar10 * 0x10 + 0x20) = puVar7;
      *(ulong *)(puVar11 + uVar10 * 0x10 + 0x28) = (ulong)pcVar3 | 0x8000000000000000;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    _swift_release(puVar11);
  }
  *(undefined **)(unaff_x22 + 0x188) = puVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = puVar11;
  plVar18 = (long *)(ulong)*(uint *)(PTR__products_100ea8050 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar18;
  puVar11 = &DAT_100fbbee8;
  FUN_1000037f0(&DAT_100fbbee8,&DAT_100c3c920);
  puVar17 = puVar11;
  FUN_1002bb860();
  *plVar18 = unaff_x22;
  plVar18[1] = (long)FUN_1002b66e0;
  StoreKit::Product::_products((undefined8 *)(unaff_x22 + 0x20),puVar11,puVar17);
  return;
}



/* Address: 0x1002b66e0 | FUN_1002b66e0 */

void FUN_1002b66e0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x198) = param_1;
  *(long *)(lVar4 + 0x1a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 400));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x188));
    FUN_1000da368();
    *(undefined8 *)(lVar4 + 0x1a8) = uVar1;
    *(undefined8 *)(lVar4 + 0x1b0) = uVar3;
    pcVar2 = FUN_1002b6790;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    _swift_errorRelease();
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002b7f34;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002b6790 | FUN_1002b6790 */

/* WARNING: Removing unreachable block (ram,0x0001002b6e44) */

void FUN_1002b6790(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  long lVar10;
  SubscriptionInfo SVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  Product PVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte *pbVar39;
  byte *pbVar40;
  long unaff_x22;
  long lVar41;
  code *pcVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  String SVar51;
  Status SVar52;
  Status SVar53;
  Status SVar54;
  
  lVar10 = *(long *)(unaff_x22 + 0x198);
  uVar20 = *(ulong *)(lVar10 + 0x10);
  *(ulong *)(unaff_x22 + 0x1b8) = uVar20;
  if (uVar20 != 0) {
    uVar30 = 0;
    lVar41 = *(long *)(unaff_x22 + 0x168);
    lVar21 = *(long *)(unaff_x22 + 0x130);
    lVar22 = *(long *)(unaff_x22 + 0x118);
    uVar19 = *(uint *)(lVar41 + 0x50);
    *(uint *)(unaff_x22 + 0x208) = uVar19;
    uVar23 = (ulong)uVar19 & 0xff;
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1002b73a0);
        (*pcVar25)();
      }
      PVar32.unknown = *(undefined **)(unaff_x22 + 0x180);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar44 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar49 = *(long *)(unaff_x22 + 0x138);
      uVar46 = *(undefined8 *)(unaff_x22 + 0x110);
      lVar24 = *(long *)(lVar41 + 0x48);
      *(long *)(unaff_x22 + 0x1c0) = lVar24;
      pcVar25 = *(code **)(lVar41 + 0x10);
      *(code **)(unaff_x22 + 0x1c8) = pcVar25;
      (*pcVar25)(PVar32.unknown,
                 lVar10 + (uVar23 + 0x20 & (uVar23 ^ 0xffffffffffffffff)) + lVar24 * uVar30,
                 *(undefined8 *)(unaff_x22 + 0x160));
      StoreKit::Product::_get_subscription(PVar32);
      (**(code **)(lVar22 + 0x38))(uVar44,1,1,uVar46);
      lVar35 = (long)*(int *)(lVar21 + 0x30);
      FUN_100011090(uVar15,lVar49,&DAT_100fb8658,&DAT_100c38220);
      FUN_100011090(uVar44,lVar49 + lVar35,&DAT_100fb8658,&DAT_100c38220);
      pcVar25 = *(code **)(lVar22 + 0x30);
      *(code **)(unaff_x22 + 0x1d0) = pcVar25;
      lVar24 = lVar49;
      (*pcVar25)(lVar49,1,uVar46);
      if ((int)lVar24 != 1) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
        FUN_100011090(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x148),
                      &DAT_100fb8658,&DAT_100c38220);
        lVar24 = lVar49 + lVar35;
        (*pcVar25)(lVar24,1,uVar15);
        uVar47 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
        uVar46 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar44 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar36 = *(undefined8 *)(unaff_x22 + 0x150);
        if ((int)lVar24 == 1) {
          uVar26 = *(undefined8 *)(unaff_x22 + 0x110);
          FUN_100005808(uVar36,&DAT_100fb8658,&DAT_100c38220);
          FUN_100005808(uVar15,&DAT_100fb8658,&DAT_100c38220);
          pcVar42 = *(code **)(lVar41 + 8);
          (*pcVar42)(uVar47,uVar46);
          (**(code **)(lVar22 + 8))(uVar44,uVar26);
          goto LAB_1002b6b0c;
        }
        uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar43 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x110);
        (**(code **)(lVar22 + 0x20))(uVar43,lVar49 + lVar35,uVar33);
        puVar14 = &DAT_100fbbef8;
        FUN_100003a00(&DAT_100fbbef8,PTR_typeMetadataAccessor_100ea7fa8,
                      PTR_StoreKit__StoreKit__Product__SubscriptionInfo_>Swift__Equatable_100ea7fb8)
        ;
        bVar9 = Swift::Equatable::___infix(uVar44,uVar43,uVar33,puVar14);
        pcVar25 = *(code **)(lVar22 + 8);
        (*pcVar25)(uVar43,uVar33);
        FUN_100005808(uVar36,&DAT_100fb8658,&DAT_100c38220);
        FUN_100005808(uVar15,&DAT_100fb8658,&DAT_100c38220);
        pcVar42 = *(code **)(lVar41 + 8);
        (*pcVar42)(uVar47,uVar46);
        (*pcVar25)(uVar44,uVar33);
        FUN_100005808(uVar26,&DAT_100fb8658,&DAT_100c38220);
        if (bVar9) goto LAB_1002b6818;
LAB_1002b6b24:
        uVar20 = 0;
        *(code **)(unaff_x22 + 0x1d8) = pcVar42;
        puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
        *(undefined **)(unaff_x22 + 0x28) = PTR___swiftEmptySetSingleton_100eae0e8;
        *(undefined **)(unaff_x22 + 0x30) = puVar14;
        lVar10 = *(long *)(unaff_x22 + 0x1a0);
        do {
          *(ulong *)(unaff_x22 + 0x1e0) = uVar20;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x198) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1002b73a4);
            (*pcVar25)();
          }
          pcVar25 = *(code **)(unaff_x22 + 0x1d0);
          PVar32.unknown = *(undefined **)(unaff_x22 + 0x170);
          uVar44 = *(undefined8 *)(unaff_x22 + 0x178);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
          lVar21 = *(long *)(unaff_x22 + 0x168);
          uVar46 = *(undefined8 *)(unaff_x22 + 0x140);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x110);
          (**(code **)(unaff_x22 + 0x1c8))
                    (uVar44,*(long *)(unaff_x22 + 0x198) +
                            ((ulong)*(byte *)(unaff_x22 + 0x208) + 0x20 &
                            ((ulong)*(byte *)(unaff_x22 + 0x208) ^ 0xffffffffffffffff)) +
                            *(long *)(unaff_x22 + 0x1c0) * uVar20,uVar15);
          (**(code **)(lVar21 + 0x20))(PVar32.unknown,uVar44,uVar15);
          StoreKit::Product::_get_subscription(PVar32);
          (*pcVar25)(uVar46,1,uVar36);
          if ((int)uVar46 == 1) {
            uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
            (**(code **)(unaff_x22 + 0x1d8))
                      (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
            FUN_100005808(uVar15,&DAT_100fb8658,&DAT_100c38220);
          }
          else {
            SVar11.unknown = *(undefined **)(unaff_x22 + 0x120);
            (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x20))
                      (SVar11.unknown,*(undefined8 *)(unaff_x22 + 0x140),
                       *(undefined8 *)(unaff_x22 + 0x110));
            SVar51 = StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(SVar11);
            uVar20 = unaff_x22 + 0x10;
            FUN_1002b17bc(uVar20,SVar51.str,SVar51.bridgeObject);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x18));
            if ((uVar20 & 1) != 0) {
              _swift_task_switch(FUN_1002b73a8,0,0);
              return;
            }
            pcVar25 = *(code **)(unaff_x22 + 0x1d8);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x160);
            (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
                      (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
            (*pcVar25)(uVar15,uVar44);
          }
          uVar20 = *(long *)(unaff_x22 + 0x1e0) + 1;
        } while (uVar20 != *(ulong *)(unaff_x22 + 0x1b8));
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x198));
        lVar22 = *(long *)(unaff_x22 + 0x30);
        lVar21 = *(long *)(lVar22 + 0x10);
        puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar21 != 0) {
          lVar24 = *(long *)(unaff_x22 + 0x100);
          lVar35 = *(long *)(unaff_x22 + 0xd0);
          lVar48 = *(long *)(unaff_x22 + 0xb0);
          lVar31 = *(long *)(unaff_x22 + 0x78);
          lVar41 = lVar22 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
          lVar49 = *(long *)(lVar24 + 0x48);
          pcVar25 = *(code **)(lVar24 + 0x10);
          do {
            uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
            pvVar17 = *(void **)(unaff_x22 + 0xf8);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x90);
            lVar16 = lVar41;
            (*pcVar25)();
            SVar52.reasonPhrase.str = (char *)lVar16;
            SVar52.code = uVar15;
            SVar52.reasonPhrase.bridgeObject = pvVar17;
            StoreKit::Product::SubscriptionInfo::Status::_get_renewalInfo(SVar52);
            StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar44);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x108);
            uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
            pvVar17 = *(void **)(unaff_x22 + 0xa8);
            uVar46 = *(undefined8 *)(unaff_x22 + 0x98);
            if (lVar10 == 0) {
              uVar36 = *(undefined8 *)(unaff_x22 + 0xc0);
              uVar44 = *(undefined8 *)(unaff_x22 + 0x58);
              FUN_100005808(uVar46,&DAT_100fbbed0,&DAT_100c3c900);
              (**(code **)(lVar48 + 0x38))(uVar15,0,1,pvVar17);
              (**(code **)(lVar48 + 0x20))();
              SVar53.reasonPhrase.str = (char *)uVar15;
              SVar53.code = uVar36;
              SVar53.reasonPhrase.bridgeObject = pvVar17;
              StoreKit::Product::SubscriptionInfo::Status::_get_transaction(SVar53);
              StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar44);
              uVar27 = *(undefined8 *)(unaff_x22 + 0x108);
              uVar37 = *(undefined8 *)(unaff_x22 + 0xf8);
              uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
              uVar47 = *(undefined8 *)(unaff_x22 + 0xe8);
              uVar44 = *(undefined8 *)(unaff_x22 + 0xb8);
              uVar26 = *(undefined8 *)(unaff_x22 + 0xc0);
              uVar50 = *(undefined8 *)(unaff_x22 + 0xa8);
              uVar46 = *(undefined8 *)(unaff_x22 + 0x80);
              uVar33 = *(undefined8 *)(unaff_x22 + 0x88);
              uVar36 = *(undefined8 *)(unaff_x22 + 0x68);
              pvVar17 = *(void **)(unaff_x22 + 0x70);
              uVar38 = *(undefined8 *)(unaff_x22 + 0x50);
              FUN_100005808(*(undefined8 *)(unaff_x22 + 0x60),&DAT_100fb7f90,&DAT_100c3c630);
              (**(code **)(lVar31 + 0x38))(uVar36,0,1,pvVar17);
              uVar43 = uVar33;
              pvVar18 = pvVar17;
              (**(code **)(lVar31 + 0x20))();
              SVar54.reasonPhrase.str = (char *)uVar36;
              SVar54.code = uVar43;
              SVar54.reasonPhrase.bridgeObject = pvVar18;
              StoreKit::Product::SubscriptionInfo::Status::get_state(SVar54);
              (**(code **)(lVar48 + 0x10))(uVar44,uVar26,uVar50);
              (**(code **)(lVar31 + 0x10))(uVar46,uVar33,pvVar17);
              FUN_1002badec(uVar15,uVar38,uVar44,uVar46);
              (**(code **)(lVar31 + 8))(uVar33,pvVar17);
              (**(code **)(lVar48 + 8))(uVar26,uVar50);
              (**(code **)(lVar24 + 8))(uVar27,uVar37);
              FUN_1000523d8(uVar15,uVar47,FUN_1002b5a40);
              puVar12 = puVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puVar14;
              if (((ulong)puVar12 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_1002b0cfc(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
              }
              uVar20 = *(ulong *)(puVar13 + 0x10);
              puVar14 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_1002b0cfc(puVar14,uVar20 + 1,1,puVar13);
              }
              uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
              *(ulong *)(puVar14 + 0x10) = uVar20 + 1;
              uVar30 = (ulong)*(byte *)(lVar35 + 0x50);
              FUN_1000523d8(uVar15,puVar14 + *(long *)(lVar35 + 0x48) * uVar20 +
                                             (uVar30 + 0x20 & (uVar30 ^ 0xffffffffffffffff)),
                            FUN_1002b5a40);
            }
            else {
              uVar36 = *(undefined8 *)(unaff_x22 + 0xf8);
              _swift_errorRelease(lVar10);
              FUN_100005808(uVar46,&DAT_100fbbed0,&DAT_100c3c900);
              (**(code **)(lVar24 + 8))(uVar44,uVar36);
              (**(code **)(lVar48 + 0x38))(uVar15,1,1,pvVar17);
              FUN_100005808(uVar15,&DAT_100fbbed8,&DAT_100c3c908);
            }
            lVar10 = 0;
            lVar41 = lVar41 + lVar49;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        uVar20 = *(ulong *)(puVar14 + 0x10);
        if (uVar20 == 0) {
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
          _swift_bridgeObjectRelease(puVar14);
          uVar15 = 1;
        }
        else {
          uVar30 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0xd0) + 0x50);
          FUN_1000c495c(puVar14 + (uVar30 + 0x20 & (uVar30 ^ 0xffffffffffffffff)),
                        *(undefined8 *)(unaff_x22 + 0xf0),FUN_1002b5a40);
          if (uVar20 != 1) {
            uVar23 = 1;
            lVar10 = *(long *)(unaff_x22 + 0xd0);
            do {
              if (*(ulong *)(puVar14 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1002b73a8);
                (*pcVar25)();
              }
              pbVar39 = *(byte **)(unaff_x22 + 0xf0);
              FUN_1000c495c(puVar14 + (uVar30 + 0x20 & (uVar30 ^ 0xffffffffffffffff)) +
                            *(long *)(lVar10 + 0x48) * uVar23,*(undefined8 *)(unaff_x22 + 0xd8),
                            FUN_1002b5a40);
              pbVar40 = *(byte **)(unaff_x22 + 0xd8);
              bVar8 = *pbVar40;
              uVar19 = (uint)*pbVar39;
              if (bVar8 < 3) {
                if (bVar8 < 2) {
                  uVar19 = 0x3c >> (ulong)(uVar19 & 0x1f);
                }
                else {
                  uVar19 = 0x38 >> (ulong)(uVar19 & 0x1f);
                }
joined_r0x0001002b736c:
                if ((uVar19 & 1) == 0) goto LAB_1002b72d4;
LAB_1002b7370:
                uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
                FUN_10005241c(uVar15,FUN_1002b5a40);
                FUN_1000523d8(pbVar40,uVar15,FUN_1002b5a40);
              }
              else {
                if (bVar8 == 3) {
                  uVar19 = 0x30 >> (ulong)(uVar19 & 0x1f);
                  goto joined_r0x0001002b736c;
                }
                if ((bVar8 == 4) && ((0x20U >> (ulong)(uVar19 & 0x1f) & 1) != 0))
                goto LAB_1002b7370;
LAB_1002b72d4:
                FUN_10005241c(pbVar40,FUN_1002b5a40);
              }
              uVar23 = uVar23 + 1;
            } while (uVar20 != uVar23);
          }
          uVar44 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
          _swift_bridgeObjectRelease(puVar14);
          FUN_1000523d8(uVar44,uVar15,FUN_1002b5a40);
          uVar15 = 0;
        }
        uVar44 = *(undefined8 *)(unaff_x22 + 0x38);
        (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x38))
                  (uVar44,uVar15,1,*(undefined8 *)(unaff_x22 + 200));
        _swift_bridgeObjectRelease(lVar22);
        puVar14 = &DAT_100fb8220;
        FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
        pcVar25 = *(code **)(*(long *)(puVar14 + -8) + 0x38);
        uVar15 = 0;
        goto LAB_1002b717c;
      }
      uVar46 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar44 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x110);
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x150),&DAT_100fb8658,&DAT_100c38220);
      FUN_100005808(uVar15,&DAT_100fb8658,&DAT_100c38220);
      pcVar42 = *(code **)(lVar41 + 8);
      (*pcVar42)(uVar46,uVar44);
      lVar49 = lVar49 + lVar35;
      (*pcVar25)(lVar49,1,uVar36);
      if ((int)lVar49 != 1) {
LAB_1002b6b0c:
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x138),&DAT_100fbbee0,&DAT_100c3c910);
        goto LAB_1002b6b24;
      }
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x138),&DAT_100fb8658,&DAT_100c38220);
LAB_1002b6818:
      uVar30 = uVar30 + 1;
    } while (uVar20 != uVar30);
    lVar10 = *(long *)(unaff_x22 + 0x198);
  }
  _swift_bridgeObjectRelease(lVar10);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar14 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  pcVar25 = *(code **)(*(long *)(puVar14 + -8) + 0x38);
  uVar15 = 1;
LAB_1002b717c:
  (*pcVar25)(uVar44,uVar15,1,puVar14);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar50 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar47 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar33 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x180));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar45);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar44);
  _swift_task_dealloc(uVar50);
  _swift_task_dealloc(uVar46);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar47);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar43);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar28);
                    /* WARNING: Could not recover jumptable at 0x0001002b72b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b73a8 | FUN_1002b73a8 */

void FUN_1002b73a8(SubscriptionInfo param_1,undefined8 param_2,SubscriptionInfo param_3)

{
  long *plVar1;
  long unaff_x22;
  String for;
  
  for = StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(param_1);
  *(void **)(unaff_x22 + 0x1e8) = for.bridgeObject;
  plVar1 = (long *)(ulong)*(uint *)(PTR__status_100ea7fa0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002b740c;
  StoreKit::Product::SubscriptionInfo::_status(for,param_3);
  return;
}



/* Address: 0x1002b740c | FUN_1002b740c */

void FUN_1002b740c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x1f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1f0));
  uVar3 = *(undefined8 *)(lVar4 + 0x1e8);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    *(undefined8 *)(lVar4 + 0x200) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
    uVar2 = *(undefined8 *)(lVar4 + 0x1b0);
    pcVar1 = FUN_1002b7494;
  }
  else {
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
    uVar2 = *(undefined8 *)(lVar4 + 0x1b0);
    pcVar1 = FUN_1002b7d60;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1002b7494 | FUN_1002b7494 */

/* WARNING: Removing unreachable block (ram,0x0001002b76c0) */

void FUN_1002b7494(void)

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
  byte bVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  Product PVar16;
  SubscriptionInfo SVar17;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte *pbVar39;
  byte *pbVar40;
  long unaff_x22;
  undefined8 uVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  code *pcVar45;
  ulong uVar46;
  long lVar47;
  undefined8 uVar48;
  String SVar49;
  Status SVar50;
  Status SVar51;
  Status SVar52;
  
  pcVar45 = *(code **)(unaff_x22 + 0x1d8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar36 = *(long *)(unaff_x22 + 0x118);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x110);
  FUN_100242a80(*(undefined8 *)(unaff_x22 + 0x200));
  (**(code **)(lVar36 + 8))(uVar33,uVar41);
  (*pcVar45)(uVar32,uVar35);
  lVar36 = *(long *)(unaff_x22 + 0x1f8);
  uVar43 = *(long *)(unaff_x22 + 0x1e0) + 1;
  if (uVar43 != *(ulong *)(unaff_x22 + 0x1b8)) {
    do {
      *(ulong *)(unaff_x22 + 0x1e0) = uVar43;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x198) + 0x10) <= uVar43) {
                    /* WARNING: Does not return */
        pcVar45 = (code *)SoftwareBreakpoint(1,0x1002b7d5c);
        (*pcVar45)();
      }
      pcVar45 = *(code **)(unaff_x22 + 0x1d0);
      PVar16.unknown = *(undefined **)(unaff_x22 + 0x170);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar31 = *(long *)(unaff_x22 + 0x168);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x110);
      (**(code **)(unaff_x22 + 0x1c8))
                (uVar32,*(long *)(unaff_x22 + 0x198) +
                        ((ulong)*(byte *)(unaff_x22 + 0x208) + 0x20 &
                        ((ulong)*(byte *)(unaff_x22 + 0x208) ^ 0xffffffffffffffff)) +
                        *(long *)(unaff_x22 + 0x1c0) * uVar43,uVar33);
      (**(code **)(lVar31 + 0x20))(PVar16.unknown,uVar32,uVar33);
      StoreKit::Product::_get_subscription(PVar16);
      (*pcVar45)(uVar35,1,uVar41);
      if ((int)uVar35 == 1) {
        uVar33 = *(undefined8 *)(unaff_x22 + 0x140);
        (**(code **)(unaff_x22 + 0x1d8))
                  (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
        FUN_100005808(uVar33,&DAT_100fb8658,&DAT_100c38220);
      }
      else {
        SVar17.unknown = *(undefined **)(unaff_x22 + 0x120);
        (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x20))
                  (SVar17.unknown,*(undefined8 *)(unaff_x22 + 0x140),
                   *(undefined8 *)(unaff_x22 + 0x110));
        SVar49 = StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(SVar17);
        uVar43 = unaff_x22 + 0x10;
        FUN_1002b17bc(uVar43,SVar49.str,SVar49.bridgeObject);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x18));
        if ((uVar43 & 1) != 0) {
          _swift_task_switch(FUN_1002b73a8,0,0);
          return;
        }
        pcVar45 = *(code **)(unaff_x22 + 0x1d8);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x170);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x160);
        (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
        (*pcVar45)(uVar33,uVar32);
      }
      uVar43 = *(long *)(unaff_x22 + 0x1e0) + 1;
    } while (uVar43 != *(ulong *)(unaff_x22 + 0x1b8));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x198));
  lVar27 = *(long *)(unaff_x22 + 0x30);
  lVar31 = *(long *)(lVar27 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar31 != 0) {
    lVar28 = *(long *)(unaff_x22 + 0x100);
    lVar29 = *(long *)(unaff_x22 + 0xd0);
    lVar47 = *(long *)(unaff_x22 + 0xb0);
    lVar30 = *(long *)(unaff_x22 + 0x78);
    lVar42 = lVar27 + ((ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff));
    lVar22 = *(long *)(lVar28 + 0x48);
    pcVar45 = *(code **)(lVar28 + 0x10);
    do {
      uVar33 = *(undefined8 *)(unaff_x22 + 0x108);
      pvVar19 = *(void **)(unaff_x22 + 0xf8);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar18 = lVar42;
      (*pcVar45)();
      SVar50.reasonPhrase.str = (char *)lVar18;
      SVar50.code = uVar33;
      SVar50.reasonPhrase.bridgeObject = pvVar19;
      StoreKit::Product::SubscriptionInfo::Status::_get_renewalInfo(SVar50);
      StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar32);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar33 = *(undefined8 *)(unaff_x22 + 0xa0);
      pvVar19 = *(void **)(unaff_x22 + 0xa8);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x98);
      if (lVar36 == 0) {
        uVar41 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x58);
        FUN_100005808(uVar35,&DAT_100fbbed0,&DAT_100c3c900);
        (**(code **)(lVar47 + 0x38))(uVar33,0,1,pvVar19);
        (**(code **)(lVar47 + 0x20))();
        SVar51.reasonPhrase.str = (char *)uVar33;
        SVar51.code = uVar41;
        SVar51.reasonPhrase.bridgeObject = pvVar19;
        StoreKit::Product::SubscriptionInfo::Status::_get_transaction(SVar51);
        StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar32);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar37 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar33 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar48 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar35 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar41 = *(undefined8 *)(unaff_x22 + 0x68);
        pvVar19 = *(void **)(unaff_x22 + 0x70);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x50);
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x60),&DAT_100fb7f90,&DAT_100c3c630);
        (**(code **)(lVar30 + 0x38))(uVar41,0,1,pvVar19);
        uVar12 = uVar3;
        pvVar20 = pvVar19;
        (**(code **)(lVar30 + 0x20))();
        SVar52.reasonPhrase.str = (char *)uVar41;
        SVar52.code = uVar12;
        SVar52.reasonPhrase.bridgeObject = pvVar20;
        StoreKit::Product::SubscriptionInfo::Status::get_state(SVar52);
        (**(code **)(lVar47 + 0x10))(uVar32,uVar2,uVar48);
        (**(code **)(lVar30 + 0x10))(uVar35,uVar3,pvVar19);
        FUN_1002badec(uVar33,uVar38,uVar32,uVar35);
        (**(code **)(lVar30 + 8))(uVar3,pvVar19);
        (**(code **)(lVar47 + 8))(uVar2,uVar48);
        (**(code **)(lVar28 + 8))(uVar23,uVar37);
        FUN_1000523d8(uVar33,uVar1,FUN_1002b5a40);
        puVar13 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar15;
        if (((ulong)puVar13 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          FUN_1002b0cfc(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
        }
        uVar43 = *(ulong *)(puVar14 + 0x10);
        puVar15 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar43) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_1002b0cfc(puVar15,uVar43 + 1,1,puVar14);
        }
        uVar33 = *(undefined8 *)(unaff_x22 + 0xe8);
        *(ulong *)(puVar15 + 0x10) = uVar43 + 1;
        uVar24 = (ulong)*(byte *)(lVar29 + 0x50);
        FUN_1000523d8(uVar33,puVar15 + *(long *)(lVar29 + 0x48) * uVar43 +
                                       (uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff)),FUN_1002b5a40
                     );
      }
      else {
        uVar41 = *(undefined8 *)(unaff_x22 + 0xf8);
        _swift_errorRelease(lVar36);
        FUN_100005808(uVar35,&DAT_100fbbed0,&DAT_100c3c900);
        (**(code **)(lVar28 + 8))(uVar32,uVar41);
        (**(code **)(lVar47 + 0x38))(uVar33,1,1,pvVar19);
        FUN_100005808(uVar33,&DAT_100fbbed8,&DAT_100c3c908);
      }
      lVar36 = 0;
      lVar42 = lVar42 + lVar22;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  uVar43 = *(ulong *)(puVar15 + 0x10);
  if (uVar43 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
    _swift_bridgeObjectRelease(puVar15);
    uVar33 = 1;
  }
  else {
    uVar24 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0xd0) + 0x50);
    FUN_1000c495c(puVar15 + (uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff)),
                  *(undefined8 *)(unaff_x22 + 0xf0),FUN_1002b5a40);
    if (uVar43 != 1) {
      uVar46 = 1;
      lVar36 = *(long *)(unaff_x22 + 0xd0);
      do {
        if (*(ulong *)(puVar15 + 0x10) <= uVar46) {
                    /* WARNING: Does not return */
          pcVar45 = (code *)SoftwareBreakpoint(1,0x1002b7d60);
          (*pcVar45)();
        }
        pbVar39 = *(byte **)(unaff_x22 + 0xf0);
        FUN_1000c495c(puVar15 + (uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff)) +
                      *(long *)(lVar36 + 0x48) * uVar46,*(undefined8 *)(unaff_x22 + 0xd8),
                      FUN_1002b5a40);
        pbVar40 = *(byte **)(unaff_x22 + 0xd8);
        bVar11 = *pbVar40;
        uVar21 = (uint)*pbVar39;
        if (bVar11 < 3) {
          if (1 < bVar11) {
            uVar21 = 0x38 >> (ulong)(uVar21 & 0x1f);
            goto joined_r0x0001002b7cf8;
          }
          if ((0x3cU >> (ulong)(uVar21 & 0x1f) & 1) == 0) goto LAB_1002b7c60;
LAB_1002b7cfc:
          uVar33 = *(undefined8 *)(unaff_x22 + 0xf0);
          FUN_10005241c(uVar33,FUN_1002b5a40);
          FUN_1000523d8(pbVar40,uVar33,FUN_1002b5a40);
        }
        else {
          if (bVar11 == 3) {
            uVar21 = 0x30 >> (ulong)(uVar21 & 0x1f);
          }
          else {
            if (bVar11 != 4) goto LAB_1002b7c60;
            uVar21 = 0x20 >> (ulong)(uVar21 & 0x1f);
          }
joined_r0x0001002b7cf8:
          if ((uVar21 & 1) != 0) goto LAB_1002b7cfc;
LAB_1002b7c60:
          FUN_10005241c(pbVar40,FUN_1002b5a40);
        }
        uVar46 = uVar46 + 1;
      } while (uVar43 != uVar46);
    }
    uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
    _swift_bridgeObjectRelease(puVar15);
    FUN_1000523d8(uVar32,uVar33,FUN_1002b5a40);
    uVar33 = 0;
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x38))
            (uVar32,uVar33,1,*(undefined8 *)(unaff_x22 + 200));
  _swift_bridgeObjectRelease(lVar27);
  puVar15 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar15 + -8) + 0x38))(uVar32,0,1,puVar15);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x180));
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar44);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar48);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar25);
                    /* WARNING: Could not recover jumptable at 0x0001002b7c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b7d60 | FUN_1002b7d60 */

void FUN_1002b7d60(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  
  pcVar26 = *(code **)(unaff_x22 + 0x1d8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x198));
  (**(code **)(lVar1 + 8))(uVar7,uVar23);
  (*pcVar26)(uVar21,uVar20);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x30));
  puVar17 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar17 + -8) + 0x38))(uVar24,1,1,puVar17);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x180));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001002b7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b7f34 | FUN_1002b7f34 */

void FUN_1002b7f34(void)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x188));
  uVar22 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar19 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar19 + -8) + 0x38))(uVar22,1,1,puVar19);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x180));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001002b80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b80c8 | FUN_1002b80c8 */

void FUN_1002b80c8(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  TaskPriority TVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  TaskPriority TVar10;
  undefined8 uVar11;
  long extraout_x8;
  code *pcVar12;
  long unaff_x20;
  undefined1 *puVar13;
  
  puVar4 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  puVar13 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  FUN_1002b5a40();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined1 *)(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::hasSnapshot)
       = 0;
  *(undefined1 *)(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing)
       = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 0;
  lVar2 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult;
  lVar3 = 0;
  FUN_1002b86ec();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  lVar2 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation;
  puVar4 = &DAT_100fbbd58;
  FUN_1000037f0(&DAT_100fbbd58,&DAT_100c3c838);
  (**(code **)(*(long *)(puVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,puVar4);
  lVar2 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock;
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  *(undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::observerTask)
       = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::foregroundObserverTask) = 0
  ;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::fetcher);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  TVar6.unknown = param_2;
  _swift_retain();
  Swift::TaskPriority::get_utility(TVar6);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(TVar6.unknown + -8) + 0x38);
  (*pcVar12)(puVar13,0,1,TVar6.unknown);
  puVar4 = &DAT_100ec6a20;
  puVar7 = puVar4;
  _swift_allocObject(&DAT_100ec6a20,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  puVar8 = &DAT_100ec6a48;
  _swift_allocObject(&DAT_100ec6a48,0x28,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  uVar9 = 0;
  FUN_1002b5eb0(0,0,puVar13,&DAT_100c3c8b8,puVar8);
  FUN_100005808(puVar13,&DAT_100fb81c8,&DAT_100c38060);
  TVar10.unknown =
       *(undefined **)
        (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::observerTask);
  *(undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::observerTask)
       = uVar9;
  _swift_release();
  Swift::TaskPriority::get_utility(TVar10);
  (*pcVar12)(puVar13,0,1,TVar6.unknown);
  _swift_allocObject(&DAT_100ec6a20,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar8 = &DAT_100ec6a70;
  _swift_allocObject(&DAT_100ec6a70,0x28,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined **)(puVar8 + 0x20) = puVar4;
  uVar9 = 0;
  FUN_1002b5eb0(0,0,puVar13,&DAT_100c3c8c8,puVar8);
  _swift_release(param_2);
  FUN_100005808(puVar13,&DAT_100fb81c8,&DAT_100c38060);
  uVar11 = *(undefined8 *)
            (unaff_x20 +
            _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::foregroundObserverTask);
  *(undefined8 *)
   (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::foregroundObserverTask) =
       uVar9;
  _swift_release(uVar11);
  return;
}



/* Address: 0x1002b83ac | FUN_1002b83ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b83ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Continuation_conflict CVar4;
  Task TVar5;
  ID self;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  CVar4.unknown = &DAT_100fbbd58;
  FUN_1000037f0(&DAT_100fbbd58,&DAT_100c3c838);
  lVar8 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::observerTask;
  puVar7 = *(undefined **)
            (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::observerTask);
  if (puVar7 != (undefined *)0x0) {
    TVar5.unknown = puVar7;
    _swift_retain();
    Swift::Task::cancel(TVar5);
    _swift_release(puVar7);
  }
  lVar3 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::foregroundObserverTask;
  puVar7 = *(undefined **)
            (unaff_x20 +
            _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::foregroundObserverTask);
  if (puVar7 != (undefined *)0x0) {
    TVar5.unknown = puVar7;
    _swift_retain();
    Swift::Task::cancel(TVar5);
    _swift_release(puVar7);
  }
  self = *(ID *)(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
  objc_stub::lock(self);
  lVar1 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation;
  _swift_beginAccess(unaff_x20 +
                     _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation,
                     auStack_78,0,0);
  lVar6 = unaff_x20 + lVar1;
  (**(code **)(lVar8 + 0x30))(lVar6,1,CVar4.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))(auStack_80 + -extraout_x8,unaff_x20 + lVar1,CVar4.unknown);
    Swift::AsyncStream::Continuation::finish(CVar4);
    (**(code **)(lVar8 + 8))(auStack_80 + -extraout_x8,CVar4.unknown);
  }
  objc_stub::unlock(self);
  FUN_100005808(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                &DAT_100fb8220,&DAT_100c37df0);
  FUN_100005808(unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult,
                &DAT_100fb8210,&DAT_100c37dd0);
  FUN_100005808(unaff_x20 + lVar1,&DAT_100fbbea8,&DAT_100c3c880);
  _swift_release(*(undefined8 *)(unaff_x20 + lVar2));
  _swift_release(*(undefined8 *)(unaff_x20 + lVar3));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::fetcher + 8)
                );
  return;
}



/* Address: 0x1002b85b8 | FUN_1002b85b8 */

void FUN_1002b85b8(void)

{
  FUN_1002b83ac();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002b85dc | FUN_1002b85dc */

void FUN_1002b85dc(void)

{
  FUN_1002b85e4(0);
  return;
}



/* Address: 0x1002b85e4 | FUN_1002b85e4 */

void FUN_1002b85e4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbbd30,&TargetClassDescriptor_100caac90);
  return;
}



/* Address: 0x1002b85f8 | FUN_1002b85f8 */

void FUN_1002b85f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar2 = &DAT_100fbbd40;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fbbd40,FUN_1002b5a40);
  if (puVar2 < (undefined *)0x40) {
    local_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = &DAT_100c3c820;
    local_60 = &DAT_100c3c820;
    puStack_58 = &DAT_100c3c820;
    puVar2 = &DAT_100fbbd48;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fbbd48,FUN_1002b86ec);
    if (puVar2 < (undefined *)0x40) {
      local_50 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_1002b8700();
      if (puVar2 < (undefined *)0x40) {
        local_48 = *(long *)(lVar1 + -8) + 0x40;
        puStack_40 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
        local_38 = &DAT_100c3c840;
        puStack_30 = &DAT_100c3c840;
        local_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
        _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Address: 0x1002b86ec | FUN_1002b86ec */

void FUN_1002b86ec(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbbe98,&TargetEnumDescriptor_100caacd8);
  return;
}



/* Address: 0x1002b8700 | FUN_1002b8700 */

void FUN_1002b8700(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100fbbd50 == 0) {
    puVar2 = &DAT_100fbbd58;
    FUN_100005c24(&DAT_100fbbd58,&DAT_100c3c838);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fbbd50 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1002b8760 | FUN_1002b8760 */

void FUN_1002b8760(void)

{
  FUN_1002b8768(0);
  return;
}



/* Address: 0x1002b8768 | FUN_1002b8768 */

void FUN_1002b8768(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_100fbbe20 != 0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002b86ec(0xff);
  uVar2 = 0xa4000000;
  FUN_100250080(0xa4000000,0,0,0,uVar1,0,4,0);
  DAT_100fbbe20 = uVar2;
  return;
}



/* Address: 0x1002b87c8 | FUN_1002b87c8 */

long * FUN_1002b87c8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar4 = *(uint *)(lVar11 + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    puVar5 = &DAT_100fb8220;
    FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
    lVar13 = *(long *)(puVar5 + -8);
    plVar6 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,puVar5);
    if ((int)plVar6 != 0) {
      plVar6 = _memcpy(param_1,param_2,*(size_t *)(lVar11 + 0x40));
      return plVar6;
    }
    lVar11 = 0;
    FUN_1002b5a40();
    lVar14 = *(long *)(lVar11 + -8);
    plVar6 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar11);
    if ((int)plVar6 == 0) {
      *(short *)param_1 = (short)*param_2;
      lVar15 = (long)*(int *)(lVar11 + 0x18);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar16 = *(long *)(DVar7.unknown + -8);
      lVar8 = (long)param_2 + lVar15;
      (**(code **)(lVar16 + 0x30))(lVar8,1,DVar7.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar16 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
        (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      pcVar12 = *(code **)(lVar14 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar12)(param_1,0,1,lVar11);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(lVar13 + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(param_1,0,1,puVar5);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar11 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002b89d8 | FUN_1002b89d8 */

void FUN_1002b89d8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  
  puVar2 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  lVar3 = param_1;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,1,puVar2);
  if ((int)lVar3 == 0) {
    lVar4 = 0;
    FUN_1002b5a40();
    lVar3 = param_1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
    if ((int)lVar3 == 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      DVar5 = Foundation::Date::typeMetadataAccessor();
      lVar6 = *(long *)(DVar5.unknown + -8);
      lVar3 = param_1 + iVar1;
      (**(code **)(lVar6 + 0x30))(lVar3,1,DVar5.unknown);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar6 + 8))(param_1 + iVar1,DVar5.unknown);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x28) + 8));
      return;
    }
  }
  return;
}



/* Address: 0x1002b8ac8 | FUN_1002b8ac8 */

undefined2 * FUN_1002b8ac8(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar4 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  lVar11 = *(long *)(puVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,puVar4);
  if ((int)puVar5 != 0) {
    puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar5;
  }
  lVar6 = 0;
  FUN_1002b5a40();
  lVar12 = *(long *)(lVar6 + -8);
  puVar5 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar6);
  if ((int)puVar5 == 0) {
    *param_1 = *param_2;
    lVar13 = (long)*(int *)(lVar6 + 0x18);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar7.unknown + -8);
    lVar8 = (long)param_2 + lVar13;
    (**(code **)(lVar14 + 0x30))(lVar8,1,DVar7.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar14 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
    }
    else {
      puVar9 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    pcVar10 = *(code **)(lVar12 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    (*pcVar10)(param_1,0,1,lVar6);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(lVar11 + 0x40));
  }
  (**(code **)(lVar11 + 0x38))(param_1,0,1,puVar4);
  return param_1;
}



/* Address: 0x1002b8cb4 | FUN_1002b8cb4 */

undefined1 * FUN_1002b8cb4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  Date DVar7;
  undefined *puVar8;
  size_t sVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  lVar11 = *(long *)(puVar3 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar6 = param_1;
  (*pcVar12)(param_1,1,puVar3);
  puVar4 = param_2;
  (*pcVar12)(param_2,1,puVar3);
  if ((int)puVar6 == 0) {
    if ((int)puVar4 == 0) {
      lVar5 = 0;
      FUN_1002b5a40();
      lVar13 = *(long *)(lVar5 + -8);
      pcVar12 = *(code **)(lVar13 + 0x30);
      puVar6 = param_1;
      (*pcVar12)(param_1,1,lVar5);
      puVar4 = param_2;
      (*pcVar12)(param_2,1,lVar5);
      if ((int)puVar6 == 0) {
        if ((int)puVar4 == 0) {
          *param_1 = *param_2;
          param_1[1] = param_2[1];
          iVar2 = *(int *)(lVar5 + 0x18);
          DVar7 = Foundation::Date::typeMetadataAccessor();
          lVar11 = *(long *)(DVar7.unknown + -8);
          pcVar12 = *(code **)(lVar11 + 0x30);
          puVar6 = param_1 + iVar2;
          (*pcVar12)(puVar6,1,DVar7.unknown);
          puVar4 = param_2 + iVar2;
          (*pcVar12)(puVar4,1,DVar7.unknown);
          if ((int)puVar6 == 0) {
            if ((int)puVar4 == 0) {
              (**(code **)(lVar11 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar7.unknown);
              goto LAB_1002b9114;
            }
            (**(code **)(lVar11 + 8))(param_1 + iVar2,DVar7.unknown);
          }
          else if ((int)puVar4 == 0) {
            (**(code **)(lVar11 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar7.unknown);
            (**(code **)(lVar11 + 0x38))(param_1 + iVar2,0,1,DVar7.unknown);
            goto LAB_1002b9114;
          }
          puVar3 = &DAT_100fb7f78;
          FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
          _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
LAB_1002b9114:
          param_1[*(int *)(lVar5 + 0x1c)] = param_2[*(int *)(lVar5 + 0x1c)];
          iVar2 = *(int *)(lVar5 + 0x20);
          puVar1 = (undefined8 *)(param_1 + iVar2);
          *puVar1 = *(undefined8 *)(param_2 + iVar2);
          uVar10 = puVar1[1];
          puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar10);
          param_1[*(int *)(lVar5 + 0x24)] = param_2[*(int *)(lVar5 + 0x24)];
          iVar2 = *(int *)(lVar5 + 0x28);
          puVar1 = (undefined8 *)(param_1 + iVar2);
          *puVar1 = *(undefined8 *)(param_2 + iVar2);
          uVar10 = puVar1[1];
          puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar10);
          return param_1;
        }
        FUN_10005241c(param_1,FUN_1002b5a40);
      }
      else if ((int)puVar4 == 0) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        iVar2 = *(int *)(lVar5 + 0x18);
        DVar7 = Foundation::Date::typeMetadataAccessor();
        lVar11 = *(long *)(DVar7.unknown + -8);
        puVar6 = param_2 + iVar2;
        (**(code **)(lVar11 + 0x30))(puVar6,1,DVar7.unknown);
        if ((int)puVar6 == 0) {
          (**(code **)(lVar11 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar7.unknown);
          (**(code **)(lVar11 + 0x38))(param_1 + iVar2,0,1,DVar7.unknown);
        }
        else {
          puVar3 = &DAT_100fb7f78;
          FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
          _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
        }
        param_1[*(int *)(lVar5 + 0x1c)] = param_2[*(int *)(lVar5 + 0x1c)];
        iVar2 = *(int *)(lVar5 + 0x20);
        *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
        *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
        param_1[*(int *)(lVar5 + 0x24)] = param_2[*(int *)(lVar5 + 0x24)];
        iVar2 = *(int *)(lVar5 + 0x28);
        *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
        uVar10 = *(undefined8 *)((long)(param_2 + iVar2) + 8);
        *(undefined8 *)((long)(param_1 + iVar2) + 8) = uVar10;
        pcVar12 = *(code **)(lVar13 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        (*pcVar12)(param_1,0,1,lVar5);
        return param_1;
      }
      sVar9 = *(size_t *)(lVar11 + 0x40);
      goto LAB_1002b8d88;
    }
    FUN_100005808(param_1,&DAT_100fb8220,&DAT_100c37df0);
  }
  else if ((int)puVar4 == 0) {
    lVar5 = 0;
    FUN_1002b5a40();
    lVar13 = *(long *)(lVar5 + -8);
    puVar6 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,lVar5);
    if ((int)puVar6 == 0) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      iVar2 = *(int *)(lVar5 + 0x18);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar14 = *(long *)(DVar7.unknown + -8);
      puVar6 = param_2 + iVar2;
      (**(code **)(lVar14 + 0x30))(puVar6,1,DVar7.unknown);
      if ((int)puVar6 == 0) {
        (**(code **)(lVar14 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))(param_1 + iVar2,0,1,DVar7.unknown);
      }
      else {
        puVar8 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      param_1[*(int *)(lVar5 + 0x1c)] = param_2[*(int *)(lVar5 + 0x1c)];
      iVar2 = *(int *)(lVar5 + 0x20);
      *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
      *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
      param_1[*(int *)(lVar5 + 0x24)] = param_2[*(int *)(lVar5 + 0x24)];
      iVar2 = *(int *)(lVar5 + 0x28);
      *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
      uVar10 = *(undefined8 *)((long)(param_2 + iVar2) + 8);
      *(undefined8 *)((long)(param_1 + iVar2) + 8) = uVar10;
      pcVar12 = *(code **)(lVar13 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
      (*pcVar12)(param_1,0,1,lVar5);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(lVar11 + 0x40));
    }
    (**(code **)(lVar11 + 0x38))(param_1,0,1,puVar3);
    return param_1;
  }
  sVar9 = *(size_t *)(*(long *)(param_3 + -8) + 0x40);
LAB_1002b8d88:
  puVar6 = _memcpy(param_1,param_2,sVar9);
  return puVar6;
}



/* Address: 0x1002b91a0 | FUN_1002b91a0 */

undefined2 * FUN_1002b91a0(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  lVar9 = *(long *)(puVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,puVar3);
  if ((int)puVar4 != 0) {
    puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar4;
  }
  lVar5 = 0;
  FUN_1002b5a40();
  lVar10 = *(long *)(lVar5 + -8);
  puVar4 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
  if ((int)puVar4 == 0) {
    *param_1 = *param_2;
    lVar11 = (long)*(int *)(lVar5 + 0x18);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar6.unknown + -8);
    lVar7 = (long)param_2 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar7,1,DVar6.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
    uVar13 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar13;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    uVar13 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar13;
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(lVar9 + 0x40));
  }
  (**(code **)(lVar9 + 0x38))(param_1,0,1,puVar3);
  return param_1;
}



/* Address: 0x1002b9370 | FUN_1002b9370 */

undefined2 * FUN_1002b9370(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined *puVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  size_t sVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar6 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  lVar13 = *(long *)(puVar6 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  puVar5 = param_1;
  (*pcVar14)(param_1,1,puVar6);
  puVar3 = param_2;
  (*pcVar14)(param_2,1,puVar6);
  if ((int)puVar5 == 0) {
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1002b5a40();
      lVar4 = *(long *)(puVar6 + -8);
      pcVar14 = *(code **)(lVar4 + 0x30);
      puVar5 = param_1;
      (*pcVar14)(param_1,1,puVar6);
      puVar3 = param_2;
      (*pcVar14)(param_2,1,puVar6);
      if ((int)puVar5 == 0) {
        if ((int)puVar3 == 0) {
          *(undefined1 *)param_1 = *(undefined1 *)param_2;
          *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
          lVar13 = (long)*(int *)(puVar6 + 0x18);
          DVar7 = Foundation::Date::typeMetadataAccessor();
          lVar4 = *(long *)(DVar7.unknown + -8);
          pcVar14 = *(code **)(lVar4 + 0x30);
          puVar8 = (undefined1 *)((long)param_1 + lVar13);
          (*pcVar14)(puVar8,1,DVar7.unknown);
          puVar9 = (undefined1 *)((long)param_2 + lVar13);
          (*pcVar14)(puVar9,1,DVar7.unknown);
          if ((int)puVar8 == 0) {
            if ((int)puVar9 == 0) {
              (**(code **)(lVar4 + 0x28))
                        ((undefined1 *)((long)param_1 + lVar13),
                         (undefined1 *)((long)param_2 + lVar13),DVar7.unknown);
              goto LAB_1002b9754;
            }
            (**(code **)(lVar4 + 8))((undefined1 *)((long)param_1 + lVar13),DVar7.unknown);
          }
          else if ((int)puVar9 == 0) {
            (**(code **)(lVar4 + 0x20))
                      ((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13)
                       ,DVar7.unknown);
            (**(code **)(lVar4 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar7.unknown);
            goto LAB_1002b9754;
          }
          puVar10 = &DAT_100fb7f78;
          FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
          _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                  *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_1002b9754:
          *(undefined1 *)((long)param_1 + (long)*(int *)(puVar6 + 0x1c)) =
               *(undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x1c));
          puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x20));
          puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x20));
          uVar18 = puVar2[1];
          uVar11 = puVar1[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar18;
          _swift_bridgeObjectRelease(uVar11);
          *(undefined1 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24)) =
               *(undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x24));
          puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x28));
          puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x28));
          uVar18 = puVar2[1];
          uVar11 = puVar1[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar18;
          _swift_bridgeObjectRelease(uVar11);
          return param_1;
        }
        FUN_10005241c(param_1,FUN_1002b5a40);
      }
      else if ((int)puVar3 == 0) {
        *param_1 = *param_2;
        lVar13 = (long)*(int *)(puVar6 + 0x18);
        DVar7 = Foundation::Date::typeMetadataAccessor();
        lVar15 = *(long *)(DVar7.unknown + -8);
        puVar8 = (undefined1 *)((long)param_2 + lVar13);
        (**(code **)(lVar15 + 0x30))(puVar8,1,DVar7.unknown);
        if ((int)puVar8 == 0) {
          (**(code **)(lVar15 + 0x20))
                    ((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                     DVar7.unknown);
          (**(code **)(lVar15 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar7.unknown);
        }
        else {
          puVar10 = &DAT_100fb7f78;
          FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
          _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                  *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
        }
        *(undefined1 *)((long)param_1 + (long)*(int *)(puVar6 + 0x1c)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x1c));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x20));
        uVar18 = *puVar1;
        puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x20));
        puVar2[1] = puVar1[1];
        *puVar2 = uVar18;
        *(undefined1 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x24));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x28));
        uVar18 = *puVar1;
        puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x28));
        puVar2[1] = puVar1[1];
        *puVar2 = uVar18;
        pcVar14 = *(code **)(lVar4 + 0x38);
        goto LAB_1002b95fc;
      }
      sVar12 = *(size_t *)(lVar13 + 0x40);
      goto LAB_1002b9444;
    }
    FUN_100005808(param_1,&DAT_100fb8220,&DAT_100c37df0);
  }
  else if ((int)puVar3 == 0) {
    lVar4 = 0;
    FUN_1002b5a40();
    lVar15 = *(long *)(lVar4 + -8);
    puVar5 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar4);
    if ((int)puVar5 == 0) {
      *param_1 = *param_2;
      lVar16 = (long)*(int *)(lVar4 + 0x18);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar17 = *(long *)(DVar7.unknown + -8);
      puVar8 = (undefined1 *)((long)param_2 + lVar16);
      (**(code **)(lVar17 + 0x30))(puVar8,1,DVar7.unknown);
      if ((int)puVar8 == 0) {
        (**(code **)(lVar17 + 0x20))
                  ((undefined1 *)((long)param_1 + lVar16),(undefined1 *)((long)param_2 + lVar16),
                   DVar7.unknown);
        (**(code **)(lVar17 + 0x38))((undefined1 *)((long)param_1 + lVar16),0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy((undefined1 *)((long)param_1 + lVar16),(undefined1 *)((long)param_2 + lVar16),
                *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x20));
      uVar18 = *puVar1;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
      puVar2[1] = puVar1[1];
      *puVar2 = uVar18;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
      uVar18 = *puVar1;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
      puVar2[1] = puVar1[1];
      *puVar2 = uVar18;
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(lVar13 + 0x40));
    }
    pcVar14 = *(code **)(lVar13 + 0x38);
LAB_1002b95fc:
    (*pcVar14)(param_1,0,1,puVar6);
    return param_1;
  }
  sVar12 = *(size_t *)(*(long *)(param_3 + -8) + 0x40);
LAB_1002b9444:
  puVar5 = _memcpy(param_1,param_2,sVar12);
  return puVar5;
}



/* Address: 0x1002b97c0 | FUN_1002b97c0 */

void FUN_1002b97c0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002b97cc | FUN_1002b97cc */

int FUN_1002b97cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  iVar1 = 0;
  if ((int)param_1 != 0) {
    iVar1 = (int)param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x1002b9820 | FUN_1002b9820 */

void FUN_1002b9820(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002b982c | FUN_1002b982c */

void FUN_1002b982c(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  puVar2 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
                    /* WARNING: Could not recover jumptable at 0x0001002b9884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}



/* Address: 0x1002b9888 | FUN_1002b9888 */

void FUN_1002b9888(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
                    /* WARNING: Could not recover jumptable at 0x0001002b98c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  return;
}



/* Address: 0x1002b98cc | FUN_1002b98cc */

void FUN_1002b98cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
                    /* WARNING: Could not recover jumptable at 0x0001002b9914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,1,puVar1);
  return;
}



/* Address: 0x1002b9918 | FUN_1002b9918 */

void FUN_1002b9918(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fbbd40;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fbbd40,FUN_1002b5a40);
  if (puVar2 < (undefined *)0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x1002b997c | FUN_1002b997c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002b997c(undefined8 param_1,long param_2)

{
  Continuation_conflict CVar1;
  ID self;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    self = *(ID *)(param_2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
    objc_stub::lock(self);
    FUN_1002b9a24(param_2,param_1);
    objc_stub::unlock(self);
    _swift_release(param_2);
    return (undefined *)0x0;
  }
  CVar1.unknown = &DAT_100fbbd58;
  FUN_1000037f0(&DAT_100fbbd58,&DAT_100c3c838);
  Swift::AsyncStream::Continuation::finish(CVar1);
  return CVar1.unknown;
}



/* Address: 0x1002b9a24 | FUN_1002b9a24 */

void FUN_1002b9a24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&local_90 - extraout_x8;
  puVar1 = &DAT_100fbbec0;
  FUN_1000037f0(&DAT_100fbbec0,&DAT_100c3c8a0);
  local_90 = *(long *)(puVar1 + -8);
  puStack_88 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4 - extraout_x8_00;
  puVar1 = &DAT_100fbbea8;
  FUN_1000037f0(&DAT_100fbbea8,&DAT_100c3c880);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar5 - extraout_x8_01;
  puVar1 = &DAT_100fbbd58;
  FUN_1000037f0(&DAT_100fbbd58,&DAT_100c3c838);
  lVar3 = *(long *)(puVar1 + -8);
  local_80 = param_2;
  (**(code **)(lVar3 + 0x10))(lVar2,param_2,puVar1);
  (**(code **)(lVar3 + 0x38))(lVar2,0,1,puVar1);
  lVar3 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation;
  _swift_beginAccess(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation
                     ,auStack_78,0x21,0);
  FUN_1001a7c4c(lVar2,param_1 + lVar3,&DAT_100fbbea8,&DAT_100c3c880);
  _swift_endAccess(auStack_78);
  lVar3 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  if (*(char *)(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::hasSnapshot) ==
      '\x01') {
    _swift_beginAccess(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                       auStack_78,0,0);
    FUN_100011090(param_1 + lVar3,lVar4,&DAT_100fb8220,&DAT_100c37df0);
    Swift::AsyncStream::Continuation::_yield(lVar5,lVar4,puVar1);
    (**(code **)(local_90 + 8))(lVar5,puStack_88);
  }
  return;
}



/* Address: 0x1002b9c28 | FUN_1002b9c28 */

void FUN_1002b9c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(long *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  puVar4 = &DAT_100fb8210;
  FUN_1000037f0(&DAT_100fb8210,&DAT_100c37dd0);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar5;
  puVar4 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  *(undefined **)(unaff_x22 + 0x50) = puVar4;
  lVar10 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar10;
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar5;
  lVar6 = 0;
  FUN_1002b86ec();
  *(long *)(unaff_x22 + 0x68) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  (**(code **)(lVar10 + 0x38))(param_1,1,1,puVar4);
  lVar6 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock;
  uVar3 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::fetcher);
  *(undefined8 *)(unaff_x22 + 0x88) =
       _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) =
       _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing;
  piVar9 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0xa0) = piVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
  uVar5 = *(ulong *)(unaff_x22 + 0x38);
  iVar2 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1002b9da8;
                    /* WARNING: Could not recover jumptable at 0x0001002b9da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar9))
            (plVar8,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x30),
             uVar5 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002b9da8 | FUN_1002b9da8 */

void FUN_1002b9da8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar16 = *unaff_x22;
  uVar11 = *(undefined8 *)(lVar16 + 0x78);
  uVar2 = *(undefined8 *)(lVar16 + 0x80);
  uVar15 = *(undefined8 *)(lVar16 + 0x50);
  lVar9 = *(long *)(lVar16 + 0x58);
  uVar14 = *(undefined8 *)(lVar16 + 0x28);
  lVar13 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar16 + 0xc0));
  FUN_10005241c(uVar14,FUN_1002b86ec);
  FUN_1000523d8(uVar2,uVar14,FUN_1002b86ec);
  FUN_1000c495c(uVar14,uVar11,FUN_1002b86ec);
  (**(code **)(lVar9 + 0x30))(uVar11,1,uVar15);
  if ((int)uVar11 == 1) {
    FUN_10005241c(*(undefined8 *)(lVar16 + 0x78),FUN_1002b86ec);
    uVar11 = *(undefined8 *)(lVar16 + 0xb8);
  }
  else {
    IVar5 = *(ID *)(lVar16 + 0xb0);
    lVar9 = *(long *)(lVar16 + 0xb8);
    uVar11 = *(undefined8 *)(lVar16 + 0x60);
    uVar15 = *(undefined8 *)(lVar16 + 0x40);
    FUN_100251400(*(undefined8 *)(lVar16 + 0x78),uVar11);
    objc_stub::lock(IVar5);
    FUN_1002ba034(uVar15,uVar11);
    objc_stub::unlock(IVar5);
    if (lVar9 != 0) {
      return;
    }
    FUN_100005808(*(undefined8 *)(lVar16 + 0x60),&DAT_100fb8220,&DAT_100c37df0);
    uVar11 = 0;
  }
  lVar9 = *(long *)(lVar16 + 0x88);
  lVar12 = *(long *)(lVar16 + 0x40);
  objc_stub::lock(*(ID *)(lVar16 + 0xb0));
  if (*(char *)(lVar12 + lVar9) == '\x01') {
    IVar5 = *(ID *)(lVar16 + 0xb0);
    *(undefined1 *)(*(long *)(lVar16 + 0x40) + *(long *)(lVar16 + 0x88)) = 0;
    objc_stub::unlock(IVar5);
    *(undefined8 *)(lVar16 + 0xb8) = uVar11;
    piVar7 = *(int **)(lVar16 + 0xa0);
    uVar10 = *(ulong *)(lVar16 + 0x38);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(lVar16 + 0xc0) = plVar6;
    *plVar6 = lVar13;
    plVar6[1] = (long)FUN_1002b9da8;
                    /* WARNING: Could not recover jumptable at 0x0001002b9f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (plVar6,*(undefined8 *)(lVar16 + 0x80),*(undefined8 *)(lVar16 + 0x30),
               uVar10 & 0xcfffffffffffffff);
    return;
  }
  IVar5 = *(ID *)(lVar16 + 0xb0);
  lVar9 = *(long *)(lVar16 + 0x90);
  lVar3 = *(long *)(lVar16 + 0x98);
  uVar11 = *(undefined8 *)(lVar16 + 0x78);
  uVar2 = *(undefined8 *)(lVar16 + 0x80);
  uVar15 = *(undefined8 *)(lVar16 + 0x68);
  lVar4 = *(long *)(lVar16 + 0x70);
  uVar8 = *(undefined8 *)(lVar16 + 0x60);
  lVar12 = *(long *)(lVar16 + 0x40);
  uVar14 = *(undefined8 *)(lVar16 + 0x48);
  FUN_1000c495c(*(undefined8 *)(lVar16 + 0x28),uVar14,FUN_1002b86ec);
  (**(code **)(lVar4 + 0x38))(uVar14,0,1,uVar15);
  _swift_beginAccess(lVar12 + lVar9,lVar16 + 0x10,0x21,0);
  FUN_1001a7c4c(uVar14,lVar12 + lVar9,&DAT_100fb8210,&DAT_100c37dd0);
  _swift_endAccess(lVar16 + 0x10);
  *(undefined1 *)(lVar12 + lVar3) = 0;
  objc_stub::unlock(IVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001002ba030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 8))();
  return;
}



/* Address: 0x1002ba034 | FUN_1002ba034 */

void FUN_1002ba034(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x8_02;
  ulong uVar8;
  long extraout_x8_03;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_e0 [8];
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fbbd58;
  FUN_1000037f0(&DAT_100fbbd58,&DAT_100c3c838);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fbbeb0;
  local_a0 = auStack_e0 + -extraout_x8;
  FUN_1000037f0(&DAT_100fbbeb0,&DAT_100c3c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_e0 + -extraout_x8) - extraout_x8_00;
  lVar5 = 0;
  FUN_1002b5a40();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb8220;
  local_b8 = lVar7;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar8 = lVar7 - extraout_x12;
  puVar4 = &DAT_100fbbeb8;
  local_b0 = uVar8;
  FUN_1000037f0(&DAT_100fbbeb8,&DAT_100c3c898);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  lVar14 = uVar8 - extraout_x8_03;
  lVar13 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::hasSnapshot;
  if (*(char *)(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::hasSnapshot) ==
      '\x01') {
    local_d8 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::hasSnapshot;
    lStack_d0 = lVar9;
    local_c8 = lVar12;
    puStack_c0 = puVar3;
    _swift_beginAccess(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                       auStack_90,0,0);
    lVar13 = (long)*(int *)(puVar4 + 0x30);
    FUN_100011090(param_2,lVar14,&DAT_100fb8220,&DAT_100c37df0);
    FUN_100011090(param_1 + lVar7,lVar14 + lVar13,&DAT_100fb8220,&DAT_100c37df0);
    pcVar11 = *(code **)(lVar10 + 0x30);
    lVar7 = lVar14;
    (*pcVar11)(lVar14,1,lVar5);
    uVar8 = local_b0;
    if ((int)lVar7 == 1) {
      lVar13 = lVar14 + lVar13;
      (*pcVar11)(lVar13,1,lVar5);
      if ((int)lVar13 == 1) {
        puVar3 = &DAT_100fb8220;
        puVar4 = &DAT_100c37df0;
        goto LAB_1002ba3f8;
      }
    }
    else {
      FUN_100011090(lVar14,local_b0,&DAT_100fb8220,&DAT_100c37df0);
      lVar7 = lVar14 + lVar13;
      (*pcVar11)(lVar7,1,lVar5);
      lVar9 = local_b8;
      if ((int)lVar7 != 1) {
        FUN_1000523d8(lVar14 + lVar13,local_b8,FUN_1002b5a40);
        uVar6 = uVar8;
        FUN_1002b5b08(uVar8,lVar9);
        FUN_10005241c(lVar9,FUN_1002b5a40);
        FUN_10005241c(uVar8,FUN_1002b5a40);
        FUN_100005808(lVar14,&DAT_100fb8220,&DAT_100c37df0);
        lVar13 = local_d8;
        lVar9 = lStack_d0;
        puVar3 = puStack_c0;
        lVar12 = local_c8;
        if ((uVar6 & 1) != 0) {
          return;
        }
        goto LAB_1002ba2ec;
      }
      FUN_10005241c(uVar8,FUN_1002b5a40);
    }
    FUN_100005808(lVar14,&DAT_100fbbeb8,&DAT_100c3c898);
    lVar13 = local_d8;
    lVar9 = lStack_d0;
    puVar3 = puStack_c0;
    lVar12 = local_c8;
  }
LAB_1002ba2ec:
  lVar14 = lVar12;
  lVar7 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  _swift_beginAccess(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                     auStack_78,0x21,0);
  FUN_1002bb67c(param_2,param_1 + lVar7);
  _swift_endAccess(auStack_78);
  *(undefined1 *)(param_1 + lVar13) = 1;
  lVar13 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation;
  _swift_beginAccess(param_1 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::continuation
                     ,auStack_78,0,0);
  lVar7 = param_1 + lVar13;
  (**(code **)(lVar9 + 0x30))(lVar7,1,puVar3);
  puVar2 = local_a0;
  bVar1 = (int)lVar7 != 0;
  if (!bVar1) {
    (**(code **)(lVar9 + 0x10))(local_a0,param_1 + lVar13,puVar3);
    lVar7 = local_a8;
    FUN_100011090(param_2,local_a8,&DAT_100fb8220,&DAT_100c37df0);
    Swift::AsyncStream::Continuation::_yield(lVar14,lVar7,puVar3);
    (**(code **)(lVar9 + 8))(puVar2,puVar3);
  }
  puVar3 = &DAT_100fbbec0;
  FUN_1000037f0(&DAT_100fbbec0,&DAT_100c3c8a0);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar14,bVar1,1,puVar3);
  puVar3 = &DAT_100fbbeb0;
  puVar4 = &DAT_100c3c890;
LAB_1002ba3f8:
  FUN_100005808(lVar14,puVar3,puVar4);
  return;
}



/* Address: 0x1002ba490 | FUN_1002ba490 */

void FUN_1002ba490(void)

{
  undefined *puVar1;
  ulong uVar2;
  Transactions TVar3;
  AsyncIterator AVar4;
  undefined8 in_x3;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  TVar3 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x20) = TVar3.unknown;
  lVar5 = *(long *)(TVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  AVar4 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = AVar4.unknown;
  lVar5 = *(long *)(AVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  lVar5 = 0;
  FUN_1002b86ec();
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_1002ba564,0,0);
  return;
}



/* Address: 0x1002ba564 | FUN_1002ba564 */

void FUN_1002ba564(void)

{
  long lVar1;
  undefined8 uVar2;
  Transaction TVar3;
  Transactions TVar4;
  long *plVar5;
  ID self;
  undefined8 uVar6;
  long unaff_x22;
  
  TVar3.unknown = (undefined *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  _swift_weakLoadStrong();
  *(undefined **)(unaff_x22 + 0x58) = TVar3.unknown;
  if (TVar3.unknown != (undefined *)0x0) {
    self = *(ID *)(TVar3.unknown + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
    objc_stub::lock(self);
    if (TVar3.unknown[_TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing] !=
        '\x01') {
      TVar3.unknown[_TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing] = 1;
      TVar3.unknown[_TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending] = 0;
      objc_stub::unlock(self);
      plVar5 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1002ba6ac;
      FUN_1002b9c28(plVar5,*(undefined8 *)(unaff_x22 + 0x50),0,0);
      return;
    }
    TVar3.unknown[_TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending] = 1;
    objc_stub::unlock(self);
    _swift_release();
  }
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  TVar4 = StoreKit::Transaction::get_updates(TVar3);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar4);
  (**(code **)(lVar1 + 8))(uVar2,uVar6);
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1002ba76c;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1002ba6ac | FUN_1002ba6ac */

void FUN_1002ba6ac(void)

{
  undefined8 uVar1;
  long lVar2;
  Transactions TVar3;
  long *plVar4;
  Transaction TVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  long lVar8;
  
  lVar7 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar7 + 0x58);
  TVar5.unknown = *(undefined **)(lVar7 + 0x50);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x60));
  _swift_release(uVar1);
  FUN_10005241c(TVar5.unknown,FUN_1002b86ec);
  lVar2 = *(long *)(lVar7 + 0x28);
  uVar1 = *(undefined8 *)(lVar7 + 0x30);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  TVar3 = StoreKit::Transaction::get_updates(TVar5);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar3);
  (**(code **)(lVar2 + 8))(uVar1,uVar6);
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(lVar7 + 0x68) = plVar4;
  *plVar4 = lVar8;
  plVar4[1] = (long)FUN_1002ba76c;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(lVar7 + 0x18));
  return;
}



/* Address: 0x1002ba76c | FUN_1002ba76c */

void FUN_1002ba76c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_switch(FUN_1002ba7b4,0,0);
  return;
}



/* Address: 0x1002ba7b4 | FUN_1002ba7b4 */

void FUN_1002ba7b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ID self;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar2 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar3 = uVar6;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar6,1,puVar2);
  if ((int)uVar3 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x38));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001002ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x10) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x70) = lVar4;
  if (lVar4 != 0) {
    self = *(ID *)(lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
    objc_stub::lock(self);
    if (*(char *)(lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing) !=
        '\x01') {
      *(undefined1 *)(lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing)
           = 1;
      *(undefined1 *)
       (lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 0;
      objc_stub::unlock(self);
      plVar5 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x78) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1002ba96c;
      FUN_1002b9c28(plVar5,*(undefined8 *)(unaff_x22 + 0x50),0,0);
      return;
    }
    *(undefined1 *)
     (lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 1;
    objc_stub::unlock(self);
    _swift_release(lVar4);
  }
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x18),&DAT_100fb83a0,&DAT_100c37ad0);
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1002ba76c;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1002ba96c | FUN_1002ba96c */

void FUN_1002ba96c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x70);
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  _swift_release(uVar1);
  FUN_10005241c(uVar3,FUN_1002b86ec);
  FUN_100005808(*(undefined8 *)(lVar4 + 0x18),&DAT_100fb83a0,&DAT_100c37ad0);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x68) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_1002ba76c;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(lVar4 + 0x18));
  return;
}



/* Address: 0x1002baa0c | FUN_1002baa0c */

void FUN_1002baa0c(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  Iterator IVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar1 = 0;
  FUN_1002b86ec();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  puVar3 = &DAT_100fbbec8;
  FUN_1000037f0(&DAT_100fbbec8,&DAT_100c3c8d0);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  IVar4 = Notifications::Iterator::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = IVar4.unknown;
  lVar1 = *(long *)(IVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_1002baab8,0,0);
  return;
}



/* Address: 0x1002baab8 | FUN_1002baab8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002bab00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002baab8(undefined8 param_1)

{
  Notifications *this;
  long *plVar1;
  long unaff_x22;
  
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  this = (extension_Foundation)::__C::NSNotificationCenter::_notifications(param_1,0);
  Notifications::_makeAsyncIterator(this);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100ea7990 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002bab60;
  Notifications::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x1002bab60 | FUN_1002bab60 */

void FUN_1002bab60(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x40));
  _swift_task_switch(FUN_1002baba8,0,0);
  return;
}



/* Address: 0x1002baba8 | FUN_1002baba8 */

void FUN_1002baba8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ID self;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  Notification NVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  NVar6 = Foundation::Notification::typeMetadataAccessor();
  uVar1 = uVar4;
  (**(code **)(*(long *)(NVar6.pastePaused.str + -8) + 0x30))
            (uVar4,1,NVar6.pastePaused.str,NVar6.syncInProgress.bridgeObject);
  if ((int)uVar1 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x28));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002bac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x10) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x48) = lVar2;
  if (lVar2 != 0) {
    self = *(ID *)(lVar2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
    objc_stub::lock(self);
    if (*(char *)(lVar2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing) !=
        '\x01') {
      *(undefined1 *)(lVar2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing)
           = 1;
      *(undefined1 *)
       (lVar2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 0;
      objc_stub::unlock(self);
      plVar3 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x50) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1002bad4c;
      FUN_1002b9c28(plVar3,*(undefined8 *)(unaff_x22 + 0x18),0,0);
      return;
    }
    *(undefined1 *)
     (lVar2 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 1;
    objc_stub::unlock(self);
    _swift_release(lVar2);
  }
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x20),&DAT_100fbbec8,&DAT_100c3c8d0);
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100ea7990 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1002bab60;
  Notifications::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x1002bad4c | FUN_1002bad4c */

void FUN_1002bad4c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  _swift_release(uVar1);
  FUN_10005241c(uVar3,FUN_1002b86ec);
  FUN_100005808(*(undefined8 *)(lVar4 + 0x20),&DAT_100fbbec8,&DAT_100c3c8d0);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100ea7990 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x40) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_1002bab60;
  Notifications::Iterator::_next((Iterator)*(undefined **)(lVar4 + 0x20));
  return;
}



/* Address: 0x1002badec | FUN_1002badec */

void FUN_1002badec(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  RenewalState RVar5;
  Transaction TVar6;
  long lVar7;
  RenewalState RVar8;
  RenewalState RVar9;
  undefined7 extraout_var;
  Transaction TVar10;
  Transaction TVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  code *pcVar17;
  long lVar18;
  RenewalState RVar19;
  RenewalInfo RVar20;
  String SVar21;
  undefined auStack_b0 [8];
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  
  local_90 = param_2;
  local_70 = param_3;
  local_68 = param_1;
  RVar5 = StoreKit::Product::SubscriptionInfo::RenewalState::typeMetadataAccessor();
  lVar14 = *(long *)(RVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = puVar13 + -extraout_x12;
  local_a0 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = puVar13 + -extraout_x12_00;
  local_98 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = puVar13 + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  RVar19.unknown = puVar13 + -extraout_x12_01 + -extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = RVar19.unknown + -extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  RVar20.unknown = puVar16 + -extraout_x12_04;
  TVar6.unknown = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(TVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)RVar20.unknown - extraout_x8_00;
  StoreKit::Transaction::_get_offerType(TVar6);
  local_78 = param_4;
  SVar21 = StoreKit::Transaction::get_productID(TVar6);
  lVar7 = lVar18;
  FUN_1002bb348(lVar18,SVar21.str,SVar21.bridgeObject);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  uVar2 = local_90;
  FUN_100005808(lVar18,&DAT_100fbb630,&DAT_100c3c660);
  pcVar17 = *(code **)(lVar14 + 0x10);
  (*pcVar17)(RVar20.unknown,uVar2,RVar5.unknown);
  RVar8.unknown = puVar16;
  (*pcVar17)(puVar16,RVar20.unknown,RVar5.unknown);
  StoreKit::Product::SubscriptionInfo::RenewalState::get_subscribed(RVar8);
  puVar13 = &DAT_100fbbf00;
  FUN_100003a00(&DAT_100fbbf00,PTR_typeMetadataAccessor_100ea7f30,
                PTR_StoreKit__StoreKit__Product__SubscriptionInfo__RenewalState_>Swift__Equatable_100ea7f38
               );
  bVar4 = Swift::Equatable::___infix(RVar19.unknown,puVar16,RVar5.unknown,puVar13);
  pcVar15 = *(code **)(lVar14 + 8);
  (*pcVar15)(RVar19.unknown,RVar5.unknown);
  (*pcVar15)(puVar16,RVar5.unknown);
  puVar16 = local_88;
  uVar12 = (uint)lVar7;
  RVar8 = RVar5;
  local_7c = uVar12;
  if (bVar4) {
    (*pcVar15)();
    uVar12 = uVar12 & 1;
  }
  else {
    RVar9.unknown = local_88;
    (*pcVar17)(local_88,RVar20.unknown,RVar5.unknown);
    StoreKit::Product::SubscriptionInfo::RenewalState::get_inGracePeriod(RVar9);
    bVar4 = Swift::Equatable::___infix(RVar19.unknown,puVar16,RVar5.unknown,puVar13);
    (*pcVar15)(RVar19.unknown,RVar5.unknown);
    (*pcVar15)(puVar16,RVar5.unknown);
    puVar16 = local_98;
    if (bVar4) {
      (*pcVar15)();
      uVar12 = 2;
    }
    else {
      RVar9.unknown = local_98;
      (*pcVar17)(local_98,RVar20.unknown,RVar5.unknown);
      StoreKit::Product::SubscriptionInfo::RenewalState::get_inBillingRetryPeriod(RVar9);
      bVar4 = Swift::Equatable::___infix(RVar19.unknown,puVar16,RVar5.unknown,puVar13);
      (*pcVar15)(RVar19.unknown,RVar5.unknown);
      (*pcVar15)(puVar16,RVar5.unknown);
      puVar16 = local_a0;
      if (bVar4) {
        (*pcVar15)();
        uVar12 = 3;
      }
      else {
        RVar9.unknown = local_a0;
        (*pcVar17)(local_a0,RVar20.unknown,RVar5.unknown);
        StoreKit::Product::SubscriptionInfo::RenewalState::get_expired(RVar9);
        bVar4 = Swift::Equatable::___infix(RVar19.unknown,puVar16,RVar5.unknown,puVar13);
        (*pcVar15)(RVar19.unknown,RVar5.unknown);
        (*pcVar15)(puVar16,RVar5.unknown);
        puVar16 = local_a8;
        if (bVar4) {
          (*pcVar15)();
          uVar12 = 4;
        }
        else {
          RVar9.unknown = local_a8;
          (*pcVar17)(local_a8,RVar20.unknown,RVar5.unknown);
          StoreKit::Product::SubscriptionInfo::RenewalState::get_revoked(RVar9);
          bVar4 = Swift::Equatable::___infix(RVar19.unknown,puVar16,RVar5.unknown,puVar13);
          (*pcVar15)(RVar19.unknown,RVar5.unknown);
          (*pcVar15)(puVar16,RVar5.unknown);
          (*pcVar15)();
          uVar12 = 4;
          if (bVar4) {
            uVar12 = 5;
          }
        }
      }
    }
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
  bVar4 = StoreKit::Product::SubscriptionInfo::RenewalInfo::get_willAutoRenew(RVar20);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)CONCAT71(extraout_var,bVar4));
  TVar10.unknown = (undefined *)0x0;
  FUN_1002b5a40();
  TVar6.unknown = TVar10.unknown;
  StoreKit::Transaction::_get_expirationDate(TVar10);
  StoreKit::Product::SubscriptionInfo::RenewalInfo::_get_autoRenewPreference
            ((RenewalInfo)TVar6.unknown);
  StoreKit::Product::SubscriptionInfo::RenewalState::get_expired((RenewalState)TVar6.unknown);
  bVar4 = Swift::Equatable::___infix(uVar2,RVar19.unknown,RVar5.unknown,puVar13);
  RVar9.unknown = RVar19.unknown;
  (*pcVar15)(RVar19.unknown,RVar5.unknown);
  if (bVar4) {
    bVar4 = true;
    RVar19.unknown = RVar9.unknown;
  }
  else {
    StoreKit::Product::SubscriptionInfo::RenewalState::get_revoked(RVar9);
    bVar4 = Swift::Equatable::___infix(uVar2,RVar19.unknown,RVar5.unknown,puVar13);
    (*pcVar15)(RVar19.unknown,RVar5.unknown);
  }
  uVar3 = local_78;
  SVar21 = StoreKit::Transaction::get_productID((Transaction)RVar19.unknown);
  TVar11 = StoreKit::Transaction::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar11.unknown + -8) + 8))(uVar3,TVar11.unknown);
  RVar20 = StoreKit::Product::SubscriptionInfo::RenewalInfo::typeMetadataAccessor();
  (**(code **)(*(long *)(RVar20.unknown + -8) + 8))(local_70,RVar20.unknown);
  (*pcVar15)(uVar2,RVar5.unknown);
  *local_68 = (char)local_88;
  local_68[1] = (byte)local_98 & 1;
  local_68[*(int *)(TVar10.unknown + 0x1c)] = (byte)local_7c & 1;
  iVar1 = *(int *)(TVar10.unknown + 0x20);
  *(undefined **)(local_68 + iVar1) = TVar6.unknown;
  *(undefined **)((long)(local_68 + iVar1) + 8) = RVar8.unknown;
  local_68[*(int *)(TVar10.unknown + 0x24)] = bVar4;
  *(String *)(local_68 + *(int *)(TVar10.unknown + 0x28)) = SVar21;
  return;
}



/* Address: 0x1002bb348 | FUN_1002bb348 */

bool FUN_1002bb348(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  bool bVar1;
  OfferType OVar2;
  undefined *puVar3;
  OfferType OVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  _StringGuts local_70;
  _StringGuts _Stack_68;
  
  local_70.unknown = param_2;
  _Stack_68.unknown = param_3;
  OVar2 = StoreKit::Transaction::OfferType::typeMetadataAccessor();
  lVar8 = *(long *)(OVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fbb6f8;
  FUN_1000037f0(&DAT_100fbb6f8,&DAT_100c3c060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_00;
  OVar4.unknown = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar4.unknown + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x12;
  StoreKit::Transaction::OfferType::get_introductory(OVar4);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,OVar2.unknown);
  lVar13 = (long)*(int *)(puVar3 + 0x30);
  FUN_100011090(param_1,lVar9,&DAT_100fbb630,&DAT_100c3c660);
  FUN_100011090(lVar12,lVar9 + lVar13,&DAT_100fbb630,&DAT_100c3c660);
  pcVar7 = *(code **)(lVar8 + 0x30);
  lVar5 = lVar9;
  (*pcVar7)(lVar9,1,OVar2.unknown);
  if ((int)lVar5 == 1) {
    FUN_100005808(lVar12,&DAT_100fbb630,&DAT_100c3c660);
    lVar13 = lVar9 + lVar13;
    (*pcVar7)(lVar13,1,OVar2.unknown);
    if ((int)lVar13 != 1) {
LAB_1002bb55c:
      FUN_100005808(lVar9,&DAT_100fbb6f8,&DAT_100c3c060);
      return false;
    }
    FUN_100005808(lVar9,&DAT_100fbb630,&DAT_100c3c660);
  }
  else {
    FUN_100011090(lVar9,lVar11,&DAT_100fbb630,&DAT_100c3c660);
    lVar5 = lVar9 + lVar13;
    (*pcVar7)(lVar5,1,OVar2.unknown);
    if ((int)lVar5 == 1) {
      FUN_100005808(lVar12,&DAT_100fbb630,&DAT_100c3c660);
      (**(code **)(lVar8 + 8))(lVar11,OVar2.unknown);
      goto LAB_1002bb55c;
    }
    (**(code **)(lVar8 + 0x20))(lVar10,lVar9 + lVar13,OVar2.unknown);
    puVar6 = &DAT_100fbb700;
    FUN_100003a00(&DAT_100fbb700,PTR_typeMetadataAccessor_100ea7e00,
                  PTR_StoreKit__StoreKit__Transaction__OfferType_>Swift__Equatable_100ea7e10);
    bVar1 = Swift::Equatable::___infix(lVar11,lVar10,OVar2.unknown,puVar6);
    pcVar7 = *(code **)(lVar8 + 8);
    (*pcVar7)(lVar10,OVar2.unknown);
    FUN_100005808(lVar12,&DAT_100fbb630,&DAT_100c3c660);
    (*pcVar7)(lVar11,OVar2.unknown);
    FUN_100005808(lVar9,&DAT_100fbb630,&DAT_100c3c660);
    if (!bVar1) {
      return false;
    }
  }
  if ((local_70.unknown == (undefined *)0xd000000000000031) &&
     (_Stack_68.unknown == (undefined *)0x8000000100d9ef40)) {
    return false;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck(local_70,_Stack_68,(_StringComparisonResult)0x31);
  return !bVar1;
}



/* Address: 0x1002bb67c | FUN_1002bb67c */

undefined8 FUN_1002bb67c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002bb6cc | FUN_1002bb6cc */

void FUN_1002bb6cc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002bb6f0 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1002bb6f4 | FUN_1002bb6f4 */

void FUN_1002bb6f4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_100008284;
  FUN_1002ba490(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002bb760 | FUN_1002bb760 */

void FUN_1002bb760(undefined8 param_1)

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
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002baa0c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002bb7cc | FUN_1002bb7cc */

void FUN_1002bb7cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002bb7f0 | FUN_1002bb7f0 */

void FUN_1002bb7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002bb860 | FUN_1002bb860 */

void FUN_1002bb860(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbbef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbbee8;
  FUN_100005c24(&DAT_100fbbee8,&DAT_100c3c920);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fbbef0 = puVar2;
  return;
}



/* Address: 0x1002bb8b0 | thunk_FUN_1002bb7cc */

void thunk_FUN_1002bb7cc(void)

{
  FUN_1002bb7cc();
  return;
}



/* Address: 0x1002bb8b4 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1002bb8b8 | FUN_1002bb8b8 */

undefined1  [16] FUN_1002bb8b8(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb8398;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_00;
  puVar5 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar13 - extraout_x12;
  lVar6 = 0;
  FUN_1002bd9c0();
  iVar1 = *(int *)(lVar6 + 0x20);
  (**(code **)(lVar16 + 0x38))(lVar14,1,1,DVar3.unknown);
  lVar15 = (long)*(int *)(puVar4 + 0x30);
  FUN_100247fac(unaff_x20 + iVar1,lVar12);
  FUN_100247fac(lVar14,lVar12 + lVar15);
  pcVar11 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar12;
  (*pcVar11)(lVar12,1,DVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_100005808(lVar14,&DAT_100fb7f78,&DAT_100c37ab0);
    lVar15 = lVar12 + lVar15;
    (*pcVar11)(lVar15,1,DVar3.unknown);
    if ((int)lVar15 == 1) {
      FUN_100005808(lVar12,&DAT_100fb7f78,&DAT_100c37ab0);
LAB_1002bbb6c:
      iVar1 = *(int *)(lVar6 + 0x1c);
      puVar4 = &DAT_100fb8390;
      FUN_1000e8c70(&DAT_100fb8390,PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
      bVar2 = Swift::Comparable::<__infix(unaff_x20 + iVar1,local_68,DVar3.unknown,puVar4);
      if (bVar2) {
        puVar9 = &DAT_e700000000000000;
        uVar10 = 0x64657269707865;
      }
      else {
        bVar2 = *(char *)(unaff_x20 + *(int *)(lVar6 + 0x2c)) == '\0';
        uVar10 = 0x657669746361;
        if (bVar2) {
          uVar10 = 0x6576697463616e69;
        }
        puVar9 = &DAT_e600000000000000;
        if (bVar2) {
          puVar9 = &DAT_e800000000000000;
        }
      }
      goto LAB_1002bbbec;
    }
LAB_1002bbaac:
    FUN_100005808(lVar12,&DAT_100fb8398,&DAT_100c3c780);
  }
  else {
    FUN_100247fac(lVar12,lVar13);
    lVar7 = lVar12 + lVar15;
    (*pcVar11)(lVar7,1,DVar3.unknown);
    if ((int)lVar7 == 1) {
      FUN_100005808(lVar14,&DAT_100fb7f78,&DAT_100c37ab0);
      (**(code **)(lVar16 + 8))(lVar13,DVar3.unknown);
      goto LAB_1002bbaac;
    }
    (**(code **)(lVar16 + 0x20))(puVar9,lVar12 + lVar15,DVar3.unknown);
    puVar8 = &DAT_100fb83b0;
    FUN_1000e8c70(&DAT_100fb83b0,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar2 = Swift::Equatable::___infix(lVar13,puVar9,DVar3.unknown,puVar8);
    pcVar11 = *(code **)(lVar16 + 8);
    (*pcVar11)(puVar9,DVar3.unknown);
    FUN_100005808(lVar14,&DAT_100fb7f78,&DAT_100c37ab0);
    (*pcVar11)(lVar13,DVar3.unknown);
    FUN_100005808(lVar12,&DAT_100fb7f78,&DAT_100c37ab0);
    if (bVar2) goto LAB_1002bbb6c;
  }
  uVar10 = 0x64656c65636e6163;
  puVar9 = &DAT_e800000000000000;
LAB_1002bbbec:
  auVar17._8_8_ = puVar9;
  auVar17._0_8_ = uVar10;
  return auVar17;
}



/* Address: 0x1002bbc24 | FUN_1002bbc24 */

undefined * FUN_1002bbc24(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_1002bd9c0();
  lVar10 = *(long *)(lVar3 + -8);
  local_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::init();
  lVar3 = lVar9;
  FUN_1002bbe08();
  (**(code **)(lVar6 + 8))(lVar9,DVar4.unknown);
  uVar11 = *(ulong *)(lVar3 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002bbe08);
        (*pcVar2)();
      }
      uVar13 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
      lVar6 = *(long *)(lVar10 + 0x48);
      FUN_1000c495c(lVar3 + uVar13 + lVar6 * uVar12,lVar8,FUN_1002bd9c0);
      if (*(char *)(lVar8 + *(int *)(local_70 + 0x2c)) == '\x01') {
        puVar5 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_1002b10a8(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
          FUN_1002b10a8(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
        }
        puVar7 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        FUN_1002bda8c(lVar8,local_68 + uVar1 * lVar6 + uVar13);
      }
      else {
        FUN_10005241c(lVar8,FUN_1002bd9c0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  _swift_bridgeObjectRelease(lVar3);
  return puVar7;
}



/* Address: 0x1002bbe08 | FUN_1002bbe08 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002bbfec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1002bbe08(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar11;
  long extraout_x12;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long alStack_f0 [2];
  undefined *local_e0;
  undefined1 *apuStack_d8 [2];
  long local_c8 [5];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  puVar8 = &DAT_100fb7f78;
  local_c8[2] = param_1;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined1 *)((long)alStack_f0 - extraout_x8);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  local_88 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar10 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_80 = lVar10;
  FUN_1002bd9c0();
  local_c8[0] = *(long *)(lVar7 + -8);
  local_c8[1] = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8[0] + 0x40));
  puVar11 = (undefined1 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  apuStack_d8[1] = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar11 - extraout_x12;
  lVar10 = 0;
  local_90 = lVar7;
  FUN_100432e30();
  lVar14 = *(long *)(lVar10 + -8);
  local_c8[3] = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar16 = (undefined8 *)(lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100439388();
  lVar7 = *(long *)(lVar10 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease();
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar12 = lVar10 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    puVar8 = &DAT_100fb81b0;
    alStack_f0[1] = lVar10;
    FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
    _swift_initStaticObject();
    local_70 = *(long *)(lVar14 + 0x48);
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar10 = local_c8[3];
    local_e0 = DVar6.unknown;
    apuStack_d8[0] = puVar15;
    local_68 = puVar8;
    do {
      FUN_1000c495c(lVar12,puVar16,FUN_100432e30);
      uVar1 = *puVar16;
      uVar3 = puVar16[1];
      _swift_bridgeObjectRetain(uVar3);
      puVar8 = (undefined *)Swift::_findStringSwitchCase(puVar8,uVar1,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      if (puVar8 < (undefined *)0x6) {
        FUN_100247fac((long)puVar16 + (long)*(int *)(lVar10 + 0x28),puVar15);
        lVar14 = local_88;
        puVar9 = puVar15;
        (**(code **)(local_88 + 0x30))(puVar15,1,DVar6.unknown);
        if ((int)puVar9 == 1) {
          FUN_10005241c(puVar16,FUN_100432e30);
          FUN_100005808(puVar15,&DAT_100fb7f78,&DAT_100c37ab0);
          puVar8 = puVar9;
        }
        else {
          (**(code **)(lVar14 + 0x20))(local_80,puVar15,DVar6.unknown);
          lVar5 = local_c8[1];
          puVar15 = apuStack_d8[1];
          pcVar13 = *(code **)(lVar14 + 0x10);
          (*pcVar13)(apuStack_d8[1] + *(int *)(local_c8[1] + 0x14),
                     (long)puVar16 + (long)*(int *)(lVar10 + 0x20),DVar6.unknown);
          FUN_100247fac((long)puVar16 + (long)*(int *)(lVar10 + 0x24),
                        puVar15 + *(int *)(lVar5 + 0x18));
          (*pcVar13)(puVar15 + *(int *)(lVar5 + 0x1c),local_80,DVar6.unknown);
          FUN_100247fac((long)puVar16 + (long)*(int *)(lVar10 + 0x2c),
                        puVar15 + *(int *)(lVar5 + 0x20));
          local_a0 = puVar16[3];
          uVar1 = puVar16[4];
          uStack_98 = puVar16[5];
          uVar3 = puVar16[6];
          local_c8[4] = uVar3;
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRetain(uVar3);
          lVar10 = local_c8[2];
          FUN_100432ab4();
          (**(code **)(lVar14 + 8))(local_80,DVar6.unknown);
          FUN_10005241c(puVar16,FUN_100432e30);
          *puVar15 = (char)puVar8;
          iVar4 = *(int *)(lVar5 + 0x24);
          *(undefined8 *)(puVar15 + iVar4) = local_a0;
          *(undefined8 *)((long)(puVar15 + iVar4) + 8) = uVar1;
          iVar4 = *(int *)(lVar5 + 0x28);
          *(undefined8 *)(puVar15 + iVar4) = uStack_98;
          *(long *)((long)(puVar15 + iVar4) + 8) = local_c8[4];
          puVar15[*(int *)(lVar5 + 0x2c)] = (byte)lVar10 & 1;
          FUN_1002bda8c(puVar15,local_90);
          puVar8 = local_78;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = local_78;
          if (((ulong)puVar8 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_1002b0d44(0,*(long *)(local_78 + 0x10) + 1,1);
            puVar9 = puVar8;
          }
          puVar15 = apuStack_d8[0];
          DVar6.unknown = local_e0;
          uVar2 = *(ulong *)(puVar9 + 0x10);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_1002b0d44(puVar9,uVar2 + 1,1);
            puVar8 = puVar9;
          }
          *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
          local_78 = puVar9;
          FUN_1002bda8c(local_90,puVar9 + *(long *)(local_c8[0] + 0x48) * uVar2 +
                                          ((ulong)*(byte *)(local_c8[0] + 0x50) + 0x20 &
                                          ((ulong)*(byte *)(local_c8[0] + 0x50) ^ 0xffffffffffffffff
                                          )));
          lVar10 = local_c8[3];
        }
      }
      else {
        FUN_10005241c(puVar16,FUN_100432e30);
      }
      lVar12 = lVar12 + local_70;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(alStack_f0[1]);
  }
  return local_78;
}


