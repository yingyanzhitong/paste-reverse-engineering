/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003cb82c | FUN_1003cb82c */

undefined1  [16] FUN_1003cb82c(void)

{
  return ZEXT816(0x100ecf498);
}



/* Address: 0x1003cb83c | FUN_1003cb83c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003cb83c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  IVar3 = 0;
  FUN_1003cc2f0();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  objc_stub::FUN_100c0cba0(IVar3,0x3ff0000000000000);
  objc_stub::FUN_100c0c960(IVar3,0x4014000000000000);
  objc_stub::FUN_100c0cd80(IVar3,5);
  uStack_38 = unaff_x20[1];
  local_40 = *unaff_x20;
  puVar1 = (undefined8 *)
           (IVar3 + _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onChanged);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1003cc580;
  puVar1[1] = uStack_38;
  _swift_retain();
  FUN_100004550(uVar6,uVar2);
  local_48 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  puVar4 = &DAT_100ecf540;
  _swift_allocObject(&DAT_100ecf540,0x31,7);
  puVar4[0x30] = *(undefined1 *)(unaff_x20 + 4);
  uVar8 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar1 = (undefined8 *)
           (IVar3 + _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onMouseDown)
  ;
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  *puVar1 = FUN_1003cc5bc;
  puVar1[1] = puVar4;
  FUN_100011090(&local_40,auStack_58,&DAT_100fc3030,&DAT_100c451d8);
  FUN_1001ecb88(&local_48,auStack_58);
  _swift_retain(uVar2);
  FUN_100004550(uVar6,uVar7);
  puVar4 = &_OBJC_CLASS___NSClickGestureRecognizer;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  objc_stub::FUN_100bfd620(IVar3,IVar5);
  return IVar3;
}



/* Address: 0x1003cb990 | FUN_1003cb990 */

void FUN_1003cb990(ID param_1,long param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  uint extraout_w1;
  uint uVar4;
  long lVar5;
  ID local_80 [2];
  undefined1 local_70;
  Binding local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  lVar5 = *(long *)(param_2 + 0x10);
  IVar1 = objc_stub::doubleValue(param_1);
  uVar4 = extraout_w1;
  FUN_10035bb8c();
  if ((uVar4 & 0xff) != 1) {
    *(ID *)(lVar5 + 0x10) = IVar1;
    *(char *)(lVar5 + 0x18) = (char)uVar4;
    FUN_10035ad10();
    IVar2 = IVar1;
    FUN_10035ab5c();
    uStack_60 = *(undefined8 *)(param_2 + 0x20);
    local_68.unknown = *(undefined **)(param_2 + 0x18);
    local_70 = IVar2 == 0;
    local_58 = *(undefined8 *)(param_2 + 0x28);
    uStack_50 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined1 *)(param_2 + 0x38);
    puVar3 = &DAT_100fc3038;
    local_80[0] = IVar1;
    FUN_1000037f0(&DAT_100fc3038,&DAT_100c451e0);
    SwiftUI::Binding::set_wrappedValue(&local_68,local_80,puVar3);
    FUN_10035ba90();
    objc_stub::setDoubleValue_(param_1);
  }
  return;
}



/* Address: 0x1003cba58 | FUN_1003cba58 */

void FUN_1003cba58(undefined8 param_1,byte param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Binding BVar4;
  byte local_78 [8];
  Binding local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_58;
  
  puVar1 = *(undefined **)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined1 *)(param_3 + 0x20);
  local_70.unknown = puVar1;
  uStack_68 = uVar2;
  local_60 = uVar3;
  local_58 = puVar1;
  FUN_1001ecb88(&local_58,local_78);
  _swift_retain(uVar2);
  BVar4.unknown = &DAT_100fc2fd0;
  FUN_1000037f0(&DAT_100fc2fd0,&DAT_100c45030);
  SwiftUI::Binding::get_wrappedValue(BVar4);
  if ((param_2 & 1) != local_78[0]) {
    local_78[0] = param_2 & 1;
    local_70.unknown = puVar1;
    uStack_68 = uVar2;
    local_60 = uVar3;
    SwiftUI::Binding::set_wrappedValue(&local_70,local_78,BVar4.unknown);
  }
  FUN_1003cc5c4(&local_58);
  _swift_release(uVar2);
  if ((param_2 & 1) == 0) {
    FUN_1003cc9b8();
  }
  return;
}



/* Address: 0x1003cbb2c | FUN_1003cbb2c */

void FUN_1003cbb2c(void)

{
  FUN_1003cb83c();
  return;
}



/* Address: 0x1003cbb64 | FUN_1003cbb64 */

void FUN_1003cbb64(ID param_1)

{
  FUN_10035ba90();
  objc_stub::setDoubleValue_(param_1);
  return;
}



/* Address: 0x1003cbb90 | FUN_1003cbb90 */

void FUN_1003cbb90(_GraphValue<undefined> param_1,_ViewInputs param_2)

{
  FUN_1003cc540();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeView(param_1,param_2);
  return;
}



/* Address: 0x1003cbbe0 | FUN_1003cbbe0 */

void FUN_1003cbbe0(_GraphValue<undefined> param_1,_ViewListInputs param_2)

{
  FUN_1003cc540();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeViewList(param_1,param_2);
  return;
}



/* Address: 0x1003cbc30 | FUN_1003cbc30 */

void FUN_1003cbc30(void)

{
  code *pcVar1;
  
  FUN_1003cc540();
  (extension_SwiftUI)::SwiftUI::NSViewRepresentable::get_body();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cbc54);
  (*pcVar1)();
}



/* Address: 0x1003cbc54 | FUN_1003cbc54 */

ID FUN_1003cbc54(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_70 [24];
  long local_58;
  
  _swift_getObjectType();
  pcVar4 = *(code **)(unaff_x20 +
                     _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onMouseDown
                     );
  if (pcVar4 != (code *)0x0) {
    uVar2 = ((undefined8 *)
            (unaff_x20 +
            _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onMouseDown))[1];
    _swift_retain(uVar2);
    (*pcVar4)();
    FUN_100004550(pcVar4,uVar2);
  }
  pcVar4 = *(code **)(unaff_x20 +
                     _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onChanged);
  if (pcVar4 != (code *)0x0) {
    uVar2 = ((undefined8 *)
            (unaff_x20 +
            _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::onChanged))[1];
    _swift_retain(uVar2);
    (*pcVar4)();
    FUN_100004550(pcVar4,uVar2);
  }
  FUN_100011090(param_2,auStack_70,&DAT_100fbe6f0,&DAT_100c42750);
  if (local_58 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_70,local_58);
    lVar6 = *(long *)(local_58 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
    puVar5 = auStack_70 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar6 + 0x10))(puVar5);
    puVar3 = puVar5;
    Swift::__bridgeAnythingToObjectiveC(puVar5,local_58);
    (**(code **)(lVar6 + 8))(puVar5,local_58);
    FUN_100004594(auStack_70);
  }
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"sendAction:to:",param_1,puVar3
                             );
  _swift_unknownObjectRelease(puVar3);
  return IVar1;
}



/* Address: 0x1003cbde4 | _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::sendAction:to: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::sendAction_to_
               (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x40,UVar4.unknown,puVar3);
  }
  if (param_4 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_4);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  FUN_1003cbc54(param_3,&local_70);
  FUN_10030e660(&local_70);
  _swift_release(pMVar2);
  return (uint)param_3 & 1;
}



/* Address: 0x1003cbf08 | _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::mouseDown_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined8 uVar7;
  code *pcVar8;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x46,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"mouseDown:",param_3);
  pcVar8 = *(code **)(param_1 + onMouseDown);
  if (pcVar8 == (code *)0x0) {
    _swift_release(pMVar3);
  }
  else {
    uVar7 = ((undefined8 *)(param_1 + onMouseDown))[1];
    _swift_retain(uVar7);
    (*pcVar8)(param_1,0);
    FUN_100004550(pcVar8,uVar7);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x1003cc068 | _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x3c,UVar5.unknown,puVar4);
  }
  puVar4 = (undefined8 *)(param_1 + onChanged);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(param_1 + onMouseDown);
  *puVar4 = 0;
  puVar4[1] = 0;
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1003cc18c | _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x3c,UVar5.unknown,puVar4);
  }
  puVar4 = (undefined8 *)(param_1 + onChanged);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(param_1 + onMouseDown);
  *puVar4 = 0;
  puVar4[1] = 0;
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1003cc2b0 | _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCoreP33_49DA0E99A83949FF7C2EA86DA7A6272414CustomNSSlider::_cxx_destruct
               (ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onChanged),((undefined8 *)(param_1 + onChanged))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onMouseDown),((undefined8 *)(param_1 + onMouseDown))[1]);
  return;
}



/* Address: 0x1003cc2f0 | FUN_1003cc2f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003cc2f0(void)

{
  return ZEXT816(0x100f989f0);
}



/* Address: 0x1003cc310 | FUN_1003cc310 */

void FUN_1003cc310(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fc2fd8;
  FUN_100005c24(&DAT_100fc2fd8,&DAT_100c45060);
  puVar2 = puVar1;
  FUN_1003cb54c();
  puVar3 = puVar2;
  FUN_10030cce0();
  puVar4 = puVar3;
  FUN_1003cb58c();
  local_70 = &DAT_100ecf518;
  puStack_68 = PTR___type_metadata_for_Swift_String_100eac208;
  puStack_58 = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  puStack_38 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  local_60 = puVar1;
  local_50 = puVar2;
  puStack_48 = puVar3;
  local_40 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B,C_where_A1:_Swift_StringProtocol,B1:_SwiftUI_View,C1:_SwiftUI_View>(_:_A1,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_B1,message:_()__>_C1___>_some>>_100eab570
             ,1);
  return;
}



/* Address: 0x1003cc3a8 | FUN_1003cc3a8 */

void FUN_1003cc3a8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1003cc3d8 | FUN_1003cc3d8 */

undefined8 * FUN_1003cc3d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1003cc438 | FUN_1003cc438 */

undefined8 * FUN_1003cc438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x1003cc4bc | FUN_1003cc4bc */

void FUN_1003cc4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1003cc4d0 | FUN_1003cc4d0 */

undefined8 * FUN_1003cc4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_release(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x1003cc52c | FUN_1003cc52c */

undefined1  [16] FUN_1003cc52c(void)

{
  return ZEXT816(0x100ecf518);
}



/* Address: 0x1003cc53c | thunk_FUN_1003cb54c */

void thunk_FUN_1003cb54c(void)

{
  FUN_1003cb54c();
  return;
}



/* Address: 0x1003cc540 | FUN_1003cc540 */

void FUN_1003cc540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc3028 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c450f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c450f4,&DAT_100ecf518);
  DAT_100fc3028 = pTVar1;
  return;
}



/* Address: 0x1003cc580 | FUN_1003cc580 */

void FUN_1003cc580(void)

{
  FUN_1003cb990();
  return;
}



/* Address: 0x1003cc588 | FUN_1003cc588 */

void FUN_1003cc588(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003cc5bc | FUN_1003cc5bc */

void FUN_1003cc5bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1003cba58(param_1,param_2,unaff_x20 + 0x10);
  return;
}



/* Address: 0x1003cc5c4 | FUN_1003cc5c4 */

undefined8 FUN_1003cc5c4(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_SwiftUI_Transaction_100eaa660 + -8) + 8))();
  return param_1;
}



/* Address: 0x1003cc5f8 | FUN_1003cc5f8 */

void FUN_1003cc5f8(void)

{
  FUN_1003cb304();
  return;
}



/* Address: 0x1003cc600 | FUN_1003cc600 */

void FUN_1003cc600(void)

{
  FUN_1003cb350();
  return;
}



/* Address: 0x1003cc608 | FUN_1003cc608 */

void FUN_1003cc608(void)

{
  FUN_1003cc74c();
  return;
}



/* Address: 0x1003cc620 | FUN_1003cc620 */

undefined8 FUN_1003cc620(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1000884a8(param_2,param_1);
  return param_2;
}



/* Address: 0x1003cc65c | FUN_1003cc65c */

undefined1 FUN_1003cc65c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c452b0;
  _swift_getKeyPath(&DAT_100c452b0);
  puVar2 = &DAT_100c452d8;
  _swift_getKeyPath(&DAT_100c452d8);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x1003cc6cc | FUN_1003cc6cc */

void FUN_1003cc6cc(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003594c0(auStack_68);
  puVar1 = auStack_68;
  FUN_100004640(puVar1,local_50);
  FUN_10035ab5c();
  (**(code **)(lStack_48 + 0x28))();
  *param_1 = (long)puVar1;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003cc74c | FUN_1003cc74c */

void FUN_1003cc74c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(*(long *)(lStack_48 + 0x10) + 0x28))(FUN_1003ccab4,param_2,local_50);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003cc7cc | FUN_1003cc7cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cc7cc(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  FUN_100004640(auStack_68,local_50);
  lVar3 = *(long *)(lStack_48 + 8);
  (**(code **)(lVar3 + 0x28))();
  uVar2 = (uint)lVar3;
  FUN_1003293c4();
  uVar2 = uVar2 & 0xff;
  uVar1 = 0;
  if (uVar2 != 0xff && uVar2 != 1) {
    uVar1 = local_50;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar2 == 0xff || uVar2 == 1;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003cc870 | FUN_1003cc870 */

void FUN_1003cc870(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(uVar2);
  _swift_release(uVar1);
  lVar3 = _TtC9PasteCore24HistoryCapacityViewModel::_showReduceCapacityAlert;
  puVar4 = &DAT_100fbe488;
  FUN_1000037f0(&DAT_100fbe488,&DAT_100c40550);
  (**(code **)(*(long *)(puVar4 + -8) + 8))(unaff_x20 + lVar3,puVar4);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003cc8f4 | FUN_1003cc8f4 */

void FUN_1003cc8f4(void)

{
  FUN_1003cc8fc(0);
  return;
}



/* Address: 0x1003cc8fc | FUN_1003cc8fc */

void FUN_1003cc8fc(undefined8 param_1)

{
  if (DAT_100fc3088 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cadd0c);
  return;
}



/* Address: 0x1003cc934 | FUN_1003cc934 */

void FUN_1003cc934(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_30 = &DAT_100c45260;
  lVar1 = 0x13f;
  FUN_1003b2748();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1003cc9b8 | FUN_1003cc9b8 */

/* WARNING: Removing unreachable block (ram,0x0001003cca8c) */

void FUN_1003cc9b8(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  Published *unaff_x20;
  undefined1 local_31;
  
  pcVar2 = FUN_1003ccaa4;
  FUN_10035ab40();
  if ((ulong)pcVar2 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)pcVar2 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRelease();
  }
  else {
    _Var1.unknown = (undefined *)((ulong)pcVar2 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar2) {
      _Var1.unknown = pcVar2;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _swift_bridgeObjectRelease(pcVar2);
  }
  if (lVar3 == 0) {
    FUN_1002ff310(FUN_1003cc608);
  }
  else {
    _swift_getKeyPath(&DAT_100c452b0);
    _swift_getKeyPath(&DAT_100c452d8);
    local_31 = 1;
    _swift_retain();
    Combine::Published::_set_subscript(unaff_x20,&local_31);
  }
  return;
}



/* Address: 0x1003ccaa4 | FUN_1003ccaa4 */

void FUN_1003ccaa4(void)

{
  FUN_1003cc6cc();
  return;
}



/* Address: 0x1003ccaac | thunk_FUN_1003cae84 */

void thunk_FUN_1003cae84(void)

{
  FUN_1003cae84();
  return;
}



/* Address: 0x1003ccab0 | thunk_FUN_1003caef0 */

void thunk_FUN_1003caef0(void)

{
  FUN_1003caef0();
  return;
}



/* Address: 0x1003ccab4 | FUN_1003ccab4 */

void FUN_1003ccab4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10035ab5c();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1003ccadc | FUN_1003ccadc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ccadc(void)

{
  NSString *pNVar1;
  ID self;
  ID IVar2;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar1);
  IVar2 = NSFont::userFixedPitchFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4032000000000000);
  NSTextField::setFont_(self,IVar2);
  return self;
}



/* Address: 0x1003ccb64 | FUN_1003ccb64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003ccb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  NSString *pNVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_e0 [16];
  code *local_d0;
  undefined1 *puStack_c8;
  ID local_c0;
  undefined1 auStack_b0 [16];
  ID local_a0;
  
  _swift_getObjectType();
  lVar1 = _TtC11PasteCoreUI13ColorItemCell::colorLabel;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
  IVar4 = objc_stub::userFixedPitchFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4032000000000000);
  objc_stub::setFont_(IVar3,IVar4);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar5 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) =
       *(undefined8 *)(IVar3 + _TtC11PasteCoreUI13ColorItemCell::colorLabel);
  puStack_c8 = auStack_b0;
  local_d0 = FUN_1003cdf40;
  puVar6 = puVar5;
  local_c0 = IVar3;
  local_a0 = IVar3;
  FUN_1001fa150(puVar5,FUN_1003cdf48,auStack_e0);
  _swift_bridgeObjectRelease(puVar6);
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003ccd20 | FUN_1003ccd20 */

undefined * FUN_1003ccd20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  FUN_1001f9a0c(0,0,param_1,uVar1,&PTR_PTR_100ec00e8);
  puVar2 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar3 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar2 + 0x38) = puVar3;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar4 = puVar2;
  FUN_1001f8d60(puVar2);
  _swift_setDeallocating(puVar2);
  uVar1 = *(undefined8 *)(puVar2 + 0x10);
  puVar3 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar2 + 0x20,uVar1,puVar3);
  return puVar4;
}



/* Address: 0x1003cce28 | _TtC11PasteCoreUI13ColorItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI13ColorItemCell::initWithFrame_
          (_TtC11PasteCoreUI13ColorItemCell *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/ColorItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ColorItemCell.swift",0x1f,1,0xf,UVar4.unknown,puVar3);
  }
  FUN_1003ccb64();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1003ccf14 | FUN_1003ccf14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ccf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  NSString *pNVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  ID unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ID IVar17;
  undefined8 extraout_d0;
  String SVar18;
  char *local_c0;
  undefined4 local_b4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  puVar6 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)&local_c0 - extraout_x8);
  FUN_10031ebc8(puVar15);
  lVar7 = 0;
  FUN_100317b10();
  puVar11 = puVar15;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(puVar15,1,lVar7);
  if ((int)puVar11 == 1) {
    FUN_1003cd5f4(puVar15);
  }
  else {
    puVar11 = puVar15;
    _swift_getEnumCaseMultiPayload(puVar15,lVar7);
    if ((int)puVar11 == 3) {
      pcVar16 = (char *)*puVar15;
      pcVar8 = pcVar16;
      local_c0 = pcVar16;
      FUN_100312538(pcVar16);
      local_b4 = param_8;
      FUN_10000ec2c(0,&DAT_100fc3128,&PTR__OBJC_CLASS___NSAppearance_100f8da50);
      pcVar9 = pcVar8;
      FUN_10021a014(pcVar8);
      objc_stub::setAppearance_(unaff_x20,pcVar9);
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
                   **(ulong **)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView)) + 0x60))
                (pcVar8);
      lVar7 = _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize;
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isCompactContentFullsize,auStack_98
                         ,1,0);
      *(undefined1 *)(unaff_x20 + lVar7) = 1;
      lVar7 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
      puVar12 = auStack_b0;
      _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,puVar12
                         ,1,0);
      *(undefined1 *)(unaff_x20 + lVar7) = 0;
      IVar17 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI13ColorItemCell::colorLabel);
      FUN_100312538();
      FUN_100206b5c();
      SVar18.bridgeObject = puVar12;
      SVar18.str = pcVar16;
      SVar18 = Swift::String::uppercased(SVar18);
      _swift_bridgeObjectRelease(puVar12);
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      objc_stub::setText_(IVar17,pNVar10);
      puVar11 = (undefined8 *)0x0;
      FUN_1001fe15c();
      objc_stub::setTextColor_(IVar17,*puVar11);
      lVar14 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
      pcVar8 = local_c0;
      param_1 = extraout_d0;
      FUN_100312538();
      param_8 = local_b4;
      puVar11 = (undefined8 *)(lVar14 + _TtCC11PasteCoreUI8ItemCell11OverlayView::background);
      uVar13 = *puVar11;
      *puVar11 = pcVar8;
      uVar2 = *(undefined1 *)(puVar11 + 1);
      *(undefined1 *)(puVar11 + 1) = 1;
      FUN_1003cd63c(uVar13,uVar2);
      FUN_1003d5b84();
      cVar3 = *(char *)(unaff_x20 + lVar7);
      cVar1 = '\0';
      if (cVar3 != '\x02') {
        cVar1 = cVar3;
      }
      *(char *)(*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView) +
               _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar1;
      FUN_1003d41b4(param_4,param_5,param_6);
      uVar5 = (uint)param_4;
      goto LAB_1003cd260;
    }
    FUN_10009eff8(puVar15);
  }
  lVar7 = _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle;
  lVar14 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle,auStack_98,
                     0,0);
  cVar1 = '\0';
  if (*(char *)(unaff_x20 + lVar7) != '\x02') {
    cVar1 = *(char *)(unaff_x20 + lVar7);
  }
  *(char *)(lVar14 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar1;
  FUN_1003d41b4(param_4,param_5,param_6);
  uVar5 = (uint)param_4;
  lVar14 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView);
LAB_1003cd260:
  puVar11 = (undefined8 *)
            (lVar14 + _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar11 = param_7;
  *(char *)(puVar11 + 1) = (char)param_8;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar5 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(param_5,param_1);
  IVar17 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar17,param_2);
  IVar17 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar17,param_3);
  bVar4 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar4 & 1;
  return;
}



/* Address: 0x1003cd344 | FUN_1003cd344 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003cd344(void)

{
  return 0;
}



/* Address: 0x1003cd354 | _TtC11PasteCoreUI13ColorItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI13ColorItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003cd364 | FUN_1003cd364 */

ID FUN_1003cd364(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setImageAlignment_(self_00,5);
  objc_stub::setImageScaling_(self_00,3);
  return self_00;
}



/* Address: 0x1003cd3a8 | FUN_1003cd3a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003cd3a8(void)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  
  self = 0;
  FUN_1003cf964();
  self_00 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self_00);
  _swift_getObjCClassFromMetadata();
  IVar1 = objc_stub::labelWithAttributedString_(self,IVar1);
  FUN_1003ce150(IVar1);
  return IVar1;
}



/* Address: 0x1003cd410 | FUN_1003cd410 */

void FUN_1003cd410(void)

{
  FUN_1000f7a78(FUN_1001fe13c);
  return;
}



/* Address: 0x1003cd41c | FUN_1003cd41c */

void FUN_1003cd41c(void)

{
  FUN_1003cd5c4(FUN_1001f3ba0);
  return;
}



/* Address: 0x1003cd428 | FUN_1003cd428 */

void FUN_1003cd428(void)

{
  FUN_1000f7a78(FUN_1003d0b3c);
  return;
}



/* Address: 0x1003cd434 | FUN_1003cd434 */

void FUN_1003cd434(void)

{
  FUN_1000f7a78(FUN_100236364);
  return;
}



/* Address: 0x1003cd440 | FUN_1003cd440 */

void FUN_1003cd440(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1003cd45c | FUN_1003cd45c */

ID FUN_1003cd45c(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setImageScaling_(self_00,3);
  return self_00;
}



/* Address: 0x1003cd494 | FUN_1003cd494 */

ID FUN_1003cd494(void)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_1003d2f18();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar1,0x437a0000,0);
  return IVar1;
}



/* Address: 0x1003cd4d4 | FUN_1003cd4d4 */

ID FUN_1003cd4d4(void)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_1003d1364();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar1,0x447a0000,0);
  return IVar1;
}



/* Address: 0x1003cd518 | FUN_1003cd518 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cd518(void)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fd999999999999a,IVar1);
  IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  FUN_100209c28(0);
  _objc_allocWithZone();
  FUN_100209214(0,IVar1,IVar2);
  return;
}


