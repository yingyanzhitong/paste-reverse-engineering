/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bcf09c | FUN_100bcf09c */

String FUN_100bcf09c(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100bcf0a4 | FUN_100bcf0a4 */

void FUN_100bcf0a4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  FUN_100bcf700();
  FUN_100bcf738();
  if (param_2 >> 0x3c < 0xf) {
    FUN_100bcf748();
    FUN_100bcf758();
    FUN_100b9b7fc();
    FUN_100bcf728();
  }
  else {
    uVar1 = 0;
    FUN_100b84dac(0);
    FUN_100bcf6d4("ize replay recording data.");
    FUN_100b84df8();
    FUN_100bcf134();
    FUN_100b9c75c(&DAT_100f3bc28,uVar1);
    FUN_100bcf770();
  }
  FUN_100bcf718();
  return;
}



/* Address: 0x100bcf134 | FUN_100bcf134 */

void FUN_100bcf134(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e1c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e1c0,&DAT_100f3bc28);
  DAT_101047cc8 = pTVar1;
  return;
}



/* Address: 0x100bcf174 | _TtC6Sentry25SentryNSURLRequestBuilder::createEnvelopeRequest:dsn:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bcf21c) */
/* WARNING: Removing unreachable block (ram,0x000100bcf264) */
/* WARNING: Removing unreachable block (ram,0x000100bcf220) */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry25SentryNSURLRequestBuilder::createEnvelopeRequest_dsn_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  URLRequest_conflict UVar1;
  NSURLRequest *pNVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [16];
  
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100bcf0a4(auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3,param_4);
  pNVar2 = Foundation::URLRequest::_bridgeToObjectiveC((URLRequest_conflict)0x0);
  (**(code **)(lVar4 + 8))(auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return (ID)pNVar2;
}



/* Address: 0x100bcf290 | FUN_100bcf290 */

void FUN_100bcf290(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  FUN_100bcf700();
  FUN_100bcf738();
  if (param_2 >> 0x3c < 0xf) {
    FUN_100bcf748();
    FUN_100bcf758();
    FUN_100b9bbbc();
    FUN_100bcf728();
  }
  else {
    uVar1 = 0;
    FUN_100b84dac(0);
    FUN_100bcf6d4("ize replay recording data.");
    FUN_100b84df8();
    FUN_100bcf134();
    FUN_100b9c75c(&DAT_100f3bc28,uVar1);
    FUN_100bcf770();
  }
  FUN_100bcf718();
  return;
}



/* Address: 0x100bcf328 | _TtC6Sentry25SentryNSURLRequestBuilder::createEnvelopeRequest:url:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bcf3e4) */
/* WARNING: Removing unreachable block (ram,0x000100bcf470) */
/* WARNING: Removing unreachable block (ram,0x000100bcf408) */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry25SentryNSURLRequestBuilder::createEnvelopeRequest_url_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  URL UVar1;
  URLRequest_conflict UVar2;
  NSURLRequest *pNVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [16];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_4);
  FUN_100bcf290(lVar5,param_3,puVar4);
  (**(code **)(lVar7 + 8))(puVar4,UVar1.unknown);
  pNVar3 = Foundation::URLRequest::_bridgeToObjectiveC((URLRequest_conflict)0x0);
  (**(code **)(lVar6 + 8))(lVar5,UVar2.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100bcf4a0 | FUN_100bcf4a0 */

void FUN_100bcf4a0(void)

{
  FUN_100bcf4d0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bcf4d0 | FUN_100bcf4d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bcf4d0(void)

{
  return ZEXT816(0x100fa47a8);
}



/* Address: 0x100bcf4f0 | _TtC6Sentry25SentryNSURLRequestBuilder::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryNSURLRequestBuilder::init(ID param_1,SEL param_2)

{
  FUN_100bcf4a0();
  return param_1;
}



/* Address: 0x100bcf510 | FUN_100bcf510 */

void FUN_100bcf510(void)

{
  FUN_100bcf4d0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bcf540 | FUN_100bcf540 */

void FUN_100bcf540(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd00e4);
  return;
}



/* Address: 0x100bcf54c | FUN_100bcf54c */

void FUN_100bcf54c(void)

{
  ulong *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x50))();
  return;
}



/* Address: 0x100bcf578 | FUN_100bcf578 */

void FUN_100bcf578(void)

{
  ulong *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x58))();
  return;
}



/* Address: 0x100bcf5a4 | FUN_100bcf5a4 */

uint FUN_100bcf5a4(uint *param_1,int param_2)

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



/* Address: 0x100bcf5f4 | FUN_100bcf5f4 */

void FUN_100bcf5f4(undefined8 param_1,int param_2,int param_3)

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
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100bcf630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bcf634 + (ulong)(byte)(&DAT_100c9e110)[uVar1] * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100bcf650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bcf654 + (ulong)(byte)(&DAT_100c9e115)[uVar1] * 4))();
  return;
}



/* Address: 0x100bcf680 | FUN_100bcf680 */

undefined1  [16] FUN_100bcf680(void)

{
  return ZEXT816(0x100f3bc28);
}



/* Address: 0x100bcf690 | thunk_FUN_100bcf694 */

void thunk_FUN_100bcf694(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e198;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e198,&DAT_100f3bc28);
  DAT_101047cf8 = pTVar1;
  return;
}



/* Address: 0x100bcf694 | FUN_100bcf694 */

void FUN_100bcf694(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e198;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e198,&DAT_100f3bc28);
  DAT_101047cf8 = pTVar1;
  return;
}



/* Address: 0x100bcf6d4 | FUN_100bcf6d4 */

undefined8 FUN_100bcf6d4(void)

{
  return 4;
}



/* Address: 0x100bcf700 | FUN_100bcf700 */

void FUN_100bcf700(void)

{
  FUN_100b6f5fc(0);
  return;
}



/* Address: 0x100bcf718 | FUN_100bcf718 */

void FUN_100bcf718(void)

{
  return;
}



/* Address: 0x100bcf728 | FUN_100bcf728 */

void FUN_100bcf728(void)

{
  FUN_10003bf18();
  return;
}



/* Address: 0x100bcf738 | FUN_100bcf738 */

void FUN_100bcf738(void)

{
  FUN_100b6a5f8();
  return;
}



/* Address: 0x100bcf748 | FUN_100bcf748 */

void FUN_100bcf748(void)

{
  FUN_100b9c030(0);
  return;
}



/* Address: 0x100bcf758 | FUN_100bcf758 */

void FUN_100bcf758(void)

{
  return;
}



/* Address: 0x100bcf770 | FUN_100bcf770 */

void FUN_100bcf770(void)

{
  _swift_willThrow();
  return;
}



/* Address: 0x100bcf77c | FUN_100bcf77c */

void FUN_100bcf77c(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (1 < *(byte *)(param_1 + 0xe)) {
    uVar1 = *param_1 + 2;
  }
  if (uVar1 != 1) {
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      return;
    }
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  FUN_100004594(param_1 + 4);
  return;
}



/* Address: 0x100bcf7e0 | FUN_100bcf7e0 */

undefined8 * FUN_100bcf7e0(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (uint)*(byte *)(param_2 + 0xe);
  if (1 < *(byte *)(param_2 + 0xe)) {
    uVar1 = *param_2 + 2;
  }
  if (uVar1 == 1) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar4;
    lVar2 = *(long *)(param_2 + 10);
    param_1[5] = lVar2;
    pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar3)(param_1 + 2,param_2 + 4,lVar2);
    param_1[6] = *(undefined8 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else if (uVar1 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 7) = 0;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar4;
  }
  return param_1;
}



/* Address: 0x100bcf898 | FUN_100bcf898 */

int * FUN_100bcf898(int *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 0xe);
    if (1 < *(byte *)(param_1 + 0xe)) {
      uVar1 = *param_1 + 2;
    }
    if (uVar1 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 4);
    }
    else if (uVar1 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    }
    uVar1 = (uint)*(byte *)(param_2 + 0xe);
    if (1 < *(byte *)(param_2 + 0xe)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      lVar2 = *(long *)(param_2 + 10);
      *(long *)(param_1 + 10) = lVar2;
      pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar3)(param_1 + 4,param_2 + 4,lVar2);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else if (uVar1 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 0xe) = 0;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 6);
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 10);
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)((long)param_2 + 0x29);
      *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
      *(undefined8 *)((long)param_1 + 0x29) = uVar10;
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)(param_1 + 4) = uVar6;
      *(undefined8 *)(param_1 + 10) = uVar9;
      *(undefined8 *)(param_1 + 8) = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined8 *)param_1 = uVar4;
    }
  }
  return param_1;
}



/* Address: 0x100bcf9a4 | FUN_100bcf9a4 */

void FUN_100bcf9a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bcf9c0 | FUN_100bcf9c0 */

int * FUN_100bcf9c0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 0xe);
    if (1 < *(byte *)(param_1 + 0xe)) {
      uVar1 = *param_1 + 2;
    }
    if (uVar1 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 4);
    }
    else if (uVar1 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    }
    uVar1 = (uint)*(byte *)(param_2 + 0xe);
    if (1 < *(byte *)(param_2 + 0xe)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 == 1) {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    else if (uVar1 == 0) {
      uVar2 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x29);
      *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
      *(undefined8 *)((long)param_1 + 0x29) = uVar2;
    }
  }
  return param_1;
}



/* Address: 0x100bcfa94 | FUN_100bcfa94 */

int FUN_100bcfa94(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 0xe)) {
    iVar1 = (*(byte *)(param_1 + 0xe) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100bcfad0 | FUN_100bcfad0 */

void FUN_100bcfad0(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0xe) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
  }
  return;
}



/* Address: 0x100bcfb20 | FUN_100bcfb20 */

uint FUN_100bcfb20(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (1 < *(byte *)(param_1 + 0xe)) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x100bcfb3c | FUN_100bcfb3c */

void FUN_100bcfb3c(int *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 2;
    param_2 = 2;
  }
  *(char *)(param_1 + 0xe) = (char)param_2;
  return;
}



/* Address: 0x100bcfb68 | FUN_100bcfb68 */

undefined1  [16] FUN_100bcfb68(void)

{
  return ZEXT816(0x100f3bd18);
}



/* Address: 0x100bcfb78 | FUN_100bcfb78 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bcfb78(undefined8 param_1)

{
  FUN_100bcfbb4(param_1);
  return param_1;
}



/* Address: 0x100bcfbb4 | FUN_100bcfbb4 */

void FUN_100bcfbb4(undefined8 param_1)

{
  FUN_100bcfbbc(param_1,0);
  return;
}



/* Address: 0x100bcfbbc | FUN_100bcfbbc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bcfbbc(ID param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ID *pIVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  ID *pIVar8;
  undefined *self;
  ID self_00;
  undefined1 *puVar9;
  ID IVar10;
  String *pSVar11;
  NSString *pNVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  ID local_110;
  ID local_108;
  ulong local_100;
  ID local_f8;
  undefined1 *local_f0;
  String local_e8 [2];
  undefined1 auStack_c8 [24];
  long local_b0;
  ID local_a8 [4];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  pIVar3 = &local_110;
  if (param_1 != 0) {
    IVar7 = param_1;
    _swift_getObjectType();
    _swift_getObjCClassFromMetadata();
    uVar5 = 0;
    FUN_100b673ec(0,&DAT_101046ce8,&PTR__OBJC_CLASS___NSDictionary_100f8d8e0);
    uVar6 = uVar5;
    _swift_getObjCClassFromMetadata();
    IVar7 = _objc_msgSend(IVar7,"isSubclassOfClass:",uVar6);
    if (((int)IVar7 != 0) && (param_2 < 200)) {
      IVar7 = _objc_msgSend(param_1,"copy");
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar7);
      puVar1 = PTR___type_metadata_for_Any_100eae0c0;
      pIVar8 = local_a8;
      _swift_dynamicCast(pIVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar5,6);
      if ((int)pIVar8 != 0) {
        self = &_OBJC_CLASS___NSMutableDictionary;
        _objc_allocWithZone();
        self_00 = _objc_msgSend((ID)self,"init");
        IVar7 = _objc_msgSend(local_a8[0],"allKeys");
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        lVar13 = *(long *)(IVar7 + 0x10);
        local_110 = IVar7;
        local_108 = param_1;
        local_100 = param_2;
        local_f8 = self_00;
        if (lVar13 != 0) {
          do {
            IVar7 = IVar7 + 0x20;
            FUN_10000cbfc(IVar7,auStack_88);
            puVar9 = auStack_88;
            FUN_100004640(puVar9,local_70);
            Swift::__bridgeAnythingToObjectiveC();
            IVar10 = _objc_msgSend(local_a8[0],"objectForKey:",puVar9);
            _swift_unknownObjectRelease(puVar9);
            if (IVar10 != 0) {
              Swift::__bridgeAnyObjectToAny();
              _swift_unknownObjectRelease(IVar10);
              FUN_100011080(auStack_c8,local_a8);
              FUN_10000cbfc(auStack_88,auStack_c8);
              pSVar11 = local_e8;
              _swift_dynamicCast(pSVar11,auStack_c8,puVar1 + 8,
                                 PTR___type_metadata_for_Swift_String_100eac208,6);
              SVar17 = local_e8[0];
              if ((int)pSVar11 == 0) {
                FUN_10000cbfc(auStack_88,local_e8);
                SVar17 = Swift::String::_init(local_e8,puVar1 + 8);
              }
              SVar18.bridgeObject = &DAT_e800000000000000;
              SVar18.str = (char *)0x7972746e65735f5f;
              bVar4 = Swift::String::hasPrefix(SVar18,SVar17);
              if (bVar4) {
                FUN_100004594(local_a8);
                _swift_bridgeObjectRelease(SVar17.bridgeObject);
              }
              else {
                FUN_100bcff60(auStack_c8,local_a8,param_2 + 1);
                lVar2 = local_b0;
                if (local_b0 == 0) {
                  lVar15 = 0;
                }
                else {
                  puVar9 = auStack_c8;
                  FUN_100004640(puVar9,local_b0);
                  lVar14 = *(long *)(lVar2 + -8);
                  lVar16 = (long)pIVar3 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
                  local_f0 = (undefined1 *)pIVar3;
                  (**(code **)(lVar14 + 0x10))(lVar16,puVar9,lVar2);
                  lVar15 = lVar16;
                  Swift::__bridgeAnythingToObjectiveC(lVar16,lVar2);
                  (**(code **)(lVar14 + 8))(lVar16,lVar2);
                  pIVar3 = (ID *)local_f0;
                  self_00 = local_f8;
                  param_2 = local_100;
                  FUN_100004594(auStack_c8);
                }
                pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(SVar17.bridgeObject);
                _objc_msgSend(self_00,"setValue:forKey:",lVar15,pNVar12);
                _swift_unknownObjectRelease(lVar15);
                FUN_100004594(local_a8);
              }
            }
            FUN_100004594(auStack_88);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_bridgeObjectRelease(local_110);
          return self_00;
        }
        _swift_bridgeObjectRelease(IVar7);
        return self_00;
      }
    }
  }
  return 0;
}



/* Address: 0x100bcff60 | FUN_100bcff60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bcff60(String *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar8;
  undefined8 uVar9;
  String SVar10;
  char *local_80;
  void *pvStack_78;
  undefined1 auStack_60 [32];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (int)&local_80;
  iVar4 = (int)&local_80;
  iVar5 = (int)&local_80;
  iVar6 = (int)&local_80;
  iVar7 = (int)&local_80;
  FUN_10000cbfc(param_2,auStack_60);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  _swift_dynamicCast(&local_80,auStack_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,0);
  if (iVar3 == 0) {
    pvVar8 = (void *)0x0;
    FUN_100b673ec(0,&DAT_100fa87f8,&PTR__OBJC_CLASS___NSNumber_100f8d750);
    _swift_dynamicCast(&local_80,auStack_60,puVar2 + 8,pvVar8,0);
    if (iVar4 == 0) {
      pvVar8 = (void *)0x0;
      FUN_100b673ec(0,&DAT_101046ce8,&PTR__OBJC_CLASS___NSDictionary_100f8d8e0);
      _swift_dynamicCast(&local_80,auStack_60,puVar2 + 8,pvVar8,0);
      if (iVar5 == 0) {
        pvVar8 = (void *)0x0;
        FUN_100b673ec(0,&DAT_101047060,&PTR__OBJC_CLASS___NSArray_100f8d908);
        _swift_dynamicCast(&local_80,auStack_60,puVar2 + 8,pvVar8,0);
        if (iVar6 == 0) {
          uVar9 = 0;
          FUN_100b673ec(0,&DAT_101047d00,&PTR__OBJC_CLASS___NSDate_100f8d950);
          _swift_dynamicCast(&local_80,auStack_60,puVar2 + 8,uVar9,0);
          if (iVar7 == 0) {
            FUN_10000cbfc(param_2,&local_80);
            SVar10 = Swift::String::_init(&local_80,puVar2 + 8);
            param_1[1].bridgeObject = puVar1;
            *param_1 = SVar10;
          }
          else {
            FUN_100b40420(local_80);
            SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            param_1[1].bridgeObject = puVar1;
            *param_1 = SVar10;
          }
        }
        else {
          FUN_100bd01a4(local_80,param_3);
          param_1[1].bridgeObject = pvVar8;
          param_1->str = local_80;
        }
      }
      else {
        FUN_100bcfbbc(local_80,param_3);
        if (local_80 == (char *)0x0) {
          pvVar8 = (void *)0x0;
          param_1->bridgeObject = (void *)0x0;
          param_1[1].str = (char *)0x0;
        }
        param_1->str = local_80;
        param_1[1].bridgeObject = pvVar8;
      }
    }
    else {
      param_1[1].bridgeObject = pvVar8;
      param_1->str = local_80;
    }
  }
  else {
    param_1[1].bridgeObject = puVar1;
    param_1->str = local_80;
    param_1->bridgeObject = pvStack_78;
  }
  FUN_100004594(auStack_60);
  return;
}



/* Address: 0x100bd01a4 | FUN_100bd01a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bd01a4(ID param_1,ulong param_2)

{
  NSFastEnumerationIterator NVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  NSFastEnumerationIterator NVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 auStack_70 [24];
  long local_58;
  
  NVar1 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  lVar9 = *(long *)(NVar1.unknown + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  IVar4 = param_1;
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  uVar2 = 0;
  FUN_100b673ec(0,&DAT_101047060,&PTR__OBJC_CLASS___NSArray_100f8d908);
  uVar3 = uVar2;
  _swift_getObjCClassFromMetadata();
  IVar4 = _objc_msgSend(IVar4,"isSubclassOfClass:",uVar3);
  if (((int)IVar4 != 0) && (param_2 < 200)) {
    IVar4 = _objc_msgSend(param_1,"copy");
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    puVar5 = local_90;
    _swift_dynamicCast(puVar5,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,6);
    if ((int)puVar5 == 0) {
      puVar6 = &_OBJC_CLASS___NSArray;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)puVar6,"init");
    }
    else {
      puVar6 = &_OBJC_CLASS___NSMutableArray;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)puVar6,"init");
      NVar7 = (extension_Foundation)::__C::NSArray::makeIterator();
      while( true ) {
        Foundation::NSFastEnumerationIterator::_next(NVar7);
        if (local_58 == 0) break;
        FUN_100011080(auStack_70,local_90);
        FUN_100bcff60(auStack_d0,local_90,param_2 + 1);
        if (local_b8 == 0) {
          FUN_100004594(local_90);
          NVar7.unknown = auStack_d0;
          FUN_100013954();
        }
        else {
          FUN_100011080(auStack_d0,auStack_b0);
          puVar5 = auStack_b0;
          FUN_100004640(puVar5,local_98);
          Swift::__bridgeAnythingToObjectiveC();
          _objc_msgSend(IVar4,"addObject:",puVar5);
          _swift_unknownObjectRelease(puVar5);
          FUN_100004594(local_90);
          NVar7.unknown = auStack_b0;
          FUN_100004594();
        }
      }
      (**(code **)(lVar9 + 8))(auStack_d0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
    }
    return IVar4;
  }
  puVar6 = &_OBJC_CLASS___NSArray;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)puVar6,"init");
  return IVar4;
}



/* Address: 0x100bd03e0 | FUN_100bd03e0 */

/* WARNING: Removing unreachable block (ram,0x000100bd0408) */

code * FUN_100bd03e0(code *param_1)

{
  code *pcVar1;
  
  (*param_1)();
  if (param_1 == (code *)0x0) {
    pcVar1 = (code *)0x0;
  }
  else {
    pcVar1 = param_1;
    FUN_100b86d54();
    FUN_100bd2efc();
    FUN_100bd3d0c(param_1);
  }
  return pcVar1;
}



/* Address: 0x100bd04f8 | FUN_100bd04f8 */

/* WARNING: Removing unreachable block (ram,0x000100bd0650) */

void FUN_100bd04f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar14;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar15;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long lVar16;
  long lVar17;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong uVar18;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar19;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar20;
  long lVar21;
  __RawDictionaryStorage *original;
  long lVar22;
  long lVar23;
  long local_248;
  ulong local_210;
  long local_180 [5];
  long local_158;
  long local_148;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined *local_98 [3];
  undefined *local_80;
  undefined *local_78;
  
  puVar9 = &DAT_101047d08;
  local_118 = param_1;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar9 + -8));
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  FUN_100bd3988();
  local_158 = extraout_x9 - extraout_x8;
  lVar10 = 0;
  FUN_100bd31c0();
  local_128 = lVar10;
  FUN_100bc8078();
  lVar21 = extraout_x9_00 + extraout_x8_00 * -3;
  lVar23 = lVar21 - extraout_x8_00;
  lVar22 = lVar23 - extraout_x8_00;
  lVar20 = lVar22 + extraout_x8_00 * -3;
  FUN_100bd3bdc();
  (*extraout_x8_01)();
  if (lVar10 != 0) {
    lVar16 = lVar10 + 0x40;
    lVar17 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    local_78 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    uVar8 = lVar17 == 0x40;
    uVar14 = lVar17 + 0x3fU >> 6;
    local_180[0] = lVar21;
    local_148 = lVar23;
    local_130 = lVar22;
    FUN_100bd3cd8();
    FUN_100bd3db4();
    FUN_100bd3da8();
    FUN_100bd3d90();
    FUN_100bd3c98();
    lVar21 = lVar10;
    uVar18 = extraout_x11;
    uVar19 = extraout_x12;
    uVar15 = extraout_x12;
    if (extraout_x11 != 0) goto LAB_100bd0888;
LAB_100bd07e4:
    uVar19 = uVar15 + 1;
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd26d8);
      (*pcVar4)();
    }
    cVar5 = SBORROW8(uVar19,uVar14);
    cVar7 = (long)(uVar19 - uVar14) < 0;
    uVar8 = uVar19 == uVar14;
    if ((long)uVar19 < (long)uVar14) {
      uVar18 = *(ulong *)(lVar16 + uVar19 * 8);
      lVar21 = lVar10;
      if (uVar18 != 0) goto LAB_100bd0888;
      FUN_100bd3b1c(uVar15 + 2);
      if (cVar7 != cVar5) {
        FUN_100bd3ba8();
        uVar18 = extraout_x11_00;
        uVar19 = extraout_x8_02;
        if (extraout_x11_00 != 0) goto LAB_100bd0888;
        FUN_100bd3b1c(extraout_x12_00 + 2);
        if (cVar7 != cVar5) {
          FUN_100bd3ba8();
          uVar18 = extraout_x11_01;
          uVar19 = extraout_x8_03;
          if (extraout_x11_01 != 0) goto LAB_100bd0888;
          FUN_100bd3b1c(extraout_x12_01 + 3);
          if (cVar7 != cVar5) {
            FUN_100bd3ba8();
            uVar18 = extraout_x11_02;
            uVar19 = extraout_x8_04;
            if (extraout_x11_02 != 0) goto LAB_100bd0888;
            FUN_100bd3b1c(extraout_x12_02 + 4);
            if (cVar7 != cVar5) {
              FUN_100bd3ba8();
              uVar18 = extraout_x11_03;
              uVar19 = extraout_x8_05;
              if (extraout_x11_03 != 0) {
LAB_100bd0888:
                uVar15 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar18 - 1 & uVar18;
                uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar19 << 6;
                puVar1 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar15 * 0x10);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                original = *(__RawDictionaryStorage **)(*(long *)(lVar21 + 0x38) + uVar15 * 8);
                this = (_DictionaryStorage *)&DAT_101044bd0;
                FUN_100b6730c();
                p_Var11 = original;
                Swift::_DictionaryStorage::_copy(this,original);
                FUN_100bd39c0(*(undefined8 *)(original + 0x40));
                local_210 = extraout_x10 & extraout_x8_07;
                FUN_100bd3d7c();
                _swift_bridgeObjectRetain(uVar3);
                FUN_100b721f8();
                local_248 = 0;
                do {
                  if (local_210 == 0) {
                    cVar5 = SCARRY8(local_248,1);
                    lVar21 = local_248 + 1;
                    cVar7 = lVar21 < 0;
                    uVar8 = lVar21 == 0;
                    if ((bool)cVar5) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd26d4);
                      (*pcVar4)();
                    }
                    FUN_100bd3b1c(lVar21);
                    if (cVar7 == cVar5) goto LAB_100bd2618;
                    FUN_100bd3bd0();
                    if (extraout_x9_01 == 0) {
                      FUN_100bd3b9c();
                      if (cVar7 == cVar5) goto LAB_100bd2618;
                      FUN_100bd3b90();
                      if (extraout_x9_02 == 0) {
                        FUN_100bd3b9c();
                        if (cVar7 == cVar5) goto LAB_100bd2618;
                        FUN_100bd3b90();
                        if (extraout_x9_03 == 0) {
                          FUN_100bd3b9c();
                          if (cVar7 == cVar5) goto LAB_100bd2618;
                          FUN_100bd3b90();
                          if (extraout_x9_04 == 0) {
                            FUN_100bd3b1c(extraout_x8_09 + 4);
                            if (cVar7 == cVar5) goto LAB_100bd2618;
                            FUN_100bd3bd0();
                            if (extraout_x9_06 == 0) {
                              local_248 = local_248 + 0xe;
                              do {
                                FUN_100bd3e38(local_248);
                                if (cVar7 == cVar5) goto LAB_100bd2618;
                                FUN_100bd3bd0();
                                local_248 = extraout_x8_11 + 1;
                              } while (extraout_x9_07 == 0);
                            }
                          }
                        }
                      }
                    }
                    FUN_100bd3ad8();
                    local_210 = extraout_x11_05 & extraout_x9_05;
                    uVar15 = extraout_x10_01 | extraout_x8_10 << 6;
                    lVar21 = extraout_x12_05;
                    local_248 = extraout_x8_10;
                  }
                  else {
                    FUN_100bd3e44();
                    uVar15 = extraout_x8_08 | local_248 << 6;
                    lVar21 = extraout_x12_04;
                    local_210 = extraout_x10_00;
                  }
                  local_118 = *(long *)(lVar21 + 0x48);
                  FUN_100bd3d88(*(long *)(original + 0x38) + local_118 * uVar15);
                  FUN_100bd31f8(lVar20,0);
                  FUN_1000c9ffc(0,0,1,lVar22);
                  puVar9 = &DAT_101044760;
                  FUN_100b6730c();
                  puVar12 = &DAT_100f3bd60;
                  local_120 = puVar9;
                  local_80 = puVar9;
                  FUN_100bd39dc();
                  local_98[0] = puVar12;
                  FUN_100bd32a4(0,extraout_x9);
                  uVar13 = extraout_x9;
                  FUN_100bd3a5c();
                  if (!(bool)uVar8) {
                    FUN_100bd3aa8();
                    /* WARNING: Could not recover jumptable at 0x000100bd0b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((long)*(int *)(&DAT_100bd26dc + (uVar13 & 0xffffffff) * 4) +
                              0x100bd0b58))();
                    return;
                  }
                  FUN_100bd3d9c();
                  FUN_100b721f8();
                  FUN_100b74780(0,&DAT_101047d08);
                  FUN_100bd3268(lVar20);
                  FUN_100bd3d38(uVar15 >> 3);
                  FUN_100bd3b08();
                  FUN_100bd3e58(*(long *)(p_Var11 + 0x30) + extraout_x12_06 * 0x10);
                  FUN_100011080(local_98);
                  lVar21 = *(long *)(p_Var11 + 0x10) + 1;
                  uVar8 = lVar21 == 0;
                  if (SCARRY8(*(long *)(p_Var11 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd26cc);
                    (*pcVar4)();
                  }
                  *(long *)(p_Var11 + 0x10) = lVar21;
                } while( true );
              }
              FUN_100bd3b1c(extraout_x12_03 + 5);
              if (cVar7 != cVar5) {
                FUN_100bd3ba8();
                uVar19 = extraout_x8_06;
                uVar18 = extraout_x11_04;
                while (uVar18 == 0) {
                  bVar6 = SCARRY8(uVar19,1);
                  uVar19 = uVar19 + 1;
                  if (bVar6) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd26dc);
                    (*pcVar4)();
                  }
                  uVar8 = uVar19 == uVar14;
                  if ((long)uVar14 <= (long)uVar19) goto LAB_100bd26b4;
                  uVar18 = *(ulong *)(lVar16 + uVar19 * 8);
                }
                goto LAB_100bd0888;
              }
            }
          }
        }
      }
    }
LAB_100bd26b4:
    _swift_release();
  }
  return;
LAB_100bd2618:
  FUN_100bd3d44(local_180);
  FUN_100bd5cfc(p_Var11,uVar2,uVar3);
  FUN_100b678c0();
  lVar21 = lVar10;
  uVar15 = uVar19;
  if (uVar18 == 0) goto LAB_100bd07e4;
  goto LAB_100bd0888;
}



/* Address: 0x100bd27bc | FUN_100bd27bc */

/* WARNING: Removing unreachable block (ram,0x000100bd29a0) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ae8) */
/* WARNING: Removing unreachable block (ram,0x000100bd292c) */
/* WARNING: Removing unreachable block (ram,0x000100bd2a74) */
/* WARNING: Removing unreachable block (ram,0x000100bd28cc) */
/* WARNING: Removing unreachable block (ram,0x000100bd2a20) */
/* WARNING: Removing unreachable block (ram,0x000100bd28e8) */
/* WARNING: Removing unreachable block (ram,0x000100bd2a34) */
/* WARNING: Removing unreachable block (ram,0x000100bd2964) */
/* WARNING: Removing unreachable block (ram,0x000100bd2ad4) */
/* WARNING: Removing unreachable block (ram,0x000100bd29dc) */
/* WARNING: Removing unreachable block (ram,0x000100bd2afc) */
/* WARNING: Removing unreachable block (ram,0x000100bd29f0) */
/* WARNING: Removing unreachable block (ram,0x000100bd28b0) */

void FUN_100bd27bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  __int64 _Var3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x21;
  __int64 *p_Var4;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar1 + -8));
  Foundation::Date::typeMetadataAccessor();
  lVar2 = 0;
  FUN_100bd31c0();
  FUN_100bc8078(*(undefined8 *)(lVar2 + -8));
  p_Var4 = (__int64 *)(extraout_x9 - extraout_x8);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100bd3d14(auStack_88);
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    _Var3 = Swift::SingleValueDecodingContainer::_decode();
    *p_Var4 = _Var3;
    _swift_storeEnumTagMultiPayload(p_Var4,lVar2,1);
    FUN_100004594(auStack_88);
    FUN_100bd3944(p_Var4,param_1);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x100bd2b54 | FUN_100bd2b54 */

void FUN_100bd2b54(void)

{
  FUN_100bd27bc();
  return;
}



/* Address: 0x100bd2b68 | FUN_100bd2b68 */

void FUN_100bd2b68(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = &DAT_101047d08;
  FUN_100b6730c();
  puVar4 = auStack_40 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100bd32a4(param_2,puVar4);
  uVar2 = 0;
  FUN_100bd31c0(0);
  puVar3 = puVar4;
  FUN_1000c9ff0(puVar4,1,uVar2);
  if ((int)puVar3 == 1) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  _swift_getEnumCaseMultiPayload(puVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100bd2c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bd2c20 + (ulong)(byte)(&DAT_100c9e258)[(ulong)puVar4 & 0xffffffff] * 4))();
  return;
}



/* Address: 0x100bd2d48 | FUN_100bd2d48 */

undefined * FUN_100bd2d48(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined *local_88 [3];
  undefined *local_70;
  undefined *local_68;
  
  puVar6 = &DAT_101047d08;
  FUN_100b6730c();
  puVar5 = auStack_90 + -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100bd31c0();
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar5 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar8 != 0) {
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000717c4(0,lVar8,0);
      param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar6 = local_68;
      do {
        FUN_100bd31f8(param_1,lVar7);
        FUN_100bd31f8(lVar7,puVar5);
        FUN_1000c9ffc(puVar5,0,1,lVar2);
        puVar3 = &DAT_101044760;
        FUN_100b6730c();
        puVar4 = &DAT_100f3bd60;
        local_70 = puVar3;
        _swift_allocObject(&DAT_100f3bd60,0x30,7);
        local_88[0] = puVar4;
        FUN_100bd2b68(puVar4 + 0x10,puVar5);
        FUN_100b74780(puVar5,&DAT_101047d08);
        FUN_100bd3268(lVar7);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        local_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          FUN_1000717c4(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        puVar6 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        FUN_100011080(local_88,local_68 + uVar1 * 0x20 + 0x20);
        param_1 = param_1 + lVar9;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return puVar6;
}



/* Address: 0x100bd2efc | FUN_100bd2efc */

__RawDictionaryStorage * FUN_100bd2efc(__RawDictionaryStorage *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  __RawDictionaryStorage *p_Var12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *local_80 [3];
  undefined *local_68;
  
  puVar5 = &DAT_101047d08;
  FUN_100b6730c();
  puVar14 = &stack0xffffffffffffff50 +
            -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100bd31c0();
  lVar9 = *(long *)(lVar6 + -8);
  lVar16 = (long)puVar14 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  this = (_DictionaryStorage *)&DAT_101044bd0;
  FUN_100b6730c();
  p_Var7 = param_1;
  Swift::_DictionaryStorage::_copy(this,param_1);
  lVar17 = 0;
  p_Var12 = param_1 + 0x40;
  uVar11 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)p_Var12;
  uVar11 = uVar11 + 0x3f >> 6;
  lVar18 = lVar17;
  if (uVar13 == 0) goto LAB_100bd2ff0;
  do {
    uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar13 - 1 & uVar13;
    uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar17 << 6;
    while( true ) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar15 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      FUN_100bd31f8(*(long *)(param_1 + 0x38) + *(long *)(lVar9 + 0x48) * uVar15,lVar16);
      FUN_100bd31f8(lVar16,puVar14);
      FUN_1000c9ffc(puVar14,0,1,lVar6);
      puVar5 = &DAT_101044760;
      FUN_100b6730c();
      puVar8 = &DAT_100f3bd60;
      local_68 = puVar5;
      _swift_allocObject(&DAT_100f3bd60,0x30,7);
      local_80[0] = puVar8;
      _swift_bridgeObjectRetain(uVar3);
      FUN_100bd2b68(puVar8 + 0x10,puVar14);
      FUN_100b74780(puVar14,&DAT_101047d08);
      FUN_100bd3268(lVar16);
      uVar10 = uVar15 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var7 + uVar10 + 0x40) =
           *(ulong *)(p_Var7 + uVar10 + 0x40) | 1L << (uVar15 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar15 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(local_80,*(long *)(p_Var7 + 0x38) + uVar15 * 0x20);
      if (SCARRY8(*(long *)(p_Var7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd31bc);
        (*pcVar4)();
      }
      *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
      lVar18 = lVar17;
      if (uVar13 != 0) break;
LAB_100bd2ff0:
      lVar17 = lVar18 + 1;
      if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bd31c0);
        (*pcVar4)();
      }
      if ((long)uVar11 <= lVar17) {
        return p_Var7;
      }
      uVar13 = *(ulong *)(p_Var12 + lVar17 * 8);
      if (uVar13 == 0) {
        lVar17 = lVar18 + 2;
        if ((long)uVar11 <= lVar17) {
          return p_Var7;
        }
        uVar13 = *(ulong *)(p_Var12 + lVar17 * 8);
        if (uVar13 == 0) {
          lVar17 = lVar18 + 3;
          if ((long)uVar11 <= lVar17) {
            return p_Var7;
          }
          uVar13 = *(ulong *)(p_Var12 + lVar17 * 8);
          if (uVar13 == 0) {
            lVar17 = lVar18 + 4;
            if ((long)uVar11 <= lVar17) {
              return p_Var7;
            }
            uVar13 = *(ulong *)(p_Var12 + lVar17 * 8);
            if (uVar13 == 0) {
              do {
                lVar17 = lVar18;
                if ((long)uVar11 <= lVar17 + 5) {
                  return p_Var7;
                }
                uVar13 = *(ulong *)(param_1 + lVar17 * 8 + 0x68);
                lVar18 = lVar17 + 1;
              } while (uVar13 == 0);
              lVar17 = lVar17 + 5;
            }
          }
        }
      }
      uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar17 << 6;
    }
  } while( true );
}



/* Address: 0x100bd31c0 | FUN_100bd31c0 */

void FUN_100bd31c0(undefined8 param_1)

{
  if (DAT_101047d88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cd0160);
  return;
}



/* Address: 0x100bd31f8 | FUN_100bd31f8 */

undefined8 FUN_100bd31f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bd31c0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100bd323c | FUN_100bd323c */

void FUN_100bd323c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_100004594(unaff_x20 + 0x10);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100bd3268 | FUN_100bd3268 */

undefined8 FUN_100bd3268(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bd31c0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100bd32a4 | FUN_100bd32a4 */

undefined8 FUN_100bd32a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047d08;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100bd32ec | FUN_100bd32ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bd32ec(void)

{
  undefined *puVar1;
  
  if (DAT_101047d10 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSNull;
    _swift_getObjCClassMetadata();
    DAT_101047d10 = puVar1;
  }
  return;
}



/* Address: 0x100bd32f8 | FUN_100bd32f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bd32f8(void)

{
  undefined *puVar1;
  
  puVar1 = &_OBJC_CLASS___NSNull;
  _swift_getObjCClassMetadata();
  DAT_101047d10 = puVar1;
  return;
}



/* Address: 0x100bd3328 | FUN_100bd3328 */

long * FUN_100bd3328(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    switch((ulong)plVar3 & 0xffffffff) {
    case 0:
      lVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar6;
      _swift_bridgeObjectRetain();
      uVar4 = 0;
      break;
    default:
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
      return plVar3;
    case 4:
      DVar2 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
      uVar4 = 4;
      break;
    case 5:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar4 = 5;
      break;
    case 6:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar4 = 6;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100bd3454 | FUN_100bd3454 */

void FUN_100bd3454(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  Date DVar3;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch((ulong)puVar1 & 0xffffffff) {
  case 0:
    uVar2 = param_1[1];
    break;
  default:
    return;
  case 4:
    DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100bd34c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar3.unknown + -8) + 8))(param_1,DVar3.unknown);
    return;
  case 5:
  case 6:
    uVar2 = *param_1;
  }
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x100bd34d4 | FUN_100bd34d4 */

undefined8 * FUN_100bd34d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    _swift_bridgeObjectRetain();
    uVar3 = 0;
    break;
  default:
    puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar2;
  case 4:
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
    uVar3 = 4;
    break;
  case 5:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    uVar3 = 5;
    break;
  case 6:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    uVar3 = 6;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x100bd35d8 | FUN_100bd35d8 */

undefined8 * FUN_100bd35d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_100bd3268(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    switch((ulong)puVar2 & 0xffffffff) {
    case 0:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      uVar3 = 0;
      break;
    default:
      puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar2;
    case 4:
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
      uVar3 = 4;
      break;
    case 5:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar3 = 5;
      break;
    case 6:
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar3 = 6;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x100bd36f4 | FUN_100bd36f4 */

void * FUN_100bd36f4(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 4) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,4);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x100bd3788 | FUN_100bd3788 */

void * FUN_100bd3788(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  
  if (param_1 != param_2) {
    FUN_100bd3268(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 4) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,4);
  }
  return param_1;
}



/* Address: 0x100bd382c | FUN_100bd382c */

undefined1  [16] FUN_100bd382c(undefined8 param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puStack_50 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_58 = &DAT_100c9e298;
  puStack_40 = &DAT_100c9e2b0;
  local_48 = puStack_50;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_28 = puStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,7,&local_58);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x100bd38c4 | FUN_100bd38c4 */

void FUN_100bd38c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_101047dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047dc0;
  FUN_100b6734c(&DAT_101047dc0);
  puVar2 = &DAT_101045590;
  FUN_100003a00(&DAT_101045590,FUN_100bd31c0,&TargetProtocolConformanceDescriptor_100c9e2c8);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101047dc8 = puVar3;
  return;
}



/* Address: 0x100bd3944 | FUN_100bd3944 */

undefined8 FUN_100bd3944(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bd31c0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}


