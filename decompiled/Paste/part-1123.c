/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb71ac | thunk_FUN_100bb71b0 */

undefined8 * thunk_FUN_100bb71b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  FUN_100b6fa2c();
  return param_1;
}



/* Address: 0x100bb71b0 | FUN_100bb71b0 */

undefined8 * FUN_100bb71b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  FUN_100b6fa2c();
  return param_1;
}



/* Address: 0x100bb71e0 | FUN_100bb71e0 */

undefined1  [16] FUN_100bb71e0(void)

{
  return ZEXT816(0x100f3a7b8);
}



/* Address: 0x100bb71f0 | FUN_100bb71f0 */

void FUN_100bb71f0(long param_1)

{
  long lVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb728c);
    (*pcVar2)();
  }
  FUN_100bb7540();
  if (in_NG != in_OV) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb7290);
    (*pcVar2)();
  }
  if (SBORROW8(unaff_x19,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb7294);
    (*pcVar2)();
  }
  lVar1 = -(unaff_x19 - param_1);
  if (!SBORROW8(0,unaff_x19 - param_1)) {
    if (SCARRY8(extraout_x8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb729c);
      (*pcVar2)();
    }
    FUN_100bcea64(extraout_x8 + lVar1,1);
    lVar3 = *unaff_x20;
    FUN_100bb7528();
    if (lVar1 != 0) {
      if (SBORROW8(*(long *)(lVar3 + 0x10),unaff_x19)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb72a0);
        (*pcVar2)();
      }
      FUN_100b69414(lVar3 + 0x20 + unaff_x19 * 0x10,*(long *)(lVar3 + 0x10) - unaff_x19,
                    lVar3 + 0x20 + param_1 * 0x10);
      if (SCARRY8(*(long *)(lVar3 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb72a4);
        (*pcVar2)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar1;
    }
    *unaff_x20 = lVar3;
    FUN_100b69e70();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb7298);
  (*pcVar2)();
}



/* Address: 0x100bb72a4 | FUN_100bb72a4 */

void FUN_100bb72a4(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7330);
    (*pcVar1)();
  }
  lVar3 = *unaff_x20;
  lVar2 = lVar3;
  FUN_100b6cd50();
  if (lVar2 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7334);
    (*pcVar1)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7338);
    (*pcVar1)();
  }
  lVar2 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    thunk_FUN_100b6cd50();
    if (!SCARRY8(lVar3,lVar2)) {
      FUN_100bcea88(lVar3 + lVar2,1);
      FUN_100bb73fc(param_1,param_2,1,param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb7340);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb733c);
  (*pcVar1)();
}



/* Address: 0x100bb7340 | FUN_100bb7340 */

void FUN_100bb7340(long param_1)

{
  long lVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73e4);
    (*pcVar2)();
  }
  FUN_100bb7540();
  if (in_NG != in_OV) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73e8);
    (*pcVar2)();
  }
  if (SBORROW8(unaff_x19,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73ec);
    (*pcVar2)();
  }
  lVar1 = -(unaff_x19 - param_1);
  if (!SBORROW8(0,unaff_x19 - param_1)) {
    if (SCARRY8(extraout_x8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73f4);
      (*pcVar2)();
    }
    FUN_100bceab8(extraout_x8 + lVar1,1);
    lVar3 = *unaff_x20;
    FUN_100bb7528();
    if (lVar1 != 0) {
      if (SBORROW8(*(long *)(lVar3 + 0x10),unaff_x19)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73f8);
        (*pcVar2)();
      }
      FUN_100b69520(lVar3 + 0x20 + unaff_x19 * 0x18,*(long *)(lVar3 + 0x10) - unaff_x19,
                    lVar3 + 0x20 + param_1 * 0x18);
      if (SCARRY8(*(long *)(lVar3 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73fc);
        (*pcVar2)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + lVar1;
    }
    *unaff_x20 = lVar3;
    FUN_100b69e70();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb73f0);
  (*pcVar2)();
}



/* Address: 0x100bb73fc | FUN_100bb73fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100bb73fc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar6 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100bb74f8);
    (*pcVar4)();
  }
  puVar9 = (undefined *)*unaff_x20;
  puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
  puVar1 = (undefined8 *)(puVar8 + param_1 * 8 + 0x20);
  uVar5 = 0;
  FUN_100baf3ec(0);
  puVar7 = puVar1;
  _swift_arrayDestroy(puVar1,lVar6,uVar5);
  lVar3 = param_3 - lVar6;
  if (SBORROW8(param_3,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100bb74fc);
    (*pcVar4)();
  }
  if (lVar3 != 0) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      lVar6 = *(long *)(puVar8 + 0x10);
    }
    else {
      _Var2.unknown = puVar8;
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        _Var2.unknown = puVar9;
      }
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (SBORROW8(lVar6,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bb7510);
      (*pcVar4)();
    }
    thunk_FUN_100b693f4(puVar8 + param_2 * 8 + 0x20,lVar6 - param_2,puVar1 + param_3);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar7 = *(undefined8 **)(puVar8 + 0x10);
    }
    else {
      _Var2.unknown = puVar8;
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        _Var2.unknown = puVar9;
      }
      puVar7 = (undefined8 *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (SCARRY8((long)puVar7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bb7514);
      (*pcVar4)();
    }
    *(undefined **)(puVar8 + 0x10) = (undefined *)((long)puVar7 + lVar3);
  }
  if (param_3 < 1) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_4;
  if (param_3 == 1) {
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100bb7518);
  (*pcVar4)();
}



/* Address: 0x100bb7518 | thunk_FUN_100bb71b0 */

void thunk_FUN_100bb71b0(void)

{
  thunk_FUN_100bb71b0();
  return;
}



/* Address: 0x100bb751c | FUN_100bb751c */

void FUN_100bb751c(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bb7528 | FUN_100bb7528 */

void FUN_100bb7528(void)

{
  _swift_arrayDestroy();
  return;
}



/* Address: 0x100bb7534 | FUN_100bb7534 */

void FUN_100bb7534(undefined8 param_1)

{
  _swift_allocObject(param_1,0x28,7);
  return;
}



/* Address: 0x100bb7540 | FUN_100bb7540 */

void FUN_100bb7540(void)

{
  return;
}



/* Address: 0x100bb7554 | FUN_100bb7554 */

undefined * FUN_100bb7554(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *unaff_x20;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [16];
  undefined *local_48;
  
  local_48 = (undefined *)Swift::Set::init(*(__int64 *)(param_1 + 0x10));
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    FUN_100b94108();
    local_48 = unaff_x20;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10007253c(auStack_58,uVar1,uVar2);
      FUN_100bbb3d4();
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return local_48;
}



/* Address: 0x100bb75f8 | FUN_100bb75f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bb75f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSFastEnumerationIterator NVar4;
  undefined1 *puVar5;
  NSString *pNVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined1 local_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long local_68;
  
  NVar4 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  local_d8 = *(long *)(NVar4.unknown + -8);
  lVar9 = *(long *)(local_d8 + 0x40);
  (extension_Foundation)::__C::NSArray::makeIterator();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100bbb2a8(0);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  while (Swift::IteratorProtocol::_next(), local_68 != 0) {
    FUN_100011080(auStack_80,auStack_a0);
    FUN_10000cbfc(auStack_a0,auStack_c0);
    puVar5 = local_d0;
    _swift_dynamicCast(puVar5,auStack_c0,puVar3 + 8,puVar2,6);
    uVar10 = uStack_c8;
    if ((int)puVar5 == 0) {
      uVar10 = 0xe000000000000000;
    }
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar10);
    _NSClassFromString();
    FUN_100004594(auStack_a0);
    if (pNVar6 != (NSString *)0x0) {
      puVar7 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        FUN_100bbb41c(*(undefined8 *)(puVar8 + 0x10));
        FUN_100b6f0bc();
        puVar11 = puVar7;
      }
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puVar8 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_100b6f0bc(puVar8,uVar1 + 1,1,puVar11);
      }
      _swift_getObjCClassMetadata();
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(NSString **)(puVar8 + uVar1 * 8 + 0x20) = pNVar6;
    }
  }
  (**(code **)(local_d8 + 8))(auStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),NVar4.unknown);
  return puVar8;
}



/* Address: 0x100bb77c4 | FUN_100bb77c4 */

undefined8 FUN_100bb77c4(void)

{
  return 0;
}



/* Address: 0x100bb77cc | thunk_FUN_1000d1c18 */

void thunk_FUN_1000d1c18(void)

{
  FUN_1000d1c18();
  return;
}



/* Address: 0x100bb77d0 | FUN_100bb77d0 */

void FUN_100bb77d0(void)

{
  DAT_101046f90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x100bb77e4 | FUN_100bb77e4 */

void FUN_100bb77e4(void)

{
  FUN_100bb78f0(&DAT_101042e50,&DAT_101046f90,FUN_100bb77d0);
  return;
}



/* Address: 0x100bb7800 | FUN_100bb7800 */

void FUN_100bb7800(void)

{
  DAT_101046f98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x100bb7814 | FUN_100bb7814 */

void FUN_100bb7814(void)

{
  FUN_100bb78f0(&DAT_101042e58,&DAT_101046f98,FUN_100bb7800);
  return;
}



/* Address: 0x100bb7830 | FUN_100bb7830 */

void FUN_100bb7830(void)

{
  DAT_101046fa0 = PTR___swiftEmptySetSingleton_100eae0e8;
  return;
}



/* Address: 0x100bb7844 | FUN_100bb7844 */

void FUN_100bb7844(void)

{
  FUN_100bb78f0(&DAT_101042e60,&DAT_101046fa0,FUN_100bb7830);
  return;
}



/* Address: 0x100bb7860 | FUN_100bb7860 */

void FUN_100bb7860(void)

{
  DAT_101046fa8 = PTR___swiftEmptySetSingleton_100eae0e8;
  return;
}



/* Address: 0x100bb7874 | FUN_100bb7874 */

void FUN_100bb7874(void)

{
  FUN_100bb78f0(&DAT_101042e68,&DAT_101046fa8,FUN_100bb7860);
  return;
}



/* Address: 0x100bb7890 | FUN_100bb7890 */

void FUN_100bb7890(void)

{
  DAT_101046fb0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x100bb78a4 | FUN_100bb78a4 */

void FUN_100bb78a4(void)

{
  FUN_100bb78f0(&DAT_101042e70,&DAT_101046fb0,FUN_100bb7890);
  return;
}



/* Address: 0x100bb78c0 | FUN_100bb78c0 */

void FUN_100bb78c0(void)

{
  DAT_101046fb8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x100bb78d4 | FUN_100bb78d4 */

void FUN_100bb78d4(void)

{
  FUN_100bb78f0(&DAT_101042e78,&DAT_101046fb8,FUN_100bb78c0);
  return;
}



/* Address: 0x100bb78f0 | FUN_100bb78f0 */

void FUN_100bb78f0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  _swift_bridgeObjectRetain(*param_2);
  return;
}



/* Address: 0x100bb7928 | FUN_100bb7928 */

void FUN_100bb7928(void)

{
  FUN_100b6730c(&DAT_101044958);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100bb794c | FUN_100bb794c */

void FUN_100bb794c(void)

{
  FUN_100b6730c(&DAT_101044958);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100bb7970 | FUN_100bb7970 */

undefined1  [16] FUN_100bb7970(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long local_18;
  
  if (param_1 == 0) {
    auVar3._8_8_ = 0xe300000000000000;
    auVar3._0_8_ = 0x776f6c;
    return auVar3;
  }
  if (param_1 == 2) {
    auVar2._8_8_ = &DAT_e400000000000000;
    auVar2._0_8_ = 0x68676968;
    return auVar2;
  }
  if (param_1 == 1) {
    auVar4._8_8_ = &DAT_e600000000000000;
    auVar4._0_8_ = 0x6d756964656d;
    return auVar4;
  }
  local_18 = param_1;
  Swift::__diagnoseUnexpectedEnumCaseValue
            (&DAT_100f3a930,&local_18,&DAT_100f3a930,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb79e8);
  (*pcVar1)();
}



/* Address: 0x100bb79e8 | FUN_100bb79e8 */

undefined1  [16] FUN_100bb79e8(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_2 & 1 | (uint)(2 < param_1);
  uVar2 = 0;
  if (uVar1 == 0) {
    uVar2 = param_1;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Address: 0x100bb7a00 | FUN_100bb7a00 */

void FUN_100bb7a00(void)

{
  undefined8 *unaff_x20;
  
  FUN_100bb7970(*unaff_x20);
  return;
}



/* Address: 0x100bb7a08 | _TtC6Sentry19SentryReplayOptions::sessionSampleRate */

/* Function Stack Size: 0x10 bytes */

float _TtC6Sentry19SentryReplayOptions::sessionSampleRate(ID param_1,SEL param_2)

{
  float in_s0;
  
  FUN_100bb7a28();
  return in_s0;
}



/* Address: 0x100bb7a28 | FUN_100bb7a28 */

void FUN_100bb7a28(void)

{
  undefined4 *unaff_x19;
  
  FUN_100bbb3c4(_TtC6Sentry19SentryReplayOptions::sessionSampleRate);
  FUN_100b78ca0();
  FUN_100b6f9fc(*unaff_x19);
  return;
}



/* Address: 0x100bb7a54 | _TtC6Sentry19SentryReplayOptions::setSessionSampleRate: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setSessionSampleRate_(ID param_1,SEL param_2,float param_3)

{
  FUN_100bb7a74();
  return;
}



/* Address: 0x100bb7a74 | FUN_100bb7a74 */

void FUN_100bb7a74(undefined4 param_1)

{
  undefined4 *unaff_x19;
  
  FUN_100bbb3c4(_TtC6Sentry19SentryReplayOptions::sessionSampleRate);
  FUN_100b80d38();
  *unaff_x19 = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100bb7aa8 | FUN_100bb7aa8 */

void FUN_100bb7aa8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::sessionSampleRate;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7ad4 | _TtC6Sentry19SentryReplayOptions::onErrorSampleRate */

/* Function Stack Size: 0x10 bytes */

float _TtC6Sentry19SentryReplayOptions::onErrorSampleRate(ID param_1,SEL param_2)

{
  float in_s0;
  
  FUN_100bb7af4();
  return in_s0;
}



/* Address: 0x100bb7af4 | FUN_100bb7af4 */

void FUN_100bb7af4(void)

{
  undefined4 *unaff_x19;
  
  FUN_100bbb3c4(_TtC6Sentry19SentryReplayOptions::onErrorSampleRate);
  FUN_100b78ca0();
  FUN_100b6f9fc(*unaff_x19);
  return;
}



/* Address: 0x100bb7b20 | _TtC6Sentry19SentryReplayOptions::setOnErrorSampleRate: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setOnErrorSampleRate_(ID param_1,SEL param_2,float param_3)

{
  FUN_100bb7b40();
  return;
}



/* Address: 0x100bb7b40 | FUN_100bb7b40 */

void FUN_100bb7b40(undefined4 param_1)

{
  undefined4 *unaff_x19;
  
  FUN_100bbb3c4(_TtC6Sentry19SentryReplayOptions::onErrorSampleRate);
  FUN_100b80d38();
  *unaff_x19 = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100bb7b74 | FUN_100bb7b74 */

void FUN_100bb7b74(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::onErrorSampleRate;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7ba0 | _TtC6Sentry19SentryReplayOptions::maskAllText */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::maskAllText(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb7bc4();
  return uVar1 & 1;
}



/* Address: 0x100bb7bc4 | FUN_100bb7bc4 */

void FUN_100bb7bc4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllText;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb7bec | _TtC6Sentry19SentryReplayOptions::setMaskAllText: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setMaskAllText_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100bb7c10(param_3);
  return;
}



/* Address: 0x100bb7c10 | FUN_100bb7c10 */

void FUN_100bb7c10(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllText;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb7c3c | FUN_100bb7c3c */

void FUN_100bb7c3c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllText;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7c68 | _TtC6Sentry19SentryReplayOptions::maskAllImages */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::maskAllImages(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb7c8c();
  return uVar1 & 1;
}



/* Address: 0x100bb7c8c | FUN_100bb7c8c */

void FUN_100bb7c8c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllImages;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb7cb4 | _TtC6Sentry19SentryReplayOptions::setMaskAllImages: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setMaskAllImages_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100bb7cd8(param_3);
  return;
}



/* Address: 0x100bb7cd8 | FUN_100bb7cd8 */

void FUN_100bb7cd8(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllImages;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb7d04 | FUN_100bb7d04 */

void FUN_100bb7d04(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskAllImages;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7d30 | _TtC6Sentry19SentryReplayOptions::quality */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry19SentryReplayOptions::quality(ID param_1,SEL param_2)

{
  FUN_100bb7d50();
  return param_1;
}



/* Address: 0x100bb7d50 | FUN_100bb7d50 */

void FUN_100bb7d50(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::quality;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb7d78 | _TtC6Sentry19SentryReplayOptions::setQuality: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setQuality_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100bb7d9c(param_3);
  return;
}



/* Address: 0x100bb7d9c | FUN_100bb7d9c */

void FUN_100bb7d9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::quality;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb7dcc | FUN_100bb7dcc */

void FUN_100bb7dcc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::quality;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7df8 | _TtC6Sentry19SentryReplayOptions::maskedViewClasses */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::maskedViewClasses(ID param_1,SEL param_2)

{
  FUN_100bb7e88(param_1,param_2,FUN_100bb7e04);
  return param_1;
}



/* Address: 0x100bb7e04 | FUN_100bb7e04 */

void FUN_100bb7e04(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::maskedViewClasses);
  return;
}



/* Address: 0x100bb7e10 | _TtC6Sentry19SentryReplayOptions::setMaskedViewClasses: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setMaskedViewClasses_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb7edc();
  return;
}



/* Address: 0x100bb7e1c | FUN_100bb7e1c */

void FUN_100bb7e1c(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::maskedViewClasses);
  return;
}



/* Address: 0x100bb7e28 | FUN_100bb7e28 */

void FUN_100bb7e28(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb7e1c();
  return;
}


