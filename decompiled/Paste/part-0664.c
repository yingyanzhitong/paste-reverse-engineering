/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007077a0 | FUN_1007077a0 */

uint * FUN_1007077a0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x18;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100707838;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100707838:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100707838;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100707874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x10070789c | FUN_10070789c */

void FUN_10070789c(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 0x18;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar10 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_100707940;
  }
  else {
    uVar9 = 2;
    uVar3 = uVar9;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar10 = 0;
    if (1 < uVar3) {
      uVar10 = uVar9;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_100707940:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar10 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar10 < 2) {
    if (uVar10 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar10 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001007079ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))();
      return;
    }
    puVar6 = (ulong *)((long)param_1 + lVar8 + 7 & 0xfffffffffffffff8);
    if ((int)param_2 < 0) {
      *puVar6 = (ulong)(param_2 & 0x7fffffff);
      puVar6[1] = 0;
    }
    else {
      puVar6[1] = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x100707a0c | FUN_100707a0c */

void FUN_100707a0c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_28 = &DAT_100c740e8;
    local_38 = puStack_40;
    puStack_30 = puStack_40;
    _swift_initStructMetadata(param_1,0,5,&local_48,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100707a94 | FUN_100707a94 */

long * FUN_100707a94(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x28 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    puVar3[4] = puVar4[4];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100707b94 | FUN_100707b94 */

void FUN_100707b94(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_bridgeObjectRelease
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 0x20));
  return;
}



/* Address: 0x100707bec | FUN_100707bec */

long FUN_100707bec(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[4] = puVar1[4];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100707c84 | FUN_100707c84 */

long FUN_100707c84(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  uVar3 = puVar2[4];
  puVar2[4] = puVar1[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x100707d28 | FUN_100707d28 */

long FUN_100707d28(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  uVar4 = puVar1[3];
  puVar2[4] = puVar1[4];
  puVar2[3] = uVar4;
  return param_1;
}



/* Address: 0x100707db4 | FUN_100707db4 */

long FUN_100707db4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  puVar3[2] = puVar2[2];
  puVar3[3] = puVar2[3];
  uVar1 = puVar3[4];
  puVar3[4] = puVar2[4];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100707e50 | FUN_100707e50 */

uint * FUN_100707e50(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x28;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100707ef8;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100707ef8:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100707ef8;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100707f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 0x20);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100707f74 | FUN_100707f74 */

void FUN_100707f74(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 0x28;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar10 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_100708028;
  }
  else {
    uVar9 = 2;
    uVar3 = uVar9;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar10 = 0;
    if (1 < uVar3) {
      uVar10 = uVar9;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_100708028:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar10 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar10 < 2) {
    if (uVar10 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar10 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100708094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))();
      return;
    }
    uVar6 = (long)param_1 + lVar8 + 7 & 0xfffffffffffffff8;
    if ((int)param_2 < 0) {
      *(ulong *)(uVar6 + 0x18) = (ulong)(param_2 & 0x7fffffff);
      *(undefined8 *)(uVar6 + 0x20) = 0;
    }
    else {
      *(ulong *)(uVar6 + 0x20) = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x10070810c | /usr/lib/swift/libswiftCore.dylib::Swift::$_copySequenceToContiguousArray */

ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
 Swift::__copySequenceToContiguousArray
           (ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copySequenceToContiguousArray_100eadac0)();
  return (ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
          )param_1.unknown;
}



/* Address: 0x100708110 | thunk_FUN_10070652c */

void thunk_FUN_10070652c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28)) = param_1;
  return;
}



/* Address: 0x100708114 | thunk_FUN_100706520 */

undefined8 thunk_FUN_100706520(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x28));
}



/* Address: 0x100708118 | thunk_FUN_100706514 */

undefined8 thunk_FUN_100706514(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x24));
}



/* Address: 0x10070811c | thunk_FUN_1002ee454 */

void thunk_FUN_1002ee454(void)

{
  FUN_1002ee454();
  return;
}



/* Address: 0x100708120 | thunk_FUN_100707564 */

void thunk_FUN_100707564(void)

{
  FUN_100707564();
  return;
}



/* Address: 0x100708124 | thunk_FUN_100706870 */

void thunk_FUN_100706870(void)

{
  FUN_100706870();
  return;
}



/* Address: 0x100708128 | FUN_100708128 */

void FUN_100708128(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))(&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2);
  return;
}



/* Address: 0x100708198 | FUN_100708198 */

void FUN_100708198(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x0001007081e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1007081e4 | FUN_1007081e4 */

void FUN_1007081e4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x000100708230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x100708234 | FUN_100708234 */

void FUN_100708234(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100708294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x100708298 | FUN_100708298 */

void FUN_100708298(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007082fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x100708300 | FUN_100708300 */

void FUN_100708300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = 0;
  FUN_1007083b4();
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  iVar1 = *(int *)(lVar3 + 0x24);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + iVar1,1,1,lVar3);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x0001007083b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  return;
}



/* Address: 0x1007083b4 | FUN_1007083b4 */

void FUN_1007083b4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007083c0 | FUN_1007083c0 */

void FUN_1007083c0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  _swift_task_switch(FUN_1007084b0,0,0);
  return;
}



/* Address: 0x1007084b0 | FUN_1007084b0 */

void FUN_1007084b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  iVar4 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x24);
  *(int *)(unaff_x22 + 200) = iVar4;
  pcVar9 = *(code **)(lVar8 + 0x10);
  *(code **)(unaff_x22 + 0x88) = pcVar9;
  (*pcVar9)(uVar11,*(long *)(unaff_x22 + 0x20) + (long)iVar4,uVar12);
  pcVar9 = *(code **)(lVar1 + 0x30);
  *(code **)(unaff_x22 + 0x90) = pcVar9;
  uVar6 = uVar11;
  (*pcVar9)(uVar11,1,uVar10);
  pcVar9 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0x98) = pcVar9;
  (*pcVar9)(uVar11,uVar12);
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  if ((int)uVar6 == 1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar12,uVar10,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar12,uVar10,uVar6,puVar5,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10070874c;
  }
  else {
    pcVar9 = *(code **)(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0x88))
              (uVar12,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
               *(undefined8 *)(unaff_x22 + 0x58));
    (*pcVar9)(uVar12,1,uVar10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    if ((int)uVar12 == 1) {
      (**(code **)(unaff_x22 + 0x98))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,uVar10,uVar10,0,0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),1,1);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100708690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    pcVar9 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
    *(code **)(unaff_x22 + 0xb0) = pcVar9;
    (*pcVar9)(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x70),uVar10);
    puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar10 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar12,uVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar12,uVar6,uVar10,puVar5,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100708988;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10070874c | FUN_10070874c */

void FUN_10070874c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007087b0;
  }
  else {
    pcVar1 = FUN_100708bb0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007087b0 | FUN_1007087b0 */

void FUN_1007087b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x28))
            (*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
             *(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58));
  pcVar8 = *(code **)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x88))
            (uVar10,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 200),
             *(undefined8 *)(unaff_x22 + 0x58));
  (*pcVar8)(uVar10,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar10 == 1) {
    (**(code **)(unaff_x22 + 0x98))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar9,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),1,1);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001007088cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
  *(code **)(unaff_x22 + 0xb0) = pcVar8;
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x70),uVar9);
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar10,uVar1,uVar9,puVar5,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100708988;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100708988 | FUN_100708988 */

void FUN_100708988(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007089ec;
  }
  else {
    pcVar1 = FUN_100708c2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007089ec | FUN_1007089ec */

void FUN_1007089ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = uVar8;
  (**(code **)(unaff_x22 + 0x90))(uVar8,1,uVar9);
  bVar5 = (int)uVar10 != 1;
  if (bVar5) {
    pcVar12 = *(code **)(unaff_x22 + 0xb0);
    pcVar13 = *(code **)(unaff_x22 + 0x98);
    lVar14 = (long)*(int *)(unaff_x22 + 200);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar6 = *(long *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar11 = *(long *)(unaff_x22 + 0x20);
    lVar7 = *(long *)(unaff_x22 + 0x10);
    (*pcVar12)(uVar2,uVar8,uVar9);
    (*pcVar13)(lVar11 + lVar14,uVar1);
    (**(code **)(lVar6 + 0x10))(lVar11 + lVar14,uVar2,uVar9);
    (**(code **)(lVar6 + 0x38))(lVar11 + lVar14,0,1,uVar9);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar9,uVar9,0,0);
    iVar4 = *(int *)(lVar6 + 0x30);
    (*pcVar12)(lVar7,uVar10,uVar9);
    (*pcVar12)(lVar7 + iVar4,uVar2,uVar9);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))(*(undefined8 *)(unaff_x22 + 0x50),uVar9);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(unaff_x22 + 0x98))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar10,uVar10,0,0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x10),!bVar5,1,lVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100708bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100708bb0 | FUN_100708bb0 */

void FUN_100708bb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100708c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100708c2c | FUN_100708c2c */

void FUN_100708c2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100708cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100708cb8 | FUN_100708cb8 */

void FUN_100708cb8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007083c0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100708d20 | FUN_100708d20 */

void FUN_100708d20(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 in_x3;
  long in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(in_x4 + 0x18),*(undefined8 *)(in_x4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100708dfc;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100708dfc | FUN_100708dfc */

void FUN_100708dfc(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100708e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100708e74 | FUN_100708e74 */

void FUN_100708e74(undefined8 param_1,long param_2)

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
  FUN_100708300(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),lVar1,uVar2);
  return;
}



/* Address: 0x100708f44 | FUN_100708f44 */

void FUN_100708f44(long param_1)

{
  FUN_100708e74();
                    /* WARNING: Could not recover jumptable at 0x000100708f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100708f74 | FUN_100708f74 */

void FUN_100708f74(undefined8 param_1,undefined8 param_2)

{
  FUN_100708ff4(param_1,param_2,
                PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  return;
}



/* Address: 0x100708f88 | FUN_100708f88 */

void FUN_100708f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
                    /* WARNING: Could not recover jumptable at 0x000100708fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Address: 0x100708fe0 | FUN_100708fe0 */

void FUN_100708fe0(undefined8 param_1,undefined8 param_2)

{
  FUN_100708ff4(param_1,param_2,
                PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  return;
}



/* Address: 0x100708ff4 | FUN_100708ff4 */

void FUN_100708ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100709038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Address: 0x10070903c | FUN_10070903c */

void FUN_10070903c(undefined8 param_1,undefined8 param_2)

{
  FUN_100709054(param_1,param_2,FUN_1007966b4);
  return;
}



/* Address: 0x100709048 | FUN_100709048 */

void FUN_100709048(undefined8 param_1,undefined8 param_2)

{
  FUN_100709054(param_1,param_2,FUN_100797c6c);
  return;
}



/* Address: 0x100709054 | FUN_100709054 */

void FUN_100709054(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  uVar2 = 0;
  (*param_4)(0,param_2,param_3);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  return;
}



/* Address: 0x1007090d8 | FUN_1007090d8 */

void FUN_1007090d8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007090f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,1,1,param_3);
  return;
}



/* Address: 0x1007090f4 | FUN_1007090f4 */

void FUN_1007090f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar4,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  return;
}



/* Address: 0x100709180 | FUN_100709180 */

void FUN_100709180(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74198,param_1);
  return;
}



/* Address: 0x100709190 | FUN_100709190 */

void FUN_100709190(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10070919c | FUN_10070919c */

void FUN_10070919c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  Optional OVar3;
  long lVar4;
  ulong uVar5;
  undefined7 extraout_var;
  long local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar4 = 0x13f;
  uVar5 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar5 < 0x40) {
    local_40 = *(long *)(lVar4 + -8) + 0x40;
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    if (uVar5 < 0x40) {
      local_38 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_40,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x100709268 | FUN_100709268 */

long * FUN_100709268(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar8 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar9 + -8);
  uVar11 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar1 = lVar15 + uVar11;
  sVar12 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar6 = *(uint *)(lVar14 + 0x50) | *(uint *)(lVar13 + 0x50);
  uVar3 = uVar6 & 0xff;
  if ((uVar3 < 8 && (uVar6 & 0x100000) == 0) &&
      (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + sVar12 < 0x19) {
    uVar11 = ~uVar11;
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar8);
    uVar2 = uVar1 + (long)param_1;
    uVar1 = uVar1 + (long)param_2;
    uVar10 = uVar1 & uVar11;
    (**(code **)(lVar13 + 0x30))(uVar10,1,lVar9);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar13 + 0x10))(uVar2 & uVar11,uVar1 & uVar11,lVar9);
      (**(code **)(lVar13 + 0x38))(uVar2 & uVar11,0,1,lVar9);
    }
    else {
      _memcpy((void *)(uVar2 & uVar11),(void *)(uVar1 & uVar11),sVar12);
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007093d8 | FUN_1007093d8 */

void FUN_1007093d8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar5 + -8);
  (**(code **)(lVar9 + 8))(param_1,lVar5);
  lVar9 = *(long *)(lVar9 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = lVar9 + param_1 + uVar8;
  uVar6 = uVar1 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar6,1,lVar5);
  if ((int)uVar6 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007094a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar1 & (uVar8 ^ 0xffffffffffffffff),lVar5);
  return;
}



/* Address: 0x1007094ac | FUN_1007094ac */

long FUN_1007094ac(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar6 + -8);
  (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar10 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar10 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar6 = lVar6 + uVar9;
  uVar1 = lVar6 + param_1;
  uVar2 = lVar6 + param_2;
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar11 + 0x10))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
    (**(code **)(lVar11 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar10);
  }
  else {
    sVar8 = *(size_t *)(lVar11 + 0x40);
    if (*(int *)(lVar11 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  }
  return param_1;
}



/* Address: 0x1007095c4 | FUN_1007095c4 */

long FUN_1007095c4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar6 + -8);
  (**(code **)(lVar11 + 0x18))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar11 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar11 + -8);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar6 = lVar6 + uVar10;
  uVar1 = lVar6 + param_1;
  uVar2 = lVar6 + param_2;
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar7 = uVar1 & (uVar10 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar7,1,lVar11);
  uVar8 = uVar2 & (uVar10 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar8,1,lVar11);
  if ((int)uVar7 == 0) {
    if ((int)uVar8 == 0) {
      (**(code **)(lVar12 + 0x18))
                (uVar1 & (uVar10 ^ 0xffffffffffffffff),uVar2 & (uVar10 ^ 0xffffffffffffffff),lVar11)
      ;
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar10 ^ 0xffffffffffffffff),lVar11);
  }
  else if ((int)uVar8 == 0) {
    (**(code **)(lVar12 + 0x10))
              (uVar1 & (uVar10 ^ 0xffffffffffffffff),uVar2 & (uVar10 ^ 0xffffffffffffffff),lVar11);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar10 ^ 0xffffffffffffffff),0,1,lVar11);
    return param_1;
  }
  sVar9 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar10 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar10 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x100709720 | FUN_100709720 */

long FUN_100709720(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar6 + -8);
  (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar10 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar10 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar6 = lVar6 + uVar9;
  uVar1 = lVar6 + param_1;
  uVar2 = lVar6 + param_2;
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar11 + 0x20))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar10);
    (**(code **)(lVar11 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar10);
  }
  else {
    sVar8 = *(size_t *)(lVar11 + 0x40);
    if (*(int *)(lVar11 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  }
  return param_1;
}



/* Address: 0x100709838 | FUN_100709838 */

long FUN_100709838(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar11 = *(long *)(lVar6 + -8);
  (**(code **)(lVar11 + 0x28))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar11 + 0x40);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar11 + -8);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar6 = lVar6 + uVar10;
  uVar1 = lVar6 + param_1;
  uVar2 = lVar6 + param_2;
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar7 = uVar1 & (uVar10 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar7,1,lVar11);
  uVar8 = uVar2 & (uVar10 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar8,1,lVar11);
  if ((int)uVar7 == 0) {
    if ((int)uVar8 == 0) {
      (**(code **)(lVar12 + 0x28))
                (uVar1 & (uVar10 ^ 0xffffffffffffffff),uVar2 & (uVar10 ^ 0xffffffffffffffff),lVar11)
      ;
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar10 ^ 0xffffffffffffffff),lVar11);
  }
  else if ((int)uVar8 == 0) {
    (**(code **)(lVar12 + 0x20))
              (uVar1 & (uVar10 ^ 0xffffffffffffffff),uVar2 & (uVar10 ^ 0xffffffffffffffff),lVar11);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar10 ^ 0xffffffffffffffff),0,1,lVar11);
    return param_1;
  }
  sVar9 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar10 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar10 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x100709994 | FUN_100709994 */

uint * FUN_100709994(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar18 = *(long *)(lVar8 + -8);
  uVar13 = *(uint *)(lVar18 + 0x54);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar9 + -8);
  iVar5 = *(int *)(lVar12 + 0x54);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = iVar5 - 1;
  }
  uVar1 = uVar2;
  if (uVar2 <= uVar13) {
    uVar1 = uVar13;
  }
  lVar14 = *(long *)(lVar12 + 0x40);
  if (iVar5 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (param_2 == 0) {
LAB_100709aec:
    puVar11 = (uint *)0x0;
  }
  else {
    uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = *(long *)(lVar18 + 0x40) + uVar15;
    if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
      lVar14 = lVar14 + (uVar10 & (uVar15 ^ 0xffffffffffffffff));
      uVar16 = (uint)lVar14;
      uVar6 = uVar16 << 3;
      if (uVar16 < 4) {
        uVar17 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
        if (0xff < uVar17) {
          if (uVar17 >> 0x10 == 0) {
            uVar17 = (uint)*(ushort *)((long)param_1 + lVar14);
          }
          else {
            uVar17 = *(uint *)((long)param_1 + lVar14);
          }
          goto LAB_100709a5c;
        }
        if (1 < uVar17) goto LAB_100709a58;
      }
      else {
LAB_100709a58:
        uVar17 = (uint)*(byte *)((long)param_1 + lVar14);
LAB_100709a5c:
        if (uVar17 != 0) {
          uVar2 = 0;
          if (uVar16 < 4) {
            uVar2 = uVar17 - 1 << (ulong)(uVar6 & 0x1f);
          }
          if (uVar16 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = 4;
            if (uVar16 < 4) {
              uVar13 = uVar16;
            }
            if ((int)uVar13 < 3) {
              if (uVar13 == 1) {
                uVar13 = (uint)(byte)*param_1;
              }
              else {
                uVar13 = (uint)(ushort)*param_1;
              }
            }
            else if (uVar13 == 3) {
              uVar13 = (uint)(uint3)*param_1;
            }
            else {
              uVar13 = *param_1;
            }
          }
          return (uint *)(ulong)(uVar1 + (uVar13 | uVar2) + 1);
        }
      }
      if (uVar1 == 0) goto LAB_100709aec;
    }
    if (uVar2 <= uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000100709b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar18 + 0x30))(param_1,uVar13,lVar8);
      return param_1;
    }
    uVar10 = (ulong)(uVar10 + (long)param_1) & ~uVar15;
    (**(code **)(lVar12 + 0x30))(uVar10,iVar5,lVar9);
    uVar2 = 0;
    if ((int)uVar10 != 0) {
      uVar2 = (int)uVar10 - 1;
    }
    puVar11 = (uint *)(ulong)uVar2;
  }
  return puVar11;
}



/* Address: 0x100709b84 | FUN_100709b84 */

void FUN_100709b84(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  size_t sVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(lVar10 + -8);
  uVar12 = *(uint *)(lVar21 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar6,puVar9,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar11 + -8);
  uVar14 = *(uint *)(lVar13 + 0x54);
  uVar4 = 0;
  if (uVar14 != 0) {
    uVar4 = uVar14 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 <= uVar12) {
    uVar5 = uVar12;
  }
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar21 + 0x40) + uVar15;
  sVar17 = *(size_t *)(lVar13 + 0x40);
  if (uVar14 == 0) {
    sVar17 = sVar17 + 1;
  }
  sVar3 = (uVar2 & (uVar15 ^ 0xffffffffffffffff)) + sVar17;
  uVar20 = (uint)sVar3;
  uVar18 = (uint)param_2;
  bVar16 = 0;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar20 < 4) {
      uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar20 << 3 & 0x1f)) >>
              (ulong)(uVar20 << 3 & 0x1f)) + 1;
      bVar16 = 2;
      if (0xffff < uVar1) {
        bVar16 = 4;
      }
      if (uVar1 < 0x100) {
        bVar16 = 1 < uVar1;
      }
    }
    else {
      bVar16 = 1;
    }
  }
  if (uVar5 < uVar18) {
    uVar18 = uVar18 + ~uVar5;
    if (uVar20 < 4) {
      iVar19 = (uVar18 >> (ulong)(uVar20 << 3 & 0x1f)) + 1;
      if (uVar20 != 0) {
        uVar4 = uVar18 & (-1 << (ulong)(uVar20 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar8 = (undefined2)uVar4;
        if (uVar20 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar20 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar18;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = uVar18;
      iVar19 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar19;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar19;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar19;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (uVar18 != 0) {
      if (uVar12 < uVar4) {
        param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar15);
        if (uVar4 < uVar18) {
          uVar12 = (uint)sVar17;
          uVar14 = 0xffffffff;
          if (uVar12 < 4) {
            uVar14 = ~(-1 << (ulong)((uVar12 & 3) << 3));
          }
          if (uVar12 == 0) {
            return;
          }
          uVar14 = uVar14 & (uVar4 - uVar18 ^ 0xffffffff);
          uVar4 = 4;
          if (uVar12 < 4) {
            uVar4 = uVar12;
          }
          _bzero(param_1,sVar17);
          if ((int)uVar4 < 3) {
            if (uVar4 == 1) {
              *(char *)param_1 = (char)uVar14;
              return;
            }
            *(short *)param_1 = (short)uVar14;
            return;
          }
          if (uVar4 == 3) {
            *(short *)param_1 = (short)uVar14;
            *(char *)((long)param_1 + 2) = (char)(uVar14 >> 0x10);
            return;
          }
          *param_1 = uVar14;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_2 = (ulong)(uVar18 + 1);
        lVar10 = lVar11;
        uVar12 = uVar14;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x000100709dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar12,lVar10);
      return;
    }
  }
  return;
}



/* Address: 0x100709e74 | FUN_100709e74 */

void FUN_100709e74(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100709e80 | FUN_100709e80 */

void FUN_100709e80(void)

{
  return;
}



/* Address: 0x100709e84 | FUN_100709e84 */

void FUN_100709e84(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100fdfa88 != 0) {
    return;
  }
  puVar1 = &DAT_100efbad0;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100fdfa88 = param_1;
  return;
}



/* Address: 0x100709ed4 | thunk_FUN_100708f74 */

void thunk_FUN_100708f74(undefined8 param_1,undefined8 param_2)

{
  FUN_100708ff4(param_1,param_2,
                PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  return;
}



/* Address: 0x100709ed8 | FUN_100709ed8 */

void FUN_100709ed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100709ef4,0,0);
  return;
}



/* Address: 0x100709ef4 | FUN_100709ef4 */

void FUN_100709ef4(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x000100709f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100709f74;
  FUN_10070a594();
  return;
}


