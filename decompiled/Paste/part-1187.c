/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf7c5c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_rawValue */

/* (extension in Foundation):Swift.String.Encoding.rawValue.getter : Swift.UInt */

__uint64 Encoding::_get_rawValue(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_rawValue_100ea7830)();
  return (__uint64)param_1.unknown;
}



/* Address: 0x100bf7c68 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_isoLatin1 */

/* static (extension in Foundation):Swift.String.Encoding.isoLatin1.getter : (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_get_isoLatin1(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_isoLatin1_100ea7838)();
  return (Encoding)param_1.unknown;
}



/* Address: 0x100bf7c74 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):Swift.String.Encoding */

Encoding Encoding::_typeMetadataAccessor(void)

{
  Encoding in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea7840)();
  return (Encoding)in_x0.unknown;
}



/* Address: 0x100bf7c80 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::init */

/* (extension in Foundation):Swift.String.init(localized: Foundation.LocalizedStringResource) ->
   Swift.String */

String (extension_Foundation)::Swift::String::init(LocalizedStringResource localized)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7858)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = localized.unknown;
  return SVar1;
}



/* Address: 0x100bf7c8c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::init */

/* (extension in Foundation):Swift.String.init(__C.NSString) -> Swift.String */

String (extension_Foundation)::Swift::String::init(NSString *param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7860)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = (char *)param_1;
  return SVar1;
}



/* Address: 0x100bf7c98 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::init */

/* (extension in
   Foundation):Swift.String.init(Swift.Slice<Foundation.AttributedString.CharacterView>) ->
   Swift.String */

String (extension_Foundation)::Swift::String::init(Slice<CharacterView> param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7868)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf7ca4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init<A>(describing: A) -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac050)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf7cb0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::lowercased */

/* Swift.String.lowercased() -> Swift.String */

String Swift::String::lowercased(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_lowercased_100eac058)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7cbc | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init<A>(reflecting: A) -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac060)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf7cc8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::uppercased */

/* Swift.String.uppercased() -> Swift.String */

String Swift::String::uppercased(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_uppercased_100eac068)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7cd4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_utf8CString */

/* Swift.String.utf8CString.getter : Swift.ContiguousArray<Swift.Int8> */

ContiguousArray<__int8> Swift::String::get_utf8CString(String param_1)

{
  ContiguousArray<__int8> CVar1;
  
  CVar1.unknown = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_utf8CString_100eac070)(CVar1.unknown,param_1.bridgeObject);
  return (ContiguousArray<__int8>)CVar1.unknown;
}



/* Address: 0x100bf7ce0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$withCString */

/* Swift.String.withCString<A>((Swift.UnsafePointer<Swift.Int8>) throws -> A) throws -> A */

void Swift::String::_withCString(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withCString_100eac078)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf7cec | /usr/lib/swift/libswiftCore.dylib::Swift::String::$_tryFromUTF8 */

/* static Swift.String._tryFromUTF8(Swift.UnsafeBufferPointer<Swift.UInt8>) -> Swift.String? */

void Swift::String::__tryFromUTF8(UnsafeBufferPointer<__int8> param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tryFromUTF8_100eac080)(param_1.unknown,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7cf8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$_fromSubstring */

/* static Swift.String._fromSubstring(__shared Swift.Substring) -> Swift.String */

String Swift::String::__fromSubstring(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fromSubstring_100eac088)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7d04 | /usr/lib/swift/libswiftCore.dylib::Swift::String::removeSubrange */

/* Swift.String.removeSubrange(Swift.Range<Swift.String.Index>) -> () */

void Swift::String::removeSubrange(Range<Index> param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeSubrange_100eac090)(param_1.unknown,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7d10 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init(validatingUTF8: Swift.UnsafePointer<Swift.Int8>) -> Swift.String? */

void Swift::String::_init(UnsafePointer<__int8> validatingUTF8)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac098)();
  return;
}



/* Address: 0x100bf7d1c | /usr/lib/swift/libswiftCore.dylib::Swift::String::reserveCapacity */

/* Swift.String.reserveCapacity(Swift.Int) -> () */

void Swift::String::reserveCapacity(__int64 param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_reserveCapacity_100eac0a0)(param_1,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7d28 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_debugDescription */

/* Swift.String.debugDescription.getter : Swift.String */

String Swift::String::get_debugDescription(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_debugDescription_100eac0a8)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7d34 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UnicodeScalarView::_foreignIndex */

/* Swift.String.UnicodeScalarView._foreignIndex(after: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::UnicodeScalarView::_foreignIndex(Index after,UnicodeScalarView param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100eac0b0)();
  return (Index)after.cmsgPointer.unknown;
}



/* Address: 0x100bf7d40 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UnicodeScalarView::_foreignIndex */

/* Swift.String.UnicodeScalarView._foreignIndex(before: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::UnicodeScalarView::_foreignIndex(Index before,UnicodeScalarView param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100eac0b8)();
  return (Index)before.cmsgPointer.unknown;
}



/* Address: 0x100bf7d4c | /usr/lib/swift/libswiftCore.dylib::Swift::String::UnicodeScalarView::$append */

/* Swift.String.UnicodeScalarView.append<A where A: Swift.Sequence, A.Element ==
   Swift.Unicode.Scalar>(contentsOf: A) -> () */

void Swift::String::UnicodeScalarView::_append(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__append_100eac0c0)();
  return;
}



/* Address: 0x100bf7d58 | /usr/lib/swift/libswiftCore.dylib::Swift::String::_fromUTF8Repairing */

/* static Swift.String._fromUTF8Repairing(Swift.UnsafeBufferPointer<Swift.UInt8>) -> (result:
   Swift.String, repairsMade: Swift.Bool) */

tuple2_conflict1
Swift::String::_fromUTF8Repairing(UnsafeBufferPointer<__int8> param_1,String param_2)

{
  char *pcVar1;
  void *pvVar2;
  tuple2_conflict1 tVar3;
  
  pvVar2 = param_2.bridgeObject;
  pcVar1 = param_2.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fromUTF8Repairing_100eac0d0)();
  tVar3.result.bridgeObject = pcVar1;
  tVar3.result.str = param_1.unknown;
  tVar3._16_8_ = pvVar2;
  return tVar3;
}



/* Address: 0x100bf7d64 | /usr/lib/swift/libswiftCore.dylib::Swift::String::_uncheckedFromUTF8 */

/* static Swift.String._uncheckedFromUTF8(Swift.UnsafeBufferPointer<Swift.UInt8>) -> Swift.String */

String Swift::String::_uncheckedFromUTF8(UnsafeBufferPointer<__int8> param_1,String param_2)

{
  char *pcVar1;
  String SVar2;
  
  pcVar1 = param_2.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uncheckedFromUTF8_100eac0d8)(param_1.unknown,pcVar1,param_2.bridgeObject);
  SVar2.bridgeObject = pcVar1;
  SVar2.str = param_1.unknown;
  return SVar2;
}



/* Address: 0x100bf7d70 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init(unsafeUninitializedCapacity: Swift.Int, initializingUTF8With:
   (Swift.UnsafeMutableBufferPointer<Swift.UInt8>) throws -> Swift.Int) throws -> Swift.String */

String Swift::String::_init(__int64 unsafeUninitializedCapacity)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac0e0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = (char *)unsafeUninitializedCapacity;
  return SVar1;
}



/* Address: 0x100bf7d7c | /usr/lib/swift/libswiftCore.dylib::Swift::String::hash */

/* Swift.String.hash(into: inout Swift.Hasher) -> () */

void Swift::String::hash(Hasher into,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100eac0e8)(into.unknown,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7d88 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_count */

/* Swift.String.count.getter : Swift.Int */

__int64 Swift::String::get_count(String param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac0f8)(pcVar1,param_1.bridgeObject);
  return (__int64)pcVar1;
}



/* Address: 0x100bf7d94 | /usr/lib/swift/libswiftCore.dylib::Swift::String::index */

/* Swift.String.index(after: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::index(Index after,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_index_100eac100)(after.cmsgPointer.unknown,param_2.str,param_2.bridgeObject);
  return (Index)after.cmsgPointer.unknown;
}



/* Address: 0x100bf7da0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::index */

/* Swift.String.index(before: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::index(Index before,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_index_100eac108)(before.cmsgPointer.unknown,param_2.str,param_2.bridgeObject);
  return (Index)before.cmsgPointer.unknown;
}



/* Address: 0x100bf7dac | /usr/lib/swift/libswiftCore.dylib::Swift::String::$index */

/* Swift.String.index(_: Swift.String.Index, offsetBy: Swift.Int, limitedBy: Swift.String.Index) ->
   Swift.String.Index? */

void Swift::String::_index(Index param_1,__int64 offsetBy,Index limitedBy,String param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100eac110)();
  return;
}



/* Address: 0x100bf7db8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::index */

/* Swift.String.index(_: Swift.String.Index, offsetBy: Swift.Int) -> Swift.String.Index */

Index Swift::String::index(Index param_1,__int64 offsetBy,String param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_index_100eac118)
            (param_1.cmsgPointer.unknown,offsetBy,param_3.str,param_3.bridgeObject);
  return (Index)param_1.cmsgPointer.unknown;
}



/* Address: 0x100bf7dc4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::write */

/* Swift.String.write(Swift.String) -> () */

void Swift::String::write(String param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_write_100eac120)(param_1.str,param_1.bridgeObject,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7dd0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::append */

/* Swift.String.append(Swift.Character) -> () */

void Swift::String::append(Character param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100eac128)(param_1.str,param_1.bridgeObject,param_2.str,param_2.bridgeObject)
  ;
  return;
}



/* Address: 0x100bf7ddc | /usr/lib/swift/libswiftCore.dylib::Swift::String::append */

/* Swift.String.append(Swift.String) -> () */

void Swift::String::append(String param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100eac130)(param_1.str,param_1.bridgeObject,param_2.str,param_2.bridgeObject)
  ;
  return;
}



/* Address: 0x100bf7de8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$insert */

/* Swift.String.insert<A where A: Swift.Collection, A.Element == Swift.Character>(contentsOf: A, at:
   Swift.String.Index) -> () */

void Swift::String::_insert(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__insert_100eac138)();
  return;
}



/* Address: 0x100bf7df4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::insert */

/* Swift.String.insert(_: Swift.Character, at: Swift.String.Index) -> () */

void Swift::String::insert(Character param_1,Index at,String param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_insert_100eac140)
            (param_1.str,param_1.bridgeObject,at.cmsgPointer.unknown,param_3.str,
             param_3.bridgeObject);
  return;
}



/* Address: 0x100bf7e00 | /usr/lib/swift/libswiftCore.dylib::Swift::String::remove */

/* Swift.String.remove(at: Swift.String.Index) -> Swift.Character */

Character Swift::String::remove(Index at,String param_2)

{
  char *pcVar1;
  Character CVar2;
  
  pcVar1 = param_2.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_remove_100eac148)(at.cmsgPointer.unknown,pcVar1,param_2.bridgeObject);
  CVar2.bridgeObject = pcVar1;
  CVar2.str = (char *)at.cmsgPointer.unknown;
  return CVar2;
}



/* Address: 0x100bf7e0c | /usr/lib/swift/libswiftCore.dylib::Swift::String::init */

/* Swift.String.init(cString: Swift.UnsafePointer<Swift.Int8>) -> Swift.String */

String Swift::String::init(UnsafePointer<__int8> cString)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac150)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = cString.unknown;
  return SVar1;
}



/* Address: 0x100bf7e18 | /usr/lib/swift/libswiftCore.dylib::Swift::String::init */

/* Swift.String.init(cString: Swift.UnsafePointer<Swift.UInt8>) -> Swift.String */

String Swift::String::init(UnsafePointer<__int8> cString)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac158)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = cString.unknown;
  return SVar1;
}



/* Address: 0x100bf7e24 | /usr/lib/swift/libswiftCore.dylib::Swift::String::Iterator::$next */

/* Swift.String.Iterator.next() -> Swift.Character? */

void Swift::String::Iterator::_next(Iterator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100eac160)();
  return;
}



/* Address: 0x100bf7e30 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignCount */

/* Swift.String.UTF8View._foreignCount() -> Swift.Int */

__int64 Swift::String::UTF8View::_foreignCount(UTF8View param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignCount_100eac168)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf7e3c | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignIndex */

/* Swift.String.UTF8View._foreignIndex(after: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::UTF8View::_foreignIndex(Index after,UTF8View param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100eac170)();
  return (Index)after.cmsgPointer.unknown;
}



/* Address: 0x100bf7e48 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignIndex */

/* Swift.String.UTF8View._foreignIndex(before: Swift.String.Index) -> Swift.String.Index */

Index Swift::String::UTF8View::_foreignIndex(Index before,UTF8View param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100eac178)();
  return (Index)before.cmsgPointer.unknown;
}



/* Address: 0x100bf7e54 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignIndex */

/* Swift.String.UTF8View._foreignIndex(_: Swift.String.Index, offsetBy: Swift.Int) ->
   Swift.String.Index */

Index Swift::String::UTF8View::_foreignIndex(Index param_1,__int64 offsetBy,UTF8View param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignIndex_100eac180)();
  return (Index)param_1.cmsgPointer.unknown;
}



/* Address: 0x100bf7e60 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignDistance */

/* Swift.String.UTF8View._foreignDistance(from: Swift.String.Index, to: Swift.String.Index) ->
   Swift.Int */

__int64 Swift::String::UTF8View::_foreignDistance(Index from,Index to,UTF8View param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignDistance_100eac188)();
  return (__int64)from.cmsgPointer.unknown;
}



/* Address: 0x100bf7e6c | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF8View::_foreignSubscript */

/* Swift.String.UTF8View._foreignSubscript(position: Swift.String.Index) -> Swift.UInt8 */

__uint8 Swift::String::UTF8View::_foreignSubscript(Index position,UTF8View param_2)

{
  __uint8 _Var1;
  
  _Var1 = (__uint8)position.cmsgPointer.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf7e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__foreignSubscript_100eac190)();
  return _Var1;
}



/* Address: 0x100bf7e78 | /usr/lib/swift/libswiftCore.dylib::Swift::String::distance */

/* Swift.String.distance(from: Swift.String.Index, to: Swift.String.Index) -> Swift.Int */

__int64 Swift::String::distance(Index from,Index to,String param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_distance_100eac1b0)
            (from.cmsgPointer.unknown,to.cmsgPointer.unknown,param_3.str,param_3.bridgeObject);
  return (__int64)from.cmsgPointer.unknown;
}



/* Address: 0x100bf7e84 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF16View::get_count */

/* Swift.String.UTF16View.count.getter : Swift.Int */

__int64 Swift::String::UTF16View::get_count(UTF16View param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac1b8)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf7e90 | /usr/lib/swift/libswiftCore.dylib::Swift::String::UTF16View::index */

/* Swift.String.UTF16View.index(_: Swift.String.Index, offsetBy: Swift.Int) -> Swift.String.Index */

Index Swift::String::UTF16View::index(Index param_1,__int64 offsetBy,UTF16View param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_index_100eac1c0)();
  return (Index)param_1.cmsgPointer.unknown;
}



/* Address: 0x100bf7e9c | /usr/lib/swift/libswiftCore.dylib::Swift::String::$_validate */

/* static Swift.String._validate<A where A: Swift._UnicodeEncoding>(_:
   Swift.UnsafeBufferPointer<A.CodeUnit>, as: A.Type) -> Swift.String? */

void Swift::String::__validate
               (UnsafeBufferPointer<static_Swift_String__validate<A_where_A:_Swift__UnicodeEncoding>(_:_Swift_UnsafeBufferPointer<A_CodeUnit>,as:_A_Type)__>_Swift_String_>
                param_1,String as)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___validate_100eac1c8)(param_1.unknown,as.str,as.bridgeObject);
  return;
}



/* Address: 0x100bf7ea8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::hasPrefix */

/* Swift.String.hasPrefix(Swift.String) -> Swift.Bool */

bool Swift::String::hasPrefix(String param_1,String param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hasPrefix_100eac1d0)(pcVar1,param_1.bridgeObject,param_2.str,param_2.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf7eb4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::hasSuffix */

/* Swift.String.hasSuffix(Swift.String) -> Swift.Bool */

bool Swift::String::hasSuffix(String param_1,String param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hasSuffix_100eac1d8)(pcVar1,param_1.bridgeObject,param_2.str,param_2.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf7ec0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_hashValue */

/* Swift.String.hashValue.getter : Swift.Int */

__int64 Swift::String::get_hashValue(String param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_hashValue_100eac1e0)(pcVar1,param_1.bridgeObject);
  return (__int64)pcVar1;
}



/* Address: 0x100bf7ecc | /usr/lib/swift/libswiftCore.dylib::Swift::String::removeAll */

/* Swift.String.removeAll(keepingCapacity: Swift.Bool) -> () */

void Swift::String::removeAll(bool keepingCapacity,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeAll_100eac1e8)(keepingCapacity,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf7ed8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::init */

/* Swift.String.init(repeating: Swift.String, count: Swift.Int) -> Swift.String */

String Swift::String::init(String repeating,__int64 count)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = repeating.bridgeObject;
  pcVar1 = repeating.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac1f0)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7ee4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::init */

/* Swift.String.init(repeating: Swift.Character, count: Swift.Int) -> Swift.String */

String Swift::String::init(Character repeating,__int64 count)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = repeating.bridgeObject;
  pcVar1 = repeating.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac1f8)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7ef0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init<A where A: Swift.BinaryInteger>(_: A, radix: Swift.Int, uppercase: Swift.Bool)
   -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac260)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf7efc | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript */

/* Swift.String.subscript.getter : (Swift.String.Index) -> Swift.Character */

Character Swift::String::get_subscript(Index param_1,String param_2)

{
  char *pcVar1;
  Character CVar2;
  
  pcVar1 = param_2.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100eac290)(param_1.cmsgPointer.unknown,pcVar1,param_2.bridgeObject);
  CVar2.bridgeObject = pcVar1;
  CVar2.str = (char *)param_1.cmsgPointer.unknown;
  return CVar2;
}



/* Address: 0x100bf7f08 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init<A where A: Swift.Sequence, A.Element == Swift.Character>(A) -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac298)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf7f14 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

/* Swift.String.init<A where A: Swift.LosslessStringConvertible, A: Swift.Sequence,
   A.Swift.Sequence.Element == Swift.Character>(A) -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac2a0)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}



/* Address: 0x100bf7f20 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_subscript */

/* Swift.String.subscript.getter : (Swift.Range<Swift.String.Index>) -> Swift.Substring */

Substring Swift::String::get_subscript(Range<Index> param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100eac2a8)(param_1.unknown,param_2.str,param_2.bridgeObject);
  return (Substring)param_1.unknown;
}



/* Address: 0x100bf7f2c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Sequence::$sorted */

/* (extension in Foundation):Swift.Sequence.sorted<A where A1: Foundation.SortComparator, A.Element
   == A1.Compared>(using: A1) -> [A.Element] */

void (extension_Foundation)::Swift::Sequence::_sorted(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sorted_100ea7878)();
  return;
}



/* Address: 0x100bf7f38 | /usr/lib/swift/libswiftCore.dylib::Swift::Sequence::$makeIterator */

/* dispatch thunk of Swift.Sequence.makeIterator() -> A.Iterator */

void Swift::Sequence::_makeIterator(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeIterator_100eac2b0)();
  return;
}



/* Address: 0x100bf7f44 | /usr/lib/swift/libswiftCore.dylib::Swift::Sequence::$_copyContents */

/* dispatch thunk of Swift.Sequence._copyContents(initializing:
   Swift.UnsafeMutableBufferPointer<A.Element>) -> (A.Iterator, Swift.Int) */

tuple2_conflict2
Swift::Sequence::__copyContents
          (UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
           initializing)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyContents_100eac2b8)();
  return (tuple2_conflict2)initializing.unknown;
}



/* Address: 0x100bf7f50 | /usr/lib/swift/libswiftCore.dylib::Swift::Sequence::get_underestimatedCount */

/* dispatch thunk of Swift.Sequence.underestimatedCount.getter : Swift.Int */

__int64 Swift::Sequence::get_underestimatedCount(void)

{
  __int64 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_underestimatedCount_100eac2c0)();
  return in_x0;
}


