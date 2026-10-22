/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100619ee8 | FUN_100619ee8 */

/* WARNING: Removing unreachable block (ram,0x00010061a05c) */
/* WARNING: Removing unreachable block (ram,0x00010061a07c) */

void FUN_100619ee8(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((long)param_1 < lVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a028);
    (*pcVar2)();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a02c);
    (*pcVar2)();
  }
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a030);
    (*pcVar2)();
  }
  if (lVar3 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a040);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a044);
      (*pcVar2)();
    }
    FUN_10060e9a8(param_1);
    return;
  }
  if (lVar3 < 1) {
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a048);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a04c);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a050);
      (*pcVar2)();
    }
    FUN_10060e9a8(param_1);
    lVar1 = -lVar3;
    if (SBORROW8(0,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a054);
      (*pcVar2)();
    }
    FUN_100613ae4(lVar1);
    if (SCARRY8(lVar5,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a058);
      (*pcVar2)();
    }
    if (lVar5 + lVar1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a05c);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x18) = lVar4;
    *(long *)(unaff_x20 + 0x20) = lVar5 + lVar1;
  }
  else {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a034);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a038);
      (*pcVar2)();
    }
    FUN_10060e9a8(param_1);
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a03c);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    FUN_100611284((ulong)*(uint *)(unaff_x20 + 0xc) - lVar3);
    FUN_10061b390(lVar3,lVar4,lVar5);
    *(long *)(unaff_x20 + 0x18) = lVar3;
    *(long *)(unaff_x20 + 0x20) = lVar4;
  }
  return;
}



/* Address: 0x10061a09c | FUN_10061a09c */

/* WARNING: Removing unreachable block (ram,0x00010061a2c0) */
/* WARNING: Removing unreachable block (ram,0x00010061a2e0) */

void FUN_10061a09c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (param_1 < lVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a294);
    (*pcVar2)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a298);
    (*pcVar2)();
  }
  _Var3 = Swift::Collection::get_count();
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a29c);
    (*pcVar2)();
  }
  if (_Var3 == lVar1) {
    FUN_1006112c0(param_3,param_1,param_4,*(undefined8 *)(param_5 + 8));
    return;
  }
  _Var3 = Swift::Collection::get_count();
  if (_Var3 < lVar1) {
    FUN_1006112c0(param_3,param_1,param_4,*(undefined8 *)(param_5 + 8));
    _Var3 = Swift::Collection::get_count();
    if (SCARRY8(param_1,_Var3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2a0);
      (*pcVar2)();
    }
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2a8);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1 + _Var3,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    _Var3 = Swift::Collection::get_count();
    lVar4 = lVar1 - _Var3;
    if (SBORROW8(lVar1,_Var3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2b0);
      (*pcVar2)();
    }
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2b8);
      (*pcVar2)();
    }
    FUN_100611284((ulong)*(uint *)(unaff_x20 + 0xc) - lVar4);
    FUN_10061b390(lVar4,lVar5,lVar6);
    *(long *)(unaff_x20 + 0x18) = lVar4;
    *(long *)(unaff_x20 + 0x20) = lVar5;
  }
  else {
    _Var3 = Swift::Collection::get_count();
    if (SCARRY8(param_1,_Var3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2a4);
      (*pcVar2)();
    }
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2ac);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1 + _Var3,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    FUN_1006112c0(param_3,param_1,param_4,*(undefined8 *)(param_5 + 8));
    _Var3 = Swift::Collection::get_count();
    lVar4 = _Var3 - lVar1;
    if (SBORROW8(_Var3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2b4);
      (*pcVar2)();
    }
    FUN_100613ae4(lVar4);
    if (SCARRY8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2bc);
      (*pcVar2)();
    }
    if (lVar6 + lVar4 < lVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061a2c0);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x18) = lVar5;
    *(long *)(unaff_x20 + 0x20) = lVar6 + lVar4;
  }
  return;
}



/* Address: 0x10061a300 | FUN_10061a300 */

undefined1  [16] FUN_10061a300(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  pvVar5 = (void *)0xb8;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar5 = _malloc(0xb8);
  }
  else {
    _swift_coroFrameAlloc(0xb8,0xa15f);
  }
  *param_1 = pvVar5;
  *(long *)((long)pvVar5 + 0xa8) = param_3;
  *(undefined8 **)((long)pvVar5 + 0xb0) = unaff_x20;
  *(long *)((long)pvVar5 + 0xa0) = param_2;
  if (-1 < param_2) {
    iVar1 = *(int *)(unaff_x20 + 2);
    uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
    uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
    if (param_3 <= (long)(ulong)(iVar1 - (uint)CONCAT21(uVar3,uVar2))) {
      uVar6 = unaff_x20[1];
      *(undefined8 *)((long)pvVar5 + 0x50) = *unaff_x20;
      *(undefined8 *)((long)pvVar5 + 0x58) = uVar6;
      *(int *)((long)pvVar5 + 0x60) = iVar1;
      *(undefined2 *)((long)pvVar5 + 100) = uVar3;
      *(undefined1 *)((long)pvVar5 + 0x66) = uVar2;
      *(long *)((long)pvVar5 + 0x68) = param_2;
      *(long *)((long)pvVar5 + 0x70) = param_3;
      _swift_retain();
      auVar7._8_8_ = (long)pvVar5 + 0x50;
      auVar7._0_8_ = FUN_10061a3bc;
      return auVar7;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10061a3bc);
  (*pcVar4)();
}



/* Address: 0x10061a3bc | FUN_10061a3bc */

void FUN_10061a3bc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = param_1 + 10;
  if ((param_2 & 1) == 0) {
    puVar3 = param_1 + 5;
    param_1[6] = param_1[0xb];
    *puVar3 = *puVar1;
    param_1[8] = param_1[0xd];
    param_1[7] = param_1[0xc];
    param_1[9] = param_1[0xe];
    FUN_100619984(param_1[0x14],param_1[0x15],puVar3);
  }
  else {
    uVar2 = param_1[0x15];
    uVar4 = param_1[0x14];
    param_1[1] = param_1[0xb];
    *param_1 = *puVar1;
    param_1[3] = param_1[0xd];
    param_1[2] = param_1[0xc];
    param_1[4] = param_1[0xe];
    FUN_1006100e8(param_1,param_1 + 0xf);
    FUN_100619984(uVar4,uVar2,param_1);
    FUN_10060fd58(param_1);
    puVar3 = puVar1;
  }
  FUN_10060fd58(puVar3);
  _free(param_1);
  return;
}



/* Address: 0x10061a464 | FUN_10061a464 */

void FUN_10061a464(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_70 = param_4;
  lStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_2;
  local_50 = param_3;
  FUN_1006194e4(param_1,FUN_10061c1d8,auStack_80);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,0,1,param_4);
  }
  else {
    (**(code **)(lVar2 + 0x20))(param_7,auStack_80 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x10061a528 | FUN_10061a528 */

void FUN_10061a528(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  (*param_3)(param_1,lVar1,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_6);
  }
  return;
}



/* Address: 0x10061a5b0 | FUN_10061a5b0 */

undefined1  [16] FUN_10061a5b0(char param_1)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_58 [24];
  
  lVar8 = *unaff_x20;
  uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar2 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar8 + 0x18,auStack_58,0,0);
  lVar1 = unaff_x20[3];
  lVar5 = unaff_x20[4];
  if (SBORROW8(lVar5,lVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10061a660);
    (*pcVar4)();
  }
  if (lVar5 != lVar1) {
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(lVar8 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + lVar1 + lVar7)
          == param_1) {
        lVar5 = lVar7 + lVar1;
        if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10061a664);
          (*pcVar4)();
        }
        uVar6 = 0;
        goto LAB_10061a644;
      }
      lVar7 = lVar7 + 1;
    } while (lVar5 - lVar1 != lVar7);
  }
  lVar5 = 0;
  uVar6 = 1;
LAB_10061a644:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = lVar5;
  return auVar9;
}



/* Address: 0x10061a664 | FUN_10061a664 */

undefined1  [16] FUN_10061a664(char param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  
  lVar9 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar9 + 0x18,auStack_58,0,0);
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061a72c);
    (*pcVar5)();
  }
  if (uVar2 != uVar1) {
    lVar7 = ~uVar1 + uVar2;
    pcVar8 = (char *)(uVar2 + (ulong)uVar4 * 0x100 + (ulong)bVar3 + *(long *)(lVar9 + 0x18));
    do {
      pcVar8 = pcVar8 + -1;
      if ((long)(uVar2 - uVar1) <= lVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10061a728);
        (*pcVar5)();
      }
      if (*pcVar8 == param_1) {
        lVar9 = lVar7 + uVar1;
        if (SCARRY8(lVar7,uVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10061a730);
          (*pcVar5)();
        }
        uVar6 = 0;
        goto LAB_10061a70c;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != -1);
  }
  lVar9 = 0;
  uVar6 = 1;
LAB_10061a70c:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = lVar9;
  return auVar10;
}



/* Address: 0x10061a730 | FUN_10061a730 */

bool FUN_10061a730(char param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  undefined1 auStack_58 [24];
  
  lVar10 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar10 + 0x18,auStack_58,0,0);
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  if (!SBORROW8(uVar2,uVar1)) {
    if (uVar2 == uVar1) {
      bVar6 = false;
    }
    else {
      lVar9 = ~uVar1 + uVar2;
      pcVar8 = (char *)(*(long *)(lVar10 + 0x18) + (ulong)uVar4 * 0x100 + bVar3 + uVar1);
      do {
        bVar6 = *pcVar8 == param_1;
        bVar7 = lVar9 != 0;
        lVar9 = lVar9 + -1;
        pcVar8 = pcVar8 + 1;
      } while (!bVar6 && bVar7);
    }
    return bVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10061a7d4);
  (*pcVar5)();
}



/* Address: 0x10061a7d4 | FUN_10061a7d4 */

void FUN_10061a7d4(long *param_1,void *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  code *pcVar8;
  size_t sVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [24];
  
  lVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  sVar6 = uVar2 - lVar1;
  if (param_3 < (long)sVar6) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10061a8d8);
    (*pcVar8)();
  }
  lVar10 = *unaff_x20;
  lVar11 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  uVar4 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar3 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar10 + 0x18,auStack_88,0,0);
  if (!SBORROW8(uVar2,lVar1)) {
    uVar5 = (uint)CONCAT21(uVar4,uVar3);
    sVar9 = 0;
    if ((param_3 != 0) && (sVar6 != 0)) {
      _memcpy(param_2,(void *)(*(long *)(lVar10 + 0x18) + (ulong)uVar5 + lVar1),sVar6);
      sVar9 = sVar6;
    }
    if (uVar2 <= (int)lVar7 - uVar5 && sVar9 == sVar6) {
      FUN_1006100e8();
      *param_1 = lVar10;
      param_1[1] = lVar11;
      *(int *)(param_1 + 2) = (int)lVar7;
      *(undefined2 *)((long)param_1 + 0x14) = uVar4;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      param_1[3] = uVar2;
      param_1[4] = uVar2;
      param_1[5] = uVar2;
      param_1[6] = sVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10061a8e0);
    (*pcVar8)();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10061a8dc);
  (*pcVar8)();
}



/* Address: 0x10061a8e0 | FUN_10061a8e0 */

void FUN_10061a8e0(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061a8f8);
  (*pcVar1)();
}



/* Address: 0x10061a8f8 | FUN_10061a8f8 */

void FUN_10061a8f8(long *param_1)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_1,1)) {
    *param_1 = *param_1 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061a910);
  (*pcVar1)();
}



/* Address: 0x10061a910 | FUN_10061a910 */

void FUN_10061a910(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,param_3)) {
    *param_1 = *param_2 + param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061a928);
  (*pcVar1)();
}



/* Address: 0x10061a928 | FUN_10061a928 */

void FUN_10061a928(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10061c770(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x10061a958 | FUN_10061a958 */

long FUN_10061a958(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,*param_1)) {
    return *param_2 - *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061a970);
  (*pcVar1)();
}



/* Address: 0x10061a970 | FUN_10061a970 */

void FUN_10061a970(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Address: 0x10061a97c | FUN_10061a97c */

void FUN_10061a97c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x20);
  return;
}



/* Address: 0x10061a988 | FUN_10061a988 */

undefined1  [16] FUN_10061a988(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (undefined1)*param_2;
  FUN_100619640();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x10061a9bc | FUN_10061a9bc */

void FUN_10061a9bc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  
  lVar5 = *param_2;
  if (-1 < lVar5) {
    lVar6 = param_2[1];
    iVar1 = *(int *)(unaff_x20 + 2);
    uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
    uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
    if (lVar6 <= (long)(ulong)(iVar1 - (uint)CONCAT21(uVar3,uVar2))) {
      *param_1 = *unaff_x20;
      param_1[1] = unaff_x20[1];
      *(int *)(param_1 + 2) = iVar1;
      *(undefined2 *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)((long)param_1 + 0x16) = uVar2;
      param_1[3] = lVar5;
      param_1[4] = lVar6;
      _swift_retain();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10061aa0c);
  (*pcVar4)();
}



/* Address: 0x10061aa0c | FUN_10061aa0c */

void FUN_10061aa0c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(unaff_x20 + 0x18) <= lVar1) {
    *param_1 = *(long *)(unaff_x20 + 0x18);
    param_1[1] = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10061aa24);
  (*pcVar2)();
}



/* Address: 0x10061aa24 | FUN_10061aa24 */

bool FUN_10061aa24(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) == *(long *)(unaff_x20 + 0x20);
}



/* Address: 0x10061aa34 | FUN_10061aa34 */

void FUN_10061aa34(void)

{
  FUN_10061aa4c();
  return;
}



/* Address: 0x10061aa40 | FUN_10061aa40 */

void FUN_10061aa40(void)

{
  FUN_10061aa4c();
  return;
}



/* Address: 0x10061aa4c | FUN_10061aa4c */

void FUN_10061aa4c(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  uVar2 = *param_2;
  puVar1 = &local_60;
  (*param_5)(puVar1,uVar2,&local_60);
  *param_1 = (long)puVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Address: 0x10061aaa8 | FUN_10061aaa8 */

void FUN_10061aaa8(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,1)) {
    *param_1 = *param_2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061aac0);
  (*pcVar1)();
}



/* Address: 0x10061aac0 | FUN_10061aac0 */

void FUN_10061aac0(long *param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_1,1)) {
    *param_1 = *param_1 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061aad8);
  (*pcVar1)();
}



/* Address: 0x10061aad8 | FUN_10061aad8 */

void FUN_10061aad8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar1;
  uVar1 = unaff_x20[3];
  param_1[2] = unaff_x20[2];
  uVar2 = unaff_x20[3];
  param_1[4] = unaff_x20[4];
  param_1[3] = uVar2;
  param_1[5] = uVar1;
  return;
}



/* Address: 0x10061aaf8 | FUN_10061aaf8 */

uint FUN_10061aaf8(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  local_30 = unaff_x20[4];
  puVar1 = &local_50;
  FUN_100619434(puVar1,*param_1);
  return (uint)puVar1 & 1;
}



/* Address: 0x10061ab3c | FUN_10061ab3c */

undefined * FUN_10061ab3c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 local_98 [6];
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  local_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  puVar1 = (undefined *)(local_40 - local_48);
  if (puVar1 == (undefined *)0x0) {
    FUN_10060fd58(&local_60);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar3 = puVar1;
    FUN_10060f15c(puVar1,0);
    FUN_10061a7d4(local_98,puVar3 + 0x20,puVar1);
    FUN_10060fd58(&local_60);
    _swift_release(local_98[0]);
    if (local_68 != puVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061abe0);
      (*pcVar2)();
    }
  }
  return puVar3;
}



/* Address: 0x10061abe0 | FUN_10061abe0 */

undefined8 FUN_10061abe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  FUN_10061a7d4(&local_c8,param_2,param_3);
  uStack_58 = uStack_c0;
  local_60 = local_c8;
  uStack_48 = uStack_b0;
  uStack_50 = local_b8;
  uStack_38 = uStack_a0;
  local_40 = local_a8;
  FUN_10060fd58(&local_90);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  return local_98;
}



/* Address: 0x10061ac68 | FUN_10061ac68 */

void FUN_10061ac68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined1 local_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  puVar1 = &DAT_100fd4f20;
  local_80 = param_4;
  uStack_78 = param_2;
  local_70 = param_3;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  FUN_10061a464(param_1,FUN_1005bc29c,auStack_90,param_4,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_98);
  return;
}



/* Address: 0x10061ad00 | FUN_10061ad00 */

void FUN_10061ad00(undefined1 *param_1,undefined8 *param_2)

{
  FUN_1006196d4(*param_1,*param_2);
  return;
}



/* Address: 0x10061ad0c | FUN_10061ad0c */

undefined1  [16] FUN_10061ad0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = (undefined8 *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0x219b);
  }
  *param_1 = puVar1;
  uVar2 = *param_2;
  puVar1[5] = unaff_x20;
  puVar1[6] = uVar2;
  uVar3 = unaff_x20[4];
  uVar6 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = uVar3;
  FUN_100619640();
  *(char *)(puVar1 + 7) = (char)uVar2;
  auVar7._8_8_ = puVar1 + 7;
  auVar7._0_8_ = FUN_10061ad8c;
  return auVar7;
}



/* Address: 0x10061ad8c | FUN_10061ad8c */

void FUN_10061ad8c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  FUN_1006196d4(*(undefined1 *)((long)pvVar1 + 0x38),*(undefined8 *)((long)pvVar1 + 0x30));
  _free(pvVar1);
  return;
}



/* Address: 0x10061adb8 | FUN_10061adb8 */

void FUN_10061adb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_1[1];
  local_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  local_20 = param_1[4];
  FUN_100619984(*param_2,param_2[1],&local_40);
  FUN_10060fd58(&local_40);
  return;
}



/* Address: 0x10061adf4 | FUN_10061adf4 */

undefined1  [16] FUN_10061adf4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  void *pvVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  pvVar7 = (void *)0xb8;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar7 = _malloc(0xb8);
  }
  else {
    _swift_coroFrameAlloc(0xb8,0xe798);
  }
  *param_1 = pvVar7;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *(undefined8 **)((long)pvVar7 + 0xa0) = unaff_x20;
  *(long *)((long)pvVar7 + 0xa8) = lVar1;
  *(long *)((long)pvVar7 + 0xb0) = lVar2;
  if (-1 < lVar1) {
    iVar3 = *(int *)(unaff_x20 + 2);
    uVar5 = *(undefined2 *)((long)unaff_x20 + 0x14);
    uVar4 = *(undefined1 *)((long)unaff_x20 + 0x16);
    if (lVar2 <= (long)(ulong)(iVar3 - (uint)CONCAT21(uVar5,uVar4))) {
      uVar8 = unaff_x20[1];
      *(undefined8 *)((long)pvVar7 + 0x50) = *unaff_x20;
      *(undefined8 *)((long)pvVar7 + 0x58) = uVar8;
      *(int *)((long)pvVar7 + 0x60) = iVar3;
      *(undefined2 *)((long)pvVar7 + 100) = uVar5;
      *(undefined1 *)((long)pvVar7 + 0x66) = uVar4;
      *(long *)((long)pvVar7 + 0x68) = lVar1;
      *(long *)((long)pvVar7 + 0x70) = lVar2;
      _swift_retain();
      auVar9._8_8_ = (long)pvVar7 + 0x50;
      auVar9._0_8_ = FUN_10061aea8;
      return auVar9;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10061aea8);
  (*pcVar6)();
}



/* Address: 0x10061aea8 | FUN_10061aea8 */

void FUN_10061aea8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = param_1 + 10;
  if ((param_2 & 1) == 0) {
    puVar4 = param_1 + 5;
    param_1[6] = param_1[0xb];
    *puVar4 = *puVar1;
    param_1[8] = param_1[0xd];
    param_1[7] = param_1[0xc];
    param_1[9] = param_1[0xe];
    FUN_100619984(param_1[0x15],param_1[0x16],puVar4);
  }
  else {
    uVar2 = param_1[0x15];
    uVar3 = param_1[0x16];
    param_1[1] = param_1[0xb];
    *param_1 = *puVar1;
    param_1[3] = param_1[0xd];
    param_1[2] = param_1[0xc];
    param_1[4] = param_1[0xe];
    FUN_1006100e8(param_1,param_1 + 0xf);
    FUN_100619984(uVar2,uVar3,param_1);
    FUN_10060fd58(param_1);
    puVar4 = puVar1;
  }
  FUN_10060fd58(puVar4);
  _free(param_1);
  return;
}



/* Address: 0x10061af50 | FUN_10061af50 */

void FUN_10061af50(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10061af78();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10061af78 | FUN_10061af78 */

long FUN_10061af78(code *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_78 [24];
  undefined1 local_51;
  
  lVar7 = unaff_x20[3];
  lVar10 = unaff_x20[4];
  if (lVar7 < lVar10) {
    do {
      while( true ) {
        lVar1 = unaff_x20[4];
        if (lVar7 < unaff_x20[3] || lVar1 <= lVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10061b104);
          (*pcVar4)();
        }
        uVar12 = (ulong)*(uint *)(unaff_x20 + 1);
        if (lVar7 < (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10061b108);
          (*pcVar4)();
        }
        uVar13 = (ulong)(*(int *)((long)unaff_x20 + 0xc) - *(uint *)(unaff_x20 + 1));
        if ((long)uVar13 <= (long)(lVar7 - uVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10061b10c);
          (*pcVar4)();
        }
        lVar8 = *unaff_x20;
        uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
        uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
        _swift_beginAccess(lVar8 + 0x18,auStack_78,0,0);
        uVar9 = (ulong)CONCAT21(uVar3,uVar2);
        local_51 = *(undefined1 *)(*(long *)(lVar8 + 0x18) + uVar9 + lVar7);
        puVar5 = &local_51;
        (*param_1)();
        if (unaff_x21 != 0) {
          return lVar7;
        }
        if (((ulong)puVar5 & 1) == 0) break;
        lVar6 = lVar10;
        do {
          lVar11 = lVar6 + -1;
          if (lVar11 <= lVar7) {
            return lVar7;
          }
          if (lVar1 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10061b110);
            (*pcVar4)();
          }
          if ((long)uVar13 <= (long)(~uVar12 + lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10061b114);
            (*pcVar4)();
          }
          local_51 = *(undefined1 *)(*(long *)(lVar8 + 0x18) + uVar9 + lVar6 + -1);
          puVar5 = &local_51;
          (*param_1)();
          lVar6 = lVar11;
        } while (((ulong)puVar5 & 1) != 0);
        if (lVar7 != lVar11) {
          lVar10 = *(long *)(lVar8 + 0x18) + uVar9;
          uVar2 = *(undefined1 *)(lVar10 + lVar7);
          FUN_1006196d4(*(undefined1 *)(lVar10 + lVar11),lVar7);
          FUN_1006196d4(uVar2,lVar11);
        }
        lVar7 = lVar7 + 1;
        lVar10 = lVar11;
        if (lVar11 <= lVar7) {
          return lVar7;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar10);
  }
  return lVar7;
}



/* Address: 0x10061b114 | FUN_10061b114 */

void FUN_10061b114(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *param_2;
  if (lVar2 == lVar1) {
    return;
  }
  FUN_100619640(lVar2);
  FUN_100619640(lVar1);
  FUN_1006196d4();
  FUN_1006196d4(lVar2,lVar1);
  return;
}



/* Address: 0x10061b1c0 | FUN_10061b1c0 */

void FUN_10061b1c0(void)

{
  (extension_Swift)::Swift::MutableCollection::_withContiguousMutableStorageIfAvailable();
  return;
}



/* Address: 0x10061b1e0 | FUN_10061b1e0 */

void FUN_10061b1e0(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_10061c7c4(&local_48);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[4] = local_28;
  return;
}



/* Address: 0x10061b220 | FUN_10061b220 */

void FUN_10061b220(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x18);
  lVar1 = param_1 - lVar3;
  if (SBORROW8(param_1,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b260);
    (*pcVar2)();
  }
  if (0 < lVar1) {
    uVar4 = (ulong)(*(int *)(unaff_x20 + 0x10) -
                   (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),
                                  *(undefined1 *)(unaff_x20 + 0x16)));
    if (!SCARRY8(uVar4,lVar1)) {
      FUN_100611328(uVar4 + lVar1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b264);
    (*pcVar2)();
  }
  return;
}



/* Address: 0x10061b264 | FUN_10061b264 */

void FUN_10061b264(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = unaff_x20[4];
  local_39 = param_1;
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061b334);
    (*pcVar3)();
  }
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061b338);
    (*pcVar3)();
  }
  uVar1 = (uint)uVar6 + 1;
  if (0xfffffffe < (uint)uVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061b33c);
    (*pcVar3)();
  }
  uVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) {
    iVar2 = 0;
    if ((uint)unaff_x20[2] <= uVar1) {
      iVar2 = uVar1 - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar2,uVar4 & 1);
  }
  FUN_100612380(1,uVar6);
  FUN_10061258c(&local_39,&local_38,uVar6);
  if ((long)unaff_x20[3] <= (long)(uVar6 + 1)) {
    unaff_x20[4] = uVar6 + 1;
    FUN_100611284();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10061b340);
  (*pcVar3)();
}



/* Address: 0x10061b344 | FUN_10061b344 */

void FUN_10061b344(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_1006112c0(param_1,lVar2,param_2,param_3);
  if (SCARRY8(lVar2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b38c);
    (*pcVar1)();
  }
  if (*(long *)(unaff_x20 + 0x18) <= lVar2 + param_1) {
    *(long *)(unaff_x20 + 0x20) = lVar2 + param_1;
    FUN_100611284();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b390);
  (*pcVar1)();
}



/* Address: 0x10061b390 | FUN_10061b390 */

undefined1  [16] FUN_10061b390(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b3dc);
    (*pcVar1)();
  }
  if (SBORROW8(param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b3e0);
    (*pcVar1)();
  }
  param_1 = -param_1;
  if ((0 < param_2 - param_3) || (lVar2 = param_2, param_2 - param_3 <= param_1)) {
    lVar2 = param_3 + param_1;
    if (SCARRY8(param_3,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b3e4);
      (*pcVar1)();
    }
    if ((lVar2 < param_2) || (param_3 < lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b3e8);
      (*pcVar1)();
    }
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Address: 0x10061b3e8 | FUN_10061b3e8 */

void FUN_10061b3e8(code *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  lVar8 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar8 + 0x18,auStack_78,0,0);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061b4cc);
    (*pcVar5)();
  }
  if (lVar2 != lVar1) {
    lVar7 = 0;
    lVar8 = *(long *)(lVar8 + 0x18);
    do {
      uVar6 = (ulong)*(byte *)(lVar8 + (ulong)uVar4 * 0x100 + (ulong)bVar3 + lVar1 + lVar7);
      (*param_1)();
      if (unaff_x21 != 0) {
        return;
      }
      if ((uVar6 & 1) != 0) {
        if (!SCARRY8(lVar7,lVar1)) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10061b4d0);
        (*pcVar5)();
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 - lVar1 != lVar7);
  }
  return;
}



/* Address: 0x10061b4d0 | FUN_10061b4d0 */

void FUN_10061b4d0(code *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 auStack_68 [24];
  
  lVar7 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar7 + 0x18,auStack_68,0,0);
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061b5c4);
    (*pcVar5)();
  }
  if (uVar2 != uVar1) {
    lVar8 = ~uVar1 + uVar2;
    pbVar9 = (byte *)(uVar2 + (ulong)uVar4 * 0x100 + (ulong)bVar3 + *(long *)(lVar7 + 0x18));
    do {
      pbVar9 = pbVar9 + -1;
      if ((long)(uVar2 - uVar1) <= lVar8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10061b5c0);
        (*pcVar5)();
      }
      uVar6 = (ulong)*pbVar9;
      (*param_1)();
      if (unaff_x21 != 0) {
        return;
      }
      if ((uVar6 & 1) != 0) {
        if (!SCARRY8(lVar8,uVar1)) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10061b5c8);
        (*pcVar5)();
      }
      lVar8 = lVar8 + -1;
    } while (lVar8 != -1);
  }
  return;
}



/* Address: 0x10061b5c8 | FUN_10061b5c8 */

void FUN_10061b5c8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_10061a09c(*param_1,param_1[1],param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010061b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x10061b618 | FUN_10061b618 */

void FUN_10061b618(undefined1 *param_1)

{
  FUN_10061b620(*param_1);
  return;
}



/* Address: 0x10061b620 | FUN_10061b620 */

void FUN_10061b620(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  ulong local_48;
  
  FUN_10061c7c4(&local_68);
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = lStack_50;
  param_1[2] = local_58;
  param_1[4] = local_48;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b6bc);
      (*pcVar2)();
    }
    if ((long)local_48 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b6c0);
      (*pcVar2)();
    }
    if (local_48 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b6c4);
      (*pcVar2)();
    }
    FUN_10060e824(param_3,param_2,local_48);
    lVar1 = local_48 + (param_3 & 0xffffffff);
    if (lVar1 < lStack_50) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061b6c8);
      (*pcVar2)();
    }
    param_1[3] = lStack_50;
    param_1[4] = lVar1;
    FUN_100611284();
  }
  return;
}



/* Address: 0x10061b6c8 | FUN_10061b6c8 */

void FUN_10061b6c8(undefined1 *param_1)

{
  FUN_10061b264(*param_1);
  return;
}



/* Address: 0x10061b6d0 | FUN_10061b6d0 */

void FUN_10061b6d0(undefined8 param_1,long param_2)

{
  FUN_10061b344();
                    /* WARNING: Could not recover jumptable at 0x00010061b708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return;
}



/* Address: 0x10061b70c | FUN_10061b70c */

void FUN_10061b70c(undefined1 *param_1,undefined8 *param_2)

{
  FUN_100619d08(*param_2,*param_2,*param_1);
  return;
}



/* Address: 0x10061b71c | FUN_10061b71c */

void FUN_10061b71c(undefined1 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (*(long *)(unaff_x20 + 0x18) == *(long *)(unaff_x20 + 0x20)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b7a8);
    (*pcVar1)();
  }
  lVar3 = *param_2;
  lVar2 = lVar3;
  FUN_100619640();
  if (!SCARRY8(lVar3,1)) {
    if (lVar3 <= lVar3 + 1) {
      FUN_100619ee8(lVar3);
      *param_1 = (char)lVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b7b0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061b7ac);
  (*pcVar1)();
}



/* Address: 0x10061b7b0 | FUN_10061b7b0 */

void FUN_10061b7b0(undefined8 *param_1)

{
  FUN_100619ee8(*param_1,param_1[1]);
  return;
}



/* Address: 0x10061b7bc | FUN_10061b7bc */

void FUN_10061b7bc(undefined2 *param_1,undefined2 param_2)

{
  FUN_10061b7e0();
  *param_1 = param_2;
  return;
}



/* Address: 0x10061b7e0 | FUN_10061b7e0 */

undefined1 FUN_10061b7e0(void)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_58 [24];
  
  lVar7 = unaff_x20[4];
  lVar5 = lVar7 + -1;
  if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8bc);
    (*pcVar6)();
  }
  if (lVar5 < unaff_x20[3]) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8c0);
    (*pcVar6)();
  }
  if (lVar7 <= lVar5) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8c4);
    (*pcVar6)();
  }
  uVar1 = *(uint *)(unaff_x20 + 1);
  if ((unaff_x20[3] == lVar7 || lVar5 < (long)(ulong)uVar1) ||
      (long)(ulong)(*(int *)((long)unaff_x20 + 0xc) - uVar1) <= (long)(lVar5 - (ulong)uVar1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8c8);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar2 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar8 + 0x18,auStack_58,0,0);
  lVar7 = unaff_x20[4] + -1;
  if (SBORROW8(unaff_x20[4],1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8cc);
    (*pcVar6)();
  }
  if (lVar7 < unaff_x20[3]) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8d0);
    (*pcVar6)();
  }
  if (unaff_x20[3] < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8d4);
    (*pcVar6)();
  }
  if (lVar7 <= (long)(ulong)((int)unaff_x20[2] -
                            (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                                           *(undefined1 *)((long)unaff_x20 + 0x16)))) {
    uVar3 = *(undefined1 *)(*(long *)(lVar8 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar2 + lVar5);
    unaff_x20[4] = lVar7;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b8d8);
  (*pcVar6)();
}



/* Address: 0x10061b8d8 | thunk_FUN_10061b8dc */

undefined8 thunk_FUN_10061b8dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar5 = -param_1;
  if (SBORROW8(0,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b954);
    (*pcVar6)();
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = lVar2 - lVar3;
  if (SBORROW8(lVar2,lVar3)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b958);
    (*pcVar6)();
  }
  if ((long)uVar5 < 1) {
    if (0 < (long)uVar4 || (long)uVar4 <= (long)uVar5) goto LAB_10061b914;
  }
  else if (((long)uVar4 < 0) || (uVar5 <= uVar4)) {
LAB_10061b914:
    lVar1 = lVar3 + uVar5;
    if (SCARRY8(lVar3,uVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b95c);
      (*pcVar6)();
    }
    if (lVar1 < lVar2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b960);
      (*pcVar6)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b964);
      (*pcVar6)();
    }
    if (lVar1 <= (long)(ulong)(*(int *)(unaff_x20 + 0x10) -
                              (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),
                                             *(undefined1 *)(unaff_x20 + 0x16)))) {
      *(long *)(unaff_x20 + 0x18) = lVar2;
      *(long *)(unaff_x20 + 0x20) = lVar1;
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b968);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b908);
  (*pcVar6)();
}



/* Address: 0x10061b8dc | FUN_10061b8dc */

undefined8 FUN_10061b8dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar5 = -param_1;
  if (SBORROW8(0,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b954);
    (*pcVar6)();
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = lVar2 - lVar3;
  if (SBORROW8(lVar2,lVar3)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b958);
    (*pcVar6)();
  }
  if ((long)uVar5 < 1) {
    if (0 < (long)uVar4 || (long)uVar4 <= (long)uVar5) goto LAB_10061b914;
  }
  else if (((long)uVar4 < 0) || (uVar5 <= uVar4)) {
LAB_10061b914:
    lVar1 = lVar3 + uVar5;
    if (SCARRY8(lVar3,uVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b95c);
      (*pcVar6)();
    }
    if (lVar1 < lVar2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b960);
      (*pcVar6)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b964);
      (*pcVar6)();
    }
    if (lVar1 <= (long)(ulong)(*(int *)(unaff_x20 + 0x10) -
                              (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),
                                             *(undefined1 *)(unaff_x20 + 0x16)))) {
      *(long *)(unaff_x20 + 0x18) = lVar2;
      *(long *)(unaff_x20 + 0x20) = lVar1;
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b968);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10061b908);
  (*pcVar6)();
}



/* Address: 0x10061b968 | FUN_10061b968 */

void FUN_10061b968(undefined1 *param_1,undefined1 param_2)

{
  FUN_10061b98c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10061b98c | FUN_10061b98c */

undefined1 FUN_10061b98c(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  code *pcVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20[3];
  if (lVar2 == unaff_x20[4]) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba5c);
    (*pcVar7)();
  }
  if (unaff_x20[4] <= lVar2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba60);
    (*pcVar7)();
  }
  uVar3 = *(uint *)(unaff_x20 + 1);
  if (lVar2 < (long)(ulong)uVar3) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba64);
    (*pcVar7)();
  }
  if ((long)(ulong)(*(int *)((long)unaff_x20 + 0xc) - uVar3) <= (long)(lVar2 - (ulong)uVar3)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba68);
    (*pcVar7)();
  }
  lVar9 = *unaff_x20;
  uVar6 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar4 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar9 + 0x18,auStack_58,0,0);
  lVar1 = unaff_x20[3] + 1;
  if (SCARRY8(unaff_x20[3],1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba6c);
    (*pcVar7)();
  }
  lVar8 = unaff_x20[4];
  if (lVar8 < lVar1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba70);
    (*pcVar7)();
  }
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba74);
    (*pcVar7)();
  }
  if (lVar8 <= (long)(ulong)((int)unaff_x20[2] -
                            (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                                           *(undefined1 *)((long)unaff_x20 + 0x16)))) {
    uVar5 = *(undefined1 *)(*(long *)(lVar9 + 0x18) + (ulong)uVar6 * 0x100 + (ulong)bVar4 + lVar2);
    unaff_x20[3] = lVar1;
    unaff_x20[4] = lVar8;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10061ba78);
  (*pcVar7)();
}



/* Address: 0x10061ba78 | thunk_FUN_10061ba7c */

void thunk_FUN_10061ba7c(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bad4);
      (*pcVar4)();
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (SBORROW8(lVar3,lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bad8);
      (*pcVar4)();
    }
    if ((ulong)(lVar3 - lVar2) < param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061baec);
      (*pcVar4)();
    }
    lVar1 = lVar2 + param_1;
    if (SCARRY8(lVar2,param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061badc);
      (*pcVar4)();
    }
    if (lVar3 < lVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae0);
      (*pcVar4)();
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae4);
      (*pcVar4)();
    }
    if ((long)(ulong)(*(int *)(unaff_x20 + 0x10) -
                     (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),
                                    *(undefined1 *)(unaff_x20 + 0x16))) < lVar3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae8);
      (*pcVar4)();
    }
    *(long *)(unaff_x20 + 0x18) = lVar1;
    *(long *)(unaff_x20 + 0x20) = lVar3;
  }
  return;
}



/* Address: 0x10061ba7c | FUN_10061ba7c */

void FUN_10061ba7c(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bad4);
      (*pcVar4)();
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (SBORROW8(lVar3,lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bad8);
      (*pcVar4)();
    }
    if ((ulong)(lVar3 - lVar2) < param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061baec);
      (*pcVar4)();
    }
    lVar1 = lVar2 + param_1;
    if (SCARRY8(lVar2,param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061badc);
      (*pcVar4)();
    }
    if (lVar3 < lVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae0);
      (*pcVar4)();
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae4);
      (*pcVar4)();
    }
    if ((long)(ulong)(*(int *)(unaff_x20 + 0x10) -
                     (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),
                                    *(undefined1 *)(unaff_x20 + 0x16))) < lVar3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10061bae8);
      (*pcVar4)();
    }
    *(long *)(unaff_x20 + 0x18) = lVar1;
    *(long *)(unaff_x20 + 0x20) = lVar3;
  }
  return;
}


