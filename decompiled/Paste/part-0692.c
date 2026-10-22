/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10077f304 | FUN_10077f304 */

long FUN_10077f304(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = *(uint *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *param_2;
  *param_1 = lVar2;
  _swift_retain();
  return lVar2 + ((ulong)(uVar1 & 0xf8 ^ 0x1f8) & ((ulong)uVar1 & 0xff) + 0x10);
}



/* Address: 0x10077f370 | FUN_10077f370 */

void FUN_10077f370(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar1 = *(long *)(lVar3 + 0x40) + 7;
  uVar6 = (lVar1 + (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
  if (uVar6 < 0x21) {
    uVar6 = 0x20;
  }
  uVar5 = (uint)*(byte *)((long)param_1 + uVar6);
  if (2 < *(byte *)((long)param_1 + uVar6) && (uVar6 & 0xffffffff) != 0) {
    uVar5 = *param_1 + 3;
  }
  if (uVar5 != 0) {
    if (uVar5 == 2) {
      uVar6 = (long)param_1 + uVar4 + 8 & ~uVar4;
      (**(code **)(lVar3 + 8))(uVar6,lVar2);
      param_1 = (int *)(lVar1 + uVar6 & 0xfffffffffffffff8);
    }
    else {
      param_1 = param_1 + 2;
    }
  }
  _swift_release(*(undefined8 *)param_1);
  return;
}



/* Address: 0x10077f44c | FUN_10077f44c */

undefined8 * FUN_10077f44c(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  uVar9 = (uint)*(byte *)((long)param_2 + uVar2);
  if (2 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar9 = *param_2 + 3;
  }
  if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar10 = (long)param_1 + uVar7 + 8 & ~uVar7;
    uVar7 = (long)param_2 + uVar7 + 8 & ~uVar7;
    (**(code **)(lVar5 + 0x10))(uVar10,uVar7,lVar3);
    puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)(lVar1 + uVar7 & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    puVar6[1] = puVar8[1];
    puVar6[2] = puVar8[2];
    uVar4 = 2;
  }
  else if (uVar9 == 1) {
    uVar11 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar11 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar11;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  _swift_retain();
  return param_1;
}



/* Address: 0x10077f5b0 | FUN_10077f5b0 */

int * FUN_10077f5b0(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar10 = *(long *)(lVar3 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
    if (uVar2 < 0x21) {
      uVar2 = 0x20;
    }
    uVar5 = (uint)*(byte *)((long)param_1 + uVar2);
    if (2 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar5 = *param_1 + 3;
    }
    uVar12 = ~uVar11;
    piVar7 = param_1;
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
        (**(code **)(lVar10 + 8))(uVar9,lVar3);
        piVar7 = (int *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      }
      else {
        piVar7 = param_1 + 2;
      }
    }
    _swift_release(*(undefined8 *)piVar7);
    uVar5 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 2 < *(byte *)((long)param_2 + uVar2)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
      uVar12 = (long)param_2 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 0x10))(uVar9,uVar12,lVar3);
      puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)(lVar1 + uVar12 & 0xfffffffffffffff8);
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      puVar6[2] = puVar8[2];
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    }
    *(undefined1 *)((long)param_1 + uVar2) = uVar4;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10077f7a4 | FUN_10077f7a4 */

undefined8 * FUN_10077f7a4(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  uVar9 = (uint)*(byte *)((long)param_2 + uVar2);
  if (2 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar9 = *param_2 + 3;
  }
  if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar10 = (long)param_1 + uVar7 + 8 & ~uVar7;
    uVar7 = (long)param_2 + uVar7 + 8 & ~uVar7;
    (**(code **)(lVar5 + 0x20))(uVar10,uVar7,lVar3);
    puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)(lVar1 + uVar7 & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    puVar6[1] = puVar8[1];
    puVar6[2] = puVar8[2];
    uVar4 = 2;
  }
  else if (uVar9 == 1) {
    uVar11 = *(undefined8 *)param_2;
    uVar13 = *(undefined8 *)(param_2 + 6);
    uVar12 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  return param_1;
}



/* Address: 0x10077f8fc | FUN_10077f8fc */

int * FUN_10077f8fc(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 != param_2) {
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    lVar10 = *(long *)(lVar3 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18;
    if (uVar2 < 0x21) {
      uVar2 = 0x20;
    }
    uVar5 = (uint)*(byte *)((long)param_1 + uVar2);
    if (2 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar5 = *param_1 + 3;
    }
    uVar12 = ~uVar11;
    piVar7 = param_1;
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
        (**(code **)(lVar10 + 8))(uVar9,lVar3);
        piVar7 = (int *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      }
      else {
        piVar7 = param_1 + 2;
      }
    }
    _swift_release(*(undefined8 *)piVar7);
    uVar5 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 2 < *(byte *)((long)param_2 + uVar2)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar9 = (long)param_1 + uVar11 + 8 & uVar12;
      uVar12 = (long)param_2 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 0x20))(uVar9,uVar12,lVar3);
      puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)(lVar1 + uVar12 & 0xfffffffffffffff8);
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      puVar6[2] = puVar8[2];
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
      uVar13 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar14 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar13;
      *(undefined8 *)(param_1 + 6) = uVar15;
      *(undefined8 *)(param_1 + 4) = uVar14;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      uVar13 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar13;
    }
    *(undefined1 *)((long)param_1 + uVar2) = uVar4;
  }
  return param_1;
}



/* Address: 0x10077fac8 | FUN_10077fac8 */

int FUN_10077fac8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = (*(long *)(*(long *)(lVar3 + -8) + 0x40) + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar6 < 0x21) {
    uVar6 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    uVar7 = uVar6 | 1;
    uVar4 = (uint)uVar7;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar4 < 4) {
      uVar5 = (param_2 + 2 >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar1 = 0;
    if (1 < uVar5) {
      uVar1 = uVar8;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10077fbac;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10077fbac:
        uVar8 = uVar8 - 1 << (ulong)((uVar4 & 3) << 3);
        if (uVar4 < 4) {
          uVar5 = (uint)(byte)*param_1;
        }
        else {
          uVar5 = *param_1;
          uVar8 = 0;
        }
        return (uVar5 | uVar8) + 0xfe;
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
      if (uVar8 != 0) goto LAB_10077fbac;
    }
  }
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar2 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x10077fc00 | FUN_10077fc00 */

void FUN_10077fc00(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (*(long *)(*(long *)(lVar3 + -8) + 0x40) + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  uVar7 = uVar5 | 1;
  if (param_3 < 0xfe) {
    uVar2 = 0;
  }
  else {
    uVar6 = 2;
    uVar1 = uVar6;
    if ((uint)uVar7 < 4) {
      uVar1 = (param_3 + 2 >> 8) + 1;
    }
    if (0xffff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 < 0x100) {
      uVar6 = 1;
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = uVar6;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)((long)param_1 + uVar7) = 0;
      }
    }
    else if (uVar2 == 2) {
      *(undefined2 *)((long)param_1 + uVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + uVar7) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,uVar7);
    iVar4 = 1;
    if ((uint)uVar7 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)((long)param_1 + uVar7) = (char)iVar4;
      }
    }
    else if (uVar2 == 2) {
      *(short *)((long)param_1 + uVar7) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + uVar7) = iVar4;
    }
  }
  return;
}



/* Address: 0x10077fd80 | FUN_10077fd80 */

uint FUN_10077fd80(int *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = (*(long *)(*(long *)(lVar2 + -8) + 0x40) + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff)) + 7
          & 0xfffffffffffffff8) + 0x18;
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  uVar1 = (uint)*(byte *)((long)param_1 + uVar3);
  if (2 < *(byte *)((long)param_1 + uVar3) && (uVar3 & 0xffffffff) != 0) {
    uVar1 = *param_1 + 3;
  }
  return uVar1;
}



/* Address: 0x10077fe1c | FUN_10077fe1c */

void FUN_10077fe1c(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 7 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff))
          & 0xfffffffffffffff8) + 0x18;
  if (param_2 < 3) {
    if (uVar3 < 0x21) {
      uVar3 = 0x20;
    }
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    if (uVar3 < 0x21) {
      uVar3 = 0x20;
    }
    uVar1 = param_2;
    if ((int)uVar3 != 0) {
      uVar1 = 3;
    }
    *(char *)((long)param_1 + uVar3) = (char)uVar1;
    if ((int)uVar3 != 0) {
      _bzero(param_1,uVar3);
      *param_1 = param_2 - 3;
    }
  }
  return;
}



/* Address: 0x10077fed8 | FUN_10077fed8 */

void FUN_10077fed8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c76e40,*(long *)(lVar1 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_40);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_2c;
  }
  return;
}



/* Address: 0x10077ff68 | FUN_10077ff68 */

long * FUN_10077ff68(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar2 - 9 | uVar2) - *(long *)(lVar3 + 0x40)) {
    *param_1 = *param_2;
    (**(code **)(lVar3 + 0x10))
              ((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),
               (long)param_2 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100780030 | FUN_100780030 */

void FUN_100780030(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100780088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),lVar1)
  ;
  return;
}



/* Address: 0x10078008c | FUN_10078008c */

undefined8 * FUN_10078008c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x100780100 | FUN_100780100 */

undefined8 * FUN_100780100(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x100780174 | FUN_100780174 */

undefined8 * FUN_100780174(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1007801e8 | FUN_1007801e8 */

undefined8 * FUN_1007801e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x10078025c | FUN_10078025c */

ulong FUN_10078025c(ulong *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100780334;
  lVar1 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar8 = (uint)lVar1;
  uVar6 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_100780334;
      goto LAB_1007802f4;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_1007802f4:
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
        uVar6 = (uint)*param_1;
      }
    }
    return (ulong)(uVar2 + (uVar6 | uVar3) + 1);
  }
LAB_100780334:
  if (uVar3 < 0x7fffffff) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    uVar2 = 0;
    if (1 < (uint)uVar7 + 1) {
      uVar2 = (uint)uVar7;
    }
    return (ulong)uVar2;
  }
  uVar7 = (ulong)((long)param_1 + uVar7 + 8) & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x000100780384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar7,uVar3,lVar4);
  return uVar7;
}



/* Address: 0x1007803e8 | FUN_1007803e8 */

void FUN_1007803e8(ulong *param_1,ulong param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
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
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001007805a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if (uVar10 < 0x7fffffff) {
        *param_1 = param_2 & 0xffffffff;
      }
      else {
        *param_1 = 0;
        *(uint *)param_1 = uVar10 + 0x80000001;
      }
    }
  }
  return;
}



/* Address: 0x100780618 | FUN_100780618 */

void FUN_100780618(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_50 [32];
  undefined1 *local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_50,&DAT_100c76e70,*(long *)(lVar1 + -8) + 0x40);
    puStack_28 = &DAT_100c76f08;
    local_30 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x1007806b0 | FUN_1007806b0 */

long * FUN_1007806b0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  uVar1 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  if (((uint)uVar4 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) && uVar1 + 1 < 0x19) {
    uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
    if (1 < *(byte *)((long)param_2 + uVar1)) {
      uVar5 = (int)*param_2 + 2;
    }
    *param_1 = *param_2;
    if (uVar5 == 1) {
      lVar2 = param_2[1];
      _swift_errorRetain(lVar2);
      param_1[1] = lVar2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
    }
    else {
      (**(code **)(lVar3 + 0x10))
                ((long)param_1 + uVar4 + 8 & ~uVar4,(long)param_2 + uVar4 + 8 & ~uVar4,lVar2);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007807cc | FUN_1007807cc */

void FUN_1007807cc(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = (uint)uVar1;
    uVar8 = 4;
    if (uVar6 < 4) {
      uVar8 = uVar6;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078089c;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10078089c:
  if (uVar7 == 1) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007808d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((ulong)((long)param_1 + uVar5 + 8) & ~uVar5,lVar3);
  return;
}



/* Address: 0x1007808d4 | FUN_1007808d4 */

undefined8 * FUN_1007808d4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar1;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1007809a8;
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
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_1007809a8:
  *param_1 = *(undefined8 *)param_2;
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & ~uVar5,(ulong)((long)param_2 + uVar5 + 8) & ~uVar5,lVar3)
    ;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar8);
    param_1[1] = uVar8;
  }
  *(bool *)((long)param_1 + uVar1) = uVar6 == 1;
  return param_1;
}



/* Address: 0x100780a10 | FUN_100780a10 */

uint * FUN_100780a10(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar2;
  uVar7 = (uint)uVar1;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100780af4;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100780af4:
  uVar10 = ~uVar9;
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))((ulong)((long)param_1 + uVar9 + 8) & uVar10,lVar3);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100780b98;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100780b98:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  if (uVar4 != 1) {
    (**(code **)(lVar8 + 0x10))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar3);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar6);
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  return param_1;
}



/* Address: 0x100780c08 | FUN_100780c08 */

undefined8 * FUN_100780c08(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100780cdc;
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
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_100780cdc:
  if (uVar6 != 1) {
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x20))
              ((long)param_1 + uVar5 + 8 & ~uVar5,(ulong)((long)param_2 + uVar5 + 8) & ~uVar5,lVar3)
    ;
  }
  else {
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
  }
  *(bool *)((long)param_1 + uVar1) = uVar6 == 1;
  return param_1;
}



/* Address: 0x100780d3c | FUN_100780d3c */

uint * FUN_100780d3c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar3 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar2;
  uVar6 = (uint)uVar1;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100780e20;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100780e20:
  uVar9 = ~uVar8;
  if (uVar4 == 1) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar7 + 8))((ulong)((long)param_1 + uVar8 + 8) & uVar9,lVar3);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100780ec4;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100780ec4:
  if (uVar4 != 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar7 + 0x20))
              ((ulong)((long)param_1 + uVar8 + 8) & uVar9,(ulong)((long)param_2 + uVar8 + 8) & uVar9
               ,lVar3);
  }
  else {
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar10;
  }
  *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  return param_1;
}



/* Address: 0x100780f2c | FUN_100780f2c */

int FUN_100780f2c(uint *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_100781014;
  uVar6 = uVar7 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfe >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100781014;
      goto LAB_100780fa0;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100780fa0:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
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
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_100781014:
  iVar3 = 0;
  if (1 < *(byte *)((long)param_1 + uVar7)) {
    iVar3 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x100781078 | FUN_100781078 */

void FUN_100781078(uint *param_1,uint param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  sVar1 = uVar5 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xff) {
    bVar8 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar6 << 3 & 0x1f)) +
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
  if (param_2 < 0xff) {
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
    param_2 = param_2 - 0xff;
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



/* Address: 0x100781250 | FUN_100781250 */

uint FUN_100781250(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x100781328 | FUN_100781328 */

void FUN_100781328(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (param_2 < 2) {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    param_2 = param_2 - 2;
    uVar5 = (uint)uVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar4);
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
      *(undefined1 *)((long)param_1 + uVar4) = 2;
      _bzero(param_1,uVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10078142c | FUN_10078142c */

void FUN_10078142c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c76e70,*(long *)(lVar1 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_40);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_2c;
  }
  return;
}



/* Address: 0x1007814bc | FUN_1007814bc */

long * FUN_1007814bc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar2 - 9 | uVar2) - *(long *)(lVar3 + 0x40)) {
    *param_1 = *param_2;
    (**(code **)(lVar3 + 0x10))
              ((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),
               (long)param_2 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100781584 | FUN_100781584 */

void FUN_100781584(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001007815dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff),lVar1)
  ;
  return;
}



/* Address: 0x1007815e0 | FUN_1007815e0 */

undefined8 * FUN_1007815e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x100781654 | FUN_100781654 */

undefined8 * FUN_100781654(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1007816c8 | FUN_1007816c8 */

undefined8 * FUN_1007816c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x10078173c | FUN_10078173c */

undefined8 * FUN_10078173c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1007817b0 | FUN_1007817b0 */

ulong FUN_1007817b0(ulong *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
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
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100781888;
  lVar1 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar8 = (uint)lVar1;
  uVar6 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_100781888;
      goto LAB_100781848;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_100781848:
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
        uVar6 = (uint)*param_1;
      }
    }
    return (ulong)(uVar2 + (uVar6 | uVar3) + 1);
  }
LAB_100781888:
  if (-1 < (int)uVar3) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = (ulong)((long)param_1 + uVar7 + 8) & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001007818c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar7,uVar3,lVar4);
  return uVar7;
}



/* Address: 0x10078192c | FUN_10078192c */

void FUN_10078192c(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x000100781ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if ((int)uVar10 < 0) {
        *param_1 = (ulong)(uVar10 & 0x7fffffff);
      }
      else {
        *param_1 = (ulong)(uVar10 - 1);
      }
    }
  }
  return;
}



/* Address: 0x100781b48 | FUN_100781b48 */

void FUN_100781b48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (-1 < (long)param_3) {
    _swift_retain();
    return;
  }
  _swift_errorRetain(param_2);
  _swift_retain(param_3 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x100781b78 | FUN_100781b78 */

void FUN_100781b78(undefined8 *param_1)

{
  FUN_100781b8c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return;
}



/* Address: 0x100781b8c | FUN_100781b8c */

void FUN_100781b8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (-1 < (long)param_3) {
    _swift_release();
    return;
  }
  _swift_errorRelease(param_2);
  _swift_release(param_3 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x100781bbc | FUN_100781bbc */

undefined8 * FUN_100781bbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  FUN_100781b48(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return param_1;
}



/* Address: 0x100781c1c | FUN_100781c1c */

undefined8 * FUN_100781c1c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar10 = param_2[4];
  FUN_100781b48(uVar1,uVar5,uVar2,uVar6,uVar10);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar10;
  FUN_100781b8c(uVar3,uVar7,uVar4,uVar8,uVar9);
  return param_1;
}



/* Address: 0x100781c8c | FUN_100781c8c */

void FUN_100781c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100781ca0 | FUN_100781ca0 */

undefined8 * FUN_100781ca0(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar6 = param_2[4];
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = uVar6;
  FUN_100781b8c(uVar5,uVar1,uVar3,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100781ce4 | FUN_100781ce4 */

int FUN_100781ce4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100781d60 | FUN_100781d60 */

void FUN_100781d60(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[1] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x100781de0 | FUN_100781de0 */

void FUN_100781de0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf500);
  return;
}



/* Address: 0x100781dec | FUN_100781dec */

void FUN_100781dec(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_68 [32];
  long local_48;
  undefined *puStack_40;
  undefined1 *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_100c76e40;
    uVar2 = *(ulong *)(param_1 + 0x28);
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    if (uVar2 < 0x40) {
      _swift_getTupleTypeLayout3
                (auStack_68,&DAT_100c76e40,&DAT_100c76e40,*(long *)(lVar1 + -8) + 0x40);
      puStack_30 = &DAT_100c76e70;
      local_28 = &DAT_100c76f08;
      local_38 = auStack_68;
      _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_48);
    }
  }
  return;
}



/* Address: 0x100781ebc | FUN_100781ebc */

long * FUN_100781ebc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar2 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar1 + -8);
  uVar8 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  uVar6 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  if (uVar9 <= uVar6) {
    uVar9 = uVar6;
  }
  if (uVar9 < 0x11) {
    uVar9 = 0x10;
  }
  uVar7 = (uint)uVar8 | *(uint *)(lVar10 + 0x50) & 0xf8;
  if ((uVar7 < 8 && ((*(uint *)(lVar10 + 0x50) | *(uint *)(lVar5 + 0x50)) & 0x100000) == 0) &&
      uVar9 + 1 < 0x19) {
    uVar7 = (uint)*(byte *)((long)param_2 + uVar9);
    if (4 < *(byte *)((long)param_2 + uVar9)) {
      uVar7 = (int)*param_2 + 5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar9) = 0;
      }
      else {
        *param_1 = *param_2;
        *(undefined1 *)((long)param_1 + uVar9) = 1;
      }
    }
    else if (uVar7 == 2) {
      *param_1 = *param_2;
      puVar3 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      puVar4 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
      *puVar3 = *puVar4;
      (**(code **)(lVar5 + 0x10))(puVar3 + 1,puVar4 + 1,lVar1);
      *(undefined1 *)((long)param_1 + uVar9) = 2;
    }
    else if (uVar7 == 3) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar9) = 3;
    }
    else {
      lVar2 = param_2[1];
      *param_1 = *param_2;
      _swift_errorRetain(lVar2);
      param_1[1] = lVar2;
      *(undefined1 *)((long)param_1 + uVar9) = 4;
    }
  }
  else {
    uVar6 = (ulong)(uVar7 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100782058 | FUN_100782058 */

void FUN_100782058(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar4 + -8);
  uVar11 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar1 = (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  if (uVar11 <= uVar1) {
    uVar11 = uVar1;
  }
  if (uVar11 < 0x11) {
    uVar11 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar8 = (uint)bVar2;
  if (4 < bVar2) {
    uVar7 = (uint)uVar11;
    uVar9 = 4;
    if (uVar7 < 4) {
      uVar9 = uVar7;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100782138;
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
    uVar8 = uVar9 | bVar2 - 5 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 5;
  }
LAB_100782138:
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      goto LAB_1007821a4;
    }
  }
  else {
    if (uVar8 == 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
      param_1 = (uint *)(((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar6 + 8 & ~uVar6);
      lVar4 = lVar3;
LAB_1007821a4:
                    /* WARNING: Could not recover jumptable at 0x0001007821b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar4);
      return;
    }
    if (uVar8 != 3) {
      _swift_errorRelease(*(undefined8 *)(param_1 + 2));
      return;
    }
  }
  return;
}



/* Address: 0x1007821b4 | FUN_1007821b4 */

undefined8 * FUN_1007821b4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar2 + -8);
  uVar14 = *(ulong *)(lVar15 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (uVar14 < 0x11) {
    uVar14 = 0x10;
  }
  bVar4 = *(byte *)((long)param_2 + uVar14);
  uVar9 = (uint)bVar4;
  if (4 < bVar4) {
    uVar13 = (uint)uVar14;
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007822a0;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 5 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 5;
  }
LAB_1007822a0:
  if ((int)uVar9 < 2) {
    if (uVar9 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar2);
      uVar6 = 0;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar6 = 1;
    }
  }
  else if (uVar9 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar11 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar11 = *puVar12;
    (**(code **)(lVar7 + 0x10))
              ((long)puVar11 + uVar8 + 8 & ~uVar8,(long)puVar12 + uVar8 + 8 & ~uVar8,lVar5);
    uVar6 = 2;
  }
  else if (uVar9 == 3) {
    *param_1 = *(undefined8 *)param_2;
    uVar6 = 3;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar3);
    param_1[1] = uVar3;
    uVar6 = 4;
  }
  *(undefined1 *)((long)param_1 + uVar14) = uVar6;
  return param_1;
}



/* Address: 0x100782374 | FUN_100782374 */

uint * FUN_100782374(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar1 + -8);
  uVar10 = *(ulong *)(lVar11 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar14 = (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar12 + 0x40);
  if (uVar10 <= uVar14) {
    uVar10 = uVar14;
  }
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar10);
  uVar5 = (uint)bVar3;
  uVar9 = (uint)uVar10;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100782470;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_100782470:
  uVar14 = ~uVar13;
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar1);
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar12 + 8))
              (((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar13 + 8 & uVar14,lVar2);
  }
  else if (uVar5 != 3) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  bVar3 = *(byte *)((long)param_2 + uVar10);
  uVar5 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100782544;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_100782544:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar1);
      bVar3 = 0;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar3 = 1;
    }
  }
  else if (uVar5 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar4 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar4 = *puVar7;
    (**(code **)(lVar12 + 0x10))
              ((long)puVar4 + uVar13 + 8 & uVar14,(long)puVar7 + uVar13 + 8 & uVar14,lVar2);
    bVar3 = 2;
  }
  else if (uVar5 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar3 = 3;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 2);
    _swift_errorRetain(uVar8);
    *(undefined8 *)(param_1 + 2) = uVar8;
    bVar3 = 4;
  }
  *(byte *)((long)param_1 + uVar10) = bVar3;
  return param_1;
}



/* Address: 0x100782624 | FUN_100782624 */

undefined8 * FUN_100782624(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar2 + -8);
  uVar13 = *(ulong *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar6 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar1 = (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  if (uVar13 <= uVar1) {
    uVar13 = uVar1;
  }
  if (uVar13 < 0x11) {
    uVar13 = 0x10;
  }
  bVar3 = *(byte *)((long)param_2 + uVar13);
  uVar8 = (uint)bVar3;
  if (4 < bVar3) {
    uVar12 = (uint)uVar13;
    uVar9 = 4;
    if (uVar12 < 4) {
      uVar9 = uVar12;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100782710;
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
    uVar8 = uVar9 | bVar3 - 5 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 5;
  }
LAB_100782710:
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar2);
      uVar5 = 0;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar5 = 1;
    }
  }
  else if (uVar8 == 2) {
    *param_1 = *(undefined8 *)param_2;
    puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar10 = *puVar11;
    (**(code **)(lVar6 + 0x20))
              ((long)puVar10 + uVar7 + 8 & ~uVar7,(long)puVar11 + uVar7 + 8 & ~uVar7,lVar4);
    uVar5 = 2;
  }
  else if (uVar8 == 3) {
    *param_1 = *(undefined8 *)param_2;
    uVar5 = 3;
  }
  else {
    uVar15 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar15;
    uVar5 = 4;
  }
  *(undefined1 *)((long)param_1 + uVar13) = uVar5;
  return param_1;
}



/* Address: 0x1007827d8 | FUN_1007827d8 */

uint * FUN_1007827d8(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar1 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar2 + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar13 = (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  if (uVar9 <= uVar13) {
    uVar9 = uVar13;
  }
  if (uVar9 < 0x11) {
    uVar9 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar9);
  uVar5 = (uint)bVar3;
  uVar8 = (uint)uVar9;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007828d4;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_1007828d4:
  uVar13 = ~uVar12;
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar1);
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar11 + 8))
              (((ulong)((long)param_1 + 0xfU) & 0xfffffffffffffff8) + uVar12 + 8 & uVar13,lVar2);
  }
  else if (uVar5 != 3) {
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  bVar3 = *(byte *)((long)param_2 + uVar9);
  uVar5 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007829a8;
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
    uVar5 = uVar6 | bVar3 - 5 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_1007829a8:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar1);
      bVar3 = 0;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar3 = 1;
    }
  }
  else if (uVar5 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    puVar4 = (undefined8 *)((ulong)((long)param_1 + 0xf) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
    *puVar4 = *puVar7;
    (**(code **)(lVar11 + 0x20))
              ((long)puVar4 + uVar12 + 8 & uVar13,(long)puVar7 + uVar12 + 8 & uVar13,lVar2);
    bVar3 = 2;
  }
  else if (uVar5 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar3 = 3;
  }
  else {
    uVar14 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar14;
    bVar3 = 4;
  }
  *(byte *)((long)param_1 + uVar9) = bVar3;
  return param_1;
}



/* Address: 0x100782a78 | FUN_100782a78 */

int FUN_100782a78(uint *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfc) goto LAB_100782b78;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfb >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_100782b78;
      goto LAB_100782b04;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100782b04:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfc;
  }
LAB_100782b78:
  iVar3 = 0;
  if (4 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x100782be0 | FUN_100782be0 */

void FUN_100782be0(uint *param_1,uint param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  sVar1 = uVar7 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfc) {
    bVar9 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfb >> (ulong)(uVar6 << 3 & 0x1f)) +
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
  if (param_2 < 0xfc) {
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
    param_2 = param_2 - 0xfc;
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



/* Address: 0x100782dc8 | FUN_100782dc8 */

uint FUN_100782dc8(uint *param_1,long param_2)

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
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar7 < 0x11) {
    uVar7 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (4 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}



/* Address: 0x100782eac | FUN_100782eac */

void FUN_100782eac(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (param_2 < 5) {
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    *(char *)((long)param_1 + uVar6) = (char)param_2;
  }
  else {
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    param_2 = param_2 - 5;
    uVar5 = (uint)uVar6;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar6) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x05';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar6);
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
      *(undefined1 *)((long)param_1 + uVar6) = 5;
      _bzero(param_1,uVar6);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100782fd0 | FUN_100782fd0 */

undefined8 * FUN_100782fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x100783004 | FUN_100783004 */

undefined8 * FUN_100783004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100783060 | FUN_100783060 */

undefined8 * FUN_100783060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x10078309c | FUN_10078309c */

void FUN_10078309c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf590);
  return;
}


