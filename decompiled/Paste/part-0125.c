/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100183700 | PHPLCrashMachExceptionServer::initWithCallBack:context:error: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID PHPLCrashMachExceptionServer::initWithCallBack_context_error_
             (ID param_1,SEL param_2,undefined4 *param_3,void *param_4,ID *param_5)

{
  mach_port_name_t name;
  undefined *puVar1;
  int iVar2;
  kern_return_t kVar3;
  mach_port_t mVar4;
  ID IVar5;
  void *pvVar6;
  int *piVar7;
  cfstringStruct *pcVar8;
  mach_port_t mStack_94;
  ID local_90;
  class_t *pcStack_88;
  pthread_t local_80;
  pthread_attr_t pStack_78;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_88 = &objc::class_t::PHPLCrashMachExceptionServer;
  local_90 = param_1;
  IVar5 = ::NSObject::init((ID)&local_90,"init");
  if (IVar5 == 0) {
LAB_10018382c:
    IVar5 = 0;
  }
  else {
    pvVar6 = _calloc(1,0x98);
    *(void **)(IVar5 + 8) = pvVar6;
    *(undefined4 **)((long)pvVar6 + 0x10) = param_3;
    *(void **)((long)pvVar6 + 0x18) = param_4;
    iVar2 = _pthread_mutex_init((pthread_mutex_t *)((long)pvVar6 + 0x20),(pthread_mutexattr_t *)0x0)
    ;
    if (iVar2 == 0) {
      iVar2 = _pthread_cond_init((pthread_cond_t *)(*(long *)(IVar5 + 8) + 0x60),
                                 (pthread_condattr_t *)0x0);
      puVar1 = PTR__mach_task_self__100ea8778;
      if (iVar2 == 0) {
        kVar3 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,1,
                                    (mach_port_name_t *)(*(long *)(IVar5 + 8) + 4));
        if (kVar3 == 0) {
          kVar3 = _mach_port_allocate(*(ipc_space_t *)puVar1,1,
                                      (mach_port_name_t *)(*(long *)(IVar5 + 8) + 8));
          if (kVar3 != 0) goto LAB_100183818;
          name = *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 8);
          kVar3 = _mach_port_insert_right(*(ipc_space_t *)puVar1,name,name,0x14);
          if (kVar3 == 0) {
            kVar3 = _mach_port_request_notification
                              (*(ipc_space_t *)puVar1,
                               *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 4),0x46,1,
                               *(mach_port_t *)(*(long *)(IVar5 + 8) + 8),0x15,&mStack_94);
            if (kVar3 == 0) {
              kVar3 = _mach_port_allocate(*(ipc_space_t *)puVar1,3,
                                          (mach_port_name_t *)(*(long *)(IVar5 + 8) + 0xc));
              if (kVar3 == 0) {
                kVar3 = _mach_port_move_member
                                  (*(ipc_space_t *)puVar1,
                                   *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 4),
                                   *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 0xc));
                if (kVar3 == 0) {
                  kVar3 = _mach_port_move_member
                                    (*(ipc_space_t *)puVar1,
                                     *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 8),
                                     *(mach_port_name_t *)(*(long *)(IVar5 + 8) + 0xc));
                  if (kVar3 == 0) {
                    iVar2 = _pthread_attr_init(&pStack_78);
                    if (iVar2 == 0) {
                      _pthread_attr_setdetachstate(&pStack_78,2);
                      iVar2 = _pthread_create(&local_80,&pStack_78,(void **)FUN_1001839dc,
                                              *(void **)(IVar5 + 8));
                      if (iVar2 == 0) {
                        _pthread_attr_destroy(&pStack_78);
                        mVar4 = _pthread_mach_thread_np(local_80);
                        **(mach_port_t **)(IVar5 + 8) = mVar4;
                        goto LAB_100183830;
                      }
                      piVar7 = ___error();
                      FUN_10018a88c(param_5,*piVar7,&cf_Failedtocreateexceptionserverthread);
                      _pthread_attr_destroy(&pStack_78);
                    }
                    else {
                      piVar7 = ___error();
                      FUN_10018a88c(param_5,*piVar7,&cf_Failedtoinitializepthread_attr);
                    }
                    goto LAB_10018382c;
                  }
                  pcVar8 = &cf_Failedtoaddexceptionservernotifyporttoportset;
                }
                else {
                  pcVar8 = &cf_Failedtoaddexceptionserverporttoportset;
                }
              }
              else {
                pcVar8 = &cf_Failedtoallocateexceptionserver_sportset;
              }
            }
            else {
              pcVar8 = &cf_FailedtorequestMACH_NOTIFY_NO_SENDERSontheexceptionserver_sport;
            }
          }
          else {
            pcVar8 = &cf_Failedtoaddsendrighttoexceptionserver_sport;
          }
        }
        else {
LAB_100183818:
          pcVar8 = &cf_Failedtoallocateexceptionserver_sport;
        }
        FUN_10018a7fc(param_5,kVar3,pcVar8);
        goto LAB_10018382c;
      }
      piVar7 = ___error();
      FUN_10018a88c(param_5,*piVar7,&cf_Conditioninitializationfailed);
      _pthread_mutex_destroy((pthread_mutex_t *)(*(long *)(IVar5 + 8) + 0x20));
    }
    else {
      piVar7 = ___error();
      FUN_10018a88c(param_5,*piVar7,&cf_Mutexinitializationfailed);
    }
    _free(*(void **)(IVar5 + 8));
    *(undefined8 *)(IVar5 + 8) = 0;
    IVar5 = 0;
  }
LAB_100183830:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x1001839dc | FUN_1001839dc */

undefined8 FUN_1001839dc(long param_1)

{
  mach_port_name_t rcv_name;
  undefined *puVar1;
  undefined *puVar2;
  kern_return_t kVar3;
  mach_msg_return_t mVar4;
  char *pcVar5;
  FILE *pFVar6;
  ulong uVar7;
  vm_size_t size;
  mach_msg_header_t *local_58;
  
  puVar2 = PTR__vm_page_size_100ea8be0;
  puVar1 = PTR__mach_task_self__100ea8778;
  local_58 = (mach_msg_header_t *)0x0;
  size = *(long *)PTR__vm_page_size_100ea8be0 + 0x4bU & -*(long *)PTR__vm_page_size_100ea8be0;
  kVar3 = _vm_allocate(*(vm_map_t *)PTR__mach_task_self__100ea8778,(vm_address_t *)&local_58,size,1)
  ;
  if (kVar3 == 0) {
    do {
LAB_100183a70:
      do {
        rcv_name = *(mach_port_name_t *)(param_1 + 0xc);
        local_58->msgh_local_port = rcv_name;
        local_58->msgh_size = (mach_msg_size_t)size;
        mVar4 = _mach_msg(local_58,6,0,(mach_msg_size_t)size,rcv_name,0,0);
        if (mVar4 == 0) {
          if (local_58->msgh_local_port == *(mach_port_t *)(param_1 + 8)) {
            if (local_58->msgh_id == 0x46) goto LAB_100183a70;
            if ((local_58->msgh_id == -0x21524111) && ((*(byte *)(param_1 + 0x90) & 1) != 0)) {
              _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
              *(undefined1 *)(param_1 + 0x91) = 1;
              _pthread_cond_signal((pthread_cond_t *)(param_1 + 0x60));
              _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
              if (local_58 == (mach_msg_header_t *)0x0) {
                return 0;
              }
              _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_58,size);
              return 0;
            }
          }
          if (local_58->msgh_size < 0x4c) {
            FUN_100184144(local_58,5);
          }
          else if ((ulong)local_58[2].msgh_reserved << 3 <= size - 0x4c) {
            uVar7 = (ulong)local_58[1].msgh_reserved;
            (**(code **)(param_1 + 0x10))
                      (uVar7,local_58[1].msgh_size,local_58[2].msgh_local_port,&local_58[2].msgh_id,
                       (ulong)local_58[2].msgh_reserved,*(undefined8 *)(param_1 + 0x18));
            FUN_100184144(local_58,uVar7);
          }
          goto LAB_100183a70;
        }
      } while (mVar4 != 0x10004004);
      size = (*(long *)puVar2 + (ulong)local_58->msgh_size) - 1 & -*(long *)puVar2;
      _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_58,size);
      kVar3 = _vm_allocate(*(vm_map_t *)puVar1,(vm_address_t *)&local_58,size,1);
    } while (kVar3 == 0);
    pFVar6 = *(FILE **)PTR____stderrp_100ea82f8;
    pcVar5 = "Unexpected error in vm_allocate(): 0x%x\n";
  }
  else {
    pFVar6 = *(FILE **)PTR____stderrp_100ea82f8;
    pcVar5 = "Unexpected error in vm_allocate(): %x\n";
  }
  _fprintf(pFVar6,pcVar5);
  return 0;
}



/* Address: 0x100183be0 | PHPLCrashMachExceptionServer::serverThread */

/* Function Stack Size: 0x10 bytes */

unsigned_int PHPLCrashMachExceptionServer::serverThread(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  
  plVar3 = (long *)(param_1 + 8);
  lVar2 = *plVar3;
  if (*plVar3 == 0) {
    FUN_10018fee4(param_2,param_1,plVar3,&local_28);
    lVar2 = local_28;
  }
  _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x20));
  uVar1 = *(unsigned_int *)*plVar3;
  _pthread_mutex_unlock((pthread_mutex_t *)((unsigned_int *)*plVar3 + 8));
  return uVar1;
}



/* Address: 0x100183c44 | PHPLCrashMachExceptionServer::copySendRightForServerAndReturningError: */

/* Function Stack Size: 0x18 bytes */

unsigned_int
PHPLCrashMachExceptionServer::copySendRightForServerAndReturningError_
          (ID param_1,SEL param_2,ID *param_3)

{
  mach_port_name_t name;
  kern_return_t kVar1;
  long lVar2;
  unsigned_int uVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 8) + 0x20));
  name = *(mach_port_name_t *)(*(long *)(param_1 + 8) + 4);
  kVar1 = _mach_port_insert_right(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name,name,0x14);
  if (kVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = *(unsigned_int *)(lVar2 + 4);
  }
  else {
    FUN_10018a7fc(param_3,kVar1,&cf_FailedtoinsertMachsendright);
    uVar3 = 0;
    lVar2 = *(long *)(param_1 + 8);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
  return uVar3;
}



/* Address: 0x100183cc8 | PHPLCrashMachExceptionServer::exceptionPortWithMask:error: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID PHPLCrashMachExceptionServer::exceptionPortWithMask_error_
             (ID param_1,SEL param_2,unsigned_int param_3,ID *param_4)

{
  unsigned_int name;
  class_t *self;
  ID IVar1;
  
  name = copySendRightForServerAndReturningError_(param_1,param_4);
  if (name - 1 < 0xfffffffe) {
    self = &objc::class_t::PHPLCrashMachExceptionPort;
    _objc_alloc();
    IVar1 = objc_stub::initWithServerPort_mask_behavior_flavor_
                      ((ID)self,(ulong)name,(ulong)param_3,0x80000001,1);
    _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name);
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x100183d40 | FUN_100183d40 */

void FUN_100183d40(mach_port_t param_1,mach_port_t param_2,uint param_3,undefined8 *param_4,
                  ulong param_5,uint *param_6)

{
  uint uVar1;
  mach_port_t exception_port;
  long lVar2;
  exception_data_type_t old_stateCnt;
  kern_return_t kVar3;
  uint flavor;
  uint uVar4;
  long extraout_x8;
  ulong uVar5;
  exception_data_t peVar6;
  mach_msg_type_number_t codeCnt;
  exception_data_t code;
  mach_msg_type_number_t amStack_14e0 [2];
  long alStack_14d8 [3];
  exception_data_type_t aeStack_14c0 [4];
  natural_t anStack_14b0 [1296];
  long local_70;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar4 = param_3 - 1;
  if ((uVar4 < 0xc) && ((0xbffU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    uVar4 = *(uint *)(&DAT_100c30a80 + (ulong)uVar4 * 4);
  }
  else {
    uVar4 = 1 << (ulong)(param_3 & 0x1f);
  }
  uVar5 = (ulong)*param_6;
  if (*param_6 != 0) {
    param_6 = param_6 + 0x1d;
    do {
      exception_port = param_6[-0xe];
      if ((1 < exception_port + 1) && ((param_6[-0x1c] & uVar4) != 0)) {
        uVar4 = *param_6;
        aeStack_14c0[3] = param_6[0xe];
        flavor = aeStack_14c0[3];
        (*(code *)PTR____chkstk_darwin_100ea82c0)((param_5 & 0xffffffff) * 4 + 0xf & 0x7fffffff0);
        lVar2 = -extraout_x8;
        code = (exception_data_t)((long)aeStack_14c0 + lVar2);
        codeCnt = (mach_msg_type_number_t)param_5;
        if (codeCnt != 0) {
          param_5 = param_5 & 0xffffffff;
          peVar6 = code;
          do {
            *peVar6 = (exception_data_type_t)*param_4;
            param_5 = param_5 - 1;
            param_4 = param_4 + 1;
            peVar6 = peVar6 + 1;
          } while (param_5 != 0);
        }
        uVar1 = uVar4 & 0x7fffffff;
        if (uVar1 == 1) {
LAB_100183e94:
          if (-1 < (int)uVar4) {
            kVar3 = _exception_raise(exception_port,param_2,param_1,param_3,code,codeCnt);
            goto LAB_100183e00;
          }
        }
        else {
          aeStack_14c0[2] = 0x510;
          kVar3 = _thread_get_state(param_2,flavor,anStack_14b0,
                                    (mach_msg_type_number_t *)(aeStack_14c0 + 2));
          old_stateCnt = aeStack_14c0[2];
          if (kVar3 != 0) goto LAB_100183e00;
          if (uVar1 == 3) {
            if (-1 < (int)uVar4) {
              *(natural_t **)((long)alStack_14d8 + lVar2) = anStack_14b0;
              *(exception_data_type_t **)((long)alStack_14d8 + lVar2 + 8) = aeStack_14c0 + 2;
              *(exception_data_type_t *)((long)amStack_14e0 + lVar2) = old_stateCnt;
              kVar3 = _exception_raise_state_identity
                                (exception_port,param_2,param_1,param_3,code,codeCnt,
                                 aeStack_14c0 + 3,anStack_14b0,
                                 *(mach_msg_type_number_t *)((long)amStack_14e0 + lVar2),
                                 *(thread_state_t *)((long)alStack_14d8 + lVar2),
                                 *(mach_msg_type_number_t **)((long)alStack_14d8 + lVar2 + 8));
              goto LAB_100183e00;
            }
          }
          else if (uVar1 == 2) {
            if (-1 < (int)uVar4) {
              *(exception_data_type_t **)((long)alStack_14d8 + lVar2 + 8) = aeStack_14c0 + 2;
              kVar3 = _exception_raise_state
                                (exception_port,param_3,code,codeCnt,aeStack_14c0 + 3,anStack_14b0,
                                 old_stateCnt,anStack_14b0,
                                 *(mach_msg_type_number_t **)((long)alStack_14d8 + lVar2 + 8));
              goto LAB_100183e00;
            }
          }
          else if (uVar1 == 1) goto LAB_100183e94;
        }
        kVar3 = 5;
        goto LAB_100183e00;
      }
      param_6 = param_6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  kVar3 = 5;
LAB_100183e00:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(kVar3);
  }
  return;
}



/* Address: 0x100183f80 | PHPLCrashMachExceptionServer::dealloc */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashMachExceptionServer::dealloc(ID param_1,SEL param_2)

{
  char *pcVar1;
  mach_msg_return_t mVar2;
  undefined *puVar3;
  long lVar4;
  ID local_58;
  class_t *pcStack_50;
  mach_msg_header_t local_48;
  undefined4 local_30;
  mach_msg_return_t local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_1 + 8) != 0) {
    pcVar1 = (char *)(*(long *)(param_1 + 8) + 0x90);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    local_48.msgh_local_port = 0;
    local_48.msgh_reserved = 0;
    local_48.msgh_remote_port = *(mach_port_t *)(*(long *)(param_1 + 8) + 8);
    local_48.msgh_bits = 0x1513;
    local_48.msgh_size = 0x18;
    local_48.msgh_id = -0x21524111;
    mVar2 = _mach_msg(&local_48,1,0x18,0,0,0,0);
    if (mVar2 == 0) {
      _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 8) + 0x20));
      lVar4 = *(long *)(param_1 + 8);
      if ((*(byte *)(lVar4 + 0x91) & 1) == 0) {
        do {
          _pthread_cond_wait((pthread_cond_t *)(lVar4 + 0x60),(pthread_mutex_t *)(lVar4 + 0x20));
          lVar4 = *(long *)(param_1 + 8);
        } while (*(char *)(lVar4 + 0x91) != '\x01');
      }
      _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
      puVar3 = PTR__mach_task_self__100ea8778;
      lVar4 = *(long *)(param_1 + 8);
      if (*(mach_port_name_t *)(lVar4 + 4) != 0) {
        _mach_port_deallocate
                  (*(ipc_space_t *)PTR__mach_task_self__100ea8778,*(mach_port_name_t *)(lVar4 + 4));
        lVar4 = *(long *)(param_1 + 8);
      }
      if (*(mach_port_name_t *)(lVar4 + 8) != 0) {
        _mach_port_deallocate(*(ipc_space_t *)puVar3,*(mach_port_name_t *)(lVar4 + 8));
        lVar4 = *(long *)(param_1 + 8);
      }
      if (*(mach_port_name_t *)(lVar4 + 0xc) != 0) {
        _mach_port_deallocate(*(ipc_space_t *)puVar3,*(mach_port_name_t *)(lVar4 + 0xc));
        lVar4 = *(long *)(param_1 + 8);
      }
      _pthread_cond_destroy((pthread_cond_t *)(lVar4 + 0x60));
      _pthread_mutex_destroy((pthread_mutex_t *)(*(long *)(param_1 + 8) + 0x20));
      _free(*(void **)(param_1 + 8));
    }
    else {
      puVar3 = PTR___os_log_default_100ea8350;
      _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
      if ((int)puVar3 != 0) {
        local_30 = 0x4000100;
        local_2c = mVar2;
        __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                      "[PLCrashReporter] Unexpected error sending termination message to background thread: %d"
                      ,&local_30,8);
      }
    }
  }
  pcStack_50 = &objc::class_t::PHPLCrashMachExceptionServer;
  local_58 = param_1;
  ::NSObject::dealloc((ID)&local_58,"dealloc");
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100184144 | FUN_100184144 */

void FUN_100184144(uint *param_1,undefined4 param_2)

{
  mach_msg_header_t local_34;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_34.msgh_bits = *param_1 & 0x1f;
  local_34.msgh_remote_port = param_1[2];
  local_34.msgh_local_port = 0;
  local_34.msgh_size = 0x24;
  local_1c = *(undefined8 *)PTR__NDR_record_100ea8270;
  local_34.msgh_id = param_1[5] + 100;
  local_34.msgh_reserved = 0;
  local_14 = param_2;
  _mach_msg(&local_34,1,0x24,0,0,0,0);
  return;
}



/* Address: 0x1001841b4 | PHPLCrashProcessInfo::currentProcessInfo */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashProcessInfo::currentProcessInfo(ID param_1,SEL param_2)

{
  pid_t pVar1;
  undefined4 extraout_var;
  ID IVar2;
  
  _objc_alloc();
  pVar1 = _getpid();
  IVar2 = objc_stub::initWithProcessID_(param_1,CONCAT44(extraout_var,pVar1));
  return IVar2;
}



/* Address: 0x1001841e4 | PHPLCrashProcessInfo::initWithProcessID: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

ID PHPLCrashProcessInfo::initWithProcessID_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  ID IVar2;
  undefined1 *puVar3;
  undefined *self;
  ID IVar4;
  size_t local_2f8;
  ID local_2f0;
  class_t *pcStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  byte local_2bf;
  undefined1 auStack_1ed [317];
  undefined4 local_b0;
  int local_58 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_2e8 = &objc::class_t::PHPLCrashProcessInfo;
  local_2f0 = param_1;
  IVar2 = ::NSObject::init((ID)&local_2f0,"init");
  if (IVar2 != 0) {
    local_58[0] = 1;
    local_58[1] = 0xe;
    local_58[2] = 1;
    local_2f8 = 0x288;
    local_58[3] = param_3;
    iVar1 = _sysctl(local_58,4,&local_2e0,&local_2f8,(void *)0x0,0);
    if (iVar1 == 0) {
      if ((local_2bf >> 3 & 1) != 0) {
        *(undefined1 *)(IVar2 + 0x30) = 1;
      }
      puVar3 = auStack_1ed;
      FUN_10018b54c(puVar3,0x10);
      IVar4 = 0;
      if (puVar3 != (undefined1 *)0x0) {
        self = &_OBJC_CLASS___NSString;
        _objc_alloc();
        IVar4 = objc_stub::initWithBytes_length_encoding_((ID)self,auStack_1ed,puVar3,4);
      }
      *(ID *)(IVar2 + 0x10) = IVar4;
      *(int *)(IVar2 + 8) = param_3;
      *(undefined4 *)(IVar2 + 0x18) = local_b0;
      *(undefined8 *)(IVar2 + 0x28) = uStack_2d8;
      *(undefined8 *)(IVar2 + 0x20) = local_2e0;
      goto LAB_1001842f0;
    }
    ___error();
  }
  IVar2 = 0;
LAB_1001842f0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100184330 | PHPLCrashProcessInfo::processID */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashProcessInfo::processID(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 8);
}



/* Address: 0x100184338 | PHPLCrashProcessInfo::processName */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashProcessInfo::processName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100184340 | PHPLCrashProcessInfo::parentProcessID */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashProcessInfo::parentProcessID(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x18);
}



/* Address: 0x100184348 | PHPLCrashProcessInfo::isTraced */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashProcessInfo::isTraced(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0x30);
}



/* Address: 0x100184350 | PHPLCrashProcessInfo::startTime */

/* Function Stack Size: 0x10 bytes */

timeval PHPLCrashProcessInfo::startTime(ID param_1,SEL param_2)

{
  return *(timeval *)(param_1 + 0x20);
}



/* Address: 0x10018435c | PHPLCrashProcessInfo::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashProcessInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100184368 | PHPLCrashReport::initWithData:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::initWithData_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID self;
  void *pvVar1;
  ID IVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ID self_00;
  long lVar6;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::PHPLCrashReport;
  local_50 = param_1;
  self = ::NSObject::init((ID)&local_50,"init");
  if (self == 0) {
    pcVar4 = &cf_Couldnotinitializesuperclass;
    uVar3 = 0;
LAB_10018446c:
    FUN_1001846f4(param_4,uVar3,pcVar4);
  }
  else {
    pvVar1 = _malloc(8);
    *(void **)(self + 8) = pvVar1;
    IVar2 = ::NSObject::decodeCrashData_error_(self,param_3,param_4);
    **(ID **)(self + 8) = IVar2;
    if (IVar2 == 0) {
      return 0;
    }
    *(undefined8 *)(self + 0x60) = 0;
    lVar5 = *(long *)(IVar2 + 0x68);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x1c) != 0)) {
      if (*(long *)(lVar5 + 0x20) != 0x10) {
        pcVar4 = &cf_ReportUUIDvalueisnotastandard16bytes;
        uVar3 = 2;
        goto LAB_10018446c;
      }
      uVar3 = 0;
      _CFUUIDCreateFromUUIDBytes
                (0,**(undefined8 **)(lVar5 + 0x28),(*(undefined8 **)(lVar5 + 0x28))[1]);
      *(undefined8 *)(self + 0x60) = uVar3;
      IVar2 = **(ID **)(self + 8);
    }
    if (*(long *)(IVar2 + 0x60) == 0) {
      self_00 = *(ID *)(self + 0x18);
    }
    else {
      IVar2 = ::NSObject::extractMachineInfo_error_(self,*(long *)(IVar2 + 0x60),param_4);
      *(ID *)(self + 0x18) = IVar2;
      self_00 = *(ID *)(self + 0x18);
      if (self_00 == 0) {
        return 0;
      }
      IVar2 = **(ID **)(self + 8);
    }
    uVar3 = *(undefined8 *)(IVar2 + 0x18);
    IVar2 = objc_stub::processorInfo(self_00);
    IVar2 = ::NSObject::extractSystemInfo_processorInfo_error_(self,uVar3,IVar2,param_4);
    *(ID *)(self + 0x10) = IVar2;
    if (*(long *)(self + 0x10) != 0) {
      IVar2 = ::NSObject::extractApplicationInfo_error_
                        (self,*(undefined8 *)(**(long **)(self + 8) + 0x20),param_4);
      *(ID *)(self + 0x20) = IVar2;
      if (*(long *)(self + 0x20) != 0) {
        lVar5 = **(long **)(self + 8);
        if (*(long *)(lVar5 + 0x58) != 0) {
          IVar2 = ::NSObject::extractProcessInfo_error_(self,*(long *)(lVar5 + 0x58),param_4);
          *(ID *)(self + 0x28) = IVar2;
          if (*(long *)(self + 0x28) == 0) {
            return 0;
          }
          lVar5 = **(long **)(self + 8);
        }
        IVar2 = ::NSObject::extractSignalInfo_error_(self,*(undefined8 *)(lVar5 + 0x50),param_4);
        *(ID *)(self + 0x30) = IVar2;
        if (*(long *)(self + 0x30) != 0) {
          lVar5 = **(long **)(self + 8);
          if ((*(long *)(lVar5 + 0x50) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar5 + 0x50) + 0x30), lVar6 != 0)) {
            IVar2 = ::NSObject::extractMachExceptionInfo_error_(self,lVar6,param_4);
            *(ID *)(self + 0x38) = IVar2;
            if (*(long *)(self + 0x38) == 0) {
              return 0;
            }
            lVar5 = **(long **)(self + 8);
          }
          IVar2 = ::NSObject::extractThreadInfo_error_(self,lVar5,param_4);
          *(ID *)(self + 0x40) = IVar2;
          if (*(long *)(self + 0x40) != 0) {
            IVar2 = ::NSObject::extractImageInfo_error_(self,**(undefined8 **)(self + 8),param_4);
            *(ID *)(self + 0x48) = IVar2;
            if (*(long *)(self + 0x48) != 0) {
              lVar5 = **(long **)(self + 8);
              if (*(long *)(lVar5 + 0x48) != 0) {
                IVar2 = ::NSObject::extractExceptionInfo_error_
                                  (self,*(long *)(lVar5 + 0x48),param_4);
                *(ID *)(self + 0x50) = IVar2;
                if (*(long *)(self + 0x50) == 0) {
                  return 0;
                }
                lVar5 = **(long **)(self + 8);
              }
              if (*(int *)(lVar5 + 0x70) == 0) {
                return self;
              }
              IVar2 = NSData::dataWithBytes_length_
                                ((ID)&_OBJC_CLASS___NSData,*(undefined8 *)(lVar5 + 0x80),
                                 *(undefined8 *)(lVar5 + 0x78));
              *(ID *)(self + 0x58) = IVar2;
              if (*(long *)(self + 0x58) != 0) {
                return self;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Address: 0x1001846f4 | FUN_1001846f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001846f4(ID *param_1,ulong param_2)

{
  ID IVar1;
  
  if (param_1 != (ID *)0x0) {
    IVar1 = NSDictionary::dictionaryWithObjectsAndKeys_((ID)&_OBJC_CLASS___NSDictionary);
    IVar1 = NSError::errorWithDomain_code_userInfo_
                      ((ID)&_OBJC_CLASS___NSError,PTR_cf_PLCrashReporterErrorDomain_100fb3070,
                       param_2 & 0xffffffff,IVar1);
    *param_1 = IVar1;
    return 0;
  }
  return 0;
}



/* Address: 0x100184788 | PHPLCrashReport::dealloc */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashReport::dealloc(ID param_1,SEL param_2)

{
  long *plVar1;
  ID local_30;
  class_t *pcStack_28;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    _CFRelease();
  }
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_10018eb34(*plVar1,0);
      plVar1 = *(long **)(param_1 + 8);
    }
    _free(plVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  pcStack_28 = &objc::class_t::PHPLCrashReport;
  local_30 = param_1;
  ::NSObject::dealloc((ID)&local_30,"dealloc");
  return;
}



/* Address: 0x1001847fc | PHPLCrashReport::imageForAddress: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID PHPLCrashReport::imageForAddress_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self_00;
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
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = images(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_110;
    do {
      IVar5 = 0;
      do {
        if (*local_110 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_118 + IVar5 * 8);
        IVar2 = objc_stub::imageBaseAddress(self_00);
        if ((IVar2 <= param_3) && (IVar3 = objc_stub::imageSize(self_00), param_3 < IVar3 + IVar2))
        goto LAB_1001848ec;
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  self_00 = 0;
LAB_1001848ec:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}



/* Address: 0x100184930 | PHPLCrashReport::hasMachineInfo */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReport::hasMachineInfo(ID param_1,SEL param_2)

{
  return (bool)(*(long *)(param_1 + 0x18) != 0);
}



/* Address: 0x100184940 | PHPLCrashReport::hasProcessInfo */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReport::hasProcessInfo(ID param_1,SEL param_2)

{
  return (bool)(*(long *)(param_1 + 0x28) != 0);
}



/* Address: 0x100184950 | PHPLCrashReport::hasExceptionInfo */

/* Function Stack Size: 0x10 bytes */

bool PHPLCrashReport::hasExceptionInfo(ID param_1,SEL param_2)

{
  return (bool)(*(long *)(param_1 + 0x50) != 0);
}



/* Address: 0x100184960 | PHPLCrashReport::systemInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::systemInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100184968 | PHPLCrashReport::machineInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::machineInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100184970 | PHPLCrashReport::applicationInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::applicationInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100184978 | PHPLCrashReport::processInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::processInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100184980 | PHPLCrashReport::signalInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::signalInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100184988 | PHPLCrashReport::machExceptionInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::machExceptionInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100184990 | PHPLCrashReport::threads */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::threads(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100184998 | PHPLCrashReport::images */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::images(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x1001849a0 | PHPLCrashReport::exceptionInfo */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::exceptionInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x1001849a8 | PHPLCrashReport::uuidRef */

/* Function Stack Size: 0x10 bytes */

__CFUUID * PHPLCrashReport::uuidRef(ID param_1,SEL param_2)

{
  return *(__CFUUID **)(param_1 + 0x60);
}



/* Address: 0x1001849b0 | PHPLCrashReport::customData */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashReport::customData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



/* Address: 0x1001849b8 | PHPLCrashReport::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashReport::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100184a48 | PHPLCrashReport::decodeCrashData:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

Plcrash__CrashReport *
PHPLCrashReport::decodeCrashData_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  int *piVar1;
  ID IVar2;
  Plcrash__CrashReport *pPVar3;
  cfstringStruct *pcVar4;
  
  IVar2 = param_3;
  _objc_retainAutorelease();
  piVar1 = (int *)objc_stub::bytes(IVar2);
  IVar2 = objc_stub::length(param_3);
  if (IVar2 < 9) {
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar4 = &cf_Couldnotdecodetruncatedcrashlog;
  }
  else {
    if (*piVar1 == 0x72636c70 && *(int *)((long)piVar1 + 3) == 0x68736172) {
      if (*(char *)((long)piVar1 + 7) == '\x01') {
        IVar2 = objc_stub::length(param_3);
        pPVar3 = (Plcrash__CrashReport *)0x0;
        FUN_1001861cc(0,IVar2 - 8,piVar1 + 2);
        if (pPVar3 != (Plcrash__CrashReport *)0x0) {
          return pPVar3;
        }
        IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
        IVar2 = NSBundle::localizedStringForKey_value_table_
                          (IVar2,&cf_Couldnotdecodecrashreportwithsizeof_lubytes_,&cf___,0);
      }
      else {
        IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
        IVar2 = NSBundle::localizedStringForKey_value_table_
                          (IVar2,&cf_Couldnotdecodeunsupportedcrashreportversion__d,&cf___,0);
      }
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,IVar2);
      FUN_1001846f4(param_4,2,IVar2);
      return (Plcrash__CrashReport *)0x0;
    }
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar4 = &cf_Couldnotdecodeinvalidcrashlogheader;
  }
  IVar2 = NSBundle::localizedStringForKey_value_table_(IVar2,pcVar4,&cf___,0);
  FUN_1001846f4(param_4,2,IVar2);
  return (Plcrash__CrashReport *)0x0;
}



/* Address: 0x100184c5c | PHPLCrashReport::extractSystemInfo:processorInfo:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID PHPLCrashReport::extractSystemInfo_processorInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__SystemInfo *param_3,ID param_4,
             ID *param_5)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  ID IVar4;
  cfstringStruct *pcVar5;
  
  if (param_3 == (Plcrash__CrashReport__SystemInfo *)0x0) {
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_CrashreportismissingSystemInformationsection;
  }
  else {
    if (*(long *)(param_3 + 0x20) != 0) {
      if (*(long *)(param_3 + 0x38) == 0) {
        IVar2 = 0;
      }
      else {
        IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
      }
      if (*(long *)(param_3 + 0x30) == 0) {
        IVar3 = 0;
      }
      else {
        IVar3 = NSDate::dateWithTimeIntervalSince1970_
                          ((ID)&_OBJC_CLASS___NSDate,(double)*(long *)(param_3 + 0x30));
      }
      if ((param_4 == 0) &&
         (param_4 = synthesizeProcessorInfoFromArchitecture_error_
                              (param_1,*(int *)(param_3 + 0x28),param_5), param_4 == 0)) {
        return 0;
      }
      self = &objc::class_t::PHPLCrashReportSystemInfo;
      _objc_alloc();
      uVar1 = *(uint *)(param_3 + 0x1c);
      IVar4 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(param_3 + 0x20));
      IVar2 = objc_stub::
              initWithOperatingSystem_operatingSystemVersion_operatingSystemBuild_architecture_processorInfo_timestamp_
                        ((ID)self,(ulong)uVar1,IVar4,IVar2,(ulong)*(uint *)(param_3 + 0x28),param_4,
                         IVar3);
      return IVar2;
    }
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_CrashreportismissingSystemInformationOSversionfield;
  }
  IVar2 = NSBundle::localizedStringForKey_value_table_(IVar2,pcVar5,&cf___,0);
  FUN_1001846f4(param_5,2,IVar2);
  return 0;
}



/* Address: 0x100184e30 | PHPLCrashReport::extractProcessorInfo:error: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractProcessorInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Processor *param_3,ID *param_4)

{
  class_t *self;
  ID IVar1;
  
  if (param_3 == (Plcrash__CrashReport__Processor *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_Crashreportismissingprocessorinfosection,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  else {
    self = &objc::class_t::PHPLCrashReportProcessorInfo;
    _objc_alloc();
    IVar1 = objc_stub::initWithTypeEncoding_type_subtype_
                      ((ID)self,(ulong)(uint)param_3->field3_0x1c,
                       *(undefined8 *)((long)&param_3->field3_0x1c + 4),
                       *(undefined8 *)((long)&param_3->field4_0x24 + 4));
  }
  return IVar1;
}



/* Address: 0x100184ed8 | PHPLCrashReport::synthesizeProcessorInfoFromArchitecture:error: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

ID PHPLCrashReport::synthesizeProcessorInfoFromArchitecture_error_
             (ID param_1,SEL param_2,int param_3,ID *param_4)

{
  class_t *self;
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 < 6) {
    uVar2 = *(undefined8 *)(&DAT_100c30ab0 + (ulong)param_3 * 8);
    uVar3 = *(undefined8 *)(&DAT_100c30ae0 + (ulong)param_3 * 8);
    self = &objc::class_t::PHPLCrashReportProcessorInfo;
    _objc_alloc();
    IVar1 = objc_stub::initWithTypeEncoding_type_subtype_((ID)self,1,uVar2,uVar3);
  }
  else {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_Crashreporthasanunknownarchitecture,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x100184f9c | PHPLCrashReport::extractMachineInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractMachineInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__MachineInfo *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  
  if (param_3 == (Plcrash__CrashReport__MachineInfo *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_CrashreportismissingMachineInformationsection,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x18) == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    }
    if (*(Plcrash__CrashReport__Processor **)(param_3 + 0x20) ==
        (Plcrash__CrashReport__Processor *)0x0) {
      IVar2 = 0;
    }
    else {
      IVar2 = extractProcessorInfo_error_
                        (param_1,*(Plcrash__CrashReport__Processor **)(param_3 + 0x20),param_4);
      if (IVar2 == 0) {
        return 0;
      }
    }
    self = &objc::class_t::PHPLCrashReportMachineInfo;
    _objc_alloc();
    IVar1 = objc_stub::initWithModelName_processorInfo_processorCount_logicalProcessorCount_
                      ((ID)self,IVar1,IVar2,(ulong)*(uint *)(param_3 + 0x28),
                       (ulong)*(uint *)(param_3 + 0x2c));
  }
  return IVar1;
}



/* Address: 0x1001850b4 | PHPLCrashReport::extractApplicationInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractApplicationInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__ApplicationInfo *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  long lVar4;
  cfstringStruct *pcVar5;
  
  if (param_3 == (Plcrash__CrashReport__ApplicationInfo *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_CrashreportismissingApplicationInformationsection;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x18);
    if (lVar4 == 0) {
      IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      pcVar5 = &cf_CrashreportismissingApplicationInformationappidentifierfield;
    }
    else {
      if (*(long *)(param_3 + 0x20) != 0) {
        if (*(long *)(param_3 + 0x28) == 0) {
          IVar1 = 0;
        }
        else {
          IVar1 = NSString::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,*(long *)(param_3 + 0x28));
          lVar4 = *(long *)(param_3 + 0x18);
        }
        IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,lVar4);
        IVar3 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(param_3 + 0x20));
        self = &objc::class_t::PHPLCrashReportApplicationInfo;
        _objc_alloc();
        IVar1 = objc_stub::
                initWithApplicationIdentifier_applicationVersion_applicationMarketingVersion_
                          ((ID)self,IVar2,IVar3,IVar1);
        return IVar1;
      }
      IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      pcVar5 = &cf_CrashreportismissingApplicationInformationappversionfield;
    }
  }
  IVar1 = NSBundle::localizedStringForKey_value_table_(IVar1,pcVar5,&cf___,0);
  FUN_1001846f4(param_4,2,IVar1);
  return 0;
}



/* Address: 0x100185224 | PHPLCrashReport::extractProcessInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractProcessInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__ProcessInfo *param_3,ID *param_4)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  class_t *self;
  undefined8 uVar7;
  
  if (param_3 == (Plcrash__CrashReport__ProcessInfo *)0x0) {
    IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar3 = NSBundle::localizedStringForKey_value_table_
                      (IVar3,&cf_CrashreportismissingProcessInformationsection,&cf___,0);
    FUN_1001846f4(param_4,2,IVar3);
    IVar3 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x18) == 0) {
      IVar3 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    }
    if (*(long *)(param_3 + 0x28) == 0) {
      IVar4 = 0;
    }
    else {
      IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    }
    if (*(int *)(param_3 + 0x40) == 0) {
      IVar5 = 0;
    }
    else {
      uVar7 = NEON_ucvtf(*(undefined8 *)(param_3 + 0x48));
      IVar5 = NSDate::dateWithTimeIntervalSince1970_((ID)&_OBJC_CLASS___NSDate,uVar7);
    }
    if (*(long *)(param_3 + 0x30) == 0) {
      IVar6 = 0;
    }
    else {
      IVar6 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    }
    uVar1 = *(uint *)(param_3 + 0x20);
    uVar2 = *(uint *)(param_3 + 0x38);
    self = &objc::class_t::PHPLCrashReportProcessInfo;
    _objc_alloc();
    IVar3 = objc_stub::
            initWithProcessName_processID_processPath_processStartTime_parentProcessName_parentProcessID_native_
                      ((ID)self,IVar3,(ulong)uVar1,IVar4,IVar5,IVar6,(ulong)uVar2,
                       *(int *)(param_3 + 0x3c) != 0);
  }
  return IVar3;
}



/* Address: 0x1001853c0 | PHPLCrashReport::extractSymbolInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractSymbolInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Symbol *param_3,ID *param_4)

{
  ID IVar1;
  class_t *self;
  ProtobufCMessageDescriptor *pPVar2;
  
  if (param_3 == (Plcrash__CrashReport__Symbol *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_Crashreportismissingsymbolinformation,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  else {
    IVar1 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)((long)&param_3->field1_0x14 + 4))
    ;
    self = &objc::class_t::PHPLCrashReportSymbolInfo;
    _objc_alloc();
    if ((int)param_3->field4_0x28 == 0) {
      pPVar2 = (ProtobufCMessageDescriptor *)0x0;
    }
    else {
      pPVar2 = param_3[1].field0_0x0.field0_0x0;
    }
    IVar1 = objc_stub::initWithSymbolName_startAddress_endAddress_
                      ((ID)self,IVar1,*(undefined8 *)((long)&param_3->field2_0x1c + 4),pPVar2);
  }
  return IVar1;
}



/* Address: 0x1001854a0 | PHPLCrashReport::extractStackFrameInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractStackFrameInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Thread__StackFrame *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  Plcrash__CrashReport__Symbol *pPVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == (Plcrash__CrashReport__Thread__StackFrame *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_Crashreportismissingstackframeinformation,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  else {
    pPVar3 = *(Plcrash__CrashReport__Symbol **)((long)&param_3->field2_0x1c + 4);
    if (pPVar3 == (Plcrash__CrashReport__Symbol *)0x0) {
      IVar1 = 0;
    }
    else {
      IVar1 = extractSymbolInfo_error_(param_1,pPVar3,param_4);
      if (IVar1 == 0) {
        return 0;
      }
    }
    uVar4 = *(ulong *)((long)&param_3->field1_0x14 + 4);
    uVar5 = uVar4;
    if (*(ID *)(param_1 + 0x18) != 0) {
      IVar2 = objc_stub::processorInfo(*(ID *)(param_1 + 0x18));
      IVar2 = objc_stub::type(IVar2);
      if (IVar2 == 0x100000c) {
        IVar2 = objc_stub::processorInfo(*(ID *)(param_1 + 0x18));
        IVar2 = objc_stub::subtype(IVar2);
        uVar5 = uVar4 & 0xfffffffff;
        if (IVar2 != 2) {
          uVar5 = uVar4;
        }
      }
    }
    self = &objc::class_t::PHPLCrashReportStackFrameInfo;
    _objc_alloc();
    IVar1 = objc_stub::initWithInstructionPointer_symbolInfo_((ID)self,uVar5,IVar1);
  }
  return IVar1;
}



/* Address: 0x100185600 | PHPLCrashReport::extractThreadInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractThreadInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)((long)&param_3->field3_0x24 + 4) == 0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar1 = NSBundle::localizedStringForKey_value_table_
                      (IVar1,&cf_Crashreportismissingthreadstateinformation,&cf___,0);
    FUN_1001846f4(param_4,2,IVar1);
    IVar1 = 0;
  }
  else {
    IVar1 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray);
    if (*(long *)((long)&param_3->field3_0x24 + 4) != 0) {
      uVar9 = 0;
      do {
        lVar8 = *(long *)(*(long *)((long)&param_3->field4_0x2c + 4) + uVar9 * 8);
        IVar2 = NSMutableArray::arrayWithCapacity_
                          ((ID)&_OBJC_CLASS___NSMutableArray,*(undefined8 *)(lVar8 + 0x20));
        if (*(long *)(lVar8 + 0x20) != 0) {
          uVar6 = 0;
          do {
            IVar3 = extractStackFrameInfo_error_
                              (param_1,*(Plcrash__CrashReport__Thread__StackFrame **)
                                        (*(long *)(lVar8 + 0x28) + uVar6 * 8),param_4);
            if (IVar3 == 0) {
              return 0;
            }
            NSMutableArray::addObject_(IVar2,IVar3);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulong *)(lVar8 + 0x20));
        }
        IVar3 = NSMutableArray::arrayWithCapacity_
                          ((ID)&_OBJC_CLASS___NSMutableArray,*(undefined8 *)(lVar8 + 0x38));
        if (*(long *)(lVar8 + 0x38) != 0) {
          uVar6 = 0;
          do {
            lVar7 = *(long *)(*(long *)(lVar8 + 0x40) + uVar6 * 8);
            if (*(long *)(lVar7 + 0x18) == 0) {
              FUN_1001846f4(param_4,2,&cf_Missingregisternameinregistervalue);
              return 0;
            }
            pcVar4 = &objc::class_t::PHPLCrashReportRegisterInfo;
            _objc_alloc();
            IVar5 = NSString::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(lVar7 + 0x18));
            IVar5 = objc_stub::initWithRegisterName_registerValue_
                              ((ID)pcVar4,IVar5,*(undefined8 *)(lVar7 + 0x20));
            NSMutableArray::addObject_(IVar3,IVar5);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulong *)(lVar8 + 0x38));
        }
        pcVar4 = &objc::class_t::PHPLCrashReportThreadInfo;
        _objc_alloc();
        IVar2 = objc_stub::initWithThreadNumber_stackFrames_crashed_registers_
                          ((ID)pcVar4,(ulong)*(uint *)(lVar8 + 0x18),IVar2,
                           (ulong)(*(int *)(lVar8 + 0x30) != 0),IVar3);
        NSMutableArray::addObject_(IVar1,IVar2);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)((long)&param_3->field3_0x24 + 4));
    }
  }
  return IVar1;
}



/* Address: 0x1001858a4 | PHPLCrashReport::extractImageInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractImageInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport *param_3,ID *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  ID IVar5;
  ulong uVar6;
  ID IVar7;
  long lVar8;
  
  if (*(long *)((long)&param_3->field5_0x34 + 4) == 0) {
    IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar3 = NSBundle::localizedStringForKey_value_table_
                      (IVar3,&cf_Crashreportismissingbinaryimageinformation,&cf___,0);
    FUN_1001846f4(param_4,2,IVar3);
LAB_100185a80:
    IVar3 = 0;
  }
  else {
    IVar3 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray);
    if (*(long *)((long)&param_3->field5_0x34 + 4) != 0) {
      uVar6 = 0;
      IVar4 = IVar3;
      do {
        lVar8 = *(long *)(*(long *)((long)&param_3->field6_0x3c + 4) + uVar6 * 8);
        if (*(long *)(lVar8 + 0x28) == 0) {
          FUN_1001846f4(param_4,2,&cf_Missingimagenameinimagerecord);
          goto LAB_100185a80;
        }
        if (*(long *)(lVar8 + 0x38) == 0) {
          IVar7 = 0;
        }
        else {
          IVar4 = NSData::dataWithBytes_length_
                            ((ID)&_OBJC_CLASS___NSData,*(undefined8 *)(lVar8 + 0x40));
          IVar7 = IVar4;
        }
        if (*(long *)(lVar8 + 0x38) != 0 && IVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10018ff64(IVar4);
        }
        if (*(Plcrash__CrashReport__Processor **)(lVar8 + 0x48) ==
            (Plcrash__CrashReport__Processor *)0x0) {
          IVar4 = 0;
        }
        else {
          IVar4 = extractProcessorInfo_error_
                            (param_1,*(Plcrash__CrashReport__Processor **)(lVar8 + 0x48),param_4);
          if (IVar4 == 0) goto LAB_100185a80;
        }
        self = &objc::class_t::PHPLCrashReportBinaryImageInfo;
        _objc_alloc();
        uVar1 = *(undefined8 *)(lVar8 + 0x18);
        uVar2 = *(undefined8 *)(lVar8 + 0x20);
        IVar5 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(lVar8 + 0x28));
        IVar4 = objc_stub::initWithCodeType_baseAddress_size_name_uuid_
                          ((ID)self,IVar4,uVar1,uVar2,IVar5,IVar7);
        NSMutableArray::addObject_(IVar3,IVar4);
        IVar4 = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)((long)&param_3->field5_0x34 + 4));
    }
  }
  return IVar3;
}



/* Address: 0x100185abc | PHPLCrashReport::extractExceptionInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractExceptionInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Exception *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  class_t *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  
  if (param_3 == (Plcrash__CrashReport__Exception *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_CrashreportismissingExceptionInformationsection;
  }
  else if (*(long *)(param_3 + 0x18) == 0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_Crashreportismissingexceptionnamefield;
  }
  else {
    if (*(long *)(param_3 + 0x20) != 0) {
      IVar1 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
      IVar2 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(param_3 + 0x20));
      if (*(long *)(param_3 + 0x28) != 0) {
        self = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray);
        if (*(long *)(param_3 + 0x28) != 0) {
          uVar6 = 0;
          do {
            IVar3 = extractStackFrameInfo_error_
                              (param_1,*(Plcrash__CrashReport__Thread__StackFrame **)
                                        (*(long *)(param_3 + 0x30) + uVar6 * 8),param_4);
            if (IVar3 == 0) {
              return 0;
            }
            NSMutableArray::addObject_(self,IVar3);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulong *)(param_3 + 0x28));
        }
        if (self != 0) {
          pcVar4 = &objc::class_t::PHPLCrashReportExceptionInfo;
          _objc_alloc();
          IVar1 = objc_stub::initWithExceptionName_reason_stackFrames_((ID)pcVar4,IVar1,IVar2,self);
          return IVar1;
        }
      }
      pcVar4 = &objc::class_t::PHPLCrashReportExceptionInfo;
      _objc_alloc();
      IVar1 = objc_stub::initWithExceptionName_reason_((ID)pcVar4,IVar1,IVar2);
      return IVar1;
    }
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar5 = &cf_Crashreportismissingexceptionreasonfield;
  }
  IVar1 = NSBundle::localizedStringForKey_value_table_(IVar1,pcVar5,&cf___,0);
  FUN_1001846f4(param_4,2,IVar1);
  return 0;
}



/* Address: 0x100185cb8 | PHPLCrashReport::extractSignalInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractSignalInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Signal *param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  cfstringStruct *pcVar4;
  
  if (param_3 == (Plcrash__CrashReport__Signal *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar4 = &cf_CrashreportismissingSignalInformationsection;
  }
  else if (*(long *)(param_3 + 0x18) == 0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar4 = &cf_Crashreportismissingsignalnamefield;
  }
  else {
    if (*(long *)(param_3 + 0x20) != 0) {
      IVar1 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
      IVar2 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,*(undefined8 *)(param_3 + 0x20));
      if (*(long *)(param_3 + 0x38) == 0) {
        IVar3 = 0;
      }
      else {
        IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
      }
      self = &objc::class_t::PHPLCrashReportSignalInfo;
      _objc_alloc();
      IVar1 = objc_stub::initWithSignalName_code_address_crashInfoMessage_
                        ((ID)self,IVar1,IVar2,*(undefined8 *)(param_3 + 0x28),IVar3);
      return IVar1;
    }
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar4 = &cf_Crashreportismissingsignalcodefield;
  }
  IVar1 = NSBundle::localizedStringForKey_value_table_(IVar1,pcVar4,&cf___,0);
  FUN_1001846f4(param_4,2,IVar1);
  return 0;
}



/* Address: 0x100185e2c | PHPLCrashReport::extractMachExceptionInfo:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashReport::extractMachExceptionInfo_error_
             (ID param_1,SEL param_2,Plcrash__CrashReport__Signal__MachException *param_3,
             ID *param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  cfstringStruct *pcVar3;
  ulong uVar4;
  
  if (param_3 == (Plcrash__CrashReport__Signal__MachException *)0x0) {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar3 = &cf_CrashreportismissingMachExceptionInformationsection;
  }
  else {
    if (*(ulong *)((long)&param_3->field2_0x1c + 4) < 0x100) {
      IVar1 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray);
      if (*(long *)((long)&param_3->field2_0x1c + 4) != 0) {
        uVar4 = 0;
        do {
          IVar2 = NSNumber::numberWithUnsignedLongLong_
                            ((ID)&_OBJC_CLASS___NSNumber,
                             *(undefined8 *)(*(long *)((long)&param_3->field3_0x24 + 4) + uVar4 * 8)
                            );
          NSMutableArray::addObject_(IVar1,IVar2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)((long)&param_3->field2_0x1c + 4));
      }
      self = &objc::class_t::PHPLCrashReportMachExceptionInfo;
      _objc_alloc();
      IVar1 = objc_stub::initWithType_codes_
                        ((ID)self,*(undefined8 *)((long)&param_3->field1_0x14 + 4),IVar1);
      return IVar1;
    }
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pcVar3 = &cf_CrashreportincludestoomanyMachExceptioncodes;
  }
  IVar1 = NSBundle::localizedStringForKey_value_table_(IVar1,pcVar3,&cf___,0);
  FUN_1001846f4(param_4,2,IVar1);
  return 0;
}



/* Address: 0x100185f7c | FUN_100185f7c */

void FUN_100185f7c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebac18;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x100185f98 | FUN_100185f98 */

void FUN_100185f98(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebad08;
  param_1[3] = 0x300000000;
  param_1[2] = 0;
  param_1[5] = 6;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Address: 0x100185fb4 | FUN_100185fb4 */

void FUN_100185fb4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebad80;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x100185fd0 | FUN_100185fd0 */

void FUN_100185fd0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebadf8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return;
}



/* Address: 0x100185ff4 | FUN_100185ff4 */

void FUN_100185ff4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebae70;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x100186010 | FUN_100186010 */

void FUN_100186010(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebaee8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x10018602c | FUN_10018602c */

void FUN_10018602c(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = &DAT_100ebaf60;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100186050 | FUN_100186050 */

void FUN_100186050(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = &DAT_100ebafd8;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100186074 | FUN_100186074 */

void FUN_100186074(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebb050;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return;
}



/* Address: 0x100186098 | FUN_100186098 */

void FUN_100186098(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebb0c8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x1001860b4 | FUN_1001860b4 */

void FUN_1001860b4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebb140;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Address: 0x1001860d0 | FUN_1001860d0 */

void FUN_1001860d0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = &DAT_100ebb1b8;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1001860f4 | FUN_1001860f4 */

void FUN_1001860f4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebb230;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x100186110 | FUN_100186110 */

void FUN_100186110(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_100ebb2a8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x10018612c | FUN_10018612c */

void FUN_10018612c(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = &DAT_100ebb320;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


