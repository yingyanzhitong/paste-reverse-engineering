/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf3d5c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::IntentResult::$result */

/* static (extension in AppIntents):AppIntents.IntentResult.result<A where A ==
   AppIntents.IntentResultContainer<A1, Swift.Never, Swift.Never, Swift.Never>, A1:
   AppIntents._IntentValue>(value: A1) -> AppIntents.IntentResultContainer<A1, Swift.Never,
   Swift.Never, Swift.Never> */

IntentResultContainer<undefined,Never,Never,Never>
(extension_AppIntents)::AppIntents::IntentResult::_result
          (IntentResultContainer<undefined,Never,Never,Never> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__result_100ea8cf8)();
  return (IntentResultContainer<undefined,Never,Never,Never>)param_1.unknown;
}



/* Address: 0x100bf3d68 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::IntentParameter::get_wrappedValue */

/* AppIntents.IntentParameter.wrappedValue.getter : A */

void __thiscall
AppIntents::IntentParameter::get_wrappedValue(IntentParameter *this,IntentParameter *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_wrappedValue_100ea8d00)();
  return;
}



/* Address: 0x100bf3d74 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::IntentParameter::$get_projectedValue */

/* AppIntents.IntentParameter.projectedValue.getter : AppIntents.IntentParameter<A> */

void __thiscall
AppIntents::IntentParameter::_get_projectedValue(IntentParameter *this,IntentParameter *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_projectedValue_100ea8d08)();
  return;
}



/* Address: 0x100bf3d80 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::IntentParameter::$__allocating_init */

/* (extension in AppIntents):AppIntents.IntentParameter< where A.ValueType:
   AppIntents.AppEnum>.init(title: Foundation.LocalizedStringResource, description:
   Foundation.LocalizedStringResource?, default: _const A.UnwrappedType?, requestValueDialog:
   AppIntents.IntentDialog?, requestDisambiguationDialog: AppIntents.IntentDialog?,
   inputConnectionBehavior: _const AppIntents.InputConnectionBehavior, supportedValues:
   [A.ValueType]) -> AppIntents.IntentParameter<A> */

void __thiscall (extension_AppIntents)::AppIntents::IntentParameter::___allocating_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100ea8d20)();
  return;
}



/* Address: 0x100bf3d8c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::IntentParameter::$__allocating_init */

/* (extension in AppIntents):AppIntents.IntentParameter< where A.ValueType:
   AppIntents.AppEntity>.init(title: Foundation.LocalizedStringResource, description:
   Foundation.LocalizedStringResource?, default: _const A.UnwrappedType?, requestValueDialog:
   AppIntents.IntentDialog?, requestDisambiguationDialog: AppIntents.IntentDialog?,
   inputConnectionBehavior: _const AppIntents.InputConnectionBehavior) ->
   AppIntents.IntentParameter<A> */

void __thiscall
(extension_AppIntents)::AppIntents::IntentParameter::___allocating_init
          (IntentParameter *this,LocalizedStringResource title)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100ea8d28)();
  return;
}



/* Address: 0x100bf3d98 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::IntentParameter::$__allocating_init */

/* (extension in AppIntents):AppIntents.IntentParameter< where A.ValueType ==
   Swift.String>.init(title: Foundation.LocalizedStringResource, description:
   Foundation.LocalizedStringResource?, default: _const A.UnwrappedType?, inputOptions: (extension
   in AppIntents):Swift.String.IntentInputOptions?, requestValueDialog: AppIntents.IntentDialog?,
   inputConnectionBehavior: _const AppIntents.InputConnectionBehavior) ->
   AppIntents.IntentParameter<A> */

void __thiscall
(extension_AppIntents)::AppIntents::IntentParameter::___allocating_init
          (IntentParameter *this,LocalizedStringResource title)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100ea8d30)();
  return;
}



/* Address: 0x100bf3da4 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::IntentParameter::$__allocating_init */

/* (extension in AppIntents):AppIntents.IntentParameter< where A.ValueType == Swift.Int>.init(title:
   Foundation.LocalizedStringResource, description: Foundation.LocalizedStringResource?, default:
   _const A.UnwrappedType?, controlStyle: _const AppIntents.IntentParameter<A>.IntControlStyle,
   inclusiveRange: _const (lowerBound: Swift.Int, upperBound: Swift.Int)?, requestValueDialog:
   AppIntents.IntentDialog?, inputConnectionBehavior: _const AppIntents.InputConnectionBehavior) ->
   AppIntents.IntentParameter<A> */

void __thiscall
(extension_AppIntents)::AppIntents::IntentParameter::___allocating_init
          (IntentParameter *this,LocalizedStringResource title)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100ea8d38)();
  return;
}



/* Address: 0x100bf3db0 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::DisplayRepresentation::init */

/* AppIntents.DisplayRepresentation.init(stringLiteral: Swift.String) ->
   AppIntents.DisplayRepresentation */

DisplayRepresentation AppIntents::DisplayRepresentation::init(String stringLiteral)

{
  DisplayRepresentation DVar1;
  
  DVar1.unknown = stringLiteral.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf3db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea8d48)(DVar1.unknown,stringLiteral.bridgeObject);
  return (DisplayRepresentation)DVar1.unknown;
}



/* Address: 0x100bf3dbc | /System/Library/Frameworks/_AppIntents_AppKit.framework/Versions/A/_AppIntents_AppKit::(extension__AppIntents_AppKit)::DisplayRepresentation::Image::$init */

/* (extension in _AppIntents_AppKit):AppIntents.DisplayRepresentation.Image.init(systemName:
   Swift.String, tintColor: __C.NSColor?, symbolConfiguration: __C.NSImageSymbolConfiguration?) ->
   AppIntents.DisplayRepresentation.Image? */

void (extension__AppIntents_AppKit)::DisplayRepresentation::Image::_init(String systemName)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eabc88)(systemName.str,systemName.bridgeObject);
  return;
}



/* Address: 0x100bf3dc8 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::DisplayRepresentation::$init */

/* AppIntents.DisplayRepresentation.init(title: Foundation.LocalizedStringResource, subtitle:
   Foundation.LocalizedStringResource?, image: AppIntents.DisplayRepresentation.Image?) ->
   AppIntents.DisplayRepresentation */

DisplayRepresentation AppIntents::DisplayRepresentation::_init(LocalizedStringResource title)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8d58)();
  return (DisplayRepresentation)title.unknown;
}



/* Address: 0x100bf3dd4 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::DisplayRepresentation::typeMetadataAccessor */

/* type metadata accessor for AppIntents.DisplayRepresentation */

DisplayRepresentation AppIntents::DisplayRepresentation::typeMetadataAccessor(void)

{
  DisplayRepresentation in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8d60)();
  return (DisplayRepresentation)in_x0.unknown;
}



/* Address: 0x100bf3de0 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::IntentParameterSummary::$init */

/* AppIntents.IntentParameterSummary.init(_: AppIntents.ParameterSummaryString<A>, table:
   Swift.String?) -> AppIntents.IntentParameterSummary<A> */

IntentParameterSummary<undefined>
AppIntents::IntentParameterSummary::_init(ParameterSummaryString<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8d88)();
  return (IntentParameterSummary<undefined>)param_1.unknown;
}



/* Address: 0x100bf3dec | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::ParameterSummaryString::StringInterpolation::$appendInterpolation */

/* AppIntents.ParameterSummaryString.StringInterpolation.appendInterpolation<A, B where A1:
   AppIntents._IntentValue, A1: Swift.Sendable, B1: Swift.KeyPath<A,
   AppIntents.IntentParameter<A1>>>(B1) -> () */

void AppIntents::ParameterSummaryString::StringInterpolation::_appendInterpolation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendInterpolation_100ea8d98)();
  return;
}



/* Address: 0x100bf3df8 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral */

/* AppIntents.ParameterSummaryString.StringInterpolation.appendLiteral(Swift.String) -> () */

void AppIntents::ParameterSummaryString::StringInterpolation::appendLiteral
               (String param_1,StringInterpolation param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_appendLiteral_100ea8da0)
            (param_1.str,param_1.bridgeObject,param_2.message.str,param_2.message.bridgeObject,
             param_2._16_8_,param_2.template.str,param_2.template.bridgeObject,
             param_2.interpolationCount);
  return;
}



/* Address: 0x100bf3e04 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::ParameterSummaryString::StringInterpolation::$init */

/* AppIntents.ParameterSummaryString.StringInterpolation.init(literalCapacity: Swift.Int,
   interpolationCount: Swift.Int) -> AppIntents.ParameterSummaryString<A>.StringInterpolation */

void AppIntents::ParameterSummaryString::StringInterpolation::_init
               (StringInterpolation *__return_storage_ptr__,__int64 literalCapacity,
               __int64 interpolationCount)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8da8)();
  return;
}



/* Address: 0x100bf3e10 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::ParameterSummaryString::$init */

/* AppIntents.ParameterSummaryString.init(stringInterpolation:
   AppIntents.ParameterSummaryString<A>.StringInterpolation) -> AppIntents.ParameterSummaryString<A>
    */

ParameterSummaryString<undefined>
AppIntents::ParameterSummaryString::_init(StringInterpolation stringInterpolation)

{
  ParameterSummaryString<undefined> PVar1;
  
  PVar1.unknown = stringInterpolation.message.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf3e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8db8)
            (PVar1.unknown,stringInterpolation.message.bridgeObject,stringInterpolation._16_8_,
             stringInterpolation.template.str,stringInterpolation.template.bridgeObject,
             stringInterpolation.interpolationCount);
  return (ParameterSummaryString<undefined>)PVar1.unknown;
}



/* Address: 0x100bf3e1c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::InputConnectionBehavior::typeMetadataAccessor */

/* type metadata accessor for AppIntents.InputConnectionBehavior */

InputConnectionBehavior AppIntents::InputConnectionBehavior::typeMetadataAccessor(void)

{
  InputConnectionBehavior in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8dd0)();
  return (InputConnectionBehavior)in_w0.value;
}



/* Address: 0x100bf3e28 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::CaseDisplayRepresentable::get_localizedStringResource */

/* (extension in AppIntents):AppIntents.CaseDisplayRepresentable.localizedStringResource.getter :
   Foundation.LocalizedStringResource */

LocalizedStringResource
(extension_AppIntents)::AppIntents::CaseDisplayRepresentable::get_localizedStringResource(void)

{
  LocalizedStringResource in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_localizedStringResource_100ea8dd8)();
  return (LocalizedStringResource)in_x0.unknown;
}



/* Address: 0x100bf3e34 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier */

/* static (extension in AppIntents):AppIntents.PersistentlyIdentifiable.persistentIdentifier.getter
   : Swift.String */

String (extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_persistentIdentifier_100ea8de0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bf3e40 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::TypeDisplayRepresentation::$init */

/* AppIntents.TypeDisplayRepresentation.init(name: Foundation.LocalizedStringResource,
   numericFormat: Foundation.LocalizedStringResource?) -> AppIntents.TypeDisplayRepresentation */

TypeDisplayRepresentation AppIntents::TypeDisplayRepresentation::_init(LocalizedStringResource name)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8de8)();
  return (TypeDisplayRepresentation)name.unknown;
}



/* Address: 0x100bf3e4c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::AppIntents::TypeDisplayRepresentation::typeMetadataAccessor */

/* type metadata accessor for AppIntents.TypeDisplayRepresentation */

TypeDisplayRepresentation AppIntents::TypeDisplayRepresentation::typeMetadataAccessor(void)

{
  TypeDisplayRepresentation in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8df0)();
  return (TypeDisplayRepresentation)in_x0.unknown;
}



/* Address: 0x100bf3e58 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::InstanceDisplayRepresentable::get_localizedStringResource */

/* (extension in AppIntents):AppIntents.InstanceDisplayRepresentable.localizedStringResource.getter
   : Foundation.LocalizedStringResource */

LocalizedStringResource
(extension_AppIntents)::AppIntents::InstanceDisplayRepresentable::get_localizedStringResource(void)

{
  LocalizedStringResource in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_localizedStringResource_100ea8e08)();
  return (LocalizedStringResource)in_x0.unknown;
}



/* Address: 0x100bf3e64 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::get__nsError */

/* Foundation.CocoaError._nsError.getter : __C.NSError */

NSError * Foundation::CocoaError::get__nsError(CocoaError param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__nsError_100ea68f0)();
  return (NSError *)param_1.unknown;
}



/* Address: 0x100bf3e70 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::get_isFileError */

/* Foundation.CocoaError.isFileError.getter : Swift.Bool */

bool Foundation::CocoaError::get_isFileError(CocoaError param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf3e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isFileError_100ea68f8)();
  return (bool)uVar1;
}



/* Address: 0x100bf3e7c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::get_fileNoSuchFile */

/* static Foundation.CocoaError.fileNoSuchFile.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::get_fileNoSuchFile(CocoaError param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileNoSuchFile_100ea6900)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3e88 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::get_fileReadNoSuchFile */

/* static Foundation.CocoaError.fileReadNoSuchFile.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::get_fileReadNoSuchFile(CocoaError param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileReadNoSuchFile_100ea6908)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3e94 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileNoSuchFile */

/* static Foundation.CocoaError.Code.fileNoSuchFile.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileNoSuchFile(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileNoSuchFile_100ea6910)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3ea0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileReadTooLarge */

/* static Foundation.CocoaError.Code.fileReadTooLarge.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileReadTooLarge(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileReadTooLarge_100ea6918)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3eac | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileReadNoSuchFile */

/* static Foundation.CocoaError.Code.fileReadNoSuchFile.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileReadNoSuchFile(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileReadNoSuchFile_100ea6920)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3eb8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileWriteFileExists */

/* static Foundation.CocoaError.Code.fileWriteFileExists.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileWriteFileExists(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileWriteFileExists_100ea6928)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3ec4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileReadNoPermission */

/* static Foundation.CocoaError.Code.fileReadNoPermission.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileReadNoPermission(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileReadNoPermission_100ea6930)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3ed0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::get_fileReadInvalidFileName */

/* static Foundation.CocoaError.Code.fileReadInvalidFileName.getter : Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::get_fileReadInvalidFileName(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_fileReadInvalidFileName_100ea6938)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf3edc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::Code::typeMetadataAccessor */

/* type metadata accessor for Foundation.CocoaError.Code */

Code Foundation::CocoaError::Code::typeMetadataAccessor(void)

{
  Code in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6940)();
  return (Code)in_x0.unknown;
}



/* Address: 0x100bf3ee8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CocoaError::typeMetadataAccessor */

/* type metadata accessor for Foundation.CocoaError */

CocoaError Foundation::CocoaError::typeMetadataAccessor(void)

{
  CocoaError in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6960)();
  return (CocoaError)in_x0.unknown;
}



/* Address: 0x100bf3ef4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::POSIXError::get_ENOENT */

/* static Foundation.POSIXError.ENOENT.getter : Darwin.POSIXErrorCode */

POSIXErrorCode Foundation::POSIXError::get_ENOENT(POSIXError param_1)

{
  POSIXErrorCode PVar1;
  
  PVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf3efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_ENOENT_100ea6970)();
  return (POSIXErrorCode)PVar1.value;
}



/* Address: 0x100bf3f00 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::POSIXError::get__nsError */

/* Foundation.POSIXError._nsError.getter : __C.NSError */

NSError * Foundation::POSIXError::get__nsError(POSIXError param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__nsError_100ea6978)();
  return (NSError *)param_1.unknown;
}



/* Address: 0x100bf3f0c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::POSIXError::typeMetadataAccessor */

/* type metadata accessor for Foundation.POSIXError */

POSIXError Foundation::POSIXError::typeMetadataAccessor(void)

{
  POSIXError in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6988)();
  return (POSIXError)in_x0.unknown;
}



/* Address: 0x100bf3f18 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$set_httpMethod */

/* Foundation.URLRequest.httpMethod.setter : Swift.String? */

void __thiscall Foundation::URLRequest::_set_httpMethod(URLRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_httpMethod_100ea6998)();
  return;
}



/* Address: 0x100bf3f24 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::set_timeoutInterval */

/* Foundation.URLRequest.timeoutInterval.setter : Swift.Double */

void __thiscall Foundation::URLRequest::set_timeoutInterval(URLRequest *this,double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_timeoutInterval_100ea69a0)();
  return;
}



/* Address: 0x100bf3f30 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::_bridgeToObjectiveC */

/* Foundation.URLRequest._bridgeToObjectiveC() -> __C.NSURLRequest */

NSURLRequest * Foundation::URLRequest::_bridgeToObjectiveC(URLRequest_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea69a8)();
  return (NSURLRequest *)param_1.unknown;
}



/* Address: 0x100bf3f3c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.URLRequest._unconditionallyBridgeFromObjectiveC(__C.NSURLRequest?) ->
   Foundation.URLRequest */

URLRequest_conflict
Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC(URLRequest_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea69b0)();
  return (URLRequest_conflict)param_1.unknown;
}



/* Address: 0x100bf3f48 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::init */

/* Foundation.URLRequest.init(url: Foundation.URL, cachePolicy: __C.NSURLRequestCachePolicy,
   timeoutInterval: Swift.Double) -> Foundation.URLRequest */

URLRequest_conflict
Foundation::URLRequest::init(URL url,NSURLRequestCachePolicy cachePolicy,double timeoutInterval)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea69b8)();
  return (URLRequest_conflict)url.unknown;
}



/* Address: 0x100bf3f54 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$get_url */

/* Foundation.URLRequest.url.getter : Foundation.URL? */

void Foundation::URLRequest::_get_url(URLRequest_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_url_100ea69c0)();
  return;
}



/* Address: 0x100bf3f60 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$value */

/* Foundation.URLRequest.value(forHTTPHeaderField: Swift.String) -> Swift.String? */

void Foundation::URLRequest::_value(String forHTTPHeaderField,URLRequest_conflict param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__value_100ea69c8)(forHTTPHeaderField.str,forHTTPHeaderField.bridgeObject);
  return;
}



/* Address: 0x100bf3f6c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::addValue */

/* Foundation.URLRequest.addValue(_: Swift.String, forHTTPHeaderField: Swift.String) -> () */

void Foundation::URLRequest::addValue
               (String param_1,String forHTTPHeaderField,URLRequest_conflict param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_addValue_100ea69d0)
            (param_1.str,param_1.bridgeObject,forHTTPHeaderField.str,forHTTPHeaderField.bridgeObject
            );
  return;
}



/* Address: 0x100bf3f78 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$get_httpBody */

/* Foundation.URLRequest.httpBody.getter : Foundation.Data? */

void Foundation::URLRequest::_get_httpBody(URLRequest_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_httpBody_100ea69d8)();
  return;
}



/* Address: 0x100bf3f84 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$set_httpBody */

/* Foundation.URLRequest.httpBody.setter : Foundation.Data? */

void __thiscall Foundation::URLRequest::_set_httpBody(URLRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_httpBody_100ea69e0)();
  return;
}



/* Address: 0x100bf3f90 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$setValue */

/* Foundation.URLRequest.setValue(_: Swift.String?, forHTTPHeaderField: Swift.String) -> () */

void Foundation::URLRequest::_setValue(String param_1,URLRequest_conflict forHTTPHeaderField)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setValue_100ea69e8)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf3f9c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::typeMetadataAccessor */

/* type metadata accessor for Foundation.URLRequest */

URLRequest_conflict Foundation::URLRequest::typeMetadataAccessor(void)

{
  URLRequest_conflict in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea69f0)();
  return (URLRequest_conflict)in_x0.unknown;
}



/* Address: 0x100bf3fa8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::FormatStyle::$byteCount */

/* static (extension in Foundation):Foundation.FormatStyle< where A ==
   Foundation.ByteCountFormatStyle>.byteCount(style: Foundation.ByteCountFormatStyle.Style,
   allowedUnits: Foundation.ByteCountFormatStyle.Units, spellsOutZero: Swift.Bool,
   includesActualByteCount: Swift.Bool) -> Foundation.ByteCountFormatStyle */

ByteCountFormatStyle
(extension_Foundation)::Foundation::FormatStyle::_byteCount
          (Style style,Units allowedUnits,bool spellsOutZero,bool includesActualByteCount)

{
  ByteCountFormatStyle BVar1;
  
  BVar1.unknown = (undefined *)(ulong)(byte)style.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__byteCount_100ea6a00)
            (BVar1.unknown,allowedUnits.unknown,spellsOutZero,includesActualByteCount);
  return (ByteCountFormatStyle)BVar1.unknown;
}



/* Address: 0x100bf3fb4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::FormatStyle::$get_iso8601 */

/* static (extension in Foundation):Foundation.FormatStyle< where A ==
   Foundation.Date.ISO8601FormatStyle>.iso8601.getter : Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle (extension_Foundation)::Foundation::FormatStyle::_get_iso8601(void)

{
  ISO8601FormatStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_iso8601_100ea6a08)();
  return (ISO8601FormatStyle)in_x0.unknown;
}



/* Address: 0x100bf3fc0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::FormatStyle::locale */

/* (extension in Foundation):Foundation.FormatStyle.locale(Foundation.Locale) -> A */

void (extension_Foundation)::Foundation::FormatStyle::locale(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_locale_100ea6a10)();
  return;
}



/* Address: 0x100bf3fcc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor */

/* type metadata accessor for Foundation.JSONDecoder.KeyDecodingStrategy */

KeyDecodingStrategy Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor(void)

{
  KeyDecodingStrategy in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6a20)();
  return (KeyDecodingStrategy)in_w0.value;
}



/* Address: 0x100bf3fd8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::set_keyDecodingStrategy */

/* dispatch thunk of Foundation.JSONDecoder.keyDecodingStrategy.setter :
   Foundation.JSONDecoder.KeyDecodingStrategy */

void __thiscall
Foundation::JSONDecoder::set_keyDecodingStrategy(JSONDecoder *this,KeyDecodingStrategy param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_keyDecodingStrategy_100ea6a28)(param_1.value);
  return;
}



/* Address: 0x100bf3fe4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor */

/* type metadata accessor for Foundation.JSONDecoder.DateDecodingStrategy */

DateDecodingStrategy Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor(void)

{
  DateDecodingStrategy in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf3fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6a40)();
  return (DateDecodingStrategy)in_w0.value;
}



/* Address: 0x100bf3ff0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::set_dateDecodingStrategy */

/* dispatch thunk of Foundation.JSONDecoder.dateDecodingStrategy.setter :
   Foundation.JSONDecoder.DateDecodingStrategy */

void __thiscall
Foundation::JSONDecoder::set_dateDecodingStrategy(JSONDecoder *this,DateDecodingStrategy param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf3ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_dateDecodingStrategy_100ea6a48)(param_1.value);
  return;
}



/* Address: 0x100bf3ffc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::$decode */

/* dispatch thunk of Foundation.JSONDecoder.decode<A where A: Swift.Decodable>(_: A.Type, from:
   Foundation.Data) throws -> A */

void __thiscall Foundation::JSONDecoder::_decode(JSONDecoder *this,Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ea6a50)();
  return;
}



/* Address: 0x100bf4008 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::init */

/* Foundation.JSONDecoder.init() -> Foundation.JSONDecoder */

JSONDecoder * __thiscall Foundation::JSONDecoder::init(JSONDecoder *this)

{
  JSONDecoder *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea6a58)();
  return in_x0;
}



/* Address: 0x100bf4014 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONDecoder::typeMetadataAccessor */

/* type metadata accessor for Foundation.JSONDecoder */

JSONDecoder * Foundation::JSONDecoder::typeMetadataAccessor(void)

{
  JSONDecoder *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6a60)();
  return in_x0;
}



/* Address: 0x100bf4020 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONEncoder::OutputFormatting::get_sortedKeys */

/* static Foundation.JSONEncoder.OutputFormatting.sortedKeys.getter :
   Foundation.JSONEncoder.OutputFormatting */

OutputFormatting Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OutputFormatting param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_sortedKeys_100ea6a70)();
  return (OutputFormatting)param_1.unknown;
}



/* Address: 0x100bf402c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONEncoder::OutputFormatting::get_prettyPrinted */

/* static Foundation.JSONEncoder.OutputFormatting.prettyPrinted.getter :
   Foundation.JSONEncoder.OutputFormatting */

OutputFormatting
Foundation::JSONEncoder::OutputFormatting::get_prettyPrinted(OutputFormatting param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_prettyPrinted_100ea6a78)();
  return (OutputFormatting)param_1.unknown;
}



/* Address: 0x100bf4038 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes */

/* static Foundation.JSONEncoder.OutputFormatting.withoutEscapingSlashes.getter :
   Foundation.JSONEncoder.OutputFormatting */

OutputFormatting
Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OutputFormatting param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_withoutEscapingSlashes_100ea6a80)();
  return (OutputFormatting)param_1.unknown;
}



/* Address: 0x100bf4044 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor */

/* type metadata accessor for Foundation.JSONEncoder.OutputFormatting */

OutputFormatting Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor(void)

{
  OutputFormatting in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea6a88)();
  return (OutputFormatting)in_x0.unknown;
}



/* Address: 0x100bf4050 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::JSONEncoder::set_outputFormatting */

/* dispatch thunk of Foundation.JSONEncoder.outputFormatting.setter :
   Foundation.JSONEncoder.OutputFormatting */

void __thiscall
Foundation::JSONEncoder::set_outputFormatting(JSONEncoder *this,OutputFormatting param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_outputFormatting_100ea6aa0)();
  return;
}


