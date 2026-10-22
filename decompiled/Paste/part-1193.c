/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf8e5c | /usr/lib/swift/libswiftDispatch.dylib::(extension_Dispatch)::__C::OS_dispatch_source_timer::schedule */

/* (extension in Dispatch):__C.OS_dispatch_source_timer.schedule(deadline: Dispatch.DispatchTime,
   repeating: Dispatch.DispatchTimeInterval, leeway: Dispatch.DispatchTimeInterval) -> () */

void (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
               (DispatchTime deadline,DispatchTimeInterval repeating,DispatchTimeInterval leeway)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_schedule_100eae878)(deadline.unknown,repeating.value,leeway.value);
  return;
}



/* Address: 0x100bf8e68 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKSystemSharingUIObserver::$set_systemSharingUIDidSaveShareBlock */

/* (extension in CloudKit):__C.CKSystemSharingUIObserver.systemSharingUIDidSaveShareBlock.setter :
   ((__C.CKRecordID, Swift.Result<__C.CKShare, Swift.Error>) -> ())? */

void __thiscall
(extension_CloudKit)::__C::CKSystemSharingUIObserver::_set_systemSharingUIDidSaveShareBlock
          (CKSystemSharingUIObserver *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_systemSharingUIDidSaveShareBlock_100ea9570)();
  return;
}



/* Address: 0x100bf8e74 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKSystemSharingUIObserver::$set_systemSharingUIDidStopSharingBlock */

/* (extension in CloudKit):__C.CKSystemSharingUIObserver.systemSharingUIDidStopSharingBlock.setter :
   ((__C.CKRecordID, Swift.Result<(), Swift.Error>) -> ())? */

void __thiscall
(extension_CloudKit)::__C::CKSystemSharingUIObserver::_set_systemSharingUIDidStopSharingBlock
          (CKSystemSharingUIObserver *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_systemSharingUIDidStopSharingBlock_100ea9578)();
  return;
}



/* Address: 0x100bf8e80 | /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData::(extension_CoreData)::__C::NSPersistentStoreCoordinator::$addPersistentStore */

/* (extension in CoreData):__C.NSPersistentStoreCoordinator.addPersistentStore(type: (extension in
   CoreData):__C.NSPersistentStore.StoreType, configuration: Swift.String?, at: Foundation.URL,
   options: [Swift.AnyHashable : Any]?) throws -> __C.NSPersistentStore */

NSPersistentStore *
(extension_CoreData)::__C::NSPersistentStoreCoordinator::_addPersistentStore
          (StoreType type,URL configuration)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__addPersistentStore_100ea99c0)();
  return (NSPersistentStore *)type.unknown;
}



/* Address: 0x100bf8e8c | /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData::(extension_CoreData)::__C::NSPersistentStoreCoordinator::$metadataForPersistentStore */

/* static (extension in CoreData):__C.NSPersistentStoreCoordinator.metadataForPersistentStore(type:
   (extension in CoreData):__C.NSPersistentStore.StoreType, at: Foundation.URL, options:
   [Swift.AnyHashable : Any]?) throws -> [Swift.String : Any] */

Dictionary<String,static_(extension_in_CoreData):__C_NSPersistentStoreCoordinator_metadataForPersistentStore(type:_(extension_in_CoreData):__C_NSPersistentStore_StoreType,at:_Foundation_URL,options:_[Swift_AnyHashable_:_Any]_)_throws__>__Swift_String___Any_>
 (extension_CoreData)::__C::NSPersistentStoreCoordinator::_metadataForPersistentStore
           (StoreType type,URL at)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__metadataForPersistentStore_100ea99c8)();
  return (Dictionary<String,static_(extension_in_CoreData):__C_NSPersistentStoreCoordinator_metadataForPersistentStore(type:_(extension_in_CoreData):__C_NSPersistentStore_StoreType,at:_Foundation_URL,options:_[Swift_AnyHashable_:_Any]_)_throws__>__Swift_String___Any_>
          )type.unknown;
}



/* Address: 0x100bf8e98 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSSet::makeIterator */

/* (extension in Foundation):__C.NSSet.makeIterator() -> Foundation.NSFastEnumerationIterator */

NSFastEnumerationIterator (extension_Foundation)::__C::NSSet::makeIterator(void)

{
  NSFastEnumerationIterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_makeIterator_100ea79d0)();
  return (NSFastEnumerationIterator)in_x0.unknown;
}



/* Address: 0x100bf8ea4 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::CGRect::fill */

/* (extension in AppKit):__C.CGRect.fill(using: __C.NSCompositingOperation) -> () */

void (extension_AppKit)::__C::CGRect::fill(NSCompositingOperation using)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fill_100ea8ea0)();
  return;
}



/* Address: 0x100bf8eb0 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::Invalidating::$init */

/* (extension in AppKit):__C.NSView.Invalidating.init(wrappedValue: A, _: B) -> (extension in
   AppKit):__C.NSView.Invalidating<A, B> */

Invalidating<undefined,undefined> Invalidating::_init(Invalidating<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea8ea8)();
  return (Invalidating<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf8ebc | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::Invalidating::$modify_subscript */

/* static (extension in AppKit):__C.NSView.Invalidating.subscript.modify : <A where A1:
   __C.NSView>(_enclosingInstance: A1, wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage:
   Swift.ReferenceWritableKeyPath<A1, (extension in AppKit):__C.NSView.Invalidating<A, B>>) -> A */

void __thiscall Invalidating::_modify_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__modify_subscript_100ea8eb0)();
  return;
}



/* Address: 0x100bf8ec8 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::Invalidating::$get_subscript */

/* static (extension in AppKit):__C.NSView.Invalidating.subscript.getter : <A where A1:
   __C.NSView>(_enclosingInstance: A1, wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage:
   Swift.ReferenceWritableKeyPath<A1, (extension in AppKit):__C.NSView.Invalidating<A, B>>) -> A */

void Invalidating::_get_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100ea8eb8)();
  return;
}



/* Address: 0x100bf8ed4 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::Invalidating::$set_subscript */

/* static (extension in AppKit):__C.NSView.Invalidating.subscript.setter : <A where A1:
   __C.NSView>(_enclosingInstance: A1, wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage:
   Swift.ReferenceWritableKeyPath<A1, (extension in AppKit):__C.NSView.Invalidating<A, B>>) -> A */

void __thiscall Invalidating::_set_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_subscript_100ea8ec0)();
  return;
}



/* Address: 0x100bf8ee0 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::Invalidating::$typeMetadataAccessor */

/* type metadata accessor for (extension in AppKit):__C.NSView.Invalidating */

Invalidating_conflict Invalidating::_typeMetadataAccessor(void)

{
  Invalidating_conflict in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea8ec8)();
  return (Invalidating_conflict)in_x0.unknown;
}



/* Address: 0x100bf8eec | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSView::Invalidations::Layout::init */

/* (extension in AppKit):__C.NSView.Invalidations.Layout.init() -> (extension in
   AppKit):__C.NSView.Invalidations.Layout */

Layout (extension_AppKit)::__C::NSView::Invalidations::Layout::init(void)

{
  Layout in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea8ee0)();
  return (Layout)in_x0.cellCount;
}



/* Address: 0x100bf8ef8 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSView::Invalidations::Layout::typeMetadataAccessor */

/* type metadata accessor for (extension in AppKit):__C.NSView.Invalidations.Layout */

Layout (extension_AppKit)::__C::NSView::Invalidations::Layout::typeMetadataAccessor(void)

{
  Layout in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8ee8)();
  return (Layout)in_x0.cellCount;
}



/* Address: 0x100bf8f04 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSView::Invalidations::Display::init */

/* (extension in AppKit):__C.NSView.Invalidations.Display.init() -> (extension in
   AppKit):__C.NSView.Invalidations.Display */

Display (extension_AppKit)::__C::NSView::Invalidations::Display::init(void)

{
  Display in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea8f00)();
  return (Display)in_x0.unknown;
}



/* Address: 0x100bf8f10 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor */

/* type metadata accessor for (extension in AppKit):__C.NSView.Invalidations.Display */

Display (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor(void)

{
  Display in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8f08)();
  return (Display)in_x0.unknown;
}



/* Address: 0x100bf8f1c | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKQuery::__allocating_init */

/* (extension in CloudKit):__C.CKQuery.init(recordType: Swift.String, predicate: __C.NSPredicate) ->
   __C.CKQuery */

CKQuery * __thiscall
(extension_CloudKit)::__C::CKQuery::__allocating_init
          (CKQuery *this,String recordType,NSPredicate *predicate)

{
  CKQuery *pCVar1;
  
  pCVar1 = (CKQuery *)recordType.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf8f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea9580)(pCVar1,recordType.bridgeObject);
  return pCVar1;
}



/* Address: 0x100bf8f28 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKShare::SystemFieldKey::get_thumbnailImageData */

/* static (extension in CloudKit):__C.CKShare.SystemFieldKey.thumbnailImageData.getter :
   Swift.String */

String (extension_CloudKit)::__C::CKShare::SystemFieldKey::get_thumbnailImageData
                 (SystemFieldKey param_1)

{
  char *pcVar1;
  void *in_x1;
  String SVar2;
  
  pcVar1 = (char *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf8f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_thumbnailImageData_100ea9588)();
  SVar2.bridgeObject = in_x1;
  SVar2.str = pcVar1;
  return SVar2;
}



/* Address: 0x100bf8f34 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKShare::SystemFieldKey::get_title */

/* static (extension in CloudKit):__C.CKShare.SystemFieldKey.title.getter : Swift.String */

String (extension_CloudKit)::__C::CKShare::SystemFieldKey::get_title(SystemFieldKey param_1)

{
  char *pcVar1;
  void *in_x1;
  String SVar2;
  
  pcVar1 = (char *)(ulong)(byte)param_1.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf8f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_title_100ea9590)();
  SVar2.bridgeObject = in_x1;
  SVar2.str = pcVar1;
  return SVar2;
}



/* Address: 0x100bf8f40 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSArray::makeIterator */

/* (extension in Foundation):__C.NSArray.makeIterator() -> Foundation.NSFastEnumerationIterator */

NSFastEnumerationIterator (extension_Foundation)::__C::NSArray::makeIterator(void)

{
  NSFastEnumerationIterator in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_makeIterator_100ea79d8)();
  return (NSFastEnumerationIterator)in_x0.unknown;
}



/* Address: 0x100bf8f4c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSCoder::$decodeDictionary */

/* (extension in Foundation):__C.NSCoder.decodeDictionary<A, B where A: __C.NSObject, A:
   __C.NSCopying, A: __C.NSSecureCoding, B: __C.NSObject, B: __C.NSSecureCoding>(withKeyClass:
   A.Type, objectClass: B.Type, forKey: Swift.String) -> [A : B]? */

void (extension_Foundation)::__C::NSCoder::_decodeDictionary(String withKeyClass)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeDictionary_100ea79e0)(withKeyClass.str,withKeyClass.bridgeObject);
  return;
}



/* Address: 0x100bf8f58 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSCoder::$decodeArrayOfObjects */

/* (extension in Foundation):__C.NSCoder.decodeArrayOfObjects<A where A: __C.NSObject, A:
   __C.NSSecureCoding>(ofClass: A.Type, forKey: Swift.String) -> [A]? */

void (extension_Foundation)::__C::NSCoder::_decodeArrayOfObjects(String ofClass)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__decodeArrayOfObjects_100ea79e8)(ofClass.str,ofClass.bridgeObject);
  return;
}



/* Address: 0x100bf8f64 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_rightArrow */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.rightArrow.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_rightArrow(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_rightArrow_100ea8f18)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8f70 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_deleteForward */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.deleteForward.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_deleteForward(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_deleteForward_100ea8f20)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8f7c | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_carriageReturn */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.carriageReturn.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_carriageReturn(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_carriageReturn_100ea8f28)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8f88 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_tab */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.tab.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_tab(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_tab_100ea8f30)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8f94 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_enter */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.enter.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_enter(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_enter_100ea8f38)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fa0 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_delete */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.delete.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_delete(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_delete_100ea8f40)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fac | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_system */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.system.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_system(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_system_100ea8f48)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fb8 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_backTab */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.backTab.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_backTab(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_backTab_100ea8f50)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fc4 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_upArrow */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.upArrow.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_upArrow(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_upArrow_100ea8f58)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fd0 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_backspace */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.backspace.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_backspace(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_backspace_100ea8f60)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fdc | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_downArrow */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.downArrow.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_downArrow(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_downArrow_100ea8f68)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8fe8 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$get_leftArrow */

/* static (extension in AppKit):__C.NSEvent.SpecialKey.leftArrow.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_get_leftArrow(SpecialKey param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_leftArrow_100ea8f70)();
  return (SpecialKey)param_1.unknown;
}



/* Address: 0x100bf8ff4 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::SpecialKey::$typeMetadataAccessor */

/* type metadata accessor for (extension in AppKit):__C.NSEvent.SpecialKey */

SpecialKey SpecialKey::_typeMetadataAccessor(void)

{
  SpecialKey in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf8ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea8f78)();
  return (SpecialKey)in_x0.unknown;
}



/* Address: 0x100bf9000 | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSEvent::$get_specialKey */

/* (extension in AppKit):__C.NSEvent.specialKey.getter : (extension in
   AppKit):__C.NSEvent.SpecialKey? */

void (extension_AppKit)::__C::NSEvent::_get_specialKey(NSEvent *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_specialKey_100ea8f90)();
  return;
}



/* Address: 0x100bf900c | /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension_AppKit)::__C::NSSound::beep */

/* static (extension in AppKit):__C.NSSound.beep() -> () */

void (extension_AppKit)::__C::NSSound::beep(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_beep_100ea8f98)();
  return;
}



/* Address: 0x100bf9018 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::TimerPublisher::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):__C.NSTimer.TimerPublisher */

TimerPublisher * TimerPublisher::_typeMetadataAccessor(void)

{
  TimerPublisher *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea79f8)();
  return in_x0;
}



/* Address: 0x100bf9024 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSTimer::$publish */

/* static (extension in Foundation):__C.NSTimer.publish(every: Swift.Double, tolerance:
   Swift.Double?, on: __C.NSRunLoop, in: __C.NSRunLoopMode, options: (extension in
   Foundation):__C.NSRunLoop.SchedulerOptions?) -> (extension in
   Foundation):__C.NSTimer.TimerPublisher */

TimerPublisher * (extension_Foundation)::__C::NSTimer::_publish(TimerPublisher *tolerance)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf902c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__publish_100ea7a08)();
  return tolerance;
}



/* Address: 0x100bf9030 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKRecord::__allocating_init */

/* (extension in CloudKit):__C.CKRecord.init(recordType: Swift.String, recordID: __C.CKRecordID) ->
   __C.CKRecord */

CKRecord * __thiscall
(extension_CloudKit)::__C::CKRecord::__allocating_init
          (CKRecord *this,String recordType,CKRecordID *recordID)

{
  CKRecord *pCVar1;
  
  pCVar1 = (CKRecord *)recordType.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf9038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea9598)(pCVar1,recordType.bridgeObject);
  return pCVar1;
}



/* Address: 0x100bf903c | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKRecord::get_recordType */

/* (extension in CloudKit):__C.CKRecord.recordType.getter : Swift.String */

String (extension_CloudKit)::__C::CKRecord::get_recordType(CKRecord *param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_recordType_100ea95a0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = (char *)param_1;
  return SVar1;
}



/* Address: 0x100bf9048 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKRecord::allKeys */

/* (extension in CloudKit):__C.CKRecord.allKeys() -> [Swift.String] */

void (extension_CloudKit)::__C::CKRecord::allKeys(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_allKeys_100ea95a8)();
  return;
}



/* Address: 0x100bf9054 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::__C::CKRecord::$setObject */

/* (extension in CloudKit):__C.CKRecord.setObject(_: __C.CKRecordValue?, forKey: Swift.String) -> ()
    */

void (extension_CloudKit)::__C::CKRecord::_setObject(String param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setObject_100ea95b0)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100bf9060 | $$(extension_in_CloudKit):__C.CKRecord.subscript.getter_:_(Swift.String)_->___C.CKRecordValue? */

void ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR____extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue__100ea95b8
  )();
  return;
}



/* Address: 0x100bf906c | $$(extension_in_CloudKit):__C.CKRecord.subscript.setter_:_(Swift.String)_->___C.CKRecordValue? */

void ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR____extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue__100ea95c0
  )();
  return;
}



/* Address: 0x100bf9078 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSNumber::__allocating_init */

/* (extension in Foundation):__C.NSNumber.init(floatLiteral: Swift.Double) -> __C.NSNumber */

NSNumber * __thiscall
(extension_Foundation)::__C::NSNumber::__allocating_init(NSNumber *this,double floatLiteral)

{
  NSNumber *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea7a10)();
  return in_x0;
}



/* Address: 0x100bf9084 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSNumber::__allocating_init */

/* (extension in Foundation):__C.NSNumber.init(booleanLiteral: Swift.Bool) -> __C.NSNumber */

NSNumber * __thiscall
(extension_Foundation)::__C::NSNumber::__allocating_init(NSNumber *this,bool booleanLiteral)

{
  NSNumber *pNVar1;
  
  pNVar1 = (NSNumber *)(ulong)booleanLiteral;
                    /* WARNING: Could not recover jumptable at 0x000100bf908c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea7a18)();
  return pNVar1;
}



/* Address: 0x100bf9090 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSNumber::__allocating_init */

/* (extension in Foundation):__C.NSNumber.init(integerLiteral: Swift.Int) -> __C.NSNumber */

NSNumber * __thiscall
(extension_Foundation)::__C::NSNumber::__allocating_init(NSNumber *this,__int64 integerLiteral)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea7a20)();
  return (NSNumber *)integerLiteral;
}



/* Address: 0x100bf909c | /usr/lib/swift/libswiftObjectiveC.dylib::(extension_ObjectiveC)::__C::NSObject::_rawHashValue */

/* (extension in ObjectiveC):__C.NSObject._rawHashValue(seed: Swift.Int) -> Swift.Int */

__int64 (extension_ObjectiveC)::__C::NSObject::_rawHashValue(__int64 seed)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rawHashValue_100eae8b0)();
  return seed;
}



/* Address: 0x100bf90a8 | /usr/lib/swift/libswiftObjectiveC.dylib::(extension_ObjectiveC)::__C::NSObject::==_infix */

/* static (extension in ObjectiveC):__C.NSObject.== infix(__C.NSObject, __C.NSObject) -> Swift.Bool
    */

bool (extension_ObjectiveC)::__C::NSObject::___infix(NSObject *param_1,NSObject *param_2)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf90b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100eae8b8)();
  return (bool)uVar1;
}



/* Address: 0x100bf90b4 | /usr/lib/swift/libswiftObjectiveC.dylib::(extension_ObjectiveC)::__C::NSObject::hash */

/* (extension in ObjectiveC):__C.NSObject.hash(into: inout Swift.Hasher) -> () */

void (extension_ObjectiveC)::__C::NSObject::hash(Hasher into)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100eae8c0)();
  return;
}



/* Address: 0x100bf90c0 | /usr/lib/swift/libswiftObjectiveC.dylib::(extension_ObjectiveC)::__C::NSObject::get_hashValue */

/* (extension in ObjectiveC):__C.NSObject.hashValue.getter : Swift.Int */

__int64 (extension_ObjectiveC)::__C::NSObject::get_hashValue(NSObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_hashValue_100eae8c8)();
  return (__int64)param_1;
}



/* Address: 0x100bf90cc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSString::__allocating_init */

/* (extension in Foundation):__C.NSString.init(stringLiteral: Swift.StaticString) -> __C.NSString */

NSString * __thiscall
(extension_Foundation)::__C::NSString::__allocating_init(NSString *this,StaticString stringLiteral)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___allocating_init_100ea7a40)();
  return (NSString *)stringLiteral.unknown;
}



/* Address: 0x100bf90d8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::_NSRange::$init */

/* (extension in Foundation):__C._NSRange.init<A, B where A: Swift.RangeExpression, B:
   Swift.StringProtocol, A.Bound == Swift.String.Index>(_: A, in: B) -> __C._NSRange */

_NSRange (extension_Foundation)::__C::_NSRange::_init(__int64 param_1,__int64 param_2)

{
  _NSRange _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf90e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea7a48)();
  _Var1.length = param_2;
  _Var1.location = param_1;
  return _Var1;
}



/* Address: 0x100bf90e4 | /usr/lib/swift/libswiftCoreGraphics.dylib::(extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef::$subtracting */

/* (extension in CoreGraphics):__C.CGPathRef.subtracting(_: __C.CGPathRef, using:
   CoreGraphics.CGPathFillRule) -> __C.CGPathRef */

void (extension_in_CoreGraphics):__C.CGPathRef.subtracting(_:___C.CGPathRef,using:_CoreGraphics.CGPathFillRule)_->___C.CGPathRef
     ::_subtracting(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__subtracting_100eaf2a8)();
  return;
}



/* Address: 0x100bf90f0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::FormatStyle::Currency::$get_locale */

/* (extension in Foundation):__C.NSDecimal.FormatStyle.Currency.locale.getter : Foundation.Locale */

Locale FormatStyle::Currency::_get_locale(Currency param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf90f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_locale_100ea7a50)();
  return (Locale)param_1.unknown;
}



/* Address: 0x100bf90fc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::FormatStyle::Currency::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):__C.NSDecimal.FormatStyle.Currency */

Currency FormatStyle::Currency::_typeMetadataAccessor(void)

{
  Currency in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea7a58)();
  return (Currency)in_x0.unknown;
}



/* Address: 0x100bf9108 | $$(extension_in_Foundation):__C.NSDecimal.init(floatLiteral:_Swift.Double)_->___C.NSDecimal */

void ___extension_in_Foundation____C_NSDecimal_init_floatLiteral__Swift_Double___>___C_NSDecimal
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR____extension_in_Foundation____C_NSDecimal_init_floatLiteral__Swift_Double___>___C_NSDecimal_100ea7a60
  )();
  return;
}



/* Address: 0x100bf9114 | $$(extension_in_Foundation):__C.NSDecimal.init(integerLiteral:_Swift.Int)_->___C.NSDecimal */

void ___extension_in_Foundation____C_NSDecimal_init_integerLiteral__Swift_Int___>___C_NSDecimal
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR____extension_in_Foundation____C_NSDecimal_init_integerLiteral__Swift_Int___>___C_NSDecimal_100ea7a68
  )();
  return;
}



/* Address: 0x100bf9120 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_in_Foundation):__C.NSDecimal._bridgeToObjectiveC()_->___C.NSDecimalNumber::$_bridgeToObjectiveC */

/* (extension in Foundation):__C.NSDecimal._bridgeToObjectiveC() -> __C.NSDecimalNumber */

NSDecimalNumber *
(extension_in_Foundation):__C.NSDecimal._bridgeToObjectiveC()_->___C.NSDecimalNumber::
__bridgeToObjectiveC(void)

{
  NSDecimalNumber *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___bridgeToObjectiveC_100ea7a70)();
  return in_x0;
}



/* Address: 0x100bf912c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::static_(extension_in_Foundation):__C.NSDecimal./_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal::$/_infix */

/* static (extension in Foundation):__C.NSDecimal./ infix(__C.NSDecimal, __C.NSDecimal) ->
   __C.NSDecimal */

void static_(extension_in_Foundation):__C.NSDecimal./_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal
     ::___infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea7a78)();
  return;
}



/* Address: 0x100bf9138 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::static_(extension_in_Foundation):__C.NSDecimal.<_infix(__C.NSDecimal,__C.NSDecimal)_->_Swift.Bool::$<_infix */

/* static (extension in Foundation):__C.NSDecimal.< infix(__C.NSDecimal, __C.NSDecimal) ->
   Swift.Bool */

bool static_(extension_in_Foundation):__C.NSDecimal.<_infix(__C.NSDecimal,__C.NSDecimal)_->_Swift.Bool
     ::_<_infix(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf9140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__<_infix_100ea7a80)();
  return (bool)param_1;
}



/* Address: 0x100bf9144 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::static_(extension_in_Foundation):__C.NSDecimal.-_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal::$-_infix */

/* static (extension in Foundation):__C.NSDecimal.- infix(__C.NSDecimal, __C.NSDecimal) ->
   __C.NSDecimal */

void static_(extension_in_Foundation):__C.NSDecimal.-_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal
     ::___infix(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf914c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea7a88)();
  return;
}



/* Address: 0x100bf9150 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::SchedulerOptions::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):__C.NSRunLoop.SchedulerOptions */

SchedulerOptions SchedulerOptions::_typeMetadataAccessor(void)

{
  SchedulerOptions in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf9158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100ea7a90)();
  return (SchedulerOptions)in_x0.unknown;
}


