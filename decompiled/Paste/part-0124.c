/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10017f724 | FUN_10017f724 */

ulong FUN_10017f724(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 9) {
    if (param_2 < 0x11) {
      return (ulong)*(uint *)(param_1 + *(long *)(&DAT_100c309e0 + (ulong)param_2 * 8));
    }
switchD_10017f76c_default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10017f888);
    (*pcVar1)();
  }
  switch(param_2) {
  case 0:
    uVar2 = *(ulong *)(param_1 + 0x120);
    break;
  case 1:
    uVar2 = *(ulong *)(param_1 + 0x108);
    break;
  case 2:
    uVar2 = *(ulong *)(param_1 + 0x118);
    break;
  case 3:
    return *(ulong *)(param_1 + 0x20);
  case 4:
    return *(ulong *)(param_1 + 0x28);
  case 5:
    return *(ulong *)(param_1 + 0x30);
  case 6:
    return *(ulong *)(param_1 + 0x38);
  case 7:
    return *(ulong *)(param_1 + 0x40);
  case 8:
    return *(ulong *)(param_1 + 0x48);
  case 9:
    return *(ulong *)(param_1 + 0x50);
  case 10:
    return *(ulong *)(param_1 + 0x58);
  case 0xb:
    return *(ulong *)(param_1 + 0x60);
  case 0xc:
    return *(ulong *)(param_1 + 0x68);
  case 0xd:
    return *(ulong *)(param_1 + 0x70);
  case 0xe:
    return *(ulong *)(param_1 + 0x78);
  case 0xf:
    return *(ulong *)(param_1 + 0x80);
  case 0x10:
    return *(ulong *)(param_1 + 0x88);
  case 0x11:
    return *(ulong *)(param_1 + 0x90);
  case 0x12:
    return *(ulong *)(param_1 + 0x98);
  case 0x13:
    return *(ulong *)(param_1 + 0xa0);
  case 0x14:
    return *(ulong *)(param_1 + 0xa8);
  case 0x15:
    return *(ulong *)(param_1 + 0xb0);
  case 0x16:
    return *(ulong *)(param_1 + 0xb8);
  case 0x17:
    return *(ulong *)(param_1 + 0xc0);
  case 0x18:
    return *(ulong *)(param_1 + 200);
  case 0x19:
    return *(ulong *)(param_1 + 0xd0);
  case 0x1a:
    return *(ulong *)(param_1 + 0xd8);
  case 0x1b:
    return *(ulong *)(param_1 + 0xe0);
  case 0x1c:
    return *(ulong *)(param_1 + 0xe8);
  case 0x1d:
    return *(ulong *)(param_1 + 0xf0);
  case 0x1e:
    return *(ulong *)(param_1 + 0xf8);
  case 0x1f:
    return *(ulong *)(param_1 + 0x100);
  case 0x20:
    uVar2 = *(ulong *)(param_1 + 0x110);
    break;
  case 0x21:
    return (ulong)*(uint *)(param_1 + 0x128);
  default:
    goto switchD_10017f76c_default;
  }
  return uVar2 & 0xfffffffff;
}



/* Address: 0x10017f888 | FUN_10017f888 */

void FUN_10017f888(long param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)param_3;
  if (*(int *)(param_1 + 0x18) == 9) {
    switch(param_2) {
    case 0:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 1;
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      return;
    case 1:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      return;
    case 2:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 4;
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      return;
    case 3:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 8;
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      return;
    case 4:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      return;
    case 5:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x20;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      return;
    case 6:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40;
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      return;
    case 7:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x80;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      return;
    case 8:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x100;
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      return;
    case 9:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x200;
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      return;
    case 10:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x400;
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      return;
    case 0xb:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x800;
      *(undefined4 *)(param_1 + 0x44) = uVar2;
      return;
    case 0xc:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1000;
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      return;
    case 0xd:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x2000;
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      return;
    case 0xe:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x4000;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      return;
    case 0xf:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x8000;
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      return;
    case 0x10:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10000;
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 1;
      *(undefined8 *)(param_1 + 0x120) = param_3;
      return;
    case 1:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 2;
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    case 2:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 4;
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    case 3:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 8;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      return;
    case 4:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10;
      *(undefined8 *)(param_1 + 0x28) = param_3;
      return;
    case 5:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x20;
      *(undefined8 *)(param_1 + 0x30) = param_3;
      return;
    case 6:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40;
      *(undefined8 *)(param_1 + 0x38) = param_3;
      return;
    case 7:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x80;
      *(undefined8 *)(param_1 + 0x40) = param_3;
      return;
    case 8:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x100;
      *(undefined8 *)(param_1 + 0x48) = param_3;
      return;
    case 9:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x200;
      *(undefined8 *)(param_1 + 0x50) = param_3;
      return;
    case 10:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x400;
      *(undefined8 *)(param_1 + 0x58) = param_3;
      return;
    case 0xb:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x800;
      *(undefined8 *)(param_1 + 0x60) = param_3;
      return;
    case 0xc:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1000;
      *(undefined8 *)(param_1 + 0x68) = param_3;
      return;
    case 0xd:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x2000;
      *(undefined8 *)(param_1 + 0x70) = param_3;
      return;
    case 0xe:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x4000;
      *(undefined8 *)(param_1 + 0x78) = param_3;
      return;
    case 0xf:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x8000;
      *(undefined8 *)(param_1 + 0x80) = param_3;
      return;
    case 0x10:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10000;
      *(undefined8 *)(param_1 + 0x88) = param_3;
      return;
    case 0x11:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x20000;
      *(undefined8 *)(param_1 + 0x90) = param_3;
      return;
    case 0x12:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40000;
      *(undefined8 *)(param_1 + 0x98) = param_3;
      return;
    case 0x13:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x80000;
      *(undefined8 *)(param_1 + 0xa0) = param_3;
      return;
    case 0x14:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x100000;
      *(undefined8 *)(param_1 + 0xa8) = param_3;
      return;
    case 0x15:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x200000;
      *(undefined8 *)(param_1 + 0xb0) = param_3;
      return;
    case 0x16:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x400000;
      *(undefined8 *)(param_1 + 0xb8) = param_3;
      return;
    case 0x17:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x800000;
      *(undefined8 *)(param_1 + 0xc0) = param_3;
      return;
    case 0x18:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1000000;
      *(undefined8 *)(param_1 + 200) = param_3;
      return;
    case 0x19:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x2000000;
      *(undefined8 *)(param_1 + 0xd0) = param_3;
      return;
    case 0x1a:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x4000000;
      *(undefined8 *)(param_1 + 0xd8) = param_3;
      return;
    case 0x1b:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x8000000;
      *(undefined8 *)(param_1 + 0xe0) = param_3;
      return;
    case 0x1c:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10000000;
      *(undefined8 *)(param_1 + 0xe8) = param_3;
      return;
    case 0x1d:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x20000000;
      *(undefined8 *)(param_1 + 0xf0) = param_3;
      return;
    case 0x1e:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40000000;
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    case 0x1f:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x80000000;
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    case 0x20:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x100000000;
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    case 0x21:
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x200000000;
      *(undefined4 *)(param_1 + 0x128) = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10017fcd8);
  (*pcVar1)();
}



/* Address: 0x10017fcd8 | FUN_10017fcd8 */

undefined8 FUN_10017fcd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11;
  if (*(int *)(param_1 + 0x18) != 9) {
    uVar1 = 0x22;
  }
  return uVar1;
}



/* Address: 0x10017fcf0 | FUN_10017fcf0 */

undefined * FUN_10017fcf0(long param_1,uint param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x18) == 9) {
    if (0x10 < param_2) {
LAB_10017fd38:
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    ppuVar1 = &PTR_s_pc_100eba5f8;
  }
  else {
    if (0x21 < param_2) goto LAB_10017fd38;
    ppuVar1 = &PTR_s_pc_100eba680;
  }
  return ppuVar1[param_2];
}



/* Address: 0x10017fd3c | FUN_10017fd3c */

void FUN_10017fd3c(long param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = 0;
  bVar4 = *(int *)(param_1 + 0x18) != 9;
  lVar1 = 7;
  if (bVar4) {
    lVar1 = 0xb;
  }
  puVar2 = (uint *)&UNK_100c30698;
  if (bVar4) {
    puVar2 = &DAT_100c306b4;
  }
  uVar3 = 0x11;
  if (bVar4) {
    uVar3 = 0x22;
  }
  do {
    lVar5 = param_1;
    FUN_10017f6ec(param_1,uVar8);
    puVar6 = puVar2;
    lVar7 = lVar1;
    if ((int)lVar5 != 0) {
      do {
        if (uVar8 == *puVar6) goto LAB_10017fdc4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
      FUN_10017f6fc(param_1,uVar8);
    }
LAB_10017fdc4:
    uVar8 = uVar8 + 1;
    if (uVar8 == uVar3) {
      return;
    }
  } while( true );
}



/* Address: 0x10017fde4 | FUN_10017fde4 */

bool FUN_10017fde4(long param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  bVar3 = *(int *)(param_1 + 0x18) != 9;
  puVar1 = &DAT_100c306e0;
  if (bVar3) {
    puVar1 = &DAT_100c307e0;
  }
  lVar4 = 0x10;
  if (bVar3) {
    lVar4 = 0x20;
  }
  puVar5 = (undefined8 *)(puVar1 + 2);
  do {
    iVar2 = *(int *)(puVar5 + -1);
    if (iVar2 == param_2) {
      *param_3 = *puVar5;
      break;
    }
    puVar5 = puVar5 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return iVar2 == param_2;
}



/* Address: 0x10017fe40 | FUN_10017fe40 */

bool FUN_10017fe40(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  bVar2 = *(int *)(param_1 + 0x18) != 9;
  puVar1 = &DAT_100c306e0;
  if (bVar2) {
    puVar1 = &DAT_100c307e0;
  }
  lVar3 = 0x10;
  if (bVar2) {
    lVar3 = 0x20;
  }
  plVar4 = (long *)(puVar1 + 2);
  do {
    lVar5 = *plVar4;
    if (lVar5 == param_2) {
      *param_3 = (int)plVar4[-1];
      break;
    }
    plVar4 = plVar4 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return lVar5 == param_2;
}



/* Address: 0x10017fe9c | FUN_10017fe9c */

void FUN_10017fe9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_340 [16];
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  
  local_330 = param_2;
  local_328 = param_3;
  uStack_320 = param_4;
  uStack_318 = param_5;
  uStack_310 = param_6;
  uStack_308 = param_7;
  uStack_300 = param_8;
  uStack_2f8 = param_9;
  uStack_2f0 = param_1;
  FUN_10017ff2c(param_2,param_3,auStack_340);
  return;
}



/* Address: 0x10017ff2c | FUN_10017ff2c */

void FUN_10017ff2c(code *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_160 [304];
  
  FUN_1001751ec(param_3,0,0x10);
  FUN_1001751ec(param_3 + 0x120,0,0x210);
  FUN_10017f5f8(auStack_160,param_3);
  (*param_1)(auStack_160,param_2);
  return;
}



/* Address: 0x10017ff98 | FUN_10017ff98 */

undefined4
FUN_10017ff98(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_118;
  undefined1 auStack_110 [76];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [56];
  
  lVar2 = param_3;
  FUN_10017f6ec(param_3,0);
  if ((int)lVar2 == 0) {
    return 3;
  }
  lVar2 = param_3;
  FUN_10017f724(param_3,0);
  if (lVar2 == 0) {
    return 4;
  }
  FUN_10017c3d8(param_2,1);
  lVar3 = param_2;
  FUN_10017c3f8(param_2,lVar2);
  if ((lVar3 == 0) || (lVar4 = lVar3, FUN_10017d1c8(), (int)lVar4 != 0)) {
    uVar8 = 4;
    goto LAB_1001800b4;
  }
  uVar5 = (ulong)*(uint *)(lVar3 + 0x24);
  (**(code **)(*(long *)(lVar3 + 0xa0) + 8))(uVar5);
  puVar6 = auStack_b8;
  FUN_1001753ec(puVar6,auStack_88,uVar5);
  if ((int)puVar6 == 0) {
    puVar6 = auStack_b8;
    FUN_1001754a4(puVar6,lVar2 - *(long *)(lVar3 + 8),&local_c0,&local_c4);
    FUN_100175904(auStack_b8);
    if ((int)puVar6 == 0) {
      puVar6 = auStack_110;
      FUN_100175ca4(puVar6,uVar5,local_c4);
      if ((int)puVar6 == 0) {
        iVar1 = (int)auStack_110;
        FUN_10017617c();
        if (iVar1 == 5) {
          uVar8 = 2;
        }
        else {
          uVar7 = *(undefined8 *)(lVar3 + 8);
          FUN_100174f78(uVar7,local_c0,&local_118);
          if ((int)uVar7 == 0) {
            uVar8 = 5;
          }
          else {
            FUN_1001761bc(param_1,local_118,param_3,auStack_110,param_5);
            uVar8 = 0;
            if ((int)param_1 != 0) {
              uVar8 = 2;
            }
          }
        }
        FUN_1001764bc(auStack_110);
        goto LAB_1001800ac;
      }
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 5;
  }
LAB_1001800ac:
  FUN_10017c9b0(auStack_88);
LAB_1001800b4:
  FUN_10017c3d8(param_2,0);
  return uVar8;
}



/* Address: 0x100180144 | FUN_100180144 */

undefined4
FUN_100180144(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c28 [16];
  long local_c18;
  undefined4 local_c10;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined1 auStack_bf0 [80];
  undefined1 auStack_ba0 [2640];
  undefined1 auStack_150 [88];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  long local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  uVar1 = param_3;
  FUN_10017f6ec(param_3,0);
  if ((int)uVar1 == 0) {
    return 3;
  }
  uVar1 = param_3;
  FUN_10017f724(param_3,0);
  if (uVar1 == 0) {
    return 4;
  }
  FUN_10017c3d8(param_2,1);
  lVar2 = param_2;
  FUN_10017c3f8(param_2,uVar1);
  if (lVar2 == 0) {
    FUN_10017c3d8(param_2,0);
    return 4;
  }
  if (*(char *)(lVar2 + 0x98) == '\x01') {
    __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC1EPK25PHplcrash_async_byteorder
              (auStack_bf0,*(undefined8 *)(lVar2 + 0xa0));
    __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC1Ev(auStack_ba0);
    lVar4 = -0x88;
    lVar5 = lVar2;
    FUN_10017d1c8(lVar2,"__TEXT","__eh_frame",auStack_98);
    if ((int)lVar5 != 0) {
      lVar4 = -0xd8;
      lVar3 = lVar2;
      FUN_10017d1c8(lVar2,"__DWARF","__debug_frame",auStack_e8);
      if ((int)lVar3 != 0) {
LAB_100180320:
        uVar9 = 2;
        goto LAB_100180374;
      }
    }
    puVar8 = &stack0xfffffffffffffff0 + lVar4;
    puVar6 = auStack_b0;
    FUN_100179694(puVar6,puVar8,*(undefined8 *)(lVar2 + 0xa0),*(undefined1 *)(lVar2 + 0x98),
                  (int)lVar5 != 0);
    if ((int)puVar6 == 0) {
      puVar6 = auStack_b0;
      FUN_1001796a8(puVar6,0,uVar1,auStack_c28);
      if ((int)puVar6 == 0) {
        uVar10 = *(undefined8 *)(lVar2 + 0xa0);
        puVar7 = puVar8;
        FUN_10017c740(puVar8);
        puVar6 = auStack_150;
        __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
                  (puVar6,puVar8,uVar10,auStack_bf0,puVar7 + local_c18);
        uVar9 = local_c10;
        if ((int)puVar6 == 0) {
          uVar10 = *(undefined8 *)(lVar2 + 0xa0);
          puVar7 = puVar8;
          FUN_10017c740(puVar8);
          puVar6 = auStack_ba0;
          __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12eval_programEP21plcrash_async_mobjectyyPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIyEEPK25PHplcrash_async_byteorderyxy
                    (puVar6,puVar8,uVar1,uVar9,auStack_150,auStack_bf0,uVar10,puVar7,local_f8,
                     local_f0);
          if ((int)puVar6 == 0) {
            uVar10 = *(undefined8 *)(lVar2 + 0xa0);
            puVar7 = puVar8;
            FUN_10017c740(puVar8);
            puVar6 = auStack_ba0;
            __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12eval_programEP21plcrash_async_mobjectyyPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIyEEPK25PHplcrash_async_byteorderyxy
                      (puVar6,puVar8,uVar1,local_c10,auStack_150,auStack_bf0,uVar10,puVar7,local_c00
                       ,uStack_bf8);
            if ((int)puVar6 != 0) goto LAB_100180470;
            puVar6 = auStack_ba0;
            __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_
                      (puVar6,param_1,auStack_150,param_3,*(undefined8 *)(lVar2 + 0xa0),param_5);
            uVar9 = 0;
            if ((int)puVar6 != 0) {
              uVar9 = 2;
            }
          }
          else {
LAB_100180470:
            uVar9 = 4;
          }
          FUN_10017c9b0(puVar8);
          FUN_100179690(auStack_150);
        }
        else {
          FUN_10017b684(auStack_c28);
          FUN_10017c9b0(puVar8);
          uVar9 = 4;
        }
        puVar8 = auStack_c28;
        goto LAB_100180528;
      }
LAB_100180368:
      uVar9 = 4;
    }
    else {
LAB_100180348:
      uVar9 = 5;
    }
    FUN_10017c9b0(puVar8);
  }
  else {
    __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC1EPK25PHplcrash_async_byteorder
              (auStack_c28,*(undefined8 *)(lVar2 + 0xa0));
    __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC1Ev(auStack_ba0);
    puVar8 = auStack_bf0;
    lVar4 = lVar2;
    FUN_10017d1c8(lVar2,"__TEXT","__eh_frame",auStack_bf0);
    if ((int)lVar4 != 0) {
      puVar8 = auStack_98;
      lVar5 = lVar2;
      FUN_10017d1c8(lVar2,"__DWARF","__debug_frame",auStack_98);
      if ((int)lVar5 != 0) goto LAB_100180320;
    }
    puVar6 = auStack_b0;
    FUN_100179694(puVar6,puVar8,*(undefined8 *)(lVar2 + 0xa0),*(undefined1 *)(lVar2 + 0x98),
                  (int)lVar4 != 0);
    if ((int)puVar6 != 0) goto LAB_100180348;
    puVar6 = auStack_b0;
    FUN_1001796a8(puVar6,0,uVar1 & 0xffffffff,auStack_e8);
    if ((int)puVar6 != 0) goto LAB_100180368;
    uVar10 = *(undefined8 *)(lVar2 + 0xa0);
    puVar7 = puVar8;
    FUN_10017c740(puVar8);
    puVar6 = auStack_150;
    __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
              (puVar6,puVar8,uVar10,auStack_c28,puVar7 + local_d8);
    uVar9 = local_d0;
    if ((int)puVar6 == 0) {
      uVar10 = *(undefined8 *)(lVar2 + 0xa0);
      puVar7 = puVar8;
      FUN_10017c740(puVar8);
      puVar6 = auStack_ba0;
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12eval_programEP21plcrash_async_mobjectjjPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIjEEPK25PHplcrash_async_byteorderyxy
                (puVar6,puVar8,uVar1,uVar9,auStack_150,auStack_c28,uVar10,puVar7,local_f8,local_f0);
      if ((int)puVar6 == 0) {
        uVar10 = *(undefined8 *)(lVar2 + 0xa0);
        puVar7 = puVar8;
        FUN_10017c740(puVar8);
        puVar6 = auStack_ba0;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12eval_programEP21plcrash_async_mobjectjjPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIjEEPK25PHplcrash_async_byteorderyxy
                  (puVar6,puVar8,uVar1,local_d0,auStack_150,auStack_c28,uVar10,puVar7,local_c0,
                   uStack_b8);
        if ((int)puVar6 != 0) goto LAB_100180510;
        puVar6 = auStack_ba0;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_
                  (puVar6,param_1,auStack_150,param_3,*(undefined8 *)(lVar2 + 0xa0),param_5);
        uVar9 = 0;
        if ((int)puVar6 != 0) {
          uVar9 = 2;
        }
      }
      else {
LAB_100180510:
        uVar9 = 4;
      }
      FUN_10017c9b0(puVar8);
      FUN_100179690(auStack_150);
    }
    else {
      FUN_10017b684(auStack_e8);
      FUN_10017c9b0(puVar8);
      uVar9 = 4;
    }
    puVar8 = auStack_e8;
LAB_100180528:
    FUN_10017b684(puVar8);
  }
LAB_100180374:
  FUN_10017c3d8(param_2,0);
  return uVar9;
}



/* Address: 0x100180588 | FUN_100180588 */

undefined8
FUN_100180588(undefined8 param_1,undefined8 param_2,void *param_3,void *param_4,void *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ulong local_60;
  ulong uStack_58;
  
  pvVar4 = param_3;
  FUN_10017f71c();
  uVar1 = 0x10;
  if (pvVar4 != (void *)0x8) {
    uVar1 = 8;
  }
  pvVar5 = param_3;
  FUN_10017f6ec(param_3,1);
  if ((int)pvVar5 != 0) {
    pvVar5 = param_3;
    FUN_10017f724(param_3,1);
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if ((param_4 != (void *)0x0) && (pvVar6 = param_4, FUN_10017f6ec(param_4,1), (int)pvVar6 != 0))
    {
      FUN_10017f724(param_4,1);
      pvVar6 = param_3;
      FUN_10017f714();
      if (((int)pvVar6 == 2) && (pvVar5 < param_4)) {
        return 3;
      }
      if (((int)pvVar6 == 1) && (param_4 < pvVar5)) {
        return 3;
      }
    }
    FUN_100174ff0(param_1,pvVar5,0,&local_60,uVar1);
    if ((int)param_1 == 0) {
      uVar2 = uStack_58;
      uVar3 = local_60;
      if (pvVar4 != (void *)0x8) {
        uVar2 = local_60 >> 0x20;
        uVar3 = local_60 & 0xffffffff;
      }
      _memcpy(param_5,param_3,0x130);
      FUN_10017f5f0(param_5);
      FUN_10017f888(param_5,1,uVar3);
      FUN_10017f888(param_5,0,uVar2);
      return 0;
    }
  }
  return 3;
}



/* Address: 0x1001806dc | FUN_1001806dc */

char * FUN_1001806dc(uint param_1)

{
  if (param_1 < 8) {
    return (&PTR_s_No_error_100eba7a8)[param_1];
  }
  return "Unhandled error code";
}



/* Address: 0x100180700 | FUN_100180700 */

undefined8
FUN_100180700(mach_port_name_t *param_1,mach_port_name_t param_2,undefined8 param_3,
             undefined8 param_4)

{
  param_1[4] = 0;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_4;
  _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_2,0,1);
  FUN_1001751cc(param_1 + 0x52,param_3,0x130);
  return 0;
}



/* Address: 0x100180758 | FUN_100180758 */

void FUN_100180758(mach_port_name_t *param_1,mach_port_name_t param_2,undefined8 param_3,
                  undefined8 param_4)

{
  param_1[4] = 0;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_4;
  _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_2,0,1);
  FUN_10017f674(param_1 + 0x52,param_3);
  return;
}



/* Address: 0x1001807a4 | FUN_1001807a4 */

void FUN_1001807a4(int *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_170 [304];
  
  iVar3 = (int)auStack_170;
  puVar2 = auStack_170;
  if (param_1[4] == 1) {
    piVar4 = (int *)0x0;
  }
  else {
    if (param_1[4] == 0) {
      iVar3 = 1;
      goto LAB_1001807e0;
    }
    piVar4 = param_1 + 6;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    iVar1 = *param_1;
    (*(code *)*param_2)(iVar1,*(undefined8 *)(param_1 + 2),param_1 + 0x52,piVar4,auStack_170);
    if (iVar1 == 0) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  FUN_10017f6ec(auStack_170,0);
  if (iVar3 == 0) {
    return;
  }
  FUN_10017f724(auStack_170,0);
  if (puVar2 <= *(undefined1 **)PTR__vm_page_size_100ea8be0) {
    return;
  }
  _memcpy(param_1 + 6,param_1 + 0x52,0x130);
  _memcpy(param_1 + 0x52,auStack_170,0x130);
  iVar3 = param_1[4] + 1;
LAB_1001807e0:
  param_1[4] = iVar3;
  return;
}



/* Address: 0x1001808a8 | FUN_1001808a8 */

void FUN_1001808a8(undefined8 param_1)

{
  FUN_1001807a4(param_1,&PTR_FUN_100eba790,3);
  return;
}



/* Address: 0x1001808b8 | FUN_1001808b8 */

undefined8 FUN_1001808b8(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1 + 0x148;
  FUN_10017f6ec();
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  else {
    param_1 = param_1 + 0x148;
    FUN_10017f724(param_1,param_2);
    uVar2 = 0;
    *param_3 = param_1;
  }
  return uVar2;
}



/* Address: 0x100180910 | FUN_100180910 */

void FUN_100180910(long param_1)

{
  FUN_10017fcf0(param_1 + 0x148);
  return;
}



/* Address: 0x100180918 | FUN_100180918 */

void FUN_100180918(long param_1)

{
  FUN_10017fcd8(param_1 + 0x148);
  return;
}



/* Address: 0x100180920 | FUN_100180920 */

void FUN_100180920(mach_port_name_t *param_1)

{
  if (*param_1 != 0) {
    _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*param_1,0,-1);
    return;
  }
  return;
}



/* Address: 0x100180944 | PHPLCrashHostInfo::currentHostInfo */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashHostInfo::currentHostInfo(ID param_1,SEL param_2)

{
  _objc_alloc_init();
  return param_1;
}



/* Address: 0x100180958 | PHPLCrashHostInfo::init */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID PHPLCrashHostInfo::init(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  undefined *puVar3;
  size_t sVar4;
  ID self;
  ID IVar5;
  ID IVar6;
  int *piVar7;
  char *pcVar8;
  ID local_70;
  class_t *pcStack_68;
  undefined4 local_60;
  int local_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined6 uStack_54;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_68 = &objc::class_t::PHPLCrashHostInfo;
  local_70 = param_1;
  IVar2 = ::NSObject::init((ID)&local_70,"init");
  if (IVar2 != 0) {
    pcVar8 = "kern.osrelease";
    FUN_10018b45c();
    if (pcVar8 != (char *)0x0) {
      puVar3 = &_OBJC_CLASS___NSString;
      _objc_alloc();
      sVar4 = _strlen(pcVar8);
      self = objc_stub::initWithBytesNoCopy_length_encoding_freeWhenDone_
                       ((ID)puVar3,pcVar8,sVar4,4,1);
      IVar5 = NSScanner::scannerWithString_((ID)&_OBJC_CLASS___NSScanner,self);
      *(undefined8 *)(IVar2 + 0x10) = 0;
      *(undefined8 *)(IVar2 + 0x18) = 0;
      *(undefined8 *)(IVar2 + 8) = 0;
      IVar6 = NSScanner::scanInteger_(IVar5);
      if ((((((int)IVar6 == 0) ||
            (IVar6 = NSScanner::scanString_intoString_(IVar5,&cf__,0), (int)IVar6 == 0)) ||
           (IVar6 = NSScanner::scanInteger_(IVar5,(undefined8 *)(IVar2 + 0x10)), (int)IVar6 == 0))
          || ((IVar6 = NSScanner::scanString_intoString_(IVar5,&cf__,0), (int)IVar6 == 0 ||
              (IVar5 = NSScanner::scanInteger_(IVar5,(undefined8 *)(IVar2 + 0x18)), (IVar5 & 1) == 0
              )))) &&
         (puVar3 = PTR___os_log_default_100ea8350,
         _os_log_type_enabled(PTR___os_log_default_100ea8350,0), (int)puVar3 != 0)) {
        _objc_retainAutorelease();
        IVar5 = objc_stub::UTF8String(self);
        local_60 = 0x8200102;
        local_5c = (int)IVar5;
        uStack_58 = (undefined2)(IVar5 >> 0x20);
        uStack_56 = (undefined2)(IVar5 >> 0x30);
        __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                      "[PLCrashReporter] Unexpected kern.osrelease string format: %s",&local_60,0xc)
        ;
      }
      goto LAB_100180b6c;
    }
    puVar3 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar3 != 0) {
      piVar7 = ___error();
      iVar1 = *piVar7;
      piVar7 = ___error();
      pcVar8 = _strerror(*piVar7);
      local_60 = 0x4000202;
      uStack_58 = 0x820;
      uStack_56 = SUB82(pcVar8,0);
      uStack_54 = (undefined6)((ulong)pcVar8 >> 0x10);
      local_5c = iVar1;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Failed to fetch kern.osrelease value %d: %s",&local_60,0x12);
    }
  }
  IVar2 = 0;
LAB_100180b6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}



/* Address: 0x100180bac | PHPLCrashHostInfo::darwinVersion */

/* Function Stack Size: 0x10 bytes */

PLCrashHostInfoVersion PHPLCrashHostInfo::darwinVersion(ID param_1,SEL param_2)

{
  unsigned_long_long in_x2;
  undefined8 *in_x8;
  undefined8 uVar1;
  PLCrashHostInfoVersion PVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  in_x8[1] = *(undefined8 *)(param_1 + 0x10);
  *in_x8 = uVar1;
  in_x8[2] = *(undefined8 *)(param_1 + 0x18);
  PVar2.field1_0x8 = (unsigned_long_long)param_2;
  PVar2.field0_0x0 = param_1;
  PVar2.field2_0x10 = in_x2;
  return PVar2;
}



/* Address: 0x100180bc0 | FUN_100180bc0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8
FUN_100180bc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  size_t sVar7;
  class_t *self;
  undefined8 uVar8;
  undefined8 uVar9;
  timeval tVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)param_1 = param_5;
  *(undefined1 *)((long)param_1 + 4) = param_6;
  uVar3 = 0;
  uVar8 = param_2;
  _CFUUIDCreate();
  uVar9 = uVar3;
  _CFUUIDGetUUIDBytes();
  *(undefined8 *)((long)param_1 + 5) = uVar9;
  *(undefined8 *)((long)param_1 + 0xd) = uVar8;
  _CFRelease(uVar3);
  FUN_100180f9c(param_1 + 0xc,param_2);
  FUN_100180f9c(param_1 + 0xe,param_3);
  if (param_4 != 0) {
    FUN_100180f9c(param_1 + 0x10,param_4);
  }
  IVar4 = PHPLCrashProcessInfo::currentProcessInfo((ID)&objc::class_t::PHPLCrashProcessInfo);
  if (IVar4 == 0) {
    uVar9 = 5;
  }
  else {
    iVar1 = PHPLCrashProcessInfo::processID(IVar4);
    *(int *)(param_1 + 0x14) = iVar1;
    IVar5 = PHPLCrashProcessInfo::processName(IVar4);
    if (IVar5 != 0) {
      IVar5 = PHPLCrashProcessInfo::processName(IVar4);
      FUN_100180f9c(param_1 + 0x12,IVar5);
    }
    tVar10 = PHPLCrashProcessInfo::startTime(IVar4);
    param_1[0x17] = tVar10.field0_0x0;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    __NSGetExecutablePath(0,&local_68);
    if ((int)local_68 != 0) {
      pcVar6 = _malloc(local_68 & 0xffffffff);
      __NSGetExecutablePath(pcVar6,&local_68);
      param_1[0x16] = pcVar6;
      sVar7 = _strnlen(pcVar6,local_68 & 0xffffffff);
      param_1[0x15] = sVar7;
    }
    iVar1 = PHPLCrashProcessInfo::parentProcessID(IVar4);
    *(int *)(param_1 + 0x1a) = iVar1;
    self = &objc::class_t::PHPLCrashProcessInfo;
    _objc_alloc();
    iVar1 = PHPLCrashProcessInfo::parentProcessID(IVar4);
    IVar4 = objc_stub::initWithProcessID_((ID)self,(ulong)iVar1);
    if ((IVar4 != 0) && (IVar5 = objc_stub::processName(IVar4), IVar5 != 0)) {
      IVar4 = objc_stub::processName(IVar4);
      FUN_100180f9c(param_1 + 0x18,IVar4);
    }
    pcVar6 = "hw.model";
    FUN_10018b45c();
    param_1[8] = pcVar6;
    sVar7 = 0;
    if (pcVar6 != (char *)0x0) {
      sVar7 = _strlen(pcVar6);
    }
    param_1[7] = sVar7;
    iVar2 = 0xd9538a;
    FUN_10018b514("hw.cputype",&local_68);
    if (iVar2 != 0) {
      param_1[9] = (long)(int)local_68;
    }
    iVar2 = 0xd95395;
    FUN_10018b514("hw.cpusubtype",&local_68);
    if (iVar2 != 0) {
      param_1[10] = (long)(int)local_68;
    }
    iVar2 = 0xd953a3;
    FUN_10018b514("hw.physicalcpu_max",&local_68);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xb) = (int)local_68;
    }
    iVar2 = 0xd953b6;
    FUN_10018b514("hw.logicalcpu_max",&local_68);
    if (iVar2 != 0) {
      *(int *)((long)param_1 + 0x5c) = (int)local_68;
    }
    iVar2 = 0xd953c8;
    FUN_10018b514("sysctl.proc_native",&local_68);
    if ((iVar2 == 0) || ((int)local_68 != 0)) {
      *(undefined1 *)((long)param_1 + 0xd4) = 1;
    }
    else {
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
    }
    pcVar6 = "kern.osversion";
    FUN_10018b45c();
    param_1[6] = pcVar6;
    sVar7 = 0;
    if (pcVar6 != (char *)0x0) {
      sVar7 = _strlen(pcVar6);
    }
    param_1[5] = sVar7;
    IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    if (IVar4 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
    }
    else {
      NSProcessInfo::operatingSystemVersion(IVar4,&local_68);
    }
    IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__ld__ld);
    if (0 < local_58) {
      IVar4 = NSString::stringByAppendingFormat_(IVar4,&cf___ld);
    }
    FUN_100180f9c(param_1 + 3,IVar4);
    uVar9 = 0;
    DataMemoryBarrier(2,3);
  }
  return uVar9;
}



/* Address: 0x100180f9c | FUN_100180f9c */

void FUN_100180f9c(size_t *param_1,ID param_2)

{
  char *pcVar1;
  size_t sVar2;
  
  _objc_retainAutorelease(param_2);
  pcVar1 = (char *)objc_stub::UTF8String(param_2);
  pcVar1 = _strdup(pcVar1);
  param_1[1] = (size_t)pcVar1;
  sVar2 = 0;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
  }
  *param_1 = sVar2;
  return;
}



/* Address: 0x100180fe0 | FUN_100180fe0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100180fe0(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  char *pcVar3;
  ID IVar4;
  void *pvVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  long lVar9;
  ID IVar10;
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
  if (*(char *)(param_1 + 0xd8) == '\0') {
    *(undefined1 *)(param_1 + 0xd8) = 1;
    IVar2 = objc_stub::name(param_2);
    _objc_retainAutorelease();
    pcVar3 = (char *)objc_stub::UTF8String(IVar2);
    pcVar3 = _strdup(pcVar3);
    *(char **)(param_1 + 0xe0) = pcVar3;
    IVar2 = objc_stub::reason(param_2);
    if (IVar2 == 0) {
      pcVar3 = _strdup("");
      *(char **)(param_1 + 0xe8) = pcVar3;
    }
    else {
      IVar2 = objc_stub::reason(param_2);
      _objc_retainAutorelease();
      pcVar3 = (char *)objc_stub::UTF8String(IVar2);
      pcVar3 = _strdup(pcVar3);
      *(char **)(param_1 + 0xe8) = pcVar3;
    }
    IVar2 = objc_stub::callStackReturnAddresses(param_2);
    if ((IVar2 != 0) && (IVar4 = objc_stub::count(IVar2), IVar4 != 0)) {
      IVar4 = objc_stub::count(IVar2);
      *(ID *)(param_1 + 0xf8) = IVar4;
      pvVar5 = _malloc(IVar4 << 3);
      *(void **)(param_1 + 0xf0) = pvVar5;
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_e8,0x10);
      if (IVar6 != 0) {
        uVar8 = 0;
        lVar9 = *local_120;
        do {
          IVar10 = 0;
          IVar1 = 0;
          if (uVar8 <= IVar4) {
            IVar1 = IVar4 - uVar8;
          }
          do {
            if (*local_120 != lVar9) {
              _objc_enumerationMutation(IVar2);
            }
            if (IVar1 == IVar10) {
              FUN_10018fd78();
              goto LAB_1001811fc;
            }
            IVar7 = objc_stub::unsignedLongLongValue(*(ID *)(lStack_128 + IVar10 * 8));
            *(ID *)(*(long *)(param_1 + 0xf0) + uVar8 * 8) = IVar7;
            uVar8 = uVar8 + 1;
            IVar10 = IVar10 + 1;
          } while (IVar6 != IVar10);
          IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_130,auStack_e8,0x10);
        } while (IVar6 != 0);
      }
    }
    DataMemoryBarrier(2,3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return 0;
    }
  }
  else {
LAB_1001811fc:
    FUN_10018fd50();
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100181204 | FUN_100181204 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100181204(long param_1,ID param_2)

{
  void *pvVar1;
  ID IVar2;
  void *pvVar3;
  
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (param_2 != 0) {
    IVar2 = param_2;
    _objc_retainAutorelease();
    pvVar1 = (void *)objc_stub::bytes(IVar2);
    IVar2 = objc_stub::length(param_2);
    pvVar3 = _malloc(IVar2);
    *(void **)(param_1 + 0x108) = pvVar3;
    _memcpy(pvVar3,pvVar1,IVar2);
    *(ID *)(param_1 + 0x100) = IVar2;
  }
  return 0;
}



/* Address: 0x100181280 | FUN_100181280 */

undefined8 FUN_100181280(void)

{
  return 0;
}



/* Address: 0x100181288 | FUN_100181288 */

void FUN_100181288(long param_1)

{
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    _free(*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    _free(*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      _free(*(void **)(param_1 + 0xe0));
    }
    if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
      _free(*(void **)(param_1 + 0xe8));
    }
    if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
      _free(*(void **)(param_1 + 0xf0));
    }
  }
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



/* Address: 0x100181374 | FUN_100181374 */

void FUN_100181374(long param_1,thread_act_t param_2,ulong param_3,undefined8 param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  time_t *ptVar2;
  thread_act_t tVar3;
  undefined *puVar4;
  kern_return_t kVar5;
  undefined4 uVar6;
  thread_act_t tVar7;
  uint uVar8;
  ulong uVar9;
  time_t tVar10;
  undefined8 uVar11;
  ulong uVar12;
  vm_size_t size;
  int iVar14;
  ulong uVar15;
  undefined4 local_6b4;
  undefined1 auStack_6b0 [556];
  mach_msg_type_number_t local_484;
  thread_act_array_t local_480;
  time_t local_478 [129];
  long local_70;
  undefined1 *puVar13;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  kVar5 = _task_threads(*(task_t *)PTR__mach_task_self__100ea8778,&local_480,&local_484);
  if (kVar5 == 0) {
    if (local_484 != 0) {
      uVar15 = 0;
      uVar9 = 0;
      do {
        tVar3 = local_480[uVar15];
        FUN_100174fb8();
        if (tVar3 != (thread_act_t)uVar9) {
          uVar8 = _thread_suspend(local_480[uVar15]);
          uVar9 = (ulong)uVar8;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_484);
    }
  }
  else {
    local_484 = 0;
  }
  iVar14 = (int)auStack_6b0;
  thunk_FUN_10017dbdc();
  if (iVar14 == 0) {
    local_478[0] = CONCAT71(local_478[0]._1_7_,1);
    FUN_100175280(param_4,"plcrash",7);
    FUN_100175280(param_4,local_478,1);
    uVar6 = 0;
    FUN_1001818b0(0,param_1);
    local_478[0] = CONCAT44(local_478[0]._4_4_,uVar6);
    FUN_100182670(param_4,9,0x10,local_478);
    FUN_1001818b0(param_4,param_1);
    tVar10 = _time(local_478);
    if (tVar10 == -1) {
      local_478[0] = 0;
    }
    local_6b4 = 0;
    FUN_100181918(0,param_1,local_478[0]);
    FUN_100182670(param_4,1,0x10,&local_6b4);
    FUN_100181918(param_4,param_1,local_478[0]);
    uVar6 = 0;
    FUN_1001819e4(0,param_1);
    local_478[0]._0_4_ = uVar6;
    FUN_100182670(param_4,8,0x10,local_478);
    FUN_1001819e4(param_4,param_1);
    uVar6 = 0;
    FUN_100181aa8(0,param_1 + 0x60,param_1 + 0x70,param_1 + 0x80);
    local_478[0]._0_4_ = uVar6;
    FUN_100182670(param_4,2,0x10,local_478);
    FUN_100181aa8(param_4,param_1 + 0x60,param_1 + 0x70,param_1 + 0x80);
    uVar6 = 0;
    FUN_100181b20(0,param_1 + 0x90,*(undefined4 *)(param_1 + 0xa0),param_1 + 0xa8,param_1 + 0xc0,
                  *(undefined4 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0xd4),
                  *(undefined8 *)(param_1 + 0xb8));
    local_478[0] = CONCAT44(local_478[0]._4_4_,uVar6);
    FUN_100182670(param_4,7,0x10,local_478);
    uVar11 = param_4;
    FUN_100181b20(param_4,param_1 + 0x90,*(undefined4 *)(param_1 + 0xa0),param_1 + 0xa8,
                  param_1 + 0xc0,*(undefined4 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0xd4),
                  *(undefined8 *)(param_1 + 0xb8));
    puVar4 = PTR__mach_task_self__100ea8778;
    if (local_484 != 0) {
      uVar15 = 0;
      iVar14 = 0;
      do {
        tVar3 = local_480[uVar15];
        FUN_100174fb8();
        if ((thread_act_t)uVar11 != tVar3 || param_6 != 0) {
          lVar1 = 0;
          if ((thread_act_t)uVar11 == tVar3) {
            lVar1 = param_6;
          }
          uVar6 = 0;
          FUN_100181c40(0,param_1,*(undefined4 *)puVar4,tVar3,iVar14,lVar1,param_3,auStack_6b0,
                        param_2 == tVar3);
          local_478[0] = CONCAT44(local_478[0]._4_4_,uVar6);
          FUN_100182670(param_4,3,0x10,local_478);
          uVar11 = param_4;
          FUN_100181c40(param_4,param_1,*(undefined4 *)puVar4,tVar3,iVar14,lVar1,param_3,auStack_6b0
                        ,param_2 == tVar3);
          iVar14 = iVar14 + 1;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_484);
    }
    _bzero(local_478,0x401);
    FUN_10017c3d8(param_3,1);
    puVar4 = PTR__mach_task_self__100ea8778;
    if (*param_5 == 0) {
      uVar15 = 0;
    }
    else if ((*(long *)(*param_5 + 8) == 0) || (uVar15 = param_3, FUN_10017c3f8(), uVar15 == 0)) {
      uVar15 = 0;
    }
    else {
      FUN_100181eac();
    }
    iVar14 = (int)uVar15;
    uVar9 = param_3;
    FUN_10017c46c(param_3,0);
    while (uVar9 != 0) {
      uVar6 = 0;
      FUN_100181fa8(0,uVar9);
      local_6b4 = uVar6;
      FUN_100182670(param_4,4,0x10,&local_6b4);
      FUN_100181fa8(param_4,uVar9);
      if ((uVar15 & 1) == 0) {
        uVar15 = uVar9;
        FUN_100181eac(uVar9,local_478);
      }
      else {
        uVar15 = 1;
      }
      iVar14 = (int)uVar15;
      uVar12 = param_3;
      FUN_10017c46c(param_3,uVar9);
      uVar9 = uVar12;
    }
    FUN_10017c3d8(param_3,0);
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      uVar6 = 0;
      FUN_1001820dc(0,param_1,param_3,auStack_6b0);
      local_6b4 = uVar6;
      FUN_100182670(param_4,5,0x10,&local_6b4);
      FUN_1001820dc(param_4,param_1,param_3,auStack_6b0);
    }
    ptVar2 = local_478;
    if (iVar14 == 0) {
      ptVar2 = (time_t *)0x0;
    }
    uVar6 = 0;
    FUN_1001821e0(0,param_5,ptVar2);
    local_6b4 = uVar6;
    FUN_100182670(param_4,6,0x10,&local_6b4);
    FUN_1001821e0(param_4,param_5,ptVar2);
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_100182670(param_4,10,0xf,param_1 + 0x100);
    }
    puVar13 = auStack_6b0;
    thunk_FUN_10017dc18();
    if (local_484 == 0) {
      size = 0;
    }
    else {
      uVar15 = 0;
      do {
        tVar7 = (thread_act_t)puVar13;
        tVar3 = local_480[uVar15];
        FUN_100174fb8();
        if (tVar3 != tVar7) {
          _thread_resume(local_480[uVar15]);
        }
        uVar8 = _mach_port_deallocate(*(ipc_space_t *)puVar4,local_480[uVar15]);
        puVar13 = (undefined1 *)(ulong)uVar8;
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_484);
      size = (ulong)local_484 << 2;
    }
    _vm_deallocate(*(vm_map_t *)puVar4,(vm_address_t)local_480,size);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001818b0 | FUN_1001818b0 */

long FUN_1001818b0(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_40;
  long lStack_38;
  
  lVar1 = param_1;
  FUN_100182670(param_1,1,0xc,param_2 + 4);
  lStack_38 = param_2 + 5;
  local_40 = 0x10;
  FUN_100182670(param_1,2,0xf,&local_40);
  return param_1 + lVar1;
}



/* Address: 0x100181918 | FUN_100181918 */

long FUN_100181918(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_3c = DAT_101057360;
  lVar1 = param_1;
  local_38 = param_3;
  FUN_100182670(param_1,1,0xd,&local_3c);
  lVar2 = param_1;
  FUN_100182670(param_1,2,0xf,param_2 + 0x18);
  lVar3 = param_1;
  FUN_100182670(param_1,5,0xf,param_2 + 0x28);
  local_3c = DAT_100fb30d8;
  lVar4 = param_1;
  FUN_100182670(param_1,3,0xd,&local_3c);
  FUN_100182670(param_1,4,3,&local_38);
  return lVar2 + lVar1 + lVar3 + lVar4 + param_1;
}



/* Address: 0x1001819e4 | FUN_1001819e4 */

long FUN_1001819e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_34;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    FUN_100182670(param_1,1,0xf,param_2 + 0x38);
  }
  local_34 = 0;
  FUN_100182374(0,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
  lVar1 = param_1;
  FUN_100182670(param_1,2,0x10,&local_34);
  lVar2 = param_1;
  FUN_100182374(param_1,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
  lVar3 = param_1;
  FUN_100182670(param_1,3,6,param_2 + 0x58);
  FUN_100182670(param_1,4,6,param_2 + 0x5c);
  return lVar1 + lVar4 + lVar3 + param_1 + lVar2;
}



/* Address: 0x100181aa8 | FUN_100181aa8 */

long FUN_100181aa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_100182670(param_1,1,0xf,param_2);
  lVar2 = param_1;
  FUN_100182670(param_1,2,0xf,param_3);
  lVar2 = lVar2 + lVar1;
  if (param_4 != 0) {
    FUN_100182670(param_1,3,0xf,param_4);
    lVar2 = param_1 + lVar2;
  }
  return lVar2;
}



/* Address: 0x100181b20 | FUN_100181b20 */

long FUN_100181b20(long param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                  undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_51;
  
  local_51 = param_7;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    FUN_100182670(param_1,1,0xf,param_2);
  }
  lVar1 = param_1;
  local_64 = param_3;
  FUN_100182670(param_1,2,6,&local_64);
  lVar1 = lVar1 + lVar3;
  if (param_4 != 0) {
    lVar3 = param_1;
    FUN_100182670(param_1,3,0xf,param_4);
    lVar1 = lVar3 + lVar1;
  }
  if (param_5 != 0) {
    lVar3 = param_1;
    FUN_100182670(param_1,4,0xf,param_5);
    lVar1 = lVar3 + lVar1;
  }
  lVar3 = param_1;
  local_64 = param_6;
  FUN_100182670(param_1,5,6,&local_64);
  lVar2 = param_1;
  FUN_100182670(param_1,6,0xc,&local_51);
  local_60 = param_8;
  FUN_100182670(param_1,7,8,&local_60);
  return lVar3 + lVar2 + lVar1 + param_1;
}



/* Address: 0x100181c40 | FUN_100181c40 */

long FUN_100181c40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,void *param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_42c;
  undefined8 local_428 [38];
  undefined1 auStack_2f8 [639];
  byte local_79;
  undefined4 local_78;
  int local_74;
  undefined8 local_70 [2];
  
  local_79 = param_9;
  lVar12 = param_1;
  local_78 = param_5;
  FUN_100182670(param_1,1,6,&local_78);
  lVar7 = param_1;
  FUN_100182670(param_1,3,0xc,&local_79);
  lVar7 = lVar7 + lVar12;
  if (param_6 == (void *)0x0) {
    FUN_10017f674(local_428,param_4);
  }
  else {
    _memcpy(local_428,param_6,0x130);
  }
  puVar8 = auStack_2f8;
  FUN_100180700(puVar8,param_3,local_428,param_7);
  if ((int)puVar8 == 0) {
    iVar4 = (int)auStack_2f8;
    FUN_1001808a8();
    if (iVar4 == 0) {
      uVar14 = 0;
      while( true ) {
        if ((uVar14 == 0) && ((local_79 & 1) != 0)) {
          iVar4 = (int)auStack_2f8;
          FUN_100180918();
          lVar12 = 0;
          if (iVar4 != 0) {
            iVar13 = 0;
            do {
              puVar8 = auStack_2f8;
              FUN_1001808b8(puVar8,iVar13,local_70);
              if ((int)puVar8 != 0) {
                local_70[0] = 0;
              }
              puVar8 = auStack_2f8;
              FUN_100180910(puVar8,iVar13);
              uVar1 = local_70[0];
              iVar5 = 0;
              FUN_100182670(0,1,0xe,puVar8);
              local_428[0] = uVar1;
              iVar6 = 0;
              FUN_100182670(0,2,8,local_428);
              local_74 = iVar6 + iVar5;
              lVar9 = param_1;
              FUN_100182670(param_1,4,0x10,&local_74);
              uVar1 = local_70[0];
              lVar10 = param_1;
              FUN_100182670(param_1,1,0xe,puVar8);
              local_428[0] = uVar1;
              lVar11 = param_1;
              FUN_100182670(param_1,2,8,local_428);
              lVar12 = lVar9 + lVar12 + lVar10 + lVar11;
              iVar13 = iVar13 + 1;
            } while (iVar4 != iVar13);
          }
          lVar7 = lVar12 + lVar7;
        }
        local_428[0] = 0;
        puVar8 = auStack_2f8;
        FUN_1001808b8(puVar8,0,local_428);
        if ((int)puVar8 != 0) break;
        uVar2 = 0;
        FUN_1001823e8(0,param_2,local_428[0],param_7,param_8);
        local_42c = uVar2;
        lVar12 = param_1;
        FUN_100182670(param_1,2,0x10,&local_42c);
        lVar9 = param_1;
        FUN_1001823e8(param_1,param_2,local_428[0],param_7,param_8);
        lVar7 = lVar12 + lVar7 + lVar9;
        iVar4 = (int)auStack_2f8;
        FUN_1001808a8();
        if ((iVar4 != 0) || (bVar3 = 0x1fe < uVar14, uVar14 = uVar14 + 1, bVar3)) break;
      }
    }
    FUN_100180920(auStack_2f8);
  }
  return lVar7;
}



/* Address: 0x100181eac | FUN_100181eac */

ulong FUN_100181eac(uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  uint *local_70;
  
  lVar4 = 0;
  *param_2 = 0;
  while (puVar1 = param_1,
        FUN_10017d1c8(param_1,*(undefined8 *)((long)&PTR_s___DATA_100eba7e8 + lVar4),"__crash_info",
                      auStack_78), (int)puVar1 != 0) {
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x18) {
      return 0;
    }
  }
  puVar2 = auStack_78;
  FUN_10017c748();
  if ((undefined1 *)0x27 < puVar2) {
    puVar2 = auStack_78;
    FUN_10017c758(puVar2,local_70,0,0x28);
    if (((int)puVar2 != 0) && ((*local_70 & 0xfffffffe) == 4)) {
      uVar3 = (ulong)*param_1;
      FUN_100182558(uVar3,*(undefined8 *)(local_70 + 2),param_2);
      if ((uVar3 & 1) == 0) {
        uVar3 = (ulong)*param_1;
        FUN_100182558(uVar3,*(undefined8 *)(local_70 + 8),param_2);
      }
      else {
        uVar3 = 1;
      }
      goto LAB_100181f6c;
    }
  }
  uVar3 = 0;
LAB_100181f6c:
  FUN_10017c9b0(auStack_78);
  return uVar3;
}



/* Address: 0x100181fa8 | FUN_100181fa8 */

long FUN_100181fa8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  
  uVar2 = (ulong)*(uint *)(param_2 + 0x24);
  (**(code **)(*(long *)(param_2 + 0xa0) + 8))(uVar2);
  uVar3 = (ulong)*(uint *)(param_2 + 0x28);
  (**(code **)(*(long *)(param_2 + 0xa0) + 8))(uVar3);
  local_48 = *(undefined8 *)(param_2 + 0x90);
  lVar4 = param_1;
  FUN_100182670(param_1,2,8,&local_48);
  local_58 = *(undefined8 *)(param_2 + 8);
  lVar5 = param_1;
  FUN_100182670(param_1,1,8,&local_58);
  lVar6 = param_1;
  FUN_100182670(param_1,3,0xe,*(undefined8 *)(param_2 + 0x18));
  lVar6 = lVar5 + lVar4 + lVar6;
  FUN_10017cfa4(param_2,0x1b);
  if (param_2 != 0) {
    lStack_50 = param_2 + 8;
    local_58 = 0x10;
    lVar4 = param_1;
    FUN_100182670(param_1,4,0xf,&local_58);
    lVar6 = lVar4 + lVar6;
  }
  uVar1 = 0;
  FUN_100182374(0,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  local_58 = CONCAT44(local_58._4_4_,uVar1);
  lVar4 = param_1;
  FUN_100182670(param_1,5,0x10,&local_58);
  FUN_100182374(param_1,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
  return lVar4 + lVar6 + param_1;
}



/* Address: 0x1001820dc | FUN_1001820dc */

long FUN_1001820dc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 local_54;
  
  if ((*(byte *)(param_2 + 0xd8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10018fda0();
  }
  lVar2 = param_1;
  FUN_100182670(param_1,1,0xe,*(undefined8 *)(param_2 + 0xe0));
  lVar3 = param_1;
  FUN_100182670(param_1,2,0xe,*(undefined8 *)(param_2 + 0xe8));
  lVar3 = lVar3 + lVar2;
  if (*(long *)(param_2 + 0xf8) != 0) {
    uVar7 = 0;
    do {
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0xf0) + uVar7 * 8);
      uVar1 = 0;
      FUN_1001823e8(0,param_2,uVar5,param_3,param_4);
      local_54 = uVar1;
      lVar2 = param_1;
      FUN_100182670(param_1,3,0x10,&local_54);
      lVar4 = param_1;
      FUN_1001823e8(param_1,param_2,uVar5,param_3,param_4);
      lVar3 = lVar2 + lVar3 + lVar4;
      if (*(ulong *)(param_2 + 0xf8) <= uVar7 + 1) {
        return lVar3;
      }
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar6 < 0x1ff);
  }
  return lVar3;
}



/* Address: 0x1001821e0 | FUN_1001821e0 */

long FUN_1001821e0(long param_1,long *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_6c;
  undefined8 local_68;
  char acStack_5c [10];
  char acStack_52 [10];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar1 = (char *)(ulong)*(uint *)*param_2;
  FUN_10017f218();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = acStack_52;
    _snprintf(acStack_52,10,"#%d");
  }
  pcVar2 = (char *)(ulong)*(uint *)*param_2;
  FUN_10017f1d4(pcVar2,((uint *)*param_2)[1]);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = acStack_5c;
    _snprintf(acStack_5c,10,"#%d");
  }
  local_68 = *(undefined8 *)(*param_2 + 8);
  lVar3 = param_1;
  FUN_100182670(param_1,1,0xe,pcVar1);
  lVar4 = param_1;
  FUN_100182670(param_1,2,0xe,pcVar2);
  lVar5 = param_1;
  FUN_100182670(param_1,3,8,&local_68);
  lVar5 = lVar4 + lVar3 + lVar5;
  if (param_2[1] != 0) {
    local_6c = 0;
    FUN_1001825e0();
    lVar3 = param_1;
    FUN_100182670(param_1,4,0x10,&local_6c);
    lVar4 = param_1;
    FUN_1001825e0(param_1,param_2[1]);
    lVar5 = lVar3 + lVar4 + lVar5;
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_100182670(param_1,5,0xe,param_3);
    lVar5 = param_1 + lVar5;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100182374 | FUN_100182374 */

long FUN_100182374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_34 = 1;
  lVar1 = param_1;
  local_30 = param_3;
  uStack_28 = param_2;
  FUN_100182670(param_1,1,0xd,&local_34);
  lVar2 = param_1;
  FUN_100182670(param_1,2,8,&uStack_28);
  FUN_100182670(param_1,3,8,&local_30);
  return lVar2 + lVar1 + param_1;
}



/* Address: 0x1001823e8 | FUN_1001823e8 */

long FUN_1001823e8(long param_1,int *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_68;
  uint local_60 [2];
  undefined8 local_58;
  
  lVar1 = param_1;
  local_58 = param_3;
  FUN_100182670(param_1,3,8,&local_58);
  FUN_10017c3d8(param_4,1);
  lVar2 = param_4;
  FUN_10017c3f8(param_4,local_58);
  if ((lVar2 != 0) && (*param_2 != 0)) {
    local_68 = 0;
    local_60[0] = 0;
    lVar3 = lVar2;
    FUN_10017f264();
    if ((int)lVar3 == 0) {
      lVar3 = param_1;
      FUN_100182670(param_1,6,0x10,local_60);
      lVar1 = lVar3 + lVar1;
      local_68 = param_1;
      FUN_10017f264(lVar2,*param_2,param_5,local_58,FUN_1001824f0,&local_68);
      if ((int)lVar2 == 0) {
        lVar1 = lVar1 + (ulong)local_60[0];
      }
    }
  }
  FUN_10017c3d8(param_4,0);
  return lVar1;
}



/* Address: 0x1001824f0 | FUN_1001824f0 */

void FUN_1001824f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *param_3;
  uVar1 = uVar2;
  local_38 = param_1;
  FUN_100182670(uVar2,1,0xe,param_2);
  FUN_100182670(uVar2,2,8,&local_38);
  *(int *)(param_3 + 1) = (int)uVar2 + (int)uVar1;
  return;
}



/* Address: 0x100182558 | FUN_100182558 */

undefined8 FUN_100182558(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  char local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    uVar1 = param_1;
    FUN_100174ff0(param_1,param_2,lVar2,&local_31,1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    *(char *)(param_3 + lVar2) = local_31;
    if (local_31 == '\0') break;
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x400) {
      *(undefined1 *)(param_3 + 0x400) = 0;
      return 1;
    }
  }
  return 1;
}



/* Address: 0x1001825e0 | FUN_1001825e0 */

long FUN_1001825e0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_40;
  long local_38;
  
  local_38 = (long)*param_2;
  lVar1 = param_1;
  FUN_100182670(param_1,1,8,&local_38);
  if (param_2[4] != 0) {
    uVar3 = 0;
    do {
      local_40 = *(undefined8 *)(*(long *)(param_2 + 2) + uVar3 * 8);
      lVar2 = param_1;
      FUN_100182670(param_1,2,8,&local_40);
      lVar1 = lVar2 + lVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_2[4]);
  }
  return lVar1;
}



/* Address: 0x100182670 | FUN_100182670 */

long FUN_100182670(long param_1,ulong param_2,undefined4 param_3,ulong *param_4)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_58;
  byte local_4c [9];
  undefined1 local_43 [11];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_2 >> 0x1d & 7) == 0) {
    uVar3 = (uint)param_2;
    bVar4 = (byte)(uVar3 << 3);
    if (uVar3 < 0x10) {
      uVar3 = 0;
    }
    else {
      local_4c[0] = bVar4 | 0x80;
      bVar4 = (byte)(uVar3 >> 4);
      if (uVar3 < 0x800) {
        uVar3 = 1;
      }
      else {
        local_4c[1] = bVar4 | 0x80;
        bVar4 = (byte)(uVar3 >> 0xb);
        if (uVar3 < 0x40000) {
          uVar3 = 2;
        }
        else {
          local_4c[2] = bVar4 | 0x80;
          bVar4 = (byte)(uVar3 >> 0x12);
          if (uVar3 >> 0x19 == 0) {
            uVar3 = 3;
          }
          else {
            local_4c[3] = bVar4 | 0x80;
            uVar3 = 4;
            bVar4 = (byte)(param_2 >> 0x18) >> 1;
          }
        }
      }
    }
    uVar8 = (ulong)(uVar3 + 1);
    local_4c[uVar3] = bVar4;
  }
  else {
    uVar8 = (param_2 & 0xffffffff) << 3;
    FUN_100182b94(uVar8,local_4c);
  }
  switch(param_3) {
  case 0:
    uVar3 = (uint)*param_4;
    pbVar1 = local_4c + uVar8;
    if ((int)uVar3 < 0) {
      *pbVar1 = (byte)uVar3 | 0x80;
      local_4c[uVar8 + 1] = (byte)(uVar3 >> 7) | 0x80;
      local_4c[uVar8 + 2] = (byte)(uVar3 >> 0xe) | 0x80;
      local_4c[uVar8 + 3] = (byte)(uVar3 >> 0x15) | 0x80;
      local_4c[uVar8 + 4] = (byte)((int)uVar3 >> 0x1c);
      pbVar1 = local_4c + uVar8 + 5;
      pbVar1[0] = 0xff;
      pbVar1[1] = 0xff;
      pbVar1[2] = 0xff;
      pbVar1[3] = 0xff;
      uVar6 = 10;
      local_43[uVar8] = 1;
    }
    else {
      if (uVar3 < 0x80) {
        uVar7 = 0;
        uVar5 = uVar3;
      }
      else {
        *pbVar1 = (byte)uVar3 | 0x80;
        uVar5 = uVar3 >> 7;
        if (uVar3 < 0x4000) {
          uVar7 = 1;
        }
        else {
          local_4c[uVar8 + 1] = (byte)uVar5 | 0x80;
          uVar5 = uVar3 >> 0xe;
          if (uVar3 < 0x200000) {
            uVar7 = 2;
          }
          else {
            local_4c[uVar8 + 2] = (byte)uVar5 | 0x80;
            uVar5 = uVar3 >> 0x15;
            if (uVar3 >> 0x1c == 0) {
              uVar7 = 3;
            }
            else {
              local_4c[uVar8 + 3] = (byte)uVar5 | 0x80;
              uVar7 = 4;
              uVar5 = uVar3 >> 0x1c;
            }
          }
        }
      }
      uVar6 = (ulong)(uVar7 + 1);
      pbVar1[uVar7] = (byte)uVar5;
    }
    goto joined_r0x0001001827fc;
  case 1:
    uVar3 = (uint)*param_4 << 1 ^ (int)(uint)*param_4 >> 0x1f;
    goto LAB_100182910;
  case 2:
  case 7:
  case 10:
    local_4c[0] = local_4c[0] | 5;
    local_58 = CONCAT44(local_58._4_4_,(uint)*param_4);
    FUN_1001751cc(local_4c + uVar8,&local_58,4);
    lVar9 = uVar8 + 4;
    break;
  case 3:
  case 8:
    uVar6 = *param_4;
    goto LAB_1001827f4;
  case 4:
    uVar6 = *param_4 << 1 ^ (long)*param_4 >> 0x3f;
LAB_1001827f4:
    FUN_100182b94(uVar6,local_4c + uVar8);
joined_r0x0001001827fc:
    lVar9 = uVar6 + uVar8;
joined_r0x0001001829f4:
    if (param_1 == 0) goto LAB_100182b5c;
    goto LAB_100182b4c;
  case 5:
  case 9:
  case 0xb:
    local_4c[0] = local_4c[0] | 1;
    local_58 = *param_4;
    FUN_1001751cc(local_4c + uVar8,&local_58,8);
    lVar9 = uVar8 + 8;
    break;
  case 6:
  case 0xd:
    goto switchD_100182760_caseD_6;
  case 0xc:
    local_4c[uVar8] = (byte)*param_4;
    lVar9 = uVar8 + 1;
    goto joined_r0x0001001829f4;
  case 0xe:
    sVar2 = _strlen((char *)param_4);
    uVar3 = (uint)sVar2;
    local_4c[0] = local_4c[0] | 2;
    if (uVar3 < 0x80) {
      uVar7 = 0;
      uVar5 = uVar3;
    }
    else {
      local_4c[uVar8] = (byte)sVar2 | 0x80;
      uVar6 = sVar2 >> 7 & 0x1ffffff;
      uVar5 = (uint)uVar6;
      if (uVar3 < 0x4000) {
        uVar7 = 1;
      }
      else {
        local_4c[uVar8 + 1] = (byte)uVar6 | 0x80;
        uVar5 = uVar3 >> 0xe;
        if (uVar3 < 0x200000) {
          uVar7 = 2;
        }
        else {
          local_4c[uVar8 + 2] = (byte)uVar5 | 0x80;
          uVar5 = uVar3 >> 0x15;
          if (uVar3 >> 0x1c == 0) {
            uVar7 = 3;
          }
          else {
            local_4c[uVar8 + 3] = (byte)uVar5 | 0x80;
            uVar7 = 4;
            uVar5 = uVar3 >> 0x1c;
          }
        }
      }
    }
    (local_4c + uVar8)[uVar7] = (byte)uVar5;
    lVar9 = uVar8 + (uVar7 + 1);
    if (param_1 == 0) {
      uVar10 = sVar2 & 0xffffffff;
    }
    else {
      FUN_100175280(param_1,local_4c,lVar9);
      uVar10 = sVar2 & 0xffffffff;
LAB_100182b24:
      FUN_100175280(param_1,param_4,uVar10);
    }
    goto LAB_100182b2c;
  case 0xf:
    uVar6 = *param_4;
    uVar10 = uVar6 & 0xffffffff;
    local_4c[0] = local_4c[0] | 2;
    uVar3 = (uint)uVar6;
    if (uVar3 < 0x80) {
      uVar7 = 0;
      uVar5 = uVar3;
    }
    else {
      local_4c[uVar8] = (byte)uVar6 | 0x80;
      uVar5 = uVar3 >> 7;
      if (uVar3 < 0x4000) {
        uVar7 = 1;
      }
      else {
        local_4c[uVar8 + 1] = (byte)uVar5 | 0x80;
        uVar5 = uVar3 >> 0xe;
        if (uVar3 < 0x200000) {
          uVar7 = 2;
        }
        else {
          local_4c[uVar8 + 2] = (byte)uVar5 | 0x80;
          uVar5 = uVar3 >> 0x15;
          if (uVar3 >> 0x1c == 0) {
            uVar7 = 3;
          }
          else {
            local_4c[uVar8 + 3] = (byte)uVar5 | 0x80;
            uVar7 = 4;
            uVar5 = uVar3 >> 0x1c;
          }
        }
      }
    }
    (local_4c + uVar8)[uVar7] = (byte)uVar5;
    lVar9 = uVar8 + (uVar7 + 1);
    if (param_1 != 0) {
      FUN_100175280(param_1,local_4c,lVar9);
      param_4 = (ulong *)param_4[1];
      goto LAB_100182b24;
    }
LAB_100182b2c:
    lVar9 = lVar9 + uVar10;
    goto LAB_100182b5c;
  case 0x10:
    local_4c[0] = local_4c[0] | 2;
    goto switchD_100182760_caseD_6;
  default:
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  if (param_1 != 0) {
LAB_100182b4c:
    FUN_100175280(param_1,local_4c,lVar9);
  }
LAB_100182b5c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
switchD_100182760_caseD_6:
  uVar3 = (uint)*param_4;
LAB_100182910:
  if (uVar3 < 0x80) {
    uVar7 = 0;
    uVar5 = uVar3;
  }
  else {
    local_4c[uVar8] = (byte)uVar3 | 0x80;
    uVar5 = uVar3 >> 7;
    if (uVar3 < 0x4000) {
      uVar7 = 1;
    }
    else {
      local_4c[uVar8 + 1] = (byte)uVar5 | 0x80;
      uVar5 = uVar3 >> 0xe;
      if (uVar3 < 0x200000) {
        uVar7 = 2;
      }
      else {
        local_4c[uVar8 + 2] = (byte)uVar5 | 0x80;
        uVar5 = uVar3 >> 0x15;
        if (uVar3 >> 0x1c == 0) {
          uVar7 = 3;
        }
        else {
          local_4c[uVar8 + 3] = (byte)uVar5 | 0x80;
          uVar7 = 4;
          uVar5 = uVar3 >> 0x1c;
        }
      }
    }
  }
  (local_4c + uVar8)[uVar7] = (byte)uVar5;
  lVar9 = uVar8 + (uVar7 + 1);
  goto joined_r0x0001001829f4;
}



/* Address: 0x100182b94 | FUN_100182b94 */

int FUN_100182b94(ulong param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar5;
  ulong uVar4;
  
  uVar3 = (uint)param_1;
  if (param_1 >> 0x20 == 0) {
    if (uVar3 < 0x80) {
      uVar2 = 0;
    }
    else {
      *param_2 = (byte)param_1 | 0x80;
      param_1 = (ulong)(uVar3 >> 7);
      if (uVar3 < 0x4000) {
        uVar2 = 1;
      }
      else {
        param_2[1] = (byte)(uVar3 >> 7) | 0x80;
        param_1 = (ulong)(uVar3 >> 0xe);
        if (uVar3 < 0x200000) {
          uVar2 = 2;
        }
        else {
          param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
          param_1 = (ulong)(uVar3 >> 0x15);
          if (uVar3 >> 0x1c == 0) {
            uVar2 = 3;
          }
          else {
            param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
            uVar2 = 4;
            param_1 = (ulong)(uVar3 >> 0x1c);
          }
        }
      }
    }
    bVar1 = (byte)param_1;
    iVar5 = (int)uVar2 + 1;
  }
  else {
    *param_2 = (byte)param_1 | 0x80;
    param_2[1] = (byte)(uVar3 >> 7) | 0x80;
    param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
    param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
    bVar1 = (byte)(((param_1 >> 0x20) << 0x20 | param_1 & 0xffffffff) >> 0x1c);
    if (param_1 >> 0x23 == 0) {
      iVar5 = 5;
      uVar2 = 4;
    }
    else {
      param_2[4] = bVar1 | 0x80;
      uVar4 = param_1 >> 0x23;
      bVar1 = (byte)(uint)(param_1 >> 0x23);
      if (param_1 >> 0x2a == 0) {
        uVar2 = 5;
      }
      else {
        uVar2 = 5;
        do {
          uVar3 = (uint)uVar4;
          param_2[uVar2] = (byte)uVar4 | 0x80;
          uVar2 = uVar2 + 1;
          uVar4 = uVar4 >> 7;
          bVar1 = (byte)uVar4;
        } while (uVar3 >> 0xe != 0);
      }
      iVar5 = (int)uVar2 + 1;
    }
  }
  param_2[uVar2 & 0xffffffff] = bVar1;
  return iVar5;
}



/* Address: 0x100182ca8 | PHPLCrashMachExceptionPort::exceptionPortsForTask:mask:error: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashMachExceptionPort::exceptionPortsForTask_mask_error_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,ID *param_5)

{
  kern_return_t kVar1;
  ID IVar2;
  class_t *self;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  kVar1 = _task_get_exception_ports
                    (param_3,param_4,(exception_mask_array_t)((long)&local_114 + 4),
                     (mach_msg_type_number_t *)&local_114,
                     (exception_handler_array_t)((long)&uStack_dc + 4),
                     (exception_behavior_array_t)((long)&uStack_a4 + 4),
                     (exception_flavor_array_t)((long)&uStack_6c + 4));
  if (kVar1 == 0) {
    self = &objc::class_t::PHPLCrashMachExceptionPortSet;
    _objc_alloc();
    uStack_138 = uStack_4c;
    local_140 = local_54;
    uStack_128 = uStack_3c;
    uStack_130 = uStack_44;
    local_120 = local_34;
    uStack_178 = uStack_8c;
    local_180 = local_94;
    uStack_168 = uStack_7c;
    uStack_170 = uStack_84;
    uStack_158 = uStack_6c;
    local_160 = local_74;
    uStack_148 = uStack_5c;
    uStack_150 = uStack_64;
    uStack_1b8 = uStack_cc;
    local_1c0 = local_d4;
    uStack_1a8 = uStack_bc;
    uStack_1b0 = uStack_c4;
    uStack_198 = uStack_ac;
    local_1a0 = local_b4;
    uStack_188 = uStack_9c;
    uStack_190 = uStack_a4;
    uStack_1f8 = uStack_10c;
    local_200 = local_114;
    uStack_1e8 = uStack_fc;
    uStack_1f0 = uStack_104;
    uStack_1d8 = uStack_ec;
    local_1e0 = local_f4;
    uStack_1c8 = uStack_dc;
    uStack_1d0 = uStack_e4;
    IVar2 = objc_stub::initWithAsyncSafeRepresentation_((ID)self,&local_200);
  }
  else {
    FUN_10018a7fc(param_5,kVar1,&cf_Failedtofetchmachexceptionports);
    IVar2 = 0;
  }
  return IVar2;
}



/* Address: 0x100182d6c | PHPLCrashMachExceptionPort::exceptionPortsForThread:mask:error: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashMachExceptionPort::exceptionPortsForThread_mask_error_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,ID *param_5)

{
  kern_return_t kVar1;
  ID IVar2;
  class_t *self;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  kVar1 = _thread_get_exception_ports
                    (param_3,param_4,(exception_mask_array_t)((long)&local_114 + 4),
                     (mach_msg_type_number_t *)&local_114,
                     (exception_handler_array_t)((long)&uStack_dc + 4),
                     (exception_behavior_array_t)((long)&uStack_a4 + 4),
                     (exception_flavor_array_t)((long)&uStack_6c + 4));
  if (kVar1 == 0) {
    self = &objc::class_t::PHPLCrashMachExceptionPortSet;
    _objc_alloc();
    uStack_138 = uStack_4c;
    local_140 = local_54;
    uStack_128 = uStack_3c;
    uStack_130 = uStack_44;
    local_120 = local_34;
    uStack_178 = uStack_8c;
    local_180 = local_94;
    uStack_168 = uStack_7c;
    uStack_170 = uStack_84;
    uStack_158 = uStack_6c;
    local_160 = local_74;
    uStack_148 = uStack_5c;
    uStack_150 = uStack_64;
    uStack_1b8 = uStack_cc;
    local_1c0 = local_d4;
    uStack_1a8 = uStack_bc;
    uStack_1b0 = uStack_c4;
    uStack_198 = uStack_ac;
    local_1a0 = local_b4;
    uStack_188 = uStack_9c;
    uStack_190 = uStack_a4;
    uStack_1f8 = uStack_10c;
    local_200 = local_114;
    uStack_1e8 = uStack_fc;
    uStack_1f0 = uStack_104;
    uStack_1d8 = uStack_ec;
    local_1e0 = local_f4;
    uStack_1c8 = uStack_dc;
    uStack_1d0 = uStack_e4;
    IVar2 = objc_stub::initWithAsyncSafeRepresentation_((ID)self,&local_200);
  }
  else {
    FUN_10018a7fc(param_5,kVar1,&cf_Failedtoswapmachexceptionports);
    IVar2 = 0;
  }
  return IVar2;
}



/* Address: 0x100182e30 | PHPLCrashMachExceptionPort::initWithServerPort:mask:behavior:flavor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PHPLCrashMachExceptionPort::initWithServerPort_mask_behavior_flavor_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,int param_5,
             int param_6)

{
  kern_return_t kVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_60;
  class_t *pcStack_58;
  undefined4 local_50;
  kern_return_t local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_58 = &objc::class_t::PHPLCrashMachExceptionPort;
  local_60 = param_1;
  IVar2 = ::NSObject::init((ID)&local_60,"init");
  if (IVar2 != 0) {
    *(unsigned_int *)(IVar2 + 8) = param_4;
    *(unsigned_int *)(IVar2 + 0xc) = param_3;
    *(int *)(IVar2 + 0x10) = param_5;
    *(int *)(IVar2 + 0x14) = param_6;
    if (((1 < param_3 + 1) &&
        (kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_3,0,1),
        kVar1 != 0)) &&
       (puVar3 = PTR___os_log_default_100ea8350,
       _os_log_type_enabled(PTR___os_log_default_100ea8350,0), (int)puVar3 != 0)) {
      local_50 = 0x4000100;
      local_4c = kVar1;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Unexpected error incrementing mach port reference: %d",
                    &local_50,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}



/* Address: 0x100182f5c | PHPLCrashMachExceptionPort::dealloc */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashMachExceptionPort::dealloc(ID param_1,SEL param_2)

{
  kern_return_t kVar1;
  undefined *puVar2;
  ID local_40;
  class_t *pcStack_38;
  undefined4 local_30;
  kern_return_t local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((1 < *(mach_port_name_t *)(param_1 + 0xc) + 1) &&
     (kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                                  *(mach_port_name_t *)(param_1 + 0xc),0,-1), kVar1 != 0)) {
    puVar2 = PTR___os_log_default_100ea8350;
    _os_log_type_enabled(PTR___os_log_default_100ea8350,0);
    if ((int)puVar2 != 0) {
      local_30 = 0x4000100;
      local_2c = kVar1;
      __os_log_impl(0x100000000,PTR___os_log_default_100ea8350,0,
                    "[PLCrashReporter] Unexpected error incrementing mach port reference: %d",
                    &local_30,8);
    }
  }
  pcStack_38 = &objc::class_t::PHPLCrashMachExceptionPort;
  local_40 = param_1;
  ::NSObject::dealloc((ID)&local_40,"dealloc");
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100183048 | PHPLCrashMachExceptionPort::registerForTask:previousPortSet:error: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

bool PHPLCrashMachExceptionPort::registerForTask_previousPortSet_error_
               (ID param_1,SEL param_2,unsigned_int param_3,ID *param_4,ID *param_5)

{
  kern_return_t kVar1;
  class_t *self;
  ID IVar2;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  
  kVar1 = _task_swap_exception_ports
                    (param_3,*(exception_mask_t *)(param_1 + 8),*(mach_port_t *)(param_1 + 0xc),
                     *(exception_behavior_t *)(param_1 + 0x10),
                     *(thread_state_flavor_t *)(param_1 + 0x14),
                     (exception_mask_array_t)((long)&local_124 + 4),
                     (mach_msg_type_number_t *)&local_124,
                     (exception_handler_array_t)((long)&uStack_ec + 4),
                     (exception_behavior_array_t)((long)&uStack_b4 + 4),
                     (exception_flavor_array_t)((long)&uStack_7c + 4));
  if (kVar1 == 0) {
    if (param_4 != (ID *)0x0) {
      self = &objc::class_t::PHPLCrashMachExceptionPortSet;
      _objc_alloc();
      uStack_148 = uStack_5c;
      local_150 = local_64;
      uStack_138 = uStack_4c;
      uStack_140 = uStack_54;
      local_130 = local_44;
      uStack_188 = uStack_9c;
      local_190 = local_a4;
      uStack_178 = uStack_8c;
      uStack_180 = uStack_94;
      uStack_168 = uStack_7c;
      local_170 = local_84;
      uStack_158 = uStack_6c;
      uStack_160 = uStack_74;
      uStack_1c8 = uStack_dc;
      local_1d0 = local_e4;
      uStack_1b8 = uStack_cc;
      uStack_1c0 = uStack_d4;
      uStack_1a8 = uStack_bc;
      local_1b0 = local_c4;
      uStack_198 = uStack_ac;
      uStack_1a0 = uStack_b4;
      uStack_208 = uStack_11c;
      local_210 = local_124;
      uStack_1f8 = uStack_10c;
      uStack_200 = uStack_114;
      uStack_1e8 = uStack_fc;
      local_1f0 = local_104;
      uStack_1d8 = uStack_ec;
      uStack_1e0 = uStack_f4;
      IVar2 = objc_stub::initWithAsyncSafeRepresentation_((ID)self,&local_210);
      *param_4 = IVar2;
    }
  }
  else {
    FUN_10018a7fc(param_5,kVar1,&cf_Failedtoswapmachexceptionports);
  }
  return (bool)(kVar1 == 0);
}



/* Address: 0x100183140 | PHPLCrashMachExceptionPort::registerForThread:previousPortSet:error: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

bool PHPLCrashMachExceptionPort::registerForThread_previousPortSet_error_
               (ID param_1,SEL param_2,unsigned_int param_3,ID *param_4,ID *param_5)

{
  kern_return_t kVar1;
  class_t *self;
  ID IVar2;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  
  kVar1 = _thread_swap_exception_ports
                    (param_3,*(exception_mask_t *)(param_1 + 8),*(mach_port_t *)(param_1 + 0xc),
                     *(exception_behavior_t *)(param_1 + 0x10),
                     *(thread_state_flavor_t *)(param_1 + 0x14),
                     (exception_mask_array_t)((long)&local_124 + 4),
                     (mach_msg_type_number_t *)&local_124,
                     (exception_handler_array_t)((long)&uStack_ec + 4),
                     (exception_behavior_array_t)((long)&uStack_b4 + 4),
                     (exception_flavor_array_t)((long)&uStack_7c + 4));
  if (kVar1 == 0) {
    if (param_4 != (ID *)0x0) {
      self = &objc::class_t::PHPLCrashMachExceptionPortSet;
      _objc_alloc();
      uStack_148 = uStack_5c;
      local_150 = local_64;
      uStack_138 = uStack_4c;
      uStack_140 = uStack_54;
      local_130 = local_44;
      uStack_188 = uStack_9c;
      local_190 = local_a4;
      uStack_178 = uStack_8c;
      uStack_180 = uStack_94;
      uStack_168 = uStack_7c;
      local_170 = local_84;
      uStack_158 = uStack_6c;
      uStack_160 = uStack_74;
      uStack_1c8 = uStack_dc;
      local_1d0 = local_e4;
      uStack_1b8 = uStack_cc;
      uStack_1c0 = uStack_d4;
      uStack_1a8 = uStack_bc;
      local_1b0 = local_c4;
      uStack_198 = uStack_ac;
      uStack_1a0 = uStack_b4;
      uStack_208 = uStack_11c;
      local_210 = local_124;
      uStack_1f8 = uStack_10c;
      uStack_200 = uStack_114;
      uStack_1e8 = uStack_fc;
      local_1f0 = local_104;
      uStack_1d8 = uStack_ec;
      uStack_1e0 = uStack_f4;
      IVar2 = objc_stub::initWithAsyncSafeRepresentation_((ID)self,&local_210);
      *param_4 = IVar2;
    }
  }
  else {
    FUN_10018a7fc(param_5,kVar1,&cf_Failedtoswapmachexceptionports);
  }
  return (bool)(kVar1 == 0);
}



/* Address: 0x100183238 | PHPLCrashMachExceptionPort::server_port */

/* Function Stack Size: 0x10 bytes */

unsigned_int PHPLCrashMachExceptionPort::server_port(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + 0xc);
}



/* Address: 0x100183240 | PHPLCrashMachExceptionPort::mask */

/* Function Stack Size: 0x10 bytes */

unsigned_int PHPLCrashMachExceptionPort::mask(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + 8);
}



/* Address: 0x100183248 | PHPLCrashMachExceptionPort::behavior */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashMachExceptionPort::behavior(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x10);
}



/* Address: 0x100183250 | PHPLCrashMachExceptionPort::flavor */

/* Function Stack Size: 0x10 bytes */

int PHPLCrashMachExceptionPort::flavor(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x14);
}



/* Address: 0x100183258 | PHPLCrashMachExceptionPortSet::initWithSet: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID PHPLCrashMachExceptionPortSet::initWithSet_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  ulong uVar6;
  long lVar7;
  undefined8 local_230;
  long lStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint local_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  ID local_108;
  class_t *pcStack_100;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_100 = &objc::class_t::PHPLCrashMachExceptionPortSet;
  local_108 = param_1;
  IVar2 = ::NSObject::init((ID)&local_108,"init");
  if (IVar2 != 0) {
    IVar3 = objc_stub::count(param_3);
    if (0xe < IVar3) {
      FUN_10018fdc8(param_3,param_2,IVar2);
    }
    *(ID *)(IVar2 + 8) = param_3;
    local_1ec = 0;
    lStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    local_220 = (long *)0x0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_230,auStack_f8,0x10);
    uVar1 = local_1ec;
    if (IVar3 != 0) {
      uVar6 = 0;
      lVar7 = *local_220;
      do {
        IVar5 = 0;
        do {
          if (*local_220 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          self = *(ID *)(lStack_228 + IVar5 * 8);
          IVar4 = objc_stub::server_port(self);
          *(int *)((long)&uStack_1b4 + uVar6 * 4 + 4) = (int)IVar4;
          IVar4 = objc_stub::mask(self);
          (&uStack_1e8)[uVar6] = (int)IVar4;
          IVar4 = objc_stub::behavior(self);
          *(int *)((long)&uStack_17c + uVar6 * 4 + 4) = (int)IVar4;
          IVar4 = objc_stub::flavor(self);
          *(int *)((long)&uStack_144 + uVar6 * 4 + 4) = (int)IVar4;
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar1;
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_230,auStack_f8,0x10);
      } while (IVar3 != 0);
    }
    local_1ec = uVar1;
    *(undefined8 *)(IVar2 + 0xd8) = uStack_124;
    *(undefined8 *)(IVar2 + 0xd0) = local_12c;
    *(undefined8 *)(IVar2 + 0xe8) = uStack_114;
    *(undefined8 *)(IVar2 + 0xe0) = uStack_11c;
    *(undefined4 *)(IVar2 + 0xf0) = local_10c;
    *(undefined8 *)(IVar2 + 0x98) = uStack_164;
    *(undefined8 *)(IVar2 + 0x90) = local_16c;
    *(undefined8 *)(IVar2 + 0xa8) = uStack_154;
    *(undefined8 *)(IVar2 + 0xa0) = uStack_15c;
    *(undefined8 *)(IVar2 + 0xb8) = uStack_144;
    *(undefined8 *)(IVar2 + 0xb0) = local_14c;
    *(undefined8 *)(IVar2 + 200) = uStack_134;
    *(undefined8 *)(IVar2 + 0xc0) = uStack_13c;
    *(undefined8 *)(IVar2 + 0x58) = uStack_1a4;
    *(undefined8 *)(IVar2 + 0x50) = local_1ac;
    *(undefined8 *)(IVar2 + 0x68) = uStack_194;
    *(undefined8 *)(IVar2 + 0x60) = uStack_19c;
    *(undefined8 *)(IVar2 + 0x78) = uStack_184;
    *(undefined8 *)(IVar2 + 0x70) = local_18c;
    *(undefined8 *)(IVar2 + 0x88) = uStack_174;
    *(undefined8 *)(IVar2 + 0x80) = uStack_17c;
    *(undefined8 *)(IVar2 + 0x18) = uStack_1e4;
    *(ulong *)(IVar2 + 0x10) = CONCAT44(uStack_1e8,local_1ec);
    *(undefined8 *)(IVar2 + 0x28) = uStack_1d4;
    *(undefined8 *)(IVar2 + 0x20) = local_1dc;
    *(undefined8 *)(IVar2 + 0x38) = uStack_1c4;
    *(undefined8 *)(IVar2 + 0x30) = local_1cc;
    *(undefined8 *)(IVar2 + 0x48) = uStack_1b4;
    *(undefined8 *)(IVar2 + 0x40) = local_1bc;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}



/* Address: 0x100183488 | PHPLCrashMachExceptionPortSet::initWithAsyncSafeRepresentation: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0xf4 bytes */

ID PHPLCrashMachExceptionPortSet::initWithAsyncSafeRepresentation_
             (ID param_1,SEL param_2,plcrash_mach_exception_port_set param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  kern_return_t kVar5;
  ID IVar6;
  ID self;
  class_t *self_00;
  ID IVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ID local_80;
  class_t *pcStack_78;
  uint local_70;
  kern_return_t local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcStack_78 = &objc::class_t::PHPLCrashMachExceptionPortSet;
  local_80 = param_1;
  IVar6 = ::NSObject::init((ID)&local_80,"init");
  if (IVar6 != 0) {
    uVar2 = *(uint *)param_3._0_8_;
    if (0xe < *(uint *)param_3._0_8_) {
      FUN_10018fe50();
      uVar2 = local_70;
    }
    self = NSMutableSet::setWithCapacity_((ID)&_OBJC_CLASS___NSMutableSet,(ulong)uVar2);
    puVar4 = PTR__mach_task_self__100ea8778;
    puVar3 = PTR___os_log_default_100ea8350;
    if (*(int *)param_3._0_8_ != 0) {
      uVar9 = 0;
      do {
        self_00 = &objc::class_t::PHPLCrashMachExceptionPort;
        _objc_alloc();
        lVar1 = param_3._0_8_ + uVar9 * 4;
        IVar7 = objc_stub::initWithServerPort_mask_behavior_flavor_
                          ((ID)self_00,(ulong)*(uint *)(lVar1 + 0x3c),(ulong)*(uint *)(lVar1 + 4),
                           (ulong)*(uint *)(lVar1 + 0x74),(ulong)*(uint *)(lVar1 + 0xac));
        NSMutableSet::addObject_(self,IVar7);
        kVar5 = _mach_port_mod_refs(*(ipc_space_t *)puVar4,*(mach_port_name_t *)(lVar1 + 0x3c),0,-1)
        ;
        if ((kVar5 != 0) && (puVar8 = puVar3, _os_log_type_enabled(puVar3,0), (int)puVar8 != 0)) {
          local_70 = 0x4000100;
          local_6c = kVar5;
          __os_log_impl(0x100000000,puVar3,0,
                        "[PLCrashReporter] Unexpected error decrementing mach port reference: %d",
                        &local_70,8);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)param_3._0_8_);
    }
    *(ID *)(IVar6 + 8) = self;
    uVar11 = *(undefined8 *)(param_3._0_8_ + 8);
    uVar10 = *(undefined8 *)param_3._0_8_;
    uVar12 = *(undefined8 *)(param_3._0_8_ + 0x10);
    uVar14 = *(undefined8 *)(param_3._0_8_ + 0x28);
    uVar13 = *(undefined8 *)(param_3._0_8_ + 0x20);
    *(undefined8 *)(IVar6 + 0x28) = *(undefined8 *)(param_3._0_8_ + 0x18);
    *(undefined8 *)(IVar6 + 0x20) = uVar12;
    *(undefined8 *)(IVar6 + 0x38) = uVar14;
    *(undefined8 *)(IVar6 + 0x30) = uVar13;
    *(undefined8 *)(IVar6 + 0x18) = uVar11;
    *(undefined8 *)(IVar6 + 0x10) = uVar10;
    uVar11 = *(undefined8 *)(param_3._0_8_ + 0x38);
    uVar10 = *(undefined8 *)(param_3._0_8_ + 0x30);
    uVar13 = *(undefined8 *)(param_3._0_8_ + 0x48);
    uVar12 = *(undefined8 *)(param_3._0_8_ + 0x40);
    uVar14 = *(undefined8 *)(param_3._0_8_ + 0x50);
    uVar16 = *(undefined8 *)(param_3._0_8_ + 0x68);
    uVar15 = *(undefined8 *)(param_3._0_8_ + 0x60);
    *(undefined8 *)(IVar6 + 0x68) = *(undefined8 *)(param_3._0_8_ + 0x58);
    *(undefined8 *)(IVar6 + 0x60) = uVar14;
    *(undefined8 *)(IVar6 + 0x78) = uVar16;
    *(undefined8 *)(IVar6 + 0x70) = uVar15;
    *(undefined8 *)(IVar6 + 0x48) = uVar11;
    *(undefined8 *)(IVar6 + 0x40) = uVar10;
    *(undefined8 *)(IVar6 + 0x58) = uVar13;
    *(undefined8 *)(IVar6 + 0x50) = uVar12;
    uVar11 = *(undefined8 *)(param_3._0_8_ + 0x78);
    uVar10 = *(undefined8 *)(param_3._0_8_ + 0x70);
    uVar13 = *(undefined8 *)(param_3._0_8_ + 0x88);
    uVar12 = *(undefined8 *)(param_3._0_8_ + 0x80);
    uVar14 = *(undefined8 *)(param_3._0_8_ + 0x90);
    uVar16 = *(undefined8 *)(param_3._0_8_ + 0xa8);
    uVar15 = *(undefined8 *)(param_3._0_8_ + 0xa0);
    *(undefined8 *)(IVar6 + 0xa8) = *(undefined8 *)(param_3._0_8_ + 0x98);
    *(undefined8 *)(IVar6 + 0xa0) = uVar14;
    *(undefined8 *)(IVar6 + 0xb8) = uVar16;
    *(undefined8 *)(IVar6 + 0xb0) = uVar15;
    *(undefined8 *)(IVar6 + 0x88) = uVar11;
    *(undefined8 *)(IVar6 + 0x80) = uVar10;
    *(undefined8 *)(IVar6 + 0x98) = uVar13;
    *(undefined8 *)(IVar6 + 0x90) = uVar12;
    uVar11 = *(undefined8 *)(param_3._0_8_ + 0xb8);
    uVar10 = *(undefined8 *)(param_3._0_8_ + 0xb0);
    uVar13 = *(undefined8 *)(param_3._0_8_ + 200);
    uVar12 = *(undefined8 *)(param_3._0_8_ + 0xc0);
    uVar15 = *(undefined8 *)(param_3._0_8_ + 0xd8);
    uVar14 = *(undefined8 *)(param_3._0_8_ + 0xd0);
    *(undefined4 *)(IVar6 + 0xf0) = *(undefined4 *)(param_3._0_8_ + 0xe0);
    *(undefined8 *)(IVar6 + 0xd8) = uVar13;
    *(undefined8 *)(IVar6 + 0xd0) = uVar12;
    *(undefined8 *)(IVar6 + 0xe8) = uVar15;
    *(undefined8 *)(IVar6 + 0xe0) = uVar14;
    *(undefined8 *)(IVar6 + 200) = uVar11;
    *(undefined8 *)(IVar6 + 0xc0) = uVar10;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x1001836a0 | PHPLCrashMachExceptionPortSet::countByEnumeratingWithState:objects:count: */

/* Function Stack Size: 0x28 bytes */

unsigned_long_long
PHPLCrashMachExceptionPortSet::countByEnumeratingWithState_objects_count_
          (ID param_1,SEL param_2,AnonymousStructure1 *param_3,ID *param_4,
          unsigned_long_long param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(*(ID *)(param_1 + 8));
  return IVar1;
}



/* Address: 0x1001836a8 | PHPLCrashMachExceptionPortSet::asyncSafeRepresentation */

/* Function Stack Size: 0x10 bytes */

void PHPLCrashMachExceptionPortSet::asyncSafeRepresentation
               (plcrash_mach_exception_port_set *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 7) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 5) = uVar1;
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 0xb) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 9) = uVar2;
  __return_storage_ptr__->field4_0xac[0xd] = *(int *)(param_1 + 0xf0);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 5) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 3) = uVar1;
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 9) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 7) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 0xd) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 0xb) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 3) = uVar2;
  *(undefined8 *)(__return_storage_ptr__->field4_0xac + 1) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 3) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 1) = uVar1;
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 7) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 5) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 0xb) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 9) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field3_0x74 + 1) = uVar2;
  *(undefined8 *)(__return_storage_ptr__->field2_0x3c + 0xd) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 1) = *(undefined8 *)(param_1 + 0x18);
  __return_storage_ptr__->field0_0x0 = (int)uVar1;
  __return_storage_ptr__->field1_0x4[0] = (int)((ulong)uVar1 >> 0x20);
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 5) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 3) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 9) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 7) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 0xd) = uVar2;
  *(undefined8 *)(__return_storage_ptr__->field1_0x4 + 0xb) = uVar1;
  return;
}



/* Address: 0x1001836ec | PHPLCrashMachExceptionPortSet::set */

/* Function Stack Size: 0x10 bytes */

ID PHPLCrashMachExceptionPortSet::set(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x1001836f4 | PHPLCrashMachExceptionPortSet::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void PHPLCrashMachExceptionPortSet::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


