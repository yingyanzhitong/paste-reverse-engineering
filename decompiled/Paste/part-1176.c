/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf5b5c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolUDP::Options::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolUDP.Options */

Options * Network::NWProtocolUDP::Options::typeMetadataAccessor(void)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa2d0)();
  return in_x0;
}



/* Address: 0x100bf5b68 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolDefinition::==_infix */

/* static Network.NWProtocolDefinition.== infix(Network.NWProtocolDefinition,
   Network.NWProtocolDefinition) -> Swift.Bool */

bool __thiscall
Network::NWProtocolDefinition::___infix
          (NWProtocolDefinition *this,NWProtocolDefinition *param_1,NWProtocolDefinition *param_2)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eaa2e8)();
  return (bool)uVar1;
}



/* Address: 0x100bf5b74 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolDefinition::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolDefinition */

NWProtocolDefinition * Network::NWProtocolDefinition::typeMetadataAccessor(void)

{
  NWProtocolDefinition *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa2f0)();
  return in_x0;
}



/* Address: 0x100bf5b80 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPath::==_infix */

/* static Network.NWPath.== infix(Network.NWPath, Network.NWPath) -> Swift.Bool */

bool Network::NWPath::___infix(NWPath param_1,NWPath param_2,NWPath param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eaa310)();
  return (bool)uVar1;
}



/* Address: 0x100bf5b8c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPath::Status::==_infix */

/* static Network.NWPath.Status.== infix(Network.NWPath.Status, Network.NWPath.Status) -> Swift.Bool
    */

bool Network::NWPath::Status::___infix(Status param_1,Status param_2,Status param_3,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eaa318)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}



/* Address: 0x100bf5b98 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPath::Status::typeMetadataAccessor */

/* type metadata accessor for Network.NWPath.Status */

Status Network::NWPath::Status::typeMetadataAccessor(void)

{
  Status in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa328)();
  return (Status)in_w0.value;
}



/* Address: 0x100bf5ba4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPath::get_status */

/* Network.NWPath.status.getter : Network.NWPath.Status */

Status Network::NWPath::get_status(NWPath param_1)

{
  Status SVar1;
  
  SVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf5bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_status_100eaa330)();
  return (Status)SVar1.value;
}



/* Address: 0x100bf5bb0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPath::typeMetadataAccessor */

/* type metadata accessor for Network.NWPath */

NWPath Network::NWPath::typeMetadataAccessor(void)

{
  NWPath in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa338)();
  return (NWPath)in_x0.unknown;
}



/* Address: 0x100bf5bbc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWError::==_infix */

/* static Network.NWError.== infix(Network.NWError, Network.NWError) -> Swift.Bool */

bool Network::NWError::___infix(NWError param_1,NWError param_2,NWError param_3,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eaa348)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}



/* Address: 0x100bf5bc8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWError::typeMetadataAccessor */

/* type metadata accessor for Network.NWError */

NWError Network::NWError::typeMetadataAccessor(void)

{
  NWError in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa350)();
  return (NWError)in_w0.value;
}



/* Address: 0x100bf5bd4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Animatable::$modify_animatableData */

/* (extension in SwiftUI):SwiftUI.Animatable< where A.AnimatableData ==
   SwiftUI.EmptyAnimatableData>.animatableData.modify : SwiftUI.EmptyAnimatableData */

void __thiscall
(extension_SwiftUI)::SwiftUI::Animatable::_modify_animatableData
          (Animatable *this,EmptyAnimatableData param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__modify_animatableData_100eaa550)();
  return;
}



/* Address: 0x100bf5be0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Animatable::$_makeAnimatable */

/* static (extension in SwiftUI):SwiftUI.Animatable< where A.AnimatableData ==
   SwiftUI.EmptyAnimatableData>._makeAnimatable(value: inout SwiftUI._GraphValue<A>, inputs:
   SwiftUI._GraphInputs) -> () */

void (extension_SwiftUI)::SwiftUI::Animatable::__makeAnimatable
               (_GraphValue<undefined> value,_GraphInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___makeAnimatable_100eaa558)();
  return;
}



/* Address: 0x100bf5bec | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonRole::get_destructive */

/* static SwiftUI.ButtonRole.destructive.getter : SwiftUI.ButtonRole */

ButtonRole SwiftUI::ButtonRole::get_destructive(ButtonRole param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_destructive_100eaa560)();
  return (ButtonRole)param_1.unknown;
}



/* Address: 0x100bf5bf8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonRole::get_cancel */

/* static SwiftUI.ButtonRole.cancel.getter : SwiftUI.ButtonRole */

ButtonRole SwiftUI::ButtonRole::get_cancel(ButtonRole param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_cancel_100eaa568)();
  return (ButtonRole)param_1.unknown;
}



/* Address: 0x100bf5c04 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ButtonRole::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ButtonRole */

ButtonRole SwiftUI::ButtonRole::typeMetadataAccessor(void)

{
  ButtonRole in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa570)();
  return (ButtonRole)in_x0.unknown;
}



/* Address: 0x100bf5c10 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EdgeInsets::init */

/* SwiftUI.EdgeInsets.init(_all: CoreGraphics.CGFloat) -> SwiftUI.EdgeInsets */

EdgeInsets SwiftUI::EdgeInsets::init(CGFloat _all)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa580)();
  return (EdgeInsets)_all.unknown;
}



/* Address: 0x100bf5c1c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::FocusState::set_wrappedValue */

/* SwiftUI.FocusState.wrappedValue.setter : A */

void __thiscall SwiftUI::FocusState::set_wrappedValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_wrappedValue_100eaa588)();
  return;
}



/* Address: 0x100bf5c28 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::FocusState::$get_projectedValue */

/* SwiftUI.FocusState.projectedValue.getter : SwiftUI.FocusState<A>.Binding */

Binding SwiftUI::FocusState::_get_projectedValue(FocusState_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_projectedValue_100eaa590)();
  return (Binding)param_1.unknown;
}



/* Address: 0x100bf5c34 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::FocusState::$init */

/* SwiftUI.FocusState.init< where A == Swift.Bool>() -> SwiftUI.FocusState<Swift.Bool> */

FocusState<bool> SwiftUI::FocusState::_init(void)

{
  FocusState<bool> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa598)();
  return (FocusState<bool>)in_x0.unknown;
}



/* Address: 0x100bf5c40 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ScrollView::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ScrollView */

ScrollView SwiftUI::ScrollView::typeMetadataAccessor(void)

{
  double in_x0;
  undefined8 in_x1;
  ScrollView SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa5a8)();
  SVar1._8_8_ = in_x1;
  SVar1.lastScrollTimestamp = in_x0;
  return SVar1;
}



/* Address: 0x100bf5c4c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ScrollView::$init */

/* SwiftUI.ScrollView.init(_: SwiftUI.Axis.Set, showsIndicators: Swift.Bool, content: () -> A) ->
   SwiftUI.ScrollView<A> */

ScrollView<undefined> SwiftUI::ScrollView::_init(Set param_1,bool showsIndicators)

{
  ulong uVar1;
  ScrollView<undefined> SVar2;
  
  uVar1 = (ulong)showsIndicators;
                    /* WARNING: Could not recover jumptable at 0x000100bf5c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa5b8)();
  SVar2._8_8_ = uVar1;
  SVar2.lastScrollTimestamp = (double)param_1.unknown;
  return SVar2;
}



/* Address: 0x100bf5c58 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ColorScheme::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ColorScheme */

ColorScheme SwiftUI::ColorScheme::typeMetadataAccessor(void)

{
  ColorScheme in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa5e8)();
  return (ColorScheme)in_w0.value;
}



/* Address: 0x100bf5c64 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ControlSize::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ControlSize */

ControlSize SwiftUI::ControlSize::typeMetadataAccessor(void)

{
  ControlSize in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa618)();
  return (ControlSize)in_w0.value;
}



/* Address: 0x100bf5c70 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Environment::Content::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Environment.Content */

Content SwiftUI::Environment::Content::typeMetadataAccessor(void)

{
  Content in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa628)();
  return (Content)in_w0.value;
}



/* Address: 0x100bf5c7c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::StateObject::get_wrappedValue */

/* SwiftUI.StateObject.wrappedValue.getter : A */

void SwiftUI::StateObject::get_wrappedValue(StateObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_wrappedValue_100eaa640)();
  return;
}



/* Address: 0x100bf5c88 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::StateObject::$get_projectedValue */

/* SwiftUI.StateObject.projectedValue.getter : SwiftUI.ObservedObject<A>.Wrapper */

Wrapper SwiftUI::StateObject::_get_projectedValue(StateObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_projectedValue_100eaa648)();
  return (Wrapper)param_1.unknown;
}



/* Address: 0x100bf5c94 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::StrokeStyle::init */

/* SwiftUI.StrokeStyle.init(lineWidth: CoreGraphics.CGFloat, lineCap: __C.CGLineCap, lineJoin:
   __C.CGLineJoin, miterLimit: CoreGraphics.CGFloat, dash: [CoreGraphics.CGFloat], dashPhase:
   CoreGraphics.CGFloat) -> SwiftUI.StrokeStyle */

StrokeStyle SwiftUI::StrokeStyle::init(StrokeStyle lineWidth)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa658)();
  return (StrokeStyle)lineWidth.unknown;
}



/* Address: 0x100bf5ca0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ProgressView::$init */

/* SwiftUI.ProgressView.init<A where A == SwiftUI.EmptyView, B == SwiftUI.EmptyView, A1:
   Swift.BinaryFloatingPoint>(value: A1?, total: A1) -> SwiftUI.ProgressView<SwiftUI.EmptyView,
   SwiftUI.EmptyView> */

ProgressView<EmptyView,EmptyView>
SwiftUI::ProgressView::_init(ProgressView<EmptyView,EmptyView> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa688)();
  return (ProgressView<EmptyView,EmptyView>)param_1.unknown;
}



/* Address: 0x100bf5cac | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ProgressView::$init */

/* (extension in SwiftUI):SwiftUI.ProgressView< where B == SwiftUI.EmptyView>.init< where A ==
   SwiftUI.EmptyView>() -> SwiftUI.ProgressView<SwiftUI.EmptyView, SwiftUI.EmptyView> */

ProgressView<EmptyView,EmptyView> (extension_SwiftUI)::SwiftUI::ProgressView::_init(void)

{
  ProgressView<EmptyView,EmptyView> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa690)();
  return (ProgressView<EmptyView,EmptyView>)in_x0.unknown;
}



/* Address: 0x100bf5cb8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::VerticalEdge::Set::get_all */

/* static SwiftUI.VerticalEdge.Set.all.getter : SwiftUI.VerticalEdge.Set */

Set SwiftUI::VerticalEdge::Set::get_all(Set param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_all_100eaa6a8)();
  return (Set)param_1.unknown;
}



/* Address: 0x100bf5cc4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::_makeView */

/* static (extension in SwiftUI):SwiftUI.ViewModifier._makeView(modifier: SwiftUI._GraphValue<A>,
   inputs: SwiftUI._ViewInputs, body: (SwiftUI._Graph, SwiftUI._ViewInputs) -> SwiftUI._ViewOutputs)
   -> SwiftUI._ViewOutputs */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::ViewModifier::_makeView
          (_GraphValue<undefined> modifier,_ViewInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeView_100eaa6b0)();
  return (_ViewOutputs)modifier.unknown;
}



/* Address: 0x100bf5cd0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::_makeViewList */

/* static (extension in SwiftUI):SwiftUI.ViewModifier._makeViewList(modifier:
   SwiftUI._GraphValue<A>, inputs: SwiftUI._ViewListInputs, body: (SwiftUI._Graph,
   SwiftUI._ViewListInputs) -> SwiftUI._ViewListOutputs) -> SwiftUI._ViewListOutputs */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::ViewModifier::_makeViewList
          (_GraphValue<undefined> modifier,_ViewListInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeViewList_100eaa6b8)();
  return (_ViewListOutputs)modifier.unknown;
}



/* Address: 0x100bf5cdc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::$_viewListCount */

/* static (extension in SwiftUI):SwiftUI.ViewModifier._viewListCount(inputs:
   SwiftUI._ViewListCountInputs, body: (SwiftUI._ViewListCountInputs) -> Swift.Int?) -> Swift.Int?
    */

void (extension_SwiftUI)::SwiftUI::ViewModifier::__viewListCount(_ViewListCountInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___viewListCount_100eaa6c0)();
  return;
}



/* Address: 0x100bf5ce8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_FrameLayout::$init */

/* SwiftUI._FrameLayout.init(width: CoreGraphics.CGFloat?, height: CoreGraphics.CGFloat?, alignment:
   SwiftUI.Alignment) -> SwiftUI._FrameLayout */

_FrameLayout SwiftUI::_FrameLayout::_init(Alignment width)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa6c8)();
  return (_FrameLayout)width.unknown;
}



/* Address: 0x100bf5cf4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::AnyTransition::asymmetric */

/* static SwiftUI.AnyTransition.asymmetric(insertion: SwiftUI.AnyTransition, removal:
   SwiftUI.AnyTransition) -> SwiftUI.AnyTransition */

AnyTransition
SwiftUI::AnyTransition::asymmetric
          (AnyTransition insertion,AnyTransition removal,AnyTransition param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_asymmetric_100eaa6f8)();
  return (AnyTransition)insertion.unknown;
}



/* Address: 0x100bf5d00 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::AnyTransition::move */

/* static SwiftUI.AnyTransition.move(edge: SwiftUI.Edge) -> SwiftUI.AnyTransition */

AnyTransition SwiftUI::AnyTransition::move(Edge edge,AnyTransition param_2)

{
  AnyTransition AVar1;
  
  AVar1.unknown = (undefined *)(ulong)(byte)edge.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf5d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_move_100eaa700)();
  return (AnyTransition)AVar1.unknown;
}



/* Address: 0x100bf5d0c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::AnyTransition::$init */

/* SwiftUI.AnyTransition.init<A where A: SwiftUI.Transition>(A) -> SwiftUI.AnyTransition */

AnyTransition SwiftUI::AnyTransition::_init(AnyTransition param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa708)();
  return (AnyTransition)param_1.unknown;
}



/* Address: 0x100bf5d18 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::DismissAction::callAsFunction */

/* SwiftUI.DismissAction.callAsFunction() -> () */

void SwiftUI::DismissAction::callAsFunction(DismissAction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_callAsFunction_100eaa710)();
  return;
}



/* Address: 0x100bf5d24 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::DismissAction::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.DismissAction */

DismissAction SwiftUI::DismissAction::typeMetadataAccessor(void)

{
  DismissAction in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa718)();
  return (DismissAction)in_x0.unknown;
}



/* Address: 0x100bf5d30 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GeometryProxy::get_size */

/* SwiftUI.GeometryProxy.size.getter : __C.CGSize */

CGSize SwiftUI::GeometryProxy::get_size(GeometryProxy param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_size_100eaa728)();
  return (CGSize)param_1.unknown;
}



/* Address: 0x100bf5d3c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GeometryProxy::$frame */

/* SwiftUI.GeometryProxy.frame<A where A: SwiftUI.CoordinateSpaceProtocol>(in: A) -> __C.CGRect */

CGRect SwiftUI::GeometryProxy::_frame(CGRect param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__frame_100eaa730)();
  return (CGRect)param_1.unknown;
}



/* Address: 0x100bf5d48 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GeometryProxy::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.GeometryProxy */

GeometryProxy SwiftUI::GeometryProxy::typeMetadataAccessor(void)

{
  GeometryProxy in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa738)();
  return (GeometryProxy)in_x0.unknown;
}



/* Address: 0x100bf5d54 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GeometryProxy::$get_subscript */

/* SwiftUI.GeometryProxy.subscript.getter : <A>(SwiftUI.Anchor<A>) -> A */

void SwiftUI::GeometryProxy::_get_subscript(Anchor<undefined> param_1,GeometryProxy param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100eaa748)();
  return;
}



/* Address: 0x100bf5d60 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::KeyEquivalent::get_character */

/* SwiftUI.KeyEquivalent.character.getter : Swift.Character */

Character SwiftUI::KeyEquivalent::get_character(KeyEquivalent param_1)

{
  void *in_x1;
  Character CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_character_100eaa750)();
  CVar1.bridgeObject = in_x1;
  CVar1.str = param_1.unknown;
  return CVar1;
}



/* Address: 0x100bf5d6c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::KeyEquivalent::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.KeyEquivalent */

KeyEquivalent SwiftUI::KeyEquivalent::typeMetadataAccessor(void)

{
  KeyEquivalent in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa758)();
  return (KeyEquivalent)in_x0.unknown;
}



/* Address: 0x100bf5d78 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingView::$init */

/* SwiftUI.NSHostingView.init(rootView: A) -> SwiftUI.NSHostingView<A> */

void __thiscall SwiftUI::NSHostingView::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa768)();
  return;
}



/* Address: 0x100bf5d84 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingView::$init */

/* SwiftUI.NSHostingView.init(coder: __C.NSCoder, rootView: A) -> SwiftUI.NSHostingView<A>? */

void __thiscall SwiftUI::NSHostingView::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaa770)();
  return;
}



/* Address: 0x100bf5d90 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::PreferenceKey::get__isReadableByHost */

/* static (extension in SwiftUI):SwiftUI.PreferenceKey._isReadableByHost.getter : Swift.Bool */

bool (extension_SwiftUI)::SwiftUI::PreferenceKey::get__isReadableByHost(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__isReadableByHost_100eaa780)();
  return (bool)in_w0;
}



/* Address: 0x100bf5d9c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::PreferenceKey::get__includesRemovedValues */

/* static (extension in SwiftUI):SwiftUI.PreferenceKey._includesRemovedValues.getter : Swift.Bool */

bool (extension_SwiftUI)::SwiftUI::PreferenceKey::get__includesRemovedValues(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__includesRemovedValues_100eaa788)();
  return (bool)in_w0;
}



/* Address: 0x100bf5da8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::_TaskModifier::typeMetadataAccessor */

/* type metadata accessor for SwiftUI._TaskModifier */

_TaskModifier SwiftUI::_TaskModifier::typeMetadataAccessor(void)

{
  _TaskModifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa7d0)();
  return (_TaskModifier)in_x0.unknown;
}



/* Address: 0x100bf5db4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::EnvironmentKey::$_valuesEqual */

/* static (extension in SwiftUI):SwiftUI.EnvironmentKey._valuesEqual(A.Value, A.Value) -> Swift.Bool
    */

bool (extension_SwiftUI)::SwiftUI::EnvironmentKey::__valuesEqual(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___valuesEqual_100eaa7f8)();
  return (bool)in_w0;
}



/* Address: 0x100bf5dc0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::get_shift */

/* static SwiftUI.EventModifiers.shift.getter : SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::get_shift(EventModifiers param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_shift_100eaa800)();
  return (EventModifiers)param_1.unknown;
}



/* Address: 0x100bf5dcc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::get_option */

/* static SwiftUI.EventModifiers.option.getter : SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::get_option(EventModifiers param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_option_100eaa808)();
  return (EventModifiers)param_1.unknown;
}



/* Address: 0x100bf5dd8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::get_command */

/* static SwiftUI.EventModifiers.command.getter : SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::get_command(EventModifiers param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_command_100eaa810)();
  return (EventModifiers)param_1.unknown;
}



/* Address: 0x100bf5de4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::get_control */

/* static SwiftUI.EventModifiers.control.getter : SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::get_control(EventModifiers param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_control_100eaa818)();
  return (EventModifiers)param_1.unknown;
}



/* Address: 0x100bf5df0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::get_capsLock */

/* static SwiftUI.EventModifiers.capsLock.getter : SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::get_capsLock(EventModifiers param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_capsLock_100eaa820)();
  return (EventModifiers)param_1.unknown;
}



/* Address: 0x100bf5dfc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EventModifiers::init */

/* SwiftUI.EventModifiers.init(rawValue: Swift.Int) -> SwiftUI.EventModifiers */

EventModifiers SwiftUI::EventModifiers::init(__int64 rawValue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa828)();
  return (EventModifiers)rawValue;
}



/* Address: 0x100bf5e08 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::LinearGradient::init */

/* SwiftUI.LinearGradient.init(gradient: SwiftUI.Gradient, startPoint: SwiftUI.UnitPoint, endPoint:
   SwiftUI.UnitPoint) -> SwiftUI.LinearGradient */

LinearGradient
SwiftUI::LinearGradient::init(Gradient gradient,UnitPoint startPoint,UnitPoint endPoint)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa848)();
  return (LinearGradient)gradient.unknown;
}



/* Address: 0x100bf5e14 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ObservedObject::init */

/* SwiftUI.ObservedObject.init(wrappedValue: A) -> SwiftUI.ObservedObject<A> */

ObservedObject<undefined> SwiftUI::ObservedObject::init(ObservedObject<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa858)();
  return (ObservedObject<undefined>)param_1.unknown;
}



/* Address: 0x100bf5e20 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ObservedObject::$get_projectedValue */

/* SwiftUI.ObservedObject.projectedValue.getter : SwiftUI.ObservedObject<A>.Wrapper */

Wrapper SwiftUI::ObservedObject::_get_projectedValue(ObservedObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_projectedValue_100eaa860)();
  return (Wrapper)param_1.unknown;
}



/* Address: 0x100bf5e2c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ObservedObject::Wrapper::$get_subscript */

/* SwiftUI.ObservedObject.Wrapper.subscript.getter : <A>(dynamicMember:
   Swift.ReferenceWritableKeyPath<A, A1>) -> SwiftUI.Binding<A1> */

Binding<undefined> SwiftUI::ObservedObject::Wrapper::_get_subscript(Wrapper dynamicMember)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100eaa868)();
  return (Binding<undefined>)dynamicMember.unknown;
}



/* Address: 0x100bf5e38 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::PlainListStyle::init */

/* SwiftUI.PlainListStyle.init() -> SwiftUI.PlainListStyle */

PlainListStyle SwiftUI::PlainListStyle::init(void)

{
  PlainListStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa880)();
  return (PlainListStyle)in_x0.unknown;
}



/* Address: 0x100bf5e44 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::PlainListStyle::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.PlainListStyle */

PlainListStyle SwiftUI::PlainListStyle::typeMetadataAccessor(void)

{
  PlainListStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa888)();
  return (PlainListStyle)in_x0.unknown;
}



/* Address: 0x100bf5e50 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::PushTransition::init */

/* SwiftUI.PushTransition.init(edge: SwiftUI.Edge) -> SwiftUI.PushTransition */

PushTransition SwiftUI::PushTransition::init(Edge edge)

{
  PushTransition PVar1;
  
  PVar1.unknown = (undefined *)(ulong)(byte)edge.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa898)();
  return (PushTransition)PVar1.unknown;
}


