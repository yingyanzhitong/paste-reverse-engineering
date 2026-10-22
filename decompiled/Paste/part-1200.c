/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfa35c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::UnkeyedEncodingContainer::$encode */

/* (extension in Swift):Swift.UnkeyedEncodingContainer.encode(Swift.Int128) throws -> () */

void (extension_Swift)::Swift::UnkeyedEncodingContainer::_encode(Int128 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead828)();
  return;
}



/* Address: 0x100bfa368 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::UnkeyedEncodingContainer::$encode */

/* (extension in Swift):Swift.UnkeyedEncodingContainer.encode(Swift.UInt128) throws -> () */

void (extension_Swift)::Swift::UnkeyedEncodingContainer::_encode(UInt128 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead830)();
  return;
}



/* Address: 0x100bfa374 | /usr/lib/swift/libswiftCore.dylib::Swift::$_getErrorEmbeddedNSError */

/* Swift._getErrorEmbeddedNSError<A where A: Swift.Error>(A) -> Swift.AnyObject? */

void Swift::__getErrorEmbeddedNSError(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___getErrorEmbeddedNSError_100ead838)();
  return;
}



/* Address: 0x100bfa380 | /usr/lib/swift/libswiftCore.dylib::Swift::LosslessStringConvertible::$init */

/* dispatch thunk of Swift.LosslessStringConvertible.init(Swift.String) -> A? */

void Swift::LosslessStringConvertible::_init(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ead840)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bfa38c | /usr/lib/swift/libswiftCore.dylib::Swift::DefaultStringInterpolation::$appendInterpolation */

/* Swift.DefaultStringInterpolation.appendInterpolation<A>(A) -> () */

void Swift::DefaultStringInterpolation::_appendInterpolation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendInterpolation_100ead848)();
  return;
}



/* Address: 0x100bfa398 | /usr/lib/swift/libswiftCore.dylib::Swift::DefaultStringInterpolation::$appendInterpolation */

/* Swift.DefaultStringInterpolation.appendInterpolation<A where A: Swift.CustomStringConvertible>(A)
   -> () */

void Swift::DefaultStringInterpolation::_appendInterpolation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendInterpolation_100ead850)();
  return;
}



/* Address: 0x100bfa3a4 | /usr/lib/swift/libswiftCore.dylib::Swift::$_forceBridgeFromObjectiveC */

/* Swift._forceBridgeFromObjectiveC<A>(Swift.AnyObject, A.Type) -> A */

void Swift::__forceBridgeFromObjectiveC(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___forceBridgeFromObjectiveC_100ead878)();
  return;
}



/* Address: 0x100bfa3b0 | /usr/lib/swift/libswiftCore.dylib::Swift::_stdlib_isOSVersionAtLeast */

/* Swift._stdlib_isOSVersionAtLeast(Builtin.Word, Builtin.Word, Builtin.Word) -> Builtin.Int1 */

__int8 Swift::_stdlib_isOSVersionAtLeast(__int16 param_1,__int16 param_2,__int16 param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(ushort)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfa3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stdlib_isOSVersionAtLeast_100ead880)(uVar1,param_2,param_3);
  return (__int8)uVar1;
}



/* Address: 0x100bfa3bc | /usr/lib/swift/libswiftCore.dylib::Swift::ExpressibleByIntegerLiteral::$init */

/* dispatch thunk of Swift.ExpressibleByIntegerLiteral.init(integerLiteral: A.IntegerLiteralType) ->
   A */

void Swift::ExpressibleByIntegerLiteral::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ead888)();
  return;
}



/* Address: 0x100bfa3c8 | /usr/lib/swift/libswiftCore.dylib::Swift::$_bridgeAnythingToObjectiveC */

/* Swift._bridgeAnythingToObjectiveC<A>(A) -> Swift.AnyObject */

void Swift::__bridgeAnythingToObjectiveC(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___bridgeAnythingToObjectiveC_100ead8b0)();
  return;
}



/* Address: 0x100bfa3d4 | /usr/lib/swift/libswiftCore.dylib::Swift::$_diagnoseUnexpectedEnumCase */

/* Swift._diagnoseUnexpectedEnumCase<A>(type: A.Type) -> Swift.Never */

Never Swift::__diagnoseUnexpectedEnumCase(void)

{
  Never in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___diagnoseUnexpectedEnumCase_100ead8b8)();
  return (Never)in_w0.value;
}



/* Address: 0x100bfa3e0 | /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck */

/* Swift._stringCompareWithSmolCheck(_: Swift._StringGuts, _: Swift._StringGuts, expecting:
   Swift._StringComparisonResult) -> Swift.Bool */

bool Swift::_stringCompareWithSmolCheck
               (_StringGuts param_1,_StringGuts param_2,_StringComparisonResult expecting)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bfa3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stringCompareWithSmolCheck_100ead8c0)(uVar1,param_2.unknown,expecting.value);
  return (bool)uVar1;
}



/* Address: 0x100bfa3ec | /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withTaskCancellationHandler */

/* Swift.withTaskCancellationHandler<A>(operation: () async throws -> A, onCancel: @Sendable () ->
   (), isolation: isolated Swift.Actor?) async throws -> A */

void Swift::_withTaskCancellationHandler(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withTaskCancellationHandler_100eaefb0)();
  return;
}



/* Address: 0x100bfa3f8 | /usr/lib/swift/libswiftCore.dylib::Swift::CustomDebugStringConvertible::get_debugDescription */

/* dispatch thunk of Swift.CustomDebugStringConvertible.debugDescription.getter : Swift.String */

String Swift::CustomDebugStringConvertible::get_debugDescription(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_debugDescription_100ead8d0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bfa404 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$get_codingPath */

/* dispatch thunk of Swift.SingleValueDecodingContainer.codingPath.getter : [Swift.CodingKey] */

void Swift::SingleValueDecodingContainer::_get_codingPath(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_codingPath_100ead8d8)();
  return;
}



/* Address: 0x100bfa410 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode(Swift.String.Type) throws ->
   Swift.String */

String Swift::SingleValueDecodingContainer::_decode(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead8e0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bfa41c | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode(Swift.Bool.Type) throws -> Swift.Bool
    */

bool Swift::SingleValueDecodingContainer::_decode(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead8e8)();
  return (bool)in_w0;
}



/* Address: 0x100bfa428 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode(Swift.Double.Type) throws ->
   Swift.Double */

double Swift::SingleValueDecodingContainer::_decode(void)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead8f0)();
  return in_d0;
}



/* Address: 0x100bfa434 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode(Swift.Int.Type) throws -> Swift.Int
    */

__int64 Swift::SingleValueDecodingContainer::_decode(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead8f8)();
  return in_x0;
}



/* Address: 0x100bfa440 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode<A where A1: Swift.Decodable>(A1.Type)
   throws -> A1 */

void Swift::SingleValueDecodingContainer::_decode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead900)();
  return;
}



/* Address: 0x100bfa44c | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::$decode */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decode(Swift.UInt64.Type) throws ->
   Swift.UInt64 */

__uint64 Swift::SingleValueDecodingContainer::_decode(void)

{
  __uint64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead908)();
  return in_x0;
}



/* Address: 0x100bfa458 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueDecodingContainer::decodeNil */

/* dispatch thunk of Swift.SingleValueDecodingContainer.decodeNil() -> Swift.Bool */

bool Swift::SingleValueDecodingContainer::decodeNil(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_decodeNil_100ead910)();
  return (bool)in_w0;
}



/* Address: 0x100bfa464 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SingleValueDecodingContainer::$decode */

/* (extension in Swift):Swift.SingleValueDecodingContainer.decode(Swift.Int128.Type) throws ->
   Swift.Int128 */

Int128 (extension_Swift)::Swift::SingleValueDecodingContainer::_decode(void)

{
  Int128 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead918)();
  return (Int128)in_x0.unknown;
}



/* Address: 0x100bfa470 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SingleValueDecodingContainer::$decode */

/* (extension in Swift):Swift.SingleValueDecodingContainer.decode(Swift.UInt128.Type) throws ->
   Swift.UInt128 */

UInt128 (extension_Swift)::Swift::SingleValueDecodingContainer::_decode(void)

{
  UInt128 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100ead920)();
  return (UInt128)in_x0.unknown;
}



/* Address: 0x100bfa47c | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encode */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encode(Swift.String) throws -> () */

void Swift::SingleValueEncodingContainer::_encode(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead928)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bfa488 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encode */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encode(Swift.Bool) throws -> () */

void Swift::SingleValueEncodingContainer::_encode(bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead930)(param_1);
  return;
}



/* Address: 0x100bfa494 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encode */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encode(Swift.Double) throws -> () */

void Swift::SingleValueEncodingContainer::_encode(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead938)();
  return;
}



/* Address: 0x100bfa4a0 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encode */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encode(Swift.Int) throws -> () */

void Swift::SingleValueEncodingContainer::_encode(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead940)();
  return;
}



/* Address: 0x100bfa4ac | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encode */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encode<A where A1: Swift.Encodable>(A1)
   throws -> () */

void Swift::SingleValueEncodingContainer::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead948)();
  return;
}



/* Address: 0x100bfa4b8 | /usr/lib/swift/libswiftCore.dylib::Swift::SingleValueEncodingContainer::$encodeNil */

/* dispatch thunk of Swift.SingleValueEncodingContainer.encodeNil() throws -> () */

void Swift::SingleValueEncodingContainer::_encodeNil(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeNil_100ead950)();
  return;
}



/* Address: 0x100bfa4c4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SingleValueEncodingContainer::$encode */

/* (extension in Swift):Swift.SingleValueEncodingContainer.encode(Swift.Int128) throws -> () */

void (extension_Swift)::Swift::SingleValueEncodingContainer::_encode(Int128 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead958)();
  return;
}



/* Address: 0x100bfa4d0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SingleValueEncodingContainer::$encode */

/* (extension in Swift):Swift.SingleValueEncodingContainer.encode(Swift.UInt128) throws -> () */

void (extension_Swift)::Swift::SingleValueEncodingContainer::_encode(UInt128 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100ead960)();
  return;
}



/* Address: 0x100bfa4dc | /usr/lib/swift/libswiftCore.dylib::Swift::__ContiguousArrayStorageBase::$get_staticElementType */

/* dispatch thunk of Swift.__ContiguousArrayStorageBase.staticElementType.getter : Any.Type */

void __thiscall
Swift::__ContiguousArrayStorageBase::_get_staticElementType
          (__ContiguousArrayStorageBase *this,__ContiguousArrayStorageBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_staticElementType_100ead968)();
  return;
}



/* Address: 0x100bfa4e8 | /usr/lib/swift/libswiftCore.dylib::Swift::__ContiguousArrayStorageBase::typeMetadataAccessor */

/* type metadata accessor for Swift.__ContiguousArrayStorageBase */

__ContiguousArrayStorageBase * Swift::__ContiguousArrayStorageBase::typeMetadataAccessor(void)

{
  __ContiguousArrayStorageBase *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead970)();
  return in_x0;
}



/* Address: 0x100bfa4f4 | /usr/lib/swift/libswiftCore.dylib::Swift::$==_infix */

/* Swift.== infix<A where A: Swift.RawRepresentable, A.RawValue: Swift.Equatable>(A, A) ->
   Swift.Bool */

bool Swift::____infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_____infix_100ead980)();
  return (bool)param_1;
}



/* Address: 0x100bfa500 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.String.Type,
   forKey: A.Key) throws -> Swift.String? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead988)();
  return;
}



/* Address: 0x100bfa50c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Bool.Type,
   forKey: A.Key) throws -> Swift.Bool? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead990)();
  return;
}



/* Address: 0x100bfa518 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Double.Type,
   forKey: A.Key) throws -> Swift.Double? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead998)();
  return;
}



/* Address: 0x100bfa524 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Float.Type,
   forKey: A.Key) throws -> Swift.Float? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9a0)();
  return;
}



/* Address: 0x100bfa530 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Int.Type,
   forKey: A.Key) throws -> Swift.Int? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9a8)();
  return;
}



/* Address: 0x100bfa53c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.UInt.Type,
   forKey: A.Key) throws -> Swift.UInt? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9b0)();
  return;
}



/* Address: 0x100bfa548 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent<A where A1:
   Swift.Decodable>(_: A1.Type, forKey: A.Key) throws -> A1? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9b8)();
  return;
}



/* Address: 0x100bfa554 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Int8.Type,
   forKey: A.Key) throws -> Swift.Int8? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9c0)();
  return;
}



/* Address: 0x100bfa560 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Int16.Type,
   forKey: A.Key) throws -> Swift.Int16? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9c8)();
  return;
}



/* Address: 0x100bfa56c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Int32.Type,
   forKey: A.Key) throws -> Swift.Int32? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9d0)();
  return;
}



/* Address: 0x100bfa578 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.Int64.Type,
   forKey: A.Key) throws -> Swift.Int64? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9d8)();
  return;
}



/* Address: 0x100bfa584 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.UInt8.Type,
   forKey: A.Key) throws -> Swift.UInt8? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9e0)();
  return;
}



/* Address: 0x100bfa590 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.UInt16.Type,
   forKey: A.Key) throws -> Swift.UInt16? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9f0)();
  return;
}



/* Address: 0x100bfa59c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.UInt32.Type,
   forKey: A.Key) throws -> Swift.UInt32? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100ead9f8)();
  return;
}



/* Address: 0x100bfa5a8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decodeIfPresent */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decodeIfPresent(_: Swift.UInt64.Type,
   forKey: A.Key) throws -> Swift.UInt64? */

void (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeIfPresent_100eada00)();
  return;
}



/* Address: 0x100bfa5b4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decode */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decode(_: Swift.Int128.Type, forKey:
   A.Key) throws -> Swift.Int128 */

Int128 (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decode(void)

{
  Int128 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100eada10)();
  return (Int128)in_x0.unknown;
}



/* Address: 0x100bfa5c0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedDecodingContainerProtocol::$decode */

/* (extension in Swift):Swift.KeyedDecodingContainerProtocol.decode(_: Swift.UInt128.Type, forKey:
   A.Key) throws -> Swift.UInt128 */

UInt128 (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decode(void)

{
  UInt128 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfa5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decode_100eada18)();
  return (UInt128)in_x0.unknown;
}



/* Address: 0x100bfa5cc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.String?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada20)();
  return;
}



/* Address: 0x100bfa5d8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Bool?, forKey:
   A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada28)();
  return;
}



/* Address: 0x100bfa5e4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Double?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada30)();
  return;
}



/* Address: 0x100bfa5f0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Float?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada38)();
  return;
}



/* Address: 0x100bfa5fc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Int?, forKey:
   A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada40)();
  return;
}



/* Address: 0x100bfa608 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.UInt?, forKey:
   A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada48)();
  return;
}



/* Address: 0x100bfa614 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent<A where A1:
   Swift.Encodable>(_: A1?, forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada50)();
  return;
}



/* Address: 0x100bfa620 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Int8?, forKey:
   A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada58)();
  return;
}



/* Address: 0x100bfa62c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Int16?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada60)();
  return;
}



/* Address: 0x100bfa638 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Int32?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada68)();
  return;
}



/* Address: 0x100bfa644 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.Int64?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada70)();
  return;
}



/* Address: 0x100bfa650 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::KeyedEncodingContainerProtocol::$encodeIfPresent */

/* (extension in Swift):Swift.KeyedEncodingContainerProtocol.encodeIfPresent(_: Swift.UInt8?,
   forKey: A.Key) throws -> () */

void (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encodeIfPresent_100eada78)();
  return;
}


