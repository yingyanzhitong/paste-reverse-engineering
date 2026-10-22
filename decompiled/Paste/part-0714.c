/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007d1b18 | FUN_1007d1b18 */

uint * FUN_1007d1b18(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar6 = *(long *)(lVar13 + 0x40) + uVar7;
  lVar11 = *(long *)(lVar15 + 0x40);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar19 = *(long *)(lVar10 + -8);
  uVar16 = (ulong)*(byte *)(lVar19 + 0x50);
  sVar12 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar1 = sVar12 + (lVar11 + uVar16 + (uVar6 & (uVar7 ^ 0xffffffffffffffff)) &
                   (uVar16 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar9 = (uint)bVar4;
  uVar18 = (uint)uVar1;
  if (2 < bVar4) {
    uVar8 = 4;
    if (uVar18 < 4) {
      uVar8 = uVar18;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007d1c28;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar9 = uVar8 | bVar4 - 3 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007d1c28:
  uVar7 = ~uVar7;
  uVar14 = ~uVar16;
  if (uVar9 != 2) {
    if (uVar9 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar13 + 8))(param_1,lVar2);
      uVar17 = (ulong)(uVar6 + (long)param_1) & uVar7;
      (**(code **)(lVar15 + 8))(uVar17,lVar3);
      uVar17 = uVar17 + lVar11 + uVar16;
      uVar5 = uVar17 & uVar14;
      (**(code **)(lVar19 + 0x30))(uVar5,1,lVar10);
      if ((int)uVar5 == 0) {
        (**(code **)(lVar19 + 8))(uVar17 & uVar14,lVar10);
      }
    }
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar9 = (uint)bVar4;
  if (2 < bVar4) {
    uVar8 = 4;
    if (uVar18 < 4) {
      uVar8 = uVar18;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007d1d48;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar9 = uVar8 | bVar4 - 3 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007d1d48:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar9 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar2);
    uVar17 = (ulong)(uVar6 + (long)param_1) & uVar7;
    uVar7 = (ulong)(uVar6 + (long)param_2) & uVar7;
    (**(code **)(lVar15 + 0x10))(uVar17,uVar7,lVar3);
    uVar17 = uVar17 + lVar11 + uVar16;
    uVar7 = uVar7 + lVar11 + uVar16;
    uVar6 = uVar7 & uVar14;
    (**(code **)(lVar19 + 0x30))(uVar6,1,lVar10);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar19 + 0x10))(uVar17 & uVar14,uVar7 & uVar14,lVar10);
      (**(code **)(lVar19 + 0x38))(uVar17 & uVar14,0,1,lVar10);
    }
    else {
      _memcpy((void *)(uVar17 & uVar14),(void *)(uVar7 & uVar14),sVar12);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1007d1e54 | FUN_1007d1e54 */

void FUN_1007d1e54(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar17 = *(long *)(lVar2 + -8);
  uVar7 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar13 = *(long *)(lVar6 + 0x40) + uVar7;
  lVar16 = *(long *)(lVar17 + 0x40);
  lVar15 = *(long *)(lVar3 + -8);
  uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
  sVar10 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  uVar1 = sVar10 + (lVar16 + uVar18 + (uVar13 & (uVar7 ^ 0xffffffffffffffff)) &
                   (uVar18 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar4;
  if (2 < bVar4) {
    uVar14 = (uint)uVar1;
    uVar9 = 4;
    if (uVar14 < 4) {
      uVar9 = uVar14;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007d1f44;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    uVar8 = uVar9 | bVar4 - 3 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1007d1f44:
  if (uVar8 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar5 = 2;
  }
  else if (uVar8 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar5 = 1;
  }
  else {
    uVar11 = ~uVar18;
    (**(code **)(lVar6 + 0x20))();
    uVar12 = uVar13 + (long)param_1 & ~uVar7;
    uVar13 = (ulong)(uVar13 + (long)param_2) & ~uVar7;
    (**(code **)(lVar17 + 0x20))(uVar12,uVar13,lVar2);
    lVar16 = lVar16 + uVar18;
    uVar12 = uVar12 + lVar16;
    uVar13 = uVar13 + lVar16;
    uVar7 = uVar13 & uVar11;
    (**(code **)(lVar15 + 0x30))(uVar7,1,lVar3);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar15 + 0x20))(uVar12 & uVar11,uVar13 & uVar11,lVar3);
      (**(code **)(lVar15 + 0x38))(uVar12 & uVar11,0,1,lVar3);
    }
    else {
      _memcpy((void *)(uVar12 & uVar11),(void *)(uVar13 & uVar11),sVar10);
    }
    uVar5 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar5;
  return;
}



/* Address: 0x1007d2050 | FUN_1007d2050 */

uint * FUN_1007d2050(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar5 = *(long *)(lVar13 + 0x40) + uVar7;
  lVar11 = *(long *)(lVar15 + 0x40);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar19 = *(long *)(lVar10 + -8);
  uVar16 = (ulong)*(byte *)(lVar19 + 0x50);
  sVar12 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar1 = sVar12 + (lVar11 + uVar16 + (uVar5 & (uVar7 ^ 0xffffffffffffffff)) &
                   (uVar16 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar6 = *(byte *)((long)param_1 + uVar1);
  uVar9 = (uint)bVar6;
  uVar18 = (uint)uVar1;
  if (2 < bVar6) {
    uVar8 = 4;
    if (uVar18 < 4) {
      uVar8 = uVar18;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007d2160;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar9 = uVar8 | bVar6 - 3 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007d2160:
  uVar7 = ~uVar7;
  uVar14 = ~uVar16;
  if (uVar9 != 2) {
    if (uVar9 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar13 + 8))(param_1,lVar2);
      uVar17 = (ulong)(uVar5 + (long)param_1) & uVar7;
      (**(code **)(lVar15 + 8))(uVar17,lVar3);
      uVar17 = uVar17 + lVar11 + uVar16;
      uVar4 = uVar17 & uVar14;
      (**(code **)(lVar19 + 0x30))(uVar4,1,lVar10);
      if ((int)uVar4 == 0) {
        (**(code **)(lVar19 + 8))(uVar17 & uVar14,lVar10);
      }
    }
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar9 = (uint)bVar6;
  if (2 < bVar6) {
    uVar8 = 4;
    if (uVar18 < 4) {
      uVar8 = uVar18;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007d2280;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar9 = uVar8 | bVar6 - 3 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar9 = uVar8;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007d2280:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar6 = 2;
  }
  else if (uVar9 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar6 = 1;
  }
  else {
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar2);
    uVar17 = (ulong)(uVar5 + (long)param_1) & uVar7;
    uVar7 = (ulong)(uVar5 + (long)param_2) & uVar7;
    (**(code **)(lVar15 + 0x20))(uVar17,uVar7,lVar3);
    uVar17 = uVar17 + lVar11 + uVar16;
    uVar7 = uVar7 + lVar11 + uVar16;
    uVar5 = uVar7 & uVar14;
    (**(code **)(lVar19 + 0x30))(uVar5,1,lVar10);
    if ((int)uVar5 == 0) {
      (**(code **)(lVar19 + 0x20))(uVar17 & uVar14,uVar7 & uVar14,lVar10);
      (**(code **)(lVar19 + 0x38))(uVar17 & uVar14,0,1,lVar10);
    }
    else {
      _memcpy((void *)(uVar17 & uVar14),(void *)(uVar7 & uVar14),sVar12);
    }
    bVar6 = 0;
  }
  *(byte *)((long)param_1 + uVar1) = bVar6;
  return param_1;
}



/* Address: 0x1007d2384 | FUN_1007d2384 */

int FUN_1007d2384(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1007d246c;
  uVar5 = uVar7 + 1;
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar10 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar10 < 0x100) {
      if (uVar10 < 2) goto LAB_1007d246c;
      goto LAB_1007d23f8;
    }
    if (uVar10 >> 0x10 == 0) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1007d23f8:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar10 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar10 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + 0xfe;
  }
LAB_1007d246c:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar7)) {
    iVar2 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1007d24c8 | FUN_1007d24c8 */

void FUN_1007d24c8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar5 = lVar7 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar5 &
                   (uVar5 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar4 + 0x40) + (ulong)*(byte *)(lVar6 + 0x50) &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  sVar1 = uVar5 + 1;
  uVar8 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar8 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar2) {
      bVar9 = 4;
    }
    if (uVar2 < 0x100) {
      bVar9 = 1 < uVar2;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  return;
}



/* Address: 0x1007d26ac | FUN_1007d26ac */

uint FUN_1007d26ac(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar6 = lVar8 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar6 &
                   (uVar6 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar7 + 0x50) &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar6);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar6;
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Address: 0x1007d2780 | FUN_1007d2780 */

void FUN_1007d2780(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar3 = lVar5 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar3 &
                   (uVar3 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar2 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
                  ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar1 = (uint)uVar3;
    if (uVar1 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar1 << 3 & 0x1f)) + '\x03';
      if (uVar1 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar1 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
    if (3 < uVar1) {
      uVar1 = 4;
    }
    _bzero(param_1,uVar3);
    if ((int)uVar1 < 3) {
      if (uVar1 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar1 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007d2898 | thunk_FUN_1007d289c */

undefined8 * thunk_FUN_1007d289c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_10076eed0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x1007d289c | FUN_1007d289c */

undefined8 * FUN_1007d289c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_10076eed0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x1007d28e4 | FUN_1007d28e4 */

undefined8 * FUN_1007d28e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_10076eed0(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_10076ef10(uVar2,uVar4,uVar5);
  return param_1;
}



/* Address: 0x1007d2938 | FUN_1007d2938 */

undefined8 * FUN_1007d2938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_10076ef10(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x1007d2978 | FUN_1007d2978 */

void FUN_1007d2978(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc13d8);
  return;
}



/* Address: 0x1007d2984 | FUN_1007d2984 */

void FUN_1007d2984(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc142c);
  return;
}



/* Address: 0x1007d2990 | thunk_FUN_1007c863c */

void thunk_FUN_1007c863c(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  lVar14 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(lVar6 + -8);
  uVar22 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar26 = *(long *)(lVar14 + 0x40) + uVar22;
  lVar18 = *(long *)(lVar17 + 0x40);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar23 = *(long *)(lVar5 + -8);
  uVar25 = (ulong)*(byte *)(lVar23 + 0x50);
  lVar19 = *(long *)(lVar23 + 0x40);
  if (*(int *)(lVar23 + 0x54) == 0) {
    lVar19 = lVar19 + 1;
  }
  uVar1 = lVar19 + (lVar18 + uVar25 + (uVar26 & (uVar22 ^ 0xffffffffffffffff)) &
                   (uVar25 ^ 0xffffffffffffffff));
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar32 = *(long *)(lVar11 + -8);
  bVar7 = *(byte *)(lVar32 + 0x50);
  uVar31 = (ulong)bVar7;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar6,puVar10,puVar9);
  lVar28 = *(long *)(lVar12 + -8);
  bVar8 = *(byte *)(lVar28 + 0x50);
  uVar30 = (ulong)bVar8;
  uVar27 = uVar30 | 7;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar5,puVar10,puVar9);
  lVar33 = *(long *)(lVar13 + -8);
  uVar34 = (ulong)*(byte *)(lVar33 + 0x50);
  uVar15 = uVar34 | 7;
  uVar20 = (ulong)(byte)(bVar8 | bVar7 | *(byte *)(lVar33 + 0x50));
  uVar29 = uVar20 | 7;
  lVar19 = *(long *)(lVar32 + 0x40) + (uVar31 + 8 & (uVar31 ^ 0xffffffffffffffff));
  if (*(int *)(lVar32 + 0x54) == 0) {
    lVar19 = lVar19 + 1;
  }
  lVar2 = *(long *)(lVar28 + 0x40) + (uVar30 + 8 & (uVar30 ^ 0xffffffffffffffff));
  if (*(int *)(lVar28 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  lVar21 = ((((-uVar20 - 9 | uVar29) + (-uVar34 - 9 | uVar34)) -
            (ulong)(*(int *)(lVar33 + 0x54) == 0)) - *(long *)(lVar33 + 0x40)) -
           (lVar2 + uVar15 + (lVar19 + uVar27 & (uVar27 ^ 0xffffffffffffffff)) &
           (uVar15 ^ 0xffffffffffffffff));
  uVar20 = -lVar21 - 2;
  if (uVar20 <= uVar1) {
    uVar20 = uVar1;
  }
  uVar1 = (5U - lVar21 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar20) {
    uVar1 = uVar20;
  }
  bVar7 = *(byte *)((long)param_1 + uVar1);
  uVar24 = (uint)bVar7;
  if (2 < bVar7) {
    uVar16 = (uint)uVar1;
    uVar3 = 4;
    if (uVar16 < 4) {
      uVar3 = uVar16;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007c88a4;
      uVar24 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar24 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar24 = (uint)(uint3)*param_1;
    }
    else {
      uVar24 = *param_1;
    }
    if (uVar16 < 4) {
      uVar24 = (uVar24 | bVar7 - 3 << (ulong)((uVar16 & 3) << 3)) + 3;
    }
    else {
      uVar24 = uVar24 + 3;
    }
  }
LAB_1007c88a4:
  if ((uVar24 == 2) || (uVar24 == 1)) {
    _swift_release(*(undefined8 *)param_1);
    uVar25 = (ulong)((long)param_1 + uVar29 + 8) & ~uVar29;
    uVar26 = uVar31 + 8 + uVar25;
    uVar22 = uVar26 & ~uVar31;
    (**(code **)(lVar32 + 0x30))(uVar22,1,lVar11);
    if ((int)uVar22 == 0) {
      (**(code **)(lVar32 + 8))(uVar26 & ~uVar31,lVar11);
    }
    uVar25 = lVar19 + uVar27 + uVar25 & ~uVar27;
    uVar26 = uVar30 + 8 + uVar25;
    uVar22 = uVar26 & ~uVar30;
    (**(code **)(lVar28 + 0x30))(uVar22,1,lVar12);
    if ((int)uVar22 == 0) {
      (**(code **)(lVar28 + 8))(uVar26 & ~uVar30,lVar12);
    }
    uVar26 = uVar34 + (lVar2 + uVar15 + uVar25 & ~uVar15) + 8;
    uVar22 = uVar26 & ~uVar34;
    (**(code **)(lVar33 + 0x30))(uVar22,1,lVar13);
    if ((int)uVar22 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar33 + 8);
      uVar26 = uVar26 & ~uVar34;
LAB_1007c8a38:
                    /* WARNING: Could not recover jumptable at 0x0001007c8a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar26,lVar13);
      return;
    }
  }
  else if (uVar24 == 0) {
    (**(code **)(lVar14 + 8))(param_1,lVar4);
    uVar26 = (ulong)(uVar26 + (long)param_1) & ~uVar22;
    (**(code **)(lVar17 + 8))(uVar26,lVar6);
    uVar26 = uVar26 + lVar18 + uVar25;
    uVar22 = uVar26 & ~uVar25;
    (**(code **)(lVar23 + 0x30))(uVar22,1,lVar5);
    if ((int)uVar22 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
      uVar26 = uVar26 & ~uVar25;
      lVar13 = lVar5;
      goto LAB_1007c8a38;
    }
  }
  return;
}



/* Address: 0x1007d2994 | thunk_FUN_1007d1104 */

void thunk_FUN_1007d1104(void)

{
  FUN_1007d1104();
  return;
}



/* Address: 0x1007d2998 | thunk_FUN_1007d289c */

void thunk_FUN_1007d289c(void)

{
  thunk_FUN_1007d289c();
  return;
}



/* Address: 0x1007d299c | FUN_1007d299c */

void FUN_1007d299c(undefined8 param_1,undefined8 param_2,long param_3)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_90 [8];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  puVar2 = auStack_90 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100733c6c(param_1,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_100733b9c(puVar2);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    puStack_80 = &local_70;
    local_60 = UVar5.unknown;
    lStack_58 = lVar7;
  }
  local_88 = 1;
  _swift_task_create(uVar6,&local_88,PTR___type_metadata_for____100eae0c8 + 8,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1007d2b14 | FUN_1007d2b14 */

void FUN_1007d2b14(void)

{
  Task TVar1;
  Optional OVar2;
  undefined8 uVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  CancellationError CVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Task local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar9 = *unaff_x20;
  lVar10 = unaff_x20[2];
  lVar12 = *(long *)(lVar9 + 0x58);
  uStack_98 = *(undefined8 *)(lVar9 + 0x58);
  puVar15 = *(undefined **)(lVar9 + 0x50);
  uStack_88 = *(undefined8 *)(lVar9 + 0x68);
  uVar16 = *(undefined8 *)(lVar9 + 0x60);
  uVar13 = *(undefined8 *)(lVar9 + 0x68);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uStack_78 = *(undefined8 *)(lVar9 + 0x78);
  uVar17 = *(undefined8 *)(lVar9 + 0x70);
  uVar3 = 0;
  local_e8.unknown = puVar15;
  local_e0 = lVar12;
  local_d8 = uVar16;
  local_d0 = uVar13;
  local_c8 = uVar17;
  local_c0 = uVar14;
  local_a0 = puVar15;
  uStack_90 = uVar16;
  local_80 = uVar17;
  FUN_1007c7bd4(0,&local_e8);
  local_e8.unknown = puVar15;
  local_e0 = lVar12;
  local_d8 = uVar16;
  local_d0 = uVar13;
  local_c8 = uVar17;
  local_c0 = uVar14;
  FUN_1007d2984(0xff,&local_e8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_e8,FUN_1007d6b58,auStack_b0,lVar10,uVar3,OVar2.value);
  lVar9 = local_e0;
  TVar1.unknown = local_e8.unknown;
  if (local_e8.unknown != (undefined *)0x0) {
    lVar10 = *(long *)(local_e0 + 0x10);
    if (lVar10 == 0) {
      _swift_retain(local_e8.unknown);
    }
    else {
      puVar11 = (undefined8 *)(local_e0 + 0x20);
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar5 = CVar4;
      FUN_10076915c();
      _swift_retain(TVar1.unknown);
      puVar15 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        uVar3 = *puVar11;
        CVar6 = CVar4;
        _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
        Swift::CancellationError::init();
        puVar7 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar8 = (undefined8 *)puVar15;
        _swift_allocError();
        *puVar8 = CVar6.unknown;
        _swift_continuation_throwingResumeWithError(uVar3,puVar7);
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    Swift::Task::cancel(TVar1);
    FUN_100774094(TVar1.unknown,lVar9);
    _swift_release(TVar1.unknown);
  }
  return;
}



/* Address: 0x1007d2cf4 | FUN_1007d2cf4 */

void FUN_1007d2cf4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1007d2d14,0,0);
  return;
}



/* Address: 0x1007d2d14 | FUN_1007d2d14 */

void FUN_1007d2d14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x20);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x70),*(undefined8 *)(lVar7 + 0x58),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x78),*(undefined8 *)(lVar7 + 0x60),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005fc418;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&UNK_100c79040,*(undefined8 *)(unaff_x22 + 0x18),
                FUN_1007d6c14,*(undefined8 *)(unaff_x22 + 0x18),0,0,OVar3.value);
  return;
}



/* Address: 0x1007d2e48 | FUN_1007d2e48 */

void FUN_1007d2e48(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = *param_2;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x58),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x78),*(undefined8 *)(lVar8 + 0x60),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar4 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x20) = CONCAT71(extraout_var,RVar4.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,RVar4.value) + -8);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar7;
  _swift_task_switch(FUN_1007d2f80,0,0);
  return;
}



/* Address: 0x1007d2f80 | FUN_1007d2f80 */

void FUN_1007d2f80(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10076f72c;
  FUN_10072f29c(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,FUN_1007d6c38,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x1007d2ffc | FUN_1007d2ffc */

void FUN_1007d2ffc(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  Optional OVar4;
  Result RVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  String SVar21;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  long local_120 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 extraout_var_00;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar14 = *param_2;
  uVar12 = *(undefined8 *)(lVar14 + 0x68);
  uStack_e8 = *(undefined8 *)(lVar14 + 0x68);
  local_f0 = *(undefined8 *)(lVar14 + 0x60);
  uVar17 = *(undefined8 *)(lVar14 + 0x78);
  uStack_d8 = *(undefined8 *)(lVar14 + 0x78);
  local_e0 = *(undefined8 *)(lVar14 + 0x70);
  local_120[3] = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar17,local_f0,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  uVar20 = *(undefined8 *)(lVar14 + 0x58);
  uStack_f8 = *(undefined8 *)(lVar14 + 0x58);
  local_100 = *(undefined8 *)(lVar14 + 0x50);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar12,local_100,puVar2,puVar1);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_e0,uVar20,puVar2,puVar1);
  lVar14 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,OVar4.value,0,0);
  local_120[2] = lVar14;
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_120[1] = CONCAT71(extraout_var,RVar5.value);
  lVar13 = (long)local_120 -
           (*(long *)(*(long *)(local_120[1] + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = uStack_f8;
  local_a0 = local_100;
  local_88 = uStack_e8;
  local_90 = local_f0;
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  lVar14 = 0xff;
  local_120[0] = lVar13;
  FUN_1007d10c0(0xff,&local_a0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar4.value);
  lVar18 = *(long *)(lVar8 + -8);
  uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar19 = (long *)(lVar13 - uVar10);
  lVar13 = (long)plVar19 - uVar10;
  lVar15 = param_2[2];
  local_b0 = local_120[3];
  local_a0 = local_100;
  local_90 = local_f0;
  local_80 = local_e0;
  uVar6 = 0;
  plStack_a8 = param_2;
  uStack_98 = uVar20;
  local_88 = uVar12;
  uStack_78 = uVar17;
  FUN_1007c7bd4(0,&local_a0);
  FUN_10079f534(lVar13,FUN_1007d6c40,auStack_c0,lVar15,uVar6,lVar8);
  (**(code **)(lVar18 + 0x10))(plVar19,lVar13,lVar8);
  plVar9 = plVar19;
  (**(code **)(*(long *)(lVar14 + -8) + 0x30))(plVar19,1,lVar14);
  if ((int)plVar9 != 1) {
    plVar9 = plVar19;
    _swift_getEnumCaseMultiPayload(plVar19,lVar14);
    lVar14 = local_120[0];
    if ((int)plVar9 == 1) {
      lVar15 = *plVar19;
      lVar14 = *(long *)(lVar15 + 0x10);
      if (lVar14 != 0) {
        puVar16 = (undefined8 *)(lVar15 + 0x20);
        do {
          _swift_continuation_throwingResume(*puVar16);
          lVar14 = lVar14 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar14 != 0);
      }
      _swift_bridgeObjectRelease(lVar15);
    }
    else {
      if ((int)plVar9 != 2) {
        *(undefined4 *)(lVar13 + -8) = 0;
        *(undefined8 *)(lVar13 + -0x10) = 0x4c;
        SVar21.bridgeObject = (void *)0x2;
        SVar21.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000016,
                   0x8000000100db1320,0xdb1940);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d3348);
        (*pcVar3)();
      }
      lVar11 = *plVar19;
      (**(code **)(*(long *)(local_120[2] + -8) + 0x38))(local_120[0],1,1);
      lVar15 = local_120[1];
      _swift_storeEnumTagMultiPayload(lVar14,local_120[1],0);
      FUN_10072e9c0(lVar14,lVar11,lVar15);
    }
  }
  (**(code **)(lVar18 + 8))(lVar13,lVar8);
  return;
}



/* Address: 0x1007d3348 | FUN_1007d3348 */

void FUN_1007d3348(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  Optional OVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar13 = *param_4;
  uVar12 = *(undefined8 *)(lVar13 + 0x60);
  local_e8 = param_4;
  local_a0 = param_1;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_f0 = CONCAT71(extraout_var,OVar6.value);
  local_c8 = *(long *)(local_f0 + -8);
  local_f8 = auStack_110 + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar13 + 0x50);
  lVar2 = *(long *)(lVar13 + 0x58);
  local_d0 = *(long *)(lVar2 + -8);
  local_100 = (long)local_f8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = *(long *)(lVar1 + -8);
  lVar10 = local_100 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = *(undefined8 *)(lVar13 + 0x70);
  local_b0 = *(undefined8 *)(lVar13 + 0x68);
  local_70 = *(undefined8 *)(lVar13 + 0x78);
  uStack_b8 = *(undefined8 *)(lVar13 + 0x78);
  local_c0 = *(undefined8 *)(lVar13 + 0x70);
  lVar7 = 0;
  local_e0 = lVar10;
  local_98 = lVar1;
  lStack_90 = lVar2;
  local_88 = uVar12;
  local_80 = local_b0;
  uStack_78 = uStack_a8;
  FUN_1007d10c0(0,&local_98);
  lVar15 = *(long *)(lVar7 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uVar11;
  lVar14 = lVar10 - uVar11;
  local_80 = local_b0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  uVar8 = 0;
  local_98 = lVar1;
  lStack_90 = lVar2;
  local_88 = uVar12;
  FUN_1007c7bd4(0,&local_98);
  local_c0 = param_2;
  local_b0 = param_3;
  FUN_1007d0a00(lVar14,param_3,uVar8);
  (**(code **)(lVar15 + 0x10))(lVar10,lVar14,lVar7);
  lVar9 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar7);
  lVar13 = local_f0;
  if ((int)lVar9 == 0) {
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,lVar1,lVar2,local_f0,0,0);
    lVar5 = local_e0;
    iVar3 = *(int *)(lVar9 + 0x30);
    local_108 = (long)*(int *)(lVar9 + 0x40);
    (**(code **)(local_d8 + 0x20))(local_e0,lVar10,lVar1);
    lVar9 = local_100;
    (**(code **)(local_d0 + 0x20))(local_100,lVar10 + iVar3,lVar2);
    puVar4 = local_f8;
    (**(code **)(local_c8 + 0x20))(local_f8,lVar10 + local_108,lVar13);
    FUN_1007d3620(local_c0,lVar5,lVar9,puVar4,local_b0);
    (**(code **)(local_c8 + 8))(puVar4,lVar13);
    (**(code **)(local_d0 + 8))(lVar9,lVar2);
    (**(code **)(local_d8 + 8))(local_e0,lVar1);
    (**(code **)(lVar15 + 8))(lVar14,lVar7);
    uVar12 = 1;
    uVar8 = local_a0;
  }
  else {
    if ((int)lVar9 == 1) {
      (**(code **)(lVar15 + 8))(lVar10,lVar7);
    }
    uVar8 = local_a0;
    (**(code **)(lVar15 + 0x20))(local_a0,lVar14,lVar7);
    uVar12 = 0;
  }
  (**(code **)(lVar15 + 0x38))(uVar8,uVar12,1,lVar7);
  return;
}



/* Address: 0x1007d3620 | FUN_1007d3620 */

void FUN_1007d3620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  Optional OVar6;
  undefined7 extraout_var;
  undefined *puVar8;
  TaskPriority TVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar7;
  
  lVar18 = *unaff_x20;
  uVar12 = *(undefined8 *)(lVar18 + 0x60);
  local_f8 = param_2;
  local_e8 = param_3;
  local_e0 = param_4;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar6.value);
  lVar13 = *(long *)(lVar7 + -8);
  local_d0 = *(long *)(lVar13 + 0x40);
  lVar25 = (long)&local_120 - (local_d0 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar18 + 0x50);
  lVar2 = *(long *)(lVar18 + 0x58);
  lVar14 = *(long *)(lVar2 + -8);
  local_f0 = *(long *)(lVar14 + 0x40);
  lVar22 = lVar25 - (local_f0 + 0xfU & 0xfffffffffffffff0);
  lVar24 = *(long *)(lVar1 + -8);
  lVar16 = *(long *)(lVar24 + 0x40);
  lVar27 = lVar22 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fe0dc8;
  local_120 = lVar1;
  local_118 = lVar27;
  local_110 = lVar7;
  local_108 = lVar22;
  local_100 = lVar25;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar21 = lVar27 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar21;
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar21,1,1,TVar9.unknown);
  (**(code **)(lVar24 + 0x10))(lVar27,local_f8,lVar1);
  (**(code **)(lVar14 + 0x10))(lVar22,local_e8,lVar2);
  (**(code **)(lVar13 + 0x10))(lVar25,local_e0,lVar7);
  bVar3 = *(byte *)(lVar24 + 0x50);
  uVar26 = (ulong)bVar3 + 0x50 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  uVar23 = lVar16 + uVar26 + 7 & 0xfffffffffffffff8;
  bVar4 = *(byte *)(lVar14 + 0x50);
  uVar17 = bVar4 + uVar23 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  bVar5 = *(byte *)(lVar13 + 0x50);
  uVar15 = local_f0 + (ulong)bVar5 + uVar17 & ((ulong)bVar5 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100f02af0;
  _swift_allocObject(&DAT_100f02af0,uVar15 + local_d0,bVar3 | bVar4 | bVar5 | 7);
  lVar1 = local_120;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(long *)(puVar8 + 0x20) = local_120;
  *(long *)(puVar8 + 0x28) = lVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  uVar28 = *(undefined8 *)(lVar18 + 0x68);
  *(undefined8 *)(puVar8 + 0x38) = uVar28;
  uVar20 = *(undefined8 *)(lVar18 + 0x70);
  *(undefined8 *)(puVar8 + 0x40) = uVar20;
  uVar19 = *(undefined8 *)(lVar18 + 0x78);
  *(undefined8 *)(puVar8 + 0x48) = uVar19;
  (**(code **)(lVar24 + 0x20))(puVar8 + uVar26,local_118);
  *(long **)(puVar8 + uVar23) = unaff_x20;
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar17,local_108,lVar2);
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar15,local_100,local_110);
  _swift_retain(unaff_x20);
  uVar10 = 0;
  FUN_100731e58(0,0,local_d8,&DAT_100c79050,puVar8);
  local_98 = lVar1;
  uVar11 = 0;
  lStack_90 = lVar2;
  local_88 = uVar12;
  uStack_80 = uVar28;
  local_78 = uVar20;
  uStack_70 = uVar19;
  FUN_1007c7bd4(0,&local_98);
  FUN_1007ccb44(uVar10,param_5,uVar11);
  _swift_release(uVar10);
  return;
}



/* Address: 0x1007d38e8 | FUN_1007d38e8 */

void FUN_1007d38e8(long *param_1)

{
  undefined *puVar1;
  Task TVar2;
  ulong uVar3;
  Optional OVar4;
  Result RVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  CancellationError CVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 auStack_130 [8];
  long local_128;
  ulong local_120;
  undefined8 uStack_118;
  Task local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  ulong local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  ulong local_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar9;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar8 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *param_1;
  uVar15 = *(undefined8 *)(lVar19 + 0x68);
  uStack_108 = *(undefined8 *)(lVar19 + 0x68);
  local_110.unknown = *(undefined **)(lVar19 + 0x60);
  uVar16 = *(undefined8 *)(lVar19 + 0x78);
  uStack_f8 = *(undefined8 *)(lVar19 + 0x78);
  local_100 = *(undefined8 *)(lVar19 + 0x70);
  _swift_getAssociatedTypeWitness
            (0xff,uVar16,local_110.unknown,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  puVar21 = *(undefined **)(lVar19 + 0x58);
  uStack_118 = *(undefined8 *)(lVar19 + 0x58);
  local_120 = *(ulong *)(lVar19 + 0x50);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,local_120,puVar1,puVar8);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_100,puVar21,puVar1,puVar8);
  lVar19 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,OVar4.value,0,0);
  Swift::Optional::typeMetadataAccessor();
  puVar8 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,RVar5.value);
  puVar20 = auStack_130 + -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = param_1[2];
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  lStack_90 = (long)local_110.unknown;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_e8 = local_120;
  local_d8 = (long)local_110.unknown;
  local_c8 = local_100;
  uVar6 = 0;
  local_e0 = puVar21;
  local_d0 = uVar15;
  local_c0 = uVar16;
  FUN_1007c7bd4(0,&local_e8);
  local_e8 = local_120;
  local_d8 = (long)local_110.unknown;
  local_c8 = local_100;
  local_e0 = puVar21;
  local_d0 = uVar15;
  local_c0 = uVar16;
  FUN_1007d2978(0xff,&local_e8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_e8,FUN_1007d6c1c,auStack_b0,lVar17,uVar6,OVar4.value);
  puVar1 = local_e0;
  uVar3 = local_e8;
  if (((local_e8 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    local_100 = local_d8;
    if ((long)local_e8 < 0) {
      lVar19 = *(long *)(local_e0 + 0x10);
      if (lVar19 == 0) {
        _swift_retain(local_e8 & 0x7fffffffffffffff);
      }
      else {
        puVar18 = (undefined8 *)(local_e0 + 0x20);
        CVar10 = Swift::CancellationError::typeMetadataAccessor();
        CVar11 = CVar10;
        FUN_10076915c();
        _swift_retain(uVar3 & 0x7fffffffffffffff);
        puVar21 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        do {
          uVar6 = *puVar18;
          CVar12 = CVar10;
          _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
          Swift::CancellationError::init();
          puVar13 = puVar8;
          puVar14 = (undefined8 *)puVar21;
          _swift_allocError(puVar8,puVar21,0,0);
          *puVar14 = CVar12.unknown;
          _swift_continuation_throwingResumeWithError(uVar6,puVar13);
          lVar19 = lVar19 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar19 != 0);
      }
      Swift::Task::cancel((undefined *)(uVar3 & 0x7fffffffffffffff));
      FUN_100774188(uVar3,puVar1,local_100);
      _swift_release(uVar3 & 0x7fffffffffffffff);
    }
    else {
      lVar17 = *(long *)(local_d8 + 0x10);
      local_110.unknown = local_e0;
      local_128 = lVar9;
      local_120 = lVar19;
      if (lVar17 == 0) {
        _swift_retain(local_e0);
      }
      else {
        puVar18 = (undefined8 *)(local_d8 + 0x20);
        CVar10 = Swift::CancellationError::typeMetadataAccessor();
        CVar11 = CVar10;
        FUN_10076915c();
        _swift_retain(puVar1);
        puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        do {
          uVar6 = *puVar18;
          CVar12 = CVar10;
          _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
          Swift::CancellationError::init();
          puVar21 = puVar8;
          puVar14 = (undefined8 *)puVar1;
          _swift_allocError(puVar8,puVar1,0,0);
          *puVar14 = CVar12.unknown;
          _swift_continuation_throwingResumeWithError(uVar6,puVar21);
          lVar17 = lVar17 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar17 != 0);
      }
      TVar2.unknown = local_110.unknown;
      Swift::Task::cancel(local_110);
      (**(code **)(*(long *)(local_120 + -8) + 0x38))(puVar20,1,1);
      lVar19 = local_128;
      _swift_storeEnumTagMultiPayload(puVar20,local_128,0);
      FUN_10072e9c0(puVar20,uVar3,lVar19);
      _swift_release(TVar2.unknown);
      FUN_100774188(uVar3,TVar2.unknown,local_100);
    }
  }
  return;
}



/* Address: 0x1007d3d00 | FUN_1007d3d00 */

void FUN_1007d3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  _swift_task_switch(FUN_1007d3d20,0,0);
  return;
}



/* Address: 0x1007d3d20 | FUN_1007d3d20 */

void FUN_1007d3d20(void)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10077087c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007708d8;
  FUN_1007d3e24();
  return;
}



/* Address: 0x1007d3e24 | FUN_1007d3e24 */

void FUN_1007d3e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 **)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = *param_4;
  _swift_task_switch(FUN_1007d3e4c,0,0);
  return;
}



/* Address: 0x1007d3e4c | FUN_1007d3e4c */

void FUN_1007d3e4c(void)

{
  Optional OVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  ulong uVar7;
  undefined7 extraout_var;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ThrowingTaskGroup TVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar17 = *(long *)(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar4 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  uVar15 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(TVar6.unknown + -8) + 0x38);
  (*pcVar9)(uVar5,1,1,TVar6.unknown);
  lVar21 = *(long *)(lVar17 + 0x50);
  *(long *)(unaff_x22 + 0x130) = lVar21;
  lVar24 = *(long *)(lVar21 + -8);
  lVar22 = *(long *)(lVar24 + 0x40);
  uVar7 = lVar22 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar24 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar16 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar23 = lVar22 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100f02b18;
  _swift_allocObject(&DAT_100f02b18,uVar23 + 8,uVar10 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar21;
  lVar25 = *(long *)(lVar17 + 0x58);
  *(long *)(unaff_x22 + 0x138) = lVar25;
  *(long *)(puVar4 + 0x28) = lVar25;
  lVar22 = *(long *)(lVar17 + 0x60);
  *(long *)(unaff_x22 + 0x140) = lVar22;
  *(long *)(puVar4 + 0x30) = lVar22;
  uVar11 = *(undefined8 *)(lVar17 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  uVar12 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar12;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  uVar13 = *(undefined8 *)(lVar17 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  (**(code **)(lVar24 + 0x20))(puVar4 + uVar16,uVar7,lVar21);
  *(undefined8 *)(puVar4 + uVar23) = uVar14;
  _swift_task_dealloc(uVar7);
  _swift_retain(uVar14);
  FUN_1007d299c(uVar5,&DAT_100c79070,puVar4);
  FUN_100733b9c(uVar5);
  _swift_task_dealloc(uVar5);
  uVar5 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar9)();
  lVar17 = *(long *)(lVar25 + -8);
  lVar24 = *(long *)(lVar17 + 0x40);
  uVar7 = lVar24 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar17 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar23 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar16 = lVar24 + uVar23 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100f02b40;
  _swift_allocObject(&DAT_100f02b40,uVar16 + 8,uVar10 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar21;
  *(long *)(puVar4 + 0x28) = lVar25;
  *(long *)(puVar4 + 0x30) = lVar22;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  (**(code **)(lVar17 + 0x20))(puVar4 + uVar23,uVar7,lVar25);
  *(undefined8 *)(puVar4 + uVar16) = uVar14;
  _swift_task_dealloc(uVar7);
  _swift_retain(uVar14);
  FUN_1007d299c(uVar5,&DAT_100c79080,puVar4);
  FUN_100733b9c(uVar5);
  _swift_task_dealloc(uVar5);
  lVar17 = *(long *)(lVar22 + -8);
  lVar26 = *(long *)(lVar17 + 0x40);
  uVar5 = lVar26 + 0xf;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar24 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  uVar16 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar24 + 0x10))();
  uVar7 = uVar16;
  (**(code **)(lVar17 + 0x30))(uVar16,1,lVar22);
  if ((int)uVar7 == 1) {
    (**(code **)(lVar24 + 8))(uVar16,CONCAT71(extraout_var,OVar1.value));
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(uVar10,uVar16,lVar22);
    _swift_task_dealloc(uVar16);
    uVar16 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar16);
    (*pcVar9)();
    uVar5 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar5);
    (**(code **)(lVar17 + 0x10))();
    uVar15 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar7 = uVar15 + 0x50 & (uVar15 ^ 0xffffffffffffffff);
    uVar23 = lVar26 + uVar7 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f02b68;
    _swift_allocObject(&DAT_100f02b68,uVar23 + 8,uVar15 | 7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(long *)(puVar4 + 0x20) = lVar21;
    *(long *)(puVar4 + 0x28) = lVar25;
    *(long *)(puVar4 + 0x30) = lVar22;
    *(undefined8 *)(puVar4 + 0x38) = uVar11;
    *(undefined8 *)(puVar4 + 0x40) = uVar12;
    *(undefined8 *)(puVar4 + 0x48) = uVar13;
    (*pcVar18)(puVar4 + uVar7,uVar5,lVar22);
    *(undefined8 *)(puVar4 + uVar23) = uVar14;
    _swift_task_dealloc(uVar5);
    _swift_retain(uVar14);
    FUN_1007d299c(uVar16,&DAT_100c79090,puVar4);
    FUN_100733b9c(uVar16);
    (**(code **)(lVar17 + 8))(uVar10,lVar22);
  }
  puVar19 = *(undefined8 **)(unaff_x22 + 0xd8);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar10);
  TVar20.unknown = (undefined *)*puVar19;
  puVar4 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x160) = puVar4;
  bVar2 = Swift::ThrowingTaskGroup::get_isEmpty(TVar20);
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007d42fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar17 = *(long *)(unaff_x22 + 0x110);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x182) = bVar3 & 1;
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(lVar17 + 0x10);
  if ((bVar3 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar8;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1007d43d8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x181,TVar20.unknown,FUN_1007d443c,unaff_x22 + 0xe0);
  return;
}



/* Address: 0x1007d43d8 | FUN_1007d43d8 */

void FUN_1007d43d8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007d4464;
  }
  else {
    *(long *)(lVar2 + 0x178) = unaff_x20;
    pcVar1 = FUN_1007d4554;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007d443c | FUN_1007d443c */

void FUN_1007d443c(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007d4464;
  }
  else {
    *(long *)(unaff_x22 + 0x178) = unaff_x20;
    pcVar1 = FUN_1007d4554;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007d4464 | FUN_1007d4464 */

void FUN_1007d4464(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long unaff_x22;
  
  TVar3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xd8);
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty(TVar3);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001007d44c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x182) == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1007d43d8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x181,TVar3.unknown,FUN_1007d443c,unaff_x22 + 0xe0);
  return;
}



/* Address: 0x1007d4554 | FUN_1007d4554 */

void FUN_1007d4554(void)

{
  long lVar1;
  Task TVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Optional OVar6;
  Result RVar7;
  bool bVar8;
  undefined8 uVar9;
  CancellationError CVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  undefined8 uVar13;
  undefined7 extraout_var;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ThrowingTaskGroup TVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar21;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar23;
  uVar9 = 0;
  FUN_1007c7bd4(0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar21;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar22;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar23;
  FUN_1007d1494(0xff,(undefined8 *)(unaff_x22 + 0x88));
  OVar6 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(unaff_x22 + 0xb8,FUN_1007d7130,unaff_x22 + 0x10,uVar17,uVar9,OVar6.value);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  TVar2.unknown = *(undefined **)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  if (lVar1 != 0) {
    lVar20 = *(long *)(lVar3 + 0x10);
    if (lVar20 == 0) {
      _swift_errorRetain(uVar9);
      _swift_retain(TVar2.unknown);
    }
    else {
      _swift_errorRetain(uVar9);
      CVar10 = Swift::CancellationError::typeMetadataAccessor();
      CVar11 = CVar10;
      FUN_10076915c();
      _swift_retain(TVar2.unknown);
      puVar4 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar14 = (undefined8 *)(lVar3 + 0x20);
      do {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar19 = *puVar14;
        CVar12 = CVar10;
        _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
        Swift::CancellationError::init();
        puVar16 = (undefined8 *)puVar4;
        _swift_allocError(uVar17,puVar4,0,0);
        *puVar16 = CVar12.unknown;
        _swift_continuation_throwingResumeWithError(uVar19,uVar17);
        lVar20 = lVar20 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar20 != 0);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x130);
    Swift::Task::cancel(TVar2);
    puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
    uVar13 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar19,uVar21,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar19 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar23,uVar22,puVar5,puVar4);
    _swift_getAssociatedTypeWitness(0xff,uVar17,uVar24,puVar5,puVar4);
    OVar6 = Swift::Optional::typeMetadataAccessor();
    _swift_getTupleTypeMetadata3(0xff,uVar13,uVar19,OVar6.value,0,0);
    Swift::Optional::typeMetadataAccessor();
    RVar7 = Swift::Result::typeMetadataAccessor();
    puVar14 = (undefined8 *)
              (*(long *)(*(long *)(CONCAT71(extraout_var,RVar7.value) + -8) + 0x40) + 0xfU &
              0xfffffffffffffff0);
    _swift_task_alloc();
    *puVar14 = uVar9;
    _swift_storeEnumTagMultiPayload();
    FUN_10072e9c0(puVar14,lVar1,CONCAT71(extraout_var,RVar7.value));
    _swift_release(TVar2.unknown);
    _swift_task_dealloc(puVar14);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x178);
  Swift::ThrowingTaskGroup::cancelAll((undefined *)**(undefined8 **)(unaff_x22 + 0xd8));
  FUN_1007d71a8(lVar1,uVar9,TVar2.unknown,lVar3);
  _swift_errorRelease(uVar17);
  TVar18.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xd8);
  bVar8 = Swift::ThrowingTaskGroup::get_isEmpty(TVar18);
  if (!bVar8) {
    if (*(char *)(unaff_x22 + 0x182) != '\x01') {
      _swift_taskGroup_wait_next_throwing
                (unaff_x22 + 0x181,TVar18.unknown,FUN_1007d443c,unaff_x22 + 0xe0);
      return;
    }
    plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar15;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_1007d43d8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007d48c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007d4978 | FUN_1007d4978 */

void FUN_1007d4978(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar15 = *in_x4;
  uVar10 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar10;
  lVar11 = *(long *)(lVar15 + 0x50);
  *(long *)(unaff_x22 + 0x1c8) = lVar11;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x1d0) = lVar4;
  uVar12 = *(undefined8 *)(lVar15 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
  uVar13 = *(undefined8 *)(lVar15 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar13;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar12,uVar13,puVar1,puVar7);
  uVar14 = *(undefined8 *)(lVar15 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar14;
  uVar16 = *(undefined8 *)(lVar15 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar16;
  _swift_getAssociatedTypeWitness(0xff,uVar14,uVar16,puVar1,puVar7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar4,uVar5,OVar2.value,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x200) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x208) = CONCAT71(extraout_var,RVar3.value);
  lVar15 = *(long *)(CONCAT71(extraout_var,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x210) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x58) = lVar11;
  *(ulong *)(unaff_x22 + 0x220) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar14;
  uVar5 = 0xff;
  FUN_1007d10b4();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x230) = CONCAT71(extraout_var_00,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x238) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar9;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x250) = CONCAT71(extraout_var_01,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 600) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar4 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_1007d4c08,0,0);
  return;
}



/* Address: 0x1007d4c08 | FUN_1007d4c08 */

void FUN_1007d4c08(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1c8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d4cb0;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d4cb0 | FUN_1007d4cb0 */

void FUN_1007d4cb0(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(thunk_FUN_100772800,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1c0),*(undefined8 *)(lVar3 + 0x1c8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1007d4d88;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007d4d88 | FUN_1007d4d88 */

void FUN_1007d4d88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007d4dec;
  }
  else {
    pcVar1 = thunk_FUN_100772e2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007d4dec | FUN_1007d4dec */

void FUN_1007d4dec(void)

{
  Task TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Optional OVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined8 uVar10;
  UnsafeContinuation UVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar24 = *(long *)(unaff_x22 + 0x268);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar25 = uVar20;
  (**(code **)(lVar24 + 0x30))(uVar20,1,uVar22);
  if ((int)uVar25 == 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar20,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar3;
    *(undefined8 *)(unaff_x22 + 400) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar20 = 0;
    FUN_1007c7bd4(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    *(undefined8 *)(unaff_x22 + 200) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_1007d11f0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar6 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_1007d76d4,unaff_x22 + 0x170,uVar18,uVar20,OVar6.value);
    lVar24 = *(long *)(unaff_x22 + 0x118);
    if (lVar24 != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar14 = *(long *)(unaff_x22 + 0x128);
      lVar19 = *(long *)(lVar14 + 0x10);
      if (lVar19 == 0) {
        _swift_retain(TVar1.unknown);
      }
      else {
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_retain(TVar1.unknown);
        puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar23 = (undefined8 *)(lVar14 + 0x20);
        do {
          uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar20 = *puVar23;
          CVar9 = CVar7;
          _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
          Swift::CancellationError::init();
          puVar12 = (undefined8 *)puVar5;
          _swift_allocError(uVar25,puVar5,0,0);
          *puVar12 = CVar9.unknown;
          _swift_continuation_throwingResumeWithError(uVar20,uVar25);
          lVar19 = lVar19 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar19 != 0);
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
      lVar19 = *(long *)(unaff_x22 + 0x1f8);
      Swift::Task::cancel(TVar1);
      (**(code **)(*(long *)(lVar19 + -8) + 0x38))(uVar25,1,1,lVar19);
      _swift_storeEnumTagMultiPayload(uVar25,uVar20,0);
      FUN_10072e9c0(uVar25,lVar24,uVar20);
      _swift_release(TVar1.unknown);
      FUN_1007d7300(lVar24,TVar1.unknown,lVar14);
    }
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
    lVar14 = *(long *)(unaff_x22 + 0x238);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
    lVar19 = *(long *)(unaff_x22 + 0x228);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar24 + 0x20))(uVar10,uVar20,uVar22);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
    uVar25 = 0;
    FUN_1007c7bd4(0);
    FUN_10079f534(uVar17,FUN_1007d7424,unaff_x22 + 0x10,uVar16,uVar25,uVar15);
    (**(code **)(lVar14 + 0x10))(uVar13,uVar17,uVar15);
    (**(code **)(*(long *)(lVar19 + -8) + 0x30))(uVar13,1);
    if ((int)uVar13 != 1) {
      puVar23 = *(undefined8 **)(unaff_x22 + 0x240);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar14 = *(long *)(unaff_x22 + 0x210);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar21 = *puVar23;
      UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar24 = 0;
      _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar22,"downstreamContinuation result ",0);
      (**(code **)(lVar14 + 0x20))(uVar20,(long)puVar23 + (long)*(int *)(lVar24 + 0x30),uVar22);
      (**(code **)(lVar14 + 0x10))(uVar25,uVar20,uVar22);
      FUN_10072e9c0(uVar25,uVar21,uVar22);
      (**(code **)(lVar14 + 8))(uVar20,uVar22);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar24 = *(long *)(unaff_x22 + 0x268);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
    (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
              (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
    (**(code **)(lVar24 + 8))(uVar20,uVar25);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d4cb0;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d5214 | FUN_1007d5214 */

void FUN_1007d5214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f8 = param_4;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_3;
  local_d8 = param_8;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  puVar9 = auStack_100 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var_00,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  lVar11 = (long)puVar9 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar12 = lVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar6 + -8);
  (**(code **)(lVar8 + 0x10))(lVar12,local_e0,lVar6);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,1,1,lVar4);
  local_90 = local_f8;
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_d8;
  uStack_68 = local_b8;
  uVar7 = 0;
  FUN_1007c7bd4(0,&local_90);
  FUN_1007cdb1c(local_a0,lVar12,lVar11,puVar9,uVar7);
  (**(code **)(local_b0 + 8))(puVar9,lStack_a8);
  (**(code **)(local_d0 + 8))(lVar11,lStack_c8);
  (**(code **)(lVar10 + 8))(lVar12,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x1007d5448 | FUN_1007d5448 */

void FUN_1007d5448(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar15 = *in_x4;
  uVar12 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar12;
  uVar13 = *(undefined8 *)(lVar15 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar13;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar10 = *(undefined8 *)(lVar15 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar10;
  lVar11 = *(long *)(lVar15 + 0x58);
  *(long *)(unaff_x22 + 0x1d8) = lVar11;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar11,puVar1,puVar7);
  *(long *)(unaff_x22 + 0x1e0) = lVar5;
  uVar14 = *(undefined8 *)(lVar15 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar14;
  uVar16 = *(undefined8 *)(lVar15 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar16;
  _swift_getAssociatedTypeWitness(0xff,uVar14,uVar16,puVar1,puVar7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,lVar5,OVar2.value,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x200) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x208) = CONCAT71(extraout_var,RVar3.value);
  lVar15 = *(long *)(CONCAT71(extraout_var,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x210) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(ulong *)(unaff_x22 + 0x220) = uVar9;
  *(long *)(unaff_x22 + 0x60) = lVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar14;
  uVar4 = 0xff;
  FUN_1007d10b4();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x230) = CONCAT71(extraout_var_00,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x238) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar9;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x250) = CONCAT71(extraout_var_01,OVar2.value);
  lVar15 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 600) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar5 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_1007d56d8,0,0);
  return;
}



/* Address: 0x1007d56d8 | FUN_1007d56d8 */

void FUN_1007d56d8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1d8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d5780;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d5780 | FUN_1007d5780 */

void FUN_1007d5780(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(FUN_100772800,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1d0),*(undefined8 *)(lVar3 + 0x1d8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1007d5858;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007d5858 | FUN_1007d5858 */

void FUN_1007d5858(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007d58bc;
  }
  else {
    pcVar1 = FUN_100772e2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007d58bc | FUN_1007d58bc */

void FUN_1007d58bc(void)

{
  Task TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Optional OVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined8 uVar10;
  UnsafeContinuation UVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar24 = *(long *)(unaff_x22 + 0x268);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar25 = uVar20;
  (**(code **)(lVar24 + 0x30))(uVar20,1,uVar22);
  if ((int)uVar25 == 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar20,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar3;
    *(undefined8 *)(unaff_x22 + 400) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar20 = 0;
    FUN_1007c7bd4(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    *(undefined8 *)(unaff_x22 + 200) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_1007d11f0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar6 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_1007d7364,unaff_x22 + 0x170,uVar18,uVar20,OVar6.value);
    lVar24 = *(long *)(unaff_x22 + 0x118);
    if (lVar24 != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar14 = *(long *)(unaff_x22 + 0x128);
      lVar19 = *(long *)(lVar14 + 0x10);
      if (lVar19 == 0) {
        _swift_retain(TVar1.unknown);
      }
      else {
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_retain(TVar1.unknown);
        puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar23 = (undefined8 *)(lVar14 + 0x20);
        do {
          uVar25 = *(undefined8 *)(unaff_x22 + 0x200);
          uVar20 = *puVar23;
          CVar9 = CVar7;
          _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
          Swift::CancellationError::init();
          puVar12 = (undefined8 *)puVar5;
          _swift_allocError(uVar25,puVar5,0,0);
          *puVar12 = CVar9.unknown;
          _swift_continuation_throwingResumeWithError(uVar20,uVar25);
          lVar19 = lVar19 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar19 != 0);
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
      lVar19 = *(long *)(unaff_x22 + 0x1f8);
      Swift::Task::cancel(TVar1);
      (**(code **)(*(long *)(lVar19 + -8) + 0x38))(uVar25,1,1,lVar19);
      _swift_storeEnumTagMultiPayload(uVar25,uVar20,0);
      FUN_10072e9c0(uVar25,lVar24,uVar20);
      _swift_release(TVar1.unknown);
      FUN_1007d7300(lVar24,TVar1.unknown,lVar14);
    }
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
    lVar14 = *(long *)(unaff_x22 + 0x238);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
    lVar19 = *(long *)(unaff_x22 + 0x228);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar24 + 0x20))(uVar10,uVar20,uVar22);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
    uVar25 = 0;
    FUN_1007c7bd4(0);
    FUN_10079f534(uVar17,FUN_1007d7380,unaff_x22 + 0x10,uVar16,uVar25,uVar15);
    (**(code **)(lVar14 + 0x10))(uVar13,uVar17,uVar15);
    (**(code **)(*(long *)(lVar19 + -8) + 0x30))(uVar13,1);
    if ((int)uVar13 != 1) {
      puVar23 = *(undefined8 **)(unaff_x22 + 0x240);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar14 = *(long *)(unaff_x22 + 0x210);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar21 = *puVar23;
      UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar24 = 0;
      _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar22,"downstreamContinuation result ",0);
      (**(code **)(lVar14 + 0x20))(uVar20,(long)puVar23 + (long)*(int *)(lVar24 + 0x30),uVar22);
      (**(code **)(lVar14 + 0x10))(uVar25,uVar20,uVar22);
      FUN_10072e9c0(uVar25,uVar21,uVar22);
      (**(code **)(lVar14 + 8))(uVar20,uVar22);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar24 = *(long *)(unaff_x22 + 0x268);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
    (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
              (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
    (**(code **)(lVar24 + 8))(uVar20,uVar25);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d5780;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d5ce4 | FUN_1007d5ce4 */

void FUN_1007d5ce4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar5 = *param_2;
  lVar6 = param_2[2];
  uVar8 = *(ulong *)(lVar5 + 0x58);
  uStack_88 = *(undefined8 *)(lVar5 + 0x58);
  uVar7 = *(ulong *)(lVar5 + 0x50);
  uStack_78 = *(undefined8 *)(lVar5 + 0x68);
  uVar11 = *(undefined8 *)(lVar5 + 0x60);
  uVar9 = *(undefined8 *)(lVar5 + 0x68);
  uVar10 = *(undefined8 *)(lVar5 + 0x78);
  uStack_68 = *(undefined8 *)(lVar5 + 0x78);
  uVar12 = *(undefined8 *)(lVar5 + 0x70);
  uVar2 = 0;
  local_d8 = uVar7;
  local_d0 = uVar8;
  local_c8 = uVar11;
  local_c0 = uVar9;
  local_b8 = uVar12;
  local_b0 = uVar10;
  local_90 = uVar7;
  uStack_80 = uVar11;
  local_70 = uVar12;
  local_60 = param_1;
  FUN_1007c7bd4(0,&local_d8);
  local_d8 = uVar7;
  local_d0 = uVar8;
  local_c8 = uVar11;
  local_c0 = uVar9;
  local_b8 = uVar12;
  local_b0 = uVar10;
  FUN_1007d10cc(0xff,&local_d8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_d8,param_3,auStack_a0,lVar6,uVar2,OVar1.value);
  uVar7 = local_d0;
  uVar8 = local_d8;
  if ((((local_d8 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((local_d0 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)local_d0 < 0) {
      uVar7 = local_d0 & 0x7fffffffffffffff;
      puVar3 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar4 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar4 = uVar7;
      _swift_continuation_throwingResumeWithError(uVar8,puVar3);
    }
    else {
      _swift_continuation_throwingResume(local_d8);
      FUN_1007748a0(uVar8,uVar7);
    }
  }
  return;
}



/* Address: 0x1007d5e4c | FUN_1007d5e4c */

void FUN_1007d5e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_8;
  local_d8 = param_3;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var_00,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  lVar10 = lVar8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
  lVar6 = *(long *)(lVar5 + -8);
  (**(code **)(lVar6 + 0x10))(lVar10,local_d8,lVar5);
  (**(code **)(lVar6 + 0x38))(lVar10,0,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar8,1,1,lVar4);
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_e0;
  uStack_68 = local_b8;
  uVar7 = 0;
  local_90 = param_4;
  FUN_1007c7bd4(0,&local_90);
  FUN_1007cdb1c(local_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(local_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(local_d0 + 8))(lVar10,lStack_c8);
  (**(code **)(lVar9 + 8))(lVar11,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x1007d6080 | FUN_1007d6080 */

void FUN_1007d6080(void)

{
  undefined *puVar1;
  Optional OVar2;
  Result RVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var_00;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var_01;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar13 = *in_x4;
  uVar15 = *(undefined8 *)(lVar13 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar15;
  uVar16 = *(undefined8 *)(lVar13 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar16;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar17 = *(undefined8 *)(lVar13 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar17;
  uVar18 = *(undefined8 *)(lVar13 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar17,uVar18,puVar1,puVar7);
  uVar10 = *(undefined8 *)(lVar13 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar10;
  lVar14 = *(long *)(lVar13 + 0x60);
  *(long *)(unaff_x22 + 0x1e8) = lVar14;
  lVar13 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar14,puVar1,puVar7);
  *(long *)(unaff_x22 + 0x1f0) = lVar13;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,OVar2.value);
  *(long *)(unaff_x22 + 0x1f8) = lVar12;
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,lVar12,0,0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar6;
  Swift::Optional::typeMetadataAccessor();
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x208) = puVar7;
  RVar3 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x210) = CONCAT71(extraout_var_00,RVar3.value);
  lVar11 = *(long *)(CONCAT71(extraout_var_00,RVar3.value) + -8);
  *(long *)(unaff_x22 + 0x218) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar16;
  *(ulong *)(unaff_x22 + 0x228) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
  *(long *)(unaff_x22 + 0x68) = lVar14;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  uVar4 = 0xff;
  FUN_1007d10b4();
  *(undefined8 *)(unaff_x22 + 0x230) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x238) = CONCAT71(extraout_var_01,OVar2.value);
  lVar11 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x240) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar9;
  lVar12 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 600) = lVar12;
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar13 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x288) = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar13;
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
  _swift_task_switch(FUN_1007d630c,0,0);
  return;
}



/* Address: 0x1007d630c | FUN_1007d630c */

void FUN_1007d630c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),
             *(undefined8 *)(unaff_x22 + 0x1e8));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d63b4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d63b4 | FUN_1007d63b4 */

void FUN_1007d63b4(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x150) != 0) {
    *(long *)(lVar3 + 0x2b8) = *(long *)(lVar3 + 0x150);
    _swift_willThrow();
    _swift_task_switch(FUN_100773700,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x1e0),*(undefined8 *)(lVar3 + 0x1e8),
             *(undefined8 *)(lVar3 + 0x288),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x2a8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1007d648c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007d648c | FUN_1007d648c */

void FUN_1007d648c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007d64f0;
  }
  else {
    pcVar1 = FUN_100773d2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007d64f0 | FUN_1007d64f0 */

void FUN_1007d64f0(void)

{
  Task TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Optional OVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined8 uVar10;
  UnsafeContinuation UVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar24 = *(long *)(unaff_x22 + 0x268);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar25 = uVar20;
  (**(code **)(lVar24 + 0x30))(uVar20,1,uVar22);
  if ((int)uVar25 == 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar20,*(undefined8 *)(unaff_x22 + 0x1f8));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar3;
    *(undefined8 *)(unaff_x22 + 400) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar25;
    uVar20 = 0;
    FUN_1007c7bd4(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    *(undefined8 *)(unaff_x22 + 200) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar25;
    FUN_1007d11f0(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    OVar6 = Swift::Optional::typeMetadataAccessor();
    FUN_10079f534(unaff_x22 + 0x118,FUN_1007d76d4,unaff_x22 + 0x170,uVar18,uVar20,OVar6.value);
    lVar24 = *(long *)(unaff_x22 + 0x118);
    if (lVar24 != 0) {
      TVar1.unknown = *(undefined **)(unaff_x22 + 0x120);
      lVar14 = *(long *)(unaff_x22 + 0x128);
      lVar19 = *(long *)(lVar14 + 0x10);
      if (lVar19 == 0) {
        _swift_retain(TVar1.unknown);
      }
      else {
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        CVar8 = CVar7;
        FUN_10076915c();
        _swift_retain(TVar1.unknown);
        puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar23 = (undefined8 *)(lVar14 + 0x20);
        do {
          uVar25 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar20 = *puVar23;
          CVar9 = CVar7;
          _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
          Swift::CancellationError::init();
          puVar12 = (undefined8 *)puVar5;
          _swift_allocError(uVar25,puVar5,0,0);
          *puVar12 = CVar9.unknown;
          _swift_continuation_throwingResumeWithError(uVar20,uVar25);
          lVar19 = lVar19 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar19 != 0);
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar19 = *(long *)(unaff_x22 + 0x200);
      Swift::Task::cancel(TVar1);
      (**(code **)(*(long *)(lVar19 + -8) + 0x38))(uVar25,1,1,lVar19);
      _swift_storeEnumTagMultiPayload(uVar25,uVar20,0);
      FUN_10072e9c0(uVar25,lVar24,uVar20);
      _swift_release(TVar1.unknown);
      FUN_1007d7300(lVar24,TVar1.unknown,lVar14);
    }
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar14 = *(long *)(unaff_x22 + 0x240);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar19 = *(long *)(unaff_x22 + 0x230);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(lVar24 + 0x20))(uVar10,uVar20,uVar22);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar25;
    uVar25 = 0;
    FUN_1007c7bd4(0);
    FUN_10079f534(uVar17,FUN_1007d7330,unaff_x22 + 0x10,uVar16,uVar25,uVar15);
    (**(code **)(lVar14 + 0x10))(uVar13,uVar17,uVar15);
    (**(code **)(*(long *)(lVar19 + -8) + 0x30))(uVar13,1);
    if ((int)uVar13 != 1) {
      puVar23 = *(undefined8 **)(unaff_x22 + 0x248);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar14 = *(long *)(unaff_x22 + 0x218);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x210);
      uVar21 = *puVar23;
      UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar24 = 0;
      _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar22,"downstreamContinuation result ",0);
      (**(code **)(lVar14 + 0x20))(uVar20,(long)puVar23 + (long)*(int *)(lVar24 + 0x30),uVar22);
      (**(code **)(lVar14 + 0x10))(uVar25,uVar20,uVar22);
      FUN_10072e9c0(uVar25,uVar21,uVar22);
      (**(code **)(lVar14 + 8))(uVar20,uVar22);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar24 = *(long *)(unaff_x22 + 0x268);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
    (**(code **)(*(long *)(unaff_x22 + 0x240) + 8))
              (*(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x238));
    (**(code **)(lVar24 + 8))(uVar20,uVar25);
  }
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1007d63b4;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1007d5ce4();
  _swift_continuation_await(unaff_x22 + 0x130);
  return;
}



/* Address: 0x1007d6918 | FUN_1007d6918 */

void FUN_1007d6918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined7 extraout_var_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  local_f0 = param_7;
  local_e8 = param_5;
  local_e0 = param_8;
  local_c8 = param_3;
  local_c0 = param_6;
  local_b8 = param_9;
  local_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a8 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_d0 = CONCAT71(extraout_var_00,OVar3.value);
  local_d8 = *(long *)(lStack_d0 + -8);
  lVar10 = lVar8 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar10,1,1,lVar5);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x10))(lVar8,local_c8,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar8,0,1,lVar4);
  uStack_88 = local_e8;
  local_80 = local_c0;
  uStack_78 = local_f0;
  local_70 = local_e0;
  uStack_68 = local_b8;
  uVar7 = 0;
  local_90 = param_4;
  FUN_1007c7bd4(0,&local_90);
  FUN_1007cdb1c(local_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(local_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(local_d8 + 8))(lVar10,lStack_d0);
  (**(code **)(lVar9 + 8))(lVar11,CONCAT71(extraout_var_01,OVar3.value));
  return;
}



/* Address: 0x1007d6b4c | FUN_1007d6b4c */

void FUN_1007d6b4c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc1480);
  return;
}



/* Address: 0x1007d6b58 | FUN_1007d6b58 */

void FUN_1007d6b58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  local_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  local_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_1007c7bd4();
  FUN_1007cc550();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1007d6bb8 | FUN_1007d6bb8 */

void FUN_1007d6bb8(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007d2e48(plVar1,param_1);
  return;
}



/* Address: 0x1007d6c14 | FUN_1007d6c14 */

void FUN_1007d6c14(void)

{
  FUN_1007d38e8();
  return;
}



/* Address: 0x1007d6c1c | FUN_1007d6c1c */

void FUN_1007d6c1c(undefined8 param_1)

{
  FUN_1007d73b4(param_1,FUN_1007cffd8);
  return;
}



/* Address: 0x1007d6c38 | FUN_1007d6c38 */

void FUN_1007d6c38(void)

{
  FUN_1007d2ffc();
  return;
}



/* Address: 0x1007d6c40 | FUN_1007d6c40 */

void FUN_1007d6c40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007d3348(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007d6c58 | FUN_1007d6c58 */

void FUN_1007d6c58(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar11 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar11 + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar6 = *(long *)(lVar4 + -8);
  uVar7 = *(byte *)(lVar6 + 0x50) + uVar5 + 8 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  lVar10 = *(long *)(lVar6 + 0x40);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar9 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x50);
  uVar9 = uVar7 + lVar10 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar11 + 8))(unaff_x20 + uVar8,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5));
  (**(code **)(lVar6 + 8))(unaff_x20 + uVar7,lVar4);
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = unaff_x20 + uVar9;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(unaff_x20 + uVar9,lVar3);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1007d6d84 | FUN_1007d6d84 */

void FUN_1007d6d84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar9 = uVar6 + 0x50 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(lVar5 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar10 = uVar6 + uVar7 + 8 & (uVar6 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar5 + 0x40);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar6 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar7);
  plVar4 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
  FUN_1007d3d00(plVar4,param_1,uVar1,uVar2,unaff_x20 + uVar9,uVar8,unaff_x20 + uVar10,
                unaff_x20 + (uVar10 + lVar5 + uVar6 & (uVar6 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1007d6e70 | FUN_1007d6e70 */

void FUN_1007d6e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1007d3e24(plVar5,param_1,param_2,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1007d6ef8 | FUN_1007d6ef8 */

void FUN_1007d6ef8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}


