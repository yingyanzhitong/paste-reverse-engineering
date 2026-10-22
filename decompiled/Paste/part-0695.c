/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10078a2d0 | FUN_10078a2d0 */

uint * FUN_10078a2d0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar3 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  if (param_1 == param_2) goto LAB_10078a488;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar5 = (uint)bVar1;
  uVar9 = (uint)uVar3;
  if (1 < bVar1) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078a380;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078a380:
  if (uVar5 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
  }
  else if (uVar5 == 0) {
    (**(code **)(lVar10 + 8))(param_1,lVar8);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078a42c;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078a42c:
  if (uVar5 == 1) {
    uVar2 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 6);
    uVar11 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar12;
    *(undefined8 *)(param_1 + 4) = uVar11;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar2;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar8);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
LAB_10078a488:
  puVar7 = (undefined8 *)((ulong)(uVar3 + 8 + (long)param_1) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  uVar2 = puVar7[1];
  uVar11 = *puVar4;
  puVar7[1] = puVar4[1];
  *puVar7 = uVar11;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10078a4c4 | FUN_10078a4c4 */

uint FUN_10078a4c4(uint *param_1,int param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 0x18;
    uVar2 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar2;
    uVar5 = param_2 + 0x80000002;
    iVar6 = 2;
    if (uVar2 != 0) {
      uVar5 = 2;
    }
    if (0xffff < uVar5) {
      iVar6 = 4;
    }
    if (uVar5 < 0x100) {
      iVar6 = 1;
    }
    if (iVar6 == 4) {
      uVar5 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar6 == 2) {
        uVar5 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_10078a4e4;
        goto LAB_10078a574;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar5 != 0) {
LAB_10078a574:
      uVar5 = uVar5 - 1;
      if (uVar2 != 0) {
        uVar5 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar5) ^ 0x80000000;
    }
  }
LAB_10078a4e4:
  uVar3 = *(ulong *)((long)param_1 + uVar3 + 8 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  return (int)uVar3 + 1;
}



/* Address: 0x10078a594 | FUN_10078a594 */

void FUN_10078a594(uint *param_1,uint param_2,int param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  sVar1 = (uVar4 & 0xfffffffffffffff8) + 0x18;
  if (param_3 < 0) {
    uVar2 = param_3 + 0x80000002;
    uVar5 = 2;
    if ((int)sVar1 != 0) {
      uVar2 = 2;
    }
    if (0xffff < uVar2) {
      uVar5 = 4;
    }
    if (uVar2 < 0x100) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((int)param_2 < 0) {
    iVar3 = 1;
    if ((int)sVar1 == 0) {
      iVar3 = (param_2 & 0x7fffffff) + 1;
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2 & 0x7fffffff;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar3;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar3;
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
      *(ulong *)((long)param_1 + uVar4 + 8 & 0xfffffffffffffff8) = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x10078a6b4 | FUN_10078a6b4 */

void FUN_10078a6b4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbf928);
  return;
}



/* Address: 0x10078a6c0 | FUN_10078a6c0 */

void FUN_10078a6c0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf99c);
  return;
}



/* Address: 0x10078a6cc | FUN_10078a6cc */

void FUN_10078a6cc(long param_1)

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
    puStack_28 = &DAT_100c77278;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x10078a73c | FUN_10078a73c */

long * FUN_10078a73c(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar5 + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar4 + 1) {
    uVar6 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
    goto LAB_10078a878;
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10078a818;
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
LAB_10078a818:
  if (uVar6 != 1) {
    if (uVar6 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      return param_1;
    }
    plVar3 = _memcpy(param_1,param_2,uVar4 + 1);
    return plVar3;
  }
  lVar5 = *(long *)(param_2 + 2);
  *param_1 = *(long *)param_2;
  param_1[1] = lVar5;
  lVar8 = *(long *)(param_2 + 4);
  param_1[2] = lVar8;
  lVar5 = *(long *)(param_2 + 6);
  param_1[4] = *(long *)(param_2 + 8);
  param_1[3] = lVar5;
  lVar5 = *(long *)(param_2 + 10);
  lVar1 = *(long *)(param_2 + 0xc);
  param_1[5] = lVar5;
  param_1[6] = lVar1;
  *(byte *)(param_1 + 7) = (byte)param_2[0xe];
  *(undefined1 *)((long)param_1 + uVar4) = 1;
  _swift_retain();
  _swift_retain(lVar8);
LAB_10078a878:
  _swift_retain(lVar5);
  return param_1;
}



/* Address: 0x10078a8a8 | FUN_10078a8a8 */

void FUN_10078a8a8(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078a934;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078a934:
  if (uVar5 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
    return;
  }
  if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010078a944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  return;
}



/* Address: 0x10078a980 | FUN_10078a980 */

undefined8 * FUN_10078a980(undefined8 *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 0x3a) {
    uVar6 = 0x39;
  }
  bVar3 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar3;
  if (1 < bVar3) {
    uVar10 = (uint)uVar6;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078aa1c;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10078aa1c:
  if (uVar7 == 1) {
    uVar1 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar1;
    param_1[1] = uVar11;
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar9;
    uVar11 = *(undefined8 *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = uVar11;
    param_1[6] = uVar2;
    *(byte *)(param_1 + 7) = (byte)param_2[0xe];
    *(undefined1 *)((long)param_1 + uVar6) = 1;
    _swift_retain(uVar1);
    _swift_retain(uVar9);
    _swift_retain(uVar11);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar6 + 1);
      return puVar4;
    }
    (**(code **)(lVar5 + 0x10))();
    *(undefined1 *)((long)param_1 + uVar6) = 0;
  }
  return param_1;
}



/* Address: 0x10078aab0 | FUN_10078aab0 */

uint * FUN_10078aab0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar10 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10078ab5c;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10078ab5c:
  if (uVar4 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10078ac14;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10078ac14:
  if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    uVar7 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar9;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(byte *)(param_1 + 0xe) = (byte)param_2[0xe];
    *(byte *)((long)param_1 + uVar3) = 1;
    _swift_retain();
    _swift_retain(uVar7);
    _swift_retain(uVar9);
  }
  else {
    if (uVar4 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x10078acc8 | FUN_10078acc8 */

undefined8 * FUN_10078acc8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10078ad60;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10078ad60:
  if (uVar5 == 1) {
    uVar8 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar8 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar8;
    uVar8 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar8;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x10078adc0 | FUN_10078adc0 */

uint * FUN_10078adc0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x3a) {
    uVar3 = 0x39;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10078ae68;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10078ae68:
  if (uVar4 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 4));
    _swift_release(*(undefined8 *)(param_1 + 10));
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10078af2c;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10078af2c:
  if (uVar4 == 1) {
    uVar9 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    *(undefined8 *)(param_1 + 6) = uVar11;
    *(undefined8 *)(param_1 + 4) = uVar10;
    uVar9 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar9;
    uVar9 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar9;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x10078afa0 | FUN_10078afa0 */

int FUN_10078afa0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x3a) {
    uVar5 = 0x39;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_10078b048;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_10078b048;
      goto LAB_10078afd4;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10078afd4:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
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
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_10078b048:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x10078b0a4 | FUN_10078b0a4 */

void FUN_10078b0a4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  sVar1 = uVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfe) {
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
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
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x10078b248 | FUN_10078b248 */

uint FUN_10078b248(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x3a) {
    uVar4 = 0x39;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x10078b2dc | FUN_10078b2dc */

void FUN_10078b2dc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar3 < 0x3a) {
    sVar3 = 0x39;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 2;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10078b3a4 | FUN_10078b3a4 */

void FUN_10078b3a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata1(0x44000001,uVar2,uVar1);
  return;
}



/* Address: 0x10078b3ec | FUN_10078b3ec */

void FUN_10078b3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uVar2 = 0;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_10078a6c0(0,&local_70);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  lVar3 = 0;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_10078a6b4(0,&local_70);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10078b49c | FUN_10078b49c */

void FUN_10078b49c(undefined8 *param_1,long param_2)

{
  long lVar1;
  Result RVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long alStack_120 [7];
  undefined8 auStack_e8 [2];
  uint local_d4;
  long local_d0;
  long local_c8;
  undefined8 *local_c0;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar17,uVar21,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_d0 = lVar4;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_c8 = CONCAT71(extraout_var_00,OVar3.value);
  lVar15 = *(long *)(local_c8 + -8);
  lVar14 = (long)alStack_120 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = (undefined8 *)(lVar14 - uVar9);
  lVar19 = (long)local_c0 - uVar9;
  lVar16 = *(long *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = 0;
  local_88 = lVar16;
  uStack_80 = uVar21;
  local_78 = uVar10;
  uStack_70 = uVar17;
  FUN_10078a6c0(0,&local_88);
  lVar18 = *(long *)(lVar5 + -8);
  puVar13 = (undefined8 *)(lVar19 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar18 + 0x10))(puVar13);
  puVar6 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar5);
  if ((int)puVar6 == 0) {
    (**(code **)(*(long *)(lVar16 + -8) + 0x20))(param_1,puVar13,lVar16);
    uVar8 = 0;
    local_88 = lVar16;
    uStack_80 = uVar21;
    local_78 = uVar10;
    uStack_70 = uVar17;
    FUN_10078d884(0,&local_88);
    uVar10 = 2;
    goto LAB_10078b86c;
  }
  if ((int)puVar6 == 1) {
    alStack_120[5] = puVar13[3];
    alStack_120[4] = puVar13[2];
    auStack_e8[0] = puVar13[1];
    alStack_120[6] = *puVar13;
    lVar11 = puVar13[2];
    alStack_120[1] = *puVar13;
    lVar1 = puVar13[5];
    alStack_120[3] = puVar13[4];
    alStack_120[2] = puVar13[6];
    local_d4 = (uint)*(byte *)(puVar13 + 7);
    FUN_1006883a0(0,lVar4);
    FUN_100681318(lVar14);
    lVar7 = lVar14;
    (**(code **)(lVar20 + 0x30))(lVar14,1,lVar4);
    if ((int)lVar7 != 1) {
      pcVar12 = *(code **)(lVar20 + 0x20);
      (*pcVar12)(lVar19,lVar14,lVar4);
      (**(code **)(lVar18 + 8))(unaff_x20,lVar5);
      unaff_x20[1] = auStack_e8[0];
      *unaff_x20 = alStack_120[6];
      unaff_x20[3] = alStack_120[5];
      unaff_x20[2] = alStack_120[4];
      unaff_x20[4] = alStack_120[3];
      unaff_x20[5] = lVar1;
      unaff_x20[6] = alStack_120[2];
      *(char *)(unaff_x20 + 7) = (char)local_d4;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar5,1);
      puVar6 = local_c0;
      (*pcVar12)(local_c0,lVar19,lVar4);
      puVar13 = puVar6;
      _swift_getEnumCaseMultiPayload(puVar6,lVar4);
      if ((int)puVar13 == 1) {
        *param_1 = *puVar6;
        uVar8 = 0;
        local_88 = lVar16;
        uStack_80 = uVar21;
        local_78 = uVar10;
        uStack_70 = uVar17;
        FUN_10078d884(0,&local_88);
        uVar10 = 1;
      }
      else {
        (**(code **)(*(long *)(local_d0 + -8) + 0x20))(param_1,puVar6);
        uVar8 = 0;
        local_88 = lVar16;
        uStack_80 = uVar21;
        local_78 = uVar10;
        uStack_70 = uVar17;
        FUN_10078d884(0,&local_88);
        uVar10 = 0;
      }
      goto LAB_10078b86c;
    }
    _swift_release(alStack_120[1]);
    (**(code **)(lVar15 + 8))(lVar14,local_c8);
    if (local_d4 == 0) {
      _swift_release(lVar1);
    }
    else {
      if (lVar11 == 0) {
        _swift_release(lVar1);
        (**(code **)(lVar18 + 8))(unaff_x20,lVar5);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar5,2);
        goto LAB_10078b844;
      }
      _swift_release(lVar11);
      lVar11 = lVar1;
    }
    _swift_release(lVar11);
    uVar8 = 0;
    local_88 = lVar16;
    uStack_80 = uVar21;
    local_78 = uVar10;
    uStack_70 = uVar17;
    FUN_10078d884(0,&local_88);
    uVar10 = 4;
  }
  else {
LAB_10078b844:
    uVar8 = 0;
    local_88 = lVar16;
    uStack_80 = uVar21;
    local_78 = uVar10;
    uStack_70 = uVar17;
    FUN_10078d884(0,&local_88);
    uVar10 = 3;
  }
LAB_10078b86c:
  _swift_storeEnumTagMultiPayload(param_1,uVar8,uVar10);
  return;
}



/* Address: 0x10078b890 | FUN_10078b890 */

ulong FUN_10078b890(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  Optional OVar6;
  Result RVar7;
  bool bVar8;
  long lVar9;
  undefined7 extraout_var;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *unaff_x20;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  String SVar20;
  undefined8 auStack_c0 [2];
  ulong auStack_b0 [3];
  uint local_94;
  long local_90 [3];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar17,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar15 = (long)auStack_b0 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar6.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  local_90[2] = *(undefined8 *)(param_2 + 0x10);
  local_70 = *(undefined8 *)(param_2 + 0x20);
  lVar10 = 0;
  uStack_78 = uVar18;
  uStack_68 = uVar17;
  FUN_10078a6c0(0,local_90 + 2);
  lVar14 = *(long *)(lVar10 + -8);
  puVar19 = (undefined8 *)(lVar15 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar14 + 0x10))(puVar19);
  puVar11 = puVar19;
  _swift_getEnumCaseMultiPayload(puVar19,lVar10);
  if ((int)puVar11 == 1) {
    if (puVar19[4] != 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10078bb80);
      (*pcVar16)();
    }
    local_90[0] = param_1;
    uVar17 = *puVar19;
    uVar2 = puVar19[1];
    uVar18 = puVar19[2];
    local_90[1] = puVar19[3];
    uVar1 = puVar19[5];
    auStack_b0[2] = puVar19[6];
    local_94 = (uint)*(byte *)(puVar19 + 7);
    local_90[2] = uVar1;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar7 = Swift::Result::typeMetadataAccessor();
    uVar12 = 0;
    FUN_1006883a0(0,RVar7.value);
    _swift_getWitnessTable(0x100c6d780,uVar12);
    bVar8 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (!bVar8) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10078bb84);
      (*pcVar16)();
    }
    pcVar16 = *(code **)(lVar14 + 8);
    (*pcVar16)();
    lVar10 = local_90[1];
    lVar9 = local_90[0];
    uVar5 = auStack_b0[2];
    *unaff_x20 = uVar17;
    unaff_x20[1] = uVar2;
    unaff_x20[2] = uVar18;
    unaff_x20[3] = local_90[1];
    unaff_x20[4] = local_90[0];
    unaff_x20[5] = uVar1;
    unaff_x20[6] = auStack_b0[2];
    uVar3 = (undefined1)local_94;
    *(undefined1 *)(unaff_x20 + 7) = uVar3;
    auStack_b0[1] = uVar17;
    _swift_storeEnumTagMultiPayload();
    uVar4 = auStack_b0[1];
    if (lVar10 != 0) {
      _swift_retain(uVar18);
      _swift_retain(uVar1);
      uVar4 = auStack_b0[1];
      _swift_retain(auStack_b0[1]);
      (*pcVar16)();
      *unaff_x20 = uVar4;
      unaff_x20[1] = uVar2;
      unaff_x20[2] = uVar18;
      unaff_x20[3] = 0;
      unaff_x20[4] = lVar9;
      unaff_x20[5] = uVar1;
      unaff_x20[6] = uVar5;
      *(undefined1 *)(unaff_x20 + 7) = uVar3;
      _swift_storeEnumTagMultiPayload();
      return local_90[1] | 0x4000000000000000;
    }
    if (uVar2 != 0) {
      _swift_retain(uVar18);
      _swift_retain(uVar1);
      _swift_retain(uVar4);
      (*pcVar16)();
      *unaff_x20 = uVar4;
      unaff_x20[1] = 0;
      unaff_x20[2] = uVar18;
      unaff_x20[3] = 0;
      unaff_x20[4] = local_90[0];
      unaff_x20[5] = uVar1;
      unaff_x20[6] = uVar5;
      *(undefined1 *)(unaff_x20 + 7) = uVar3;
      _swift_storeEnumTagMultiPayload();
      return uVar2;
    }
  }
  else {
    if ((int)puVar11 != 2) {
      *(undefined4 *)(puVar19 + -1) = 0;
      puVar19[-2] = 0x78;
      SVar20.bridgeObject = (void *)0x2;
      SVar20.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar20,(StaticString)0xd000000000000011,
                 0x8000000100db1690,0xdb1630);
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10078bbd8);
      (*pcVar16)();
    }
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar15,1,1,lVar9);
    puVar13 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(lVar15,param_1,CONCAT71(extraout_var,OVar6.value),puVar13,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return 0x8000000000000000;
}



/* Address: 0x10078bbd8 | FUN_10078bbd8 */

void FUN_10078bbd8(undefined8 param_1,long param_2)

{
  long lVar1;
  Result RVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  String SVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 local_70 [4];
  undefined8 uVar5;
  
  local_70[1] = *(undefined8 *)(param_2 + 0x18);
  local_70[0] = *(undefined8 *)(param_2 + 0x10);
  local_70[3] = *(undefined8 *)(param_2 + 0x28);
  local_70[2] = *(undefined8 *)(param_2 + 0x20);
  lVar3 = 0;
  FUN_10078a6c0(0,local_70);
  lVar10 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar1 = -uVar6;
  puVar8 = (undefined8 *)((long)local_70 + lVar1);
  lVar7 = (long)puVar8 - uVar6;
  (**(code **)(lVar10 + 0x10))(lVar7);
  lVar4 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar3);
  if ((int)lVar4 == 0) {
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar2 = Swift::Result::typeMetadataAccessor();
    uVar5 = CONCAT71(extraout_var,RVar2.value);
    thunk_FUN_100683d64();
    *puVar8 = param_1;
    *(undefined8 *)((long)local_70 + lVar1 + 0x10) = 0;
    *(undefined8 *)((long)local_70 + lVar1 + 8) = 0;
    *(undefined8 *)(&stack0xffffffffffffffb0 + lVar1) = 0;
    *(undefined8 *)((long)local_70 + lVar1 + 0x18) = 0;
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar1) = uVar5;
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar1) = 0;
    (&stack0xffffffffffffffc8)[lVar1] = 0;
    _swift_storeEnumTagMultiPayload(puVar8,lVar3,1);
    pcVar9 = *(code **)(lVar10 + 0x28);
    _swift_retain(param_1);
    (*pcVar9)();
    (**(code **)(lVar10 + 8))(lVar7,lVar3);
    return;
  }
  *(undefined4 *)(lVar7 + -8) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0xc6;
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000018,0x8000000100db1640,
             0xdb1630);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10078bd78);
  (*pcVar9)();
}



/* Address: 0x10078bd78 | FUN_10078bd78 */

undefined8 FUN_10078bd78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined *puVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  String SVar16;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 local_80 [4];
  
  local_80[1] = *(undefined8 *)(param_2 + 0x18);
  local_80[0] = *(undefined8 *)(param_2 + 0x10);
  local_80[3] = *(undefined8 *)(param_2 + 0x28);
  local_80[2] = *(undefined8 *)(param_2 + 0x20);
  lVar5 = 0;
  FUN_10078a6c0(0,local_80);
  lVar14 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)local_80 + lVar3);
  (**(code **)(lVar14 + 0x10))(puVar10);
  puVar6 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar5);
  if ((int)puVar6 == 1) {
    uVar12 = *puVar10;
    uVar13 = *(undefined8 *)((long)local_80 + lVar3 + 0x10);
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar3);
    if (*(long *)(&stack0xffffffffffffffa0 + lVar3) != 0) {
      _swift_release(uVar1);
      _swift_release(uVar13);
      _swift_release(uVar12);
      return param_1;
    }
    uVar2 = (&stack0xffffffffffffffb8)[lVar3];
    uVar15 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar3);
    uVar11 = *(undefined8 *)((long)local_80 + lVar3 + 0x18);
    (**(code **)(lVar14 + 8))();
    *unaff_x20 = uVar12;
    unaff_x20[1] = param_1;
    unaff_x20[2] = uVar13;
    unaff_x20[3] = uVar11;
    unaff_x20[4] = 0;
    unaff_x20[5] = uVar1;
    unaff_x20[6] = uVar15;
    *(undefined1 *)(unaff_x20 + 7) = uVar2;
    _swift_storeEnumTagMultiPayload();
  }
  else {
    if ((int)puVar6 != 2) {
      *(undefined4 *)((long)auStack_88 + lVar3) = 0;
      *(undefined8 *)((long)&uStack_90 + lVar3) = 0xec;
      SVar16.bridgeObject = (void *)0x2;
      SVar16.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar16,(StaticString)0x2064696c61766e49,
                 0xed00006574617473,0xdb1630);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10078bf60);
      (*pcVar4)();
    }
    CVar7 = Swift::CancellationError::typeMetadataAccessor();
    CVar8 = CVar7;
    FUN_10076915c();
    _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
    Swift::CancellationError::init();
    puVar9 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    puVar6 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar6 = CVar7.unknown;
    _swift_continuation_throwingResumeWithError(param_1,puVar9);
  }
  return 0x8000000000000000;
}



/* Address: 0x10078bf60 | FUN_10078bf60 */

void FUN_10078bf60(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  char acStack_110 [8];
  undefined4 uStack_108;
  char acStack_104 [5];
  char acStack_ff [8];
  char acStack_f7 [8];
  char acStack_ef [5];
  char acStack_ea [8];
  undefined1 auStack_e2 [2];
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  long local_d0 [7];
  undefined8 auStack_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *local_68;
  
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  auStack_98[0] = *(undefined8 *)(param_3 + 0x18);
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  local_d0[5] = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x20);
  uVar12 = *(undefined8 *)(param_3 + 0x28);
  lVar7 = 0;
  local_d0[4] = uVar18;
  local_d0[6] = uVar17;
  local_88 = param_2;
  local_80 = uVar17;
  puStack_78 = (undefined *)uVar15;
  local_70 = (undefined *)uVar18;
  local_68 = (undefined *)uVar12;
  FUN_10078a6c0(0,&local_80);
  lVar16 = *(long *)(lVar7 + -8);
  lVar5 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)local_d0 + lVar5);
  (**(code **)(lVar16 + 0x10))(puVar13);
  puVar8 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar7);
  if ((int)puVar8 == 1) {
    uVar12 = *puVar13;
    local_d0[2] = *(undefined8 *)((long)local_d0 + lVar5 + 0x18);
    local_d0[3] = *(undefined8 *)((long)local_d0 + lVar5 + 0x10);
    local_d0[0] = *(long *)((long)local_d0 + lVar5 + 0x28);
    local_d0[1] = *(undefined8 *)((long)local_d0 + lVar5 + 0x20);
    lVar14 = *(long *)((long)auStack_98 + lVar5 + -8);
    uVar2 = *(undefined1 *)((long)auStack_98 + lVar5);
    (**(code **)((long)unaff_x20 + (long)*(int *)(param_3 + 0x34)))(param_1,local_88);
    lVar7 = lVar14 + 1;
    if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10078c1c8);
      (*pcVar6)();
    }
    (**(code **)(lVar16 + 8))();
    *unaff_x20 = uVar12;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    unaff_x20[4] = local_d0[1];
    unaff_x20[5] = local_d0[0];
    unaff_x20[6] = lVar7;
    *(undefined1 *)(unaff_x20 + 7) = uVar2;
    _swift_storeEnumTagMultiPayload();
    acStack_110[lVar5] = ' ';
    *(undefined4 *)((long)&uStack_108 + lVar5) = 0x206e6f69;
    pcVar1 = acStack_110 + lVar5 + 1;
    pcVar1[0] = 'g';
    pcVar1[1] = 'e';
    pcVar1[2] = 'n';
    pcVar1[3] = 'e';
    pcVar1[4] = 'r';
    pcVar1[5] = 'a';
    pcVar1[6] = 't';
    pcVar1[7] = 'i';
    builtin_strncpy(acStack_104 + lVar5,"previous",8);
    builtin_strncpy(acStack_ff + lVar5,"ousTask ",8);
    builtin_strncpy(acStack_ef + lVar5,"Continua",8);
    builtin_strncpy(acStack_f7 + lVar5,"previous",8);
    builtin_strncpy(acStack_ea + lVar5,"nuation ",8);
    auStack_e2[lVar5] = 0;
    puStack_78 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    puVar9 = &DAT_100fe3aa0;
    local_80 = uVar15;
    FUN_1000f8b08(&DAT_100fe3aa0,&DAT_100c77400);
    puVar10 = &DAT_100fe3398;
    local_70 = puVar9;
    FUN_1000f8b08(&DAT_100fe3398,&DAT_100c772a0);
    lVar16 = 0;
    local_68 = puVar10;
    _swift_getTupleTypeMetadata(0,0x10004,&local_80,acStack_110 + lVar5,0);
    iVar3 = *(int *)(lVar16 + 0x40);
    iVar4 = *(int *)(lVar16 + 0x50);
    *(long *)(param_1 + *(int *)(lVar16 + 0x30)) = lVar7;
    *(long *)(param_1 + iVar3) = local_d0[3];
    *(long *)(param_1 + iVar4) = local_d0[2];
    puStack_78 = (undefined *)auStack_98[0];
    local_80 = local_d0[6];
    local_68 = (undefined *)local_d0[5];
    local_70 = (undefined *)local_d0[4];
    uVar11 = 0;
    FUN_10078c9c0(0,&local_80);
    uVar12 = 0;
  }
  else {
    if ((int)puVar8 != 2) {
      *(undefined4 *)((long)auStack_d8 + lVar5) = 0;
      *(undefined8 *)(auStack_e2 + lVar5 + 2) = 0x111;
      SVar19.bridgeObject = (void *)0x2;
      SVar19.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar19,(StaticString)0x2064696c61766e49,
                 0xed00006574617473,0xdb1630);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10078c224);
      (*pcVar6)();
    }
    uVar11 = 0;
    local_80 = uVar17;
    puStack_78 = (undefined *)uVar15;
    local_70 = (undefined *)uVar18;
    local_68 = (undefined *)uVar12;
    FUN_10078c9c0(0,&local_80);
    uVar12 = 5;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar11,uVar12);
  return;
}



/* Address: 0x10078c224 | FUN_10078c224 */

void FUN_10078c224(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_90 [6];
  
  local_90[3] = *(undefined8 *)(param_3 + 0x18);
  local_90[2] = *(undefined8 *)(param_3 + 0x10);
  local_90[5] = *(undefined8 *)(param_3 + 0x28);
  local_90[4] = *(undefined8 *)(param_3 + 0x20);
  lVar8 = 0;
  FUN_10078a6c0(0,local_90 + 2);
  lVar11 = *(long *)(lVar8 + -8);
  lVar6 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)local_90 + lVar6);
  (**(code **)(lVar11 + 0x10))(puVar10);
  puVar9 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar8);
  if ((int)puVar9 == 1) {
    uVar1 = *puVar10;
    uVar2 = *(undefined8 *)((long)local_90 + lVar6 + 8);
    uVar3 = *(undefined8 *)((long)local_90 + lVar6 + 0x18);
    uVar4 = *(undefined8 *)((long)local_90 + lVar6 + 0x28);
    local_90[0] = *(undefined8 *)((long)local_90 + lVar6 + 0x20);
    local_90[1] = param_1;
    lVar8 = *(long *)(&stack0xffffffffffffffa0 + lVar6);
    uVar5 = (&stack0xffffffffffffffa8)[lVar6];
    _swift_release(*(undefined8 *)((long)local_90 + lVar6 + 0x10));
    if (param_2 == lVar8) {
      (**(code **)(lVar11 + 8))();
      uVar7 = local_90[1];
      *unaff_x20 = uVar1;
      unaff_x20[1] = uVar2;
      unaff_x20[2] = local_90[1];
      unaff_x20[3] = uVar3;
      unaff_x20[4] = local_90[0];
      unaff_x20[5] = uVar4;
      unaff_x20[6] = param_2;
      *(undefined1 *)(unaff_x20 + 7) = uVar5;
      _swift_storeEnumTagMultiPayload();
      _swift_retain(uVar7);
    }
    else {
      _swift_release(uVar4);
      _swift_release(uVar1);
    }
  }
  else {
    (**(code **)(lVar11 + 8))(puVar10,lVar8);
  }
  return;
}



/* Address: 0x10078c354 | FUN_10078c354 */

ulong FUN_10078c354(ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  CancellationError CVar7;
  undefined *puVar8;
  CancellationError CVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  String SVar15;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 local_80 [4];
  
  local_80[1] = *(undefined8 *)(param_3 + 0x18);
  local_80[0] = *(undefined8 *)(param_3 + 0x10);
  local_80[3] = *(undefined8 *)(param_3 + 0x28);
  local_80[2] = *(undefined8 *)(param_3 + 0x20);
  lVar5 = 0;
  FUN_10078a6c0(0,local_80);
  lVar13 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)local_80 + lVar3);
  (**(code **)(lVar13 + 0x10))(puVar12);
  puVar6 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar5);
  if ((int)puVar6 == 1) {
    uVar10 = *puVar12;
    uVar11 = *(undefined8 *)((long)local_80 + lVar3 + 0x10);
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar3);
    if (param_2 == *(long *)(&stack0xffffffffffffffb0 + lVar3)) {
      if (*(long *)(&stack0xffffffffffffffa0 + lVar3) != 0) {
        _swift_release(uVar1);
        _swift_release(uVar11);
        _swift_release(uVar10);
        return param_1 | 0x4000000000000000;
      }
      uVar14 = *(undefined8 *)((long)local_80 + lVar3 + 8);
      uVar2 = (&stack0xffffffffffffffb8)[lVar3];
      (**(code **)(lVar13 + 8))();
      *unaff_x20 = uVar10;
      unaff_x20[1] = uVar14;
      unaff_x20[2] = uVar11;
      unaff_x20[3] = param_1;
      unaff_x20[4] = 0;
      unaff_x20[5] = uVar1;
      unaff_x20[6] = param_2;
      *(undefined1 *)(unaff_x20 + 7) = uVar2;
      _swift_storeEnumTagMultiPayload();
    }
    else {
      CVar9 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar9;
      FUN_10076915c();
      _swift_allocError(CVar9.unknown,CVar7.unknown,0,0);
      Swift::CancellationError::init();
      puVar8 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar6 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar6 = CVar9.unknown;
      _swift_continuation_throwingResumeWithError(param_1,puVar8);
      _swift_release(uVar1);
      _swift_release(uVar11);
      _swift_release(uVar10);
    }
  }
  else {
    if ((int)puVar6 != 2) {
      *(undefined4 *)((long)auStack_88 + lVar3) = 0;
      *(undefined8 *)((long)&uStack_90 + lVar3) = 0x15e;
      SVar15.bridgeObject = (void *)0x2;
      SVar15.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar15,(StaticString)0x2064696c61766e49,
                 0xed00006574617473,0xdb1630);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10078c5d4);
      (*pcVar4)();
    }
    CVar9 = Swift::CancellationError::typeMetadataAccessor();
    CVar7 = CVar9;
    FUN_10076915c();
    _swift_allocError(CVar9.unknown,CVar7.unknown,0,0);
    Swift::CancellationError::init();
    puVar8 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    puVar6 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar6 = CVar9.unknown;
    _swift_continuation_throwingResumeWithError(param_1,puVar8);
  }
  return 0x8000000000000000;
}



/* Address: 0x10078c5d4 | FUN_10078c5d4 */

void FUN_10078c5d4(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  Result RVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 *puVar6;
  UnsafeContinuation UVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  String SVar16;
  undefined8 auStack_f0 [2];
  long alStack_e0 [10];
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar12 = *(undefined8 *)(param_4 + 0x28);
  uVar14 = *(undefined8 *)(param_4 + 0x18);
  lVar4 = 0xff;
  alStack_e0[6] = param_2;
  local_90 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  alStack_e0[5] = lVar4;
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar3.value);
  lVar11 = *(long *)(lVar4 + -8);
  lVar8 = (long)alStack_e0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_e0[7] = *(undefined8 *)(param_4 + 0x10);
  uVar10 = *(undefined8 *)(param_4 + 0x20);
  lVar5 = 0;
  alStack_e0[8] = uVar14;
  alStack_e0[9] = uVar12;
  local_80 = alStack_e0[7];
  uStack_78 = uVar14;
  local_70 = uVar10;
  local_68 = uVar12;
  FUN_10078a6c0(0,&local_80);
  lVar13 = *(long *)(lVar5 + -8);
  puVar15 = (undefined8 *)(lVar8 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar13 + 0x10))(puVar15);
  puVar6 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar5);
  if ((int)puVar6 == 1) {
    alStack_e0[4] = uVar10;
    uVar10 = *puVar15;
    uVar14 = puVar15[2];
    lVar5 = puVar15[4];
    uVar12 = puVar15[5];
    uVar1 = *(undefined1 *)(puVar15 + 7);
    local_88 = uVar12;
    if (param_3 == puVar15[6]) {
      alStack_e0[1] = puVar15[1];
      alStack_e0[2] = uVar14;
      alStack_e0[3] = uVar10;
      if (lVar5 != 0) {
        (**(code **)(lVar13 + 8))();
        *unaff_x20 = alStack_e0[3];
        unaff_x20[1] = alStack_e0[1];
        unaff_x20[2] = alStack_e0[2];
        unaff_x20[3] = 0;
        unaff_x20[4] = 0;
        unaff_x20[5] = uVar12;
        unaff_x20[6] = param_3;
        *(undefined1 *)(unaff_x20 + 7) = uVar1;
        _swift_storeEnumTagMultiPayload();
        lVar4 = alStack_e0[5];
        Swift::Optional::typeMetadataAccessor();
        UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
        RVar3 = Swift::Result::typeMetadataAccessor();
        lVar8 = 0;
        _swift_getTupleTypeMetadata2(0,UVar7.unknown,RVar3.value,0,0);
        plVar9 = local_90;
        lVar8 = (long)*(int *)(lVar8 + 0x30);
        *local_90 = lVar5;
        lVar5 = *(long *)(lVar4 + -8);
        (**(code **)(lVar5 + 0x10))((long)local_90 + lVar8,alStack_e0[6],lVar4);
        (**(code **)(lVar5 + 0x38))((long)plVar9 + lVar8,0,1,lVar4);
        _swift_storeEnumTagMultiPayload((long)plVar9 + lVar8,RVar3.value,0);
        local_80 = alStack_e0[7];
        uStack_78 = alStack_e0[8];
        local_70 = alStack_e0[4];
        local_68 = alStack_e0[9];
        uVar10 = 0;
        FUN_10078c9c0(0,&local_80);
        uVar12 = 2;
        goto LAB_10078c940;
      }
      (**(code **)(*(long *)(alStack_e0[5] + -8) + 0x10))(lVar8,alStack_e0[6]);
      _swift_storeEnumTagMultiPayload(lVar8,lVar4,0);
      uVar10 = 0;
      FUN_1006883a0(0,lVar4);
      FUN_100679d80(lVar8,uVar10);
      (**(code **)(lVar11 + 8))(lVar8,lVar4);
      (**(code **)(lVar13 + 8))();
      *unaff_x20 = alStack_e0[3];
      unaff_x20[1] = alStack_e0[1];
      unaff_x20[2] = alStack_e0[2];
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      unaff_x20[5] = local_88;
      unaff_x20[6] = param_3;
      *(undefined1 *)(unaff_x20 + 7) = uVar1;
      _swift_storeEnumTagMultiPayload();
    }
    else {
      _swift_release(uVar12);
      _swift_release(uVar14);
      _swift_release(uVar10);
    }
    local_70 = alStack_e0[4];
    uVar10 = local_70;
  }
  else if ((int)puVar6 != 2) {
    *(undefined4 *)(puVar15 + -1) = 0;
    puVar15[-2] = 400;
    SVar16.bridgeObject = (void *)0x2;
    SVar16.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar16,(StaticString)0x2064696c61766e49,0xed00006574617473,
               0xdb1630);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10078c9c0);
    (*pcVar2)();
  }
  local_70 = uVar10;
  local_68 = alStack_e0[9];
  uVar10 = 0;
  local_80 = alStack_e0[7];
  uStack_78 = alStack_e0[8];
  FUN_10078c9c0(0,&local_80);
  uVar12 = 5;
  plVar9 = local_90;
LAB_10078c940:
  _swift_storeEnumTagMultiPayload(plVar9,uVar10,uVar12);
  return;
}



/* Address: 0x10078c9c0 | FUN_10078c9c0 */

void FUN_10078c9c0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbfa74);
  return;
}



/* Address: 0x10078c9cc | FUN_10078c9cc */

void FUN_10078c9cc(long *param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Result RVar4;
  long lVar5;
  undefined8 *puVar6;
  UnsafeContinuation UVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  code *local_e0;
  long local_d8 [6];
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar14 = *(long *)(param_3 + 0x18);
  lStack_88 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x10);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  lVar5 = 0;
  local_a0 = uVar11;
  local_90 = lVar8;
  local_80 = lVar8;
  lStack_78 = lVar14;
  local_70 = uVar11;
  local_68 = uVar13;
  FUN_10078a6c0(0,&local_80);
  lVar12 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)&local_e0 + lVar3);
  (**(code **)(lVar12 + 0x10))(puVar15);
  puVar6 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar5);
  if ((int)puVar6 != 1) {
    uVar9 = 0;
    local_80 = lVar8;
    lStack_78 = lVar14;
    local_70 = uVar11;
    local_68 = uVar13;
    FUN_10078c9c0(0,&local_80);
    _swift_storeEnumTagMultiPayload(param_1,uVar9,5);
    (**(code **)(lVar12 + 8))(puVar15,lVar5);
    return;
  }
  local_d8[4] = uVar11;
  local_d8[5] = uVar13;
  local_a8 = param_1;
  uVar13 = *puVar15;
  local_d8[1] = *(long *)((long)local_d8 + lVar3);
  uVar11 = *(undefined8 *)((long)local_d8 + lVar3 + 0x20);
  local_d8[3] = *(long *)((long)local_d8 + lVar3 + 0x18);
  lVar5 = *(long *)((long)local_d8 + lVar3 + 0x28);
  cVar1 = *(char *)((long)&local_a8 + lVar3);
  _swift_release(*(undefined8 *)((long)local_d8 + lVar3 + 8));
  local_d8[2] = param_2;
  if (param_2 != lVar5) {
    local_70 = local_d8[4];
    local_68 = local_d8[5];
    uVar9 = 0;
    local_80 = lVar8;
    lStack_78 = lVar14;
    FUN_10078c9c0(0,&local_80);
    _swift_storeEnumTagMultiPayload(local_a8,uVar9,5);
    _swift_release(uVar11);
    _swift_release(uVar13);
    return;
  }
  local_d8[0] = lVar8;
  if (cVar1 == '\0') {
    local_e0 = *(code **)(lVar12 + 8);
    (*local_e0)();
    lVar12 = local_d8[3];
    lVar5 = local_d8[2];
    lVar3 = local_d8[1];
    *unaff_x20 = uVar13;
    unaff_x20[1] = local_d8[1];
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    unaff_x20[4] = local_d8[3];
    unaff_x20[5] = uVar11;
    unaff_x20[6] = local_d8[2];
    *(undefined1 *)(unaff_x20 + 7) = 0;
    _swift_storeEnumTagMultiPayload();
    lVar8 = local_d8[5];
    if (lVar12 != 0 && lVar3 != 0) {
      local_90 = lVar14;
      _swift_retain(uVar13);
      _swift_retain(uVar11);
      (*local_e0)();
      *unaff_x20 = uVar13;
      unaff_x20[2] = 0;
      unaff_x20[3] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = lVar12;
      unaff_x20[5] = uVar11;
      unaff_x20[6] = lVar5;
      *(undefined1 *)(unaff_x20 + 7) = 0;
      _swift_storeEnumTagMultiPayload();
      plVar10 = local_a8;
      *local_a8 = lVar3;
      local_80 = local_d8[0];
      lStack_78 = local_90;
      local_70 = local_d8[4];
      local_68 = lVar8;
      uVar13 = 0;
      FUN_10078c9c0(0,&local_80);
      uVar11 = 3;
      goto LAB_10078cd84;
    }
  }
  else {
    _swift_release(uVar11);
    _swift_release(uVar13);
    (**(code **)(lVar12 + 8))();
    _swift_storeEnumTagMultiPayload();
    lVar5 = local_d8[5];
    lVar3 = local_d8[3];
    if (local_d8[3] != 0) {
      lVar12 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,local_d8[5],lVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
      RVar4 = Swift::Result::typeMetadataAccessor();
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,UVar7.unknown,RVar4.value,0,0);
      plVar10 = local_a8;
      iVar2 = *(int *)(lVar8 + 0x30);
      *local_a8 = lVar3;
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))((long)local_a8 + (long)iVar2,1,1,lVar12);
      _swift_storeEnumTagMultiPayload((long)plVar10 + (long)iVar2,RVar4.value,0);
      local_80 = local_d8[0];
      local_70 = local_d8[4];
      local_68 = lVar5;
      uVar13 = 0;
      lStack_78 = lVar14;
      FUN_10078c9c0(0,&local_80);
      uVar11 = 2;
      goto LAB_10078cd84;
    }
  }
  lStack_78 = lStack_88;
  local_80 = local_90;
  local_68 = uStack_98;
  local_70 = local_a0;
  uVar13 = 0;
  FUN_10078c9c0(0,&local_80);
  uVar11 = 5;
  plVar10 = local_a8;
LAB_10078cd84:
  _swift_storeEnumTagMultiPayload(plVar10,uVar13,uVar11);
  return;
}



/* Address: 0x10078cda8 | FUN_10078cda8 */

void FUN_10078cda8(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  Result RVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  UnsafeContinuation UVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long alStack_d0 [8];
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  alStack_d0[7] = *(undefined8 *)(param_4 + 0x18);
  alStack_d0[6] = *(undefined8 *)(param_4 + 0x10);
  uStack_88 = *(undefined8 *)(param_4 + 0x28);
  local_90 = *(long **)(param_4 + 0x20);
  uVar13 = *(undefined8 *)(param_4 + 0x28);
  lVar6 = 0;
  alStack_d0[5] = param_3;
  local_80 = alStack_d0[6];
  uStack_78 = alStack_d0[7];
  local_70 = local_90;
  local_68 = uStack_88;
  FUN_10078c9c0(0,&local_80);
  lVar15 = *(long *)(lVar6 + -8);
  lVar3 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)alStack_d0 + lVar3);
  local_80 = alStack_d0[6];
  local_70 = local_90;
  lVar7 = 0;
  alStack_d0[6] = uVar10;
  uStack_78 = uVar10;
  local_68 = uVar13;
  FUN_10078a6c0(0,&local_80);
  lVar12 = *(long *)(lVar7 + -8);
  puVar11 = (undefined8 *)((long)puVar14 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar12 + 0x10))(puVar11);
  puVar8 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar7);
  if ((int)puVar8 == 1) {
    alStack_d0[1] = param_2;
    local_90 = param_1;
    uVar10 = *puVar11;
    uVar1 = puVar11[2];
    alStack_d0[2] = puVar11[3];
    alStack_d0[3] = puVar11[1];
    alStack_d0[4] = puVar11[4];
    lVar7 = puVar11[6];
    _swift_release(puVar11[5]);
    if (alStack_d0[5] == lVar7) {
      (**(code **)(lVar12 + 8))();
      _swift_storeEnumTagMultiPayload();
      *puVar14 = uVar10;
      *(undefined8 *)((long)alStack_d0 + lVar3 + 8) = uVar1;
      lVar7 = alStack_d0[2];
      *(long *)((long)alStack_d0 + lVar3 + 0x10) = alStack_d0[3];
      *(long *)((long)alStack_d0 + lVar3 + 0x18) = lVar7;
      _swift_storeEnumTagMultiPayload(puVar14,lVar6,4);
      lVar3 = alStack_d0[4];
      if (alStack_d0[4] == 0) {
        (**(code **)(lVar15 + 0x20))(local_90,puVar14,lVar6);
      }
      else {
        (**(code **)(lVar15 + 8))(puVar14,lVar6);
        _swift_getAssociatedTypeWitness
                  (0xff,uVar13,alStack_d0[6],
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
        RVar5 = Swift::Result::typeMetadataAccessor();
        lVar12 = 0;
        _swift_getTupleTypeMetadata2(0,UVar9.unknown,RVar5.value,0,0);
        plVar4 = local_90;
        lVar7 = alStack_d0[1];
        iVar2 = *(int *)(lVar12 + 0x30);
        *local_90 = lVar3;
        *(long *)((long)local_90 + (long)iVar2) = alStack_d0[1];
        _swift_storeEnumTagMultiPayload((long)local_90 + (long)iVar2,RVar5.value,1);
        _swift_storeEnumTagMultiPayload(plVar4,lVar6,2);
        _swift_errorRetain(lVar7);
      }
    }
    else {
      _swift_storeEnumTagMultiPayload(local_90,lVar6,5);
      _swift_release(uVar1);
      _swift_release(uVar10);
    }
  }
  else {
    _swift_storeEnumTagMultiPayload(param_1,lVar6,5);
    (**(code **)(lVar12 + 8))(puVar11,lVar7);
  }
  return;
}



/* Address: 0x10078d05c | FUN_10078d05c */

void FUN_10078d05c(long *param_1,long param_2)

{
  int iVar1;
  Result RVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  UnsafeContinuation UVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_e0;
  long local_d8;
  long local_d0 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  local_d0[7] = *(undefined8 *)(param_2 + 0x28);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = 0;
  local_d0[6] = uVar16;
  uStack_90 = uVar10;
  local_80 = uVar10;
  uStack_78 = uVar14;
  local_70 = uVar16;
  local_68 = uVar13;
  FUN_10078a6c0(0,&local_80);
  lVar15 = *(long *)(lVar4 + -8);
  lVar12 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)&local_e0 + lVar12);
  (**(code **)(lVar15 + 0x10))(puVar11);
  puVar5 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar4);
  if ((int)puVar5 != 1) {
    uVar8 = 0;
    local_80 = uVar10;
    uStack_78 = uVar14;
    local_70 = uVar16;
    local_68 = uVar13;
    FUN_10078c9c0(0,&local_80);
    _swift_storeEnumTagMultiPayload(param_1,uVar8,5);
    (**(code **)(lVar15 + 8))(puVar11,lVar4);
    return;
  }
  local_d0[2] = uVar16;
  lVar4 = *(long *)((long)local_d0 + lVar12);
  local_d0[3] = *(undefined8 *)((long)local_d0 + lVar12 + 8);
  local_d0[4] = *puVar11;
  uVar16 = *(undefined8 *)((long)local_d0 + lVar12 + 0x18);
  local_d0[5] = *(long *)((long)local_d0 + lVar12 + 0x10);
  lVar12 = *(long *)((long)local_d0 + lVar12 + 0x20);
  if (lVar4 == 0) {
    lVar6 = 0xff;
    local_80 = uVar16;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar14,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    puVar7 = &DAT_100fdfb40;
    local_d0[0] = lVar12;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    local_e0 = puVar7;
    local_d8 = lVar6;
    RVar2 = Swift::Result::typeMetadataAccessor();
    uVar8 = 0;
    FUN_1006883a0(0,RVar2.value);
    local_d0[1] = uVar10;
    _swift_getWitnessTable(0x100c6d780,uVar8);
    lVar6 = local_d0[1];
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    lVar12 = local_d0[0];
    if (!bVar3) goto LAB_10078d2f8;
    _swift_release(uVar16);
    _swift_release(local_d0[4]);
    (**(code **)(lVar15 + 8))();
    _swift_storeEnumTagMultiPayload();
    lVar4 = local_d0[5];
    lVar12 = local_d8;
    if (local_d0[5] != 0) {
      Swift::Optional::typeMetadataAccessor();
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      RVar2 = Swift::Result::typeMetadataAccessor();
      lVar15 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,RVar2.value,0,0);
      iVar1 = *(int *)(lVar15 + 0x30);
      *param_1 = lVar4;
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar12);
      _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar1,RVar2.value,0);
      local_80 = lVar6;
      local_70 = local_d0[2];
      uVar10 = 0;
      uStack_78 = uVar14;
      local_68 = uVar13;
      FUN_10078c9c0(0,&local_80);
      uVar13 = 2;
      goto LAB_10078d358;
    }
  }
  else {
LAB_10078d2f8:
    (**(code **)(lVar15 + 8))();
    *unaff_x20 = local_d0[4];
    unaff_x20[1] = 0;
    unaff_x20[2] = lVar4;
    unaff_x20[3] = local_d0[3];
    unaff_x20[4] = local_d0[5];
    unaff_x20[5] = uVar16;
    unaff_x20[6] = lVar12;
    *(undefined1 *)(unaff_x20 + 7) = 1;
    _swift_storeEnumTagMultiPayload();
  }
  uStack_78 = uStack_88;
  local_80 = uStack_90;
  local_68 = local_d0[7];
  local_70 = local_d0[6];
  uVar10 = 0;
  FUN_10078c9c0(0,&local_80);
  uVar13 = 5;
LAB_10078d358:
  _swift_storeEnumTagMultiPayload(param_1,uVar10,uVar13);
  return;
}



/* Address: 0x10078d37c | FUN_10078d37c */

void FUN_10078d37c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  Result RVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  UnsafeContinuation UVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long alStack_d0 [6];
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  alStack_d0[3] = *(undefined8 *)(param_3 + 0x18);
  alStack_d0[2] = *(undefined8 *)(param_3 + 0x10);
  uStack_98 = *(undefined8 *)(param_3 + 0x28);
  local_a0 = *(long **)(param_3 + 0x20);
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  lVar7 = 0;
  alStack_d0[1] = param_2;
  local_90 = alStack_d0[2];
  local_88 = alStack_d0[3];
  local_80 = local_a0;
  uStack_78 = uStack_98;
  FUN_10078c9c0(0,&local_90);
  lVar11 = *(long *)(lVar7 + -8);
  lVar2 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)alStack_d0 + lVar2);
  local_90 = alStack_d0[2];
  local_80 = local_a0;
  lVar8 = 0;
  local_88 = uVar12;
  uStack_78 = uVar13;
  FUN_10078a6c0(0,&local_90);
  lVar16 = *(long *)(lVar8 + -8);
  puVar15 = (undefined8 *)((long)puVar14 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar16 + 0x10))(puVar15);
  puVar9 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar8);
  if ((int)puVar9 == 1) {
    local_a0 = param_1;
    lVar8 = puVar15[4];
    alStack_d0[3] = puVar15[1];
    alStack_d0[2] = *puVar15;
    alStack_d0[5] = puVar15[3];
    alStack_d0[4] = puVar15[2];
    _swift_release(puVar15[5]);
    (**(code **)(lVar16 + 8))();
    _swift_storeEnumTagMultiPayload();
    lVar4 = alStack_d0[5];
    lVar3 = alStack_d0[4];
    lVar16 = alStack_d0[3];
    *puVar14 = alStack_d0[2];
    *(long *)((long)alStack_d0 + lVar2 + 8) = lVar3;
    *(long *)((long)alStack_d0 + lVar2 + 0x10) = lVar16;
    *(long *)((long)alStack_d0 + lVar2 + 0x18) = lVar4;
    _swift_storeEnumTagMultiPayload(puVar14,lVar7,4);
    if (lVar8 == 0) {
      (**(code **)(lVar11 + 0x20))(local_a0,puVar14,lVar7);
    }
    else {
      (**(code **)(lVar11 + 8))(puVar14,lVar7);
      _swift_getAssociatedTypeWitness
                (0xff,uVar13,uVar12,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
      RVar6 = Swift::Result::typeMetadataAccessor();
      lVar11 = 0;
      _swift_getTupleTypeMetadata2(0,UVar10.unknown,RVar6.value,0,0);
      plVar5 = local_a0;
      lVar2 = alStack_d0[1];
      iVar1 = *(int *)(lVar11 + 0x30);
      *local_a0 = lVar8;
      *(long *)((long)local_a0 + (long)iVar1) = alStack_d0[1];
      _swift_storeEnumTagMultiPayload((long)local_a0 + (long)iVar1,RVar6.value,1);
      _swift_storeEnumTagMultiPayload(plVar5,lVar7,2);
      _swift_errorRetain(lVar2);
    }
  }
  else {
    _swift_storeEnumTagMultiPayload(param_1,lVar7,5);
    (**(code **)(lVar16 + 8))(puVar15,lVar8);
  }
  return;
}



/* Address: 0x10078d5f4 | FUN_10078d5f4 */

void FUN_10078d5f4(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Result RVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  UnsafeContinuation UVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long local_c0 [9];
  undefined8 local_78;
  
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  local_c0[1] = *(undefined8 *)(param_2 + 0x18);
  local_c0[0] = *(long *)(param_2 + 0x10);
  local_c0[3] = *(undefined8 *)(param_2 + 0x28);
  local_c0[2] = *(undefined8 *)(param_2 + 0x20);
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  lVar5 = 0;
  local_c0[6] = local_c0[0];
  local_c0[7] = local_c0[1];
  local_c0[8] = local_c0[2];
  local_78 = local_c0[3];
  FUN_10078c9c0(0,local_c0 + 6);
  lVar16 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)local_c0 + lVar8);
  local_c0[6] = local_c0[0];
  local_c0[8] = local_c0[2];
  lVar6 = 0;
  local_c0[7] = uVar10;
  local_78 = uVar12;
  FUN_10078a6c0(0,local_c0 + 6);
  lVar15 = *(long *)(lVar6 + -8);
  puVar14 = (undefined8 *)((long)puVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar15 + 0x10))(puVar14);
  puVar7 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar6);
  if ((int)puVar7 == 1) {
    lVar6 = puVar14[4];
    local_c0[3] = puVar14[1];
    local_c0[2] = *puVar14;
    local_c0[5] = puVar14[3];
    local_c0[4] = puVar14[2];
    _swift_release(puVar14[5]);
    (**(code **)(lVar15 + 8))();
    _swift_storeEnumTagMultiPayload();
    lVar3 = local_c0[5];
    lVar2 = local_c0[4];
    lVar15 = local_c0[3];
    *puVar13 = local_c0[2];
    *(long *)((long)local_c0 + lVar8 + 8) = lVar2;
    *(long *)((long)local_c0 + lVar8 + 0x10) = lVar15;
    *(long *)((long)local_c0 + lVar8 + 0x18) = lVar3;
    _swift_storeEnumTagMultiPayload(puVar13,lVar5,4);
    if (lVar6 == 0) {
      (**(code **)(lVar16 + 0x20))(param_1,puVar13,lVar5);
    }
    else {
      (**(code **)(lVar16 + 8))(puVar13,lVar5);
      lVar8 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar12,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      RVar4 = Swift::Result::typeMetadataAccessor();
      lVar15 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,RVar4.value,0,0);
      iVar1 = *(int *)(lVar15 + 0x30);
      *param_1 = lVar6;
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar8);
      _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar1,RVar4.value,0);
      _swift_storeEnumTagMultiPayload(param_1,lVar5,2);
    }
  }
  else {
    pcVar11 = *(code **)(lVar15 + 8);
    (*pcVar11)();
    _swift_storeEnumTagMultiPayload();
    _swift_storeEnumTagMultiPayload(param_1,lVar5,5);
    (*pcVar11)(puVar14,lVar6);
  }
  return;
}



/* Address: 0x10078d884 | FUN_10078d884 */

void FUN_10078d884(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf9e4);
  return;
}



/* Address: 0x10078d890 | FUN_10078d890 */

void FUN_10078d890(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c772b8;
    uVar2 = *(ulong *)(param_1 + 0x10);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    }
  }
  return;
}



/* Address: 0x10078d934 | FUN_10078d934 */

long * FUN_10078d934(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar5 + 0x40);
  if (*(ulong *)(lVar5 + 0x40) <= *(ulong *)(lVar6 + 0x40)) {
    uVar4 = *(ulong *)(lVar6 + 0x40);
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  uVar7 = *(uint *)(lVar6 + 0x50) | *(uint *)(lVar5 + 0x50);
  if (0x18 < uVar4 + 1 || (uVar7 & 0x1000f8) != 0) {
    uVar4 = (ulong)(uVar7 & 0xf8 | 7);
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar7 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078da64;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078da64:
  if (uVar7 == 2) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else if (uVar7 == 1) {
    lVar2 = *(long *)param_2;
    _swift_errorRetain(lVar2);
    *param_1 = lVar2;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar7 != 0) {
      plVar3 = _memcpy(param_1,param_2,uVar4 + 1);
      return plVar3;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
    *(undefined1 *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}



/* Address: 0x10078dae8 | FUN_10078dae8 */

void FUN_10078dae8(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = *(long *)(param_2 + 0x10);
  uVar6 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar7 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar8 = 4;
    if (uVar4 < 4) {
      uVar8 = uVar4;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078dbbc;
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
    uVar7 = uVar8 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078dbbc:
  if (uVar7 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
  }
  else {
    if (uVar7 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
      return;
    }
    if (uVar7 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 8);
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010078dc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
  return;
}



/* Address: 0x10078dc10 | FUN_10078dc10 */

undefined8 * FUN_10078dc10(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar1;
  if (2 < bVar1) {
    uVar11 = (uint)uVar6;
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078dcec;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar1 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078dcec:
  if (uVar7 == 2) {
    (**(code **)(lVar5 + 0x10))(param_1);
    uVar4 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar6) = 0;
        return param_1;
      }
      puVar3 = _memcpy(param_1,param_2,uVar6 + 1);
      return puVar3;
    }
    uVar10 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar4 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar6) = uVar4;
  return param_1;
}



/* Address: 0x10078dd70 | FUN_10078dd70 */

uint * FUN_10078dd70(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar10 + -8);
  uVar1 = *(ulong *)(lVar12 + 0x40);
  if (*(ulong *)(lVar12 + 0x40) <= *(ulong *)(lVar13 + 0x40)) {
    uVar1 = *(ulong *)(lVar13 + 0x40);
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar11 = (uint)uVar1;
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar5;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078de60;
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
    uVar7 = uVar8 | bVar5 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078de60:
  if (uVar7 == 2) {
    pcVar6 = *(code **)(lVar13 + 8);
    lVar4 = lVar10;
LAB_10078de9c:
    (*pcVar6)(param_1,lVar4);
  }
  else if (uVar7 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar7 == 0) {
    pcVar6 = *(code **)(lVar12 + 8);
    lVar4 = lVar2;
    goto LAB_10078de9c;
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar5;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078df10;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar5 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078df10:
  if (uVar7 == 2) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar10);
    bVar5 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar2);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    uVar9 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar9);
    *(undefined8 *)param_1 = uVar9;
    bVar5 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar5;
  return param_1;
}



/* Address: 0x10078dfb4 | FUN_10078dfb4 */

undefined8 * FUN_10078dfb4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar1;
  if (2 < bVar1) {
    uVar10 = (uint)uVar6;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078e08c;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar1 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078e08c:
  if (uVar7 == 2) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2);
    uVar4 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar6) = 0;
        return param_1;
      }
      puVar3 = _memcpy(param_1,param_2,uVar6 + 1);
      return puVar3;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar4 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar6) = uVar4;
  return param_1;
}



/* Address: 0x10078e114 | FUN_10078e114 */

uint * FUN_10078e114(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar9 + -8);
  uVar1 = *(ulong *)(lVar11 + 0x40);
  if (*(ulong *)(lVar11 + 0x40) <= *(ulong *)(lVar12 + 0x40)) {
    uVar1 = *(ulong *)(lVar12 + 0x40);
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar10 = (uint)uVar1;
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar5;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078e204;
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
    uVar7 = uVar8 | bVar5 - 3 << (ulong)(uVar10 << 3 & 0x1f);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078e204:
  if (uVar7 == 2) {
    pcVar6 = *(code **)(lVar12 + 8);
    lVar4 = lVar9;
LAB_10078e240:
    (*pcVar6)(param_1,lVar4);
  }
  else if (uVar7 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else if (uVar7 == 0) {
    pcVar6 = *(code **)(lVar11 + 8);
    lVar4 = lVar2;
    goto LAB_10078e240;
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar5;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10078e2b4;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar5 - 3 << (ulong)(uVar10 << 3 & 0x1f);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10078e2b4:
  if (uVar7 == 2) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar9);
    bVar5 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar2);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar5 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar5;
  return param_1;
}



/* Address: 0x10078e350 | FUN_10078e350 */

int FUN_10078e350(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  if (3 < (uint)uVar6) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_10078e460;
  uVar7 = uVar6 + 1;
  uVar8 = (uint)uVar7;
  uVar2 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_10078e460;
      goto LAB_10078e3ec;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10078e3ec:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar9 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar8 != 0) {
      uVar2 = 4;
      if (uVar8 < 4) {
        uVar2 = uVar8;
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
    return uVar3 + ((uint)uVar7 | uVar1) + 1;
  }
LAB_10078e460:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar6);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar6) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x10078e4d4 | FUN_10078e4d4 */

void FUN_10078e4d4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar7 = *(ulong *)(*(long *)(lVar6 + -8) + 0x40);
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar4 = 0xfc;
  }
  sVar2 = uVar7 + 1;
  uVar10 = (uint)sVar2;
  if (uVar4 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar10 << 3 & 0x1f))) - uVar4 >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar10 < 4) {
      bVar5 = bVar9;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar4 < param_2) {
    param_2 = param_2 + ~uVar4;
    if (uVar10 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar3 = (undefined2)uVar4;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar11;
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



/* Address: 0x10078e6d4 | FUN_10078e6d4 */

uint FUN_10078e6d4(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) {
        return uVar2;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar2 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar7;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Address: 0x10078e7b0 | FUN_10078e7b0 */

void FUN_10078e7b0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  sVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar4 <= uVar5) {
    sVar4 = uVar5;
  }
  if (sVar4 < 9) {
    sVar4 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + sVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar6 = (uint)sVar4;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + sVar4) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x03';
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
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



/* Address: 0x10078e8b4 | FUN_10078e8b4 */

int FUN_10078e8b4(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0xfe;
  }
  bVar2 = (byte)((ulong)*(undefined8 *)param_1 >> 0x38);
  uVar1 = ((uint)(bVar2 >> 6) | (bVar2 & 0x30 | (uint)*(undefined8 *)param_1 & 0xf) << 2) ^ 0xff;
  if (0xfc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10078e910 | FUN_10078e910 */

void FUN_10078e910(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x3f | (-param_2 & 0xff) << 6);
      *param_1 = (uVar1 | uVar1 << 0x38) & 0xf00000000000000f;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10078e960 | FUN_10078e960 */

uint FUN_10078e960(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (int)(uVar1 >> 4) + 2;
  if (-1 < (long)uVar1) {
    uVar2 = (uint)(uVar1 >> 0x3e);
  }
  return uVar2;
}



/* Address: 0x10078e97c | FUN_10078e97c */

void FUN_10078e97c(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2) << 4 | 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff0 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x10078e9a8 | FUN_10078e9a8 */

void FUN_10078e9a8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbfa2c);
  return;
}



/* Address: 0x10078e9b4 | FUN_10078e9b4 */

void FUN_10078e9b4(long param_1)

{
  Optional OVar1;
  Result RVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar4;
  undefined1 auStack_b8 [32];
  long local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined *puStack_50;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar4 < 0x40) {
    local_98 = *(long *)(lVar3 + -8) + 0x40;
    puStack_90 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_88 = &DAT_100c77308;
    puStack_80 = &DAT_100c77320;
    _swift_getTupleTypeLayout(auStack_78,0,4,&local_98);
    puStack_50 = &DAT_100c77338;
    local_58 = auStack_78;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x28),lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    uVar4 = CONCAT71(extraout_var,OVar1.value);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar2 = Swift::Result::typeMetadataAccessor();
    if (uVar4 < 0x40) {
      _swift_getTupleTypeLayout2
                (auStack_b8,&DAT_100c77350,
                 *(long *)(CONCAT71(extraout_var_00,RVar2.value) + -8) + 0x40);
      puStack_40 = &DAT_100c77350;
      local_38 = &DAT_100c77368;
      local_48 = auStack_b8;
      _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_58);
    }
  }
  return;
}



/* Address: 0x10078eb00 | FUN_10078eb00 */

long * FUN_10078eb00(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar15 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar15 + -8);
  lVar19 = *(long *)(lVar20 + 0x40);
  uVar10 = (lVar19 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar5 + -8);
  uVar9 = *(uint *)(lVar18 + 0x50) & 0xf8;
  uVar12 = *(ulong *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar3 = uVar12;
  if (uVar12 < 9) {
    uVar3 = 8;
  }
  lVar1 = uVar3 + ((ulong)(uVar9 + 0xf & (uVar9 ^ 0xffffffff)) & 0x1f8);
  if (uVar10 <= lVar1 + 1U) {
    uVar10 = lVar1 + 1;
  }
  if (uVar10 < 0x21) {
    uVar10 = 0x20;
  }
  uVar9 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar20 + 0x50);
  if ((uVar9 & 0x1000f8) == 0 && uVar10 + 1 < 0x19) {
    uVar9 = (uint)*(byte *)((long)param_2 + uVar10);
    if (4 < *(byte *)((long)param_2 + uVar10)) {
      uVar9 = (int)*param_2 + 5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) {
        (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar15);
        puVar16 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
        puVar11 = (undefined8 *)((long)param_2 + lVar19 + 7 & 0xfffffffffffffff8);
        *puVar16 = *puVar11;
        lVar5 = puVar11[1];
        puVar16[1] = lVar5;
        puVar16[2] = puVar11[2];
        *(undefined1 *)((long)param_1 + uVar10) = 0;
      }
      else {
        if (uVar9 != 1) goto LAB_10078ed4c;
        lVar5 = *param_2;
        lVar15 = param_2[1];
        *param_1 = lVar5;
        param_1[1] = lVar15;
        *(undefined1 *)((long)param_1 + uVar10) = 1;
      }
    }
    else {
      if (uVar9 == 2) {
        *param_1 = *param_2;
        puVar14 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
        bVar4 = *(byte *)((long)puVar14 + uVar3);
        uVar9 = (uint)bVar4;
        if (1 < bVar4) {
          uVar17 = (uint)uVar3;
          uVar2 = 4;
          if (uVar17 < 4) {
            uVar2 = uVar17;
          }
          if ((int)uVar2 < 2) {
            if (uVar2 == 0) goto LAB_10078eda8;
            uVar9 = (uint)(byte)*puVar14;
          }
          else if (uVar2 == 2) {
            uVar9 = (uint)(ushort)*puVar14;
          }
          else if (uVar2 == 3) {
            uVar9 = (uint)(uint3)*puVar14;
          }
          else {
            uVar9 = *puVar14;
          }
          if (uVar17 < 4) {
            uVar9 = (uVar9 | bVar4 - 2 << (ulong)((uVar17 & 3) << 3)) + 2;
          }
          else {
            uVar9 = uVar9 + 2;
          }
        }
LAB_10078eda8:
        puVar16 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
        if (uVar9 == 1) {
          uVar13 = *(undefined8 *)puVar14;
          _swift_errorRetain(uVar13);
          *puVar16 = uVar13;
          uVar8 = 1;
        }
        else {
          puVar7 = puVar14;
          (**(code **)(lVar18 + 0x30))(puVar14,1);
          if ((int)puVar7 == 0) {
            (**(code **)(lVar18 + 0x10))(puVar16,puVar14,lVar5);
            (**(code **)(lVar18 + 0x38))(puVar16,0,1,lVar5);
          }
          else {
            _memcpy(puVar16,puVar14,uVar12);
          }
          uVar8 = 0;
        }
        *(undefined1 *)((long)puVar16 + uVar3) = uVar8;
        *(undefined1 *)((long)param_1 + uVar10) = 2;
        return param_1;
      }
      if (uVar9 == 3) {
        *param_1 = *param_2;
        *(undefined1 *)((long)param_1 + uVar10) = 3;
        return param_1;
      }
      if (uVar9 != 4) {
LAB_10078ed4c:
        plVar6 = _memcpy(param_1,param_2,uVar10 + 1);
        return plVar6;
      }
      lVar5 = param_2[1];
      lVar15 = *param_2;
      lVar19 = param_2[3];
      lVar18 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar15;
      param_1[3] = lVar19;
      param_1[2] = lVar18;
      *(undefined1 *)((long)param_1 + uVar10) = 4;
      _swift_retain(lVar15);
    }
  }
  else {
    uVar10 = (ulong)(uVar9 & 0xf8 | 7);
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar5);
  return param_1;
}



/* Address: 0x10078ee3c | FUN_10078ee3c */

void FUN_10078ee3c(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *(long *)(param_2 + 0x18);
  lVar17 = *(long *)(lVar14 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  uVar1 = (lVar16 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar14,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8;
  uVar10 = uVar8 | 7;
  uVar9 = *(ulong *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  lVar2 = uVar9 + (uVar8 + 0xf & (uVar10 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar12 = (uint)bVar3;
  if (4 < bVar3) {
    uVar7 = (uint)uVar1;
    uVar11 = 4;
    if (uVar7 < 4) {
      uVar11 = uVar7;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto joined_r0x00010078ef58;
      uVar12 = (uint)(byte)*param_1;
    }
    else if (uVar11 == 2) {
      uVar12 = (uint)(ushort)*param_1;
    }
    else if (uVar11 == 3) {
      uVar12 = (uint)(uint3)*param_1;
    }
    else {
      uVar12 = *param_1;
    }
    if (uVar7 < 4) {
      uVar12 = (uVar12 | bVar3 - 5 << (ulong)((uVar7 & 3) << 3)) + 5;
    }
    else {
      uVar12 = uVar12 + 5;
    }
  }
joined_r0x00010078ef58:
  if ((int)uVar12 < 2) {
    if (uVar12 == 0) {
      (**(code **)(lVar17 + 8))(param_1,lVar14);
      uVar5 = *(undefined8 *)(((ulong)((long)param_1 + lVar16 + 7) & 0xfffffffffffffff8) + 8);
    }
    else {
      if (uVar12 != 1) {
        return;
      }
      uVar5 = *(undefined8 *)param_1;
    }
  }
  else {
    if (uVar12 == 2) {
      puVar13 = (uint *)((ulong)((long)param_1 + uVar10 + 8) & ~uVar10);
      bVar3 = *(byte *)((long)puVar13 + uVar9);
      uVar12 = (uint)bVar3;
      if (1 < bVar3) {
        uVar7 = (uint)uVar9;
        uVar11 = 4;
        if (uVar7 < 4) {
          uVar11 = uVar7;
        }
        if ((int)uVar11 < 2) {
          if (uVar11 == 0) goto LAB_10078f074;
          uVar11 = (uint)(byte)*puVar13;
        }
        else if (uVar11 == 2) {
          uVar11 = (uint)(ushort)*puVar13;
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*puVar13;
        }
        else {
          uVar11 = *puVar13;
        }
        uVar12 = uVar11 | bVar3 - 2 << (ulong)((uVar7 & 3) << 3);
        if (3 < uVar7) {
          uVar12 = uVar11;
        }
        uVar12 = uVar12 + 2;
      }
LAB_10078f074:
      if (uVar12 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar13);
        return;
      }
      puVar6 = puVar13;
      (**(code **)(lVar15 + 0x30))(puVar13,1);
      if ((int)puVar6 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010078f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 8))(puVar13,lVar4);
      return;
    }
    if (uVar12 != 4) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar5 = *(undefined8 *)(param_1 + 2);
  }
  _swift_release(uVar5);
  return;
}



/* Address: 0x10078f0e4 | FUN_10078f0e4 */

undefined8 * FUN_10078f0e4(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar16 = *(long *)(param_3 + 0x18);
  lVar21 = *(long *)(lVar16 + -8);
  lVar20 = *(long *)(lVar21 + 0x40);
  uVar1 = (lVar20 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar19 = *(long *)(lVar5 + -8);
  uVar14 = (ulong)*(uint *)(lVar19 + 0x50) & 0xf8;
  uVar10 = uVar14 | 7;
  uVar15 = *(ulong *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    uVar15 = uVar15 + 1;
  }
  uVar3 = uVar15;
  if (uVar15 < 9) {
    uVar3 = 8;
  }
  lVar2 = uVar3 + (uVar14 + 0xf & (uVar10 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar13 = (uint)bVar4;
  if (4 < bVar4) {
    uVar18 = (uint)uVar1;
    uVar11 = 4;
    if (uVar18 < 4) {
      uVar11 = uVar18;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto joined_r0x00010078f20c;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar18 < 4) {
      uVar13 = (uVar13 | bVar4 - 5 << (ulong)((uVar18 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
joined_r0x00010078f20c:
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar21 + 0x10))(param_1,param_2,lVar16);
      puVar7 = (undefined8 *)((long)param_1 + lVar20 + 7 & 0xfffffffffffffff8);
      puVar12 = (undefined8 *)((ulong)((long)param_2 + lVar20 + 7) & 0xfffffffffffffff8);
      *puVar7 = *puVar12;
      uVar6 = puVar12[1];
      puVar7[1] = uVar6;
      puVar7[2] = puVar12[2];
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
    else {
      if (uVar13 != 1) {
LAB_10078f364:
        puVar7 = _memcpy(param_1,param_2,uVar1 + 1);
        return puVar7;
      }
      uVar6 = *(undefined8 *)param_2;
      uVar22 = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar6;
      param_1[1] = uVar22;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
    }
LAB_10078f35c:
    _swift_retain(uVar6);
    return param_1;
  }
  if (uVar13 != 2) {
    if (uVar13 != 3) {
      if (uVar13 != 4) goto LAB_10078f364;
      uVar6 = *(undefined8 *)(param_2 + 2);
      uVar22 = *(undefined8 *)param_2;
      uVar24 = *(undefined8 *)(param_2 + 6);
      uVar23 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar22;
      param_1[3] = uVar24;
      param_1[2] = uVar23;
      *(undefined1 *)((long)param_1 + uVar1) = 4;
      _swift_retain(uVar22);
      goto LAB_10078f35c;
    }
    *param_1 = *(undefined8 *)param_2;
    uVar9 = 3;
    goto LAB_10078f448;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar7 = (undefined8 *)((long)param_1 + uVar10 + 8 & ~uVar10);
  puVar17 = (uint *)((ulong)((long)param_2 + uVar10 + 8) & ~uVar10);
  bVar4 = *(byte *)((long)puVar17 + uVar3);
  uVar13 = (uint)bVar4;
  if (1 < bVar4) {
    uVar18 = (uint)uVar3;
    uVar11 = 4;
    if (uVar18 < 4) {
      uVar11 = uVar18;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_10078f3c0;
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
    uVar13 = uVar11 | bVar4 - 2 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar13 = uVar11;
    }
    uVar13 = uVar13 + 2;
  }
LAB_10078f3c0:
  if (uVar13 == 1) {
    uVar6 = *(undefined8 *)puVar17;
    _swift_errorRetain(uVar6);
    *puVar7 = uVar6;
    uVar9 = 1;
  }
  else {
    puVar8 = puVar17;
    (**(code **)(lVar19 + 0x30))(puVar17,1);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar7,puVar17,lVar5);
      (**(code **)(lVar19 + 0x38))(puVar7,0,1,lVar5);
    }
    else {
      _memcpy(puVar7,puVar17,uVar15);
    }
    uVar9 = 0;
  }
  *(undefined1 *)((long)puVar7 + uVar3) = uVar9;
  uVar9 = 2;
LAB_10078f448:
  *(undefined1 *)((long)param_1 + uVar1) = uVar9;
  return param_1;
}



/* Address: 0x10078f46c | FUN_10078f46c */

uint * FUN_10078f46c(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar19 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar19 + -8);
  lVar22 = *(long *)(lVar10 + 0x40);
  uVar1 = (lVar22 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar21 = *(long *)(lVar4 + -8);
  uVar11 = (ulong)*(uint *)(lVar21 + 0x50) & 0xf8;
  uVar18 = uVar11 | 7;
  uVar17 = *(ulong *)(lVar21 + 0x40);
  if (*(int *)(lVar21 + 0x54) == 0) {
    uVar17 = uVar17 + 1;
  }
  uVar3 = uVar17;
  if (uVar17 < 9) {
    uVar3 = 8;
  }
  lVar2 = uVar3 + (uVar11 + 0xf & (uVar18 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar9 = *(byte *)((long)param_1 + uVar1);
  uVar13 = (uint)bVar9;
  uVar15 = (uint)uVar1;
  if (4 < bVar9) {
    uVar20 = 4;
    if (uVar15 < 4) {
      uVar20 = uVar15;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto LAB_10078f5c4;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar20 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar20 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    if (uVar15 < 4) {
      uVar13 = (uVar13 | bVar9 - 5 << (ulong)((uVar15 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
LAB_10078f5c4:
  uVar11 = ~uVar18;
  uVar20 = (uint)uVar3;
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar19);
      _swift_release(*(undefined8 *)(((ulong)((long)param_1 + lVar22 + 7) & 0xfffffffffffffff8) + 8)
                    );
    }
    else if (uVar13 == 1) {
      _swift_release(*(undefined8 *)param_1);
    }
  }
  else if (uVar13 == 2) {
    puVar7 = (uint *)((ulong)((long)param_1 + uVar18 + 8) & uVar11);
    bVar9 = *(byte *)((long)puVar7 + uVar3);
    uVar13 = (uint)bVar9;
    if (1 < bVar9) {
      uVar14 = 4;
      if (uVar20 < 4) {
        uVar14 = uVar20;
      }
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) goto LAB_10078f6c4;
        uVar14 = (uint)(byte)*puVar7;
      }
      else if (uVar14 == 2) {
        uVar14 = (uint)(ushort)*puVar7;
      }
      else if (uVar14 == 3) {
        uVar14 = (uint)(uint3)*puVar7;
      }
      else {
        uVar14 = *puVar7;
      }
      uVar13 = uVar14 | bVar9 - 2 << (ulong)((uVar20 & 3) << 3);
      if (3 < uVar20) {
        uVar13 = uVar14;
      }
      uVar13 = uVar13 + 2;
    }
LAB_10078f6c4:
    if (uVar13 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar7);
    }
    else {
      puVar5 = puVar7;
      (**(code **)(lVar21 + 0x30))(puVar7,1,lVar4);
      if ((int)puVar5 == 0) {
        (**(code **)(lVar21 + 8))(puVar7,lVar4);
      }
    }
  }
  else if (uVar13 == 4) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar9 = *(byte *)((long)param_2 + uVar1);
  uVar13 = (uint)bVar9;
  if (4 < bVar9) {
    uVar14 = 4;
    if (uVar15 < 4) {
      uVar14 = uVar15;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto joined_r0x00010078f770;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar14 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar14 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar15 < 4) {
      uVar13 = (uVar13 | bVar9 - 5 << (ulong)((uVar15 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
joined_r0x00010078f770:
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar19);
      puVar12 = (undefined8 *)((ulong)((long)param_1 + lVar22 + 7) & 0xfffffffffffffff8);
      puVar16 = (undefined8 *)((ulong)((long)param_2 + lVar22 + 7) & 0xfffffffffffffff8);
      *puVar12 = *puVar16;
      uVar6 = puVar16[1];
      puVar12[1] = uVar6;
      puVar12[2] = puVar16[2];
      *(byte *)((long)param_1 + uVar1) = 0;
    }
    else {
      if (uVar13 != 1) {
LAB_10078f8e8:
        puVar7 = _memcpy(param_1,param_2,uVar1 + 1);
        return puVar7;
      }
      uVar6 = *(undefined8 *)param_2;
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(byte *)((long)param_1 + uVar1) = 1;
    }
LAB_10078f8e0:
    _swift_retain(uVar6);
    return param_1;
  }
  if (uVar13 != 2) {
    if (uVar13 != 3) {
      if (uVar13 != 4) goto LAB_10078f8e8;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(byte *)((long)param_1 + uVar1) = 4;
      _swift_retain();
      goto LAB_10078f8e0;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar9 = 3;
    goto LAB_10078f9d4;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar12 = (undefined8 *)((ulong)((long)param_1 + uVar18 + 8) & uVar11);
  puVar7 = (uint *)((ulong)((long)param_2 + uVar18 + 8) & uVar11);
  bVar9 = *(byte *)((long)puVar7 + uVar3);
  uVar13 = (uint)bVar9;
  if (1 < bVar9) {
    uVar15 = 4;
    if (uVar20 < 4) {
      uVar15 = uVar20;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto LAB_10078f950;
      uVar15 = (uint)(byte)*puVar7;
    }
    else if (uVar15 == 2) {
      uVar15 = (uint)(ushort)*puVar7;
    }
    else if (uVar15 == 3) {
      uVar15 = (uint)(uint3)*puVar7;
    }
    else {
      uVar15 = *puVar7;
    }
    uVar13 = uVar15 | bVar9 - 2 << (ulong)((uVar20 & 3) << 3);
    if (3 < uVar20) {
      uVar13 = uVar15;
    }
    uVar13 = uVar13 + 2;
  }
LAB_10078f950:
  if (uVar13 == 1) {
    uVar6 = *(undefined8 *)puVar7;
    _swift_errorRetain(uVar6);
    *puVar12 = uVar6;
    uVar8 = 1;
  }
  else {
    puVar5 = puVar7;
    (**(code **)(lVar21 + 0x30))(puVar7,1,lVar4);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar21 + 0x10))(puVar12,puVar7,lVar4);
      (**(code **)(lVar21 + 0x38))(puVar12,0,1,lVar4);
    }
    else {
      _memcpy(puVar12,puVar7,uVar17);
    }
    uVar8 = 0;
  }
  *(undefined1 *)((long)puVar12 + uVar3) = uVar8;
  bVar9 = 2;
LAB_10078f9d4:
  *(byte *)((long)param_1 + uVar1) = bVar9;
  return param_1;
}



/* Address: 0x10078f9fc | FUN_10078f9fc */

undefined8 * FUN_10078f9fc(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar15 = *(long *)(param_3 + 0x18);
  lVar20 = *(long *)(lVar15 + -8);
  lVar19 = *(long *)(lVar20 + 0x40);
  uVar1 = (lVar19 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar5 + -8);
  uVar13 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8;
  uVar9 = uVar13 | 7;
  uVar14 = *(ulong *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    uVar14 = uVar14 + 1;
  }
  uVar3 = uVar14;
  if (uVar14 < 9) {
    uVar3 = 8;
  }
  lVar2 = uVar3 + (uVar13 + 0xf & (uVar9 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar12 = (uint)bVar4;
  if (4 < bVar4) {
    uVar17 = (uint)uVar1;
    uVar10 = 4;
    if (uVar17 < 4) {
      uVar10 = uVar17;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto joined_r0x00010078fb24;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar17 < 4) {
      uVar12 = (uVar12 | bVar4 - 5 << (ulong)((uVar17 & 3) << 3)) + 5;
    }
    else {
      uVar12 = uVar12 + 5;
    }
  }
joined_r0x00010078fb24:
  if ((int)uVar12 < 2) {
    if (uVar12 == 0) {
      (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar15);
      puVar6 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xfffffffffffffff8);
      puVar11 = (undefined8 *)((ulong)((long)param_2 + lVar19 + 7) & 0xfffffffffffffff8);
      *puVar6 = *puVar11;
      puVar6[1] = puVar11[1];
      puVar6[2] = puVar11[2];
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    if (uVar12 != 1) {
LAB_10078fc60:
      puVar6 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar6;
    }
    uVar21 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar21;
    uVar8 = 1;
    goto LAB_10078fd3c;
  }
  if (uVar12 != 2) {
    if (uVar12 == 3) {
      *param_1 = *(undefined8 *)param_2;
      uVar8 = 3;
    }
    else {
      if (uVar12 != 4) goto LAB_10078fc60;
      uVar21 = *(undefined8 *)param_2;
      uVar23 = *(undefined8 *)(param_2 + 6);
      uVar22 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar21;
      param_1[3] = uVar23;
      param_1[2] = uVar22;
      uVar8 = 4;
    }
    goto LAB_10078fd3c;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar6 = (undefined8 *)((long)param_1 + uVar9 + 8 & ~uVar9);
  puVar16 = (uint *)((ulong)((long)param_2 + uVar9 + 8) & ~uVar9);
  bVar4 = *(byte *)((long)puVar16 + uVar3);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar17 = (uint)uVar3;
    uVar10 = 4;
    if (uVar17 < 4) {
      uVar10 = uVar17;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_10078fcbc;
      uVar10 = (uint)(byte)*puVar16;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar16;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar16;
    }
    else {
      uVar10 = *puVar16;
    }
    uVar12 = uVar10 | bVar4 - 2 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar12 = uVar10;
    }
    uVar12 = uVar12 + 2;
  }
LAB_10078fcbc:
  if (uVar12 == 1) {
    *puVar6 = *(undefined8 *)puVar16;
    uVar8 = 1;
  }
  else {
    puVar7 = puVar16;
    (**(code **)(lVar18 + 0x30))(puVar16,1);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar18 + 0x20))(puVar6,puVar16,lVar5);
      (**(code **)(lVar18 + 0x38))(puVar6,0,1,lVar5);
    }
    else {
      _memcpy(puVar6,puVar16,uVar14);
    }
    uVar8 = 0;
  }
  *(undefined1 *)((long)puVar6 + uVar3) = uVar8;
  uVar8 = 2;
LAB_10078fd3c:
  *(undefined1 *)((long)param_1 + uVar1) = uVar8;
  return param_1;
}



/* Address: 0x10078fd60 | FUN_10078fd60 */

uint * FUN_10078fd60(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar18 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar18 + -8);
  lVar21 = *(long *)(lVar9 + 0x40);
  uVar1 = (lVar21 + 7U & 0xfffffffffffffff8) + 0x18;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar20 = *(long *)(lVar4 + -8);
  uVar10 = (ulong)*(uint *)(lVar20 + 0x50) & 0xf8;
  uVar17 = uVar10 | 7;
  uVar16 = *(ulong *)(lVar20 + 0x40);
  if (*(int *)(lVar20 + 0x54) == 0) {
    uVar16 = uVar16 + 1;
  }
  uVar3 = uVar16;
  if (uVar16 < 9) {
    uVar3 = 8;
  }
  lVar2 = uVar3 + (uVar10 + 0xf & (uVar17 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar8 = *(byte *)((long)param_1 + uVar1);
  uVar12 = (uint)bVar8;
  uVar14 = (uint)uVar1;
  if (4 < bVar8) {
    uVar19 = 4;
    if (uVar14 < 4) {
      uVar19 = uVar14;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10078feb8;
      uVar12 = (uint)(byte)*param_1;
    }
    else if (uVar19 == 2) {
      uVar12 = (uint)(ushort)*param_1;
    }
    else if (uVar19 == 3) {
      uVar12 = (uint)(uint3)*param_1;
    }
    else {
      uVar12 = *param_1;
    }
    if (uVar14 < 4) {
      uVar12 = (uVar12 | bVar8 - 5 << (ulong)((uVar14 & 3) << 3)) + 5;
    }
    else {
      uVar12 = uVar12 + 5;
    }
  }
LAB_10078feb8:
  uVar10 = ~uVar17;
  uVar19 = (uint)uVar3;
  if ((int)uVar12 < 2) {
    if (uVar12 == 0) {
      (**(code **)(lVar9 + 8))(param_1,lVar18);
      _swift_release(*(undefined8 *)(((ulong)((long)param_1 + lVar21 + 7) & 0xfffffffffffffff8) + 8)
                    );
    }
    else if (uVar12 == 1) {
      _swift_release(*(undefined8 *)param_1);
    }
  }
  else if (uVar12 == 2) {
    puVar6 = (uint *)((ulong)((long)param_1 + uVar17 + 8) & uVar10);
    bVar8 = *(byte *)((long)puVar6 + uVar3);
    uVar12 = (uint)bVar8;
    if (1 < bVar8) {
      uVar13 = 4;
      if (uVar19 < 4) {
        uVar13 = uVar19;
      }
      if ((int)uVar13 < 2) {
        if (uVar13 == 0) goto LAB_10078ffb8;
        uVar13 = (uint)(byte)*puVar6;
      }
      else if (uVar13 == 2) {
        uVar13 = (uint)(ushort)*puVar6;
      }
      else if (uVar13 == 3) {
        uVar13 = (uint)(uint3)*puVar6;
      }
      else {
        uVar13 = *puVar6;
      }
      uVar12 = uVar13 | bVar8 - 2 << (ulong)((uVar19 & 3) << 3);
      if (3 < uVar19) {
        uVar12 = uVar13;
      }
      uVar12 = uVar12 + 2;
    }
LAB_10078ffb8:
    if (uVar12 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar6);
    }
    else {
      puVar5 = puVar6;
      (**(code **)(lVar20 + 0x30))(puVar6,1,lVar4);
      if ((int)puVar5 == 0) {
        (**(code **)(lVar20 + 8))(puVar6,lVar4);
      }
    }
  }
  else if (uVar12 == 4) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar8 = *(byte *)((long)param_2 + uVar1);
  uVar12 = (uint)bVar8;
  if (4 < bVar8) {
    uVar13 = 4;
    if (uVar14 < 4) {
      uVar13 = uVar14;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto joined_r0x000100790064;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    if (uVar14 < 4) {
      uVar12 = (uVar12 | bVar8 - 5 << (ulong)((uVar14 & 3) << 3)) + 5;
    }
    else {
      uVar12 = uVar12 + 5;
    }
  }
joined_r0x000100790064:
  if ((int)uVar12 < 2) {
    if (uVar12 == 0) {
      (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar18);
      puVar11 = (undefined8 *)((ulong)((long)param_1 + lVar21 + 7) & 0xfffffffffffffff8);
      puVar15 = (undefined8 *)((ulong)((long)param_2 + lVar21 + 7) & 0xfffffffffffffff8);
      *puVar11 = *puVar15;
      puVar11[1] = puVar15[1];
      puVar11[2] = puVar15[2];
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    if (uVar12 != 1) {
LAB_1007901a8:
      puVar6 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar6;
    }
    uVar22 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar22;
    bVar8 = 1;
    goto LAB_10079028c;
  }
  if (uVar12 != 2) {
    if (uVar12 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar8 = 3;
    }
    else {
      if (uVar12 != 4) goto LAB_1007901a8;
      uVar22 = *(undefined8 *)param_2;
      uVar24 = *(undefined8 *)(param_2 + 6);
      uVar23 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar22;
      *(undefined8 *)(param_1 + 6) = uVar24;
      *(undefined8 *)(param_1 + 4) = uVar23;
      bVar8 = 4;
    }
    goto LAB_10079028c;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar11 = (undefined8 *)((ulong)((long)param_1 + uVar17 + 8) & uVar10);
  puVar6 = (uint *)((ulong)((long)param_2 + uVar17 + 8) & uVar10);
  bVar8 = *(byte *)((long)puVar6 + uVar3);
  uVar12 = (uint)bVar8;
  if (1 < bVar8) {
    uVar14 = 4;
    if (uVar19 < 4) {
      uVar14 = uVar19;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_100790210;
      uVar14 = (uint)(byte)*puVar6;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)(ushort)*puVar6;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)(uint3)*puVar6;
    }
    else {
      uVar14 = *puVar6;
    }
    uVar12 = uVar14 | bVar8 - 2 << (ulong)((uVar19 & 3) << 3);
    if (3 < uVar19) {
      uVar12 = uVar14;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100790210:
  if (uVar12 == 1) {
    *puVar11 = *(undefined8 *)puVar6;
    uVar7 = 1;
  }
  else {
    puVar5 = puVar6;
    (**(code **)(lVar20 + 0x30))(puVar6,1,lVar4);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar20 + 0x20))(puVar11,puVar6,lVar4);
      (**(code **)(lVar20 + 0x38))(puVar11,0,1,lVar4);
    }
    else {
      _memcpy(puVar11,puVar6,uVar16);
    }
    uVar7 = 0;
  }
  *(undefined1 *)((long)puVar11 + uVar3) = uVar7;
  bVar8 = 2;
LAB_10079028c:
  *(byte *)((long)param_1 + uVar1) = bVar8;
  return param_1;
}



/* Address: 0x1007902b4 | FUN_1007902b4 */

int FUN_1007902b4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          0x18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar5 + 0x50) & 0xf8;
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar5 = uVar7 + ((ulong)(uVar2 + 0xf & (uVar2 ^ 0xffffffff)) & 0x1f8);
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfb) goto LAB_1007903f0;
  uVar7 = uVar1 + 1;
  uVar6 = (uint)uVar7;
  uVar2 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfa >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1007903f0;
      goto LAB_10079037c;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10079037c:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar2 = 4;
      if (uVar6 < 4) {
        uVar2 = uVar6;
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
    return ((uint)uVar7 | uVar3) + 0xfb;
  }
LAB_1007903f0:
  iVar4 = 0;
  if (5 < *(byte *)((long)param_1 + uVar1)) {
    iVar4 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar4;
}



/* Address: 0x100790458 | FUN_100790458 */

void FUN_100790458(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          0x18;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar5 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8);
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  sVar2 = uVar1 + 1;
  uVar7 = (uint)sVar2;
  if (param_3 < 0xfb) {
    bVar9 = 0;
  }
  else if (uVar7 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfa >> (ulong)(uVar7 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar3) {
      bVar9 = 4;
    }
    if (uVar3 < 0x100) {
      bVar9 = 1 < uVar3;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfb) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfb;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar7 == 2) {
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
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar8;
    }
  }
  return;
}



/* Address: 0x10079067c | FUN_10079067c */

uint FUN_10079067c(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          0x18;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar4 + 0x50) & 0xf8;
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar4 = uVar6 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
  if (uVar1 <= lVar4 + 1U) {
    uVar1 = lVar4 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar3 = (uint)bVar2;
  if (4 < bVar2) {
    uVar5 = (uint)uVar1;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) {
        return uVar3;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar3 = uVar7 | bVar2 - 5 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar7;
    }
    uVar3 = uVar3 + 5;
  }
  return uVar3;
}



/* Address: 0x10079079c | FUN_10079079c */

void FUN_10079079c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          0x18;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar2 = *(long *)(lVar2 + -8);
  uVar3 = *(uint *)(lVar2 + 0x50) & 0xf8;
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (*(int *)(lVar2 + 0x54) == 0) {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar2 = uVar4 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
  if (uVar1 <= lVar2 + 1U) {
    uVar1 = lVar2 + 1;
  }
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  if (param_2 < 5) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
  }
  else {
    param_2 = param_2 - 5;
    uVar3 = (uint)uVar1;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x05';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar1) = 5;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,uVar1);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007908f0 | FUN_1007908f0 */

void FUN_1007908f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *local_30;
  long local_28;
  
  puVar2 = &local_50;
  local_30 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  local_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = 0x13f;
  FUN_10078a6b4();
  if (puVar2 < (undefined1 *)0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x70);
  }
  return;
}



/* Address: 0x100790978 | FUN_100790978 */

void FUN_100790978(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1007909e8,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1007909e8 | FUN_1007909e8 */

void FUN_1007909e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  pcVar2 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  lVar3 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar3,1);
  puVar4 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  FUN_100004520(lVar3,uVar1,puVar4,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  (*pcVar2)();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100790a78 | FUN_100790a78 */

undefined8 FUN_100790a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100790da4(param_1,param_2,param_3);
  return unaff_x20;
}


