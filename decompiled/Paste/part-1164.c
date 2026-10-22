/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf13a0 | FUN_100bf13a0 */

void FUN_100bf13a0(undefined8 *param_1)

{
  FUN_100bf1344(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bf13bc | FUN_100bf13bc */

void FUN_100bf13bc(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  FUN_100bf1570();
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::notificationCenterWrapper) = unaff_x22
  ;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::dateProvider) = unaff_x21;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::crashReporter) = unaff_x19;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100bf1424 | _TtC6Sentry17SentryCrashBridge::initWithNotificationCenterWrapper:dateProvider:crashReporter: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry17SentryCrashBridge::initWithNotificationCenterWrapper_dateProvider_crashReporter_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  FUN_100bf13bc(param_3,param_4,param_5);
  return param_3;
}



/* Address: 0x100bf1480 | FUN_100bf1480 */

void FUN_100bf1480(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryCrashBridge",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf14ac);
  (*pcVar1)();
}



/* Address: 0x100bf14ac | _TtC6Sentry17SentryCrashBridge::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryCrashBridge::init(ID param_1,SEL param_2)

{
  ID *extraout_x8;
  
  FUN_100bf1480();
  FUN_100bf12f0();
  *extraout_x8 = param_1;
  FUN_100b56e88();
  return param_1;
}



/* Address: 0x100bf14b8 | FUN_100bf14b8 */

void FUN_100bf14b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_100bf12f0();
  *param_1 = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bf14dc | FUN_100bf14dc */

void FUN_100bf14dc(undefined8 *param_1)

{
  FUN_100bf1344(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bf14fc | _TtC6Sentry17SentryCrashBridge::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryCrashBridge::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + notificationCenterWrapper));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + dateProvider));
  return;
}



/* Address: 0x100bf1544 | FUN_100bf1544 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bf1544(void)

{
  return ZEXT816(0x100fa6398);
}



/* Address: 0x100bf1564 | FUN_100bf1564 */

void FUN_100bf1564(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd1100);
  return;
}



/* Address: 0x100bf1570 | FUN_100bf1570 */

void FUN_100bf1570(void)

{
  return;
}



/* Address: 0x100bf1584 | FUN_100bf1584 */

void FUN_100bf1584(void)

{
  FUN_100bf1724(1);
  return;
}



/* Address: 0x100bf158c | FUN_100bf158c */

void FUN_100bf158c(int param_1,int param_2,uint param_3,uint param_4)

{
  long lVar1;
  int local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (DAT_1010eeba8 != -1) {
    FUN_100bf3c40();
  }
  if (DAT_1010eebb0 != 0) {
    uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_40 = param_1;
    __availability_version_check(1,&local_40);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return;
    }
    goto LAB_100bf16e8;
  }
  if (param_1 == 1) {
    if (DAT_1010eeba0 != -1) {
      FUN_100bf3c50();
    }
    if (DAT_1010eeb90 <= param_2) {
      if (DAT_1010eeb90 < param_2) {
LAB_100bf165c:
        lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
      }
      else {
        if ((int)param_3 < DAT_1010eeb94) goto LAB_100bf168c;
        if (DAT_1010eeb94 < (int)param_3) goto LAB_100bf165c;
        lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
      }
      if (lVar1 == local_38) {
        return;
      }
      goto LAB_100bf16e8;
    }
  }
LAB_100bf168c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
LAB_100bf16e8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100bf171c | FUN_100bf171c */

void FUN_100bf171c(void)

{
  FUN_100bf1724(0);
  return;
}



/* Address: 0x100bf1724 | FUN_100bf1724 */

void FUN_100bf1724(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  FILE *pFVar11;
  size_t sVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (((param_1 & 1) != 0) || (DAT_1010eebb0 == (undefined *)0x0)) {
    if (PTR___availability_version_check_100ea8308 != (undefined *)0x0) {
      DAT_1010eebb0 = PTR___availability_version_check_100ea8308;
    }
    if (((param_1 & 1) != 0) || (DAT_1010eebb0 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if ((pcVar10 != (code *)0x0) &&
                         (pFVar11 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
                         pFVar11 != (FILE *)0x0)) {
                        _fseek(pFVar11,0,2);
                        sVar12 = _ftell(pFVar11);
                        if ((long)sVar12 < 0) {
                          pvVar13 = (void *)0x0;
                        }
                        else {
                          _rewind(pFVar11);
                          pvVar13 = _malloc(sVar12);
                          if ((pvVar13 != (void *)0x0) &&
                             (sVar14 = _fread(pvVar13,1,sVar12,pFVar11), sVar14 == sVar12)) {
                            lVar15 = 0;
                            (*pcVar2)(0,pvVar13,sVar12,uVar20);
                            if (lVar15 != 0) {
                              lVar16 = 0;
                              if (pcVar3 == (code *)0x0) {
                                (*pcVar4)(0,lVar15,0,0);
                              }
                              else {
                                (*pcVar3)();
                              }
                              if (lVar16 != 0) {
                                lVar17 = 0;
                                (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                if (lVar17 != 0) {
                                  lVar18 = lVar16;
                                  (*pcVar6)(lVar16,lVar17);
                                  (*pcVar10)(lVar17);
                                  if (lVar18 != 0) {
                                    lVar17 = lVar18;
                                    (*pcVar7)();
                                    lVar19 = lVar17;
                                    (*pcVar8)();
                                    if ((lVar17 == lVar19) &&
                                       ((*pcVar9)(lVar18,acStack_88,0x20,0x8000100),
                                       (int)lVar18 != 0)) {
                                      _sscanf(acStack_88,"%d.%d.%d");
                                    }
                                  }
                                }
                                (*pcVar10)(lVar16);
                              }
                              (*pcVar10)(lVar15);
                            }
                          }
                        }
                        _free(pvVar13);
                        _fclose(pFVar11);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100bf1a3c | FUN_100bf1a3c */

void FUN_100bf1a3c(void)

{
  _dispatch_once_f(&DAT_1010eeba0,(void *)0x0,FUN_100bf1584);
  return;
}



/* Address: 0x100bf1a54 | FUN_100bf1a54 */

void FUN_100bf1a54(void)

{
  _dispatch_once_f(&DAT_1010eeba8,(void *)0x0,FUN_100bf171c);
  return;
}



/* Address: 0x100bf1a6c | FUN_100bf1a6c */

ulong FUN_100bf1a6c(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = 0;
  bVar6 = false;
  lVar4 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar4 = 0xd0;
  }
  puVar1 = (ulong *)(param_1 + lVar4 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  uVar7 = *puVar1;
  uVar10 = uVar7 & 3;
  if (uVar10 == 0) goto LAB_100bf1aec;
LAB_100bf1adc:
  uVar5 = uVar7;
  if (uVar10 == 3) {
    do {
      if (!bVar6) {
        param_3[3] = 0;
        param_3[4] = param_6;
        *param_3 = param_5;
        param_3[1] = param_4;
        uVar8 = (uint)*(ulong *)(param_2 + 0x58);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar7 = *(ulong *)(param_2 + 0x58);
        while ((uVar8 >> 9 & 1) == 0) {
          if (((uint)uVar7 >> 10 & 1) == 0) {
            uVar9 = uVar7 & 0xfffffffffffff5ff;
          }
          else {
            uVar9 = uVar7 & 0xfffffffffffff1ff;
            *(char *)(param_2 + 0x21) = (char)uVar7;
          }
          uVar2 = *(ulong *)(param_2 + 0x50);
          uVar3 = *(ulong *)(param_2 + 0x58);
          if ((uVar2 == uVar7) && (uVar3 == uVar10)) {
            *(ulong *)(param_2 + 0x50) = uVar9;
            *(ulong *)(param_2 + 0x58) = uVar10;
          }
          if (uVar2 == uVar10 && uVar3 == uVar7) goto LAB_100bf1b5c;
          uVar10 = uVar2;
          uVar7 = uVar3;
          uVar8 = (uint)uVar3;
        }
        FUN_100bf1fa8(param_2);
LAB_100bf1b5c:
        FUN_100bf2638(param_2 + 0x80);
        FUN_100bf22a8(param_2);
      }
      uVar10 = *(ulong *)(param_2 + 0x58) & 0xff;
      if (uVar11 < uVar10) {
        FUN_100bf20d8(param_1,uVar10);
        uVar11 = uVar10;
      }
      *(ulong *)(param_2 + 0x10) = uVar5 & 0xfffffffffffffffc;
      uVar7 = *puVar1;
      if (uVar7 == uVar5) {
        *puVar1 = param_2;
        FUN_100bf2248();
        return 0;
      }
      bVar6 = true;
      uVar10 = uVar7 & 3;
      if (uVar10 != 0) goto LAB_100bf1adc;
LAB_100bf1aec:
      FUN_100bf24e8(param_2);
      uVar5 = uVar7;
    } while( true );
  }
  FUN_100bf24a0(param_1);
  if (bVar6) {
    uVar8 = (uint)*(ulong *)(param_2 + 0x58);
    uVar11 = *(ulong *)(param_2 + 0x50);
    uVar7 = *(ulong *)(param_2 + 0x58);
    while ((uVar8 >> 9 & 1) == 0) {
      uVar5 = uVar7;
      if (((uint)uVar7 >> 10 & 1) != 0) {
        uVar5 = uVar7 & 0xfffffffffffff9ff;
        *(char *)(param_2 + 0x21) = (char)uVar7;
      }
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar2 = *(ulong *)(param_2 + 0x58);
      if ((uVar9 == uVar7) && (uVar2 == uVar11)) {
        *(ulong *)(param_2 + 0x50) = uVar5 | 0x800;
        *(ulong *)(param_2 + 0x58) = uVar11;
      }
      if (uVar9 == uVar11 && uVar2 == uVar7) goto LAB_100bf1c18;
      uVar11 = uVar9;
      uVar7 = uVar2;
      uVar8 = (uint)uVar2;
    }
    FUN_100bf1e78(param_2);
LAB_100bf1c18:
    FUN_100bf227c(param_2);
    FUN_100bf25f0(param_2 + 0x80);
  }
  return uVar10;
}



/* Address: 0x100bf1c58 | FUN_100bf1c58 */

void FUN_100bf1c58(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  FUN_100bf2240();
  *(code **)(lVar1 + 0x38) = FUN_100bf1d40;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100bf1a6c(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x000100bf1d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_100bf3c60(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x000100bf1d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100bf1d40 | FUN_100bf1d40 */

void FUN_100bf1d40(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf1d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100bf1d48 | FUN_100bf1d48 */

void FUN_100bf1d48(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  FUN_100bf2240();
  *(code **)(lVar1 + 0x38) = FUN_100bf1e58;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100bf1a6c(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000100bf1e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bf1e58 | FUN_100bf1e58 */

void FUN_100bf1e58(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf1e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Address: 0x100bf1e68 | FUN_100bf1e68 */

void FUN_100bf1e68(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf1e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bf1e78 | FUN_100bf1e78 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100bf1e78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong local_60;
  ulong local_58;
  
  plVar4 = (long *)0x0;
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  uVar5 = (uint)uVar2;
  while( true ) {
    while (local_60 = uVar1, local_58 = uVar2, (uVar5 >> 9 & 1) != 0) {
      FUN_100bf2158(param_1,&local_60);
      uVar1 = local_60;
      uVar2 = local_58;
      uVar5 = (uint)local_58;
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x20;
      __Znwm();
      *plVar4 = 1;
      FUN_100bf25c0(plVar4 + 1,0);
      plVar4[2] = 0xc0;
      plVar4[3] = uVar1;
      FUN_100bf25c8(plVar4 + 1);
    }
    else {
      plVar4[3] = uVar1;
    }
    uVar3 = uVar2 | 0x200;
    uVar1 = *(ulong *)(param_1 + 0x50);
    uVar2 = *(ulong *)(param_1 + 0x58);
    if ((uVar1 == local_58) && (uVar2 == local_60)) {
      *(ulong *)(param_1 + 0x50) = uVar3;
      *(long **)(param_1 + 0x58) = plVar4 + 2;
    }
    if (uVar1 == local_60 && uVar2 == local_58) break;
    uVar5 = (uint)uVar2;
  }
  uVar1 = local_58;
  if (((uint)local_58 >> 10 & 1) != 0) {
    uVar1 = local_58 & 0xfffffffffffffbff;
    *(char *)(param_1 + 0x21) = (char)local_58;
  }
  local_58 = uVar1 | 0x800;
  *(ulong *)(param_1 + 0x50) = local_60;
  *(ulong *)(param_1 + 0x58) = local_58;
  FUN_100bf25c8(&DAT_1010eebc8);
  FUN_100bf25dc(plVar4 + 1);
  if (*plVar4 + -1 == 0) {
    FUN_100004520(plVar4 + 1);
    __ZdlPv(plVar4);
  }
  else {
    *plVar4 = *plVar4 + -1;
  }
  FUN_100bf25dc(&DAT_1010eebc8);
  return;
}



/* Address: 0x100bf1fa8 | FUN_100bf1fa8 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100bf1fa8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong local_60;
  ulong local_58;
  
  plVar4 = (long *)0x0;
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar5 = (uint)uVar1;
  while( true ) {
    while (local_60 = uVar3, local_58 = uVar1, (uVar5 >> 9 & 1) != 0) {
      FUN_100bf2158(param_1,&local_60);
      uVar3 = local_60;
      uVar1 = local_58;
      uVar5 = (uint)local_58;
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x20;
      __Znwm();
      *plVar4 = 1;
      FUN_100bf25c0(plVar4 + 1,0);
      plVar4[2] = 0xc0;
      plVar4[3] = uVar3;
      FUN_100bf25c8(plVar4 + 1);
    }
    else {
      plVar4[3] = uVar3;
    }
    uVar2 = uVar1 | 0x200;
    uVar3 = *(ulong *)(param_1 + 0x50);
    uVar1 = *(ulong *)(param_1 + 0x58);
    if ((uVar3 == local_58) && (uVar1 == local_60)) {
      *(ulong *)(param_1 + 0x50) = uVar2;
      *(long **)(param_1 + 0x58) = plVar4 + 2;
    }
    if (uVar3 == local_60 && uVar1 == local_58) break;
    uVar5 = (uint)uVar1;
  }
  uVar3 = local_58 & 0xfffffffffffff7ff;
  if (((uint)local_58 >> 10 & 1) != 0) {
    uVar3 = local_58 & 0xfffffffffffff3ff;
    *(char *)(param_1 + 0x21) = (char)local_58;
  }
  *(ulong *)(param_1 + 0x50) = local_60;
  *(ulong *)(param_1 + 0x58) = uVar3;
  local_58 = uVar3;
  FUN_100bf25c8(&DAT_1010eebc8);
  FUN_100bf25dc(plVar4 + 1);
  if (*plVar4 + -1 == 0) {
    FUN_100004520(plVar4 + 1);
    __ZdlPv(plVar4);
  }
  else {
    *plVar4 = *plVar4 + -1;
  }
  FUN_100bf25dc(&DAT_1010eebc8);
  return;
}



/* Address: 0x100bf20d8 | FUN_100bf20d8 */

void FUN_100bf20d8(undefined8 param_1,undefined8 param_2)

{
  if (DAT_1010eebc0 != -1) {
    FUN_100bf2228();
  }
  if (DAT_1010eebb8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1010eebb8)(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Address: 0x100bf2128 | FUN_100bf2128 */

void FUN_100bf2128(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf2158 | FUN_100bf2158 */

void FUN_100bf2158(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  do {
    FUN_100bf25c8(&DAT_1010eebc8);
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *param_2 = lVar1;
    param_2[1] = lVar2;
    if ((((uint)lVar2 >> 9 & 1) == 0) || (lVar1 == 0)) {
      FUN_100bf25dc(&DAT_1010eebc8);
      return;
    }
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + 1;
    FUN_100bf25dc(&DAT_1010eebc8);
    FUN_100bf25c8(lVar1 + -8);
    FUN_100bf25dc(lVar1 + -8);
    FUN_100bf25c8(&DAT_1010eebc8);
    if (*plVar3 + -1 == 0) {
      FUN_100004520(lVar1 + -8);
      __ZdlPv(plVar3);
    }
    else {
      *plVar3 = *plVar3 + -1;
    }
    FUN_100bf25dc(&DAT_1010eebc8);
    lVar1 = *(long *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *param_2 = *(long *)(param_1 + 0x50);
    param_2[1] = lVar1;
  } while (((uint)lVar1 >> 9 & 1) != 0);
  return;
}



/* Address: 0x100bf2228 | FUN_100bf2228 */

void FUN_100bf2228(void)

{
  _dispatch_once_f(&DAT_1010eebc0,&DAT_1010eebb8,FUN_100bf2128);
  return;
}



/* Address: 0x100bf2240 | FUN_100bf2240 */

void FUN_100bf2240(void)

{
  _pthread_getspecific(0x67);
  return;
}



/* Address: 0x100bf2248 | FUN_100bf2248 */

void * FUN_100bf2248(void)

{
  void *pvVar1;
  
  pvVar1 = _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,(void *)0x0);
  return pvVar1;
}



/* Address: 0x100bf227c | FUN_100bf227c */

void FUN_100bf227c(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = _pthread_getspecific(0x68);
  FUN_100bf2390((long)pvVar1 + 0x18,param_1);
  return;
}



/* Address: 0x100bf22a8 | FUN_100bf22a8 */

void FUN_100bf22a8(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _pthread_getspecific(0x68);
  _swift_once(&DAT_1010eebd0,FUN_100bf2358,0);
  if ((DAT_1010eebd8 & 1) == 0) {
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
    if (DAT_1010eebe8 != -1) {
      thunk_FUN_100bf2484();
    }
    iVar1 = (int)uVar3;
    if ((DAT_1010eebe0 == (code *)0x0) || ((*DAT_1010eebe0)(), iVar1 != 0)) {
      uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
      _voucher_adopt();
    }
    else {
      uVar3 = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    if (*(char *)((long)pvVar2 + 0x20) == '\x01') {
      *(undefined1 *)((long)pvVar2 + 0x20) = 0;
    }
  }
  return;
}



/* Address: 0x100bf2358 | FUN_100bf2358 */

void FUN_100bf2358(void)

{
  long local_28;
  long lStack_20;
  
  __swift_stdlib_operatingSystemVersion(&local_28);
  DAT_1010eebd8 = local_28 == 0xc && lStack_20 == 0;
  return;
}



/* Address: 0x100bf2390 | FUN_100bf2390 */

void FUN_100bf2390(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(&DAT_1010eebd0,FUN_100bf2358,0);
  if ((DAT_1010eebd8 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (DAT_1010eebe8 != -1) {
      thunk_FUN_100bf2484();
    }
    iVar1 = (int)uVar2;
    if ((DAT_1010eebe0 == (code *)0x0) || ((*DAT_1010eebe0)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Address: 0x100bf2454 | FUN_100bf2454 */

void FUN_100bf2454(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"_Z19voucher_needs_adoptP9voucher_s");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf2484 | FUN_100bf2484 */

void FUN_100bf2484(void)

{
  _dispatch_once_f(&DAT_1010eebe8,&DAT_1010eebe0,FUN_100bf2454);
  return;
}



/* Address: 0x100bf249c | thunk_FUN_100bf2484 */

void thunk_FUN_100bf2484(void)

{
  _dispatch_once_f(&DAT_1010eebe8,&DAT_1010eebe0,FUN_100bf2454);
  return;
}



/* Address: 0x100bf24a0 | FUN_100bf24a0 */

void FUN_100bf24a0(undefined8 param_1)

{
  if (DAT_1010eebf8 != -1) {
    FUN_100bf2590();
  }
  if (DAT_1010eebf0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf24bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1010eebf0)(param_1);
    return;
  }
  return;
}



/* Address: 0x100bf24e8 | FUN_100bf24e8 */

void FUN_100bf24e8(undefined8 param_1)

{
  if (DAT_1010eec08 != -1) {
    FUN_100bf25a8();
  }
  if (DAT_1010eec00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1010eec00)(param_1);
    return;
  }
  return;
}



/* Address: 0x100bf2530 | FUN_100bf2530 */

void FUN_100bf2530(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"__tsan_acquire");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf2560 | FUN_100bf2560 */

void FUN_100bf2560(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"__tsan_release");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf2590 | FUN_100bf2590 */

void FUN_100bf2590(void)

{
  _dispatch_once_f(&DAT_1010eebf8,&DAT_1010eebf0,FUN_100bf2530);
  return;
}



/* Address: 0x100bf25a8 | FUN_100bf25a8 */

void FUN_100bf25a8(void)

{
  _dispatch_once_f(&DAT_1010eec08,&DAT_1010eec00,FUN_100bf2560);
  return;
}



/* Address: 0x100bf25c0 | FUN_100bf25c0 */

void FUN_100bf25c0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* Address: 0x100bf25c8 | FUN_100bf25c8 */

void FUN_100bf25c8(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Address: 0x100bf25dc | FUN_100bf25dc */

void FUN_100bf25dc(void)

{
  _os_unfair_lock_unlock();
  return;
}



/* Address: 0x100bf25f0 | FUN_100bf25f0 */

void FUN_100bf25f0(undefined8 param_1)

{
  if (DAT_1010eec18 != -1) {
    FUN_100bf26e0();
  }
  if (DAT_1010eec10 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1010eec10)(param_1);
    return;
  }
  return;
}



/* Address: 0x100bf2638 | FUN_100bf2638 */

void FUN_100bf2638(undefined8 param_1)

{
  if (DAT_1010eec28 != -1) {
    FUN_100bf26f8();
  }
  if (DAT_1010eec20 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1010eec20)(param_1);
    return;
  }
  return;
}



/* Address: 0x100bf2680 | FUN_100bf2680 */

void FUN_100bf2680(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_enterThreadLocalContext");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf26b0 | FUN_100bf26b0 */

void FUN_100bf26b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_exitThreadLocalContext");
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bf26e0 | FUN_100bf26e0 */

void FUN_100bf26e0(void)

{
  _dispatch_once_f(&DAT_1010eec18,&DAT_1010eec10,FUN_100bf2680);
  return;
}



/* Address: 0x100bf26f8 | FUN_100bf26f8 */

void FUN_100bf26f8(void)

{
  _dispatch_once_f(&DAT_1010eec28,&DAT_1010eec20,FUN_100bf26b0);
  return;
}



/* Address: 0x100bf2710 | FUN_100bf2710 */

void FUN_100bf2710(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.ItemCollectionViewModel",0x1d,"init(context:router:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf273c);
  (*pcVar1)();
}



/* Address: 0x100bf273c | FUN_100bf273c */

void FUN_100bf273c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.ItemsPinboardMenu",0x17,"init(populate:)",0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2768);
  (*pcVar1)();
}



/* Address: 0x100bf2768 | FUN_100bf2768 */

void FUN_100bf2768(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogLogRecord",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2794);
  (*pcVar1)();
}



/* Address: 0x100bf2794 | FUN_100bf2794 */

void FUN_100bf2794(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogLogger",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf27c0);
  (*pcVar1)();
}



/* Address: 0x100bf27c0 | FUN_100bf27c0 */

void FUN_100bf27c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogEvent",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf27ec);
  (*pcVar1)();
}



/* Address: 0x100bf27ec | FUN_100bf27ec */

void FUN_100bf27ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogFeatureFlagResult",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2818);
  (*pcVar1)();
}



/* Address: 0x100bf2818 | FUN_100bf2818 */

void FUN_100bf2818(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogConfig",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2844);
  (*pcVar1)();
}



/* Address: 0x100bf2844 | FUN_100bf2844 */

void FUN_100bf2844(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogSDK",0x12,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2870);
  (*pcVar1)();
}



/* Address: 0x100bf2870 | FUN_100bf2870 */

void FUN_100bf2870(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogDisplaySurvey",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf289c);
  (*pcVar1)();
}



/* Address: 0x100bf289c | FUN_100bf289c */

void FUN_100bf289c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogDisplaySurveyAppearance",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf28c8);
  (*pcVar1)();
}



/* Address: 0x100bf28c8 | FUN_100bf28c8 */

void FUN_100bf28c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogDisplaySurveyQuestion",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf28f4);
  (*pcVar1)();
}


