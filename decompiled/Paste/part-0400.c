/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004e7360 | FUN_1004e7360 */

void FUN_1004e7360(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 0x1a) {
    uVar6 = 0x19;
  }
  uVar5 = (ulong)*(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  sVar1 = uVar6 + ((ulong)~(uint)uVar5 & uVar5 + 0x18) + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0xff) {
    bVar9 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar7 << 3 & 0x1f)) +
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
  if (param_2 < 0xff) {
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
      *(char *)(param_1 + 4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
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



/* Address: 0x1004e753c | FUN_1004e753c */

void FUN_1004e753c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c52e18;
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1004e75c4 | FUN_1004e75c4 */

long * FUN_1004e75c4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 0x11 | uVar4) - *(long *)(lVar3 + 0x40)) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    pcVar5 = *(code **)(lVar3 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar5)((long)param_1 + uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff),
              (long)param_2 + uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004e76a0 | FUN_1004e76a0 */

void FUN_1004e76a0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001004e76fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (param_1 + uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return;
}



/* Address: 0x1004e7700 | FUN_1004e7700 */

undefined8 * FUN_1004e7700(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar4)(uVar3 + 0x10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
            uVar3 + 0x10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  return param_1;
}



/* Address: 0x1004e7794 | FUN_1004e7794 */

undefined8 * FUN_1004e7794(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))
            (uVar2 + 0x10 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x10 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1004e7828 | FUN_1004e7828 */

undefined8 * FUN_1004e7828(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            (uVar2 + 0x10 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x10 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1004e7898 | FUN_1004e7898 */

undefined8 * FUN_1004e7898(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))
            (uVar4 + 0x10 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 0x10 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff),lVar3);
  return param_1;
}



/* Address: 0x1004e791c | FUN_1004e791c */

ulong FUN_1004e791c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1004e79f0;
  lVar1 = (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar8 = (uint)lVar1;
  uVar6 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_1004e79f0;
      goto LAB_1004e79b0;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_1004e79b0:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar9 != 0) {
    uVar3 = 0;
    if (uVar8 < 4) {
      uVar3 = uVar9 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar8 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
      if (uVar8 < 4) {
        uVar6 = uVar8;
      }
      if ((int)uVar6 < 3) {
        if (uVar6 == 1) {
          uVar6 = (uint)(byte)*param_1;
        }
        else {
          uVar6 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar6 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
    }
    return (ulong)(uVar2 + (uVar6 | uVar3) + 1);
  }
LAB_1004e79f0:
  if (-1 < (int)uVar3) {
    uVar7 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = (ulong)((long)param_1 + uVar7 + 0x10) & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001004e7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar7,uVar3,lVar4);
  return uVar7;
}



/* Address: 0x1004e7a94 | FUN_1004e7a94 */

void FUN_1004e7a94(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else if (uVar9 < 4) {
    uVar10 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar5 = 2;
    if (0xfffe < uVar10) {
      bVar5 = 4;
    }
    if (uVar10 < 0xff) {
      bVar5 = uVar10 != 0;
    }
  }
  else {
    bVar5 = 1;
  }
  uVar10 = (uint)param_2;
  if (uVar2 < uVar10) {
    uVar10 = uVar10 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (uVar10 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = uVar10 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)uVar10;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = uVar10;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar10 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004e7c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 0x10 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if ((int)uVar10 < 0) {
        *param_1 = (ulong)(uVar10 & 0x7fffffff);
        param_1[1] = 0;
      }
      else {
        param_1[1] = (ulong)(uVar10 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1004e7cac | FUN_1004e7cac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004e7cac(void)

{
  return ZEXT816(0x100fccbc8);
}



/* Address: 0x1004e7ccc | FUN_1004e7ccc */

void FUN_1004e7ccc(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x70);
  return;
}



/* Address: 0x1004e7d10 | FUN_1004e7d10 */

void FUN_1004e7d10(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(long **)(unaff_x22 + 0x50) = unaff_x20;
  lVar1 = 0;
  FUN_1004e4dd4(0,*(undefined8 *)(*unaff_x20 + 0x60),*(undefined8 *)(*unaff_x20 + 0x68));
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  _swift_task_switch(FUN_1004e7d78,0,0);
  return;
}



/* Address: 0x1004e7d78 | FUN_1004e7d78 */

/* WARNING: Removing unreachable block (ram,0x0001004e7e94) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ea8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e7e20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e7d78(void)

{
  int iVar1;
  int *piVar2;
  JSONEncoder *pJVar3;
  undefined *puVar4;
  undefined *puVar5;
  Data DVar6;
  JSONDecoder *pJVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x48);
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  uVar14 = puVar9[3];
  uVar13 = puVar9[2];
  uVar12 = puVar9[5];
  uVar11 = puVar9[4];
  uVar16 = puVar9[1];
  uVar15 = *puVar9;
  *(undefined1 *)(unaff_x22 + 0x40) = *(undefined1 *)(puVar9 + 6);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar15;
  puVar4 = &DAT_100fcd010;
  FUN_1000f7830(&DAT_100fcd010,&DAT_100c534d0);
  puVar5 = &DAT_100fcd018;
  FUN_100134584(&DAT_100fcd018,&DAT_100fcd010,&DAT_100c534d0,
                &TargetProtocolConformanceDescriptor_100c52d60);
  DVar6 = Foundation::JSONEncoder::_encode(pJVar3,puVar5,puVar4,puVar5);
  *(undefined **)(unaff_x22 + 0x70) = DVar6.unknown;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  _swift_release(pJVar3);
  DVar6.unknown = *(undefined **)(unaff_x22 + 0x58);
  pJVar7 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
  pJVar7 = Foundation::JSONDecoder::init(pJVar7);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52d38,DVar6.unknown);
  Foundation::JSONDecoder::_decode(pJVar7,DVar6);
  lVar10 = *(long *)(unaff_x22 + 0x50);
  _swift_release(pJVar7);
  piVar2 = *(int **)(lVar10 + 0x10);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1004e7f34;
                    /* WARNING: Could not recover jumptable at 0x0001004e7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1004e7f34 | FUN_1004e7f34 */

void FUN_1004e7f34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004e7f90;
  }
  else {
    pcVar1 = FUN_1004e7fec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004e7f90 | FUN_1004e7f90 */

void FUN_1004e7f90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004e7fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004e7fec | FUN_1004e7fec */

void FUN_1004e7fec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001004e8044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004e8048 | FUN_1004e8048 */

void FUN_1004e8048(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e8054 | FUN_1004e8054 */

undefined1  [16] FUN_1004e8054(void)

{
  return ZEXT816(0x100edb690);
}



/* Address: 0x1004e8064 | FUN_1004e8064 */

undefined1  [16] FUN_1004e8064(void)

{
  return ZEXT816(0x100edb800);
}



/* Address: 0x1004e8074 | FUN_1004e8074 */

void FUN_1004e8074(undefined8 param_1)

{
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,param_1);
  return;
}



/* Address: 0x1004e8084 | FUN_1004e8084 */

void FUN_1004e8084(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53128,param_1);
  return;
}



/* Address: 0x1004e8094 | FUN_1004e8094 */

void FUN_1004e8094(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53250,param_1);
  return;
}



/* Address: 0x1004e80a4 | FUN_1004e80a4 */

void FUN_1004e80a4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53340,param_1);
  return;
}



/* Address: 0x1004e80b4 | thunk_FUN_1004dbda0 */

void thunk_FUN_1004dbda0(void)

{
  FUN_1004dbda0();
  return;
}



/* Address: 0x1004e80b8 | thunk_FUN_1004d9ea8 */

void thunk_FUN_1004d9ea8(void)

{
  FUN_1004d9ea8();
  return;
}



/* Address: 0x1004e80bc | thunk_FUN_1004e80c0 */

void thunk_FUN_1004e80c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c553f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c553f0,&DAT_100edd000);
  DAT_100fcce28 = pTVar1;
  return;
}



/* Address: 0x1004e80c0 | FUN_1004e80c0 */

void FUN_1004e80c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c553f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c553f0,&DAT_100edd000);
  DAT_100fcce28 = pTVar1;
  return;
}



/* Address: 0x1004e8100 | FUN_1004e8100 */

void FUN_1004e8100(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c532a0,param_1);
  return;
}



/* Address: 0x1004e8110 | FUN_1004e8110 */

void FUN_1004e8110(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53278,param_1);
  return;
}



/* Address: 0x1004e8120 | FUN_1004e8120 */

void FUN_1004e8120(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53178,param_1);
  return;
}



/* Address: 0x1004e8130 | FUN_1004e8130 */

void FUN_1004e8130(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53150,param_1);
  return;
}



/* Address: 0x1004e8140 | FUN_1004e8140 */

void FUN_1004e8140(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53050,param_1);
  return;
}



/* Address: 0x1004e8150 | FUN_1004e8150 */

void FUN_1004e8150(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53028,param_1);
  return;
}



/* Address: 0x1004e8160 | thunk_FUN_1004e8164 */

void thunk_FUN_1004e8164(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53000;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53000,&DAT_100edb800);
  DAT_100fcce80 = pTVar1;
  return;
}



/* Address: 0x1004e8164 | FUN_1004e8164 */

void FUN_1004e8164(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53000;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53000,&DAT_100edb800);
  DAT_100fcce80 = pTVar1;
  return;
}



/* Address: 0x1004e81a4 | thunk_FUN_1004e81a8 */

void thunk_FUN_1004e81a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52fd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52fd8,&DAT_100edb800);
  DAT_100fcce88 = pTVar1;
  return;
}



/* Address: 0x1004e81a8 | FUN_1004e81a8 */

void FUN_1004e81a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcce88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52fd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52fd8,&DAT_100edb800);
  DAT_100fcce88 = pTVar1;
  return;
}



/* Address: 0x1004e81e8 | FUN_1004e81e8 */

undefined1  [16] FUN_1004e81e8(void)

{
  return ZEXT816(0x100edb820);
}



/* Address: 0x1004e81f8 | thunk_FUN_1004e81fc */

void thunk_FUN_1004e81fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd030 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c534f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c534f0,&DAT_100edb820);
  DAT_100fcd030 = pTVar1;
  return;
}



/* Address: 0x1004e81fc | FUN_1004e81fc */

void FUN_1004e81fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd030 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c534f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c534f0,&DAT_100edb820);
  DAT_100fcd030 = pTVar1;
  return;
}



/* Address: 0x1004e823c | FUN_1004e823c */

void FUN_1004e823c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004e8270();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1004e82b0();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_1004e82f0();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x1004e8270 | FUN_1004e8270 */

void FUN_1004e8270(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd080 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53540,&DAT_100edb820);
  DAT_100fcd080 = pTVar1;
  return;
}



/* Address: 0x1004e82b0 | FUN_1004e82b0 */

void FUN_1004e82b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53518;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53518,&DAT_100edb820);
  DAT_100fcd088 = pTVar1;
  return;
}



/* Address: 0x1004e82f0 | FUN_1004e82f0 */

void FUN_1004e82f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53568;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53568,&DAT_100edb820);
  DAT_100fcd090 = pTVar1;
  return;
}



/* Address: 0x1004e8330 | FUN_1004e8330 */

void FUN_1004e8330(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53620,&DAT_100edb840);
  DAT_100fcd0a0 = pTVar1;
  return;
}



/* Address: 0x1004e8370 | FUN_1004e8370 */

undefined1  [16] FUN_1004e8370(void)

{
  return ZEXT816(0x100edb840);
}



/* Address: 0x1004e8380 | thunk_FUN_1004e8384 */

void thunk_FUN_1004e8384(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c535f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c535f8,&DAT_100edb840);
  DAT_100fcd0a8 = pTVar1;
  return;
}



/* Address: 0x1004e8384 | FUN_1004e8384 */

void FUN_1004e8384(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c535f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c535f8,&DAT_100edb840);
  DAT_100fcd0a8 = pTVar1;
  return;
}



/* Address: 0x1004e83c4 | thunk_FUN_1004e83c8 */

void thunk_FUN_1004e83c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c535d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c535d0,&DAT_100edb840);
  DAT_100fcd0b0 = pTVar1;
  return;
}



/* Address: 0x1004e83c8 | FUN_1004e83c8 */

void FUN_1004e83c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c535d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c535d0,&DAT_100edb840);
  DAT_100fcd0b0 = pTVar1;
  return;
}



/* Address: 0x1004e8408 | thunk_FUN_1004e3220 */

void thunk_FUN_1004e3220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1004e840c | thunk_FUN_1002a7d28 */

void thunk_FUN_1002a7d28(void)

{
  FUN_1002a7d28();
  return;
}



/* Address: 0x1004e8410 | FUN_1004e8410 */

void FUN_1004e8410(void)

{
  FUN_10044b078();
  return;
}



/* Address: 0x1004e8424 | thunk_FUN_1004df714 */

void thunk_FUN_1004df714(void)

{
  FUN_1004df714();
  return;
}



/* Address: 0x1004e8428 | thunk_FUN_1004e39c8 */

void thunk_FUN_1004e39c8(void)

{
  FUN_1004e39c8();
  return;
}



/* Address: 0x1004e842c | thunk_FUN_1004e4b5c */

void thunk_FUN_1004e4b5c(void)

{
  thunk_FUN_1004e4b5c();
  return;
}



/* Address: 0x1004e8430 | thunk_FUN_1000d537c */

void thunk_FUN_1000d537c(void)

{
  thunk_FUN_1000d537c();
  return;
}



/* Address: 0x1004e8434 | thunk_FUN_1004e4e48 */

void thunk_FUN_1004e4e48(void)

{
  FUN_1004e4e48();
  return;
}



/* Address: 0x1004e8438 | thunk_FUN_1004df748 */

void thunk_FUN_1004df748(void)

{
  FUN_1004df748();
  return;
}



/* Address: 0x1004e843c | thunk_FUN_1004e1f7c */

void thunk_FUN_1004e1f7c(void)

{
  FUN_1004e1f7c();
  return;
}



/* Address: 0x1004e8440 | thunk_FUN_1004e5e8c */

void thunk_FUN_1004e5e8c(void)

{
  thunk_FUN_1004e5e8c();
  return;
}



/* Address: 0x1004e8444 | thunk_FUN_10003cf48 */

void thunk_FUN_10003cf48(void)

{
  FUN_10003cf48();
  return;
}



/* Address: 0x1004e8448 | thunk_FUN_1004e7ccc */

void thunk_FUN_1004e7ccc(void)

{
  thunk_FUN_1004e7ccc();
  return;
}


