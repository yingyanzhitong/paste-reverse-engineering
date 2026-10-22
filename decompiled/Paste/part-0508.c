/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005d9098 | FUN_1005d9098 */

void FUN_1005d9098(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_38;
  long local_30;
  undefined8 uStack_28;
  
  local_38 = 0x100c65bf8;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uStack_28 = 0x100c65c10;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1005d9118 | FUN_1005d9118 */

ulong * FUN_1005d9118(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  lVar1 = *(long *)(lVar3 + 0x40) + 7;
  if (((uint)uVar5 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) &&
      (lVar1 + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x21 < 0x19) {
    uVar2 = *param_2;
    *param_1 = uVar2;
    uVar8 = (long)param_1 + uVar5 + 8 & ~uVar5;
    uVar5 = (long)param_2 + uVar5 + 8 & ~uVar5;
    pcVar10 = *(code **)(lVar3 + 0x10);
    _swift_retain(uVar2 & 0x3fffffffffffffff);
    (*pcVar10)(uVar8,uVar5,lVar6);
    pbVar7 = (byte *)(lVar1 + uVar8 & 0xfffffffffffffff8);
    pbVar9 = (byte *)(lVar1 + uVar5 & 0xfffffffffffffff8);
    if (*pbVar9 < 4) {
      *pbVar7 = *pbVar9;
      uVar5 = *(ulong *)(pbVar9 + 8);
      if (((uVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        uVar5 = *(ulong *)(pbVar9 + 8);
        *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar9 + 0x10);
        *(ulong *)(pbVar7 + 8) = uVar5;
      }
      else {
        *(ulong *)(pbVar7 + 8) = uVar5;
        *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar9 + 0x10);
        _swift_retain(uVar5 & 0x3fffffffffffffff);
      }
      uVar4 = *(undefined8 *)(pbVar9 + 0x18);
      pbVar7[0x20] = pbVar9[0x20];
      *(undefined8 *)(pbVar7 + 0x18) = uVar4;
    }
    else {
      uVar11 = *(undefined8 *)(pbVar9 + 8);
      uVar4 = *(undefined8 *)pbVar9;
      uVar13 = *(undefined8 *)(pbVar9 + 0x18);
      uVar12 = *(undefined8 *)(pbVar9 + 0x10);
      pbVar7[0x20] = pbVar9[0x20];
      *(undefined8 *)(pbVar7 + 8) = uVar11;
      *(undefined8 *)pbVar7 = uVar4;
      *(undefined8 *)(pbVar7 + 0x18) = uVar13;
      *(undefined8 *)(pbVar7 + 0x10) = uVar12;
    }
  }
  else {
    uVar2 = *param_2;
    *param_1 = uVar2;
    param_1 = (ulong *)(uVar2 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005d9268 | FUN_1005d9268 */

void FUN_1005d9268(ulong *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  
  _swift_release(*param_1 & 0x3fffffffffffffff);
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (long)param_1 + (ulong)*(byte *)(lVar3 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar3 + 8))(uVar2);
  pbVar1 = (byte *)(*(long *)(lVar3 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8);
  if ((*pbVar1 < 4) &&
     (uVar2 = *(ulong *)(pbVar1 + 8), ((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    _swift_release(uVar2 & 0x3fffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x1005d9300 | FUN_1005d9300 */

ulong * FUN_1005d9300(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  lVar4 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar8 + 0x10);
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  (*pcVar9)(uVar6,uVar3,lVar4);
  lVar4 = *(long *)(lVar8 + 0x40) + 7;
  pbVar5 = (byte *)(lVar4 + uVar6 & 0xfffffffffffffff8);
  pbVar7 = (byte *)(lVar4 + uVar3 & 0xfffffffffffffff8);
  if (*pbVar7 < 4) {
    *pbVar5 = *pbVar7;
    uVar1 = *(ulong *)(pbVar7 + 8);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      uVar1 = *(ulong *)(pbVar7 + 8);
      *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
      *(ulong *)(pbVar5 + 8) = uVar1;
    }
    else {
      *(ulong *)(pbVar5 + 8) = uVar1;
      *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
      _swift_retain(uVar1 & 0x3fffffffffffffff);
    }
    uVar2 = *(undefined8 *)(pbVar7 + 0x18);
    pbVar5[0x20] = pbVar7[0x20];
    *(undefined8 *)(pbVar5 + 0x18) = uVar2;
  }
  else {
    uVar10 = *(undefined8 *)(pbVar7 + 8);
    uVar2 = *(undefined8 *)pbVar7;
    uVar12 = *(undefined8 *)(pbVar7 + 0x18);
    uVar11 = *(undefined8 *)(pbVar7 + 0x10);
    pbVar5[0x20] = pbVar7[0x20];
    *(undefined8 *)(pbVar5 + 8) = uVar10;
    *(undefined8 *)pbVar5 = uVar2;
    *(undefined8 *)(pbVar5 + 0x18) = uVar12;
    *(undefined8 *)(pbVar5 + 0x10) = uVar11;
  }
  return param_1;
}



/* Address: 0x1005d93f8 | FUN_1005d93f8 */

ulong * FUN_1005d93f8(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *param_2;
  uVar6 = *param_1;
  *param_1 = uVar2;
  _swift_retain(uVar2 & 0x3fffffffffffffff);
  _swift_release(uVar6 & 0x3fffffffffffffff);
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar6,uVar2);
  lVar7 = *(long *)(lVar7 + 0x40) + 7;
  pbVar8 = (byte *)(lVar7 + uVar6 & 0xfffffffffffffff8);
  pbVar5 = (byte *)(lVar7 + uVar2 & 0xfffffffffffffff8);
  bVar1 = *pbVar5;
  if (*pbVar8 < 4) {
    if (3 < bVar1) {
      if (((*(ulong *)(pbVar8 + 8) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
        _swift_release(*(ulong *)(pbVar8 + 8) & 0x3fffffffffffffff);
      }
LAB_1005d950c:
      uVar9 = *(undefined8 *)(pbVar5 + 8);
      uVar3 = *(undefined8 *)pbVar5;
      uVar11 = *(undefined8 *)(pbVar5 + 0x18);
      uVar10 = *(undefined8 *)(pbVar5 + 0x10);
      pbVar8[0x20] = pbVar5[0x20];
      *(undefined8 *)(pbVar8 + 8) = uVar9;
      *(undefined8 *)pbVar8 = uVar3;
      *(undefined8 *)(pbVar8 + 0x18) = uVar11;
      *(undefined8 *)(pbVar8 + 0x10) = uVar10;
      return param_1;
    }
    *pbVar8 = bVar1;
    puVar4 = (ulong *)(pbVar8 + 8);
    uVar6 = *puVar4;
    uVar2 = *(ulong *)(pbVar5 + 8);
    if (((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if ((uVar2 & 0xf000000000000007) != 0xf000000000000007) goto LAB_1005d9520;
    }
    else {
      if ((uVar2 & 0xf000000000000007) != 0xf000000000000007) {
        *(ulong *)(pbVar8 + 8) = uVar2;
        _swift_retain(uVar2 & 0x3fffffffffffffff);
        _swift_release(uVar6 & 0x3fffffffffffffff);
        *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
        goto LAB_1005d9570;
      }
      FUN_1005d9598(puVar4);
    }
    uVar2 = *(ulong *)(pbVar5 + 8);
    *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
    *puVar4 = uVar2;
  }
  else {
    if (3 < bVar1) goto LAB_1005d950c;
    *pbVar8 = bVar1;
    uVar2 = *(ulong *)(pbVar5 + 8);
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      uVar2 = *(ulong *)(pbVar5 + 8);
      *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
      *(ulong *)(pbVar8 + 8) = uVar2;
      goto LAB_1005d9570;
    }
LAB_1005d9520:
    *(ulong *)(pbVar8 + 8) = uVar2;
    *(undefined8 *)(pbVar8 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
    _swift_retain(uVar2 & 0x3fffffffffffffff);
  }
LAB_1005d9570:
  uVar3 = *(undefined8 *)(pbVar5 + 0x18);
  pbVar8[0x20] = pbVar5[0x20];
  *(undefined8 *)(pbVar8 + 0x18) = uVar3;
  return param_1;
}



/* Address: 0x1005d9598 | FUN_1005d9598 */

ulong * FUN_1005d9598(ulong *param_1)

{
  _swift_release(*param_1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x1005d95c4 | FUN_1005d95c4 */

undefined8 * FUN_1005d95c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar5,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar3 + 4);
  uVar9 = *puVar3;
  uVar8 = puVar3[3];
  uVar7 = puVar3[2];
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  puVar4[3] = uVar8;
  puVar4[2] = uVar7;
  *(undefined1 *)(puVar4 + 4) = uVar1;
  return param_1;
}



/* Address: 0x1005d964c | FUN_1005d964c */

ulong * FUN_1005d964c(ulong *param_1,ulong *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar2 & 0x3fffffffffffffff);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar3,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  pbVar7 = (byte *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  pbVar5 = (byte *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  if (3 < *pbVar7) {
LAB_1005d972c:
    uVar8 = *(undefined8 *)(pbVar5 + 8);
    uVar1 = *(undefined8 *)pbVar5;
    uVar10 = *(undefined8 *)(pbVar5 + 0x18);
    uVar9 = *(undefined8 *)(pbVar5 + 0x10);
    pbVar7[0x20] = pbVar5[0x20];
    *(undefined8 *)(pbVar7 + 8) = uVar8;
    *(undefined8 *)pbVar7 = uVar1;
    *(undefined8 *)(pbVar7 + 0x18) = uVar10;
    *(undefined8 *)(pbVar7 + 0x10) = uVar9;
    return param_1;
  }
  if (3 < *pbVar5) {
    if (((*(ulong *)(pbVar7 + 8) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      _swift_release(*(ulong *)(pbVar7 + 8) & 0x3fffffffffffffff);
    }
    goto LAB_1005d972c;
  }
  *pbVar7 = *pbVar5;
  puVar4 = (ulong *)(pbVar7 + 8);
  uVar2 = *puVar4;
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (((*(ulong *)(pbVar5 + 8) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      *(ulong *)(pbVar7 + 8) = *(ulong *)(pbVar5 + 8);
      _swift_release(uVar2 & 0x3fffffffffffffff);
      *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
      goto LAB_1005d9754;
    }
    FUN_1005d9598(puVar4);
  }
  uVar2 = *(ulong *)(pbVar5 + 8);
  *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar5 + 0x10);
  *puVar4 = uVar2;
LAB_1005d9754:
  uVar1 = *(undefined8 *)(pbVar5 + 0x18);
  pbVar7[0x20] = pbVar5[0x20];
  *(undefined8 *)(pbVar7 + 0x18) = uVar1;
  return param_1;
}



/* Address: 0x1005d9778 | FUN_1005d9778 */

ulong FUN_1005d9778(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar9 + 0x54);
  uVar3 = uVar7;
  if (uVar7 < 0xfc) {
    uVar3 = 0xfb;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    lVar2 = (lVar1 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x21;
    uVar6 = (uint)lVar2;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar6 < 4) {
      uVar5 = ((param_2 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar8;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar2), *(byte *)((long)param_1 + lVar2) != 0))
      goto LAB_1005d9820;
    }
    else if (uVar4 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar2);
      if (*(ushort *)((long)param_1 + lVar2) != 0) {
LAB_1005d9820:
        uVar7 = uVar8 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = *param_1;
          uVar7 = 0;
        }
        return (ulong)(uVar3 + (uVar8 | uVar7) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar2);
      if (uVar8 != 0) goto LAB_1005d9820;
    }
  }
  uVar10 = (ulong)((long)param_1 + uVar10 + 8) & ~uVar10;
  if (0xfa < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001005d9864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return uVar10;
  }
  uVar7 = (uint)*(byte *)(lVar1 + uVar10 & 0xfffffffffffffff8);
  uVar3 = uVar7 - 4;
  if (uVar7 < 4) {
    uVar3 = 0xffffffff;
  }
  uVar7 = 0;
  if (1 < uVar3 + 1) {
    uVar7 = uVar3;
  }
  return (ulong)uVar7;
}



/* Address: 0x1005d98a0 | FUN_1005d98a0 */

void FUN_1005d98a0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  uVar3 = uVar5;
  if (uVar5 < 0xfc) {
    uVar3 = 0xfb;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  sVar2 = (lVar1 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x21;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar11 = 2;
    uVar4 = uVar11;
    if ((uint)sVar2 < 4) {
      uVar4 = ((param_3 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar11 = 4;
    }
    if (uVar4 < 0x100) {
      uVar11 = 1;
    }
    uVar6 = 0;
    if (1 < uVar4) {
      uVar6 = uVar11;
    }
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    _bzero(param_1,sVar2);
    iVar7 = 1;
    if ((uint)sVar2 < 4) {
      iVar7 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar7;
      }
    }
    else if (uVar6 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar7;
    }
  }
  else {
    if (uVar6 < 2) {
      if (uVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xfa < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001005d99d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x38))();
        return;
      }
      piVar8 = (int *)(lVar1 + ((long)param_1 + uVar10 + 8 & ~uVar10) & 0xfffffffffffffff8);
      if (param_2 < 0xfc) {
        *(char *)piVar8 = (char)param_2 + '\x04';
      }
      else {
        *(char *)(piVar8 + 8) = '\0';
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[0] = 0;
        piVar8[1] = 0;
        piVar8[6] = 0;
        piVar8[7] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        *piVar8 = param_2 - 0xfc;
      }
    }
  }
  return;
}



/* Address: 0x1005d9a4c | FUN_1005d9a4c */

void FUN_1005d9a4c(long param_1)

{
  if (((*(ulong *)(param_1 + 8) ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_release(*(ulong *)(param_1 + 8) & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1005d9a68 | FUN_1005d9a68 */

void FUN_1005d9a68(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(ulong *)(param_2 + 8);
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_1 + 8) = uVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _swift_retain(uVar1 & 0x3fffffffffffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  return;
}



/* Address: 0x1005d9ad8 | FUN_1005d9ad8 */

undefined1 * FUN_1005d9ad8(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  puVar3 = (ulong *)(param_1 + 8);
  uVar4 = *puVar3;
  uVar1 = *(ulong *)(param_2 + 8);
  if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *(ulong *)(param_1 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      goto LAB_1005d9b74;
    }
  }
  else {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *(ulong *)(param_1 + 8) = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      _swift_release(uVar4 & 0x3fffffffffffffff);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      goto LAB_1005d9b74;
    }
    FUN_1005d9598(puVar3);
  }
  uVar1 = *(ulong *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *puVar3 = uVar1;
LAB_1005d9b74:
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return param_1;
}



/* Address: 0x1005d9b9c | FUN_1005d9b9c */

void FUN_1005d9b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1005d9bb0 | FUN_1005d9bb0 */

void FUN_1005d9bb0(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  *param_1 = *param_2;
  puVar3 = (ulong *)(param_1 + 8);
  uVar1 = *puVar3;
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      *(ulong *)(param_1 + 8) = uVar2;
      _swift_release(uVar1 & 0x3fffffffffffffff);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      goto LAB_1005d9c28;
    }
    FUN_1005d9598(puVar3);
  }
  uVar1 = *(ulong *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *puVar3 = uVar1;
LAB_1005d9c28:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  return;
}



/* Address: 0x1005d9c48 | FUN_1005d9c48 */

int FUN_1005d9c48(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (param_1[0x21] != 0)) {
    return *(int *)param_1 + 0xfd;
  }
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Address: 0x1005d9c8c | FUN_1005d9c8c */

void FUN_1005d9c8c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(char *)((long)param_1 + 0x21) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x03';
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(char *)(param_1 + 4) = '\0';
    *param_1 = (ulong)(param_2 - 0xfd);
    param_1[1] = 0;
    if (0xfc < param_3) {
      *(char *)((long)param_1 + 0x21) = '\x01';
    }
  }
  return;
}



/* Address: 0x1005d9cd4 | FUN_1005d9cd4 */

void FUN_1005d9cd4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005d9ce0 | FUN_1005d9ce0 */

void FUN_1005d9ce0(void)

{
  return;
}



/* Address: 0x1005d9ce4 | FUN_1005d9ce4 */

undefined1  [16] FUN_1005d9ce4(void)

{
  return ZEXT816(0x100ee7b60);
}



/* Address: 0x1005d9cf4 | FUN_1005d9cf4 */

ulong * FUN_1005d9cf4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x1005d9d28 | FUN_1005d9d28 */

void FUN_1005d9d28(ulong *param_1)

{
  _swift_release(*param_1 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1005d9d34 | FUN_1005d9d34 */

ulong * FUN_1005d9d34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_release(uVar2 & 0x3fffffffffffffff);
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x1005d9d84 | FUN_1005d9d84 */

void FUN_1005d9d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005d9d90 | FUN_1005d9d90 */

ulong * FUN_1005d9d90(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  _swift_release(*param_1 & 0x3fffffffffffffff);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1005d9dc8 | FUN_1005d9dc8 */

int FUN_1005d9dc8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005d9e24 | FUN_1005d9e24 */

void FUN_1005d9e24(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7e);
    param_1[1] = 0;
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1005d9e74 | FUN_1005d9e74 */

undefined1  [16] FUN_1005d9e74(void)

{
  return ZEXT816(0x100ee7bd8);
}



/* Address: 0x1005d9e84 | FUN_1005d9e84 */

void FUN_1005d9e84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Address: 0x1005d9ea8 | FUN_1005d9ea8 */

int FUN_1005d9ea8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005d9ec8 | FUN_1005d9ec8 */

void FUN_1005d9ec8(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Address: 0x1005d9f14 | FUN_1005d9f14 */

void FUN_1005d9f14(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ec8,&DAT_100ee7c58);
  return;
}



/* Address: 0x1005d9f28 | FUN_1005d9f28 */

void FUN_1005d9f28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005d9f34 | FUN_1005d9f34 */

void FUN_1005d9f34(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ed0,&DAT_100ee7ce8);
  return;
}



/* Address: 0x1005d9f48 | FUN_1005d9f48 */

void FUN_1005d9f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005d9f5c | FUN_1005d9f5c */

int FUN_1005d9f5c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[7] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005d9f7c | FUN_1005d9f7c */

void FUN_1005d9f7c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x1c) = uVar1;
  return;
}



/* Address: 0x1005d9fac | FUN_1005d9fac */

void FUN_1005d9fac(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ed8,&DAT_100ee7d78);
  return;
}



/* Address: 0x1005d9fc0 | FUN_1005d9fc0 */

void FUN_1005d9fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x5a);
  *(undefined8 *)((long)param_1 + 0x62) = *(undefined8 *)((long)param_2 + 0x62);
  *(undefined8 *)((long)param_1 + 0x5a) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x1005d9fec | FUN_1005d9fec */

int FUN_1005d9fec(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x6a) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005da00c | FUN_1005da00c */

void FUN_1005da00c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  return;
}



/* Address: 0x1005da054 | FUN_1005da054 */

void FUN_1005da054(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ee0,&DAT_100ee7e08);
  return;
}



/* Address: 0x1005da068 | FUN_1005da068 */

undefined * FUN_1005da068(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  ContiguousArray CVar4;
  _ContiguousArrayBuffer<undefined> _Var5;
  undefined4 *puVar6;
  
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005da13c);
    (*pcVar3)();
  }
  _Var5.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_4 != 0) {
    CVar4.unknown = &DAT_100fd4ee8;
    FUN_1000f7830(&DAT_100fd4ee8,&DAT_100c6ad00);
    _Var5 = Swift::ContiguousArray::_allocateBufferUninitialized(param_4,CVar4);
    *(long *)(_Var5.unknown + 0x10) = param_4;
    *(undefined8 *)(_Var5.unknown + 0x20) = param_1;
    *(undefined8 *)(_Var5.unknown + 0x28) = param_2;
    uVar1 = (undefined1)((ulong)param_3 >> 0x30);
    _Var5.unknown[0x36] = uVar1;
    uVar2 = (undefined2)((ulong)param_3 >> 0x20);
    *(undefined2 *)(_Var5.unknown + 0x34) = uVar2;
    *(int *)(_Var5.unknown + 0x30) = (int)param_3;
    param_4 = param_4 + -1;
    if (param_4 != 0) {
      puVar6 = (undefined4 *)(_Var5.unknown + 0x48);
      do {
        *(undefined8 *)(puVar6 + -4) = param_1;
        *(undefined8 *)(puVar6 + -2) = param_2;
        *puVar6 = (int)param_3;
        *(undefined1 *)((long)puVar6 + 6) = uVar1;
        *(undefined2 *)(puVar6 + 1) = uVar2;
        _swift_retain(param_1);
        puVar6 = puVar6 + 6;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    _swift_retain(param_1);
  }
  return _Var5.unknown;
}



/* Address: 0x1005da13c | FUN_1005da13c */

undefined8 FUN_1005da13c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4db0;
  FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005da18c | FUN_1005da18c */

undefined8 FUN_1005da18c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4db0;
  FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1005da1d4 | FUN_1005da1d4 */

void FUN_1005da1d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005da1e0 | FUN_1005da1e0 */

void FUN_1005da1e0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ef0,&DAT_100ee7e90);
  return;
}



/* Address: 0x1005da1f4 | FUN_1005da1f4 */

void FUN_1005da1f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return;
}



/* Address: 0x1005da218 | FUN_1005da218 */

int FUN_1005da218(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005da238 | FUN_1005da238 */

void FUN_1005da238(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return;
}



/* Address: 0x1005da280 | FUN_1005da280 */

void FUN_1005da280(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4ef8,&DAT_100ee7f10);
  return;
}



/* Address: 0x1005da294 | FUN_1005da294 */

void FUN_1005da294(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005da2a0 | FUN_1005da2a0 */

void FUN_1005da2a0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4f00,&DAT_100ee7fe8);
  return;
}



/* Address: 0x1005da2b4 | FUN_1005da2b4 */

void FUN_1005da2b4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4f08,&DAT_100ee8068);
  return;
}



/* Address: 0x1005da2c8 | FUN_1005da2c8 */

void FUN_1005da2c8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4f10,&DAT_100ee80e8);
  return;
}



/* Address: 0x1005da2dc | thunk_FUN_1005d9cf4 */

void thunk_FUN_1005d9cf4(void)

{
  FUN_1005d9cf4();
  return;
}



/* Address: 0x1005da2e0 | FUN_1005da2e0 */

void FUN_1005da2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1005da388(plVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1005da388 | FUN_1005da388 */

void FUN_1005da388(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1005da3f8,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1005da3f8 | FUN_1005da3f8 */

void FUN_1005da3f8(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  (*pcVar1)();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005da450 | FUN_1005da450 */

void FUN_1005da450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x0001005da4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005da4a4 | FUN_1005da4a4 */

void FUN_1005da4a4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_1006638e4();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  _swift_task_switch(FUN_1005da514,0,0);
  return;
}



/* Address: 0x1005da514 | FUN_1005da514 */

void FUN_1005da514(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005da590;
  FUN_1005da388(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,FUN_1005db288,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1005da590 | FUN_1005da590 */

void FUN_1005da590(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005da5f4;
  }
  else {
    pcVar1 = FUN_1005da64c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005da5f4 | FUN_1005da5f4 */

void FUN_1005da5f4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x20) + -8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005da648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


