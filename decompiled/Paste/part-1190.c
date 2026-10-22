/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf855c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::cancelAll */

/* Swift.ThrowingTaskGroup.cancelAll() -> () */

void Swift::ThrowingTaskGroup::cancelAll(ThrowingTaskGroup param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancelAll_100eaede8)();
  return;
}



/* Address: 0x100bf8568 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::typeMetadataAccessor */

/* type metadata accessor for Swift.ThrowingTaskGroup */

ThrowingTaskGroup Swift::ThrowingTaskGroup::typeMetadataAccessor(void)

{
  ThrowingTaskGroup in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaedf0)();
  return (ThrowingTaskGroup)in_x0.unknown;
}



/* Address: 0x100bf8574 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncSequence::$makeAsyncIterator */

/* dispatch thunk of Swift.AsyncSequence.makeAsyncIterator() -> A.AsyncIterator */

void Swift::AsyncSequence::_makeAsyncIterator(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeAsyncIterator_100eaee08)();
  return;
}



/* Address: 0x100bf8580 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::AsyncSequence::$map */

/* (extension in Swift):Swift.AsyncSequence.map<A>((A.Element) async -> A1) ->
   Swift.AsyncMapSequence<A, A1> */

AsyncMapSequence<undefined,undefined> (extension_Swift)::Swift::AsyncSequence::_map(void)

{
  AsyncMapSequence<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__map_100eaee20)();
  return (AsyncMapSequence<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf858c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::$makeStream */

/* static Swift.AsyncThrowingStream.makeStream< where B == Swift.Error>(of: A.Type, throwing:
   Swift.Error.Protocol, bufferingPolicy: Swift.AsyncThrowingStream<A,
   Swift.Error>.Continuation.BufferingPolicy) -> (stream: Swift.AsyncThrowingStream<A, Swift.Error>,
   continuation: Swift.AsyncThrowingStream<A, Swift.Error>.Continuation) */

tuple2_conflict4
Swift::AsyncThrowingStream::_makeStream(BufferingPolicy of,AsyncThrowingStream throwing)

{
  AsyncStream<undefined> AVar1;
  tuple2_conflict4 tVar2;
  
  AVar1.unknown = (undefined *)(ulong)(byte)of.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf8594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeStream_100eaee28)();
  tVar2.continuation.unknown = throwing.unknown;
  tVar2.stream.unknown = AVar1.unknown;
  return tVar2;
}



/* Address: 0x100bf8598 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Continuation::YieldResult::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncThrowingStream.Continuation.YieldResult */

YieldResult Swift::AsyncThrowingStream::Continuation::YieldResult::typeMetadataAccessor(void)

{
  YieldResult in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf85a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaee30)();
  return (YieldResult)in_w0.value;
}



/* Address: 0x100bf85a4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Continuation::BufferingPolicy::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncThrowingStream.Continuation.BufferingPolicy */

BufferingPolicy
Swift::AsyncThrowingStream::Continuation::BufferingPolicy::typeMetadataAccessor(void)

{
  BufferingPolicy in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf85ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaee48)();
  return (BufferingPolicy)in_w0.value;
}



/* Address: 0x100bf85b0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Continuation::$yield */

/* Swift.AsyncThrowingStream.Continuation.yield(__owned A) -> Swift.AsyncThrowingStream<A,
   B>.Continuation.YieldResult */

YieldResult Swift::AsyncThrowingStream::Continuation::_yield(YieldResult param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf85b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__yield_100eaee58)();
  return (YieldResult)param_1.value;
}



/* Address: 0x100bf85bc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Continuation::$finish */

/* Swift.AsyncThrowingStream.Continuation.finish(throwing: __owned B?) -> () */

void Swift::AsyncThrowingStream::Continuation::_finish(Continuation throwing)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf85c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__finish_100eaee60)();
  return;
}



/* Address: 0x100bf85c8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncThrowingStream.Continuation */

Continuation Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor(void)

{
  Continuation in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaee68)();
  return (Continuation)in_x0.unknown;
}



/* Address: 0x100bf85d4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::$makeAsyncIterator */

/* Swift.AsyncThrowingStream.makeAsyncIterator() -> Swift.AsyncThrowingStream<A, B>.Iterator */

Iterator Swift::AsyncThrowingStream::_makeAsyncIterator(AsyncThrowingStream param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf85dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeAsyncIterator_100eaee78)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf85e0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Iterator::$next */

/* Swift.AsyncThrowingStream.Iterator.next() async throws -> A? */

void Swift::AsyncThrowingStream::Iterator::_next(Iterator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf85e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaee80)();
  return;
}



/* Address: 0x100bf85ec | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::Iterator::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncThrowingStream.Iterator */

Iterator Swift::AsyncThrowingStream::Iterator::typeMetadataAccessor(void)

{
  Iterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf85f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaee90)();
  return (Iterator)in_x0.unknown;
}



/* Address: 0x100bf85f8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncThrowingStream */

AsyncThrowingStream Swift::AsyncThrowingStream::typeMetadataAccessor(void)

{
  AsyncThrowingStream in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeea0)();
  return (AsyncThrowingStream)in_x0.unknown;
}



/* Address: 0x100bf8604 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncThrowingStream::$init */

/* Swift.AsyncThrowingStream.init< where B == Swift.Error>(_: A.Type, bufferingPolicy:
   Swift.AsyncThrowingStream<A, Swift.Error>.Continuation.BufferingPolicy, _:
   (Swift.AsyncThrowingStream<A, Swift.Error>.Continuation) -> ()) -> Swift.AsyncThrowingStream<A,
   Swift.Error> */

AsyncThrowingStream<undefined,Swift_AsyncThrowingStream_init<_where_B____Swift_Error>(_:_A_Type,bufferingPolicy:_Swift_AsyncThrowingStream<A,Swift_Error>_Continuation_BufferingPolicy,_:_(Swift_AsyncThrowingStream<A,Swift_Error>_Continuation)__>______>_Swift_AsyncThrowingStream<A,Swift_Error>>
 Swift::AsyncThrowingStream::_init(BufferingPolicy param_1)

{
  AsyncThrowingStream<undefined,Swift_AsyncThrowingStream_init<_where_B____Swift_Error>(_:_A_Type,bufferingPolicy:_Swift_AsyncThrowingStream<A,Swift_Error>_Continuation_BufferingPolicy,_:_(Swift_AsyncThrowingStream<A,Swift_Error>_Continuation)__>______>_Swift_AsyncThrowingStream<A,Swift_Error>>
  AVar1;
  
  AVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaeeb0)();
  return (AsyncThrowingStream<undefined,Swift_AsyncThrowingStream_init<_where_B____Swift_Error>(_:_A_Type,bufferingPolicy:_Swift_AsyncThrowingStream<A,Swift_Error>_Continuation_BufferingPolicy,_:_(Swift_AsyncThrowingStream<A,Swift_Error>_Continuation)__>______>_Swift_AsyncThrowingStream<A,Swift_Error>>
          )AVar1.unknown;
}



/* Address: 0x100bf8610 | /usr/lib/swift/libswiftCore.dylib::double::get_description */

/* Swift.Double.description.getter : Swift.String */

String double::get_description(double param_1)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eac5a8)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bf861c | /usr/lib/swift/libswiftCore.dylib::double::get_significandWidth */

/* Swift.Double.significandWidth.getter : Swift.Int */

__int64 double::get_significandWidth(double param_1)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_significandWidth_100eac5b0)();
  return in_x0;
}



/* Address: 0x100bf8628 | /usr/lib/swift/libswiftCore.dylib::double::$write */

/* Swift.Double.write<A where A: Swift.TextOutputStream>(to: inout A) -> () */

void double::_write(undefined *to,double param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_100eac5b8)();
  return;
}



/* Address: 0x100bf8634 | /usr/lib/swift/libswiftCore.dylib::double::get_exponent */

/* Swift.Double.exponent.getter : Swift.Int */

__int64 double::get_exponent(double param_1)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_exponent_100eac5c0)();
  return in_x0;
}



/* Address: 0x100bf8640 | /usr/lib/swift/libswiftCore.dylib::double::$init */

/* Swift.Double.init(Swift.Substring) -> Swift.Double? */

void double::_init(Substring param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac600)();
  return;
}



/* Address: 0x100bf864c | /usr/lib/swift/libswiftCore.dylib::Swift::Decodable::$init */

/* dispatch thunk of Swift.Decodable.init(from: Swift.Decoder) throws -> A */

void Swift::Decodable::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac608)();
  return;
}



/* Address: 0x100bf8658 | /usr/lib/swift/libswiftCore.dylib::float::get_description */

/* Swift.Float.description.getter : Swift.String */

String float::get_description(float param_1)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eac610)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bf8664 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Set::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Set._bridgeToObjectiveC() -> __C.NSSet */

NSSet * (extension_Foundation)::Swift::Set::_bridgeToObjectiveC(void)

{
  NSSet *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea78c0)();
  return in_x0;
}



/* Address: 0x100bf8670 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Set::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Set._unconditionallyBridgeFromObjectiveC(__C.NSSet?) ->
   Swift.Set<A> */

Set<undefined> (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC(void)

{
  Set<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea78c8)();
  return (Set<undefined>)in_x0.unknown;
}



/* Address: 0x100bf867c | /usr/lib/swift/libswiftCore.dylib::Swift::Set::init */

/* Swift.Set.init(minimumCapacity: Swift.Int) -> Swift.Set<A> */

Set<undefined> Swift::Set::init(__int64 minimumCapacity)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac638)();
  return (Set<undefined>)minimumCapacity;
}



/* Address: 0x100bf8688 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::==_infix */

/* static Swift.Set.== infix(Swift.Set<A>, Swift.Set<A>) -> Swift.Bool */

bool Swift::Set::___infix(Set<undefined> param_1,Set<undefined> param_2,Set param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eac640)();
  return (bool)uVar1;
}



/* Address: 0x100bf8694 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::Index::modify__asCocoa */

/* Swift.Set.Index._asCocoa.modify : Swift.__CocoaSet.Index */

void __thiscall Swift::Set::Index::modify__asCocoa(Index *this,Index param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf869c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_modify__asCocoa_100eac648)();
  return;
}



/* Address: 0x100bf86a0 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::get_count */

/* Swift.Set.count.getter : Swift.Int */

__int64 Swift::Set::get_count(Set param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac658)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf86ac | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$union */

/* Swift.Set.union<A where A == A1.Element, A1: Swift.Sequence>(__owned A1) -> Swift.Set<A> */

Set<undefined> Swift::Set::_union(Set<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__union_100eac660)();
  return (Set<undefined>)param_1.unknown;
}



/* Address: 0x100bf86b8 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$filter */

/* Swift.Set.filter((A) throws -> Swift.Bool) throws -> Swift.Set<A> */

Set<undefined> Swift::Set::_filter(Set param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__filter_100eac668)();
  return (Set<undefined>)param_1.unknown;
}



/* Address: 0x100bf86c4 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$remove */

/* Swift.Set.remove(A) -> A? */

void Swift::Set::_remove(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__remove_100eac670)();
  return;
}



/* Address: 0x100bf86d0 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$update */

/* Swift.Set.update(with: __owned A) -> A? */

void Swift::Set::_update(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__update_100eac678)();
  return;
}



/* Address: 0x100bf86dc | /usr/lib/swift/libswiftCore.dylib::Swift::Set::init */

/* Swift.Set.init(_native: __owned Swift._NativeSet<A>) -> Swift.Set<A> */

Set<undefined> Swift::Set::init(_NativeSet<undefined> _native)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac680)();
  return (Set<undefined>)_native.unknown;
}



/* Address: 0x100bf86e8 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::get_isEmpty */

/* Swift.Set.isEmpty.getter : Swift.Bool */

bool Swift::Set::get_isEmpty(Set param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf86f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isEmpty_100eac688)();
  return (bool)uVar1;
}



/* Address: 0x100bf86f4 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::Iterator::$init */

/* Swift.Set.Iterator.init(_cocoa: __owned Swift.__CocoaSet.Iterator) -> Swift.Set<A>.Iterator */

Iterator Swift::Set::Iterator::_init(Iterator *_cocoa)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf86fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac690)();
  return (Iterator)_cocoa;
}



/* Address: 0x100bf8700 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::Iterator::$init */

/* Swift.Set.Iterator.init(_native: __owned Swift._NativeSet<A>.Iterator) -> Swift.Set<A>.Iterator
    */

Iterator Swift::Set::Iterator::_init(Iterator _native)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac698)();
  return (Iterator)_native.unknown;
}



/* Address: 0x100bf870c | /usr/lib/swift/libswiftCore.dylib::Swift::Set::contains */

/* Swift.Set.contains(A) -> Swift.Bool */

bool Swift::Set::contains(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_contains_100eac6a0)();
  return (bool)param_1;
}



/* Address: 0x100bf8718 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$isSubset */

/* Swift.Set.isSubset<A where A == A1.Element, A1: Swift.Sequence>(of: A1) -> Swift.Bool */

bool Swift::Set::_isSubset(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__isSubset_100eac6a8)();
  return (bool)param_1;
}



/* Address: 0x100bf8724 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::typeMetadataAccessor */

/* type metadata accessor for Swift.Set */

Set Swift::Set::typeMetadataAccessor(void)

{
  Set in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf872c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eac6b0)();
  return (Set)in_x0.unknown;
}



/* Address: 0x100bf8730 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::$init */

/* Swift.Set.init<A where A == A1.Element, A1: Swift.Sequence>(__owned A1) -> Swift.Set<A> */

Set<undefined> Swift::Set::_init(Set<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac6c0)();
  return (Set<undefined>)param_1.unknown;
}



/* Address: 0x100bf873c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__int64::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Int._bridgeToObjectiveC() -> __C.NSNumber */

NSNumber * (extension_Foundation)::__int64::_bridgeToObjectiveC(void)

{
  NSNumber *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea78d0)();
  return in_x0;
}



/* Address: 0x100bf8748 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__int64::$_forceBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Int._forceBridgeFromObjectiveC(_: __C.NSNumber, result:
   inout Swift.Int?) -> () */

void (extension_Foundation)::__int64::__forceBridgeFromObjectiveC(NSNumber *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___forceBridgeFromObjectiveC_100ea78d8)();
  return;
}



/* Address: 0x100bf8754 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__int64::$_conditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Int._conditionallyBridgeFromObjectiveC(_: __C.NSNumber,
   result: inout Swift.Int?) -> Swift.Bool */

bool (extension_Foundation)::__int64::__conditionallyBridgeFromObjectiveC(NSNumber *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___conditionallyBridgeFromObjectiveC_100ea78e0)();
  return (bool)uVar1;
}



/* Address: 0x100bf8760 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__int64::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Int._unconditionallyBridgeFromObjectiveC(__C.NSNumber?) ->
   Swift.Int */

__int64 (extension_Foundation)::__int64::__unconditionallyBridgeFromObjectiveC(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea78e8)();
  return in_x0;
}



/* Address: 0x100bf876c | /usr/lib/swift/libswiftCore.dylib::__int64::get_hashValue */

/* Swift.Int.hashValue.getter : Swift.Int */

__int64 __int64::get_hashValue(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_hashValue_100eac6e8)();
  return param_1;
}



/* Address: 0x100bf8778 | /usr/lib/swift/libswiftCore.dylib::Swift::Numeric::*_infix */

/* dispatch thunk of static Swift.Numeric.* infix(A, A) -> A */

void Swift::Numeric::__infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___infix_100eac768)();
  return;
}



/* Address: 0x100bf8784 | /usr/lib/swift/libswiftCore.dylib::Swift::Numeric::$init */

/* dispatch thunk of Swift.Numeric.init<A where A1: Swift.BinaryInteger>(exactly: A1) -> A? */

void Swift::Numeric::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf878c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac770)();
  return;
}



/* Address: 0x100bf8790 | /usr/lib/swift/libswiftCore.dylib::Swift::RandomAccessCollection::$index */

/* dispatch thunk of Swift.RandomAccessCollection.index(_: A.Index, offsetBy: Swift.Int) -> A.Index
    */

void Swift::RandomAccessCollection::_index(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac778)();
  return;
}



/* Address: 0x100bf879c | /usr/lib/swift/libswiftCore.dylib::Swift::RandomAccessCollection::$distance */

/* dispatch thunk of Swift.RandomAccessCollection.distance(from: A.Index, to: A.Index) -> Swift.Int
    */

__int64 Swift::RandomAccessCollection::_distance(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf87a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__distance_100eac780)();
  return in_x0;
}



/* Address: 0x100bf87a8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

/* (extension in Swift):Swift.RandomAccessCollection.index(_: A.Index, offsetBy: Swift.Int,
   limitedBy: A.Index) -> A.Index? */

void (extension_Swift)::Swift::RandomAccessCollection::_index(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf87b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac788)();
  return;
}



/* Address: 0x100bf87b4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

/* (extension in Swift):Swift.RandomAccessCollection< where A.Index: Swift.Strideable, A.Indices ==
   Swift.Range<A.Index>, A.Index.Stride == Swift.Int>.index(after: A.Index) -> A.Index */

void (extension_Swift)::Swift::RandomAccessCollection::_index(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf87bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac790)();
  return;
}



/* Address: 0x100bf87c0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

/* (extension in Swift):Swift.RandomAccessCollection< where A.Index: Swift.Strideable, A.Indices ==
   Swift.Range<A.Index>, A.Index.Stride == Swift.Int>.index(before: A.Index) -> A.Index */

void (extension_Swift)::Swift::RandomAccessCollection::_index(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf87c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac798)();
  return;
}



/* Address: 0x100bf87cc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

/* (extension in Swift):Swift.RandomAccessCollection< where A.Index: Swift.Strideable, A.Indices ==
   Swift.Range<A.Index>, A.Index.Stride == Swift.Int>.index(_: A.Index, offsetBy: Swift.Int) ->
   A.Index */

void (extension_Swift)::Swift::RandomAccessCollection::_index(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf87d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac7a0)();
  return;
}



/* Address: 0x100bf87d8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$get_indices */

/* (extension in Swift):Swift.RandomAccessCollection< where A.Index: Swift.Strideable, A.Indices ==
   Swift.Range<A.Index>, A.Index.Stride == Swift.Int>.indices.getter : Swift.Range<A.Index> */

Range<(extension_in_Swift):Swift_RandomAccessCollection<_where_A_Index:_Swift_Strideable,A_Indices____Swift_Range<A_Index>,A_Index_Stride____Swift_Int>_indices_getter_:_Swift_Range<A_Index>>
 (extension_Swift)::Swift::RandomAccessCollection::_get_indices(void)

{
  Range<(extension_in_Swift):Swift_RandomAccessCollection<_where_A_Index:_Swift_Strideable,A_Indices____Swift_Range<A_Index>,A_Index_Stride____Swift_Int>_indices_getter_:_Swift_Range<A_Index>>
  in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf87e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_indices_100eac7a8)();
  return (Range<(extension_in_Swift):Swift_RandomAccessCollection<_where_A_Index:_Swift_Strideable,A_Indices____Swift_Range<A_Index>,A_Index_Stride____Swift_Int>_indices_getter_:_Swift_Range<A_Index>>
          )in_x0.unknown;
}



/* Address: 0x100bf87e4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$distance */

/* (extension in Swift):Swift.RandomAccessCollection< where A.Index: Swift.Strideable, A.Indices ==
   Swift.Range<A.Index>, A.Index.Stride == Swift.Int>.distance(from: A.Index, to: A.Index) ->
   Swift.Int */

__int64 (extension_Swift)::Swift::RandomAccessCollection::_distance(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__distance_100eac7b0)();
  return in_x0;
}



/* Address: 0x100bf87f0 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$get_startIndex */

/* dispatch thunk of Swift.Collection.startIndex.getter : A.Index */

void Swift::Collection::_get_startIndex(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf87f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_startIndex_100eac7b8)();
  return;
}



/* Address: 0x100bf87fc | /usr/lib/swift/libswift_StringProcessing.dylib::(extension__StringProcessing)::Swift::Collection::$trimmingPrefix */

/* (extension in _StringProcessing):Swift.Collection.trimmingPrefix(while: (A.Element) throws ->
   Swift.Bool) throws -> A.SubSequence */

void (extension__StringProcessing)::Swift::Collection::_trimmingPrefix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__trimmingPrefix_100eaf1d0)();
  return;
}



/* Address: 0x100bf8808 | /usr/lib/swift/libswift_StringProcessing.dylib::(extension__StringProcessing)::Swift::Collection::$split */

/* (extension in _StringProcessing):Swift.Collection< where A.Element: Swift.Equatable>.split<A
   where A1: Swift.Collection, A.Element == A1.Element>(separator: A1, maxSplits: Swift.Int,
   omittingEmptySubsequences: Swift.Bool) -> [A.SubSequence] */

void (extension__StringProcessing)::Swift::Collection::_split(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__split_100eaf1d8)();
  return;
}



/* Address: 0x100bf8814 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$_failEarlyRangeCheck */

/* dispatch thunk of Swift.Collection._failEarlyRangeCheck(_: Swift.Range<A.Index>, bounds:
   Swift.Range<A.Index>) -> () */

void Swift::Collection::__failEarlyRangeCheck
               (Range<dispatch_thunk_of_Swift_Collection__failEarlyRangeCheck(_:_Swift_Range<A_Index>,bounds:_Swift_Range<A_Index>)__>___>
                param_1,Range<dispatch_thunk_of_Swift_Collection__failEarlyRangeCheck(_:_Swift_Range<A_Index>,bounds:_Swift_Range<A_Index>)__>___>
                        bounds)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___failEarlyRangeCheck_100eac7c8)();
  return;
}



/* Address: 0x100bf8820 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::get_count */

/* dispatch thunk of Swift.Collection.count.getter : Swift.Int */

__int64 Swift::Collection::get_count(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac7d8)();
  return in_x0;
}



/* Address: 0x100bf882c | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$index */

/* dispatch thunk of Swift.Collection.index(after: A.Index) -> A.Index */

void Swift::Collection::_index(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac7e0)();
  return;
}



/* Address: 0x100bf8838 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$index */

/* dispatch thunk of Swift.Collection.index(_: A.Index, offsetBy: Swift.Int, limitedBy: A.Index) ->
   A.Index? */

void Swift::Collection::_index(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac7e8)();
  return;
}



/* Address: 0x100bf8844 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$index */

/* dispatch thunk of Swift.Collection.index(_: A.Index, offsetBy: Swift.Int) -> A.Index */

void Swift::Collection::_index(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf884c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac7f0)();
  return;
}



/* Address: 0x100bf8850 | /usr/lib/swift/libswiftCore.dylib::Swift::Collection::$get_indices */

/* dispatch thunk of Swift.Collection.indices.getter : A.Indices */

void Swift::Collection::_get_indices(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_indices_100eac800)();
  return;
}


