/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf615c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.LocalizedStringKey.StringInterpolation */

void SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor
               (StringInterpolation *__return_storage_ptr__)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaac38)();
  return;
}



/* Address: 0x100bf6168 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LocalizedStringKey::init */

/* SwiftUI.LocalizedStringKey.init(stringLiteral: Swift.String) -> SwiftUI.LocalizedStringKey */

LocalizedStringKey SwiftUI::LocalizedStringKey::init(String stringLiteral)

{
  LocalizedStringKey LVar1;
  
  LVar1.unknown = stringLiteral.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaac40)(LVar1.unknown,stringLiteral.bridgeObject);
  return (LocalizedStringKey)LVar1.unknown;
}



/* Address: 0x100bf6174 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LocalizedStringKey::init */

/* SwiftUI.LocalizedStringKey.init(stringInterpolation:
   SwiftUI.LocalizedStringKey.StringInterpolation) -> SwiftUI.LocalizedStringKey */

LocalizedStringKey SwiftUI::LocalizedStringKey::init(StringInterpolation stringInterpolation)

{
  LocalizedStringKey LVar1;
  
  LVar1.unknown = stringInterpolation.message.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf617c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaac48)
            (LVar1.unknown,stringInterpolation.message.bridgeObject,stringInterpolation._16_8_,
             stringInterpolation.template.str,stringInterpolation.template.bridgeObject,
             stringInterpolation.interpolationCount);
  return (LocalizedStringKey)LVar1.unknown;
}



/* Address: 0x100bf6180 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RoundedCornerStyle::==_infix */

/* static SwiftUI.RoundedCornerStyle.== infix(SwiftUI.RoundedCornerStyle,
   SwiftUI.RoundedCornerStyle) -> Swift.Bool */

bool SwiftUI::RoundedCornerStyle::___infix
               (RoundedCornerStyle param_1,RoundedCornerStyle param_2,RoundedCornerStyle param_3,...
               )

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eaac58)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}



/* Address: 0x100bf618c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RoundedCornerStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.RoundedCornerStyle */

RoundedCornerStyle SwiftUI::RoundedCornerStyle::typeMetadataAccessor(void)

{
  RoundedCornerStyle in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaac68)();
  return (RoundedCornerStyle)in_w0.value;
}



/* Address: 0x100bf6198 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderedButtonStyle::init */

/* SwiftUI.BorderedButtonStyle.init() -> SwiftUI.BorderedButtonStyle */

BorderedButtonStyle SwiftUI::BorderedButtonStyle::init(void)

{
  BorderedButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf61a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaaca0)();
  return (BorderedButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf61a4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderedButtonStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.BorderedButtonStyle */

BorderedButtonStyle SwiftUI::BorderedButtonStyle::typeMetadataAccessor(void)

{
  BorderedButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf61ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaca8)();
  return (BorderedButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf61b0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::CheckboxToggleStyle::init */

/* SwiftUI.CheckboxToggleStyle.init() -> SwiftUI.CheckboxToggleStyle */

CheckboxToggleStyle SwiftUI::CheckboxToggleStyle::init(void)

{
  CheckboxToggleStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf61b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaacc0)();
  return (CheckboxToggleStyle)in_x0.unknown;
}



/* Address: 0x100bf61bc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::CheckboxToggleStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.CheckboxToggleStyle */

CheckboxToggleStyle SwiftUI::CheckboxToggleStyle::typeMetadataAccessor(void)

{
  CheckboxToggleStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf61c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaacc8)();
  return (CheckboxToggleStyle)in_x0.unknown;
}



/* Address: 0x100bf61c8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HorizontalAlignment::get_center */

/* static SwiftUI.HorizontalAlignment.center.getter : SwiftUI.HorizontalAlignment */

HorizontalAlignment SwiftUI::HorizontalAlignment::get_center(HorizontalAlignment param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf61d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_center_100eaacf0)();
  return (HorizontalAlignment)param_1.unknown;
}



/* Address: 0x100bf61d4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HorizontalAlignment::get_leading */

/* static SwiftUI.HorizontalAlignment.leading.getter : SwiftUI.HorizontalAlignment */

HorizontalAlignment SwiftUI::HorizontalAlignment::get_leading(HorizontalAlignment param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf61dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_leading_100eaacf8)();
  return (HorizontalAlignment)param_1.unknown;
}



/* Address: 0x100bf61e0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HorizontalAlignment::get_trailing */

/* static SwiftUI.HorizontalAlignment.trailing.getter : SwiftUI.HorizontalAlignment */

HorizontalAlignment SwiftUI::HorizontalAlignment::get_trailing(HorizontalAlignment param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf61e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_trailing_100eaad00)();
  return (HorizontalAlignment)param_1.unknown;
}



/* Address: 0x100bf61ec | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingController::set_sizingOptions */

/* dispatch thunk of SwiftUI.NSHostingController.sizingOptions.setter :
   SwiftUI.NSHostingSizingOptions */

void __thiscall
SwiftUI::NSHostingController::set_sizingOptions
          (NSHostingController *this,NSHostingSizingOptions param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf61f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_sizingOptions_100eaad08)();
  return;
}



/* Address: 0x100bf61f8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingController::$init */

/* SwiftUI.NSHostingController.init(coder: __C.NSCoder, rootView: A) ->
   SwiftUI.NSHostingController<A>? */

void __thiscall SwiftUI::NSHostingController::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaad10)();
  return;
}



/* Address: 0x100bf6204 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingController::$init */

/* SwiftUI.NSHostingController.init(rootView: A) -> SwiftUI.NSHostingController<A> */

void __thiscall SwiftUI::NSHostingController::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaad18)();
  return;
}



/* Address: 0x100bf6210 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$dismantleNSView */

/* static (extension in SwiftUI):SwiftUI.NSViewRepresentable.dismantleNSView(_: A.NSViewType,
   coordinator: A.Coordinator) -> () */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_dismantleNSView(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dismantleNSView_100eaad28)();
  return;
}



/* Address: 0x100bf621c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$sizeThatFits */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable.sizeThatFits(_: SwiftUI.ProposedViewSize,
   nsView: A.NSViewType, context: SwiftUI.NSViewRepresentableContext<A>) -> __C.CGSize? */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_sizeThatFits
               (ProposedViewSize param_1,NSViewRepresentableContext<undefined> nsView)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sizeThatFits_100eaad30)();
  return;
}



/* Address: 0x100bf6228 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeViewList */

/* static (extension in SwiftUI):SwiftUI.NSViewRepresentable._makeViewList(view:
   SwiftUI._GraphValue<A>, inputs: SwiftUI._ViewListInputs) -> SwiftUI._ViewListOutputs */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeViewList
          (_GraphValue<undefined> view,_ViewListInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeViewList_100eaad38)();
  return (_ViewListOutputs)view.unknown;
}



/* Address: 0x100bf6234 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_layoutOptions */

/* static (extension in SwiftUI):SwiftUI.NSViewRepresentable._layoutOptions(A.NSViewType) ->
   SwiftUI._PlatformViewRepresentableLayoutOptions */

_PlatformViewRepresentableLayoutOptions
(extension_SwiftUI)::SwiftUI::NSViewRepresentable::__layoutOptions(void)

{
  _PlatformViewRepresentableLayoutOptions in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf623c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___layoutOptions_100eaad40)();
  return (_PlatformViewRepresentableLayoutOptions)in_x0.unknown;
}



/* Address: 0x100bf6240 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_identifiedViewTree */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable._identifiedViewTree(in: A.NSViewType) ->
   SwiftUI._IdentifiedViewTree */

_IdentifiedViewTree (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__identifiedViewTree(void)

{
  _IdentifiedViewTree in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___identifiedViewTree_100eaad48)();
  return (_IdentifiedViewTree)in_w0.value;
}



/* Address: 0x100bf624c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_overrideLayoutTraits */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable._overrideLayoutTraits(_: inout
   SwiftUI._LayoutTraits, for: A.NSViewType) -> () */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__overrideLayoutTraits
               (_LayoutTraits param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overrideLayoutTraits_100eaad50)();
  return;
}



/* Address: 0x100bf6258 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$_overrideSizeThatFits */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable._overrideSizeThatFits(_: inout __C.CGSize, in:
   SwiftUI._ProposedSize, nsView: A.NSViewType) -> () */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::__overrideSizeThatFits
               (CGSize param_1,_ProposedSize in)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overrideSizeThatFits_100eaad58)();
  return;
}



/* Address: 0x100bf6264 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_modifyBridgedViewInputs */

/* static (extension in SwiftUI):SwiftUI.NSViewRepresentable._modifyBridgedViewInputs(inout
   SwiftUI._ViewInputs) -> () */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_modifyBridgedViewInputs
               (_ViewInputs param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf626c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__modifyBridgedViewInputs_100eaad60)();
  return;
}



/* Address: 0x100bf6270 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::get__invalidatesSizeOnConstraintChanges */

/* static (extension in
   SwiftUI):SwiftUI.NSViewRepresentable._invalidatesSizeOnConstraintChanges.getter : Swift.Bool */

bool (extension_SwiftUI)::SwiftUI::NSViewRepresentable::get__invalidatesSizeOnConstraintChanges
               (void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__invalidatesSizeOnConstraintChanges_100eaad68)();
  return (bool)in_w0;
}



/* Address: 0x100bf627c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::get_body */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable.body.getter : Swift.Never */

Never (extension_SwiftUI)::SwiftUI::NSViewRepresentable::get_body(void)

{
  Never in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_body_100eaad70)();
  return (Never)in_w0.value;
}



/* Address: 0x100bf6288 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeView */

/* static (extension in SwiftUI):SwiftUI.NSViewRepresentable._makeView(view: SwiftUI._GraphValue<A>,
   inputs: SwiftUI._ViewInputs) -> SwiftUI._ViewOutputs */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeView
          (_GraphValue<undefined> view,_ViewInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeView_100eaad78)();
  return (_ViewOutputs)view.unknown;
}



/* Address: 0x100bf6294 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::NSViewRepresentable::$makeCoordinator */

/* (extension in SwiftUI):SwiftUI.NSViewRepresentable< where A.Coordinator == ()>.makeCoordinator()
   -> () */

void (extension_SwiftUI)::SwiftUI::NSViewRepresentable::_makeCoordinator(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeCoordinator_100eaad80)();
  return;
}



/* Address: 0x100bf62a0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::SeparatorShapeStyle::init */

/* SwiftUI.SeparatorShapeStyle.init() -> SwiftUI.SeparatorShapeStyle */

SeparatorShapeStyle SwiftUI::SeparatorShapeStyle::init(void)

{
  SeparatorShapeStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaad88)();
  return (SeparatorShapeStyle)in_x0.unknown;
}



/* Address: 0x100bf62ac | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::SeparatorShapeStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.SeparatorShapeStyle */

SeparatorShapeStyle SwiftUI::SeparatorShapeStyle::typeMetadataAccessor(void)

{
  SeparatorShapeStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaad90)();
  return (SeparatorShapeStyle)in_x0.unknown;
}



/* Address: 0x100bf62b8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_ConditionalContent::Storage::typeMetadataAccessor */

/* type metadata accessor for SwiftUI._ConditionalContent.Storage */

Storage SwiftUI::_ConditionalContent::Storage::typeMetadataAccessor(void)

{
  Storage in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaadb0)();
  return (Storage)in_w0.value;
}



/* Address: 0x100bf62c4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::_ConditionalContent::$init */

/* (extension in SwiftUI):SwiftUI._ConditionalContent< where A: SwiftUI.View, B:
   SwiftUI.View>.init(storage: SwiftUI._ConditionalContent<A, B>.Storage) ->
   SwiftUI._ConditionalContent<A, B> */

_ConditionalContent<undefined,undefined>
(extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(Storage storage)

{
  _ConditionalContent<undefined,undefined> _Var1;
  
  _Var1.unknown = (undefined *)(ulong)(byte)storage.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf62cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaadc0)();
  return (_ConditionalContent<undefined,undefined>)_Var1.unknown;
}



/* Address: 0x100bf62d0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_ConditionalContent::typeMetadataAccessor */

/* type metadata accessor for SwiftUI._ConditionalContent */

_ConditionalContent SwiftUI::_ConditionalContent::typeMetadataAccessor(void)

{
  _ConditionalContent in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaadc8)();
  return (_ConditionalContent)in_x0.unknown;
}



/* Address: 0x100bf62dc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::MoveCommandDirection::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.MoveCommandDirection */

MoveCommandDirection SwiftUI::MoveCommandDirection::typeMetadataAccessor(void)

{
  MoveCommandDirection in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae00)();
  return (MoveCommandDirection)in_w0.value;
}



/* Address: 0x100bf62e8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NamedCoordinateSpace::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.NamedCoordinateSpace */

NamedCoordinateSpace SwiftUI::NamedCoordinateSpace::typeMetadataAccessor(void)

{
  NamedCoordinateSpace in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae10)();
  return (NamedCoordinateSpace)in_x0.unknown;
}



/* Address: 0x100bf62f4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderlessButtonStyle::init */

/* SwiftUI.BorderlessButtonStyle.init() -> SwiftUI.BorderlessButtonStyle */

BorderlessButtonStyle SwiftUI::BorderlessButtonStyle::init(void)

{
  BorderlessButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf62fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaae38)();
  return (BorderlessButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf6300 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderlessButtonStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.BorderlessButtonStyle */

BorderlessButtonStyle SwiftUI::BorderlessButtonStyle::typeMetadataAccessor(void)

{
  BorderlessButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae40)();
  return (BorderlessButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf630c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::PinnedScrollableViews::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.PinnedScrollableViews */

PinnedScrollableViews SwiftUI::PinnedScrollableViews::typeMetadataAccessor(void)

{
  PinnedScrollableViews in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae50)();
  return (PinnedScrollableViews)in_x0.unknown;
}



/* Address: 0x100bf6318 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RadioGroupPickerStyle::init */

/* SwiftUI.RadioGroupPickerStyle.init() -> SwiftUI.RadioGroupPickerStyle */

RadioGroupPickerStyle SwiftUI::RadioGroupPickerStyle::init(void)

{
  RadioGroupPickerStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaae68)();
  return (RadioGroupPickerStyle)in_x0.unknown;
}



/* Address: 0x100bf6324 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RadioGroupPickerStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.RadioGroupPickerStyle */

RadioGroupPickerStyle SwiftUI::RadioGroupPickerStyle::typeMetadataAccessor(void)

{
  RadioGroupPickerStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf632c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae70)();
  return (RadioGroupPickerStyle)in_x0.unknown;
}



/* Address: 0x100bf6330 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_TraitWritingModifier::typeMetadataAccessor */

/* type metadata accessor for SwiftUI._TraitWritingModifier */

_TraitWritingModifier SwiftUI::_TraitWritingModifier::typeMetadataAccessor(void)

{
  _TraitWritingModifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaae98)();
  return (_TraitWritingModifier)in_x0.unknown;
}



/* Address: 0x100bf633c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ContentMarginPlacement::get_scrollIndicators */

/* static SwiftUI.ContentMarginPlacement.scrollIndicators.getter : SwiftUI.ContentMarginPlacement */

ContentMarginPlacement
SwiftUI::ContentMarginPlacement::get_scrollIndicators(ContentMarginPlacement param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_scrollIndicators_100eaaec0)();
  return (ContentMarginPlacement)param_1.unknown;
}



/* Address: 0x100bf6348 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ContentMarginPlacement::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ContentMarginPlacement */

ContentMarginPlacement SwiftUI::ContentMarginPlacement::typeMetadataAccessor(void)

{
  ContentMarginPlacement in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaec8)();
  return (ContentMarginPlacement)in_x0.unknown;
}



/* Address: 0x100bf6354 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HierarchicalShapeStyle::get_primary */

/* static SwiftUI.HierarchicalShapeStyle.primary.getter : SwiftUI.HierarchicalShapeStyle */

HierarchicalShapeStyle SwiftUI::HierarchicalShapeStyle::get_primary(HierarchicalShapeStyle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf635c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_primary_100eaaed0)();
  return (HierarchicalShapeStyle)param_1.unknown;
}



/* Address: 0x100bf6360 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HierarchicalShapeStyle::get_secondary */

/* static SwiftUI.HierarchicalShapeStyle.secondary.getter : SwiftUI.HierarchicalShapeStyle */

HierarchicalShapeStyle
SwiftUI::HierarchicalShapeStyle::get_secondary(HierarchicalShapeStyle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_secondary_100eaaed8)();
  return (HierarchicalShapeStyle)param_1.unknown;
}



/* Address: 0x100bf636c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingSizingOptions::get_preferredContentSize */

/* static SwiftUI.NSHostingSizingOptions.preferredContentSize.getter :
   SwiftUI.NSHostingSizingOptions */

NSHostingSizingOptions
SwiftUI::NSHostingSizingOptions::get_preferredContentSize(NSHostingSizingOptions param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_preferredContentSize_100eaaf00)();
  return (NSHostingSizingOptions)param_1.unknown;
}



/* Address: 0x100bf6378 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingSizingOptions::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.NSHostingSizingOptions */

NSHostingSizingOptions SwiftUI::NSHostingSizingOptions::typeMetadataAccessor(void)

{
  NSHostingSizingOptions in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaf08)();
  return (NSHostingSizingOptions)in_x0.unknown;
}



/* Address: 0x100bf6384 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.UserInterfaceSizeClass */

UserInterfaceSizeClass SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor(void)

{
  UserInterfaceSizeClass in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaf18)();
  return (UserInterfaceSizeClass)in_w0.value;
}



/* Address: 0x100bf6390 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::CoordinateSpaceProtocol::$named */

/* static (extension in SwiftUI):SwiftUI.CoordinateSpaceProtocol< where A ==
   SwiftUI.NamedCoordinateSpace>.named<A where A1: Swift.Hashable>(A1) ->
   SwiftUI.NamedCoordinateSpace */

NamedCoordinateSpace
(extension_SwiftUI)::SwiftUI::CoordinateSpaceProtocol::_named(NamedCoordinateSpace param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__named_100eaaf40)();
  return (NamedCoordinateSpace)param_1.unknown;
}



/* Address: 0x100bf639c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LinearProgressViewStyle::init */

/* SwiftUI.LinearProgressViewStyle.init() -> SwiftUI.LinearProgressViewStyle */

LinearProgressViewStyle SwiftUI::LinearProgressViewStyle::init(void)

{
  LinearProgressViewStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaaf50)();
  return (LinearProgressViewStyle)in_x0.unknown;
}



/* Address: 0x100bf63a8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LinearProgressViewStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.LinearProgressViewStyle */

LinearProgressViewStyle SwiftUI::LinearProgressViewStyle::typeMetadataAccessor(void)

{
  LinearProgressViewStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaf58)();
  return (LinearProgressViewStyle)in_x0.unknown;
}



/* Address: 0x100bf63b4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonStyleConfiguration::Label::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ButtonStyleConfiguration.Label */

Label SwiftUI::ButtonStyleConfiguration::Label::typeMetadataAccessor(void)

{
  Label in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaaf98)();
  return (Label)in_x0.unknown;
}



/* Address: 0x100bf63c0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonStyleConfiguration::get_label */

/* SwiftUI.ButtonStyleConfiguration.label.getter : SwiftUI.ButtonStyleConfiguration.Label */

Label SwiftUI::ButtonStyleConfiguration::get_label(ButtonStyleConfiguration param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf63c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_label_100eaafa8)();
  return (Label)param_1.unknown;
}



/* Address: 0x100bf63cc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonStyleConfiguration::get_isPressed */

/* SwiftUI.ButtonStyleConfiguration.isPressed.getter : Swift.Bool */

bool SwiftUI::ButtonStyleConfiguration::get_isPressed(ButtonStyleConfiguration param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf63d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isPressed_100eaafb0)();
  return (bool)uVar1;
}



/* Address: 0x100bf63d8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnabledTextSelectability::init */

/* SwiftUI.EnabledTextSelectability.init() -> SwiftUI.EnabledTextSelectability */

EnabledTextSelectability SwiftUI::EnabledTextSelectability::init(void)

{
  EnabledTextSelectability in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaafc0)();
  return (EnabledTextSelectability)in_x0.unknown;
}



/* Address: 0x100bf63e4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnabledTextSelectability::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.EnabledTextSelectability */

EnabledTextSelectability SwiftUI::EnabledTextSelectability::typeMetadataAccessor(void)

{
  EnabledTextSelectability in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaafc8)();
  return (EnabledTextSelectability)in_x0.unknown;
}



/* Address: 0x100bf63f0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor */

/* type metadata accessor for SwiftUI._TagTraitWritingModifier */

_TagTraitWritingModifier SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor(void)

{
  _TagTraitWritingModifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab008)();
  return (_TagTraitWritingModifier)in_x0.unknown;
}



/* Address: 0x100bf63fc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderlessButtonMenuStyle::init */

/* SwiftUI.BorderlessButtonMenuStyle.init() -> SwiftUI.BorderlessButtonMenuStyle */

BorderlessButtonMenuStyle SwiftUI::BorderlessButtonMenuStyle::init(void)

{
  BorderlessButtonMenuStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab028)();
  return (BorderlessButtonMenuStyle)in_x0.unknown;
}



/* Address: 0x100bf6408 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderlessButtonMenuStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.BorderlessButtonMenuStyle */

BorderlessButtonMenuStyle SwiftUI::BorderlessButtonMenuStyle::typeMetadataAccessor(void)

{
  BorderlessButtonMenuStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab030)();
  return (BorderlessButtonMenuStyle)in_x0.unknown;
}



/* Address: 0x100bf6414 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GlassProminentButtonStyle::init */

/* SwiftUI.GlassProminentButtonStyle.init() -> SwiftUI.GlassProminentButtonStyle */

GlassProminentButtonStyle SwiftUI::GlassProminentButtonStyle::init(void)

{
  GlassProminentButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab048)();
  return (GlassProminentButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf6420 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GlassProminentButtonStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.GlassProminentButtonStyle */

GlassProminentButtonStyle SwiftUI::GlassProminentButtonStyle::typeMetadataAccessor(void)

{
  GlassProminentButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab050)();
  return (GlassProminentButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf642c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RoundedBorderTextFieldStyle::init */

/* SwiftUI.RoundedBorderTextFieldStyle.init() -> SwiftUI.RoundedBorderTextFieldStyle */

RoundedBorderTextFieldStyle SwiftUI::RoundedBorderTextFieldStyle::init(void)

{
  RoundedBorderTextFieldStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab0a0)();
  return (RoundedBorderTextFieldStyle)in_x0.unknown;
}



/* Address: 0x100bf6438 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.RoundedBorderTextFieldStyle */

RoundedBorderTextFieldStyle SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor(void)

{
  RoundedBorderTextFieldStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab0a8)();
  return (RoundedBorderTextFieldStyle)in_x0.unknown;
}



/* Address: 0x100bf6444 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderedProminentButtonStyle::init */

/* SwiftUI.BorderedProminentButtonStyle.init() -> SwiftUI.BorderedProminentButtonStyle */

BorderedProminentButtonStyle SwiftUI::BorderedProminentButtonStyle::init(void)

{
  BorderedProminentButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab0c0)();
  return (BorderedProminentButtonStyle)in_x0.unknown;
}



/* Address: 0x100bf6450 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.BorderedProminentButtonStyle */

BorderedProminentButtonStyle SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor(void)

{
  BorderedProminentButtonStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab0c8)();
  return (BorderedProminentButtonStyle)in_x0.unknown;
}


