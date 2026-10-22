/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009a45bc | FUN_1009a45bc */

void FUN_1009a45bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,4);
  }
  return;
}



/* Address: 0x1009a4614 | FUN_1009a4614 */

long * FUN_1009a4614(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  sVar7 = *(ulong *)(lVar9 + 0x40);
  uVar6 = (uint)sVar7;
  uVar4 = sVar7;
  if (uVar1 < 4) {
    if (uVar6 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 4 >> (ulong)(uVar6 << 3 & 0x1f);
      uVar4 = 2;
      if (0xfffe < uVar2) {
        uVar4 = 4;
      }
      if (uVar2 < 0xff) {
        uVar4 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar4 = 1;
    }
    uVar4 = uVar4 + sVar7;
  }
  uVar5 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && uVar4 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,4,lVar8);
    if ((int)plVar3 != 0) {
      if (uVar1 < 4) {
        if (uVar6 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 4 >> (ulong)(uVar6 << 3 & 0x1f);
          uVar4 = 2;
          if (0xfffe < uVar1) {
            uVar4 = 4;
          }
          if (uVar1 < 0xff) {
            uVar4 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar4 = 1;
        }
        sVar7 = uVar4 + sVar7;
      }
      plVar3 = _memcpy(param_1,param_2,sVar7);
      return plVar3;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar9 + 0x38))(param_1,0,4,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009a47b0 | FUN_1009a47b0 */

void FUN_1009a47b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,4,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009a4808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Address: 0x1009a480c | FUN_1009a480c */

void * FUN_1009a480c(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,4,lVar5);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 4) {
      if ((uint)sVar3 < 4) {
        uVar1 = (uint)sVar3 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 4 >>
                (ulong)(uVar1 & 0x1f);
        uVar4 = 2;
        if (0xfffe < uVar1) {
          uVar4 = 4;
        }
        if (uVar1 < 0xff) {
          uVar4 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar4 = 1;
      }
      sVar3 = uVar4 + sVar3;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar5);
  (**(code **)(lVar6 + 0x38))(param_1,0,4,lVar5);
  return param_1;
}



/* Address: 0x1009a4900 | FUN_1009a4900 */

void * FUN_1009a4900(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar3 = param_1;
  (*pcVar9)(param_1,4,lVar7);
  pvVar2 = param_2;
  (*pcVar9)(param_2,4,lVar7);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar7);
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (3 < uVar5) goto LAB_1009a49e0;
    if (3 < (uint)sVar4) goto LAB_1009a4968;
LAB_1009a499c:
    uVar1 = (int)sVar4 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 4 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar8 + 0x38))(param_1,0,4,lVar7);
      return param_1;
    }
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (3 < uVar5) goto LAB_1009a49e0;
    if ((uint)sVar4 < 4) goto LAB_1009a499c;
LAB_1009a4968:
    uVar6 = 1;
  }
  sVar4 = uVar6 + sVar4;
LAB_1009a49e0:
  pvVar3 = _memcpy(param_1,param_2,sVar4);
  return pvVar3;
}



/* Address: 0x1009a4a58 | FUN_1009a4a58 */

void * FUN_1009a4a58(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,4,lVar5);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 4) {
      if ((uint)sVar3 < 4) {
        uVar1 = (uint)sVar3 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 4 >>
                (ulong)(uVar1 & 0x1f);
        uVar4 = 2;
        if (0xfffe < uVar1) {
          uVar4 = 4;
        }
        if (uVar1 < 0xff) {
          uVar4 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar4 = 1;
      }
      sVar3 = uVar4 + sVar3;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar5);
  (**(code **)(lVar6 + 0x38))(param_1,0,4,lVar5);
  return param_1;
}



/* Address: 0x1009a4b4c | FUN_1009a4b4c */

void * FUN_1009a4b4c(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar3 = param_1;
  (*pcVar9)(param_1,4,lVar7);
  pvVar2 = param_2;
  (*pcVar9)(param_2,4,lVar7);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar7);
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (3 < uVar5) goto LAB_1009a4c2c;
    if (3 < (uint)sVar4) goto LAB_1009a4bb4;
LAB_1009a4be8:
    uVar1 = (int)sVar4 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 4 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar7);
      (**(code **)(lVar8 + 0x38))(param_1,0,4,lVar7);
      return param_1;
    }
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (3 < uVar5) goto LAB_1009a4c2c;
    if ((uint)sVar4 < 4) goto LAB_1009a4be8;
LAB_1009a4bb4:
    uVar6 = 1;
  }
  sVar4 = uVar6 + sVar4;
LAB_1009a4c2c:
  pvVar3 = _memcpy(param_1,param_2,sVar4);
  return pvVar3;
}



/* Address: 0x1009a4ca4 | FUN_1009a4ca4 */

int FUN_1009a4ca4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (3 < uVar3) {
    uVar1 = uVar3 - 4;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 < 4) {
    if ((uint)lVar7 < 4) {
      uVar4 = (uint)lVar7 << 3;
      uVar4 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar3) + 4 >> (ulong)(uVar4 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar4) {
        uVar9 = 4;
      }
      if (uVar4 < 0xff) {
        uVar9 = (ulong)(uVar4 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar7 = uVar9 + lVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1009a4d9c;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1009a4d9c;
      goto LAB_1009a4d34;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_1009a4d34:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_1009a4d9c:
  if (uVar3 < 5) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if (3 < (uint)param_1) {
    iVar2 = (uint)param_1 - 4;
  }
  return iVar2;
}



/* Address: 0x1009a4e20 | FUN_1009a4e20 */

void FUN_1009a4e20(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  size_t sVar10;
  int iVar11;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (3 < uVar3) {
    uVar2 = uVar3 - 4;
  }
  sVar10 = *(size_t *)(lVar6 + 0x40);
  if (uVar3 < 4) {
    if ((uint)sVar10 < 4) {
      uVar9 = (uint)sVar10 << 3;
      uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) - uVar3) + 4 >> (ulong)(uVar9 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar9) {
        uVar7 = 4;
      }
      if (uVar9 < 0xff) {
        uVar7 = (ulong)(uVar9 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    sVar10 = uVar7 + sVar10;
  }
  uVar9 = (uint)sVar10;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar9 < 4) {
      bVar5 = bVar8;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar10);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar10);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar10) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar10) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar10) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar10) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar10) = 0;
    }
    if ((param_2 != 0) && (4 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001009a4f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 4);
      return;
    }
  }
  return;
}



/* Address: 0x1009a503c | FUN_1009a503c */

void FUN_1009a503c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001009a504c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,4);
  return;
}



/* Address: 0x1009a5050 | FUN_1009a5050 */

void FUN_1009a5050(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001009a5060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x38))(param_1,param_2,4);
  return;
}



/* Address: 0x1009a5064 | FUN_1009a5064 */

void FUN_1009a5064(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009a5070 | FUN_1009a5070 */

undefined1  [16] FUN_1009a5070(void)

{
  return ZEXT816(0x100f23ab0);
}



/* Address: 0x1009a5080 | thunk_FUN_1009a5084 */

void thunk_FUN_1009a5084(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff25a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8b430;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8b430,&DAT_100f23ab0);
  DAT_100ff25a0 = pTVar1;
  return;
}



/* Address: 0x1009a5084 | FUN_1009a5084 */

void FUN_1009a5084(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff25a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8b430;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8b430,&DAT_100f23ab0);
  DAT_100ff25a0 = pTVar1;
  return;
}



/* Address: 0x1009a50c4 | FUN_1009a50c4 */

/* WARNING: Removing unreachable block (ram,0x0001009a5168) */

void FUN_1009a50c4(long param_1,long *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_70 [32];
  
  pcVar1 = (code *)auStack_70;
  (**(code **)(param_3 + 0x38))();
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
  lVar3 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,uVar2,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
  FUN_1009a5064(0,uVar2,lVar3);
  FUN_1009a6bb8();
  (*pcVar1)(auStack_70,0);
  plVar4 = param_2;
  (**(code **)(param_3 + 0x40))(param_2,param_3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x88))();
  *(undefined1 *)plVar5 = 1;
  _swift_release(plVar4);
  if (param_1 != 0) {
    FUN_100988b88(0,0,param_1);
  }
  plVar4 = param_2;
  (**(code **)(*(long *)(param_3 + 8) + 0x28))(param_2);
  FUN_100629564();
  _swift_release(plVar4);
  (**(code **)(param_3 + 0x88))(param_2,param_3);
  return;
}



/* Address: 0x1009a5240 | FUN_1009a5240 */

byte FUN_1009a5240(void)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  long unaff_x20;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(unaff_x20 + 0xa0);
  pcVar3 = *(code **)(*(long *)pbVar4 + 0x88);
  pbVar2 = pbVar4;
  _swift_retain();
  (*pcVar3)();
  bVar1 = *pbVar2;
  _swift_release(pbVar4);
  return bVar1 & 1;
}



/* Address: 0x1009a5280 | FUN_1009a5280 */

byte FUN_1009a5280(byte *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  (**(code **)(param_2 + 0x40))();
  pbVar2 = param_1;
  (**(code **)(*(long *)param_1 + 0x88))();
  bVar1 = *pbVar2;
  _swift_release(param_1);
  return bVar1 & 1;
}



/* Address: 0x1009a52c0 | thunk_FUN_1009a52c4 */

void thunk_FUN_1009a52c4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar8 = unaff_x20 + 0x98;
  _swift_beginAccess(lVar8,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0x98) == '\x02') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0x98) = 3;
    _swift_endAccess(auStack_68);
    lVar8 = *(long *)(unaff_x20 + 0x50);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a5480);
      (*pcVar1)();
    }
    _swift_retain(lVar8);
    FUN_100629528();
    _swift_release(lVar8);
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
  }
  else {
    FUN_100991e0c();
    puVar2 = &DAT_100f21a58;
    uVar7 = 0;
    _swift_allocError(&DAT_100f21a58,lVar8,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
    if (param_1 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar8 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar6 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar5 = &DAT_100f23b70;
        _swift_allocObject(&DAT_100f23b70,0x20,7);
        *(long *)(puVar5 + 0x10) = param_1;
        *(undefined **)(puVar5 + 0x18) = puVar2;
        pcVar1 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar2);
        (*pcVar1)(thunk_FUN_1008d678c,puVar5,uVar3,lVar8);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar2;
        thunk_FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
    }
    FUN_1009ae784(puVar2,2,0);
    _swift_errorRelease(puVar2);
  }
  return;
}



/* Address: 0x1009a52c4 | FUN_1009a52c4 */

void FUN_1009a52c4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar8 = unaff_x20 + 0x98;
  _swift_beginAccess(lVar8,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0x98) == '\x02') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0x98) = 3;
    _swift_endAccess(auStack_68);
    lVar8 = *(long *)(unaff_x20 + 0x50);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a5480);
      (*pcVar1)();
    }
    _swift_retain(lVar8);
    FUN_100629528();
    _swift_release(lVar8);
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
  }
  else {
    FUN_100991e0c();
    puVar2 = &DAT_100f21a58;
    uVar7 = 0;
    _swift_allocError(&DAT_100f21a58,lVar8,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
    if (param_1 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar8 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar6 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar5 = &DAT_100f23b70;
        _swift_allocObject(&DAT_100f23b70,0x20,7);
        *(long *)(puVar5 + 0x10) = param_1;
        *(undefined **)(puVar5 + 0x18) = puVar2;
        pcVar1 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar2);
        (*pcVar1)(thunk_FUN_1008d678c,puVar5,uVar3,lVar8);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar2;
        thunk_FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
    }
    FUN_1009ae784(puVar2,2,0);
    _swift_errorRelease(puVar2);
  }
  return;
}



/* Address: 0x1009a5480 | FUN_1009a5480 */

void FUN_1009a5480(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar8 = unaff_x20 + 0xa0;
  _swift_beginAccess(lVar8,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0xa0) == '\x04') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0xa0) = 5;
    _swift_endAccess(auStack_68);
    lVar8 = *(long *)(unaff_x20 + 0x48);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a563c);
      (*pcVar1)();
    }
    _swift_retain(lVar8);
    FUN_100629528();
    _swift_release(lVar8);
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
  }
  else {
    FUN_100991e0c();
    puVar2 = &DAT_100f21a58;
    uVar7 = 0;
    _swift_allocError(&DAT_100f21a58,lVar8,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
    if (param_1 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar8 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar6 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar5 = &DAT_100f23bc0;
        _swift_allocObject(&DAT_100f23bc0,0x20,7);
        *(long *)(puVar5 + 0x10) = param_1;
        *(undefined **)(puVar5 + 0x18) = puVar2;
        pcVar1 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar2);
        (*pcVar1)(thunk_FUN_1008d678c,puVar5,uVar3,lVar8);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar2;
        thunk_FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
    }
    FUN_1009aeb18(puVar2,2,0);
    _swift_errorRelease(puVar2);
  }
  return;
}



/* Address: 0x1009a563c | FUN_1009a563c */

/* WARNING: Removing unreachable block (ram,0x0001009a571c) */
/* WARNING: Removing unreachable block (ram,0x0001009a5728) */
/* WARNING: Removing unreachable block (ram,0x0001009a57c0) */
/* WARNING: Removing unreachable block (ram,0x0001009a5748) */
/* WARNING: Removing unreachable block (ram,0x0001009a5810) */

void FUN_1009a563c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [32];
  
  uVar1 = param_2;
  (**(code **)(param_3 + 0x48))(param_2,param_3);
  lVar4 = *(long *)(param_3 + 8);
  pcVar2 = (code *)auStack_80;
  (**(code **)(param_3 + 0x38))(pcVar2,param_2,param_3);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,uVar3,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
  FUN_1009a5064(0,uVar3,param_3);
  FUN_1009a6994(uVar1);
  _swift_release(uVar1);
  (*pcVar2)(auStack_80,0);
  (**(code **)(lVar4 + 0x28))(param_2,lVar4);
  FUN_100629528();
  _swift_release(param_2);
  if (param_1 != 0) {
    FUN_100988b88(0,0,param_1);
  }
  return;
}



/* Address: 0x1009a5858 | thunk_FUN_1009a585c */

void thunk_FUN_1009a585c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  lVar7 = unaff_x20 + 0x98;
  _swift_beginAccess(lVar7,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0x98) == '\x02') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0x98) = 3;
    _swift_endAccess(auStack_68);
    lVar7 = *(long *)(unaff_x20 + 0x50);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009a5a54);
      (*pcVar8)();
    }
    _swift_retain(lVar7);
    FUN_100629528();
    _swift_release(lVar7);
    if (*(char *)(unaff_x20 + 0x98) == '\x03') {
      *(undefined1 *)(unaff_x20 + 0x98) = 4;
      FUN_1009ac5a0(param_1);
      return;
    }
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
  }
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100f23b48;
      _swift_allocObject(&DAT_100f23b48,0x20,7);
      *(long *)(puVar4 + 0x10) = param_1;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar1);
      (*pcVar8)(thunk_FUN_1008d678c,puVar4,uVar2,lVar7);
      _swift_release(puVar4);
    }
    else {
      puVar4 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  FUN_1009ae784(puVar1,2,0);
  _swift_errorRelease(puVar1);
  return;
}



/* Address: 0x1009a585c | FUN_1009a585c */

void FUN_1009a585c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  lVar7 = unaff_x20 + 0x98;
  _swift_beginAccess(lVar7,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0x98) == '\x02') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0x98) = 3;
    _swift_endAccess(auStack_68);
    lVar7 = *(long *)(unaff_x20 + 0x50);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009a5a54);
      (*pcVar8)();
    }
    _swift_retain(lVar7);
    FUN_100629528();
    _swift_release(lVar7);
    if (*(char *)(unaff_x20 + 0x98) == '\x03') {
      *(undefined1 *)(unaff_x20 + 0x98) = 4;
      FUN_1009ac5a0(param_1);
      return;
    }
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
  }
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100f23b48;
      _swift_allocObject(&DAT_100f23b48,0x20,7);
      *(long *)(puVar4 + 0x10) = param_1;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar1);
      (*pcVar8)(thunk_FUN_1008d678c,puVar4,uVar2,lVar7);
      _swift_release(puVar4);
    }
    else {
      puVar4 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  FUN_1009ae784(puVar1,2,0);
  _swift_errorRelease(puVar1);
  return;
}



/* Address: 0x1009a5a54 | FUN_1009a5a54 */

void FUN_1009a5a54(undefined8 param_1)

{
  FUN_1009a5c94(param_1,FUN_1009a719c,&DAT_100f23d00,thunk_FUN_1008d678c,FUN_1009aee9c);
  return;
}



/* Address: 0x1009a5a78 | FUN_1009a5a78 */

void FUN_1009a5a78(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  lVar7 = unaff_x20 + 0xa0;
  _swift_beginAccess(lVar7,auStack_68,0x21,0);
  if (*(char *)(unaff_x20 + 0xa0) == '\x04') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0xa0) = 5;
    _swift_endAccess(auStack_68);
    lVar7 = *(long *)(unaff_x20 + 0x48);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009a5c70);
      (*pcVar8)();
    }
    _swift_retain(lVar7);
    FUN_100629528();
    _swift_release(lVar7);
    if (*(char *)(unaff_x20 + 0xa0) == '\x05') {
      *(undefined1 *)(unaff_x20 + 0xa0) = 6;
      FUN_1009ac90c(param_1);
      return;
    }
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_68);
  }
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100f23b98;
      _swift_allocObject(&DAT_100f23b98,0x20,7);
      *(long *)(puVar4 + 0x10) = param_1;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar1);
      (*pcVar8)(thunk_FUN_1008d678c,puVar4,uVar2,lVar7);
      _swift_release(puVar4);
    }
    else {
      puVar4 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  FUN_1009aeb18(puVar1,2,0);
  _swift_errorRelease(puVar1);
  return;
}



/* Address: 0x1009a5c70 | FUN_1009a5c70 */

void FUN_1009a5c70(undefined8 param_1)

{
  FUN_1009a5c94(param_1,FUN_1009a749c,&DAT_100f23c88,thunk_FUN_1008d678c,FUN_1009af6bc);
  return;
}



/* Address: 0x1009a5c94 | FUN_1009a5c94 */

void FUN_1009a5c94(long param_1,code *param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_78 [24];
  
  lVar7 = unaff_x20 + 0x88;
  _swift_beginAccess(lVar7,auStack_78,0x21,0);
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    FUN_1009952dc();
    *(undefined1 *)(unaff_x20 + 0x88) = 2;
    _swift_endAccess(auStack_78);
    lVar7 = *(long *)(unaff_x20 + 0x48);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009a5e9c);
      (*pcVar8)();
    }
    _swift_retain(lVar7);
    FUN_100629528();
    _swift_release(lVar7);
    if (*(char *)(unaff_x20 + 0x88) == '\x02') {
      *(undefined1 *)(unaff_x20 + 0x88) = 3;
      (*param_2)(param_1);
      return;
    }
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100991e0c();
    puVar1 = &DAT_100f21a58;
    uVar6 = 0;
    _swift_allocError(&DAT_100f21a58,lVar7,0,0);
    _swift_willThrow();
    _swift_endAccess(auStack_78);
  }
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar3 & 1) == 0) {
      _swift_allocObject(param_3,0x20,7);
      *(long *)(param_3 + 0x10) = param_1;
      *(undefined **)(param_3 + 0x18) = puVar1;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar1);
      (*pcVar8)(param_4,param_3,uVar2,lVar7);
      _swift_release(param_3);
    }
    else {
      puVar4 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  (*param_5)(puVar1,2,0);
  _swift_errorRelease(puVar1);
  return;
}



/* Address: 0x1009a5e9c | FUN_1009a5e9c */

/* WARNING: Removing unreachable block (ram,0x0001009a5fec) */
/* WARNING: Removing unreachable block (ram,0x0001009a5f80) */
/* WARNING: Removing unreachable block (ram,0x0001009a5ffc) */
/* WARNING: Removing unreachable block (ram,0x0001009a6050) */
/* WARNING: Removing unreachable block (ram,0x0001009a601c) */
/* WARNING: Removing unreachable block (ram,0x0001009a5f90) */
/* WARNING: Removing unreachable block (ram,0x0001009a60a0) */

void FUN_1009a5e9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined1 auStack_80 [32];
  
  uVar1 = param_2;
  (**(code **)(param_3 + 0x48))(param_2,param_3);
  lVar7 = *(long *)(param_3 + 8);
  pcVar6 = *(code **)(param_3 + 0x38);
  pcVar2 = (code *)auStack_80;
  (*pcVar6)(pcVar2,param_2,param_3);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
  lVar4 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,uVar3,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
  uVar5 = 0;
  FUN_1009a5064(0,uVar3,lVar4);
  FUN_1009a6994(uVar1);
  _swift_release(uVar1);
  (*pcVar2)(auStack_80,0);
  uVar1 = param_2;
  (**(code **)(lVar7 + 0x28))(param_2,lVar7);
  FUN_100629528();
  _swift_release(uVar1);
  pcVar2 = (code *)auStack_80;
  (*pcVar6)(pcVar2,param_2,param_3);
  FUN_1009a6ac0(uVar5);
  (*pcVar2)(auStack_80,0);
  (**(code **)(param_3 + 0x70))(param_1,param_2,param_3);
  return;
}



/* Address: 0x1009a610c | FUN_1009a610c */

void FUN_1009a610c(void)

{
  FUN_1009a68f0();
  return;
}



/* Address: 0x1009a611c | FUN_1009a611c */

void FUN_1009a611c(void)

{
  FUN_1009a68f0();
  return;
}



/* Address: 0x1009a612c | FUN_1009a612c */

void FUN_1009a612c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  long lVar3;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  puVar2 = &stack0xffffffffffffffa0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1009a36f4(puVar2,param_1);
  FUN_1009a6e24(param_5,puVar2,param_2,param_3,param_4);
  (**(code **)(lVar3 + 8))(puVar2,CONCAT71(extraout_var,NVar1.value));
  return;
}



/* Address: 0x1009a61e0 | thunk_FUN_1009ae784 */

void thunk_FUN_1009ae784(void)

{
  FUN_1009ae784();
  return;
}



/* Address: 0x1009a61e4 | FUN_1009a61e4 */

/* WARNING: Removing unreachable block (ram,0x0001009a63b8) */
/* WARNING: Removing unreachable block (ram,0x0001009a6550) */
/* WARNING: Removing unreachable block (ram,0x0001009a63c8) */
/* WARNING: Removing unreachable block (ram,0x0001009a655c) */
/* WARNING: Removing unreachable block (ram,0x0001009a63e8) */

void FUN_1009a61e4(undefined8 param_1,char param_2,long param_3,long *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x20;
  code *pcVar15;
  undefined1 *puVar16;
  undefined1 auStack_b0 [8];
  undefined1 local_80 [32];
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
  lVar12 = param_5;
  _swift_getAssociatedConformanceWitness
            (param_5,param_4,lVar2,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
  puVar3 = (undefined8 *)0x0;
  FUN_1009a5064(0,lVar2,lVar12);
  lVar13 = puVar3[-1];
  uVar11 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar16 = auStack_b0 + -uVar11;
  lVar14 = (long)puVar16 - uVar11;
  lVar12 = lVar14 - uVar11;
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001009a636c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x80))(param_1,param_3,param_4,param_5);
    return;
  }
  if (param_2 == '\x01') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar9 = &DAT_100eeb710;
    uVar10 = 0;
    _swift_allocError(&DAT_100eeb710,puVar3,0,0);
    *puVar3 = 1;
    *(undefined1 *)(puVar3 + 1) = 3;
    uVar11 = *(ulong *)(param_3 + 0x20);
    lVar12 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar11;
    lVar2 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar8 = &DAT_100f23ad0;
      _swift_allocObject(&DAT_100f23ad0,0x20,7);
      *(long *)(puVar8 + 0x10) = param_3;
      *(undefined **)(puVar8 + 0x18) = puVar9;
      pcVar15 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar9);
      (*pcVar15)(FUN_1008d678c,puVar8,uVar11,lVar12);
      _swift_release(puVar8);
    }
    else {
      puVar8 = puVar9;
      thunk_FUN_1005de8f4(puVar9);
      FUN_1006486f8();
      FUN_100004550(puVar8,lVar2);
      _swift_bridgeObjectRelease(uVar10);
    }
    _swift_errorRelease(puVar9);
    return;
  }
  pcVar15 = (code *)local_80;
  (**(code **)(param_5 + 0x38))(pcVar15,param_4,param_5);
  FUN_1009a6cd4(lVar14,puVar3);
  (*pcVar15)(local_80,0);
  (**(code **)(lVar13 + 0x20))(lVar12,lVar14,puVar3);
  plVar5 = param_4;
  (**(code **)(param_5 + 0x40))(param_4,param_5);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x88))();
  *(undefined1 *)plVar6 = 0;
  _swift_release(plVar5);
  (**(code **)(param_5 + 0x78))(param_1,param_4,param_5);
  (**(code **)(lVar13 + 0x10))(puVar16,lVar12,puVar3);
  puVar7 = puVar16;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar16,4,lVar2);
  iVar1 = (int)puVar7;
  if (iVar1 < 2) {
    if (iVar1 != 0) goto LAB_1009a6650;
    plVar5 = param_4;
    (**(code **)(*(long *)(param_5 + 8) + 0x28))(param_4);
    FUN_100629550();
    _swift_release(plVar5);
    (**(code **)(lVar13 + 8))(puVar16,puVar3);
  }
  else if (1 < iVar1 - 2U) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1009a64dc);
    (*pcVar15)();
  }
  plVar5 = param_4;
  (**(code **)(param_5 + 0x48))(param_4,param_5);
  lVar2 = *(long *)(param_5 + 8);
  FUN_100996218(unaff_x20,plVar5,param_4,lVar2);
  _swift_release(plVar5);
  plVar5 = param_4;
  (**(code **)(lVar2 + 0x28))(param_4,lVar2);
  FUN_10062953c();
  _swift_release(plVar5);
LAB_1009a6650:
  if (param_3 != 0) {
    FUN_100988b88(0,0,param_3);
  }
  lVar2 = *(long *)(*(long *)(param_5 + 8) + 8);
  plVar5 = param_4;
  (**(code **)(lVar2 + 0x50))(param_4);
  plVar6 = plVar5;
  _swift_getObjectType();
  puVar9 = &DAT_100f23b20;
  _swift_allocObject(&DAT_100f23b20,0x28,7);
  *(long **)(puVar9 + 0x10) = param_4;
  *(long *)(puVar9 + 0x18) = param_5;
  *(undefined8 *)(puVar9 + 0x20) = unaff_x20;
  pcVar15 = *(code **)(lVar2 + 0x18);
  _swift_unknownObjectRetain(unaff_x20);
  (*pcVar15)(FUN_1009a8004,puVar9,plVar6,lVar2);
  _swift_unknownObjectRelease(plVar5);
  _swift_release(puVar9);
  (**(code **)(lVar13 + 8))(lVar12,puVar3);
  return;
}



/* Address: 0x1009a6714 | FUN_1009a6714 */

void FUN_1009a6714(void)

{
  long *unaff_x20;
  
  _swift_retain(*(undefined8 *)(*unaff_x20 + 0x48));
  return;
}



/* Address: 0x1009a6744 | FUN_1009a6744 */

void FUN_1009a6744(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x48))();
  return;
}



/* Address: 0x1009a6764 | FUN_1009a6764 */

undefined8 FUN_1009a6764(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
  lVar5 = param_2;
  _swift_getAssociatedConformanceWitness
            (param_2,param_1,lVar1,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
  lVar2 = 0;
  FUN_1009a5064(0,lVar1,lVar5);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x28))(puVar4,param_1,param_2);
  puVar3 = puVar4;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(puVar4,4,lVar1);
  if (2 < (int)puVar3 - 1U) {
    if ((int)puVar3 != 0) {
      return 1;
    }
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return 0;
}



/* Address: 0x1009a6868 | FUN_1009a6868 */

byte FUN_1009a6868(byte *param_1)

{
  long unaff_x20;
  
  (**(code **)(**(long **)(unaff_x20 + 0xa8) + 0x88))();
  return *param_1 & 1;
}



/* Address: 0x1009a6898 | FUN_1009a6898 */

void FUN_1009a6898(void)

{
  long *unaff_x20;
  
  _swift_retain(*(undefined8 *)(*unaff_x20 + 0x40));
  return;
}



/* Address: 0x1009a68c8 | thunk_FUN_1009a5480 */

void thunk_FUN_1009a5480(void)

{
  FUN_1009a5480();
  return;
}



/* Address: 0x1009a68cc | thunk_FUN_1009a5a78 */

void thunk_FUN_1009a5a78(void)

{
  FUN_1009a5a78();
  return;
}



/* Address: 0x1009a68d0 | FUN_1009a68d0 */

void FUN_1009a68d0(void)

{
  FUN_1009a68f0();
  return;
}



/* Address: 0x1009a68e0 | FUN_1009a68e0 */

void FUN_1009a68e0(void)

{
  FUN_1009a68f0();
  return;
}



/* Address: 0x1009a68f0 | FUN_1009a68f0 */

void FUN_1009a68f0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  long lVar3;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1009a36f4(puVar2,param_1);
  (*param_6)(param_5,puVar2,param_2);
  (**(code **)(lVar3 + 8))(puVar2,CONCAT71(extraout_var,NVar1.value));
  return;
}



/* Address: 0x1009a6990 | thunk_FUN_1009aeb18 */

void thunk_FUN_1009aeb18(void)

{
  FUN_1009aeb18();
  return;
}



/* Address: 0x1009a6994 | FUN_1009a6994 */

void FUN_1009a6994(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar4 = *(long *)(param_4 + -8);
  puVar2 = auStack_70 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_3;
  (**(code **)(lVar4 + 0x10))(puVar2);
  lVar3 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  puVar1 = puVar2;
  (**(code **)(lVar3 + 0x30))(puVar2,4,*(long *)(param_4 + 0x10));
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,param_4);
  if ((int)puVar1 == 1) {
    FUN_1009952dc(param_2,local_68);
    if (unaff_x21 == 0) {
      (*pcVar5)();
      (**(code **)(lVar3 + 0x38))();
    }
  }
  else {
    FUN_100991e0c();
    _swift_allocError(&DAT_100f21a58,puVar2,0,0);
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1009a6ac0 | FUN_1009a6ac0 */

void FUN_1009a6ac0(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + -8);
  puVar1 = puVar2;
  (**(code **)(lVar3 + 0x30))(puVar2,4,*(long *)(param_1 + 0x10));
  pcVar5 = *(code **)(lVar4 + 8);
  if ((int)puVar1 == 2) {
    (*pcVar5)();
    (*pcVar5)(puVar2,param_1);
    (**(code **)(lVar3 + 0x38))();
  }
  else {
    (*pcVar5)(puVar2,param_1);
    FUN_100991e0c();
    _swift_allocError(&DAT_100f21a58,puVar2,0,0);
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1009a6bb8 | FUN_1009a6bb8 */

void FUN_1009a6bb8(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *(long *)(param_1 + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(puVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  puVar1 = puVar2;
  (**(code **)(lVar4 + 0x30))(puVar2,4,lVar3);
  pcVar6 = *(code **)(lVar5 + 8);
  if ((int)puVar1 == 3) {
    (*pcVar6)();
    (*pcVar6)(puVar2,param_1);
    (**(code **)(*(long *)(param_1 + 0x18) + 8))(lVar3);
    (**(code **)(lVar4 + 0x38))();
  }
  else {
    (*pcVar6)(puVar2,param_1);
    FUN_100991e0c();
    _swift_allocError(&DAT_100f21a58,puVar2,0,0);
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1009a6cd4 | FUN_1009a6cd4 */

void FUN_1009a6cd4(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = (undefined8 *)
           (&stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0));
  pcVar3 = *(code **)(lVar5 + 0x10);
  (*pcVar3)(param_1);
  (*pcVar3)(puVar4);
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,4,*(long *)(param_2 + 0x10));
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      pcVar3 = *(code **)(lVar5 + 8);
      (*pcVar3)();
      (*pcVar3)(puVar4,param_2);
      goto LAB_1009a6dec;
    }
  }
  else if ((iVar1 != 2) && (iVar1 != 3)) {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 3;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_willThrow();
    (**(code **)(lVar5 + 8))(param_1,param_2);
    return;
  }
  (**(code **)(lVar5 + 8))();
LAB_1009a6dec:
  (**(code **)(lVar6 + 0x38))();
  return;
}



/* Address: 0x1009a6e24 | FUN_1009a6e24 */

/* WARNING: Removing unreachable block (ram,0x0001009a6ef8) */
/* WARNING: Removing unreachable block (ram,0x0001009a7084) */
/* WARNING: Removing unreachable block (ram,0x0001009a6f04) */
/* WARNING: Removing unreachable block (ram,0x0001009a7090) */
/* WARNING: Removing unreachable block (ram,0x0001009a6f24) */

void FUN_1009a6e24(uint param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [32];
  
  puVar1 = param_4;
  (**(code **)(param_5 + 0x58))(param_4,param_5);
  if ((param_1 & 0xff) == ((uint)puVar1 & 0xff)) {
    pcVar9 = (code *)auStack_80;
    (**(code **)(param_5 + 0x38))(pcVar9,param_4,param_5);
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,param_4,0x100cc7d84,&TargetProtocolRequirement_100cc7da4);
    lVar3 = param_5;
    _swift_getAssociatedConformanceWitness
              (param_5,param_4,uVar2,0x100cc7d84,&TargetProtocolRequirement_100cc7d9c);
    FUN_1009a5064(0,uVar2,lVar3);
    FUN_1009a6ac0();
    (*pcVar9)(auStack_80,0);
    (**(code **)(param_5 + 0x60))(param_2,param_3,param_4,param_5);
  }
  else if (param_3 != 0) {
    FUN_100980638();
    puVar4 = &DAT_100eeb710;
    uVar2 = 0;
    _swift_allocError(&DAT_100eeb710,puVar1,0,0);
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 3;
    uVar5 = *(ulong *)(param_3 + 0x20);
    lVar3 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar8 = lVar3;
    (**(code **)(lVar3 + 0x10))();
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f23be8;
      _swift_allocObject(&DAT_100f23be8,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      pcVar9 = *(code **)(lVar3 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar4);
      (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar5,lVar3);
      _swift_release(puVar7);
    }
    else {
      puVar7 = puVar4;
      thunk_FUN_1005de8f4(puVar4);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar8);
      _swift_bridgeObjectRelease(uVar2);
    }
    _swift_errorRelease(puVar4);
    return;
  }
  return;
}



/* Address: 0x1009a7108 | FUN_1009a7108 */

void FUN_1009a7108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1009a6e24(1,param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1009a7120 | FUN_1009a7120 */

void FUN_1009a7120(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  (**(code **)(*(long *)(param_3 + 8) + 0x28))(param_2);
  FUN_10061d97c();
  _swift_release(uVar1);
  (**(code **)(param_3 + 0x50))(param_2,param_3);
  FUN_100988b88(0,0,param_2);
  _swift_release(param_2);
  return;
}



/* Address: 0x1009a719c | FUN_1009a719c */

void FUN_1009a719c(long param_1)

{
  State SVar1;
  undefined7 extraout_var;
  NWListener *pNVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  NWListener *this;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar2;
  
  this = *(NWListener **)(unaff_x20 + 0x58);
  if (this == (NWListener *)0x0) {
    if (param_1 != 0) {
      lVar2 = param_1;
      FUN_100991f1c();
      puVar6 = &DAT_100f21a78;
      uVar10 = 0;
      _swift_allocError(&DAT_100f21a78,lVar2,0,0);
      uVar7 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar8 = uVar7;
      lVar11 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar8 & 1) == 0) {
        puVar9 = &DAT_100f23d28;
        _swift_allocObject(&DAT_100f23d28,0x20,7);
        *(long *)(puVar9 + 0x10) = param_1;
        *(undefined **)(puVar9 + 0x18) = puVar6;
        pcVar12 = *(code **)(lVar2 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar6);
        (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar2);
        _swift_release(puVar9);
      }
      else {
        puVar9 = puVar6;
        thunk_FUN_1005de8f4(puVar6);
        FUN_1006486f8();
        FUN_100004550(puVar9,lVar11);
        _swift_bridgeObjectRelease(uVar10);
      }
      _swift_errorRelease(puVar6);
      return;
    }
  }
  else {
    SVar1 = Network::NWListener::State::typeMetadataAccessor();
    lVar2 = CONCAT71(extraout_var,SVar1.value);
    lVar11 = *(long *)(lVar2 + -8);
    puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pNVar3 = this;
    _swift_retain();
    Network::NWListener::get_state(this,pNVar3);
    puVar4 = puVar5;
    (**(code **)(lVar11 + 0x58))(puVar5,lVar2);
    if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         == (undefined *)0x0) ||
       ((int)puVar4 !=
        *(int *)
         PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
       )) {
      (**(code **)(lVar11 + 8))(puVar5,lVar2);
      if (param_1 != 0) {
        FUN_100991f1c();
        puVar6 = &DAT_100f21a78;
        uVar10 = 0;
        _swift_allocError(&DAT_100f21a78,puVar5,0,0);
        uVar7 = *(ulong *)(param_1 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar8 = uVar7;
        lVar11 = lVar2;
        (**(code **)(lVar2 + 0x10))();
        if ((uVar8 & 1) == 0) {
          puVar9 = &DAT_100f23d50;
          _swift_allocObject(&DAT_100f23d50,0x20,7);
          *(long *)(puVar9 + 0x10) = param_1;
          *(undefined **)(puVar9 + 0x18) = puVar6;
          pcVar12 = *(code **)(lVar2 + 0x18);
          _swift_retain(param_1);
          _swift_errorRetain(puVar6);
          (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar2);
          _swift_release(puVar9);
          _swift_release(this);
        }
        else {
          puVar9 = puVar6;
          thunk_FUN_1005de8f4(puVar6);
          FUN_1006486f8();
          _swift_release(this);
          FUN_100004550(puVar9,lVar11);
          _swift_bridgeObjectRelease(uVar10);
        }
        _swift_errorRelease(puVar6);
        return;
      }
    }
    else {
      (**(code **)(lVar11 + 8))(puVar5,lVar2);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
      *(long *)(unaff_x20 + 0x80) = param_1;
      _swift_retain(param_1);
      _swift_release(uVar10);
      _swift_retain();
      pNVar3 = this;
      Network::NWListener::_set_stateUpdateHandler(this);
      _swift_retain();
      Network::NWListener::_set_newConnectionHandler(pNVar3);
      Network::NWListener::start(pNVar3,*(OS_dispatch_queue **)(unaff_x20 + 0x78));
    }
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009a749c | FUN_1009a749c */

void FUN_1009a749c(long param_1)

{
  State SVar1;
  undefined7 extraout_var;
  NWListener *pNVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  NWListener *this;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar2;
  
  this = *(NWListener **)(unaff_x20 + 0x58);
  if (this == (NWListener *)0x0) {
    if (param_1 != 0) {
      lVar2 = param_1;
      FUN_100991f1c();
      puVar6 = &DAT_100f21a78;
      uVar10 = 0;
      _swift_allocError(&DAT_100f21a78,lVar2,0,0);
      uVar7 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar8 = uVar7;
      lVar11 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar8 & 1) == 0) {
        puVar9 = &DAT_100f23cb0;
        _swift_allocObject(&DAT_100f23cb0,0x20,7);
        *(long *)(puVar9 + 0x10) = param_1;
        *(undefined **)(puVar9 + 0x18) = puVar6;
        pcVar12 = *(code **)(lVar2 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar6);
        (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar2);
        _swift_release(puVar9);
      }
      else {
        puVar9 = puVar6;
        thunk_FUN_1005de8f4(puVar6);
        FUN_1006486f8();
        FUN_100004550(puVar9,lVar11);
        _swift_bridgeObjectRelease(uVar10);
      }
      _swift_errorRelease(puVar6);
      return;
    }
  }
  else {
    SVar1 = Network::NWListener::State::typeMetadataAccessor();
    lVar2 = CONCAT71(extraout_var,SVar1.value);
    lVar11 = *(long *)(lVar2 + -8);
    puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pNVar3 = this;
    _swift_retain();
    Network::NWListener::get_state(this,pNVar3);
    puVar4 = puVar5;
    (**(code **)(lVar11 + 0x58))(puVar5,lVar2);
    if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         == (undefined *)0x0) ||
       ((int)puVar4 !=
        *(int *)
         PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
       )) {
      (**(code **)(lVar11 + 8))(puVar5,lVar2);
      if (param_1 != 0) {
        FUN_100991f1c();
        puVar6 = &DAT_100f21a78;
        uVar10 = 0;
        _swift_allocError(&DAT_100f21a78,puVar5,0,0);
        uVar7 = *(ulong *)(param_1 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar8 = uVar7;
        lVar11 = lVar2;
        (**(code **)(lVar2 + 0x10))();
        if ((uVar8 & 1) == 0) {
          puVar9 = &DAT_100f23cd8;
          _swift_allocObject(&DAT_100f23cd8,0x20,7);
          *(long *)(puVar9 + 0x10) = param_1;
          *(undefined **)(puVar9 + 0x18) = puVar6;
          pcVar12 = *(code **)(lVar2 + 0x18);
          _swift_retain(param_1);
          _swift_errorRetain(puVar6);
          (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar2);
          _swift_release(puVar9);
          _swift_release(this);
        }
        else {
          puVar9 = puVar6;
          thunk_FUN_1005de8f4(puVar6);
          FUN_1006486f8();
          _swift_release(this);
          FUN_100004550(puVar9,lVar11);
          _swift_bridgeObjectRelease(uVar10);
        }
        _swift_errorRelease(puVar6);
        return;
      }
    }
    else {
      (**(code **)(lVar11 + 8))(puVar5,lVar2);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
      *(long *)(unaff_x20 + 0x80) = param_1;
      _swift_retain(param_1);
      _swift_release(uVar10);
      _swift_retain();
      pNVar3 = this;
      Network::NWListener::_set_stateUpdateHandler(this);
      _swift_retain();
      Network::NWListener::_set_newConnectionHandler(pNVar3);
      Network::NWListener::start(pNVar3,*(OS_dispatch_queue **)(unaff_x20 + 0x78));
    }
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009a779c | FUN_1009a779c */

void FUN_1009a779c(undefined8 param_1)

{
  FUN_1009a5280(param_1,&PTR_PTR_100ff2640);
  return;
}



/* Address: 0x1009a77a8 | FUN_1009a77a8 */

ulong FUN_1009a77a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  NWEndpoint NVar2;
  __uint16 _Var3;
  undefined7 extraout_var;
  NWListener *pNVar5;
  NWParameters *this;
  NWParameters *pNVar6;
  Port PVar7;
  long lVar8;
  Port PVar9;
  ulong uVar10;
  uint uVar11;
  __uint64 _Var12;
  NWListener *this_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar13;
  long lVar14;
  ulong unaff_x25;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_b0 [8];
  ulong local_a8;
  undefined4 local_9c;
  __uint64 local_98;
  long local_90;
  __uint64 local_88;
  __uint64 local_80;
  undefined1 *local_78;
  __uint64 local_70;
  undefined1 *local_68;
  long lVar4;
  
  this_00 = *(NWListener **)(unaff_x20 + 0x58);
  if (this_00 == (NWListener *)0x0) {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
    _swift_willThrow();
  }
  else {
    NVar2 = Network::NWEndpoint::typeMetadataAccessor();
    lVar4 = CONCAT71(extraout_var,NVar2.value);
    lVar14 = *(long *)(lVar4 + -8);
    uVar17 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    puVar13 = auStack_b0 + -uVar17;
    pNVar5 = this_00;
    _swift_retain();
    this = Network::NWListener::get_parameters(this_00,pNVar5);
    pNVar6 = (NWParameters *)&DAT_100ff25b0;
    FUN_1000f7830(&DAT_100ff25b0,&DAT_100c8b6e0);
    uVar15 = (long)puVar13 - (*(long *)(*(long *)(pNVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    Network::NWParameters::_get_requiredLocalEndpoint(this,pNVar6);
    _swift_release(this);
    uVar10 = uVar15;
    (**(code **)(lVar14 + 0x30))(uVar15,1,lVar4);
    if ((int)uVar10 == 1) {
      uVar10 = uVar15;
      FUN_1000fb4c4(uVar15,&DAT_100ff25b0,&DAT_100c8b6e0);
      FUN_1009921c0();
      _swift_allocError(&DAT_100f21b80,uVar10,0,0);
      _swift_willThrow();
      _swift_release(this_00);
      unaff_x25 = uVar15;
    }
    else {
      local_68 = auStack_b0;
      (**(code **)(lVar14 + 0x20))(puVar13,uVar15,lVar4);
      unaff_x25 = (long)puVar13 - uVar17;
      (**(code **)(lVar14 + 0x10))(unaff_x25,puVar13,lVar4);
      FUN_1009a3bfc();
      if (unaff_x21 == 0) {
        uVar10 = unaff_x25;
        lVar8 = lVar4;
        FUN_100666f78();
        if ((((uint)lVar8 & 0xff) == 1) || (uVar10 != 0)) {
          (**(code **)(lVar14 + 8))(puVar13,lVar4);
          _swift_release(this_00);
        }
        else {
          PVar7 = Network::NWEndpoint::Port::typeMetadataAccessor();
          lVar16 = *(long *)(PVar7._context - 8);
          _Var12 = (long)puVar13 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
          pNVar5 = (NWListener *)&DAT_100ff0848;
          local_80 = _Var12;
          local_78 = puVar13;
          FUN_1000f7830(&DAT_100ff0848,&DAT_100c8a020);
          lVar18 = _Var12 - (*(long *)(*(long *)(pNVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          local_70 = _Var12;
          Network::NWListener::_get_port(this_00,pNVar5);
          lVar8 = lVar18;
          (**(code **)(lVar16 + 0x30))(lVar18,1,PVar7._context);
          _Var12 = local_80;
          if ((int)lVar8 == 1) {
            FUN_1000fb4c4(lVar18,&DAT_100ff0848,&DAT_100c8a020);
            FUN_1009921c0();
            _swift_allocError(&DAT_100f21b80,lVar18,0,0);
            _swift_willThrow();
            _swift_release(this_00);
            (**(code **)(lVar14 + 8))(puVar13,lVar4);
            _swift_release(unaff_x25 & 0x3fffffffffffffff);
          }
          else {
            PVar9._context = local_80;
            local_88 = PVar7._context;
            (**(code **)(lVar16 + 0x20))();
            _Var3 = Network::NWEndpoint::Port::get_rawValue(PVar9);
            uVar11 = (uint)(unaff_x25 >> 0x3e);
            local_90 = lVar16;
            if (uVar11 == 0) {
              uVar10 = unaff_x25;
              FUN_100666b30();
              uVar15 = unaff_x25;
              local_98 = uVar10;
              local_70 = lVar18;
              FUN_100666b3c(unaff_x25);
              _swift_release(unaff_x25 & 0x3fffffffffffffff);
              unaff_x25 = local_98 & 0xffffffff0000ffff |
                          (ulong)(((uint)(_Var3 >> 8) | (_Var3 & 0xff00ff) << 8) << 0x10);
              FUN_100667770(unaff_x25,local_70,uVar15,lVar18);
            }
            else {
              if (uVar11 != 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a7c2c);
                (*pcVar1)();
              }
              uVar10 = unaff_x25 & 0x3fffffffffffffff;
              FUN_100666b68();
              uVar15 = unaff_x25 & 0x3fffffffffffffff;
              local_a8 = uVar10;
              local_9c = param_4;
              local_98 = PVar7._context;
              local_70 = lVar18;
              FUN_100666b7c(uVar15);
              _swift_release(unaff_x25 & 0x3fffffffffffffff);
              unaff_x25 = local_a8 & 0xffffffff0000ffff |
                          (ulong)(((uint)(_Var3 >> 8) | (_Var3 & 0xff00ff) << 8) << 0x10);
              FUN_1006677c8(unaff_x25,local_70,local_98,local_9c,uVar15,lVar18);
            }
            _swift_release(this_00);
            (**(code **)(local_90 + 8))(_Var12,local_88);
            (**(code **)(lVar14 + 8))(puVar13,lVar4);
          }
        }
      }
      else {
        (**(code **)(lVar14 + 8))(puVar13);
        _swift_release(this_00);
        unaff_x25 = uVar15;
      }
    }
  }
  return unaff_x25;
}



/* Address: 0x1009a7c2c | FUN_1009a7c2c */

void FUN_1009a7c2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a563c(param_1,param_2,&PTR_PTR_100ff2640);
  return;
}



/* Address: 0x1009a7c38 | FUN_1009a7c38 */

void FUN_1009a7c38(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a5e9c(param_1,param_2,&PTR_PTR_100ff2640);
  return;
}



/* Address: 0x1009a7c44 | FUN_1009a7c44 */

void FUN_1009a7c44(void)

{
  FUN_1009a612c();
  return;
}



/* Address: 0x1009a7c64 | FUN_1009a7c64 */

void FUN_1009a7c64(void)

{
  FUN_1009a612c();
  return;
}



/* Address: 0x1009a7c84 | FUN_1009a7c84 */

void FUN_1009a7c84(void)

{
  FUN_1009a61e4();
  return;
}



/* Address: 0x1009a7c90 | FUN_1009a7c90 */

void FUN_1009a7c90(undefined8 param_1)

{
  FUN_1009a6744(param_1,&PTR_PTR_100ff2640);
  return;
}



/* Address: 0x1009a7cc0 | FUN_1009a7cc0 */

void FUN_1009a7cc0(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long lVar5;
  
  SVar2 = Network::NWListener::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar11 = *(long *)(lVar5 + -8);
  lVar7 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + lVar7;
  (**(code **)(lVar11 + 0x10))(puVar9,param_1,lVar5);
  puVar6 = puVar9;
  (**(code **)(lVar11 + 0x58))(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
     )) {
    if ((PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
       )) {
      if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         )) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a7ea8);
        (*pcVar1)();
      }
      if ((PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
           == (undefined *)0x0) ||
         (iVar4 != *(int *)
                    PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
         )) {
        if ((PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
             == (undefined *)0x0) ||
           (iVar4 != *(int *)
                      PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
           )) {
          *(undefined4 *)((long)auStack_58 + lVar7) = 0;
          *(undefined8 *)((long)&uStack_60 + lVar7) = 0x210;
          SVar13.bridgeObject = (void *)0x2;
          SVar13.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar13,(StaticString)0x6168636165726e55,
                     0xeb00000000656c62,0xdb7150);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a7f00);
          (*pcVar1)();
        }
        uVar8 = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 *)(param_2 + 0x58) = 0;
        _swift_release(uVar8);
      }
      else {
        FUN_1009a7f00(param_3);
      }
    }
    else {
      (**(code **)(lVar11 + 0x60))(puVar9,lVar5);
      NVar3 = Network::NWError::typeMetadataAccessor();
      lVar11 = CONCAT71(extraout_var_00,NVar3.value);
      lVar12 = *(long *)(lVar11 + -8);
      lVar10 = (long)puVar9 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar7 = lVar10;
      (**(code **)(lVar12 + 0x20))(lVar10,puVar9,lVar11);
      FUN_1009a8044();
      lVar5 = lVar11;
      _swift_allocError(lVar11,lVar7,0,0);
      (**(code **)(lVar12 + 0x10))(lVar7,lVar10,lVar11);
      (*param_4)(lVar5,2,0);
      (**(code **)(lVar12 + 8))(lVar10,lVar11);
      _swift_errorRelease(lVar5);
    }
  }
  else {
    (**(code **)(lVar11 + 8))(puVar9,lVar5);
  }
  return;
}



/* Address: 0x1009a7f00 | FUN_1009a7f00 */

/* WARNING: Removing unreachable block (ram,0x0001009a7f34) */

void FUN_1009a7f00(code *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  pcVar4 = param_1;
  FUN_1009a77a8();
  lVar7 = *(long *)(unaff_x20 + DAT_101058280);
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x10));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009a7fd8);
    (*pcVar4)();
  }
  puVar1 = (undefined8 *)(unaff_x20 + DAT_101058278);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar4;
  puVar1[1] = 0xf000000000000007;
  FUN_1005d84e8(pcVar4);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar3);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x10));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009a7fdc);
    (*pcVar4)();
  }
  (*param_1)(uVar6);
  FUN_1005d8534(pcVar4);
  _swift_release(uVar6);
  return;
}


