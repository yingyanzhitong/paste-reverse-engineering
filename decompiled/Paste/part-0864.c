/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10095ef78 | FUN_10095ef78 */

int FUN_10095ef78(int param_1,off_t param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _ftruncate(param_1,param_2);
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001b;
    puVar4[1] = 0x8000000100db58d0;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f038);
  (*pcVar1)();
}



/* Address: 0x10095f038 | FUN_10095f038 */

off_t FUN_10095f038(int param_1,off_t param_2,int param_3)

{
  code *pcVar1;
  __int32 _Var2;
  off_t oVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    oVar3 = _lseek(param_1,param_2,param_3);
    if (oVar3 != -1) {
      return oVar3;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000020;
    puVar4[1] = 0x8000000100daf9b0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f100);
  (*pcVar1)();
}



/* Address: 0x10095f100 | FUN_10095f100 */

void FUN_10095f100(char *param_1,void *param_2,stat *param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _lstat(CVar4.unknown + 0x20,param_3);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000018;
    puVar5[1] = 0x8000000100db58b0;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f1e0);
  (*pcVar1)();
}



/* Address: 0x10095f1e0 | FUN_10095f1e0 */

void FUN_10095f1e0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  ContiguousArray<__int8> CVar5;
  undefined4 extraout_var;
  String SVar7;
  String SVar8;
  undefined8 *puVar6;
  
  do {
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    CVar4 = Swift::String::get_utf8CString(SVar7);
    SVar8.bridgeObject = param_2;
    SVar8.str = param_1;
    CVar5 = Swift::String::get_utf8CString(SVar8);
    iVar2 = _symlink(CVar4.unknown + 0x20,CVar5.unknown + 0x20);
    _swift_release(CVar4.unknown);
    _swift_release(CVar5.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar6 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar6,0,0);
    *puVar6 = 0xd00000000000001e;
    puVar6[1] = 0x8000000100db5890;
    *(__int32 *)(puVar6 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f2e4);
  (*pcVar1)();
}



/* Address: 0x10095f2e4 | FUN_10095f2e4 */

ssize_t FUN_10095f2e4(char *param_1,void *param_2,char *param_3,size_t param_4)

{
  code *pcVar1;
  __int32 _Var2;
  ContiguousArray<__int8> CVar3;
  ssize_t sVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar3 = Swift::String::get_utf8CString(SVar6);
    sVar4 = _readlink(CVar3.unknown + 0x20,param_3,param_4);
    _swift_release(CVar3.unknown);
    if (sVar4 != -1) {
      return sVar4;
    }
    _Var2 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000027;
    puVar5[1] = 0x8000000100db5860;
    *(__int32 *)(puVar5 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f3d0);
  (*pcVar1)();
}



/* Address: 0x10095f3d0 | FUN_10095f3d0 */

void FUN_10095f3d0(char *param_1,void *param_2,mode_t param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _mkdir(CVar4.unknown + 0x20,param_3);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000015;
    puVar5[1] = 0x8000000100db5840;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f4b0);
  (*pcVar1)();
}



/* Address: 0x10095f4b0 | FUN_10095f4b0 */

void FUN_10095f4b0(char *param_1,void *param_2,mode_t param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _mkpath_np(CVar4.unknown + 0x20,param_3);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000019;
    puVar5[1] = 0x8000000100db5820;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f590);
  (*pcVar1)();
}



/* Address: 0x10095f590 | FUN_10095f590 */

undefined * FUN_10095f590(char *param_1,void *param_2)

{
  code *pcVar1;
  __int32 _Var2;
  ContiguousArray<__int8> CVar3;
  undefined *puVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar3 = Swift::String::get_utf8CString(SVar6);
    puVar4 = CVar3.unknown + 0x20;
    _opendir();
    _swift_release(CVar3.unknown);
    if (puVar4 != (undefined *)0x0) {
      return puVar4;
    }
    _Var2 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000012;
    puVar5[1] = 0x8000000100db5800;
    *(__int32 *)(puVar5 + 2) = _Var2;
    _swift_willThrow();
    return (undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f660);
  (*pcVar1)();
}



/* Address: 0x10095f660 | FUN_10095f660 */

void FUN_10095f660(Darwin *param_1)

{
  code *pcVar1;
  __int32 _Var2;
  Darwin *pDVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    Darwin::set_errno(param_1,0);
    pDVar3 = param_1;
    _readdir();
    if (pDVar3 != (Darwin *)0x0) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f718);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0x2872696464616572;
    puVar4[1] = 0xed0000293a726964;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095f718 | FUN_10095f718 */

void FUN_10095f718(int param_1)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = param_1;
    _closedir();
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if (_Var3 != 0x23) {
    if ((_Var3 == 9) || (_Var3 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f7c8);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0x72696465736f6c63;
    puVar4[1] = 0xee00293a72696428;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095f7c8 | FUN_10095f7c8 */

void FUN_10095f7c8(char *param_1,void *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  ContiguousArray<__int8> CVar5;
  undefined4 extraout_var;
  String SVar7;
  String SVar8;
  undefined8 *puVar6;
  
  do {
    SVar7.bridgeObject = param_2;
    SVar7.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar7);
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    CVar5 = Swift::String::get_utf8CString(SVar8);
    iVar2 = _rename(CVar4.unknown + 0x20,CVar5.unknown + 0x20);
    _swift_release(CVar4.unknown);
    _swift_release(CVar5.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar6 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if (_Var3 != 0x23) {
    if ((_Var3 == 9) || (_Var3 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f8d4);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar6,0,0);
    *puVar6 = 0xd000000000000019;
    puVar6[1] = 0x8000000100db57e0;
    *(__int32 *)(puVar6 + 2) = _Var3;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095f8d4 | FUN_10095f8d4 */

void FUN_10095f8d4(char *param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _remove(CVar4.unknown + 0x20);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if (_Var3 != 0x23) {
    if ((_Var3 == 9) || (_Var3 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095f9ac);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000011;
    puVar5[1] = 0x8000000100db57c0;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095f9ac | FUN_10095f9ac */

undefined1  [16] FUN_10095f9ac(void)

{
  return ZEXT816(0x100f1bba8);
}



/* Address: 0x10095f9bc | FUN_10095f9bc */

undefined1  [16] FUN_10095f9bc(void)

{
  return ZEXT816(0x100f1bbc8);
}



/* Address: 0x10095f9cc | FUN_10095f9cc */

undefined1  [16] FUN_10095f9cc(void)

{
  return ZEXT816(0x100f1bbe8);
}



/* Address: 0x10095f9dc | FUN_10095f9dc */

undefined1  [16] FUN_10095f9dc(void)

{
  return ZEXT816(0x100f1bc08);
}



/* Address: 0x10095f9ec | thunk_FUN_10095c848 */

void thunk_FUN_10095c848(int param_1)

{
  code *pcVar1;
  
  if ((param_1 != 9) && (param_1 != 0xe)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c860);
  (*pcVar1)();
}



/* Address: 0x10095f9f0 | thunk_FUN_100669c28 */

bool thunk_FUN_100669c28(int param_1)

{
  return param_1 == 0xe || param_1 == 9;
}



/* Address: 0x10095f9f4 | FUN_10095f9f4 */

long * FUN_10095f9f4(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  _swift_allocObject();
  FUN_10096027c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  pcVar1 = _swift_release;
  FUN_10095ff20();
  unaff_x20[2] = (long)pcVar1;
  return unaff_x20;
}



/* Address: 0x10095fa48 | thunk_FUN_100960070 */

void thunk_FUN_100960070(void)

{
  FUN_100960070();
  return;
}



/* Address: 0x10095fa4c | FUN_10095fa4c */

void FUN_10095fa4c(undefined8 param_1)

{
  thunk_FUN_1009600d4();
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x10095fa70 | FUN_10095fa70 */

bool FUN_10095fa70(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  pthread_t p_Var5;
  pthread_t p_Var6;
  long unaff_x20;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fadc);
    (*pcVar1)();
  }
  p_Var6 = *(pthread_t *)(lVar7 + 0x10);
  if (p_Var6 == (pthread_t)0x0) {
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
    bVar2 = false;
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fae4);
      (*pcVar1)();
    }
  }
  else {
    p_Var5 = _pthread_self();
    iVar3 = _pthread_equal(p_Var6,p_Var5);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fae0);
      (*pcVar1)();
    }
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}



/* Address: 0x10095fae4 | FUN_10095fae4 */

void FUN_10095fae4(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar5;
  pthread_t p_Var6;
  long unaff_x20;
  long lVar7;
  ulong uVar4;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fb64);
    (*pcVar1)();
  }
  p_Var6 = *(pthread_t *)(lVar7 + 0x10);
  if (p_Var6 == (pthread_t)0x0) {
    FUN_10090de54();
    puVar5 = &DAT_100f1be58;
    _swift_allocError(&DAT_100f1be58,uVar4,0,0);
    _swift_willThrow();
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fbac);
      (*pcVar1)();
    }
    _swift_unexpectedError(puVar5,"NIOPosix/Thread.swift",0x15,1,0x81);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fbcc);
    (*pcVar1)();
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fb68);
    (*pcVar1)();
  }
  _pthread_join(p_Var6,(void **)0x0);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar3 == 0) {
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fb70);
      (*pcVar1)();
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fb74);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fb6c);
  (*pcVar1)();
}



/* Address: 0x10095fbcc | FUN_10095fbcc */

void FUN_10095fbcc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10095fbf0 | FUN_10095fbf0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010095fc28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10095fbf0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  _ArrayBuffer<undefined> _Var3;
  void *pvVar4;
  long unaff_x20;
  UnsafeBufferPointer<__int8> UVar5;
  char *pcVar6;
  pthread_t p_Var7;
  long lVar8;
  undefined1 auVar9 [16];
  String SVar10;
  tuple2_conflict1 tVar11;
  
  lVar8 = *(long *)(unaff_x20 + 0x20);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fcd8);
    (*pcVar1)();
  }
  p_Var7 = *(pthread_t *)(lVar8 + 0x10);
  if (p_Var7 == (pthread_t)0x0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fce0);
      (*pcVar1)();
    }
    pcVar6 = (char *)0x0;
    pvVar4 = (void *)0x0;
  }
  else {
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0x40;
    UVar5.unknown = _Var3.unknown + 0x20;
    *(undefined8 *)(_Var3.unknown + 0x28) = 0;
    *(undefined8 *)UVar5.unknown = 0;
    *(undefined8 *)(_Var3.unknown + 0x38) = 0;
    *(undefined8 *)(_Var3.unknown + 0x30) = 0;
    *(undefined8 *)(_Var3.unknown + 0x48) = 0;
    *(undefined8 *)(_Var3.unknown + 0x40) = 0;
    *(undefined8 *)(_Var3.unknown + 0x58) = 0;
    *(undefined8 *)(_Var3.unknown + 0x50) = 0;
    pvVar4 = (void *)0x40;
    iVar2 = _pthread_getname_np(p_Var7,UVar5.unknown,0x40);
    if (iVar2 == 0) {
      pcVar6 = (char *)0x0;
      do {
        if (UVar5.unknown[(long)pcVar6] == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 != (char *)0x40);
      SVar10.bridgeObject = pvVar4;
      SVar10.str = pcVar6;
      tVar11 = Swift::String::_fromUTF8Repairing(UVar5,SVar10);
      pvVar4 = tVar11.result.bridgeObject;
      pcVar6 = tVar11.result.str;
    }
    else {
      pcVar6 = (char *)0x0;
      pvVar4 = (void *)0x0;
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095fcdc);
      (*pcVar1)();
    }
  }
  auVar9._8_8_ = pvVar4;
  auVar9._0_8_ = pcVar6;
  return auVar9;
}



/* Address: 0x10095fce0 | FUN_10095fce0 */

undefined1  [16] FUN_10095fce0(char *param_1,_StringGuts param_2,char *param_3,_StringGuts param_4)

{
  String *pSVar1;
  char *pcVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  bool bVar5;
  _StringGuts _Var6;
  long unaff_x20;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 local_50;
  ulong local_48;
  
  pSVar1 = (String *)(unaff_x20 + 0x10);
  _Var3.unknown = pSVar1->str;
  _Var4.unknown = *(undefined **)(unaff_x20 + 0x18);
  SVar13 = *pSVar1;
  SVar7 = *pSVar1;
  FUN_10095fbf0();
  if (_Var4.unknown == (undefined *)0x0) {
    if (param_2.unknown == (undefined *)0x0) {
      local_48 = 0xee0029612f6e2864;
      local_50 = 0x61657268544f494e;
      goto LAB_10095fee8;
    }
    Swift::_StringGuts::grow(0x1a,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_50 = 0xd000000000000017;
    local_48 = 0x8000000100db5cb0;
LAB_10095febc:
    SVar8.bridgeObject = param_2.unknown;
    SVar8.str = param_1;
    SVar14.bridgeObject = param_4.unknown;
    SVar14.str = param_3;
    Swift::String::append(SVar8,SVar14);
  }
  else {
    if (param_2.unknown == (undefined *)0x0) {
      _swift_bridgeObjectRetain(_Var4.unknown);
      Swift::_StringGuts::grow(0x1b,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar2 = "NIOThread(desiredName = ";
      local_50 = 0xd000000000000018;
    }
    else {
      _Var6.unknown = param_2.unknown;
      if ((_Var3.unknown != param_1 || _Var4.unknown != param_2.unknown) &&
         (_Var6.unknown = _Var4.unknown, param_3 = param_1, param_4.unknown = param_2.unknown,
         bVar5 = Swift::_stringCompareWithSmolCheck
                           (_Var3,_Var4,(_StringComparisonResult)(__int8)param_1), !bVar5)) {
        _swift_bridgeObjectRetain(_Var4.unknown);
        Swift::_StringGuts::grow(0x2c,_Var6);
        _swift_bridgeObjectRelease(0xe000000000000000);
        local_50 = 0xd000000000000018;
        local_48 = 0x8000000100db5cd0;
        SVar12.bridgeObject = param_4.unknown;
        SVar12.str = param_3;
        Swift::String::append(SVar13,SVar12);
        _swift_bridgeObjectRelease(_Var4.unknown);
        SVar7.bridgeObject = (void *)0xef203d20656d614e;
        SVar7.str = (char *)0x6c6175746361202c;
        SVar13.bridgeObject = param_4.unknown;
        SVar13.str = param_3;
        Swift::String::append(SVar7,SVar13);
        goto LAB_10095febc;
      }
      _swift_bridgeObjectRetain(_Var4.unknown);
      _swift_bridgeObjectRelease(param_2.unknown);
      Swift::_StringGuts::grow(0x14,_Var6);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar2 = "NIOThread(name = ";
      local_50 = 0xd000000000000011;
    }
    local_48 = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    SVar11.bridgeObject = param_4.unknown;
    SVar11.str = param_3;
    Swift::String::append(SVar7,SVar11);
    param_2.unknown = _Var4.unknown;
  }
  _swift_bridgeObjectRelease(param_2.unknown);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x29;
  SVar15.bridgeObject = param_4.unknown;
  SVar15.str = param_3;
  Swift::String::append(SVar9,SVar15);
LAB_10095fee8:
  auVar10._8_8_ = local_48;
  auVar10._0_8_ = local_50;
  return auVar10;
}



/* Address: 0x10095ff00 | FUN_10095ff00 */

void FUN_10095ff00(void)

{
  FUN_10095fce0();
  return;
}



/* Address: 0x10095ff20 | FUN_10095ff20 */

long FUN_10095ff20(void *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  pthread_key_t local_38;
  
  _swift_allocObject();
  local_38 = 0;
  iVar2 = _pthread_key_create(&local_38,param_1);
  if (iVar2 == 0) {
    *(pthread_key_t *)(unaff_x20 + 0x10) = local_38;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ff84);
  (*pcVar1)();
}



/* Address: 0x10095ff84 | FUN_10095ff84 */

void FUN_10095ff84(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_key_delete(*(pthread_key_t *)(unaff_x20 + 0x10));
  if (iVar2 == 0) {
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ffb0);
  (*pcVar1)();
}



/* Address: 0x10095ffb0 | FUN_10095ffb0 */

void FUN_10095ffb0(void)

{
  long unaff_x20;
  
  _pthread_getspecific(*(pthread_key_t *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10095ffb8 | FUN_10095ffb8 */

void FUN_10095ffb8(void *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_setspecific(*(pthread_key_t *)(unaff_x20 + 0x10),param_1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ffdc);
  (*pcVar1)();
}



/* Address: 0x10095ffdc | FUN_10095ffdc */

void FUN_10095ffdc(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  FUN_10096027c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  pcVar1 = _swift_release;
  FUN_10095ff20();
  unaff_x20[2] = (long)pcVar1;
  return;
}



/* Address: 0x100960020 | _swift_release */

void _swift_release(void)

{
  _swift_release();
  return;
}



/* Address: 0x100960024 | FUN_100960024 */

undefined8 FUN_100960024(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10095f9f4();
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  FUN_1009600d4();
  _swift_release(uVar1);
  _swift_unknownObjectRelease_n(param_1,2);
  return uVar1;
}



/* Address: 0x100960070 | FUN_100960070 */

undefined8 FUN_100960070(void)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar3 = *unaff_x20;
  pvVar1 = _pthread_getspecific(*(pthread_key_t *)(unaff_x20[2] + 0x10));
  uVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    local_28 = *(undefined8 *)((long)pvVar1 + 0x18);
    _swift_unknownObjectRetain();
    _swift_dynamicCast(&local_30,&local_28,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       *(undefined8 *)(lVar3 + 0x50),7);
    uVar2 = local_30;
  }
  return uVar2;
}



/* Address: 0x1009600d4 | FUN_1009600d4 */

void FUN_1009600d4(void)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long unaff_x20;
  long lVar4;
  void *local_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pvVar3 = _pthread_getspecific(*(pthread_key_t *)(lVar4 + 0x10));
  if (pvVar3 != (void *)0x0) {
    _swift_release();
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_38,FUN_100960360);
  iVar2 = _pthread_setspecific(*(pthread_key_t *)(lVar4 + 0x10),local_38);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100960178);
  (*pcVar1)();
}



/* Address: 0x100960178 | FUN_100960178 */

undefined1  [16] FUN_100960178(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_100960070();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1009601ac;
  return auVar2;
}



/* Address: 0x1009601ac | FUN_1009601ac */

void FUN_1009601ac(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_1009600d4(uVar1);
  }
  else {
    _swift_unknownObjectRetain();
    FUN_1009600d4();
    _swift_unknownObjectRelease(uVar1);
  }
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x1009601ec | FUN_1009601ec */

void FUN_1009601ec(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long **pplVar2;
  undefined8 uVar3;
  long *local_50;
  undefined8 uStack_48;
  
  pplVar2 = &local_50;
  uVar3 = *param_2;
  uVar1 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,*param_3,*(undefined8 *)(*param_3 + 0x50),0,0);
  FUN_100960594(0,uVar1);
  local_50 = param_3;
  uStack_48 = uVar3;
  FUN_100663568();
  *param_1 = pplVar2;
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar3);
  return;
}



/* Address: 0x100960278 | thunk_FUN_1009600d4 */

void thunk_FUN_1009600d4(void)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long unaff_x20;
  long lVar4;
  void *pvStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pvVar3 = _pthread_getspecific(*(pthread_key_t *)(lVar4 + 0x10));
  if (pvVar3 != (void *)0x0) {
    _swift_release();
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&pvStack_38,FUN_100960360);
  iVar2 = _pthread_setspecific(*(pthread_key_t *)(lVar4 + 0x10),pvStack_38);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100960178);
  (*pcVar1)();
}



/* Address: 0x10096027c | FUN_10096027c */

void FUN_10096027c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100960288 | FUN_100960288 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100960288(void)

{
  return ZEXT816(0x100feec18);
}



/* Address: 0x1009602a8 | FUN_1009602a8 */

void FUN_1009602a8(void)

{
  FUN_1009602d4();
  return;
}



/* Address: 0x1009602b8 | FUN_1009602b8 */

void FUN_1009602b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009602c4 | FUN_1009602c4 */

void FUN_1009602c4(void)

{
  FUN_1009602d4();
  return;
}



/* Address: 0x1009602d4 | FUN_1009602d4 */

void FUN_1009602d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_4;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x10096030c | FUN_10096030c */

undefined1  [16] FUN_10096030c(void)

{
  return ZEXT816(0x100f1be58);
}



/* Address: 0x10096031c | thunk_FUN_100960320 */

void thunk_FUN_100960320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feed80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86408;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86408,&DAT_100f1be58);
  DAT_100feed80 = pTVar1;
  return;
}



/* Address: 0x100960320 | FUN_100960320 */

void FUN_100960320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feed80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86408;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86408,&DAT_100f1be58);
  DAT_100feed80 = pTVar1;
  return;
}



/* Address: 0x100960360 | FUN_100960360 */

void FUN_100960360(void)

{
  FUN_1009601ec();
  return;
}



/* Address: 0x10096037c | FUN_10096037c */

void FUN_10096037c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100960388 | FUN_100960388 */

undefined1  [16] FUN_100960388(void)

{
  return ZEXT816(0x100f1bf40);
}



/* Address: 0x100960398 | FUN_100960398 */

undefined8 FUN_100960398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  pthread_t p_Var6;
  char *pcVar7;
  char **ppcVar8;
  long lVar9;
  undefined *puVar10;
  String SVar12;
  char *local_98;
  ulong uStack_90;
  pthread_mutexattr_t local_80;
  pthread_t local_70;
  long local_68;
  void *pvVar11;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar4 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  pvVar1 = *(void **)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  _swift_bridgeObjectRetain(lVar3);
  _swift_retain(uVar2);
  p_Var6 = _pthread_self();
  if (lVar3 == 0) goto LAB_100960478;
  _swift_bridgeObjectRetain(lVar3);
  pcVar7 = (char *)0x7fffffffffffffff;
  pvVar11 = pvVar1;
  FUN_1002e3a8c(0x7fffffffffffffff,pvVar1,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  SVar12.bridgeObject = pvVar11;
  SVar12.str = pcVar7;
  local_70 = p_Var6;
  SVar12 = Swift::String::__fromSubstring(SVar12);
  pvVar11 = SVar12.bridgeObject;
  if (((ulong)pvVar11 >> 0x3c & 1) == 0) {
    if (((ulong)pvVar11 >> 0x3d & 1) == 0) {
      if (((ulong)SVar12.str >> 0x3c & 1) == 0) goto LAB_100960540;
      ppcVar8 = (char **)(((ulong)pvVar11 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_90 = (ulong)pvVar11 & 0xffffffffffffff;
      ppcVar8 = &local_98;
      local_98 = SVar12.str;
    }
    _pthread_setname_np((char *)ppcVar8);
  }
  else {
LAB_100960540:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x100960570);
  }
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(pvVar11);
LAB_100960478:
  lVar9 = 0;
  FUN_100960288();
  _swift_allocObject();
  puVar10 = &DAT_100feca80;
  FUN_1000f7830(&DAT_100feca80,&DAT_100c845e8);
  _swift_allocObject();
  *(pthread_t *)(puVar10 + 0x10) = p_Var6;
  local_80.__sig = 0;
  local_80.__opaque[0] = '\0';
  local_80.__opaque[1] = '\0';
  local_80.__opaque[2] = '\0';
  local_80.__opaque[3] = '\0';
  local_80.__opaque[4] = '\0';
  local_80.__opaque[5] = '\0';
  local_80.__opaque[6] = '\0';
  local_80.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_80);
  iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x18),&local_80);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100960540);
    (*pcVar4)();
  }
  *(long *)(lVar9 + 0x18) = lVar3;
  *(undefined **)(lVar9 + 0x20) = puVar10;
  *(void **)(lVar9 + 0x10) = pvVar1;
  local_80.__sig = lVar9;
  (*pcVar4)(&local_80);
  _swift_release(lVar9);
  _swift_release(param_1);
  _swift_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10096056c | thunk_FUN_100960398 */

undefined8
thunk_FUN_100960398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  pthread_t p_Var6;
  char *pcVar7;
  char **ppcVar8;
  long lVar9;
  undefined *puVar10;
  String SVar12;
  char *pcStack_98;
  ulong uStack_90;
  pthread_mutexattr_t pStack_80;
  pthread_t p_Stack_70;
  long lStack_68;
  void *pvVar11;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar4 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  pvVar1 = *(void **)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  _swift_bridgeObjectRetain(lVar3);
  _swift_retain(uVar2);
  p_Var6 = _pthread_self();
  if (lVar3 == 0) goto LAB_100960478;
  _swift_bridgeObjectRetain(lVar3);
  pcVar7 = (char *)0x7fffffffffffffff;
  pvVar11 = pvVar1;
  FUN_1002e3a8c(0x7fffffffffffffff,pvVar1,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  SVar12.bridgeObject = pvVar11;
  SVar12.str = pcVar7;
  p_Stack_70 = p_Var6;
  SVar12 = Swift::String::__fromSubstring(SVar12);
  pvVar11 = SVar12.bridgeObject;
  if (((ulong)pvVar11 >> 0x3c & 1) == 0) {
    if (((ulong)pvVar11 >> 0x3d & 1) == 0) {
      if (((ulong)SVar12.str >> 0x3c & 1) == 0) goto LAB_100960540;
      ppcVar8 = (char **)(((ulong)pvVar11 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_90 = (ulong)pvVar11 & 0xffffffffffffff;
      ppcVar8 = &pcStack_98;
      pcStack_98 = SVar12.str;
    }
    _pthread_setname_np((char *)ppcVar8);
  }
  else {
LAB_100960540:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x100960570);
  }
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(pvVar11);
LAB_100960478:
  lVar9 = 0;
  FUN_100960288();
  _swift_allocObject();
  puVar10 = &DAT_100feca80;
  FUN_1000f7830(&DAT_100feca80,&DAT_100c845e8);
  _swift_allocObject();
  *(pthread_t *)(puVar10 + 0x10) = p_Var6;
  pStack_80.__sig = 0;
  pStack_80.__opaque[0] = '\0';
  pStack_80.__opaque[1] = '\0';
  pStack_80.__opaque[2] = '\0';
  pStack_80.__opaque[3] = '\0';
  pStack_80.__opaque[4] = '\0';
  pStack_80.__opaque[5] = '\0';
  pStack_80.__opaque[6] = '\0';
  pStack_80.__opaque[7] = '\0';
  _pthread_mutexattr_init(&pStack_80);
  iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x18),&pStack_80);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100960540);
    (*pcVar4)();
  }
  *(long *)(lVar9 + 0x18) = lVar3;
  *(undefined **)(lVar9 + 0x20) = puVar10;
  *(void **)(lVar9 + 0x10) = pvVar1;
  pStack_80.__sig = lVar9;
  (*pcVar4)(&pStack_80);
  _swift_release(lVar9);
  _swift_release(param_1);
  _swift_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lStack_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100960570 | FUN_100960570 */

void FUN_100960570(char *param_1)

{
  _pthread_setname_np(param_1);
  return;
}



/* Address: 0x100960594 | FUN_100960594 */

void FUN_100960594(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009605a0 | FUN_1009605a0 */

undefined8 FUN_1009605a0(void)

{
  return 0x28;
}



/* Address: 0x1009605a8 | FUN_1009605a8 */

void FUN_1009605a8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_30 = param_4;
  uStack_28 = param_1;
  local_20 = param_2;
  FUN_1009608f8(FUN_100668f98,auStack_40,param_3 & 0xffffffff00000000 | 0x2800,param_3);
  return;
}



/* Address: 0x1009605e8 | FUN_1009605e8 */

void FUN_1009605e8(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine((__uint32)param_2.unknown,param_2);
  Swift::Hasher::_combine((__uint32)((ulong)param_2.unknown >> 0x20),HVar1);
  return;
}



/* Address: 0x100960618 | FUN_100960618 */

void FUN_100960618(ulong param_1,Hasher param_2)

{
  Hasher HVar1;
  
  HVar1.unknown = (undefined *)(param_1 >> 0x20);
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint32)param_1,param_2);
  Swift::Hasher::_combine((__uint32)(param_1 >> 0x20),param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100960674 | FUN_100960674 */

void FUN_100960674(undefined8 param_1,Hasher param_2)

{
  __uint32 _Var1;
  uint uVar2;
  Hasher HVar3;
  __uint32 *unaff_x20;
  
  _Var1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar3.unknown = (undefined *)(ulong)uVar2;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(uVar2,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1009606cc | FUN_1009606cc */

void FUN_1009606cc(undefined8 param_1,Hasher param_2)

{
  __uint32 _Var1;
  __uint32 *unaff_x20;
  
  _Var1 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100960704 | FUN_100960704 */

void FUN_100960704(__int64 param_1,Hasher param_2)

{
  __uint32 _Var1;
  uint uVar2;
  Hasher HVar3;
  __uint32 *unaff_x20;
  
  _Var1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar3.unknown = (undefined *)(ulong)uVar2;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(uVar2,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100960758 | thunk_FUN_10096075c */

String thunk_FUN_10096075c(int param_1)

{
  String SVar1;
  
  if (param_1 != -1) {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar1;
  }
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x312d;
  return SVar1;
}


