/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10079a264 | FUN_10079a264 */

long * FUN_10079a264(long *param_1,long *param_2,long param_3)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && uVar5 + 1 < 0x19) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar5);
    if (2 < *(byte *)((long)param_2 + uVar5)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      lVar1 = param_2[1];
      lVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar3;
      uVar2 = 2;
    }
    else {
      if (uVar4 != 1) {
        (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      lVar1 = param_2[1];
      lVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar3;
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
  _swift_retain(lVar1);
  return param_1;
}



/* Address: 0x10079a368 | FUN_10079a368 */

void FUN_10079a368(uint *param_1,long param_2)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
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
      if (uVar6 == 0) goto LAB_10079a424;
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
LAB_10079a424:
  if ((uVar5 != 2) && (uVar5 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010079a454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
  _swift_release(*(undefined8 *)(param_1 + 2));
  return;
}



/* Address: 0x10079a458 | FUN_10079a458 */

undefined8 * FUN_10079a458(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar8 = (uint)uVar5;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10079a518;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_10079a518:
  if (uVar6 == 2) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    uVar4 = 2;
  }
  else {
    if (uVar6 != 1) {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar5) = 0;
      return param_1;
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    uVar4 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar5) = uVar4;
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x10079a580 | FUN_10079a580 */

uint * FUN_10079a580(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar1 + -8);
  uVar4 = *(ulong *)(lVar8 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar3;
  uVar7 = (uint)uVar4;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10079a64c;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_10079a64c:
  if ((uVar5 == 2) || (uVar5 == 1)) {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar8 + 8))(param_1,lVar1);
  }
  bVar3 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10079a6ec;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_10079a6ec:
  if (uVar5 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    bVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar1);
      *(byte *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    bVar3 = 1;
  }
  *(byte *)((long)param_1 + uVar4) = bVar3;
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10079a75c | FUN_10079a75c */

undefined8 * FUN_10079a75c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
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
      if (uVar6 == 0) goto LAB_10079a81c;
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
LAB_10079a81c:
  if (uVar5 == 2) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    uVar3 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  return param_1;
}



/* Address: 0x10079a878 | FUN_10079a878 */

uint * FUN_10079a878(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar7 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
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
      if (uVar5 == 0) goto LAB_10079a944;
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
LAB_10079a944:
  if ((uVar4 == 2) || (uVar4 == 1)) {
    _swift_release(*(undefined8 *)(param_1 + 2));
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
      if (uVar5 == 0) goto LAB_10079a9e4;
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
LAB_10079a9e4:
  if (uVar4 == 2) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
    bVar2 = 1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Address: 0x10079aa48 | FUN_10079aa48 */

int FUN_10079aa48(uint *param_1,uint param_2,long param_3)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_10079ab1c;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10079ab1c;
      goto LAB_10079aaa8;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10079aaa8:
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
LAB_10079ab1c:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x10079ab80 | FUN_10079ab80 */

void FUN_10079ab80(uint *param_1,uint param_2,uint param_3,long param_4)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
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



/* Address: 0x10079ad44 | FUN_10079ad44 */

uint FUN_10079ad44(uint *param_1,long param_2)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
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



/* Address: 0x10079ae08 | FUN_10079ae08 */

void FUN_10079ae08(uint *param_1,uint param_2,long param_3)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  sVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (sVar4 < 0x11) {
    sVar4 = 0x10;
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



/* Address: 0x10079aef0 | FUN_10079aef0 */

void FUN_10079aef0(undefined8 param_1)

{
  FUN_10079d040(param_1,0x44000000);
  return;
}



/* Address: 0x10079aef8 | FUN_10079aef8 */

void FUN_10079aef8(undefined8 param_1)

{
  FUN_10079d040(param_1,0x64000000);
  return;
}



/* Address: 0x10079af00 | FUN_10079af00 */

void FUN_10079af00(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_50;
  long local_48;
  undefined *puStack_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  uVar3 = uVar1;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar1,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    local_50 = *(long *)(lVar2 + -8) + 0x40;
    lVar2 = 0x13f;
    uVar3 = uVar4;
    FUN_1007963ec(0x13f,uVar4,uVar1);
    if (uVar3 < 0x40) {
      local_48 = *(long *)(lVar2 + -8) + 0x40;
      puStack_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      lVar2 = 0x13f;
      FUN_1007966b4(0x13f,uVar4,uVar1);
      if (uVar4 < 0x40) {
        local_38 = *(long *)(lVar2 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,4,&local_50,param_1 + 0x20);
      }
    }
  }
  return;
}



/* Address: 0x10079afe0 | FUN_10079afe0 */

long * FUN_10079afe0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar20 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar5 + -8);
  lVar19 = *(long *)(lVar14 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar20,uVar7,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar6 + -8);
  uVar12 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8 | 7;
  uVar13 = *(ulong *)(lVar18 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar2 = uVar13;
  if (uVar13 < 9) {
    uVar2 = 8;
  }
  uVar10 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar14 + 0x50);
  if ((uVar10 & 0x1000f8) != 0 ||
      ((-9 - uVar12) -
       (uVar1 + (lVar19 + uVar12 & (uVar12 ^ 0xffffffffffffffff)) + 8 & 0xfffffffffffffff8) | uVar12
      ) - (uVar2 + 1) < 0xffffffffffffffe7) {
    uVar13 = (ulong)(uVar10 & 0xf8 | 7);
    lVar5 = *param_2;
    *param_1 = lVar5;
    _swift_retain();
    return (long *)(lVar5 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar5);
  puVar16 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
  puVar17 = (uint *)((long)param_2 + lVar19 + 7 & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar17 + uVar1);
  uVar10 = (uint)bVar3;
  if (2 < bVar3) {
    uVar15 = (uint)uVar1;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_10079b1a0;
      uVar11 = (uint)(byte)*puVar17;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar17;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar17;
    }
    else {
      uVar11 = *puVar17;
    }
    uVar10 = uVar11 | bVar3 - 3 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_10079b1a0:
  if (uVar10 == 2) {
    uVar7 = *(undefined8 *)(puVar17 + 2);
    uVar20 = *(undefined8 *)puVar17;
    puVar16[1] = *(undefined8 *)(puVar17 + 2);
    *puVar16 = uVar20;
    uVar9 = 2;
LAB_10079b1d8:
    *(undefined1 *)((long)puVar16 + uVar1) = uVar9;
    _swift_retain(uVar7);
  }
  else {
    if (uVar10 == 1) {
      uVar7 = *(undefined8 *)(puVar17 + 2);
      uVar20 = *(undefined8 *)puVar17;
      puVar16[1] = *(undefined8 *)(puVar17 + 2);
      *puVar16 = uVar20;
      uVar9 = 1;
      goto LAB_10079b1d8;
    }
    (**(code **)(lVar18 + 0x10))(puVar16,puVar17,lVar6);
    *(undefined1 *)((long)puVar16 + uVar1) = 0;
  }
  *(undefined8 *)((long)puVar16 + uVar1 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)puVar17 + uVar1 + 8) & 0xfffffffffffffff8);
  puVar17 = (uint *)((ulong)((long)puVar17 + uVar1 + 0x10) & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar17 + uVar2);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar15 = (uint)uVar2;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_10079b29c;
      uVar11 = (uint)(byte)*puVar17;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar17;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar17;
    }
    else {
      uVar11 = *puVar17;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_10079b29c:
  puVar16 = (undefined8 *)((long)puVar16 + uVar1 + 0x10 & 0xfffffffffffffff8);
  if (uVar10 == 1) {
    *puVar16 = *(undefined8 *)puVar17;
    *(undefined1 *)((long)puVar16 + uVar2) = 1;
  }
  else if (uVar10 == 0) {
    puVar8 = puVar17;
    (**(code **)(lVar18 + 0x30))(puVar17,1,lVar6);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar16,puVar17,lVar6);
      (**(code **)(lVar18 + 0x38))(puVar16,0,1,lVar6);
    }
    else {
      _memcpy(puVar16,puVar17,uVar13);
    }
    *(undefined1 *)((long)puVar16 + uVar2) = 0;
  }
  else {
    _memcpy(puVar16,puVar17,uVar2 + 1);
  }
  return param_1;
}



/* Address: 0x10079b364 | FUN_10079b364 */

void FUN_10079b364(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar6 + -8);
  (**(code **)(lVar14 + 8))(param_1,lVar6);
  lVar14 = *(long *)(lVar14 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar6 + -8);
  uVar15 = (ulong)*(uint *)(lVar12 + 0x50) & 0xf8 | 7;
  puVar11 = (uint *)(lVar14 + param_1 + uVar15 & (uVar15 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar12 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  bVar4 = *(byte *)((long)puVar11 + uVar1);
  uVar8 = (uint)bVar4;
  if (2 < bVar4) {
    uVar10 = (uint)uVar1;
    uVar9 = 4;
    if (uVar10 < 4) {
      uVar9 = uVar10;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079b480;
      uVar9 = (uint)(byte)*puVar11;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar11;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
    uVar8 = uVar9 | bVar4 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_10079b480:
  if ((uVar8 == 2) || (uVar8 == 1)) {
    _swift_release(*(undefined8 *)(puVar11 + 2));
  }
  else {
    (**(code **)(lVar12 + 8))(puVar11,lVar6);
  }
  puVar11 = (uint *)(uVar15 + ((ulong)((long)puVar11 + uVar1 + 8) & 0xfffffffffffffff8) + 8 &
                    ~uVar15);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  bVar4 = *(byte *)((long)puVar11 + uVar13);
  uVar8 = (uint)bVar4;
  if (1 < bVar4) {
    uVar9 = (uint)uVar13;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) {
        return;
      }
      uVar10 = (uint)(byte)*puVar11;
    }
    else if (uVar8 == 2) {
      uVar10 = (uint)(ushort)*puVar11;
    }
    else if (uVar8 == 3) {
      uVar10 = (uint)(uint3)*puVar11;
    }
    else {
      uVar10 = *puVar11;
    }
    uVar8 = uVar10 | bVar4 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar8 = uVar10;
    }
    uVar8 = uVar8 + 2;
  }
  if ((uVar8 == 0) &&
     (puVar7 = puVar11, (**(code **)(lVar12 + 0x30))(puVar11,1,lVar6), (int)puVar7 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010079b5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 8))(puVar11,lVar6);
    return;
  }
  return;
}



/* Address: 0x10079b5ac | FUN_10079b5ac */

long FUN_10079b5ac(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar18 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar5,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar14 + -8);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  lVar4 = lVar4 + uVar17;
  puVar11 = (undefined8 *)(lVar4 + param_1 & (uVar17 ^ 0xffffffffffffffff));
  puVar12 = (uint *)(lVar4 + param_2 & (uVar17 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar15 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar2;
  if (2 < bVar2) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079b6dc;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar2 - 3 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_10079b6dc:
  if (uVar8 == 2) {
    uVar5 = *(undefined8 *)(puVar12 + 2);
    uVar18 = *(undefined8 *)puVar12;
    puVar11[1] = *(undefined8 *)(puVar12 + 2);
    *puVar11 = uVar18;
    uVar7 = 2;
LAB_10079b714:
    *(undefined1 *)((long)puVar11 + uVar1) = uVar7;
    _swift_retain(uVar5);
  }
  else {
    if (uVar8 == 1) {
      uVar5 = *(undefined8 *)(puVar12 + 2);
      uVar18 = *(undefined8 *)puVar12;
      puVar11[1] = *(undefined8 *)(puVar12 + 2);
      *puVar11 = uVar18;
      uVar7 = 1;
      goto LAB_10079b714;
    }
    (**(code **)(lVar15 + 0x10))(puVar11,puVar12,lVar14);
    *(undefined1 *)((long)puVar11 + uVar1) = 0;
  }
  puVar10 = (undefined8 *)(uVar1 + 8 + (long)puVar11 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)((ulong)(uVar1 + 8 + (long)puVar12) & 0xfffffffffffffff8);
  *puVar10 = *puVar11;
  puVar10 = (undefined8 *)(uVar17 + 8 + (long)puVar10 & ~uVar17);
  puVar12 = (uint *)(uVar17 + 8 + (long)puVar11 & ~uVar17);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079b7f4;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10079b7f4:
  if (uVar8 == 1) {
    *puVar10 = *(undefined8 *)puVar12;
    *(undefined1 *)((long)puVar10 + uVar1) = 1;
  }
  else if (uVar8 == 0) {
    puVar6 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,lVar14);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar10,puVar12,lVar14);
      (**(code **)(lVar15 + 0x38))(puVar10,0,1,lVar14);
    }
    else {
      _memcpy(puVar10,puVar12,uVar13);
    }
    *(undefined1 *)((long)puVar10 + uVar1) = 0;
  }
  else {
    _memcpy(puVar10,puVar12,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079b8a4 | FUN_10079b8a4 */

long FUN_10079b8a4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar18 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar3 + -8);
  (**(code **)(lVar14 + 0x18))(param_1,param_2,lVar3);
  lVar3 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,uVar4,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar14 + -8);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  lVar3 = lVar3 + uVar17;
  puVar12 = (uint *)(lVar3 + param_1 & (uVar17 ^ 0xffffffffffffffff));
  puVar11 = (uint *)(lVar3 + param_2 & (uVar17 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar15 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  if (puVar12 != puVar11) {
    bVar6 = *(byte *)((long)puVar12 + uVar1);
    uVar8 = (uint)bVar6;
    uVar16 = (uint)uVar1;
    if (2 < bVar6) {
      uVar9 = 4;
      if (uVar16 < 4) {
        uVar9 = uVar16;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_10079b9e0;
        uVar9 = (uint)(byte)*puVar12;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar12;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar12;
      }
      else {
        uVar9 = *puVar12;
      }
      uVar8 = uVar9 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 3;
    }
LAB_10079b9e0:
    if ((uVar8 == 2) || (uVar8 == 1)) {
      _swift_release(*(undefined8 *)(puVar12 + 2));
    }
    else {
      (**(code **)(lVar15 + 8))(puVar12,lVar14);
    }
    bVar6 = *(byte *)((long)puVar11 + uVar1);
    uVar8 = (uint)bVar6;
    if (2 < bVar6) {
      uVar9 = 4;
      if (uVar16 < 4) {
        uVar9 = uVar16;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_10079ba80;
        uVar9 = (uint)(byte)*puVar11;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar11;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar11;
      }
      else {
        uVar9 = *puVar11;
      }
      uVar8 = uVar9 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 3;
    }
LAB_10079ba80:
    if (uVar8 == 2) {
      uVar4 = *(undefined8 *)(puVar11 + 2);
      uVar18 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar12 = uVar18;
      bVar6 = 2;
    }
    else {
      if (uVar8 != 1) {
        (**(code **)(lVar15 + 0x10))(puVar12,puVar11,lVar14);
        *(byte *)((long)puVar12 + uVar1) = 0;
        goto LAB_10079bad8;
      }
      uVar4 = *(undefined8 *)(puVar11 + 2);
      uVar18 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar12 = uVar18;
      bVar6 = 1;
    }
    *(byte *)((long)puVar12 + uVar1) = bVar6;
    _swift_retain(uVar4);
  }
LAB_10079bad8:
  puVar10 = (undefined8 *)((ulong)((long)puVar12 + uVar1 + 8) & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((ulong)((long)puVar11 + uVar1 + 8) & 0xfffffffffffffff8);
  *puVar10 = *puVar7;
  puVar11 = (uint *)(uVar17 + 8 + (long)puVar10 & ~uVar17);
  puVar12 = (uint *)(uVar17 + 8 + (long)puVar7 & ~uVar17);
  if (puVar11 == puVar12) {
    return param_1;
  }
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  uVar16 = (uint)uVar1;
  bVar6 = *(byte *)((long)puVar11 + uVar1);
  uVar8 = (uint)bVar6;
  if (bVar6 < 2) {
LAB_10079bba4:
    if ((uVar8 == 0) &&
       (puVar5 = puVar11, (**(code **)(lVar15 + 0x30))(puVar11,1,lVar14), (int)puVar5 == 0)) {
      (**(code **)(lVar15 + 8))(puVar11,lVar14);
    }
  }
  else {
    uVar8 = 4;
    if (uVar16 < 4) {
      uVar8 = uVar16;
    }
    if (1 < (int)uVar8) {
      if (uVar8 == 2) {
        uVar9 = (uint)(ushort)*puVar11;
      }
      else if (uVar8 == 3) {
        uVar9 = (uint)(uint3)*puVar11;
      }
      else {
        uVar9 = *puVar11;
      }
LAB_10079bb8c:
      uVar8 = uVar9 | bVar6 - 2 << (ulong)(uVar16 << 3 & 0x1f);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 2;
      goto LAB_10079bba4;
    }
    if (uVar8 != 0) {
      uVar9 = (uint)(byte)*puVar11;
      goto LAB_10079bb8c;
    }
  }
  bVar6 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar6;
  if (1 < bVar6) {
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079bc40;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar6 - 2 << (ulong)(uVar16 << 3 & 0x1f);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10079bc40:
  if (uVar8 == 1) {
    *(undefined8 *)puVar11 = *(undefined8 *)puVar12;
    *(byte *)((long)puVar11 + uVar1) = 1;
  }
  else if (uVar8 == 0) {
    puVar5 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,lVar14);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar11,puVar12,lVar14);
      (**(code **)(lVar15 + 0x38))(puVar11,0,1,lVar14);
    }
    else {
      _memcpy(puVar11,puVar12,uVar13);
    }
    *(byte *)((long)puVar11 + uVar1) = 0;
  }
  else {
    _memcpy(puVar11,puVar12,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079bcf0 | FUN_10079bcf0 */

long FUN_10079bcf0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar5 + -8);
  (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar5);
  lVar5 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar18,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar14 + -8);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  lVar5 = lVar5 + uVar17;
  puVar11 = (undefined8 *)(lVar5 + param_1 & (uVar17 ^ 0xffffffffffffffff));
  puVar12 = (uint *)(lVar5 + param_2 & (uVar17 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar15 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  bVar3 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar3;
  if (2 < bVar3) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079be20;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar3 - 3 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_10079be20:
  if (uVar8 == 2) {
    uVar18 = *(undefined8 *)puVar12;
    puVar11[1] = *(undefined8 *)(puVar12 + 2);
    *puVar11 = uVar18;
    uVar7 = 2;
  }
  else if (uVar8 == 1) {
    uVar18 = *(undefined8 *)puVar12;
    puVar11[1] = *(undefined8 *)(puVar12 + 2);
    *puVar11 = uVar18;
    uVar7 = 1;
  }
  else {
    (**(code **)(lVar15 + 0x20))(puVar11,puVar12,lVar14);
    uVar7 = 0;
  }
  *(undefined1 *)((long)puVar11 + uVar1) = uVar7;
  puVar10 = (undefined8 *)(uVar1 + 8 + (long)puVar11 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)((ulong)(uVar1 + 8 + (long)puVar12) & 0xfffffffffffffff8);
  *puVar10 = *puVar11;
  puVar10 = (undefined8 *)(uVar17 + 8 + (long)puVar10 & ~uVar17);
  puVar12 = (uint *)(uVar17 + 8 + (long)puVar11 & ~uVar17);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar16 = (uint)uVar1;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079bf2c;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10079bf2c:
  if (uVar8 == 1) {
    *puVar10 = *(undefined8 *)puVar12;
    *(undefined1 *)((long)puVar10 + uVar1) = 1;
  }
  else if (uVar8 == 0) {
    puVar6 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,lVar14);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar10,puVar12,lVar14);
      (**(code **)(lVar15 + 0x38))(puVar10,0,1,lVar14);
    }
    else {
      _memcpy(puVar10,puVar12,uVar13);
    }
    *(undefined1 *)((long)puVar10 + uVar1) = 0;
  }
  else {
    _memcpy(puVar10,puVar12,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079bfdc | FUN_10079bfdc */

long FUN_10079bfdc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar18 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x28))(param_1,param_2,lVar4);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar18,puVar3,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar14 + -8);
  uVar17 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  lVar4 = lVar4 + uVar17;
  puVar12 = (uint *)(lVar4 + param_1 & (uVar17 ^ 0xffffffffffffffff));
  puVar11 = (uint *)(lVar4 + param_2 & (uVar17 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar15 + 0x40);
  uVar1 = uVar13;
  if (uVar13 < 0x11) {
    uVar1 = 0x10;
  }
  if (puVar12 != puVar11) {
    bVar6 = *(byte *)((long)puVar12 + uVar1);
    uVar8 = (uint)bVar6;
    uVar16 = (uint)uVar1;
    if (2 < bVar6) {
      uVar9 = 4;
      if (uVar16 < 4) {
        uVar9 = uVar16;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_10079c118;
        uVar9 = (uint)(byte)*puVar12;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar12;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar12;
      }
      else {
        uVar9 = *puVar12;
      }
      uVar8 = uVar9 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 3;
    }
LAB_10079c118:
    if ((uVar8 == 2) || (uVar8 == 1)) {
      _swift_release(*(undefined8 *)(puVar12 + 2));
    }
    else {
      (**(code **)(lVar15 + 8))(puVar12,lVar14);
    }
    bVar6 = *(byte *)((long)puVar11 + uVar1);
    uVar8 = (uint)bVar6;
    if (2 < bVar6) {
      uVar9 = 4;
      if (uVar16 < 4) {
        uVar9 = uVar16;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_10079c1b8;
        uVar9 = (uint)(byte)*puVar11;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar11;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar11;
      }
      else {
        uVar9 = *puVar11;
      }
      uVar8 = uVar9 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 3;
    }
LAB_10079c1b8:
    if (uVar8 == 2) {
      uVar18 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar12 = uVar18;
      bVar6 = 2;
    }
    else if (uVar8 == 1) {
      uVar18 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar12 = uVar18;
      bVar6 = 1;
    }
    else {
      (**(code **)(lVar15 + 0x20))(puVar12,puVar11,lVar14);
      bVar6 = 0;
    }
    *(byte *)((long)puVar12 + uVar1) = bVar6;
  }
  puVar10 = (undefined8 *)((ulong)((long)puVar12 + uVar1 + 8) & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((ulong)((long)puVar11 + uVar1 + 8) & 0xfffffffffffffff8);
  *puVar10 = *puVar7;
  puVar11 = (uint *)(uVar17 + 8 + (long)puVar10 & ~uVar17);
  puVar12 = (uint *)(uVar17 + 8 + (long)puVar7 & ~uVar17);
  if (puVar11 == puVar12) {
    return param_1;
  }
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  uVar16 = (uint)uVar1;
  bVar6 = *(byte *)((long)puVar11 + uVar1);
  uVar8 = (uint)bVar6;
  if (bVar6 < 2) {
LAB_10079c2d0:
    if ((uVar8 == 0) &&
       (puVar5 = puVar11, (**(code **)(lVar15 + 0x30))(puVar11,1,lVar14), (int)puVar5 == 0)) {
      (**(code **)(lVar15 + 8))(puVar11,lVar14);
    }
  }
  else {
    uVar8 = 4;
    if (uVar16 < 4) {
      uVar8 = uVar16;
    }
    if (1 < (int)uVar8) {
      if (uVar8 == 2) {
        uVar9 = (uint)(ushort)*puVar11;
      }
      else if (uVar8 == 3) {
        uVar9 = (uint)(uint3)*puVar11;
      }
      else {
        uVar9 = *puVar11;
      }
LAB_10079c2b8:
      uVar8 = uVar9 | bVar6 - 2 << (ulong)(uVar16 << 3 & 0x1f);
      if (3 < uVar16) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 2;
      goto LAB_10079c2d0;
    }
    if (uVar8 != 0) {
      uVar9 = (uint)(byte)*puVar11;
      goto LAB_10079c2b8;
    }
  }
  bVar6 = *(byte *)((long)puVar12 + uVar1);
  uVar8 = (uint)bVar6;
  if (1 < bVar6) {
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10079c36c;
      uVar9 = (uint)(byte)*puVar12;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar12;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar12;
    }
    else {
      uVar9 = *puVar12;
    }
    uVar8 = uVar9 | bVar6 - 2 << (ulong)(uVar16 << 3 & 0x1f);
    if (3 < uVar16) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10079c36c:
  if (uVar8 == 1) {
    *(undefined8 *)puVar11 = *(undefined8 *)puVar12;
    *(byte *)((long)puVar11 + uVar1) = 1;
  }
  else if (uVar8 == 0) {
    puVar5 = puVar12;
    (**(code **)(lVar15 + 0x30))(puVar12,1,lVar14);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar11,puVar12,lVar14);
      (**(code **)(lVar15 + 0x38))(puVar11,0,1,lVar14);
    }
    else {
      _memcpy(puVar11,puVar12,uVar13);
    }
    *(byte *)((long)puVar11 + uVar1) = 0;
  }
  else {
    _memcpy(puVar11,puVar12,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079c41c | FUN_10079c41c */

uint * FUN_10079c41c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar15 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar15 + 0x54);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,puVar7,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar9 + -8);
  uVar10 = *(ulong *)(lVar9 + 0x40);
  uVar3 = uVar10;
  if (uVar10 < 0x11) {
    uVar3 = 0x10;
  }
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  uVar11 = 0xfd;
  if ((uint)uVar10 < 4) {
    uVar11 = 1U >> (ulong)(((uint)uVar10 & 3) << 3) ^ 0xfd;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar11) {
    uVar2 = uVar11;
  }
  if (uVar2 < 0xfe) {
    uVar2 = 0xfd;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar12 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  uVar1 = *(long *)(lVar15 + 0x40) + uVar12;
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10079c5a4;
  lVar9 = uVar10 + (uVar12 + (uVar3 + (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + 8 &
                             0xfffffffffffffff8) + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar13 = (uint)lVar9;
  uVar11 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar14 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar11 & 0x1f)) >> (ulong)(uVar11 & 0x1f)) + 1;
    if (uVar14 < 0x100) {
      if (uVar14 < 2) goto LAB_10079c5a4;
      goto LAB_10079c534;
    }
    if (uVar14 >> 0x10 == 0) {
      uVar14 = (uint)*(ushort *)((long)param_1 + lVar9);
    }
    else {
      uVar14 = *(uint *)((long)param_1 + lVar9);
    }
  }
  else {
LAB_10079c534:
    uVar14 = (uint)*(byte *)((long)param_1 + lVar9);
  }
  if (uVar14 != 0) {
    uVar6 = 0;
    if (uVar13 < 4) {
      uVar6 = uVar14 - 1 << (ulong)(uVar11 & 0x1f);
    }
    if (uVar13 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar13 < 4) {
        uVar11 = uVar13;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_1;
        }
        else {
          uVar11 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_1;
      }
      else {
        uVar11 = *param_1;
      }
    }
    return (uint *)(ulong)(uVar2 + (uVar11 | uVar6) + 1);
  }
LAB_10079c5a4:
  if (uVar6 != uVar2) {
    uVar11 = (uint)*(byte *)(((ulong)(uVar1 + (long)param_1) & ~uVar12) + uVar3);
    uVar6 = 0;
    if (2 < uVar11) {
      uVar6 = (uVar11 ^ 0xff) + 1;
    }
    return (uint *)(ulong)uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010079c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 0x30))(param_1,uVar6,lVar8);
  return param_1;
}



/* Address: 0x10079c65c | FUN_10079c65c */

void FUN_10079c65c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  long lVar19;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar19 = *(long *)(lVar10 + -8);
  uVar7 = *(uint *)(lVar19 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar5,puVar9,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar11 + -8);
  uVar13 = *(ulong *)(lVar11 + 0x40);
  uVar4 = uVar13;
  if (uVar13 < 0x11) {
    uVar4 = 0x10;
  }
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  uVar12 = 0xfd;
  if ((uint)uVar13 < 4) {
    uVar12 = 1U >> (ulong)(((uint)uVar13 & 3) << 3) ^ 0xfd;
  }
  uVar3 = uVar7;
  if (uVar7 <= uVar12) {
    uVar3 = uVar12;
  }
  if (uVar3 < 0xfe) {
    uVar3 = 0xfd;
  }
  uVar14 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  uVar2 = *(long *)(lVar19 + 0x40) + uVar14;
  sVar1 = uVar13 + (uVar14 + (uVar4 + (uVar2 & (uVar14 ^ 0xffffffffffffffff)) + 8 &
                             0xfffffffffffffff8) + 8 & (uVar14 ^ 0xffffffffffffffff)) + 1;
  uVar12 = (uint)sVar1;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar18 = 0;
  }
  else if (uVar12 < 4) {
    uVar16 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar12 << 3 & 0x1f)) >>
             (ulong)(uVar12 << 3 & 0x1f)) + 1;
    bVar18 = 2;
    if (0xffff < uVar16) {
      bVar18 = 4;
    }
    if (uVar16 < 0x100) {
      bVar18 = 1 < uVar16;
    }
  }
  else {
    bVar18 = 1;
  }
  uVar16 = (uint)param_2;
  if (uVar3 < uVar16) {
    uVar16 = uVar16 + ~uVar3;
    if (uVar12 < 4) {
      iVar17 = (uVar16 >> (ulong)(uVar12 << 3 & 0x1f)) + 1;
      if (uVar12 != 0) {
        uVar7 = uVar16 & (-1 << (ulong)(uVar12 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar8 = (undefined2)uVar7;
        if (uVar12 == 3) {
          *(undefined2 *)param_1 = uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar7 >> 0x10);
        }
        else if (uVar12 == 2) {
          *(undefined2 *)param_1 = uVar8;
        }
        else {
          *(char *)param_1 = (char)uVar16;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = uVar16;
      iVar17 = 1;
    }
    if (bVar18 < 2) {
      if (bVar18 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar17;
      }
    }
    else if (bVar18 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar17;
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
    if (uVar16 != 0) {
      if (uVar7 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010079c898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 0x38))(param_1,param_2,uVar7,lVar10);
        return;
      }
      puVar15 = (uint *)(uVar2 + (long)param_1 & ~uVar14);
      if (uVar16 < 0xfe) {
        *(char *)((long)puVar15 + uVar4) = -(char)param_2;
      }
      else {
        uVar7 = (int)uVar4 + 1;
        uVar12 = 0xffffffff;
        if (uVar7 < 4) {
          uVar12 = ~(-1 << (ulong)(uVar7 * 8 & 0x1f));
        }
        if (uVar7 != 0) {
          uVar12 = uVar12 & uVar16 - 0xfe;
          uVar3 = 4;
          if (uVar7 < 4) {
            uVar3 = uVar7;
          }
          _bzero(puVar15,(ulong)uVar7);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)puVar15 = (char)uVar12;
            }
            else {
              *(short *)puVar15 = (short)uVar12;
            }
          }
          else if (uVar3 == 3) {
            *(short *)puVar15 = (short)uVar12;
            *(char *)((long)puVar15 + 2) = (char)(uVar12 >> 0x10);
          }
          else {
            *puVar15 = uVar12;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10079c99c | thunk_FUN_10079e4a0 */

void thunk_FUN_10079e4a0(void)

{
  FUN_10079e4a0();
  return;
}



/* Address: 0x10079c9a0 | thunk_FUN_10079e530 */

void thunk_FUN_10079e530(void)

{
  FUN_10079e530();
  return;
}



/* Address: 0x10079c9a4 | thunk_FUN_10079e6ec */

void thunk_FUN_10079e6ec(void)

{
  FUN_10079e6ec();
  return;
}



/* Address: 0x10079c9a8 | thunk_FUN_10079e800 */

void thunk_FUN_10079e800(void)

{
  FUN_10079e800();
  return;
}



/* Address: 0x10079c9ac | thunk_FUN_10079e984 */

void thunk_FUN_10079e984(void)

{
  FUN_10079e984();
  return;
}



/* Address: 0x10079c9b0 | thunk_FUN_10079ebb8 */

void thunk_FUN_10079ebb8(void)

{
  FUN_10079ebb8();
  return;
}



/* Address: 0x10079c9b4 | thunk_FUN_10079ed3c */

void thunk_FUN_10079ed3c(void)

{
  FUN_10079ed3c();
  return;
}



/* Address: 0x10079c9b8 | thunk_FUN_10079ef70 */

void thunk_FUN_10079ef70(void)

{
  FUN_10079ef70();
  return;
}



/* Address: 0x10079c9bc | thunk_FUN_10079f0dc */

void thunk_FUN_10079f0dc(void)

{
  FUN_10079f0dc();
  return;
}



/* Address: 0x10079c9c0 | thunk_FUN_10079f2cc */

void thunk_FUN_10079f2cc(void)

{
  FUN_10079f2cc();
  return;
}



/* Address: 0x10079c9c4 | thunk_FUN_10079f39c */

void thunk_FUN_10079f39c(void)

{
  FUN_10079f39c();
  return;
}



/* Address: 0x10079c9c8 | FUN_10079c9c8 */

void FUN_10079c9c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c77ba8;
    local_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
  }
  return;
}



/* Address: 0x10079ca4c | FUN_10079ca4c */

long * FUN_10079ca4c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar5 + 0x40);
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && (lVar7 + 0x1fU & 0xfffffffffffffff8) + 8 < 0x19)
  {
    (**(code **)(lVar5 + 0x10))(param_1);
    puVar8 = (undefined8 *)((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + lVar7 + 7 & 0xfffffffffffffff8);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = *(undefined1 *)(puVar6 + 2);
    FUN_1001eebf0(uVar2,uVar3,uVar4);
    *puVar8 = uVar2;
    puVar8[1] = uVar3;
    *(undefined1 *)(puVar8 + 2) = uVar4;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1f & 0xfffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar7 + 0x1f & 0xfffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10079cb38 | FUN_10079cb38 */

void FUN_10079cb38(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  FUN_1001eebe0(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  return;
}



/* Address: 0x10079cb7c | FUN_10079cb7c */

long FUN_10079cb7c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x10))();
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar6 = lVar4 + param_1;
  lVar4 = lVar4 + param_2;
  puVar7 = (undefined8 *)(lVar6 + 7U & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = *(undefined1 *)(puVar5 + 2);
  FUN_1001eebf0(uVar1,uVar2,uVar3);
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  *(undefined1 *)(puVar7 + 2) = uVar3;
  *(undefined8 *)(lVar6 + 0x1fU & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar4 + 0x1fU & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10079cc1c | FUN_10079cc1c */

long FUN_10079cc1c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar9 + 0x18))();
  lVar7 = *(long *)(lVar9 + 0x40);
  lVar9 = lVar7 + param_1;
  lVar7 = lVar7 + param_2;
  puVar10 = (undefined8 *)(lVar9 + 7U & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar7 + 7U & 0xfffffffffffffff8);
  uVar1 = *puVar8;
  uVar3 = puVar8[1];
  uVar5 = *(undefined1 *)(puVar8 + 2);
  FUN_1001eebf0(uVar1,uVar3,uVar5);
  uVar2 = *puVar10;
  uVar4 = puVar10[1];
  *puVar10 = uVar1;
  puVar10[1] = uVar3;
  uVar6 = *(undefined1 *)(puVar10 + 2);
  *(undefined1 *)(puVar10 + 2) = uVar5;
  FUN_1001eebe0(uVar2,uVar4,uVar6);
  *(undefined8 *)(lVar9 + 0x1fU & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar7 + 0x1fU & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10079ccc8 | FUN_10079ccc8 */

long FUN_10079ccc8(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar3 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar4 + 2);
  uVar6 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar6;
  *(undefined1 *)(puVar3 + 2) = uVar1;
  *(undefined8 *)(lVar5 + 0x1fU & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar2 + 0x1fU & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10079cd48 | FUN_10079cd48 */

long FUN_10079cd48(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x28))();
  lVar5 = *(long *)(lVar8 + 0x40);
  lVar8 = lVar5 + param_1;
  lVar5 = lVar5 + param_2;
  puVar6 = (undefined8 *)(lVar8 + 7U & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined1 *)(puVar7 + 2);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar9 = *puVar7;
  puVar6[1] = puVar7[1];
  *puVar6 = uVar9;
  uVar4 = *(undefined1 *)(puVar6 + 2);
  *(undefined1 *)(puVar6 + 2) = uVar3;
  FUN_1001eebe0(uVar1,uVar2,uVar4);
  *(undefined8 *)(lVar8 + 0x1fU & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar5 + 0x1fU & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10079cdd4 | FUN_10079cdd4 */

uint * FUN_10079cdd4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar7;
  if (uVar7 < 0xff) {
    uVar3 = 0xfe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (*(long *)(lVar8 + 0x40) + 0x1fU & 0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar6 = (uint)uVar2;
    uVar9 = 2;
    uVar5 = uVar9;
    if (uVar2 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar9 = 4;
    }
    if (uVar5 < 0x100) {
      uVar9 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar9;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_10079ce64;
    }
    else if (uVar4 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_10079ce64:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar3 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_10079ce64;
    }
  }
  if (0xfd < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010079ce9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = (uint)*(byte *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 0x10
                         );
  uVar3 = 0;
  if (1 < uVar7) {
    uVar3 = (uVar7 ^ 0xff) + 1;
  }
  return (uint *)(ulong)uVar3;
}



/* Address: 0x10079cec0 | FUN_10079cec0 */

void FUN_10079cec0(int *param_1,uint param_2,uint param_3,long param_4)

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
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0xff) {
    uVar2 = 0xfe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 0x1fU & 0xfffffffffffffff8) + 8;
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
      if (0xfd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010079cfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0xff) {
        *(char *)(puVar7 + 2) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar7 + 2) = 0;
        *puVar7 = (ulong)(param_2 - 0xff);
        puVar7[1] = 0;
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



/* Address: 0x10079d024 | FUN_10079d024 */

void FUN_10079d024(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10079d030 | FUN_10079d030 */

void FUN_10079d030(undefined8 param_1)

{
  FUN_10079d040(param_1,0x45000000);
  return;
}



/* Address: 0x10079d038 | FUN_10079d038 */

void FUN_10079d038(undefined8 param_1)

{
  FUN_10079d040(param_1,0x65000000);
  return;
}



/* Address: 0x10079d040 | FUN_10079d040 */

void FUN_10079d040(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[1],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata0(param_2,uVar1);
  return;
}



/* Address: 0x10079d080 | FUN_10079d080 */

void FUN_10079d080(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  uVar3 = uVar1;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar1,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    local_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &DAT_100c77ba8;
    local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    lVar2 = 0x13f;
    FUN_100797c6c(0x13f,uVar4,uVar1);
    if (uVar4 < 0x40) {
      local_38 = *(long *)(lVar2 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,4,&local_50,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x10079d148 | FUN_10079d148 */

long * FUN_10079d148(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar7 + -8);
  lVar18 = *(long *)(lVar20 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar19 = *(long *)(lVar8 + -8);
  uVar13 = (ulong)*(uint *)(lVar19 + 0x50) & 0xf8 | 7;
  uVar14 = *(ulong *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    uVar14 = uVar14 + 1;
  }
  uVar1 = uVar14;
  if (uVar14 < 9) {
    uVar1 = 8;
  }
  uVar11 = *(uint *)(lVar19 + 0x50) | *(uint *)(lVar20 + 0x50);
  if ((uVar11 & 0x1000f8) != 0 ||
      (-((lVar18 + 0x1fU & 0xfffffffffffffff8) + uVar13) - 9 | uVar13) - (uVar1 + 1) <
      0xffffffffffffffe7) {
    uVar14 = (ulong)(uVar11 & 0xf8 | 7);
    lVar7 = *param_2;
    *param_1 = lVar7;
    _swift_retain();
    return (long *)(lVar7 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar7);
  puVar15 = (undefined8 *)((long)param_1 + lVar18 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)param_2 + lVar18 + 7 & 0xfffffffffffffff8);
  uVar2 = *puVar10;
  uVar3 = puVar10[1];
  uVar4 = *(undefined1 *)(puVar10 + 2);
  FUN_1001eebf0(uVar2,uVar3,uVar4);
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  *(undefined1 *)(puVar15 + 2) = uVar4;
  *(undefined8 *)((long)param_1 + lVar18 + 0x1f & 0xfffffffffffffff8) =
       *(undefined8 *)((long)param_2 + lVar18 + 0x1f & 0xfffffffffffffff8);
  puVar17 = (uint *)((long)param_2 + lVar18 + 0x27 & 0xfffffffffffffff8);
  bVar5 = *(byte *)((long)puVar17 + uVar1);
  uVar11 = (uint)bVar5;
  if (1 < bVar5) {
    uVar16 = (uint)uVar1;
    uVar12 = 4;
    if (uVar16 < 4) {
      uVar12 = uVar16;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_10079d344;
      uVar12 = (uint)(byte)*puVar17;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*puVar17;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*puVar17;
    }
    else {
      uVar12 = *puVar17;
    }
    uVar11 = uVar12 | bVar5 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 2;
  }
LAB_10079d344:
  puVar10 = (undefined8 *)((long)param_1 + lVar18 + 0x27 & 0xfffffffffffffff8);
  if (uVar11 == 1) {
    *puVar10 = *(undefined8 *)puVar17;
    *(undefined1 *)((long)puVar10 + uVar1) = 1;
  }
  else if (uVar11 == 0) {
    puVar9 = puVar17;
    (**(code **)(lVar19 + 0x30))(puVar17,1,lVar8);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar10,puVar17,lVar8);
      (**(code **)(lVar19 + 0x38))(puVar10,0,1,lVar8);
    }
    else {
      _memcpy(puVar10,puVar17,uVar14);
    }
    *(undefined1 *)((long)puVar10 + uVar1) = 0;
  }
  else {
    _memcpy(puVar10,puVar17,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079d400 | FUN_10079d400 */

void FUN_10079d400(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar5 + -8);
  (**(code **)(lVar13 + 8))(param_1,lVar5);
  param_1 = *(long *)(lVar13 + 0x40) + param_1;
  puVar8 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  FUN_1001eebe0(*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 2));
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xf8 | 7;
  puVar12 = (uint *)((param_1 + 0x1fU & 0xfffffffffffffff8) + uVar9 + 8 &
                    (uVar9 ^ 0xffffffffffffffff));
  uVar9 = *(ulong *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  bVar3 = *(byte *)((long)puVar12 + uVar9);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar7 = (uint)uVar9;
    uVar10 = 4;
    if (uVar7 < 4) {
      uVar10 = uVar7;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) {
        return;
      }
      uVar11 = (uint)(byte)*puVar12;
    }
    else if (uVar10 == 2) {
      uVar11 = (uint)(ushort)*puVar12;
    }
    else if (uVar10 == 3) {
      uVar11 = (uint)(uint3)*puVar12;
    }
    else {
      uVar11 = *puVar12;
    }
    uVar10 = uVar11 | bVar3 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
  if ((uVar10 == 0) &&
     (puVar6 = puVar12, (**(code **)(lVar13 + 0x30))(puVar12,1,lVar5), (int)puVar6 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010079d58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 8))(puVar12,lVar5);
    return;
  }
  return;
}



/* Address: 0x10079d590 | FUN_10079d590 */

long FUN_10079d590(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar17 = *(long *)(lVar9 + -8);
  (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar9);
  lVar17 = *(long *)(lVar17 + 0x40);
  lVar9 = lVar17 + param_1;
  lVar17 = lVar17 + param_2;
  puVar19 = (undefined8 *)(lVar9 + 7U & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)(lVar17 + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = *(undefined1 *)(puVar11 + 2);
  FUN_1001eebf0(uVar3,uVar5,uVar6);
  *puVar19 = uVar3;
  puVar19[1] = uVar5;
  *(undefined1 *)(puVar19 + 2) = uVar6;
  puVar11 = (undefined8 *)(lVar9 + 0x1fU & 0xfffffffffffffff8);
  puVar19 = (undefined8 *)(lVar17 + 0x1fU & 0xfffffffffffffff8);
  *puVar11 = *puVar19;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar2,puVar8,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar17 + -8);
  uVar12 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8;
  lVar9 = uVar12 + 0xf;
  uVar12 = (uVar12 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar11 = (undefined8 *)(lVar9 + (long)puVar11 & uVar12);
  puVar15 = (uint *)(lVar9 + (long)puVar19 & uVar12);
  uVar12 = *(ulong *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = uVar12;
  if (uVar12 < 9) {
    uVar1 = 8;
  }
  bVar7 = *(byte *)((long)puVar15 + uVar1);
  uVar13 = (uint)bVar7;
  if (1 < bVar7) {
    uVar16 = (uint)uVar1;
    uVar14 = 4;
    if (uVar16 < 4) {
      uVar14 = uVar16;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_10079d71c;
      uVar14 = (uint)(byte)*puVar15;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*puVar15;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*puVar15;
    }
    else {
      uVar14 = *puVar15;
    }
    uVar13 = uVar14 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_10079d71c:
  if (uVar13 == 1) {
    *puVar11 = *(undefined8 *)puVar15;
    *(undefined1 *)((long)puVar11 + uVar1) = 1;
  }
  else if (uVar13 == 0) {
    puVar10 = puVar15;
    (**(code **)(lVar18 + 0x30))(puVar15,1,lVar17);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar11,puVar15,lVar17);
      (**(code **)(lVar18 + 0x38))(puVar11,0,1,lVar17);
    }
    else {
      _memcpy(puVar11,puVar15,uVar12);
    }
    *(undefined1 *)((long)puVar11 + uVar1) = 0;
  }
  else {
    _memcpy(puVar11,puVar15,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079d7cc | FUN_10079d7cc */

long FUN_10079d7cc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar21 = *(long *)(lVar12 + -8);
  (**(code **)(lVar21 + 0x18))(param_1,param_2,lVar12);
  lVar21 = *(long *)(lVar21 + 0x40);
  lVar12 = lVar21 + param_1;
  lVar21 = lVar21 + param_2;
  puVar23 = (undefined8 *)(lVar12 + 7U & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)(lVar21 + 7U & 0xfffffffffffffff8);
  uVar3 = *puVar14;
  uVar6 = puVar14[1];
  uVar8 = *(undefined1 *)(puVar14 + 2);
  FUN_1001eebf0(uVar3,uVar6,uVar8);
  uVar4 = *puVar23;
  uVar7 = puVar23[1];
  *puVar23 = uVar3;
  puVar23[1] = uVar6;
  uVar9 = *(undefined1 *)(puVar23 + 2);
  *(undefined1 *)(puVar23 + 2) = uVar8;
  FUN_1001eebe0(uVar4,uVar7,uVar9);
  puVar14 = (undefined8 *)(lVar12 + 0x1fU & 0xfffffffffffffff8);
  puVar23 = (undefined8 *)(lVar21 + 0x1fU & 0xfffffffffffffff8);
  *puVar14 = *puVar23;
  lVar21 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar2,puVar11,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar22 = *(long *)(lVar21 + -8);
  uVar15 = (ulong)*(uint *)(lVar22 + 0x50) & 0xf8;
  lVar12 = uVar15 + 0xf;
  uVar15 = (uVar15 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar18 = (uint *)(lVar12 + (long)puVar14 & uVar15);
  puVar19 = (uint *)(lVar12 + (long)puVar23 & uVar15);
  if (puVar18 == puVar19) {
    return param_1;
  }
  uVar15 = *(ulong *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    uVar15 = uVar15 + 1;
  }
  uVar1 = uVar15;
  if (uVar15 < 9) {
    uVar1 = 8;
  }
  uVar20 = (uint)uVar1;
  bVar10 = *(byte *)((long)puVar18 + uVar1);
  uVar16 = (uint)bVar10;
  if (bVar10 < 2) {
LAB_10079d970:
    if ((uVar16 == 0) &&
       (puVar13 = puVar18, (**(code **)(lVar22 + 0x30))(puVar18,1,lVar21), (int)puVar13 == 0)) {
      (**(code **)(lVar22 + 8))(puVar18,lVar21);
    }
  }
  else {
    uVar16 = 4;
    if (uVar20 < 4) {
      uVar16 = uVar20;
    }
    if (1 < (int)uVar16) {
      if (uVar16 == 2) {
        uVar17 = (uint)(ushort)*puVar18;
      }
      else if (uVar16 == 3) {
        uVar17 = (uint)(uint3)*puVar18;
      }
      else {
        uVar17 = *puVar18;
      }
LAB_10079d958:
      uVar16 = uVar17 | bVar10 - 2 << (ulong)(uVar20 << 3 & 0x1f);
      if (3 < uVar20) {
        uVar16 = uVar17;
      }
      uVar16 = uVar16 + 2;
      goto LAB_10079d970;
    }
    if (uVar16 != 0) {
      uVar17 = (uint)(byte)*puVar18;
      goto LAB_10079d958;
    }
  }
  bVar10 = *(byte *)((long)puVar19 + uVar1);
  uVar16 = (uint)bVar10;
  if (1 < bVar10) {
    uVar17 = 4;
    if (uVar20 < 4) {
      uVar17 = uVar20;
    }
    if ((int)uVar17 < 2) {
      if (uVar17 == 0) goto LAB_10079da0c;
      uVar17 = (uint)(byte)*puVar19;
    }
    else if (uVar17 == 2) {
      uVar17 = (uint)(ushort)*puVar19;
    }
    else if (uVar17 == 3) {
      uVar17 = (uint)(uint3)*puVar19;
    }
    else {
      uVar17 = *puVar19;
    }
    uVar16 = uVar17 | bVar10 - 2 << (ulong)(uVar20 << 3 & 0x1f);
    if (3 < uVar20) {
      uVar16 = uVar17;
    }
    uVar16 = uVar16 + 2;
  }
LAB_10079da0c:
  if (uVar16 == 1) {
    *(undefined8 *)puVar18 = *(undefined8 *)puVar19;
    *(byte *)((long)puVar18 + uVar1) = 1;
  }
  else if (uVar16 == 0) {
    puVar13 = puVar19;
    (**(code **)(lVar22 + 0x30))(puVar19,1,lVar21);
    if ((int)puVar13 == 0) {
      (**(code **)(lVar22 + 0x10))(puVar18,puVar19,lVar21);
      (**(code **)(lVar22 + 0x38))(puVar18,0,1,lVar21);
    }
    else {
      _memcpy(puVar18,puVar19,uVar15);
    }
    *(byte *)((long)puVar18 + uVar1) = 0;
  }
  else {
    _memcpy(puVar18,puVar19,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079dabc | FUN_10079dabc */

long FUN_10079dabc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar7 + -8);
  (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar7);
  lVar16 = *(long *)(lVar16 + 0x40);
  lVar7 = lVar16 + param_1;
  lVar16 = lVar16 + param_2;
  puVar12 = (undefined8 *)(lVar7 + 7U & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined1 *)(puVar13 + 2);
  uVar18 = *puVar13;
  puVar12[1] = puVar13[1];
  *puVar12 = uVar18;
  *(undefined1 *)(puVar12 + 2) = uVar4;
  puVar12 = (undefined8 *)(lVar7 + 0x1fU & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar16 + 0x1fU & 0xfffffffffffffff8);
  *puVar12 = *puVar13;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar16 + -8);
  uVar9 = (ulong)*(uint *)(lVar17 + 0x50) & 0xf8;
  lVar7 = uVar9 + 0xf;
  uVar9 = (uVar9 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar12 = (undefined8 *)(lVar7 + (long)puVar12 & uVar9);
  puVar14 = (uint *)(lVar7 + (long)puVar13 & uVar9);
  uVar9 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  uVar1 = uVar9;
  if (uVar9 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)puVar14 + uVar1);
  uVar10 = (uint)bVar5;
  if (1 < bVar5) {
    uVar15 = (uint)uVar1;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_10079dc34;
      uVar11 = (uint)(byte)*puVar14;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar14;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar14;
    }
    else {
      uVar11 = *puVar14;
    }
    uVar10 = uVar11 | bVar5 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_10079dc34:
  if (uVar10 == 1) {
    *puVar12 = *(undefined8 *)puVar14;
    *(undefined1 *)((long)puVar12 + uVar1) = 1;
  }
  else if (uVar10 == 0) {
    puVar8 = puVar14;
    (**(code **)(lVar17 + 0x30))(puVar14,1,lVar16);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar17 + 0x20))(puVar12,puVar14,lVar16);
      (**(code **)(lVar17 + 0x38))(puVar12,0,1,lVar16);
    }
    else {
      _memcpy(puVar12,puVar14,uVar9);
    }
    *(undefined1 *)((long)puVar12 + uVar1) = 0;
  }
  else {
    _memcpy(puVar12,puVar14,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079dce0 | FUN_10079dce0 */

long FUN_10079dce0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined *puVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar10 + -8);
  (**(code **)(lVar20 + 0x28))(param_1,param_2,lVar10);
  lVar20 = *(long *)(lVar20 + 0x40);
  lVar10 = lVar20 + param_1;
  lVar20 = lVar20 + param_2;
  puVar12 = (undefined8 *)(lVar10 + 7U & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)(lVar20 + 7U & 0xfffffffffffffff8);
  uVar6 = *(undefined1 *)(puVar16 + 2);
  uVar3 = *puVar12;
  uVar5 = puVar12[1];
  uVar22 = *puVar16;
  puVar12[1] = puVar16[1];
  *puVar12 = uVar22;
  uVar7 = *(undefined1 *)(puVar12 + 2);
  *(undefined1 *)(puVar12 + 2) = uVar6;
  FUN_1001eebe0(uVar3,uVar5,uVar7);
  puVar12 = (undefined8 *)(lVar10 + 0x1fU & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)(lVar20 + 0x1fU & 0xfffffffffffffff8);
  *puVar12 = *puVar16;
  lVar20 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar2,puVar9,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar21 = *(long *)(lVar20 + -8);
  uVar13 = (ulong)*(uint *)(lVar21 + 0x50) & 0xf8;
  lVar10 = uVar13 + 0xf;
  uVar13 = (uVar13 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar17 = (uint *)(lVar10 + (long)puVar12 & uVar13);
  puVar18 = (uint *)(lVar10 + (long)puVar16 & uVar13);
  if (puVar17 == puVar18) {
    return param_1;
  }
  uVar13 = *(ulong *)(lVar21 + 0x40);
  if (*(int *)(lVar21 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = uVar13;
  if (uVar13 < 9) {
    uVar1 = 8;
  }
  uVar19 = (uint)uVar1;
  bVar8 = *(byte *)((long)puVar17 + uVar1);
  uVar14 = (uint)bVar8;
  if (bVar8 < 2) {
LAB_10079de70:
    if ((uVar14 == 0) &&
       (puVar11 = puVar17, (**(code **)(lVar21 + 0x30))(puVar17,1,lVar20), (int)puVar11 == 0)) {
      (**(code **)(lVar21 + 8))(puVar17,lVar20);
    }
  }
  else {
    uVar14 = 4;
    if (uVar19 < 4) {
      uVar14 = uVar19;
    }
    if (1 < (int)uVar14) {
      if (uVar14 == 2) {
        uVar15 = (uint)(ushort)*puVar17;
      }
      else if (uVar14 == 3) {
        uVar15 = (uint)(uint3)*puVar17;
      }
      else {
        uVar15 = *puVar17;
      }
LAB_10079de58:
      uVar14 = uVar15 | bVar8 - 2 << (ulong)(uVar19 << 3 & 0x1f);
      if (3 < uVar19) {
        uVar14 = uVar15;
      }
      uVar14 = uVar14 + 2;
      goto LAB_10079de70;
    }
    if (uVar14 != 0) {
      uVar15 = (uint)(byte)*puVar17;
      goto LAB_10079de58;
    }
  }
  bVar8 = *(byte *)((long)puVar18 + uVar1);
  uVar14 = (uint)bVar8;
  if (1 < bVar8) {
    uVar15 = 4;
    if (uVar19 < 4) {
      uVar15 = uVar19;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto LAB_10079df0c;
      uVar15 = (uint)(byte)*puVar18;
    }
    else if (uVar15 == 2) {
      uVar15 = (uint)(ushort)*puVar18;
    }
    else if (uVar15 == 3) {
      uVar15 = (uint)(uint3)*puVar18;
    }
    else {
      uVar15 = *puVar18;
    }
    uVar14 = uVar15 | bVar8 - 2 << (ulong)(uVar19 << 3 & 0x1f);
    if (3 < uVar19) {
      uVar14 = uVar15;
    }
    uVar14 = uVar14 + 2;
  }
LAB_10079df0c:
  if (uVar14 == 1) {
    *(undefined8 *)puVar17 = *(undefined8 *)puVar18;
    *(byte *)((long)puVar17 + uVar1) = 1;
  }
  else if (uVar14 == 0) {
    puVar11 = puVar18;
    (**(code **)(lVar21 + 0x30))(puVar18,1,lVar20);
    if ((int)puVar11 == 0) {
      (**(code **)(lVar21 + 0x20))(puVar17,puVar18,lVar20);
      (**(code **)(lVar21 + 0x38))(puVar17,0,1,lVar20);
    }
    else {
      _memcpy(puVar17,puVar18,uVar13);
    }
    *(byte *)((long)puVar17 + uVar1) = 0;
  }
  else {
    _memcpy(puVar17,puVar18,uVar1 + 1);
  }
  return param_1;
}



/* Address: 0x10079dfb8 | FUN_10079dfb8 */

uint * FUN_10079dfb8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar13 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar7 + -8);
  uVar9 = *(ulong *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar8 = 0xfd;
  if ((uint)uVar9 < 4) {
    uVar8 = 1U >> (ulong)(((uint)uVar9 & 3) << 3) ^ 0xfd;
  }
  uVar1 = uVar4;
  if (uVar4 <= uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 0xff) {
    uVar1 = 0xfe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10079e12c;
  uVar11 = (ulong)*(uint *)(lVar7 + 0x50) & 0xf8 | 7;
  uVar9 = uVar9 + ((*(long *)(lVar13 + 0x40) + 0x1fU & 0xfffffffffffffff8) + uVar11 + 8 &
                  (uVar11 ^ 0xffffffffffffffff)) + 1;
  uVar10 = (uint)uVar9;
  uVar8 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar12 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar8 & 0x1f)) >> (ulong)(uVar8 & 0x1f)) + 1;
    if (uVar12 < 0x100) {
      if (uVar12 < 2) goto LAB_10079e12c;
      goto LAB_10079e0bc;
    }
    if (uVar12 >> 0x10 == 0) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar9);
    }
  }
  else {
LAB_10079e0bc:
    uVar12 = (uint)*(byte *)((long)param_1 + uVar9);
  }
  if (uVar12 != 0) {
    uVar4 = 0;
    if (uVar10 < 4) {
      uVar4 = uVar12 - 1 << (ulong)(uVar8 & 0x1f);
    }
    if (uVar10 != 0) {
      uVar8 = 4;
      if (uVar10 < 4) {
        uVar8 = uVar10;
      }
      if ((int)uVar8 < 3) {
        if (uVar8 == 1) {
          uVar9 = (ulong)(byte)*param_1;
        }
        else {
          uVar9 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar8 == 3) {
        uVar9 = (ulong)(uint3)*param_1;
      }
      else {
        uVar9 = (ulong)*param_1;
      }
    }
    return (uint *)(ulong)(uVar1 + ((uint)uVar9 | uVar4) + 1);
  }
LAB_10079e12c:
  if (uVar4 != uVar1) {
    uVar8 = (uint)*(byte *)(((long)param_1 + *(long *)(lVar13 + 0x40) + 7 & 0xfffffffffffffff8U) +
                           0x10);
    uVar4 = 0;
    if (1 < uVar8) {
      uVar4 = (uVar8 ^ 0xff) + 1;
    }
    return (uint *)(ulong)uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010079e158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x30))(param_1,uVar4,lVar6);
  return param_1;
}



/* Address: 0x10079e1dc | FUN_10079e1dc */

void FUN_10079e1dc(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 uVar7;
  byte bVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar20 = *(long *)(lVar10 + -8);
  uVar6 = *(uint *)(lVar20 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar4,puVar9,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar11 + -8);
  uVar14 = *(ulong *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar14 = uVar14 + 1;
  }
  if (uVar14 < 9) {
    uVar14 = 8;
  }
  uVar17 = 0xfd;
  if ((uint)uVar14 < 4) {
    uVar17 = 1U >> (ulong)(((uint)uVar14 & 3) << 3) ^ 0xfd;
  }
  uVar3 = uVar6;
  if (uVar6 <= uVar17) {
    uVar3 = uVar17;
  }
  if (uVar3 < 0xff) {
    uVar3 = 0xfe;
  }
  lVar12 = *(long *)(lVar20 + 0x40);
  uVar15 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  sVar2 = uVar14 + ((lVar12 + 0x1fU & 0xfffffffffffffff8) + uVar15 + 8 &
                   (uVar15 ^ 0xffffffffffffffff)) + 1;
  uVar19 = (uint)sVar2;
  uVar17 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar8 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar19 << 3 & 0x1f)) >> (ulong)(uVar19 << 3 & 0x1f)
            ) + 1;
    bVar16 = 2;
    if (0xffff < uVar1) {
      bVar16 = 4;
    }
    if (uVar1 < 0x100) {
      bVar16 = 1 < uVar1;
    }
    bVar8 = 1;
    if (uVar19 < 4) {
      bVar8 = bVar16;
    }
  }
  if (uVar3 < uVar17) {
    uVar17 = uVar17 + ~uVar3;
    if (uVar19 < 4) {
      iVar18 = (uVar17 >> (ulong)(uVar19 << 3 & 0x1f)) + 1;
      if (uVar19 != 0) {
        uVar6 = uVar17 & (-1 << (ulong)(uVar19 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar7 = (undefined2)uVar6;
        if (uVar19 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
        }
        else if (uVar19 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar17;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar17;
      iVar18 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar18;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar18;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar18;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar17 != 0) {
      if (uVar6 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010079e3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar20 + 0x38))(param_1,param_2,uVar6,lVar10);
        return;
      }
      puVar13 = (ulong *)((long)param_1 + lVar12 + 7 & 0xfffffffffffffff8);
      if (uVar17 < 0xff) {
        *(char *)(puVar13 + 2) = -(char)param_2;
      }
      else {
        *(undefined1 *)(puVar13 + 2) = 0;
        *puVar13 = (ulong)(uVar17 - 0xff);
        puVar13[1] = 0;
      }
    }
  }
  return;
}



/* Address: 0x10079e4a0 | FUN_10079e4a0 */

undefined1  [16] FUN_10079e4a0(long param_1)

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
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar3 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
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



/* Address: 0x10079e530 | FUN_10079e530 */

long * FUN_10079e530(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar1 = uVar8;
  if (uVar8 < 9) {
    uVar1 = 8;
  }
  if ((*(uint *)(lVar10 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar6 = *(uint *)(lVar10 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
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
      if (uVar7 == 0) goto LAB_10079e638;
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
LAB_10079e638:
  if (uVar6 == 1) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar6 != 0) {
      plVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar5;
    }
    puVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar8);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x10079e6ec | FUN_10079e6ec */

void FUN_10079e6ec(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
  if ((uVar6 == 0) &&
     (puVar3 = param_1, (**(code **)(lVar8 + 0x30))(param_1,1,lVar2), (int)puVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010079e7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 8))(param_1,lVar2);
    return;
  }
  return;
}



/* Address: 0x10079e800 | FUN_10079e800 */

undefined8 * FUN_10079e800(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar1 = uVar8;
  if (uVar8 < 9) {
    uVar1 = 8;
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
      if (uVar7 == 0) goto LAB_10079e8d0;
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
LAB_10079e8d0:
  if (uVar6 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar6 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar5;
    }
    puVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar8);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x10079e984 | FUN_10079e984 */

uint * FUN_10079e984(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  uVar8 = (uint)uVar1;
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_10079ea60:
    if ((uVar5 == 0) &&
       (puVar4 = param_1, (**(code **)(lVar9 + 0x30))(param_1,1,lVar3), (int)puVar4 == 0)) {
      (**(code **)(lVar9 + 8))(param_1,lVar3);
    }
  }
  else {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if (1 < (int)uVar5) {
      if (uVar5 == 2) {
        uVar6 = (uint)(ushort)*param_1;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
LAB_10079ea48:
      uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
      goto LAB_10079ea60;
    }
    if (uVar5 != 0) {
      uVar6 = (uint)(byte)*param_1;
      goto LAB_10079ea48;
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10079eafc;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10079eafc:
  if (uVar5 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar4;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x10079ebb8 | FUN_10079ebb8 */

undefined8 * FUN_10079ebb8(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar1 = uVar8;
  if (uVar8 < 9) {
    uVar1 = 8;
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
      if (uVar7 == 0) goto LAB_10079ec88;
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
LAB_10079ec88:
  if (uVar6 == 1) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar6 != 0) {
      puVar5 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar5;
    }
    puVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar8);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x10079ed3c | FUN_10079ed3c */

uint * FUN_10079ed3c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar3 + -8);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = uVar7;
  if (uVar7 < 9) {
    uVar1 = 8;
  }
  uVar8 = (uint)uVar1;
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_10079ee18:
    if ((uVar5 == 0) &&
       (puVar4 = param_1, (**(code **)(lVar9 + 0x30))(param_1,1,lVar3), (int)puVar4 == 0)) {
      (**(code **)(lVar9 + 8))(param_1,lVar3);
    }
  }
  else {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if (1 < (int)uVar5) {
      if (uVar5 == 2) {
        uVar6 = (uint)(ushort)*param_1;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
LAB_10079ee00:
      uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
      goto LAB_10079ee18;
    }
    if (uVar5 != 0) {
      uVar6 = (uint)(byte)*param_1;
      goto LAB_10079ee00;
    }
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10079eeb4;
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
    uVar5 = uVar6 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10079eeb4:
  if (uVar5 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar4;
    }
    puVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar7);
    }
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x10079ef70 | FUN_10079ef70 */

int FUN_10079ef70(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar5 + -8) + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar1 = 0xfd;
  if ((uint)uVar6 < 4) {
    uVar1 = 1U >> (ulong)(((uint)uVar6 & 3) << 3) ^ 0xfd;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_10079f06c;
  uVar8 = uVar6 + 1;
  uVar7 = (uint)uVar8;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar1 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_10079f06c;
      goto LAB_10079eff8;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_10079eff8:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
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
    return uVar1 + ((uint)uVar8 | uVar2) + 1;
  }
LAB_10079f06c:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar6);
  if (uVar1 <= (*(byte *)((long)param_1 + uVar6) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x10079f0dc | FUN_10079f0dc */

void FUN_10079f0dc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar7 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar6 + -8) + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar3 = 0xfd;
  if ((uint)uVar7 < 4) {
    uVar3 = 1U >> (ulong)(((uint)uVar7 & 3) << 3) ^ 0xfd;
  }
  sVar2 = uVar7 + 1;
  uVar9 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar9 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar9 << 3 & 0x1f))
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
  else {
    bVar5 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
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
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar10;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar10;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x10079f2cc | FUN_10079f2cc */

uint FUN_10079f2cc(uint *param_1,long param_2)

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
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (*(int *)(*(long *)(lVar3 + -8) + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
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


