/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf6a5c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::get_orange */

/* static SwiftUI.Color.orange.getter : SwiftUI.Color */

Color SwiftUI::Color::get_orange(Color param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_orange_100eab6e0)();
  return (Color)param_1.unknown;
}



/* Address: 0x100bf6a68 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::opacity */

/* SwiftUI.Color.opacity(Swift.Double) -> SwiftUI.Color */

Color SwiftUI::Color::opacity(double param_1,Color param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_opacity_100eab6e8)();
  return (Color)param_2.unknown;
}



/* Address: 0x100bf6a74 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::get_primary */

/* static SwiftUI.Color.primary.getter : SwiftUI.Color */

Color SwiftUI::Color::get_primary(Color param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_primary_100eab6f0)();
  return (Color)param_1.unknown;
}



/* Address: 0x100bf6a80 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::get_secondary */

/* static SwiftUI.Color.secondary.getter : SwiftUI.Color */

Color SwiftUI::Color::get_secondary(Color param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_secondary_100eab6f8)();
  return (Color)param_1.unknown;
}



/* Address: 0x100bf6a8c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::init */

/* SwiftUI.Color.init(_: SwiftUI.Color.RGBColorSpace, red: Swift.Double, green: Swift.Double, blue:
   Swift.Double, opacity: Swift.Double) -> SwiftUI.Color */

Color SwiftUI::Color::init(RGBColorSpace param_1,double red,double green,double blue,double opacity)

{
  Color CVar1;
  
  CVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf6a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab720)();
  return (Color)CVar1.unknown;
}



/* Address: 0x100bf6a98 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::init */

/* SwiftUI.Color.init(__C.NSColor) -> SwiftUI.Color */

Color SwiftUI::Color::init(NSColor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab728)();
  return (Color)param_1;
}



/* Address: 0x100bf6aa4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::init */

/* SwiftUI.Image.init(nsImage: __C.NSImage) -> SwiftUI.Image */

Image SwiftUI::Image::init(NSImage *nsImage)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab740)();
  return (Image)nsImage;
}



/* Address: 0x100bf6ab0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::init */

/* SwiftUI.Image.init(systemName: Swift.String) -> SwiftUI.Image */

Image SwiftUI::Image::init(String systemName)

{
  Image IVar1;
  
  IVar1.unknown = systemName.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf6ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab748)(IVar1.unknown,systemName.bridgeObject);
  return (Image)IVar1.unknown;
}



/* Address: 0x100bf6abc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::ResizingMode::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Image.ResizingMode */

ResizingMode SwiftUI::Image::ResizingMode::typeMetadataAccessor(void)

{
  ResizingMode in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab758)();
  return (ResizingMode)in_w0.value;
}



/* Address: 0x100bf6ac8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::$renderingMode */

/* SwiftUI.Image.renderingMode(SwiftUI.Image.TemplateRenderingMode?) -> SwiftUI.Image */

Image SwiftUI::Image::_renderingMode(Image param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__renderingMode_100eab760)();
  return (Image)param_1.unknown;
}



/* Address: 0x100bf6ad4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Image.TemplateRenderingMode */

TemplateRenderingMode SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor(void)

{
  TemplateRenderingMode in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab778)();
  return (TemplateRenderingMode)in_w0.value;
}



/* Address: 0x100bf6ae0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::Scale::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Image.Scale */

Scale SwiftUI::Image::Scale::typeMetadataAccessor(void)

{
  Scale in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab790)();
  return (Scale)in_w0.value;
}



/* Address: 0x100bf6aec | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::resizable */

/* SwiftUI.Image.resizable(capInsets: SwiftUI.EdgeInsets, resizingMode: SwiftUI.Image.ResizingMode)
   -> SwiftUI.Image */

Image SwiftUI::Image::resizable(EdgeInsets capInsets,ResizingMode resizingMode,Image param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resizable_100eab7a0)(capInsets.unknown,resizingMode.value);
  return (Image)capInsets.unknown;
}



/* Address: 0x100bf6af8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Image::$init */

/* SwiftUI.Image.init(_: Swift.String, bundle: __C.NSBundle?) -> SwiftUI.Image */

Image SwiftUI::Image::_init(String param_1)

{
  Image IVar1;
  
  IVar1.unknown = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf6b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab7c0)(IVar1.unknown,param_1.bridgeObject);
  return (Image)IVar1.unknown;
}



/* Address: 0x100bf6b04 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Label::$init */

/* SwiftUI.Label.init(title: () -> A, icon: () -> B) -> SwiftUI.Label<A, B> */

Label<undefined,undefined> SwiftUI::Label::_init(void)

{
  Label<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab7c8)();
  return (Label<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf6b10 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::sizeThatFits */

/* (extension in SwiftUI):SwiftUI.Shape.sizeThatFits(SwiftUI.ProposedViewSize) -> __C.CGSize */

CGSize (extension_SwiftUI)::SwiftUI::Shape::sizeThatFits(ProposedViewSize param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sizeThatFits_100eab7e0)();
  return (CGSize)param_1.unknown;
}



/* Address: 0x100bf6b1c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::_makeViewList */

/* static (extension in SwiftUI):SwiftUI.Shape._makeViewList(view: SwiftUI._GraphValue<A>, inputs:
   SwiftUI._ViewListInputs) -> SwiftUI._ViewListOutputs */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::Shape::_makeViewList
          (_GraphValue<undefined> view,_ViewListInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeViewList_100eab7e8)();
  return (_ViewListOutputs)view.unknown;
}



/* Address: 0x100bf6b28 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::get_layoutDirectionBehavior */

/* (extension in SwiftUI):SwiftUI.Shape.layoutDirectionBehavior.getter :
   SwiftUI.LayoutDirectionBehavior */

LayoutDirectionBehavior (extension_SwiftUI)::SwiftUI::Shape::get_layoutDirectionBehavior(void)

{
  LayoutDirectionBehavior in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_layoutDirectionBehavior_100eab7f0)();
  return (LayoutDirectionBehavior)in_w0.value;
}



/* Address: 0x100bf6b34 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::get_body */

/* (extension in SwiftUI):SwiftUI.Shape.body.getter : SwiftUI._ShapeView<A, SwiftUI.ForegroundStyle>
    */

_ShapeView<undefined,ForegroundStyle> (extension_SwiftUI)::SwiftUI::Shape::get_body(void)

{
  _ShapeView<undefined,ForegroundStyle> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_body_100eab7f8)();
  return (_ShapeView<undefined,ForegroundStyle>)in_x0.unknown;
}



/* Address: 0x100bf6b40 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::get_role */

/* static (extension in SwiftUI):SwiftUI.Shape.role.getter : SwiftUI.ShapeRole */

ShapeRole (extension_SwiftUI)::SwiftUI::Shape::get_role(void)

{
  ShapeRole in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_role_100eab800)();
  return (ShapeRole)in_w0.value;
}



/* Address: 0x100bf6b4c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::_makeView */

/* static (extension in SwiftUI):SwiftUI.Shape._makeView(view: SwiftUI._GraphValue<A>, inputs:
   SwiftUI._ViewInputs) -> SwiftUI._ViewOutputs */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::Shape::_makeView(_GraphValue<undefined> view,_ViewInputs inputs)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeView_100eab808)();
  return (_ViewOutputs)view.unknown;
}



/* Address: 0x100bf6b58 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::State::init */

/* SwiftUI.State.init(wrappedValue: A) -> SwiftUI.State<A> */

State<undefined> SwiftUI::State::init(State<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab810)();
  return (State<undefined>)param_1.unknown;
}



/* Address: 0x100bf6b64 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::State::get_wrappedValue */

/* SwiftUI.State.wrappedValue.getter : A */

void SwiftUI::State::get_wrappedValue(State param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_wrappedValue_100eab818)();
  return;
}



/* Address: 0x100bf6b70 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::State::set_wrappedValue */

/* SwiftUI.State.wrappedValue.setter : A */

void __thiscall SwiftUI::State::set_wrappedValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_wrappedValue_100eab820)();
  return;
}



/* Address: 0x100bf6b7c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::State::get_projectedValue */

/* SwiftUI.State.projectedValue.getter : SwiftUI.Binding<A> */

Binding<undefined> SwiftUI::State::get_projectedValue(State param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_projectedValue_100eab828)();
  return (Binding<undefined>)param_1.unknown;
}



/* Address: 0x100bf6b88 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::State::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.State */

State SwiftUI::State::typeMetadataAccessor(void)

{
  State in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab830)();
  return (State)in_x0.unknown;
}



/* Address: 0x100bf6b94 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::Anchor::Source::$get_bounds */

/* static (extension in SwiftUI):SwiftUI.Anchor.Source<A where A == __C.CGRect>.bounds.getter :
   SwiftUI.Anchor<__C.CGRect>.Source */

Source (extension_SwiftUI)::Anchor::Source::_get_bounds(Source param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_bounds_100eab840)();
  return (Source)param_1.unknown;
}



/* Address: 0x100bf6ba0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Button::$init */

/* SwiftUI.Button.init(role: SwiftUI.ButtonRole?, action: () -> (), label: () -> A) ->
   SwiftUI.Button<A> */

Button<undefined> SwiftUI::Button::_init(void)

{
  Button<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab850)();
  return (Button<undefined>)in_x0.unknown;
}



/* Address: 0x100bf6bac | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Button::$init */

/* SwiftUI.Button.init(action: () -> (), label: () -> A) -> SwiftUI.Button<A> */

Button<undefined> SwiftUI::Button::_init(void)

{
  Button<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab858)();
  return (Button<undefined>)in_x0.unknown;
}



/* Address: 0x100bf6bb8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Button::$init */

/* (extension in SwiftUI):SwiftUI.Button< where A == SwiftUI.Text>.init<A where A1:
   Swift.StringProtocol>(_: A1, role: SwiftUI.ButtonRole?, action: () -> ()) ->
   SwiftUI.Button<SwiftUI.Text> */

Button<Text> (extension_SwiftUI)::SwiftUI::Button::_init(Button<Text> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab860)();
  return (Button<Text>)param_1.unknown;
}



/* Address: 0x100bf6bc4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Button::$init */

/* (extension in SwiftUI):SwiftUI.Button< where A == SwiftUI.Text>.init(_:
   SwiftUI.LocalizedStringKey, action: () -> ()) -> SwiftUI.Button<SwiftUI.Text> */

Button<Text> (extension_SwiftUI)::SwiftUI::Button::_init(LocalizedStringKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab868)();
  return (Button<Text>)param_1.unknown;
}



/* Address: 0x100bf6bd0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Button::$init */

/* (extension in SwiftUI):SwiftUI.Button< where A == SwiftUI.Text>.init<A where A1:
   Swift.StringProtocol>(_: A1, action: () -> ()) -> SwiftUI.Button<SwiftUI.Text> */

Button<Text> (extension_SwiftUI)::SwiftUI::Button::_init(Button<Text> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab870)();
  return (Button<Text>)param_1.unknown;
}



/* Address: 0x100bf6bdc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Button::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Button */

Button SwiftUI::Button::typeMetadataAccessor(void)

{
  Button in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab878)();
  return (Button)in_x0.unknown;
}



/* Address: 0x100bf6be8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HStack::$init */

/* SwiftUI.HStack.init(alignment: SwiftUI.VerticalAlignment, spacing: CoreGraphics.CGFloat?,
   content: () -> A) -> SwiftUI.HStack<A> */

HStack<undefined> SwiftUI::HStack::_init(VerticalAlignment alignment)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab898)();
  return (HStack<undefined>)alignment.unknown;
}



/* Address: 0x100bf6bf4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::HStack::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.HStack */

HStack SwiftUI::HStack::typeMetadataAccessor(void)

{
  HStack in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab8a0)();
  return (HStack)in_x0.unknown;
}



/* Address: 0x100bf6c00 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::IDView::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.IDView */

IDView SwiftUI::IDView::typeMetadataAccessor(void)

{
  IDView in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab8b8)();
  return (IDView)in_x0.unknown;
}



/* Address: 0x100bf6c0c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Picker::$init */

/* SwiftUI.Picker.init(selection: SwiftUI.Binding<B>, label: A, content: () -> C) ->
   SwiftUI.Picker<A, B, C> */

Picker<undefined,undefined,undefined>
SwiftUI::Picker::_init(Picker<undefined,undefined,undefined> selection)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab8d0)();
  return (Picker<undefined,undefined,undefined>)selection.unknown;
}



/* Address: 0x100bf6c18 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Toggle::$init */

/* SwiftUI.Toggle.init(isOn: SwiftUI.Binding<Swift.Bool>, label: () -> A) -> SwiftUI.Toggle<A> */

Toggle<undefined> SwiftUI::Toggle::_init(Binding<bool> isOn)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab900)();
  return (Toggle<undefined>)isOn.unknown;
}



/* Address: 0x100bf6c24 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Toggle::$init */

/* (extension in SwiftUI):SwiftUI.Toggle< where A == SwiftUI.Text>.init<A where A1:
   Swift.StringProtocol>(_: A1, isOn: SwiftUI.Binding<Swift.Bool>) -> SwiftUI.Toggle<SwiftUI.Text>
    */

Toggle<Text> (extension_SwiftUI)::SwiftUI::Toggle::_init(Toggle<Text> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab908)();
  return (Toggle<Text>)param_1.unknown;
}



/* Address: 0x100bf6c30 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::VStack::$init */

/* SwiftUI.VStack.init(alignment: SwiftUI.HorizontalAlignment, spacing: CoreGraphics.CGFloat?,
   content: () -> A) -> SwiftUI.VStack<A> */

VStack<undefined> SwiftUI::VStack::_init(HorizontalAlignment alignment)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab920)();
  return (VStack<undefined>)alignment.unknown;
}



/* Address: 0x100bf6c3c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::VStack::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.VStack */

VStack SwiftUI::VStack::typeMetadataAccessor(void)

{
  VStack in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab928)();
  return (VStack)in_x0.unknown;
}



/* Address: 0x100bf6c48 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ZStack::$init */

/* SwiftUI.ZStack.init(alignment: SwiftUI.Alignment, content: () -> A) -> SwiftUI.ZStack<A> */

ZStack<undefined> SwiftUI::ZStack::_init(Alignment alignment)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab940)();
  return (ZStack<undefined>)alignment.unknown;
}



/* Address: 0x100bf6c54 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ZStack::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.ZStack */

ZStack SwiftUI::ZStack::typeMetadataAccessor(void)

{
  ZStack in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab948)();
  return (ZStack)in_x0.unknown;
}



/* Address: 0x100bf6c60 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::AnyView::$init */

/* SwiftUI.AnyView.init<A where A: SwiftUI.View>(A) -> SwiftUI.AnyView */

AnyView SwiftUI::AnyView::_init(AnyView param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab978)();
  return (AnyView)param_1.unknown;
}



/* Address: 0x100bf6c6c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::get_wrappedValue */

/* SwiftUI.Binding.wrappedValue.getter : A */

void SwiftUI::Binding::get_wrappedValue(Binding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_wrappedValue_100eab980)();
  return;
}



/* Address: 0x100bf6c78 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::set_wrappedValue */

/* SwiftUI.Binding.wrappedValue.setter : A */

void __thiscall SwiftUI::Binding::set_wrappedValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_wrappedValue_100eab988)();
  return;
}



/* Address: 0x100bf6c84 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::get_projectedValue */

/* SwiftUI.Binding.projectedValue.getter : SwiftUI.Binding<A> */

Binding<undefined> SwiftUI::Binding::get_projectedValue(Binding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_projectedValue_100eab990)();
  return (Binding<undefined>)param_1.unknown;
}



/* Address: 0x100bf6c90 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::init */

/* SwiftUI.Binding.init(get: () -> A, set: (A) -> ()) -> SwiftUI.Binding<A> */

Binding<undefined> SwiftUI::Binding::init(void)

{
  Binding<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab998)();
  return (Binding<undefined>)in_x0.unknown;
}



/* Address: 0x100bf6c9c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::constant */

/* static SwiftUI.Binding.constant(A) -> SwiftUI.Binding<A> */

Binding<undefined> SwiftUI::Binding::constant(Binding<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_constant_100eab9a0)();
  return (Binding<undefined>)param_1.unknown;
}



/* Address: 0x100bf6ca8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Binding::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Binding */

Binding SwiftUI::Binding::typeMetadataAccessor(void)

{
  Binding in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab9a8)();
  return (Binding)in_x0.unknown;
}



/* Address: 0x100bf6cb4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Capsule::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Capsule */

Capsule SwiftUI::Capsule::typeMetadataAccessor(void)

{
  Capsule in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab9b8)();
  return (Capsule)in_x0.unknown;
}



/* Address: 0x100bf6cc0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Divider::init */

/* SwiftUI.Divider.init() -> SwiftUI.Divider */

Divider SwiftUI::Divider::init(void)

{
  Divider in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eab9d0)();
  return (Divider)in_x0.unknown;
}



/* Address: 0x100bf6ccc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Divider::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.Divider */

Divider SwiftUI::Divider::typeMetadataAccessor(void)

{
  Divider in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eab9d8)();
  return (Divider)in_x0.unknown;
}



/* Address: 0x100bf6cd8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ForEach::$init */

/* (extension in SwiftUI):SwiftUI.ForEach< where C: SwiftUI.View>.init(_: A, id:
   Swift.KeyPath<A.Element, B>, content: (A.Element) -> C) -> SwiftUI.ForEach<A, B, C> */

ForEach<undefined,undefined,undefined>
(extension_SwiftUI)::SwiftUI::ForEach::_init(ForEach<undefined,undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab9e8)();
  return (ForEach<undefined,undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf6ce4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ForEach::$init */

/* (extension in SwiftUI):SwiftUI.ForEach< where B == A.Element.ID, C: SwiftUI.View, A.Element:
   Swift.Identifiable>.init(_: A, content: (A.Element) -> C) -> SwiftUI.ForEach<A, B, C> */

ForEach<undefined,undefined,undefined>
(extension_SwiftUI)::SwiftUI::ForEach::_init(ForEach<undefined,undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab9f0)();
  return (ForEach<undefined,undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf6cf0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ForEach::$init */

/* (extension in SwiftUI):SwiftUI.ForEach< where A == Swift.Range<Swift.Int>, B == Swift.Int, C:
   SwiftUI.View>.init(_: Swift.Range<Swift.Int>, content: (Swift.Int) -> C) ->
   SwiftUI.ForEach<Swift.Range<Swift.Int>, Swift.Int, C> */

ForEach<Range<__int64>,__int64,undefined>
(extension_SwiftUI)::SwiftUI::ForEach::_init(Range<__int64> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eab9f8)();
  return (ForEach<Range<__int64>,__int64,undefined>)param_1.unknown;
}



/* Address: 0x100bf6cfc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Gradient::Stop::init */

/* SwiftUI.Gradient.Stop.init(color: SwiftUI.Color, location: CoreGraphics.CGFloat) ->
   SwiftUI.Gradient.Stop */

Stop SwiftUI::Gradient::Stop::init(Color color,CGFloat location)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaba10)();
  return (Stop)color.unknown;
}



/* Address: 0x100bf6d08 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Gradient::init */

/* SwiftUI.Gradient.init(stops: [SwiftUI.Gradient.Stop]) -> SwiftUI.Gradient */

Gradient SwiftUI::Gradient::init(Gradient param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaba20)();
  return (Gradient)param_1.unknown;
}



/* Address: 0x100bf6d14 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Gradient::init */

/* SwiftUI.Gradient.init(colors: [SwiftUI.Color]) -> SwiftUI.Gradient */

Gradient SwiftUI::Gradient::init(Gradient param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaba28)();
  return (Gradient)param_1.unknown;
}



/* Address: 0x100bf6d20 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GridItem::Size::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.GridItem.Size */

Size SwiftUI::GridItem::Size::typeMetadataAccessor(void)

{
  Size in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaba38)();
  return (Size)in_w0.value;
}



/* Address: 0x100bf6d2c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GridItem::typeMetadataAccessor */

/* type metadata accessor for SwiftUI.GridItem */

GridItem SwiftUI::GridItem::typeMetadataAccessor(void)

{
  GridItem in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf6d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaba40)();
  return (GridItem)in_x0.unknown;
}



/* Address: 0x100bf6d38 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::GridItem::$init */

/* SwiftUI.GridItem.init(_: SwiftUI.GridItem.Size, spacing: CoreGraphics.CGFloat?, alignment:
   SwiftUI.Alignment?) -> SwiftUI.GridItem */

GridItem SwiftUI::GridItem::_init(Size param_1)

{
  GridItem GVar1;
  
  GVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf6d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaba48)();
  return (GridItem)GVar1.unknown;
}



/* Address: 0x100bf6d44 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Alignment::get_topLeading */

/* static SwiftUI.Alignment.topLeading.getter : SwiftUI.Alignment */

Alignment SwiftUI::Alignment::get_topLeading(Alignment param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_topLeading_100eaba50)();
  return (Alignment)param_1.unknown;
}



/* Address: 0x100bf6d50 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Alignment::get_topTrailing */

/* static SwiftUI.Alignment.topTrailing.getter : SwiftUI.Alignment */

Alignment SwiftUI::Alignment::get_topTrailing(Alignment param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf6d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_topTrailing_100eaba58)();
  return (Alignment)param_1.unknown;
}


