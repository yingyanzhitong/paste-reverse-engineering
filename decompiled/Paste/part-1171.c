/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf4c5c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::$init */

/* Foundation.Date.init<A where A: Foundation.ParseStrategy, A.ParseOutput == Foundation.Date>(_:
   A.ParseInput, strategy: A) throws -> Foundation.Date */

Date Foundation::Date::_init(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea74b0)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf4c68 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::$init */

/* Foundation.UUID.init(uuidString: __shared Swift.String) -> Foundation.UUID? */

void Foundation::UUID::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea74c0)();
  return;
}



/* Address: 0x100bf4c74 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::get_uuidString */

/* Foundation.UUID.uuidString.getter : Swift.String */

String Foundation::UUID::get_uuidString(UUID param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_uuidString_100ea74c8)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf4c80 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::_bridgeToObjectiveC */

/* Foundation.UUID._bridgeToObjectiveC() -> __C.NSUUID */

NSUUID * Foundation::UUID::_bridgeToObjectiveC(UUID param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea74d0)();
  return (NSUUID *)param_1.unknown;
}



/* Address: 0x100bf4c8c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::==_infix */

/* static Foundation.UUID.== infix(Foundation.UUID, Foundation.UUID) -> Swift.Bool */

bool Foundation::UUID::___infix(UUID param_1,UUID param_2,UUID param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea74d8)();
  return (bool)uVar1;
}



/* Address: 0x100bf4c98 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.UUID._unconditionallyBridgeFromObjectiveC(__C.NSUUID?) -> Foundation.UUID */

UUID Foundation::UUID::__unconditionallyBridgeFromObjectiveC(UUID param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea74e0)();
  return (UUID)param_1.unknown;
}



/* Address: 0x100bf4ca4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::init */

/* Foundation.UUID.init(uuid: (Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8,
   Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8,
   Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8)) -> Foundation.UUID */

UUID Foundation::UUID::init(tuple16 uuid)

{
  UUID UVar1;
  
  UVar1.unknown = uuid._0_8_;
                    /* WARNING: Could not recover jumptable at 0x000100bf4cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea74e8)(UVar1.unknown,uuid._8_8_);
  return (UUID)UVar1.unknown;
}



/* Address: 0x100bf4cb0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::get_uuid */

/* Foundation.UUID.uuid.getter : (Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8,
   Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8,
   Swift.UInt8, Swift.UInt8, Swift.UInt8, Swift.UInt8) */

tuple16 Foundation::UUID::get_uuid(UUID param_1)

{
  undefined8 in_x1;
  tuple16 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_uuid_100ea74f0)();
  tVar1._ = (char)in_x1;
  tVar1._ = (char)((ulong)in_x1 >> 8);
  tVar1._0 = (char)((ulong)in_x1 >> 0x10);
  tVar1._1 = (char)((ulong)in_x1 >> 0x18);
  tVar1._2 = (char)((ulong)in_x1 >> 0x20);
  tVar1._3 = (char)((ulong)in_x1 >> 0x28);
  tVar1._4 = (char)((ulong)in_x1 >> 0x30);
  tVar1._5 = (char)((ulong)in_x1 >> 0x38);
  tVar1._0_8_ = param_1.unknown;
  return tVar1;
}



/* Address: 0x100bf4cbc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::init */

/* Foundation.UUID.init() -> Foundation.UUID */

UUID Foundation::UUID::init(void)

{
  UUID in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea74f8)();
  return (UUID)in_x0.unknown;
}



/* Address: 0x100bf4cc8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::typeMetadataAccessor */

/* type metadata accessor for Foundation.UUID */

UUID Foundation::UUID::typeMetadataAccessor(void)

{
  UUID in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7500)();
  return (UUID)in_x0.unknown;
}



/* Address: 0x100bf4cd4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::$NSLog */

/* Foundation.NSLog(Swift.String, Swift.CVarArg...) -> () */

void Foundation::_NSLog(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSLog_100ea7538)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf4ce0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::init */

/* Foundation.Locale.init(identifier: Swift.String) -> Foundation.Locale */

Locale Foundation::Locale::init(String identifier)

{
  Locale LVar1;
  
  LVar1.unknown = identifier.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf4ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7540)(LVar1.unknown,identifier.bridgeObject);
  return (Locale)LVar1.unknown;
}



/* Address: 0x100bf4cec | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::get_identifier */

/* Foundation.Locale.identifier.getter : Swift.String */

String Foundation::Locale::get_identifier(Locale param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_identifier_100ea7548)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf4cf8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::LanguageCode::get_identifier */

/* Foundation.Locale.LanguageCode.identifier.getter : Swift.String */

String Foundation::Locale::LanguageCode::get_identifier(LanguageCode param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_identifier_100ea7550)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf4d04 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::LanguageCode::typeMetadataAccessor */

/* type metadata accessor for Foundation.Locale.LanguageCode */

LanguageCode Foundation::Locale::LanguageCode::typeMetadataAccessor(void)

{
  LanguageCode in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7558)();
  return (LanguageCode)in_x0.unknown;
}



/* Address: 0x100bf4d10 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::$get_languageCode */

/* Foundation.Locale.languageCode.getter : Swift.String? */

void Foundation::Locale::_get_languageCode(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_languageCode_100ea7568)();
  return;
}



/* Address: 0x100bf4d1c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::_bridgeToObjectiveC */

/* Foundation.Locale._bridgeToObjectiveC() -> __C.NSLocale */

NSLocale * Foundation::Locale::_bridgeToObjectiveC(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7570)();
  return (NSLocale *)param_1.unknown;
}



/* Address: 0x100bf4d28 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::get_autoupdatingCurrent */

/* static Foundation.Locale.autoupdatingCurrent.getter : Foundation.Locale */

Locale Foundation::Locale::get_autoupdatingCurrent(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_autoupdatingCurrent_100ea7578)();
  return (Locale)param_1.unknown;
}



/* Address: 0x100bf4d34 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.Locale._unconditionallyBridgeFromObjectiveC(__C.NSLocale?) -> Foundation.Locale
    */

Locale Foundation::Locale::__unconditionallyBridgeFromObjectiveC(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea7580)();
  return (Locale)param_1.unknown;
}



/* Address: 0x100bf4d40 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::get_current */

/* static Foundation.Locale.current.getter : Foundation.Locale */

Locale Foundation::Locale::get_current(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_current_100ea7588)();
  return (Locale)param_1.unknown;
}



/* Address: 0x100bf4d4c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::Language::$get_languageCode */

/* Foundation.Locale.Language.languageCode.getter : Foundation.Locale.LanguageCode? */

void Foundation::Locale::Language::_get_languageCode(Language param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_languageCode_100ea7590)();
  return;
}



/* Address: 0x100bf4d58 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::Language::typeMetadataAccessor */

/* type metadata accessor for Foundation.Locale.Language */

Language Foundation::Locale::Language::typeMetadataAccessor(void)

{
  Language in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7598)();
  return (Language)in_x0.unknown;
}



/* Address: 0x100bf4d64 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::get_language */

/* Foundation.Locale.language.getter : Foundation.Locale.Language */

Language Foundation::Locale::get_language(Locale param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_language_100ea75a0)();
  return (Language)param_1.unknown;
}



/* Address: 0x100bf4d70 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Locale::typeMetadataAccessor */

/* type metadata accessor for Foundation.Locale */

Locale Foundation::Locale::typeMetadataAccessor(void)

{
  Locale in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea75a8)();
  return (Locale)in_x0.unknown;
}



/* Address: 0x100bf4d7c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::Identifier::typeMetadataAccessor */

/* type metadata accessor for Foundation.Calendar.Identifier */

Identifier Foundation::Calendar::Identifier::typeMetadataAccessor(void)

{
  Identifier in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea75c0)();
  return (Identifier)in_w0.value;
}



/* Address: 0x100bf4d88 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::$init */

/* Foundation.Calendar.init(identifier: __shared Foundation.Calendar.Identifier) ->
   Foundation.Calendar */

Calendar Foundation::Calendar::_init(void)

{
  Calendar in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea75c8)();
  return (Calendar)in_x0.unknown;
}



/* Address: 0x100bf4d94 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::startOfDay */

/* Foundation.Calendar.startOfDay(for: Foundation.Date) -> Foundation.Date */

Date Foundation::Calendar::startOfDay(Date for,Calendar param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_startOfDay_100ea75d0)();
  return (Date)for.unknown;
}



/* Address: 0x100bf4da0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::$maximumRange */

/* Foundation.Calendar.maximumRange(of: Foundation.Calendar.Component) -> Swift.Range<Swift.Int>? */

void Foundation::Calendar::_maximumRange(Component of,Calendar param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__maximumRange_100ea75d8)(of.value);
  return;
}



/* Address: 0x100bf4dac | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::dateComponents */

/* Foundation.Calendar.dateComponents(_: Swift.Set<Foundation.Calendar.Component>, from:
   Foundation.Date, to: Foundation.Date) -> Foundation.DateComponents */

DateComponents
Foundation::Calendar::dateComponents(Set<Component> param_1,Date from,Date to,Calendar param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_dateComponents_100ea75e0)();
  return (DateComponents)param_1.unknown;
}



/* Address: 0x100bf4db8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::dateComponents */

/* Foundation.Calendar.dateComponents(_: Swift.Set<Foundation.Calendar.Component>, from:
   Foundation.Date) -> Foundation.DateComponents */

DateComponents
Foundation::Calendar::dateComponents(Set<Component> param_1,Date from,Calendar param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_dateComponents_100ea75e8)();
  return (DateComponents)param_1.unknown;
}



/* Address: 0x100bf4dc4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::==_infix */

/* static Foundation.Calendar.== infix(Foundation.Calendar, Foundation.Calendar) -> Swift.Bool */

bool Foundation::Calendar::___infix(Calendar param_1,Calendar param_2,Calendar param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea75f0)();
  return (bool)uVar1;
}



/* Address: 0x100bf4dd0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::$date */

/* Foundation.Calendar.date(byAdding: Foundation.DateComponents, to: Foundation.Date,
   wrappingComponents: Swift.Bool) -> Foundation.Date? */

void Foundation::Calendar::_date
               (DateComponents byAdding,Date to,bool wrappingComponents,Calendar param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__date_100ea75f8)(byAdding.unknown,to.unknown,wrappingComponents);
  return;
}



/* Address: 0x100bf4ddc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::$date */

/* Foundation.Calendar.date(byAdding: Foundation.Calendar.Component, value: Swift.Int, to:
   Foundation.Date, wrappingComponents: Swift.Bool) -> Foundation.Date? */

void Foundation::Calendar::_date
               (Component byAdding,__int64 value,Date to,bool wrappingComponents,Calendar param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__date_100ea7600)(byAdding.value,value,to.unknown,wrappingComponents);
  return;
}



/* Address: 0x100bf4de8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::get_current */

/* static Foundation.Calendar.current.getter : Foundation.Calendar */

Calendar Foundation::Calendar::get_current(Calendar param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_current_100ea7608)();
  return (Calendar)param_1.unknown;
}



/* Address: 0x100bf4df4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::set_timeZone */

/* Foundation.Calendar.timeZone.setter : Foundation.TimeZone */

void __thiscall Foundation::Calendar::set_timeZone(Calendar *this,TimeZone param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_timeZone_100ea7610)();
  return;
}



/* Address: 0x100bf4e00 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::Component::typeMetadataAccessor */

/* type metadata accessor for Foundation.Calendar.Component */

Component Foundation::Calendar::Component::typeMetadataAccessor(void)

{
  Component in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7668)();
  return (Component)in_w0.value;
}



/* Address: 0x100bf4e0c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::component */

/* Foundation.Calendar.component(_: Foundation.Calendar.Component, from: Foundation.Date) ->
   Swift.Int */

__int64 Foundation::Calendar::component(Component param_1,Date from,Calendar param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf4e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_component_100ea7688)();
  return uVar1;
}



/* Address: 0x100bf4e18 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::typeMetadataAccessor */

/* type metadata accessor for Foundation.Calendar */

Calendar Foundation::Calendar::typeMetadataAccessor(void)

{
  Calendar in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7690)();
  return (Calendar)in_x0.unknown;
}



/* Address: 0x100bf4e24 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexSet::_bridgeToObjectiveC */

/* Foundation.IndexSet._bridgeToObjectiveC() -> __C.NSIndexSet */

NSIndexSet * Foundation::IndexSet::_bridgeToObjectiveC(IndexSet param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea76b8)();
  return (NSIndexSet *)param_1.unknown;
}



/* Address: 0x100bf4e30 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexSet::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.IndexSet._unconditionallyBridgeFromObjectiveC(__C.NSIndexSet?) ->
   Foundation.IndexSet */

IndexSet Foundation::IndexSet::__unconditionallyBridgeFromObjectiveC(IndexSet param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea76c0)();
  return (IndexSet)param_1.unknown;
}



/* Address: 0x100bf4e3c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexSet::get_isEmpty */

/* Foundation.IndexSet.isEmpty.getter : Swift.Bool */

bool Foundation::IndexSet::get_isEmpty(IndexSet param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isEmpty_100ea76c8)();
  return (bool)uVar1;
}



/* Address: 0x100bf4e48 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexSet::typeMetadataAccessor */

/* type metadata accessor for Foundation.IndexSet */

IndexSet Foundation::IndexSet::typeMetadataAccessor(void)

{
  IndexSet in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea76d0)();
  return (IndexSet)in_x0.unknown;
}



/* Address: 0x100bf4e54 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::get_identifier */

/* Foundation.TimeZone.identifier.getter : Swift.String */

String Foundation::TimeZone::get_identifier(TimeZone param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_identifier_100ea76e0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf4e60 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::$init */

/* Foundation.TimeZone.init(abbreviation: __shared Swift.String) -> Foundation.TimeZone? */

void Foundation::TimeZone::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea76e8)();
  return;
}



/* Address: 0x100bf4e6c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::secondsFromGMT */

/* Foundation.TimeZone.secondsFromGMT(for: Foundation.Date) -> Swift.Int */

__int64 Foundation::TimeZone::secondsFromGMT(Date for,TimeZone param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_secondsFromGMT_100ea76f0)();
  return (__int64)for.unknown;
}



/* Address: 0x100bf4e78 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::$init */

/* Foundation.TimeZone.init(secondsFromGMT: Swift.Int) -> Foundation.TimeZone? */

void Foundation::TimeZone::_init(__int64 secondsFromGMT)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea76f8)();
  return;
}



/* Address: 0x100bf4e84 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::_bridgeToObjectiveC */

/* Foundation.TimeZone._bridgeToObjectiveC() -> __C.NSTimeZone */

NSTimeZone * Foundation::TimeZone::_bridgeToObjectiveC(TimeZone param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7700)();
  return (NSTimeZone *)param_1.unknown;
}



/* Address: 0x100bf4e90 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::get_current */

/* static Foundation.TimeZone.current.getter : Foundation.TimeZone */

TimeZone Foundation::TimeZone::get_current(TimeZone param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_current_100ea7708)();
  return (TimeZone)param_1.unknown;
}



/* Address: 0x100bf4e9c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::TimeZone::typeMetadataAccessor */

/* type metadata accessor for Foundation.TimeZone */

TimeZone Foundation::TimeZone::typeMetadataAccessor(void)

{
  TimeZone in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7710)();
  return (TimeZone)in_x0.unknown;
}



/* Address: 0x100bf4ea8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLError::Code::get_badServerResponse */

/* static Foundation.URLError.Code.badServerResponse.getter : Foundation.URLError.Code */

Code Foundation::URLError::Code::get_badServerResponse(Code param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_badServerResponse_100ea7720)();
  return (Code)param_1.unknown;
}



/* Address: 0x100bf4eb4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLError::Code::typeMetadataAccessor */

/* type metadata accessor for Foundation.URLError.Code */

Code Foundation::URLError::Code::typeMetadataAccessor(void)

{
  Code in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7728)();
  return (Code)in_x0.unknown;
}



/* Address: 0x100bf4ec0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLError::get__nsError */

/* Foundation.URLError._nsError.getter : __C.NSError */

NSError * Foundation::URLError::get__nsError(URLError param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__nsError_100ea7730)();
  return (NSError *)param_1.unknown;
}



/* Address: 0x100bf4ecc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLError::typeMetadataAccessor */

/* type metadata accessor for Foundation.URLError */

URLError Foundation::URLError::typeMetadataAccessor(void)

{
  URLError in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7740)();
  return (URLError)in_x0.unknown;
}



/* Address: 0x100bf4ed8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexPath::_bridgeToObjectiveC */

/* Foundation.IndexPath._bridgeToObjectiveC() -> __C.NSIndexPath */

NSIndexPath * Foundation::IndexPath::_bridgeToObjectiveC(IndexPath param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7748)();
  return (NSIndexPath *)param_1.unknown;
}



/* Address: 0x100bf4ee4 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::Foundation::IndexPath::init */

/* (extension in AppKit):Foundation.IndexPath.init(item: Swift.Int, section: Swift.Int) ->
   Foundation.IndexPath */

IndexPath (extension_AppKit)::Foundation::IndexPath::init(__int64 item,__int64 section)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea8e40)();
  return (IndexPath)item;
}



/* Address: 0x100bf4ef0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::IndexPath::typeMetadataAccessor */

/* type metadata accessor for Foundation.IndexPath */

IndexPath Foundation::IndexPath::typeMetadataAccessor(void)

{
  IndexPath in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7750)();
  return (IndexPath)in_x0.unknown;
}



/* Address: 0x100bf4efc | /usr/lib/swift/libswiftObjectiveC.dylib::ObjectiveC::Selector::get_description */

/* ObjectiveC.Selector.description.getter : Swift.String */

String ObjectiveC::Selector::get_description(Selector param_1)

{
  UnsafeMutablePointer UVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = (void *)param_1.eventsCapacity;
  UVar1 = param_1.events.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf4f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eae888)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = UVar1.unknown;
  return SVar3;
}



/* Address: 0x100bf4f08 | /usr/lib/swift/libswiftObjectiveC.dylib::ObjectiveC::Selector::==_infix */

/* static ObjectiveC.Selector.== infix(ObjectiveC.Selector, ObjectiveC.Selector) -> Swift.Bool */

bool ObjectiveC::Selector::___infix(Selector param_1,Selector param_2,Selector param_3)

{
  UnsafeMutablePointer UVar1;
  
  UVar1 = param_1.events.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eae890)
            (UVar1.unknown,param_1.eventsCapacity,param_2.events.unknown.unknown,
             param_2.eventsCapacity,param_3.events.unknown.unknown,param_3.eventsCapacity);
  return SUB81(UVar1.unknown,0);
}



/* Address: 0x100bf4f14 | /usr/lib/swift/libswiftObjectiveC.dylib::ObjectiveC::Selector::hash */

/* ObjectiveC.Selector.hash(into: inout Swift.Hasher) -> () */

void ObjectiveC::Selector::hash(Hasher into,Selector param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100eae898)(into.unknown,param_2.events.unknown.unknown,param_2.eventsCapacity);
  return;
}



/* Address: 0x100bf4f20 | /usr/lib/swift/libswiftObjectiveC.dylib::ObjectiveC::Selector::init */

/* ObjectiveC.Selector.init(Swift.String) -> ObjectiveC.Selector */

Selector ObjectiveC::Selector::init(String param_1)

{
  UnsafeMutablePointer UVar1;
  void *pvVar2;
  Selector SVar3;
  
  pvVar2 = param_1.bridgeObject;
  UVar1.unknown = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eae8a8)();
  SVar3.eventsCapacity = (__int64)pvVar2;
  SVar3.events.unknown = UVar1.unknown;
  return SVar3;
}



/* Address: 0x100bf4f2c | /usr/lib/swift/libswiftCoreGraphics.dylib::CoreGraphics::CGPathFillRule::typeMetadataAccessor */

/* type metadata accessor for CoreGraphics.CGPathFillRule */

CGPathFillRule CoreGraphics::CGPathFillRule::typeMetadataAccessor(void)

{
  CGPathFillRule in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaf240)();
  return (CGPathFillRule)in_w0.value;
}



/* Address: 0x100bf4f38 | /usr/lib/swift/libswiftRegexBuilder.dylib::RegexBuilder::RegexComponentBuilder::$buildExpression */

/* static RegexBuilder.RegexComponentBuilder.buildExpression<A where A:
   _StringProcessing.RegexComponent>(A) -> A */

void RegexBuilder::RegexComponentBuilder::_buildExpression(void...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__buildExpression_100eae8e8)();
  return;
}



/* Address: 0x100bf4f44 | /usr/lib/swift/libswiftRegexBuilder.dylib::RegexBuilder::RegexComponentBuilder::$buildPartialBlock */

/* static RegexBuilder.RegexComponentBuilder.buildPartialBlock<A where A:
   _StringProcessing.RegexComponent>(first: A) -> _StringProcessing.Regex<A.RegexOutput> */

Regex<static_RegexBuilder_RegexComponentBuilder_buildPartialBlock<A_where_A:__StringProcessing_RegexComponent>(first:_A)__>__StringProcessing_Regex<A_RegexOutput>>
 RegexBuilder::RegexComponentBuilder::_buildPartialBlock
           (Regex<static_RegexBuilder_RegexComponentBuilder_buildPartialBlock<A_where_A:__StringProcessing_RegexComponent>(first:_A)__>__StringProcessing_Regex<A_RegexOutput>>
            param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__buildPartialBlock_100eae8f0)();
  return (Regex<static_RegexBuilder_RegexComponentBuilder_buildPartialBlock<A_where_A:__StringProcessing_RegexComponent>(first:_A)__>__StringProcessing_Regex<A_RegexOutput>>
          )param_1.unknown;
}



/* Address: 0x100bf4f50 | /usr/lib/swift/libswiftRegexBuilder.dylib::RegexBuilder::Optionally::init */

/* RegexBuilder.Optionally.init(_StringProcessing.Regex<A>) -> RegexBuilder.Optionally<A> */

Optionally<undefined> RegexBuilder::Optionally::init(Regex<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eae900)();
  return (Optionally<undefined>)param_1.unknown;
}


