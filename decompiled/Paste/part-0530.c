/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100611d74 | thunk_FUN_100611d78 */

void thunk_FUN_100611d78(ulong param_1)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d8c);
    (*pcVar1)();
  }
  if (param_1 >> 0x20 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d90);
  (*pcVar1)();
}



/* Address: 0x100611d78 | FUN_100611d78 */

void FUN_100611d78(ulong param_1)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d8c);
    (*pcVar1)();
  }
  if (param_1 >> 0x20 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d90);
  (*pcVar1)();
}



/* Address: 0x100611d90 | FUN_100611d90 */

void FUN_100611d90(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x100611d98 | FUN_100611d98 */

void FUN_100611d98(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0xc) = param_1;
  return;
}



/* Address: 0x100611da0 | FUN_100611da0 */

undefined1  [16] FUN_100611da0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xc;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100611db0 | FUN_100611db0 */

ulong FUN_100611db0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 & 0xffffffffffffff;
}



/* Address: 0x100611db8 | FUN_100611db8 */

void FUN_100611db8(undefined8 param_1)

{
  long unaff_x20;
  
  *(int *)(unaff_x20 + 0x10) = (int)param_1;
  *(short *)(unaff_x20 + 0x14) = (short)((ulong)param_1 >> 0x20);
  *(char *)(unaff_x20 + 0x16) = (char)((ulong)param_1 >> 0x30);
  return;
}



/* Address: 0x100611dd0 | FUN_100611dd0 */

undefined4 FUN_100611dd0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  return *(undefined4 *)(unaff_x20 + 0x10);
}



/* Address: 0x100611e00 | FUN_100611e00 */

void FUN_100611e00(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x100611e3c | FUN_100611e3c */

undefined8 FUN_100611e3c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x18);
}



/* Address: 0x100611e6c | FUN_100611e6c */

void FUN_100611e6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x100611ea8 | FUN_100611ea8 */

undefined1  [16] FUN_100611ea8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x18,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100611ed8 | FUN_100611ed8 */

undefined8 FUN_100611ed8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x20);
}



/* Address: 0x100611ee4 | FUN_100611ee4 */

void FUN_100611ee4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined4 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Address: 0x100611f4c | FUN_100611f4c */

void FUN_100611f4c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Address: 0x100611f64 | FUN_100611f64 */

void FUN_100611f64(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,0,0);
  (*pcVar1)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100611fa8 | FUN_100611fa8 */

void FUN_100611fa8(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,0,0);
  (*pcVar1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100611ff8 | FUN_100611ff8 */

void FUN_100611ff8(ulong param_1,code *param_2)

{
  code *pcVar1;
  
  param_1 = param_1 & 0xffffffff;
  (*param_2)();
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100612018);
  (*pcVar1)();
}



/* Address: 0x100612018 | FUN_100612018 */

void FUN_100612018(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  FUN_10061204c(*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10061204c | FUN_10061204c */

void FUN_10061204c(int param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1 - 1U | param_1 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar4 = uVar1 + 1;
    if (uVar1 == 0xffffffff) {
      uVar4 = 0xffffffff;
    }
  }
  lVar3 = *unaff_x20;
  pcVar5 = (code *)unaff_x20[4];
  uVar2 = (ulong)uVar4;
  (*pcVar5)();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006120e4);
    (*pcVar5)();
  }
  lVar6 = unaff_x20[7];
  _swift_allocObject(lVar3,0x40,7);
  *(uint *)(lVar3 + 0x10) = uVar4;
  *(ulong *)(lVar3 + 0x18) = uVar2;
  *(code **)(lVar3 + 0x20) = pcVar5;
  lVar7 = unaff_x20[5];
  *(long *)(lVar3 + 0x30) = unaff_x20[6];
  *(long *)(lVar3 + 0x28) = lVar7;
  *(long *)(lVar3 + 0x38) = lVar6;
  return;
}



/* Address: 0x1006120e4 | FUN_1006120e4 */

long FUN_1006120e4(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long unaff_x20;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_10061204c();
  pcVar5 = *(code **)(unaff_x20 + 0x38);
  _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_70,0,0);
  uVar2 = (uint)param_1;
  uVar4 = (uint)(param_1 >> 0x20);
  uVar1 = (ulong)(uVar4 - uVar2);
  if (uVar4 < uVar2) {
    uVar1 = -(ulong)(uVar2 - uVar4);
  }
  (*pcVar5)(uVar3,*(long *)(unaff_x20 + 0x18) + (param_1 & 0xffffffff),uVar1);
  return param_2;
}



/* Address: 0x10061217c | FUN_10061217c */

void FUN_10061217c(int param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    iVar3 = 1;
  }
  else {
    uVar1 = param_1 - 1U | param_1 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    iVar3 = uVar1 + 1;
    if (uVar1 == 0xffffffff) {
      iVar3 = -1;
    }
  }
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,1,0);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_60,1,0);
  (*pcVar4)(lVar2,*(undefined4 *)(unaff_x20 + 0x10),iVar3);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100612220);
    (*pcVar4)();
  }
  *(long *)(unaff_x20 + 0x18) = lVar2;
  *(int *)(unaff_x20 + 0x10) = iVar3;
  return;
}



/* Address: 0x100612220 | thunk_FUN_100613fa8 */

void thunk_FUN_100613fa8(void)

{
  FUN_100613fa8();
  return;
}



/* Address: 0x100612224 | FUN_100612224 */

void FUN_100612224(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if ((param_2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(unaff_x20 + 1);
  }
  uVar2 = (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                         *(undefined1 *)((long)unaff_x20 + 0x16));
  uVar1 = uVar2 + uVar5;
  if (CARRY4(uVar2,uVar5)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100612348);
    (*pcVar6)();
  }
  uVar2 = uVar1 + (uint)param_1;
  if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10061234c);
    (*pcVar6)();
  }
  if (*(uint *)(unaff_x20 + 2) <= uVar2) {
    uVar2 = *(uint *)(unaff_x20 + 2);
  }
  if (uVar1 <= uVar2) {
    lVar3 = *unaff_x20;
    FUN_10061204c();
    pcVar6 = *(code **)(lVar3 + 0x38);
    _swift_beginAccess(param_1 + 0x18,auStack_68,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _swift_beginAccess(lVar3 + 0x18,auStack_80,0,0);
    (*pcVar6)(uVar4,*(long *)(lVar3 + 0x18) + (ulong)uVar1,uVar2 - uVar1);
    _swift_release(lVar3);
    *unaff_x20 = param_1;
    if (*(uint *)(unaff_x20 + 1) < uVar5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100612354);
      (*pcVar6)();
    }
    *(uint *)(unaff_x20 + 1) = *(uint *)(unaff_x20 + 1) - uVar5;
    if (uVar5 <= *(uint *)((long)unaff_x20 + 0xc)) {
      *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) - uVar5;
      _swift_beginAccess(param_1 + 0x10,auStack_98,0,0);
      *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
      *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100612358);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100612350);
  (*pcVar6)();
}



/* Address: 0x100612358 | FUN_100612358 */

void FUN_100612358(uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  long unaff_x20;
  
  uVar1 = *(int *)(unaff_x20 + 0x10) -
          (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),*(undefined1 *)(unaff_x20 + 0x16));
  if (!CARRY4(uVar1,param_1)) {
    FUN_100612224(uVar1 + param_1,param_2 & 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100612380);
  (*pcVar2)();
}



/* Address: 0x100612380 | FUN_100612380 */

void FUN_100612380(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar9 = *(undefined1 *)((long)unaff_x20 + 0x16);
  uVar3 = (uint)CONCAT21(uVar8,uVar9);
  if (CARRY4(uVar3,param_2)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1006124e0);
    (*pcVar10)();
  }
  uVar1 = uVar3 + param_2 + param_1;
  if (!CARRY4(uVar3 + param_2,param_1)) {
    uVar2 = (uint)unaff_x20[2];
    if (uVar2 < uVar1) {
      uVar6 = *unaff_x20;
      _swift_beginAccess(uVar6 + 0x10,auStack_78,0,0);
      uVar5 = *(uint *)(uVar6 + 0x10);
      if (uVar5 < uVar1) {
        uVar4 = (ulong)(param_2 + param_1);
        if (CARRY4(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006124e8);
          (*pcVar10)();
        }
        if (uVar3 == 0) {
          FUN_10061217c();
        }
        else {
          if (uVar2 < uVar3) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1006124ec);
            (*pcVar10)();
          }
          FUN_10061204c();
          pcVar10 = *(code **)(uVar6 + 0x38);
          _swift_beginAccess(uVar4 + 0x18,auStack_90,0,0);
          uVar7 = *(undefined8 *)(uVar4 + 0x18);
          _swift_beginAccess(uVar6 + 0x18,auStack_a8,0,0);
          (*pcVar10)(uVar7,*(long *)(uVar6 + 0x18) + (ulong)uVar3,uVar2 - uVar3);
          _swift_release(uVar6);
          *unaff_x20 = uVar4;
          uVar6 = uVar4;
        }
        _swift_beginAccess(uVar6 + 0x10,auStack_c0,0,0);
        uVar8 = 0;
        uVar9 = 0;
        uVar5 = *(uint *)(uVar6 + 0x10);
      }
      else if (uVar5 < uVar3) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100612480);
        (*pcVar10)();
      }
      *(uint *)(unaff_x20 + 2) = uVar5;
      *(undefined2 *)((long)unaff_x20 + 0x14) = uVar8;
      *(undefined1 *)((long)unaff_x20 + 0x16) = uVar9;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1006124e4);
  (*pcVar10)();
}



/* Address: 0x1006124ec | FUN_1006124ec */

ulong FUN_1006124ec(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = param_2 - param_1;
  }
  if (uVar3 >> 0x20 == 0) {
    uVar1 = (uint)param_3 + (uint)uVar3;
    if (!CARRY4((uint)param_3,(uint)uVar3)) {
      uVar6 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = (uint)uVar6;
      if ((uVar6 & 1) == 0) {
        iVar2 = 0;
        if ((uint)unaff_x20[2] <= uVar1) {
          iVar2 = uVar1 - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar2,uVar5 & 1);
      }
      FUN_100612380(uVar3,param_3);
      FUN_10061258c(param_1,param_2,param_3);
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10061258c);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100612588);
  (*pcVar4)();
}



/* Address: 0x10061258c | FUN_10061258c */

void FUN_10061258c(void *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_68 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = unaff_x20[2];
  uVar2 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar1 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar5 + 0x18,auStack_68,0,0);
  uVar3 = (uint)CONCAT21(uVar2,uVar1);
  param_3 = param_3 & 0xffffffff;
  lVar4 = *(long *)(lVar5 + 0x18) + (ulong)uVar3 + (ulong)((int)lVar4 - uVar3);
  FUN_1005de850();
  if (lVar4 != 0 && param_1 != (void *)0x0) {
    _memmove((void *)(lVar4 + param_3),param_1,param_2 - (long)param_1);
  }
  return;
}



/* Address: 0x100612630 | FUN_100612630 */

void FUN_100612630(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_38,0,0);
  return;
}



/* Address: 0x10061268c | FUN_10061268c */

ulong FUN_10061268c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061271c);
    (*pcVar3)();
  }
  uVar1 = (uint)param_3 + (uint)param_2;
  if (!CARRY4((uint)param_3,(uint)param_2)) {
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
    FUN_100612380(param_2,param_3);
    FUN_100612720(param_1,param_2,param_3);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100612720);
  (*pcVar3)();
}



/* Address: 0x100612720 | FUN_100612720 */

void FUN_100612720(void *param_1,size_t param_2,ulong param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar6 = *unaff_x20;
  lVar5 = unaff_x20[2];
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar6 + 0x18,auStack_68,0,0);
  uVar4 = (uint)CONCAT21(uVar3,uVar2);
  param_3 = param_3 & 0xffffffff;
  lVar5 = *(long *)(lVar6 + 0x18) + (ulong)uVar4 + (ulong)((int)lVar5 - uVar4);
  FUN_1005de850();
  pvVar1 = (void *)0x0;
  if (lVar5 != 0) {
    pvVar1 = (void *)(lVar5 + param_3);
  }
  if (pvVar1 != (void *)0x0 && param_1 != (void *)0x0) {
    _memmove(pvVar1,param_1,param_2);
  }
  return;
}



/* Address: 0x1006127c8 | FUN_1006127c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006128d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006127c8(ulong *param_1,ulong param_2,undefined *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  tuple2_conflict2 tVar11;
  long lVar12;
  ulong *unaff_x20;
  uint uVar13;
  long lVar14;
  tuple2_conflict2 tVar15;
  undefined1 auStack_a0 [8];
  long local_98;
  uint local_8c;
  undefined8 local_88;
  undefined1 auStack_80 [30];
  undefined1 local_62;
  char local_61;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  puVar8 = &DAT_100fd6f00;
  FUN_1000f7830(&DAT_100fd6f00,&DAT_100c678f8);
  if (param_3 == puVar8) {
    uVar9 = *param_1;
    FUN_10060e4bc(uVar9,param_1[1],param_1[2],param_2);
    return uVar9;
  }
  uVar9 = Swift::Sequence::get_underestimatedCount();
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a58);
    (*pcVar6)();
  }
  if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a5c);
    (*pcVar6)();
  }
  uVar13 = (uint)param_2;
  uVar1 = uVar13 + (uint)uVar9;
  if (!CARRY4(uVar13,(uint)uVar9)) {
    uVar10 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar10 & 1) == 0) {
      iVar2 = 0;
      if ((uint)unaff_x20[2] <= uVar1) {
        iVar2 = uVar1 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,(uint)uVar10 & 1);
    }
    uVar10 = uVar9;
    FUN_100612a64(uVar9);
    tVar11 = Swift::UnsafeMutableBufferPointer::_initialize
                       (uVar10,param_1,uVar10,uVar9,PTR___type_metadata_for_Swift_UInt8_100eadcd0,
                        param_3,param_4);
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    local_88 = param_4;
    Swift::IteratorProtocol::_next();
    if (local_61 == '\x01') {
      (**(code **)(lVar14 + 8))(auStack_a0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),lVar7);
      if (tVar11._ < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a64);
        (*pcVar6)();
      }
      if ((ulong)tVar11._ >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100612944);
        (*pcVar6)();
      }
    }
    else {
      tVar15 = tVar11;
      local_98 = lVar14;
      local_8c = uVar13;
      do {
        uVar5 = local_62;
        tVar11._ = tVar15._ + 1;
        if (SCARRY8(tVar15._,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a4c);
          (*pcVar6)();
        }
        if (tVar11._ < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a50);
          (*pcVar6)();
        }
        if ((ulong)tVar11._ >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a54);
          (*pcVar6)();
        }
        FUN_100612380(tVar11._,local_8c);
        uVar9 = *unaff_x20;
        uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
        bVar3 = *(byte *)((long)unaff_x20 + 0x16);
        _swift_beginAccess(uVar9 + 0x18,auStack_80,0,0);
        *(undefined1 *)
         (*(long *)(uVar9 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + (param_2 & 0xffffffff) +
         tVar15._) = uVar5;
        Swift::IteratorProtocol::_next();
        tVar15._ = tVar15._ + 1;
      } while (local_61 != '\x01');
      (**(code **)(local_98 + 8))(auStack_a0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),lVar7);
    }
    return tVar11._;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100612a60);
  (*pcVar6)();
}



/* Address: 0x100612a64 | FUN_100612a64 */

long FUN_100612a64(ulong param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100612adc);
    (*pcVar3)();
  }
  if (param_1 >> 0x20 == 0) {
    FUN_100612380(param_1,param_3);
    lVar4 = *param_2;
    uVar2 = *(ushort *)((long)param_2 + 0x14);
    bVar1 = *(byte *)((long)param_2 + 0x16);
    _swift_beginAccess(lVar4 + 0x18,auStack_48,0,0);
    return *(long *)(lVar4 + 0x18) + (ulong)uVar2 * 0x100 + (ulong)bVar1 + (param_3 & 0xffffffff);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100612ae0);
  (*pcVar3)();
}



/* Address: 0x100612ae0 | FUN_100612ae0 */

void FUN_100612ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char local_44;
  
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_44 == '\x01') {
    FUN_1006127c8(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Address: 0x100612b80 | FUN_100612b80 */

void FUN_100612b80(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,char param_9)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100612c3c);
    (*pcVar2)();
  }
  uVar4 = param_2 - param_1;
  uVar1 = uVar4;
  if (param_9 != '\x01') {
    uVar1 = param_8;
  }
  if (((long)uVar4 < (long)uVar1 || uVar4 < param_7) || (long)uVar1 < (long)param_7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100612c30);
    (*pcVar2)();
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100612c34);
    (*pcVar2)();
  }
  lVar3 = param_1;
  FUN_1006140ec();
  _swift_allocObject();
  *(int *)(lVar3 + 0x10) = (int)uVar4;
  *(long *)(lVar3 + 0x18) = param_1;
  *(undefined8 *)(lVar3 + 0x20) = param_3;
  *(undefined8 *)(lVar3 + 0x28) = param_4;
  *(undefined8 *)(lVar3 + 0x30) = param_5;
  *(undefined8 *)(lVar3 + 0x38) = param_6;
  if ((uVar1 | param_7) >> 0x20 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100612c38);
  (*pcVar2)();
}



/* Address: 0x100612c3c | FUN_100612c3c */

int FUN_100612c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return ((int)param_3 - ((uint)((ulong)param_3 >> 0x18) & 0xffff00)) -
         ((int)((ulong)param_2 >> 0x20) + ((uint)((ulong)param_3 >> 0x30) & 0xff));
}



/* Address: 0x100612c5c | FUN_100612c5c */

int FUN_100612c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return (int)param_3 -
         ((uint)((ulong)param_3 >> 0x30) & 0xff | (uint)((ulong)param_3 >> 0x18) & 0xffff00);
}



/* Address: 0x100612c74 | FUN_100612c74 */

undefined4 FUN_100612c74(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(undefined4 *)(param_1 + 0x10);
}



/* Address: 0x100612cb0 | FUN_100612cb0 */

void FUN_100612cb0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1000d2130();
  uVar2 = uVar1;
  FUN_1000d2130();
  FUN_100612358(uVar1,(uint)uVar2 & 1);
  return;
}



/* Address: 0x100612cf4 | FUN_100612cf4 */

undefined1  [16] FUN_100612cf4(long param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
  auVar1._8_8_ = (param_2 >> 0x20) - (param_2 & 0xffffffff);
  auVar1._0_8_ = *(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff)
                 + (param_2 & 0xffffffff);
  return auVar1;
}



/* Address: 0x100612d68 | FUN_100612d68 */

undefined1  [16] FUN_100612d68(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [24];
  
  FUN_100612cb0();
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  lVar5 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar5 + 0x18,auStack_58,0,0);
  auVar6._8_8_ = (ulong)uVar2 - (ulong)uVar1;
  auVar6._0_8_ = *(long *)(lVar5 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + (ulong)uVar1;
  return auVar6;
}



/* Address: 0x100612dd4 | FUN_100612dd4 */

code * FUN_100612dd4(undefined8 param_1)

{
  long *unaff_x20;
  
  FUN_100612cb0();
  _swift_beginAccess(*unaff_x20 + 0x18,param_1,0,0);
  return FUN_100004520;
}



/* Address: 0x100612e44 | FUN_100612e44 */

undefined1  [16] FUN_100612e44(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_48,0,0);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (param_2 >> 0x20) - (param_2 & 0xffffffff);
  }
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = *(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff)
                 + (param_2 & 0xffffffff);
  return auVar2;
}



/* Address: 0x100612eb8 | FUN_100612eb8 */

void FUN_100612eb8(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [8];
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  lStack_50 = 0;
  if (param_1 != 0) {
    lStack_50 = param_2 - param_1;
  }
  local_48 = 0;
  local_58 = param_1;
  (*param_3)(&local_58,auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(param_7,auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100612f54 | FUN_100612f54 */

void FUN_100612f54(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  if (0 < param_1) {
    FUN_1006117fc();
  }
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_100613040(&local_58,FUN_10060f7a8,auStack_90);
  if (unaff_x21 == 0) {
    if ((long)local_58 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100613038);
      (*pcVar1)();
    }
    if (local_58 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061303c);
      (*pcVar1)();
    }
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)local_58)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100613040);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)local_58;
  }
  else {
    (**(code **)(lVar3 + 0x20))(param_6,auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  }
  return;
}



/* Address: 0x100613040 | FUN_100613040 */

void FUN_100613040(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(param_5 + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_7;
  local_88 = param_3;
  local_80 = param_2;
  FUN_100612cb0();
  lVar7 = *unaff_x20;
  lVar6 = unaff_x20[2];
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar7 + 0x18,auStack_78,0,0);
  uVar4 = (uint)CONCAT21(uVar3,uVar2);
  lVar7 = *(long *)(lVar7 + 0x18) + (ulong)uVar4;
  uVar5 = (ulong)*(uint *)((long)unaff_x20 + 0xc);
  lVar6 = lVar7 + (ulong)((int)lVar6 - uVar4);
  FUN_1005de850(uVar5);
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + lVar7;
  }
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = lVar6 + uVar5;
  }
  (*local_80)(param_1,lVar7,lVar1,lVar8);
  if (unaff_x21 != 0) {
    (**(code **)(lVar9 + 0x20))(local_90,lVar8,param_5);
  }
  return;
}



/* Address: 0x100613138 | FUN_100613138 */

void FUN_100613138(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [16];
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_3 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_50 = param_3;
  uStack_48 = param_4;
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_100612f54(0,FUN_10061410c,auStack_60,param_3,param_4,
                auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(param_5,auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  }
  return;
}



/* Address: 0x1006131c8 | FUN_1006131c8 */

void FUN_1006131c8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(param_1,param_2,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_7,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100613244 | FUN_100613244 */

void FUN_100613244(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(param_8 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  _swift_beginAccess(param_4 + 0x18,auStack_78,0,0);
  uVar2 = (uint)((ulong)param_6 >> 0x18) & 0xffff00 | (ushort)((ulong)param_6 >> 0x30) & 0xff;
  lVar1 = *(long *)(param_4 + 0x18) + (ulong)uVar2;
  (*param_2)(param_1,lVar1,lVar1 + (ulong)((int)param_6 - uVar2),
             auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar4 + 0x20))(param_10,auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_8);
  }
  return;
}



/* Address: 0x100613320 | FUN_100613320 */

void FUN_100613320(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(param_8 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_80 = param_8;
  _swift_beginAccess(param_4 + 0x18,auStack_78,0,0);
  lVar1 = *(long *)(param_4 + 0x18) + (param_6 >> 0x18 & 0xffff00) + (param_6 >> 0x30 & 0xff);
  (*param_2)(param_1,lVar1 + (param_5 & 0xffffffff),lVar1 + (param_5 >> 0x20),param_4,
             auStack_78 + (-8 - (lVar2 + 0xfU & 0xfffffffffffffff0)));
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))
              (param_10,auStack_78 + (-8 - (lVar2 + 0xfU & 0xfffffffffffffff0)),local_80);
  }
  return;
}



/* Address: 0x100613404 | FUN_100613404 */

void FUN_100613404(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(param_8 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  _swift_beginAccess(param_4 + 0x18,auStack_78,0,0);
  uVar2 = (uint)((ulong)param_6 >> 0x18) & 0xffff00 | (ushort)((ulong)param_6 >> 0x30) & 0xff;
  lVar1 = *(long *)(param_4 + 0x18) + (ulong)uVar2;
  (*param_2)(param_1,lVar1,lVar1 + (ulong)((int)param_6 - uVar2),param_4,
             auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar4 + 0x20))(param_10,auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_8);
  }
  return;
}



/* Address: 0x1006134e4 | FUN_1006134e4 */

void FUN_1006134e4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  code *local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_5 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  local_88 = param_7;
  local_80 = param_2;
  FUN_100612cb0();
  lVar8 = *unaff_x20;
  lVar5 = unaff_x20[2];
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar8 + 0x18,auStack_78,0,0);
  uVar4 = (uint)CONCAT21(uVar3,uVar2);
  lVar1 = *(long *)(lVar8 + 0x18) + (ulong)uVar4;
  (*local_80)(param_1,lVar1,lVar1 + (ulong)((int)lVar5 - uVar4),lVar8,
              auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar7 + 0x20))(local_88,auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x1006135c8 | FUN_1006135c8 */

undefined8 FUN_1006135c8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (!CARRY4(param_1,(uint)param_2)) {
    _swift_retain(param_3);
    FUN_100612224(param_2,1);
    return param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100613644);
  (*pcVar1)();
}



/* Address: 0x100613644 | FUN_100613644 */

void FUN_100613644(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  thunk_FUN_10061160c(param_3 & 0xffffffff,param_1,param_2,param_3,param_4 & 0xffffffffffffff);
  return;
}



/* Address: 0x100613674 | FUN_100613674 */

bool FUN_100613674(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_48 [24];
  
  uVar1 = *(uint *)(unaff_x20 + 1);
  if (uVar1 != 0) {
    uVar2 = *(uint *)((long)unaff_x20 + 0xc);
    if (uVar1 == uVar2) {
      unaff_x20[1] = 0;
    }
    else {
      iVar5 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      if (iVar5 == 0) {
        FUN_100612358();
      }
      else {
        lVar6 = *unaff_x20;
        _swift_beginAccess(lVar6 + 0x18,auStack_48,0,0);
        uVar3 = (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                               *(undefined1 *)((long)unaff_x20 + 0x16));
        if (CARRY4(uVar3,uVar1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100613730);
          (*pcVar4)();
        }
        lVar6 = *(long *)(lVar6 + 0x18);
        _memmove((void *)(lVar6 + (ulong)uVar3),(void *)(lVar6 + (ulong)(uVar3 + uVar1)),
                 (ulong)(uVar2 - uVar1));
        *(undefined4 *)(unaff_x20 + 1) = 0;
        if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100613734);
          (*pcVar4)();
        }
        *(uint *)((long)unaff_x20 + 0xc) = uVar2 - uVar1;
      }
    }
  }
  return uVar1 != 0;
}



/* Address: 0x100613734 | FUN_100613734 */

undefined8 FUN_100613734(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long unaff_x20;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006137c0);
    (*pcVar3)();
  }
  if (param_1 >> 0x20 == 0) {
    uVar2 = (int)param_1 - 1;
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar1 = uVar2 + 1;
    if (uVar2 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    if (param_1 == 0) {
      uVar1 = 0;
    }
    if ((uVar1 < *(int *)(unaff_x20 + 0x10) -
                 (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),*(undefined1 *)(unaff_x20 + 0x16))
        ) && ((uint)(*(int *)(unaff_x20 + 0xc) - *(int *)(unaff_x20 + 8)) <= uVar1)) {
      FUN_100612224(uVar1,1);
      return 1;
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006137c4);
  (*pcVar3)();
}



/* Address: 0x1006137c4 | FUN_1006137c4 */

ulong FUN_1006137c4(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_1 != 0) {
    uVar2 = (int)param_1 - 1;
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar1 = uVar2 + 1;
    if (uVar2 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Address: 0x1006137ec | FUN_1006137ec */

void FUN_1006137ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    _swift_beginAccess(uVar3 + 0x10,auStack_48,0,0);
    uVar2 = (ulong)*(uint *)(uVar3 + 0x10);
    FUN_10061204c();
    _swift_release(uVar3);
    *unaff_x20 = uVar2;
  }
  _swift_beginAccess(uVar2 + 0x10,auStack_60,0,0);
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(uVar2 + 0x10);
  *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
  unaff_x20[1] = 0;
  return;
}



/* Address: 0x100613880 | FUN_100613880 */

void FUN_100613880(long param_1)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  iVar1 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *unaff_x20;
  if (iVar1 == 0) {
    FUN_10061204c();
    _swift_release(lVar2);
    *unaff_x20 = param_1;
    lVar2 = param_1;
  }
  else {
    _swift_beginAccess(lVar2 + 0x10,auStack_60,0,0);
    if (*(uint *)(lVar2 + 0x10) < (uint)param_1) {
      FUN_10061217c(param_1);
    }
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
  unaff_x20[1] = 0;
  return;
}



/* Address: 0x100613930 | FUN_100613930 */

void FUN_100613930(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 >> 0x20 == 0) {
    uVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *unaff_x20;
    if ((uVar2 & 1) == 0) {
      FUN_10061204c();
      _swift_release(uVar3);
      *unaff_x20 = param_1;
      uVar3 = param_1;
    }
    else {
      _swift_beginAccess(uVar3 + 0x10,auStack_60,0,0);
      if (*(uint *)(uVar3 + 0x10) < (uint)param_1) {
        FUN_10061217c(param_1);
      }
    }
    _swift_beginAccess(uVar3 + 0x10,auStack_48,0,0);
    *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(uVar3 + 0x10);
    *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
    *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
    unaff_x20[1] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006139ec);
  (*pcVar1)();
}



/* Address: 0x1006139ec | FUN_1006139ec */

undefined1  [16] FUN_1006139ec(char *param_1,void *param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  pcVar2 = (char *)0x40;
  pvVar3 = (void *)0x0;
  FUN_100614c14();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = pcVar2;
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  Swift::String::append(SVar5,SVar7);
  _swift_bridgeObjectRelease(pvVar3);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x285d;
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  Swift::String::append(SVar4,SVar8);
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_2;
  SVar9.str = param_1;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = &DAT_e700000000000000;
  SVar6.str = (char *)0x29736574796220;
  SVar10.bridgeObject = param_2;
  SVar10.str = param_1;
  Swift::String::append(SVar6,SVar10);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x5b;
  return auVar1;
}



/* Address: 0x100613abc | FUN_100613abc */

void FUN_100613abc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_1006139ec(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100613ac4 | thunk_FUN_100613ac8 */

void thunk_FUN_100613ac8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006139ec(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100613ac8 | FUN_100613ac8 */

void FUN_100613ac8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006139ec(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}


