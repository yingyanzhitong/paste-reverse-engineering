/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d1550 | thunk_FUN_1000d1554 */

void thunk_FUN_1000d1554(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b150;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b150,&DAT_100eb5208);
  DAT_100fac5c0 = pTVar1;
  return;
}



/* Address: 0x1000d1554 | FUN_1000d1554 */

void FUN_1000d1554(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b150;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b150,&DAT_100eb5208);
  DAT_100fac5c0 = pTVar1;
  return;
}



/* Address: 0x1000d1594 | thunk_FUN_1000d1598 */

void thunk_FUN_1000d1598(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b178,&DAT_100eb5208);
  DAT_100fac5c8 = pTVar1;
  return;
}



/* Address: 0x1000d1598 | FUN_1000d1598 */

void FUN_1000d1598(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b178,&DAT_100eb5208);
  DAT_100fac5c8 = pTVar1;
  return;
}



/* Address: 0x1000d15d8 | FUN_1000d15d8 */

undefined8 FUN_1000d15d8(long param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca24f4,1);
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x1000d15fc | FUN_1000d15fc */

void FUN_1000d15fc(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca24cc,1);
  return;
}



/* Address: 0x1000d160c | FUN_1000d160c */

void FUN_1000d160c(void)

{
  LocalizedStringResource LVar1;
  String stringLiteral;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  FUN_1000ce204(LVar1.unknown,&DAT_101057100);
  FUN_1000cd990(LVar1.unknown,&DAT_101057100);
  stringLiteral.bridgeObject = (void *)0xef6472616f626e69;
  stringLiteral.str = (char *)0x5020657461657243;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d1678 | FUN_1000d1678 */

void FUN_1000d1678(undefined8 param_1,undefined8 param_2)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar1;
  FUN_1000081a8();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000d16e4,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000d16e4 | FUN_1000d16e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d1758) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d17f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d16e4(void)

{
  IntentParameter *this;
  ulong uVar1;
  ulong uVar2;
  IntentParameter *pIVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  this = *(IntentParameter **)(unaff_x22 + 0x88);
  pIVar3 = *(IntentParameter **)(unaff_x22 + 0x90);
  _swift_release();
  AppIntents::IntentParameter::get_wrappedValue(this,pIVar3);
  uVar1 = *(ulong *)(unaff_x22 + 0x48);
  uVar2 = *(ulong *)(unaff_x22 + 0x50);
  uVar4 = uVar2;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    FUN_1000d1ff8();
    _swift_allocError(&DAT_100eb52a0,uVar4,0,0);
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = 0;
    FUN_10032b0c8(0);
    FUN_100357d14(unaff_x22 + 0x48,FUN_1000d1f20,uVar8,uVar5);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    FUN_1000cef84(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x48));
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x40);
    puVar6 = &DAT_100fac5f8;
    FUN_1000037f0(&DAT_100fac5f8,&DAT_100c2b1d0);
    puVar7 = puVar6;
    FUN_1000d1f38();
    (extension_AppIntents)::AppIntents::IntentResult::_result(uVar5,puVar7,puVar6,puVar7);
    FUN_1000d1fa8(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                  *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                  *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                  *(undefined8 *)(unaff_x22 + 0x78));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000d1828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1000d182c | FUN_1000d182c */

void FUN_1000d182c(undefined8 *param_1,undefined8 param_2,IntentParameter *param_3)

{
  IntentParameter *pIVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  IntentParameter aIStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_100357e58(aIStack_78);
  pIVar1 = aIStack_78;
  FUN_100004640(pIVar1,local_60);
  AppIntents::IntentParameter::get_wrappedValue(param_3,pIVar1);
  FUN_100324a80();
  FUN_100367c5c(local_88,uStack_80,pIVar1,local_60,uStack_58);
  _swift_bridgeObjectRelease(uStack_80);
  *param_1 = local_88;
  FUN_100004594(aIStack_78);
  return;
}



/* Address: 0x1000d18dc | FUN_1000d18dc */

void FUN_1000d18dc(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  LocalizedStringResource LVar2;
  
  if (DAT_100fac628 != -1) {
    _swift_once(&DAT_100fac628,FUN_1000d160c);
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  LVar2 = LVar1;
  FUN_1000cd990(LVar1.unknown,&DAT_101057100);
                    /* WARNING: Could not recover jumptable at 0x0001000d1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x10))(param_1,LVar2.unknown,LVar1.unknown);
  return;
}



/* Address: 0x1000d194c | FUN_1000d194c */

void FUN_1000d194c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  ParameterSummaryString<undefined> PVar5;
  String SVar6;
  StringInterpolation SVar7;
  StringInterpolation SVar8;
  StringInterpolation stringInterpolation;
  
  puVar1 = &DAT_100fac610;
  FUN_1000037f0(&DAT_100fac610,&DAT_100c2b1d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar5.unknown = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fac618;
  FUN_1000037f0(&DAT_100fac618,&DAT_100c2b1e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2;
  AppIntents::ParameterSummaryString::StringInterpolation::_init
            ((StringInterpolation *)(PVar5.unknown + -extraout_x8_00),0x10,1);
  SVar6.bridgeObject = (void *)0x8000000100d8f900;
  SVar6.str = (char *)0xd000000000000010;
  SVar7.message.bridgeObject = (void *)uVar4;
  SVar7.message.str = puVar1;
  SVar7.template.bridgeObject = (void *)param_7;
  SVar7.template.str = (char *)param_6;
  SVar7._16_8_ = param_5;
  SVar7.interpolationCount = param_8;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar6,SVar7);
  puVar2 = &DAT_100c2b1e8;
  _swift_getKeyPath(&DAT_100c2b1e8);
  puVar3 = &DAT_100fac620;
  FUN_1000037f0(&DAT_100fac620,&DAT_100c2b210);
  AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation
            (puVar2,puVar1,puVar3);
  _swift_release(puVar2);
  SVar8.message.bridgeObject = (void *)uVar4;
  SVar8.message.str = puVar1;
  SVar8.template.bridgeObject = (void *)param_7;
  SVar8.template.str = (char *)param_6;
  SVar8._16_8_ = param_5;
  SVar8.interpolationCount = param_8;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar8);
  stringInterpolation.message.bridgeObject = (void *)param_1;
  stringInterpolation.message.str = (char *)(PVar5.unknown + -extraout_x8_00);
  stringInterpolation.template.bridgeObject = (void *)param_5;
  stringInterpolation.template.str = (char *)uVar4;
  stringInterpolation._16_8_ = param_2;
  stringInterpolation.interpolationCount = param_6;
  AppIntents::ParameterSummaryString::_init(stringInterpolation);
  AppIntents::IntentParameterSummary::_init(PVar5);
  return;
}



/* Address: 0x1000d1abc | FUN_1000d1abc */

void FUN_1000d1abc(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1000d1678(plVar1,param_1,uVar2);
  return;
}



/* Address: 0x1000d1b14 | FUN_1000d1b14 */

void FUN_1000d1b14(undefined8 *param_1,undefined8 param_2)

{
  FUN_1000d1cdc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d1b38 | FUN_1000d1b38 */

String FUN_1000d1b38(void)

{
  String SVar1;
  
  FUN_1000d1bd8();
  SVar1 = (extension_AppIntents)::AppIntents::AppIntent::get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000d1b60 | FUN_1000d1b60 */

undefined1  [16] FUN_1000d1b60(void)

{
  return ZEXT816(0x100eb5208);
}



/* Address: 0x1000d1b70 | FUN_1000d1b70 */

void FUN_1000d1b70(void)

{
  FUN_100016eac(&DAT_100fac5d0,&DAT_100fac5d8,&DAT_100c2b1b8,
                PTR_AppIntents__AppIntents__IntentParameterSummary<undefined>_>AppIntents__ParameterSummary_100ea8d90
               );
  return;
}



/* Address: 0x1000d1ba4 | FUN_1000d1ba4 */

void FUN_1000d1ba4(void)

{
  FUN_100016eac(&DAT_100fac5e0,&DAT_100fac5e8,&DAT_100c2b1c0,
                PTR_AppIntents__AppIntents__IntentResultContainer<undefined,undefined,undefined,undefined>_>AppIntents__ReturnsValue_100ea8d78
               );
  return;
}



/* Address: 0x1000d1bd8 | FUN_1000d1bd8 */

void FUN_1000d1bd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b0b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b0b8,&DAT_100eb5208);
  DAT_100fac5f0 = pTVar1;
  return;
}



/* Address: 0x1000d1c18 | FUN_1000d1c18 */

undefined8 FUN_1000d1c18(void)

{
  return 1;
}



/* Address: 0x1000d1c20 | FUN_1000d1c20 */

void FUN_1000d1c20(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)0x0;
  Swift::Hasher::_combine(0,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1000d1c60 | FUN_1000d1c60 */

void FUN_1000d1c60(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x1000d1c84 | FUN_1000d1c84 */

void FUN_1000d1c84(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = (undefined *)0x0;
  Swift::Hasher::_combine(0,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1000d1cc0 | FUN_1000d1cc0 */

void FUN_1000d1cc0(void)

{
  String stringLiteral;
  
  stringLiteral.bridgeObject = (void *)0x8000000100d8f920;
  stringLiteral.str = (char *)0xd000000000000016;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d1cdc | FUN_1000d1cdc */

void FUN_1000d1cdc(void)

{
  InputConnectionBehavior IVar1;
  undefined7 extraout_var;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  IntentParameter *this;
  IntentInputOptions IVar4;
  IntentDialog IVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 local_70;
  undefined8 uStack_68;
  
  IVar1 = AppIntents::InputConnectionBehavior::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,IVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fac550;
  FUN_1000037f0(&DAT_100fac550,&DAT_100c2b410);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  puVar2 = &DAT_100fac558;
  FUN_1000037f0(&DAT_100fac558,&DAT_100c2af30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_01;
  puVar2 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_02;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar11 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  this = (IntentParameter *)&DAT_100fac560;
  FUN_1000037f0(&DAT_100fac560,&DAT_100c2af40);
  stringLiteral.bridgeObject = &DAT_e400000000000000;
  stringLiteral.str = (char *)0x656d614e;
  Foundation::LocalizedStringResource::init(stringLiteral);
  stringLiteral_00.bridgeObject = &DAT_e400000000000000;
  stringLiteral_00.str = (char *)0x74786554;
  Foundation::LocalizedStringResource::init(stringLiteral_00);
  (**(code **)(lVar11 + 0x38))(lVar9,0,1,LVar3.unknown);
  IVar4 = IntentInputOptions::_typeMetadataAccessor();
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*(long *)(IVar4.unknown + -8) + 0x38))(lVar8,1,1,IVar4.unknown);
  IVar5 = AppIntents::IntentDialog::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar5.unknown + -8) + 0x38))(lVar7,1,1,IVar5.unknown);
  (**(code **)(lVar10 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___enum_case_for_AppIntents_InputConnectionBehavior_default_AppIntents_InputConnectionBehavior_Type___>_AppIntents_InputConnectionBehavior_100ea8dc8
             ,CONCAT71(extraout_var,IVar1.value));
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init
            (this,(undefined *)(lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1000d1f20 | FUN_1000d1f20 */

void FUN_1000d1f20(void)

{
  FUN_1000d182c();
  return;
}



/* Address: 0x1000d1f38 | FUN_1000d1f38 */

void FUN_1000d1f38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fac600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac5f8;
  FUN_100005c24(&DAT_100fac5f8,&DAT_100c2b1d0);
  puVar2 = puVar1;
  FUN_1000cfd78();
  puVar3 = 
  PTR__AppIntents__protocol_conformance_descriptor_for_<A_where_A:_AppIntents__IntentValue>_A____AppIntents__IntentValue_in_AppIntents_>AppIntents___IntentValue_100ea8e38
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__AppIntents__protocol_conformance_descriptor_for_<A_where_A:_AppIntents__IntentValue>_A____AppIntents__IntentValue_in_AppIntents_>AppIntents___IntentValue_100ea8e38
             ,puVar1,&local_28);
  DAT_100fac600 = puVar3;
  return;
}



/* Address: 0x1000d1fa8 | FUN_1000d1fa8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1000d1fa8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    return 0;
  }
  return param_1;
}



/* Address: 0x1000d1ff8 | FUN_1000d1ff8 */

void FUN_1000d1ff8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b2b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b2b0,&DAT_100eb52a0);
  DAT_100fac608 = pTVar1;
  return;
}



/* Address: 0x1000d2038 | FUN_1000d2038 */

void FUN_1000d2038(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)param_2,param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d2060 | FUN_1000d2060 */

void FUN_1000d2060(void)

{
  return;
}



/* Address: 0x1000d2064 | FUN_1000d2064 */

uint FUN_1000d2064(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Address: 0x1000d20b4 | FUN_1000d20b4 */

void FUN_1000d20b4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 == 0) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)param_1 = 0;
        return;
      }
      *param_1 = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (uVar1 < 2) {
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)param_1 = (short)param_2;
      return;
    }
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1000d2130 | FUN_1000d2130 */

undefined8 FUN_1000d2130(void)

{
  return 0;
}



/* Address: 0x1000d2138 | FUN_1000d2138 */

undefined1  [16] FUN_1000d2138(void)

{
  return ZEXT816(0x100eb52a0);
}



/* Address: 0x1000d2148 | thunk_FUN_1000d214c */

void thunk_FUN_1000d214c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac630 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b288;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b288,&DAT_100eb52a0);
  DAT_100fac630 = pTVar1;
  return;
}



/* Address: 0x1000d214c | FUN_1000d214c */

void FUN_1000d214c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac630 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b288;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b288,&DAT_100eb52a0);
  DAT_100fac630 = pTVar1;
  return;
}



/* Address: 0x1000d218c | thunk_FUN_1000d2190 */

void thunk_FUN_1000d2190(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b390,&DAT_100eb5430);
  DAT_100fac638 = pTVar1;
  return;
}



/* Address: 0x1000d2190 | FUN_1000d2190 */

void FUN_1000d2190(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b390,&DAT_100eb5430);
  DAT_100fac638 = pTVar1;
  return;
}



/* Address: 0x1000d21d0 | thunk_FUN_1000d21d4 */

void thunk_FUN_1000d21d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b3b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b3b8,&DAT_100eb5430);
  DAT_100fac640 = pTVar1;
  return;
}



/* Address: 0x1000d21d4 | FUN_1000d21d4 */

void FUN_1000d21d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b3b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b3b8,&DAT_100eb5430);
  DAT_100fac640 = pTVar1;
  return;
}



/* Address: 0x1000d2214 | FUN_1000d2214 */

undefined8 FUN_1000d2214(long param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2590,1);
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x1000d2238 | FUN_1000d2238 */

void FUN_1000d2238(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2568,1);
  return;
}



/* Address: 0x1000d2248 | FUN_1000d2248 */

void FUN_1000d2248(void)

{
  LocalizedStringResource LVar1;
  String stringLiteral;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  FUN_1000ce204(LVar1.unknown,&DAT_101057118);
  FUN_1000cd990(LVar1.unknown,&DAT_101057118);
  stringLiteral.bridgeObject = (void *)0x8000000100d8f940;
  stringLiteral.str = (char *)0xd000000000000011;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d22a8 | FUN_1000d22a8 */

void FUN_1000d22a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  ParameterSummaryString<undefined> PVar6;
  String SVar7;
  String SVar8;
  StringInterpolation SVar9;
  StringInterpolation SVar10;
  StringInterpolation SVar11;
  StringInterpolation stringInterpolation;
  
  puVar1 = &DAT_100fac678;
  FUN_1000037f0(&DAT_100fac678,&DAT_100c2b438);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar6.unknown = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fac680;
  FUN_1000037f0(&DAT_100fac680,&DAT_100c2b440);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000d29e8();
  puVar5 = puVar2;
  AppIntents::ParameterSummaryString::StringInterpolation::_init
            ((StringInterpolation *)(PVar6.unknown + -extraout_x8_00),0x12,2);
  SVar7.bridgeObject = (void *)0xec00000020746120;
  SVar7.str = (char *)0x6d65744920746547;
  SVar9.message.bridgeObject = puVar5;
  SVar9.message.str = puVar1;
  SVar9.template.bridgeObject = (void *)in_x6;
  SVar9.template.str = (char *)in_x5;
  SVar9._16_8_ = in_x4;
  SVar9.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar7,SVar9);
  puVar3 = &DAT_100c2b448;
  _swift_getKeyPath(&DAT_100c2b448);
  puVar4 = &DAT_100fac688;
  FUN_1000037f0(&DAT_100fac688,&DAT_100c2b470);
  AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation
            (puVar3,puVar1,puVar4);
  _swift_release(puVar3);
  SVar8.bridgeObject = &DAT_e600000000000000;
  SVar8.str = (char *)0x206d6f726620;
  SVar10.message.bridgeObject = puVar5;
  SVar10.message.str = puVar1;
  SVar10.template.bridgeObject = (void *)in_x6;
  SVar10.template.str = (char *)in_x5;
  SVar10._16_8_ = in_x4;
  SVar10.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar8,SVar10);
  puVar3 = &DAT_100c2b478;
  _swift_getKeyPath(&DAT_100c2b478);
  puVar4 = &DAT_100fac690;
  FUN_1000037f0(&DAT_100fac690,&DAT_100c2b4a0);
  AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation
            (puVar3,puVar1,puVar4);
  _swift_release(puVar3);
  SVar11.message.bridgeObject = puVar5;
  SVar11.message.str = puVar1;
  SVar11.template.bridgeObject = (void *)in_x6;
  SVar11.template.str = (char *)in_x5;
  SVar11._16_8_ = in_x4;
  SVar11.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar11);
  stringInterpolation.message.bridgeObject = &DAT_100eb5430;
  stringInterpolation.message.str = (char *)(PVar6.unknown + -extraout_x8_00);
  stringInterpolation.template.bridgeObject = (void *)in_x4;
  stringInterpolation.template.str = puVar5;
  stringInterpolation._16_8_ = puVar2;
  stringInterpolation.interpolationCount = in_x5;
  AppIntents::ParameterSummaryString::_init(stringInterpolation);
  AppIntents::IntentParameterSummary::_init(PVar6);
  return;
}



/* Address: 0x1000d2478 | FUN_1000d2478 */

void FUN_1000d2478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar1;
  FUN_1000081a8();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000d24e8,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000d24e8 | FUN_1000d24e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d2544) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d261c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d24e8(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  _ArrayBuffer _Var7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0;
  FUN_1003214a8(0);
  pcVar2 = FUN_1000d2df4;
  _Var7.unknown = (undefined *)(unaff_x22 + 0x10);
  FUN_100357d14(unaff_x22 + 0x30,FUN_1000d2df4,_Var7.unknown,uVar3);
  FUN_10031f000();
  if ((ulong)pcVar2 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)pcVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)pcVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < pcVar2) {
      _Var1.unknown = pcVar2;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease();
    pcVar2 = (code *)0x0;
    _Var7.unknown = (undefined *)0x0;
  }
  else {
    if (((ulong)pcVar2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)pcVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d2668);
        (*pcVar2)();
      }
    }
    else {
      _Var7.unknown = pcVar2;
      Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)pcVar2);
    }
    _swift_bridgeObjectRelease();
    FUN_10037c9a8();
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  *(code **)(unaff_x22 + 0x10) = pcVar2;
  *(undefined **)(unaff_x22 + 0x18) = _Var7.unknown;
  puVar4 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  puVar5 = puVar4;
  FUN_1000d1278();
  (extension_AppIntents)::AppIntents::IntentResult::_result(uVar3,puVar5,puVar4,puVar5);
  _swift_bridgeObjectRelease(_Var7.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001000d264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000d2668 | FUN_1000d2668 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d2668(long *param_1,undefined8 param_2,IntentParameter *param_3,
                  IntentParameter *param_4)

{
  undefined8 uVar1;
  IntentParameter *pIVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357e58(local_88);
  pIVar2 = (IntentParameter *)local_88;
  FUN_100004640(pIVar2,local_70);
  AppIntents::IntentParameter::get_wrappedValue(param_4,pIVar2);
  uVar1 = local_a8;
  puVar3 = local_c0;
  _swift_bridgeObjectRelease(local_98);
  _swift_bridgeObjectRelease(uVar1);
  (**(code **)(*(long *)(lStack_68 + 8) + 0x20))(puVar3,uStack_b8,local_70);
  _swift_bridgeObjectRelease(uStack_b8);
  plVar6 = local_88;
  if (puVar3 == (undefined1 *)0x0) {
    FUN_100004594();
    FUN_1000d2e0c();
    _swift_allocError(&DAT_100eb54c8,plVar6,0,0);
    *(undefined1 *)plVar6 = 0;
    _swift_willThrow();
  }
  else {
    FUN_100004594();
    FUN_100357cf0(&local_c0);
    FUN_100004640(&local_c0,local_a8);
    (**(code **)(*(long *)(lStack_a0 + 8) + 0x10))(puVar3,local_a8);
    pIVar2 = (IntentParameter *)&local_c0;
    FUN_100004594();
    AppIntents::IntentParameter::get_wrappedValue(param_3,pIVar2);
    puVar4 = &DAT_100faa390;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar5 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b8054(local_88,local_c0,puVar4,puVar5);
    if (local_88[0] == 0) {
      FUN_1000d2e0c();
      _swift_allocError(&DAT_100eb54c8,local_c0,0,0);
      *local_c0 = 1;
      _swift_willThrow();
      _swift_release(puVar3);
    }
    else {
      _swift_release(puVar3);
      *param_1 = local_88[0];
    }
  }
  return;
}



/* Address: 0x1000d2880 | FUN_1000d2880 */

void FUN_1000d2880(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  LocalizedStringResource LVar2;
  
  if (DAT_100fac698 != -1) {
    _swift_once(&DAT_100fac698,FUN_1000d2248);
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  LVar2 = LVar1;
  FUN_1000cd990(LVar1.unknown,&DAT_101057118);
                    /* WARNING: Could not recover jumptable at 0x0001000d28d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x10))(param_1,LVar2.unknown,LVar1.unknown);
  return;
}



/* Address: 0x1000d28f0 | thunk_FUN_1000d22a8 */

void thunk_FUN_1000d22a8(void)

{
  FUN_1000d22a8();
  return;
}



/* Address: 0x1000d28f4 | FUN_1000d28f4 */

void FUN_1000d28f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1000d2478(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000d2958 | FUN_1000d2958 */

void FUN_1000d2958(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000d2a74();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000d297c | FUN_1000d297c */

String FUN_1000d297c(void)

{
  String SVar1;
  
  FUN_1000d29e8();
  SVar1 = (extension_AppIntents)::AppIntents::AppIntent::get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000d29a4 | FUN_1000d29a4 */

undefined1  [16] FUN_1000d29a4(void)

{
  return ZEXT816(0x100eb5430);
}



/* Address: 0x1000d29b4 | FUN_1000d29b4 */

void FUN_1000d29b4(void)

{
  FUN_100016eac(&DAT_100fac648,&DAT_100fac650,&DAT_100c2b3f8,
                PTR_AppIntents__AppIntents__IntentParameterSummary<undefined>_>AppIntents__ParameterSummary_100ea8d90
               );
  return;
}



/* Address: 0x1000d29e8 | FUN_1000d29e8 */

void FUN_1000d29e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b2f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b2f8,&DAT_100eb5430);
  DAT_100fac658 = pTVar1;
  return;
}



/* Address: 0x1000d2a28 | FUN_1000d2a28 */

void FUN_1000d2a28(void)

{
  char *unaff_x20;
  String stringLiteral;
  String stringLiteral_00;
  
  if (*unaff_x20 == '\x01') {
    stringLiteral.bridgeObject = (void *)0x8000000100d8f960;
    stringLiteral.str = (char *)0xd000000000000013;
    Foundation::LocalizedStringResource::init(stringLiteral);
    return;
  }
  stringLiteral_00.bridgeObject = (void *)0xee00646e756f6620;
  stringLiteral_00.str = (char *)0x746f6e207473694c;
  Foundation::LocalizedStringResource::init(stringLiteral_00);
  return;
}



/* Address: 0x1000d2a74 | FUN_1000d2a74 */

undefined1  [16] FUN_1000d2a74(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  InputConnectionBehavior IVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  LocalizedStringResource LVar6;
  IntentParameter *pIVar7;
  IntentDialog IVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long extraout_x12;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  LocalizedStringResource title;
  long lVar16;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  undefined1 auVar17 [16];
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  IntentParameter *local_d8;
  IntentParameter *local_d0;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  IVar3 = AppIntents::InputConnectionBehavior::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,IVar3.value);
  lVar13 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar4 = &DAT_100fac660;
  local_b0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fac660,&DAT_100c2b408);
  lVar16 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_100fac550;
  FUN_1000037f0(&DAT_100fac550,&DAT_100c2b410);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar9 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  puVar5 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar9 - extraout_x8_02;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar10 = *(long *)(LVar6.unknown + -8);
  local_c0 = LVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  title.unknown = (undefined *)(lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  pIVar7 = (IntentParameter *)&DAT_100fac668;
  FUN_1000037f0(&DAT_100fac668,&DAT_100c2b420);
  stringLiteral.bridgeObject = &DAT_e500000000000000;
  stringLiteral.str = (char *)0x7865646e49;
  local_d0 = pIVar7;
  Foundation::LocalizedStringResource::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xea00000000007865;
  stringLiteral_00.str = (char *)0x646e49206d657449;
  Foundation::LocalizedStringResource::init(stringLiteral_00);
  local_c8 = *(code **)(lVar10 + 0x38);
  (*local_c8)(lVar15,0,1,LVar6.unknown);
  local_a0 = 0;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  IVar8 = AppIntents::IntentDialog::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(IVar8.unknown + -8) + 0x38);
  (*pcVar14)(lVar9,1,1,IVar8.unknown);
  (**(code **)(lVar16 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___enum_case_for_AppIntents_IntentParameter_IntControlStyle_stepper<A_where_A:_AppIntents__IntentValue,A:_Swift_Sendable>_AppIntents_IntentParameter<A>_IntControlStyle_Type___>_AppIntents_IntentParameter<A>_IntControlStyle_100ea8d10
             ,puVar4);
  puVar2 = local_b0;
  lVar10 = local_b8;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_AppIntents_InputConnectionBehavior_default_AppIntents_InputConnectionBehavior_Type___>_AppIntents_InputConnectionBehavior_100ea8dc8
  ;
  pcVar11 = *(code **)(lVar13 + 0x68);
  (*pcVar11)(local_b0,uVar1,local_b8);
  *(undefined1 **)(title.unknown + -0x10) = puVar2;
  LVar6.unknown = title.unknown;
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(local_d0,title);
  pIVar7 = (IntentParameter *)&DAT_100fac568;
  local_d0 = (IntentParameter *)LVar6.unknown;
  FUN_1000037f0(&DAT_100fac568,&DAT_100c2af48);
  stringLiteral_01.bridgeObject = &DAT_e400000000000000;
  stringLiteral_01.str = (char *)0x7473694c;
  local_d8 = pIVar7;
  Foundation::LocalizedStringResource::init(stringLiteral_01);
  stringLiteral_02.bridgeObject = (void *)0x8000000100d8f880;
  stringLiteral_02.str = (char *)0xd000000000000015;
  Foundation::LocalizedStringResource::init(stringLiteral_02);
  (*local_c8)(lVar15,0,1,local_c0);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  (*pcVar14)(lVar9,1,1,IVar8.unknown);
  (*pcVar14)(local_a8,1,1,IVar8.unknown);
  (*pcVar11)(puVar2,uVar1,lVar10);
  FUN_1000cff04();
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(local_d8,title);
  auVar17._8_8_ = title.unknown;
  auVar17._0_8_ = local_d0;
  return auVar17;
}



/* Address: 0x1000d2df4 | FUN_1000d2df4 */

void FUN_1000d2df4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000d2668(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000d2e0c | FUN_1000d2e0c */

void FUN_1000d2e0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac670 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b540,&DAT_100eb54c8);
  DAT_100fac670 = pTVar1;
  return;
}



/* Address: 0x1000d2e4c | FUN_1000d2e4c */

void FUN_1000d2e4c(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)param_2,param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d2e74 | FUN_1000d2e74 */

void FUN_1000d2e74(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)(param_2 + 8),param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d2e9c | FUN_1000d2e9c */

undefined1  [16] FUN_1000d2e9c(void)

{
  return ZEXT816(0x100eb54c8);
}



/* Address: 0x1000d2eac | thunk_FUN_1000d2eb0 */

void thunk_FUN_1000d2eb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b518;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b518,&DAT_100eb54c8);
  DAT_100fac6a0 = pTVar1;
  return;
}


