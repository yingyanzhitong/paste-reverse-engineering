/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100978804 | thunk_FUN_100978428 */

void thunk_FUN_100978428(void)

{
  FUN_100978428();
  return;
}



/* Address: 0x100978808 | FUN_100978808 */

void FUN_100978808(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
                    /* WARNING: Could not recover jumptable at 0x000100978850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100978854 | FUN_100978854 */

void FUN_100978854(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
                    /* WARNING: Could not recover jumptable at 0x0001009788a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1009788a4 | FUN_1009788a4 */

bool FUN_1009788a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar2,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
  bVar1 = Swift::Equatable::___infix(param_1,param_2,uVar2,*(undefined8 *)(param_4 + 8));
  return bVar1;
}



/* Address: 0x100978938 | FUN_100978938 */

void FUN_100978938(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1009788a4(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100978944 | FUN_100978944 */

void FUN_100978944(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100978950 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100978954 | FUN_100978954 */

void FUN_100978954(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long *unaff_x20;
  long lVar4;
  long local_40;
  long lStack_38;
  
  lVar4 = *unaff_x20;
  uVar1 = 0xff;
  (*param_1)(0xff,*(undefined8 *)(lVar4 + 0x58));
  _swift_getWitnessTable(param_2,uVar1);
  uVar2 = 0;
  FUN_100976344(0,uVar1,param_2,*(undefined8 *)(lVar4 + 0x68));
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar2);
  FUN_100976a38(&local_40,4,uVar2,pTVar3);
  unaff_x20[2] = local_40;
  unaff_x20[3] = lStack_38;
  return;
}



/* Address: 0x1009789ec | FUN_1009789ec */

void FUN_1009789ec(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88bf8;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x100978a18 | FUN_100978a18 */

void FUN_100978a18(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88c7c;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x100978a44 | FUN_100978a44 */

void FUN_100978a44(long param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88cd4;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88cfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88cfc,param_2);
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x100978a88 | thunk_FUN_100978a98 */

void thunk_FUN_100978a98(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_100c88d70;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Address: 0x100978a8c | FUN_100978a8c */

void FUN_100978a8c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc6fc8);
  return;
}



/* Address: 0x100978a98 | FUN_100978a98 */

void FUN_100978a98(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c88d70;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x70);
  return;
}



/* Address: 0x100978ad8 | FUN_100978ad8 */

void FUN_100978ad8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc703c);
  return;
}



/* Address: 0x100978ae4 | FUN_100978ae4 */

void FUN_100978ae4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100978b60 | FUN_100978b60 */

long * FUN_100978b60(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && *(ulong *)(lVar2 + 0x40) < 0x19) &&
      (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100978bf4 | FUN_100978bf4 */

void FUN_100978bf4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
                    /* WARNING: Could not recover jumptable at 0x000100978c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Address: 0x100978c40 | FUN_100978c40 */

undefined8 FUN_100978c40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x100978c98 | FUN_100978c98 */

undefined8 FUN_100978c98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x100978cf0 | FUN_100978cf0 */

undefined8 FUN_100978cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x100978d48 | FUN_100978d48 */

undefined8 FUN_100978d48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x100978da0 | FUN_100978da0 */

uint * FUN_100978da0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100978e64;
  uVar7 = *(ulong *)(lVar5 + 0x40);
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar8) {
      if (uVar8 >> 0x10 == 0) {
        uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + uVar7);
      }
      goto LAB_100978dfc;
    }
    if (1 < uVar8) goto LAB_100978df8;
  }
  else {
LAB_100978df8:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
LAB_100978dfc:
    if (uVar8 != 0) {
      uVar1 = 0;
      if (uVar6 < 4) {
        uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar6 != 0) {
        uVar3 = 4;
        if (uVar6 < 4) {
          uVar3 = uVar6;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar7 = (ulong)(byte)*param_1;
          }
          else {
            uVar7 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar7 = (ulong)(uint3)*param_1;
        }
        else {
          uVar7 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar7 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_100978e64:
                    /* WARNING: Could not recover jumptable at 0x000100978e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  return param_1;
}



/* Address: 0x100978ed4 | FUN_100978ed4 */

void FUN_100978ed4(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  lVar4 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x54);
  sVar6 = *(size_t *)(lVar4 + 0x40);
  uVar5 = (uint)sVar6;
  if (param_3 < uVar1 || param_3 - uVar1 == 0) {
    bVar9 = 0;
  }
  else if (uVar5 < 4) {
    uVar7 = ((param_3 - uVar1) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar7) {
      bVar9 = 4;
    }
    if (uVar7 < 0x100) {
      bVar9 = 1 < uVar7;
    }
  }
  else {
    bVar9 = 1;
  }
  uVar7 = (uint)param_2;
  if (uVar1 < uVar7) {
    uVar7 = uVar7 + ~uVar1;
    if (uVar5 < 4) {
      iVar8 = (uVar7 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar1 = uVar7 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)uVar7;
        }
      }
    }
    else {
      _bzero(param_1,sVar6);
      *param_1 = uVar7;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar8;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100979040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))(param_1,param_2,uVar1,lVar3);
      return;
    }
  }
  return;
}



/* Address: 0x1009790a4 | thunk_FUN_1009789ec */

void thunk_FUN_1009789ec(void)

{
  FUN_1009789ec();
  return;
}



/* Address: 0x1009790a8 | thunk_FUN_100978a18 */

void thunk_FUN_100978a18(void)

{
  FUN_100978a18();
  return;
}



/* Address: 0x1009790ac | thunk_FUN_100978a98 */

void thunk_FUN_100978a98(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_100c88d70;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Address: 0x1009790b0 | thunk_FUN_100978798 */

void thunk_FUN_100978798(void)

{
  FUN_100978798();
  return;
}



/* Address: 0x1009790b4 | thunk_FUN_1009787c4 */

void thunk_FUN_1009787c4(void)

{
  FUN_1009787c4();
  return;
}



/* Address: 0x1009790b8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1009790bc | FUN_1009790bc */

/* WARNING: Removing unreachable block (ram,0x000100979110) */

void FUN_1009790bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2e3131312e313131;
  FUN_100667ab4(0x2e3131312e313131,0xef3131312e313131,0x457);
  DAT_100ff06e0 = uVar1;
  return;
}



/* Address: 0x100979130 | FUN_100979130 */

/* WARNING: Removing unreachable block (ram,0x000100979184) */

void FUN_100979130(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2e3232322e323232;
  FUN_100667ab4(0x2e3232322e323232,0xef3232322e323232,0x8ae);
  DAT_100ff06f0 = uVar1;
  return;
}



/* Address: 0x1009791a4 | FUN_1009791a4 */

long FUN_1009791a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  FUN_100611728();
  lVar1 = 0x18;
  FUN_100488140(0x18,param_1,param_2,param_3,param_4);
  _swift_beginAccess(lVar1 + 0x10,auStack_50,0,0);
  local_28 = *(undefined4 *)(lVar1 + 0x10);
  uStack_30 = 0;
  local_24 = 0;
  local_22 = 0;
  local_38 = lVar1;
  FUN_10097923c();
  return local_38;
}



/* Address: 0x10097923c | FUN_10097923c */

void FUN_10097923c(undefined1 *param_1)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  FUN_100617080();
  uVar3 = 0xa1b2c3d4;
  FUN_10096f824(0xa1b2c3d4,*(undefined4 *)(unaff_x20 + 0xc),*param_1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979380);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979384);
    (*pcVar2)();
  }
  iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979388);
    (*pcVar2)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar1;
  uVar3 = 2;
  FUN_10096f8f8(2,iVar1,*param_1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10097938c);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979390);
    (*pcVar2)();
  }
  iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979394);
    (*pcVar2)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar1;
  uVar3 = 4;
  FUN_10096f8f8(4,iVar1,*param_1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100979398);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10097939c);
    (*pcVar2)();
  }
  iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793a0);
    (*pcVar2)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar1;
  uVar3 = 0;
  FUN_10096f824(0,iVar1,*param_1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793a4);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793a8);
    (*pcVar2)();
  }
  iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793ac);
    (*pcVar2)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar1;
  uVar3 = 0;
  FUN_10096f824(0,iVar1,*param_1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793b0);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793b4);
    (*pcVar2)();
  }
  iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793b8);
    (*pcVar2)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar1;
  uVar3 = 0xffffffff;
  FUN_10096f824(0xffffffff,iVar1,*param_1);
  if (-1 < (long)uVar3) {
    if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793c0);
      (*pcVar2)();
    }
    iVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793c4);
      (*pcVar2)();
    }
    *(int *)(unaff_x20 + 0xc) = iVar1;
    uVar3 = 0;
    FUN_10096f824(0,iVar1,*param_1);
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793c8);
      (*pcVar2)();
    }
    if (uVar3 >> 0x20 == 0) {
      if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
        *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793d0);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793cc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009793bc);
  (*pcVar2)();
}



/* Address: 0x1009793d0 | FUN_1009793d0 */

void FUN_1009793d0(undefined1 param_1,ulong param_2,ulong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x28) = 0xffd7;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x47) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000007;
  *(undefined1 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  if (((param_2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(unaff_x20 + 0x68) = param_2;
  }
  if (((param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(unaff_x20 + 0x70) = param_3;
  }
  return;
}



/* Address: 0x10097946c | FUN_10097946c */

void FUN_10097946c(undefined1 param_1,ulong param_2,ulong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0xffd7;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x47) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000007;
  *(undefined1 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  if (((param_2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(unaff_x20 + 0x68) = param_2;
  }
  if (((param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(unaff_x20 + 0x70) = param_3;
    return;
  }
  return;
}



/* Address: 0x1009794cc | FUN_1009794cc */

void FUN_1009794cc(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10097d088();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x28) = 0xffd7;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x47) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined1 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0xf000000000000007;
  *(undefined8 *)(lVar1 + 0x68) = 0xf000000000000007;
  *(undefined1 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *(undefined8 *)(lVar1 + 0x18) = param_5;
  *(char *)(lVar1 + 0x20) = (char)param_1;
  if (((param_2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(lVar1 + 0x68) = param_2;
  }
  if (((param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    *(ulong *)(lVar1 + 0x70) = param_3;
  }
  return;
}



/* Address: 0x100979564 | FUN_100979564 */

ulong FUN_100979564(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x68);
  uVar1 = uVar2;
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x30))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06d8 != -1) {
        _swift_once(&DAT_100ff06d8,FUN_1009790bc);
      }
      uVar1 = DAT_100ff06e0;
      _swift_retain(DAT_100ff06e0 & 0x3fffffffffffffff);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    *(ulong *)(unaff_x20 + 0x68) = uVar1;
    _swift_retain();
    FUN_1005d8534(uVar3);
  }
  FUN_1005d84e8(uVar2);
  return uVar1;
}



/* Address: 0x10097963c | FUN_10097963c */

ulong FUN_10097963c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x70);
  uVar1 = uVar2;
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x38))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06e8 != -1) {
        _swift_once(&DAT_100ff06e8,FUN_100979130);
      }
      uVar1 = DAT_100ff06f0;
      _swift_retain(DAT_100ff06f0 & 0x3fffffffffffffff);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(ulong *)(unaff_x20 + 0x70) = uVar1;
    _swift_retain();
    FUN_1005d8534(uVar3);
  }
  FUN_1005d84e8(uVar2);
  return uVar1;
}



/* Address: 0x100979714 | FUN_100979714 */

ulong FUN_100979714(ulong param_1,long param_2)

{
  long unaff_x20;
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    uVar1 = *(ulong *)(unaff_x20 + 0x70);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
LAB_100979810:
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      return uVar1;
    }
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x38))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06e8 != -1) {
        _swift_once(&DAT_100ff06e8,FUN_100979130);
      }
      uVar1 = DAT_100ff06f0;
      _swift_retain(DAT_100ff06f0 & 0x3fffffffffffffff);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    *(ulong *)(unaff_x20 + 0x70) = uVar1;
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x68);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) goto LAB_100979810;
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x30))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06d8 != -1) {
        _swift_once(&DAT_100ff06d8,FUN_1009790bc);
      }
      uVar1 = DAT_100ff06e0;
      _swift_retain(DAT_100ff06e0 & 0x3fffffffffffffff);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    *(ulong *)(unaff_x20 + 0x68) = uVar1;
  }
  _swift_retain();
  FUN_1005d8534(uVar2);
  return uVar1;
}



/* Address: 0x10097988c | FUN_10097988c */

ulong FUN_10097988c(ulong param_1,long param_2)

{
  long unaff_x20;
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    uVar1 = *(ulong *)(unaff_x20 + 0x68);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
LAB_100979988:
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      return uVar1;
    }
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x30))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06d8 != -1) {
        _swift_once(&DAT_100ff06d8,FUN_1009790bc);
      }
      uVar1 = DAT_100ff06e0;
      _swift_retain(DAT_100ff06e0 & 0x3fffffffffffffff);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    *(ulong *)(unaff_x20 + 0x68) = uVar1;
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x70);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) goto LAB_100979988;
    FUN_100627f08();
    uVar1 = param_1;
    _swift_getObjectType();
    (**(code **)(param_2 + 0x38))();
    _swift_unknownObjectRelease(param_1);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (DAT_100ff06e8 != -1) {
        _swift_once(&DAT_100ff06e8,FUN_100979130);
      }
      uVar1 = DAT_100ff06f0;
      _swift_retain(DAT_100ff06f0 & 0x3fffffffffffffff);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    *(ulong *)(unaff_x20 + 0x70) = uVar1;
  }
  _swift_retain();
  FUN_1005d8534(uVar2);
  return uVar1;
}



/* Address: 0x100979a04 | FUN_100979a04 */

void FUN_100979a04(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x68));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Address: 0x100979a38 | FUN_100979a38 */

void FUN_100979a38(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x68));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100979a74 | thunk_FUN_10061e844 */

void thunk_FUN_10061e844(void)

{
  FUN_10061e844();
  return;
}



/* Address: 0x100979a78 | thunk_FUN_100979a7c */

void thunk_FUN_100979a7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100627f08();
  uVar3 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x18))();
  _swift_unknownObjectRelease(param_1);
  lVar2 = 0x100;
  FUN_100488140(0x100,uVar3,param_2,param_3,param_4);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_70,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e) = 0;
  *(undefined2 *)(unaff_x20 + 0x4c) = 0;
  *(undefined4 *)(unaff_x20 + 0x48) = uVar1;
  _swift_release(uVar3);
  return;
}



/* Address: 0x100979a7c | FUN_100979a7c */

void FUN_100979a7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100627f08();
  uVar3 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x18))();
  _swift_unknownObjectRelease(param_1);
  lVar2 = 0x100;
  FUN_100488140(0x100,uVar3,param_2,param_3,param_4);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_70,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e) = 0;
  *(undefined2 *)(unaff_x20 + 0x4c) = 0;
  *(undefined4 *)(unaff_x20 + 0x48) = uVar1;
  _swift_release(uVar3);
  return;
}



/* Address: 0x100979b48 | FUN_100979b48 */

void FUN_100979b48(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong *puVar14;
  timeval local_178;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 local_130 [16];
  ulong *local_120;
  __darwin_time_t _Stack_118;
  __darwin_suseconds_t local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined1 local_f0 [16];
  ulong local_e0;
  __darwin_time_t _Stack_d8;
  __darwin_suseconds_t local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined8 local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  __darwin_time_t _Stack_98;
  __darwin_suseconds_t local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_beginAccess(unaff_x20 + 0x38,&local_b0,0x21,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a174);
    (*pcVar1)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + 0x38);
    _swift_beginAccess(lVar9 + 0x10,auStack_148,0,0);
    uVar2 = (ulong)*(uint *)(lVar9 + 0x10);
    FUN_10061204c();
    *(ulong *)(unaff_x20 + 0x38) = uVar2;
    _swift_release(lVar9);
  }
  lVar9 = *(long *)(unaff_x20 + 0x38);
  puVar7 = auStack_160;
  _swift_beginAccess(lVar9 + 0x10,puVar7,0,0);
  uVar13 = (uint)puVar7;
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(lVar9 + 0x10);
  *(undefined2 *)(unaff_x20 + 0x4c) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_endAccess(&local_b0);
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x50) = 1;
  puVar3 = param_1;
  FUN_100979714();
  FUN_10097988c();
  puVar4 = puVar3;
  FUN_100666f78();
  if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a178);
    (*pcVar1)();
  }
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a144);
    (*pcVar1)();
  }
  if ((ulong)puVar4 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a148);
    (*pcVar1)();
  }
  puVar5 = param_1;
  FUN_100666f78();
  if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a17c);
    (*pcVar1)();
  }
  if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a14c);
    (*pcVar1)();
  }
  if ((ulong)puVar5 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a150);
    (*pcVar1)();
  }
  uVar2 = (ulong)puVar3 >> 0x3e;
  uVar13 = (uint)((ulong)puVar3 >> 0x3e);
  if (uVar13 == 0) {
    puVar10 = param_1;
    puVar12 = puVar3;
    puVar14 = param_1;
    if ((ulong)param_1 >> 0x3e == 0) goto LAB_100979cc4;
LAB_100979de8:
    FUN_10097d0a8();
    puVar6 = &DAT_100f1ebe0;
    _swift_allocError(&DAT_100f1ebe0,puVar5,0,0);
    *puVar5 = (ulong)puVar3;
    puVar5[1] = (ulong)param_1;
    _swift_willThrow();
  }
  else {
    if ((uVar13 != 1) || ((ulong)param_1 >> 0x3e != 1)) goto LAB_100979de8;
    puVar10 = (ulong *)((ulong)param_1 & 0x3fffffffffffffff | 0x8000000000000000);
    puVar12 = (ulong *)((ulong)puVar3 & 0x3fffffffffffffff);
    puVar14 = (ulong *)((ulong)param_1 & 0x3fffffffffffffff);
LAB_100979cc4:
    puVar11 = (ulong *)((ulong)puVar3 & 0x3fffffffffffffff);
    local_f0._0_8_ = 0;
    local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
    _swift_retain_n(puVar11,4);
    _swift_retain_n(puVar14,4);
    _gettimeofday((timeval *)local_f0,(void *)0x0);
    FUN_10097d0e8(puVar12,puVar10);
    _swift_release(puVar11);
    _swift_release(puVar14);
    local_b0 = 0;
    _Stack_98 = local_f0._0_8_;
    local_90 = local_f0._8_4_;
    local_88 = 2;
    local_84 = 0;
    local_80 = 1;
    local_7c = 0;
    local_78 = SUB82(puVar4,0);
    local_76 = SUB82(puVar5,0);
    puVar7 = local_f0;
    puStack_a8 = puVar12;
    local_a0 = puVar10;
    _swift_beginAccess(unaff_x20 + 0x38,puVar7,0x21,0);
    uVar13 = (uint)puVar7;
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a184);
      (*pcVar1)();
    }
    FUN_10097a1a0(&local_b0);
    _swift_endAccess(local_f0);
    FUN_10097d10c(&local_b0);
    puVar4 = param_1;
    FUN_100666f78();
    if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a188);
      (*pcVar1)();
    }
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a154);
      (*pcVar1)();
    }
    if ((ulong)puVar4 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a158);
      (*pcVar1)();
    }
    puVar5 = puVar3;
    FUN_100666f78();
    if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a18c);
      (*pcVar1)();
    }
    if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a15c);
      (*pcVar1)();
    }
    if ((ulong)puVar5 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a160);
      (*pcVar1)();
    }
    uVar8 = (ulong)param_1 >> 0x3e;
    if (uVar8 == 0) {
      puVar10 = puVar3;
      puVar12 = param_1;
      if (uVar2 != 0) goto LAB_100979fa0;
LAB_100979e78:
      local_130._0_8_ = 0;
      local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
      _swift_retain_n(puVar14,3);
      _swift_retain_n(puVar11,3);
      _gettimeofday((timeval *)local_130,(void *)0x0);
      FUN_10097d0e8(puVar12,puVar10);
      _swift_release(puVar14);
      _swift_release(puVar11);
      local_f0._0_8_ = 0;
      _Stack_d8 = local_130._0_8_;
      local_d0 = local_130._8_4_;
      local_c8 = 0x12;
      local_c4 = 1;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = SUB82(puVar4,0);
      local_b6 = SUB82(puVar5,0);
      puVar7 = local_130;
      local_f0._8_8_ = puVar12;
      local_e0 = (ulong)puVar10;
      _swift_beginAccess(unaff_x20 + 0x38,puVar7,0x21,0);
      uVar13 = (uint)puVar7;
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a190);
        (*pcVar1)();
      }
      FUN_10097a1a0(local_f0);
      _swift_endAccess(local_130);
      FUN_10097d10c(local_f0);
      puVar4 = puVar3;
      FUN_100666f78();
      if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a194);
        (*pcVar1)();
      }
      if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a164);
        (*pcVar1)();
      }
      if ((ulong)puVar4 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a168);
        (*pcVar1)();
      }
      puVar5 = param_1;
      FUN_100666f78();
      if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a198);
        (*pcVar1)();
      }
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a16c);
        (*pcVar1)();
      }
      if ((ulong)puVar5 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a170);
        (*pcVar1)();
      }
      if (uVar2 != 0) {
        if (uVar8 != 1) goto LAB_10097a100;
        param_1 = (ulong *)((ulong)puVar14 | 0x8000000000000000);
        puVar3 = puVar11;
LAB_100979ff8:
        local_178.tv_sec = 0;
        local_178.tv_usec = 0;
        _swift_retain_n(puVar14,2);
        _swift_retain_n(puVar11,2);
        _gettimeofday(&local_178,(void *)0x0);
        FUN_10097d0e8(puVar3,param_1);
        _swift_release(puVar11);
        _swift_release(puVar14);
        local_130._0_8_ = 0;
        _Stack_118 = local_178.tv_sec;
        local_110 = local_178.tv_usec;
        local_108 = 0x10;
        local_104 = 1;
        local_100 = 0;
        local_fc = 1;
        local_f8 = SUB82(puVar4,0);
        local_f6 = SUB82(puVar5,0);
        local_130._8_8_ = puVar3;
        local_120 = param_1;
        _swift_beginAccess(unaff_x20 + 0x38,&local_178,0x21,0);
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a19c);
          (*pcVar1)();
        }
        FUN_10097a1a0(local_130);
        _swift_endAccess(&local_178);
        FUN_10097d10c(local_130);
        lVar9 = *(long *)(unaff_x20 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097a1a0);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(unaff_x20 + 0x10);
        _swift_retain(lVar9);
        (*pcVar1)();
        _swift_release(puVar11);
        _swift_release(puVar14);
        _swift_release(lVar9);
        goto LAB_100979e28;
      }
      if (uVar8 == 0) goto LAB_100979ff8;
LAB_10097a100:
      FUN_10097d0a8();
      puVar6 = &DAT_100f1ebe0;
      _swift_allocError(&DAT_100f1ebe0,puVar5,0,0);
      *puVar5 = (ulong)puVar3;
      puVar5[1] = (ulong)param_1;
      _swift_willThrow();
      _swift_release(puVar11);
      _swift_release(puVar14);
    }
    else {
      if (uVar2 == 1) {
        puVar10 = (ulong *)((ulong)puVar11 | 0x8000000000000000);
        puVar12 = puVar14;
        goto LAB_100979e78;
      }
LAB_100979fa0:
      FUN_10097d0a8();
      puVar6 = &DAT_100f1ebe0;
      _swift_allocError(&DAT_100f1ebe0,puVar5,0,0);
      *puVar5 = (ulong)param_1;
      puVar5[1] = (ulong)puVar3;
      _swift_willThrow();
      _swift_release(puVar11);
      _swift_release(puVar14);
    }
  }
  FUN_100626c9c(puVar6);
  _swift_errorRelease(puVar6);
LAB_100979e28:
  FUN_100626b80();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10097a1a0 | FUN_10097a1a0 */

void FUN_10097a1a0(long *param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong *unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [56];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar15 = *param_1;
  uVar11 = lVar15 + 0x14;
  if (SCARRY8(lVar15,0x14)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac14);
    (*pcVar4)();
  }
  uVar17 = param_1[3];
  if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac18);
    (*pcVar4)();
  }
  if (uVar17 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac1c);
    (*pcVar4)();
  }
  uVar7 = *(uint *)(param_1 + 4);
  uVar16 = (ulong)uVar7;
  plVar10 = param_1;
  FUN_100617080();
  FUN_10096f824(uVar17,*(undefined4 *)((long)unaff_x20 + 0xc),(char)*plVar10);
  if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac20);
    (*pcVar4)();
  }
  if (uVar17 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac24);
    (*pcVar4)();
  }
  iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar17;
  if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac28);
    (*pcVar4)();
  }
  *(int *)((long)unaff_x20 + 0xc) = iVar1;
  if ((int)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac2c);
    (*pcVar4)();
  }
  FUN_10096f824(uVar16,iVar1,(char)*plVar10);
  if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac30);
    (*pcVar4)();
  }
  if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac34);
    (*pcVar4)();
  }
  iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar16;
  if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac38);
    (*pcVar4)();
  }
  *(int *)((long)unaff_x20 + 0xc) = iVar1;
  uVar17 = param_1[1];
  uVar16 = param_1[2];
  if ((long)uVar16 < 0) {
    if (SCARRY8(uVar11,4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad1c);
      (*pcVar4)();
    }
    uVar12 = lVar15 + 0x40;
    if (SCARRY8(lVar15 + 0x18,0x28)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad20);
      (*pcVar4)();
    }
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad24);
      (*pcVar4)();
    }
    if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad28);
      (*pcVar4)();
    }
    lVar15 = *plVar10;
    FUN_10097da44(param_1,&local_a0);
    uVar13 = uVar12;
    FUN_10096f824(uVar12,iVar1,(char)lVar15);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad2c);
      (*pcVar4)();
    }
    if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad30);
      (*pcVar4)();
    }
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar13;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar13)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad34);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    FUN_10096f824(uVar12,iVar1,(char)*plVar10);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad38);
      (*pcVar4)();
    }
    if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad3c);
      (*pcVar4)();
    }
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar12;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad40);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    uVar12 = 0x18;
    FUN_10096f824(0x18,iVar1,(char)*plVar10);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad44);
      (*pcVar4)();
    }
    if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad48);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar12;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad4c);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = CONCAT44(local_a0._4_4_,0x60);
    if (0xfffffffb < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad50);
      (*pcVar4)();
    }
    uVar12 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = (uint)uVar12;
    if ((uVar12 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar7 + 4) {
        iVar1 = (uVar7 + 4) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar5 & 1);
    }
    FUN_100612380(4,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 4,uVar7);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 4;
    uVar12 = (ulong)uVar7;
    if (0xfffffffb < uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad54);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad58);
      (*pcVar4)();
    }
    if (uVar11 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad5c);
      (*pcVar4)();
    }
    local_a0 = CONCAT62(local_a0._2_6_,
                        (ushort)(uVar11 >> 8) & 0xff | (ushort)(((uint)uVar11 & 0xff00ff) << 8));
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad60);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 6) {
        iVar1 = (uVar5 + 6) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar7 & 1);
    }
    FUN_100612380(2,uVar12);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2);
    if (0xfffffffd < *(uint *)((long)unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad64);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + 2;
    uVar11 = 6;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad68);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad6c);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    uVar13 = (ulong)uVar7;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad70);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    uVar11 = 0xff;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad74);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad78);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    uVar18 = (ulong)uVar7;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad7c);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    FUN_100666b68(uVar17);
    local_a0 = uVar13;
    uStack_98 = uVar12;
    if (0xffffffef < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad80);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar7 + 0x10) {
        iVar1 = (uVar7 + 0x10) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar5 & 1);
    }
    FUN_100612380(0x10,uVar18);
    puVar14 = auStack_90;
    FUN_10061258c(&local_a0);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 0x10;
    if (0xffffffef < uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad84);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    FUN_100666b68(uVar16 & 0x7fffffffffffffff);
    local_b0 = puVar14;
    uStack_a8 = uVar18;
    if (0xffffffef < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad88);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 0x20) {
        iVar1 = (uVar5 + 0x20) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar6 & 1);
    }
    FUN_100612380(0x10,uVar7);
    FUN_10061258c(&local_b0,&local_a0,uVar7);
    _swift_release(uVar17);
    _swift_release(uVar16 & 0x7fffffffffffffff);
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + 0x10;
    if (0xffffffef < *(uint *)((long)unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad8c);
      (*pcVar4)();
    }
  }
  else {
    uVar12 = lVar15 + 0x28;
    if (SCARRY8(uVar11,0x14)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac7c);
      (*pcVar4)();
    }
    uVar11 = lVar15 + 0x2c;
    if (SCARRY8(uVar12,4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac80);
      (*pcVar4)();
    }
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac84);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac88);
      (*pcVar4)();
    }
    lVar15 = *plVar10;
    FUN_10097da44(param_1,&local_a0);
    uVar13 = uVar11;
    FUN_10096f824(uVar11,iVar1,(char)lVar15);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac8c);
      (*pcVar4)();
    }
    if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac90);
      (*pcVar4)();
    }
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar13;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar13)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac94);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    FUN_10096f824(uVar11,iVar1,(char)*plVar10);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac98);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac9c);
      (*pcVar4)();
    }
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097aca0);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    uVar11 = 2;
    FUN_10096f824(2,iVar1,(char)*plVar10);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097aca4);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097aca8);
      (*pcVar4)();
    }
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acac);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    uVar11 = 0x45;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acb0);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acb4);
      (*pcVar4)();
    }
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acb8);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    uVar11 = 0;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acbc);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acc0);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acc4);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acc8);
      (*pcVar4)();
    }
    if (uVar12 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097accc);
      (*pcVar4)();
    }
    local_a0 = CONCAT62(local_a0._2_6_,
                        (ushort)(uVar12 >> 8) & 0xff | (ushort)(((uint)uVar12 & 0xff00ff) << 8));
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acd0);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar7 + 2) {
        iVar1 = (uVar7 + 2) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar5 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 2;
    if (0xfffffffd < uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acd4);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = local_a0 & 0xffffffffffff0000;
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acd8);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 4) {
        iVar1 = (uVar5 + 4) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar6 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 2;
    if (0xfffffffd < uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acdc);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = CONCAT62(local_a0._2_6_,0x40);
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ace0);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 4) {
        iVar1 = (uVar5 + 4) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar6 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    if (0xfffffffd < *(uint *)((long)unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ace4);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + 2;
    uVar11 = 0xff;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ace8);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acec);
      (*pcVar4)();
    }
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acf0);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    uVar11 = 6;
    FUN_1008859a8();
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acf4);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acf8);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097acfc);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = local_a0 & 0xffffffffffff0000;
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad00);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar7 + 2) {
        iVar1 = (uVar7 + 2) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar5 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + 2;
    if (0xfffffffd < *(uint *)((long)unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad04);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    uVar11 = uVar17;
    FUN_100666b30();
    uVar11 = uVar11 >> 0x20;
    FUN_10096f824(uVar11,iVar1,(char)*plVar10);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad08);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad0c);
      (*pcVar4)();
    }
    iVar1 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad10);
      (*pcVar4)();
    }
    *(int *)((long)unaff_x20 + 0xc) = iVar1;
    uVar11 = uVar16;
    FUN_100666b30();
    uVar11 = uVar11 >> 0x20;
    FUN_10096f824(uVar11,iVar1,(char)*plVar10);
    _swift_release(uVar17);
    _swift_release(uVar16);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad14);
      (*pcVar4)();
    }
    if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ad18);
      (*pcVar4)();
    }
    uVar7 = *(uint *)((long)unaff_x20 + 0xc) + (uint)uVar11;
    if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097a5b8);
      (*pcVar4)();
    }
  }
  *(uint *)((long)unaff_x20 + 0xc) = uVar7;
  lVar15 = param_1[5];
  uVar5 = *(uint *)((long)param_1 + 0x2c);
  lVar3 = param_1[6];
  uVar6 = *(uint *)((long)param_1 + 0x34);
  uVar2 = *(ushort *)((long)param_1 + 0x3a);
  local_a0 = CONCAT62(local_a0._2_6_,*(ushort *)(param_1 + 7) >> 8 | *(ushort *)(param_1 + 7) << 8);
  if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac3c);
    (*pcVar4)();
  }
  uVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = (uint)uVar11;
  if ((uVar11 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar7 + 2) {
      iVar1 = (uVar7 + 2) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar8 & 1);
  }
  FUN_100612380(2,uVar7);
  FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
  uVar8 = *(uint *)((long)unaff_x20 + 0xc);
  uVar7 = uVar8 + 2;
  if (0xfffffffd < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac40);
    (*pcVar4)();
  }
  *(uint *)((long)unaff_x20 + 0xc) = uVar7;
  local_a0 = CONCAT62(local_a0._2_6_,uVar2 >> 8 | uVar2 << 8);
  if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac44);
    (*pcVar4)();
  }
  uVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = (uint)uVar11;
  if ((uVar11 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar8 + 4) {
      iVar1 = (uVar8 + 4) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar9 & 1);
  }
  FUN_100612380(2,uVar7);
  FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
  uVar8 = *(uint *)((long)unaff_x20 + 0xc);
  uVar7 = uVar8 + 2;
  if (0xfffffffd < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac48);
    (*pcVar4)();
  }
  *(uint *)((long)unaff_x20 + 0xc) = uVar7;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  local_a0 = CONCAT44(local_a0._4_4_,uVar6 >> 0x10 | uVar6 << 0x10);
  if (0xfffffffb < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac4c);
    (*pcVar4)();
  }
  uVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = (uint)uVar11;
  if ((uVar11 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar8 + 6) {
      iVar1 = (uVar8 + 6) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar6 & 1);
  }
  FUN_100612380(4,uVar7);
  FUN_10061258c(&local_a0,(long)&local_a0 + 4,uVar7);
  uVar6 = *(uint *)((long)unaff_x20 + 0xc);
  uVar7 = uVar6 + 4;
  if (0xfffffffb < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac50);
    (*pcVar4)();
  }
  *(uint *)((long)unaff_x20 + 0xc) = uVar7;
  uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = 0;
  if ((char)lVar3 != '\x01') {
    uVar5 = uVar8 >> 0x10 | uVar8 << 0x10;
  }
  local_a0 = CONCAT44(local_a0._4_4_,uVar5);
  if (0xfffffffb < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac54);
    (*pcVar4)();
  }
  uVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = (uint)uVar11;
  if ((uVar11 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar6 + 8) {
      iVar1 = (uVar6 + 8) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar5 & 1);
  }
  FUN_100612380(4,uVar7);
  FUN_10061258c(&local_a0,(long)&local_a0 + 4,uVar7);
  uVar5 = *(uint *)((long)unaff_x20 + 0xc);
  uVar7 = uVar5 + 4;
  if (0xfffffffb < uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac58);
    (*pcVar4)();
  }
  *(uint *)((long)unaff_x20 + 0xc) = uVar7;
  local_a0 = (ulong)CONCAT61(local_a0._2_6_,(char)lVar15) << 8 | 0x50;
  if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac5c);
    (*pcVar4)();
  }
  uVar11 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = (uint)uVar11;
  if ((uVar11 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar5 + 6) {
      iVar1 = (uVar5 + 6) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar6 & 1);
  }
  FUN_100612380(2,uVar7);
  FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
  uVar5 = *(uint *)((long)unaff_x20 + 0xc);
  uVar7 = uVar5 + 2;
  if (uVar5 < 0xfffffffe) {
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = CONCAT62(local_a0._2_6_,0xffff);
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac64);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 4) {
        iVar1 = (uVar5 + 4) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar6 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 2;
    if (0xfffffffd < uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac68);
      (*pcVar4)();
    }
    *(uint *)((long)unaff_x20 + 0xc) = uVar7;
    local_a0 = CONCAT62(local_a0._2_6_,0xad0b);
    if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac6c);
      (*pcVar4)();
    }
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5 + 4) {
        iVar1 = (uVar5 + 4) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar6 & 1);
    }
    FUN_100612380(2,uVar7);
    FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
    uVar5 = *(uint *)((long)unaff_x20 + 0xc);
    uVar7 = uVar5 + 2;
    if (uVar5 < 0xfffffffe) {
      *(uint *)((long)unaff_x20 + 0xc) = uVar7;
      local_a0 = local_a0 & 0xffffffffffff0000;
      if (0xfffffffd < uVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac74);
        (*pcVar4)();
      }
      uVar11 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = (uint)uVar11;
      if ((uVar11 & 1) == 0) {
        iVar1 = 0;
        if ((uint)unaff_x20[2] <= uVar5 + 4) {
          iVar1 = (uVar5 + 4) - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar6 & 1);
      }
      FUN_100612380(2,uVar7);
      FUN_10061258c(&local_a0,(long)&local_a0 + 2,uVar7);
      if (*(uint *)((long)unaff_x20 + 0xc) < 0xfffffffe) {
        *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + 2;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac78);
      (*pcVar4)();
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac70);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10097ac60);
  (*pcVar4)();
}



/* Address: 0x10097ad90 | FUN_10097ad90 */

void FUN_10097ad90(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint uVar17;
  ulong *puVar18;
  timeval local_178;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 local_130 [16];
  ulong *local_120;
  __darwin_time_t _Stack_118;
  __darwin_suseconds_t local_110;
  undefined1 local_108;
  int local_104;
  undefined1 local_100;
  int local_fc;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined1 local_f0 [16];
  ulong local_e0;
  __darwin_time_t _Stack_d8;
  __darwin_suseconds_t local_d0;
  undefined1 local_c8;
  int local_c4;
  undefined1 local_c0;
  uint local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined8 local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  __darwin_time_t _Stack_98;
  __darwin_suseconds_t local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  uint local_7c;
  undefined2 local_78;
  undefined2 local_76;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  cVar3 = *(char *)(unaff_x20 + 0x60);
  if (cVar3 == '\0') {
    *(undefined1 *)(unaff_x20 + 0x60) = 2;
  }
  _swift_beginAccess(unaff_x20 + 0x38,&local_b0,0x21,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b414);
    (*pcVar4)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    lVar13 = *(long *)(unaff_x20 + 0x38);
    _swift_beginAccess(lVar13 + 0x10,auStack_148,0,0);
    uVar5 = (ulong)*(uint *)(lVar13 + 0x10);
    FUN_10061204c();
    *(ulong *)(unaff_x20 + 0x38) = uVar5;
    _swift_release(lVar13);
  }
  lVar13 = *(long *)(unaff_x20 + 0x38);
  puVar10 = auStack_160;
  _swift_beginAccess(lVar13 + 0x10,puVar10,0,0);
  uVar17 = (uint)puVar10;
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(lVar13 + 0x10);
  *(undefined2 *)(unaff_x20 + 0x4c) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_endAccess(&local_b0);
  puVar6 = param_1;
  if (cVar3 == '\x01') {
    FUN_100979564();
    FUN_10097963c();
    lVar13 = 0x50;
    lVar11 = 0x58;
  }
  else {
    FUN_10097963c();
    FUN_100979564();
    lVar13 = 0x58;
    lVar11 = 0x50;
  }
  uVar1 = *(uint *)(unaff_x20 + lVar11);
  uVar2 = *(uint *)(unaff_x20 + lVar13);
  puVar7 = puVar6;
  FUN_100666f78();
  if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b418);
    (*pcVar4)();
  }
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3dc);
    (*pcVar4)();
  }
  if ((ulong)puVar7 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3e0);
    (*pcVar4)();
  }
  puVar8 = param_1;
  FUN_100666f78();
  if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b41c);
    (*pcVar4)();
  }
  if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3e4);
    (*pcVar4)();
  }
  if ((ulong)puVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3e8);
    (*pcVar4)();
  }
  uVar5 = (ulong)puVar6 >> 0x3e;
  uVar17 = (uint)((ulong)puVar6 >> 0x3e);
  if (uVar17 == 0) {
    puVar14 = param_1;
    puVar15 = param_1;
    puVar16 = puVar6;
    if ((ulong)param_1 >> 0x3e != 0) goto LAB_10097b08c;
LAB_10097af60:
    puVar18 = (ulong *)((ulong)puVar6 & 0x3fffffffffffffff);
    local_f0._0_8_ = 0;
    local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
    _swift_retain_n(puVar18,4);
    _swift_retain_n(puVar15,4);
    _gettimeofday((timeval *)local_f0,(void *)0x0);
    FUN_10097d0e8(puVar16,puVar14);
    _swift_release(puVar18);
    _swift_release(puVar15);
    local_b0 = 0;
    _Stack_98 = local_f0._0_8_;
    local_90 = local_f0._8_4_;
    local_88 = 1;
    local_84 = 0;
    local_80 = 1;
    local_78 = SUB82(puVar7,0);
    local_76 = SUB82(puVar8,0);
    puVar10 = local_f0;
    puStack_a8 = puVar16;
    local_a0 = puVar14;
    local_7c = uVar1;
    _swift_beginAccess(unaff_x20 + 0x38,puVar10,0x21,0);
    uVar17 = (uint)puVar10;
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b424);
      (*pcVar4)();
    }
    FUN_10097a1a0(&local_b0);
    _swift_endAccess(local_f0);
    FUN_10097d10c(&local_b0);
    if (0xfffffffe < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3ec);
      (*pcVar4)();
    }
    puVar7 = param_1;
    FUN_100666f78();
    if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b428);
      (*pcVar4)();
    }
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3f0);
      (*pcVar4)();
    }
    if ((ulong)puVar7 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3f4);
      (*pcVar4)();
    }
    puVar8 = puVar6;
    FUN_100666f78();
    if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b42c);
      (*pcVar4)();
    }
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3f8);
      (*pcVar4)();
    }
    if ((ulong)puVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b3fc);
      (*pcVar4)();
    }
    uVar12 = (ulong)param_1 >> 0x3e;
    if (uVar12 == 0) {
      puVar14 = puVar6;
      puVar16 = param_1;
      if (uVar5 != 0) goto LAB_10097b1fc;
LAB_10097b0cc:
      local_130._0_8_ = 0;
      local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
      _swift_retain_n(puVar15,3);
      _swift_retain_n(puVar18,3);
      _gettimeofday((timeval *)local_130,(void *)0x0);
      FUN_10097d0e8(puVar16,puVar14);
      _swift_release(puVar15);
      _swift_release(puVar18);
      local_f0._0_8_ = 0;
      _Stack_d8 = local_130._0_8_;
      local_d0 = local_130._8_4_;
      local_c8 = 0x11;
      local_c0 = 0;
      local_b8 = SUB82(puVar7,0);
      local_b6 = SUB82(puVar8,0);
      puVar10 = local_130;
      local_f0._8_8_ = puVar16;
      local_e0 = (ulong)puVar14;
      local_c4 = uVar1 + 1;
      local_bc = uVar2;
      _swift_beginAccess(unaff_x20 + 0x38,puVar10,0x21,0);
      uVar17 = (uint)puVar10;
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b430);
        (*pcVar4)();
      }
      FUN_10097a1a0(local_f0);
      _swift_endAccess(local_130);
      FUN_10097d10c(local_f0);
      if (0xfffffffe < uVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b400);
        (*pcVar4)();
      }
      puVar7 = puVar6;
      FUN_100666f78();
      if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b434);
        (*pcVar4)();
      }
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b404);
        (*pcVar4)();
      }
      if ((ulong)puVar7 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b408);
        (*pcVar4)();
      }
      puVar8 = param_1;
      FUN_100666f78();
      if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b438);
        (*pcVar4)();
      }
      if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b40c);
        (*pcVar4)();
      }
      if ((ulong)puVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b410);
        (*pcVar4)();
      }
      if (uVar5 == 0) {
        if (uVar12 == 0) {
LAB_10097b23c:
          local_178.tv_sec = 0;
          local_178.tv_usec = 0;
          _swift_retain_n(puVar15,2);
          _swift_retain_n(puVar18,2);
          _gettimeofday(&local_178,(void *)0x0);
          FUN_10097d0e8(puVar6,param_1);
          _swift_release(puVar18);
          _swift_release(puVar15);
          local_130._0_8_ = 0;
          _Stack_118 = local_178.tv_sec;
          local_110 = local_178.tv_usec;
          local_108 = 0x10;
          local_100 = 0;
          local_f8 = SUB82(puVar7,0);
          local_f6 = SUB82(puVar8,0);
          local_130._8_8_ = puVar6;
          local_120 = param_1;
          local_104 = uVar2 + 1;
          local_fc = uVar1 + 1;
          _swift_beginAccess(unaff_x20 + 0x38,&local_178,0x21,0);
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b43c);
            (*pcVar4)();
          }
          FUN_10097a1a0(local_130);
          _swift_endAccess(&local_178);
          FUN_10097d10c(local_130);
          lVar13 = *(long *)(unaff_x20 + 0x38);
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10097b440);
            (*pcVar4)();
          }
          pcVar4 = *(code **)(unaff_x20 + 0x10);
          _swift_retain(lVar13);
          (*pcVar4)();
          _swift_release(puVar18);
          _swift_release(puVar15);
          _swift_release(lVar13);
          goto LAB_10097b398;
        }
      }
      else if (uVar12 == 1) {
        param_1 = (ulong *)((ulong)puVar15 | 0x8000000000000000);
        puVar6 = puVar18;
        goto LAB_10097b23c;
      }
      FUN_10097d0a8();
      puVar9 = &DAT_100f1ebe0;
      _swift_allocError(&DAT_100f1ebe0,puVar8,0,0);
      *puVar8 = (ulong)puVar6;
      puVar8[1] = (ulong)param_1;
    }
    else {
      if (uVar5 == 1) {
        puVar14 = (ulong *)((ulong)puVar18 | 0x8000000000000000);
        puVar16 = puVar15;
        goto LAB_10097b0cc;
      }
LAB_10097b1fc:
      FUN_10097d0a8();
      puVar9 = &DAT_100f1ebe0;
      _swift_allocError(&DAT_100f1ebe0,puVar8,0,0);
      *puVar8 = (ulong)param_1;
      puVar8[1] = (ulong)puVar6;
    }
    _swift_willThrow();
    _swift_release(puVar18);
    _swift_release(puVar15);
  }
  else {
    if ((uVar17 == 1) && ((ulong)param_1 >> 0x3e == 1)) {
      puVar14 = (ulong *)((ulong)param_1 & 0x3fffffffffffffff | 0x8000000000000000);
      puVar15 = (ulong *)((ulong)param_1 & 0x3fffffffffffffff);
      puVar16 = (ulong *)((ulong)puVar6 & 0x3fffffffffffffff);
      goto LAB_10097af60;
    }
LAB_10097b08c:
    FUN_10097d0a8();
    puVar9 = &DAT_100f1ebe0;
    _swift_allocError(&DAT_100f1ebe0,puVar8,0,0);
    *puVar8 = (ulong)puVar6;
    puVar8[1] = (ulong)param_1;
    _swift_willThrow();
  }
  FUN_100626c9c(puVar9);
  _swift_errorRelease(puVar9);
LAB_10097b398:
  FUN_100626b8c();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10097b440 | FUN_10097b440 */

void FUN_10097b440(ulong param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  uint uVar10;
  timeval *ptVar11;
  undefined8 uVar12;
  uint uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong local_128;
  int local_120;
  int iStack_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  ulong local_110;
  uint local_108;
  uint uStack_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  timeval local_f8;
  timeval tStack_e0;
  undefined1 auStack_c8 [24];
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  __darwin_time_t _Stack_98;
  __darwin_suseconds_t local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x20 + 0x60) == '\0') {
    uVar2 = param_1;
    uVar4 = param_2;
    FUN_10065b5f8();
    uVar13 = (uint)uVar4;
    uVar18 = (uint)(uVar4 >> 0x20);
    if (uVar18 != uVar13) {
      _swift_beginAccess(unaff_x20 + 0x38,&local_b0,0x21,0);
      uVar3 = *(ulong *)(unaff_x20 + 0x38);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b8ac);
        (*pcVar1)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar3 & 1) == 0) {
        lVar14 = *(long *)(unaff_x20 + 0x38);
        _swift_beginAccess(lVar14 + 0x10,auStack_c8,0,0);
        uVar3 = (ulong)*(uint *)(lVar14 + 0x10);
        FUN_10061204c();
        *(ulong *)(unaff_x20 + 0x38) = uVar3;
        _swift_release(lVar14);
      }
      lVar14 = *(long *)(unaff_x20 + 0x38);
      ptVar11 = &tStack_e0;
      uVar12 = 0;
      _swift_beginAccess(lVar14 + 0x10,ptVar11,0,0);
      *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(lVar14 + 0x10);
      *(undefined2 *)(unaff_x20 + 0x4c) = 0;
      *(undefined1 *)(unaff_x20 + 0x4e) = 0;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      _swift_endAccess(&local_b0);
      local_100 = (undefined4)param_3;
      local_fc = (undefined2)((ulong)param_3 >> 0x20);
      local_fa = (undefined1)((ulong)param_3 >> 0x30);
      local_110 = uVar2;
      local_108 = uVar13;
      uStack_104 = uVar18;
      _swift_retain(uVar2);
      while (uVar13 != uVar18) {
        uVar13 = uVar18 - (int)uVar4;
        if (0xffd6 < uVar13) {
          uVar13 = 0xffd7;
        }
        uVar4 = (ulong)uVar13;
        FUN_10060c6b4();
        if (uVar4 == 0) break;
        iVar20 = (int)ptVar11;
        iVar16 = (int)((ulong)ptVar11 >> 0x20);
        local_118 = (undefined4)uVar12;
        local_114 = (undefined2)((ulong)uVar12 >> 0x20);
        local_112 = (undefined1)((ulong)uVar12 >> 0x30);
        uVar3 = param_1;
        local_128 = uVar4;
        local_120 = iVar20;
        iStack_11c = iVar16;
        FUN_10097963c();
        uVar10 = (uint)ptVar11;
        uVar15 = param_1;
        FUN_100979564();
        uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
        uVar5 = param_1;
        FUN_10097963c();
        uVar6 = uVar5;
        FUN_100666f78();
        uVar13 = uVar10 & 0xff;
        _swift_release(uVar5 & 0x3fffffffffffffff);
        if (uVar13 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b898);
          (*pcVar1)();
        }
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b884);
          (*pcVar1)();
        }
        if (uVar6 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b888);
          (*pcVar1)();
        }
        uVar5 = param_1;
        FUN_100979564();
        uVar7 = uVar5;
        FUN_100666f78();
        puVar8 = (ulong *)(uVar5 & 0x3fffffffffffffff);
        _swift_release();
        if ((uVar10 & 0xff) == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b89c);
          (*pcVar1)();
        }
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b88c);
          (*pcVar1)();
        }
        if (uVar7 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b890);
          (*pcVar1)();
        }
        uVar13 = (uint)(uVar3 >> 0x3e);
        if (uVar13 == 0) {
          uVar5 = uVar3;
          uVar19 = uVar15;
          if (uVar15 >> 0x3e != 0) goto LAB_10097b81c;
        }
        else {
          if ((uVar13 != 1) || (uVar15 >> 0x3e != 1)) {
LAB_10097b81c:
            FUN_10097d0a8();
            puVar9 = &DAT_100f1ebe0;
            _swift_allocError(&DAT_100f1ebe0,puVar8,0,0);
            *puVar8 = uVar3;
            puVar8[1] = uVar15;
            _swift_willThrow();
            _swift_release(uVar4);
            _swift_release(uVar2);
            FUN_100626c9c(puVar9);
            _swift_release(uVar2);
            _swift_errorRelease(puVar9);
            goto LAB_10097b7dc;
          }
          uVar19 = uVar15 & 0x3fffffffffffffff;
          uVar15 = uVar15 & 0x3fffffffffffffff;
          uVar5 = uVar3 & 0x3fffffffffffffff;
          uVar19 = uVar19 | 0x8000000000000000;
        }
        uVar17 = (ulong)(uint)(iVar16 - iVar20);
        local_f8.tv_sec = 0;
        local_f8.tv_usec = 0;
        _swift_retain_n(uVar3 & 0x3fffffffffffffff,2);
        _swift_retain_n(uVar15,2);
        _gettimeofday(&local_f8,(void *)0x0);
        FUN_10097d0e8(uVar5,uVar19);
        _swift_release(uVar3 & 0x3fffffffffffffff);
        _swift_release(uVar15);
        _Stack_98 = local_f8.tv_sec;
        local_90 = local_f8.tv_usec;
        local_88 = 0;
        local_84 = 0;
        local_80 = 1;
        local_7c = (undefined4)uVar12;
        local_78 = (undefined2)uVar6;
        local_76 = (undefined2)uVar7;
        local_b0 = uVar17;
        uStack_a8 = uVar5;
        local_a0 = uVar19;
        _swift_beginAccess(unaff_x20 + 0x38,&local_f8,0x21,0);
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b8a0);
          (*pcVar1)();
        }
        FUN_10097a1a0(&local_b0);
        _swift_endAccess(&local_f8);
        FUN_10097d10c(&local_b0);
        if (CARRY8(*(ulong *)(unaff_x20 + 0x50),uVar17)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b894);
          (*pcVar1)();
        }
        *(ulong *)(unaff_x20 + 0x50) = *(ulong *)(unaff_x20 + 0x50) + uVar17;
        ptVar11 = &local_f8;
        uVar12 = 0x21;
        _swift_beginAccess(unaff_x20 + 0x38,ptVar11,0x21,0);
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b8a4);
          (*pcVar1)();
        }
        FUN_10060c3b0(&local_128);
        _swift_endAccess(&local_f8);
        _swift_release(uVar4);
        uVar4 = (ulong)local_108;
        uVar13 = local_108;
      }
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10097b8b0);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(unaff_x20 + 0x10);
      _swift_retain(*(long *)(unaff_x20 + 0x38));
      (*pcVar1)();
      _swift_release_n(uVar2,2);
    }
    _swift_release();
  }
LAB_10097b7dc:
  FUN_100626ce0(param_2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10097b8b0 | FUN_10097b8b0 */

void FUN_10097b8b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100f1e5a8;
  uVar8 = 0x27;
  uVar9 = 7;
  _swift_allocObject();
  puVar3 = puVar2;
  FUN_10065b5f8();
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(int *)(puVar2 + 0x18) = (int)uVar8;
  *(int *)(puVar2 + 0x1c) = (int)((ulong)uVar8 >> 0x20);
  *(int *)(puVar2 + 0x20) = (int)uVar9;
  *(short *)(puVar2 + 0x24) = (short)((ulong)uVar9 >> 0x20);
  puVar2[0x26] = (char)((ulong)uVar9 >> 0x30);
  if (*(char *)(unaff_x20 + 0x30) == '\0') {
    FUN_10097bbe4();
    FUN_100626ebc(param_2,param_3);
    _swift_release(puVar2);
    return;
  }
  lVar4 = param_3;
  if (param_3 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    _swift_getObjectType(lVar4);
    puVar3 = PTR___type_metadata_for____100eae0c8;
    FUN_1000f4a44();
    FUN_100974aa4(lVar4,puVar3 + 8,uVar8);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _swift_retain(lVar4);
  _swift_unknownObjectRetain(lVar1);
  _swift_retain(param_3);
  lVar5 = lVar1;
  FUN_10097c014(lVar1,uVar8);
  _swift_release(lVar4);
  _swift_unknownObjectRelease(lVar1);
  puVar3 = &DAT_100f1e5d0;
  _swift_allocObject(&DAT_100f1e5d0,0x28,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(long *)(puVar3 + 0x20) = param_1;
  puVar6 = &DAT_100f1e5f8;
  _swift_allocObject(&DAT_100f1e5f8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10097d190;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  puVar7 = &DAT_100f1e620;
  _swift_allocObject(&DAT_100f1e620,0x28,7);
  *(long *)(puVar7 + 0x10) = lVar5;
  *(code **)(puVar7 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  _swift_beginAccess(lVar5 + 0x10,auStack_78,0,0);
  if (*(char *)(lVar5 + 0x18) == '\x01') {
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_1);
    _swift_retain(puVar6);
    _swift_retain(lVar5);
  }
  else if (*(char *)(lVar5 + 0x18) == -1) {
    _swift_beginAccess(lVar5 + 0x30,auStack_90,0x21,0);
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_1);
    _swift_retain(puVar6);
    _swift_retain(lVar5);
    FUN_10064967c(FUN_1008a8990,puVar7);
    _swift_endAccess(auStack_90);
  }
  else {
    _swift_retain();
    _swift_retain(puVar2);
    _swift_retain(param_1);
    _swift_retain(puVar6);
    _swift_retain(lVar5);
    _swift_retain(puVar3);
    FUN_10097bbe4();
    _swift_release(puVar3);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar5);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
  _swift_retain(lVar4);
  FUN_100626ebc(param_2,lVar4);
  _swift_release(puVar2);
  _swift_release_n(lVar4,2);
  return;
}



/* Address: 0x10097bbe4 | FUN_10097bbe4 */

void FUN_10097bbe4(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  timeval *ptVar10;
  timeval *ptVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_110;
  int local_108;
  int iStack_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  timeval local_f8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  __darwin_time_t _Stack_98;
  __darwin_suseconds_t local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_beginAccess(param_1 + 0x38,&local_b0,0x21,0);
  uVar3 = *(ulong *)(param_1 + 0x38);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10097c00c);
    (*pcVar2)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    lVar16 = *(long *)(param_1 + 0x38);
    _swift_beginAccess(lVar16 + 0x10,auStack_c8,0,0);
    uVar3 = (ulong)*(uint *)(lVar16 + 0x10);
    FUN_10061204c();
    *(ulong *)(param_1 + 0x38) = uVar3;
    _swift_release(lVar16);
  }
  lVar16 = *(long *)(param_1 + 0x38);
  _swift_beginAccess(lVar16 + 0x10,auStack_e0,0,0);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar16 + 0x10);
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  _swift_endAccess(&local_b0);
  ptVar10 = &local_f8;
  uVar12 = 0x21;
  _swift_beginAccess(param_2 + 0x10,ptVar10,0x21,0);
  iVar17 = *(int *)(param_2 + 0x18);
  iVar14 = *(int *)(param_2 + 0x1c);
  if (iVar14 != iVar17) {
    do {
      uVar13 = iVar14 - iVar17;
      if (0xffd6 < uVar13) {
        uVar13 = 0xffd7;
      }
      uVar3 = (ulong)uVar13;
      FUN_10060c6b4();
      ptVar11 = ptVar10;
      _swift_endAccess(&local_f8);
      uVar13 = (uint)ptVar11;
      if (uVar3 == 0) goto LAB_10097bf20;
      iVar17 = (int)((ulong)ptVar10 >> 0x20);
      local_100 = (undefined4)uVar12;
      local_fc = (undefined2)((ulong)uVar12 >> 0x20);
      local_fa = (undefined1)((ulong)uVar12 >> 0x30);
      uVar4 = param_3;
      local_110 = uVar3;
      local_108 = (int)ptVar10;
      iStack_104 = iVar17;
      FUN_100979564();
      uVar15 = param_3;
      FUN_10097963c();
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = param_3;
      FUN_100979564();
      uVar6 = uVar5;
      FUN_100666f78();
      uVar1 = uVar13 & 0xff;
      _swift_release(uVar5 & 0x3fffffffffffffff);
      if (uVar1 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bffc);
        (*pcVar2)();
      }
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bfe8);
        (*pcVar2)();
      }
      if (uVar6 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bfec);
        (*pcVar2)();
      }
      uVar5 = param_3;
      FUN_10097963c();
      uVar7 = uVar5;
      FUN_100666f78();
      puVar8 = (ulong *)(uVar5 & 0x3fffffffffffffff);
      _swift_release();
      if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097c000);
        (*pcVar2)();
      }
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bff0);
        (*pcVar2)();
      }
      if (uVar7 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bff4);
        (*pcVar2)();
      }
      uVar13 = (uint)(uVar4 >> 0x3e);
      if (uVar13 == 0) {
        uVar5 = uVar4;
        uVar19 = uVar15;
        if (uVar15 >> 0x3e != 0) goto LAB_10097bf64;
      }
      else {
        if ((uVar13 != 1) || (uVar15 >> 0x3e != 1)) {
LAB_10097bf64:
          FUN_10097d0a8();
          puVar9 = &DAT_100f1ebe0;
          _swift_allocError(&DAT_100f1ebe0,puVar8,0,0);
          *puVar8 = uVar4;
          puVar8[1] = uVar15;
          _swift_willThrow();
          _swift_release(uVar3);
          FUN_100626c9c(puVar9);
          _swift_errorRelease(puVar9);
          goto LAB_10097bfac;
        }
        uVar19 = uVar15 & 0x3fffffffffffffff;
        uVar15 = uVar15 & 0x3fffffffffffffff;
        uVar5 = uVar4 & 0x3fffffffffffffff;
        uVar19 = uVar19 | 0x8000000000000000;
      }
      uVar18 = (ulong)(uint)(iVar17 - (int)ptVar10);
      local_f8.tv_sec = 0;
      local_f8.tv_usec = 0;
      _swift_retain_n(uVar4 & 0x3fffffffffffffff,2);
      _swift_retain_n(uVar15,2);
      _gettimeofday(&local_f8,(void *)0x0);
      FUN_10097d0e8(uVar5,uVar19);
      _swift_release(uVar4 & 0x3fffffffffffffff);
      _swift_release(uVar15);
      _Stack_98 = local_f8.tv_sec;
      local_90 = local_f8.tv_usec;
      local_88 = 0;
      local_84 = 0;
      local_80 = 1;
      local_7c = (undefined4)uVar12;
      local_78 = (undefined2)uVar6;
      local_76 = (undefined2)uVar7;
      local_b0 = uVar18;
      uStack_a8 = uVar5;
      local_a0 = uVar19;
      _swift_beginAccess(param_1 + 0x38,&local_f8,0x21,0);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097c004);
        (*pcVar2)();
      }
      FUN_10097a1a0(&local_b0);
      _swift_endAccess(&local_f8);
      FUN_10097d10c(&local_b0);
      if (CARRY8(*(ulong *)(param_1 + 0x58),uVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097bff8);
        (*pcVar2)();
      }
      *(ulong *)(param_1 + 0x58) = *(ulong *)(param_1 + 0x58) + uVar18;
      _swift_beginAccess(param_1 + 0x38,&local_f8,0x21,0);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10097c008);
        (*pcVar2)();
      }
      FUN_10060c3b0(&local_110);
      _swift_endAccess(&local_f8);
      _swift_release(uVar3);
      ptVar10 = &local_f8;
      uVar12 = 0x21;
      _swift_beginAccess(param_2 + 0x10,ptVar10,0x21,0);
      iVar17 = *(int *)(param_2 + 0x18);
      iVar14 = *(int *)(param_2 + 0x1c);
    } while (iVar14 != iVar17);
  }
  _swift_endAccess(&local_f8);
LAB_10097bf20:
  lVar16 = *(long *)(param_1 + 0x38);
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10097c014);
    (*pcVar2)();
  }
  pcVar2 = *(code **)(param_1 + 0x10);
  _swift_retain(lVar16);
  (*pcVar2)();
  _swift_release(lVar16);
LAB_10097bfac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10097c014 | FUN_10097c014 */

ulong FUN_10097c014(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_100974aa4();
    puVar4 = &DAT_100f1ec50;
    _swift_allocObject(&DAT_100f1ec50,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_10097d9e4;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f1ec78;
      _swift_allocObject(&DAT_100f1ec78,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(FUN_10097da28,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_10097cf74(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Address: 0x10097c244 | FUN_10097c244 */

void FUN_10097c244(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long unaff_x20;
  char local_51;
  undefined1 auStack_50 [32];
  
  FUN_10000cbfc(param_2,auStack_50);
  pcVar1 = &local_51;
  _swift_dynamicCast(pcVar1,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,&DAT_100eeb880,6);
  if (((((ulong)pcVar1 & 1) != 0) && (local_51 == '\0')) && (1 < *(byte *)(unaff_x20 + 0x60) - 1)) {
    *(undefined1 *)(unaff_x20 + 0x60) = 2;
  }
  FUN_100626b98(param_2);
  return;
}



/* Address: 0x10097c2d4 | FUN_10097c2d4 */

void FUN_10097c2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  if (1 < *(byte *)(unaff_x20 + 0x60) - 1) {
    *(undefined1 *)(unaff_x20 + 0x60) = 1;
  }
  FUN_100626d64(param_1,param_2,param_3);
  return;
}



/* Address: 0x10097c318 | FUN_10097c318 */

void FUN_10097c318(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  FUN_10065b97c();
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar2 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar2;
  return;
}



/* Address: 0x10097c354 | thunk_FUN_100979b48 */

void thunk_FUN_100979b48(void)

{
  FUN_100979b48();
  return;
}



/* Address: 0x10097c358 | thunk_FUN_10097ad90 */

void thunk_FUN_10097ad90(void)

{
  FUN_10097ad90();
  return;
}



/* Address: 0x10097c35c | thunk_FUN_10097b440 */

void thunk_FUN_10097b440(void)

{
  FUN_10097b440();
  return;
}



/* Address: 0x10097c360 | thunk_FUN_10097c244 */

void thunk_FUN_10097c244(void)

{
  FUN_10097c244();
  return;
}



/* Address: 0x10097c364 | thunk_FUN_10061f240 */

void thunk_FUN_10061f240(void)

{
  thunk_FUN_10061f240();
  return;
}



/* Address: 0x10097c368 | thunk_FUN_10061e600 */

void thunk_FUN_10061e600(void)

{
  FUN_10061e600();
  return;
}



/* Address: 0x10097c36c | thunk_FUN_10061e62c */

void thunk_FUN_10061e62c(void)

{
  FUN_10061e62c();
  return;
}



/* Address: 0x10097c370 | thunk_FUN_10097b8b0 */

void thunk_FUN_10097b8b0(void)

{
  FUN_10097b8b0();
  return;
}


