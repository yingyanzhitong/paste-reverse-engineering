/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b09518 | SentryCrashScopeObserver::clear */

/* Function Stack Size: 0x10 bytes */

void SentryCrashScopeObserver::clear(ID param_1,SEL param_2)

{
  void *pvVar1;
  
  pvVar1 = DAT_1010e2be8;
  DAT_1010e2be8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2bf0;
  DAT_1010e2bf0 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2bf8;
  DAT_1010e2bf8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c08;
  DAT_1010e2c08 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c10;
  DAT_1010e2c10 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c18;
  DAT_1010e2c18 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c20;
  DAT_1010e2c20 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c28;
  DAT_1010e2c28 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  FUN_100b2c978((ID)pvVar1,param_2);
  return;
}



/* Address: 0x100b0951c | SentryCrashScopeObserver::syncScope:syncToSentryCrash: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashScopeObserver::syncScope_syncToSentryCrash_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  local_58 = PTR___NSConcreteStackBlock_100ea82a0;
  local_50 = 0xc2000000;
  local_48 = FUN_100b095b0;
  puStack_40 = &DAT_100f33f30;
  local_38 = param_3;
  objc_stub::FUN_100c0fe60(param_1,param_3,&local_58,param_4);
  return;
}



/* Address: 0x100b095b0 | FUN_100b095b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b095b0(long param_1)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
  uVar2 = 0;
  if (IVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  return uVar2;
}



/* Address: 0x100b095e0 | SentryCrashScopeObserver::syncScope:serialize:syncToSentryCrash: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryCrashScopeObserver::syncScope_serialize_syncToSentryCrash_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_5;
  if (param_3 == 0) {
    (**(code **)(uVar2 + 0x10))(uVar2,0);
  }
  else {
    (**(code **)(param_4 + 0x10))();
    if (param_4 == 0) {
      (**(code **)(uVar2 + 0x10))(uVar2,0);
    }
    else {
      IVar1 = objc_stub::FUN_100c107a0(param_1,param_4);
      if (IVar1 != 0) {
        _objc_retainAutorelease();
        IVar1 = objc_stub::bytes(IVar1);
        (**(code **)(uVar2 + 0x10))(uVar2,IVar1);
      }
    }
  }
  return;
}



/* Address: 0x100b096ac | SentryCrashScopeObserver::toJSONEncodedCString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashScopeObserver::toJSONEncodedCString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_38;
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    local_38 = 0;
    IVar1 = objc_stub::FUN_100c01960((ID)&objc::class_t::SentryCrashJSONCodec,param_3,2,&local_38);
    if (local_38 != 0) {
      lVar2 = local_38;
      FUN_100b3a1f0();
      if ((int)lVar2 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashScopeObserver.m"
                      ,0xa4,&cf_Couldnotserialize__);
      }
      return 0;
    }
  }
  FUN_100b42768();
  return IVar1;
}



/* Address: 0x100b09780 | FUN_100b09780 */

void FUN_100b09780(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 uVar7;
  code *local_5d0;
  code *pcStack_5c8;
  code *local_5c0;
  code *pcStack_5b8;
  code *local_5b0;
  code *pcStack_5a8;
  code *local_5a0;
  code *pcStack_598;
  code *local_590;
  code *pcStack_588;
  code *local_580;
  code *pcStack_578;
  code *local_570;
  code *pcStack_568;
  code *local_560;
  code *pcStack_558;
  code *local_550;
  undefined1 *local_548;
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [8];
  undefined1 *local_520;
  undefined1 auStack_448 [1024];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  ___strlcpy_chk(&DAT_1010e1350,param_2,0x1ea,500);
  sVar2 = _strlen(&DAT_1010e1350);
  *(undefined4 *)(&DAT_1010e134b + sVar2) = 0x646c6f2e;
  (&DAT_1010e134f)[sVar2] = 0;
  iVar1 = _rename(param_2,&DAT_1010e1350);
  if (iVar1 < 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101048e78;
    (*(code *)PTR___tlv_bootstrap_101048e78)(*piVar3);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                  ,0x5d9,"Could not rename %s to %s: %s");
  }
  puVar5 = auStack_540;
  FUN_100b184e8(puVar5,param_2,auStack_448,0x400);
  if ((int)puVar5 != 0) {
    FUN_100b3f170();
    local_5d0 = FUN_100b0b16c;
    pcStack_5c8 = FUN_100b0b174;
    local_5c0 = FUN_100b0b17c;
    pcStack_5b8 = FUN_100b0b184;
    local_5b0 = FUN_100b0b18c;
    pcStack_5a8 = FUN_100b0b198;
    local_5a0 = FUN_100b0b338;
    pcStack_598 = FUN_100b0b438;
    local_590 = FUN_100b0b440;
    pcStack_588 = FUN_100b0b448;
    local_580 = FUN_100b0b450;
    pcStack_578 = FUN_100b0b458;
    local_570 = FUN_100b0b460;
    pcStack_568 = FUN_100b0aef0;
    local_560 = FUN_100b0b534;
    pcStack_558 = FUN_100b0b53c;
    local_548 = auStack_528;
    local_550 = FUN_100b0b544;
    local_520 = auStack_540;
    FUN_100b56d64(auStack_528,1,FUN_100b09af8,auStack_540);
    FUN_100bf333c(auStack_528,"report");
    FUN_100bf3530(auStack_528,"recrash_report",&DAT_1010e1350,1);
    FUN_100b185f8(auStack_540);
    iVar1 = _remove(&DAT_1010e1350);
    if (iVar1 < 0) {
      piVar3 = ___error();
      ppuVar4 = &PTR___tlv_bootstrap_101048e90;
      (*(code *)PTR___tlv_bootstrap_101048e90)(*piVar3);
      iVar1 = _strerror_r(extraout_w8_00,(char *)ppuVar4,0x400);
      if (iVar1 != 0) {
        ___error();
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x5f7,"Could not remove %s: %s");
    }
    FUN_100b09b28(&local_5d0,"minimal",*param_1,param_1[0x2e]);
    FUN_100b185f8(auStack_540);
    (*local_560)(&local_5d0,"crash");
    FUN_100b09bf4(&local_5d0,param_1);
    FUN_100b185f8(auStack_540);
    uVar7 = param_1[2];
    uVar6 = uVar7;
    FUN_100b51004(uVar7);
    FUN_100b51510(uVar7,uVar6);
    FUN_100b09f44(&local_5d0,"crashed_thread",param_1,param_1[2],uVar7,0);
    FUN_100b185f8(auStack_540);
    (*local_550)(&local_5d0);
    (*local_550)(&local_5d0);
    FUN_100bf3470(local_548);
    FUN_100b185bc(auStack_540);
    FUN_100b3f190();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b09af8 | FUN_100b09af8 */

undefined4 FUN_100b09af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_100b18640(param_3,param_1,param_2);
  uVar1 = 0;
  if ((int)param_3 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100b09b28 | FUN_100b09b28 */

void FUN_100b09b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  time_t tVar1;
  code *pcVar2;
  
  (**(code **)(param_1 + 0x70))(param_1,"report");
  (**(code **)(param_1 + 0x20))(param_1,"version","3.2.0");
  (**(code **)(param_1 + 0x20))(param_1,"id",param_3);
  (**(code **)(param_1 + 0x20))(param_1,"process_name",param_4);
  pcVar2 = *(code **)(param_1 + 0x10);
  tVar1 = _time((time_t *)0x0);
  (*pcVar2)(param_1,"timestamp",tVar1);
  (**(code **)(param_1 + 0x20))(param_1,"type",param_2);
                    /* WARNING: Could not recover jumptable at 0x000100b09bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}



/* Address: 0x100b09bf4 | FUN_100b09bf4 */

void FUN_100b09bf4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  code *pcVar7;
  
  (**(code **)(param_1 + 0x70))(param_1,"error");
  (**(code **)(param_1 + 0x70))(param_1,"mach");
  lVar2 = (long)*(int *)(param_2 + 0x40);
  FUN_100b5c150();
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_100b5c174();
  }
  (**(code **)(param_1 + 0x18))(param_1,"exception",*(undefined4 *)(param_2 + 0x40));
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"exception_name",lVar2);
  }
  (**(code **)(param_1 + 0x18))(param_1,"code",*(undefined4 *)(param_2 + 0x48));
  if (lVar3 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"code_name",lVar3);
  }
  (**(code **)(param_1 + 0x18))(param_1,"subcode",*(undefined8 *)(param_2 + 0x50));
  (**(code **)(param_1 + 0x80))(param_1);
  (**(code **)(param_1 + 0x70))(param_1,"signal");
  uVar4 = (ulong)*(uint *)(param_2 + 0x78);
  FUN_100b60934();
  uVar5 = (ulong)*(uint *)(param_2 + 0x78);
  FUN_100b60968(uVar5,*(undefined4 *)(param_2 + 0x7c));
  (**(code **)(param_1 + 0x18))(param_1,"signal",*(undefined4 *)(param_2 + 0x78));
  if (uVar4 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"name",uVar4);
  }
  (**(code **)(param_1 + 0x18))(param_1,"code",*(undefined4 *)(param_2 + 0x7c));
  if (uVar5 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"code_name",uVar5);
  }
  (**(code **)(param_1 + 0x80))(param_1);
  (**(code **)(param_1 + 0x18))(param_1,"address",*(undefined8 *)(param_2 + 0x18));
  if (*(long *)(param_2 + 0x30) != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"reason");
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 < 8) {
    if (iVar1 == 1) {
      pcVar7 = *(code **)(param_1 + 0x20);
      pcVar6 = "mach";
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 4) goto LAB_100b09f24;
        (**(code **)(param_1 + 0x20))(param_1,"type","cpp_exception");
        (**(code **)(param_1 + 0x70))(param_1,"cpp_exception");
        pcVar7 = *(code **)(param_1 + 0x20);
        lVar2 = *(long *)(param_2 + 0x68);
        pcVar6 = "name";
LAB_100b09ef0:
        (*pcVar7)(param_1,pcVar6,lVar2);
        goto LAB_100b09ef8;
      }
      pcVar7 = *(code **)(param_1 + 0x20);
      pcVar6 = "signal";
    }
    (*pcVar7)(param_1,"type",pcVar6);
  }
  else {
    if (iVar1 != 8) {
      if ((iVar1 == 0x40) || (iVar1 == 0x80)) {
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                      ,0x532,"Crash monitor type 0x%x shouldn\'t be able to cause events!");
      }
      goto LAB_100b09f24;
    }
    (**(code **)(param_1 + 0x20))(param_1,"type","nsexception");
    (**(code **)(param_1 + 0x70))(param_1,"nsexception");
    (**(code **)(param_1 + 0x20))(param_1,"name",*(undefined8 *)(param_2 + 0x58));
    (**(code **)(param_1 + 0x20))(param_1,"userInfo",*(undefined8 *)(param_2 + 0x60));
    lVar2 = *(long *)(param_2 + 0x30);
    if (lVar2 != 0) {
      pcVar7 = *(code **)(param_1 + 0x20);
      pcVar6 = "reason";
      goto LAB_100b09ef0;
    }
LAB_100b09ef8:
    (**(code **)(param_1 + 0x80))(param_1);
  }
LAB_100b09f24:
                    /* WARNING: Could not recover jumptable at 0x000100b09f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}



/* Address: 0x100b09f44 | FUN_100b09f44 */

void FUN_100b09f44(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  code *pcVar12;
  char *pcVar13;
  undefined8 local_4c8 [5];
  undefined1 local_49c;
  code *local_490;
  undefined8 local_168;
  char acStack_160 [240];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar5 = param_4;
  FUN_100b510d8();
  puVar6 = param_4;
  FUN_100b51004();
  puVar7 = param_4;
  FUN_100b51004();
  puVar8 = *(undefined8 **)(param_3 + 0x10);
  FUN_100b51004();
  if (puVar7 == puVar8) {
    _memcpy(local_4c8,*(void **)(param_3 + 0x38),0x360);
  }
  else {
    FUN_100b2acb8(local_4c8,0x96,param_4);
  }
  (*(code *)param_1[0xe])(param_1,param_2);
  (*(code *)param_1[0xe])(param_1,"backtrace");
  (*(code *)param_1[0xf])(param_1,"contents");
  iVar4 = (int)local_4c8;
  (*local_490)();
  if (iVar4 != 0) {
    do {
      (*(code *)param_1[0xe])(param_1,0);
      (*(code *)param_1[3])(param_1,"instruction_addr",local_4c8[0]);
      (*(code *)param_1[0x10])(param_1);
      uVar9 = 0;
      (*local_490)();
    } while ((uVar9 & 1) != 0);
  }
  (*(code *)param_1[0x10])(param_1);
  (*(code *)param_1[2])(param_1,"skipped",0);
  (*(code *)param_1[0x10])(param_1);
  puVar7 = param_4;
  FUN_100b510b8();
  if ((int)puVar7 != 0) {
    (*(code *)param_1[0xe])(param_1,"registers");
    puVar7 = param_1;
    (*(code *)param_1[0xe])(param_1,"basic");
    uVar3 = (uint)puVar7;
    FUN_100b263c4();
    if (0 < (int)uVar3) {
      pcVar13 = (char *)0x0;
      do {
        pcVar10 = pcVar13;
        FUN_100b263cc();
        if (pcVar10 == (char *)0x0) {
          pcVar10 = acStack_160;
          _snprintf(acStack_160,0x1e,"r%d");
        }
        pcVar12 = (code *)param_1[3];
        puVar7 = param_4;
        FUN_100b263ec(param_4,pcVar13);
        (*pcVar12)(param_1,pcVar10,puVar7);
        uVar1 = (int)pcVar13 + 1;
        pcVar13 = (char *)(ulong)uVar1;
      } while (uVar3 != uVar1);
    }
    (*(code *)param_1[0x10])(param_1);
    puVar7 = param_4;
    FUN_100b51548();
    if ((int)puVar7 != 0) {
      puVar7 = param_1;
      (*(code *)param_1[0xe])(param_1,"exception");
      uVar3 = (uint)puVar7;
      FUN_100b26498();
      if (0 < (int)uVar3) {
        pcVar13 = (char *)0x0;
        do {
          pcVar10 = pcVar13;
          FUN_100b264a0();
          if (pcVar10 == (char *)0x0) {
            pcVar10 = acStack_160;
            _snprintf(acStack_160,0x1e,"r%d");
          }
          pcVar12 = (code *)param_1[3];
          puVar7 = param_4;
          FUN_100b264f8(param_4,pcVar13);
          (*pcVar12)(param_1,pcVar10,puVar7);
          uVar1 = (int)pcVar13 + 1;
          pcVar13 = (char *)(ulong)uVar1;
        } while (uVar3 != uVar1);
      }
      (*(code *)param_1[0x10])(param_1);
    }
    (*(code *)param_1[0x10])(param_1);
  }
  (*(code *)param_1[2])(param_1,"index",(long)param_5);
  puVar7 = puVar6;
  FUN_100b3f1c0();
  if (puVar7 != (undefined8 *)0x0) {
    (*(code *)param_1[4])(param_1,"name",puVar7);
  }
  puVar7 = puVar6;
  FUN_100b3f214();
  if (puVar7 != (undefined8 *)0x0) {
    (*(code *)param_1[4])(param_1,"dispatch_queue",puVar7);
  }
  puVar7 = param_1;
  (*(code *)*param_1)(param_1,"crashed",puVar5);
  pcVar12 = (code *)*param_1;
  FUN_100b40bac();
  (*pcVar12)(param_1,"current_thread",puVar6 == puVar7);
  if ((int)puVar5 != 0) {
    puVar5 = param_4;
    FUN_100b26368();
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
      FUN_100b2656c();
      iVar4 = (int)puVar6;
      uVar9 = (long)puVar5 + (long)(iVar4 * -0xa0);
      FUN_100b2656c();
      uVar11 = (long)puVar5 + (long)(iVar4 * 0x50);
      uVar2 = uVar11;
      if (uVar11 <= uVar9) {
        uVar2 = uVar9;
      }
      if (uVar9 <= uVar11) {
        uVar11 = uVar9;
      }
      puVar6 = param_1;
      (*(code *)param_1[0xe])(param_1,"stack");
      iVar4 = (int)puVar6;
      pcVar12 = (code *)param_1[4];
      FUN_100b2656c();
      pcVar13 = "+";
      if (iVar4 < 1) {
        pcVar13 = "-";
      }
      (*pcVar12)(param_1,"grow_direction",pcVar13);
      (*(code *)param_1[3])(param_1,"dump_start",uVar11);
      (*(code *)param_1[3])(param_1,"dump_end",uVar2);
      (*(code *)param_1[3])(param_1,"stack_pointer",puVar5);
      (*(code *)*param_1)(param_1,"overflow",local_49c);
      iVar4 = (int)uVar2 - (int)uVar11;
      FUN_100b5d620(uVar11,acStack_160,iVar4);
      if ((int)uVar11 == 0) {
        (*(code *)param_1[4])(param_1,"error","Stack contents not accessible");
      }
      else {
        (*(code *)param_1[8])(param_1,"contents",acStack_160,iVar4);
      }
      (*(code *)param_1[0x10])(param_1);
    }
    if (param_6 != 0) {
      puVar5 = param_1;
      (*(code *)param_1[0xe])(param_1,"notable_addresses");
      uVar3 = (uint)puVar5;
      FUN_100b263c4();
      if (0 < (int)uVar3) {
        pcVar13 = (char *)0x0;
        do {
          pcVar10 = pcVar13;
          FUN_100b263cc();
          if (pcVar10 == (char *)0x0) {
            pcVar10 = acStack_160;
            _snprintf(acStack_160,0x1e,"r%d");
          }
          puVar5 = param_4;
          FUN_100b263ec(param_4,pcVar13);
          FUN_100b0b54c(param_1,pcVar10,puVar5);
          uVar1 = (int)pcVar13 + 1;
          pcVar13 = (char *)(ulong)uVar1;
        } while (uVar3 != uVar1);
      }
      FUN_100b26368();
      if (param_4 != (undefined8 *)0x0) {
        puVar5 = param_4;
        FUN_100b2656c();
        iVar4 = (int)puVar5;
        uVar9 = (long)param_4 + (long)(iVar4 * -0xa0);
        FUN_100b2656c();
        uVar11 = (long)param_4 + (long)(iVar4 * 0x50);
        uVar2 = uVar11;
        if (uVar9 <= uVar11) {
          uVar2 = uVar9;
        }
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        for (; uVar2 < uVar11; uVar2 = uVar2 + 8) {
          uVar9 = uVar2;
          FUN_100b5d620(uVar2,&local_168,8);
          if ((int)uVar9 != 0) {
            _snprintf(acStack_160,0x28,"stack@%p");
            FUN_100b0b54c(param_1,acStack_160,local_168);
          }
        }
      }
      (*(code *)param_1[0x10])(param_1);
    }
  }
  (*(code *)param_1[0x10])(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b0a54c | FUN_100b0a54c */

void FUN_100b0a54c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  code *local_ab8;
  code *local_ab0;
  code *local_aa8;
  code *local_aa0;
  code *local_a98;
  code *pcStack_a90;
  code *local_a88;
  code *pcStack_a80;
  code *local_a78;
  code *pcStack_a70;
  code *local_a68;
  code *pcStack_a60;
  code *local_a58;
  code *pcStack_a50;
  code *local_a48;
  code *local_a40;
  code *local_a38;
  undefined1 *local_a30;
  undefined1 auStack_a28 [28];
  undefined4 local_a0c;
  undefined1 auStack_a08 [8];
  undefined1 *local_a00;
  undefined1 auStack_928 [1024];
  undefined8 local_528 [154];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = auStack_a28;
  FUN_100b184e8(puVar3,param_2,auStack_928,0x400);
  if ((int)puVar3 != 0) {
    FUN_100b3f170();
    local_ab8 = FUN_100b0b16c;
    local_ab0 = FUN_100b0b174;
    local_aa8 = FUN_100b0b17c;
    local_aa0 = FUN_100b0b184;
    local_a98 = FUN_100b0b18c;
    pcStack_a90 = FUN_100b0b198;
    local_a88 = FUN_100b0b338;
    pcStack_a80 = FUN_100b0b438;
    local_a78 = FUN_100b0b440;
    pcStack_a70 = FUN_100b0b448;
    local_a68 = FUN_100b0b450;
    pcStack_a60 = FUN_100b0b458;
    local_a58 = FUN_100b0b460;
    pcStack_a50 = FUN_100b0aef0;
    local_a48 = FUN_100b0b534;
    local_a40 = FUN_100b0b53c;
    local_a30 = auStack_a08;
    local_a38 = FUN_100b0b544;
    local_a00 = auStack_a28;
    FUN_100b56d64(auStack_a08,1,FUN_100b09af8,auStack_a28);
    (*local_a48)(&local_ab8,"report");
    FUN_100b09b28(&local_ab8,"standard",*param_1,param_1[0x2e]);
    FUN_100b185f8(auStack_a28);
    (*local_a40)(&local_ab8,"binary_images");
    FUN_100b54864(FUN_100b0bd80,&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_100b185f8(auStack_a28);
    (*local_a48)(&local_ab8,"process");
    if (param_1[0x35] != 0) {
      (*local_a48)(&local_ab8,"last_dealloced_nsexception");
      (*local_aa0)(&local_ab8,"address",param_1[0x35]);
      (*local_a98)(&local_ab8,"name",param_1[0x36]);
      (*local_a98)(&local_ab8,"reason",param_1[0x37]);
      pcVar11 = (char *)param_1[0x37];
      local_528[0] = 0;
      if (pcVar11 != (char *)0x0) {
        sVar4 = _strlen(pcVar11);
        FUN_100bf2ca0(pcVar11,sVar4,local_528);
        if ((int)pcVar11 != 0) {
          local_a0c = 0xf;
          FUN_100b0b5d0(&local_ab8,"referenced_object",local_528[0],&local_a0c);
        }
      }
      (*local_a38)(&local_ab8);
    }
    (*local_a38)(&local_ab8);
    FUN_100b185f8(auStack_a28);
    (*local_a48)(&local_ab8,"system");
    (*local_a98)(&local_ab8,"system_name",param_1[0x1c]);
    (*local_a98)(&local_ab8,"system_version",param_1[0x1d]);
    (*local_a98)(&local_ab8,"machine",param_1[0x1e]);
    (*local_a98)(&local_ab8,"model",param_1[0x1f]);
    (*local_a98)(&local_ab8,"kernel_version",param_1[0x20]);
    (*local_a98)(&local_ab8,"os_version",param_1[0x21]);
    (*local_ab8)(&local_ab8,"jailbroken",*(undefined1 *)(param_1 + 0x22));
    (*local_a98)(&local_ab8,"app_start_time",param_1[0x24]);
    (*local_a98)(&local_ab8,"CFBundleExecutablePath",param_1[0x25]);
    (*local_a98)(&local_ab8,"CFBundleExecutable",param_1[0x26]);
    (*local_a98)(&local_ab8,"CFBundleIdentifier",param_1[0x27]);
    (*local_a98)(&local_ab8,"CFBundleName",param_1[0x28]);
    (*local_a98)(&local_ab8,"CFBundleVersion",param_1[0x29]);
    (*local_a98)(&local_ab8,"CFBundleShortVersionString",param_1[0x2a]);
    (*local_a98)(&local_ab8,"app_uuid",param_1[0x2b]);
    (*local_a98)(&local_ab8,"cpu_arch",param_1[0x2c]);
    (*local_aa8)(&local_ab8,"cpu_type",(long)*(int *)(param_1 + 0x2d));
    (*local_aa8)(&local_ab8,"cpu_subtype",(long)*(int *)((long)param_1 + 0x16c));
    (*local_a98)(&local_ab8,"process_name",param_1[0x2e]);
    (*local_aa8)(&local_ab8,"process_id",(long)*(int *)(param_1 + 0x2f));
    (*local_aa8)(&local_ab8,"parent_process_id",(long)*(int *)((long)param_1 + 0x17c));
    (*local_a98)(&local_ab8,"device_app_hash",param_1[0x30]);
    (*local_a98)(&local_ab8,"build_type",param_1[0x31]);
    (*local_a48)(&local_ab8,"memory");
    (*local_aa0)(&local_ab8,"size",param_1[0x32]);
    (*local_aa0)(&local_ab8,"usable",param_1[0x34]);
    (*local_aa0)(&local_ab8,"free",param_1[0x33]);
    (*local_a38)(&local_ab8);
    (*local_a48)(&local_ab8,"application_stats");
    (*local_ab8)(&local_ab8,"application_active",*(undefined1 *)(param_1 + 0x1b));
    (*local_ab8)(&local_ab8,"application_in_foreground",*(undefined1 *)((long)param_1 + 0xd9));
    (*local_aa8)(&local_ab8,"launches_since_last_crash",(long)*(int *)(param_1 + 0x16));
    (*local_aa8)(&local_ab8,"sessions_since_last_crash",(long)*(int *)((long)param_1 + 0xb4));
    (*local_ab0)(param_1[0x14],&local_ab8,"active_time_since_last_crash");
    (*local_ab0)(param_1[0x15],&local_ab8,"background_time_since_last_crash");
    (*local_aa8)(&local_ab8,"sessions_since_launch",(long)*(int *)(param_1 + 0x19));
    (*local_ab0)(param_1[0x17],&local_ab8,"active_time_since_launch");
    (*local_ab0)(param_1[0x18],&local_ab8,"background_time_since_launch");
    (*local_a38)(&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_100b185f8(auStack_a28);
    (*local_a48)(&local_ab8,"crash");
    FUN_100b09bf4(&local_ab8,param_1);
    FUN_100b185f8(auStack_a28);
    uVar2 = DAT_1010e1548;
    puVar12 = (undefined8 *)param_1[2];
    if (puVar12 != (undefined8 *)0x0) {
      puVar5 = puVar12;
      FUN_100b51004();
      puVar6 = puVar12;
      FUN_100b514fc();
      (*local_a40)(&local_ab8,"threads");
      if (0 < (int)puVar6) {
        iVar14 = 0;
        do {
          puVar7 = puVar12;
          FUN_100b51504(puVar12,iVar14);
          puVar15 = puVar12;
          if (puVar7 != puVar5) {
            puVar15 = local_528;
            FUN_100b5100c();
          }
          FUN_100b09f44(&local_ab8,0,param_1,puVar15,iVar14,uVar2);
          iVar14 = iVar14 + 1;
        } while ((int)puVar6 != iVar14);
      }
      (*local_a38)(&local_ab8);
    }
    FUN_100b185f8(auStack_a28);
    ppcVar8 = &local_ab8;
    (*local_a38)();
    FUN_100b2c868();
    (*local_a48)(&local_ab8,"sentry_sdk_scope");
    if (*ppcVar8 != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"user",*ppcVar8,0);
    }
    if (ppcVar8[1] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"dist",ppcVar8[1],0);
    }
    if (ppcVar8[2] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"context",ppcVar8[2],0);
    }
    if (ppcVar8[3] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"traceContext",ppcVar8[3],0);
    }
    if (ppcVar8[4] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"environment",ppcVar8[4],0);
    }
    if (ppcVar8[5] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"tags",ppcVar8[5],0);
    }
    if (ppcVar8[6] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"extra",ppcVar8[6],0);
    }
    if (ppcVar8[7] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"fingerprint",ppcVar8[7],0);
    }
    if (ppcVar8[8] != (code *)0x0) {
      FUN_100b0aef0(&local_ab8,"level",ppcVar8[8],0);
    }
    pcVar9 = ppcVar8[9];
    if ((pcVar9 != (code *)0x0) && (pcVar10 = ppcVar8[10], 0 < (long)pcVar10)) {
LAB_100b0ad6c:
      if (*(long *)pcVar9 == 0) goto code_r0x000100b0ad74;
      (*local_a40)(&local_ab8,"breadcrumbs");
      pcVar9 = ppcVar8[10];
      if (0 < (long)pcVar9) {
        lVar13 = 0;
        do {
          lVar1 = 0;
          if (pcVar9 != (code *)0x0) {
            lVar1 = (long)(ppcVar8[0xb] + lVar13) / (long)pcVar9;
          }
          if (*(long *)(ppcVar8[9] + ((long)(ppcVar8[0xb] + lVar13) - lVar1 * (long)pcVar9) * 8) !=
              0) {
            FUN_100b0aef0(&local_ab8,"crumb",
                          *(long *)(ppcVar8[9] +
                                   ((long)(ppcVar8[0xb] + lVar13) - lVar1 * (long)pcVar9) * 8),0);
            pcVar9 = ppcVar8[10];
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (long)pcVar9);
      }
      (*local_a38)(&local_ab8);
    }
LAB_100b0adf8:
    (*local_a38)(&local_ab8);
    FUN_100b185f8(auStack_a28);
    if (DAT_1010e1560 == 0) {
      (*local_a48)(&local_ab8,"user");
    }
    else {
      FUN_100b0aef0(&local_ab8,"user",DAT_1010e1560,0);
      FUN_100b185f8(auStack_a28);
    }
    (*local_a38)(&local_ab8);
    FUN_100b185f8(auStack_a28);
    (*local_a48)(&local_ab8,"debug");
    FUN_100b0b338(&local_ab8,"console_log",&DAT_1010e1568);
    (*local_a38)(&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_100bf3470(local_a30);
    FUN_100b185bc(auStack_a28);
    FUN_100b3f190();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x000100b0ad74:
  pcVar9 = pcVar9 + 8;
  pcVar10 = pcVar10 + -1;
  if (pcVar10 == (code *)0x0) goto LAB_100b0adf8;
  goto LAB_100b0ad6c;
}



/* Address: 0x100b0aef0 | FUN_100b0aef0 */

void FUN_100b0aef0(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_ac [100];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  sVar1 = _strlen(param_3);
  FUN_100bf3684(uVar2,param_2,param_3,sVar1,param_4);
  if ((int)uVar2 != 0) {
    FUN_100b56a9c();
    _snprintf(acStack_ac,100,"Invalid JSON data: %s");
    FUN_100bf333c(*(undefined8 *)(param_1 + 0x88),param_2);
    FUN_100bf318c(*(undefined8 *)(param_1 + 0x88),"error",acStack_ac,0xffffffff);
    FUN_100bf318c(*(undefined8 *)(param_1 + 0x88),"json_data",param_3,0xffffffff);
    FUN_100bf33a4(*(undefined8 *)(param_1 + 0x88));
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b0afe4 | FUN_100b0afe4 */

void FUN_100b0afe4(char *param_1)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa400);
  if (DAT_1010e1560 != (void *)0x0) {
    _free(DAT_1010e1560);
  }
  if (param_1 == (char *)0x0) {
    DAT_1010e1560 = (char *)0x0;
  }
  else {
    DAT_1010e1560 = _strdup(param_1);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa400);
  return;
}



/* Address: 0x100b0b03c | FUN_100b0b03c */

void FUN_100b0b03c(undefined1 param_1)

{
  DAT_1010e1548 = param_1;
  return;
}



/* Address: 0x100b0b048 | FUN_100b0b048 */

void FUN_100b0b048(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = DAT_1010e1558;
  puVar1 = DAT_1010e1550;
  pvVar6 = (void *)0x0;
  uVar7 = (ulong)DAT_1010e1558;
  uVar3 = 0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    pvVar6 = _malloc((ulong)param_2 << 3);
    if (pvVar6 == (void *)0x0) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x6fa,"Could not allocate memory");
      return;
    }
    lVar8 = 0;
    do {
      pcVar4 = _strdup(*(char **)(param_1 + lVar8));
      *(char **)((long)pvVar6 + lVar8) = pcVar4;
      lVar8 = lVar8 + 8;
      uVar3 = param_2;
    } while ((ulong)param_2 * 8 - lVar8 != 0);
  }
  DAT_1010e1558 = uVar3;
  DAT_1010e1550 = pvVar6;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = puVar1;
  if (0 < (int)uVar2) {
    do {
      if ((void *)*puVar5 != (void *)0x0) {
        _free((void *)*puVar5);
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
  }
  _free(puVar1);
  return;
}



/* Address: 0x100b0b16c | FUN_100b0b16c */

void FUN_100b0b16c(long param_1)

{
  FUN_100bf2e7c(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b174 | FUN_100b0b174 */

void FUN_100b0b174(long param_1)

{
  FUN_100bf2ecc(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b17c | FUN_100b0b17c */

void FUN_100b0b17c(long param_1)

{
  FUN_100bf307c(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b184 | FUN_100b0b184 */

void FUN_100b0b184(long param_1)

{
  FUN_100bf3104(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b18c | FUN_100b0b18c */

void FUN_100b0b18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bf318c(*(undefined8 *)(param_1 + 0x88),param_2,param_3,0xffffffff);
  return;
}



/* Address: 0x100b0b198 | FUN_100b0b198 */

void FUN_100b0b198(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined **ppuVar5;
  char *pcVar6;
  int extraout_w8;
  undefined1 auStack_248 [512];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  iVar1 = _open(param_3,0);
  if (iVar1 < 0) {
    piVar4 = ___error();
    ppuVar5 = &PTR___tlv_bootstrap_101048ea8;
    (*(code *)PTR___tlv_bootstrap_101048ea8)(*piVar4);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar5,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                  ,0xa4,"Could not open file %s: %s");
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    FUN_100bf3204(uVar3,param_2);
    if ((int)uVar3 == 0) {
      iVar2 = iVar1;
      _read(iVar1,auStack_248,0x200);
      while (0 < iVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x88);
        thunk_FUN_100b56ac8(uVar3,auStack_248);
        if ((int)uVar3 != 0) {
          pcVar6 = "Could not append string element";
          uVar3 = 0xb3;
          goto LAB_100b0b20c;
        }
        iVar2 = iVar1;
        _read(iVar1,auStack_248,0x200);
      }
    }
    else {
      pcVar6 = "Could not start string element";
      uVar3 = 0xa9;
LAB_100b0b20c:
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,uVar3,pcVar6);
    }
    FUN_100b56cb0(*(undefined8 *)(param_1 + 0x88));
    _close(iVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b0b338 | FUN_100b0b338 */

void FUN_100b0b338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int local_854;
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [1024];
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = auStack_850;
  FUN_100b188e8(puVar1,param_3,auStack_438,0x400);
  if ((int)puVar1 != 0) {
    FUN_100bf32d4(*(undefined8 *)(param_1 + 0x88),param_2);
    local_854 = 0x400;
    FUN_100b187e0(auStack_850,10,auStack_838,&local_854);
    while (0 < local_854) {
      auStack_838[local_854 - 1] = 0;
      FUN_100bf318c(*(undefined8 *)(param_1 + 0x88),0,auStack_838,0xffffffff);
      local_854 = 0x400;
      FUN_100b187e0(auStack_850,10,auStack_838,&local_854);
    }
    FUN_100bf33a4(*(undefined8 *)(param_1 + 0x88));
    FUN_100b189d4(auStack_850);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b0b438 | FUN_100b0b438 */

void FUN_100b0b438(long param_1)

{
  FUN_100bf3530(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b440 | FUN_100b0b440 */

void FUN_100b0b440(long param_1)

{
  FUN_100bf3238(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b448 | FUN_100b0b448 */

void FUN_100b0b448(long param_1)

{
  FUN_100bf32a0(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b450 | FUN_100b0b450 */

void FUN_100b0b450(long param_1)

{
  FUN_100b56cc4(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b458 | FUN_100b0b458 */

void FUN_100b0b458(long param_1)

{
  FUN_100b56d50(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b460 | FUN_100b0b460 */

void FUN_100b0b460(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [56];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      FUN_100bf3048(*(undefined8 *)(param_1 + 0x88),param_2);
      return;
    }
  }
  else {
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    FUN_100b2bacc(param_3,auStack_70);
    FUN_100bf318c(*(undefined8 *)(param_1 + 0x88),param_2,auStack_70,0x24);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b0b534 | FUN_100b0b534 */

void FUN_100b0b534(long param_1)

{
  FUN_100bf333c(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b53c | FUN_100b0b53c */

void FUN_100b0b53c(long param_1)

{
  FUN_100bf32d4(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b544 | FUN_100b0b544 */

void FUN_100b0b544(long param_1)

{
  FUN_100bf33a4(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Address: 0x100b0b54c | FUN_100b0b54c */

void FUN_100b0b54c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 local_34;
  
  if (((param_3 != 0) &&
      ((lVar1 = param_3, FUN_100b5de80(), (int)lVar1 == 0 ||
       (lVar1 = param_3, FUN_100b5de88(), (int)lVar1 != 0)))) &&
     ((lVar1 = param_3, FUN_100b5d930(), (int)lVar1 != 0 ||
      (lVar1 = param_3, FUN_100b0b8f4(), (int)lVar1 != 0)))) {
    local_34 = 0xf;
    FUN_100b0b5d0(param_1,param_2,param_3,&local_34);
  }
  return;
}



/* Address: 0x100b0b5d0 | FUN_100b0b5d0 */

void FUN_100b0b5d0(long param_1,undefined8 param_2,char *param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char acStack_120 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *param_4 = *param_4 + -1;
  (**(code **)(param_1 + 0x70))();
  (**(code **)(param_1 + 0x18))(param_1,"address",param_3);
  pcVar3 = param_3;
  FUN_100b5d930();
  iVar1 = (int)pcVar3;
  if (iVar1 == 3) {
    (**(code **)(param_1 + 0x20))(param_1,"type","objc_block");
    FUN_100b5d6a0(param_3);
    pcVar4 = *(code **)(param_1 + 0x20);
    pcVar3 = "class";
  }
  else {
    if (iVar1 == 2) {
      (**(code **)(param_1 + 0x20))(param_1,"type","objc_object");
      pcVar3 = param_3;
      FUN_100b5d6a0();
      (**(code **)(param_1 + 0x20))(param_1,"class",pcVar3);
      if ((DAT_1010e1550 != (undefined8 *)0x0) &&
         (uVar6 = (ulong)DAT_1010e1558, puVar5 = DAT_1010e1550, 0 < (int)DAT_1010e1558)) {
        do {
          if (((char *)*puVar5 != (char *)0x0) &&
             (iVar1 = _strcmp(pcVar3,(char *)*puVar5), iVar1 == 0)) goto LAB_100b0b7f4;
          puVar5 = puVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      pcVar3 = param_3;
      FUN_100bf3bbc();
      iVar1 = (int)pcVar3;
      if (iVar1 < 4) {
        if (iVar1 < 2) {
          if (iVar1 == 0) goto LAB_100b0b7d4;
          if (iVar1 == 1) {
LAB_100b0b79c:
            FUN_100bf37c4(param_3,acStack_120,200);
            if ((int)param_3 == 0) goto LAB_100b0b860;
            pcVar4 = *(code **)(param_1 + 0x20);
            pcVar3 = "value";
            param_3 = acStack_120;
            goto LAB_100b0b85c;
          }
        }
        else {
          if (iVar1 == 2) {
            pcVar4 = *(code **)(param_1 + 8);
            FUN_100b5dd0c(param_3);
LAB_100b0b8dc:
            (*pcVar4)(param_1,"value");
            goto LAB_100b0b860;
          }
          if (iVar1 == 3) goto LAB_100b0b79c;
        }
      }
      else if (iVar1 < 6) {
        if (iVar1 == 4) {
          if (0 < *param_4) {
            FUN_100b0b974(param_1,param_3,param_4);
          }
          goto LAB_100b0b860;
        }
        if (iVar1 == 5) {
LAB_100b0b7d4:
          if (0 < *param_4) {
            FUN_100b0b9d0(param_1,param_3,param_4);
          }
          goto LAB_100b0b860;
        }
      }
      else {
        if (iVar1 == 6) {
          pcVar4 = *(code **)(param_1 + 8);
          FUN_100b5dd34(param_3);
          goto LAB_100b0b8dc;
        }
        if (iVar1 == 7) goto LAB_100b0b7d4;
      }
    }
    else if (iVar1 == 1) {
      (**(code **)(param_1 + 0x20))(param_1,"type","objc_class");
      pcVar4 = *(code **)(param_1 + 0x20);
      FUN_100b5d680(param_3);
      (*pcVar4)(param_1,"class",param_3);
      goto LAB_100b0b860;
    }
LAB_100b0b7f4:
    if (param_3 == (char *)0x0) {
      pcVar4 = *(code **)(param_1 + 0x20);
      pcVar3 = "type";
      param_3 = "null_pointer";
    }
    else {
      pcVar2 = param_3;
      FUN_100b0b8f4();
      pcVar4 = *(code **)(param_1 + 0x20);
      pcVar3 = "type";
      if ((int)pcVar2 == 0) {
        param_3 = "unknown";
      }
      else {
        (*pcVar4)(param_1,"type","string");
        pcVar4 = *(code **)(param_1 + 0x20);
        pcVar3 = "value";
      }
    }
  }
LAB_100b0b85c:
  (*pcVar4)(param_1,pcVar3,param_3);
LAB_100b0b860:
  (**(code **)(param_1 + 0x80))(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b0b8f4 | FUN_100b0b8f4 */

void FUN_100b0b8f4(ulong param_1)

{
  undefined1 auStack_21c [500];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (((param_1 != 0) && (param_1 < 0xfffffffffffffe0c)) &&
     (FUN_100b5d620(param_1,auStack_21c,500), (int)param_1 != 0)) {
    FUN_100bf2bd8(auStack_21c,4,500);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b0b974 | FUN_100b0b974 */

void FUN_100b0b974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  
  FUN_100bf39d0(param_2,&local_28,1);
  if ((int)param_2 == 1) {
    FUN_100b0b5d0(param_1,"first_object",local_28,param_3);
  }
  return;
}



/* Address: 0x100b0b9d0 | FUN_100b0b9d0 */

void FUN_100b0b9d0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined8 local_188;
  undefined1 local_179;
  double local_178;
  float local_16c;
  ulong local_168;
  uint local_15c;
  uint local_158;
  ushort local_154;
  byte local_151;
  ulong local_150;
  int local_144;
  int local_140;
  short local_13c;
  char local_139 [17];
  undefined4 local_128 [56];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *param_3 = *param_3 + -1;
  (*(code *)param_1[0xe])(param_1,"ivars");
  uVar3 = param_2;
  FUN_100b5de80();
  if ((int)uVar3 == 0) {
    uVar3 = param_2;
    FUN_100b5d66c();
    uVar2 = (uint)uVar3;
    FUN_100b5d800();
    *param_3 = *param_3 - uVar2;
    if (0 < (int)uVar2) {
      uVar6 = (ulong)uVar2;
      puVar7 = local_128;
      do {
        bVar1 = **(byte **)(puVar7 + -2);
        if (0x50 < bVar1) {
          if (bVar1 < 0x66) {
            if (bVar1 < 99) {
              if (bVar1 == 0x51) {
                FUN_100b5d890(param_2,*puVar7,&local_168);
                pcVar5 = (code *)param_1[3];
                uVar3 = *(undefined8 *)(puVar7 + -4);
                uVar4 = local_168;
              }
              else {
                if (bVar1 != 0x53) goto LAB_100b0bd04;
                FUN_100b5d890(param_2,*puVar7,&local_154);
                pcVar5 = (code *)param_1[3];
                uVar3 = *(undefined8 *)(puVar7 + -4);
                uVar4 = (ulong)local_154;
              }
            }
            else {
              if (bVar1 != 99) {
                if (bVar1 == 100) {
                  FUN_100b5d890(param_2,*puVar7,&local_178);
                  pcVar5 = (code *)param_1[1];
                  uVar3 = *(undefined8 *)(puVar7 + -4);
                  dVar8 = local_178;
                  goto LAB_100b0bd34;
                }
                goto LAB_100b0bd04;
              }
              FUN_100b5d890(param_2,*puVar7,local_139);
              pcVar5 = (code *)param_1[2];
              uVar3 = *(undefined8 *)(puVar7 + -4);
              uVar4 = (ulong)local_139[0];
            }
          }
          else if (bVar1 < 0x6c) {
            if (bVar1 == 0x66) {
              FUN_100b5d890(param_2,*puVar7,&local_16c);
              pcVar5 = (code *)param_1[1];
              uVar3 = *(undefined8 *)(puVar7 + -4);
              dVar8 = (double)local_16c;
LAB_100b0bd34:
              (*pcVar5)(dVar8,param_1,uVar3);
              goto LAB_100b0bd04;
            }
            if (bVar1 != 0x69) goto LAB_100b0bd04;
            FUN_100b5d890(param_2,*puVar7,&local_140);
            pcVar5 = (code *)param_1[2];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (ulong)local_140;
          }
          else if (bVar1 == 0x6c) {
            FUN_100b5d890(param_2,*puVar7,&local_144);
            pcVar5 = (code *)param_1[2];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (ulong)local_144;
          }
          else if (bVar1 == 0x71) {
            FUN_100b5d890(param_2,*puVar7,&local_150);
            pcVar5 = (code *)param_1[2];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = local_150;
          }
          else {
            if (bVar1 != 0x73) goto LAB_100b0bd04;
            FUN_100b5d890(param_2,*puVar7,&local_13c);
            pcVar5 = (code *)param_1[2];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (long)local_13c;
          }
          goto LAB_100b0bcfc;
        }
        if (bVar1 < 0x42) {
          if (bVar1 < 0x3a) {
            if ((bVar1 == 0x23) || (bVar1 == 0x2a)) {
LAB_100b0bbb0:
              FUN_100b5d890(param_2,*puVar7,&local_188);
              FUN_100b0b5d0(param_1,*(undefined8 *)(puVar7 + -4),local_188,param_3);
            }
          }
          else if ((bVar1 == 0x3a) || (bVar1 == 0x40)) goto LAB_100b0bbb0;
        }
        else if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            FUN_100b5d890(param_2,*puVar7,&local_179);
            (*(code *)*param_1)(param_1,*(undefined8 *)(puVar7 + -4),local_179);
          }
          else if (bVar1 == 0x43) {
            FUN_100b5d890(param_2,*puVar7,&local_151);
            pcVar5 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (ulong)local_151;
            goto LAB_100b0bcfc;
          }
        }
        else {
          if (bVar1 == 0x49) {
            FUN_100b5d890(param_2,*puVar7,&local_158);
            pcVar5 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (ulong)local_158;
          }
          else {
            if (bVar1 != 0x4c) goto LAB_100b0bd04;
            FUN_100b5d890(param_2,*puVar7,&local_15c);
            pcVar5 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar7 + -4);
            uVar4 = (ulong)local_15c;
          }
LAB_100b0bcfc:
          (*pcVar5)(param_1,uVar3,uVar4);
        }
LAB_100b0bd04:
        puVar7 = puVar7 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    pcVar5 = (code *)param_1[2];
    FUN_100b5d928(param_2);
    (*pcVar5)(param_1,"tagged_payload",param_2);
  }
  (*(code *)param_1[0x10])(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b0bd80 | FUN_100b0bd80 */

void FUN_100b0bd80(undefined8 *param_1,long param_2)

{
  thunk_FUN_100b4e634(*param_1,param_1);
  (**(code **)(param_2 + 0x70))(param_2,0);
  (**(code **)(param_2 + 0x18))(param_2,"image_addr",*param_1);
  (**(code **)(param_2 + 0x18))(param_2,"image_vmaddr",param_1[1]);
  (**(code **)(param_2 + 0x18))(param_2,"image_size",param_1[2]);
  (**(code **)(param_2 + 0x20))(param_2,"name",param_1[3]);
  (**(code **)(param_2 + 0x60))(param_2,"uuid",param_1[4]);
  (**(code **)(param_2 + 0x10))(param_2,"cpu_type",(long)*(int *)(param_1 + 5));
  (**(code **)(param_2 + 0x10))(param_2,"cpu_subtype",(long)*(int *)((long)param_1 + 0x2c));
  if (param_1[6] != 0) {
    (**(code **)(param_2 + 0x20))(param_2,"crash_info_message");
  }
  if (param_1[7] != 0) {
    (**(code **)(param_2 + 0x20))(param_2,"crash_info_message2");
  }
                    /* WARNING: Could not recover jumptable at 0x000100b0bea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x80))(param_2);
  return;
}



/* Address: 0x100b0bea4 | SentryEnvelopeRateLimit::initWithRateLimits: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEnvelopeRateLimit::initWithRateLimits_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryEnvelopeRateLimit;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d480(self,param_3);
  }
  return self;
}



/* Address: 0x100b0bf10 | SentryEnvelopeRateLimit::setDelegate: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEnvelopeRateLimit::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b0bf1c | SentryEnvelopeRateLimit::removeRateLimitedItems: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEnvelopeRateLimit::removeRateLimitedItems_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    IVar1 = objc_stub::items(param_3);
    IVar1 = objc_stub::FUN_100c02de0(param_1,IVar1);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 != 0) {
      IVar2 = objc_stub::items(param_3);
      IVar1 = objc_stub::FUN_100c02ea0(param_1,IVar2,IVar1);
      self = &objc::class_t::_TtC6Sentry14SentryEnvelope;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c033e0(param_3);
      param_3 = objc_stub::FUN_100c042c0((ID)self,IVar2,IVar1);
    }
  }
  return param_3;
}



/* Address: 0x100b0c048 | SentryEnvelopeRateLimit::getEnvelopeItemsToDrop: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEnvelopeRateLimit::getEnvelopeItemsToDrop_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self_01;
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
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        self_01 = *(ID *)(lStack_128 + IVar4 * 8);
        IVar2 = objc_stub::type(self_01);
        IVar2 = objc_stub::FUN_100bff0e0((ID)&objc::class_t::SentryDataCategoryMapper,IVar2);
        IVar3 = objc_stub::rateLimits(param_1);
        IVar3 = objc_stub::FUN_100c05bc0(IVar3,IVar2);
        if ((int)IVar3 != 0) {
          objc_stub::addObject_(self_00,self_01);
          IVar3 = objc_stub::delegate(param_1);
          objc_stub::FUN_100c01d40(IVar3,self_01,IVar2);
        }
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b0c204 | SentryEnvelopeRateLimit::getItemsToSend:withItemsToDrop: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryEnvelopeRateLimit::getItemsToSend_withItemsToDrop_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_110;
    do {
      IVar5 = 0;
      do {
        if (*local_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_118 + IVar5 * 8);
        IVar2 = objc_stub::FUN_100bffc80(param_4,uVar3);
        if ((IVar2 & 1) == 0) {
          objc_stub::addObject_(self_00,uVar3);
        }
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b0c354 | SentryEnvelopeRateLimit::rateLimits */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeRateLimit::rateLimits(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b0c35c | SentryEnvelopeRateLimit::setRateLimits: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEnvelopeRateLimit::setRateLimits_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b0c368 | SentryEnvelopeRateLimit::delegate */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeRateLimit::delegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b0c380 | SentryEnvelopeRateLimit::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryEnvelopeRateLimit::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b0c3ac | SentryDictionary::mergeEntriesFromDictionary:intoDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryDictionary::mergeEntriesFromDictionary_intoDictionary_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b0c428;
  puStack_30 = &DAT_100f340e0;
  local_28 = param_4;
  objc_stub::FUN_100c01ca0(param_3,&local_48);
  return;
}



/* Address: 0x100b0c428 | FUN_100b0c428 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0c428(long param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),param_2);
    IVar2 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),param_2);
      IVar1 = objc_stub::mutableCopy(IVar1);
      SentryDictionary::mergeEntriesFromDictionary_intoDictionary_
                ((ID)&objc::class_t::SentryDictionary,param_3,IVar1);
      objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),IVar1,param_2);
      return 0;
    }
  }
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),param_3,param_2);
  return 0;
}



/* Address: 0x100b0c53c | SentryDictionary::setBoolValue:forKey:intoDictionary: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryDictionary::setBoolValue_forKey_intoDictionary_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  if (param_3 != 0) {
    IVar1 = objc_stub::boolValue(param_3);
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setValue_forKey_(param_5,IVar1,param_4);
    return;
  }
  return;
}



/* Address: 0x100b0c5d0 | SentryQueueableRequestManager::initWithSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryQueueableRequestManager::initWithSession_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryQueueableRequestManager;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d9a0(self,param_3);
    self_00 = &_OBJC_CLASS___NSOperationQueue;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    objc_stub::FUN_100c0d440(self,IVar1);
    IVar1 = objc_stub::queue(self);
    objc_stub::setName_(IVar1,&cf_io_sentry_QueueableRequestManager_OperationQueue);
    IVar1 = objc_stub::queue(self);
    objc_stub::FUN_100c0c8c0(IVar1,3);
  }
  return self;
}



/* Address: 0x100b0c6b8 | SentryQueueableRequestManager::isReady */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryQueueableRequestManager::isReady(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::queue(param_1);
  IVar1 = objc_stub::operationCount(IVar1);
  return (bool)(IVar1 < 2);
}



/* Address: 0x100b0c6f8 | SentryQueueableRequestManager::addRequest:completionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryQueueableRequestManager::addRequest_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  ID self;
  class_t *self_00;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID local_48;
  
  self_00 = &objc::class_t::SentryRequestOperation;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c0a280(param_1);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0xc2000000;
  local_60 = FUN_100b0c810;
  puStack_58 = &DAT_100f34110;
  local_50 = param_1;
  local_48 = param_4;
  IVar1 = objc_stub::FUN_100c04b60((ID)self_00,IVar1,param_3,&local_70);
  self = objc_stub::queue(param_1);
  objc_stub::FUN_100bfd7e0(self,IVar1);
  return;
}



/* Address: 0x100b0c810 | FUN_100b0c810 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0c810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  
  uVar1 = param_3;
  FUN_100b3a1c0();
  if ((int)uVar1 != 0) {
    IVar2 = objc_stub::queue(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::operationCount(IVar2);
    NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2 - 1);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryQueueableRequestManager.m"
                  ,0x37,&cf_Queuedrequests___);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
  }
  return 0;
}



/* Address: 0x100b0c8f0 | FUN_100b0c8f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b0c8f0(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}



/* Address: 0x100b0c924 | FUN_100b0c924 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0c924(void)

{
  return 0;
}



/* Address: 0x100b0c94c | SentryQueueableRequestManager::queue */

/* Function Stack Size: 0x10 bytes */

ID SentryQueueableRequestManager::queue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b0c954 | SentryQueueableRequestManager::setQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryQueueableRequestManager::setQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b0c960 | SentryQueueableRequestManager::session */

/* Function Stack Size: 0x10 bytes */

ID SentryQueueableRequestManager::session(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b0c968 | SentryQueueableRequestManager::setSession: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryQueueableRequestManager::setSession_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b0c974 | SentryQueueableRequestManager::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryQueueableRequestManager::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b0c9a4 | _SentryDispatchQueueWrapperInternal::init */

/* Function Stack Size: 0x10 bytes */

ID _SentryDispatchQueueWrapperInternal::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::initWithName_(param_1,"io.sentry.default");
  return IVar1;
}



/* Address: 0x100b0c9b0 | _SentryDispatchQueueWrapperInternal::initWithName: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _SentryDispatchQueueWrapperInternal::initWithName_(ID param_1,SEL param_2,const_char__ param_3)

{
  ID IVar1;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    attr = (dispatch_queue_attr_t)0x0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    pdVar2 = _dispatch_queue_create(param_3,attr);
    *(dispatch_queue_t *)(IVar1 + 8) = pdVar2;
  }
  return IVar1;
}



/* Address: 0x100b0ca44 | _SentryDispatchQueueWrapperInternal::initWithName:attributes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _SentryDispatchQueueWrapperInternal::initWithName_attributes_
             (ID param_1,SEL param_2,const_char__ param_3,ID param_4)

{
  ID IVar1;
  dispatch_queue_t pdVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    pdVar2 = _dispatch_queue_create(param_3,(dispatch_queue_attr_t)param_4);
    *(dispatch_queue_t *)(IVar1 + 8) = pdVar2;
  }
  return IVar1;
}



/* Address: 0x100b0cacc | _SentryDispatchQueueWrapperInternal::initWithName:relativePriority: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

ID _SentryDispatchQueueWrapperInternal::initWithName_relativePriority_
             (ID param_1,SEL param_2,const_char__ param_3,int param_4)

{
  ID IVar1;
  ID IVar2;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    if ((0xf < param_4 + 0xf) && (IVar2 = IVar1, FUN_100b3a1e0(), (int)IVar2 != 0)) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/_SentryDispatchQueueWrapperInternal.m"
                    ,0x24,&cf_Relativeprioritymustbebetween0and_d);
    }
    attr = (dispatch_queue_attr_t)0x0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,param_4);
    pdVar3 = _dispatch_queue_create(param_3,attr);
    *(dispatch_queue_t *)(IVar1 + 8) = pdVar3;
  }
  return IVar1;
}


