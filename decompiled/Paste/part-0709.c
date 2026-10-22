/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007bd88c | FUN_1007bd88c */

uint * FUN_1007bd88c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  byte bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  size_t sVar16;
  undefined8 *puVar17;
  size_t sVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  void *pvVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar26 = *(long *)(lVar7 + -8);
  uVar19 = (ulong)*(byte *)(lVar26 + 0x50);
  iVar9 = *(int *)(lVar26 + 0x54);
  sVar16 = *(size_t *)(lVar26 + 0x40);
  sVar5 = sVar16;
  if (iVar9 == 0) {
    sVar5 = sVar16 + 1;
  }
  uVar20 = (uVar19 + 8 & (uVar19 ^ 0xffffffffffffffff)) + sVar5;
  uVar13 = (uVar20 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar13 <= uVar20) {
    uVar13 = uVar20;
  }
  lVar23 = *(long *)(lVar8 + -8);
  uVar20 = (ulong)*(byte *)(lVar23 + 0x50);
  sVar18 = *(size_t *)(lVar23 + 0x40);
  if (*(int *)(lVar23 + 0x54) == 0) {
    sVar18 = sVar18 + 1;
  }
  lVar1 = sVar18 + 7;
  uVar2 = (lVar1 + (uVar20 + 8 & (uVar20 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
  if (uVar2 <= uVar13) {
    uVar2 = uVar13;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar12 = *(byte *)((long)param_1 + uVar2);
  uVar15 = (uint)bVar12;
  uVar25 = (uint)uVar2;
  if (3 < bVar12) {
    uVar6 = 4;
    if (uVar25 < 4) {
      uVar6 = uVar25;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007bd9dc;
      uVar15 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar15 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar15 = (uint)(uint3)*param_1;
    }
    else {
      uVar15 = *param_1;
    }
    if (uVar25 < 4) {
      uVar15 = (uVar15 | bVar12 - 4 << (ulong)((uVar25 & 3) << 3)) + 4;
    }
    else {
      uVar15 = uVar15 + 4;
    }
  }
LAB_1007bd9dc:
  uVar27 = ~uVar19;
  uVar13 = ~uVar20;
  if ((int)uVar15 < 2) {
    if (uVar15 == 0) {
      pbVar3 = (byte *)((long)param_1 + uVar19 + 8);
      uVar10 = (ulong)pbVar3 & uVar27;
      (**(code **)(lVar26 + 0x30))(uVar10,1,lVar7);
      if ((int)uVar10 == 0) {
        (**(code **)(lVar26 + 8))((ulong)pbVar3 & uVar27,lVar7);
      }
    }
    else {
      uVar24 = (ulong)((long)param_1 + uVar19 + 8) & uVar27;
      uVar10 = uVar24;
      (**(code **)(lVar26 + 0x30))(uVar24,1,lVar7);
      if ((int)uVar10 == 0) {
        (**(code **)(lVar26 + 8))(uVar24,lVar7);
      }
      puVar14 = (undefined8 *)(sVar5 + uVar24 + 7 & 0xfffffffffffffff8);
      FUN_1007b8e2c(*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2),
                    *(undefined1 *)((long)puVar14 + 0x11));
    }
  }
  else if (uVar15 == 2) {
    uVar24 = (ulong)((long)param_1 + uVar20 + 8) & uVar13;
    uVar10 = uVar24;
    (**(code **)(lVar23 + 0x30))(uVar24,1,lVar8);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar23 + 8))(uVar24,lVar8);
    }
    puVar14 = (undefined8 *)(lVar1 + uVar24 & 0xfffffffffffffff8);
    FUN_1007b8ba0(*puVar14,puVar14[1],puVar14[2],*(undefined1 *)(puVar14 + 3));
  }
  bVar12 = *(byte *)((long)param_2 + uVar2);
  uVar15 = (uint)bVar12;
  if (3 < bVar12) {
    uVar6 = 4;
    if (uVar25 < 4) {
      uVar6 = uVar25;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007bdb64;
      uVar15 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar15 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar15 = (uint)(uint3)*param_2;
    }
    else {
      uVar15 = *param_2;
    }
    if (uVar25 < 4) {
      uVar15 = (uVar15 | bVar12 - 4 << (ulong)((uVar25 & 3) << 3)) + 4;
    }
    else {
      uVar15 = uVar15 + 4;
    }
  }
LAB_1007bdb64:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  if ((int)uVar15 < 2) {
    if (uVar15 == 0) {
      pbVar3 = (byte *)((long)param_1 + uVar19 + 8);
      pbVar4 = (byte *)((long)param_2 + uVar19 + 8);
      uVar19 = (ulong)pbVar4 & uVar27;
      (**(code **)(lVar26 + 0x30))(uVar19,1,lVar7);
      if ((int)uVar19 == 0) {
        (**(code **)(lVar26 + 0x20))((ulong)pbVar3 & uVar27,(ulong)pbVar4 & uVar27,lVar7);
        (**(code **)(lVar26 + 0x38))((ulong)pbVar3 & uVar27,0,1,lVar7);
        bVar12 = 0;
      }
      else {
        _memcpy((void *)((ulong)pbVar3 & uVar27),(void *)((ulong)pbVar4 & uVar27),sVar5);
        bVar12 = 0;
      }
    }
    else {
      pvVar21 = (void *)((ulong)((long)param_1 + uVar19 + 8) & uVar27);
      pvVar22 = (void *)((ulong)((long)param_2 + uVar19 + 8) & uVar27);
      pvVar11 = pvVar22;
      (**(code **)(lVar26 + 0x30))(pvVar22,1,lVar7);
      if ((int)pvVar11 == 0) {
        (**(code **)(lVar26 + 0x20))(pvVar21,pvVar22,lVar7);
        (**(code **)(lVar26 + 0x38))(pvVar21,0,1,lVar7);
      }
      else {
        _memcpy(pvVar21,pvVar22,sVar5);
      }
      lVar7 = 7;
      if (iVar9 == 0) {
        lVar7 = 8;
      }
      puVar14 = (undefined8 *)(sVar16 + lVar7 + (long)pvVar22 & 0xfffffffffffffff8);
      uVar29 = puVar14[1];
      uVar28 = *puVar14;
      puVar17 = (undefined8 *)(sVar16 + lVar7 + (long)pvVar21 & 0xfffffffffffffff8);
      *(undefined2 *)(puVar17 + 2) = *(undefined2 *)(puVar14 + 2);
      puVar17[1] = uVar29;
      *puVar17 = uVar28;
      bVar12 = 1;
    }
  }
  else if (uVar15 == 2) {
    pvVar21 = (void *)((ulong)((long)param_1 + uVar20 + 8) & uVar13);
    pvVar22 = (void *)((ulong)((long)param_2 + uVar20 + 8) & uVar13);
    pvVar11 = pvVar22;
    (**(code **)(lVar23 + 0x30))(pvVar22,1,lVar8);
    if ((int)pvVar11 == 0) {
      (**(code **)(lVar23 + 0x20))(pvVar21,pvVar22,lVar8);
      (**(code **)(lVar23 + 0x38))(pvVar21,0,1,lVar8);
    }
    else {
      _memcpy(pvVar21,pvVar22,sVar18);
    }
    puVar17 = (undefined8 *)(lVar1 + (long)pvVar22 & 0xfffffffffffffff8);
    uVar29 = puVar17[1];
    uVar28 = *puVar17;
    uVar30 = *(undefined8 *)((long)puVar17 + 9);
    puVar14 = (undefined8 *)(lVar1 + (long)pvVar21 & 0xfffffffffffffff8);
    *(undefined8 *)((long)puVar14 + 0x11) = *(undefined8 *)((long)puVar17 + 0x11);
    *(undefined8 *)((long)puVar14 + 9) = uVar30;
    puVar14[1] = uVar29;
    *puVar14 = uVar28;
    bVar12 = 2;
  }
  else {
    bVar12 = 3;
  }
  *(byte *)((long)param_1 + uVar2) = bVar12;
  return param_1;
}



/* Address: 0x1007bdd70 | FUN_1007bdd70 */

int FUN_1007bdd70(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  lVar9 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar1 = lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  uVar8 = (uVar1 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar1 = (lVar10 + ((ulong)*(byte *)(lVar9 + 0x50) + 8 &
                    ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_1007bde80;
  uVar8 = uVar1 + 1;
  uVar5 = (uint)uVar8;
  uVar4 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfc >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_1007bde80;
      goto LAB_1007bde0c;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_1007bde0c:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar11 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar11 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return ((uint)uVar8 | uVar2) + 0xfd;
  }
LAB_1007bde80:
  iVar3 = 0;
  if (3 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1007bdedc | FUN_1007bdedc */

void FUN_1007bdedc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  lVar8 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar3 = lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  uVar1 = (uVar3 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar3 = (lVar9 + ((ulong)*(byte *)(lVar8 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  sVar2 = uVar3 + 1;
  uVar10 = (uint)sVar2;
  if (param_3 < 0xfd) {
    bVar11 = 0;
  }
  else if (uVar10 < 4) {
    uVar4 = ((param_3 + ~(-1 << (ulong)(uVar10 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar10 << 3 & 0x1f))
            + 1;
    bVar11 = 2;
    if (0xffff < uVar4) {
      bVar11 = 4;
    }
    if (uVar4 < 0x100) {
      bVar11 = 1 < uVar4;
    }
  }
  else {
    bVar11 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar11 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar3) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar10 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar4;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar12;
      }
    }
    else if (bVar11 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar12;
    }
  }
  return;
}



/* Address: 0x1007be0e8 | FUN_1007be0e8 */

uint FUN_1007be0e8(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar2 = lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  uVar1 = (uVar2 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar2 = (lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar3;
  if (3 < bVar3) {
    uVar8 = (uint)uVar2;
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar3 - 4 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 4;
  }
  return uVar4;
}



/* Address: 0x1007be1e4 | FUN_1007be1e4 */

void FUN_1007be1e4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar2 = lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
  uVar1 = (uVar2 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar2 = (lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (param_2 < 4) {
    *(char *)((long)param_1 + uVar2) = (char)param_2;
  }
  else {
    param_2 = param_2 - 4;
    uVar3 = (uint)uVar2;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar2) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x04';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar2) = 4;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,uVar2);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007be324 | FUN_1007be324 */

void FUN_1007be324(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8ee4);
  return;
}



/* Address: 0x1007be330 | FUN_1007be330 */

void FUN_1007be330(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8ef0);
  return;
}



/* Address: 0x1007be33c | FUN_1007be33c */

void FUN_1007be33c(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8efc);
  return;
}



/* Address: 0x1007be348 | FUN_1007be348 */

void FUN_1007be348(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c782e8;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100793c60();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1007be3c0 | FUN_1007be3c0 */

void FUN_1007be3c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = param_1 + uVar5 + 8;
  uVar2 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007be424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Address: 0x1007be428 | FUN_1007be428 */

undefined8 * FUN_1007be428(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = uVar6 + 8 + (long)param_1;
  uVar2 = uVar6 + 8 + (long)param_2;
  uVar3 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar3,1,lVar5);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar7 + 0x20))
              (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
    (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar5);
  }
  else {
    sVar4 = *(size_t *)(lVar7 + 0x40);
    if (*(int *)(lVar7 + 0x54) == 0) {
      sVar4 = sVar4 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar6 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar6 ^ 0xffffffffffffffff)),sVar4);
  }
  return param_1;
}



/* Address: 0x1007be4dc | FUN_1007be4dc */

undefined8 * FUN_1007be4dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar7 + 8 + (long)param_1;
  uVar2 = uVar7 + 8 + (long)param_2;
  pcVar9 = *(code **)(lVar8 + 0x30);
  uVar3 = uVar1 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar3,1,lVar6);
  uVar4 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar4,1,lVar6);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar8 + 0x28))
                (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(uVar1 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar8 + 0x20))
              (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar8 + 0x38))(uVar1 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar6);
    return param_1;
  }
  sVar5 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar7 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar7 ^ 0xffffffffffffffff)),sVar5);
  return param_1;
}



/* Address: 0x1007be5dc | FUN_1007be5dc */

int FUN_1007be5dc(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar2 = *(int *)(lVar8 + 0x54);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = iVar2 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  if (iVar2 == 0) {
    lVar9 = lVar9 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar8 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1007be694;
  uVar7 = lVar9 + ((ulong)bVar3 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar6 = (uint)uVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar10 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_1007be694;
      goto LAB_1007be654;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1007be654:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar10 != 0) {
    uVar5 = 0;
    if (uVar6 < 4) {
      uVar5 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)(uint)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar5) + 1;
  }
LAB_1007be694:
  if (-1 < (int)uVar5) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (int)uVar7 + 1;
  }
  uVar5 = (int)param_1 + (uint)bVar3 + 8 & ~(uint)bVar3;
  (**(code **)(lVar8 + 0x30))();
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = uVar5 - 1;
  }
  return iVar2;
}



/* Address: 0x1007be738 | FUN_1007be738 */

void FUN_1007be738(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint *puVar11;
  byte bVar12;
  int iVar13;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar13 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar13 != 0) {
    uVar2 = iVar13 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar13 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + sVar6;
  uVar5 = (uint)sVar1;
  bVar12 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    uVar3 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
    bVar10 = 2;
    if (0xfffe < uVar3) {
      bVar10 = 4;
    }
    if (uVar3 < 0xff) {
      bVar10 = uVar3 != 0;
    }
    bVar12 = 1;
    if (uVar5 < 4) {
      bVar12 = bVar10;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar12 < 2) {
      if (bVar12 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar13;
      }
    }
    else if (bVar12 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar13;
    }
  }
  else {
    if (bVar12 < 2) {
      if (bVar12 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar12 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar2 < 0) {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007be93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
      else if ((int)param_2 < 0) {
        *param_1 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        *param_1 = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1007be9bc | FUN_1007be9bc */

void FUN_1007be9bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c782e8;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100793c60();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c78458;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1007bea3c | FUN_1007bea3c */

void FUN_1007bea3c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  uVar4 = param_1 + (ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar1 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 8))(uVar4,lVar3);
  }
  lVar3 = uVar4 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar2 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  FUN_1007b8e2c(*puVar2,puVar2[1],*(undefined1 *)(puVar2 + 2),*(undefined1 *)((long)puVar2 + 0x11));
  return;
}



/* Address: 0x1007beac4 | FUN_1007beac4 */

undefined8 * FUN_1007beac4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar6 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar6,pvVar7,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar6,0,1,lVar9);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar1 = sVar11;
    if (iVar8 == 0) {
      sVar1 = sVar11 + 1;
    }
    _memcpy(pvVar6,pvVar7,sVar1);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  puVar4 = (undefined8 *)((long)pvVar7 + sVar11 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar4[1];
  uVar12 = *puVar4;
  puVar5 = (undefined8 *)((long)pvVar6 + sVar11 + 7 & 0xfffffffffffffff8);
  *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar4 + 2);
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  return param_1;
}



/* Address: 0x1007bebb8 | FUN_1007bebb8 */

undefined8 * FUN_1007bebb8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  lVar14 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar14 + -8);
  uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
  pvVar12 = (void *)(uVar8 + 8 + (long)param_1 & (uVar8 ^ 0xffffffffffffffff));
  pvVar13 = (void *)(uVar8 + 8 + (long)param_2 & (uVar8 ^ 0xffffffffffffffff));
  pcVar16 = *(code **)(lVar15 + 0x30);
  pvVar6 = pvVar12;
  (*pcVar16)(pvVar12,1,lVar14);
  pvVar7 = pvVar13;
  (*pcVar16)(pvVar13,1,lVar14);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar15 + 0x28))(pvVar12,pvVar13,lVar14);
      goto LAB_1007bec8c;
    }
    (**(code **)(lVar15 + 8))(pvVar12,lVar14);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar12,pvVar13,lVar14);
    (**(code **)(lVar15 + 0x38))(pvVar12,0,1,lVar14);
    goto LAB_1007bec8c;
  }
  sVar10 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy(pvVar12,pvVar13,sVar10);
LAB_1007bec8c:
  lVar14 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar14 = lVar14 + 1;
  }
  puVar11 = (undefined8 *)((long)pvVar12 + lVar14 + 7 & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)((long)pvVar13 + lVar14 + 7 & 0xfffffffffffffff8);
  uVar3 = *(undefined1 *)(puVar9 + 2);
  uVar4 = *(undefined1 *)((long)puVar9 + 0x11);
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  uVar17 = *puVar9;
  puVar11[1] = puVar9[1];
  *puVar11 = uVar17;
  uVar5 = *(undefined1 *)(puVar11 + 2);
  *(undefined1 *)(puVar11 + 2) = uVar3;
  uVar3 = *(undefined1 *)((long)puVar11 + 0x11);
  *(undefined1 *)((long)puVar11 + 0x11) = uVar4;
  FUN_1007b8e2c(uVar1,uVar2,uVar5,uVar3);
  return param_1;
}



/* Address: 0x1007bed10 | FUN_1007bed10 */

int FUN_1007bed10(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar10 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar10 != 0) {
    uVar5 = iVar10 - 1;
  }
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar1 = 7;
  if (iVar10 == 0) {
    lVar1 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar4 = *(byte *)(lVar9 + 0x50);
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (lVar1 + *(long *)(lVar9 + 0x40) +
             ((ulong)bVar4 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x12;
    uVar6 = (uint)lVar1;
    uVar8 = 2;
    if (uVar6 < 4) {
      uVar8 = ((param_2 - uVar2) + 0xffff >> 0x10) + 1;
    }
    iVar10 = 1;
    if (0xff < uVar8) {
      iVar10 = 2;
    }
    iVar3 = 0;
    if (1 < uVar8) {
      iVar3 = iVar10;
    }
    if (iVar3 != 0) {
      if (iVar3 == 2) {
        uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
        if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1007bedac:
          uVar5 = uVar8 - 1 << (ulong)((uVar6 & 3) << 3);
          if (uVar6 < 4) {
            uVar8 = (uint)(ushort)*param_1;
          }
          else {
            uVar8 = (uint)*param_1;
            uVar5 = 0;
          }
          return uVar2 + (uVar8 | uVar5) + 1;
        }
      }
      else {
        uVar8 = (uint)*(byte *)((long)param_1 + lVar1);
        if (uVar8 != 0) goto LAB_1007bedac;
      }
    }
  }
  if ((int)uVar5 < 0) {
    uVar5 = (int)param_1 + (uint)bVar4 + 8 & ~(uint)bVar4;
    (**(code **)(lVar9 + 0x30))();
    iVar10 = 0;
    if (uVar5 != 0) {
      iVar10 = uVar5 - 1;
    }
    return iVar10;
  }
  uVar7 = *param_1;
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (int)uVar7 + 1;
}



/* Address: 0x1007bee3c | FUN_1007bee3c */

void FUN_1007bee3c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  short sVar10;
  int iVar11;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar11 = *(int *)(lVar7 + 0x54);
  uVar3 = 0;
  if (iVar11 != 0) {
    uVar3 = iVar11 - 1;
  }
  uVar6 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar6 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar5 = *(size_t *)(lVar7 + 0x40);
  if (iVar11 == 0) {
    sVar5 = sVar5 + 1;
  }
  sVar1 = (sVar5 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x12;
  uVar4 = 2;
  if ((uint)sVar1 < 4) {
    uVar4 = ((param_3 - uVar6) + 0xffff >> 0x10) + 1;
  }
  iVar11 = 1;
  if (0xff < uVar4) {
    iVar11 = 2;
  }
  iVar2 = 0;
  if (1 < uVar4) {
    iVar2 = iVar11;
  }
  iVar11 = 0;
  if (uVar6 < param_3) {
    iVar11 = iVar2;
  }
  if (uVar6 < param_2) {
    iVar2 = param_2 + ~uVar6;
    _bzero(param_1,sVar1);
    sVar10 = 1;
    if ((uint)sVar1 < 4) {
      sVar10 = (short)((uint)iVar2 >> 0x10) + 1;
      *(short *)param_1 = (short)iVar2;
    }
    else {
      *(int *)param_1 = iVar2;
    }
    if (iVar11 != 0) {
      if (iVar11 == 2) {
        *(short *)((long)param_1 + sVar1) = sVar10;
      }
      else {
        *(char *)((long)param_1 + sVar1) = (char)sVar10;
      }
    }
  }
  else {
    if (iVar11 != 0) {
      if (iVar11 == 2) {
        *(undefined2 *)((long)param_1 + sVar1) = 0;
      }
      else {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    if (param_2 != 0) {
      if ((int)uVar3 < 0) {
        puVar9 = (uint *)((long)param_1 + uVar8 + 8 & ~uVar8);
        if (param_2 <= uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001007bf000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x38))(puVar9,param_2 + 1);
          return;
        }
        uVar4 = (uint)sVar5;
        uVar6 = 0xffffffff;
        if (uVar4 < 4) {
          uVar6 = ~(-1 << (ulong)((uVar4 & 3) << 3));
        }
        if (uVar4 != 0) {
          uVar6 = uVar6 & (uVar3 - param_2 ^ 0xffffffff);
          uVar3 = 4;
          if (uVar4 < 4) {
            uVar3 = uVar4;
          }
          _bzero(puVar9,sVar5);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)puVar9 = (char)uVar6;
            }
            else {
              *(short *)puVar9 = (short)uVar6;
            }
          }
          else if (uVar3 == 3) {
            *(short *)puVar9 = (short)uVar6;
            *(char *)((long)puVar9 + 2) = (char)(uVar6 >> 0x10);
          }
          else {
            *puVar9 = uVar6;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x1007bf02c | FUN_1007bf02c */

undefined1  [16] FUN_1007bf02c(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c782e8;
  uVar3 = *(ulong *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = &DAT_100c78300;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1007bf0ac | thunk_FUN_1007bf0b0 */

void thunk_FUN_1007bf0b0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar3 + -8);
  uVar4 = param_1 + (ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar1 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 8))(uVar4,lVar3);
  }
  lVar3 = uVar4 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar2 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  FUN_1007b8ba0(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  return;
}



/* Address: 0x1007bf0b0 | FUN_1007bf0b0 */

void FUN_1007bf0b0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar3 + -8);
  uVar4 = param_1 + (ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar1 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 8))(uVar4,lVar3);
  }
  lVar3 = uVar4 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar2 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  FUN_1007b8ba0(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  return;
}



/* Address: 0x1007bf138 | thunk_FUN_1007bf13c */

undefined8 * thunk_FUN_1007bf13c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar6 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar6,pvVar7,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar6,0,1,lVar9);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar1 = sVar11;
    if (iVar8 == 0) {
      sVar1 = sVar11 + 1;
    }
    _memcpy(pvVar6,pvVar7,sVar1);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  puVar4 = (undefined8 *)((long)pvVar7 + sVar11 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar4[1];
  uVar12 = *puVar4;
  uVar14 = *(undefined8 *)((long)puVar4 + 9);
  puVar5 = (undefined8 *)((long)pvVar6 + sVar11 + 7 & 0xfffffffffffffff8);
  *(undefined8 *)((long)puVar5 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
  *(undefined8 *)((long)puVar5 + 9) = uVar14;
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  return param_1;
}



/* Address: 0x1007bf13c | FUN_1007bf13c */

undefined8 * FUN_1007bf13c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar6 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar6,pvVar7,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar6,0,1,lVar9);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar1 = sVar11;
    if (iVar8 == 0) {
      sVar1 = sVar11 + 1;
    }
    _memcpy(pvVar6,pvVar7,sVar1);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  puVar4 = (undefined8 *)((long)pvVar7 + sVar11 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar4[1];
  uVar12 = *puVar4;
  uVar14 = *(undefined8 *)((long)puVar4 + 9);
  puVar5 = (undefined8 *)((long)pvVar6 + sVar11 + 7 & 0xfffffffffffffff8);
  *(undefined8 *)((long)puVar5 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
  *(undefined8 *)((long)puVar5 + 9) = uVar14;
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  return param_1;
}



/* Address: 0x1007bf230 | thunk_FUN_1007bf234 */

undefined8 * thunk_FUN_1007bf234(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  lVar15 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar15 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  pvVar13 = (void *)(uVar8 + 8 + (long)param_1 & (uVar8 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar8 + 8 + (long)param_2 & (uVar8 ^ 0xffffffffffffffff));
  pcVar17 = *(code **)(lVar16 + 0x30);
  pvVar5 = pvVar13;
  (*pcVar17)(pvVar13,1,lVar15);
  pvVar6 = pvVar14;
  (*pcVar17)(pvVar14,1,lVar15);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar16 + 0x28))(pvVar13,pvVar14,lVar15);
      goto LAB_1007bf308;
    }
    (**(code **)(lVar16 + 8))(pvVar13,lVar15);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar13,pvVar14,lVar15);
    (**(code **)(lVar16 + 0x38))(pvVar13,0,1,lVar15);
    goto LAB_1007bf308;
  }
  sVar10 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy(pvVar13,pvVar14,sVar10);
LAB_1007bf308:
  lVar15 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  puVar11 = (undefined8 *)((long)pvVar13 + lVar15 + 7 & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)((long)pvVar14 + lVar15 + 7 & 0xfffffffffffffff8);
  uVar12 = puVar9[2];
  uVar3 = *(undefined1 *)(puVar9 + 3);
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  uVar7 = puVar11[2];
  uVar18 = *puVar9;
  puVar11[1] = puVar9[1];
  *puVar11 = uVar18;
  puVar11[2] = uVar12;
  uVar4 = *(undefined1 *)(puVar11 + 3);
  *(undefined1 *)(puVar11 + 3) = uVar3;
  FUN_1007b8ba0(uVar1,uVar2,uVar7,uVar4);
  return param_1;
}



/* Address: 0x1007bf234 | FUN_1007bf234 */

undefined8 * FUN_1007bf234(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  lVar15 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar15 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  pvVar13 = (void *)(uVar8 + 8 + (long)param_1 & (uVar8 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar8 + 8 + (long)param_2 & (uVar8 ^ 0xffffffffffffffff));
  pcVar17 = *(code **)(lVar16 + 0x30);
  pvVar5 = pvVar13;
  (*pcVar17)(pvVar13,1,lVar15);
  pvVar6 = pvVar14;
  (*pcVar17)(pvVar14,1,lVar15);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar16 + 0x28))(pvVar13,pvVar14,lVar15);
      goto LAB_1007bf308;
    }
    (**(code **)(lVar16 + 8))(pvVar13,lVar15);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar13,pvVar14,lVar15);
    (**(code **)(lVar16 + 0x38))(pvVar13,0,1,lVar15);
    goto LAB_1007bf308;
  }
  sVar10 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy(pvVar13,pvVar14,sVar10);
LAB_1007bf308:
  lVar15 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  puVar11 = (undefined8 *)((long)pvVar13 + lVar15 + 7 & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)((long)pvVar14 + lVar15 + 7 & 0xfffffffffffffff8);
  uVar12 = puVar9[2];
  uVar3 = *(undefined1 *)(puVar9 + 3);
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  uVar7 = puVar11[2];
  uVar18 = *puVar9;
  puVar11[1] = puVar9[1];
  *puVar11 = uVar18;
  puVar11[2] = uVar12;
  uVar4 = *(undefined1 *)(puVar11 + 3);
  *(undefined1 *)(puVar11 + 3) = uVar3;
  FUN_1007b8ba0(uVar1,uVar2,uVar7,uVar4);
  return param_1;
}



/* Address: 0x1007bf38c | thunk_FUN_1007bf390 */

int thunk_FUN_1007bf390(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar5 = *(int *)(lVar11 + 0x54);
  uVar7 = 0;
  if (iVar5 != 0) {
    uVar7 = iVar5 - 1;
  }
  uVar2 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar1 = 7;
  if (iVar5 == 0) {
    lVar1 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar6 = *(byte *)(lVar11 + 0x50);
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (lVar1 + *(long *)(lVar11 + 0x40) +
             ((ulong)bVar6 + 8 & ((ulong)bVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
    uVar8 = (uint)lVar1;
    uVar10 = 2;
    uVar4 = uVar10;
    if (uVar8 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar10;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1007bf44c;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1007bf44c:
        uVar7 = uVar10 - 1 << (ulong)((uVar8 & 3) << 3);
        if (uVar8 < 4) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = (uint)*param_1;
          uVar7 = 0;
        }
        return uVar2 + (uVar10 | uVar7) + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
      if (uVar10 != 0) goto LAB_1007bf44c;
    }
  }
  if (-1 < (int)uVar7) {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    return (int)uVar9 + 1;
  }
  uVar7 = (int)param_1 + (uint)bVar6 + 8 & ~(uint)bVar6;
  (**(code **)(lVar11 + 0x30))();
  iVar5 = 0;
  if (uVar7 != 0) {
    iVar5 = uVar7 - 1;
  }
  return iVar5;
}



/* Address: 0x1007bf390 | FUN_1007bf390 */

int FUN_1007bf390(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar5 = *(int *)(lVar11 + 0x54);
  uVar7 = 0;
  if (iVar5 != 0) {
    uVar7 = iVar5 - 1;
  }
  uVar2 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar1 = 7;
  if (iVar5 == 0) {
    lVar1 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar6 = *(byte *)(lVar11 + 0x50);
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (lVar1 + *(long *)(lVar11 + 0x40) +
             ((ulong)bVar6 + 8 & ((ulong)bVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
    uVar8 = (uint)lVar1;
    uVar10 = 2;
    uVar4 = uVar10;
    if (uVar8 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar10;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1007bf44c;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1007bf44c:
        uVar7 = uVar10 - 1 << (ulong)((uVar8 & 3) << 3);
        if (uVar8 < 4) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = (uint)*param_1;
          uVar7 = 0;
        }
        return uVar2 + (uVar10 | uVar7) + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
      if (uVar10 != 0) goto LAB_1007bf44c;
    }
  }
  if (-1 < (int)uVar7) {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    return (int)uVar9 + 1;
  }
  uVar7 = (int)param_1 + (uint)bVar6 + 8 & ~(uint)bVar6;
  (**(code **)(lVar11 + 0x30))();
  iVar5 = 0;
  if (uVar7 != 0) {
    iVar5 = uVar7 - 1;
  }
  return iVar5;
}



/* Address: 0x1007bf4d4 | thunk_FUN_1007bf4d8 */

void thunk_FUN_1007bf4d8(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  iVar4 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = iVar4 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar4 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (sVar6 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x19;
  uVar5 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar7) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    _bzero(param_1,sVar1);
    iVar4 = 1;
    if ((uint)sVar1 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *(uint *)param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar4;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar2 < 0) {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007bf6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x1007bf4d8 | FUN_1007bf4d8 */

void FUN_1007bf4d8(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  iVar4 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = iVar4 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar4 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (sVar6 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x19;
  uVar5 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar7) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    _bzero(param_1,sVar1);
    iVar4 = 1;
    if ((uint)sVar1 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *(uint *)param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar4;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar2 < 0) {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007bf6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x1007bf6f4 | FUN_1007bf6f4 */

void FUN_1007bf6f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1007ba16c(param_1,param_2,FUN_1007bf700);
  return;
}



/* Address: 0x1007bf700 | FUN_1007bf700 */

void FUN_1007bf700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,code *UNRECOVERED_JUMPTABLE_00,
                  code *param_9)

{
  if ((param_7 >> 7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007bf740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3,param_4,param_5);
    return;
  }
  (*param_9)();
                    /* WARNING: Could not recover jumptable at 0x0001007bf780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_4,param_5,param_6,param_7 & 0x7f);
  return;
}



/* Address: 0x1007bf784 | FUN_1007bf784 */

void FUN_1007bf784(void)

{
  FUN_1007ba22c();
  return;
}



/* Address: 0x1007bf790 | FUN_1007bf790 */

void FUN_1007bf790(void)

{
  FUN_1007ba2c4();
  return;
}



/* Address: 0x1007bf79c | FUN_1007bf79c */

void FUN_1007bf79c(void)

{
  FUN_1007ba38c();
  return;
}



/* Address: 0x1007bf7a8 | FUN_1007bf7a8 */

int FUN_1007bf7a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 0xc) & 0x7e | (uint)(*(byte *)(param_1 + 0xc) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007bf7f8 | FUN_1007bf7f8 */

void FUN_1007bf7f8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(byte *)(param_1 + 6) = (((byte)(-param_2 >> 1) & 0x3f) + (char)param_2 * -0x40) * '\x02';
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x1007bf864 | FUN_1007bf864 */

void FUN_1007bf864(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007bf870 | FUN_1007bf870 */

void FUN_1007bf870(void)

{
  UnsafeContinuation UVar1;
  undefined8 uVar2;
  
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  UVar1 = Swift::UnsafeContinuation::typeMetadataAccessor();
  uVar2 = 0xff;
  FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
  _swift_getTupleTypeMetadata2(0,UVar1.unknown,uVar2,0,0);
  return;
}



/* Address: 0x1007bf8f4 | FUN_1007bf8f4 */

void FUN_1007bf8f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c78570;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1007b8aac(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c78588;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}



/* Address: 0x1007bf974 | FUN_1007bf974 */

uint FUN_1007bf974(int *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar1 = (lVar4 + ((ulong)*(byte *)(lVar3 + 0x50) + 0x10 &
                   ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)) + 0x27 &
          0xfffffffffffffff8) + 8;
  if (uVar1 < 0x91) {
    uVar1 = 0x90;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + uVar1);
  if (2 < *(byte *)((long)param_1 + uVar1) && (uVar1 & 0xffffffff) != 0) {
    uVar2 = *param_1 + 3;
  }
  return uVar2;
}



/* Address: 0x1007bf9d8 | FUN_1007bf9d8 */

void FUN_1007bf9d8(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar1 = (lVar4 + ((ulong)*(byte *)(lVar3 + 0x50) + 0x10 &
                   ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)) + 0x27 &
          0xfffffffffffffff8) + 8;
  if (uVar1 < 0x91) {
    uVar1 = 0x90;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
    return;
  }
  uVar5 = param_2;
  if ((uVar1 & 0xfffffff8) != 0) {
    uVar5 = 3;
  }
  *(char *)((long)param_1 + uVar1) = (char)uVar5;
  if ((int)uVar1 != 0) {
    iVar2 = 0;
    if ((uVar1 & 0xfffffff8) != 0) {
      iVar2 = param_2 - 3;
    }
    _bzero(param_1,uVar1);
    *param_1 = iVar2;
  }
  return;
}



/* Address: 0x1007bfa70 | FUN_1007bfa70 */

void FUN_1007bfa70(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8bf4);
  return;
}



/* Address: 0x1007bfa7c | FUN_1007bfa7c */

void FUN_1007bfa7c(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8aac);
  return;
}



/* Address: 0x1007bfa88 | FUN_1007bfa88 */

void FUN_1007bfa88(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007bfad4);
  return;
}



/* Address: 0x1007bfa94 | FUN_1007bfa94 */

undefined * FUN_1007bfa94(undefined8 *param_1,code *param_2)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    (*param_2)(0,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007bfaa0 | FUN_1007bfaa0 */

void FUN_1007bfaa0(undefined8 *param_1,code *param_2)

{
  (*param_2)(0,*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007bfad4 | FUN_1007bfad4 */

void FUN_1007bfad4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007bfae0 | FUN_1007bfae0 */

void FUN_1007bfae0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_1007b8ba0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48));
  _swift_release(*(undefined8 *)(param_1 + 0x50));
  _swift_release(*(undefined8 *)(param_1 + 0x60));
  _swift_release(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Address: 0x1007bfb30 | FUN_1007bfb30 */

void FUN_1007bfb30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return;
}



/* Address: 0x1007bfb5c | FUN_1007bfb5c */

undefined8 * FUN_1007bfb5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 != 0) {
      uVar3 = param_2[4];
      param_1[3] = lVar5;
      param_1[4] = uVar3;
      goto LAB_1007bfbd0;
    }
  }
  else {
    if (lVar5 != 0) {
      uVar7 = param_2[4];
      uVar3 = param_1[4];
      param_1[3] = lVar5;
      param_1[4] = uVar7;
      _swift_release(uVar3);
      goto LAB_1007bfbd0;
    }
    _swift_release(param_1[4]);
  }
  lVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar5;
LAB_1007bfbd0:
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar6 = param_2[8];
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar3 = param_1[6];
  uVar7 = param_1[7];
  uVar4 = param_1[8];
  uVar8 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar8;
  param_1[8] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = uVar1;
  FUN_1007b8ba0(uVar3,uVar7,uVar4,uVar2);
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_release(uVar3);
  param_1[0xb] = param_2[0xb];
  _swift_release(param_1[0xc]);
  uVar3 = param_1[0xd];
  uVar7 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar7;
  _swift_release(uVar3);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  param_1[0x11] = param_2[0x11];
  return param_1;
}



/* Address: 0x1007bfc64 | FUN_1007bfc64 */

int FUN_1007bfc64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x14);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1007bfcac | FUN_1007bfcac */

void FUN_1007bfcac(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x12) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    if (param_2 != 0) {
      param_1[10] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1007bfd10 | FUN_1007bfd10 */

undefined1  [16] FUN_1007bfd10(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_50 = &DAT_100c78618;
  puStack_48 = &DAT_100c78618;
  local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  uVar3 = *(ulong *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_30 = &DAT_100c78300;
    local_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,6,&local_50,param_1 + 0x28);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1007bfdb0 | FUN_1007bfdb0 */

void FUN_1007bfdb0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)(param_1 + 9U & 0xfffffffffffffff8);
  _swift_release(*puVar3);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = (long)puVar3 + (ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar1 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,lVar2);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 8))(uVar4,lVar2);
  }
  lVar2 = uVar4 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  puVar3 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  FUN_1007b8ba0(*puVar3,puVar3[1],puVar3[2],*(undefined1 *)(puVar3 + 3));
  return;
}



/* Address: 0x1007bfe4c | FUN_1007bfe4c */

undefined1 * FUN_1007bfe4c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(param_2 + 9) & 0xfffffffffffffff8);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar6 = (void *)(uVar3 + 8 + (long)((ulong)(param_1 + 9) & 0xfffffffffffffff8) &
                   (uVar3 ^ 0xffffffffffffffff));
  pvVar7 = (void *)(uVar3 + 8 + (long)((ulong)(param_2 + 9) & 0xfffffffffffffff8) &
                   (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar7;
  (**(code **)(lVar10 + 0x30))(pvVar7,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar6,pvVar7,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar6,0,1,lVar9);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar1 = sVar11;
    if (iVar8 == 0) {
      sVar1 = sVar11 + 1;
    }
    _memcpy(pvVar6,pvVar7,sVar1);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  puVar4 = (undefined8 *)((long)pvVar6 + sVar11 + 7 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)pvVar7 + sVar11 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar5[1];
  uVar12 = *puVar5;
  uVar14 = *(undefined8 *)((long)puVar5 + 9);
  *(undefined8 *)((long)puVar4 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
  *(undefined8 *)((long)puVar4 + 9) = uVar14;
  puVar4[1] = uVar13;
  *puVar4 = uVar12;
  *(undefined8 *)((long)pvVar6 + sVar11 + 0x27 & 0xfffffffffffffff8) =
       *(undefined8 *)((long)pvVar7 + sVar11 + 0x27 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007bff78 | FUN_1007bff78 */

undefined1 * FUN_1007bff78(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar13 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
  uVar4 = *puVar13;
  *puVar13 = *(undefined8 *)((ulong)(param_2 + 9) & 0xfffffffffffffff8);
  _swift_release(uVar4);
  lVar15 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar15 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  pvVar12 = (void *)(uVar8 + 8 + (long)puVar13 & (uVar8 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar8 + 8 + (long)((ulong)(param_2 + 9) & 0xfffffffffffffff8) &
                    (uVar8 ^ 0xffffffffffffffff));
  pcVar17 = *(code **)(lVar16 + 0x30);
  pvVar5 = pvVar12;
  (*pcVar17)(pvVar12,1,lVar15);
  pvVar6 = pvVar14;
  (*pcVar17)(pvVar14,1,lVar15);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar16 + 0x28))(pvVar12,pvVar14,lVar15);
      goto LAB_1007c0078;
    }
    (**(code **)(lVar16 + 8))(pvVar12,lVar15);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar12,pvVar14,lVar15);
    (**(code **)(lVar16 + 0x38))(pvVar12,0,1,lVar15);
    goto LAB_1007c0078;
  }
  sVar9 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy(pvVar12,pvVar14,sVar9);
LAB_1007c0078:
  lVar15 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  puVar13 = (undefined8 *)((long)pvVar12 + lVar15 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)pvVar14 + lVar15 + 7 & 0xfffffffffffffff8);
  uVar11 = puVar10[2];
  uVar2 = *(undefined1 *)(puVar10 + 3);
  uVar4 = *puVar13;
  uVar1 = puVar13[1];
  uVar7 = puVar13[2];
  uVar18 = *puVar10;
  puVar13[1] = puVar10[1];
  *puVar13 = uVar18;
  puVar13[2] = uVar11;
  uVar3 = *(undefined1 *)(puVar13 + 3);
  *(undefined1 *)(puVar13 + 3) = uVar2;
  FUN_1007b8ba0(uVar4,uVar1,uVar7,uVar3);
  *(undefined8 *)((long)pvVar12 + lVar15 + 0x27 & 0xfffffffffffffff8) =
       *(undefined8 *)((long)pvVar14 + lVar15 + 0x27 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007c0114 | FUN_1007c0114 */

int FUN_1007c0114(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar6 = *(int *)(lVar12 + 0x54);
  uVar8 = 0;
  if (iVar6 != 0) {
    uVar8 = iVar6 - 1;
  }
  uVar3 = uVar8;
  if (uVar8 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar2 = 0x27;
  if (iVar6 == 0) {
    lVar2 = 0x28;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar7 = *(byte *)(lVar12 + 0x50);
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar11 = (lVar2 + *(long *)(lVar12 + 0x40) +
              ((ulong)bVar7 + 0x10 & ((ulong)bVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
    uVar1 = uVar11 & 0xfffffff8;
    uVar9 = (uint)uVar1;
    uVar13 = 2;
    uVar5 = uVar13;
    if (uVar1 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar13 = 4;
    }
    if (uVar5 < 0x100) {
      uVar13 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar13;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar13 = (uint)*(byte *)((long)param_1 + uVar11), *(byte *)((long)param_1 + uVar11) != 0))
      goto LAB_1007c01c8;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)*(ushort *)((long)param_1 + uVar11);
      if (*(ushort *)((long)param_1 + uVar11) != 0) {
LAB_1007c01c8:
        uVar13 = uVar13 - 1;
        if (uVar1 != 0) {
          uVar13 = 0;
          uVar9 = *param_1;
        }
        return uVar3 + (uVar9 | uVar13) + 1;
      }
    }
    else {
      uVar13 = *(uint *)((long)param_1 + uVar11);
      if (uVar13 != 0) goto LAB_1007c01c8;
    }
  }
  puVar10 = (ulong *)((long)param_1 + 9U & 0xfffffffffffffff8);
  if (-1 < (int)uVar8) {
    uVar11 = *puVar10;
    if (0xfffffffe < uVar11) {
      uVar11 = 0xffffffff;
    }
    return (int)uVar11 + 1;
  }
  uVar8 = (int)puVar10 + (uint)bVar7 + 8 & ~(uint)bVar7;
  (**(code **)(lVar12 + 0x30))();
  iVar6 = 0;
  if (uVar8 != 0) {
    iVar6 = uVar8 - 1;
  }
  return iVar6;
}



/* Address: 0x1007c0248 | FUN_1007c0248 */

void FUN_1007c0248(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  iVar4 = *(int *)(lVar9 + 0x54);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = iVar4 - 1;
  }
  uVar8 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar8 = 0x7fffffff;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  sVar6 = *(size_t *)(lVar9 + 0x40);
  if (iVar4 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (sVar6 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)) + 0x27 & 0xfffffffffffffff8) + 8;
  uVar5 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar11;
    }
  }
  iVar4 = param_2 - uVar8;
  if (param_2 < uVar8 || iVar4 == 0) {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      puVar7 = (ulong *)((long)param_1 + 9U & 0xfffffffffffffff8);
      if ((int)uVar2 < 0) {
        puVar12 = (uint *)((long)puVar7 + uVar10 + 8 & ~uVar10);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007c0424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x38))(puVar12,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar8 = 0xffffffff;
        if (uVar5 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar8 = uVar8 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar12,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar12 = (char)uVar8;
            }
            else {
              *(short *)puVar12 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar12 = (short)uVar8;
            *(char *)((long)puVar12 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar12 = uVar8;
          }
        }
      }
      else {
        if ((int)param_2 < 0) {
          param_2 = param_2 & 0x7fffffff;
        }
        else {
          param_2 = param_2 - 1;
        }
        *puVar7 = (ulong)param_2;
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar4 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar8;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar4;
    }
  }
  return;
}



/* Address: 0x1007c0450 | FUN_1007c0450 */

void FUN_1007c0450(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007c0464 | FUN_1007c0464 */

undefined8 * FUN_1007c0464(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1007b8e0c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1007c04ac | FUN_1007c04ac */

undefined8 * FUN_1007c04ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1007b8e0c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1007b8df8(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1007c0500 | FUN_1007c0500 */

undefined8 * FUN_1007c0500(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1007b8df8(uVar3,uVar4,uVar2);
  return param_1;
}


