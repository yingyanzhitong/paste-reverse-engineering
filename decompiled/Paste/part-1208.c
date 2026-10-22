/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfbb5c | _getsectiondata */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint8_t * _getsectiondata(mach_header_64 *mhp,char *segname,char *sectname,ulong *size)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getsectiondata_100ea8630)();
  return (uint8_t *)mhp;
}



/* Address: 0x100bfbb68 | _getsockname */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getsockname(int param_1,sockaddr *param_2,socklen_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getsockname_100ea8638)();
  return param_1;
}



/* Address: 0x100bfbb74 | _getsockopt */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getsockopt(int param_1,int param_2,int param_3,void *param_4,socklen_t *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getsockopt_100ea8640)(param_1,param_2,param_3);
  return param_1;
}



/* Address: 0x100bfbb80 | _gettimeofday */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _gettimeofday(timeval *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__gettimeofday_100ea8648)();
  return iVar1;
}



/* Address: 0x100bfbb8c | _getuid */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uid_t _getuid(void)

{
  uid_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getuid_100ea8650)();
  return in_w0;
}



/* Address: 0x100bfbb98 | _gmtime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * _gmtime(time_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__gmtime_100ea8658)();
  return (tm *)param_1;
}



/* Address: 0x100bfbba4 | _gmtime_r */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * _gmtime_r(time_t *param_1,tm *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__gmtime_r_100ea8660)();
  return (tm *)param_1;
}



/* Address: 0x100bfbbb0 | _host_get_clock_service */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _host_get_clock_service(host_t host,clock_id_t clock_id,clock_serv_t *clock_serv)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__host_get_clock_service_100ea8668)(host,clock_id);
  return host;
}



/* Address: 0x100bfbbbc | _host_page_size */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _host_page_size(host_t param_1,vm_size_t *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__host_page_size_100ea8670)();
  return param_1;
}



/* Address: 0x100bfbbc8 | _host_statistics */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_host_statistics(host_t host_priv,host_flavor_t flavor,host_info_t host_info_out,
                mach_msg_type_number_t *host_info_outCnt)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__host_statistics_100ea8678)(host_priv,flavor);
  return host_priv;
}



/* Address: 0x100bfbbd4 | _hypot */

void _hypot(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__hypot_100ea8680)();
  return;
}



/* Address: 0x100bfbbe0 | _if_nametoindex */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint _if_nametoindex(char *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__if_nametoindex_100ea8688)();
  return uVar1;
}



/* Address: 0x100bfbbec | _imp_implementationWithBlock */

void _imp_implementationWithBlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__imp_implementationWithBlock_100ea80d0)();
  return;
}



/* Address: 0x100bfbbf8 | _inet_ntop */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _inet_ntop(int param_1,void *param_2,char *param_3,socklen_t param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inet_ntop_100ea8690)();
  return pcVar1;
}



/* Address: 0x100bfbc04 | _inet_pton */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _inet_pton(int param_1,char *param_2,void *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inet_pton_100ea8698)();
  return param_1;
}



/* Address: 0x100bfbc10 | _kevent */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _kevent(int kq,kevent *changelist,int nchanges,kevent *eventlist,int nevents,timespec *timeout)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__kevent_100ea86a0)(kq,changelist,nchanges,eventlist,nevents);
  return kq;
}



/* Address: 0x100bfbc1c | _kqueue */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _kqueue(void)

{
  int in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__kqueue_100ea86a8)();
  return in_w0;
}



/* Address: 0x100bfbc28 | _lchmod */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _lchmod(char *param_1,mode_t param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__lchmod_100ea86b0)(iVar1,param_2);
  return iVar1;
}



/* Address: 0x100bfbc34 | _link */

void _link(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__link_100ea86b8)();
  return;
}



/* Address: 0x100bfbc40 | _listen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _listen(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__listen_100ea86c0)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfbc4c | _localtime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * _localtime(time_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__localtime_100ea86c8)();
  return (tm *)param_1;
}



/* Address: 0x100bfbc58 | _log */

void _log(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log_100ea86d0)();
  return;
}



/* Address: 0x100bfbc64 | _log2 */

void _log2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log2_100ea86d8)();
  return;
}



/* Address: 0x100bfbc70 | _lseek */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

off_t _lseek(int param_1,off_t param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__lseek_100ea86e0)(uVar1,param_2,param_3);
  return uVar1;
}



/* Address: 0x100bfbc7c | _lstat */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _lstat(char *param_1,stat *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__lstat_100ea86e8)();
  return iVar1;
}



/* Address: 0x100bfbc88 | _lutimes */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _lutimes(char *param_1,timeval *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__lutimes_100ea86f0)();
  return iVar1;
}



/* Address: 0x100bfbc94 | _mach_error_string */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _mach_error_string(mach_error_t error_value)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulong)(uint)error_value;
                    /* WARNING: Could not recover jumptable at 0x000100bfbc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_error_string_100ea86f8)();
  return pcVar1;
}



/* Address: 0x100bfbca0 | _mach_host_self */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _mach_host_self(void)

{
  mach_port_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_host_self_100ea8700)();
  return in_w0;
}



/* Address: 0x100bfbcac | _mach_make_memory_entry_64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_make_memory_entry_64
          (vm_map_t target_task,memory_object_size_t *size,memory_object_offset_t offset,
          vm_prot_t permission,mach_port_t *object_handle,mem_entry_name_port_t parent_entry)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_make_memory_entry_64_100ea8708)();
  return target_task;
}



/* Address: 0x100bfbcb8 | _mach_msg */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_msg_return_t
_mach_msg(mach_msg_header_t *msg,mach_msg_option_t option,mach_msg_size_t send_size,
         mach_msg_size_t rcv_size,mach_port_name_t rcv_name,mach_msg_timeout_t timeout,
         mach_port_name_t notify)

{
  mach_msg_return_t mVar1;
  
  mVar1 = (mach_msg_return_t)msg;
                    /* WARNING: Could not recover jumptable at 0x000100bfbcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_msg_100ea8710)(mVar1,option,send_size,rcv_size,rcv_name,timeout,notify);
  return mVar1;
}



/* Address: 0x100bfbcc4 | _mach_port_allocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_allocate(ipc_space_t task,mach_port_right_t right,mach_port_name_t *name)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_allocate_100ea8718)(task,right);
  return task;
}



/* Address: 0x100bfbcd0 | _mach_port_deallocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_deallocate(ipc_space_t task,mach_port_name_t name)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_deallocate_100ea8720)(task,name);
  return task;
}



/* Address: 0x100bfbcdc | _mach_port_destruct */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_destruct(ipc_space_t task,mach_port_name_t name,mach_port_delta_t srdelta,
                   mach_port_context_t guard)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_destruct_100ea8728)(task,name,srdelta);
  return task;
}



/* Address: 0x100bfbce8 | _mach_port_extract_right */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_extract_right
          (ipc_space_t task,mach_port_name_t name,mach_msg_type_name_t msgt_name,mach_port_t *poly,
          mach_msg_type_name_t *polyPoly)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_extract_right_100ea8730)(task,name,msgt_name);
  return task;
}



/* Address: 0x100bfbcf4 | _mach_port_get_attributes */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_get_attributes
          (ipc_space_t task,mach_port_name_t name,mach_port_flavor_t flavor,
          mach_port_info_t port_info_out,mach_msg_type_number_t *port_info_outCnt)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_get_attributes_100ea8738)(task,name,flavor);
  return task;
}



/* Address: 0x100bfbd00 | _mach_port_guard */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_guard(ipc_space_t task,mach_port_name_t name,mach_port_context_t guard,boolean_t strict)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_guard_100ea8740)(task,name,guard,strict);
  return task;
}



/* Address: 0x100bfbd0c | _mach_port_insert_right */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_insert_right
          (ipc_space_t task,mach_port_name_t name,mach_port_t poly,mach_msg_type_name_t polyPoly)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_insert_right_100ea8748)(task,name,poly,polyPoly);
  return task;
}



/* Address: 0x100bfbd18 | _mach_port_mod_refs */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_mod_refs(ipc_space_t task,mach_port_name_t name,mach_port_right_t right,
                   mach_port_delta_t delta)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_mod_refs_100ea8750)(task,name,right,delta);
  return task;
}



/* Address: 0x100bfbd24 | _mach_port_move_member */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_move_member(ipc_space_t task,mach_port_name_t member,mach_port_name_t after)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_move_member_100ea8758)(task,member,after);
  return task;
}



/* Address: 0x100bfbd30 | _mach_port_request_notification */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_request_notification
          (ipc_space_t task,mach_port_name_t name,mach_msg_id_t msgid,mach_port_mscount_t sync,
          mach_port_t notify,mach_msg_type_name_t notifyPoly,mach_port_t *previous)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_request_notification_100ea8760)(task,name,msgid,sync,notify,notifyPoly);
  return task;
}



/* Address: 0x100bfbd3c | _mach_port_set_mscount */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_set_mscount(ipc_space_t task,mach_port_name_t name,mach_port_mscount_t mscount)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_set_mscount_100ea8768)(task,name,mscount);
  return task;
}



/* Address: 0x100bfbd48 | _mach_port_unguard */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_unguard(ipc_space_t task,mach_port_name_t name,mach_port_context_t guard)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_port_unguard_100ea8770)(task,name);
  return task;
}



/* Address: 0x100bfbd54 | _mach_thread_self */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _mach_thread_self(void)

{
  mach_port_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_thread_self_100ea8780)();
  return in_w0;
}



/* Address: 0x100bfbd60 | _mach_vm_allocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_vm_allocate(vm_map_t target,mach_vm_address_t *address,mach_vm_size_t size,int flags)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_vm_allocate_100ea8788)();
  return target;
}



/* Address: 0x100bfbd6c | _mach_vm_deallocate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_vm_deallocate(vm_map_t target,mach_vm_address_t address,mach_vm_size_t size)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_vm_deallocate_100ea8790)();
  return target;
}



/* Address: 0x100bfbd78 | _mach_vm_map */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_vm_map(vm_map_t target_task,mach_vm_address_t *address,mach_vm_size_t size,
            mach_vm_offset_t mask,int flags,mem_entry_name_port_t object,
            memory_object_offset_t offset,boolean_t copy,vm_prot_t cur_protection,
            vm_prot_t max_protection,vm_inherit_t inheritance)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_vm_map_100ea8798)();
  return target_task;
}



/* Address: 0x100bfbd84 | _mach_vm_read_overwrite */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_vm_read_overwrite
          (vm_map_t target_task,mach_vm_address_t address,mach_vm_size_t size,mach_vm_address_t data
          ,mach_vm_size_t *outsize)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_vm_read_overwrite_100ea87a0)();
  return target_task;
}



/* Address: 0x100bfbd90 | _malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_100ea87a8)();
  return (void *)param_1;
}



/* Address: 0x100bfbd9c | _malloc_size */

void _malloc_size(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_size_100ea87b0)();
  return;
}



/* Address: 0x100bfbda8 | _memcmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcmp_100ea87b8)();
  return iVar1;
}



/* Address: 0x100bfbdb4 | _memcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_100ea87c0)();
  return param_1;
}



/* Address: 0x100bfbdc0 | _memmove */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memmove(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_100ea87c8)();
  return param_1;
}



/* Address: 0x100bfbdcc | _memset */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memset(void *param_1,int param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memset_100ea87d0)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfbdd8 | _method_copyArgumentType */

void _method_copyArgumentType(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_copyArgumentType_100ea80d8)();
  return;
}



/* Address: 0x100bfbde4 | _method_copyReturnType */

void _method_copyReturnType(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_copyReturnType_100ea80e0)();
  return;
}



/* Address: 0x100bfbdf0 | _method_exchangeImplementations */

void _method_exchangeImplementations(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_100ea80e8)();
  return;
}



/* Address: 0x100bfbdfc | _method_getImplementation */

void _method_getImplementation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_getImplementation_100ea80f0)();
  return;
}



/* Address: 0x100bfbe08 | _method_getNumberOfArguments */

void _method_getNumberOfArguments(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_getNumberOfArguments_100ea80f8)();
  return;
}



/* Address: 0x100bfbe14 | _method_getTypeEncoding */

void _method_getTypeEncoding(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbe1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_getTypeEncoding_100ea8100)();
  return;
}



/* Address: 0x100bfbe20 | _mkdir */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _mkdir(char *param_1,mode_t param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mkdir_100ea87d8)(iVar1,param_2);
  return iVar1;
}



/* Address: 0x100bfbe2c | _mkpath_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _mkpath_np(char *path,mode_t omode)

{
  int iVar1;
  
  iVar1 = (int)path;
                    /* WARNING: Could not recover jumptable at 0x000100bfbe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mkpath_np_100ea87e0)(iVar1,omode);
  return iVar1;
}



/* Address: 0x100bfbe38 | _mkstemp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _mkstemp(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mkstemp_100ea87e8)();
  return iVar1;
}



/* Address: 0x100bfbe44 | _mprotect */

void _mprotect(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mprotect_100ea87f0)();
  return;
}



/* Address: 0x100bfbe50 | _objc_alloc */

void _objc_alloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_100ea8108)();
  return;
}


