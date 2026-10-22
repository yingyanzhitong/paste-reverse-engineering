/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100695d20 | FUN_100695d20 */

void FUN_100695d20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar2 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,uVar1,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x100695dc0 | FUN_100695dc0 */

long * FUN_100695dc0(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && *(ulong *)(lVar4 + 0x40) < 0x19) &&
      (*(uint *)(lVar4 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100695e80 | FUN_100695e80 */

void FUN_100695e80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
                    /* WARNING: Could not recover jumptable at 0x000100695eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}



/* Address: 0x100695ef0 | FUN_100695ef0 */

undefined8 FUN_100695ef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x100695f74 | FUN_100695f74 */

undefined8 FUN_100695f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x100695ff8 | FUN_100695ff8 */

undefined8 FUN_100695ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x10069607c | FUN_10069607c */

undefined8 FUN_10069607c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x100696100 | FUN_100696100 */

uint * FUN_100696100(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar5,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1006961ec;
  uVar9 = *(ulong *)(lVar7 + 0x40);
  uVar8 = (uint)uVar9;
  uVar4 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar10 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (0xff < uVar10) {
      if (uVar10 >> 0x10 == 0) {
        uVar10 = (uint)*(ushort *)((long)param_1 + uVar9);
      }
      else {
        uVar10 = *(uint *)((long)param_1 + uVar9);
      }
      goto LAB_100696184;
    }
    if (1 < uVar10) goto LAB_100696180;
  }
  else {
LAB_100696180:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar9);
LAB_100696184:
    if (uVar10 != 0) {
      uVar1 = 0;
      if (uVar8 < 4) {
        uVar1 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
      }
      if (uVar8 != 0) {
        uVar4 = 4;
        if (uVar8 < 4) {
          uVar4 = uVar8;
        }
        if ((int)uVar4 < 3) {
          if (uVar4 == 1) {
            uVar9 = (ulong)(byte)*param_1;
          }
          else {
            uVar9 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar4 == 3) {
          uVar9 = (ulong)(uint3)*param_1;
        }
        else {
          uVar9 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + ((uint)uVar9 | uVar1) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1006961ec:
                    /* WARNING: Could not recover jumptable at 0x000100696200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(param_1,uVar3,lVar6);
  return param_1;
}



/* Address: 0x100696264 | FUN_100696264 */

void FUN_100696264(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar4,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  sVar8 = *(size_t *)(lVar6 + 0x40);
  uVar7 = (uint)sVar8;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar11 = 0;
  }
  else if (uVar7 < 4) {
    uVar9 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f))
            + 1;
    bVar11 = 2;
    if (0xffff < uVar9) {
      bVar11 = 4;
    }
    if (uVar9 < 0x100) {
      bVar11 = 1 < uVar9;
    }
  }
  else {
    bVar11 = 1;
  }
  uVar9 = (uint)param_2;
  if (uVar2 < uVar9) {
    uVar9 = uVar9 + ~uVar2;
    if (uVar7 < 4) {
      iVar10 = (uVar9 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = uVar9 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar8);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar9;
        }
      }
    }
    else {
      _bzero(param_1,sVar8);
      *param_1 = uVar9;
      iVar10 = 1;
    }
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(char *)((long)param_1 + sVar8) = (char)iVar10;
      }
    }
    else if (bVar11 == 2) {
      *(short *)((long)param_1 + sVar8) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar8) = iVar10;
    }
  }
  else {
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(undefined1 *)((long)param_1 + sVar8) = 0;
      }
    }
    else if (bVar11 == 2) {
      *(undefined2 *)((long)param_1 + sVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar8) = 0;
    }
    if (uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006963f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2,uVar2,lVar5);
      return;
    }
  }
  return;
}



/* Address: 0x100696458 | FUN_100696458 */

void FUN_100696458(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100696464 | FUN_100696464 */

void FUN_100696464(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100694860(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x100696484 | FUN_100696484 */

void FUN_100696484(void)

{
  FUN_100696464();
  return;
}



/* Address: 0x100696498 | FUN_100696498 */

void FUN_100696498(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
                    /* WARNING: Could not recover jumptable at 0x00010069650c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100696510 | FUN_100696510 */

void FUN_100696510(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
                    /* WARNING: Could not recover jumptable at 0x000100696588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))();
  return;
}



/* Address: 0x10069658c | FUN_10069658c */

void FUN_10069658c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar5 = *(long *)(param_3 + 0x20);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar5,lVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  _swift_getAssociatedConformanceWitness
            (lVar5,lVar2,uVar3,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar5 + 0x10))
            (param_1,&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),uVar3,lVar5);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return;
}



/* Address: 0x1006966a4 | FUN_1006966a4 */

void FUN_1006966a4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  
  lVar6 = *(long *)(param_2 + 0x20);
  lVar7 = *(long *)(param_2 + 0x10);
  uVar3 = 0xff;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar6,uVar3,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  lVar8 = *(long *)(lVar4 + -8);
  lVar11 = (long)&local_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_checkMetadataState(0,uVar3);
  lVar10 = lVar11 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar9 = lVar10 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                   0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar11,unaff_x20,lVar4);
  _swift_getAssociatedConformanceWitness
            (lVar6,lVar5,lVar4,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar6 + 0x18))(lVar10,lVar4,lVar6);
  Swift::RawRepresentable::_init();
  lVar4 = *(long *)(lVar7 + -8);
  lVar6 = lVar9;
  (**(code **)(lVar4 + 0x30))(lVar9,1,lVar7);
  if ((int)lVar6 != 1) {
    (**(code **)(*(long *)(param_2 + -8) + 8))(unaff_x20,param_2);
    (**(code **)(lVar4 + 0x20))(local_70,lVar9,lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100696860);
  (*pcVar1)();
}



/* Address: 0x100696860 | FUN_100696860 */

void FUN_100696860(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_4 + 0x10);
  local_78 = param_1;
  local_70 = param_2;
  uStack_68 = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar8 = auStack_80 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar10 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar8 - uVar6;
  lVar9 = lVar12 - uVar6;
  lVar11 = *(long *)(param_4 + 0x20);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar11,lVar3,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  _swift_getAssociatedConformanceWitness
            (lVar11,lVar3,uVar4,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar11 + 0x20))(lVar9,local_70,uStack_68,uVar4,lVar11);
  (**(code **)(lVar10 + 0x10))(lVar12,lVar9,lVar3);
  Swift::RawRepresentable::_init();
  lVar11 = *(long *)(lVar7 + -8);
  puVar5 = puVar8;
  (**(code **)(lVar11 + 0x30))(puVar8,1,lVar7);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar10 + 8))(lVar9,lVar3);
    (**(code **)(lVar11 + 0x20))(local_78,puVar8,lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006969fc);
  (*pcVar1)();
}



/* Address: 0x1006969fc | FUN_1006969fc */

void FUN_1006969fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = *(long *)(param_4 + 0x10);
  lVar2 = 0;
  local_68 = param_3;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar5 = *(long *)(param_4 + 0x20);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar5,lVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  _swift_getAssociatedConformanceWitness
            (lVar5,lVar2,uVar3,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar5 + 0x28))
            (auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,local_68,uVar3,lVar5);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Address: 0x100696b20 | FUN_100696b20 */

void FUN_100696b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar6 = *(long *)(param_5 + 0x10);
  local_80 = param_1;
  local_78 = param_3;
  uStack_70 = param_4;
  local_68 = param_2;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar11 = (long)&local_80 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar8 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar11 - uVar5;
  lVar9 = lVar7 - uVar5;
  lVar10 = *(long *)(param_5 + 0x20);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar3,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  _swift_getAssociatedConformanceWitness
            (lVar10,lVar3,uVar4,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar10 + 0x30))(lVar9,lVar7,local_78,uStack_70,uVar4,lVar10);
  (**(code **)(lVar8 + 0x10))(lVar7,lVar9,lVar3);
  Swift::RawRepresentable::_init();
  lVar7 = *(long *)(lVar6 + -8);
  lVar10 = lVar11;
  (**(code **)(lVar7 + 0x30))(lVar11,1,lVar6);
  if ((int)lVar10 != 1) {
    (**(code **)(lVar7 + 8))(local_68,lVar6);
    (**(code **)(lVar8 + 8))(lVar9,lVar3);
    (**(code **)(lVar7 + 0x20))(local_80,lVar11,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100696cec);
  (*pcVar1)();
}



/* Address: 0x100696cec | FUN_100696cec */

undefined1
FUN_100696cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  byte abStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined1 *local_a8;
  long local_a0;
  long local_98;
  byte *local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_6 + 0x10);
  local_b8 = param_1;
  local_80 = param_4;
  local_78 = param_5;
  local_70 = param_3;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 0x40);
  local_68 = *(undefined8 *)(param_6 + 0x18);
  lVar6 = 0;
  local_90 = abStack_c0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,local_68,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  local_88 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(abStack_c0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) - uVar10;
  lVar13 = lVar15 - uVar10;
  lVar9 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar6,"exchanged original ",0);
  local_a0 = *(long *)(lVar9 + -8);
  uVar10 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = lVar13 - uVar10;
  local_a8 = (undefined1 *)(local_98 - uVar10);
  pbVar17 = local_a8 + -uVar10;
  local_b0 = (long)*(int *)(lVar9 + 0x30);
  lVar16 = *(long *)(param_6 + 0x20);
  uVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar16,lVar6,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  Swift::RawRepresentable::_get_rawValue();
  pbVar4 = local_90;
  _swift_getAssociatedConformanceWitness
            (lVar16,lVar6,uVar7,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  puVar3 = local_a8;
  pbVar8 = pbVar17 + local_b0;
  (**(code **)(lVar16 + 0x38))(pbVar8,lVar13,lVar15,local_80,local_78,uVar7,lVar16);
  pcVar14 = *(code **)(local_88 + 8);
  local_78 = lVar6;
  (*pcVar14)(lVar13,lVar6);
  *pbVar17 = (byte)pbVar8 & 1;
  lVar6 = local_a0;
  pcVar12 = *(code **)(local_a0 + 0x10);
  (*pcVar12)(puVar3,pbVar17,lVar9);
  uVar1 = *puVar3;
  (*pcVar12)(local_98,pbVar17,lVar9);
  Swift::RawRepresentable::_init();
  lVar16 = *(long *)(lVar11 + -8);
  pbVar8 = pbVar4;
  (**(code **)(lVar16 + 0x30))(pbVar4,1,lVar11);
  if ((int)pbVar8 != 1) {
    iVar2 = *(int *)(lVar9 + 0x30);
    (**(code **)(lVar16 + 8))(local_70,lVar11);
    (**(code **)(lVar6 + 8))(pbVar17,lVar9);
    (**(code **)(lVar16 + 0x20))(local_b8,pbVar4,lVar11);
    (*pcVar14)(puVar3 + iVar2,local_78);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100696fb4);
  (*pcVar12)();
}



/* Address: 0x100696fb4 | FUN_100696fb4 */

undefined1
FUN_100696fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  byte abStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  byte *local_88;
  undefined8 local_80;
  code *local_78;
  long local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_7 + 0x10);
  local_c8 = param_1;
  local_a8 = param_2;
  local_80 = param_4;
  local_78 = (code *)param_5;
  local_70 = param_6;
  local_68 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40);
  local_b0 = *(undefined8 *)(param_7 + 0x18);
  lVar5 = 0;
  local_88 = abStack_d0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,local_b0,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  local_90 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)(abStack_d0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) - uVar10;
  lVar9 = lVar14 - uVar10;
  lVar6 = 0;
  local_c0 = lVar9;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar5,"exchanged original ",0);
  local_a0 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = lVar9 - uVar10;
  puVar16 = (undefined1 *)(local_98 - uVar10);
  pbVar13 = puVar16 + -uVar10;
  local_b8 = (long)*(int *)(lVar6 + 0x30);
  lVar15 = *(long *)(param_7 + 0x20);
  uVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar15,lVar5,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  Swift::RawRepresentable::_get_rawValue();
  _swift_getAssociatedConformanceWitness
            (lVar15,lVar5,uVar7,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  pbVar3 = local_88;
  lVar9 = local_c0;
  pbVar8 = pbVar13 + local_b8;
  (**(code **)(lVar15 + 0x40))(pbVar8,local_c0,lVar14,local_80,local_78,local_70,uVar7,lVar15);
  local_78 = *(code **)(local_90 + 8);
  local_70 = lVar5;
  (*local_78)(lVar9,lVar5);
  *pbVar13 = (byte)pbVar8 & 1;
  lVar9 = local_a0;
  pcVar12 = *(code **)(local_a0 + 0x10);
  (*pcVar12)(puVar16,pbVar13,lVar6);
  uVar1 = *puVar16;
  (*pcVar12)(local_98,pbVar13,lVar6);
  Swift::RawRepresentable::_init();
  lVar5 = *(long *)(lVar11 + -8);
  pbVar8 = pbVar3;
  (**(code **)(lVar5 + 0x30))(pbVar3,1,lVar11);
  if ((int)pbVar8 != 1) {
    iVar2 = *(int *)(lVar6 + 0x30);
    (**(code **)(lVar5 + 8))(local_68,lVar11);
    (**(code **)(lVar9 + 8))(pbVar13,lVar6);
    (**(code **)(lVar5 + 0x20))(local_c8,pbVar3,lVar11);
    (*local_78)(puVar16 + iVar2,local_70);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100697280);
  (*pcVar12)();
}



/* Address: 0x100697280 | FUN_100697280 */

undefined1
FUN_100697280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  byte abStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  byte *local_88;
  undefined8 local_80;
  code *local_78;
  long local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_7 + 0x10);
  local_c8 = param_1;
  local_a8 = param_2;
  local_80 = param_4;
  local_78 = (code *)param_5;
  local_70 = param_6;
  local_68 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40);
  local_b0 = *(undefined8 *)(param_7 + 0x18);
  lVar5 = 0;
  local_88 = abStack_d0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,local_b0,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  local_90 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)(abStack_d0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) - uVar10;
  lVar9 = lVar14 - uVar10;
  lVar6 = 0;
  local_c0 = lVar9;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar5,"exchanged original ",0);
  local_a0 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = lVar9 - uVar10;
  puVar16 = (undefined1 *)(local_98 - uVar10);
  pbVar13 = puVar16 + -uVar10;
  local_b8 = (long)*(int *)(lVar6 + 0x30);
  lVar15 = *(long *)(param_7 + 0x20);
  uVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar15,lVar5,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  Swift::RawRepresentable::_get_rawValue();
  Swift::RawRepresentable::_get_rawValue();
  _swift_getAssociatedConformanceWitness
            (lVar15,lVar5,uVar7,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  pbVar3 = local_88;
  lVar9 = local_c0;
  pbVar8 = pbVar13 + local_b8;
  (**(code **)(lVar15 + 0x50))(pbVar8,local_c0,lVar14,local_80,local_78,local_70,uVar7,lVar15);
  local_78 = *(code **)(local_90 + 8);
  local_70 = lVar5;
  (*local_78)(lVar9,lVar5);
  *pbVar13 = (byte)pbVar8 & 1;
  lVar9 = local_a0;
  pcVar12 = *(code **)(local_a0 + 0x10);
  (*pcVar12)(puVar16,pbVar13,lVar6);
  uVar1 = *puVar16;
  (*pcVar12)(local_98,pbVar13,lVar6);
  Swift::RawRepresentable::_init();
  lVar5 = *(long *)(lVar11 + -8);
  pbVar8 = pbVar3;
  (**(code **)(lVar5 + 0x30))(pbVar3,1,lVar11);
  if ((int)pbVar8 != 1) {
    iVar2 = *(int *)(lVar6 + 0x30);
    (**(code **)(lVar5 + 8))(local_68,lVar11);
    (**(code **)(lVar9 + 8))(pbVar13,lVar6);
    (**(code **)(lVar5 + 0x20))(local_c8,pbVar3,lVar11);
    (*local_78)(puVar16 + iVar2,local_70);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10069754c);
  (*pcVar12)();
}



/* Address: 0x10069754c | FUN_10069754c */

void FUN_10069754c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar2 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,uVar1,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1006975ec | FUN_1006975ec */

long * FUN_1006975ec(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && *(ulong *)(lVar4 + 0x40) < 0x19) &&
      (*(uint *)(lVar4 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006976ac | FUN_1006976ac */

void FUN_1006976ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
                    /* WARNING: Could not recover jumptable at 0x000100697718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}



/* Address: 0x10069771c | FUN_10069771c */

undefined8 FUN_10069771c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x1006977a0 | FUN_1006977a0 */

undefined8 FUN_1006977a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x100697824 | FUN_100697824 */

undefined8 FUN_100697824(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x1006978a8 | FUN_1006978a8 */

undefined8 FUN_1006978a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))(param_1,param_2,lVar3);
  return param_1;
}



/* Address: 0x10069792c | FUN_10069792c */

uint * FUN_10069792c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar5,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_100697a18;
  uVar9 = *(ulong *)(lVar7 + 0x40);
  uVar8 = (uint)uVar9;
  uVar4 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar10 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (0xff < uVar10) {
      if (uVar10 >> 0x10 == 0) {
        uVar10 = (uint)*(ushort *)((long)param_1 + uVar9);
      }
      else {
        uVar10 = *(uint *)((long)param_1 + uVar9);
      }
      goto LAB_1006979b0;
    }
    if (1 < uVar10) goto LAB_1006979ac;
  }
  else {
LAB_1006979ac:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar9);
LAB_1006979b0:
    if (uVar10 != 0) {
      uVar1 = 0;
      if (uVar8 < 4) {
        uVar1 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
      }
      if (uVar8 != 0) {
        uVar4 = 4;
        if (uVar8 < 4) {
          uVar4 = uVar8;
        }
        if ((int)uVar4 < 3) {
          if (uVar4 == 1) {
            uVar9 = (ulong)(byte)*param_1;
          }
          else {
            uVar9 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar4 == 3) {
          uVar9 = (ulong)(uint3)*param_1;
        }
        else {
          uVar9 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + ((uint)uVar9 | uVar1) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_100697a18:
                    /* WARNING: Could not recover jumptable at 0x000100697a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(param_1,uVar3,lVar6);
  return param_1;
}



/* Address: 0x100697a90 | FUN_100697a90 */

void FUN_100697a90(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar4,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  sVar8 = *(size_t *)(lVar6 + 0x40);
  uVar7 = (uint)sVar8;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar11 = 0;
  }
  else if (uVar7 < 4) {
    uVar9 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f))
            + 1;
    bVar11 = 2;
    if (0xffff < uVar9) {
      bVar11 = 4;
    }
    if (uVar9 < 0x100) {
      bVar11 = 1 < uVar9;
    }
  }
  else {
    bVar11 = 1;
  }
  uVar9 = (uint)param_2;
  if (uVar2 < uVar9) {
    uVar9 = uVar9 + ~uVar2;
    if (uVar7 < 4) {
      iVar10 = (uVar9 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = uVar9 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar8);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar9;
        }
      }
    }
    else {
      _bzero(param_1,sVar8);
      *param_1 = uVar9;
      iVar10 = 1;
    }
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(char *)((long)param_1 + sVar8) = (char)iVar10;
      }
    }
    else if (bVar11 == 2) {
      *(short *)((long)param_1 + sVar8) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar8) = iVar10;
    }
  }
  else {
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(undefined1 *)((long)param_1 + sVar8) = 0;
      }
    }
    else if (bVar11 == 2) {
      *(undefined2 *)((long)param_1 + sVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar8) = 0;
    }
    if (uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100697c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2,uVar2,lVar5);
      return;
    }
  }
  return;
}



/* Address: 0x100697c84 | FUN_100697c84 */

void FUN_100697c84(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100697c90 | FUN_100697c90 */

undefined ** FUN_100697c90(void)

{
  return &PTR_PTR_100fda8a8;
}



/* Address: 0x100697c9c | FUN_100697c9c */

void FUN_100697c9c(byte *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 & 1;
  return;
}



/* Address: 0x100697cac | FUN_100697cac */

void FUN_100697cac(byte *param_1,byte *param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  String SVar3;
  
  if (param_3 == 5) {
    bVar2 = *param_2;
  }
  else if (param_3 == 2) {
    bVar2 = *param_2;
  }
  else {
    if (param_3 != 0) {
      SVar3.bridgeObject = (void *)0x2;
      SVar3.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100697d38);
      (*pcVar1)();
    }
    bVar2 = *param_2;
  }
  *param_1 = bVar2 & 1;
  return;
}



/* Address: 0x100697d38 | FUN_100697d38 */

void FUN_100697d38(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100697db8);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x100697db8 | FUN_100697db8 */

void FUN_100697db8(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  String SVar4;
  
  bVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar3 = *param_3;
      *param_3 = bVar1;
    }
    else {
      if (param_4 != 2) goto LAB_100697e10;
      LOAcquire();
      bVar3 = *param_3;
      *param_3 = bVar1;
    }
  }
  else if (param_4 == 3) {
    bVar3 = *param_3;
    *param_3 = bVar1;
    LORelease();
  }
  else {
    if ((param_4 != 4) && (param_4 != 5)) {
LAB_100697e10:
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100697e68);
      (*pcVar2)();
    }
    LOAcquire();
    bVar3 = *param_3;
    *param_3 = bVar1;
    LORelease();
  }
  *param_1 = bVar3 & 1;
  return;
}



/* Address: 0x100697e68 | FUN_100697e68 */

bool FUN_100697e68(byte *param_1,byte *param_2,byte *param_3,byte *param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  String SVar5;
  
  bVar1 = *param_2;
  bVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      bVar4 = *param_4;
      if (bVar4 == bVar1) {
        *param_4 = bVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_100697ee0;
      bVar4 = *param_4;
      if (bVar4 == bVar1) {
        *param_4 = bVar2;
      }
    }
  }
  else if (param_5 == 3) {
    bVar4 = *param_4;
    if (bVar4 == bVar1) {
      *param_4 = bVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_100697ee0:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100697f38);
      (*pcVar3)();
    }
    bVar4 = *param_4;
    if (bVar4 == bVar1) {
      *param_4 = bVar2;
    }
  }
  *param_1 = bVar4 & 1;
  return bVar4 == bVar1;
}



/* Address: 0x100697f38 | FUN_100697f38 */

bool FUN_100697f38(byte *param_1,char *param_2,byte *param_3,byte *param_4,long param_5,long param_6
                  )

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  if (*param_2 == '\x01') {
    if ((*param_3 & 1) == 0) {
      if (2 < param_5) {
        if (param_5 == 3) {
          bVar2 = 0;
          bVar3 = 0;
          bVar4 = 1;
          bVar5 = 1;
          goto joined_r0x0001006980b0;
        }
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_100698150;
        bVar3 = 0;
LAB_100697fc8:
        bVar4 = 1;
        bVar5 = 1;
        bVar2 = bVar3;
joined_r0x000100697ff8:
        if (param_6 == 0) goto LAB_1006980fc;
        goto LAB_1006980b4;
      }
      if (param_5 == 0) {
        bVar2 = 0;
        bVar3 = 0;
        bVar4 = 1;
        bVar5 = 1;
        goto joined_r0x000100698148;
      }
      if (param_5 != 2) goto LAB_100698150;
      bVar3 = 0;
      bVar5 = 1;
      bVar2 = 0;
      bVar4 = 1;
      if (param_6 == 0) goto LAB_100698108;
      goto LAB_1006980ec;
    }
    if (2 < param_5) {
      if (param_5 != 3) {
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_100698150;
        bVar3 = 1;
        goto LAB_100697fc8;
      }
      bVar2 = 1;
      bVar3 = 1;
      bVar4 = 1;
      bVar5 = 1;
joined_r0x0001006980b0:
      if (param_6 == 0) {
        bVar2 = *param_4;
        if (bVar2 == bVar5) {
          *param_4 = bVar3;
        }
        goto LAB_100698128;
      }
LAB_1006980b4:
      bVar5 = bVar4;
      bVar3 = bVar2;
      if (param_6 == 2) goto LAB_1006980fc;
      goto LAB_1006980f4;
    }
    if (param_5 != 0) {
      if (param_5 != 2) goto LAB_100698150;
      bVar4 = 1;
      bVar5 = 1;
joined_r0x000100698030:
      bVar2 = 1;
      bVar3 = 1;
joined_r0x000100698068:
      if (param_6 != 0) goto LAB_1006980ec;
      goto LAB_100698108;
    }
    bVar3 = 1;
    bVar5 = 1;
    if (param_6 != 5) {
      if (param_6 == 2) goto LAB_100698108;
      if (param_6 != 0) goto LAB_100698150;
      goto LAB_100698120;
    }
  }
  else {
    if ((*param_3 & 1) == 0) {
      if (2 < param_5) {
        if (param_5 == 3) {
          bVar2 = 0;
          bVar3 = 0;
          goto joined_r0x0001006980b0;
        }
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_100698150;
        bVar2 = 0;
        bVar3 = 0;
        goto joined_r0x000100697ff8;
      }
      if (param_5 != 0) {
        if (param_5 != 2) goto LAB_100698150;
        bVar2 = 0;
        bVar3 = 0;
        bVar4 = 0;
        bVar5 = 0;
        goto joined_r0x000100698068;
      }
      bVar2 = 0;
      bVar3 = 0;
      bVar4 = 0;
      bVar5 = 0;
    }
    else {
      if (2 < param_5) {
        if (param_5 == 3) {
          bVar2 = 1;
          bVar3 = 1;
joined_r0x0001006980b0:
          bVar5 = 0;
          bVar4 = 0;
          goto joined_r0x0001006980b0;
        }
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_100698150;
        bVar2 = 1;
        bVar3 = 1;
joined_r0x000100697ff8:
        bVar5 = 0;
        bVar4 = 0;
        goto joined_r0x000100697ff8;
      }
      if (param_5 != 0) {
        if (param_5 != 2) goto LAB_100698150;
        bVar4 = 0;
        bVar5 = 0;
        goto joined_r0x000100698030;
      }
      bVar4 = 0;
      bVar5 = 0;
      bVar2 = 1;
      bVar3 = 1;
    }
joined_r0x000100698148:
    if (param_6 == 0) {
LAB_100698120:
      bVar2 = *param_4;
      if (bVar2 == bVar5) {
        *param_4 = bVar3;
      }
      goto LAB_100698128;
    }
LAB_1006980ec:
    bVar5 = bVar4;
    bVar3 = bVar2;
    if (param_6 == 2) {
LAB_100698108:
      bVar2 = *param_4;
      if (bVar2 == bVar5) {
        *param_4 = bVar3;
      }
      goto LAB_100698128;
    }
LAB_1006980f4:
    if (param_6 != 5) {
LAB_100698150:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100698154);
      (*pcVar1)();
    }
  }
LAB_1006980fc:
  bVar2 = *param_4;
  if (bVar2 == bVar5) {
    *param_4 = bVar3;
  }
LAB_100698128:
  *param_1 = bVar2 & 1;
  return bVar2 == bVar5;
}



/* Address: 0x100698154 | FUN_100698154 */

undefined1  [16] FUN_100698154(void)

{
  return ZEXT816(0x100ef5930);
}



/* Address: 0x100698164 | thunk_FUN_100698204 */

void thunk_FUN_100698204(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100698294);
  (*pcVar1)();
}



/* Address: 0x100698168 | thunk_FUN_100697d38 */

void thunk_FUN_100697d38(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100697db8);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x10069816c | thunk_FUN_100698294 */

void thunk_FUN_100698294(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  String SVar4;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10069834c);
  (*pcVar3)();
}



/* Address: 0x100698170 | thunk_FUN_10069834c */

bool thunk_FUN_10069834c(char *param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  String SVar5;
  
  cVar1 = *param_2;
  cVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_1006983c0;
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
    }
  }
  else if (param_5 == 3) {
    cVar4 = *param_4;
    if (cVar4 == cVar1) {
      *param_4 = cVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_1006983c0:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100698418);
      (*pcVar3)();
    }
    cVar4 = *param_4;
    if (cVar4 == cVar1) {
      *param_4 = cVar2;
    }
  }
  *param_1 = cVar4;
  return cVar4 == cVar1;
}



/* Address: 0x100698174 | thunk_FUN_100698418 */

bool thunk_FUN_100698418(char *param_1,char *param_2,char *param_3,char *param_4,long param_5,
                        long param_6)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  
  cVar1 = *param_2;
  cVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            cVar4 = *param_4;
            if (cVar4 == cVar1) {
              *param_4 = cVar2;
            }
            goto LAB_1006984e4;
          }
          goto LAB_1006984f8;
        }
LAB_1006984dc:
        cVar4 = *param_4;
        if (cVar4 == cVar1) {
          *param_4 = cVar2;
        }
        goto LAB_1006984e4;
      }
    }
    else {
      if (param_5 != 2) {
LAB_1006984f8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006984fc);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_1006984f8;
        goto LAB_1006984dc;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_1006984f8;
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
      goto LAB_1006984e4;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_1006984f8;
  cVar4 = *param_4;
  if (cVar4 == cVar1) {
    *param_4 = cVar2;
  }
LAB_1006984e4:
  *param_1 = cVar4;
  return cVar4 == cVar1;
}



/* Address: 0x100698178 | thunk_FUN_1006984fc */

void thunk_FUN_1006984fc(char *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      *param_1 = cVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      *param_1 = cVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698560);
  (*pcVar3)();
}



/* Address: 0x10069817c | thunk_FUN_100698560 */

void thunk_FUN_100698560(char *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      *param_1 = cVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      *param_1 = cVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006985d4);
  (*pcVar3)();
}



/* Address: 0x100698180 | thunk_FUN_1006985d4 */

void thunk_FUN_1006985d4(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698648);
  (*pcVar3)();
}



/* Address: 0x100698184 | thunk_FUN_100698648 */

void thunk_FUN_100698648(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006986ac);
  (*pcVar3)();
}



/* Address: 0x100698188 | thunk_FUN_1006986ac */

void thunk_FUN_1006986ac(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698710);
  (*pcVar3)();
}



/* Address: 0x10069818c | thunk_FUN_100698710 */

void thunk_FUN_100698710(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006987a0);
  (*pcVar1)();
}



/* Address: 0x100698190 | thunk_FUN_1006987a0 */

void thunk_FUN_1006987a0(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100698820);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x100698194 | thunk_FUN_100698820 */

void thunk_FUN_100698820(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,long param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  String SVar4;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006988d8);
  (*pcVar3)();
}



/* Address: 0x100698198 | thunk_FUN_1006988d8 */

bool thunk_FUN_1006988d8(short *param_1,short *param_2,short *param_3,short *param_4,long param_5)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  String SVar5;
  
  sVar1 = *param_2;
  sVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069894c;
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
    }
  }
  else if (param_5 == 3) {
    sVar4 = *param_4;
    if (sVar4 == sVar1) {
      *param_4 = sVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069894c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006989a4);
      (*pcVar3)();
    }
    sVar4 = *param_4;
    if (sVar4 == sVar1) {
      *param_4 = sVar2;
    }
  }
  *param_1 = sVar4;
  return sVar4 == sVar1;
}



/* Address: 0x10069819c | thunk_FUN_1006989a4 */

bool thunk_FUN_1006989a4(short *param_1,short *param_2,short *param_3,short *param_4,long param_5,
                        long param_6)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  
  sVar1 = *param_2;
  sVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            sVar4 = *param_4;
            if (sVar4 == sVar1) {
              *param_4 = sVar2;
            }
            goto LAB_100698a70;
          }
          goto LAB_100698a84;
        }
LAB_100698a68:
        sVar4 = *param_4;
        if (sVar4 == sVar1) {
          *param_4 = sVar2;
        }
        goto LAB_100698a70;
      }
    }
    else {
      if (param_5 != 2) {
LAB_100698a84:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100698a88);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_100698a84;
        goto LAB_100698a68;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_100698a84;
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
      goto LAB_100698a70;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_100698a84;
  sVar4 = *param_4;
  if (sVar4 == sVar1) {
    *param_4 = sVar2;
  }
LAB_100698a70:
  *param_1 = sVar4;
  return sVar4 == sVar1;
}



/* Address: 0x1006981a0 | thunk_FUN_100698a88 */

void thunk_FUN_100698a88(short *param_1,short *param_2,short *param_3,long param_4)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  
  sVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      *param_1 = sVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      *param_1 = sVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698aec);
  (*pcVar3)();
}



/* Address: 0x1006981a4 | thunk_FUN_100698aec */

void thunk_FUN_100698aec(short *param_1,short *param_2,short *param_3,long param_4)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  
  sVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      *param_1 = sVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      *param_1 = sVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698b60);
  (*pcVar3)();
}



/* Address: 0x1006981a8 | thunk_FUN_100698b60 */

void thunk_FUN_100698b60(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698bd4);
  (*pcVar3)();
}



/* Address: 0x1006981ac | thunk_FUN_100698bd4 */

void thunk_FUN_100698bd4(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698c38);
  (*pcVar3)();
}



/* Address: 0x1006981b0 | thunk_FUN_100698c38 */

void thunk_FUN_100698c38(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698c9c);
  (*pcVar3)();
}



/* Address: 0x1006981b4 | thunk_FUN_100698c9c */

void thunk_FUN_100698c9c(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100698d2c);
  (*pcVar1)();
}



/* Address: 0x1006981b8 | thunk_FUN_100698d2c */

void thunk_FUN_100698d2c(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100698dac);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x1006981bc | thunk_FUN_100698dac */

void thunk_FUN_100698dac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  String SVar4;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100698e64);
  (*pcVar2)();
}



/* Address: 0x1006981c0 | thunk_FUN_100698e64 */

bool thunk_FUN_100698e64(int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  String SVar5;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_100698ed8;
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
    }
  }
  else if (param_5 == 3) {
    iVar4 = *param_4;
    if (iVar4 == iVar1) {
      *param_4 = iVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_100698ed8:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100698f30);
      (*pcVar3)();
    }
    iVar4 = *param_4;
    if (iVar4 == iVar1) {
      *param_4 = iVar2;
    }
  }
  *param_1 = iVar4;
  return iVar4 == iVar1;
}


