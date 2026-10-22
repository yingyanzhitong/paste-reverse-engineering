/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008555a8 | FUN_1008555a8 */

void FUN_1008555a8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebd8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100855660;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100855660 | FUN_100855660 */

void FUN_100855660(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x38));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    lVar1 = *(long *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + 0x20) + 0x20);
    (*UNRECOVERED_JUMPTABLE)(lVar1,*(undefined8 *)(lVar7 + 0x30),uVar2);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    Swift::__getErrorEmbeddedNSError(lVar1,uVar2,uVar4);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      _swift_allocError(uVar6,uVar4,0,0);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar2,uVar6);
    }
    else {
      (**(code **)(*(long *)(lVar7 + 0x20) + 8))(uVar2,*(undefined8 *)(lVar7 + 0x18));
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010085575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100855760 | FUN_100855760 */

void FUN_100855760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_5 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100708dfc;
  FUN_10085502c(plVar2,param_1,param_2,param_3,param_5,uVar1);
  return;
}



/* Address: 0x100855810 | FUN_100855810 */

void FUN_100855810(long param_1)

{
  FUN_100854e28();
                    /* WARNING: Could not recover jumptable at 0x00010085583c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100855840 | FUN_100855840 */

undefined8 FUN_100855840(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x30);
}



/* Address: 0x100855848 | FUN_100855848 */

void FUN_100855848(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc25f0);
  return;
}



/* Address: 0x100855854 | FUN_100855854 */

void FUN_100855854(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc2590);
  return;
}



/* Address: 0x100855860 | FUN_100855860 */

void FUN_100855860(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x40);
  }
  return;
}



/* Address: 0x1008558d8 | FUN_1008558d8 */

long * FUN_1008558d8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x100855988 | FUN_100855988 */

void FUN_100855988(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x28) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_release(*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 8))
  ;
  return;
}



/* Address: 0x1008559c8 | FUN_1008559c8 */

long FUN_1008559c8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100855a2c | FUN_100855a2c */

long FUN_100855a2c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  (**(code **)(lVar5 + 0x18))();
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + param_2 & 0xfffffffffffffff8);
  uVar4 = puVar3[1];
  uVar1 = puVar2[1];
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  _swift_retain(uVar1);
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x100855a9c | FUN_100855a9c */

long FUN_100855a9c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  return param_1;
}



/* Address: 0x100855af8 | FUN_100855af8 */

long FUN_100855af8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar3[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100855b5c | FUN_100855b5c */

uint * FUN_100855b5c(uint *param_1,uint param_2,long param_3)

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
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
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
      goto LAB_100855bec;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100855bec:
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
      if (uVar9 != 0) goto LAB_100855bec;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100855c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100855c50 | FUN_100855c50 */

void FUN_100855c50(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
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
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
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
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100855d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  return;
}



/* Address: 0x100855db0 | FUN_100855db0 */

undefined1  [16] FUN_100855db0(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_30;
  undefined *puStack_28;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar3 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x40);
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x100855e48 | FUN_100855e48 */

long * FUN_100855e48(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar2 + -8);
  sVar5 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  if ((*(uint *)(lVar7 + 0x50) & 0x1000f8) == 0 && (sVar5 + 7 & 0xfffffffffffffff8) + 0x10 < 0x19) {
    plVar3 = param_2;
    (**(code **)(lVar7 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      _memcpy(param_1,param_2,sVar5);
    }
    puVar4 = (undefined8 *)((long)param_1 + sVar5 + 7 & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + sVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar6[1];
    uVar8 = *puVar6;
    puVar4[1] = puVar6[1];
    *puVar4 = uVar8;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x100855f74 | FUN_100855f74 */

void FUN_100855f74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
  param_1 = param_1 + *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  _swift_release(*(undefined8 *)((param_1 + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x10085600c | FUN_10085600c */

void * FUN_10085600c(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar2);
    iVar7 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar7 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar7 == 0) {
    sVar9 = sVar9 + 1;
  }
  puVar6 = (undefined8 *)(sVar9 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(sVar9 + 7 + (long)param_2 & 0xfffffffffffffff8);
  uVar4 = puVar5[1];
  uVar10 = *puVar5;
  puVar6[1] = puVar5[1];
  *puVar6 = uVar10;
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x1008560f8 | FUN_1008560f8 */

void * FUN_1008560f8(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  pvVar2 = param_1;
  (*pcVar10)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar10)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar9 + 0x18))(param_1,param_2,lVar1);
      goto LAB_1008561cc;
    }
    (**(code **)(lVar9 + 8))(param_1,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar1);
    goto LAB_1008561cc;
  }
  sVar6 = *(size_t *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy(param_1,param_2,sVar6);
LAB_1008561cc:
  lVar1 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar7 = (undefined8 *)(lVar1 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + 7 + (long)param_2 & 0xfffffffffffffff8);
  uVar8 = puVar7[1];
  uVar4 = puVar5[1];
  uVar11 = *puVar5;
  puVar7[1] = puVar5[1];
  *puVar7 = uVar11;
  _swift_retain(uVar4);
  _swift_release(uVar8);
  return param_1;
}



/* Address: 0x10085623c | FUN_10085623c */

void * FUN_10085623c(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
    iVar6 = *(int *)(lVar7 + 0x54);
    sVar8 = *(size_t *)(lVar7 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x54);
    sVar8 = *(size_t *)(lVar7 + 0x40);
    sVar1 = sVar8;
    if (iVar6 == 0) {
      sVar1 = sVar8 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar6 == 0) {
    sVar8 = sVar8 + 1;
  }
  puVar5 = (undefined8 *)(sVar8 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(sVar8 + 7 + (long)param_2 & 0xfffffffffffffff8);
  uVar9 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar9;
  return param_1;
}



/* Address: 0x100856320 | FUN_100856320 */

void * FUN_100856320(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar2 = param_1;
  (*pcVar9)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar9)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar1);
      goto LAB_1008563f4;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar1);
    goto LAB_1008563f4;
  }
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy(param_1,param_2,sVar6);
LAB_1008563f4:
  lVar1 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar7 = (undefined8 *)(lVar1 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + 7 + (long)param_2 & 0xfffffffffffffff8);
  uVar4 = puVar7[1];
  uVar10 = *puVar5;
  puVar7[1] = puVar5[1];
  *puVar7 = uVar10;
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x100856458 | FUN_100856458 */

int FUN_100856458(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar6 + -8);
  iVar5 = *(int *)(lVar8 + 0x54);
  uVar1 = 0;
  if (iVar5 != 0) {
    uVar1 = iVar5 - 1;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  if (iVar5 == 0) {
    lVar9 = lVar9 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
    uVar10 = 2;
    uVar4 = uVar10;
    if ((uVar7 & 0xfffffff8) == 0) {
      uVar4 = (param_2 - uVar2) + 1;
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
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100856528;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100856528:
        iVar5 = uVar10 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return uVar2 + iVar5 + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar7);
      if (uVar10 != 0) goto LAB_100856528;
    }
  }
  if (uVar1 < 0x7fffffff) {
    uVar7 = *(ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar5 = (int)uVar7 + 1;
  }
  else {
    (**(code **)(lVar8 + 0x30))(param_1,iVar5,lVar6);
    iVar5 = 0;
    if ((int)param_1 != 0) {
      iVar5 = (int)param_1 + -1;
    }
  }
  return iVar5;
}



/* Address: 0x1008565ac | FUN_1008565ac */

void FUN_1008565ac(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  size_t sVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar7 + -8);
  iVar5 = *(int *)(lVar10 + 0x54);
  uVar3 = 0;
  if (iVar5 != 0) {
    uVar3 = iVar5 - 1;
  }
  uVar11 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar11 = 0x7fffffff;
  }
  sVar12 = *(size_t *)(lVar10 + 0x40);
  if (iVar5 == 0) {
    sVar12 = sVar12 + 1;
  }
  sVar1 = (sVar12 + 7 & 0xfffffffffffffff8) + 0x10;
  uVar8 = 2;
  uVar4 = uVar8;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar11) + 1;
  }
  if (0xffff < uVar4) {
    uVar8 = 4;
  }
  if (uVar4 < 0x100) {
    uVar8 = 1;
  }
  uVar2 = 0;
  if (1 < uVar4) {
    uVar2 = uVar8;
  }
  uVar8 = 0;
  if (uVar11 < param_3) {
    uVar8 = uVar2;
  }
  iVar6 = param_2 - uVar11;
  if (param_2 < uVar11 || iVar6 == 0) {
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar3 < 0x7fffffff) {
        puVar9 = (ulong *)((long)param_1 + sVar12 + 7 & 0xfffffffffffffff8);
        if ((int)param_2 < 0) {
          *puVar9 = (ulong)(param_2 & 0x7fffffff);
          puVar9[1] = 0;
        }
        else {
          *puVar9 = (ulong)(param_2 - 1);
        }
      }
      else {
        if (param_2 <= uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010085677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar10 + 0x38))(param_1,param_2 + 1,iVar5,lVar7);
          return;
        }
        uVar8 = (uint)sVar12;
        uVar11 = 0xffffffff;
        if (uVar8 < 4) {
          uVar11 = ~(-1 << (ulong)((uVar8 & 3) << 3));
        }
        if (uVar8 != 0) {
          uVar11 = uVar11 & (uVar3 - param_2 ^ 0xffffffff);
          uVar3 = 4;
          if (uVar8 < 4) {
            uVar3 = uVar8;
          }
          _bzero(param_1,sVar12);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)param_1 = (char)uVar11;
            }
            else {
              *(short *)param_1 = (short)uVar11;
            }
          }
          else if (uVar3 == 3) {
            *(short *)param_1 = (short)uVar11;
            *(char *)((long)param_1 + 2) = (char)(uVar11 >> 0x10);
          }
          else {
            *param_1 = uVar11;
          }
        }
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar11;
    }
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar8 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  return;
}



/* Address: 0x1008567c4 | FUN_1008567c4 */

void FUN_1008567c4(undefined8 param_1)

{
  FUN_1008567dc(param_1,0x85000001);
  return;
}



/* Address: 0x1008567d0 | FUN_1008567d0 */

void FUN_1008567d0(undefined8 param_1)

{
  FUN_1008567dc(param_1,0xc5000001);
  return;
}



/* Address: 0x1008567dc | FUN_1008567dc */

void FUN_1008567dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1[2];
  _swift_getExtendedFunctionTypeMetadata(param_2,0,&local_18,0,*param_1,0,1,param_1[1]);
  return;
}



/* Address: 0x10085681c | thunk_FUN_100708dfc */

void thunk_FUN_100708dfc(void)

{
  FUN_100708dfc();
  return;
}



/* Address: 0x100856820 | thunk_FUN_100004594 */

void thunk_FUN_100004594(void)

{
  thunk_FUN_100004594();
  return;
}



/* Address: 0x100856824 | FUN_100856824 */

void FUN_100856824(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar6;
  String SVar7;
  String SVar8;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulong uVar5;
  
  local_30 = param_1;
  uStack_28 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0xa;
  uVar3 = 10;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar7,SVar8);
  uVar1 = uStack_28;
  FUN_1007fe14c();
  puVar4 = &local_30;
  uVar6 = 2;
  FUN_1005abf00(puVar4,2,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,uVar3);
  if ((uVar6 & 0xff) == 1) {
    local_34 = SUB84(puVar4,0);
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    uVar5 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) {
      FUN_1007fe10c();
      _swift_willThrowTypedImpl(&local_34,&DAT_100ee42f8,uVar5);
    }
  }
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008568d4 | FUN_1008568d4 */

uint FUN_1008568d4(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  POSIXErrorCode PVar4;
  bool bVar5;
  undefined *puVar6;
  POSIXError PVar7;
  POSIXError PVar8;
  undefined7 extraout_var;
  CocoaError CVar9;
  Code CVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  code *pcVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  int local_64;
  
  local_88 = (undefined *)Foundation::CocoaError::Code::typeMetadataAccessor();
  local_90 = *(long *)(local_88 + -8);
  lVar12 = *(long *)(local_90 + 0x40);
  puVar6 = &DAT_100fe81c8;
  local_98 = auStack_a0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(&DAT_100fe81c8,&DAT_100c7d720);
  uVar20 = (long)(auStack_a0 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined *)Foundation::CocoaError::typeMetadataAccessor();
  local_78 = *(long *)(local_70 + -8);
  puVar13 = (undefined *)(uVar20 - (*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100fe81d0;
  local_80 = puVar13;
  FUN_1000f7830(&DAT_100fe81d0,&DAT_100c7d728);
  lVar21 = (long)puVar13 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_1 + -8);
  uVar14 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar22 = lVar21 - uVar14;
  lVar18 = lVar22 - uVar14;
  PVar7 = Foundation::POSIXError::typeMetadataAccessor();
  lVar19 = *(long *)(PVar7.unknown + -8);
  lVar17 = lVar18 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar15 = *(code **)(lVar12 + 0x10);
  (*pcVar15)(lVar18);
  lVar12 = lVar21;
  _swift_dynamicCast(lVar21,lVar18,param_1,PVar7.unknown,6);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar19 + 0x38))(lVar21,1,1,PVar7.unknown);
    FUN_1000fb4c4(lVar21,&DAT_100fe81d0,&DAT_100c7d728);
    (*pcVar15)(lVar22);
    puVar6 = local_70;
    uVar14 = uVar20;
    _swift_dynamicCast(uVar20,lVar22,param_1,local_70,6);
    lVar12 = local_78;
    if ((uVar14 & 1) == 0) {
      (**(code **)(local_78 + 0x38))(uVar20,1,1,puVar6);
      FUN_1000fb4c4(uVar20,&DAT_100fe81c8,&DAT_100c7d720);
    }
    else {
      (**(code **)(local_78 + 0x38))(uVar20,0,1,puVar6);
      puVar13 = local_80;
      CVar9.unknown = local_80;
      (**(code **)(lVar12 + 0x20))(local_80,uVar20,puVar6);
      bVar5 = Foundation::CocoaError::get_isFileError(CVar9);
      if (bVar5) {
        CVar9.unknown = &DAT_100fe81d8;
        FUN_1000f7830(&DAT_100fe81d8,&DAT_100c7d730);
        lVar17 = local_90;
        bVar1 = *(byte *)(local_90 + 0x50);
        _swift_allocObject();
        *(undefined8 *)(CVar9.unknown + 0x18) = 4;
        *(undefined8 *)(CVar9.unknown + 0x10) = 2;
        CVar10 = Foundation::CocoaError::get_fileNoSuchFile(CVar9);
        Foundation::CocoaError::get_fileReadNoSuchFile((CocoaError)CVar10.unknown);
        FUN_100003a00(&DAT_100fe81e0,PTR_typeMetadataAccessor_100ea6960,
                      PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                     );
        puVar2 = local_98;
        (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
        puVar11 = puVar2;
        FUN_100856cd4(puVar2,CVar9.unknown);
        uVar16 = (uint)puVar11;
        _swift_setDeallocating(CVar9.unknown);
        puVar3 = local_88;
        _swift_arrayDestroy(CVar9.unknown +
                            ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),2,local_88);
        _swift_deallocClassInstance(CVar9.unknown,0x20,7);
        (**(code **)(lVar17 + 8))(puVar2,puVar3);
        (**(code **)(lVar12 + 8))(puVar13,puVar6);
        goto LAB_100856c80;
      }
      (**(code **)(lVar12 + 8))(puVar13,puVar6);
    }
    uVar16 = 0;
  }
  else {
    (**(code **)(lVar19 + 0x38))(lVar21,0,1,PVar7.unknown);
    (**(code **)(lVar19 + 0x20))(lVar17,lVar21,PVar7.unknown);
    FUN_100003a00(&DAT_100fe81e8,PTR_typeMetadataAccessor_100ea6988,
                  PTR_Foundation__Foundation__POSIXError_>Foundation___BridgedStoredNSError_100ea6980
                 );
    PVar8 = PVar7;
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
    PVar4 = Foundation::POSIXError::get_ENOENT(PVar8);
    (**(code **)(lVar19 + 8))(lVar17,PVar7.unknown);
    uVar16 = (uint)(local_64 == (int)CONCAT71(extraout_var,PVar4.value));
  }
LAB_100856c80:
  return uVar16 & 1;
}



/* Address: 0x100856ca4 | FUN_100856ca4 */

bool FUN_100856ca4(Character *param_1)

{
  bool bVar1;
  
  bVar1 = Swift::Character::get_isWhitespace(*param_1);
  return bVar1;
}



/* Address: 0x100856cd4 | FUN_100856cd4 */

bool FUN_100856cd4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  Code CVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  CVar4 = Foundation::CocoaError::Code::typeMetadataAccessor();
  puVar1 = PTR_Foundation__Foundation__CocoaError__Code_>Swift__Equatable_100ea6950;
  lVar8 = *(long *)(CVar4.unknown + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_2 + 0x10);
  lVar2 = 0;
  do {
    lVar7 = lVar2;
    if (lVar9 == lVar7) break;
    (**(code **)(lVar8 + 0x10))
              (puVar6,param_2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x48) * lVar7,CVar4.unknown);
    puVar5 = &DAT_100fe81f0;
    FUN_100003a00(&DAT_100fe81f0,PTR_typeMetadataAccessor_100ea6940,puVar1);
    bVar3 = Swift::Equatable::___infix(puVar6,param_1,CVar4.unknown,puVar5);
    (**(code **)(lVar8 + 8))(puVar6,CVar4.unknown);
    lVar2 = lVar7 + 1;
  } while (!bVar3);
  return lVar9 != lVar7;
}



/* Address: 0x100856dd4 | FUN_100856dd4 */

uint FUN_100856dd4(uint param_1)

{
  FUN_100856ca4();
  return param_1 & 1;
}



/* Address: 0x100856dec | FUN_100856dec */

undefined * FUN_100856dec(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  tuple2 tVar10;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar9 = *(long *)(IVar3.unknown + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar8 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar6 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100856f0c);
        (*pcVar2)();
      }
      puVar8 = (undefined *)(long)(iVar6 - (int)param_1);
    }
  }
  else {
    if (uVar5 != 2) goto LAB_100856ed4;
    puVar8 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100856f08);
      (*pcVar2)();
    }
  }
  if (puVar8 != (undefined *)0x0) {
    puVar4 = puVar8;
    FUN_100837588(puVar8,0);
    tVar10 = Foundation::Data::_copyContents
                       ((UnsafeMutableBufferPointer<__int8>)
                        (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)),
                        (Data)(puVar4 + 0x20));
    FUN_10003bf2c(param_1,param_2);
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
    if (tVar10._.unknown.unknown == puVar8) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100856ec0);
    (*pcVar2)();
  }
LAB_100856ed4:
  FUN_10003bf2c(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x100856f0c | thunk_FUN_100857488 */

void thunk_FUN_100857488(void)

{
  FUN_100857488();
  return;
}



/* Address: 0x100856f10 | thunk_FUN_100857278 */

void thunk_FUN_100857278(void)

{
  FUN_100857278();
  return;
}



/* Address: 0x100856f14 | FUN_100856f14 */

uint FUN_100856f14(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  Index IVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar10 = 4L << uVar5;
  IVar4.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_100856fbc;
LAB_100856f5c:
    uVar9 = (ulong)IVar4.cmsgPointer.unknown >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_100856f5c;
LAB_100856fbc:
    uVar9 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar9 = param_5 >> 0x38 & 0xf;
    }
    if (uVar9 < (ulong)IVar4.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100857278);
      (*pcVar2)();
    }
    uVar9 = Swift::String::UTF8View::_foreignDistance((Index)0xf,IVar4,param_4);
  }
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_100857074;
LAB_100856f78:
    lVar3 = ((ulong)param_3.cmsgPointer.unknown >> 0x10) -
            ((ulong)param_2.cmsgPointer.unknown >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_100856f78;
LAB_100857074:
    uVar10 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar10 = param_5 >> 0x38 & 0xf;
    }
    if (uVar10 < (ulong)param_2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100857268);
      (*pcVar2)();
    }
    if (uVar10 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085726c);
      (*pcVar2)();
    }
    lVar3 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  uVar10 = uVar9 + lVar3;
  if (SCARRY8(uVar9,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100857260);
    (*pcVar2)();
  }
  if ((long)uVar10 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100857264);
    (*pcVar2)();
  }
  pbVar7 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar7 = (byte *)(uVar9 + param_1);
  }
  if (*pbVar7 == 0x2b) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100857274);
      (*pcVar2)();
    }
    if (uVar10 - uVar9 == 1) goto LAB_100857234;
    uVar5 = 0;
    lVar3 = lVar3 + -1;
    do {
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar8 = bVar1 - 0x30;
      if (9 < uVar8) {
        uVar8 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar8 = uVar8 - 0x37;
        }
        else {
          if (5 < uVar8 - 0x61) goto LAB_100857234;
          uVar8 = uVar8 - 0x57;
        }
      }
      if (0xf < (uVar5 & 0xff)) goto LAB_100857234;
      uVar5 = uVar8 + uVar5 * 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else if (*pbVar7 == 0x2d) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100857270);
      (*pcVar2)();
    }
    if (uVar10 - uVar9 == 1) {
LAB_100857234:
      uVar5 = 0;
      iVar6 = 1;
      goto LAB_10085723c;
    }
    uVar5 = 0;
    lVar3 = lVar3 + -1;
    do {
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar8 = bVar1 - 0x30;
      if (9 < uVar8) {
        uVar8 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar8 = uVar8 - 0x37;
        }
        else {
          if (5 < uVar8 - 0x61) goto LAB_100857234;
          uVar8 = uVar8 - 0x57;
        }
      }
      if ((0xf < (uVar5 & 0xff)) ||
         (uVar5 = (uVar5 & 0xf) * 0x10 - (uVar8 & 0xff), (uVar5 & 0xffffff00) != 0))
      goto LAB_100857234;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    if (uVar10 == uVar9) goto LAB_100857234;
    uVar5 = 0;
    iVar6 = 0;
    if (pbVar7 == (byte *)0x0) goto LAB_10085723c;
    do {
      bVar1 = *pbVar7;
      uVar8 = bVar1 - 0x30;
      if (9 < uVar8) {
        uVar8 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar8 = uVar8 - 0x37;
        }
        else {
          if (5 < uVar8 - 0x61) goto LAB_100857234;
          uVar8 = uVar8 - 0x57;
        }
      }
      if (0xf < (uVar5 & 0xff)) goto LAB_100857234;
      uVar5 = uVar8 + uVar5 * 0x10;
      pbVar7 = pbVar7 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar6 = 0;
LAB_10085723c:
  return uVar5 & 0xff | iVar6 << 8;
}



/* Address: 0x100857278 | FUN_100857278 */

void * FUN_100857278(char *param_1,void *param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  __int64 _Var5;
  Index IVar6;
  Substring SVar7;
  UnsafeBufferPointer<__int8> UVar8;
  void *pvVar9;
  Index IVar10;
  void *pvVar12;
  Index IVar13;
  ulong uVar14;
  ulong uVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined *local_78;
  ulong uStack_70;
  _StringObject _Var11;
  
  SVar16.bridgeObject = param_2;
  SVar16.str = param_1;
  uVar4 = Swift::String::get_count(SVar16);
  pvVar12 = (void *)0x0;
  if ((uVar4 & 1) == 0) {
    SVar17.bridgeObject = param_2;
    SVar17.str = param_1;
    _Var5 = Swift::String::get_count(SVar17);
    lVar1 = 0;
    if (1 < _Var5) {
      lVar1 = _Var5 / 2;
    }
    pvVar12 = (void *)0x0;
    FUN_100836ba4(0,lVar1,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar4 = (ulong)param_1 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar4 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      pvVar9 = pvVar12;
      IVar13.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0xf;
      uVar14 = 0;
      do {
        SVar19.bridgeObject = param_2;
        SVar19.str = param_1;
        IVar6 = Swift::String::index(IVar13,2,SVar19);
        uVar15 = (ulong)IVar6.cmsgPointer.unknown >> 0xe;
        if (uVar15 < uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100857478);
          (*pcVar2)();
        }
        SVar18.bridgeObject = param_1;
        SVar18.str = (char *)IVar6.cmsgPointer.unknown;
        IVar10 = IVar6;
        _Var11.unknown = param_1;
        pvVar12 = param_2;
        SVar7 = Swift::String::get_subscript((Range<Index>)IVar13.cmsgPointer.unknown,SVar18);
        if (((ulong)SVar7.unknown ^ (ulong)IVar10.cmsgPointer.unknown) >> 0xe == 0) {
          _swift_bridgeObjectRelease(pvVar9);
          pvVar9 = pvVar12;
LAB_100857448:
          _swift_bridgeObjectRelease(pvVar9);
          return (void *)0x0;
        }
        if (((ulong)pvVar12 >> 0x3c & 1) == 0) {
          if (((ulong)pvVar12 >> 0x3d & 1) == 0) {
            if (((ulong)_Var11.unknown >> 0x3c & 1) == 0) {
              UVar8 = Swift::_StringObject::get_sharedUTF8(_Var11);
            }
            else {
              UVar8.unknown = (undefined *)(((ulong)pvVar12 & 0xfffffffffffffff) + 0x20);
            }
          }
          else {
            uStack_70 = (ulong)pvVar12 & 0xffffffffffffff;
            UVar8.unknown = (undefined *)&local_78;
            local_78 = _Var11.unknown;
          }
          FUN_100856f14(UVar8.unknown,SVar7.unknown,IVar10.cmsgPointer.unknown,_Var11.unknown,
                        pvVar12);
          uVar3 = (uint)UVar8.unknown;
          _swift_bridgeObjectRelease(pvVar12);
        }
        else {
          FUN_100837174(SVar7.unknown,IVar10.cmsgPointer.unknown,_Var11.unknown,pvVar12,0x10);
          _swift_bridgeObjectRelease(pvVar12);
          uVar3 = (uint)SVar7.unknown;
        }
        if ((uVar3 >> 8 & 0xff) == 1) goto LAB_100857448;
        uVar14 = *(ulong *)((long)pvVar9 + 0x10);
        pvVar12 = pvVar9;
        if (*(ulong *)((long)pvVar9 + 0x18) >> 1 <= uVar14) {
          pvVar12 = (void *)(ulong)(1 < *(ulong *)((long)pvVar9 + 0x18));
          FUN_100836ba4(pvVar12,uVar14 + 1,1,pvVar9);
        }
        *(ulong *)((long)pvVar12 + 0x10) = uVar14 + 1;
        *(char *)((long)pvVar12 + uVar14 + 0x20) = (char)uVar3;
        pvVar9 = pvVar12;
        IVar13 = IVar6;
        uVar14 = uVar15;
      } while (uVar15 < uVar4 << 2);
    }
  }
  return pvVar12;
}



/* Address: 0x100857488 | FUN_100857488 */

undefined * FUN_100857488(NSDataBase64DecodingOptions param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  tuple2 tVar10;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar9 = *(long *)(IVar3.unknown + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  Foundation::Data::_init(param_1);
  if (0xe < param_2 >> 0x3c) {
    return (undefined *)0x0;
  }
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar8 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar6 = (int)((ulong)param_1.unknown >> 0x20);
      if (SBORROW4(iVar6,(int)param_1.unknown)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008575c8);
        (*pcVar2)();
      }
      puVar8 = (undefined *)(long)(iVar6 - (int)param_1.unknown);
    }
  }
  else {
    if (uVar5 != 2) goto LAB_100857594;
    puVar8 = (undefined *)(*(long *)(param_1.unknown + 0x18) - *(long *)(param_1.unknown + 0x10));
    if (SBORROW8(*(long *)(param_1.unknown + 0x18),*(long *)(param_1.unknown + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008575c4);
      (*pcVar2)();
    }
  }
  if (puVar8 != (undefined *)0x0) {
    puVar4 = puVar8;
    FUN_100837588(puVar8,0);
    tVar10 = Foundation::Data::_copyContents
                       ((UnsafeMutableBufferPointer<__int8>)
                        (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)),
                        (Data)(puVar4 + 0x20));
    FUN_10003bf18(param_1.unknown,param_2);
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
    if (tVar10._.unknown.unknown == puVar8) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100857580);
    (*pcVar2)();
  }
LAB_100857594:
  FUN_10003bf18();
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x1008575c8 | FUN_1008575c8 */

undefined1  [16] FUN_1008575c8(void)

{
  return ZEXT816(0x100f06e00);
}



/* Address: 0x1008575d8 | FUN_1008575d8 */

undefined1  [16] FUN_1008575d8(void)

{
  return ZEXT816(0x100f06e20);
}



/* Address: 0x1008575e8 | FUN_1008575e8 */

void FUN_1008575e8(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((__uint8)param_2.unknown,param_2);
  return;
}



/* Address: 0x10085760c | FUN_10085760c */

void FUN_10085760c(Hasher param_1,Hasher param_2)

{
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint8)param_1.unknown,param_2);
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x100857650 | FUN_100857650 */

void FUN_100857650(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100859230(&local_58);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x100857698 | FUN_100857698 */

void FUN_100857698(void)

{
  FUN_1008576b0();
  return;
}



/* Address: 0x1008576a4 | FUN_1008576a4 */

void FUN_1008576a4(void)

{
  FUN_1008576b0();
  return;
}



/* Address: 0x1008576b0 | FUN_1008576b0 */

void FUN_1008576b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  code *param_9)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar4 = *(long *)(param_7 + -8);
  puVar1 = auStack_70 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_5;
  (**(code **)(lVar4 + 0x10))(puVar1,param_6,param_7);
  lVar2 = param_7;
  FUN_100871980(puVar1,param_7,param_8);
  lVar3 = lVar2;
  (*param_9)();
  _swift_bridgeObjectRelease(lVar2);
  (**(code **)(lVar4 + 8))(param_6,param_7);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = local_68;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar1;
  param_1[6] = lVar3;
  return;
}



/* Address: 0x100857790 | FUN_100857790 */

undefined8 FUN_100857790(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[3];
  _swift_bridgeObjectRetain(unaff_x20[1]);
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}



/* Address: 0x1008577d8 | FUN_1008577d8 */

void FUN_1008577d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  _swift_bridgeObjectRelease(unaff_x20[3]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  return;
}



/* Address: 0x100857828 | FUN_100857828 */

undefined1  [16] FUN_100857828(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = uVar2;
  FUN_100858afc(uVar2,uVar3);
  if ((uVar1 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    FUN_100872ba8(uVar2,uVar3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Address: 0x100857890 | FUN_100857890 */

void FUN_100857890(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 uStack_50;
  
  uVar1 = param_1;
  FUN_100858afc();
  if ((uVar1 & 1) != 0) {
    local_58 = FUN_100872b9c;
    uStack_50 = 0;
    puVar2 = &DAT_100fe81f8;
    local_68 = param_1;
    uStack_60 = param_2;
    FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
    puVar3 = &DAT_100fe8200;
    FUN_100134584(&DAT_100fe8200,&DAT_100fe81f8,&DAT_100c7d850,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    Swift::String::UnicodeScalarView::_append(&local_68,puVar2,puVar3);
    _swift_bridgeObjectRelease(param_2);
    param_1 = 0;
    param_2 = 0xe000000000000000;
  }
  uVar4 = param_2;
  FUN_1008590a4();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(ulong *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  return;
}



/* Address: 0x100857974 | FUN_100857974 */

undefined1  [16] FUN_100857974(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  pvVar1 = (void *)0x48;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x48);
  }
  else {
    _swift_coroFrameAlloc(0x48,0xb952);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x30) = unaff_x20;
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)((long)pvVar1 + 0x38) = uVar4;
  uVar2 = uVar3;
  FUN_100858afc(uVar3,uVar4);
  if ((uVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    FUN_100872ba8();
  }
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(ulong *)((long)pvVar1 + 0x20) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x28) = uVar4;
  auVar5._8_8_ = (long)pvVar1 + 0x20;
  auVar5._0_8_ = FUN_100857a24;
  return auVar5;
}



/* Address: 0x100857a24 | FUN_100857a24 */

void FUN_100857a24(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar6 = (ulong *)*param_1;
  uVar7 = puVar6[4];
  uVar8 = puVar6[5];
  uVar2 = uVar7;
  FUN_100858afc(uVar7,uVar8);
  if ((param_2 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      *puVar6 = uVar7;
      puVar6[1] = uVar8;
      puVar6[2] = (ulong)FUN_100872b9c;
      puVar6[3] = 0;
      puVar3 = &DAT_100fe81f8;
      FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
      puVar4 = &DAT_100fe8200;
      FUN_100134584(&DAT_100fe8200,&DAT_100fe81f8,&DAT_100c7d850,
                    PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0
                   );
      Swift::String::UnicodeScalarView::_append(puVar6,puVar3,puVar4);
      _swift_bridgeObjectRelease(uVar8);
      uVar7 = 0;
      uVar8 = 0xe000000000000000;
    }
    uVar2 = puVar6[6];
    uVar1 = puVar6[7];
    uVar5 = uVar8;
    FUN_1008590a4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar1);
    *(ulong *)(uVar2 + 0x28) = uVar7;
    *(ulong *)(uVar2 + 0x30) = uVar5;
  }
  else {
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    else {
      *puVar6 = uVar7;
      puVar6[1] = uVar8;
      puVar6[2] = (ulong)FUN_100872b9c;
      puVar6[3] = 0;
      puVar3 = &DAT_100fe81f8;
      FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
      puVar4 = &DAT_100fe8200;
      FUN_100134584(&DAT_100fe8200,&DAT_100fe81f8,&DAT_100c7d850,
                    PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0
                   );
      Swift::String::UnicodeScalarView::_append(puVar6,puVar3,puVar4);
      uVar7 = 0;
      uVar8 = 0xe000000000000000;
    }
    uVar2 = puVar6[6];
    uVar1 = puVar6[7];
    uVar5 = uVar8;
    FUN_1008590a4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar1);
    *(ulong *)(uVar2 + 0x28) = uVar7;
    *(ulong *)(uVar2 + 0x30) = uVar5;
    _swift_bridgeObjectRelease(puVar6[5]);
  }
  _free(puVar6);
  return;
}



/* Address: 0x100857bd8 | FUN_100857bd8 */

void FUN_100857bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  FUN_1008723c8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                param_3,param_4,param_5,
                &stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_6,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  }
  return;
}



/* Address: 0x100857c54 | FUN_100857c54 */

void FUN_100857c54(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Address: 0x100857c5c | FUN_100857c5c */

bool FUN_100857c5c(UTF8View param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  __uint8 _Var6;
  Index position;
  UnsafeBufferPointer<__int8> UVar7;
  uint uVar8;
  Index after;
  ulong uVar9;
  UTF8View UVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_70;
  ulong uStack_68;
  
  uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    bVar5 = true;
  }
  else {
    uVar8 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar8 = 1;
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      UVar10.unknown = param_1.unknown;
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar7 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
        }
        else {
          UVar7.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        }
        UVar10.unknown = (undefined *)(ulong)(byte)*UVar7.unknown;
      }
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x10004;
    }
    else {
      _Var6 = Swift::String::UTF8View::_foreignSubscript((Index)0xf,param_1);
      UVar10.unknown = (undefined *)(ulong)_Var6;
      after = Swift::String::UTF8View::_foreignIndex((Index)0xf,param_1);
    }
    bVar5 = false;
    uVar1 = (uint)UVar10.unknown & 0xff;
    if ((uVar1 != 9) && (uVar1 != 0x20)) {
      uVar12 = 4L << uVar8;
      while (((uVar8 = (uint)UVar10.unknown, (uVar8 & 0xff) == 0x20 || (uVar8 & 0xff) == 9 ||
              ((uVar8 >> 7 & 1) != 0)) || ((uVar8 - 0x21 & 0xff) < 0x5e))) {
        if (uVar2 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) == 0) {
          return (uVar8 & 0xff) != 0x20 && (uVar8 & 0xff) != 9;
        }
        uVar11 = (ulong)after.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (uVar11 == uVar12) {
          FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        }
        uVar9 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar2 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100857e50);
          (*pcVar3)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) != 0) {
            local_70 = param_1.unknown;
            uStack_68 = param_2 & 0xffffffffffffff;
            bVar4 = *(byte *)((long)&local_70 + uVar9);
            goto joined_r0x000100857d80;
          }
          UVar7.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar7 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          }
          UVar10.unknown = (undefined *)(ulong)(byte)UVar7.unknown[uVar9];
          if (uVar11 == uVar12) goto LAB_100857dd4;
LAB_100857d84:
          if ((param_2 >> 0x3c & 1) == 0) goto LAB_100857d08;
LAB_100857d88:
          if (uVar2 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100857e54);
            (*pcVar3)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,param_1);
        }
        else {
          bVar4 = Swift::String::UTF8View::_foreignSubscript(position,param_1);
joined_r0x000100857d80:
          UVar10.unknown = (undefined *)(ulong)bVar4;
          if (uVar11 != uVar12) goto LAB_100857d84;
LAB_100857dd4:
          FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
          if ((param_2 >> 0x3c & 1) != 0) goto LAB_100857d88;
LAB_100857d08:
          after.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
      }
      bVar5 = false;
    }
  }
  return bVar5;
}



/* Address: 0x100857e90 | FUN_100857e90 */

bool FUN_100857e90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [12];
  byte local_64;
  char local_63;
  byte local_62;
  char local_61;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar8 = *(long *)(param_2 + -8);
  lVar4 = *(long *)(lVar8 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar7 = *(long *)(lVar3 + -8);
  lVar5 = (long)(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar3,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  if (local_61 == '\x01') {
    (**(code **)(lVar7 + 8))(lVar5,lVar3);
    bVar2 = true;
  }
  else if ((local_62 == 9) || (local_62 == 0x20)) {
LAB_100857fb0:
    (**(code **)(lVar7 + 8))(lVar5,lVar3);
    bVar2 = false;
  }
  else {
    do {
      uVar6 = (uint)local_62;
      if ((uVar6 != 9) && (((uVar6 != 0x20 && (-1 < (char)local_62)) && (0x5d < uVar6 - 0x21))))
      goto LAB_100857fb0;
      Swift::IteratorProtocol::_next();
      local_62 = local_64;
    } while (local_63 != '\x01');
    (**(code **)(lVar7 + 8))(lVar5,lVar3);
    bVar2 = uVar6 != 0x20 && uVar6 != 9;
  }
  return bVar2;
}



/* Address: 0x100858048 | FUN_100858048 */

void FUN_100858048(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = *param_2;
  cVar1 = cVar3;
  if (0x5d < ((int)cVar3 - 0x21U & 0xff) && -1 < cVar3) {
    cVar1 = ' ';
  }
  cVar2 = cVar3;
  if (cVar3 != ' ') {
    cVar2 = cVar1;
  }
  if (cVar3 != '\t') {
    cVar3 = cVar2;
  }
  *param_1 = cVar3;
  return;
}



/* Address: 0x100858080 | FUN_100858080 */

bool FUN_100858080(char *param_1)

{
  return *param_1 == '\t' || *param_1 == ' ';
}



/* Address: 0x100858098 | FUN_100858098 */

void FUN_100858098(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = *param_2;
  bVar1 = 0x20;
  if (0xd < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x2401U) == 0) {
    bVar1 = bVar2;
  }
  *param_1 = bVar1;
  return;
}



/* Address: 0x1008580c4 | thunk_FUN_100857c5c */

void thunk_FUN_100857c5c(void)

{
  FUN_100857c5c();
  return;
}



/* Address: 0x1008580c8 | FUN_1008580c8 */

void FUN_1008580c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100857e90(param_1,param_2,*(undefined8 *)(param_3 + 8));
  return;
}


