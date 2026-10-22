/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb7e50 | FUN_100bb7e50 */

void FUN_100bb7e50(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::maskedViewClasses;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7e7c | _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses(ID param_1,SEL param_2)

{
  FUN_100bb7e88(param_1,param_2,FUN_100bb7ec4);
  return param_1;
}



/* Address: 0x100bb7e88 | FUN_100bb7e88 */

void FUN_100bb7e88(void)

{
  FUN_100b94100();
  FUN_100b6730c(&DAT_1010447d8);
  (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  FUN_100b94108();
  FUN_100b94114();
  return;
}



/* Address: 0x100bb7ec4 | FUN_100bb7ec4 */

void FUN_100bb7ec4(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::unmaskedViewClasses);
  return;
}



/* Address: 0x100bb7ed0 | _TtC6Sentry19SentryReplayOptions::setUnmaskedViewClasses: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setUnmaskedViewClasses_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb7edc();
  return;
}



/* Address: 0x100bb7edc | FUN_100bb7edc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb7edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  FUN_100b6730c(&DAT_1010447d8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  (*param_4)(param_3);
  return 0;
}



/* Address: 0x100bb7f40 | FUN_100bb7f40 */

void FUN_100bb7f40(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::unmaskedViewClasses);
  return;
}



/* Address: 0x100bb7f4c | FUN_100bb7f4c */

void FUN_100bb7f4c(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb7f40();
  return;
}



/* Address: 0x100bb7f74 | FUN_100bb7f74 */

void FUN_100bb7f74(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb7fa0 | _TtC6Sentry19SentryReplayOptions::excludedViewClasses */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::excludedViewClasses(ID param_1,SEL param_2)

{
  FUN_100bb807c(param_1,param_2,FUN_100bb7fac);
  return param_1;
}



/* Address: 0x100bb7fac | FUN_100bb7fac */

void FUN_100bb7fac(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::excludedViewClasses);
  return;
}



/* Address: 0x100bb7fb8 | _TtC6Sentry19SentryReplayOptions::setExcludedViewClasses: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setExcludedViewClasses_(ID param_1,SEL param_2,ID param_3)

{
  Set<undefined> SVar1;
  
  SVar1 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb8010(SVar1.unknown);
  return;
}



/* Address: 0x100bb8010 | FUN_100bb8010 */

void FUN_100bb8010(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::excludedViewClasses);
  return;
}



/* Address: 0x100bb801c | FUN_100bb801c */

void FUN_100bb801c(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb8010();
  return;
}



/* Address: 0x100bb8044 | FUN_100bb8044 */

void FUN_100bb8044(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::excludedViewClasses;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8070 | _TtC6Sentry19SentryReplayOptions::includedViewClasses */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::includedViewClasses(ID param_1,SEL param_2)

{
  FUN_100bb807c(param_1,param_2,FUN_100bb80b4);
  return param_1;
}



/* Address: 0x100bb807c | FUN_100bb807c */

void FUN_100bb807c(void)

{
  FUN_100b94100();
  (extension_Foundation)::Swift::Set::_bridgeToObjectiveC();
  FUN_100b94108();
  FUN_100b94114();
  return;
}



/* Address: 0x100bb80b4 | FUN_100bb80b4 */

void FUN_100bb80b4(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::includedViewClasses);
  return;
}



/* Address: 0x100bb80c0 | _TtC6Sentry19SentryReplayOptions::setIncludedViewClasses: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setIncludedViewClasses_(ID param_1,SEL param_2,ID param_3)

{
  Set<undefined> SVar1;
  
  SVar1 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb8118(SVar1.unknown);
  return;
}



/* Address: 0x100bb8118 | FUN_100bb8118 */

void FUN_100bb8118(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::includedViewClasses);
  return;
}



/* Address: 0x100bb8124 | FUN_100bb8124 */

void FUN_100bb8124(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb8118();
  return;
}



/* Address: 0x100bb814c | FUN_100bb814c */

void FUN_100bb814c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::includedViewClasses;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8178 | FUN_100bb8178 */

void FUN_100bb8178(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb819c(param_1,param_2,&_TtC6Sentry19SentryReplayOptions::excludedViewClasses);
  return;
}



/* Address: 0x100bb8184 | _TtC6Sentry19SentryReplayOptions::excludeViewTypeFromSubtreeTraversal: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::excludeViewTypeFromSubtreeTraversal_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb8220();
  return;
}



/* Address: 0x100bb8190 | FUN_100bb8190 */

void FUN_100bb8190(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb819c(param_1,param_2,&_TtC6Sentry19SentryReplayOptions::includedViewClasses);
  return;
}



/* Address: 0x100bb819c | FUN_100bb819c */

void FUN_100bb819c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  _swift_beginAccess(unaff_x20 + *param_3,auStack_58,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  FUN_10007253c(auStack_40,param_1,param_2);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(local_38);
  return;
}



/* Address: 0x100bb8214 | _TtC6Sentry19SentryReplayOptions::includeViewTypeInSubtreeTraversal: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::includeViewTypeInSubtreeTraversal_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb8220();
  return;
}



/* Address: 0x100bb8220 | FUN_100bb8220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bb8220(void)

{
  code *in_x3;
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (*in_x3)(SVar1.str,SVar1.bridgeObject);
  FUN_100b6f868();
  FUN_100bbb43c(SVar1.bridgeObject);
  return;
}



/* Address: 0x100bb8270 | FUN_100bb8270 */

undefined1  [16] FUN_100bb8270(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar2 = _malloc(0x30);
  *param_1 = pvVar2;
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableViewRendererV2;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  FUN_100b80d38(unaff_x20 + lVar1,pvVar2);
  *(undefined1 *)((long)pvVar2 + 0x28) = *(undefined1 *)(unaff_x20 + lVar1);
  auVar3._8_8_ = (undefined1 *)((long)pvVar2 + 0x28);
  auVar3._0_8_ = FUN_100bb82d0;
  return auVar3;
}



/* Address: 0x100bb82d0 | FUN_100bb82d0 */

void FUN_100bb82d0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *(undefined1 *)(*(long *)((long)pvVar1 + 0x18) + *(long *)((long)pvVar1 + 0x20)) =
       *(undefined1 *)((long)pvVar1 + 0x28);
  _free(pvVar1);
  return;
}



/* Address: 0x100bb82e4 | _TtC6Sentry19SentryReplayOptions::enableViewRendererV2 */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::enableViewRendererV2(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb8308();
  return uVar1 & 1;
}



/* Address: 0x100bb8308 | FUN_100bb8308 */

void FUN_100bb8308(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableViewRendererV2;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb8330 | _TtC6Sentry19SentryReplayOptions::setEnableViewRendererV2: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setEnableViewRendererV2_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100bb8354(param_3);
  return;
}



/* Address: 0x100bb8354 | FUN_100bb8354 */

void FUN_100bb8354(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableViewRendererV2;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb8380 | FUN_100bb8380 */

void FUN_100bb8380(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableViewRendererV2;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb83ac | _TtC6Sentry19SentryReplayOptions::enableFastViewRendering */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::enableFastViewRendering(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb83d0();
  return uVar1 & 1;
}



/* Address: 0x100bb83d0 | FUN_100bb83d0 */

void FUN_100bb83d0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableFastViewRendering;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb83f8 | _TtC6Sentry19SentryReplayOptions::setEnableFastViewRendering: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setEnableFastViewRendering_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100bb841c(param_3);
  return;
}



/* Address: 0x100bb841c | FUN_100bb841c */

void FUN_100bb841c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableFastViewRendering;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb8448 | FUN_100bb8448 */

void FUN_100bb8448(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::enableFastViewRendering;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8474 | FUN_100bb8474 */

void FUN_100bb8474(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb84a8();
  return;
}



/* Address: 0x100bb849c | FUN_100bb849c */

void FUN_100bb849c(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls);
  return;
}



/* Address: 0x100bb84a8 | FUN_100bb84a8 */

void FUN_100bb84a8(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls);
  return;
}



/* Address: 0x100bb84b4 | FUN_100bb84b4 */

void FUN_100bb84b4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkDetailAllowUrls;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb84e0 | FUN_100bb84e0 */

void FUN_100bb84e0(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb8514();
  return;
}



/* Address: 0x100bb8508 | FUN_100bb8508 */

void FUN_100bb8508(void)

{
  FUN_100b92498(&_TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls);
  return;
}



/* Address: 0x100bb8514 | FUN_100bb8514 */

void FUN_100bb8514(undefined8 param_1)

{
  FUN_100bb8520(param_1,&_TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls);
  return;
}



/* Address: 0x100bb8520 | FUN_100bb8520 */

void FUN_100bb8520(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_100b78c6c();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb8554 | FUN_100bb8554 */

void FUN_100bb8554(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkDetailDenyUrls;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8580 | _TtC6Sentry19SentryReplayOptions::networkCaptureBodies */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry19SentryReplayOptions::networkCaptureBodies(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb85a4();
  return uVar1 & 1;
}



/* Address: 0x100bb85a4 | FUN_100bb85a4 */

void FUN_100bb85a4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkCaptureBodies;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bb85cc | _TtC6Sentry19SentryReplayOptions::setNetworkCaptureBodies: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry19SentryReplayOptions::setNetworkCaptureBodies_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100bb85f0(param_3);
  return;
}



/* Address: 0x100bb85f0 | FUN_100bb85f0 */

void FUN_100bb85f0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkCaptureBodies;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bb861c | FUN_100bb861c */

void FUN_100bb861c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry19SentryReplayOptions::networkCaptureBodies;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bb8648 | _TtC6Sentry19SentryReplayOptions::networkRequestHeaders */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::networkRequestHeaders(ID param_1,SEL param_2)

{
  FUN_100bb89c0(param_1,param_2,FUN_100bb8654);
  return param_1;
}



/* Address: 0x100bb8654 | FUN_100bb8654 */

void FUN_100bb8654(void)

{
  FUN_100bbb48c(_TtC6Sentry19SentryReplayOptions::_networkRequestHeaders);
  return;
}



/* Address: 0x100bb8660 | _TtC6Sentry19SentryReplayOptions::setNetworkRequestHeaders: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry19SentryReplayOptions::setNetworkRequestHeaders_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100bb86ac(param_3);
  return;
}



/* Address: 0x100bb86ac | FUN_100bb86ac */

void FUN_100bb86ac(undefined8 param_1)

{
  FUN_100bb8a5c(param_1,&DAT_101043d90,FUN_100bb89a8);
  return;
}



/* Address: 0x100bb86c0 | FUN_100bb86c0 */

void FUN_100bb86c0(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  FUN_100bb86ac();
  return;
}



/* Address: 0x100bb86e8 | FUN_100bb86e8 */

undefined * FUN_100bb86e8(undefined *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar11;
  undefined8 *puVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined *local_68;
  void *pvVar10;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  local_68 = PTR___swiftEmptySetSingleton_100eae0e8;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRetain();
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    puVar12 = (undefined8 *)(param_2 + 0x28);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      pcVar2 = (char *)puVar12[-1];
      pvVar4 = (void *)*puVar12;
      SVar13.bridgeObject = pvVar4;
      SVar13.str = pcVar2;
      SVar13 = Swift::String::lowercased(SVar13);
      puVar7 = local_68;
      pvVar10 = SVar13.bridgeObject;
      pcVar5 = SVar13.str;
      _swift_bridgeObjectRetain(pvVar4);
      pcVar6 = pcVar5;
      FUN_100052458(pcVar5,pvVar10,puVar7);
      if (((ulong)pcVar6 & 1) == 0) {
        FUN_10007253c(auStack_78,pcVar5,pvVar10);
        _swift_bridgeObjectRelease(local_70);
        puVar7 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100089044(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar3 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100089044(puVar9,uVar3 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar3 + 1;
        *(char **)(puVar9 + uVar3 * 0x10 + 0x20) = pcVar2;
        *(void **)(puVar9 + uVar3 * 0x10 + 0x28) = pvVar4;
      }
      else {
        _swift_bridgeObjectRelease(pvVar10);
        _swift_bridgeObjectRelease(pvVar4);
      }
      puVar12 = puVar12 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(param_2);
  }
  lVar11 = *(long *)(puVar1 + 0x10);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(puVar1 + 0x28);
    do {
      pcVar2 = (char *)puVar12[-1];
      pvVar4 = (void *)*puVar12;
      SVar14.bridgeObject = pvVar4;
      SVar14.str = pcVar2;
      SVar13 = Swift::String::lowercased(SVar14);
      puVar7 = local_68;
      pvVar10 = SVar13.bridgeObject;
      pcVar5 = SVar13.str;
      _swift_bridgeObjectRetain(pvVar4);
      pcVar6 = pcVar5;
      FUN_100052458(pcVar5,pvVar10,puVar7);
      if (((ulong)pcVar6 & 1) == 0) {
        FUN_10007253c(auStack_78,pcVar5,pvVar10);
        _swift_bridgeObjectRelease(local_70);
        puVar7 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100089044(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar3 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100089044(puVar9,uVar3 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar3 + 1;
        *(char **)(puVar9 + uVar3 * 0x10 + 0x20) = pcVar2;
        *(void **)(puVar9 + uVar3 * 0x10 + 0x28) = pvVar4;
      }
      else {
        _swift_bridgeObjectRelease(pvVar10);
        _swift_bridgeObjectRelease(pvVar4);
      }
      puVar12 = puVar12 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(local_68);
  return puVar9;
}



/* Address: 0x100bb8960 | FUN_100bb8960 */

void FUN_100bb8960(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryReplayOptions::_networkRequestHeaders);
  param_1[1] = unaff_x20;
  _swift_bridgeObjectRetain();
  FUN_100b56e88(FUN_100bb899c,param_1);
  return;
}



/* Address: 0x100bb899c | FUN_100bb899c */

void FUN_100bb899c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb8b44(param_1,param_2,FUN_100bb86ac);
  return;
}



/* Address: 0x100bb89a8 | FUN_100bb89a8 */

void FUN_100bb89a8(void)

{
  FUN_100bbb37c();
  return;
}



/* Address: 0x100bb89b4 | _TtC6Sentry19SentryReplayOptions::networkResponseHeaders */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryReplayOptions::networkResponseHeaders(ID param_1,SEL param_2)

{
  FUN_100bb89c0(param_1,param_2,FUN_100bb89f0);
  return param_1;
}


