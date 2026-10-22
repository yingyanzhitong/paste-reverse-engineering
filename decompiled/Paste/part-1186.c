/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf795c | /usr/lib/swift/libswiftCore.dylib::Swift::DefaultIndices::typeMetadataAccessor */

/* type metadata accessor for Swift.DefaultIndices */

DefaultIndices Swift::DefaultIndices::typeMetadataAccessor(void)

{
  DefaultIndices in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabea0)();
  return (DefaultIndices)in_x0.unknown;
}



/* Address: 0x100bf7968 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::lowercased */

/* Swift.Character.lowercased() -> Swift.String */

String Swift::Character::lowercased(Character param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_lowercased_100eabec8)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7974 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::uppercased */

/* Swift.Character.uppercased() -> Swift.String */

String Swift::Character::uppercased(Character param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf797c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_uppercased_100eabed0)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7980 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::get_isWhitespace */

/* Swift.Character.isWhitespace.getter : Swift.Bool */

bool Swift::Character::get_isWhitespace(Character param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isWhitespace_100eabed8)(pcVar1,param_1.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf798c | /usr/lib/swift/libswiftCore.dylib::Swift::Character::get__isLowercased */

/* Swift.Character._isLowercased.getter : Swift.Bool */

bool Swift::Character::get__isLowercased(Character param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__isLowercased_100eabee0)(pcVar1,param_1.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf7998 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::get__isUppercased */

/* Swift.Character._isUppercased.getter : Swift.Bool */

bool Swift::Character::get__isUppercased(Character param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf79a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__isUppercased_100eabee8)(pcVar1,param_1.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf79a4 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::$get_wholeNumberValue */

/* Swift.Character.wholeNumberValue.getter : Swift.Int? */

void Swift::Character::_get_wholeNumberValue(Character param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf79ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_wholeNumberValue_100eabef0)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf79b0 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::$write */

/* Swift.Character.write<A where A: Swift.TextOutputStream>(to: inout A) -> () */

void Swift::Character::_write(undefined *to,Character param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf79b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_100eabf00)(to,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100bf79bc | /usr/lib/swift/libswiftCore.dylib::Swift::Character::get_isLetter */

/* Swift.Character.isLetter.getter : Swift.Bool */

bool Swift::Character::get_isLetter(Character param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf79c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isLetter_100eabf08)(pcVar1,param_1.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf79c8 | /usr/lib/swift/libswiftCore.dylib::Swift::Character::get_isNumber */

/* Swift.Character.isNumber.getter : Swift.Bool */

bool Swift::Character::get_isNumber(Character param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_isNumber_100eabf10)(pcVar1,param_1.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf79d4 | /usr/lib/swift/libswift_StringProcessing.dylib::(extension__StringProcessing)::Swift::BidirectionalCollection::$starts */

/* (extension in _StringProcessing):Swift.BidirectionalCollection< where A.SubSequence ==
   Swift.Substring>.starts<A where A1: _StringProcessing.RegexComponent>(with: A1) -> Swift.Bool */

bool (extension__StringProcessing)::Swift::BidirectionalCollection::_starts(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf79dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__starts_100eaf1c8)();
  return (bool)param_1;
}



/* Address: 0x100bf79e0 | /usr/lib/swift/libswiftCore.dylib::Swift::BidirectionalCollection::$formIndex */

/* dispatch thunk of Swift.BidirectionalCollection.formIndex(before: inout A.Index) -> () */

void Swift::BidirectionalCollection::_formIndex(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf79e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__formIndex_100eabf30)();
  return;
}



/* Address: 0x100bf79ec | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::BidirectionalCollection::$get_last */

/* (extension in Swift):Swift.BidirectionalCollection.last.getter : A.Element? */

void (extension_Swift)::Swift::BidirectionalCollection::_get_last(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf79f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_last_100eabf38)();
  return;
}



/* Address: 0x100bf79f8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::BidirectionalCollection::$difference */

/* (extension in Swift):Swift.BidirectionalCollection< where A.Element:
   Swift.Equatable>.difference<A where A1: Swift.BidirectionalCollection, A.Element ==
   A1.Element>(from: A1) -> Swift.CollectionDifference<A.Element> */

CollectionDifference<(extension_in_Swift):Swift_BidirectionalCollection<_where_A_Element:_Swift_Equatable>_difference<A_where_A1:_Swift_BidirectionalCollection,A_Element____A1_Element>(from:_A1)__>_Swift_CollectionDifference<A_Element>>
 (extension_Swift)::Swift::BidirectionalCollection::_difference
           (CollectionDifference<(extension_in_Swift):Swift_BidirectionalCollection<_where_A_Element:_Swift_Equatable>_difference<A_where_A1:_Swift_BidirectionalCollection,A_Element____A1_Element>(from:_A1)__>_Swift_CollectionDifference<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__difference_100eabf40)();
  return (CollectionDifference<(extension_in_Swift):Swift_BidirectionalCollection<_where_A_Element:_Swift_Equatable>_difference<A_where_A1:_Swift_BidirectionalCollection,A_Element____A1_Element>(from:_A1)__>_Swift_CollectionDifference<A_Element>>
          )param_1.unknown;
}



/* Address: 0x100bf7a04 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::BidirectionalCollection::$joined */

/* (extension in Swift):Swift.BidirectionalCollection< where A.Element ==
   Swift.String>.joined(separator: Swift.String) -> Swift.String */

String (extension_Swift)::Swift::BidirectionalCollection::_joined(String separator)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = separator.bridgeObject;
  pcVar1 = separator.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__joined_100eabf48)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100bf7a10 | /usr/lib/swift/libswiftCore.dylib::Swift::Comparable::>_infix */

/* dispatch thunk of static Swift.Comparable.> infix(A, A) -> Swift.Bool */

bool Swift::Comparable::>_infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_>_infix_100eabf50)();
  return (bool)param_1;
}



/* Address: 0x100bf7a1c | /usr/lib/swift/libswiftCore.dylib::Swift::Comparable::<_infix */

/* dispatch thunk of static Swift.Comparable.< infix(A, A) -> Swift.Bool */

bool Swift::Comparable::<_infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_<_infix_100eabf58)();
  return (bool)param_1;
}



/* Address: 0x100bf7a28 | /usr/lib/swift/libswiftCore.dylib::Swift::Comparable::>=_infix */

/* dispatch thunk of static Swift.Comparable.>= infix(A, A) -> Swift.Bool */

bool Swift::Comparable::>__infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_>__infix_100eabf60)();
  return (bool)param_1;
}



/* Address: 0x100bf7a34 | /usr/lib/swift/libswiftCore.dylib::Swift::Comparable::<=_infix */

/* dispatch thunk of static Swift.Comparable.<= infix(A, A) -> Swift.Bool */

bool Swift::Comparable::<__infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_<__infix_100eabf68)();
  return (bool)param_1;
}



/* Address: 0x100bf7a40 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::>_infix */

/* static (extension in Swift):Swift.Comparable.> infix(A, A) -> Swift.Bool */

bool (extension_Swift)::Swift::Comparable::>_infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_>_infix_100eabf70)();
  return (bool)param_1;
}



/* Address: 0x100bf7a4c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::>=_infix */

/* static (extension in Swift):Swift.Comparable.>= infix(A, A) -> Swift.Bool */

bool (extension_Swift)::Swift::Comparable::>__infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_>__infix_100eabf78)();
  return (bool)param_1;
}



/* Address: 0x100bf7a58 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::<=_infix */

/* static (extension in Swift):Swift.Comparable.<= infix(A, A) -> Swift.Bool */

bool (extension_Swift)::Swift::Comparable::<__infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_<__infix_100eabf80)();
  return (bool)param_1;
}



/* Address: 0x100bf7a64 | /usr/lib/swift/libswiftCore.dylib::Swift::MutableCollection::$swapAt */

/* dispatch thunk of Swift.MutableCollection.swapAt(A.Index, A.Index) -> () */

void Swift::MutableCollection::_swapAt(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swapAt_100eabf88)();
  return;
}



/* Address: 0x100bf7a70 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::Swift::MutableCollection::move */

/* (extension in SwiftUI):Swift.MutableCollection.move(fromOffsets: Foundation.IndexSet, toOffset:
   Swift.Int) -> () */

void (extension_SwiftUI)::Swift::MutableCollection::move(IndexSet fromOffsets,__int64 toOffset)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_move_100eabb70)();
  return;
}



/* Address: 0x100bf7a7c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$withContiguousMutableStorageIfAvailable */

/* (extension in Swift):Swift.MutableCollection.withContiguousMutableStorageIfAvailable<A>((inout
   Swift.UnsafeMutableBufferPointer<A.Element>) throws -> A1) throws -> A1? */

void (extension_Swift)::Swift::MutableCollection::_withContiguousMutableStorageIfAvailable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withContiguousMutableStorageIfAvailable_100eabf90)();
  return;
}



/* Address: 0x100bf7a88 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$_withUnsafeMutableBufferPointerIfSupported */

/* (extension in Swift):Swift.MutableCollection._withUnsafeMutableBufferPointerIfSupported<A>((inout
   Swift.UnsafeMutableBufferPointer<A.Element>) throws -> A1) throws -> A1? */

void (extension_Swift)::Swift::MutableCollection::__withUnsafeMutableBufferPointerIfSupported(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___withUnsafeMutableBufferPointerIfSupported_100eabf98)();
  return;
}



/* Address: 0x100bf7a94 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$swapAt */

/* (extension in Swift):Swift.MutableCollection.swapAt(A.Index, A.Index) -> () */

void (extension_Swift)::Swift::MutableCollection::_swapAt(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swapAt_100eabfa0)();
  return;
}



/* Address: 0x100bf7aa0 | $$(extension_in_Swift):Swift.MutableCollection.subscript.getter_:_<A_where_A1:_Swift.RangeExpression,A.Index_==_A1.Bound>(A1)_->_A.SubSequence */

void ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR____extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence_100eabfa8
  )();
  return;
}



/* Address: 0x100bf7aac | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$reverse */

/* (extension in Swift):Swift.MutableCollection< where A: Swift.BidirectionalCollection>.reverse()
   -> () */

void (extension_Swift)::Swift::MutableCollection::_reverse(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__reverse_100eabfb0)();
  return;
}



/* Address: 0x100bf7ab8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$partition */

/* (extension in Swift):Swift.MutableCollection< where A:
   Swift.BidirectionalCollection>.partition(by: (A.Swift.Sequence.Element) throws -> Swift.Bool)
   throws -> A.Swift.Collection.Index */

void (extension_Swift)::Swift::MutableCollection::_partition(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__partition_100eabfb8)();
  return;
}



/* Address: 0x100bf7ac4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$sort */

/* (extension in Swift):Swift.MutableCollection< where A: Swift.RandomAccessCollection,
   A.Swift.Sequence.Element: Swift.Comparable>.sort() -> () */

void (extension_Swift)::Swift::MutableCollection::_sort(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sort_100eabfc0)();
  return;
}



/* Address: 0x100bf7ad0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$sort */

/* (extension in Swift):Swift.MutableCollection< where A: Swift.RandomAccessCollection>.sort(by:
   (A.Swift.Sequence.Element, A.Swift.Sequence.Element) throws -> Swift.Bool) throws -> () */

void (extension_Swift)::Swift::MutableCollection::_sort(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sort_100eabfc8)();
  return;
}



/* Address: 0x100bf7adc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$shuffle */

/* (extension in Swift):Swift.MutableCollection< where A: Swift.RandomAccessCollection>.shuffle<A
   where A1: Swift.RandomNumberGenerator>(using: inout A1) -> () */

void (extension_Swift)::Swift::MutableCollection::_shuffle(undefined *using)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__shuffle_100eabfd0)();
  return;
}



/* Address: 0x100bf7ae8 | /usr/lib/swift/libswiftCore.dylib::Swift::ClosedRange::typeMetadataAccessor */

/* type metadata accessor for Swift.ClosedRange */

ClosedRange Swift::ClosedRange::typeMetadataAccessor(void)

{
  ClosedRange in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabfd8)();
  return (ClosedRange)in_x0.unknown;
}



/* Address: 0x100bf7af4 | /usr/lib/swift/libswiftCore.dylib::Swift::Equatable::==_infix */

/* dispatch thunk of static Swift.Equatable.== infix(A, A) -> Swift.Bool */

bool Swift::Equatable::___infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eac008)();
  return (bool)param_1;
}



/* Address: 0x100bf7b00 | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::$_copyContents */

/* Swift.UnsafeBufferPointer._copyContents(initializing: Swift.UnsafeMutableBufferPointer<A>) ->
   (Swift.UnsafeBufferPointer<A>.Iterator, Swift.Int) */

tuple2 Swift::UnsafeBufferPointer::__copyContents
                 (UnsafeMutableBufferPointer<undefined> initializing,UnsafeBufferPointer param_2)

{
  tuple2 tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyContents_100eac010)();
  tVar1._ = (__int64)param_2.unknown;
  tVar1._.unknown = initializing.unknown;
  return tVar1;
}



/* Address: 0x100bf7b0c | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::$init */

/* Swift.UnsafeBufferPointer.init(start: Swift.UnsafePointer<A>?, count: Swift.Int) ->
   Swift.UnsafeBufferPointer<A> */

UnsafeBufferPointer<undefined> Swift::UnsafeBufferPointer::_init(__int64 start)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eac018)();
  return (UnsafeBufferPointer<undefined>)start;
}



/* Address: 0x100bf7b18 | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::Iterator::typeMetadataAccessor */

/* type metadata accessor for Swift.UnsafeBufferPointer.Iterator */

Iterator Swift::UnsafeBufferPointer::Iterator::typeMetadataAccessor(void)

{
  Iterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eac020)();
  return (Iterator)in_x0.unknown;
}



/* Address: 0x100bf7b24 | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::typeMetadataAccessor */

/* type metadata accessor for Swift.UnsafeBufferPointer */

UnsafeBufferPointer Swift::UnsafeBufferPointer::typeMetadataAccessor(void)

{
  UnsafeBufferPointer in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eac028)();
  return (UnsafeBufferPointer)in_x0.unknown;
}



/* Address: 0x100bf7b30 | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::init */

/* Swift.UnsafeBufferPointer.init(Swift.UnsafeMutableBufferPointer<A>) ->
   Swift.UnsafeBufferPointer<A> */

UnsafeBufferPointer<undefined>
Swift::UnsafeBufferPointer::init(UnsafeMutableBufferPointer<undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eac030)();
  return (UnsafeBufferPointer<undefined>)param_1.unknown;
}



/* Address: 0x100bf7b3c | /usr/lib/swift/libswiftCore.dylib::Swift::UnsafeBufferPointer::get_subscript */

/* Swift.UnsafeBufferPointer.subscript.getter : (Swift.Range<Swift.Int>) ->
   Swift.Slice<Swift.UnsafeBufferPointer<A>> */

Slice<UnsafeBufferPointer<undefined>>
Swift::UnsafeBufferPointer::get_subscript(Range<__int64> param_1,UnsafeBufferPointer param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100eac038)();
  return (Slice<UnsafeBufferPointer<undefined>>)param_1.unknown;
}



/* Address: 0x100bf7b48 | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::IntentInputOptions::$typeMetadataAccessor */

/* type metadata accessor for (extension in AppIntents):Swift.String.IntentInputOptions */

IntentInputOptions IntentInputOptions::_typeMetadataAccessor(void)

{
  IntentInputOptions in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea8e20)();
  return (IntentInputOptions)in_x0.unknown;
}



/* Address: 0x100bf7b54 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::init */

/* (extension in Foundation):Swift.String.init(utf16CodeUnits: Swift.UnsafePointer<Swift.UInt16>,
   count: Swift.Int) -> Swift.String */

String (extension_Foundation)::Swift::String::init
                 (UnsafePointer<__int16> utf16CodeUnits,__int64 count)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7780)();
  SVar1.bridgeObject = (void *)count;
  SVar1.str = utf16CodeUnits.unknown;
  return SVar1;
}



/* Address: 0x100bf7b60 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::$init */

/* (extension in Foundation):Swift.String.LocalizationValue.init(stringLiteral: Swift.String) ->
   (extension in Foundation):Swift.String.LocalizationValue */

LocalizationValue LocalizationValue::_init(String stringLiteral)

{
  LocalizationValue LVar1;
  
  LVar1.unknown = stringLiteral.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7788)(LVar1.unknown,stringLiteral.bridgeObject);
  return (LocalizationValue)LVar1.unknown;
}



/* Address: 0x100bf7b6c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::StringInterpolation::$appendInterpolation */

/* (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation.appendInterpolation<A where A:
   Foundation._FormatSpecifiable>(_: A, specifier: Swift.String) -> () */

void LocalizationValue::StringInterpolation::_appendInterpolation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendInterpolation_100ea7790)();
  return;
}



/* Address: 0x100bf7b78 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::StringInterpolation::$appendInterpolation */

/* (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation.appendInterpolation(Swift.String)
   -> () */

void LocalizationValue::StringInterpolation::_appendInterpolation
               (String param_1,StringInterpolation param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendInterpolation_100ea7798)
            (param_1.str,param_1.bridgeObject,param_2.message.str,param_2.message.bridgeObject,
             param_2._16_8_,param_2.template.str,param_2.template.bridgeObject,
             param_2.interpolationCount);
  return;
}



/* Address: 0x100bf7b84 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::StringInterpolation::$appendLiteral */

/* (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation.appendLiteral(Swift.String) -> ()
    */

void LocalizationValue::StringInterpolation::_appendLiteral
               (String param_1,StringInterpolation param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__appendLiteral_100ea77a0)
            (param_1.str,param_1.bridgeObject,param_2.message.str,param_2.message.bridgeObject,
             param_2._16_8_,param_2.template.str,param_2.template.bridgeObject,
             param_2.interpolationCount);
  return;
}



/* Address: 0x100bf7b90 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::StringInterpolation::$init */

/* (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation.init(literalCapacity: Swift.Int,
   interpolationCount: Swift.Int) -> (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation */

void LocalizationValue::StringInterpolation::_init
               (StringInterpolation *__return_storage_ptr__,__int64 literalCapacity,
               __int64 interpolationCount)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea77a8)();
  return;
}



/* Address: 0x100bf7b9c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::StringInterpolation::$typeMetadataAccessor */

/* type metadata accessor for (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation */

void LocalizationValue::StringInterpolation::_typeMetadataAccessor
               (StringInterpolation *__return_storage_ptr__)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea77b0)();
  return;
}



/* Address: 0x100bf7ba8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::$init */

/* (extension in Foundation):Swift.String.LocalizationValue.init(stringInterpolation: (extension in
   Foundation):Swift.String.LocalizationValue.StringInterpolation) -> (extension in
   Foundation):Swift.String.LocalizationValue */

LocalizationValue LocalizationValue::_init(StringInterpolation stringInterpolation)

{
  LocalizationValue LVar1;
  
  LVar1.unknown = stringInterpolation.message.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea77b8)
            (LVar1.unknown,stringInterpolation.message.bridgeObject,stringInterpolation._16_8_,
             stringInterpolation.template.str,stringInterpolation.template.bridgeObject,
             stringInterpolation.interpolationCount);
  return (LocalizationValue)LVar1.unknown;
}



/* Address: 0x100bf7bb4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::LocalizationValue::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):Swift.String.LocalizationValue */

LocalizationValue LocalizationValue::_typeMetadataAccessor(void)

{
  LocalizationValue in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea77c0)();
  return (LocalizationValue)in_x0.unknown;
}



/* Address: 0x100bf7bc0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.String._bridgeToObjectiveC() -> __C.NSString */

NSString * (extension_Foundation)::Swift::String::_bridgeToObjectiveC(void)

{
  NSString *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea77c8)();
  return in_x0;
}



/* Address: 0x100bf7bcc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_forceBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.String._forceBridgeFromObjectiveC(_: __C.NSString, result:
   inout Swift.String?) -> () */

void (extension_Foundation)::Swift::String::__forceBridgeFromObjectiveC(NSString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___forceBridgeFromObjectiveC_100ea77d0)();
  return;
}



/* Address: 0x100bf7bd8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_conditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.String._conditionallyBridgeFromObjectiveC(_: __C.NSString,
   result: inout Swift.String?) -> Swift.Bool */

bool (extension_Foundation)::Swift::String::__conditionallyBridgeFromObjectiveC(NSString *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf7be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___conditionallyBridgeFromObjectiveC_100ea77d8)();
  return (bool)uVar1;
}



/* Address: 0x100bf7be4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.String._unconditionallyBridgeFromObjectiveC(__C.NSString?)
   -> Swift.String */

String (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea77e0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bf7bf0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$init */

/* (extension in Foundation):Swift.String.init(data: __shared Foundation.Data, encoding: (extension
   in Foundation):Swift.String.Encoding) -> Swift.String? */

void (extension_Foundation)::Swift::String::_init(Encoding data)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea77e8)();
  return;
}



/* Address: 0x100bf7bfc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$init */

/* (extension in Foundation):Swift.String.init<A where A: Swift.Sequence, A.Element ==
   Swift.UInt8>(bytes: __shared A, encoding: (extension in Foundation):Swift.String.Encoding) ->
   Swift.String? */

void (extension_Foundation)::Swift::String::_init(Encoding bytes)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea77f0)();
  return;
}



/* Address: 0x100bf7c08 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$init */

/* (extension in Foundation):Swift.String.init(format: __shared Swift.String, _: Swift.CVarArg...)
   -> Swift.String */

String (extension_Foundation)::Swift::String::_init(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea77f8)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100bf7c14 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$init */

/* (extension in Foundation):Swift.String.init(cString: Swift.UnsafePointer<Swift.Int8>, encoding:
   (extension in Foundation):Swift.String.Encoding) -> Swift.String? */

void (extension_Foundation)::Swift::String::_init(UnsafePointer<__int8> cString,Encoding encoding)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7800)();
  return;
}



/* Address: 0x100bf7c20 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_nonLossyASCII */

/* static (extension in Foundation):Swift.String.Encoding.nonLossyASCII.getter : (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_get_nonLossyASCII(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_nonLossyASCII_100ea7808)();
  return (Encoding)param_1.unknown;
}



/* Address: 0x100bf7c2c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$==_infix */

/* static (extension in Foundation):Swift.String.Encoding.== infix((extension in
   Foundation):Swift.String.Encoding, (extension in Foundation):Swift.String.Encoding) -> Swift.Bool
    */

bool Encoding::____infix(Encoding param_1,Encoding param_2,Encoding param_3)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf7c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_____infix_100ea7810)();
  return (bool)uVar1;
}



/* Address: 0x100bf7c38 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_utf8 */

/* static (extension in Foundation):Swift.String.Encoding.utf8.getter : (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_get_utf8(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_utf8_100ea7818)();
  return (Encoding)param_1.unknown;
}



/* Address: 0x100bf7c44 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_ascii */

/* static (extension in Foundation):Swift.String.Encoding.ascii.getter : (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_get_ascii(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_ascii_100ea7820)();
  return (Encoding)param_1.unknown;
}



/* Address: 0x100bf7c50 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$init */

/* (extension in Foundation):Swift.String.Encoding.init(rawValue: Swift.UInt) -> (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_init(__uint64 rawValue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7828)();
  return (Encoding)rawValue;
}


