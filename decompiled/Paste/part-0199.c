/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100244560 | FUN_100244560 */

void FUN_100244560(undefined8 param_1,undefined8 param_2)

{
  MainActor *pMVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar1;
  plVar2 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002445c0;
  FUN_1002527e8();
  return;
}



/* Address: 0x1002445c0 | FUN_1002445c0 */

void FUN_1002445c0(undefined1 param_1)

{
  undefined8 *puVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(undefined1 *)(lVar3 + 0x38) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  puVar1 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,PTR_typeMetadataAccessor_100eaec10,
                PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100244644,UVar2.unknown,puVar1);
  return;
}



/* Address: 0x100244644 | FUN_100244644 */

void FUN_100244644(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_100244698,uVar1,uVar2);
  return;
}



/* Address: 0x100244698 | FUN_100244698 */

void FUN_100244698(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002446a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1002446a4 | FUN_1002446a4 */

void FUN_1002446a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7f58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c394c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c394c4,&DAT_100ec49b8);
  DAT_100fb7f58 = pTVar1;
  return;
}



/* Address: 0x1002446e4 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1002446e8 | FUN_1002446e8 */

void FUN_1002446e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100243acc(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/AppAccountTokenProvider.swift",0x34,2,0x14,0x13,
                FUN_100243b90,0,uVar1);
  return;
}



/* Address: 0x100244738 | FUN_100244738 */

void FUN_100244738(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002a8bac(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/PromoOfferSigningClient.swift",0x34,2,0x45,0x13,
                FUN_1002a995c,0,uVar1);
  return;
}



/* Address: 0x100244788 | FUN_100244788 */

void FUN_100244788(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x676e697373696d;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  HVar5.unknown = &DAT_e700000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x6465696669726576;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x6966697265766e75;
  }
  puVar3 = &DAT_e800000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0xea00000000006465;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100244848 | FUN_100244848 */

void FUN_100244848(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar1 = (char *)0x676e697373696d;
  if (bVar5 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x6465696669726576;
  if (bVar5 != 0) {
    pcVar3 = (char *)0x6966697265766e75;
  }
  puVar4 = &DAT_e800000000000000;
  if (bVar5 != 0) {
    puVar4 = (undefined1 *)0xea00000000006465;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    pcVar1 = pcVar3;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1002448e4 | FUN_1002448e4 */

void FUN_1002448e4(__int64 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x676e697373696d;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  HVar5.unknown = &DAT_e700000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x6465696669726576;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x6966697265766e75;
  }
  puVar3 = &DAT_e800000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0xea00000000006465;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1002449a0 | FUN_1002449a0 */

void FUN_1002449a0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100245938(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1002449cc | FUN_1002449cc */

void FUN_1002449cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x676e697373696d;
  if (bVar5 != 2) {
    uVar1 = 0x726f727265;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x6465696669726576;
  if (bVar5 != 0) {
    uVar3 = 0x6966697265766e75;
  }
  puVar4 = &DAT_e800000000000000;
  if (bVar5 != 0) {
    puVar4 = (undefined1 *)0xea00000000006465;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100244a4c | FUN_100244a4c */

void FUN_100244a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  Environment EVar4;
  AppTransaction AVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  puVar1 = &DAT_100fb7fa0;
  FUN_1000037f0(&DAT_100fb7fa0,&DAT_100c37af8);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  lVar7 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  EVar4 = StoreKit::AppStore::Environment::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = EVar4.unknown;
  lVar7 = *(long *)(EVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  AVar5 = StoreKit::AppTransaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb0) = AVar5.unknown;
  lVar7 = *(long *)(AVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  puVar1 = &DAT_100fb7fa8;
  FUN_1000037f0(&DAT_100fb7fa8,&DAT_100c37b00);
  *(undefined **)(unaff_x22 + 200) = puVar1;
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  AVar5.unknown = (undefined *)(uVar3 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xd8) = AVar5.unknown;
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_shared_100ea7e50 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100244b74;
  StoreKit::AppTransaction::_get_shared(AVar5);
  return;
}



/* Address: 0x100244b74 | FUN_100244b74 */

void FUN_100244b74(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  *(long *)(lVar4 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xe0));
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100244bec;
  }
  else {
    pcVar2 = FUN_100244f10;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x100244bec | FUN_100244bec */

void FUN_100244bec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  AppTransaction AVar12;
  Date DVar13;
  Environment EVar14;
  undefined *puVar15;
  AppTransaction AVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  code *pcVar19;
  undefined1 *puVar20;
  String SVar21;
  String SVar22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  StoreKit::VerificationResult::get_unsafePayloadValue((VerificationResult)(__int8)uVar5);
  FUN_100011090(uVar4,uVar11,&DAT_100fb7fa8,&DAT_100c37b00);
  _swift_getEnumCaseMultiPayload(uVar11,uVar5);
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  if ((int)uVar11 == 1) {
    puVar20 = *(undefined1 **)(unaff_x22 + 0x60);
    AVar12.unknown = (undefined *)0x0;
    FUN_100245f3c();
    iVar10 = *(int *)(AVar12.unknown + 0x14);
    StoreKit::AppTransaction::get_originalPurchaseDate(AVar12);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    AVar16.unknown = puVar20 + iVar10;
    (**(code **)(*(long *)(DVar13.unknown + -8) + 0x38))(AVar16.unknown,0,1,DVar13.unknown);
    EVar14 = StoreKit::AppTransaction::get_environment(AVar16);
    SVar21 = StoreKit::AppStore::Environment::get_rawValue(EVar14);
    (**(code **)(lVar7 + 8))(uVar4,uVar5);
    (**(code **)(lVar2 + 8))(uVar18,uVar6);
    FUN_100005808(uVar17,&DAT_100fb7fa8,&DAT_100c37b00);
    *puVar20 = 0;
    *(String *)(puVar20 + *(int *)(AVar12.unknown + 0x18)) = SVar21;
    iVar10 = *(int *)(AVar12.unknown + 0x1c);
    *(undefined8 *)(puVar20 + iVar10) = 0;
    *(undefined8 *)((long)(puVar20 + iVar10) + 8) = 0;
    iVar10 = *(int *)(AVar12.unknown + 0x20);
    *(undefined8 *)(puVar20 + iVar10) = 0;
    *(undefined8 *)((long)(puVar20 + iVar10) + 8) = 0;
    iVar10 = *(int *)(AVar12.unknown + 0x24);
    *(undefined8 *)(puVar20 + iVar10) = 0;
    *(undefined8 *)((long)(puVar20 + iVar10) + 8) = 0;
    FUN_100005808(lVar1,&DAT_100fb7fa8,&DAT_100c37b00);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar9 = *(long *)(unaff_x22 + 0x80);
    puVar20 = *(undefined1 **)(unaff_x22 + 0x60);
    puVar15 = &DAT_100fb7fb8;
    FUN_1000037f0(&DAT_100fb7fb8,&DAT_100c37b10);
    (**(code **)(lVar9 + 0x20))(uVar8,lVar1 + *(int *)(puVar15 + 0x30),uVar3);
    AVar12.unknown = (undefined *)0x0;
    FUN_100245f3c();
    iVar10 = *(int *)(AVar12.unknown + 0x14);
    StoreKit::AppTransaction::get_originalPurchaseDate(AVar12);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    AVar16.unknown = puVar20 + iVar10;
    (**(code **)(*(long *)(DVar13.unknown + -8) + 0x38))(AVar16.unknown,0,1,DVar13.unknown);
    EVar14 = StoreKit::AppTransaction::get_environment(AVar16);
    SVar21 = StoreKit::AppStore::Environment::get_rawValue(EVar14);
    (**(code **)(lVar7 + 8))(uVar4,uVar5);
    (**(code **)(lVar9 + 0x10))(uVar11,uVar8,uVar3);
    SVar22 = Swift::String::_init(uVar11,uVar3);
    (**(code **)(lVar9 + 8))(uVar8,uVar3);
    pcVar19 = *(code **)(lVar2 + 8);
    (*pcVar19)(uVar18,uVar6);
    FUN_100005808(uVar17,&DAT_100fb7fa8,&DAT_100c37b00);
    *puVar20 = 1;
    *(String *)(puVar20 + *(int *)(AVar12.unknown + 0x18)) = SVar21;
    *(String *)(puVar20 + *(int *)(AVar12.unknown + 0x1c)) = SVar22;
    iVar10 = *(int *)(AVar12.unknown + 0x20);
    *(undefined8 *)(puVar20 + iVar10) = 0;
    *(undefined8 *)((long)(puVar20 + iVar10) + 8) = 0;
    iVar10 = *(int *)(AVar12.unknown + 0x24);
    *(undefined8 *)(puVar20 + iVar10) = 0;
    *(undefined8 *)((long)(puVar20 + iVar10) + 8) = 0;
    (*pcVar19)(lVar1,uVar6);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100244f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100244f10 | FUN_100244f10 */

void FUN_100244f10(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined1 *puVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  puVar12 = *(undefined1 **)(unaff_x22 + 0x60);
  lVar4 = 0;
  FUN_100245f3c();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(puVar12 + iVar3,1,1,DVar5.unknown);
  _swift_getErrorValue(uVar9,unaff_x22 + 0x50,unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_getDynamicType(uVar6,*(undefined8 *)(unaff_x22 + 0x18),1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x20);
  puVar7 = &DAT_100fb7fb0;
  FUN_1000037f0(&DAT_100fb7fb0,&DAT_100c37b08);
  SVar14 = Swift::String::_init((undefined8 *)(unaff_x22 + 0x40),puVar7);
  _swift_getErrorValue(uVar9,unaff_x22 + 0x58,unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  lVar13 = *(long *)(lVar1 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar13 + 0x10))();
  SVar15 = Swift::String::_init(uVar8,lVar1);
  _swift_errorRelease(uVar9);
  _swift_task_dealloc(uVar8);
  *puVar12 = 3;
  iVar3 = *(int *)(lVar4 + 0x18);
  *(undefined8 *)(puVar12 + iVar3) = 0;
  *(undefined8 *)((long)(puVar12 + iVar3) + 8) = 0;
  iVar3 = *(int *)(lVar4 + 0x1c);
  *(undefined8 *)(puVar12 + iVar3) = 0;
  *(undefined8 *)((long)(puVar12 + iVar3) + 8) = 0;
  *(String *)(puVar12 + *(int *)(lVar4 + 0x20)) = SVar14;
  *(String *)(puVar12 + *(int *)(lVar4 + 0x24)) = SVar15;
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001002450b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002450bc | FUN_1002450bc */

void FUN_1002450bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  Transaction param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  OwnershipType OVar4;
  Transaction TVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  String for;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  puVar1 = &DAT_100fb7f80;
  FUN_1000037f0(&DAT_100fb7f80,&DAT_100c37ac0);
  *(undefined **)(unaff_x22 + 0x28) = puVar1;
  lVar8 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  OVar4 = StoreKit::Transaction::OwnershipType::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = OVar4.unknown;
  lVar8 = *(long *)(OVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  puVar1 = &DAT_100fb7f88;
  FUN_1000037f0(&DAT_100fb7f88,&DAT_100c37ac8);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  TVar5 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = TVar5.unknown;
  lVar8 = *(long *)(TVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  pcVar6 = (char *)(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x88) = pcVar6;
  puVar1 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x90) = puVar1;
  lVar8 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__latest_100ea7de0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100245264;
  for.bridgeObject = param_4;
  for.str = pcVar6;
  StoreKit::Transaction::_latest(for,param_5);
  return;
}



/* Address: 0x100245264 | FUN_100245264 */

void FUN_100245264(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xb0));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1002452c4,uVar1,uVar2);
  return;
}



/* Address: 0x1002452c4 | FUN_1002452c4 */

void FUN_1002452c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  Date DVar8;
  Transaction TVar9;
  __uint64 _Var10;
  Transaction TVar11;
  RevocationReason RVar12;
  undefined *puVar13;
  OwnershipType OVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  Transaction TVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  RevocationReason RVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  __int64 local_88;
  __int64 local_80;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = uVar16;
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x30))(uVar16,1,uVar1);
  if ((int)uVar6 == 1) {
    puVar19 = *(undefined1 **)(unaff_x22 + 0x10);
    FUN_100005808(uVar16,&DAT_100fb83a0,&DAT_100c37ad0);
    lVar7 = 0;
    FUN_100245ed8();
    iVar4 = *(int *)(lVar7 + 0x20);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    pcVar22 = *(code **)(*(long *)(DVar8.unknown + -8) + 0x38);
    (*pcVar22)(puVar19 + iVar4,1,1,DVar8.unknown);
    (*pcVar22)(puVar19 + *(int *)(lVar7 + 0x24),1,1,DVar8.unknown);
    (*pcVar22)(puVar19 + *(int *)(lVar7 + 0x28),1,1,DVar8.unknown);
    (*pcVar22)(puVar19 + *(int *)(lVar7 + 0x2c),1,1,DVar8.unknown);
    *puVar19 = 2;
    *(undefined8 *)(puVar19 + 0x10) = 0;
    *(undefined8 *)(puVar19 + 0x18) = 0;
    *(undefined8 *)(puVar19 + 8) = 0;
    puVar19[0x20] = 1;
    *(undefined8 *)(puVar19 + 0x28) = 0;
    puVar19[0x30] = 1;
    iVar4 = *(int *)(lVar7 + 0x30);
    *(undefined8 *)(puVar19 + iVar4) = 0;
    *(undefined1 *)((long)(puVar19 + iVar4) + 8) = 1;
    iVar4 = *(int *)(lVar7 + 0x34);
    *(undefined8 *)(puVar19 + iVar4) = 0;
    *(undefined8 *)((long)(puVar19 + iVar4) + 8) = 0;
    iVar4 = *(int *)(lVar7 + 0x38);
    *(undefined8 *)(puVar19 + iVar4) = 0;
    *(undefined8 *)((long)(puVar19 + iVar4) + 8) = 0;
  }
  else {
    TVar17.unknown = *(undefined **)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    FUN_100245eec(uVar16,uVar6);
    StoreKit::VerificationResult::get_unsafePayloadValue((VerificationResult)(__int8)uVar1);
    FUN_100011090(uVar6,TVar17.unknown,&DAT_100fb7f90,&DAT_100c3c630);
    _swift_getEnumCaseMultiPayload(TVar17.unknown,uVar1);
    if ((int)TVar17.unknown == 1) {
      RVar25.unknown = *(undefined **)(unaff_x22 + 0x68);
      lVar7 = *(long *)(unaff_x22 + 0x10);
      SVar26 = StoreKit::Transaction::get_productID(TVar17);
      TVar9.unknown = (undefined *)StoreKit::Transaction::get_id((Transaction)SVar26.str);
      _Var10 = StoreKit::Transaction::get_originalID(TVar9);
      TVar11.unknown = (undefined *)0x0;
      FUN_100245ed8();
      iVar4 = *(int *)(TVar11.unknown + 0x20);
      StoreKit::Transaction::get_purchaseDate(TVar11);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      pcVar22 = *(code **)(*(long *)(DVar8.unknown + -8) + 0x38);
      TVar17.unknown = (undefined *)(lVar7 + iVar4);
      (*pcVar22)(TVar17.unknown,0,1,DVar8.unknown);
      iVar4 = *(int *)(TVar11.unknown + 0x24);
      StoreKit::Transaction::get_originalPurchaseDate(TVar17);
      TVar17.unknown = (undefined *)(lVar7 + iVar4);
      (*pcVar22)(TVar17.unknown,0,1,DVar8.unknown);
      StoreKit::Transaction::_get_expirationDate(TVar17);
      StoreKit::Transaction::_get_revocationDate(TVar17);
      StoreKit::Transaction::_get_revocationReason(TVar17);
      RVar12 = StoreKit::Transaction::RevocationReason::typeMetadataAccessor();
      lVar7 = *(long *)(RVar12.unknown + -8);
      (**(code **)(lVar7 + 0x30))(RVar25.unknown,1,RVar12.unknown);
      TVar17.unknown = *(undefined **)(unaff_x22 + 0x68);
      bVar5 = (int)RVar25.unknown != 1;
      if (bVar5) {
        local_80 = StoreKit::Transaction::RevocationReason::get_rawValue(RVar25);
        (**(code **)(lVar7 + 8))(TVar17.unknown,RVar12.unknown);
      }
      else {
        FUN_100005808(TVar17.unknown,&DAT_100fb7f88,&DAT_100c37ac8);
        local_80 = 0;
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar20 = *(long *)(unaff_x22 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
      puVar19 = *(undefined1 **)(unaff_x22 + 0x10);
      OVar14 = StoreKit::Transaction::get_ownershipType(TVar17);
      SVar27 = StoreKit::Transaction::OwnershipType::get_rawValue(OVar14);
      (**(code **)(lVar20 + 8))(uVar2,uVar23);
      (**(code **)(lVar7 + 8))(uVar16,uVar18);
      FUN_100005808(uVar6,&DAT_100fb7f90,&DAT_100c3c630);
      *puVar19 = 0;
      *(String *)(puVar19 + 8) = SVar26;
      *(undefined **)(puVar19 + 0x18) = TVar9.unknown;
      puVar19[0x20] = 0;
      *(__uint64 *)(puVar19 + 0x28) = _Var10;
      puVar19[0x30] = 0;
      iVar4 = *(int *)(TVar11.unknown + 0x30);
      *(__int64 *)(puVar19 + iVar4) = local_80;
      *(bool *)((long)(puVar19 + iVar4) + 8) = !bVar5;
      *(String *)(puVar19 + *(int *)(TVar11.unknown + 0x34)) = SVar27;
      iVar4 = *(int *)(TVar11.unknown + 0x38);
      *(undefined8 *)(puVar19 + iVar4) = 0;
      *(undefined8 *)((long)(puVar19 + iVar4) + 8) = 0;
      FUN_100005808(uVar1,&DAT_100fb7f90,&DAT_100c3c630);
    }
    else {
      lVar21 = *(long *)(unaff_x22 + 0xa0);
      RVar25.unknown = *(undefined **)(unaff_x22 + 0x60);
      TVar17.unknown = *(undefined **)(unaff_x22 + 0x40);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar7 = *(long *)(unaff_x22 + 0x30);
      lVar20 = *(long *)(unaff_x22 + 0x10);
      puVar13 = &DAT_100fb7f98;
      FUN_1000037f0(&DAT_100fb7f98,&DAT_100c37ae0);
      (**(code **)(lVar7 + 0x20))(TVar17.unknown,lVar21 + *(int *)(puVar13 + 0x30),uVar1);
      SVar26 = StoreKit::Transaction::get_productID(TVar17);
      TVar9.unknown = (undefined *)StoreKit::Transaction::get_id((Transaction)SVar26.str);
      _Var10 = StoreKit::Transaction::get_originalID(TVar9);
      TVar11.unknown = (undefined *)0x0;
      FUN_100245ed8();
      iVar4 = *(int *)(TVar11.unknown + 0x20);
      StoreKit::Transaction::get_purchaseDate(TVar11);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      pcVar22 = *(code **)(*(long *)(DVar8.unknown + -8) + 0x38);
      TVar17.unknown = (undefined *)(lVar20 + iVar4);
      (*pcVar22)(TVar17.unknown,0,1,DVar8.unknown);
      iVar4 = *(int *)(TVar11.unknown + 0x24);
      StoreKit::Transaction::get_originalPurchaseDate(TVar17);
      TVar17.unknown = (undefined *)(lVar20 + iVar4);
      (*pcVar22)(TVar17.unknown,0,1,DVar8.unknown);
      StoreKit::Transaction::_get_expirationDate(TVar17);
      StoreKit::Transaction::_get_revocationDate(TVar17);
      StoreKit::Transaction::_get_revocationReason(TVar17);
      RVar12 = StoreKit::Transaction::RevocationReason::typeMetadataAccessor();
      lVar7 = *(long *)(RVar12.unknown + -8);
      (**(code **)(lVar7 + 0x30))(RVar25.unknown,1,RVar12.unknown);
      TVar17.unknown = *(undefined **)(unaff_x22 + 0x60);
      bVar5 = (int)RVar25.unknown != 1;
      if (bVar5) {
        local_88 = StoreKit::Transaction::RevocationReason::get_rawValue(RVar25);
        (**(code **)(lVar7 + 8))(TVar17.unknown,RVar12.unknown);
      }
      else {
        FUN_100005808(TVar17.unknown,&DAT_100fb7f88,&DAT_100c37ac8);
        local_88 = 0;
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar20 = *(long *)(unaff_x22 + 0x50);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar21 = *(long *)(unaff_x22 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
      puVar19 = *(undefined1 **)(unaff_x22 + 0x10);
      OVar14 = StoreKit::Transaction::get_ownershipType(TVar17);
      SVar27 = StoreKit::Transaction::OwnershipType::get_rawValue(OVar14);
      (**(code **)(lVar20 + 8))(uVar18,uVar23);
      (**(code **)(lVar21 + 0x10))(uVar3,uVar6,uVar15);
      SVar28 = Swift::String::_init(uVar3,uVar15);
      (**(code **)(lVar21 + 8))(uVar6,uVar15);
      pcVar22 = *(code **)(lVar7 + 8);
      (*pcVar22)(uVar2,uVar24);
      FUN_100005808(uVar16,&DAT_100fb7f90,&DAT_100c3c630);
      *puVar19 = 1;
      *(String *)(puVar19 + 8) = SVar26;
      *(undefined **)(puVar19 + 0x18) = TVar9.unknown;
      puVar19[0x20] = 0;
      *(__uint64 *)(puVar19 + 0x28) = _Var10;
      puVar19[0x30] = 0;
      iVar4 = *(int *)(TVar11.unknown + 0x30);
      *(__int64 *)(puVar19 + iVar4) = local_88;
      *(bool *)((long)(puVar19 + iVar4) + 8) = !bVar5;
      *(String *)(puVar19 + *(int *)(TVar11.unknown + 0x34)) = SVar27;
      *(String *)(puVar19 + *(int *)(TVar11.unknown + 0x38)) = SVar28;
      (*pcVar22)(uVar1,uVar24);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100245934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100245938 | FUN_100245938 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100245974 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100245938(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x10024599c | FUN_10024599c */

void FUN_10024599c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Transaction TVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  AsyncIterator AVar5;
  Transactions TVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  TVar1 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = TVar1.unknown;
  lVar8 = *(long *)(TVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  puVar3 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x48) = puVar3;
  lVar8 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  puVar3 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  AVar5 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = AVar5.unknown;
  lVar8 = *(long *)(AVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  TVar6.unknown = (undefined *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x80) = TVar6.unknown;
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar6);
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100245acc;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100245acc | FUN_100245acc */

void FUN_100245acc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_100245b2c,uVar1,uVar2);
  return;
}



/* Address: 0x100245b2c | FUN_100245b2c */

void FUN_100245b2c(void)

{
  undefined8 uVar1;
  String SVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  Transaction TVar6;
  long *plVar7;
  _StringGuts _Var8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  String SVar16;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = uVar14;
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x30))(uVar14,1,*(undefined8 *)(unaff_x22 + 0x48));
  if ((int)uVar5 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000100245bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90),
               *(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0xa0);
  FUN_100245eec(uVar14,*(undefined8 *)(unaff_x22 + 0x60));
  if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100245d40);
    (*pcVar3)();
  }
  TVar6.unknown = *(undefined **)(unaff_x22 + 0x48);
  SVar2 = *(String *)(unaff_x22 + 0x20);
  StoreKit::VerificationResult::get_unsafePayloadValue((VerificationResult)(__int8)TVar6.unknown);
  SVar16 = StoreKit::Transaction::get_productID(TVar6);
  _Var8.unknown = SVar16.bridgeObject;
  lVar9 = *(long *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
  if (SVar16 == SVar2) {
    _swift_bridgeObjectRelease(_Var8.unknown);
    (**(code **)(lVar9 + 8))(uVar5,uVar14);
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar16.str,_Var8,
                       (_StringComparisonResult)(__int8)*(undefined8 *)(unaff_x22 + 0x20));
    _swift_bridgeObjectRelease(_Var8.unknown);
    (**(code **)(lVar9 + 8))(uVar5,uVar14);
    if (!bVar4) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x60),&DAT_100fb7f90,&DAT_100c3c630);
      goto LAB_100245cf0;
    }
  }
  lVar9 = *(long *)(unaff_x22 + 0x90);
  if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100245d44);
    (*pcVar3)();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_100245eec(*(undefined8 *)(unaff_x22 + 0x60),uVar5);
  uVar14 = uVar5;
  _swift_getEnumCaseMultiPayload(uVar5,uVar13);
  FUN_100005808(uVar5,&DAT_100fb7f90,&DAT_100c3c630);
  lVar10 = *(long *)(unaff_x22 + 0x98);
  if ((int)uVar14 == 1) {
    bVar4 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    lVar11 = lVar10;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100245d48);
      (*pcVar3)();
    }
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x88);
  }
  *(long *)(unaff_x22 + 0x90) = lVar9 + 1;
  *(long *)(unaff_x22 + 0x98) = lVar10;
  *(long *)(unaff_x22 + 0x88) = lVar11;
LAB_100245cf0:
  *(long *)(unaff_x22 + 0xa0) = lVar12 + 1;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100245acc;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100245d48 | FUN_100245d48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100245d48(undefined8 param_1)

{
  Date DVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  Date self;
  NSDate *pNVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  String SVar8;
  
  puVar3 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,puVar6,&DAT_100fb7f78,&DAT_100c37ab0);
  puVar2 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,DVar1.unknown);
  if ((int)puVar2 == 1) {
    FUN_100005808(puVar6,&DAT_100fb7f78,&DAT_100c37ab0);
    SVar8 = (String)ZEXT816(0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,DVar1.unknown);
    puVar3 = &_OBJC_CLASS___NSISO8601DateFormatter;
    _objc_allocWithZone();
    self.unknown = (undefined *)objc_stub::init(puVar3);
    pNVar4 = Foundation::Date::_bridgeToObjectiveC(self);
    objc_stub::stringFromDate_((ID)self.unknown,pNVar4);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(lVar7 + 8))(lVar5,DVar1.unknown);
  }
  return SVar8;
}



/* Address: 0x100245ed8 | FUN_100245ed8 */

void FUN_100245ed8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb80c0,&TargetStructDescriptor_100ca96fc);
  return;
}



/* Address: 0x100245eec | FUN_100245eec */

undefined8 FUN_100245eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100245f3c | FUN_100245f3c */

void FUN_100245f3c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb8018,&TargetStructDescriptor_100ca96d4);
  return;
}



/* Address: 0x100245f50 | FUN_100245f50 */

void FUN_100245f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100245f64 | FUN_100245f64 */

void FUN_100245f64(void)

{
  return;
}



/* Address: 0x100245f68 | FUN_100245f68 */

undefined1  [16] FUN_100245f68(void)

{
  return ZEXT816(0x100ec3b90);
}



/* Address: 0x100245f78 | FUN_100245f78 */

long * FUN_100245f78(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  Date DVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar12 = (long)*(int *)(param_3 + 0x14);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar8.unknown + -8);
    puVar9 = (undefined1 *)((long)param_2 + lVar12);
    (**(code **)(lVar13 + 0x30))(puVar9,1,DVar8.unknown);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar13 + 0x10))
                ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                 DVar8.unknown);
      (**(code **)(lVar13 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar6 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar12 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002460cc | FUN_1002460cc */

void FUN_1002460cc(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}



/* Address: 0x100246174 | FUN_100246174 */

undefined1 * FUN_100246174(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  Date DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  
  *param_1 = *param_2;
  iVar5 = *(int *)(param_3 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar6.unknown + -8);
  puVar7 = param_2 + iVar5;
  (**(code **)(lVar9 + 0x30))(puVar7,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1 + iVar5,param_2 + iVar5,DVar6.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar5,param_2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x18);
  iVar4 = *(int *)(param_3 + 0x1c);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar5) + 8);
  *(undefined8 *)(param_1 + iVar5) = *(undefined8 *)(param_2 + iVar5);
  *(undefined8 *)((long)(param_1 + iVar5) + 8) = uVar1;
  uVar1 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar1;
  iVar5 = *(int *)(param_3 + 0x20);
  iVar4 = *(int *)(param_3 + 0x24);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar5) + 8);
  *(undefined8 *)(param_1 + iVar5) = *(undefined8 *)(param_2 + iVar5);
  *(undefined8 *)((long)(param_1 + iVar5) + 8) = uVar2;
  uVar3 = *(undefined8 *)((long)(param_2 + iVar4) + 8);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined8 *)((long)(param_1 + iVar4) + 8) = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x10024629c | FUN_10024629c */

undefined1 * FUN_10024629c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_3 + 0x14);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
      goto LAB_100246378;
    }
    (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
    goto LAB_100246378;
  }
  puVar6 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_100246378:
  iVar2 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar2 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar2 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar2 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}



/* Address: 0x10024645c | FUN_10024645c */

undefined1 * FUN_10024645c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_3 + 0x14);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  puVar4 = param_2 + iVar2;
  (**(code **)(lVar6 + 0x30))(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x18);
  iVar1 = *(int *)(param_3 + 0x1c);
  uVar7 = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = *(undefined8 *)((long)(param_2 + iVar1) + 8);
  *(undefined8 *)(param_1 + iVar1) = uVar7;
  iVar2 = *(int *)(param_3 + 0x20);
  iVar1 = *(int *)(param_3 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = *(undefined8 *)((long)(param_2 + iVar1) + 8);
  *(undefined8 *)(param_1 + iVar1) = uVar7;
  return param_1;
}



/* Address: 0x100246548 | FUN_100246548 */

undefined1 * FUN_100246548(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar10)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar10)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
      goto LAB_100246624;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
    goto LAB_100246624;
  }
  puVar7 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_100246624:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x18)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x1c)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x20)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x24)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}



/* Address: 0x1002466c8 | FUN_1002466c8 */

void FUN_1002466c8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002466d4 | FUN_1002466d4 */

ulong FUN_1002466d4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  if ((int)param_2 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
    uVar3 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100246734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar3,param_2,puVar2);
    return uVar3;
  }
  uVar3 = *(ulong *)(param_1 + *(int *)(param_3 + 0x18) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x100246770 | FUN_100246770 */

void FUN_100246770(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10024677c | FUN_10024677c */

void FUN_10024677c(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001002467e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))
              (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,puVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x100246808 | FUN_100246808 */

void FUN_100246808(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_50 = &DAT_100c37b58;
  lVar1 = 0x13f;
  FUN_10024688c();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_100c37b70;
    local_38 = &DAT_100c37b70;
    puStack_30 = &DAT_100c37b70;
    local_28 = &DAT_100c37b70;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10024688c | FUN_10024688c */

void FUN_10024688c(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb8028 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fb8028 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1002468e0 | FUN_1002468e0 */

long * FUN_1002468e0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  Date DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar10 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar10;
    param_1[3] = param_2[3];
    *(char *)(param_1 + 4) = (char)param_2[4];
    param_1[5] = param_2[5];
    *(char *)(param_1 + 6) = (char)param_2[6];
    lVar13 = (long)*(int *)(param_3 + 0x20);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar6.unknown + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    puVar7 = (undefined1 *)((long)param_2 + lVar13);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar11 + 0x10))
                ((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                 DVar6.unknown);
      (**(code **)(lVar11 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(param_3 + 0x24);
    puVar7 = (undefined1 *)((long)param_2 + lVar10);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar11 + 0x10))
                ((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
                 DVar6.unknown);
      (**(code **)(lVar11 + 0x38))((undefined1 *)((long)param_1 + lVar10),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(param_3 + 0x28);
    puVar7 = (undefined1 *)((long)param_2 + lVar10);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar11 + 0x10))
                ((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
                 DVar6.unknown);
      (**(code **)(lVar11 + 0x38))((undefined1 *)((long)param_1 + lVar10),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(param_3 + 0x2c);
    puVar7 = (undefined1 *)((long)param_2 + lVar10);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar11 + 0x10))
                ((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
                 DVar6.unknown);
      (**(code **)(lVar11 + 0x38))((undefined1 *)((long)param_1 + lVar10),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100246ba4 | FUN_100246ba4 */

void FUN_100246ba4(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_2 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}



/* Address: 0x100246cac | FUN_100246cac */

undefined1 * FUN_100246cac(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  iVar3 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  puVar5 = param_2 + iVar3;
  (*pcVar8)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  puVar5 = param_2 + iVar3;
  (*pcVar8)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x28);
  puVar5 = param_2 + iVar3;
  (*pcVar8)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar5 = param_2 + iVar3;
  (*pcVar8)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x30);
  iVar2 = *(int *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined1 *)((long)(param_1 + iVar3) + 8) = *(undefined1 *)((long)(param_2 + iVar3) + 8);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = uVar1;
  iVar3 = *(int *)(param_3 + 0x38);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100246f44 | FUN_100246f44 */

undefined1 * FUN_100246f44(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  iVar2 = *(int *)(param_3 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 != 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
      goto LAB_100247038;
    }
    (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
LAB_100247038:
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x24);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 != 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
      goto LAB_1002470d4;
    }
    (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
LAB_1002470d4:
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x28);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 != 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
      goto LAB_100247170;
    }
    (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
LAB_100247170:
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x2c);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
      goto LAB_100247234;
    }
    (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
    goto LAB_100247234;
  }
  puVar6 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_100247234:
  iVar2 = *(int *)(param_3 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + iVar2);
  *(undefined1 *)((long)(param_1 + iVar2) + 8) = *(undefined1 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar7;
  iVar2 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar2 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}



/* Address: 0x100247324 | FUN_100247324 */

undefined1 * FUN_100247324(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar8 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  iVar2 = *(int *)(param_3 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  puVar4 = param_2 + iVar2;
  (*pcVar7)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x24);
  puVar4 = param_2 + iVar2;
  (*pcVar7)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x28);
  puVar4 = param_2 + iVar2;
  (*pcVar7)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x2c);
  puVar4 = param_2 + iVar2;
  (*pcVar7)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x30);
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  *(undefined1 *)((long)(param_1 + iVar2) + 8) = *(undefined1 *)((long)(param_2 + iVar2) + 8);
  uVar8 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = *(undefined8 *)((long)(param_2 + iVar1) + 8);
  *(undefined8 *)(param_1 + iVar1) = uVar8;
  iVar2 = *(int *)(param_3 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar8;
  return param_1;
}



/* Address: 0x100247598 | FUN_100247598 */

undefined1 * FUN_100247598(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Date DVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  iVar4 = *(int *)(param_3 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  puVar7 = param_1 + iVar4;
  (*pcVar11)(puVar7,1,DVar6.unknown);
  puVar8 = param_2 + iVar4;
  (*pcVar11)(puVar8,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 != 0) {
      (**(code **)(lVar10 + 8))(param_1 + iVar4,DVar6.unknown);
      goto LAB_10024767c;
    }
    (**(code **)(lVar10 + 0x28))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
  }
  else if ((int)puVar8 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + iVar4,0,1,DVar6.unknown);
  }
  else {
LAB_10024767c:
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x24);
  puVar7 = param_1 + iVar4;
  (*pcVar11)(puVar7,1,DVar6.unknown);
  puVar8 = param_2 + iVar4;
  (*pcVar11)(puVar8,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 != 0) {
      (**(code **)(lVar10 + 8))(param_1 + iVar4,DVar6.unknown);
      goto LAB_100247718;
    }
    (**(code **)(lVar10 + 0x28))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
  }
  else if ((int)puVar8 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + iVar4,0,1,DVar6.unknown);
  }
  else {
LAB_100247718:
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x28);
  puVar7 = param_1 + iVar4;
  (*pcVar11)(puVar7,1,DVar6.unknown);
  puVar8 = param_2 + iVar4;
  (*pcVar11)(puVar8,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 != 0) {
      (**(code **)(lVar10 + 8))(param_1 + iVar4,DVar6.unknown);
      goto LAB_1002477b4;
    }
    (**(code **)(lVar10 + 0x28))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
  }
  else if ((int)puVar8 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + iVar4,0,1,DVar6.unknown);
  }
  else {
LAB_1002477b4:
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x2c);
  puVar7 = param_1 + iVar4;
  (*pcVar11)(puVar7,1,DVar6.unknown);
  puVar8 = param_2 + iVar4;
  (*pcVar11)(puVar8,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
      goto LAB_100247878;
    }
    (**(code **)(lVar10 + 8))(param_1 + iVar4,DVar6.unknown);
  }
  else if ((int)puVar8 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + iVar4,0,1,DVar6.unknown);
    goto LAB_100247878;
  }
  puVar9 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_100247878:
  iVar4 = *(int *)(param_3 + 0x30);
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + iVar4) = *(undefined8 *)(param_2 + iVar4);
  *(undefined1 *)((long)(param_1 + iVar4) + 8) = *(undefined1 *)((long)(param_2 + iVar4) + 8);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  uVar5 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x38)) + 8);
  uVar5 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x100247944 | FUN_100247944 */

void FUN_100247944(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100247950 | FUN_100247950 */

ulong FUN_100247950(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  uVar3 = param_1 + *(int *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001002479e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x1002479e8 | FUN_1002479e8 */

void FUN_1002479e8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002479f4 | FUN_1002479f4 */

void FUN_1002479f4(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 0x10) = param_2 & 0xffffffff;
    return;
  }
  puVar1 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
                    /* WARNING: Could not recover jumptable at 0x000100247a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x20),param_2,param_2,puVar1);
  return;
}



/* Address: 0x100247a74 | FUN_100247a74 */

void FUN_100247a74(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_88 = &DAT_100c37b58;
  puStack_80 = &DAT_100c37b70;
  local_78 = &DAT_100c37bb0;
  puStack_70 = &DAT_100c37bb0;
  lVar1 = 0x13f;
  FUN_10024688c();
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    local_48 = &DAT_100c37bb0;
    puStack_40 = &DAT_100c37b70;
    local_38 = &DAT_100c37b70;
    lStack_60 = local_68;
    local_58 = local_68;
    lStack_50 = local_68;
    _swift_initStructMetadata(param_1,0x100,0xb,&local_88,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100247b10 | FUN_100247b10 */

void FUN_100247b10(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100247b1c | FUN_100247b1c */

undefined1  [16] FUN_100247b1c(void)

{
  return ZEXT816(0x100ec3c30);
}



/* Address: 0x100247b2c | FUN_100247b2c */

undefined1  [16] FUN_100247b2c(void)

{
  return ZEXT816(0x100ec3c50);
}



/* Address: 0x100247b3c | thunk_FUN_100247b40 */

void thunk_FUN_100247b40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37c7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37c7c,&DAT_100ec3c30);
  DAT_100fb8120 = pTVar1;
  return;
}



/* Address: 0x100247b40 | FUN_100247b40 */

void FUN_100247b40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c37c7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c37c7c,&DAT_100ec3c30);
  DAT_100fb8120 = pTVar1;
  return;
}



/* Address: 0x100247b80 | FUN_100247b80 */

void FUN_100247b80(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  URL UVar5;
  URL UVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  
  if (param_2 < 3) {
    puVar9 = (undefined1 *)0xd00000000000002b;
    pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
    if (param_2 != 1) {
      puVar9 = (undefined1 *)0xd000000000000031;
      pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
    }
    uVar10 = 0x796c68746e6f4d;
    if (param_2 != 0) {
      uVar10 = 0x6c61756e6e41;
    }
    puVar11 = &DAT_e700000000000000;
    puVar12 = (undefined1 *)0xd00000000000002c;
    pcVar13 = "e.macos.subscription.annual";
    if (param_2 != 0) {
      puVar11 = &DAT_e600000000000000;
      puVar12 = puVar9;
      pcVar13 = pcVar1 + 0x20;
    }
  }
  else {
    puVar9 = (undefined1 *)0xed00007963616765;
    pcVar1 = "verified";
    puVar3 = &DAT_d000000000000032;
    uVar7 = 0x4c206c61756e6e41;
    if (param_2 != 4) {
      puVar9 = &DAT_e800000000000000;
      pcVar1 = "onBarViewModel.swift";
      puVar3 = (undefined1 *)0xd00000000000002d;
      uVar7 = 0x656d69746566694c;
    }
    uVar10 = 0x46206c61756e6e41;
    puVar11 = (undefined1 *)0xed0000796c696d61;
    puVar12 = &DAT_d000000000000032;
    pcVar13 = "tion.annual.legacy";
    if (param_2 != 3) {
      uVar10 = uVar7;
      puVar11 = puVar9;
      puVar12 = puVar3;
      pcVar13 = pcVar1;
    }
  }
  lVar4 = 0;
  FUN_10019fee0();
  FUN_100247fac(param_3,(long)param_1 + (long)*(int *)(lVar4 + 0x18));
  iVar2 = *(int *)(lVar4 + 0x1c);
  if (param_2 == 5) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x38);
    uVar7 = 1;
  }
  else {
    if (DAT_100fb81b8 != -1) {
      _swift_once(&DAT_100fb81b8,FUN_100247e58);
    }
    UVar5 = Foundation::URL::typeMetadataAccessor();
    UVar6 = UVar5;
    FUN_1000cd990(UVar5.unknown,&DAT_1010578c8);
    lVar4 = *(long *)(UVar5.unknown + -8);
    (**(code **)(lVar4 + 0x10))((long)param_1 + (long)iVar2,UVar6.unknown,UVar5.unknown);
    pcVar8 = *(code **)(lVar4 + 0x38);
    uVar7 = 0;
  }
  (*pcVar8)((long)param_1 + (long)iVar2,uVar7,1,UVar5.unknown);
  *param_1 = puVar12;
  param_1[1] = (ulong)pcVar13 | 0x8000000000000000;
  param_1[2] = uVar10;
  param_1[3] = puVar11;
  return;
}



/* Address: 0x100247dd0 | FUN_100247dd0 */

void FUN_100247dd0(void)

{
  URL UVar1;
  
  if (DAT_100fb81b8 != -1) {
    _swift_once(&DAT_100fb81b8,FUN_100247e58);
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000cd990(UVar1.unknown,&DAT_1010578c8);
  return;
}



/* Address: 0x100247e18 | FUN_100247e18 */

bool FUN_100247e18(void)

{
  bool bVar1;
  undefined8 *unaff_x20;
  
  if ((undefined *)*unaff_x20 != (undefined *)0xd00000000000002d ||
      (undefined *)unaff_x20[1] != (undefined *)0x8000000100d8f1e0) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*unaff_x20,(undefined *)unaff_x20[1],
                       (_StringComparisonResult)0x2d);
    return bVar1;
  }
  return true;
}



/* Address: 0x100247e58 | FUN_100247e58 */

void FUN_100247e58(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_1010578c8);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_1010578c8);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100247f3c);
  (*pcVar1)();
}



/* Address: 0x100247f3c | FUN_100247f3c */

void FUN_100247f3c(undefined8 param_1)

{
  URL UVar1;
  URL UVar2;
  
  if (DAT_100fb81b8 != -1) {
    _swift_once(&DAT_100fb81b8,FUN_100247e58);
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_1010578c8);
                    /* WARNING: Could not recover jumptable at 0x000100247f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1,UVar2.unknown,UVar1.unknown);
  return;
}


