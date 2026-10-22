/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10025104c | FUN_10025104c */

void FUN_10025104c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x78);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xa0));
  _swift_release(uVar2);
  if (*(long *)(lVar4 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar1 = *(ulong *)(lVar4 + 0x60);
    FUN_100250114();
    if ((((uint)uVar1 & 0xff) == 2) || ((uint)*(byte *)(lVar4 + 0xa8) != ((uint)uVar1 & 0xff))) {
      FUN_100005808(lVar4 + 0x10,&DAT_100fb85c0,&DAT_100c388a0);
    }
    else {
      FUN_1000da768(lVar4 + 0x58);
      uVar3 = *(undefined8 *)(lVar4 + 0x58);
      if ((uVar1 & 0xff) == 0) {
        FUN_1003fd0d0(*(undefined8 *)(lVar4 + 0x70),uVar2);
      }
      else {
        FUN_1003fd104();
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x70);
      FUN_100005808(lVar4 + 0x10,&DAT_100fb85c0,&DAT_100c388a0);
      FUN_1003fea8c(uVar2);
      _swift_release(uVar3);
      FUN_10005241c(uVar2,FUN_1003efa8c);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100251150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x100251154 | FUN_100251154 */

uint FUN_100251154(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 local_68 [3];
  ulong local_50;
  undefined8 uStack_48;
  
  FUN_1000da768(local_68);
  puVar2 = local_68;
  FUN_100004640(puVar2,local_50);
  uVar3 = local_50;
  FUN_1001a15c4(local_50,uStack_48,puVar2);
  puVar2 = local_68;
  FUN_100004594();
  if (((uVar3 & 1) == 0) && (*(long *)(unaff_x20 + 0x50) < 3)) {
    FUN_1003fcb28();
    uVar6 = *puVar2;
    uVar1 = puVar2[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1000da768(local_68);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar5 = uStack_48;
    FUN_1003fc824(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1003ff7e0();
    _swift_release(local_68[0]);
    _swift_release(uVar5);
    FUN_1000386a0();
    _swift_release(puVar4);
    FUN_10012eef0(uVar6,uVar1,uVar5);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar5);
    uVar7 = (uint)uVar6 ^ 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7 & 1;
}



/* Address: 0x100251264 | thunk_FUN_1002426e4 */

void thunk_FUN_1002426e4(void)

{
  FUN_1002426e4();
  return;
}



/* Address: 0x100251268 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x10025126c | thunk_FUN_100242674 */

void thunk_FUN_100242674(void)

{
  FUN_100242674();
  return;
}



/* Address: 0x100251270 | thunk_FUN_10024274c */

void thunk_FUN_10024274c(void)

{
  FUN_10024274c();
  return;
}



/* Address: 0x100251274 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x100251278 | FUN_100251278 */

void FUN_100251278(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10025129c | FUN_10025129c */

void FUN_10025129c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002512d8 | FUN_1002512d8 */

void FUN_1002512d8(undefined8 param_1)

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
  plVar5 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10024ec0c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x100251358 | FUN_100251358 */

void FUN_100251358(void)

{
  FUN_10024f558();
  return;
}



/* Address: 0x100251360 | FUN_100251360 */

void FUN_100251360(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10025138c | FUN_10025138c */

void FUN_10025138c(undefined8 param_1)

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
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10024f710(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002513f8 | FUN_1002513f8 */

void FUN_1002513f8(void)

{
  FUN_1002b997c();
  return;
}



/* Address: 0x100251400 | FUN_100251400 */

undefined8 FUN_100251400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100251450 | FUN_100251450 */

void FUN_100251450(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  PaymentMode PVar3;
  ulong uVar4;
  SubscriptionOffer SVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x1c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  puVar1 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  PVar3 = StoreKit::Product::SubscriptionOffer::PaymentMode::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = PVar3.unknown;
  lVar9 = *(long *)(PVar3.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  puVar1 = &DAT_100fb8658;
  FUN_1000037f0(&DAT_100fb8658,&DAT_100c38220);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  puVar1 = &DAT_100fb8660;
  FUN_1000037f0(&DAT_100fb8660,&DAT_100c38228);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  SVar5 = StoreKit::Product::SubscriptionOffer::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x100) = SVar5.unknown;
  lVar9 = *(long *)(SVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  lVar9 = 0;
  FUN_1002abb94();
  *(long *)(unaff_x22 + 0x130) = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x188) = pMVar6;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 400) = pMVar6;
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x198) = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100251690,UVar8.unknown,puVar7);
  return;
}



/* Address: 0x100251690 | FUN_100251690 */

void FUN_100251690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *local_58;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
  cVar3 = *(char *)(unaff_x22 + 0x1c8);
  puVar4 = &DAT_100c381e0;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb7cf8;
  FUN_1000037f0(&DAT_100fb7cf8,&DAT_100c37550);
  _swift_initStackObject();
  *(undefined **)(unaff_x22 + 0x1a0) = puVar5;
  FUN_1000da6e0(puVar5);
  *(undefined **)(unaff_x22 + 0x1a8) = puVar4;
  if (cVar3 == '\x02') {
    uVar10 = *(undefined8 *)(unaff_x22 + 400);
    FUN_1000da768(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar8 = *(long *)(unaff_x22 + 0xa8);
    FUN_100004640(unaff_x22 + 0x88,uVar7);
    puVar4 = &DAT_100fb8650;
    FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
    _swift_initStaticObject();
    piVar9 = *(int **)(lVar8 + 0x10);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    local_58 = (code *)((long)*piVar9 + (long)piVar9);
    _swift_retain(uVar10);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100251844;
  }
  else {
    FUN_1000da768(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar8 = *(long *)(unaff_x22 + 0x80);
    FUN_100004640(unaff_x22 + 0x60,uVar7);
    puVar4 = &DAT_100fb8650;
    FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
    _swift_initStaticObject();
    piVar9 = *(int **)(lVar8 + 0x10);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    local_58 = (code *)((long)*piVar9 + (long)piVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1002520e8;
  }
                    /* WARNING: Could not recover jumptable at 0x000100251840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_58)(uVar1,uVar2,puVar4,uVar7,lVar8);
  return;
}



/* Address: 0x100251844 | FUN_100251844 */

void FUN_100251844(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  code *pcVar18;
  MainActor *pMVar19;
  UnownedSerialExecutor UVar20;
  UnownedSerialExecutor UVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long unaff_x20;
  long lVar28;
  long *unaff_x22;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  MainActor *pMVar33;
  undefined8 uVar34;
  ulong uVar35;
  
  lVar31 = *unaff_x22;
  lVar23 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar31 + 0x1b0));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar31 + 400));
    FUN_100004594(lVar31 + 0x88);
    uVar24 = *(ulong *)(param_1 + 0x10);
    if (uVar24 != 0) {
      uVar35 = 0;
      lVar27 = *(long *)(lVar31 + 0x138);
      uVar25 = (ulong)*(byte *)(lVar27 + 0x50);
      lVar28 = param_1 + (uVar25 + 0x20 & (uVar25 ^ 0xffffffffffffffff));
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100251c8c);
          (*pcVar18)();
        }
        uVar29 = *(undefined8 *)(lVar31 + 0x198);
        pMVar33 = *(MainActor **)(lVar31 + 0x188);
        uVar26 = *(undefined8 *)(lVar31 + 0x168);
        pMVar19 = *(MainActor **)(lVar31 + 0x170);
        lVar30 = *(long *)(lVar27 + 0x48);
        FUN_100252c50(lVar28 + lVar30 * uVar35,pMVar19);
        FUN_1000523d8(pMVar19,uVar26,FUN_1002abb94);
        pMVar19 = Swift::MainActor::get_shared(pMVar33,pMVar19);
        UVar20 = Swift::Actor::get_unownedExecutor();
        UVar21 = UVar20;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar21.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteLicensingAppStore/OfferManager.swift",0x29,1,0xcc,UVar20.unknown,uVar29);
        }
        cVar17 = **(char **)(lVar31 + 0x168);
        _swift_release(pMVar19);
        if (cVar17 == '\x01') {
          uVar26 = *(undefined8 *)(lVar31 + 0x178);
          uVar29 = *(undefined8 *)(lVar31 + 0x180);
          FUN_1000523d8(*(undefined8 *)(lVar31 + 0x168),uVar26,FUN_1002abb94);
          FUN_1000523d8(uVar26,uVar29,FUN_1002abb94);
          uVar35 = 0;
          do {
            if (*(ulong *)(param_1 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100251c90);
              (*pcVar18)();
            }
            uVar29 = *(undefined8 *)(lVar31 + 0x198);
            pMVar33 = *(MainActor **)(lVar31 + 0x188);
            uVar26 = *(undefined8 *)(lVar31 + 0x148);
            pMVar19 = *(MainActor **)(lVar31 + 0x150);
            FUN_100252c50(lVar28,pMVar19);
            FUN_1000523d8(pMVar19,uVar26,FUN_1002abb94);
            pMVar19 = Swift::MainActor::get_shared(pMVar33,pMVar19);
            UVar20 = Swift::Actor::get_unownedExecutor();
            UVar21 = UVar20;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar21.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("PasteLicensingAppStore/OfferManager.swift",0x29,1,0xcd,UVar20.unknown,
                         uVar29);
            }
            cVar17 = **(char **)(lVar31 + 0x148);
            _swift_release(pMVar19);
            if (cVar17 == '\x02') {
              uVar26 = *(undefined8 *)(lVar31 + 400);
              uVar1 = *(undefined8 *)(lVar31 + 0x198);
              uVar29 = *(undefined8 *)(lVar31 + 0x158);
              uVar2 = *(undefined8 *)(lVar31 + 0x160);
              uVar32 = *(undefined8 *)(lVar31 + 0x148);
              _swift_bridgeObjectRelease(param_1);
              FUN_1000523d8(uVar32,uVar29,FUN_1002abb94);
              FUN_1000523d8(uVar29,uVar2,FUN_1002abb94);
              plVar22 = (long *)0x60;
              _swift_task_alloc();
              *(long **)(lVar31 + 0x1b8) = plVar22;
              *plVar22 = lVar23;
              plVar22[1] = (long)FUN_100251c90;
              FUN_100255f2c(uVar26,uVar1);
              return;
            }
            uVar35 = uVar35 + 1;
            FUN_10005241c(*(undefined8 *)(lVar31 + 0x148),FUN_1002abb94);
            lVar28 = lVar28 + lVar30;
          } while (uVar24 != uVar35);
          uVar26 = *(undefined8 *)(lVar31 + 400);
          uVar29 = *(undefined8 *)(lVar31 + 0x180);
          _swift_release(*(undefined8 *)(lVar31 + 0x1a8));
          _swift_bridgeObjectRelease(param_1);
          _swift_release(uVar26);
          FUN_10005241c(uVar29,FUN_1002abb94);
          goto LAB_1002519d0;
        }
        uVar35 = uVar35 + 1;
        FUN_10005241c(*(undefined8 *)(lVar31 + 0x168),FUN_1002abb94);
      } while (uVar24 != uVar35);
    }
    uVar26 = *(undefined8 *)(lVar31 + 0x1a8);
    _swift_release(*(undefined8 *)(lVar31 + 400));
    _swift_release(uVar26);
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    uVar29 = *(undefined8 *)(lVar31 + 0x1a8);
    uVar26 = *(undefined8 *)(lVar31 + 400);
    _swift_errorRelease();
    _swift_release(uVar26);
    _swift_release(uVar29);
    _swift_release(uVar26);
    FUN_100004594(lVar31 + 0x88);
  }
LAB_1002519d0:
  uVar26 = *(undefined8 *)(lVar31 + 0x178);
  uVar29 = *(undefined8 *)(lVar31 + 0x168);
  uVar8 = *(undefined8 *)(lVar31 + 0x170);
  uVar1 = *(undefined8 *)(lVar31 + 0x158);
  uVar9 = *(undefined8 *)(lVar31 + 0x160);
  uVar2 = *(undefined8 *)(lVar31 + 0x148);
  uVar10 = *(undefined8 *)(lVar31 + 0x150);
  uVar34 = *(undefined8 *)(lVar31 + 0x140);
  uVar32 = *(undefined8 *)(lVar31 + 0x120);
  uVar11 = *(undefined8 *)(lVar31 + 0x128);
  uVar3 = *(undefined8 *)(lVar31 + 0x110);
  uVar12 = *(undefined8 *)(lVar31 + 0x118);
  uVar4 = *(undefined8 *)(lVar31 + 0xf0);
  uVar13 = *(undefined8 *)(lVar31 + 0xf8);
  uVar5 = *(undefined8 *)(lVar31 + 0xe0);
  uVar14 = *(undefined8 *)(lVar31 + 0xe8);
  uVar6 = *(undefined8 *)(lVar31 + 0xd0);
  uVar15 = *(undefined8 *)(lVar31 + 0xd8);
  puVar7 = *(undefined8 **)(lVar31 + 0xb0);
  uVar16 = *(undefined8 *)(lVar31 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar31 + 0x180));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100251adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar23 + 8))();
  return;
}



/* Address: 0x100251c90 | FUN_100251c90 */

void FUN_100251c90(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  SubscriptionInfo SVar17;
  PaymentMode PVar18;
  undefined *puVar19;
  long lVar20;
  Product PVar21;
  SubscriptionInfo SVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  SubscriptionOffer SVar25;
  undefined8 uVar26;
  long *unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  code *pcVar30;
  undefined8 uVar31;
  long lVar32;
  String SVar33;
  undefined8 local_80;
  undefined *local_70;
  
  lVar32 = *unaff_x22;
  PVar21.unknown = *(undefined **)(lVar32 + 400);
  lVar20 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar32 + 0x1b8));
  _swift_release();
  if ((param_1 & 1) == 0) {
    uVar24 = *(undefined8 *)(lVar32 + 0x180);
    uVar23 = *(undefined8 *)(lVar32 + 0x160);
    _swift_release(*(undefined8 *)(lVar32 + 0x1a8));
LAB_100251da8:
    FUN_10005241c(uVar23,FUN_1002abb94);
    FUN_10005241c(uVar24,FUN_1002abb94);
  }
  else {
    SVar22.unknown = *(undefined **)(lVar32 + 0xe8);
    StoreKit::Product::_get_subscription(PVar21);
    SVar17 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
    lVar29 = *(long *)(SVar17.unknown + -8);
    (**(code **)(lVar29 + 0x30))(SVar22.unknown,1,SVar17.unknown);
    if ((int)SVar22.unknown == 1) {
      uVar23 = *(undefined8 *)(lVar32 + 0x180);
      uVar27 = *(undefined8 *)(lVar32 + 0x160);
      uVar24 = *(undefined8 *)(lVar32 + 0x100);
      lVar29 = *(long *)(lVar32 + 0x108);
      uVar26 = *(undefined8 *)(lVar32 + 0xf8);
      uVar28 = *(undefined8 *)(lVar32 + 0xe8);
      _swift_release(*(undefined8 *)(lVar32 + 0x1a8));
      FUN_10005241c(uVar27,FUN_1002abb94);
      FUN_10005241c(uVar23,FUN_1002abb94);
      FUN_100005808(uVar28,&DAT_100fb8658,&DAT_100c38220);
      (**(code **)(lVar29 + 0x38))(uVar26,1,1,uVar24);
    }
    else {
      uVar24 = *(undefined8 *)(lVar32 + 0x100);
      lVar6 = *(long *)(lVar32 + 0x108);
      uVar23 = *(undefined8 *)(lVar32 + 0xf8);
      uVar26 = *(undefined8 *)(lVar32 + 0xe8);
      StoreKit::Product::SubscriptionInfo::_get_introductoryOffer(SVar22);
      (**(code **)(lVar29 + 8))(uVar26,SVar17.unknown);
      (**(code **)(lVar6 + 0x30))(uVar23,1,uVar24);
      if ((int)uVar23 != 1) {
        SVar25.unknown = *(undefined **)(lVar32 + 0x128);
        uVar24 = *(undefined8 *)(lVar32 + 0xd0);
        local_70 = *(undefined **)(lVar32 + 0xd8);
        uVar23 = *(undefined8 *)(lVar32 + 0xc0);
        lVar29 = *(long *)(lVar32 + 200);
        (**(code **)(*(long *)(lVar32 + 0x108) + 0x20))
                  (SVar25.unknown,*(undefined8 *)(lVar32 + 0xf8),*(undefined8 *)(lVar32 + 0x100));
        PVar18 = StoreKit::Product::SubscriptionOffer::get_paymentMode(SVar25);
        StoreKit::Product::SubscriptionOffer::PaymentMode::get_freeTrial(PVar18);
        puVar19 = &DAT_100fb8698;
        FUN_100003a00(&DAT_100fb8698,PTR_typeMetadataAccessor_100ea7fe0,
                      PTR_StoreKit__StoreKit__Product__SubscriptionOffer__PaymentMode_>Swift__Equatable_100ea7fe8
                     );
        uVar26 = uVar23;
        bVar16 = Swift::Equatable::___infix(local_70,uVar24,uVar23,puVar19);
        pcVar30 = *(code **)(lVar29 + 8);
        (*pcVar30)(uVar24,uVar23);
        (*pcVar30)();
        if (!bVar16) {
          StoreKit::Product::get_price((Product)local_70);
          SVar25.unknown = local_70;
          uVar24 = uVar23;
          uVar27 = uVar26;
          StoreKit::Product::SubscriptionOffer::get_price((SubscriptionOffer)local_70);
          FUN_10024e508(local_70,uVar23,uVar26,SVar25.unknown,uVar24,uVar27);
          if (((uint)uVar23 & 0xff) != 1) {
            uVar23 = *(undefined8 *)(lVar32 + 0x1a8);
            uVar26 = *(undefined8 *)(lVar32 + 0x180);
            uVar27 = *(undefined8 *)(lVar32 + 0x160);
            uVar28 = *(undefined8 *)(lVar32 + 0x128);
            uVar24 = *(undefined8 *)(lVar32 + 0x100);
            lVar29 = *(long *)(lVar32 + 0x108);
            SVar33 = StoreKit::Product::SubscriptionOffer::get_displayPrice
                               ((SubscriptionOffer)local_70);
            _swift_release(uVar23);
            (**(code **)(lVar29 + 8))(uVar28,uVar24);
            FUN_10005241c(uVar27,FUN_1002abb94);
            FUN_10005241c(uVar26,FUN_1002abb94);
            local_80 = 0x200;
            goto LAB_100251e60;
          }
        }
        uVar24 = *(undefined8 *)(lVar32 + 0x180);
        uVar23 = *(undefined8 *)(lVar32 + 0x160);
        uVar27 = *(undefined8 *)(lVar32 + 0x128);
        uVar26 = *(undefined8 *)(lVar32 + 0x100);
        lVar29 = *(long *)(lVar32 + 0x108);
        _swift_release(*(undefined8 *)(lVar32 + 0x1a8));
        (**(code **)(lVar29 + 8))(uVar27,uVar26);
        goto LAB_100251da8;
      }
      uVar24 = *(undefined8 *)(lVar32 + 0x180);
      uVar23 = *(undefined8 *)(lVar32 + 0x160);
      _swift_release(*(undefined8 *)(lVar32 + 0x1a8));
      FUN_10005241c(uVar23,FUN_1002abb94);
      FUN_10005241c(uVar24,FUN_1002abb94);
    }
    FUN_100005808(*(undefined8 *)(lVar32 + 0xf8),&DAT_100fb8660,&DAT_100c38228);
  }
  local_80 = 0;
  SVar33 = (String)ZEXT816(0);
  local_70 = (undefined *)0x0;
LAB_100251e60:
  uVar24 = *(undefined8 *)(lVar32 + 0x178);
  uVar23 = *(undefined8 *)(lVar32 + 0x168);
  uVar7 = *(undefined8 *)(lVar32 + 0x170);
  uVar26 = *(undefined8 *)(lVar32 + 0x158);
  uVar8 = *(undefined8 *)(lVar32 + 0x160);
  uVar27 = *(undefined8 *)(lVar32 + 0x148);
  uVar9 = *(undefined8 *)(lVar32 + 0x150);
  uVar31 = *(undefined8 *)(lVar32 + 0x140);
  uVar28 = *(undefined8 *)(lVar32 + 0x120);
  uVar10 = *(undefined8 *)(lVar32 + 0x128);
  uVar1 = *(undefined8 *)(lVar32 + 0x110);
  uVar11 = *(undefined8 *)(lVar32 + 0x118);
  uVar2 = *(undefined8 *)(lVar32 + 0xf0);
  uVar12 = *(undefined8 *)(lVar32 + 0xf8);
  uVar3 = *(undefined8 *)(lVar32 + 0xe0);
  uVar13 = *(undefined8 *)(lVar32 + 0xe8);
  uVar4 = *(undefined8 *)(lVar32 + 0xd0);
  uVar14 = *(undefined8 *)(lVar32 + 0xd8);
  puVar5 = *(undefined8 **)(lVar32 + 0xb0);
  uVar15 = *(undefined8 *)(lVar32 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar32 + 0x180));
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  *puVar5 = local_80;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(String *)(puVar5 + 3) = SVar33;
  puVar5[5] = local_70;
                    /* WARNING: Could not recover jumptable at 0x000100251f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar20 + 8))();
  return;
}



/* Address: 0x1002520e8 | FUN_1002520e8 */

void FUN_1002520e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  bool bVar17;
  undefined8 uVar18;
  Product PVar19;
  SubscriptionInfo SVar20;
  MainActor *pMVar21;
  UnownedSerialExecutor UVar22;
  char *pcVar23;
  PaymentMode PVar24;
  _StringGuts _Var25;
  undefined *puVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  code *pcVar31;
  long unaff_x20;
  SubscriptionOffer SVar32;
  SubscriptionInfo SVar33;
  long *unaff_x22;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  MainActor *this;
  String SVar40;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined *local_70;
  
  lVar38 = *unaff_x22;
  lVar27 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar38 + 0x1c0));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar38 + 400));
    bVar17 = *(long *)(param_1 + 0x10) == 0;
    if (!bVar17) {
      uVar28 = (ulong)*(byte *)(*(long *)(lVar38 + 0x138) + 0x50);
      FUN_100252c50(param_1 + (uVar28 + 0x20 & (uVar28 ^ 0xffffffffffffffff)),
                    *(undefined8 *)(lVar38 + 0xb8));
    }
    uVar18 = *(undefined8 *)(lVar38 + 0x130);
    lVar30 = *(long *)(lVar38 + 0x138);
    uVar29 = *(undefined8 *)(lVar38 + 0xb8);
    _swift_bridgeObjectRelease(param_1);
    (**(code **)(lVar30 + 0x38))(uVar29,bVar17,1,uVar18);
    FUN_100004594(lVar38 + 0x60);
    (**(code **)(lVar30 + 0x30))(uVar29,1,uVar18);
    if ((int)uVar29 == 1) {
      _swift_release(*(undefined8 *)(lVar38 + 0x1a8));
      goto LAB_100252204;
    }
    SVar33.unknown = *(undefined **)(lVar38 + 0xe0);
    PVar19.unknown = *(undefined **)(lVar38 + 0xb8);
    FUN_1000523d8(PVar19.unknown,*(undefined8 *)(lVar38 + 0x140),FUN_1002abb94);
    StoreKit::Product::_get_subscription(PVar19);
    SVar20 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
    lVar30 = *(long *)(SVar20.unknown + -8);
    (**(code **)(lVar30 + 0x30))(SVar33.unknown,1,SVar20.unknown);
    if ((int)SVar33.unknown == 1) {
      uVar34 = *(undefined8 *)(lVar38 + 0x1a8);
      uVar18 = *(undefined8 *)(lVar38 + 0x100);
      lVar30 = *(long *)(lVar38 + 0x108);
      uVar29 = *(undefined8 *)(lVar38 + 0xf0);
      uVar36 = *(undefined8 *)(lVar38 + 0xe0);
      FUN_10005241c(*(undefined8 *)(lVar38 + 0x140),FUN_1002abb94);
      _swift_release(uVar34);
      FUN_100005808(uVar36,&DAT_100fb8658,&DAT_100c38220);
      (**(code **)(lVar30 + 0x38))(uVar29,1,1,uVar18);
LAB_100252640:
      uVar18 = *(undefined8 *)(lVar38 + 0xf0);
      puVar35 = &DAT_100fb8660;
      puVar26 = &DAT_100c38228;
      goto LAB_100252218;
    }
    uVar18 = *(undefined8 *)(lVar38 + 0xe0);
    StoreKit::Product::SubscriptionInfo::get_promotionalOffers(SVar33);
    (**(code **)(lVar30 + 8))(uVar18,SVar20.unknown);
    uVar28 = *(ulong *)(SVar33.unknown + 0x10);
    if (uVar28 != 0) {
      uVar37 = 0;
      lVar30 = *(long *)(lVar38 + 0x108);
      bVar16 = *(byte *)(lVar30 + 0x50);
      do {
        if (*(ulong *)(SVar33.unknown + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1002527e8);
          (*pcVar31)();
        }
        puVar35 = *(undefined **)(lVar38 + 0x198);
        this = *(MainActor **)(lVar38 + 0x188);
        pMVar21 = *(MainActor **)(lVar38 + 0x110);
        uVar18 = *(undefined8 *)(lVar38 + 0x118);
        uVar29 = *(undefined8 *)(lVar38 + 0x100);
        (**(code **)(lVar30 + 0x10))
                  (uVar18,SVar33.unknown +
                          *(long *)(lVar30 + 0x48) * uVar37 +
                          ((ulong)bVar16 + 0x20 & ((ulong)bVar16 ^ 0xffffffffffffffff)),uVar29);
        pcVar31 = *(code **)(lVar30 + 0x20);
        (*pcVar31)(pMVar21,uVar18,uVar29);
        pMVar21 = Swift::MainActor::get_shared(this,pMVar21);
        UVar22 = Swift::Actor::get_unownedExecutor();
        pcVar23 = (char *)UVar22;
        _Var25.unknown = puVar35;
        _swift_task_isCurrentExecutor();
        if (((ulong)pcVar23 & 1) == 0) {
          pcVar23 = "PasteLicensingAppStore/OfferManager.swift";
          _Var25.unknown = (undefined *)0x29;
          _swift_task_reportUnexpectedExecutor
                    ("PasteLicensingAppStore/OfferManager.swift",0x29,1,0xde,UVar22.unknown,puVar35)
          ;
        }
        StoreKit::Product::SubscriptionOffer::_get_id((SubscriptionOffer)pcVar23);
        if (_Var25.unknown != (undefined *)0x0) {
          if ((pcVar23 == (undefined *)0x65722e726566666f) &&
             (_Var25.unknown == (undefined *)0xee00312e6e696174)) {
            _swift_release(pMVar21);
            _swift_bridgeObjectRelease(SVar33.unknown);
            SVar33.unknown = (undefined *)0xee00312e6e696174;
          }
          else {
            bVar17 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)pcVar23,_Var25,(_StringComparisonResult)0x6f);
            _swift_bridgeObjectRelease(_Var25.unknown);
            _swift_release(pMVar21);
            if (!bVar17) goto LAB_10025245c;
          }
          uVar18 = *(undefined8 *)(lVar38 + 0x110);
          uVar29 = *(undefined8 *)(lVar38 + 0x100);
          uVar34 = *(undefined8 *)(lVar38 + 0xf0);
          _swift_bridgeObjectRelease(SVar33.unknown);
          (*pcVar31)(uVar34,uVar18,uVar29);
          uVar18 = 0;
          goto LAB_1002525e8;
        }
        _swift_release(pMVar21);
LAB_10025245c:
        uVar37 = uVar37 + 1;
        (**(code **)(lVar30 + 8))(*(undefined8 *)(lVar38 + 0x110),*(undefined8 *)(lVar38 + 0x100));
      } while (uVar28 != uVar37);
    }
    _swift_bridgeObjectRelease(SVar33.unknown);
    uVar18 = 1;
LAB_1002525e8:
    uVar29 = *(undefined8 *)(lVar38 + 0x100);
    lVar30 = *(long *)(lVar38 + 0x108);
    uVar34 = *(undefined8 *)(lVar38 + 0xf0);
    (**(code **)(lVar30 + 0x38))(uVar34,uVar18,1,uVar29);
    (**(code **)(lVar30 + 0x30))(uVar34,1,uVar29);
    if ((int)uVar34 == 1) {
      uVar18 = *(undefined8 *)(lVar38 + 0x1a8);
      FUN_10005241c(*(undefined8 *)(lVar38 + 0x140),FUN_1002abb94);
      _swift_release(uVar18);
      goto LAB_100252640;
    }
    SVar32.unknown = *(undefined **)(lVar38 + 0x120);
    uVar18 = *(undefined8 *)(lVar38 + 0xd0);
    local_70 = *(undefined **)(lVar38 + 0xd8);
    uVar29 = *(undefined8 *)(lVar38 + 0xc0);
    lVar30 = *(long *)(lVar38 + 200);
    (**(code **)(*(long *)(lVar38 + 0x108) + 0x20))
              (SVar32.unknown,*(undefined8 *)(lVar38 + 0xf0),*(undefined8 *)(lVar38 + 0x100));
    PVar24 = StoreKit::Product::SubscriptionOffer::get_paymentMode(SVar32);
    StoreKit::Product::SubscriptionOffer::PaymentMode::get_freeTrial(PVar24);
    puVar35 = &DAT_100fb8698;
    FUN_100003a00(&DAT_100fb8698,PTR_typeMetadataAccessor_100ea7fe0,
                  PTR_StoreKit__StoreKit__Product__SubscriptionOffer__PaymentMode_>Swift__Equatable_100ea7fe8
                 );
    uVar34 = uVar29;
    bVar17 = Swift::Equatable::___infix(local_70,uVar18,uVar29,puVar35);
    pcVar31 = *(code **)(lVar30 + 8);
    (*pcVar31)(uVar18,uVar29);
    (*pcVar31)();
    if (!bVar17) {
      StoreKit::Product::get_price((Product)local_70);
      SVar32.unknown = local_70;
      uVar18 = uVar29;
      uVar36 = uVar34;
      StoreKit::Product::SubscriptionOffer::get_price((SubscriptionOffer)local_70);
      FUN_10024e508(local_70,uVar29,uVar34,SVar32.unknown,uVar18,uVar36);
      if (((uint)uVar29 & 0xff) != 1) {
        uVar29 = *(undefined8 *)(lVar38 + 0x1a8);
        uVar34 = *(undefined8 *)(lVar38 + 0x140);
        uVar36 = *(undefined8 *)(lVar38 + 0x120);
        uVar18 = *(undefined8 *)(lVar38 + 0x100);
        lVar30 = *(long *)(lVar38 + 0x108);
        bVar16 = *(byte *)(lVar38 + 0x1c8);
        SVar40 = StoreKit::Product::SubscriptionOffer::get_displayPrice((SubscriptionOffer)local_70)
        ;
        _swift_release(uVar29);
        (**(code **)(lVar30 + 8))(uVar36,uVar18);
        FUN_10005241c(uVar34,FUN_1002abb94);
        local_80 = (ulong)bVar16 | 0x100;
        local_90 = 0xee00312e6e696174;
        local_88 = 0x65722e726566666f;
        goto LAB_100252230;
      }
    }
    uVar29 = *(undefined8 *)(lVar38 + 0x140);
    uVar34 = *(undefined8 *)(lVar38 + 0x120);
    uVar18 = *(undefined8 *)(lVar38 + 0x100);
    lVar30 = *(long *)(lVar38 + 0x108);
    _swift_release(*(undefined8 *)(lVar38 + 0x1a8));
    (**(code **)(lVar30 + 8))(uVar34,uVar18);
    FUN_10005241c(uVar29,FUN_1002abb94);
  }
  else {
    uVar34 = *(undefined8 *)(lVar38 + 0x1a8);
    uVar29 = *(undefined8 *)(lVar38 + 400);
    uVar18 = *(undefined8 *)(lVar38 + 0x130);
    lVar30 = *(long *)(lVar38 + 0x138);
    uVar36 = *(undefined8 *)(lVar38 + 0xb8);
    _swift_errorRelease();
    _swift_release(uVar34);
    _swift_release(uVar29);
    FUN_100004594(lVar38 + 0x60);
    (**(code **)(lVar30 + 0x38))(uVar36,1,1,uVar18);
LAB_100252204:
    uVar18 = *(undefined8 *)(lVar38 + 0xb8);
    puVar35 = &DAT_100fb8618;
    puVar26 = &DAT_100c385c0;
LAB_100252218:
    FUN_100005808(uVar18,puVar35,puVar26);
  }
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  SVar40 = (String)ZEXT816(0);
  local_70 = (undefined *)0x0;
LAB_100252230:
  uVar18 = *(undefined8 *)(lVar38 + 0x178);
  uVar29 = *(undefined8 *)(lVar38 + 0x168);
  uVar7 = *(undefined8 *)(lVar38 + 0x170);
  uVar34 = *(undefined8 *)(lVar38 + 0x158);
  uVar8 = *(undefined8 *)(lVar38 + 0x160);
  uVar36 = *(undefined8 *)(lVar38 + 0x148);
  uVar9 = *(undefined8 *)(lVar38 + 0x150);
  uVar39 = *(undefined8 *)(lVar38 + 0x140);
  uVar1 = *(undefined8 *)(lVar38 + 0x120);
  uVar10 = *(undefined8 *)(lVar38 + 0x128);
  uVar2 = *(undefined8 *)(lVar38 + 0x110);
  uVar11 = *(undefined8 *)(lVar38 + 0x118);
  uVar3 = *(undefined8 *)(lVar38 + 0xf0);
  uVar12 = *(undefined8 *)(lVar38 + 0xf8);
  uVar4 = *(undefined8 *)(lVar38 + 0xe0);
  uVar13 = *(undefined8 *)(lVar38 + 0xe8);
  uVar5 = *(undefined8 *)(lVar38 + 0xd0);
  uVar14 = *(undefined8 *)(lVar38 + 0xd8);
  puVar6 = *(ulong **)(lVar38 + 0xb0);
  uVar15 = *(undefined8 *)(lVar38 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar38 + 0x180));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  *puVar6 = local_80;
  puVar6[1] = local_88;
  puVar6[2] = local_90;
  *(String *)(puVar6 + 3) = SVar40;
  puVar6[5] = (ulong)local_70;
                    /* WARNING: Could not recover jumptable at 0x00010025234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar27 + 8))();
  return;
}



/* Address: 0x1002527e8 | FUN_1002527e8 */

void FUN_1002527e8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  long unaff_x22;
  
  puVar1 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar3 = 0;
  FUN_1002abb94();
  *(long *)(unaff_x22 + 0x90) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0xa8) = pMVar4;
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0xb0) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002528cc,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1002528cc | FUN_1002528cc */

void FUN_1002528cc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar6 = &DAT_100c381e0;
  _swift_getKeyPath();
  puVar7 = &DAT_100fb7cf8;
  FUN_1000037f0(&DAT_100fb7cf8,&DAT_100c37550);
  _swift_initStackObject();
  *(undefined **)(unaff_x22 + 0xb8) = puVar7;
  FUN_1000da6e0(puVar7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar6;
  FUN_1000da768(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar5 = *(long *)(unaff_x22 + 0x80);
  FUN_100004640(unaff_x22 + 0x60,uVar3);
  puVar6 = &DAT_100fb8650;
  FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
  _swift_initStaticObject();
  piVar9 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1002529e4;
                    /* WARNING: Could not recover jumptable at 0x0001002529e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(uVar2,uVar4,puVar6,uVar3,lVar5);
  return;
}



/* Address: 0x1002529e4 | FUN_1002529e4 */

void FUN_1002529e4(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *unaff_x22;
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 200));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar10 + 0xa8));
    bVar1 = *(long *)(param_1 + 0x10) == 0;
    if (!bVar1) {
      uVar4 = (ulong)*(byte *)(*(long *)(lVar10 + 0x98) + 0x50);
      FUN_100252c50(param_1 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),
                    *(undefined8 *)(lVar10 + 0x88));
    }
    uVar6 = *(undefined8 *)(lVar10 + 0x90);
    lVar2 = *(long *)(lVar10 + 0x98);
    uVar5 = *(undefined8 *)(lVar10 + 0x88);
    _swift_bridgeObjectRelease(param_1);
    (**(code **)(lVar2 + 0x38))(uVar5,bVar1,1,uVar6);
    FUN_100004594(lVar10 + 0x60);
    (**(code **)(lVar2 + 0x30))(uVar5,1,uVar6);
    uVar6 = *(undefined8 *)(lVar10 + 0xa8);
    if ((int)uVar5 != 1) {
      uVar5 = *(undefined8 *)(lVar10 + 0xb0);
      FUN_1000523d8(*(undefined8 *)(lVar10 + 0x88),*(undefined8 *)(lVar10 + 0xa0),FUN_1002abb94);
      plVar3 = (long *)0x60;
      _swift_task_alloc();
      *(long **)(lVar10 + 0xd0) = plVar3;
      *plVar3 = lVar8;
      plVar3[1] = (long)FUN_100252bbc;
      FUN_100255f2c(uVar6,uVar5);
      return;
    }
    _swift_release(*(undefined8 *)(lVar10 + 0xc0));
    _swift_release(uVar6);
  }
  else {
    uVar5 = *(undefined8 *)(lVar10 + 0xc0);
    uVar7 = *(undefined8 *)(lVar10 + 0xa8);
    uVar6 = *(undefined8 *)(lVar10 + 0x90);
    lVar2 = *(long *)(lVar10 + 0x98);
    uVar9 = *(undefined8 *)(lVar10 + 0x88);
    _swift_errorRelease();
    _swift_release(uVar7);
    _swift_release(uVar5);
    _swift_release(uVar7);
    FUN_100004594(lVar10 + 0x60);
    (**(code **)(lVar2 + 0x38))(uVar9,1,1,uVar6);
  }
  FUN_100005808(*(undefined8 *)(lVar10 + 0x88),&DAT_100fb8618,&DAT_100c385c0);
  uVar6 = *(undefined8 *)(lVar10 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0xa0));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100252b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))(0);
  return;
}



/* Address: 0x100252bbc | FUN_100252bbc */

void FUN_100252bbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0xc0);
  uVar3 = *(undefined8 *)(lVar5 + 0xa0);
  uVar1 = *(undefined8 *)(lVar5 + 0xa8);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xd0));
  _swift_release(uVar2);
  _swift_release(uVar1);
  FUN_10005241c(uVar3,FUN_1002abb94);
  uVar3 = *(undefined8 *)(lVar5 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xa0));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100252c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1);
  return;
}



/* Address: 0x100252c4c | thunk_FUN_1002425f8 */

void thunk_FUN_1002425f8(void)

{
  FUN_1002425f8();
  return;
}



/* Address: 0x100252c50 | FUN_100252c50 */

undefined8 FUN_100252c50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abb94();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100252c94 | thunk_FUN_10024f4e4 */

void thunk_FUN_10024f4e4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010024f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100252c98 | thunk_FUN_100251278 */

void thunk_FUN_100251278(void)

{
  FUN_100251278();
  return;
}



/* Address: 0x100252c9c | FUN_100252c9c */

bool FUN_100252c9c(void)

{
  int iVar1;
  bool bVar2;
  DateComponents DVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  char *unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb86d8;
  FUN_1000037f0(&DAT_100fb86d8,&DAT_100c38238);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  puVar5 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x12;
  lVar6 = 0;
  FUN_1002abb94();
  iVar1 = *(int *)(lVar6 + 0x14);
  (**(code **)(lVar13 + 0x38))(lVar12,1,1,DVar3.unknown);
  lVar6 = (long)*(int *)(puVar4 + 0x30);
  FUN_1002532cc(unaff_x20 + iVar1,lVar9);
  FUN_1002532cc(lVar12,lVar9 + lVar6);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar7 = lVar9;
  (*pcVar14)(lVar9,1,DVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_100005808(lVar12,&DAT_100fb86e0,&DAT_100c38670);
    lVar6 = lVar9 + lVar6;
    (*pcVar14)(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 1) {
      FUN_100005808(lVar9,&DAT_100fb86e0,&DAT_100c38670);
      return (bool)2;
    }
  }
  else {
    FUN_1002532cc(lVar9,lVar11);
    lVar7 = lVar9 + lVar6;
    (*pcVar14)(lVar7,1,DVar3.unknown);
    if ((int)lVar7 != 1) {
      puVar8 = puVar10;
      (**(code **)(lVar13 + 0x20))(puVar10,lVar9 + lVar6,DVar3.unknown);
      FUN_10025331c();
      bVar2 = Swift::Equatable::___infix(lVar11,puVar10,DVar3.unknown,puVar8);
      pcVar14 = *(code **)(lVar13 + 8);
      (*pcVar14)(puVar10,DVar3.unknown);
      FUN_100005808(lVar12,&DAT_100fb86e0,&DAT_100c38670);
      (*pcVar14)(lVar11,DVar3.unknown);
      FUN_100005808(lVar9,&DAT_100fb86e0,&DAT_100c38670);
      if (bVar2) {
        return (bool)2;
      }
      goto LAB_100252e98;
    }
    FUN_100005808(lVar12,&DAT_100fb86e0,&DAT_100c38670);
    (**(code **)(lVar13 + 8))(lVar11,DVar3.unknown);
  }
  FUN_100005808(lVar9,&DAT_100fb86d8,&DAT_100c38238);
LAB_100252e98:
  return *unaff_x20 != '\0';
}



/* Address: 0x100252f58 | FUN_100252f58 */

undefined1  [16] FUN_100252f58(void)

{
  undefined1 *puVar1;
  Identifier IVar2;
  Component CVar3;
  DateComponents DVar4;
  undefined *puVar5;
  Date DVar6;
  undefined7 extraout_var;
  Calendar CVar8;
  DateComponents DVar9;
  undefined7 extraout_var_00;
  Date DVar10;
  Calendar in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  DateComponents unaff_x20;
  long lVar14;
  long lVar15;
  code *pcVar16;
  Date to;
  Date to_00;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  long local_80;
  long lVar7;
  
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  local_80 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  puVar5 = &DAT_100fb7f78;
  local_88 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  to_00.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = to_00.unknown + -extraout_x12;
  IVar2 = Foundation::Calendar::Identifier::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,IVar2.value);
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)to.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  CVar8 = Foundation::Calendar::typeMetadataAccessor();
  lVar11 = *(long *)(CVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar18 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Identifier_gregorian_Foundation_Calendar_Identifier_Type___>_Foundation_Calendar_Identifier_100ea75b8
             ,lVar7);
  Foundation::Calendar::_init();
  (**(code **)(lVar14 + 8))(lVar13,lVar7);
  Foundation::Date::init();
  Foundation::Calendar::_date(unaff_x20,to,false,in_x3);
  lVar7 = lVar19;
  (**(code **)(lVar15 + 0x30))(lVar19,1,DVar6.unknown);
  if ((int)lVar7 == 1) {
    (**(code **)(lVar15 + 8))(to.unknown,DVar6.unknown);
    (**(code **)(lVar11 + 8))(lVar18,CVar8.unknown);
    FUN_100005808(lVar19,&DAT_100fb7f78,&DAT_100c37ab0);
    DVar9.unknown = (undefined *)0x0;
    DVar10.unknown = &DAT_00000001;
  }
  else {
    (**(code **)(lVar15 + 0x20))(to_00.unknown,lVar19,DVar6.unknown);
    puVar5 = &DAT_100fb86d0;
    FUN_1000037f0(&DAT_100fb86d0,&DAT_100c38230);
    CVar3 = Foundation::Calendar::Component::typeMetadataAccessor();
    lVar7 = CONCAT71(extraout_var_00,CVar3.value);
    lVar13 = *(long *)(lVar7 + -8);
    uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar17 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar17 + *(long *)(lVar13 + 0x48),uVar12 | 7);
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    (**(code **)(lVar13 + 0x68))
              (puVar5 + uVar17,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
               ,lVar7);
    DVar9.unknown = puVar5;
    FUN_1002b4aa4();
    _swift_setDeallocating(puVar5);
    (**(code **)(lVar13 + 8))(puVar5 + uVar17,lVar7);
    _swift_deallocClassInstance(puVar5,0x20,7);
    puVar1 = local_88;
    DVar10.unknown = to.unknown;
    Foundation::Calendar::dateComponents((Set<Component>)DVar9.unknown,to,to_00,in_x3);
    _swift_bridgeObjectRelease();
    Foundation::DateComponents::_get_day(DVar9);
    (**(code **)(local_80 + 8))(puVar1,DVar4.unknown);
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(to_00.unknown,DVar6.unknown);
    (*pcVar16)(to.unknown,DVar6.unknown);
    (**(code **)(lVar11 + 8))(lVar18,CVar8.unknown);
  }
  auVar20._8_8_ = DVar10.unknown;
  auVar20._0_8_ = DVar9.unknown;
  return auVar20;
}



/* Address: 0x1002532cc | FUN_1002532cc */

undefined8 FUN_1002532cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10025331c | FUN_10025331c */

void FUN_10025331c(void)

{
  DateComponents DVar1;
  undefined *puVar2;
  
  if (DAT_100fb86e8 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::DateComponents::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__DateComponents_>Swift__Equatable_100ea6df0;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__DateComponents_>Swift__Equatable_100ea6df0,DVar1.unknown);
  DAT_100fb86e8 = puVar2;
  return;
}



/* Address: 0x100253360 | FUN_100253360 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100253750 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100253360(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  void *pvVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  Text TVar6;
  Text TVar7;
  char **ppcVar8;
  undefined *puVar9;
  Button BVar10;
  char **ppcVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  LocalizedStringResource localized;
  undefined *puVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  String SVar19;
  long alStack_160 [2];
  undefined auStack_150 [8];
  char **local_148;
  char *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  Button local_110;
  Text local_108;
  undefined *local_100;
  undefined *local_f8;
  Text local_f0;
  char *local_e8;
  code *local_e0;
  undefined8 local_d8;
  char *local_d0;
  char *pcStack_c8;
  char *local_b0;
  long lStack_a8;
  char *local_a0;
  char *pcStack_98;
  char *local_90;
  long lStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  local_d8 = param_1;
  local_100 = (undefined *)SwiftUI::Alert::Button::typeMetadataAccessor();
  lVar15 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0.unknown = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = &DAT_100fb86f0;
  local_f8 = puVar13 + -extraout_x12;
  FUN_1000037f0(&DAT_100fb86f0,&DAT_100c38240);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)(puVar13 + -extraout_x12) - extraout_x8_00;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  localized.unknown = (undefined *)(lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pcVar1 = (char *)param_2[4];
  pvVar3 = (void *)param_2[5];
  SVar19.bridgeObject = pvVar3;
  SVar19.str = LVar5.unknown;
  pcVar2 = (code *)param_2[6];
  puVar4 = (undefined *)param_2[7];
  puVar13 = puVar4;
  local_e8 = pcVar1;
  local_e0 = pcVar2;
  if (pvVar3 == (void *)0x0) {
    FUN_1001c2288(localized.unknown);
    SVar19 = (extension_Foundation)::Swift::String::init(localized);
    local_e0 = FUN_100004520;
    puVar13 = (undefined *)0x0;
    local_e8 = SVar19.str;
  }
  pcVar14 = SVar19.bridgeObject;
  lVar17 = param_2[9];
  local_90 = (char *)param_2[8];
  uVar18 = param_2[0xb];
  local_80 = (undefined *)param_2[10];
  lStack_88 = lVar17;
  uStack_78 = uVar18;
  if (lVar17 == 0) {
    pcStack_c8 = (char *)param_2[1];
    local_d0 = (char *)*param_2;
    pcStack_98 = (char *)param_2[1];
    local_a0 = (char *)*param_2;
    FUN_100253870(pcVar1,pvVar3,pcVar2);
    ppcVar8 = &local_d0;
    FUN_10000ca28(ppcVar8,&local_b0);
    FUN_1002538a0();
    BVar10.unknown = PTR___type_metadata_for_Swift_String_100eac208;
    puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    ppcVar11 = ppcVar8;
    TVar6 = SwiftUI::Text::_init();
    local_108.unknown._0_4_ = (int)ppcVar11;
    local_a0 = (char *)param_2[2];
    pcStack_98 = (char *)param_2[3];
    local_110.unknown = puVar4;
    local_f8 = puVar9;
    local_f0 = TVar6;
    _swift_bridgeObjectRetain();
    puVar9 = BVar10.unknown;
    TVar6 = SwiftUI::Text::_init(TVar6.unknown,BVar10.unknown,ppcVar8);
    local_a0 = local_e8;
    local_128 = puVar4;
    local_120 = puVar9;
    local_118 = TVar6.unknown;
    pcStack_98 = pcVar14;
    _swift_bridgeObjectRetain(pcVar14);
    TVar6 = SwiftUI::Text::_init(TVar6.unknown,BVar10.unknown,ppcVar8);
    _swift_retain(puVar13);
    SwiftUI::Alert::Button::_default(TVar6,BVar10);
    _swift_release(puVar13);
    FUN_100016d74(TVar6.unknown,BVar10.unknown,ppcVar8);
    _swift_bridgeObjectRelease(puVar4);
    (**(code **)(lVar15 + 0x38))(lVar16,0,1,local_100);
    *(long *)(localized.unknown + -0x10) = lVar16;
    SwiftUI::Alert::_init(local_f0);
    _swift_release(puVar13);
    _swift_bridgeObjectRelease(pcVar14);
  }
  else {
    pcStack_98 = (char *)param_2[1];
    local_a0 = (char *)*param_2;
    lStack_a8 = param_2[1];
    local_b0 = (char *)*param_2;
    local_140 = local_90;
    local_100 = local_80;
    FUN_100253870(pcVar1,pvVar3,pcVar2);
    FUN_100253914(&local_90,&local_d0);
    ppcVar8 = &local_a0;
    FUN_10000ca28(ppcVar8,&local_d0);
    FUN_1002538a0();
    BVar10.unknown = PTR___type_metadata_for_Swift_String_100eac208;
    puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    ppcVar11 = ppcVar8;
    local_108 = SwiftUI::Text::_init();
    local_118 = (undefined *)CONCAT44(local_118._4_4_,(int)ppcVar11);
    local_d0 = (char *)param_2[2];
    pcStack_c8 = (char *)param_2[3];
    local_120 = puVar4;
    local_110.unknown = puVar9;
    _swift_bridgeObjectRetain();
    puVar9 = BVar10.unknown;
    ppcVar11 = ppcVar8;
    TVar6 = SwiftUI::Text::_init();
    local_d0 = local_e8;
    local_148 = ppcVar11;
    local_138 = puVar4;
    local_130 = puVar9;
    local_128 = TVar6.unknown;
    pcStack_c8 = pcVar14;
    _swift_bridgeObjectRetain(pcVar14);
    ppcVar11 = ppcVar8;
    TVar6 = SwiftUI::Text::_init(TVar6.unknown,BVar10.unknown,ppcVar8);
    local_e8 = pcVar14;
    _swift_retain(puVar13);
    puVar9 = local_f8;
    puVar12 = puVar4;
    SwiftUI::Alert::Button::_default(TVar6,BVar10);
    _swift_release(puVar13);
    FUN_100016d74(TVar6.unknown,BVar10.unknown,ppcVar11);
    _swift_bridgeObjectRelease(puVar4);
    local_d0 = local_140;
    local_b0 = local_140;
    pcStack_c8 = (char *)lVar17;
    lStack_a8 = lVar17;
    _swift_bridgeObjectRetain(lVar17);
    BVar10.unknown = PTR___type_metadata_for_Swift_String_100eac208;
    TVar7 = SwiftUI::Text::_init
                      (TVar6.unknown,PTR___type_metadata_for_Swift_String_100eac208,ppcVar8);
    _swift_retain(uVar18);
    TVar6.unknown = local_f0.unknown;
    SwiftUI::Alert::Button::_default(TVar7,BVar10);
    _swift_release(uVar18);
    FUN_100016d74(TVar7.unknown,BVar10.unknown,ppcVar8);
    _swift_bridgeObjectRelease(puVar12);
    *(undefined **)(localized.unknown + -0x10) = puVar9;
    *(undefined **)(localized.unknown + -8) = TVar6.unknown;
    SwiftUI::Alert::_init(local_108,local_110,(Button)(local_118 & 0xffffffff));
    FUN_10000caac(&local_d0);
    _swift_release(puVar13);
    _swift_bridgeObjectRelease(local_e8);
    _swift_release(uVar18);
  }
  FUN_1002538e0(param_2);
  return;
}



/* Address: 0x100253870 | FUN_100253870 */

void FUN_100253870(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_4);
    return;
  }
  return;
}



/* Address: 0x1002538a0 | FUN_1002538a0 */

void FUN_1002538a0(void)

{
  undefined *puVar1;
  
  if (DAT_100fb86f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fb86f8 = puVar1;
  return;
}



/* Address: 0x1002538e0 | FUN_1002538e0 */

undefined8 FUN_1002538e0(undefined8 param_1)

{
  FUN_1002539e0();
  return param_1;
}



/* Address: 0x100253914 | FUN_100253914 */

undefined8 FUN_100253914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8700;
  FUN_1000037f0(&DAT_100fb8700,&DAT_100c38248);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100253964 | FUN_100253964 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100253964(undefined8 *param_1)

{
  FUN_1001fe1dc();
  DAT_100fb8708 = SwiftUI::Color::init((NSColor *)*param_1);
  return;
}



/* Address: 0x10025398c | FUN_10025398c */

undefined1  [16] FUN_10025398c(void)

{
  return ZEXT816(0x100ec4078);
}



/* Address: 0x10025399c | thunk_FUN_1002539a0 */

void thunk_FUN_1002539a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8718 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38264;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38264,&DAT_100ec4078);
  DAT_100fb8718 = pTVar1;
  return;
}



/* Address: 0x1002539a0 | FUN_1002539a0 */

void FUN_1002539a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8718 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38264;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38264,&DAT_100ec4078);
  DAT_100fb8718 = pTVar1;
  return;
}



/* Address: 0x1002539e0 | FUN_1002539e0 */

void FUN_1002539e0(long param_1)

{
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
  return;
}



/* Address: 0x100253a3c | FUN_100253a3c */

undefined8 * FUN_100253a3c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar1 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    lVar1 = param_2[9];
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    uVar2 = param_2[7];
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    _swift_bridgeObjectRetain(lVar1);
    _swift_retain(uVar2);
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar2 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Address: 0x100253af4 | FUN_100253af4 */

undefined8 * FUN_100253af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  lVar2 = param_1[5];
  if (lVar2 == 0) {
    if (param_2[5] == 0) {
      uVar1 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      uVar1 = param_2[7];
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar1);
    }
  }
  else if (param_2[5] == 0) {
    FUN_100253c90(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar1;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    uVar3 = param_1[7];
    uVar1 = param_2[7];
    uVar4 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    _swift_retain(uVar1);
    _swift_release(uVar3);
  }
  lVar2 = param_1[9];
  if (lVar2 == 0) {
    if (param_2[9] == 0) {
      uVar1 = param_2[8];
      uVar4 = param_2[0xb];
      uVar3 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[0xb] = uVar4;
      param_1[10] = uVar3;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar1 = param_2[0xb];
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar1);
    }
  }
  else if (param_2[9] == 0) {
    FUN_100253c90(param_1 + 8);
    uVar4 = param_2[8];
    uVar3 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar1;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    uVar3 = param_1[0xb];
    uVar1 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    _swift_retain(uVar1);
    _swift_release(uVar3);
  }
  return param_1;
}



/* Address: 0x100253c90 | FUN_100253c90 */

long FUN_100253c90(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Address: 0x100253cc0 | FUN_100253cc0 */

void FUN_100253cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x100253cdc | FUN_100253cdc */

undefined8 * FUN_100253cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[5] != 0) {
    lVar3 = param_2[5];
    if (lVar3 != 0) {
      param_1[4] = param_2[4];
      param_1[5] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[7];
      uVar1 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar1;
      _swift_release(uVar2);
      lVar3 = param_1[9];
      goto joined_r0x000100253d5c;
    }
    FUN_100253c90(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  lVar3 = param_1[9];
joined_r0x000100253d5c:
  if (lVar3 != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[0xb];
      uVar1 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      _swift_release(uVar2);
      return param_1;
    }
    FUN_100253c90(param_1 + 8);
  }
  uVar2 = param_2[8];
  uVar4 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar1;
  return param_1;
}



/* Address: 0x100253da8 | FUN_100253da8 */

undefined1  [16] FUN_100253da8(void)

{
  return ZEXT816(0x100ec4128);
}



/* Address: 0x100253db8 | FUN_100253db8 */

void FUN_100253db8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100253de0 | FUN_100253de0 */

undefined8 * FUN_100253de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100253e28 | FUN_100253e28 */

undefined8 * FUN_100253e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100253e90 | FUN_100253e90 */

void FUN_100253e90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x100253e9c | FUN_100253e9c */

undefined8 * FUN_100253e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100253ee8 | FUN_100253ee8 */

undefined1  [16] FUN_100253ee8(void)

{
  return ZEXT816(0x100ec41b0);
}



/* Address: 0x100253ef8 | FUN_100253ef8 */

char * FUN_100253ef8(undefined8 param_1)

{
  StoreKitError SVar1;
  int iVar2;
  LocalizedStringResource LVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_80 [8];
  undefined1 local_78 [24];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  long lVar4;
  undefined8 uVar7;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar1 = StoreKit::StoreKitError::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,SVar1.value);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)LVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_58 = param_1;
  _swift_errorRetain(param_1);
  puVar5 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  lVar6 = lVar9;
  _swift_dynamicCast(lVar9,&local_58,puVar5,lVar4,0);
  if ((int)lVar6 != 0) {
    lVar6 = lVar9;
    (**(code **)(lVar10 + 0x58))(lVar9,lVar4);
    if ((int)lVar6 ==
        *(int *)
         PTR___enum_case_for_StoreKit_StoreKitError_networkError_StoreKit_StoreKitError_Type___>__Foundation_URLError___>_StoreKit_StoreKitError_100ea7cd0
       ) {
      (**(code **)(lVar10 + 8))(lVar9,lVar4);
      _swift_errorRelease(local_58);
      return (char *)0xd000000000000021;
    }
    (**(code **)(lVar10 + 8))(lVar9,lVar4);
  }
  _swift_errorRelease(local_58);
  uVar7 = param_1;
  local_58 = param_1;
  _swift_errorRetain();
  iVar2 = (int)uVar7;
  _swift_dynamicCast();
  if (iVar2 == 0) {
    _swift_errorRelease(local_58);
    FUN_1001c9cd4(LVar3.unknown);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar3);
    pcVar8 = SVar11.str;
    _swift_getErrorValue(param_1,auStack_60,local_78);
    (extension_Foundation)::Swift::Error::get_localizedDescription();
  }
  else {
    FUN_1001c9cd4(LVar3.unknown);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar3);
    pcVar8 = SVar11.str;
    FUN_1001c9e54(LVar3.unknown);
    (extension_Foundation)::Swift::String::init(LVar3);
    _swift_errorRelease(local_58);
  }
  return pcVar8;
}



/* Address: 0x10025411c | FUN_10025411c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025411c(String *param_1,long param_2,char *param_3,void *param_4)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long extraout_x8;
  char *pcVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 local_80 [24];
  undefined1 auStack_68 [8];
  long local_60;
  long local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = local_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_58 = param_2;
  _swift_errorRetain(param_2);
  puVar2 = &DAT_100fb8200;
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  uVar3 = 0;
  FUN_100242f6c(0);
  plVar4 = &local_60;
  _swift_dynamicCast(plVar4,&local_58,puVar2,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    local_58 = local_60;
    FUN_10025429c();
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
    if (local_60 == 0) {
      SVar6 = (String)(ZEXT816(0x8000000100d9f420) << 0x40);
      pcVar5 = (char *)0xd000000000000069;
      goto LAB_10025421c;
    }
  }
  _swift_getErrorValue(param_2,auStack_68,local_80);
  SVar6 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pcVar5 = SVar6.str;
LAB_10025421c:
  FUN_1001ca2d4(LVar1.unknown,SVar6.str);
  SVar7 = (extension_Foundation)::Swift::String::init(LVar1);
  FUN_1001c2288(LVar1.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(LVar1);
  *param_1 = SVar7;
  param_1[1].str = pcVar5;
  param_1[1].bridgeObject = SVar6.bridgeObject;
  param_1[2] = SVar8;
  param_1[3].str = param_3;
  param_1[3].bridgeObject = param_4;
  param_1[4].bridgeObject = (void *)0x0;
  param_1[4].str = (char *)0x0;
  param_1[5].bridgeObject = (void *)0x0;
  param_1[5].str = (char *)0x0;
  _swift_retain(param_4);
  return;
}



/* Address: 0x10025429c | FUN_10025429c */

void FUN_10025429c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fb7e40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100242f6c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c377f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c377f0,uVar1);
  DAT_100fb7e40 = pTVar2;
  return;
}



/* Address: 0x1002542e0 | FUN_1002542e0 */

void FUN_1002542e0(void)

{
  return;
}



/* Address: 0x1002542e4 | FUN_1002542e4 */

undefined1  [16] FUN_1002542e4(void)

{
  return ZEXT816(0x100ec4248);
}



/* Address: 0x1002542f4 | thunk_FUN_1002542f8 */

void thunk_FUN_1002542f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8720 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c383bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c383bc,&DAT_100ec4248);
  DAT_100fb8720 = pTVar1;
  return;
}



/* Address: 0x1002542f8 | FUN_1002542f8 */

void FUN_1002542f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8720 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c383bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c383bc,&DAT_100ec4248);
  DAT_100fb8720 = pTVar1;
  return;
}



/* Address: 0x100254338 | FUN_100254338 */

undefined1  [16] FUN_100254338(void)

{
  return ZEXT816(0x100ec4358);
}



/* Address: 0x100254348 | FUN_100254348 */

void FUN_100254348(byte param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  String SVar6;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  puVar2 = (undefined1 *)0x8000000100d9f490;
  pcVar3 = (char *)0xd000000000000011;
  if (param_1 != 4) {
    puVar2 = (undefined1 *)0xeb00000000656369;
    pcVar3 = (char *)0x6f684369746c756d;
  }
  HVar5.unknown = (undefined1 *)0xec0000006563696f;
  pcVar4 = (char *)0x6843656c676e6973;
  if (param_1 != 3) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar3;
  }
  pcVar3 = (char *)0x6972466b63616c62;
  if (param_1 != 1) {
    pcVar3 = (char *)0x6e6f4d7265627963;
  }
  pcVar1 = (char *)0x746c7561666564;
  if (param_1 != 0) {
    pcVar1 = pcVar3;
  }
  puVar2 = &DAT_e700000000000000;
  if (param_1 != 0) {
    puVar2 = (undefined1 *)0xeb00000000796164;
  }
  if (param_1 < 3) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100254470 | FUN_100254470 */

void FUN_100254470(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  Hasher HVar7;
  String SVar8;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  pcVar1 = "verified";
  pcVar4 = &DAT_d000000000000032;
  if (param_1 != 4) {
    pcVar1 = "onBarViewModel.swift";
    pcVar4 = (char *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  pcVar5 = &DAT_d000000000000032;
  if (param_1 != 3) {
    pcVar3 = pcVar1;
    pcVar5 = pcVar4;
  }
  pcVar1 = (char *)0xd00000000000002b;
  pcVar4 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (param_1 != 1) {
    pcVar1 = (char *)0xd000000000000031;
    pcVar4 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  pcVar6 = (char *)0xd00000000000002c;
  if (param_1 != 0) {
    pcVar2 = pcVar4 + 0x20;
    pcVar6 = pcVar1;
  }
  if (param_1 < 3) {
    pcVar3 = pcVar2;
    pcVar5 = pcVar6;
  }
  SVar8.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
  SVar8.str = pcVar5;
  Swift::String::hash((Hasher)auStack_68,SVar8);
  HVar7.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar7);
  return;
}


