/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b59ab4 | SentryFileManagerHelper::deleteAppState */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteAppState(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100bfdca0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bfdca0(param_1);
  objc_stub::FUN_100c00e60(param_1,IVar2);
  IVar2 = objc_stub::FUN_100c080a0(param_1);
  objc_stub::FUN_100c00e60(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b59b5c | SentryFileManagerHelper::moveBreadcrumbsToPreviousBreadcrumbs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::moveBreadcrumbsToPreviousBreadcrumbs(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100bfe8c0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bfe8c0(param_1);
  IVar3 = objc_stub::FUN_100c080c0(param_1);
  objc_stub::FUN_100c06fc0(param_1,IVar2,IVar3);
  IVar2 = objc_stub::FUN_100bfe8e0(param_1);
  IVar3 = objc_stub::FUN_100c080e0(param_1);
  objc_stub::FUN_100c06fc0(param_1,IVar2,IVar3);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b59c44 | SentryFileManagerHelper::readPreviousBreadcrumbs */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readPreviousBreadcrumbs(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  long local_138 [3];
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = *(ID *)PTR____NSArray0___100ea9b00;
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::FUN_100c080c0(param_1);
  IVar3 = objc_stub::fileExistsAtPath_(IVar2,IVar3);
  IVar2 = IVar1;
  if ((int)IVar3 != 0) {
    IVar2 = objc_stub::FUN_100c080c0(param_1);
    IVar2 = objc_stub::FUN_100c0fb20((ID)&_OBJC_CLASS___NSString,IVar2,4,0);
    IVar3 = objc_stub::FUN_100c07120((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar2 = objc_stub::FUN_100bff8c0(IVar2,IVar3);
  }
  IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar4 = objc_stub::FUN_100c080e0(param_1);
  IVar3 = objc_stub::fileExistsAtPath_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar1 = objc_stub::FUN_100c080e0(param_1);
    IVar1 = objc_stub::FUN_100c0fb20((ID)&_OBJC_CLASS___NSString,IVar1,4,0);
    IVar3 = objc_stub::FUN_100c07120((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar1 = objc_stub::FUN_100bff8c0(IVar1,IVar3);
  }
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::count(IVar2);
  if ((IVar4 != 0) || (IVar4 = objc_stub::count(IVar1), IVar4 != 0)) {
    IVar5 = objc_stub::count(IVar2);
    IVar6 = objc_stub::count(IVar1);
    IVar4 = IVar1;
    if (IVar6 < IVar5) {
      IVar4 = IVar2;
      IVar2 = IVar1;
    }
    IVar2 = objc_stub::FUN_100bfdfc0(IVar4,IVar2);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_138[2] = 0;
    local_138[1] = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (IVar2,local_138 + 1,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar8 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar8) {
            _objc_enumerationMutation(IVar2);
          }
          IVar5 = objc_stub::dataUsingEncoding_(*(ID *)(local_138[2] + IVar4 * 8),4);
          if (IVar5 == 0) {
            FUN_100b3a1e0();
            if ((int)IVar5 != 0) {
              FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                            ,0x1cd,&cf_Receivednildatafrombreadcrumbfile_);
            }
          }
          else {
            local_138[0] = 0;
            IVar5 = objc_stub::JSONObjectWithData_options_error_
                              ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar5,0,local_138);
            if (local_138[0] == 0) {
              objc_stub::addObject_(IVar3,IVar5);
            }
            else {
              lVar7 = local_138[0];
              FUN_100b3a1f0();
              if ((int)lVar7 != 0) {
                FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                              ,0x1d7,&cf_Errordeserializingbreadcrumb___);
              }
            }
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,local_138 + 1,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar3;
}



/* Address: 0x100b5a060 | SentryFileManagerHelper::readTimezoneOffset */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readTimezoneOffset(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  
  IVar2 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x1e5,&cf_Readingtimezoneoffset);
  }
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::FUN_100c10720(param_1);
  _objc_sync_enter();
  IVar4 = objc_stub::FUN_100c10720(param_1);
  IVar2 = objc_stub::FUN_100bffdc0(IVar2,IVar4);
  _objc_sync_exit(IVar3);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x1ec,&cf_Notimezoneoffsetfound_);
    }
    IVar2 = 0;
  }
  else {
    puVar5 = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar2 = objc_stub::initWithData_encoding_((ID)puVar5,IVar2,4);
    puVar5 = &_OBJC_CLASS___NSNumberFormatter;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar5);
    objc_stub::setNumberStyle_(IVar3,1);
    IVar2 = objc_stub::FUN_100c07240(IVar3,IVar2);
  }
  return IVar2;
}



/* Address: 0x100b5a1d4 | SentryFileManagerHelper::storeTimezoneOffset: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeTimezoneOffset_(ID param_1,SEL param_2,long_long param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__ld);
  IVar3 = IVar2;
  FUN_100b3a1c0();
  if ((int)IVar3 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x1fb,&cf_Persistingtimezoneoffset___);
  }
  IVar3 = objc_stub::FUN_100c10720(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::dataUsingEncoding_(IVar2,4);
  if (IVar2 == 0) {
    FUN_100b3a1f0();
    if ((int)IVar2 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x200,&cf_Failedtoconverttimezoneoffsettodata_);
    }
  }
  else {
    IVar4 = objc_stub::FUN_100c10720(param_1);
    IVar2 = objc_stub::FUN_100c115e0(param_1,IVar2,IVar4);
    iVar1 = 0;
    if (((IVar2 & 1) == 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x206,&cf_Failedtostoretimezoneoffset_);
    }
  }
  _objc_sync_exit(IVar3);
  return;
}



/* Address: 0x100b5a32c | SentryFileManagerHelper::deleteTimezoneOffset */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteTimezoneOffset(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c10720(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c10720(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b5a3ac | SentryFileManagerHelper::storeAppHangEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeAppHangEvent_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::serialize(param_3);
  IVar2 = objc_stub::FUN_100c009e0((ID)&objc::class_t::_TtC6Sentry24SentrySerializationSwift,IVar2);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x218,&cf_Failedtostoreapphangevent_becauseofanerrorinserialization_);
    }
  }
  else {
    IVar3 = objc_stub::FUN_100bfdc80(param_1);
    _objc_sync_enter();
    IVar4 = objc_stub::FUN_100bfdc80(param_1);
    objc_stub::FUN_100c115e0(param_1,IVar2,IVar4);
    _objc_sync_exit(IVar3);
  }
  return;
}



/* Address: 0x100b5a4b8 | SentryFileManagerHelper::readAppHangEvent */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readAppHangEvent(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::FUN_100bfdc80(param_1);
  _objc_sync_enter();
  IVar4 = objc_stub::FUN_100bfdc80(param_1);
  IVar2 = objc_stub::FUN_100bffdc0(IVar2,IVar4);
  _objc_sync_exit(IVar3);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x229,&cf_Noapphangeventfound_);
    }
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::FUN_100c00cc0((ID)&objc::class_t::_TtC6Sentry18SentryEventDecoder,IVar2);
  }
  return IVar2;
}



/* Address: 0x100b5a5c0 | SentryFileManagerHelper::appHangEventExists */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryFileManagerHelper::appHangEventExists(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::FUN_100bfdc80(param_1);
  _objc_sync_enter();
  IVar3 = objc_stub::FUN_100bfdc80(param_1);
  IVar1 = objc_stub::fileExistsAtPath_(IVar1,IVar3);
  _objc_sync_exit(IVar2);
  return (bool)IVar1;
}



/* Address: 0x100b5a670 | SentryFileManagerHelper::deleteAppHangEvent */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteAppHangEvent(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100bfdc80(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bfdc80(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b5a6f0 | SentryFileManagerHelper::createDirectoryAtPath:withError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryFileManagerHelper::createDirectoryAtPath_withError_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar1 = objc_stub::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    (IVar1,param_3,1,0,param_4);
  return (bool)IVar1;
}



/* Address: 0x100b5a768 | SentryFileManagerHelper::readDataFromPath:error: */

/* Function Stack Size: 0x20 bytes */

ID SentryFileManagerHelper::readDataFromPath_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::dataWithContentsOfFile_options_error_
                    ((ID)&_OBJC_CLASS___NSData,param_3,0,param_4);
  return IVar1;
}



/* Address: 0x100b5a77c | SentryFileManagerHelper::writeData:toPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryFileManagerHelper::writeData_toPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ulong uVar2;
  ID IVar3;
  bool bVar4;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar2 = objc_stub::FUN_100c0a040(param_1);
  local_48 = 0;
  FUN_100b5835c(uVar2,&local_48);
  iVar1 = 0;
  if ((uVar2 & 1) == 0) {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x254,&cf_FileI_Onotavailableatpath_____);
    }
    bVar4 = 0;
  }
  else {
    local_50 = local_48;
    bVar4 = 1;
    IVar3 = objc_stub::FUN_100c11620(param_3,param_4,1,&local_50);
    iVar1 = 0;
    if ((IVar3 & 1) == 0) {
      FUN_100b3a1f0();
      if (iVar1 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,600,&cf_Failedtowritedatatopath_____);
      }
      bVar4 = 0;
    }
  }
  return bVar4;
}



/* Address: 0x100b5a8b4 | SentryFileManagerHelper::deleteAllFolders */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteAllFolders(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0a040(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar1);
  return;
}



/* Address: 0x100b5a8f0 | SentryFileManagerHelper::removeFileAtPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::removeFileAtPath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_sync_enter();
  FUN_100b58454(param_3);
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b5a958 | SentryFileManagerHelper::allFilesInFolder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManagerHelper::allFilesInFolder_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  long lVar4;
  long local_48;
  ID IVar3;
  
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::fileExistsAtPath_(IVar2,param_3);
  iVar1 = (int)IVar3;
  if ((IVar3 & 1) == 0) {
    FUN_100b3a1d0();
    if (iVar1 != 0) {
      FUN_100b3a248("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x26e,&cf_Returningemptyfileslist_asfolderdoesn_texistatpath___);
    }
    IVar2 = *(ID *)PTR____NSArray0___100ea9b00;
  }
  else {
    local_48 = 0;
    IVar2 = objc_stub::contentsOfDirectoryAtPath_error_(IVar2,param_3,&local_48);
    if (local_48 == 0) {
      IVar2 = objc_stub::FUN_100c0ef40(IVar2,"localizedCaseInsensitiveCompare:");
    }
    else {
      lVar4 = local_48;
      FUN_100b3a1f0();
      if ((int)lVar4 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x275,&cf_Couldn_tloadfilesinfolder_____);
      }
      IVar2 = *(ID *)PTR____NSArray0___100ea9b00;
    }
  }
  return IVar2;
}



/* Address: 0x100b5aa9c | SentryFileManagerHelper::isDirectory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryFileManagerHelper::isDirectory_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  byte local_31;
  
  local_31 = 0;
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar1 = objc_stub::fileExistsAtPath_isDirectory_(IVar1,param_3,&local_31);
  return (uint)IVar1 & (uint)local_31;
}



/* Address: 0x100b5ab18 | FUN_100b5ab18 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b5ab18(void)

{
  if (DAT_1010e30b0 != -1) {
    FUN_100b5c114();
  }
  return DAT_1010e30a8;
}



/* Address: 0x100b5ab48 | FUN_100b5ab48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

undefined8 FUN_100b5ab48(void)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = 0xd;
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  IVar2 = objc_stub::firstObject(IVar2);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x293,&cf_Nocachesdirectorylocationreported_);
    }
  }
  else {
    FUN_100b5ac48();
    if (IVar2 == 0) {
      FUN_100b3a1e0();
      if ((int)IVar2 != 0) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x29c,&cf_Failedtogetscopedstaticcachesdirectory_);
      }
    }
    else {
      iVar1 = 0x10e30a8;
      DAT_1010e30a8 = IVar2;
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x2a0,&cf_Usingstaticcachedirectory___);
      }
    }
  }
  return 0;
}



/* Address: 0x100b5ac48 | FUN_100b5ac48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b5ac48(undefined8 param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar1 = objc_stub::environment(IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_APP_SANDBOX_CONTAINER_ID);
  IVar2 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = objc_stub::bundleIdentifier(IVar2);
  IVar3 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar3 = objc_stub::FUN_100c02040(IVar3);
  IVar3 = objc_stub::lastPathComponent(IVar3);
  FUN_100b5ad8c(param_1,IVar1 != 0,IVar2,IVar3);
  return param_1;
}



/* Address: 0x100b5ad8c | FUN_100b5ad8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b5ad8c(ID param_1,int param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  
  if (param_2 != 0) {
    return param_1;
  }
  IVar2 = param_4;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x2d3,&cf_Appisnotsandboxed_extendingdefaultcachedirectorywithbundleidentifier_);
  }
  if (param_3 == 0) {
    FUN_100b3a1e0();
    IVar2 = param_4;
    if ((int)param_3 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x2d6,&cf_Nobundleidentifierfound_usingmainbundleexecutablename_);
    }
  }
  else {
    IVar2 = objc_stub::length(param_3);
    if (IVar2 != 0) goto LAB_100b5ae7c;
    FUN_100b3a1e0();
    if ((int)IVar2 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x2da,&cf_Bundleidentifierexistsbutiszerolength_usingmainbundleexecutablename_)
      ;
    }
    IVar2 = 0;
  }
  iVar1 = (int)IVar2;
  param_3 = param_4;
  if (param_4 == 0) {
    FUN_100b3a1f0();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x2e3,&cf_Nobundleidentifierfound_cannotcreatecachedirectory_);
    return 0;
  }
LAB_100b5ae7c:
  IVar2 = objc_stub::length(param_3);
  if (IVar2 == 0) {
    FUN_100b3a1f0();
    if ((int)IVar2 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x2e9,&cf_Executablenamewaszerolength_);
    }
    return 0;
  }
  IVar2 = objc_stub::stringByAppendingPathComponent_(param_1,param_3);
  return IVar2;
}



/* Address: 0x100b5af28 | FUN_100b5af28 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b5af28(void)

{
  if (DAT_1010e30c0 != -1) {
    FUN_100b5c128();
  }
  return DAT_1010e30b8;
}



/* Address: 0x100b5af58 | FUN_100b5af58 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b5af58(ID param_1)

{
  FUN_100b5ab18();
  if (param_1 == 0) {
    FUN_100b3a1e0();
    if ((int)param_1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x2f7,&cf_Nocachesdirectorylocationreported_);
    }
  }
  else {
    DAT_1010e30b8 = objc_stub::stringByAppendingPathComponent_(param_1,&cf_io_sentry);
  }
  return 0;
}



/* Address: 0x100b5afd8 | FUN_100b5afd8 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8 FUN_100b5afd8(void)

{
  if (DAT_1010e30c8 != -1) {
    FUN_100b5c13c();
  }
  return DAT_1010583b8;
}



/* Address: 0x100b5b008 | FUN_100b5b008 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b5b008(ID param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  FUN_100b5af28();
  if (param_1 == 0) {
    FUN_100b3a1c0();
    if ((int)param_1 == 0) {
      return 0;
    }
    pcVar5 = &cf_Nolocationavailableforlaunchprofilingconfig_;
    uVar4 = 0x318;
  }
  else {
    IVar2 = objc_stub::stringByAppendingPathComponent_(param_1,&cf_profileLaunch);
    IVar3 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,IVar2);
    IVar2 = DAT_1010583b8;
    iVar1 = 0;
    DAT_1010583b8 = IVar3;
    FUN_100b3a1c0(IVar2);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar5 = &cf_LaunchprofileconfigfileURL___;
    uVar4 = 0x31d;
  }
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                ,uVar4,pcVar5);
  return 0;
}



/* Address: 0x100b5b0e4 | FUN_100b5b0e4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100b5b0e4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  FUN_100b5af28();
  if (param_1 == 0) {
    FUN_100b3a1e0();
    if ((int)param_1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x327,&cf_Nolocationavailabletowritealaunchprofilingconfig_);
    }
    param_1 = 0;
  }
  else {
    local_38 = 0;
    FUN_100b5835c(param_1,&local_38);
    if (((param_1 & 1) == 0) && (uVar1 = local_38, FUN_100b3a1f0(), (int)uVar1 != 0)) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x32c,&cf_Can_tcreatebasepathtostorelaunchprofileconfigfile___);
    }
  }
  return param_1;
}



/* Address: 0x100b5b1a4 | FUN_100b5b1a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b5b1a4(ID param_1)

{
  ID IVar1;
  ID self;
  long lVar2;
  long local_48;
  
  FUN_100b5afd8();
  if (param_1 == 0) {
    FUN_100b3a1c0();
    if ((int)param_1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x337,&cf_NoURLavailabletoretrievelaunchprofileconfigs_);
    }
  }
  else {
    IVar1 = objc_stub::path(param_1);
    if (IVar1 == 0) {
      FUN_100b3a1c0();
      if ((int)IVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x33c,&cf_Nopathavailabletoretrievelaunchprofileconfigs_);
      }
    }
    else {
      self = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar1 = objc_stub::fileExistsAtPath_(self,IVar1);
      if ((int)IVar1 != 0) {
        local_48 = 0;
        IVar1 = objc_stub::FUN_100c01260((ID)&_OBJC_CLASS___NSDictionary,param_1,&local_48);
        if (local_48 != 0) {
          lVar2 = local_48;
          FUN_100b3a1f0();
          if ((int)lVar2 != 0) {
            FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                          ,0x34b,&cf_Encounterederrortryingtoretrieveapplaunchprofileconfig___);
          }
          return 0;
        }
        return IVar1;
      }
    }
  }
  return 0;
}



/* Address: 0x100b5b310 | FUN_100b5b310 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100b5b310(ID param_1)

{
  bool bVar1;
  int iVar2;
  ID self;
  char *pcVar3;
  
  FUN_100b5afd8();
  if (param_1 == 0) {
    FUN_100b3a1c0();
    if ((int)param_1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x357,&cf_NoURLavailabletocheckforlaunchprofileconfigs_);
    }
    bVar1 = false;
  }
  else {
    self = objc_stub::path(param_1);
    if (self == 0) {
      FUN_100b3a1c0();
      if ((int)self != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x35c,&cf_Nopathavailabletocheckforlaunchprofileconfigs_);
      }
      bVar1 = false;
    }
    else {
      _objc_retainAutorelease();
      pcVar3 = (char *)objc_stub::UTF8String(self);
      iVar2 = _access(pcVar3,0);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}



/* Address: 0x100b5b3dc | FUN_100b5b3dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b5b3dc(ID param_1)

{
  ulong uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  IVar2 = param_1;
  FUN_100b5b0e4();
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1c0();
    if ((int)IVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x367,&cf_Notwritinglaunchprofilingconfig_directorycouldnotbecreated_);
    }
  }
  else {
    FUN_100b5afd8();
    if (IVar2 == 0) {
      FUN_100b3a1f0();
      if ((int)IVar2 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x36c,&cf_FailedtoconstructtheURLtowritelaunchprofileconfigs_);
      }
    }
    else {
      uVar1 = IVar2;
      FUN_100b3a1c0();
      if ((int)uVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x36f,&cf_Writinglaunchprofilingconfigfileaturl__);
      }
      local_38 = 0;
      IVar2 = objc_stub::FUN_100c11640(param_1,IVar2,&local_38);
      if (((IVar2 & 1) == 0) && (uVar3 = local_38, FUN_100b3a1e0(), (int)uVar3 != 0)) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x373,&cf_Failedtowritelaunchprofileconfigfile____);
      }
    }
  }
  return 0;
}



/* Address: 0x100b5b4f8 | FUN_100b5b4f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b5b4f8(ID param_1)

{
  ID IVar1;
  ID IVar2;
  
  FUN_100b5afd8();
  if (param_1 == 0) {
    FUN_100b3a1f0();
    if ((int)param_1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x37b,&cf_FailedtoconstructtheURLtoremovelaunchprofileconfigs_);
    }
  }
  else {
    IVar1 = objc_stub::path(param_1);
    if (IVar1 == 0) {
      FUN_100b3a1f0();
      if ((int)IVar1 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0x380,&cf_Failedtoconstructthepathtoremovelaunchprofileconfigs_);
      }
    }
    else {
      IVar2 = IVar1;
      FUN_100b3a1c0();
      if ((int)IVar2 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,900,&cf_Removinglaunchprofilingconfigfileatpath___);
      }
      FUN_100b58454(IVar1);
    }
  }
  return 0;
}



/* Address: 0x100b5b5c4 | SentryFileManagerHelper::storeSessionData:sessionFilePath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryFileManagerHelper::storeSessionData_sessionFilePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = param_4;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x38d,&cf_Writingsession___);
  }
  IVar2 = objc_stub::FUN_100c007c0(param_1);
  _objc_sync_enter();
  IVar3 = objc_stub::FUN_100c115e0(param_1,param_3,param_4);
  iVar1 = (int)IVar3;
  if (((IVar3 & 1) == 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x390,&cf_Failedtowritesessiondata_);
  }
  _objc_sync_exit(IVar2);
  return;
}



/* Address: 0x100b5b6ac | SentryFileManagerHelper::deleteSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::deleteSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = param_3;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x397,&cf_Deletingsession___);
  }
  IVar1 = objc_stub::FUN_100c007c0(param_1);
  _objc_sync_enter();
  objc_stub::FUN_100c08fc0(param_1,param_3);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b5b754 | SentryFileManagerHelper::readSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManagerHelper::readSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Readingfromsession___);
  objc_stub::FUN_100c06660((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,IVar1,1);
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::FUN_100c007c0(param_1);
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_100bffdc0(IVar1,param_3);
  if (IVar1 == 0) {
    IVar3 = IVar1;
    FUN_100b3a1e0();
    if ((int)IVar3 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x3a7,&cf_Nodatafoundat__);
    }
    _objc_sync_exit(IVar2);
  }
  else {
    _objc_sync_exit(IVar2);
  }
  return IVar1;
}



/* Address: 0x100b5b89c | SentryFileManagerHelper::readAppStateFrom: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManagerHelper::readAppStateFrom_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar1 = objc_stub::FUN_100bffdc0(IVar1,param_3);
  if ((IVar1 == 0) && (IVar2 = IVar1, FUN_100b3a1e0(), (int)IVar2 != 0)) {
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x3b5,&cf_Noappstatedatafoundat__);
  }
  return IVar1;
}



/* Address: 0x100b5b94c | SentryFileManagerHelper::deleteAppStateFrom: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryFileManagerHelper::deleteAppStateFrom_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"removeFileAtPath:");
  return self;
}



/* Address: 0x100b5b950 | SentryFileManagerHelper::moveState:toPreviousState: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryFileManagerHelper::moveState_toPreviousState_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_48;
  
  IVar1 = param_4;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x3c2,&cf_Movingstate__toprevious___);
  }
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  objc_stub::FUN_100c08fc0(param_1,param_4);
  local_48 = 0;
  IVar1 = objc_stub::FUN_100c06f80(IVar1,param_3,param_4,&local_48);
  if (((((IVar1 & 1) == 0) && (local_48 != 0)) && (IVar1 = objc_stub::code(local_48), IVar1 != 4))
     && (FUN_100b3a1f0(), (int)IVar1 != 0)) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x3cc,&cf_Failedtomove__topreviousstatefile___);
  }
  return;
}



/* Address: 0x100b5ba6c | SentryFileManagerHelper::deleteOldEnvelopesFromAllSentryPaths: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::deleteOldEnvelopesFromAllSentryPaths_
               (ID param_1,SEL param_2,double param_3)

{
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::basePath(param_1);
  IVar1 = objc_stub::FUN_100bfda20(param_1,IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::FUN_100c02e00(param_1,*(undefined8 *)(lStack_128 + IVar5 * 8));
        objc_stub::FUN_100c00f40(param_1,param_3,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_e8,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5bbc0 | SentryFileManagerHelper::deleteOldEnvelopesFromPath:currentTime: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryFileManagerHelper::deleteOldEnvelopesFromPath_currentTime_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  int iVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  double extraout_d0;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  self = objc_stub::FUN_100bfda20(param_1,param_3);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_150,auStack_110,0x10);
  if (IVar2 != 0) {
    lVar8 = *local_140;
    uVar6 = *(undefined8 *)PTR__NSFileCreationDate_100ea7ba0;
    do {
      IVar7 = 0;
      do {
        if (*local_140 != lVar8) {
          _objc_enumerationMutation(self);
        }
        IVar3 = objc_stub::stringByAppendingPathComponent_
                          (param_3,*(undefined8 *)(lStack_148 + IVar7 * 8));
        IVar4 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
        IVar4 = objc_stub::attributesOfItemAtPath_error_(IVar4,IVar3,0);
        if ((IVar4 == 0) || (IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,uVar6), IVar5 == 0))
        {
          iVar1 = 0;
          FUN_100b3a1e0();
          if (iVar1 != 0) {
            FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                          ,999,&cf_CouldnotgetNSFileCreationDatefrom__);
          }
        }
        else {
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar6);
          objc_stub::timeIntervalSince1970(IVar4);
          if (7776000.0 < param_4 - extraout_d0) {
            IVar3 = objc_stub::FUN_100c08fc0(param_1,IVar3);
            iVar1 = (int)IVar3;
            FUN_100b3a1c0();
            if (iVar1 != 0) {
              FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                            ,0x3ef,&cf_Removedenvelopeatpath__becauseitwasolderthan90days);
            }
          }
        }
        IVar7 = IVar7 + 1;
      } while (IVar2 != IVar7);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_150,auStack_110,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5be10 | SentryFileManagerHelper::uniqueAscendingJsonName: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManagerHelper::uniqueAscendingJsonName_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c00660(param_1);
  objc_stub::FUN_100c0b2c0(param_1,IVar1 + 1);
  IVar1 = objc_stub::FUN_100bfd0e0((ID)&_OBJC_CLASS___NSUUID);
  objc_stub::FUN_100bfd100(IVar1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__f__05lu____json);
  return IVar1;
}



/* Address: 0x100b5bec4 | SentryFileManagerHelper::clearDiskState */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::clearDiskState(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::basePath(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar1);
  return;
}



/* Address: 0x100b5bf00 | SentryFileManagerHelper::basePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::basePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b5bf08 | SentryFileManagerHelper::setBasePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b5bf10 | SentryFileManagerHelper::sentryPath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::sentryPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b5bf18 | SentryFileManagerHelper::setSentryPath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setSentryPath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b5bf20 | SentryFileManagerHelper::breadcrumbsFilePathOne */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::breadcrumbsFilePathOne(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b5bf28 | SentryFileManagerHelper::setBreadcrumbsFilePathOne: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setBreadcrumbsFilePathOne_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b5bf30 | SentryFileManagerHelper::breadcrumbsFilePathTwo */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::breadcrumbsFilePathTwo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b5bf38 | SentryFileManagerHelper::setBreadcrumbsFilePathTwo: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setBreadcrumbsFilePathTwo_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b5bf40 | SentryFileManagerHelper::previousBreadcrumbsFilePathOne */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::previousBreadcrumbsFilePathOne(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b5bf48 | SentryFileManagerHelper::setPreviousBreadcrumbsFilePathOne: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setPreviousBreadcrumbsFilePathOne_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b5bf50 | SentryFileManagerHelper::previousBreadcrumbsFilePathTwo */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::previousBreadcrumbsFilePathTwo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b5bf58 | SentryFileManagerHelper::setPreviousBreadcrumbsFilePathTwo: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setPreviousBreadcrumbsFilePathTwo_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b5bf60 | SentryFileManagerHelper::envelopesPath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::envelopesPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b5bf68 | SentryFileManagerHelper::setEnvelopesPath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setEnvelopesPath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b5bf70 | SentryFileManagerHelper::maxEnvelopes */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryFileManagerHelper::maxEnvelopes(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}



/* Address: 0x100b5bf78 | SentryFileManagerHelper::setMaxEnvelopes: */

/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setMaxEnvelopes_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b5bf80 | SentryFileManagerHelper::timezoneOffsetFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::timezoneOffsetFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b5bf88 | SentryFileManagerHelper::setTimezoneOffsetFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setTimezoneOffsetFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b5bf90 | SentryFileManagerHelper::eventsPath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::eventsPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b5bf98 | SentryFileManagerHelper::setEventsPath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setEventsPath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}



/* Address: 0x100b5bfa0 | SentryFileManagerHelper::appStateFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::appStateFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x100b5bfa8 | SentryFileManagerHelper::setAppStateFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setAppStateFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b5bfb0 | SentryFileManagerHelper::appHangEventFilePath */

/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::appHangEventFilePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



/* Address: 0x100b5bfb8 | SentryFileManagerHelper::setAppHangEventFilePath: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::setAppHangEventFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}


