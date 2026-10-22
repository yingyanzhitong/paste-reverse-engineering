/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10000518c | FUN_10000518c */

void FUN_10000518c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000051fc;
  FUN_100004b90(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000051fc | FUN_1000051fc */

void FUN_1000051fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100005234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100005238 | thunk_FUN_10000523c */

void thunk_FUN_10000523c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10000523c | FUN_10000523c */

void FUN_10000523c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100005268 | FUN_100005268 */

void FUN_100005268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000051fc;
  FUN_100002f5c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000052d4 | FUN_1000052d4 */

void FUN_1000052d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1000051fc;
  FUN_1000042e8(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100005344 | FUN_100005344 */

void FUN_100005344(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100005370 | FUN_100005370 */

void FUN_100005370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1000051fc;
  FUN_100003f68(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1000053e8 | FUN_1000053e8 */

long * FUN_1000053e8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    _swift_allocBox();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Address: 0x100005424 | FUN_100005424 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100005424(void)

{
  undefined *puVar1;
  
  if (DAT_10000c8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSRunningApplication;
  _swift_getObjCClassMetadata();
  DAT_10000c8b8 = puVar1;
  return;
}



/* Address: 0x100005468 | FUN_100005468 */

void FUN_100005468(long param_1,long param_2)

{
  FUN_100004ed0(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x100005478 | FUN_100005478 */

void FUN_100005478(long param_1)

{
  FUN_100004eb0(param_1 + 0x20);
  return;
}



/* Address: 0x100005480 | FUN_100005480 */

long * FUN_100005480(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Address: 0x1000054a4 | FUN_1000054a4 */

void FUN_1000054a4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1000054e4 | FUN_1000054e4 */

undefined8 FUN_1000054e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10000c8d8;
  FUN_100004f0c(&DAT_10000c8d8,&DAT_1000060e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100005534 | FUN_100005534 */

undefined8 FUN_100005534(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100004f0c(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Address: 0x100005574 | thunk_FUN_100005168 */

void thunk_FUN_100005168(void)

{
  FUN_100005168();
  return;
}



/* Address: 0x100005578 | thunk_FUN_100005168 */

void thunk_FUN_100005168(void)

{
  FUN_100005168();
  return;
}



/* Address: 0x10000557c | thunk_FUN_100005168 */

void thunk_FUN_100005168(void)

{
  FUN_100005168();
  return;
}



/* Address: 0x100005580 | thunk_FUN_1000051fc */

void thunk_FUN_1000051fc(void)

{
  FUN_1000051fc();
  return;
}



/* Address: 0x100005584 | thunk_FUN_100004bf4 */

void thunk_FUN_100004bf4(void)

{
  FUN_100004bf4();
  return;
}



/* Address: 0x100005588 | thunk_FUN_10000523c */

void thunk_FUN_10000523c(void)

{
  thunk_FUN_10000523c();
  return;
}



/* Address: 0x10000558c | FUN_10000558c */

void FUN_10000558c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10000559c | FUN_10000559c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10000559c(void)

{
  return ZEXT816(0x10000c980);
}



/* Address: 0x1000055bc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.Notification._unconditionallyBridgeFromObjectiveC(__C.NSNotification?) ->
   Foundation.Notification */

Notification Foundation::Notification::__unconditionallyBridgeFromObjectiveC(Notification param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000055c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008000)();
  return (Notification)param_1.unknown;
}



/* Address: 0x1000055c8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor */

/* type metadata accessor for Foundation.Notification */

Notification Foundation::Notification::typeMetadataAccessor(void)

{
  Notification in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000055d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008008)();
  return (Notification)in_x0.unknown;
}



/* Address: 0x1000055d4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::$publisher */

/* (extension in Foundation):Foundation._KeyValueCodingAndObservingPublishing< where A:
   __C.NSObject>.publisher<A>(for: Swift.KeyPath<A, A1>, options: __C.NSKeyValueObservingOptions) ->
   (extension in Foundation):__C.NSObject.KeyValueObservingPublisher<A, A1> */

KeyValueObservingPublisher<undefined,undefined>
(extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::_publisher
          (NSKeyValueObservingOptions for)

{
                    /* WARNING: Could not recover jumptable at 0x0001000055dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__publisher_100008010)();
  return (KeyValueObservingPublisher<undefined,undefined>)for.unknown;
}



/* Address: 0x1000055e0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::$init */

/* Foundation.URL.init(fileURLWithPath: __shared Swift.String) -> Foundation.URL */

URL Foundation::URL::_init(void)

{
  URL in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000055e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100008018)();
  return (URL)in_x0.unknown;
}



/* Address: 0x1000055ec | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::get_lastPathComponent */

/* Foundation.URL.lastPathComponent.getter : Swift.String */

String Foundation::URL::get_lastPathComponent(URL param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000055f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_lastPathComponent_100008020)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x1000055f8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::_bridgeToObjectiveC */

/* Foundation.URL._bridgeToObjectiveC() -> __C.NSURL */

NSURL * Foundation::URL::_bridgeToObjectiveC(URL param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100008028)();
  return (NSURL *)param_1.unknown;
}



/* Address: 0x100005604 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::deletingLastPathComponent */

/* Foundation.URL.deletingLastPathComponent() -> Foundation.URL */

URL Foundation::URL::deletingLastPathComponent(URL param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010000560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_deletingLastPathComponent_100008030)();
  return (URL)param_1.unknown;
}



/* Address: 0x100005610 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.URL._unconditionallyBridgeFromObjectiveC(__C.NSURL?) -> Foundation.URL */

URL Foundation::URL::__unconditionallyBridgeFromObjectiveC(URL param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008038)();
  return (URL)param_1.unknown;
}



/* Address: 0x10000561c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::get_path */

/* Foundation.URL.path.getter : Swift.String */

String Foundation::URL::get_path(URL param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_path_100008040)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100005628 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::typeMetadataAccessor */

/* type metadata accessor for Foundation.URL */

URL Foundation::URL::typeMetadataAccessor(void)

{
  URL in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008048)();
  return (URL)in_x0.unknown;
}



/* Address: 0x100005634 | /usr/lib/swift/libswiftos.dylib::os::Logger::get_logObject */

/* os.Logger.logObject.getter : __C.OS_os_log */

OS_os_log * os::Logger::get_logObject(Logger param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010000563c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_logObject_100008388)();
  return (OS_os_log *)param_1.unknown;
}



/* Address: 0x100005640 | /usr/lib/swift/libswiftos.dylib::os::Logger::init */

/* os.Logger.init(subsystem: Swift.String, category: Swift.String) -> os.Logger */

Logger os::Logger::init(String subsystem,String category)

{
  Logger LVar1;
  
  LVar1.unknown = subsystem.str;
                    /* WARNING: Could not recover jumptable at 0x000100005648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100008390)
            (LVar1.unknown,subsystem.bridgeObject,category.str,category.bridgeObject);
  return (Logger)LVar1.unknown;
}



/* Address: 0x10000564c | /usr/lib/swift/libswiftos.dylib::os::Logger::typeMetadataAccessor */

/* type metadata accessor for os.Logger */

Logger os::Logger::typeMetadataAccessor(void)

{
  Logger in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008398)();
  return (Logger)in_x0.unknown;
}



/* Address: 0x100005658 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::AppKit::$NSApplicationMain */

/* AppKit.NSApplicationMain(Swift.Int32,
   Swift.UnsafeMutablePointer<Swift.UnsafeMutablePointer<Swift.Int8>?>) -> Swift.Int32 */

__int32 AppKit::_NSApplicationMain
                  (__int32 param_1,
                  UnsafeMutablePointer<AppKit_NSApplicationMain(Swift_Int32,Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>)__>_Swift_Int32>
                  param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSApplicationMain_100008100)();
  return param_1;
}



/* Address: 0x100005664 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnyCancellable::store */

/* Combine.AnyCancellable.store(in: inout Swift.Set<Combine.AnyCancellable>) -> () */

void __thiscall Combine::AnyCancellable::store(AnyCancellable *this,Set<AnyCancellable> in)

{
                    /* WARNING: Could not recover jumptable at 0x00010000566c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_store_100008108)();
  return;
}



/* Address: 0x100005670 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$sink */

/* (extension in Combine):Combine.Publisher< where A.Failure == Swift.Never>.sink(receiveValue:
   (A.Output) -> ()) -> Combine.AnyCancellable */

AnyCancellable * (extension_Combine)::Combine::Publisher::_sink(void)

{
  AnyCancellable *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sink_100008118)();
  return in_x0;
}



/* Address: 0x10000567c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.String._bridgeToObjectiveC() -> __C.NSString */

NSString * (extension_Foundation)::Swift::String::_bridgeToObjectiveC(void)

{
  NSString *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100008060)();
  return in_x0;
}



/* Address: 0x100005688 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.String._unconditionallyBridgeFromObjectiveC(__C.NSString?)
   -> Swift.String */

String (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008068)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100005694 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_utf8CString */

/* Swift.String.utf8CString.getter : Swift.ContiguousArray<Swift.Int8> */

ContiguousArray<__int8> Swift::String::get_utf8CString(String param_1)

{
  ContiguousArray<__int8> CVar1;
  
  CVar1.unknown = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x00010000569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_utf8CString_100008130)(CVar1.unknown,param_1.bridgeObject);
  return (ContiguousArray<__int8>)CVar1.unknown;
}



/* Address: 0x1000056a0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignCount */

/* Swift.String.UTF8View._foreignCount() -> Swift.Int */

__int64 Swift::String::UTF8View::_foreignCount(UTF8View param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignCount_100008138)();
  return (__int64)param_1.unknown;
}



/* Address: 0x1000056ac | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Array<undefined>::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Array._unconditionallyBridgeFromObjectiveC(__C.NSArray?)
   -> [A] */

void (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008070)();
  return;
}



/* Address: 0x1000056b8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Actor::get_unownedExecutor */

/* dispatch thunk of Swift.Actor.unownedExecutor.getter : Swift.UnownedSerialExecutor */

UnownedSerialExecutor Swift::Actor::get_unownedExecutor(void)

{
  UnownedSerialExecutor in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000056c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_unownedExecutor_1000082c0)();
  return (UnownedSerialExecutor)in_x0.unknown;
}



/* Address: 0x1000056c4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::init */

/* Swift.CheckedContinuation.init(continuation: Swift.UnsafeContinuation<A, B>, function:
   Swift.String) -> Swift.CheckedContinuation<A, B> */

CheckedContinuation<undefined,undefined>
Swift::CheckedContinuation::init
          (UnsafeContinuation<undefined,undefined> continuation,String function)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_1000082c8)(continuation.unknown,function.str,function.bridgeObject);
  return (CheckedContinuation<undefined,undefined>)continuation.unknown;
}



/* Address: 0x1000056d0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::resume */

/* Swift.CheckedContinuation.resume(throwing: __owned B) -> () */

void Swift::CheckedContinuation::resume(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resume_1000082d0)();
  return;
}



/* Address: 0x1000056dc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CheckedContinuation::resume */

/* Swift.CheckedContinuation.resume(returning: __owned A) -> () */

void Swift::CheckedContinuation::resume(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_resume_1000082d8)();
  return;
}



/* Address: 0x1000056e8 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::get_shared */

/* static Swift.MainActor.shared.getter : Swift.MainActor */

MainActor * __thiscall Swift::MainActor::get_shared(MainActor *this,MainActor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000056f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_shared_1000082e0)();
  return param_1;
}



/* Address: 0x1000056f4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::typeMetadataAccessor */

/* type metadata accessor for Swift.MainActor */

MainActor * Swift::MainActor::typeMetadataAccessor(void)

{
  MainActor *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000056fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_1000082e8)();
  return in_x0;
}



/* Address: 0x100005700 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::get_rawValue */

/* Swift.TaskPriority.rawValue.getter : Swift.UInt8 */

__uint8 Swift::TaskPriority::get_rawValue(TaskPriority param_1)

{
  __uint8 _Var1;
  
  _Var1 = (__uint8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100005708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_1000082f8)();
  return _Var1;
}



/* Address: 0x10000570c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::TaskPriority::typeMetadataAccessor */

/* type metadata accessor for Swift.TaskPriority */

TaskPriority Swift::TaskPriority::typeMetadataAccessor(void)

{
  TaskPriority in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008300)();
  return (TaskPriority)in_x0.unknown;
}



/* Address: 0x100005718 | /usr/lib/swift/libswiftos.dylib::static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::$get_info */

/* static (extension in os):__C.os_log_type_t.info.getter : __C.os_log_type_t */

void static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_info_1000083a8)();
  return;
}



/* Address: 0x100005724 | /usr/lib/swift/libswiftos.dylib::static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::$get_error */

/* static (extension in os):__C.os_log_type_t.error.getter : __C.os_log_type_t */

void static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_error_1000083b0)();
  return;
}



/* Address: 0x100005730 | /usr/lib/swift/libswiftCore.dylib::Swift::CommandLine::$get_unsafeArgv */

/* static Swift.CommandLine.unsafeArgv.getter :
   Swift.UnsafeMutablePointer<Swift.UnsafeMutablePointer<Swift.Int8>?> */

UnsafeMutablePointer<static_Swift_CommandLine_unsafeArgv_getter_:_Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>>
 Swift::CommandLine::_get_unsafeArgv(CommandLine param_1)

{
  UnsafeMutablePointer<static_Swift_CommandLine_unsafeArgv_getter_:_Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>>
  UVar1;
  
  UVar1.unknown = (undefined *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100005738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_unsafeArgv_100008140)();
  return (UnsafeMutablePointer<static_Swift_CommandLine_unsafeArgv_getter_:_Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>>
          )UVar1.unknown;
}



/* Address: 0x10000573c | /usr/lib/swift/libswiftCore.dylib::Swift::CommandLine::get_argc */

/* static Swift.CommandLine.argc.getter : Swift.Int32 */

__int32 Swift::CommandLine::get_argc(CommandLine param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100005744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_argc_100008148)();
  return uVar1;
}



/* Address: 0x100005748 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::$_foreignCopyUTF8 */

/* Swift._StringGuts._foreignCopyUTF8(into: Swift.UnsafeMutableBufferPointer<Swift.UInt8>) ->
   Swift.Int? */

void Swift::_StringGuts::__foreignCopyUTF8
               (UnsafeMutableBufferPointer<__int8> into,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___foreignCopyUTF8_100008150)();
  return;
}



/* Address: 0x100005754 | /usr/lib/swift/libswiftCore.dylib::Swift::_ArrayBuffer::$_getElementSlowPath */

/* generic pre-specialization <Swift.AnyObject> of Swift._ArrayBuffer._getElementSlowPath(Swift.Int)
   -> Swift.AnyObject */

void Swift::_ArrayBuffer::__getElementSlowPath(__int64 param_1,_ArrayBuffer param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010000575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___getElementSlowPath_100008160)();
  return;
}



/* Address: 0x100005760 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringObject::get_sharedUTF8 */

/* Swift._StringObject.sharedUTF8.getter : Swift.UnsafeBufferPointer<Swift.UInt8> */

UnsafeBufferPointer<__int8> Swift::_StringObject::get_sharedUTF8(_StringObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_sharedUTF8_100008168)();
  return (UnsafeBufferPointer<__int8>)param_1.unknown;
}



/* Address: 0x10000576c | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::Instant::typeMetadataAccessor */

/* type metadata accessor for Swift.ContinuousClock.Instant */

Instant Swift::ContinuousClock::Instant::typeMetadataAccessor(void)

{
  Instant in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008308)();
  return (Instant)in_x0.unknown;
}



/* Address: 0x100005778 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::ContinuousClock::typeMetadataAccessor */

/* type metadata accessor for Swift.ContinuousClock */

ContinuousClock Swift::ContinuousClock::typeMetadataAccessor(void)

{
  ContinuousClock in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008318)();
  return (ContinuousClock)in_x0.unknown;
}



/* Address: 0x100005784 | /usr/lib/swift/libswiftCore.dylib::Swift::InstantProtocol::$advanced */

/* dispatch thunk of Swift.InstantProtocol.advanced(by: A.Duration) -> A */

void Swift::InstantProtocol::_advanced(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__advanced_100008170)();
  return;
}



/* Address: 0x100005790 | /usr/lib/swift/libswiftCore.dylib::Swift::_CocoaArrayWrapper::get_endIndex */

/* Swift._CocoaArrayWrapper.endIndex.getter : Swift.Int */

__int64 Swift::_CocoaArrayWrapper::get_endIndex(_CocoaArrayWrapper param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_endIndex_100008178)();
  return (__int64)param_1.unknown;
}


