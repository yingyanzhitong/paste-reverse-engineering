/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf9a5c | /usr/lib/swift/libswiftCore.dylib::Swift::ContiguousArray::get_subscript */

/* Swift.ContiguousArray.subscript.getter : (Swift.Int) -> A */

void Swift::ContiguousArray::get_subscript(__int64 param_1,ContiguousArray param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100ead160)();
  return;
}



/* Address: 0x100bf9a68 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::get_now */

/* static Swift.ContinuousClock.now.getter : Swift.ContinuousClock.Instant */

Instant Swift::ContinuousClock::get_now(ContinuousClock param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_now_100eaeec8)();
  return (Instant)param_1.unknown;
}



/* Address: 0x100bf9a74 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::<_infix */

/* static Swift.ContinuousClock.Instant.< infix(Swift.ContinuousClock.Instant,
   Swift.ContinuousClock.Instant) -> Swift.Bool */

bool Swift::ContinuousClock::Instant::<_infix(Instant param_1,Instant param_2,Instant param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf9a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_<_infix_100eaeed0)();
  return (bool)uVar1;
}



/* Address: 0x100bf9a80 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::get_now */

/* static Swift.ContinuousClock.Instant.now.getter : Swift.ContinuousClock.Instant */

Instant Swift::ContinuousClock::Instant::get_now(Instant param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_now_100eaeed8)();
  return (Instant)param_1.unknown;
}



/* Address: 0x100bf9a8c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::advanced */

/* Swift.ContinuousClock.Instant.advanced(by: Swift.Duration) -> Swift.ContinuousClock.Instant */

Instant Swift::ContinuousClock::Instant::advanced(Duration by,Instant param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_advanced_100eaeee0)();
  return (Instant)by.unknown;
}



/* Address: 0x100bf9a98 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::duration */

/* Swift.ContinuousClock.Instant.duration(to: Swift.ContinuousClock.Instant) -> Swift.Duration */

Duration Swift::ContinuousClock::Instant::duration(Instant to,Instant param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_duration_100eaeee8)();
  return (Duration)to.unknown;
}



/* Address: 0x100bf9aa4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::typeMetadataAccessor */

/* type metadata accessor for Swift.ContinuousClock.Instant */

Instant Swift::ContinuousClock::Instant::typeMetadataAccessor(void)

{
  Instant in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeef0)();
  return (Instant)in_x0.unknown;
}



/* Address: 0x100bf9ab0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::init */

/* Swift.ContinuousClock.init() -> Swift.ContinuousClock */

ContinuousClock Swift::ContinuousClock::init(void)

{
  ContinuousClock in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaef10)();
  return (ContinuousClock)in_x0.unknown;
}



/* Address: 0x100bf9abc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::typeMetadataAccessor */

/* type metadata accessor for Swift.ContinuousClock */

ContinuousClock Swift::ContinuousClock::typeMetadataAccessor(void)

{
  ContinuousClock in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaef18)();
  return (ContinuousClock)in_x0.unknown;
}



/* Address: 0x100bf9ac8 | /usr/lib/swift/libswiftCore.dylib::Swift::InstantProtocol::$advanced */

/* dispatch thunk of Swift.InstantProtocol.advanced(by: A.Duration) -> A */

void Swift::InstantProtocol::_advanced(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__advanced_100ead178)();
  return;
}



/* Address: 0x100bf9ad4 | /usr/lib/swift/libswiftCore.dylib::Swift::InstantProtocol::$duration */

/* dispatch thunk of Swift.InstantProtocol.duration(to: A) -> A.Duration */

void Swift::InstantProtocol::_duration(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__duration_100ead180)();
  return;
}



/* Address: 0x100bf9ae0 | /usr/lib/swift/libswiftCore.dylib::Swift::LazyMapSequence::typeMetadataAccessor */

/* type metadata accessor for Swift.LazyMapSequence */

LazyMapSequence Swift::LazyMapSequence::typeMetadataAccessor(void)

{
  LazyMapSequence in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead198)();
  return (LazyMapSequence)in_x0.unknown;
}



/* Address: 0x100bf9aec | /usr/lib/swift/libswift_Concurrency.dylib::Swift::SuspendingClock::Instant::typeMetadataAccessor */

/* type metadata accessor for Swift.SuspendingClock.Instant */

Instant Swift::SuspendingClock::Instant::typeMetadataAccessor(void)

{
  Instant in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaef30)();
  return (Instant)in_x0.unknown;
}



/* Address: 0x100bf9af8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::SuspendingClock::init */

/* Swift.SuspendingClock.init() -> Swift.SuspendingClock */

SuspendingClock Swift::SuspendingClock::init(void)

{
  SuspendingClock in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaef40)();
  return (SuspendingClock)in_x0.unknown;
}



/* Address: 0x100bf9b04 | /usr/lib/swift/libswiftCore.dylib::Swift::$_arrayForceCast */

/* Swift._arrayForceCast<A, B>([A]) -> [B] */

void Swift::__arrayForceCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___arrayForceCast_100ead1c0)();
  return;
}



/* Address: 0x100bf9b10 | /usr/lib/swift/libswiftCore.dylib::Swift::$_print_unlocked */

/* Swift._print_unlocked<A, B where B: Swift.TextOutputStream>(A, inout B) -> () */

void Swift::__print_unlocked(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___print_unlocked_100ead1c8)();
  return;
}



/* Address: 0x100bf9b1c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncMapSequence::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncMapSequence */

AsyncMapSequence Swift::AsyncMapSequence::typeMetadataAccessor(void)

{
  AsyncMapSequence in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaef50)();
  return (AsyncMapSequence)in_x0.unknown;
}



/* Address: 0x100bf9b28 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncMapSequence::$init */

/* Swift.AsyncMapSequence.init(_: A, transform: (A.Element) async -> B) -> Swift.AsyncMapSequence<A,
   B> */

AsyncMapSequence<undefined,undefined>
Swift::AsyncMapSequence::_init(AsyncMapSequence<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaef60)();
  return (AsyncMapSequence<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf9b34 | /usr/lib/swift/libswiftCore.dylib::Swift::IndexingIterator::typeMetadataAccessor */

/* type metadata accessor for Swift.IndexingIterator */

IndexingIterator Swift::IndexingIterator::typeMetadataAccessor(void)

{
  IndexingIterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead1d0)();
  return (IndexingIterator)in_x0.unknown;
}



/* Address: 0x100bf9b40 | /usr/lib/swift/libswiftCore.dylib::Swift::PartialRangeFrom::typeMetadataAccessor */

/* type metadata accessor for Swift.PartialRangeFrom */

PartialRangeFrom Swift::PartialRangeFrom::typeMetadataAccessor(void)

{
  PartialRangeFrom in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead1e8)();
  return (PartialRangeFrom)in_x0.unknown;
}



/* Address: 0x100bf9b4c | /usr/lib/swift/libswiftCore.dylib::Swift::PartialRangeFrom::init */

/* Swift.PartialRangeFrom.init(A) -> Swift.PartialRangeFrom<A> */

PartialRangeFrom<undefined> Swift::PartialRangeFrom::init(PartialRangeFrom<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ead1f8)();
  return (PartialRangeFrom<undefined>)param_1.unknown;
}



/* Address: 0x100bf9b58 | /usr/lib/swift/libswiftCore.dylib::Swift::PartialRangeUpTo::typeMetadataAccessor */

/* type metadata accessor for Swift.PartialRangeUpTo */

PartialRangeUpTo Swift::PartialRangeUpTo::typeMetadataAccessor(void)

{
  PartialRangeUpTo in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead208)();
  return (PartialRangeUpTo)in_x0.unknown;
}



/* Address: 0x100bf9b64 | /usr/lib/swift/libswiftCore.dylib::Swift::PartialRangeUpTo::init */

/* Swift.PartialRangeUpTo.init(A) -> Swift.PartialRangeUpTo<A> */

PartialRangeUpTo<undefined> Swift::PartialRangeUpTo::init(PartialRangeUpTo<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ead218)();
  return (PartialRangeUpTo<undefined>)param_1.unknown;
}



/* Address: 0x100bf9b70 | /usr/lib/swift/libswiftCore.dylib::Swift::TextOutputStream::write */

/* dispatch thunk of Swift.TextOutputStream.write(Swift.String) -> () */

void Swift::TextOutputStream::write(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_write_100ead230)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf9b7c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_writeASCII */

/* (extension in Swift):Swift.TextOutputStream._writeASCII(Swift.UnsafeBufferPointer<Swift.UInt8>)
   -> () */

void (extension_Swift)::Swift::TextOutputStream::_writeASCII(UnsafeBufferPointer<__int8> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__writeASCII_100ead238)();
  return;
}



/* Address: 0x100bf9b88 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_lock */

/* (extension in Swift):Swift.TextOutputStream._lock() -> () */

void (extension_Swift)::Swift::TextOutputStream::_lock(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__lock_100ead240)();
  return;
}



/* Address: 0x100bf9b94 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_unlock */

/* (extension in Swift):Swift.TextOutputStream._unlock() -> () */

void (extension_Swift)::Swift::TextOutputStream::_unlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__unlock_100ead248)();
  return;
}



/* Address: 0x100bf9ba0 | /usr/lib/swift/libswiftCore.dylib::Swift::CodingUserInfoKey::typeMetadataAccessor */

/* type metadata accessor for Swift.CodingUserInfoKey */

CodingUserInfoKey Swift::CodingUserInfoKey::typeMetadataAccessor(void)

{
  CodingUserInfoKey in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead250)();
  return (CodingUserInfoKey)in_x0.unknown;
}



/* Address: 0x100bf9bac | /usr/lib/swift/libswiftCore.dylib::Swift::CustomReflectable::get_customMirror */

/* dispatch thunk of Swift.CustomReflectable.customMirror.getter : Swift.Mirror */

Mirror Swift::CustomReflectable::get_customMirror(void)

{
  Mirror in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_customMirror_100ead278)();
  return (Mirror)in_x0.unknown;
}



/* Address: 0x100bf9bb8 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_bitWidth */

/* dispatch thunk of static Swift.FixedWidthInteger.bitWidth.getter : Swift.Int */

__int64 Swift::FixedWidthInteger::get_bitWidth(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_bitWidth_100ead280)();
  return in_x0;
}



/* Address: 0x100bf9bc4 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_littleEndian */

/* dispatch thunk of Swift.FixedWidthInteger.littleEndian.getter : A */

void Swift::FixedWidthInteger::get_littleEndian(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_littleEndian_100ead288)();
  return;
}



/* Address: 0x100bf9bd0 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_nonzeroBitCount */

/* dispatch thunk of Swift.FixedWidthInteger.nonzeroBitCount.getter : Swift.Int */

__int64 Swift::FixedWidthInteger::get_nonzeroBitCount(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_nonzeroBitCount_100ead290)();
  return in_x0;
}



/* Address: 0x100bf9bdc | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_leadingZeroBitCount */

/* dispatch thunk of Swift.FixedWidthInteger.leadingZeroBitCount.getter : Swift.Int */

__int64 Swift::FixedWidthInteger::get_leadingZeroBitCount(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_leadingZeroBitCount_100ead298)();
  return in_x0;
}



/* Address: 0x100bf9be8 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::subtractingReportingOverflow */

/* dispatch thunk of Swift.FixedWidthInteger.subtractingReportingOverflow(A) -> (partialValue: A,
   overflow: Swift.Bool) */

tuple2_conflict11 Swift::FixedWidthInteger::subtractingReportingOverflow(tuple2_conflict11 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_subtractingReportingOverflow_100ead2a0)();
  return (tuple2_conflict11)param_1.overflow;
}



/* Address: 0x100bf9bf4 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::&<<_infix */

/* dispatch thunk of static Swift.FixedWidthInteger.&<< infix(A, A) -> A */

void Swift::FixedWidthInteger::_<<_infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__<<_infix_100ead2a8)();
  return;
}



/* Address: 0x100bf9c00 | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_max */

/* dispatch thunk of static Swift.FixedWidthInteger.max.getter : A */

void Swift::FixedWidthInteger::get_max(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_max_100ead2b0)();
  return;
}



/* Address: 0x100bf9c0c | /usr/lib/swift/libswiftCore.dylib::Swift::FixedWidthInteger::get_bigEndian */

/* dispatch thunk of Swift.FixedWidthInteger.bigEndian.getter : A */

void Swift::FixedWidthInteger::get_bigEndian(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_bigEndian_100ead2b8)();
  return;
}



/* Address: 0x100bf9c18 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::FixedWidthInteger::$random */

/* static (extension in Swift):Swift.FixedWidthInteger.random<A where A1:
   Swift.RandomNumberGenerator>(in: Swift.Range<A>, using: inout A1) -> A */

void (extension_Swift)::Swift::FixedWidthInteger::_random(Range<undefined> in,undefined *using)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__random_100ead2c0)();
  return;
}



/* Address: 0x100bf9c24 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::FixedWidthInteger::$_convert */

/* static (extension in Swift):Swift.FixedWidthInteger._convert<A where A1:
   Swift.BinaryFloatingPoint>(from: A1) -> (value: A?, exact: Swift.Bool) */

tuple2_conflict12 (extension_Swift)::Swift::FixedWidthInteger::__convert(tuple2_conflict12 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___convert_100ead2c8)();
  return (tuple2_conflict12)param_1.exact;
}



/* Address: 0x100bf9c30 | /usr/lib/swift/libswiftCore.dylib::Swift::_AnyCollectionBox::$get_subscript */

/* dispatch thunk of Swift._AnyCollectionBox.subscript.getter : (Swift._AnyIndexBox) -> A */

void Swift::_AnyCollectionBox::_get_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100ead2d0)();
  return;
}



/* Address: 0x100bf9c3c | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::ensureUnique */

/* Swift._NativeDictionary.ensureUnique(isUnique: Swift.Bool, capacity: Swift.Int) -> Swift.Bool */

bool Swift::_NativeDictionary::ensureUnique
               (bool isUnique,__int64 capacity,_NativeDictionary param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ensureUnique_100ead2d8)();
  return isUnique;
}



/* Address: 0x100bf9c48 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::$makeIterator */

/* Swift._NativeDictionary.makeIterator() -> Swift._NativeDictionary<A, B>.Iterator */

Iterator Swift::_NativeDictionary::_makeIterator(_NativeDictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeIterator_100ead2e0)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf9c54 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::mutatingFind */

/* Swift._NativeDictionary.mutatingFind(_: A, isUnique: Swift.Bool) -> (bucket:
   Swift._HashTable.Bucket, found: Swift.Bool) */

tuple2_conflict13 Swift::_NativeDictionary::mutatingFind(Bucket param_1,undefined8 param_2)

{
  tuple2_conflict13 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mutatingFind_100ead2e8)();
  tVar1._8_8_ = param_2;
  tVar1.bucket.offset = param_1.offset;
  return tVar1;
}



/* Address: 0x100bf9c60 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::uncheckedRemove */

/* Swift._NativeDictionary.uncheckedRemove(at: Swift._HashTable.Bucket, isUnique: Swift.Bool) ->
   (key: A, value: B) */

void Swift::_NativeDictionary::uncheckedRemove(Bucket at,bool isUnique,_NativeDictionary param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_uncheckedRemove_100ead2f0)(at.offset,isUnique);
  return;
}



/* Address: 0x100bf9c6c | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::get__keys */

/* Swift._NativeDictionary._keys.getter : Swift.UnsafeMutablePointer<A> */

UnsafeMutablePointer<undefined> Swift::_NativeDictionary::get__keys(_NativeDictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__keys_100ead2f8)();
  return (UnsafeMutablePointer<undefined>)param_1.unknown;
}



/* Address: 0x100bf9c78 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::_insert */

/* Swift._NativeDictionary._insert(at: Swift._HashTable.Bucket, key: __owned A, value: __owned B) ->
   () */

void Swift::_NativeDictionary::_insert(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__insert_100ead300)();
  return;
}



/* Address: 0x100bf9c84 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::get__values */

/* Swift._NativeDictionary._values.getter : Swift.UnsafeMutablePointer<B> */

UnsafeMutablePointer<undefined> Swift::_NativeDictionary::get__values(_NativeDictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__values_100ead308)();
  return (UnsafeMutablePointer<undefined>)param_1.unknown;
}



/* Address: 0x100bf9c90 | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::typeMetadataAccessor */

/* type metadata accessor for Swift._NativeDictionary */

_NativeDictionary Swift::_NativeDictionary::typeMetadataAccessor(void)

{
  _NativeDictionary in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead310)();
  return (_NativeDictionary)in_x0.unknown;
}



/* Address: 0x100bf9c9c | /usr/lib/swift/libswiftCore.dylib::Swift::_NativeDictionary::init */

/* Swift._NativeDictionary.init(__owned Swift.__RawDictionaryStorage) -> Swift._NativeDictionary<A,
   B> */

_NativeDictionary<undefined,undefined>
Swift::_NativeDictionary::init(__RawDictionaryStorage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ead320)();
  return (_NativeDictionary<undefined,undefined>)param_1;
}



/* Address: 0x100bf9ca8 | /usr/lib/swift/libswiftCore.dylib::Swift::__CocoaDictionary::makeIterator */

/* Swift.__CocoaDictionary.makeIterator() -> Swift.__CocoaDictionary.Iterator */

Iterator * Swift::__CocoaDictionary::makeIterator(__CocoaDictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_makeIterator_100ead328)();
  return (Iterator *)param_1.unknown;
}



/* Address: 0x100bf9cb4 | /usr/lib/swift/libswiftCore.dylib::Swift::__CocoaDictionary::Iterator::$next */

/* Swift.__CocoaDictionary.Iterator.next() -> (key: Swift.AnyObject, value: Swift.AnyObject)? */

void __thiscall Swift::__CocoaDictionary::Iterator::_next(Iterator *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100ead330)();
  return;
}



/* Address: 0x100bf9cc0 | /usr/lib/swift/libswiftCore.dylib::Swift::_assertionFailure */

/* Swift._assertionFailure(_: Swift.StaticString, _: Swift.String, file: Swift.StaticString, line:
   Swift.UInt, flags: Swift.UInt32) -> Swift.Never */

Never Swift::_assertionFailure
                (StaticString param_1,String param_2,StaticString file,__uint64 line,__uint32 flags)

{
  Never NVar1;
  
  NVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__assertionFailure_100ead338)
            (NVar1.value,param_2.str,param_2.bridgeObject,file.unknown,line,flags);
  return (Never)NVar1.value;
}



/* Address: 0x100bf9ccc | /usr/lib/swift/libswiftCore.dylib::Swift::_assertionFailure */

/* Swift._assertionFailure(_: Swift.StaticString, _: Swift.String, flags: Swift.UInt32) ->
   Swift.Never */

Never Swift::_assertionFailure(StaticString param_1,String param_2,__uint32 flags)

{
  Never NVar1;
  
  NVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf9cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__assertionFailure_100ead340)(NVar1.value,param_2.str,param_2.bridgeObject,flags);
  return (Never)NVar1.value;
}



/* Address: 0x100bf9cd8 | /usr/lib/swift/libswiftCore.dylib::Swift::$_bridgeCocoaArray */

/* Swift._bridgeCocoaArray<A>(Swift.AnyObject) -> [A] */

void Swift::__bridgeCocoaArray(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___bridgeCocoaArray_100ead348)();
  return;
}



/* Address: 0x100bf9ce4 | /usr/lib/swift/libswiftCore.dylib::Swift::AdditiveArithmetic::-_infix */

/* dispatch thunk of static Swift.AdditiveArithmetic.- infix(A, A) -> A */

void Swift::AdditiveArithmetic::__infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___infix_100ead350)();
  return;
}



/* Address: 0x100bf9cf0 | /usr/lib/swift/libswiftCore.dylib::Swift::AdditiveArithmetic::-=_infix */

/* dispatch thunk of static Swift.AdditiveArithmetic.-= infix(inout A, A) -> () */

void Swift::AdditiveArithmetic::___infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ead358)();
  return;
}



/* Address: 0x100bf9cfc | /usr/lib/swift/libswiftCore.dylib::Swift::AdditiveArithmetic::get_zero */

/* dispatch thunk of static Swift.AdditiveArithmetic.zero.getter : A */

void Swift::AdditiveArithmetic::get_zero(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_zero_100ead360)();
  return;
}



/* Address: 0x100bf9d08 | /usr/lib/swift/libswiftCore.dylib::Swift::EnumeratedSequence::$makeIterator */

/* Swift.EnumeratedSequence.makeIterator() -> Swift.EnumeratedSequence<A>.Iterator */

Iterator Swift::EnumeratedSequence::_makeIterator(EnumeratedSequence param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeIterator_100ead368)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf9d14 | /usr/lib/swift/libswiftCore.dylib::Swift::EnumeratedSequence::Iterator::$next */

/* Swift.EnumeratedSequence.Iterator.next() -> (offset: Swift.Int, element: A.Element)? */

void Swift::EnumeratedSequence::Iterator::_next(Iterator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100ead370)();
  return;
}



/* Address: 0x100bf9d20 | /usr/lib/swift/libswiftCore.dylib::Swift::EnumeratedSequence::Iterator::typeMetadataAccessor */

/* type metadata accessor for Swift.EnumeratedSequence.Iterator */

Iterator Swift::EnumeratedSequence::Iterator::typeMetadataAccessor(void)

{
  Iterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead378)();
  return (Iterator)in_x0.unknown;
}



/* Address: 0x100bf9d2c | /usr/lib/swift/libswiftCore.dylib::Swift::EnumeratedSequence::typeMetadataAccessor */

/* type metadata accessor for Swift.EnumeratedSequence */

EnumeratedSequence Swift::EnumeratedSequence::typeMetadataAccessor(void)

{
  EnumeratedSequence in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ead388)();
  return (EnumeratedSequence)in_x0.unknown;
}



/* Address: 0x100bf9d38 | /usr/lib/swift/libswiftCore.dylib::Swift::_CocoaArrayWrapper::$_copyContents */

/* Swift._CocoaArrayWrapper._copyContents(subRange: Swift.Range<Swift.Int>, initializing:
   Swift.UnsafeMutablePointer<Swift.AnyObject>) -> Swift.UnsafeMutablePointer<Swift.AnyObject> */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 Swift::_CocoaArrayWrapper::__copyContents
           (Range<__int64> subRange,
           UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
           initializing,_CocoaArrayWrapper param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyContents_100ead3a8)();
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )subRange.unknown;
}



/* Address: 0x100bf9d44 | /usr/lib/swift/libswiftCore.dylib::Swift::_CocoaArrayWrapper::get_endIndex */

/* Swift._CocoaArrayWrapper.endIndex.getter : Swift.Int */

__int64 Swift::_CocoaArrayWrapper::get_endIndex(_CocoaArrayWrapper param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_endIndex_100ead3b0)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf9d50 | /usr/lib/swift/libswiftCore.dylib::Swift::_CocoaArrayWrapper::$get_subscript */

/* Swift._CocoaArrayWrapper.subscript.getter : (Swift.Range<Swift.Int>) ->
   Swift._SliceBuffer<Swift.AnyObject> */

_SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
 Swift::_CocoaArrayWrapper::_get_subscript(Range<__int64> param_1,_CocoaArrayWrapper param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100ead3b8)();
  return (_SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
          )param_1.unknown;
}


