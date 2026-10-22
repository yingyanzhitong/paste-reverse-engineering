/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100976340 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100976344 | FUN_100976344 */

void FUN_100976344(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100976350 | FUN_100976350 */

void FUN_100976350(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c88af0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1009763c8 | FUN_1009763c8 */

ulong * FUN_1009763c8(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 9 | uVar4) - *(long *)(lVar3 + 0x40)) {
    uVar1 = *param_2;
    if (0xfffffffe < uVar1) {
      _swift_errorRetain(uVar1);
    }
    *param_1 = uVar1;
    (**(code **)(lVar3 + 0x10))
              ((long)param_1 + uVar4 + 8 & ~uVar4,(long)param_2 + uVar4 + 8 & ~uVar4,lVar2);
  }
  else {
    uVar1 = *param_2;
    *param_1 = uVar1;
    param_1 = (ulong *)(uVar1 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009764a8 | FUN_1009764a8 */

void FUN_1009764a8(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0xfffffffe < *param_1) {
    _swift_errorRelease();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001009764f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x1009764f8 | FUN_1009764f8 */

ulong * FUN_1009764f8(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (0xfffffffe < uVar2) {
    _swift_errorRetain(uVar2);
  }
  *param_1 = uVar2;
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x10))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10097656c | FUN_10097656c */

ulong * FUN_10097656c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar3) {
      _swift_errorRetain(uVar3);
    }
    *param_1 = uVar3;
  }
  else if (uVar3 < 0xffffffff) {
    _swift_errorRelease();
    *param_1 = *param_2;
  }
  else {
    _swift_errorRetain(uVar3);
    uVar1 = *param_1;
    *param_1 = uVar3;
    _swift_errorRelease(uVar1);
  }
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x18))
            (uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100976624 | FUN_100976624 */

ulong * FUN_100976624(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (0xfffffffe < *param_1) {
    if (0xfffffffe < uVar2) {
      *param_1 = uVar2;
      _swift_errorRelease();
      goto LAB_100976680;
    }
    _swift_errorRelease();
  }
  *param_1 = uVar2;
LAB_100976680:
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x28))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1009766bc | FUN_1009766bc */

ulong FUN_1009766bc(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x7ffffffe) {
    uVar1 = 0x7ffffffd;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100976768;
  uVar5 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_100976768;
      goto LAB_100976728;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_100976728:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
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
        uVar5 = (ulong)(uint)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_100976768:
  if (uVar2 < 0x7ffffffe) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    uVar1 = 0;
    if (2 < (int)uVar7 + 1U) {
      uVar1 = (int)uVar7 - 1;
    }
    return (ulong)uVar1;
  }
  uVar7 = (long)param_1 + uVar7 + 8 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001009767b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x10097680c | FUN_10097680c */

void FUN_10097680c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7ffffffe) {
    uVar2 = 0x7ffffffd;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar9 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar6 = 2;
    if (0xfffe < uVar4) {
      bVar6 = 4;
    }
    if (uVar4 < 0xff) {
      bVar6 = uVar4 != 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffd < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001009769a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8);
        return;
      }
      if (param_2 < 0x7ffffffe) {
        *param_1 = (ulong)(param_2 + 1);
      }
      else {
        *param_1 = 0;
        *(uint *)param_1 = param_2 + 0x80000002;
      }
    }
  }
  return;
}



/* Address: 0x100976a20 | FUN_100976a20 */

void FUN_100976a20(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100976a2c | FUN_100976a2c */

void FUN_100976a2c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100976a38 | FUN_100976a38 */

void FUN_100976a38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = 0;
  pcVar2 = *(code **)(param_4 + 0x20);
  lVar1 = 0;
  FUN_100976a20();
  (*pcVar2)((long)param_1 + (long)*(int *)(lVar1 + 0x24),param_2,param_3,param_4);
  return;
}



/* Address: 0x100976a98 | FUN_100976a98 */

void FUN_100976a98(long param_1)

{
  long *unaff_x20;
  
  if (*unaff_x20 == 0) {
    *unaff_x20 = 1;
    (**(code **)(*(long *)(param_1 + 0x18) + 0x38))
              ((long)*(int *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



/* Address: 0x100976ae4 | FUN_100976ae4 */

void FUN_100976ae4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  Optional OVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0xff;
  local_68 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,0x100cc6e6c,&TargetProtocolRequirement_100cc6e7c)
  ;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar4.value) + -8);
  puVar10 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar5 + -8);
  lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*unaff_x20 == 0) {
    lVar6 = lVar1;
    local_78 = CONCAT71(extraout_var,OVar4.value);
    local_70 = param_1;
    (**(code **)(lVar2 + 0x18))(lVar1,lVar2);
    if (lVar6 != 0) {
      (**(code **)(lVar2 + 0x30))(puVar10,local_68,lVar1,lVar2);
      puVar7 = puVar10;
      (**(code **)(lVar12 + 0x30))(puVar10,1,lVar5);
      bVar3 = (int)puVar7 != 1;
      if (bVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x20);
        (*UNRECOVERED_JUMPTABLE)(lVar11,puVar10,lVar5);
        uVar8 = local_70;
        (*UNRECOVERED_JUMPTABLE)(local_70,lVar11,lVar5);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
      }
      else {
        (**(code **)(lVar9 + 8))(puVar10,local_78);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
        uVar8 = local_70;
      }
      (*UNRECOVERED_JUMPTABLE)(uVar8,!bVar3,3,lVar5);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
    uVar8 = 2;
    param_1 = local_70;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
    uVar8 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100976bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar8,3,lVar5);
  return;
}



/* Address: 0x100976ca4 | FUN_100976ca4 */

void FUN_100976ca4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  if (*unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    _swift_errorRetain();
    FUN_100976248(0);
    *unaff_x20 = param_1;
    (**(code **)(lVar2 + 0x38))((long)*(int *)(param_2 + 0x24),uVar1,lVar2);
  }
  return;
}



/* Address: 0x100976d10 | FUN_100976d10 */

undefined * FUN_100976d10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined *puVar2;
  
  puVar1 = (undefined *)*unaff_x20;
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x28))(param_2,param_1,*(undefined8 *)(param_3 + 0x10))
    ;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x1) {
      FUN_1009773f8();
      puVar2 = &DAT_100eeb710;
      _swift_allocError(&DAT_100eeb710,param_1,0,0);
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 3;
    }
  }
  FUN_1009773e8(puVar1);
  return puVar2;
}



/* Address: 0x100976da0 | thunk_FUN_10063258c */

void thunk_FUN_10063258c(void)

{
  FUN_10063258c();
  return;
}



/* Address: 0x100976da4 | thunk_FUN_100634b78 */

undefined1 * thunk_FUN_100634b78(ulong param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar4;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  lVar8 = *(long *)(lVar4 + -8);
  puVar7 = &stack0xffffffffffffffc0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100634c54);
    (*pcVar2)();
  }
  if (param_1 >> 0x20 == 0) {
    iVar6 = (int)LZCOUNT((int)param_1 + -1);
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = 1 << (ulong)(-iVar6 & 0x1f);
    }
    iVar6 = 1;
    if (param_1 != 0) {
      iVar6 = iVar1;
    }
    (**(code **)(*(long *)(param_2 + -8) + 0x38))(puVar7,1,1,param_2);
    puVar5 = puVar7;
    FUN_10063701c(puVar7,iVar6,lVar4);
    (**(code **)(lVar8 + 8))(puVar7,lVar4);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100634c58);
  (*pcVar2)();
}



/* Address: 0x100976da8 | FUN_100976da8 */

void FUN_100976da8(undefined8 param_1,long param_2)

{
  FUN_100637324(0,*(undefined8 *)(param_2 + 0x10));
  FUN_100635b20(param_1);
  return;
}



/* Address: 0x100976dd4 | FUN_100976dd4 */

undefined8 * FUN_100976dd4(long param_1)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  local_40 = unaff_x20[1];
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0;
  local_48 = uVar4;
  FUN_100637324(0,uVar5);
  _swift_retain(uVar4);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c69990;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69990,uVar1);
  puVar3 = &local_48;
  Swift::Array<undefined>::_init(puVar3,uVar5,uVar1,pTVar2);
  FUN_100635854(0,uVar1);
  return puVar3;
}



/* Address: 0x100976e60 | FUN_100976e60 */

void FUN_100976e60(long param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_10063258c(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100976e74 | FUN_100976e74 */

void FUN_100976e74(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  thunk_FUN_100634b78();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  return;
}



/* Address: 0x100976ea0 | FUN_100976ea0 */

void FUN_100976ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100658e40(param_1,param_3);
  return;
}



/* Address: 0x100976ea8 | FUN_100976ea8 */

void FUN_100976ea8(undefined8 param_1,undefined8 param_2)

{
  FUN_100976da8(param_2);
  return;
}



/* Address: 0x100976eb0 | thunk_FUN_100976dd4 */

void thunk_FUN_100976dd4(void)

{
  FUN_100976dd4();
  return;
}



/* Address: 0x100976eb4 | FUN_100976eb4 */

void FUN_100976eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100cc6e4c,&TargetProtocolRequirement_100cc6e54);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,uVar1,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  _swift_getAssociatedConformanceWitness
            (param_4,uVar1,uVar2,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
                    /* WARNING: Could not recover jumptable at 0x000100976f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,param_2,param_4);
  return;
}



/* Address: 0x100976f70 | FUN_100976f70 */

void FUN_100976f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  long lVar4;
  Dictionary DVar5;
  long lVar6;
  Dictionary *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_3 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar7 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),lVar6,0x100cc6e4c,
             &TargetProtocolRequirement_100cc6e54);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar3,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  lVar9 = (long)puVar7 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(lVar9,param_2,lVar4);
  lVar8 = *(long *)(lVar6 + -8);
  (**(code **)(lVar8 + 0x10))(puVar7,param_1,lVar6);
  (**(code **)(lVar8 + 0x38))(puVar7,0,1,lVar6);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar3,lVar4,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
  DVar5 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::_set_subscript(unaff_x20,puVar7,lVar9,DVar5.unknown);
  return;
}



/* Address: 0x1009770d0 | FUN_1009770d0 */

void FUN_1009770d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Dictionary DVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc6e4c,
             &TargetProtocolRequirement_100cc6e54);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar2,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc)
  ;
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar2,uVar3,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
  DVar4 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::_removeValue(param_1,param_2,DVar4.unknown);
  return;
}



/* Address: 0x100977198 | FUN_100977198 */

undefined ** FUN_100977198(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Values VVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  Dictionary DVar8;
  undefined *local_58;
  
  DVar8.unknown = (undefined *)*unaff_x20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),uVar7,0x100cc6e4c,
             &TargetProtocolRequirement_100cc6e54);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar2,uVar3,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
  local_58 = (undefined *)Swift::Dictionary::_get_values(DVar8);
  VVar4 = Swift::Dictionary::Values::typeMetadataAccessor();
  puVar5 = PTR__Swift__Values_>Swift__Sequence_100eabdf0;
  _swift_getWitnessTable(PTR__Swift__Values_>Swift__Sequence_100eabdf0,VVar4.unknown);
  ppuVar6 = &local_58;
  Swift::Array<undefined>::_init(ppuVar6,uVar7,VVar4.unknown,puVar5);
  FUN_1009772b8();
  return ppuVar6;
}



/* Address: 0x1009772b8 | FUN_1009772b8 */

void FUN_1009772b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Dictionary DVar3;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100cc6e4c,&TargetProtocolRequirement_100cc6e54);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,uVar1,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  _swift_getAssociatedConformanceWitness
            (param_4,uVar1,uVar2,0x100cc6bac,&TargetProtocolRequirement_100cc6bb4);
  DVar3 = Swift::Dictionary::typeMetadataAccessor();
  Swift::Dictionary::removeAll(false,DVar3);
  return;
}



/* Address: 0x100977378 | FUN_100977378 */

void FUN_100977378(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100976eb4(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),PTR_get_count_100eabde0);
  return;
}



/* Address: 0x1009773a4 | FUN_1009773a4 */

void FUN_1009773a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  FUN_100976eb4(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20),PTR_init_100eabd98);
  *param_1 = param_2;
  return;
}



/* Address: 0x1009773dc | thunk_FUN_100976f70 */

void thunk_FUN_100976f70(void)

{
  FUN_100976f70();
  return;
}



/* Address: 0x1009773e0 | thunk_FUN_1009770d0 */

void thunk_FUN_1009770d0(void)

{
  FUN_1009770d0();
  return;
}



/* Address: 0x1009773e4 | thunk_FUN_100977198 */

void thunk_FUN_100977198(void)

{
  FUN_100977198();
  return;
}



/* Address: 0x1009773e8 | FUN_1009773e8 */

void FUN_1009773e8(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
  _swift_errorRetain();
  return;
}



/* Address: 0x1009773f8 | FUN_1009773f8 */

void FUN_1009773f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100ff0088 = pTVar1;
  return;
}



/* Address: 0x100977438 | FUN_100977438 */

void FUN_100977438(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100977444 | FUN_100977444 */

void FUN_100977444(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100977450 | FUN_100977450 */

void FUN_100977450(void)

{
  _swift_allocObject();
  FUN_100978954(FUN_100653a08,&TargetProtocolConformanceDescriptor_100c88a00);
  return;
}



/* Address: 0x100977494 | FUN_100977494 */

void FUN_100977494(void)

{
  FUN_100978954(FUN_100653a08,&TargetProtocolConformanceDescriptor_100c88a00);
  return;
}



/* Address: 0x1009774b8 | FUN_1009774b8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100977574 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1009774b8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 local_78 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_78,0x21,0);
  uVar3 = 0xff;
  FUN_100653a08(0xff,*(undefined8 *)(lVar9 + 0x58));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar4,*(undefined8 *)(lVar9 + 0x68));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar5);
  lVar9 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  FUN_100976a98();
  _swift_endAccess(local_78);
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    _Var6 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var6 != 0) {
      lVar10 = 0;
      do {
        lVar7 = lVar10;
        Swift::Array<undefined>::get_subscript(local_78,lVar10,lVar9,uVar3);
        uVar5 = local_78[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10097762c);
          (*pcVar2)();
        }
        FUN_100970578();
        puVar8 = &DAT_100f1d400;
        _swift_allocError(&DAT_100f1d400,lVar7,0,0);
        FUN_100646f54();
        _swift_errorRelease(puVar8);
        _swift_release(uVar5);
        _Var6 = Swift::Array<undefined>::get_endIndex(puVar8,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var6);
    }
    FUN_100976234(lVar9);
  }
  FUN_100626b8c();
  return;
}



/* Address: 0x10097762c | FUN_10097762c */

void FUN_10097762c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar11 = *unaff_x20;
  lVar1 = 0;
  local_88 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)(lVar11 + 0x50),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  lVar8 = *(long *)(lVar1 + -8);
  puVar10 = auStack_90 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar11 + 0x58);
  lVar13 = *(long *)(lVar7 + -8);
  lVar9 = (long)puVar10 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88bb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88bb0,lVar11);
  FUN_10066a0e4(lVar9,param_2,lVar11,pTVar2);
  lVar11 = *(long *)(lVar11 + 0x68);
  pcVar12 = *(code **)(lVar11 + 0x18);
  (*pcVar12)(puVar10,lVar7,lVar11);
  _swift_beginAccess(unaff_x20 + 2,auStack_80,0x21,0);
  uVar3 = 0xff;
  FUN_100653a08(0xff,lVar7);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar4 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar2,lVar11);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar4);
  uVar3 = 0;
  FUN_100976a20(0,uVar4,pTVar2);
  FUN_100976ae4(&local_68,puVar10,uVar3);
  _swift_endAccess(auStack_80);
  puVar5 = puVar10;
  (**(code **)(lVar8 + 8))(puVar10,lVar1);
  if (local_68 == 0) {
    (*pcVar12)(puVar10,lVar7,lVar11);
    puVar6 = (undefined *)0x0;
    FUN_100978944(0,lVar7,lVar11);
    pTVar2 = &TargetProtocolConformanceDescriptor_100c88cfc;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88cfc,puVar6);
    _swift_allocError(puVar6,pTVar2,0,0);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness(0,lVar11,lVar7,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc)
    ;
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(pTVar2,puVar10,lVar1);
    FUN_100626c9c(puVar6);
    (**(code **)(lVar13 + 8))(lVar9,lVar7);
  }
  else {
    if (local_68 != 1) {
      if (local_68 != 2) {
        FUN_100646e88(lVar9,local_68,lVar7);
        FUN_100976258(local_68);
      }
      (**(code **)(lVar13 + 8))(lVar9,lVar7);
      return;
    }
    FUN_10097063c();
    puVar6 = &DAT_100f1d420;
    _swift_allocError(&DAT_100f1d420,puVar5,0,0);
    FUN_100626c9c();
    (**(code **)(lVar13 + 8))(lVar9,lVar7);
  }
  _swift_errorRelease(puVar6);
  return;
}



/* Address: 0x1009778e8 | FUN_1009778e8 */

void FUN_1009778e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
                    /* WARNING: Could not recover jumptable at 0x00010097793c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100977940 | FUN_100977940 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001009779fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100977940(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __int64 _Var7;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_68 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_68,0x21,0);
  uVar8 = *(undefined8 *)(lVar9 + 0x58);
  uVar3 = 0xff;
  FUN_100653a08(0xff,uVar8);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar4,*(undefined8 *)(lVar9 + 0x68));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar5);
  uVar6 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  lVar9 = param_2;
  FUN_100976ca4(param_2,uVar6);
  _swift_endAccess(local_68);
  if (lVar9 != 0) {
    _Var7 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var7 != 0) {
      lVar10 = 0;
      do {
        Swift::Array<undefined>::get_subscript(local_68,lVar10,lVar9,uVar3);
        uVar5 = local_68[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100977a90);
          (*pcVar2)();
        }
        FUN_100646f54(param_2,local_68[0],uVar8);
        _swift_release(uVar5);
        _Var7 = Swift::Array<undefined>::get_endIndex(_Var7,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var7);
    }
    _swift_bridgeObjectRelease(lVar9);
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x100977a90 | FUN_100977a90 */

void FUN_100977a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_f0 [4];
  long *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [72];
  long local_68;
  
  local_d0 = unaff_x20 + 2;
  lVar14 = *unaff_x20;
  lVar11 = *(long *)(lVar14 + 0x60);
  lVar9 = *(long *)(lVar14 + 0x50);
  lVar1 = 0;
  alStack_f0[1] = param_1;
  alStack_f0[3] = param_2;
  local_b8 = param_3;
  _swift_getAssociatedTypeWitness(0,lVar11,lVar9,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  local_c8 = *(long *)(lVar1 + -8);
  lVar12 = (long)alStack_f0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_f0[2] = *(undefined8 *)(lVar14 + 0x58);
  uVar2 = 0xff;
  local_c0 = lVar1;
  FUN_100653a08(0xff);
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,lVar9,uVar2,0,0);
  lVar10 = lVar12 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar9 + -8);
  lVar16 = lVar10 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88bcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88bcc,lVar14);
  FUN_10066a214(lVar10,alStack_f0[3],lVar14,pTVar3);
  lVar8 = *(long *)(lVar10 + *(int *)(lVar1 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar16,lVar10,lVar9);
  (**(code **)(lVar11 + 0x18))(lVar12,lVar9,lVar11);
  local_68 = lVar8;
  _swift_beginAccess(local_d0,auStack_b0,0x21,0);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar2);
  uVar4 = 0xff;
  FUN_100976344(0xff,uVar2,pTVar3,*(undefined8 *)(lVar14 + 0x68));
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar4);
  uVar2 = 0;
  FUN_100976a20(0,uVar4,pTVar3);
  lVar1 = lVar12;
  FUN_100976d10(lVar12,&local_68,uVar2);
  _swift_endAccess(auStack_b0);
  (**(code **)(local_c8 + 8))(lVar12,local_c0);
  if (lVar1 == 0) {
    pTVar3 = &TargetProtocolConformanceDescriptor_100c88bf8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88bf8,lVar14);
    FUN_10066a16c(auStack_b0,lVar16,lVar14,pTVar3);
    FUN_100626ebc(auStack_b0,local_b8);
    _swift_release(lVar8);
    FUN_1005e70f4(auStack_b0);
  }
  else {
    lVar11 = alStack_f0[2];
    FUN_100646f54(lVar1,lVar8,alStack_f0[2]);
    lVar10 = local_b8;
    if (local_b8 == 0) {
      (**(code **)(lVar15 + 8))(lVar16,lVar9);
      _swift_errorRelease(lVar1);
      _swift_release(lVar8);
      return;
    }
    uVar5 = *(ulong *)(local_b8 + 0x20);
    lVar12 = *(long *)(local_b8 + 0x28);
    local_c0 = lVar8;
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar8 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f1e128;
      _swift_allocObject(&DAT_100f1e128,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar10;
      *(long *)(puVar7 + 0x18) = lVar1;
      pcVar13 = *(code **)(lVar12 + 0x18);
      _swift_retain(lVar10);
      _swift_errorRetain(lVar1);
      (*pcVar13)(FUN_1008d678c,puVar7,uVar5,lVar12);
      _swift_release(local_c0);
      _swift_release(puVar7);
    }
    else {
      lVar10 = lVar1;
      thunk_FUN_1005de8f4(lVar1);
      FUN_1006486f8();
      FUN_100004550(lVar10,lVar8);
      _swift_release(local_c0);
      _swift_bridgeObjectRelease(lVar11);
    }
    _swift_errorRelease(lVar1);
  }
  (**(code **)(lVar15 + 8))(lVar16,lVar9);
  return;
}



/* Address: 0x100977de0 | thunk_FUN_100978798 */

void thunk_FUN_100978798(void)

{
  FUN_100978798();
  return;
}



/* Address: 0x100977de4 | thunk_FUN_1009787c4 */

void thunk_FUN_1009787c4(void)

{
  FUN_1009787c4();
  return;
}



/* Address: 0x100977de8 | thunk_FUN_1009774b8 */

void thunk_FUN_1009774b8(void)

{
  FUN_1009774b8();
  return;
}



/* Address: 0x100977dec | thunk_FUN_10097762c */

void thunk_FUN_10097762c(void)

{
  FUN_10097762c();
  return;
}



/* Address: 0x100977df0 | thunk_FUN_100977940 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001009779fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_100977940(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __int64 _Var7;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_68 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,auStack_68,0x21,0);
  uVar8 = *(undefined8 *)(lVar9 + 0x58);
  uVar3 = 0xff;
  FUN_100653a08(0xff,uVar8);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar4,*(undefined8 *)(lVar9 + 0x68));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar5);
  uVar6 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  lVar9 = param_2;
  FUN_100976ca4(param_2,uVar6);
  _swift_endAccess(auStack_68);
  if (lVar9 != 0) {
    _Var7 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var7 != 0) {
      lVar10 = 0;
      do {
        Swift::Array<undefined>::get_subscript(auStack_68,lVar10,lVar9,uVar3);
        uVar5 = auStack_68[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100977a90);
          (*pcVar2)();
        }
        FUN_100646f54(param_2,auStack_68[0],uVar8);
        _swift_release(uVar5);
        _Var7 = Swift::Array<undefined>::get_endIndex(_Var7,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var7);
    }
    _swift_bridgeObjectRelease(lVar9);
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x100977df4 | thunk_FUN_100977a90 */

void thunk_FUN_100977a90(void)

{
  FUN_100977a90();
  return;
}



/* Address: 0x100977df8 | FUN_100977df8 */

void FUN_100977df8(void)

{
  _swift_allocObject();
  FUN_100978954(FUN_100645fc0,&TargetProtocolConformanceDescriptor_100c88a1c);
  return;
}



/* Address: 0x100977e3c | FUN_100977e3c */

void FUN_100977e3c(void)

{
  FUN_100978954(FUN_100645fc0,&TargetProtocolConformanceDescriptor_100c88a1c);
  return;
}



/* Address: 0x100977e60 | FUN_100977e60 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100977f1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100977e60(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  __int64 _Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_78 [3];
  
  lVar11 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_78,0x21,0);
  uVar10 = *(undefined8 *)(lVar11 + 0x58);
  uVar3 = 0xff;
  FUN_100645fc0(0xff,uVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar5 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar4,*(undefined8 *)(lVar11 + 0x68));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar5);
  lVar11 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  FUN_100976a98();
  _swift_endAccess(local_78);
  if (lVar11 != 0) {
    if (lVar11 == 1) {
      return;
    }
    _Var6 = Swift::Array<undefined>::get_endIndex(lVar11,uVar3);
    if (_Var6 != 0) {
      lVar12 = 0;
      do {
        Swift::Array<undefined>::get_subscript(local_78,lVar12,lVar11,uVar3);
        uVar5 = local_78[0];
        lVar1 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100977ff8);
          (*pcVar2)();
        }
        uVar7 = local_78[0];
        FUN_100004520(local_78[0],uVar10);
        uVar8 = uVar7;
        FUN_100970578();
        puVar9 = &DAT_100f1d400;
        _swift_allocError(&DAT_100f1d400,uVar8,0,0);
        _swift_retain(uVar7);
        FUN_100646f54(puVar9,uVar7,uVar10);
        _swift_release(uVar7);
        _swift_errorRelease(puVar9);
        _swift_release(uVar5);
        _Var6 = Swift::Array<undefined>::get_endIndex(puVar9,uVar3);
        lVar12 = lVar12 + 1;
      } while (lVar1 != _Var6);
    }
    FUN_100976234(lVar11);
  }
  FUN_100626b8c();
  return;
}



/* Address: 0x100977ff8 | FUN_100977ff8 */

void FUN_100977ff8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar11 = *unaff_x20;
  lVar1 = 0;
  local_88 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)(lVar11 + 0x50),0x100cc6bac,
             &TargetProtocolRequirement_100cc6bbc);
  lVar8 = *(long *)(lVar1 + -8);
  puVar10 = auStack_90 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar11 + 0x58);
  lVar13 = *(long *)(lVar7 + -8);
  lVar9 = (long)puVar10 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88c34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88c34,lVar11);
  FUN_10066a0e4(lVar9,param_2,lVar11,pTVar2);
  lVar11 = *(long *)(lVar11 + 0x68);
  pcVar12 = *(code **)(lVar11 + 0x18);
  (*pcVar12)(puVar10,lVar7,lVar11);
  _swift_beginAccess(unaff_x20 + 2,auStack_80,0x21,0);
  uVar3 = 0xff;
  FUN_100645fc0(0xff,lVar7);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar4 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar2,lVar11);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar4);
  uVar3 = 0;
  FUN_100976a20(0,uVar4,pTVar2);
  FUN_100976ae4(&local_68,puVar10,uVar3);
  _swift_endAccess(auStack_80);
  puVar5 = puVar10;
  (**(code **)(lVar8 + 8))(puVar10,lVar1);
  if (local_68 == 0) {
    (*pcVar12)(puVar10,lVar7,lVar11);
    puVar6 = (undefined *)0x0;
    FUN_100978944(0,lVar7,lVar11);
    pTVar2 = &TargetProtocolConformanceDescriptor_100c88cfc;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88cfc,puVar6);
    _swift_allocError(puVar6,pTVar2,0,0);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness(0,lVar11,lVar7,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc)
    ;
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(pTVar2,puVar10,lVar1);
    FUN_100626c9c(puVar6);
    (**(code **)(lVar13 + 8))(lVar9,lVar7);
  }
  else {
    if (local_68 != 1) {
      if (local_68 != 2) {
        FUN_100643020(lVar9,local_68,lVar7);
        FUN_100976258(local_68);
      }
      (**(code **)(lVar13 + 8))(lVar9,lVar7);
      return;
    }
    FUN_10097063c();
    puVar6 = &DAT_100f1d420;
    _swift_allocError(&DAT_100f1d420,puVar5,0,0);
    FUN_100626c9c();
    (**(code **)(lVar13 + 8))(lVar9,lVar7);
  }
  _swift_errorRelease(puVar6);
  return;
}



/* Address: 0x1009782b4 | FUN_1009782b4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100978374 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1009782b4(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __int64 _Var7;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_78 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_78,0x21,0);
  uVar8 = *(undefined8 *)(lVar9 + 0x58);
  uVar3 = 0xff;
  FUN_100645fc0(0xff,uVar8);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar5 = 0xff;
  FUN_100976344(0xff,uVar3,pTVar4,*(undefined8 *)(lVar9 + 0x68));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar5);
  uVar6 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  lVar9 = param_2;
  FUN_100976ca4(param_2,uVar6);
  _swift_endAccess(local_78);
  if (lVar9 != 0) {
    _Var7 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var7 != 0) {
      lVar10 = 0;
      do {
        Swift::Array<undefined>::get_subscript(local_78,lVar10,lVar9,uVar3);
        uVar5 = local_78[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100978428);
          (*pcVar2)();
        }
        uVar6 = local_78[0];
        FUN_100004520(local_78[0],uVar8);
        _swift_retain();
        FUN_100646f54(param_2,uVar6,uVar8);
        _swift_release(uVar5);
        _swift_release(uVar6);
        _Var7 = Swift::Array<undefined>::get_endIndex(uVar6,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var7);
    }
    _swift_bridgeObjectRelease(lVar9);
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x100978428 | FUN_100978428 */

void FUN_100978428(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_f0 [4];
  long *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [72];
  long local_68;
  
  local_d0 = unaff_x20 + 2;
  lVar13 = *unaff_x20;
  lVar11 = *(long *)(lVar13 + 0x60);
  lVar9 = *(long *)(lVar13 + 0x50);
  lVar1 = 0;
  alStack_f0[1] = param_1;
  alStack_f0[3] = param_2;
  local_b8 = param_3;
  _swift_getAssociatedTypeWitness(0,lVar11,lVar9,0x100cc6bac,&TargetProtocolRequirement_100cc6bbc);
  local_c8 = *(long *)(lVar1 + -8);
  lVar5 = (long)alStack_f0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_f0[2] = *(undefined8 *)(lVar13 + 0x58);
  uVar2 = 0xff;
  local_c0 = lVar1;
  FUN_100645fc0(0xff);
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,lVar9,uVar2,0,0);
  lVar14 = lVar5 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(lVar9 + -8);
  lVar15 = lVar14 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88c50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88c50,lVar13);
  FUN_10066a214(lVar14,alStack_f0[3],lVar13,pTVar3);
  lVar10 = *(long *)(lVar14 + *(int *)(lVar1 + 0x30));
  (**(code **)(lVar16 + 0x20))(lVar15,lVar14,lVar9);
  (**(code **)(lVar11 + 0x18))(lVar5,lVar9,lVar11);
  local_68 = lVar10;
  _swift_beginAccess(local_d0,auStack_b0,0x21,0);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar2);
  uVar4 = 0xff;
  FUN_100976344(0xff,uVar2,pTVar3,*(undefined8 *)(lVar13 + 0x68));
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b58,uVar4);
  uVar2 = 0;
  FUN_100976a20(0,uVar4,pTVar3);
  lVar11 = lVar5;
  FUN_100976d10(lVar5,&local_68,uVar2);
  _swift_endAccess(auStack_b0);
  (**(code **)(local_c8 + 8))(lVar5,local_c0);
  lVar1 = alStack_f0[2];
  if (lVar11 == 0) {
    pTVar3 = &TargetProtocolConformanceDescriptor_100c88c7c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88c7c,lVar13);
    FUN_10066a16c(auStack_b0,lVar15,lVar13,pTVar3);
    FUN_100626ebc(auStack_b0,local_b8);
    _swift_release(lVar10);
    FUN_1005e70f4(auStack_b0);
  }
  else {
    lVar5 = lVar10;
    FUN_100004520(lVar10,alStack_f0[2]);
    _swift_retain();
    FUN_100646f54(lVar11,lVar5,lVar1);
    _swift_release(lVar5);
    lVar5 = local_b8;
    if (local_b8 == 0) {
      (**(code **)(lVar16 + 8))(lVar15,lVar9);
      _swift_errorRelease(lVar11);
      _swift_release(lVar10);
      return;
    }
    uVar6 = *(ulong *)(local_b8 + 0x20);
    lVar13 = *(long *)(local_b8 + 0x28);
    local_c0 = lVar10;
    _swift_getObjectType();
    uVar7 = uVar6;
    lVar10 = lVar13;
    (**(code **)(lVar13 + 0x10))();
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100f1e150;
      _swift_allocObject(&DAT_100f1e150,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar5;
      *(long *)(puVar8 + 0x18) = lVar11;
      pcVar12 = *(code **)(lVar13 + 0x18);
      _swift_retain(lVar5);
      _swift_errorRetain(lVar11);
      (*pcVar12)(thunk_FUN_1008d678c,puVar8,uVar6,lVar13);
      _swift_release(local_c0);
      _swift_release(puVar8);
    }
    else {
      lVar5 = lVar11;
      thunk_FUN_1005de8f4(lVar11);
      FUN_1006486f8();
      FUN_100004550(lVar5,lVar10);
      _swift_release(local_c0);
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_errorRelease(lVar11);
  }
  (**(code **)(lVar16 + 8))(lVar15,lVar9);
  return;
}



/* Address: 0x100978798 | FUN_100978798 */

void FUN_100978798(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100976248(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1009787c4 | FUN_1009787c4 */

void FUN_1009787c4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100976248(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009787f8 | thunk_FUN_100977e60 */

void thunk_FUN_100977e60(void)

{
  FUN_100977e60();
  return;
}



/* Address: 0x1009787fc | thunk_FUN_100977ff8 */

void thunk_FUN_100977ff8(void)

{
  FUN_100977ff8();
  return;
}



/* Address: 0x100978800 | thunk_FUN_1009782b4 */

void thunk_FUN_1009782b4(void)

{
  FUN_1009782b4();
  return;
}


