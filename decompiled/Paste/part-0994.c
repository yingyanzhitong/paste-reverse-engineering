/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aa6da8 | FUN_100aa6da8 */

ulong FUN_100aa6da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint5 local_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  puVar1 = &DAT_100ff6dc8;
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  FUN_1000f7830(&DAT_100ff6dc8,&DAT_100c91d18);
  FUN_1005b32d0(&local_68,FUN_100aa83b8,auStack_60,param_1,puVar1);
  return (ulong)local_68;
}



/* Address: 0x100aa6e1c | FUN_100aa6e1c */

ulong FUN_100aa6e1c(ulong param_1)

{
  FUN_100aa85fc();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa6e34 | FUN_100aa6e34 */

ulong FUN_100aa6e34(undefined8 param_1,undefined4 param_2,undefined8 param_3,Darwin *param_4,
                   undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_74;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  Darwin::set_errno(param_4,0);
  uStack_54 = SUB84(param_4,0);
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_5;
  FUN_1005b32d0(&local_74,FUN_100aa8688,auStack_70,param_1,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_74 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa6ed4 | FUN_100aa6ed4 */

ulong FUN_100aa6ed4(ulong param_1)

{
  FUN_100aa86d0();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa6eec | FUN_100aa6eec */

ulong FUN_100aa6eec(ulong param_1,undefined8 param_2)

{
  FUN_100aa8034(param_1,param_2,FUN_100aa8a14);
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa6f0c | FUN_100aa6f0c */

ulong FUN_100aa6f0c(ulong param_1)

{
  FUN_100aa80b8();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa6f24 | thunk_FUN_100aa813c */

void thunk_FUN_100aa813c(void)

{
  FUN_100aa813c();
  return;
}



/* Address: 0x100aa6f28 | FUN_100aa6f28 */

void FUN_100aa6f28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100aa6fc8(param_1,PTR__stat_100ea8a78);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aa6f78 | FUN_100aa6f78 */

void FUN_100aa6f78(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100aa6fc8(param_1,PTR__lstat_100ea86e8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aa6fc8 | FUN_100aa6fc8 */

void FUN_100aa6fc8(Darwin *param_1,undefined8 param_2,code *param_3)

{
  __int32 _Var1;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  Darwin local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  Darwin::set_errno(param_1,0);
  (*param_3)(param_2,&local_170);
  if ((int)param_2 == -1) {
    _Var1 = Darwin::get_errno();
    local_e0 = CONCAT44(local_e0._4_4_,_Var1);
    FUN_1005b841c(&local_e0);
  }
  else {
    uStack_78 = uStack_108;
    local_80 = local_110;
    uStack_68 = uStack_f8;
    uStack_70 = local_100;
    uStack_58 = uStack_e8;
    local_60 = local_f0;
    uStack_b8 = uStack_148;
    local_c0 = local_150;
    uStack_a8 = uStack_138;
    uStack_b0 = local_140;
    uStack_98 = uStack_128;
    local_a0 = local_130;
    uStack_88 = uStack_118;
    uStack_90 = local_120;
    uStack_d8 = uStack_168;
    local_e0 = local_170;
    uStack_c8 = uStack_158;
    uStack_d0 = local_160;
    FUN_1005b8d54(&local_e0);
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_78;
  *(undefined8 *)(param_1 + 0x60) = local_80;
  *(undefined8 *)(param_1 + 0x78) = uStack_68;
  *(undefined8 *)(param_1 + 0x70) = uStack_70;
  *(undefined8 *)(param_1 + 0x88) = uStack_58;
  *(undefined8 *)(param_1 + 0x80) = local_60;
  param_1[0x90] = local_50;
  *(undefined8 *)(param_1 + 0x28) = uStack_b8;
  *(undefined8 *)(param_1 + 0x20) = local_c0;
  *(undefined8 *)(param_1 + 0x38) = uStack_a8;
  *(undefined8 *)(param_1 + 0x30) = uStack_b0;
  *(undefined8 *)(param_1 + 0x48) = uStack_98;
  *(undefined8 *)(param_1 + 0x40) = local_a0;
  *(undefined8 *)(param_1 + 0x58) = uStack_88;
  *(undefined8 *)(param_1 + 0x50) = uStack_90;
  *(undefined8 *)(param_1 + 8) = uStack_d8;
  *(undefined8 *)param_1 = local_e0;
  *(undefined8 *)(param_1 + 0x18) = uStack_c8;
  *(undefined8 *)(param_1 + 0x10) = uStack_d0;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aa70e0 | FUN_100aa70e0 */

void FUN_100aa70e0(int *param_1,char *param_2,mode_t param_3)

{
  int iVar1;
  
  iVar1 = _mkdir(param_2,param_3);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa7110 | FUN_100aa7110 */

void FUN_100aa7110(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa8a4c,auStack_30,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa7148 | FUN_100aa7148 */

ulong FUN_100aa7148(ulong param_1)

{
  FUN_100aa8570();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa7160 | FUN_100aa7160 */

void FUN_100aa7160(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  FUN_1005b32d0(FUN_100aa88b0,auStack_30,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa71a0 | FUN_100aa71a0 */

void FUN_100aa71a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_4;
  uStack_1c = param_5;
  FUN_1005b32d0(FUN_100aa8ab4,auStack_40,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa71e4 | FUN_100aa71e4 */

ulong FUN_100aa71e4(ulong param_1,undefined8 param_2)

{
  FUN_100aa8034(param_1,param_2,FUN_100aa88e8);
  return param_1 & 0xffffffffff;
}



/* Address: 0x100aa7204 | FUN_100aa7204 */

void FUN_100aa7204(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa8920,auStack_30,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa723c | FUN_100aa723c */

void FUN_100aa723c(undefined8 param_1)

{
  FUN_100aa7248(param_1,FUN_100aa72c4);
  return;
}



/* Address: 0x100aa7248 | FUN_100aa7248 */

ulong FUN_100aa7248(Darwin *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_34;
  
  Darwin::set_errno(param_1,0);
  FUN_1005b32d0(&local_34,param_2,0,param_1,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_34 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa72c4 | FUN_100aa72c4 */

void FUN_100aa72c4(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _unlink(param_2);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa72f0 | FUN_100aa72f0 */

void FUN_100aa72f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  _unlinkat(param_3,param_2);
  *param_1 = (int)param_3;
  return;
}



/* Address: 0x100aa7328 | FUN_100aa7328 */

void FUN_100aa7328(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa89e4,auStack_30,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa7360 | FUN_100aa7360 */

void FUN_100aa7360(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined8 local_18;
  
  local_20 = param_3;
  local_18 = param_1;
  FUN_1005b32d0(FUN_100aa8b30,auStack_30,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa73a0 | FUN_100aa73a0 */

void FUN_100aa73a0(String *param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  __int32 _Var3;
  UnsafePointer<__int8> cString;
  ssize_t sVar4;
  __int32 *p_Var5;
  __int32 *p_Var6;
  long unaff_x21;
  String SVar7;
  __int32 local_34;
  undefined7 extraout_var;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  if ((bVar2 & 1) == 0) {
    cString.unknown = (Darwin *)0x401;
    _swift_slowAlloc(0x401,0xffffffffffffffff);
    Darwin::set_errno((Darwin *)cString.unknown,0);
    sVar4 = _readlink(param_2,cString.unknown,0x401);
    if (sVar4 == -1) {
      _Var3 = Darwin::get_errno();
      local_34 = _Var3;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      p_Var5 = (__int32 *)CONCAT71(extraout_var,bVar2);
      p_Var6 = p_Var5;
      if ((bVar2 & 1) != 0) {
        FUN_100a54208();
        p_Var6 = &local_34;
        _swift_willThrowTypedImpl(p_Var6,&DAT_100ee42f8,p_Var5);
      }
      FUN_100a54208();
      _swift_allocError(&DAT_100ee42f8,p_Var6,0,0);
      *p_Var6 = _Var3;
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
      return;
    }
    if (0x400 < sVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa7504);
      (*pcVar1)();
    }
    cString.unknown[sVar4] = 0;
    SVar7 = Swift::String::init(cString);
    _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
  }
  else {
    SVar7 = Swift::String::_init(0x400);
    if (unaff_x21 != 0) {
      return;
    }
  }
  *param_1 = SVar7;
  return;
}



/* Address: 0x100aa7504 | FUN_100aa7504 */

ssize_t FUN_100aa7504(char *param_1,size_t param_2,char *param_3)

{
  code *pcVar1;
  byte bVar2;
  __int32 _Var3;
  ssize_t sVar4;
  undefined7 extraout_var;
  __int32 *p_Var6;
  Darwin *unaff_x20;
  Darwin *unaff_x21;
  __int32 local_34;
  __int32 *p_Var5;
  
  if (param_1 != (char *)0x0) {
    Darwin::set_errno(unaff_x21,0);
    sVar4 = _readlink(param_3,param_1,param_2);
    if (sVar4 == -1) {
      _Var3 = Darwin::get_errno();
      local_34 = _Var3;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      p_Var5 = (__int32 *)CONCAT71(extraout_var,bVar2);
      p_Var6 = p_Var5;
      if ((bVar2 & 1) != 0) {
        FUN_100a54208();
        p_Var6 = &local_34;
        _swift_willThrowTypedImpl(p_Var6,&DAT_100ee42f8,p_Var5);
      }
      FUN_100a54208();
      _swift_allocError(&DAT_100ee42f8,p_Var6,0,0);
      *p_Var6 = _Var3;
    }
    return sVar4;
  }
  Darwin::set_errno(unaff_x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa75dc);
  (*pcVar1)();
}



/* Address: 0x100aa75dc | FUN_100aa75dc */

ulong FUN_100aa75dc(Darwin *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  Darwin::set_errno(param_1,0);
  _futimens(param_1,param_2);
  if ((int)param_1 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa7634 | _getuid */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uid_t _getuid(void)

{
  uid_t uVar1;
  
  uVar1 = _getuid();
  return uVar1;
}



/* Address: 0x100aa7638 | FUN_100aa7638 */

ulong FUN_100aa7638(int param_1,int param_2,Darwin *param_3,copyfile_flags_t param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  Darwin::set_errno(param_3,0);
  iVar1 = _fcopyfile(param_1,param_2,(copyfile_state_t)param_3,param_4);
  if (iVar1 == -1) {
    uVar2 = Darwin::get_errno();
    uVar3 = (ulong)uVar2;
    uVar4 = 0x100000000;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  return uVar4 | uVar3;
}



/* Address: 0x100aa76a8 | FUN_100aa76a8 */

void FUN_100aa76a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  puVar1 = &DAT_100ff6dc8;
  local_50 = param_2;
  uStack_48 = param_4;
  local_40 = param_5;
  FUN_1000f7830(&DAT_100ff6dc8,&DAT_100c91d18);
  FUN_1005b32d0(param_1,FUN_100aa8b64,auStack_60,param_3,puVar1);
  return;
}



/* Address: 0x100aa7718 | FUN_100aa7718 */

void FUN_100aa7718(Darwin *param_1,char *param_2,char *param_3,copyfile_state_t param_4,
                  copyfile_flags_t param_5)

{
  int iVar1;
  __int32 _Var2;
  
  Darwin::set_errno(param_1,0);
  iVar1 = _copyfile(param_3,param_2,param_4,param_5);
  if (iVar1 == -1) {
    _Var2 = Darwin::get_errno();
    *(__int32 *)param_1 = _Var2;
  }
  param_1[4] = (Darwin)(iVar1 == -1);
  return;
}



/* Address: 0x100aa7794 | FUN_100aa7794 */

void FUN_100aa7794(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _remove(param_2);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa77c0 | FUN_100aa77c0 */

void FUN_100aa77c0(size_t *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  FUN_1005ac824();
  puVar1 = (undefined *)(param_3 + 1);
  if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa7840);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
    FUN_100a4ff80(puVar1,0);
    _memcpy(puVar3 + 0x20,param_2,(size_t)puVar1);
  }
  *param_1 = (size_t)puVar3;
  return;
}



/* Address: 0x100aa7840 | FUN_100aa7840 */

void FUN_100aa7840(void)

{
  FUN_1001060e4();
  return;
}



/* Address: 0x100aa7854 | FUN_100aa7854 */

undefined * FUN_100aa7854(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa795c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff6aa0;
    FUN_1000f7830(&DAT_100ff6aa0,&DAT_100c90a50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f2bb60);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100aa795c | FUN_100aa795c */

undefined * FUN_100aa795c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa7a78);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff6eb0;
    FUN_1000f7830(&DAT_100ff6eb0,&DAT_100c91fa8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ee4f88);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100aa7a78 | FUN_100aa7a78 */

undefined * FUN_100aa7a78(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa7b80);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff7fd0;
    FUN_1000f7830(&DAT_100ff7fd0,&DAT_100c93730);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ee4790);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100aa7b80 | FUN_100aa7b80 */

undefined * FUN_100aa7b80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa7c9c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff7f70;
    FUN_1000f7830(&DAT_100ff7f70,&DAT_100c93398);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f2d7d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100aa7c9c | FUN_100aa7c9c */

undefined * FUN_100aa7c9c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa7da4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff6fe0;
    FUN_1000f7830(&DAT_100ff6fe0,&DAT_100c924a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100aa7da4 | FUN_100aa7da4 */

void FUN_100aa7da4(long param_1)

{
  FUN_1001060e4(0,*(undefined8 *)(param_1 + 0x10),0,param_1,&DAT_100ff6a98,&DAT_100c90a48);
  return;
}



/* Address: 0x100aa7dd8 | FUN_100aa7dd8 */

void FUN_100aa7dd8(long param_1)

{
  FUN_100aa795c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100aa7dec | FUN_100aa7dec */

void FUN_100aa7dec(long param_1)

{
  FUN_1001060e4(0,*(undefined8 *)(param_1 + 0x10),0,param_1,&DAT_100ff6aa8,&DAT_100c90a58);
  return;
}



/* Address: 0x100aa7e20 | FUN_100aa7e20 */

undefined1  [16] FUN_100aa7e20(Darwin *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  Darwin *pDVar4;
  FTS *pFVar5;
  undefined1 auVar6 [16];
  Darwin *local_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  Darwin *local_40;
  Darwin *local_38;
  
  puVar3 = &DAT_100ff7fc8;
  local_40 = param_1;
  FUN_1000f7830(&DAT_100ff7fc8,&DAT_100c93728);
  FUN_1005b32d0(&local_38,FUN_100aa8898,auStack_50,param_1,puVar3);
  while( true ) {
    Darwin::set_errno(param_1,0);
    pDVar4 = local_38;
    _swift_isUniquelyReferenced_nonNull_native();
    param_1 = local_38;
    if (((ulong)pDVar4 & 1) == 0) {
      FUN_100aa7da4();
      param_1 = local_38;
    }
    local_68 = param_1 + 0x20;
    uStack_60 = 0;
    pFVar5 = _fts_open((char **)&local_68,param_2,(int *)0x0);
    if (pFVar5 == (FTS *)0x0) break;
    local_38 = param_1;
    uVar2 = Darwin::get_errno();
    if (uVar2 != 4) {
      if (uVar2 != 0) {
        _swift_bridgeObjectRelease(param_1);
        pFVar5 = (FTS *)(ulong)uVar2;
      }
      else {
        _swift_bridgeObjectRelease(param_1);
      }
      auVar6[8] = uVar2 != 0;
      auVar6._0_8_ = pFVar5;
      auVar6._9_7_ = 0;
      return auVar6;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa7f18);
  (*pcVar1)();
}



/* Address: 0x100aa7f18 | FUN_100aa7f18 */

void FUN_100aa7f18(long param_1)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  String SVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    pcVar3 = (char *)(param_1 + 0x20);
    do {
      if (*pcVar3 == '\0') {
        thunk_FUN_1005b3a14();
        return;
      }
      lVar2 = lVar2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (lVar2 != 0);
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd00000000000003f,0x8000000100dae270,
             0xdae260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa7f90);
  (*pcVar1)();
}



/* Address: 0x100aa7f9c | FUN_100aa7f9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aa7fb8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100aa7f9c(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  _ArrayBuffer<undefined> _Var3;
  char *pcVar4;
  undefined8 uVar5;
  _ArrayBuffer<undefined> _Var6;
  undefined1 auVar7 [16];
  
  _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var3.unknown + 0x10) = 0x400;
  _bzero(_Var3.unknown + 0x20,0x400);
  Darwin::set_errno((Darwin *)0x400,0);
  pcVar4 = _getcwd(_Var3.unknown + 0x20,*(size_t *)(_Var3.unknown + 0x10));
  if (pcVar4 == (char *)0x0) {
    uVar2 = Darwin::get_errno();
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa8034);
      (*pcVar1)();
    }
    _Var6.unknown = (undefined *)(ulong)uVar2;
    uVar5 = 1;
  }
  else {
    _Var6 = _Var3;
    FUN_100aa7f18(_Var3.unknown);
    _swift_bridgeObjectRelease(_Var3.unknown);
    uVar5 = 0;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = _Var6.unknown;
  return auVar7;
}



/* Address: 0x100aa8034 | FUN_100aa8034 */

ulong FUN_100aa8034(undefined8 param_1,Darwin *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  Darwin *local_40;
  
  Darwin::set_errno(param_2,0);
  local_40 = param_2;
  FUN_1005b32d0(&local_54,param_3,auStack_50,param_1,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa80b8 | FUN_100aa80b8 */

ulong FUN_100aa80b8(Darwin *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  Darwin *local_40;
  
  Darwin::set_errno(param_1,0);
  local_40 = param_1;
  FUN_1005b32d0(&local_54,FUN_100aa89ac,auStack_50,param_2,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa813c | FUN_100aa813c */

/* WARNING: Removing unreachable block (ram,0x000100aa8178) */
/* WARNING: Removing unreachable block (ram,0x000100aa81fc) */
/* WARNING: Removing unreachable block (ram,0x000100aa81b8) */

undefined1  [16] FUN_100aa813c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulong local_40;
  undefined8 uStack_38;
  
  FUN_1005b32d0(&local_40,FUN_100aa73a0,0,param_1,PTR___type_metadata_for_Swift_String_100eac208);
  thunk_FUN_1005b3cd0(local_40,uStack_38);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100aa82ac | FUN_100aa82ac */

void FUN_100aa82ac(void)

{
  uid_t uVar1;
  uid_t uVar2;
  __int32 _Var3;
  Darwin *this;
  String SVar4;
  undefined1 auStack_488 [1024];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  UnsafePointer<__int8> local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  this = (Darwin *)&local_80;
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = _getuid();
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50.unknown = (undefined *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_88 = 0;
  do {
    Darwin::set_errno(this,0);
    uVar2 = uVar1;
    _getpwuid_r(uVar1,&local_80,auStack_488,0x400,&local_88);
    if (uVar2 != 0xffffffff) {
      if ((local_88 != 0) && (local_50.unknown != (undefined *)0x0)) {
        SVar4 = Swift::String::init(local_50);
        thunk_FUN_1005b3cd0(SVar4.str,SVar4.bridgeObject);
      }
      break;
    }
    _Var3 = Darwin::get_errno();
  } while (_Var3 == 4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100aa8388 | FUN_100aa8388 */

void FUN_100aa8388(int *param_1,char *param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = _mkdir(param_2,*(mode_t *)(unaff_x20 + 0x10));
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa83b8 | FUN_100aa83b8 */

void FUN_100aa83b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  local_40 = *(undefined4 *)(unaff_x20 + 0x20);
  puVar2 = &DAT_100ff6dc8;
  local_50 = param_2;
  FUN_1000f7830(&DAT_100ff6dc8,&DAT_100c91d18);
  FUN_1005b32d0(param_1,FUN_100aa8b64,auStack_60,uVar1,puVar2);
  return;
}



/* Address: 0x100aa842c | FUN_100aa842c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aa8454 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

char * FUN_100aa842c(undefined8 param_1)

{
  UnsafeBufferPointer<__int8> UVar1;
  uint uVar2;
  _ArrayBuffer<undefined> this;
  Darwin *pDVar3;
  size_t sVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  String SVar9;
  tuple2_conflict1 tVar10;
  
  this = Swift::Array<undefined>::_allocateBufferUninitialized
                   (param_1,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(this.unknown + 0x10) = 0x80;
  *(undefined8 *)(this.unknown + 0x28) = 0;
  *(undefined8 *)(this.unknown + 0x20) = 0;
  *(undefined8 *)(this.unknown + 0x38) = 0;
  *(undefined8 *)(this.unknown + 0x30) = 0;
  *(undefined8 *)(this.unknown + 0x48) = 0;
  *(undefined8 *)(this.unknown + 0x40) = 0;
  *(undefined8 *)(this.unknown + 0x58) = 0;
  *(undefined8 *)(this.unknown + 0x50) = 0;
  *(undefined8 *)(this.unknown + 0x68) = 0;
  *(undefined8 *)(this.unknown + 0x60) = 0;
  *(undefined8 *)(this.unknown + 0x78) = 0;
  *(undefined8 *)(this.unknown + 0x70) = 0;
  *(undefined8 *)(this.unknown + 0x88) = 0;
  *(undefined8 *)(this.unknown + 0x80) = 0;
  *(undefined8 *)(this.unknown + 0x98) = 0;
  *(undefined8 *)(this.unknown + 0x90) = 0;
  do {
    Darwin::set_errno((Darwin *)this.unknown,0);
    pDVar3 = (Darwin *)this.unknown;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)pDVar3 & 1) == 0) {
      FUN_100aa7dec();
    }
    pvVar5 = *(void **)(this.unknown + 0x10);
    UVar1.unknown = this.unknown + 0x20;
    sVar4 = _confstr((int)param_1,UVar1.unknown,(size_t)pvVar5);
    if (sVar4 == 0xffffffffffffffff) {
      uVar2 = Darwin::get_errno();
      _swift_bridgeObjectRelease(this.unknown);
      return (char *)(ulong)uVar2;
    }
    pcVar6 = *(char **)(this.unknown + 0x10);
    if (pcVar6 == (char *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      pcVar7 = (char *)0x0;
      do {
        pcVar8 = pcVar7;
        if (UVar1.unknown[(long)pcVar7] == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar6;
      } while (pcVar6 != pcVar7);
    }
    if ((long)sVar4 <= (long)pcVar6) {
      _swift_bridgeObjectRetain(this.unknown);
      SVar9.bridgeObject = pvVar5;
      SVar9.str = pcVar8;
      tVar10 = Swift::String::_fromUTF8Repairing(UVar1,SVar9);
      _swift_bridgeObjectRelease_n(this.unknown,2,tVar10._16_8_);
      return tVar10.result.str;
    }
    FUN_100ab34b8(*(ulong *)(this.unknown + 0x18) >> 1,0);
  } while( true );
}



/* Address: 0x100aa8570 | FUN_100aa8570 */

ulong FUN_100aa8570(undefined8 param_1,Darwin *param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  Darwin *local_40;
  undefined4 local_38;
  
  Darwin::set_errno(param_2,0);
  local_40 = param_2;
  local_38 = param_3;
  FUN_1005b32d0(&local_54,FUN_100aa8954,auStack_50,param_1,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa85fc | FUN_100aa85fc */

ulong FUN_100aa85fc(undefined8 param_1,Darwin *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  
  Darwin::set_errno(param_2,0);
  local_38 = SUB84(param_2,0);
  local_40 = param_1;
  FUN_1005b32d0(&local_54,FUN_100aa8af0,auStack_50,param_3,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa8688 | FUN_100aa8688 */

void FUN_100aa8688(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = *(undefined4 *)(unaff_x20 + 0x18);
  local_20 = *(undefined8 *)(unaff_x20 + 0x1c);
  local_28 = param_1;
  FUN_1005b32d0(FUN_100aa8ab4,auStack_40,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa86d0 | FUN_100aa86d0 */

ulong FUN_100aa86d0(undefined8 param_1,Darwin *param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  
  Darwin::set_errno(param_2,0);
  local_40 = SUB84(param_2,0);
  uStack_3c = param_3;
  FUN_1005b32d0(&local_54,FUN_100aa8a80,auStack_50,param_1,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  uVar2 = 0;
  uVar3 = 0;
  if (local_54 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  return uVar3 | uVar2;
}



/* Address: 0x100aa8758 | thunk_FUN_100aa875c */

void thunk_FUN_100aa875c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c935a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c935a0,&DAT_100f2f898);
  DAT_100ff7fa8 = pTVar1;
  return;
}



/* Address: 0x100aa875c | FUN_100aa875c */

void FUN_100aa875c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c935a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c935a0,&DAT_100f2f898);
  DAT_100ff7fa8 = pTVar1;
  return;
}



/* Address: 0x100aa879c | thunk_FUN_100aa87a0 */

void thunk_FUN_100aa87a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c935d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c935d8,&DAT_100f2f898);
  DAT_100ff7fb0 = pTVar1;
  return;
}



/* Address: 0x100aa87a0 | FUN_100aa87a0 */

void FUN_100aa87a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c935d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c935d8,&DAT_100f2f898);
  DAT_100ff7fb0 = pTVar1;
  return;
}



/* Address: 0x100aa87e0 | thunk_FUN_100aa87e4 */

void thunk_FUN_100aa87e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c936a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c936a0,&DAT_100f2f898);
  DAT_100ff7fb8 = pTVar1;
  return;
}



/* Address: 0x100aa87e4 | FUN_100aa87e4 */

void FUN_100aa87e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c936a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c936a0,&DAT_100f2f898);
  DAT_100ff7fb8 = pTVar1;
  return;
}



/* Address: 0x100aa8824 | thunk_FUN_100aa8828 */

void thunk_FUN_100aa8828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c936c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c936c8,&DAT_100f2f898);
  DAT_100ff7fc0 = pTVar1;
  return;
}



/* Address: 0x100aa8828 | FUN_100aa8828 */

void FUN_100aa8828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c936c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c936c8,&DAT_100f2f898);
  DAT_100ff7fc0 = pTVar1;
  return;
}



/* Address: 0x100aa8868 | FUN_100aa8868 */

undefined1  [16] FUN_100aa8868(void)

{
  return ZEXT816(0x100f2f878);
}


