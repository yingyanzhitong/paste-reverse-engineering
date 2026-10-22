/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10072c2d8 | FUN_10072c2d8 */

long FUN_10072c2d8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar6 + -8);
  (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar13 + 0x40) + 7;
  puVar14 = (undefined8 *)(lVar6 + param_1 & 0xfffffffffffffff8);
  puVar15 = (undefined8 *)(lVar6 + param_2 & 0xfffffffffffffff8);
  uVar11 = puVar14[1];
  uVar7 = puVar15[1];
  uVar17 = *puVar15;
  puVar14[1] = puVar15[1];
  *puVar14 = uVar17;
  _swift_retain(uVar7);
  _swift_release(uVar11);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar6 + -8);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar1 = uVar12 + 0x10 + (long)puVar14;
  uVar2 = uVar12 + 0x10 + (long)puVar15;
  pcVar16 = *(code **)(lVar13 + 0x30);
  uVar8 = uVar1 & (uVar12 ^ 0xffffffffffffffff);
  (*pcVar16)(uVar8,1,lVar6);
  uVar9 = uVar2 & (uVar12 ^ 0xffffffffffffffff);
  (*pcVar16)(uVar9,1,lVar6);
  if ((int)uVar8 == 0) {
    if ((int)uVar9 == 0) {
      (**(code **)(lVar13 + 0x18))
                (uVar1 & (uVar12 ^ 0xffffffffffffffff),uVar2 & (uVar12 ^ 0xffffffffffffffff),lVar6);
      return param_1;
    }
    (**(code **)(lVar13 + 8))(uVar1 & (uVar12 ^ 0xffffffffffffffff),lVar6);
  }
  else if ((int)uVar9 == 0) {
    (**(code **)(lVar13 + 0x10))
              (uVar1 & (uVar12 ^ 0xffffffffffffffff),uVar2 & (uVar12 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar13 + 0x38))(uVar1 & (uVar12 ^ 0xffffffffffffffff),0,1,lVar6);
    return param_1;
  }
  sVar10 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar12 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar12 ^ 0xffffffffffffffff)),sVar10);
  return param_1;
}



/* Address: 0x10072c464 | FUN_10072c464 */

long FUN_10072c464(long param_1,long param_2,long param_3)

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
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
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
  lVar6 = *(long *)(lVar10 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar6 + param_1 & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)(lVar6 + param_2 & 0xfffffffffffffff8);
  uVar13 = *puVar12;
  puVar11[1] = puVar12[1];
  *puVar11 = uVar13;
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar9 + 0x10 + (long)puVar11;
  uVar2 = uVar9 + 0x10 + (long)puVar12;
  uVar7 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x30))(uVar7,1,lVar6);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar10 + 0x20))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar6);
  }
  else {
    sVar8 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar8 = sVar8 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar8);
  }
  return param_1;
}



/* Address: 0x10072c598 | FUN_10072c598 */

long FUN_10072c598(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar12 = *(long *)(lVar6 + -8);
  (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar12 + 0x40) + 7;
  puVar13 = (undefined8 *)(lVar6 + param_1 & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)(lVar6 + param_2 & 0xfffffffffffffff8);
  uVar7 = puVar13[1];
  uVar16 = *puVar14;
  puVar13[1] = puVar14[1];
  *puVar13 = uVar16;
  _swift_release(uVar7);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar6 + -8);
  uVar11 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar1 = uVar11 + 0x10 + (long)puVar13;
  uVar2 = uVar11 + 0x10 + (long)puVar14;
  pcVar15 = *(code **)(lVar12 + 0x30);
  uVar8 = uVar1 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar15)(uVar8,1,lVar6);
  uVar9 = uVar2 & (uVar11 ^ 0xffffffffffffffff);
  (*pcVar15)(uVar9,1,lVar6);
  if ((int)uVar8 == 0) {
    if ((int)uVar9 == 0) {
      (**(code **)(lVar12 + 0x28))
                (uVar1 & (uVar11 ^ 0xffffffffffffffff),uVar2 & (uVar11 ^ 0xffffffffffffffff),lVar6);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(uVar1 & (uVar11 ^ 0xffffffffffffffff),lVar6);
  }
  else if ((int)uVar9 == 0) {
    (**(code **)(lVar12 + 0x20))
              (uVar1 & (uVar11 ^ 0xffffffffffffffff),uVar2 & (uVar11 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar12 + 0x38))(uVar1 & (uVar11 ^ 0xffffffffffffffff),0,1,lVar6);
    return param_1;
  }
  sVar10 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar11 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar11 ^ 0xffffffffffffffff)),sVar10);
  return param_1;
}



/* Address: 0x10072c718 | FUN_10072c718 */

uint * FUN_10072c718(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar17 + 0x54);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar9 + -8);
  iVar5 = *(int *)(lVar11 + 0x54);
  uVar1 = 0;
  if (iVar5 != 0) {
    uVar1 = iVar5 - 1;
  }
  uVar12 = uVar4;
  if (uVar4 <= uVar1) {
    uVar12 = uVar1;
  }
  uVar1 = uVar12;
  if (uVar12 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar13 = *(long *)(lVar11 + 0x40);
  if (iVar5 == 0) {
    lVar13 = lVar13 + 1;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10072c854;
  lVar13 = lVar13 + (uVar14 + (*(long *)(lVar17 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10 &
                    (uVar14 ^ 0xffffffffffffffff));
  uVar15 = (uint)lVar13;
  uVar6 = uVar15 << 3;
  if (uVar15 < 4) {
    uVar16 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar16 < 0xff) {
      if (uVar16 == 0) goto LAB_10072c854;
      goto LAB_10072c814;
    }
    if (uVar16 < 0xffff) {
      uVar16 = (uint)*(ushort *)((long)param_1 + lVar13);
    }
    else {
      uVar16 = *(uint *)((long)param_1 + lVar13);
    }
  }
  else {
LAB_10072c814:
    uVar16 = (uint)*(byte *)((long)param_1 + lVar13);
  }
  if (uVar16 != 0) {
    uVar4 = 0;
    if (uVar15 < 4) {
      uVar4 = uVar16 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar15 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 4;
      if (uVar15 < 4) {
        uVar12 = uVar15;
      }
      if ((int)uVar12 < 3) {
        if (uVar12 == 1) {
          uVar12 = (uint)(byte)*param_1;
        }
        else {
          uVar12 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar12 == 3) {
        uVar12 = (uint)(uint3)*param_1;
      }
      else {
        uVar12 = *param_1;
      }
    }
    return (uint *)(ulong)(uVar1 + (uVar12 | uVar4) + 1);
  }
LAB_10072c854:
  if (uVar4 == uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010072c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 0x30))(param_1,uVar4,lVar8);
    return param_1;
  }
  puVar10 = (ulong *)((ulong)((long)param_1 + *(long *)(lVar17 + 0x40) + 7) & 0xfffffffffffffff8);
  if ((int)uVar12 < 0) {
    uVar14 = (long)puVar10 + uVar14 + 0x10 & ~uVar14;
    (**(code **)(lVar11 + 0x30))(uVar14,iVar5,lVar9);
    uVar1 = 0;
    if ((int)uVar14 != 0) {
      uVar1 = (int)uVar14 - 1;
    }
  }
  else {
    uVar14 = *puVar10;
    if (0xfffffffe < uVar14) {
      uVar14 = 0xffffffff;
    }
    uVar1 = (int)uVar14 + 1;
  }
  return (uint *)(ulong)uVar1;
}



/* Address: 0x10072c944 | FUN_10072c944 */

void FUN_10072c944(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar22 = *(long *)(lVar11 + -8);
  uVar6 = *(uint *)(lVar22 + 0x54);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,puVar10,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar12 + -8);
  uVar7 = *(uint *)(lVar13 + 0x54);
  uVar3 = 0;
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar15 = *(long *)(lVar22 + 0x40);
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar17 = *(long *)(lVar13 + 0x40);
  if (uVar7 == 0) {
    lVar17 = lVar17 + 1;
  }
  sVar1 = (uVar14 + (lVar15 + 7U & 0xfffffffffffffff8) + 0x10 & (uVar14 ^ 0xffffffffffffffff)) +
          lVar17;
  uVar21 = (uint)sVar1;
  uVar19 = (uint)param_2;
  bVar18 = 0;
  if (uVar3 <= param_3 && param_3 - uVar3 != 0) {
    if (uVar21 < 4) {
      uVar8 = (param_3 - uVar3) + ~(-1 << (ulong)(uVar21 << 3 & 0x1f)) >>
              (ulong)(uVar21 << 3 & 0x1f);
      bVar18 = 2;
      if (0xfffe < uVar8) {
        bVar18 = 4;
      }
      if (uVar8 < 0xff) {
        bVar18 = uVar8 != 0;
      }
    }
    else {
      bVar18 = 1;
    }
  }
  if (uVar3 < uVar19) {
    uVar19 = uVar19 + ~uVar3;
    if (uVar21 < 4) {
      iVar20 = (uVar19 >> (ulong)(uVar21 << 3 & 0x1f)) + 1;
      if (uVar21 != 0) {
        uVar3 = uVar19 & (-1 << (ulong)(uVar21 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar9 = (undefined2)uVar3;
        if (uVar21 == 3) {
          *(undefined2 *)param_1 = uVar9;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar21 == 2) {
          *(undefined2 *)param_1 = uVar9;
        }
        else {
          *(char *)param_1 = (char)uVar19;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = uVar19;
      iVar20 = 1;
    }
    if (bVar18 < 2) {
      if (bVar18 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar20;
      }
    }
    else if (bVar18 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar20;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar20;
    }
  }
  else {
    if (bVar18 < 2) {
      if (bVar18 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar18 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar19 != 0) {
      if (uVar6 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x38);
        lVar12 = lVar11;
        uVar7 = uVar6;
      }
      else {
        puVar16 = (ulong *)((long)param_1 + lVar15 + 7 & 0xfffffffffffffff8);
        if (-1 < (int)uVar2) {
          if (-1 < (int)uVar19) {
            *puVar16 = (ulong)(uVar19 - 1);
            return;
          }
          *puVar16 = (ulong)(uVar19 & 0x7fffffff);
          puVar16[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_1 = (uint *)((long)puVar16 + uVar14 + 0x10 & ~uVar14);
        param_2 = (ulong)(uVar19 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010072cb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar12);
      return;
    }
  }
  return;
}



/* Address: 0x10072cbfc | thunk_FUN_10072b070 */

void thunk_FUN_10072b070(void)

{
  FUN_10072b070();
  return;
}



/* Address: 0x10072cc00 | thunk_FUN_100403694 */

void thunk_FUN_100403694(void)

{
  FUN_100403694();
  return;
}



/* Address: 0x10072cc04 | thunk_FUN_10072c944 */

void thunk_FUN_10072c944(void)

{
  FUN_10072c944();
  return;
}



/* Address: 0x10072cc08 | thunk_FUN_10071ca04 */

void thunk_FUN_10071ca04(void)

{
  thunk_FUN_10071ca04();
  return;
}



/* Address: 0x10072cc0c | thunk_FUN_1004033cc */

void thunk_FUN_1004033cc(void)

{
  FUN_1004033cc();
  return;
}



/* Address: 0x10072cc10 | thunk_FUN_10072c0b0 */

void thunk_FUN_10072c0b0(void)

{
  FUN_10072c0b0();
  return;
}



/* Address: 0x10072cc14 | thunk_FUN_100708198 */

void thunk_FUN_100708198(void)

{
  thunk_FUN_100708198();
  return;
}



/* Address: 0x10072cc18 | thunk_FUN_1007081e4 */

void thunk_FUN_1007081e4(void)

{
  thunk_FUN_1007081e4();
  return;
}



/* Address: 0x10072cc1c | thunk_FUN_10072b178 */

void thunk_FUN_10072b178(void)

{
  thunk_FUN_10072b178();
  return;
}



/* Address: 0x10072cc20 | thunk_FUN_10072b1dc */

void thunk_FUN_10072b1dc(void)

{
  thunk_FUN_10072b1dc();
  return;
}



/* Address: 0x10072cc24 | thunk_FUN_10071d4c4 */

void thunk_FUN_10071d4c4(void)

{
  FUN_10071d4c4();
  return;
}



/* Address: 0x10072cc28 | thunk_FUN_10040331c */

void thunk_FUN_10040331c(void)

{
  FUN_10040331c();
  return;
}



/* Address: 0x10072cc2c | thunk_FUN_10040340c */

void thunk_FUN_10040340c(void)

{
  FUN_10040340c();
  return;
}



/* Address: 0x10072cc30 | thunk_FUN_100403470 */

void thunk_FUN_100403470(void)

{
  FUN_100403470();
  return;
}



/* Address: 0x10072cc34 | thunk_FUN_1004034e0 */

void thunk_FUN_1004034e0(void)

{
  FUN_1004034e0();
  return;
}



/* Address: 0x10072cc38 | thunk_FUN_10040353c */

void thunk_FUN_10040353c(void)

{
  FUN_10040353c();
  return;
}



/* Address: 0x10072cc3c | thunk_FUN_1004035a0 */

void thunk_FUN_1004035a0(void)

{
  FUN_1004035a0();
  return;
}



/* Address: 0x10072cc40 | thunk_FUN_10072be40 */

void thunk_FUN_10072be40(void)

{
  FUN_10072be40();
  return;
}



/* Address: 0x10072cc44 | thunk_FUN_10072bf18 */

void thunk_FUN_10072bf18(void)

{
  FUN_10072bf18();
  return;
}



/* Address: 0x10072cc48 | thunk_FUN_10072c198 */

void thunk_FUN_10072c198(void)

{
  FUN_10072c198();
  return;
}



/* Address: 0x10072cc4c | thunk_FUN_10072c2d8 */

void thunk_FUN_10072c2d8(void)

{
  FUN_10072c2d8();
  return;
}



/* Address: 0x10072cc50 | thunk_FUN_10072c464 */

void thunk_FUN_10072c464(void)

{
  FUN_10072c464();
  return;
}



/* Address: 0x10072cc54 | thunk_FUN_10072c598 */

void thunk_FUN_10072c598(void)

{
  FUN_10072c598();
  return;
}



/* Address: 0x10072cc58 | thunk_FUN_10072c718 */

void thunk_FUN_10072c718(void)

{
  FUN_10072c718();
  return;
}



/* Address: 0x10072cc5c | FUN_10072cc5c */

void FUN_10072cc5c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  
  lVar7 = *(long *)(param_4 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  local_78 = param_2;
  local_6c = param_3;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  uVar5 = lVar9 + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) - uVar5;
  lVar10 = lVar11 - uVar5;
  (**(code **)(lVar7 + 0x10))(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar6 + 0x10))(lVar11,lVar10,lVar1);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100efcdf8;
  _swift_allocObject(&DAT_100efcdf8,uVar8 + lVar9,uVar5 | 7);
  *(long *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  (**(code **)(lVar6 + 0x20))(puVar2 + uVar8,lVar11,lVar1);
  pcVar3 = FUN_10072ce34;
  FUN_10072ce8c(FUN_10072ce34,puVar2,local_78,local_6c,param_4,param_5);
  (**(code **)(lVar6 + 8))(lVar10,lVar1);
  *local_68 = pcVar3;
  return;
}



/* Address: 0x10072cdc8 | FUN_10072cdc8 */

void FUN_10072cdc8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10072ce34 | FUN_10072ce34 */

void FUN_10072ce34(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010072ce88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (param_1,unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
  return;
}



/* Address: 0x10072ce8c | FUN_10072ce8c */

undefined8
FUN_10072ce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100732620(0,param_5,param_6);
  _swift_allocObject();
  FUN_100732544(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Address: 0x10072cf00 | FUN_10072cf00 */

void FUN_10072cf00(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_18 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x60);
  return;
}



/* Address: 0x10072cf50 | FUN_10072cf50 */

undefined8 FUN_10072cf50(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Mutex MVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 local_38;
  
  lVar6 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar6 + 0x60);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar6 + 0x50);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  uVar4 = 0xff;
  FUN_10073244c(0xff,uVar2,uVar3);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072ea34(&local_38,lVar1 + *(int *)(MVar5.unknown + 0x1c),uVar2,uVar3);
  _os_unfair_lock_unlock
            (lVar1,uVar4,PTR___type_metadata_for_Swift_Int_100eac6f8,
             PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_38;
}



/* Address: 0x10072cff4 | FUN_10072cff4 */

void FUN_10072cff4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar1);
  FUN_10072d044(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10072d044 | FUN_10072d044 */

/* WARNING: Removing unreachable block (ram,0x00010072d310) */

void FUN_10072d044(undefined8 param_1)

{
  undefined8 uVar1;
  Result RVar2;
  Optional OVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  Mutex MVar7;
  undefined7 extraout_var_00;
  undefined *puVar8;
  undefined7 extraout_var_01;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  ulong local_98 [2];
  long local_88;
  undefined1 local_80;
  Task local_78;
  undefined8 uStack_70;
  char local_68;
  long lVar6;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar11 = *unaff_x20;
  uVar9 = *(undefined8 *)(lVar11 + 0x50);
  uVar1 = *(undefined8 *)(lVar11 + 0x58);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  Swift::Optional::typeMetadataAccessor();
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar9,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar9,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar9,uVar5,puVar8,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar2.value);
  lVar10 = (long)&local_c0 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)unaff_x20 + *(long *)(lVar11 + 0x60);
  _os_unfair_lock_lock(lVar11);
  uVar5 = 0xff;
  FUN_10073244c(0xff,uVar9,uVar1);
  MVar7 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072ead0(local_98,lVar11 + *(int *)(MVar7.unknown + 0x1c),param_1);
  FUN_100733d64(0xff,uVar9,uVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_c0 = CONCAT71(extraout_var_00,OVar3.value);
  puVar8 = &DAT_100fe0dd0;
  FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
  puStack_b0 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_b8 = puVar8;
  FUN_100733e20(0xff,uVar9,uVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_a8 = CONCAT71(extraout_var_01,OVar3.value);
  uVar9 = 0;
  _swift_getTupleTypeMetadata(0,4,&local_c0,0,0);
  _os_unfair_lock_unlock
            (lVar11,uVar5,uVar9,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_88 != 0) {
    **(undefined1 **)(*(long *)(local_88 + 0x40) + 0x28) = local_80;
    _swift_continuation_resume();
  }
  if (1 < local_98[0]) {
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar10,1,1,lVar4);
    _swift_storeEnumTagMultiPayload(lVar10,lVar6,0);
    FUN_10072e9c0(lVar10,local_98[0],lVar6);
  }
  if (local_68 != -1) {
    if (local_68 == '\x01') {
      Swift::Task::cancel(local_78);
    }
    FUN_100733e2c(local_78.unknown,uStack_70,local_68);
  }
  return;
}



/* Address: 0x10072d3a0 | FUN_10072d3a0 */

void FUN_10072d3a0(void)

{
  FUN_10072cff4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10072d3c0 | FUN_10072d3c0 */

void FUN_10072d3c0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10072d3cc | FUN_10072d3cc */

undefined1  [16] FUN_10072d3cc(Mutex param_1)

{
  ulong uVar1;
  Mutex MVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_30;
  undefined *puStack_28;
  
  uVar1 = 0xff;
  FUN_10073244c(0xff,*(undefined8 *)(param_1.unknown + 0x50),*(undefined8 *)(param_1.unknown + 0x58)
               );
  MVar2 = Synchronization::Mutex::typeMetadataAccessor();
  if (uVar1 < 0x40) {
    local_30 = *(long *)(MVar2.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c75350;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1.unknown,0,2,&local_30,param_1.unknown + 0x60);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = MVar2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1.unknown;
  return auVar4;
}



/* Address: 0x10072d450 | FUN_10072d450 */

void FUN_10072d450(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  UnownedSerialExecutor UVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*unaff_x20 + 0x58),*(undefined8 *)(*unaff_x20 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  if (param_2 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_10072d514,UVar3.unknown);
  return;
}



/* Address: 0x10072d514 | FUN_10072d514 */

void FUN_10072d514(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18);
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10072d57c;
  FUN_10072d638(plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),uVar1,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10072d57c | FUN_10072d57c */

void FUN_10072d57c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10072d5e8,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010072d5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10072d5e8 | FUN_10072d5e8 */

void FUN_10072d5e8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x30),uVar1,*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010072d634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072d638 | FUN_10072d638 */

void FUN_10072d638(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnownedSerialExecutor UVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = *unaff_x20;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x38) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  _swift_task_switch(FUN_10072d6b4,UVar1.unknown);
  return;
}



/* Address: 0x10072d6b4 | FUN_10072d6b4 */

/* WARNING: Removing unreachable block (ram,0x00010072da60) */

void FUN_10072d6b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  Optional OVar4;
  byte bVar5;
  Result RVar6;
  undefined8 uVar7;
  Mutex MVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  TaskPriority TVar14;
  undefined7 extraout_var;
  long *plVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  
  lVar16 = *(long *)(unaff_x22 + 0x30);
  lVar11 = (long)*(long **)(unaff_x22 + 0x20) + *(long *)(**(long **)(unaff_x22 + 0x20) + 0x60);
  _os_unfair_lock_lock(lVar11);
  uVar1 = *(undefined8 *)(lVar16 + 0x50);
  uVar2 = *(undefined8 *)(lVar16 + 0x58);
  uVar7 = 0xff;
  FUN_10073244c(0xff,uVar1,uVar2);
  MVar8 = Synchronization::Mutex::typeMetadataAccessor();
  lVar16 = lVar11 + *(int *)(MVar8.unknown + 0x1c);
  lVar18 = *(long *)(lVar16 + 0x10);
  lVar17 = *(long *)(lVar16 + 0x18);
  if (*(char *)(lVar16 + 0x20) == '\0') {
    bVar3 = false;
    *(long *)(lVar16 + 0x10) = 0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    *(undefined1 *)(lVar16 + 0x20) = 2;
  }
  else {
    bVar3 = (*(char *)(lVar16 + 0x20) == '\x02' && lVar18 == 1) && lVar17 == 0;
    lVar18 = 0;
    lVar17 = 0;
  }
  *(long *)(unaff_x22 + 0x48) = lVar18;
  *(long *)(unaff_x22 + 0x50) = lVar17;
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getExtendedFunctionTypeMetadata(0xc4000000,0,0,0,uVar9,0,0x10,0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  uVar10 = 0;
  _swift_getTupleTypeMetadata2(0,OVar4.value,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  _os_unfair_lock_unlock
            (lVar11,uVar7,uVar10,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (!bVar3) {
    if (lVar18 != 0) {
      bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      puVar12 = &DAT_100fe0dc8;
      FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
      uVar13 = *(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      TVar14 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar14.unknown + -8) + 0x38))(uVar13,1,1,TVar14.unknown);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
      if ((bVar5 & 1) == 0) {
        puVar12 = &DAT_100efd0a0;
        _swift_allocObject(&DAT_100efd0a0,0x38,7);
        *(undefined8 *)(puVar12 + 0x10) = 0;
        *(undefined8 *)(puVar12 + 0x18) = 0;
        *(undefined8 *)(puVar12 + 0x20) = uVar10;
        *(long *)(puVar12 + 0x28) = lVar18;
        *(long *)(puVar12 + 0x30) = lVar17;
        FUN_100011128(lVar18,lVar17);
        FUN_100011128(lVar18,lVar17);
        _swift_retain(uVar10);
        uVar10 = 0x7449206572616853;
        FUN_100732114(0x7449206572616853,0xef6e6f6974617265,uVar13,&DAT_100c75550,puVar12);
        FUN_100733b9c(uVar13);
      }
      else {
        puVar12 = &DAT_100efd0c8;
        _swift_allocObject(&DAT_100efd0c8,0x38,7);
        *(undefined8 *)(puVar12 + 0x10) = 0;
        *(undefined8 *)(puVar12 + 0x18) = 0;
        *(undefined8 *)(puVar12 + 0x20) = uVar10;
        *(long *)(puVar12 + 0x28) = lVar18;
        *(long *)(puVar12 + 0x30) = lVar17;
        FUN_100011128(lVar18,lVar17);
        FUN_100011128(lVar18,lVar17);
        _swift_retain(uVar10);
        uVar10 = 0x7449206572616853;
        FUN_100731e58(0x7449206572616853,0xef6e6f6974617265,uVar13,&DAT_100c75560,puVar12);
      }
      _swift_task_dealloc(uVar13);
      _swift_retain(uVar10);
      _os_unfair_lock_lock(lVar11);
      FUN_100732344(lVar16,uVar10,uVar1,uVar2);
      _os_unfair_lock_unlock
                (lVar11,uVar7,PTR___type_metadata_for____100eae0c8 + 8,
                 PTR___type_metadata_for_Swift_Never_100eadc38,
                 PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_release(uVar10);
      FUN_100004550(lVar18,lVar17);
      _swift_release(uVar10);
    }
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    Swift::Optional::typeMetadataAccessor();
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,puVar12,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
    _swift_getAssociatedConformanceWitness
              (uVar2,uVar1,uVar9,puVar12,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    _swift_getAssociatedConformanceWitness();
    RVar6 = Swift::Result::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x68) = CONCAT71(extraout_var,RVar6.value);
    uVar13 = *(long *)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x70) = uVar13;
    plVar15 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_10072dbb0;
    FUN_10073054c(plVar15,uVar13,*(undefined8 *)(unaff_x22 + 0x18));
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar7,1,1,lVar11);
  FUN_100004550(lVar18,lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010072d874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072dbb0 | FUN_10072dbb0 */

void FUN_10072dbb0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x78));
  _swift_task_switch(FUN_10072dbfc,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Address: 0x10072dbfc | FUN_10072dbfc */

void FUN_10072dbfc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x60) + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100628180(uVar6,uVar5,uVar4);
  FUN_100004550(uVar2,uVar3);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  if (lVar1 == 0) {
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    (**(code **)(lVar7 + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x28),uVar4,*(undefined8 *)(unaff_x22 + 0x60));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010072dcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10072dcdc | FUN_10072dcdc */

void FUN_10072dcdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  Dictionary<undefined,undefined> DVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  
  *param_1 = 0;
  FUN_100733d64(0,param_6,param_7);
  DVar3 = Swift::Dictionary::init();
  param_1[1] = DVar3.unknown;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  thunk_FUN_100683d64();
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar5 = 0;
  FUN_10073244c(0,param_6,param_7);
  iVar1 = *(int *)(lVar5 + 0x34);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38)) = 0;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c)) = 0;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar7 = 2;
  uVar4 = 0;
  if (param_5 < 2) {
    if (param_5 != 0) {
      uVar7 = 1;
      uVar4 = param_4;
    }
  }
  else if (param_5 == 2) {
    uVar7 = 0;
    uVar4 = param_4;
  }
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44));
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar7;
  return;
}



/* Address: 0x10072de40 | FUN_10072de40 */

void FUN_10072de40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  Values VVar3;
  Values VVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  Dictionary<undefined,undefined> DVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  Dictionary DVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined *local_68;
  
  DVar13.unknown = *(undefined **)(unaff_x20 + 8);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  FUN_100733d64(0,uVar16,uVar14);
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  VVar3 = Swift::Dictionary::_get_values(DVar13);
  local_90 = uVar16;
  uStack_88 = uVar14;
  local_68 = VVar3.unknown;
  VVar4 = Swift::Dictionary::Values::typeMetadataAccessor();
  puVar5 = PTR__Swift__Values_>Swift__Collection_100eabdf8;
  _swift_getWitnessTable(PTR__Swift__Values_>Swift__Collection_100eabdf8,VVar4.unknown);
  pcVar6 = FUN_1006035a4;
  FUN_1005f45bc(FUN_1006035a4,auStack_a0,VVar4.unknown,puVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar5,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_bridgeObjectRelease(VVar3.unknown);
  if (*(long *)(pcVar6 + 0x10) == 0) {
    _swift_bridgeObjectRelease(pcVar6);
  }
  else {
    lVar15 = *(long *)(pcVar6 + 0x20);
    lVar9 = *(long *)(pcVar6 + 0x10) + -1;
    if (lVar9 != 0) {
      pcVar10 = pcVar6 + 0x28;
      lVar11 = lVar15;
      do {
        lVar12 = *(long *)pcVar10;
        lVar2 = lVar12;
        if (lVar11 <= lVar12) {
          lVar12 = lVar11;
          lVar2 = lVar15;
        }
        lVar15 = lVar2;
        lVar9 = lVar9 + -1;
        pcVar10 = pcVar10 + 8;
        lVar11 = lVar12;
      } while (lVar9 != 0);
    }
    _swift_bridgeObjectRelease(pcVar6);
    if (0 < lVar15) {
      uVar7 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar14,uVar16,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar14 = 0;
      FUN_1006883a0(0,uVar7);
      FUN_10067ec68(lVar15,uVar14);
      local_90 = uVar16;
      uStack_88 = uVar17;
      local_80 = lVar15;
      DVar8 = Swift::Dictionary::_mapValues((Dictionary)0x100733d70);
      _swift_bridgeObjectRelease(DVar13.unknown);
      *(undefined **)(unaff_x20 + 8) = DVar8.unknown;
    }
  }
  return;
}



/* Address: 0x10072e020 | FUN_10072e020 */

undefined8
FUN_10072e020(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long local_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1006035b0(&local_68,FUN_1006035a4,0,uVar5,&DAT_100ef5140,uVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (((*(char *)(unaff_x20 + 0x20) == '\x02') && (*(long *)(unaff_x20 + 0x18) == 0)) &&
     (*(long *)(unaff_x20 + 0x10) == 1)) {
    (**(code **)(*(long *)(param_5 + -8) + 0x10))(param_1,param_2,param_5);
    if (param_3 != 0 && param_3 <= local_68) {
      lVar4 = 0;
      FUN_10073244c(0,uVar1,uVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x3c));
      lVar4 = 0;
      FUN_10073244c(0,uVar1,uVar2);
      *(undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x3c)) = 0;
    }
  }
  else {
    (**(code **)(*(long *)(param_5 + -8) + 0x10))(param_1,param_2,param_5);
    if (param_3 != 0 && param_3 <= local_68) {
      lVar4 = 0;
      FUN_10073244c(0,uVar1,uVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + *(int *)(param_4 + 0x3c));
      lVar4 = 0;
      FUN_10073244c(0,uVar1,uVar2);
      *(undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x3c)) = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x40)) = 0;
  return uVar3;
}



/* Address: 0x10072e1ec | FUN_10072e1ec */

void FUN_10072e1ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  FUN_1006035b0(&local_58,FUN_1006035a4,0,*(undefined8 *)(unaff_x20 + 0x28),&DAT_100ef5140,lVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  plVar1 = (long *)(unaff_x20 + *(int *)(param_2 + 0x44));
  lVar6 = *plVar1;
  cVar2 = (char)plVar1[1];
  if (cVar2 == '\0') {
    if (lVar6 <= local_58) {
      return;
    }
  }
  else if ((cVar2 == '\x01') && (lVar6 <= local_58)) {
    if (local_58 < 1) {
      return;
    }
    uVar4 = 0;
    FUN_1006883a0(0,lVar3);
    FUN_10067eb5c(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar7 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar3);
    goto LAB_10072e310;
  }
  uVar4 = 0;
  FUN_1006883a0(0,lVar3);
LAB_10072e310:
  FUN_100679d80(param_1,uVar4);
  return;
}



/* Address: 0x10072e338 | FUN_10072e338 */

void FUN_10072e338(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  lVar3 = (long)*(int *)(param_2 + 0x34);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (unaff_x20 + lVar3,CONCAT71(extraout_var,OVar1.value));
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar3,param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010072e3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x38))(unaff_x20 + lVar3,0,1,lVar2);
  return;
}



/* Address: 0x10072e3e0 | FUN_10072e3e0 */

undefined8
FUN_10072e3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10072e444(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Address: 0x10072e444 | FUN_10072e444 */

void FUN_10072e444(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  Mutex MVar5;
  size_t sVar6;
  long *unaff_x20;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 auStack_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = *(undefined8 *)(*unaff_x20 + 0x50);
  local_78 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar4 = 0;
  uStack_68 = param_1;
  FUN_10073244c();
  lVar7 = *(long *)(lVar4 + -8);
  lVar9 = (long)auStack_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  sVar6 = *(size_t *)(*(long *)(MVar5.unknown + -8) + 0x40);
  puVar8 = (undefined4 *)(lVar9 - (sVar6 + 0xf & 0xfffffffffffffff0));
  _swift_retain(param_2);
  FUN_10072dcdc(lVar9,uStack_68,param_2,param_3,param_4,local_70,local_78);
  *puVar8 = 0;
  (**(code **)(lVar7 + 0x20))((long)puVar8 + (long)*(int *)(MVar5.unknown + 0x1c),lVar9,lVar4);
  _swift_release(param_2);
  _memcpy((void *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)),puVar8,sVar6);
  bVar3 = (param_4 & 0xff) != 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  uVar2 = 0;
  if (!bVar3) {
    uVar2 = param_3;
  }
  *puVar1 = uVar2;
  *(bool *)(puVar1 + 1) = bVar3;
  return;
}



/* Address: 0x10072e578 | FUN_10072e578 */

/* WARNING: Removing unreachable block (ram,0x00010072e728) */

void FUN_10072e578(void)

{
  long lVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined8 uVar4;
  Mutex MVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *puStack_80;
  Task local_70;
  undefined8 uStack_68;
  char local_60;
  long local_58;
  long lStack_50;
  undefined1 local_48;
  
  lVar9 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar9 + 0x60);
  _os_unfair_lock_lock(lVar1);
  uVar8 = *(undefined8 *)(lVar9 + 0x50);
  uVar2 = *(undefined8 *)(lVar9 + 0x58);
  uVar4 = 0xff;
  FUN_10073244c(0xff,uVar8,uVar2);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_10072e7b0(&local_70,lVar1 + *(int *)(MVar5.unknown + 0x1c));
  FUN_100733e20(0xff,uVar8,uVar2);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_98 = CONCAT71(extraout_var,OVar3.value);
  puVar6 = &DAT_100fe0dd0;
  FUN_1000f8b08(&DAT_100fe0dd0,&DAT_100c75598);
  puVar7 = &DAT_100fe0dd8;
  local_90 = puVar6;
  FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
  puStack_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
  uVar8 = 0;
  local_88 = puVar7;
  _swift_getTupleTypeMetadata(0,4,&local_98,0,0);
  _os_unfair_lock_unlock
            (lVar1,uVar4,uVar8,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_60 != -1) {
    FUN_100732958(local_70.unknown,uStack_68,local_60);
    if (local_60 == '\x01') {
      Swift::Task::cancel(local_70);
    }
    FUN_100733e2c(local_70.unknown,uStack_68,local_60);
  }
  if (local_58 != 0) {
    **(undefined1 **)(*(long *)(local_58 + 0x40) + 0x28) = local_48;
    _swift_continuation_resume(local_58);
  }
  if (lStack_50 != 0) {
    _swift_continuation_throwingResume(lStack_50);
  }
  FUN_100733e2c(local_70.unknown,uStack_68,local_60);
  return;
}



/* Address: 0x10072e7b0 | FUN_10072e7b0 */

void FUN_10072e7b0(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  __int64 _Var4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  Dictionary DVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar7 = &local_90;
  DVar10.unknown = *(undefined **)(param_2 + 8);
  uVar1 = *(undefined8 *)(*param_3 + 0x50);
  uVar2 = *(undefined8 *)(*param_3 + 0x58);
  FUN_100733d64(0,uVar1,uVar2);
  _Var4 = Swift::Dictionary::get_count(DVar10);
  if (_Var4 == 0) {
    local_80 = *(undefined1 *)(param_2 + 0x20);
    uStack_88 = *(undefined8 *)(param_2 + 0x18);
    local_90 = *(undefined8 *)(param_2 + 0x10);
    puVar6 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x68));
    uVar9 = *puVar6;
    cVar3 = *(char *)(puVar6 + 1);
    FUN_10073244c(0,uVar1,uVar2);
    FUN_100733e20(0,uVar1,uVar2);
    bVar8 = 0xff;
    if (cVar3 != '\x01') {
      bVar8 = (byte)uVar9;
    }
    puVar6 = &local_70;
    FUN_10072e020();
    param_1[1] = uStack_68;
    *param_1 = local_70;
    *(undefined1 *)(param_1 + 2) = local_60;
    param_1[3] = puVar6;
    param_1[4] = puVar7;
    *(byte *)(param_1 + 5) = bVar8 & 1;
    FUN_10072e954(param_2,uVar1,uVar2);
  }
  else {
    lVar5 = 0;
    FUN_10073244c(0,uVar1,uVar2);
    *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x38)) = 1;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0xff;
    puVar7 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x68));
    uVar9 = *puVar7;
    cVar3 = *(char *)(puVar7 + 1);
    FUN_100733e20(0xff,uVar1,uVar2);
    Swift::Optional::typeMetadataAccessor();
    bVar8 = 0xff;
    if (cVar3 != '\x01') {
      bVar8 = (byte)uVar9;
    }
    puVar7 = &local_70;
    puVar6 = param_1;
    FUN_10072e020();
    param_1[3] = puVar6;
    param_1[4] = puVar7;
    *(byte *)(param_1 + 5) = bVar8 & 1;
  }
  return;
}



/* Address: 0x10072e954 | FUN_10072e954 */

void FUN_10072e954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = 2;
  FUN_100732a34(uVar2,uVar4,uVar1);
  lVar3 = 0;
  FUN_10073244c(0,param_2,param_3);
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x38)) = 1;
  return;
}



/* Address: 0x10072e9c0 | FUN_10072e9c0 */

void FUN_10072e9c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  pcVar2 = *(code **)(*(long *)(param_3 + -8) + 0x20);
  (*pcVar2)(&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_1);
  (*pcVar2)(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
            &stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  _swift_continuation_resume(param_2);
  return;
}



/* Address: 0x10072ea34 | FUN_10072ea34 */

void FUN_10072ea34(long *param_1,long *param_2)

{
  code *pcVar1;
  Dictionary DVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  local_48 = 0;
  lVar3 = *param_2;
  local_50 = 0;
  local_38 = lVar3;
  FUN_100733d64(0xff);
  DVar2 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::_set_subscript((Dictionary *)(param_2 + 1),&local_50,&local_38,DVar2.unknown);
  *param_1 = lVar3;
  if (!SCARRY8(*param_2,1)) {
    *param_2 = *param_2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10072ead0);
  (*pcVar1)();
}



/* Address: 0x10072ead0 | FUN_10072ead0 */

void FUN_10072ead0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Dictionary DVar4;
  long lVar5;
  __int64 _Var6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  byte bVar13;
  long local_70;
  long lStack_68;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(*param_4 + 0x50);
  uVar2 = *(undefined8 *)(*param_4 + 0x58);
  uStack_58 = param_3;
  FUN_100733d64(0xff,uVar1,uVar2);
  DVar4 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::_removeValue(&local_70,&uStack_58,DVar4.unknown);
  lVar8 = local_70;
  lVar5 = 0;
  FUN_10073244c(0,uVar1,uVar2);
  FUN_10072de40();
  _Var6 = Swift::Dictionary::get_count((Dictionary)*(undefined **)(param_2 + 8));
  if (_Var6 == 0) {
    bVar13 = *(byte *)(param_2 + *(int *)(lVar5 + 0x38));
  }
  else {
    bVar13 = 0;
  }
  param_4 = (long *)((long)param_4 + *(long *)(*param_4 + 0x68));
  if ((char)param_4[1] != '\x01') {
    lVar10 = *param_4;
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    uVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar2,uVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1006035b0(&local_70,FUN_1006035a4,0,uVar9,&DAT_100ef5140,uVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (local_70 < lVar10) {
      lVar10 = *(long *)(param_2 + 0x10);
      lVar11 = *(long *)(param_2 + 0x18);
      cVar12 = *(char *)(param_2 + 0x20);
      if (((cVar12 == '\x02') && (lVar10 == 1)) && (lVar11 == 0)) {
        *param_1 = lVar8;
        param_1[1] = lStack_68;
        lVar8 = (long)*(int *)(lVar5 + 0x3c);
        param_1[2] = *(long *)(param_2 + lVar8);
        *(undefined1 *)(param_1 + 3) = 1;
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)(param_1 + 6) = 0xff;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lStack_68;
        lVar8 = (long)*(int *)(lVar5 + 0x3c);
        param_1[2] = *(long *)(param_2 + lVar8);
        *(undefined1 *)(param_1 + 3) = 0;
        if ((bVar13 & 1) == 0) {
          lVar10 = 0;
          lVar11 = 0;
          cVar12 = -1;
        }
        else {
          FUN_100732958(lVar10,lVar11,cVar12);
          uVar1 = *(undefined8 *)(param_2 + 0x10);
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x10) = 1;
          uVar3 = *(undefined1 *)(param_2 + 0x20);
          *(undefined1 *)(param_2 + 0x20) = 2;
          FUN_100732a34(uVar1,uVar2,uVar3);
          lVar8 = (long)*(int *)(lVar5 + 0x3c);
        }
        param_1[4] = lVar10;
        param_1[5] = lVar11;
        *(char *)(param_1 + 6) = cVar12;
      }
      *(undefined8 *)(param_2 + lVar8) = 0;
      return;
    }
  }
  lVar5 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  cVar12 = *(char *)(param_2 + 0x20);
  if (((cVar12 == '\x02') && (lVar5 == 1)) && (lVar10 == 0)) {
    *param_1 = lVar8;
    param_1[1] = lStack_68;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    *param_1 = lVar8;
    param_1[1] = lStack_68;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if ((bVar13 & 1) != 0) {
      FUN_100732958(lVar5,lVar10,cVar12);
      param_1[4] = lVar5;
      param_1[5] = lVar10;
      *(char *)(param_1 + 6) = cVar12;
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x10) = 1;
      uVar3 = *(undefined1 *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x20) = 2;
      FUN_100732a34(uVar1,uVar2,uVar3);
      return;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return;
}



/* Address: 0x10072edac | FUN_10072edac */

void FUN_10072edac(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = *unaff_x20;
  _swift_task_switch(FUN_10072edcc,0,0);
  return;
}



/* Address: 0x10072edcc | FUN_10072edcc */

void FUN_10072edcc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  plVar1 = (long *)((long)*(long **)(unaff_x22 + 0x90) +
                   *(long *)(**(long **)(unaff_x22 + 0x90) + 0x68));
  if ((char)plVar1[1] == '\x01' || *plVar1 < 1) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10072ef30;
    _swift_continuation_init(unaff_x22 + 0x10,0);
    FUN_10072f3a0();
    lVar2 = unaff_x22 + 0x10;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xa0;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_10072ee74;
    _swift_continuation_init(unaff_x22 + 0x50,0);
    FUN_10072f03c();
    lVar2 = unaff_x22 + 0x50;
  }
  _swift_continuation_await(lVar2);
  return;
}



/* Address: 0x10072ee74 | FUN_10072ee74 */

void FUN_10072ee74(void)

{
  _swift_task_switch(FUN_10072eebc,0,0);
  return;
}


