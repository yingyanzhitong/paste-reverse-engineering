/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100169194 | _TtC7PostHog20PostHogDisplaySurvey::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog20PostHogDisplaySurvey::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + id + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + name + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + questions));
  FUN_10012bcb8(param_1 + startDate);
  FUN_10012bcb8(param_1 + endDate);
  return;
}



/* Address: 0x100169214 | FUN_100169214 */

void FUN_100169214(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = ((undefined8 *)(*unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::id))[1];
  *param_1 = *(undefined8 *)(*unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::id);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100169230 | FUN_100169230 */

undefined1  [16] FUN_100169230(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 2) {
    uVar1 = param_1;
  }
  auVar2[8] = 1 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100169240 | thunk_FUN_10010ca88 */

void thunk_FUN_10010ca88(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  
  HVar1.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100169244 | thunk_FUN_10010cacc */

void thunk_FUN_10010cacc(void)

{
  FUN_10010cacc();
  return;
}



/* Address: 0x100169248 | FUN_100169248 */

void FUN_100169248(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Address: 0x100169264 | thunk_FUN_100169268 */

void thunk_FUN_100169268(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb24f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f890,&DAT_100eb9778);
  DAT_100fb24f8 = pTVar1;
  return;
}



/* Address: 0x100169268 | FUN_100169268 */

void FUN_100169268(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb24f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f890,&DAT_100eb9778);
  DAT_100fb24f8 = pTVar1;
  return;
}



/* Address: 0x1001692a8 | thunk_FUN_1001692ac */

void thunk_FUN_1001692ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb2500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f930,&DAT_100eb9798);
  DAT_100fb2500 = pTVar1;
  return;
}



/* Address: 0x1001692ac | FUN_1001692ac */

void FUN_1001692ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb2500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f930,&DAT_100eb9798);
  DAT_100fb2500 = pTVar1;
  return;
}



/* Address: 0x1001692ec | FUN_1001692ec */

void FUN_1001692ec(void)

{
  FUN_10016915c(0);
  return;
}



/* Address: 0x1001692f4 | FUN_1001692f4 */

void FUN_1001692f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long lStack_28;
  
  local_50 = &DAT_100c2f9f8;
  puStack_48 = &DAT_100c2f9f8;
  local_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_38 = &DAT_100c2fa10;
  lVar1 = 0x13f;
  FUN_10012bf84();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = local_30;
    _swift_updateClassMetadata2(param_1,0x100,6,&local_50,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100169384 | FUN_100169384 */

undefined1  [16] FUN_100169384(void)

{
  return ZEXT816(0x100eb9778);
}



/* Address: 0x100169394 | FUN_100169394 */

undefined1  [16] FUN_100169394(void)

{
  return ZEXT816(0x100eb9798);
}



/* Address: 0x1001693a4 | thunk_FUN_100169230 */

undefined1  [16] thunk_FUN_100169230(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 2) {
    uVar1 = param_1;
  }
  auVar2[8] = 1 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x1001693a8 | thunk_FUN_1000f7ddc */

void thunk_FUN_1000f7ddc(void)

{
  FUN_1000f7ddc();
  return;
}



/* Address: 0x1001693ac | thunk_FUN_10010cacc */

void thunk_FUN_10010cacc(void)

{
  thunk_FUN_10010cacc();
  return;
}



/* Address: 0x1001693b0 | thunk_FUN_100003644 */

void thunk_FUN_100003644(void)

{
  FUN_100003644();
  return;
}



/* Address: 0x1001693b4 | thunk_FUN_10010ca88 */

void thunk_FUN_10010ca88(void)

{
  thunk_FUN_10010ca88();
  return;
}



/* Address: 0x1001693b8 | thunk_FUN_100169248 */

void thunk_FUN_100169248(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Address: 0x1001693bc | FUN_1001693bc */

undefined1  [16] FUN_1001693bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::fontFamily);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::fontFamily) + 8));
  return auVar1;
}



/* Address: 0x1001693f4 | FUN_1001693f4 */

undefined1  [16] FUN_1001693f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::backgroundColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::backgroundColor) + 8));
  return auVar1;
}



/* Address: 0x10016942c | FUN_10016942c */

undefined1  [16] FUN_10016942c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::borderColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::borderColor) + 8));
  return auVar1;
}



/* Address: 0x100169464 | FUN_100169464 */

undefined1  [16] FUN_100169464(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonColor) + 8));
  return auVar1;
}



/* Address: 0x10016949c | FUN_10016949c */

undefined1  [16] FUN_10016949c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonText);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonText) + 8));
  return auVar1;
}



/* Address: 0x1001694d4 | FUN_1001694d4 */

undefined1  [16] FUN_1001694d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonTextColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::submitButtonTextColor) +
              8));
  return auVar1;
}



/* Address: 0x10016950c | FUN_10016950c */

undefined1  [16] FUN_10016950c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::textColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::textColor) + 8));
  return auVar1;
}



/* Address: 0x100169544 | FUN_100169544 */

undefined1  [16] FUN_100169544(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::descriptionTextColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::descriptionTextColor) + 8
              ));
  return auVar1;
}



/* Address: 0x10016957c | FUN_10016957c */

undefined1  [16] FUN_10016957c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::ratingButtonColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::ratingButtonColor) + 8));
  return auVar1;
}



/* Address: 0x1001695b4 | FUN_1001695b4 */

undefined1  [16] FUN_1001695b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::ratingButtonActiveColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::ratingButtonActiveColor)
              + 8));
  return auVar1;
}



/* Address: 0x1001695ec | FUN_1001695ec */

undefined1  [16] FUN_1001695ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::inputBackground);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::inputBackground) + 8));
  return auVar1;
}



/* Address: 0x100169624 | FUN_100169624 */

undefined1  [16] FUN_100169624(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::inputTextColor);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::inputTextColor) + 8));
  return auVar1;
}



/* Address: 0x10016965c | FUN_10016965c */

undefined1  [16] FUN_10016965c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::placeholder);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::placeholder) + 8));
  return auVar1;
}



/* Address: 0x100169694 | FUN_100169694 */

undefined1  [16] FUN_100169694(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)
                  (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::surveyPopupDelaySeconds
                  );
  return auVar1;
}



/* Address: 0x1001696ac | FUN_1001696ac */

undefined1 FUN_1001696ac(void)

{
  long unaff_x20;
  
  return *(undefined1 *)
          (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::displayThankYouMessage);
}



/* Address: 0x1001696bc | FUN_1001696bc */

undefined1  [16] FUN_1001696bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageHeader);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageHeader) +
              8));
  return auVar1;
}



/* Address: 0x1001696f4 | FUN_1001696f4 */

undefined1  [16] FUN_1001696f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageDescription);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 +
                _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageDescription) + 8));
  return auVar1;
}



/* Address: 0x10016972c | FUN_10016972c */

undefined1  [16] FUN_10016972c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)
                  (unaff_x20 +
                  _TtC7PostHog30PostHogDisplaySurveyAppearance::
                  thankYouMessageDescriptionContentType);
  return auVar1;
}



/* Address: 0x100169744 | FUN_100169744 */

undefined1  [16] FUN_100169744(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 +
            _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageCloseButtonText);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 +
                _TtC7PostHog30PostHogDisplaySurveyAppearance::thankYouMessageCloseButtonText) + 8));
  return auVar1;
}



/* Address: 0x10016977c | _TtC7PostHog30PostHogDisplaySurveyAppearance::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog30PostHogDisplaySurveyAppearance::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogDisplaySurveyAppearance",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001697a8);
  (*pcVar1)();
}



/* Address: 0x1001697a8 | FUN_1001697a8 */

void FUN_1001697a8(void)

{
  FUN_1001697d8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1001697d8 | FUN_1001697d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001697d8(void)

{
  return ZEXT816(0x100f94b40);
}



/* Address: 0x1001697f8 | _TtC7PostHog30PostHogDisplaySurveyAppearance::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog30PostHogDisplaySurveyAppearance::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + fontFamily + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + backgroundColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + borderColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + submitButtonColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + submitButtonText + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + submitButtonTextColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + descriptionTextColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ratingButtonColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ratingButtonActiveColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inputBackground + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inputTextColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + placeholder + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + thankYouMessageHeader + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + thankYouMessageDescription + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + thankYouMessageCloseButtonText + 8));
  return;
}



/* Address: 0x100169950 | _TtC7PostHog28PostHogDisplaySurveyQuestion::id */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog28PostHogDisplaySurveyQuestion::id(ID param_1,SEL param_2)

{
  FUN_1001699a0(param_1,param_2,&id);
  return param_1;
}



/* Address: 0x10016995c | FUN_10016995c */

undefined1  [16] FUN_10016995c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::id);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::id) +
              8));
  return auVar1;
}



/* Address: 0x100169994 | _TtC7PostHog28PostHogDisplaySurveyQuestion::question */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog28PostHogDisplaySurveyQuestion::question(ID param_1,SEL param_2)

{
  FUN_1001699a0(param_1,param_2,&question);
  return param_1;
}



/* Address: 0x1001699a0 | FUN_1001699a0 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_1001699a0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  NSString *pNVar2;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3 + 8);
  _swift_bridgeObjectRetain(uVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  return pNVar2;
}



/* Address: 0x1001699e8 | FUN_1001699e8 */

undefined1  [16] FUN_1001699e8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::question);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::question) + 8));
  return auVar1;
}



/* Address: 0x100169a20 | _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescription */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescription(ID param_1,SEL param_2)

{
  FUN_100169ab0(param_1,param_2,&questionDescription);
  return param_1;
}



/* Address: 0x100169a2c | FUN_100169a2c */

undefined1  [16] FUN_100169a2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescription);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescription) + 8));
  return auVar1;
}



/* Address: 0x100169a64 | _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescriptionContentType */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescriptionContentType
                    (ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + questionDescriptionContentType);
}



/* Address: 0x100169a74 | FUN_100169a74 */

undefined8 FUN_100169a74(void)

{
  long unaff_x20;
  
  return *(undefined8 *)
          (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::questionDescriptionContentType);
}



/* Address: 0x100169a84 | _TtC7PostHog28PostHogDisplaySurveyQuestion::isOptional */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PostHog28PostHogDisplaySurveyQuestion::isOptional(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + isOptional);
}



/* Address: 0x100169a94 | FUN_100169a94 */

undefined1 FUN_100169a94(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::isOptional);
}



/* Address: 0x100169aa4 | _TtC7PostHog28PostHogDisplaySurveyQuestion::buttonText */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog28PostHogDisplaySurveyQuestion::buttonText(ID param_1,SEL param_2)

{
  FUN_100169ab0(param_1,param_2,&buttonText);
  return param_1;
}



/* Address: 0x100169ab0 | FUN_100169ab0 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100169ab0(long param_1,undefined8 param_2,long *param_3)

{
  NSString *pNVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + *param_3 + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return pNVar1;
}



/* Address: 0x100169b08 | FUN_100169b08 */

undefined1  [16] FUN_100169b08(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])
            (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::buttonText);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])
                (unaff_x20 + _TtC7PostHog28PostHogDisplaySurveyQuestion::buttonText) + 8));
  return auVar1;
}



/* Address: 0x100169b40 | _TtC7PostHog28PostHogDisplaySurveyQuestion::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog28PostHogDisplaySurveyQuestion::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogDisplaySurveyQuestion",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100169b6c);
  (*pcVar1)();
}



/* Address: 0x100169b6c | FUN_100169b6c */

void FUN_100169b6c(void)

{
  FUN_1001053dc(FUN_100169b78);
  return;
}



/* Address: 0x100169b78 | FUN_100169b78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100169b78(void)

{
  return ZEXT816(0x100f94c90);
}



/* Address: 0x100169b98 | _TtC7PostHog28PostHogDisplaySurveyQuestion::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog28PostHogDisplaySurveyQuestion::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + id + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + question + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + questionDescription + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + buttonText + 8));
  return;
}



/* Address: 0x100169c00 | FUN_100169c00 */

void FUN_100169c00(void)

{
  FUN_1001053dc(FUN_100169c0c);
  return;
}



/* Address: 0x100169c0c | FUN_100169c0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100169c0c(void)

{
  return ZEXT816(0x100f94d78);
}



/* Address: 0x100169c2c | FUN_100169c2c */

undefined1  [16] FUN_100169c2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog26PostHogDisplayLinkQuestion::link);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog26PostHogDisplayLinkQuestion::link) +
              8));
  return auVar1;
}


