/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf525c | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::AppKit::NSDiffableDataSourceSnapshot::init */

/* AppKit.NSDiffableDataSourceSnapshot.init() -> AppKit.NSDiffableDataSourceSnapshot<A, B> */

NSDiffableDataSourceSnapshot<undefined,undefined> AppKit::NSDiffableDataSourceSnapshot::init(void)

{
  NSDiffableDataSourceSnapshot<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea8e70)();
  return (NSDiffableDataSourceSnapshot<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf5268 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::AppKit::NSDiffableDataSourceSnapshot::typeMetadataAccessor */

/* type metadata accessor for AppKit.NSDiffableDataSourceSnapshot */

NSDiffableDataSourceSnapshot AppKit::NSDiffableDataSourceSnapshot::typeMetadataAccessor(void)

{
  NSDiffableDataSourceSnapshot in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8e78)();
  return (NSDiffableDataSourceSnapshot)in_x0.unknown;
}



/* Address: 0x100bf5274 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::POSIXErrorCode::$init */

/* Darwin.POSIXErrorCode.init(rawValue: Swift.Int32) -> Darwin.POSIXErrorCode? */

void Darwin::POSIXErrorCode::_init(__int32 rawValue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eae550)(rawValue);
  return;
}



/* Address: 0x100bf5280 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::open */

/* Darwin.open(Swift.UnsafePointer<Swift.Int8>, Swift.Int32, Swift.UInt16) -> Swift.Int32 */

__int32 Darwin::open(UnsafePointer<__int8> param_1,__int32 param_2,__uint16 param_3)

{
  __int32 _Var1;
  
  _Var1 = (__int32)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf5288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_100eae558)(_Var1,param_2,param_3);
  return _Var1;
}



/* Address: 0x100bf528c | /usr/lib/swift/libswiftDarwin.dylib::Darwin::open */

/* Darwin.open(Swift.UnsafePointer<Swift.Int8>, Swift.Int32) -> Swift.Int32 */

__int32 Darwin::open(UnsafePointer<__int8> param_1,__int32 param_2)

{
  __int32 _Var1;
  
  _Var1 = (__int32)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf5294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_100eae560)(_Var1,param_2);
  return _Var1;
}



/* Address: 0x100bf5298 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_errno */

/* Darwin.errno.getter : Swift.Int32 */

__int32 Darwin::get_errno(void)

{
  __int32 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf52a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_errno_100eae568)();
  return in_w0;
}



/* Address: 0x100bf52a4 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::set_errno */

/* Darwin.errno.setter : Swift.Int32 */

void __thiscall Darwin::set_errno(Darwin *this,__int32 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_errno_100eae570)(param_1);
  return;
}



/* Address: 0x100bf52b0 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::fcntl */

/* Darwin.fcntl(Swift.Int32, Swift.Int32, Swift.Int32) -> Swift.Int32 */

__int32 Darwin::fcntl(__int32 param_1,__int32 param_2,__int32 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_100eae578)(param_1,param_2,param_3);
  return param_1;
}



/* Address: 0x100bf52bc | /usr/lib/swift/libswiftDarwin.dylib::Darwin::fcntl */

/* Darwin.fcntl(Swift.Int32, Swift.Int32) -> Swift.Int32 */

__int32 Darwin::fcntl(__int32 param_1,__int32 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_100eae580)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bf52c8 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::ioctl */

/* Darwin.ioctl(Swift.Int32, Swift.UInt, Swift.UnsafeMutableRawPointer) -> Swift.Int32 */

__int32 Darwin::ioctl(__int32 param_1,__uint64 param_2,UnsafeMutableRawPointer param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ioctl_100eae588)();
  return param_1;
}



/* Address: 0x100bf52d4 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFMT */

/* Darwin.S_IFMT.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFMT(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf52dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFMT_100eae590)();
  return in_w0;
}



/* Address: 0x100bf52e0 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::openat */

/* Darwin.openat(Swift.Int32, Swift.UnsafePointer<Swift.Int8>, Swift.Int32, Swift.UInt16) ->
   Swift.Int32 */

__int32 Darwin::openat(__int32 param_1,UnsafePointer<__int8> param_2,__int32 param_3,
                      __uint16 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_openat_100eae598)(param_1,param_2.unknown,param_3,param_4);
  return param_1;
}



/* Address: 0x100bf52ec | /usr/lib/swift/libswiftDarwin.dylib::Darwin::openat */

/* Darwin.openat(Swift.Int32, Swift.UnsafePointer<Swift.Int8>, Swift.Int32) -> Swift.Int32 */

__int32 Darwin::openat(__int32 param_1,UnsafePointer<__int8> param_2,__int32 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf52f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_openat_100eae5a0)(param_1,param_2.unknown,param_3);
  return param_1;
}



/* Address: 0x100bf52f8 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_stderr */

/* Darwin.stderr.getter : Swift.UnsafeMutablePointer<__C.__sFILE> */

UnsafeMutablePointer<__sFILE> Darwin::get_stderr(void)

{
  UnsafeMutablePointer<__sFILE> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_stderr_100eae5a8)();
  return (UnsafeMutablePointer<__sFILE>)in_x0.unknown;
}



/* Address: 0x100bf5304 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_stdout */

/* Darwin.stdout.getter : Swift.UnsafeMutablePointer<__C.__sFILE> */

UnsafeMutablePointer<__sFILE> Darwin::get_stdout(void)

{
  UnsafeMutablePointer<__sFILE> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf530c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_stdout_100eae5b0)();
  return (UnsafeMutablePointer<__sFILE>)in_x0.unknown;
}



/* Address: 0x100bf5310 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::$get_SIG_IGN */

/* Darwin.SIG_IGN.getter : @convention(c) (Swift.Int32) -> () */

void Darwin::_get_SIG_IGN(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_SIG_IGN_100eae5b8)();
  return;
}



/* Address: 0x100bf531c | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFBLK */

/* Darwin.S_IFBLK.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFBLK(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFBLK_100eae5c0)();
  return in_w0;
}



/* Address: 0x100bf5328 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFCHR */

/* Darwin.S_IFCHR.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFCHR(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFCHR_100eae5c8)();
  return in_w0;
}



/* Address: 0x100bf5334 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFDIR */

/* Darwin.S_IFDIR.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFDIR(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFDIR_100eae5d0)();
  return in_w0;
}



/* Address: 0x100bf5340 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFIFO */

/* Darwin.S_IFIFO.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFIFO(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFIFO_100eae5d8)();
  return in_w0;
}



/* Address: 0x100bf534c | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFLNK */

/* Darwin.S_IFLNK.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFLNK(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFLNK_100eae5e0)();
  return in_w0;
}



/* Address: 0x100bf5358 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFREG */

/* Darwin.S_IFREG.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFREG(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFREG_100eae5e8)();
  return in_w0;
}



/* Address: 0x100bf5364 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFWHT */

/* Darwin.S_IFWHT.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFWHT(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFWHT_100eae5f0)();
  return in_w0;
}



/* Address: 0x100bf5370 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IRGRP */

/* Darwin.S_IRGRP.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IRGRP(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IRGRP_100eae5f8)();
  return in_w0;
}



/* Address: 0x100bf537c | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IROTH */

/* Darwin.S_IROTH.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IROTH(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IROTH_100eae600)();
  return in_w0;
}



/* Address: 0x100bf5388 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IRUSR */

/* Darwin.S_IRUSR.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IRUSR(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IRUSR_100eae608)();
  return in_w0;
}



/* Address: 0x100bf5394 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IWUSR */

/* Darwin.S_IWUSR.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IWUSR(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IWUSR_100eae610)();
  return in_w0;
}



/* Address: 0x100bf53a0 | /usr/lib/swift/libswiftDarwin.dylib::Darwin::get_S_IFSOCK */

/* Darwin.S_IFSOCK.getter : Swift.UInt16 */

__uint16 Darwin::get_S_IFSOCK(void)

{
  __uint16 in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf53a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_S_IFSOCK_100eae618)();
  return in_w0;
}



/* Address: 0x100bf53ac | /usr/lib/swift/libswiftSystem.dylib::System::FileDescriptor::$_read */

/* System.FileDescriptor._read(into: Swift.UnsafeMutableRawBufferPointer, retryOnInterrupt:
   Swift.Bool) throws -> Swift.Result<Swift.Int, System.Errno> */

void System::FileDescriptor::__read
               (UnsafeMutableRawBufferPointer into,bool retryOnInterrupt,FileDescriptor param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf53b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___read_100eae9b0)(into.unknown,retryOnInterrupt);
  return;
}



/* Address: 0x100bf53b8 | /usr/lib/swift/libswiftSystem.dylib::System::FileDescriptor::$_write */

/* System.FileDescriptor._write(_: Swift.UnsafeRawBufferPointer, retryOnInterrupt: Swift.Bool) ->
   Swift.Result<Swift.Int, System.Errno> */

void System::FileDescriptor::__write
               (UnsafeRawBufferPointer param_1,bool retryOnInterrupt,FileDescriptor param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf53c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___write_100eae9b8)(param_1.unknown,retryOnInterrupt);
  return;
}



/* Address: 0x100bf53c4 | /usr/lib/swift/libswiftSystem.dylib::System::FilePath::$withCString */

/* System.FilePath.withCString<A>((Swift.UnsafePointer<Swift.Int8>) throws -> A) throws -> A */

void System::FilePath::_withCString(FilePath param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf53cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withCString_100eae9d8)();
  return;
}



/* Address: 0x100bf53d0 | /usr/lib/swift/libswiftSystem.dylib::System::FilePath::init */

/* System.FilePath.init(platformString: Swift.UnsafePointer<Swift.Int8>) -> System.FilePath */

FilePath System::FilePath::init(UnsafePointer<__int8> platformString)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf53d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eae9e0)();
  return (FilePath)platformString.unknown;
}



/* Address: 0x100bf53dc | /usr/lib/swift/libswiftSystem.dylib::System::FilePath::typeMetadataAccessor */

/* type metadata accessor for System.FilePath */

FilePath System::FilePath::typeMetadataAccessor(void)

{
  FilePath in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf53e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eae9e8)();
  return (FilePath)in_x0.unknown;
}



/* Address: 0x100bf53e8 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::CustomCombineIdentifierConvertible::get_combineIdentifier */

/* dispatch thunk of Combine.CustomCombineIdentifierConvertible.combineIdentifier.getter :
   Combine.CombineIdentifier */

CombineIdentifier Combine::CustomCombineIdentifierConvertible::get_combineIdentifier(void)

{
  CombineIdentifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_combineIdentifier_100ea95e8)();
  return (CombineIdentifier)in_x0.unknown;
}



/* Address: 0x100bf53f4 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::CustomCombineIdentifierConvertible::$get_combineIdentifier */

/* (extension in Combine):Combine.CustomCombineIdentifierConvertible< where A:
   AnyObject>.combineIdentifier.getter : Combine.CombineIdentifier */

CombineIdentifier
(extension_Combine)::Combine::CustomCombineIdentifierConvertible::_get_combineIdentifier(void)

{
  CombineIdentifier in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf53fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_combineIdentifier_100ea95f0)();
  return (CombineIdentifier)in_x0.unknown;
}



/* Address: 0x100bf5400 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::CombineLatest::init */

/* Combine.Publishers.CombineLatest.init(A, B) -> Combine.Publishers.CombineLatest<A, B> */

CombineLatest<undefined,undefined>
Combine::Publishers::CombineLatest::init(CombineLatest<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9600)();
  return (CombineLatest<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf540c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::SwitchToLatest::typeMetadataAccessor */

/* type metadata accessor for Combine.Publishers.SwitchToLatest */

SwitchToLatest Combine::Publishers::SwitchToLatest::typeMetadataAccessor(void)

{
  SwitchToLatest in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9660)();
  return (SwitchToLatest)in_x0.unknown;
}



/* Address: 0x100bf5418 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::Map::typeMetadataAccessor */

/* type metadata accessor for Combine.Publishers.Map */

Map Combine::Publishers::Map::typeMetadataAccessor(void)

{
  Map in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9688)();
  return (Map)in_x0.unknown;
}



/* Address: 0x100bf5424 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::Scan::typeMetadataAccessor */

/* type metadata accessor for Combine.Publishers.Scan */

Scan Combine::Publishers::Scan::typeMetadataAccessor(void)

{
  Scan in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea96b0)();
  return (Scan)in_x0.unknown;
}



/* Address: 0x100bf5430 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::Merge::init */

/* Combine.Publishers.Merge.init(A, B) -> Combine.Publishers.Merge<A, B> */

Merge<undefined,undefined> Combine::Publishers::Merge::init(Merge<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea96d8)();
  return (Merge<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf543c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Publishers::MergeMany::$init */

/* Combine.Publishers.MergeMany.init<A where A == A1.Element, A1: Swift.Sequence>(A1) ->
   Combine.Publishers.MergeMany<A> */

MergeMany<undefined> Combine::Publishers::MergeMany::_init(MergeMany<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9718)();
  return (MergeMany<undefined>)param_1.unknown;
}



/* Address: 0x100bf5448 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Subscriber::$receive */

/* dispatch thunk of Combine.Subscriber.receive(subscription: Combine.Subscription) -> () */

void Combine::Subscriber::_receive(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__receive_100ea9738)();
  return;
}



/* Address: 0x100bf5454 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnyPublisher::typeMetadataAccessor */

/* type metadata accessor for Combine.AnyPublisher */

AnyPublisher Combine::AnyPublisher::typeMetadataAccessor(void)

{
  AnyPublisher in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9748)();
  return (AnyPublisher)in_x0.unknown;
}



/* Address: 0x100bf5460 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnySubscriber::typeMetadataAccessor */

/* type metadata accessor for Combine.AnySubscriber */

AnySubscriber Combine::AnySubscriber::typeMetadataAccessor(void)

{
  AnySubscriber in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9760)();
  return (AnySubscriber)in_x0.unknown;
}



/* Address: 0x100bf546c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnyCancellable::store */

/* Combine.AnyCancellable.store(in: inout Swift.Set<Combine.AnyCancellable>) -> () */

void __thiscall Combine::AnyCancellable::store(AnyCancellable *this,Set<AnyCancellable> in)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_store_100ea9770)();
  return;
}



/* Address: 0x100bf5478 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnyCancellable::typeMetadataAccessor */

/* type metadata accessor for Combine.AnyCancellable */

AnyCancellable * Combine::AnyCancellable::typeMetadataAccessor(void)

{
  AnyCancellable *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9780)();
  return in_x0;
}



/* Address: 0x100bf5484 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnySubscriberBox::typeMetadataAccessor */

/* type metadata accessor for Combine.AnySubscriberBox */

AnySubscriberBox * Combine::AnySubscriberBox::typeMetadataAccessor(void)

{
  AnySubscriberBox *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf548c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea97a0)();
  return in_x0;
}



/* Address: 0x100bf5490 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnySubscriberBox::$__allocating_init */

/* Combine.AnySubscriberBox.__allocating_init(A) -> Combine.AnySubscriberBox<A> */

void __thiscall Combine::AnySubscriberBox::___allocating_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100ea97a8)();
  return;
}



/* Address: 0x100bf549c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::ObservableObject::$get_objectWillChange */

/* dispatch thunk of Combine.ObservableObject.objectWillChange.getter : A.ObjectWillChangePublisher
    */

void Combine::ObservableObject::_get_objectWillChange(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_objectWillChange_100ea97c0)();
  return;
}



/* Address: 0x100bf54a8 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::ObservableObject::$get_objectWillChange */

/* (extension in Combine):Combine.ObservableObject< where A.ObjectWillChangePublisher ==
   Combine.ObservableObjectPublisher>.objectWillChange.getter : Combine.ObservableObjectPublisher */

ObservableObjectPublisher *
(extension_Combine)::Combine::ObservableObject::_get_objectWillChange(void)

{
  ObservableObjectPublisher *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_objectWillChange_100ea97c8)();
  return in_x0;
}



/* Address: 0x100bf54b4 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::AnySubscriberBase::receive */

/* dispatch thunk of Combine.AnySubscriberBase.receive(A) -> Combine.Subscribers.Demand */

Demand __thiscall Combine::AnySubscriberBase::receive(undefined8 param_1,Demand param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_receive_100ea97d8)();
  return (Demand)param_2.unknown;
}



/* Address: 0x100bf54c0 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::PassthroughSubject::send */

/* Combine.PassthroughSubject.send(A) -> () */

void __thiscall Combine::PassthroughSubject::send(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_send_100ea97e0)();
  return;
}



/* Address: 0x100bf54cc | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::PassthroughSubject::$init */

/* Combine.PassthroughSubject.init() -> Combine.PassthroughSubject<A, B> */

void __thiscall Combine::PassthroughSubject::_init(PassthroughSubject *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea97e8)();
  return;
}



/* Address: 0x100bf54d8 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::CurrentValueSubject::send */

/* Combine.CurrentValueSubject.send(A) -> () */

void __thiscall Combine::CurrentValueSubject::send(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_send_100ea9808)();
  return;
}



/* Address: 0x100bf54e4 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::CurrentValueSubject::get_value */

/* Combine.CurrentValueSubject.value.getter : A */

void __thiscall
Combine::CurrentValueSubject::get_value(CurrentValueSubject *this,CurrentValueSubject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf54ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_value_100ea9810)();
  return;
}



/* Address: 0x100bf54f0 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::CurrentValueSubject::typeMetadataAccessor */

/* type metadata accessor for Combine.CurrentValueSubject */

CurrentValueSubject * Combine::CurrentValueSubject::typeMetadataAccessor(void)

{
  CurrentValueSubject *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf54f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9818)();
  return in_x0;
}



/* Address: 0x100bf54fc | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::CurrentValueSubject::$init */

/* Combine.CurrentValueSubject.init(A) -> Combine.CurrentValueSubject<A, B> */

void __thiscall Combine::CurrentValueSubject::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9828)();
  return;
}



/* Address: 0x100bf5508 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::ConnectablePublisher::$autoconnect */

/* (extension in Combine):Combine.ConnectablePublisher.autoconnect() ->
   Combine.Publishers.Autoconnect<A> */

void (extension_Combine)::Combine::ConnectablePublisher::_autoconnect(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__autoconnect_100ea9838)();
  return;
}



/* Address: 0x100bf5514 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::ObservableObjectPublisher::send */

/* Combine.ObservableObjectPublisher.send() -> () */

void __thiscall Combine::ObservableObjectPublisher::send(ObservableObjectPublisher *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_send_100ea9840)();
  return;
}



/* Address: 0x100bf5520 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::ObservableObjectPublisher::typeMetadataAccessor */

/* type metadata accessor for Combine.ObservableObjectPublisher */

ObservableObjectPublisher * Combine::ObservableObjectPublisher::typeMetadataAccessor(void)

{
  ObservableObjectPublisher *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9850)();
  return in_x0;
}



/* Address: 0x100bf552c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Just::init */

/* Combine.Just.init(A) -> Combine.Just<A> */

Just<undefined> Combine::Just::init(Just<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9868)();
  return (Just<undefined>)param_1.unknown;
}



/* Address: 0x100bf5538 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Empty::init */

/* Combine.Empty.init(completeImmediately: Swift.Bool) -> Combine.Empty<A, B> */

Empty<undefined,undefined> Combine::Empty::init(bool completeImmediately)

{
  Empty<undefined,undefined> EVar1;
  
  EVar1.unknown = (undefined *)(ulong)completeImmediately;
                    /* WARNING: Could not recover jumptable at 0x000100bf5540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9878)();
  return (Empty<undefined,undefined>)EVar1.unknown;
}



/* Address: 0x100bf5544 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Subject::$send */

/* (extension in Combine):Combine.Subject< where A.Output == ()>.send() -> () */

void (extension_Combine)::Combine::Subject::_send(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf554c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__send_100ea9890)();
  return;
}



/* Address: 0x100bf5550 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::init */

/* Combine.Published.init(initialValue: A) -> Combine.Published<A> */

Published<undefined> Combine::Published::init(Published<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9898)();
  return (Published<undefined>)param_1.unknown;
}


