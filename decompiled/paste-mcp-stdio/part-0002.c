/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100005ae4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignCount */

/* Swift.String.UTF8View._foreignCount() -> Swift.Int */

__int64 Swift::String::UTF8View::_foreignCount(UTF8View param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignCount_100008258)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100005af0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignIndex */

/* Swift.String.UTF8View._foreignIndex(after: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::UTF8View::_foreignIndex(Index after,UTF8View param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100008260)();
  return (Index)after.unknown;
}



/* Address: 0x100005afc | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignIndex */

/* Swift.String.UTF8View._foreignIndex(_: Swift.String.Index, offsetBy: Swift.Int) ->
   Swift.String.Index */

Index Swift::String::UTF8View::_foreignIndex(Index param_1,__int64 offsetBy,UTF8View param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100008268)();
  return (Index)param_1.unknown;
}



/* Address: 0x100005b08 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignSubscript */

/* Swift.String.UTF8View._foreignSubscript(position: Swift.String.Index) -> Swift.UInt8 */

__uint8 Swift::String::UTF8View::_foreignSubscript(Index position,UTF8View param_2)

{
  __uint8 _Var1;
  
  _Var1 = (__uint8)position.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100005b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignSubscript_100008270)();
  return _Var1;
}



/* Address: 0x100005b14 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF16View::index */

/* Swift.String.UTF16View.index(_: Swift.String.Index, offsetBy: Swift.Int) -> Swift.String.Index */

Index Swift::String::UTF16View::index(Index param_1,__int64 offsetBy,UTF16View param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_index_100008280)();
  return (Index)param_1.unknown;
}



/* Address: 0x100005b20 | /usr/lib/swift/libswiftCore.dylib::Swift::String::hasPrefix */

/* Swift.String.hasPrefix(Swift.String) -> Swift.Bool */

bool Swift::String::hasPrefix(String param_1,String param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100005b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hasPrefix_100008288)(pcVar1,param_1.bridgeObject,param_2.str,param_2.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100005b2c | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript */

/* Swift.String.subscript.getter : (Swift.Range<Swift.String.Index>) -> Swift.Substring */

Substring Swift::String::get_subscript(Range<Index> param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_1000082a8)(param_1.unknown,param_2.str,param_2.bridgeObject);
  return (Substring)param_1.unknown;
}



/* Address: 0x100005b38 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Actor::get_unownedExecutor */

/* dispatch thunk of Swift.Actor.unownedExecutor.getter : Swift.UnownedSerialExecutor */

UnownedSerialExecutor Swift::Actor::get_unownedExecutor(void)

{
  UnownedSerialExecutor in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_unownedExecutor_100008418)();
  return (UnownedSerialExecutor)in_x0.unknown;
}



/* Address: 0x100005b44 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::get_shared */

/* static Swift.MainActor.shared.getter : Swift.MainActor */

MainActor * __thiscall Swift::MainActor::get_shared(MainActor *this,MainActor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_shared_100008420)();
  return param_1;
}



/* Address: 0x100005b50 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::MainActor::typeMetadataAccessor */

/* type metadata accessor for Swift.MainActor */

MainActor * Swift::MainActor::typeMetadataAccessor(void)

{
  MainActor *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008428)();
  return in_x0;
}



/* Address: 0x100005b5c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::AsyncSequence::$get_lines */

/* (extension in Foundation):Swift.AsyncSequence< where A.Element == Swift.UInt8>.lines.getter :
   Foundation.AsyncLineSequence<A> */

AsyncLineSequence<undefined> (extension_Foundation)::Swift::AsyncSequence::_get_lines(void)

{
  AsyncLineSequence<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_lines_100008158)();
  return (AsyncLineSequence<undefined>)in_x0.unknown;
}



/* Address: 0x100005b68 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::AsyncBytes::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):__C.NSFileHandle.AsyncBytes */

AsyncBytes AsyncBytes::_typeMetadataAccessor(void)

{
  AsyncBytes in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100008160)();
  return (AsyncBytes)in_x0.unknown;
}



/* Address: 0x100005b74 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSFileHandle::$get_bytes */

/* (extension in Foundation):__C.NSFileHandle.bytes.getter : (extension in
   Foundation):__C.NSFileHandle.AsyncBytes */

AsyncBytes (extension_Foundation)::__C::NSFileHandle::_get_bytes(NSFileHandle *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_bytes_100008178)();
  return (AsyncBytes)param_1;
}



/* Address: 0x100005b80 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSFileHandle::$write */

/* (extension in Foundation):__C.NSFileHandle.write<A where A: Foundation.DataProtocol>(contentsOf:
   A) throws -> () */

void (extension_Foundation)::__C::NSFileHandle::_write(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_100008180)();
  return;
}



/* Address: 0x100005b8c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$upload */

/* (extension in Foundation):__C.NSURLSession.upload(for: Foundation.URLRequest, from:
   Foundation.Data, delegate: __C.NSURLSessionTaskDelegate?) async throws -> (Foundation.Data,
   __C.NSURLResponse) */

tuple2 (extension_Foundation)::__C::NSURLSession::_upload(URLRequest_conflict for,Data from)

{
  tuple2 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__upload_100008188)();
  tVar1._ = (NSURLResponse *)from.unknown;
  tVar1._.unknown = for.unknown;
  return tVar1;
}



/* Address: 0x100005b98 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::StringProtocol::$components */

/* (extension in Foundation):Swift.StringProtocol.components<A where A1:
   Swift.StringProtocol>(separatedBy: A1) -> [Swift.String] */

void (extension_Foundation)::Swift::StringProtocol::_components(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__components_100008198)();
  return;
}



/* Address: 0x100005ba4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::StringProtocol::trimmingCharacters */

/* (extension in Foundation):Swift.StringProtocol.trimmingCharacters(in: Foundation.CharacterSet) ->
   Swift.String */

String (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CharacterSet in)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_trimmingCharacters_1000081a0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in.unknown;
  return SVar1;
}



/* Address: 0x100005bb0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::StringProtocol::$data */

/* (extension in Foundation):Swift.StringProtocol.data(using: (extension in
   Foundation):Swift.String.Encoding, allowLossyConversion: Swift.Bool) -> Foundation.Data? */

void (extension_Foundation)::Swift::StringProtocol::_data(Encoding using,bool allowLossyConversion)

{
                    /* WARNING: Could not recover jumptable at 0x000100005bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__data_1000081a8)(using.unknown,allowLossyConversion);
  return;
}



/* Address: 0x100005bbc | /usr/lib/swift/libswiftCore.dylib::Swift::$_bridgeAnyObjectToAny */

/* Swift._bridgeAnyObjectToAny(Swift.AnyObject?) -> Any */

void Swift::__bridgeAnyObjectToAny(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___bridgeAnyObjectToAny_1000082b8)();
  return;
}



/* Address: 0x100005bc8 | /usr/lib/swift/libswiftCore.dylib::Swift::_HashTable::previousHole */

/* Swift._HashTable.previousHole(before: Swift._HashTable.Bucket) -> Swift._HashTable.Bucket */

Bucket Swift::_HashTable::previousHole(Bucket before,_HashTable param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_previousHole_1000082c0)();
  return (Bucket)before.unknown;
}



/* Address: 0x100005bd4 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::grow */

/* Swift._StringGuts.grow(Swift.Int) -> () */

void Swift::_StringGuts::grow(__int64 param_1,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_grow_1000082c8)();
  return;
}



/* Address: 0x100005be0 | /usr/lib/swift/libswiftCore.dylib::Swift::_StringGuts::$copyUTF8 */

/* Swift._StringGuts.copyUTF8(into: Swift.UnsafeMutableBufferPointer<Swift.UInt8>) -> Swift.Int? */

void Swift::_StringGuts::_copyUTF8(UnsafeMutableBufferPointer<__int8> into,_StringGuts param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__copyUTF8_1000082d0)();
  return;
}



/* Address: 0x100005bec | /usr/lib/swift/libswiftCore.dylib::Swift::_StringObject::get_sharedUTF8 */

/* Swift._StringObject.sharedUTF8.getter : Swift.UnsafeBufferPointer<Swift.UInt8> */

UnsafeBufferPointer<__int8> Swift::_StringObject::get_sharedUTF8(_StringObject param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_sharedUTF8_1000082d8)();
  return (UnsafeBufferPointer<__int8>)param_1.unknown;
}



/* Address: 0x100005bf8 | /usr/lib/swift/libswiftCore.dylib::Swift::_DictionaryStorage::$copy */

/* static Swift._DictionaryStorage.copy(original: Swift.__RawDictionaryStorage) ->
   Swift._DictionaryStorage<A, B> */

void __thiscall
Swift::_DictionaryStorage::_copy(_DictionaryStorage *this,__RawDictionaryStorage *original)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__copy_1000082e0)();
  return;
}



/* Address: 0x100005c04 | /usr/lib/swift/libswiftCore.dylib::Swift::_DictionaryStorage::$resize */

/* static Swift._DictionaryStorage.resize(original: Swift.__RawDictionaryStorage, capacity:
   Swift.Int, move: Swift.Bool) -> Swift._DictionaryStorage<A, B> */

void __thiscall
Swift::_DictionaryStorage::_resize
          (_DictionaryStorage *this,__RawDictionaryStorage *original,__int64 capacity,bool move)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__resize_1000082e8)(original,capacity,move);
  return;
}



/* Address: 0x100005c10 | /usr/lib/swift/libswiftCore.dylib::Swift::_DictionaryStorage::$allocate */

/* static Swift._DictionaryStorage.allocate(capacity: Swift.Int) -> Swift._DictionaryStorage<A, B>
    */

void __thiscall Swift::_DictionaryStorage::_allocate(_DictionaryStorage *this,__int64 capacity)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__allocate_1000082f0)();
  return;
}



/* Address: 0x100005c1c | /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck */

/* Swift._stringCompareWithSmolCheck(_: Swift._StringGuts, _: Swift._StringGuts, expecting:
   Swift._StringComparisonResult) -> Swift.Bool */

bool Swift::_stringCompareWithSmolCheck
               (_StringGuts param_1,_StringGuts param_2,_StringComparisonResult expecting)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100005c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stringCompareWithSmolCheck_100008308)(uVar1,param_2.unknown,expecting.value);
  return (bool)uVar1;
}



/* Address: 0x100005c28 | /usr/lib/swift/libswiftCore.dylib::Swift::$KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS */

/* Swift.KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS(Any.Type) -> Swift.Never */

Never Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS(void)

{
  Never in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS_100008310)();
  return (Never)in_w0.value;
}



/* Address: 0x100005c34 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Error::get_localizedDescription */

/* (extension in Foundation):Swift.Error.localizedDescription.getter : Swift.String */

String (extension_Foundation)::Swift::Error::get_localizedDescription(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_localizedDescription_1000081b0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100005c40 | /usr/lib/swift/libswiftCore.dylib::Swift::Hasher::init */

/* Swift.Hasher.init(_seed: Swift.Int) -> Swift.Hasher */

Hasher Swift::Hasher::init(__int64 _seed)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100008318)();
  return (Hasher)_seed;
}



/* Address: 0x100005c4c | /usr/lib/swift/libswiftCore.dylib::Swift::Hasher::_finalize */

/* Swift.Hasher._finalize() -> Swift.Int */

__int64 Swift::Hasher::_finalize(Hasher param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__finalize_100008320)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100005c58 | ___stack_chk_fail */

void ___stack_chk_fail(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____stack_chk_fail_1000081f0)();
  return;
}



/* Address: 0x100005c64 | _bzero */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _bzero(void *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_100008200)();
  return;
}



/* Address: 0x100005c70 | _exit */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exit_100008208)(param_1);
  return;
}



/* Address: 0x100005c7c | _memcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_100008210)();
  return param_1;
}



/* Address: 0x100005c88 | _memmove */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_100008218)();
  return param_1;
}



/* Address: 0x100005c94 | _objc_allocWithZone */

void _objc_allocWithZone(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_allocWithZone_1000081b8)();
  return;
}



/* Address: 0x100005ca0 | _objc_opt_self */

/* WARNING: This is an inlined function */

void _objc_opt_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_self_1000081c8)();
  return;
}



/* Address: 0x100005cac | _objc_release */

/* WARNING: This is an inlined function */

void _objc_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000081d0)();
  return;
}



/* Address: 0x100005cb8 | _objc_retain */

/* WARNING: This is an inlined function */

void _objc_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000081d8)();
  return;
}



/* Address: 0x100005cc4 | _objc_retainAutoreleasedReturnValue */

/* WARNING: This is an inlined function */

void _objc_retainAutoreleasedReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_1000081e0)();
  return;
}



/* Address: 0x100005cd0 | _swift_allocObject */

void _swift_allocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_100008348)();
  return;
}



/* Address: 0x100005cdc | _swift_arrayDestroy */

void _swift_arrayDestroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayDestroy_100008350)();
  return;
}



/* Address: 0x100005ce8 | _swift_bridgeObjectRelease */

void _swift_bridgeObjectRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100008358)();
  return;
}



/* Address: 0x100005cf4 | _swift_bridgeObjectRetain */

void _swift_bridgeObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_100008360)();
  return;
}



/* Address: 0x100005d00 | _swift_deallocObject */

void _swift_deallocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100008368)();
  return;
}



/* Address: 0x100005d0c | _swift_defaultActor_deallocate */

void _swift_defaultActor_deallocate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_100008438)();
  return;
}



/* Address: 0x100005d18 | _swift_defaultActor_destroy */

void _swift_defaultActor_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_destroy_100008440)();
  return;
}



/* Address: 0x100005d24 | _swift_defaultActor_initialize */

void _swift_defaultActor_initialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_initialize_100008448)();
  return;
}



/* Address: 0x100005d30 | _swift_dynamicCast */

void _swift_dynamicCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCast_100008370)();
  return;
}



/* Address: 0x100005d3c | _swift_dynamicCastObjCClass */

void _swift_dynamicCastObjCClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastObjCClass_100008378)();
  return;
}



/* Address: 0x100005d48 | _swift_errorRelease */

void _swift_errorRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_100008380)();
  return;
}



/* Address: 0x100005d54 | _swift_getErrorValue */

void _swift_getErrorValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getErrorValue_100008388)();
  return;
}



/* Address: 0x100005d60 | _swift_getExtendedFunctionTypeMetadata */

void _swift_getExtendedFunctionTypeMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getExtendedFunctionTypeMetadata_100008390)();
  return;
}



/* Address: 0x100005d6c | _swift_getFunctionTypeMetadata */

void _swift_getFunctionTypeMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getFunctionTypeMetadata_100008398)();
  return;
}



/* Address: 0x100005d78 | _swift_getObjCClassMetadata */

void _swift_getObjCClassMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassMetadata_1000083a0)();
  return;
}



/* Address: 0x100005d84 | _swift_getObjectType */

void _swift_getObjectType(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjectType_1000083a8)();
  return;
}



/* Address: 0x100005d90 | _swift_getSingletonMetadata */

void _swift_getSingletonMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getSingletonMetadata_1000083b0)();
  return;
}



/* Address: 0x100005d9c | _swift_getTypeByMangledNameInContext2 */

void _swift_getTypeByMangledNameInContext2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getTypeByMangledNameInContext2_1000083b8)();
  return;
}



/* Address: 0x100005da8 | _swift_getTypeByMangledNameInContextInMetadataState2 */

void _swift_getTypeByMangledNameInContextInMetadataState2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getTypeByMangledNameInContextInMetadataState2_1000083c0)();
  return;
}



/* Address: 0x100005db4 | _swift_getWitnessTable */

void _swift_getWitnessTable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_1000083c8)();
  return;
}



/* Address: 0x100005dc0 | _swift_initStackObject */

void _swift_initStackObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStackObject_1000083d0)();
  return;
}



/* Address: 0x100005dcc | _swift_isUniquelyReferenced_nonNull_native */

void _swift_isUniquelyReferenced_nonNull_native(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_isUniquelyReferenced_nonNull_native_1000083d8)();
  return;
}



/* Address: 0x100005dd8 | _swift_job_run */

void _swift_job_run(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_job_run_100008450)();
  return;
}


