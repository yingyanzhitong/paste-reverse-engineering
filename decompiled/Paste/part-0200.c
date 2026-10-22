/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100247fac | FUN_100247fac */

undefined8 FUN_100247fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100247ffc | FUN_100247ffc */

bool FUN_100247ffc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  puVar1 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1001a94ec(puVar4,1);
  lVar2 = 0;
  FUN_10019fee0();
  puVar3 = puVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar4,1,lVar2);
  FUN_100005808(puVar4,&DAT_100fb81c0,&DAT_100c37cc0);
  return (int)puVar3 != 1;
}



/* Address: 0x1002480b0 | FUN_1002480b0 */

undefined8 FUN_1002480b0(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1002480e4();
  return unaff_x20;
}



/* Address: 0x1002480e4 | FUN_1002480e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002480e4(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  undefined8 uVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  code *pcVar10;
  
  puVar1 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  IVar2 = 0;
  FUN_100248454();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _objc_allocWithZone();
  IVar2 = objc_stub::init(IVar2);
  *(ID *)(unaff_x20 + 0x28) = IVar2;
  FUN_1000037f0(&DAT_100fb81d0,&DAT_100c374b0);
  _swift_allocObject();
  uVar3 = 0xd000000000000016;
  FUN_1001a8524(0x4132750000000000,0xd000000000000016,0x8000000100d9ecb0);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  puVar1 = &DAT_100c37cc8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb7cf0;
  FUN_1000037f0(&DAT_100fb7cf0,&DAT_100c3ca30);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar4);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  puVar1 = &DAT_100c37d00;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb81e0;
  FUN_1000037f0(&DAT_100fb81e0,&DAT_100c37520);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar4);
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  puVar1 = &DAT_100c37d38;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb7cf8;
  FUN_1000037f0(&DAT_100fb7cf8,&DAT_100c37550);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar4);
  *(undefined **)(unaff_x20 + 0x48) = puVar1;
  puVar1 = &DAT_100c37d68;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb81f0;
  FUN_1000037f0(&DAT_100fb81f0,&DAT_100c37580);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  IVar2 = SKPaymentQueue::defaultQueue((ID)&_OBJC_CLASS___SKPaymentQueue);
  SKPaymentQueue::addTransactionObserver_(IVar2,uVar3);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(TVar5.unknown + -8) + 0x38);
  (*pcVar10)(puVar9,1,1,TVar5.unknown);
  puVar1 = &DAT_100ec3cc8;
  _swift_allocObject(&DAT_100ec3cc8,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar4 = &DAT_100ec3cf0;
  _swift_allocObject(&DAT_100ec3cf0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  uVar3 = 0;
  FUN_10024d6d8(0,0,puVar9,&DAT_100c37da0,puVar4);
  FUN_100005808(puVar9,&DAT_100fb81c8,&DAT_100c38060);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  _swift_release(uVar6);
  (*pcVar10)(puVar9,1,1,TVar5.unknown);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec3d18;
  _swift_allocObject(&DAT_100ec3d18,0x20,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar7;
  *(undefined8 **)(puVar1 + 0x18) = puVar8;
  FUN_10024cc3c(0,0,puVar9,&DAT_100c37db0,puVar1);
  _swift_release();
  return;
}



/* Address: 0x100248454 | FUN_100248454 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100248454(void)

{
  return ZEXT816(0x100f97590);
}



/* Address: 0x100248474 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x100248478 | thunk_FUN_10019fcd4 */

void thunk_FUN_10019fcd4(void)

{
  thunk_FUN_10019fcd4();
  return;
}



/* Address: 0x10024847c | thunk_FUN_1002425f8 */

void thunk_FUN_1002425f8(void)

{
  FUN_1002425f8();
  return;
}



/* Address: 0x100248480 | thunk_FUN_100242674 */

void thunk_FUN_100242674(void)

{
  FUN_100242674();
  return;
}



/* Address: 0x100248484 | FUN_100248484 */

void FUN_100248484(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002484a8 | FUN_1002484a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002484a8(void)

{
  Task TVar1;
  long unaff_x20;
  
  TVar1.unknown = *(undefined **)(unaff_x20 + 0x20);
  if (TVar1.unknown != (undefined *)0x0) {
    _swift_retain(TVar1.unknown);
    FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
    Swift::Task::cancel(TVar1);
    _swift_release(TVar1.unknown);
  }
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100248550 | FUN_100248550 */

void FUN_100248550(void)

{
  FUN_1002484a8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100248570 | FUN_100248570 */

void FUN_100248570(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ISO8601FormatStyle IVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  *(ulong *)(unaff_x22 + 0x1c8) = param_3;
  *(long *)(unaff_x22 + 0x1d0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
  puVar2 = &DAT_100fb8208;
  FUN_1000037f0(&DAT_100fb8208,&DAT_100c37dc8);
  *(undefined **)(unaff_x22 + 0x1d8) = puVar2;
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar4;
  puVar2 = &DAT_100fb8210;
  FUN_1000037f0(&DAT_100fb8210,&DAT_100c37dd0);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar4;
  lVar5 = 0;
  FUN_1002b86ec();
  *(long *)(unaff_x22 + 0x208) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar4;
  IVar6 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x228) = IVar6.unknown;
  lVar5 = *(long *)(IVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x230) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar4;
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar4;
  puVar2 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar4;
  lVar5 = 0;
  FUN_10019fee0();
  *(long *)(unaff_x22 + 0x268) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x270) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar7 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x278) = uVar7;
  uVar7 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar7;
  uVar7 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x288) = uVar7;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x290) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar5 + 0x30))
            (0x65736e6563696c,&DAT_e700000000000000,0xd00000000000002d,0x8000000100d9f020,uVar1,
             lVar5);
  FUN_100004594(unaff_x22 + 0x10);
  plVar8 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2a0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100248804;
  FUN_10024abd4(plVar8,uVar4,param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x100248804 | FUN_100248804 */

/* WARNING: Removing unreachable block (ram,0x000100248ad0) */

void FUN_100248804(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  Date DVar4;
  char *pcVar5;
  char *pcVar6;
  _StringGuts _Var7;
  void *in_x3;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long *unaff_x22;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  String *pSVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  
  lVar31 = *unaff_x22;
  lVar17 = *(long *)(lVar31 + 0x270);
  uVar15 = *(undefined8 *)(lVar31 + 0x268);
  uVar12 = *(undefined8 *)(lVar31 + 0x260);
  lVar21 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar31 + 0x2a0));
  pcVar9 = *(code **)(lVar17 + 0x30);
  *(code **)(lVar31 + 0x2a8) = pcVar9;
  (*pcVar9)(uVar12,1,uVar15);
  if ((int)uVar12 != 1) {
    pSVar25 = *(String **)(lVar31 + 0x290);
    lVar19 = *(long *)(lVar31 + 0x268);
    uVar12 = *(undefined8 *)(lVar31 + 0x248);
    pcVar9 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(lVar31 + 0x260),pSVar25);
    FUN_1000da768(lVar31 + 0x150);
    puVar1 = *(undefined **)(lVar31 + 0x168);
    lVar17 = *(long *)(lVar31 + 0x170);
    _Var7.unknown = puVar1;
    FUN_100004640(lVar31 + 0x150);
    Swift::_StringGuts::grow(0x3d,_Var7);
    SVar33.bridgeObject = (void *)0x8000000100d9f220;
    SVar33.str = (char *)0xd00000000000002f;
    SVar36.bridgeObject = in_x3;
    SVar36.str = (char *)pcVar9;
    Swift::String::append(SVar33,SVar36);
    SVar37.bridgeObject = in_x3;
    SVar37.str = (char *)pcVar9;
    Swift::String::append(*pSVar25,SVar37);
    SVar34.bridgeObject = (void *)0xea00000000002073;
    SVar34.str = (char *)0x657269707865202c;
    SVar38.bridgeObject = in_x3;
    SVar38.str = (char *)pcVar9;
    Swift::String::append(SVar34,SVar38);
    puVar8 = &DAT_100c37ab0;
    FUN_100011090((long)&pSVar25->str + (long)*(int *)(lVar19 + 0x18),uVar12,&DAT_100fb7f78);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar19 = *(long *)(DVar4.unknown + -8);
    (**(code **)(lVar19 + 0x30))(uVar12,1,DVar4.unknown);
    uVar15 = *(undefined8 *)(lVar31 + 0x248);
    if ((int)uVar12 == 1) {
      pcVar6 = &DAT_100c37ab0;
      FUN_100005808(uVar15,&DAT_100fb7f78);
      puVar23 = &DAT_e400000000000000;
      pcVar5 = (char *)0x656e6f6e;
    }
    else {
      uVar12 = *(undefined8 *)(lVar31 + 0x238);
      lVar29 = *(long *)(lVar31 + 0x230);
      uVar27 = *(undefined8 *)(lVar31 + 0x228);
      (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
      pcVar6 = &DAT_100fb8228;
      FUN_100003a00(&DAT_100fb8228,PTR_typeMetadataAccessor_100ea73f0,
                    PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
                   );
      Foundation::Date::_formatted(lVar31 + 0x1a0,uVar12,uVar27);
      (**(code **)(lVar29 + 8))(uVar12,uVar27);
      (**(code **)(lVar19 + 8))(uVar15,DVar4.unknown);
      pcVar5 = *(char **)(lVar31 + 0x1a0);
      puVar23 = *(undefined1 **)(lVar31 + 0x1a8);
    }
    uVar12 = *(undefined8 *)(lVar31 + 0x290);
    SVar35.bridgeObject = puVar23;
    SVar35.str = pcVar5;
    SVar39.bridgeObject = puVar8;
    SVar39.str = pcVar6;
    Swift::String::append(SVar35,SVar39);
    _swift_bridgeObjectRelease(puVar23);
    (**(code **)(lVar17 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar17);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(lVar31 + 0x150);
    FUN_1001a8654(uVar12);
    lVar17 = *(long *)(lVar31 + 0x270);
    uVar15 = *(undefined8 *)(lVar31 + 0x268);
    uVar12 = *(undefined8 *)(lVar31 + 0x1b8);
    FUN_1000523d8(*(undefined8 *)(lVar31 + 0x290),uVar12,FUN_10019fee0);
    (**(code **)(lVar17 + 0x38))(uVar12,0,2,uVar15);
    uVar22 = *(undefined8 *)(lVar31 + 0x288);
    uVar24 = *(undefined8 *)(lVar31 + 0x280);
    uVar26 = *(undefined8 *)(lVar31 + 0x278);
    uVar28 = *(undefined8 *)(lVar31 + 0x260);
    uVar30 = *(undefined8 *)(lVar31 + 600);
    uVar18 = *(undefined8 *)(lVar31 + 0x250);
    uVar16 = *(undefined8 *)(lVar31 + 0x248);
    uVar20 = *(undefined8 *)(lVar31 + 0x240);
    uVar14 = *(undefined8 *)(lVar31 + 0x238);
    uVar11 = *(undefined8 *)(lVar31 + 0x220);
    uVar10 = *(undefined8 *)(lVar31 + 0x218);
    uVar12 = *(undefined8 *)(lVar31 + 0x1f8);
    uVar27 = *(undefined8 *)(lVar31 + 0x200);
    uVar15 = *(undefined8 *)(lVar31 + 0x1e8);
    uVar2 = *(undefined8 *)(lVar31 + 0x1f0);
    uVar32 = *(undefined8 *)(lVar31 + 0x1e0);
    _swift_task_dealloc(*(undefined8 *)(lVar31 + 0x290));
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar32);
                    /* WARNING: Could not recover jumptable at 0x000100248c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar21 + 8))();
    return;
  }
  uVar13 = *(ulong *)(lVar31 + 0x1c8);
  FUN_100005808(*(undefined8 *)(lVar31 + 0x260),&DAT_100fb81c0,&DAT_100c37cc0);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(lVar31 + 0x2b0) = plVar3;
  *plVar3 = lVar21;
  plVar3[1] = (long)FUN_100248c04;
  FUN_10024bcc8(*(undefined8 *)(lVar31 + 600),*(undefined8 *)(lVar31 + 0x1c0),
                uVar13 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x100248c04 | FUN_100248c04 */

/* WARNING: Removing unreachable block (ram,0x000100249580) */
/* WARNING: Removing unreachable block (ram,0x0001002492cc) */
/* WARNING: Removing unreachable block (ram,0x000100249740) */
/* WARNING: Removing unreachable block (ram,0x000100248ef0) */

void FUN_100248c04(void)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Task TVar5;
  ulong uVar6;
  long *plVar7;
  Date DVar8;
  char *pcVar9;
  char *pcVar10;
  _StringGuts _Var11;
  void *in_x3;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long *unaff_x22;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 *puVar33;
  undefined8 uVar34;
  String *pSVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
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
  
  lVar37 = *unaff_x22;
  pcVar23 = *(code **)(lVar37 + 0x2a8);
  uVar19 = *(undefined8 *)(lVar37 + 0x268);
  uVar15 = *(undefined8 *)(lVar37 + 600);
  lVar28 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar37 + 0x2b0));
  (*pcVar23)(uVar15,1,uVar19);
  if ((int)uVar15 == 1) {
    FUN_100005808(*(undefined8 *)(lVar37 + 600),&DAT_100fb81c0,&DAT_100c37cc0);
    FUN_1000da768(lVar37 + 0x1b0);
    lVar20 = *(long *)(lVar37 + 0x1b0);
    *(long *)(lVar37 + 0x2b8) = lVar20;
    lVar21 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock;
    *(long *)(lVar37 + 0x2c0) = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock;
    IVar16 = *(ID *)(lVar20 + lVar21);
    objc_stub::lock(IVar16);
    lVar27 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing;
    *(long *)(lVar37 + 0x2c8) =
         _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshing;
    if (*(char *)(lVar20 + lVar27) != '\x01') {
      uVar6 = *(ulong *)(lVar37 + 0x1c8);
      *(undefined1 *)(lVar20 + lVar27) = 1;
      *(undefined1 *)
       (lVar20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 0;
      objc_stub::unlock(IVar16);
      plVar7 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(lVar37 + 0x2d8) = plVar7;
      *plVar7 = lVar28;
      plVar7[1] = (long)FUN_10024985c;
      FUN_1002b9c28(plVar7,*(undefined8 *)(lVar37 + 0x220),*(undefined8 *)(lVar37 + 0x1c0),
                    uVar6 & 0xcfffffffffffffff);
      return;
    }
    *(undefined1 *)
     (lVar20 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::isRefreshPending) = 1;
    objc_stub::unlock(IVar16);
    IVar16 = *(ID *)(lVar20 + lVar21);
    *(ID *)(lVar37 + 0x2d0) = IVar16;
    objc_stub::lock(IVar16);
    bVar2 = *(byte *)(lVar20 + lVar27);
    TVar5.unknown = (undefined *)objc_stub::unlock(IVar16);
    if (((bVar2 & 1) != 0) &&
       (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar3)) {
      plVar7 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
      _swift_task_alloc();
      *(long **)(lVar37 + 0x2e0) = plVar7;
      *plVar7 = lVar28;
      plVar7[1] = (long)FUN_10024a118;
      (extension_Swift)::Swift::Task::_sleep(1000000);
      return;
    }
    lVar21 = *(long *)(lVar37 + 0x2b8);
    lVar20 = *(long *)(lVar37 + 0x210);
    uVar17 = *(undefined8 *)(lVar37 + 0x208);
    uVar15 = *(undefined8 *)(lVar37 + 0x1f8);
    uVar19 = *(undefined8 *)(lVar37 + 0x200);
    IVar16 = *(ID *)(lVar21 + *(long *)(lVar37 + 0x2c0));
    objc_stub::lock(IVar16);
    lVar27 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult;
    _swift_beginAccess(lVar21 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult,
                       lVar37 + 0x178,0,0);
    puVar12 = &DAT_100c37dd0;
    FUN_100011090(lVar21 + lVar27,uVar19,&DAT_100fb8210,&DAT_100c37dd0);
    objc_stub::unlock(IVar16);
    _swift_release(lVar21);
    FUN_10019ffdc(uVar19,uVar15,&DAT_100fb8210);
    pcVar23 = *(code **)(lVar20 + 0x30);
    (*pcVar23)(uVar15,1,uVar17);
    uVar19 = *(undefined8 *)(lVar37 + 0x220);
    if ((int)uVar15 == 1) {
      uVar17 = *(undefined8 *)(lVar37 + 0x208);
      uVar15 = *(undefined8 *)(lVar37 + 0x1f8);
      puVar12 = &DAT_100fb8220;
      FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
      (**(code **)(*(long *)(puVar12 + -8) + 0x38))(uVar19,1,1);
      (*pcVar23)(uVar15,1,uVar17);
      if ((int)uVar15 != 1) {
        FUN_100005808(*(undefined8 *)(lVar37 + 0x1f8),&DAT_100fb8210,&DAT_100c37dd0);
      }
    }
    else {
      FUN_1000523d8(*(undefined8 *)(lVar37 + 0x1f8),uVar19,FUN_1002b86ec);
    }
    pcVar23 = *(code **)(lVar37 + 0x2a8);
    uVar19 = *(undefined8 *)(lVar37 + 0x268);
    uVar15 = *(undefined8 *)(lVar37 + 0x250);
    FUN_10024c324(uVar15,*(undefined8 *)(lVar37 + 0x220));
    (*pcVar23)(uVar15,1,uVar19);
    if ((int)uVar15 == 1) {
      uVar6 = *(ulong *)(lVar37 + 0x250);
      FUN_100005808(uVar6,&DAT_100fb81c0,&DAT_100c37cc0);
      FUN_10024c58c();
      if ((uVar6 & 1) != 0) {
        uVar17 = *(undefined8 *)(lVar37 + 0x1f0);
        uVar19 = *(undefined8 *)(lVar37 + 0x1d8);
        FUN_1000da768(lVar37 + 0xd8);
        uVar15 = *(undefined8 *)(lVar37 + 0xf0);
        lVar27 = *(long *)(lVar37 + 0xf8);
        FUN_100004640(lVar37 + 0xd8,uVar15);
        puVar12 = (undefined *)0x8000000100d9f140;
        (**(code **)(lVar27 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000045,0x8000000100d9f140,
                   uVar15,lVar27);
        FUN_100004594(lVar37 + 0xd8);
        FUN_1001a8a24(uVar17);
        _swift_getEnumCaseMultiPayload(uVar17,uVar19);
        if ((int)uVar17 != 3) {
          if ((int)uVar17 != 0) {
LAB_100249574:
            FUN_1001a962c();
            lVar27 = *(long *)(lVar37 + 0x270);
            uVar19 = *(undefined8 *)(lVar37 + 0x268);
            uVar15 = *(undefined8 *)(lVar37 + 0x1f0);
            uVar17 = *(undefined8 *)(lVar37 + 0x1b8);
            FUN_10005241c(*(undefined8 *)(lVar37 + 0x220),FUN_1002b86ec);
            (**(code **)(lVar27 + 0x38))(uVar17,1,2,uVar19);
            FUN_100005808(uVar15,&DAT_100fb8208,&DAT_100c37dc8);
            goto LAB_100248f30;
          }
          puVar25 = *(undefined8 **)(lVar37 + 0x278);
          uVar15 = *(undefined8 *)(lVar37 + 0x1e8);
          FUN_100011090(*(undefined8 *)(lVar37 + 0x1f0),uVar15,&DAT_100fb8208,&DAT_100c37dc8);
          FUN_1000523d8(uVar15,puVar25,FUN_10019fee0);
          puVar12 = (undefined *)0x8000000100d8f1e0;
          uVar15 = *(undefined8 *)(lVar37 + 0x278);
          if (((undefined *)*puVar25 == (undefined *)0xd00000000000002d) &&
             ((undefined *)puVar25[1] == (undefined *)0x8000000100d8f1e0)) {
            FUN_10005241c(uVar15,FUN_10019fee0);
          }
          else {
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar25,(undefined *)puVar25[1],
                               (_StringComparisonResult)0x2d);
            FUN_10005241c(uVar15,FUN_10019fee0);
            if (!bVar3) goto LAB_100249574;
          }
        }
        FUN_100005808(*(undefined8 *)(lVar37 + 0x1f0),&DAT_100fb8208,&DAT_100c37dc8);
      }
      uVar15 = *(undefined8 *)(lVar37 + 0x1d8);
      uVar19 = *(undefined8 *)(lVar37 + 0x1e0);
      FUN_1001a8a24(uVar19);
      _swift_getEnumCaseMultiPayload(uVar19,uVar15);
      iVar4 = (int)uVar19;
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          lVar21 = *(long *)(lVar37 + 0x268);
          uVar15 = *(undefined8 *)(lVar37 + 0x240);
          pSVar35 = *(String **)(lVar37 + 0x1b8);
          pcVar23 = FUN_10019fee0;
          FUN_1000523d8(*(undefined8 *)(lVar37 + 0x1e0),pSVar35);
          FUN_1000da768(lVar37 + 0xb0);
          puVar1 = *(undefined **)(lVar37 + 200);
          lVar27 = *(long *)(lVar37 + 0xd0);
          _Var11.unknown = puVar1;
          FUN_100004640();
          Swift::_StringGuts::grow(0x3d,_Var11);
          SVar41.bridgeObject = (void *)0x8000000100d9f110;
          SVar41.str = (char *)0xd00000000000002f;
          SVar48.bridgeObject = puVar12;
          SVar48.str = (char *)pcVar23;
          Swift::String::append(SVar41,SVar48);
          SVar49.bridgeObject = puVar12;
          SVar49.str = (char *)pcVar23;
          Swift::String::append(*pSVar35,SVar49);
          SVar42.bridgeObject = (void *)0xea00000000002073;
          SVar42.str = (char *)0x657269707865202c;
          SVar50.bridgeObject = puVar12;
          SVar50.str = (char *)pcVar23;
          Swift::String::append(SVar42,SVar50);
          puVar12 = &DAT_100c37ab0;
          FUN_100011090((long)&pSVar35->str + (long)*(int *)(lVar21 + 0x18),uVar15,&DAT_100fb7f78);
          DVar8 = Foundation::Date::typeMetadataAccessor();
          lVar21 = *(long *)(DVar8.unknown + -8);
          (**(code **)(lVar21 + 0x30))(uVar15,1,DVar8.unknown);
          uVar19 = *(undefined8 *)(lVar37 + 0x240);
          if ((int)uVar15 == 1) {
            pcVar10 = &DAT_100c37ab0;
            FUN_100005808(uVar19,&DAT_100fb7f78);
            puVar33 = &DAT_e400000000000000;
            pcVar9 = (char *)0x656e6f6e;
          }
          else {
            uVar15 = *(undefined8 *)(lVar37 + 0x238);
            lVar20 = *(long *)(lVar37 + 0x230);
            uVar17 = *(undefined8 *)(lVar37 + 0x228);
            (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
            pcVar10 = &DAT_100fb8228;
            FUN_100003a00(&DAT_100fb8228,PTR_typeMetadataAccessor_100ea73f0,
                          PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
                         );
            Foundation::Date::_formatted(lVar37 + 400,uVar15,uVar17);
            (**(code **)(lVar20 + 8))(uVar15,uVar17);
            (**(code **)(lVar21 + 8))(uVar19,DVar8.unknown);
            pcVar9 = *(char **)(lVar37 + 400);
            puVar33 = *(undefined1 **)(lVar37 + 0x198);
          }
          lVar21 = *(long *)(lVar37 + 0x270);
          uVar17 = *(undefined8 *)(lVar37 + 0x268);
          uVar19 = *(undefined8 *)(lVar37 + 0x220);
          uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
          SVar43.bridgeObject = puVar33;
          SVar43.str = pcVar9;
          SVar51.bridgeObject = puVar12;
          SVar51.str = pcVar10;
          Swift::String::append(SVar43,SVar51);
          _swift_bridgeObjectRelease(puVar33);
          (**(code **)(lVar27 + 0x30))
                    (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar27);
          _swift_bridgeObjectRelease(0xe000000000000000);
          FUN_10005241c(uVar19,FUN_1002b86ec);
          FUN_100004594(lVar37 + 0xb0);
          pcVar23 = *(code **)(lVar21 + 0x38);
          uVar19 = 0;
        }
        else {
          FUN_100005808(*(undefined8 *)(lVar37 + 0x1e0),&DAT_100fb8208,&DAT_100c37dc8);
LAB_1002495f4:
          uVar19 = *(undefined8 *)(lVar37 + 0x218);
          FUN_1000c495c(*(undefined8 *)(lVar37 + 0x220),uVar19,FUN_1002b86ec);
          puVar12 = &DAT_100fb8220;
          FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
          uVar15 = uVar19;
          (**(code **)(*(long *)(puVar12 + -8) + 0x30))(uVar19,1,puVar12);
          FUN_10005241c(uVar19,FUN_1002b86ec);
          if ((int)uVar15 == 1) {
            lVar21 = *(long *)(lVar37 + 0x270);
            uVar17 = *(undefined8 *)(lVar37 + 0x268);
            uVar30 = *(undefined8 *)(lVar37 + 0x220);
            uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
            FUN_1000da768(lVar37 + 0x88);
            uVar19 = *(undefined8 *)(lVar37 + 0xa0);
            lVar27 = *(long *)(lVar37 + 0xa8);
            FUN_100004640(lVar37 + 0x88,uVar19);
            (**(code **)(lVar27 + 0x30))
                      (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000049,0x8000000100d9f0c0,
                       uVar19,lVar27);
            FUN_10005241c(uVar30,FUN_1002b86ec);
            lVar27 = lVar37 + 0x88;
            goto LAB_1002496c4;
          }
          FUN_1000da768(lVar37 + 0x60);
          uVar15 = *(undefined8 *)(lVar37 + 0x78);
          lVar27 = *(long *)(lVar37 + 0x80);
          FUN_100004640(lVar37 + 0x60,uVar15);
          (**(code **)(lVar27 + 0x30))
                    (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000029,0x8000000100d9f090,
                     uVar15,lVar27);
          FUN_100004594(lVar37 + 0x60);
          FUN_1001a962c();
          lVar27 = *(long *)(lVar37 + 0x270);
          uVar17 = *(undefined8 *)(lVar37 + 0x268);
          uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
          FUN_10005241c(*(undefined8 *)(lVar37 + 0x220),FUN_1002b86ec);
          pcVar23 = *(code **)(lVar27 + 0x38);
          uVar19 = 1;
        }
      }
      else {
        if (iVar4 == 2) goto LAB_1002495f4;
        lVar21 = *(long *)(lVar37 + 0x270);
        uVar17 = *(undefined8 *)(lVar37 + 0x268);
        uVar30 = *(undefined8 *)(lVar37 + 0x220);
        uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
        FUN_1000da768(lVar37 + 0x38);
        uVar19 = *(undefined8 *)(lVar37 + 0x50);
        lVar27 = *(long *)(lVar37 + 0x58);
        FUN_100004640(lVar37 + 0x38,uVar19);
        (**(code **)(lVar27 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000036,0x8000000100d9f050,
                   uVar19,lVar27);
        FUN_10005241c(uVar30,FUN_1002b86ec);
        lVar27 = lVar37 + 0x38;
LAB_1002496c4:
        FUN_100004594(lVar27);
        pcVar23 = *(code **)(lVar21 + 0x38);
        uVar19 = 2;
      }
    }
    else {
      pSVar35 = *(String **)(lVar37 + 0x280);
      pcVar23 = FUN_10019fee0;
      FUN_1000523d8(*(undefined8 *)(lVar37 + 0x250),pSVar35);
      FUN_1000da768(lVar37 + 0x100);
      puVar1 = *(undefined **)(lVar37 + 0x118);
      lVar27 = *(long *)(lVar37 + 0x120);
      _Var11.unknown = puVar1;
      FUN_100004640(lVar37 + 0x100);
      Swift::_StringGuts::grow(0x47,_Var11);
      SVar40.bridgeObject = (void *)0x8000000100d9f190;
      SVar40.str = (char *)0xd000000000000045;
      SVar46.bridgeObject = puVar12;
      SVar46.str = (char *)pcVar23;
      Swift::String::append(SVar40,SVar46);
      SVar47.bridgeObject = puVar12;
      SVar47.str = (char *)pcVar23;
      Swift::String::append(*pSVar35,SVar47);
      (**(code **)(lVar27 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar27);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(lVar37 + 0x100);
      FUN_1001a8654(pSVar35);
      uVar19 = *(undefined8 *)(lVar37 + 0x280);
      lVar27 = *(long *)(lVar37 + 0x270);
      uVar17 = *(undefined8 *)(lVar37 + 0x268);
      uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
      FUN_10005241c(*(undefined8 *)(lVar37 + 0x220),FUN_1002b86ec);
      FUN_1000523d8(uVar19,uVar15,FUN_10019fee0);
      pcVar23 = *(code **)(lVar27 + 0x38);
      uVar19 = 0;
    }
  }
  else {
    pSVar35 = *(String **)(lVar37 + 0x288);
    pcVar23 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(lVar37 + 600),pSVar35);
    FUN_1000da768(lVar37 + 0x128);
    puVar12 = *(undefined **)(lVar37 + 0x140);
    lVar27 = *(long *)(lVar37 + 0x148);
    _Var11.unknown = puVar12;
    FUN_100004640(lVar37 + 0x128);
    Swift::_StringGuts::grow(0x37,_Var11);
    SVar39.bridgeObject = (void *)0x8000000100d9f1e0;
    SVar39.str = (char *)0xd000000000000035;
    SVar44.bridgeObject = in_x3;
    SVar44.str = (char *)pcVar23;
    Swift::String::append(SVar39,SVar44);
    SVar45.bridgeObject = in_x3;
    SVar45.str = (char *)pcVar23;
    Swift::String::append(*pSVar35,SVar45);
    (**(code **)(lVar27 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar12,lVar27);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(lVar37 + 0x128);
    FUN_1001a8654(pSVar35);
    lVar27 = *(long *)(lVar37 + 0x270);
    uVar17 = *(undefined8 *)(lVar37 + 0x268);
    uVar15 = *(undefined8 *)(lVar37 + 0x1b8);
    FUN_1000523d8(*(undefined8 *)(lVar37 + 0x288),uVar15,FUN_10019fee0);
    pcVar23 = *(code **)(lVar27 + 0x38);
    uVar19 = 0;
  }
  (*pcVar23)(uVar15,uVar19,2,uVar17);
LAB_100248f30:
  uVar29 = *(undefined8 *)(lVar37 + 0x288);
  uVar31 = *(undefined8 *)(lVar37 + 0x280);
  uVar32 = *(undefined8 *)(lVar37 + 0x278);
  uVar34 = *(undefined8 *)(lVar37 + 0x260);
  uVar36 = *(undefined8 *)(lVar37 + 600);
  uVar24 = *(undefined8 *)(lVar37 + 0x250);
  uVar22 = *(undefined8 *)(lVar37 + 0x248);
  uVar26 = *(undefined8 *)(lVar37 + 0x240);
  uVar18 = *(undefined8 *)(lVar37 + 0x238);
  uVar14 = *(undefined8 *)(lVar37 + 0x220);
  uVar13 = *(undefined8 *)(lVar37 + 0x218);
  uVar15 = *(undefined8 *)(lVar37 + 0x1f8);
  uVar17 = *(undefined8 *)(lVar37 + 0x200);
  uVar19 = *(undefined8 *)(lVar37 + 0x1e8);
  uVar30 = *(undefined8 *)(lVar37 + 0x1f0);
  uVar38 = *(undefined8 *)(lVar37 + 0x1e0);
  _swift_task_dealloc(*(undefined8 *)(lVar37 + 0x290));
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar38);
                    /* WARNING: Could not recover jumptable at 0x000100249020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar28 + 8))();
  return;
}



/* Address: 0x10024985c | FUN_10024985c */

/* WARNING: Removing unreachable block (ram,0x000100249d34) */
/* WARNING: Removing unreachable block (ram,0x000100249ef4) */
/* WARNING: Removing unreachable block (ram,0x000100249acc) */

void FUN_10024985c(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Date DVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  _StringGuts _Var9;
  void *in_x3;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long *unaff_x22;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  long lVar29;
  String *pSVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
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
  
  lVar12 = *unaff_x22;
  uVar14 = *(undefined8 *)(lVar12 + 0x2b8);
  lVar29 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x2d8));
  _swift_release(uVar14);
  pcVar21 = *(code **)(lVar12 + 0x2a8);
  uVar16 = *(undefined8 *)(lVar12 + 0x268);
  uVar14 = *(undefined8 *)(lVar12 + 0x250);
  FUN_10024c324(uVar14,*(undefined8 *)(lVar12 + 0x220));
  (*pcVar21)(uVar14,1,uVar16);
  if ((int)uVar14 == 1) {
    uVar4 = *(ulong *)(lVar12 + 0x250);
    FUN_100005808(uVar4,&DAT_100fb81c0,&DAT_100c37cc0);
    FUN_10024c58c();
    if ((uVar4 & 1) != 0) {
      uVar17 = *(undefined8 *)(lVar12 + 0x1f0);
      uVar16 = *(undefined8 *)(lVar12 + 0x1d8);
      FUN_1000da768(lVar12 + 0xd8);
      uVar14 = *(undefined8 *)(lVar12 + 0xf0);
      lVar19 = *(long *)(lVar12 + 0xf8);
      FUN_100004640(lVar12 + 0xd8,uVar14);
      in_x3 = (void *)0x8000000100d9f140;
      (**(code **)(lVar19 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000045,0x8000000100d9f140,uVar14
                 ,lVar19);
      FUN_100004594(lVar12 + 0xd8);
      FUN_1001a8a24(uVar17);
      _swift_getEnumCaseMultiPayload(uVar17,uVar16);
      if ((int)uVar17 != 3) {
        if ((int)uVar17 != 0) {
LAB_100249d28:
          FUN_1001a962c();
          lVar19 = *(long *)(lVar12 + 0x270);
          uVar14 = *(undefined8 *)(lVar12 + 0x268);
          uVar17 = *(undefined8 *)(lVar12 + 0x1f0);
          uVar16 = *(undefined8 *)(lVar12 + 0x1b8);
          FUN_10005241c(*(undefined8 *)(lVar12 + 0x220),FUN_1002b86ec);
          (**(code **)(lVar19 + 0x38))(uVar16,1,2,uVar14);
          FUN_100005808(uVar17,&DAT_100fb8208,&DAT_100c37dc8);
          goto LAB_10024a024;
        }
        puVar18 = *(undefined8 **)(lVar12 + 0x278);
        uVar14 = *(undefined8 *)(lVar12 + 0x1e8);
        FUN_100011090(*(undefined8 *)(lVar12 + 0x1f0),uVar14,&DAT_100fb8208,&DAT_100c37dc8);
        FUN_1000523d8(uVar14,puVar18,FUN_10019fee0);
        in_x3 = (void *)0x8000000100d8f1e0;
        uVar14 = *(undefined8 *)(lVar12 + 0x278);
        if (((undefined *)*puVar18 == (undefined *)0xd00000000000002d) &&
           ((undefined *)puVar18[1] == (undefined *)0x8000000100d8f1e0)) {
          FUN_10005241c(uVar14,FUN_10019fee0);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar18,(undefined *)puVar18[1],
                             (_StringComparisonResult)0x2d);
          FUN_10005241c(uVar14,FUN_10019fee0);
          if (!bVar2) goto LAB_100249d28;
        }
      }
      FUN_100005808(*(undefined8 *)(lVar12 + 0x1f0),&DAT_100fb8208,&DAT_100c37dc8);
    }
    uVar14 = *(undefined8 *)(lVar12 + 0x1d8);
    uVar16 = *(undefined8 *)(lVar12 + 0x1e0);
    FUN_1001a8a24(uVar16);
    _swift_getEnumCaseMultiPayload(uVar16,uVar14);
    iVar3 = (int)uVar16;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        lVar22 = *(long *)(lVar12 + 0x268);
        uVar14 = *(undefined8 *)(lVar12 + 0x240);
        pSVar30 = *(String **)(lVar12 + 0x1b8);
        pcVar21 = FUN_10019fee0;
        FUN_1000523d8(*(undefined8 *)(lVar12 + 0x1e0),pSVar30);
        FUN_1000da768(lVar12 + 0xb0);
        puVar1 = *(undefined **)(lVar12 + 200);
        lVar19 = *(long *)(lVar12 + 0xd0);
        _Var9.unknown = puVar1;
        FUN_100004640(lVar12 + 0xb0);
        Swift::_StringGuts::grow(0x3d,_Var9);
        SVar36.bridgeObject = (void *)0x8000000100d9f110;
        SVar36.str = (char *)0xd00000000000002f;
        SVar41.bridgeObject = in_x3;
        SVar41.str = (char *)pcVar21;
        Swift::String::append(SVar36,SVar41);
        SVar42.bridgeObject = in_x3;
        SVar42.str = (char *)pcVar21;
        Swift::String::append(*pSVar30,SVar42);
        SVar37.bridgeObject = (void *)0xea00000000002073;
        SVar37.str = (char *)0x657269707865202c;
        SVar43.bridgeObject = in_x3;
        SVar43.str = (char *)pcVar21;
        Swift::String::append(SVar37,SVar43);
        puVar7 = &DAT_100c37ab0;
        FUN_100011090((long)&pSVar30->str + (long)*(int *)(lVar22 + 0x18),uVar14,&DAT_100fb7f78);
        DVar5 = Foundation::Date::typeMetadataAccessor();
        lVar22 = *(long *)(DVar5.unknown + -8);
        (**(code **)(lVar22 + 0x30))(uVar14,1,DVar5.unknown);
        uVar16 = *(undefined8 *)(lVar12 + 0x240);
        if ((int)uVar14 == 1) {
          pcVar8 = &DAT_100c37ab0;
          FUN_100005808(uVar16,&DAT_100fb7f78);
          puVar27 = &DAT_e400000000000000;
          pcVar6 = (char *)0x656e6f6e;
        }
        else {
          uVar14 = *(undefined8 *)(lVar12 + 0x238);
          lVar33 = *(long *)(lVar12 + 0x230);
          uVar17 = *(undefined8 *)(lVar12 + 0x228);
          (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
          pcVar8 = &DAT_100fb8228;
          FUN_100003a00(&DAT_100fb8228,PTR_typeMetadataAccessor_100ea73f0,
                        PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
                       );
          Foundation::Date::_formatted(lVar12 + 400,uVar14,uVar17);
          (**(code **)(lVar33 + 8))(uVar14,uVar17);
          (**(code **)(lVar22 + 8))(uVar16,DVar5.unknown);
          pcVar6 = *(char **)(lVar12 + 400);
          puVar27 = *(undefined1 **)(lVar12 + 0x198);
        }
        lVar22 = *(long *)(lVar12 + 0x270);
        uVar17 = *(undefined8 *)(lVar12 + 0x268);
        uVar16 = *(undefined8 *)(lVar12 + 0x220);
        uVar14 = *(undefined8 *)(lVar12 + 0x1b8);
        SVar38.bridgeObject = puVar27;
        SVar38.str = pcVar6;
        SVar44.bridgeObject = puVar7;
        SVar44.str = pcVar8;
        Swift::String::append(SVar38,SVar44);
        _swift_bridgeObjectRelease(puVar27);
        (**(code **)(lVar19 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar19);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_10005241c(uVar16,FUN_1002b86ec);
        FUN_100004594(lVar12 + 0xb0);
        pcVar21 = *(code **)(lVar22 + 0x38);
        uVar16 = 0;
      }
      else {
        FUN_100005808(*(undefined8 *)(lVar12 + 0x1e0),&DAT_100fb8208,&DAT_100c37dc8);
LAB_100249da8:
        uVar16 = *(undefined8 *)(lVar12 + 0x218);
        FUN_1000c495c(*(undefined8 *)(lVar12 + 0x220),uVar16,FUN_1002b86ec);
        puVar7 = &DAT_100fb8220;
        FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
        uVar14 = uVar16;
        (**(code **)(*(long *)(puVar7 + -8) + 0x30))(uVar16,1,puVar7);
        FUN_10005241c(uVar16,FUN_1002b86ec);
        if ((int)uVar14 == 1) {
          lVar22 = *(long *)(lVar12 + 0x270);
          uVar17 = *(undefined8 *)(lVar12 + 0x268);
          uVar24 = *(undefined8 *)(lVar12 + 0x220);
          uVar14 = *(undefined8 *)(lVar12 + 0x1b8);
          FUN_1000da768(lVar12 + 0x88);
          uVar16 = *(undefined8 *)(lVar12 + 0xa0);
          lVar19 = *(long *)(lVar12 + 0xa8);
          FUN_100004640(lVar12 + 0x88,uVar16);
          (**(code **)(lVar19 + 0x30))
                    (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000049,0x8000000100d9f0c0,
                     uVar16,lVar19);
          FUN_10005241c(uVar24,FUN_1002b86ec);
          lVar19 = lVar12 + 0x88;
          goto LAB_100249e78;
        }
        FUN_1000da768(lVar12 + 0x60);
        uVar14 = *(undefined8 *)(lVar12 + 0x78);
        lVar19 = *(long *)(lVar12 + 0x80);
        FUN_100004640(lVar12 + 0x60,uVar14);
        (**(code **)(lVar19 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000029,0x8000000100d9f090,
                   uVar14,lVar19);
        FUN_100004594(lVar12 + 0x60);
        FUN_1001a962c();
        lVar19 = *(long *)(lVar12 + 0x270);
        uVar17 = *(undefined8 *)(lVar12 + 0x268);
        uVar14 = *(undefined8 *)(lVar12 + 0x1b8);
        FUN_10005241c(*(undefined8 *)(lVar12 + 0x220),FUN_1002b86ec);
        pcVar21 = *(code **)(lVar19 + 0x38);
        uVar16 = 1;
      }
    }
    else {
      if (iVar3 == 2) goto LAB_100249da8;
      lVar22 = *(long *)(lVar12 + 0x270);
      uVar17 = *(undefined8 *)(lVar12 + 0x268);
      uVar24 = *(undefined8 *)(lVar12 + 0x220);
      uVar14 = *(undefined8 *)(lVar12 + 0x1b8);
      FUN_1000da768(lVar12 + 0x38);
      uVar16 = *(undefined8 *)(lVar12 + 0x50);
      lVar19 = *(long *)(lVar12 + 0x58);
      FUN_100004640(lVar12 + 0x38,uVar16);
      (**(code **)(lVar19 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000036,0x8000000100d9f050,uVar16
                 ,lVar19);
      FUN_10005241c(uVar24,FUN_1002b86ec);
      lVar19 = lVar12 + 0x38;
LAB_100249e78:
      FUN_100004594(lVar19);
      pcVar21 = *(code **)(lVar22 + 0x38);
      uVar16 = 2;
    }
  }
  else {
    pSVar30 = *(String **)(lVar12 + 0x280);
    pcVar21 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(lVar12 + 0x250),pSVar30);
    FUN_1000da768(lVar12 + 0x100);
    puVar7 = *(undefined **)(lVar12 + 0x118);
    lVar19 = *(long *)(lVar12 + 0x120);
    _Var9.unknown = puVar7;
    FUN_100004640(lVar12 + 0x100);
    Swift::_StringGuts::grow(0x47,_Var9);
    SVar35.bridgeObject = (void *)0x8000000100d9f190;
    SVar35.str = (char *)0xd000000000000045;
    SVar39.bridgeObject = in_x3;
    SVar39.str = (char *)pcVar21;
    Swift::String::append(SVar35,SVar39);
    SVar40.bridgeObject = in_x3;
    SVar40.str = (char *)pcVar21;
    Swift::String::append(*pSVar30,SVar40);
    (**(code **)(lVar19 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar7,lVar19);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(lVar12 + 0x100);
    FUN_1001a8654(pSVar30);
    uVar16 = *(undefined8 *)(lVar12 + 0x280);
    lVar19 = *(long *)(lVar12 + 0x270);
    uVar17 = *(undefined8 *)(lVar12 + 0x268);
    uVar14 = *(undefined8 *)(lVar12 + 0x1b8);
    FUN_10005241c(*(undefined8 *)(lVar12 + 0x220),FUN_1002b86ec);
    FUN_1000523d8(uVar16,uVar14,FUN_10019fee0);
    pcVar21 = *(code **)(lVar19 + 0x38);
    uVar16 = 0;
  }
  (*pcVar21)(uVar14,uVar16,2,uVar17);
LAB_10024a024:
  uVar25 = *(undefined8 *)(lVar12 + 0x288);
  uVar26 = *(undefined8 *)(lVar12 + 0x280);
  uVar28 = *(undefined8 *)(lVar12 + 0x278);
  uVar31 = *(undefined8 *)(lVar12 + 0x260);
  uVar32 = *(undefined8 *)(lVar12 + 600);
  uVar34 = *(undefined8 *)(lVar12 + 0x250);
  uVar15 = *(undefined8 *)(lVar12 + 0x248);
  uVar23 = *(undefined8 *)(lVar12 + 0x240);
  uVar20 = *(undefined8 *)(lVar12 + 0x238);
  uVar11 = *(undefined8 *)(lVar12 + 0x220);
  uVar10 = *(undefined8 *)(lVar12 + 0x218);
  uVar14 = *(undefined8 *)(lVar12 + 0x1f8);
  uVar17 = *(undefined8 *)(lVar12 + 0x200);
  uVar16 = *(undefined8 *)(lVar12 + 0x1e8);
  uVar24 = *(undefined8 *)(lVar12 + 0x1f0);
  uVar13 = *(undefined8 *)(lVar12 + 0x1e0);
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x290));
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010024a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar29 + 8))();
  return;
}



/* Address: 0x10024a118 | FUN_10024a118 */

void FUN_10024a118(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2e0));
  uVar1 = *(undefined8 *)(lVar4 + 0x1c0);
  uVar3 = *(undefined8 *)(lVar4 + 0x1c8);
  if (unaff_x20 == 0) {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_10024a1ac;
  }
  else {
    _swift_errorRelease();
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = thunk_FUN_10024a1ac;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10024a1ac | FUN_10024a1ac */

/* WARNING: Removing unreachable block (ram,0x00010024a7fc) */
/* WARNING: Removing unreachable block (ram,0x00010024a9bc) */
/* WARNING: Removing unreachable block (ram,0x00010024a548) */

void FUN_10024a1ac(void)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Task TVar5;
  ulong uVar6;
  long *plVar7;
  Date DVar8;
  char *pcVar9;
  char *pcVar10;
  _StringGuts _Var11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ID IVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long unaff_x22;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  String *pSVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
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
  
  IVar19 = *(ID *)(unaff_x22 + 0x2d0);
  lVar16 = *(long *)(unaff_x22 + 0x2c8);
  lVar22 = *(long *)(unaff_x22 + 0x2b8);
  objc_stub::lock(IVar19);
  bVar2 = *(byte *)(lVar22 + lVar16);
  TVar5.unknown = (undefined *)objc_stub::unlock(IVar19);
  if (((bVar2 & 1) != 0) &&
     (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar3)) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2e0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10024a118;
    (extension_Swift)::Swift::Task::_sleep(1000000);
    return;
  }
  lVar22 = *(long *)(unaff_x22 + 0x2b8);
  lVar34 = *(long *)(unaff_x22 + 0x210);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x200);
  IVar19 = *(ID *)(lVar22 + *(long *)(unaff_x22 + 0x2c0));
  objc_stub::lock(IVar19);
  lVar16 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult;
  _swift_beginAccess(lVar22 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lastResult,
                     unaff_x22 + 0x178,0,0);
  puVar12 = &DAT_100c37dd0;
  FUN_100011090(lVar22 + lVar16,uVar20,&DAT_100fb8210,&DAT_100c37dd0);
  objc_stub::unlock(IVar19);
  _swift_release(lVar22);
  FUN_10019ffdc(uVar20,uVar23,&DAT_100fb8210);
  pcVar28 = *(code **)(lVar34 + 0x30);
  (*pcVar28)(uVar23,1,uVar17);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
  if ((int)uVar23 == 1) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1f8);
    puVar12 = &DAT_100fb8220;
    FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
    (**(code **)(*(long *)(puVar12 + -8) + 0x38))(uVar20,1,1);
    (*pcVar28)(uVar23,1,uVar17);
    if ((int)uVar23 != 1) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1f8),&DAT_100fb8210,&DAT_100c37dd0);
    }
  }
  else {
    FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x1f8),uVar20,FUN_1002b86ec);
  }
  pcVar28 = *(code **)(unaff_x22 + 0x2a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x250);
  FUN_10024c324(uVar23,*(undefined8 *)(unaff_x22 + 0x220));
  (*pcVar28)(uVar23,1,uVar20);
  if ((int)uVar23 == 1) {
    uVar6 = *(ulong *)(unaff_x22 + 0x250);
    FUN_100005808(uVar6,&DAT_100fb81c0,&DAT_100c37cc0);
    FUN_10024c58c();
    if ((uVar6 & 1) != 0) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
      FUN_1000da768(unaff_x22 + 0xd8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
      lVar16 = *(long *)(unaff_x22 + 0xf8);
      FUN_100004640(unaff_x22 + 0xd8,uVar23);
      puVar12 = (undefined *)0x8000000100d9f140;
      (**(code **)(lVar16 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000045,0x8000000100d9f140,uVar23
                 ,lVar16);
      FUN_100004594(unaff_x22 + 0xd8);
      FUN_1001a8a24(uVar17);
      _swift_getEnumCaseMultiPayload(uVar17,uVar20);
      if ((int)uVar17 != 3) {
        if ((int)uVar17 != 0) {
LAB_10024a7f0:
          FUN_1001a962c();
          lVar16 = *(long *)(unaff_x22 + 0x270);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x268);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x1b8);
          FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x220),FUN_1002b86ec);
          (**(code **)(lVar16 + 0x38))(uVar17,1,2,uVar20);
          FUN_100005808(uVar23,&DAT_100fb8208,&DAT_100c37dc8);
          goto LAB_10024aae0;
        }
        puVar24 = *(undefined8 **)(unaff_x22 + 0x278);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1e8);
        FUN_100011090(*(undefined8 *)(unaff_x22 + 0x1f0),uVar23,&DAT_100fb8208,&DAT_100c37dc8);
        FUN_1000523d8(uVar23,puVar24,FUN_10019fee0);
        puVar12 = (undefined *)0x8000000100d8f1e0;
        uVar23 = *(undefined8 *)(unaff_x22 + 0x278);
        if (((undefined *)*puVar24 == (undefined *)0xd00000000000002d) &&
           ((undefined *)puVar24[1] == (undefined *)0x8000000100d8f1e0)) {
          FUN_10005241c(uVar23,FUN_10019fee0);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar24,(undefined *)puVar24[1],
                             (_StringComparisonResult)0x2d);
          FUN_10005241c(uVar23,FUN_10019fee0);
          if (!bVar3) goto LAB_10024a7f0;
        }
      }
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1f0),&DAT_100fb8208,&DAT_100c37dc8);
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1e0);
    FUN_1001a8a24(uVar20);
    _swift_getEnumCaseMultiPayload(uVar20,uVar23);
    iVar4 = (int)uVar20;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        lVar22 = *(long *)(unaff_x22 + 0x268);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x240);
        pSVar32 = *(String **)(unaff_x22 + 0x1b8);
        pcVar28 = FUN_10019fee0;
        FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x1e0),pSVar32);
        FUN_1000da768(unaff_x22 + 0xb0);
        puVar1 = *(undefined **)(unaff_x22 + 200);
        lVar16 = *(long *)(unaff_x22 + 0xd0);
        _Var11.unknown = puVar1;
        FUN_100004640();
        Swift::_StringGuts::grow(0x3d,_Var11);
        SVar38.bridgeObject = (void *)0x8000000100d9f110;
        SVar38.str = (char *)0xd00000000000002f;
        SVar43.bridgeObject = puVar12;
        SVar43.str = (char *)pcVar28;
        Swift::String::append(SVar38,SVar43);
        SVar44.bridgeObject = puVar12;
        SVar44.str = (char *)pcVar28;
        Swift::String::append(*pSVar32,SVar44);
        SVar39.bridgeObject = (void *)0xea00000000002073;
        SVar39.str = (char *)0x657269707865202c;
        SVar45.bridgeObject = puVar12;
        SVar45.str = (char *)pcVar28;
        Swift::String::append(SVar39,SVar45);
        puVar12 = &DAT_100c37ab0;
        FUN_100011090((long)&pSVar32->str + (long)*(int *)(lVar22 + 0x18),uVar23,&DAT_100fb7f78);
        DVar8 = Foundation::Date::typeMetadataAccessor();
        lVar22 = *(long *)(DVar8.unknown + -8);
        (**(code **)(lVar22 + 0x30))(uVar23,1,DVar8.unknown);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
        if ((int)uVar23 == 1) {
          pcVar10 = &DAT_100c37ab0;
          FUN_100005808(uVar20,&DAT_100fb7f78);
          puVar30 = &DAT_e400000000000000;
          pcVar9 = (char *)0x656e6f6e;
        }
        else {
          uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
          lVar34 = *(long *)(unaff_x22 + 0x230);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x228);
          (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
          pcVar10 = &DAT_100fb8228;
          FUN_100003a00(&DAT_100fb8228,PTR_typeMetadataAccessor_100ea73f0,
                        PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
                       );
          Foundation::Date::_formatted(unaff_x22 + 400,uVar23,uVar17);
          (**(code **)(lVar34 + 8))(uVar23,uVar17);
          (**(code **)(lVar22 + 8))(uVar20,DVar8.unknown);
          pcVar9 = *(char **)(unaff_x22 + 400);
          puVar30 = *(undefined1 **)(unaff_x22 + 0x198);
        }
        lVar22 = *(long *)(unaff_x22 + 0x270);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
        SVar40.bridgeObject = puVar30;
        SVar40.str = pcVar9;
        SVar46.bridgeObject = puVar12;
        SVar46.str = pcVar10;
        Swift::String::append(SVar40,SVar46);
        _swift_bridgeObjectRelease(puVar30);
        (**(code **)(lVar16 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar16);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_10005241c(uVar20,FUN_1002b86ec);
        FUN_100004594(unaff_x22 + 0xb0);
        pcVar28 = *(code **)(lVar22 + 0x38);
        uVar20 = 0;
      }
      else {
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1e0),&DAT_100fb8208,&DAT_100c37dc8);
LAB_10024a870:
        uVar20 = *(undefined8 *)(unaff_x22 + 0x218);
        FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0x220),uVar20,FUN_1002b86ec);
        puVar12 = &DAT_100fb8220;
        FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
        uVar23 = uVar20;
        (**(code **)(*(long *)(puVar12 + -8) + 0x30))(uVar20,1,puVar12);
        FUN_10005241c(uVar20,FUN_1002b86ec);
        if ((int)uVar23 == 1) {
          lVar22 = *(long *)(unaff_x22 + 0x270);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
          FUN_1000da768(unaff_x22 + 0x88);
          uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
          lVar16 = *(long *)(unaff_x22 + 0xa8);
          FUN_100004640(unaff_x22 + 0x88,uVar20);
          (**(code **)(lVar16 + 0x30))
                    (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000049,0x8000000100d9f0c0,
                     uVar20,lVar16);
          FUN_10005241c(uVar26,FUN_1002b86ec);
          lVar16 = unaff_x22 + 0x88;
          goto LAB_10024a940;
        }
        FUN_1000da768(unaff_x22 + 0x60);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x78);
        lVar16 = *(long *)(unaff_x22 + 0x80);
        FUN_100004640(unaff_x22 + 0x60,uVar23);
        (**(code **)(lVar16 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000029,0x8000000100d9f090,
                   uVar23,lVar16);
        FUN_100004594(unaff_x22 + 0x60);
        FUN_1001a962c();
        lVar16 = *(long *)(unaff_x22 + 0x270);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
        FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x220),FUN_1002b86ec);
        pcVar28 = *(code **)(lVar16 + 0x38);
        uVar20 = 1;
      }
    }
    else {
      if (iVar4 == 2) goto LAB_10024a870;
      lVar22 = *(long *)(unaff_x22 + 0x270);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
      FUN_1000da768(unaff_x22 + 0x38);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar16 = *(long *)(unaff_x22 + 0x58);
      FUN_100004640(unaff_x22 + 0x38,uVar20);
      (**(code **)(lVar16 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000036,0x8000000100d9f050,uVar20
                 ,lVar16);
      FUN_10005241c(uVar26,FUN_1002b86ec);
      lVar16 = unaff_x22 + 0x38;
LAB_10024a940:
      FUN_100004594(lVar16);
      pcVar28 = *(code **)(lVar22 + 0x38);
      uVar20 = 2;
    }
  }
  else {
    pSVar32 = *(String **)(unaff_x22 + 0x280);
    pcVar28 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x250),pSVar32);
    FUN_1000da768(unaff_x22 + 0x100);
    puVar1 = *(undefined **)(unaff_x22 + 0x118);
    lVar16 = *(long *)(unaff_x22 + 0x120);
    _Var11.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x100);
    Swift::_StringGuts::grow(0x47,_Var11);
    SVar37.bridgeObject = (void *)0x8000000100d9f190;
    SVar37.str = (char *)0xd000000000000045;
    SVar41.bridgeObject = puVar12;
    SVar41.str = (char *)pcVar28;
    Swift::String::append(SVar37,SVar41);
    SVar42.bridgeObject = puVar12;
    SVar42.str = (char *)pcVar28;
    Swift::String::append(*pSVar32,SVar42);
    (**(code **)(lVar16 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0,0xe000000000000000,puVar1,lVar16);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(unaff_x22 + 0x100);
    FUN_1001a8654(pSVar32);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
    lVar16 = *(long *)(unaff_x22 + 0x270);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x220),FUN_1002b86ec);
    FUN_1000523d8(uVar20,uVar23,FUN_10019fee0);
    pcVar28 = *(code **)(lVar16 + 0x38);
    uVar20 = 0;
  }
  (*pcVar28)(uVar23,uVar20,2,uVar17);
LAB_10024aae0:
  uVar27 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar35 = *(undefined8 *)(unaff_x22 + 600);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x290));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010024abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024abd4 | FUN_10024abd4 */

void FUN_10024abd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  Date DVar4;
  undefined *puVar5;
  Transaction TVar6;
  Transactions TVar7;
  AsyncIterator AVar8;
  ulong uVar9;
  Transactions TVar10;
  long *plVar11;
  code *pcVar12;
  long unaff_x20;
  long unaff_x22;
  long lVar13;
  long lVar14;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  lVar1 = 0;
  FUN_10019fee0();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  lVar13 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x100) = DVar4.unknown;
  lVar1 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  puVar5 = &DAT_100fb8398;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  *(undefined **)(unaff_x22 + 0x128) = puVar5;
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  puVar5 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  TVar6 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x160) = TVar6.unknown;
  lVar1 = *(long *)(TVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x168) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  puVar5 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x178) = puVar5;
  lVar1 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  puVar5 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  TVar7 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  lVar14 = *(long *)(TVar7.unknown + -8);
  uVar2 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  AVar8 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1a8) = AVar8.unknown;
  lVar1 = *(long *)(AVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x1b0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar3;
  puVar5 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar9 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar9;
  uVar9 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar9;
  TVar6.unknown = (undefined *)(uVar3 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x1d0) = TVar6.unknown;
  pcVar12 = *(code **)(lVar13 + 0x38);
  *(code **)(unaff_x22 + 0x1d8) = pcVar12;
  (*pcVar12)();
  TVar10 = StoreKit::Transaction::get_currentEntitlements(TVar6);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar10);
  (**(code **)(lVar14 + 8))(uVar2,TVar7.unknown);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x20 + 0x38);
  plVar11 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10024aec0;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x198));
  return;
}



/* Address: 0x10024aec0 | FUN_10024aec0 */

void FUN_10024aec0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1e8));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10024af20,uVar1,uVar2);
  return;
}



/* Address: 0x10024af20 | FUN_10024af20 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010024b554 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10024af20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Date DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Date DVar12;
  bool bVar13;
  Transaction TVar14;
  long *plVar15;
  __int64 _Var16;
  URL UVar17;
  URL UVar18;
  Date DVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined *puVar23;
  undefined8 uVar24;
  _StringGuts _Var25;
  undefined8 uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long unaff_x22;
  undefined8 uVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  code *pcVar37;
  undefined8 uVar38;
  long lVar39;
  char *pcVar40;
  long lVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  _StringGuts local_60;
  
  uVar26 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar24 = uVar26;
  (**(code **)(*(long *)(unaff_x22 + 0x180) + 0x30))(uVar26,1,uVar21);
  if ((int)uVar24 == 1) {
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar21 = *(undefined8 *)(unaff_x22 + 200);
    (**(code **)(*(long *)(unaff_x22 + 0x1b0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1a8));
    FUN_10019ffdc(uVar24,uVar21,&DAT_100fb81c0,&DAT_100c37cc0);
    goto LAB_10024af9c;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar30 = *(undefined8 *)(unaff_x22 + 400);
  FUN_10019ffdc(uVar26,uVar30,&DAT_100fb7f90,&DAT_100c3c630);
  FUN_100011090(uVar30,uVar24,&DAT_100fb7f90,&DAT_100c3c630);
  _swift_getEnumCaseMultiPayload(uVar24,uVar21);
  if ((int)uVar24 == 1) {
    TVar14.unknown = *(undefined **)(unaff_x22 + 0x170);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x150);
    lVar27 = *(long *)(unaff_x22 + 0x138);
    lVar36 = *(long *)(unaff_x22 + 0x128);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar41 = *(long *)(unaff_x22 + 0x108);
    (**(code **)(*(long *)(unaff_x22 + 0x168) + 0x20))
              (TVar14.unknown,*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x160))
    ;
    StoreKit::Transaction::_get_revocationDate(TVar14);
    (**(code **)(lVar41 + 0x38))(uVar26,1,1,uVar24);
    lVar36 = (long)*(int *)(lVar36 + 0x30);
    puVar28 = (undefined8 *)&DAT_100c37ab0;
    FUN_100011090(uVar21,lVar27,&DAT_100fb7f78,&DAT_100c37ab0);
    FUN_100011090(uVar26,lVar27 + lVar36,&DAT_100fb7f78);
    pcVar22 = *(code **)(lVar41 + 0x30);
    lVar41 = lVar27;
    (*pcVar22)(lVar27,1,uVar24);
    if ((int)lVar41 == 1) {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x150),&DAT_100fb7f78,&DAT_100c37ab0);
      FUN_100005808(uVar21,&DAT_100fb7f78,&DAT_100c37ab0);
      lVar27 = lVar27 + lVar36;
      (*pcVar22)(lVar27,1,uVar24);
      if ((int)lVar27 == 1) {
        TVar14.unknown = *(undefined **)(unaff_x22 + 0x138);
        FUN_100005808(TVar14.unknown,&DAT_100fb7f78,&DAT_100c37ab0);
LAB_10024b518:
        SVar43 = StoreKit::Transaction::get_productID(TVar14);
        TVar14.unknown = SVar43.bridgeObject;
        FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
        _swift_initStaticObject();
        _Var16 = Swift::_findStringSwitchCase(SVar43.str,SVar43.str);
        _swift_bridgeObjectRelease();
        if (_Var16 < 3) {
          if (_Var16 == 0) {
            bVar13 = false;
            pcVar40 = "e.macos.subscription.annual";
            local_60.unknown = (undefined *)0xd00000000000002c;
            puVar31 = &DAT_e700000000000000;
            uVar21 = 0x796c68746e6f4d;
          }
          else {
            if (_Var16 == 1) {
              pcVar40 = "com.wiheads.paste.macos.subscription.annual";
              local_60.unknown = (undefined *)0xd00000000000002b;
            }
            else {
              if (_Var16 != 2) {
LAB_10024b660:
                uVar26 = *(undefined8 *)(unaff_x22 + 400);
                lVar27 = *(long *)(unaff_x22 + 0x168);
                uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
                uVar30 = *(undefined8 *)(unaff_x22 + 0x160);
                FUN_1000da768(unaff_x22 + 0x60);
                pcVar40 = SVar43.bridgeObject;
                puVar23 = *(undefined **)(unaff_x22 + 0x78);
                lVar41 = *(long *)(unaff_x22 + 0x80);
                _Var25.unknown = puVar23;
                FUN_100004640(unaff_x22 + 0x60);
                *(undefined8 *)(unaff_x22 + 0xb8) = 0;
                *(undefined8 *)(unaff_x22 + 0xc0) = 0xe000000000000000;
                Swift::_StringGuts::grow(0x40,_Var25);
                *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xb8);
                *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xc0);
                TVar14.unknown = (undefined *)0xd00000000000003e;
                SVar43.bridgeObject = (void *)0x8000000100d9f2d0;
                SVar43.str = (char *)0xd00000000000003e;
                SVar46.bridgeObject = puVar28;
                SVar46.str = pcVar40;
                Swift::String::append(SVar43,SVar46);
                SVar43 = StoreKit::Transaction::get_productID(TVar14);
                SVar47.bridgeObject = puVar28;
                SVar47.str = pcVar40;
                Swift::String::append(SVar43,SVar47);
                _swift_bridgeObjectRelease(SVar43.bridgeObject);
                uVar24 = *(undefined8 *)(unaff_x22 + 0xb0);
                (**(code **)(lVar41 + 0x30))
                          (0x65736e6563696c,&DAT_e700000000000000,*(undefined8 *)(unaff_x22 + 0xa8),
                           uVar24,puVar23,lVar41);
                _swift_bridgeObjectRelease(uVar24);
                (**(code **)(lVar27 + 8))(uVar21,uVar30);
                FUN_100005808(uVar26,&DAT_100fb7f90,&DAT_100c3c630);
                lVar27 = unaff_x22 + 0x60;
                goto LAB_10024b40c;
              }
              pcVar40 = "com.wiheads.paste.macos.subscription.annual.intro";
              local_60.unknown = (undefined *)0xd000000000000031;
            }
            pcVar40 = pcVar40 + -0x20;
            bVar13 = false;
            puVar31 = &DAT_e600000000000000;
            uVar21 = 0x6c61756e6e41;
          }
        }
        else if (_Var16 == 3) {
          bVar13 = false;
          pcVar40 = "tion.annual.legacy";
          local_60.unknown = &DAT_d000000000000032;
          puVar31 = (undefined1 *)0xed0000796c696d61;
          uVar21 = 0x46206c61756e6e41;
        }
        else if (_Var16 == 4) {
          bVar13 = false;
          pcVar40 = "verified";
          local_60.unknown = &DAT_d000000000000032;
          puVar31 = (undefined1 *)0xed00007963616765;
          uVar21 = 0x4c206c61756e6e41;
        }
        else {
          if (_Var16 != 5) goto LAB_10024b660;
          local_60.unknown = (undefined *)0xd00000000000002d;
          pcVar40 = "onBarViewModel.swift";
          puVar31 = &DAT_e800000000000000;
          uVar21 = 0x656d69746566694c;
          bVar13 = true;
        }
        uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
        lVar27 = *(long *)(unaff_x22 + 0xf8);
        lVar36 = *(long *)(unaff_x22 + 0xe0);
        StoreKit::Transaction::_get_expirationDate(TVar14);
        _Var25.unknown = (undefined *)((ulong)pcVar40 | 0x8000000000000000);
        lVar41 = (long)*(int *)(lVar36 + 0x18);
        FUN_100011090(uVar24,lVar27 + lVar41,&DAT_100fb7f78,&DAT_100c37ab0);
        lVar36 = (long)*(int *)(lVar36 + 0x1c);
        if (bVar13) {
          puVar28 = *(undefined8 **)(unaff_x22 + 0xf8);
          FUN_100005808(*(undefined8 *)(unaff_x22 + 0x140),&DAT_100fb7f78,&DAT_100c37ab0);
          UVar17 = Foundation::URL::typeMetadataAccessor();
          (**(code **)(*(long *)(UVar17.unknown + -8) + 0x38))(lVar27 + lVar36,1,1,UVar17.unknown);
          *puVar28 = local_60.unknown;
          puVar28[1] = _Var25.unknown;
          puVar28[2] = uVar21;
          puVar28[3] = puVar31;
          if (_Var25.unknown != (undefined *)0x8000000100d8f1e0) goto LAB_10024b908;
        }
        else {
          if (DAT_100fb81b8 != -1) {
            _swift_once(&DAT_100fb81b8,FUN_100247e58);
          }
          uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
          puVar28 = *(undefined8 **)(unaff_x22 + 0xf8);
          UVar18 = Foundation::URL::typeMetadataAccessor();
          UVar17 = UVar18;
          FUN_1000cd990(UVar18.unknown,&DAT_1010578c8);
          lVar39 = *(long *)(UVar18.unknown + -8);
          (**(code **)(lVar39 + 0x10))(lVar27 + lVar36,UVar17.unknown,UVar18.unknown);
          FUN_100005808(uVar24,&DAT_100fb7f78,&DAT_100c37ab0);
          (**(code **)(lVar39 + 0x38))(lVar27 + lVar36,0,1,UVar18.unknown);
          *puVar28 = local_60.unknown;
          puVar28[1] = _Var25.unknown;
          puVar28[2] = uVar21;
          puVar28[3] = puVar31;
LAB_10024b908:
          bVar13 = Swift::_stringCompareWithSmolCheck(local_60,_Var25,(_StringComparisonResult)0x2d)
          ;
          if (!bVar13) {
            uVar24 = *(undefined8 *)(unaff_x22 + 0x1c0);
            uVar21 = *(undefined8 *)(unaff_x22 + 0xe0);
            lVar36 = *(long *)(unaff_x22 + 0xe8);
            FUN_100011090(*(undefined8 *)(unaff_x22 + 0x1d0),uVar24,&DAT_100fb81c0,&DAT_100c37cc0);
            (**(code **)(lVar36 + 0x30))(uVar24,1,uVar21);
            if ((int)uVar24 == 1) {
              uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
              uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
              FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1c0),&DAT_100fb81c0,&DAT_100c37cc0);
LAB_10024ba24:
              FUN_1000c495c(uVar24,uVar21,FUN_10019fee0);
            }
            else {
              lVar39 = *(long *)(unaff_x22 + 0x128);
              lVar36 = *(long *)(unaff_x22 + 0x130);
              uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
              lVar29 = *(long *)(unaff_x22 + 0xf0);
              lVar33 = *(long *)(unaff_x22 + 0xe0);
              FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x1c0),lVar29,FUN_10019fee0);
              lVar39 = (long)*(int *)(lVar39 + 0x30);
              FUN_100011090(lVar29 + *(int *)(lVar33 + 0x18),lVar36,&DAT_100fb7f78,&DAT_100c37ab0);
              FUN_100011090(lVar27 + lVar41,lVar36 + lVar39,&DAT_100fb7f78,&DAT_100c37ab0);
              lVar27 = lVar36;
              (*pcVar22)(lVar36,1,uVar21);
              if ((int)lVar27 == 1) {
                FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0x1c8),
                              FUN_10019fee0);
                lVar36 = lVar36 + lVar39;
              }
              else {
                puVar23 = *(undefined **)(unaff_x22 + 0x100);
                lVar27 = lVar36 + lVar39;
                (*pcVar22)(lVar27,1,puVar23);
                if ((int)lVar27 != 1) {
                  uVar24 = *(undefined8 *)(unaff_x22 + 0x130);
                  uVar21 = uVar24;
                  (*pcVar22)(uVar24,1,puVar23);
                  if ((int)uVar21 == 1) {
                    Swift::__diagnoseUnexpectedEnumCase();
                    return;
                  }
                  DVar3.unknown = *(undefined **)(unaff_x22 + 0x110);
                  DVar12.unknown = *(undefined **)(unaff_x22 + 0x118);
                  lVar27 = *(long *)(unaff_x22 + 0x108);
                  pcVar22 = *(code **)(lVar27 + 0x20);
                  (*pcVar22)(DVar12.unknown,uVar24,puVar23);
                  DVar19.unknown = puVar23;
                  (*pcVar22)(DVar3.unknown,lVar36 + lVar39);
                  bVar13 = Foundation::Date::>_infix(DVar3,DVar12,DVar19);
                  pcVar22 = *(code **)(lVar27 + 8);
                  (*pcVar22)(DVar3.unknown,puVar23);
                  (*pcVar22)(DVar12.unknown,puVar23);
                  uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
                  if (bVar13) {
                    uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
                    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xf0),FUN_10019fee0);
                    goto LAB_10024ba24;
                  }
                  FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0xf0),uVar21,FUN_10019fee0);
                  goto LAB_10024bb38;
                }
                uVar24 = *(undefined8 *)(unaff_x22 + 0x1c8);
                lVar36 = *(long *)(unaff_x22 + 0x130);
                uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
                FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xf0),FUN_10019fee0);
                FUN_1000c495c(uVar21,uVar24,FUN_10019fee0);
              }
              FUN_100005808(lVar36,&DAT_100fb7f78,&DAT_100c37ab0);
            }
LAB_10024bb38:
            uVar21 = *(undefined8 *)(unaff_x22 + 0x1d0);
            pcVar22 = *(code **)(unaff_x22 + 0x1d8);
            uVar24 = *(undefined8 *)(unaff_x22 + 0x1c8);
            uVar26 = *(undefined8 *)(unaff_x22 + 400);
            uVar30 = *(undefined8 *)(unaff_x22 + 0xf8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0xe0);
            (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
                      (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
            FUN_100005808(uVar26,&DAT_100fb7f90,&DAT_100c3c630);
            FUN_100005808(uVar21,&DAT_100fb81c0,&DAT_100c37cc0);
            FUN_10005241c(uVar30,FUN_10019fee0);
            (*pcVar22)(uVar24,0,1,uVar32);
            FUN_10019ffdc(uVar24,uVar21,&DAT_100fb81c0,&DAT_100c37cc0);
            goto LAB_10024b410;
          }
        }
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1d0);
        pcVar22 = *(code **)(unaff_x22 + 0x1d8);
        lVar27 = *(long *)(unaff_x22 + 0x1b0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar30 = *(undefined8 *)(unaff_x22 + 400);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar38 = *(undefined8 *)(unaff_x22 + 200);
        (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
        FUN_100005808(uVar30,&DAT_100fb7f90,&DAT_100c3c630);
        (**(code **)(lVar27 + 8))(uVar24,uVar26);
        FUN_100005808(uVar21,&DAT_100fb81c0,&DAT_100c37cc0);
        FUN_1000523d8(uVar32,uVar38,FUN_10019fee0);
        (*pcVar22)(uVar38,0,1,uVar35);
LAB_10024af9c:
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar6 = *(undefined8 *)(unaff_x22 + 400);
        uVar34 = *(undefined8 *)(unaff_x22 + 0x170);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x150);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
        uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1d0));
        _swift_task_dealloc(uVar21);
        _swift_task_dealloc(uVar4);
        _swift_task_dealloc(uVar24);
        _swift_task_dealloc(uVar5);
        _swift_task_dealloc(uVar26);
        _swift_task_dealloc(uVar6);
        _swift_task_dealloc(uVar30);
        _swift_task_dealloc(uVar34);
        _swift_task_dealloc(uVar7);
        _swift_task_dealloc(uVar32);
        _swift_task_dealloc(uVar8);
        _swift_task_dealloc(uVar35);
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar38);
        _swift_task_dealloc(uVar10);
        _swift_task_dealloc(uVar1);
        _swift_task_dealloc(uVar20);
        _swift_task_dealloc(uVar11);
        _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010024b098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
LAB_10024b308:
      pcVar40 = &DAT_100c3c780;
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x138),&DAT_100fb8398);
    }
    else {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
      puVar28 = (undefined8 *)&DAT_100c37ab0;
      FUN_100011090(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x148),
                    &DAT_100fb7f78);
      lVar41 = lVar27 + lVar36;
      (*pcVar22)(lVar41,1,uVar21);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x148);
      if ((int)lVar41 == 1) {
        uVar30 = *(undefined8 *)(unaff_x22 + 0x100);
        lVar27 = *(long *)(unaff_x22 + 0x108);
        FUN_100005808(uVar21,&DAT_100fb7f78,&DAT_100c37ab0);
        FUN_100005808(uVar24,&DAT_100fb7f78,&DAT_100c37ab0);
        (**(code **)(lVar27 + 8))(uVar26,uVar30);
        goto LAB_10024b308;
      }
      TVar14.unknown = *(undefined **)(unaff_x22 + 0x138);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar41 = *(long *)(unaff_x22 + 0x108);
      (**(code **)(lVar41 + 0x20))(uVar32,lVar27 + lVar36,uVar30);
      puVar28 = &DAT_100fb83b0;
      FUN_100003a00(&DAT_100fb83b0,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar13 = Swift::Equatable::___infix(uVar26,uVar32,uVar30);
      pcVar37 = *(code **)(lVar41 + 8);
      (*pcVar37)(uVar32,uVar30);
      pcVar40 = &DAT_100c37ab0;
      FUN_100005808(uVar21,&DAT_100fb7f78,&DAT_100c37ab0);
      FUN_100005808(uVar24,&DAT_100fb7f78,&DAT_100c37ab0);
      (*pcVar37)(uVar26,uVar30);
      FUN_100005808(TVar14.unknown,&DAT_100fb7f78);
      if (bVar13) goto LAB_10024b518;
    }
    uVar26 = *(undefined8 *)(unaff_x22 + 400);
    lVar27 = *(long *)(unaff_x22 + 0x168);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_1000da768(unaff_x22 + 0x38);
    puVar23 = *(undefined **)(unaff_x22 + 0x50);
    lVar41 = *(long *)(unaff_x22 + 0x58);
    _Var25.unknown = puVar23;
    FUN_100004640(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x38,_Var25);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xa0);
    TVar14.unknown = (undefined *)0xd000000000000036;
    SVar42.bridgeObject = (void *)0x8000000100d9f290;
    SVar42.str = (char *)0xd000000000000036;
    SVar44.bridgeObject = puVar28;
    SVar44.str = pcVar40;
    Swift::String::append(SVar42,SVar44);
    SVar43 = StoreKit::Transaction::get_productID(TVar14);
    SVar45.bridgeObject = puVar28;
    SVar45.str = pcVar40;
    Swift::String::append(SVar43,SVar45);
    _swift_bridgeObjectRelease(SVar43.bridgeObject);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x90);
    (**(code **)(lVar41 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,*(undefined8 *)(unaff_x22 + 0x88),uVar24,
               puVar23,lVar41);
    _swift_bridgeObjectRelease(uVar24);
    (**(code **)(lVar27 + 8))(uVar21,uVar30);
    FUN_100005808(uVar26,&DAT_100fb7f90,&DAT_100c3c630);
    lVar27 = unaff_x22 + 0x38;
  }
  else {
    uVar24 = *(undefined8 *)(unaff_x22 + 400);
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0x188),&DAT_100fb7f90,&DAT_100c3c630);
    FUN_1000da768(unaff_x22 + 0x10);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar27 = *(long *)(unaff_x22 + 0x30);
    FUN_100004640(unaff_x22 + 0x10,uVar21);
    (**(code **)(lVar27 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000037,0x8000000100d9f250,uVar21,
               lVar27);
    FUN_100005808(uVar24,&DAT_100fb7f90,&DAT_100c3c630);
    lVar27 = unaff_x22 + 0x10;
  }
LAB_10024b40c:
  FUN_100004594(lVar27);
LAB_10024b410:
  plVar15 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e8) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_10024aec0;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x198));
  return;
}



/* Address: 0x10024bcc8 | FUN_10024bcc8 */

void FUN_10024bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Date DVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  Transaction TVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  String for;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = DVar1.unknown;
  lVar8 = *(long *)(DVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  puVar3 = &DAT_100fb8398;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  *(undefined **)(unaff_x22 + 0x40) = puVar3;
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  puVar3 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  puVar3 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  pcVar5 = (char *)(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x70) = pcVar5;
  TVar6 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x78) = TVar6.unknown;
  lVar8 = *(long *)(TVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x80) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  plVar7 = (long *)(ulong)*(uint *)(PTR__latest_100ea7de0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10024be38;
  for.bridgeObject = (void *)0xd00000000000002d;
  for.str = pcVar5;
  StoreKit::Transaction::_latest(for,(Transaction)0x8000000100d8f1e0);
  return;
}



/* Address: 0x10024be38 | FUN_10024be38 */

void FUN_10024be38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10024be98,uVar1,uVar2);
  return;
}



/* Address: 0x10024be98 | FUN_10024be98 */

void FUN_10024be98(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  Transaction TVar9;
  long lVar10;
  URL UVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar7 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar12 = uVar15;
  (**(code **)(*(long *)(puVar7 + -8) + 0x30))(uVar15,1,puVar7);
  if ((int)uVar12 == 1) {
    puVar7 = &DAT_100fb83a0;
    puVar13 = &DAT_100c37ad0;
LAB_10024c038:
    FUN_100005808(uVar15,puVar7,puVar13);
  }
  else {
    uVar12 = uVar15;
    _swift_getEnumCaseMultiPayload(uVar15,puVar7);
    if ((int)uVar12 != 1) {
      puVar7 = &DAT_100fb7f90;
      puVar13 = &DAT_100c3c630;
      goto LAB_10024c038;
    }
    TVar9.unknown = *(undefined **)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar10 = *(long *)(unaff_x22 + 0x40);
    lVar8 = *(long *)(unaff_x22 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x20))
              (TVar9.unknown,uVar15,*(undefined8 *)(unaff_x22 + 0x78));
    StoreKit::Transaction::_get_revocationDate(TVar9);
    (**(code **)(lVar2 + 0x38))(uVar12,1,1,uVar17);
    lVar20 = (long)*(int *)(lVar10 + 0x30);
    FUN_100011090(uVar1,lVar8,&DAT_100fb7f78,&DAT_100c37ab0);
    FUN_100011090(uVar12,lVar8 + lVar20,&DAT_100fb7f78,&DAT_100c37ab0);
    pcVar18 = *(code **)(lVar2 + 0x30);
    lVar10 = lVar8;
    (*pcVar18)(lVar8,1,uVar17);
    if ((int)lVar10 == 1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x60),&DAT_100fb7f78,&DAT_100c37ab0);
      FUN_100005808(uVar12,&DAT_100fb7f78,&DAT_100c37ab0);
      lVar8 = lVar8 + lVar20;
      (*pcVar18)(lVar8,1,uVar15);
      if ((int)lVar8 == 1) {
        TVar9.unknown = *(undefined **)(unaff_x22 + 0x48);
        FUN_100005808(TVar9.unknown,&DAT_100fb7f78,&DAT_100c37ab0);
LAB_10024c244:
        lVar8 = *(long *)(unaff_x22 + 0x80);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
        puVar19 = *(undefined8 **)(unaff_x22 + 0x10);
        StoreKit::Transaction::_get_expirationDate(TVar9);
        lVar10 = 0;
        FUN_10019fee0();
        FUN_100011090(uVar17,(long)puVar19 + (long)*(int *)(lVar10 + 0x18),&DAT_100fb7f78,
                      &DAT_100c37ab0);
        iVar5 = *(int *)(lVar10 + 0x1c);
        FUN_100005808(uVar17,&DAT_100fb7f78,&DAT_100c37ab0);
        (**(code **)(lVar8 + 8))(uVar12,uVar15);
        UVar11 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar11.unknown + -8) + 0x38))
                  ((long)puVar19 + (long)iVar5,1,1,UVar11.unknown);
        uVar12 = 0;
        *puVar19 = 0xd00000000000002d;
        puVar19[1] = 0x8000000100d8f1e0;
        puVar19[2] = 0x656d69746566694c;
        puVar19[3] = &DAT_e800000000000000;
        goto LAB_10024c050;
      }
LAB_10024c164:
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x48),&DAT_100fb8398,&DAT_100c3c780);
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      FUN_100011090(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x58),
                    &DAT_100fb7f78,&DAT_100c37ab0);
      lVar10 = lVar8 + lVar20;
      (*pcVar18)(lVar10,1,uVar12);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x58);
      if ((int)lVar10 == 1) {
        uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar8 = *(long *)(unaff_x22 + 0x30);
        FUN_100005808(uVar12,&DAT_100fb7f78,&DAT_100c37ab0);
        FUN_100005808(uVar15,&DAT_100fb7f78,&DAT_100c37ab0);
        (**(code **)(lVar8 + 8))(uVar17,uVar1);
        goto LAB_10024c164;
      }
      TVar9.unknown = *(undefined **)(unaff_x22 + 0x48);
      lVar10 = *(long *)(unaff_x22 + 0x30);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(lVar10 + 0x20))(uVar1,lVar8 + lVar20,uVar16);
      puVar19 = &DAT_100fb83b0;
      FUN_100003a00(&DAT_100fb83b0,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar6 = Swift::Equatable::___infix(uVar17,uVar1,uVar16,puVar19);
      pcVar18 = *(code **)(lVar10 + 8);
      (*pcVar18)(uVar1,uVar16);
      FUN_100005808(uVar12,&DAT_100fb7f78,&DAT_100c37ab0);
      FUN_100005808(uVar15,&DAT_100fb7f78,&DAT_100c37ab0);
      (*pcVar18)(uVar17,uVar16);
      FUN_100005808(TVar9.unknown,&DAT_100fb7f78,&DAT_100c37ab0);
      if (bVar6) goto LAB_10024c244;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  }
  lVar10 = 0;
  FUN_10019fee0();
  uVar12 = 1;
LAB_10024c050:
  uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),uVar12,1,lVar10);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010024c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024c324 | FUN_10024c324 */

void FUN_10024c324(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  byte *pbVar3;
  code *pcVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = 0;
  FUN_1002b86ec();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  pbVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_1002b5a40();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  pbVar8 = pbVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)pbVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pbVar6 = (byte *)(lVar9 - extraout_x12_00);
  FUN_1000c495c(param_2,pbVar7,FUN_1002b86ec);
  puVar2 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  pbVar3 = pbVar7;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(pbVar7,1,puVar2);
  if ((int)pbVar3 == 1) {
    pcVar4 = FUN_1002b86ec;
    pbVar8 = pbVar7;
LAB_10024c444:
    FUN_10005241c(pbVar8,pcVar4);
  }
  else {
    pbVar3 = pbVar7;
    (**(code **)(lVar10 + 0x30))(pbVar7,1,lVar1);
    if ((int)pbVar3 != 1) {
      FUN_1000523d8(pbVar7,pbVar8,FUN_1002b5a40);
      if (*pbVar8 < 3) {
        FUN_1000523d8(pbVar8,lVar9,FUN_1002b5a40);
        FUN_1000523d8(lVar9,pbVar6,FUN_1002b5a40);
        lVar9 = *(long *)(pbVar6 + *(int *)(lVar1 + 0x28) + 8);
        if (lVar9 != 0) {
          uVar5 = *(undefined8 *)(pbVar6 + *(int *)(lVar1 + 0x28));
          _swift_bridgeObjectRetain(lVar9);
          FUN_1002abb30(uVar5,lVar9);
          if (((uint)uVar5 & 0xff) != 6) {
            FUN_100247b80(param_1);
            FUN_10005241c(pbVar6,FUN_1002b5a40);
            uVar5 = 0;
            goto LAB_10024c484;
          }
        }
        pcVar4 = FUN_1002b5a40;
        pbVar8 = pbVar6;
      }
      else {
        pcVar4 = FUN_1002b5a40;
      }
      goto LAB_10024c444;
    }
    FUN_100005808(pbVar7,&DAT_100fb8220,&DAT_100c37df0);
  }
  uVar5 = 1;
LAB_10024c484:
  lVar1 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,uVar5,1,lVar1);
  return;
}



/* Address: 0x10024c58c | FUN_10024c58c */

bool FUN_10024c58c(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  Date DVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  long local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_70 - extraout_x8;
  puStack_68 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined *)(lVar11 - extraout_x12_00);
  lVar3 = 0;
  FUN_1002b86ec();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pcVar14 = puVar12 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1002b5a40();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  pcVar13 = pcVar14 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1000c495c();
  puVar2 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  pcVar4 = pcVar14;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(pcVar14,1,puVar2);
  if ((int)pcVar4 == 1) {
    pcVar8 = FUN_1002b86ec;
    pcVar13 = pcVar14;
  }
  else {
    pcVar4 = pcVar14;
    (**(code **)(lVar7 + 0x30))(pcVar14,1,lVar3);
    if ((int)pcVar4 == 1) {
      FUN_100005808(pcVar14,&DAT_100fb8220,&DAT_100c37df0);
      return false;
    }
    FUN_1000523d8(pcVar14,pcVar13,FUN_1002b5a40);
    if (pcVar13[*(int *)(lVar3 + 0x24)] == '\x01') {
      if (*pcVar13 != '\x04') {
        FUN_10005241c(pcVar13,FUN_1002b5a40);
        return true;
      }
      FUN_100011090(pcVar13 + *(int *)(lVar3 + 0x18),lVar9,&DAT_100fb7f78,&DAT_100c37ab0);
      puVar2 = puStack_68;
      lVar3 = local_70;
      lVar7 = lVar9;
      (**(code **)(local_70 + 0x30))(lVar9,1,puStack_68);
      if ((int)lVar7 != 1) {
        DVar5.unknown = puVar12;
        (**(code **)(lVar3 + 0x20))(puVar12,lVar9,puVar2);
        DVar5 = Foundation::Date::get_now(DVar5);
        Foundation::Date::addingTimeInterval(3600.0,DVar5);
        puVar6 = &DAT_100fb8390;
        FUN_100003a00(&DAT_100fb8390,PTR_typeMetadataAccessor_100ea7480,
                      PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
        bVar1 = Swift::Comparable::>__infix(lVar11,lVar10,puVar2,puVar6);
        pcVar8 = *(code **)(lVar3 + 8);
        (*pcVar8)(lVar10,puVar2);
        (*pcVar8)(lVar11,puVar2);
        (*pcVar8)(puVar12,puVar2);
        FUN_10005241c(pcVar13,FUN_1002b5a40);
        return bVar1;
      }
      FUN_10005241c(pcVar13,FUN_1002b5a40);
      FUN_100005808(lVar9,&DAT_100fb7f78,&DAT_100c37ab0);
      return true;
    }
    pcVar8 = FUN_1002b5a40;
  }
  FUN_10005241c(pcVar13,pcVar8);
  return false;
}



/* Address: 0x10024c8f4 | FUN_10024c8f4 */

void FUN_10024c8f4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_10024ca94;
                    /* WARNING: Could not recover jumptable at 0x00010024c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x10024c990 | FUN_10024c990 */

void FUN_10024c990(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x2f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_100248570(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10024c9f8 | FUN_10024c9f8 */

void FUN_10024c9f8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10024ca94;
                    /* WARNING: Could not recover jumptable at 0x00010024ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x10024ca94 | FUN_10024ca94 */

void FUN_10024ca94(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  FUN_100004594(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010024cad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10024cad8 | FUN_10024cad8 */

void FUN_10024cad8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x48) = pMVar2;
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10024cb64,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10024cb64 | FUN_10024cb64 */

void FUN_10024cb64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  puVar1 = &DAT_100c37ed0;
  _swift_getKeyPath(&DAT_100c37ed0);
  puVar2 = &DAT_100fb83c0;
  FUN_1000037f0(&DAT_100fb83c0,&DAT_100c37ef8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar1,puVar2);
  FUN_1000da768(unaff_x22 + 0x40);
  _swift_release(puVar1);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010024cbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024cbec | FUN_10024cbec */

void FUN_10024cbec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10024ffd4(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/DI+AppStore.swift",0x28,2,0x16,0x13,FUN_1002442e0,0,
                uVar1);
  return;
}



/* Address: 0x10024cc3c | FUN_10024cc3c */

void FUN_10024cc3c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fb81c8,&DAT_100c38060);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fb81c8,&DAT_100c38060);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
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
    FUN_100005808(param_3,&DAT_100fb81c8,&DAT_100c38060);
    puVar2 = &DAT_100ec3d78;
    _swift_allocObject(&DAT_100ec3d78,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c37ec0,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ec3da0;
    _swift_allocObject(&DAT_100ec3da0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c37ec8,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fb81c8,&DAT_100c38060);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x10024ced8 | FUN_10024ced8 */

void FUN_10024ced8(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  Transaction TVar5;
  Transactions TVar6;
  AsyncIterator AVar7;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = in_x3;
  lVar1 = 0;
  FUN_1001a5804();
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  puVar4 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  TVar5 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = TVar5.unknown;
  lVar1 = *(long *)(TVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  puVar4 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  lVar1 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  puVar4 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  TVar6 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = TVar6.unknown;
  lVar1 = *(long *)(TVar6.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  AVar7 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = AVar7.unknown;
  lVar1 = *(long *)(AVar7.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  _swift_task_switch(FUN_10024d040,0,0);
  return;
}



/* Address: 0x10024d040 | FUN_10024d040 */

void FUN_10024d040(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Transaction TVar6;
  Transactions TVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  TVar6.unknown = (undefined *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  _swift_weakLoadStrong();
  *(undefined **)(unaff_x22 + 0xd8) = TVar6.unknown;
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (TVar6.unknown != (undefined *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar3 = *(long *)(unaff_x22 + 0xb0);
    TVar7 = StoreKit::Transaction::get_updates(TVar6);
    StoreKit::Transaction::Transactions::makeAsyncIterator(TVar7);
    (**(code **)(lVar3 + 8))(uVar9,uVar1);
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    plVar8 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe8) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_10024d164;
    StoreKit::Transaction::Transactions::AsyncIterator::_next
              ((AsyncIterator)*(undefined **)(unaff_x22 + 0xa0));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010024d160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024d164 | FUN_10024d164 */

void FUN_10024d164(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xe8));
  _swift_task_switch(FUN_10024d1ac,0,0);
  return;
}



/* Address: 0x10024d1ac | FUN_10024d1ac */

void FUN_10024d1ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  Transaction TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = uVar6;
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x30))(uVar6,1,uVar1);
  if ((int)uVar7 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar9 = *(long *)(unaff_x22 + 200);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(lVar9 + 8))(uVar1,uVar7);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010024d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0xe0);
  FUN_10019ffdc(uVar6,*(undefined8 *)(unaff_x22 + 0x98),&DAT_100fb7f90,&DAT_100c3c630);
  StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar1);
  *(long *)(unaff_x22 + 0xf0) = lVar9;
  if (lVar9 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    FUN_1000da768(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    FUN_100004640(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar3 + 0x20))(lVar9,uVar1,lVar3);
    _swift_errorRelease(lVar9);
    FUN_100005808(uVar7,&DAT_100fb7f90,&DAT_100c3c630);
    FUN_100004594(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    plVar4 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10024d164;
    StoreKit::Transaction::Transactions::AsyncIterator::_next
              ((AsyncIterator)*(undefined **)(unaff_x22 + 0xa0));
    return;
  }
  TVar5.unknown = (undefined *)(ulong)*(uint *)(PTR__finish_100ea7dd0 + 4);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xf8) = TVar5.unknown;
  *(long *)TVar5.unknown = unaff_x22;
  *(code **)(TVar5.unknown + 8) = FUN_10024d3bc;
  StoreKit::Transaction::_finish(TVar5);
  return;
}



/* Address: 0x10024d3bc | FUN_10024d3bc */

void FUN_10024d3bc(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xf8));
  _swift_task_switch(FUN_10024d404,0,0);
  return;
}



/* Address: 0x10024d404 | FUN_10024d404 */

void FUN_10024d404(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x2f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x100) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10024d45c;
  FUN_100248570(plVar1,*(undefined8 *)(unaff_x22 + 0x60),0,0);
  return;
}



/* Address: 0x10024d45c | FUN_10024d45c */

void FUN_10024d45c(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar12 + 0x58);
  uVar2 = *(undefined8 *)(lVar12 + 0x60);
  lVar13 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x100));
  FUN_1000523d8(uVar2,uVar4,FUN_1001a5804);
  lVar3 = 0;
  FUN_10019fee0();
  lVar10 = *(long *)(lVar3 + -8);
  (**(code **)(lVar10 + 0x30))(uVar4,2,lVar3);
  bVar1 = (int)uVar4 == 0;
  if (bVar1) {
    FUN_1000523d8(*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(lVar12 + 0x68),FUN_10019fee0);
  }
  lVar6 = *(long *)(lVar12 + 0xd8);
  (**(code **)(lVar10 + 0x38))(*(undefined8 *)(lVar12 + 0x68),!bVar1,1,lVar3);
  _swift_beginAccess(lVar6 + 0x10,lVar12 + 0x38,0x20,0);
  pcVar11 = *(code **)(lVar6 + 0x10);
  if (pcVar11 == (code *)0x0) {
    uVar9 = *(undefined8 *)(lVar12 + 0x98);
    lVar3 = *(long *)(lVar12 + 0x78);
    uVar4 = *(undefined8 *)(lVar12 + 0x80);
    uVar2 = *(undefined8 *)(lVar12 + 0x70);
    FUN_100005808(*(undefined8 *)(lVar12 + 0x68),&DAT_100fb81c0,&DAT_100c37cc0);
    (**(code **)(lVar3 + 8))(uVar4,uVar2);
    FUN_100005808(uVar9,&DAT_100fb7f90,&DAT_100c3c630);
    _swift_endAccess(lVar12 + 0x38);
  }
  else {
    uVar7 = *(undefined8 *)(lVar12 + 0x98);
    lVar3 = *(long *)(lVar12 + 0x78);
    uVar2 = *(undefined8 *)(lVar12 + 0x80);
    uVar4 = *(undefined8 *)(lVar12 + 0x68);
    uVar9 = *(undefined8 *)(lVar12 + 0x70);
    uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0xd8) + 0x18);
    _swift_endAccess(lVar12 + 0x38);
    _swift_retain(uVar8);
    (*pcVar11)(uVar4);
    FUN_100004550(pcVar11,uVar8);
    FUN_100005808(uVar4,&DAT_100fb81c0,&DAT_100c37cc0);
    (**(code **)(lVar3 + 8))(uVar2,uVar9);
    FUN_100005808(uVar7,&DAT_100fb7f90,&DAT_100c3c630);
  }
  *(undefined8 *)(lVar12 + 0xe0) = *(undefined8 *)(lVar12 + 0xf0);
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(lVar12 + 0xe8) = plVar5;
  *plVar5 = lVar13;
  plVar5[1] = (long)FUN_10024d164;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(lVar12 + 0xa0));
  return;
}



/* Address: 0x10024d640 | FUN_10024d640 */

void FUN_10024d640(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10024d66c | FUN_10024d66c */

void FUN_10024d66c(undefined8 param_1)

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
  plVar3 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10024ced8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10024d6d8 | FUN_10024d6d8 */

void FUN_10024d6d8(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
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
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x10024d8f8 | FUN_10024d8f8 */

void FUN_10024d8f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10024d91c | FUN_10024d91c */

void FUN_10024d91c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10024cad8(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10024d980 | FUN_10024d980 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024d980(void)

{
  ID self;
  
  self = SKPaymentQueue::defaultQueue((ID)&_OBJC_CLASS___SKPaymentQueue);
  SKPaymentQueue::removeTransactionObserver_(self);
  FUN_100248454();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return;
}



/* Address: 0x10024d9e8 | _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::dealloc
               (ID param_1,SEL param_2)

{
  ID self;
  class_t *pcVar1;
  objc_super local_30;
  
  self = SKPaymentQueue::defaultQueue((ID)&_OBJC_CLASS___SKPaymentQueue);
  SKPaymentQueue::removeTransactionObserver_(self,param_1);
  pcVar1 = (class_t *)0x0;
  FUN_100248454();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x10024da68 | _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::paymentQueue:updatedTransactions: */

/* Function Stack Size: 0x20 bytes */

void _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::
     paymentQueue_updatedTransactions_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



/* Address: 0x10024da6c | _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::paymentQueue:shouldAddStorePayment:forProduct: */

/* Function Stack Size: 0x28 bytes */

bool _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::
     paymentQueue_shouldAddStorePayment_forProduct_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  return 1;
}



/* Address: 0x10024da74 | _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC22PasteLicensingAppStoreP33_4808941DE469D5AE2C5B414500B4428219StorePaymentHandler::init
             (ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  pcVar1 = (class_t *)0x0;
  FUN_100248454();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}



/* Address: 0x10024dab4 | FUN_10024dab4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10024dab4(void)

{
  return ZEXT816(0x100fb8270);
}



/* Address: 0x10024dad4 | FUN_10024dad4 */

void FUN_10024dad4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10024daf8 | FUN_10024daf8 */

void FUN_10024daf8(undefined8 param_1)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10024db68 | FUN_10024db68 */

void FUN_10024db68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10024ffd4(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/DI+AppStore.swift",0x28,2,0x16,0x13,FUN_1002442e0,0,
                uVar1);
  return;
}



/* Address: 0x10024dbb8 | thunk_FUN_10024dad4 */

void thunk_FUN_10024dad4(void)

{
  FUN_10024dad4();
  return;
}



/* Address: 0x10024dbbc | thunk_FUN_10024a1ac */

void thunk_FUN_10024a1ac(void)

{
  FUN_10024a1ac();
  return;
}



/* Address: 0x10024dbc0 | thunk_FUN_10024ca94 */

void thunk_FUN_10024ca94(void)

{
  FUN_10024ca94();
  return;
}



/* Address: 0x10024dbc4 | FUN_10024dbc4 */

void FUN_10024dbc4(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Address: 0x10024dbe8 | FUN_10024dbe8 */

void FUN_10024dbe8(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Address: 0x10024dbf4 | FUN_10024dbf4 */

void FUN_10024dbf4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = param_1;
  FUN_10024ddf4();
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
    FUN_10019fee0();
    uVar3 = 1;
  }
  else {
    if (DAT_100fb8430 != -1) {
      _swift_once(&DAT_100fb8430,FUN_10024dcc4);
    }
    lVar2 = 0;
    FUN_10019fee0();
    FUN_1000cd990();
    FUN_1001a0764();
    uVar3 = 0;
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar3,2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010024dc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024dca0 | FUN_10024dca0 */

void FUN_10024dca0(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10024dcc4 | FUN_10024dcc4 */

void FUN_10024dcc4(void)

{
  int iVar1;
  undefined *puVar2;
  Date DVar3;
  Date DVar4;
  URL UVar5;
  long extraout_x8;
  
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined *)0x0;
  FUN_10019fee0();
  FUN_1000ce204();
  DVar3.unknown = puVar2;
  FUN_1000cd990(puVar2,&DAT_1010578e0);
  Foundation::Date::get_distantFuture(DVar3);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,0,1,DVar4.unknown);
  iVar1 = *(int *)(puVar2 + 0x1c);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(DVar3.unknown + iVar1,1,1,UVar5.unknown);
  *(undefined8 *)DVar3.unknown = 0xd00000000000001c;
  *(undefined8 *)(DVar3.unknown + 8) = 0x8000000100d9f310;
  *(undefined8 *)(DVar3.unknown + 0x10) = 0x67696c4674736554;
  *(undefined8 *)(DVar3.unknown + 0x18) = 0xea00000000007468;
  FUN_10024dfec(&stack0xffffffffffffffc0 + -extraout_x8,DVar3.unknown + *(int *)(puVar2 + 0x18));
  return;
}



/* Address: 0x10024ddf4 | FUN_10024ddf4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_10024ddf4(void)

{
  bool bVar1;
  URL UVar2;
  ID self;
  URL UVar3;
  NSURL *pNVar4;
  NSString *pNVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  local_50 = 0;
  UVar3.unknown = (undefined *)NSBundle::bundleURL(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
  _SecStaticCodeCreateWithPath(pNVar4,0,&local_50);
  (**(code **)(lVar6 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  lVar6 = local_50;
  if (((int)pNVar4 == 0) && (local_50 != 0)) {
    local_58 = 0;
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _SecRequirementCreateWithString(pNVar5,0,&local_58);
    if (((int)pNVar5 == 0) && (local_58 != 0)) {
      _SecStaticCodeCheckValidity(lVar6,0,local_58);
      bVar1 = (int)lVar6 == 0;
      goto LAB_10024ded4;
    }
  }
  bVar1 = false;
LAB_10024ded4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar1;
}


