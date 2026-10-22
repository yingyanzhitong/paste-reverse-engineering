/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007c45f4 | FUN_1007c45f4 */

void FUN_1007c45f4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78d00,param_1);
  return;
}



/* Address: 0x1007c4604 | FUN_1007c4604 */

void FUN_1007c4604(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc0fe4);
  return;
}



/* Address: 0x1007c4610 | FUN_1007c4610 */

void FUN_1007c4610(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc1038);
  return;
}



/* Address: 0x1007c461c | FUN_1007c461c */

void FUN_1007c461c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc108c);
  return;
}



/* Address: 0x1007c4628 | FUN_1007c4628 */

void FUN_1007c4628(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar2 = &local_50;
  puStack_48 = *(undefined **)(param_1 + 0x18);
  local_50 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0x13f;
  FUN_1007c7be0();
  if (plVar2 < (undefined1 *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_50,param_1 + 0x40);
  }
  return;
}



/* Address: 0x1007c46b0 | FUN_1007c46b0 */

long * FUN_1007c46b0(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  size_t sVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  size_t sVar33;
  size_t sVar34;
  size_t sVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long lVar44;
  code *pcVar45;
  long lVar46;
  
  puVar15 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar14 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar44 = *(long *)(lVar19 + -8);
  lVar23 = *(long *)(lVar9 + -8);
  uVar11 = *(uint *)(lVar23 + 0x50);
  uVar26 = (ulong)uVar11 & 0xff;
  uVar40 = *(long *)(lVar44 + 0x40) + uVar26;
  lVar27 = *(long *)(lVar23 + 0x40);
  lVar29 = *(long *)(lVar10 + -8);
  uVar28 = *(uint *)(lVar29 + 0x50);
  uVar30 = (ulong)uVar28 & 0xff;
  sVar24 = *(size_t *)(lVar29 + 0x40);
  if (*(int *)(lVar29 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  uVar3 = sVar24 + (lVar27 + uVar30 + (uVar40 & (uVar26 ^ 0xffffffffffffffff)) &
                   (uVar30 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar36 = *(long *)(lVar16 + -8);
  uVar32 = *(uint *)(lVar36 + 0x50);
  uVar43 = (ulong)uVar32 & 0xff;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar15,puVar14);
  lVar46 = *(long *)(lVar17 + -8);
  uVar12 = *(uint *)(lVar46 + 0x50);
  uVar21 = (ulong)uVar12 & 0xff;
  uVar41 = uVar21 | 7;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar15,puVar14);
  lVar39 = *(long *)(lVar18 + -8);
  uVar22 = (ulong)*(uint *)(lVar39 + 0x50) & 0xff;
  uVar25 = uVar22 | 7;
  uVar31 = uVar21 | uVar43 | uVar22;
  sVar33 = *(size_t *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  uVar4 = sVar33 + uVar41 + (uVar43 + 8 & (uVar43 ^ 0xffffffffffffffff));
  uVar1 = uVar21 + 8;
  sVar35 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar5 = sVar35 + uVar25 + (uVar1 & (uVar21 ^ 0xffffffffffffffff));
  uVar2 = uVar22 + 8;
  sVar34 = *(size_t *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar6 = sVar34 + (uVar2 & (uVar22 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar41 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff));
  uVar7 = lVar6 + ((ulong)((uint)uVar31 & 0xf8 ^ 0x1f8) & uVar31 + 8);
  uVar8 = uVar7;
  if (uVar7 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar7 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  uVar28 = uVar28 | uVar11;
  uVar31 = uVar31 | ((uVar28 | *(uint *)(lVar44 + 0x50)) & 0xf8 | 7);
  if (((uVar31 != 7) ||
      (((uVar28 | uVar32 | uVar12 | *(uint *)(lVar39 + 0x50) | *(uint *)(lVar44 + 0x50)) >> 0x14 & 1
       ) != 0)) || (0x18 < (uVar3 & 0xfffffffffffffff8) + 0x10)) {
    lVar27 = *(long *)param_2;
    *param_1 = lVar27;
    _swift_retain();
    return (long *)(lVar27 + (uVar31 + 0x10 & (uVar31 ^ 0xffffffffffffffff)));
  }
  bVar13 = *(byte *)((long)param_2 + uVar3);
  uVar28 = (uint)bVar13;
  if (2 < bVar13) {
    uVar32 = (uint)uVar3;
    uVar11 = 4;
    if (uVar32 < 4) {
      uVar11 = uVar32;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007c4998;
      uVar28 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar28 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar28 = (uint)(uint3)*param_2;
    }
    else {
      uVar28 = *param_2;
    }
    if (uVar32 < 4) {
      uVar28 = (uVar28 | bVar13 - 3 << (ulong)((uVar32 & 3) << 3)) + 3;
    }
    else {
      uVar28 = uVar28 + 3;
    }
  }
LAB_1007c4998:
  uVar31 = ~uVar43;
  uVar41 = ~uVar41;
  uVar21 = ~uVar21;
  uVar25 = ~uVar25;
  uVar22 = ~uVar22;
  if (uVar28 == 2) {
    *param_1 = *(long *)param_2;
    puVar37 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar42 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar37 = *puVar42;
    uVar40 = (long)puVar37 + uVar43 + 8;
    uVar26 = (long)puVar42 + uVar43 + 8;
    pcVar45 = *(code **)(lVar36 + 0x30);
    _swift_retain();
    uVar30 = uVar26 & uVar31;
    (*pcVar45)(uVar30,1,lVar16);
    if ((int)uVar30 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar40 & uVar31,uVar26 & uVar31,lVar16);
      (**(code **)(lVar36 + 0x38))(uVar40 & uVar31,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar40 & uVar31),(void *)(uVar26 & uVar31),sVar33);
    }
    puVar38 = (undefined8 *)(uVar4 + (long)puVar37 & uVar41);
    puVar37 = (undefined8 *)(uVar4 + (long)puVar42 & uVar41);
    *puVar38 = *puVar37;
    uVar40 = uVar1 + (long)puVar38;
    uVar1 = uVar1 + (long)puVar37;
    uVar26 = uVar1 & uVar21;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar40 & uVar21,uVar1 & uVar21,lVar17);
      (**(code **)(lVar46 + 0x38))(uVar40 & uVar21,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar40 & uVar21),(void *)(uVar1 & uVar21),sVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar38 & uVar25);
    puVar37 = (undefined8 *)(lVar5 + (long)puVar37 & uVar25);
    *puVar42 = *puVar37;
    uVar40 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar37;
    uVar26 = uVar2 & uVar22;
    (**(code **)(lVar39 + 0x30))(uVar26,1,lVar18);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar40 & uVar22,uVar2 & uVar22,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar40 & uVar22,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar40 & uVar22),(void *)(uVar2 & uVar22),sVar34);
    }
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar6 & 0xfffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar6 & 0xfffffffffffffff8);
    uVar20 = 2;
  }
  else {
    if (uVar28 != 1) {
      if (uVar28 == 0) {
        uVar22 = ~uVar30;
        (**(code **)(lVar44 + 0x10))(param_1,param_2,lVar19);
        uVar21 = uVar40 + (long)param_1 & ~uVar26;
        uVar40 = (ulong)(uVar40 + (long)param_2) & ~uVar26;
        (**(code **)(lVar23 + 0x10))(uVar21,uVar40,lVar9);
        lVar27 = lVar27 + uVar30;
        uVar21 = uVar21 + lVar27;
        uVar40 = uVar40 + lVar27;
        uVar26 = uVar40 & uVar22;
        (**(code **)(lVar29 + 0x30))(uVar26,1,lVar10);
        if ((int)uVar26 == 0) {
          (**(code **)(lVar29 + 0x10))(uVar21 & uVar22,uVar40 & uVar22,lVar10);
          (**(code **)(lVar29 + 0x38))(uVar21 & uVar22,0,1,lVar10);
          *(undefined1 *)((long)param_1 + uVar3) = 0;
        }
        else {
          _memcpy((void *)(uVar21 & uVar22),(void *)(uVar40 & uVar22),sVar24);
          *(undefined1 *)((long)param_1 + uVar3) = 0;
        }
      }
      else {
        _memcpy(param_1,param_2,uVar3 + 1);
      }
      goto LAB_1007c4e5c;
    }
    *param_1 = *(long *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar37 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar42 = *puVar37;
    uVar40 = (long)puVar42 + uVar43 + 8;
    uVar26 = (long)puVar37 + uVar43 + 8;
    pcVar45 = *(code **)(lVar36 + 0x30);
    _swift_retain();
    uVar30 = uVar26 & uVar31;
    (*pcVar45)(uVar30,1,lVar16);
    if ((int)uVar30 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar40 & uVar31,uVar26 & uVar31,lVar16);
      (**(code **)(lVar36 + 0x38))(uVar40 & uVar31,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar40 & uVar31),(void *)(uVar26 & uVar31),sVar33);
    }
    puVar42 = (undefined8 *)(uVar4 + (long)puVar42 & uVar41);
    puVar37 = (undefined8 *)(uVar4 + (long)puVar37 & uVar41);
    *puVar42 = *puVar37;
    uVar40 = uVar1 + (long)puVar42;
    uVar1 = uVar1 + (long)puVar37;
    uVar26 = uVar1 & uVar21;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar40 & uVar21,uVar1 & uVar21,lVar17);
      (**(code **)(lVar46 + 0x38))(uVar40 & uVar21,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar40 & uVar21),(void *)(uVar1 & uVar21),sVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar42 & uVar25);
    puVar37 = (undefined8 *)(lVar5 + (long)puVar37 & uVar25);
    *puVar42 = *puVar37;
    uVar40 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar37;
    uVar26 = uVar2 & uVar22;
    (**(code **)(lVar39 + 0x30))(uVar26,1,lVar18);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar40 & uVar22,uVar2 & uVar22,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar40 & uVar22,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar40 & uVar22),(void *)(uVar2 & uVar22),sVar34);
    }
    uVar20 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar20;
LAB_1007c4e5c:
  *(undefined8 *)((long)param_1 + uVar3 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar3 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007c4ed4 | FUN_1007c4ed4 */

undefined8 * FUN_1007c4ed4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  size_t sVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  size_t sVar32;
  size_t sVar33;
  size_t sVar34;
  ulong uVar35;
  undefined8 *puVar36;
  code *pcVar37;
  ulong uVar38;
  undefined8 *puVar39;
  uint uVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 *puVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar18 + -8);
  lVar22 = *(long *)(lVar9 + -8);
  uVar26 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar43 = *(long *)(lVar20 + 0x40) + uVar26;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar27 = *(long *)(lVar10 + -8);
  uVar29 = (ulong)*(byte *)(lVar27 + 0x50);
  sVar24 = *(size_t *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  uVar3 = sVar24 + (lVar23 + uVar29 + (uVar43 & (uVar26 ^ 0xffffffffffffffff)) &
                   (uVar29 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar47 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar47 + 0x50);
  uVar44 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar46 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar46 + 0x50);
  uVar48 = (ulong)bVar12;
  uVar35 = uVar48 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar42 = *(long *)(lVar17 + -8);
  uVar28 = (ulong)*(byte *)(lVar42 + 0x50);
  uVar30 = uVar28 | 7;
  uVar21 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar42 + 0x50));
  uVar25 = uVar21 | 7;
  uVar38 = uVar44 + 8;
  sVar32 = *(size_t *)(lVar47 + 0x40);
  if (*(int *)(lVar47 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  uVar4 = sVar32 + (uVar38 & (uVar44 ^ 0xffffffffffffffff)) + uVar35;
  uVar1 = uVar48 + 8;
  sVar33 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  lVar5 = sVar33 + (uVar1 & (uVar48 ^ 0xffffffffffffffff)) + uVar30;
  uVar2 = uVar28 + 8;
  sVar34 = *(size_t *)(lVar42 + 0x40);
  if (*(int *)(lVar42 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar6 = sVar34 + (uVar2 & (uVar28 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar35 ^ 0xffffffffffffffff)) & (uVar30 ^ 0xffffffffffffffff));
  uVar21 = lVar6 + (uVar21 + 8 & (uVar25 ^ 0xffffffffffffffff));
  uVar8 = uVar21;
  if (uVar21 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar21 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  bVar11 = *(byte *)((long)param_2 + uVar3);
  uVar31 = (uint)bVar11;
  if (2 < bVar11) {
    uVar40 = (uint)uVar3;
    uVar7 = 4;
    if (uVar40 < 4) {
      uVar7 = uVar40;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c5138;
      uVar31 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_2;
    }
    else {
      uVar31 = *param_2;
    }
    if (uVar40 < 4) {
      uVar31 = uVar31 | bVar11 - 3 << (ulong)((uVar40 & 3) << 3);
    }
    uVar31 = uVar31 + 3;
  }
LAB_1007c5138:
  uVar21 = ~uVar25;
  uVar44 = ~uVar44;
  uVar35 = ~uVar35;
  uVar48 = ~uVar48;
  uVar30 = ~uVar30;
  uVar28 = ~uVar28;
  if (uVar31 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar45 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
    puVar41 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
    *puVar45 = *puVar41;
    uVar43 = uVar38 + (long)puVar45;
    uVar38 = uVar38 + (long)puVar41;
    pcVar37 = *(code **)(lVar47 + 0x30);
    _swift_retain();
    uVar26 = uVar38 & uVar44;
    (*pcVar37)(uVar26,1,lVar15);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar47 + 0x10))(uVar43 & uVar44,uVar38 & uVar44,lVar15);
      (**(code **)(lVar47 + 0x38))(uVar43 & uVar44,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar43 & uVar44),(void *)(uVar38 & uVar44),sVar32);
    }
    puVar36 = (undefined8 *)(uVar4 + (long)puVar45 & uVar35);
    puVar39 = (undefined8 *)(uVar4 + (long)puVar41 & uVar35);
    *puVar36 = *puVar39;
    uVar43 = uVar1 + (long)puVar36;
    uVar1 = uVar1 + (long)puVar39;
    uVar26 = uVar1 & uVar48;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar16);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar43 & uVar48,uVar1 & uVar48,lVar16);
      (**(code **)(lVar46 + 0x38))(uVar43 & uVar48,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar43 & uVar48),(void *)(uVar1 & uVar48),sVar33);
    }
    puVar36 = (undefined8 *)(lVar5 + (long)puVar36 & uVar30);
    puVar39 = (undefined8 *)(lVar5 + (long)puVar39 & uVar30);
    *puVar36 = *puVar39;
    uVar43 = uVar2 + (long)puVar36;
    uVar2 = uVar2 + (long)puVar39;
    uVar26 = uVar2 & uVar28;
    (**(code **)(lVar42 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar42 + 0x10))(uVar43 & uVar28,uVar2 & uVar28,lVar17);
      (**(code **)(lVar42 + 0x38))(uVar43 & uVar28,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar43 & uVar28),(void *)(uVar2 & uVar28),sVar34);
    }
    *(undefined8 *)((long)puVar45 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar41 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar19 = 2;
  }
  else {
    if (uVar31 != 1) {
      if (uVar31 == 0) {
        uVar21 = ~uVar29;
        (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar18);
        uVar38 = uVar43 + (long)param_1 & ~uVar26;
        uVar43 = (ulong)(uVar43 + (long)param_2) & ~uVar26;
        (**(code **)(lVar22 + 0x10))(uVar38,uVar43,lVar9);
        lVar23 = lVar23 + uVar29;
        uVar38 = uVar38 + lVar23;
        uVar43 = uVar43 + lVar23;
        uVar26 = uVar43 & uVar21;
        (**(code **)(lVar27 + 0x30))(uVar26,1,lVar10);
        if ((int)uVar26 == 0) {
          (**(code **)(lVar27 + 0x10))(uVar38 & uVar21,uVar43 & uVar21,lVar10);
          (**(code **)(lVar27 + 0x38))(uVar38 & uVar21,0,1,lVar10);
        }
        else {
          _memcpy((void *)(uVar38 & uVar21),(void *)(uVar43 & uVar21),sVar24);
        }
        *(undefined1 *)((long)param_1 + uVar3) = 0;
      }
      else {
        _memcpy(param_1,param_2,uVar3 + 1);
      }
      goto LAB_1007c5628;
    }
    *param_1 = *(undefined8 *)param_2;
    puVar41 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
    puVar45 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
    *puVar41 = *puVar45;
    uVar43 = uVar38 + (long)puVar41;
    uVar38 = uVar38 + (long)puVar45;
    pcVar37 = *(code **)(lVar47 + 0x30);
    _swift_retain();
    uVar26 = uVar38 & uVar44;
    (*pcVar37)(uVar26,1,lVar15);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar47 + 0x10))(uVar43 & uVar44,uVar38 & uVar44,lVar15);
      (**(code **)(lVar47 + 0x38))(uVar43 & uVar44,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar43 & uVar44),(void *)(uVar38 & uVar44),sVar32);
    }
    puVar41 = (undefined8 *)(uVar4 + (long)puVar41 & uVar35);
    puVar45 = (undefined8 *)(uVar4 + (long)puVar45 & uVar35);
    *puVar41 = *puVar45;
    uVar43 = uVar1 + (long)puVar41;
    uVar1 = uVar1 + (long)puVar45;
    uVar26 = uVar1 & uVar48;
    (**(code **)(lVar46 + 0x30))(uVar26,1,lVar16);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar43 & uVar48,uVar1 & uVar48,lVar16);
      (**(code **)(lVar46 + 0x38))(uVar43 & uVar48,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar43 & uVar48),(void *)(uVar1 & uVar48),sVar33);
    }
    puVar41 = (undefined8 *)(lVar5 + (long)puVar41 & uVar30);
    puVar45 = (undefined8 *)(lVar5 + (long)puVar45 & uVar30);
    *puVar41 = *puVar45;
    uVar43 = uVar2 + (long)puVar41;
    uVar2 = uVar2 + (long)puVar45;
    uVar26 = uVar2 & uVar28;
    (**(code **)(lVar42 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar42 + 0x10))(uVar43 & uVar28,uVar2 & uVar28,lVar17);
      (**(code **)(lVar42 + 0x38))(uVar43 & uVar28,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar43 & uVar28),(void *)(uVar2 & uVar28),sVar34);
    }
    uVar19 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar19;
LAB_1007c5628:
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007c5668 | FUN_1007c5668 */

void FUN_1007c5668(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  size_t sVar37;
  size_t sVar38;
  size_t sVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  ulong uVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  undefined8 *puVar49;
  ulong uVar50;
  ulong uVar51;
  long lVar52;
  undefined8 *puVar53;
  undefined8 local_78;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar16 = *(undefined8 *)(param_3 + 0x30);
    local_78 = *(undefined8 *)(param_3 + 0x38);
    goto LAB_1007c6124;
  }
  lVar33 = *(long *)(param_3 + 0x10);
  lVar27 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar33 + -8);
  lVar23 = *(long *)(lVar27 + -8);
  uVar29 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar32 = *(long *)(lVar19 + 0x40) + uVar29;
  lVar24 = *(long *)(lVar23 + 0x40);
  lVar22 = *(long *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar30 = *(long *)(lVar22 + -8);
  uVar34 = (ulong)*(byte *)(lVar30 + 0x50);
  sVar25 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar3 = sVar25 + (lVar24 + uVar34 + (uVar32 & (uVar29 ^ 0xffffffffffffffff)) &
                   (uVar34 ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness();
  lVar52 = *(long *)(lVar12 + -8);
  bVar8 = *(byte *)(lVar52 + 0x50);
  uVar45 = (ulong)bVar8;
  uVar16 = *(undefined8 *)(param_3 + 0x30);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,uVar16,lVar27,puVar11,puVar10);
  lVar41 = *(long *)(lVar13 + -8);
  bVar9 = *(byte *)(lVar41 + 0x50);
  uVar51 = (ulong)bVar9;
  uVar42 = uVar51 | 7;
  local_78 = *(undefined8 *)(param_3 + 0x38);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,local_78,lVar22,puVar11,puVar10);
  lVar40 = *(long *)(lVar14 + -8);
  uVar20 = (ulong)*(byte *)(lVar40 + 0x50);
  uVar26 = uVar20 | 7;
  uVar31 = (ulong)(byte)(bVar9 | bVar8 | *(byte *)(lVar40 + 0x50));
  uVar50 = uVar31 | 7;
  uVar46 = uVar45 + 8;
  sVar37 = *(size_t *)(lVar52 + 0x40);
  if (*(int *)(lVar52 + 0x54) == 0) {
    sVar37 = sVar37 + 1;
  }
  uVar4 = sVar37 + (uVar46 & (uVar45 ^ 0xffffffffffffffff)) + uVar42;
  uVar1 = uVar51 + 8;
  sVar38 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar5 = sVar38 + (uVar1 & (uVar51 ^ 0xffffffffffffffff)) + uVar26;
  uVar2 = uVar20 + 8;
  sVar39 = *(size_t *)(lVar40 + 0x40);
  if (*(int *)(lVar40 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar6 = sVar39 + (uVar2 & (uVar20 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar42 ^ 0xffffffffffffffff)) & (uVar26 ^ 0xffffffffffffffff));
  uVar31 = lVar6 + (uVar31 + 8 & (uVar50 ^ 0xffffffffffffffff));
  uVar35 = uVar31;
  if (uVar31 <= uVar3) {
    uVar35 = uVar3;
  }
  uVar3 = (uVar31 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar35) {
    uVar3 = uVar35;
  }
  uVar47 = (uint)uVar3;
  bVar8 = *(byte *)((long)param_1 + uVar3);
  uVar28 = (uint)bVar8;
  if (2 < bVar8) {
    uVar7 = 4;
    if (uVar47 < 4) {
      uVar7 = uVar47;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c5930;
      uVar28 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar28 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar28 = (uint)(uint3)*param_1;
    }
    else {
      uVar28 = *param_1;
    }
    if (uVar47 < 4) {
      uVar28 = uVar28 | bVar8 - 3 << (ulong)(uVar47 << 3 & 0x1f);
    }
    uVar28 = uVar28 + 3;
  }
LAB_1007c5930:
  uVar29 = ~uVar29;
  uVar31 = ~uVar34;
  uVar35 = ~uVar50;
  uVar45 = ~uVar45;
  uVar42 = ~uVar42;
  uVar51 = ~uVar51;
  uVar26 = ~uVar26;
  uVar20 = ~uVar20;
  if (uVar28 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar43 = (ulong)((long)param_1 + uVar50 + 8) & uVar35;
    uVar48 = uVar46 + uVar43;
    uVar15 = uVar48 & uVar45;
    (**(code **)(lVar52 + 0x30))(uVar15,1,lVar12);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar52 + 8))(uVar48 & uVar45,lVar12);
    }
    uVar15 = uVar4 + uVar43 & uVar42;
    uVar48 = uVar1 + uVar15 & uVar51;
    (**(code **)(lVar41 + 0x30))(uVar48,1,lVar13);
    if ((int)uVar48 == 0) {
      (**(code **)(lVar41 + 8))(uVar1 + uVar15 & uVar51,lVar13);
    }
    pcVar21 = *(code **)(lVar40 + 0x30);
LAB_1007c5b9c:
    uVar48 = uVar2 + (lVar5 + uVar15 & uVar26);
    uVar15 = uVar48 & uVar20;
    (*pcVar21)(uVar15,1,lVar14);
    if ((int)uVar15 == 0) {
      pcVar21 = *(code **)(lVar40 + 8);
      uVar48 = uVar48 & uVar20;
      lVar17 = lVar14;
LAB_1007c5bbc:
      (*pcVar21)(uVar48,lVar17);
    }
  }
  else {
    if (uVar28 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar43 = (ulong)((long)param_1 + uVar50 + 8) & uVar35;
      uVar48 = uVar46 + uVar43;
      uVar15 = uVar48 & uVar45;
      (**(code **)(lVar52 + 0x30))(uVar15,1,lVar12);
      if ((int)uVar15 == 0) {
        (**(code **)(lVar52 + 8))(uVar48 & uVar45,lVar12);
      }
      uVar15 = uVar4 + uVar43 & uVar42;
      uVar48 = uVar1 + uVar15 & uVar51;
      (**(code **)(lVar41 + 0x30))(uVar48,1,lVar13);
      if ((int)uVar48 == 0) {
        (**(code **)(lVar41 + 8))(uVar1 + uVar15 & uVar51,lVar13);
      }
      pcVar21 = *(code **)(lVar40 + 0x30);
      goto LAB_1007c5b9c;
    }
    if (uVar28 == 0) {
      (**(code **)(lVar19 + 8))(param_1,lVar33);
      uVar48 = (ulong)(uVar32 + (long)param_1) & uVar29;
      (**(code **)(lVar23 + 8))(uVar48,lVar27);
      uVar48 = uVar48 + lVar24 + uVar34;
      uVar15 = uVar48 & uVar31;
      (**(code **)(lVar30 + 0x30))(uVar15,1,lVar22);
      if ((int)uVar15 != 0) goto LAB_1007c5bc0;
      pcVar21 = *(code **)(lVar30 + 8);
      uVar48 = uVar48 & uVar31;
      lVar17 = lVar22;
      goto LAB_1007c5bbc;
    }
  }
LAB_1007c5bc0:
  bVar8 = *(byte *)((long)param_2 + uVar3);
  uVar28 = (uint)bVar8;
  if (2 < bVar8) {
    uVar7 = 4;
    if (uVar47 < 4) {
      uVar7 = uVar47;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto joined_r0x0001007c5c30;
      uVar28 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar28 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar28 = (uint)(uint3)*param_2;
    }
    else {
      uVar28 = *param_2;
    }
    if (uVar47 < 4) {
      uVar28 = (uVar28 | bVar8 - 3 << (ulong)(uVar47 << 3 & 0x1f)) + 3;
    }
    else {
      uVar28 = uVar28 + 3;
    }
  }
joined_r0x0001007c5c30:
  if (uVar28 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar36 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar35);
    puVar53 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar35);
    *puVar36 = *puVar53;
    uVar32 = uVar46 + (long)puVar36;
    uVar46 = uVar46 + (long)puVar53;
    pcVar21 = *(code **)(lVar52 + 0x30);
    _swift_retain();
    uVar29 = uVar46 & uVar45;
    (*pcVar21)(uVar29,1,lVar12);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar52 + 0x10))(uVar32 & uVar45,uVar46 & uVar45,lVar12);
      (**(code **)(lVar52 + 0x38))(uVar32 & uVar45,0,1,lVar12);
    }
    else {
      _memcpy((void *)(uVar32 & uVar45),(void *)(uVar46 & uVar45),sVar37);
    }
    puVar44 = (undefined8 *)(uVar4 + (long)puVar36 & uVar42);
    puVar49 = (undefined8 *)(uVar4 + (long)puVar53 & uVar42);
    *puVar44 = *puVar49;
    uVar32 = uVar1 + (long)puVar44;
    uVar1 = uVar1 + (long)puVar49;
    uVar29 = uVar1 & uVar51;
    (**(code **)(lVar41 + 0x30))(uVar29,1,lVar13);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar41 + 0x10))(uVar32 & uVar51,uVar1 & uVar51,lVar13);
      (**(code **)(lVar41 + 0x38))(uVar32 & uVar51,0,1,lVar13);
    }
    else {
      _memcpy((void *)(uVar32 & uVar51),(void *)(uVar1 & uVar51),sVar38);
    }
    puVar44 = (undefined8 *)(lVar5 + (long)puVar44 & uVar26);
    puVar49 = (undefined8 *)(lVar5 + (long)puVar49 & uVar26);
    *puVar44 = *puVar49;
    uVar32 = uVar2 + (long)puVar44;
    uVar2 = uVar2 + (long)puVar49;
    uVar29 = uVar2 & uVar20;
    (**(code **)(lVar40 + 0x30))(uVar29,1,lVar14);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar40 + 0x10))(uVar32 & uVar20,uVar2 & uVar20,lVar14);
      (**(code **)(lVar40 + 0x38))(uVar32 & uVar20,0,1,lVar14);
    }
    else {
      _memcpy((void *)(uVar32 & uVar20),(void *)(uVar2 & uVar20),sVar39);
    }
    *(undefined8 *)((long)puVar36 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar53 + lVar6 + 7 & 0xfffffffffffffff8);
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar28 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar36 = (undefined8 *)((ulong)((long)param_1 + uVar50 + 8) & uVar35);
    puVar53 = (undefined8 *)((ulong)((long)param_2 + uVar50 + 8) & uVar35);
    *puVar36 = *puVar53;
    uVar32 = uVar46 + (long)puVar36;
    uVar46 = uVar46 + (long)puVar53;
    pcVar21 = *(code **)(lVar52 + 0x30);
    _swift_retain();
    uVar29 = uVar46 & uVar45;
    (*pcVar21)(uVar29,1,lVar12);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar52 + 0x10))(uVar32 & uVar45,uVar46 & uVar45,lVar12);
      (**(code **)(lVar52 + 0x38))(uVar32 & uVar45,0,1,lVar12);
    }
    else {
      _memcpy((void *)(uVar32 & uVar45),(void *)(uVar46 & uVar45),sVar37);
    }
    puVar36 = (undefined8 *)(uVar4 + (long)puVar36 & uVar42);
    puVar53 = (undefined8 *)(uVar4 + (long)puVar53 & uVar42);
    *puVar36 = *puVar53;
    uVar32 = uVar1 + (long)puVar36;
    uVar1 = uVar1 + (long)puVar53;
    uVar29 = uVar1 & uVar51;
    (**(code **)(lVar41 + 0x30))(uVar29,1,lVar13);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar41 + 0x10))(uVar32 & uVar51,uVar1 & uVar51,lVar13);
      (**(code **)(lVar41 + 0x38))(uVar32 & uVar51,0,1,lVar13);
    }
    else {
      _memcpy((void *)(uVar32 & uVar51),(void *)(uVar1 & uVar51),sVar38);
    }
    puVar36 = (undefined8 *)(lVar5 + (long)puVar36 & uVar26);
    puVar53 = (undefined8 *)(lVar5 + (long)puVar53 & uVar26);
    *puVar36 = *puVar53;
    uVar32 = uVar2 + (long)puVar36;
    uVar2 = uVar2 + (long)puVar53;
    uVar29 = uVar2 & uVar20;
    (**(code **)(lVar40 + 0x30))(uVar29,1,lVar14);
    if ((int)uVar29 == 0) {
      (**(code **)(lVar40 + 0x10))(uVar32 & uVar20,uVar2 & uVar20,lVar14);
      (**(code **)(lVar40 + 0x38))(uVar32 & uVar20,0,1,lVar14);
    }
    else {
      _memcpy((void *)(uVar32 & uVar20),(void *)(uVar2 & uVar20),sVar39);
    }
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar28 == 0) {
    (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar33);
    uVar46 = (ulong)(uVar32 + (long)param_1) & uVar29;
    uVar29 = (ulong)(uVar32 + (long)param_2) & uVar29;
    (**(code **)(lVar23 + 0x10))(uVar46,uVar29,lVar27);
    uVar46 = uVar46 + lVar24 + uVar34;
    uVar29 = uVar29 + lVar24 + uVar34;
    uVar32 = uVar29 & uVar31;
    (**(code **)(lVar30 + 0x30))(uVar32,1,lVar22);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar30 + 0x10))(uVar46 & uVar31,uVar29 & uVar31,lVar22);
      (**(code **)(lVar30 + 0x38))(uVar46 & uVar31,0,1,lVar22);
    }
    else {
      _memcpy((void *)(uVar46 & uVar31),(void *)(uVar29 & uVar31),sVar25);
    }
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
LAB_1007c6124:
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x18);
  lVar27 = *(long *)(lVar22 + -8);
  uVar32 = (ulong)*(byte *)(lVar27 + 0x50);
  lVar23 = *(long *)(param_3 + 0x20);
  lVar19 = *(long *)(lVar23 + -8);
  lVar33 = *(long *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    lVar33 = lVar33 + 1;
  }
  uVar32 = lVar33 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar32 &
                     (uVar32 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar27 + 0x40) + (ulong)*(byte *)(lVar19 + 0x50) &
                    ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff));
  lVar33 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar19 = *(long *)(lVar33 + -8);
  bVar8 = *(byte *)(lVar19 + 0x50);
  lVar33 = 0;
  _swift_getAssociatedTypeWitness(0,uVar16,lVar22,puVar11,puVar10);
  lVar27 = *(long *)(lVar33 + -8);
  bVar9 = *(byte *)(lVar27 + 0x50);
  uVar34 = (ulong)bVar9;
  lVar33 = 0;
  _swift_getAssociatedTypeWitness(0,local_78,lVar23,puVar11,puVar10);
  lVar22 = *(long *)(lVar33 + -8);
  uVar29 = (ulong)*(byte *)(lVar22 + 0x50);
  bVar9 = bVar9 | bVar8 | *(byte *)(lVar22 + 0x50);
  lVar33 = (*(long *)(lVar22 + 0x40) - (-uVar29 - 9 | uVar29)) +
           ((ulong)(bVar9 & 0xf8 ^ 0x1f8) & (ulong)bVar9 + 8);
  if (*(int *)(lVar22 + 0x54) == 0) {
    lVar33 = lVar33 + 1;
  }
  lVar33 = lVar33 - ((((-uVar34 - 9 | uVar34) - ((uVar29 | 7) + *(long *)(lVar27 + 0x40))) -
                     (ulong)(*(int *)(lVar27 + 0x54) == 0)) +
                     (((-(ulong)bVar8 - 9 | (ulong)bVar8) -
                      ((uVar34 | 7) + *(long *)(lVar19 + 0x40))) -
                      (ulong)(*(int *)(lVar19 + 0x54) == 0) | uVar34 | 7) + 1 | uVar29 | 7);
  uVar29 = lVar33 - 2;
  if (uVar29 <= uVar32) {
    uVar29 = uVar32;
  }
  uVar32 = (lVar33 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar32 <= uVar29) {
    uVar32 = uVar29;
  }
  *(undefined8 *)((ulong)(uVar32 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar32 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x1007c62dc | FUN_1007c62dc */

undefined8 * FUN_1007c62dc(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  size_t sVar31;
  size_t sVar32;
  size_t sVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  ulong uVar45;
  ulong uVar46;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar19 = *(long *)(lVar18 + -8);
  lVar21 = *(long *)(lVar9 + -8);
  uVar25 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar42 = *(long *)(lVar19 + 0x40) + uVar25;
  lVar22 = *(long *)(lVar21 + 0x40);
  lVar26 = *(long *)(lVar10 + -8);
  uVar28 = (ulong)*(byte *)(lVar26 + 0x50);
  sVar23 = *(size_t *)(lVar26 + 0x40);
  if (*(int *)(lVar26 + 0x54) == 0) {
    sVar23 = sVar23 + 1;
  }
  uVar3 = sVar23 + (lVar22 + uVar28 + (uVar42 & (uVar25 ^ 0xffffffffffffffff)) &
                   (uVar28 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar39 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar39 + 0x50);
  uVar43 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar35 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar35 + 0x50);
  uVar46 = (ulong)bVar12;
  uVar45 = uVar46 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar41 = *(long *)(lVar17 + -8);
  uVar27 = (ulong)*(byte *)(lVar41 + 0x50);
  uVar29 = uVar27 | 7;
  uVar20 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar41 + 0x50));
  uVar24 = uVar20 | 7;
  uVar37 = uVar43 + 8;
  sVar31 = *(size_t *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    sVar31 = sVar31 + 1;
  }
  uVar4 = sVar31 + (uVar37 & (uVar43 ^ 0xffffffffffffffff)) + uVar45;
  uVar1 = uVar46 + 8;
  sVar32 = *(size_t *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  lVar5 = sVar32 + (uVar1 & (uVar46 ^ 0xffffffffffffffff)) + uVar29;
  uVar2 = uVar27 + 8;
  sVar33 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  lVar6 = sVar33 + (uVar2 & (uVar27 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar45 ^ 0xffffffffffffffff)) & (uVar29 ^ 0xffffffffffffffff));
  uVar20 = lVar6 + (uVar20 + 8 & (uVar24 ^ 0xffffffffffffffff));
  uVar8 = uVar20;
  if (uVar20 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar20 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  bVar11 = *(byte *)((long)param_2 + uVar3);
  uVar30 = (uint)bVar11;
  if (2 < bVar11) {
    uVar34 = (uint)uVar3;
    uVar7 = 4;
    if (uVar34 < 4) {
      uVar7 = uVar34;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c6538;
      uVar30 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar30 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar30 = (uint)(uint3)*param_2;
    }
    else {
      uVar30 = *param_2;
    }
    if (uVar34 < 4) {
      uVar30 = uVar30 | bVar11 - 3 << (ulong)((uVar34 & 3) << 3);
    }
    uVar30 = uVar30 + 3;
  }
LAB_1007c6538:
  uVar20 = ~uVar24;
  uVar43 = ~uVar43;
  uVar45 = ~uVar45;
  uVar46 = ~uVar46;
  uVar29 = ~uVar29;
  uVar27 = ~uVar27;
  if (uVar30 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar44 = (undefined8 *)((long)param_1 + uVar24 + 8 & uVar20);
    puVar36 = (undefined8 *)((ulong)((long)param_2 + uVar24 + 8) & uVar20);
    *puVar44 = *puVar36;
    uVar42 = uVar37 + (long)puVar44;
    uVar37 = uVar37 + (long)puVar36;
    uVar25 = uVar37 & uVar43;
    (**(code **)(lVar39 + 0x30))(uVar25,1,lVar15);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar39 + 0x20))(uVar42 & uVar43,uVar37 & uVar43,lVar15);
      (**(code **)(lVar39 + 0x38))(uVar42 & uVar43,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar42 & uVar43),(void *)(uVar37 & uVar43),sVar31);
    }
    puVar38 = (undefined8 *)(uVar4 + (long)puVar44 & uVar45);
    puVar40 = (undefined8 *)(uVar4 + (long)puVar36 & uVar45);
    *puVar38 = *puVar40;
    uVar42 = uVar1 + (long)puVar38;
    uVar1 = uVar1 + (long)puVar40;
    uVar25 = uVar1 & uVar46;
    (**(code **)(lVar35 + 0x30))(uVar25,1,lVar16);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar35 + 0x20))(uVar42 & uVar46,uVar1 & uVar46,lVar16);
      (**(code **)(lVar35 + 0x38))(uVar42 & uVar46,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar42 & uVar46),(void *)(uVar1 & uVar46),sVar32);
    }
    puVar38 = (undefined8 *)(lVar5 + (long)puVar38 & uVar29);
    puVar40 = (undefined8 *)(lVar5 + (long)puVar40 & uVar29);
    *puVar38 = *puVar40;
    uVar42 = uVar2 + (long)puVar38;
    uVar2 = uVar2 + (long)puVar40;
    uVar25 = uVar2 & uVar27;
    (**(code **)(lVar41 + 0x30))(uVar25,1,lVar17);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar41 + 0x20))(uVar42 & uVar27,uVar2 & uVar27,lVar17);
      (**(code **)(lVar41 + 0x38))(uVar42 & uVar27,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar42 & uVar27),(void *)(uVar2 & uVar27),sVar33);
    }
    *(undefined8 *)((long)puVar44 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar36 + lVar6 + 7 & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar30 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar36 = (undefined8 *)((long)param_1 + uVar24 + 8 & uVar20);
    puVar44 = (undefined8 *)((ulong)((long)param_2 + uVar24 + 8) & uVar20);
    *puVar36 = *puVar44;
    uVar42 = uVar37 + (long)puVar36;
    uVar37 = uVar37 + (long)puVar44;
    uVar25 = uVar37 & uVar43;
    (**(code **)(lVar39 + 0x30))(uVar25,1,lVar15);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar39 + 0x20))(uVar42 & uVar43,uVar37 & uVar43,lVar15);
      (**(code **)(lVar39 + 0x38))(uVar42 & uVar43,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar42 & uVar43),(void *)(uVar37 & uVar43),sVar31);
    }
    puVar36 = (undefined8 *)(uVar4 + (long)puVar36 & uVar45);
    puVar44 = (undefined8 *)(uVar4 + (long)puVar44 & uVar45);
    *puVar36 = *puVar44;
    uVar42 = uVar1 + (long)puVar36;
    uVar1 = uVar1 + (long)puVar44;
    uVar25 = uVar1 & uVar46;
    (**(code **)(lVar35 + 0x30))(uVar25,1,lVar16);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar35 + 0x20))(uVar42 & uVar46,uVar1 & uVar46,lVar16);
      (**(code **)(lVar35 + 0x38))(uVar42 & uVar46,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar42 & uVar46),(void *)(uVar1 & uVar46),sVar32);
    }
    puVar36 = (undefined8 *)(lVar5 + (long)puVar36 & uVar29);
    puVar44 = (undefined8 *)(lVar5 + (long)puVar44 & uVar29);
    *puVar36 = *puVar44;
    uVar42 = uVar2 + (long)puVar36;
    uVar2 = uVar2 + (long)puVar44;
    uVar25 = uVar2 & uVar27;
    (**(code **)(lVar41 + 0x30))(uVar25,1,lVar17);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar41 + 0x20))(uVar42 & uVar27,uVar2 & uVar27,lVar17);
      (**(code **)(lVar41 + 0x38))(uVar42 & uVar27,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar42 & uVar27),(void *)(uVar2 & uVar27),sVar33);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar30 == 0) {
    uVar20 = ~uVar28;
    (**(code **)(lVar19 + 0x20))(param_1,param_2,lVar18);
    uVar37 = uVar42 + (long)param_1 & ~uVar25;
    uVar42 = (ulong)(uVar42 + (long)param_2) & ~uVar25;
    (**(code **)(lVar21 + 0x20))(uVar37,uVar42,lVar9);
    lVar22 = lVar22 + uVar28;
    uVar37 = uVar37 + lVar22;
    uVar42 = uVar42 + lVar22;
    uVar25 = uVar42 & uVar20;
    (**(code **)(lVar26 + 0x30))(uVar25,1,lVar10);
    if ((int)uVar25 == 0) {
      (**(code **)(lVar26 + 0x20))(uVar37 & uVar20,uVar42 & uVar20,lVar10);
      (**(code **)(lVar26 + 0x38))(uVar37 & uVar20,0,1,lVar10);
    }
    else {
      _memcpy((void *)(uVar37 & uVar20),(void *)(uVar42 & uVar20),sVar23);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007c6a58 | FUN_1007c6a58 */

void FUN_1007c6a58(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  size_t sVar37;
  size_t sVar38;
  size_t sVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 *puVar48;
  ulong uVar49;
  undefined8 *puVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  undefined8 local_80;
  
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar16 = *(undefined8 *)(param_3 + 0x30);
    local_80 = *(undefined8 *)(param_3 + 0x38);
    goto LAB_1007c74b4;
  }
  lVar35 = *(long *)(param_3 + 0x10);
  lVar29 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar35 + -8);
  lVar24 = *(long *)(lVar29 + -8);
  uVar31 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar34 = *(long *)(lVar20 + 0x40) + uVar31;
  lVar25 = *(long *)(lVar24 + 0x40);
  lVar23 = *(long *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar32 = *(long *)(lVar23 + -8);
  uVar36 = (ulong)*(byte *)(lVar32 + 0x50);
  sVar26 = *(size_t *)(lVar32 + 0x40);
  if (*(int *)(lVar32 + 0x54) == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar3 = sVar26 + (lVar25 + uVar36 + (uVar34 & (uVar31 ^ 0xffffffffffffffff)) &
                   (uVar36 ^ 0xffffffffffffffff));
  lVar11 = 0;
  _swift_getAssociatedTypeWitness();
  lVar53 = *(long *)(lVar11 + -8);
  bVar19 = *(byte *)(lVar53 + 0x50);
  uVar42 = (ulong)bVar19;
  uVar16 = *(undefined8 *)(param_3 + 0x30);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,uVar16,lVar29,puVar10,puVar9);
  lVar41 = *(long *)(lVar12 + -8);
  bVar8 = *(byte *)(lVar41 + 0x50);
  uVar44 = (ulong)bVar8;
  uVar52 = uVar44 | 7;
  local_80 = *(undefined8 *)(param_3 + 0x38);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,local_80,lVar23,puVar10,puVar9);
  lVar40 = *(long *)(lVar13 + -8);
  uVar21 = (ulong)*(byte *)(lVar40 + 0x50);
  uVar27 = uVar21 | 7;
  uVar33 = (ulong)(byte)(bVar8 | bVar19 | *(byte *)(lVar40 + 0x50));
  uVar14 = uVar33 | 7;
  uVar47 = uVar42 + 8;
  sVar37 = *(size_t *)(lVar53 + 0x40);
  if (*(int *)(lVar53 + 0x54) == 0) {
    sVar37 = sVar37 + 1;
  }
  uVar4 = sVar37 + (uVar47 & (uVar42 ^ 0xffffffffffffffff)) + uVar52;
  uVar1 = uVar44 + 8;
  sVar38 = *(size_t *)(lVar41 + 0x40);
  if (*(int *)(lVar41 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar5 = sVar38 + (uVar1 & (uVar44 ^ 0xffffffffffffffff)) + uVar27;
  uVar2 = uVar21 + 8;
  sVar39 = *(size_t *)(lVar40 + 0x40);
  if (*(int *)(lVar40 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar6 = sVar39 + (uVar2 & (uVar21 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar52 ^ 0xffffffffffffffff)) & (uVar27 ^ 0xffffffffffffffff));
  uVar33 = lVar6 + (uVar33 + 8 & (uVar14 ^ 0xffffffffffffffff));
  uVar43 = uVar33;
  if (uVar33 <= uVar3) {
    uVar43 = uVar3;
  }
  uVar3 = (uVar33 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar43) {
    uVar3 = uVar43;
  }
  uVar51 = (uint)uVar3;
  bVar19 = *(byte *)((long)param_1 + uVar3);
  uVar30 = (uint)bVar19;
  if (2 < bVar19) {
    uVar7 = 4;
    if (uVar51 < 4) {
      uVar7 = uVar51;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c6d1c;
      uVar30 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar30 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar30 = (uint)(uint3)*param_1;
    }
    else {
      uVar30 = *param_1;
    }
    if (uVar51 < 4) {
      uVar30 = uVar30 | bVar19 - 3 << (ulong)(uVar51 << 3 & 0x1f);
    }
    uVar30 = uVar30 + 3;
  }
LAB_1007c6d1c:
  uVar31 = ~uVar31;
  uVar33 = ~uVar36;
  uVar43 = ~uVar14;
  uVar42 = ~uVar42;
  uVar52 = ~uVar52;
  uVar44 = ~uVar44;
  uVar27 = ~uVar27;
  uVar21 = ~uVar21;
  if (uVar30 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar15 = (ulong)((long)param_1 + uVar14 + 8) & uVar43;
    uVar49 = uVar47 + uVar15 & uVar42;
    (**(code **)(lVar53 + 0x30))(uVar49,1,lVar11);
    if ((int)uVar49 == 0) {
      (**(code **)(lVar53 + 8))(uVar47 + uVar15 & uVar42,lVar11);
    }
    pcVar22 = *(code **)(lVar41 + 0x30);
LAB_1007c6ed8:
    uVar15 = uVar4 + uVar15 & uVar52;
    uVar45 = uVar1 + uVar15;
    uVar49 = uVar45 & uVar44;
    (*pcVar22)(uVar49,1,lVar12);
    if ((int)uVar49 == 0) {
      (**(code **)(lVar41 + 8))(uVar45 & uVar44,lVar12);
    }
    uVar49 = uVar2 + (lVar5 + uVar15 & uVar27);
    uVar15 = uVar49 & uVar21;
    (**(code **)(lVar40 + 0x30))(uVar15,1,lVar13);
    if ((int)uVar15 == 0) {
      pcVar22 = *(code **)(lVar40 + 8);
      uVar49 = uVar49 & uVar21;
      lVar17 = lVar13;
LAB_1007c6f54:
      (*pcVar22)(uVar49,lVar17);
    }
  }
  else {
    if (uVar30 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar15 = (ulong)((long)param_1 + uVar14 + 8) & uVar43;
      uVar49 = uVar47 + uVar15 & uVar42;
      (**(code **)(lVar53 + 0x30))(uVar49,1,lVar11);
      if ((int)uVar49 == 0) {
        (**(code **)(lVar53 + 8))(uVar47 + uVar15 & uVar42,lVar11);
      }
      pcVar22 = *(code **)(lVar41 + 0x30);
      goto LAB_1007c6ed8;
    }
    if (uVar30 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar35);
      uVar49 = (ulong)(uVar34 + (long)param_1) & uVar31;
      (**(code **)(lVar24 + 8))(uVar49,lVar29);
      uVar49 = uVar49 + lVar25 + uVar36;
      uVar15 = uVar49 & uVar33;
      (**(code **)(lVar32 + 0x30))(uVar15,1,lVar23);
      if ((int)uVar15 != 0) goto LAB_1007c6f58;
      pcVar22 = *(code **)(lVar32 + 8);
      uVar49 = uVar49 & uVar33;
      lVar17 = lVar23;
      goto LAB_1007c6f54;
    }
  }
LAB_1007c6f58:
  bVar19 = *(byte *)((long)param_2 + uVar3);
  uVar30 = (uint)bVar19;
  if (bVar19 < 3) {
LAB_1007c6fc8:
    if (uVar30 == 2) goto LAB_1007c7120;
LAB_1007c6fd0:
    if (uVar30 != 1) {
      if (uVar30 == 0) {
        (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar35);
        uVar47 = (ulong)(uVar34 + (long)param_1) & uVar31;
        uVar31 = (ulong)(uVar34 + (long)param_2) & uVar31;
        (**(code **)(lVar24 + 0x20))(uVar47,uVar31,lVar29);
        uVar47 = uVar47 + lVar25 + uVar36;
        uVar31 = uVar31 + lVar25 + uVar36;
        uVar34 = uVar31 & uVar33;
        (**(code **)(lVar32 + 0x30))(uVar34,1,lVar23);
        if ((int)uVar34 == 0) {
          (**(code **)(lVar32 + 0x20))(uVar47 & uVar33,uVar31 & uVar33,lVar23);
          (**(code **)(lVar32 + 0x38))(uVar47 & uVar33,0,1,lVar23);
        }
        else {
          _memcpy((void *)(uVar47 & uVar33),(void *)(uVar31 & uVar33),sVar26);
        }
        *(byte *)((long)param_1 + uVar3) = 0;
      }
      else {
        _memcpy(param_1,param_2,uVar3 + 1);
      }
      goto LAB_1007c74b4;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar28 = (undefined8 *)((ulong)((long)param_1 + uVar14 + 8) & uVar43);
    puVar46 = (undefined8 *)((ulong)((long)param_2 + uVar14 + 8) & uVar43);
    *puVar28 = *puVar46;
    uVar34 = uVar47 + (long)puVar28;
    uVar47 = uVar47 + (long)puVar46;
    uVar31 = uVar47 & uVar42;
    (**(code **)(lVar53 + 0x30))(uVar31,1,lVar11);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar53 + 0x20))(uVar34 & uVar42,uVar47 & uVar42,lVar11);
      (**(code **)(lVar53 + 0x38))(uVar34 & uVar42,0,1,lVar11);
    }
    else {
      _memcpy((void *)(uVar34 & uVar42),(void *)(uVar47 & uVar42),sVar37);
    }
    puVar28 = (undefined8 *)(uVar4 + (long)puVar28 & uVar52);
    puVar46 = (undefined8 *)(uVar4 + (long)puVar46 & uVar52);
    *puVar28 = *puVar46;
    uVar34 = uVar1 + (long)puVar28;
    uVar1 = uVar1 + (long)puVar46;
    uVar31 = uVar1 & uVar44;
    (**(code **)(lVar41 + 0x30))(uVar31,1,lVar12);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar41 + 0x20))(uVar34 & uVar44,uVar1 & uVar44,lVar12);
      (**(code **)(lVar41 + 0x38))(uVar34 & uVar44,0,1,lVar12);
    }
    else {
      _memcpy((void *)(uVar34 & uVar44),(void *)(uVar1 & uVar44),sVar38);
    }
    puVar28 = (undefined8 *)(lVar5 + (long)puVar28 & uVar27);
    puVar46 = (undefined8 *)(lVar5 + (long)puVar46 & uVar27);
    *puVar28 = *puVar46;
    uVar34 = uVar2 + (long)puVar28;
    uVar2 = uVar2 + (long)puVar46;
    uVar31 = uVar2 & uVar21;
    (**(code **)(lVar40 + 0x30))(uVar31,1,lVar13);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar34 & uVar21,uVar2 & uVar21,lVar13);
      (**(code **)(lVar40 + 0x38))(uVar34 & uVar21,0,1,lVar13);
    }
    else {
      _memcpy((void *)(uVar34 & uVar21),(void *)(uVar2 & uVar21),sVar39);
    }
    bVar19 = 1;
  }
  else {
    uVar7 = 4;
    if (uVar51 < 4) {
      uVar7 = uVar51;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c6fc8;
      uVar30 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar30 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar30 = (uint)(uint3)*param_2;
    }
    else {
      uVar30 = *param_2;
    }
    if (3 < uVar51) {
      uVar30 = uVar30 + 3;
      goto LAB_1007c6fc8;
    }
    uVar30 = (uVar30 | bVar19 - 3 << (ulong)(uVar51 << 3 & 0x1f)) + 3;
    if (uVar30 != 2) goto LAB_1007c6fd0;
LAB_1007c7120:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar46 = (undefined8 *)((ulong)((long)param_1 + uVar14 + 8) & uVar43);
    puVar28 = (undefined8 *)((ulong)((long)param_2 + uVar14 + 8) & uVar43);
    *puVar46 = *puVar28;
    uVar34 = uVar47 + (long)puVar46;
    uVar47 = uVar47 + (long)puVar28;
    uVar31 = uVar47 & uVar42;
    (**(code **)(lVar53 + 0x30))(uVar31,1,lVar11);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar53 + 0x20))(uVar34 & uVar42,uVar47 & uVar42,lVar11);
      (**(code **)(lVar53 + 0x38))(uVar34 & uVar42,0,1,lVar11);
    }
    else {
      _memcpy((void *)(uVar34 & uVar42),(void *)(uVar47 & uVar42),sVar37);
    }
    puVar48 = (undefined8 *)(uVar4 + (long)puVar46 & uVar52);
    puVar50 = (undefined8 *)(uVar4 + (long)puVar28 & uVar52);
    *puVar48 = *puVar50;
    uVar34 = uVar1 + (long)puVar48;
    uVar1 = uVar1 + (long)puVar50;
    uVar31 = uVar1 & uVar44;
    (**(code **)(lVar41 + 0x30))(uVar31,1,lVar12);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar41 + 0x20))(uVar34 & uVar44,uVar1 & uVar44,lVar12);
      (**(code **)(lVar41 + 0x38))(uVar34 & uVar44,0,1,lVar12);
    }
    else {
      _memcpy((void *)(uVar34 & uVar44),(void *)(uVar1 & uVar44),sVar38);
    }
    puVar48 = (undefined8 *)(lVar5 + (long)puVar48 & uVar27);
    puVar50 = (undefined8 *)(lVar5 + (long)puVar50 & uVar27);
    *puVar48 = *puVar50;
    uVar34 = uVar2 + (long)puVar48;
    uVar2 = uVar2 + (long)puVar50;
    uVar31 = uVar2 & uVar21;
    (**(code **)(lVar40 + 0x30))(uVar31,1,lVar13);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar34 & uVar21,uVar2 & uVar21,lVar13);
      (**(code **)(lVar40 + 0x38))(uVar34 & uVar21,0,1,lVar13);
    }
    else {
      _memcpy((void *)(uVar34 & uVar21),(void *)(uVar2 & uVar21),sVar39);
    }
    *(undefined8 *)((long)puVar46 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar28 + lVar6 + 7 & 0xfffffffffffffff8);
    bVar19 = 2;
  }
  *(byte *)((long)param_1 + uVar3) = bVar19;
LAB_1007c74b4:
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar23 = *(long *)(param_3 + 0x18);
  lVar29 = *(long *)(lVar23 + -8);
  uVar34 = (ulong)*(byte *)(lVar29 + 0x50);
  lVar24 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar24 + -8);
  lVar35 = *(long *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    lVar35 = lVar35 + 1;
  }
  uVar34 = lVar35 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar34 &
                     (uVar34 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar29 + 0x40) + (ulong)*(byte *)(lVar20 + 0x50) &
                    ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
  lVar35 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar35 + -8);
  bVar19 = *(byte *)(lVar20 + 0x50);
  lVar35 = 0;
  _swift_getAssociatedTypeWitness(0,uVar16,lVar23,puVar10,puVar9);
  lVar29 = *(long *)(lVar35 + -8);
  bVar8 = *(byte *)(lVar29 + 0x50);
  uVar36 = (ulong)bVar8;
  lVar35 = 0;
  _swift_getAssociatedTypeWitness(0,local_80,lVar24,puVar10,puVar9);
  lVar23 = *(long *)(lVar35 + -8);
  uVar31 = (ulong)*(byte *)(lVar23 + 0x50);
  bVar8 = bVar8 | bVar19 | *(byte *)(lVar23 + 0x50);
  lVar35 = (*(long *)(lVar23 + 0x40) - (-uVar31 - 9 | uVar31)) +
           ((ulong)(bVar8 & 0xf8 ^ 0x1f8) & (ulong)bVar8 + 8);
  if (*(int *)(lVar23 + 0x54) == 0) {
    lVar35 = lVar35 + 1;
  }
  lVar35 = lVar35 - ((((-uVar36 - 9 | uVar36) - ((uVar31 | 7) + *(long *)(lVar29 + 0x40))) -
                     (ulong)(*(int *)(lVar29 + 0x54) == 0)) +
                     (((-(ulong)bVar19 - 9 | (ulong)bVar19) -
                      ((uVar36 | 7) + *(long *)(lVar20 + 0x40))) -
                      (ulong)(*(int *)(lVar20 + 0x54) == 0) | uVar36 | 7) + 1 | uVar31 | 7);
  uVar31 = lVar35 - 2;
  if (uVar31 <= uVar34) {
    uVar31 = uVar34;
  }
  uVar34 = (lVar35 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar34 <= uVar31) {
    uVar34 = uVar31;
  }
  *(undefined8 *)((ulong)(uVar34 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar34 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x1007c7668 | FUN_1007c7668 */

int FUN_1007c7668(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar10 + -8);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar15 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  uVar14 = lVar16 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar14 &
                     (uVar14 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar15 + 0x50) &
                    ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar16 + -8);
  bVar4 = *(byte *)(lVar15 + 0x50);
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar8,puVar7);
  lVar11 = *(long *)(lVar16 + -8);
  bVar5 = *(byte *)(lVar11 + 0x50);
  uVar18 = (ulong)bVar5;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar3,puVar8,puVar7);
  lVar10 = *(long *)(lVar16 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar5 = bVar5 | bVar4 | *(byte *)(lVar10 + 0x50);
  lVar16 = (*(long *)(lVar10 + 0x40) - (-uVar12 - 9 | uVar12)) +
           ((ulong)(bVar5 & 0xf8 ^ 0x1f8) & (ulong)bVar5 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar16 = lVar16 - ((((-uVar18 - 9 | uVar18) - ((uVar12 | 7) + *(long *)(lVar11 + 0x40))) -
                     (ulong)(*(int *)(lVar11 + 0x54) == 0)) +
                     (((-(ulong)bVar4 - 9 | (ulong)bVar4) -
                      ((uVar18 | 7) + *(long *)(lVar15 + 0x40))) -
                      (ulong)(*(int *)(lVar15 + 0x54) == 0) | uVar18 | 7) + 1 | uVar12 | 7);
  uVar12 = lVar16 - 2;
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  uVar14 = (lVar16 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar14 <= uVar12) {
    uVar14 = uVar12;
  }
  uVar6 = 0xfc - (1U >> (ulong)(((uint)uVar14 & 3) << 3));
  if (3 < (uint)uVar14) {
    uVar6 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar6 <= param_2 && param_2 - uVar6 != 0) {
    uVar12 = (uVar14 & 0xfffffffffffffff8) + 0x10;
    uVar18 = uVar12 & 0xfffffff8;
    uVar13 = (uint)uVar18;
    uVar17 = 2;
    uVar2 = uVar17;
    if (uVar18 == 0) {
      uVar2 = (param_2 - uVar6) + 1;
    }
    if (0xffff < uVar2) {
      uVar17 = 4;
    }
    if (uVar2 < 0x100) {
      uVar17 = 1;
    }
    uVar1 = 0;
    if (1 < uVar2) {
      uVar1 = uVar17;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) &&
         (uVar17 = (uint)*(byte *)((long)param_1 + uVar12), *(byte *)((long)param_1 + uVar12) != 0))
      goto LAB_1007c78a4;
    }
    else if (uVar1 == 2) {
      uVar17 = (uint)*(ushort *)((long)param_1 + uVar12);
      if (*(ushort *)((long)param_1 + uVar12) != 0) {
LAB_1007c78a4:
        uVar17 = uVar17 - 1;
        if (uVar18 != 0) {
          uVar17 = 0;
          uVar13 = *param_1;
        }
        return uVar6 + (uVar13 | uVar17) + 1;
      }
    }
    else {
      uVar17 = *(uint *)((long)param_1 + uVar12);
      if (uVar17 != 0) goto LAB_1007c78a4;
    }
  }
  iVar9 = 0x100 - (uint)*(byte *)((long)param_1 + uVar14);
  if (uVar6 <= (*(byte *)((long)param_1 + uVar14) ^ 0xff)) {
    iVar9 = 0;
  }
  return iVar9;
}



/* Address: 0x1007c7908 | FUN_1007c7908 */

void FUN_1007c7908(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar8 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_4 + 0x18);
  lVar11 = *(long *)(lVar18 + -8);
  uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar10 = *(long *)(param_4 + 0x20);
  lVar14 = *(long *)(lVar10 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  uVar13 = lVar15 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar13 &
                     (uVar13 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar14 + 0x50) &
                    ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar15 + -8);
  bVar4 = *(byte *)(lVar11 + 0x50);
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x30),lVar18,puVar9,puVar8);
  lVar18 = *(long *)(lVar15 + -8);
  bVar5 = *(byte *)(lVar18 + 0x50);
  uVar17 = (ulong)bVar5;
  lVar15 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x38),lVar10,puVar9,puVar8);
  lVar10 = *(long *)(lVar15 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar5 = bVar5 | bVar4 | *(byte *)(lVar10 + 0x50);
  lVar15 = (*(long *)(lVar10 + 0x40) - (-uVar12 - 9 | uVar12)) +
           ((ulong)(bVar5 & 0xf8 ^ 0x1f8) & (ulong)bVar5 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  lVar15 = lVar15 - ((((-uVar17 - 9 | uVar17) - ((uVar12 | 7) + *(long *)(lVar18 + 0x40))) -
                     (ulong)(*(int *)(lVar18 + 0x54) == 0)) +
                     (((-(ulong)bVar4 - 9 | (ulong)bVar4) -
                      ((uVar17 | 7) + *(long *)(lVar11 + 0x40))) -
                      (ulong)(*(int *)(lVar11 + 0x54) == 0) | uVar17 | 7) + 1 | uVar12 | 7);
  uVar12 = lVar15 - 2;
  if (uVar12 <= uVar13) {
    uVar12 = uVar13;
  }
  uVar13 = (lVar15 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar13 <= uVar12) {
    uVar13 = uVar12;
  }
  uVar6 = 0xfc - (1U >> (ulong)(((uint)uVar13 & 3) << 3));
  if (3 < (uint)uVar13) {
    uVar6 = 0xfc;
  }
  sVar1 = (uVar13 & 0xfffffffffffffff8) + 0x10;
  uVar16 = 2;
  uVar3 = uVar16;
  if ((int)sVar1 == 0) {
    uVar3 = (param_3 - uVar6) + 1;
  }
  if (0xffff < uVar3) {
    uVar16 = 4;
  }
  if (uVar3 < 0x100) {
    uVar16 = 1;
  }
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar16;
  }
  uVar16 = 0;
  if (uVar6 < param_3) {
    uVar16 = uVar2;
  }
  iVar7 = param_2 - uVar6;
  if (param_2 < uVar6 || iVar7 == 0) {
    if (uVar16 < 2) {
      if (uVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar13) = -(char)param_2;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar7 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar6;
    }
    if (uVar16 < 2) {
      if (uVar16 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (uVar16 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x1007c7bd4 | FUN_1007c7bd4 */

void FUN_1007c7bd4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc1100);
  return;
}



/* Address: 0x1007c7be0 | FUN_1007c7be0 */

void FUN_1007c7be0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc118c);
  return;
}



/* Address: 0x1007c7bec | FUN_1007c7bec */

void FUN_1007c7bec(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  long local_100;
  long lStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar7 < 0x40) {
    lVar10 = *(long *)(lVar3 + -8);
    uVar7 = *(ulong *)(param_1 + 0x18);
    lVar4 = 0x13f;
    _swift_checkMetadataState();
    if (uVar7 < 0x40) {
      uVar9 = *(ulong *)(param_1 + 0x20);
      uVar7 = uVar9;
      OVar2 = Swift::Optional::typeMetadataAccessor();
      if (uVar7 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_88,lVar10 + 0x40,*(long *)(lVar4 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40);
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uVar5 = 0xff;
        local_68 = auStack_88;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar13,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        plVar8 = &local_100;
        lVar10 = 0x13f;
        local_100 = lVar3;
        lStack_f8 = lVar4;
        local_f0 = uVar9;
        uStack_e8 = uVar5;
        local_e0 = uVar13;
        uStack_d8 = uVar14;
        local_d0 = uVar11;
        FUN_1007cba3c();
        if (plVar8 < (long *)0x40) {
          lVar12 = *(long *)(lVar10 + -8);
          uVar5 = 0xff;
          _swift_getAssociatedTypeWitness
                    (0xff,uVar14,lVar4,
                     PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                     PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
          plVar8 = &local_100;
          lVar10 = 0x13f;
          local_100 = lVar3;
          lStack_f8 = lVar4;
          local_f0 = uVar9;
          uStack_e8 = uVar5;
          local_e0 = uVar13;
          uStack_d8 = uVar14;
          local_d0 = uVar16;
          FUN_1007cba3c();
          if (plVar8 < (long *)0x40) {
            uVar5 = 0xff;
            _swift_getAssociatedTypeWitness
                      (0xff,uVar11,uVar9,
                       PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18
                       ,PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
            plVar8 = &local_100;
            lVar6 = 0x13f;
            local_100 = lVar3;
            lStack_f8 = lVar4;
            local_f0 = uVar9;
            uStack_e8 = uVar5;
            local_e0 = uVar13;
            uStack_d8 = uVar15;
            local_d0 = uVar11;
            FUN_1007cba3c();
            if (plVar8 < (long *)0x40) {
              lVar3 = *(long *)(lVar10 + -8);
              lVar4 = *(long *)(lVar6 + -8);
              _swift_getTupleTypeLayout3(auStack_c8,lVar12 + 0x40,lVar3 + 0x40,lVar4 + 0x40);
              puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58;
              _swift_getTupleTypeLayout2
                        (auStack_a8,
                         PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40,
                         auStack_c8);
              local_60 = auStack_a8;
              _swift_getTupleTypeLayout3(auStack_140,lVar12 + 0x40,lVar3 + 0x40,lVar4 + 0x40);
              _swift_getTupleTypeLayout3(auStack_120,puVar1 + 0x40,auStack_140,&DAT_100c78e58);
              local_58 = auStack_120;
              _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_68);
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1007c7e44 | FUN_1007c7e44 */

long * FUN_1007c7e44(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  size_t sVar33;
  size_t sVar34;
  size_t sVar35;
  long lVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  code *pcVar44;
  long lVar45;
  
  puVar15 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar14 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar20 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar20 + -8);
  lVar24 = *(long *)(lVar9 + -8);
  uVar11 = *(uint *)(lVar24 + 0x50);
  uVar27 = (ulong)uVar11 & 0xff;
  uVar37 = *(long *)(lVar21 + 0x40) + uVar27;
  lVar28 = *(long *)(lVar24 + 0x40);
  lVar30 = *(long *)(lVar10 + -8);
  uVar29 = *(uint *)(lVar30 + 0x50);
  uVar31 = (ulong)uVar29 & 0xff;
  sVar25 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar3 = sVar25 + (lVar28 + uVar31 + (uVar37 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar31 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar20,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar39 = *(long *)(lVar16 + -8);
  uVar41 = *(uint *)(lVar39 + 0x50);
  uVar43 = (ulong)uVar41 & 0xff;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar15,puVar14);
  lVar45 = *(long *)(lVar17 + -8);
  uVar12 = *(uint *)(lVar45 + 0x50);
  uVar40 = (ulong)uVar12 & 0xff;
  uVar22 = uVar40 | 7;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar15,puVar14);
  lVar36 = *(long *)(lVar18 + -8);
  uVar23 = (ulong)*(uint *)(lVar36 + 0x50) & 0xff;
  uVar26 = uVar23 | 7;
  uVar32 = uVar40 | uVar43 | uVar23;
  sVar33 = *(size_t *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  uVar4 = sVar33 + uVar22 + (uVar43 + 8 & (uVar43 ^ 0xffffffffffffffff));
  uVar1 = uVar40 + 8;
  sVar35 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar5 = sVar35 + uVar26 + (uVar1 & (uVar40 ^ 0xffffffffffffffff));
  uVar2 = uVar23 + 8;
  sVar34 = *(size_t *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar6 = sVar34 + (uVar2 & (uVar23 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar22 ^ 0xffffffffffffffff)) & (uVar26 ^ 0xffffffffffffffff));
  uVar7 = lVar6 + ((ulong)((uint)uVar32 & 0xf8 ^ 0x1f8) & uVar32 + 8);
  uVar8 = uVar7;
  if (uVar7 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar7 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  uVar29 = uVar29 | uVar11;
  uVar32 = uVar32 | ((uVar29 | *(uint *)(lVar21 + 0x50)) & 0xf8 | 7);
  if (((uVar32 != 7) ||
      (((uVar29 | uVar41 | uVar12 | *(uint *)(lVar36 + 0x50) | *(uint *)(lVar21 + 0x50)) >> 0x14 & 1
       ) != 0)) || (0x18 < uVar3 + 1)) {
    lVar28 = *(long *)param_2;
    *param_1 = lVar28;
    _swift_retain();
    return (long *)(lVar28 + (uVar32 + 0x10 & (uVar32 ^ 0xffffffffffffffff)));
  }
  bVar13 = *(byte *)((long)param_2 + uVar3);
  uVar29 = (uint)bVar13;
  if (2 < bVar13) {
    uVar41 = (uint)uVar3;
    uVar11 = 4;
    if (uVar41 < 4) {
      uVar11 = uVar41;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007c8128;
      uVar29 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar29 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar29 = (uint)(uint3)*param_2;
    }
    else {
      uVar29 = *param_2;
    }
    if (uVar41 < 4) {
      uVar29 = (uVar29 | bVar13 - 3 << (ulong)((uVar41 & 3) << 3)) + 3;
    }
    else {
      uVar29 = uVar29 + 3;
    }
  }
LAB_1007c8128:
  uVar32 = ~uVar43;
  uVar22 = ~uVar22;
  uVar40 = ~uVar40;
  uVar26 = ~uVar26;
  uVar23 = ~uVar23;
  if (uVar29 == 2) {
    *param_1 = *(long *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar38 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar42 = *puVar38;
    uVar37 = (long)puVar42 + uVar43 + 8;
    uVar27 = (long)puVar38 + uVar43 + 8;
    pcVar44 = *(code **)(lVar39 + 0x30);
    _swift_retain();
    uVar31 = uVar27 & uVar32;
    (*pcVar44)(uVar31,1,lVar16);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar37 & uVar32,uVar27 & uVar32,lVar16);
      (**(code **)(lVar39 + 0x38))(uVar37 & uVar32,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar37 & uVar32),(void *)(uVar27 & uVar32),sVar33);
    }
    puVar42 = (undefined8 *)(uVar4 + (long)puVar42 & uVar22);
    puVar38 = (undefined8 *)(uVar4 + (long)puVar38 & uVar22);
    *puVar42 = *puVar38;
    uVar37 = uVar1 + (long)puVar42;
    uVar1 = uVar1 + (long)puVar38;
    uVar27 = uVar1 & uVar40;
    (**(code **)(lVar45 + 0x30))(uVar27,1,lVar17);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar45 + 0x10))(uVar37 & uVar40,uVar1 & uVar40,lVar17);
      (**(code **)(lVar45 + 0x38))(uVar37 & uVar40,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar37 & uVar40),(void *)(uVar1 & uVar40),sVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar42 & uVar26);
    puVar38 = (undefined8 *)(lVar5 + (long)puVar38 & uVar26);
    *puVar42 = *puVar38;
    uVar37 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar38;
    uVar27 = uVar2 & uVar23;
    (**(code **)(lVar36 + 0x30))(uVar27,1,lVar18);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar37 & uVar23,uVar2 & uVar23,lVar18);
      (**(code **)(lVar36 + 0x38))(uVar37 & uVar23,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar37 & uVar23),(void *)(uVar2 & uVar23),sVar34);
    }
    *(undefined8 *)(((long)param_1 + 0xfU | 7) + lVar6 & 0xfffffffffffffff8) =
         *(undefined8 *)(((ulong)((long)param_2 + 0xf) | 7) + lVar6 & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar29 == 1) {
    *param_1 = *(long *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar38 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar42 = *puVar38;
    uVar37 = (long)puVar42 + uVar43 + 8;
    uVar27 = (long)puVar38 + uVar43 + 8;
    pcVar44 = *(code **)(lVar39 + 0x30);
    _swift_retain();
    uVar31 = uVar27 & uVar32;
    (*pcVar44)(uVar31,1,lVar16);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar37 & uVar32,uVar27 & uVar32,lVar16);
      (**(code **)(lVar39 + 0x38))(uVar37 & uVar32,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar37 & uVar32),(void *)(uVar27 & uVar32),sVar33);
    }
    puVar42 = (undefined8 *)(uVar4 + (long)puVar42 & uVar22);
    puVar38 = (undefined8 *)(uVar4 + (long)puVar38 & uVar22);
    *puVar42 = *puVar38;
    uVar37 = uVar1 + (long)puVar42;
    uVar1 = uVar1 + (long)puVar38;
    uVar27 = uVar1 & uVar40;
    (**(code **)(lVar45 + 0x30))(uVar27,1,lVar17);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar45 + 0x10))(uVar37 & uVar40,uVar1 & uVar40,lVar17);
      (**(code **)(lVar45 + 0x38))(uVar37 & uVar40,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar37 & uVar40),(void *)(uVar1 & uVar40),sVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar42 & uVar26);
    puVar38 = (undefined8 *)(lVar5 + (long)puVar38 & uVar26);
    *puVar42 = *puVar38;
    uVar37 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar38;
    uVar27 = uVar2 & uVar23;
    (**(code **)(lVar36 + 0x30))(uVar27,1,lVar18);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar36 + 0x10))(uVar37 & uVar23,uVar2 & uVar23,lVar18);
      (**(code **)(lVar36 + 0x38))(uVar37 & uVar23,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar37 & uVar23),(void *)(uVar2 & uVar23),sVar34);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar29 != 0) {
      plVar19 = _memcpy(param_1,param_2,uVar3 + 1);
      return plVar19;
    }
    uVar23 = ~uVar31;
    (**(code **)(lVar21 + 0x10))(param_1,param_2,lVar20);
    uVar22 = uVar37 + (long)param_1 & ~uVar27;
    uVar37 = (ulong)(uVar37 + (long)param_2) & ~uVar27;
    (**(code **)(lVar24 + 0x10))(uVar22,uVar37,lVar9);
    lVar28 = lVar28 + uVar31;
    uVar22 = uVar22 + lVar28;
    uVar37 = uVar37 + lVar28;
    uVar27 = uVar37 & uVar23;
    (**(code **)(lVar30 + 0x30))(uVar27,1,lVar10);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar30 + 0x10))(uVar22 & uVar23,uVar37 & uVar23,lVar10);
      (**(code **)(lVar30 + 0x38))(uVar22 & uVar23,0,1,lVar10);
    }
    else {
      _memcpy((void *)(uVar22 & uVar23),(void *)(uVar37 & uVar23),sVar25);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1007c8638 | thunk_FUN_1007c863c */

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



/* Address: 0x1007c863c | FUN_1007c863c */

void FUN_1007c863c(uint *param_1,long param_2)

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



/* Address: 0x1007c8a58 | FUN_1007c8a58 */

undefined8 * FUN_1007c8a58(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  size_t sVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  size_t sVar32;
  size_t sVar33;
  size_t sVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  uint uVar43;
  code *pcVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar19 + -8);
  lVar22 = *(long *)(lVar9 + -8);
  uVar26 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar37 = *(long *)(lVar20 + 0x40) + uVar26;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar27 = *(long *)(lVar10 + -8);
  uVar29 = (ulong)*(byte *)(lVar27 + 0x50);
  sVar24 = *(size_t *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    sVar24 = sVar24 + 1;
  }
  uVar3 = sVar24 + (lVar23 + uVar29 + (uVar37 & (uVar26 ^ 0xffffffffffffffff)) &
                   (uVar29 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar46 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar46 + 0x50);
  uVar40 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar45 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar45 + 0x50);
  uVar41 = (ulong)bVar12;
  uVar47 = uVar41 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar35 = *(long *)(lVar17 + -8);
  uVar28 = (ulong)*(byte *)(lVar35 + 0x50);
  uVar30 = uVar28 | 7;
  uVar21 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar35 + 0x50));
  uVar25 = uVar21 | 7;
  uVar36 = uVar40 + 8;
  sVar32 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar32 = sVar32 + 1;
  }
  uVar4 = sVar32 + (uVar36 & (uVar40 ^ 0xffffffffffffffff)) + uVar47;
  uVar1 = uVar41 + 8;
  sVar33 = *(size_t *)(lVar45 + 0x40);
  if (*(int *)(lVar45 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  lVar5 = sVar33 + (uVar1 & (uVar41 ^ 0xffffffffffffffff)) + uVar30;
  uVar2 = uVar28 + 8;
  sVar34 = *(size_t *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  lVar6 = sVar34 + (uVar2 & (uVar28 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar47 ^ 0xffffffffffffffff)) & (uVar30 ^ 0xffffffffffffffff));
  uVar21 = lVar6 + (uVar21 + 8 & (uVar25 ^ 0xffffffffffffffff));
  uVar8 = uVar21;
  if (uVar21 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar21 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  bVar11 = *(byte *)((long)param_2 + uVar3);
  uVar31 = (uint)bVar11;
  if (2 < bVar11) {
    uVar43 = (uint)uVar3;
    uVar7 = 4;
    if (uVar43 < 4) {
      uVar7 = uVar43;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c8cbc;
      uVar31 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_2;
    }
    else {
      uVar31 = *param_2;
    }
    if (uVar43 < 4) {
      uVar31 = uVar31 | bVar11 - 3 << (ulong)((uVar43 & 3) << 3);
    }
    uVar31 = uVar31 + 3;
  }
LAB_1007c8cbc:
  uVar21 = ~uVar25;
  uVar40 = ~uVar40;
  uVar47 = ~uVar47;
  uVar41 = ~uVar41;
  uVar30 = ~uVar30;
  uVar28 = ~uVar28;
  if (uVar31 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
    puVar18 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
    *puVar42 = *puVar18;
    uVar37 = uVar36 + (long)puVar42;
    uVar36 = uVar36 + (long)puVar18;
    pcVar44 = *(code **)(lVar46 + 0x30);
    _swift_retain();
    uVar26 = uVar36 & uVar40;
    (*pcVar44)(uVar26,1,lVar15);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar37 & uVar40,uVar36 & uVar40,lVar15);
      (**(code **)(lVar46 + 0x38))(uVar37 & uVar40,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar37 & uVar40),(void *)(uVar36 & uVar40),sVar32);
    }
    puVar39 = (undefined8 *)(uVar4 + (long)puVar42 & uVar47);
    puVar38 = (undefined8 *)(uVar4 + (long)puVar18 & uVar47);
    *puVar39 = *puVar38;
    uVar37 = uVar1 + (long)puVar39;
    uVar1 = uVar1 + (long)puVar38;
    uVar26 = uVar1 & uVar41;
    (**(code **)(lVar45 + 0x30))(uVar26,1,lVar16);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar45 + 0x10))(uVar37 & uVar41,uVar1 & uVar41,lVar16);
      (**(code **)(lVar45 + 0x38))(uVar37 & uVar41,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar37 & uVar41),(void *)(uVar1 & uVar41),sVar33);
    }
    puVar39 = (undefined8 *)(lVar5 + (long)puVar39 & uVar30);
    puVar38 = (undefined8 *)(lVar5 + (long)puVar38 & uVar30);
    *puVar39 = *puVar38;
    uVar37 = uVar2 + (long)puVar39;
    uVar2 = uVar2 + (long)puVar38;
    uVar26 = uVar2 & uVar28;
    (**(code **)(lVar35 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar35 + 0x10))(uVar37 & uVar28,uVar2 & uVar28,lVar17);
      (**(code **)(lVar35 + 0x38))(uVar37 & uVar28,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar37 & uVar28),(void *)(uVar2 & uVar28),sVar34);
    }
    *(undefined8 *)((long)puVar42 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar18 + lVar6 + 7 & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar31 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar18 = (undefined8 *)((long)param_1 + uVar25 + 8 & uVar21);
    puVar42 = (undefined8 *)((ulong)((long)param_2 + uVar25 + 8) & uVar21);
    *puVar18 = *puVar42;
    uVar37 = uVar36 + (long)puVar18;
    uVar36 = uVar36 + (long)puVar42;
    pcVar44 = *(code **)(lVar46 + 0x30);
    _swift_retain();
    uVar26 = uVar36 & uVar40;
    (*pcVar44)(uVar26,1,lVar15);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar37 & uVar40,uVar36 & uVar40,lVar15);
      (**(code **)(lVar46 + 0x38))(uVar37 & uVar40,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar37 & uVar40),(void *)(uVar36 & uVar40),sVar32);
    }
    puVar38 = (undefined8 *)(uVar4 + (long)puVar18 & uVar47);
    puVar18 = (undefined8 *)(uVar4 + (long)puVar42 & uVar47);
    *puVar38 = *puVar18;
    uVar37 = uVar1 + (long)puVar38;
    uVar1 = uVar1 + (long)puVar18;
    uVar26 = uVar1 & uVar41;
    (**(code **)(lVar45 + 0x30))(uVar26,1,lVar16);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar45 + 0x10))(uVar37 & uVar41,uVar1 & uVar41,lVar16);
      (**(code **)(lVar45 + 0x38))(uVar37 & uVar41,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar37 & uVar41),(void *)(uVar1 & uVar41),sVar33);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar38 & uVar30);
    puVar18 = (undefined8 *)(lVar5 + (long)puVar18 & uVar30);
    *puVar42 = *puVar18;
    uVar37 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar18;
    uVar26 = uVar2 & uVar28;
    (**(code **)(lVar35 + 0x30))(uVar26,1,lVar17);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar35 + 0x10))(uVar37 & uVar28,uVar2 & uVar28,lVar17);
      (**(code **)(lVar35 + 0x38))(uVar37 & uVar28,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar37 & uVar28),(void *)(uVar2 & uVar28),sVar34);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar31 != 0) {
      puVar18 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar18;
    }
    uVar21 = ~uVar29;
    (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar19);
    uVar36 = uVar37 + (long)param_1 & ~uVar26;
    uVar37 = (ulong)(uVar37 + (long)param_2) & ~uVar26;
    (**(code **)(lVar22 + 0x10))(uVar36,uVar37,lVar9);
    lVar23 = lVar23 + uVar29;
    uVar36 = uVar36 + lVar23;
    uVar37 = uVar37 + lVar23;
    uVar26 = uVar37 & uVar21;
    (**(code **)(lVar27 + 0x30))(uVar26,1,lVar10);
    if ((int)uVar26 == 0) {
      (**(code **)(lVar27 + 0x10))(uVar36 & uVar21,uVar37 & uVar21,lVar10);
      (**(code **)(lVar27 + 0x38))(uVar36 & uVar21,0,1,lVar10);
    }
    else {
      _memcpy((void *)(uVar36 & uVar21),(void *)(uVar37 & uVar21),sVar24);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1007c91cc | FUN_1007c91cc */

uint * FUN_1007c91cc(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  size_t sVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  size_t sVar36;
  size_t sVar37;
  size_t sVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 *puVar45;
  long lVar46;
  undefined8 *puVar47;
  ulong uVar48;
  undefined8 *puVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar8 + -8);
  lVar27 = *(long *)(lVar10 + -8);
  uVar32 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar21 = *(long *)(lVar24 + 0x40) + uVar32;
  lVar28 = *(long *)(lVar27 + 0x40);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar33 = *(long *)(lVar9 + -8);
  uVar35 = (ulong)*(byte *)(lVar33 + 0x50);
  sVar29 = *(size_t *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    sVar29 = sVar29 + 1;
  }
  uVar3 = sVar29 + (lVar28 + uVar35 + (uVar21 & (uVar32 ^ 0xffffffffffffffff)) &
                   (uVar35 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar46 = *(long *)(lVar16 + -8);
  bVar11 = *(byte *)(lVar46 + 0x50);
  uVar48 = (ulong)bVar11;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar14,puVar13);
  lVar50 = *(long *)(lVar17 + -8);
  bVar12 = *(byte *)(lVar50 + 0x50);
  uVar52 = (ulong)bVar12;
  uVar53 = uVar52 | 7;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar9,puVar14,puVar13);
  lVar39 = *(long *)(lVar18 + -8);
  uVar25 = (ulong)*(byte *)(lVar39 + 0x50);
  uVar30 = uVar25 | 7;
  uVar34 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar39 + 0x50));
  uVar43 = uVar34 | 7;
  uVar41 = uVar48 + 8;
  sVar36 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  uVar4 = sVar36 + (uVar41 & (uVar48 ^ 0xffffffffffffffff)) + uVar53;
  uVar1 = uVar52 + 8;
  sVar37 = *(size_t *)(lVar50 + 0x40);
  if (*(int *)(lVar50 + 0x54) == 0) {
    sVar37 = sVar37 + 1;
  }
  lVar5 = sVar37 + (uVar1 & (uVar52 ^ 0xffffffffffffffff)) + uVar30;
  uVar2 = uVar25 + 8;
  sVar38 = *(size_t *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar6 = sVar38 + (uVar2 & (uVar25 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar53 ^ 0xffffffffffffffff)) & (uVar30 ^ 0xffffffffffffffff));
  uVar34 = lVar6 + (uVar34 + 8 & (uVar43 ^ 0xffffffffffffffff));
  uVar51 = uVar34;
  if (uVar34 <= uVar3) {
    uVar51 = uVar3;
  }
  uVar3 = (uVar34 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar51) {
    uVar3 = uVar51;
  }
  uVar40 = (uint)uVar3;
  bVar11 = *(byte *)((long)param_1 + uVar3);
  uVar31 = (uint)bVar11;
  if (2 < bVar11) {
    uVar7 = 4;
    if (uVar40 < 4) {
      uVar7 = uVar40;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c9460;
      uVar31 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_1;
    }
    else {
      uVar31 = *param_1;
    }
    if (uVar40 < 4) {
      uVar31 = uVar31 | bVar11 - 3 << (ulong)(uVar40 << 3 & 0x1f);
    }
    uVar31 = uVar31 + 3;
  }
LAB_1007c9460:
  uVar32 = ~uVar32;
  uVar34 = ~uVar35;
  uVar51 = ~uVar43;
  uVar48 = ~uVar48;
  uVar53 = ~uVar53;
  uVar52 = ~uVar52;
  uVar30 = ~uVar30;
  uVar25 = ~uVar25;
  if (uVar31 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar19 = (ulong)((long)param_1 + uVar43 + 8) & uVar51;
    uVar44 = uVar41 + uVar19;
    uVar20 = uVar44 & uVar48;
    (**(code **)(lVar46 + 0x30))(uVar20,1,lVar16);
    iVar15 = (int)uVar20;
joined_r0x0001007c9684:
    if (iVar15 == 0) {
      (**(code **)(lVar46 + 8))(uVar44 & uVar48,lVar16);
    }
    uVar20 = uVar4 + uVar19 & uVar53;
    uVar44 = uVar1 + uVar20;
    uVar19 = uVar44 & uVar52;
    (**(code **)(lVar50 + 0x30))(uVar19,1,lVar17);
    if ((int)uVar19 == 0) {
      (**(code **)(lVar50 + 8))(uVar44 & uVar52,lVar17);
    }
    uVar44 = uVar2 + (lVar5 + uVar20 & uVar30);
    uVar19 = uVar44 & uVar25;
    (**(code **)(lVar39 + 0x30))(uVar19,1,lVar18);
    if ((int)uVar19 == 0) {
      pcVar26 = *(code **)(lVar39 + 8);
      uVar44 = uVar44 & uVar25;
      lVar23 = lVar18;
LAB_1007c95fc:
      (*pcVar26)(uVar44,lVar23);
    }
  }
  else {
    if (uVar31 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar19 = (ulong)((long)param_1 + uVar43 + 8) & uVar51;
      uVar44 = uVar41 + uVar19;
      uVar20 = uVar44 & uVar48;
      (**(code **)(lVar46 + 0x30))(uVar20,1,lVar16);
      iVar15 = (int)uVar20;
      goto joined_r0x0001007c9684;
    }
    if (uVar31 == 0) {
      (**(code **)(lVar24 + 8))(param_1,lVar8);
      uVar44 = (ulong)(uVar21 + (long)param_1) & uVar32;
      (**(code **)(lVar27 + 8))(uVar44,lVar10);
      uVar44 = uVar44 + lVar28 + uVar35;
      uVar19 = uVar44 & uVar34;
      (**(code **)(lVar33 + 0x30))(uVar19,1,lVar9);
      if ((int)uVar19 != 0) goto LAB_1007c9600;
      pcVar26 = *(code **)(lVar33 + 8);
      uVar44 = uVar44 & uVar34;
      lVar23 = lVar9;
      goto LAB_1007c95fc;
    }
  }
LAB_1007c9600:
  bVar11 = *(byte *)((long)param_2 + uVar3);
  uVar31 = (uint)bVar11;
  if (2 < bVar11) {
    uVar7 = 4;
    if (uVar40 < 4) {
      uVar7 = uVar40;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto joined_r0x0001007c96b4;
      uVar31 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_2;
    }
    else {
      uVar31 = *param_2;
    }
    if (uVar40 < 4) {
      uVar31 = (uVar31 | bVar11 - 3 << (ulong)(uVar40 << 3 & 0x1f)) + 3;
    }
    else {
      uVar31 = uVar31 + 3;
    }
  }
joined_r0x0001007c96b4:
  if (uVar31 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar47 = (undefined8 *)((ulong)((long)param_1 + uVar43 + 8) & uVar51);
    puVar45 = (undefined8 *)((ulong)((long)param_2 + uVar43 + 8) & uVar51);
    *puVar47 = *puVar45;
    uVar21 = uVar41 + (long)puVar47;
    uVar41 = uVar41 + (long)puVar45;
    pcVar26 = *(code **)(lVar46 + 0x30);
    _swift_retain();
    uVar32 = uVar41 & uVar48;
    (*pcVar26)(uVar32,1,lVar16);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar21 & uVar48,uVar41 & uVar48,lVar16);
      (**(code **)(lVar46 + 0x38))(uVar21 & uVar48,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar21 & uVar48),(void *)(uVar41 & uVar48),sVar36);
    }
    puVar42 = (undefined8 *)(uVar4 + (long)puVar47 & uVar53);
    puVar49 = (undefined8 *)(uVar4 + (long)puVar45 & uVar53);
    *puVar42 = *puVar49;
    uVar21 = uVar1 + (long)puVar42;
    uVar1 = uVar1 + (long)puVar49;
    uVar32 = uVar1 & uVar52;
    (**(code **)(lVar50 + 0x30))(uVar32,1,lVar17);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar50 + 0x10))(uVar21 & uVar52,uVar1 & uVar52,lVar17);
      (**(code **)(lVar50 + 0x38))(uVar21 & uVar52,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar21 & uVar52),(void *)(uVar1 & uVar52),sVar37);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar42 & uVar30);
    puVar49 = (undefined8 *)(lVar5 + (long)puVar49 & uVar30);
    *puVar42 = *puVar49;
    uVar21 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar49;
    uVar32 = uVar2 & uVar25;
    (**(code **)(lVar39 + 0x30))(uVar32,1,lVar18);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar21 & uVar25,uVar2 & uVar25,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar21 & uVar25,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar21 & uVar25),(void *)(uVar2 & uVar25),sVar38);
    }
    *(undefined8 *)((long)puVar47 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar45 + lVar6 + 7 & 0xfffffffffffffff8);
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar31 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar45 = (undefined8 *)((ulong)((long)param_1 + uVar43 + 8) & uVar51);
    puVar47 = (undefined8 *)((ulong)((long)param_2 + uVar43 + 8) & uVar51);
    *puVar45 = *puVar47;
    uVar21 = uVar41 + (long)puVar45;
    uVar41 = uVar41 + (long)puVar47;
    pcVar26 = *(code **)(lVar46 + 0x30);
    _swift_retain();
    uVar32 = uVar41 & uVar48;
    (*pcVar26)(uVar32,1,lVar16);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar46 + 0x10))(uVar21 & uVar48,uVar41 & uVar48,lVar16);
      (**(code **)(lVar46 + 0x38))(uVar21 & uVar48,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar21 & uVar48),(void *)(uVar41 & uVar48),sVar36);
    }
    puVar45 = (undefined8 *)(uVar4 + (long)puVar45 & uVar53);
    puVar47 = (undefined8 *)(uVar4 + (long)puVar47 & uVar53);
    *puVar45 = *puVar47;
    uVar21 = uVar1 + (long)puVar45;
    uVar1 = uVar1 + (long)puVar47;
    uVar32 = uVar1 & uVar52;
    (**(code **)(lVar50 + 0x30))(uVar32,1,lVar17);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar50 + 0x10))(uVar21 & uVar52,uVar1 & uVar52,lVar17);
      (**(code **)(lVar50 + 0x38))(uVar21 & uVar52,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar21 & uVar52),(void *)(uVar1 & uVar52),sVar37);
    }
    puVar45 = (undefined8 *)(lVar5 + (long)puVar45 & uVar30);
    puVar47 = (undefined8 *)(lVar5 + (long)puVar47 & uVar30);
    *puVar45 = *puVar47;
    uVar21 = uVar2 + (long)puVar45;
    uVar2 = uVar2 + (long)puVar47;
    uVar32 = uVar2 & uVar25;
    (**(code **)(lVar39 + 0x30))(uVar32,1,lVar18);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar21 & uVar25,uVar2 & uVar25,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar21 & uVar25,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar21 & uVar25),(void *)(uVar2 & uVar25),sVar38);
    }
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar31 != 0) {
      puVar22 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar22;
    }
    (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar8);
    uVar41 = (ulong)(uVar21 + (long)param_1) & uVar32;
    uVar32 = (ulong)(uVar21 + (long)param_2) & uVar32;
    (**(code **)(lVar27 + 0x10))(uVar41,uVar32,lVar10);
    uVar41 = uVar41 + lVar28 + uVar35;
    uVar32 = uVar32 + lVar28 + uVar35;
    uVar21 = uVar32 & uVar34;
    (**(code **)(lVar33 + 0x30))(uVar21,1,lVar9);
    if ((int)uVar21 == 0) {
      (**(code **)(lVar33 + 0x10))(uVar41 & uVar34,uVar32 & uVar34,lVar9);
      (**(code **)(lVar33 + 0x38))(uVar41 & uVar34,0,1,lVar9);
    }
    else {
      _memcpy((void *)(uVar41 & uVar34),(void *)(uVar32 & uVar34),sVar29);
    }
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1007c9bb4 | FUN_1007c9bb4 */

undefined8 * FUN_1007c9bb4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  size_t sVar34;
  size_t sVar35;
  size_t sVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(lVar19 + -8);
  lVar23 = *(long *)(lVar9 + -8);
  uVar27 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar39 = *(long *)(lVar21 + 0x40) + uVar27;
  lVar24 = *(long *)(lVar23 + 0x40);
  lVar28 = *(long *)(lVar10 + -8);
  uVar30 = (ulong)*(byte *)(lVar28 + 0x50);
  sVar25 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar25 = sVar25 + 1;
  }
  uVar3 = sVar25 + (lVar24 + uVar30 + (uVar39 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar30 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar46 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar46 + 0x50);
  uVar44 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar40 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar40 + 0x50);
  uVar45 = (ulong)bVar12;
  uVar47 = uVar45 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar37 = *(long *)(lVar17 + -8);
  uVar29 = (ulong)*(byte *)(lVar37 + 0x50);
  uVar31 = uVar29 | 7;
  uVar22 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar37 + 0x50));
  uVar26 = uVar22 | 7;
  uVar38 = uVar44 + 8;
  sVar34 = *(size_t *)(lVar46 + 0x40);
  if (*(int *)(lVar46 + 0x54) == 0) {
    sVar34 = sVar34 + 1;
  }
  uVar4 = sVar34 + (uVar38 & (uVar44 ^ 0xffffffffffffffff)) + uVar47;
  uVar1 = uVar45 + 8;
  sVar35 = *(size_t *)(lVar40 + 0x40);
  if (*(int *)(lVar40 + 0x54) == 0) {
    sVar35 = sVar35 + 1;
  }
  lVar5 = sVar35 + (uVar1 & (uVar45 ^ 0xffffffffffffffff)) + uVar31;
  uVar2 = uVar29 + 8;
  sVar36 = *(size_t *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    sVar36 = sVar36 + 1;
  }
  lVar6 = sVar36 + (uVar2 & (uVar29 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar47 ^ 0xffffffffffffffff)) & (uVar31 ^ 0xffffffffffffffff));
  uVar22 = lVar6 + (uVar22 + 8 & (uVar26 ^ 0xffffffffffffffff));
  uVar8 = uVar22;
  if (uVar22 <= uVar3) {
    uVar8 = uVar3;
  }
  uVar3 = (uVar22 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  bVar11 = *(byte *)((long)param_2 + uVar3);
  uVar32 = (uint)bVar11;
  if (2 < bVar11) {
    uVar33 = (uint)uVar3;
    uVar7 = 4;
    if (uVar33 < 4) {
      uVar7 = uVar33;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007c9e14;
      uVar32 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar32 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar32 = (uint)(uint3)*param_2;
    }
    else {
      uVar32 = *param_2;
    }
    if (uVar33 < 4) {
      uVar32 = uVar32 | bVar11 - 3 << (ulong)((uVar33 & 3) << 3);
    }
    uVar32 = uVar32 + 3;
  }
LAB_1007c9e14:
  uVar22 = ~uVar26;
  uVar44 = ~uVar44;
  uVar47 = ~uVar47;
  uVar45 = ~uVar45;
  uVar31 = ~uVar31;
  uVar29 = ~uVar29;
  if (uVar32 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar42 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
    puVar18 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
    *puVar42 = *puVar18;
    uVar39 = uVar38 + (long)puVar42;
    uVar38 = uVar38 + (long)puVar18;
    uVar27 = uVar38 & uVar44;
    (**(code **)(lVar46 + 0x30))(uVar27,1,lVar15);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar46 + 0x20))(uVar39 & uVar44,uVar38 & uVar44,lVar15);
      (**(code **)(lVar46 + 0x38))(uVar39 & uVar44,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar39 & uVar44),(void *)(uVar38 & uVar44),sVar34);
    }
    puVar43 = (undefined8 *)(uVar4 + (long)puVar42 & uVar47);
    puVar41 = (undefined8 *)(uVar4 + (long)puVar18 & uVar47);
    *puVar43 = *puVar41;
    uVar39 = uVar1 + (long)puVar43;
    uVar1 = uVar1 + (long)puVar41;
    uVar27 = uVar1 & uVar45;
    (**(code **)(lVar40 + 0x30))(uVar27,1,lVar16);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar39 & uVar45,uVar1 & uVar45,lVar16);
      (**(code **)(lVar40 + 0x38))(uVar39 & uVar45,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar39 & uVar45),(void *)(uVar1 & uVar45),sVar35);
    }
    puVar43 = (undefined8 *)(lVar5 + (long)puVar43 & uVar31);
    puVar41 = (undefined8 *)(lVar5 + (long)puVar41 & uVar31);
    *puVar43 = *puVar41;
    uVar39 = uVar2 + (long)puVar43;
    uVar2 = uVar2 + (long)puVar41;
    uVar27 = uVar2 & uVar29;
    (**(code **)(lVar37 + 0x30))(uVar27,1,lVar17);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar37 + 0x20))(uVar39 & uVar29,uVar2 & uVar29,lVar17);
      (**(code **)(lVar37 + 0x38))(uVar39 & uVar29,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar39 & uVar29),(void *)(uVar2 & uVar29),sVar36);
    }
    *(undefined8 *)((long)puVar42 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar18 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar20 = 2;
  }
  else {
    if (uVar32 != 1) {
      if (uVar32 == 0) {
        uVar22 = ~uVar30;
        (**(code **)(lVar21 + 0x20))(param_1,param_2,lVar19);
        uVar38 = uVar39 + (long)param_1 & ~uVar27;
        uVar39 = (ulong)(uVar39 + (long)param_2) & ~uVar27;
        (**(code **)(lVar23 + 0x20))(uVar38,uVar39,lVar9);
        lVar24 = lVar24 + uVar30;
        uVar38 = uVar38 + lVar24;
        uVar39 = uVar39 + lVar24;
        uVar27 = uVar39 & uVar22;
        (**(code **)(lVar28 + 0x30))(uVar27,1,lVar10);
        if ((int)uVar27 == 0) {
          (**(code **)(lVar28 + 0x20))(uVar38 & uVar22,uVar39 & uVar22,lVar10);
          (**(code **)(lVar28 + 0x38))(uVar38 & uVar22,0,1,lVar10);
        }
        else {
          _memcpy((void *)(uVar38 & uVar22),(void *)(uVar39 & uVar22),sVar25);
        }
        *(undefined1 *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
      puVar18 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar18;
    }
    *param_1 = *(undefined8 *)param_2;
    puVar18 = (undefined8 *)((long)param_1 + uVar26 + 8 & uVar22);
    puVar42 = (undefined8 *)((ulong)((long)param_2 + uVar26 + 8) & uVar22);
    *puVar18 = *puVar42;
    uVar39 = uVar38 + (long)puVar18;
    uVar38 = uVar38 + (long)puVar42;
    uVar27 = uVar38 & uVar44;
    (**(code **)(lVar46 + 0x30))(uVar27,1,lVar15);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar46 + 0x20))(uVar39 & uVar44,uVar38 & uVar44,lVar15);
      (**(code **)(lVar46 + 0x38))(uVar39 & uVar44,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar39 & uVar44),(void *)(uVar38 & uVar44),sVar34);
    }
    puVar41 = (undefined8 *)(uVar4 + (long)puVar18 & uVar47);
    puVar18 = (undefined8 *)(uVar4 + (long)puVar42 & uVar47);
    *puVar41 = *puVar18;
    uVar39 = uVar1 + (long)puVar41;
    uVar1 = uVar1 + (long)puVar18;
    uVar27 = uVar1 & uVar45;
    (**(code **)(lVar40 + 0x30))(uVar27,1,lVar16);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar39 & uVar45,uVar1 & uVar45,lVar16);
      (**(code **)(lVar40 + 0x38))(uVar39 & uVar45,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar39 & uVar45),(void *)(uVar1 & uVar45),sVar35);
    }
    puVar42 = (undefined8 *)(lVar5 + (long)puVar41 & uVar31);
    puVar18 = (undefined8 *)(lVar5 + (long)puVar18 & uVar31);
    *puVar42 = *puVar18;
    uVar39 = uVar2 + (long)puVar42;
    uVar2 = uVar2 + (long)puVar18;
    uVar27 = uVar2 & uVar29;
    (**(code **)(lVar37 + 0x30))(uVar27,1,lVar17);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar37 + 0x20))(uVar39 & uVar29,uVar2 & uVar29,lVar17);
      (**(code **)(lVar37 + 0x38))(uVar39 & uVar29,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar39 & uVar29),(void *)(uVar2 & uVar29),sVar36);
    }
    uVar20 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar20;
  return param_1;
}



/* Address: 0x1007ca304 | FUN_1007ca304 */

uint * FUN_1007ca304(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  byte bVar22;
  long lVar23;
  ulong uVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  size_t sVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  size_t sVar37;
  size_t sVar38;
  size_t sVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 *puVar47;
  uint uVar48;
  ulong uVar49;
  undefined8 *puVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  
  puVar13 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar12 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar8 + -8);
  lVar26 = *(long *)(lVar10 + -8);
  uVar32 = (ulong)*(byte *)(lVar26 + 0x50);
  uVar19 = *(long *)(lVar23 + 0x40) + uVar32;
  lVar27 = *(long *)(lVar26 + 0x40);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar33 = *(long *)(lVar9 + -8);
  uVar36 = (ulong)*(byte *)(lVar33 + 0x50);
  sVar28 = *(size_t *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    sVar28 = sVar28 + 1;
  }
  uVar3 = sVar28 + (lVar27 + uVar36 + (uVar19 & (uVar32 ^ 0xffffffffffffffff)) &
                   (uVar36 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar53 = *(long *)(lVar15 + -8);
  bVar22 = *(byte *)(lVar53 + 0x50);
  uVar49 = (ulong)bVar22;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar13,puVar12);
  lVar52 = *(long *)(lVar16 + -8);
  bVar11 = *(byte *)(lVar52 + 0x50);
  uVar51 = (ulong)bVar11;
  uVar41 = uVar51 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar12);
  lVar40 = *(long *)(lVar17 + -8);
  uVar24 = (ulong)*(byte *)(lVar40 + 0x50);
  uVar29 = uVar24 | 7;
  uVar34 = (ulong)(byte)(bVar11 | bVar22 | *(byte *)(lVar40 + 0x50));
  uVar44 = uVar34 | 7;
  uVar42 = uVar49 + 8;
  sVar37 = *(size_t *)(lVar53 + 0x40);
  if (*(int *)(lVar53 + 0x54) == 0) {
    sVar37 = sVar37 + 1;
  }
  uVar4 = sVar37 + (uVar42 & (uVar49 ^ 0xffffffffffffffff)) + uVar41;
  uVar1 = uVar51 + 8;
  sVar38 = *(size_t *)(lVar52 + 0x40);
  if (*(int *)(lVar52 + 0x54) == 0) {
    sVar38 = sVar38 + 1;
  }
  lVar5 = sVar38 + (uVar1 & (uVar51 ^ 0xffffffffffffffff)) + uVar29;
  uVar2 = uVar24 + 8;
  sVar39 = *(size_t *)(lVar40 + 0x40);
  if (*(int *)(lVar40 + 0x54) == 0) {
    sVar39 = sVar39 + 1;
  }
  lVar6 = sVar39 + (uVar2 & (uVar24 ^ 0xffffffffffffffff)) +
          (lVar5 + (uVar4 & (uVar41 ^ 0xffffffffffffffff)) & (uVar29 ^ 0xffffffffffffffff));
  uVar34 = lVar6 + (uVar34 + 8 & (uVar44 ^ 0xffffffffffffffff));
  uVar35 = uVar34;
  if (uVar34 <= uVar3) {
    uVar35 = uVar3;
  }
  uVar3 = (uVar34 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar35) {
    uVar3 = uVar35;
  }
  uVar48 = (uint)uVar3;
  bVar22 = *(byte *)((long)param_1 + uVar3);
  uVar31 = (uint)bVar22;
  if (2 < bVar22) {
    uVar7 = 4;
    if (uVar48 < 4) {
      uVar7 = uVar48;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007ca5b0;
      uVar31 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_1;
    }
    else {
      uVar31 = *param_1;
    }
    if (uVar48 < 4) {
      uVar31 = uVar31 | bVar22 - 3 << (ulong)(uVar48 << 3 & 0x1f);
    }
    uVar31 = uVar31 + 3;
  }
LAB_1007ca5b0:
  uVar32 = ~uVar32;
  uVar34 = ~uVar36;
  uVar35 = ~uVar44;
  uVar49 = ~uVar49;
  uVar41 = ~uVar41;
  uVar51 = ~uVar51;
  uVar29 = ~uVar29;
  uVar24 = ~uVar24;
  if (uVar31 == 2) {
    _swift_release(*(undefined8 *)param_1);
    uVar46 = (ulong)((long)param_1 + uVar44 + 8) & uVar35;
    uVar45 = uVar42 + uVar46;
    uVar18 = uVar45 & uVar49;
    (**(code **)(lVar53 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar53 + 8))(uVar45 & uVar49,lVar15);
    }
    uVar46 = uVar4 + uVar46 & uVar41;
    uVar45 = uVar1 + uVar46;
    uVar18 = uVar45 & uVar51;
    (**(code **)(lVar52 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar52 + 8))(uVar45 & uVar51,lVar16);
    }
    uVar45 = uVar2 + (lVar5 + uVar46 & uVar29);
    uVar18 = uVar45 & uVar24;
    (**(code **)(lVar40 + 0x30))(uVar18,1,lVar17);
    iVar14 = (int)uVar18;
joined_r0x0001007ca824:
    if (iVar14 == 0) {
      pcVar25 = *(code **)(lVar40 + 8);
      uVar45 = uVar45 & uVar24;
      lVar21 = lVar17;
LAB_1007ca834:
      (*pcVar25)(uVar45,lVar21);
    }
  }
  else {
    if (uVar31 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar46 = (ulong)((long)param_1 + uVar44 + 8) & uVar35;
      uVar45 = uVar42 + uVar46;
      uVar18 = uVar45 & uVar49;
      (**(code **)(lVar53 + 0x30))(uVar18,1,lVar15);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar53 + 8))(uVar45 & uVar49,lVar15);
      }
      uVar46 = uVar4 + uVar46 & uVar41;
      uVar45 = uVar1 + uVar46;
      uVar18 = uVar45 & uVar51;
      (**(code **)(lVar52 + 0x30))(uVar18,1,lVar16);
      if ((int)uVar18 == 0) {
        (**(code **)(lVar52 + 8))(uVar45 & uVar51,lVar16);
      }
      uVar45 = uVar2 + (lVar5 + uVar46 & uVar29);
      uVar18 = uVar45 & uVar24;
      (**(code **)(lVar40 + 0x30))(uVar18,1,lVar17);
      iVar14 = (int)uVar18;
      goto joined_r0x0001007ca824;
    }
    if (uVar31 == 0) {
      (**(code **)(lVar23 + 8))(param_1,lVar8);
      uVar45 = (ulong)(uVar19 + (long)param_1) & uVar32;
      (**(code **)(lVar26 + 8))(uVar45,lVar10);
      uVar45 = uVar45 + lVar27 + uVar36;
      uVar18 = uVar45 & uVar34;
      (**(code **)(lVar33 + 0x30))(uVar18,1,lVar9);
      if ((int)uVar18 != 0) goto LAB_1007ca838;
      pcVar25 = *(code **)(lVar33 + 8);
      uVar45 = uVar45 & uVar34;
      lVar21 = lVar9;
      goto LAB_1007ca834;
    }
  }
LAB_1007ca838:
  bVar22 = *(byte *)((long)param_2 + uVar3);
  uVar31 = (uint)bVar22;
  if (2 < bVar22) {
    uVar7 = 4;
    if (uVar48 < 4) {
      uVar7 = uVar48;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto joined_r0x0001007ca8ac;
      uVar31 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar31 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar31 = (uint)(uint3)*param_2;
    }
    else {
      uVar31 = *param_2;
    }
    if (uVar48 < 4) {
      uVar31 = (uVar31 | bVar22 - 3 << (ulong)(uVar48 << 3 & 0x1f)) + 3;
    }
    else {
      uVar31 = uVar31 + 3;
    }
  }
joined_r0x0001007ca8ac:
  if (uVar31 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar47 = (undefined8 *)((ulong)((long)param_1 + uVar44 + 8) & uVar35);
    puVar30 = (undefined8 *)((ulong)((long)param_2 + uVar44 + 8) & uVar35);
    *puVar47 = *puVar30;
    uVar19 = uVar42 + (long)puVar47;
    uVar42 = uVar42 + (long)puVar30;
    uVar32 = uVar42 & uVar49;
    (**(code **)(lVar53 + 0x30))(uVar32,1,lVar15);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar53 + 0x20))(uVar19 & uVar49,uVar42 & uVar49,lVar15);
      (**(code **)(lVar53 + 0x38))(uVar19 & uVar49,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar19 & uVar49),(void *)(uVar42 & uVar49),sVar37);
    }
    puVar43 = (undefined8 *)(uVar4 + (long)puVar47 & uVar41);
    puVar50 = (undefined8 *)(uVar4 + (long)puVar30 & uVar41);
    *puVar43 = *puVar50;
    uVar19 = uVar1 + (long)puVar43;
    uVar1 = uVar1 + (long)puVar50;
    uVar32 = uVar1 & uVar51;
    (**(code **)(lVar52 + 0x30))(uVar32,1,lVar16);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar52 + 0x20))(uVar19 & uVar51,uVar1 & uVar51,lVar16);
      (**(code **)(lVar52 + 0x38))(uVar19 & uVar51,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar19 & uVar51),(void *)(uVar1 & uVar51),sVar38);
    }
    puVar43 = (undefined8 *)(lVar5 + (long)puVar43 & uVar29);
    puVar50 = (undefined8 *)(lVar5 + (long)puVar50 & uVar29);
    *puVar43 = *puVar50;
    uVar19 = uVar2 + (long)puVar43;
    uVar2 = uVar2 + (long)puVar50;
    uVar32 = uVar2 & uVar24;
    (**(code **)(lVar40 + 0x30))(uVar32,1,lVar17);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar19 & uVar24,uVar2 & uVar24,lVar17);
      (**(code **)(lVar40 + 0x38))(uVar19 & uVar24,0,1,lVar17);
    }
    else {
      _memcpy((void *)(uVar19 & uVar24),(void *)(uVar2 & uVar24),sVar39);
    }
    *(undefined8 *)((long)puVar47 + lVar6 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar30 + lVar6 + 7 & 0xfffffffffffffff8);
    bVar22 = 2;
  }
  else {
    if (uVar31 != 1) {
      if (uVar31 != 0) {
        puVar20 = _memcpy(param_1,param_2,uVar3 + 1);
        return puVar20;
      }
      (**(code **)(lVar23 + 0x20))(param_1,param_2,lVar8);
      uVar42 = (ulong)(uVar19 + (long)param_1) & uVar32;
      uVar32 = (ulong)(uVar19 + (long)param_2) & uVar32;
      (**(code **)(lVar26 + 0x20))(uVar42,uVar32,lVar10);
      uVar42 = uVar42 + lVar27 + uVar36;
      uVar32 = uVar32 + lVar27 + uVar36;
      uVar19 = uVar32 & uVar34;
      (**(code **)(lVar33 + 0x30))(uVar19,1,lVar9);
      if ((int)uVar19 != 0) {
        _memcpy((void *)(uVar42 & uVar34),(void *)(uVar32 & uVar34),sVar28);
        *(byte *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
      (**(code **)(lVar33 + 0x20))(uVar42 & uVar34,uVar32 & uVar34,lVar9);
      (**(code **)(lVar33 + 0x38))(uVar42 & uVar34,0,1,lVar9);
      *(byte *)((long)param_1 + uVar3) = 0;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar30 = (undefined8 *)((ulong)((long)param_1 + uVar44 + 8) & uVar35);
    puVar47 = (undefined8 *)((ulong)((long)param_2 + uVar44 + 8) & uVar35);
    *puVar30 = *puVar47;
    uVar19 = uVar42 + (long)puVar30;
    uVar42 = uVar42 + (long)puVar47;
    uVar32 = uVar42 & uVar49;
    (**(code **)(lVar53 + 0x30))(uVar32,1,lVar15);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar53 + 0x20))(uVar19 & uVar49,uVar42 & uVar49,lVar15);
      (**(code **)(lVar53 + 0x38))(uVar19 & uVar49,0,1,lVar15);
    }
    else {
      _memcpy((void *)(uVar19 & uVar49),(void *)(uVar42 & uVar49),sVar37);
    }
    puVar30 = (undefined8 *)(uVar4 + (long)puVar30 & uVar41);
    puVar47 = (undefined8 *)(uVar4 + (long)puVar47 & uVar41);
    *puVar30 = *puVar47;
    uVar19 = uVar1 + (long)puVar30;
    uVar1 = uVar1 + (long)puVar47;
    uVar32 = uVar1 & uVar51;
    (**(code **)(lVar52 + 0x30))(uVar32,1,lVar16);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar52 + 0x20))(uVar19 & uVar51,uVar1 & uVar51,lVar16);
      (**(code **)(lVar52 + 0x38))(uVar19 & uVar51,0,1,lVar16);
    }
    else {
      _memcpy((void *)(uVar19 & uVar51),(void *)(uVar1 & uVar51),sVar38);
    }
    puVar30 = (undefined8 *)(lVar5 + (long)puVar30 & uVar29);
    puVar47 = (undefined8 *)(lVar5 + (long)puVar47 & uVar29);
    *puVar30 = *puVar47;
    uVar19 = uVar2 + (long)puVar30;
    uVar2 = uVar2 + (long)puVar47;
    uVar32 = uVar2 & uVar24;
    (**(code **)(lVar40 + 0x30))(uVar32,1,lVar17);
    if ((int)uVar32 == 0) {
      (**(code **)(lVar40 + 0x20))(uVar19 & uVar24,uVar2 & uVar24,lVar17);
      (**(code **)(lVar40 + 0x38))(uVar19 & uVar24,0,1,lVar17);
      bVar22 = 1;
    }
    else {
      _memcpy((void *)(uVar19 & uVar24),(void *)(uVar2 & uVar24),sVar39);
      bVar22 = 1;
    }
  }
  *(byte *)((long)param_1 + uVar3) = bVar22;
  return param_1;
}



/* Address: 0x1007cadbc | FUN_1007cadbc */

int FUN_1007cadbc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar10 + -8);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar15 = *(long *)(lVar2 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  uVar14 = lVar16 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar14 &
                     (uVar14 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar11 + 0x40) + (ulong)*(byte *)(lVar15 + 0x50) &
                    ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar16 + -8);
  bVar3 = *(byte *)(lVar15 + 0x50);
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar8,puVar7);
  lVar11 = *(long *)(lVar16 + -8);
  bVar4 = *(byte *)(lVar11 + 0x50);
  uVar18 = (ulong)bVar4;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar2,puVar8,puVar7);
  lVar10 = *(long *)(lVar16 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  bVar4 = bVar4 | bVar3 | *(byte *)(lVar10 + 0x50);
  lVar16 = (*(long *)(lVar10 + 0x40) - (-uVar12 - 9 | uVar12)) +
           ((ulong)(bVar4 & 0xf8 ^ 0x1f8) & (ulong)bVar4 + 8);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar16 = lVar16 + 1;
  }
  lVar16 = lVar16 - ((((-uVar18 - 9 | uVar18) - ((uVar12 | 7) + *(long *)(lVar11 + 0x40))) -
                     (ulong)(*(int *)(lVar11 + 0x54) == 0)) +
                     (((-(ulong)bVar3 - 9 | (ulong)bVar3) -
                      ((uVar18 | 7) + *(long *)(lVar15 + 0x40))) -
                      (ulong)(*(int *)(lVar15 + 0x54) == 0) | uVar18 | 7) + 1 | uVar12 | 7);
  uVar12 = lVar16 - 2;
  if (uVar12 <= uVar14) {
    uVar12 = uVar14;
  }
  uVar14 = (lVar16 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar14 <= uVar12) {
    uVar14 = uVar12;
  }
  uVar6 = 0xfc - (1U >> (ulong)(((uint)uVar14 & 3) << 3));
  if (3 < (uint)uVar14) {
    uVar6 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar6) goto LAB_1007cb01c;
  uVar12 = uVar14 + 1;
  uVar13 = (uint)uVar12;
  uVar5 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar17 = ((param_2 + ~(-1 << (ulong)(uVar5 & 0x1f))) - uVar6 >> (ulong)(uVar5 & 0x1f)) + 1;
    if (uVar17 < 0x100) {
      if (uVar17 < 2) goto LAB_1007cb01c;
      goto LAB_1007cafa8;
    }
    if (uVar17 >> 0x10 == 0) {
      uVar17 = (uint)*(ushort *)((long)param_1 + uVar12);
    }
    else {
      uVar17 = *(uint *)((long)param_1 + uVar12);
    }
  }
  else {
LAB_1007cafa8:
    uVar17 = (uint)*(byte *)((long)param_1 + uVar12);
  }
  if (uVar17 != 0) {
    uVar1 = 0;
    if (uVar13 < 4) {
      uVar1 = uVar17 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar13 != 0) {
      uVar5 = 4;
      if (uVar13 < 4) {
        uVar5 = uVar13;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar12 = (ulong)(byte)*param_1;
        }
        else {
          uVar12 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar12 = (ulong)(uint3)*param_1;
      }
      else {
        uVar12 = (ulong)*param_1;
      }
    }
    return uVar6 + ((uint)uVar12 | uVar1) + 1;
  }
LAB_1007cb01c:
  iVar9 = 0x100 - (uint)*(byte *)((long)param_1 + uVar14);
  if (uVar6 <= (*(byte *)((long)param_1 + uVar14) ^ 0xff)) {
    iVar9 = 0;
  }
  return iVar9;
}



/* Address: 0x1007cb0a0 | FUN_1007cb0a0 */

void FUN_1007cb0a0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar18 = *(long *)(param_4 + 0x18);
  lVar8 = *(long *)(lVar18 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar7 = *(long *)(param_4 + 0x20);
  lVar11 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar10 = lVar12 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar10 &
                     (uVar10 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar11 + 0x50) &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar12 + -8);
  bVar16 = *(byte *)(lVar8 + 0x50);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x30),lVar18,puVar6,puVar5);
  lVar18 = *(long *)(lVar12 + -8);
  bVar13 = *(byte *)(lVar18 + 0x50);
  uVar15 = (ulong)bVar13;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x38),lVar7,puVar6,puVar5);
  lVar7 = *(long *)(lVar12 + -8);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  bVar13 = bVar13 | bVar16 | *(byte *)(lVar7 + 0x50);
  lVar12 = (*(long *)(lVar7 + 0x40) - (-uVar9 - 9 | uVar9)) +
           ((ulong)(bVar13 & 0xf8 ^ 0x1f8) & (ulong)bVar13 + 8);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  lVar12 = lVar12 - ((((-uVar15 - 9 | uVar15) - ((uVar9 | 7) + *(long *)(lVar18 + 0x40))) -
                     (ulong)(*(int *)(lVar18 + 0x54) == 0)) +
                     (((-(ulong)bVar16 - 9 | (ulong)bVar16) -
                      ((uVar15 | 7) + *(long *)(lVar8 + 0x40))) -
                      (ulong)(*(int *)(lVar8 + 0x54) == 0) | uVar15 | 7) + 1 | uVar9 | 7);
  uVar9 = lVar12 - 2;
  if (uVar9 <= uVar10) {
    uVar9 = uVar10;
  }
  uVar10 = (lVar12 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar10 <= uVar9) {
    uVar10 = uVar9;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar10 & 3) << 3));
  if (3 < (uint)uVar10) {
    uVar4 = 0xfc;
  }
  sVar2 = uVar10 + 1;
  uVar17 = (uint)sVar2;
  if (uVar4 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar17 << 3 & 0x1f))) - uVar4 >> (ulong)(uVar17 << 3 & 0x1f)
            ) + 1;
    bVar13 = 2;
    if (0xffff < uVar1) {
      bVar13 = 4;
    }
    if (uVar1 < 0x100) {
      bVar13 = 1 < uVar1;
    }
    bVar16 = 1;
    if (uVar17 < 4) {
      bVar16 = bVar13;
    }
  }
  else {
    bVar16 = 0;
  }
  if (uVar4 < param_2) {
    param_2 = param_2 + ~uVar4;
    if (uVar17 < 4) {
      iVar14 = (param_2 >> (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar17 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar17 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar3 = (undefined2)uVar4;
        if (uVar17 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar17 == 2) {
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
      iVar14 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar14;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar14;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar10) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1007cb3f4 | FUN_1007cb3f4 */

uint FUN_1007cb3f4(uint *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar14 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(lVar14 + -8);
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar8 = *(long *)(param_2 + 0x20);
  lVar12 = *(long *)(lVar8 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar11 = lVar13 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar11 &
                     (uVar11 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar9 + 0x40) + (ulong)*(byte *)(lVar12 + 0x50) &
                    ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar13 + -8);
  bVar2 = *(byte *)(lVar9 + 0x50);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar14,puVar5,puVar4);
  lVar14 = *(long *)(lVar13 + -8);
  bVar3 = *(byte *)(lVar14 + 0x50);
  uVar15 = (ulong)bVar3;
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar8,puVar5,puVar4);
  lVar8 = *(long *)(lVar13 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  bVar3 = bVar3 | bVar2 | *(byte *)(lVar8 + 0x50);
  lVar13 = (*(long *)(lVar8 + 0x40) - (-uVar10 - 9 | uVar10)) +
           ((ulong)(bVar3 & 0xf8 ^ 0x1f8) & (ulong)bVar3 + 8);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  lVar13 = lVar13 - ((((-uVar15 - 9 | uVar15) - ((uVar10 | 7) + *(long *)(lVar14 + 0x40))) -
                     (ulong)(*(int *)(lVar14 + 0x54) == 0)) +
                     (((-(ulong)bVar2 - 9 | (ulong)bVar2) - ((uVar15 | 7) + *(long *)(lVar9 + 0x40))
                      ) - (ulong)(*(int *)(lVar9 + 0x54) == 0) | uVar15 | 7) + 1 | uVar10 | 7);
  uVar10 = lVar13 - 2;
  if (uVar10 <= uVar11) {
    uVar10 = uVar11;
  }
  uVar11 = (lVar13 + 5U & 0xfffffffffffffff8) + 8;
  if (uVar11 <= uVar10) {
    uVar11 = uVar10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar6 = (uint)bVar2;
  if (2 < bVar2) {
    uVar7 = (uint)uVar11;
    uVar1 = 4;
    if (uVar7 < 4) {
      uVar1 = uVar7;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) {
        return uVar6;
      }
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
    if (uVar7 < 4) {
      uVar6 = (uVar6 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3)) + 3;
    }
    else {
      uVar6 = uVar6 + 3;
    }
  }
  return uVar6;
}



/* Address: 0x1007cb644 | FUN_1007cb644 */

void FUN_1007cb644(uint *param_1,uint param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar3 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_2 < 3) {
    lVar7 = *(long *)(param_3 + 0x10);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar14 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar14 + 0x50);
    lVar13 = *(long *)(param_3 + 0x18);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar13,puVar4,puVar3);
    lVar15 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar11 = (ulong)bVar2;
    lVar12 = *(long *)(param_3 + 0x20);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar12,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar8 + 0x50);
    lVar5 = (*(long *)(lVar8 + 0x40) - (-uVar9 - 9 | uVar9)) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar5 = lVar5 - ((((-uVar11 - 9 | uVar11) - (*(long *)(lVar15 + 0x40) + (uVar9 | 7))) -
                     (ulong)(*(int *)(lVar15 + 0x54) == 0)) +
                     (((-(ulong)bVar1 - 9 | (ulong)bVar1) -
                      ((uVar11 | 7) + *(long *)(lVar14 + 0x40))) -
                      (ulong)(*(int *)(lVar14 + 0x54) == 0) | uVar11 | 7) + 1 | uVar9 | 7);
    uVar9 = (lVar5 + 5U & 0xfffffffffffffff8) + 8;
    uVar11 = lVar5 - 2;
    lVar8 = *(long *)(lVar13 + -8);
    uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
    lVar12 = *(long *)(lVar12 + -8);
    lVar5 = *(long *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar10 = lVar5 + ((*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 &
                      (uVar10 ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar12 + 0x50) &
                     ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    *(char *)((long)param_1 + uVar9) = (char)param_2;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    lVar12 = *(long *)(lVar8 + -8);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    lVar7 = *(long *)(param_3 + 0x20);
    lVar13 = *(long *)(lVar7 + -8);
    lVar5 = *(long *)(lVar13 + 0x40);
    if (*(int *)(lVar13 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar9 = lVar5 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar9 &
                     (uVar9 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar12 + 0x40) + (ulong)*(byte *)(lVar13 + 0x50) &
                    ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar12 = *(long *)(lVar5 + -8);
    bVar1 = *(byte *)(lVar12 + 0x50);
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar8,puVar4,puVar3);
    lVar8 = *(long *)(lVar5 + -8);
    bVar2 = *(byte *)(lVar8 + 0x50);
    uVar10 = (ulong)bVar2;
    lVar5 = 0;
    _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar7,puVar4,puVar3);
    lVar7 = *(long *)(lVar5 + -8);
    uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
    bVar2 = bVar2 | bVar1 | *(byte *)(lVar7 + 0x50);
    lVar5 = (*(long *)(lVar7 + 0x40) - (-uVar11 - 9 | uVar11)) +
            ((ulong)(bVar2 & 0xf8 ^ 0x1f8) & (ulong)bVar2 + 8);
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    lVar5 = lVar5 - ((((-uVar10 - 9 | uVar10) - ((uVar11 | 7) + *(long *)(lVar8 + 0x40))) -
                     (ulong)(*(int *)(lVar8 + 0x54) == 0)) +
                     (((-(ulong)bVar1 - 9 | (ulong)bVar1) -
                      ((uVar10 | 7) + *(long *)(lVar12 + 0x40))) -
                      (ulong)(*(int *)(lVar12 + 0x54) == 0) | uVar10 | 7) + 1 | uVar11 | 7);
    uVar11 = lVar5 - 2;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    uVar9 = (lVar5 + 5U & 0xfffffffffffffff8) + 8;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    param_2 = param_2 - 3;
    uVar6 = (uint)uVar9;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar9) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x03';
      if (uVar6 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar9) = 3;
    }
    if (3 < uVar6) {
      uVar6 = 4;
    }
    _bzero(param_1,uVar9);
    if ((int)uVar6 < 3) {
      if (uVar6 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar6 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007cba3c | FUN_1007cba3c */

void FUN_1007cba3c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc11e0);
  return;
}



/* Address: 0x1007cba48 | FUN_1007cba48 */

undefined1  [16] FUN_1007cba48(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c78e90;
  uVar3 = *(ulong *)(param_1 + 0x28);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x48);
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



/* Address: 0x1007cbac0 | FUN_1007cbac0 */

long * FUN_1007cbac0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  sVar4 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  if (((uint)uVar6 < 8 && (*(uint *)(lVar7 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar6 - 9 | uVar6) - sVar4) {
    *param_1 = *param_2;
    uVar1 = (long)param_1 + uVar6 + 8;
    uVar2 = (long)param_2 + uVar6 + 8;
    uVar3 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
    (**(code **)(lVar7 + 0x30))(uVar3,1,lVar5);
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x10))
                (uVar1 & (uVar6 ^ 0xffffffffffffffff),uVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
      (**(code **)(lVar7 + 0x38))(uVar1 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar5);
    }
    else {
      _memcpy((void *)(uVar1 & (uVar6 ^ 0xffffffffffffffff)),
              (void *)(uVar2 & (uVar6 ^ 0xffffffffffffffff)),sVar4);
    }
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007cbbcc | FUN_1007cbbcc */

undefined8 * FUN_1007cbbcc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = uVar6 + 8 + (long)param_1;
  uVar2 = uVar6 + 8 + (long)param_2;
  uVar3 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar3,1,lVar5);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar7 + 0x10))
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



/* Address: 0x1007cbc80 | FUN_1007cbc80 */

undefined8 * FUN_1007cbc80(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  lVar6 = *(long *)(param_3 + 0x28);
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
      (**(code **)(lVar8 + 0x18))
                (uVar1 & (uVar7 ^ 0xffffffffffffffff),uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar6);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(uVar1 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar8 + 0x10))
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



/* Address: 0x1007cbd80 | FUN_1007cbd80 */

undefined8 * FUN_1007cbd80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(param_3 + 0x28);
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



/* Address: 0x1007cbe34 | FUN_1007cbe34 */

undefined8 * FUN_1007cbe34(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  lVar6 = *(long *)(param_3 + 0x28);
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



/* Address: 0x1007cbf34 | FUN_1007cbf34 */

int FUN_1007cbf34(ulong *param_1,uint param_2,long param_3)

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
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  iVar2 = *(int *)(lVar8 + 0x54);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = iVar2 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  if (iVar2 == 0) {
    lVar9 = lVar9 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar8 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1007cbfec;
  uVar7 = lVar9 + ((ulong)bVar3 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar6 = (uint)uVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar10 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_1007cbfec;
      goto LAB_1007cbfac;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1007cbfac:
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
LAB_1007cbfec:
  if (uVar5 < 0x7fffffff) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar2 = 0;
    if (1 < (int)uVar7 + 1U) {
      iVar2 = (int)uVar7;
    }
    return iVar2;
  }
  uVar5 = (int)param_1 + (uint)bVar3 + 8 & ~(uint)bVar3;
  (**(code **)(lVar8 + 0x30))();
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = uVar5 - 1;
  }
  return iVar2;
}



/* Address: 0x1007cc0a0 | FUN_1007cc0a0 */

void FUN_1007cc0a0(ulong *param_1,uint param_2,uint param_3,long param_4)

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
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  iVar13 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar13 != 0) {
    uVar2 = iVar13 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar7 = 0x7ffffffe;
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
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *param_1 = (ulong)param_2;
        }
        else {
          *param_1 = 0;
          *(uint *)param_1 = param_2 + 0x80000001;
        }
      }
      else {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001007cc2b8. Too many branches */
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
    }
  }
  return;
}



/* Address: 0x1007cc338 | FUN_1007cc338 */

void FUN_1007cc338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_1 = param_2;
  local_38 = param_10;
  lVar3 = 0;
  local_68 = param_4;
  uStack_60 = param_5;
  local_58 = param_6;
  uStack_50 = param_7;
  local_48 = param_8;
  uStack_40 = param_9;
  FUN_1007cba3c(0,&local_68);
  iVar1 = *(int *)(lVar3 + 0x4c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1007cc3b8 | FUN_1007cc3b8 */

void FUN_1007cc3b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1007c7be0(0,&local_90);
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
    FUN_1007c7bd4(0,&local_90);
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
    FUN_1007c7bd4(0,&local_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x44)) = uVar5;
  return;
}



/* Address: 0x1007cc550 | FUN_1007cc550 */

undefined1  [16] FUN_1007cc550(long param_1)

{
  long lVar1;
  Optional OVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined7 extraout_var;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long alStack_130 [2];
  code *local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar15 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lStack_c8 = *(undefined8 *)(param_1 + 0x18);
  local_f8 = *(long *)(param_1 + 0x10);
  uStack_a8 = *(undefined8 *)(param_1 + 0x30);
  local_b0 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = 0xff;
  local_d0 = local_f8;
  local_a0 = local_f8;
  lStack_98 = lStack_c8;
  _swift_getAssociatedTypeWitness
            (0xff,local_b0,local_f8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uStack_78 = uStack_a8;
  uStack_80 = local_b0;
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  local_c0 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = 0xff;
  local_e0 = lVar10;
  local_90 = uVar20;
  local_88 = uVar4;
  local_70 = uVar16;
  FUN_1007cba3c(0xff,&local_a0);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_c0,lVar10,puVar11,puVar15);
  local_a0 = local_d0;
  local_90 = uStack_d8;
  lStack_98 = local_e0;
  uStack_80 = local_b0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  lVar6 = 0xff;
  local_88 = uVar4;
  FUN_1007cba3c(0xff,&local_a0);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar16,uVar20,puVar11,puVar15);
  lStack_c8 = local_e0;
  uStack_a8 = local_c0;
  lStack_98 = local_e0;
  local_a0 = local_d0;
  uStack_78 = local_c0;
  uStack_80 = local_b0;
  lVar7 = 0xff;
  local_90 = uVar20;
  local_88 = uVar4;
  local_70 = uVar16;
  FUN_1007cba3c(0xff,&local_a0);
  lVar8 = 0;
  local_100 = lVar5;
  local_f0 = lVar6;
  _swift_getTupleTypeMetadata3(0,lVar5,lVar6,lVar7,0,0);
  local_c0 = *(long *)(lVar8 + -8);
  uVar13 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)alStack_130 - uVar13;
  lVar23 = lVar6 - uVar13;
  plVar14 = (long *)(lVar23 - uVar13);
  lStack_98 = lStack_c8;
  local_a0 = local_d0;
  uStack_80 = uStack_a8;
  local_88 = local_b0;
  lVar5 = 0;
  local_e8 = lVar8;
  local_e0 = (long)plVar14 - uVar13;
  local_90 = uVar20;
  uStack_78 = uVar16;
  FUN_1007c7be0(0,&local_a0);
  lVar8 = *(long *)(lVar5 + -8);
  puVar17 = (undefined8 *)
            (((long)plVar14 - uVar13) - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar8 + 0x10))(puVar17);
  puVar9 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar5);
  iVar3 = (int)puVar9;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar5 = local_f8;
      lVar6 = CONCAT71(extraout_var,OVar2.value);
      lVar7 = 0;
      _swift_getTupleTypeMetadata3(0,local_f8,lVar10,lVar6,"base1 base2 base3 ",0);
      iVar3 = *(int *)(lVar7 + 0x30);
      (**(code **)(*(long *)(lVar6 + -8) + 8))((long)puVar17 + (long)*(int *)(lVar7 + 0x40),lVar6);
      (**(code **)(*(long *)(lVar10 + -8) + 8))((long)puVar17 + (long)iVar3,lVar10);
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar17,lVar5);
      puVar15 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      local_b0 = *puVar17;
      puVar15 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      lVar1 = local_e8;
      lVar10 = 0;
      local_f8 = lVar7;
      _swift_getTupleTypeMetadata2(0,puVar15,local_e8,"task upstreams ",0);
      lVar5 = local_c0;
      lVar7 = local_e0;
      (**(code **)(local_c0 + 0x20))(local_e0,(long)puVar17 + (long)*(int *)(lVar10 + 0x30),lVar1);
      (**(code **)(lVar8 + 8))();
      _swift_storeEnumTagMultiPayload();
      pcVar19 = *(code **)(lVar5 + 0x10);
      (*pcVar19)(plVar14,lVar7,lVar1);
      lVar5 = local_100;
      local_110 = (long)*(int *)(lVar1 + 0x40);
      local_108 = (long)*(int *)(lVar1 + 0x30);
      local_118 = *plVar14;
      local_120 = *(code **)(*(long *)(local_100 + -8) + 8);
      (*local_120)(plVar14,local_100);
      (*pcVar19)(lVar23,lVar7,lVar1);
      lVar10 = local_f0;
      alStack_130[1] = (long)*(int *)(lVar1 + 0x40);
      local_d0 = *(long *)(lVar23 + *(int *)(lVar1 + 0x30));
      pcVar18 = *(code **)(*(long *)(local_f0 + -8) + 8);
      (*pcVar18)(lVar23 + *(int *)(lVar1 + 0x30),local_f0);
      (*pcVar19)(lVar6,lVar7,lVar1);
      lVar8 = local_f8;
      iVar3 = *(int *)(lVar1 + 0x30);
      lVar22 = *(long *)(lVar6 + *(int *)(lVar1 + 0x40));
      pcVar21 = *(code **)(*(long *)(local_f8 + -8) + 8);
      (*pcVar21)(lVar6 + *(int *)(lVar1 + 0x40),local_f8);
      lVar7 = local_118;
      (*pcVar18)(lVar6 + iVar3,lVar10);
      pcVar19 = local_120;
      (*local_120)(lVar6,lVar5);
      (*pcVar21)(lVar23 + alStack_130[1],lVar8);
      (*pcVar19)(lVar23,lVar5);
      (*pcVar21)((long)plVar14 + local_110,lVar8);
      (*pcVar18)((long)plVar14 + local_108,lVar10);
      puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar5 = local_d0;
      if (lVar7 != 0) {
        puVar11 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar13 = *(ulong *)(puVar11 + 0x10);
        puVar15 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1007b784c(puVar15,uVar13 + 1,1,puVar11);
        }
        *(ulong *)(puVar15 + 0x10) = uVar13 + 1;
        *(long *)(puVar15 + uVar13 * 8 + 0x20) = lVar7;
        lVar5 = local_d0;
      }
      local_d0 = lVar5;
      if (lVar5 != 0) {
        puVar11 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = puVar15;
        if (((ulong)puVar11 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
        }
        uVar13 = *(ulong *)(puVar12 + 0x10);
        puVar15 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar13) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_1007b784c(puVar15,uVar13 + 1,1,puVar12);
        }
        *(ulong *)(puVar15 + 0x10) = uVar13 + 1;
        *(long *)(puVar15 + uVar13 * 8 + 0x20) = lVar5;
      }
      if (lVar22 != 0) {
        puVar11 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = puVar15;
        if (((ulong)puVar11 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
        }
        uVar13 = *(ulong *)(puVar12 + 0x10);
        puVar15 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar13) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_1007b784c(puVar15,uVar13 + 1,1,puVar12);
        }
        *(ulong *)(puVar15 + 0x10) = uVar13 + 1;
        *(long *)(puVar15 + uVar13 * 8 + 0x20) = lVar22;
      }
      (**(code **)(local_c0 + 8))(local_e0,local_e8);
      uVar4 = local_b0;
    }
  }
  else {
    uVar4 = 0;
    puVar15 = (undefined *)0x0;
    if (iVar3 != 3) {
      if (iVar3 != 2) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1007ccb44);
        (*pcVar19)();
      }
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x1007cc808);
      (*pcVar19)();
    }
  }
  auVar24._8_8_ = puVar15;
  auVar24._0_8_ = uVar4;
  return auVar24;
}



/* Address: 0x1007ccb44 | FUN_1007ccb44 */

void FUN_1007ccb44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Optional OVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined7 extraout_var;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  UnsafeContinuation UVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  undefined8 *unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *apuStack_150 [2];
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 *local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uStack_d8 = *(undefined8 *)(param_3 + 0x18);
  local_e0 = *(long *)(param_3 + 0x10);
  uVar22 = *(undefined8 *)(param_3 + 0x20);
  uStack_f8 = *(undefined8 *)(param_3 + 0x20);
  local_100 = *(long *)(param_3 + 0x18);
  uStack_c8 = *(undefined8 *)(param_3 + 0x30);
  local_d0 = *(undefined8 *)(param_3 + 0x28);
  uVar23 = *(undefined8 *)(param_3 + 0x38);
  uStack_e8 = *(undefined8 *)(param_3 + 0x38);
  local_f0 = *(undefined8 *)(param_3 + 0x30);
  lVar7 = 0;
  local_110 = param_2;
  local_c0 = local_e0;
  lStack_b8 = local_100;
  local_b0 = local_d0;
  uStack_a8 = local_f0;
  local_a0 = local_e0;
  lStack_98 = local_100;
  local_90 = uVar22;
  local_88 = local_d0;
  uStack_80 = local_f0;
  local_78 = uVar23;
  FUN_1007c7be0(0,&local_a0);
  lVar20 = *(long *)(lVar7 + -8);
  puVar8 = (undefined8 *)
           ((long)apuStack_150 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar20 + 0x10))(puVar8);
  local_108 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar7);
  puVar1 = local_108;
  iVar6 = (int)puVar8;
  if (iVar6 == 0) {
    OVar5 = Swift::Optional::typeMetadataAccessor();
    lVar11 = local_e0;
    lVar14 = local_100;
    local_128 = CONCAT71(extraout_var,OVar5.value);
    lVar9 = 0;
    local_130 = local_e0;
    local_138 = local_100;
    _swift_getTupleTypeMetadata3(0,local_e0,local_100,local_128,"base1 base2 base3 ",0);
    local_118 = (long)*(int *)(lVar9 + 0x30);
    local_120 = (long)*(int *)(lVar9 + 0x40);
    (**(code **)(lVar20 + 8))();
    puVar17 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    puVar3 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
    lVar20 = 0xff;
    apuStack_150[1] = puVar17;
    _swift_getAssociatedTypeWitness
              (0xff,local_d0,lVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lStack_98 = uStack_d8;
    local_a0 = local_e0;
    local_78 = uStack_c8;
    uStack_80 = local_d0;
    uVar10 = 0xff;
    local_90 = uVar22;
    local_88 = lVar20;
    uStack_70 = uVar23;
    FUN_1007cba3c(0xff,&local_a0);
    lVar11 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,local_f0,lVar14,puVar4,puVar3);
    local_a0 = local_e0;
    local_90 = uStack_f8;
    lStack_98 = local_100;
    uStack_80 = local_d0;
    uStack_70 = uStack_e8;
    local_78 = local_f0;
    uVar12 = 0xff;
    local_140 = lVar7;
    local_88 = lVar11;
    FUN_1007cba3c(0xff,&local_a0);
    lVar7 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar23,uVar22,puVar4,puVar3);
    lStack_98 = lStack_b8;
    local_a0 = local_c0;
    local_78 = uStack_a8;
    uStack_80 = local_b0;
    uVar13 = 0xff;
    local_90 = uVar22;
    local_88 = lVar7;
    uStack_70 = uVar23;
    FUN_1007cba3c(0xff,&local_a0);
    lVar14 = 0xff;
    _swift_getTupleTypeMetadata3(0xff,uVar10,uVar12,uVar13,0,0);
    OVar5 = Swift::Optional::typeMetadataAccessor();
    _swift_getTupleTypeMetadata3(0xff,lVar20,lVar11,OVar5.value,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar9 = 0;
    _swift_getTupleTypeMetadata3
              (0,apuStack_150[1],lVar14,UVar15.unknown,"task upstreams downstreamContinuation ",0);
    iVar6 = *(int *)(lVar9 + 0x30);
    local_e0 = (long)*(int *)(lVar9 + 0x40);
    *unaff_x20 = param_1;
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)iVar6);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x30));
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x40));
    *puVar1 = 0;
    lStack_98 = lStack_b8;
    local_a0 = local_c0;
    local_78 = uStack_a8;
    uStack_80 = local_b0;
    lVar14 = 0;
    local_d0 = param_1;
    local_90 = uVar22;
    local_88 = lVar20;
    uStack_70 = uVar23;
    FUN_1007cba3c(0,&local_a0);
    (**(code **)(*(long *)(lVar20 + -8) + 0x38))
              ((long)puVar1 + (long)*(int *)(lVar14 + 0x4c),1,1,lVar20);
    *puVar8 = 0;
    lStack_98 = lStack_b8;
    local_a0 = local_c0;
    local_78 = uStack_a8;
    uStack_80 = local_b0;
    lVar20 = 0;
    local_90 = uVar22;
    local_88 = lVar11;
    uStack_70 = uVar23;
    FUN_1007cba3c(0,&local_a0);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))
              ((long)puVar8 + (long)*(int *)(lVar20 + 0x4c),1,1,lVar11);
    *puVar2 = 0;
    lStack_98 = lStack_b8;
    local_a0 = local_c0;
    local_78 = uStack_a8;
    uStack_80 = local_b0;
    lVar20 = 0;
    local_90 = uVar22;
    local_88 = lVar7;
    uStack_70 = uVar23;
    FUN_1007cba3c(0,&local_a0);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))
              ((long)puVar2 + (long)*(int *)(lVar20 + 0x4c),1,1,lVar7);
    *(undefined8 *)((long)unaff_x20 + local_e0) = local_110;
    _swift_storeEnumTagMultiPayload();
    lVar7 = local_128;
    pcVar21 = *(code **)(*(long *)(local_128 + -8) + 8);
    _swift_retain(local_d0);
    puVar1 = local_108;
    (*pcVar21)((long)local_108 + local_120,lVar7);
    (**(code **)(*(long *)(local_138 + -8) + 8))((long)puVar1 + local_118);
    (**(code **)(*(long *)(local_130 + -8) + 8))(puVar1);
    return;
  }
  if (iVar6 < 3) {
    if (iVar6 == 1) {
      _swift_release(*local_108);
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      puVar3 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_d0,local_e0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar10 = local_f0;
      lVar7 = local_100;
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar13 = 0xff;
      local_90 = uVar22;
      local_88 = uVar12;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar10,lVar7,puVar4,puVar3);
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar10 = 0xff;
      local_90 = uVar22;
      local_88 = uVar12;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar23,uVar22,puVar4,puVar3);
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar16 = 0xff;
      local_90 = uVar22;
      local_88 = uVar12;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      lVar7 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar13,uVar10,uVar16,0,0);
      lVar20 = 0;
      _swift_getTupleTypeMetadata2(0,puVar17,lVar7,"task upstreams ",0);
    }
    else {
      _swift_release(*local_108);
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      puVar3 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
      uVar12 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_d0,local_e0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar10 = local_f0;
      lVar7 = local_100;
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar13 = 0xff;
      local_90 = uVar22;
      local_88 = uVar12;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      uVar16 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar10,lVar7,puVar4,puVar3);
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar10 = 0xff;
      local_90 = uVar22;
      local_88 = uVar16;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      uVar18 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar23,uVar22,puVar4,puVar3);
      lStack_98 = lStack_b8;
      local_a0 = local_c0;
      local_78 = uStack_a8;
      uStack_80 = local_b0;
      uVar19 = 0xff;
      local_90 = uVar22;
      local_88 = uVar18;
      uStack_70 = uVar23;
      FUN_1007cba3c(0xff,&local_a0);
      lVar7 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar13,uVar10,uVar19,0,0);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      _swift_getTupleTypeMetadata3(0xff,uVar12,uVar16,OVar5.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar20 = 0;
      _swift_getTupleTypeMetadata3
                (0,puVar17,lVar7,UVar15.unknown,"task upstreams downstreamContinuation ",0);
    }
    (**(code **)(*(long *)(lVar7 + -8) + 8))((long)puVar1 + (long)*(int *)(lVar20 + 0x30),lVar7);
  }
  else if (iVar6 != 3) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x1007cd148);
    (*pcVar21)();
  }
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x1007cd334);
  (*pcVar21)();
}



/* Address: 0x1007cd334 | FUN_1007cd334 */

undefined1  [16] FUN_1007cd334(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  Optional OVar13;
  int iVar14;
  long lVar15;
  undefined7 extraout_var;
  long lVar16;
  undefined7 extraout_var_00;
  long lVar17;
  undefined7 extraout_var_01;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  CancellationError CVar21;
  CancellationError CVar22;
  undefined *puVar23;
  UnsafeContinuation UVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *unaff_x20;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  long alStack_150 [2];
  code *local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar23 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar32 = *(undefined8 *)(param_3 + 0x38);
  uVar28 = *(undefined8 *)(param_3 + 0x20);
  lVar15 = 0xff;
  local_c0 = param_1;
  local_b0 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,uVar32,uVar28,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar13 = Swift::Optional::typeMetadataAccessor();
  local_d8 = CONCAT71(extraout_var,OVar13.value);
  local_120 = *(long *)(local_d8 + -8);
  lVar25 = (long)alStack_150 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar36 = *(undefined8 *)(param_3 + 0x30);
  uVar27 = *(undefined8 *)(param_3 + 0x18);
  lVar16 = 0xff;
  local_128 = lVar25;
  _swift_getAssociatedTypeWitness(0xff,uVar36,uVar27,puVar2,puVar23);
  OVar13 = Swift::Optional::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var_00,OVar13.value);
  local_e8 = *(long *)(local_e0 + -8);
  lVar25 = lVar25 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar35 = *(undefined8 *)(param_3 + 0x28);
  uVar33 = *(undefined8 *)(param_3 + 0x10);
  lVar17 = 0xff;
  local_f0 = lVar25;
  _swift_getAssociatedTypeWitness
            (0xff,uVar35,uVar33,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar23);
  OVar13 = Swift::Optional::typeMetadataAccessor();
  lStack_f8 = CONCAT71(extraout_var_01,OVar13.value);
  local_100 = *(long *)(lStack_f8 + -8);
  lVar25 = lVar25 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0xff;
  local_108 = lVar25;
  local_a0 = uVar33;
  uStack_98 = uVar27;
  local_90 = uVar28;
  lStack_88 = lVar17;
  local_80 = uVar35;
  uStack_78 = uVar36;
  local_70 = uVar32;
  FUN_1007cba3c(0xff,&local_a0);
  lVar19 = 0xff;
  local_c8 = lVar16;
  local_a0 = uVar33;
  uStack_98 = uVar27;
  local_90 = uVar28;
  lStack_88 = lVar16;
  local_80 = uVar35;
  uStack_78 = uVar36;
  local_70 = uVar32;
  FUN_1007cba3c(0xff,&local_a0);
  lVar16 = 0xff;
  local_130 = lVar15;
  local_a0 = uVar33;
  uStack_98 = uVar27;
  local_90 = uVar28;
  lStack_88 = lVar15;
  local_80 = uVar35;
  uStack_78 = uVar36;
  local_70 = uVar32;
  FUN_1007cba3c(0xff,&local_a0);
  lVar15 = 0;
  local_118 = lVar19;
  local_110 = lVar18;
  _swift_getTupleTypeMetadata3(0,lVar18,lVar19,lVar16,0,0);
  lVar19 = *(long *)(lVar15 + -8);
  uVar26 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = (undefined8 *)(lVar25 - uVar26);
  puVar30 = (undefined8 *)((long)local_d0 - uVar26);
  lVar18 = 0;
  local_b8 = lVar15;
  local_a0 = uVar33;
  uStack_98 = uVar27;
  local_90 = uVar28;
  lStack_88 = uVar35;
  local_80 = uVar36;
  uStack_78 = uVar32;
  FUN_1007c7be0(0,&local_a0);
  lVar15 = *(long *)(lVar18 + -8);
  puVar29 = (undefined8 *)((long)puVar30 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar15 + 0x10))(puVar29,unaff_x20,lVar18);
  puVar20 = puVar29;
  _swift_getEnumCaseMultiPayload(puVar29,lVar18);
  iVar14 = (int)puVar20;
  if (iVar14 < 2) {
    if (iVar14 != 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1007cdb1c);
      (*pcVar12)();
    }
    uVar27 = *puVar29;
    puVar23 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    lVar16 = local_b8;
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,puVar23,local_b8,"task upstreams ",0);
    pcVar34 = *(code **)(lVar19 + 0x20);
    (*pcVar34)(puVar30,(long)puVar29 + (long)*(int *)(lVar17 + 0x30),lVar16);
    pcVar12 = *(code **)(lVar15 + 8);
    (*pcVar12)(unaff_x20,lVar18);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar18,4);
    if (local_c0 == 0) {
      *puVar30 = local_b0;
    }
    else {
      if (local_c0 == 1) {
        iVar14 = *(int *)(lVar16 + 0x30);
      }
      else {
        if (local_c0 != 2) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1007cdb14);
          (*pcVar12)();
        }
        iVar14 = *(int *)(lVar16 + 0x40);
      }
      *(undefined8 *)((long)puVar30 + (long)iVar14) = local_b0;
    }
    (*pcVar12)(unaff_x20,lVar18);
    iVar14 = *(int *)(lVar17 + 0x30);
    *unaff_x20 = uVar27;
    (*pcVar34)((long)unaff_x20 + (long)iVar14,puVar30,lVar16);
    uVar27 = 1;
  }
  else {
    if (iVar14 != 2) {
      if (iVar14 != 3) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1007cdb18);
        (*pcVar12)();
      }
      CVar21 = Swift::CancellationError::typeMetadataAccessor();
      CVar22 = CVar21;
      FUN_10076915c();
      _swift_allocError(CVar21.unknown,CVar22.unknown,0,0);
      Swift::CancellationError::init();
      uVar26 = (ulong)CVar21.unknown | 0x8000000000000000;
      goto LAB_1007cdaec;
    }
    local_138 = *puVar29;
    puVar23 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    _swift_getTupleTypeMetadata3(0xff,lVar17,local_c8,local_d8,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    UVar24 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar11 = local_b8;
    lVar25 = 0;
    _swift_getTupleTypeMetadata3
              (0,puVar23,local_b8,UVar24.unknown,"task upstreams downstreamContinuation ",0);
    puVar20 = local_d0;
    alStack_150[1] = lVar25;
    lVar31 = *(long *)((long)puVar29 + (long)*(int *)(lVar25 + 0x40));
    pcVar12 = *(code **)(lVar19 + 0x20);
    (*pcVar12)(local_d0,(long)puVar29 + (long)*(int *)(lVar25 + 0x30),lVar11);
    lVar10 = local_d8;
    lVar9 = local_e0;
    lVar8 = local_e8;
    lVar7 = local_f0;
    lVar6 = lStack_f8;
    lVar5 = local_100;
    lVar4 = local_108;
    lVar3 = local_120;
    lVar25 = local_128;
    local_140 = pcVar12;
    if (local_c0 != 0) {
      if (local_c0 == 1) {
        puVar20 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x30));
        (**(code **)(local_e8 + 0x10))
                  (local_f0,(long)puVar20 + (long)*(int *)(local_118 + 0x4c),local_e0);
        lVar16 = lVar7;
        (**(code **)(*(long *)(local_c8 + -8) + 0x30))(lVar7,1);
        if ((int)lVar16 != 1) {
          (**(code **)(lVar8 + 8))(lVar7,lVar9);
          pcVar12 = *(code **)(lVar15 + 8);
          (*pcVar12)(unaff_x20,lVar18);
          _swift_storeEnumTagMultiPayload(unaff_x20,lVar18,4);
          *puVar20 = local_b0;
          (*pcVar12)(unaff_x20,lVar18);
          iVar14 = *(int *)(alStack_150[1] + 0x30);
          iVar1 = *(int *)(alStack_150[1] + 0x40);
          *unaff_x20 = local_138;
          puVar20 = local_d0;
LAB_1007cdac0:
          (*local_140)((long)unaff_x20 + (long)iVar14,puVar20,lVar11);
          *(long *)((long)unaff_x20 + (long)iVar1) = lVar31;
          goto LAB_1007cdad4;
        }
        _swift_release(local_138);
        (**(code **)(lVar8 + 8))(lVar7,lVar9);
        pcVar12 = *(code **)(lVar19 + 8);
        puVar20 = local_d0;
      }
      else {
        local_c8 = lVar19;
        if (local_c0 != 2) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1007cdb10);
          (*pcVar12)();
        }
        puVar29 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar11 + 0x40));
        (**(code **)(local_120 + 0x10))
                  (local_128,(long)puVar29 + (long)*(int *)(lVar16 + 0x4c),local_d8);
        lVar16 = lVar25;
        (**(code **)(*(long *)(local_130 + -8) + 0x30))(lVar25,1);
        if ((int)lVar16 != 1) {
          (**(code **)(lVar3 + 8))(lVar25,lVar10);
          pcVar12 = *(code **)(lVar15 + 8);
          (*pcVar12)(unaff_x20,lVar18);
          _swift_storeEnumTagMultiPayload(unaff_x20,lVar18,4);
          *puVar29 = local_b0;
          (*pcVar12)(unaff_x20,lVar18);
          iVar14 = *(int *)(alStack_150[1] + 0x30);
          iVar1 = *(int *)(alStack_150[1] + 0x40);
          *unaff_x20 = local_138;
          goto LAB_1007cdac0;
        }
        _swift_release(local_138);
        (**(code **)(lVar3 + 8))(lVar25,lVar10);
        pcVar12 = *(code **)(local_c8 + 8);
      }
LAB_1007cd908:
      (*pcVar12)(puVar20,lVar11);
      uVar26 = 0;
      goto LAB_1007cdaec;
    }
    local_c0 = lVar31;
    (**(code **)(local_100 + 0x10))
              (local_108,(long)puVar20 + (long)*(int *)(local_110 + 0x4c),lStack_f8);
    lVar16 = lVar4;
    (**(code **)(*(long *)(lVar17 + -8) + 0x30))(lVar4,1,lVar17);
    if ((int)lVar16 == 1) {
      _swift_release(local_138);
      (**(code **)(lVar5 + 8))(lVar4,lVar6);
      pcVar12 = *(code **)(lVar19 + 8);
      goto LAB_1007cd908;
    }
    (**(code **)(lVar5 + 8))(lVar4,lVar6);
    pcVar12 = *(code **)(lVar15 + 8);
    (*pcVar12)(unaff_x20,lVar18);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar18,4);
    *puVar20 = local_b0;
    (*pcVar12)(unaff_x20,lVar18);
    iVar14 = *(int *)(alStack_150[1] + 0x30);
    iVar1 = *(int *)(alStack_150[1] + 0x40);
    *unaff_x20 = local_138;
    (*local_140)((long)unaff_x20 + (long)iVar14,puVar20,lVar11);
    *(long *)((long)unaff_x20 + (long)iVar1) = local_c0;
LAB_1007cdad4:
    uVar27 = 2;
  }
  _swift_storeEnumTagMultiPayload(unaff_x20,lVar18,uVar27);
  uVar26 = 0xf000000000000007;
  local_b0 = 0xf00000000000000f;
LAB_1007cdaec:
  auVar37._8_8_ = uVar26;
  auVar37._0_8_ = local_b0;
  return auVar37;
}



/* Address: 0x1007cdb1c | FUN_1007cdb1c */

void FUN_1007cdb1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  Optional OVar4;
  Result RVar5;
  int iVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined7 extraout_var_02;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *unaff_x20;
  code *pcVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 auStack_2c0 [2];
  undefined *local_2b0 [3];
  long local_298;
  code *local_290;
  long local_288;
  long local_280;
  code *local_278;
  undefined8 local_270;
  undefined8 local_268;
  code *local_260;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  code *local_198;
  long local_190;
  long local_188;
  code *local_180;
  long local_178;
  long local_170;
  long local_168;
  code *local_160;
  undefined8 *local_158;
  code *local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  long local_e0;
  code *local_d8;
  long local_d0;
  long local_c8;
  code *local_c0;
  long local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar10 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar23 = *(undefined8 *)(param_5 + 0x38);
  uVar28 = *(undefined8 *)(param_5 + 0x20);
  lVar7 = 0xff;
  local_158 = param_1;
  local_148 = param_3;
  local_120 = (code *)param_4;
  local_e8 = (code *)param_2;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,uVar28,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_b8 = lVar7;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_c0 = (code *)CONCAT71(extraout_var,OVar4.value);
  local_100 = *(long *)(local_c0 + -8);
  uVar15 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b8 = (long)local_2b0 - uVar15;
  local_248 = local_1b8 - uVar15;
  local_230 = local_248 - uVar15;
  local_1a0 = *(long *)(lVar7 + -8);
  uVar15 = *(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_250 = local_230 - uVar15;
  lVar16 = local_250 - uVar15;
  uVar30 = *(undefined8 *)(param_5 + 0x30);
  uVar31 = *(undefined8 *)(param_5 + 0x18);
  lVar7 = 0;
  local_208 = lVar16;
  _swift_getAssociatedTypeWitness(0,uVar30,uVar31,puVar3,puVar10);
  local_168 = *(long *)(lVar7 + -8);
  uVar15 = *(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_228 = lVar16 - uVar15;
  local_220 = local_228 - uVar15;
  lVar17 = local_220 - uVar15;
  local_210 = lVar17;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar16 = CONCAT71(extraout_var_00,OVar4.value);
  local_f0 = *(code **)(lVar16 + -8);
  uVar15 = *(long *)((long)local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1d8 = lVar17 - uVar15;
  local_1c0 = local_1d8 - uVar15;
  local_218 = local_1c0 - uVar15;
  local_238 = local_218 - uVar15;
  lVar18 = local_238 - uVar15;
  uVar33 = *(undefined8 *)(param_5 + 0x28);
  uVar34 = *(undefined8 *)(param_5 + 0x10);
  lVar17 = 0;
  local_258 = param_5;
  local_240 = lVar18;
  _swift_getAssociatedTypeWitness(0,uVar33,uVar34,puVar3,puVar10);
  local_f8 = *(long *)(lVar17 + -8);
  uVar15 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1e8 = lVar18 - uVar15;
  local_1e0 = local_1e8 - uVar15;
  lVar19 = local_1e0 - uVar15;
  local_1f8 = lVar19;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar18 = CONCAT71(extraout_var_01,OVar4.value);
  local_d8 = *(code **)(lVar18 + -8);
  uVar15 = *(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_190 = lVar19 - uVar15;
  local_1c8 = local_190 - uVar15;
  local_1b0 = local_1c8 - uVar15;
  local_200 = local_1b0 - uVar15;
  lVar20 = local_200 - uVar15;
  lVar19 = 0xff;
  local_1f0 = lVar20;
  local_c8 = lVar17;
  local_a0 = uVar34;
  uStack_98 = uVar31;
  local_90 = uVar28;
  lStack_88 = lVar17;
  local_80 = uVar33;
  uStack_78 = uVar30;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  lVar17 = 0xff;
  local_e0 = lVar7;
  local_a0 = uVar34;
  uStack_98 = uVar31;
  local_90 = uVar28;
  lStack_88 = lVar7;
  local_80 = uVar33;
  uStack_78 = uVar30;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  lStack_88 = local_b8;
  lVar7 = 0xff;
  local_a0 = uVar34;
  uStack_98 = uVar31;
  local_90 = uVar28;
  local_80 = uVar33;
  uStack_78 = uVar30;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  lVar8 = 0;
  local_1a8 = lVar7;
  local_188 = lVar19;
  local_178 = lVar17;
  _swift_getTupleTypeMetadata3(0,lVar19,lVar17,lVar7,0,0);
  lVar26 = *(long *)(lVar8 + -8);
  puVar21 = (undefined8 *)(lVar20 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar17 = 0;
  local_140 = uVar34;
  local_138 = uVar33;
  local_130 = uVar30;
  local_128 = puVar21;
  local_118 = uVar31;
  local_110 = uVar28;
  local_108 = uVar23;
  local_a0 = uVar34;
  uStack_98 = uVar31;
  local_90 = uVar28;
  lStack_88 = uVar33;
  local_80 = uVar30;
  uStack_78 = uVar23;
  FUN_1007c7be0(0,&local_a0);
  pcVar24 = local_c0;
  lVar35 = *(long *)(lVar17 + -8);
  puVar21 = (undefined8 *)((long)puVar21 - (*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar19 = 0;
  _swift_getTupleTypeMetadata3(0,lVar18,lVar16,local_c0,0,0);
  pcVar32 = local_e8;
  local_150 = *(code **)(lVar19 + -8);
  uVar15 = *(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_160 = (code *)((long)puVar21 - uVar15);
  lVar20 = (long)local_160 - uVar15;
  local_e8 = *(code **)(local_d8 + 0x10);
  local_170 = lVar18;
  (*local_e8)(lVar20,pcVar32,lVar18);
  local_198 = (code *)(lVar20 + *(int *)(lVar19 + 0x30));
  pcVar22 = *(code **)((long)local_f0 + 0x10);
  (*pcVar22)(local_198,local_148,lVar16);
  pcVar32 = local_120;
  lVar7 = lVar20 + *(int *)(lVar19 + 0x40);
  local_120 = *(code **)(local_100 + 0x10);
  (*local_120)(lVar7,pcVar32,pcVar24);
  (**(code **)(lVar35 + 0x10))(puVar21,unaff_x20,lVar17);
  puVar9 = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar17);
  puVar14 = local_158;
  iVar6 = (int)puVar9;
  if (2 < iVar6) {
    if (iVar6 == 3) {
      (**(code **)(local_150 + 8))(lVar20,lVar19);
      local_a0 = local_140;
      uStack_98 = local_118;
      local_90 = local_110;
      lStack_88 = local_138;
      local_80 = local_130;
      uStack_78 = local_108;
      lVar7 = 0;
      FUN_1007d10b4(0,&local_a0);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar14,1,1,lVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf334);
    (*pcVar32)();
  }
  local_180 = pcVar22;
  local_148 = lVar17;
  local_1d0 = lVar26;
  local_d0 = lVar8;
  if (iVar6 != 2) {
    if (iVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf32c);
      (*pcVar32)();
    }
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf330);
    (*pcVar32)();
  }
  local_270 = *puVar21;
  puVar10 = &DAT_100fe2d00;
  FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
  pcVar22 = local_c0;
  lVar8 = local_e0;
  lVar17 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,local_c8,local_e0,local_c0,0,0);
  local_298 = lVar17;
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_2b0[2] = (undefined *)CONCAT71(extraout_var_02,RVar5.value);
  local_2b0[1] = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar17 = local_d0;
  lVar18 = 0;
  local_2b0[0] = puVar10;
  _swift_getTupleTypeMetadata3
            (0,puVar10,local_d0,local_2b0[1],"task upstreams downstreamContinuation ",0);
  local_288 = lVar18;
  local_268 = *(undefined8 *)((long)puVar21 + (long)*(int *)(lVar18 + 0x40));
  (**(code **)(local_1d0 + 0x20))(local_128,(long)puVar21 + (long)*(int *)(lVar18 + 0x30),lVar17);
  lVar17 = local_148;
  local_278 = *(code **)(lVar35 + 8);
  (*local_278)(unaff_x20,local_148);
  _swift_storeEnumTagMultiPayload(unaff_x20,lVar17,4);
  pcVar24 = local_e8;
  pcVar32 = local_160;
  lVar17 = local_170;
  lVar26 = (long)*(int *)(lVar19 + 0x30);
  iVar6 = *(int *)(lVar19 + 0x40);
  (*local_e8)(local_160,lVar20,local_170);
  (*local_180)(pcVar32 + lVar26,local_198,lVar16);
  (*local_120)(pcVar32 + iVar6,lVar7,pcVar22);
  lVar18 = local_f8;
  local_198 = *(code **)(local_f8 + 0x30);
  pcVar11 = pcVar32;
  (*local_198)(pcVar32,1,local_c8);
  lVar7 = local_1f0;
  local_280 = lVar26;
  if ((int)pcVar11 != 1) {
    (*pcVar24)(local_1f0,pcVar32,lVar17);
    local_260 = *(code **)(local_168 + 0x30);
    pcVar22 = pcVar32 + lVar26;
    (*local_260)(pcVar22,1,lVar8);
    if ((int)pcVar22 == 1) {
      local_290 = *(code **)(local_1a0 + 0x30);
      pcVar32 = pcVar32 + iVar6;
      (*local_290)(pcVar32,1,local_b8);
      lVar8 = local_1f8;
      if ((int)pcVar32 == 1) {
        (**(code **)(local_150 + 8))(lVar20,lVar19);
        lVar19 = local_c8;
        pcVar32 = *(code **)(lVar18 + 0x20);
        (*pcVar32)(lVar8,lVar7,local_c8);
        puVar14 = local_128;
        lVar7 = local_200;
        lVar35 = (long)*(int *)(local_188 + 0x4c);
        (*pcVar24)(local_200,(long)local_128 + lVar35,lVar17);
        lVar26 = lVar7;
        (*local_198)(lVar7,1,lVar19);
        pcVar24 = *(code **)(local_d8 + 8);
        (*pcVar24)(lVar7,lVar17);
        if ((int)lVar26 != 1) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf31c);
          (*pcVar32)();
        }
        (*pcVar24)((long)puVar14 + lVar35,lVar17);
        (*pcVar32)((long)puVar14 + lVar35,lVar8,lVar19);
        (**(code **)(lVar18 + 0x38))((long)puVar14 + lVar35,0,1,lVar19);
        lVar18 = local_d0;
        lVar7 = local_190;
        goto LAB_1007ce708;
      }
    }
LAB_1007cf350:
    (**(code **)(local_f8 + 8))(local_1f0,local_c8);
LAB_1007cf368:
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf36c);
    (*pcVar32)();
  }
  local_260 = *(code **)(local_168 + 0x30);
  pcVar24 = pcVar32 + lVar26;
  (*local_260)(pcVar24,1,lVar8);
  lVar18 = local_b8;
  pcVar11 = local_180;
  lVar17 = local_1a0;
  lVar7 = local_240;
  if ((int)pcVar24 == 1) {
    pcVar27 = *(code **)(local_1a0 + 0x30);
    pcVar24 = pcVar32 + iVar6;
    (*pcVar27)(pcVar24,1,local_b8);
    lVar7 = local_d0;
    pcVar11 = local_f0;
    if ((int)pcVar24 == 1) goto LAB_1007cf368;
    (**(code **)(local_150 + 8))(lVar20,lVar19);
    local_150 = *(code **)(lVar17 + 0x20);
    (*local_150)(local_208,pcVar32 + iVar6,lVar18);
    puVar14 = local_128;
    lVar19 = local_230;
    lVar7 = (long)*(int *)(lVar7 + 0x40) + (long)*(int *)(local_1a8 + 0x4c);
    (*local_120)(local_230,(long)local_128 + lVar7,pcVar22);
    lVar8 = lVar19;
    local_290 = pcVar27;
    (*pcVar27)(lVar19,1,lVar18);
    pcVar32 = *(code **)(local_100 + 8);
    (*pcVar32)(lVar19,pcVar22);
    if ((int)lVar8 != 1) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf320);
      (*pcVar32)();
    }
    (*pcVar32)((long)puVar14 + lVar7,pcVar22);
    (*local_150)((long)puVar14 + lVar7,local_208,lVar18);
    (**(code **)(lVar17 + 0x38))((long)puVar14 + lVar7,0,1,lVar18);
    lVar18 = local_d0;
    lVar7 = local_190;
    lVar19 = local_c8;
    local_f0 = pcVar11;
    lVar17 = local_170;
  }
  else {
    (*local_180)(local_240,pcVar32 + lVar26,lVar16);
    local_290 = *(code **)(lVar17 + 0x30);
    pcVar32 = pcVar32 + iVar6;
    (*local_290)(pcVar32,1,local_b8);
    lVar18 = local_d0;
    pcVar24 = local_f0;
    lVar17 = local_170;
    if ((int)pcVar32 != 1) {
      local_f8 = local_168;
      local_c8 = local_e0;
      local_1f0 = lVar7;
      goto LAB_1007cf350;
    }
    (**(code **)(local_150 + 8))(lVar20,lVar19);
    lVar8 = local_e0;
    local_150 = *(code **)(local_168 + 0x20);
    (*local_150)(local_210,lVar7,local_e0);
    puVar14 = local_128;
    lVar7 = local_238;
    lVar19 = (long)*(int *)(lVar18 + 0x30) + (long)*(int *)(local_178 + 0x4c);
    (*pcVar11)(local_238,(long)local_128 + lVar19,lVar16);
    lVar26 = lVar7;
    (*local_260)(lVar7,1,lVar8);
    pcVar32 = *(code **)((long)pcVar24 + 8);
    (*pcVar32)(lVar7,lVar16);
    lVar7 = local_190;
    if ((int)lVar26 != 1) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1007cf324);
      (*pcVar32)();
    }
    (*pcVar32)((long)puVar14 + lVar19,lVar16);
    (*local_150)((long)puVar14 + lVar19,local_210,lVar8);
    (**(code **)(local_168 + 0x38))((long)puVar14 + lVar19,0,1,lVar8);
    lVar19 = local_c8;
    local_f0 = pcVar24;
  }
LAB_1007ce708:
  pcVar24 = local_e8;
  pcVar32 = local_160;
  local_f0 = *(code **)((long)local_f0 + 8);
  (*local_f0)(local_160 + local_280,lVar16);
  pcVar22 = *(code **)(local_d8 + 8);
  (*pcVar22)(pcVar32,lVar17);
  lVar26 = local_1b0;
  lVar29 = (long)*(int *)(local_188 + 0x4c);
  (*pcVar24)(local_1b0,(long)puVar14 + lVar29,lVar17);
  lVar12 = lVar26;
  (*local_198)(lVar26,1,lVar19);
  lVar35 = local_f8;
  lVar8 = local_1e0;
  if ((int)lVar12 == 1) {
    (*pcVar22)(lVar26,lVar17);
LAB_1007ce92c:
    (*pcVar24)(lVar7,(long)puVar14 + lVar29,lVar17);
    lVar12 = lVar7;
    (*local_198)(lVar7,1,lVar19);
    lVar35 = local_f8;
    lVar26 = local_1d8;
    lVar8 = local_1e8;
    if ((int)lVar12 == 1) {
      (*pcVar22)(lVar7,lVar17);
    }
    else {
      pcVar32 = *(code **)(local_f8 + 0x20);
      (*pcVar32)(local_1e8,lVar7,lVar19);
      local_d8 = (code *)((long)puVar14 + (long)*(int *)(lVar18 + 0x30));
      (*local_180)(lVar26,local_d8 + *(int *)(local_178 + 0x4c),lVar16);
      lVar18 = local_e0;
      lVar12 = lVar26;
      (*local_260)(lVar26,1,local_e0);
      lVar17 = local_168;
      lVar7 = local_228;
      if ((int)lVar12 == 1) {
        (**(code **)(lVar35 + 8))(lVar8,lVar19);
        (*local_f0)(lVar26,lVar16);
        lVar18 = local_d0;
        lVar17 = local_170;
      }
      else {
        pcVar24 = *(code **)(local_168 + 0x20);
        local_f0 = pcVar32;
        (*pcVar24)(local_228,lVar26,lVar18);
        if (*(long *)((long)unaff_x20 + (long)*(int *)(local_258 + 0x44)) == 2) {
          (*local_278)(unaff_x20,local_148);
          lVar19 = local_d0;
          lVar7 = 0;
          _swift_getTupleTypeMetadata2(0,local_2b0[0],local_d0,"task upstreams ",0);
          lVar8 = local_c8;
          lVar16 = local_1c8;
          lVar7 = (long)unaff_x20 + (long)*(int *)(lVar7 + 0x30);
          *unaff_x20 = local_270;
          local_e8 = (code *)(long)*(int *)(lVar19 + 0x30);
          local_c0 = (code *)(long)*(int *)(lVar19 + 0x40);
          uVar23 = *puVar14;
          (**(code **)(local_f8 + 0x38))(local_1c8,1,1,local_c8);
          *(undefined8 *)(lVar20 + -0x10) = local_108;
          uVar30 = local_130;
          uVar28 = local_138;
          FUN_1007cc338(lVar7,uVar23,lVar16,local_140,local_118,local_110,lVar8,local_138,local_130)
          ;
          lVar16 = local_1c0;
          uVar25 = *(undefined8 *)local_d8;
          (**(code **)(lVar17 + 0x38))(local_1c0,1,1,lVar18);
          uVar34 = local_108;
          *(undefined8 *)(lVar20 + -0x10) = local_108;
          uVar33 = local_110;
          uVar31 = local_118;
          uVar23 = local_140;
          FUN_1007cc338(local_e8 + lVar7,uVar25,lVar16,local_140,local_118,local_110,lVar18,uVar28,
                        uVar30);
          lVar17 = local_b8;
          lVar16 = local_1b8;
          uVar25 = *(undefined8 *)((long)puVar14 + (long)*(int *)(local_d0 + 0x40));
          local_d8 = *(code **)(local_1a0 + 0x38);
          (*local_d8)(local_1b8,1,1,local_b8);
          *(undefined8 *)(lVar20 + -0x10) = uVar34;
          FUN_1007cc338(local_c0 + lVar7,uVar25,lVar16,uVar23,uVar31,uVar33,lVar17,uVar28,uVar30);
          _swift_storeEnumTagMultiPayload(unaff_x20,local_148,1);
          puVar10 = local_2b0[2];
          lVar7 = 0;
          _swift_getTupleTypeMetadata2
                    (0,local_2b0[1],local_2b0[2],"downstreamContinuation result ",0);
          puVar14 = local_158;
          lVar16 = local_298;
          lVar7 = (long)local_158 + (long)*(int *)(lVar7 + 0x30);
          *local_158 = local_268;
          iVar6 = *(int *)(local_298 + 0x30);
          iVar2 = *(int *)(local_298 + 0x40);
          (*local_f0)(lVar7,local_1e8,local_c8);
          (*pcVar24)(lVar7 + iVar6,local_228,local_e0);
          (*local_d8)(lVar7 + iVar2,1,1,lVar17);
          (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar7,0,1,lVar16);
          _swift_storeEnumTagMultiPayload(lVar7,puVar10,0);
          local_a0 = uVar23;
          uStack_98 = local_118;
          local_90 = local_110;
          lStack_88 = uVar28;
          local_80 = uVar30;
          uStack_78 = local_108;
          lVar7 = 0;
          FUN_1007d10b4(0,&local_a0);
          pcVar32 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
          goto LAB_1007cf088;
        }
        (**(code **)(lVar17 + 8))(lVar7,lVar18);
        lVar19 = local_c8;
        (**(code **)(local_f8 + 8))(lVar8,local_c8);
        lVar18 = local_d0;
        lVar17 = local_170;
      }
    }
    lVar26 = local_1c0;
    lVar8 = local_1c8;
    uVar23 = local_270;
    (*local_278)(unaff_x20,local_148);
    lVar7 = (long)unaff_x20 + (long)*(int *)(local_288 + 0x30);
    local_d8 = (code *)(long)*(int *)(local_288 + 0x40);
    *unaff_x20 = uVar23;
    local_f8 = (long)*(int *)(lVar18 + 0x30);
    local_f0 = (code *)(long)*(int *)(lVar18 + 0x40);
    uVar25 = *puVar14;
    (*local_e8)(lVar8,(long)puVar14 + lVar29,lVar17);
    uVar34 = local_108;
    *(undefined8 *)(lVar20 + -0x10) = local_108;
    uVar33 = local_110;
    uVar31 = local_118;
    uVar30 = local_130;
    uVar28 = local_138;
    uVar23 = local_140;
    local_100 = lVar7;
    FUN_1007cc338(lVar7,uVar25,lVar8,local_140,local_118,local_110,lVar19,local_138,local_130);
    plVar1 = (long *)((long)puVar14 + (long)*(int *)(lVar18 + 0x30));
    local_c8 = *plVar1;
    (*local_180)(lVar26,(long)plVar1 + (long)*(int *)(local_178 + 0x4c),lVar16);
    *(undefined8 *)(lVar20 + -0x10) = uVar34;
    FUN_1007cc338(lVar7 + local_f8,local_c8,lVar26,uVar23,uVar31,uVar33,local_e0,uVar28,uVar30);
    lVar7 = local_1b8;
    puVar9 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar18 + 0x40));
    uVar25 = *puVar9;
    (*local_120)(local_1b8,(long)puVar9 + (long)*(int *)(local_1a8 + 0x4c),local_c0);
    *(undefined8 *)(lVar20 + -0x10) = uVar34;
    FUN_1007cc338(local_f0 + local_100,uVar25,lVar7,uVar23,uVar31,uVar33,local_b8,uVar28,uVar30);
    *(undefined8 *)((long)unaff_x20 + (long)local_d8) = local_268;
    _swift_storeEnumTagMultiPayload(unaff_x20,local_148,2);
    local_a0 = uVar23;
    uStack_98 = uVar31;
    local_90 = uVar33;
    lStack_88 = uVar28;
    local_80 = uVar30;
    uStack_78 = uVar34;
    lVar7 = 0;
    FUN_1007d10b4(0,&local_a0);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_158,1,1,lVar7);
    pcVar32 = *(code **)(local_1d0 + 8);
  }
  else {
    local_d8 = *(code **)(local_f8 + 0x20);
    (*local_d8)(local_1e0,lVar26,lVar19);
    lVar26 = local_218;
    local_150 = (code *)((long)puVar14 + (long)*(int *)(lVar18 + 0x30));
    (*local_180)(local_218,local_150 + *(int *)(local_178 + 0x4c),lVar16);
    lVar12 = local_e0;
    lVar13 = lVar26;
    (*local_260)(lVar26,1,local_e0);
    lVar18 = local_168;
    lVar7 = local_220;
    if ((int)lVar13 == 1) {
      (**(code **)(lVar35 + 8))(lVar8,lVar19);
      (*local_f0)(lVar26,lVar16);
      pcVar24 = local_e8;
      lVar18 = local_d0;
      lVar7 = local_190;
      goto LAB_1007ce92c;
    }
    local_160 = *(code **)(local_168 + 0x20);
    (*local_160)(local_220,lVar26,lVar12);
    lVar19 = local_b8;
    pcVar24 = local_c0;
    lVar17 = local_248;
    pcVar32 = (code *)((long)puVar14 + (long)*(int *)(local_d0 + 0x40));
    (*local_120)(local_248,pcVar32 + *(int *)(local_1a8 + 0x4c),local_c0);
    lVar8 = lVar17;
    (*local_290)(lVar17,1,lVar19);
    if ((int)lVar8 == 1) {
      (**(code **)(lVar18 + 8))(lVar7,lVar12);
      lVar19 = local_c8;
      (**(code **)(local_f8 + 8))(local_1e0,local_c8);
      (**(code **)(local_100 + 8))(lVar17,pcVar24);
      pcVar24 = local_e8;
      lVar18 = local_d0;
      lVar7 = local_190;
      lVar17 = local_170;
      goto LAB_1007ce92c;
    }
    pcVar24 = *(code **)(local_1a0 + 0x20);
    (*pcVar24)(local_250,lVar17,lVar19);
    (*local_278)(unaff_x20,local_148);
    lVar17 = local_d0;
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,local_2b0[0],local_d0,"task upstreams ",0);
    lVar8 = local_c8;
    lVar16 = local_1c8;
    lVar7 = (long)unaff_x20 + (long)*(int *)(lVar7 + 0x30);
    *unaff_x20 = local_270;
    local_c0 = (code *)(long)*(int *)(lVar17 + 0x30);
    local_e8 = (code *)(long)*(int *)(lVar17 + 0x40);
    uVar28 = *puVar14;
    (**(code **)(local_f8 + 0x38))(local_1c8,1,1,local_c8);
    uVar34 = local_108;
    *(undefined8 *)(lVar20 + -0x10) = local_108;
    uVar33 = local_110;
    uVar31 = local_118;
    uVar23 = local_140;
    local_f0 = pcVar32;
    FUN_1007cc338(lVar7,uVar28,lVar16,local_140,local_118,local_110,lVar8,local_138,local_130);
    lVar16 = local_1c0;
    uVar25 = *(undefined8 *)local_150;
    (**(code **)(lVar18 + 0x38))(local_1c0,1,1,lVar12);
    *(undefined8 *)(lVar20 + -0x10) = uVar34;
    uVar30 = local_130;
    uVar28 = local_138;
    FUN_1007cc338(lVar7 + (long)local_c0,uVar25,lVar16,uVar23,uVar31,uVar33,lVar12,local_138,
                  local_130);
    lVar16 = local_1b8;
    uVar25 = *(undefined8 *)local_f0;
    local_c0 = *(code **)(local_1a0 + 0x38);
    (*local_c0)(local_1b8,1,1,lVar19);
    *(undefined8 *)(lVar20 + -0x10) = uVar34;
    FUN_1007cc338(local_e8 + lVar7,uVar25,lVar16,uVar23,uVar31,uVar33,lVar19,uVar28,uVar30);
    _swift_storeEnumTagMultiPayload(unaff_x20,local_148,1);
    puVar10 = local_2b0[2];
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,local_2b0[1],local_2b0[2],"downstreamContinuation result ",0);
    puVar14 = local_158;
    lVar16 = local_298;
    lVar7 = (long)local_158 + (long)*(int *)(lVar7 + 0x30);
    *local_158 = local_268;
    iVar6 = *(int *)(local_298 + 0x30);
    iVar2 = *(int *)(local_298 + 0x40);
    (*local_d8)(lVar7,local_1e0,local_c8);
    (*local_160)(lVar7 + iVar6,local_220,local_e0);
    (*pcVar24)(lVar7 + iVar2,local_250,lVar19);
    (*local_c0)(lVar7 + iVar2,0,1,lVar19);
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar7,0,1,lVar16);
    _swift_storeEnumTagMultiPayload(lVar7,puVar10,0);
    local_a0 = uVar23;
    uStack_98 = local_118;
    local_90 = local_110;
    lStack_88 = uVar28;
    local_80 = uVar30;
    uStack_78 = local_108;
    lVar7 = 0;
    FUN_1007d10b4(0,&local_a0);
    pcVar32 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
LAB_1007cf088:
    (*pcVar32)(puVar14,0,1,lVar7);
    pcVar32 = *(code **)(local_1d0 + 8);
    puVar14 = local_128;
  }
  (*pcVar32)(puVar14,local_d0);
  return;
}



/* Address: 0x1007cf36c | FUN_1007cf36c */

undefined8 FUN_1007cf36c(long param_1)

{
  long lVar1;
  Optional OVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  UnsafeContinuation UVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 unaff_x20;
  undefined8 uVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long local_130 [4];
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar16 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  local_d0 = *(undefined8 *)(param_1 + 0x10);
  uVar27 = *(undefined8 *)(param_1 + 0x30);
  uVar26 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = 0xff;
  local_a0 = local_d0;
  uStack_98 = uStack_c8;
  _swift_getAssociatedTypeWitness
            (0xff,uVar26,local_d0,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  local_c0 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = 0xff;
  local_108 = uVar4;
  local_e0 = uVar7;
  local_90 = uVar20;
  local_88 = uVar4;
  uStack_80 = uVar26;
  uStack_78 = uVar27;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_c0,uVar7,puVar14,puVar16);
  local_a0 = local_d0;
  local_90 = uStack_d8;
  uStack_98 = local_e0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  lVar6 = 0xff;
  local_88 = uVar4;
  uStack_80 = uVar26;
  FUN_1007cba3c(0xff,&local_a0);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar23,uVar20,puVar14,puVar16);
  lVar10 = local_c0;
  uStack_c8 = local_e0;
  uStack_98 = local_e0;
  local_a0 = local_d0;
  uStack_78 = local_c0;
  lVar8 = 0xff;
  local_90 = uVar20;
  local_88 = uVar7;
  uStack_80 = uVar26;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  lVar9 = 0;
  local_100 = lVar8;
  local_f8 = lVar5;
  local_f0 = lVar6;
  _swift_getTupleTypeMetadata3(0,lVar5,lVar6,lVar8,0,0);
  local_c0 = *(long *)(lVar9 + -8);
  uVar17 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)local_130 - uVar17;
  lVar8 = lVar5 - uVar17;
  plVar18 = (long *)(lVar8 - uVar17);
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_80 = lVar10;
  lVar10 = 0;
  local_e8 = lVar9;
  local_e0 = (long)plVar18 - uVar17;
  local_90 = uVar20;
  local_88 = uVar26;
  uStack_78 = uVar23;
  FUN_1007c7be0(0,&local_a0);
  lVar6 = *(long *)(lVar10 + -8);
  puVar24 = (undefined8 *)
            (((long)plVar18 - uVar17) - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar6 + 0x10))(puVar24);
  puVar11 = puVar24;
  _swift_getEnumCaseMultiPayload(puVar24,lVar10);
  iVar3 = (int)puVar11;
  if (iVar3 < 3) {
    if (iVar3 != 2) {
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1007cf98c);
        (*pcVar21)();
      }
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1007cf988);
      (*pcVar21)();
    }
    local_d0 = *puVar24;
    puVar16 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    _swift_getTupleTypeMetadata3(0xff,local_108,uVar4,OVar2.value,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    UVar12 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar1 = local_e8;
    lVar13 = 0;
    _swift_getTupleTypeMetadata3
              (0,puVar16,local_e8,UVar12.unknown,"task upstreams downstreamContinuation ",0);
    lVar9 = local_c0;
    lVar19 = local_e0;
    local_108 = *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar13 + 0x40));
    (**(code **)(local_c0 + 0x20))(local_e0,(long)puVar24 + (long)*(int *)(lVar13 + 0x30),lVar1);
    (**(code **)(lVar6 + 8))(unaff_x20,lVar10);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,3);
    pcVar22 = *(code **)(lVar9 + 0x10);
    (*pcVar22)(plVar18,lVar19,lVar1);
    lVar6 = local_f8;
    local_130[3] = (long)*(int *)(lVar1 + 0x30);
    local_130[2] = (long)*(int *)(lVar1 + 0x40);
    local_130[1] = *plVar18;
    pcVar25 = *(code **)(*(long *)(local_f8 + -8) + 8);
    (*pcVar25)(plVar18,local_f8);
    (*pcVar22)(lVar8,lVar19,lVar1);
    lVar9 = local_f0;
    local_130[0] = (long)*(int *)(lVar1 + 0x40);
    local_110 = *(long *)(lVar8 + *(int *)(lVar1 + 0x30));
    pcVar21 = *(code **)(*(long *)(local_f0 + -8) + 8);
    (*pcVar21)(lVar8 + *(int *)(lVar1 + 0x30),local_f0);
    (*pcVar22)(lVar5,lVar19,lVar1);
    lVar10 = local_100;
    iVar3 = *(int *)(lVar1 + 0x30);
    lVar19 = *(long *)(lVar5 + *(int *)(lVar1 + 0x40));
    pcVar22 = *(code **)(*(long *)(local_100 + -8) + 8);
    (*pcVar22)(lVar5 + *(int *)(lVar1 + 0x40),local_100);
    (*pcVar21)(lVar5 + iVar3,lVar9);
    (*pcVar25)(lVar5,lVar6);
    (*pcVar22)(lVar8 + local_130[0],lVar10);
    lVar5 = local_130[1];
    (*pcVar25)(lVar8,lVar6);
    (*pcVar22)((long)plVar18 + local_130[2],lVar10);
    (*pcVar21)((long)plVar18 + local_130[3],lVar9);
    puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar10 = local_110;
    uVar4 = local_108;
    if (lVar5 != 0) {
      puVar14 = (undefined *)0x0;
      FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      uVar17 = *(ulong *)(puVar14 + 0x10);
      puVar16 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar17) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_1007b784c(puVar16,uVar17 + 1,1,puVar14);
      }
      *(ulong *)(puVar16 + 0x10) = uVar17 + 1;
      *(long *)(puVar16 + uVar17 * 8 + 0x20) = lVar5;
      lVar10 = local_110;
      uVar4 = local_108;
    }
    local_110 = lVar10;
    local_108 = uVar4;
    if (lVar10 != 0) {
      puVar14 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar15 = puVar16;
      if (((ulong)puVar14 & 1) == 0) {
        puVar15 = (undefined *)0x0;
        FUN_1007b784c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
      }
      uVar17 = *(ulong *)(puVar15 + 0x10);
      puVar16 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar17) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
        FUN_1007b784c(puVar16,uVar17 + 1,1,puVar15);
      }
      *(ulong *)(puVar16 + 0x10) = uVar17 + 1;
      *(long *)(puVar16 + uVar17 * 8 + 0x20) = lVar10;
    }
    if (lVar19 != 0) {
      puVar14 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar15 = puVar16;
      if (((ulong)puVar14 & 1) == 0) {
        puVar15 = (undefined *)0x0;
        FUN_1007b784c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
      }
      uVar17 = *(ulong *)(puVar15 + 0x10);
      puVar16 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar17) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
        FUN_1007b784c(puVar16,uVar17 + 1,1,puVar15);
      }
      *(ulong *)(puVar16 + 0x10) = uVar17 + 1;
      *(long *)(puVar16 + uVar17 * 8 + 0x20) = lVar19;
    }
    (**(code **)(local_c0 + 8))(local_e0,local_e8);
  }
  else {
    uVar4 = 0;
    if (iVar3 != 3) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1007cf838);
      (*pcVar21)();
    }
  }
  return uVar4;
}



/* Address: 0x1007cf98c | FUN_1007cf98c */

undefined8 FUN_1007cf98c(undefined8 param_1,long param_2)

{
  long lVar1;
  Optional OVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  UnsafeContinuation UVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined8 unaff_x20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  code *pcVar25;
  code *pcVar26;
  undefined8 uVar27;
  long alStack_140 [4];
  long local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar15 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar17 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uStack_c8 = *(undefined8 *)(param_2 + 0x18);
  local_d0 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar27 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = 0xff;
  local_f0 = param_1;
  local_a0 = local_d0;
  uStack_98 = uStack_c8;
  _swift_getAssociatedTypeWitness
            (0xff,uVar27,local_d0,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  uStack_d8 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar23 = *(undefined8 *)(param_2 + 0x38);
  uStack_b8 = *(undefined8 *)(param_2 + 0x38);
  local_c0 = *(undefined8 *)(param_2 + 0x30);
  lVar5 = 0xff;
  local_e0 = uVar8;
  local_90 = uVar21;
  local_88 = uVar4;
  uStack_80 = uVar27;
  uStack_78 = uVar6;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_c0,uVar8,puVar15,puVar17);
  local_a0 = local_d0;
  local_90 = uStack_d8;
  uStack_98 = local_e0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  lVar7 = 0xff;
  local_88 = uVar6;
  uStack_80 = uVar27;
  FUN_1007cba3c(0xff,&local_a0);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar23,uVar21,puVar15,puVar17);
  lVar11 = local_c0;
  uStack_c8 = local_e0;
  uStack_98 = local_e0;
  local_a0 = local_d0;
  uStack_78 = local_c0;
  lVar9 = 0xff;
  local_90 = uVar21;
  local_88 = uVar8;
  uStack_80 = uVar27;
  local_70 = uVar23;
  FUN_1007cba3c(0xff,&local_a0);
  lVar10 = 0;
  local_108 = lVar9;
  local_100 = lVar5;
  local_f8 = lVar7;
  _swift_getTupleTypeMetadata3(0,lVar5,lVar7,lVar9,0,0);
  local_c0 = *(long *)(lVar10 + -8);
  uVar18 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)alStack_140 - uVar18;
  lVar7 = lVar5 - uVar18;
  plVar19 = (long *)(lVar7 - uVar18);
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_80 = lVar11;
  lVar11 = 0;
  local_e8 = lVar10;
  local_e0 = (long)plVar19 - uVar18;
  local_90 = uVar21;
  local_88 = uVar27;
  uStack_78 = uVar23;
  FUN_1007c7be0(0,&local_a0);
  lVar9 = *(long *)(lVar11 + -8);
  puVar24 = (undefined8 *)
            (((long)plVar19 - uVar18) - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar9 + 0x10))(puVar24);
  puVar12 = puVar24;
  _swift_getEnumCaseMultiPayload(puVar24,lVar11);
  iVar3 = (int)puVar12;
  if (iVar3 < 3) {
    if (iVar3 != 2) {
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1007cffd8);
        (*pcVar22)();
      }
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1007cffd4);
      (*pcVar22)();
    }
    local_d0 = *puVar24;
    puVar17 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    _swift_getTupleTypeMetadata3(0xff,uVar4,uVar6,OVar2.value,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar1 = local_e8;
    lVar14 = 0;
    _swift_getTupleTypeMetadata3
              (0,puVar17,local_e8,UVar13.unknown,"task upstreams downstreamContinuation ",0);
    lVar10 = local_c0;
    lVar20 = local_e0;
    local_110 = *(undefined8 *)((long)puVar24 + (long)*(int *)(lVar14 + 0x40));
    (**(code **)(local_c0 + 0x20))(local_e0,(long)puVar24 + (long)*(int *)(lVar14 + 0x30),lVar1);
    (**(code **)(lVar9 + 8))(unaff_x20,lVar11);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar11,3);
    pcVar25 = *(code **)(lVar10 + 0x10);
    (*pcVar25)(plVar19,lVar20,lVar1);
    lVar9 = local_100;
    local_120 = (long)*(int *)(lVar1 + 0x30);
    alStack_140[3] = (long)*(int *)(lVar1 + 0x40);
    alStack_140[2] = *plVar19;
    pcVar26 = *(code **)(*(long *)(local_100 + -8) + 8);
    (*pcVar26)(plVar19,local_100);
    (*pcVar25)(lVar7,lVar20,lVar1);
    lVar10 = local_f8;
    alStack_140[1] = (long)*(int *)(lVar1 + 0x40);
    local_118 = *(long *)(lVar7 + *(int *)(lVar1 + 0x30));
    pcVar22 = *(code **)(*(long *)(local_f8 + -8) + 8);
    (*pcVar22)(lVar7 + *(int *)(lVar1 + 0x30),local_f8);
    (*pcVar25)(lVar5,lVar20,lVar1);
    lVar11 = local_108;
    iVar3 = *(int *)(lVar1 + 0x30);
    lVar20 = *(long *)(lVar5 + *(int *)(lVar1 + 0x40));
    pcVar25 = *(code **)(*(long *)(local_108 + -8) + 8);
    (*pcVar25)(lVar5 + *(int *)(lVar1 + 0x40),local_108);
    (*pcVar22)(lVar5 + iVar3,lVar10);
    (*pcVar26)(lVar5,lVar9);
    (*pcVar25)(lVar7 + alStack_140[1],lVar11);
    (*pcVar26)(lVar7,lVar9);
    lVar5 = alStack_140[2];
    (*pcVar25)((long)plVar19 + alStack_140[3],lVar11);
    (*pcVar22)((long)plVar19 + local_120,lVar10);
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar11 = local_118;
    uVar4 = local_110;
    if (lVar5 != 0) {
      puVar15 = (undefined *)0x0;
      FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      uVar18 = *(ulong *)(puVar15 + 0x10);
      puVar17 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
        FUN_1007b784c(puVar17,uVar18 + 1,1,puVar15);
      }
      *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
      *(long *)(puVar17 + uVar18 * 8 + 0x20) = lVar5;
      lVar11 = local_118;
      uVar4 = local_110;
    }
    local_118 = lVar11;
    local_110 = uVar4;
    if (lVar11 != 0) {
      puVar15 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar17;
      if (((ulong)puVar15 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar18 = *(ulong *)(puVar16 + 0x10);
      puVar17 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_1007b784c(puVar17,uVar18 + 1,1,puVar16);
      }
      *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
      *(long *)(puVar17 + uVar18 * 8 + 0x20) = lVar11;
    }
    if (lVar20 != 0) {
      puVar15 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar17;
      if (((ulong)puVar15 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar18 = *(ulong *)(puVar16 + 0x10);
      puVar17 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_1007b784c(puVar17,uVar18 + 1,1,puVar16);
      }
      *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
      *(long *)(puVar17 + uVar18 * 8 + 0x20) = lVar20;
    }
    (**(code **)(local_c0 + 8))(local_e0,local_e8);
    _swift_errorRetain(local_f0);
  }
  else {
    uVar4 = 0;
    if (iVar3 != 3) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1007cfe6c);
      (*pcVar22)();
    }
  }
  return uVar4;
}



/* Address: 0x1007cffd8 | FUN_1007cffd8 */

ulong FUN_1007cffd8(long param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  Optional OVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  undefined7 extraout_var;
  UnsafeContinuation UVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 unaff_x20;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  ulong *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong local_130 [4];
  long local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar15 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar17 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lStack_98 = *(undefined8 *)(param_1 + 0x18);
  lVar14 = *(long *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar28 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = 0xff;
  local_110 = lVar14;
  local_a0 = lVar14;
  _swift_getAssociatedTypeWitness
            (0xff,uVar28,lVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x18);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  uVar30 = *(undefined8 *)(param_1 + 0x38);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  lVar7 = 0xff;
  local_130[2] = uVar6;
  local_e0 = lVar8;
  local_90 = uVar25;
  local_88 = uVar6;
  uStack_80 = uVar28;
  uStack_78 = uVar9;
  local_70 = uVar22;
  FUN_1007cba3c(0xff,&local_a0);
  uVar6 = 0xff;
  local_130[3] = lVar8;
  _swift_getAssociatedTypeWitness(0xff,uVar29,lVar8,puVar15,puVar17);
  local_90 = uStack_d8;
  lStack_98 = local_e0;
  lVar8 = 0xff;
  local_a0 = lVar14;
  local_88 = uVar6;
  uStack_80 = uVar28;
  uStack_78 = uVar29;
  local_70 = uVar30;
  FUN_1007cba3c(0xff,&local_a0);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar22,uVar25,puVar15,puVar17);
  uVar1 = local_e0;
  lStack_98 = local_e0;
  lVar10 = 0xff;
  local_e0 = uVar28;
  uStack_d8 = uVar29;
  local_a0 = lVar14;
  local_90 = uVar25;
  local_88 = uVar9;
  uStack_80 = uVar28;
  uStack_78 = uVar29;
  local_70 = uVar22;
  FUN_1007cba3c(0xff,&local_a0);
  lVar11 = 0;
  local_100 = lVar10;
  local_f8 = lVar8;
  local_f0 = lVar7;
  _swift_getTupleTypeMetadata3(0,lVar7,lVar8,lVar10,0,0);
  lVar8 = *(long *)(lVar11 + -8);
  uVar18 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = (long)local_130 - uVar18;
  lVar20 = local_e8 - uVar18;
  lVar27 = lVar20 - uVar18;
  plVar26 = (long *)(lVar27 - uVar18);
  lStack_98 = uVar1;
  uStack_80 = uStack_d8;
  local_88 = local_e0;
  lVar7 = 0;
  local_108 = (long)plVar26 - uVar18;
  local_a0 = lVar14;
  local_90 = uVar25;
  uStack_78 = uVar22;
  FUN_1007c7be0(0,&local_a0);
  lVar10 = *(long *)(lVar7 + -8);
  puVar23 = (ulong *)(((long)plVar26 - uVar18) -
                     (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar10 + 0x10))(puVar23);
  puVar12 = puVar23;
  _swift_getEnumCaseMultiPayload(puVar23,lVar7);
  iVar5 = (int)puVar12;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      local_e0 = *puVar23;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      lVar14 = 0;
      _swift_getTupleTypeMetadata2(0,puVar17,lVar11,"task upstreams ",0);
      uVar1 = local_108;
      (**(code **)(lVar8 + 0x20))(local_108,(long)puVar23 + (long)*(int *)(lVar14 + 0x30),lVar11);
      (**(code **)(lVar10 + 8))(unaff_x20,lVar7);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar7,3);
      pcVar21 = *(code **)(lVar8 + 0x10);
      (*pcVar21)(plVar26,uVar1,lVar11);
      lVar14 = local_f0;
      local_110 = (long)*(int *)(lVar11 + 0x30);
      local_130[2] = (long)*(int *)(lVar11 + 0x40);
      local_130[3] = *plVar26;
      pcVar24 = *(code **)(*(long *)(local_f0 + -8) + 8);
      (*pcVar24)(plVar26,local_f0);
      (*pcVar21)(lVar27,uVar1,lVar11);
      lVar10 = local_f8;
      local_130[1] = (long)*(int *)(lVar11 + 0x40);
      local_e8 = *(long *)(lVar27 + *(int *)(lVar11 + 0x30));
      pcVar3 = *(code **)(*(long *)(local_f8 + -8) + 8);
      (*pcVar3)(lVar27 + *(int *)(lVar11 + 0x30),local_f8);
      (*pcVar21)(lVar20,uVar1,lVar11);
      lVar7 = local_100;
      iVar5 = *(int *)(lVar11 + 0x30);
      lVar19 = *(long *)(lVar20 + *(int *)(lVar11 + 0x40));
      pcVar21 = *(code **)(*(long *)(local_100 + -8) + 8);
      (*pcVar21)(lVar20 + *(int *)(lVar11 + 0x40),local_100);
      (*pcVar3)(lVar20 + iVar5,lVar10);
      (*pcVar24)(lVar20,lVar14);
      (*pcVar21)(lVar27 + local_130[1],lVar7);
      (*pcVar24)(lVar27,lVar14);
      (*pcVar21)((long)plVar26 + local_130[2],lVar7);
      uVar18 = local_130[3];
      (*pcVar3)((long)plVar26 + local_110,lVar10);
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar7 = local_e8;
      uVar1 = local_e0;
      if (uVar18 != 0) {
        puVar15 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar1 = *(ulong *)(puVar15 + 0x10);
        puVar17 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007b784c(puVar17,uVar1 + 1,1,puVar15);
        }
        *(ulong *)(puVar17 + 0x10) = uVar1 + 1;
        *(ulong *)(puVar17 + uVar1 * 8 + 0x20) = uVar18;
        lVar7 = local_e8;
        uVar1 = local_e0;
      }
      local_e8 = lVar7;
      local_e0 = uVar1;
      if (lVar7 != 0) {
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar18 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar17,uVar18 + 1,1,puVar16);
        }
        *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
        *(long *)(puVar17 + uVar18 * 8 + 0x20) = lVar7;
      }
      if (lVar19 != 0) {
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar18 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar17,uVar18 + 1,1,puVar16);
        }
        *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
        *(long *)(puVar17 + uVar18 * 8 + 0x20) = lVar19;
      }
      (**(code **)(lVar8 + 8))(local_108,lVar11);
      return uVar1 | 0x8000000000000000;
    }
    OVar4 = Swift::Optional::typeMetadataAccessor();
    lVar8 = local_110;
    uVar1 = local_130[3];
    lVar11 = CONCAT71(extraout_var,OVar4.value);
    lVar20 = 0;
    _swift_getTupleTypeMetadata3(0,local_110,local_130[3],lVar11,"base1 base2 base3 ",0);
    iVar5 = *(int *)(lVar20 + 0x30);
    iVar2 = *(int *)(lVar20 + 0x40);
    (**(code **)(lVar10 + 8))(unaff_x20,lVar7);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar7,3);
    (**(code **)(*(long *)(lVar11 + -8) + 8))((long)puVar23 + (long)iVar2,lVar11);
    (**(code **)(*(long *)(uVar1 + -8) + 8))((long)puVar23 + (long)iVar5,uVar1);
    (**(code **)(*(long *)(lVar8 + -8) + 8))(puVar23,lVar8);
  }
  else {
    if (iVar5 == 2) {
      local_108 = *puVar23;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      OVar4 = Swift::Optional::typeMetadataAccessor();
      _swift_getTupleTypeMetadata3(0xff,local_130[2],uVar6,OVar4.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar14 = 0;
      _swift_getTupleTypeMetadata3
                (0,puVar17,lVar11,UVar13.unknown,"task upstreams downstreamContinuation ",0);
      lVar19 = local_e8;
      local_e0 = *(ulong *)((long)puVar23 + (long)*(int *)(lVar14 + 0x40));
      (**(code **)(lVar8 + 0x20))(local_e8,(long)puVar23 + (long)*(int *)(lVar14 + 0x30),lVar11);
      (**(code **)(lVar10 + 8))(unaff_x20,lVar7);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar7,3);
      pcVar3 = *(code **)(lVar8 + 0x10);
      (*pcVar3)(plVar26,lVar19,lVar11);
      lVar14 = local_f0;
      local_130[2] = (long)*(int *)(lVar11 + 0x30);
      local_130[1] = (long)*(int *)(lVar11 + 0x40);
      local_130[3] = *plVar26;
      pcVar21 = *(code **)(*(long *)(local_f0 + -8) + 8);
      (*pcVar21)(plVar26,local_f0);
      (*pcVar3)(lVar27,lVar19,lVar11);
      lVar10 = local_f8;
      local_130[0] = (long)*(int *)(lVar11 + 0x40);
      local_110 = *(long *)(lVar27 + *(int *)(lVar11 + 0x30));
      pcVar24 = *(code **)(*(long *)(local_f8 + -8) + 8);
      (*pcVar24)(lVar27 + *(int *)(lVar11 + 0x30),local_f8);
      (*pcVar3)(lVar20,lVar19,lVar11);
      lVar7 = local_100;
      iVar5 = *(int *)(lVar11 + 0x30);
      lVar19 = *(long *)(lVar20 + *(int *)(lVar11 + 0x40));
      pcVar3 = *(code **)(*(long *)(local_100 + -8) + 8);
      (*pcVar3)(lVar20 + *(int *)(lVar11 + 0x40),local_100);
      (*pcVar24)(lVar20 + iVar5,lVar10);
      (*pcVar21)(lVar20,lVar14);
      (*pcVar3)(lVar27 + local_130[0],lVar7);
      (*pcVar21)(lVar27,lVar14);
      (*pcVar3)((long)plVar26 + local_130[1],lVar7);
      (*pcVar24)((long)plVar26 + local_130[2],lVar10);
      uVar1 = local_130[3];
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar7 = local_110;
      if (local_130[3] != 0) {
        puVar15 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar18 = *(ulong *)(puVar15 + 0x10);
        puVar17 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007b784c(puVar17,uVar18 + 1,1,puVar15);
        }
        *(ulong *)(puVar17 + 0x10) = uVar18 + 1;
        *(ulong *)(puVar17 + uVar18 * 8 + 0x20) = uVar1;
        lVar7 = local_110;
      }
      local_110 = lVar7;
      if (lVar7 != 0) {
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar1 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar17,uVar1 + 1,1,puVar16);
        }
        *(ulong *)(puVar17 + 0x10) = uVar1 + 1;
        *(long *)(puVar17 + uVar1 * 8 + 0x20) = lVar7;
      }
      if (lVar19 != 0) {
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar1 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar17,uVar1 + 1,1,puVar16);
        }
        *(ulong *)(puVar17 + 0x10) = uVar1 + 1;
        *(long *)(puVar17 + uVar1 * 8 + 0x20) = lVar19;
      }
      (**(code **)(lVar8 + 8))(local_e8,lVar11);
      return local_e0;
    }
    if (iVar5 != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d0a00);
      (*pcVar3)();
    }
    (**(code **)(lVar10 + 8))(unaff_x20,lVar7);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar7,3);
  }
  return 0xf000000000000007;
}



/* Address: 0x1007d0a00 | FUN_1007d0a00 */

void FUN_1007d0a00(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  Optional OVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined7 extraout_var;
  long lVar12;
  undefined *puVar13;
  UnsafeContinuation UVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *unaff_x20;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long alStack_150 [4];
  code *local_130;
  undefined *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar13 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar16 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar24 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(param_3 + 0x18);
  lVar25 = *(long *)(param_3 + 0x10);
  uVar28 = *(undefined8 *)(param_3 + 0x28);
  uVar26 = *(undefined8 *)(param_3 + 0x20);
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar19,lVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar21 = *(undefined8 *)(param_3 + 0x38);
  uVar29 = *(undefined8 *)(param_3 + 0x38);
  uVar27 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = 0xff;
  local_108 = uVar5;
  local_a0 = lVar25;
  lStack_98 = lVar24;
  local_90 = uVar26;
  local_88 = uVar5;
  local_80 = uVar19;
  uStack_78 = uVar27;
  local_70 = uVar21;
  FUN_1007cba3c(0xff,&local_a0);
  uVar5 = 0xff;
  local_f8 = uVar27;
  _swift_getAssociatedTypeWitness(0xff,uVar27,lVar24,puVar13,puVar16);
  uVar7 = 0xff;
  local_110 = uVar5;
  local_a0 = lVar25;
  lStack_98 = lVar24;
  local_90 = uVar26;
  local_88 = uVar5;
  local_80 = uVar19;
  uStack_78 = uVar27;
  local_70 = uVar21;
  FUN_1007cba3c(0xff,&local_a0);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar21,uVar26,puVar13,puVar16);
  uVar8 = 0xff;
  local_118 = uVar5;
  local_a0 = lVar25;
  lStack_98 = lVar24;
  local_90 = uVar26;
  local_88 = uVar5;
  local_80 = uVar19;
  uStack_78 = uVar27;
  local_70 = uVar21;
  FUN_1007cba3c(0xff,&local_a0);
  lVar9 = 0;
  _swift_getTupleTypeMetadata3(0,uVar6,uVar7,uVar8,0,0);
  lVar23 = *(long *)(lVar9 + -8);
  plVar20 = (long *)((long)alStack_150 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0;
  local_100 = lVar9;
  local_a0 = lVar25;
  lStack_98 = lVar24;
  local_90 = uVar26;
  local_88 = uVar19;
  local_80 = uVar27;
  uStack_78 = uVar21;
  FUN_1007c7be0(0,&local_a0);
  lVar9 = *(long *)(lVar10 + -8);
  puVar22 = (undefined8 *)((long)plVar20 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar9 + 0x10))(puVar22);
  puVar11 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar10);
  iVar4 = (int)puVar11;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar9 = CONCAT71(extraout_var,OVar3.value);
      lVar10 = 0;
      _swift_getTupleTypeMetadata3(0,lVar25,lVar24,lVar9,"base1 base2 base3 ",0);
      iVar4 = *(int *)(lVar10 + 0x30);
      iVar2 = *(int *)(lVar10 + 0x40);
      (**(code **)(*(long *)(lVar25 + -8) + 0x20))(param_1,puVar22,lVar25);
      lVar10 = 0;
      _swift_getTupleTypeMetadata3(0,lVar25,lVar24,lVar9,0,0);
      (**(code **)(*(long *)(lVar24 + -8) + 0x20))
                ((long)param_1 + (long)*(int *)(lVar10 + 0x30),(long)puVar22 + (long)iVar4,lVar24);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                ((long)param_1 + (long)*(int *)(lVar10 + 0x40),(long)puVar22 + (long)iVar2,lVar9);
      uVar5 = 0;
      local_a0 = lVar25;
      lStack_98 = lVar17;
      local_90 = uVar26;
      local_88 = uVar28;
      local_80 = uVar27;
      uStack_78 = uVar29;
      FUN_1007d10c0(0,&local_a0);
      uVar6 = 0;
    }
    else {
      local_120 = param_1;
      uVar5 = *puVar22;
      puVar16 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      lVar17 = local_100;
      lVar12 = 0;
      local_128 = puVar16;
      _swift_getTupleTypeMetadata2(0,puVar16,local_100,"task upstreams ",0);
      pcVar18 = *(code **)(lVar23 + 0x20);
      (*pcVar18)(plVar20,(long)puVar22 + (long)*(int *)(lVar12 + 0x30),lVar17);
      local_130 = *(code **)(lVar9 + 8);
      (*local_130)(unaff_x20,lVar10);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,4);
      lVar12 = *plVar20;
      alStack_150[3] = (long)*(int *)(lVar17 + 0x30);
      lVar9 = *(long *)((long)plVar20 + alStack_150[3]);
      lVar23 = (long)*(int *)(lVar17 + 0x40);
      lVar17 = *(long *)((long)plVar20 + lVar23);
      puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar12 != 0) {
        puVar13 = (undefined *)0x0;
        alStack_150[1] = lVar9;
        alStack_150[2] = lVar23;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar16 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1007b784c(puVar16,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
        *(long *)(puVar16 + uVar1 * 8 + 0x20) = lVar12;
        lVar9 = alStack_150[1];
        lVar23 = alStack_150[2];
      }
      if (lVar9 != 0) {
        puVar13 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = puVar16;
        if (((ulong)puVar13 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar1 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007b784c(puVar16,uVar1 + 1,1,puVar15);
        }
        *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
        *(long *)(puVar16 + uVar1 * 8 + 0x20) = lVar9;
      }
      if (lVar17 != 0) {
        puVar13 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = puVar16;
        if (((ulong)puVar13 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar1 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007b784c(puVar16,uVar1 + 1,1,puVar15);
        }
        *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
        *(long *)(puVar16 + uVar1 * 8 + 0x20) = lVar17;
      }
      *plVar20 = 0;
      *(undefined8 *)((long)plVar20 + alStack_150[3]) = 0;
      *(undefined8 *)((long)plVar20 + lVar23) = 0;
      (*local_130)(unaff_x20,lVar10);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      _swift_getTupleTypeMetadata3(0xff,local_108,local_110,OVar3.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      UVar14 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar9 = local_100;
      lVar23 = 0;
      _swift_getTupleTypeMetadata3
                (0,local_128,local_100,UVar14.unknown,"task upstreams downstreamContinuation ",0);
      iVar4 = *(int *)(lVar23 + 0x30);
      iVar2 = *(int *)(lVar23 + 0x40);
      *unaff_x20 = uVar5;
      (*pcVar18)((long)unaff_x20 + (long)iVar4,plVar20,lVar9);
      *(undefined8 *)((long)unaff_x20 + (long)iVar2) = param_2;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,2);
      param_1 = local_120;
      *local_120 = puVar16;
      local_80 = local_f8;
      uVar5 = 0;
      local_a0 = lVar25;
      lStack_98 = lVar24;
      local_90 = uVar26;
      local_88 = uVar19;
      uStack_78 = uVar21;
      FUN_1007d10c0(0,&local_a0);
      uVar6 = 1;
    }
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1007d10b4);
        (*pcVar18)();
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007d10b0);
      (*pcVar18)();
    }
    *param_1 = param_2;
    local_80 = local_f8;
    uVar5 = 0;
    local_a0 = lVar25;
    lStack_98 = lVar24;
    local_90 = uVar26;
    local_88 = uVar19;
    uStack_78 = uVar21;
    FUN_1007d10c0(0,&local_a0);
    uVar6 = 2;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar5,uVar6);
  return;
}



/* Address: 0x1007d10b4 | FUN_1007d10b4 */

void FUN_1007d10b4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc12dc);
  return;
}



/* Address: 0x1007d10c0 | FUN_1007d10c0 */

void FUN_1007d10c0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc1384);
  return;
}



/* Address: 0x1007d10cc | FUN_1007d10cc */

void FUN_1007d10cc(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc1234);
  return;
}



/* Address: 0x1007d10d8 | thunk_FUN_1007d1104 */

void thunk_FUN_1007d1104(void)

{
  FUN_1007d1104();
  return;
}



/* Address: 0x1007d10dc | FUN_1007d10dc */

void FUN_1007d10dc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1007d1104 | FUN_1007d1104 */

undefined8 * FUN_1007d1104(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1007d1148 | FUN_1007d1148 */

undefined8 * FUN_1007d1148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1007d11ac | FUN_1007d11ac */

undefined8 * FUN_1007d11ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1007d11f0 | FUN_1007d11f0 */

void FUN_1007d11f0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc1288);
  return;
}



/* Address: 0x1007d11fc | FUN_1007d11fc */

undefined1  [16] FUN_1007d11fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined7 extraout_var_00;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  undefined7 extraout_var;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar7 = CONCAT71(extraout_var,OVar3.value);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,RVar4.value);
  if (uVar7 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_60,&DAT_100c78e58,*(long *)(lVar8 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_60);
    lVar8 = 0;
    uVar5 = 0;
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_4c;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = lVar8;
  return auVar9;
}



/* Address: 0x1007d1340 | FUN_1007d1340 */

void FUN_1007d1340(long param_1)

{
  _swift_errorRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007d1370 | FUN_1007d1370 */

undefined8 * FUN_1007d1370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  _swift_errorRetain(uVar1);
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1007d13cc | FUN_1007d13cc */

undefined8 * FUN_1007d13cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  _swift_errorRetain(uVar2);
  uVar1 = param_1[1];
  param_1[1] = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1007d1448 | FUN_1007d1448 */

undefined8 * FUN_1007d1448(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  _swift_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1007d1494 | FUN_1007d1494 */

void FUN_1007d1494(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc1330);
  return;
}



/* Address: 0x1007d14a0 | FUN_1007d14a0 */

void FUN_1007d14a0(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lVar4 = *(long *)(lVar2 + -8);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      if (uVar3 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_68,lVar4 + 0x40,*(long *)(lVar2 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
        puStack_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
        local_38 = &DAT_100c78e58;
        local_48 = auStack_68;
        _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_48);
      }
    }
  }
  return;
}



/* Address: 0x1007d1570 | FUN_1007d1570 */

long * FUN_1007d1570(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar13 = *(long *)(lVar2 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar12 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  sVar10 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  uVar1 = sVar10 + (lVar14 + uVar11 + (uVar6 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar11 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar5 = *(uint *)(lVar13 + 0x50) | *(uint *)(lVar8 + 0x50) | *(uint *)(lVar12 + 0x50);
  if ((uVar5 & 0x1000f8) == 0 && uVar1 + 1 < 0x19) {
    uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
    if (2 < *(byte *)((long)param_2 + uVar1)) {
      uVar5 = (int)*param_2 + 3;
    }
    if (uVar5 == 2) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 2;
    }
    else if (uVar5 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar7 = ~uVar11;
      (**(code **)(lVar8 + 0x10))(param_1);
      uVar4 = uVar6 + (long)param_1 & ~uVar9;
      uVar6 = uVar6 + (long)param_2 & ~uVar9;
      (**(code **)(lVar13 + 0x10))(uVar4,uVar6,lVar2);
      lVar14 = lVar14 + uVar11;
      uVar4 = uVar4 + lVar14;
      uVar6 = uVar6 + lVar14;
      uVar9 = uVar6 & uVar7;
      (**(code **)(lVar12 + 0x30))(uVar9,1,lVar3);
      if ((int)uVar9 == 0) {
        (**(code **)(lVar12 + 0x10))(uVar4 & uVar7,uVar6 & uVar7,lVar3);
        (**(code **)(lVar12 + 0x38))(uVar4 & uVar7,0,1,lVar3);
      }
      else {
        _memcpy((void *)(uVar4 & uVar7),(void *)(uVar6 & uVar7),sVar10);
      }
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    uVar6 = (ulong)(uVar5 & 0xf8 | 7);
    lVar14 = *param_2;
    *param_1 = lVar14;
    param_1 = (long *)(lVar14 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007d1760 | FUN_1007d1760 */

void FUN_1007d1760(uint *param_1,long param_2)

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
  if (uVar1 < 9) {
    uVar1 = 8;
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
      if (uVar9 == 0) goto LAB_1007d184c;
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
LAB_1007d184c:
  if (uVar8 != 2) {
    if (uVar8 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
    (**(code **)(lVar6 + 8))();
    uVar11 = (ulong)(uVar11 + (long)param_1) & ~uVar7;
    (**(code **)(lVar14 + 8))(uVar11,lVar2);
    uVar11 = uVar11 + lVar13 + uVar15;
    uVar7 = uVar11 & ~uVar15;
    (**(code **)(lVar12 + 0x30))(uVar7,1,lVar3);
    if ((int)uVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007d1908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar12 + 8))(uVar11 & ~uVar15,lVar3);
      return;
    }
  }
  return;
}



/* Address: 0x1007d190c | FUN_1007d190c */

undefined8 * FUN_1007d190c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar17 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar13 = *(long *)(lVar5 + 0x40) + uVar6;
  lVar10 = *(long *)(lVar17 + 0x40);
  lVar16 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
  sVar9 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar1 = sVar9 + (lVar10 + uVar11 + (uVar13 & (uVar6 ^ 0xffffffffffffffff)) &
                  (uVar11 ^ 0xffffffffffffffff));
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar4;
  if (2 < bVar4) {
    uVar15 = (uint)uVar1;
    uVar8 = 4;
    if (uVar15 < 4) {
      uVar8 = uVar15;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007d1a00;
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
    uVar7 = uVar8 | bVar4 - 3 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1007d1a00:
  if (uVar7 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar7 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar12 = ~uVar11;
    (**(code **)(lVar5 + 0x10))(param_1);
    uVar14 = uVar13 + (long)param_1 & ~uVar6;
    uVar13 = (ulong)(uVar13 + (long)param_2) & ~uVar6;
    (**(code **)(lVar17 + 0x10))(uVar14,uVar13,lVar2);
    lVar10 = lVar10 + uVar11;
    uVar14 = uVar14 + lVar10;
    uVar13 = uVar13 + lVar10;
    uVar6 = uVar13 & uVar12;
    (**(code **)(lVar16 + 0x30))(uVar6,1,lVar3);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar14 & uVar12,uVar13 & uVar12,lVar3);
      (**(code **)(lVar16 + 0x38))(uVar14 & uVar12,0,1,lVar3);
    }
    else {
      _memcpy((void *)(uVar14 & uVar12),(void *)(uVar13 & uVar12),sVar9);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}


