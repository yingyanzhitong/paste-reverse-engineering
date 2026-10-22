/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10073dd1c | FUN_10073dd1c */

void FUN_10073dd1c(long param_1,long param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 8))(param_1,lVar4);
  lVar2 = *(long *)(lVar6 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = lVar2 + param_1 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar3,lVar6);
  uVar3 = *(long *)(lVar4 + 0x40) + uVar5 + uVar3;
  uVar1 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar1,1,lVar6);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010073ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3 & (uVar5 ^ 0xffffffffffffffff),lVar6);
  return;
}



/* Address: 0x10073ddf4 | FUN_10073ddf4 */

long FUN_10073ddf4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  size_t sVar9;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar1 + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar7;
  uVar5 = lVar6 + param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar7 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar4 + 0x10);
  (*pcVar8)(uVar5,uVar3,lVar1);
  sVar9 = *(size_t *)(lVar4 + 0x40);
  uVar5 = sVar9 + uVar7 + uVar5;
  uVar3 = sVar9 + uVar7 + uVar3;
  uVar2 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 == 0) {
    (*pcVar8)(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar4 + 0x38))(uVar5 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar1);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar5 & (uVar7 ^ 0xffffffffffffffff)),
            (void *)(uVar3 & (uVar7 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x10073df0c | FUN_10073df0c */

long FUN_10073df0c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  code *pcVar10;
  code *pcVar11;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar5);
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = lVar7 + uVar8;
  uVar6 = lVar7 + param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar4 = lVar7 + param_2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar5 + 0x18);
  (*pcVar10)(uVar6,uVar4,lVar1);
  sVar9 = *(size_t *)(lVar5 + 0x40);
  uVar6 = sVar9 + uVar8 + uVar6;
  uVar4 = sVar9 + uVar8 + uVar4;
  pcVar11 = *(code **)(lVar5 + 0x30);
  uVar2 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar2,1,lVar1);
  uVar3 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (*pcVar10)(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar6 & (uVar8 ^ 0xffffffffffffffff),lVar1);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar5 + 0x10))
              (uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar5 + 0x38))(uVar6 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar1);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar6 & (uVar8 ^ 0xffffffffffffffff)),
          (void *)(uVar4 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x10073e070 | FUN_10073e070 */

long FUN_10073e070(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  size_t sVar9;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar4);
  lVar6 = *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar4 = *(long *)(lVar1 + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar6 = lVar6 + uVar7;
  uVar5 = lVar6 + param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar7 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar4 + 0x20);
  (*pcVar8)(uVar5,uVar3,lVar1);
  sVar9 = *(size_t *)(lVar4 + 0x40);
  uVar5 = sVar9 + uVar7 + uVar5;
  uVar3 = sVar9 + uVar7 + uVar3;
  uVar2 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 == 0) {
    (*pcVar8)(uVar5 & (uVar7 ^ 0xffffffffffffffff),uVar3 & (uVar7 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar4 + 0x38))(uVar5 & (uVar7 ^ 0xffffffffffffffff),0,1,lVar1);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar5 & (uVar7 ^ 0xffffffffffffffff)),
            (void *)(uVar3 & (uVar7 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x10073e188 | FUN_10073e188 */

long FUN_10073e188(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  code *pcVar10;
  code *pcVar11;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar5);
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar7 = lVar7 + uVar8;
  uVar6 = lVar7 + param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar4 = lVar7 + param_2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar5 + 0x28);
  (*pcVar10)(uVar6,uVar4,lVar1);
  sVar9 = *(size_t *)(lVar5 + 0x40);
  uVar6 = sVar9 + uVar8 + uVar6;
  uVar4 = sVar9 + uVar8 + uVar4;
  pcVar11 = *(code **)(lVar5 + 0x30);
  uVar2 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar2,1,lVar1);
  uVar3 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (*pcVar10)(uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar6 & (uVar8 ^ 0xffffffffffffffff),lVar1);
  }
  else if ((int)uVar3 == 0) {
    (**(code **)(lVar5 + 0x20))
              (uVar6 & (uVar8 ^ 0xffffffffffffffff),uVar4 & (uVar8 ^ 0xffffffffffffffff),lVar1);
    (**(code **)(lVar5 + 0x38))(uVar6 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar1);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  _memcpy((void *)(uVar6 & (uVar8 ^ 0xffffffffffffffff)),
          (void *)(uVar4 & (uVar8 ^ 0xffffffffffffffff)),sVar9);
  return param_1;
}



/* Address: 0x10073e2ec | FUN_10073e2ec */

uint * FUN_10073e2ec(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar3 + -8);
  uVar4 = *(uint *)(lVar14 + 0x54);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar8 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar8 + 0x54);
  uVar9 = uVar7;
  if (uVar7 <= uVar4) {
    uVar9 = uVar4;
  }
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
  }
  if (uVar2 <= uVar9) {
    uVar2 = uVar9;
  }
  lVar10 = *(long *)(lVar8 + 0x40);
  lVar1 = lVar10;
  if (uVar7 == 0) {
    lVar1 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = *(long *)(lVar14 + 0x40) + uVar11;
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10073e404;
  lVar1 = lVar1 + (lVar10 + uVar11 + (uVar6 & (uVar11 ^ 0xffffffffffffffff)) &
                  (uVar11 ^ 0xffffffffffffffff));
  uVar12 = (uint)lVar1;
  uVar9 = uVar12 << 3;
  if (uVar12 < 4) {
    uVar13 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar9 & 0x1f)) >> (ulong)(uVar9 & 0x1f)) + 1;
    if (0xff < uVar13) {
      if (uVar13 >> 0x10 == 0) {
        uVar13 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar13 = *(uint *)((long)param_1 + lVar1);
      }
      goto LAB_10073e39c;
    }
    if (1 < uVar13) goto LAB_10073e398;
  }
  else {
LAB_10073e398:
    uVar13 = (uint)*(byte *)((long)param_1 + lVar1);
LAB_10073e39c:
    if (uVar13 != 0) {
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar13 - 1 << (ulong)(uVar9 & 0x1f);
      }
      if (uVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar12 < 4) {
          uVar9 = uVar12;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar9 = (uint)(byte)*param_1;
          }
          else {
            uVar9 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar9 == 3) {
          uVar9 = (uint)(uint3)*param_1;
        }
        else {
          uVar9 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + (uVar9 | uVar4) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_10073e404:
  if (uVar4 == uVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x30);
    lVar5 = lVar3;
    uVar7 = uVar4;
  }
  else {
    param_1 = (uint *)((ulong)(uVar6 + (long)param_1) & ~uVar11);
    if (uVar7 != uVar2) {
      uVar6 = (ulong)(lVar10 + uVar11 + (long)param_1) & ~uVar11;
      (**(code **)(lVar8 + 0x30))(uVar6,uVar7,lVar5);
      uVar9 = 0;
      if ((int)uVar6 != 0) {
        uVar9 = (int)uVar6 - 1;
      }
      return (uint *)(ulong)uVar9;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010073e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar7,lVar5);
  return param_1;
}



/* Address: 0x10073e4d4 | FUN_10073e4d4 */

void FUN_10073e4d4(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  long lVar17;
  
  lVar9 = *(long *)(param_4 + 0x10);
  lVar17 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar17 + 0x54);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar10 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar10 + 0x54);
  uVar4 = uVar6;
  if (uVar6 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = *(long *)(lVar17 + 0x40) + uVar11;
  lVar12 = *(long *)(lVar10 + 0x40);
  lVar2 = lVar12 + uVar11;
  if (uVar6 == 0) {
    lVar12 = lVar12 + 1;
  }
  sVar3 = lVar12 + (lVar2 + (uVar1 & (uVar11 ^ 0xffffffffffffffff)) & (uVar11 ^ 0xffffffffffffffff))
  ;
  uVar13 = (uint)sVar3;
  if (param_3 < uVar4 || param_3 - uVar4 == 0) {
    bVar16 = 0;
  }
  else if (uVar13 < 4) {
    uVar14 = ((param_3 - uVar4) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >>
             (ulong)(uVar13 << 3 & 0x1f)) + 1;
    bVar16 = 2;
    if (0xffff < uVar14) {
      bVar16 = 4;
    }
    if (uVar14 < 0x100) {
      bVar16 = 1 < uVar14;
    }
  }
  else {
    bVar16 = 1;
  }
  uVar14 = (uint)param_2;
  if (uVar4 < uVar14) {
    uVar14 = uVar14 + ~uVar4;
    if (uVar13 < 4) {
      iVar15 = (uVar14 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar4 = uVar14 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar7 = (undefined2)uVar4;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar14;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = uVar14;
      iVar15 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar15;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar15;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar15;
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
    if (uVar14 != 0) {
      if (uVar5 < uVar6) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar11);
        lVar9 = lVar8;
        uVar5 = uVar6;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x00010073e6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar5,lVar9);
      return;
    }
  }
  return;
}



/* Address: 0x10073e714 | FUN_10073e714 */

void FUN_10073e714(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined7 extraout_var_00;
  ulong uVar3;
  undefined7 extraout_var_01;
  ulong uVar4;
  ulong uVar5;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  if (uVar3 < 0x40) {
    local_50 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar2 = 0x13f;
    uVar3 = uVar5;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar5,uVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
    if (uVar3 < 0x40) {
      local_48 = *(long *)(uVar2 - 8) + 0x40;
      OVar1 = Swift::Optional::typeMetadataAccessor();
      if (uVar2 < 0x40) {
        local_40 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8) + 0x40;
        uVar3 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar5,uVar4,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                   PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
        OVar1 = Swift::Optional::typeMetadataAccessor();
        if (uVar3 < 0x40) {
          local_38 = *(long *)(CONCAT71(extraout_var_01,OVar1.value) + -8) + 0x40;
          _swift_initStructMetadata(param_1,0,4,&local_50,param_1 + 0x20);
        }
      }
    }
  }
  return;
}



/* Address: 0x10073e824 | FUN_10073e824 */

long * FUN_10073e824(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar8 = *(long *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar8 + -8);
  sVar12 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar24 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar24 + 0x50);
  uVar15 = (ulong)uVar2 & 0xff;
  uVar22 = sVar12 + uVar15;
  sVar13 = *(size_t *)(lVar24 + 0x40);
  lVar1 = sVar13 + uVar15;
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar8,puVar5,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8
            );
  lVar23 = *(long *)(lVar7 + -8);
  uVar19 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  sVar14 = *(size_t *)(lVar23 + 0x40);
  if (*(int *)(lVar23 + 0x54) == 0) {
    sVar14 = sVar14 + 1;
  }
  uVar4 = uVar2 | *(uint *)(lVar17 + 0x50) | *(uint *)(lVar23 + 0x50);
  uVar2 = uVar4 & 0xff;
  if ((uVar2 < 8 && (uVar4 & 0x100000) == 0) &&
      (sVar13 + uVar19 +
       (lVar1 + (uVar22 & (uVar15 ^ 0xffffffffffffffff)) & (uVar15 ^ 0xffffffffffffffff)) &
      (uVar19 ^ 0xffffffffffffffff)) + sVar14 < 0x19) {
    uVar15 = ~uVar15;
    plVar9 = param_2;
    (**(code **)(lVar17 + 0x30))(param_2,1,lVar8);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar8);
      (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar8);
    }
    else {
      _memcpy(param_1,param_2,sVar12);
    }
    uVar11 = ~uVar19;
    uVar20 = uVar22 + (long)param_1 & uVar15;
    pcVar16 = *(code **)(lVar24 + 0x10);
    uVar22 = uVar22 + (long)param_2 & uVar15;
    (*pcVar16)(uVar20,uVar22,lVar6);
    pvVar18 = (void *)(lVar1 + uVar20 & uVar15);
    pvVar21 = (void *)(lVar1 + uVar22 & uVar15);
    pvVar10 = pvVar21;
    (**(code **)(lVar24 + 0x30))(pvVar21,1,lVar6);
    if ((int)pvVar10 == 0) {
      (*pcVar16)(pvVar18,pvVar21,lVar6);
      (**(code **)(lVar24 + 0x38))(pvVar18,0,1,lVar6);
    }
    else {
      _memcpy(pvVar18,pvVar21,sVar13);
    }
    uVar22 = (long)pvVar18 + uVar19 + sVar13;
    uVar15 = (long)pvVar21 + uVar19 + sVar13;
    uVar19 = uVar15 & uVar11;
    (**(code **)(lVar23 + 0x30))(uVar19,1,lVar7);
    if ((int)uVar19 == 0) {
      (**(code **)(lVar23 + 0x10))(uVar22 & uVar11,uVar15 & uVar11,lVar7);
      (**(code **)(lVar23 + 0x38))(uVar22 & uVar11,0,1,lVar7);
    }
    else {
      _memcpy((void *)(uVar22 & uVar11),(void *)(uVar15 & uVar11),sVar14);
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10073eaf8 | FUN_10073eaf8 */

void FUN_10073eaf8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  lVar7 = param_1;
  (**(code **)(lVar5 + 0x30))(param_1,1,lVar2);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(lVar5 + 0x54);
  lVar7 = *(long *)(lVar5 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar6 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + param_1;
  if (iVar1 == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar4 = lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar6 + 8);
  (*pcVar8)(uVar4,lVar5);
  lVar7 = *(long *)(lVar6 + 0x40);
  uVar4 = lVar7 + uVar9 + uVar4 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = uVar4;
  (**(code **)(lVar6 + 0x30))(uVar4,1,lVar5);
  if ((int)uVar9 == 0) {
    (*pcVar8)(uVar4,lVar5);
  }
  iVar1 = *(int *)(lVar6 + 0x54);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar2 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar7 = uVar4 + lVar7;
  if (iVar1 == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar4 = lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 0x30))(uVar4,1,lVar5);
  if ((int)uVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010073ec64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(lVar7 + uVar9 & (uVar9 ^ 0xffffffffffffffff),lVar5);
  return;
}



/* Address: 0x10073ec68 | FUN_10073ec68 */

void * FUN_10073ec68(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar4);
    iVar12 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar12 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar12 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar12 == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar14 = *(long *)(lVar8 + -8);
  uVar3 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar10 = sVar9 + uVar3 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar13 = sVar9 + uVar3 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar15 = *(code **)(lVar14 + 0x10);
  (*pcVar15)(uVar10,uVar13,lVar8);
  sVar9 = *(size_t *)(lVar14 + 0x40);
  pvVar7 = (void *)(sVar9 + uVar3 + uVar10 & (uVar3 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(sVar9 + uVar3 + uVar13 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar11;
  (**(code **)(lVar14 + 0x30))(pvVar11,1,lVar8);
  if ((int)pvVar2 == 0) {
    (*pcVar15)(pvVar7,pvVar11,lVar8);
    (**(code **)(lVar14 + 0x38))(pvVar7,0,1,lVar8);
    iVar12 = *(int *)(lVar14 + 0x54);
  }
  else {
    iVar12 = *(int *)(lVar14 + 0x54);
    sVar1 = sVar9;
    if (iVar12 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar7,pvVar11,sVar1);
  }
  if (iVar12 == 0) {
    sVar9 = sVar9 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar8 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = sVar9 + uVar6 + (long)pvVar7;
  uVar10 = sVar9 + uVar6 + (long)pvVar11;
  uVar13 = uVar10 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar13,1,lVar8);
  if ((int)uVar13 == 0) {
    (**(code **)(lVar4 + 0x10))
              (uVar3 & (uVar6 ^ 0xffffffffffffffff),uVar10 & (uVar6 ^ 0xffffffffffffffff),lVar8);
    (**(code **)(lVar4 + 0x38))(uVar3 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar8);
  }
  else {
    sVar9 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar3 & (uVar6 ^ 0xffffffffffffffff)),
            (void *)(uVar10 & (uVar6 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x10073eeb0 | FUN_10073eeb0 */

void * FUN_10073eeb0(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  code *pcVar18;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar7 + -8);
  pcVar14 = *(code **)(lVar12 + 0x30);
  pvVar2 = param_1;
  (*pcVar14)(param_1,1,lVar7);
  pvVar3 = param_2;
  (*pcVar14)(param_2,1,lVar7);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar7);
      goto LAB_10073ef54;
    }
    (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar7);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar7);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar7);
  }
  else {
LAB_10073ef54:
    sVar17 = *(size_t *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      sVar17 = sVar17 + 1;
    }
    _memcpy(param_1,param_2,sVar17);
  }
  lVar5 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar12 + -8);
  uVar6 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar10 = lVar5 + uVar6 + (long)param_1 & (uVar6 ^ 0xffffffffffffffff);
  uVar15 = lVar5 + uVar6 + (long)param_2 & (uVar6 ^ 0xffffffffffffffff);
  pcVar18 = *(code **)(lVar16 + 0x18);
  (*pcVar18)(uVar10,uVar15,lVar12);
  sVar17 = *(size_t *)(lVar16 + 0x40);
  pvVar9 = (void *)(sVar17 + uVar6 + uVar10 & (uVar6 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(sVar17 + uVar6 + uVar15 & (uVar6 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar16 + 0x30);
  pvVar2 = pvVar9;
  (*pcVar14)(pvVar9,1,lVar12);
  pvVar3 = pvVar11;
  (*pcVar14)(pvVar11,1,lVar12);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (*pcVar18)(pvVar9,pvVar11,lVar12);
      goto LAB_10073f080;
    }
    (**(code **)(lVar16 + 8))(pvVar9,lVar12);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar16 + 0x10))(pvVar9,pvVar11,lVar12);
    (**(code **)(lVar16 + 0x38))(pvVar9,0,1,lVar12);
    goto LAB_10073f080;
  }
  sVar1 = sVar17;
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar1 = sVar17 + 1;
  }
  _memcpy(pvVar9,pvVar11,sVar1);
LAB_10073f080:
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar12 + -8);
  uVar13 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = sVar17 + uVar13 + (long)pvVar9;
  uVar10 = sVar17 + uVar13 + (long)pvVar11;
  pcVar14 = *(code **)(lVar7 + 0x30);
  uVar15 = uVar6 & (uVar13 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar15,1,lVar12);
  uVar4 = uVar10 & (uVar13 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar4,1,lVar12);
  if ((int)uVar15 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x18))
                (uVar6 & (uVar13 ^ 0xffffffffffffffff),uVar10 & (uVar13 ^ 0xffffffffffffffff),lVar12
                );
      return param_1;
    }
    (**(code **)(lVar7 + 8))(uVar6 & (uVar13 ^ 0xffffffffffffffff),lVar12);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x10))
              (uVar6 & (uVar13 ^ 0xffffffffffffffff),uVar10 & (uVar13 ^ 0xffffffffffffffff),lVar12);
    (**(code **)(lVar7 + 0x38))(uVar6 & (uVar13 ^ 0xffffffffffffffff),0,1,lVar12);
    return param_1;
  }
  sVar17 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  _memcpy((void *)(uVar6 & (uVar13 ^ 0xffffffffffffffff)),
          (void *)(uVar10 & (uVar13 ^ 0xffffffffffffffff)),sVar17);
  return param_1;
}



/* Address: 0x10073f1c4 | FUN_10073f1c4 */

void * FUN_10073f1c4(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar4);
    iVar12 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar12 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar12 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar12 == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar14 = *(long *)(lVar8 + -8);
  uVar3 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar10 = sVar9 + uVar3 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar13 = sVar9 + uVar3 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar15 = *(code **)(lVar14 + 0x20);
  (*pcVar15)(uVar10,uVar13,lVar8);
  sVar9 = *(size_t *)(lVar14 + 0x40);
  pvVar7 = (void *)(sVar9 + uVar3 + uVar10 & (uVar3 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(sVar9 + uVar3 + uVar13 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar11;
  (**(code **)(lVar14 + 0x30))(pvVar11,1,lVar8);
  if ((int)pvVar2 == 0) {
    (*pcVar15)(pvVar7,pvVar11,lVar8);
    (**(code **)(lVar14 + 0x38))(pvVar7,0,1,lVar8);
    iVar12 = *(int *)(lVar14 + 0x54);
  }
  else {
    iVar12 = *(int *)(lVar14 + 0x54);
    sVar1 = sVar9;
    if (iVar12 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar7,pvVar11,sVar1);
  }
  if (iVar12 == 0) {
    sVar9 = sVar9 + 1;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar8 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = sVar9 + uVar6 + (long)pvVar7;
  uVar10 = sVar9 + uVar6 + (long)pvVar11;
  uVar13 = uVar10 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar13,1,lVar8);
  if ((int)uVar13 == 0) {
    (**(code **)(lVar4 + 0x20))
              (uVar3 & (uVar6 ^ 0xffffffffffffffff),uVar10 & (uVar6 ^ 0xffffffffffffffff),lVar8);
    (**(code **)(lVar4 + 0x38))(uVar3 & (uVar6 ^ 0xffffffffffffffff),0,1,lVar8);
  }
  else {
    sVar9 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar9 = sVar9 + 1;
    }
    _memcpy((void *)(uVar3 & (uVar6 ^ 0xffffffffffffffff)),
            (void *)(uVar10 & (uVar6 ^ 0xffffffffffffffff)),sVar9);
  }
  return param_1;
}



/* Address: 0x10073f40c | FUN_10073f40c */

void * FUN_10073f40c(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  code *pcVar18;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar7 + -8);
  pcVar14 = *(code **)(lVar12 + 0x30);
  pvVar2 = param_1;
  (*pcVar14)(param_1,1,lVar7);
  pvVar3 = param_2;
  (*pcVar14)(param_2,1,lVar7);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar7);
      goto LAB_10073f4b0;
    }
    (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar7);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar7);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar7);
  }
  else {
LAB_10073f4b0:
    sVar17 = *(size_t *)(lVar12 + 0x40);
    if (*(int *)(lVar12 + 0x54) == 0) {
      sVar17 = sVar17 + 1;
    }
    _memcpy(param_1,param_2,sVar17);
  }
  lVar5 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar12 + -8);
  uVar6 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar10 = lVar5 + uVar6 + (long)param_1 & (uVar6 ^ 0xffffffffffffffff);
  uVar15 = lVar5 + uVar6 + (long)param_2 & (uVar6 ^ 0xffffffffffffffff);
  pcVar18 = *(code **)(lVar16 + 0x28);
  (*pcVar18)(uVar10,uVar15,lVar12);
  sVar17 = *(size_t *)(lVar16 + 0x40);
  pvVar9 = (void *)(sVar17 + uVar6 + uVar10 & (uVar6 ^ 0xffffffffffffffff));
  pvVar11 = (void *)(sVar17 + uVar6 + uVar15 & (uVar6 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar16 + 0x30);
  pvVar2 = pvVar9;
  (*pcVar14)(pvVar9,1,lVar12);
  pvVar3 = pvVar11;
  (*pcVar14)(pvVar11,1,lVar12);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (*pcVar18)(pvVar9,pvVar11,lVar12);
      goto LAB_10073f5dc;
    }
    (**(code **)(lVar16 + 8))(pvVar9,lVar12);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar9,pvVar11,lVar12);
    (**(code **)(lVar16 + 0x38))(pvVar9,0,1,lVar12);
    goto LAB_10073f5dc;
  }
  sVar1 = sVar17;
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar1 = sVar17 + 1;
  }
  _memcpy(pvVar9,pvVar11,sVar1);
LAB_10073f5dc:
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar12 + -8);
  uVar13 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = sVar17 + uVar13 + (long)pvVar9;
  uVar10 = sVar17 + uVar13 + (long)pvVar11;
  pcVar14 = *(code **)(lVar7 + 0x30);
  uVar15 = uVar6 & (uVar13 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar15,1,lVar12);
  uVar4 = uVar10 & (uVar13 ^ 0xffffffffffffffff);
  (*pcVar14)(uVar4,1,lVar12);
  if ((int)uVar15 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar7 + 0x28))
                (uVar6 & (uVar13 ^ 0xffffffffffffffff),uVar10 & (uVar13 ^ 0xffffffffffffffff),lVar12
                );
      return param_1;
    }
    (**(code **)(lVar7 + 8))(uVar6 & (uVar13 ^ 0xffffffffffffffff),lVar12);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar7 + 0x20))
              (uVar6 & (uVar13 ^ 0xffffffffffffffff),uVar10 & (uVar13 ^ 0xffffffffffffffff),lVar12);
    (**(code **)(lVar7 + 0x38))(uVar6 & (uVar13 ^ 0xffffffffffffffff),0,1,lVar12);
    return param_1;
  }
  sVar17 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  _memcpy((void *)(uVar6 & (uVar13 ^ 0xffffffffffffffff)),
          (void *)(uVar10 & (uVar13 ^ 0xffffffffffffffff)),sVar17);
  return param_1;
}



/* Address: 0x10073f720 | FUN_10073f720 */

ulong FUN_10073f720(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar5 = *(long *)(param_3 + 0x10);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar5 + -8);
  uVar16 = *(uint *)(lVar24 + 0x54);
  uVar4 = 0;
  if (uVar16 != 0) {
    uVar4 = uVar16 - 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar5,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar25 = *(long *)(lVar10 + -8);
  uVar13 = *(uint *)(lVar25 + 0x54);
  uVar3 = uVar13;
  if (uVar13 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar2 = 0;
  if (uVar13 != 0) {
    uVar2 = uVar13 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 <= uVar3) {
    uVar7 = uVar3;
  }
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar5,puVar8,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8
            );
  lVar15 = *(long *)(lVar11 + -8);
  iVar9 = *(int *)(lVar15 + 0x54);
  uVar3 = 0;
  if (iVar9 != 0) {
    uVar3 = iVar9 - 1;
  }
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  lVar17 = *(long *)(lVar24 + 0x40);
  if (uVar16 == 0) {
    lVar17 = lVar17 + 1;
  }
  lVar19 = *(long *)(lVar25 + 0x40);
  lVar1 = lVar19;
  if (uVar13 == 0) {
    lVar1 = lVar19 + 1;
  }
  lVar20 = *(long *)(lVar15 + 0x40);
  if (iVar9 == 0) {
    lVar20 = lVar20 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar21 = (ulong)*(byte *)(lVar25 + 0x50);
  uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    lVar20 = lVar20 + (lVar1 + uVar18 +
                       (lVar19 + uVar21 + (lVar17 + uVar21 & (uVar21 ^ 0xffffffffffffffff)) &
                       (uVar21 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff));
    uVar22 = (uint)lVar20;
    uVar7 = uVar22 << 3;
    if (uVar22 < 4) {
      uVar23 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar7 & 0x1f)) >> (ulong)(uVar7 & 0x1f)) + 1;
      if (0xff < uVar23) {
        if (uVar23 >> 0x10 == 0) {
          uVar23 = (uint)*(ushort *)((long)param_1 + lVar20);
        }
        else {
          uVar23 = *(uint *)((long)param_1 + lVar20);
        }
        goto LAB_10073f850;
      }
      if (1 < uVar23) goto LAB_10073f84c;
    }
    else {
LAB_10073f84c:
      uVar23 = (uint)*(byte *)((long)param_1 + lVar20);
LAB_10073f850:
      if (uVar23 != 0) {
        uVar4 = 0;
        if (uVar22 < 4) {
          uVar4 = uVar23 - 1 << (ulong)(uVar7 & 0x1f);
        }
        if (uVar22 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 4;
          if (uVar22 < 4) {
            uVar16 = uVar22;
          }
          if ((int)uVar16 < 3) {
            if (uVar16 == 1) {
              uVar16 = (uint)(byte)*param_1;
            }
            else {
              uVar16 = (uint)(ushort)*param_1;
            }
          }
          else if (uVar16 == 3) {
            uVar16 = (uint)(uint3)*param_1;
          }
          else {
            uVar16 = *param_1;
          }
        }
        return (ulong)(uVar3 + (uVar16 | uVar4) + 1);
      }
    }
    if (uVar3 == 0) {
      return 0;
    }
  }
  if (uVar4 == uVar3) {
    pcVar14 = *(code **)(lVar24 + 0x30);
    lVar10 = lVar5;
    uVar13 = uVar16;
  }
  else {
    uVar12 = (ulong)(lVar17 + uVar21 + (long)param_1) & ~uVar21;
    if (uVar13 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010073f920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar25 + 0x30))(uVar12,uVar13,lVar10);
      return uVar12;
    }
    param_1 = (uint *)(lVar19 + uVar21 + uVar12 & ~uVar21);
    if (uVar2 != uVar3) {
      uVar18 = (ulong)((long)param_1 + lVar1 + uVar18) & ~uVar18;
      (**(code **)(lVar15 + 0x30))(uVar18,iVar9,lVar11);
      iVar9 = (int)uVar18;
      goto LAB_10073f8d0;
    }
    pcVar14 = *(code **)(lVar25 + 0x30);
  }
  (*pcVar14)(param_1,uVar13,lVar10);
  iVar9 = (int)param_1;
LAB_10073f8d0:
  uVar4 = 0;
  if (iVar9 != 0) {
    uVar4 = iVar9 - 1;
  }
  return (ulong)uVar4;
}



/* Address: 0x10073f9d4 | FUN_10073f9d4 */

void FUN_10073f9d4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  size_t sVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  byte bVar26;
  long lVar27;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar7 = *(long *)(param_4 + 0x10);
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  lVar25 = *(long *)(lVar7 + -8);
  uVar14 = *(uint *)(lVar25 + 0x54);
  uVar17 = 0;
  if (uVar14 != 0) {
    uVar17 = uVar14 - 1;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar27 = *(long *)(lVar12 + -8);
  uVar15 = *(uint *)(lVar27 + 0x54);
  uVar6 = uVar15;
  if (uVar15 <= uVar17) {
    uVar6 = uVar17;
  }
  uVar4 = 0;
  if (uVar15 != 0) {
    uVar4 = uVar15 - 1;
  }
  uVar24 = uVar4;
  if (uVar4 <= uVar6) {
    uVar24 = uVar6;
  }
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,puVar11,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  bVar26 = 0;
  lVar16 = *(long *)(lVar13 + -8);
  uVar9 = *(uint *)(lVar16 + 0x54);
  uVar6 = 0;
  if (uVar9 != 0) {
    uVar6 = uVar9 - 1;
  }
  uVar5 = uVar6;
  if (uVar6 <= uVar24) {
    uVar5 = uVar24;
  }
  lVar18 = *(long *)(lVar25 + 0x40);
  if (uVar14 == 0) {
    lVar18 = lVar18 + 1;
  }
  lVar20 = *(long *)(lVar27 + 0x40);
  lVar3 = lVar20;
  if (uVar15 == 0) {
    lVar3 = lVar20 + 1;
  }
  uVar21 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar19 = (ulong)*(byte *)(lVar16 + 0x50);
  sVar22 = *(size_t *)(lVar16 + 0x40);
  if (uVar9 == 0) {
    sVar22 = sVar22 + 1;
  }
  sVar2 = (lVar3 + uVar19 +
           (lVar20 + uVar21 + (lVar18 + uVar21 & (uVar21 ^ 0xffffffffffffffff)) &
           (uVar21 ^ 0xffffffffffffffff)) & (uVar19 ^ 0xffffffffffffffff)) + sVar22;
  uVar24 = (uint)sVar2;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    if (uVar24 < 4) {
      uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar24 << 3 & 0x1f)) >>
              (ulong)(uVar24 << 3 & 0x1f)) + 1;
      bVar26 = 2;
      if (0xffff < uVar1) {
        bVar26 = 4;
      }
      if (uVar1 < 0x100) {
        bVar26 = 1 < uVar1;
      }
    }
    else {
      bVar26 = 1;
    }
  }
  if (uVar5 < param_2) {
    param_2 = param_2 + ~uVar5;
    if (uVar24 < 4) {
      iVar23 = (param_2 >> (ulong)(uVar24 << 3 & 0x1f)) + 1;
      if (uVar24 != 0) {
        uVar17 = param_2 & (-1 << (ulong)(uVar24 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar10 = (undefined2)uVar17;
        if (uVar24 == 3) {
          *(undefined2 *)param_1 = uVar10;
          *(char *)((long)param_1 + 2) = (char)(uVar17 >> 0x10);
        }
        else if (uVar24 == 2) {
          *(undefined2 *)param_1 = uVar10;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar23 = 1;
    }
    if (bVar26 < 2) {
      if (bVar26 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar23;
      }
    }
    else if (bVar26 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar23;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar23;
    }
  }
  else {
    if (bVar26 < 2) {
      if (bVar26 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar26 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar17 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar25 + 0x38);
        param_2 = param_2 + 1;
        lVar12 = lVar7;
        uVar15 = uVar14;
      }
      else {
        param_1 = (uint *)(lVar18 + uVar21 + (long)param_1 & ~uVar21);
        if (uVar15 == uVar5) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar27 + 0x38);
        }
        else {
          param_1 = (uint *)(lVar20 + uVar21 + (long)param_1 & ~uVar21);
          if (uVar4 == uVar5) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar27 + 0x38);
            param_2 = param_2 + 1;
          }
          else {
            param_1 = (uint *)((long)param_1 + lVar3 + uVar19 & ~uVar19);
            if (uVar6 < param_2) {
              uVar14 = (uint)sVar22;
              uVar17 = 0xffffffff;
              if (uVar14 < 4) {
                uVar17 = ~(-1 << (ulong)((uVar14 & 3) << 3));
              }
              if (uVar14 == 0) {
                return;
              }
              uVar17 = uVar17 & (uVar6 - param_2 ^ 0xffffffff);
              uVar6 = 4;
              if (uVar14 < 4) {
                uVar6 = uVar14;
              }
              _bzero(param_1,sVar22);
              if ((int)uVar6 < 3) {
                if (uVar6 == 1) {
                  *(char *)param_1 = (char)uVar17;
                  return;
                }
                *(short *)param_1 = (short)uVar17;
                return;
              }
              if (uVar6 == 3) {
                *(short *)param_1 = (short)uVar17;
                *(char *)((long)param_1 + 2) = (char)(uVar17 >> 0x10);
                return;
              }
              *param_1 = uVar17;
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
            param_2 = param_2 + 1;
            lVar12 = lVar13;
            uVar15 = uVar9;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010073fc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar15,lVar12);
      return;
    }
  }
  return;
}



/* Address: 0x10073fd74 | FUN_10073fd74 */

void FUN_10073fd74(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073fd80 | FUN_10073fd80 */

void FUN_10073fd80(long param_1)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10073fd90);
  (*pcVar1)();
}



/* Address: 0x10073fd90 | FUN_10073fd90 */

void FUN_10073fd90(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  (**(code **)(lVar3 + 0x10))(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  FUN_100740fac(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  return;
}



/* Address: 0x10073fe38 | FUN_10073fe38 */

undefined1  [16] FUN_10073fe38(void)

{
  return ZEXT816(3) << 0x40;
}



/* Address: 0x10073fe44 | FUN_10073fe44 */

void FUN_10073fe44(long param_1)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10073fe54);
  (*pcVar1)();
}



/* Address: 0x10073fe54 | FUN_10073fe54 */

void FUN_10073fe54(long param_1)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10073fe64);
  (*pcVar1)();
}



/* Address: 0x10073fe64 | FUN_10073fe64 */

void FUN_10073fe64(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar10 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar10 + 0x40);
  lVar4 = 0;
  FUN_100740038(0,lVar2,uVar5);
  lVar9 = *(long *)(lVar4 + -8);
  plVar7 = (long *)(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0) +
                   -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  plVar1 = (long *)(unaff_x20 + *(int *)(param_2 + 0x24));
  lVar8 = *plVar1;
  bVar3 = *(byte *)(plVar1 + 1);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      if (0 < lVar8) {
        FUN_100749ef8(0,lVar2,uVar5);
        FUN_10074a3c4();
        *plVar7 = unaff_x20;
        uVar5 = 1;
        goto LAB_10073fff8;
      }
    }
    else if (0 < lVar8) {
      FUN_1007508a0(0,lVar2,uVar5);
LAB_10073ff84:
      FUN_100750cd4();
      *plVar7 = unaff_x20;
      uVar5 = 2;
      goto LAB_10073fff8;
    }
  }
  else {
    if (bVar3 != 2) {
      FUN_1007508a0(0,lVar2,uVar5);
      FUN_100750cd4();
      uVar5 = 2;
      *plVar7 = unaff_x20;
      goto LAB_10073fff8;
    }
    if (0 < lVar8) {
      FUN_1007508a0(0,lVar2,uVar5);
      goto LAB_10073ff84;
    }
  }
  (**(code **)(lVar10 + 0x10))(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  uVar5 = 0;
LAB_10073fff8:
  _swift_storeEnumTagMultiPayload(plVar7,lVar4,uVar5);
  (**(code **)(lVar9 + 0x20))(param_1,plVar7,lVar4);
  return;
}



/* Address: 0x100740038 | FUN_100740038 */

void FUN_100740038(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100740044 | FUN_100740044 */

void FUN_100740044(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Result RVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined7 extraout_var_01;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,OVar3.value);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  lVar5 = 0;
  FUN_1007c3a74(0,lVar8);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar7;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar7;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x70) = CONCAT71(extraout_var_01,OVar3.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar7;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,uVar9,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x88) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar7;
  lVar8 = 0;
  FUN_100740038(0,uVar9,uVar10);
  *(long *)(unaff_x22 + 0xa0) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar7;
  _swift_task_switch(FUN_100740204,0,0);
  return;
}



/* Address: 0x100740204 | FUN_100740204 */

void FUN_100740204(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x18),uVar5);
  _swift_getEnumCaseMultiPayload(uVar1,uVar5);
  puVar3 = *(undefined8 **)(unaff_x22 + 0xb0);
  if ((int)uVar1 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar4 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
    *(code **)(unaff_x22 + 0xb8) = pcVar4;
    (*pcVar4)(*(undefined8 *)(unaff_x22 + 0x98),puVar3,uVar6);
    _swift_getAssociatedConformanceWitness
              (uVar1,uVar5,uVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10074036c;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  if ((int)uVar1 == 1) {
    *(undefined8 *)(unaff_x22 + 0xd0) = *puVar3;
    plVar2 = (long *)&DAT_00000030;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1007404c8;
    FUN_100748644(plVar2,*(undefined8 *)(unaff_x22 + 0x50));
    return;
  }
  *(undefined8 *)(unaff_x22 + 0xe0) = *puVar3;
  plVar2 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007406e8;
  FUN_10074f4c8(plVar2,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10074036c | FUN_10074036c */

void FUN_10074036c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007403d0;
  }
  else {
    pcVar1 = FUN_100740908;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007403d0 | FUN_1007403d0 */

void FUN_1007403d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  code *pcVar9;
  
  pcVar9 = *(code **)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(uVar8,uVar1);
  (*pcVar9)(uVar8,uVar6,uVar7);
  _swift_storeEnumTagMultiPayload(uVar8,uVar1,0);
  (**(code **)(lVar5 + 0x20))(uVar4,uVar2,uVar3);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007404c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007404c8 | FUN_1007404c8 */

void FUN_1007404c8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd8));
  _swift_task_switch(FUN_100740518,0,0);
  return;
}



/* Address: 0x100740518 | FUN_100740518 */

/* WARNING: Removing unreachable block (ram,0x00010074060c) */

void FUN_100740518(void)

{
  bool bVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar10 = *(long *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))
            (uVar6,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  lVar11 = *(long *)(lVar10 + -8);
  (**(code **)(lVar11 + 0x30))(uVar6,1,lVar10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  bVar1 = (int)uVar6 != 1;
  if (bVar1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    pTVar2 = &TargetProtocolConformanceDescriptor_100c78b28;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78b28,uVar9);
    FUN_1007c346c(uVar6,uVar9,pTVar2);
    _swift_release(uVar4);
    (**(code **)(lVar11 + 8))(uVar7,uVar9);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar3 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_release(uVar4);
    (**(code **)(lVar11 + 8))(uVar7,uVar9);
    pcVar3 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  }
  (*pcVar3)(uVar6,!bVar1,1,lVar10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007406e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007406e8 | FUN_1007406e8 */

void FUN_1007406e8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xe8));
  _swift_task_switch(FUN_100740738,0,0);
  return;
}



/* Address: 0x100740738 | FUN_100740738 */

/* WARNING: Removing unreachable block (ram,0x00010074082c) */

void FUN_100740738(void)

{
  bool bVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))
            (uVar11,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x40));
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x30))(uVar11,1,lVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  bVar1 = (int)uVar11 != 1;
  if (bVar1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    pTVar2 = &TargetProtocolConformanceDescriptor_100c78b28;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78b28,uVar9);
    FUN_1007c346c(uVar11,uVar9,pTVar2);
    _swift_release(uVar5);
    (**(code **)(lVar10 + 8))(uVar7,uVar9);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_release(uVar5);
    (**(code **)(lVar10 + 8))(uVar7,uVar9);
    pcVar3 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  (*pcVar3)(uVar11,!bVar1,1,lVar4);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100740904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100740908 | FUN_100740908 */

void FUN_100740908(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007409a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007409ac | FUN_1007409ac */

void FUN_1007409ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100740044(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100740a14 | FUN_100740a14 */

void FUN_100740a14(long param_1)

{
  FUN_10073fe64();
                    /* WARNING: Could not recover jumptable at 0x000100740a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100740a44 | FUN_100740a44 */

void FUN_100740a44(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75c20,param_1);
  return;
}



/* Address: 0x100740a54 | FUN_100740a54 */

undefined1  [16] FUN_100740a54(void)

{
  return ZEXT816(0x100efd998);
}



/* Address: 0x100740a64 | FUN_100740a64 */

void FUN_100740a64(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c75cf8;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100740ad8 | FUN_100740ad8 */

long * FUN_100740ad8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar2 = *(undefined1 *)(puVar5 + 1);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    *(undefined1 *)(puVar4 + 1) = uVar2;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100740b8c | FUN_100740b8c */

long FUN_100740b8c(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100740bf0 | FUN_100740bf0 */

long FUN_100740bf0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100740c54 | FUN_100740c54 */

long FUN_100740c54(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x20))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100740cb8 | FUN_100740cb8 */

long FUN_100740cb8(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100740d1c | FUN_100740d1c */

uint * FUN_100740d1c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar6;
  if (uVar6 < 0xfd) {
    uVar2 = 0xfc;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 9;
    uVar5 = (uint)lVar1;
    uVar7 = 2;
    uVar4 = uVar7;
    if (uVar5 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar7 = 4;
    }
    if (uVar4 < 0x100) {
      uVar7 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar7;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar7 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_100740db4;
    }
    else if (uVar3 == 2) {
      uVar7 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_100740db4:
        uVar6 = uVar7 - 1 << (ulong)((uVar5 & 3) << 3);
        if (uVar5 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar7 | uVar6) + 1);
      }
    }
    else {
      uVar7 = *(uint *)((long)param_1 + lVar1);
      if (uVar7 != 0) goto LAB_100740db4;
    }
  }
  if (0xfb < uVar6) {
                    /* WARNING: Could not recover jumptable at 0x000100740de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar6 = (uint)*(byte *)(((ulong)((long)param_1 + *(long *)(lVar8 + 0x40) + 7) & 0xfffffffffffffff8
                          ) + 8);
  uVar2 = 0;
  if (3 < uVar6) {
    uVar2 = (uVar6 ^ 0xff) + 1;
  }
  return (uint *)(ulong)uVar2;
}



/* Address: 0x100740e20 | FUN_100740e20 */

void FUN_100740e20(uint *param_1,uint param_2,uint param_3,long param_4)

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
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0xfd) {
    uVar2 = 0xfc;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 9;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    _bzero(param_1,sVar1);
    iVar6 = 1;
    if ((uint)sVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (0xfb < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100740f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1);
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0xfd) {
        *(char *)(puVar7 + 1) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = (ulong)(param_2 - 0xfd);
      }
    }
  }
  return;
}



/* Address: 0x100740fac | FUN_100740fac */

void FUN_100740fac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100740fb8 | FUN_100740fb8 */

void FUN_100740fb8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100740038(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100741024 | FUN_100741024 */

void FUN_100741024(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007410e0;
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
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1007410e0:
  if ((uVar5 != 2) && (uVar5 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x000100741110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  _swift_release(*(undefined8 *)param_1);
  return;
}



/* Address: 0x100741114 | FUN_100741114 */

undefined8 * FUN_100741114(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007411d4;
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
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1007411d4:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  _swift_retain();
  return param_1;
}



/* Address: 0x100741234 | FUN_100741234 */

uint * FUN_100741234(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100741300;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100741300:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007413a0;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1007413a0:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else {
    if (uVar4 != 1) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
      *(byte *)((long)param_1 + uVar3) = 0;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  _swift_retain();
  return param_1;
}



/* Address: 0x100741408 | FUN_100741408 */

undefined8 * FUN_100741408(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007414c8;
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
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1007414c8:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  return param_1;
}



/* Address: 0x100741524 | FUN_100741524 */

uint * FUN_100741524(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007415f0;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1007415f0:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100741690;
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
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100741690:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Address: 0x1007416f4 | FUN_1007416f4 */

int FUN_1007416f4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1007417c8;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1007417c8;
      goto LAB_100741754;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100741754:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
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
LAB_1007417c8:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x10074182c | FUN_10074182c */

void FUN_10074182c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  sVar1 = uVar5 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar8 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar6 << 3 & 0x1f)) +
            1;
    bVar8 = 2;
    if (0xffff < uVar2) {
      bVar8 = 4;
    }
    if (uVar2 < 0x100) {
      bVar8 = 1 < uVar2;
    }
  }
  else {
    bVar8 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
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
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x1007419f0 | FUN_1007419f0 */

void FUN_1007419f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007419fc | thunk_FUN_10035713c */

void thunk_FUN_10035713c(void)

{
  FUN_10035713c();
  return;
}



/* Address: 0x100741a00 | thunk_FUN_100357184 */

void thunk_FUN_100357184(void)

{
  FUN_100357184();
  return;
}



/* Address: 0x100741a04 | FUN_100741a04 */

undefined1  [16] FUN_100741a04(void)

{
  return ZEXT816(0x100efdae0);
}



/* Address: 0x100741a14 | FUN_100741a14 */

void FUN_100741a14(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = puStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}



/* Address: 0x100741a9c | thunk_FUN_100741aa0 */

long * thunk_FUN_100741aa0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar5);
    if (2 < *(byte *)((long)param_2 + uVar5)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      *param_1 = *param_2;
      uVar2 = 2;
    }
    else {
      if (uVar4 != 1) {
        (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      *param_1 = *param_2;
      uVar2 = 1;
    }
    *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100741aa0 | FUN_100741aa0 */

long * FUN_100741aa0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar5);
    if (2 < *(byte *)((long)param_2 + uVar5)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      *param_1 = *param_2;
      uVar2 = 2;
    }
    else {
      if (uVar4 != 1) {
        (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      *param_1 = *param_2;
      uVar2 = 1;
    }
    *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100741b9c | FUN_100741b9c */

uint FUN_100741b9c(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
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
    uVar2 = uVar6 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Address: 0x100741c60 | FUN_100741c60 */

void FUN_100741c60(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  size_t sVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  sVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (sVar4 < 9) {
    sVar4 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + sVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar5 = (uint)sVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + sVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x03';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar4) = 3;
      _bzero(param_1,sVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100741d48 | thunk_FUN_100357184 */

void thunk_FUN_100357184(void)

{
  FUN_100357184();
  return;
}


