/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b40378 | FUN_100b40378 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b40378(ID param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar2 = param_1;
  FUN_100b4028c();
  IVar1 = objc_stub::dateFromString_(IVar2,param_1);
  IVar2 = 0;
  if (IVar1 == 0) {
    FUN_100b401a0();
    IVar1 = objc_stub::dateFromString_(IVar2,param_1);
  }
  return IVar1;
}



/* Address: 0x100b40420 | FUN_100b40420 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b40420(ID param_1)

{
  ID IVar1;
  
  IVar1 = param_1;
  FUN_100b4028c();
  IVar1 = objc_stub::stringFromDate_(IVar1,param_1);
  return IVar1;
}



/* Address: 0x100b40480 | FUN_100b40480 */

void FUN_100b40480(void)

{
  _dispatch_once(&DAT_1010e2ee0,&PTR___NSConcreteGlobalBlock_100f34c18);
  return;
}



/* Address: 0x100b40494 | FUN_100b40494 */

void FUN_100b40494(void)

{
  _dispatch_once(&DAT_1010e2ef0,&PTR___NSConcreteGlobalBlock_100f34c38);
  return;
}



/* Address: 0x100b404a8 | FUN_100b404a8 */

ulong FUN_100b404a8(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4,
                   undefined1 *param_5,ulong param_6,long param_7)

{
  kern_return_t kVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  natural_t anStack_390 [58];
  undefined8 *local_2a8;
  ulong local_2a0;
  long local_290;
  mach_msg_type_number_t local_64;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    ___assert_rtn("backtrace","SentryBacktrace.cpp",0x2d,"addresses != nullptr");
  }
  if ((param_6 != 0) && (*param_4 != 0)) {
    if (param_4[1] == 0) {
      return 0;
    }
    if (*param_4 <= param_4[1]) {
      return 0;
    }
    uVar2 = param_1;
    FUN_100b4ed6c();
    local_64 = 0x44;
    kVar1 = _thread_get_state((thread_act_t)uVar2,6,anStack_390,&local_64);
    if (kVar1 == 0) {
      if (param_7 != 0) {
        lVar7 = param_7 + -1;
      }
      else {
        lVar7 = 0;
        *param_3 = local_290 + -4;
      }
      uVar6 = (ulong)(param_7 == 0);
      if (uVar6 < param_6) {
        if (((param_4[1] < local_2a0) && ((local_2a0 & 0xf) == 0)) && (local_2a0 < *param_4 - 0x10))
        {
          if (lVar7 == 0) {
            param_3[uVar6] = local_2a0 - 4;
            uVar6 = uVar6 + 1;
          }
          else {
            lVar7 = lVar7 + -1;
          }
        }
      }
      else {
        uVar6 = 1;
      }
      FUN_100b4f10c(param_2,param_1);
      if ((int)param_2 == 0) {
        puVar5 = local_2a8;
      }
      if ((undefined8 *)param_4[1] < puVar5) {
        if (((ulong)puVar5 & 0xf) != 0) {
          return 0;
        }
        if ((undefined8 *)(*param_4 - 0x10) <= puVar5) {
          return 0;
        }
        while ((uVar6 < param_6 && (puVar4 = puVar5, FUN_100b5d46c(puVar5,0x10), (int)puVar4 != 0)))
        {
          if (lVar7 == 0) {
            param_3[uVar6] = puVar5[1] + -4;
            uVar6 = uVar6 + 1;
          }
          else {
            lVar7 = lVar7 + -1;
          }
          puVar4 = (undefined8 *)*puVar5;
          uVar3 = 1;
          if (((puVar4 <= puVar5) || (puVar4 <= (undefined8 *)param_4[1])) ||
             ((((ulong)puVar4 & 0xf) != 0 ||
              (puVar5 = puVar4, (undefined8 *)(*param_4 - 0x10) <= puVar4)))) goto LAB_100b40660;
        }
        uVar3 = 0;
LAB_100b40660:
        if (param_5 == (undefined1 *)0x0) {
          return uVar6;
        }
        *param_5 = uVar3;
        return uVar6;
      }
    }
    else {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryBacktrace.cpp"
                    ,0x34,"Failed to fill thread state");
    }
  }
  return 0;
}



/* Address: 0x100b406e0 | FUN_100b406e0 */

void FUN_100b406e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  size_t sVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  long ***ppplVar16;
  char local_511;
  long local_510;
  long lStack_508;
  long local_500;
  undefined1 local_4f8;
  undefined7 uStack_4f7;
  undefined8 uStack_4f0;
  undefined7 local_4e8;
  char cStack_4e1;
  undefined4 local_4e0;
  long local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  long local_4c0;
  undefined4 local_4b8;
  undefined8 ****local_4a8;
  undefined8 ****local_4a0;
  undefined8 ****local_498;
  long *local_490;
  long *plStack_488;
  long local_478;
  long **local_470 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b4eae4(&local_490);
  plVar2 = local_490;
  lVar7 = local_478;
  do {
    if (plVar2 == plStack_488) {
      local_478 = 0;
      if (lVar7 != 0) {
        thunk_FUN_100b4ea10();
        __ZdlPv();
      }
      local_470[0] = &local_490;
      FUN_100b40ab8(local_470);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_4c0 = 0;
    local_4a0 = (undefined8 *****)0x0;
    local_498 = (undefined8 *****)0x0;
    local_4a8 = (undefined8 *****)0x0;
    iVar6 = (int)*plVar2;
    local_478 = lVar7;
    FUN_100b4efc0();
    if (iVar6 == 0) {
      lVar7 = *plVar2;
      FUN_100b1a8d0(&local_500,param_2);
      if (local_500 != 0) {
        local_4d8 = local_500;
        if (local_4c0 < 0) {
          __ZdlPv(local_4d0);
        }
        local_4d0 = CONCAT71(uStack_4f7,local_4f8);
        uStack_4c8 = uStack_4f0;
        local_4c0 = CONCAT17(cStack_4e1,local_4e8);
        cStack_4e1 = '\0';
        local_4f8 = 0;
        local_4b8 = local_4e0;
        lVar9 = *plVar2;
        FUN_100b4f070();
        iVar6 = (int)*plVar2;
        local_510 = lVar9;
        lStack_508 = lVar7;
        FUN_100b4f0bc();
        if (iVar6 != 0) {
          local_511 = '\0';
          lVar7 = *plVar2;
          FUN_100b404a8(lVar7,local_478,local_470,&local_510,&local_511,0x80,0);
          FUN_100b4f0e4(*plVar2);
          if (local_511 == '\x01') {
            if (lVar7 != 0) {
              ppplVar16 = local_470;
              do {
                if (local_4a0 < local_498) {
                  pppppuVar15 = (undefined8 *****)(local_4a0 + 1);
                  *local_4a0 = (undefined8 ***)*ppplVar16;
                }
                else {
                  sVar11 = (long)local_4a0 - (long)local_4a8;
                  lVar9 = (long)sVar11 >> 3;
                  uVar1 = lVar9 + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_100b1ae80(&local_4a8);
                    goto LAB_100b409c0;
                  }
                  uVar13 = (long)local_498 - (long)local_4a8 >> 2;
                  if (uVar13 <= uVar1) {
                    uVar13 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)local_498 - (long)local_4a8)) {
                    uVar13 = 0x1fffffffffffffff;
                  }
                  if (uVar13 == 0) {
                    pppppuVar10 = (undefined8 *****)0x0;
                    lVar12 = lVar9;
                  }
                  else {
                    pppppuVar10 = &local_498;
                    FUN_100b40b78();
                    sVar11 = (long)local_4a0 - (long)local_4a8;
                    lVar12 = (long)sVar11 >> 3;
                  }
                  pppppuVar3 = pppppuVar10 + lVar9;
                  pppppuVar14 = pppppuVar3 + -lVar12;
                  pppppuVar15 = pppppuVar3 + 1;
                  *pppppuVar3 = (undefined8 ****)*ppplVar16;
                  _memcpy(pppppuVar14,local_4a8,sVar11);
                  bVar4 = (undefined8 *****)local_4a8 != (undefined8 *****)0x0;
                  local_4a8 = pppppuVar14;
                  local_498 = pppppuVar10 + uVar13;
                  if (bVar4) {
                    local_4a0 = pppppuVar15;
                    __ZdlPv();
                  }
                }
                ppplVar16 = ppplVar16 + 1;
                lVar7 = lVar7 + -1;
                local_4a0 = pppppuVar15;
              } while (lVar7 != 0);
            }
            plVar8 = *(long **)(param_1 + 0x18);
            if (plVar8 == (long *)0x0) {
              FUN_100b40b2c();
              goto LAB_100b409c0;
            }
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_4d8);
          }
        }
      }
      if (cStack_4e1 < '\0') {
        __ZdlPv(CONCAT71(uStack_4f7,local_4f8));
      }
    }
    else {
      lVar7 = *plVar2;
      FUN_100b4ed7c();
      local_4b8 = 0xffffffff;
      plVar8 = *(long **)(param_1 + 0x18);
      local_4d8 = lVar7;
      if (plVar8 == (long *)0x0) {
        FUN_100b40b2c();
LAB_100b409c0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b409c4);
        (*pcVar5)();
      }
      (**(code **)(*plVar8 + 0x30))(plVar8,&local_4d8);
    }
    if ((undefined8 *****)local_4a8 != (undefined8 *****)0x0) {
      local_4a0 = local_4a8;
      __ZdlPv();
    }
    if (local_4c0 < 0) {
      __ZdlPv(local_4d0);
    }
    plVar2 = plVar2 + 1;
    lVar7 = local_478;
  } while( true );
}



/* Address: 0x100b40a10 | FUN_100b40a10 */

long FUN_100b40a10(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Address: 0x100b40a50 | FUN_100b40a50 */

long FUN_100b40a50(long param_1)

{
  long local_28;
  
  FUN_100b40a90(param_1 + 0x18,0);
  local_28 = param_1;
  FUN_100b40ab8(&local_28);
  return param_1;
}



/* Address: 0x100b40a90 | FUN_100b40a90 */

void FUN_100b40a90(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    thunk_FUN_100b4ea10();
    __ZdlPv();
    return;
  }
  return;
}



/* Address: 0x100b40ab8 | FUN_100b40ab8 */

void FUN_100b40ab8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -8;
        FUN_100b40a90(lVar2,0);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
    __ZdlPv(lVar1);
    return;
  }
  return;
}



/* Address: 0x100b40b2c | FUN_100b40b2c */

void FUN_100b40b2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar1 = &PTR___ZNSt9exceptionD2Ev_100f34c80;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw();
}



/* Address: 0x100b40b60 | __ZNSt9exceptionD2Ev */

void __ZNSt9exceptionD2Ev(void)

{
  __ZNSt9exceptionD2Ev();
  return;
}



/* Address: 0x100b40b64 | FUN_100b40b64 */

void FUN_100b40b64(void)

{
  __ZNSt9exceptionD2Ev();
  __ZdlPv();
  return;
}



/* Address: 0x100b40b78 | FUN_100b40b78 */

void FUN_100b40b78(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100b1ad04();
}



/* Address: 0x100b40bac | FUN_100b40bac */

mach_port_t FUN_100b40bac(void)

{
  mach_port_t name;
  
  name = _mach_thread_self();
  _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name);
  return name;
}



/* Address: 0x100b40be4 | FUN_100b40be4 */

bool FUN_100b40be4(mach_port_t param_1,char *param_2,ulong param_3)

{
  int iVar1;
  pthread_t p_Var2;
  
  p_Var2 = _pthread_from_mach_thread_np(param_1);
  iVar1 = _pthread_getname_np(p_Var2,param_2,param_3 & 0xffffffff);
  return iVar1 == 0;
}



/* Address: 0x100b40c1c | SentryMechanism::initWithType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMechanism::initWithType_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryMechanism;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e600(self,param_3);
  }
  return self;
}



/* Address: 0x100b40c88 | SentryMechanism::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_48 = &cf_type;
  local_40 = objc_stub::type(param_1);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_40,&local_48,1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::FUN_100c03200(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar2,&cf_handled,IVar1);
  IVar2 = objc_stub::FUN_100c0ff00(param_1);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_synthetic);
  IVar2 = objc_stub::FUN_100c01040(param_1);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_description);
  IVar2 = objc_stub::data(param_1);
  FUN_100bcfb78(IVar2);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_data);
  IVar2 = objc_stub::FUN_100c03440(param_1);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_help_link);
  IVar2 = objc_stub::FUN_100c06cc0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c06cc0(param_1);
    IVar2 = objc_stub::serialize(IVar2);
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_meta);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b40eb8 | SentryMechanism::type */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b40ec0 | SentryMechanism::setType: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setType_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b40ec8 | SentryMechanism::desc */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::desc(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b40ed0 | SentryMechanism::setDesc: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setDesc_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b40ed8 | SentryMechanism::data */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::data(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b40ee0 | SentryMechanism::setData: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b40eec | SentryMechanism::handled */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::handled(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b40ef4 | SentryMechanism::setHandled: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setHandled_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b40efc | SentryMechanism::synthetic */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::synthetic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b40f04 | SentryMechanism::setSynthetic: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setSynthetic_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b40f0c | SentryMechanism::helpLink */

/* Function Stack Size: 0x10 bytes */

ID SentryMechanism::helpLink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b40f14 | SentryMechanism::setHelpLink: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setHelpLink_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b40f1c | SentryMechanism::meta */

/* Function Stack Size: 0x10 bytes */

int SentryMechanism::meta(WINDOW *param_1,BOOL param_2)

{
  return (int)*(undefined8 *)(param_1 + 0x38);
}



/* Address: 0x100b40f24 | SentryMechanism::setMeta: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryMechanism::setMeta_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b40f30 | SentryMechanism::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMechanism::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b40f9c | FUN_100b40f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b40f9c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 local_484;
  code *local_480;
  code *pcStack_478;
  code *local_470;
  code *pcStack_468;
  code *local_460;
  code *pcStack_458;
  code *local_450;
  code *pcStack_448;
  code *local_440;
  code *pcStack_438;
  undefined4 local_42c;
  void *local_428;
  timeval local_420 [62];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _gettimeofday(local_420,(void *)0x0);
  DAT_1010e2f00 = (double)local_420[0].tv_usec / 1000000.0 + (double)local_420[0].tv_sec;
  pcVar2 = _strdup(param_1);
  DAT_1010e2f18 = 0;
  DAT_1010e2f10 = 0;
  DAT_1010e2f28 = 0;
  DAT_1010e2f20 = 0;
  _DAT_1010e2f38 = 0;
  DAT_1010e2f30 = 0;
  _DAT_1010e2f48 = 0;
  _DAT_1010e2f40 = 0;
  _DAT_1010e2f58 = 0;
  DAT_1010e2f50 = 0;
  DAT_1010e2f08 = pcVar2;
  iVar1 = _open(pcVar2,0);
  if (-1 < iVar1) {
    _close();
    FUN_100b178d4(pcVar2,&local_428,&local_42c,50000);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = "%s: Could not load file";
      uVar4 = 0xe8;
    }
    else {
      local_450 = FUN_100b4183c;
      pcStack_448 = FUN_100b41834;
      local_440 = FUN_100b4188c;
      pcStack_438 = FUN_100b41894;
      local_480 = FUN_100b41844;
      pcStack_478 = FUN_100b4189c;
      local_470 = FUN_100b41920;
      pcStack_468 = FUN_100b419ec;
      local_460 = FUN_100b419f4;
      pcStack_458 = FUN_100b419fc;
      local_484 = 0;
      pvVar3 = local_428;
      FUN_100bf34a4(local_428,local_42c,local_420,1000,&local_480,&DAT_1010e2f10,&local_484);
      _free(local_428);
      if ((int)pvVar3 == 0) goto LAB_100b41140;
      FUN_100b56a9c();
      pcVar2 = "%s, offset %d: %s";
      uVar4 = 0x100;
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                  ,uVar4,pcVar2);
  }
LAB_100b41140:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b41170 | FUN_100b41170 */

undefined8 FUN_100b41170(void)

{
  undefined8 uVar1;
  
  if (DAT_1010e2f60 == '\x01') {
    DAT_1010e2f38 = 1;
    DAT_1010e2f28 = 0;
    DAT_1010e2f30 = 0;
    if ((DAT_1010e2f3c & 1) == 0) {
      DAT_1010e2f20 = CONCAT44((int)((ulong)DAT_1010e2f20 >> 0x20) + 1,(int)DAT_1010e2f20 + 1);
    }
    else {
      DAT_1010e2f10 = 0;
      DAT_1010e2f18 = 0;
      DAT_1010e2f20 = 0x100000001;
    }
    DAT_1010e2f48 = 0;
    DAT_1010e2f58._1_1_ = 1;
    uVar1 = DAT_1010e2f08;
    FUN_100b411e8(DAT_1010e2f08);
    return uVar1;
  }
  return 0;
}



/* Address: 0x100b411e8 | FUN_100b411e8 */

void FUN_100b411e8(char *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  char *pcVar6;
  int extraout_w8;
  int local_11c;
  undefined1 auStack_118 [224];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_11c = _open(param_1,0x602);
  if (local_11c < 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101049310;
    (*(code *)PTR___tlv_bootstrap_101049310)(*piVar3);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    pcVar6 = "Could not open file %s for writing: %s";
    uVar5 = 0x11b;
  }
  else {
    FUN_100b56d64(auStack_118,1,FUN_100b41a04,&local_11c);
    puVar2 = auStack_118;
    FUN_100bf333c(puVar2,0);
    if ((int)puVar2 == 0) {
      puVar2 = auStack_118;
      FUN_100bf307c(puVar2,"version",1);
      if ((int)puVar2 != 0) goto LAB_100b41324;
      puVar2 = auStack_118;
      FUN_100bf2e7c(puVar2,"crashedLastLaunch",DAT_1010e2f48);
      if ((int)puVar2 != 0) goto LAB_100b41324;
      if (DAT_1010e2f48 == '\x01') {
        FUN_100b414f4(DAT_1010e2f00);
      }
      puVar2 = auStack_118;
      FUN_100bf2ecc(puVar2,"durationFromCrashStateInitToLastCrash");
      if ((int)puVar2 != 0) goto LAB_100b41324;
      puVar2 = auStack_118;
      FUN_100bf2ecc(DAT_1010e2f10,puVar2,"activeDurationSinceLastCrash");
      if ((int)puVar2 != 0) goto LAB_100b41324;
      puVar2 = auStack_118;
      FUN_100bf2ecc(DAT_1010e2f18,puVar2,"backgroundDurationSinceLastCrash");
      if ((int)puVar2 != 0) goto LAB_100b41324;
      puVar2 = auStack_118;
      FUN_100bf307c(puVar2,"launchesSinceLastCrash",(long)(int)DAT_1010e2f20);
      if ((int)puVar2 != 0) goto LAB_100b41324;
      puVar2 = auStack_118;
      FUN_100bf307c(puVar2,"sessionsSinceLastCrash",(long)DAT_1010e2f20._4_4_);
      if ((int)puVar2 != 0) goto LAB_100b41324;
      iVar1 = (int)auStack_118;
      FUN_100bf3470();
      _close(local_11c);
      if (iVar1 == 0) {
        uVar5 = 1;
        goto LAB_100b413d4;
      }
    }
    else {
LAB_100b41324:
      _close(local_11c);
    }
    FUN_100b56a9c();
    pcVar6 = "%s: %s";
    uVar5 = 0x15a;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                ,uVar5,pcVar6);
  uVar5 = 0;
LAB_100b413d4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}



/* Address: 0x100b41424 | FUN_100b41424 */

void FUN_100b41424(int param_1)

{
  double dVar1;
  timeval local_40;
  
  dVar1 = DAT_1010e2f50;
  if (DAT_1010e2f60 == '\x01') {
    DAT_1010e2f58._0_1_ = (undefined1)param_1;
    if (param_1 == 0) {
      _gettimeofday(&local_40,(void *)0x0);
      dVar1 = ((double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec) - dVar1;
      DAT_1010e2f28 = DAT_1010e2f28 + dVar1;
      DAT_1010e2f10 = DAT_1010e2f10 + dVar1;
    }
    else {
      _gettimeofday(&local_40,(void *)0x0);
      DAT_1010e2f50 = (double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec;
    }
  }
  return;
}



/* Address: 0x100b414f4 | FUN_100b414f4 */

double FUN_100b414f4(double param_1)

{
  timeval local_30;
  
  _gettimeofday(&local_30,(void *)0x0);
  return ((double)local_30.tv_usec / 1000000.0 + (double)local_30.tv_sec) - param_1;
}



/* Address: 0x100b41548 | FUN_100b41548 */

void FUN_100b41548(int param_1)

{
  undefined8 uVar1;
  double dVar2;
  timeval local_30;
  
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    DAT_1010e2f58._1_1_ = (undefined1)param_1;
    if (param_1 == 0) {
      _gettimeofday(&local_30,(void *)0x0);
      DAT_1010e2f50 = (double)local_30.tv_usec / 1000000.0 + (double)local_30.tv_sec;
      FUN_100b411e8(uVar1);
      return;
    }
    _gettimeofday(&local_30,(void *)0x0);
    dVar2 = ((double)local_30.tv_usec / 1000000.0 + (double)local_30.tv_sec) - DAT_1010e2f50;
    DAT_1010e2f30 = DAT_1010e2f30 + dVar2;
    DAT_1010e2f18 = dVar2 + DAT_1010e2f18;
    DAT_1010e2f20._4_4_ = DAT_1010e2f20._4_4_ + 1;
    DAT_1010e2f38 = DAT_1010e2f38 + 1;
  }
  return;
}



/* Address: 0x100b41640 | FUN_100b41640 */

void FUN_100b41640(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  timeval local_40;
  
  dVar2 = DAT_1010e2f50;
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    _gettimeofday(&local_40,(void *)0x0);
    DAT_1010e2f18 =
         DAT_1010e2f18 + (((double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec) - dVar2);
    FUN_100b411e8(uVar1);
    return;
  }
  return;
}



/* Address: 0x100b416d0 | FUN_100b416d0 */

void FUN_100b416d0(void)

{
  undefined8 uVar1;
  double *pdVar2;
  double dVar3;
  timeval local_40;
  
  dVar3 = DAT_1010e2f50;
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    pdVar2 = (double *)&DAT_1010e2f10;
    _gettimeofday(&local_40,(void *)0x0);
    if ((((byte)DAT_1010e2f58 & 1) != 0) ||
       (pdVar2 = (double *)&DAT_1010e2f18, (DAT_1010e2f58._1_1_ & 1) == 0)) {
      dVar3 = ((double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec) - dVar3;
      pdVar2[3] = dVar3 + pdVar2[3];
      *pdVar2 = dVar3 + *pdVar2;
    }
    DAT_1010e2f48 = 1;
    FUN_100b411e8(uVar1);
    return;
  }
  return;
}



/* Address: 0x100b41794 | FUN_100b41794 */

undefined8 * FUN_100b41794(void)

{
  return &DAT_1010e2f10;
}



/* Address: 0x100b417a0 | FUN_100b417a0 */

undefined ** FUN_100b417a0(void)

{
  return &PTR_FUN_100ffa938;
}



/* Address: 0x100b417ac | FUN_100b417ac */

void FUN_100b417ac(uint param_1)

{
  if ((DAT_1010e2f60 != param_1) && (DAT_1010e2f60 = (byte)param_1, param_1 != 0)) {
    FUN_100b41170();
    return;
  }
  return;
}



/* Address: 0x100b417cc | FUN_100b417cc */

undefined1 FUN_100b417cc(void)

{
  return DAT_1010e2f60;
}



/* Address: 0x100b417d8 | FUN_100b417d8 */

void FUN_100b417d8(long param_1)

{
  undefined8 uVar1;
  
  if (DAT_1010e2f60 == '\x01') {
    *(undefined2 *)(param_1 + 0xd8) = DAT_1010e2f58;
    *(undefined8 *)(param_1 + 0xd0) = DAT_1010e2f50;
    uVar1 = DAT_1010e2f10;
    *(undefined8 *)(param_1 + 0xa8) = DAT_1010e2f18;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    uVar1 = DAT_1010e2f28;
    *(undefined8 *)(param_1 + 0xc0) = DAT_1010e2f30;
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    *(undefined1 *)(param_1 + 0xcc) = DAT_1010e2f3c;
    *(undefined1 *)(param_1 + 0xcd) = DAT_1010e2f48;
    *(undefined8 *)(param_1 + 0xb0) = DAT_1010e2f20;
    *(undefined4 *)(param_1 + 200) = DAT_1010e2f38;
  }
  return;
}



/* Address: 0x100b41834 | FUN_100b41834 */

undefined8 FUN_100b41834(void)

{
  return 0;
}



/* Address: 0x100b4183c | FUN_100b4183c */

undefined8 FUN_100b4183c(void)

{
  return 0;
}



/* Address: 0x100b41844 | FUN_100b41844 */

undefined4 FUN_100b41844(char *param_1,undefined1 param_2,long param_3)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    return 5;
  }
  iVar1 = _strcmp(param_1,"crashedLastLaunch");
  if (iVar1 == 0) {
    *(undefined1 *)(param_3 + 0x2c) = param_2;
  }
  return 0;
}



/* Address: 0x100b4188c | FUN_100b4188c */

undefined8 FUN_100b4188c(void)

{
  return 0;
}



/* Address: 0x100b41894 | FUN_100b41894 */

undefined8 FUN_100b41894(void)

{
  return 0;
}



/* Address: 0x100b4189c | FUN_100b4189c */

undefined4 FUN_100b4189c(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return 5;
  }
  iVar1 = _strcmp(param_2,"durationFromCrashStateInitToLastCrash");
  if (iVar1 == 0) {
    param_3[6] = param_1;
  }
  iVar1 = _strcmp(param_2,"activeDurationSinceLastCrash");
  if (iVar1 == 0) {
    *param_3 = param_1;
  }
  iVar1 = _strcmp(param_2,"backgroundDurationSinceLastCrash");
  if (iVar1 == 0) {
    param_3[1] = param_1;
  }
  return 0;
}



/* Address: 0x100b41920 | FUN_100b41920 */

char * FUN_100b41920(char *param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x5;
  }
  iVar1 = _strcmp(param_1,"version");
  if (iVar1 == 0) {
    if (param_2 != 1) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                    ,0x7f,"Expected version 1 but got %lld");
      return (char *)0x5;
    }
  }
  else {
    iVar1 = _strcmp(param_1,"launchesSinceLastCrash");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10) = (int)param_2;
    }
    else {
      iVar1 = _strcmp(param_1,"sessionsSinceLastCrash");
      if (iVar1 == 0) {
        *(int *)(param_3 + 0x14) = (int)param_2;
      }
    }
  }
  FUN_100b4189c((double)param_2,param_1,param_3);
  return param_1;
}



/* Address: 0x100b419ec | FUN_100b419ec */

undefined8 FUN_100b419ec(void)

{
  return 0;
}



/* Address: 0x100b419f4 | FUN_100b419f4 */

undefined8 FUN_100b419f4(void)

{
  return 0;
}



/* Address: 0x100b419fc | FUN_100b419fc */

undefined8 FUN_100b419fc(void)

{
  return 0;
}



/* Address: 0x100b41a04 | FUN_100b41a04 */

undefined4 FUN_100b41a04(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_3;
  FUN_100b176dc(iVar1,param_1,param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Address: 0x100b41a34 | SentryStacktrace::initWithFrames:registers: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryStacktrace::initWithFrames_registers_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryStacktrace;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d5e0(self,param_4);
    objc_stub::FUN_100c0bea0(self,param_3);
  }
  return self;
}



/* Address: 0x100b41acc | SentryStacktrace::fixDuplicateFrames */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryStacktrace::fixDuplicateFrames(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::frames(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (1 < IVar2) {
    IVar2 = objc_stub::registers(param_1);
    if (IVar2 == 0) {
      return;
    }
    IVar2 = objc_stub::frames(param_1);
    IVar3 = objc_stub::frames(param_1);
    IVar3 = objc_stub::count(IVar3);
    IVar2 = objc_stub::objectAtIndex_(IVar2,IVar3 - 2);
    IVar3 = objc_stub::registers(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_lr);
    IVar2 = objc_stub::FUN_100c05460(IVar2);
    IVar2 = objc_stub::isEqualToString_(IVar3,IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::frames(param_1);
      IVar2 = objc_stub::mutableCopy(IVar2);
      IVar3 = objc_stub::frames(param_1);
      IVar3 = objc_stub::count(IVar3);
      objc_stub::FUN_100c090c0(IVar2,IVar3 - 2);
      IVar2 = objc_stub::FUN_100c0bea0(param_1,IVar2);
      iVar1 = (int)IVar2;
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryStacktrace.m"
                      ,0x27,&cf_Foundduplicateframe_removingonewithlinkregister);
      }
    }
  }
  return;
}



/* Address: 0x100b41c94 | SentryStacktrace::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryStacktrace::serialize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID self_00;
  long lVar7;
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
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self = objc_stub::init((ID)puVar1);
  puVar1 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)puVar1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar3 = objc_stub::frames(param_1);
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_130,auStack_f0,0x10);
  if (IVar4 != 0) {
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(IVar3);
        }
        self_00 = *(ID *)(lStack_128 + IVar6 * 8);
        IVar5 = objc_stub::serialize(self_00);
        IVar5 = objc_stub::FUN_100bfdac0(IVar5);
        IVar5 = objc_stub::count(IVar5);
        if (IVar5 != 0) {
          IVar5 = objc_stub::serialize(self_00);
          objc_stub::addObject_(IVar2,IVar5);
        }
        IVar6 = IVar6 + 1;
      } while (IVar4 != IVar6);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  IVar3 = objc_stub::count(IVar2);
  if (IVar3 != 0) {
    objc_stub::setValue_forKey_(self,IVar2,&cf_frames);
  }
  IVar2 = objc_stub::registers(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::registers(param_1);
    objc_stub::setValue_forKey_(self,IVar2,&cf_registers);
  }
  IVar2 = objc_stub::FUN_100c0eea0(param_1);
  objc_stub::FUN_100c0ab60((ID)&objc::class_t::SentryDictionary,IVar2,&cf_snapshot,self);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b41eec | SentryStacktrace::frames */

/* Function Stack Size: 0x10 bytes */

ID SentryStacktrace::frames(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b41ef4 | SentryStacktrace::setFrames: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryStacktrace::setFrames_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b41f00 | SentryStacktrace::registers */

/* Function Stack Size: 0x10 bytes */

ID SentryStacktrace::registers(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b41f08 | SentryStacktrace::setRegisters: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryStacktrace::setRegisters_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


