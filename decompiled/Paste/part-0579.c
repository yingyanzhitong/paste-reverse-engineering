/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006677c8 | FUN_1006677c8 */

ulong FUN_1006677c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd9178;
  FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
  _swift_allocObject();
  puVar1[0x10] = (char)param_1;
  puVar1[0x11] = (char)((ulong)param_1 >> 8);
  *(short *)(puVar1 + 0x12) = (short)((ulong)param_1 >> 0x10);
  *(int *)(puVar1 + 0x14) = (int)((ulong)param_1 >> 0x20);
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined4 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  return (ulong)puVar1 | 0x4000000000000000;
}



/* Address: 0x100667868 | FUN_100667868 */

void FUN_100667868(UTF8View param_1,undefined8 *param_2)

{
  undefined *puVar1;
  __int64 _Var2;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if ((((ulong)param_2 >> 0x3d & 1) == 0) && (0x67 < ((ulong)param_1.unknown & 0xffffffffffff))) {
LAB_100667988:
      _swift_bridgeObjectRelease();
      FUN_100668fb8();
      _swift_allocError(&DAT_100ef2820,param_2,0,0);
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 1;
      *(undefined1 *)(param_2 + 3) = 2;
      _swift_willThrow();
      goto LAB_1006679cc;
    }
  }
  else {
    _Var2 = Swift::String::UTF8View::_foreignCount(param_1);
    if (0x67 < _Var2) goto LAB_100667988;
  }
  puVar1 = &DAT_100fd6f20;
  FUN_1000f7830(&DAT_100fd6f20,&DAT_100c67910);
  _swift_initStaticObject();
  FUN_100667a00(param_1.unknown,param_2,puVar1);
  _swift_bridgeObjectRelease(param_2);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  _memcpy(&local_a0,param_1.unknown + 0x20,*(size_t *)(param_1.unknown + 0x10));
  _swift_bridgeObjectRelease(param_1.unknown);
  puVar1 = &DAT_100fd8a40;
  FUN_1000f7830(&DAT_100fd8a40,0x100c6c110);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x4a) = uStack_68;
  *(undefined8 *)(puVar1 + 0x42) = uStack_70;
  *(undefined8 *)(puVar1 + 0x5a) = uStack_58;
  *(undefined8 *)(puVar1 + 0x52) = local_60;
  *(undefined8 *)(puVar1 + 0x6a) = uStack_48;
  *(undefined8 *)(puVar1 + 0x62) = uStack_50;
  *(undefined8 *)(puVar1 + 0x1a) = uStack_98;
  *(undefined8 *)(puVar1 + 0x12) = local_a0;
  *(undefined8 *)(puVar1 + 0x2a) = uStack_88;
  *(undefined8 *)(puVar1 + 0x22) = uStack_90;
  *(undefined2 *)(puVar1 + 0x10) = 0x100;
  *(undefined8 *)(puVar1 + 0x72) = local_40;
  *(undefined8 *)(puVar1 + 0x3a) = uStack_78;
  *(undefined8 *)(puVar1 + 0x32) = local_80;
LAB_1006679cc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100667a00 | FUN_100667a00 */

undefined8 FUN_100667a00(UTF8View param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_3 + 0x10);
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar3 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    uVar3 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  if (SCARRY8(lVar4,uVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100667ab4);
    (*pcVar1)();
  }
  uVar3 = lVar4 + uVar3;
  uVar2 = 0;
  FUN_100624a28(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100eae0d8);
  _swift_bridgeObjectRetain(param_2);
  FUN_1006688e8(param_1.unknown,param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1006687f8();
  return uVar2;
}



/* Address: 0x100667ab4 | FUN_100667ab4 */

void FUN_100667ab4(ulong param_1,ulong param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined1 local_78 [8];
  ulong local_70;
  ulong uStack_68;
  undefined8 local_50;
  ulong uStack_48;
  ulong local_40;
  undefined1 local_28 [8];
  
  local_50 = param_3;
  uStack_48 = param_1;
  local_40 = param_2;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) != 0) {
      uStack_68 = param_2 & 0xffffffffffffff;
      local_70 = param_1;
      FUN_100667ba4(local_78,&local_70,param_3,param_1,param_2);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRelease(param_2);
        return;
      }
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    if ((param_1 >> 0x3c & 1) != 0) {
      FUN_100667ba4(local_28,(param_2 & 0xfffffffffffffff) + 0x20,param_3,param_1,param_2);
      goto LAB_100667b00;
    }
  }
  Swift::_StringGuts::__slowWithCString((_StringGuts)0x100668ff8);
LAB_100667b00:
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100667ba4 | FUN_100667ba4 */

/* WARNING: Removing unreachable block (ram,0x000100667cc8) */

void FUN_100667ba4(ulong *param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x21;
  undefined1 local_61;
  ulong local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_60 = local_60 & 0xffffffff00000000;
  FUN_10060a7b0(2,param_2,&local_60);
  uVar1 = (ushort)(param_3 >> 8);
  if (unaff_x21 == 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100667db4);
      (*pcVar4)();
    }
    if (param_3 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100667db8);
      (*pcVar4)();
    }
    uVar2 = (undefined4)local_60;
    puVar6 = &DAT_100fd9188;
    FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
    _swift_allocObject();
    *(undefined2 *)(puVar6 + 0x10) = 0x200;
    *(ushort *)(puVar6 + 0x12) = uVar1 & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
    *(undefined4 *)(puVar6 + 0x14) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    _swift_errorRelease();
    local_61 = 0x25;
    local_50 = &local_61;
    uVar5 = 0;
    FUN_100668500(FUN_1005ce868,&local_60,param_4,param_5);
    if ((uVar5 & 1) == 0) {
      local_60 = 0;
      uStack_58 = 0;
      FUN_10060a7b0(0x1e,param_2,&local_60);
      uVar3 = uStack_58;
      uVar5 = local_60;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100667dbc);
        (*pcVar4)();
      }
      if (param_3 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100667dc0);
        (*pcVar4)();
      }
      puVar6 = &DAT_100fd9178;
      FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
      _swift_allocObject();
      *(undefined2 *)(puVar6 + 0x10) = 0x1e00;
      *(ushort *)(puVar6 + 0x12) = uVar1 & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      *(undefined4 *)(puVar6 + 0x14) = 0;
      *(ulong *)(puVar6 + 0x18) = uVar5;
      *(undefined8 *)(puVar6 + 0x20) = uVar3;
      *(undefined4 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x30) = 0;
      *(undefined8 *)(puVar6 + 0x38) = 0xe000000000000000;
      *param_1 = (ulong)puVar6 | 0x4000000000000000;
    }
    else {
      FUN_100669574(param_4,param_5,param_3);
      *param_1 = param_4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100667dc4 | FUN_100667dc4 */

void FUN_100667dc4(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  size_t sVar3;
  long lVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_a8;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined2 local_94;
  undefined1 local_92;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_88 = param_2 >> 0x20;
  uVar13 = param_2 & 0xffffffff;
  sVar3 = uStack_88 - uVar13;
  if (uStack_88 < uVar13) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100668030);
    (*pcVar8)();
  }
  uVar14 = param_3 >> 0x30 & 0xff;
  lVar4 = (param_3 >> 0x20 & 0xffff) * 0x100;
  iVar12 = (int)param_3;
  if (iVar12 - ((uint)uVar14 | (uint)lVar4) < uStack_88) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100668034);
    (*pcVar8)();
  }
  iVar11 = (int)param_2;
  iVar15 = (int)(param_2 >> 0x20);
  uVar2 = (undefined2)(param_3 >> 0x20);
  uVar1 = (undefined1)(param_3 >> 0x30);
  uVar5 = (ushort)(param_4 >> 8);
  local_a8 = param_1;
  local_a0 = iVar11;
  iStack_9c = iVar15;
  local_98 = iVar12;
  local_94 = uVar2;
  local_92 = uVar1;
  local_90 = uVar13;
  if (iVar15 - iVar11 == 0x10) {
    local_c0 = 0;
    uStack_b8 = 0;
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10066803c);
      (*pcVar8)();
    }
    if (param_4 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100668044);
      (*pcVar8)();
    }
    _swift_beginAccess(param_1 + 3,auStack_80,0,0);
    _memcpy(&local_c0,(void *)(param_1[3] + lVar4 + uVar14 + uVar13),sVar3);
    uVar7 = uStack_b8;
    uVar6 = local_c0;
    FUN_10060fd58(&local_a8);
    puVar9 = &DAT_100fd9178;
    FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
    _swift_allocObject();
    *(undefined2 *)(puVar9 + 0x10) = 0x1e00;
    *(ushort *)(puVar9 + 0x12) = uVar5 & 0xff | (ushort)(((uint)param_4 & 0xff00ff) << 8);
    *(undefined4 *)(puVar9 + 0x14) = 0;
    *(undefined8 *)(puVar9 + 0x18) = uVar6;
    *(undefined8 *)(puVar9 + 0x20) = uVar7;
    *(undefined4 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0xe000000000000000;
  }
  else if (iVar15 - iVar11 == 4) {
    local_c8 = 0;
    local_d0 = 0;
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100668038);
      (*pcVar8)();
    }
    if (param_4 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100668040);
      (*pcVar8)();
    }
    _swift_beginAccess(param_1 + 3,auStack_80,0,0);
    _memcpy(&local_d0,(void *)(param_1[3] + lVar4 + uVar14 + uVar13),sVar3);
    FUN_10060fd58(&local_a8);
    puVar9 = &DAT_100fd9188;
    FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
    _swift_allocObject();
    *(undefined2 *)(puVar9 + 0x10) = 0x200;
    *(ushort *)(puVar9 + 0x12) = uVar5 & 0xff | (ushort)(((uint)param_4 & 0xff00ff) << 8);
    *(undefined8 *)(puVar9 + 0x14) = local_d0;
    *(undefined4 *)(puVar9 + 0x1c) = local_c8;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
  }
  else {
    plVar10 = param_1;
    FUN_100669014();
    _swift_allocError(&DAT_100ef2898,plVar10,0,0);
    *plVar10 = (long)param_1;
    *(int *)(plVar10 + 1) = iVar11;
    *(int *)((long)plVar10 + 0xc) = iVar15;
    *(int *)(plVar10 + 2) = iVar12;
    *(undefined2 *)((long)plVar10 + 0x14) = uVar2;
    *(undefined1 *)((long)plVar10 + 0x16) = uVar1;
    _swift_willThrow();
    _swift_retain(param_1);
    FUN_10060fd58(&local_a8);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100668048 | FUN_100668048 */

undefined * FUN_100668048(char *param_1,void *param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  addrinfo *paVar5;
  code *pcVar6;
  int iVar7;
  ContiguousArray<__int8> CVar8;
  ContiguousArray<__int8> CVar9;
  UnsafePointer<__int8> cString;
  char *pcVar10;
  sockaddr *psVar11;
  undefined8 uVar12;
  String SVar13;
  String SVar14;
  addrinfo *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_70 = (addrinfo *)0x0;
  SVar13 = Swift::CustomStringConvertible::get_description();
  SVar14.bridgeObject = param_2;
  SVar14.str = param_1;
  CVar8 = Swift::String::get_utf8CString(SVar14);
  CVar9 = Swift::String::get_utf8CString(SVar13);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  iVar7 = _getaddrinfo(CVar8.unknown + 0x20,CVar9.unknown + 0x20,(addrinfo *)0x0,&local_70);
  _swift_release(CVar8.unknown);
  _swift_release();
  paVar5 = local_70;
  if (iVar7 != 0) {
    cString.unknown = _gai_strerror(iVar7);
    if (cString.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006682b0);
      (*pcVar6)();
    }
    SVar13 = Swift::String::init(cString);
    pcVar10 = SVar13.str;
    FUN_100669054();
    _swift_allocError(&DAT_100ef2918,pcVar10,0,0);
    *(char **)pcVar10 = param_1;
    *(void **)(pcVar10 + 8) = param_2;
    *(undefined **)(pcVar10 + 0x10) = param_3;
    *(long *)(pcVar10 + 0x18) = (long)iVar7;
    *(String *)(pcVar10 + 0x20) = SVar13;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_2);
    goto LAB_100668208;
  }
  if ((local_70 != (addrinfo *)0x0) && (psVar11 = local_70->ai_addr, psVar11 != (sockaddr *)0x0)) {
    if (local_70->ai_family == 0x1e) {
      uVar1 = *(undefined4 *)psVar11;
      uVar2 = *(undefined4 *)(psVar11->sa_data + 2);
      uVar12 = *(undefined8 *)(psVar11->sa_data + 6);
      uVar3 = *(undefined8 *)(psVar11 + 1);
      uVar4 = *(undefined4 *)(psVar11[1].sa_data + 6);
      param_3 = &DAT_100fd9178;
      FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
      _swift_allocObject();
      *(undefined4 *)(param_3 + 0x10) = uVar1;
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      *(undefined8 *)(param_3 + 0x18) = uVar12;
      *(undefined8 *)(param_3 + 0x20) = uVar3;
      *(undefined4 *)(param_3 + 0x28) = uVar4;
      *(char **)(param_3 + 0x30) = param_1;
      *(void **)(param_3 + 0x38) = param_2;
      _swift_bridgeObjectRetain(param_2);
      _freeaddrinfo(paVar5);
      param_3 = (undefined *)((ulong)param_3 | 0x4000000000000000);
      goto LAB_100668208;
    }
    if (local_70->ai_family == 2) {
      param_3 = &DAT_100fd9188;
      FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
      _swift_allocObject();
      uVar12 = *(undefined8 *)psVar11;
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(psVar11->sa_data + 6);
      *(undefined8 *)(param_3 + 0x10) = uVar12;
      *(char **)(param_3 + 0x20) = param_1;
      *(void **)(param_3 + 0x28) = param_2;
      _swift_bridgeObjectRetain(param_2);
      _freeaddrinfo(paVar5);
      goto LAB_100668208;
    }
  }
  FUN_100668fb8();
  _swift_allocError(&DAT_100ef2820,CVar9.unknown,0,0);
  *(undefined8 *)((long)CVar9.unknown + 8) = 0;
  *(undefined8 *)((long)CVar9.unknown + 0x10) = 0;
  *(undefined8 *)CVar9.unknown = 0;
  *(undefined1 *)((long)CVar9.unknown + 0x18) = 2;
  _swift_willThrow();
  if (local_70 != (addrinfo *)0x0) {
    _freeaddrinfo(local_70);
  }
LAB_100668208:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006682b0 | FUN_1006682b0 */

void FUN_1006682b0(void)

{
  undefined8 *unaff_x20;
  
  FUN_100666bcc(*unaff_x20);
  return;
}



/* Address: 0x1006682b8 | FUN_1006682b8 */

void FUN_1006682b8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1006689fc(*param_1,*param_2);
  return;
}



/* Address: 0x1006682c4 | FUN_1006682c4 */

void FUN_1006682c4(undefined8 param_1,Hasher param_2)

{
  size_t sVar1;
  Hasher HVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)((ulong)param_2.unknown >> 0x3e);
  if (uVar3 == 0) {
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(param_2.unknown[0x11],HVar2);
    Swift::Hasher::_combine(*(__uint16 *)(param_2.unknown + 0x12),HVar2);
    Swift::Hasher::_combine(*(__uint32 *)(param_2.unknown + 0x14),HVar2);
  }
  else {
    uVar4 = (ulong)param_2.unknown & 0x3fffffffffffffff;
    if (uVar3 == 1) {
      Swift::Hasher::_combine(2,param_2);
      Swift::Hasher::_combine(*(__uint8 *)(uVar4 + 0x11),param_2);
      Swift::Hasher::_combine(*(__uint16 *)(uVar4 + 0x12),param_2);
      Swift::Hasher::_combine(*(__uint32 *)(uVar4 + 0x14),param_2);
      Swift::Hasher::_combine(*(__uint32 *)(uVar4 + 0x28),param_2);
      local_90 = *(undefined8 *)(uVar4 + 0x18);
      uStack_88 = *(undefined8 *)(uVar4 + 0x20);
      HVar2.unknown = (undefined *)&uStack_80;
    }
    else {
      Swift::Hasher::_combine(0,param_2);
      Swift::Hasher::_combine(*(__uint8 *)(uVar4 + 0x11),param_2);
      uStack_58 = *(undefined8 *)(uVar4 + 0x4a);
      local_60 = *(undefined8 *)(uVar4 + 0x42);
      uStack_48 = *(undefined8 *)(uVar4 + 0x5a);
      uStack_50 = *(undefined8 *)(uVar4 + 0x52);
      uStack_38 = *(undefined8 *)(uVar4 + 0x6a);
      local_40 = *(undefined8 *)(uVar4 + 0x62);
      local_30 = *(undefined8 *)(uVar4 + 0x72);
      uStack_88 = *(undefined8 *)(uVar4 + 0x1a);
      local_90 = *(undefined8 *)(uVar4 + 0x12);
      uStack_78 = *(undefined8 *)(uVar4 + 0x2a);
      uStack_80 = *(undefined8 *)(uVar4 + 0x22);
      uStack_68 = *(undefined8 *)(uVar4 + 0x3a);
      local_70 = *(undefined8 *)(uVar4 + 0x32);
      sVar1 = _strnlen((char *)&local_90,0x68);
      HVar2.unknown = (undefined *)((long)&local_90 + sVar1);
    }
    Swift::Hasher::combine((UnsafeRawBufferPointer)&local_90,HVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006683f0 | FUN_1006683f0 */

void FUN_1006683f0(undefined8 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1006682c4(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100668434 | FUN_100668434 */

void FUN_100668434(void)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1006682c4(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100668478 | FUN_100668478 */

void FUN_100668478(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006682c4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100668480 | FUN_100668480 */

void FUN_100668480(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1006682c4(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006684c0 | FUN_1006684c0 */

bool FUN_1006684c0(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x3e);
  if (uVar1 == 0) {
    return (*(uint *)(param_1 + 0x14) & 0xf0) == 0xe0;
  }
  if (uVar1 == 1) {
    return *(char *)((param_1 & 0x3fffffffffffffff) + 0x18) == -1;
  }
  return false;
}



/* Address: 0x100668500 | FUN_100668500 */

uint FUN_100668500(code *param_1,undefined8 param_2,UTF8View param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index position;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  uint extraout_w8;
  long unaff_x21;
  Index after;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_3.unknown & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_4);
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_3.unknown >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar8 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar7 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar7 == uVar8) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
      }
      uVar6 = (ulong)position.cmsgPointer.unknown >> 0x10;
      if (uVar1 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100668704);
        (*pcVar2)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) != 0) {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          _Var3 = *(__uint8 *)((long)&local_70 + uVar6);
          goto joined_r0x000100668620;
        }
        UVar4.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
        }
        _Var3 = UVar4.unknown[uVar6];
        if (uVar7 == uVar8) goto LAB_100668624;
LAB_1006685d0:
        if ((param_4 >> 0x3c & 1) == 0) goto LAB_1006685d4;
LAB_100668644:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100668708);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_3);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_3);
joined_r0x000100668620:
        if (uVar7 != uVar8) goto LAB_1006685d0;
LAB_100668624:
        FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
        if ((param_4 >> 0x3c & 1) != 0) goto LAB_100668644;
LAB_1006685d4:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,_Var3);
      uVar7 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_4);
        uVar5 = extraout_w8;
        goto LAB_1006686d8;
      }
      if ((uVar7 & 1) != 0) {
        _swift_bridgeObjectRelease(param_4);
        uVar5 = 1;
        goto LAB_1006686d8;
      }
    } while (uVar1 << 2 != (ulong)after.cmsgPointer.unknown >> 0xe);
  }
  _swift_bridgeObjectRelease(param_4);
  uVar5 = 0;
LAB_1006686d8:
  return uVar5 & 1;
}



/* Address: 0x100668708 | FUN_100668708 */

void FUN_100668708(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006687ec);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1006244ac();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006687f0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006687f4);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20),(void *)(param_1 + 0x20),uVar5 << 3
           );
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006687f8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1006687f8 | FUN_1006687f8 */

void FUN_1006687f8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006688dc);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100624a28();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006688e0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006688e4);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006688e8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1006688e8 | FUN_1006688e8 */

void FUN_1006688e8(UTF8View param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  UnsafeMutableBufferPointer<__int8> into;
  ulong uVar3;
  _StringGuts _Var4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar3 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    uVar3 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,uVar3)) {
    lVar2 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar2 == 0) ||
       (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < (long)(lVar7 + uVar3))) {
      FUN_100624a28();
      uVar5 = *(ulong *)(lVar2 + 0x18) >> 1;
      lVar6 = lVar2;
    }
    _Var4.unknown = (undefined *)(uVar5 - *(long *)(lVar6 + 0x10));
    into.unknown = (undefined *)(lVar6 + *(long *)(lVar6 + 0x10) + 0x20);
    Swift::_StringGuts::_copyUTF8(into,_Var4);
    if (((uint)_Var4.unknown & 0xff) != 1) {
      _swift_bridgeObjectRelease(param_2);
      if ((long)into.unknown < (long)uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006689f4);
        (*pcVar1)();
      }
      if (0 < (long)into.unknown) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),(long)into.unknown)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006689f8);
          (*pcVar1)();
        }
        *(undefined **)(lVar6 + 0x10) = into.unknown + *(long *)(lVar6 + 0x10);
      }
      *unaff_x20 = lVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006689fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006689f0);
  (*pcVar1)();
}



/* Address: 0x1006689fc | FUN_1006689fc */

void FUN_1006689fc(ulong param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_1 >> 0x3e);
  if (uVar3 == 0) {
    if (((param_2 >> 0x3e == 0) && (*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11))) &&
       (*(short *)(param_1 + 0x12) == *(short *)(param_2 + 0x12))) {
      bVar1 = *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14);
      goto LAB_100668b6c;
    }
  }
  else if (uVar3 == 1) {
    if (param_2 >> 0x3e == 1) {
      param_1 = param_1 & 0x3fffffffffffffff;
      param_2 = param_2 & 0x3fffffffffffffff;
      if (((*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11)) &&
          (*(short *)(param_1 + 0x12) == *(short *)(param_2 + 0x12))) &&
         ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
          (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))))) {
        local_90 = *(long *)(param_1 + 0x18);
        lStack_88 = *(long *)(param_1 + 0x20);
        bVar1 = local_90 == *(long *)(param_2 + 0x18) && lStack_88 == *(long *)(param_2 + 0x20);
        goto LAB_100668b6c;
      }
    }
  }
  else if ((long)param_2 < -0x4000000000000000) {
    param_1 = param_1 & 0x3fffffffffffffff;
    param_2 = param_2 & 0x3fffffffffffffff;
    if (*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11)) {
      uStack_58 = *(undefined8 *)(param_1 + 0x4a);
      uStack_60 = *(undefined8 *)(param_1 + 0x42);
      uStack_48 = *(undefined8 *)(param_1 + 0x5a);
      local_50 = *(undefined8 *)(param_1 + 0x52);
      uStack_38 = *(undefined8 *)(param_1 + 0x6a);
      uStack_40 = *(undefined8 *)(param_1 + 0x62);
      local_30 = *(undefined8 *)(param_1 + 0x72);
      lStack_88 = *(long *)(param_1 + 0x1a);
      local_90 = *(long *)(param_1 + 0x12);
      uStack_78 = *(undefined8 *)(param_1 + 0x2a);
      uStack_80 = *(undefined8 *)(param_1 + 0x22);
      uStack_68 = *(undefined8 *)(param_1 + 0x3a);
      local_70 = *(undefined8 *)(param_1 + 0x32);
      uStack_d8 = *(undefined8 *)(param_2 + 0x4a);
      uStack_e0 = *(undefined8 *)(param_2 + 0x42);
      uStack_c8 = *(undefined8 *)(param_2 + 0x5a);
      local_d0 = *(undefined8 *)(param_2 + 0x52);
      uStack_b8 = *(undefined8 *)(param_2 + 0x6a);
      uStack_c0 = *(undefined8 *)(param_2 + 0x62);
      local_b0 = *(undefined8 *)(param_2 + 0x72);
      uStack_108 = *(undefined8 *)(param_2 + 0x1a);
      local_110 = *(undefined8 *)(param_2 + 0x12);
      uStack_f8 = *(undefined8 *)(param_2 + 0x2a);
      uStack_100 = *(undefined8 *)(param_2 + 0x22);
      uStack_e8 = *(undefined8 *)(param_2 + 0x3a);
      local_f0 = *(undefined8 *)(param_2 + 0x32);
      iVar2 = _strncmp((char *)&local_90,(char *)&local_110,0x68);
      bVar1 = iVar2 == 0;
      goto LAB_100668b6c;
    }
  }
  bVar1 = false;
LAB_100668b6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}



/* Address: 0x100668b98 | FUN_100668b98 */

bool FUN_100668b98(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if (((((undefined *)*param_1 == (undefined *)*param_2 &&
         (undefined *)param_1[1] == (undefined *)param_2[1]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*param_1,(undefined *)param_1[1],
                           (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) &&
      (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) {
    if (((undefined *)param_1[4] != (undefined *)param_2[4]) ||
       ((undefined *)param_1[5] != (undefined *)param_2[5])) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[4],(undefined *)param_1[5],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[4]);
      return bVar1;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100668c30 | FUN_100668c30 */

bool FUN_100668c30(_StringGuts param_1,_StringGuts param_2,long param_3,char param_4,
                  undefined1 *param_5,undefined *param_6,long param_7,char param_8)

{
  bool bVar1;
  
  if (param_4 == '\0') {
    if ((param_8 == '\0') &&
       (((param_1.unknown == param_5 && (param_2.unknown == param_6)) ||
        (bVar1 = Swift::_stringCompareWithSmolCheck
                           (param_1,param_2,(_StringComparisonResult)(__int8)param_5), bVar1)))) {
      return param_3 == param_7;
    }
  }
  else if (param_4 == '\x01') {
    if (param_8 == '\x01') {
      if ((param_1.unknown == param_5) && (param_2.unknown == param_6)) {
        return true;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_5);
      return bVar1;
    }
  }
  else if ((param_3 == 0 && param_2.unknown == (undefined *)0x0) &&
           param_1.unknown == (undefined *)0x0) {
    if ((param_8 == '\x02') &&
       ((param_7 == 0 && param_6 == (undefined *)0x0) && param_5 == (undefined1 *)0x0)) {
      return true;
    }
  }
  else if (((param_8 == '\x02') && (param_5 == &DAT_00000001)) &&
          (param_7 == 0 && param_6 == (undefined *)0x0)) {
    return true;
  }
  return false;
}



/* Address: 0x100668d24 | FUN_100668d24 */

/* WARNING: Removing unreachable block (ram,0x000100668e18) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100668d6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100668d24(undefined8 param_1,undefined8 param_2)

{
  _ArrayBuffer<undefined> _Var1;
  undefined *puVar2;
  UnsafePointer<__int8> cString;
  undefined4 uVar3;
  String SVar4;
  undefined4 local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  local_4c = uVar3;
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0x10;
  cString.unknown = _Var1.unknown + 0x20;
  *(undefined8 *)cString.unknown = 0;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  FUN_10060a728(2,&local_4c,cString.unknown,0x10);
  SVar4 = Swift::String::init(cString);
  _swift_bridgeObjectRelease(_Var1.unknown);
  puVar2 = &DAT_100fd9188;
  FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
  _swift_allocObject();
  *(int *)(puVar2 + 0x10) = (int)param_1;
  *(undefined4 *)(puVar2 + 0x14) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(String *)(puVar2 + 0x20) = SVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100668e40 | FUN_100668e40 */

/* WARNING: Removing unreachable block (ram,0x000100668f70) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100668e94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100668e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  _ArrayBuffer<undefined> _Var1;
  undefined *puVar2;
  UnsafePointer<__int8> cString;
  String SVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_80 = param_2;
  uStack_78 = param_3;
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0x2e;
  cString.unknown = _Var1.unknown + 0x20;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  *(undefined8 *)cString.unknown = 0;
  *(undefined8 *)(_Var1.unknown + 0x38) = 0;
  *(undefined8 *)(_Var1.unknown + 0x30) = 0;
  *(undefined8 *)(_Var1.unknown + 0x46) = 0;
  *(undefined8 *)(_Var1.unknown + 0x3e) = 0;
  FUN_10060a728(0x1e,&local_80,cString.unknown,0x2e);
  SVar3 = Swift::String::init(cString);
  _swift_bridgeObjectRelease(_Var1.unknown);
  puVar2 = &DAT_100fd9178;
  FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
  _swift_allocObject();
  puVar2[0x10] = (char)param_1;
  puVar2[0x11] = (char)((ulong)param_1 >> 8);
  *(short *)(puVar2 + 0x12) = (short)((ulong)param_1 >> 0x10);
  *(int *)(puVar2 + 0x14) = (int)((ulong)param_1 >> 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined4 *)(puVar2 + 0x28) = param_4;
  *(String *)(puVar2 + 0x30) = SVar3;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)puVar2 | 0x4000000000000000;
}



/* Address: 0x100668f98 | FUN_100668f98 */

void FUN_100668f98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Address: 0x100668fb8 | FUN_100668fb8 */

void FUN_100668fb8(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd9190 != 0) {
    return;
  }
  uVar1 = 0x100c6c140;
  _swift_getWitnessTable(0x100c6c140,&DAT_100ef2820);
  DAT_100fd9190 = uVar1;
  return;
}



/* Address: 0x100668ff8 | FUN_100668ff8 */

void FUN_100668ff8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100667ba4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100669014 | FUN_100669014 */

void FUN_100669014(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c1e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c1e8,&DAT_100ef2898);
  DAT_100fd91c8 = pTVar1;
  return;
}



/* Address: 0x100669054 | FUN_100669054 */

void FUN_100669054(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c290,&DAT_100ef2918);
  DAT_100fd91d0 = pTVar1;
  return;
}



/* Address: 0x100669094 | thunk_FUN_100669098 */

void thunk_FUN_100669098(void)

{
  TargetResilientWitness *pTVar1;
  
  if (DAT_100fd91d8 != (TargetResilientWitness *)0x0) {
    return;
  }
  pTVar1 = &TargetResilientWitness_100c6c180;
  _swift_getWitnessTable(&TargetResilientWitness_100c6c180,&DAT_100ef2820);
  DAT_100fd91d8 = pTVar1;
  return;
}



/* Address: 0x100669098 | FUN_100669098 */

void FUN_100669098(void)

{
  TargetResilientWitness *pTVar1;
  
  if (DAT_100fd91d8 != (TargetResilientWitness *)0x0) {
    return;
  }
  pTVar1 = &TargetResilientWitness_100c6c180;
  _swift_getWitnessTable(&TargetResilientWitness_100c6c180,&DAT_100ef2820);
  DAT_100fd91d8 = pTVar1;
  return;
}



/* Address: 0x1006690d8 | thunk_FUN_1006690dc */

void thunk_FUN_1006690dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c268,&DAT_100ef2898);
  DAT_100fd91e0 = pTVar1;
  return;
}



/* Address: 0x1006690dc | FUN_1006690dc */

void FUN_1006690dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c268,&DAT_100ef2898);
  DAT_100fd91e0 = pTVar1;
  return;
}



/* Address: 0x10066911c | thunk_FUN_100669120 */

void thunk_FUN_100669120(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c338,&DAT_100ef2918);
  DAT_100fd91e8 = pTVar1;
  return;
}



/* Address: 0x100669120 | FUN_100669120 */

void FUN_100669120(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c338,&DAT_100ef2918);
  DAT_100fd91e8 = pTVar1;
  return;
}



/* Address: 0x100669160 | thunk_FUN_100669164 */

void thunk_FUN_100669164(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c388;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c388,&DAT_100ef29b8);
  DAT_100fd91f0 = pTVar1;
  return;
}



/* Address: 0x100669164 | FUN_100669164 */

void FUN_100669164(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd91f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c388;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c388,&DAT_100ef29b8);
  DAT_100fd91f0 = pTVar1;
  return;
}



/* Address: 0x1006691a4 | FUN_1006691a4 */

void FUN_1006691a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 2) {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x1006691bc | FUN_1006691bc */

void FUN_1006691bc(undefined8 *param_1)

{
  FUN_1006691d0(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1006691d0 | FUN_1006691d0 */

void FUN_1006691d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 2) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1006691e8 | FUN_1006691e8 */

undefined8 * FUN_1006691e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1006691a4(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100669244 | FUN_100669244 */

undefined8 * FUN_100669244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_1006691a4(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_1006691d0(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x1006692b0 | FUN_1006692b0 */

undefined8 * FUN_1006692b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_1006691d0(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1006692fc | FUN_1006692fc */

uint FUN_1006692fc(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = (uint)*(byte *)(param_1 + 6);
  }
  return uVar1;
}



/* Address: 0x100669314 | FUN_100669314 */

void FUN_100669314(ulong *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 2;
  if (1 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_2 = 2;
    *param_1 = (ulong)uVar1;
  }
  *(char *)(param_1 + 3) = (char)param_2;
  return;
}



/* Address: 0x100669330 | FUN_100669330 */

undefined1  [16] FUN_100669330(void)

{
  return ZEXT816(0x100ef2820);
}



/* Address: 0x100669340 | FUN_100669340 */

undefined1  [16] FUN_100669340(void)

{
  return ZEXT816(0x100ef2898);
}



/* Address: 0x100669350 | FUN_100669350 */

void FUN_100669350(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100669378 | FUN_100669378 */

undefined8 * FUN_100669378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006693bc | FUN_1006693bc */

undefined8 * FUN_1006693bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100669438 | FUN_100669438 */

undefined8 * FUN_100669438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100669484 | FUN_100669484 */

undefined1  [16] FUN_100669484(void)

{
  return ZEXT816(0x100ef2918);
}



/* Address: 0x100669494 | FUN_100669494 */

ulong * FUN_100669494(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x1006694c4 | FUN_1006694c4 */

ulong * FUN_1006694c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_release(uVar2 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x100669500 | FUN_100669500 */

ulong * FUN_100669500(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x100669534 | FUN_100669534 */

undefined1  [16] FUN_100669534(void)

{
  return ZEXT816(0x100ef29b8);
}



/* Address: 0x100669544 | FUN_100669544 */

undefined1  [16] FUN_100669544(void)

{
  return ZEXT816(0x100ef29d8);
}



/* Address: 0x100669554 | FUN_100669554 */

undefined1  [16] FUN_100669554(void)

{
  return ZEXT816(0x100ef2a00);
}



/* Address: 0x100669564 | FUN_100669564 */

undefined1  [16] FUN_100669564(void)

{
  return ZEXT816(0x100ef2a28);
}



/* Address: 0x100669574 | FUN_100669574 */

void FUN_100669574(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  __uint8_t _Var4;
  undefined2 uVar5;
  addrinfo *paVar6;
  int iVar7;
  Index after;
  Index IVar8;
  ContiguousArray<__int8> CVar9;
  ContiguousArray<__int8> CVar10;
  undefined *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  sockaddr *psVar15;
  String SVar16;
  String SVar17;
  addrinfo *local_a0;
  addrinfo local_98;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x25;
  uVar12 = 0;
  puVar14 = param_2;
  FUN_10051c750(0x25,0xe100000000000000,param_1);
  if ((uVar12 & 0xff) == 1) {
LAB_100669608:
    FUN_100668fb8();
    _swift_allocError(&DAT_100ef2820,after.cmsgPointer.unknown,0,0);
    *(char **)after.cmsgPointer.unknown = param_1;
    *(undefined8 **)((long)after.cmsgPointer.unknown + 8) = param_2;
    *(ulong *)((long)after.cmsgPointer.unknown + 0x10) = 0;
    *(undefined1 *)((long)after.cmsgPointer.unknown + 0x18) = 1;
    _swift_willThrow();
  }
  else {
    SVar16.bridgeObject = param_2;
    SVar16.str = param_1;
    IVar8 = Swift::String::index(after,SVar16);
    pcVar13 = param_1;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puVar14;
    FUN_1000102ac(IVar8.cmsgPointer.unknown,param_1,param_2);
    _swift_bridgeObjectRelease();
    if (((ulong)IVar8.cmsgPointer.unknown ^ (ulong)pcVar13) < 0x4000) goto LAB_100669608;
    local_98.ai_next = (addrinfo *)0x0;
    local_98.ai_addrlen = 0;
    local_98._20_4_ = 0;
    local_98.ai_socktype = 0;
    local_98.ai_protocol = 0;
    local_98.ai_addr = (sockaddr *)0x0;
    local_98.ai_canonname = (char *)0x0;
    local_98.ai_flags = 4;
    local_98.ai_family = 0x1e;
    local_a0 = (addrinfo *)0x0;
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar17.bridgeObject = param_2;
    SVar17.str = param_1;
    CVar9 = Swift::String::get_utf8CString(SVar17);
    CVar10 = Swift::String::get_utf8CString(SVar16);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    iVar7 = _getaddrinfo(CVar9.unknown + 0x20,CVar10.unknown + 0x20,&local_98,&local_a0);
    _swift_release(CVar9.unknown);
    _swift_release();
    paVar6 = local_a0;
    if ((((iVar7 == 0) && (local_a0 != (addrinfo *)0x0)) &&
        (psVar15 = local_a0->ai_addr, psVar15 != (sockaddr *)0x0)) &&
       ((psVar15->sa_family == '\x1e' && (iVar7 = *(int *)(psVar15[1].sa_data + 6), iVar7 != 0)))) {
      uVar1 = *(undefined8 *)(psVar15->sa_data + 6);
      uVar2 = *(undefined8 *)(psVar15 + 1);
      uVar3 = *(undefined4 *)(psVar15->sa_data + 2);
      uVar5 = *(undefined2 *)psVar15->sa_data;
      _Var4 = psVar15->sa_len;
      puVar11 = &DAT_100fd9178;
      FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
      _swift_allocObject();
      puVar11[0x10] = _Var4;
      puVar11[0x11] = 0x1e;
      *(undefined2 *)(puVar11 + 0x12) = uVar5;
      *(undefined4 *)(puVar11 + 0x14) = uVar3;
      *(undefined8 *)(puVar11 + 0x18) = uVar1;
      *(undefined8 *)(puVar11 + 0x20) = uVar2;
      *(int *)(puVar11 + 0x28) = iVar7;
      *(char **)(puVar11 + 0x30) = param_1;
      *(undefined8 **)(puVar11 + 0x38) = param_2;
      _swift_bridgeObjectRetain(param_2);
      _freeaddrinfo(paVar6);
      goto LAB_100669648;
    }
    FUN_100668fb8();
    _swift_allocError(&DAT_100ef2820,CVar10.unknown,0,0);
    *(char **)CVar10.unknown = param_1;
    *(undefined8 **)((long)CVar10.unknown + 8) = param_2;
    *(ulong *)((long)CVar10.unknown + 0x10) = 0;
    *(undefined1 *)((long)CVar10.unknown + 0x18) = 1;
    _swift_willThrow();
    paVar6 = local_a0;
    if (local_a0 != (addrinfo *)0x0) {
      _swift_bridgeObjectRetain(param_2);
      _freeaddrinfo(paVar6);
      goto LAB_100669648;
    }
  }
  _swift_bridgeObjectRetain(param_2);
LAB_100669648:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100669804 | FUN_100669804 */

void FUN_100669804(void)

{
  FUN_100669818();
  return;
}



/* Address: 0x100669818 | FUN_100669818 */

void FUN_100669818(long param_1,long param_2,long *param_3)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (param_1 != 0) {
    (**(code **)(unaff_x20 + 0x18))(param_1,param_2 - param_1);
    if (unaff_x21 != 0) {
      *param_3 = unaff_x21;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669854);
  (*pcVar1)();
}



/* Address: 0x100669854 | FUN_100669854 */

void FUN_100669854(void)

{
  FUN_100668f98();
  return;
}



/* Address: 0x100669868 | FUN_100669868 */

void FUN_100669868(void)

{
  FUN_100669804();
  return;
}


