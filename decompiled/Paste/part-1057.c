/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b5dd0c | FUN_100b5dd0c */

ulong FUN_100b5dd0c(ulong param_1)

{
  if (((param_1 & 1) != 0) && ((0xb3UL >> ((param_1 & 0xe) >> 1) & 1) == 0)) {
    return param_1 & 0xfffffffffffffff0;
  }
  return *(ulong *)(param_1 + 8);
}



/* Address: 0x100b5dd34 | FUN_100b5dd34 */

double FUN_100b5dd34(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  double dVar3;
  
  if (((param_1 & 1) != 0) && ((0xb3UL >> (param_1 >> 1 & 7) & 1) == 0)) {
    return (double)((long)param_1 >> 8);
  }
  uVar1 = param_1;
  _CFNumberGetType();
  switch(uVar1) {
  case 1:
  case 7:
    iVar2 = (int)*(char *)(param_1 + 0x10);
    goto LAB_100b5ddc4;
  case 2:
  case 8:
    iVar2 = (int)*(short *)(param_1 + 0x10);
    goto LAB_100b5ddc4;
  case 3:
  case 9:
    iVar2 = *(int *)(param_1 + 0x10);
LAB_100b5ddc4:
    dVar3 = (double)iVar2;
    break;
  case 4:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    dVar3 = (double)*(long *)(param_1 + 0x10);
    break;
  case 5:
  case 0xc:
    dVar3 = (double)*(float *)(param_1 + 0x10);
    break;
  case 6:
  case 0xd:
  case 0x10:
    dVar3 = *(double *)(param_1 + 0x10);
    break;
  default:
    dVar3 = NAN;
  }
  return dVar3;
}



/* Address: 0x100b5dde0 | FUN_100b5dde0 */

long FUN_100b5dde0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (((param_1 & 1) == 0) || ((0xb3UL >> (param_1 >> 1 & 7) & 1) != 0)) {
    uVar2 = param_1;
    _CFNumberGetType();
    switch(uVar2) {
    case 1:
    case 7:
      lVar1 = (long)*(char *)(param_1 + 0x10);
      break;
    case 2:
    case 8:
      lVar1 = (long)*(short *)(param_1 + 0x10);
      break;
    case 3:
    case 9:
      lVar1 = (long)*(int *)(param_1 + 0x10);
      break;
    case 4:
    case 10:
    case 0xb:
    case 0xe:
    case 0xf:
      lVar1 = *(long *)(param_1 + 0x10);
      break;
    case 5:
    case 0xc:
      lVar1 = (long)*(float *)(param_1 + 0x10);
      break;
    case 6:
    case 0xd:
    case 0x10:
      lVar1 = (long)*(double *)(param_1 + 0x10);
      break;
    default:
      lVar1 = 0;
    }
  }
  else {
    lVar1 = (long)param_1 >> 8;
  }
  return lVar1;
}



/* Address: 0x100b5de80 | FUN_100b5de80 */

uint FUN_100b5de80(uint param_1)

{
  return param_1 & 1;
}



/* Address: 0x100b5de88 | FUN_100b5de88 */

uint FUN_100b5de88(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)(0x4cL >> (param_1 >> 1 & 7)) & 1;
  }
  return uVar1;
}



/* Address: 0x100b5dea4 | FUN_100b5dea4 */

uint FUN_100b5dea4(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)(0x4cL >> (param_1 >> 1 & 7)) & 1;
  }
  return uVar1;
}



/* Address: 0x100b5dec0 | FUN_100b5dec0 */

void FUN_100b5dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b5e50c(param_2,param_3,"<%s: 0x%016x>");
  return;
}



/* Address: 0x100b5df0c | FUN_100b5df0c */

bool FUN_100b5df0c(ulong param_1)

{
  return (param_1 & 1) != 0 && ((0xb3UL >> (param_1 >> 1 & 7) & 1) == 0 && (param_1 & 0xe) == 4);
}



/* Address: 0x100b5df38 | thunk_FUN_100b5dc34 */

void thunk_FUN_100b5dc34(void)

{
  FUN_100b5dc34();
  return;
}



/* Address: 0x100b5df3c | FUN_100b5df3c */

bool FUN_100b5df3c(ulong param_1)

{
  return (param_1 & 1) != 0 && ((0xb3UL >> (param_1 >> 1 & 7) & 1) == 0 && (param_1 & 0xe) == 6);
}



/* Address: 0x100b5df68 | FUN_100b5df68 */

int FUN_100b5df68(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  FUN_100b5e50c(param_2,param_3,"<%s: 0x%016x>");
  lVar1 = param_2 + (int)lVar2;
  lVar3 = lVar1;
  FUN_100b5e50c(lVar1,(int)param_3 - (int)lVar2,": %lld");
  return ((int)lVar1 + (int)lVar3) - (int)param_2;
}



/* Address: 0x100b5dff0 | FUN_100b5dff0 */

bool FUN_100b5dff0(ulong param_1)

{
  return (param_1 & 1) != 0 && ((0xb3UL >> (param_1 >> 1 & 7) & 1) == 0 && (param_1 & 0xe) == 0xc);
}



/* Address: 0x100b5e01c | FUN_100b5e01c */

int FUN_100b5e01c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  FUN_100b5e50c(param_2,param_3,"<%s: 0x%016x>");
  lVar1 = param_2 + (int)lVar2;
  lVar3 = lVar1;
  FUN_100b5e50c(lVar1,(int)param_3 - (int)lVar2,": %f");
  return ((int)lVar1 + (int)lVar3) - (int)param_2;
}



/* Address: 0x100b5e0a4 | FUN_100b5e0a4 */

void FUN_100b5e0a4(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  byte *pbVar3;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 < (byte *)0xffffffffffffff80) {
    pbVar3 = param_1;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar2 = (uint)pbVar3;
    FUN_100b5d504();
    if ((((uVar2 != 0) && ((*(uint *)(&DAT_100c981fc + (ulong)*param_1 * 4) >> 1 & 1) != 0)) &&
        (1 < (int)uVar2)) && ((*(uint *)(&DAT_100c981fc + (ulong)param_1[1] * 4) & 1) != 0)) {
      lVar5 = (ulong)uVar2 - 2;
      pbVar3 = param_1 + 2;
      do {
        if (lVar5 == 0) break;
        bVar1 = *pbVar3;
        lVar5 = lVar5 + -1;
        pbVar3 = pbVar3 + 1;
      } while ((*(uint *)(&DAT_100c981fc + (ulong)bVar1 * 4) & 1) != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b5e1b0 | FUN_100b5e1b0 */

void FUN_100b5e1b0(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char local_59;
  undefined1 auStack_58 [56];
  
  lVar2 = param_1;
  FUN_100b5d620(param_1,auStack_58,0x10);
  if ((int)lVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x60) == 0) {
    plVar4 = (long *)(param_1 + 0x10);
    plVar3 = plVar4;
    FUN_100b5d620(plVar4,auStack_58,8);
    if (((ulong)plVar3 & 1) == 0) {
      return;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
      plVar4 = (long *)(param_1 + 0x10);
      if ((bVar1 >> 2 & 1) != 0) {
        plVar3 = plVar4;
        FUN_100b5d620(plVar4,auStack_58,0x10);
        if ((int)plVar3 == 0) {
          return;
        }
        if ((*(byte *)(param_1 + 8) & 0x60) == 0) {
          plVar4 = plVar4 + ((*(byte *)(param_1 + 8) & 5) != 4);
        }
        else {
          plVar4 = (long *)*plVar4;
        }
        FUN_100b5d620(plVar4,&local_59,1);
        if ((int)plVar4 == 0) {
          return;
        }
        if (local_59 == '\0') {
          return;
        }
        goto LAB_100b5e23c;
      }
      uVar5 = 0x18;
    }
    else {
      uVar5 = 0x28;
    }
    lVar2 = param_1 + 0x10;
    FUN_100b5d620(lVar2,auStack_58,uVar5);
    if ((int)lVar2 == 0) {
      return;
    }
    plVar4 = (long *)(param_1 + 0x18);
  }
  if (*plVar4 < 0) {
    return;
  }
  if (*plVar4 == 0) {
    return;
  }
LAB_100b5e23c:
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x60) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x10) + ((bVar1 & 5) != 4);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  FUN_100b5d620((long)puVar6 + ((ulong)(bVar1 >> 2) & 1),&local_59,1);
  return;
}



/* Address: 0x100b5e2f0 | FUN_100b5e2f0 */

void FUN_100b5e2f0(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_100b5d620(param_1,auStack_20,0x10);
  return;
}



/* Address: 0x100b5e314 | FUN_100b5e314 */

void FUN_100b5e314(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100b5d620(param_1,auStack_28,0x18);
  return;
}



/* Address: 0x100b5e338 | FUN_100b5e338 */

int FUN_100b5e338(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  
  uVar2 = param_1;
  FUN_100b5e828();
  lVar1 = param_2 + (int)uVar2;
  uVar3 = param_1;
  _CFNumberIsFloatType();
  if ((int)uVar3 == 0) {
    FUN_100b5dde0();
    pcVar5 = ": %lld";
  }
  else {
    FUN_100b5dd34(param_1);
    pcVar5 = ": %lf";
  }
  lVar4 = lVar1;
  FUN_100b5e50c(lVar1,param_3 - (int)uVar2,pcVar5);
  return ((int)lVar1 + (int)lVar4) - (int)param_2;
}



/* Address: 0x100b5e3d0 | FUN_100b5e3d0 */

void FUN_100b5e3d0(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  
  FUN_100b5d620(param_1,auStack_58,0x48);
  if ((int)param_1 != 0) {
    FUN_100b5e1b0(local_40);
  }
  return;
}



/* Address: 0x100b5e400 | FUN_100b5e400 */

undefined8 FUN_100b5e400(void)

{
  return 1;
}



/* Address: 0x100b5e408 | FUN_100b5e408 */

void FUN_100b5e408(void)

{
  return;
}



/* Address: 0x100b5e418 | FUN_100b5e418 */

void FUN_100b5e418(void)

{
  FUN_100b5e828();
  return;
}



/* Address: 0x100b5e42c | FUN_100b5e42c */

void FUN_100b5e42c(void)

{
  return;
}



/* Address: 0x100b5e44c | FUN_100b5e44c */

void FUN_100b5e44c(void)

{
  return;
}



/* Address: 0x100b5e46c | FUN_100b5e46c */

void FUN_100b5e46c(void)

{
  return;
}



/* Address: 0x100b5e478 | FUN_100b5e478 */

void FUN_100b5e478(void)

{
  FUN_100b5e50c();
  return;
}



/* Address: 0x100b5e480 | FUN_100b5e480 */

void FUN_100b5e480(ulong param_1)

{
  int iVar1;
  char *pcVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  char *pcVar4;
  undefined *unaff_x20;
  undefined **ppuVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_100b5e44c();
    uVar3 = extraout_x8;
    if ((extraout_x8 & 1) != 0) {
      FUN_100b5e46c();
      uVar3 = extraout_x8_00;
    }
    ppuVar5 = &PTR_s___NSCFString_101042a80;
    if (PTR_s___NSCFString_101042a80 != (undefined *)0x0) {
      pcVar4 = *(char **)(uVar3 + 0x18);
      pcVar2 = PTR_s___NSCFString_101042a80;
      do {
        if (ppuVar5[5] == unaff_x20) break;
        if ((ppuVar5[5] == (undefined *)0x0) && (iVar1 = _strcmp(pcVar4,pcVar2), iVar1 == 0)) {
          ppuVar5[5] = unaff_x20;
          break;
        }
        ppuVar5 = ppuVar5 + 6;
        pcVar2 = *ppuVar5;
      } while (pcVar2 != (char *)0x0);
    }
  }
  else {
    ppuVar5 = &PTR_s_NSAtom_100f35c38 + (param_1 >> 1 & 7) * 6;
  }
  FUN_100b56e60(*(int *)((long)ppuVar5 + 0xc) == 1);
  return;
}



/* Address: 0x100b5e50c | FUN_100b5e50c */

int FUN_100b5e50c(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = _vsnprintf(param_1,(long)param_2,param_3,&stack0x00000000);
  if (iVar1 < 0) {
    *param_1 = '\0';
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}



/* Address: 0x100b5e570 | FUN_100b5e570 */

void FUN_100b5e570(int param_1)

{
  long lVar1;
  int iVar2;
  int unaff_w20;
  undefined4 unaff_000040a4;
  int unaff_w21;
  int unaff_w23;
  
  FUN_100b5e418();
  lVar1 = (long)param_1;
  FUN_100b5e478();
  FUN_100bf37c4();
  lVar1 = CONCAT44(unaff_000040a4,unaff_w20) + lVar1 + (long)param_1 + (long)unaff_w21;
  iVar2 = (int)lVar1;
  FUN_100b5e50c(lVar1,unaff_w23 - iVar2,"\"");
  FUN_100b5e408((iVar2 + (int)lVar1) - unaff_w20);
  return;
}



/* Address: 0x100b5e5d8 | FUN_100b5e5d8 */

void FUN_100b5e5d8(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  lVar1 = param_1;
  FUN_100b5e480();
  if ((int)lVar1 == 0) {
    FUN_100b5d620(param_1,auStack_50,0x18);
  }
  else {
    lVar1 = param_1;
    FUN_100b5d620(param_1,auStack_50,0x30);
    if ((((int)lVar1 != 0) && ((*(byte *)(param_1 + 8) & 3) == 2)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      FUN_100b5d620(*(long *)(param_1 + 0x28),auStack_60,0x10);
    }
  }
  return;
}



/* Address: 0x100b5e654 | FUN_100b5e654 */

int FUN_100b5e654(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 local_48;
  
  lVar2 = param_1;
  FUN_100b5e828();
  iVar1 = (int)lVar2;
  lVar2 = (long)iVar1;
  FUN_100b5e478();
  uVar5 = param_2 + lVar2 + (long)iVar1;
  iVar1 = (int)(param_2 + param_3);
  if (uVar5 < (param_2 + param_3) - 1U) {
    lVar3 = param_1;
    FUN_100b5e480();
    lVar2 = 0x10;
    if ((int)lVar3 == 0) {
      lVar2 = 8;
    }
    if (0 < (int)((uint)*(undefined8 *)(param_1 + lVar2) &
                 ((uint)((long)*(undefined8 *)(param_1 + lVar2) >> 0x3f) ^ 0xffffffff))) {
      local_48 = 0;
      FUN_100bf39d0(param_1,&local_48,1);
      if ((int)param_1 == 1) {
        uVar4 = local_48;
        FUN_100bf3b10(local_48,uVar5,iVar1 - (int)uVar5);
        uVar5 = uVar5 + (long)(int)uVar4;
      }
    }
  }
  iVar6 = (int)uVar5;
  FUN_100b5e50c(uVar5,iVar1 - iVar6,"]");
  return (iVar6 + (int)uVar5) - (int)param_2;
}



/* Address: 0x100b5e734 | FUN_100b5e734 */

int FUN_100b5e734(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_100b5e828(param_1,param_2,param_3);
  lVar1 = param_2 + (int)param_1;
  lVar2 = lVar1;
  FUN_100b5e50c(lVar1,(int)param_3 - (int)param_1,": %f");
  return ((int)lVar1 + (int)lVar2) - (int)param_2;
}



/* Address: 0x100b5e7c0 | FUN_100b5e7c0 */

void FUN_100b5e7c0(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int unaff_w20;
  undefined4 unaff_000040a4;
  long unaff_x21;
  int unaff_w23;
  
  FUN_100b5e418();
  lVar2 = (long)param_1;
  FUN_100b5e478();
  lVar2 = CONCAT44(unaff_000040a4,unaff_w20) + lVar2 + (long)param_1;
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_100bf37c4(uVar1,lVar2,unaff_w23 - (int)lVar2);
  lVar2 = lVar2 + (int)uVar1;
  iVar3 = (int)lVar2;
  FUN_100b5e50c(lVar2,unaff_w23 - iVar3,"\"");
  FUN_100b5e408((iVar3 + (int)lVar2) - unaff_w20);
  return;
}



/* Address: 0x100b5e828 | FUN_100b5e828 */

void FUN_100b5e828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b5e50c(param_2,param_3,"<%s: 0x%016x>");
  return;
}



/* Address: 0x100b5e888 | FUN_100b5e888 */

undefined8 FUN_100b5e888(char *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = 0x601;
    if (param_2 == 0) {
      iVar1 = 0x201;
    }
    DAT_101042d80 = _open(param_1,iVar1);
    if ((param_1 == &DAT_1010e58d8) || (DAT_101042d80 < 0)) {
      if (DAT_101042d80 < 0) {
        return 1;
      }
    }
    else {
      ___strlcpy_chk(&DAT_1010e58d8,param_1,0x400,0x400);
    }
  }
  iVar1 = DAT_101042d80;
  if (2 < DAT_101042d84) {
    _close();
  }
  DAT_101042d84 = iVar1;
  return 0;
}



/* Address: 0x100b5e930 | FUN_100b5e930 */

void FUN_100b5e930(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char acStack_448 [1024];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _strrchr(param_2,0x2f);
  FUN_100b5e9fc();
  if (param_4 == (char *)0x0) {
    pcVar1 = "(null)";
  }
  else {
    _vsnprintf(acStack_448,0x400,param_4,&stack0x00000000);
    pcVar1 = acStack_448;
  }
  FUN_100b5ea70(pcVar1);
  FUN_100b5ea70("\n");
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b5e9fc | FUN_100b5e9fc */

void FUN_100b5e9fc(void)

{
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _vsnprintf(acStack_428,0x400,"%s: %s (%u): ",&stack0x00000000);
  FUN_100b5ea70(acStack_428);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b5ea70 | FUN_100b5ea70 */

void FUN_100b5ea70(char *param_1)

{
  int iVar1;
  size_t sVar2;
  
  if ((param_1 != (char *)0x0) && (-1 < DAT_101042d84)) {
    sVar2 = _strlen(param_1);
    do {
      if ((int)sVar2 < 1) {
        return;
      }
      iVar1 = DAT_101042d84;
      _write(DAT_101042d84,param_1,sVar2 & 0xffffffff);
      sVar2 = (size_t)(uint)((int)sVar2 - iVar1);
      param_1 = param_1 + iVar1;
    } while (iVar1 != -1);
  }
  return;
}



/* Address: 0x100b5ead4 | SentryTracePropagation::addBaggageHeader:traceHeader:propagateTraceparent:tracePropagationTargets:toRequest: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x34 bytes */

void SentryTracePropagation::
     addBaggageHeader_traceHeader_propagateTraceparent_tracePropagationTargets_toRequest_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,ID param_7)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  code *pcVar8;
  
  IVar2 = objc_stub::currentRequest(param_7);
  if (IVar2 != 0) {
    IVar3 = objc_stub::URL(IVar2);
    IVar4 = *(ID *)PTR____NSArray0___100ea9b00;
    if (param_6 != 0) {
      IVar4 = param_6;
    }
    IVar4 = objc_stub::FUN_100c05ce0((ID)&objc::class_t::SentryTracePropagation,IVar3,IVar4);
    iVar1 = 0;
    if ((IVar4 & 1) == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        IVar2 = objc_stub::URL(IVar2);
        objc_stub::FUN_100bfd1c0(IVar2);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracePropagation.m"
                      ,0x1c,&cf_Notaddingtrace_idandbaggageheadersfor__);
      }
    }
    else {
      pcVar6 = &cf___;
      if (param_3 != 0) {
        pcVar5 = (cfstringStruct *)objc_stub::valueForHTTPHeaderField_(IVar2,&cf_baggage);
        pcVar7 = pcVar6;
        if (pcVar5 != (cfstringStruct *)0x0) {
          pcVar7 = pcVar5;
        }
        IVar4 = objc_stub::FUN_100c00c60
                          ((ID)&objc::class_t::_TtC6Sentry26SentryBaggageSerialization,pcVar7);
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sentry_trace_id);
        if (IVar3 == 0) {
          pcVar6 = (cfstringStruct *)objc_stub::FUN_100c10780(param_3,IVar4);
        }
      }
      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableURLRequest);
      IVar4 = objc_stub::isKindOfClass_(IVar2,IVar4);
      if ((int)IVar4 == 0) {
        pcVar7 = &cf_setCurrentRequest_;
        _NSSelectorFromString(&cf_setCurrentRequest_);
        IVar4 = objc_stub::respondsToSelector_(param_7,pcVar7);
        if ((int)IVar4 != 0) {
          IVar2 = objc_stub::mutableCopy(IVar2);
          objc_stub::FUN_100bfd640
                    ((ID)&objc::class_t::SentryTracePropagation,IVar2,param_4,pcVar6,(ulong)param_5)
          ;
          pcVar8 = (code *)objc_stub::FUN_100c06d20(param_7,pcVar7);
          (*pcVar8)(param_7,pcVar7,IVar2);
        }
      }
      else {
        objc_stub::FUN_100bfd640
                  ((ID)&objc::class_t::SentryTracePropagation,IVar2,param_4,pcVar6,(ulong)param_5);
      }
    }
  }
  return;
}



/* Address: 0x100b5ed68 | SentryTracePropagation::addHeaderFieldsToRequest:traceHeader:baggageHeader:propagateTraceparent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x2c bytes */

void SentryTracePropagation::
     addHeaderFieldsToRequest_traceHeader_baggageHeader_propagateTraceparent_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::valueForHTTPHeaderField_(param_3,&cf_sentry_trace);
  if (IVar1 == 0) {
    IVar1 = objc_stub::value(param_4);
    objc_stub::FUN_100c0e880(param_3,IVar1,&cf_sentry_trace);
  }
  if ((param_6 != 0) &&
     (IVar1 = objc_stub::valueForHTTPHeaderField_(param_3,&cf_traceparent), IVar1 == 0)) {
    IVar1 = objc_stub::FUN_100c10960(param_4);
    objc_stub::FUN_100c0a000(IVar1);
    IVar1 = objc_stub::spanId(param_4);
    objc_stub::FUN_100c0a0a0(IVar1);
    objc_stub::FUN_100c098c0(param_4);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_00________02x);
    objc_stub::FUN_100c0e880(param_3,IVar1,&cf_traceparent);
  }
  IVar1 = objc_stub::length(param_5);
  if (IVar1 != 0) {
    objc_stub::FUN_100c0e880(param_3,param_5,&cf_baggage);
  }
  return;
}



/* Address: 0x100b5ef48 | SentryTracePropagation::isTargetMatch:withTargets: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryTracePropagation::isTargetMatch_withTargets_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  bool bVar5;
  ID self;
  long lVar6;
  ID IVar7;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_4,&local_130,auStack_e8,0x10);
  bVar5 = 0;
  if (IVar1 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        self = *(ID *)(lStack_128 + IVar7 * 8);
        IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSRegularExpression);
        IVar2 = objc_stub::isKindOfClass_(self,IVar2);
        if ((int)IVar2 == 0) {
          IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
          IVar2 = objc_stub::isKindOfClass_(self,IVar2);
          if ((int)IVar2 != 0) {
            IVar2 = objc_stub::FUN_100bfd1c0(param_3);
            IVar2 = objc_stub::containsString_(IVar2,self);
            uVar4 = IVar2 & 1;
            goto joined_r0x000100b5f08c;
          }
        }
        else {
          IVar2 = objc_stub::FUN_100bfd1c0(param_3);
          IVar3 = objc_stub::length(IVar2);
          uVar4 = objc_stub::FUN_100c07280(self,IVar2,0,0,IVar3);
joined_r0x000100b5f08c:
          if (uVar4 != 0) {
            bVar5 = 1;
            goto LAB_100b5f0c0;
          }
        }
        IVar7 = IVar7 + 1;
      } while (IVar1 != IVar7);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_4,&local_130,auStack_e8,0x10);
    } while (IVar1 != 0);
    bVar5 = 0;
  }
LAB_100b5f0c0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5f118 | SentryEvent::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEvent::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryEvent;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  IVar1 = objc_stub::FUN_100bff800(IVar1,0);
  return IVar1;
}



/* Address: 0x100b5f178 | SentryEvent::initWithLevel: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEvent::initWithLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryEvent;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  IVar1 = objc_stub::FUN_100bff800(IVar1,param_3);
  return IVar1;
}



/* Address: 0x100b5f1dc | SentryEvent::commonInit: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEvent::commonInit_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  class_t *self;
  ID IVar1;
  
  if (param_1 != 0) {
    self = &objc::class_t::SentryId;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
    objc_stub::FUN_100c0b9c0(param_1,IVar1);
    objc_stub::setLevel_(param_1,param_3);
    objc_stub::FUN_100c0d100(param_1,&cf_cocoa);
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar1 = objc_stub::FUN_100c00ac0(IVar1);
    IVar1 = objc_stub::date(IVar1);
    objc_stub::setTimestamp_(param_1,IVar1);
  }
  return param_1;
}



/* Address: 0x100b5f2ac | SentryEvent::initWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEvent::initWithError_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100c044a0(param_1,4);
  objc_stub::setError_(self,param_3);
  return self;
}



/* Address: 0x100b5f2f8 | SentryEvent::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEvent::serialize(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  ID local_68;
  cfstringStruct *pcStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = objc_stub::timestamp(param_1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::FUN_100c00ac0(IVar2);
    IVar2 = objc_stub::date(IVar2);
    objc_stub::setTimestamp_(param_1,IVar2);
  }
  local_88 = &cf_event_id;
  IVar2 = objc_stub::FUN_100c01f00(param_1);
  local_70 = objc_stub::FUN_100c0a000(IVar2);
  local_80 = &cf_timestamp;
  IVar2 = objc_stub::timestamp(param_1);
  objc_stub::timeIntervalSince1970(IVar2);
  local_68 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  local_78 = &cf_platform;
  pcStack_60 = &cf_cocoa;
  IVar2 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_88,3);
  IVar2 = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::FUN_100c06200(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_100c06200(param_1);
    FUN_100b425e0();
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_level);
  }
  objc_stub::FUN_100bfd8c0(param_1,IVar2);
  objc_stub::FUN_100bfd800(param_1,IVar2);
  IVar3 = objc_stub::FUN_100c020c0(param_1);
  FUN_100bcfb78(IVar3);
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_extra);
  IVar3 = objc_stub::FUN_100c10160(param_1);
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_tags);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEvent.m",0x52,
                  &cf_Serializedevent___);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b5f5ac | SentryEvent::addOptionalListProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addOptionalListProperties_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100bfd920(param_1,param_3);
  objc_stub::FUN_100bfd5c0(param_1,param_3);
  objc_stub::FUN_100bfd580(param_1,param_3);
  return;
}



/* Address: 0x100b5f5fc | SentryEvent::addDebugImages: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addDebugImages_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  cfstringStruct *local_e8;
  ID IStack_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::FUN_100c00be0(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_d8,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_128 + IVar6 * 8));
        objc_stub::addObject_(IVar1,IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_d8,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    local_e8 = &cf_images;
    IStack_e0 = IVar1;
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_e0,&local_e8,1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_debug_meta);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5f7a4 | SentryEvent::addExceptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addExceptions_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  cfstringStruct *local_e8;
  ID IStack_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::FUN_100c02020(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_d8,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_128 + IVar6 * 8));
        objc_stub::addObject_(IVar1,IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_d8,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    local_e8 = &cf_values;
    IStack_e0 = IVar1;
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_e0,&local_e8,1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_exception);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5f94c | SentryEvent::addThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addThreads_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  cfstringStruct *local_e8;
  ID IStack_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::threads(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_d8,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_128 + IVar6 * 8));
        objc_stub::addObject_(IVar1,IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_d8,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    local_e8 = &cf_values;
    IStack_e0 = IVar1;
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_e0,&local_e8,1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_threads);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b5faf4 | SentryEvent::addSimpleProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::addSimpleProperties_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c09ca0(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_sdk);
  IVar1 = objc_stub::FUN_100c08e20(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_release);
  IVar1 = objc_stub::FUN_100c01520(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_dist);
  IVar1 = objc_stub::environment(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_environment);
  IVar1 = objc_stub::FUN_100c10a80(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c10a80(param_1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_transaction);
  }
  IVar1 = objc_stub::FUN_100c025e0(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_fingerprint);
  IVar1 = objc_stub::FUN_100c11060(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_user);
  IVar1 = objc_stub::FUN_100c06e60(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_modules);
  IVar1 = objc_stub::FUN_100c0f200(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_stacktrace);
  IVar1 = objc_stub::FUN_100c0a160(param_1);
  IVar2 = objc_stub::FUN_100c0a1e0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c0a1e0(param_1);
    IVar2 = objc_stub::count(IVar2);
    if (IVar2 != 0) {
      IVar2 = objc_stub::FUN_100c0a1e0(param_1);
      objc_stub::FUN_100bfd740(IVar1,IVar2);
    }
  }
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_breadcrumbs);
  }
  IVar1 = objc_stub::FUN_100bffe20(param_1);
  FUN_100bcfb78(IVar1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_contexts);
  IVar1 = objc_stub::FUN_100c06ca0(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c06ca0(param_1);
    IVar1 = objc_stub::serialize(IVar1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_message);
  }
  IVar1 = objc_stub::FUN_100c06680(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_logger);
  IVar1 = objc_stub::FUN_100c0a240(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_server_name);
  IVar1 = objc_stub::type(param_1);
  objc_stub::setValue_forKey_(param_3,IVar1,&cf_type);
  IVar1 = objc_stub::type(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::type(param_1);
    IVar1 = objc_stub::isEqualToString_(IVar1,&cf_transaction);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_100c0f4e0(param_1);
      if (IVar1 == 0) {
        IVar1 = objc_stub::timestamp(param_1);
      }
      else {
        IVar1 = objc_stub::FUN_100c0f4e0(param_1);
      }
      objc_stub::timeIntervalSince1970(IVar1);
      IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
      objc_stub::setValue_forKey_(param_3,IVar1,&cf_start_timestamp);
    }
  }
  IVar1 = objc_stub::request(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::request(param_1);
    IVar1 = objc_stub::serialize(IVar1);
    objc_stub::setValue_forKey_(param_3,IVar1,&cf_request);
  }
  return;
}



/* Address: 0x100b60064 | SentryEvent::serializeBreadcrumbs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEvent::serializeBreadcrumbs(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID self_01;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
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
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self_01 = objc_stub::FUN_100bfe8a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_01,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(self_01);
        }
        IVar2 = objc_stub::serialize(*(ID *)(lStack_118 + IVar4 * 8));
        objc_stub::addObject_(self_00,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_01,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b6019c | SentryEvent::isAppHangEvent */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryEvent::isAppHangEvent(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::FUN_100c02020(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 == 1) {
    IVar2 = objc_stub::FUN_100c02020(param_1);
    IVar2 = objc_stub::firstObject(IVar2);
    IVar2 = objc_stub::type(IVar2);
    IVar2 = objc_stub::FUN_100c05880((ID)&objc::class_t::_TtC6Sentry23SentryAppHangTypeMapper,IVar2)
    ;
    bVar1 = (bool)IVar2;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* Address: 0x100b6025c | SentryEvent::eventId */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::eventId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b60264 | SentryEvent::setEventId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setEventId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b60270 | SentryEvent::message */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::message(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b60278 | SentryEvent::setMessage: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b60284 | SentryEvent::error */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::error(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b6028c | SentryEvent::setError: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setError_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b60294 | SentryEvent::timestamp */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::timestamp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b6029c | SentryEvent::setTimestamp: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b602a8 | SentryEvent::startTimestamp */

/* Function Stack Size: 0x10 bytes */

ID SentryEvent::startTimestamp(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b602b0 | SentryEvent::setStartTimestamp: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEvent::setStartTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b602bc | SentryEvent::level */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryEvent::level(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x38);
}


