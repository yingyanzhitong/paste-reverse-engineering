/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf7f5c | /usr/lib/swift/libswiftCore.dylib::Swift::Sequence::$_customContainsEquatableElement */

/* dispatch thunk of Swift.Sequence._customContainsEquatableElement(A.Element) -> Swift.Bool? */

void Swift::Sequence::__customContainsEquatableElement(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___customContainsEquatableElement_100eac2c8)();
  return;
}



/* Address: 0x100bf7f68 | /usr/lib/swift/libswiftCore.dylib::Swift::Sequence::$withContiguousStorageIfAvailable */

/* dispatch thunk of
   Swift.Sequence.withContiguousStorageIfAvailable<A>((Swift.UnsafeBufferPointer<A.Element>) throws
   -> A1) throws -> A1? */

void Swift::Sequence::_withContiguousStorageIfAvailable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousStorageIfAvailable_100eac2d0)();
  return;
}



/* Address: 0x100bf7f74 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$allSatisfy */

/* (extension in Swift):Swift.Sequence.allSatisfy((A.Element) throws -> Swift.Bool) throws ->
   Swift.Bool */

bool (extension_Swift)::Swift::Sequence::_allSatisfy(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allSatisfy_100eac2e8)();
  return (bool)in_w0;
}



/* Address: 0x100bf7f80 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$compactMap */

/* (extension in Swift):Swift.Sequence.compactMap<A>((A.Element) throws -> A1?) throws -> [A1] */

void (extension_Swift)::Swift::Sequence::_compactMap(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__compactMap_100eac2f0)();
  return;
}



/* Address: 0x100bf7f8c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::enumerated */

/* (extension in Swift):Swift.Sequence.enumerated() -> Swift.EnumeratedSequence<A> */

EnumeratedSequence<undefined> (extension_Swift)::Swift::Sequence::enumerated(void)

{
  EnumeratedSequence<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_enumerated_100eac2f8)();
  return (EnumeratedSequence<undefined>)in_x0.unknown;
}



/* Address: 0x100bf7f98 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$_copyContents */

/* (extension in Swift):Swift.Sequence._copyContents(initializing:
   Swift.UnsafeMutableBufferPointer<A.Element>) -> (A.Iterator, Swift.Int) */

tuple2_conflict2
(extension_Swift)::Swift::Sequence::__copyContents
          (UnsafeMutableBufferPointer<(extension_in_Swift):Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
           initializing)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyContents_100eac300)();
  return (tuple2_conflict2)initializing.unknown;
}



/* Address: 0x100bf7fa4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$withContiguousStorageIfAvailable */

/* (extension in
   Swift):Swift.Sequence.withContiguousStorageIfAvailable<A>((Swift.UnsafeBufferPointer<A.Element>)
   throws -> A1) throws -> A1? */

void (extension_Swift)::Swift::Sequence::_withContiguousStorageIfAvailable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousStorageIfAvailable_100eac308)();
  return;
}



/* Address: 0x100bf7fb0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::get_lazy */

/* (extension in Swift):Swift.Sequence.lazy.getter : Swift.LazySequence<A> */

LazySequence<undefined> (extension_Swift)::Swift::Sequence::get_lazy(void)

{
  LazySequence<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_lazy_100eac310)();
  return (LazySequence<undefined>)in_x0.unknown;
}



/* Address: 0x100bf7fbc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$first */

/* (extension in Swift):Swift.Sequence.first(where: (A.Element) throws -> Swift.Bool) throws ->
   A.Element? */

void (extension_Swift)::Swift::Sequence::_first(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__first_100eac318)();
  return;
}



/* Address: 0x100bf7fc8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$filter */

/* (extension in Swift):Swift.Sequence.filter((A.Element) throws -> Swift.Bool) throws ->
   [A.Element] */

void (extension_Swift)::Swift::Sequence::_filter(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__filter_100eac320)();
  return;
}



/* Address: 0x100bf7fd4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$reduce */

/* (extension in Swift):Swift.Sequence.reduce<A>(A1, (A1, A.Element) throws -> A1) throws -> A1 */

void (extension_Swift)::Swift::Sequence::_reduce(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__reduce_100eac328)();
  return;
}



/* Address: 0x100bf7fe0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$sorted */

/* (extension in Swift):Swift.Sequence.sorted(by: (A.Element, A.Element) throws -> Swift.Bool)
   throws -> [A.Element] */

void (extension_Swift)::Swift::Sequence::_sorted(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sorted_100eac330)();
  return;
}



/* Address: 0x100bf7fec | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$flatMap */

/* (extension in Swift):Swift.Sequence.flatMap<A where A1: Swift.Sequence>((A.Element) throws -> A1)
   throws -> [A1.Element] */

void (extension_Swift)::Swift::Sequence::_flatMap(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__flatMap_100eac338)();
  return;
}



/* Address: 0x100bf7ff8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$forEach */

/* (extension in Swift):Swift.Sequence.forEach((A.Element) throws -> ()) throws -> () */

void (extension_Swift)::Swift::Sequence::_forEach(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__forEach_100eac340)();
  return;
}



/* Address: 0x100bf8004 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$contains */

/* (extension in Swift):Swift.Sequence.contains(where: (A.Element) throws -> Swift.Bool) throws ->
   Swift.Bool */

bool (extension_Swift)::Swift::Sequence::_contains(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__contains_100eac348)();
  return (bool)in_w0;
}



/* Address: 0x100bf8010 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$elementsEqual */

/* (extension in Swift):Swift.Sequence< where A.Element: Swift.Equatable>.elementsEqual<A where A1:
   Swift.Sequence, A.Element == A1.Element>(A1) -> Swift.Bool */

bool (extension_Swift)::Swift::Sequence::_elementsEqual(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__elementsEqual_100eac350)();
  return (bool)param_1;
}



/* Address: 0x100bf801c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$contains */

/* (extension in Swift):Swift.Sequence< where A.Element: Swift.Equatable>.contains(A.Element) ->
   Swift.Bool */

bool (extension_Swift)::Swift::Sequence::_contains(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__contains_100eac358)();
  return (bool)in_w0;
}



/* Address: 0x100bf8028 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$joined */

/* (extension in Swift):Swift.Sequence< where A.Element: Swift.StringProtocol>.joined(separator:
   Swift.String) -> Swift.String */

String (extension_Swift)::Swift::Sequence::_joined(String separator)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = separator.bridgeObject;
  pcVar1 = separator.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__joined_100eac360)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf8034 | /usr/lib/swift/libswiftCore.dylib::Swift::RangeExpression::$relative */

/* dispatch thunk of Swift.RangeExpression.relative<A where A1: Swift.Collection, A.Bound ==
   A1.Index>(to: A1) -> Swift.Range<A.Bound> */

Range<dispatch_thunk_of_Swift_RangeExpression_relative<A_where_A1:_Swift_Collection,A_Bound____A1_Index>(to:_A1)__>_Swift_Range<A_Bound>>
 Swift::RangeExpression::_relative
           (Range<dispatch_thunk_of_Swift_RangeExpression_relative<A_where_A1:_Swift_Collection,A_Bound____A1_Index>(to:_A1)__>_Swift_Range<A_Bound>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__relative_100eac380)();
  return (Range<dispatch_thunk_of_Swift_RangeExpression_relative<A_where_A1:_Swift_Collection,A_Bound____A1_Index>(to:_A1)__>_Swift_Range<A_Bound>>
          )param_1.unknown;
}



/* Address: 0x100bf8040 | /usr/lib/swift/libswiftCore.dylib::Swift::RawRepresentable::$get_rawValue */

/* dispatch thunk of Swift.RawRepresentable.rawValue.getter : A.RawValue */

void Swift::RawRepresentable::_get_rawValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_rawValue_100eac388)();
  return;
}



/* Address: 0x100bf804c | /usr/lib/swift/libswiftCore.dylib::Swift::RawRepresentable::$init */

/* dispatch thunk of Swift.RawRepresentable.init(rawValue: A.RawValue) -> A? */

void Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac398)();
  return;
}



/* Address: 0x100bf8058 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.String>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3a8)();
  return;
}



/* Address: 0x100bf8064 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf806c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3b0)();
  return;
}



/* Address: 0x100bf8070 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int8>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3b8)();
  return;
}



/* Address: 0x100bf807c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int32>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3c0)();
  return;
}



/* Address: 0x100bf8088 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt16>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3c8)();
  return;
}



/* Address: 0x100bf8094 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt32>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf809c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3d0)();
  return;
}



/* Address: 0x100bf80a0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$encode */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Encodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt64>.encode(to: Swift.Encoder) throws -> () */

void (extension_Swift)::Swift::RawRepresentable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac3d8)();
  return;
}



/* Address: 0x100bf80ac | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$get_hashValue */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Hashable,
   A.Swift.RawRepresentable.RawValue: Swift.Hashable>.hashValue.getter : Swift.Int */

__int64 (extension_Swift)::Swift::RawRepresentable::_get_hashValue(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf80b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_hashValue_100eac3e0)();
  return in_x0;
}



/* Address: 0x100bf80b8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$_rawHashValue */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Hashable,
   A.Swift.RawRepresentable.RawValue: Swift.Hashable>._rawHashValue(seed: Swift.Int) -> Swift.Int */

__int64 (extension_Swift)::Swift::RawRepresentable::__rawHashValue(__int64 seed)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___rawHashValue_100eac3e8)();
  return seed;
}



/* Address: 0x100bf80c4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$hash */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Hashable,
   A.Swift.RawRepresentable.RawValue: Swift.Hashable>.hash(into: inout Swift.Hasher) -> () */

void (extension_Swift)::Swift::RawRepresentable::_hash(Hasher into)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__hash_100eac3f0)();
  return;
}



/* Address: 0x100bf80d0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.String>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac3f8)();
  return;
}



/* Address: 0x100bf80dc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac400)();
  return;
}



/* Address: 0x100bf80e8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int8>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac408)();
  return;
}



/* Address: 0x100bf80f4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.Int32>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf80fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac410)();
  return;
}



/* Address: 0x100bf8100 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt16>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac418)();
  return;
}



/* Address: 0x100bf810c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt32>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac420)();
  return;
}



/* Address: 0x100bf8118 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RawRepresentable::$init */

/* (extension in Swift):Swift.RawRepresentable< where A: Swift.Decodable,
   A.Swift.RawRepresentable.RawValue == Swift.UInt64>.init(from: Swift.Decoder) throws -> A */

void (extension_Swift)::Swift::RawRepresentable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac428)();
  return;
}



/* Address: 0x100bf8124 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$_makeUniqueAndReserveCapacityIfNotUnique */

/* generic pre-specialization <Swift.AnyObject> of
   Swift.Array._makeUniqueAndReserveCapacityIfNotUnique() -> () */

void Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf812c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___makeUniqueAndReserveCapacityIfNotUnique_100eac430)();
  return;
}



/* Address: 0x100bf8130 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Array._bridgeToObjectiveC() -> __C.NSArray */

NSArray * (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC(void)

{
  NSArray *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7888)();
  return in_x0;
}



/* Address: 0x100bf813c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Array<undefined>::$_forceBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Array._forceBridgeFromObjectiveC(_: __C.NSArray, result:
   inout [A]?) -> () */

void (extension_Foundation)::Swift::Array<undefined>::__forceBridgeFromObjectiveC(NSArray *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___forceBridgeFromObjectiveC_100ea7890)();
  return;
}



/* Address: 0x100bf8148 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Array<undefined>::$_conditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Array._conditionallyBridgeFromObjectiveC(_: __C.NSArray,
   result: inout [A]?) -> Swift.Bool */

bool (extension_Foundation)::Swift::Array<undefined>::__conditionallyBridgeFromObjectiveC
               (NSArray *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___conditionallyBridgeFromObjectiveC_100ea7898)();
  return (bool)uVar1;
}



/* Address: 0x100bf8154 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Array<undefined>::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Array._unconditionallyBridgeFromObjectiveC(__C.NSArray?)
   -> [A] */

void (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf815c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea78a0)();
  return;
}



/* Address: 0x100bf8160 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_description */

/* Swift.Array.description.getter : Swift.String */

String Swift::Array<undefined>::get_description(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eac438)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf816c | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$_adoptStorage */

/* static Swift.Array._adoptStorage(_: __owned Swift._ContiguousArrayStorage<A>, count: Swift.Int)
   -> ([A], Swift.UnsafeMutablePointer<A>) */

tuple2_conflict3
Swift::Array<undefined>::__adoptStorage(undefined8 param_1,UnsafeMutablePointer<undefined> param_2)

{
  tuple2_conflict3 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___adoptStorage_100eac440)();
  tVar1._.unknown = param_2.unknown;
  tVar1._0_8_ = param_1;
  return tVar1;
}



/* Address: 0x100bf8178 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$replaceSubrange */

/* Swift.Array.replaceSubrange<A where A == A1.Element, A1: Swift.Collection>(_:
   Swift.Range<Swift.Int>, with: __owned A1) -> () */

void Swift::Array<undefined>::_replaceSubrange(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__replaceSubrange_100eac448)();
  return;
}



/* Address: 0x100bf8184 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::reserveCapacity */

/* Swift.Array.reserveCapacity(Swift.Int) -> () */

void Swift::Array<undefined>::reserveCapacity(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf818c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_reserveCapacity_100eac450)();
  return;
}



/* Address: 0x100bf8190 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$withUnsafeBytes */

/* Swift.Array.withUnsafeBytes<A>((Swift.UnsafeRawBufferPointer) throws -> A1) throws -> A1 */

void Swift::Array<undefined>::_withUnsafeBytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withUnsafeBytes_100eac458)();
  return;
}



/* Address: 0x100bf819c | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$_createNewBuffer */

/* generic pre-specialization <Swift.AnyObject> of Swift.Array._createNewBuffer(bufferIsUnique:
   Swift.Bool, minimumCapacity: Swift.Int, growForAppend: Swift.Bool) -> () */

void Swift::Array<undefined>::__createNewBuffer(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___createNewBuffer_100eac460)();
  return;
}



/* Address: 0x100bf81a8 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::+_infix */

/* static Swift.Array.+ infix([A], [A]) -> [A] */

void Swift::Array<undefined>::__infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___infix_100eac468)();
  return;
}



/* Address: 0x100bf81b4 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::_makeMutableAndUnique */

/* Swift.Array._makeMutableAndUnique() -> () */

void Swift::Array<undefined>::_makeMutableAndUnique(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeMutableAndUnique_100eac470)();
  return;
}



/* Address: 0x100bf81c0 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::_allocateUninitialized */

/* static Swift.Array._allocateUninitialized(Swift.Int) -> ([A], Swift.UnsafeMutablePointer<A>) */

tuple2_conflict3
Swift::Array<undefined>::_allocateUninitialized
          (undefined8 param_1,UnsafeMutablePointer<undefined> param_2)

{
  tuple2_conflict3 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf81c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocateUninitialized_100eac478)();
  tVar1._.unknown = param_2.unknown;
  tVar1._0_8_ = param_1;
  return tVar1;
}



/* Address: 0x100bf81cc | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::_allocateBufferUninitialized */

/* static Swift.Array._allocateBufferUninitialized(minimumCapacity: Swift.Int) ->
   Swift._ArrayBuffer<A> */

_ArrayBuffer<undefined>
Swift::Array<undefined>::_allocateBufferUninitialized(_ArrayBuffer<undefined> minimumCapacity)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocateBufferUninitialized_100eac480)();
  return (_ArrayBuffer<undefined>)minimumCapacity.unknown;
}



/* Address: 0x100bf81d8 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$withContiguousStorageIfAvailable */

/* Swift.Array.withContiguousStorageIfAvailable<A>((Swift.UnsafeBufferPointer<A>) throws -> A1)
   throws -> A1? */

void Swift::Array<undefined>::_withContiguousStorageIfAvailable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousStorageIfAvailable_100eac488)();
  return;
}



/* Address: 0x100bf81e4 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$_appendElementAssumeUniqueAndCapacity */

/* generic pre-specialization <Swift.AnyObject> of
   Swift.Array._appendElementAssumeUniqueAndCapacity(_: Swift.Int, newElement: __owned A) -> () */

void Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___appendElementAssumeUniqueAndCapacity_100eac490)();
  return;
}



/* Address: 0x100bf81f0 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$withContiguousMutableStorageIfAvailable */

/* Swift.Array.withContiguousMutableStorageIfAvailable<A>((inout
   Swift.UnsafeMutableBufferPointer<A>) throws -> A1) throws -> A1? */

void Swift::Array<undefined>::_withContiguousMutableStorageIfAvailable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf81f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousMutableStorageIfAvailable_100eac498)();
  return;
}



/* Address: 0x100bf81fc | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_count */

/* Swift.Array.count.getter : Swift.Int */

__int64 Swift::Array<undefined>::get_count(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac4a0)();
  return param_1;
}



/* Address: 0x100bf8208 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$append */

/* Swift.Array.append<A where A == A1.Element, A1: Swift.Sequence>(contentsOf: __owned A1) -> () */

void Swift::Array<undefined>::_append(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__append_100eac4a8)();
  return;
}



/* Address: 0x100bf8214 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::append */

/* Swift.Array.append(__owned A) -> () */

void Swift::Array<undefined>::append(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf821c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100eac4b0)();
  return;
}



/* Address: 0x100bf8220 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::insert */

/* Swift.Array.insert(_: __owned A, at: Swift.Int) -> () */

void Swift::Array<undefined>::insert(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_insert_100eac4b8)();
  return;
}



/* Address: 0x100bf822c | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::remove */

/* Swift.Array.remove(at: Swift.Int) -> A */

void Swift::Array<undefined>::remove(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_remove_100eac4c0)();
  return;
}



/* Address: 0x100bf8238 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_endIndex */

/* Swift.Array.endIndex.getter : Swift.Int */

__int64 Swift::Array<undefined>::get_endIndex(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_endIndex_100eac4c8)();
  return param_1;
}



/* Address: 0x100bf8244 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::removeAll */

/* Swift.Array.removeAll(keepingCapacity: Swift.Bool) -> () */

void Swift::Array<undefined>::removeAll(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf824c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeAll_100eac4d0)();
  return;
}



/* Address: 0x100bf8250 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::typeMetadataAccessor */

/* type metadata accessor for Swift.Array */

void Swift::Array<undefined>::typeMetadataAccessor(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eac4d8)();
  return;
}


