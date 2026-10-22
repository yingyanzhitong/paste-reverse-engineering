/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b609d8 | FUN_100b609d8 */

undefined8 FUN_100b609d8(void)

{
  return 9;
}



/* Address: 0x100b609e0 | FUN_100b609e0 */

void FUN_100b609e0(undefined1 param_1)

{
  DAT_1010e5cd8 = param_1;
  return;
}



/* Address: 0x100b609ec | FUN_100b609ec */

void FUN_100b609ec(void)

{
  return;
}



/* Address: 0x100b609f0 | FUN_100b609f0 */

undefined ** FUN_100b609f0(void)

{
  return &PTR_FUN_101042d88;
}



/* Address: 0x100b609fc | FUN_100b609fc */

void FUN_100b609fc(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  int *piVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  int extraout_w8;
  int extraout_w8_00;
  long lVar9;
  ulong uVar10;
  sigaction local_78;
  char acStack_66 [30];
  long local_48;
  ulong uVar3;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((uint)DAT_1010e5cd9 == (uint)param_1) goto LAB_100b60c48;
  DAT_1010e5cd9 = (byte)param_1;
  if ((uint)param_1 == 0) {
    FUN_100b609cc();
    piVar4 = param_1;
    FUN_100b609d8();
    if (0 < (int)piVar4) {
      lVar9 = 0;
      do {
        if ((*param_1 != 0xf) || (DAT_1010e5cd8 == '\x01')) {
          _sigaction(*param_1,(sigaction *)((long)DAT_1010e5d18 + lVar9),(sigaction *)0x0);
        }
        lVar9 = lVar9 + 0x10;
        param_1 = param_1 + 1;
      } while (((ulong)piVar4 & 0xffffffff) << 4 != lVar9);
    }
    DAT_1010e5d00 = (void *)0x0;
    DAT_1010e5d08 = 0;
    DAT_1010e5d10 = 0;
    goto LAB_100b60c48;
  }
  FUN_100b34cd4(&DAT_1010e5cda);
  if (DAT_1010e5d08 == 0) {
    DAT_1010e5d08 = 0x20000;
    DAT_1010e5d00 = _malloc(0x20000);
    if (DAT_1010e5d00 != (void *)0x0) goto LAB_100b60a74;
    pcVar8 = "Failed to allocate signal stack area of size %ul";
    uVar7 = 0xb7;
  }
  else {
LAB_100b60a74:
    iVar2 = _sigaltstack((stack_t *)&DAT_1010e5d00,(stack_t *)0x0);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      FUN_100b609cc();
      uVar5 = uVar3;
      FUN_100b609d8();
      if (DAT_1010e5d18 == (void *)0x0) {
        DAT_1010e5d18 = _malloc((uVar5 & 0xffffffff) << 4);
      }
      local_78.sa_mask = 0;
      local_78.sa_flags = 0x241;
      local_78.__sigaction_u.__sa_handler = FUN_100b60d78;
      if (0 < (int)uVar5) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          iVar2 = *(int *)(uVar3 + uVar10 * 4);
          if ((iVar2 != 0xf) || (DAT_1010e5cd8 == '\x01')) {
            iVar2 = _sigaction(iVar2,&local_78,(sigaction *)((long)DAT_1010e5d18 + lVar9));
            if (iVar2 != 0) {
              uVar5 = (ulong)*(uint *)(uVar3 + uVar10 * 4);
              FUN_100b60934();
              if (uVar5 == 0) {
                _snprintf(acStack_66,0x1e,"%d");
              }
              piVar4 = ___error();
              ppuVar6 = &PTR___tlv_bootstrap_101049388;
              (*(code *)PTR___tlv_bootstrap_101049388)(*piVar4);
              iVar2 = _strerror_r(extraout_w8_00,(char *)ppuVar6,0x400);
              if (iVar2 != 0) {
                ___error();
                _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
              }
              FUN_100b5e930("ERROR",
                            "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_Signal.c"
                            ,0xf5,"sigaction (%s): %s");
              if (uVar10 != 0) {
                lVar9 = uVar10 + 1;
                do {
                  uVar1 = (int)lVar9 - 2;
                  _sigaction(*(int *)(uVar3 + (ulong)uVar1 * 4),
                             (sigaction *)((long)DAT_1010e5d18 + (ulong)uVar1 * 0x10),
                             (sigaction *)0x0);
                  lVar9 = lVar9 + -1;
                } while (1 < lVar9);
              }
              break;
            }
            if (*(long *)((long)DAT_1010e5d18 + lVar9) == 1) {
              _sigaction(*(int *)(uVar3 + uVar10 * 4),(sigaction *)((long)DAT_1010e5d18 + lVar9),
                         (sigaction *)0x0);
            }
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((uVar5 & 0xffffffff) != uVar10);
      }
      goto LAB_100b60c48;
    }
    piVar4 = ___error();
    ppuVar6 = &PTR___tlv_bootstrap_101049370;
    (*(code *)PTR___tlv_bootstrap_101049370)(*piVar4);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar6,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
    }
    pcVar8 = "signalstack: %s";
    uVar7 = 199;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_Signal.c"
                ,uVar7,pcVar8);
LAB_100b60c48:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b60d50 | FUN_100b60d50 */

undefined1 FUN_100b60d50(void)

{
  return DAT_1010e5cd9;
}



/* Address: 0x100b60d5c | FUN_100b60d5c */

void FUN_100b60d5c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 3) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 6;
  return;
}



/* Address: 0x100b60d78 | FUN_100b60d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b60d78(int *param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined4 local_534;
  int *local_530;
  undefined1 auStack_528 [1232];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  piVar1 = param_1;
  if (DAT_1010e5cd9 == 1) {
    local_530 = (int *)0x0;
    local_534 = 0;
    FUN_100b26c88(0,&local_530,&local_534);
    FUN_100b51224(param_3,auStack_528);
    FUN_100b2acb8(&DAT_1010e5d20,100,auStack_528);
    DAT_1010e6238 = 0;
    uRam00000001010e6180 = 0;
    _DAT_1010e6178 = 0;
    uRam00000001010e6170 = 0;
    _DAT_1010e6168 = 0;
    uRam00000001010e6160 = 0;
    _DAT_1010e6158 = 0;
    uRam00000001010e6150 = 0;
    _DAT_1010e6148 = 0;
    uRam00000001010e6140 = 0;
    _DAT_1010e6138 = 0;
    uRam00000001010e6130 = 0;
    _DAT_1010e6128 = 0;
    uRam00000001010e6120 = 0;
    _DAT_1010e6118 = 0;
    uRam00000001010e6110 = 0;
    _DAT_1010e6108 = 0;
    uRam00000001010e6100 = 0;
    _DAT_1010e60e8 = 0;
    uRam00000001010e60e0 = 0;
    _DAT_1010e60d8 = 0;
    uRam00000001010e60d0 = 0;
    _DAT_1010e60c8 = 0;
    uRam00000001010e60c0 = 0;
    uRam00000001010e60b0 = 0;
    _DAT_1010e60a8 = 0;
    uRam00000001010e6220 = 0;
    _DAT_1010e6218 = 0;
    uRam00000001010e6230 = 0;
    _DAT_1010e6228 = 0;
    uRam00000001010e6200 = 0;
    _DAT_1010e61f8 = 0;
    uRam00000001010e6210 = 0;
    _DAT_1010e6208 = 0;
    uRam00000001010e61e0 = 0;
    _DAT_1010e61d8 = 0;
    uRam00000001010e61f0 = 0;
    _DAT_1010e61e8 = 0;
    uRam00000001010e61c0 = 0;
    _DAT_1010e61b8 = 0;
    uRam00000001010e61d0 = 0;
    _DAT_1010e61c8 = 0;
    uRam00000001010e61a0 = 0;
    _DAT_1010e6198 = 0;
    uRam00000001010e61b0 = 0;
    _DAT_1010e61a8 = 0;
    uRam00000001010e6190 = 0;
    _DAT_1010e6188 = 0;
    _DAT_1010e60a0 = 2;
    DAT_1010e6080 = &DAT_1010e5cda;
    _DAT_1010e6088 = 0x1000000;
    DAT_1010e6098 = *(undefined8 *)(param_2 + 6);
    _DAT_1010e60f8 = CONCAT44(param_2[2],*param_2);
    DAT_1010e60b8 = &DAT_1010e5d20;
    DAT_1010e6090 = auStack_528;
    DAT_1010e60f0 = param_3;
    FUN_100b26d44();
    piVar1 = local_530;
    FUN_100b513c8(local_530,local_534);
  }
  iVar4 = (int)param_1;
  if ((DAT_1010e5cd9 & 1) == 0) {
    FUN_100b609cc();
    piVar2 = piVar1;
    FUN_100b609d8();
    if (0 < (int)piVar2) {
      lVar3 = 0;
      do {
        if (*piVar1 == iVar4) {
          _sigaction(iVar4,(sigaction *)(DAT_1010e5d18 - lVar3),(sigaction *)0x0);
          break;
        }
        lVar3 = lVar3 + -0x10;
        piVar1 = piVar1 + 1;
      } while (((ulong)piVar2 & 0xffffffff) * 0x10 + lVar3 != 0);
    }
  }
  _raise(iVar4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b60f4c | SentryCoreDataTracker::initWithThreadInspector:processInfoWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCoreDataTracker::initWithThreadInspector_processInfoWrapper_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryCoreDataTracker;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar1 != 0) {
    self = &objc::class_t::_TtC6Sentry25SentryPredicateDescriptor;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(IVar1 + 8) = IVar2;
    *(ID *)(IVar1 + 0x10) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
  }
  return IVar1;
}



/* Address: 0x100b61010 | SentryCoreDataTracker::managedObjectContext:executeFetchRequest:error:originalImp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryCoreDataTracker::managedObjectContext_executeFetchRequest_error_originalImp_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5,ID param_6,undefined4 param_7
             )

{
  undefined8 uVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  bool bVar5;
  
  IVar3 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar3 = objc_stub::scope(IVar3);
  IVar3 = objc_stub::FUN_100c0efc0(IVar3);
  if (IVar3 == 0) {
    IVar3 = 0;
  }
  else {
    IVar4 = objc_stub::FUN_100c010c0(param_1,param_4);
    IVar3 = objc_stub::startChildWithOperation_description_(IVar3,&cf_db_sql_query,IVar4);
    if (IVar3 != 0) {
      IVar4 = objc_stub::FUN_100c0cf40(IVar3,&cf_auto_db_core_data);
      iVar2 = (int)IVar4;
      FUN_100b3a1c0();
      if (iVar2 != 0) {
        objc_stub::description(IVar3);
        objc_stub::operation(IVar3);
        objc_stub::FUN_100c07860(IVar3);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                      ,0x35,&
                            cf_SentryCoreDataTrackerautomaticallystartedanewspanwithdescription____operation____origin___
                     );
      }
      bVar5 = false;
      goto LAB_100b61198;
    }
  }
  bVar5 = true;
LAB_100b61198:
  (**(code **)(param_6 + 0x10))(param_6,param_4,param_5);
  if (!bVar5) {
    objc_stub::FUN_100bfd5e0(param_1,IVar3,param_3);
    IVar4 = objc_stub::count(param_6);
    IVar4 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar4);
    objc_stub::setDataValue_forKey_(IVar3,IVar4,&cf_read_count);
    uVar1 = 10;
    if (param_6 != 0) {
      uVar1 = 1;
    }
    IVar3 = objc_stub::finishWithStatus_(IVar3,uVar1);
    iVar2 = (int)IVar3;
    FUN_100b3a1c0();
    if (iVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                    ,0x42,&cf_SentryCoreDataTrackerautomaticallyfinishedspanwithstatus___);
    }
  }
  return param_6;
}



/* Address: 0x100b612ac | SentryCoreDataTracker::managedObjectContext:save:originalImp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool SentryCoreDataTracker::managedObjectContext_save_originalImp_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar3 = objc_stub::hasChanges(param_3);
  if ((IVar3 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
    return (bool)param_5;
  }
  IVar3 = objc_stub::FUN_100c03180(param_1,param_3);
  IVar4 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar4 = objc_stub::scope(IVar4);
  IVar4 = objc_stub::FUN_100c0efc0(IVar4);
  if (IVar4 != 0) {
    IVar5 = objc_stub::FUN_100c010a0(param_1,IVar3,param_3);
    IVar4 = objc_stub::startChildWithOperation_description_(IVar4,&cf_db_sql_transaction,IVar5);
    if (IVar4 != 0) {
      IVar5 = objc_stub::FUN_100c0cf40(IVar4,&cf_auto_db_core_data);
      iVar2 = (int)IVar5;
      FUN_100b3a1c0();
      if (iVar2 != 0) {
        objc_stub::description(IVar4);
        objc_stub::operation(IVar4);
        objc_stub::FUN_100c07860(IVar4);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                      ,0x5f,&
                            cf_SentryCoreDataTrackerautomaticallystartedanewspanwithdescription____operation____origin___
                     );
      }
      objc_stub::setDataValue_forKey_(IVar4,IVar3,&cf_operations);
      goto LAB_100b61494;
    }
  }
  iVar2 = 0;
  FUN_100b3a1f0();
  if (iVar2 != 0) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                  ,99,&cf_managedObjectContext_save_originalImp_saveSpanisnil);
  }
  IVar4 = 0;
LAB_100b61494:
  (**(code **)(param_5 + 0x10))(param_5,param_4);
  if (IVar4 != 0) {
    objc_stub::FUN_100bfd5e0(param_1,IVar4,param_3);
    uVar1 = 10;
    if ((bool)param_5 != 0) {
      uVar1 = 1;
    }
    IVar3 = objc_stub::finishWithStatus_(IVar4,uVar1);
    iVar2 = (int)IVar3;
    FUN_100b3a1c0();
    if (iVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                    ,0x6e,&cf_SentryCoreDataTrackerautomaticallyfinishedspanwithstatus___);
    }
  }
  return (bool)param_5;
}



/* Address: 0x100b61558 | SentryCoreDataTracker::addExtraInfoToSpan:withContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCoreDataTracker::addExtraInfoToSpan_withContext_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_blocked_main_thread);
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar3 = objc_stub::persistentStoreCoordinator(param_4);
  IVar3 = objc_stub::persistentStores(IVar3);
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0xc2000000;
  local_70 = FUN_100b61798;
  puStack_68 = &DAT_100f360d8;
  local_60 = IVar2;
  local_58 = self;
  objc_stub::FUN_100c01cc0(IVar3,&local_80);
  IVar2 = objc_stub::FUN_100bff8a0(IVar2,&cf__);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_db_system);
  IVar2 = objc_stub::FUN_100bff8a0(self,&cf__);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_db_name);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c0f240(*(ID *)(param_1 + 0x10));
    IVar1 = objc_stub::frames(IVar1);
    objc_stub::FUN_100c0bea0(param_3,IVar1);
  }
  return;
}



/* Address: 0x100b61798 | FUN_100b61798 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b61798(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar1 = objc_stub::type(param_2);
  objc_stub::addObject_(IVar2,IVar1);
  IVar1 = objc_stub::URL(param_2);
  IVar2 = *(ID *)(param_1 + 0x28);
  if (IVar1 == 0) {
    objc_stub::addObject_(IVar2,&cf__null_);
  }
  else {
    IVar1 = objc_stub::URL(param_2);
    IVar1 = objc_stub::path(IVar1);
    objc_stub::addObject_(IVar2,IVar1);
  }
  return 0;
}



/* Address: 0x100b61868 | SentryCoreDataTracker::descriptionForOperations:inContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCoreDataTracker::descriptionForOperations_inContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *self;
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  ID local_38;
  
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = FUN_100b61a48;
  pcStack_40 = FUN_100b61a58;
  self = &_OBJC_CLASS___NSMutableArray;
  local_58 = &local_60;
  _objc_alloc();
  local_38 = objc_stub::init((ID)self);
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0xc2000000;
  local_80 = FUN_100b61a60;
  puStack_78 = &DAT_100f36108;
  local_70 = param_3;
  puStack_68 = &local_60;
  IVar1 = objc_stub::insertedObjects(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_INSERTED);
  IVar1 = objc_stub::updatedObjects(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_UPDATED);
  IVar1 = objc_stub::deletedObjects(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_DELETED);
  IVar1 = objc_stub::FUN_100bff8a0(local_58[5],&cf__);
  __Block_object_dispose(&local_60,8);
  return IVar1;
}



/* Address: 0x100b61a48 | FUN_100b61a48 */

void FUN_100b61a48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Address: 0x100b61a58 | FUN_100b61a58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b61a58(void)

{
  return 0;
}



/* Address: 0x100b61a60 | FUN_100b61a60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b61a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  ID self;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),param_3);
  if ((IVar1 != 0) && (IVar2 = objc_stub::count(IVar1), IVar2 != 0)) {
    IVar2 = objc_stub::count(IVar1);
    self = *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (IVar2 == 1) {
      IVar2 = objc_stub::FUN_100bfdb20(IVar1);
      objc_stub::FUN_100c07480(IVar2,0);
      IVar1 = objc_stub::FUN_100bfdac0(IVar1);
      objc_stub::FUN_100c07480(IVar1,0);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
      objc_stub::addObject_(self,IVar1);
    }
    else {
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____luitems);
      objc_stub::addObject_(self,IVar1);
    }
  }
  return 0;
}



/* Address: 0x100b61bdc | FUN_100b61bdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b61bdc(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}



/* Address: 0x100b61c10 | FUN_100b61c10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b61c10(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}



/* Address: 0x100b61c3c | SentryCoreDataTracker::groupEntitiesOperations: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::groupEntitiesOperations_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::FUN_100c03c60((ID)self,3);
  IVar1 = objc_stub::insertedObjects(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::insertedObjects(param_3);
    IVar1 = objc_stub::FUN_100c00100(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_INSERTED);
  }
  IVar1 = objc_stub::updatedObjects(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::updatedObjects(param_3);
    IVar1 = objc_stub::FUN_100c00100(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_UPDATED);
  }
  IVar1 = objc_stub::deletedObjects(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::deletedObjects(param_3);
    IVar1 = objc_stub::FUN_100c00100(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_DELETED);
  }
  return self_00;
}



/* Address: 0x100b61e00 | SentryCoreDataTracker::countEntities: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::countEntities_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
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
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        IVar3 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar2 = objc_stub::entity(IVar3);
        IVar2 = objc_stub::name(IVar2);
        if (IVar2 == 0) {
          IVar2 = objc_stub::FUN_100c02ee0((ID)&objc::class_t::_TtC6Sentry15SwiftDescriptor,IVar3);
        }
        IVar3 = objc_stub::objectForKeyedSubscript_(self_00,IVar2);
        IVar3 = objc_stub::intValue(IVar3);
        IVar3 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 + 1));
        objc_stub::setObject_forKeyedSubscript_(self_00,IVar3,IVar2);
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}



/* Address: 0x100b61fe8 | SentryCoreDataTracker::descriptionFromRequest: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::descriptionFromRequest_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID self_01;
  
  self = &_OBJC_CLASS___NSMutableString;
  _objc_alloc();
  objc_stub::FUN_100c01c20(param_3);
  self_00 = objc_stub::FUN_100c04220((ID)self,&cf_SELECT____);
  IVar1 = objc_stub::FUN_100c07f60(param_3);
  if (IVar1 != 0) {
    self_01 = *(ID *)(param_1 + 8);
    IVar1 = objc_stub::FUN_100c07f60(param_3);
    objc_stub::FUN_100c07f80(self_01,IVar1);
    objc_stub::appendFormat_(self_00,&cf_WHERE__);
  }
  IVar1 = objc_stub::FUN_100c0ef00(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c0ef00(param_3);
    objc_stub::FUN_100c0eee0(param_1,IVar1);
    objc_stub::appendFormat_(self_00,&cf_SORTBY__);
  }
  return self_00;
}



/* Address: 0x100b62160 | SentryCoreDataTracker::sortDescription: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::sortDescription_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
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
  IVar1 = objc_stub::count(param_3);
  IVar1 = objc_stub::FUN_100c03c60((ID)self,IVar1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        IVar3 = *(ID *)(lStack_128 + IVar4 * 8);
        objc_stub::FUN_100bfe0a0(IVar3);
        objc_stub::FUN_100c05ee0(IVar3);
        IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
        objc_stub::addObject_(IVar1,IVar3);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = objc_stub::FUN_100bff8a0(IVar1,&cf__);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b6234c | SentryCoreDataTracker::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCoreDataTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b62388 | FUN_100b62388 */

undefined * FUN_100b62388(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    _swift_release(param_2);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100071750(0,lVar5,0);
    puVar6 = (undefined1 *)(param_1 + 0x28);
    do {
      local_80 = *(undefined8 *)(puVar6 + -8);
      local_78 = *puVar6;
      _swift_getAtKeyPath(&local_70,&local_80,param_2);
      uVar3 = uStack_68;
      uVar2 = local_70;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100071750(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar3;
      puVar6 = puVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_release(param_2);
  }
  return puVar4;
}



/* Address: 0x100b6249c | FUN_100b6249c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b6249c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar3 = SentryOptions::enableMetricKit;
  _swift_beginAccess(param_1 + SentryOptions::enableMetricKit,auStack_68,0,0);
  lVar2 = SentryOptions::inAppIncludes;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    _swift_beginAccess(param_1 + SentryOptions::inAppIncludes,auStack_80,0,0);
    uVar6 = *(undefined8 *)(param_1 + lVar2);
    FUN_100ba8244(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain();
    FUN_100ba7ce4();
    lVar2 = SentryOptions::enableMetricKitRawPayload;
    _swift_beginAccess(param_1 + SentryOptions::enableMetricKitRawPayload,auStack_98,0,0);
    uVar1 = *(undefined1 *)(param_1 + lVar2);
    uVar4 = 0;
    FUN_100bc44f0(0);
    _objc_allocWithZone();
    FUN_100bc2d44(uVar6,uVar1,1,uVar4);
    *(undefined8 *)(unaff_x20 + DAT_101044ec8) = uVar6;
    IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff58,"init");
    FUN_100bc2888(*(undefined8 *)(IVar5 + DAT_101044ec8));
  }
  else {
    _swift_deallocPartialClassInstance();
    IVar5 = 0;
  }
  return IVar5;
}



/* Address: 0x100b6264c | FUN_100b6264c */

void FUN_100b6264c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar2 = &DAT_100f36548;
  _swift_allocObject(&DAT_100f36548,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  *(undefined8 *)(puVar2 + 0x28) = param_4[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x40) = param_4[4];
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  local_50 = FUN_100b674a4;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100b6294c;
  puStack_58 = &DAT_100f36560;
  local_48 = puVar2;
  pvVar3 = __Block_copy(&local_70);
  puVar2 = &DAT_1010447f8;
  FUN_100b6730c();
  puVar1 = local_48;
  param_1[3] = puVar2;
  *param_1 = pvVar3;
  _swift_retain(param_3);
  FUN_100b674b4(param_4);
  _swift_retain(param_6);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100b6273c | FUN_100b6273c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b6273c(long param_1,undefined8 param_2,code *param_3,void *param_4,undefined8 *param_5,
                  code *param_6)

{
  undefined *puVar1;
  _StringGuts _Var2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  
  puVar1 = &DAT_100f36598;
  pcVar6 = (char *)0x7;
  pvVar7 = param_4;
  _swift_allocObject(&DAT_100f36598,0x48);
  *(code **)(puVar1 + 0x10) = param_3;
  *(void **)(puVar1 + 0x18) = param_4;
  uVar8 = *param_5;
  uVar10 = param_5[3];
  uVar9 = param_5[2];
  *(undefined8 *)(puVar1 + 0x28) = param_5[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x38) = uVar10;
  *(undefined8 *)(puVar1 + 0x30) = uVar9;
  *(undefined8 *)(puVar1 + 0x40) = param_5[4];
  FUN_100b674b4(param_5);
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  _Var2.unknown = &_OBJC_CLASS___NSURLSessionTask;
  lVar3 = param_1;
  _swift_dynamicCastObjCClass();
  if (lVar3 == 0) {
    _swift_unknownObjectRelease(param_1);
    FUN_100b84dac();
    Swift::_StringGuts::grow(0x22,_Var2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar8 = *param_5;
    _NSStringFromSelector(uVar8);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar12.bridgeObject = pvVar7;
    SVar12.str = pcVar6;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    pcVar5 = (code *)0x8000000100dc7840;
    FUN_100b84df8(4,0xd000000000000020,0x8000000100dc7840,0xd000000000000071,0x8000000100dc7870,0x30
                 );
    _swift_bridgeObjectRelease();
    (*param_3)();
    (*pcVar5)(param_1,uVar8,param_2);
  }
  else {
    puVar4 = &DAT_100f365c0;
    _swift_allocObject(&DAT_100f365c0,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_100b674e0;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    *(long *)(puVar4 + 0x20) = param_1;
    _swift_unknownObjectRetain(param_1);
    _swift_retain(puVar1);
    (*param_6)(lVar3,param_2,FUN_100b67528,puVar4);
    _swift_release(puVar1);
    _swift_unknownObjectRelease(param_1);
    puVar1 = puVar4;
  }
  _swift_release(puVar1);
  return;
}



/* Address: 0x100b6294c | FUN_100b6294c */

void FUN_100b6294c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
  _swift_unknownObjectRelease(param_2);
  return;
}



/* Address: 0x100b6299c | FUN_100b6299c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b6299c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  long unaff_x20;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar10 = SentryOptions::enableMetrics;
  _swift_beginAccess(param_1 + SentryOptions::enableMetrics,auStack_78,0,0);
  lVar9 = SentryOptions::sendDefaultPii;
  if (*(char *)(param_1 + lVar10) == '\x01') {
    _swift_beginAccess(param_1 + SentryOptions::sendDefaultPii,auStack_90,0,0);
    uVar8 = *(undefined1 *)(param_1 + lVar9);
    puVar1 = (undefined8 *)(param_1 + SentryOptions::environment);
    _swift_beginAccess(puVar1,auStack_a8,0,0);
    uVar2 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(param_1 + SentryOptions::releaseName);
    _swift_beginAccess(puVar1,auStack_c0,0,0);
    uVar3 = *puVar1;
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)(param_1 + SentryOptions::cacheDirectoryPath);
    _swift_beginAccess(puVar1,auStack_d8,0,0);
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(unaff_x20 + DAT_101045270);
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar3;
    puVar1[3] = uVar6;
    *(undefined1 *)(puVar1 + 4) = uVar8;
    puVar1[5] = uVar4;
    puVar1[6] = uVar7;
    puVar1 = (undefined8 *)(param_1 + SentryOptions::beforeSendMetric);
    _swift_beginAccess(puVar1,auStack_f0,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar1 = (undefined8 *)(unaff_x20 + DAT_101045278);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar5);
    FUN_100011128(uVar2,uVar3);
    IVar11 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff00,"init");
  }
  else {
    _swift_deallocPartialClassInstance();
    IVar11 = 0;
  }
  return IVar11;
}



/* Address: 0x100b62b80 | FUN_100b62b80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b62b80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  ulong unaff_x20;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar1 = SentryOptions::enableAutoPerformanceTracing;
  _Var6.unknown = auStack_68;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(param_1 + SentryOptions::enableAutoPerformanceTracing);
  lVar2 = SentryOptions::enableSwizzling;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    _Var6.unknown = auStack_80;
    pcVar7 = (char *)0x0;
    pvVar8 = (void *)0x0;
    _swift_beginAccess(param_1 + SentryOptions::enableSwizzling);
    if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
      FUN_100b84dac(0);
      local_c8 = 0;
      uStack_c0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x3b,_Var6);
      SVar13.bridgeObject = (void *)0x8000000100dc7250;
      SVar13.str = (char *)0xd000000000000014;
      SVar25.bridgeObject = pvVar8;
      SVar25.str = pcVar7;
      Swift::String::append(SVar13,SVar25);
      SVar14.bridgeObject = (void *)0x8000000100dc7060;
      SVar14.str = (char *)0xd000000000000021;
      SVar26.bridgeObject = pvVar8;
      SVar26.str = pcVar7;
      Swift::String::append(SVar14,SVar26);
      SVar15.bridgeObject = (void *)0x8000000100dc75c0;
      SVar15.str = (char *)0xd000000000000025;
      SVar27.bridgeObject = pvVar8;
      SVar27.str = pcVar7;
      Swift::String::append(SVar15,SVar27);
      uVar5 = 0x11;
    }
    else {
      uVar3 = unaff_x20;
      FUN_100b8cd10();
      lVar1 = SentryOptions::enableCoreDataTracing;
      if ((uVar3 & 1) == 0) {
        FUN_100b84dac(0);
        local_c8 = 0;
        uStack_c0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x33,_Var6);
        SVar16.bridgeObject = (void *)0x8000000100dc7250;
        SVar16.str = (char *)0xd000000000000014;
        SVar28.bridgeObject = pvVar8;
        SVar28.str = pcVar7;
        Swift::String::append(SVar16,SVar28);
        SVar17.bridgeObject = (void *)0x8000000100dc7060;
        SVar17.str = (char *)0xd000000000000021;
        SVar29.bridgeObject = pvVar8;
        SVar29.str = pcVar7;
        Swift::String::append(SVar17,SVar29);
        SVar18.bridgeObject = (void *)0x8000000100dc75f0;
        SVar18.str = (char *)0xd00000000000001d;
        SVar30.bridgeObject = pvVar8;
        SVar30.str = pcVar7;
        Swift::String::append(SVar18,SVar30);
        uVar5 = 0x16;
      }
      else {
        _Var6.unknown = auStack_98;
        pcVar7 = (char *)0x0;
        pvVar8 = (void *)0x0;
        _swift_beginAccess(param_1 + SentryOptions::enableCoreDataTracing);
        if ((*(byte *)(param_1 + lVar1) & 1) != 0) {
          FUN_100b77d28();
          *(long *)(unaff_x20 + DAT_1010455e8) = param_1;
          *(undefined8 *)(unaff_x20 + DAT_1010455f0) =
               *(undefined8 *)(param_2 + _TtC6Sentry25SentryDependencyContainer::coreDataSwizzling);
          IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff58,"init");
          uVar9 = *(undefined8 *)(IVar4 + DAT_1010455e8);
          uVar5 = 0;
          FUN_100b673ec(0,&DAT_1010447a0,&PTR_SentryCoreDataTracker_100f8e160);
          local_c8 = uVar9;
          local_b0 = uVar5;
          FUN_100bc9468(&local_c8);
          FUN_100004594(&local_c8);
          return IVar4;
        }
        FUN_100b84dac(0);
        local_c8 = 0;
        uStack_c0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x41,_Var6);
        SVar19.bridgeObject = (void *)0x8000000100dc7250;
        SVar19.str = (char *)0xd000000000000014;
        SVar31.bridgeObject = pvVar8;
        SVar31.str = pcVar7;
        Swift::String::append(SVar19,SVar31);
        SVar20.bridgeObject = (void *)0x8000000100dc7060;
        SVar20.str = (char *)0xd000000000000021;
        SVar32.bridgeObject = pvVar8;
        SVar32.str = pcVar7;
        Swift::String::append(SVar20,SVar32);
        SVar21.bridgeObject = (void *)0x8000000100dc7610;
        SVar21.str = (char *)0xd00000000000002b;
        SVar33.bridgeObject = pvVar8;
        SVar33.str = pcVar7;
        Swift::String::append(SVar21,SVar33);
        uVar5 = 0x1b;
      }
    }
  }
  else {
    FUN_100b84dac(0);
    local_c8 = 0;
    uStack_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x48,_Var6);
    SVar10.bridgeObject = (void *)0x8000000100dc7250;
    SVar10.str = (char *)0xd000000000000014;
    SVar22.bridgeObject = pvVar8;
    SVar22.str = pcVar7;
    Swift::String::append(SVar10,SVar22);
    SVar11.bridgeObject = (void *)0x8000000100dc7060;
    SVar11.str = (char *)0xd000000000000021;
    SVar23.bridgeObject = pvVar8;
    SVar23.str = pcVar7;
    Swift::String::append(SVar11,SVar23);
    SVar12.bridgeObject = (void *)0x8000000100dc74c0;
    SVar12.str = &DAT_d000000000000032;
    SVar24.bridgeObject = pvVar8;
    SVar24.str = pcVar7;
    Swift::String::append(SVar12,SVar24);
    uVar5 = 0xc;
  }
  uVar9 = uStack_c0;
  FUN_100b84df8(1,local_c8,uStack_c0,0xd000000000000084,0x8000000100dc7530,uVar5);
  _swift_bridgeObjectRelease(uVar9);
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Address: 0x100b6304c | FUN_100b6304c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b6304c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  class_t *self;
  ID IVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *pvVar12;
  long unaff_x20;
  long lVar13;
  undefined1 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  lVar15 = DAT_101046328;
  _swift_unknownObjectWeakInit(unaff_x20 + DAT_101046328,0);
  *(undefined8 *)(unaff_x20 + DAT_101046330) = 0;
  *(undefined8 *)(unaff_x20 + DAT_101046338) = 0;
  *(undefined8 *)(unaff_x20 + DAT_101046348) = 0;
  lVar13 = SentryOptions::enableCrashHandler;
  _Var10.unknown = auStack_80;
  pcVar11 = (char *)0x0;
  pvVar12 = (void *)0x0;
  _swift_beginAccess(param_1 + SentryOptions::enableCrashHandler);
  if (*(char *)(param_1 + lVar13) == '\x01') {
    _swift_unknownObjectWeakAssign(unaff_x20 + lVar15,param_1);
    lVar13 = unaff_x20;
    FUN_100b75f7c();
    *(long *)(unaff_x20 + DAT_101046340) = lVar13;
    lVar15 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
    _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper,
                       &local_98,0,0);
    lVar13 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
    uVar16 = *(undefined8 *)(param_2 + lVar15);
    _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_b0,0,0
                      );
    uVar17 = *(undefined8 *)(param_2 + lVar13);
    _swift_unknownObjectRetain(uVar16);
    uVar6 = uVar17;
    _swift_unknownObjectRetain(uVar17);
    FUN_100b75f7c();
    uVar7 = 0;
    FUN_100bf1544(0);
    _objc_allocWithZone();
    FUN_100bf13bc(uVar16,uVar17,uVar6,uVar7);
    *(undefined8 *)(unaff_x20 + DAT_101046350) = uVar16;
    IVar8 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff40,"init");
    lVar4 = DAT_101046350;
    lVar15 = DAT_101046340;
    _objc_msgSend(*(ID *)(*(long *)(IVar8 + DAT_101046340) +
                         _TtC6Sentry16SentryCrashSwift::sentryCrash),"setBridgeObject:",
                  *(undefined8 *)(IVar8 + DAT_101046350));
    lVar13 = SentryOptions::enableMemoryIntrospection;
    lVar15 = *(long *)(IVar8 + lVar15);
    _swift_beginAccess(param_1 + SentryOptions::enableMemoryIntrospection,auStack_d8,0,0);
    _objc_msgSend(*(ID *)(lVar15 + _TtC6Sentry16SentryCrashSwift::sentryCrash),
                  "setIntrospectMemory:",(ulong)*(byte *)(param_1 + lVar13));
    lVar13 = param_1;
    FUN_100b76be4(param_1,*(undefined8 *)(IVar8 + lVar4));
    lVar15 = DAT_101046330;
    *(long *)(IVar8 + DAT_101046330) = lVar13;
    lVar13 = SentryOptions::maxBreadcrumbs;
    _swift_beginAccess(param_1 + SentryOptions::maxBreadcrumbs,auStack_f0,0,0);
    lVar13 = *(long *)(param_1 + lVar13);
    if (lVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100b635fc);
      (*pcVar5)();
    }
    self = &objc::class_t::SentryCrashScopeObserver;
    _objc_allocWithZone();
    IVar9 = _objc_msgSend((ID)self,"initWithMaxBreadcrumbs:",lVar13);
    lVar4 = DAT_101046338;
    *(ID *)(IVar8 + DAT_101046338) = IVar9;
    lVar13 = SentryOptions::enableSigtermReporting;
    if ((*(long *)(IVar8 + lVar15) != 0) && (*(long *)(IVar8 + lVar4) != 0)) {
      _swift_beginAccess(param_1 + SentryOptions::enableSigtermReporting,auStack_108,0,0);
      lVar15 = SentryOptions::enableSwizzling;
      uVar2 = *(undefined1 *)(param_1 + lVar13);
      _swift_beginAccess(param_1 + SentryOptions::enableSwizzling,auStack_120,0,0);
      lVar13 = SentryOptions::enableUncaughtNSExceptionReporting;
      if (*(char *)(param_1 + lVar15) == '\x01') {
        _swift_beginAccess(param_1 + SentryOptions::enableUncaughtNSExceptionReporting,auStack_198,0
                           ,0);
        uVar14 = *(undefined1 *)(param_1 + lVar13);
      }
      else {
        uVar14 = 0;
      }
      puVar1 = (undefined8 *)(param_1 + SentryOptions::cacheDirectoryPath);
      _swift_beginAccess(puVar1,auStack_138,0,0);
      lVar13 = SentryOptions::experimental;
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      _swift_beginAccess(param_1 + SentryOptions::experimental,auStack_150,0,0);
      lVar15 = _TtC6Sentry25SentryExperimentalOptions::enableUnhandledCPPExceptionsV2;
      lVar13 = *(long *)(param_1 + lVar13);
      _swift_beginAccess(lVar13 + _TtC6Sentry25SentryExperimentalOptions::
                                  enableUnhandledCPPExceptionsV2,auStack_168,0,0);
      uVar3 = *(undefined1 *)(lVar13 + lVar15);
      _swift_bridgeObjectRetain(uVar7);
      FUN_100b635fc(uVar6,uVar7,uVar2,uVar14,uVar3,param_2);
      _swift_bridgeObjectRelease(uVar7);
      FUN_100b638e4();
      lVar13 = SentryOptions::enablePersistingTracesWhenCrashing;
      _swift_beginAccess(param_1 + SentryOptions::enablePersistingTracesWhenCrashing,auStack_180,0,0
                        );
      if (*(char *)(param_1 + lVar13) != '\x01') {
        return IVar8;
      }
      FUN_100b2bf1c(thunk_FUN_100ba5c04);
      return IVar8;
    }
    FUN_100b84dac(0);
    FUN_100b84df8(3,0xd000000000000038,0x8000000100dc7340,0xd000000000000070,0x8000000100dc72c0,0x45
                 );
  }
  else {
    FUN_100b84dac(0);
    local_98 = 0;
    uStack_90 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3e,_Var10);
    SVar18.bridgeObject = (void *)0x8000000100dc7250;
    SVar18.str = (char *)0xd000000000000014;
    SVar21.bridgeObject = pvVar12;
    SVar21.str = pcVar11;
    Swift::String::append(SVar18,SVar21);
    SVar19.bridgeObject = (void *)0x8000000100dc7270;
    SVar19.str = (char *)0xd000000000000016;
    SVar22.bridgeObject = pvVar12;
    SVar22.str = pcVar11;
    Swift::String::append(SVar19,SVar22);
    SVar20.bridgeObject = (void *)0x8000000100dc7290;
    SVar20.str = (char *)0xd000000000000028;
    SVar23.bridgeObject = pvVar12;
    SVar23.str = pcVar11;
    Swift::String::append(SVar20,SVar23);
    uVar6 = uStack_90;
    FUN_100b84df8(1,local_98,uStack_90,0xd000000000000070,0x8000000100dc72c0,0x2b);
    _swift_bridgeObjectRelease(uVar6);
    _swift_unknownObjectWeakDestroy(unaff_x20 + lVar15);
    _swift_deallocPartialClassInstance();
  }
  return 0;
}



/* Address: 0x100b635fc | FUN_100b635fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b635fc(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  NSString *pNVar4;
  ID IVar5;
  long unaff_x20;
  long lVar6;
  
  lVar1 = DAT_101046348;
  lVar6 = *(long *)(unaff_x20 + DAT_101046348);
  if (lVar6 == 0) {
    lVar2 = unaff_x20 + DAT_101046328;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      FUN_100b84dac();
      FUN_100b84df8(1,0xd000000000000037,0x8000000100dc73d0,0xd000000000000070,0x8000000100dc72c0,
                    0x90);
      return;
    }
    FUN_100b77be4();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    if (*(ID *)(unaff_x20 + lVar1) != 0) {
      _objc_msgSend(*(ID *)(unaff_x20 + lVar1),"setBridgeObject:",
                    *(undefined8 *)(unaff_x20 + DAT_101046350));
      param_5 = param_5 & 0xffffffff;
    }
  }
  FUN_100b609e0(param_3 & 1);
  IVar3 = *(ID *)(unaff_x20 + lVar1);
  if (IVar3 != 0) {
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _objc_msgSend(IVar3,"install:",pNVar4);
  }
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"setCrashReporterInstalled:",1);
  IVar3 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  FUN_100b75d24();
  IVar5 = _objc_msgSend(IVar3,"crashedLastLaunch");
  _swift_unknownObjectRelease(IVar3);
  if ((int)IVar5 != 0) {
    _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"setFatalDetected:",1);
  }
  if ((param_4 & 1) != 0) {
    _objc_msgSend((ID)&objc::class_t::SentryUncaughtNSExceptions,"configureCrashOnExceptions");
    _objc_msgSend((ID)&objc::class_t::SentryUncaughtNSExceptions,
                  "swizzleNSApplicationReportException");
    _objc_msgSend((ID)&objc::class_t::SentryUncaughtNSExceptions,
                  "swizzleNSApplicationCrashOnException");
  }
  if ((param_5 & 1) != 0) {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd00000000000002f,0x8000000100dc73a0,0xd000000000000070,0x8000000100dc72c0,0xb0
                 );
    FUN_100b2aeb8();
  }
  if (*(long *)(unaff_x20 + DAT_101046330) != 0) {
    FUN_100bbc9f0(*(long *)(unaff_x20 + DAT_101046330));
  }
  if (lVar6 != 0) {
    return;
  }
  FUN_100b63aac(0);
  return;
}



/* Address: 0x100b638e4 | FUN_100b638e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_100b638e4(void)

{
  byte bVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  IVar2 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  puVar3 = &DAT_100f363b8;
  _swift_allocObject(&DAT_100f363b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  local_50 = FUN_100b673b4;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = switchD_100bab490::caseD_51;
  puStack_58 = &DAT_100f363d0;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  _objc_msgSend(IVar2,"configureScope:",aBlock);
  __Block_release(aBlock);
  IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(IVar2,"addObserver:selector:name:object:");
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar1 & 1) != 0) {
    IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    FUN_100b63e9c(IVar2);
    IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    _objc_msgSend(IVar2,"addObserver:selector:name:object:");
    bVar1 = 0;
  }
  return bVar1;
}



/* Address: 0x100b63aac | FUN_100b63aac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b63aac(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + DAT_101046348) != 0) {
    FUN_100b83248(0,0);
    return 0;
  }
  return 0;
}



/* Address: 0x100b63af8 | FUN_100b63af8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b63af8(ID param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  _NativeDictionary _Var4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  lVar3 = param_2 + DAT_101046328;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
    return;
  }
  _objc_msgSend(param_1,"serialize");
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  local_70 = (undefined *)
             (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar1 = (undefined8 *)(lVar3 + SentryOptions::releaseName);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  lStack_88 = puVar1[1];
  if (lStack_88 == 0) {
    local_90 = 0;
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    local_90 = *puVar1;
    local_78 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  _swift_bridgeObjectRetain();
  FUN_100b78fe8(&local_90,0x657361656c6572,&DAT_e700000000000000);
  puVar1 = (undefined8 *)(lVar3 + SentryOptions::dist);
  _swift_beginAccess(puVar1,auStack_c0,0,0);
  lStack_88 = puVar1[1];
  if (lStack_88 == 0) {
    local_90 = 0;
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    local_90 = *puVar1;
    local_78 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  uVar6 = 0xeb00000000746e65;
  lVar7 = 0x6d6e6f7269766e65;
  _swift_bridgeObjectRetain();
  FUN_100b78fe8(&local_90,0x74736964,&DAT_e400000000000000);
  puVar5 = local_70;
  if (*(long *)(local_70 + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_70);
    FUN_100071370(0x6d6e6f7269766e65);
    if ((uVar6 & 1) != 0) {
      FUN_10000cbfc(*(long *)(puVar5 + 0x38) + lVar7 * 0x20,&local_90);
      _swift_bridgeObjectRelease(puVar5);
      FUN_100013954(&local_90);
      goto LAB_100b63d58;
    }
    _swift_bridgeObjectRelease(puVar5);
  }
  lStack_88 = 0;
  local_90 = 0;
  local_78 = (undefined *)0x0;
  local_80 = 0;
  FUN_100013954(&local_90);
  puVar1 = (undefined8 *)(lVar3 + SentryOptions::environment);
  _swift_beginAccess(puVar1,auStack_d8,0,0);
  local_90 = *puVar1;
  lStack_88 = puVar1[1];
  local_78 = puVar2;
  _swift_bridgeObjectRetain();
  FUN_100b78fe8(&local_90,0x6d6e6f7269766e65,0xeb00000000746e65);
  puVar5 = local_70;
LAB_100b63d58:
  _swift_bridgeObjectRetain(puVar5);
  _Var4.unknown = (undefined *)0x7475626972747461;
  uVar6 = 0xea00000000007365;
  FUN_100071370();
  _swift_bridgeObjectRelease(puVar5);
  if ((uVar6 & 1) == 0) {
    lStack_88 = 0;
    local_90 = 0;
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    FUN_100b6730c(&DAT_101044768);
    Swift::_NativeDictionary::uncheckedRemove((Bucket)auStack_e8,SUB81(&local_90,0),_Var4);
    _swift_bridgeObjectRelease(local_e0);
  }
  FUN_100013954(&local_90);
  FUN_100b6c58c(puVar5);
  FUN_100bc7340();
  if (*(long *)(param_2 + DAT_101046338) == 0) {
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    _objc_msgSend(param_1,"addScopeObserver:",*(long *)(param_2 + DAT_101046338));
    _swift_bridgeObjectRelease(puVar5);
  }
  return;
}



/* Address: 0x100b63e9c | FUN_100b63e9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b63e9c(ID param_1)

{
  ID IVar1;
  ID self;
  undefined *puVar2;
  void *aBlock;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  code *local_30;
  undefined *local_28;
  
  IVar1 = _objc_msgSend(param_1,"isLowPowerModeEnabled");
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  puVar2 = &DAT_100f36408;
  _swift_allocObject(&DAT_100f36408,0x11,7);
  puVar2[0x10] = (char)IVar1;
  local_30 = FUN_100b673e4;
  local_50 = PTR___NSConcreteStackBlock_100ea82a0;
  local_48 = 0x42000000;
  local_40 = switchD_100bab490::caseD_51;
  puStack_38 = &DAT_100f36420;
  local_28 = puVar2;
  aBlock = __Block_copy(&local_50);
  _swift_release(local_28);
  _objc_msgSend(self,"configureScope:",aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x100b63f78 | FUN_100b63f78 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b63f78(long param_1)

{
  ID IVar1;
  long lVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  long unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + DAT_1010464a0) = 0;
  lVar2 = SentryOptions::enableAutoBreadcrumbTracking;
  _Var3.unknown = auStack_78;
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(param_1 + SentryOptions::enableAutoBreadcrumbTracking);
  if (*(char *)(param_1 + lVar2) == '\x01') {
    FUN_100b76d10();
    if (unaff_x20 != 0) {
      IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff68,"init");
      FUN_100bd7668(0);
      _objc_allocWithZone();
      lVar2 = 0;
      FUN_100bd6aa4();
      *(long *)(IVar1 + DAT_1010464a0) = lVar2;
      _swift_unknownObjectWeakAssign(lVar2 + _TtC6Sentry23SentryBreadcrumbTracker::delegate,IVar1);
      FUN_100bd6c4c(IVar1);
      FUN_100bd6e2c();
      FUN_100bd6d20();
      return IVar1;
    }
    FUN_100b84dac();
    FUN_100b84df8(5,0xd00000000000001d,0x8000000100dc7710,0xd000000000000081,0x8000000100dc7680,0x1b
                 );
  }
  else {
    FUN_100b84dac(0);
    Swift::_StringGuts::grow(0x48,_Var3);
    SVar6.bridgeObject = (void *)0x8000000100dc7250;
    SVar6.str = (char *)0xd000000000000014;
    SVar9.bridgeObject = pvVar5;
    SVar9.str = pcVar4;
    Swift::String::append(SVar6,SVar9);
    SVar7.bridgeObject = (void *)0x8000000100dc7010;
    SVar7.str = (char *)0xd000000000000027;
    SVar10.bridgeObject = pvVar5;
    SVar10.str = pcVar4;
    Swift::String::append(SVar7,SVar10);
    SVar8.bridgeObject = (void *)0x8000000100dc7640;
    SVar8.str = &DAT_d000000000000032;
    SVar11.bridgeObject = pvVar5;
    SVar11.str = pcVar4;
    Swift::String::append(SVar8,SVar11);
    FUN_100b84df8(1,0,0xe000000000000000,0xd000000000000081,0x8000000100dc7680,0x16);
    _swift_bridgeObjectRelease(0xe000000000000000);
  }
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Address: 0x100b64248 | FUN_100b64248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b64248(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ID IVar7;
  _StringGuts _Var8;
  char *pcVar9;
  void *pvVar10;
  long unaff_x20;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = SentryOptions::enableSwizzling;
  _Var8.unknown = auStack_78;
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(param_1 + SentryOptions::enableSwizzling);
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar6 = param_1;
    FUN_100b6455c();
    IVar7 = SentryNetworkTracker::sharedInstance
                      ((ID)&objc::class_t::SentryNetworkTracker,"sharedInstance");
    lVar3 = DAT_101046940;
    *(ID *)(unaff_x20 + DAT_101046940) = IVar7;
    if ((uVar6 & 1) != 0) {
      SentryNetworkTracker::enableNetworkTracking(IVar7,"enableNetworkTracking");
    }
    lVar1 = SentryOptions::enableNetworkBreadcrumbs;
    _swift_beginAccess(param_1 + SentryOptions::enableNetworkBreadcrumbs,&local_90,0,0);
    if (*(char *)(param_1 + lVar1) == '\x01') {
      _objc_msgSend(*(ID *)(unaff_x20 + lVar3),"enableNetworkBreadcrumbs");
    }
    lVar4 = SentryOptions::enableCaptureFailedRequests;
    _swift_beginAccess(param_1 + SentryOptions::enableCaptureFailedRequests,auStack_a8,0,0);
    if (*(char *)(param_1 + lVar4) == '\x01') {
      _objc_msgSend(*(ID *)(unaff_x20 + lVar3),"enableCaptureFailedRequests");
    }
    lVar2 = SentryOptions::enableGraphQLOperationTracking;
    _swift_beginAccess(param_1 + SentryOptions::enableGraphQLOperationTracking,auStack_c0,0,0);
    if (*(char *)(param_1 + lVar2) == '\x01') {
      _objc_msgSend(*(ID *)(unaff_x20 + lVar3),"enableGraphQLOperationTracking");
    }
    if ((((uVar6 & 1) != 0) || (*(char *)(param_1 + lVar1) == '\x01')) ||
       ((*(byte *)(param_1 + lVar4) & 1) != 0)) {
      IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"init");
      FUN_100b64808();
      return IVar7;
    }
  }
  else {
    FUN_100b84dac(0);
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3b,_Var8);
    SVar11.bridgeObject = (void *)0x8000000100dc7250;
    SVar11.str = (char *)0xd000000000000014;
    SVar14.bridgeObject = pvVar10;
    SVar14.str = pcVar9;
    Swift::String::append(SVar11,SVar14);
    SVar12.bridgeObject = (void *)0x8000000100dc6fc0;
    SVar12.str = (char *)0xd000000000000020;
    SVar15.bridgeObject = pvVar10;
    SVar15.str = pcVar9;
    Swift::String::append(SVar12,SVar15);
    SVar13.bridgeObject = (void *)0x8000000100dc75c0;
    SVar13.str = (char *)0xd000000000000025;
    SVar16.bridgeObject = pvVar10;
    SVar16.str = pcVar9;
    Swift::String::append(SVar13,SVar16);
    uVar5 = uStack_88;
    FUN_100b84df8(1,local_90,uStack_88,0xd000000000000082,0x8000000100dc7730,0x19);
    _swift_bridgeObjectRelease(uVar5);
  }
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Address: 0x100b6455c | FUN_100b6455c */

undefined8 FUN_100b6455c(ulong param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = param_1;
  FUN_100b8cd10();
  lVar1 = SentryOptions::enableAutoPerformanceTracing;
  if ((uVar3 & 1) == 0) {
    FUN_100b84dac(0);
    local_48 = 0;
    uStack_40 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3c,param_2);
    SVar10.bridgeObject = (void *)0x8000000100dc7250;
    SVar10.str = (char *)0xd000000000000014;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar10,SVar19);
    SVar11.bridgeObject = (void *)0x8000000100dc6fc0;
    SVar11.str = (char *)0xd000000000000020;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar11,SVar20);
    SVar12.bridgeObject = (void *)0x8000000100dc7410;
    SVar12.str = (char *)0xd000000000000026;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar12,SVar21);
    uVar8 = 0x4a;
    uVar5 = local_48;
    uVar9 = uStack_40;
  }
  else {
    _Var4.unknown = (undefined *)&local_48;
    pcVar6 = (char *)0x0;
    pvVar7 = (void *)0x0;
    _swift_beginAccess(param_1 + SentryOptions::enableAutoPerformanceTracing);
    lVar2 = SentryOptions::enableNetworkTracking;
    if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
      FUN_100b84dac(0);
      local_60 = 0;
      uStack_58 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var4);
      SVar13.bridgeObject = (void *)0x8000000100dc7250;
      SVar13.str = (char *)0xd000000000000014;
      SVar22.bridgeObject = pvVar7;
      SVar22.str = pcVar6;
      Swift::String::append(SVar13,SVar22);
      SVar14.bridgeObject = (void *)0x8000000100dc6fc0;
      SVar14.str = (char *)0xd000000000000020;
      SVar23.bridgeObject = pvVar7;
      SVar23.str = pcVar6;
      Swift::String::append(SVar14,SVar23);
      SVar15.bridgeObject = (void *)0x8000000100dc74c0;
      SVar15.str = &DAT_d000000000000032;
      SVar24.bridgeObject = pvVar7;
      SVar24.str = pcVar6;
      Swift::String::append(SVar15,SVar24);
      uVar8 = 0x4f;
      uVar5 = local_60;
      uVar9 = uStack_58;
    }
    else {
      _Var4.unknown = (undefined *)&local_60;
      pcVar6 = (char *)0x0;
      pvVar7 = (void *)0x0;
      _swift_beginAccess(param_1 + SentryOptions::enableNetworkTracking);
      if ((*(byte *)(param_1 + lVar2) & 1) != 0) {
        return 1;
      }
      FUN_100b84dac(0);
      Swift::_StringGuts::grow(0x41,_Var4);
      SVar16.bridgeObject = (void *)0x8000000100dc7250;
      SVar16.str = (char *)0xd000000000000014;
      SVar25.bridgeObject = pvVar7;
      SVar25.str = pcVar6;
      Swift::String::append(SVar16,SVar25);
      SVar17.bridgeObject = (void *)0x8000000100dc6fc0;
      SVar17.str = (char *)0xd000000000000020;
      SVar26.bridgeObject = pvVar7;
      SVar26.str = pcVar6;
      Swift::String::append(SVar17,SVar26);
      SVar18.bridgeObject = (void *)0x8000000100dc7950;
      SVar18.str = (char *)0xd00000000000002b;
      SVar27.bridgeObject = pvVar7;
      SVar27.str = pcVar6;
      Swift::String::append(SVar18,SVar27);
      uVar8 = 0x54;
      uVar5 = 0;
      uVar9 = 0xe000000000000000;
    }
  }
  FUN_100b84df8(1,uVar5,uVar9,0xd000000000000082,0x8000000100dc7730,uVar8);
  _swift_bridgeObjectRelease(uVar9);
  return 0;
}



/* Address: 0x100b64808 | FUN_100b64808 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b64808(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  NSString *pNVar9;
  void *pvVar10;
  char **ppcVar11;
  NSString **ppNVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *local_d0;
  NSString *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined *local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined *local_80;
  
  IVar2 = _objc_msgSend((ID)&objc::class_t::SentryNSURLSessionTaskSearch,
                        "urlSessionTaskClassesToTrack");
  FUN_100b6730c(&DAT_1010447d8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar14 = *(long *)(IVar2 + 0x10);
  if (lVar14 != 0) {
    uVar3 = 0;
    FUN_100b673ec(0,&DAT_1010447e0,&PTR__OBJC_CLASS___NSURLSessionTask_100f8e178);
    uVar13 = *(undefined8 *)(unaff_x20 + DAT_101046940);
    puVar4 = &DAT_1010447e8;
    FUN_100b6730c();
    _swift_initStaticObject();
    local_a0 = "resume";
    local_90 = 0;
    local_88 = 1;
    uStack_98 = uVar3;
    local_80 = puVar4;
    if (DAT_101042de8 != -1) {
      _swift_once(&DAT_101042de8,FUN_100bb0224);
    }
    puVar4 = &DAT_1010447f0;
    FUN_100b6730c();
    _swift_initStaticObject();
    lVar16 = 0x20;
    while( true ) {
      uVar1 = DAT_101046930;
      lVar14 = lVar14 + -1;
      uVar15 = *(undefined8 *)(IVar2 + lVar16);
      puVar5 = &DAT_100f36458;
      _swift_allocObject(&DAT_100f36458,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar13;
      _swift_retain(uVar1);
      ppcVar11 = &local_a0;
      uVar6 = uVar15;
      FUN_100b661cc(uVar15,ppcVar11,FUN_100b655e8,FUN_100b69738,FUN_100b651b8);
      if (ppcVar11 == (char **)0x0) {
        uVar6 = uVar15;
        _swift_getObjCClassFromMetadata(uVar15);
        puVar8 = &DAT_100f36480;
        _swift_allocObject(&DAT_100f36480,0x48,7);
        *(undefined8 *)(puVar8 + 0x18) = uStack_98;
        *(char **)(puVar8 + 0x10) = local_a0;
        *(ulong *)(puVar8 + 0x28) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(puVar8 + 0x20) = local_90;
        *(undefined **)(puVar8 + 0x30) = local_80;
        *(code **)(puVar8 + 0x38) = FUN_100b67448;
        *(undefined **)(puVar8 + 0x40) = puVar5;
        local_d8 = FUN_100b67454;
        local_f8 = PTR___NSConcreteStackBlock_100ea82a0;
        local_f0 = 0x42000000;
        local_e8 = FUN_100bf0a78;
        puStack_e0 = &DAT_100f36498;
        local_d0 = puVar8;
        pvVar10 = __Block_copy(&local_f8);
        puVar8 = local_d0;
        _swift_retain(puVar5);
        _swift_release(puVar8);
        _objc_msgSend((ID)&objc::class_t::SentrySwizzleWrapperHelper,
                      "swizzleInstanceMethod:inClass:mode:key:factory:","resume",uVar6,2,uVar1,
                      pvVar10);
        __Block_release(pvVar10);
        _swift_release(uVar1);
        _swift_release(puVar5);
      }
      else {
        uVar7 = 0;
        FUN_100b84dac(0);
        FUN_100b84df8(4,uVar6,ppcVar11,0xd000000000000062,0x8000000100dc77d0,0x62,uVar7);
        _swift_release(uVar1);
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(ppcVar11);
      }
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _NSSelectorFromString();
      local_b8 = 0;
      uStack_b0 = 1;
      local_c8 = pNVar9;
      uStack_c0 = uVar3;
      local_a8 = puVar4;
      if (DAT_101042df0 != -1) {
        _swift_once(&DAT_101042df0,FUN_100bb0248);
      }
      uVar1 = DAT_101046938;
      puVar5 = &DAT_100f364d0;
      _swift_allocObject(&DAT_100f364d0,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar13;
      _swift_retain(uVar1);
      ppNVar12 = &local_c8;
      uVar6 = uVar15;
      FUN_100b661cc(uVar15,ppNVar12,FUN_100b65334,FUN_100b69714,FUN_100b65070);
      if (ppNVar12 == (NSString **)0x0) {
        _swift_getObjCClassFromMetadata(uVar15);
        puVar8 = &DAT_100f364f8;
        _swift_allocObject(&DAT_100f364f8,0x48,7);
        *(undefined8 *)(puVar8 + 0x18) = uStack_c0;
        *(NSString **)(puVar8 + 0x10) = local_c8;
        *(ulong *)(puVar8 + 0x28) = CONCAT71(uStack_af,uStack_b0);
        *(undefined8 *)(puVar8 + 0x20) = local_b8;
        *(undefined **)(puVar8 + 0x30) = local_a8;
        *(code **)(puVar8 + 0x38) = FUN_100b67460;
        *(undefined **)(puVar8 + 0x40) = puVar5;
        local_d8 = FUN_100b67494;
        local_f8 = PTR___NSConcreteStackBlock_100ea82a0;
        local_f0 = 0x42000000;
        local_e8 = FUN_100bf0a78;
        puStack_e0 = &DAT_100f36510;
        local_d0 = puVar8;
        pvVar10 = __Block_copy(&local_f8);
        puVar8 = local_d0;
        _swift_retain(puVar5);
        _swift_release(puVar8);
        _objc_msgSend((ID)&objc::class_t::SentrySwizzleWrapperHelper,
                      "swizzleInstanceMethod:inClass:mode:key:factory:",pNVar9,uVar15,2,uVar1,
                      pvVar10);
        __Block_release(pvVar10);
        _swift_release(uVar1);
        _swift_release(puVar5);
      }
      else {
        FUN_100b84dac(0);
        FUN_100b84df8(4,uVar6,ppNVar12,0xd000000000000062,0x8000000100dc77d0,0x62);
        _swift_release(uVar1);
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(ppNVar12);
      }
      if (lVar14 == 0) break;
      lVar16 = lVar16 + 8;
    }
    _swift_bridgeObjectRelease(IVar2);
    return;
  }
  _swift_bridgeObjectRelease(IVar2);
  return;
}



/* Address: 0x100b64d54 | FUN_100b64d54 */

void FUN_100b64d54(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_101044740,FUN_100b6249c,&DAT_101044748,
                &TargetProtocolConformanceDescriptor_100c99bf8);
  return;
}



/* Address: 0x100b64d78 | FUN_100b64d78 */

void FUN_100b64d78(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_101044780,FUN_100b65a1c,&DAT_101044788,
                &TargetProtocolConformanceDescriptor_100c9d928);
  return;
}



/* Address: 0x100b64d9c | FUN_100b64d9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16]
FUN_100b64d9c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 auVar1 [16];
  
  FUN_100b6730c(param_3);
  _objc_allocWithZone();
  (*param_4)(param_1,param_2);
  if (param_1 == 0) {
    param_5 = 0;
  }
  else {
    FUN_100b67644(param_5,param_3,param_6);
  }
  auVar1._8_8_ = param_5;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100b64e40 | FUN_100b64e40 */

void FUN_100b64e40(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_101044790,FUN_100b62b80,&DAT_101044798,
                &TargetProtocolConformanceDescriptor_100c9a7f0);
  return;
}



/* Address: 0x100b64e64 | FUN_100b64e64 */

void FUN_100b64e64(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_1010447a8,FUN_100b6299c,0x1010447b0,
                &TargetProtocolConformanceDescriptor_100c9a438);
  return;
}



/* Address: 0x100b64e88 | FUN_100b64e88 */

void FUN_100b64e88(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,0x1010447b8,FUN_100b63f78,0x1010447c0,
                &TargetProtocolConformanceDescriptor_100c9bac8);
  return;
}



/* Address: 0x100b64eac | FUN_100b64eac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b64eac(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb12f8(0);
  _objc_allocWithZone();
  FUN_100bb0f80(param_1,param_2);
  return;
}



/* Address: 0x100b64f18 | FUN_100b64f18 */

void FUN_100b64f18(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_1010447c8,FUN_100b64248,&DAT_1010447d0,
                &TargetProtocolConformanceDescriptor_100c9c090);
  return;
}



/* Address: 0x100b64f3c | FUN_100b64f3c */

void FUN_100b64f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,0x101044838,FUN_100b666a8,0x101044840,
                &TargetProtocolConformanceDescriptor_100c9fb30);
  return;
}



/* Address: 0x100b64f60 | FUN_100b64f60 */

void FUN_100b64f60(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446a8,&DAT_100f36220);
  return;
}



/* Address: 0x100b64f74 | FUN_100b64f74 */

void FUN_100b64f74(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446b0,&DAT_100f36240);
  return;
}



/* Address: 0x100b64f88 | FUN_100b64f88 */

void FUN_100b64f88(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446b8,&DAT_100f36268);
  return;
}



/* Address: 0x100b64f9c | FUN_100b64f9c */

void FUN_100b64f9c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446c0,&DAT_100f36290);
  return;
}



/* Address: 0x100b64fb0 | FUN_100b64fb0 */

void FUN_100b64fb0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446c8,&DAT_100f362c0);
  return;
}



/* Address: 0x100b64fc4 | FUN_100b64fc4 */

void FUN_100b64fc4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446d0,&DAT_100f362e8);
  return;
}



/* Address: 0x100b64fd8 | FUN_100b64fd8 */

void FUN_100b64fd8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446d8,&DAT_100f36318);
  return;
}



/* Address: 0x100b64fec | FUN_100b64fec */

void FUN_100b64fec(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446e0,&DAT_100f36348);
  return;
}



/* Address: 0x100b65000 | FUN_100b65000 */

void FUN_100b65000(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446e8,&DAT_100f36368);
  return;
}



/* Address: 0x100b65014 | FUN_100b65014 */

void FUN_100b65014(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_1010446f0,&DAT_100f36390);
  return;
}



/* Address: 0x100b65028 | FUN_100b65028 */

void FUN_100b65028(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_101044750,FUN_100b6304c,&DAT_101044758,
                &TargetProtocolConformanceDescriptor_100c9ba10);
  return;
}



/* Address: 0x100b6504c | FUN_100b6504c */

void FUN_100b6504c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b64d9c(param_1,param_2,&DAT_101044770,FUN_100b65948,&DAT_101044778,
                &TargetProtocolConformanceDescriptor_100c9d8c0);
  return;
}



/* Address: 0x100b65070 | FUN_100b65070 */

String FUN_100b65070(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  String SVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined *local_68;
  
  puVar2 = &DAT_1010447f0;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar2[0x28] = param_2 & 1;
  local_68 = puVar2;
  _swift_bridgeObjectRetain(param_3);
  FUN_100bb1e1c();
  puVar1 = local_68;
  uVar3 = 0;
  FUN_100b673ec(0,&DAT_1010447e0,&PTR__OBJC_CLASS___NSURLSessionTask_100f8e178);
  uVar4 = 0;
  local_90 = uVar3;
  FUN_100b67614();
  puStack_80 = PTR___type_metadata_for____100eae0c8 + 8;
  puVar2 = &DAT_100c98b50;
  local_88 = uVar4;
  _swift_getKeyPath(&DAT_100c98b50,&local_90);
  _swift_retain();
  puVar5 = puVar1;
  FUN_100b62388(puVar1,puVar2);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(puVar1);
  local_68 = puVar5;
  FUN_100b6730c(&DAT_101044808);
  FUN_100b67644(&DAT_100faaa00,&DAT_101044808,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar6 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                    ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(puVar5);
  return SVar6;
}



/* Address: 0x100b651b8 | FUN_100b651b8 */

String FUN_100b651b8(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  String SVar5;
  undefined8 local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *local_68;
  
  puVar2 = &DAT_1010447e8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar2[0x28] = param_2 & 1;
  local_68 = puVar2;
  _swift_bridgeObjectRetain(param_3);
  FUN_100bb1e28();
  puVar1 = local_68;
  uVar3 = 0;
  FUN_100b673ec(0,&DAT_1010447e0,&PTR__OBJC_CLASS___NSURLSessionTask_100f8e178);
  puStack_88 = PTR___type_metadata_for____100eae0c8 + 8;
  puVar2 = &DAT_100c98b50;
  local_90 = uVar3;
  local_80 = puStack_88;
  _swift_getKeyPath(&DAT_100c98b50,&local_90);
  _swift_retain();
  puVar4 = puVar1;
  FUN_100b62388(puVar1,puVar2);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(puVar1);
  local_68 = puVar4;
  FUN_100b6730c(&DAT_101044808);
  FUN_100b67644(&DAT_100faaa00,&DAT_101044808,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar5 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                    ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(puVar4);
  return SVar5;
}


