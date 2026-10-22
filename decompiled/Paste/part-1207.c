/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfb85c | _dispatch_once */

void _dispatch_once(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_100ea8430)();
  return;
}



/* Address: 0x100bfb868 | _dispatch_once_f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_once_f(dispatch_once_t *predicate,void *context,dispatch_function_t function)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100ea8438)();
  return;
}



/* Address: 0x100bfb874 | _dispatch_queue_attr_make_with_qos_class */

void _dispatch_queue_attr_make_with_qos_class(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_attr_make_with_qos_class_100ea8440)();
  return;
}



/* Address: 0x100bfb880 | _dispatch_queue_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_queue_t _dispatch_queue_create(char *label,dispatch_queue_attr_t attr)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_create_100ea8448)();
  return (dispatch_queue_t)label;
}



/* Address: 0x100bfb88c | _dispatch_resume */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_resume(dispatch_object_t object)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_100ea8450)();
  return;
}



/* Address: 0x100bfb898 | _dispatch_semaphore_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_semaphore_t _dispatch_semaphore_create(long value)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_create_100ea8458)();
  return (dispatch_semaphore_t)value;
}



/* Address: 0x100bfb8a4 | _dispatch_semaphore_signal */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_signal(dispatch_semaphore_t dsema)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_100ea8460)();
  return (long)dsema;
}



/* Address: 0x100bfb8b0 | _dispatch_semaphore_wait */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_wait(dispatch_semaphore_t dsema,dispatch_time_t timeout)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_wait_100ea8468)();
  return (long)dsema;
}



/* Address: 0x100bfb8bc | _dispatch_sync */

void _dispatch_sync(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_sync_100ea8470)();
  return;
}



/* Address: 0x100bfb8c8 | _dispatch_time */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_time_t _dispatch_time(dispatch_time_t when,int64_t delta)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_time_100ea8478)();
  return when;
}



/* Address: 0x100bfb8d4 | _dladdr */

void _dladdr(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dladdr_100ea8480)();
  return;
}



/* Address: 0x100bfb8e0 | _dlopen */

void _dlopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlopen_100ea8488)();
  return;
}



/* Address: 0x100bfb8ec | _dlsym */

void _dlsym(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlsym_100ea8490)();
  return;
}



/* Address: 0x100bfb8f8 | _dup */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _dup(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dup_100ea8498)();
  return param_1;
}



/* Address: 0x100bfb904 | _dup2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _dup2(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dup2_100ea84a0)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfb910 | _errx */

void _errx(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__errx_100ea84a8)();
  return;
}



/* Address: 0x100bfb91c | _exception_raise */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_exception_raise(mach_port_t exception_port,mach_port_t thread,mach_port_t task,
                exception_type_t exception,exception_data_t code,mach_msg_type_number_t codeCnt)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_raise_100ea84b0)(exception_port,thread,task,exception,code,codeCnt);
  return exception_port;
}



/* Address: 0x100bfb928 | _exception_raise_state */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_exception_raise_state
          (mach_port_t exception_port,exception_type_t exception,exception_data_t code,
          mach_msg_type_number_t codeCnt,int *flavor,thread_state_t old_state,
          mach_msg_type_number_t old_stateCnt,thread_state_t new_state,
          mach_msg_type_number_t *new_stateCnt)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_raise_state_100ea84b8)
            (exception_port,exception,code,codeCnt,flavor,old_state,old_stateCnt);
  return exception_port;
}



/* Address: 0x100bfb934 | _exception_raise_state_identity */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_exception_raise_state_identity
          (mach_port_t exception_port,mach_port_t thread,mach_port_t task,exception_type_t exception
          ,exception_data_t code,mach_msg_type_number_t codeCnt,int *flavor,thread_state_t old_state
          ,mach_msg_type_number_t old_stateCnt,thread_state_t new_state,
          mach_msg_type_number_t *new_stateCnt)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_raise_state_identity_100ea84c0)
            (exception_port,thread,task,exception,code,codeCnt);
  return exception_port;
}



/* Address: 0x100bfb940 | _exit */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exit_100ea84c8)(param_1);
  return;
}



/* Address: 0x100bfb94c | _exp2 */

void _exp2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exp2_100ea84d0)();
  return;
}



/* Address: 0x100bfb958 | _fchmod */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fchmod(int param_1,mode_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fchmod_100ea84d8)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfb964 | _fclose */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfb96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fclose_100ea84e0)();
  return iVar1;
}



/* Address: 0x100bfb970 | _fcopyfile */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fcopyfile(int from_fd,int to_fd,copyfile_state_t param_3,copyfile_flags_t flags)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fcopyfile_100ea84e8)(from_fd,to_fd,param_3,flags);
  return from_fd;
}



/* Address: 0x100bfb97c | _fdopendir */

void _fdopendir(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fdopendir_100ea84f0)();
  return;
}



/* Address: 0x100bfb988 | _ferror */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ferror(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfb990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ferror_100ea84f8)();
  return iVar1;
}



/* Address: 0x100bfb994 | _fflush */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fflush(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfb99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fflush_100ea8500)();
  return iVar1;
}



/* Address: 0x100bfb9a0 | _fgetxattr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _fgetxattr(int fd,char *name,void *value,size_t size,u_int32_t position,int options)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)fd;
                    /* WARNING: Could not recover jumptable at 0x000100bfb9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fgetxattr_100ea8508)();
  return uVar1;
}



/* Address: 0x100bfb9ac | _fileno */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fileno(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfb9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fileno_100ea8510)();
  return iVar1;
}



/* Address: 0x100bfb9b8 | _flistxattr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _flistxattr(int fd,char *namebuff,size_t size,int options)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)fd;
                    /* WARNING: Could not recover jumptable at 0x000100bfb9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__flistxattr_100ea8518)();
  return uVar1;
}



/* Address: 0x100bfb9c4 | _flockfile */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _flockfile(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__flockfile_100ea8520)();
  return;
}



/* Address: 0x100bfb9d0 | _fopen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * _fopen(char *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fopen_100ea8528)();
  return (FILE *)param_1;
}



/* Address: 0x100bfb9dc | _fprintf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fprintf_100ea8530)();
  return iVar1;
}



/* Address: 0x100bfb9e8 | _fread */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fread_100ea8538)();
  return (size_t)param_1;
}



/* Address: 0x100bfb9f4 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_100ea8540)();
  return;
}



/* Address: 0x100bfba00 | _freeaddrinfo */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _freeaddrinfo(addrinfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__freeaddrinfo_100ea8548)();
  return;
}



/* Address: 0x100bfba0c | _freeifaddrs */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _freeifaddrs(ifaddrs *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__freeifaddrs_100ea8550)();
  return;
}



/* Address: 0x100bfba18 | _fremovexattr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fremovexattr(int fd,char *name,int options)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fremovexattr_100ea8558)(fd,name,options);
  return fd;
}



/* Address: 0x100bfba24 | _fseek */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfba2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fseek_100ea8560)(iVar1,param_2,param_3);
  return iVar1;
}



/* Address: 0x100bfba30 | _fseeko */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseeko(FILE *param_1,off_t param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fseeko_100ea8568)(iVar1,param_2,param_3);
  return iVar1;
}



/* Address: 0x100bfba3c | _fsetxattr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fsetxattr(int fd,char *name,void *value,size_t size,u_int32_t position,int options)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fsetxattr_100ea8570)();
  return fd;
}



/* Address: 0x100bfba48 | _fstat */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fstat(int param_1,stat *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fstat_100ea8578)();
  return param_1;
}



/* Address: 0x100bfba54 | _fstatat */

void _fstatat(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fstatat_100ea8580)();
  return;
}



/* Address: 0x100bfba60 | _fsync */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fsync(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fsync_100ea8588)();
  return param_1;
}



/* Address: 0x100bfba6c | _ftell */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _ftell(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ftell_100ea8590)();
  return (long)param_1;
}



/* Address: 0x100bfba78 | _ftello */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

off_t _ftello(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ftello_100ea8598)();
  return (off_t)param_1;
}



/* Address: 0x100bfba84 | _ftruncate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ftruncate(int param_1,off_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfba8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ftruncate_100ea85a0)();
  return param_1;
}



/* Address: 0x100bfba90 | _fts_close */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fts_close(FTS *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfba98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fts_close_100ea85a8)();
  return iVar1;
}



/* Address: 0x100bfba9c | _fts_open */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FTS * _fts_open(char **param_1,int param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fts_open_100ea85b0)(param_1,param_2);
  return (FTS *)param_1;
}



/* Address: 0x100bfbaa8 | _fts_read */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FTSENT * _fts_read(FTS *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fts_read_100ea85b8)();
  return (FTSENT *)param_1;
}



/* Address: 0x100bfbab4 | _funlockfile */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _funlockfile(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__funlockfile_100ea85c0)();
  return;
}



/* Address: 0x100bfbac0 | _funopen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * _funopen(void *param_1,int *param_2,int *param_3,fpos_t *param_4,int *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__funopen_100ea85c8)();
  return param_1;
}



/* Address: 0x100bfbacc | _futimens */

void _futimens(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__futimens_100ea85d0)();
  return;
}



/* Address: 0x100bfbad8 | _fwrite */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_100ea85d8)();
  return (size_t)param_1;
}



/* Address: 0x100bfbae4 | _gai_strerror */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _gai_strerror(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__gai_strerror_100ea85e0)();
  return pcVar1;
}



/* Address: 0x100bfbaf0 | _getaddrinfo */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getaddrinfo(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getaddrinfo_100ea85e8)();
  return iVar1;
}



/* Address: 0x100bfbafc | _getcwd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _getcwd(char *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getcwd_100ea85f0)();
  return param_1;
}



/* Address: 0x100bfbb08 | _getenv */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _getenv(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getenv_100ea85f8)();
  return param_1;
}



/* Address: 0x100bfbb14 | _getifaddrs */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getifaddrs(ifaddrs **param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfbb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getifaddrs_100ea8600)();
  return iVar1;
}



/* Address: 0x100bfbb20 | _getpeername */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getpeername(int param_1,sockaddr *param_2,socklen_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getpeername_100ea8608)();
  return param_1;
}



/* Address: 0x100bfbb2c | _getpid */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pid_t _getpid(void)

{
  pid_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getpid_100ea8610)();
  return in_w0;
}



/* Address: 0x100bfbb38 | _getppid */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pid_t _getppid(void)

{
  pid_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getppid_100ea8618)();
  return in_w0;
}



/* Address: 0x100bfbb44 | _getprogname */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _getprogname(void)

{
  char *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfbb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getprogname_100ea8620)();
  return in_x0;
}



/* Address: 0x100bfbb50 | _getpwuid_r */

void _getpwuid_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getpwuid_r_100ea8628)();
  return;
}


