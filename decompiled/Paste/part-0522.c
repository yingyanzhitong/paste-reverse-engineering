/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005f6134 | FUN_1005f6134 */

uint * FUN_1005f6134(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar19 + -8);
  uVar6 = (ulong)*(byte *)(lVar18 + 0x50);
  if (param_1 == param_2) {
    lVar18 = *(long *)(lVar18 + 0x40);
    uVar4 = (uVar6 + 1 & (uVar6 ^ 0xffffffffffffffff)) + lVar18;
    uVar16 = (uVar6 + 0x21 & (uVar6 ^ 0xffffffffffffffff)) + lVar18;
    if (uVar16 <= uVar4) {
      uVar16 = uVar4;
    }
    uVar4 = (lVar18 + (uVar6 + 0x31 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
    if (uVar4 <= uVar16) {
      uVar4 = uVar16;
    }
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    goto LAB_1005f65f4;
  }
  lVar9 = *(long *)(lVar18 + 0x40);
  uVar4 = (uVar6 + 1 & (uVar6 ^ 0xffffffffffffffff)) + lVar9;
  uVar16 = (uVar6 + 0x21 & (uVar6 ^ 0xffffffffffffffff)) + lVar9;
  if (uVar16 <= uVar4) {
    uVar16 = uVar4;
  }
  lVar9 = lVar9 + 7;
  uVar4 = (lVar9 + (uVar6 + 0x31 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar4 <= uVar16) {
    uVar4 = uVar16;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar5 = *(byte *)((long)param_1 + uVar4);
  uVar8 = (uint)bVar5;
  uVar17 = (uint)uVar4;
  if (3 < bVar5) {
    uVar1 = 4;
    if (uVar17 < 4) {
      uVar1 = uVar17;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f62a4;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    if (uVar17 < 4) {
      uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar17 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
LAB_1005f62a4:
  uVar16 = ~uVar6;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      pbVar7 = (byte *)((long)param_1 + uVar6 + 1);
    }
    else {
      if (uVar8 != 1) goto LAB_1005f637c;
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_10000cae0(puVar14[1],puVar14[2],*(undefined1 *)(puVar14 + 3));
      pbVar7 = (byte *)((long)(puVar14 + 1) + uVar6 + 0x11);
    }
    (**(code **)(lVar18 + 8))((ulong)pbVar7 & uVar16,lVar19);
  }
  else {
    if (uVar8 == 2) {
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      FUN_10000cae0(*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2));
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_1005e46ac(puVar14[1],*(undefined1 *)(puVar14 + 2));
      uVar15 = (long)(puVar14 + 1) + uVar6 + 9 & uVar16;
      (**(code **)(lVar18 + 8))(uVar15,lVar19);
      uVar11 = *(undefined8 *)(lVar9 + uVar15 & 0xfffffffffffffff8);
    }
    else {
      if (uVar8 != 3) goto LAB_1005f637c;
      uVar11 = *(undefined8 *)param_1;
    }
    _swift_errorRelease(uVar11);
  }
LAB_1005f637c:
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar8 = (uint)bVar5;
  if (bVar5 < 4) {
LAB_1005f63e8:
    if (1 < (int)uVar8) goto LAB_1005f64d8;
LAB_1005f63f0:
    if (uVar8 == 0) {
      *(byte *)param_1 = (byte)*param_2;
      (**(code **)(lVar18 + 0x10))
                ((ulong)((long)param_1 + uVar6 + 1) & uVar16,
                 (ulong)((long)param_2 + uVar6 + 1) & uVar16,lVar19);
      *(byte *)((long)param_1 + uVar4) = 0;
      goto LAB_1005f65f4;
    }
    if (uVar8 != 1) goto LAB_1005f6500;
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar14 = *puVar12;
    uVar11 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = *(undefined1 *)(puVar12 + 3);
    _swift_bridgeObjectRetain();
    FUN_1005e4618(uVar11,uVar2,uVar3);
    puVar14[1] = uVar11;
    puVar14[2] = uVar2;
    *(undefined1 *)(puVar14 + 3) = uVar3;
    (**(code **)(lVar18 + 0x10))
              ((long)(puVar14 + 1) + uVar6 + 0x11 & uVar16,
               (long)(puVar12 + 1) + uVar6 + 0x11 & uVar16,lVar19);
    bVar5 = 1;
  }
  else {
    uVar1 = 4;
    if (uVar17 < 4) {
      uVar1 = uVar17;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f63e8;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (3 < uVar17) {
      uVar8 = uVar8 + 4;
      goto LAB_1005f63e8;
    }
    uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar17 & 3) << 3)) + 4;
    if ((int)uVar8 < 2) goto LAB_1005f63f0;
LAB_1005f64d8:
    if (uVar8 == 2) {
      *(byte *)param_1 = (byte)*param_2;
      *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
      puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      puVar14 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      uVar11 = *puVar14;
      uVar2 = puVar14[1];
      uVar3 = *(undefined1 *)(puVar14 + 2);
      FUN_1005e4618(uVar11,uVar2,uVar3);
      *puVar12 = uVar11;
      puVar12[1] = uVar2;
      *(undefined1 *)(puVar12 + 2) = uVar3;
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      puVar12 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
      *puVar14 = *puVar12;
      uVar11 = puVar12[1];
      uVar3 = *(undefined1 *)(puVar12 + 2);
      _swift_bridgeObjectRetain();
      FUN_1005f5ba4(uVar11,uVar3);
      puVar14[1] = uVar11;
      *(undefined1 *)(puVar14 + 2) = uVar3;
      uVar15 = (long)(puVar14 + 1) + uVar6 + 9 & uVar16;
      uVar16 = (long)(puVar12 + 1) + uVar6 + 9 & uVar16;
      (**(code **)(lVar18 + 0x10))(uVar15,uVar16,lVar19);
      uVar11 = *(undefined8 *)(lVar9 + uVar16 & 0xfffffffffffffff8);
      _swift_errorRetain(uVar11);
      *(undefined8 *)(lVar9 + uVar15 & 0xfffffffffffffff8) = uVar11;
      bVar5 = 2;
    }
    else {
      if (uVar8 != 3) {
LAB_1005f6500:
        _memcpy(param_1,param_2,uVar4 + 1);
        goto LAB_1005f65f4;
      }
      uVar11 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar11);
      *(undefined8 *)param_1 = uVar11;
      bVar5 = 3;
    }
  }
  *(byte *)((long)param_1 + uVar4) = bVar5;
LAB_1005f65f4:
  puVar13 = (ulong *)((ulong)(uVar4 + 8 + (long)param_1) & 0xfffffffffffffff8);
  puVar10 = (ulong *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar6 = *puVar10;
  if (*puVar13 < 0xffffffff) {
    if (0xfffffffe < uVar6) {
      uVar4 = puVar10[1];
      *puVar13 = uVar6;
      puVar13[1] = uVar4;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar6) {
      uVar4 = puVar10[1];
      uVar16 = puVar13[1];
      *puVar13 = uVar6;
      puVar13[1] = uVar4;
      _swift_retain();
      _swift_release(uVar16);
      return param_1;
    }
    _swift_release(puVar13[1]);
  }
  uVar6 = *puVar10;
  puVar13[1] = puVar10[1];
  *puVar13 = uVar6;
  return param_1;
}



/* Address: 0x1005f6694 | FUN_1005f6694 */

byte * FUN_1005f6694(byte *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar10 = *(long *)(lVar3 + 0x40);
  uVar7 = (uVar5 + 1 & (uVar5 ^ 0xffffffffffffffff)) + lVar10;
  uVar8 = (uVar5 + 0x21 & (uVar5 ^ 0xffffffffffffffff)) + lVar10;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  lVar10 = lVar10 + 7;
  uVar7 = (lVar10 + (uVar5 + 0x31 & (uVar5 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar2 = *(byte *)((long)param_2 + uVar7);
  uVar9 = (uint)bVar2;
  if (3 < bVar2) {
    uVar15 = (uint)uVar7;
    uVar1 = 4;
    if (uVar15 < 4) {
      uVar1 = uVar15;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f6798;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar15 < 4) {
      uVar9 = (uVar9 | bVar2 - 4 << (ulong)((uVar15 & 3) << 3)) + 4;
    }
    else {
      uVar9 = uVar9 + 4;
    }
  }
LAB_1005f6798:
  uVar8 = ~uVar5;
  if ((int)uVar9 < 2) {
    if (uVar9 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar3 + 0x20))
                ((ulong)(param_1 + uVar5 + 1) & uVar8,(ulong)((long)param_2 + uVar5 + 1) & uVar8);
      param_1[uVar7] = 0;
      goto LAB_1005f6924;
    }
    if (uVar9 != 1) {
LAB_1005f6838:
      _memcpy(param_1,param_2,uVar7 + 1);
      goto LAB_1005f6924;
    }
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar11 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar11 = *puVar12;
    uVar16 = puVar12[2];
    uVar13 = puVar12[1];
    *(undefined1 *)(puVar11 + 3) = *(undefined1 *)(puVar12 + 3);
    puVar11[2] = uVar16;
    puVar11[1] = uVar13;
    (**(code **)(lVar3 + 0x20))
              ((long)(puVar11 + 1) + uVar5 + 0x11 & uVar8,(long)(puVar12 + 1) + uVar5 + 0x11 & uVar8
              );
    bVar2 = 1;
  }
  else if (uVar9 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar11 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar16 = puVar12[1];
    uVar13 = *puVar12;
    *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar12 + 2);
    puVar11[1] = uVar16;
    *puVar11 = uVar13;
    puVar11 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar11 = *puVar12;
    uVar13 = puVar12[1];
    *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar12 + 2);
    puVar11[1] = uVar13;
    uVar14 = (long)(puVar11 + 1) + uVar5 + 9 & uVar8;
    uVar8 = (long)(puVar12 + 1) + uVar5 + 9 & uVar8;
    (**(code **)(lVar3 + 0x20))(uVar14,uVar8);
    *(undefined8 *)(lVar10 + uVar14 & 0xfffffffffffffff8) =
         *(undefined8 *)(lVar10 + uVar8 & 0xfffffffffffffff8);
    bVar2 = 2;
  }
  else {
    if (uVar9 != 3) goto LAB_1005f6838;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 3;
  }
  param_1[uVar7] = bVar2;
LAB_1005f6924:
  puVar4 = (ulong *)((ulong)(param_1 + uVar7 + 8) & 0xfffffffffffffff8);
  puVar6 = (ulong *)((ulong)(uVar7 + 8 + (long)param_2) & 0xfffffffffffffff8);
  if (*puVar6 < 0xffffffff) {
    uVar7 = *puVar6;
    puVar4[1] = puVar6[1];
    *puVar4 = uVar7;
  }
  else {
    uVar7 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar7;
  }
  return param_1;
}



/* Address: 0x1005f6974 | FUN_1005f6974 */

uint * FUN_1005f6974(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar11 + -8);
  uVar4 = (ulong)*(byte *)(lVar16 + 0x50);
  if (param_1 == param_2) {
    lVar11 = *(long *)(lVar16 + 0x40);
    uVar2 = (uVar4 + 1 & (uVar4 ^ 0xffffffffffffffff)) + lVar11;
    uVar17 = (uVar4 + 0x21 & (uVar4 ^ 0xffffffffffffffff)) + lVar11;
    if (uVar17 <= uVar2) {
      uVar17 = uVar2;
    }
    uVar2 = (lVar11 + (uVar4 + 0x31 & (uVar4 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
    if (uVar2 <= uVar17) {
      uVar2 = uVar17;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    goto LAB_1005f6ddc;
  }
  lVar7 = *(long *)(lVar16 + 0x40);
  uVar2 = (uVar4 + 1 & (uVar4 ^ 0xffffffffffffffff)) + lVar7;
  uVar17 = (uVar4 + 0x21 & (uVar4 ^ 0xffffffffffffffff)) + lVar7;
  if (uVar17 <= uVar2) {
    uVar17 = uVar2;
  }
  lVar7 = lVar7 + 7;
  uVar2 = (lVar7 + (uVar4 + 0x31 & (uVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar17) {
    uVar2 = uVar17;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar6 = (uint)bVar3;
  uVar15 = (uint)uVar2;
  if (3 < bVar3) {
    uVar1 = 4;
    if (uVar15 < 4) {
      uVar1 = uVar15;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f6ae0;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    if (uVar15 < 4) {
      uVar6 = (uVar6 | bVar3 - 4 << (ulong)((uVar15 & 3) << 3)) + 4;
    }
    else {
      uVar6 = uVar6 + 4;
    }
  }
LAB_1005f6ae0:
  uVar17 = ~uVar4;
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      pbVar5 = (byte *)((long)param_1 + uVar4 + 1);
    }
    else {
      if (uVar6 != 1) goto LAB_1005f6bb8;
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar13);
      FUN_10000cae0(puVar13[1],puVar13[2],*(undefined1 *)(puVar13 + 3));
      pbVar5 = (byte *)((long)(puVar13 + 1) + uVar4 + 0x11);
    }
    (**(code **)(lVar16 + 8))((ulong)pbVar5 & uVar17,lVar11);
  }
  else {
    if (uVar6 == 2) {
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      FUN_10000cae0(*puVar13,puVar13[1],*(undefined1 *)(puVar13 + 2));
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar13);
      FUN_1005e46ac(puVar13[1],*(undefined1 *)(puVar13 + 2));
      uVar14 = (long)(puVar13 + 1) + uVar4 + 9 & uVar17;
      (**(code **)(lVar16 + 8))(uVar14,lVar11);
      uVar9 = *(undefined8 *)(lVar7 + uVar14 & 0xfffffffffffffff8);
    }
    else {
      if (uVar6 != 3) goto LAB_1005f6bb8;
      uVar9 = *(undefined8 *)param_1;
    }
    _swift_errorRelease(uVar9);
  }
LAB_1005f6bb8:
  bVar3 = *(byte *)((long)param_2 + uVar2);
  uVar6 = (uint)bVar3;
  if (bVar3 < 4) {
LAB_1005f6c24:
    if (1 < (int)uVar6) goto LAB_1005f6cfc;
LAB_1005f6c2c:
    if (uVar6 == 0) {
      *(byte *)param_1 = (byte)*param_2;
      (**(code **)(lVar16 + 0x20))
                ((ulong)((long)param_1 + uVar4 + 1) & uVar17,
                 (ulong)((long)param_2 + uVar4 + 1) & uVar17,lVar11);
      *(byte *)((long)param_1 + uVar2) = 0;
      goto LAB_1005f6ddc;
    }
    if (uVar6 != 1) goto LAB_1005f6d1c;
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar13 = *puVar8;
    uVar18 = puVar8[2];
    uVar9 = puVar8[1];
    *(undefined1 *)(puVar13 + 3) = *(undefined1 *)(puVar8 + 3);
    puVar13[2] = uVar18;
    puVar13[1] = uVar9;
    (**(code **)(lVar16 + 0x20))
              ((long)(puVar13 + 1) + uVar4 + 0x11 & uVar17,
               (long)(puVar8 + 1) + uVar4 + 0x11 & uVar17,lVar11);
    bVar3 = 1;
  }
  else {
    uVar1 = 4;
    if (uVar15 < 4) {
      uVar1 = uVar15;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f6c24;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    if (3 < uVar15) {
      uVar6 = uVar6 + 4;
      goto LAB_1005f6c24;
    }
    uVar6 = (uVar6 | bVar3 - 4 << (ulong)((uVar15 & 3) << 3)) + 4;
    if ((int)uVar6 < 2) goto LAB_1005f6c2c;
LAB_1005f6cfc:
    if (uVar6 == 2) {
      *(byte *)param_1 = (byte)*param_2;
      *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      uVar18 = puVar8[1];
      uVar9 = *puVar8;
      *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(puVar8 + 2);
      puVar13[1] = uVar18;
      *puVar13 = uVar9;
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
      *puVar13 = *puVar8;
      uVar9 = puVar8[1];
      *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(puVar8 + 2);
      puVar13[1] = uVar9;
      uVar14 = (long)(puVar13 + 1) + uVar4 + 9 & uVar17;
      uVar17 = (long)(puVar8 + 1) + uVar4 + 9 & uVar17;
      (**(code **)(lVar16 + 0x20))(uVar14,uVar17,lVar11);
      *(undefined8 *)(lVar7 + uVar14 & 0xfffffffffffffff8) =
           *(undefined8 *)(lVar7 + uVar17 & 0xfffffffffffffff8);
      bVar3 = 2;
    }
    else {
      if (uVar6 != 3) {
LAB_1005f6d1c:
        _memcpy(param_1,param_2,uVar2 + 1);
        goto LAB_1005f6ddc;
      }
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar3 = 3;
    }
  }
  *(byte *)((long)param_1 + uVar2) = bVar3;
LAB_1005f6ddc:
  puVar12 = (ulong *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8);
  puVar10 = (ulong *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar4 = *puVar10;
  if (*puVar12 < 0xffffffff) {
    if (0xfffffffe < uVar4) {
      uVar2 = puVar10[1];
      *puVar12 = uVar4;
      puVar12[1] = uVar2;
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar4) {
      uVar17 = puVar10[1];
      uVar2 = puVar12[1];
      *puVar12 = uVar4;
      puVar12[1] = uVar17;
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(puVar12[1]);
  }
  uVar4 = *puVar10;
  puVar12[1] = puVar10[1];
  *puVar12 = uVar4;
  return param_1;
}



/* Address: 0x1005f6e6c | FUN_1005f6e6c */

int FUN_1005f6e6c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar2 = *(long *)(lVar2 + 0x40);
  uVar3 = (uVar5 + 1 & (uVar5 ^ 0xffffffffffffffff)) + lVar2;
  uVar1 = (uVar5 + 0x21 & (uVar5 ^ 0xffffffffffffffff)) + lVar2;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = (lVar2 + (uVar5 + 0x31 & (uVar5 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0x7ffffffe < param_2) {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 0x18;
    uVar5 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar5;
    param_2 = param_2 + 0x80000003;
    iVar7 = 2;
    if (uVar5 != 0) {
      param_2 = 2;
    }
    if (0xffff < param_2) {
      iVar7 = 4;
    }
    if (param_2 < 0x100) {
      iVar7 = 1;
    }
    if (iVar7 == 4) {
      uVar6 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar7 == 2) {
        uVar6 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_1005f6f60;
        goto LAB_1005f6f34;
      }
      uVar6 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar6 != 0) {
LAB_1005f6f34:
      uVar6 = uVar6 - 1;
      if (uVar5 != 0) {
        uVar6 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar6) + 0x7fffffff;
    }
  }
LAB_1005f6f60:
  uVar3 = *(ulong *)((long)param_1 + uVar3 + 8 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar7 = 0;
  if (1 < (int)uVar3 + 1U) {
    iVar7 = (int)uVar3;
  }
  return iVar7;
}



/* Address: 0x1005f6f8c | FUN_1005f6f8c */

void FUN_1005f6f8c(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar5 = *(long *)(lVar5 + 0x40);
  uVar3 = (uVar6 + 1 & (uVar6 ^ 0xffffffffffffffff)) + lVar5;
  uVar4 = (uVar6 + 0x21 & (uVar6 ^ 0xffffffffffffffff)) + lVar5;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  uVar3 = (lVar5 + (uVar6 + 0x31 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  sVar1 = (uVar3 & 0xfffffffffffffff8) + 0x18;
  if (param_3 < 0x7fffffff) {
    uVar7 = 0;
  }
  else {
    param_3 = param_3 + 0x80000003;
    uVar7 = 2;
    if ((int)sVar1 != 0) {
      param_3 = 2;
    }
    if (0xffff < param_3) {
      uVar7 = 4;
    }
    if (param_3 < 0x100) {
      uVar7 = 1;
    }
  }
  if (param_2 < 0x7fffffff) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)((long)param_1 + uVar3 + 8 & 0xfffffffffffffff8) = (ulong)param_2;
    }
  }
  else {
    iVar2 = param_2 + 0x80000002;
    if ((int)sVar1 != 0) {
      iVar2 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + 0x80000001;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar2;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar2;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar2;
    }
  }
  return;
}



/* Address: 0x1005f7108 | FUN_1005f7108 */

void FUN_1005f7108(void)

{
  FUN_1005f7110(0);
  return;
}



/* Address: 0x1005f7110 | FUN_1005f7110 */

void FUN_1005f7110(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fd5fb8 == 0) {
    lVar2 = 0xff;
    FUN_1005f7164();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fd5fb8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1005f7164 | FUN_1005f7164 */

void FUN_1005f7164(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd5fc0 != 0) {
    return;
  }
  uVar1 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fd5fc0 = uVar1;
  return;
}



/* Address: 0x1005f71ac | FUN_1005f71ac */

void FUN_1005f71ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1005f5278(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1005f721c | FUN_1005f721c */

void FUN_1005f721c(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar9 = *(long *)(param_2 + 0x18);
  lVar12 = *(long *)(lVar9 + -8);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar6 = *(long *)(lVar12 + 0x40);
  uVar11 = (uVar10 + 1 & (uVar10 ^ 0xffffffffffffffff)) + lVar6;
  uVar1 = (uVar10 + 0x21 & (uVar10 ^ 0xffffffffffffffff)) + lVar6;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  uVar11 = (lVar6 + 7 + (uVar10 + 0x31 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar11 <= uVar1) {
    uVar11 = uVar1;
  }
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar7 = (uint)bVar2;
  if (3 < bVar2) {
    uVar4 = (uint)uVar11;
    uVar8 = 4;
    if (uVar4 < 4) {
      uVar8 = uVar4;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1005f7300;
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
    uVar7 = uVar8 | bVar2 - 4 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 4;
  }
LAB_1005f7300:
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      pbVar5 = (byte *)((long)param_1 + uVar10 + 1);
    }
    else {
      if (uVar7 != 1) {
        return;
      }
      puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar13);
      FUN_10000cae0(puVar13[1],puVar13[2],*(undefined1 *)(puVar13 + 3));
      pbVar5 = (byte *)((long)(puVar13 + 1) + uVar10 + 0x11);
    }
                    /* WARNING: Could not recover jumptable at 0x0001005f7394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 8))((ulong)pbVar5 & ~uVar10,lVar9);
    return;
  }
  if (uVar7 == 2) {
    puVar13 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    FUN_10000cae0(*puVar13,puVar13[1],*(undefined1 *)(puVar13 + 2));
    puVar13 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
    _swift_bridgeObjectRelease(*puVar13);
    FUN_1005e46ac(puVar13[1],*(undefined1 *)(puVar13 + 2));
    uVar11 = (long)(puVar13 + 1) + uVar10 + 9 & ~uVar10;
    (**(code **)(lVar12 + 8))(uVar11,lVar9);
    uVar3 = *(undefined8 *)(lVar6 + 7 + uVar11 & 0xfffffffffffffff8);
  }
  else {
    if (uVar7 != 3) {
      return;
    }
    uVar3 = *(undefined8 *)param_1;
  }
  _swift_errorRelease(uVar3);
  return;
}



/* Address: 0x1005f7410 | FUN_1005f7410 */

byte * FUN_1005f7410(byte *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar5 = *(long *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar5 + -8);
  uVar16 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar1 = (uVar16 + 1 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  uVar17 = (uVar16 + 0x21 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  if (uVar17 <= uVar1) {
    uVar17 = uVar1;
  }
  lVar10 = lVar10 + 7;
  uVar1 = (lVar10 + (uVar16 + 0x31 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar17) {
    uVar1 = uVar17;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar6;
  if (3 < bVar6) {
    uVar14 = (uint)uVar1;
    uVar9 = 4;
    if (uVar14 < 4) {
      uVar9 = uVar14;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1005f7504;
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
    uVar8 = uVar9 | bVar6 - 4 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 4;
  }
LAB_1005f7504:
  uVar17 = ~uVar16;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar15 + 0x10))
                ((ulong)(param_1 + uVar16 + 1) & uVar17,(ulong)((long)param_2 + uVar16 + 1) & uVar17
                );
      param_1[uVar1] = 0;
      return param_1;
    }
    if (uVar8 != 1) {
LAB_1005f75c8:
      pbVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return pbVar4;
    }
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar7 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar7 = *puVar11;
    uVar12 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = *(undefined1 *)(puVar11 + 3);
    _swift_bridgeObjectRetain();
    FUN_1005e4618(uVar12,uVar2,uVar3);
    puVar7[1] = uVar12;
    puVar7[2] = uVar2;
    *(undefined1 *)(puVar7 + 3) = uVar3;
    (**(code **)(lVar15 + 0x10))
              ((long)(puVar7 + 1) + uVar16 + 0x11 & uVar17,
               (long)(puVar11 + 1) + uVar16 + 0x11 & uVar17,lVar5);
    bVar6 = 1;
  }
  else if (uVar8 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar11 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar12 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = *(undefined1 *)(puVar7 + 2);
    FUN_1005e4618(uVar12,uVar2,uVar3);
    *puVar11 = uVar12;
    puVar11[1] = uVar2;
    *(undefined1 *)(puVar11 + 2) = uVar3;
    puVar7 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar7 = *puVar11;
    uVar12 = puVar11[1];
    uVar3 = *(undefined1 *)(puVar11 + 2);
    _swift_bridgeObjectRetain();
    FUN_1005f5ba4(uVar12,uVar3);
    puVar7[1] = uVar12;
    *(undefined1 *)(puVar7 + 2) = uVar3;
    uVar13 = (long)(puVar7 + 1) + uVar16 + 9 & uVar17;
    uVar17 = (long)(puVar11 + 1) + uVar16 + 9 & uVar17;
    (**(code **)(lVar15 + 0x10))(uVar13,uVar17,lVar5);
    uVar12 = *(undefined8 *)(lVar10 + uVar17 & 0xfffffffffffffff8);
    _swift_errorRetain(uVar12);
    *(undefined8 *)(lVar10 + uVar13 & 0xfffffffffffffff8) = uVar12;
    bVar6 = 2;
  }
  else {
    if (uVar8 != 3) goto LAB_1005f75c8;
    uVar12 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar12);
    *(undefined8 *)param_1 = uVar12;
    bVar6 = 3;
  }
  param_1[uVar1] = bVar6;
  return param_1;
}



/* Address: 0x1005f7720 | FUN_1005f7720 */

uint * FUN_1005f7720(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar10 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar10 + -8);
  uVar17 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar9 = *(long *)(lVar16 + 0x40);
  uVar1 = (uVar17 + 1 & (uVar17 ^ 0xffffffffffffffff)) + lVar9;
  uVar18 = (uVar17 + 0x21 & (uVar17 ^ 0xffffffffffffffff)) + lVar9;
  if (uVar18 <= uVar1) {
    uVar18 = uVar1;
  }
  lVar9 = lVar9 + 7;
  uVar1 = (lVar9 + (uVar17 + 0x31 & (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar18) {
    uVar1 = uVar18;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar6 = *(byte *)((long)param_1 + uVar1);
  uVar8 = (uint)bVar6;
  uVar15 = (uint)uVar1;
  if (3 < bVar6) {
    uVar2 = 4;
    if (uVar15 < 4) {
      uVar2 = uVar15;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1005f7838;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    if (uVar15 < 4) {
      uVar8 = (uVar8 | bVar6 - 4 << (ulong)((uVar15 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
LAB_1005f7838:
  uVar18 = ~uVar17;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      pbVar7 = (byte *)((long)param_1 + uVar17 + 1);
    }
    else {
      if (uVar8 != 1) goto LAB_1005f7910;
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_10000cae0(puVar14[1],puVar14[2],*(undefined1 *)(puVar14 + 3));
      pbVar7 = (byte *)((long)(puVar14 + 1) + uVar17 + 0x11);
    }
    (**(code **)(lVar16 + 8))((ulong)pbVar7 & uVar18,lVar10);
  }
  else {
    if (uVar8 == 2) {
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      FUN_10000cae0(*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2));
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_1005e46ac(puVar14[1],*(undefined1 *)(puVar14 + 2));
      uVar13 = (long)(puVar14 + 1) + uVar17 + 9 & uVar18;
      (**(code **)(lVar16 + 8))(uVar13,lVar10);
      uVar11 = *(undefined8 *)(lVar9 + uVar13 & 0xfffffffffffffff8);
    }
    else {
      if (uVar8 != 3) goto LAB_1005f7910;
      uVar11 = *(undefined8 *)param_1;
    }
    _swift_errorRelease(uVar11);
  }
LAB_1005f7910:
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar6;
  if (3 < bVar6) {
    uVar2 = 4;
    if (uVar15 < 4) {
      uVar2 = uVar15;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x0001005f7980;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (uVar15 < 4) {
      uVar8 = (uVar8 | bVar6 - 4 << (ulong)((uVar15 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
joined_r0x0001005f7980:
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      *(byte *)param_1 = (byte)*param_2;
      (**(code **)(lVar16 + 0x10))
                ((ulong)((long)param_1 + uVar17 + 1) & uVar18,
                 (ulong)((long)param_2 + uVar17 + 1) & uVar18,lVar10);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    if (uVar8 != 1) {
LAB_1005f7a94:
      puVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar5;
    }
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar14 = *puVar12;
    uVar11 = puVar12[1];
    uVar3 = puVar12[2];
    uVar4 = *(undefined1 *)(puVar12 + 3);
    _swift_bridgeObjectRetain();
    FUN_1005e4618(uVar11,uVar3,uVar4);
    puVar14[1] = uVar11;
    puVar14[2] = uVar3;
    *(undefined1 *)(puVar14 + 3) = uVar4;
    (**(code **)(lVar16 + 0x10))
              ((long)(puVar14 + 1) + uVar17 + 0x11 & uVar18,
               (long)(puVar12 + 1) + uVar17 + 0x11 & uVar18,lVar10);
    bVar6 = 1;
  }
  else if (uVar8 == 2) {
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar14 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar11 = *puVar14;
    uVar3 = puVar14[1];
    uVar4 = *(undefined1 *)(puVar14 + 2);
    FUN_1005e4618(uVar11,uVar3,uVar4);
    *puVar12 = uVar11;
    puVar12[1] = uVar3;
    *(undefined1 *)(puVar12 + 2) = uVar4;
    puVar14 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar14 = *puVar12;
    uVar11 = puVar12[1];
    uVar4 = *(undefined1 *)(puVar12 + 2);
    _swift_bridgeObjectRetain();
    FUN_1005f5ba4(uVar11,uVar4);
    puVar14[1] = uVar11;
    *(undefined1 *)(puVar14 + 2) = uVar4;
    uVar13 = (long)(puVar14 + 1) + uVar17 + 9 & uVar18;
    uVar18 = (long)(puVar12 + 1) + uVar17 + 9 & uVar18;
    (**(code **)(lVar16 + 0x10))(uVar13,uVar18,lVar10);
    uVar11 = *(undefined8 *)(lVar9 + uVar18 & 0xfffffffffffffff8);
    _swift_errorRetain(uVar11);
    *(undefined8 *)(lVar9 + uVar13 & 0xfffffffffffffff8) = uVar11;
    bVar6 = 2;
  }
  else {
    if (uVar8 != 3) goto LAB_1005f7a94;
    uVar11 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar11);
    *(undefined8 *)param_1 = uVar11;
    bVar6 = 3;
  }
  *(byte *)((long)param_1 + uVar1) = bVar6;
  return param_1;
}



/* Address: 0x1005f7bc0 | FUN_1005f7bc0 */

byte * FUN_1005f7bc0(byte *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar9 = *(long *)(lVar4 + 0x40);
  uVar1 = (uVar5 + 1 & (uVar5 ^ 0xffffffffffffffff)) + lVar9;
  uVar6 = (uVar5 + 0x21 & (uVar5 ^ 0xffffffffffffffff)) + lVar9;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  lVar9 = lVar9 + 7;
  uVar1 = (lVar9 + (uVar5 + 0x31 & (uVar5 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar2;
  if (3 < bVar2) {
    uVar14 = (uint)uVar1;
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1005f7ca4;
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
    uVar7 = uVar8 | bVar2 - 4 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 4;
  }
LAB_1005f7ca4:
  uVar6 = ~uVar5;
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar4 + 0x20))
                ((ulong)(param_1 + uVar5 + 1) & uVar6,(ulong)((long)param_2 + uVar5 + 1) & uVar6);
      param_1[uVar1] = 0;
    }
    else {
      if (uVar7 != 1) {
LAB_1005f7d54:
        pbVar3 = _memcpy(param_1,param_2,uVar1 + 1);
        return pbVar3;
      }
      *param_1 = (byte)*param_2;
      param_1[1] = *(byte *)((long)param_2 + 1);
      puVar10 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
      puVar11 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      *puVar10 = *puVar11;
      uVar15 = puVar11[2];
      uVar12 = puVar11[1];
      *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar11 + 3);
      puVar10[2] = uVar15;
      puVar10[1] = uVar12;
      (**(code **)(lVar4 + 0x20))
                ((long)(puVar10 + 1) + uVar5 + 0x11 & uVar6,
                 (long)(puVar11 + 1) + uVar5 + 0x11 & uVar6);
      param_1[uVar1] = 1;
    }
  }
  else if (uVar7 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar10 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar15 = puVar11[1];
    uVar12 = *puVar11;
    *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar11 + 2);
    puVar10[1] = uVar15;
    *puVar10 = uVar12;
    puVar10 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar10 = *puVar11;
    uVar12 = puVar11[1];
    *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar11 + 2);
    puVar10[1] = uVar12;
    uVar13 = (long)(puVar10 + 1) + uVar5 + 9 & uVar6;
    uVar6 = (long)(puVar11 + 1) + uVar5 + 9 & uVar6;
    (**(code **)(lVar4 + 0x20))(uVar13,uVar6);
    *(undefined8 *)(lVar9 + uVar13 & 0xfffffffffffffff8) =
         *(undefined8 *)(lVar9 + uVar6 & 0xfffffffffffffff8);
    param_1[uVar1] = 2;
  }
  else {
    if (uVar7 != 3) goto LAB_1005f7d54;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    param_1[uVar1] = 3;
  }
  return param_1;
}



/* Address: 0x1005f7e68 | FUN_1005f7e68 */

uint * FUN_1005f7e68(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar10 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar10 + -8);
  uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar7 = *(long *)(lVar14 + 0x40);
  uVar1 = (uVar15 + 1 & (uVar15 ^ 0xffffffffffffffff)) + lVar7;
  uVar16 = (uVar15 + 0x21 & (uVar15 ^ 0xffffffffffffffff)) + lVar7;
  if (uVar16 <= uVar1) {
    uVar16 = uVar1;
  }
  lVar7 = lVar7 + 7;
  uVar1 = (lVar7 + (uVar15 + 0x31 & (uVar15 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar16) {
    uVar1 = uVar16;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar6 = (uint)bVar4;
  uVar13 = (uint)uVar1;
  if (3 < bVar4) {
    uVar2 = 4;
    if (uVar13 < 4) {
      uVar2 = uVar13;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1005f7f7c;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    if (uVar13 < 4) {
      uVar6 = (uVar6 | bVar4 - 4 << (ulong)((uVar13 & 3) << 3)) + 4;
    }
    else {
      uVar6 = uVar6 + 4;
    }
  }
LAB_1005f7f7c:
  uVar16 = ~uVar15;
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      pbVar5 = (byte *)((long)param_1 + uVar15 + 1);
    }
    else {
      if (uVar6 != 1) goto LAB_1005f8054;
      puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar12);
      FUN_10000cae0(puVar12[1],puVar12[2],*(undefined1 *)(puVar12 + 3));
      pbVar5 = (byte *)((long)(puVar12 + 1) + uVar15 + 0x11);
    }
    (**(code **)(lVar14 + 8))((ulong)pbVar5 & uVar16,lVar10);
  }
  else {
    if (uVar6 == 2) {
      puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      FUN_10000cae0(*puVar12,puVar12[1],*(undefined1 *)(puVar12 + 2));
      puVar12 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar12);
      FUN_1005e46ac(puVar12[1],*(undefined1 *)(puVar12 + 2));
      uVar11 = (long)(puVar12 + 1) + uVar15 + 9 & uVar16;
      (**(code **)(lVar14 + 8))(uVar11,lVar10);
      uVar9 = *(undefined8 *)(lVar7 + uVar11 & 0xfffffffffffffff8);
    }
    else {
      if (uVar6 != 3) goto LAB_1005f8054;
      uVar9 = *(undefined8 *)param_1;
    }
    _swift_errorRelease(uVar9);
  }
LAB_1005f8054:
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar4;
  if (3 < bVar4) {
    uVar2 = 4;
    if (uVar13 < 4) {
      uVar2 = uVar13;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x0001005f80c4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    if (uVar13 < 4) {
      uVar6 = (uVar6 | bVar4 - 4 << (ulong)((uVar13 & 3) << 3)) + 4;
    }
    else {
      uVar6 = uVar6 + 4;
    }
  }
joined_r0x0001005f80c4:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      *(byte *)param_1 = (byte)*param_2;
      (**(code **)(lVar14 + 0x20))
                ((ulong)((long)param_1 + uVar15 + 1) & uVar16,
                 (ulong)((long)param_2 + uVar15 + 1) & uVar16,lVar10);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    if (uVar6 != 1) {
LAB_1005f81b8:
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar12 = *puVar8;
    uVar17 = puVar8[2];
    uVar9 = puVar8[1];
    *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(puVar8 + 3);
    puVar12[2] = uVar17;
    puVar12[1] = uVar9;
    (**(code **)(lVar14 + 0x20))
              ((long)(puVar12 + 1) + uVar15 + 0x11 & uVar16,
               (long)(puVar8 + 1) + uVar15 + 0x11 & uVar16,lVar10);
    bVar4 = 1;
  }
  else if (uVar6 == 2) {
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_2 + 1);
    puVar12 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar17 = puVar8[1];
    uVar9 = *puVar8;
    *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar8 + 2);
    puVar12[1] = uVar17;
    *puVar12 = uVar9;
    puVar12 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar12 = *puVar8;
    uVar9 = puVar8[1];
    *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar8 + 2);
    puVar12[1] = uVar9;
    uVar11 = (long)(puVar12 + 1) + uVar15 + 9 & uVar16;
    uVar16 = (long)(puVar8 + 1) + uVar15 + 9 & uVar16;
    (**(code **)(lVar14 + 0x20))(uVar11,uVar16,lVar10);
    *(undefined8 *)(lVar7 + uVar11 & 0xfffffffffffffff8) =
         *(undefined8 *)(lVar7 + uVar16 & 0xfffffffffffffff8);
    bVar4 = 2;
  }
  else {
    if (uVar6 != 3) goto LAB_1005f81b8;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar4 = 3;
  }
  *(byte *)((long)param_1 + uVar1) = bVar4;
  return param_1;
}



/* Address: 0x1005f82ac | FUN_1005f82ac */

int FUN_1005f82ac(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40);
  uVar1 = (uVar8 + 1 & (uVar8 ^ 0xffffffffffffffff)) + lVar6;
  uVar7 = (uVar8 + 0x21 & (uVar8 ^ 0xffffffffffffffff)) + lVar6;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  uVar1 = (lVar6 + (uVar8 + 0x31 & (uVar8 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfc) goto LAB_1005f8398;
  uVar7 = uVar1 + 1;
  uVar5 = (uint)uVar7;
  uVar4 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfb >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_1005f8398;
      goto LAB_1005f8324;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1005f8324:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
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
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar2) + 0xfc;
  }
LAB_1005f8398:
  iVar3 = 0;
  if (4 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1005f83f4 | FUN_1005f83f4 */

void FUN_1005f83f4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40);
  uVar2 = (uVar7 + 1 & (uVar7 ^ 0xffffffffffffffff)) + lVar6;
  uVar3 = (uVar7 + 0x21 & (uVar7 ^ 0xffffffffffffffff)) + lVar6;
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = (lVar6 + (uVar7 + 0x31 & (uVar7 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  sVar1 = uVar2 + 1;
  uVar8 = (uint)sVar1;
  if (param_3 < 0xfc) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar4 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - 0xfb >> (ulong)(uVar8 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar4) {
      bVar9 = 4;
    }
    if (uVar4 < 0x100) {
      bVar9 = 1 < uVar4;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfc) {
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
      *(char *)((long)param_1 + uVar2) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfc;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar4;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
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



/* Address: 0x1005f85dc | FUN_1005f85dc */

void FUN_1005f85dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  long lStack_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined *puStack_58;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lVar2 = *(long *)(lVar2 + -8) + 0x40;
    _swift_getTupleTypeLayout2(auStack_90,&DAT_100c66cd8,lVar2);
    local_108 = &DAT_100c66cd8;
    puStack_100 = &DAT_100c66cd8;
    puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    puStack_f0 = &DAT_100c66e40;
    local_f8 = puVar1;
    local_e8 = (undefined *)lVar2;
    local_70 = auStack_90;
    _swift_getTupleTypeLayout(auStack_b0,0,5,&local_108);
    local_108 = &DAT_100c66cd8;
    puStack_100 = &DAT_100c66cd8;
    local_f8 = &DAT_100c66e40;
    local_e8 = &DAT_100c66e58;
    local_d8 = &DAT_100c66e70;
    puStack_f0 = puVar1;
    lStack_e0 = lVar2;
    local_68 = auStack_b0;
    _swift_getTupleTypeLayout(auStack_d0,0,7,&local_108);
    puStack_58 = &DAT_100c66e70;
    local_60 = auStack_d0;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_70);
  }
  return;
}



/* Address: 0x1005f86f0 | thunk_FUN_1005f86f4 */

byte * thunk_FUN_1005f86f4(byte *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar13 = *(long *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar13 + -8);
  uVar16 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar1 = (uVar16 + 1 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  uVar17 = (uVar16 + 0x21 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  if (uVar17 <= uVar1) {
    uVar17 = uVar1;
  }
  lVar10 = lVar10 + 7;
  uVar1 = (lVar10 + (uVar16 + 0x31 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar17) {
    uVar1 = uVar17;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if ((7 < (uint)uVar16 || (*(uint *)(lVar15 + 0x50) & 0x100000) != 0) || 0x18 < uVar1 + 1) {
    lVar10 = *(long *)param_2;
    *(long *)param_1 = lVar10;
    _swift_retain();
    return (byte *)(lVar10 + ((ulong)((uint)uVar16 & 0xf8 ^ 0x1f8) & uVar16 + 0x10));
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar5;
  if (3 < bVar5) {
    uVar14 = (uint)uVar1;
    uVar2 = 4;
    if (uVar14 < 4) {
      uVar2 = uVar14;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1005f8860;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (uVar14 < 4) {
      uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar14 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
LAB_1005f8860:
  uVar17 = ~uVar16;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar15 + 0x10))
                ((ulong)(param_1 + uVar16 + 1) & uVar17,(ulong)((long)param_2 + uVar16 + 1) & uVar17
                 ,lVar13);
      param_1[uVar1] = 0;
    }
    else {
      if (uVar8 != 1) {
LAB_1005f8938:
        pbVar6 = _memcpy(param_1,param_2,uVar1 + 1);
        return pbVar6;
      }
      *param_1 = (byte)*param_2;
      param_1[1] = *(byte *)((long)param_2 + 1);
      puVar7 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      *puVar7 = *puVar9;
      uVar11 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = *(undefined1 *)(puVar9 + 3);
      _swift_bridgeObjectRetain();
      FUN_1005e4618(uVar11,uVar3,uVar4);
      puVar7[1] = uVar11;
      puVar7[2] = uVar3;
      *(undefined1 *)(puVar7 + 3) = uVar4;
      (**(code **)(lVar15 + 0x10))
                ((long)(puVar7 + 1) + uVar16 + 0x11 & uVar17,
                 (long)(puVar9 + 1) + uVar16 + 0x11 & uVar17,lVar13);
      param_1[uVar1] = 1;
    }
  }
  else if (uVar8 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar9 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar11 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = *(undefined1 *)(puVar7 + 2);
    FUN_1005e4618(uVar11,uVar3,uVar4);
    *puVar9 = uVar11;
    puVar9[1] = uVar3;
    *(undefined1 *)(puVar9 + 2) = uVar4;
    puVar7 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar7 = *puVar9;
    uVar11 = puVar9[1];
    uVar4 = *(undefined1 *)(puVar9 + 2);
    _swift_bridgeObjectRetain();
    FUN_1005f5ba4(uVar11,uVar4);
    puVar7[1] = uVar11;
    *(undefined1 *)(puVar7 + 2) = uVar4;
    uVar12 = (long)(puVar7 + 1) + uVar16 + 9 & uVar17;
    uVar17 = (long)(puVar9 + 1) + uVar16 + 9 & uVar17;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar17,lVar13);
    uVar11 = *(undefined8 *)(lVar10 + uVar17 & 0xfffffffffffffff8);
    _swift_errorRetain(uVar11);
    *(undefined8 *)(lVar10 + uVar12 & 0xfffffffffffffff8) = uVar11;
    param_1[uVar1] = 2;
  }
  else {
    if (uVar8 != 3) goto LAB_1005f8938;
    uVar11 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar11);
    *(undefined8 *)param_1 = uVar11;
    param_1[uVar1] = 3;
  }
  return param_1;
}



/* Address: 0x1005f86f4 | FUN_1005f86f4 */

byte * FUN_1005f86f4(byte *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar13 = *(long *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar13 + -8);
  uVar16 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  lVar10 = *(long *)(lVar15 + 0x40);
  uVar1 = (uVar16 + 1 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  uVar17 = (uVar16 + 0x21 & (uVar16 ^ 0xffffffffffffffff)) + lVar10;
  if (uVar17 <= uVar1) {
    uVar17 = uVar1;
  }
  lVar10 = lVar10 + 7;
  uVar1 = (lVar10 + (uVar16 + 0x31 & (uVar16 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar17) {
    uVar1 = uVar17;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if ((7 < (uint)uVar16 || (*(uint *)(lVar15 + 0x50) & 0x100000) != 0) || 0x18 < uVar1 + 1) {
    lVar10 = *(long *)param_2;
    *(long *)param_1 = lVar10;
    _swift_retain();
    return (byte *)(lVar10 + ((ulong)((uint)uVar16 & 0xf8 ^ 0x1f8) & uVar16 + 0x10));
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar5;
  if (3 < bVar5) {
    uVar14 = (uint)uVar1;
    uVar2 = 4;
    if (uVar14 < 4) {
      uVar2 = uVar14;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1005f8860;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (uVar14 < 4) {
      uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar14 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
LAB_1005f8860:
  uVar17 = ~uVar16;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar15 + 0x10))
                ((ulong)(param_1 + uVar16 + 1) & uVar17,(ulong)((long)param_2 + uVar16 + 1) & uVar17
                 ,lVar13);
      param_1[uVar1] = 0;
    }
    else {
      if (uVar8 != 1) {
LAB_1005f8938:
        pbVar6 = _memcpy(param_1,param_2,uVar1 + 1);
        return pbVar6;
      }
      *param_1 = (byte)*param_2;
      param_1[1] = *(byte *)((long)param_2 + 1);
      puVar7 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      *puVar7 = *puVar9;
      uVar11 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = *(undefined1 *)(puVar9 + 3);
      _swift_bridgeObjectRetain();
      FUN_1005e4618(uVar11,uVar3,uVar4);
      puVar7[1] = uVar11;
      puVar7[2] = uVar3;
      *(undefined1 *)(puVar7 + 3) = uVar4;
      (**(code **)(lVar15 + 0x10))
                ((long)(puVar7 + 1) + uVar16 + 0x11 & uVar17,
                 (long)(puVar9 + 1) + uVar16 + 0x11 & uVar17,lVar13);
      param_1[uVar1] = 1;
    }
  }
  else if (uVar8 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar9 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar11 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = *(undefined1 *)(puVar7 + 2);
    FUN_1005e4618(uVar11,uVar3,uVar4);
    *puVar9 = uVar11;
    puVar9[1] = uVar3;
    *(undefined1 *)(puVar9 + 2) = uVar4;
    puVar7 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar7 = *puVar9;
    uVar11 = puVar9[1];
    uVar4 = *(undefined1 *)(puVar9 + 2);
    _swift_bridgeObjectRetain();
    FUN_1005f5ba4(uVar11,uVar4);
    puVar7[1] = uVar11;
    *(undefined1 *)(puVar7 + 2) = uVar4;
    uVar12 = (long)(puVar7 + 1) + uVar16 + 9 & uVar17;
    uVar17 = (long)(puVar9 + 1) + uVar16 + 9 & uVar17;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar17,lVar13);
    uVar11 = *(undefined8 *)(lVar10 + uVar17 & 0xfffffffffffffff8);
    _swift_errorRetain(uVar11);
    *(undefined8 *)(lVar10 + uVar12 & 0xfffffffffffffff8) = uVar11;
    param_1[uVar1] = 2;
  }
  else {
    if (uVar8 != 3) goto LAB_1005f8938;
    uVar11 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar11);
    *(undefined8 *)param_1 = uVar11;
    param_1[uVar1] = 3;
  }
  return param_1;
}



/* Address: 0x1005f8a74 | FUN_1005f8a74 */

uint FUN_1005f8a74(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40);
  uVar1 = (uVar8 + 1 & (uVar8 ^ 0xffffffffffffffff)) + lVar6;
  uVar2 = (uVar8 + 0x21 & (uVar8 ^ 0xffffffffffffffff)) + lVar6;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = (lVar6 + (uVar8 + 0x31 & (uVar8 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar3;
  if (3 < bVar3) {
    uVar7 = (uint)uVar1;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
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
    uVar4 = uVar5 | bVar3 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 4;
  }
  return uVar4;
}



/* Address: 0x1005f8b4c | FUN_1005f8b4c */

void FUN_1005f8b4c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar5 = *(long *)(lVar5 + 0x40);
  uVar1 = (uVar6 + 1 & (uVar6 ^ 0xffffffffffffffff)) + lVar5;
  uVar2 = (uVar6 + 0x21 & (uVar6 ^ 0xffffffffffffffff)) + lVar5;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = (lVar5 + (uVar6 + 0x31 & (uVar6 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (param_2 < 4) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
  }
  else {
    param_2 = param_2 - 4;
    uVar7 = (uint)uVar1;
    if (uVar7 < 4) {
      *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + '\x04';
      if (uVar7 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar1);
        uVar4 = (undefined2)uVar3;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar1) = 4;
      _bzero(param_1,uVar1);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1005f8c58 | thunk_FUN_1005f8c6c */

void thunk_FUN_1005f8c6c(void)

{
  FUN_1005f8c6c();
  return;
}



/* Address: 0x1005f8c5c | FUN_1005f8c5c */

void FUN_1005f8c5c(undefined8 *param_1)

{
  FUN_10000cae0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1005f8c6c | FUN_1005f8c6c */

undefined8 * FUN_1005f8c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1005e4618(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1005f8cb4 | FUN_1005f8cb4 */

undefined8 * FUN_1005f8cb4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1005e4618(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10000cae0(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1005f8d08 | FUN_1005f8d08 */

undefined8 * FUN_1005f8d08(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10000cae0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1005f8d4c | FUN_1005f8d4c */

void FUN_1005f8d4c(void)

{
  FUN_1005f98e0();
  return;
}



/* Address: 0x1005f8d58 | FUN_1005f8d58 */

long * FUN_1005f8d58(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = *(ulong *)(lVar4 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar3 + 1) {
    uVar5 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar3;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f8e38;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f8e38:
  if (uVar5 == 1) {
    lVar4 = *(long *)param_2;
    _swift_errorRetain(lVar4);
    *param_1 = lVar4;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar5 != 0) {
      plVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return plVar2;
    }
    (**(code **)(lVar4 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1005f8e9c | FUN_1005f8e9c */

void FUN_1005f8e9c(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f8f28;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f8f28:
  if (uVar5 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
    return;
  }
  if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005f8f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  return;
}



/* Address: 0x1005f8f48 | FUN_1005f8f48 */

undefined8 * FUN_1005f8f48(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f8fe4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f8fe4:
  if (uVar5 == 1) {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *param_1 = uVar7;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    (**(code **)(lVar3 + 0x10))();
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x1005f904c | FUN_1005f904c */

uint * FUN_1005f904c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar8 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005f90f8;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005f90f8:
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005f91a0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005f91a0:
  if (uVar4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *(undefined8 *)param_1 = uVar7;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1005f9210 | FUN_1005f9210 */

undefined8 * FUN_1005f9210(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f92a8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f92a8:
  if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x1005f92f8 | FUN_1005f92f8 */

uint * FUN_1005f92f8(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005f93a0;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005f93a0:
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005f9454;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005f9454:
  if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1005f94b8 | FUN_1005f94b8 */

int FUN_1005f94b8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1005f9560;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1005f9560;
      goto LAB_1005f94ec;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1005f94ec:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_1005f9560:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1005f95bc | FUN_1005f95bc */

void FUN_1005f95bc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  sVar1 = uVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfe) {
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
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
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x1005f9760 | FUN_1005f9760 */

uint FUN_1005f9760(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x1005f97f4 | FUN_1005f97f4 */

void FUN_1005f97f4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (sVar3 < 9) {
    sVar3 = 8;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 2;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1005f98bc | FUN_1005f98bc */

void FUN_1005f98bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f98c8 | FUN_1005f98c8 */

void FUN_1005f98c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f98d4 | FUN_1005f98d4 */

void FUN_1005f98d4(void)

{
  FUN_1005f98e0();
  return;
}



/* Address: 0x1005f98e0 | FUN_1005f98e0 */

void FUN_1005f98e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uStack_28 = param_4;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x1005f994c | FUN_1005f994c */

long * FUN_1005f994c(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar5 + 0x40);
  if (uVar4 < 0x12) {
    uVar4 = 0x11;
  }
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar4 + 1) {
    uVar6 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    _swift_retain();
    return (long *)(lVar5 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar4;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1005f9a30;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1005f9a30:
  if (uVar6 == 1) {
    lVar5 = *(long *)param_2;
    lVar1 = *(long *)(param_2 + 2);
    uVar6 = param_2[4];
    FUN_1005e4618(lVar5,lVar1,(byte)uVar6);
    *param_1 = lVar5;
    param_1[1] = lVar1;
    *(byte *)(param_1 + 2) = (byte)uVar6;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar6 != 0) {
      plVar3 = _memcpy(param_1,param_2,uVar4 + 1);
      return plVar3;
    }
    (**(code **)(lVar5 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x1005f9aac | FUN_1005f9aac */

void FUN_1005f9aac(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x12) {
    uVar4 = 0x11;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f9b38;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f9b38:
  if (uVar5 == 1) {
    FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
    return;
  }
  if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005f9b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  return;
}



/* Address: 0x1005f9b60 | FUN_1005f9b60 */

undefined8 * FUN_1005f9b60(undefined8 *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 0x12) {
    uVar6 = 0x11;
  }
  bVar3 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar6;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1005f9c00;
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
    uVar7 = uVar8 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1005f9c00:
  if (uVar7 == 1) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar7 = param_2[4];
    FUN_1005e4618(uVar1,uVar2,(byte)uVar7);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(byte *)(param_1 + 2) = (byte)uVar7;
    *(undefined1 *)((long)param_1 + uVar6) = 1;
  }
  else {
    if (uVar7 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar6 + 1);
      return puVar4;
    }
    (**(code **)(lVar5 + 0x10))();
    *(undefined1 *)((long)param_1 + uVar6) = 0;
  }
  return param_1;
}



/* Address: 0x1005f9c80 | FUN_1005f9c80 */

uint * FUN_1005f9c80(uint *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar8 + -8);
  uVar5 = *(ulong *)(lVar9 + 0x40);
  if (uVar5 < 0x12) {
    uVar5 = 0x11;
  }
  bVar3 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar3;
  uVar10 = (uint)uVar5;
  if (1 < bVar3) {
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1005f9d2c;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1005f9d2c:
  if (uVar6 == 1) {
    FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar9 + 8))(param_1,lVar8);
  }
  bVar3 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar3;
  if (1 < bVar3) {
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1005f9ddc;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1005f9ddc:
  if (uVar6 == 1) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar6 = param_2[4];
    FUN_1005e4618(uVar1,uVar2,(byte)uVar6);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(byte *)(param_1 + 4) = (byte)uVar6;
    *(byte *)((long)param_1 + uVar5) = 1;
  }
  else {
    if (uVar6 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar4;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar5) = 0;
  }
  return param_1;
}



/* Address: 0x1005f9e5c | FUN_1005f9e5c */

undefined8 * FUN_1005f9e5c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x12) {
    uVar4 = 0x11;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1005f9ef4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1005f9ef4:
  if (uVar5 == 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    *(byte *)(param_1 + 2) = (byte)param_2[4];
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x1005f9f4c | FUN_1005f9f4c */

uint * FUN_1005f9f4c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x12) {
    uVar3 = 0x11;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005f9ff4;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005f9ff4:
  if (uVar4 == 1) {
    FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1005fa0b0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1005fa0b0:
  if (uVar4 == 1) {
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    *(byte *)(param_1 + 4) = (byte)param_2[4];
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1005fa11c | FUN_1005fa11c */

int FUN_1005fa11c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar5 < 0x12) {
    uVar5 = 0x11;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1005fa1c4;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1005fa1c4;
      goto LAB_1005fa150;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1005fa150:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_1005fa1c4:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1005fa220 | FUN_1005fa220 */

void FUN_1005fa220(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar4 < 0x12) {
    uVar4 = 0x11;
  }
  sVar1 = uVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfe) {
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
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
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x1005fa3c4 | FUN_1005fa3c4 */

uint FUN_1005fa3c4(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  if (uVar4 < 0x12) {
    uVar4 = 0x11;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
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
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x1005fa458 | FUN_1005fa458 */

void FUN_1005fa458(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (sVar3 < 0x12) {
    sVar3 = 0x11;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 2;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1005fa520 | FUN_1005fa520 */

void FUN_1005fa520(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[3];
  if (0xfffffffe < uVar1) {
    FUN_10000cae0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
    _swift_errorRelease(uVar1);
    return;
  }
  return;
}



/* Address: 0x1005fa568 | FUN_1005fa568 */

undefined8 * FUN_1005fa568(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[3];
  if (uVar2 < 0xffffffff) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  else {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar1 = *(undefined1 *)(param_2 + 2);
    FUN_1005e4618(uVar3,uVar4,uVar1);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 2) = uVar1;
    _swift_errorRetain(uVar2);
    param_1[3] = uVar2;
  }
  return param_1;
}



/* Address: 0x1005fa5e0 | FUN_1005fa5e0 */

undefined8 * FUN_1005fa5e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((ulong)param_1[3] < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[3]) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar2 = *(undefined1 *)(param_2 + 2);
      FUN_1005e4618(uVar4,uVar5,uVar2);
      *param_1 = uVar4;
      param_1[1] = uVar5;
      *(undefined1 *)(param_1 + 2) = uVar2;
      uVar4 = param_2[3];
      _swift_errorRetain(uVar4);
      param_1[3] = uVar4;
      return param_1;
    }
  }
  else {
    if (0xfffffffe < (ulong)param_2[3]) {
      uVar4 = *param_2;
      uVar6 = param_2[1];
      uVar2 = *(undefined1 *)(param_2 + 2);
      FUN_1005e4618(uVar4,uVar6,uVar2);
      uVar5 = *param_1;
      uVar1 = param_1[1];
      *param_1 = uVar4;
      param_1[1] = uVar6;
      uVar3 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = uVar2;
      FUN_10000cae0(uVar5,uVar1,uVar3);
      uVar5 = param_2[3];
      _swift_errorRetain(uVar5);
      uVar4 = param_1[3];
      param_1[3] = uVar5;
      _swift_errorRelease(uVar4);
      return param_1;
    }
    FUN_10000cae0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
    _swift_errorRelease(param_1[3]);
  }
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  return param_1;
}



/* Address: 0x1005fa6d8 | FUN_1005fa6d8 */

void FUN_1005fa6d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1005fa6e4 | FUN_1005fa6e4 */

undefined8 * FUN_1005fa6e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_1[3];
  if (uVar3 < 0xffffffff) {
    uVar6 = *param_2;
    uVar5 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[3] = uVar5;
    param_1[2] = uVar7;
  }
  else {
    uVar4 = param_2[3];
    if (uVar4 < 0xffffffff) {
      FUN_10000cae0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
      _swift_errorRelease(uVar3);
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar7 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar7;
    }
    else {
      uVar1 = *(undefined1 *)(param_2 + 2);
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      uVar2 = *(undefined1 *)(param_1 + 2);
      *(undefined1 *)(param_1 + 2) = uVar1;
      FUN_10000cae0(uVar6,uVar7,uVar2);
      param_1[3] = uVar4;
      _swift_errorRelease(uVar3);
    }
  }
  return param_1;
}



/* Address: 0x1005fa798 | FUN_1005fa798 */

int FUN_1005fa798(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x1005fa7e8 | FUN_1005fa7e8 */

void FUN_1005fa7e8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 6) = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  return;
}



/* Address: 0x1005fa840 | FUN_1005fa840 */

int FUN_1005fa840(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1005fa858 | FUN_1005fa858 */

void FUN_1005fa858(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
  }
  else if (param_2 != 0) {
    param_1[3] = (ulong)(param_2 - 1);
    return;
  }
  return;
}



/* Address: 0x1005fa87c | FUN_1005fa87c */

void FUN_1005fa87c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_50 [32];
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = &DAT_100c66e40;
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_50,*(long *)(lVar1 + -8) + 0x40,&DAT_100c66e70);
    local_28 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x1005fa904 | FUN_1005fa904 */

long * FUN_1005fa904(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar7 = *(long *)(lVar4 + 0x40);
  uVar1 = (lVar7 + 7U & 0xfffffffffffffff8) + 8;
  uVar2 = uVar1;
  if (uVar1 < 0x12) {
    uVar2 = 0x11;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) == 0 && uVar1 < 0x18) {
    uVar5 = (uint)*(byte *)((long)param_2 + uVar2);
    if (1 < *(byte *)((long)param_2 + uVar2)) {
      uVar5 = (int)*param_2 + 2;
    }
    if (uVar5 == 1) {
      (**(code **)(lVar4 + 0x10))(param_1);
      uVar6 = *(undefined8 *)((long)param_2 + lVar7 + 7 & 0xfffffffffffffff8);
      _swift_errorRetain(uVar6);
      *(undefined8 *)((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8) = uVar6;
      *(undefined1 *)((long)param_1 + uVar2) = 1;
    }
    else {
      lVar4 = *param_2;
      lVar7 = param_2[1];
      lVar3 = param_2[2];
      FUN_1005e4618(lVar4,lVar7,(char)lVar3);
      *param_1 = lVar4;
      param_1[1] = lVar7;
      *(char *)(param_1 + 2) = (char)lVar3;
      *(undefined1 *)((long)param_1 + uVar2) = 0;
    }
  }
  else {
    uVar5 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005faa18 | FUN_1005faa18 */

void FUN_1005faa18(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar7 = *(long *)(lVar3 + 0x40);
  uVar1 = (lVar7 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar4 = (uint)uVar1;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      if (uVar6 == 4) {
        uVar6 = *param_1;
      }
      else {
        uVar6 = (uint)(byte)*param_1;
      }
      uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar4 & 3) << 3);
      if (3 < uVar4) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
    }
  }
  if (uVar5 == 1) {
    (**(code **)(lVar3 + 8))();
    _swift_errorRelease(*(undefined8 *)((ulong)((long)param_1 + lVar7 + 7) & 0xfffffffffffffff8));
    return;
  }
  FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
  return;
}



/* Address: 0x1005faadc | FUN_1005faadc */

undefined8 * FUN_1005faadc(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar8 = *(long *)(lVar4 + 0x40);
  uVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar1;
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if (uVar6 != 0) {
      if (uVar6 == 4) {
        uVar6 = *param_2;
      }
      else {
        uVar6 = (uint)(byte)*param_2;
      }
      uVar5 = uVar6 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
      if (3 < uVar9) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
    }
  }
  if (uVar5 != 1) {
    uVar7 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar6 = param_2[4];
    FUN_1005e4618(uVar7,uVar2,(byte)uVar6);
    *param_1 = uVar7;
    param_1[1] = uVar2;
    *(byte *)(param_1 + 2) = (byte)uVar6;
  }
  else {
    (**(code **)(lVar4 + 0x10))(param_1);
    uVar7 = *(undefined8 *)((ulong)((long)param_2 + lVar8 + 7) & 0xfffffffffffffff8);
    _swift_errorRetain(uVar7);
    *(undefined8 *)((long)param_1 + lVar8 + 7 & 0xfffffffffffffff8) = uVar7;
  }
  *(bool *)((long)param_1 + uVar1) = uVar5 == 1;
  return param_1;
}


