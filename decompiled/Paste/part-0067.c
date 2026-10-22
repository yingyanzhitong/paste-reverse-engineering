/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d0034 | FUN_1000d0034 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1000d0034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1000d00ac | FUN_1000d00ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000d00ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1000d0150 | FUN_1000d0150 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000d0150(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(param_1[5]);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  return param_1;
}



/* Address: 0x1000d01b4 | FUN_1000d01b4 */

int FUN_1000d01b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000d01fc | FUN_1000d01fc */

void FUN_1000d01fc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000d0248 | FUN_1000d0248 */

undefined1  [16] FUN_1000d0248(void)

{
  return ZEXT816(0x100eb4de8);
}



/* Address: 0x1000d0258 | FUN_1000d0258 */

undefined1  [16] FUN_1000d0258(void)

{
  return ZEXT816(0x100eb4e18);
}



/* Address: 0x1000d0268 | thunk_FUN_1000ced68 */

void thunk_FUN_1000ced68(void)

{
  FUN_1000ced68();
  return;
}



/* Address: 0x1000d026c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier */

String (extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier(void)

{
  String SVar1;
  
  SVar1 = get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000d0270 | thunk_FUN_1000cfd38 */

void thunk_FUN_1000cfd38(void)

{
  thunk_FUN_1000cfd38();
  return;
}



/* Address: 0x1000d0274 | thunk_FUN_1000cfd78 */

void thunk_FUN_1000cfd78(void)

{
  thunk_FUN_1000cfd78();
  return;
}



/* Address: 0x1000d0278 | thunk_FUN_1000cef30 */

void thunk_FUN_1000cef30(void)

{
  FUN_1000cef30();
  return;
}



/* Address: 0x1000d027c | thunk_FUN_1000d0280 */

void thunk_FUN_1000d0280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aeb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aeb0,&DAT_100eb5038);
  DAT_100fac520 = pTVar1;
  return;
}



/* Address: 0x1000d0280 | FUN_1000d0280 */

void FUN_1000d0280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aeb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aeb0,&DAT_100eb5038);
  DAT_100fac520 = pTVar1;
  return;
}



/* Address: 0x1000d02c0 | thunk_FUN_1000d02c4 */

void thunk_FUN_1000d02c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aed8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aed8,&DAT_100eb5038);
  DAT_100fac528 = pTVar1;
  return;
}



/* Address: 0x1000d02c4 | FUN_1000d02c4 */

void FUN_1000d02c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2aed8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2aed8,&DAT_100eb5038);
  DAT_100fac528 = pTVar1;
  return;
}



/* Address: 0x1000d0304 | FUN_1000d0304 */

undefined8 FUN_1000d0304(long param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2458,1);
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x1000d0328 | FUN_1000d0328 */

void FUN_1000d0328(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2430,1);
  return;
}



/* Address: 0x1000d0338 | FUN_1000d0338 */

void FUN_1000d0338(void)

{
  LocalizedStringResource LVar1;
  String stringLiteral;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  FUN_1000ce204(LVar1.unknown,&DAT_1010570e8);
  FUN_1000cd990(LVar1.unknown,&DAT_1010570e8);
  stringLiteral.bridgeObject = (void *)0xeb000000006d6574;
  stringLiteral.str = (char *)0x4920657461657243;
  Foundation::LocalizedStringResource::init(stringLiteral);
  return;
}



/* Address: 0x1000d03a0 | FUN_1000d03a0 */

void FUN_1000d03a0(IntentParameter *param_1)

{
  AppIntents::IntentParameter::_get_projectedValue(param_1,param_1);
  return;
}



/* Address: 0x1000d03c0 | FUN_1000d03c0 */

void FUN_1000d03c0(IntentParameter *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(param_2,param_1);
  return;
}



/* Address: 0x1000d03e0 | FUN_1000d03e0 */

void FUN_1000d03e0(void)

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
  
  puVar1 = &DAT_100fac590;
  FUN_1000037f0(&DAT_100fac590,&DAT_100c2af60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar6.unknown = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fac598;
  FUN_1000037f0(&DAT_100fac598,&DAT_100c2af68);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000d1220();
  puVar5 = puVar2;
  AppIntents::ParameterSummaryString::StringInterpolation::_init
            ((StringInterpolation *)(PVar6.unknown + -extraout_x8_00),0x15,2);
  SVar7.bridgeObject = (void *)0x8000000100d8f8a0;
  SVar7.str = (char *)0xd000000000000011;
  SVar9.message.bridgeObject = puVar5;
  SVar9.message.str = puVar1;
  SVar9.template.bridgeObject = (void *)in_x6;
  SVar9.template.str = (char *)in_x5;
  SVar9._16_8_ = in_x4;
  SVar9.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar7,SVar9);
  puVar3 = &DAT_100c2af70;
  _swift_getKeyPath(&DAT_100c2af70);
  puVar4 = &DAT_100fac5a0;
  FUN_1000037f0(&DAT_100fac5a0,&DAT_100c2af98);
  AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation
            (puVar3,puVar1,puVar4);
  _swift_release(puVar3);
  SVar8.bridgeObject = &DAT_e400000000000000;
  SVar8.str = (char *)0x206e6920;
  SVar10.message.bridgeObject = puVar5;
  SVar10.message.str = puVar1;
  SVar10.template.bridgeObject = (void *)in_x6;
  SVar10.template.str = (char *)in_x5;
  SVar10._16_8_ = in_x4;
  SVar10.interpolationCount = in_x7;
  AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral(SVar8,SVar10);
  puVar3 = &DAT_100c2afa0;
  _swift_getKeyPath(&DAT_100c2afa0);
  puVar4 = &DAT_100fac5a8;
  FUN_1000037f0(&DAT_100fac5a8,&DAT_100c2afc8);
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
  stringInterpolation.message.bridgeObject = &DAT_100eb5038;
  stringInterpolation.message.str = (char *)(PVar6.unknown + -extraout_x8_00);
  stringInterpolation.template.bridgeObject = (void *)in_x4;
  stringInterpolation.template.str = puVar5;
  stringInterpolation._16_8_ = puVar2;
  stringInterpolation.interpolationCount = in_x5;
  AppIntents::ParameterSummaryString::_init(stringInterpolation);
  AppIntents::IntentParameterSummary::_init(PVar6);
  return;
}



/* Address: 0x1000d05a8 | FUN_1000d05a8 */

void FUN_1000d05a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _swift_task_switch(FUN_1000d0618,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1000d0618 | FUN_1000d0618 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d0698) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d07a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d0618(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined1 *puVar3;
  IntentParameter *pIVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  __int64 _Var7;
  undefined *puVar8;
  undefined *puVar9;
  IntentParameter *this;
  _ArrayBuffer _Var10;
  long unaff_x22;
  
  pIVar4 = *(IntentParameter **)(unaff_x22 + 0x50);
  this = *(IntentParameter **)(unaff_x22 + 0x40);
  _swift_release();
  AppIntents::IntentParameter::get_wrappedValue(this,pIVar4);
  uVar2 = *(ulong *)(unaff_x22 + 0x10);
  puVar3 = *(undefined1 **)(unaff_x22 + 0x18);
  puVar5 = puVar3;
  _swift_bridgeObjectRelease();
  uVar2 = uVar2 & 0xffffffffffff;
  if (((ulong)puVar3 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar3 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    FUN_1000d1328();
    _swift_allocError(&DAT_100eb50d0,puVar5,0,0);
    *puVar5 = 0;
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_1000d07bc;
  }
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = 0;
  FUN_1003214a8(0);
  UNRECOVERED_JUMPTABLE = FUN_1000d1260;
  _Var10.unknown = (undefined *)(unaff_x22 + 0x10);
  FUN_100357d14(unaff_x22 + 0x30,FUN_1000d1260,_Var10.unknown,uVar6);
  FUN_10031f000();
  if ((ulong)UNRECOVERED_JUMPTABLE >> 0x3e == 0) {
    if (*(long *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) != 0)
    goto LAB_1000d06f4;
LAB_1000d0760:
    _swift_bridgeObjectRelease();
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    _Var10.unknown = (undefined *)0x0;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < UNRECOVERED_JUMPTABLE) {
      _Var1.unknown = UNRECOVERED_JUMPTABLE;
    }
    _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (_Var7 == 0) goto LAB_1000d0760;
LAB_1000d06f4:
    if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1000d07ec);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    else {
      _Var10.unknown = UNRECOVERED_JUMPTABLE;
      Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)UNRECOVERED_JUMPTABLE);
    }
    _swift_bridgeObjectRelease();
    FUN_10037c9a8();
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  *(code **)(unaff_x22 + 0x10) = UNRECOVERED_JUMPTABLE;
  *(undefined **)(unaff_x22 + 0x18) = _Var10.unknown;
  puVar8 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  puVar9 = puVar8;
  FUN_1000d1278();
  (extension_AppIntents)::AppIntents::IntentResult::_result(uVar6,puVar9,puVar8,puVar9);
  _swift_bridgeObjectRelease(_Var10.unknown);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1000d07bc:
                    /* WARNING: Could not recover jumptable at 0x0001000d07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1000d07ec | FUN_1000d07ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000d07ec(undefined8 *param_1,undefined8 param_2,IntentParameter *param_3,
                  IntentParameter *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  IntentParameter *pIVar5;
  undefined *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x21;
  long lVar11;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357e58(&local_88);
  pIVar5 = (IntentParameter *)&local_88;
  FUN_100004640(pIVar5,local_70);
  AppIntents::IntentParameter::get_wrappedValue(param_4,pIVar5);
  uVar1 = local_a8;
  _swift_bridgeObjectRelease(local_98);
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = local_c0;
  (**(code **)(*(long *)(lStack_68 + 8) + 0x20))(local_c0,uStack_b8,local_70);
  _swift_bridgeObjectRelease(uStack_b8);
  if (lVar2 == 0) {
    ppuVar8 = &local_88;
    FUN_100004594();
    FUN_1000d1328();
    _swift_allocError(&DAT_100eb50d0,ppuVar8,0,0);
    *(undefined1 *)ppuVar8 = 1;
    _swift_willThrow();
  }
  else {
    FUN_100004594(&local_88);
    FUN_100357cf0(&local_c0);
    lVar11 = lStack_a0;
    uVar1 = local_a8;
    FUN_100004640(&local_c0,local_a8);
    puVar3 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    puVar4 = puVar3;
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    pIVar5 = (IntentParameter *)0x0;
    FUN_100381740();
    AppIntents::IntentParameter::get_wrappedValue(param_3,pIVar5);
    FUN_10037c6d4(local_88,uStack_80);
    *(undefined **)(puVar4 + 0x20) = local_88;
    puVar6 = puVar4;
    (**(code **)(*(long *)(lVar11 + 0x10) + 0x10))(puVar4,uVar1);
    _swift_release(puVar4);
    plVar7 = &local_c0;
    if (unaff_x21 == 0) {
      FUN_100004594();
      FUN_100357cf0(&local_c0);
      FUN_100004640(&local_c0,local_a8);
      _swift_allocObject(puVar3,0x28,7);
      *(undefined8 *)(puVar3 + 0x18) = 3;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined **)(puVar3 + 0x20) = puVar6;
      lVar11 = *(long *)(lStack_a0 + 0x10);
      pcVar10 = *(code **)(lVar11 + 0x28);
      puVar4 = &DAT_100fa8310;
      local_88 = puVar3;
      FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
      puVar9 = &DAT_100fa8318;
      FUN_100016eac(&DAT_100fa8318,&DAT_100fa8310,&DAT_100c26d10,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      (*pcVar10)(&local_88,lVar2,puVar4,puVar9,local_a8,lVar11);
      _swift_release(puVar3);
      FUN_100004594(&local_c0);
      *param_1 = puVar6;
    }
    else {
      FUN_100004594();
      FUN_1000d1328();
      _swift_allocError(&DAT_100eb50d0,plVar7,0,0);
      *(undefined1 *)plVar7 = 2;
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
    }
  }
  return;
}



/* Address: 0x1000d0ae4 | FUN_1000d0ae4 */

void FUN_1000d0ae4(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  LocalizedStringResource LVar2;
  
  if (DAT_100fac5b0 != -1) {
    _swift_once(&DAT_100fac5b0,FUN_1000d0338);
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  LVar2 = LVar1;
  FUN_1000cd990(LVar1.unknown,&DAT_1010570e8);
                    /* WARNING: Could not recover jumptable at 0x0001000d0b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x10))(param_1,LVar2.unknown,LVar1.unknown);
  return;
}



/* Address: 0x1000d0b54 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::AppIntent::get_openAppWhenRun */

bool (extension_AppIntents)::AppIntents::AppIntent::get_openAppWhenRun(void)

{
  bool bVar1;
  
  bVar1 = get_openAppWhenRun();
  return bVar1;
}



/* Address: 0x1000d0b58 | FUN_1000d0b58 */

void FUN_1000d0b58(void)

{
  (extension_AppIntents)::AppIntents::AppIntent::get_supportedModes();
  return;
}



/* Address: 0x1000d0b6c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::AppIntent::get_authenticationPolicy */

IntentAuthenticationPolicy
(extension_AppIntents)::AppIntents::AppIntent::get_authenticationPolicy(void)

{
  IntentAuthenticationPolicy IVar1;
  
  IVar1 = get_authenticationPolicy();
  return (IntentAuthenticationPolicy)IVar1.value;
}



/* Address: 0x1000d0b70 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::AppIntent::get_isDiscoverable */

bool (extension_AppIntents)::AppIntents::AppIntent::get_isDiscoverable(void)

{
  bool bVar1;
  
  bVar1 = get_isDiscoverable();
  return bVar1;
}



/* Address: 0x1000d0b74 | thunk_FUN_1000d03e0 */

void thunk_FUN_1000d03e0(void)

{
  FUN_1000d03e0();
  return;
}



/* Address: 0x1000d0b78 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::AppIntent::$get_description */

void (extension_AppIntents)::AppIntents::AppIntent::_get_description(void)

{
  _get_description();
  return;
}



/* Address: 0x1000d0b7c | FUN_1000d0b7c */

void FUN_1000d0b7c(undefined8 param_1)

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
  FUN_1000d05a8(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000d0be0 | FUN_1000d0be0 */

void FUN_1000d0be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000d0ea8();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000d0c04 | FUN_1000d0c04 */

String FUN_1000d0c04(void)

{
  String SVar1;
  
  FUN_1000d1220();
  SVar1 = (extension_AppIntents)::AppIntents::AppIntent::get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000d0c2c | thunk_FUN_1000d0c58 */

void thunk_FUN_1000d0c58(void)

{
  FUN_1000d0c58();
  return;
}



/* Address: 0x1000d0c30 | FUN_1000d0c30 */

void FUN_1000d0c30(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  return;
}



/* Address: 0x1000d0c58 | FUN_1000d0c58 */

undefined8 * FUN_1000d0c58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1000d0c94 | FUN_1000d0c94 */

undefined8 * FUN_1000d0c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1000d0cf0 | FUN_1000d0cf0 */

undefined8 * FUN_1000d0cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1000d0d2c | FUN_1000d0d2c */

int FUN_1000d0d2c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000d0d74 | FUN_1000d0d74 */

void FUN_1000d0d74(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000d0db0 | FUN_1000d0db0 */

undefined1  [16] FUN_1000d0db0(void)

{
  return ZEXT816(0x100eb5038);
}



/* Address: 0x1000d0dc0 | FUN_1000d0dc0 */

void FUN_1000d0dc0(void)

{
  FUN_100016eac(&DAT_100fac530,&DAT_100fac538,&DAT_100c2af18,
                PTR_AppIntents__AppIntents__IntentParameterSummary<undefined>_>AppIntents__ParameterSummary_100ea8d90
               );
  return;
}



/* Address: 0x1000d0df4 | FUN_1000d0df4 */

void FUN_1000d0df4(void)

{
  FUN_100016eac(&DAT_100fac540,&DAT_100fac548,&DAT_100c2af20,
                PTR_AppIntents__AppIntents__IntentResultContainer<undefined,undefined,undefined,undefined>_>AppIntents__ReturnsValue_100ea8d78
               );
  return;
}



/* Address: 0x1000d0e28 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::get__domain */

String (extension_Swift)::Swift::Error::get__domain(void)

{
  String SVar1;
  
  SVar1 = get__domain();
  return SVar1;
}



/* Address: 0x1000d0e2c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::get__code */

__int64 (extension_Swift)::Swift::Error::get__code(void)

{
  __int64 _Var1;
  
  _Var1 = get__code();
  return _Var1;
}



/* Address: 0x1000d0e30 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::$get__userInfo */

void (extension_Swift)::Swift::Error::_get__userInfo(void)

{
  _get__userInfo();
  return;
}



/* Address: 0x1000d0e34 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::$_getEmbeddedNSError */

void (extension_Swift)::Swift::Error::__getEmbeddedNSError(void)

{
  __getEmbeddedNSError();
  return;
}



/* Address: 0x1000d0e38 | FUN_1000d0e38 */

void FUN_1000d0e38(void)

{
  char *unaff_x20;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  
  if (*unaff_x20 == '\0') {
    stringLiteral_00.bridgeObject = (void *)0x8000000100d8f8e0;
    stringLiteral_00.str = (char *)0xd000000000000010;
    Foundation::LocalizedStringResource::init(stringLiteral_00);
    return;
  }
  if (*unaff_x20 == '\x01') {
    stringLiteral.bridgeObject = (void *)0xee00646e756f6620;
    stringLiteral.str = (char *)0x746f6e207473694c;
    Foundation::LocalizedStringResource::init(stringLiteral);
    return;
  }
  stringLiteral_01.bridgeObject = (void *)0x8000000100d8f8c0;
  stringLiteral_01.str = (char *)0xd000000000000011;
  Foundation::LocalizedStringResource::init(stringLiteral_01);
  return;
}



/* Address: 0x1000d0ea8 | FUN_1000d0ea8 */

undefined1  [16] FUN_1000d0ea8(void)

{
  undefined4 uVar1;
  InputConnectionBehavior IVar2;
  undefined7 extraout_var;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  IntentParameter *pIVar6;
  IntentInputOptions IVar7;
  IntentDialog IVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  LocalizedStringResource title;
  code *pcVar13;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  undefined1 auVar14 [16];
  code *local_d0;
  undefined *local_c8;
  IntentParameter *local_c0;
  code *local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lVar3;
  
  IVar2 = AppIntents::InputConnectionBehavior::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,IVar2.value);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fac550;
  local_b0 = lVar9;
  FUN_1000037f0(&DAT_100fac550,&DAT_100c2b410);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  puVar4 = &DAT_100fac558;
  FUN_1000037f0(&DAT_100fac558,&DAT_100c2af30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (lVar9 - extraout_x8_01) - extraout_x8_02;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar10 = *(long *)(LVar5.unknown + -8);
  local_c8 = LVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  title.unknown = (undefined *)(lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  pIVar6 = (IntentParameter *)&DAT_100fac560;
  FUN_1000037f0(&DAT_100fac560,&DAT_100c2af40);
  stringLiteral.bridgeObject = &DAT_e700000000000000;
  stringLiteral.str = (char *)0x746e65746e6f43;
  local_c0 = pIVar6;
  Foundation::LocalizedStringResource::init(stringLiteral);
  stringLiteral_00.bridgeObject = &DAT_e400000000000000;
  stringLiteral_00.str = (char *)0x74786554;
  Foundation::LocalizedStringResource::init(stringLiteral_00);
  local_b8 = *(code **)(lVar10 + 0x38);
  (*local_b8)(lVar12,0,1,LVar5.unknown);
  IVar7 = IntentInputOptions::_typeMetadataAccessor();
  local_a0 = 0;
  uStack_98 = 0;
  (**(code **)(*(long *)(IVar7.unknown + -8) + 0x38))(lVar9 - extraout_x8_01,1,1,IVar7.unknown);
  IVar8 = AppIntents::IntentDialog::typeMetadataAccessor();
  pcVar13 = *(code **)(*(long *)(IVar8.unknown + -8) + 0x38);
  (*pcVar13)(lVar9,1,1,IVar8.unknown);
  lVar10 = local_b0;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_AppIntents_InputConnectionBehavior_default_AppIntents_InputConnectionBehavior_Type___>_AppIntents_InputConnectionBehavior_100ea8dc8
  ;
  local_d0 = *(code **)(lVar11 + 0x68);
  (*local_d0)(local_b0,uVar1,lVar3);
  LVar5.unknown = title.unknown;
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(local_c0,title);
  pIVar6 = (IntentParameter *)&DAT_100fac568;
  local_c0 = (IntentParameter *)LVar5.unknown;
  FUN_1000037f0(&DAT_100fac568,&DAT_100c2af48);
  stringLiteral_01.bridgeObject = &DAT_e400000000000000;
  stringLiteral_01.str = (char *)0x7473694c;
  Foundation::LocalizedStringResource::init(stringLiteral_01);
  stringLiteral_02.bridgeObject = (void *)0x8000000100d8f880;
  stringLiteral_02.str = (char *)0xd000000000000015;
  Foundation::LocalizedStringResource::init(stringLiteral_02);
  (*local_b8)(lVar12,0,1,local_c8);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  (*pcVar13)(lVar9,1,1,IVar8.unknown);
  (*pcVar13)(local_a8,1,1,IVar8.unknown);
  (*local_d0)(lVar10,uVar1,lVar3);
  FUN_1000cff04();
  (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(pIVar6,title);
  auVar14._8_8_ = title.unknown;
  auVar14._0_8_ = local_c0;
  return auVar14;
}



/* Address: 0x1000d1220 | FUN_1000d1220 */

void FUN_1000d1220(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac570 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ae18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ae18,&DAT_100eb5038);
  DAT_100fac570 = pTVar1;
  return;
}



/* Address: 0x1000d1260 | FUN_1000d1260 */

void FUN_1000d1260(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000d07ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000d1278 | FUN_1000d1278 */

void FUN_1000d1278(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fac578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8170;
  FUN_100005c24(&DAT_100fa8170,&DAT_100c24ca0);
  puVar2 = puVar1;
  FUN_1000d12e8();
  puVar3 = 
  PTR__AppIntents__protocol_conformance_descriptor_for_<A_where_A:_AppIntents__IntentValue>_A____AppIntents__IntentValue_in_AppIntents_>AppIntents___IntentValue_100ea8e38
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__AppIntents__protocol_conformance_descriptor_for_<A_where_A:_AppIntents__IntentValue>_A____AppIntents__IntentValue_in_AppIntents_>AppIntents___IntentValue_100ea8e38
             ,puVar1,&local_28);
  DAT_100fac578 = puVar3;
  return;
}



/* Address: 0x1000d12e8 | FUN_1000d12e8 */

void FUN_1000d12e8(void)

{
  undefined *puVar1;
  
  if (DAT_100fac580 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_AppIntents__Swift__String_>AppIntents___IntentValue_100ea8e10;
  _swift_getWitnessTable
            (PTR_AppIntents__Swift__String_>AppIntents___IntentValue_100ea8e10,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fac580 = puVar1;
  return;
}



/* Address: 0x1000d1328 | FUN_1000d1328 */

void FUN_1000d1328(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac588 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b068;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b068,&DAT_100eb50d0);
  DAT_100fac588 = pTVar1;
  return;
}



/* Address: 0x1000d1368 | FUN_1000d1368 */

void FUN_1000d1368(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)param_2,param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d1390 | FUN_1000d1390 */

void FUN_1000d1390(undefined8 *param_1,IntentParameter *param_2)

{
  AppIntents::IntentParameter::_get_projectedValue(*(IntentParameter **)(param_2 + 8),param_2);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000d13b8 | FUN_1000d13b8 */

int FUN_1000d13b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1000d1434;
        goto LAB_1000d1418;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1000d1418:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1000d1434:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1000d1448 | FUN_1000d1448 */

void FUN_1000d1448(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar3 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfd < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1000d14c8;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1000d14c8:
      *param_1 = (char)param_2 + '\x02';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfe >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfe);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1000d14f8 | FUN_1000d14f8 */

undefined1  [16] FUN_1000d14f8(void)

{
  return ZEXT816(0x100eb50d0);
}



/* Address: 0x1000d1508 | thunk_FUN_1000d150c */

void thunk_FUN_1000d150c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b040,&DAT_100eb50d0);
  DAT_100fac5b8 = pTVar1;
  return;
}



/* Address: 0x1000d150c | FUN_1000d150c */

void FUN_1000d150c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b040,&DAT_100eb50d0);
  DAT_100fac5b8 = pTVar1;
  return;
}



/* Address: 0x1000d154c | thunk_FUN_1000d0c58 */

void thunk_FUN_1000d0c58(void)

{
  FUN_1000d0c58();
  return;
}


