/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d2eb0 | FUN_1000d2eb0 */

void FUN_1000d2eb0(void)

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



/* Address: 0x1000d2ef0 | thunk_FUN_1000d2ef4 */

void thunk_FUN_1000d2ef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b620,&DAT_100eb5658);
  DAT_100fac6a8 = pTVar1;
  return;
}



/* Address: 0x1000d2ef4 | FUN_1000d2ef4 */

void FUN_1000d2ef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b620,&DAT_100eb5658);
  DAT_100fac6a8 = pTVar1;
  return;
}



/* Address: 0x1000d2f34 | thunk_FUN_1000d2f38 */

void thunk_FUN_1000d2f38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b648,&DAT_100eb5658);
  DAT_100fac6b0 = pTVar1;
  return;
}



/* Address: 0x1000d2f38 | FUN_1000d2f38 */

void FUN_1000d2f38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b648,&DAT_100eb5658);
  DAT_100fac6b0 = pTVar1;
  return;
}



/* Address: 0x1000d2f78 | FUN_1000d2f78 */

undefined8 FUN_1000d2f78(long param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca262c,1);
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x1000d2f9c | FUN_1000d2f9c */

void FUN_1000d2f9c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2604,1);
  return;
}



/* Address: 0x1000d2fac | FUN_1000d2fac */

void FUN_1000d2fac(void)

{
  LocalizedStringResource LVar1;
  String stringLiteral;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  FUN_1000ce204(LVar1.unknown,&DAT_101057130);
  FUN_1000cd990(LVar1.unknown,&DAT_101057130);
  stringLiteral.bridgeObject = (void *)0xef6d657449207473;
  stringLiteral.str = (char *)0x6574614c20746547;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d3018 | FUN_1000d3018 */

void FUN_1000d3018(void)

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
  
  puVar1 = &DAT_100fac740;
  FUN_1000037f0(&DAT_100fac740,&DAT_100c2b6b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar6.unknown = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fac748;
  FUN_1000037f0(&DAT_100fac748,&DAT_100c2b6c0);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000d37f4();
  puVar5 = puVar2;
  AppIntents::ParameterSummaryString::StringInterpolation::_init
            ((StringInterpolation *)(PVar6.unknown + -extraout_x8_00),0x16,2);
  SVar7.bridgeObject = (void *)0xeb00000000207473;
  SVar7.str = (char *)0x6574616c20746547;
  SVar9.message.bridgeObject = puVar5;
  SVar9.message.str = puVar1;
  SVar9.template.bridgeObject = (void *)in_x6;
  SVar9.template.str = (char *)in_x5;
  SVar9._16_8_ = in_x4;
  SVar9.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar7,SVar9);
  puVar3 = &DAT_100c2b6c8;
  _swift_getKeyPath(&DAT_100c2b6c8);
  puVar4 = &DAT_100fac750;
  FUN_1000037f0(&DAT_100fac750,&DAT_100c2b6f0);
  AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation
            (puVar3,puVar1,puVar4);
  _swift_release(puVar3);
  SVar8.bridgeObject = (void *)0xeb00000000206d6f;
  SVar8.str = (char *)0x7266206d65746920;
  SVar10.message.bridgeObject = puVar5;
  SVar10.message.str = puVar1;
  SVar10.template.bridgeObject = (void *)in_x6;
  SVar10.template.str = (char *)in_x5;
  SVar10._16_8_ = in_x4;
  SVar10.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar8,SVar10);
  puVar3 = &DAT_100c2b6f8;
  _swift_getKeyPath(&DAT_100c2b6f8);
  puVar4 = &DAT_100fac758;
  FUN_1000037f0(&DAT_100fac758,&DAT_100c2b720);
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
  stringInterpolation.message.bridgeObject = &DAT_100eb5658;
  stringInterpolation.message.str = (char *)(PVar6.unknown + -extraout_x8_00);
  stringInterpolation.template.bridgeObject = (void *)in_x4;
  stringInterpolation.template.str = puVar5;
  stringInterpolation._16_8_ = puVar2;
  stringInterpolation.interpolationCount = in_x5;
  AppIntents::ParameterSummaryString::_init(stringInterpolation);
  AppIntents::IntentParameterSummary::_init(PVar6);
  return;
}



/* Address: 0x1000d31f0 | FUN_1000d31f0 */

void FUN_1000d31f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _swift_task_switch(FUN_1000d3260,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000d3260 | FUN_1000d3260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d32c8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d33ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d3260(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  _ArrayBuffer _Var6;
  _ArrayBuffer _Var7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  puVar3 = &DAT_100fa82f8;
  FUN_1000037f0(&DAT_100fa82f8,&DAT_100c25368);
  _Var7.unknown = (undefined *)(unaff_x22 + 0x10);
  FUN_100357d14(unaff_x22 + 0x30,FUN_1000d3b9c,_Var7.unknown,puVar3);
  _Var6.unknown = *(undefined **)(unaff_x22 + 0x30);
  if (_Var6.unknown != (undefined *)0x0) {
    FUN_10031bcdc();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      lVar4 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var1.unknown = _Var6.unknown;
      }
      lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar4 != 0) {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d33f4);
          (*pcVar2)();
        }
      }
      else {
        _Var7.unknown = _Var6.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
      }
      _swift_bridgeObjectRelease();
      FUN_10037c9a8();
      goto LAB_1000d3378;
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  _Var6.unknown = (undefined *)0x0;
  _Var7.unknown = (undefined *)0x0;
LAB_1000d3378:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined **)(unaff_x22 + 0x10) = _Var6.unknown;
  *(undefined **)(unaff_x22 + 0x18) = _Var7.unknown;
  puVar3 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  puVar5 = puVar3;
  FUN_1000d1278();
  (extension_AppIntents)::AppIntents::IntentResult::_result(uVar8,puVar5,puVar3,puVar5);
  _swift_bridgeObjectRelease(_Var7.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001000d33dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000d33f4 | FUN_1000d33f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d33f4(long *param_1,undefined8 param_2,undefined8 param_3,IntentParameter *param_4)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  IntentParameter *pIVar8;
  long lVar9;
  long *plVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  __int64 _Var15;
  long lVar16;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  IntentParameter aIStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357e58(aIStack_88);
  pIVar8 = aIStack_88;
  FUN_100004640(pIVar8,local_70);
  AppIntents::IntentParameter::get_wrappedValue(param_4,pIVar8);
  uVar5 = local_a8;
  lVar9 = local_c0;
  _swift_bridgeObjectRelease(local_98);
  _swift_bridgeObjectRelease(uVar5);
  (**(code **)(*(long *)(lStack_68 + 8) + 0x20))(lVar9,uStack_b8,local_70);
  _swift_bridgeObjectRelease(uStack_b8);
  pIVar8 = aIStack_88;
  if (lVar9 == 0) {
    FUN_100004594(pIVar8);
    FUN_1000d3bb4();
    _swift_allocError(&DAT_100eb56f0,pIVar8,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100004594();
    FUN_100357cf0(&local_c0);
    FUN_100004640(&local_c0,local_a8);
    (**(code **)(*(long *)(lStack_a0 + 8) + 0x10))(lVar9,local_a8);
    plVar10 = &local_c0;
    FUN_100004594();
    FUN_1000386a0();
    if ((ulong)plVar10 >> 0x3e == 0) {
      _Var15 = *(long *)(((ulong)plVar10 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRelease();
    }
    else {
      _Var1.unknown = (undefined *)((ulong)plVar10 & 0xffffffffffffff8);
      if ((long *)0x7fffffffffffffff < plVar10) {
        _Var1.unknown = (undefined *)plVar10;
      }
      _Var15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      _swift_bridgeObjectRelease(plVar10);
      if (_Var15 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000d368c);
        (*pcVar6)();
      }
    }
    _swift_retain(lVar9);
    if (_Var15 != 0) {
      lVar16 = 0;
      do {
        FUN_1001aeadc(&local_c0,lVar16);
        lVar4 = local_c0;
        pMVar11 = Swift::MainActor::typeMetadataAccessor();
        pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar11);
        pMVar11 = pMVar12;
        FUN_1000081a8();
        UVar13 = Swift::Actor::get_unownedExecutor();
        UVar14 = UVar13;
        _swift_task_isCurrentExecutor();
        uVar7 = (uint)UVar14.unknown;
        if (((ulong)UVar14.unknown & 1) == 0) {
          uVar7 = 0xd8f9a0;
          _swift_task_reportUnexpectedExecutor
                    ("Paste/GetLatestItemIntent.swift",0x1f,1,0x20,UVar13.unknown,pMVar11);
        }
        FUN_10031eba8();
        bVar3 = DAT_100fac739;
        bVar2 = DAT_100fac738;
        _swift_release(pMVar12);
        if (((uint)bVar2 == (uVar7 & 0xff)) || ((uint)bVar3 == (uVar7 & 0xff))) {
          _swift_release_n(lVar9,2);
          *param_1 = lVar4;
          return;
        }
        lVar16 = lVar16 + 1;
      } while (_Var15 != lVar16);
    }
    _swift_release_n(lVar9,2);
    *param_1 = 0;
  }
  return;
}



/* Address: 0x1000d368c | FUN_1000d368c */

void FUN_1000d368c(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  LocalizedStringResource LVar2;
  
  if (DAT_100fac760 != -1) {
    _swift_once(&DAT_100fac760,FUN_1000d2fac);
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  LVar2 = LVar1;
  FUN_1000cd990(LVar1.unknown,&DAT_101057130);
                    /* WARNING: Could not recover jumptable at 0x0001000d36e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x10))(param_1,LVar2.unknown,LVar1.unknown);
  return;
}



/* Address: 0x1000d36fc | thunk_FUN_1000d3018 */

void thunk_FUN_1000d3018(void)

{
  FUN_1000d3018();
  return;
}



/* Address: 0x1000d3700 | FUN_1000d3700 */

void FUN_1000d3700(undefined8 param_1)

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
  FUN_1000d31f0(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000d3764 | FUN_1000d3764 */

void FUN_1000d3764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000d3858();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000d3788 | FUN_1000d3788 */

String FUN_1000d3788(void)

{
  String SVar1;
  
  FUN_1000d37f4();
  SVar1 = (extension_AppIntents)::AppIntents::AppIntent::get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000d37b0 | FUN_1000d37b0 */

undefined1  [16] FUN_1000d37b0(void)

{
  return ZEXT816(0x100eb5658);
}



/* Address: 0x1000d37c0 | FUN_1000d37c0 */

void FUN_1000d37c0(void)

{
  FUN_100016eac(&DAT_100fac6b8,&DAT_100fac6c0,&DAT_100c2b688,
                PTR_AppIntents__AppIntents__IntentParameterSummary<undefined>_>AppIntents__ParameterSummary_100ea8d90
               );
  return;
}



/* Address: 0x1000d37f4 | FUN_1000d37f4 */

void FUN_1000d37f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac6c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b588;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b588,&DAT_100eb5658);
  DAT_100fac6c8 = pTVar1;
  return;
}



/* Address: 0x1000d3834 | FUN_1000d3834 */

void FUN_1000d3834(void)

{
  String stringLiteral;
  
  stringLiteral.bridgeObject = (void *)0xee00646e756f6620;
  stringLiteral.str = (char *)0x746f6e207473694c;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d3858 | FUN_1000d3858 */

undefined1  [16] FUN_1000d3858(void)

{
  InputConnectionBehavior IVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  IntentParameter *pIVar5;
  IntentDialog IVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  LocalizedStringResource title;
  long lVar14;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  undefined1 auVar15 [16];
  code *local_c0;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0 [8];
  long lVar2;
  
  IVar1 = AppIntents::InputConnectionBehavior::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,IVar1.value);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fac550;
  FUN_1000037f0(&DAT_100fac550,&DAT_100c2b410);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar11 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x12;
  puVar3 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_01;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar8 = *(long *)(LVar4.unknown + -8);
  local_a8 = LVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  title.unknown = (undefined *)(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pIVar5 = (IntentParameter *)&DAT_100fac6d0;
  FUN_1000037f0(&DAT_100fac6d0,&DAT_100c2b698);
  stringLiteral.bridgeObject = &DAT_e400000000000000;
  stringLiteral.str = (char *)0x65707954;
  Foundation::LocalizedStringResource::init(stringLiteral);
  stringLiteral_00.bridgeObject = (void *)0xec0000006b6e694c;
  stringLiteral_00.str = (char *)0x20726f2074786554;
  Foundation::LocalizedStringResource::init(stringLiteral_00);
  local_b0 = *(code **)(lVar8 + 0x38);
  (*local_b0)(lVar13,0,1,LVar4.unknown);
  local_a0[0] = local_a0[0] & 0xffffffffffffff00;
  IVar6 = AppIntents::IntentDialog::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(IVar6.unknown + -8) + 0x38);
  (*pcVar9)(lVar12,1,1,IVar6.unknown);
  (*pcVar9)(lVar11,1,1,IVar6.unknown);
  local_b4 = *(undefined4 *)
              PTR___enum_case_for_AppIntents_InputConnectionBehavior_default_AppIntents_InputConnectionBehavior_Type___>_AppIntents_InputConnectionBehavior_100ea8dc8
  ;
  local_c0 = *(code **)(lVar10 + 0x68);
  (*local_c0)(lVar14,local_b4,lVar2);
  puVar3 = &DAT_100fac3c0;
  FUN_1000037f0(&DAT_100fac3c0,&DAT_100c2b6a0);
  _swift_initStaticObject();
  puVar7 = puVar3;
  FUN_1000cdf90();
  LVar4.unknown = title.unknown;
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init
            (pIVar5,title.unknown,lVar13,local_a0,lVar12,lVar11,lVar14,puVar3,puVar7);
  pIVar5 = (IntentParameter *)&DAT_100fac568;
  FUN_1000037f0(&DAT_100fac568,&DAT_100c2af48);
  stringLiteral_01.bridgeObject = &DAT_e400000000000000;
  stringLiteral_01.str = (char *)0x7473694c;
  Foundation::LocalizedStringResource::init(stringLiteral_01);
  stringLiteral_02.bridgeObject = (void *)0x8000000100d8f880;
  stringLiteral_02.str = (char *)0xd000000000000015;
  Foundation::LocalizedStringResource::init(stringLiteral_02);
  (*local_b0)(lVar13,0,1,local_a8);
  local_a0[6] = 0;
  local_a0[3] = 0;
  local_a0[2] = 0;
  local_a0[5] = 0;
  local_a0[4] = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  (*pcVar9)(lVar12,1,1,IVar6.unknown);
  (*pcVar9)(lVar11,1,1,IVar6.unknown);
  (*local_c0)(lVar14,local_b4,lVar2);
  FUN_1000cff04();
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(pIVar5,title);
  auVar15._8_8_ = title.unknown;
  auVar15._0_8_ = LVar4.unknown;
  return auVar15;
}



/* Address: 0x1000d3b9c | FUN_1000d3b9c */

void FUN_1000d3b9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000d33f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000d3bb4 | FUN_1000d3bb4 */

void FUN_1000d3bb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b7c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b7c0,&DAT_100eb56f0);
  DAT_100fac708 = pTVar1;
  return;
}



/* Address: 0x1000d3bf4 | FUN_1000d3bf4 */

void FUN_1000d3bf4(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)param_2,param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d3c1c | FUN_1000d3c1c */

void FUN_1000d3c1c(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)(param_2 + 8),param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d3c44 | FUN_1000d3c44 */

undefined1  [16] FUN_1000d3c44(void)

{
  return ZEXT816(0x100eb56f0);
}



/* Address: 0x1000d3c54 | thunk_FUN_1000d3c58 */

void thunk_FUN_1000d3c58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b798,&DAT_100eb56f0);
  DAT_100fac768 = pTVar1;
  return;
}



/* Address: 0x1000d3c58 | FUN_1000d3c58 */

void FUN_1000d3c58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b798,&DAT_100eb56f0);
  DAT_100fac768 = pTVar1;
  return;
}



/* Address: 0x1000d3c98 | thunk_FUN_1000d3cb0 */

void thunk_FUN_1000d3cb0(void)

{
  FUN_1000d3cb0();
  return;
}



/* Address: 0x1000d3c9c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::AppShortcutsProvider::get_shortcutTileColor */

ShortcutTileColor
(extension_AppIntents)::AppIntents::AppShortcutsProvider::get_shortcutTileColor(void)

{
  ShortcutTileColor SVar1;
  
  SVar1 = get_shortcutTileColor();
  return (ShortcutTileColor)SVar1.value;
}



/* Address: 0x1000d3ca0 | FUN_1000d3ca0 */

undefined1  [16] FUN_1000d3ca0(void)

{
  return ZEXT816(0x100eb5828);
}



/* Address: 0x1000d3cb0 | FUN_1000d3cb0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d43f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1000d3cb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  AppShortcutPhraseToken AVar4;
  LocalizedStringResource LVar5;
  undefined *puVar7;
  AppShortcut AVar8;
  undefined *puVar9;
  AppShortcut AVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar14;
  StringInterpolation *pSVar15;
  undefined *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String stringLiteral;
  StringInterpolation SVar32;
  StringInterpolation SVar33;
  StringInterpolation SVar34;
  StringInterpolation SVar35;
  StringInterpolation SVar36;
  StringInterpolation SVar37;
  StringInterpolation SVar38;
  StringInterpolation SVar39;
  StringInterpolation SVar40;
  StringInterpolation SVar41;
  StringInterpolation SVar42;
  StringInterpolation SVar43;
  StringInterpolation SVar44;
  StringInterpolation SVar45;
  StringInterpolation stringInterpolation;
  StringInterpolation stringInterpolation_00;
  StringInterpolation stringInterpolation_01;
  StringInterpolation stringInterpolation_02;
  StringInterpolation stringInterpolation_03;
  StringInterpolation stringInterpolation_04;
  StringInterpolation stringInterpolation_05;
  StringInterpolation SVar46;
  StringInterpolation SVar47;
  StringInterpolation SVar48;
  StringInterpolation SVar49;
  StringInterpolation SVar50;
  StringInterpolation SVar51;
  StringInterpolation SVar52;
  undefined1 local_110 [24];
  StringInterpolation *local_f8;
  StringInterpolation *local_f0;
  undefined *local_e8;
  StringInterpolation *local_e0;
  AppShortcut local_d8;
  long local_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined *local_a8;
  code *local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *puStack_70;
  long lVar6;
  
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  local_b8 = local_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar4 = AppIntents::AppShortcutPhraseToken::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)LVar5.unknown >> 8),AVar4.value);
  lVar20 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = (long)(local_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fac770;
  puVar9 = &DAT_100c2b848;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  pSVar15 = (StringInterpolation *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_e0 = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12);
  local_f0 = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12_00);
  local_f8 = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12_01);
  local_110._16_8_ = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12_02);
  local_110._8_8_ = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12_03);
  local_110._0_8_ = pSVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pSVar15 = (StringInterpolation *)((long)pSVar15 - extraout_x12_04);
  AVar8 = AppIntents::AppShortcut::typeMetadataAccessor();
  local_c8 = *(long *)(AVar8.unknown + -8);
  puStack_c0 = AVar8.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  puVar16 = (undefined *)((long)pSVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_d8.unknown = puVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_d0 = (long)puVar16 - extraout_x12_05;
  FUN_1000d0ea8();
  puVar16 = &DAT_100fac778;
  local_78 = AVar8.unknown;
  puStack_70 = puVar9;
  FUN_1000037f0(&DAT_100fac778,&DAT_100c2b850);
  puVar9 = &DAT_100fac780;
  FUN_1000037f0(&DAT_100fac780,&DAT_100c2b858);
  local_98 = *(long *)(*(long *)(puVar9 + -8) + 0x48);
  uVar14 = (ulong)*(byte *)(*(long *)(puVar9 + -8) + 0x50);
  uVar19 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar16,uVar19 + local_98 * 7,uVar14 | 7);
  *(undefined8 *)(puVar16 + 0x18) = 0xe;
  *(undefined8 *)(puVar16 + 0x10) = 7;
  puVar9 = puVar16 + uVar19;
  local_e8 = puVar16;
  FUN_1000d1220();
  puVar12 = puVar16;
  local_90 = puVar16;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init(pSVar15,0xc,1);
  SVar22.bridgeObject = &DAT_e700000000000000;
  SVar22.str = (char *)0x20657461657243;
  SVar32.message.bridgeObject = puVar12;
  SVar32.message.str = puVar7;
  SVar32.template.bridgeObject = (void *)in_x6;
  SVar32.template.str = (char *)in_x5;
  SVar32._16_8_ = in_x4;
  SVar32.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar22,SVar32);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_AppIntents_AppShortcutPhraseToken_applicationName_AppIntents_AppShortcutPhraseToken_Type___>_AppIntents_AppShortcutPhraseToken_100ea8c60
  ;
  pcVar21 = *(code **)(lVar20 + 0x68);
  lVar11 = lVar6;
  local_b0 = lVar6;
  local_84 = uVar1;
  (*pcVar21)(lVar18,uVar1);
  SVar46.message.bridgeObject = (void *)lVar11;
  SVar46.message.str = puVar7;
  SVar46.template.bridgeObject = (void *)in_x5;
  SVar46.template.str = (char *)in_x4;
  SVar46._16_8_ = puVar12;
  SVar46.interpolationCount = in_x6;
  AVar4.value = (__int8)lVar18;
  local_a0 = pcVar21;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar46);
  pcVar17 = *(code **)(lVar20 + 8);
  (*pcVar17)(lVar18,lVar6);
  SVar23.bridgeObject = &DAT_e500000000000000;
  SVar23.str = (char *)0x6d65746920;
  SVar33.message.bridgeObject = puVar12;
  SVar33.message.str = puVar7;
  SVar33.template.bridgeObject = (void *)in_x6;
  SVar33.template.str = (char *)in_x5;
  SVar33._16_8_ = in_x4;
  SVar33.interpolationCount = in_x7;
  local_80 = pcVar17;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar23,SVar33);
  puVar13 = local_90;
  stringInterpolation.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation.message.str = (char *)pSVar15;
  stringInterpolation.template.bridgeObject = (void *)in_x4;
  stringInterpolation.template.str = puVar12;
  stringInterpolation._16_8_ = local_90;
  stringInterpolation.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation);
  uVar2 = local_110._0_8_;
  puVar12 = puVar13;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init
            ((StringInterpolation *)local_110._0_8_,10,1);
  SVar24.bridgeObject = &DAT_e500000000000000;
  SVar24.str = (char *)0x2065766153;
  SVar34.message.bridgeObject = puVar12;
  SVar34.message.str = puVar7;
  SVar34.template.bridgeObject = (void *)in_x6;
  SVar34.template.str = (char *)in_x5;
  SVar34._16_8_ = in_x4;
  SVar34.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar24,SVar34);
  lVar11 = local_b0;
  lVar6 = local_b0;
  (*pcVar21)(lVar18,uVar1);
  SVar47.message.bridgeObject = (void *)lVar6;
  SVar47.message.str = puVar7;
  SVar47.template.bridgeObject = (void *)in_x5;
  SVar47.template.str = (char *)in_x4;
  SVar47._16_8_ = puVar12;
  SVar47.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar47);
  (*pcVar17)(lVar18,lVar11);
  SVar25.bridgeObject = &DAT_e500000000000000;
  SVar25.str = (char *)0x6d65746920;
  SVar35.message.bridgeObject = puVar12;
  SVar35.message.str = puVar7;
  SVar35.template.bridgeObject = (void *)in_x6;
  SVar35.template.str = (char *)in_x5;
  SVar35._16_8_ = in_x4;
  SVar35.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar25,SVar35);
  stringInterpolation_00.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_00.message.str = (char *)uVar2;
  stringInterpolation_00.template.bridgeObject = (void *)in_x4;
  stringInterpolation_00.template.str = puVar12;
  stringInterpolation_00._16_8_ = puVar13;
  stringInterpolation_00.interpolationCount = in_x5;
  local_a8 = puVar9;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_00);
  uVar2 = local_110._8_8_;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init
            ((StringInterpolation *)local_110._8_8_,9,1);
  SVar26.bridgeObject = &DAT_e400000000000000;
  SVar26.str = (char *)0x20646441;
  SVar36.message.bridgeObject = puVar13;
  SVar36.message.str = puVar7;
  SVar36.template.bridgeObject = (void *)in_x6;
  SVar36.template.str = (char *)in_x5;
  SVar36._16_8_ = in_x4;
  SVar36.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar26,SVar36);
  uVar1 = local_84;
  pcVar17 = local_a0;
  lVar11 = local_b0;
  lVar6 = local_b0;
  (*local_a0)(lVar18,local_84);
  SVar48.message.bridgeObject = (void *)lVar6;
  SVar48.message.str = puVar7;
  SVar48.template.bridgeObject = (void *)in_x5;
  SVar48.template.str = (char *)in_x4;
  SVar48._16_8_ = puVar13;
  SVar48.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar48);
  (*local_80)(lVar18,lVar11);
  SVar27.bridgeObject = &DAT_e500000000000000;
  SVar27.str = (char *)0x6d65746920;
  SVar37.message.bridgeObject = puVar13;
  SVar37.message.str = puVar7;
  SVar37.template.bridgeObject = (void *)in_x6;
  SVar37.template.str = (char *)in_x5;
  SVar37._16_8_ = in_x4;
  SVar37.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar27,SVar37);
  puVar9 = local_90;
  stringInterpolation_01.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_01.message.str = (char *)uVar2;
  stringInterpolation_01.template.bridgeObject = (void *)in_x4;
  stringInterpolation_01.template.str = puVar13;
  stringInterpolation_01._16_8_ = local_90;
  stringInterpolation_01.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_01);
  uVar2 = local_110._16_8_;
  puVar13 = puVar9;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init
            ((StringInterpolation *)local_110._16_8_,0x16,1);
  SVar28.bridgeObject = (void *)0x8000000100d8f9a0;
  SVar28.str = (char *)0xd000000000000016;
  SVar38.message.bridgeObject = puVar13;
  SVar38.message.str = puVar7;
  SVar38.template.bridgeObject = (void *)in_x6;
  SVar38.template.str = (char *)in_x5;
  SVar38._16_8_ = in_x4;
  SVar38.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar28,SVar38);
  lVar6 = lVar11;
  (*pcVar17)(lVar18,uVar1);
  SVar49.message.bridgeObject = (void *)lVar6;
  SVar49.message.str = puVar7;
  SVar49.template.bridgeObject = (void *)in_x5;
  SVar49.template.str = (char *)in_x4;
  SVar49._16_8_ = puVar13;
  SVar49.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar49);
  pcVar21 = local_80;
  (*local_80)(lVar18,lVar11);
  SVar39.message.bridgeObject = puVar13;
  SVar39.message.str = puVar7;
  SVar39.template.bridgeObject = (void *)in_x6;
  SVar39.template.str = (char *)in_x5;
  SVar39._16_8_ = in_x4;
  SVar39.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar39);
  stringInterpolation_02.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_02.message.str = (char *)uVar2;
  stringInterpolation_02.template.bridgeObject = (void *)in_x4;
  stringInterpolation_02.template.str = puVar13;
  stringInterpolation_02._16_8_ = puVar9;
  stringInterpolation_02.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_02);
  lVar6 = local_98;
  pSVar15 = local_f8;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init(local_f8,0x11,1);
  SVar29.bridgeObject = (void *)0x8000000100d8f9c0;
  SVar29.str = (char *)0xd000000000000011;
  SVar40.message.bridgeObject = puVar9;
  SVar40.message.str = puVar7;
  SVar40.template.bridgeObject = (void *)in_x6;
  SVar40.template.str = (char *)in_x5;
  SVar40._16_8_ = in_x4;
  SVar40.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar29,SVar40);
  pcVar17 = local_a0;
  lVar20 = lVar11;
  (*local_a0)(lVar18,local_84);
  SVar50.message.bridgeObject = (void *)lVar20;
  SVar50.message.str = puVar7;
  SVar50.template.bridgeObject = (void *)in_x5;
  SVar50.template.str = (char *)in_x4;
  SVar50._16_8_ = puVar9;
  SVar50.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar50);
  (*pcVar21)(lVar18,lVar11);
  SVar41.message.bridgeObject = puVar9;
  SVar41.message.str = puVar7;
  SVar41.template.bridgeObject = (void *)in_x6;
  SVar41.template.str = (char *)in_x5;
  SVar41._16_8_ = in_x4;
  SVar41.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar41);
  puVar13 = local_90;
  stringInterpolation_03.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_03.message.str = (char *)pSVar15;
  stringInterpolation_03.template.bridgeObject = (void *)in_x4;
  stringInterpolation_03.template.str = puVar9;
  stringInterpolation_03._16_8_ = local_90;
  stringInterpolation_03.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_03);
  pSVar15 = local_f0;
  local_f8 = (StringInterpolation *)(lVar6 * 5);
  puVar9 = puVar13;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init(local_f0,8,1);
  SVar30.bridgeObject = &DAT_e800000000000000;
  SVar30.str = (char *)0x206f742065766153;
  SVar42.message.bridgeObject = puVar9;
  SVar42.message.str = puVar7;
  SVar42.template.bridgeObject = (void *)in_x6;
  SVar42.template.str = (char *)in_x5;
  SVar42._16_8_ = in_x4;
  SVar42.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar30,SVar42);
  uVar1 = local_84;
  lVar6 = lVar11;
  (*pcVar17)(lVar18,local_84);
  SVar51.message.bridgeObject = (void *)lVar6;
  SVar51.message.str = puVar7;
  SVar51.template.bridgeObject = (void *)in_x5;
  SVar51.template.str = (char *)in_x4;
  SVar51._16_8_ = puVar9;
  SVar51.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar51);
  (*pcVar21)(lVar18,lVar11);
  SVar43.message.bridgeObject = puVar9;
  SVar43.message.str = puVar7;
  SVar43.template.bridgeObject = (void *)in_x6;
  SVar43.template.str = (char *)in_x5;
  SVar43._16_8_ = in_x4;
  SVar43.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar43);
  stringInterpolation_04.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_04.message.str = (char *)pSVar15;
  stringInterpolation_04.template.bridgeObject = (void *)in_x4;
  stringInterpolation_04.template.str = puVar9;
  stringInterpolation_04._16_8_ = puVar13;
  stringInterpolation_04.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_04);
  pSVar15 = local_e0;
  puVar9 = puVar13;
  AppIntents::AppShortcutPhrase::StringInterpolation::_init(local_e0,7,1);
  SVar31.bridgeObject = &DAT_e700000000000000;
  SVar31.str = (char *)0x206f7420646441;
  SVar44.message.bridgeObject = puVar9;
  SVar44.message.str = puVar7;
  SVar44.template.bridgeObject = (void *)in_x6;
  SVar44.template.str = (char *)in_x5;
  SVar44._16_8_ = in_x4;
  SVar44.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral(SVar31,SVar44);
  lVar6 = lVar11;
  (*pcVar17)(lVar18,uVar1);
  SVar52.message.bridgeObject = (void *)lVar6;
  SVar52.message.str = puVar7;
  SVar52.template.bridgeObject = (void *)in_x5;
  SVar52.template.str = (char *)in_x4;
  SVar52._16_8_ = puVar9;
  SVar52.interpolationCount = in_x6;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendInterpolation(AVar4,SVar52);
  (*local_80)(lVar18,lVar11);
  SVar45.message.bridgeObject = puVar9;
  SVar45.message.str = puVar7;
  SVar45.template.bridgeObject = (void *)in_x6;
  SVar45.template.str = (char *)in_x5;
  SVar45._16_8_ = in_x4;
  SVar45.interpolationCount = in_x7;
  AppIntents::AppShortcutPhrase::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar45);
  stringInterpolation_05.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation_05.message.str = (char *)pSVar15;
  stringInterpolation_05.template.bridgeObject = (void *)in_x4;
  stringInterpolation_05.template.str = puVar9;
  stringInterpolation_05._16_8_ = puVar13;
  stringInterpolation_05.interpolationCount = in_x5;
  AppIntents::AppShortcutPhrase::_init(stringInterpolation_05);
  puVar3 = local_b8;
  stringLiteral.bridgeObject = (void *)0xeb000000006d6574;
  stringLiteral.str = (char *)0x4920657461657243;
  Foundation::LocalizedStringResource::init(stringLiteral);
  AVar8.unknown = local_d8.unknown;
  puVar7 = local_e8;
  AppIntents::AppShortcut::_init
            (local_d8.unknown,puVar16,local_e8,puVar3,0xd000000000000011,0x8000000100d8f9e0,
             &DAT_100eb5038,puVar13);
  lVar11 = local_d0;
  AppIntents::AppShortcutsBuilder::buildExpression
            (AVar8,(AppShortcutsBuilder)(__int8)puVar7,local_d0);
  puVar7 = puStack_c0;
  lVar6 = local_c8;
  pcVar17 = *(code **)(local_c8 + 8);
  (*pcVar17)(AVar8.unknown,puStack_c0);
  AVar8.unknown = &DAT_100fac788;
  FUN_1000037f0(&DAT_100fac788,&DAT_100c2b860);
  uVar14 = (ulong)*(byte *)(lVar6 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(AVar8.unknown + 0x18) = 2;
  *(undefined8 *)(AVar8.unknown + 0x10) = 1;
  lVar20 = lVar11;
  (**(code **)(lVar6 + 0x10))
            (AVar8.unknown + (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff)),lVar11,puVar7);
  AVar10.unknown = AVar8.unknown;
  AppIntents::AppShortcutsBuilder::_buildBlock(AVar8,(AppShortcutsBuilder)(__int8)lVar20);
  _swift_release(AVar8.unknown);
  (*pcVar17)(lVar11,puVar7);
  return AVar10.unknown;
}



/* Address: 0x1000d44b8 | FUN_1000d44b8 */

void FUN_1000d44b8(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d44c8 | FUN_1000d44c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d44c8(void)

{
  return ZEXT816(0x100fac7d0);
}



/* Address: 0x1000d44e8 | FUN_1000d44e8 */

void FUN_1000d44e8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c2b8f8;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fac900,&DAT_100c2b920);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fac840 = puVar1;
  return;
}



/* Address: 0x1000d4544 | FUN_1000d4544 */

undefined1  [16] FUN_1000d4544(void)

{
  return ZEXT816(0x1000d4d70);
}



/* Address: 0x1000d4554 | FUN_1000d4554 */

void FUN_1000d4554(undefined8 *param_1)

{
  *param_1 = thunk_FUN_1000d4a94;
  param_1[1] = 0;
  return;
}



/* Address: 0x1000d4564 | FUN_1000d4564 */

void FUN_1000d4564(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac828;
  FUN_1000037f0(&DAT_100fac828,&DAT_100c2b890);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1000d4598 | FUN_1000d4598 */

void FUN_1000d4598(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1000d45a8 | FUN_1000d45a8 */

long FUN_1000d45a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100fac828;
  FUN_1000037f0(&DAT_100fac828,&DAT_100c2b890);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return unaff_x20;
}



/* Address: 0x1000d4624 | FUN_1000d4624 */

void FUN_1000d4624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fac828;
  FUN_1000037f0(&DAT_100fac828,&DAT_100c2b890);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Address: 0x1000d468c | FUN_1000d468c */

void FUN_1000d468c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_90;
  undefined1 auStack_80 [24];
  code *local_68;
  undefined8 uStack_60;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _os_unfair_lock_lock(lVar3 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_80,0,0);
  FUN_1000d47b4(unaff_x20 + 0x28,&local_a8);
  if (local_90 == 0) {
    FUN_1000d4804(&local_a8);
    if (DAT_100fac838 != -1) {
      _swift_once(&DAT_100fac838,FUN_1000d44e8);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_1000da768(&local_68);
    local_a8 = uVar1;
    uStack_a0 = uVar2;
    (*local_68)(param_1,&local_a8);
    _swift_release(uStack_60);
    FUN_100076688(param_1,&local_68);
    _swift_beginAccess(unaff_x20 + 0x28,&local_a8,0x21,0);
    FUN_1000d484c(&local_68,unaff_x20 + 0x28);
    _swift_endAccess(&local_a8);
  }
  else {
    FUN_100076508(&local_a8,&local_68);
    FUN_100076508(&local_68,param_1);
  }
  _os_unfair_lock_unlock(lVar3 + 0x10);
  return;
}



/* Address: 0x1000d47b4 | FUN_1000d47b4 */

undefined8 FUN_1000d47b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac830;
  FUN_1000037f0(&DAT_100fac830,&DAT_100c2b898);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000d4804 | FUN_1000d4804 */

undefined8 FUN_1000d4804(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac830;
  FUN_1000037f0(&DAT_100fac830,&DAT_100c2b898);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000d484c | FUN_1000d484c */

undefined8 FUN_1000d484c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac830;
  FUN_1000037f0(&DAT_100fac830,&DAT_100c2b898);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000d489c | FUN_1000d489c */

void FUN_1000d489c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1000d4804(unaff_x20 + 0x28);
  return;
}



/* Address: 0x1000d48c8 | FUN_1000d48c8 */

void FUN_1000d48c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1000d4804(unaff_x20 + 0x28);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d48fc | FUN_1000d48fc */

undefined1  [16] FUN_1000d48fc(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_1000d55ac(0);
  FUN_1000d80e0(&local_18,"PasteLogging/DI+PasteLogging.swift",0x22,2,0x25,0x13,FUN_1000d4958,0,
                uVar1);
  auVar2._8_8_ = &PTR_PTR_100eb5a80;
  auVar2._0_8_ = local_18;
  return auVar2;
}



/* Address: 0x1000d4958 | FUN_1000d4958 */

void FUN_1000d4958(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000d55ac();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1000d4994 | FUN_1000d4994 */

undefined8 FUN_1000d4994(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_1000d69bc(0);
  FUN_1000d80e0(&local_18,"PasteLogging/DI+PasteLogging.swift",0x22,2,0x2b,0x13,FUN_1000d49e8,0,
                uVar1);
  return local_18;
}



/* Address: 0x1000d49e8 | FUN_1000d49e8 */

void FUN_1000d49e8(long *param_1)

{
  long lVar1;
  long lVar2;
  URL UVar3;
  code *pcVar4;
  
  lVar2 = 0;
  FUN_1000d69bc();
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  lVar1 = _TtC12PasteLogging13FileLogOutput::directoryURL;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(UVar3.unknown + -8) + 0x38);
  (*pcVar4)(lVar2 + lVar1,1,1,UVar3.unknown);
  (*pcVar4)(lVar2 + _TtC12PasteLogging13FileLogOutput::fileURL,1,1,UVar3.unknown);
  *(undefined8 *)(lVar2 + _TtC12PasteLogging13FileLogOutput::fileHandle) = 0;
  *param_1 = lVar2;
  return;
}



/* Address: 0x1000d4a94 | FUN_1000d4a94 */

void FUN_1000d4a94(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = 0;
  FUN_1000d55ac(0);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1000d80e0(&local_58,"PasteLogging/DI+PasteLogging.swift",0x22,2,0x25,0x13,FUN_1000d4958,0,
                uVar3);
  uVar3 = local_58;
  puVar4 = &DAT_100fac908;
  FUN_1000037f0(&DAT_100fac908,&DAT_100c2b928);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  uVar5 = 0;
  FUN_1000d7634();
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100eb5ab8;
  FUN_1000d80e0(puVar4 + 0x20,"PasteLogging/DI+PasteLogging.swift",0x22,2,0x38,0x1f,FUN_1000d4c18,0,
                uVar5);
  uVar5 = 0;
  FUN_1000d69bc();
  FUN_1000d80e0(&local_58,"PasteLogging/DI+PasteLogging.swift",0x22,2,0x2b,0x13,FUN_1000d49e8,0,
                uVar5);
  *(undefined8 *)(puVar4 + 0x60) = uVar5;
  *(undefined ***)(puVar4 + 0x68) = &PTR_PTR_100eb5aa0;
  *(undefined8 *)(puVar4 + 0x48) = local_58;
  lVar6 = 0;
  FUN_1000d543c();
  lVar7 = lVar6;
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar2;
  *(undefined8 *)(lVar7 + 0x20) = uVar3;
  *(undefined ***)(lVar7 + 0x28) = &PTR_PTR_100eb5a80;
  *(undefined **)(lVar7 + 0x30) = puVar4;
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_PTR_100eb59a0;
  *param_1 = lVar7;
  return;
}



/* Address: 0x1000d4c18 | FUN_1000d4c18 */

void FUN_1000d4c18(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000d7634();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1000d4c58 | thunk_FUN_1000d4c5c */

void thunk_FUN_1000d4c5c(undefined8 param_1)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000d4c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))(param_1,1,1,UVar1.unknown);
  return;
}



/* Address: 0x1000d4c5c | FUN_1000d4c5c */

void FUN_1000d4c5c(undefined8 param_1)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000d4c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))(param_1,1,1,UVar1.unknown);
  return;
}



/* Address: 0x1000d4c98 | FUN_1000d4c98 */

undefined * FUN_1000d4c98(void)

{
  return PTR___swiftEmptyDictionarySingleton_100eae0e0;
}



/* Address: 0x1000d4ca4 | FUN_1000d4ca4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d4ca4(void)

{
  return ZEXT816(0x100fac888);
}



/* Address: 0x1000d4cc4 | FUN_1000d4cc4 */

void FUN_1000d4cc4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000d4cd0 | FUN_1000d4cd0 */

void FUN_1000d4cd0(void)

{
  return;
}



/* Address: 0x1000d4cd4 | FUN_1000d4cd4 */

int FUN_1000d4cd4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[1] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1000d4cf4 | FUN_1000d4cf4 */

void FUN_1000d4cf4(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *param_1 = param_2 + -1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Address: 0x1000d4d1c | FUN_1000d4d1c */

void FUN_1000d4d1c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100fac8f8 != 0) {
    return;
  }
  puVar1 = &DAT_100eb58f8;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100fac8f8 = param_1;
  return;
}



/* Address: 0x1000d4d6c | thunk_FUN_1000d4a94 */

void thunk_FUN_1000d4a94(void)

{
  FUN_1000d4a94();
  return;
}


