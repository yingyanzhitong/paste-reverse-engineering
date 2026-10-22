/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b2e184 | SentryTracer::setMeasurement:measurement: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryTracer::setMeasurement_measurement_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    FUN_100b3a1f0();
    if ((int)param_4 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x1bc,&cf_Thenameofthemeasurementisnil_Discardingthemeasurement_);
    }
  }
  else {
    lVar2 = (long)_measurements;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_sync_enter();
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + lVar2),param_4,param_3);
    _objc_sync_exit(uVar1);
  }
  return;
}



/* Address: 0x100b2e24c | SentryTracer::measurements */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::measurements(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  
  lVar3 = (long)_measurements;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + lVar3));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b2e2bc | SentryTracer::finish */

/* Function Stack Size: 0x10 bytes */

void SentryTracer::finish(ID param_1,SEL param_2)

{
  objc_stub::finishWithStatus_(param_1,1);
  return;
}



/* Address: 0x100b2e2c4 | SentryTracer::finishWithStatus: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::finishWithStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  
  IVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c083c0(param_1);
    objc_stub::FUN_100c0a000(IVar1);
    FUN_100b16920();
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0x1d4
                  ,&cf_FinishedtracewithtracerprofilerReferenceId___andstatus___);
  }
  _objc_sync_enter();
  objc_stub::FUN_100c0e9c0(param_1,1);
  _objc_sync_exit(param_1);
  *(unsigned_long_long *)(param_1 + (long)_finishStatus) = param_3;
  objc_stub::FUN_100bfecc0(param_1);
  return;
}



/* Address: 0x100b2e3c0 | SentryTracer::finishForCrash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::finishForCrash(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::FUN_100c0e9c0(param_1,1);
  *(undefined8 *)(param_1 + (long)_finishStatus) = 10;
  IVar1 = objc_stub::FUN_100c02700(param_1,10,0);
  if ((IVar1 & 1) != 0) {
    return;
  }
  IVar1 = objc_stub::FUN_100c107e0(param_1);
  objc_stub::FUN_100c099a0(*(ID *)(param_1 + (long)_hub),IVar1);
  return;
}



/* Address: 0x100b2e440 | SentryTracer::canBeFinished */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::canBeFinished(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  ID IVar3;
  ID IVar4;
  
  IVar3 = objc_stub::isFinished(param_1);
  iVar1 = (int)IVar3;
  if (iVar1 == 0) {
    IVar3 = objc_stub::FUN_100c033a0(param_1);
    _objc_sync_enter();
    IVar4 = objc_stub::FUN_100c113e0(param_1);
    if (((((uint)IVar4 | (uint)IVar3) & 1) == 0) &&
       (IVar4 = objc_stub::FUN_100c032a0(param_1), iVar1 = (int)IVar4, iVar1 != 0)) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        IVar3 = objc_stub::spanId(param_1);
        objc_stub::FUN_100c0a0a0(IVar3);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                      0x1fd,&cf_Spanwithid__isn_twaitingonchildrenandneedsidletimeoutdispatched_);
      }
      objc_stub::FUN_100c0f440(param_1);
    }
    else {
      IVar4 = objc_stub::FUN_100c113e0(param_1);
      uVar2 = (uint)IVar4;
      if ((((uint)IVar3 | uVar2 ^ 0xffffffff) & 1) == 0) {
        _objc_sync_exit(param_1);
        iVar1 = 0;
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          IVar3 = objc_stub::FUN_100c10960(param_1);
          objc_stub::FUN_100c0a000(IVar3);
          objc_stub::FUN_100c0a000(*(ID *)(param_1 + (long)_profilerReferenceID));
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        ,0x20c,&cf_Canfinishtracer___profileReferenceId___);
        }
        objc_stub::finishInternal(param_1);
        return;
      }
      FUN_100b3a1c0();
      if (uVar2 != 0) {
        IVar3 = objc_stub::spanId(param_1);
        objc_stub::FUN_100c0a0a0(IVar3);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                      0x206,&
                            cf_Spanwithid__haschildrenbuthasn_tfinishedyetsoisn_twaitingforthemrightnow_
                     );
      }
    }
    _objc_sync_exit(param_1);
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 == 0) {
      return;
    }
    IVar3 = objc_stub::spanId(param_1);
    objc_stub::FUN_100c0a0a0(IVar3);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",499,
                  &cf_Spanwithid__isalreadyfinished);
  }
  return;
}



/* Address: 0x100b2e6a4 | SentryTracer::hasUnfinishedChildSpansToWaitFor */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryTracer::hasUnfinishedChildSpansToWaitFor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ID self;
  ID IVar8;
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
  IVar1 = objc_stub::configuration(param_1);
  IVar1 = objc_stub::FUN_100c113c0(IVar1);
  if ((int)IVar1 == 0) {
    bVar6 = 0;
  }
  else {
    lVar7 = (long)_children;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    _objc_sync_enter();
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar1 = *(ID *)(param_1 + lVar7);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar7 = *local_120;
      do {
        IVar8 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_128 + IVar8 * 8);
          IVar4 = objc_stub::FUN_100c0eca0(param_1);
          if (IVar4 == 0) {
LAB_100b2e7c0:
            IVar4 = objc_stub::isFinished(self);
            if ((int)IVar4 == 0) {
              bVar6 = 1;
              goto LAB_100b2e808;
            }
          }
          else {
            uVar5 = objc_stub::FUN_100c0eca0(param_1);
            (**(code **)(uVar5 + 0x10))(uVar5,self);
            if ((uVar5 & 1) == 0) goto LAB_100b2e7c0;
          }
          IVar8 = IVar8 + 1;
        } while (IVar3 != IVar8);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
    bVar6 = 0;
LAB_100b2e808:
    _objc_sync_exit(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b2e884 | SentryTracer::finishInternal */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::finishInternal(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  IVar3 = objc_stub::FUN_100c02700(param_1,2,1);
  iVar2 = (int)IVar3;
  if (iVar2 == 0) {
    IVar3 = objc_stub::FUN_100c107e0(param_1);
    uVar5 = *(undefined8 *)(param_1 + (long)_hub);
    uVar6 = *(undefined8 *)(param_1 + (long)_dispatchQueue);
    lVar7 = (long)_isProfiling;
    uVar1 = *(undefined1 *)(param_1 + lVar7);
    IVar4 = objc_stub::FUN_100c0f4e0(param_1);
    FUN_100b42f68(uVar5,uVar6,IVar3,uVar1,IVar4,*(undefined8 *)(param_1 + (long)_startSystemTime));
    *(undefined1 *)(param_1 + lVar7) = 0;
  }
  else {
    FUN_100b3a1c0();
    if (iVar2 == 0) {
      return;
    }
    IVar3 = objc_stub::FUN_100c10960(param_1);
    objc_stub::FUN_100c0a000(IVar3);
    objc_stub::FUN_100c0a000(*(ID *)(param_1 + (long)_profilerReferenceID));
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0x22a
                  ,&cf_Discardingtransactionfortrace___profileReferenceId___);
  }
  return;
}



/* Address: 0x100b2e9e4 | SentryTracer::finishTracer:shouldCleanUp: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

bool SentryTracer::finishTracer_shouldCleanUp_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  ID self;
  ID IVar9;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  objc_super local_108;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_4 != 0) {
    objc_stub::FUN_100bfed40(param_1);
  }
  IVar4 = objc_stub::isFinished(param_1);
  iVar1 = (int)IVar4;
  if (iVar1 == 0) {
    _objc_sync_enter();
    IVar4 = objc_stub::isFinished(param_1);
    iVar1 = (int)IVar4;
    if (iVar1 == 0) {
      IVar4 = objc_stub::FUN_100c05640(param_1);
      if ((((int)IVar4 != 0) && (IVar4 = objc_stub::FUN_100c113e0(param_1), (IVar4 & 1) == 0)) &&
         (IVar4 = objc_stub::status(param_1), IVar4 != 0)) {
        IVar4 = objc_stub::status(param_1);
        *(ID *)(param_1 + (long)_finishStatus) = IVar4;
      }
      local_108.super_class = &objc::class_t::SentryTracer;
      local_108.receiver = param_1;
      _objc_msgSendSuper2(&local_108,"finishWithStatus:",
                          *(undefined8 *)(param_1 + (long)_finishStatus));
      _objc_sync_exit(param_1);
      if (param_4 != 0) {
        IVar4 = objc_stub::delegate(param_1);
        objc_stub::FUN_100c109e0(IVar4,param_1);
        IVar4 = objc_stub::FUN_100c02640(param_1);
        if (IVar4 != 0) {
          IVar4 = objc_stub::FUN_100c02640(param_1);
          (**(code **)(IVar4 + 0x10))(IVar4,param_1);
          objc_stub::FUN_100c0bca0(param_1,0);
        }
      }
      IVar4 = objc_stub::timestamp(param_1);
      IVar5 = objc_stub::FUN_100c0f4e0(param_1);
      objc_stub::FUN_100c10600(IVar4,IVar5);
      IVar4 = objc_stub::FUN_100c05640(param_1);
      iVar3 = (int)IVar4;
      iVar1 = 0;
      if (500.0 <= extraout_d0) {
        iVar1 = iVar3;
      }
      if (iVar1 == 1) {
        FUN_100b3a1d0();
        if (iVar3 != 0) {
          FUN_100b3a248("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        ,0x27f,&
                               cf_Autogeneratedtransactionexceededthemaxdurationof_fseconds_Notcapturingtransaction_
                       );
        }
      }
      else {
        lVar8 = (long)_hub;
        IVar4 = *(ID *)(param_1 + lVar8);
        if (IVar4 == 0) {
          FUN_100b3a1c0();
          if ((int)IVar4 != 0) {
            IVar4 = objc_stub::FUN_100c10960(*(ID *)(param_1 + (long)_traceContext));
            objc_stub::FUN_100c0a000(IVar4);
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          ,0x285,&cf_Hubwasnilfortracer___nothingtodo_);
          }
        }
        else {
          if (param_4 != 0) {
            IVar4 = objc_stub::scope(IVar4);
            IVar4 = objc_stub::FUN_100c0efc0(IVar4);
            if (IVar4 == param_1) {
              IVar4 = objc_stub::scope(*(ID *)(param_1 + lVar8));
              objc_stub::FUN_100c0dc60(IVar4,0);
            }
          }
          IVar4 = objc_stub::configuration(param_1);
          IVar4 = objc_stub::FUN_100c026c0(IVar4);
          if ((int)IVar4 != 0) {
            IVar4 = objc_stub::FUN_100c113e0(param_1);
            iVar1 = 0;
            if ((IVar4 & 1) == 0) {
              FUN_100b3a1c0();
              if (iVar1 != 0) {
                FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                              ,0x292,&
                                     cf_Notcapturingtransactionbecausefinishwasnotcalledbeforetimingout_
                             );
              }
              goto LAB_100b2eb24;
            }
          }
          lVar8 = (long)_children;
          uVar6 = *(undefined8 *)(param_1 + lVar8);
          _objc_sync_enter();
          objc_stub::FUN_100c03580(*(ID *)(param_1 + (long)_configuration));
          if ((extraout_d0_00 <= 0.0) ||
             (IVar4 = objc_stub::count(*(ID *)(param_1 + lVar8)), IVar4 != 0)) {
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            lStack_148 = 0;
            local_150 = 0;
            uStack_138 = 0;
            local_140 = (long *)0x0;
            IVar4 = *(ID *)(param_1 + lVar8);
            IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar4,&local_150,auStack_f8,0x10);
            if (IVar5 != 0) {
              lVar8 = *local_140;
              do {
                IVar9 = 0;
                do {
                  if (*local_140 != lVar8) {
                    _objc_enumerationMutation(IVar4);
                  }
                  self = *(ID *)(lStack_148 + IVar9 * 8);
                  IVar7 = objc_stub::isFinished(self);
                  if ((IVar7 & 1) == 0) {
                    objc_stub::finishWithStatus_(self,param_3);
                    IVar7 = objc_stub::timestamp(param_1);
                    objc_stub::setTimestamp_(self,IVar7);
                  }
                  IVar9 = IVar9 + 1;
                } while (IVar5 != IVar9);
                IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                                  (IVar4,&local_150,auStack_f8,0x10);
              } while (IVar5 != 0);
            }
            IVar4 = objc_stub::FUN_100c05640(param_1);
            if ((int)IVar4 != 0) {
              objc_stub::FUN_100c10c20(param_1);
            }
            _objc_sync_exit(uVar6);
            bVar2 = 0;
            goto LAB_100b2eb28;
          }
          FUN_100b3a1c0();
          if ((int)IVar4 != 0) {
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          ,0x299,&
                                 cf_WaswaitingfortimeoutforUIeventtracebutithadnochildren_willnotkeeptransaction_
                         );
          }
          _objc_sync_exit(uVar6);
        }
      }
    }
    else {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        IVar4 = objc_stub::FUN_100c10960(*(ID *)(param_1 + (long)_traceContext));
        objc_stub::FUN_100c0a000(IVar4);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                      0x24b,&cf_Tracer__wasalreadyfinishedaftersynchronizing_);
      }
      _objc_sync_exit(param_1);
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      IVar4 = objc_stub::FUN_100c10960(*(ID *)(param_1 + (long)_traceContext));
      objc_stub::FUN_100c0a000(IVar4);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x245,&cf_Tracer__wasalreadyfinished_);
    }
  }
LAB_100b2eb24:
  bVar2 = 1;
LAB_100b2eb28:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b2efb4 | SentryTracer::trimEndTimestamp */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::trimEndTimestamp(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  ID self_00;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID self_01;
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
  self = objc_stub::FUN_100c0f4e0(param_1);
  lVar4 = (long)_children;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  _objc_sync_enter();
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self_00 = *(ID *)(param_1 + lVar4);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self_00);
        }
        self_01 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::timestamp(self_01);
        if (IVar3 != 0) {
          IVar3 = objc_stub::timestamp(self_01);
          IVar3 = objc_stub::FUN_100bff840(self,IVar3);
          if (IVar3 == 0xffffffffffffffff) {
            self = objc_stub::timestamp(self_01);
          }
        }
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (self != 0) {
    objc_stub::setTimestamp_(param_1,self);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b2f19c | SentryTracer::updateStartTime: */

/* Function Stack Size: 0x18 bytes */

void SentryTracer::updateStartTime_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryTracer;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"setStartTimestamp:");
  *(undefined1 *)(param_1 + (long)_startTimeChanged) = 1;
  return;
}



/* Address: 0x100b2f1ec | SentryTracer::toTransaction */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::toTransaction(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *self;
  undefined8 uVar2;
  class_t *self_00;
  ID self_01;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID self_02;
  ID IVar7;
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
  lVar6 = (long)_children;
  IVar1 = objc_stub::count(*(ID *)(param_1 + lVar6));
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c03c60((ID)self,IVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  _objc_sync_enter();
  objc_stub::FUN_100bfd740(IVar1,*(undefined8 *)(param_1 + lVar6));
  _objc_sync_exit(uVar2);
  self_00 = &objc::class_t::SentryTransaction;
  _objc_alloc();
  self_01 = objc_stub::FUN_100c04dc0((ID)self_00,param_1,IVar1);
  IVar3 = objc_stub::FUN_100c10ac0(param_1);
  IVar3 = objc_stub::name(IVar3);
  objc_stub::FUN_100c0e4c0(self_01,IVar3);
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::frames(param_1);
  if (IVar4 != 0) {
    IVar4 = objc_stub::frames(param_1);
    objc_stub::FUN_100bfd740(IVar3,IVar4);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
  if (IVar4 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        self_02 = *(ID *)(lStack_128 + IVar7 * 8);
        IVar5 = objc_stub::frames(self_02);
        if (IVar5 != 0) {
          IVar5 = objc_stub::frames(self_02);
          objc_stub::FUN_100bfd740(IVar3,IVar5);
        }
        IVar7 = IVar7 + 1;
      } while (IVar4 != IVar7);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_e8,0x10);
    } while (IVar4 != 0);
  }
  IVar1 = objc_stub::count(IVar3);
  if (IVar1 != 0) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar1 = objc_stub::FUN_100c00bc0(IVar1);
    IVar1 = objc_stub::FUN_100c02d60(IVar1,IVar3);
    objc_stub::FUN_100c0b480(self_01,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return self_01;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b2f4d8 | SentryTracer::getTracer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTracer::getTracer_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  if (param_3 != 0) {
    IVar1 = objc_stub::class((ID)&objc::class_t::SentryTracer);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 != 0) {
      return param_3;
    }
    IVar1 = objc_stub::class((ID)&objc::class_t::SentrySpanInternal);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c109c0(param_3);
      return IVar1;
    }
  }
  return 0;
}



/* Address: 0x100b2f56c | SentryTracer::transactionContext */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::transactionContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_transactionContext);
}



/* Address: 0x100b2f57c | SentryTracer::setTransactionContext: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setTransactionContext_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_transactionContext) = param_3;
  return;
}



/* Address: 0x100b2f590 | SentryTracer::finishCallback */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::finishCallback(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_finishCallback);
}



/* Address: 0x100b2f5a0 | SentryTracer::setFinishCallback: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setFinishCallback_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_finishCallback) = param_3;
  return;
}



/* Address: 0x100b2f5ac | SentryTracer::shouldIgnoreWaitForChildrenCallback */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::shouldIgnoreWaitForChildrenCallback(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_shouldIgnoreWaitForChildrenCallback);
}



/* Address: 0x100b2f5bc | SentryTracer::setShouldIgnoreWaitForChildrenCallback: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setShouldIgnoreWaitForChildrenCallback_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_shouldIgnoreWaitForChildrenCallback) = param_3;
  return;
}



/* Address: 0x100b2f5c8 | SentryTracer::delegate */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::delegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_delegate);
}



/* Address: 0x100b2f5e8 | SentryTracer::setDelegate: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_delegate) = param_3;
  return;
}



/* Address: 0x100b2f5fc | SentryTracer::startSystemTime */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryTracer::startSystemTime(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_startSystemTime);
}



/* Address: 0x100b2f60c | SentryTracer::setStartSystemTime: */

/* Function Stack Size: 0x18 bytes */

void SentryTracer::setStartSystemTime_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_startSystemTime) = param_3;
  return;
}



/* Address: 0x100b2f61c | SentryTracer::finishStatus */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryTracer::finishStatus(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_finishStatus);
}



/* Address: 0x100b2f62c | SentryTracer::setFinishStatus: */

/* Function Stack Size: 0x18 bytes */

void SentryTracer::setFinishStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_finishStatus) = param_3;
  return;
}



/* Address: 0x100b2f63c | SentryTracer::wasFinishCalled */

/* Function Stack Size: 0x10 bytes */

bool SentryTracer::wasFinishCalled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_wasFinishCalled);
}



/* Address: 0x100b2f64c | SentryTracer::setWasFinishCalled: */

/* Function Stack Size: 0x14 bytes */

void SentryTracer::setWasFinishCalled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_wasFinishCalled) = (char)param_3;
  return;
}



/* Address: 0x100b2f65c | SentryTracer::configuration */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::configuration(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_configuration);
}



/* Address: 0x100b2f66c | SentryTracer::setConfiguration: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setConfiguration_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_configuration) = param_3;
  return;
}



/* Address: 0x100b2f678 | SentryTracer::dispatchQueue */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::dispatchQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_dispatchQueue);
}



/* Address: 0x100b2f688 | SentryTracer::setDispatchQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setDispatchQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_dispatchQueue) = param_3;
  return;
}



/* Address: 0x100b2f69c | SentryTracer::debugImageProvider */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::debugImageProvider(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_debugImageProvider);
}



/* Address: 0x100b2f6ac | SentryTracer::setDebugImageProvider: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setDebugImageProvider_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_debugImageProvider) = param_3;
  return;
}



/* Address: 0x100b2f6c0 | SentryTracer::isProfiling */

/* Function Stack Size: 0x10 bytes */

bool SentryTracer::isProfiling(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_isProfiling);
}



/* Address: 0x100b2f6d0 | SentryTracer::setIsProfiling: */

/* Function Stack Size: 0x14 bytes */

void SentryTracer::setIsProfiling_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_isProfiling) = (char)param_3;
  return;
}



/* Address: 0x100b2f6e0 | SentryTracer::hub */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::hub(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hub);
}



/* Address: 0x100b2f6f0 | SentryTracer::setHub: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::setHub_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_hub) = param_3;
  return;
}



/* Address: 0x100b2f704 | SentryTracer::profilerReferenceID */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::profilerReferenceID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_profilerReferenceID);
}



/* Address: 0x100b2f714 | SentryTracer::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_profilerReferenceID) = 0;
  *(undefined8 *)(param_1 + (long)_hub) = 0;
  *(undefined8 *)(param_1 + (long)_debugImageProvider) = 0;
  *(undefined8 *)(param_1 + (long)_dispatchQueue) = 0;
  *(undefined8 *)(param_1 + (long)_configuration) = 0;
  _objc_destroyWeak(param_1 + (long)_delegate);
  *(undefined8 *)(param_1 + (long)_shouldIgnoreWaitForChildrenCallback) = 0;
  *(undefined8 *)(param_1 + (long)_finishCallback) = 0;
  *(undefined8 *)(param_1 + (long)_transactionContext) = 0;
  *(undefined8 *)(param_1 + (long)_children) = 0;
  *(undefined8 *)(param_1 + (long)_deadlineTimeoutBlock) = 0;
  *(undefined8 *)(param_1 + (long)_idleTimeoutBlock) = 0;
  *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock) = 0;
  *(undefined8 *)(param_1 + (long)_measurements) = 0;
  *(undefined8 *)(param_1 + (long)_traceContext) = 0;
  return;
}



/* Address: 0x100b2f854 | SentryContinuousProfiler::start */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::start(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  class_t *self;
  undefined *self_00;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  DAT_1010e2c60 = 0;
  IVar2 = objc_stub::FUN_100c05c20(DAT_1010e2c48);
  iVar1 = (int)IVar2;
  if (iVar1 == 0) {
    self = &objc::class_t::SentryProfiler;
    _objc_alloc();
    DAT_1010e2c48 = objc_stub::FUN_100c04540((ID)self,1);
    iVar1 = 0;
    if (DAT_1010e2c48 != 0) {
      if (DAT_1010e2c68 != -1) {
        FUN_100b300dc();
      }
      objc_stub::FUN_100c0d320(DAT_1010e2c48,DAT_1010e2c58);
      __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
      self_00 = &_OBJC_CLASS___NSNotification;
      _objc_alloc();
      objc_stub::FUN_100c04660
                ((ID)self_00,&cf_io_sentry_notification_continuous_profile_started,0,0);
      FUN_100b4f418();
      objc_stub::FUN_100c09ac0(param_1);
      return;
    }
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0x83,&cf_Continuousprofilerwasunabletobeinitialized_);
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0x7d,&cf_Acontinuousprofilerisalreadyrunning_);
    }
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return;
}



/* Address: 0x100b2f9b0 | FUN_100b2f9b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b2f9b0(undefined8 param_1)

{
  FUN_100b4f3a8();
  DAT_1010e2c58 = param_1;
  return 0;
}



/* Address: 0x100b2f9dc | SentryContinuousProfiler::isCurrentlyProfiling */

/* Function Stack Size: 0x10 bytes */

bool SentryContinuousProfiler::isCurrentlyProfiling(ID param_1,SEL param_2)

{
  ID IVar1;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  IVar1 = objc_stub::FUN_100c05c20(DAT_1010e2c48);
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return (bool)IVar1;
}



/* Address: 0x100b2fa38 | SentryContinuousProfiler::stop */

/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::stop(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  IVar2 = objc_stub::FUN_100c05c20(DAT_1010e2c48);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0xa4,&cf_Nocontinuousprofileriscurrentlyrunning_);
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0xb6,&cf_Stoppingcontinuousprofileraftercurrentchunkcompletes_);
    }
    DAT_1010e2c60 = 1;
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return;
}



/* Address: 0x100b2fadc | SentryContinuousProfiler::currentProfilerID */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryContinuousProfiler::currentProfilerID(ID param_1,SEL param_2)

{
  ID IVar1;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  IVar1 = objc_stub::FUN_100c083a0(DAT_1010e2c48);
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return IVar1;
}



/* Address: 0x100b2fb40 | SentryContinuousProfiler::scheduleTimer */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::scheduleTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  IVar1 = objc_stub::dispatchQueueWrapper((ID)&objc::class_t::SentryDependencyContainerSwiftHelper);
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc0000000;
  local_38 = FUN_100b2fbd0;
  puStack_30 = &DAT_100f34720;
  local_28 = param_1;
  FUN_100b4f410(IVar1,&local_48);
  return;
}



/* Address: 0x100b2fbd0 | FUN_100b2fbd0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b2fbd0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0xffa760;
  __ZNSt3__15mutex4lockEv();
  if (DAT_1010e2c50 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_100b4f580(DAT_100ffa758,lVar2,"timerExpired",0,1);
    DAT_1010e2c50 = lVar2;
  }
  else {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0xce,&
                          cf_Therewasalreadyatimerinflight_butthiscodepathshouldn_tbetakenifthereisnoprofilerrunning_
                   );
    }
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return;
}



/* Address: 0x100b2fc80 | SentryContinuousProfiler::timerExpired */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::timerExpired(ID param_1,SEL param_2)

{
  char cVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID IStack_60;
  ID local_58;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  IVar3 = objc_stub::FUN_100c05c20(DAT_1010e2c48);
  iVar2 = (int)IVar3;
  if ((IVar3 & 1) == 0) {
    FUN_100b3a1e0();
    if (iVar2 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0xdd,&
                          cf_Currentprofilerisnotrunning_Sendingwhateverdataithasleftanddisablingthetimerfromrunningagain_
                   );
    }
    objc_stub::invalidate(DAT_1010e2c50);
    DAT_1010e2c50 = 0;
  }
  IVar3 = DAT_1010e2c48;
  if (DAT_1010e2c48 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0x3e,&cf_Nocontinuousprofileriscurrentlyrunning_sonochunkcanbetransmitted_);
    }
  }
  else {
    IVar4 = objc_stub::state(DAT_1010e2c48);
    IVar4 = objc_stub::copyProfilingData(IVar4);
    IVar5 = objc_stub::state(IVar3);
    objc_stub::FUN_100bff360(IVar5);
    IVar5 = objc_stub::FUN_100c06d40(IVar3);
    IVar5 = objc_stub::FUN_100c00060(IVar5);
    IVar6 = objc_stub::FUN_100c06d40(IVar3);
    objc_stub::FUN_100bff360(IVar6);
    IVar3 = objc_stub::FUN_100c083a0(IVar3);
    IVar6 = objc_stub::dispatchQueueWrapper
                      ((ID)&objc::class_t::SentryDependencyContainerSwiftHelper);
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b2ffc4;
    puStack_70 = &DAT_100f34990;
    local_68 = IVar5;
    IStack_60 = IVar3;
    local_58 = IVar4;
    FUN_100b4f408(IVar6,&local_88);
  }
  cVar1 = DAT_1010e2c60;
  iVar2 = 0xffa760;
  __ZNSt3__15mutex6unlockEv();
  if (cVar1 == '\x01') {
    FUN_100b3a1c0();
    if (iVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0xe9,&
                          cf_Lastcontinuousprofilechunktransmittedafterstopcalled_shuttingdownprofiler_
                   );
    }
    objc_stub::FUN_100c0f7e0(param_1);
  }
  return;
}



/* Address: 0x100b2ff4c | SentryContinuousProfiler::stopTimerAndCleanup */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::stopTimerAndCleanup(ID param_1,SEL param_2)

{
  __ZNSt3__15mutex4lockEv(&DAT_100ffa760);
  objc_stub::invalidate(DAT_1010e2c50);
  DAT_1010e2c50 = 0;
  objc_stub::FUN_100c0f780(DAT_1010e2c48,0);
  DAT_1010e2c48 = 0;
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa760);
  return;
}



/* Address: 0x100b2ffc4 | FUN_100b2ffc4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b2ffc4(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_100b4cbc0(uVar1);
  IVar2 = *(ID *)(param_1 + 0x28);
  FUN_100b1d1c8(IVar2,*(undefined8 *)(param_1 + 0x30),uVar1);
  if (IVar2 == 0) {
    FUN_100b3a1f0();
    if ((int)IVar2 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                    ,0x60,&cf_Failedtocreatecontinuousprofilechunkenvelope_);
    }
  }
  else {
    SentrySDKInternal::captureEnvelope_((ID)&objc::class_t::SentrySDKInternal,IVar2);
  }
  return 0;
}



/* Address: 0x100b3007c | FUN_100b3007c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b3007c(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x30);
}



/* Address: 0x100b300ac | FUN_100b300ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b300ac(void)

{
  return 0;
}



/* Address: 0x100b300dc | FUN_100b300dc */

void FUN_100b300dc(void)

{
  _dispatch_once(&DAT_1010e2c68,&PTR___NSConcreteGlobalBlock_100f34970);
  return;
}



/* Address: 0x100b300f0 | FUN_100b300f0 */

void FUN_100b300f0(undefined8 param_1)

{
  _objc_autoreleasePoolPush();
  ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_100ea67a0,&DAT_100ffa760,0x100000000);
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Address: 0x100b30130 | SentrySpanInternal::initWithContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySpanInternal::initWithContext_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentrySpanInternal;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::FUN_100c00ac0(IVar2);
    IVar2 = objc_stub::FUN_100c100e0(IVar2);
    *(ID *)(self + 0x28) = IVar2;
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::FUN_100c00ac0(IVar2);
    IVar2 = objc_stub::date(IVar2);
    objc_stub::FUN_100c0de00(self,IVar2);
    puVar3 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    uVar4 = *(undefined8 *)(self + 8);
    *(ID *)(self + 8) = IVar2;
    uVar5 = 0;
    FUN_100b40bac(uVar4,0);
    IVar2 = objc_stub::numberWithUnsignedLong_((ID)&_OBJC_CLASS___NSNumber,uVar5);
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),IVar2,&cf_thread_id);
    IVar2 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread);
    if ((int)IVar2 == 0) {
      IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
      IVar2 = objc_stub::FUN_100c10520(IVar2);
      IVar2 = objc_stub::FUN_100c03020(IVar2,uVar5);
      objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),IVar2,&cf_thread_name);
    }
    else {
      objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),&cf_main,&cf_thread_name);
    }
    puVar3 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    *(ID *)(self + 0x10) = IVar2;
    IVar2 = objc_stub::FUN_100c0efe0((ID)&objc::class_t::SentryFeatureFlagBufferWrapper);
    objc_stub::FUN_100c0bb20(self,IVar2);
    puVar3 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    uVar5 = *(undefined8 *)(self + 0x18);
    *(ID *)(self + 0x18) = IVar2;
    *(undefined1 *)(self + 0x20) = 0;
    *(undefined8 *)(self + 0x70) = 0;
    IVar2 = objc_stub::FUN_100c079e0(param_3,uVar5);
    uVar5 = *(undefined8 *)(self + 0x48);
    *(ID *)(self + 0x48) = IVar2;
    IVar2 = objc_stub::FUN_100c10960(param_3,uVar5);
    uVar5 = *(undefined8 *)(self + 0x38);
    *(ID *)(self + 0x38) = IVar2;
    IVar2 = objc_stub::operation(param_3,uVar5);
    uVar5 = *(undefined8 *)(self + 0x58);
    *(ID *)(self + 0x58) = IVar2;
    IVar2 = objc_stub::spanDescription(param_3,uVar5);
    uVar5 = *(undefined8 *)(self + 0x60);
    *(ID *)(self + 0x60) = IVar2;
    IVar2 = objc_stub::spanId(param_3,uVar5);
    uVar5 = *(undefined8 *)(self + 0x40);
    *(ID *)(self + 0x40) = IVar2;
    IVar2 = objc_stub::FUN_100c098c0(param_3,uVar5);
    *(ID *)(self + 0x50) = IVar2;
    IVar2 = objc_stub::FUN_100c07860(param_3);
    *(ID *)(self + 0x68) = IVar2;
    IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
    *(bool *)(self + 0x30) = IVar2 != 0;
    if (*(char *)(self + 0x30) == '\x01') {
      IVar2 = objc_stub::FUN_100c00760((ID)&objc::class_t::SentryContinuousProfiler);
      IVar2 = objc_stub::FUN_100c0a000(IVar2);
      *(ID *)(self + 0xa0) = IVar2;
      if (*(long *)(self + 0xa0) == 0) {
        IVar2 = objc_stub::sharedInstance
                          ((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
        IVar2 = objc_stub::FUN_100c071c0(IVar2);
        objc_stub::addObserver_selector_name_object_
                  (IVar2,self,"linkProfiler",&cf_io_sentry_notification_continuous_profile_started,0
                  );
      }
    }
  }
  IVar2 = objc_stub::FUN_100c079e0(param_3);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (IVar2 == 0) {
    if (iVar1 != 0) {
      IVar2 = objc_stub::spanId(param_3);
      objc_stub::FUN_100c0a0a0(IVar2);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                    ,0x6d,&cf_Startedrootspanwithid__);
    }
  }
  else if (iVar1 != 0) {
    IVar2 = objc_stub::spanId(param_3);
    objc_stub::FUN_100c0a0a0(IVar2);
    IVar2 = objc_stub::FUN_100c079e0(param_3);
    objc_stub::FUN_100c0a0a0(IVar2);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                  ,0x70,&cf_Startedspanwithid___parentid__);
  }
  return self;
}



/* Address: 0x100b30624 | SentrySpanInternal::dealloc */

/* Function Stack Size: 0x10 bytes */

void SentrySpanInternal::dealloc(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  objc_stub::FUN_100c0f7c0(param_1);
  local_30.super_class = &objc::class_t::SentrySpanInternal;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x100b30668 | SentrySpanInternal::linkProfiler */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanInternal::linkProfiler(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::FUN_100c00760((ID)&objc::class_t::SentryContinuousProfiler);
  IVar1 = objc_stub::FUN_100c0a000(IVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(ID *)(param_1 + 0xa0) = IVar1;
  objc_stub::FUN_100c0f7c0(param_1,uVar2);
  return;
}



/* Address: 0x100b306c4 | SentrySpanInternal::stopObservingContinuousProfiling */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpanInternal::stopObservingContinuousProfiling(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar1 = objc_stub::FUN_100c071c0(IVar1);
    objc_stub::removeObserver_name_object_
              (IVar1,param_1,&cf_io_sentry_notification_continuous_profile_started,0);
    return;
  }
  return;
}



/* Address: 0x100b30744 | SentrySpanInternal::initWithTracer:context: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySpanInternal::initWithTracer_context_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  IVar2 = objc_stub::initWithContext_(param_1,param_4);
  if (IVar2 != 0) {
    *(ID *)(IVar2 + 0x88) = param_3;
    IVar3 = objc_stub::FUN_100c079e0(param_4);
    iVar1 = 0;
    FUN_100b3a1c0();
    if (IVar3 == 0) {
      if (iVar1 == 0) {
        return IVar2;
      }
      IVar3 = objc_stub::FUN_100c083c0(param_3);
      objc_stub::FUN_100c0a000(IVar3);
      pcVar5 = &cf_StartingrootspanwithtracerwithprofilerReferenceId__;
      uVar4 = 0x9b;
    }
    else {
      if (iVar1 == 0) {
        return IVar2;
      }
      IVar3 = objc_stub::FUN_100c083c0(param_3);
      objc_stub::FUN_100c0a000(IVar3);
      pcVar5 = &cf_StartingspanwithtracerwithprofilerReferenceId__;
      uVar4 = 0x9e;
    }
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                  ,uVar4,pcVar5);
  }
  return IVar2;
}



/* Address: 0x100b30880 | SentrySpanInternal::startChildWithOperation: */

/* Function Stack Size: 0x18 bytes */

ID SentrySpanInternal::startChildWithOperation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::startChildWithOperation_description_(param_1,param_3,0);
  return IVar1;
}



/* Address: 0x100b30888 | SentrySpanInternal::startChildWithOperation:description: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySpanInternal::startChildWithOperation_description_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100c109c0(param_1);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpanInternal.m"
                    ,0xad,&cf_Notracer_returningno_opspan);
    }
    IVar2 = objc_stub::FUN_100c0eae0((ID)&objc::class_t::SentryNoOpSpan);
  }
  else {
    IVar2 = objc_stub::FUN_100c109c0(param_1);
    IVar3 = objc_stub::spanId(param_1);
    IVar2 = objc_stub::FUN_100c0f3c0(IVar2,IVar3,param_3,param_4);
  }
  return IVar2;
}



/* Address: 0x100b30994 | SentrySpanInternal::setDataValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentrySpanInternal::setDataValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  objc_stub::setValue_forKey_(*(ID *)(param_1 + 8),param_3,param_4);
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b30a24 | SentrySpanInternal::removeDataForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpanInternal::removeDataForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 8),param_3);
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b30a98 | SentrySpanInternal::data */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanInternal::data(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 8));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b30af8 | SentrySpanInternal::setTagValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentrySpanInternal::setTagValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  objc_stub::setValue_forKey_(*(ID *)(param_1 + 0x10),param_3,param_4);
  _objc_sync_exit(uVar1);
  return;
}


