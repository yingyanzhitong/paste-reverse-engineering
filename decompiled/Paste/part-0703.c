/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007a56e4 | FUN_1007a56e4 */

void FUN_1007a56e4(long param_1)

{
  Optional OVar1;
  Result RVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  long local_40;
  undefined *puStack_38;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar5 < 0x40) {
    lVar6 = *(long *)(lVar3 + -8);
    uVar5 = *(ulong *)(param_1 + 0x18);
    lVar4 = 0x13f;
    _swift_checkMetadataState();
    if (uVar5 < 0x40) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      if (uVar5 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_68,lVar6 + 0x40,*(long *)(lVar4 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
        uVar5 = 0xff;
        local_48 = auStack_68;
        _swift_getAssociatedTypeWitness
                  (0xff,*(undefined8 *)(param_1 + 0x28),lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        RVar2 = Swift::Result::typeMetadataAccessor();
        if (uVar5 < 0x40) {
          local_40 = *(long *)(CONCAT71(extraout_var_00,RVar2.value) + -8) + 0x40;
          puStack_38 = &DAT_100c78068;
          _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_48);
        }
      }
    }
  }
  return;
}



/* Address: 0x1007a580c | FUN_1007a580c */

long * FUN_1007a580c(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  size_t sVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar5 = *(uint *)(lVar11 + 0x50);
  uVar17 = (ulong)uVar5 & 0xff;
  uVar10 = *(long *)(lVar19 + 0x40) + uVar17;
  lVar14 = *(long *)(lVar11 + 0x40);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar3 + -8);
  uVar13 = *(uint *)(lVar21 + 0x50);
  uVar18 = (ulong)uVar13 & 0xff;
  sVar15 = *(size_t *)(lVar21 + 0x40);
  if (*(int *)(lVar21 + 0x54) == 0) {
    sVar15 = sVar15 + 1;
  }
  uVar1 = sVar15 + (lVar14 + uVar18 + (uVar10 & (uVar17 ^ 0xffffffffffffffff)) &
                   (uVar18 ^ 0xffffffffffffffff));
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar7 + -8);
  uVar12 = *(ulong *)(lVar9 + 0x40);
  if (uVar12 < 9) {
    uVar12 = 8;
  }
  if (uVar1 < uVar12 + 1) {
    uVar1 = uVar12 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar13 = *(uint *)(lVar19 + 0x50) | uVar5 | uVar13 | *(uint *)(lVar9 + 0x50);
  if (0x18 < uVar1 + 1 || (uVar13 & 0x1000f8) != 0) {
    uVar10 = (ulong)(uVar13 & 0xf8 | 7);
    lVar14 = *(long *)param_2;
    *param_1 = lVar14;
    _swift_retain();
    return (long *)(lVar14 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar13 = (uint)bVar6;
  if (2 < bVar6) {
    uVar16 = (uint)uVar1;
    uVar5 = 4;
    if (uVar16 < 4) {
      uVar5 = uVar16;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto joined_r0x0001007a59c4;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar16 < 4) {
      uVar13 = (uVar13 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3)) + 3;
    }
    else {
      uVar13 = uVar13 + 3;
    }
  }
joined_r0x0001007a59c4:
  if (uVar13 == 2) {
    lVar14 = *(long *)param_2;
    _swift_errorRetain(lVar14);
    *param_1 = lVar14;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
    return param_1;
  }
  if (uVar13 != 1) {
    if (uVar13 != 0) {
      plVar8 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar8;
    }
    uVar20 = ~uVar18;
    (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar2);
    uVar12 = uVar10 + (long)param_1 & ~uVar17;
    uVar10 = (ulong)(uVar10 + (long)param_2) & ~uVar17;
    (**(code **)(lVar11 + 0x10))(uVar12,uVar10,lVar4);
    lVar14 = lVar14 + uVar18;
    uVar12 = uVar12 + lVar14;
    uVar10 = uVar10 + lVar14;
    uVar17 = uVar10 & uVar20;
    (**(code **)(lVar21 + 0x30))(uVar17,1,lVar3);
    if ((int)uVar17 != 0) {
      _memcpy((void *)(uVar12 & uVar20),(void *)(uVar10 & uVar20),sVar15);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar21 + 0x10))(uVar12 & uVar20,uVar10 & uVar20,lVar3);
    (**(code **)(lVar21 + 0x38))(uVar12 & uVar20,0,1,lVar3);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar6 = *(byte *)((long)param_2 + uVar12);
  uVar13 = (uint)bVar6;
  if (1 < bVar6) {
    uVar16 = (uint)uVar12;
    uVar5 = 4;
    if (uVar16 < 4) {
      uVar5 = uVar16;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007a5b84;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar16 < 4) {
      uVar13 = (uVar13 | bVar6 - 2 << (ulong)((uVar16 & 3) << 3)) + 2;
    }
    else {
      uVar13 = uVar13 + 2;
    }
  }
LAB_1007a5b84:
  if (uVar13 != 1) {
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar7);
  }
  else {
    lVar14 = *(long *)param_2;
    _swift_errorRetain(lVar14);
    *param_1 = lVar14;
  }
  *(bool *)((long)param_1 + uVar12) = uVar13 == 1;
  *(undefined1 *)((long)param_1 + uVar1) = 1;
  return param_1;
}



/* Address: 0x1007a5bd0 | FUN_1007a5bd0 */

void FUN_1007a5bd0(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar16 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar4 + -8);
  uVar17 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar11 = *(long *)(lVar16 + 0x40) + uVar17;
  lVar13 = *(long *)(lVar14 + 0x40);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar15 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar8 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar1 = lVar8 + (lVar13 + uVar12 + (uVar11 & (uVar17 ^ 0xffffffffffffffff)) &
                  (uVar12 ^ 0xffffffffffffffff));
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar7 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (uVar1 < uVar7 + 1) {
    uVar1 = uVar7 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar9 = (uint)bVar5;
  if (2 < bVar5) {
    uVar6 = (uint)uVar1;
    uVar10 = 4;
    if (uVar6 < 4) {
      uVar10 = uVar6;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007a5d04;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    uVar9 = uVar10 | bVar5 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007a5d04:
  if (uVar9 == 2) goto LAB_1007a5e0c;
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      return;
    }
    (**(code **)(lVar16 + 8))(param_1,lVar2);
    uVar11 = (ulong)(uVar11 + (long)param_1) & ~uVar17;
    (**(code **)(lVar14 + 8))(uVar11,lVar4);
    uVar11 = uVar11 + lVar13 + uVar12;
    uVar17 = uVar11 & ~uVar12;
    (**(code **)(lVar15 + 0x30))(uVar17,1,lVar3);
    if ((int)uVar17 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    param_1 = (uint *)(uVar11 & ~uVar12);
    lVar8 = lVar3;
    goto LAB_1007a5e5c;
  }
  bVar5 = *(byte *)((long)param_1 + uVar7);
  uVar9 = (uint)bVar5;
  if (bVar5 < 2) {
LAB_1007a5e04:
    if (uVar9 == 1) {
LAB_1007a5e0c:
      _swift_errorRelease(*(undefined8 *)param_1,lVar8);
      return;
    }
  }
  else {
    uVar6 = (uint)uVar7;
    uVar10 = 4;
    if (uVar6 < 4) {
      uVar10 = uVar6;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007a5e04;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar10 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar10 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (3 < uVar6) {
      uVar9 = uVar9 + 2;
      goto LAB_1007a5e04;
    }
    if ((uVar9 | bVar5 - 2 << (ulong)((uVar6 & 3) << 3)) == 0xffffffff) goto LAB_1007a5e0c;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar8 + -8) + 8);
LAB_1007a5e5c:
                    /* WARNING: Could not recover jumptable at 0x0001007a5e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar8);
  return;
}



/* Address: 0x1007a5e7c | FUN_1007a5e7c */

undefined8 * FUN_1007a5e7c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar4 + -8);
  uVar22 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = *(long *)(lVar17 + 0x40) + uVar22;
  lVar12 = *(long *)(lVar14 + 0x40);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar3 + -8);
  uVar18 = (ulong)*(byte *)(lVar21 + 0x50);
  sVar13 = *(size_t *)(lVar21 + 0x40);
  if (*(int *)(lVar21 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar1 = sVar13 + (lVar12 + uVar18 + (uVar15 & (uVar22 ^ 0xffffffffffffffff)) &
                   (uVar18 ^ 0xffffffffffffffff));
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar9 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (uVar1 < uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar19 = (uint)uVar1;
    uVar11 = 4;
    if (uVar19 < 4) {
      uVar11 = uVar19;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007a5fb8;
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
    uVar10 = uVar11 | bVar5 - 3 << (ulong)((uVar19 & 3) << 3);
    if (3 < uVar19) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007a5fb8:
  if (uVar10 == 2) {
    uVar16 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar16);
    *param_1 = uVar16;
    uVar8 = 2;
    goto LAB_1007a61b0;
  }
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      puVar7 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar7;
    }
    uVar20 = ~uVar18;
    (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar2);
    uVar9 = uVar15 + (long)param_1 & ~uVar22;
    uVar15 = (ulong)(uVar15 + (long)param_2) & ~uVar22;
    (**(code **)(lVar14 + 0x10))(uVar9,uVar15,lVar4);
    lVar12 = lVar12 + uVar18;
    uVar9 = uVar9 + lVar12;
    uVar15 = uVar15 + lVar12;
    uVar18 = uVar15 & uVar20;
    (**(code **)(lVar21 + 0x30))(uVar18,1,lVar3);
    if ((int)uVar18 != 0) {
      _memcpy((void *)(uVar9 & uVar20),(void *)(uVar15 & uVar20),sVar13);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar21 + 0x10))(uVar9 & uVar20,uVar15 & uVar20,lVar3);
    (**(code **)(lVar21 + 0x38))(uVar9 & uVar20,0,1,lVar3);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar5 = *(byte *)((long)param_2 + uVar9);
  uVar10 = (uint)bVar5;
  if (bVar5 < 2) {
    if (bVar5 == 1) goto LAB_1007a6158;
LAB_1007a6194:
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2);
    uVar8 = 0;
  }
  else {
    uVar19 = (uint)uVar9;
    uVar11 = 4;
    if (uVar19 < 4) {
      uVar11 = uVar19;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 != 0) {
        uVar10 = (uint)(byte)*param_2;
        goto joined_r0x0001007a6138;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar10 = (uint)(ushort)*param_2;
      }
      else if (uVar11 == 3) {
        uVar10 = (uint)(uint3)*param_2;
      }
      else {
        uVar10 = *param_2;
      }
joined_r0x0001007a6138:
      if (uVar19 < 4) {
        if ((uVar10 | bVar5 - 2 << (ulong)((uVar19 & 3) << 3)) == 0xffffffff) goto LAB_1007a6158;
        goto LAB_1007a6194;
      }
      uVar10 = uVar10 + 2;
    }
    if (uVar10 != 1) goto LAB_1007a6194;
LAB_1007a6158:
    uVar16 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar16);
    *param_1 = uVar16;
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar9) = uVar8;
  uVar8 = 1;
LAB_1007a61b0:
  *(undefined1 *)((long)param_1 + uVar1) = uVar8;
  return param_1;
}



/* Address: 0x1007a61d8 | FUN_1007a61d8 */

uint * FUN_1007a61d8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  uint uVar16;
  long lVar17;
  size_t sVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar21 = *(long *)(lVar3 + -8);
  lVar22 = *(long *)(lVar5 + -8);
  uVar24 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar8 = *(long *)(lVar21 + 0x40) + uVar24;
  lVar17 = *(long *)(lVar22 + 0x40);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar23 = *(long *)(lVar4 + -8);
  uVar20 = (ulong)*(byte *)(lVar23 + 0x50);
  sVar18 = *(size_t *)(lVar23 + 0x40);
  if (*(int *)(lVar23 + 0x54) == 0) {
    sVar18 = sVar18 + 1;
  }
  uVar1 = sVar18 + (lVar17 + uVar20 + (uVar8 & (uVar24 ^ 0xffffffffffffffff)) &
                   (uVar20 ^ 0xffffffffffffffff));
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar6 + -8);
  uVar13 = *(ulong *)(lVar12 + 0x40);
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  if (uVar1 < uVar13 + 1) {
    uVar1 = uVar13 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar26 = (uint)uVar1;
  bVar11 = *(byte *)((long)param_1 + uVar1);
  uVar16 = (uint)bVar11;
  if (2 < bVar11) {
    uVar27 = 4;
    if (uVar26 < 4) {
      uVar27 = uVar26;
    }
    if ((int)uVar27 < 2) {
      if (uVar27 == 0) goto LAB_1007a6344;
      uVar16 = (uint)(byte)*param_1;
    }
    else if (uVar27 == 2) {
      uVar16 = (uint)(ushort)*param_1;
    }
    else if (uVar27 == 3) {
      uVar16 = (uint)(uint3)*param_1;
    }
    else {
      uVar16 = *param_1;
    }
    if (uVar26 < 4) {
      uVar16 = (uVar16 | bVar11 - 3 << (ulong)(uVar26 << 3 & 0x1f)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
LAB_1007a6344:
  uVar24 = ~uVar24;
  uVar14 = ~uVar20;
  uVar27 = (uint)uVar13;
  if (uVar16 == 2) {
LAB_1007a6438:
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar16 == 1) {
    bVar11 = *(byte *)((long)param_1 + uVar13);
    uVar16 = (uint)bVar11;
    if (bVar11 < 2) {
LAB_1007a6430:
      if (uVar16 == 1) goto LAB_1007a6438;
    }
    else {
      uVar2 = 4;
      if (uVar27 < 4) {
        uVar2 = uVar27;
      }
      if ((int)uVar2 < 2) {
        if (uVar2 == 0) goto LAB_1007a6430;
        uVar16 = (uint)(byte)*param_1;
      }
      else if (uVar2 == 2) {
        uVar16 = (uint)(ushort)*param_1;
      }
      else if (uVar2 == 3) {
        uVar16 = (uint)(uint3)*param_1;
      }
      else {
        uVar16 = *param_1;
      }
      if (3 < uVar27) {
        uVar16 = uVar16 + 2;
        goto LAB_1007a6430;
      }
      if ((uVar16 | bVar11 - 2 << (ulong)((uVar27 & 3) << 3)) == 0xffffffff) goto LAB_1007a6438;
    }
    pcVar15 = *(code **)(lVar12 + 8);
    puVar9 = param_1;
    lVar10 = lVar6;
LAB_1007a646c:
    (*pcVar15)(puVar9,lVar10);
  }
  else if (uVar16 == 0) {
    (**(code **)(lVar21 + 8))(param_1,lVar3);
    uVar25 = (ulong)(uVar8 + (long)param_1) & uVar24;
    (**(code **)(lVar22 + 8))(uVar25,lVar5);
    uVar25 = uVar25 + lVar17 + uVar20;
    uVar7 = uVar25 & uVar14;
    (**(code **)(lVar23 + 0x30))(uVar7,1,lVar4);
    if ((int)uVar7 == 0) {
      pcVar15 = *(code **)(lVar23 + 8);
      puVar9 = (uint *)(uVar25 & uVar14);
      lVar10 = lVar4;
      goto LAB_1007a646c;
    }
  }
  bVar11 = *(byte *)((long)param_2 + uVar1);
  uVar16 = (uint)bVar11;
  if (2 < bVar11) {
    uVar2 = 4;
    if (uVar26 < 4) {
      uVar2 = uVar26;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x0001007a64e0;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (uVar26 < 4) {
      uVar16 = (uVar16 | bVar11 - 3 << (ulong)(uVar26 << 3 & 0x1f)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
joined_r0x0001007a64e0:
  if (uVar16 == 2) {
    uVar19 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar19);
    *(undefined8 *)param_1 = uVar19;
    bVar11 = 2;
    goto LAB_1007a66cc;
  }
  if (uVar16 != 1) {
    if (uVar16 != 0) {
      puVar9 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar9;
    }
    (**(code **)(lVar21 + 0x10))(param_1,param_2,lVar3);
    uVar13 = (ulong)(uVar8 + (long)param_1) & uVar24;
    uVar24 = (ulong)(uVar8 + (long)param_2) & uVar24;
    (**(code **)(lVar22 + 0x10))(uVar13,uVar24,lVar5);
    uVar13 = uVar13 + lVar17 + uVar20;
    uVar24 = uVar24 + lVar17 + uVar20;
    uVar8 = uVar24 & uVar14;
    (**(code **)(lVar23 + 0x30))(uVar8,1,lVar4);
    if ((int)uVar8 != 0) {
      _memcpy((void *)(uVar13 & uVar14),(void *)(uVar24 & uVar14),sVar18);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar23 + 0x10))(uVar13 & uVar14,uVar24 & uVar14,lVar4);
    (**(code **)(lVar23 + 0x38))(uVar13 & uVar14,0,1,lVar4);
    *(byte *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar11 = *(byte *)((long)param_2 + uVar13);
  uVar16 = (uint)bVar11;
  if (bVar11 < 2) {
LAB_1007a6670:
    if (uVar16 == 1) goto LAB_1007a6678;
LAB_1007a66a8:
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar6);
    bVar11 = 0;
  }
  else {
    uVar26 = 4;
    if (uVar27 < 4) {
      uVar26 = uVar27;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_1007a6670;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar26 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar26 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (3 < uVar27) {
      uVar16 = uVar16 + 2;
      goto LAB_1007a6670;
    }
    if ((uVar16 | bVar11 - 2 << (ulong)((uVar27 & 3) << 3)) != 0xffffffff) goto LAB_1007a66a8;
LAB_1007a6678:
    uVar19 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar19);
    *(undefined8 *)param_1 = uVar19;
    bVar11 = 1;
  }
  *(byte *)((long)param_1 + uVar13) = bVar11;
  bVar11 = 1;
LAB_1007a66cc:
  *(byte *)((long)param_1 + uVar1) = bVar11;
  return param_1;
}



/* Address: 0x1007a66f4 | FUN_1007a66f4 */

undefined8 * FUN_1007a66f4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar4 + -8);
  uVar21 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = *(long *)(lVar16 + 0x40) + uVar21;
  lVar12 = *(long *)(lVar14 + 0x40);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar3 + -8);
  uVar17 = (ulong)*(byte *)(lVar20 + 0x50);
  sVar13 = *(size_t *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar1 = sVar13 + (lVar12 + uVar17 + (uVar15 & (uVar21 ^ 0xffffffffffffffff)) &
                   (uVar17 ^ 0xffffffffffffffff));
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar9 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (uVar1 < uVar9 + 1) {
    uVar1 = uVar9 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar18 = (uint)uVar1;
    uVar11 = 4;
    if (uVar18 < 4) {
      uVar11 = uVar18;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007a6830;
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
    uVar10 = uVar11 | bVar5 - 3 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007a6830:
  if (uVar10 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar8 = 2;
    goto LAB_1007a6a18;
  }
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      puVar7 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar7;
    }
    uVar19 = ~uVar17;
    (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar2);
    uVar9 = uVar15 + (long)param_1 & ~uVar21;
    uVar15 = (ulong)(uVar15 + (long)param_2) & ~uVar21;
    (**(code **)(lVar14 + 0x20))(uVar9,uVar15,lVar4);
    lVar12 = lVar12 + uVar17;
    uVar9 = uVar9 + lVar12;
    uVar15 = uVar15 + lVar12;
    uVar17 = uVar15 & uVar19;
    (**(code **)(lVar20 + 0x30))(uVar17,1,lVar3);
    if ((int)uVar17 != 0) {
      _memcpy((void *)(uVar9 & uVar19),(void *)(uVar15 & uVar19),sVar13);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar20 + 0x20))(uVar9 & uVar19,uVar15 & uVar19,lVar3);
    (**(code **)(lVar20 + 0x38))(uVar9 & uVar19,0,1,lVar3);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar5 = *(byte *)((long)param_2 + uVar9);
  uVar10 = (uint)bVar5;
  if (bVar5 < 2) {
    if (bVar5 == 1) goto LAB_1007a69c8;
LAB_1007a69fc:
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(param_1,param_2,lVar6);
    uVar8 = 0;
  }
  else {
    uVar18 = (uint)uVar9;
    uVar11 = 4;
    if (uVar18 < 4) {
      uVar11 = uVar18;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 != 0) {
        uVar10 = (uint)(byte)*param_2;
        goto joined_r0x0001007a69a8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar10 = (uint)(ushort)*param_2;
      }
      else if (uVar11 == 3) {
        uVar10 = (uint)(uint3)*param_2;
      }
      else {
        uVar10 = *param_2;
      }
joined_r0x0001007a69a8:
      if (uVar18 < 4) {
        if ((uVar10 | bVar5 - 2 << (ulong)((uVar18 & 3) << 3)) == 0xffffffff) goto LAB_1007a69c8;
        goto LAB_1007a69fc;
      }
      uVar10 = uVar10 + 2;
    }
    if (uVar10 != 1) goto LAB_1007a69fc;
LAB_1007a69c8:
    *param_1 = *(undefined8 *)param_2;
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar9) = uVar8;
  uVar8 = 1;
LAB_1007a6a18:
  *(undefined1 *)((long)param_1 + uVar1) = uVar8;
  return param_1;
}



/* Address: 0x1007a6a40 | FUN_1007a6a40 */

uint * FUN_1007a6a40(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  uint uVar16;
  long lVar17;
  size_t sVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar3 + -8);
  lVar21 = *(long *)(lVar5 + -8);
  uVar23 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar8 = *(long *)(lVar20 + 0x40) + uVar23;
  lVar17 = *(long *)(lVar21 + 0x40);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar22 = *(long *)(lVar4 + -8);
  uVar19 = (ulong)*(byte *)(lVar22 + 0x50);
  sVar18 = *(size_t *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    sVar18 = sVar18 + 1;
  }
  uVar1 = sVar18 + (lVar17 + uVar19 + (uVar8 & (uVar23 ^ 0xffffffffffffffff)) &
                   (uVar19 ^ 0xffffffffffffffff));
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar6 + -8);
  uVar13 = *(ulong *)(lVar12 + 0x40);
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  if (uVar1 < uVar13 + 1) {
    uVar1 = uVar13 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar25 = (uint)uVar1;
  bVar11 = *(byte *)((long)param_1 + uVar1);
  uVar16 = (uint)bVar11;
  if (2 < bVar11) {
    uVar26 = 4;
    if (uVar25 < 4) {
      uVar26 = uVar25;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_1007a6bac;
      uVar16 = (uint)(byte)*param_1;
    }
    else if (uVar26 == 2) {
      uVar16 = (uint)(ushort)*param_1;
    }
    else if (uVar26 == 3) {
      uVar16 = (uint)(uint3)*param_1;
    }
    else {
      uVar16 = *param_1;
    }
    if (uVar25 < 4) {
      uVar16 = (uVar16 | bVar11 - 3 << (ulong)(uVar25 << 3 & 0x1f)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
LAB_1007a6bac:
  uVar23 = ~uVar23;
  uVar14 = ~uVar19;
  uVar26 = (uint)uVar13;
  if (uVar16 == 2) {
LAB_1007a6ca0:
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar16 == 1) {
    bVar11 = *(byte *)((long)param_1 + uVar13);
    uVar16 = (uint)bVar11;
    if (bVar11 < 2) {
LAB_1007a6c98:
      if (uVar16 == 1) goto LAB_1007a6ca0;
    }
    else {
      uVar2 = 4;
      if (uVar26 < 4) {
        uVar2 = uVar26;
      }
      if ((int)uVar2 < 2) {
        if (uVar2 == 0) goto LAB_1007a6c98;
        uVar16 = (uint)(byte)*param_1;
      }
      else if (uVar2 == 2) {
        uVar16 = (uint)(ushort)*param_1;
      }
      else if (uVar2 == 3) {
        uVar16 = (uint)(uint3)*param_1;
      }
      else {
        uVar16 = *param_1;
      }
      if (3 < uVar26) {
        uVar16 = uVar16 + 2;
        goto LAB_1007a6c98;
      }
      if ((uVar16 | bVar11 - 2 << (ulong)((uVar26 & 3) << 3)) == 0xffffffff) goto LAB_1007a6ca0;
    }
    pcVar15 = *(code **)(lVar12 + 8);
    puVar9 = param_1;
    lVar10 = lVar6;
LAB_1007a6cd4:
    (*pcVar15)(puVar9,lVar10);
  }
  else if (uVar16 == 0) {
    (**(code **)(lVar20 + 8))(param_1,lVar3);
    uVar24 = (ulong)(uVar8 + (long)param_1) & uVar23;
    (**(code **)(lVar21 + 8))(uVar24,lVar5);
    uVar24 = uVar24 + lVar17 + uVar19;
    uVar7 = uVar24 & uVar14;
    (**(code **)(lVar22 + 0x30))(uVar7,1,lVar4);
    if ((int)uVar7 == 0) {
      pcVar15 = *(code **)(lVar22 + 8);
      puVar9 = (uint *)(uVar24 & uVar14);
      lVar10 = lVar4;
      goto LAB_1007a6cd4;
    }
  }
  bVar11 = *(byte *)((long)param_2 + uVar1);
  uVar16 = (uint)bVar11;
  if (2 < bVar11) {
    uVar2 = 4;
    if (uVar25 < 4) {
      uVar2 = uVar25;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x0001007a6d48;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (uVar25 < 4) {
      uVar16 = (uVar16 | bVar11 - 3 << (ulong)(uVar25 << 3 & 0x1f)) + 3;
    }
    else {
      uVar16 = uVar16 + 3;
    }
  }
joined_r0x0001007a6d48:
  if (uVar16 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar11 = 2;
    goto LAB_1007a6f24;
  }
  if (uVar16 != 1) {
    if (uVar16 != 0) {
      puVar9 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar9;
    }
    (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar3);
    uVar13 = (ulong)(uVar8 + (long)param_1) & uVar23;
    uVar23 = (ulong)(uVar8 + (long)param_2) & uVar23;
    (**(code **)(lVar21 + 0x20))(uVar13,uVar23,lVar5);
    uVar13 = uVar13 + lVar17 + uVar19;
    uVar23 = uVar23 + lVar17 + uVar19;
    uVar8 = uVar23 & uVar14;
    (**(code **)(lVar22 + 0x30))(uVar8,1,lVar4);
    if ((int)uVar8 != 0) {
      _memcpy((void *)(uVar13 & uVar14),(void *)(uVar23 & uVar14),sVar18);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar22 + 0x20))(uVar13 & uVar14,uVar23 & uVar14,lVar4);
    (**(code **)(lVar22 + 0x38))(uVar13 & uVar14,0,1,lVar4);
    *(byte *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  bVar11 = *(byte *)((long)param_2 + uVar13);
  uVar16 = (uint)bVar11;
  if (bVar11 < 2) {
LAB_1007a6ed0:
    if (uVar16 == 1) goto LAB_1007a6ed8;
LAB_1007a6f00:
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar6);
    bVar11 = 0;
  }
  else {
    uVar25 = 4;
    if (uVar26 < 4) {
      uVar25 = uVar26;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto LAB_1007a6ed0;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar25 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar25 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (3 < uVar26) {
      uVar16 = uVar16 + 2;
      goto LAB_1007a6ed0;
    }
    if ((uVar16 | bVar11 - 2 << (ulong)((uVar26 & 3) << 3)) != 0xffffffff) goto LAB_1007a6f00;
LAB_1007a6ed8:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar11 = 1;
  }
  *(byte *)((long)param_1 + uVar13) = bVar11;
  bVar11 = 1;
LAB_1007a6f24:
  *(byte *)((long)param_1 + uVar1) = bVar11;
  return param_1;
}



/* Address: 0x1007a6f4c | FUN_1007a6f4c */

int FUN_1007a6f4c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar9 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar8 = lVar10 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar8 &
                    (uVar8 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar9 + 0x50) &
                   ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar10 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar8 < uVar5 + 1) {
    uVar8 = uVar5 + 1;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar8 & 3) << 3));
  if (3 < (uint)uVar8) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_1007a70a0;
  uVar5 = uVar8 + 1;
  uVar7 = (uint)uVar5;
  uVar2 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar11 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_1007a70a0;
      goto LAB_1007a702c;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1007a702c:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar11 != 0) {
    uVar1 = 0;
    if (uVar7 < 4) {
      uVar1 = uVar11 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar2 = 4;
      if (uVar7 < 4) {
        uVar2 = uVar7;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar5 | uVar1) + 1;
  }
LAB_1007a70a0:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar8);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar8) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x1007a7114 | FUN_1007a7114 */

void FUN_1007a7114(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar8 = lVar10 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar8 &
                    (uVar8 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar9 + 0x50) &
                   ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar7 = *(ulong *)(*(long *)(lVar10 + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (uVar8 < uVar7 + 1) {
    uVar8 = uVar7 + 1;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar8 & 3) << 3));
  if (3 < (uint)uVar8) {
    uVar4 = 0xfc;
  }
  sVar2 = uVar8 + 1;
  uVar13 = (uint)sVar2;
  if (uVar4 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar13 << 3 & 0x1f))) - uVar4 >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar11 = 2;
    if (0xffff < uVar1) {
      bVar11 = 4;
    }
    if (uVar1 < 0x100) {
      bVar11 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar13 < 4) {
      bVar5 = bVar11;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar4 < param_2) {
    param_2 = param_2 + ~uVar4;
    if (uVar13 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar3 = (undefined2)uVar4;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar13 == 2) {
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
      *(char *)((long)param_1 + uVar8) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1007a7354 | FUN_1007a7354 */

uint FUN_1007a7354(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar4 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar9 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar7 < uVar5 + 1) {
    uVar7 = uVar5 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)uVar7;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar2;
      }
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
    uVar2 = uVar6 | bVar1 - 3 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Address: 0x1007a7470 | FUN_1007a7470 */

void FUN_1007a7470(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 < 3) {
    lVar7 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar3 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    lVar1 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar1 = lVar1 + 1;
    }
    uVar6 = lVar1 + ((*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar6 & (uVar6 ^ 0xffffffffffffffff)
                     ) + *(long *)(lVar4 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
                    ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff));
    if (uVar6 < uVar3 + 1) {
      uVar6 = uVar3 + 1;
    }
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(char *)((long)param_1 + uVar6) = (char)param_2;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
    lVar4 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    lVar1 = *(long *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar1 = lVar1 + 1;
    }
    uVar3 = lVar1 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar3 &
                     (uVar3 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
                    ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff));
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar6 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar3;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1,uVar3);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007a7658 | FUN_1007a7658 */

void FUN_1007a7658(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x1007a7664 | FUN_1007a7664 */

void FUN_1007a7664(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 0x3e);
  uVar1 = param_2;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      return;
    }
    uVar1 = param_1 & 0x3fffffffffffffff;
    param_3 = param_2;
  }
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1007a76b4 | FUN_1007a76b4 */

void FUN_1007a76b4(undefined8 *param_1)

{
  FUN_1007a76c4(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007a76c4 | FUN_1007a76c4 */

void FUN_1007a76c4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 0x3e);
  uVar1 = param_2;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      return;
    }
    uVar1 = param_1 & 0x3fffffffffffffff;
    param_3 = param_2;
  }
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1007a7714 | FUN_1007a7714 */

void FUN_1007a7714(void)

{
  FUN_10076ef9c();
  return;
}



/* Address: 0x1007a7728 | FUN_1007a7728 */

void FUN_1007a7728(void)

{
  FUN_10076f008();
  return;
}



/* Address: 0x1007a7734 | thunk_FUN_1007a7738 */

int thunk_FUN_1007a7738(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007a7738 | FUN_1007a7738 */

int FUN_1007a7738(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007a7794 | thunk_FUN_1007a7798 */

void thunk_FUN_1007a7798(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1007a7798 | FUN_1007a7798 */

void FUN_1007a7798(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1007a77f0 | FUN_1007a77f0 */

uint FUN_1007a77f0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (int)(uVar1 >> 3) + 2;
  if (-1 < (long)uVar1) {
    uVar2 = (uint)(uVar1 >> 0x3e);
  }
  return uVar2;
}



/* Address: 0x1007a780c | thunk_FUN_1007a7810 */

void thunk_FUN_1007a7810(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 2) << 3 | 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1007a7810 | FUN_1007a7810 */

void FUN_1007a7810(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 2) << 3 | 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1007a7840 | FUN_1007a7840 */

void FUN_1007a7840(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc040c);
  return;
}



/* Address: 0x1007a784c | thunk_FUN_1007a7890 */

void thunk_FUN_1007a7890(void)

{
  FUN_1007a7890();
  return;
}



/* Address: 0x1007a7850 | FUN_1007a7850 */

void FUN_1007a7850(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_release();
    _swift_bridgeObjectRelease(param_1[1]);
    return;
  }
  return;
}



/* Address: 0x1007a7890 | FUN_1007a7890 */

ulong * FUN_1007a7890(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    uVar2 = param_2[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    _swift_retain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1007a78e4 | FUN_1007a78e4 */

ulong * FUN_1007a78e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_retain();
      _swift_release(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1007a799c | FUN_1007a799c */

ulong * FUN_1007a799c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else if (*param_2 < 0xffffffff) {
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    _swift_release(uVar1);
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x1007a7a28 | FUN_1007a7a28 */

void FUN_1007a7a28(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc0478);
  return;
}



/* Address: 0x1007a7a34 | thunk_FUN_1003b8bb0 */

void thunk_FUN_1003b8bb0(ulong *param_1)

{
  *param_1 = *param_1 & 0x3fffffffffffffff;
  return;
}



/* Address: 0x1007a7a38 | thunk_FUN_1007a77f0 */

uint thunk_FUN_1007a77f0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (int)(uVar1 >> 3) + 2;
  if (-1 < (long)uVar1) {
    uVar2 = (uint)(uVar1 >> 0x3e);
  }
  return uVar2;
}



/* Address: 0x1007a7a3c | thunk_FUN_1007a7798 */

void thunk_FUN_1007a7798(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1007a7a40 | thunk_FUN_1007a16f4 */

void thunk_FUN_1007a16f4(void)

{
  thunk_FUN_1007a16f4();
  return;
}



/* Address: 0x1007a7a44 | thunk_FUN_1007a45a4 */

void thunk_FUN_1007a45a4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x1007a7a48 | thunk_FUN_1007a7658 */

void thunk_FUN_1007a7658(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x1007a7a4c | thunk_FUN_1007a7738 */

int thunk_FUN_1007a7738(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007a7a50 | thunk_FUN_1007a7810 */

void thunk_FUN_1007a7810(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 2) << 3 | 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1007a7a54 | thunk_FUN_1007a7890 */

void thunk_FUN_1007a7890(void)

{
  FUN_1007a7890();
  return;
}



/* Address: 0x1007a7a58 | thunk_FUN_1007a4374 */

void thunk_FUN_1007a4374(void)

{
  FUN_1007a4374();
  return;
}



/* Address: 0x1007a7a5c | FUN_1007a7a5c */

void FUN_1007a7a5c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  long local_28;
  
  puVar2 = &local_60;
  local_30 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  local_60 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  local_40 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = 0x13f;
  FUN_1007a1350();
  if (puVar2 < (undefined1 *)0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x80);
  }
  return;
}



/* Address: 0x1007a7aec | FUN_1007a7aec */

void FUN_1007a7aec(void)

{
  undefined *puVar1;
  Task TVar2;
  CancellationError CVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  Task local_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar8 = *unaff_x20;
  lStack_98 = *(long *)(lVar8 + 0x58);
  local_a0.unknown = *(undefined **)(lVar8 + 0x50);
  uStack_88 = *(undefined8 *)(lVar8 + 0x68);
  uStack_90 = *(undefined8 *)(lVar8 + 0x60);
  uStack_78 = *(undefined8 *)(lVar8 + 0x78);
  local_80 = *(undefined8 *)(lVar8 + 0x70);
  FUN_1007a7a28(0,&local_a0);
  FUN_10079f5b0(&local_a0,FUN_1007a7e78);
  lVar8 = lStack_98;
  TVar2.unknown = local_a0.unknown;
  if (local_a0.unknown != (undefined *)0x0) {
    lVar11 = *(long *)(lStack_98 + 0x10);
    if (lVar11 == 0) {
      _swift_retain(local_a0.unknown);
    }
    else {
      puVar9 = (undefined8 *)(lStack_98 + 0x20);
      CVar3 = Swift::CancellationError::typeMetadataAccessor();
      CVar4 = CVar3;
      FUN_10076915c();
      _swift_retain(TVar2.unknown);
      puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        uVar10 = *puVar9;
        CVar5 = CVar3;
        _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
        Swift::CancellationError::init();
        puVar6 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar7 = (undefined8 *)puVar1;
        _swift_allocError();
        *puVar7 = CVar5.unknown;
        _swift_continuation_throwingResumeWithError(uVar10,puVar6);
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar11 != 0);
    }
    Swift::Task::cancel(TVar2);
    FUN_100774094(TVar2.unknown,lVar8);
    _swift_release(TVar2.unknown);
  }
  return;
}



/* Address: 0x1007a7c60 | FUN_1007a7c60 */

void FUN_1007a7c60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1007a7c80,0,0);
  return;
}



/* Address: 0x1007a7c80 | FUN_1007a7c80 */

void FUN_1007a7c80(void)

{
  Optional OVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&DAT_100c78130,*(undefined8 *)(unaff_x22 + 0x18),
                FUN_1007a8f08,*(undefined8 *)(unaff_x22 + 0x18),0,0,OVar1.value);
  return;
}



/* Address: 0x1007a7d3c | FUN_1007a7d3c */

void FUN_1007a7d3c(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *unaff_x20;
  _swift_slowDealloc(unaff_x20[2],0xffffffffffffffff,0xffffffffffffffff);
  lVar2 = *(long *)(*unaff_x20 + 0x88);
  uStack_58 = *(undefined8 *)(lVar1 + 0x58);
  local_60 = *(undefined8 *)(lVar1 + 0x50);
  uStack_48 = *(undefined8 *)(lVar1 + 0x68);
  uStack_50 = *(undefined8 *)(lVar1 + 0x60);
  uStack_38 = *(undefined8 *)(lVar1 + 0x78);
  local_40 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_1007a1350(0,&local_60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Address: 0x1007a7db4 | FUN_1007a7db4 */

void FUN_1007a7db4(void)

{
  FUN_1007a7d3c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007a7dd8 | FUN_1007a7dd8 */

void FUN_1007a7dd8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc04e4);
  return;
}



/* Address: 0x1007a7de4 | FUN_1007a7de4 */

void FUN_1007a7de4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &local_90;
  lVar3 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar3 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar3 + 0x58);
  local_90 = *(undefined8 *)(lVar3 + 0x50);
  uStack_78 = *(undefined8 *)(lVar3 + 0x68);
  uStack_80 = *(undefined8 *)(lVar3 + 0x60);
  uStack_68 = *(undefined8 *)(lVar3 + 0x78);
  local_70 = *(undefined8 *)(lVar3 + 0x70);
  uVar1 = 0;
  FUN_1007a1350();
  FUN_1007a2c04();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1007a7e78 | FUN_1007a7e78 */

void FUN_1007a7e78(void)

{
  FUN_1007a7de4();
  return;
}



/* Address: 0x1007a7e90 | FUN_1007a7e90 */

void FUN_1007a7e90(undefined8 param_1,long *param_2)

{
  Result RVar1;
  Optional OVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined7 extraout_var_00;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(long **)(unaff_x22 + 0xa8) = param_2;
  lVar11 = *param_2;
  uVar9 = *(undefined8 *)(lVar11 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  lVar8 = *(long *)(lVar11 + 0x50);
  *(long *)(unaff_x22 + 0xb8) = lVar8;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 200) = CONCAT71(extraout_var,RVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  uVar10 = *(undefined8 *)(lVar11 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xe8) = CONCAT71(extraout_var_00,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  lVar12 = *(long *)(lVar11 + 0x58);
  *(long *)(unaff_x22 + 0x100) = lVar12;
  lVar6 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar4;
  lVar6 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  uVar3 = *(undefined8 *)(lVar11 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  uVar7 = *(undefined8 *)(lVar11 + 0x78);
  *(long *)(unaff_x22 + 0x10) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
  *(long *)(unaff_x22 + 0x18) = lVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  lVar6 = 0;
  FUN_1007a4368();
  *(long *)(unaff_x22 + 0x138) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x140) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar4;
  _swift_task_switch(FUN_1007a8034,0,0);
  return;
}



/* Address: 0x1007a8034 | FUN_1007a8034 */

void FUN_1007a8034(void)

{
  long lVar1;
  int iVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar12 = *(long *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  plVar16 = *(long **)(unaff_x22 + 0xa8);
  lVar5 = plVar16[2];
  uVar20 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  _os_unfair_lock_lock();
  lVar9 = *(long *)(*plVar16 + 0x88);
  _swift_beginAccess((long)plVar16 + lVar9,unaff_x22 + 0x70,0x21,0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar19;
  FUN_1007a1350(0);
  FUN_1007a3bb8(uVar13);
  _swift_endAccess(unaff_x22 + 0x70);
  (**(code **)(lVar12 + 0x10))(uVar14,uVar13,uVar8);
  _swift_getEnumCaseMultiPayload(uVar14,uVar8);
  iVar4 = (int)uVar14;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar18 = *(long *)(unaff_x22 + 0x148);
      lVar12 = *(long *)(unaff_x22 + 0x118);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar5 = *(long *)(unaff_x22 + 0x108);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar1 = *(long *)(unaff_x22 + 0xf0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar6 = 0;
      _swift_getTupleTypeMetadata3(0,uVar11,uVar10,uVar8,0,0);
      iVar4 = *(int *)(lVar6 + 0x30);
      iVar2 = *(int *)(lVar6 + 0x40);
      (**(code **)(lVar12 + 0x20))(uVar13,lVar18,uVar11);
      (**(code **)(lVar5 + 0x20))(uVar15,lVar18 + iVar4,uVar10);
      (**(code **)(lVar1 + 0x20))(uVar14,lVar18 + iVar2,uVar8);
      _swift_beginAccess((long)plVar16 + lVar9,unaff_x22 + 0x88,0x21,0);
      FUN_1007a8890((long)plVar16 + lVar9,uVar13,uVar15,uVar14);
      _swift_endAccess(unaff_x22 + 0x88);
      plVar16 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x158) = plVar16;
      OVar3 = Swift::Optional::typeMetadataAccessor();
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_1007a848c;
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
      UNRECOVERED_JUMPTABLE = thunk_FUN_1007a8fc4;
LAB_1007a8324:
      FUN_100790978(uVar14,0,0,UNRECOVERED_JUMPTABLE,uVar8,OVar3.value);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar9 = *(long *)(unaff_x22 + 0x140);
    lVar12 = *(long *)(unaff_x22 + 0xd0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar15 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(lVar12 + 0x20))(uVar11,*(undefined8 *)(unaff_x22 + 0x148),uVar15);
    _os_unfair_lock_unlock(lVar5);
    pTVar7 = &TargetProtocolConformanceDescriptor_100c78b28;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78b28,uVar15);
    FUN_1007c346c(uVar13,uVar15,pTVar7);
    (**(code **)(lVar12 + 8))(uVar11,uVar15);
    (**(code **)(lVar9 + 8))(uVar8,uVar14);
    lVar12 = *(long *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
    uVar8 = 0;
  }
  else {
    if (iVar4 == 2) {
      lVar12 = *(long *)(unaff_x22 + 0x140);
      _os_unfair_lock_unlock(lVar5);
      _swift_willThrow();
      (**(code **)(lVar12 + 8))
                (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
      uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1007a846c;
    }
    if (iVar4 != 3) {
      plVar16 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x168) = plVar16;
      OVar3 = Swift::Optional::typeMetadataAccessor();
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_1007a85d8;
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
      UNRECOVERED_JUMPTABLE = FUN_1007a8fc4;
      goto LAB_1007a8324;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar9 = *(long *)(unaff_x22 + 0x140);
    lVar12 = *(long *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    _os_unfair_lock_unlock(lVar5);
    (**(code **)(lVar9 + 8))(uVar11,uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
    uVar8 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar14,uVar8,1,lVar12);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1007a846c:
                    /* WARNING: Could not recover jumptable at 0x0001007a8488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1007a848c | FUN_1007a848c */

void FUN_1007a848c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007a84f0;
  }
  else {
    pcVar1 = FUN_1007a86d0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007a84f0 | FUN_1007a84f0 */

void FUN_1007a84f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar4 = *(long *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar3 = *(long *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar3 + 8))(uVar7,uVar8);
  (**(code **)(lVar2 + 8))(uVar5,uVar9);
  (**(code **)(lVar4 + 8))(uVar6,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001007a85d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007a85d8 | FUN_1007a85d8 */

void FUN_1007a85d8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007a863c;
  }
  else {
    pcVar1 = FUN_1007a87a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007a863c | FUN_1007a863c */

void FUN_1007a863c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001007a86cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007a86d0 | FUN_1007a86d0 */

void FUN_1007a86d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar2 = *(long *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar2 + 8))(uVar4,uVar6);
  (**(code **)(lVar1 + 8))(uVar3,uVar5);
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001007a879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007a87a0 | FUN_1007a87a0 */

void FUN_1007a87a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (**(code **)(*(long *)(unaff_x22 + 0x140) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x138));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001007a8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007a8834 | FUN_1007a8834 */

void FUN_1007a8834(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1007a7e90(plVar1,param_1);
  return;
}



/* Address: 0x1007a8890 | FUN_1007a8890 */

void FUN_1007a8890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar7;
  
  lVar17 = *unaff_x20;
  uVar12 = *(undefined8 *)(lVar17 + 0x60);
  local_f0 = param_2;
  local_e0 = param_3;
  local_d8 = param_4;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar6.value);
  lVar13 = *(long *)(lVar7 + -8);
  local_c8 = *(long *)(lVar13 + 0x40);
  lVar24 = (long)&local_110 - (local_c8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar17 + 0x50);
  lVar2 = *(long *)(lVar17 + 0x58);
  lVar14 = *(long *)(lVar2 + -8);
  local_e8 = *(long *)(lVar14 + 0x40);
  lVar22 = lVar24 - (local_e8 + 0xfU & 0xfffffffffffffff0);
  lVar21 = *(long *)(lVar1 + -8);
  lVar16 = *(long *)(lVar21 + 0x40);
  lVar26 = lVar22 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fe0dc8;
  local_110 = lVar7;
  local_108 = lVar26;
  local_100 = lVar22;
  local_f8 = lVar24;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar18 = lVar26 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar18;
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar18,1,1,TVar9.unknown);
  (**(code **)(lVar21 + 0x10))(lVar26,local_f0,lVar1);
  (**(code **)(lVar14 + 0x10))(lVar22,local_e0,lVar2);
  (**(code **)(lVar13 + 0x10))(lVar24,local_d8,lVar7);
  bVar3 = *(byte *)(lVar21 + 0x50);
  uVar23 = (ulong)bVar3 + 0x58 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  bVar4 = *(byte *)(lVar14 + 0x50);
  uVar25 = lVar16 + (ulong)bVar4 + uVar23 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  bVar5 = *(byte *)(lVar13 + 0x50);
  uVar15 = local_e8 + (ulong)bVar5 + uVar25 & ((ulong)bVar5 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100f01188;
  _swift_allocObject(&DAT_100f01188,uVar15 + local_c8,bVar3 | bVar4 | bVar5 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(long *)(puVar8 + 0x20) = lVar1;
  *(long *)(puVar8 + 0x28) = lVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  uVar27 = *(undefined8 *)(lVar17 + 0x68);
  *(undefined8 *)(puVar8 + 0x38) = uVar27;
  uVar20 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)(puVar8 + 0x40) = uVar20;
  uVar19 = *(undefined8 *)(lVar17 + 0x78);
  *(undefined8 *)(puVar8 + 0x48) = uVar19;
  *(long **)(puVar8 + 0x50) = unaff_x20;
  (**(code **)(lVar21 + 0x20))(puVar8 + uVar23,local_108);
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar25,local_100,lVar2);
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar15,local_f8,local_110);
  _swift_retain(unaff_x20);
  uVar10 = 0;
  FUN_100731e58(0,0,local_d0,&DAT_100c78140,puVar8);
  uVar11 = 0;
  local_98 = lVar1;
  lStack_90 = lVar2;
  local_88 = uVar12;
  uStack_80 = uVar27;
  local_78 = uVar20;
  uStack_70 = uVar19;
  FUN_1007a1350(0,&local_98);
  FUN_1007a2dc0(uVar10,uVar11);
  _swift_release(uVar10);
  return;
}



/* Address: 0x1007a8b30 | FUN_1007a8b30 */

void FUN_1007a8b30(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_48,0x21,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  local_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  local_60 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_1007a1350(0,&local_80);
  FUN_1007a41a4(param_1,uVar1);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(param_2[2]);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      _swift_continuation_throwingResume(*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1007a8be0 | FUN_1007a8be0 */

void FUN_1007a8be0(long *param_1)

{
  Task TVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 uVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  Task local_a0;
  ulong local_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar4;
  
  lVar15 = *param_1;
  uVar13 = *(undefined8 *)(lVar15 + 0x68);
  uVar14 = *(ulong *)(lVar15 + 0x50);
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar13,uVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar2.value);
  lVar18 = (long)&local_c0 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = param_1[2];
  lStack_88 = *(long *)(lVar15 + 0x60);
  local_90 = *(undefined **)(lVar15 + 0x58);
  uStack_70 = *(undefined8 *)(lVar15 + 0x78);
  local_78 = *(undefined8 *)(lVar15 + 0x70);
  uVar5 = 0;
  local_98 = uVar14;
  local_80 = uVar13;
  FUN_1007a7840(0,&local_98);
  FUN_10079f5b0(&local_98,FUN_1007a8fac,param_1,lVar17,uVar5);
  puVar10 = local_90;
  uVar14 = local_98;
  uVar12 = (uint)(local_98 >> 0x3e);
  if (uVar12 == 0) {
    local_a8 = lStack_88;
    lVar15 = *(long *)(lStack_88 + 0x10);
    local_a0.unknown = local_90;
    local_c0 = lVar18;
    lStack_b8 = lVar3;
    local_b0 = lVar4;
    if (lVar15 == 0) {
      _swift_retain(local_90);
    }
    else {
      puVar16 = (undefined8 *)(lStack_88 + 0x20);
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar6;
      FUN_10076915c();
      _swift_retain(puVar10);
      puVar10 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        uVar5 = *puVar16;
        CVar8 = CVar6;
        _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
        Swift::CancellationError::init();
        puVar9 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar11 = (undefined8 *)puVar10;
        _swift_allocError();
        *puVar11 = CVar8.unknown;
        _swift_continuation_throwingResumeWithError(uVar5,puVar9);
        lVar15 = lVar15 + -1;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
    }
    TVar1.unknown = local_a0.unknown;
    Swift::Task::cancel(local_a0);
    lVar3 = local_c0;
    (**(code **)(*(long *)(lStack_b8 + -8) + 0x38))(local_c0,1,1);
    puVar10 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(lVar3,uVar14,local_b0,puVar10,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    _swift_release(TVar1.unknown);
    FUN_1007a76c4(uVar14,TVar1.unknown,local_a8);
  }
  else if (uVar12 == 1) {
    local_a8 = lStack_88;
    local_a0.unknown = local_90;
    lVar3 = *(long *)(local_90 + 0x10);
    if (lVar3 == 0) {
      _swift_retain(local_98 & 0x3fffffffffffffff);
    }
    else {
      puVar16 = (undefined8 *)(local_90 + 0x20);
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar6;
      FUN_10076915c();
      _swift_retain(uVar14 & 0x3fffffffffffffff);
      puVar10 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        uVar5 = *puVar16;
        CVar8 = CVar6;
        _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
        Swift::CancellationError::init();
        puVar9 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar11 = (undefined8 *)puVar10;
        _swift_allocError();
        *puVar11 = CVar8.unknown;
        _swift_continuation_throwingResumeWithError(uVar5,puVar9);
        lVar3 = lVar3 + -1;
        puVar16 = puVar16 + 1;
      } while (lVar3 != 0);
    }
    Swift::Task::cancel((undefined *)(uVar14 & 0x3fffffffffffffff));
    FUN_1007a76c4(uVar14,local_a0.unknown,local_a8);
    _swift_release(uVar14 & 0x3fffffffffffffff);
  }
  return;
}



/* Address: 0x1007a8f08 | FUN_1007a8f08 */

void FUN_1007a8f08(void)

{
  FUN_1007a8be0();
  return;
}



/* Address: 0x1007a8f10 | FUN_1007a8f10 */

void FUN_1007a8f10(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &local_90;
  lVar4 = *param_2;
  uVar3 = 0x21;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  local_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  local_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_1007a1350();
  FUN_1007a39b8();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = uVar3;
  return;
}


