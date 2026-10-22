/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100725130 | FUN_100725130 */

undefined1  [16] FUN_100725130(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_70 [32];
  long local_50;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_50 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x28);
    lVar2 = 0x13f;
    _swift_getAssociatedTypeWitness();
    if (uVar3 < 0x40) {
      puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
      _swift_getTupleTypeLayout2(auStack_70,*(long *)(lVar2 + -8) + 0x40,puVar1);
      local_38 = &DAT_100c74e98;
      local_48 = auStack_70;
      puStack_40 = puVar1;
      _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_50);
      lVar2 = 0;
      uVar4 = 0;
      goto LAB_1007251ec;
    }
  }
  uVar4 = 0x3f;
LAB_1007251ec:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x100725204 | FUN_100725204 */

long * FUN_100725204(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar5 = *(ulong *)(lVar6 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar1 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar1 + 0x40);
  uVar2 = (lVar7 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar3 = *(uint *)(lVar1 + 0x50) | *(uint *)(lVar6 + 0x50);
  if ((uVar3 & 0x1000f8) == 0 && uVar2 + 1 < 0x19) {
    uVar3 = (uint)*(byte *)((long)param_2 + uVar2);
    if (3 < *(byte *)((long)param_2 + uVar2)) {
      uVar3 = (int)*param_2 + 4;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
        *(undefined1 *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
      (**(code **)(lVar1 + 0x10))(param_1,param_2);
      lVar1 = *(long *)((long)param_2 + lVar7 + 7 & 0xfffffffffffffff8);
      *(long *)((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8) = lVar1;
      *(undefined1 *)((long)param_1 + uVar2) = 1;
    }
    else if (uVar3 == 2) {
      lVar1 = *param_2;
      *param_1 = lVar1;
      *(undefined1 *)((long)param_1 + uVar2) = 2;
    }
    else {
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      lVar1 = param_2[2];
      param_1[2] = lVar1;
      *(undefined1 *)((long)param_1 + uVar2) = 3;
      _swift_retain();
    }
  }
  else {
    uVar2 = (ulong)(uVar3 & 0xf8 | 7);
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar1);
  return param_1;
}



/* Address: 0x10072538c | FUN_10072538c */

void FUN_10072538c(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(lVar8 + -8);
  uVar11 = *(ulong *)(lVar9 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar1 = (lVar10 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar6 = (uint)bVar2;
  if (3 < bVar2) {
    uVar5 = (uint)uVar1;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100725470;
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
    uVar6 = uVar7 | bVar2 - 4 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 4;
  }
LAB_100725470:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100725498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 8))(param_1,lVar8);
      return;
    }
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1);
    uVar4 = *(undefined8 *)((ulong)((long)param_1 + lVar10 + 7) & 0xfffffffffffffff8);
  }
  else if (uVar6 == 2) {
    uVar4 = *(undefined8 *)param_1;
  }
  else {
    _swift_release(*(undefined8 *)param_1,lVar3);
    uVar4 = *(undefined8 *)(param_1 + 4);
  }
  _swift_release(uVar4);
  return;
}



/* Address: 0x1007254ec | FUN_1007254ec */

undefined8 * FUN_1007254ec(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar1 = (lVar11 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (3 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007255d4;
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
    uVar5 = uVar6 | bVar2 - 4 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1007255d4:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar7);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2);
    uVar4 = *(undefined8 *)((ulong)((long)param_2 + lVar11 + 7) & 0xfffffffffffffff8);
    *(undefined8 *)((long)param_1 + lVar11 + 7 & 0xfffffffffffffff8) = uVar4;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else if (uVar5 == 2) {
    uVar4 = *(undefined8 *)param_2;
    *param_1 = uVar4;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar4;
    *(undefined1 *)((long)param_1 + uVar1) = 3;
    _swift_retain();
  }
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x100725690 | FUN_100725690 */

uint * FUN_100725690(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  uVar1 = (lVar11 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar6 = (uint)bVar3;
  uVar8 = (uint)uVar1;
  if (bVar3 < 4) {
LAB_10072577c:
    if (1 < (int)uVar6) goto LAB_1007257e4;
LAB_100725784:
    if (uVar6 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar4);
      uVar5 = *(undefined8 *)((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8);
      goto LAB_100725800;
    }
    (**(code **)(lVar10 + 8))(param_1,lVar7);
  }
  else {
    uVar2 = 4;
    if (uVar8 < 4) {
      uVar2 = uVar8;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_10072577c;
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
    if (3 < uVar8) {
      uVar6 = uVar6 + 4;
      goto LAB_10072577c;
    }
    uVar6 = (uVar6 | bVar3 - 4 << (ulong)((uVar8 & 3) << 3)) + 4;
    if ((int)uVar6 < 2) goto LAB_100725784;
LAB_1007257e4:
    if (uVar6 == 2) {
      uVar5 = *(undefined8 *)param_1;
    }
    else {
      _swift_release(*(undefined8 *)param_1);
      uVar5 = *(undefined8 *)(param_1 + 4);
    }
LAB_100725800:
    _swift_release(uVar5);
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar3;
  if (3 < bVar3) {
    uVar2 = 4;
    if (uVar8 < 4) {
      uVar2 = uVar8;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x000100725874;
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
    if (uVar8 < 4) {
      uVar6 = (uVar6 | bVar3 - 4 << (ulong)((uVar8 & 3) << 3)) + 4;
    }
    else {
      uVar6 = uVar6 + 4;
    }
  }
joined_r0x000100725874:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar7);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar4);
    uVar5 = *(undefined8 *)((ulong)((long)param_2 + lVar11 + 7) & 0xfffffffffffffff8);
    *(undefined8 *)((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8) = uVar5;
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else if (uVar6 == 2) {
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar5;
    *(byte *)((long)param_1 + uVar1) = 2;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(byte *)((long)param_1 + uVar1) = 3;
    _swift_retain();
  }
  _swift_retain(uVar5);
  return param_1;
}



/* Address: 0x100725960 | FUN_100725960 */

undefined8 * FUN_100725960(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar1 = (lVar11 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (3 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100725a48;
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
    uVar5 = uVar6 | bVar2 - 4 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_100725a48:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar7);
      uVar4 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      *(undefined8 *)((long)param_1 + lVar11 + 7 & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)((long)param_2 + lVar11 + 7) & 0xfffffffffffffff8);
      uVar4 = 1;
    }
  }
  else if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar4 = 2;
  }
  else {
    uVar12 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar12;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    uVar4 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar4;
  return param_1;
}



/* Address: 0x100725af0 | FUN_100725af0 */

uint * FUN_100725af0(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar7 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  uVar1 = (lVar11 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar6 = (uint)bVar5;
  uVar8 = (uint)uVar1;
  if (bVar5 < 4) {
LAB_100725bdc:
    if (1 < (int)uVar6) goto LAB_100725c44;
LAB_100725be4:
    if (uVar6 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar3);
      uVar4 = *(undefined8 *)((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8);
      goto LAB_100725c60;
    }
    (**(code **)(lVar10 + 8))(param_1,lVar7);
  }
  else {
    uVar2 = 4;
    if (uVar8 < 4) {
      uVar2 = uVar8;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_100725bdc;
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
    if (3 < uVar8) {
      uVar6 = uVar6 + 4;
      goto LAB_100725bdc;
    }
    uVar6 = (uVar6 | bVar5 - 4 << (ulong)((uVar8 & 3) << 3)) + 4;
    if ((int)uVar6 < 2) goto LAB_100725be4;
LAB_100725c44:
    if (uVar6 == 2) {
      uVar4 = *(undefined8 *)param_1;
    }
    else {
      _swift_release(*(undefined8 *)param_1);
      uVar4 = *(undefined8 *)(param_1 + 4);
    }
LAB_100725c60:
    _swift_release(uVar4);
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar5;
  if (3 < bVar5) {
    uVar2 = 4;
    if (uVar8 < 4) {
      uVar2 = uVar8;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto joined_r0x000100725cd4;
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
    if (uVar8 < 4) {
      uVar6 = (uVar6 | bVar5 - 4 << (ulong)((uVar8 & 3) << 3)) + 4;
    }
    else {
      uVar6 = uVar6 + 4;
    }
  }
joined_r0x000100725cd4:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar7);
      bVar5 = 0;
    }
    else {
      (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar3);
      *(undefined8 *)((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)((long)param_2 + lVar11 + 7) & 0xfffffffffffffff8);
      bVar5 = 1;
    }
  }
  else if (uVar6 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar5 = 2;
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    bVar5 = 3;
  }
  *(byte *)((long)param_1 + uVar1) = bVar5;
  return param_1;
}



/* Address: 0x100725da4 | FUN_100725da4 */

int FUN_100725da4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar1 = (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_100725ea0;
  uVar8 = uVar1 + 1;
  uVar6 = (uint)uVar8;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_100725ea0;
      goto LAB_100725e2c;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_100725e2c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return ((uint)uVar8 | uVar2) + 0xfd;
  }
LAB_100725ea0:
  iVar4 = 0;
  if (3 < *(byte *)((long)param_1 + uVar1)) {
    iVar4 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar4;
}



/* Address: 0x100725f08 | FUN_100725f08 */

void FUN_100725f08(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  byte bVar9;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar1 = (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  sVar2 = uVar1 + 1;
  uVar6 = (uint)sVar2;
  if (param_3 < 0xfd) {
    bVar9 = 0;
  }
  else if (uVar6 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar6 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar3) {
      bVar9 = 4;
    }
    if (uVar3 < 0x100) {
      bVar9 = 1 < uVar3;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar6 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar8;
    }
  }
  return;
}



/* Address: 0x1007260ec | FUN_1007260ec */

uint FUN_1007260ec(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar1 = (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar3 = (uint)bVar2;
  if (3 < bVar2) {
    uVar5 = (uint)uVar1;
    uVar6 = 4;
    if (uVar5 < 4) {
      uVar6 = uVar5;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return uVar3;
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
    uVar3 = uVar6 | bVar2 - 4 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar6;
    }
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}



/* Address: 0x1007261cc | FUN_1007261cc */

void FUN_1007261cc(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_2 < 4) {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    uVar1 = (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar5 = *(ulong *)(*(long *)(lVar7 + -8) + 0x40);
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (uVar1 < 0x19) {
      uVar1 = 0x18;
    }
    *(char *)((long)param_1 + uVar1) = (char)param_2;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    uVar1 = (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (uVar1 < 0x19) {
      uVar1 = 0x18;
    }
    param_2 = param_2 - 4;
    uVar6 = (uint)uVar1;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x04';
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar1);
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
      *(undefined1 *)((long)param_1 + uVar1) = 4;
      _bzero(param_1,uVar1);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10072632c | thunk_FUN_1007249cc */

void thunk_FUN_1007249cc(void)

{
  thunk_FUN_1007249cc();
  return;
}



/* Address: 0x100726330 | thunk_FUN_100722448 */

void thunk_FUN_100722448(void)

{
  thunk_FUN_100722448();
  return;
}



/* Address: 0x100726334 | thunk_FUN_100721dcc */

void thunk_FUN_100721dcc(void)

{
  thunk_FUN_100721dcc();
  return;
}



/* Address: 0x100726338 | thunk_FUN_10072293c */

void thunk_FUN_10072293c(void)

{
  thunk_FUN_10072293c();
  return;
}



/* Address: 0x10072633c | thunk_FUN_100722f3c */

void thunk_FUN_100722f3c(void)

{
  thunk_FUN_100722f3c();
  return;
}



/* Address: 0x100726340 | thunk_FUN_100723874 */

void thunk_FUN_100723874(void)

{
  thunk_FUN_100723874();
  return;
}



/* Address: 0x100726344 | thunk_FUN_100723e44 */

void thunk_FUN_100723e44(void)

{
  thunk_FUN_100723e44();
  return;
}



/* Address: 0x100726348 | thunk_FUN_100724740 */

void thunk_FUN_100724740(void)

{
  thunk_FUN_100724740();
  return;
}



/* Address: 0x10072634c | FUN_10072634c */

void FUN_10072634c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10072638c(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100726388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10072638c | FUN_10072638c */

void FUN_10072638c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100726398 | FUN_100726398 */

void FUN_100726398(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10072638c(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001007263d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1007263dc | FUN_1007263dc */

void FUN_1007263dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  uVar2 = 0;
  FUN_10072638c(0,param_3,param_4,param_5);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  return;
}



/* Address: 0x100726470 | FUN_100726470 */

void FUN_100726470(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  ulong uVar6;
  ulong uVar7;
  undefined7 extraout_var_00;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar4,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar3.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar6;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar6;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar6;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x98) = CONCAT71(extraout_var_00,OVar3.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar6;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar6;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar11,puVar2,puVar1);
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar6;
  lVar4 = 0;
  FUN_10072638c(0,uVar11,uVar9,uVar10);
  *(long *)(unaff_x22 + 0xf8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar6;
  _swift_task_switch(FUN_1007266b8,0,0);
  return;
}



/* Address: 0x1007266b8 | FUN_1007266b8 */

void FUN_1007266b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 0x10))(uVar14,*(undefined8 *)(unaff_x22 + 0x20),uVar1)
  ;
  _swift_getEnumCaseMultiPayload(uVar14,uVar1);
  if ((int)uVar14 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0xe0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0x110),uVar1);
    _swift_getAssociatedConformanceWitness
              (uVar14,uVar10,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100726948;
  }
  else {
    if ((int)uVar14 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x48));
      uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar10 = *(undefined8 *)(unaff_x22 + 200);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
      _swift_task_dealloc(uVar1);
      _swift_task_dealloc(uVar19);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar18);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar17);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100726944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar15 = *(long *)(unaff_x22 + 0x110);
    lVar2 = *(long *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar8 = 0;
    _swift_getTupleTypeMetadata2(0,uVar16,uVar17,0,0);
    *(long *)(unaff_x22 + 0x138) = lVar8;
    iVar7 = *(int *)(lVar8 + 0x30);
    pcVar11 = *(code **)(lVar2 + 0x20);
    *(code **)(unaff_x22 + 0x140) = pcVar11;
    (*pcVar11)(uVar1,lVar15,uVar16);
    pcVar11 = *(code **)(lVar3 + 0x20);
    *(code **)(unaff_x22 + 0x148) = pcVar11;
    (*pcVar11)(uVar14,lVar15 + iVar7,uVar17);
    _swift_getAssociatedConformanceWitness
              (uVar19,uVar10,uVar17,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x150) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100726dd0;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100726948 | FUN_100726948 */

void FUN_100726948(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007269ac;
  }
  else {
    pcVar1 = FUN_1007274fc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007269ac | FUN_1007269ac */

void FUN_1007269ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar9 = *(long *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = uVar1;
  (**(code **)(lVar9 + 0x30))(uVar1,1,uVar15);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar4 = *(long *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar5 = *(long *)(unaff_x22 + 0xe0);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar9 = *(long *)(unaff_x22 + 0xa0);
    lVar16 = *(long *)(unaff_x22 + 0x68);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar5 + 8))(uVar13,uVar3);
    (**(code **)(lVar9 + 8))(uVar1,uVar8);
    (**(code **)(lVar4 + 8))(uVar18,uVar2);
    _swift_storeEnumTagMultiPayload(uVar18,uVar2,2);
    (**(code **)(lVar16 + 0x38))(uVar19,1,1,uVar15);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100726b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar16 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(lVar9 + 0x20))(uVar19,uVar1,uVar15);
  (**(code **)(lVar9 + 0x10))(uVar8,uVar19,uVar15);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar4 + 8))(lVar16,uVar2);
  lVar9 = 0;
  _swift_getTupleTypeMetadata2(0,uVar3,uVar18,0,0);
  iVar7 = *(int *)(lVar9 + 0x30);
  (**(code **)(lVar5 + 0x10))(lVar16,uVar13,uVar3);
  (**(code **)(lVar6 + 0x10))(lVar16 + iVar7,uVar14,uVar18);
  _swift_storeEnumTagMultiPayload(lVar16,uVar2,1);
  plVar10 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100726c48;
  FUN_100726470(plVar10,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x100726c48 | FUN_100726c48 */

void FUN_100726c48(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100726cac;
  }
  else {
    pcVar1 = FUN_10072762c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100726cac | FUN_100726cac */

void FUN_100726cac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar3 = *(long *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar13 = *(long *)(unaff_x22 + 0xb8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar13 + 8))(uVar11,uVar12);
  (**(code **)(lVar3 + 8))(uVar10,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100726dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100726dd0 | FUN_100726dd0 */

void FUN_100726dd0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100726e34;
  }
  else {
    pcVar1 = FUN_100727788;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100726e34 | FUN_100726e34 */

void FUN_100726e34(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar16);
  if ((int)uVar8 == 1) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
    _swift_getAssociatedConformanceWitness
              (uVar8,uVar16,uVar17,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x160) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100727084;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  pcVar2 = *(code **)(unaff_x22 + 0x140);
  pcVar4 = *(code **)(unaff_x22 + 0x148);
  lVar14 = *(long *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar5 = *(long *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar21 = *(long *)(unaff_x22 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar18 = *(code **)(lVar3 + 0x20);
  (*pcVar18)(uVar17,uVar1,uVar16);
  (**(code **)(lVar5 + 8))(lVar21,uVar8);
  iVar7 = *(int *)(lVar14 + 0x30);
  (*pcVar2)(lVar21,uVar10,uVar11);
  (*pcVar4)(lVar21 + iVar7,uVar15,uVar6);
  _swift_storeEnumTagMultiPayload(lVar21,uVar8,1);
  (*pcVar18)(uVar19,uVar17,uVar16);
  (**(code **)(lVar3 + 0x38))(uVar19,0,1,uVar16);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100727080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100727084 | FUN_100727084 */

void FUN_100727084(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007270e8;
  }
  else {
    pcVar1 = FUN_1007278c8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007270e8 | FUN_1007270e8 */

void FUN_1007270e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar17 = *(long *)(unaff_x22 + 0xb8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = uVar12;
  (**(code **)(lVar17 + 0x30))(uVar12,1,uVar11);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar1 = *(long *)(unaff_x22 + 0x100);
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    lVar10 = *(long *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar17 + 8))(uVar2,uVar13);
    (**(code **)(lVar3 + 8))(uVar12,uVar11);
    (**(code **)(lVar1 + 8))(uVar16,uVar4);
    _swift_storeEnumTagMultiPayload(uVar16,uVar4,2);
    (**(code **)(lVar10 + 0x38))(uVar9,1,1,uVar8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010072727c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(lVar17 + 0x20))(uVar4,uVar12,uVar11);
  (**(code **)(lVar3 + 0x10))(uVar8,uVar9,uVar15);
  (**(code **)(lVar17 + 0x10))(uVar13,uVar4,uVar11);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_storeEnumTagMultiPayload(uVar8,uVar16,1);
  (**(code **)(lVar1 + 0x28))(uVar2,uVar8,uVar16);
  plVar5 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100727378;
  FUN_100726470(plVar5,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x100727378 | FUN_100727378 */

void FUN_100727378(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007273dc;
  }
  else {
    pcVar1 = FUN_100727a08;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007273dc | FUN_1007273dc */

void FUN_1007273dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar2 + 8))(uVar5,uVar13);
  (**(code **)(lVar1 + 8))(uVar4,uVar12);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001007274f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007274fc | FUN_1007274fc */

void FUN_1007274fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0xd8));
  (**(code **)(lVar8 + 8))(uVar16,uVar2);
  _swift_storeEnumTagMultiPayload(uVar16,uVar2,2);
  _swift_willThrow();
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100727628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072762c | FUN_10072762c */

void FUN_10072762c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar15 = *(long *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar15 + 8))(uVar14,uVar13);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar15 = *(long *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0xd8));
  (**(code **)(lVar15 + 8))(uVar16,uVar14);
  _swift_storeEnumTagMultiPayload(uVar16,uVar14,2);
  _swift_willThrow();
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100727784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100727788 | FUN_100727788 */

void FUN_100727788(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xd8));
  (**(code **)(lVar8 + 8))(uVar16,uVar2);
  _swift_storeEnumTagMultiPayload(uVar16,uVar2,2);
  _swift_willThrow();
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001007278c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007278c8 | FUN_1007278c8 */

void FUN_1007278c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xd8));
  (**(code **)(lVar8 + 8))(uVar16,uVar2);
  _swift_storeEnumTagMultiPayload(uVar16,uVar2,2);
  _swift_willThrow();
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100727a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100727a08 | FUN_100727a08 */

void FUN_100727a08(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar1 + 8))(uVar6,uVar15);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar1 = *(long *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xd8));
  (**(code **)(lVar1 + 8))(uVar16,uVar15);
  _swift_storeEnumTagMultiPayload(uVar16,uVar15,2);
  _swift_willThrow();
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100727b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100727b60 | FUN_100727b60 */

void FUN_100727b60(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100726470(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100727bc8 | FUN_100727bc8 */

void FUN_100727bc8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_1007263dc(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),lVar1,uVar2,
                *(undefined8 *)(param_2 + 0x20));
  return;
}



/* Address: 0x100727ca0 | FUN_100727ca0 */

void FUN_100727ca0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74ed8,param_1);
  return;
}



/* Address: 0x100727cb0 | FUN_100727cb0 */

void FUN_100727cb0(long param_1)

{
  FUN_100727bc8();
                    /* WARNING: Could not recover jumptable at 0x000100727cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100727ce0 | FUN_100727ce0 */

void FUN_100727ce0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100727cec | FUN_100727cec */

void FUN_100727cec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_10072638c(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x100727d5c | FUN_100727d5c */

void FUN_100727d5c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100727d68 | FUN_100727d68 */

void FUN_100727d68(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_70 [32];
  long local_50;
  undefined1 *local_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar4 = 0x13f;
  uVar7 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if (uVar7 < 0x40) {
    lVar4 = *(long *)(lVar4 + -8) + 0x40;
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar5 = 0xff;
    local_50 = lVar4;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar6 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar7,uVar5,puVar3,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    if (uVar7 < 0x40) {
      _swift_getTupleTypeLayout2(auStack_70,lVar4,*(long *)(lVar6 + -8) + 0x40);
      local_48 = auStack_70;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_50);
    }
  }
  return;
}



/* Address: 0x100727e60 | thunk_FUN_100727e64 */

long * thunk_FUN_100727e64(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  uVar14 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar17 + 0x50);
  uVar13 = uVar14 & 0xff;
  if ((7 < uVar13 || (uVar14 & 0x100000) != 0) || 0x18 < uVar2 + 1) {
    lVar8 = *(long *)param_2;
    *param_1 = lVar8;
    _swift_retain();
    return (long *)(lVar8 + ((ulong)uVar13 + 0x10 & ((ulong)uVar13 ^ 0xffffffffffffffff)));
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100727fd4;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_100727fd4:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x10))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      plVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return plVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100727e64 | FUN_100727e64 */

long * FUN_100727e64(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  uVar14 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar17 + 0x50);
  uVar13 = uVar14 & 0xff;
  if ((7 < uVar13 || (uVar14 & 0x100000) != 0) || 0x18 < uVar2 + 1) {
    lVar8 = *(long *)param_2;
    *param_1 = lVar8;
    _swift_retain();
    return (long *)(lVar8 + ((ulong)uVar13 + 0x10 & ((ulong)uVar13 ^ 0xffffffffffffffff)));
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100727fd4;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_100727fd4:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x10))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      plVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return plVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100728080 | thunk_FUN_100728084 */

void thunk_FUN_100728084(uint *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar7 + -8);
  uVar17 = *(ulong *)(lVar16 + 0x40);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar14,uVar8,puVar6,puVar5);
  lVar15 = *(long *)(lVar9 + -8);
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar1 = (uVar17 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  if (uVar1 <= uVar17) {
    uVar1 = uVar17;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar11 = (uint)uVar1;
    uVar13 = 4;
    if (uVar11 < 4) {
      uVar13 = uVar11;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007281ac;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar12 = uVar13 | bVar4 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_1007281ac:
  if (uVar12 == 1) {
    (**(code **)(lVar16 + 8))(param_1,lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    param_1 = (uint *)((ulong)(uVar17 + uVar10 + (long)param_1) & ~uVar10);
  }
  else {
    if (uVar12 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
    lVar9 = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x000100728208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar9);
  return;
}



/* Address: 0x100728084 | FUN_100728084 */

void FUN_100728084(uint *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar7 + -8);
  uVar17 = *(ulong *)(lVar16 + 0x40);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar14,uVar8,puVar6,puVar5);
  lVar15 = *(long *)(lVar9 + -8);
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar1 = (uVar17 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  if (uVar1 <= uVar17) {
    uVar1 = uVar17;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar11 = (uint)uVar1;
    uVar13 = 4;
    if (uVar11 < 4) {
      uVar13 = uVar11;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007281ac;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar12 = uVar13 | bVar4 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_1007281ac:
  if (uVar12 == 1) {
    (**(code **)(lVar16 + 8))(param_1,lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    param_1 = (uint *)((ulong)(uVar17 + uVar10 + (long)param_1) & ~uVar10);
  }
  else {
    if (uVar12 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
    lVar9 = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x000100728208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar9);
  return;
}



/* Address: 0x100728228 | thunk_FUN_10072822c */

void * thunk_FUN_10072822c(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100728358;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_100728358:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x10))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      pvVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return pvVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x10072822c | FUN_10072822c */

void * FUN_10072822c(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100728358;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_100728358:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x10))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      pvVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return pvVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100728408 | thunk_FUN_10072840c */

uint * thunk_FUN_10072840c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,uVar9,puVar7,puVar6);
  lVar16 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar16 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_1 + uVar2);
  uVar14 = (uint)bVar5;
  uVar15 = (uint)uVar2;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728544;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728544:
  uVar12 = ~uVar12;
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
    (**(code **)(lVar16 + 8))((ulong)(uVar1 + (long)param_1) & uVar12,lVar10);
  }
  else if (uVar14 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar14 = (uint)bVar5;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728600;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728600:
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar16 + 0x10))
              ((ulong)(uVar1 + (long)param_1) & uVar12,(ulong)(uVar1 + (long)param_2) & uVar12,
               lVar10);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar14 != 0) {
      puVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x10072840c | FUN_10072840c */

uint * FUN_10072840c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,uVar9,puVar7,puVar6);
  lVar16 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar16 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_1 + uVar2);
  uVar14 = (uint)bVar5;
  uVar15 = (uint)uVar2;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728544;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728544:
  uVar12 = ~uVar12;
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
    (**(code **)(lVar16 + 8))((ulong)(uVar1 + (long)param_1) & uVar12,lVar10);
  }
  else if (uVar14 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar14 = (uint)bVar5;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728600;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728600:
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar16 + 0x10))
              ((ulong)(uVar1 + (long)param_1) & uVar12,(ulong)(uVar1 + (long)param_2) & uVar12,
               lVar10);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar14 != 0) {
      puVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar11;
    }
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x1007286a8 | thunk_FUN_1007286ac */

void * thunk_FUN_1007286ac(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_1007287d8;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_1007287d8:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x20))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      pvVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return pvVar11;
    }
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x1007286ac | FUN_1007286ac */

void * FUN_1007286ac(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar9,puVar7,puVar6);
  lVar17 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar17 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar13 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar2;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_1007287d8;
      uVar14 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*param_2;
    }
    else {
      uVar14 = *param_2;
    }
    uVar13 = uVar14 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_1007287d8:
  if (uVar13 == 1) {
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    (**(code **)(lVar17 + 0x20))
              (uVar1 + (long)param_1 & ~uVar12,(ulong)(uVar1 + (long)param_2) & ~uVar12,lVar10);
    *(undefined1 *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar13 != 0) {
      pvVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return pvVar11;
    }
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    *(undefined1 *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100728888 | thunk_FUN_10072888c */

uint * thunk_FUN_10072888c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,uVar9,puVar7,puVar6);
  lVar16 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar16 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_1 + uVar2);
  uVar14 = (uint)bVar5;
  uVar15 = (uint)uVar2;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007289c4;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_1007289c4:
  uVar12 = ~uVar12;
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
    (**(code **)(lVar16 + 8))((ulong)(uVar1 + (long)param_1) & uVar12,lVar10);
  }
  else if (uVar14 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar14 = (uint)bVar5;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728a80;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728a80:
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    (**(code **)(lVar16 + 0x20))
              ((ulong)(uVar1 + (long)param_1) & uVar12,(ulong)(uVar1 + (long)param_2) & uVar12,
               lVar10);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar14 != 0) {
      puVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar11;
    }
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x10072888c | FUN_10072888c */

uint * FUN_10072888c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar19 = *(ulong *)(lVar18 + 0x40);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar17,uVar9,puVar7,puVar6);
  lVar16 = *(long *)(lVar10 + -8);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar1 = uVar19 + uVar12;
  uVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar16 + 0x40);
  if (uVar2 <= uVar19) {
    uVar2 = uVar19;
  }
  bVar5 = *(byte *)((long)param_1 + uVar2);
  uVar14 = (uint)bVar5;
  uVar15 = (uint)uVar2;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007289c4;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_1007289c4:
  uVar12 = ~uVar12;
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
    (**(code **)(lVar16 + 8))((ulong)(uVar1 + (long)param_1) & uVar12,lVar10);
  }
  else if (uVar14 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar8);
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar14 = (uint)bVar5;
  if (1 < bVar5) {
    uVar13 = 4;
    if (uVar15 < 4) {
      uVar13 = uVar15;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100728a80;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    uVar14 = uVar13 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 + 2;
  }
LAB_100728a80:
  if (uVar14 == 1) {
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    (**(code **)(lVar16 + 0x20))
              ((ulong)(uVar1 + (long)param_1) & uVar12,(ulong)(uVar1 + (long)param_2) & uVar12,
               lVar10);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar14 != 0) {
      puVar11 = _memcpy(param_1,param_2,uVar2 + 1);
      return puVar11;
    }
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100728b28 | thunk_FUN_100728b2c */

int thunk_FUN_100728b2c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar14 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar13,uVar9,puVar6,puVar5);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar11 = (uVar14 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) +
           *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar11 <= uVar14) {
    uVar11 = uVar14;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_100728c6c;
  uVar14 = uVar11 + 1;
  uVar10 = (uint)uVar14;
  uVar4 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar12 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfd >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar12 < 0x100) {
      if (uVar12 < 2) goto LAB_100728c6c;
      goto LAB_100728bf8;
    }
    if (uVar12 >> 0x10 == 0) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar14);
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar14);
    }
  }
  else {
LAB_100728bf8:
    uVar12 = (uint)*(byte *)((long)param_1 + uVar14);
  }
  if (uVar12 != 0) {
    uVar1 = 0;
    if (uVar10 < 4) {
      uVar1 = uVar12 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar10 != 0) {
      uVar4 = 4;
      if (uVar10 < 4) {
        uVar4 = uVar10;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar14 = (ulong)(byte)*param_1;
        }
        else {
          uVar14 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar14 = (ulong)(uint3)*param_1;
      }
      else {
        uVar14 = (ulong)*param_1;
      }
    }
    return ((uint)uVar14 | uVar1) + 0xfe;
  }
LAB_100728c6c:
  iVar7 = 0;
  if (2 < *(byte *)((long)param_1 + uVar11)) {
    iVar7 = (*(byte *)((long)param_1 + uVar11) ^ 0xff) + 1;
  }
  return iVar7;
}



/* Address: 0x100728b2c | FUN_100728b2c */

int FUN_100728b2c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar14 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar13,uVar9,puVar6,puVar5);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar11 = (uVar14 + uVar11 & (uVar11 ^ 0xffffffffffffffff)) +
           *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar11 <= uVar14) {
    uVar11 = uVar14;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_100728c6c;
  uVar14 = uVar11 + 1;
  uVar10 = (uint)uVar14;
  uVar4 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar12 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfd >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar12 < 0x100) {
      if (uVar12 < 2) goto LAB_100728c6c;
      goto LAB_100728bf8;
    }
    if (uVar12 >> 0x10 == 0) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar14);
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar14);
    }
  }
  else {
LAB_100728bf8:
    uVar12 = (uint)*(byte *)((long)param_1 + uVar14);
  }
  if (uVar12 != 0) {
    uVar1 = 0;
    if (uVar10 < 4) {
      uVar1 = uVar12 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar10 != 0) {
      uVar4 = 4;
      if (uVar10 < 4) {
        uVar4 = uVar10;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar14 = (ulong)(byte)*param_1;
        }
        else {
          uVar14 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar14 = (ulong)(uint3)*param_1;
      }
      else {
        uVar14 = (ulong)*param_1;
      }
    }
    return ((uint)uVar14 | uVar1) + 0xfe;
  }
LAB_100728c6c:
  iVar7 = 0;
  if (2 < *(byte *)((long)param_1 + uVar11)) {
    iVar7 = (*(byte *)((long)param_1 + uVar11) ^ 0xff) + 1;
  }
  return iVar7;
}



/* Address: 0x100728cdc | thunk_FUN_100728ce0 */

void thunk_FUN_100728ce0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  byte bVar14;
  ulong uVar15;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar15 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar12,uVar9,puVar7,puVar6);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar10 = (uVar15 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) +
           *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar10 <= uVar15) {
    uVar10 = uVar15;
  }
  sVar1 = uVar10 + 1;
  uVar11 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar14 = 0;
  }
  else if (uVar11 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar11 << 3 & 0x1f))
            + 1;
    bVar14 = 2;
    if (0xffff < uVar2) {
      bVar14 = 4;
    }
    if (uVar2 < 0x100) {
      bVar14 = 1 < uVar2;
    }
  }
  else {
    bVar14 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar14 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar10) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar11 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
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
      *param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar13;
      }
    }
    else if (bVar14 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar13;
    }
  }
  return;
}



/* Address: 0x100728ce0 | FUN_100728ce0 */

void FUN_100728ce0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  byte bVar14;
  ulong uVar15;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar15 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar12,uVar9,puVar7,puVar6);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar10 = (uVar15 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) +
           *(long *)(*(long *)(lVar8 + -8) + 0x40);
  if (uVar10 <= uVar15) {
    uVar10 = uVar15;
  }
  sVar1 = uVar10 + 1;
  uVar11 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar14 = 0;
  }
  else if (uVar11 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar11 << 3 & 0x1f))
            + 1;
    bVar14 = 2;
    if (0xffff < uVar2) {
      bVar14 = 4;
    }
    if (uVar2 < 0x100) {
      bVar14 = 1 < uVar2;
    }
  }
  else {
    bVar14 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar14 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar10) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar11 < 4) {
      iVar13 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
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
      *param_1 = param_2;
      iVar13 = 1;
    }
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar13;
      }
    }
    else if (bVar14 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar13;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar13;
    }
  }
  return;
}


