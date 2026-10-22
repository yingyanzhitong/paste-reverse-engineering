/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfcd5c | _unsetenv */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _unsetenv(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfcd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__unsetenv_100ea8bb0)();
  return iVar1;
}



/* Address: 0x100bfcd68 | _usleep */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _usleep(useconds_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__usleep_100ea8bb8)();
  return param_1;
}



/* Address: 0x100bfcd74 | _uuid_generate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _uuid_generate(uchar *out)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uuid_generate_100ea8bc0)();
  return;
}



/* Address: 0x100bfcd80 | _vm_allocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _vm_allocate(vm_map_t target_task,vm_address_t *address,vm_size_t size,int flags)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_allocate_100ea8bc8)();
  return target_task;
}



/* Address: 0x100bfcd8c | _vm_deallocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _vm_deallocate(vm_map_t target_task,vm_address_t address,vm_size_t size)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_deallocate_100ea8bd0)();
  return target_task;
}



/* Address: 0x100bfcd98 | _vm_read_overwrite */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_vm_read_overwrite(vm_map_t target_task,vm_address_t address,vm_size_t size,vm_address_t data,
                  vm_size_t *outsize)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_read_overwrite_100ea8be8)();
  return target_task;
}



/* Address: 0x100bfcda4 | _vm_region_64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_vm_region_64(vm_map_t target_task,vm_address_t *address,vm_size_t *size,vm_region_flavor_t flavor,
             vm_region_info_t info,mach_msg_type_number_t *infoCnt,mach_port_t *object_name)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_region_64_100ea8bf0)();
  return target_task;
}



/* Address: 0x100bfcdb0 | _voucher_adopt */

void _voucher_adopt(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__voucher_adopt_100ea8bf8)();
  return;
}



/* Address: 0x100bfcdbc | _vsnprintf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vsnprintf_100ea8c00)();
  return iVar1;
}



/* Address: 0x100bfcdc8 | _write */

void _write(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfcdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_100ea8c08)();
  return;
}



/* Address: 0x100bfcdd4 | _writev */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _writev(int param_1,iovec *param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfcddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__writev_100ea8c10)(uVar1,param_2,param_3);
  return uVar1;
}



/* Address: 0x100bfcde0 | objc_stub::FUN_100bfcde0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfcde0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"ANRDetected");
  return self;
}



/* Address: 0x100bfce00 | objc_stub::ANRStopped */

ID __objc_msgSend_stub objc_stub::ANRStopped(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"ANRStopped");
  return self;
}



/* Address: 0x100bfce20 | objc_stub::CGColor */

ID __objc_msgSend_stub objc_stub::CGColor(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"CGColor");
  return self;
}



/* Address: 0x100bfce40 | objc_stub::CGContext */

ID __objc_msgSend_stub objc_stub::CGContext(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"CGContext");
  return self;
}



/* Address: 0x100bfce60 | objc_stub::CGEvent */

ID __objc_msgSend_stub objc_stub::CGEvent(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"CGEvent");
  return self;
}



/* Address: 0x100bfce80 | objc_stub::CGImageForProposedRect:context:hints: */

ID __objc_msgSend_stub objc_stub::CGImageForProposedRect_context_hints_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"CGImageForProposedRect:context:hints:");
  return self;
}



/* Address: 0x100bfcea0 | objc_stub::HTTPAdditionalHeaders */

ID __objc_msgSend_stub objc_stub::HTTPAdditionalHeaders(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"HTTPAdditionalHeaders");
  return self;
}



/* Address: 0x100bfcec0 | objc_stub::FUN_100bfcec0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfcec0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"HTTPMethod");
  return self;
}



/* Address: 0x100bfcee0 | objc_stub::JSONObjectWithData:options:error: */

ID __objc_msgSend_stub objc_stub::JSONObjectWithData_options_error_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"JSONObjectWithData:options:error:");
  return self;
}



/* Address: 0x100bfcf00 | objc_stub::FUN_100bfcf00 */

ID __objc_msgSend_stub objc_stub::FUN_100bfcf00(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"MechanismType");
  return self;
}



/* Address: 0x100bfcf20 | objc_stub::TIFFRepresentation */

ID __objc_msgSend_stub objc_stub::TIFFRepresentation(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"TIFFRepresentation");
  return self;
}



/* Address: 0x100bfcf40 | objc_stub::URIRepresentation */

ID __objc_msgSend_stub objc_stub::URIRepresentation(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URIRepresentation");
  return self;
}



/* Address: 0x100bfcf60 | objc_stub::URL */

ID __objc_msgSend_stub objc_stub::URL(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URL");
  return self;
}



/* Address: 0x100bfcf80 | objc_stub::URLByAppendingPathComponent: */

ID __objc_msgSend_stub objc_stub::URLByAppendingPathComponent_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLByAppendingPathComponent:");
  return self;
}



/* Address: 0x100bfcfa0 | objc_stub::FUN_100bfcfa0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfcfa0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLForApplicationToOpenURL:");
  return self;
}



/* Address: 0x100bfcfc0 | objc_stub::URLForApplicationWithBundleIdentifier: */

ID __objc_msgSend_stub objc_stub::URLForApplicationWithBundleIdentifier_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLForApplicationWithBundleIdentifier:");
  return self;
}



/* Address: 0x100bfcfe0 | objc_stub::URLForDirectory:inDomain:appropriateForURL:create:error: */

ID __objc_msgSend_stub
objc_stub::URLForDirectory_inDomain_appropriateForURL_create_error_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)
            (self,"URLForDirectory:inDomain:appropriateForURL:create:error:");
  return self;
}



/* Address: 0x100bfd000 | objc_stub::URLForResource:withExtension: */

ID __objc_msgSend_stub objc_stub::URLForResource_withExtension_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLForResource:withExtension:");
  return self;
}



/* Address: 0x100bfd020 | objc_stub::URLForResource:withExtension:subdirectory: */

ID __objc_msgSend_stub objc_stub::URLForResource_withExtension_subdirectory_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLForResource:withExtension:subdirectory:");
  return self;
}



/* Address: 0x100bfd040 | objc_stub::FUN_100bfd040 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd040(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLWithString:");
  return self;
}



/* Address: 0x100bfd060 | objc_stub::URLs */

ID __objc_msgSend_stub objc_stub::URLs(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLs");
  return self;
}



/* Address: 0x100bfd080 | objc_stub::URLsForApplicationsToOpenURL: */

ID __objc_msgSend_stub objc_stub::URLsForApplicationsToOpenURL_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLsForApplicationsToOpenURL:");
  return self;
}



/* Address: 0x100bfd0a0 | objc_stub::URLsForDirectory:inDomains: */

ID __objc_msgSend_stub objc_stub::URLsForDirectory_inDomains_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"URLsForDirectory:inDomains:");
  return self;
}



/* Address: 0x100bfd0c0 | objc_stub::UTF8String */

ID __objc_msgSend_stub objc_stub::UTF8String(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"UTF8String");
  return self;
}



/* Address: 0x100bfd0e0 | objc_stub::FUN_100bfd0e0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd0e0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"UUID");
  return self;
}



/* Address: 0x100bfd100 | objc_stub::FUN_100bfd100 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd100(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"UUIDString");
  return self;
}



/* Address: 0x100bfd120 | objc_stub::FUN_100bfd120 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd120(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"__swift_objectForKeyedSubscript:");
  return self;
}



/* Address: 0x100bfd140 | objc_stub::FUN_100bfd140 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd140(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"_swiftCaptureLog:withScope:");
  return self;
}



/* Address: 0x100bfd160 | objc_stub::FUN_100bfd160 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd160(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"abnormalSessionFilePath");
  return self;
}



/* Address: 0x100bfd180 | objc_stub::abortEditing */

ID __objc_msgSend_stub objc_stub::abortEditing(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"abortEditing");
  return self;
}



/* Address: 0x100bfd1a0 | objc_stub::absoluteNSDateInterval */

ID __objc_msgSend_stub objc_stub::absoluteNSDateInterval(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"absoluteNSDateInterval");
  return self;
}



/* Address: 0x100bfd1c0 | objc_stub::FUN_100bfd1c0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd1c0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"absoluteString");
  return self;
}



/* Address: 0x100bfd1e0 | objc_stub::absoluteSystemTimestamp */

ID __objc_msgSend_stub objc_stub::absoluteSystemTimestamp(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"absoluteSystemTimestamp");
  return self;
}



/* Address: 0x100bfd200 | objc_stub::absoluteTimestamp */

ID __objc_msgSend_stub objc_stub::absoluteTimestamp(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"absoluteTimestamp");
  return self;
}



/* Address: 0x100bfd220 | objc_stub::FUN_100bfd220 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd220(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"acceptanceStatus");
  return self;
}



/* Address: 0x100bfd240 | objc_stub::acceptsFirstResponder */

ID __objc_msgSend_stub objc_stub::acceptsFirstResponder(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"acceptsFirstResponder");
  return self;
}



/* Address: 0x100bfd260 | objc_stub::FUN_100bfd260 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd260(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"accessBehavior");
  return self;
}



/* Address: 0x100bfd280 | objc_stub::accountStatusWithCompletionHandler: */

ID __objc_msgSend_stub objc_stub::accountStatusWithCompletionHandler_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"accountStatusWithCompletionHandler:");
  return self;
}



/* Address: 0x100bfd2a0 | objc_stub::action */

ID __objc_msgSend_stub objc_stub::action(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"action");
  return self;
}



/* Address: 0x100bfd2c0 | objc_stub::actionIdentifier */

ID __objc_msgSend_stub objc_stub::actionIdentifier(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"actionIdentifier");
  return self;
}



/* Address: 0x100bfd2e0 | objc_stub::FUN_100bfd2e0 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd2e0(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"actionWithIdentifier:title:options:");
  return self;
}



/* Address: 0x100bfd300 | objc_stub::activate */

ID __objc_msgSend_stub objc_stub::activate(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activate");
  return self;
}



/* Address: 0x100bfd320 | objc_stub::activateConstraints: */

ID __objc_msgSend_stub objc_stub::activateConstraints_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activateConstraints:");
  return self;
}



/* Address: 0x100bfd340 | objc_stub::activateFileViewerSelectingURLs: */

ID __objc_msgSend_stub objc_stub::activateFileViewerSelectingURLs_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activateFileViewerSelectingURLs:");
  return self;
}



/* Address: 0x100bfd360 | objc_stub::activateIgnoringOtherApps: */

ID __objc_msgSend_stub objc_stub::activateIgnoringOtherApps_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activateIgnoringOtherApps:");
  return self;
}



/* Address: 0x100bfd380 | objc_stub::activateWithOptions: */

ID __objc_msgSend_stub objc_stub::activateWithOptions_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activateWithOptions:");
  return self;
}



/* Address: 0x100bfd3a0 | objc_stub::activityType */

ID __objc_msgSend_stub objc_stub::activityType(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"activityType");
  return self;
}



/* Address: 0x100bfd3c0 | objc_stub::addAnimation:forKey: */

ID __objc_msgSend_stub objc_stub::addAnimation_forKey_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addAnimation:forKey:");
  return self;
}



/* Address: 0x100bfd3e0 | objc_stub::addArrangedSubview: */

ID __objc_msgSend_stub objc_stub::addArrangedSubview_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addArrangedSubview:");
  return self;
}



/* Address: 0x100bfd400 | objc_stub::FUN_100bfd400 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd400(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addAttachment:");
  return self;
}



/* Address: 0x100bfd420 | objc_stub::addAttribute:value:range: */

ID __objc_msgSend_stub objc_stub::addAttribute_value_range_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addAttribute:value:range:");
  return self;
}



/* Address: 0x100bfd440 | objc_stub::addAttributes:range: */

ID __objc_msgSend_stub objc_stub::addAttributes_range_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addAttributes:range:");
  return self;
}



/* Address: 0x100bfd460 | objc_stub::FUN_100bfd460 */

ID __objc_msgSend_stub objc_stub::FUN_100bfd460(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)
            (self,
             "addBaggageHeader:traceHeader:propagateTraceparent:tracePropagationTargets:toRequest:")
  ;
  return self;
}


