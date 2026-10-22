/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006f3e5c | FUN_1006f3e5c */

void FUN_1006f3e5c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x30);
  }
  return;
}



/* Address: 0x1006f3ec8 | thunk_FUN_1006f3ecc */

long * thunk_FUN_1006f3ecc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && *(ulong *)(lVar1 + 0x40) < 0x19) &&
      (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006f3ecc | FUN_1006f3ecc */

long * FUN_1006f3ecc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && *(ulong *)(lVar1 + 0x40) < 0x19) &&
      (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006f3f3c | FUN_1006f3f3c */

void FUN_1006f3f3c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001006f3f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 8))();
  return;
}



/* Address: 0x1006f3f4c | FUN_1006f3f4c */

undefined8 FUN_1006f3f4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x10))();
  return param_1;
}



/* Address: 0x1006f3f7c | FUN_1006f3f7c */

undefined8 FUN_1006f3f7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x18))();
  return param_1;
}



/* Address: 0x1006f3fac | FUN_1006f3fac */

undefined8 FUN_1006f3fac(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x20))();
  return param_1;
}



/* Address: 0x1006f3fdc | FUN_1006f3fdc */

undefined8 FUN_1006f3fdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x28))();
  return param_1;
}



/* Address: 0x1006f400c | thunk_FUN_1006f4010 */

uint * thunk_FUN_1006f4010(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1006f40a8;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1006f4040;
    }
    if (1 < uVar7) goto LAB_1006f403c;
  }
  else {
LAB_1006f403c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1006f4040:
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
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1006f40a8:
                    /* WARNING: Could not recover jumptable at 0x0001006f40ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Address: 0x1006f4010 | FUN_1006f4010 */

uint * FUN_1006f4010(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1006f40a8;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1006f4040;
    }
    if (1 < uVar7) goto LAB_1006f403c;
  }
  else {
LAB_1006f403c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1006f4040:
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
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1006f40a8:
                    /* WARNING: Could not recover jumptable at 0x0001006f40ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Address: 0x1006f4104 | thunk_FUN_1006f4108 */

void thunk_FUN_1006f4108(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  sVar6 = *(size_t *)(lVar4 + 0x40);
  uVar5 = (uint)sVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
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
      _bzero(param_1,sVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006f4250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Address: 0x1006f4108 | FUN_1006f4108 */

void FUN_1006f4108(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  sVar6 = *(size_t *)(lVar4 + 0x40);
  uVar5 = (uint)sVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
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
      _bzero(param_1,sVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006f4250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Address: 0x1006f42b4 | FUN_1006f42b4 */

void FUN_1006f42b4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbc6b0);
  return;
}



/* Address: 0x1006f42c0 | FUN_1006f42c0 */

undefined8 FUN_1006f42c0(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
}



/* Address: 0x1006f42cc | FUN_1006f42cc */

void FUN_1006f42cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001006f42dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  return;
}



/* Address: 0x1006f42e0 | FUN_1006f42e0 */

void FUN_1006f42e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 8);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  lVar4 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,lVar4,0x100cbce58,&TargetProtocolRequirement_100cbce60);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  _swift_task_switch(FUN_1006f4390,0,0);
  return;
}



/* Address: 0x1006f4390 | FUN_1006f4390 */

void FUN_1006f4390(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x10))
            (uVar4,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar5 + 0x10))(uVar8,uVar4,uVar2,lVar5);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x20);
  FUN_100004640(lVar3,uVar2);
  piVar7 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1006f4464;
                    /* WARNING: Could not recover jumptable at 0x0001006f4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar6,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0xa8),uVar2,lVar5);
  return;
}



/* Address: 0x1006f4464 | FUN_1006f4464 */

void FUN_1006f4464(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006f44c8;
  }
  else {
    pcVar1 = FUN_1006f4550;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006f44c8 | FUN_1006f44c8 */

void FUN_1006f44c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x80));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar3[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar3 = uVar4;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(unaff_x22 + 0x50);
  puVar3[5] = uVar7;
  puVar3[4] = uVar6;
  puVar3[7] = uVar9;
  puVar3[6] = uVar8;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006f454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f4550 | FUN_1006f4550 */

void FUN_1006f4550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006f45a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f45ac | FUN_1006f45ac */

void FUN_1006f45ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006da9d8;
  FUN_1006f42e0(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4);
  return;
}



/* Address: 0x1006f4624 | FUN_1006f4624 */

void FUN_1006f4624(void)

{
  FUN_1006f4968();
  return;
}



/* Address: 0x1006f466c | FUN_1006f466c */

void FUN_1006f466c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lVar4;
  long unaff_x22;
  
  FUN_1006f8f6c();
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  lVar4 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,lVar4,0x100cbc964,&TargetProtocolRequirement_100cbc97c);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  _swift_task_switch(FUN_1006f4724,0,0);
  return;
}



/* Address: 0x1006f4678 | FUN_1006f4678 */

void FUN_1006f4678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  lVar4 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,lVar4,0x100cbc964,&TargetProtocolRequirement_100cbc97c);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  _swift_task_switch(FUN_1006f4724,0,0);
  return;
}



/* Address: 0x1006f4724 | FUN_1006f4724 */

/* WARNING: Removing unreachable block (ram,0x0001006f478c) */

void FUN_1006f4724(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar8 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x10))
            (uVar3,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar8 + 0x20))(uVar7,uVar3,uVar2,lVar8);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar8 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar2);
  piVar6 = *(int **)(lVar8 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1006f4834;
                    /* WARNING: Could not recover jumptable at 0x0001006f4830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0xa8),uVar2,lVar8);
  return;
}



/* Address: 0x1006f4834 | FUN_1006f4834 */

void FUN_1006f4834(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1006f44c8;
  }
  else {
    pcVar1 = FUN_1006f4898;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006f4898 | FUN_1006f4898 */

void FUN_1006f4898(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006f48ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f48f0 | FUN_1006f48f0 */

void FUN_1006f48f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1006da9d8;
  FUN_1006f4678(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4);
  return;
}



/* Address: 0x1006f4968 | FUN_1006f4968 */

void FUN_1006f4968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined4 param_10,undefined4 param_11,code *param_12,code *param_13,
                  undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long alStack_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_90 [48];
  
  lVar5 = *(long *)(param_8 + 0x18);
  lVar6 = *(long *)(lVar5 + -8);
  lVar2 = param_9;
  local_e8 = param_2;
  local_e0 = param_3;
  local_d8 = param_4;
  local_d0 = param_5;
  local_c8 = param_6;
  local_c0 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar2;
  FUN_10000cbb0(&local_b8);
  (**(code **)(*(long *)(param_9 + -8) + 0x10))();
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  lVar4 = *(long *)(param_8 + 0x28);
  uStack_f8 = *(undefined8 *)(param_8 + 0x28);
  local_100 = *(undefined8 *)(param_8 + 0x20);
  (*param_12)(&local_b8,auStack_90);
  pcVar7 = *(code **)(lVar4 + 0x18);
  lStack_a0 = uStack_f8;
  local_a8 = local_100;
  lVar2 = 0;
  local_b8 = uVar3;
  lStack_b0 = lVar5;
  (*param_13)(0,&local_b8);
  _swift_getWitnessTable(param_14,lVar2);
  *(long *)((long)alStack_110 + lVar1) = lVar5;
  *(long *)((long)alStack_110 + lVar1 + 8) = lVar4;
  (*pcVar7)((long)&local_100 + lVar1,local_e8,local_e0,local_d8,local_d0,local_c8,auStack_90,lVar2,
            param_14);
  (**(code **)(lVar6 + 8))((long)&local_100 + lVar1,lVar5);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(auStack_90,lVar2);
  (**(code **)(*(long *)(param_8 + -8) + 0x10))(local_c0);
  return;
}



/* Address: 0x1006f4ac8 | FUN_1006f4ac8 */

void FUN_1006f4ac8(void)

{
  FUN_1006f4968();
  return;
}



/* Address: 0x1006f4b10 | FUN_1006f4b10 */

void FUN_1006f4b10(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbc758);
  return;
}



/* Address: 0x1006f4b1c | FUN_1006f4b1c */

void FUN_1006f4b1c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbc704);
  return;
}



/* Address: 0x1006f4b28 | FUN_1006f4b28 */

long FUN_1006f4b28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Address: 0x1006f4b60 | FUN_1006f4b60 */

undefined8 FUN_1006f4b60(undefined8 param_1)

{
  FUN_10008820c();
  return param_1;
}



/* Address: 0x1006f4b84 | FUN_1006f4b84 */

undefined8 * FUN_1006f4b84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1006f4bbc | thunk_FUN_100420420 */

int thunk_FUN_100420420(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1006f4bc0 | thunk_FUN_100420468 */

void thunk_FUN_100420468(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1006f4bc4 | thunk_FUN_1006da9d8 */

void thunk_FUN_1006da9d8(void)

{
  FUN_1006da9d8();
  return;
}



/* Address: 0x1006f4bc8 | thunk_FUN_1006f42cc */

void thunk_FUN_1006f42cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001006f42dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  return;
}



/* Address: 0x1006f4bcc | thunk_FUN_1006f4b84 */

void thunk_FUN_1006f4b84(void)

{
  FUN_1006f4b84();
  return;
}



/* Address: 0x1006f4bd0 | thunk_FUN_1006f3f4c */

void thunk_FUN_1006f3f4c(void)

{
  FUN_1006f3f4c();
  return;
}



/* Address: 0x1006f4bd4 | thunk_FUN_1006f3f7c */

void thunk_FUN_1006f3f7c(void)

{
  FUN_1006f3f7c();
  return;
}



/* Address: 0x1006f4bd8 | thunk_FUN_1006f3fac */

void thunk_FUN_1006f3fac(void)

{
  FUN_1006f3fac();
  return;
}



/* Address: 0x1006f4bdc | thunk_FUN_1006f3fdc */

void thunk_FUN_1006f3fdc(void)

{
  FUN_1006f3fdc();
  return;
}



/* Address: 0x1006f4be0 | thunk_FUN_1006f44c8 */

void thunk_FUN_1006f44c8(void)

{
  FUN_1006f44c8();
  return;
}



/* Address: 0x1006f4be4 | thunk_FUN_1006f4108 */

void thunk_FUN_1006f4108(void)

{
  thunk_FUN_1006f4108();
  return;
}



/* Address: 0x1006f4be8 | thunk_FUN_100420468 */

void thunk_FUN_100420468(void)

{
  thunk_FUN_100420468();
  return;
}



/* Address: 0x1006f4bec | thunk_FUN_1006f4b28 */

void thunk_FUN_1006f4b28(void)

{
  FUN_1006f4b28();
  return;
}



/* Address: 0x1006f4bf0 | thunk_FUN_100004594 */

void thunk_FUN_100004594(void)

{
  thunk_FUN_100004594();
  return;
}



/* Address: 0x1006f4bf4 | thunk_FUN_10020eacc */

void thunk_FUN_10020eacc(void)

{
  FUN_10020eacc();
  return;
}



/* Address: 0x1006f4bf8 | thunk_FUN_1006f3e5c */

void thunk_FUN_1006f3e5c(void)

{
  thunk_FUN_1006f3e5c();
  return;
}



/* Address: 0x1006f4bfc | thunk_FUN_1006f3ecc */

void thunk_FUN_1006f3ecc(void)

{
  thunk_FUN_1006f3ecc();
  return;
}



/* Address: 0x1006f4c00 | thunk_FUN_1006f4010 */

void thunk_FUN_1006f4010(void)

{
  thunk_FUN_1006f4010();
  return;
}



/* Address: 0x1006f4c04 | thunk_FUN_1006f4b60 */

void thunk_FUN_1006f4b60(void)

{
  FUN_1006f4b60();
  return;
}



/* Address: 0x1006f4c08 | thunk_FUN_100420420 */

void thunk_FUN_100420420(void)

{
  thunk_FUN_100420420();
  return;
}



/* Address: 0x1006f4c0c | thunk_FUN_1006f3f3c */

void thunk_FUN_1006f3f3c(void)

{
  FUN_1006f3f3c();
  return;
}



/* Address: 0x1006f4c10 | thunk_FUN_1006f466c */

void thunk_FUN_1006f466c(void)

{
  FUN_1006f466c();
  return;
}



/* Address: 0x1006f4c14 | FUN_1006f4c14 */

undefined8 FUN_1006f4c14(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006f4f68();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1006f4c44 | thunk_FUN_1006f4d28 */

void thunk_FUN_1006f4d28(void)

{
  FUN_1006f4d28();
  return;
}



/* Address: 0x1006f4c48 | FUN_1006f4c48 */

void FUN_1006f4c48(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1006f4d28(*param_1,*(undefined1 *)(param_1 + 1),*param_2,*(undefined1 *)(param_2 + 1));
  return;
}



/* Address: 0x1006f4c60 | FUN_1006f4c60 */

void FUN_1006f4c60(void)

{
  return;
}



/* Address: 0x1006f4c70 | FUN_1006f4c70 */

undefined1  [16] FUN_1006f4c70(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10));
  _swift_bridgeObjectRetain(uVar1);
  return auVar2;
}



/* Address: 0x1006f4ca4 | FUN_1006f4ca4 */

undefined8 FUN_1006f4ca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006f4e4c();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1006f4cd4 | FUN_1006f4cd4 */

void FUN_1006f4cd4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}


