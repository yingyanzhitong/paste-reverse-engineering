/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100747018 | FUN_100747018 */

int FUN_100747018(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x100747038 | FUN_100747038 */

void FUN_100747038(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 < 0x7fffffff) {
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
    uVar1 = (int)uVar5 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar4 = 0xffffffff;
    if (uVar1 < 4) {
      uVar4 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 & param_2 + 0x80000001;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1,(ulong)uVar1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar4;
        }
        else {
          *(short *)param_1 = (short)uVar4;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar4;
        *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar4;
      }
    }
  }
  return;
}



/* Address: 0x10074713c | FUN_10074713c */

void FUN_10074713c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100747148 | FUN_100747148 */

undefined1  [16] FUN_100747148(long param_1)

{
  Result RVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [32];
  long local_30;
  undefined1 *local_28;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar4 < 0x40) {
    local_30 = *(long *)(lVar3 + -8) + 0x40;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x18),lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar1 = Swift::Result::typeMetadataAccessor();
    uVar4 = CONCAT71(extraout_var,RVar1.value);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var_00,OVar2.value);
    if (uVar4 < 0x40) {
      _swift_getTupleTypeLayout2(auStack_50,&DAT_100c75e78,*(long *)(lVar3 + -8) + 0x40);
      local_28 = auStack_50;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
      lVar3 = 0;
      uVar5 = 0;
      goto LAB_100747228;
    }
  }
  uVar5 = 0x3f;
LAB_100747228:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Address: 0x10074723c | FUN_10074723c */

long * FUN_10074723c(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar4 + -8);
  uVar13 = *(ulong *)(lVar14 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar3 + -8);
  uVar8 = *(uint *)(lVar7 + 0x50) & 0xf8;
  uVar10 = *(ulong *)(lVar7 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar1 = ((ulong)(uVar8 + 0xf & (uVar8 ^ 0xffffffff)) & 0x1f8) + uVar10 + 1;
  if (uVar1 <= uVar13) {
    uVar1 = uVar13;
  }
  uVar8 = *(uint *)(lVar7 + 0x50) | *(uint *)(lVar14 + 0x50);
  if ((uVar8 & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar10 = (ulong)(uVar8 & 0xf8 | 7);
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = 4;
    if (uVar1 < 4) {
      uVar9 = (uint)uVar1;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100747370;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)(((uint)uVar1 & 3) << 3);
    if (3 < uVar1) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_100747370:
  if (uVar8 == 1) {
    *param_1 = *(long *)param_2;
    puVar12 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    if (*(byte *)((long)puVar6 + uVar10) < 2) {
      if (*(byte *)((long)puVar6 + uVar10) == 1) {
        uVar11 = *puVar6;
        _swift_errorRetain(uVar11);
        *puVar12 = uVar11;
        *(undefined1 *)((long)puVar12 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar7 + 0x10))(puVar12,puVar6,lVar3);
        *(undefined1 *)((long)puVar12 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar12,puVar6,uVar10 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar8 != 0) {
      plVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar5;
    }
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar4);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100747438 | FUN_100747438 */

void FUN_100747438(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = *(ulong *)(lVar12 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar8 = *(ulong *)(lVar5 + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  lVar1 = uVar8 + (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff));
  if (uVar13 < lVar1 + 1U) {
    uVar13 = lVar1 + 1;
  }
  bVar3 = *(byte *)((long)param_1 + uVar13);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar13;
    uVar11 = 4;
    if (uVar9 < 4) {
      uVar11 = uVar9;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_100747524;
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
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_100747524:
  if (uVar10 == 1) {
    param_1 = (uint *)((ulong)((long)param_1 + uVar6 + 8) & ~uVar6);
    if (1 < *(byte *)((long)param_1 + uVar8)) {
      return;
    }
    if (*(byte *)((long)param_1 + uVar8) == 1) {
      _swift_errorRelease(*(undefined8 *)param_1,lVar4);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    if (uVar10 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
    lVar4 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100747548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar4);
  return;
}



/* Address: 0x100747598 | FUN_100747598 */

undefined8 * FUN_100747598(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar1 + -8);
  uVar14 = *(ulong *)(lVar15 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar10 = *(ulong *)(lVar5 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + uVar10 + 1;
  if (uVar7 <= uVar14) {
    uVar7 = uVar14;
  }
  bVar2 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar13 = (uint)uVar7;
    uVar9 = 4;
    if (uVar13 < 4) {
      uVar9 = uVar13;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100747688;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_100747688:
  if (uVar8 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + uVar6 + 8 & ~uVar6);
    puVar4 = (undefined8 *)((ulong)((long)param_2 + uVar6 + 8) & ~uVar6);
    if (*(byte *)((long)puVar4 + uVar10) < 2) {
      if (*(byte *)((long)puVar4 + uVar10) == 1) {
        uVar12 = *puVar4;
        _swift_errorRetain(uVar12);
        *puVar11 = uVar12;
        *(undefined1 *)((long)puVar11 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x10))(puVar11,puVar4,lVar3);
        *(undefined1 *)((long)puVar11 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar11,puVar4,uVar10 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar7 + 1);
      return puVar4;
    }
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Address: 0x100747760 | FUN_100747760 */

uint * FUN_100747760(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar2 + -8);
  uVar12 = *(ulong *)(lVar15 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8;
  uVar16 = uVar7 | 7;
  uVar9 = *(ulong *)(lVar14 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar16 ^ 0xffffffffffffffff)) + uVar9 + 1;
  if (uVar7 <= uVar12) {
    uVar7 = uVar12;
  }
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar8 = (uint)bVar3;
  uVar13 = (uint)uVar7;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar13 < 4) {
      uVar1 = uVar13;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_100747880;
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
    if (uVar13 < 4) {
      uVar8 = (uVar8 | bVar3 - 2 << (ulong)((uVar13 & 3) << 3)) + 2;
    }
    else {
      uVar8 = uVar8 + 2;
    }
  }
LAB_100747880:
  uVar12 = ~uVar16;
  if (uVar8 == 1) {
    puVar6 = (undefined8 *)((ulong)((long)param_1 + uVar16 + 8) & uVar12);
    if (*(byte *)((long)puVar6 + uVar9) < 2) {
      if (*(byte *)((long)puVar6 + uVar9) == 1) {
        _swift_errorRelease(*puVar6);
      }
      else {
        (**(code **)(lVar14 + 8))(puVar6,lVar4);
      }
    }
  }
  else if (uVar8 == 0) {
    (**(code **)(lVar15 + 8))(param_1,lVar2);
  }
  bVar3 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar13 < 4) {
      uVar1 = uVar13;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto joined_r0x000100747988;
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
    if (uVar13 < 4) {
      uVar8 = (uVar8 | bVar3 - 2 << (ulong)((uVar13 & 3) << 3)) + 2;
    }
    else {
      uVar8 = uVar8 + 2;
    }
  }
joined_r0x000100747988:
  if (uVar8 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar10 = (undefined8 *)((ulong)((long)param_1 + uVar16 + 8) & uVar12);
    puVar6 = (undefined8 *)((ulong)((long)param_2 + uVar16 + 8) & uVar12);
    if (*(byte *)((long)puVar6 + uVar9) < 2) {
      if (*(byte *)((long)puVar6 + uVar9) == 1) {
        uVar11 = *puVar6;
        _swift_errorRetain(uVar11);
        *puVar10 = uVar11;
        *(undefined1 *)((long)puVar10 + uVar9) = 1;
      }
      else {
        (**(code **)(lVar14 + 0x10))(puVar10,puVar6,lVar4);
        *(undefined1 *)((long)puVar10 + uVar9) = 0;
      }
    }
    else {
      _memcpy(puVar10,puVar6,uVar9 + 1);
    }
    *(byte *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar7 + 1);
      return puVar5;
    }
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Address: 0x100747a94 | FUN_100747a94 */

undefined8 * FUN_100747a94(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar1 + -8);
  uVar14 = *(ulong *)(lVar13 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = uVar7 | 7;
  uVar10 = *(ulong *)(lVar5 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar7 = (uVar7 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + uVar10 + 1;
  if (uVar7 <= uVar14) {
    uVar7 = uVar14;
  }
  bVar2 = *(byte *)((long)param_2 + uVar7);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar12 = (uint)uVar7;
    uVar9 = 4;
    if (uVar12 < 4) {
      uVar9 = uVar12;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100747b88;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_100747b88:
  if (uVar8 == 1) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + uVar6 + 8 & ~uVar6);
    puVar4 = (undefined8 *)((ulong)((long)param_2 + uVar6 + 8) & ~uVar6);
    if (*(byte *)((long)puVar4 + uVar10) < 2) {
      if (*(byte *)((long)puVar4 + uVar10) == 1) {
        *puVar11 = *puVar4;
        *(undefined1 *)((long)puVar11 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar5 + 0x20))(puVar11,puVar4,lVar3);
        *(undefined1 *)((long)puVar11 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar11,puVar4,uVar10 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar7) = 1;
  }
  else {
    if (uVar8 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar7 + 1);
      return puVar4;
    }
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Address: 0x100747c50 | FUN_100747c50 */

uint * FUN_100747c50(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar2 + -8);
  uVar11 = *(ulong *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar13 + 0x50) & 0xf8;
  uVar15 = uVar8 | 7;
  uVar10 = *(ulong *)(lVar13 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar8 = (uVar8 + 0xf & (uVar15 ^ 0xffffffffffffffff)) + uVar10 + 1;
  if (uVar8 <= uVar11) {
    uVar8 = uVar11;
  }
  bVar3 = *(byte *)((long)param_1 + uVar8);
  uVar9 = (uint)bVar3;
  uVar12 = (uint)uVar8;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar12 < 4) {
      uVar1 = uVar12;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_100747d70;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar1 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar1 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar3 - 2 << (ulong)((uVar12 & 3) << 3)) + 2;
    }
    else {
      uVar9 = uVar9 + 2;
    }
  }
LAB_100747d70:
  uVar11 = ~uVar15;
  if (uVar9 == 1) {
    puVar6 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar11);
    if (*(byte *)((long)puVar6 + uVar10) < 2) {
      if (*(byte *)((long)puVar6 + uVar10) == 1) {
        _swift_errorRelease(*puVar6);
      }
      else {
        (**(code **)(lVar13 + 8))(puVar6,lVar4);
      }
    }
  }
  else if (uVar9 == 0) {
    (**(code **)(lVar14 + 8))(param_1,lVar2);
  }
  bVar3 = *(byte *)((long)param_2 + uVar8);
  uVar9 = (uint)bVar3;
  if (1 < bVar3) {
    uVar1 = 4;
    if (uVar12 < 4) {
      uVar1 = uVar12;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto joined_r0x000100747e78;
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
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar3 - 2 << (ulong)((uVar12 & 3) << 3)) + 2;
    }
    else {
      uVar9 = uVar9 + 2;
    }
  }
joined_r0x000100747e78:
  if (uVar9 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar6 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar11);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + uVar15 + 8) & uVar11);
    if (*(byte *)((long)puVar7 + uVar10) < 2) {
      if (*(byte *)((long)puVar7 + uVar10) == 1) {
        *puVar6 = *puVar7;
        *(undefined1 *)((long)puVar6 + uVar10) = 1;
      }
      else {
        (**(code **)(lVar13 + 0x20))(puVar6,puVar7,lVar4);
        *(undefined1 *)((long)puVar6 + uVar10) = 0;
      }
    }
    else {
      _memcpy(puVar6,puVar7,uVar10 + 1);
    }
    *(byte *)((long)param_1 + uVar8) = 1;
  }
  else {
    if (uVar9 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar8 + 1);
      return puVar5;
    }
    (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar8) = 0;
  }
  return param_1;
}



/* Address: 0x100747f78 | FUN_100747f78 */

int FUN_100747f78(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar4 = uVar6 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8);
  if (uVar8 < lVar4 + 1U) {
    uVar8 = lVar4 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_100748080;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar1 & 0x1f))) - 0xfd >> (ulong)(uVar1 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_100748080;
      goto LAB_10074800c;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10074800c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0xfe;
  }
LAB_100748080:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1007480e8 | FUN_1007480e8 */

void FUN_1007480e8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  byte bVar9;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar4 = uVar5 + ((ulong)(uVar6 + 0xf & (uVar6 ^ 0xffffffff)) & 0x1f8);
  if (uVar7 < lVar4 + 1U) {
    uVar7 = lVar4 + 1;
  }
  sVar1 = uVar7 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar9 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar6 << 3 & 0x1f)) +
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
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar6 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar6 == 2) {
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
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}



/* Address: 0x1007482d8 | FUN_1007482d8 */

uint FUN_1007482d8(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar3 = uVar5 + ((ulong)(uVar2 + 0xf & (uVar2 ^ 0xffffffff)) & 0x1f8);
  if (uVar7 < lVar3 + 1U) {
    uVar7 = lVar3 + 1;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar7;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
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
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x1007483c4 | FUN_1007483c4 */

void FUN_1007483c4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  size_t sVar5;
  
  if (param_2 < 2) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar4 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    uVar3 = *(uint *)(*(long *)(lVar1 + -8) + 0x50) & 0xf8;
    lVar1 = uVar4 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < lVar1 + 1U) {
      uVar4 = lVar1 + 1;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    sVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar3 = *(uint *)(*(long *)(lVar2 + -8) + 0x50) & 0xf8;
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    lVar2 = uVar4 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
    if (sVar5 < lVar2 + 1U) {
      sVar5 = lVar2 + 1;
    }
    param_2 = param_2 - 2;
    uVar3 = (uint)sVar5;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + sVar5) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + sVar5) = 2;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,sVar5);
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



/* Address: 0x100748544 | FUN_100748544 */

void FUN_100748544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100748558 | FUN_100748558 */

int FUN_100748558(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x1007485a8 | FUN_1007485a8 */

void FUN_1007485a8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(uint *)param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x100748600 | FUN_100748600 */

void FUN_100748600(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_2 = param_2 & 0x7fffffff;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x100748620 | FUN_100748620 */

void FUN_100748620(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074862c | FUN_10074862c */

void FUN_10074862c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75f28,param_1);
  return;
}



/* Address: 0x10074863c | thunk_FUN_1007429e0 */

void thunk_FUN_1007429e0(void)

{
  thunk_FUN_1007429e0();
  return;
}



/* Address: 0x100748640 | thunk_FUN_10074531c */

void thunk_FUN_10074531c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x000100745370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100748644 | FUN_100748644 */

void FUN_100748644(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_100748664,0,0);
  return;
}



/* Address: 0x100748664 | FUN_100748664 */

void FUN_100748664(void)

{
  Optional OVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = 0;
  FUN_1007c3a74(0,OVar1.value);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100748758;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&UNK_100c75fb8,*(undefined8 *)(unaff_x22 + 0x18),
                thunk_FUN_100749248,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar3);
  return;
}



/* Address: 0x100748758 | FUN_100748758 */

void FUN_100748758(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007487b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1007487b4 | FUN_1007487b4 */

void FUN_1007487b4(undefined8 param_1,long *param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined7 extraout_var_00;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  lVar5 = *param_2;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x30) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0xff;
  FUN_100745310(0xff,uVar6,uVar7);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  _swift_task_switch(FUN_1007488d8,0,0);
  return;
}



/* Address: 0x1007488d8 | FUN_1007488d8 */

void FUN_1007488d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  String SVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x18);
  uVar11 = *(undefined8 *)(lVar7 + 0x10);
  uVar2 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20));
  FUN_10079f534(uVar8,FUN_100749fb0,lVar7,uVar11,uVar2,uVar9);
  (**(code **)(lVar1 + 0x10))(uVar5,uVar8,uVar9);
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar5,1,lVar10);
  if ((int)uVar5 != 1) {
    plVar6 = *(long **)(unaff_x22 + 0x60);
    plVar3 = plVar6;
    _swift_getEnumCaseMultiPayload(plVar6,*(undefined8 *)(unaff_x22 + 0x48));
    if ((int)plVar3 == 0) {
      SVar12.bridgeObject = (void *)0x2;
      SVar12.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar12,(StaticString)0xd000000000000016,
                 0x8000000100db1320,0xdb1310);
      return;
    }
    if ((int)plVar3 == 1) {
      lVar1 = *(long *)(unaff_x22 + 0x38);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar10 = *plVar6;
      puVar4 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      lVar7 = 0;
      _swift_getTupleTypeMetadata2(0,puVar4,uVar9,"producerContinuation result ",0);
      (**(code **)(lVar1 + 0x20))(uVar5,(long)plVar6 + (long)*(int *)(lVar7 + 0x30),uVar9);
      if (lVar10 != 0) {
        _swift_continuation_throwingResume(lVar10);
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
      FUN_1005cfcb0(uVar8,uVar9,uVar5);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100748a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  uVar5 = 0;
  FUN_1007c3a74(0,uVar9);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100748b40;
  FUN_10072f29c(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_100749fc8,
                *(undefined8 *)(unaff_x22 + 0x18),uVar5);
  return;
}



/* Address: 0x100748b40 | FUN_100748b40 */

void FUN_100748b40(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
  _swift_task_switch(FUN_100748b90,0,0);
  return;
}



/* Address: 0x100748b90 | FUN_100748b90 */

void FUN_100748b90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100748bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100748bf0 | FUN_100748bf0 */

void FUN_100748bf0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *local_70;
  undefined8 local_68;
  long lVar5;
  
  lVar5 = *(long *)(*param_3 + 0x50);
  uVar8 = *(undefined8 *)(*param_3 + 0x58);
  lVar14 = *(long *)(lVar5 + -8);
  lVar15 = (long)&local_70 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_70 = param_3;
  local_68 = param_1;
  FUN_100745310(0,lVar5,uVar8);
  lVar11 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar15 - uVar9;
  lVar12 = lVar13 - uVar9;
  FUN_1007427dc(0,lVar5,uVar8);
  FUN_1007442c4(lVar12);
  (**(code **)(lVar11 + 0x10))(lVar13,lVar12,lVar3);
  lVar6 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar3);
  uVar7 = local_68;
  if ((int)lVar6 == 0) {
    (**(code **)(lVar14 + 0x20))(lVar15,lVar13,lVar5);
    FUN_100748e48(param_2,lVar15);
    (**(code **)(lVar14 + 8))(lVar15,lVar5);
    (**(code **)(lVar11 + 8))(lVar12,lVar3);
    pcVar10 = *(code **)(lVar11 + 0x38);
    uVar8 = 1;
    uVar7 = local_68;
  }
  else {
    if ((int)lVar6 == 1) {
      puVar4 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,lVar5,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar5 = CONCAT71(extraout_var,OVar2.value);
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,puVar4,lVar5,"producerContinuation result ",0);
      uVar8 = local_68;
      iVar1 = *(int *)(lVar6 + 0x30);
      (**(code **)(lVar11 + 0x20))(local_68,lVar12,lVar3);
      (**(code **)(lVar11 + 0x38))(uVar8,0,1,lVar3);
      (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar13 + iVar1,lVar5);
      return;
    }
    (**(code **)(lVar11 + 0x20))(local_68,lVar12,lVar3);
    pcVar10 = *(code **)(lVar11 + 0x38);
    uVar8 = 0;
  }
  (*pcVar10)(uVar7,uVar8,1,lVar3);
  return;
}



/* Address: 0x100748e48 | FUN_100748e48 */

void FUN_100748e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *unaff_x20;
  lVar6 = *(long *)(lVar9 + 0x50);
  lVar11 = *(long *)(lVar6 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  puVar7 = &stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar8 = (long)puVar7 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(lVar8,1,1,TVar2.unknown);
  (**(code **)(lVar11 + 0x10))(puVar7,param_2,lVar6);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar14 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100efe030;
  _swift_allocObject(&DAT_100efe030,uVar13 + 8,uVar5 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(long *)(puVar1 + 0x20) = lVar6;
  uVar10 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 *)(puVar1 + 0x28) = uVar10;
  (**(code **)(lVar11 + 0x20))(puVar1 + uVar14,puVar7,lVar6);
  *(long **)(puVar1 + uVar13) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  FUN_100731e58(0,0,lVar8,&DAT_100c75fc8,puVar1);
  uVar4 = 0;
  FUN_1007427dc(0,lVar6,uVar10);
  FUN_100743578(uVar3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100748fc0 | FUN_100748fc0 */

void FUN_100748fc0(undefined8 param_1,long *param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_d0 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lVar2;
  
  lVar9 = *param_2;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  uVar15 = *(undefined8 *)(lVar9 + 0x58);
  uStack_a8 = *(undefined8 *)(lVar9 + 0x58);
  uVar16 = *(undefined8 *)(lVar9 + 0x50);
  local_b0 = uVar16;
  _swift_getAssociatedTypeWitness
            (0xff,uVar15,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar9 = 0;
  FUN_1007c3a74(0,lVar2);
  local_d0[2] = (long)local_d0 -
                (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0[0] = *(long *)(lVar2 + -8);
  uVar8 = *(long *)(local_d0[0] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0[1] = local_d0[2] - uVar8;
  lVar12 = local_d0[1] - uVar8;
  lVar3 = 0;
  local_d0[3] = lVar9;
  FUN_10074713c(0,uVar16,uVar15);
  lVar13 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar11 = (long *)(lVar12 - uVar8);
  lVar14 = (long)plVar11 - uVar8;
  lVar9 = param_2[2];
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  uVar4 = 0;
  local_b0 = param_1;
  local_70 = param_1;
  FUN_1007427dc(0,uVar16,uVar15);
  FUN_10079f534(lVar14,FUN_100749fd0,auStack_90,lVar9,uVar4,lVar3);
  (**(code **)(lVar13 + 0x10))(plVar11,lVar14,lVar3);
  puVar5 = &DAT_100fe0dd8;
  FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,puVar5,lVar2,"producerContinuation result ",0);
  plVar7 = plVar11;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(plVar11,1,lVar6);
  lVar9 = local_d0[0];
  if ((int)plVar7 != 1) {
    lVar10 = *plVar11;
    (**(code **)(local_d0[0] + 0x20))(lVar12,(long)plVar11 + (long)*(int *)(lVar6 + 0x30),lVar2);
    if (lVar10 != 0) {
      _swift_continuation_throwingResume(lVar10);
    }
    lVar6 = local_d0[1];
    (**(code **)(lVar9 + 0x10))(local_d0[1],lVar12,lVar2);
    lVar10 = local_d0[2];
    FUN_1005cfcb0(local_d0[2],lVar6,lVar2);
    FUN_10072e9c0(lVar10,local_b0,local_d0[3]);
    (**(code **)(lVar9 + 8))(lVar12,lVar2);
  }
  (**(code **)(lVar13 + 8))(lVar14,lVar3);
  return;
}



/* Address: 0x100749248 | FUN_100749248 */

void FUN_100749248(void)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  Task local_78;
  long local_70;
  long lStack_68;
  
  lVar8 = *unaff_x20;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  uStack_b8 = *(undefined8 *)(lVar8 + 0x58);
  uVar11 = *(undefined8 *)(lVar8 + 0x50);
  local_c0 = uVar11;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  RVar1 = Swift::Result::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar2.value);
  lVar9 = (long)&local_c0 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1007c3a74(0,lVar8);
  lVar10 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = unaff_x20[2];
  uStack_88 = uStack_b8;
  local_90 = local_c0;
  uVar4 = 0;
  FUN_1007427dc(0,uVar11,uVar7);
  uVar5 = 0;
  FUN_100748620(0,uVar11,uVar7);
  FUN_10079f534(&local_78,FUN_100749f04,auStack_a0,lVar6,uVar4,uVar5);
  if (local_78.unknown != (undefined *)0x0) {
    Swift::Task::cancel(local_78);
    if (local_70 != 0) {
      _swift_continuation_throwingResume(local_70);
    }
    if (lStack_68 != 0) {
      (**(code **)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x38))
                (lVar9,1,1,CONCAT71(extraout_var,RVar1.value));
      FUN_1005cfcb0(lVar10,lVar9,lVar8);
      FUN_10072e9c0(lVar10,lStack_68,lVar3);
    }
    _swift_release(local_78.unknown);
  }
  return;
}



/* Address: 0x100749420 | FUN_100749420 */

void FUN_100749420(void)

{
  undefined *puVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined7 extraout_var_01;
  undefined8 in_x3;
  long *in_x4;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = in_x3;
  *(long **)(unaff_x22 + 0xf8) = in_x4;
  lVar7 = *in_x4;
  uVar10 = *(undefined8 *)(lVar7 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar10;
  lVar9 = *(long *)(lVar7 + 0x50);
  *(long *)(unaff_x22 + 0x108) = lVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x110) = lVar7;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x118) = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar3.value);
  *(long *)(unaff_x22 + 0x120) = lVar8;
  uVar4 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar4;
  lVar5 = 0;
  FUN_1007c3a74(0,lVar8);
  *(long *)(unaff_x22 + 0x130) = lVar5;
  lVar8 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  lVar8 = 0;
  FUN_10074620c(0,lVar9,uVar10);
  *(long *)(unaff_x22 + 0x150) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x158) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x170) = CONCAT71(extraout_var_01,OVar3.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x178) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x188) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  lVar7 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x198) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar4;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar9,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x1a8) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x1b0) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar4;
  _swift_task_switch(FUN_100749620,0,0);
  return;
}



/* Address: 0x100749620 | FUN_100749620 */

void FUN_100749620(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  (**(code **)(*(long *)(unaff_x22 + 0x198) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0xf0),
             *(undefined8 *)(unaff_x22 + 0x108));
  Swift::AsyncSequence::_makeAsyncIterator();
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = 0;
  FUN_1007427dc();
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar2;
  FUN_10079f534(unaff_x22 + 0x1e0,FUN_10074a140,unaff_x22 + 0xb0,uVar4,uVar2,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  if (*(char *)(unaff_x22 + 0x1e0) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100749778;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_100749e24();
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
             *(undefined8 *)(unaff_x22 + 0x1a8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100749844;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100749778 | FUN_100749778 */

void FUN_100749778(void)

{
  _swift_task_switch(FUN_1007497c0,0,0);
  return;
}



/* Address: 0x1007497c0 | FUN_1007497c0 */

void FUN_1007497c0(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
             *(undefined8 *)(unaff_x22 + 0x1a8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100749844;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100749844 | FUN_100749844 */

void FUN_100749844(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007498a8;
  }
  else {
    pcVar1 = FUN_100749ca4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007498a8 | FUN_1007498a8 */

void FUN_1007498a8(void)

{
  long lVar1;
  undefined8 uVar2;
  UnsafeContinuation UVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar4 = *(long *)(unaff_x22 + 0x188);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = uVar2;
  (**(code **)(lVar4 + 0x30))(uVar2,1,uVar10);
  if ((int)uVar6 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x170));
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
    uVar2 = 0;
    FUN_100745440(0,uVar7,uVar10);
    FUN_10079f534(unaff_x22 + 0xa8,FUN_10074a1e0,unaff_x22 + 0xd0,uVar6,uVar12,uVar2);
    uVar8 = *(ulong *)(unaff_x22 + 0xa8);
    lVar4 = *(long *)(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
    if (1 < uVar8) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
      (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x118) + -8) + 0x38))(uVar10,1,1);
      FUN_1005cfcb0(uVar11,uVar10,uVar7);
      FUN_10072e9c0(uVar11,uVar8,uVar12);
    }
    (**(code **)(lVar4 + 8))(uVar2,uVar6);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar7 = *(undefined8 *)(unaff_x22 + 400);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100749a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x158);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x130);
  auVar15 = *(undefined1 (*) [16])(unaff_x22 + 0x100);
  (**(code **)(lVar4 + 0x20))(uVar13,uVar2,uVar10);
  auVar15 = NEON_ext(auVar15,auVar15,8,1);
  *(long *)(unaff_x22 + 0x98) = auVar15._8_8_;
  *(long *)(unaff_x22 + 0x90) = auVar15._0_8_;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
  FUN_10079f534(uVar9,FUN_10074a230,unaff_x22 + 0x80,uVar6,uVar11,uVar7);
  (**(code **)(lVar1 + 0x10))(uVar12,uVar9,uVar7);
  UVar3 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,UVar3.unknown,uVar14,"continuation result ",0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(uVar12,1,lVar4);
  if ((int)uVar12 != 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar1 = *(long *)(unaff_x22 + 0x138);
    uVar12 = **(undefined8 **)(unaff_x22 + 0x160);
    (**(code **)(lVar1 + 0x20))
              (uVar10,(long)*(undefined8 **)(unaff_x22 + 0x160) + (long)*(int *)(lVar4 + 0x30),uVar6
              );
    (**(code **)(lVar1 + 0x10))(uVar2,uVar10,uVar6);
    FUN_10072e9c0(uVar2,uVar12,uVar6);
    (**(code **)(lVar1 + 8))(uVar10,uVar6);
  }
  lVar4 = *(long *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
            (*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x150));
  (**(code **)(lVar4 + 8))(uVar2,uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = 0;
  FUN_1007427dc();
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar2;
  FUN_10079f534(unaff_x22 + 0x1e0,FUN_10074a140,unaff_x22 + 0xb0,uVar6,uVar2,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  if ((*(byte *)(unaff_x22 + 0x1e0) & 1) != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100749778;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_100749e24();
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
             *(undefined8 *)(unaff_x22 + 0x1a8),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100749844;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100749ca4 | FUN_100749ca4 */

void FUN_100749ca4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0x1b0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1a8));
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  uVar10 = 0;
  FUN_100745440(0,uVar5,uVar2);
  FUN_10079f534(unaff_x22 + 0x78,FUN_10074a18c,unaff_x22 + 0x50,uVar1,uVar6,uVar10);
  lVar7 = *(long *)(unaff_x22 + 0x78);
  if ((lVar7 == 0) || (lVar7 == 1)) {
    _swift_errorRelease();
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x128);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar4 = *(long *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    *puVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    _swift_storeEnumTagMultiPayload(puVar3,lVar4,1);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar3,0,1,lVar4);
    FUN_1005cfcb0(uVar6,puVar3,uVar2);
    FUN_10072e9c0(uVar6,lVar7,uVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100749e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100749e24 | FUN_100749e24 */

void FUN_100749e24(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_41;
  
  lVar3 = *param_2;
  lVar4 = param_2[2];
  uVar5 = *(undefined8 *)(lVar3 + 0x58);
  uStack_58 = *(undefined8 *)(lVar3 + 0x58);
  uVar6 = *(undefined8 *)(lVar3 + 0x50);
  uVar1 = 0;
  local_60 = uVar6;
  local_50 = param_1;
  FUN_1007427dc(0,uVar6,uVar5);
  uVar2 = 0;
  FUN_100745380(0,uVar6,uVar5);
  FUN_10079f534(&local_41,FUN_10074a284,auStack_70,lVar4,uVar1,uVar2);
  if (local_41 == '\x01') {
    _swift_continuation_throwingResume(param_1);
  }
  return;
}



/* Address: 0x100749ed0 | FUN_100749ed0 */

void FUN_100749ed0(void)

{
  long unaff_x20;
  
  FUN_100749248();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100749ef8 | FUN_100749ef8 */

void FUN_100749ef8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100749f04 | FUN_100749f04 */

void FUN_100749f04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  FUN_1007427dc();
  FUN_100744f70();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100749f50 | FUN_100749f50 */

void FUN_100749f50(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007487b4(plVar1,param_1);
  return;
}



/* Address: 0x100749fac | thunk_FUN_100749248 */

void thunk_FUN_100749248(void)

{
  FUN_100749248();
  return;
}



/* Address: 0x100749fb0 | FUN_100749fb0 */

void FUN_100749fb0(void)

{
  FUN_100748bf0();
  return;
}



/* Address: 0x100749fc8 | FUN_100749fc8 */

void FUN_100749fc8(void)

{
  FUN_100748fc0();
  return;
}



/* Address: 0x100749fd0 | FUN_100749fd0 */

void FUN_100749fd0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10074490c(param_1,uVar2,uVar1);
  return;
}



/* Address: 0x10074a024 | FUN_10074a024 */

void FUN_10074a024(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10074a09c | FUN_10074a09c */

void FUN_10074a09c(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_100749420(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x10074a140 | FUN_10074a140 */

void FUN_10074a140(byte *param_1)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100743738();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x10074a18c | FUN_10074a18c */

void FUN_10074a18c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100744008(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x10074a1e0 | FUN_10074a1e0 */

void FUN_10074a1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0;
  FUN_100744008(0,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x10074a230 | FUN_10074a230 */

void FUN_10074a230(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100743b7c(param_1,uVar2,uVar1);
  return;
}



/* Address: 0x10074a284 | FUN_10074a284 */

void FUN_10074a284(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_1007427dc(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1007438e0(uVar2,uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Address: 0x10074a2d8 | FUN_10074a2d8 */

void FUN_10074a2d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1007427dc(0,lVar3,uVar1);
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar4,param_1,lVar3);
  FUN_1007434fc(lVar5,puVar4,param_2,lVar3,uVar1);
  lVar3 = lVar5;
  FUN_10079f660(lVar5,lVar2);
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  unaff_x20[2] = lVar3;
  return;
}



/* Address: 0x10074a3c4 | FUN_10074a3c4 */

void FUN_10074a3c4(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_10074a2d8(param_1,param_2);
  return;
}



/* Address: 0x10074a40c | FUN_10074a40c */

void FUN_10074a40c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_10074af2c(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c75ff0;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x10074a480 | FUN_10074a480 */

long * FUN_10074a480(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar4 & 0xfffffffffffffff8) + 0x11) {
    uVar6 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074a568;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_10074a568:
  if (uVar6 == 2) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
    _swift_retain();
  }
  else if (uVar6 == 1) {
    lVar2 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar2;
    uVar8 = *(undefined8 *)(param_2 + 2);
    param_1[2] = *(long *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain(lVar2);
    _swift_retain(uVar8);
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = *puVar3;
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar5 = uVar8;
  return param_1;
}



/* Address: 0x10074a620 | FUN_10074a620 */

undefined8 * FUN_10074a620(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074a6c4;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_10074a6c4:
  if (uVar6 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
    _swift_retain();
  }
  else if (uVar6 == 1) {
    uVar10 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar10;
    uVar8 = *(undefined8 *)(param_2 + 2);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain(uVar10);
    _swift_retain(uVar8);
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = *puVar3;
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar5 = uVar8;
  return param_1;
}



/* Address: 0x10074a77c | FUN_10074a77c */

uint * FUN_10074a77c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar2 = *(ulong *)(lVar10 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  if (param_1 == param_2) goto LAB_10074a968;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar1;
  uVar9 = (uint)uVar2;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074a82c;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074a82c:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_10074a868:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_10074a868;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar8);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074a8e0;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074a8e0:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
    _swift_retain();
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
    _swift_retain(uVar7);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_10074a968:
  puVar3 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar7 = *puVar3;
  puVar6 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8);
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar6 = uVar7;
  return param_1;
}



/* Address: 0x10074a9a4 | FUN_10074a9a4 */

void FUN_10074a9a4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074aa44;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_10074aa44:
  if (uVar6 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else if (uVar6 == 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else if (uVar6 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar4 + 1);
  }
  puVar3 = (undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar8 = *puVar3;
  puVar5 = (undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8);
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar5 = uVar8;
  return;
}



/* Address: 0x10074aaec | FUN_10074aaec */

uint * FUN_10074aaec(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar2 = *(ulong *)(lVar10 + 0x40);
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  if (param_1 == param_2) goto LAB_10074acc0;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar1;
  uVar9 = (uint)uVar2;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074ab9c;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074ab9c:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_10074abd8:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_10074abd8;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar8);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074ac50;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074ac50:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
  }
  else if (uVar4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar7;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_10074acc0:
  puVar3 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar7 = *puVar3;
  puVar6 = (undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8);
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar6 = uVar7;
  return param_1;
}


