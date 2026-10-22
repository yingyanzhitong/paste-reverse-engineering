/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009f2260 | FUN_1009f2260 */

void FUN_1009f2260(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar6 = (ulong)*(uint *)(*(long *)(puVar4 + -8) + 0x50) & 0xf8 | 7;
  uVar5 = *(ulong *)(*(long *)(puVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar6 = (lVar3 + uVar6 & (uVar6 ^ 0xffffffffffffffff)) + uVar5 + 1;
  if (uVar6 < uVar5 + 1) {
    uVar6 = uVar5 + 1;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar6) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar7 = (uint)uVar6;
    if (uVar7 < 4) {
      *(char *)((long)param_1 + uVar6) = (char)(param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + '\x02';
      if (uVar7 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar6);
        uVar2 = (undefined2)uVar1;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar6) = 2;
      _bzero(param_1,uVar6);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1009f2388 | FUN_1009f2388 */

void FUN_1009f2388(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009f2394 | FUN_1009f2394 */

void FUN_1009f2394(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1009f2388(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1009f2400 | FUN_1009f2400 */

long * FUN_1009f2400(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar15 = *(long *)(puVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  uVar11 = *(ulong *)(lVar15 + 0x40);
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  uVar1 = (lVar16 + uVar8 & (uVar8 ^ 0xffffffffffffffff)) + uVar11 + 1;
  if (uVar1 < uVar11 + 1) {
    uVar1 = uVar11 + 1;
  }
  uVar9 = *(uint *)(lVar17 + 0x50) & 0xf8 | (uint)uVar8;
  if ((uVar9 != 7 || ((*(uint *)(lVar17 + 0x50) | *(uint *)(lVar15 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar1 + 1) {
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + ((ulong)uVar9 + 0x10 & ((ulong)uVar9 ^ 0xffffffffffffffff)));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar9 = (uint)bVar2;
  uVar13 = (uint)uVar11;
  if (1 < bVar2) {
    uVar14 = (uint)uVar1;
    uVar10 = 4;
    if (uVar14 < 4) {
      uVar10 = uVar14;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto joined_r0x0001009f254c;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar14 < 4) {
      uVar9 = (uVar9 | bVar2 - 2 << (ulong)((uVar14 & 3) << 3)) + 2;
    }
    else {
      uVar9 = uVar9 + 2;
    }
  }
joined_r0x0001009f254c:
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar5;
    }
    (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar3);
    puVar6 = (uint *)((ulong)((long)param_2 + lVar16 + 7) & 0xfffffffffffffff8);
    bVar2 = *(byte *)((long)puVar6 + uVar11);
    uVar9 = (uint)bVar2;
    if (1 < bVar2) {
      uVar10 = 4;
      if (uVar13 < 4) {
        uVar10 = uVar13;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1009f2690;
        uVar10 = (uint)(byte)*puVar6;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar6;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar6;
      }
      else {
        uVar10 = *puVar6;
      }
      uVar9 = uVar10 | bVar2 - 2 << (ulong)((uVar13 & 3) << 3);
      if (3 < uVar13) {
        uVar9 = uVar10;
      }
      uVar9 = uVar9 + 2;
    }
LAB_1009f2690:
    puVar12 = (undefined8 *)((long)param_1 + lVar16 + 7 & 0xfffffffffffffff8);
    if (uVar9 != 1) {
      (**(code **)(lVar15 + 0x10))(puVar12,puVar6,puVar4);
    }
    else {
      *puVar12 = *(undefined8 *)puVar6;
      _swift_retain();
    }
    *(bool *)((long)puVar12 + uVar11) = uVar9 == 1;
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar11);
  uVar9 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_1009f26e0:
    if (uVar9 != 1) {
LAB_1009f2714:
      (**(code **)(lVar15 + 0x10))(param_1,param_2,puVar4);
      uVar7 = 0;
      goto LAB_1009f272c;
    }
  }
  else {
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1009f26e0;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (3 < uVar13) {
      uVar9 = uVar9 + 2;
      goto LAB_1009f26e0;
    }
    if ((uVar9 | bVar2 - 2 << (ulong)((uVar13 & 3) << 3)) != 0xffffffff) goto LAB_1009f2714;
  }
  *param_1 = *(long *)param_2;
  _swift_retain();
  uVar7 = 1;
LAB_1009f272c:
  *(undefined1 *)((long)param_1 + uVar11) = uVar7;
  *(undefined1 *)((long)param_1 + uVar1) = 1;
  return param_1;
}



/* Address: 0x1009f2758 | FUN_1009f2758 */

void FUN_1009f2758(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar14 + 0x40);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar12 = *(long *)(puVar5 + -8);
  uVar7 = (ulong)*(uint *)(lVar12 + 0x50) & 0xf8 | 7;
  uVar1 = lVar13 + uVar7;
  uVar9 = *(ulong *)(lVar12 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar2 = (uVar1 & (uVar7 ^ 0xffffffffffffffff)) + uVar9 + 1;
  if (uVar2 < uVar9 + 1) {
    uVar2 = uVar9 + 1;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar8 = (uint)uVar2;
    uVar11 = 4;
    if (uVar8 < 4) {
      uVar11 = uVar8;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1009f2864;
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1009f2864:
  uVar11 = (uint)uVar9;
  if (uVar10 == 1) {
    bVar3 = *(byte *)((long)param_1 + uVar9);
    uVar10 = (uint)bVar3;
    if (1 < bVar3) {
      uVar8 = 4;
      if (uVar11 < 4) {
        uVar8 = uVar11;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1009f29a4;
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
      uVar10 = uVar8 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3);
      if (3 < uVar11) {
        uVar10 = uVar8;
      }
      uVar10 = uVar10 + 2;
    }
LAB_1009f29a4:
    if (uVar10 != 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
      goto LAB_1009f29d0;
    }
    uVar6 = *(undefined8 *)param_1;
    goto LAB_1009f29b0;
  }
  if (uVar10 != 0) {
    return;
  }
  (**(code **)(lVar14 + 8))(param_1,lVar4);
  param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar7);
  bVar3 = *(byte *)((long)param_1 + uVar9);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1009f296c;
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
    uVar10 = uVar8 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1009f296c:
  if (uVar10 != 1) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
LAB_1009f29d0:
                    /* WARNING: Could not recover jumptable at 0x0001009f29e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,puVar5);
    return;
  }
  uVar6 = *(undefined8 *)param_1;
LAB_1009f29b0:
  _swift_release(uVar6);
  return;
}



/* Address: 0x1009f29ec | FUN_1009f29ec */

undefined8 * FUN_1009f29ec(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar15 = *(long *)(puVar5 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  uVar1 = lVar14 + uVar8;
  uVar12 = *(ulong *)(lVar15 + 0x40);
  if (uVar12 < 9) {
    uVar12 = 8;
  }
  uVar2 = (uVar1 & (uVar8 ^ 0xffffffffffffffff)) + uVar12 + 1;
  if (uVar2 < uVar12 + 1) {
    uVar2 = uVar12 + 1;
  }
  bVar3 = *(byte *)((long)param_2 + uVar2);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar2;
    uVar11 = 4;
    if (uVar9 < 4) {
      uVar11 = uVar9;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1009f2afc;
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
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1009f2afc:
  uVar11 = (uint)uVar12;
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      puVar13 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar13;
    }
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar4);
    puVar13 = (undefined8 *)(uVar1 + (long)param_1 & ~uVar8);
    puVar6 = (uint *)((ulong)(uVar1 + (long)param_2) & ~uVar8);
    bVar3 = *(byte *)((long)puVar6 + uVar12);
    uVar10 = (uint)bVar3;
    if (1 < bVar3) {
      uVar9 = 4;
      if (uVar11 < 4) {
        uVar9 = uVar11;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_1009f2c54;
        uVar9 = (uint)(byte)*puVar6;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar6;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar6;
      }
      else {
        uVar9 = *puVar6;
      }
      uVar10 = uVar9 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3);
      if (3 < uVar11) {
        uVar10 = uVar9;
      }
      uVar10 = uVar10 + 2;
    }
LAB_1009f2c54:
    if (uVar10 != 1) {
      (**(code **)(lVar15 + 0x10))(puVar13,puVar6,puVar5);
    }
    else {
      *puVar13 = *(undefined8 *)puVar6;
      _swift_retain();
    }
    *(bool *)((long)puVar13 + uVar12) = uVar10 == 1;
    *(undefined1 *)((long)param_1 + uVar2) = 0;
    return param_1;
  }
  bVar3 = *(byte *)((long)param_2 + uVar12);
  uVar10 = (uint)bVar3;
  if (bVar3 < 2) {
LAB_1009f2c18:
    if (uVar10 == 1) {
LAB_1009f2c20:
      *param_1 = *(undefined8 *)param_2;
      _swift_retain();
      uVar7 = 1;
      goto LAB_1009f2ccc;
    }
  }
  else {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1009f2c18;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar9 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar9 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (3 < uVar11) {
      uVar10 = uVar10 + 2;
      goto LAB_1009f2c18;
    }
    if ((uVar10 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3)) == 0xffffffff) goto LAB_1009f2c20;
  }
  (**(code **)(lVar15 + 0x10))(param_1,param_2,puVar5);
  uVar7 = 0;
LAB_1009f2ccc:
  *(undefined1 *)((long)param_1 + uVar12) = uVar7;
  *(undefined1 *)((long)param_1 + uVar2) = 1;
  return param_1;
}



/* Address: 0x1009f2cf8 | FUN_1009f2cf8 */

uint * FUN_1009f2cf8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar17 = *(long *)(puVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar17 + 0x50) & 0xf8 | 7;
  uVar1 = lVar15 + uVar8;
  uVar13 = *(ulong *)(lVar17 + 0x40);
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  uVar2 = (uVar1 & (uVar8 ^ 0xffffffffffffffff)) + uVar13 + 1;
  if (uVar2 < uVar13 + 1) {
    uVar2 = uVar13 + 1;
  }
  bVar7 = *(byte *)((long)param_1 + uVar2);
  uVar12 = (uint)bVar7;
  uVar11 = (uint)uVar2;
  if (1 < bVar7) {
    uVar16 = 4;
    if (uVar11 < 4) {
      uVar16 = uVar11;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_1009f2e28;
      uVar12 = (uint)(byte)*param_1;
    }
    else if (uVar16 == 2) {
      uVar12 = (uint)(ushort)*param_1;
    }
    else if (uVar16 == 3) {
      uVar12 = (uint)(uint3)*param_1;
    }
    else {
      uVar12 = *param_1;
    }
    if (uVar11 < 4) {
      uVar12 = (uVar12 | bVar7 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar12 = uVar12 + 2;
    }
  }
LAB_1009f2e28:
  uVar8 = ~uVar8;
  uVar16 = (uint)uVar13;
  if (uVar12 == 1) {
    bVar7 = *(byte *)((long)param_1 + uVar13);
    uVar12 = (uint)bVar7;
    if (bVar7 < 2) {
LAB_1009f2f10:
      if (uVar12 == 1) {
LAB_1009f2f18:
        uVar6 = *(undefined8 *)param_1;
        goto LAB_1009f2f4c;
      }
    }
    else {
      uVar10 = 4;
      if (uVar16 < 4) {
        uVar10 = uVar16;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1009f2f10;
        uVar12 = (uint)(byte)*param_1;
      }
      else if (uVar10 == 2) {
        uVar12 = (uint)(ushort)*param_1;
      }
      else if (uVar10 == 3) {
        uVar12 = (uint)(uint3)*param_1;
      }
      else {
        uVar12 = *param_1;
      }
      if (3 < uVar16) {
        uVar12 = uVar12 + 2;
        goto LAB_1009f2f10;
      }
      if ((uVar12 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3)) == 0xffffffff) goto LAB_1009f2f18;
    }
    pcVar9 = *(code **)(lVar17 + 8);
    puVar5 = param_1;
LAB_1009f2f88:
    (*pcVar9)(puVar5,puVar4);
  }
  else if (uVar12 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar3);
    puVar5 = (uint *)((ulong)(uVar1 + (long)param_1) & uVar8);
    bVar7 = *(byte *)((long)puVar5 + uVar13);
    uVar12 = (uint)bVar7;
    if (1 < bVar7) {
      uVar10 = 4;
      if (uVar16 < 4) {
        uVar10 = uVar16;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1009f2f40;
        uVar10 = (uint)(byte)*puVar5;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar5;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar5;
      }
      else {
        uVar10 = *puVar5;
      }
      uVar12 = uVar10 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar12 = uVar10;
      }
      uVar12 = uVar12 + 2;
    }
LAB_1009f2f40:
    if (uVar12 != 1) {
      pcVar9 = *(code **)(lVar17 + 8);
      goto LAB_1009f2f88;
    }
    uVar6 = *(undefined8 *)puVar5;
LAB_1009f2f4c:
    _swift_release(uVar6);
  }
  bVar7 = *(byte *)((long)param_2 + uVar2);
  uVar12 = (uint)bVar7;
  if (1 < bVar7) {
    uVar10 = 4;
    if (uVar11 < 4) {
      uVar10 = uVar11;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto joined_r0x0001009f3000;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar11 < 4) {
      uVar12 = (uVar12 | bVar7 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar12 = uVar12 + 2;
    }
  }
joined_r0x0001009f3000:
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar5;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar3);
    puVar14 = (undefined8 *)((ulong)(uVar1 + (long)param_1) & uVar8);
    puVar5 = (uint *)((ulong)(uVar1 + (long)param_2) & uVar8);
    bVar7 = *(byte *)((long)puVar5 + uVar13);
    uVar12 = (uint)bVar7;
    if (1 < bVar7) {
      uVar11 = 4;
      if (uVar16 < 4) {
        uVar11 = uVar16;
      }
      if ((int)uVar11 < 2) {
        if (uVar11 == 0) goto LAB_1009f3174;
        uVar11 = (uint)(byte)*puVar5;
      }
      else if (uVar11 == 2) {
        uVar11 = (uint)(ushort)*puVar5;
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*puVar5;
      }
      else {
        uVar11 = *puVar5;
      }
      uVar12 = uVar11 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar12 = uVar11;
      }
      uVar12 = uVar12 + 2;
    }
LAB_1009f3174:
    if (uVar12 != 1) {
      (**(code **)(lVar17 + 0x10))(puVar14,puVar5,puVar4);
    }
    else {
      *puVar14 = *(undefined8 *)puVar5;
      _swift_retain();
    }
    *(bool *)((long)puVar14 + uVar13) = uVar12 == 1;
    *(byte *)((long)param_1 + uVar2) = 0;
    return param_1;
  }
  bVar7 = *(byte *)((long)param_2 + uVar13);
  uVar12 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_1009f3138:
    if (uVar12 == 1) {
LAB_1009f3140:
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      _swift_retain();
      bVar7 = 1;
      goto LAB_1009f31ec;
    }
  }
  else {
    uVar11 = 4;
    if (uVar16 < 4) {
      uVar11 = uVar16;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1009f3138;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (3 < uVar16) {
      uVar12 = uVar12 + 2;
      goto LAB_1009f3138;
    }
    if ((uVar12 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3)) == 0xffffffff) goto LAB_1009f3140;
  }
  (**(code **)(lVar17 + 0x10))(param_1,param_2,puVar4);
  bVar7 = 0;
LAB_1009f31ec:
  *(byte *)((long)param_1 + uVar13) = bVar7;
  *(byte *)((long)param_1 + uVar2) = 1;
  return param_1;
}



/* Address: 0x1009f3218 | FUN_1009f3218 */

undefined8 * FUN_1009f3218(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar15 = *(long *)(puVar5 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  uVar1 = lVar14 + uVar8;
  uVar12 = *(ulong *)(lVar15 + 0x40);
  if (uVar12 < 9) {
    uVar12 = 8;
  }
  uVar2 = (uVar1 & (uVar8 ^ 0xffffffffffffffff)) + uVar12 + 1;
  if (uVar2 < uVar12 + 1) {
    uVar2 = uVar12 + 1;
  }
  bVar3 = *(byte *)((long)param_2 + uVar2);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar2;
    uVar11 = 4;
    if (uVar9 < 4) {
      uVar11 = uVar9;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1009f3328;
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
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1009f3328:
  uVar11 = (uint)uVar12;
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      puVar13 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar13;
    }
    (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar4);
    puVar13 = (undefined8 *)(uVar1 + (long)param_1 & ~uVar8);
    puVar6 = (uint *)((ulong)(uVar1 + (long)param_2) & ~uVar8);
    bVar3 = *(byte *)((long)puVar6 + uVar12);
    uVar10 = (uint)bVar3;
    if (1 < bVar3) {
      uVar9 = 4;
      if (uVar11 < 4) {
        uVar9 = uVar11;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_1009f347c;
        uVar9 = (uint)(byte)*puVar6;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar6;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar6;
      }
      else {
        uVar9 = *puVar6;
      }
      uVar10 = uVar9 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3);
      if (3 < uVar11) {
        uVar10 = uVar9;
      }
      uVar10 = uVar10 + 2;
    }
LAB_1009f347c:
    if (uVar10 != 1) {
      (**(code **)(lVar15 + 0x20))(puVar13,puVar6,puVar5);
    }
    else {
      *puVar13 = *(undefined8 *)puVar6;
    }
    *(bool *)((long)puVar13 + uVar12) = uVar10 == 1;
    *(undefined1 *)((long)param_1 + uVar2) = 0;
    return param_1;
  }
  bVar3 = *(byte *)((long)param_2 + uVar12);
  uVar10 = (uint)bVar3;
  if (bVar3 < 2) {
LAB_1009f3444:
    if (uVar10 == 1) {
LAB_1009f344c:
      *param_1 = *(undefined8 *)param_2;
      uVar7 = 1;
      goto LAB_1009f34f0;
    }
  }
  else {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1009f3444;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar9 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar9 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (3 < uVar11) {
      uVar10 = uVar10 + 2;
      goto LAB_1009f3444;
    }
    if ((uVar10 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3)) == 0xffffffff) goto LAB_1009f344c;
  }
  (**(code **)(lVar15 + 0x20))(param_1,param_2,puVar5);
  uVar7 = 0;
LAB_1009f34f0:
  *(undefined1 *)((long)param_1 + uVar12) = uVar7;
  *(undefined1 *)((long)param_1 + uVar2) = 1;
  return param_1;
}



/* Address: 0x1009f351c | FUN_1009f351c */

uint * FUN_1009f351c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar17 = *(long *)(puVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar17 + 0x50) & 0xf8 | 7;
  uVar1 = lVar15 + uVar8;
  uVar13 = *(ulong *)(lVar17 + 0x40);
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  uVar2 = (uVar1 & (uVar8 ^ 0xffffffffffffffff)) + uVar13 + 1;
  if (uVar2 < uVar13 + 1) {
    uVar2 = uVar13 + 1;
  }
  bVar7 = *(byte *)((long)param_1 + uVar2);
  uVar12 = (uint)bVar7;
  uVar11 = (uint)uVar2;
  if (1 < bVar7) {
    uVar16 = 4;
    if (uVar11 < 4) {
      uVar16 = uVar11;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_1009f364c;
      uVar12 = (uint)(byte)*param_1;
    }
    else if (uVar16 == 2) {
      uVar12 = (uint)(ushort)*param_1;
    }
    else if (uVar16 == 3) {
      uVar12 = (uint)(uint3)*param_1;
    }
    else {
      uVar12 = *param_1;
    }
    if (uVar11 < 4) {
      uVar12 = (uVar12 | bVar7 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar12 = uVar12 + 2;
    }
  }
LAB_1009f364c:
  uVar8 = ~uVar8;
  uVar16 = (uint)uVar13;
  if (uVar12 == 1) {
    bVar7 = *(byte *)((long)param_1 + uVar13);
    uVar12 = (uint)bVar7;
    if (bVar7 < 2) {
LAB_1009f3734:
      if (uVar12 == 1) {
LAB_1009f373c:
        uVar6 = *(undefined8 *)param_1;
        goto LAB_1009f3770;
      }
    }
    else {
      uVar10 = 4;
      if (uVar16 < 4) {
        uVar10 = uVar16;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1009f3734;
        uVar12 = (uint)(byte)*param_1;
      }
      else if (uVar10 == 2) {
        uVar12 = (uint)(ushort)*param_1;
      }
      else if (uVar10 == 3) {
        uVar12 = (uint)(uint3)*param_1;
      }
      else {
        uVar12 = *param_1;
      }
      if (3 < uVar16) {
        uVar12 = uVar12 + 2;
        goto LAB_1009f3734;
      }
      if ((uVar12 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3)) == 0xffffffff) goto LAB_1009f373c;
    }
    pcVar9 = *(code **)(lVar17 + 8);
    puVar5 = param_1;
LAB_1009f37ac:
    (*pcVar9)(puVar5,puVar4);
  }
  else if (uVar12 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar3);
    puVar5 = (uint *)((ulong)(uVar1 + (long)param_1) & uVar8);
    bVar7 = *(byte *)((long)puVar5 + uVar13);
    uVar12 = (uint)bVar7;
    if (1 < bVar7) {
      uVar10 = 4;
      if (uVar16 < 4) {
        uVar10 = uVar16;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1009f3764;
        uVar10 = (uint)(byte)*puVar5;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar5;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar5;
      }
      else {
        uVar10 = *puVar5;
      }
      uVar12 = uVar10 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar12 = uVar10;
      }
      uVar12 = uVar12 + 2;
    }
LAB_1009f3764:
    if (uVar12 != 1) {
      pcVar9 = *(code **)(lVar17 + 8);
      goto LAB_1009f37ac;
    }
    uVar6 = *(undefined8 *)puVar5;
LAB_1009f3770:
    _swift_release(uVar6);
  }
  bVar7 = *(byte *)((long)param_2 + uVar2);
  uVar12 = (uint)bVar7;
  if (1 < bVar7) {
    uVar10 = 4;
    if (uVar11 < 4) {
      uVar10 = uVar11;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto joined_r0x0001009f3824;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar11 < 4) {
      uVar12 = (uVar12 | bVar7 - 2 << (ulong)((uVar11 & 3) << 3)) + 2;
    }
    else {
      uVar12 = uVar12 + 2;
    }
  }
joined_r0x0001009f3824:
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar5;
    }
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar3);
    puVar14 = (undefined8 *)((ulong)(uVar1 + (long)param_1) & uVar8);
    puVar5 = (uint *)((ulong)(uVar1 + (long)param_2) & uVar8);
    bVar7 = *(byte *)((long)puVar5 + uVar13);
    uVar12 = (uint)bVar7;
    if (1 < bVar7) {
      uVar11 = 4;
      if (uVar16 < 4) {
        uVar11 = uVar16;
      }
      if ((int)uVar11 < 2) {
        if (uVar11 == 0) goto LAB_1009f3994;
        uVar11 = (uint)(byte)*puVar5;
      }
      else if (uVar11 == 2) {
        uVar11 = (uint)(ushort)*puVar5;
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*puVar5;
      }
      else {
        uVar11 = *puVar5;
      }
      uVar12 = uVar11 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar12 = uVar11;
      }
      uVar12 = uVar12 + 2;
    }
LAB_1009f3994:
    if (uVar12 != 1) {
      (**(code **)(lVar17 + 0x20))(puVar14,puVar5,puVar4);
    }
    else {
      *puVar14 = *(undefined8 *)puVar5;
    }
    *(bool *)((long)puVar14 + uVar13) = uVar12 == 1;
    *(byte *)((long)param_1 + uVar2) = 0;
    return param_1;
  }
  bVar7 = *(byte *)((long)param_2 + uVar13);
  uVar12 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_1009f395c:
    if (uVar12 == 1) {
LAB_1009f3964:
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar7 = 1;
      goto LAB_1009f3a08;
    }
  }
  else {
    uVar11 = 4;
    if (uVar16 < 4) {
      uVar11 = uVar16;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1009f395c;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (3 < uVar16) {
      uVar12 = uVar12 + 2;
      goto LAB_1009f395c;
    }
    if ((uVar12 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3)) == 0xffffffff) goto LAB_1009f3964;
  }
  (**(code **)(lVar17 + 0x20))(param_1,param_2,puVar4);
  bVar7 = 0;
LAB_1009f3a08:
  *(byte *)((long)param_1 + uVar13) = bVar7;
  *(byte *)((long)param_1 + uVar2) = 1;
  return param_1;
}



/* Address: 0x1009f3a34 | FUN_1009f3a34 */

int FUN_1009f3a34(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar8 = (ulong)*(uint *)(*(long *)(puVar5 + -8) + 0x50) & 0xf8 | 7;
  uVar7 = *(ulong *)(*(long *)(puVar5 + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar8 = (lVar4 + uVar8 & (uVar8 ^ 0xffffffffffffffff)) + uVar7 + 1;
  if (uVar8 < uVar7 + 1) {
    uVar8 = uVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1009f3b4c;
  uVar7 = uVar8 + 1;
  uVar6 = (uint)uVar7;
  uVar2 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_1009f3b4c;
      goto LAB_1009f3ad8;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1009f3ad8:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = uVar9 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar2 = 4;
      if (uVar6 < 4) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xfe;
  }
LAB_1009f3b4c:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1009f3bb4 | FUN_1009f3bb4 */

void FUN_1009f3bb4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar7 = (ulong)*(uint *)(*(long *)(puVar5 + -8) + 0x50) & 0xf8 | 7;
  uVar6 = *(ulong *)(*(long *)(puVar5 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar7 = (lVar4 + uVar7 & (uVar7 ^ 0xffffffffffffffff)) + uVar6 + 1;
  if (uVar7 < uVar6 + 1) {
    uVar7 = uVar6 + 1;
  }
  sVar1 = uVar7 + 1;
  uVar8 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar10 = 0;
  }
  else if (uVar8 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar8 << 3 & 0x1f)) +
            1;
    bVar10 = 2;
    if (0xffff < uVar2) {
      bVar10 = 4;
    }
    if (uVar2 < 0x100) {
      bVar10 = 1 < uVar2;
    }
  }
  else {
    bVar10 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
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
      iVar9 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar9;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar9;
    }
  }
  return;
}



/* Address: 0x1009f3db8 | FUN_1009f3db8 */

void FUN_1009f3db8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009f3dc4 | FUN_1009f3dc4 */

void FUN_1009f3dc4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1009f1048();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x1009f3e4c | FUN_1009f3e4c */

long * FUN_1009f3e4c(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar9 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar10 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  uVar7 = *(ulong *)(lVar10 + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar5 = *(uint *)(lVar13 + 0x50) & 0xf8 | (uint)uVar4;
  if ((uVar5 != 7 || ((*(uint *)(lVar13 + 0x50) | *(uint *)(lVar10 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar7 + (lVar12 + uVar4 & (uVar4 ^ 0xffffffffffffffff)) + 1) {
    lVar9 = *param_2;
    *param_1 = lVar9;
    param_1 = (long *)(lVar9 + ((ulong)uVar5 + 0x10 & ((ulong)uVar5 ^ 0xffffffffffffffff)));
    goto LAB_1009f3fb4;
  }
  (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar9);
  puVar3 = (uint *)((long)param_2 + lVar12 + 7 & 0xfffffffffffffff8);
  bVar1 = *(byte *)((long)puVar3 + uVar7);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar11 = (uint)uVar7;
    uVar6 = 4;
    if (uVar11 < 4) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1009f3f98;
      uVar6 = (uint)(byte)*puVar3;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar3;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar3;
    }
    else {
      uVar6 = *puVar3;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1009f3f98:
  puVar8 = (undefined8 *)((long)param_1 + lVar12 + 7 & 0xfffffffffffffff8);
  if (uVar5 != 1) {
    (**(code **)(lVar10 + 0x10))(puVar8,puVar3,puVar2);
    *(undefined1 *)((long)puVar8 + uVar7) = 0;
    return param_1;
  }
  *puVar8 = *(undefined8 *)puVar3;
  *(undefined1 *)((long)puVar8 + uVar7) = 1;
LAB_1009f3fb4:
  _swift_retain();
  return param_1;
}



/* Address: 0x1009f3fec | FUN_1009f3fec */

void FUN_1009f3fec(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar9 + 8))();
  lVar9 = *(long *)(lVar9 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar4 = *(long *)(puVar2 + -8);
  uVar6 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  puVar3 = (uint *)(lVar9 + param_1 + uVar6 & (uVar6 ^ 0xffffffffffffffff));
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar1 = *(byte *)((long)puVar3 + uVar6);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar6;
    uVar8 = 4;
    if (uVar5 < 4) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1009f40c8;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1009f40c8:
  if (uVar7 == 1) {
    _swift_release(*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f40ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(puVar3,puVar2);
  return;
}



/* Address: 0x1009f40f0 | FUN_1009f40f0 */

long FUN_1009f40f0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x10))();
  lVar8 = *(long *)(lVar8 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar4 = *(long *)(puVar2 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  lVar8 = lVar8 + uVar5;
  puVar9 = (undefined8 *)(lVar8 + param_1 & (uVar5 ^ 0xffffffffffffffff));
  puVar3 = (uint *)(lVar8 + param_2 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1009f41dc;
      uVar7 = (uint)(byte)*puVar3;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar3;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar3;
    }
    else {
      uVar7 = *puVar3;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1009f41dc:
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))(puVar9,puVar3,puVar2);
  }
  else {
    *puVar9 = *(undefined8 *)puVar3;
    _swift_retain();
  }
  *(bool *)((long)puVar9 + uVar5) = uVar6 == 1;
  return param_1;
}



/* Address: 0x1009f4220 | FUN_1009f4220 */

long FUN_1009f4220(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x18))();
  lVar6 = *(long *)(lVar6 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar9 = *(long *)(puVar2 + -8);
  uVar3 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  lVar6 = lVar6 + uVar3;
  puVar7 = (uint *)(lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff));
  puVar8 = (uint *)(lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff));
  if (puVar7 == puVar8) {
    return param_1;
  }
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)puVar7 + uVar3);
  uVar4 = (uint)bVar1;
  uVar10 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1009f4318;
      uVar5 = (uint)(byte)*puVar7;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar7;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar7;
    }
    else {
      uVar5 = *puVar7;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1009f4318:
  if (uVar4 == 1) {
    _swift_release(*(undefined8 *)puVar7);
  }
  else {
    (**(code **)(lVar9 + 8))(puVar7,puVar2);
  }
  bVar1 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1009f43b0;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1009f43b0:
  if (uVar4 == 1) {
    *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
    *(byte *)((long)puVar7 + uVar3) = 1;
    _swift_retain();
  }
  else {
    (**(code **)(lVar9 + 0x10))(puVar7,puVar8,puVar2);
    *(byte *)((long)puVar7 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1009f4400 | FUN_1009f4400 */

long FUN_1009f4400(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x20))();
  lVar8 = *(long *)(lVar8 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar4 = *(long *)(puVar2 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  lVar8 = lVar8 + uVar5;
  puVar9 = (undefined8 *)(lVar8 + param_1 & (uVar5 ^ 0xffffffffffffffff));
  puVar3 = (uint *)(lVar8 + param_2 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)puVar3 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1009f44ec;
      uVar7 = (uint)(byte)*puVar3;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar3;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar3;
    }
    else {
      uVar7 = *puVar3;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1009f44ec:
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x20))(puVar9,puVar3,puVar2);
  }
  else {
    *puVar9 = *(undefined8 *)puVar3;
  }
  *(bool *)((long)puVar9 + uVar5) = uVar6 == 1;
  return param_1;
}



/* Address: 0x1009f452c | FUN_1009f452c */

long FUN_1009f452c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x28))();
  lVar6 = *(long *)(lVar6 + 0x40);
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  lVar9 = *(long *)(puVar2 + -8);
  uVar3 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  lVar6 = lVar6 + uVar3;
  puVar7 = (uint *)(lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff));
  puVar8 = (uint *)(lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff));
  if (puVar7 == puVar8) {
    return param_1;
  }
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)puVar7 + uVar3);
  uVar4 = (uint)bVar1;
  uVar10 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1009f4624;
      uVar5 = (uint)(byte)*puVar7;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar7;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar7;
    }
    else {
      uVar5 = *puVar7;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1009f4624:
  if (uVar4 == 1) {
    _swift_release(*(undefined8 *)puVar7);
  }
  else {
    (**(code **)(lVar9 + 8))(puVar7,puVar2);
  }
  bVar1 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1009f46bc;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1009f46bc:
  if (uVar4 != 1) {
    (**(code **)(lVar9 + 0x20))(puVar7,puVar8,puVar2);
  }
  else {
    *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
  }
  *(bool *)((long)puVar7 + uVar3) = uVar4 == 1;
  return param_1;
}



/* Address: 0x1009f4708 | FUN_1009f4708 */

uint * FUN_1009f4708(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar11 + -8);
  uVar3 = *(uint *)(lVar12 + 0x54);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar6 = *(ulong *)(*(long *)(puVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar5 = uVar3;
  if (uVar3 < 0xff) {
    uVar5 = 0xfe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar8 = (ulong)*(uint *)(*(long *)(puVar4 + -8) + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar12 + 0x40) + uVar8;
  if (param_2 < uVar5 || param_2 - uVar5 == 0) goto LAB_1009f480c;
  lVar1 = uVar6 + (uVar2 & (uVar8 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)lVar1;
  uVar7 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar10 = ((param_2 - uVar5) + ~(-1 << (ulong)(uVar7 & 0x1f)) >> (ulong)(uVar7 & 0x1f)) + 1;
    if (uVar10 < 0x100) {
      if (uVar10 < 2) goto LAB_1009f480c;
      goto LAB_1009f479c;
    }
    if (uVar10 >> 0x10 == 0) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_1009f479c:
    uVar10 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar10 != 0) {
    uVar3 = 0;
    if (uVar9 < 4) {
      uVar3 = uVar10 - 1 << (ulong)(uVar7 & 0x1f);
    }
    if (uVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if (uVar9 < 4) {
        uVar7 = uVar9;
      }
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*param_1;
      }
      else {
        uVar7 = *param_1;
      }
    }
    return (uint *)(ulong)(uVar5 + (uVar7 | uVar3) + 1);
  }
LAB_1009f480c:
  if (uVar3 < 0xfe) {
    uVar5 = (uint)*(byte *)(((ulong)(uVar2 + (long)param_1) & ~uVar8) + uVar6);
    uVar3 = 0;
    if (1 < uVar5) {
      uVar3 = (uVar5 ^ 0xff) + 1;
    }
    return (uint *)(ulong)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f4834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x30))(param_1,uVar3,lVar11);
  return param_1;
}



/* Address: 0x1009f48bc | FUN_1009f48bc */

void FUN_1009f48bc(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  size_t sVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  
  lVar14 = *(long *)(param_4 + 0x10);
  lVar16 = *(long *)(lVar14 + -8);
  uVar8 = *(uint *)(lVar16 + 0x54);
  puVar5 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar7 = *(ulong *)(*(long *)(puVar5 + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar6 = uVar8;
  if (uVar8 < 0xff) {
    uVar6 = 0xfe;
  }
  uVar9 = (ulong)*(uint *)(*(long *)(puVar5 + -8) + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar16 + 0x40) + uVar9;
  sVar1 = uVar7 + 1;
  sVar3 = (uVar2 & (uVar9 ^ 0xffffffffffffffff)) + sVar1;
  uVar11 = (uint)sVar3;
  if (param_3 < uVar6 || param_3 - uVar6 == 0) {
    bVar15 = 0;
  }
  else if (uVar11 < 4) {
    uVar12 = ((param_3 - uVar6) + ~(-1 << (ulong)(uVar11 << 3 & 0x1f)) >>
             (ulong)(uVar11 << 3 & 0x1f)) + 1;
    bVar15 = 2;
    if (0xffff < uVar12) {
      bVar15 = 4;
    }
    if (uVar12 < 0x100) {
      bVar15 = 1 < uVar12;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar12 = (uint)param_2;
  if (uVar6 < uVar12) {
    uVar12 = uVar12 + ~uVar6;
    if (uVar11 < 4) {
      iVar13 = (uVar12 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar8 = uVar12 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar4 = (undefined2)uVar8;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)uVar12;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = uVar12;
      iVar13 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar13;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar13;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (uVar12 != 0) {
      if (0xfd < uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001009f4a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar16 + 0x38))(param_1,param_2,uVar8,lVar14);
        return;
      }
      puVar10 = (uint *)(uVar2 + (long)param_1 & ~uVar9);
      if (uVar12 < 0xff) {
        *(char *)((long)puVar10 + uVar7) = -(char)param_2;
      }
      else {
        uVar6 = (uint)sVar1;
        uVar8 = 0xffffffff;
        if (uVar6 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar6 & 3) << 3));
        }
        if (uVar6 != 0) {
          uVar8 = uVar8 & uVar12 - 0xff;
          uVar11 = 4;
          if (uVar6 < 4) {
            uVar11 = uVar6;
          }
          _bzero(puVar10,sVar1);
          if ((int)uVar11 < 3) {
            if (uVar11 == 1) {
              *(char *)puVar10 = (char)uVar8;
            }
            else {
              *(short *)puVar10 = (short)uVar8;
            }
          }
          else if (uVar11 == 3) {
            *(short *)puVar10 = (short)uVar8;
            *(char *)((long)puVar10 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar10 = uVar8;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1009f4b70 | FUN_1009f4b70 */

void FUN_1009f4b70(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009f4b7c | FUN_1009f4b7c */

void FUN_1009f4b7c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8d840,param_1);
  return;
}



/* Address: 0x1009f4b8c | FUN_1009f4b8c */

void FUN_1009f4b8c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar6 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar3);
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_1000f8cac(unaff_x20 + *(int *)(param_2 + 0x24),puVar5,&DAT_100ff3c00,&DAT_100c8d460);
  FUN_1009f4ce8(param_1,lVar3 - extraout_x8_01,puVar5,lVar6,uVar7);
  return;
}



/* Address: 0x1009f4ce8 | FUN_1009f4ce8 */

void FUN_1009f4ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  puVar3 = &DAT_100ff3c00;
  FUN_1000f8b08(&DAT_100ff3c00,&DAT_100c8d460);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar2,puVar3," underlying ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  FUN_10011532c(param_3,param_1 + iVar1,&DAT_100ff3c00,&DAT_100c8d460);
  uVar5 = 0;
  FUN_1009f2388(0,param_4,param_5);
  _swift_storeEnumTagMultiPayload(param_1,uVar5,0);
  return;
}



/* Address: 0x1009f4dd8 | FUN_1009f4dd8 */

void FUN_1009f4dd8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  _swift_task_switch(FUN_1009f4df0,0,0);
  return;
}



/* Address: 0x1009f4df0 | FUN_1009f4df0 */

void FUN_1009f4df0(void)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x10);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x18);
  lVar4 = 0;
  FUN_1009f2388(0,uVar11,uVar1);
  *(long *)(unaff_x22 + 0x68) = lVar4;
  lVar12 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar12;
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar5;
  (**(code **)(lVar12 + 0x10))();
  uVar6 = uVar5;
  _swift_getEnumCaseMultiPayload(uVar5,lVar4);
  if ((int)uVar6 == 0) {
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar1,uVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    *(long *)(unaff_x22 + 0x80) = lVar4;
    puVar9 = &DAT_100ff3c00;
    FUN_1000f8b08(&DAT_100ff3c00,&DAT_100c8d460);
    lVar12 = 0;
    _swift_getTupleTypeMetadata2(0,lVar4,puVar9," underlying ",0);
    *(long *)(unaff_x22 + 0x88) = lVar12;
    iVar2 = *(int *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0x90) = lVar12;
    uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x98) = uVar6;
    pcVar10 = *(code **)(lVar12 + 0x20);
    *(code **)(unaff_x22 + 0xa0) = pcVar10;
    (*pcVar10)();
    uVar6 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0xa8) = uVar6;
    FUN_10011532c(uVar5 + (long)iVar2,uVar6,&DAT_100ff3c00,&DAT_100c8d460);
    _swift_getAssociatedConformanceWitness
              (uVar1,uVar11,lVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1009f5278;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  if ((int)uVar6 != 1) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001009f5168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0,0xff00000000000000);
    return;
  }
  puVar9 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  uVar6 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar6;
  FUN_10011532c(uVar5,uVar6,&DAT_100ff3c00,&DAT_100c8d460);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar9 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  *(undefined **)(unaff_x22 + 200) = puVar9;
  plVar7 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  FUN_1000f8cac(uVar11,plVar7,&DAT_100ff3c10,&DAT_100c8e0d0);
  plVar8 = plVar7;
  _swift_getEnumCaseMultiPayload(plVar7,puVar9);
  if ((int)plVar8 != 1) {
    puVar9 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    *(undefined **)(unaff_x22 + 0xd8) = puVar9;
    lVar4 = *(long *)(puVar9 + -8);
    uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0xe0) = uVar6;
    pcVar10 = *(code **)(lVar4 + 0x20);
    *(code **)(unaff_x22 + 0xe8) = pcVar10;
    (*pcVar10)();
    plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1009f5450;
    Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x28));
    return;
  }
  lVar4 = *plVar7;
  *(long *)(unaff_x22 + 0x100) = lVar4;
  uVar11 = *(undefined8 *)(lVar4 + 0x10);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x108) = plVar8;
    FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1009f54b4;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar10 = FUN_1009fbdc0;
  _swift_task_addCancellationHandler(FUN_1009fbdc0,uVar11);
  *(code **)(unaff_x22 + 0x110) = pcVar10;
  plVar8 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1009f5530;
  FUN_1009f6d74(uVar11);
  return;
}



/* Address: 0x1009f5278 | FUN_1009f5278 */

void FUN_1009f5278(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009f52dc;
  }
  else {
    pcVar1 = FUN_1009f5e40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f52dc | FUN_1009f52dc */

void FUN_1009f52dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  uint7 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  if (lVar11 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar4 = *(long *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar4 + 8))(uVar10,uVar8);
    FUN_10011532c(uVar7,uVar10,&DAT_100ff3c00,&DAT_100c8d460);
    _swift_storeEnumTagMultiPayload(uVar10,uVar8,1);
    uVar8 = 0;
    uVar9 = 0x200000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
    pcVar3 = *(code **)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar4 = *(long *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar12 = *(long *)(unaff_x22 + 0x60);
    uVar6 = *(uint7 *)(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(lVar12,uVar2);
    iVar5 = *(int *)(lVar4 + 0x30);
    (*pcVar3)(lVar12,uVar10,uVar1);
    FUN_10011532c(uVar7,lVar12 + iVar5,&DAT_100ff3c00,&DAT_100c8d460);
    _swift_storeEnumTagMultiPayload(lVar12,uVar2,0);
    uVar9 = (ulong)uVar6 | 0x100000000000000;
  }
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001009f544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar11,uVar8,uVar9);
  return;
}



/* Address: 0x1009f5450 | FUN_1009f5450 */

void FUN_1009f5450(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009f59f4;
  }
  else {
    pcVar1 = FUN_1009f5d78;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f54b4 | FUN_1009f54b4 */

void FUN_1009f54b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar3 [16];
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    auVar3 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x10),*(undefined1 (*) [16])(lVar2 + 0x10),8,1)
    ;
    *(long *)(lVar2 + 0x150) = auVar3._8_8_;
    *(long *)(lVar2 + 0x148) = auVar3._0_8_;
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0x20);
    pcVar1 = FUN_1009f565c;
  }
  else {
    *(long *)(lVar2 + 0x158) = unaff_x20;
    pcVar1 = FUN_1009f5980;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f5530 | FUN_1009f5530 */

void FUN_1009f5530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x128) = param_3;
    *(undefined8 *)(lVar2 + 0x130) = param_2;
    *(undefined8 *)(lVar2 + 0x138) = param_1;
    pcVar1 = FUN_1009f55b8;
  }
  else {
    pcVar1 = FUN_1009f5610;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f55b8 | FUN_1009f55b8 */

void FUN_1009f55b8(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x110));
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_task_switch(FUN_1009f565c,0,0);
  return;
}



/* Address: 0x1009f5610 | FUN_1009f5610 */

void FUN_1009f5610(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x110));
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_task_switch(FUN_1009f5980,0,0);
  return;
}



/* Address: 0x1009f565c | FUN_1009f565c */

void FUN_1009f565c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(ulong *)(unaff_x22 + 0x140);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  if (uVar10 >> 0x38 < 0xff) {
    if (uVar10 >> 0x38 == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar7 = *(long *)(unaff_x22 + 0x70);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_1008758fc(uVar2,uVar9,uVar10,0);
      _swift_release(uVar2);
      _swift_release(uVar9);
      FUN_1000fb4c4(uVar11,&DAT_100ff3c00,&DAT_100c8d460);
      (**(code **)(lVar7 + 8))(uVar12,uVar1);
      _swift_storeEnumTagMultiPayload(uVar12,uVar1,2);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001009f5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar2,uVar9,uVar10);
      return;
    }
    FUN_1009e8f0c(uVar2,uVar9,uVar10);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar4 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  *(undefined **)(unaff_x22 + 200) = puVar4;
  plVar5 = (long *)(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  FUN_1000f8cac(uVar9,plVar5,&DAT_100ff3c10,&DAT_100c8e0d0);
  plVar6 = plVar5;
  _swift_getEnumCaseMultiPayload(plVar5,puVar4);
  if ((int)plVar6 == 1) {
    lVar7 = *plVar5;
    *(long *)(unaff_x22 + 0x100) = lVar7;
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar6;
      FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1009f54b4;
      Swift::_withTaskCancellationHandler();
      return;
    }
    pcVar8 = FUN_1009fbdc0;
    _swift_task_addCancellationHandler(FUN_1009fbdc0,uVar9);
    *(code **)(unaff_x22 + 0x110) = pcVar8;
    plVar6 = (long *)0xc0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1009f5530;
    FUN_1009f6d74(uVar9);
    return;
  }
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  *(undefined **)(unaff_x22 + 0xd8) = puVar4;
  lVar7 = *(long *)(puVar4 + -8);
  uVar10 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar10;
  pcVar8 = *(code **)(lVar7 + 0x20);
  *(code **)(unaff_x22 + 0xe8) = pcVar8;
  (*pcVar8)();
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1009f5450;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009f5980 | FUN_1009f5980 */

void FUN_1009f5980(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  FUN_1000fb4c4(uVar1,&DAT_100ff3c00,&DAT_100c8d460);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009f59f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f59f4 | FUN_1009f59f4 */

void FUN_1009f59f4(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
  pcVar8 = *(code **)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  FUN_1000fb4c4(uVar10,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar8)(uVar10,uVar11,uVar12);
  _swift_storeEnumTagMultiPayload(uVar10,uVar13,0);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  if (uVar6 >> 0x38 < 0xff) {
    if (uVar6 >> 0x38 == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar7 = *(long *)(unaff_x22 + 0x70);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_1008758fc(uVar9,uVar1,uVar6,0);
      _swift_release(uVar9);
      _swift_release(uVar1);
      FUN_1000fb4c4(uVar10,&DAT_100ff3c00,&DAT_100c8d460);
      (**(code **)(lVar7 + 8))(uVar13,uVar11);
      _swift_storeEnumTagMultiPayload(uVar13,uVar11,2);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001009f5b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar9,uVar1,uVar6);
      return;
    }
    FUN_1009e8f0c(uVar9,uVar1,uVar6);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar3 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  *(undefined **)(unaff_x22 + 200) = puVar3;
  plVar4 = (long *)(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar4;
  FUN_1000f8cac(uVar11,plVar4,&DAT_100ff3c10,&DAT_100c8e0d0);
  plVar5 = plVar4;
  _swift_getEnumCaseMultiPayload(plVar4,puVar3);
  if ((int)plVar5 == 1) {
    lVar7 = *plVar4;
    *(long *)(unaff_x22 + 0x100) = lVar7;
    uVar11 = *(undefined8 *)(lVar7 + 0x10);
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      plVar5 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar5;
      FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1009f54b4;
      Swift::_withTaskCancellationHandler();
      return;
    }
    pcVar8 = FUN_1009fbdc0;
    _swift_task_addCancellationHandler(FUN_1009fbdc0,uVar11);
    *(code **)(unaff_x22 + 0x110) = pcVar8;
    plVar5 = (long *)0xc0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1009f5530;
    FUN_1009f6d74(uVar11);
    return;
  }
  puVar3 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  *(undefined **)(unaff_x22 + 0xd8) = puVar3;
  lVar7 = *(long *)(puVar3 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar6;
  pcVar8 = *(code **)(lVar7 + 0x20);
  *(code **)(unaff_x22 + 0xe8) = pcVar8;
  (*pcVar8)();
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1009f5450;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009f5d78 | FUN_1009f5d78 */

void FUN_1009f5d78(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  pcVar2 = *(code **)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  FUN_1000fb4c4(uVar1,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar2)(uVar1,uVar5,uVar4);
  _swift_storeEnumTagMultiPayload(uVar1,uVar3,0);
  _swift_task_dealloc(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  FUN_1000fb4c4(uVar5,&DAT_100ff3c00,&DAT_100c8d460);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009f5e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f5e40 | FUN_1009f5e40 */

void FUN_1009f5e40(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_1000fb4c4(uVar3,&DAT_100ff3c00,&DAT_100c8d460);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  _swift_task_dealloc(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009f5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f5ecc | FUN_1009f5ecc */

void FUN_1009f5ecc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009f5f24;
  FUN_1009f4dd8(param_2);
  return;
}



/* Address: 0x1009f5f24 | FUN_1009f5f24 */

void FUN_1009f5f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f5f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1009f5f94 | FUN_1009f5f94 */

void FUN_1009f5f94(long param_1)

{
  FUN_1009f4b8c();
                    /* WARNING: Could not recover jumptable at 0x0001009f5fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1009f5fc4 | FUN_1009f5fc4 */

void FUN_1009f5fc4(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_1009f5fdc,0,0);
  return;
}



/* Address: 0x1009f5fdc | FUN_1009f5fdc */

void FUN_1009f5fdc(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1009f629c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = FUN_1009fbfb0;
  _swift_task_addCancellationHandler(FUN_1009fbfb0,*(undefined8 *)(unaff_x22 + 0x28));
  *(code **)(unaff_x22 + 0x38) = pcVar3;
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009f60ec;
  FUN_1009f6674(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009f60ec | FUN_1009f60ec */

void FUN_1009f60ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_3;
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    *(undefined8 *)(lVar2 + 0x60) = param_1;
    pcVar1 = thunk_FUN_1009f6388;
  }
  else {
    pcVar1 = thunk_FUN_1009f63cc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f6174 | FUN_1009f6174 */

void FUN_1009f6174(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_1009f618c,0,0);
  return;
}



/* Address: 0x1009f618c | FUN_1009f618c */

void FUN_1009f618c(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009f629c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = thunk_FUN_1009fbdc0;
  _swift_task_addCancellationHandler(thunk_FUN_1009fbdc0,*(undefined8 *)(unaff_x22 + 0x28));
  *(code **)(unaff_x22 + 0x38) = pcVar3;
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009f6300;
  FUN_1009f6d74(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009f629c | FUN_1009f629c */

void FUN_1009f629c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009f62e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f62fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
             *(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Address: 0x1009f6300 | FUN_1009f6300 */

void FUN_1009f6300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_3;
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    *(undefined8 *)(lVar2 + 0x60) = param_1;
    pcVar1 = FUN_1009f6388;
  }
  else {
    pcVar1 = FUN_1009f63cc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f6388 | FUN_1009f6388 */

void FUN_1009f6388(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009f63c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1009f63cc | FUN_1009f63cc */

void FUN_1009f63cc(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009f6404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f6408 | FUN_1009f6408 */

void FUN_1009f6408(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_1009f6420,0,0);
  return;
}



/* Address: 0x1009f6420 | FUN_1009f6420 */

void FUN_1009f6420(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    FUN_1000f7830(&DAT_100ff4438,&DAT_100c8d908);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009f6530;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = FUN_1009fc0b4;
  _swift_task_addCancellationHandler(FUN_1009fc0b4,*(undefined8 *)(unaff_x22 + 0x28));
  *(code **)(unaff_x22 + 0x38) = pcVar3;
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009f65a4;
  FUN_1009f7504(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009f6530 | FUN_1009f6530 */

void FUN_1009f6530(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009f6574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f65a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
             (ulong)*(uint7 *)(lVar1 + 0x20));
  return;
}



/* Address: 0x1009f65a4 | FUN_1009f65a4 */

void FUN_1009f65a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_3;
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    *(undefined8 *)(lVar2 + 0x60) = param_1;
    pcVar1 = FUN_1009f662c;
  }
  else {
    pcVar1 = FUN_1009f63cc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f662c | FUN_1009f662c */

void FUN_1009f662c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009f6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x58),
             *(ulong *)(unaff_x22 + 0x50) & 0xffffffffffffff);
  return;
}



/* Address: 0x1009f6674 | FUN_1009f6674 */

void FUN_1009f6674(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_1009f668c,0,0);
  return;
}



/* Address: 0x1009f668c | FUN_1009f668c */

void FUN_1009f668c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  CancellationError CVar5;
  ulong uVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long unaff_x22;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  String SVar23;
  
  lVar16 = *(long *)(unaff_x22 + 0x68);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x80));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1009f6cf4);
    (*pcVar12)();
  }
  pcVar12 = thunk_FUN_1009ed468;
  lVar3 = 0;
  FUN_1009faffc(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 1 || (param_4 & 0xff) == 0) {
    if ((param_4 & 0xff) == 0) {
      pcVar18 = (code *)(param_4 & 0xff);
      pcVar17 = pcVar18;
      pcVar19 = pcVar18;
      pcVar20 = pcVar18;
      pcVar21 = pcVar18;
      pcVar22 = pcVar18;
    }
    else {
      lVar13 = *(long *)(unaff_x22 + 0x68);
      pcVar19 = *(code **)(lVar13 + 0x40);
      pcVar20 = *(code **)(lVar13 + 0x48);
      pcVar21 = *(code **)(lVar13 + 0x50);
      pcVar22 = *(code **)(lVar13 + 0x58);
      pcVar18 = *(code **)(lVar13 + 0x60);
      pcVar17 = *(code **)(lVar13 + 0x68);
      FUN_1009fbe70(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
  }
  else if (uVar1 == 2) {
    lVar13 = *(long *)(unaff_x22 + 0x68);
    pcVar19 = *(code **)(lVar13 + 0x40);
    pcVar20 = *(code **)(lVar13 + 0x48);
    pcVar21 = *(code **)(lVar13 + 0x50);
    pcVar22 = *(code **)(lVar13 + 0x58);
    pcVar18 = *(code **)(lVar13 + 0x60);
    pcVar17 = *(code **)(lVar13 + 0x68);
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x40) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined8 *)(lVar13 + 0x50) = 0;
    *(undefined8 *)(lVar13 + 0x68) = 0;
    *(undefined8 *)(lVar13 + 0x60) = 0;
  }
  else {
    if (((param_3 != 0 || pcVar12 != (code *)0x0) || lVar3 != 0) &&
       (1 < lVar3 - 1U || (param_3 != 0 || pcVar12 != (code *)0x0))) goto LAB_1009f6c9c;
    pcVar19 = (code *)0x0;
    pcVar20 = (code *)0x0;
    pcVar21 = (code *)0x0;
    pcVar22 = (code *)0x0;
    pcVar18 = (code *)0x0;
    pcVar17 = (code *)0x0;
  }
  *(code **)(unaff_x22 + 0x90) = pcVar18;
  *(code **)(unaff_x22 + 0x98) = pcVar17;
  *(code **)(unaff_x22 + 0x80) = pcVar21;
  *(code **)(unaff_x22 + 0x88) = pcVar22;
  *(code **)(unaff_x22 + 0x70) = pcVar19;
  *(code **)(unaff_x22 + 0x78) = pcVar20;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x80));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1009f6cf8);
    (*pcVar12)();
  }
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 1 || (param_4 & 0xff) == 0) {
    if ((param_4 & 0xff) == 0) {
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
    else if (pcVar19 != (code *)0x0) {
      pcVar4 = pcVar19;
      _swift_getObjectType();
      pcVar14 = *(code **)(pcVar20 + 0x10);
      FUN_1008758fc(lVar3,pcVar12,param_3,param_3 >> 0x38);
      pcVar15 = pcVar4;
      (*pcVar14)(pcVar4,pcVar20);
      if (((ulong)pcVar15 & 1) == 0) {
        puVar9 = &DAT_100f273f8;
        _swift_allocObject(&DAT_100f273f8,0x40,7);
        *(code **)(puVar9 + 0x10) = pcVar19;
        *(code **)(puVar9 + 0x18) = pcVar20;
        *(code **)(puVar9 + 0x20) = pcVar21;
        *(code **)(puVar9 + 0x28) = pcVar22;
        *(code **)(puVar9 + 0x30) = pcVar18;
        *(code **)(puVar9 + 0x38) = pcVar17;
        pcVar15 = *(code **)(pcVar20 + 0x18);
        _swift_unknownObjectRetain(pcVar19);
        _swift_retain(pcVar22);
        _swift_retain(pcVar17);
        (*pcVar15)(thunk_FUN_1005e666c,puVar9,pcVar4,pcVar20);
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,1);
        _swift_release(puVar9);
      }
      else {
        (*pcVar18)();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,1);
      }
    }
  }
  else {
    if (uVar1 == 2) {
      if (pcVar19 == (code *)0x0) {
        _swift_errorRetain(lVar3);
      }
      else {
        pcVar4 = pcVar19;
        _swift_getObjectType();
        pcVar14 = *(code **)(pcVar20 + 0x10);
        FUN_1009fbe48(lVar3,pcVar12,param_3,2);
        FUN_1009fbe70(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        pcVar15 = pcVar4;
        (*pcVar14)(pcVar4,pcVar20);
        if (((ulong)pcVar15 & 1) == 0) {
          puVar9 = &DAT_100f273d0;
          _swift_allocObject(&DAT_100f273d0,0x40,7);
          *(code **)(puVar9 + 0x10) = pcVar19;
          *(code **)(puVar9 + 0x18) = pcVar20;
          *(code **)(puVar9 + 0x20) = pcVar21;
          *(code **)(puVar9 + 0x28) = pcVar22;
          *(code **)(puVar9 + 0x30) = pcVar18;
          *(code **)(puVar9 + 0x38) = pcVar17;
          pcVar15 = *(code **)(pcVar20 + 0x18);
          _swift_unknownObjectRetain(pcVar19);
          _swift_retain(pcVar22);
          _swift_retain(pcVar17);
          (*pcVar15)(thunk_FUN_1005e664c,puVar9,pcVar4,pcVar20);
          FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
          _swift_release(puVar9);
        }
        else {
          (*pcVar21)();
          FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        }
      }
      if (lVar3 != 0) {
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        plVar10 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar10 = lVar3;
        _swift_willThrow();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,2);
LAB_1009f6a88:
                    /* WARNING: Could not recover jumptable at 0x0001009f6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      FUN_1009fbe20(0,pcVar12,param_3,2);
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
    else {
      if ((param_3 == 0 && pcVar12 == (code *)0x0) && lVar3 == 0) {
        CVar5 = Swift::CancellationError::typeMetadataAccessor();
        lVar16 = *(long *)(CVar5.unknown + -8);
        uVar6 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar6);
        CVar7 = Swift::CancellationError::init();
        FUN_1009e8a00();
        CVar8 = CVar5;
        _swift_allocError(CVar5.unknown,CVar7.unknown,0,0);
        (**(code **)(lVar16 + 0x20))(CVar7.unknown,uVar6,CVar5.unknown);
        _swift_task_dealloc(uVar6);
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar11 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar11 = CVar8.unknown;
        _swift_willThrow();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        goto LAB_1009f6a88;
      }
      if ((lVar3 != 1) || (param_3 != 0 || pcVar12 != (code *)0x0)) {
        if ((lVar3 == 2) && (param_3 == 0 && pcVar12 == (code *)0x0)) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_1009f6cf8;
          _swift_continuation_init(unaff_x22 + 0x10,1);
          FUN_1009f8b64();
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
LAB_1009f6c9c:
        SVar23.bridgeObject = (void *)0x2;
        SVar23.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar23,(StaticString)0x0,0xe000000000000000,0xdaeab0);
        return;
      }
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
      lVar3 = 0;
    }
    pcVar12 = (code *)0x0;
    param_3 = 0xff00000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f6c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3,pcVar12,param_3);
  return;
}



/* Address: 0x1009f6cf8 | FUN_1009f6cf8 */

void FUN_1009f6cf8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0x60);
    pcVar1 = thunk_FUN_1009f7474;
  }
  else {
    _swift_willThrow();
    pcVar1 = thunk_FUN_1009f74c0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f6d74 | FUN_1009f6d74 */

void FUN_1009f6d74(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_1009f6d8c,0,0);
  return;
}



/* Address: 0x1009f6d8c | FUN_1009f6d8c */

void FUN_1009f6d8c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  CancellationError CVar5;
  ulong uVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long unaff_x22;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  String SVar23;
  
  lVar16 = *(long *)(unaff_x22 + 0x68);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x80));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1009f73f4);
    (*pcVar12)();
  }
  pcVar12 = thunk_FUN_1009ed468;
  lVar3 = 0;
  FUN_1009faffc(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 1 || (param_4 & 0xff) == 0) {
    if ((param_4 & 0xff) == 0) {
      pcVar18 = (code *)(param_4 & 0xff);
      pcVar17 = pcVar18;
      pcVar19 = pcVar18;
      pcVar20 = pcVar18;
      pcVar21 = pcVar18;
      pcVar22 = pcVar18;
    }
    else {
      lVar13 = *(long *)(unaff_x22 + 0x68);
      pcVar19 = *(code **)(lVar13 + 0x40);
      pcVar20 = *(code **)(lVar13 + 0x48);
      pcVar21 = *(code **)(lVar13 + 0x50);
      pcVar22 = *(code **)(lVar13 + 0x58);
      pcVar18 = *(code **)(lVar13 + 0x60);
      pcVar17 = *(code **)(lVar13 + 0x68);
      FUN_1009fbe70(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
  }
  else if (uVar1 == 2) {
    lVar13 = *(long *)(unaff_x22 + 0x68);
    pcVar19 = *(code **)(lVar13 + 0x40);
    pcVar20 = *(code **)(lVar13 + 0x48);
    pcVar21 = *(code **)(lVar13 + 0x50);
    pcVar22 = *(code **)(lVar13 + 0x58);
    pcVar18 = *(code **)(lVar13 + 0x60);
    pcVar17 = *(code **)(lVar13 + 0x68);
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x40) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined8 *)(lVar13 + 0x50) = 0;
    *(undefined8 *)(lVar13 + 0x68) = 0;
    *(undefined8 *)(lVar13 + 0x60) = 0;
  }
  else {
    if (((param_3 != 0 || pcVar12 != (code *)0x0) || lVar3 != 0) &&
       (1 < lVar3 - 1U || (param_3 != 0 || pcVar12 != (code *)0x0))) goto LAB_1009f739c;
    pcVar19 = (code *)0x0;
    pcVar20 = (code *)0x0;
    pcVar21 = (code *)0x0;
    pcVar22 = (code *)0x0;
    pcVar18 = (code *)0x0;
    pcVar17 = (code *)0x0;
  }
  *(code **)(unaff_x22 + 0x90) = pcVar18;
  *(code **)(unaff_x22 + 0x98) = pcVar17;
  *(code **)(unaff_x22 + 0x80) = pcVar21;
  *(code **)(unaff_x22 + 0x88) = pcVar22;
  *(code **)(unaff_x22 + 0x70) = pcVar19;
  *(code **)(unaff_x22 + 0x78) = pcVar20;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x80));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1009f73f8);
    (*pcVar12)();
  }
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 1 || (param_4 & 0xff) == 0) {
    if ((param_4 & 0xff) == 0) {
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
    else if (pcVar19 != (code *)0x0) {
      pcVar4 = pcVar19;
      _swift_getObjectType();
      pcVar14 = *(code **)(pcVar20 + 0x10);
      FUN_1008758fc(lVar3,pcVar12,param_3,param_3 >> 0x38);
      pcVar15 = pcVar4;
      (*pcVar14)(pcVar4,pcVar20);
      if (((ulong)pcVar15 & 1) == 0) {
        puVar9 = &DAT_100f272b8;
        _swift_allocObject(&DAT_100f272b8,0x40,7);
        *(code **)(puVar9 + 0x10) = pcVar19;
        *(code **)(puVar9 + 0x18) = pcVar20;
        *(code **)(puVar9 + 0x20) = pcVar21;
        *(code **)(puVar9 + 0x28) = pcVar22;
        *(code **)(puVar9 + 0x30) = pcVar18;
        *(code **)(puVar9 + 0x38) = pcVar17;
        pcVar15 = *(code **)(pcVar20 + 0x18);
        _swift_unknownObjectRetain(pcVar19);
        _swift_retain(pcVar22);
        _swift_retain(pcVar17);
        (*pcVar15)(FUN_1005e666c,puVar9,pcVar4,pcVar20);
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,1);
        _swift_release(puVar9);
      }
      else {
        (*pcVar18)();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,1);
      }
    }
  }
  else {
    if (uVar1 == 2) {
      if (pcVar19 == (code *)0x0) {
        _swift_errorRetain(lVar3);
      }
      else {
        pcVar4 = pcVar19;
        _swift_getObjectType();
        pcVar14 = *(code **)(pcVar20 + 0x10);
        FUN_1009fbe48(lVar3,pcVar12,param_3,2);
        FUN_1009fbe70(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        pcVar15 = pcVar4;
        (*pcVar14)(pcVar4,pcVar20);
        if (((ulong)pcVar15 & 1) == 0) {
          puVar9 = &DAT_100f27290;
          _swift_allocObject(&DAT_100f27290,0x40,7);
          *(code **)(puVar9 + 0x10) = pcVar19;
          *(code **)(puVar9 + 0x18) = pcVar20;
          *(code **)(puVar9 + 0x20) = pcVar21;
          *(code **)(puVar9 + 0x28) = pcVar22;
          *(code **)(puVar9 + 0x30) = pcVar18;
          *(code **)(puVar9 + 0x38) = pcVar17;
          pcVar15 = *(code **)(pcVar20 + 0x18);
          _swift_unknownObjectRetain(pcVar19);
          _swift_retain(pcVar22);
          _swift_retain(pcVar17);
          (*pcVar15)(FUN_1005e664c,puVar9,pcVar4,pcVar20);
          FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
          _swift_release(puVar9);
        }
        else {
          (*pcVar21)();
          FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        }
      }
      if (lVar3 != 0) {
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        plVar10 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar10 = lVar3;
        _swift_willThrow();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        FUN_1009fbe20(lVar3,pcVar12,param_3,2);
LAB_1009f7188:
                    /* WARNING: Could not recover jumptable at 0x0001009f71a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      FUN_1009fbe20(0,pcVar12,param_3,2);
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
    }
    else {
      if ((param_3 == 0 && pcVar12 == (code *)0x0) && lVar3 == 0) {
        CVar5 = Swift::CancellationError::typeMetadataAccessor();
        lVar16 = *(long *)(CVar5.unknown + -8);
        uVar6 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar6);
        CVar7 = Swift::CancellationError::init();
        FUN_1009e8a00();
        CVar8 = CVar5;
        _swift_allocError(CVar5.unknown,CVar7.unknown,0,0);
        (**(code **)(lVar16 + 0x20))(CVar7.unknown,uVar6,CVar5.unknown);
        _swift_task_dealloc(uVar6);
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar11 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar11 = CVar8.unknown;
        _swift_willThrow();
        FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
        goto LAB_1009f7188;
      }
      if ((lVar3 != 1) || (param_3 != 0 || pcVar12 != (code *)0x0)) {
        if ((lVar3 == 2) && (param_3 == 0 && pcVar12 == (code *)0x0)) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_1009f73f8;
          _swift_continuation_init(unaff_x22 + 0x10,1);
          FUN_1009f92f8();
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
LAB_1009f739c:
        SVar23.bridgeObject = (void *)0x2;
        SVar23.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar23,(StaticString)0x0,0xe000000000000000,0xdaeab0);
        return;
      }
      FUN_1009fbde8(pcVar19,pcVar20,pcVar21,pcVar22,pcVar18,pcVar17);
      lVar3 = 0;
    }
    pcVar12 = (code *)0x0;
    param_3 = 0xff00000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009f7394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3,pcVar12,param_3);
  return;
}



/* Address: 0x1009f73f8 | FUN_1009f73f8 */

void FUN_1009f73f8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0x60);
    pcVar1 = FUN_1009f7474;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1009f74c0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f7474 | FUN_1009f7474 */

void FUN_1009f7474(void)

{
  long unaff_x22;
  
  FUN_1009fbde8(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001009f74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
             *(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Address: 0x1009f74c0 | FUN_1009f74c0 */

void FUN_1009f74c0(void)

{
  long unaff_x22;
  
  FUN_1009fbde8(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001009f7500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


