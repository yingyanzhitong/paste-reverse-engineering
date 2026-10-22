/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10016aaa8 | _TtC7PostHog20PostHogSurveysConfig::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog20PostHogSurveysConfig::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  ID IVar4;
  objc_super local_30;
  
  lVar2 = surveysDelegate;
  pcVar3 = (class_t *)0x0;
  FUN_10016ab8c();
  _swift_allocObject();
  *(class_t **)(param_1 + lVar2) = pcVar3;
  puVar1 = (undefined8 *)(param_1 + overrideDisplayLanguage);
  FUN_10016aa88();
  *puVar1 = 0;
  puVar1[1] = 0;
  local_30.receiver = param_1;
  local_30.super_class = pcVar3;
  IVar4 = _objc_msgSendSuper2(&local_30,"init");
  return IVar4;
}



/* Address: 0x10016ab14 | FUN_10016ab14 */

void FUN_10016ab14(void)

{
  FUN_10016aa88();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10016ab44 | _TtC7PostHog20PostHogSurveysConfig::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog20PostHogSurveysConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + surveysDelegate));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + overrideDisplayLanguage + 8));
  return;
}



/* Address: 0x10016ab80 | _TtC7PostHog29PostHogSurveysDefaultDelegate::renderSurvey:onSurveyShown:onSurveyResponse:onSurveyClosed: */

/* Function Stack Size: 0x30 bytes */

void _TtC7PostHog29PostHogSurveysDefaultDelegate::
     renderSurvey_onSurveyShown_onSurveyResponse_onSurveyClosed_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5,ID param_6,
               undefined4 param_7,ID param_8,undefined4 param_9)

{
  return;
}



/* Address: 0x10016ab84 | _TtC7PostHog29PostHogSurveysDefaultDelegate::updateSurvey: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog29PostHogSurveysDefaultDelegate::updateSurvey_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



/* Address: 0x10016ab88 | _TtC7PostHog29PostHogSurveysDefaultDelegate::cleanupSurveys */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog29PostHogSurveysDefaultDelegate::cleanupSurveys(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x10016ab8c | FUN_10016ab8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10016ab8c(void)

{
  return ZEXT816(0x100fb2850);
}



/* Address: 0x10016abac | FUN_10016abac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010016ae08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10016abac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  AnyView AVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *puVar11;
  long lVar12;
  String SVar13;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  if ((bVar2 & 1) == 0) {
    puVar8 = &DAT_100fb28b0;
    FUN_1000f7830(&DAT_100fb28b0,&DAT_100c2fd38);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = (long)&local_c0 - extraout_x8_01;
    puVar9 = &DAT_100fb28b8;
    FUN_1000f7830(&DAT_100fb28b8,&DAT_100c2fd40);
    (**(code **)(*(long *)(puVar9 + -8) + 0x10))(lVar12,param_2,puVar9);
    _swift_storeEnumTagMultiPayload(lVar12,puVar8,1);
    FUN_10016b548();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
  }
  else {
    puVar8 = &DAT_100fb28c8;
    FUN_1000f7830(&DAT_100fb28c8,&DAT_100c2fd48);
    local_80 = *(long *)(puVar8 + -8);
    local_90 = *(undefined8 *)(local_80 + 0x40);
    local_78 = puVar8;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    local_88 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar10 = (long)&local_c0 - local_88;
    puVar8 = &DAT_100fb28d0;
    local_c0 = lVar10;
    FUN_1000f7830(&DAT_100fb28d0,&DAT_100c2fd50);
    local_b8 = *(long *)(puVar8 + -8);
    local_98 = lVar10;
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar9 = &DAT_100eb9928;
    _swift_allocObject(&DAT_100eb9928,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_3;
    puVar3 = &DAT_100fb28b8;
    FUN_1000f7830(&DAT_100fb28b8,&DAT_100c2fd40);
    puVar4 = puVar3;
    FUN_10016b548();
    local_b0 = puVar3;
    local_a8 = puVar4;
    (extension_SwiftUI)::SwiftUI::View::_onOpenURL();
    _swift_release(puVar9);
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar9 = &DAT_100eb9950;
    _swift_allocObject(&DAT_100eb9950,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_3;
    ppuVar5 = &local_70;
    local_a0 = param_1;
    local_70 = puVar3;
    ppuStack_68 = (undefined **)puVar4;
    _swift_getOpaqueTypeConformance
              (ppuVar5,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onOpenURL(perform:_(Foundation_URL)__>_())__>_some>>_100eab658
               ,1);
    lVar12 = local_c0;
    (extension_SwiftUI)::SwiftUI::View::_onContinueUserActivity(SVar13);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    _swift_release(puVar9);
    (**(code **)(local_b8 + 8))(lVar10 - extraout_x8,puVar8);
    lVar10 = local_98;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar9 = local_78;
    lVar1 = local_80;
    (**(code **)(local_80 + 0x10))(lVar10 - local_88,lVar12,local_78);
    ppuVar6 = &local_70;
    local_70 = puVar8;
    ppuStack_68 = ppuVar5;
    _swift_getOpaqueTypeConformance
              (ppuVar6,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onContinueUserActivity(_:_Swift_String,perform:_(__C_NSUserActivity)__>_())__>_some>>_100eab4f8
               ,1);
    AVar7 = SwiftUI::AnyView::_init(ppuVar6,puVar9,ppuVar6);
    puVar8 = &DAT_100fb28b0;
    FUN_1000f7830(&DAT_100fb28b0,&DAT_100c2fd38);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined8 *)(lVar10 - extraout_x8_00);
    *puVar11 = AVar7.unknown;
    _swift_storeEnumTagMultiPayload(puVar11);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar11);
    (**(code **)(lVar1 + 8))(lVar12,puVar9);
  }
  return;
}



/* Address: 0x10016af68 | FUN_10016af68 */

void FUN_10016af68(undefined8 param_1,long param_2)

{
  byte bVar1;
  URL UVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  URL UVar6;
  URL UVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ID self;
  long lVar11;
  String SVar12;
  String separator;
  undefined1 auStack_b0 [80];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar9 - extraout_x12;
  if (param_2 != 0) {
    (**(code **)(lVar11 + 0x10))(lVar8,param_1,UVar2.unknown);
    (**(code **)(lVar11 + 0x38))(lVar8,0,1,UVar2.unknown);
    self = *(ID *)(param_2 + _TtC7PostHog10PostHogSDK::setupLock);
    objc_stub::lock(self);
    bVar1 = *(byte *)(param_2 + _TtC7PostHog10PostHogSDK::enabled);
    objc_stub::unlock(self);
    if ((bVar1 & 1) == 0) {
      if (DAT_101057340 == '\x01') {
        pcVar5 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar5[0x18] = '\x02';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        pcVar5[0x10] = '\x01';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
        *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar5[0x20] = 'X';
        pcVar5[0x21] = '\0';
        pcVar5[0x22] = '\0';
        pcVar5[0x23] = '\0';
        pcVar5[0x24] = '\0';
        pcVar5[0x25] = '\0';
        pcVar5[0x26] = '\0';
        pcVar5[0x27] = -0x30;
        pcVar5[0x28] = '@';
        pcVar5[0x29] = '\x15';
        pcVar5[0x2a] = -0x27;
        pcVar5[0x2b] = '\0';
        pcVar5[0x2c] = '\x01';
        pcVar5[0x2d] = '\0';
        pcVar5[0x2e] = '\0';
        pcVar5[0x2f] = -0x80;
        SVar12.bridgeObject = (void *)0x20;
        SVar12.str = pcVar5;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar12,separator);
        _swift_release(pcVar5);
      }
    }
    else {
      FUN_10016b5e8(lVar8,lVar9);
      lVar4 = lVar9;
      (**(code **)(lVar11 + 0x30))(lVar9,1,UVar2.unknown);
      if ((int)lVar4 == 1) {
        FUN_1000fb4c4(lVar8,&DAT_100fae670,&DAT_100c2e0e8);
        lVar8 = lVar9;
      }
      else {
        (**(code **)(lVar11 + 0x20))(puVar10,lVar9,UVar2.unknown);
        UVar6.unknown = &DAT_100fae678;
        FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
        _swift_initStackObject();
        *(undefined8 *)(UVar6.unknown + 0x18) = 2;
        *(undefined8 *)(UVar6.unknown + 0x10) = 1;
        *(undefined8 *)(UVar6.unknown + 0x20) = 0x6c7275;
        *(undefined8 *)(UVar6.unknown + 0x28) = 0xe300000000000000;
        SVar12 = Foundation::URL::get_absoluteString(UVar6);
        *(undefined **)(UVar6.unknown + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
        *(String *)(UVar6.unknown + 0x30) = SVar12;
        UVar7.unknown = UVar6.unknown;
        FUN_1000f8154(UVar6.unknown);
        _swift_setDeallocating(UVar6.unknown);
        FUN_1000fb4c4(UVar6.unknown + 0x20,&DAT_100fae490,&DAT_100c2de60);
        FUN_1001432c4(0xd000000000000010,0x8000000100d92ba0,UVar7.unknown);
        _swift_bridgeObjectRelease(UVar7.unknown);
        (**(code **)(lVar11 + 8))(puVar10,UVar2.unknown);
      }
    }
    FUN_1000fb4c4(lVar8,&DAT_100fae670,&DAT_100c2e0e8);
  }
  return;
}



/* Address: 0x10016b268 | FUN_10016b268 */

void FUN_10016b268(_ViewListCountInputs param_1)

{
  (extension_SwiftUI)::SwiftUI::ViewModifier::__viewListCount(param_1);
  return;
}



/* Address: 0x10016b27c | FUN_10016b27c */

void FUN_10016b27c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10016abac(param_1,*unaff_x20);
  return;
}



/* Address: 0x10016b284 | FUN_10016b284 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010016b304 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_10016b284(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 == 0) && (DAT_100fb0a08 != -1)) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,param_2,param_3,&DAT_100eb9900,param_4);
  return 0;
}



/* Address: 0x10016b340 | FUN_10016b340 */

void FUN_10016b340(long param_1)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar3 = MVar2;
  FUN_10016b394();
  local_30 = uVar1;
  puStack_28 = MVar3.unknown;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_30);
  return;
}



/* Address: 0x10016b394 | FUN_10016b394 */

void FUN_10016b394(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb28a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2fce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2fce8,&DAT_100eb9900);
  DAT_100fb28a8 = pTVar1;
  return;
}



/* Address: 0x10016b3d4 | FUN_10016b3d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10016b3d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



/* Address: 0x10016b400 | FUN_10016b400 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10016b400(void)

{
  return 0;
}



/* Address: 0x10016b408 | FUN_10016b408 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10016b408(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



/* Address: 0x10016b440 | FUN_10016b440 */

void FUN_10016b440(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10016b44c | FUN_10016b44c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10016b44c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



/* Address: 0x10016b47c | FUN_10016b47c */

int FUN_10016b47c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10016b4d8 | FUN_10016b4d8 */

void FUN_10016b4d8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10016b528 | FUN_10016b528 */

undefined1  [16] FUN_10016b528(void)

{
  return ZEXT816(0x100eb9900);
}



/* Address: 0x10016b538 | FUN_10016b538 */

void FUN_10016b538(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance(param_1,&DAT_100ca5fd4,1);
  return;
}



/* Address: 0x10016b548 | FUN_10016b548 */

void FUN_10016b548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb28c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28b8;
  FUN_1000f8b08(&DAT_100fb28b8,&DAT_100c2fd40);
  puVar2 = PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8,puVar1)
  ;
  DAT_100fb28c0 = puVar2;
  return;
}



/* Address: 0x10016b598 | FUN_10016b598 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016b598(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10016b5bc | FUN_10016b5bc */

void FUN_10016b5bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10016af68(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10016b5c4 | FUN_10016b5c4 */

void FUN_10016b5c4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_10013dcd0();
  }
  return;
}



/* Address: 0x10016b5e8 | FUN_10016b5e8 */

undefined8 FUN_10016b5e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10016b638 | thunk_FUN_10016b63c */

void thunk_FUN_10016b63c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb28d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28e0;
  FUN_1000f8b08(&DAT_100fb28e0,&DAT_100c2fd58);
  puVar2 = puVar1;
  FUN_10016b548();
  puStack_30 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&puStack_30);
  DAT_100fb28d8 = puVar3;
  return;
}



/* Address: 0x10016b63c | FUN_10016b63c */

void FUN_10016b63c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb28d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28e0;
  FUN_1000f8b08(&DAT_100fb28e0,&DAT_100c2fd58);
  puVar2 = puVar1;
  FUN_10016b548();
  local_30 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb28d8 = puVar3;
  return;
}



/* Address: 0x10016b6b4 | thunk_FUN_10016b598 */

void thunk_FUN_10016b598(void)

{
  FUN_10016b598();
  return;
}



/* Address: 0x10016b6b8 | thunk_FUN_10016b3d4 */

void thunk_FUN_10016b3d4(void)

{
  FUN_10016b3d4();
  return;
}



/* Address: 0x10016b6bc | FUN_10016b6bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010016b75c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10016b6bc(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  String SVar2;
  
  pvVar1 = param_3;
  if (param_3 == (void *)0x0) {
    _swift_getDynamicType();
    SVar2 = Swift::__typeName(SUB81(param_2,0));
    pvVar1 = SVar2.bridgeObject;
  }
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,param_2,param_6,&DAT_100eb9a10,param_7);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(pvVar1);
  return;
}



/* Address: 0x10016b794 | FUN_10016b794 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010016b7c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10016b794(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,in_x4,&DAT_100eb9a10,in_x5);
  return;
}



/* Address: 0x10016b7d0 | FUN_10016b7d0 */

void FUN_10016b7d0(long param_1)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  undefined8 local_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar3 = MVar2;
  FUN_10016b824();
  local_30 = uVar1;
  puStack_28 = MVar3.unknown;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_30);
  return;
}



/* Address: 0x10016b824 | FUN_10016b824 */

void FUN_10016b824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb28e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2fd7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2fd7c,&DAT_100eb9a10);
  DAT_100fb28e8 = pTVar1;
  return;
}



/* Address: 0x10016b864 | FUN_10016b864 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10016b864(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return 0;
}



/* Address: 0x10016b894 | FUN_10016b894 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10016b894(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10016b8f4 | FUN_10016b8f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10016b8f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x10016b978 | FUN_10016b978 */

void FUN_10016b978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10016b98c | FUN_10016b98c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10016b98c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  return param_1;
}



/* Address: 0x10016b9e0 | FUN_10016b9e0 */

int FUN_10016b9e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10016ba28 | FUN_10016ba28 */

void FUN_10016ba28(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10016ba70 | FUN_10016ba70 */

undefined1  [16] FUN_10016ba70(void)

{
  return ZEXT816(0x100eb9a10);
}



/* Address: 0x10016ba80 | FUN_10016ba80 */

void FUN_10016ba80(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance(param_1,&DAT_100ca60c8,1);
  return;
}



/* Address: 0x10016ba90 | FUN_10016ba90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10016ba90(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    if ((param_1[4] == 0) && (DAT_100fb0a08 != -1)) {
      _swift_once(&DAT_100fb0a08,FUN_100139658);
    }
    FUN_1001432c4(*param_1,param_1[1],param_1[3]);
  }
  else {
    if ((param_1[4] == 0) && (DAT_100fb0a08 != -1)) {
      _swift_once(&DAT_100fb0a08,FUN_100139658);
    }
    FUN_100147d24(*param_1,param_1[1],param_1[3]);
  }
  return 0;
}



/* Address: 0x10016bb98 | FUN_10016bb98 */

void FUN_10016bb98(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  puVar4 = &DAT_100eb9a40;
  local_50 = uVar2;
  uStack_48 = uVar3;
  _swift_allocObject(&DAT_100eb9a40,0x38,7);
  uVar6 = *unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  puVar5 = &DAT_100fb28f0;
  FUN_1000f7830(&DAT_100fb28f0,&DAT_100c2fdd0);
  (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
  puVar5 = &DAT_100fb28f8;
  FUN_1000f7830(&DAT_100fb28f8,&DAT_100c2fdd8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = FUN_10016bcdc;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10000ca28(&local_60,auStack_70);
  FUN_1000f8cac(&local_50,auStack_70,&DAT_100fafde0,&DAT_100c2fde0);
  FUN_1000f8cac(&uStack_48,auStack_70,&DAT_100fb2900,&DAT_100c2fde8);
  return;
}



/* Address: 0x10016bca8 | FUN_10016bca8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016bca8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10016bcdc | FUN_10016bcdc */

void FUN_10016bcdc(void)

{
  long unaff_x20;
  
  FUN_10016ba90(unaff_x20 + 0x10);
  return;
}



/* Address: 0x10016bce4 | thunk_FUN_10016bce8 */

void thunk_FUN_10016bce8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb2908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28f8;
  FUN_1000f8b08(&DAT_100fb28f8,&DAT_100c2fdd8);
  puVar2 = puVar1;
  FUN_10016bd60();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb2908 = puVar3;
  return;
}



/* Address: 0x10016bce8 | FUN_10016bce8 */

void FUN_10016bce8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb2908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28f8;
  FUN_1000f8b08(&DAT_100fb28f8,&DAT_100c2fdd8);
  puVar2 = puVar1;
  FUN_10016bd60();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb2908 = puVar3;
  return;
}



/* Address: 0x10016bd60 | FUN_10016bd60 */

void FUN_10016bd60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb2910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb28f0;
  FUN_1000f8b08(&DAT_100fb28f0,&DAT_100c2fdd0);
  puVar2 = PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8,puVar1)
  ;
  DAT_100fb2910 = puVar2;
  return;
}



/* Address: 0x10016bdb0 | FUN_10016bdb0 */

void FUN_10016bdb0(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_18 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x58);
  return;
}



/* Address: 0x10016be00 | FUN_10016be00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016be00(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10016be2c | FUN_10016be2c */

void FUN_10016be2c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10016be38 | _TtC7PostHog20BoxedBeforeSendBlock::block */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog20BoxedBeforeSendBlock::block(ID param_1,SEL param_2)

{
  FUN_10016bf20(param_1,param_2,&block,thunk_FUN_100059c14,&DAT_100eb9bc8);
  return param_1;
}



/* Address: 0x10016be54 | FUN_10016be54 */

undefined1  [16] FUN_10016be54(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20BoxedBeforeSendBlock::block);
  _swift_retain(*(undefined8 *)
                 (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20BoxedBeforeSendBlock::block) + 8)
               );
  return auVar1;
}



/* Address: 0x10016be8c | thunk_FUN_100059c14 */

void thunk_FUN_100059c14(void)

{
  FUN_100059c14();
  return;
}



/* Address: 0x10016be90 | FUN_10016be90 */

void FUN_10016be90(undefined8 param_1,undefined8 param_2)

{
  FUN_10016bfe0(param_1,param_2,&_TtC7PostHog20BoxedBeforeSendBlock::block);
  return;
}



/* Address: 0x10016be9c | FUN_10016be9c */

void FUN_10016be9c(undefined8 param_1,undefined8 param_2)

{
  FUN_10016c048(param_1,param_2,&_TtC7PostHog20BoxedBeforeSendBlock::block);
  return;
}



/* Address: 0x10016bea8 | _TtC7PostHog20BoxedBeforeSendBlock::block: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog20BoxedBeforeSendBlock::block_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_10016c0c0();
  return param_1;
}



/* Address: 0x10016bec4 | _TtC7PostHog20BoxedBeforeSendBlock::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog20BoxedBeforeSendBlock::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.BoxedBeforeSendBlock",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10016bef0);
  (*pcVar1)();
}



/* Address: 0x10016bef0 | _TtC7PostHog20BoxedBeforeSendBlock::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog20BoxedBeforeSendBlock::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + block + 8));
  return;
}



/* Address: 0x10016bf04 | _TtC7PostHog23BoxedBeforeSendLogBlock::block */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog23BoxedBeforeSendLogBlock::block(ID param_1,SEL param_2)

{
  FUN_10016bf20(param_1,param_2,&block,thunk_FUN_100059c14,&DAT_100eb9b78);
  return param_1;
}


