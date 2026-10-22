/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007a1434 | FUN_1007a1434 */

long * FUN_1007a1434(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  size_t sVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar16 = *(long *)(lVar18 + -8);
  uVar9 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar17 = *(long *)(lVar16 + 0x40);
  lVar15 = *(long *)(lVar19 + -8);
  uVar13 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  sVar12 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar1 = sVar12 + (lVar17 + uVar13 + (uVar6 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar13 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar10 = *(uint *)(lVar16 + 0x50) | *(uint *)(lVar8 + 0x50) | *(uint *)(lVar15 + 0x50);
  if ((uVar10 & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar6 = (ulong)(uVar10 & 0xf8 | 7);
    lVar17 = *(long *)param_2;
    *param_1 = lVar17;
    _swift_retain();
    return (long *)(lVar17 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar3;
  if (2 < bVar3) {
    uVar14 = (uint)uVar1;
    uVar11 = 4;
    if (uVar14 < 4) {
      uVar11 = uVar14;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007a1594;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    uVar10 = uVar11 | bVar3 - 3 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007a1594:
  if (uVar10 == 2) {
    lVar17 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    _swift_retain();
    _swift_errorRetain(lVar17);
    param_1[1] = lVar17;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    lVar18 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar18;
    uVar2 = *(undefined8 *)(param_2 + 2);
    lVar17 = *(long *)(param_2 + 4);
    param_1[2] = lVar17;
    lVar19 = *(long *)(param_2 + 6);
    param_1[4] = *(long *)(param_2 + 8);
    param_1[3] = lVar19;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain(lVar18);
    _swift_retain(uVar2);
    _swift_bridgeObjectRetain(lVar17);
  }
  else {
    if (uVar10 != 0) {
      plVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar5;
    }
    uVar7 = ~uVar13;
    (**(code **)(lVar8 + 0x10))(param_1);
    uVar4 = uVar6 + (long)param_1 & ~uVar9;
    uVar6 = (ulong)(uVar6 + (long)param_2) & ~uVar9;
    (**(code **)(lVar16 + 0x10))(uVar4,uVar6,lVar18);
    lVar17 = lVar17 + uVar13;
    uVar4 = uVar4 + lVar17;
    uVar6 = uVar6 + lVar17;
    uVar9 = uVar6 & uVar7;
    (**(code **)(lVar15 + 0x30))(uVar9,1,lVar19);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(uVar4 & uVar7,uVar6 & uVar7,lVar19);
      (**(code **)(lVar15 + 0x38))(uVar4 & uVar7,0,1,lVar19);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
    else {
      _memcpy((void *)(uVar4 & uVar7),(void *)(uVar6 & uVar7),sVar12);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  return param_1;
}



/* Address: 0x1007a16f0 | thunk_FUN_1007a16f4 */

void thunk_FUN_1007a16f4(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar14 = *(long *)(lVar2 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar11 = *(long *)(lVar6 + 0x40) + uVar7;
  lVar13 = *(long *)(lVar14 + 0x40);
  lVar12 = *(long *)(lVar3 + -8);
  uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar10 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar1 = lVar10 + (lVar13 + uVar15 + (uVar11 & (uVar7 ^ 0xffffffffffffffff)) &
                   (uVar15 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar8 = (uint)bVar4;
  if (2 < bVar4) {
    uVar5 = (uint)uVar1;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007a17e4;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    uVar8 = uVar9 | bVar4 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1007a17e4:
  if (uVar8 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
    return;
  }
  if (uVar8 != 1) {
    if (uVar8 == 0) {
      (**(code **)(lVar6 + 8))(param_1);
      uVar11 = (ulong)(uVar11 + (long)param_1) & ~uVar7;
      (**(code **)(lVar14 + 8))(uVar11,lVar2);
      uVar11 = uVar11 + lVar13 + uVar15;
      uVar7 = uVar11 & ~uVar15;
      (**(code **)(lVar12 + 0x30))(uVar7,1,lVar3);
      if ((int)uVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007a18dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 8))(uVar11 & ~uVar15,lVar3);
        return;
      }
    }
    return;
  }
  _swift_release(*(undefined8 *)param_1);
  _swift_release(*(undefined8 *)(param_1 + 2));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  return;
}



/* Address: 0x1007a16f4 | FUN_1007a16f4 */

void FUN_1007a16f4(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar14 = *(long *)(lVar2 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar11 = *(long *)(lVar6 + 0x40) + uVar7;
  lVar13 = *(long *)(lVar14 + 0x40);
  lVar12 = *(long *)(lVar3 + -8);
  uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar10 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar1 = lVar10 + (lVar13 + uVar15 + (uVar11 & (uVar7 ^ 0xffffffffffffffff)) &
                   (uVar15 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar8 = (uint)bVar4;
  if (2 < bVar4) {
    uVar5 = (uint)uVar1;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007a17e4;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    uVar8 = uVar9 | bVar4 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1007a17e4:
  if (uVar8 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
    return;
  }
  if (uVar8 != 1) {
    if (uVar8 == 0) {
      (**(code **)(lVar6 + 8))(param_1);
      uVar11 = (ulong)(uVar11 + (long)param_1) & ~uVar7;
      (**(code **)(lVar14 + 8))(uVar11,lVar2);
      uVar11 = uVar11 + lVar13 + uVar15;
      uVar7 = uVar11 & ~uVar15;
      (**(code **)(lVar12 + 0x30))(uVar7,1,lVar3);
      if ((int)uVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007a18dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 8))(uVar11 & ~uVar15,lVar3);
        return;
      }
    }
    return;
  }
  _swift_release(*(undefined8 *)param_1);
  _swift_release(*(undefined8 *)(param_1 + 2));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  return;
}



/* Address: 0x1007a18e0 | FUN_1007a18e0 */

undefined8 * FUN_1007a18e0(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar20 = *(long *)(lVar2 + -8);
  uVar10 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar15 = *(long *)(lVar9 + 0x40) + uVar10;
  lVar19 = *(long *)(lVar20 + 0x40);
  lVar18 = *(long *)(lVar4 + -8);
  uVar14 = (ulong)*(byte *)(lVar18 + 0x50);
  sVar13 = *(size_t *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar1 = sVar13 + (lVar19 + uVar14 + (uVar15 & (uVar10 ^ 0xffffffffffffffff)) &
                   (uVar14 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar11 = (uint)bVar6;
  if (2 < bVar6) {
    uVar17 = (uint)uVar1;
    uVar12 = 4;
    if (uVar17 < 4) {
      uVar12 = uVar17;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_1007a19d4;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    uVar11 = uVar12 | bVar6 - 3 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 3;
  }
LAB_1007a19d4:
  if (uVar11 == 2) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    _swift_retain();
    _swift_errorRetain(uVar3);
    param_1[1] = uVar3;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar11 == 1) {
    uVar21 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar21;
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar5;
    uVar22 = *(undefined8 *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = uVar22;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain(uVar21);
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(uVar5);
  }
  else {
    if (uVar11 != 0) {
      puVar7 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar7;
    }
    uVar8 = ~uVar14;
    (**(code **)(lVar9 + 0x10))(param_1);
    uVar16 = uVar15 + (long)param_1 & ~uVar10;
    uVar15 = (ulong)(uVar15 + (long)param_2) & ~uVar10;
    (**(code **)(lVar20 + 0x10))(uVar16,uVar15,lVar2);
    lVar19 = lVar19 + uVar14;
    uVar16 = uVar16 + lVar19;
    uVar15 = uVar15 + lVar19;
    uVar10 = uVar15 & uVar8;
    (**(code **)(lVar18 + 0x30))(uVar10,1,lVar4);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar18 + 0x10))(uVar16 & uVar8,uVar15 & uVar8,lVar4);
      (**(code **)(lVar18 + 0x38))(uVar16 & uVar8,0,1,lVar4);
    }
    else {
      _memcpy((void *)(uVar16 & uVar8),(void *)(uVar15 & uVar8),sVar13);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1007a1b48 | FUN_1007a1b48 */

uint * FUN_1007a1b48(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar7 = *(long *)(lVar19 + 0x40) + uVar9;
  lVar12 = *(long *)(lVar16 + 0x40);
  lVar11 = *(long *)(param_3 + 0x20);
  lVar22 = *(long *)(lVar11 + -8);
  uVar18 = (ulong)*(byte *)(lVar22 + 0x50);
  sVar13 = *(size_t *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar1 = sVar13 + (lVar12 + uVar18 + (uVar7 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar18 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar21 = (uint)uVar1;
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar2 = 4;
    if (uVar21 < 4) {
      uVar2 = uVar21;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1007a1c70;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    if (uVar21 < 4) {
      uVar10 = (uVar10 | bVar5 - 3 << (ulong)(uVar21 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_1007a1c70:
  uVar9 = ~uVar9;
  uVar14 = ~uVar18;
  if (uVar10 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else if (uVar10 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  }
  else if (uVar10 == 0) {
    (**(code **)(lVar19 + 8))(param_1,lVar3);
    uVar20 = (ulong)(uVar7 + (long)param_1) & uVar9;
    (**(code **)(lVar16 + 8))(uVar20,lVar4);
    uVar20 = uVar20 + lVar12 + uVar18;
    uVar6 = uVar20 & uVar14;
    (**(code **)(lVar22 + 0x30))(uVar6,1,lVar11);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar22 + 8))(uVar20 & uVar14,lVar11);
    }
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar2 = 4;
    if (uVar21 < 4) {
      uVar2 = uVar21;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x0001007a1d94;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (uVar21 < 4) {
      uVar10 = (uVar10 | bVar5 - 3 << (ulong)(uVar21 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
joined_r0x0001007a1d94:
  if (uVar10 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 2);
    _swift_retain();
    _swift_errorRetain(uVar15);
    *(undefined8 *)(param_1 + 2) = uVar15;
    *(byte *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar15;
    uVar17 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar17;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(byte *)((long)param_1 + uVar1) = 1;
    _swift_retain();
    _swift_retain(uVar15);
    _swift_bridgeObjectRetain(uVar17);
  }
  else {
    if (uVar10 != 0) {
      puVar8 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar8;
    }
    (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar3);
    uVar20 = (ulong)(uVar7 + (long)param_1) & uVar9;
    uVar9 = (ulong)(uVar7 + (long)param_2) & uVar9;
    (**(code **)(lVar16 + 0x10))(uVar20,uVar9,lVar4);
    uVar20 = uVar20 + lVar12 + uVar18;
    uVar9 = uVar9 + lVar12 + uVar18;
    uVar7 = uVar9 & uVar14;
    (**(code **)(lVar22 + 0x30))(uVar7,1,lVar11);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar22 + 0x10))(uVar20 & uVar14,uVar9 & uVar14,lVar11);
      (**(code **)(lVar22 + 0x38))(uVar20 & uVar14,0,1,lVar11);
    }
    else {
      _memcpy((void *)(uVar20 & uVar14),(void *)(uVar9 & uVar14),sVar13);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1007a1f34 | FUN_1007a1f34 */

void FUN_1007a1f34(undefined8 *param_1,uint *param_2,long param_3)

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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
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
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
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
      if (uVar9 == 0) goto LAB_1007a2024;
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
LAB_1007a2024:
  if (uVar8 == 2) {
    uVar19 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar19;
    uVar5 = 2;
  }
  else {
    if (uVar8 != 1) {
      if (uVar8 == 0) {
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
        *(undefined1 *)((long)param_1 + uVar1) = 0;
        return;
      }
      _memcpy(param_1,param_2,uVar1 + 1);
      return;
    }
    uVar19 = *(undefined8 *)param_2;
    uVar21 = *(undefined8 *)(param_2 + 6);
    uVar20 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar19;
    param_1[3] = uVar21;
    param_1[2] = uVar20;
    param_1[4] = *(undefined8 *)(param_2 + 8);
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar5;
  return;
}



/* Address: 0x1007a2160 | FUN_1007a2160 */

uint * FUN_1007a2160(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar3 + -8);
  uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar5 = *(long *)(lVar17 + 0x40) + uVar8;
  lVar12 = *(long *)(lVar15 + 0x40);
  lVar11 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar11 + -8);
  uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
  sVar13 = *(size_t *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar1 = sVar13 + (lVar12 + uVar16 + (uVar5 & (uVar8 ^ 0xffffffffffffffff)) &
                   (uVar16 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar19 = (uint)uVar1;
  bVar7 = *(byte *)((long)param_1 + uVar1);
  uVar10 = (uint)bVar7;
  if (2 < bVar7) {
    uVar9 = 4;
    if (uVar19 < 4) {
      uVar9 = uVar19;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007a2288;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    if (uVar19 < 4) {
      uVar10 = (uVar10 | bVar7 - 3 << (ulong)(uVar19 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_1007a2288:
  uVar8 = ~uVar8;
  uVar14 = ~uVar16;
  if (uVar10 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else if (uVar10 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  }
  else if (uVar10 == 0) {
    (**(code **)(lVar17 + 8))(param_1,lVar2);
    uVar18 = (ulong)(uVar5 + (long)param_1) & uVar8;
    (**(code **)(lVar15 + 8))(uVar18,lVar3);
    uVar18 = uVar18 + lVar12 + uVar16;
    uVar4 = uVar18 & uVar14;
    (**(code **)(lVar20 + 0x30))(uVar4,1,lVar11);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar20 + 8))(uVar18 & uVar14,lVar11);
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar7;
  if (2 < bVar7) {
    uVar9 = 4;
    if (uVar19 < 4) {
      uVar9 = uVar19;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007a23b0;
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
    uVar10 = uVar9 | bVar7 - 3 << (ulong)(uVar19 << 3 & 0x1f);
    if (3 < uVar19) {
      uVar10 = uVar9;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007a23b0:
  if (uVar10 == 2) {
    uVar21 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar21;
    bVar7 = 2;
  }
  else {
    if (uVar10 != 1) {
      if (uVar10 != 0) {
        puVar6 = _memcpy(param_1,param_2,uVar1 + 1);
        return puVar6;
      }
      (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar2);
      uVar18 = (ulong)(uVar5 + (long)param_1) & uVar8;
      uVar8 = (ulong)(uVar5 + (long)param_2) & uVar8;
      (**(code **)(lVar15 + 0x20))(uVar18,uVar8,lVar3);
      uVar18 = uVar18 + lVar12 + uVar16;
      uVar8 = uVar8 + lVar12 + uVar16;
      uVar5 = uVar8 & uVar14;
      (**(code **)(lVar20 + 0x30))(uVar5,1,lVar11);
      if ((int)uVar5 != 0) {
        _memcpy((void *)(uVar18 & uVar14),(void *)(uVar8 & uVar14),sVar13);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      (**(code **)(lVar20 + 0x20))(uVar18 & uVar14,uVar8 & uVar14,lVar11);
      (**(code **)(lVar20 + 0x38))(uVar18 & uVar14,0,1,lVar11);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    uVar21 = *(undefined8 *)param_2;
    uVar23 = *(undefined8 *)(param_2 + 6);
    uVar22 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar21;
    *(undefined8 *)(param_1 + 6) = uVar23;
    *(undefined8 *)(param_1 + 4) = uVar22;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    bVar7 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar7;
  return param_1;
}



/* Address: 0x1007a24f0 | FUN_1007a24f0 */

int FUN_1007a24f0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 0x29) {
    uVar7 = 0x28;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_1007a25f4;
  uVar10 = uVar7 + 1;
  uVar6 = (uint)uVar10;
  uVar2 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_1007a25f4;
      goto LAB_1007a2580;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar10);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar10);
    }
  }
  else {
LAB_1007a2580:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar10);
  }
  if (uVar11 != 0) {
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = uVar11 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar2 = 4;
      if (uVar6 < 4) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar10 = (ulong)(byte)*param_1;
        }
        else {
          uVar10 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar10 = (ulong)(uint3)*param_1;
      }
      else {
        uVar10 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar10 | uVar1) + 1;
  }
LAB_1007a25f4:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar7);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar7) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x1007a265c | FUN_1007a265c */

void FUN_1007a265c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 0x29) {
    uVar7 = 0x28;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar4 = 0xfc;
  }
  sVar2 = uVar7 + 1;
  uVar11 = (uint)sVar2;
  if (uVar4 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) - uVar4 >> (ulong)(uVar11 << 3 & 0x1f)
            ) + 1;
    bVar10 = 2;
    if (0xffff < uVar1) {
      bVar10 = 4;
    }
    if (uVar1 < 0x100) {
      bVar10 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar11 < 4) {
      bVar5 = bVar10;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar4 < param_2) {
    param_2 = param_2 + ~uVar4;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar3 = (undefined2)uVar4;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar3;
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
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar12;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar12;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1007a2860 | FUN_1007a2860 */

uint FUN_1007a2860(uint *param_1,long param_2)

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
  if (uVar6 < 0x29) {
    uVar6 = 0x28;
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



/* Address: 0x1007a2934 | FUN_1007a2934 */

void FUN_1007a2934(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar4 = (*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar4 &
          (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar2 + 0x40) + (ulong)*(byte *)(lVar3 + 0x50) &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  if (param_2 < 3) {
    lVar2 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    uVar4 = lVar2 + uVar4;
    if (uVar4 < 0x29) {
      uVar4 = 0x28;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    uVar4 = lVar2 + uVar4;
    if (uVar4 < 0x29) {
      uVar4 = 0x28;
    }
    param_2 = param_2 - 3;
    uVar1 = (uint)uVar4;
    if (uVar1 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar1 << 3 & 0x1f)) + '\x03';
      if (uVar1 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar1 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar1) {
      uVar1 = 4;
    }
    _bzero(param_1,uVar4);
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



/* Address: 0x1007a2a6c | FUN_1007a2a6c */

void FUN_1007a2a6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  int iVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,OVar3.value);
  lVar4 = 0;
  _swift_getTupleTypeMetadata3(0,param_5,param_6,lVar6,"base1 base2 base3 ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  iVar2 = *(int *)(lVar4 + 0x40);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + iVar1,param_3,param_6);
  lVar4 = *(long *)(lVar6 + -8);
  (**(code **)(lVar4 + 0x10))(param_1 + iVar2,param_4,lVar6);
  uStack_68 = param_10;
  uVar5 = 0;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1007a135c(0,&local_90);
  _swift_storeEnumTagMultiPayload(param_1,uVar5,0);
  uVar5 = param_4;
  (**(code **)(*(long *)(param_7 + -8) + 0x30))(param_4,1,param_7);
  (**(code **)(lVar4 + 8))(param_4,lVar6);
  if ((int)uVar5 == 1) {
    uStack_68 = param_10;
    lVar6 = 0;
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    FUN_1007a1350(0,&local_90);
    uVar5 = 2;
  }
  else {
    uStack_68 = param_10;
    lVar6 = 0;
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    FUN_1007a1350(0,&local_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x44)) = uVar5;
  return;
}



/* Address: 0x1007a2c04 | FUN_1007a2c04 */

undefined1  [16] FUN_1007a2c04(long param_1)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_90 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_90[3] = *(undefined8 *)(param_1 + 0x18);
  local_90[2] = *(long *)(param_1 + 0x10);
  local_90[1] = *(undefined8 *)(param_1 + 0x28);
  local_90[0] = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = 0;
  local_90[4] = local_90[2];
  local_90[5] = local_90[3];
  local_90[6] = local_90[0];
  local_90[7] = local_90[1];
  FUN_1007a135c(0,local_90 + 4);
  lVar11 = *(long *)(lVar5 + -8);
  lVar1 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)local_90 + lVar1);
  (**(code **)(lVar11 + 0x10))(puVar9);
  puVar6 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      uVar7 = *puVar9;
      uVar8 = *(undefined8 *)((long)local_90 + lVar1 + 0x10);
      lVar5 = *(long *)((long)local_90 + lVar1 + 0x20);
      _swift_release(*(undefined8 *)((long)local_90 + lVar1 + 8));
      if (lVar5 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a2dc0);
        (*pcVar2)();
      }
      (**(code **)(lVar11 + 8))();
      _swift_storeEnumTagMultiPayload();
      goto LAB_1007a2da4;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar1 = local_90[2];
    lVar5 = CONCAT71(extraout_var,OVar3.value);
    lVar11 = 0;
    _swift_getTupleTypeMetadata3(0,local_90[2],lVar10,lVar5,"base1 base2 base3 ",0);
    iVar4 = *(int *)(lVar11 + 0x30);
    (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar9 + (long)*(int *)(lVar11 + 0x40),lVar5);
    (**(code **)(*(long *)(lVar10 + -8) + 8))((long)puVar9 + (long)iVar4,lVar10);
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar9,lVar1);
  }
  else {
    if (iVar4 != 2) {
      uVar8 = 0;
      uVar7 = 0;
      if (iVar4 != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a2ca4);
        (*pcVar2)();
      }
      goto LAB_1007a2da4;
    }
    pcVar2 = *(code **)(lVar11 + 8);
    (*pcVar2)(puVar9,lVar5);
    (*pcVar2)();
    _swift_storeEnumTagMultiPayload();
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_1007a2da4:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar7;
  return auVar12;
}



/* Address: 0x1007a2dc0 | FUN_1007a2dc0 */

void FUN_1007a2dc0(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long local_c0 [5];
  long local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar7;
  
  local_c0[3] = *(undefined8 *)(param_2 + 0x18);
  local_c0[2] = *(long *)(param_2 + 0x10);
  local_c0[1] = *(undefined8 *)(param_2 + 0x28);
  local_c0[0] = *(long *)(param_2 + 0x20);
  uStack_68 = *(undefined8 *)(param_2 + 0x38);
  local_70 = *(undefined8 *)(param_2 + 0x30);
  lVar5 = 0;
  local_c0[4] = param_1;
  local_90 = local_c0[2];
  uStack_88 = local_c0[3];
  lStack_80 = local_c0[0];
  uStack_78 = local_c0[1];
  FUN_1007a135c(0,&local_90);
  lVar15 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar1 = -uVar10;
  puVar12 = (undefined8 *)((long)local_c0 + lVar1);
  lVar11 = (long)puVar12 - uVar10;
  (**(code **)(lVar15 + 0x10))(lVar11);
  lVar6 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,lVar5);
  iVar4 = (int)lVar6;
  if (iVar4 == 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x28);
    lVar13 = *(long *)(param_2 + 0x18);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar6 = local_c0[2];
    lVar7 = CONCAT71(extraout_var,OVar3.value);
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,local_c0[2],lVar13,lVar7,"base1 base2 base3 ",0);
    local_c0[2] = (long)*(int *)(lVar8 + 0x30);
    iVar4 = *(int *)(lVar8 + 0x40);
    uVar9 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar14,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar8 = local_c0[4];
    _swift_retain(local_c0[4]);
    thunk_FUN_100683d64();
    *puVar12 = lVar8;
    *(undefined8 *)((long)local_c0 + lVar1 + 8) = uVar9;
    *(undefined8 *)((long)local_c0 + lVar1 + 0x18) = 0;
    *(undefined8 *)((long)local_c0 + lVar1 + 0x20) = 0;
    *(undefined **)((long)local_c0 + lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_storeEnumTagMultiPayload(puVar12,lVar5,1);
    (**(code **)(lVar15 + 0x28))(unaff_x20,puVar12,lVar5);
    (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar11 + iVar4,lVar7);
    (**(code **)(*(long *)(lVar13 + -8) + 8))(lVar11 + local_c0[2],lVar13);
    (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar11,lVar6);
    return;
  }
  if (iVar4 - 1U < 2) {
    (**(code **)(lVar15 + 8))(lVar11,lVar5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a2f9c);
    (*pcVar2)();
  }
  if (iVar4 == 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a2fa8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a2fac);
  (*pcVar2)();
}



/* Address: 0x1007a2fac | FUN_1007a2fac */

undefined1  [16] FUN_1007a2fac(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  ulong local_90 [8];
  
  local_90[3] = *(undefined8 *)(param_2 + 0x18);
  local_90[2] = *(undefined8 *)(param_2 + 0x10);
  local_90[5] = *(undefined8 *)(param_2 + 0x28);
  local_90[4] = *(undefined8 *)(param_2 + 0x20);
  local_90[7] = *(undefined8 *)(param_2 + 0x38);
  local_90[6] = *(undefined8 *)(param_2 + 0x30);
  lVar4 = 0;
  FUN_1007a135c(0,local_90 + 2);
  lVar14 = *(long *)(lVar4 + -8);
  lVar1 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (ulong *)((long)local_90 + lVar1);
  (**(code **)(lVar14 + 0x10))(puVar12);
  puVar5 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    if (iVar3 != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a31b4);
      (*pcVar2)();
    }
    uVar10 = *(ulong *)((long)local_90 + lVar1 + 0x10);
    if (*(long *)((long)local_90 + lVar1 + 0x20) == 0) {
      local_90[1] = *(ulong *)((long)local_90 + lVar1 + 8);
      local_90[0] = *puVar12;
      uVar13 = *(ulong *)((long)local_90 + lVar1 + 0x18);
      pcVar2 = *(code **)(lVar14 + 8);
      (*pcVar2)();
      _swift_storeEnumTagMultiPayload();
      uVar9 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar10;
      if ((uVar9 & 1) == 0) {
        uVar8 = 0;
        FUN_1007b784c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar10 = *(ulong *)(uVar8 + 0x10);
      uVar9 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar10) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1007b784c(uVar9,uVar10 + 1,1,uVar8);
      }
      *(ulong *)(uVar9 + 0x10) = uVar10 + 1;
      *(undefined8 *)(uVar9 + uVar10 * 8 + 0x20) = param_1;
      (*pcVar2)();
      unaff_x20[1] = local_90[1];
      *unaff_x20 = local_90[0];
      unaff_x20[2] = uVar9;
      unaff_x20[3] = uVar13;
      unaff_x20[4] = 0;
      _swift_storeEnumTagMultiPayload();
      param_1 = 0;
      uVar10 = 0x8000000000000000;
    }
    else {
      uVar11 = *(undefined8 *)((long)local_90 + lVar1 + 8);
      _swift_release(*puVar12);
      _swift_release(uVar11);
      _swift_bridgeObjectRelease(uVar10);
      uVar10 = 0;
    }
  }
  else {
    if (iVar3 == 2) {
      (**(code **)(lVar14 + 8))(puVar12,lVar4);
    }
    else if (iVar3 != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a3044);
      (*pcVar2)();
    }
    CVar6 = Swift::CancellationError::typeMetadataAccessor();
    CVar7 = CVar6;
    FUN_10076915c();
    _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
    Swift::CancellationError::init();
    uVar10 = (ulong)CVar6.unknown | 0x4000000000000000;
  }
  auVar15._8_8_ = uVar10;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Address: 0x1007a31b4 | FUN_1007a31b4 */

void FUN_1007a31b4(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  UnsafeContinuation UVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long alStack_c0 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  alStack_c0[5] = *(undefined8 *)(param_3 + 0x18);
  alStack_c0[4] = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 0x28);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  uStack_68 = *(undefined8 *)(param_3 + 0x38);
  uStack_70 = *(undefined8 *)(param_3 + 0x30);
  lVar7 = 0;
  alStack_c0[6] = alStack_c0[4];
  alStack_c0[7] = alStack_c0[5];
  FUN_1007a135c(0,alStack_c0 + 6);
  lVar13 = *(long *)(lVar7 + -8);
  lVar3 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_c0 + lVar3);
  (**(code **)(lVar13 + 0x10))(puVar12);
  puVar8 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar7);
  iVar6 = (int)puVar8;
  if (iVar6 < 2) {
    if (iVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007a3564);
      (*pcVar4)();
    }
    alStack_c0[3] = *(undefined8 *)((long)alStack_c0 + lVar3 + 8);
    alStack_c0[2] = *puVar12;
    alStack_c0[6] = *(undefined8 *)((long)alStack_c0 + lVar3 + 8);
    uVar2 = *(undefined8 *)((long)alStack_c0 + lVar3 + 0x10);
    uVar1 = *(undefined8 *)((long)alStack_c0 + lVar3 + 0x18);
    lVar3 = *(long *)((long)alStack_c0 + lVar3 + 0x20);
    if (lVar3 != 0) {
      lVar7 = 0xff;
      alStack_c0[1] = uVar2;
      _swift_getAssociatedTypeWitness
                (0xff,uVar11,alStack_c0[4],
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar11 = 0;
      FUN_1006883a0(0,lVar7);
      _swift_getWitnessTable(0x100c6d780,uVar11);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007a3560);
        (*pcVar4)();
      }
      (**(code **)(lVar13 + 8))();
      unaff_x20[1] = alStack_c0[3];
      *unaff_x20 = alStack_c0[2];
      unaff_x20[2] = alStack_c0[1];
      unaff_x20[3] = uVar1;
      unaff_x20[4] = 0;
      _swift_storeEnumTagMultiPayload();
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar13 = 0;
      _swift_getTupleTypeMetadata2(0,UVar10.unknown,lVar7,"downstreamContinuation element ",0);
      iVar6 = *(int *)(lVar13 + 0x30);
      *param_1 = lVar3;
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))((long)param_1 + (long)iVar6,param_2,lVar7);
      pcVar4 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
      uVar11 = 0;
      goto LAB_1007a344c;
    }
    pcVar4 = *(code **)(lVar13 + 8);
    (*pcVar4)();
    _swift_storeEnumTagMultiPayload();
    uVar9 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar11,alStack_c0[4],
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar11 = 0;
    FUN_1006883a0(0,uVar9);
    FUN_100679d80(param_2,uVar11);
    (*pcVar4)();
    *unaff_x20 = alStack_c0[2];
    unaff_x20[1] = alStack_c0[6];
    unaff_x20[2] = uVar2;
    unaff_x20[3] = uVar1;
    unaff_x20[4] = 0;
    _swift_storeEnumTagMultiPayload();
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
  }
  else {
    if (iVar6 == 2) {
      (**(code **)(lVar13 + 8))(puVar12,lVar7);
    }
    else if (iVar6 != 3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007a325c);
      (*pcVar4)();
    }
    uVar9 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar11,alStack_c0[4],
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
  }
  lVar13 = 0;
  _swift_getTupleTypeMetadata2(0,UVar10.unknown,uVar9,"downstreamContinuation element ",0);
  pcVar4 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  uVar11 = 1;
LAB_1007a344c:
  (*pcVar4)(param_1,uVar11,1,lVar13);
  return;
}



/* Address: 0x1007a3564 | FUN_1007a3564 */

ulong FUN_1007a3564(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *unaff_x20;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_c0 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  local_c0[5] = *(undefined8 *)(param_1 + 0x18);
  local_c0[4] = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = 0;
  local_c0[6] = local_c0[4];
  local_c0[7] = local_c0[5];
  FUN_1007a135c(0,local_c0 + 6);
  lVar10 = *(long *)(lVar5 + -8);
  lVar1 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)((long)local_c0 + lVar1);
  (**(code **)(lVar10 + 0x10))(puVar9);
  puVar6 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a37d0);
      (*pcVar2)();
    }
    uVar12 = *(ulong *)((long)local_c0 + lVar1 + 0x10);
    lVar5 = *(long *)((long)local_c0 + lVar1 + 0x18);
    uVar11 = *(ulong *)((long)local_c0 + lVar1 + 0x20);
    local_c0[3] = *(ulong *)((long)local_c0 + lVar1 + 8);
    local_c0[2] = *puVar9;
    if (uVar11 == 0) {
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a37cc);
        (*pcVar2)();
      }
      (**(code **)(lVar10 + 8))();
      unaff_x20[1] = local_c0[3];
      *unaff_x20 = local_c0[2];
      unaff_x20[2] = uVar12;
      unaff_x20[3] = lVar5 + 1U;
      unaff_x20[4] = 0;
      _swift_storeEnumTagMultiPayload();
      uVar11 = local_c0[2];
      if (lVar5 + 1U == *(ulong *)((long)unaff_x20 + (long)*(int *)(param_1 + 0x44))) {
        _swift_retain(local_c0[2]);
        _swift_bridgeObjectRetain(uVar12);
        return uVar11;
      }
    }
    else {
      local_c0[1] = *(ulong *)((long)local_c0 + lVar1 + 0x10);
      uVar12 = *(ulong *)((long)local_c0 + lVar1 + 8);
      uVar7 = 0xff;
      local_c0[0] = uVar12;
      local_c0[6] = uVar12;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,local_c0[4],
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar8 = 0;
      FUN_1006883a0(0,uVar7);
      _swift_getWitnessTable(0x100c6d780,uVar8);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a37c4);
        (*pcVar2)();
      }
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a37c8);
        (*pcVar2)();
      }
      if (lVar5 + 1U == *(ulong *)((long)unaff_x20 + (long)*(int *)(param_1 + 0x44))) {
        _swift_release(uVar12);
        (**(code **)(lVar10 + 8))();
        _swift_storeEnumTagMultiPayload();
        return uVar11 | 0x4000000000000000;
      }
      (**(code **)(lVar10 + 8))();
      *unaff_x20 = local_c0[2];
      unaff_x20[2] = local_c0[1];
      unaff_x20[1] = local_c0[0];
      unaff_x20[3] = lVar5 + 1U;
      unaff_x20[4] = uVar11;
      _swift_storeEnumTagMultiPayload();
    }
  }
  else if (iVar4 == 2) {
    (**(code **)(lVar10 + 8))(puVar9,lVar5);
  }
  else if (iVar4 != 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a3608);
    (*pcVar2)();
  }
  return 0x8000000000000000;
}



/* Address: 0x1007a37d0 | FUN_1007a37d0 */

long FUN_1007a37d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_a0 [8];
  
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  local_a0[1] = *(undefined8 *)(param_2 + 0x18);
  local_a0[0] = *(long *)(param_2 + 0x10);
  local_a0[5] = *(undefined8 *)(param_2 + 0x28);
  local_a0[4] = *(undefined8 *)(param_2 + 0x20);
  local_a0[7] = *(undefined8 *)(param_2 + 0x38);
  local_a0[6] = *(undefined8 *)(param_2 + 0x30);
  lVar5 = 0;
  local_a0[2] = local_a0[0];
  local_a0[3] = local_a0[1];
  FUN_1007a135c(0,local_a0 + 2);
  lVar10 = *(long *)(lVar5 + -8);
  lVar11 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = (long *)((long)local_a0 + lVar11);
  (**(code **)(lVar10 + 0x10))(plVar9);
  plVar6 = plVar9;
  _swift_getEnumCaseMultiPayload(plVar9,lVar5);
  iVar4 = (int)plVar6;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a39b8);
      (*pcVar2)();
    }
    lVar5 = *plVar9;
    uVar1 = *(undefined8 *)((long)local_a0 + lVar11 + 8);
    lVar11 = *(long *)((long)local_a0 + lVar11 + 0x20);
    if (lVar11 == 0) {
      (**(code **)(lVar10 + 8))();
      *unaff_x20 = uVar1;
      unaff_x20[1] = param_1;
      _swift_storeEnumTagMultiPayload();
      _swift_errorRetain(param_1);
    }
    else {
      uVar7 = 0xff;
      local_a0[2] = uVar1;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,local_a0[0],
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar8 = 0;
      FUN_1006883a0(0,uVar7);
      _swift_getWitnessTable(0x100c6d780,uVar8);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      _swift_release(uVar1);
      if (!bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a39b4);
        (*pcVar2)();
      }
      (**(code **)(lVar10 + 8))();
      _swift_storeEnumTagMultiPayload();
      _swift_errorRetain(param_1);
      lVar5 = lVar11;
    }
  }
  else {
    if (iVar4 == 2) {
      (**(code **)(lVar10 + 8))(plVar9,lVar5);
    }
    else if (iVar4 != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a3874);
      (*pcVar2)();
    }
    lVar5 = 0;
  }
  return lVar5;
}



/* Address: 0x1007a39b8 | FUN_1007a39b8 */

ulong FUN_1007a39b8(long param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  Optional OVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  undefined7 extraout_var;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong local_b0 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lVar8;
  
  local_b0[3] = *(undefined8 *)(param_1 + 0x18);
  local_b0[2] = *(long *)(param_1 + 0x10);
  local_b0[1] = *(undefined8 *)(param_1 + 0x28);
  local_b0[0] = *(ulong *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  lVar6 = 0;
  local_b0[4] = local_b0[2];
  local_b0[5] = local_b0[3];
  local_b0[6] = local_b0[0];
  local_b0[7] = local_b0[1];
  FUN_1007a135c(0,local_b0 + 4);
  lVar12 = *(long *)(lVar6 + -8);
  lVar8 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)((long)local_b0 + lVar8);
  (**(code **)(lVar12 + 0x10))(puVar9);
  puVar7 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar6);
  iVar5 = (int)puVar7;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      uVar1 = *puVar9;
      uVar10 = *(ulong *)((long)local_b0 + lVar8 + 0x20);
      _swift_release(*(undefined8 *)((long)local_b0 + lVar8 + 8));
      (**(code **)(lVar12 + 8))();
      _swift_storeEnumTagMultiPayload();
      if (uVar10 != 0) {
        return uVar10;
      }
      return uVar1 | 0x4000000000000000;
    }
    lVar11 = *(long *)(param_1 + 0x18);
    OVar4 = Swift::Optional::typeMetadataAccessor();
    uVar1 = local_b0[2];
    lVar8 = CONCAT71(extraout_var,OVar4.value);
    lVar6 = 0;
    _swift_getTupleTypeMetadata3(0,local_b0[2],lVar11,lVar8,"base1 base2 base3 ",0);
    iVar5 = *(int *)(lVar6 + 0x30);
    iVar2 = *(int *)(lVar6 + 0x40);
    (**(code **)(lVar12 + 8))();
    _swift_storeEnumTagMultiPayload();
    (**(code **)(*(long *)(lVar8 + -8) + 8))((long)puVar9 + (long)iVar2,lVar8);
    (**(code **)(*(long *)(lVar11 + -8) + 8))((long)puVar9 + (long)iVar5,lVar11);
    (**(code **)(*(long *)(uVar1 + -8) + 8))(puVar9,uVar1);
  }
  else {
    if (iVar5 == 2) {
      pcVar3 = *(code **)(lVar12 + 8);
      (*pcVar3)(puVar9,lVar6);
      (*pcVar3)();
    }
    else {
      if (iVar5 != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007a3bb8);
        (*pcVar3)();
      }
      (**(code **)(lVar12 + 8))();
    }
    _swift_storeEnumTagMultiPayload();
  }
  return 0x8000000000000000;
}



/* Address: 0x1007a3bb8 | FUN_1007a3bb8 */

void FUN_1007a3bb8(undefined8 *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  Optional OVar3;
  Result RVar4;
  int iVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined8 *puVar8;
  undefined7 extraout_var_00;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_110 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  lVar18 = *(long *)(param_2 + 0x10);
  lVar6 = 0xff;
  local_a8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_110[1] = CONCAT71(extraout_var,OVar3.value);
  local_110[0] = *(long *)(local_110[1] + -8);
  uVar10 = *(long *)(local_110[0] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)local_110 - uVar10;
  lVar17 = lVar16 - uVar10;
  lVar19 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar17 - uVar10;
  lVar11 = lVar14 - uVar10;
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  local_110[5] = *(undefined8 *)(param_2 + 0x20);
  local_110[4] = *(long *)(param_2 + 0x18);
  local_d0 = *(undefined8 *)(param_2 + 0x38);
  local_110[3] = *(undefined8 *)(param_2 + 0x38);
  local_110[2] = *(undefined8 *)(param_2 + 0x30);
  lVar7 = 0;
  local_110[7] = local_110[2];
  local_c0 = local_110[4];
  lStack_b8 = lVar18;
  local_b0 = uVar15;
  local_98 = lVar18;
  local_90 = local_110[4];
  uStack_88 = local_c8;
  local_80 = uVar15;
  local_78 = local_110[2];
  uStack_70 = local_d0;
  FUN_1007a135c(0,&local_98);
  lVar18 = *(long *)(lVar7 + -8);
  puVar12 = (undefined8 *)(lVar11 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar18 + 0x10))(puVar12);
  puVar8 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar7);
  iVar5 = (int)puVar8;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar7 = lStack_b8;
      lVar6 = local_c0;
      lVar11 = CONCAT71(extraout_var_00,OVar3.value);
      lVar14 = 0;
      _swift_getTupleTypeMetadata3(0,lStack_b8,local_c0,lVar11,"base1 base2 base3 ",0);
      puVar8 = local_a8;
      iVar5 = *(int *)(lVar14 + 0x30);
      iVar1 = *(int *)(lVar14 + 0x40);
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))(local_a8,puVar12,lVar7);
      lVar14 = 0;
      _swift_getTupleTypeMetadata3(0,lVar7,lVar6,lVar11,0,0);
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                ((long)puVar8 + (long)*(int *)(lVar14 + 0x30),(long)puVar12 + (long)iVar5,lVar6);
      (**(code **)(*(long *)(lVar11 + -8) + 0x20))
                ((long)puVar8 + (long)*(int *)(lVar14 + 0x40),(long)puVar12 + (long)iVar1,lVar11);
      local_98 = lVar7;
      uStack_88 = local_110[5];
      local_90 = local_110[4];
      local_80 = local_b0;
      uStack_70 = local_110[3];
      local_78 = local_110[2];
      uVar15 = 0;
      FUN_1007a4368(0,&local_98);
      uVar9 = 0;
      goto LAB_1007a4178;
    }
    if (puVar12[4] != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a41a4);
      (*pcVar2)();
    }
    local_110[2] = puVar12[2];
    local_110[4] = puVar12[3];
    uVar15 = *puVar12;
    local_a0 = puVar12[1];
    pcVar2 = *(code **)(lVar18 + 8);
    (*pcVar2)();
    _swift_storeEnumTagMultiPayload();
    FUN_1006883a0(0,lVar6);
    FUN_100681318(lVar17);
    lVar7 = lVar17;
    (**(code **)(lVar19 + 0x30))(lVar17,1,lVar6);
    if ((int)lVar7 == 1) {
      (**(code **)(local_110[0] + 8))(lVar17,local_110[1]);
      (*pcVar2)();
      *unaff_x20 = uVar15;
      unaff_x20[1] = local_a0;
      unaff_x20[2] = local_110[2];
      unaff_x20[3] = local_110[4];
      unaff_x20[4] = 0;
      _swift_storeEnumTagMultiPayload();
      local_98 = lStack_b8;
      local_90 = local_c0;
      uStack_88 = local_c8;
      local_80 = local_b0;
      local_78 = local_110[7];
      uStack_70 = local_d0;
      uVar15 = 0;
      FUN_1007a4368(0,&local_98);
      uVar9 = 4;
      puVar8 = local_a8;
      goto LAB_1007a4178;
    }
    pcVar13 = *(code **)(lVar19 + 0x20);
    (*pcVar13)(lVar11,lVar17,lVar6);
    (*pcVar2)();
    *unaff_x20 = uVar15;
    unaff_x20[1] = local_a0;
    unaff_x20[2] = local_110[2];
    unaff_x20[3] = local_110[4];
    unaff_x20[4] = 0;
    _swift_storeEnumTagMultiPayload();
    puVar8 = local_a8;
    (*pcVar13)(local_a8,lVar11,lVar6);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar4 = Swift::Result::typeMetadataAccessor();
    _swift_storeEnumTagMultiPayload(puVar8,RVar4.value,0);
    local_98 = lStack_b8;
    local_90 = local_c0;
    uStack_88 = local_c8;
    local_80 = local_b0;
    local_78 = local_110[7];
    uStack_70 = local_d0;
    uVar15 = 0;
    FUN_1007a4368(0,&local_98);
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007a41a0);
        (*pcVar2)();
      }
      local_98 = lStack_b8;
      local_90 = local_c0;
      uStack_88 = local_c8;
      local_80 = local_b0;
      local_78 = local_110[7];
      uStack_70 = local_d0;
      uVar15 = 0;
      FUN_1007a4368(0,&local_98);
      uVar9 = 3;
      puVar8 = local_a8;
      goto LAB_1007a4178;
    }
    local_a0 = *puVar12;
    uVar15 = puVar12[1];
    pcVar2 = *(code **)(lVar18 + 8);
    (*pcVar2)();
    _swift_storeEnumTagMultiPayload();
    FUN_1006883a0(0,lVar6);
    FUN_100681318(lVar16);
    lVar7 = lVar16;
    (**(code **)(lVar19 + 0x30))(lVar16,1,lVar6);
    if ((int)lVar7 == 1) {
      _swift_release(local_a0);
      (**(code **)(local_110[0] + 8))(lVar16,local_110[1]);
      (*pcVar2)();
      _swift_storeEnumTagMultiPayload();
      puVar8 = local_a8;
      *local_a8 = uVar15;
      local_98 = lStack_b8;
      local_90 = local_c0;
      uStack_88 = local_c8;
      local_80 = local_b0;
      local_78 = local_110[7];
      uStack_70 = local_d0;
      uVar15 = 0;
      FUN_1007a4368(0,&local_98);
      uVar9 = 2;
      goto LAB_1007a4178;
    }
    pcVar13 = *(code **)(lVar19 + 0x20);
    (*pcVar13)(lVar14,lVar16,lVar6);
    (*pcVar2)();
    *unaff_x20 = local_a0;
    unaff_x20[1] = uVar15;
    _swift_storeEnumTagMultiPayload();
    puVar8 = local_a8;
    (*pcVar13)(local_a8,lVar14,lVar6);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar4 = Swift::Result::typeMetadataAccessor();
    _swift_storeEnumTagMultiPayload(puVar8,RVar4.value,0);
    local_98 = lStack_b8;
    local_90 = local_c0;
    uStack_88 = local_c8;
    local_80 = local_b0;
    local_78 = local_110[7];
    uStack_70 = local_d0;
    uVar15 = 0;
    FUN_1007a4368(0,&local_98);
  }
  uVar9 = 1;
LAB_1007a4178:
  _swift_storeEnumTagMultiPayload(puVar8,uVar15,uVar9);
  return;
}



/* Address: 0x1007a41a4 | FUN_1007a41a4 */

undefined8 FUN_1007a41a4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_90 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  long lVar6;
  
  local_90[1] = *(undefined8 *)(param_2 + 0x18);
  local_90[0] = *(long *)(param_2 + 0x10);
  local_90[3] = *(undefined8 *)(param_2 + 0x28);
  local_90[2] = *(undefined8 *)(param_2 + 0x20);
  uStack_48 = *(undefined8 *)(param_2 + 0x38);
  local_50 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = 0;
  local_90[4] = local_90[0];
  local_90[5] = local_90[1];
  local_90[6] = local_90[2];
  local_90[7] = local_90[3];
  FUN_1007a135c(0,local_90 + 4);
  lVar11 = *(long *)(lVar4 + -8);
  lVar6 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)local_90 + lVar6);
  (**(code **)(lVar11 + 0x10))(puVar7);
  puVar5 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 == 1) {
    local_90[3] = *(undefined8 *)((long)local_90 + lVar6 + 8);
    local_90[2] = *puVar7;
    uVar10 = *(undefined8 *)((long)local_90 + lVar6 + 0x10);
    if (*(long *)((long)local_90 + lVar6 + 0x20) == 0) {
      uVar8 = *(undefined8 *)((long)local_90 + lVar6 + 0x18);
      (**(code **)(lVar11 + 8))();
      unaff_x20[1] = local_90[3];
      *unaff_x20 = local_90[2];
      unaff_x20[2] = PTR___swiftEmptyArrayStorage_100eae0d8;
      unaff_x20[3] = uVar8;
      unaff_x20[4] = param_1;
      _swift_storeEnumTagMultiPayload();
      return uVar10;
    }
    uVar8 = *(undefined8 *)((long)local_90 + lVar6 + 8);
    _swift_release(*puVar7);
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(uVar10);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007a4368);
    (*pcVar1)();
  }
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      lVar9 = *(long *)(param_2 + 0x18);
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar4 = local_90[0];
      lVar6 = CONCAT71(extraout_var,OVar2.value);
      lVar11 = 0;
      _swift_getTupleTypeMetadata3(0,local_90[0],lVar9,lVar6,"base1 base2 base3 ",0);
      iVar3 = *(int *)(lVar11 + 0x30);
      (**(code **)(*(long *)(lVar6 + -8) + 8))((long)puVar7 + (long)*(int *)(lVar11 + 0x40),lVar6);
      (**(code **)(*(long *)(lVar9 + -8) + 8))((long)puVar7 + (long)iVar3,lVar9);
      pcVar1 = *(code **)(*(long *)(lVar4 + -8) + 8);
    }
    else {
      pcVar1 = *(code **)(lVar11 + 8);
    }
    (*pcVar1)(puVar7,lVar4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007a4340);
    (*pcVar1)();
  }
  if (iVar3 == 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007a432c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007a4344);
  (*pcVar1)();
}



/* Address: 0x1007a4368 | FUN_1007a4368 */

void FUN_1007a4368(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc03a0);
  return;
}



/* Address: 0x1007a4374 | FUN_1007a4374 */

undefined8 * FUN_1007a4374(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1007a43b0(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x1007a43b0 | FUN_1007a43b0 */

void FUN_1007a43b0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 1) {
    _swift_errorRetain(param_2 & 0x3fffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x1007a43c8 | FUN_1007a43c8 */

void FUN_1007a43c8(undefined8 *param_1)

{
  FUN_1007a43d4(*param_1,param_1[1]);
  return;
}



/* Address: 0x1007a43d4 | FUN_1007a43d4 */

void FUN_1007a43d4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 1) {
    _swift_errorRelease(param_2 & 0x3fffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x1007a43ec | FUN_1007a43ec */

undefined8 * FUN_1007a43ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1007a43b0(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_1007a43d4(uVar2,uVar4);
  return param_1;
}



/* Address: 0x1007a4430 | FUN_1007a4430 */

undefined8 * FUN_1007a4430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_1007a43d4(uVar1,uVar2);
  return param_1;
}



/* Address: 0x1007a4468 | FUN_1007a4468 */

int FUN_1007a4468(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffe;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          (uVar1 >> 0x11 & 0x1800 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 8 |
          (byte)((ulong)*(undefined8 *)param_1 >> 0x38) & 0xf0 | (uint)*(undefined8 *)param_1 & 0xf)
          << 2) ^ 0x7fff;
  if (0x7ffc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007a44e0 | FUN_1007a44e0 */

void FUN_1007a44e0(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x7ffe) {
    if (0x7ffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 2 & 0x1fff | (-param_2 & 0x7fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x38) & 0xf00000000000000f;
      param_1[1] = ((ulong)(uVar1 >> 8) | uVar2 << 0x31) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7ffe);
    param_1[1] = 0;
    if (0x7ffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1007a454c | FUN_1007a454c */

uint FUN_1007a454c(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = (int)(*param_1 >> 4) + 2;
  if (-1 < (long)param_1[1]) {
    uVar1 = (uint)(param_1[1] >> 0x3e);
  }
  return uVar1;
}



/* Address: 0x1007a4568 | FUN_1007a4568 */

void FUN_1007a4568(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2) << 4;
    param_1[1] = 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff0;
  param_1[1] = param_1[1] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1007a4598 | FUN_1007a4598 */

void FUN_1007a4598(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc01f0);
  return;
}



/* Address: 0x1007a45a4 | FUN_1007a45a4 */

void FUN_1007a45a4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x1007a45b0 | FUN_1007a45b0 */

void FUN_1007a45b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x3e);
  if ((uVar1 != 0) && (param_1 = param_2, param_2 = param_3, uVar1 != 1)) {
    return;
  }
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1007a45fc | FUN_1007a45fc */

void FUN_1007a45fc(undefined8 *param_1)

{
  FUN_1007a460c(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007a460c | FUN_1007a460c */

void FUN_1007a460c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x3e);
  if ((uVar1 != 0) && (param_1 = param_2, param_2 = param_3, uVar1 != 1)) {
    return;
  }
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1007a4658 | FUN_1007a4658 */

void FUN_1007a4658(void)

{
  FUN_10076ef9c();
  return;
}



/* Address: 0x1007a466c | FUN_1007a466c */

void FUN_1007a466c(void)

{
  FUN_10076f008();
  return;
}



/* Address: 0x1007a4678 | FUN_1007a4678 */

void FUN_1007a4678(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc025c);
  return;
}



/* Address: 0x1007a4684 | FUN_1007a4684 */

void FUN_1007a4684(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [32];
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c78008,*(long *)(lVar1 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
  }
  return;
}



/* Address: 0x1007a470c | FUN_1007a470c */

ulong * FUN_1007a470c(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  uVar2 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  if (((uint)uVar6 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && uVar2 < 0x19) {
    uVar7 = ~uVar6;
    if (*(int *)(lVar5 + 0x54) < 0) {
      uVar4 = (long)param_2 + uVar6 + 8 & uVar7;
      (**(code **)(lVar5 + 0x30))(uVar4,*(int *)(lVar5 + 0x54),lVar1);
      if ((int)uVar4 != 0) goto LAB_1007a47c8;
    }
    else {
      uVar4 = *param_2;
      if (0xfffffffe < uVar4) {
        uVar4 = 0xffffffff;
      }
      if ((int)uVar4 != -1) {
LAB_1007a47c8:
        puVar3 = _memcpy(param_1,param_2,uVar2);
        return puVar3;
      }
    }
    *param_1 = *param_2;
    (**(code **)(lVar5 + 0x10))
              ((long)param_1 + uVar6 + 8 & uVar7,(long)param_2 + uVar6 + 8 & uVar7,lVar1);
  }
  else {
    uVar2 = *param_2;
    *param_1 = uVar2;
    param_1 = (ulong *)(uVar2 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007a4850 | FUN_1007a4850 */

void FUN_1007a4850(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  if (*(int *)(lVar3 + 0x54) < 0) {
    uVar2 = (long)param_1 + uVar4 + 8 & ~uVar4;
    (**(code **)(lVar3 + 0x30))(uVar2,*(int *)(lVar3 + 0x54),lVar1);
    if ((int)uVar2 == 0) goto LAB_1007a48ec;
  }
  else {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 == -1) {
LAB_1007a48ec:
                    /* WARNING: Could not recover jumptable at 0x0001007a4910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))((long)param_1 + uVar4 + 8 & ~uVar4,lVar1);
      return;
    }
  }
  return;
}



/* Address: 0x1007a4914 | FUN_1007a4914 */

ulong * FUN_1007a4914(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = ~uVar6;
  lVar7 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) < 0) {
    uVar3 = (long)param_2 + uVar6 + 8 & uVar5;
    (**(code **)(lVar4 + 0x30))(uVar3,*(int *)(lVar4 + 0x54),lVar1);
    if ((int)uVar3 == 0) goto LAB_1007a49d0;
  }
  else {
    uVar3 = *param_2;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((int)uVar3 == -1) {
LAB_1007a49d0:
      *param_1 = *param_2;
      (**(code **)(lVar4 + 0x10))
                ((long)param_1 + uVar6 + 8 & uVar5,(long)param_2 + uVar6 + 8 & uVar5,lVar1);
      return param_1;
    }
  }
  puVar2 = _memcpy(param_1,param_2,(uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + lVar7);
  return puVar2;
}



/* Address: 0x1007a4a18 | FUN_1007a4a18 */

ulong * FUN_1007a4a18(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar2 + -8);
  iVar1 = *(int *)(lVar8 + 0x54);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = ~uVar9;
  lVar10 = *(long *)(lVar8 + 0x40);
  if (iVar1 < 0) {
    pcVar6 = *(code **)(lVar8 + 0x30);
    uVar5 = (long)param_1 + uVar9 + 8 & uVar7;
    (*pcVar6)(uVar5,iVar1,lVar2);
    uVar3 = (long)param_2 + uVar9 + 8 & uVar7;
    (*pcVar6)(uVar3,iVar1,lVar2);
    iVar1 = (int)uVar3;
    if ((int)uVar5 != 0) goto LAB_1007a4b14;
  }
  else {
    uVar5 = *param_2;
    if (0xfffffffe < uVar5) {
      uVar5 = 0xffffffff;
    }
    iVar1 = (int)uVar5 + 1;
    if (*param_1 < 0xffffffff) {
LAB_1007a4b14:
      if (iVar1 == 0) {
        *param_1 = *param_2;
        pcVar6 = *(code **)(lVar8 + 0x10);
        goto LAB_1007a4b80;
      }
      goto LAB_1007a4b18;
    }
  }
  if (iVar1 == 0) {
    *param_1 = *param_2;
    pcVar6 = *(code **)(lVar8 + 0x18);
LAB_1007a4b80:
    (*pcVar6)((long)param_1 + uVar9 + 8 & uVar7,(long)param_2 + uVar9 + 8 & uVar7,lVar2);
    return param_1;
  }
  (**(code **)(lVar8 + 8))((long)param_1 + uVar9 + 8 & uVar7,lVar2);
LAB_1007a4b18:
  puVar4 = _memcpy(param_1,param_2,(uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + lVar10);
  return puVar4;
}



/* Address: 0x1007a4bb4 | FUN_1007a4bb4 */

ulong * FUN_1007a4bb4(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = ~uVar6;
  lVar7 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) < 0) {
    uVar3 = (long)param_2 + uVar6 + 8 & uVar5;
    (**(code **)(lVar4 + 0x30))(uVar3,*(int *)(lVar4 + 0x54),lVar1);
    if ((int)uVar3 == 0) goto LAB_1007a4c70;
  }
  else {
    uVar3 = *param_2;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((int)uVar3 == -1) {
LAB_1007a4c70:
      *param_1 = *param_2;
      (**(code **)(lVar4 + 0x20))
                ((long)param_1 + uVar6 + 8 & uVar5,(long)param_2 + uVar6 + 8 & uVar5,lVar1);
      return param_1;
    }
  }
  puVar2 = _memcpy(param_1,param_2,(uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + lVar7);
  return puVar2;
}



/* Address: 0x1007a4cb8 | FUN_1007a4cb8 */

ulong * FUN_1007a4cb8(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar2 + -8);
  iVar1 = *(int *)(lVar8 + 0x54);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = ~uVar9;
  lVar10 = *(long *)(lVar8 + 0x40);
  if (iVar1 < 0) {
    pcVar6 = *(code **)(lVar8 + 0x30);
    uVar5 = (long)param_1 + uVar9 + 8 & uVar7;
    (*pcVar6)(uVar5,iVar1,lVar2);
    uVar3 = (long)param_2 + uVar9 + 8 & uVar7;
    (*pcVar6)(uVar3,iVar1,lVar2);
    iVar1 = (int)uVar3;
    if ((int)uVar5 != 0) goto LAB_1007a4db4;
  }
  else {
    uVar5 = *param_2;
    if (0xfffffffe < uVar5) {
      uVar5 = 0xffffffff;
    }
    iVar1 = (int)uVar5 + 1;
    if (*param_1 < 0xffffffff) {
LAB_1007a4db4:
      if (iVar1 == 0) {
        *param_1 = *param_2;
        pcVar6 = *(code **)(lVar8 + 0x20);
        goto LAB_1007a4e20;
      }
      goto LAB_1007a4db8;
    }
  }
  if (iVar1 == 0) {
    *param_1 = *param_2;
    pcVar6 = *(code **)(lVar8 + 0x28);
LAB_1007a4e20:
    (*pcVar6)((long)param_1 + uVar9 + 8 & uVar7,(long)param_2 + uVar9 + 8 & uVar7,lVar2);
    return param_1;
  }
  (**(code **)(lVar8 + 8))((long)param_1 + uVar9 + 8 & uVar7,lVar2);
LAB_1007a4db8:
  puVar4 = _memcpy(param_1,param_2,(uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + lVar10);
  return puVar4;
}



/* Address: 0x1007a4e54 | FUN_1007a4e54 */

int FUN_1007a4e54(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  if (param_2 <= uVar2 - 1) goto LAB_1007a4f30;
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar10 = (uint)lVar1;
  uVar8 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar11 = (1 << (ulong)(uVar8 & 0x1f)) + (param_2 - uVar2) >> (ulong)(uVar8 & 0x1f);
    if (uVar11 < 0xff) {
      if (uVar11 == 0) goto LAB_1007a4f30;
      goto LAB_1007a4ef0;
    }
    if (uVar11 < 0xffff) {
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_1007a4ef0:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar11 != 0) {
    uVar3 = 0;
    if (uVar10 < 4) {
      uVar3 = uVar11 - 1 << (ulong)(uVar8 & 0x1f);
    }
    if (uVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 4;
      if (uVar10 < 4) {
        uVar8 = uVar10;
      }
      if ((int)uVar8 < 3) {
        if (uVar8 == 1) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*param_1;
      }
      else {
        uVar8 = (uint)*param_1;
      }
    }
    return (uVar8 | uVar3) + uVar2;
  }
LAB_1007a4f30:
  if ((int)uVar3 < 0) {
    uVar9 = (ulong)((long)param_1 + uVar9 + 8) & ~uVar9;
    (**(code **)(lVar7 + 0x30))(uVar9,uVar3,lVar6);
    iVar4 = (int)uVar9;
  }
  else {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    iVar4 = (int)uVar9 + 1;
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = iVar4 + -1;
  }
  return iVar5;
}



/* Address: 0x1007a4fd4 | FUN_1007a4fd4 */

void FUN_1007a4fd4(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar11 = (uint)sVar1;
  if (uVar2 - 1 < param_3) {
    uVar4 = (1 << (ulong)(uVar11 << 3 & 0x1f)) + (param_3 - uVar2) >> (ulong)(uVar11 << 3 & 0x1f);
    bVar10 = 2;
    if (0xfffe < uVar4) {
      bVar10 = 4;
    }
    if (uVar4 < 0xff) {
      bVar10 = uVar4 != 0;
    }
    bVar6 = 1;
    if (uVar11 < 4) {
      bVar6 = bVar10;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar2 - 1 < param_2) {
    param_2 = param_2 - uVar2;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar12;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar12;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007a5188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))
                  ((ulong)((long)param_1 + uVar9 + 8) & ~uVar9,param_2 + 1,uVar3,lVar7);
        return;
      }
      if ((int)(param_2 + 1) < 0) {
        *param_1 = (ulong)(param_2 + 0x80000001);
      }
      else {
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x1007a51f0 | FUN_1007a51f0 */

ulong FUN_1007a51f0(ulong *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar2 = *(long *)(lVar1 + -8);
  if (-1 < *(int *)(lVar2 + 0x54)) {
    uVar3 = *param_1;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  uVar3 = (long)param_1 + (ulong)*(byte *)(lVar2 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001007a5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x30))(uVar3,*(int *)(lVar2 + 0x54),lVar1);
  return uVar3;
}



/* Address: 0x1007a5274 | FUN_1007a5274 */

void FUN_1007a5274(ulong *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  bVar3 = *(byte *)(lVar5 + 0x50);
  uVar7 = ~(ulong)bVar3;
  uVar8 = (uint)param_2;
  if (uVar1 < uVar8) {
    uVar2 = (bVar3 + 8 & (uint)uVar7) + *(int *)(lVar5 + 0x40);
    uVar6 = 0xffffffff;
    if (uVar2 < 4) {
      uVar6 = ~(-1 << (ulong)(uVar2 * 8 & 0x1f));
    }
    if (uVar2 != 0) {
      uVar6 = uVar6 & (uVar1 - uVar8 ^ 0xffffffff);
      uVar1 = 4;
      if (uVar2 < 4) {
        uVar1 = uVar2;
      }
      _bzero(param_1,(ulong)uVar2);
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          *(char *)param_1 = (char)uVar6;
        }
        else {
          *(short *)param_1 = (short)uVar6;
        }
      }
      else if (uVar1 == 3) {
        *(short *)param_1 = (short)uVar6;
        *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar6;
      }
    }
  }
  else if (uVar8 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007a537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))((long)param_1 + (ulong)bVar3 + 8 & uVar7,param_2,uVar2,lVar4);
      return;
    }
    if ((int)uVar8 < 0) {
      uVar8 = uVar8 & 0x7fffffff;
    }
    else {
      uVar8 = uVar8 - 1;
    }
    *param_1 = (ulong)uVar8;
  }
  return;
}



/* Address: 0x1007a53a8 | FUN_1007a53a8 */

void FUN_1007a53a8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc02c8);
  return;
}



/* Address: 0x1007a53b4 | FUN_1007a53b4 */

void FUN_1007a53b4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return;
    }
    param_1 = param_3 & 0x3fffffffffffffff;
    _swift_errorRetain(param_2);
    param_2 = param_4;
  }
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1007a540c | FUN_1007a540c */

void FUN_1007a540c(undefined8 *param_1)

{
  FUN_1007a541c(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Address: 0x1007a541c | FUN_1007a541c */

void FUN_1007a541c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    _swift_errorRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_3 & 0x3fffffffffffffff);
    return;
  }
  if (uVar1 == 0) {
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1007a5484 | FUN_1007a5484 */

undefined8 * FUN_1007a5484(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_1007a53b4(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Address: 0x1007a54d8 | FUN_1007a54d8 */

undefined8 * FUN_1007a54d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  FUN_1007a53b4(uVar1,uVar5,uVar2,uVar6);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  FUN_1007a541c(uVar3,uVar7,uVar4,uVar8);
  return param_1;
}



/* Address: 0x1007a5538 | FUN_1007a5538 */

undefined8 * FUN_1007a5538(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_1007a541c(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1007a5574 | FUN_1007a5574 */

int FUN_1007a5574(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffd < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x3ffe;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          (uVar1 >> 0x12 & 0xc00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 2) ^ 0x3fff;
  if (0x3ffc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007a55f0 | FUN_1007a55f0 */

void FUN_1007a55f0(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3ffe) {
    if (0x3ffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 2 & 0xfff | (-param_2 & 0x3fff) << 0xc;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[1] = 0;
      param_1[2] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      param_1[3] = 0;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0x3ffe);
    param_1[1] = 0;
    if (0x3ffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1007a5664 | FUN_1007a5664 */

uint FUN_1007a5664(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = (int)(*param_1 >> 3) + 2;
  if (-1 < (long)param_1[2]) {
    uVar1 = (uint)(param_1[2] >> 0x3e);
  }
  return uVar1;
}



/* Address: 0x1007a5684 | FUN_1007a5684 */

void FUN_1007a5684(long param_1)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0x3fffffffffffffff;
  return;
}



/* Address: 0x1007a5694 | FUN_1007a5694 */

void FUN_1007a5694(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2) << 3;
    param_1[2] = 0x8000000000000000;
    param_1[1] = 0;
    param_1[3] = 0;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8;
  param_1[2] = param_1[2] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1007a56d8 | FUN_1007a56d8 */

void FUN_1007a56d8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc0334);
  return;
}


