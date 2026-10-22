/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b4b274 | FUN_100b4b274 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b4b274(ID param_1,ID param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  size_t sVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  ID IVar9;
  ulong uVar10;
  long lVar11;
  double extraout_d0;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char acStack_185 [21];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _objc_retainAutorelease();
  IVar2 = objc_stub::UTF8String(param_3);
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
  if ((int)IVar3 == 0) {
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
    IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
    if ((int)IVar3 == 0) {
      IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
      IVar4 = objc_stub::isKindOfClass_(param_2,IVar3);
      IVar3 = param_4;
      if ((int)IVar4 == 0) {
        IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
        IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
        if ((int)IVar4 == 0) {
          IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSNull);
          IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
          if ((int)IVar3 == 0) {
            IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSDate);
            IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
            if ((int)IVar3 == 0) {
              IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
              IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
              if ((int)IVar3 == 0) {
                objc_stub::class(param_2);
                pcVar8 = &cf_SentryCrashJSONCodecObjC;
                FUN_100b52f54(&cf_SentryCrashJSONCodecObjC,0,&cf_Couldnotdeterminetypeof__);
                objc_stub::setError_(param_1,pcVar8);
                IVar3 = 5;
              }
              else {
                _objc_retainAutorelease();
                IVar3 = objc_stub::bytes(param_2);
                IVar4 = objc_stub::length(param_2);
                FUN_100bf3238(param_4,IVar2,IVar3,IVar4);
                IVar3 = param_4;
              }
            }
            else {
              objc_stub::timeIntervalSince1970(param_2);
              FUN_100b4d87c((long)extraout_d0,acStack_185);
              sVar5 = _strnlen(acStack_185,0x14);
              IVar4 = objc_stub::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,acStack_185,sVar5);
              IVar3 = IVar4;
              _objc_retainAutorelease();
              IVar3 = objc_stub::bytes(IVar3);
              IVar4 = objc_stub::length(IVar4);
              FUN_100bf318c(param_4,IVar2,IVar3,IVar4);
              IVar3 = param_4;
            }
          }
          else {
            FUN_100bf3048(param_4,IVar2);
            IVar3 = param_4;
          }
        }
        else {
          FUN_100bf333c(param_4,IVar2);
          if ((int)IVar3 == 0) {
            IVar2 = objc_stub::FUN_100bfdac0(param_2);
            IVar3 = objc_stub::count(IVar2);
            if (IVar3 < 2) {
              bVar1 = true;
            }
            else {
              uVar10 = 1;
              bVar1 = true;
              do {
                IVar3 = objc_stub::FUN_100c07480(IVar2,uVar10 - 1);
                IVar3 = objc_stub::class(IVar3);
                IVar4 = objc_stub::FUN_100c07480(IVar2,uVar10);
                IVar4 = objc_stub::class(IVar4);
                bVar1 = (bool)(IVar3 == IVar4 & bVar1);
                uVar10 = uVar10 + 1;
                IVar3 = objc_stub::count(IVar2);
              } while (uVar10 < IVar3);
            }
            if ((*(char *)(param_1 + 9) == '\x01') && (bVar1)) {
              IVar2 = objc_stub::FUN_100c0ef40(IVar2,"compare:");
            }
            uStack_1e8 = 0;
            local_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            lStack_208 = 0;
            local_210 = 0;
            uStack_1f8 = 0;
            local_200 = (long *)0x0;
            IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar2,&local_210,auStack_170,0x10);
            if (IVar4 != 0) {
              lVar11 = *local_200;
              do {
                IVar9 = 0;
                do {
                  if (*local_200 != lVar11) {
                    _objc_enumerationMutation(IVar2);
                  }
                  IVar3 = *(ID *)(lStack_208 + IVar9 * 8);
                  IVar6 = objc_stub::objectForKeyedSubscript_(param_2,IVar3);
                  IVar7 = objc_stub::description(IVar3);
                  IVar3 = param_1;
                  FUN_100b4b274(param_1,IVar6,IVar7,param_4);
                  if ((int)IVar3 != 0) goto LAB_100b4b414;
                  IVar9 = IVar9 + 1;
                } while (IVar4 != IVar9);
                IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                                  (IVar2,&local_210,auStack_170,0x10);
              } while (IVar4 != 0);
            }
            FUN_100bf33a4(param_4);
            IVar3 = param_4;
          }
        }
      }
      else {
        FUN_100bf32d4(param_4,IVar2);
        if ((int)IVar3 == 0) {
          uStack_1a8 = 0;
          local_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          lStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          local_1c0 = (long *)0x0;
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_2,&local_1d0,auStack_f0,0x10);
          if (IVar2 != 0) {
            lVar11 = *local_1c0;
            do {
              IVar4 = 0;
              do {
                if (*local_1c0 != lVar11) {
                  _objc_enumerationMutation(param_2);
                }
                IVar3 = param_1;
                FUN_100b4b274(param_1,*(undefined8 *)(lStack_1c8 + IVar4 * 8),0,param_4);
                if ((int)IVar3 != 0) goto LAB_100b4b414;
                IVar4 = IVar4 + 1;
              } while (IVar2 != IVar4);
              IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                                (param_2,&local_1d0,auStack_f0,0x10);
            } while (IVar2 != 0);
          }
          FUN_100bf33a4(param_4);
          IVar3 = param_4;
        }
      }
    }
    else {
      IVar3 = param_2;
      _CFNumberGetType();
      if (IVar3 < 0x11) {
        if ((1L << (IVar3 & 0x3f) & 0x13060U) != 0) {
          objc_stub::doubleValue(param_2);
          FUN_100bf2ecc(param_4,IVar2);
          IVar3 = param_4;
          goto LAB_100b4b414;
        }
        if (IVar3 == 7) {
          IVar3 = objc_stub::boolValue(param_2);
          FUN_100bf2e7c(param_4,IVar2,IVar3);
          IVar3 = param_4;
          goto LAB_100b4b414;
        }
      }
      IVar3 = objc_stub::longLongValue(param_2);
      FUN_100bf307c(param_4,IVar2,IVar3);
      IVar3 = param_4;
    }
  }
  else {
    IVar4 = objc_stub::dataUsingEncoding_(param_2,4);
    IVar3 = IVar4;
    _objc_retainAutorelease();
    IVar3 = objc_stub::bytes(IVar3);
    IVar4 = objc_stub::length(IVar4);
    FUN_100bf318c(param_4,IVar2,IVar3,IVar4);
    IVar3 = param_4;
    if ((int)param_4 == 1) {
      pcVar8 = &cf_SentryCrashJSONCodecObjC;
      FUN_100b52f54(&cf_SentryCrashJSONCodecObjC,0,&cf_Invalidcharacterin__);
      objc_stub::setError_(param_1,pcVar8);
    }
  }
LAB_100b4b414:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar3;
}



/* Address: 0x100b4b8dc | SentryCrashJSONCodec::decode:options:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryCrashJSONCodec::decode_options_error_
             (ID param_1,SEL param_2,ID param_3,int param_4,ID *param_5)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  undefined1 local_54 [4];
  
  self = objc_stub::FUN_100bff5e0(param_1,0,(ulong)param_4);
  IVar1 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,0x249f1);
  IVar4 = param_3;
  _objc_retainAutorelease();
  IVar2 = objc_stub::bytes(IVar4);
  IVar3 = objc_stub::length(param_3);
  IVar4 = IVar1;
  _objc_retainAutorelease();
  IVar4 = objc_stub::mutableBytes(IVar4);
  IVar1 = objc_stub::length(IVar1);
  IVar5 = objc_stub::FUN_100bfeca0(self);
  FUN_100bf34a4(IVar2,IVar3,IVar4,IVar1,IVar5,self,local_54);
  if (((int)IVar2 != 0) && (IVar4 = objc_stub::FUN_100c01e20(self), IVar4 == 0)) {
    FUN_100b56a9c();
    pcVar6 = &cf_SentryCrashJSONCodecObjC;
    FUN_100b52f54(&cf_SentryCrashJSONCodecObjC,0,&cf__s_offset_d_);
    objc_stub::setError_(self,pcVar6);
  }
  if (param_5 != (ID *)0x0) {
    IVar4 = objc_stub::FUN_100c01e20(self);
    *param_5 = IVar4;
  }
  if (((param_4 >> 2 & 1) == 0) && ((int)IVar2 != 0)) {
    IVar4 = 0;
  }
  else {
    IVar4 = objc_stub::FUN_100c108a0(self);
  }
  return IVar4;
}



/* Address: 0x100b4ba94 | SentryCrashJSONCodec::topLevelContainer */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashJSONCodec::topLevelContainer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b4ba9c | SentryCrashJSONCodec::setTopLevelContainer: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setTopLevelContainer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b4baa8 | SentryCrashJSONCodec::currentContainer */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashJSONCodec::currentContainer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b4bab0 | SentryCrashJSONCodec::setCurrentContainer: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setCurrentContainer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b4bab8 | SentryCrashJSONCodec::containerStack */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashJSONCodec::containerStack(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b4bac0 | SentryCrashJSONCodec::setContainerStack: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setContainerStack_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b4bacc | SentryCrashJSONCodec::callbacks */

/* Function Stack Size: 0x10 bytes */

SentryCrashJSONDecodeCallbacks * SentryCrashJSONCodec::callbacks(ID param_1,SEL param_2)

{
  return *(SentryCrashJSONDecodeCallbacks **)(param_1 + 0x28);
}



/* Address: 0x100b4bad4 | SentryCrashJSONCodec::setCallbacks: */

/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setCallbacks_
               (ID param_1,SEL param_2,SentryCrashJSONDecodeCallbacks *param_3)

{
  *(SentryCrashJSONDecodeCallbacks **)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b4badc | SentryCrashJSONCodec::serializedData */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashJSONCodec::serializedData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b4bae4 | SentryCrashJSONCodec::setSerializedData: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setSerializedData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b4baf0 | SentryCrashJSONCodec::error */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashJSONCodec::error(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b4baf8 | SentryCrashJSONCodec::setError: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashJSONCodec::setError_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b4bb04 | SentryCrashJSONCodec::prettyPrint */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashJSONCodec::prettyPrint(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b4bb0c | SentryCrashJSONCodec::setPrettyPrint: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashJSONCodec::setPrettyPrint_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b4bb14 | SentryCrashJSONCodec::sorted */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashJSONCodec::sorted(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



/* Address: 0x100b4bb1c | SentryCrashJSONCodec::setSorted: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashJSONCodec::setSorted_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



/* Address: 0x100b4bb24 | SentryCrashJSONCodec::ignoreNullsInArrays */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashJSONCodec::ignoreNullsInArrays(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 10);
}



/* Address: 0x100b4bb2c | SentryCrashJSONCodec::setIgnoreNullsInArrays: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashJSONCodec::setIgnoreNullsInArrays_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



/* Address: 0x100b4bb34 | SentryCrashJSONCodec::ignoreNullsInObjects */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashJSONCodec::ignoreNullsInObjects(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xb);
}



/* Address: 0x100b4bb3c | SentryCrashJSONCodec::setIgnoreNullsInObjects: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashJSONCodec::setIgnoreNullsInObjects_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xb) = (char)param_3;
  return;
}



/* Address: 0x100b4bb44 | SentryCrashJSONCodec::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashJSONCodec::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b4bb8c | FUN_100b4bb8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100b4bb8c(ID param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar3 = *(ID *)(param_1 + 0x18);
  if (IVar3 == 0) {
    objc_stub::class(param_3);
    pcVar2 = &cf_SentryCrashJSONCodecObjC;
    FUN_100b52f54(&cf_SentryCrashJSONCodecObjC,0,&cf_Type__notallowedastoplevelcontainer);
    objc_stub::setError_(param_1,pcVar2);
    uVar4 = 5;
  }
  else {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar3 = objc_stub::isKindOfClass_(IVar3,IVar1);
    if ((int)IVar3 == 0) {
      objc_stub::addObject_(*(ID *)(param_1 + 0x18),param_3);
    }
    else {
      objc_stub::setValue_forKey_(*(ID *)(param_1 + 0x18),param_3,param_2);
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x100b4bc8c | FUN_100b4bc8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

long FUN_100b4bc8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long *)(param_1 + 0x10) = param_3;
  }
  else {
    lVar1 = param_1;
    FUN_100b4bb8c(param_1,param_2,param_3);
    if ((int)lVar1 != 0) {
      return lVar1;
    }
  }
  *(long *)(param_1 + 0x18) = param_3;
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_3);
  return 0;
}



/* Address: 0x100b4bd34 | SentryThread::initWithThreadId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryThread::initWithThreadId_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryThread;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e1c0(self,param_3);
  }
  return self;
}



/* Address: 0x100b4bdcc | SentryThread::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryThread::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = &cf_id;
  IVar1 = objc_stub::FUN_100c104e0(param_1);
  if (IVar1 == 0) {
    local_50 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,99);
  }
  else {
    local_50 = objc_stub::FUN_100c104e0(param_1);
  }
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::crashed(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar2,&cf_crashed,IVar1);
  IVar2 = objc_stub::FUN_100c00580(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar2,&cf_current,IVar1);
  IVar2 = objc_stub::name(param_1);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_name);
  IVar2 = objc_stub::FUN_100c0f200(param_1);
  IVar2 = objc_stub::serialize(IVar2);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_stacktrace);
  IVar2 = objc_stub::FUN_100c05a60(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar2,&cf_main,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4c0b4 | SentryThread::threadInfo */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryThread::threadInfo(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  class_t *self;
  ID IVar3;
  long local_28;
  
  FUN_100b4eaa0(&local_28);
  lVar2 = local_28;
  FUN_100b4ed7c(local_28);
  lVar1 = local_28;
  local_28 = 0;
  if (lVar1 != 0) {
    thunk_FUN_100b4ea10();
    __ZdlPv();
  }
  self = &objc::class_t::SentryThread;
  _objc_alloc();
  IVar3 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,lVar2);
  IVar3 = objc_stub::FUN_100c04d20((ID)self,IVar3);
  return IVar3;
}



/* Address: 0x100b4c158 | SentryThread::threadId */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::threadId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b4c160 | SentryThread::setThreadId: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setThreadId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b4c168 | SentryThread::name */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::name(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b4c170 | SentryThread::setName: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b4c178 | SentryThread::stacktrace */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::stacktrace(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b4c180 | SentryThread::setStacktrace: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setStacktrace_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b4c18c | SentryThread::crashed */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::crashed(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b4c194 | SentryThread::setCrashed: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setCrashed_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b4c19c | SentryThread::current */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::current(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b4c1a4 | SentryThread::setCurrent: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setCurrent_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b4c1ac | SentryThread::isMain */

/* Function Stack Size: 0x10 bytes */

ID SentryThread::isMain(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b4c1b4 | SentryThread::setIsMain: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryThread::setIsMain_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b4c1bc | SentryThread::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryThread::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b4c21c | FUN_100b4c21c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

long FUN_100b4c21c(long param_1,undefined8 param_2,long param_3)

{
  ID IVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(param_1,param_2);
    IVar1 = objc_stub::FUN_100c05dc0((ID)&objc::class_t::SentryOptions,param_1);
    if ((int)IVar1 == 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}



/* Address: 0x100b4c2ac | FUN_100b4c2ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4c2ac(ID param_1)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *self;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::FUN_100c08620(IVar2);
  objc_stub::FUN_100c07140(IVar2);
  objc_stub::doubleValue(param_1);
  uVar1 = 2;
  if (extraout_d0 <= extraout_d0_00) {
    uVar1 = 1;
  }
  self = &objc::class_t::_TtC6Sentry21SentrySamplerDecision;
  _objc_alloc();
  IVar2 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,extraout_d0);
  IVar2 = objc_stub::FUN_100c03f40((ID)self,uVar1,param_1,IVar2);
  return IVar2;
}



/* Address: 0x100b4c38c | FUN_100b4c38c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

void FUN_100b4c38c(long param_1)

{
  class_t *self;
  
  if (param_1 == 0) {
    self = &objc::class_t::_TtC6Sentry21SentrySamplerDecision;
    _objc_alloc();
    objc_stub::FUN_100c03f40((ID)self,2,0,0);
  }
  else {
    FUN_100b4c2ac();
  }
  return;
}



/* Address: 0x100b4c3cc | FUN_100b4c3cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4c3cc(ID param_1,ID param_2)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_100c10ac0(param_1);
  IVar1 = objc_stub::FUN_100c098c0(IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c10a20(param_2);
    FUN_100b4c21c(IVar1,param_1,0);
    if (IVar1 == 0) {
      IVar1 = objc_stub::FUN_100c10ac0(param_1);
      IVar1 = objc_stub::FUN_100c079c0(IVar1);
      if (IVar1 == 0) {
        IVar1 = objc_stub::FUN_100c10a00(param_2);
        FUN_100b4c38c(IVar1);
      }
      else {
        pcVar2 = &objc::class_t::_TtC6Sentry21SentrySamplerDecision;
        _objc_alloc();
        IVar1 = objc_stub::FUN_100c10ac0(param_1);
        IVar1 = objc_stub::FUN_100c079c0(IVar1);
        IVar3 = objc_stub::FUN_100c10ac0(param_1);
        IVar3 = objc_stub::sampleRate(IVar3);
        IVar4 = objc_stub::FUN_100c10ac0(param_1);
        IVar4 = objc_stub::sampleRand(IVar4);
        IVar1 = objc_stub::FUN_100c03f40((ID)pcVar2,IVar1,IVar3,IVar4);
      }
    }
    else {
      FUN_100b4c2ac(IVar1);
    }
  }
  else {
    pcVar2 = &objc::class_t::_TtC6Sentry21SentrySamplerDecision;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c10ac0(param_1);
    IVar1 = objc_stub::FUN_100c098c0(IVar1);
    IVar3 = objc_stub::FUN_100c10ac0(param_1);
    IVar3 = objc_stub::sampleRate(IVar3);
    IVar4 = objc_stub::FUN_100c10ac0(param_1);
    IVar4 = objc_stub::sampleRand(IVar4);
    IVar1 = objc_stub::FUN_100c03f40((ID)pcVar2,IVar1,IVar3,IVar4);
  }
  return IVar1;
}



/* Address: 0x100b4c660 | FUN_100b4c660 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4c660(void)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c07340((ID)&_OBJC_CLASS___NSNumber);
  FUN_100b4c38c(IVar1);
  return IVar1;
}



/* Address: 0x100b4c6ac | SentryMetricReading::value */

/* Function Stack Size: 0x10 bytes */

ID SentryMetricReading::value(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b4c6b4 | SentryMetricReading::setValue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMetricReading::setValue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b4c6c0 | SentryMetricReading::absoluteSystemTimestamp */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryMetricReading::absoluteSystemTimestamp(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x100b4c6c8 | SentryMetricReading::setAbsoluteSystemTimestamp: */

/* Function Stack Size: 0x18 bytes */

void SentryMetricReading::setAbsoluteSystemTimestamp_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b4c6d0 | SentryMetricReading::absoluteNSDateInterval */

/* Function Stack Size: 0x10 bytes */

double SentryMetricReading::absoluteNSDateInterval(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x18);
}



/* Address: 0x100b4c6d8 | SentryMetricReading::setAbsoluteNSDateInterval: */

/* Function Stack Size: 0x18 bytes */

void SentryMetricReading::setAbsoluteNSDateInterval_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b4c6e0 | SentryMetricReading::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricReading::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b4c6ec | FUN_100b4c6ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4c6ec(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  cfstringStruct *local_68;
  cfstringStruct *pcStack_60;
  undefined8 local_58;
  ID IStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0xc2000000;
  local_90 = FUN_100b4c840;
  puStack_88 = &DAT_100f34de8;
  local_80 = IVar1;
  local_78 = param_4;
  uStack_70 = param_3;
  objc_stub::FUN_100c01cc0(param_1,&local_a0);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    local_68 = &cf_unit;
    pcStack_60 = &cf_values;
    local_58 = param_2;
    IStack_50 = IVar1;
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_58,&local_68,2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4c840 | FUN_100b4c840 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4c840(long param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  IVar2 = objc_stub::absoluteSystemTimestamp(param_2);
  FUN_100b154f0(IVar2,*(undefined8 *)(param_1 + 0x28));
  if ((int)IVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    IVar2 = objc_stub::absoluteSystemTimestamp(param_2);
    FUN_100b154f0(uVar5,IVar2);
    if ((int)uVar5 != 0) {
      IVar2 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      IVar3 = objc_stub::absoluteSystemTimestamp(param_2);
      FUN_100b154fc(uVar5,IVar3);
      iVar1 = _snprintf((char *)0x0,0,"%llu");
      pcVar4 = _malloc((long)(iVar1 + 1));
      _snprintf(pcVar4,(long)(iVar1 + 1),"%llu");
      IVar3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar4,1);
      _free(pcVar4);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_elapsed_since_start_ns);
      IVar3 = objc_stub::value(param_2);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_value);
      objc_stub::addObject_(*(ID *)(param_1 + 0x20),IVar2);
    }
  }
  return 0;
}



/* Address: 0x100b4c9b4 | FUN_100b4c9b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4c9b4(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  undefined8 local_48;
  ID IStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0xc2000000;
    local_70 = FUN_100b4caec;
    puStack_68 = &DAT_100f34e18;
    local_60 = IVar1;
    objc_stub::FUN_100c01cc0(param_1,&local_80);
    local_58 = &cf_unit;
    pcStack_50 = &cf_values;
    local_48 = param_2;
    IStack_40 = IVar1;
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_48,&local_58,2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4caec | FUN_100b4caec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b4caec(long param_1,ID param_2)

{
  ID self;
  ID IVar1;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  objc_stub::absoluteNSDateInterval(param_2);
  IVar1 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_timestamp);
  IVar1 = objc_stub::value(param_2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_value);
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),self);
  return 0;
}



/* Address: 0x100b4cbc0 | FUN_100b4cbc0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b4cbc0(ID param_1)

{
  ID self;
  ID IVar1;
  ID IVar2;
  
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_memory_footprint);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    FUN_100b4c9b4(IVar1,&cf_byte);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_memory_footprint);
  }
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_cpu_energy_usage);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    FUN_100b4c9b4(IVar1,&cf_nanojoule);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpu_energy_usage);
  }
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_cpu_usage);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    FUN_100b4c9b4(IVar1,&cf_percent);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_cpu_usage);
  }
  return self;
}



/* Address: 0x100b4cd40 | SentryMetricProfiler::initWithMode: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMetricProfiler::initWithMode_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  class_t *self_00;
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryMetricProfiler;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"init");
  if (self != 0) {
    objc_stub::FUN_100bff420(self);
    self_00 = &objc::class_t::SentrySystemWrapper;
    _objc_alloc();
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar1 = objc_stub::FUN_100c08220(IVar1);
    IVar1 = objc_stub::FUN_100c08280(IVar1);
    IVar1 = objc_stub::FUN_100c048e0((ID)self_00,IVar1);
    objc_stub::FUN_100c0dfc0(self,IVar1);
    *(unsigned_long_long *)(self + 0x30) = param_3;
  }
  return self;
}



/* Address: 0x100b4ce18 | SentryMetricProfiler::dealloc */

/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::dealloc(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  objc_stub::stop(param_1);
  local_30.super_class = &objc::class_t::SentryMetricProfiler;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x100b4ce5c | SentryMetricProfiler::start */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryMetricProfiler::start(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"registerSampler");
  return self;
}



/* Address: 0x100b4ce60 | SentryMetricProfiler::recordMetrics */

/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::recordMetrics(ID param_1,SEL param_2)

{
  objc_stub::FUN_100c08920(param_1);
  objc_stub::FUN_100c08ac0(param_1);
  objc_stub::FUN_100c08980(param_1);
  return;
}



/* Address: 0x100b4ce8c | SentryMetricProfiler::stop */

/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::stop(ID param_1,SEL param_2)

{
  objc_stub::cancel(*(ID *)(param_1 + 8));
  return;
}



/* Address: 0x100b4ce94 | SentryMetricProfiler::serializeTraceProfileMetricsBetween:and: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryMetricProfiler::serializeTraceProfileMetricsBetween_and_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID self;
  ID self_00;
  ID self_01;
  ID self_02;
  ID IVar1;
  
  _objc_sync_enter();
  self = objc_stub::FUN_100bfdfe0((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x28));
  self_00 = objc_stub::FUN_100bfdfe0((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x18));
  self_01 = objc_stub::FUN_100bfdfe0((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
  self_02 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::count(self_00);
  if (IVar1 != 0) {
    FUN_100b4c6ec(self_00,&cf_byte,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self_00,&cf_memory_footprint);
  }
  IVar1 = objc_stub::count(self);
  if (IVar1 != 0) {
    FUN_100b4c6ec(self,&cf_nanojoule,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self,&cf_cpu_energy_usage);
  }
  IVar1 = objc_stub::count(self_01);
  if (IVar1 != 0) {
    FUN_100b4c6ec(self_01,&cf_percent,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self_01,&cf_cpu_usage);
  }
  return self_02;
}


