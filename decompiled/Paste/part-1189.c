/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf825c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Array<undefined>::$encode */

/* (extension in Swift):Swift.Array<A where A: Swift.Encodable>.encode(to: Swift.Encoder) throws ->
   () */

void (extension_Swift)::Swift::Array<undefined>::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eac4e8)();
  return;
}



/* Address: 0x100bf8268 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Array<undefined>::$==_infix */

/* static (extension in Swift):Swift.Array<A where A: Swift.Equatable>.== infix([A], [A]) ->
   Swift.Bool */

bool (extension_Swift)::Swift::Array<undefined>::____infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_____infix_100eac4f0)();
  return (bool)param_1;
}



/* Address: 0x100bf8274 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Array<undefined>::$init */

/* (extension in Swift):Swift.Array<A where A: Swift.Decodable>.init(from: Swift.Decoder) throws ->
   [A] */

void (extension_Swift)::Swift::Array<undefined>::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac4f8)();
  return;
}



/* Address: 0x100bf8280 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$init */

/* Swift.Array.init<A where A == A1.Element, A1: Swift.Sequence>(A1) -> [A] */

void Swift::Array<undefined>::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac500)();
  return;
}



/* Address: 0x100bf828c | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_subscript */

/* Swift.Array.subscript.getter : (Swift.Range<Swift.Int>) -> Swift.ArraySlice<A> */

ArraySlice<undefined> Swift::Array<undefined>::get_subscript(ArraySlice<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100eac508)();
  return (ArraySlice<undefined>)param_1.unknown;
}



/* Address: 0x100bf8298 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_subscript */

/* Swift.Array.subscript.getter : (Swift.Int) -> A */

void Swift::Array<undefined>::get_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf82a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100eac560)();
  return;
}



/* Address: 0x100bf82a4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::bool::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Bool._bridgeToObjectiveC() -> __C.NSNumber */

NSNumber * (extension_Foundation)::bool::_bridgeToObjectiveC(void)

{
  NSNumber *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf82ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea78b8)();
  return in_x0;
}



/* Address: 0x100bf82b0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Actor::get_unownedExecutor */

/* dispatch thunk of Swift.Actor.unownedExecutor.getter : Swift.UnownedSerialExecutor */

UnownedSerialExecutor Swift::Actor::get_unownedExecutor(void)

{
  UnownedSerialExecutor in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf82b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_unownedExecutor_100eaeb00)();
  return (UnownedSerialExecutor)in_x0.unknown;
}



/* Address: 0x100bf82bc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::init */

/* Swift.CheckedContinuation.init(continuation: Swift.UnsafeContinuation<A, B>, function:
   Swift.String) -> Swift.CheckedContinuation<A, B> */

CheckedContinuation<undefined,undefined>
Swift::CheckedContinuation::init
          (UnsafeContinuation<undefined,undefined> continuation,String function)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf82c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaeb10)(continuation.unknown,function.str,function.bridgeObject);
  return (CheckedContinuation<undefined,undefined>)continuation.unknown;
}



/* Address: 0x100bf82c8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::resume */

/* Swift.CheckedContinuation.resume(throwing: __owned B) -> () */

void Swift::CheckedContinuation::resume(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf82d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resume_100eaeb18)();
  return;
}



/* Address: 0x100bf82d4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::resume */

/* Swift.CheckedContinuation.resume(returning: __owned A) -> () */

void Swift::CheckedContinuation::resume(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf82dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resume_100eaeb20)();
  return;
}



/* Address: 0x100bf82e0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::typeMetadataAccessor */

/* type metadata accessor for Swift.CheckedContinuation */

CheckedContinuation Swift::CheckedContinuation::typeMetadataAccessor(void)

{
  CheckedContinuation in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf82e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeb28)();
  return (CheckedContinuation)in_x0.unknown;
}



/* Address: 0x100bf82ec | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CancellationError::typeMetadataAccessor */

/* type metadata accessor for Swift.CancellationError */

CancellationError Swift::CancellationError::typeMetadataAccessor(void)

{
  CancellationError in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf82f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeb38)();
  return (CancellationError)in_x0.unknown;
}



/* Address: 0x100bf82f8 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Executor::enqueue */

/* (extension in Swift):Swift.Executor.enqueue(Swift.UnownedJob) -> () */

void (extension_Swift)::Swift::Executor::enqueue(UnownedJob param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_enqueue_100eaeb48)();
  return;
}



/* Address: 0x100bf8304 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Executor::enqueue */

/* (extension in Swift):Swift.Executor.enqueue(__owned Swift.Job) -> () */

void (extension_Swift)::Swift::Executor::enqueue(Job param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf830c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_enqueue_100eaeb50)();
  return;
}



/* Address: 0x100bf8310 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::$awaitAllRemainingTasks */

/* Swift.TaskGroup.awaitAllRemainingTasks() async -> () */

void Swift::TaskGroup::_awaitAllRemainingTasks(TaskGroup param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__awaitAllRemainingTasks_100eaeb58)();
  return;
}



/* Address: 0x100bf831c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::$next */

/* Swift.TaskGroup.next(isolation: isolated Swift.Actor?) async -> A? */

void Swift::TaskGroup::_next(TaskGroup isolation)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaeb68)();
  return;
}



/* Address: 0x100bf8328 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::init */

/* Swift.TaskGroup.init(group: Builtin.RawPointer) -> Swift.TaskGroup<A> */

TaskGroup<undefined> Swift::TaskGroup::init(void *group)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaeb78)();
  return (TaskGroup<undefined>)group;
}



/* Address: 0x100bf8334 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::get_isEmpty */

/* Swift.TaskGroup.isEmpty.getter : Swift.Bool */

bool Swift::TaskGroup::get_isEmpty(TaskGroup param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isEmpty_100eaeb80)();
  return (bool)uVar1;
}



/* Address: 0x100bf8340 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::cancelAll */

/* Swift.TaskGroup.cancelAll() -> () */

void Swift::TaskGroup::cancelAll(TaskGroup param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancelAll_100eaeb88)();
  return;
}



/* Address: 0x100bf834c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskGroup::typeMetadataAccessor */

/* type metadata accessor for Swift.TaskGroup */

TaskGroup Swift::TaskGroup::typeMetadataAccessor(void)

{
  TaskGroup in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeb90)();
  return (TaskGroup)in_x0.unknown;
}



/* Address: 0x100bf8358 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncIteratorProtocol::$next */

/* dispatch thunk of Swift.AsyncIteratorProtocol.next() async throws -> A.Element? */

void Swift::AsyncIteratorProtocol::_next(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaeb98)();
  return;
}



/* Address: 0x100bf8364 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncIteratorProtocol::$next */

/* dispatch thunk of Swift.AsyncIteratorProtocol.next(isolation: isolated Swift.Actor?) async
   throws(A.Failure) -> A.Element? */

void Swift::AsyncIteratorProtocol::_next(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf836c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaeba8)();
  return;
}



/* Address: 0x100bf8370 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::AsyncIteratorProtocol::$next */

/* (extension in Swift):Swift.AsyncIteratorProtocol.next() async throws(A.Failure) -> A.Element? */

void (extension_Swift)::Swift::AsyncIteratorProtocol::_next(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaebd0)();
  return;
}



/* Address: 0x100bf837c | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::AsyncIteratorProtocol::$next */

/* (extension in Swift):Swift.AsyncIteratorProtocol.next(isolation: isolated Swift.Actor?) async
   throws(A.Failure) -> A.Element? */

void (extension_Swift)::Swift::AsyncIteratorProtocol::_next(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaebe0)();
  return;
}



/* Address: 0x100bf8388 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::UnownedJob::init */

/* Swift.UnownedJob.init(__owned Swift.ExecutorJob) -> Swift.UnownedJob */

UnownedJob Swift::UnownedJob::init(ExecutorJob param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaec00)();
  return (UnownedJob)param_1.unknown;
}



/* Address: 0x100bf8394 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::get_shared */

/* static Swift.MainActor.shared.getter : Swift.MainActor */

MainActor * __thiscall Swift::MainActor::get_shared(MainActor *this,MainActor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf839c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_shared_100eaec08)();
  return param_1;
}



/* Address: 0x100bf83a0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::typeMetadataAccessor */

/* type metadata accessor for Swift.MainActor */

MainActor * Swift::MainActor::typeMetadataAccessor(void)

{
  MainActor *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf83a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaec10)();
  return in_x0;
}



/* Address: 0x100bf83ac | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::get_userInitiated */

/* static Swift.TaskPriority.userInitiated.getter : Swift.TaskPriority */

TaskPriority Swift::TaskPriority::get_userInitiated(TaskPriority param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf83b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_userInitiated_100eaec20)();
  return (TaskPriority)param_1.unknown;
}



/* Address: 0x100bf83b8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::get_low */

/* static Swift.TaskPriority.low.getter : Swift.TaskPriority */

TaskPriority Swift::TaskPriority::get_low(TaskPriority param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf83c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_low_100eaec28)();
  return (TaskPriority)param_1.unknown;
}



/* Address: 0x100bf83c4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::get_utility */

/* static Swift.TaskPriority.utility.getter : Swift.TaskPriority */

TaskPriority Swift::TaskPriority::get_utility(TaskPriority param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_utility_100eaec30)();
  return (TaskPriority)param_1.unknown;
}



/* Address: 0x100bf83d0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::get_rawValue */

/* Swift.TaskPriority.rawValue.getter : Swift.UInt8 */

__uint8 Swift::TaskPriority::get_rawValue(TaskPriority param_1)

{
  __uint8 _Var1;
  
  _Var1 = (__uint8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf83d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_100eaec38)();
  return _Var1;
}



/* Address: 0x100bf83dc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::typeMetadataAccessor */

/* type metadata accessor for Swift.TaskPriority */

TaskPriority Swift::TaskPriority::typeMetadataAccessor(void)

{
  TaskPriority in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf83e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaec40)();
  return (TaskPriority)in_x0.unknown;
}



/* Address: 0x100bf83e8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::$makeStream */

/* static Swift.AsyncStream.makeStream(of: A.Type, bufferingPolicy:
   Swift.AsyncStream<A>.Continuation.BufferingPolicy) -> (stream: Swift.AsyncStream<A>,
   continuation: Swift.AsyncStream<A>.Continuation) */

tuple2_conflict4 Swift::AsyncStream::_makeStream(BufferingPolicy of,AsyncStream bufferingPolicy)

{
  AsyncStream<undefined> AVar1;
  tuple2_conflict4 tVar2;
  
  AVar1.unknown = (undefined *)(ulong)(byte)of.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeStream_100eaec50)();
  tVar2.continuation.unknown = bufferingPolicy.unknown;
  tVar2.stream.unknown = AVar1.unknown;
  return tVar2;
}



/* Address: 0x100bf83f4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::YieldResult::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncStream.Continuation.YieldResult */

YieldResult Swift::AsyncStream::Continuation::YieldResult::typeMetadataAccessor(void)

{
  YieldResult in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf83fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaec58)();
  return (YieldResult)in_w0.value;
}



/* Address: 0x100bf8400 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::$set_onTermination */

/* Swift.AsyncStream.Continuation.onTermination.setter : (@Sendable
   (Swift.AsyncStream<A>.Continuation.Termination) -> ())? */

void __thiscall Swift::AsyncStream::Continuation::_set_onTermination(Continuation *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_onTermination_100eaec68)();
  return;
}



/* Address: 0x100bf840c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::BufferingPolicy::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncStream.Continuation.BufferingPolicy */

BufferingPolicy Swift::AsyncStream::Continuation::BufferingPolicy::typeMetadataAccessor(void)

{
  BufferingPolicy in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaec80)();
  return (BufferingPolicy)in_w0.value;
}



/* Address: 0x100bf8418 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::$yield */

/* Swift.AsyncStream.Continuation.yield<A where A == ()>() ->
   Swift.AsyncStream<()>.Continuation.YieldResult */

YieldResult Swift::AsyncStream::Continuation::_yield(Continuation_conflict param_1)

{
  YieldResult YVar1;
  
  YVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf8420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__yield_100eaec90)();
  return (YieldResult)YVar1.value;
}



/* Address: 0x100bf8424 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::$yield */

/* Swift.AsyncStream.Continuation.yield(__owned A) -> Swift.AsyncStream<A>.Continuation.YieldResult
    */

YieldResult Swift::AsyncStream::Continuation::_yield(YieldResult param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf842c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__yield_100eaec98)();
  return (YieldResult)param_1.value;
}



/* Address: 0x100bf8430 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::finish */

/* Swift.AsyncStream.Continuation.finish() -> () */

void Swift::AsyncStream::Continuation::finish(Continuation_conflict param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_finish_100eaeca0)();
  return;
}



/* Address: 0x100bf843c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Continuation::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncStream.Continuation */

Continuation_conflict Swift::AsyncStream::Continuation::typeMetadataAccessor(void)

{
  Continuation_conflict in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaeca8)();
  return (Continuation_conflict)in_x0.unknown;
}



/* Address: 0x100bf8448 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::$makeAsyncIterator */

/* Swift.AsyncStream.makeAsyncIterator() -> Swift.AsyncStream<A>.Iterator */

Iterator Swift::AsyncStream::_makeAsyncIterator(AsyncStream param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeAsyncIterator_100eaecb8)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf8454 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Iterator::$next */

/* Swift.AsyncStream.Iterator.next() async -> A? */

void Swift::AsyncStream::Iterator::_next(Iterator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaecc0)();
  return;
}



/* Address: 0x100bf8460 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::Iterator::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncStream.Iterator */

Iterator Swift::AsyncStream::Iterator::typeMetadataAccessor(void)

{
  Iterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaecd0)();
  return (Iterator)in_x0.unknown;
}



/* Address: 0x100bf846c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::typeMetadataAccessor */

/* type metadata accessor for Swift.AsyncStream */

AsyncStream Swift::AsyncStream::typeMetadataAccessor(void)

{
  AsyncStream in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaece8)();
  return (AsyncStream)in_x0.unknown;
}



/* Address: 0x100bf8478 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::AsyncStream::$init */

/* Swift.AsyncStream.init(_: A.Type, bufferingPolicy:
   Swift.AsyncStream<A>.Continuation.BufferingPolicy, _: (Swift.AsyncStream<A>.Continuation) -> ())
   -> Swift.AsyncStream<A> */

AsyncStream<undefined> Swift::AsyncStream::_init(BufferingPolicy param_1)

{
  AsyncStream<undefined> AVar1;
  
  AVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf8480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaecf8)();
  return (AsyncStream<undefined>)AVar1.unknown;
}



/* Address: 0x100bf8484 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Task::get_value */

/* Swift.Task.value.getter : A */

void Swift::Task::get_value(Task param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf848c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_value_100eaed08)();
  return;
}



/* Address: 0x100bf8490 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Task::cancel */

/* Swift.Task.cancel() -> () */

void Swift::Task::cancel(Task param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancel_100eaed18)();
  return;
}



/* Address: 0x100bf849c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Task::$get_result */

/* Swift.Task.result.getter : Swift.Result<A, B> */

void Swift::Task::_get_result(Task param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf84a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_result_100eaed20)();
  return;
}



/* Address: 0x100bf84a8 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value */

/* (extension in Swift):Swift.Task< where B == Swift.Never>.value.getter : A */

void (extension_Swift)::Swift::Task::_get_value(Task param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_value_100eaed38)();
  return;
}



/* Address: 0x100bf84b4 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_isCancelled */

/* static (extension in Swift):Swift.Task< where A == Swift.Never, B ==
   Swift.Never>.isCancelled.getter : Swift.Bool */

bool (extension_Swift)::Swift::Task::_get_isCancelled(Task param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf84bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_isCancelled_100eaed48)();
  return (bool)uVar1;
}



/* Address: 0x100bf84c0 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$checkCancellation */

/* static (extension in Swift):Swift.Task< where A == Swift.Never, B ==
   Swift.Never>.checkCancellation() throws -> () */

void (extension_Swift)::Swift::Task::_checkCancellation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf84c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__checkCancellation_100eaed50)();
  return;
}



/* Address: 0x100bf84cc | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep */

/* static (extension in Swift):Swift.Task< where A == Swift.Never, B ==
   Swift.Never>.sleep(nanoseconds: Swift.UInt64) async throws -> () */

void (extension_Swift)::Swift::Task::_sleep(__uint64 nanoseconds)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf84d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sleep_100eaed58)();
  return;
}



/* Address: 0x100bf84d8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::UnsafeContinuation::typeMetadataAccessor */

/* type metadata accessor for Swift.UnsafeContinuation */

UnsafeContinuation Swift::UnsafeContinuation::typeMetadataAccessor(void)

{
  UnsafeContinuation in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf84e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaed68)();
  return (UnsafeContinuation)in_x0.unknown;
}



/* Address: 0x100bf84e4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::UnownedSerialExecutor::$init */

/* Swift.UnownedSerialExecutor.init<A where A: Swift.SerialExecutor>(complexEquality: __shared A) ->
   Swift.UnownedSerialExecutor */

UnownedSerialExecutor Swift::UnownedSerialExecutor::_init(void)

{
  UnownedSerialExecutor in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf84ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eaed78)();
  return (UnownedSerialExecutor)in_x0.unknown;
}



/* Address: 0x100bf84f0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::SerialExecutor::asUnownedSerialExecutor */

/* dispatch thunk of Swift.SerialExecutor.asUnownedSerialExecutor() -> Swift.UnownedSerialExecutor
    */

UnownedSerialExecutor Swift::SerialExecutor::asUnownedSerialExecutor(void)

{
  UnownedSerialExecutor in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf84f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_asUnownedSerialExecutor_100eaed80)();
  return (UnownedSerialExecutor)in_x0.unknown;
}



/* Address: 0x100bf84fc | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::SerialExecutor::checkIsolated */

/* (extension in Swift):Swift.SerialExecutor.checkIsolated() -> () */

void (extension_Swift)::Swift::SerialExecutor::checkIsolated(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_checkIsolated_100eaed88)();
  return;
}



/* Address: 0x100bf8508 | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::SerialExecutor::$isIsolatingCurrentContext */

/* (extension in Swift):Swift.SerialExecutor.isIsolatingCurrentContext() -> Swift.Bool? */

void (extension_Swift)::Swift::SerialExecutor::_isIsolatingCurrentContext(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__isIsolatingCurrentContext_100eaed90)();
  return;
}



/* Address: 0x100bf8514 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::get_isCancelled */

/* Swift.ThrowingTaskGroup.isCancelled.getter : Swift.Bool */

bool Swift::ThrowingTaskGroup::get_isCancelled(ThrowingTaskGroup param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf851c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isCancelled_100eaed98)();
  return (bool)uVar1;
}



/* Address: 0x100bf8520 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::$makeAsyncIterator */

/* Swift.ThrowingTaskGroup.makeAsyncIterator() -> Swift.ThrowingTaskGroup<A, B>.Iterator */

Iterator Swift::ThrowingTaskGroup::_makeAsyncIterator(ThrowingTaskGroup param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeAsyncIterator_100eaeda0)();
  return (Iterator)param_1.unknown;
}



/* Address: 0x100bf852c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::$awaitAllRemainingTasks */

/* Swift.ThrowingTaskGroup.awaitAllRemainingTasks() async -> () */

void Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(ThrowingTaskGroup param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__awaitAllRemainingTasks_100eaeda8)();
  return;
}



/* Address: 0x100bf8538 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::$next */

/* Swift.ThrowingTaskGroup.next(isolation: isolated Swift.Actor?) async throws -> A? */

void Swift::ThrowingTaskGroup::_next(ThrowingTaskGroup isolation)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eaedb8)();
  return;
}



/* Address: 0x100bf8544 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::init */

/* Swift.ThrowingTaskGroup.init(group: Builtin.RawPointer) -> Swift.ThrowingTaskGroup<A, B> */

ThrowingTaskGroup<undefined,undefined> Swift::ThrowingTaskGroup::init(void *group)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf854c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaedc8)();
  return (ThrowingTaskGroup<undefined,undefined>)group;
}



/* Address: 0x100bf8550 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ThrowingTaskGroup::get_isEmpty */

/* Swift.ThrowingTaskGroup.isEmpty.getter : Swift.Bool */

bool Swift::ThrowingTaskGroup::get_isEmpty(ThrowingTaskGroup param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf8558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isEmpty_100eaedd0)();
  return (bool)uVar1;
}


