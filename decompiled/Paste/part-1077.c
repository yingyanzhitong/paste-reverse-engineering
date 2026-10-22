/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7b5f0 | FUN_100b7b5f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7b5f0(char *param_1,void *param_2,char *param_3,code *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  char *pcVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined8 local_18;
  char *pcStack_10;
  
  FUN_100b6fd78();
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar6 = param_1;
  pcVar4 = param_4;
  FUN_100b7c984();
  lVar7 = *(long *)(pcVar6 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar7 + 0x40));
  FUN_100b7b8c8(extraout_x9 - extraout_x8);
  FUN_100b7ca08();
  FUN_100b7ca24(*(undefined8 *)(lVar7 + 8));
  FUN_100b6f870();
  FUN_100b7c9a8();
  FUN_100b7ca84();
  FUN_100b7ca7c();
  FUN_100b7c954("Reading previous ");
  FUN_100b7c9d8();
  FUN_100b7ca74();
  FUN_100b6f8ec();
  FUN_100b7ca98();
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  SVar10.bridgeObject = pcVar4;
  SVar10.str = param_3;
  Swift::String::append(SVar8,SVar10);
  FUN_100b7c970();
  pcVar1 = &DAT_00000001;
  pcVar3 = pcStack_10;
  FUN_100b7c940(1,local_18);
  FUN_100b6f8ec();
  FUN_100b7ca68();
  pcVar2 = "readDataFromPath:error:";
  FUN_100b7c9f8();
  pcVar6 = pcVar1;
  FUN_100b6fa78();
  FUN_100b7ca48();
  if (pcVar1 == (char *)0x0) {
    Foundation::__convertNSErrorToError();
    pcVar1 = pcVar6;
    FUN_100b6fa78();
    _swift_willThrow();
    FUN_100b7c9a8();
    FUN_100b7ca40();
    FUN_100b7c914("Failed to read previous ");
    FUN_100b7c9d8();
    SVar9.bridgeObject = pcVar2;
    SVar9.str = pcVar1;
    SVar11.bridgeObject = pcVar4;
    SVar11.str = pcVar3;
    Swift::String::append(SVar9,SVar11);
    FUN_100b6f980();
    FUN_100b7c8d4();
    FUN_100b7c970();
    FUN_100b7c97c();
    FUN_100b7c8f8();
    FUN_100b6730c(&DAT_101044978);
    FUN_100b7c9b8();
    FUN_100b7c92c(4,0,pcStack_10);
    _swift_errorRelease(pcVar6);
    FUN_100b7c9f0();
    FUN_100b6f980();
    pcVar6 = (char *)0x0;
  }
  else {
    FUN_100b7c97c();
    FUN_100b7ca30();
    FUN_100b6f868();
    (*param_4)(pcVar6,pcVar2);
    FUN_100b7ca8c();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    FUN_100b56ea0(pcVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b7b828 | FUN_100b7b828 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b7b828(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ID IVar1;
  long unaff_x20;
  String SVar2;
  String SVar3;
  
  FUN_100b7c984();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager),
                        "getSentryPathAsURL");
  FUN_100b7ca50(IVar1);
  FUN_100b6f868();
  FUN_100b7a6d8();
  SVar2.bridgeObject = &DAT_e600000000000000;
  SVar2.str = (char *)0x65746174732e;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  FUN_100b7c9c4();
  FUN_100b6f8ec();
  FUN_100b7c9e0();
  FUN_100b5e408();
  return;
}



/* Address: 0x100b7b8c8 | FUN_100b7b8c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b7b8c8(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  ID IVar2;
  char *pcVar3;
  long unaff_x20;
  String SVar4;
  String SVar5;
  
  lVar1 = param_1;
  FUN_100b7c984();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  pcVar3 = "getSentryPathAsURL";
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager),
                        "getSentryPathAsURL");
  FUN_100b7ca50(IVar2);
  FUN_100b6f868();
  Swift::_StringGuts::grow(0x11,(_StringGuts)pcVar3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100b7a6d8(param_1);
  FUN_100b7ca74();
  FUN_100b6f8ec();
  SVar4.bridgeObject = &DAT_e600000000000000;
  SVar4.str = (char *)0x65746174732e;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  FUN_100b7c9c4();
  FUN_100b6f8ec();
  FUN_100b7c9e0();
  FUN_100b5e408();
  return;
}



/* Address: 0x100b7b9a0 | FUN_100b7b9a0 */

void FUN_100b7b9a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryScopePersistentStore",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7b9cc);
  (*pcVar1)();
}



/* Address: 0x100b7b9cc | _TtC6Sentry26SentryScopePersistentStore::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b7b9a0();
  FUN_100b7ba08();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b7b9d8 | FUN_100b7b9d8 */

void FUN_100b7b9d8(void)

{
  FUN_100b7ba08();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b7ba08 | FUN_100b7ba08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7ba08(void)

{
  return ZEXT816(0x100f9fe08);
}



/* Address: 0x100b7ba28 | _TtC6Sentry26SentryScopePersistentStore::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryScopePersistentStore::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + fileManager));
  return;
}



/* Address: 0x100b7ba38 | FUN_100b7ba38 */

void FUN_100b7ba38(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccd7f0);
  return;
}



/* Address: 0x100b7ba44 | FUN_100b7ba44 */

void FUN_100b7ba44(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7ba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x60))();
  return;
}



/* Address: 0x100b7ba60 | FUN_100b7ba60 */

void FUN_100b7ba60(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x80))();
  return;
}



/* Address: 0x100b7ba7c | FUN_100b7ba7c */

void FUN_100b7ba7c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7ba94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x90))();
  return;
}



/* Address: 0x100b7ba98 | FUN_100b7ba98 */

void FUN_100b7ba98(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xa0))();
  return;
}



/* Address: 0x100b7bab4 | FUN_100b7bab4 */

void FUN_100b7bab4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7bacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xb0))();
  return;
}



/* Address: 0x100b7bad0 | FUN_100b7bad0 */

void FUN_100b7bad0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xd0))();
  return;
}



/* Address: 0x100b7baec | FUN_100b7baec */

void FUN_100b7baec(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7bb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xe0))();
  return;
}



/* Address: 0x100b7bb08 | FUN_100b7bb08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100b7bb08(Data param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  String SVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  NSData *pNVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  long lVar9;
  undefined *puVar10;
  Dictionary<undefined,undefined> DVar11;
  AnyHashable AVar12;
  char *pcVar13;
  _StringGuts _Var14;
  void *pvVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  String SVar23;
  String SVar24;
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
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  
  pvVar15 = param_4;
  pNVar6 = Foundation::Data::_bridgeToObjectiveC(param_1);
  pcVar13 = "deserializeDictionaryFromJsonData:";
  IVar7 = SentrySerialization::deserializeDictionaryFromJsonData_
                    ((ID)&objc::class_t::SentrySerialization,"deserializeDictionaryFromJsonData:",
                     (ID)pNVar6);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar7 == 0) {
    FUN_100b84dac(0);
    local_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x38,(_StringGuts)pcVar13);
    SVar27.bridgeObject = (void *)0x8000000100dca320;
    SVar27.str = (char *)0xd000000000000016;
    SVar29.bridgeObject = pvVar15;
    SVar29.str = (char *)pNVar6;
    Swift::String::append(SVar27,SVar29);
    SVar23.bridgeObject = param_4;
    SVar23.str = param_3;
    SVar30.bridgeObject = pvVar15;
    SVar30.str = (char *)pNVar6;
    Swift::String::append(SVar23,SVar30);
    SVar24.bridgeObject = (void *)0x8000000100dca340;
    SVar24.str = (char *)0xd000000000000020;
    SVar31.bridgeObject = pvVar15;
    SVar31.str = (char *)pNVar6;
    Swift::String::append(SVar24,SVar31);
    uVar4 = uStack_a8;
    FUN_100b84df8(4,local_b0,uStack_a8,0xd00000000000006e,0x8000000100dca370,0x1c);
    _swift_bridgeObjectRelease(uVar4);
    return (undefined *)0x0;
  }
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar16 = (ulong *)(DVar8.unknown + 0x40);
  uVar17 = 1L << ((ulong)(byte)DVar8.unknown[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar17 < 0x40) {
    uVar19 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar19 = uVar19 & *puVar16;
  uVar17 = uVar17 + 0x3f >> 6;
  _swift_bridgeObjectRetain(DVar8.unknown);
  lVar20 = 0;
  lVar22 = 0;
  if (uVar19 == 0) goto LAB_100b7bc60;
LAB_100b7bc24:
  uVar21 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
  uVar19 = uVar19 - 1 & uVar19;
  uVar21 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) | lVar20 << 6;
  FUN_1000f1c9c(*(long *)(DVar8.unknown + 0x30) + uVar21 * 0x28,&local_100);
  FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + uVar21 * 0x20,&uStack_d8);
  lVar9 = lVar20;
  do {
    _memcpy(&local_b0,&local_100,0x48);
    if (local_98 == 0) {
      _swift_release(DVar8.unknown);
      DVar11 = DVar8;
      FUN_100b727ac(DVar8.unknown);
      _swift_bridgeObjectRelease(DVar8.unknown);
      return DVar11.unknown;
    }
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    lStack_e8 = local_98;
    uStack_f0 = uStack_a0;
    local_e0 = local_90;
    FUN_100011080(auStack_88,&local_120);
    puVar10 = &DAT_101044968;
    FUN_100b6730c();
    uVar21 = 0;
    _Var14.unknown = (undefined *)&local_120;
    pcVar13 = puVar3 + 8;
    _swift_dynamicCast();
    if ((uVar21 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar8.unknown);
      FUN_100b84dac(0);
      local_120 = 0;
      uStack_118 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var14);
      SVar25.bridgeObject = (void *)0x8000000100dca320;
      SVar25.str = (char *)0xd000000000000016;
      SVar32.bridgeObject = puVar10;
      SVar32.str = pcVar13;
      Swift::String::append(SVar25,SVar32);
      SVar2.bridgeObject = param_4;
      SVar2.str = param_3;
      SVar33.bridgeObject = puVar10;
      SVar33.str = pcVar13;
      Swift::String::append(SVar2,SVar33);
      AVar12.unknown = (undefined *)0xd000000000000018;
      SVar26.bridgeObject = (void *)0x8000000100dca3e0;
      SVar26.str = (char *)0xd000000000000018;
      SVar34.bridgeObject = puVar10;
      SVar34.str = pcVar13;
      Swift::String::append(SVar26,SVar34);
      SVar27 = Swift::AnyHashable::get_description(AVar12);
      SVar35.bridgeObject = puVar10;
      SVar35.str = pcVar13;
      Swift::String::append(SVar27,SVar35);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      SVar28.bridgeObject = (void *)0x8000000100dca400;
      SVar28.str = (char *)0xd000000000000016;
      SVar36.bridgeObject = puVar10;
      SVar36.str = pcVar13;
      Swift::String::append(SVar28,SVar36);
      uVar4 = uStack_118;
      FUN_100b84df8(4,local_120,uStack_118,0xd00000000000006e,0x8000000100dca370,0x30);
      _swift_bridgeObjectRelease(uVar4);
      FUN_100089674(&local_100);
      _swift_release(DVar8.unknown);
      return (undefined *)0x0;
    }
    _swift_bridgeObjectRelease(local_128);
    FUN_100089674(&local_100);
    lVar20 = lVar9;
    lVar22 = lVar9;
    if (uVar19 != 0) goto LAB_100b7bc24;
LAB_100b7bc60:
    lVar1 = lVar22 + 1;
    if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100b7bff0);
      (*pcVar5)();
    }
    lVar9 = lVar22;
    if (lVar1 < (long)uVar17) {
      uVar19 = puVar16[lVar1];
      lVar20 = lVar1;
      if (uVar19 != 0) goto LAB_100b7bc24;
      lVar20 = lVar22 + 2;
      lVar9 = lVar1;
      if (lVar20 < (long)uVar17) {
        uVar19 = puVar16[lVar20];
        if (uVar19 != 0) goto LAB_100b7bc24;
        lVar1 = lVar22 + 3;
        lVar9 = lVar20;
        if (lVar1 < (long)uVar17) {
          uVar19 = puVar16[lVar1];
          lVar20 = lVar1;
          if (uVar19 != 0) goto LAB_100b7bc24;
          lVar20 = lVar22 + 4;
          lVar9 = lVar1;
          if (lVar20 < (long)uVar17) {
            uVar19 = puVar16[lVar20];
            if (uVar19 != 0) goto LAB_100b7bc24;
            lVar1 = lVar22 + 5;
            lVar9 = lVar20;
            if (lVar1 < (long)uVar17) {
              uVar19 = puVar16[lVar1];
              lVar20 = lVar1;
              if (uVar19 != 0) goto LAB_100b7bc24;
              lVar20 = lVar22 + 6;
              lVar9 = lVar1;
              if (lVar20 < (long)uVar17) {
                uVar19 = puVar16[lVar20];
                if (uVar19 != 0) goto LAB_100b7bc24;
                lVar1 = lVar22 + 7;
                lVar9 = lVar20;
                if (lVar1 < (long)uVar17) {
                  uVar19 = puVar16[lVar1];
                  lVar20 = lVar1;
                  if (uVar19 != 0) goto LAB_100b7bc24;
                  lVar9 = lVar22 + 8;
                  puVar18 = (ulong *)(DVar8.unknown + lVar22 * 8 + 0x80);
                  while (lVar20 = lVar9, lVar9 = uVar17 - 1, lVar20 < (long)uVar17) {
                    uVar19 = *puVar18;
                    lVar9 = lVar20 + 1;
                    puVar18 = puVar18 + 1;
                    if (uVar19 != 0) goto LAB_100b7bc24;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar19 = 0;
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  } while( true );
}



/* Address: 0x100b7bff0 | FUN_100b7bff0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100b7bff0(Data param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  String SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  NSData *pNVar7;
  ID IVar8;
  Dictionary<undefined,undefined> DVar9;
  long lVar10;
  Dictionary<undefined,undefined> DVar11;
  AnyHashable AVar12;
  char *pcVar13;
  _StringGuts _Var14;
  void *pvVar15;
  undefined *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  String SVar24;
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
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  
  pvVar15 = param_4;
  pNVar7 = Foundation::Data::_bridgeToObjectiveC(param_1);
  pcVar13 = "deserializeDictionaryFromJsonData:";
  IVar8 = SentrySerialization::deserializeDictionaryFromJsonData_
                    ((ID)&objc::class_t::SentrySerialization,"deserializeDictionaryFromJsonData:",
                     (ID)pNVar7);
  puVar4 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar8 == 0) {
    FUN_100b84dac(0);
    local_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x38,(_StringGuts)pcVar13);
    SVar28.bridgeObject = (void *)0x8000000100dca320;
    SVar28.str = (char *)0xd000000000000016;
    SVar30.bridgeObject = pvVar15;
    SVar30.str = (char *)pNVar7;
    Swift::String::append(SVar28,SVar30);
    SVar24.bridgeObject = param_4;
    SVar24.str = param_3;
    SVar31.bridgeObject = pvVar15;
    SVar31.str = (char *)pNVar7;
    Swift::String::append(SVar24,SVar31);
    SVar25.bridgeObject = (void *)0x8000000100dca340;
    SVar25.str = (char *)0xd000000000000020;
    SVar32.bridgeObject = pvVar15;
    SVar32.str = (char *)pNVar7;
    Swift::String::append(SVar25,SVar32);
    uVar5 = uStack_a8;
    FUN_100b84df8(4,local_b0,uStack_a8,0xd00000000000006e,0x8000000100dca370,0x1c);
    _swift_bridgeObjectRelease(uVar5);
    return (undefined *)0x0;
  }
  DVar9 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar17 = (ulong *)(DVar9.unknown + 0x40);
  uVar18 = 1L << ((ulong)(byte)DVar9.unknown[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((long)uVar18 < 0x40) {
    uVar20 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar20 = uVar20 & *puVar17;
  uVar18 = uVar18 + 0x3f >> 6;
  _swift_bridgeObjectRetain(DVar9.unknown);
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar21 = 0;
  lVar23 = 0;
  if (uVar20 == 0) goto LAB_100b7c148;
LAB_100b7c10c:
  uVar22 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
  uVar20 = uVar20 - 1 & uVar20;
  uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lVar21 << 6;
  FUN_1000f1c9c(*(long *)(DVar9.unknown + 0x30) + uVar22 * 0x28,&local_100);
  FUN_10000cbfc(*(long *)(DVar9.unknown + 0x38) + uVar22 * 0x20,&uStack_d8);
  lVar10 = lVar21;
  do {
    _memcpy(&local_b0,&local_100,0x48);
    if (local_98 == 0) {
      _swift_release(DVar9.unknown);
      DVar11 = DVar9;
      FUN_100b72ad4(DVar9.unknown);
      _swift_bridgeObjectRelease(DVar9.unknown);
      return DVar11.unknown;
    }
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    lStack_e8 = local_98;
    uStack_f0 = uStack_a0;
    local_e0 = local_90;
    FUN_100011080(auStack_88,&local_120);
    uVar22 = 0;
    _Var14.unknown = (undefined *)&local_120;
    pcVar13 = puVar4 + 8;
    puVar16 = puVar3;
    _swift_dynamicCast();
    if ((uVar22 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar9.unknown);
      FUN_100b84dac(0);
      local_120 = 0;
      uStack_118 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var14);
      SVar26.bridgeObject = (void *)0x8000000100dca320;
      SVar26.str = (char *)0xd000000000000016;
      SVar33.bridgeObject = puVar16;
      SVar33.str = pcVar13;
      Swift::String::append(SVar26,SVar33);
      SVar2.bridgeObject = param_4;
      SVar2.str = param_3;
      SVar34.bridgeObject = puVar16;
      SVar34.str = pcVar13;
      Swift::String::append(SVar2,SVar34);
      AVar12.unknown = (undefined *)0xd000000000000018;
      SVar27.bridgeObject = (void *)0x8000000100dca3e0;
      SVar27.str = (char *)0xd000000000000018;
      SVar35.bridgeObject = puVar16;
      SVar35.str = pcVar13;
      Swift::String::append(SVar27,SVar35);
      SVar28 = Swift::AnyHashable::get_description(AVar12);
      SVar36.bridgeObject = puVar16;
      SVar36.str = pcVar13;
      Swift::String::append(SVar28,SVar36);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      SVar29.bridgeObject = (void *)0x8000000100dca400;
      SVar29.str = (char *)0xd000000000000016;
      SVar37.bridgeObject = puVar16;
      SVar37.str = pcVar13;
      Swift::String::append(SVar29,SVar37);
      uVar5 = uStack_118;
      FUN_100b84df8(4,local_120,uStack_118,0xd00000000000006e,0x8000000100dca370,0x30);
      _swift_bridgeObjectRelease(uVar5);
      FUN_100089674(&local_100);
      _swift_release(DVar9.unknown);
      return (undefined *)0x0;
    }
    _swift_bridgeObjectRelease(local_128);
    FUN_100089674(&local_100);
    lVar21 = lVar10;
    lVar23 = lVar10;
    if (uVar20 != 0) goto LAB_100b7c10c;
LAB_100b7c148:
    lVar1 = lVar23 + 1;
    if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100b7c4c4);
      (*pcVar6)();
    }
    lVar10 = lVar23;
    if (lVar1 < (long)uVar18) {
      uVar20 = puVar17[lVar1];
      lVar21 = lVar1;
      if (uVar20 != 0) goto LAB_100b7c10c;
      lVar21 = lVar23 + 2;
      lVar10 = lVar1;
      if (lVar21 < (long)uVar18) {
        uVar20 = puVar17[lVar21];
        if (uVar20 != 0) goto LAB_100b7c10c;
        lVar1 = lVar23 + 3;
        lVar10 = lVar21;
        if (lVar1 < (long)uVar18) {
          uVar20 = puVar17[lVar1];
          lVar21 = lVar1;
          if (uVar20 != 0) goto LAB_100b7c10c;
          lVar21 = lVar23 + 4;
          lVar10 = lVar1;
          if (lVar21 < (long)uVar18) {
            uVar20 = puVar17[lVar21];
            if (uVar20 != 0) goto LAB_100b7c10c;
            lVar1 = lVar23 + 5;
            lVar10 = lVar21;
            if (lVar1 < (long)uVar18) {
              uVar20 = puVar17[lVar1];
              lVar21 = lVar1;
              if (uVar20 != 0) goto LAB_100b7c10c;
              lVar21 = lVar23 + 6;
              lVar10 = lVar1;
              if (lVar21 < (long)uVar18) {
                uVar20 = puVar17[lVar21];
                if (uVar20 != 0) goto LAB_100b7c10c;
                lVar1 = lVar23 + 7;
                lVar10 = lVar21;
                if (lVar1 < (long)uVar18) {
                  uVar20 = puVar17[lVar1];
                  lVar21 = lVar1;
                  if (uVar20 != 0) goto LAB_100b7c10c;
                  lVar10 = lVar23 + 8;
                  puVar19 = (ulong *)(DVar9.unknown + lVar23 * 8 + 0x80);
                  while (lVar21 = lVar10, lVar10 = uVar18 - 1, lVar21 < (long)uVar18) {
                    uVar20 = *puVar19;
                    lVar10 = lVar21 + 1;
                    puVar19 = puVar19 + 1;
                    if (uVar20 != 0) goto LAB_100b7c10c;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar20 = 0;
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  } while( true );
}



/* Address: 0x100b7c4c4 | FUN_100b7c4c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100b7c4c4(Data param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  NSData *pNVar4;
  ID IVar5;
  Dictionary<undefined,undefined> DVar6;
  long lVar7;
  Dictionary<undefined,undefined> DVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  undefined1 auStack_88 [40];
  
  pvVar10 = param_4;
  pNVar4 = Foundation::Data::_bridgeToObjectiveC(param_1);
  pcVar9 = "deserializeDictionaryFromJsonData:";
  IVar5 = SentrySerialization::deserializeDictionaryFromJsonData_
                    ((ID)&objc::class_t::SentrySerialization,"deserializeDictionaryFromJsonData:",
                     (ID)pNVar4);
  if (IVar5 == 0) {
    FUN_100b84dac(0);
    local_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x38,(_StringGuts)pcVar9);
    SVar17.bridgeObject = (void *)0x8000000100dca320;
    SVar17.str = (char *)0xd000000000000016;
    SVar20.bridgeObject = pvVar10;
    SVar20.str = (char *)pNVar4;
    Swift::String::append(SVar17,SVar20);
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    SVar21.bridgeObject = pvVar10;
    SVar21.str = (char *)pNVar4;
    Swift::String::append(SVar18,SVar21);
    SVar19.bridgeObject = (void *)0x8000000100dca340;
    SVar19.str = (char *)0xd000000000000020;
    SVar22.bridgeObject = pvVar10;
    SVar22.str = (char *)pNVar4;
    Swift::String::append(SVar19,SVar22);
    uVar2 = uStack_a8;
    FUN_100b84df8(4,local_b0,uStack_a8,0xd00000000000006e,0x8000000100dca370,0x1c);
    _swift_bridgeObjectRelease(uVar2);
    return (undefined *)0x0;
  }
  DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar13 = (ulong *)(DVar6.unknown + 0x40);
  uVar11 = 1L << ((ulong)(byte)DVar6.unknown[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar16 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  uVar11 = uVar11 + 0x3f >> 6;
  _swift_bridgeObjectRetain(DVar6.unknown);
  lVar15 = 0;
  lVar7 = 0;
  if (uVar16 == 0) goto LAB_100b7c608;
LAB_100b7c5cc:
  uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar16 = uVar16 - 1 & uVar16;
  uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar7 << 6;
  FUN_1000f1c9c(*(long *)(DVar6.unknown + 0x30) + uVar14 * 0x28,&local_100);
  FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + uVar14 * 0x20,&uStack_d8);
  do {
    _memcpy(&local_b0,&local_100,0x48);
    if (local_98 == 0) {
      _swift_release(DVar6.unknown);
      DVar8 = DVar6;
      FUN_100b7244c(DVar6.unknown);
      _swift_bridgeObjectRelease(DVar6.unknown);
      return DVar8.unknown;
    }
    FUN_100089674(&local_b0);
    FUN_100004594(auStack_88);
    lVar15 = lVar7;
    if (uVar16 != 0) goto LAB_100b7c5cc;
LAB_100b7c608:
    lVar1 = lVar15 + 1;
    if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b7c834);
      (*pcVar3)();
    }
    lVar7 = lVar15;
    if (lVar1 < (long)uVar11) {
      uVar16 = puVar13[lVar1];
      lVar7 = lVar1;
      if (uVar16 != 0) goto LAB_100b7c5cc;
      lVar1 = lVar15 + 2;
      if (lVar1 < (long)uVar11) {
        uVar16 = puVar13[lVar1];
        lVar7 = lVar1;
        if (uVar16 != 0) goto LAB_100b7c5cc;
        lVar1 = lVar15 + 3;
        if (lVar1 < (long)uVar11) {
          uVar16 = puVar13[lVar1];
          lVar7 = lVar1;
          if (uVar16 != 0) goto LAB_100b7c5cc;
          lVar1 = lVar15 + 4;
          if (lVar1 < (long)uVar11) {
            uVar16 = puVar13[lVar1];
            lVar7 = lVar1;
            if (uVar16 != 0) goto LAB_100b7c5cc;
            lVar1 = lVar15 + 5;
            if (lVar1 < (long)uVar11) {
              uVar16 = puVar13[lVar1];
              lVar7 = lVar1;
              if (uVar16 != 0) goto LAB_100b7c5cc;
              lVar1 = lVar15 + 6;
              if (lVar1 < (long)uVar11) {
                uVar16 = puVar13[lVar1];
                lVar7 = lVar1;
                if (uVar16 != 0) goto LAB_100b7c5cc;
                lVar1 = lVar15 + 7;
                if (lVar1 < (long)uVar11) {
                  uVar16 = puVar13[lVar1];
                  lVar7 = lVar1;
                  if (uVar16 != 0) goto LAB_100b7c5cc;
                  lVar1 = lVar15 + 8;
                  puVar12 = (ulong *)(DVar6.unknown + lVar15 * 8 + 0x80);
                  while (lVar15 = lVar1, lVar7 = uVar11 - 1, lVar15 < (long)uVar11) {
                    uVar16 = *puVar12;
                    lVar1 = lVar15 + 1;
                    puVar12 = puVar12 + 1;
                    lVar7 = lVar15;
                    if (uVar16 != 0) goto LAB_100b7c5cc;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar16 = 0;
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  } while( true );
}



/* Address: 0x100b7c834 | FUN_100b7c834 */

undefined1  [16] FUN_100b7c834(void)

{
  return ZEXT816(0x100f372d8);
}



/* Address: 0x100b7c844 | thunk_FUN_100b7c848 */

void thunk_FUN_100b7c848(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101045090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101045098;
  FUN_100b6734c(&DAT_101045098);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_101045090 = puVar2;
  return;
}



/* Address: 0x100b7c848 | FUN_100b7c848 */

void FUN_100b7c848(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101045090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101045098;
  FUN_100b6734c(&DAT_101045098);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_101045090 = puVar2;
  return;
}



/* Address: 0x100b7c890 | thunk_FUN_100b7c894 */

void thunk_FUN_100b7c894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010450a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a004;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a004,&DAT_100f372d8);
  DAT_1010450a0 = pTVar1;
  return;
}



/* Address: 0x100b7c894 | FUN_100b7c894 */

void FUN_100b7c894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010450a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a004;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a004,&DAT_100f372d8);
  DAT_1010450a0 = pTVar1;
  return;
}



/* Address: 0x100b7c8d4 | FUN_100b7c8d4 */

void FUN_100b7c8d4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)0xef203a6874617020;
  SVar1.str = (char *)0x746120656c696620;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7c8f8 | FUN_100b7c8f8 */

void FUN_100b7c8f8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)0xea0000000000203a;
  SVar1.str = (char *)0x6e6f73616572202c;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7c914 | FUN_100b7c914 */

void FUN_100b7c914(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 - 0x20U | 0x8000000000000000);
  SVar1.str = (char *)0xd000000000000018;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7c92c | FUN_100b7c92c */

void FUN_100b7c92c(void)

{
  FUN_100b84df8();
  return;
}



/* Address: 0x100b7c940 | FUN_100b7c940 */

void FUN_100b7c940(void)

{
  FUN_100b84df8();
  return;
}



/* Address: 0x100b7c954 | FUN_100b7c954 */

void FUN_100b7c954(long param_1)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x68) = 0xd000000000000011;
  *(ulong *)(unaff_x29 + -0x60) = param_1 - 0x20U | 0x8000000000000000;
  return;
}



/* Address: 0x100b7c970 | FUN_100b7c970 */

void FUN_100b7c970(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  void *unaff_x25;
  char *unaff_x27;
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = unaff_x25;
  SVar1.str = unaff_x27;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7c97c | FUN_100b7c97c */

void FUN_100b7c97c(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b7c984 | FUN_100b7c984 */

void FUN_100b7c984(void)

{
  Foundation::URL::typeMetadataAccessor();
  return;
}



/* Address: 0x100b7c98c | FUN_100b7c98c */

void FUN_100b7c98c(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 - 0x20U | 0x8000000000000000);
  SVar1.str = (char *)0xd000000000000012;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7c9a8 | FUN_100b7c9a8 */

void FUN_100b7c9a8(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0xe000000000000000;
  return;
}



/* Address: 0x100b7c9b8 | FUN_100b7c9b8 */

void FUN_100b7c9b8(void)

{
  long unaff_x29;
  
  Swift::__print_unlocked(unaff_x29 + -0x78,unaff_x29 + -0x68);
  return;
}



/* Address: 0x100b7c9c4 | FUN_100b7c9c4 */

void FUN_100b7c9c4(undefined8 param_1,undefined8 param_2,URL param_3)

{
  long unaff_x29;
  
  Foundation::URL::appendingPathComponent(*(String *)(unaff_x29 + -0x40),param_3);
  return;
}



/* Address: 0x100b7c9d8 | FUN_100b7c9d8 */

void FUN_100b7c9d8(void)

{
  FUN_100b7a6d8();
  return;
}



/* Address: 0x100b7c9e0 | FUN_100b7c9e0 */

void FUN_100b7c9e0(void)

{
  long unaff_x24;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x24 + 8))();
  return;
}



/* Address: 0x100b7c9f0 | FUN_100b7c9f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b7c9f0(void)

{
  return 0;
}



/* Address: 0x100b7c9f8 | FUN_100b7c9f8 */

void FUN_100b7c9f8(undefined8 param_1,SEL param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,param_2);
  return;
}



/* Address: 0x100b7ca08 | FUN_100b7ca08 */

String FUN_100b7ca08(URL param_1)

{
  String SVar1;
  
  SVar1 = Foundation::URL::get_path(param_1);
  return SVar1;
}



/* Address: 0x100b7ca10 | FUN_100b7ca10 */

void FUN_100b7ca10(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b7ca18 | FUN_100b7ca18 */

void FUN_100b7ca18(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b7ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b7ca24 | FUN_100b7ca24 */

void FUN_100b7ca24(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100b7ca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b7ca30 | FUN_100b7ca30 */

void FUN_100b7ca30(void)

{
  Data unaff_x20;
  
  Foundation::Data::__unconditionallyBridgeFromObjectiveC(unaff_x20);
  return;
}



/* Address: 0x100b7ca38 | FUN_100b7ca38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b7ca38(void)

{
  return 0;
}



/* Address: 0x100b7ca40 | FUN_100b7ca40 */

void FUN_100b7ca40(undefined8 param_1,_StringGuts param_2)

{
  Swift::_StringGuts::grow(0x37,param_2);
  return;
}



/* Address: 0x100b7ca48 | FUN_100b7ca48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b7ca48(void)

{
  long unaff_x29;
  
  return *(undefined8 *)(unaff_x29 + -0x68);
}



/* Address: 0x100b7ca50 | FUN_100b7ca50 */

void FUN_100b7ca50(URL param_1)

{
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(param_1);
  return;
}



/* Address: 0x100b7ca5c | FUN_100b7ca5c */

void FUN_100b7ca5c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  void *unaff_x26;
  char *unaff_x27;
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = unaff_x26;
  SVar1.str = unaff_x27;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7ca68 | FUN_100b7ca68 */

void FUN_100b7ca68(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b7ca74 | FUN_100b7ca74 */

void FUN_100b7ca74(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b7ca7c | FUN_100b7ca7c */

void FUN_100b7ca7c(void)

{
  long unaff_x29;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x29 + -0x60));
  return;
}



/* Address: 0x100b7ca84 | FUN_100b7ca84 */

void FUN_100b7ca84(undefined8 param_1,_StringGuts param_2)

{
  Swift::_StringGuts::grow(0x24,param_2);
  return;
}



/* Address: 0x100b7ca8c | FUN_100b7ca8c */

void FUN_100b7ca8c(void)

{
  FUN_10003bf2c();
  return;
}



/* Address: 0x100b7ca98 | FUN_100b7ca98 */

void FUN_100b7ca98(void)

{
  return;
}



/* Address: 0x100b7caa4 | FUN_100b7caa4 */

undefined8 FUN_100b7caa4(void)

{
  return 1;
}



/* Address: 0x100b7cab8 | FUN_100b7cab8 */

long FUN_100b7cab8(Date param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = Foundation::Date::get_timeIntervalSince1970(param_1);
  dVar2 = dVar2 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7cb20);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar2) {
    if (dVar2 < 9.223372036854776e+18) {
      return (long)dVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7cb28);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7cb24);
  (*pcVar1)();
}



/* Address: 0x100b7cb28 | FUN_100b7cb28 */

void FUN_100b7cb28(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryDateUtil::currentDateProvider) = param_1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"init");
  FUN_100b6f9f0();
  return;
}



/* Address: 0x100b7cb6c | FUN_100b7cb6c */

void FUN_100b7cb6c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry14SentryDateUtil::currentDateProvider) = param_1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"init");
  FUN_100b6f9f0();
  return;
}



/* Address: 0x100b7cbb0 | _TtC6Sentry14SentryDateUtil::initWithCurrentDateProvider: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry14SentryDateUtil::initWithCurrentDateProvider_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b7cb6c();
  return param_3;
}



/* Address: 0x100b7cbe0 | FUN_100b7cbe0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100b7cbe0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  Date DVar5;
  NSComparisonResult NVar6;
  char *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  Date DVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  puVar2 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar9 = extraout_x9 - extraout_x8;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar11 + 0x40));
  DVar8.unknown = (undefined *)((extraout_x9_00 - extraout_x8_00) - extraout_x8_00);
  FUN_1000057b8(param_1,lVar9);
  lVar4 = lVar9;
  FUN_1000c9ff0(lVar9,1,DVar3.unknown);
  if ((int)lVar4 == 1) {
    FUN_10004e7d4(lVar9);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar11 + 0x20))(DVar8.unknown,lVar9,DVar3.unknown);
    pcVar7 = "date";
    DVar5.unknown =
         (undefined *)
         _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry14SentryDateUtil::currentDateProvider),"date")
    ;
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar5);
    NVar6 = Foundation::Date::compare(DVar8,(Date)pcVar7);
    bVar1 = NVar6.unknown == (undefined *)0xffffffffffffffff;
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(extraout_x9_00 - extraout_x8_00,DVar3.unknown);
    (*pcVar10)(DVar8.unknown,DVar3.unknown);
  }
  return bVar1;
}



/* Address: 0x100b7cd14 | _TtC6Sentry14SentryDateUtil::isInFuture: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry14SentryDateUtil::isInFuture_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Date DVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
    DVar2 = Foundation::Date::typeMetadataAccessor();
  }
  FUN_1000c9ffc(puVar4,param_3 == 0,1,DVar2.unknown);
  puVar3 = puVar4;
  FUN_100b7cbe0();
  FUN_10004e7d4(puVar4);
  return (uint)puVar3 & 1;
}


