/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000ce584 | FUN_1000ce584 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000ce584(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return 0;
}



/* Address: 0x1000ce5ac | FUN_1000ce5ac */

undefined1  [16] FUN_1000ce5ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1000ce5bc | FUN_1000ce5bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000ce5bc(void)

{
  String systemName;
  long unaff_x20;
  undefined8 uVar1;
  
  systemName = *(String *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  NSImageSymbolConfiguration::configurationWithTextStyle_
            ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar1);
  (extension__AppIntents_AppKit)::DisplayRepresentation::Image::_init(systemName);
  return;
}



/* Address: 0x1000ce644 | FUN_1000ce644 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000ce644(void)

{
  String SVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = &DAT_100fac488;
  FUN_1000037f0(&DAT_100fac488,&DAT_100c2aa70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar5 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  SVar1 = *(String *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  Foundation::LocalizedStringResource::init(SVar1);
  (**(code **)(lVar5 + 0x38))
            (&stack0xffffffffffffffa0 + (-extraout_x8_00 - extraout_x8),1,1,LVar3.unknown);
  SVar1 = *(String *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  NSImageSymbolConfiguration::configurationWithTextStyle_
            ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar4);
  (extension__AppIntents_AppKit)::DisplayRepresentation::Image::_init(SVar1);
  AppIntents::DisplayRepresentation::_init
            ((LocalizedStringResource)
             (&stack0xffffffffffffffa0 + (-extraout_x8_00 - extraout_x8) +
             -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1000ce7dc | FUN_1000ce7dc */

void FUN_1000ce7dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  return;
}



/* Address: 0x1000ce7f0 | FUN_1000ce7f0 */

void FUN_1000ce7f0(void)

{
  FUN_1000cff04();
  (extension_AppIntents)::AppIntents::AppEntity::get_defaultResolverSpecification();
  return;
}



/* Address: 0x1000ce828 | FUN_1000ce828 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000ce828(undefined8 param_1)

{
  undefined8 uVar1;
  String stringLiteral;
  String systemName;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar2 = &DAT_100fac488;
  local_68 = param_1;
  FUN_1000037f0(&DAT_100fac488,&DAT_100c2aa70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar4 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  stringLiteral = *(String *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  systemName = *(String *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  Foundation::LocalizedStringResource::init(stringLiteral);
  (**(code **)(lVar4 + 0x38))(auStack_70 + (-extraout_x8_00 - extraout_x8),1,1,LVar3.unknown);
  uVar5 = *(undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
  _swift_bridgeObjectRetain(uVar1);
  NSImageSymbolConfiguration::configurationWithTextStyle_
            ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar5);
  (extension__AppIntents_AppKit)::DisplayRepresentation::Image::_init(systemName);
  AppIntents::DisplayRepresentation::_init
            ((LocalizedStringResource)
             (auStack_70 + (-extraout_x8_00 - extraout_x8) +
             -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1000ce9c4 | FUN_1000ce9c4 */

void FUN_1000ce9c4(void)

{
  FUN_1000cfdbc();
  (extension_AppIntents)::AppIntents::InstanceDisplayRepresentable::get_localizedStringResource();
  return;
}



/* Address: 0x1000ce9fc | FUN_1000ce9fc */

void FUN_1000ce9fc(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1000cef84(&local_58);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x1000cea44 | FUN_1000cea44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000cea44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LocalizedStringResource LVar3;
  long extraout_x8;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  FUN_10032a1c4();
  uVar1 = *(undefined8 *)LVar3.unknown;
  uVar2 = *(undefined8 *)((long)LVar3.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001c43ac(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _DAT_1010570c0 =
       (extension_Foundation)::Swift::String::init
                 ((LocalizedStringResource)
                  (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  DAT_1010570b0 = uVar1;
  DAT_1010570b8 = uVar2;
  DAT_1010570d0 = 0xd000000000000016;
  DAT_1010570d8 = 0x8000000100d8f860;
  DAT_1010570e0 = 0;
  return;
}



/* Address: 0x1000ceaec | FUN_1000ceaec */

undefined8 * FUN_1000ceaec(void)

{
  if (DAT_100fac490 != -1) {
    _swift_once(&DAT_100fac490,FUN_1000cea44);
  }
  return &DAT_1010570b0;
}



/* Address: 0x1000ceb2c | FUN_1000ceb2c */

void FUN_1000ceb2c(undefined8 param_1)

{
  if (DAT_100fac490 != -1) {
    _swift_once(&DAT_100fac490,FUN_1000cea44);
  }
  FUN_1000cf0c8(&DAT_1010570b0,param_1);
  return;
}



/* Address: 0x1000ceb84 | FUN_1000ceb84 */

void FUN_1000ceb84(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000ced68;
  FUN_1000cf0fc(param_1);
  return;
}



/* Address: 0x1000cebe4 | FUN_1000cebe4 */

void FUN_1000cebe4(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000ced68;
  FUN_1000cf5e4();
  return;
}



/* Address: 0x1000cec3c | FUN_1000cec3c */

void FUN_1000cec3c(undefined8 *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_1003595f8(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x10))(local_40,lStack_38);
  *param_1 = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x1000ceca4 | FUN_1000ceca4 */

void FUN_1000ceca4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000cef30;
  FUN_1000cf9a8(plVar1,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1000ced08 | FUN_1000ced08 */

void FUN_1000ced08(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ced68;
  FUN_1000cf0fc(param_1);
  return;
}



/* Address: 0x1000ced68 | FUN_1000ced68 */

void FUN_1000ced68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000cedac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1000cedb0 | FUN_1000cedb0 */

void FUN_1000cedb0(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000cee0c;
  FUN_1000cf5e4();
  return;
}



/* Address: 0x1000cee0c | FUN_1000cee0c */

void FUN_1000cee0c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 == 0) {
    **(undefined8 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000cee5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1000cee60 | FUN_1000cee60 */

void FUN_1000cee60(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__results_100ea8cd8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000cfca4();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  (extension_AppIntents)::AppIntents::EntityQuery::_results();
  return;
}



/* Address: 0x1000ceecc | FUN_1000ceecc */

void FUN_1000ceecc(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000cef30;
  FUN_1000cf9a8(plVar1,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1000cef30 | FUN_1000cef30 */

void FUN_1000cef30(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001000cef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1000cef84 | FUN_1000cef84 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000cef84(String *param_1,ID param_2)

{
  ID IVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  String SVar6;
  String SVar7;
  
  IVar1 = param_2;
  FUN_100325110();
  if ((IVar1 & 1) == 0) {
    FUN_100328e60();
    pcVar5 = (char *)0x662e656c63726963;
    pvVar4 = (void *)0xeb000000006c6c69;
    if ((IVar1 & 1) != 0) {
      pcVar5 = (char *)0xd000000000000012;
      pvVar4 = (void *)0x8000000100d8f840;
    }
  }
  else {
    pcVar5 = (char *)0xd000000000000016;
    pvVar4 = (void *)0x8000000100d8f860;
  }
  objc_stub::identifier(param_2);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  objc_stub::name(param_2);
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  uVar2 = (uint)SVar7.bridgeObject;
  pcVar3 = (char *)0x0;
  FUN_1003293c4();
  if ((uVar2 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  else {
    pcVar3 = (char *)0x0;
  }
  *param_1 = SVar6;
  param_1[1] = SVar7;
  param_1[2].str = pcVar5;
  param_1[2].bridgeObject = pvVar4;
  param_1[3].str = pcVar3;
  return 0;
}



/* Address: 0x1000cf0c8 | FUN_1000cf0c8 */

undefined8 FUN_1000cf0c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1000d0034(param_2,param_1,&DAT_100eb4de8);
  return param_2;
}



/* Address: 0x1000cf0fc | FUN_1000cf0fc */

void FUN_1000cf0fc(undefined8 param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x40) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x48) = pMVar1;
  FUN_1000081a8();
  *(MainActor **)(unaff_x22 + 0x50) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000cf170,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000cf170 | FUN_1000cf170 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000cf170(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  MainActor *pMVar18;
  long unaff_x22;
  ulong uVar19;
  undefined8 uVar20;
  MainActor *pMVar21;
  String SVar22;
  String SVar23;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_68;
  
  lVar16 = *(long *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar13 = *(ulong *)(lVar16 + 0x10);
  if (uVar13 != 0) {
    uVar19 = 0;
    lVar16 = *(long *)(unaff_x22 + 0x38);
    do {
      uVar2 = uVar19;
      if (uVar19 <= uVar13) {
        uVar2 = uVar13;
      }
      puVar17 = (undefined8 *)(lVar16 + 0x28 + uVar19 * 0x10);
      uVar19 = uVar19 + 1;
      while( true ) {
        if (uVar19 - uVar2 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000cf588);
          (*pcVar5)();
        }
        uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
        pMVar21 = *(MainActor **)(unaff_x22 + 0x40);
        uVar15 = puVar17[-1];
        pMVar18 = (MainActor *)*puVar17;
        pMVar7 = pMVar18;
        _swift_bridgeObjectRetain();
        pMVar7 = Swift::MainActor::get_shared(pMVar21,pMVar7);
        UVar8 = Swift::Actor::get_unownedExecutor();
        UVar9 = UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar9.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ListIntentEntity.swift",0x1c,1,0x3c,UVar8.unknown,uVar20);
        }
        *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
        *(MainActor **)(unaff_x22 + 0x28) = pMVar18;
        puVar10 = &DAT_100fa81f0;
        FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
        FUN_100357f60(unaff_x22 + 0x30,FUN_10004e630,unaff_x22 + 0x10,puVar10);
        _swift_release(pMVar7);
        _swift_bridgeObjectRelease(pMVar18);
        lVar14 = *(long *)(unaff_x22 + 0x30);
        if (lVar14 != 0) break;
        uVar19 = uVar19 + 1;
        puVar17 = puVar17 + 2;
        if (uVar19 - uVar13 == 1) goto LAB_1000cf31c;
      }
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar2 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      uVar3 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x18);
      if (uVar3 >> 1 <= uVar2) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar2 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar2,lVar14);
    } while (uVar19 != uVar13);
  }
LAB_1000cf31c:
  if ((ulong)puVar4 >> 0x3e == 0) {
    pMVar18 = *(MainActor **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    pMVar18 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar10;
  if (pMVar18 == (MainActor *)0x0) {
    _swift_bridgeObjectRelease();
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1000718c8(0,(ulong)pMVar18 & ((long)pMVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)pMVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000cf5e4);
      (*pcVar5)();
    }
    pMVar7 = (MainActor *)0x0;
    local_98 = 0x8000000100d8f840;
    local_a0 = 0x8000000100d8f860;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        pMVar21 = *(MainActor **)(puVar4 + (long)pMVar7 * 8 + 0x20);
      }
      else {
        pMVar21 = pMVar7;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar7,(_ArrayBuffer)puVar4);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
      pMVar11 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x40),pMVar21);
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        UVar9.unknown = (undefined *)0x0;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ListIntentEntity.swift",0x1c,1,0x3d,UVar8.unknown,uVar15);
      }
      FUN_100325110();
      if (((ulong)UVar9.unknown & 1) == 0) {
        FUN_100328e60();
        bVar6 = ((ulong)UVar9.unknown & 1) == 0;
        local_68 = 0xd000000000000012;
        if (bVar6) {
          local_68 = 0x662e656c63726963;
        }
        uVar15 = local_98;
        if (bVar6) {
          uVar15 = 0xeb000000006c6c69;
        }
      }
      else {
        local_68 = 0xd000000000000016;
        uVar15 = local_a0;
      }
      objc_stub::identifier((ID)pMVar21);
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      objc_stub::name((ID)pMVar21);
      SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      uVar12 = (uint)SVar23.bridgeObject;
      uVar20 = 0;
      FUN_1003293c4();
      if ((uVar12 & 0xff) == 1) {
        thunk_FUN_100324cb0();
        FUN_1003de9a0();
      }
      else {
        uVar20 = 0;
      }
      _swift_release(pMVar11);
      uVar13 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar13) {
        FUN_1000718c8(1 < *(ulong *)(puVar10 + 0x18),uVar13 + 1,1);
      }
      pMVar7 = pMVar7 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar13 + 1;
      *(String *)(puVar10 + uVar13 * 0x38 + 0x20) = SVar22;
      *(String *)(puVar10 + uVar13 * 0x38 + 0x30) = SVar23;
      *(undefined8 *)(puVar10 + uVar13 * 0x38 + 0x40) = local_68;
      *(undefined8 *)(puVar10 + uVar13 * 0x38 + 0x48) = uVar15;
      *(undefined8 *)(puVar10 + uVar13 * 0x38 + 0x50) = uVar20;
    } while (pMVar18 != pMVar7);
    _swift_bridgeObjectRelease(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000cf5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar10);
  return;
}



/* Address: 0x1000cf5e4 | FUN_1000cf5e4 */

void FUN_1000cf5e4(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x18) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1000081a8();
  *(MainActor **)(unaff_x22 + 0x28) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000cf654,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000cf654 | FUN_1000cf654 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000cf654(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  _ArrayBuffer _Var5;
  undefined *puVar6;
  MainActor *self;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  uint uVar10;
  MainActor *pMVar11;
  long unaff_x22;
  undefined8 uVar12;
  MainActor *pMVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  String SVar17;
  undefined8 local_a0;
  undefined8 local_98;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  _Var5.unknown = &DAT_100fa8328;
  FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
  FUN_100357f60(unaff_x22 + 0x10,FUN_1000cec3c,0,_Var5.unknown);
  puVar6 = &DAT_100fa8330;
  FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b85f0(_Var5.unknown,puVar6);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x10));
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    pMVar11 = *(MainActor **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    pMVar11 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar6;
  if (pMVar11 == (MainActor *)0x0) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1000718c8(0,(ulong)pMVar11 & ((long)pMVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)pMVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cf9a8);
      (*pcVar3)();
    }
    pMVar13 = (MainActor *)0x0;
    local_98 = 0x8000000100d8f840;
    local_a0 = 0x8000000100d8f860;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        self = *(MainActor **)(_Var5.unknown + (long)pMVar13 * 8 + 0x20);
      }
      else {
        self = pMVar13;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar13,_Var5);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
      pMVar7 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x18),self);
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        UVar9.unknown = (undefined *)0x0;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ListIntentEntity.swift",0x1c,1,0x44,UVar8.unknown,uVar12);
      }
      FUN_100325110();
      if (((ulong)UVar9.unknown & 1) == 0) {
        FUN_100328e60();
        bVar4 = ((ulong)UVar9.unknown & 1) == 0;
        uVar12 = 0xd000000000000012;
        if (bVar4) {
          uVar12 = 0x662e656c63726963;
        }
        uVar15 = local_98;
        if (bVar4) {
          uVar15 = 0xeb000000006c6c69;
        }
      }
      else {
        uVar12 = 0xd000000000000016;
        uVar15 = local_a0;
      }
      objc_stub::identifier((ID)self);
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      objc_stub::name((ID)self);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      uVar10 = (uint)SVar17.bridgeObject;
      uVar14 = 0;
      FUN_1003293c4();
      if ((uVar10 & 0xff) == 1) {
        thunk_FUN_100324cb0();
        FUN_1003de9a0();
      }
      else {
        uVar14 = 0;
      }
      _swift_release(pMVar7);
      uVar2 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
        FUN_1000718c8(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
      }
      pMVar13 = pMVar13 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
      *(String *)(puVar6 + uVar2 * 0x38 + 0x20) = SVar16;
      *(String *)(puVar6 + uVar2 * 0x38 + 0x30) = SVar17;
      *(undefined8 *)(puVar6 + uVar2 * 0x38 + 0x40) = uVar12;
      *(undefined8 *)(puVar6 + uVar2 * 0x38 + 0x48) = uVar15;
      *(undefined8 *)(puVar6 + uVar2 * 0x38 + 0x50) = uVar14;
    } while (pMVar11 != pMVar13);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000cf9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Address: 0x1000cf9a8 | FUN_1000cf9a8 */

void FUN_1000cf9a8(undefined8 param_1)

{
  MainActor *pMVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x18) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  plVar2 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000cfa1c;
  FUN_1000cf5e4();
  return;
}



/* Address: 0x1000cfa1c | FUN_1000cfa1c */

void FUN_1000cfa1c(undefined8 param_1)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *(long *)(*unaff_x22 + 0x28);
  *(undefined8 *)(*unaff_x22 + 0x30) = param_1;
  _swift_task_dealloc(lVar3);
  if (unaff_x20 == 0) {
    FUN_1000081a8();
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_1000cfac4;
  }
  else {
    _swift_errorRelease();
    FUN_1000081a8();
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_1000cfb90;
    lVar3 = unaff_x20;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,lVar3);
  return;
}



/* Address: 0x1000cfac4 | FUN_1000cfac4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000cfac4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  lVar7 = *(long *)(unaff_x22 + 0x30);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar7);
    uVar8 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar2 = 0;
    uVar10 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    uVar4 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(undefined8 *)(lVar7 + 0x30);
    uVar2 = *(undefined8 *)(lVar7 + 0x38);
    uVar10 = *(undefined8 *)(lVar7 + 0x40);
    uVar5 = *(undefined8 *)(lVar7 + 0x48);
    uVar6 = *(undefined8 *)(lVar7 + 0x50);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRelease(lVar7);
  }
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = uVar8;
  puVar1[1] = uVar4;
  puVar1[2] = uVar9;
  puVar1[3] = uVar2;
  puVar1[4] = uVar10;
  puVar1[5] = uVar5;
  puVar1[6] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0001000cfb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000cfb90 | FUN_1000cfb90 */

void FUN_1000cfb90(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000cfbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000cfbd4 | thunk_FUN_1000cfbd8 */

void thunk_FUN_1000cfbd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac498 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab40,&DAT_100eb4de8);
  DAT_100fac498 = pTVar1;
  return;
}



/* Address: 0x1000cfbd8 | FUN_1000cfbd8 */

void FUN_1000cfbd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac498 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab40,&DAT_100eb4de8);
  DAT_100fac498 = pTVar1;
  return;
}



/* Address: 0x1000cfc18 | thunk_FUN_1000cfc1c */

void thunk_FUN_1000cfc1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab78,&DAT_100eb4de8);
  DAT_100fac4a0 = pTVar1;
  return;
}



/* Address: 0x1000cfc1c | FUN_1000cfc1c */

void FUN_1000cfc1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab78,&DAT_100eb4de8);
  DAT_100fac4a0 = pTVar1;
  return;
}



/* Address: 0x1000cfc5c | thunk_FUN_1000cfc60 */

void thunk_FUN_1000cfc60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab08,&DAT_100eb4de8);
  DAT_100fac4a8 = pTVar1;
  return;
}



/* Address: 0x1000cfc60 | FUN_1000cfc60 */

void FUN_1000cfc60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ab08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ab08,&DAT_100eb4de8);
  DAT_100fac4a8 = pTVar1;
  return;
}



/* Address: 0x1000cfca0 | thunk_FUN_1000cfca4 */

void thunk_FUN_1000cfca4(void)

{
  FUN_1000cfca4();
  return;
}



/* Address: 0x1000cfca4 | FUN_1000cfca4 */

void FUN_1000cfca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2acc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2acc0,&DAT_100eb4e18);
  DAT_100fac4b0 = pTVar1;
  return;
}



/* Address: 0x1000cfce4 | FUN_1000cfce4 */

undefined * FUN_1000cfce4(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_String___AppIntents_EntityIdentifierConvertible_in_AppIntents_100ea8e18
  ;
}



/* Address: 0x1000cfcf0 | thunk_FUN_1000cfcf4 */

void thunk_FUN_1000cfcf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aba8,&DAT_100eb4de8);
  DAT_100fac4b8 = pTVar1;
  return;
}



/* Address: 0x1000cfcf4 | FUN_1000cfcf4 */

void FUN_1000cfcf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aba8,&DAT_100eb4de8);
  DAT_100fac4b8 = pTVar1;
  return;
}



/* Address: 0x1000cfd34 | thunk_FUN_1000cfd38 */

void thunk_FUN_1000cfd38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2abd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2abd0,&DAT_100eb4de8);
  DAT_100fac4c0 = pTVar1;
  return;
}



/* Address: 0x1000cfd38 | FUN_1000cfd38 */

void FUN_1000cfd38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2abd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2abd0,&DAT_100eb4de8);
  DAT_100fac4c0 = pTVar1;
  return;
}



/* Address: 0x1000cfd78 | FUN_1000cfd78 */

void FUN_1000cfd78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ac00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ac00,&DAT_100eb4de8);
  DAT_100fac4c8 = pTVar1;
  return;
}



/* Address: 0x1000cfdb8 | thunk_FUN_1000cfdbc */

void thunk_FUN_1000cfdbc(void)

{
  FUN_1000cfdbc();
  return;
}



/* Address: 0x1000cfdbc | FUN_1000cfdbc */

void FUN_1000cfdbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ac58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ac58,&DAT_100eb4de8);
  DAT_100fac4d0 = pTVar1;
  return;
}



/* Address: 0x1000cfdfc | FUN_1000cfdfc */

void FUN_1000cfdfc(void)

{
  FUN_100016eac(&DAT_100fac4d8,&DAT_100fac4e0,&DAT_100c2abf8,
                PTR_AppIntents__AppIntents__EmptyResolverSpecification<undefined>_>AppIntents__ResolverSpecification_100ea8e00
               );
  return;
}



/* Address: 0x1000cfe30 | thunk_FUN_1000cfd78 */

void thunk_FUN_1000cfd78(void)

{
  FUN_1000cfd78();
  return;
}



/* Address: 0x1000cfe34 | thunk_FUN_1000cfe38 */

void thunk_FUN_1000cfe38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ac88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ac88,&DAT_100eb4de8);
  DAT_100fac4e8 = pTVar1;
  return;
}



/* Address: 0x1000cfe38 | FUN_1000cfe38 */

void FUN_1000cfe38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ac88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ac88,&DAT_100eb4de8);
  DAT_100fac4e8 = pTVar1;
  return;
}



/* Address: 0x1000cfe78 | thunk_FUN_1000cfe7c */

void thunk_FUN_1000cfe7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ad30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ad30,&DAT_100eb4e18);
  DAT_100fac4f0 = pTVar1;
  return;
}



/* Address: 0x1000cfe7c | FUN_1000cfe7c */

void FUN_1000cfe7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ad30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ad30,&DAT_100eb4e18);
  DAT_100fac4f0 = pTVar1;
  return;
}



/* Address: 0x1000cfebc | thunk_FUN_1000cfec0 */

void thunk_FUN_1000cfec0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ad88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ad88,&DAT_100eb4e18);
  DAT_100fac4f8 = pTVar1;
  return;
}



/* Address: 0x1000cfec0 | FUN_1000cfec0 */

void FUN_1000cfec0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ad88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ad88,&DAT_100eb4e18);
  DAT_100fac4f8 = pTVar1;
  return;
}



/* Address: 0x1000cff00 | thunk_FUN_1000cff04 */

void thunk_FUN_1000cff04(void)

{
  FUN_1000cff04();
  return;
}



/* Address: 0x1000cff04 | FUN_1000cff04 */

void FUN_1000cff04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aab0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aab0,&DAT_100eb4de8);
  DAT_100fac500 = pTVar1;
  return;
}



/* Address: 0x1000cff44 | thunk_FUN_1000cff48 */

void thunk_FUN_1000cff48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2adb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2adb0,&DAT_100eb4e18);
  DAT_100fac508 = pTVar1;
  return;
}



/* Address: 0x1000cff48 | FUN_1000cff48 */

void FUN_1000cff48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2adb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2adb0,&DAT_100eb4e18);
  DAT_100fac508 = pTVar1;
  return;
}



/* Address: 0x1000cff88 | thunk_FUN_1000cff8c */

void thunk_FUN_1000cff8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_28;
  
  if (DAT_100fac510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac518;
  FUN_100005c24(&DAT_100fac518,&DAT_100c2ad18);
  puVar2 = puVar1;
  FUN_1000cfd78();
  puVar3 = PTR__AppIntents__Swift__Array<undefined>_>AppIntents__ResultsCollection_100ea8e30;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__AppIntents__Swift__Array<undefined>_>AppIntents__ResultsCollection_100ea8e30,
             puVar1,&puStack_28);
  DAT_100fac510 = puVar3;
  return;
}



/* Address: 0x1000cff8c | FUN_1000cff8c */

void FUN_1000cff8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fac510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac518;
  FUN_100005c24(&DAT_100fac518,&DAT_100c2ad18);
  puVar2 = puVar1;
  FUN_1000cfd78();
  puVar3 = PTR__AppIntents__Swift__Array<undefined>_>AppIntents__ResultsCollection_100ea8e30;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__AppIntents__Swift__Array<undefined>_>AppIntents__ResultsCollection_100ea8e30,
             puVar1,&local_28);
  DAT_100fac510 = puVar3;
  return;
}



/* Address: 0x1000cfffc | FUN_1000cfffc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000cfffc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return 0;
}


