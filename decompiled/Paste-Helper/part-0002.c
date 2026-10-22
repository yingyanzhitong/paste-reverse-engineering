/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10000579c | /usr/lib/swift/libswiftCore.dylib::Swift::CustomStringConvertible::get_description */

/* dispatch thunk of Swift.CustomStringConvertible.description.getter : Swift.String */

String Swift::CustomStringConvertible::get_description(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000057a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100008180)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x1000057a8 | /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck */

/* Swift._stringCompareWithSmolCheck(_: Swift._StringGuts, _: Swift._StringGuts, expecting:
   Swift._StringComparisonResult) -> Swift.Bool */

bool Swift::_stringCompareWithSmolCheck
               (_StringGuts param_1,_StringGuts param_2,_StringComparisonResult expecting)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x0001000057b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stringCompareWithSmolCheck_100008190)(uVar1,param_2.unknown,expecting.value);
  return (bool)uVar1;
}



/* Address: 0x1000057b4 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Clock::$get_now */

/* dispatch thunk of Swift.Clock.now.getter : A.Instant */

void Swift::Clock::_get_now(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000057bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_now_100008328)();
  return;
}



/* Address: 0x1000057c0 | /usr/lib/swift/libswift_Concurrency.dylib::Swift::Clock::$sleep */

/* dispatch thunk of Swift.Clock.sleep(until: A.Instant, tolerance: A.Duration?) async throws -> ()
    */

void Swift::Clock::_sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000057c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sleep_100008330)();
  return;
}



/* Address: 0x1000057cc | /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Clock::$get_continuous */

/* static (extension in Swift):Swift.Clock< where A == Swift.ContinuousClock>.continuous.getter :
   Swift.ContinuousClock */

ContinuousClock (extension_Swift)::Swift::Clock::_get_continuous(void)

{
  ContinuousClock in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000057d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_continuous_100008340)();
  return (ContinuousClock)in_x0.unknown;
}



/* Address: 0x1000057d8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Error::get_localizedDescription */

/* (extension in Foundation):Swift.Error.localizedDescription.getter : Swift.String */

String (extension_Foundation)::Swift::Error::get_localizedDescription(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000057e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_localizedDescription_100008088)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x1000057e4 | __os_log_impl */

void __os_log_impl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000057ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___os_log_impl_1000080d8)();
  return;
}



/* Address: 0x1000057f0 | _malloc_size */

void _malloc_size(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000057f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_size_1000080e0)();
  return;
}



/* Address: 0x1000057fc | _memcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_1000080e8)();
  return param_1;
}



/* Address: 0x100005808 | _memmove */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100005810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_1000080f0)();
  return param_1;
}



/* Address: 0x100005814 | _objc_allocWithZone */

void _objc_allocWithZone(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_allocWithZone_100008090)();
  return;
}



/* Address: 0x100005820 | _objc_msgSendSuper2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ID _objc_msgSendSuper2(objc_super *super,SEL op,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100005828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_1000080a0)();
  return (ID)super;
}



/* Address: 0x10000582c | _objc_opt_self */

/* WARNING: This is an inlined function */

void _objc_opt_self(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_self_1000080a8)();
  return;
}



/* Address: 0x100005838 | _objc_release */

/* WARNING: This is an inlined function */

void _objc_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000080b0)();
  return;
}



/* Address: 0x100005844 | _objc_retain */

/* WARNING: This is an inlined function */

void _objc_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000584c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000080b8)();
  return;
}



/* Address: 0x100005850 | _objc_retainAutoreleasedReturnValue */

/* WARNING: This is an inlined function */

void _objc_retainAutoreleasedReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_1000080c0)();
  return;
}



/* Address: 0x10000585c | _os_log_type_enabled */

void _os_log_type_enabled(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_log_type_enabled_1000080f8)();
  return;
}



/* Address: 0x100005868 | _swift_allocBox */

void _swift_allocBox(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocBox_1000081c8)();
  return;
}



/* Address: 0x100005874 | _swift_allocObject */

void _swift_allocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_1000081d0)();
  return;
}



/* Address: 0x100005880 | _swift_beginAccess */

void _swift_beginAccess(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_beginAccess_1000081d8)();
  return;
}



/* Address: 0x10000588c | _swift_bridgeObjectRelease */

void _swift_bridgeObjectRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000081e0)();
  return;
}



/* Address: 0x100005898 | _swift_bridgeObjectRetain */

void _swift_bridgeObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000081e8)();
  return;
}



/* Address: 0x1000058a4 | _swift_continuation_await */

void _swift_continuation_await(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_100008348)();
  return;
}



/* Address: 0x1000058b0 | _swift_continuation_init */

void _swift_continuation_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_init_100008350)();
  return;
}



/* Address: 0x1000058bc | _swift_deallocClassInstance */

void _swift_deallocClassInstance(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000081f0)();
  return;
}



/* Address: 0x1000058c8 | _swift_deallocObject */

void _swift_deallocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000081f8)();
  return;
}



/* Address: 0x1000058d4 | _swift_endAccess */

void _swift_endAccess(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_100008200)();
  return;
}



/* Address: 0x1000058e0 | _swift_errorRelease */

void _swift_errorRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_100008208)();
  return;
}



/* Address: 0x1000058ec | _swift_errorRetain */

void _swift_errorRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000058f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_100008210)();
  return;
}



/* Address: 0x1000058f8 | _swift_getErrorValue */

void _swift_getErrorValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getErrorValue_100008218)();
  return;
}



/* Address: 0x100005904 | _swift_getKeyPath */

void _swift_getKeyPath(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getKeyPath_100008220)();
  return;
}



/* Address: 0x100005910 | _swift_getObjCClassMetadata */

void _swift_getObjCClassMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassMetadata_100008228)();
  return;
}



/* Address: 0x10000591c | _swift_getObjectType */

void _swift_getObjectType(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjectType_100008230)();
  return;
}



/* Address: 0x100005928 | _swift_getSingletonMetadata */

void _swift_getSingletonMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getSingletonMetadata_100008238)();
  return;
}



/* Address: 0x100005934 | _swift_getTypeByMangledNameInContext2 */

void _swift_getTypeByMangledNameInContext2(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getTypeByMangledNameInContext2_100008240)();
  return;
}



/* Address: 0x100005940 | _swift_getTypeByMangledNameInContextInMetadataState2 */

void _swift_getTypeByMangledNameInContextInMetadataState2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getTypeByMangledNameInContextInMetadataState2_100008248)();
  return;
}



/* Address: 0x10000594c | _swift_getWitnessTable */

void _swift_getWitnessTable(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_100008250)();
  return;
}



/* Address: 0x100005958 | _swift_initStaticObject */

void _swift_initStaticObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_100008258)();
  return;
}



/* Address: 0x100005964 | _swift_isUniquelyReferenced_nonNull_native */

void _swift_isUniquelyReferenced_nonNull_native(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_isUniquelyReferenced_nonNull_native_100008260)();
  return;
}



/* Address: 0x100005970 | _swift_release */

void _swift_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100008268)();
  return;
}



/* Address: 0x10000597c | _swift_retain */

void _swift_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100008270)();
  return;
}



/* Address: 0x100005988 | _swift_slowAlloc */

void _swift_slowAlloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowAlloc_100008278)();
  return;
}



/* Address: 0x100005994 | _swift_slowDealloc */

void _swift_slowDealloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010000599c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowDealloc_100008280)();
  return;
}



/* Address: 0x1000059a0 | _swift_task_alloc */

void _swift_task_alloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_alloc_100008358)();
  return;
}



/* Address: 0x1000059ac | _swift_task_create */

void _swift_task_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_create_100008360)();
  return;
}



/* Address: 0x1000059b8 | _swift_task_dealloc */

void _swift_task_dealloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_dealloc_100008368)();
  return;
}



/* Address: 0x1000059c4 | _swift_task_isCurrentExecutor */

void _swift_task_isCurrentExecutor(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_isCurrentExecutor_100008370)();
  return;
}



/* Address: 0x1000059d0 | _swift_task_reportUnexpectedExecutor */

void _swift_task_reportUnexpectedExecutor(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_reportUnexpectedExecutor_100008378)();
  return;
}



/* Address: 0x1000059dc | _swift_task_switch */

void _swift_task_switch(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100008380)();
  return;
}



/* Address: 0x1000059e8 | _swift_unknownObjectRelease */

void _swift_unknownObjectRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100008288)();
  return;
}



/* Address: 0x1000059f4 | _swift_unknownObjectRetain */

void _swift_unknownObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_100008290)();
  return;
}



/* Address: 0x100005a00 | _swift_unknownObjectWeakDestroy */

void _swift_unknownObjectWeakDestroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_100008298)();
  return;
}



/* Address: 0x100005a0c | _swift_unknownObjectWeakInit */

void _swift_unknownObjectWeakInit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakInit_1000082a0)();
  return;
}



/* Address: 0x100005a18 | _swift_unknownObjectWeakLoadStrong */

void _swift_unknownObjectWeakLoadStrong(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_1000082a8)();
  return;
}



/* Address: 0x100005a24 | _swift_updateClassMetadata2 */

void _swift_updateClassMetadata2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_updateClassMetadata2_1000082b0)();
  return;
}



/* Address: 0x100005a30 | _swift_willThrow */

void _swift_willThrow(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_willThrow_1000082b8)();
  return;
}



/* Address: 0x100005a40 | objc_stub::URLForApplicationWithBundleIdentifier: */

ID __objc_msgSend_stub objc_stub::URLForApplicationWithBundleIdentifier_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"URLForApplicationWithBundleIdentifier:");
  return self;
}



/* Address: 0x100005a60 | objc_stub::boolForKey: */

ID __objc_msgSend_stub objc_stub::boolForKey_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"boolForKey:");
  return self;
}



/* Address: 0x100005a80 | objc_stub::bundleIdentifier */

ID __objc_msgSend_stub objc_stub::bundleIdentifier(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"bundleIdentifier");
  return self;
}



/* Address: 0x100005aa0 | objc_stub::bundleURL */

ID __objc_msgSend_stub objc_stub::bundleURL(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"bundleURL");
  return self;
}



/* Address: 0x100005ac0 | objc_stub::init */

ID __objc_msgSend_stub objc_stub::init(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"init");
  return self;
}



/* Address: 0x100005ae0 | objc_stub::initWithSuiteName: */

ID __objc_msgSend_stub objc_stub::initWithSuiteName_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"initWithSuiteName:");
  return self;
}



/* Address: 0x100005b00 | objc_stub::mainBundle */

ID __objc_msgSend_stub objc_stub::mainBundle(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)(self,"mainBundle");
  return self;
}



/* Address: 0x100005b20 | objc_stub::openApplicationAtURL:configuration:completionHandler: */

ID __objc_msgSend_stub objc_stub::openApplicationAtURL_configuration_completionHandler_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100008098)
            (self,"openApplicationAtURL:configuration:completionHandler:");
  return self;
}


