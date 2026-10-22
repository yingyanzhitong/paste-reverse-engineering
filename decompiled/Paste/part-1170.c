/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf495c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$init */

/* Foundation.Data.init(contentsOf: __shared Foundation.URL, options: __C.NSDataReadingOptions)
   throws -> Foundation.Data */

Data Foundation::Data::_init(NSDataReadingOptions contentsOf)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea71f0)();
  return (Data)contentsOf.unknown;
}



/* Address: 0x100bf4968 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::Deallocator::$get__deallocator */

/* Foundation.Data.Deallocator._deallocator.getter : (Swift.UnsafeMutableRawPointer, Swift.Int) ->
   () */

void Foundation::Data::Deallocator::_get__deallocator(Deallocator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get__deallocator_100ea71f8)(param_1.value);
  return;
}



/* Address: 0x100bf4974 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::Deallocator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Data.Deallocator */

Deallocator Foundation::Data::Deallocator::typeMetadataAccessor(void)

{
  Deallocator in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf497c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7210)();
  return (Deallocator)in_w0.value;
}



/* Address: 0x100bf4980 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::InlineSlice::append */

/* Foundation.Data.InlineSlice.append(contentsOf: Swift.UnsafeRawBufferPointer) -> () */

void Foundation::Data::InlineSlice::append(UnsafeRawBufferPointer contentsOf,InlineSlice param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100ea7218)();
  return;
}



/* Address: 0x100bf498c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_copyContents */

/* Foundation.Data._copyContents(initializing: Swift.UnsafeMutableBufferPointer<Swift.UInt8>) ->
   (Foundation.Data.Iterator, Swift.Int) */

tuple2 Foundation::Data::_copyContents(UnsafeMutableBufferPointer<__int8> initializing,Data param_2)

{
  tuple2 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__copyContents_100ea7220)();
  tVar1._ = (__int64)param_2.unknown;
  tVar1._.unknown = initializing.unknown;
  return tVar1;
}



/* Address: 0x100bf4998 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$init */

/* Foundation.Data.init(base64Encoded: __shared Swift.String, options:
   __C.NSDataBase64DecodingOptions) -> Foundation.Data? */

void Foundation::Data::_init(NSDataBase64DecodingOptions base64Encoded)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7228)();
  return;
}



/* Address: 0x100bf49a4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::RangeReference::typeMetadataAccessor */

/* type metadata accessor for Foundation.Data.RangeReference */

RangeReference * Foundation::Data::RangeReference::typeMetadataAccessor(void)

{
  RangeReference *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf49ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7230)();
  return in_x0;
}



/* Address: 0x100bf49b0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::resetBytes */

/* Foundation.Data._Representation.resetBytes(in: Swift.Range<Swift.Int>) -> () */

void Foundation::Data::_Representation::resetBytes(Range<__int64> in,_Representation param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resetBytes_100ea7238)(in.unknown,param_2.value);
  return;
}



/* Address: 0x100bf49bc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::$replaceSubrange */

/* Foundation.Data._Representation.replaceSubrange(_: Swift.Range<Swift.Int>, with:
   Swift.UnsafeRawPointer?, count: Swift.Int) -> () */

void Foundation::Data::_Representation::_replaceSubrange
               (Range<__int64> param_1,__int64 with,_Representation count,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__replaceSubrange_100ea7240)(param_1.unknown,with,count.value);
  return;
}



/* Address: 0x100bf49c8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::init */

/* Foundation.Data._Representation.init(count: Swift.Int) -> Foundation.Data._Representation */

_Representation Foundation::Data::_Representation::init(__int64 count)

{
  _Representation _Var1;
  
  _Var1.value = (__int8)count;
                    /* WARNING: Could not recover jumptable at 0x000100bf49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7248)();
  return (_Representation)_Var1.value;
}



/* Address: 0x100bf49d4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::set_count */

/* Foundation.Data._Representation.count.setter : Swift.Int */

void __thiscall Foundation::Data::_Representation::set_count(_Representation *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_count_100ea7250)();
  return;
}



/* Address: 0x100bf49e0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::append */

/* Foundation.Data._Representation.append(contentsOf: Swift.UnsafeRawBufferPointer) -> () */

void Foundation::Data::_Representation::append
               (UnsafeRawBufferPointer contentsOf,_Representation param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100ea7258)(contentsOf.unknown,param_2.value);
  return;
}



/* Address: 0x100bf49ec | $$Foundation.Data._Representation.subscript.getter_:_(Swift.Range<Swift.Int>)_->_Foundation.Data */

void __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data_100ea7268
  )();
  return;
}



/* Address: 0x100bf49f8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::init */

/* Foundation.Data._Representation.init(Swift.UnsafeRawBufferPointer) ->
   Foundation.Data._Representation */

_Representation Foundation::Data::_Representation::init(UnsafeRawBufferPointer param_1)

{
  _Representation _Var1;
  
  _Var1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf4a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7270)();
  return (_Representation)_Var1.value;
}



/* Address: 0x100bf4a04 | $$Foundation.Data._Representation.subscript.getter_:_(Swift.Int)_->_Swift.UInt8 */

void __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8_100ea7278)()
  ;
  return;
}



/* Address: 0x100bf4a10 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$withUnsafeBytes */

/* Foundation.Data.withUnsafeBytes<A>((Swift.UnsafeRawBufferPointer) throws -> A) throws -> A */

void Foundation::Data::_withUnsafeBytes(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withUnsafeBytes_100ea7280)();
  return;
}



/* Address: 0x100bf4a1c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_bridgeToObjectiveC */

/* Foundation.Data._bridgeToObjectiveC() -> __C.NSData */

NSData * Foundation::Data::_bridgeToObjectiveC(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7288)();
  return (NSData *)param_1.unknown;
}



/* Address: 0x100bf4a28 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::base64EncodedString */

/* Foundation.Data.base64EncodedString(options: __C.NSDataBase64EncodingOptions) -> Swift.String */

String Foundation::Data::base64EncodedString(NSDataBase64EncodingOptions options,Data param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_base64EncodedString_100ea7290)();
  SVar1.bridgeObject = param_2.unknown;
  SVar1.str = options.unknown;
  return SVar1;
}



/* Address: 0x100bf4a34 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.Data._unconditionallyBridgeFromObjectiveC(__C.NSData?) -> Foundation.Data */

Data Foundation::Data::__unconditionallyBridgeFromObjectiveC(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea7298)();
  return (Data)param_1.unknown;
}



/* Address: 0x100bf4a40 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::hash */

/* Foundation.Data.hash(into: inout Swift.Hasher) -> () */

void Foundation::Data::hash(Hasher into,Data param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100ea72a0)();
  return;
}



/* Address: 0x100bf4a4c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::get_count */

/* Foundation.Data.count.getter : Swift.Int */

__int64 Foundation::Data::get_count(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100ea72a8)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf4a58 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$write */

/* Foundation.Data.write(to: Foundation.URL, options: __C.NSDataWritingOptions) throws -> () */

void Foundation::Data::_write(URL to,NSDataWritingOptions options,Data param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_100ea72b0)();
  return;
}



/* Address: 0x100bf4a64 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::append */

/* Foundation.Data.append(Foundation.Data) -> () */

void Foundation::Data::append(Data param_1,Data param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100ea72b8)();
  return;
}



/* Address: 0x100bf4a70 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::subdata */

/* Foundation.Data.subdata(in: Swift.Range<Swift.Int>) -> Foundation.Data */

Data Foundation::Data::subdata(Range<__int64> in,Data param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_subdata_100ea72c0)();
  return (Data)in.unknown;
}



/* Address: 0x100bf4a7c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::Iterator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Data.Iterator */

Iterator Foundation::Data::Iterator::typeMetadataAccessor(void)

{
  Iterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea72c8)();
  return (Iterator)in_x0.unknown;
}



/* Address: 0x100bf4a88 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::Iterator::init */

/* Foundation.Data.Iterator.init(_: Foundation.Data, at: Swift.Int) -> Foundation.Data.Iterator */

Iterator Foundation::Data::Iterator::init(Data param_1,__int64 at)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea72e0)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf4a94 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

/* Foundation.Date.init(timeIntervalSinceReferenceDate: Swift.Double) -> Foundation.Date */

Date Foundation::Date::init(double timeIntervalSinceReferenceDate)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7320)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100bf4aa0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_timeIntervalSinceReferenceDate */

/* Foundation.Date.timeIntervalSinceReferenceDate.getter : Swift.Double */

double Foundation::Date::get_timeIntervalSinceReferenceDate(Date param_1)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_timeIntervalSinceReferenceDate_100ea7328)();
  return in_d0;
}



/* Address: 0x100bf4aac | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_description */

/* Foundation.Date.description.getter : Swift.String */

String Foundation::Date::get_description(Date param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100ea7330)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf4ab8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_distantPast */

/* static Foundation.Date.distantPast.getter : Foundation.Date */

Date Foundation::Date::get_distantPast(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_distantPast_100ea7338)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf4ac4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

/* Foundation.Date.init(timeInterval: Swift.Double, since: Foundation.Date) -> Foundation.Date */

Date Foundation::Date::init(double timeInterval,Date since)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7340)();
  return (Date)since.unknown;
}



/* Address: 0x100bf4ad0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_distantFuture */

/* static Foundation.Date.distantFuture.getter : Foundation.Date */

Date Foundation::Date::get_distantFuture(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_distantFuture_100ea7348)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf4adc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::timeIntervalSince */

/* Foundation.Date.timeIntervalSince(Foundation.Date) -> Swift.Double */

double Foundation::Date::timeIntervalSince(Date param_1,Date param_2)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_timeIntervalSince_100ea7350)();
  return in_d0;
}



/* Address: 0x100bf4ae8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::DateTimeSeparator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date.ISO8601FormatStyle.DateTimeSeparator */

DateTimeSeparator
Foundation::Date::ISO8601FormatStyle::DateTimeSeparator::typeMetadataAccessor(void)

{
  DateTimeSeparator in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7360)();
  return (DateTimeSeparator)in_w0.value;
}



/* Address: 0x100bf4af4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::DateSeparator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date.ISO8601FormatStyle.DateSeparator */

DateSeparator Foundation::Date::ISO8601FormatStyle::DateSeparator::typeMetadataAccessor(void)

{
  DateSeparator in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7370)();
  return (DateSeparator)in_w0.value;
}



/* Address: 0x100bf4b00 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::TimeSeparator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date.ISO8601FormatStyle.TimeSeparator */

TimeSeparator Foundation::Date::ISO8601FormatStyle::TimeSeparator::typeMetadataAccessor(void)

{
  TimeSeparator in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7380)();
  return (TimeSeparator)in_w0.value;
}



/* Address: 0x100bf4b0c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::init */

/* Foundation.Date.ISO8601FormatStyle.init(dateSeparator:
   Foundation.Date.ISO8601FormatStyle.DateSeparator, dateTimeSeparator:
   Foundation.Date.ISO8601FormatStyle.DateTimeSeparator, timeSeparator:
   Foundation.Date.ISO8601FormatStyle.TimeSeparator, timeZoneSeparator:
   Foundation.Date.ISO8601FormatStyle.TimeZoneSeparator, includingFractionalSeconds: Swift.Bool,
   timeZone: Foundation.TimeZone) -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle
Foundation::Date::ISO8601FormatStyle::init
          (DateSeparator dateSeparator,DateTimeSeparator dateTimeSeparator,
          TimeSeparator timeSeparator,TimeZoneSeparator timeZoneSeparator,
          bool includingFractionalSeconds,TimeZone timeZone)

{
  ISO8601FormatStyle IVar1;
  
  IVar1.unknown = (undefined *)(ulong)(byte)dateSeparator.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf4b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7388)
            (IVar1.unknown,dateTimeSeparator.value,timeSeparator.value,timeZoneSeparator.value,
             includingFractionalSeconds);
  return (ISO8601FormatStyle)IVar1.unknown;
}



/* Address: 0x100bf4b18 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::timeSeparator */

/* Foundation.Date.ISO8601FormatStyle.timeSeparator(Foundation.Date.ISO8601FormatStyle.TimeSeparator)
   -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle
Foundation::Date::ISO8601FormatStyle::timeSeparator
          (TimeSeparator param_1,ISO8601FormatStyle param_2)

{
  ISO8601FormatStyle IVar1;
  
  IVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf4b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_timeSeparator_100ea7390)();
  return (ISO8601FormatStyle)IVar1.unknown;
}



/* Address: 0x100bf4b24 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::TimeZoneSeparator::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date.ISO8601FormatStyle.TimeZoneSeparator */

TimeZoneSeparator
Foundation::Date::ISO8601FormatStyle::TimeZoneSeparator::typeMetadataAccessor(void)

{
  TimeZoneSeparator in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea73a0)();
  return (TimeZoneSeparator)in_w0.value;
}



/* Address: 0x100bf4b30 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::day */

/* Foundation.Date.ISO8601FormatStyle.day() -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle Foundation::Date::ISO8601FormatStyle::day(ISO8601FormatStyle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_day_100ea73a8)();
  return (ISO8601FormatStyle)param_1.unknown;
}



/* Address: 0x100bf4b3c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::time */

/* Foundation.Date.ISO8601FormatStyle.time(includingFractionalSeconds: Swift.Bool) ->
   Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle
Foundation::Date::ISO8601FormatStyle::time
          (bool includingFractionalSeconds,ISO8601FormatStyle param_2)

{
  ISO8601FormatStyle IVar1;
  
  IVar1.unknown = (undefined *)(ulong)includingFractionalSeconds;
                    /* WARNING: Could not recover jumptable at 0x000100bf4b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_100ea73b0)();
  return (ISO8601FormatStyle)IVar1.unknown;
}



/* Address: 0x100bf4b48 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::year */

/* Foundation.Date.ISO8601FormatStyle.year() -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle Foundation::Date::ISO8601FormatStyle::year(ISO8601FormatStyle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_year_100ea73b8)();
  return (ISO8601FormatStyle)param_1.unknown;
}



/* Address: 0x100bf4b54 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::month */

/* Foundation.Date.ISO8601FormatStyle.month() -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle Foundation::Date::ISO8601FormatStyle::month(ISO8601FormatStyle param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_month_100ea73c0)();
  return (ISO8601FormatStyle)param_1.unknown;
}



/* Address: 0x100bf4b60 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::$parse */

/* Foundation.Date.ISO8601FormatStyle.parse(Swift.String) throws -> Foundation.Date */

Date Foundation::Date::ISO8601FormatStyle::_parse(String param_1,ISO8601FormatStyle param_2)

{
  Date DVar1;
  
  DVar1.unknown = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__parse_100ea73c8)(DVar1.unknown,param_1.bridgeObject);
  return (Date)DVar1.unknown;
}



/* Address: 0x100bf4b6c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::timeZone */

/* Foundation.Date.ISO8601FormatStyle.timeZone(separator:
   Foundation.Date.ISO8601FormatStyle.TimeZoneSeparator) -> Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle
Foundation::Date::ISO8601FormatStyle::timeZone
          (TimeZoneSeparator separator,ISO8601FormatStyle param_2)

{
  ISO8601FormatStyle IVar1;
  
  IVar1.unknown = (undefined *)(ulong)(byte)separator.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf4b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_timeZone_100ea73d0)();
  return (ISO8601FormatStyle)IVar1.unknown;
}



/* Address: 0x100bf4b78 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::set_timeZone */

/* Foundation.Date.ISO8601FormatStyle.timeZone.setter : Foundation.TimeZone */

void __thiscall
Foundation::Date::ISO8601FormatStyle::set_timeZone(ISO8601FormatStyle *this,TimeZone param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_timeZone_100ea73d8)();
  return;
}



/* Address: 0x100bf4b84 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date.ISO8601FormatStyle */

ISO8601FormatStyle Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor(void)

{
  ISO8601FormatStyle in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea73f0)();
  return (ISO8601FormatStyle)in_x0.unknown;
}



/* Address: 0x100bf4b90 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::addingTimeInterval */

/* Foundation.Date.addingTimeInterval(Swift.Double) -> Foundation.Date */

Date Foundation::Date::addingTimeInterval(double param_1,Date param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_addingTimeInterval_100ea7400)();
  return (Date)param_2.unknown;
}



/* Address: 0x100bf4b9c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::_bridgeToObjectiveC */

/* Foundation.Date._bridgeToObjectiveC() -> __C.NSDate */

NSDate * Foundation::Date::_bridgeToObjectiveC(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7408)();
  return (NSDate *)param_1.unknown;
}



/* Address: 0x100bf4ba8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::>_infix */

/* static Foundation.Date.> infix(Foundation.Date, Foundation.Date) -> Swift.Bool */

bool Foundation::Date::>_infix(Date param_1,Date param_2,Date param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_>_infix_100ea7410)();
  return (bool)uVar1;
}



/* Address: 0x100bf4bb4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::<_infix */

/* static Foundation.Date.< infix(Foundation.Date, Foundation.Date) -> Swift.Bool */

bool Foundation::Date::<_infix(Date param_1,Date param_2,Date param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_<_infix_100ea7418)();
  return (bool)uVar1;
}



/* Address: 0x100bf4bc0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

/* Foundation.Date.init(timeIntervalSinceNow: Swift.Double) -> Foundation.Date */

Date Foundation::Date::init(double timeIntervalSinceNow)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7420)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100bf4bcc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_timeIntervalSinceNow */

/* Foundation.Date.timeIntervalSinceNow.getter : Swift.Double */

double Foundation::Date::get_timeIntervalSinceNow(Date param_1)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_timeIntervalSinceNow_100ea7428)();
  return in_d0;
}



/* Address: 0x100bf4bd8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

/* Foundation.Date.init(timeIntervalSince1970: Swift.Double) -> Foundation.Date */

Date Foundation::Date::init(double timeIntervalSince1970)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7430)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100bf4be4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_timeIntervalSince1970 */

/* Foundation.Date.timeIntervalSince1970.getter : Swift.Double */

double Foundation::Date::get_timeIntervalSince1970(Date param_1)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_timeIntervalSince1970_100ea7438)();
  return in_d0;
}



/* Address: 0x100bf4bf0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::==_infix */

/* static Foundation.Date.== infix(Foundation.Date, Foundation.Date) -> Swift.Bool */

bool Foundation::Date::___infix(Date param_1,Date param_2,Date param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf4bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea7440)();
  return (bool)uVar1;
}



/* Address: 0x100bf4bfc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.Date._unconditionallyBridgeFromObjectiveC(__C.NSDate?) -> Foundation.Date */

Date Foundation::Date::__unconditionallyBridgeFromObjectiveC(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea7448)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf4c08 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::get_now */

/* static Foundation.Date.now.getter : Foundation.Date */

Date Foundation::Date::get_now(Date param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_now_100ea7450)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf4c14 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::$init */

/* Foundation.Date.init(from: Swift.Decoder) throws -> Foundation.Date */

Date Foundation::Date::_init(void)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7458)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100bf4c20 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::$encode */

/* Foundation.Date.encode(to: Swift.Encoder) throws -> () */

void Foundation::Date::_encode(Date to)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ea7460)();
  return;
}



/* Address: 0x100bf4c2c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::compare */

/* Foundation.Date.compare(Foundation.Date) -> __C.NSComparisonResult */

NSComparisonResult Foundation::Date::compare(Date param_1,Date param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_compare_100ea7468)();
  return (NSComparisonResult)param_1.unknown;
}



/* Address: 0x100bf4c38 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::$formatted */

/* Foundation.Date.formatted<A where A: Foundation.FormatStyle, A.FormatInput == Foundation.Date>(A)
   -> A.FormatOutput */

void Foundation::Date::_formatted(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf4c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__formatted_100ea7470)();
  return;
}



/* Address: 0x100bf4c44 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

/* Foundation.Date.init() -> Foundation.Date */

Date Foundation::Date::init(void)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7478)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100bf4c50 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::typeMetadataAccessor */

/* type metadata accessor for Foundation.Date */

Date Foundation::Date::typeMetadataAccessor(void)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7480)();
  return (Date)in_x0.unknown;
}


