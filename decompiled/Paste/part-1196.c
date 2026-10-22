/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf975c | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::get__isContiguousASCII */

/* Swift._StringGuts._isContiguousASCII.getter : Swift.Bool */

bool Swift::_StringGuts::get__isContiguousASCII(_StringGuts param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf9764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__isContiguousASCII_100eace38)();
  return (bool)uVar1;
}



/* Address: 0x100bf9768 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::foreignScalarAlign */

/* Swift._StringGuts.foreignScalarAlign(Swift.String.Index) -> Swift.String.Index */

Index Swift::_StringGuts::foreignScalarAlign(Index param_1,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_foreignScalarAlign_100eace40)();
  return (Index)param_1.cmsgPointer.unknown;
}



/* Address: 0x100bf9774 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::foreignErrorCorrectedScalar */

/* Swift._StringGuts.foreignErrorCorrectedScalar(startingAt: Swift.String.Index) ->
   (Swift.Unicode.Scalar, scalarLength: Swift.Int) */

tuple2_conflict9
Swift::_StringGuts::foreignErrorCorrectedScalar(Index startingAt,_StringGuts param_2)

{
  tuple2_conflict9 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_foreignErrorCorrectedScalar_100eace48)();
  tVar1.scalarLength = (__int64)param_2.unknown;
  tVar1._.unknown = (undefined *)startingAt.cmsgPointer.unknown;
  return tVar1;
}



/* Address: 0x100bf9780 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::grow */

/* Swift._StringGuts.grow(Swift.Int) -> () */

void Swift::_StringGuts::grow(__int64 param_1,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_grow_100eace50)();
  return;
}



/* Address: 0x100bf978c | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::$copyUTF8 */

/* Swift._StringGuts.copyUTF8(into: Swift.UnsafeMutableBufferPointer<Swift.UInt8>) -> Swift.Int? */

void Swift::_StringGuts::_copyUTF8(UnsafeMutableBufferPointer<__int8> into,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__copyUTF8_100eace58)();
  return;
}



/* Address: 0x100bf9798 | /usr/lib/swift/libswiftCore.dylib::Swift::LazySequence::typeMetadataAccessor */

/* type metadata accessor for Swift.LazySequence */

LazySequence Swift::LazySequence::typeMetadataAccessor(void)

{
  LazySequence in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf97a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eace80)();
  return (LazySequence)in_x0.unknown;
}



/* Address: 0x100bf97a4 | /usr/lib/swift/libswiftCore.dylib::Swift::StaticString::get_description */

/* Swift.StaticString.description.getter : Swift.String */

String Swift::StaticString::get_description(StaticString param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf97ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eace90)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf97b0 | /usr/lib/swift/libswiftCore.dylib::Swift::Zip2Sequence::typeMetadataAccessor */

/* type metadata accessor for Swift.Zip2Sequence */

Zip2Sequence Swift::Zip2Sequence::typeMetadataAccessor(void)

{
  Zip2Sequence in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf97b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eacea0)();
  return (Zip2Sequence)in_x0.unknown;
}



/* Address: 0x100bf97bc | /usr/lib/swift/libswiftCore.dylib::Swift::_AnyIndexBox::get__typeID */

/* dispatch thunk of Swift._AnyIndexBox._typeID.getter : Swift.ObjectIdentifier */

ObjectIdentifier Swift::_AnyIndexBox::get__typeID(void)

{
  ObjectIdentifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf97c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__typeID_100eaceb0)();
  return (ObjectIdentifier)in_x0.unknown;
}



/* Address: 0x100bf97c8 | /usr/lib/swift/libswiftCore.dylib::Swift::_AnyIndexBox::$_isEqual */

/* dispatch thunk of Swift._AnyIndexBox._isEqual(to: Swift._AnyIndexBox) -> Swift.Bool */

bool Swift::_AnyIndexBox::__isEqual(void)

{
  undefined1 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf97d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___isEqual_100eaceb8)();
  return (bool)in_w0;
}



/* Address: 0x100bf97d4 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::_typeCheckSlowPath */

/* Swift._ArrayBuffer._typeCheckSlowPath(Swift.Int) -> () */

void Swift::_ArrayBuffer::_typeCheckSlowPath(__int64 param_1,_ArrayBuffer param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf97dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeCheckSlowPath_100eacec0)();
  return;
}



/* Address: 0x100bf97e0 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::$_getElementSlowPath */

/* generic pre-specialization <Swift.AnyObject> of Swift._ArrayBuffer._getElementSlowPath(Swift.Int)
   -> Swift.AnyObject */

void Swift::_ArrayBuffer::__getElementSlowPath(__int64 param_1,_ArrayBuffer param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf97e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___getElementSlowPath_100eacec8)();
  return;
}



/* Address: 0x100bf97ec | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::get_firstElementAddress */

/* Swift._ArrayBuffer.firstElementAddress.getter : Swift.UnsafeMutablePointer<A> */

UnsafeMutablePointer<undefined> Swift::_ArrayBuffer::get_firstElementAddress(_ArrayBuffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf97f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_firstElementAddress_100eaced0)();
  return (UnsafeMutablePointer<undefined>)param_1.unknown;
}



/* Address: 0x100bf97f8 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::$_consumeAndCreateNew */

/* generic pre-specialization <Swift.AnyObject> of
   Swift._ArrayBuffer._consumeAndCreateNew(bufferIsUnique: Swift.Bool, minimumCapacity: Swift.Int,
   growForAppend: Swift.Bool) -> Swift._ArrayBuffer<A> */

_ArrayBuffer<undefined>
Swift::_ArrayBuffer::__consumeAndCreateNew
          (bool bufferIsUnique,__int64 minimumCapacity,bool growForAppend,_ArrayBuffer param_4)

{
  _ArrayBuffer<undefined> _Var1;
  
  _Var1.unknown = (undefined *)(ulong)bufferIsUnique;
                    /* WARNING: Could not recover jumptable at 0x000100bf9800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___consumeAndCreateNew_100eaced8)(_Var1.unknown,minimumCapacity,growForAppend);
  return (_ArrayBuffer<undefined>)_Var1.unknown;
}



/* Address: 0x100bf9804 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::get__native */

/* Swift._ArrayBuffer._native.getter : Swift._ContiguousArrayBuffer<A> */

_ContiguousArrayBuffer<undefined> Swift::_ArrayBuffer::get__native(_ArrayBuffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__native_100eacee0)();
  return (_ContiguousArrayBuffer<undefined>)param_1.unknown;
}



/* Address: 0x100bf9810 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::get__isNative */

/* Swift._ArrayBuffer._isNative.getter : Swift.Bool */

bool Swift::_ArrayBuffer::get__isNative(_ArrayBuffer param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf9818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__isNative_100eacee8)();
  return (bool)uVar1;
}



/* Address: 0x100bf981c | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::typeMetadataAccessor */

/* type metadata accessor for Swift._ArrayBuffer */

_ArrayBuffer Swift::_ArrayBuffer::typeMetadataAccessor(void)

{
  _ArrayBuffer in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eacef0)();
  return (_ArrayBuffer)in_x0.unknown;
}



/* Address: 0x100bf9828 | /usr/lib/swift/libswiftCore.dylib::Swift::_SliceBuffer::get_firstElementAddress */

/* Swift._SliceBuffer.firstElementAddress.getter : Swift.UnsafeMutablePointer<A> */

UnsafeMutablePointer<undefined> Swift::_SliceBuffer::get_firstElementAddress(_SliceBuffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_firstElementAddress_100eacf08)();
  return (UnsafeMutablePointer<undefined>)param_1.unknown;
}



/* Address: 0x100bf9834 | /usr/lib/swift/libswiftCore.dylib::Swift::_SliceBuffer::get_count */

/* Swift._SliceBuffer.count.getter : Swift.Int */

__int64 Swift::_SliceBuffer::get_count(_SliceBuffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eacf10)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf9840 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::$dataCorruptedError */

/* static Swift.DecodingError.dataCorruptedError(in: Swift.SingleValueDecodingContainer,
   debugDescription: Swift.String) -> Swift.DecodingError */

DecodingError
Swift::DecodingError::_dataCorruptedError(String in,DecodingError debugDescription,...)

{
  __int8 _Var1;
  
  _Var1 = (__int8)in.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf9848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dataCorruptedError_100eacf18)();
  return (DecodingError)_Var1;
}



/* Address: 0x100bf984c | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::$dataCorruptedError */

/* static Swift.DecodingError.dataCorruptedError(in: Swift.UnkeyedDecodingContainer,
   debugDescription: Swift.String) -> Swift.DecodingError */

DecodingError
Swift::DecodingError::_dataCorruptedError(String in,DecodingError debugDescription,...)

{
  __int8 _Var1;
  
  _Var1 = (__int8)in.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dataCorruptedError_100eacf20)();
  return (DecodingError)_Var1;
}



/* Address: 0x100bf9858 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::$dataCorruptedError */

/* static Swift.DecodingError.dataCorruptedError<A where A:
   Swift.KeyedDecodingContainerProtocol>(forKey: A.Key, in: A, debugDescription: Swift.String) ->
   Swift.DecodingError */

DecodingError Swift::DecodingError::_dataCorruptedError(DecodingError param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dataCorruptedError_100eacf28)();
  return (DecodingError)param_1.value;
}



/* Address: 0x100bf9864 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::Context::$init */

/* Swift.DecodingError.Context.init(codingPath: [Swift.CodingKey], debugDescription: Swift.String,
   underlyingError: Swift.Error?) -> Swift.DecodingError.Context */

Context Swift::DecodingError::Context::_init(Context param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eacf50)();
  return (Context)param_1.unknown;
}



/* Address: 0x100bf9870 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::Context::$get_codingPath */

/* Swift.DecodingError.Context.codingPath.getter : [Swift.CodingKey] */

void Swift::DecodingError::Context::_get_codingPath(Context param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_codingPath_100eacf58)();
  return;
}



/* Address: 0x100bf987c | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::Context::get_debugDescription */

/* Swift.DecodingError.Context.debugDescription.getter : Swift.String */

String Swift::DecodingError::Context::get_debugDescription(Context param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_debugDescription_100eacf60)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf9888 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::Context::typeMetadataAccessor */

/* type metadata accessor for Swift.DecodingError.Context */

Context Swift::DecodingError::Context::typeMetadataAccessor(void)

{
  Context in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eacf68)();
  return (Context)in_x0.unknown;
}



/* Address: 0x100bf9894 | /usr/lib/swift/libswiftCore.dylib::Swift::DecodingError::typeMetadataAccessor */

/* type metadata accessor for Swift.DecodingError */

DecodingError Swift::DecodingError::typeMetadataAccessor(void)

{
  DecodingError in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eacf78)();
  return (DecodingError)in_w0.value;
}



/* Address: 0x100bf98a0 | /usr/lib/swift/libswiftCore.dylib::Swift::EncodingError::Context::$init */

/* Swift.EncodingError.Context.init(codingPath: [Swift.CodingKey], debugDescription: Swift.String,
   underlyingError: Swift.Error?) -> Swift.EncodingError.Context */

Context Swift::EncodingError::Context::_init(Context param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eacf90)();
  return (Context)param_1.unknown;
}



/* Address: 0x100bf98ac | /usr/lib/swift/libswiftCore.dylib::Swift::EncodingError::typeMetadataAccessor */

/* type metadata accessor for Swift.EncodingError */

EncodingError Swift::EncodingError::typeMetadataAccessor(void)

{
  EncodingError in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf98b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eacfa0)();
  return (EncodingError)in_w0.value;
}



/* Address: 0x100bf98b8 | /usr/lib/swift/libswiftCore.dylib::Swift::ManagedBuffer::get_headerAddress */

/* Swift.ManagedBuffer.headerAddress.getter : Swift.UnsafeMutablePointer<A> */

UnsafeMutablePointer<undefined> __thiscall
Swift::ManagedBuffer::get_headerAddress(ManagedBuffer *this,ManagedBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_headerAddress_100eacfb0)();
  return (UnsafeMutablePointer<undefined>)param_1;
}



/* Address: 0x100bf98c4 | /usr/lib/swift/libswiftCore.dylib::Swift::ManagedBuffer::get_firstElementAddress */

/* Swift.ManagedBuffer.firstElementAddress.getter : Swift.UnsafeMutablePointer<B> */

UnsafeMutablePointer<undefined> __thiscall
Swift::ManagedBuffer::get_firstElementAddress(ManagedBuffer *this,ManagedBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_firstElementAddress_100eacfb8)();
  return (UnsafeMutablePointer<undefined>)param_1;
}



/* Address: 0x100bf98d0 | /usr/lib/swift/libswiftCore.dylib::Swift::ManagedBuffer::$create */

/* static Swift.ManagedBuffer.create(minimumCapacity: Swift.Int, makingHeaderWith:
   (Swift.ManagedBuffer<A, B>) throws -> A) throws -> Swift.ManagedBuffer<A, B> */

void __thiscall Swift::ManagedBuffer::_create(ManagedBuffer *this,__int64 minimumCapacity)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__create_100eacfc0)();
  return;
}



/* Address: 0x100bf98dc | /usr/lib/swift/libswiftCore.dylib::Swift::ManagedBuffer::get_capacity */

/* Swift.ManagedBuffer.capacity.getter : Swift.Int */

__int64 __thiscall Swift::ManagedBuffer::get_capacity(ManagedBuffer *this,ManagedBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_capacity_100eacfc8)();
  return (__int64)param_1;
}



/* Address: 0x100bf98e8 | /usr/lib/swift/libswiftCore.dylib::Swift::ManagedBuffer::deinit */

/* Swift.ManagedBuffer.deinit */

ManagedBuffer * __thiscall Swift::ManagedBuffer::deinit(ManagedBuffer *this)

{
  ManagedBuffer *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf98f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_deinit_100eacfe0)();
  return in_x0;
}



/* Address: 0x100bf98f4 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringObject::get_sharedUTF8 */

/* Swift._StringObject.sharedUTF8.getter : Swift.UnsafeBufferPointer<Swift.UInt8> */

UnsafeBufferPointer<__int8> Swift::_StringObject::get_sharedUTF8(_StringObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf98fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_sharedUTF8_100eacff0)();
  return (UnsafeBufferPointer<__int8>)param_1.unknown;
}



/* Address: 0x100bf9900 | /usr/lib/swift/libswiftCore.dylib::Swift::$repeatElement */

/* Swift.repeatElement<A>(_: A, count: Swift.Int) -> Swift.Repeated<A> */

Repeated<undefined> Swift::_repeatElement(Repeated<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__repeatElement_100eacff8)();
  return (Repeated<undefined>)param_1.unknown;
}



/* Address: 0x100bf990c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withTaskGroup */

/* Swift.withTaskGroup<A, B where A: Swift.Sendable>(of: A.Type, returning: B.Type, isolation:
   isolated Swift.Actor?, body: (inout Swift.TaskGroup<A>) async -> B) async -> B */

void Swift::_withTaskGroup(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withTaskGroup_100eaeeb8)();
  return;
}



/* Address: 0x100bf9918 | /usr/lib/swift/libswiftCore.dylib::Swift::CollectionOfOne::typeMetadataAccessor */

/* type metadata accessor for Swift.CollectionOfOne */

CollectionOfOne Swift::CollectionOfOne::typeMetadataAccessor(void)

{
  CollectionOfOne in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead020)();
  return (CollectionOfOne)in_x0.unknown;
}



/* Address: 0x100bf9924 | /usr/lib/swift/libswiftCore.dylib::Swift::CollectionOfOne::init */

/* Swift.CollectionOfOne.init(A) -> Swift.CollectionOfOne<A> */

CollectionOfOne<undefined> Swift::CollectionOfOne::init(CollectionOfOne<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ead030)();
  return (CollectionOfOne<undefined>)param_1.unknown;
}



/* Address: 0x100bf9930 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$_makeUniqueAndReserveCapacityIfNotUnique */

/* generic pre-specialization <Swift.AnyObject> of
   Swift.ContiguousArray._makeUniqueAndReserveCapacityIfNotUnique() -> () */

void Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___makeUniqueAndReserveCapacityIfNotUnique_100ead050)();
  return;
}



/* Address: 0x100bf993c | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$withContiguousStorageIfAvailable */

/* Swift.ContiguousArray.withContiguousStorageIfAvailable<A>((Swift.UnsafeBufferPointer<A>) throws
   -> A1) throws -> A1? */

void Swift::ContiguousArray::_withContiguousStorageIfAvailable(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousStorageIfAvailable_100ead058)();
  return;
}



/* Address: 0x100bf9948 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$withContiguousMutableStorageIfAvailable */

/* Swift.ContiguousArray.withContiguousMutableStorageIfAvailable<A>((inout
   Swift.UnsafeMutableBufferPointer<A>) throws -> A1) throws -> A1? */

void Swift::ContiguousArray::_withContiguousMutableStorageIfAvailable(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousMutableStorageIfAvailable_100ead060)();
  return;
}



/* Address: 0x100bf9954 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::_copyToContiguousArray */

/* Swift.ContiguousArray._copyToContiguousArray() -> Swift.ContiguousArray<A> */

ContiguousArray<undefined> Swift::ContiguousArray::_copyToContiguousArray(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__copyToContiguousArray_100ead068)();
  return (ContiguousArray<undefined>)param_1.unknown;
}



/* Address: 0x100bf9960 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$_endMutation */

/* generic pre-specialization <Swift.AnyObject> of Swift.ContiguousArray._endMutation() -> () */

void Swift::ContiguousArray::__endMutation(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___endMutation_100ead070)();
  return;
}



/* Address: 0x100bf996c | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$init */

/* Swift.ContiguousArray.init(arrayLiteral: A...) -> Swift.ContiguousArray<A> */

ContiguousArray<undefined> Swift::ContiguousArray::_init(ContiguousArray<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ead078)();
  return (ContiguousArray<undefined>)param_1.unknown;
}



/* Address: 0x100bf9978 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::reserveCapacity */

/* Swift.ContiguousArray.reserveCapacity(Swift.Int) -> () */

void Swift::ContiguousArray::reserveCapacity(__int64 param_1,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_reserveCapacity_100ead080)();
  return;
}



/* Address: 0x100bf9984 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$reserveCapacity */

/* generic pre-specialization <Swift.AnyObject> of Swift.ContiguousArray.reserveCapacity(Swift.Int)
   -> () */

void Swift::ContiguousArray::_reserveCapacity(__int64 param_1,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__reserveCapacity_100ead088)();
  return;
}



/* Address: 0x100bf9990 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::_makeMutableAndUnique */

/* Swift.ContiguousArray._makeMutableAndUnique() -> () */

void Swift::ContiguousArray::_makeMutableAndUnique(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeMutableAndUnique_100ead090)();
  return;
}



/* Address: 0x100bf999c | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::_allocateUninitialized */

/* static Swift.ContiguousArray._allocateUninitialized(Swift.Int) -> (Swift.ContiguousArray<A>,
   Swift.UnsafeMutablePointer<A>) */

tuple2_conflict10
Swift::ContiguousArray::_allocateUninitialized(__int64 param_1,ContiguousArray param_2)

{
  tuple2_conflict10 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf99a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocateUninitialized_100ead098)();
  tVar1._.unknown = param_2.unknown;
  tVar1._.unknown = (undefined *)param_1;
  return tVar1;
}



/* Address: 0x100bf99a8 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::_allocateBufferUninitialized */

/* static Swift.ContiguousArray._allocateBufferUninitialized(minimumCapacity: Swift.Int) ->
   Swift._ContiguousArrayBuffer<A> */

_ContiguousArrayBuffer<undefined>
Swift::ContiguousArray::_allocateBufferUninitialized
          (__int64 minimumCapacity,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocateBufferUninitialized_100ead0a0)();
  return (_ContiguousArrayBuffer<undefined>)minimumCapacity;
}



/* Address: 0x100bf99b4 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$_reserveCapacityAssumingUniqueBuffer */

/* generic pre-specialization <Swift.AnyObject> of
   Swift.ContiguousArray._reserveCapacityAssumingUniqueBuffer(oldCount: Swift.Int) -> () */

void Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
               (__int64 oldCount,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___reserveCapacityAssumingUniqueBuffer_100ead0a8)();
  return;
}



/* Address: 0x100bf99c0 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$_appendElementAssumeUniqueAndCapacity */

/* generic pre-specialization <Swift.AnyObject> of
   Swift.ContiguousArray._appendElementAssumeUniqueAndCapacity(_: Swift.Int, newElement: __owned A)
   -> () */

void Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___appendElementAssumeUniqueAndCapacity_100ead0b0)();
  return;
}



/* Address: 0x100bf99cc | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::get_count */

/* Swift.ContiguousArray.count.getter : Swift.Int */

__int64 Swift::ContiguousArray::get_count(ContiguousArray param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100ead0b8)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf99d8 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$append */

/* Swift.ContiguousArray.append<A where A == A1.Element, A1: Swift.Sequence>(contentsOf: __owned A1)
   -> () */

void Swift::ContiguousArray::_append(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__append_100ead0c0)();
  return;
}



/* Address: 0x100bf99e4 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::append */

/* Swift.ContiguousArray.append(__owned A) -> () */

void Swift::ContiguousArray::append(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100ead0c8)();
  return;
}



/* Address: 0x100bf99f0 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::insert */

/* Swift.ContiguousArray.insert(_: __owned A, at: Swift.Int) -> () */

void Swift::ContiguousArray::insert(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf99f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_insert_100ead0d0)();
  return;
}



/* Address: 0x100bf99fc | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::remove */

/* Swift.ContiguousArray.remove(at: Swift.Int) -> A */

void Swift::ContiguousArray::remove(__int64 at,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_remove_100ead0d8)();
  return;
}



/* Address: 0x100bf9a08 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::removeAll */

/* Swift.ContiguousArray.removeAll(keepingCapacity: Swift.Bool) -> () */

void Swift::ContiguousArray::removeAll(bool keepingCapacity,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeAll_100ead0e0)(keepingCapacity);
  return;
}



/* Address: 0x100bf9a14 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::init */

/* Swift.ContiguousArray.init() -> Swift.ContiguousArray<A> */

ContiguousArray<undefined> Swift::ContiguousArray::init(void)

{
  ContiguousArray<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ead0e8)();
  return (ContiguousArray<undefined>)in_x0.unknown;
}



/* Address: 0x100bf9a20 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::typeMetadataAccessor */

/* type metadata accessor for Swift.ContiguousArray */

ContiguousArray Swift::ContiguousArray::typeMetadataAccessor(void)

{
  ContiguousArray in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead0f0)();
  return (ContiguousArray)in_x0.unknown;
}



/* Address: 0x100bf9a2c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::ContiguousArray::$==_infix */

/* static (extension in Swift):Swift.ContiguousArray<A where A: Swift.Equatable>.==
   infix(Swift.ContiguousArray<A>, Swift.ContiguousArray<A>) -> Swift.Bool */

bool (extension_Swift)::Swift::ContiguousArray::____infix
               (ContiguousArray<undefined> param_1,ContiguousArray<undefined> param_2)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf9a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_____infix_100ead100)();
  return (bool)uVar1;
}



/* Address: 0x100bf9a38 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::$init */

/* Swift.ContiguousArray.init<A where A == A1.Element, A1: Swift.Sequence>(A1) ->
   Swift.ContiguousArray<A> */

ContiguousArray<undefined> Swift::ContiguousArray::_init(ContiguousArray<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ead108)();
  return (ContiguousArray<undefined>)param_1.unknown;
}



/* Address: 0x100bf9a44 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::get_subscript */

/* Swift.ContiguousArray.subscript.getter : (Swift.Range<Swift.Int>) -> Swift.ArraySlice<A> */

ArraySlice<undefined>
Swift::ContiguousArray::get_subscript(Range<__int64> param_1,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100ead110)();
  return (ArraySlice<undefined>)param_1.unknown;
}



/* Address: 0x100bf9a50 | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::modify_subscript */

/* Swift.ContiguousArray.subscript.modify : (Swift.Int) -> A */

void __thiscall Swift::ContiguousArray::modify_subscript(ContiguousArray *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_modify_subscript_100ead158)();
  return;
}


