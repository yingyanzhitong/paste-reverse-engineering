/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b51830 | SentryCrashStackEntryMapper::inAppLogic */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashStackEntryMapper::inAppLogic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b51838 | SentryCrashStackEntryMapper::setInAppLogic: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashStackEntryMapper::setInAppLogic_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b51844 | SentryCrashStackEntryMapper::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashStackEntryMapper::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b51850 | SentryNSDataSwizzlingHelper::swizzleWithTracker: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNSDataSwizzlingHelper::swizzleWithTracker_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_128;
  undefined8 local_120;
  code *local_118;
  undefined *puStack_110;
  cfstringStruct *local_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  cfstringStruct *local_68;
  
  pcVar2 = &cf_writeToFile_atomically_;
  DAT_1010e3068 = param_3;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = PTR___NSConcreteStackBlock_100ea82a0;
  local_80 = 0xc0000000;
  local_78 = FUN_100b51a64;
  puStack_70 = &DAT_100f34390;
  local_68 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_88,2,pcVar2);
  pcVar2 = &cf_writeToFile_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_b0 = puVar1;
  local_a8 = 0xc0000000;
  local_a0 = FUN_100b51c80;
  puStack_98 = &DAT_100f34390;
  local_90 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_b0,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfFile_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_d8 = puVar1;
  local_d0 = 0xc0000000;
  local_c8 = FUN_100b51eb8;
  puStack_c0 = &DAT_100f34390;
  local_b8 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_d8,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfFile_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_100 = puVar1;
  local_f8 = 0xc0000000;
  local_f0 = FUN_100b52104;
  puStack_e8 = &DAT_100f34390;
  local_e0 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_100,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfURL_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_128 = puVar1;
  local_120 = 0xc0000000;
  local_118 = FUN_100b52318;
  puStack_110 = &DAT_100f34390;
  local_108 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_128,2,pcVar2);
  return;
}



/* Address: 0x100b51a64 | FUN_100b51a64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b51a64(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b51aec | FUN_100b51aec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b51aec(long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  
  if (DAT_1010e3068 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  }
  else {
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b51c1c;
    puStack_70 = &DAT_100f34ee8;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    IStack_60 = param_2;
    param_2 = objc_stub::measureNSData_writeToFile_atomically_origin_method_
                        (DAT_1010e3068,param_2,param_3,param_4,&cf_auto_file_ns_data,&local_88);
  }
  return param_2;
}



/* Address: 0x100b51c1c | FUN_100b51c1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b51c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  return uVar2;
}



/* Address: 0x100b51c80 | FUN_100b51c80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b51c80(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b51d08 | FUN_100b51d08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b51d08(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  
  if (DAT_1010e3068 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5);
  }
  else {
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b51e44;
    puStack_70 = &DAT_100f34f48;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    IStack_60 = param_2;
    param_2 = objc_stub::measureNSData_writeToFile_options_origin_error_method_
                        (DAT_1010e3068,param_2,param_3,param_4,&cf_auto_file_ns_data,param_5,
                         &local_88);
  }
  return param_2;
}



/* Address: 0x100b51e44 | FUN_100b51e44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b51e44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  return uVar2;
}



/* Address: 0x100b51eb8 | FUN_100b51eb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b51eb8(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b51f40 | FUN_100b51f40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b51f40(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  
  if (DAT_1010e3068 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5);
  }
  else {
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b52088;
    puStack_70 = &DAT_100f34fa8;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    IStack_60 = param_2;
    param_2 = objc_stub::measureNSDataFromFile_options_origin_error_method_
                        (DAT_1010e3068,param_3,param_4,&cf_auto_file_ns_data,param_5,&local_88);
  }
  return param_2;
}



/* Address: 0x100b52088 | FUN_100b52088 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b52088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  return uVar2;
}



/* Address: 0x100b52104 | FUN_100b52104 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b52104(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b5218c | FUN_100b5218c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b5218c(long param_1,ID param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  ID IStack_50;
  undefined8 local_48;
  
  if (DAT_1010e3068 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0xc2000000;
    local_68 = FUN_100b522b4;
    puStack_60 = &DAT_100f35008;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    IStack_50 = param_2;
    param_2 = objc_stub::measureNSDataFromFile_origin_method_
                        (DAT_1010e3068,param_3,&cf_auto_file_ns_data,&local_78);
  }
  return param_2;
}



/* Address: 0x100b522b4 | FUN_100b522b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b522b4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2);
  return uVar2;
}



/* Address: 0x100b52318 | FUN_100b52318 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b52318(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b523a0 | FUN_100b523a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b523a0(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  
  if (DAT_1010e3068 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5);
  }
  else {
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b524e8;
    puStack_70 = &DAT_100f35068;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    IStack_60 = param_2;
    param_2 = objc_stub::measureNSDataFromURL_options_origin_error_method_
                        (DAT_1010e3068,param_3,param_4,&cf_auto_file_ns_data,param_5,&local_88);
  }
  return param_2;
}



/* Address: 0x100b524e8 | FUN_100b524e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b524e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  return uVar2;
}



/* Address: 0x100b52564 | SentryNSDataSwizzlingHelper::stop */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryNSDataSwizzlingHelper::stop(ID param_1,SEL param_2)

{
  DAT_1010e3068 = 0;
  return;
}



/* Address: 0x100b52574 | SentryNSFileManagerSwizzlingHelper::swizzleWithTracker: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNSFileManagerSwizzlingHelper::swizzleWithTracker_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  cfstringStruct *local_28;
  
  iVar1 = 1;
  DAT_1010e3070 = param_3;
  FUN_100bf158c(1,0xf,0,0);
  if (iVar1 != 0) {
    pcVar2 = &cf_createFileAtPath_contents_attributes_;
    _NSSelectorFromString();
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSFileManager);
    IVar3 = objc_stub::class(IVar3);
    local_48 = PTR___NSConcreteStackBlock_100ea82a0;
    local_40 = 0xc0000000;
    local_38 = FUN_100b52630;
    puStack_30 = &DAT_100f34390;
    local_28 = pcVar2;
    objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
              ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_48,2,pcVar2);
  }
  return;
}



/* Address: 0x100b52630 | FUN_100b52630 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b52630(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b526b8 | FUN_100b526b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b526b8(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  
  if (DAT_1010e3070 == 0) {
    pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5);
  }
  else {
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b52824;
    puStack_70 = &DAT_100f350c8;
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    IStack_60 = param_2;
    param_2 = objc_stub::measureNSFileManagerCreateFileAtPath_data_attributes_origin_method_
                        (DAT_1010e3070,param_3,param_4,param_5,&cf_auto_file_ns_data,&local_88);
  }
  return param_2;
}



/* Address: 0x100b52824 | FUN_100b52824 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b52824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  return uVar2;
}



/* Address: 0x100b528c0 | SentryNSFileManagerSwizzlingHelper::stop */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryNSFileManagerSwizzlingHelper::stop(ID param_1,SEL param_2)

{
  DAT_1010e3070 = 0;
  return;
}



/* Address: 0x100b528d0 | FUN_100b528d0 */

void FUN_100b528d0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100b18a18(param_1,FUN_100b18a08,FUN_100b5291c);
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



/* Address: 0x100b5291c | FUN_100b5291c */

bool FUN_100b5291c(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(int *)((long)param_1 + 0x44) - (int)param_1[8] <= (int)param_1[5]) {
    return false;
  }
  uVar2 = *(ulong *)(param_1[9] + (long)((int)param_1[5] + (int)param_1[8]) * 8);
  bVar1 = 1 < uVar2;
  if (bVar1) {
    FUN_100b26574();
    *param_1 = uVar2;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
  return bVar1;
}



/* Address: 0x100b52988 | FUN_100b52988 */

undefined1 * FUN_100b52988(char *param_1)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 local_28c4;
  undefined1 *local_28c0;
  undefined1 auStack_28b8 [10008];
  undefined1 *local_1a0;
  uint local_198;
  code *local_190;
  code *pcStack_188;
  code *local_180;
  code *pcStack_178;
  code *local_170;
  code *pcStack_168;
  code *local_160;
  code *pcStack_158;
  code *local_150;
  code *pcStack_148;
  undefined1 auStack_138 [224];
  long local_58;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 != (char *)0x0) {
    pcStack_178 = FUN_100b52d54;
    local_180 = FUN_100b52bbc;
    pcStack_168 = FUN_100b52d78;
    local_170 = FUN_100b52d68;
    pcStack_158 = FUN_100b52e0c;
    local_160 = FUN_100b52dbc;
    pcStack_148 = FUN_100b52e90;
    local_150 = FUN_100b52e5c;
    pcStack_188 = FUN_100b52bac;
    local_190 = FUN_100b52b98;
    pvVar1 = _malloc(150000);
    if (pvVar1 == (void *)0x0) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                    ,0x103,"Failed to allocate string buffer of size %ul");
    }
    else {
      sVar2 = _strlen(param_1);
      uVar4 = (uint)((double)(int)sVar2 * 1.5);
      puVar3 = _malloc((ulong)uVar4);
      if (puVar3 == (undefined1 *)0x0) {
        _free(pvVar1);
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                      ,0x110,"Failed to allocate fixed report buffer of size %ld");
        goto LAB_100b52b28;
      }
      _bzero(auStack_28b8,0x2728);
      local_28c0 = auStack_138;
      local_1a0 = puVar3;
      local_198 = uVar4;
      FUN_100b56d64(auStack_138,1,FUN_100b52e98,&local_28c0);
      local_28c4 = 0;
      FUN_100bf34a4(param_1,sVar2,pvVar1,150000,&local_190,&local_28c0,&local_28c4);
      *local_1a0 = 0;
      _free(pvVar1);
      if ((int)param_1 == 0) goto LAB_100b52b28;
      FUN_100b56a9c();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReportFixer.c"
                    ,0x124,"Could not decode report: %s");
      _free(puVar3);
    }
  }
  puVar3 = (undefined1 *)0x0;
LAB_100b52b28:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b52b98 | FUN_100b52b98 */

void FUN_100b52b98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_100bf2e7c(*param_3,param_1,param_2);
  return;
}



/* Address: 0x100b52bac | FUN_100b52bac */

void FUN_100b52bac(undefined8 param_1,undefined8 *param_2)

{
  FUN_100bf2ecc(*param_2,param_1);
  return;
}



/* Address: 0x100b52bbc | FUN_100b52bbc */

void FUN_100b52bbc(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  char acStack_7d [21];
  long local_68;
  
  lVar7 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar2 = "";
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  uVar3 = *(uint *)(param_3 + 0x4e3);
  bVar4 = true;
LAB_100b52c20:
  do {
    ppuVar8 = &PTR_s__100f35178 + lVar7 * 100;
    pcVar10 = (char *)(param_3 + 1);
    uVar11 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      do {
        iVar5 = _strncmp(pcVar10,*ppuVar8,100);
        if (iVar5 != 0) {
          lVar7 = 1;
          bVar1 = !bVar4;
          bVar4 = false;
          if (bVar1) goto LAB_100b52ca4;
          goto LAB_100b52c20;
        }
        ppuVar8 = ppuVar8 + 1;
        pcVar10 = pcVar10 + 100;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar5 = _strncmp(pcVar2,(&PTR_s__100f35178 + lVar7 * 100)[(int)uVar3],100);
    bVar1 = (bool)(bVar4 & iVar5 != 0);
    lVar7 = 1;
    bVar4 = false;
    if (!bVar1) {
      if (iVar5 == 0) {
        FUN_100b4d87c(param_2,acStack_7d);
        uVar9 = *param_3;
        sVar6 = _strlen(acStack_7d);
        FUN_100bf318c(uVar9,param_1,acStack_7d,sVar6);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
          return;
        }
      }
      else {
LAB_100b52ca4:
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
          FUN_100bf307c(*param_3,param_1,param_2);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}



/* Address: 0x100b52d54 | FUN_100b52d54 */

void FUN_100b52d54(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_100bf3104(*param_3,param_1,param_2);
  return;
}



/* Address: 0x100b52d68 | FUN_100b52d68 */

void FUN_100b52d68(undefined8 param_1,undefined8 *param_2)

{
  FUN_100bf3048(*param_2,param_1);
  return;
}



/* Address: 0x100b52d78 | FUN_100b52d78 */

void FUN_100b52d78(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  sVar1 = _strlen(param_2);
  FUN_100bf318c(uVar2,param_1,param_2,sVar1);
  return;
}



/* Address: 0x100b52dbc | FUN_100b52dbc */

undefined4 FUN_100b52dbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  FUN_100bf333c(uVar1,param_1);
  FUN_100b52ef8(param_2,param_1);
  uVar2 = (undefined4)uVar1;
  if ((int)param_2 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Address: 0x100b52e0c | FUN_100b52e0c */

undefined4 FUN_100b52e0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  FUN_100bf32d4(uVar1,param_1);
  FUN_100b52ef8(param_2,param_1);
  uVar2 = (undefined4)uVar1;
  if ((int)param_2 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}



/* Address: 0x100b52e5c | FUN_100b52e5c */

void FUN_100b52e5c(undefined8 *param_1)

{
  FUN_100bf33a4(*param_1);
  if (0 < *(int *)(param_1 + 0x4e3)) {
    *(int *)(param_1 + 0x4e3) = *(int *)(param_1 + 0x4e3) + -1;
  }
  return;
}



/* Address: 0x100b52e90 | FUN_100b52e90 */

void FUN_100b52e90(undefined8 *param_1)

{
  FUN_100bf3470(*param_1);
  return;
}



/* Address: 0x100b52e98 | FUN_100b52e98 */

undefined8 FUN_100b52e98(void *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x2728) < param_2) {
    uVar1 = 2;
  }
  else {
    _memcpy(*(void **)(param_3 + 0x2720),param_1,(long)param_2);
    uVar1 = 0;
    *(long *)(param_3 + 0x2720) = *(long *)(param_3 + 0x2720) + (long)param_2;
    *(int *)(param_3 + 0x2728) = *(int *)(param_3 + 0x2728) - param_2;
  }
  return uVar1;
}



/* Address: 0x100b52ef8 | FUN_100b52ef8 */

bool FUN_100b52ef8(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2718);
  if (iVar1 < 100) {
    lVar2 = param_1 + (long)iVar1 * 100;
    if (param_2 == (char *)0x0) {
      *(undefined1 *)(lVar2 + 8) = 0;
    }
    else {
      _strlcpy((char *)(lVar2 + 8),param_2,100);
    }
    *(int *)(param_1 + 0x2718) = *(int *)(param_1 + 0x2718) + 1;
  }
  return iVar1 < 100;
}



/* Address: 0x100b52f54 | FUN_100b52f54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b52f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined *self;
  
  self = &_OBJC_CLASS___NSString;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04240((ID)self,param_3,&stack0x00000000);
  IVar1 = objc_stub::dictionaryWithObject_forKey_
                    ((ID)&_OBJC_CLASS___NSDictionary,IVar1,
                     *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10);
  IVar1 = objc_stub::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,param_1,param_2,IVar1);
  return IVar1;
}



/* Address: 0x100b53040 | SentrySpanId::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanId::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfd0e0((ID)&_OBJC_CLASS___NSUUID);
  IVar1 = objc_stub::FUN_100c05100(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b53090 | SentrySpanId::initWithUUID: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySpanId::initWithUUID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfd100(param_3);
  IVar1 = objc_stub::FUN_100c06700(IVar1);
  IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar1,&cf__,&cf___);
  IVar1 = objc_stub::substringToIndex_(IVar1,0x10);
  IVar1 = objc_stub::FUN_100c051c0(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b53148 | SentrySpanId::initWithValue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySpanId::initWithValue_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentrySpanId;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::length(param_3);
    if (IVar1 == 0x10) {
      IVar1 = objc_stub::FUN_100c06700(param_3);
      objc_stub::FUN_100c0e840(self,IVar1);
    }
    else {
      self = objc_stub::FUN_100c01800((ID)&objc::class_t::SentrySpanId);
    }
  }
  return self;
}



/* Address: 0x100b53218 | SentrySpanId::sentrySpanIdString */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentrySpanId::sentrySpanIdString(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"value");
  return self;
}



/* Address: 0x100b5321c | SentrySpanId::description */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentrySpanId::description(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"sentrySpanIdString");
  return self;
}



/* Address: 0x100b53220 | SentrySpanId::isEqual: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentrySpanId::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  
  if (param_3 == param_1) {
    bVar3 = 1;
  }
  else {
    IVar1 = objc_stub::class(param_1);
    IVar2 = objc_stub::class(param_3);
    if (IVar1 == IVar2) {
      IVar1 = objc_stub::value(param_1);
      IVar2 = objc_stub::value(param_3);
      IVar1 = objc_stub::isEqual_(IVar1,IVar2);
      bVar3 = (bool)IVar1;
    }
    else {
      bVar3 = 0;
    }
  }
  return bVar3;
}



/* Address: 0x100b532f4 | SentrySpanId::hash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentrySpanId::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::value(param_1);
  IVar1 = objc_stub::FUN_100c033c0(IVar1);
  return IVar1;
}



/* Address: 0x100b53330 | SentrySpanId::empty */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanId::empty(ID param_1,SEL param_2)

{
  class_t *self;
  
  if (DAT_1010e3078 == 0) {
    self = &objc::class_t::SentrySpanId;
    _objc_alloc();
    DAT_1010e3078 = objc_stub::FUN_100c051c0((ID)self,&cf_0000000000000000);
  }
  return DAT_1010e3078;
}



/* Address: 0x100b53380 | SentrySpanId::copyWithZone: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySpanId::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SentrySpanId;
  _objc_alloc();
  IVar1 = objc_stub::value(param_1);
  IVar1 = objc_stub::FUN_100c051c0((ID)self,IVar1);
  return IVar1;
}



/* Address: 0x100b533dc | SentrySpanId::value */

/* Function Stack Size: 0x10 bytes */

ID SentrySpanId::value(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b533e4 | SentrySpanId::setValue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanId::setValue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b533f0 | SentrySpanId::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanId::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b533fc | SentryCrashReportSink::initWithInAppLogic:crashWrapper:dispatchQueue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryCrashReportSink::initWithInAppLogic_crashWrapper_dispatchQueue_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashReportSink;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0c2a0(self,param_3);
    objc_stub::FUN_100c0b1e0(self,param_4);
    objc_stub::FUN_100c0b5e0(self,param_5);
  }
  return self;
}



/* Address: 0x100b534b8 | SentryCrashReportSink::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportSink::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  double extraout_d0;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  IVar4 = objc_stub::crashWrapper(param_1,param_3,param_4,(ulong)param_5);
  objc_stub::FUN_100c01780(IVar4);
  iVar3 = 0;
  bVar1 = false;
  bVar2 = true;
  if (0.0 < extraout_d0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(extraout_d0)) {
      bVar1 = extraout_d0 == 2.0;
      bVar2 = 2.0 <= extraout_d0;
    }
  }
  if (!bVar2 || bVar1) {
    FUN_100b3a1e0();
    if (iVar3 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                    ,0x32,&cf_Startupcrash_detected_);
    }
    objc_stub::FUN_100c0b500((ID)&objc::class_t::SentrySDKInternal,1);
    objc_stub::sendReports_onCompletion_(param_1,param_3,param_4);
    IVar4 = objc_stub::FUN_100c028c0((ID)&objc::class_t::SentrySDKInternal,0x4014000000000000);
    iVar3 = (int)IVar4;
    FUN_100b3a1c0();
    if (iVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                    ,0x39,&cf_Startupcrash_Finishedflushing_);
    }
  }
  else {
    IVar4 = objc_stub::FUN_100c01440(param_1);
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0xc2000000;
    local_68 = FUN_100b5363c;
    puStack_60 = &DAT_100f357b8;
    local_58 = param_1;
    local_50 = param_3;
    local_48 = param_4;
    objc_stub::dispatchAsyncWithBlock_(IVar4,&local_78);
  }
  return;
}



/* Address: 0x100b5363c | FUN_100b5363c */

void FUN_100b5363c(long param_1)

{
  objc_stub::sendReports_onCompletion_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
            );
  return;
}



/* Address: 0x100b5364c | FUN_100b5364c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b5364c(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),7);
  return;
}



/* Address: 0x100b53688 | SentryCrashReportSink::sendReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportSink::sendReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  int iVar1;
  undefined *self;
  ID IVar2;
  ID IVar3;
  class_t *self_00;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)self);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        self_00 = &objc::class_t::SentryCrashReportConverter;
        _objc_alloc();
        IVar4 = objc_stub::FUN_100c03820(param_1);
        IVar4 = objc_stub::FUN_100c04aa0((ID)self_00,uVar8,IVar4);
        IVar5 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
        IVar5 = objc_stub::getClient(IVar5);
        iVar1 = 0;
        if (IVar5 == 0) {
          FUN_100b3a1f0();
          if (iVar1 != 0) {
            FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                          ,0x51,&
                                cf_Crashreportswerefoundbutno_SentrySDK_currentHubgetClient_isset_CannotsendcrashreportstoSentry_Thisisprobablyamisconfiguration_makesureyousettheclientwith_SentrySDK_currentHubbindClient_beforecallingstartCrashHandlerWithError__
                         );
          }
        }
        else {
          IVar4 = objc_stub::FUN_100bfff80(IVar4);
          if (IVar4 != 0) {
            objc_stub::FUN_100c031a0(param_1,IVar4,uVar8,IVar2);
          }
        }
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar2,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b538c4 | SentryCrashReportSink::handleConvertedEvent:report:sentReports: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryCrashReportSink::handleConvertedEvent_report_sentReports_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  objc_stub::addObject_(param_5,param_4);
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100c04ae0((ID)self,IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(param_4,&cf_attachments);
  if (IVar2 != 0) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::objectForKeyedSubscript_(param_4,&cf_attachments);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_e8,0x10);
    if (IVar3 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(IVar2);
          }
          objc_stub::FUN_100bfd540(IVar1,*(undefined8 *)(lStack_128 + IVar5 * 8));
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_130,auStack_e8,0x10);
      } while (IVar3 != 0);
    }
  }
  objc_stub::FUN_100bfef40((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b53aa4 | SentryCrashReportSink::inAppLogic */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportSink::inAppLogic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b53aac | SentryCrashReportSink::setInAppLogic: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportSink::setInAppLogic_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b53ab8 | SentryCrashReportSink::crashWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportSink::crashWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b53ac0 | SentryCrashReportSink::setCrashWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportSink::setCrashWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b53acc | SentryCrashReportSink::dispatchQueue */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportSink::dispatchQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


