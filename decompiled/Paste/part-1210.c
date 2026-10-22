/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfc15c | _pthread_get_stackaddr_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _pthread_get_stackaddr_np(pthread_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_get_stackaddr_np_100ea88c8)();
  return param_1;
}



/* Address: 0x100bfc168 | _pthread_get_stacksize_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _pthread_get_stacksize_np(pthread_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_get_stacksize_np_100ea88d0)();
  return (size_t)param_1;
}



/* Address: 0x100bfc174 | _pthread_getname_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_getname_np(pthread_t param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getname_np_100ea88d8)();
  return iVar1;
}



/* Address: 0x100bfc180 | _pthread_getschedparam */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_getschedparam(pthread_t param_1,int *param_2,sched_param *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getschedparam_100ea88e0)();
  return iVar1;
}



/* Address: 0x100bfc18c | _pthread_getspecific */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _pthread_getspecific(pthread_key_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getspecific_100ea88e8)();
  return (void *)param_1;
}



/* Address: 0x100bfc198 | _pthread_join */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_join_100ea88f0)();
  return iVar1;
}



/* Address: 0x100bfc1a4 | _pthread_key_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_key_create(pthread_key_t *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_key_create_100ea88f8)();
  return iVar1;
}



/* Address: 0x100bfc1b0 | _pthread_key_delete */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_key_delete(pthread_key_t param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_key_delete_100ea8900)();
  return iVar1;
}



/* Address: 0x100bfc1bc | _pthread_mach_thread_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _pthread_mach_thread_np(pthread_t param_1)

{
  mach_port_t mVar1;
  
  mVar1 = (mach_port_t)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mach_thread_np_100ea8908)();
  return mVar1;
}



/* Address: 0x100bfc1c8 | _pthread_main_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_main_np(void)

{
  int in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfc1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_main_np_100ea8910)();
  return in_w0;
}



/* Address: 0x100bfc1d4 | _pthread_mutex_destroy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_destroy(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_destroy_100ea8918)();
  return iVar1;
}



/* Address: 0x100bfc1e0 | _pthread_mutex_init */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_init_100ea8920)();
  return iVar1;
}



/* Address: 0x100bfc1ec | _pthread_mutex_lock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_100ea8928)();
  return iVar1;
}



/* Address: 0x100bfc1f8 | _pthread_mutex_unlock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_100ea8930)();
  return iVar1;
}



/* Address: 0x100bfc204 | _pthread_mutexattr_destroy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutexattr_destroy(pthread_mutexattr_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutexattr_destroy_100ea8938)();
  return iVar1;
}



/* Address: 0x100bfc210 | _pthread_mutexattr_init */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutexattr_init(pthread_mutexattr_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutexattr_init_100ea8940)();
  return iVar1;
}



/* Address: 0x100bfc21c | _pthread_rwlock_destroy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_rwlock_destroy(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_destroy_100ea8948)();
  return iVar1;
}



/* Address: 0x100bfc228 | _pthread_rwlock_init */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_rwlock_init(pthread_rwlock_t *param_1,pthread_rwlockattr_t *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_init_100ea8950)();
  return iVar1;
}



/* Address: 0x100bfc234 | _pthread_rwlock_rdlock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_rwlock_rdlock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_rdlock_100ea8958)();
  return iVar1;
}



/* Address: 0x100bfc240 | _pthread_rwlock_unlock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_rwlock_unlock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_unlock_100ea8960)();
  return iVar1;
}



/* Address: 0x100bfc24c | _pthread_rwlock_wrlock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_rwlock_wrlock(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_wrlock_100ea8968)();
  return iVar1;
}



/* Address: 0x100bfc258 | _pthread_self */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t _pthread_self(void)

{
  pthread_t in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfc260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_self_100ea8970)();
  return in_x0;
}



/* Address: 0x100bfc264 | _pthread_setname_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setname_np(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setname_np_100ea8978)();
  return iVar1;
}



/* Address: 0x100bfc270 | _pthread_setspecific */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setspecific(pthread_key_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setspecific_100ea8980)();
  return iVar1;
}



/* Address: 0x100bfc27c | _pthread_testcancel */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _pthread_testcancel(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_testcancel_100ea8988)();
  return;
}



/* Address: 0x100bfc288 | _pthread_yield_np */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _pthread_yield_np(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_yield_np_100ea8990)();
  return;
}



/* Address: 0x100bfc294 | _pwrite */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _pwrite(int param_1,void *param_2,size_t param_3,off_t param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pwrite_100ea8998)();
  return uVar1;
}



/* Address: 0x100bfc2a0 | _qos_class_main */

void _qos_class_main(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__qos_class_main_100ea89a0)();
  return;
}



/* Address: 0x100bfc2ac | _qsort */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__qsort_100ea89a8)();
  return;
}



/* Address: 0x100bfc2b8 | _raise */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _raise(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__raise_100ea89b0)();
  return param_1;
}



/* Address: 0x100bfc2c4 | _read */

void _read(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__read_100ea89b8)();
  return;
}



/* Address: 0x100bfc2d0 | _readdir */

void _readdir(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__readdir_100ea89c0)();
  return;
}



/* Address: 0x100bfc2dc | _readlink */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _readlink(char *param_1,char *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__readlink_100ea89c8)();
  return (ssize_t)param_1;
}



/* Address: 0x100bfc2e8 | _realloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _realloc(void *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__realloc_100ea89d0)();
  return param_1;
}



/* Address: 0x100bfc2f4 | _recvmsg */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _recvmsg(int param_1,msghdr *param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__recvmsg_100ea89d8)(uVar1,param_2,param_3);
  return uVar1;
}



/* Address: 0x100bfc300 | _remove */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _remove(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__remove_100ea89e0)();
  return iVar1;
}



/* Address: 0x100bfc30c | _rename */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rename_100ea89e8)();
  return iVar1;
}



/* Address: 0x100bfc318 | _renameatx_np */

void _renameatx_np(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__renameatx_np_100ea89f0)();
  return;
}



/* Address: 0x100bfc324 | _renamex_np */

void _renamex_np(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__renamex_np_100ea89f8)();
  return;
}



/* Address: 0x100bfc330 | _rewind */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _rewind(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rewind_100ea8a00)();
  return;
}



/* Address: 0x100bfc33c | _sec_identity_create */

void _sec_identity_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_identity_create_100eaa520)();
  return;
}



/* Address: 0x100bfc348 | _sec_protocol_metadata_get_negotiated_protocol */

void _sec_protocol_metadata_get_negotiated_protocol(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_protocol_metadata_get_negotiated_protocol_100eaa528)();
  return;
}



/* Address: 0x100bfc354 | _sec_protocol_options_set_local_identity */

void _sec_protocol_options_set_local_identity(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_protocol_options_set_local_identity_100eaa530)();
  return;
}



/* Address: 0x100bfc360 | _sec_protocol_options_set_tls_server_name */

void _sec_protocol_options_set_tls_server_name(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_protocol_options_set_tls_server_name_100eaa538)();
  return;
}



/* Address: 0x100bfc36c | _sec_protocol_options_set_verify_block */

void _sec_protocol_options_set_verify_block(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_protocol_options_set_verify_block_100eaa540)();
  return;
}



/* Address: 0x100bfc378 | _sec_trust_copy_ref */

void _sec_trust_copy_ref(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sec_trust_copy_ref_100eaa548)();
  return;
}



/* Address: 0x100bfc384 | _sendfile */

void _sendfile(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sendfile_100ea8a08)();
  return;
}



/* Address: 0x100bfc390 | _sendmsg */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _sendmsg(int param_1,msghdr *param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sendmsg_100ea8a10)(uVar1,param_2,param_3);
  return uVar1;
}



/* Address: 0x100bfc39c | _setenv */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setenv(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setenv_100ea8a18)(iVar1,param_2,param_3);
  return iVar1;
}



/* Address: 0x100bfc3a8 | _setsockopt */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setsockopt(int param_1,int param_2,int param_3,void *param_4,socklen_t param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setsockopt_100ea8a20)(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}



/* Address: 0x100bfc3b4 | _setvbuf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setvbuf(FILE *param_1,char *param_2,int param_3,size_t param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setvbuf_100ea8a28)(iVar1,param_2,param_3);
  return iVar1;
}



/* Address: 0x100bfc3c0 | _shutdown */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _shutdown(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__shutdown_100ea8a30)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfc3cc | _sigaction */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sigaction(int param_1,sigaction *param_2,sigaction *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sigaction_100ea8a38)();
  return param_1;
}



/* Address: 0x100bfc3d8 | _sigaltstack */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sigaltstack(stack_t *param_1,stack_t *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sigaltstack_100ea8a40)();
  return iVar1;
}



/* Address: 0x100bfc3e4 | _signal */

void _signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__signal_100ea8a48)();
  return;
}



/* Address: 0x100bfc3f0 | _sleep */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint _sleep(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sleep_100ea8a50)();
  return param_1;
}



/* Address: 0x100bfc3fc | _snprintf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__snprintf_100ea8a58)();
  return iVar1;
}



/* Address: 0x100bfc408 | _socket */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _socket(int param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__socket_100ea8a60)(param_1,param_2,param_3);
  return param_1;
}



/* Address: 0x100bfc414 | _socketpair */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _socketpair(int param_1,int param_2,int param_3,int *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__socketpair_100ea8a68)(param_1,param_2,param_3);
  return param_1;
}



/* Address: 0x100bfc420 | _sscanf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sscanf_100ea8a70)();
  return iVar1;
}



/* Address: 0x100bfc42c | _stat */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stat_100ea8a78)();
  return iVar1;
}



/* Address: 0x100bfc438 | _strchr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strchr(char *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strchr_100ea8a80)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfc444 | _strcmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_100ea8a88)();
  return iVar1;
}



/* Address: 0x100bfc450 | _strdup */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strdup(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strdup_100ea8a90)();
  return param_1;
}


