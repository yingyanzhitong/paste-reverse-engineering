/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be4d14 | FUN_100be4d14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100be4d14(void)

{
  NSString *pNVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentryClient::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100be51e0(pNVar1,"captureMessage:");
  FUN_100ba7c58();
  FUN_100b56e88(uVar2);
  return;
}



/* Address: 0x100be4d58 | _TtC6Sentry12SentryClient::captureMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry12SentryClient::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100be4d14(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100be4dc0 | FUN_100be4dc0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100be4dc0(void)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100bc2864(pNVar1,"captureMessage:withScope:");
  FUN_100b6f934();
  FUN_100b56e60(pNVar1);
  return;
}



/* Address: 0x100be4e10 | _TtC6Sentry12SentryClient::captureMessage:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry12SentryClient::captureMessage_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100be4dc0(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100be4e90 | FUN_100be4e90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be4e90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  NSDictionary *pNVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  NSArray *pNVar6;
  long unaff_x20;
  ID self;
  String SVar7;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper);
  lVar1 = param_1;
  FUN_100bb51d4();
  lVar2 = lVar1;
  FUN_100b6c58c();
  _swift_bridgeObjectRelease(lVar1);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar2);
  pNVar4 = (NSString *)
           _objc_msgSend(*(ID *)(param_1 + _TtC6Sentry14SentryFeedback::eventId),"sentryIdString");
  pNVar5 = pNVar4;
  if (pNVar4 == (NSString *)0x0) {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar4 = SVar7.bridgeObject;
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pNVar4);
  }
  FUN_100bb4ac0();
  FUN_100bad6e8(0);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pNVar4);
  _objc_msgSend(self,"captureSerializedFeedback:withEventId:attachments:scope:",pNVar3,pNVar5,pNVar6
                ,param_2);
  return 0;
}



/* Address: 0x100be4fb8 | _TtC6Sentry12SentryClient::captureFeedback:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry12SentryClient::captureFeedback_withScope_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be4e90(param_3,param_4);
  return;
}



/* Address: 0x100be5024 | FUN_100be5024 */

void FUN_100be5024(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"_swiftCaptureLog:withScope:"
                ,param_1,param_2);
  return;
}



/* Address: 0x100be5044 | _TtC6Sentry12SentryClient::captureLog:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry12SentryClient::captureLog_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be5024(param_3,param_4);
  return;
}



/* Address: 0x100be50b0 | FUN_100be50b0 */

void FUN_100be50b0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"flush:");
  return;
}



/* Address: 0x100be50c8 | _TtC6Sentry12SentryClient::flush: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentryClient::flush_(ID param_1,SEL param_2,double param_3)

{
  FUN_100be50b0(param_3,param_1);
  return;
}



/* Address: 0x100be5100 | FUN_100be5100 */

void FUN_100be5100(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryClient::helper),"close");
  return;
}



/* Address: 0x100be5118 | _TtC6Sentry12SentryClient::close */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int _TtC6Sentry12SentryClient::close(int param_1)

{
  FUN_100be5100(param_1);
  return 0;
}



/* Address: 0x100be5140 | FUN_100be5140 */

void FUN_100be5140(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryClient",0x13,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be516c);
  (*pcVar1)();
}



/* Address: 0x100be516c | _TtC6Sentry12SentryClient::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentryClient::init(ID param_1,SEL param_2)

{
  ID *extraout_x8;
  
  FUN_100be5140();
  FUN_100be4794();
  *extraout_x8 = param_1;
  return param_1;
}



/* Address: 0x100be5178 | FUN_100be5178 */

void FUN_100be5178(undefined8 *param_1,undefined8 param_2)

{
  FUN_100be4794();
  *param_1 = param_2;
  return;
}



/* Address: 0x100be51a0 | thunk_FUN_100be486c */

void thunk_FUN_100be486c(void)

{
  FUN_100be486c();
  return;
}



/* Address: 0x100be51a4 | _TtC6Sentry12SentryClient::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry12SentryClient::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100be51b4 | FUN_100be51b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be51b4(void)

{
  return ZEXT816(0x100fa5588);
}



/* Address: 0x100be51d4 | FUN_100be51d4 */

void FUN_100be51d4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd08c4);
  return;
}



/* Address: 0x100be51e0 | FUN_100be51e0 */

void FUN_100be51e0(undefined8 param_1,SEL param_2)

{
  ID unaff_x19;
  
  _objc_msgSend(unaff_x19,param_2);
  return;
}



/* Address: 0x100be51ec | FUN_100be51ec */

undefined1  [16] FUN_100be51ec(void)

{
  return ZEXT816(0x100f3c8d8);
}



/* Address: 0x100be51fc | FUN_100be51fc */

long * FUN_100be51fc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  UUID UVar6;
  long lVar7;
  ulong uVar8;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))(param_1,param_2,UVar6.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100be52a4 | FUN_100be52a4 */

void FUN_100be52a4(long param_1,long param_2)

{
  UUID UVar1;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))(param_1,UVar1.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Address: 0x100be52ec | FUN_100be52ec */

long FUN_100be52ec(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  UUID UVar5;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
  iVar4 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100be5368 | FUN_100be5368 */

long FUN_100be5368(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  UUID UVar3;
  undefined8 uVar4;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x18))(param_1,param_2,UVar3.unknown);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar4 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100be53fc | FUN_100be53fc */

long FUN_100be53fc(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  undefined8 uVar5;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))(param_1,param_2,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100be546c | FUN_100be546c */

long FUN_100be546c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  UUID UVar5;
  undefined8 uVar6;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x28))(param_1,param_2,UVar5.unknown);
  iVar4 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  uVar3 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar6);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100be54ec | FUN_100be54ec */

void FUN_100be54ec(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100be54f8 | FUN_100be54f8 */

void FUN_100be54f8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1;
  FUN_100bdf4ec();
  if (*(int *)(*(long *)(lVar2 + -8) + 0x54) == (int)param_2) {
    FUN_1000c9ff0(param_1,param_2,lVar2);
    return;
  }
  uVar3 = *(ulong *)(param_1 + *(int *)(param_3 + 0x18) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar1 = (int)uVar3 + -1;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  FUN_100b56e60(iVar1 + 1);
  return;
}



/* Address: 0x100be5574 | FUN_100be5574 */

void FUN_100be5574(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100be5580 | FUN_100be5580 */

void FUN_100be5580(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100bdf4ec();
  if (*(int *)(*(long *)(lVar1 + -8) + 0x54) == param_3) {
    FUN_1000c9ffc(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x100be55f4 | FUN_100be55f4 */

void FUN_100be55f4(undefined8 param_1)

{
  if (DAT_1010483f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cd0924);
  return;
}



/* Address: 0x100be562c | FUN_100be562c */

undefined1  [16] FUN_100be562c(long param_1,ulong param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_30 = &DAT_100c9ef68;
    puStack_28 = puStack_38;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x100be56ac | FUN_100be56ac */

void FUN_100be56ac(UUID param_1,UUID param_2,UUID param_3)

{
  bool bVar1;
  long lVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined *puVar6;
  
  bVar1 = Foundation::UUID::___infix(param_1,param_2,param_3);
  if (bVar1) {
    lVar2 = 0;
    FUN_100be55f4();
    if (*(long *)(param_1.unknown + *(int *)(lVar2 + 0x14)) ==
        *(long *)(param_2.unknown + *(int *)(lVar2 + 0x14))) {
      _Var4.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar2 + 0x18)) + 8);
      puVar6 = *(undefined **)((long)(param_2.unknown + *(int *)(lVar2 + 0x18)) + 8);
      if (_Var4.unknown == (undefined *)0x0) {
        if (puVar6 == (undefined *)0x0) {
LAB_100be5728:
          bVar1 = *(long *)(param_1.unknown + *(int *)(lVar2 + 0x1c)) ==
                  *(long *)(param_2.unknown + *(int *)(lVar2 + 0x1c));
          goto LAB_100be5748;
        }
      }
      else if (puVar6 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
        _Var3.unknown = param_1.unknown[*(int *)(lVar2 + 0x18)];
        puVar5 = *(undefined **)(param_2.unknown + *(int *)(lVar2 + 0x18));
        if ((_Var3.unknown == puVar5 && _Var4.unknown == puVar6) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var4,(_StringComparisonResult)(__int8)puVar5), bVar1))
        goto LAB_100be5728;
      }
    }
  }
  bVar1 = false;
LAB_100be5748:
  FUN_100b56e60(bVar1);
  return;
}



/* Address: 0x100be5750 | FUN_100be5750 */

void FUN_100be5750(Hasher param_1)

{
  undefined8 *puVar1;
  Hasher HVar2;
  long lVar3;
  long unaff_x20;
  void *pvVar4;
  char *pcVar5;
  String SVar6;
  
  HVar2.unknown = param_1.unknown;
  FUN_100bdf4ec();
  FUN_100003a00(&DAT_100fac2e0,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  Swift::Hashable::hash(param_1);
  lVar3 = 0;
  FUN_100be55f4();
  Swift::Hasher::_combine(*(__uint64 *)(unaff_x20 + *(int *)(lVar3 + 0x14)),HVar2);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x18));
  pvVar4 = (void *)puVar1[1];
  if (pvVar4 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    pcVar5 = (char *)*puVar1;
    Swift::Hasher::_combine(1,HVar2);
    _swift_bridgeObjectRetain(pvVar4);
    SVar6.bridgeObject = pvVar4;
    SVar6.str = pcVar5;
    Swift::String::hash(param_1,SVar6);
    _swift_bridgeObjectRelease(pvVar4);
    HVar2.unknown = pcVar5;
  }
  Swift::Hasher::_combine(*(__uint64 *)(unaff_x20 + *(int *)(lVar3 + 0x1c)),HVar2);
  return;
}



/* Address: 0x100be5830 | FUN_100be5830 */

void FUN_100be5830(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100be5750();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100be586c | thunk_FUN_100be5830 */

void thunk_FUN_100be5830(void)

{
  FUN_100be5830();
  return;
}



/* Address: 0x100be5870 | thunk_FUN_100be5750 */

void thunk_FUN_100be5750(void)

{
  FUN_100be5750();
  return;
}



/* Address: 0x100be5874 | FUN_100be5874 */

void FUN_100be5874(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_100be5750();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100be58ac | thunk_FUN_100be56ac */

void thunk_FUN_100be56ac(void)

{
  FUN_100be56ac();
  return;
}



/* Address: 0x100be58b0 | FUN_100be58b0 */

void FUN_100be58b0(void)

{
  FUN_100003a00(&DAT_101048438,FUN_100be55f4,&TargetProtocolConformanceDescriptor_100c9ef80);
  return;
}



/* Address: 0x100be58dc | FUN_100be58dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be58dc(void)

{
  return ZEXT816(0x101048480);
}



/* Address: 0x100be58fc | FUN_100be58fc */

undefined1  [16] FUN_100be58fc(void)

{
  return ZEXT816(0x100f3c938);
}



/* Address: 0x100be590c | FUN_100be590c */

undefined1  [16] FUN_100be590c(void)

{
  return ZEXT816(0x100f3c958);
}



/* Address: 0x100be591c | FUN_100be591c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be5a2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_100be591c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  Dictionary<undefined,undefined> DVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_e0 [128];
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry22SentryRRWebCustomEvent::tag);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  (**(code **)(lVar9 + 0x10))
            (auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_1,DVar3.unknown);
  puVar4 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = 0x676174;
  *(undefined8 *)(puVar4 + 0x28) = 0xe300000000000000;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  *(undefined **)(puVar4 + 0x48) = puVar2;
  *(undefined8 *)(puVar4 + 0x50) = 0x64616f6c796170;
  *(undefined1 **)(puVar4 + 0x58) = &DAT_e700000000000000;
  puVar5 = &DAT_101044968;
  FUN_100b6730c();
  *(undefined **)(puVar4 + 0x78) = puVar5;
  *(undefined8 *)(puVar4 + 0x60) = param_4;
  _swift_bridgeObjectRetain(param_3);
  DVar6 = Swift::Dictionary::_init
                    (puVar5,puVar2,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  uVar7 = 5;
  FUN_100b7947c(5,auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),DVar6.unknown);
  (**(code **)(lVar9 + 8))(param_1,DVar3.unknown);
  return uVar7;
}



/* Address: 0x100be5a78 | _TtC6Sentry22SentryRRWebCustomEvent::tag */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryRRWebCustomEvent::tag(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100be5ab0();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100be5ab0 | FUN_100be5ab0 */

undefined1  [16] FUN_100be5ab0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC6Sentry22SentryRRWebCustomEvent::tag);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC6Sentry22SentryRRWebCustomEvent::tag) + 8));
  return auVar1;
}



/* Address: 0x100be5ae8 | _TtC6Sentry22SentryRRWebCustomEvent::initWithTimestamp:tag:payload: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry22SentryRRWebCustomEvent::initWithTimestamp_tag_payload_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  Date DVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined1 *puVar3;
  String SVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100be591c(puVar3,SVar4.str,SVar4.bridgeObject,DVar2.unknown);
  return (ID)puVar3;
}



/* Address: 0x100be5ba0 | FUN_100be5ba0 */

void FUN_100be5ba0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryRRWebCustomEvent",0x1d,"init(type:timestamp:data:)",0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be5bcc);
  (*pcVar1)();
}



/* Address: 0x100be5bcc | _TtC6Sentry22SentryRRWebCustomEvent::initWithType:timestamp:data: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry22SentryRRWebCustomEvent::initWithType_timestamp_data_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  Foundation::Date::typeMetadataAccessor();
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_4);
  if (param_5 != 0) {
    (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100be5ba0();
  IVar1 = *(ID *)(param_4 + tag + 8);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100be5c38 | FUN_100be5c38 */

void FUN_100be5c38(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryRRWebCustomEvent::tag + 8));
  return;
}



/* Address: 0x100be5c4c | FUN_100be5c4c */

void FUN_100be5c4c(void)

{
  FUN_100be5c80();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100be5c80 | FUN_100be5c80 */

void FUN_100be5c80(undefined8 param_1)

{
  if (DAT_101048500 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cd09c8);
  return;
}



/* Address: 0x100be5cb8 | _TtC6Sentry22SentryRRWebCustomEvent::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry22SentryRRWebCustomEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + tag + 8));
  return;
}



/* Address: 0x100be5ccc | FUN_100be5ccc */

void FUN_100be5ccc(void)

{
  FUN_100be5c80(0);
  return;
}



/* Address: 0x100be5cd4 | FUN_100be5cd4 */

void FUN_100be5cd4(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c9f048;
  _swift_updateClassMetadata2(param_1,0x100,1,&local_18,param_1 + 0x78);
  return;
}



/* Address: 0x100be5d14 | FUN_100be5d14 */

void FUN_100be5d14(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd09c8);
  return;
}



/* Address: 0x100be5d20 | FUN_100be5d20 */

undefined1 * FUN_100be5d20(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100be5d7c(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100be5d7c | FUN_100be5d7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100be5d7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID self;
  code *pcVar4;
  NSDictionary *pNVar5;
  undefined8 uVar6;
  ID unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  long local_88;
  undefined *local_80;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar3 = &DAT_101048538;
  FUN_100b6730c();
  lVar7 = *(long *)(puVar3 + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + lVar1;
  _objc_allocWithZone();
  self = _objc_msgSend(unaff_x20,"init");
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100be6324();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_88 = unaff_x21;
    local_80 = puVar3;
    *(undefined1 **)((long)auStack_a0 + lVar1) = puVar8;
    pcVar4 = FUN_100be6364;
    FUN_100bd03e0(FUN_100be6364,auStack_b0 + lVar1);
    if (pcVar4 == (code *)0x0) {
      pNVar5 = (NSDictionary *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar4);
    }
    _objc_msgSend(self,"setSignal:",pNVar5);
    *(undefined1 **)((long)auStack_a0 + lVar1) = puVar8;
    pcVar4 = FUN_100be6380;
    FUN_100bd03e0(FUN_100be6380,auStack_b0 + lVar1);
    if (pcVar4 == (code *)0x0) {
      pNVar5 = (NSDictionary *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar4);
    }
    puVar2 = local_80;
    _objc_msgSend(self,"setMachException:",pNVar5);
    uVar6 = 0;
    FUN_100b8b034(0);
    local_61 = 2;
    puVar3 = &DAT_101048548;
    FUN_100003a00(&DAT_101048548,FUN_100b8b034,&TargetProtocolConformanceDescriptor_100c9aef8);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar6,&local_61,puVar2,uVar6,puVar3);
    if (local_88 == 0) {
      _objc_msgSend(self,"setError:",local_58);
      (**(code **)(lVar7 + 8))(puVar8,puVar2);
      FUN_100004594(param_1);
      return self;
    }
    (**(code **)(lVar7 + 8))(puVar8,puVar2);
  }
  FUN_100004594(param_1);
  return self;
}



/* Address: 0x100be6084 | _TtC6Sentry25MechanismContextDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25MechanismContextDecodable::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be60a4 | FUN_100be60a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be60a4(void)

{
  return ZEXT816(0x100fa5740);
}



/* Address: 0x100be60c4 | FUN_100be60c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be60f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100be60c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100be6120 | FUN_100be6120 */

undefined1  [16] FUN_100be6120(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = &DAT_e600000000000000;
    auVar4._0_8_ = 0x6c616e676973;
    return auVar4;
  }
  puVar2 = (undefined1 *)0xee006e6f69747065;
  uVar1 = 0x6378655f6863616d;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e800000000000000;
    uVar1 = 0x726f7272655f736e;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100be6180 | FUN_100be6180 */

void FUN_100be6180(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100beb480(*param_1,*param_2);
  return;
}


