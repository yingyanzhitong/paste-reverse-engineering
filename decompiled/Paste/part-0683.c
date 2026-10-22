/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10074acfc | FUN_10074acfc */

int FUN_10074acfc(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    lVar1 = (uVar5 & 0xfffffffffffffff8) + 0x11;
    uVar6 = (uint)lVar1;
    uVar4 = 2;
    uVar7 = uVar4;
    if (uVar6 < 4) {
      uVar7 = (param_2 + 2 >> 8) + 1;
    }
    if (0xffff < uVar7) {
      uVar4 = 4;
    }
    if (uVar7 < 0x100) {
      uVar4 = 1;
    }
    uVar2 = 0;
    if (1 < uVar7) {
      uVar2 = uVar4;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar4 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_10074ad88;
    }
    else if (uVar2 == 2) {
      uVar4 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_10074ad88:
        uVar4 = uVar4 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar4 = 0;
        }
        return (uVar7 | uVar4) + 0xfe;
      }
    }
    else {
      uVar4 = *(uint *)((long)param_1 + lVar1);
      if (uVar4 != 0) goto LAB_10074ad88;
    }
  }
  uVar4 = (uint)*(byte *)(((ulong)((long)param_1 + uVar5 + 8) & 0xfffffffffffffff8) + 8);
  iVar3 = 0;
  if (2 < uVar4) {
    iVar3 = (uVar4 ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x10074ade0 | FUN_10074ade0 */

void FUN_10074ade0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  sVar1 = (uVar5 & 0xfffffffffffffff8) + 0x11;
  if (param_3 < 0xfe) {
    uVar3 = 0;
  }
  else {
    uVar6 = 2;
    uVar2 = uVar6;
    if ((uint)sVar1 < 4) {
      uVar2 = (param_3 + 2 >> 8) + 1;
    }
    if (0xffff < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0x100) {
      uVar6 = 1;
    }
    uVar3 = 0;
    if (1 < uVar2) {
      uVar3 = uVar6;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar3 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)(((ulong)((long)param_1 + uVar5 + 8) & 0xfffffffffffffff8) + 8) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,sVar1);
    iVar4 = 1;
    if ((uint)sVar1 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
      }
    }
    else if (uVar3 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar4;
    }
  }
  return;
}



/* Address: 0x10074af20 | FUN_10074af20 */

void FUN_10074af20(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074af2c | FUN_10074af2c */

void FUN_10074af2c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074af38 | FUN_10074af38 */

void FUN_10074af38(long param_1)

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
    puStack_30 = &DAT_100c76020;
    local_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}



/* Address: 0x10074afb8 | FUN_10074afb8 */

long * FUN_10074afb8(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar4 + 0x40);
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar3 + 1) {
    uVar5 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
    goto LAB_10074b01c;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar3;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10074b0a8;
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
LAB_10074b0a8:
  if (uVar5 == 2) {
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar4 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
      plVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return plVar2;
    }
    lVar8 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar8;
    lVar4 = *(long *)(param_2 + 2);
    param_1[2] = *(long *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar3) = 1;
    _swift_retain(lVar8);
  }
LAB_10074b01c:
  _swift_retain(lVar4);
  return param_1;
}



/* Address: 0x10074b124 | thunk_FUN_10074b128 */

void thunk_FUN_10074b128(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
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
      if (uVar6 == 0) goto LAB_10074b1b4;
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
LAB_10074b1b4:
  if (uVar5 == 2) {
    _swift_release(*(undefined8 *)param_1);
    return;
  }
  if (uVar5 != 1) {
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010074b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))();
      return;
    }
    return;
  }
  _swift_release(*(undefined8 *)param_1);
  _swift_release(*(undefined8 *)(param_1 + 2));
  return;
}



/* Address: 0x10074b128 | FUN_10074b128 */

void FUN_10074b128(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
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
      if (uVar6 == 0) goto LAB_10074b1b4;
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
LAB_10074b1b4:
  if (uVar5 == 2) {
    _swift_release(*(undefined8 *)param_1);
    return;
  }
  if (uVar5 != 1) {
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010074b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))();
      return;
    }
    return;
  }
  _swift_release(*(undefined8 *)param_1);
  _swift_release(*(undefined8 *)(param_1 + 2));
  return;
}



/* Address: 0x10074b208 | FUN_10074b208 */

undefined8 * FUN_10074b208(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
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
      if (uVar7 == 0) goto LAB_10074b2a8;
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
LAB_10074b2a8:
  if (uVar6 == 2) {
    uVar2 = *(undefined8 *)param_2;
    *param_1 = uVar2;
    *(undefined1 *)((long)param_1 + uVar5) = 2;
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 == 0) {
        (**(code **)(lVar4 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar3 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar3;
    }
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    uVar2 = *(undefined8 *)(param_2 + 2);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar5) = 1;
    _swift_retain(uVar9);
  }
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10074b338 | FUN_10074b338 */

uint * FUN_10074b338(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 0x19) {
    uVar3 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar8 = (uint)uVar3;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074b3e8;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074b3e8:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_10074b424:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_10074b424;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar9 + 8))(param_1,lVar6);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10074b49c;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10074b49c:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar7;
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar6);
        *(byte *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
      puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar2;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(byte *)((long)param_1 + uVar3) = 1;
    _swift_retain();
  }
  _swift_retain(uVar7);
  return param_1;
}



/* Address: 0x10074b544 | FUN_10074b544 */

undefined8 * FUN_10074b544(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
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
      if (uVar7 == 0) goto LAB_10074b5dc;
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
LAB_10074b5dc:
  if (uVar6 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 == 0) {
        (**(code **)(lVar4 + 0x20))();
        *(undefined1 *)((long)param_1 + uVar5) = 0;
        return param_1;
      }
      puVar2 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar2;
    }
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar5) = uVar3;
  return param_1;
}



/* Address: 0x10074b64c | FUN_10074b64c */

uint * FUN_10074b64c(uint *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar4 = *(ulong *)(lVar9 + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar3 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar3;
  uVar8 = (uint)uVar4;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10074b6f8;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_10074b6f8:
  if (uVar5 == 2) {
    uVar1 = *(undefined8 *)param_1;
LAB_10074b744:
    _swift_release(uVar1);
  }
  else {
    if (uVar5 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar1 = *(undefined8 *)(param_1 + 2);
      goto LAB_10074b744;
    }
    if (uVar5 == 0) {
      (**(code **)(lVar9 + 8))(param_1,lVar7);
    }
  }
  bVar3 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10074b7c0;
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
    uVar5 = uVar6 | bVar3 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_10074b7c0:
  if (uVar5 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar7);
        *(byte *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    bVar3 = 1;
  }
  *(byte *)((long)param_1 + uVar4) = bVar3;
  return param_1;
}



/* Address: 0x10074b84c | FUN_10074b84c */

int FUN_10074b84c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x19) {
    uVar5 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_10074b8f4;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_10074b8f4;
      goto LAB_10074b880;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10074b880:
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
    return ((uint)uVar6 | uVar1) + 0xfd;
  }
LAB_10074b8f4:
  iVar2 = 0;
  if (3 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x10074b950 | FUN_10074b950 */

void FUN_10074b950(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  sVar1 = uVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xfd) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar5 << 3 & 0x1f)) +
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
  if (param_2 < 0xfd) {
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
    param_2 = param_2 - 0xfd;
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



/* Address: 0x10074baf4 | FUN_10074baf4 */

uint FUN_10074baf4(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x19) {
    uVar4 = 0x18;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
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
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Address: 0x10074bb88 | FUN_10074bb88 */

void FUN_10074bb88(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar3 < 0x19) {
    sVar3 = 0x18;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x03';
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
      *(undefined1 *)((long)param_1 + sVar3) = 3;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10074bc50 | FUN_10074bc50 */

void FUN_10074bc50(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uVar2 = 0;
  FUN_10074af2c(0,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  lVar3 = 0;
  FUN_10074af20(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = param_4;
  return;
}



/* Address: 0x10074bce4 | FUN_10074bce4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10074bce4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Result RVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  tuple2_conflict3 tVar16;
  long alStack_70 [2];
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0;
  FUN_10074af2c(0,lVar1,uVar9);
  lVar15 = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = -uVar12;
  puVar14 = (undefined8 *)((long)alStack_70 + lVar2);
  lVar13 = (long)puVar14 - uVar12;
  (**(code **)(lVar15 + 0x10))(lVar13);
  lVar7 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar6);
  iVar5 = (int)lVar7;
  if (iVar5 == 0) {
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar9,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1007c3a74(0xff,uVar8);
    _swift_retain(param_1);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar4 = Swift::Result::typeMetadataAccessor();
    tVar16 = Swift::Array<undefined>::_allocateUninitialized(0,RVar4.value);
    uVar9 = 0;
    alStack_70[1] = tVar16._0_8_;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar10 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar9);
    puVar11 = alStack_70 + 1;
    FUN_10074d4f0(puVar11,RVar4.value,uVar9,puVar10);
    _swift_bridgeObjectRelease(tVar16._0_8_);
    *puVar14 = param_1;
    *(undefined8 **)((long)alStack_70 + lVar2 + 8U) = puVar11;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar2) = 0;
    _swift_storeEnumTagMultiPayload(puVar14,lVar6,1);
    (**(code **)(lVar15 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar13,lVar1);
    return;
  }
  if (iVar5 != 1) {
    if (iVar5 == 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10074be9c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10074bea4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10074bea0);
  (*pcVar3)();
}



/* Address: 0x10074bea4 | FUN_10074bea4 */

void FUN_10074bea4(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  Result RVar3;
  Optional OVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  UnsafeContinuation UVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long *plVar17;
  long lVar18;
  long local_e0 [6];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long *local_80;
  long local_70;
  long local_68;
  
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0xff;
  local_90 = param_2;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar3 = Swift::Result::typeMetadataAccessor();
  local_a0 = CONCAT71(extraout_var,RVar3.value);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var_00,OVar4.value);
  lVar18 = (long)local_e0 - (*(long *)(*(long *)(local_88 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  FUN_1007c3a74(0xff,lVar7);
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var_01,RVar3.value);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_e0[4] = CONCAT71(extraout_var_02,OVar4.value);
  local_e0[3] = *(long *)(local_e0[4] + -8);
  lVar15 = lVar18 - (*(long *)(local_e0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = *(long *)(lVar7 + -8);
  local_e0[5] = lVar15 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = *(long *)(lVar12 + -8);
  lVar13 = local_e0[5] - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_b0 = lVar13;
  FUN_10074af2c(0,uVar10,uVar1);
  lVar16 = *(long *)(lVar8 + -8);
  plVar17 = (long *)(lVar13 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar16 + 0x10))(plVar17);
  plVar9 = plVar17;
  _swift_getEnumCaseMultiPayload(plVar17,lVar8);
  iVar6 = (int)plVar9;
  if (iVar6 < 2) {
    if (iVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10074c448);
      (*pcVar14)();
    }
    local_e0[1] = plVar17[1];
    local_e0[0] = *plVar17;
    lVar8 = plVar17[1];
    lVar13 = plVar17[2];
    local_68 = lVar8;
    if (lVar13 != 0) {
      uVar10 = 0;
      FUN_1006883a0(0,lVar12);
      _swift_getWitnessTable(0x100c6d780,uVar10);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10074c444);
        (*pcVar14)();
      }
      (**(code **)(lVar16 + 8))();
      unaff_x20[1] = local_e0[1];
      *unaff_x20 = local_e0[0];
      unaff_x20[2] = 0;
      _swift_storeEnumTagMultiPayload();
      lVar8 = local_88;
      uVar10 = 0xff;
      FUN_1007c3a74(0xff,local_88);
      UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar10,"continuation result ",0);
      plVar9 = local_80;
      iVar6 = *(int *)(lVar12 + 0x30);
      *local_80 = lVar13;
      (**(code **)(local_98 + 0x10))(lVar18,local_90,lVar7);
      lVar7 = local_a0;
      _swift_storeEnumTagMultiPayload(lVar18,local_a0,0);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar18,0,1,lVar7);
      FUN_1005cfcb0((long)plVar9 + (long)iVar6,lVar18,lVar8);
      pcVar14 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
      uVar10 = 0;
      goto LAB_10074c41c;
    }
    pcVar14 = *(code **)(lVar16 + 8);
    (*pcVar14)();
    _swift_storeEnumTagMultiPayload();
    plVar9 = local_80;
    plVar17 = (long *)((long)unaff_x20 + (long)*(int *)(param_3 + 0x24));
    lVar13 = *plVar17;
    cVar2 = (char)plVar17[1];
    if (cVar2 == '\0') {
      FUN_1006035b0(&local_70,FUN_1006035a4,0,lVar8,&DAT_100ef5140,lVar12,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      plVar9 = local_80;
      if (lVar13 <= local_70) {
        FUN_1006883a0(0,lVar12);
        FUN_100681318(lVar15);
        (**(code **)(local_e0[3] + 8))(lVar15,local_e0[4]);
      }
LAB_10074c324:
      lVar8 = local_e0[5];
      (**(code **)(local_98 + 0x10))(local_e0[5],local_90,lVar7);
      lVar13 = local_b0;
      FUN_1005cfcb0(local_b0,lVar8,lVar7);
      _swift_storeEnumTagMultiPayload(lVar13,lVar12,0);
      uVar10 = 0;
      FUN_1006883a0(0,lVar12);
      FUN_100679d80(lVar13,uVar10);
      (**(code **)(local_a8 + 8))(lVar13,lVar12);
    }
    else if ((cVar2 != '\x01') ||
            (FUN_1006035b0(&local_70,FUN_1006035a4,0,lVar8,&DAT_100ef5140,lVar12,
                           PTR___type_metadata_for_Swift_Never_100eadc38,
                           PTR___type_metadata_for_Swift_Int_100eac6f8,
                           PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ), local_70 < lVar13)) goto LAB_10074c324;
    (*pcVar14)();
    *unaff_x20 = local_e0[0];
    unaff_x20[1] = local_68;
    unaff_x20[2] = 0;
    _swift_storeEnumTagMultiPayload();
    uVar10 = 0xff;
    FUN_1007c3a74(0xff,local_88);
    UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar12 = 0;
    _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar10,"continuation result ",0);
    pcVar14 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  }
  else {
    if (iVar6 != 2) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10074c44c);
      (*pcVar14)();
    }
    (**(code **)(lVar16 + 8))(plVar17,lVar8);
    uVar10 = 0xff;
    FUN_1007c3a74(0xff,local_88);
    UVar11 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar12 = 0;
    _swift_getTupleTypeMetadata2(0,UVar11.unknown,uVar10,"continuation result ",0);
    pcVar14 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
    plVar9 = local_80;
  }
  uVar10 = 1;
LAB_10074c41c:
  (*pcVar14)(plVar9,uVar10,1,lVar12);
  return;
}



/* Address: 0x10074c44c | FUN_10074c44c */

/* WARNING: Type propagation algorithm not settling */

long FUN_10074c44c(long param_1,long param_2)

{
  code *pcVar1;
  Result RVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *unaff_x20;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  tuple2_conflict3 tVar19;
  long alStack_70 [2];
  long lVar6;
  
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,uVar12,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1007c3a74(0xff,uVar5);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar2.value);
  lVar18 = *(long *)(lVar6 + -8);
  plVar11 = (long *)((long)alStack_70 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_10074af2c(0,uVar12,uVar9);
  lVar17 = *(long *)(lVar7 + -8);
  uVar13 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar14 = (long *)((long)plVar11 - uVar13);
  puVar15 = (undefined8 *)((long)plVar14 - uVar13);
  (**(code **)(lVar17 + 0x10))(puVar15);
  puVar8 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar7);
  iVar4 = (int)puVar8;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074c6f0);
      (*pcVar1)();
    }
    uVar12 = puVar15[1];
    lVar16 = puVar15[2];
    _swift_release(*puVar15);
    alStack_70[1] = uVar12;
    if (lVar16 != 0) {
      uVar9 = 0;
      FUN_1006883a0(0,lVar6);
      _swift_getWitnessTable(0x100c6d780,uVar9);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar3) {
        tVar19 = Swift::Array<undefined>::_allocateUninitialized(0,lVar6);
        uVar9 = 0;
        alStack_70[1] = tVar19._0_8_;
        Swift::Array<undefined>::typeMetadataAccessor();
        puVar10 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar9);
        plVar11 = alStack_70 + 1;
        FUN_10074d4f0(plVar11,lVar6,uVar9,puVar10);
        _swift_release(uVar12);
        _swift_bridgeObjectRelease(tVar19._0_8_);
        *plVar14 = (long)plVar11;
        _swift_storeEnumTagMultiPayload(plVar14,lVar7,2);
        (**(code **)(lVar17 + 0x28))();
        return lVar16;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074c6ec);
      (*pcVar1)();
    }
    if (param_1 != 0) {
      *plVar11 = param_1;
      _swift_storeEnumTagMultiPayload(plVar11,lVar6,1);
      _swift_errorRetain(param_1);
      uVar12 = 0;
      FUN_1006883a0(0,lVar6);
      FUN_100679d80(plVar11,uVar12);
      (**(code **)(lVar18 + 8))(plVar11,lVar6);
    }
    lVar6 = alStack_70[1];
    (**(code **)(lVar17 + 8))();
    *unaff_x20 = lVar6;
    _swift_storeEnumTagMultiPayload();
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074c6f4);
      (*pcVar1)();
    }
    (**(code **)(lVar17 + 8))(puVar15,lVar7);
  }
  return 1;
}



/* Address: 0x10074c6f4 | FUN_10074c6f4 */

void FUN_10074c6f4(long param_1,long param_2)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar9;
  undefined8 *puVar10;
  undefined7 extraout_var_01;
  undefined8 uVar11;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  ulong uVar12;
  long lVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_e0 [6];
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  long lVar8;
  
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  local_e0[3] = *(undefined8 *)(param_2 + 0x18);
  lVar16 = *(long *)(param_2 + 0x10);
  uVar6 = 0xff;
  local_e0[2] = lVar16;
  _swift_getAssociatedTypeWitness
            (0xff,uVar14,lVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_a8 = uVar6;
  FUN_1007c3a74(0xff);
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_b0 = puVar7;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar12 = *(long *)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0;
  lVar18 = (long)local_e0 - uVar12;
  lVar17 = lVar18 - uVar12;
  local_e0[5] = *(long *)(lVar8 + -8);
  uVar12 = *(long *)(local_e0[5] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar17 - uVar12;
  lVar19 = lVar13 - uVar12;
  lVar9 = 0;
  local_a0 = lVar16;
  local_98 = uVar14;
  FUN_10074af2c(0,lVar16,uVar14);
  lVar16 = *(long *)(lVar9 + -8);
  puVar15 = (undefined8 *)(lVar19 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar16 + 0x10))(puVar15);
  puVar10 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar9);
  lVar9 = local_a0;
  iVar5 = (int)puVar10;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      (**(code **)(*(long *)(local_a0 + -8) + 0x20))(param_1,puVar15,local_a0);
      uVar14 = 0;
      FUN_10074d5f8(0,lVar9,local_98);
      uVar6 = 0;
      goto LAB_10074cc04;
    }
    local_e0[0] = param_1;
    uVar6 = *puVar15;
    uVar14 = puVar15[1];
    local_e0[1] = puVar15[2];
    uVar11 = 0;
    local_90[0] = uVar14;
    FUN_1006883a0(0,lVar8);
    _swift_getWitnessTable(0x100c6d780,uVar11);
    bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar4) {
      _swift_release(uVar6);
      _swift_release(uVar14);
      if (local_e0[1] != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10074cc2c);
        (*pcVar1)();
      }
      uVar14 = 0;
      FUN_10074d5f8(0,local_a0,local_98);
      uVar6 = 2;
      param_1 = local_e0[0];
      goto LAB_10074cc04;
    }
    local_68 = uVar14;
    if (local_e0[1] != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074cc30);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(lVar16 + 8);
    (*pcVar1)();
    _swift_storeEnumTagMultiPayload();
    FUN_100681318(lVar17,uVar11);
    lVar9 = local_e0[5];
    lVar13 = lVar17;
    (**(code **)(local_e0[5] + 0x30))(lVar17,1,lVar8);
    if ((int)lVar13 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074cc3c);
      (*pcVar1)();
    }
    (**(code **)(lVar9 + 0x20))(lVar19,lVar17,lVar8);
    (*pcVar1)();
    uVar14 = local_68;
    *unaff_x20 = uVar6;
    unaff_x20[1] = local_68;
    unaff_x20[2] = 0;
    _swift_storeEnumTagMultiPayload();
    uStack_78 = local_e0[3];
    local_80 = local_e0[2];
    _swift_retain(uVar6);
    _swift_retain(uVar14);
    param_1 = local_e0[0];
    FUN_10062f364(local_e0[0],thunk_FUN_10074531c,local_90,lVar8,local_a8);
    _swift_release(uVar6);
    (**(code **)(lVar9 + 8))(lVar19,lVar8);
    _swift_release(uVar14);
    RVar2 = Swift::Result::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_02,RVar2.value) + -8) + 0x38))
              (param_1,0,1,CONCAT71(extraout_var_02,RVar2.value));
    uVar14 = 0;
    FUN_10074d5f8(0,local_a0,local_98);
  }
  else {
    if (iVar5 != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10074cc34);
      (*pcVar1)();
    }
    uVar14 = *puVar15;
    uVar6 = 0;
    local_90[0] = uVar14;
    FUN_1006883a0(0,lVar8);
    _swift_getWitnessTable(0x100c6d780,uVar6);
    bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar4) {
      _swift_release(uVar14);
      RVar2 = Swift::Result::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_01,RVar2.value) + -8) + 0x38))
                (param_1,1,1,CONCAT71(extraout_var_01,RVar2.value));
      lVar16 = local_a0;
      uVar6 = local_98;
    }
    else {
      pcVar1 = *(code **)(lVar16 + 8);
      local_68 = uVar14;
      (*pcVar1)();
      _swift_storeEnumTagMultiPayload();
      FUN_100681318(lVar18,uVar6);
      lVar9 = local_e0[5];
      lVar16 = lVar18;
      (**(code **)(local_e0[5] + 0x30))(lVar18,1,lVar8);
      if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10074cc38);
        (*pcVar1)();
      }
      (**(code **)(lVar9 + 0x20))(lVar13,lVar18,lVar8);
      (*pcVar1)();
      uVar14 = local_68;
      *unaff_x20 = local_68;
      _swift_storeEnumTagMultiPayload();
      uVar6 = local_98;
      lVar16 = local_a0;
      local_80 = local_a0;
      uStack_78 = local_98;
      _swift_retain(uVar14);
      FUN_10062f364(param_1,thunk_FUN_10074531c,local_90,lVar8,local_a8);
      (**(code **)(lVar9 + 8))(lVar13,lVar8);
      _swift_release(uVar14);
      RVar2 = Swift::Result::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_03,RVar2.value) + -8) + 0x38))
                (param_1,0,1,CONCAT71(extraout_var_03,RVar2.value));
    }
    uVar14 = 0;
    FUN_10074d5f8(0,lVar16,uVar6);
  }
  uVar6 = 1;
LAB_10074cc04:
  _swift_storeEnumTagMultiPayload(param_1,uVar14,uVar6);
  return;
}



/* Address: 0x10074cc3c | FUN_10074cc3c */

void FUN_10074cc3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  Optional OVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar8;
  undefined8 *puVar9;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_e0 [6];
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  long lVar7;
  
  uVar13 = *(undefined8 *)(param_3 + 0x18);
  local_e0[1] = *(undefined8 *)(param_3 + 0x18);
  lVar19 = *(long *)(param_3 + 0x10);
  uVar5 = 0xff;
  local_e0[0] = lVar19;
  local_e0[3] = param_2;
  local_98 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar13,lVar19,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_a0 = uVar5;
  FUN_1007c3a74(0xff);
  puVar6 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_a8 = puVar6;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar10 = *(long *)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0;
  lVar16 = (long)local_e0 - uVar10;
  lVar15 = lVar16 - uVar10;
  local_b0 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar15 - uVar10;
  lVar18 = lVar12 - uVar10;
  lVar8 = 0;
  local_e0[4] = uVar13;
  FUN_10074af2c(0,lVar19,uVar13);
  lVar17 = *(long *)(lVar8 + -8);
  puVar14 = (undefined8 *)(lVar18 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar17 + 0x10))(puVar14);
  puVar9 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar8);
  iVar4 = (int)puVar9;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d150);
      (*pcVar11)();
    }
    local_e0[5] = puVar14[1];
    local_e0[4] = *puVar14;
    uVar5 = puVar14[1];
    lVar8 = puVar14[2];
    uVar13 = 0;
    local_90[0] = uVar5;
    FUN_1006883a0(0,lVar7);
    _swift_getWitnessTable(0x100c6d780,uVar13);
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar3) {
      if (lVar8 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d148);
        (*pcVar11)();
      }
      (**(code **)(lVar17 + 8))();
      unaff_x20[1] = local_e0[5];
      *unaff_x20 = local_e0[4];
      unaff_x20[2] = local_e0[3];
      _swift_storeEnumTagMultiPayload();
      Swift::Result::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar7 = CONCAT71(extraout_var_01,OVar2.value);
      pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar13 = 1;
      uVar5 = local_98;
      goto LAB_10074d11c;
    }
    local_68 = uVar5;
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d14c);
      (*pcVar11)();
    }
    pcVar11 = *(code **)(lVar17 + 8);
    (*pcVar11)();
    _swift_storeEnumTagMultiPayload();
    FUN_100681318(lVar15,uVar13);
    lVar8 = local_b0;
    lVar12 = lVar15;
    (**(code **)(local_b0 + 0x30))(lVar15,1,lVar7);
    if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d15c);
      (*pcVar11)();
    }
    (**(code **)(lVar8 + 0x20))(lVar18,lVar15,lVar7);
    (*pcVar11)();
    uVar13 = local_68;
    lVar12 = local_e0[4];
    *unaff_x20 = local_e0[4];
    unaff_x20[1] = local_68;
    unaff_x20[2] = 0;
    _swift_storeEnumTagMultiPayload();
    uStack_78 = local_e0[1];
    local_80 = local_e0[0];
    _swift_retain(lVar12);
    _swift_retain(uVar13);
    uVar5 = local_98;
    FUN_10062f364(local_98,thunk_FUN_10074531c,local_90,lVar7,local_a0);
    _swift_release(lVar12);
    (**(code **)(lVar8 + 8))(lVar18,lVar7);
LAB_10074d0c0:
    _swift_release(uVar13);
    RVar1 = Swift::Result::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_04,RVar1.value) + -8) + 0x38))
              (uVar5,0,1,CONCAT71(extraout_var_04,RVar1.value));
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar7 = CONCAT71(extraout_var_05,OVar2.value);
    pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d154);
      (*pcVar11)();
    }
    uVar13 = *puVar14;
    uVar5 = 0;
    local_90[0] = uVar13;
    FUN_1006883a0(0,lVar7);
    _swift_getWitnessTable(0x100c6d780,uVar5);
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (!bVar3) {
      pcVar11 = *(code **)(lVar17 + 8);
      local_68 = uVar13;
      (*pcVar11)();
      _swift_storeEnumTagMultiPayload();
      FUN_100681318(lVar16,uVar5);
      lVar8 = local_b0;
      lVar15 = lVar16;
      (**(code **)(local_b0 + 0x30))(lVar16,1,lVar7);
      if ((int)lVar15 == 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10074d158);
        (*pcVar11)();
      }
      (**(code **)(lVar8 + 0x20))(lVar12,lVar16,lVar7);
      (*pcVar11)();
      uVar13 = local_68;
      *unaff_x20 = local_68;
      _swift_storeEnumTagMultiPayload();
      uStack_78 = local_e0[4];
      local_80 = lVar19;
      _swift_retain(uVar13);
      uVar5 = local_98;
      FUN_10062f364(local_98,thunk_FUN_10074531c,local_90,lVar7,local_a0);
      (**(code **)(lVar8 + 8))(lVar12,lVar7);
      goto LAB_10074d0c0;
    }
    _swift_release(uVar13);
    RVar1 = Swift::Result::typeMetadataAccessor();
    uVar5 = local_98;
    (**(code **)(*(long *)(CONCAT71(extraout_var_02,RVar1.value) + -8) + 0x38))
              (local_98,1,1,CONCAT71(extraout_var_02,RVar1.value));
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar7 = CONCAT71(extraout_var_03,OVar2.value);
    pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  uVar13 = 0;
LAB_10074d11c:
  (*pcVar11)(uVar5,uVar13,1,lVar7);
  return;
}



/* Address: 0x10074d15c | FUN_10074d15c */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10074d15c(long param_1)

{
  long lVar1;
  code *pcVar2;
  Result RVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  tuple2_conflict3 tVar17;
  undefined1 auVar18 [16];
  long alStack_70 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = 0;
  FUN_10074af2c(0,lVar1,uVar8);
  lVar16 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar14 = (long *)((long)alStack_70 - uVar13);
  puVar15 = (undefined8 *)((long)plVar14 - uVar13);
  (**(code **)(lVar16 + 0x10))(puVar15);
  puVar6 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      uVar7 = *puVar15;
      uVar12 = puVar15[2];
      _swift_release(puVar15[1]);
      uVar11 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,lVar1,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1007c3a74(0xff,uVar11);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar3 = Swift::Result::typeMetadataAccessor();
      tVar17 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
      uVar8 = 0;
      alStack_70[1] = tVar17._0_8_;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
      plVar10 = alStack_70 + 1;
      FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
      _swift_bridgeObjectRelease(tVar17._0_8_);
      *plVar14 = (long)plVar10;
      _swift_storeEnumTagMultiPayload(plVar14,lVar5,2);
      (**(code **)(lVar16 + 0x28))();
      goto LAB_10074d4cc;
    }
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar8,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1007c3a74(0xff,uVar7);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar3 = Swift::Result::typeMetadataAccessor();
    tVar17 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
    uVar8 = 0;
    alStack_70[1] = tVar17._0_8_;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
    plVar10 = alStack_70 + 1;
    FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
    _swift_bridgeObjectRelease(tVar17._0_8_);
    *plVar14 = (long)plVar10;
    _swift_storeEnumTagMultiPayload(plVar14,lVar5,2);
    (**(code **)(lVar16 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar15,lVar1);
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10074d4f0);
      (*pcVar2)();
    }
    (**(code **)(lVar16 + 8))(puVar15,lVar5);
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar8,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1007c3a74(0xff,uVar7);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar3 = Swift::Result::typeMetadataAccessor();
    tVar17 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
    uVar8 = 0;
    alStack_70[1] = tVar17._0_8_;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
    plVar10 = alStack_70 + 1;
    FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
    _swift_bridgeObjectRelease(tVar17._0_8_);
    *plVar14 = (long)plVar10;
    _swift_storeEnumTagMultiPayload(plVar14,lVar5,2);
    (**(code **)(lVar16 + 0x28))();
  }
  uVar7 = 0;
  uVar12 = 0;
LAB_10074d4cc:
  auVar18._8_8_ = uVar12;
  auVar18._0_8_ = uVar7;
  return auVar18;
}



/* Address: 0x10074d4f0 | FUN_10074d4f0 */

__int64 FUN_10074d4f0(undefined8 param_1,__int64 param_2,undefined8 param_3,undefined8 param_4)

{
  __int64 _Var1;
  __int64 _Var2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  __int64 local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  __int64 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  __int64 _Stack_58;
  undefined8 local_50;
  
  _Var1 = Swift::Collection::get_count();
  if (0 < _Var1) {
    _Var2 = _Var1;
    FUN_100683e8c(_Var1,param_2);
    pcStack_98 = FUN_1005fb624;
    local_90 = auStack_80;
    local_a0 = param_2;
    local_70 = param_2;
    uStack_68 = param_3;
    local_60 = param_4;
    _Stack_58 = _Var1;
    local_50 = param_1;
    _swift_retain();
    puVar3 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1006034cc(FUN_1005bc29c,auStack_b0,_Var2,&DAT_100ef5140,param_2,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    _swift_release(_Var2);
    return _Var2;
  }
  FUN_100683d64(param_2);
  return param_2;
}



/* Address: 0x10074d5f8 | FUN_10074d5f8 */

void FUN_10074d5f8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074d604 | FUN_10074d604 */

void FUN_10074d604(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074d610 | FUN_10074d610 */

undefined1  [16] FUN_10074d610(long param_1)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [32];
  ulong uVar3;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c76088,*(long *)(lVar4 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Address: 0x10074d6d0 | FUN_10074d6d0 */

void FUN_10074d6d0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074d6dc | FUN_10074d6dc */

undefined1  [16] FUN_10074d6dc(long param_1)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uVar3;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  if (uVar3 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar4 + -8) + 0x40,1);
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Address: 0x10074d780 | FUN_10074d780 */

long * FUN_10074d780(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && uVar6 + 1 < 0x19) {
    bVar2 = *(byte *)((long)param_2 + uVar6);
    if ((0xffffff02 < bVar2 - 0xff) || (1 < bVar2)) {
      plVar4 = _memcpy(param_1,param_2,uVar6 + 1);
      return plVar4;
    }
    if (bVar2 == 1) {
      lVar3 = *param_2;
      _swift_errorRetain(lVar3);
      *param_1 = lVar3;
      *(undefined1 *)((long)param_1 + uVar6) = 1;
    }
    else {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar3);
      *(undefined1 *)((long)param_1 + uVar6) = 0;
    }
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10074d884 | FUN_10074d884 */

void FUN_10074d884(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar2 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (*(byte *)((long)param_1 + uVar2) < 2) {
    if (*(byte *)((long)param_1 + uVar2) == 1) {
      _swift_errorRelease(*param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010074d908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    return;
  }
  return;
}



/* Address: 0x10074d90c | FUN_10074d90c */

undefined8 * FUN_10074d90c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  if ((bVar1 - 0xff < 0xffffff03) && (bVar1 < 2)) {
    if (bVar1 == 1) {
      uVar5 = *param_2;
      _swift_errorRetain(uVar5);
      *param_1 = uVar5;
      *(undefined1 *)((long)param_1 + uVar4) = 1;
    }
    else {
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
    }
    return param_1;
  }
  puVar3 = _memcpy(param_1,param_2,uVar4 + 1);
  return puVar3;
}



/* Address: 0x10074d9d4 | FUN_10074d9d4 */

uint * FUN_10074d9d4(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = *(ulong *)(lVar11 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar6);
  bVar3 = *(byte *)((long)param_2 + uVar6);
  uVar8 = bVar3 - 0xff;
  if (bVar2 - 0xff < 0xffffff03) {
    if (uVar8 < 0xffffff03) {
      if (1 < bVar2) goto LAB_10074da78;
      if (bVar3 < 2) {
        if (param_1 == param_2) {
          return param_1;
        }
        if (bVar2 == 1) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        else {
          (**(code **)(lVar11 + 8))(param_1,lVar4);
        }
        bVar2 = *(byte *)((long)param_2 + uVar6);
        uVar8 = (uint)bVar2;
        if (1 < bVar2) {
          uVar10 = (uint)uVar6;
          uVar1 = 4;
          if (uVar10 < 4) {
            uVar1 = uVar10;
          }
          if ((int)uVar1 < 2) {
            if (uVar1 == 0) goto LAB_10074dba8;
            uVar8 = (uint)(byte)*param_2;
          }
          else if (uVar1 == 2) {
            uVar8 = (uint)(ushort)*param_2;
          }
          else if (uVar1 == 3) {
            uVar8 = (uint)(uint3)*param_2;
          }
          else {
            uVar8 = *param_2;
          }
          if (uVar10 < 4) {
            uVar8 = (uVar8 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3)) + 2;
          }
          else {
            uVar8 = uVar8 + 2;
          }
        }
LAB_10074dba8:
        if (uVar8 == 1) goto LAB_10074da84;
        pcVar7 = *(code **)(lVar11 + 0x10);
        goto LAB_10074dac8;
      }
    }
    else if (1 < bVar2) goto LAB_10074db00;
    if (bVar2 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar11 + 8))(param_1,lVar4);
    }
  }
  else {
    if (0xffffff02 < uVar8) goto LAB_10074db00;
LAB_10074da78:
    if (bVar3 < 2) {
      if (bVar3 == 1) {
LAB_10074da84:
        uVar9 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar9);
        *(undefined8 *)param_1 = uVar9;
        *(byte *)((long)param_1 + uVar6) = 1;
        return param_1;
      }
      pcVar7 = *(code **)(lVar11 + 0x10);
LAB_10074dac8:
      (*pcVar7)(param_1,param_2,lVar4);
      *(byte *)((long)param_1 + uVar6) = 0;
      return param_1;
    }
  }
LAB_10074db00:
  puVar5 = _memcpy(param_1,param_2,uVar6 + 1);
  return puVar5;
}



/* Address: 0x10074dbc4 | FUN_10074dbc4 */

undefined8 * FUN_10074dbc4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  if ((bVar1 - 0xff < 0xffffff03) && (bVar1 < 2)) {
    if (bVar1 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 1;
    }
    else {
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      *(undefined1 *)((long)param_1 + uVar4) = 0;
    }
    return param_1;
  }
  puVar3 = _memcpy(param_1,param_2,uVar4 + 1);
  return puVar3;
}



/* Address: 0x10074dc74 | FUN_10074dc74 */

uint * FUN_10074dc74(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar4 + -8);
  uVar6 = *(ulong *)(lVar10 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar6);
  bVar3 = *(byte *)((long)param_2 + uVar6);
  uVar8 = bVar3 - 0xff;
  if (bVar2 - 0xff < 0xffffff03) {
    if (uVar8 < 0xffffff03) {
      if (1 < bVar2) goto LAB_10074dd18;
      if (bVar3 < 2) {
        if (param_1 == param_2) {
          return param_1;
        }
        if (bVar2 == 1) {
          _swift_errorRelease(*(undefined8 *)param_1);
        }
        else {
          (**(code **)(lVar10 + 8))(param_1,lVar4);
        }
        bVar2 = *(byte *)((long)param_2 + uVar6);
        uVar8 = (uint)bVar2;
        if (1 < bVar2) {
          uVar9 = (uint)uVar6;
          uVar1 = 4;
          if (uVar9 < 4) {
            uVar1 = uVar9;
          }
          if ((int)uVar1 < 2) {
            if (uVar1 == 0) goto LAB_10074de40;
            uVar8 = (uint)(byte)*param_2;
          }
          else if (uVar1 == 2) {
            uVar8 = (uint)(ushort)*param_2;
          }
          else if (uVar1 == 3) {
            uVar8 = (uint)(uint3)*param_2;
          }
          else {
            uVar8 = *param_2;
          }
          if (uVar9 < 4) {
            uVar8 = (uVar8 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3)) + 2;
          }
          else {
            uVar8 = uVar8 + 2;
          }
        }
LAB_10074de40:
        if (uVar8 == 1) goto LAB_10074dd24;
        pcVar7 = *(code **)(lVar10 + 0x20);
        goto LAB_10074dd60;
      }
    }
    else if (1 < bVar2) goto LAB_10074dd98;
    if (bVar2 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
    }
    else {
      (**(code **)(lVar10 + 8))(param_1,lVar4);
    }
  }
  else {
    if (0xffffff02 < uVar8) goto LAB_10074dd98;
LAB_10074dd18:
    if (bVar3 < 2) {
      if (bVar3 == 1) {
LAB_10074dd24:
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar6) = 1;
        return param_1;
      }
      pcVar7 = *(code **)(lVar10 + 0x20);
LAB_10074dd60:
      (*pcVar7)(param_1,param_2,lVar4);
      *(byte *)((long)param_1 + uVar6) = 0;
      return param_1;
    }
  }
LAB_10074dd98:
  puVar5 = _memcpy(param_1,param_2,uVar6 + 1);
  return puVar5;
}



/* Address: 0x10074de5c | FUN_10074de5c */

int FUN_10074de5c(uint *param_1,uint param_2,long param_3)

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
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_10074df30;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfc >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10074df30;
      goto LAB_10074debc;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10074debc:
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
    return ((uint)uVar7 | uVar1) + 0xfd;
  }
LAB_10074df30:
  uVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar6)) {
    uVar2 = *(byte *)((long)param_1 + uVar6) ^ 0xff;
  }
  iVar3 = 0;
  if (1 < uVar2) {
    iVar3 = uVar2 - 1;
  }
  return iVar3;
}



/* Address: 0x10074dfa0 | FUN_10074dfa0 */

void FUN_10074dfa0(uint *param_1,uint param_2,uint param_3,long param_4)

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
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  sVar1 = uVar5 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfd) {
    bVar8 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar6 << 3 & 0x1f)) +
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
  if (param_2 < 0xfd) {
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
      *(char *)((long)param_1 + uVar5) = -2 - (char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
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



/* Address: 0x10074e168 | FUN_10074e168 */

byte FUN_10074e168(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar3 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = 0;
  if (1 < *(byte *)(param_1 + uVar3)) {
    bVar1 = *(byte *)(param_1 + uVar3) ^ 0xff;
  }
  return bVar1;
}



/* Address: 0x10074e1c8 | FUN_10074e1c8 */

void FUN_10074e1c8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (param_2 < 0xfe) {
    if (param_2 != 0) {
      *(byte *)((long)param_1 + uVar4) = ~(byte)param_2;
    }
  }
  else {
    uVar1 = (int)uVar4 + 1;
    uVar5 = 0xffffffff;
    if (uVar1 < 4) {
      uVar5 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar5 = uVar5 & param_2 - 0xfe;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1,(ulong)uVar1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar5;
        }
        else {
          *(short *)param_1 = (short)uVar5;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar5;
        *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
      }
      else {
        *param_1 = uVar5;
      }
    }
  }
  return;
}



/* Address: 0x10074e2ac | FUN_10074e2ac */

void FUN_10074e2ac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074e2b8 | FUN_10074e2b8 */

undefined1  [16] FUN_10074e2b8(long param_1)

{
  Result RVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_30;
  long local_28;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar4 < 0x40) {
    local_30 = *(long *)(lVar3 + -8) + 0x40;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_1 + 0x18),lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar1 = Swift::Result::typeMetadataAccessor();
    uVar4 = CONCAT71(extraout_var,RVar1.value);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var_00,OVar2.value);
    if (uVar4 < 0x40) {
      local_28 = *(long *)(lVar3 + -8) + 0x40;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
      lVar3 = 0;
      uVar5 = 0;
      goto LAB_10074e384;
    }
  }
  uVar5 = 0x3f;
LAB_10074e384:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Address: 0x10074e398 | FUN_10074e398 */

long * FUN_10074e398(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar3 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar6 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar9 < uVar5 + 1) {
    uVar9 = uVar5 + 1;
  }
  uVar7 = *(uint *)(lVar6 + 0x50) | *(uint *)(lVar10 + 0x50);
  if ((uVar7 & 0x1000f8) != 0 || 0x18 < uVar9 + 1) {
    uVar5 = (ulong)(uVar7 & 0xf8 | 7);
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + uVar9);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = (uint)uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10074e4b8;
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
    uVar7 = uVar8 | bVar1 - 2 << (ulong)(((uint)uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10074e4b8:
  if (uVar7 == 1) {
    if (*(byte *)((long)param_2 + uVar5) < 2) {
      if (*(byte *)((long)param_2 + uVar5) == 1) {
        lVar3 = *(long *)param_2;
        _swift_errorRetain(lVar3);
        *param_1 = lVar3;
        *(undefined1 *)((long)param_1 + uVar5) = 1;
      }
      else {
        (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar5 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar9) = 1;
  }
  else {
    if (uVar7 != 0) {
      plVar4 = _memcpy(param_1,param_2,uVar9 + 1);
      return plVar4;
    }
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
    *(undefined1 *)((long)param_1 + uVar9) = 0;
  }
  return param_1;
}



/* Address: 0x10074e574 | FUN_10074e574 */

void FUN_10074e574(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar1 + -8);
  uVar9 = *(ulong *)(lVar8 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar4 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (uVar9 < uVar4 + 1) {
    uVar9 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar9);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)uVar9;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074e648;
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
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10074e648:
  if (uVar6 == 1) {
    if (1 < *(byte *)((long)param_1 + uVar4)) {
      return;
    }
    if (*(byte *)((long)param_1 + uVar4) == 1) {
      _swift_errorRelease(*(undefined8 *)param_1,lVar3);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
  }
  else {
    if (uVar6 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
    lVar3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010074e66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
  return;
}



/* Address: 0x10074e6b0 | FUN_10074e6b0 */

undefined8 * FUN_10074e6b0(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar1 + -8);
  uVar11 = *(ulong *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar11 < uVar5 + 1) {
    uVar11 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar11);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar11;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074e78c;
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
LAB_10074e78c:
  if (uVar6 == 1) {
    if (*(byte *)((long)param_2 + uVar5) < 2) {
      if (*(byte *)((long)param_2 + uVar5) == 1) {
        uVar8 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar8);
        *param_1 = uVar8;
        *(undefined1 *)((long)param_1 + uVar5) = 1;
      }
      else {
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar5 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar11) = 1;
  }
  else {
    if (uVar6 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar11 + 1);
      return puVar4;
    }
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar11) = 0;
  }
  return param_1;
}



/* Address: 0x10074e838 | FUN_10074e838 */

uint * FUN_10074e838(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar1 + -8);
  uVar12 = *(ulong *)(lVar13 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar3 + -8);
  uVar6 = *(ulong *)(lVar14 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (uVar12 < uVar6 + 1) {
    uVar12 = uVar6 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar12);
  uVar8 = (uint)bVar2;
  uVar11 = (uint)uVar12;
  if (1 < bVar2) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10074e924;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10074e924:
  if (uVar8 == 1) {
    if (*(byte *)((long)param_1 + uVar6) < 2) {
      if (*(byte *)((long)param_1 + uVar6) != 1) {
        pcVar7 = *(code **)(lVar14 + 8);
        lVar5 = lVar3;
        goto LAB_10074e93c;
      }
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar8 == 0) {
    pcVar7 = *(code **)(lVar13 + 8);
    lVar5 = lVar1;
LAB_10074e93c:
    (*pcVar7)(param_1,lVar5);
  }
  bVar2 = *(byte *)((long)param_2 + uVar12);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10074e9d0;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10074e9d0:
  if (uVar8 == 1) {
    if (*(byte *)((long)param_2 + uVar6) < 2) {
      if (*(byte *)((long)param_2 + uVar6) == 1) {
        uVar10 = *(undefined8 *)param_2;
        _swift_errorRetain(uVar10);
        *(undefined8 *)param_1 = uVar10;
        *(byte *)((long)param_1 + uVar6) = 1;
      }
      else {
        (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar3);
        *(byte *)((long)param_1 + uVar6) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar6 + 1);
    }
    *(byte *)((long)param_1 + uVar12) = 1;
  }
  else {
    if (uVar8 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar12 + 1);
      return puVar4;
    }
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar1);
    *(byte *)((long)param_1 + uVar12) = 0;
  }
  return param_1;
}



/* Address: 0x10074eab0 | FUN_10074eab0 */

undefined8 * FUN_10074eab0(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar1 + -8);
  uVar10 = *(ulong *)(lVar9 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar10 < uVar5 + 1) {
    uVar10 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar10);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar10;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10074eb8c;
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
LAB_10074eb8c:
  if (uVar6 == 1) {
    if (*(byte *)((long)param_2 + uVar5) < 2) {
      if (*(byte *)((long)param_2 + uVar5) == 1) {
        *param_1 = *(undefined8 *)param_2;
        *(undefined1 *)((long)param_1 + uVar5) = 1;
      }
      else {
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        *(undefined1 *)((long)param_1 + uVar5) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar5 + 1);
    }
    *(undefined1 *)((long)param_1 + uVar10) = 1;
  }
  else {
    if (uVar6 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar10 + 1);
      return puVar4;
    }
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar1);
    *(undefined1 *)((long)param_1 + uVar10) = 0;
  }
  return param_1;
}



/* Address: 0x10074ec30 | FUN_10074ec30 */

uint * FUN_10074ec30(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar1 + -8);
  uVar11 = *(ulong *)(lVar12 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),lVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar3 + -8);
  uVar6 = *(ulong *)(lVar13 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (uVar11 < uVar6 + 1) {
    uVar11 = uVar6 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar8 = (uint)bVar2;
  uVar10 = (uint)uVar11;
  if (1 < bVar2) {
    uVar9 = 4;
    if (uVar10 < 4) {
      uVar9 = uVar10;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10074ed1c;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10074ed1c:
  if (uVar8 == 1) {
    if (*(byte *)((long)param_1 + uVar6) < 2) {
      if (*(byte *)((long)param_1 + uVar6) != 1) {
        pcVar7 = *(code **)(lVar13 + 8);
        lVar5 = lVar3;
        goto LAB_10074ed34;
      }
      _swift_errorRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar8 == 0) {
    pcVar7 = *(code **)(lVar12 + 8);
    lVar5 = lVar1;
LAB_10074ed34:
    (*pcVar7)(param_1,lVar5);
  }
  bVar2 = *(byte *)((long)param_2 + uVar11);
  uVar8 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = 4;
    if (uVar10 < 4) {
      uVar9 = uVar10;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_10074edc8;
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
    uVar8 = uVar9 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10074edc8:
  if (uVar8 == 1) {
    if (*(byte *)((long)param_2 + uVar6) < 2) {
      if (*(byte *)((long)param_2 + uVar6) == 1) {
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar6) = 1;
      }
      else {
        (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar3);
        *(byte *)((long)param_1 + uVar6) = 0;
      }
    }
    else {
      _memcpy(param_1,param_2,uVar6 + 1);
    }
    *(byte *)((long)param_1 + uVar11) = 1;
  }
  else {
    if (uVar8 != 0) {
      puVar4 = _memcpy(param_1,param_2,uVar11 + 1);
      return puVar4;
    }
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar1);
    *(byte *)((long)param_1 + uVar11) = 0;
  }
  return param_1;
}



/* Address: 0x10074eea0 | FUN_10074eea0 */

int FUN_10074eea0(uint *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  if (uVar8 < uVar6 + 1) {
    uVar8 = uVar6 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_10074ef90;
  uVar6 = uVar8 + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfd >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_10074ef90;
      goto LAB_10074ef1c;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10074ef1c:
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
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_10074ef90:
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar8)) {
    iVar3 = (*(byte *)((long)param_1 + uVar8) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x10074eff8 | FUN_10074eff8 */

void FUN_10074eff8(uint *param_1,uint param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x18),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar7 < uVar5 + 1) {
    uVar7 = uVar5 + 1;
  }
  sVar1 = uVar7 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar9 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar6 << 3 & 0x1f)) +
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
  if (param_2 < 0xfe) {
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
    param_2 = param_2 - 0xfe;
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



/* Address: 0x10074f1d0 | FUN_10074f1d0 */

uint FUN_10074f1d0(uint *param_1,long param_2)

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
            (0,*(undefined8 *)(param_2 + 0x18),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (uVar7 < uVar5 + 1) {
    uVar7 = uVar5 + 1;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
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
    uVar2 = uVar6 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar6;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x10074f2a4 | FUN_10074f2a4 */

void FUN_10074f2a4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  
  if (param_2 < 2) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar4 = *(ulong *)(*(long *)(lVar1 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    uVar5 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar5 < uVar4 + 1) {
      uVar5 = uVar4 + 1;
    }
    *(char *)((long)param_1 + uVar5) = (char)param_2;
  }
  else {
    sVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar4 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    if (sVar6 < uVar4 + 1) {
      sVar6 = uVar4 + 1;
    }
    param_2 = param_2 - 2;
    uVar3 = (uint)sVar6;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + sVar6) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + sVar6) = 2;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,sVar6);
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



/* Address: 0x10074f3f4 | FUN_10074f3f4 */

undefined8 * FUN_10074f3f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x10074f420 | FUN_10074f420 */

undefined8 * FUN_10074f420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x10074f46c | FUN_10074f46c */

undefined8 * FUN_10074f46c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x10074f4a8 | FUN_10074f4a8 */

void FUN_10074f4a8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074f4b4 | FUN_10074f4b4 */

void FUN_10074f4b4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074f4c0 | thunk_FUN_10074f3f4 */

void thunk_FUN_10074f3f4(void)

{
  FUN_10074f3f4();
  return;
}



/* Address: 0x10074f4c4 | thunk_FUN_10074b128 */

void thunk_FUN_10074b128(void)

{
  thunk_FUN_10074b128();
  return;
}



/* Address: 0x10074f4c8 | FUN_10074f4c8 */

void FUN_10074f4c8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_10074f4e8,0,0);
  return;
}



/* Address: 0x10074f4e8 | FUN_10074f4e8 */

void FUN_10074f4e8(void)

{
  Optional OVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = 0;
  FUN_1007c3a74(0,OVar1.value);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100748758;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&UNK_100c761a8,*(undefined8 *)(unaff_x22 + 0x18),
                thunk_FUN_10074fe88,*(undefined8 *)(unaff_x22 + 0x18),0,0,uVar3);
  return;
}



/* Address: 0x10074f5dc | FUN_10074f5dc */

void FUN_10074f5dc(undefined8 param_1,long *param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined7 extraout_var_00;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  lVar5 = *param_2;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x30) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0xff;
  FUN_10074d5f8(0xff,uVar6,uVar7);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  _swift_task_switch(FUN_10074f700,0,0);
  return;
}



/* Address: 0x10074f700 | FUN_10074f700 */

void FUN_10074f700(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  String SVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x48);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = 0;
  FUN_10074af20(0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20));
  FUN_10079f534(uVar7,FUN_100750954,lVar6,uVar9,uVar2,uVar5);
  (**(code **)(lVar1 + 0x10))(uVar4,uVar7,uVar5);
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(uVar4,1,lVar8);
  if ((int)uVar4 != 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = uVar5;
    _swift_getEnumCaseMultiPayload(uVar5,*(undefined8 *)(unaff_x22 + 0x48));
    if ((int)uVar4 == 0) {
      SVar10.bridgeObject = (void *)0x2;
      SVar10.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000016,
                 0x8000000100db1320,0xdb1360);
      return;
    }
    if ((int)uVar4 == 1) {
      lVar1 = *(long *)(unaff_x22 + 0x38);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
      (**(code **)(lVar1 + 0x20))(uVar4,uVar5,uVar7);
      FUN_1005cfcb0(uVar2,uVar4,uVar7);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010074f838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  uVar4 = 0;
  FUN_1007c3a74(0,uVar5);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100748b40;
  FUN_10072f29c(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_10075096c,
                *(undefined8 *)(unaff_x22 + 0x18),uVar4);
  return;
}



/* Address: 0x10074f91c | FUN_10074f91c */

void FUN_10074f91c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_70;
  undefined8 local_68;
  
  lVar1 = *(long *)(*param_3 + 0x50);
  uVar4 = *(undefined8 *)(*param_3 + 0x58);
  lVar9 = *(long *)(lVar1 + -8);
  lVar10 = (long)&local_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_70 = param_3;
  local_68 = param_1;
  FUN_10074d5f8(0,lVar1,uVar4);
  lVar8 = *(long *)(lVar2 + -8);
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar10 - uVar6;
  lVar11 = lVar12 - uVar6;
  FUN_10074af20(0,lVar1,uVar4);
  FUN_10074c6f4(lVar11);
  (**(code **)(lVar8 + 0x10))(lVar12,lVar11,lVar2);
  lVar3 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar2);
  uVar4 = local_68;
  if ((int)lVar3 == 0) {
    (**(code **)(lVar9 + 0x20))(lVar10,lVar12,lVar1);
    FUN_10074fad8(param_2,lVar10);
    (**(code **)(lVar9 + 8))(lVar10,lVar1);
    (**(code **)(lVar8 + 8))(lVar11,lVar2);
    pcVar7 = *(code **)(lVar8 + 0x38);
    uVar5 = 1;
    uVar4 = local_68;
  }
  else {
    if ((int)lVar3 == 1) {
      (**(code **)(lVar8 + 0x20))(local_68,lVar11,lVar2);
      (**(code **)(lVar8 + 0x38))(uVar4,0,1,lVar2);
      (**(code **)(lVar8 + 8))(lVar12,lVar2);
      return;
    }
    (**(code **)(lVar8 + 0x20))(local_68,lVar11,lVar2);
    pcVar7 = *(code **)(lVar8 + 0x38);
    uVar5 = 0;
  }
  (*pcVar7)(uVar4,uVar5,1,lVar2);
  return;
}



/* Address: 0x10074fad8 | FUN_10074fad8 */

void FUN_10074fad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *unaff_x20;
  lVar6 = *(long *)(lVar9 + 0x50);
  lVar11 = *(long *)(lVar6 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  puVar7 = &stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar8 = (long)puVar7 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(lVar8,1,1,TVar2.unknown);
  (**(code **)(lVar11 + 0x10))(puVar7,param_2,lVar6);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar14 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100efe488;
  _swift_allocObject(&DAT_100efe488,uVar13 + 8,uVar5 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(long *)(puVar1 + 0x20) = lVar6;
  uVar10 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 *)(puVar1 + 0x28) = uVar10;
  (**(code **)(lVar11 + 0x20))(puVar1 + uVar14,puVar7,lVar6);
  *(long **)(puVar1 + uVar13) = unaff_x20;
  _swift_retain();
  uVar3 = 0;
  FUN_100731e58(0,0,lVar8,&DAT_100c761c0,puVar1);
  uVar4 = 0;
  FUN_10074af20(0,lVar6,uVar10);
  FUN_10074bce4(uVar3,uVar4);
  _swift_release(uVar3);
  return;
}


