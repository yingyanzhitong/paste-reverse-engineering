/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100607c00 | FUN_100607c00 */

uint * FUN_100607c00(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar7 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100607cb0;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100607cb0:
  uVar10 = ~uVar9;
  if (uVar4 < 2) {
    (**(code **)(lVar8 + 8))((ulong)((long)param_1 + uVar9 + 8) & uVar10,lVar6);
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100607d54;
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
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100607d54:
  if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar8 + 0x20))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar6);
    *(byte *)((long)param_1 + lVar1) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar3 = _memcpy(param_1,param_2,lVar1 + 1);
      return puVar3;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar8 + 0x20))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar6);
    *(byte *)((long)param_1 + lVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100607e0c | FUN_100607e0c */

int FUN_100607e0c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar5 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar1 = 0xfd;
  if ((uint)lVar5 < 4) {
    uVar1 = 0xfd - (2U >> (ulong)(((uint)lVar5 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_100607ed4;
  uVar6 = lVar5 + 1;
  uVar7 = (uint)uVar6;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar1 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100607ed4;
      goto LAB_100607e60;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100607e60:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
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
    return uVar1 + ((uint)uVar6 | uVar2) + 1;
  }
LAB_100607ed4:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + lVar5);
  if (uVar1 <= (*(byte *)((long)param_1 + lVar5) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x100607f3c | FUN_100607f3c */

void FUN_100607f3c(uint *param_1,uint param_2,uint param_3,long param_4)

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
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar6 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  bVar8 = 2;
  uVar3 = 0xfd;
  if ((uint)lVar6 < 4) {
    uVar3 = 0xfd - (2U >> (ulong)(((uint)lVar6 & 3) << 3));
  }
  sVar2 = lVar6 + 1;
  uVar9 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar9 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
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
      *(char *)((long)param_1 + lVar6) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x100608100 | FUN_100608100 */

uint FUN_100608100(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar4 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar4;
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



/* Address: 0x100608198 | FUN_100608198 */

void FUN_100608198(uint *param_1,uint param_2,long param_3)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  if (param_2 < 2) {
    *(char *)((long)param_1 +
             *(long *)(lVar4 + 0x40) +
             ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
             ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff))) = (char)param_2;
  }
  else {
    sVar1 = ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
            ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
    param_2 = param_2 - 2;
    uVar5 = (uint)sVar1;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + sVar1) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
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
      *(undefined1 *)((long)param_1 + sVar1) = 2;
      _bzero(param_1,sVar1);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100608278 | FUN_100608278 */

undefined1  [16] FUN_100608278(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [32];
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c67440,*(long *)(lVar2 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1006082ec | FUN_1006082ec */

ulong * FUN_1006082ec(ulong *param_1,ulong *param_2,long param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = *(uint *)(lVar10 + 0x54);
  uVar11 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  sVar8 = *(size_t *)(lVar10 + 0x40);
  if (uVar3 == 0) {
    sVar8 = sVar8 + 1;
  }
  sVar1 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + sVar8;
  if (((uint)uVar11 < 8 && (*(uint *)(lVar10 + 0x50) & 0x100000) == 0) && sVar1 < 0x19) {
    uVar4 = ~uVar11;
    if (uVar3 < 0x80000001) {
      uVar7 = *param_2;
      if (0xfffffffe < uVar7) {
        uVar7 = 0xffffffff;
      }
      if ((int)uVar7 != -1) {
LAB_1006083a8:
        puVar5 = _memcpy(param_1,param_2,sVar1);
        return puVar5;
      }
    }
    else {
      uVar7 = (long)param_2 + uVar11 + 8 & uVar4;
      (**(code **)(lVar10 + 0x30))(uVar7,uVar3,lVar9);
      iVar2 = 0;
      if ((int)uVar7 != 0) {
        iVar2 = (int)uVar7 + -1;
      }
      if (iVar2 != 0) goto LAB_1006083a8;
    }
    *param_1 = *param_2;
    uVar7 = (long)param_1 + uVar11 + 8;
    uVar11 = (long)param_2 + uVar11 + 8;
    uVar6 = uVar11 & uVar4;
    (**(code **)(lVar10 + 0x30))(uVar6,1,lVar9);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar10 + 0x10))(uVar7 & uVar4,uVar11 & uVar4,lVar9);
      (**(code **)(lVar10 + 0x38))(uVar7 & uVar4,0,1,lVar9);
    }
    else {
      _memcpy((void *)(uVar7 & uVar4),(void *)(uVar11 & uVar4),sVar8);
    }
  }
  else {
    uVar4 = *param_2;
    *param_1 = uVar4;
    param_1 = (ulong *)(uVar4 + ((ulong)((uint)uVar11 & 0xf8 ^ 0x1f8) & uVar11 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10060846c | FUN_10060846c */

void FUN_10060846c(ulong *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = ~uVar6;
  if (*(uint *)(lVar4 + 0x54) < 0x80000001) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((int)uVar2 != -1) {
      return;
    }
  }
  else {
    uVar2 = (long)param_1 + uVar6 + 8 & uVar5;
    (**(code **)(lVar4 + 0x30))(uVar2,*(uint *)(lVar4 + 0x54),lVar3);
    iVar1 = 0;
    if ((int)uVar2 != 0) {
      iVar1 = (int)uVar2 + -1;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  uVar6 = (long)param_1 + uVar6 + 8;
  uVar2 = uVar6 & uVar5;
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100608534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar6 & uVar5,lVar3);
  return;
}



/* Address: 0x100608538 | FUN_100608538 */

ulong * FUN_100608538(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar8 + 0x54);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = ~uVar10;
  sVar9 = *(size_t *)(lVar8 + 0x40);
  if (uVar2 < 0x80000001) {
    uVar5 = *param_2;
    if (0xfffffffe < uVar5) {
      uVar5 = 0xffffffff;
    }
    if ((int)uVar5 == -1) {
LAB_1006085f0:
      *param_1 = *param_2;
      uVar5 = (long)param_1 + uVar10 + 8;
      uVar10 = (long)param_2 + uVar10 + 8;
      uVar4 = uVar10 & uVar7;
      (**(code **)(lVar8 + 0x30))(uVar4,1,lVar6);
      if ((int)uVar4 == 0) {
        (**(code **)(lVar8 + 0x10))(uVar5 & uVar7,uVar10 & uVar7,lVar6);
        (**(code **)(lVar8 + 0x38))(uVar5 & uVar7,0,1,lVar6);
      }
      else {
        if (uVar2 == 0) {
          sVar9 = sVar9 + 1;
        }
        _memcpy((void *)(uVar5 & uVar7),(void *)(uVar10 & uVar7),sVar9);
      }
      return param_1;
    }
  }
  else {
    uVar5 = (long)param_2 + uVar10 + 8 & uVar7;
    (**(code **)(lVar8 + 0x30))(uVar5,uVar2,lVar6);
    iVar1 = 0;
    if ((int)uVar5 != 0) {
      iVar1 = (int)uVar5 + -1;
    }
    if (iVar1 == 0) goto LAB_1006085f0;
  }
  if (uVar2 == 0) {
    sVar9 = sVar9 + 1;
  }
  puVar3 = _memcpy(param_1,param_2,sVar9 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)));
  return puVar3;
}



/* Address: 0x100608680 | FUN_100608680 */

ulong * FUN_100608680(ulong *param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar1 = *(uint *)(lVar10 + 0x54);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = ~uVar12;
  sVar11 = *(size_t *)(lVar10 + 0x40);
  if (uVar1 < 0x80000001) {
    uVar6 = *param_2;
    if (0xfffffffe < uVar6) {
      uVar6 = 0xffffffff;
    }
    iVar5 = (int)uVar6 + 1;
    if (0xfffffffe < *param_1) {
LAB_1006087b0:
      if (iVar5 != 0) {
        uVar6 = (long)param_1 + uVar12 + 8;
        uVar2 = uVar6 & uVar8;
        (**(code **)(lVar10 + 0x30))(uVar2,1,lVar9);
        if ((int)uVar2 == 0) {
          (**(code **)(lVar10 + 8))(uVar6 & uVar8,lVar9);
        }
        goto LAB_1006087e8;
      }
      *param_1 = *param_2;
      uVar6 = (long)param_1 + uVar12 + 8;
      uVar12 = (long)param_2 + uVar12 + 8;
      pcVar7 = *(code **)(lVar10 + 0x30);
      uVar2 = uVar6 & uVar8;
      (*pcVar7)(uVar2,1,lVar9);
      uVar4 = uVar12 & uVar8;
      (*pcVar7)(uVar4,1,lVar9);
      if ((int)uVar2 != 0) {
        if ((int)uVar4 != 0) {
          if (uVar1 == 0) {
            sVar11 = sVar11 + 1;
          }
          goto LAB_1006088d0;
        }
        (**(code **)(lVar10 + 0x10))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
        pcVar7 = *(code **)(lVar10 + 0x38);
        goto LAB_1006088f4;
      }
      if ((int)uVar4 == 0) {
        (**(code **)(lVar10 + 0x18))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
        return param_1;
      }
      (**(code **)(lVar10 + 8))(uVar6 & uVar8,lVar9);
      if (uVar1 == 0) {
        sVar11 = sVar11 + 1;
      }
      goto LAB_1006088d0;
    }
  }
  else {
    pcVar7 = *(code **)(lVar10 + 0x30);
    uVar6 = (long)param_1 + uVar12 + 8 & uVar8;
    (*pcVar7)(uVar6,uVar1,lVar9);
    uVar2 = (long)param_2 + uVar12 + 8 & uVar8;
    (*pcVar7)(uVar2,uVar1,lVar9);
    iVar5 = 0;
    if ((int)uVar2 != 0) {
      iVar5 = (int)uVar2 + -1;
    }
    if ((uint)uVar6 < 2) goto LAB_1006087b0;
  }
  if (iVar5 != 0) {
LAB_1006087e8:
    if (uVar1 == 0) {
      sVar11 = sVar11 + 1;
    }
    puVar3 = _memcpy(param_1,param_2,sVar11 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)));
    return puVar3;
  }
  *param_1 = *param_2;
  uVar6 = (long)param_1 + uVar12 + 8;
  uVar12 = (long)param_2 + uVar12 + 8;
  uVar2 = uVar12 & uVar8;
  (**(code **)(lVar10 + 0x30))(uVar2,1,lVar9);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar10 + 0x10))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
    pcVar7 = *(code **)(lVar10 + 0x38);
LAB_1006088f4:
    (*pcVar7)(uVar6 & uVar8,0,1,lVar9);
    return param_1;
  }
  if (uVar1 == 0) {
    sVar11 = sVar11 + 1;
  }
LAB_1006088d0:
  _memcpy((void *)(uVar6 & uVar8),(void *)(uVar12 & uVar8),sVar11);
  return param_1;
}



/* Address: 0x100608940 | FUN_100608940 */

ulong * FUN_100608940(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar8 + 0x54);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = ~uVar10;
  sVar9 = *(size_t *)(lVar8 + 0x40);
  if (uVar2 < 0x80000001) {
    uVar5 = *param_2;
    if (0xfffffffe < uVar5) {
      uVar5 = 0xffffffff;
    }
    if ((int)uVar5 == -1) {
LAB_1006089f8:
      *param_1 = *param_2;
      uVar5 = (long)param_1 + uVar10 + 8;
      uVar10 = (long)param_2 + uVar10 + 8;
      uVar4 = uVar10 & uVar7;
      (**(code **)(lVar8 + 0x30))(uVar4,1,lVar6);
      if ((int)uVar4 == 0) {
        (**(code **)(lVar8 + 0x20))(uVar5 & uVar7,uVar10 & uVar7,lVar6);
        (**(code **)(lVar8 + 0x38))(uVar5 & uVar7,0,1,lVar6);
      }
      else {
        if (uVar2 == 0) {
          sVar9 = sVar9 + 1;
        }
        _memcpy((void *)(uVar5 & uVar7),(void *)(uVar10 & uVar7),sVar9);
      }
      return param_1;
    }
  }
  else {
    uVar5 = (long)param_2 + uVar10 + 8 & uVar7;
    (**(code **)(lVar8 + 0x30))(uVar5,uVar2,lVar6);
    iVar1 = 0;
    if ((int)uVar5 != 0) {
      iVar1 = (int)uVar5 + -1;
    }
    if (iVar1 == 0) goto LAB_1006089f8;
  }
  if (uVar2 == 0) {
    sVar9 = sVar9 + 1;
  }
  puVar3 = _memcpy(param_1,param_2,sVar9 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)));
  return puVar3;
}



/* Address: 0x100608a88 | FUN_100608a88 */

ulong * FUN_100608a88(ulong *param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + -8);
  uVar1 = *(uint *)(lVar10 + 0x54);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = ~uVar12;
  sVar11 = *(size_t *)(lVar10 + 0x40);
  if (uVar1 < 0x80000001) {
    uVar6 = *param_2;
    if (0xfffffffe < uVar6) {
      uVar6 = 0xffffffff;
    }
    iVar5 = (int)uVar6 + 1;
    if (0xfffffffe < *param_1) {
LAB_100608bb8:
      if (iVar5 != 0) {
        uVar6 = (long)param_1 + uVar12 + 8;
        uVar2 = uVar6 & uVar8;
        (**(code **)(lVar10 + 0x30))(uVar2,1,lVar9);
        if ((int)uVar2 == 0) {
          (**(code **)(lVar10 + 8))(uVar6 & uVar8,lVar9);
        }
        goto LAB_100608bf0;
      }
      *param_1 = *param_2;
      uVar6 = (long)param_1 + uVar12 + 8;
      uVar12 = (long)param_2 + uVar12 + 8;
      pcVar7 = *(code **)(lVar10 + 0x30);
      uVar2 = uVar6 & uVar8;
      (*pcVar7)(uVar2,1,lVar9);
      uVar4 = uVar12 & uVar8;
      (*pcVar7)(uVar4,1,lVar9);
      if ((int)uVar2 != 0) {
        if ((int)uVar4 != 0) {
          if (uVar1 == 0) {
            sVar11 = sVar11 + 1;
          }
          goto LAB_100608cd8;
        }
        (**(code **)(lVar10 + 0x20))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
        pcVar7 = *(code **)(lVar10 + 0x38);
        goto LAB_100608cfc;
      }
      if ((int)uVar4 == 0) {
        (**(code **)(lVar10 + 0x28))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
        return param_1;
      }
      (**(code **)(lVar10 + 8))(uVar6 & uVar8,lVar9);
      if (uVar1 == 0) {
        sVar11 = sVar11 + 1;
      }
      goto LAB_100608cd8;
    }
  }
  else {
    pcVar7 = *(code **)(lVar10 + 0x30);
    uVar6 = (long)param_1 + uVar12 + 8 & uVar8;
    (*pcVar7)(uVar6,uVar1,lVar9);
    uVar2 = (long)param_2 + uVar12 + 8 & uVar8;
    (*pcVar7)(uVar2,uVar1,lVar9);
    iVar5 = 0;
    if ((int)uVar2 != 0) {
      iVar5 = (int)uVar2 + -1;
    }
    if ((uint)uVar6 < 2) goto LAB_100608bb8;
  }
  if (iVar5 != 0) {
LAB_100608bf0:
    if (uVar1 == 0) {
      sVar11 = sVar11 + 1;
    }
    puVar3 = _memcpy(param_1,param_2,sVar11 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)));
    return puVar3;
  }
  *param_1 = *param_2;
  uVar6 = (long)param_1 + uVar12 + 8;
  uVar12 = (long)param_2 + uVar12 + 8;
  uVar2 = uVar12 & uVar8;
  (**(code **)(lVar10 + 0x30))(uVar2,1,lVar9);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(uVar6 & uVar8,uVar12 & uVar8,lVar9);
    pcVar7 = *(code **)(lVar10 + 0x38);
LAB_100608cfc:
    (*pcVar7)(uVar6 & uVar8,0,1,lVar9);
    return param_1;
  }
  if (uVar1 == 0) {
    sVar11 = sVar11 + 1;
  }
LAB_100608cd8:
  _memcpy((void *)(uVar6 & uVar8),(void *)(uVar12 & uVar8),sVar11);
  return param_1;
}



/* Address: 0x100608d48 | FUN_100608d48 */

int FUN_100608d48(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar6 = *(int *)(lVar9 + 0x54);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = iVar6 - 1;
  }
  uVar1 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar10 = *(long *)(lVar9 + 0x40);
  if (iVar6 == 0) {
    lVar10 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar9 + 0x50);
  if (param_2 <= uVar1 - 1) goto LAB_100608e04;
  lVar10 = lVar10 + ((ulong)bVar3 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar11 = (uint)lVar10;
  uVar8 = uVar11 << 3;
  if (uVar11 < 4) {
    uVar5 = (1 << (ulong)(uVar8 & 0x1f)) + (param_2 - uVar1) >> (ulong)(uVar8 & 0x1f);
    if (uVar5 < 0xff) {
      if (uVar5 == 0) goto LAB_100608e04;
      goto LAB_100608dc4;
    }
    if (uVar5 < 0xffff) {
      uVar5 = (uint)*(ushort *)((long)param_1 + lVar10);
    }
    else {
      uVar5 = *(uint *)((long)param_1 + lVar10);
    }
  }
  else {
LAB_100608dc4:
    uVar5 = (uint)*(byte *)((long)param_1 + lVar10);
  }
  if (uVar5 != 0) {
    uVar4 = 0;
    if (uVar11 < 4) {
      uVar4 = uVar5 - 1 << (ulong)(uVar8 & 0x1f);
    }
    if (uVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 4;
      if (uVar11 < 4) {
        uVar8 = uVar11;
      }
      if ((int)uVar8 < 3) {
        if (uVar8 == 1) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*param_1;
      }
      else {
        uVar8 = (uint)*param_1;
      }
    }
    return (uVar8 | uVar4) + uVar1;
  }
LAB_100608e04:
  if ((int)uVar4 < 0) {
    uVar4 = (int)param_1 + (uint)bVar3 + 8 & ~(uint)bVar3;
    (**(code **)(lVar9 + 0x30))();
    iVar6 = 0;
    if (uVar4 != 0) {
      iVar6 = uVar4 - 1;
    }
  }
  else {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar6 = (int)uVar7 + 1;
  }
  iVar2 = 0;
  if (iVar6 != 0) {
    iVar2 = iVar6 + -1;
  }
  return iVar2;
}



/* Address: 0x100608eb4 | FUN_100608eb4 */

void FUN_100608eb4(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  iVar14 = *(int *)(lVar9 + 0x54);
  uVar2 = 0;
  if (iVar14 != 0) {
    uVar2 = iVar14 - 1;
  }
  uVar10 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar10 = 0x7fffffff;
  }
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  sVar8 = *(size_t *)(lVar9 + 0x40);
  if (iVar14 == 0) {
    sVar8 = sVar8 + 1;
  }
  sVar1 = (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) + sVar8;
  uVar13 = (uint)sVar1;
  uVar7 = uVar13 << 3;
  uVar4 = (1 << (ulong)(uVar7 & 0x1f)) + (param_3 - uVar10) >> (ulong)(uVar7 & 0x1f);
  bVar6 = 2;
  if (0xfffe < uVar4) {
    bVar6 = 4;
  }
  if (uVar4 < 0xff) {
    bVar6 = uVar4 != 0;
  }
  bVar3 = 1;
  if (uVar13 < 4) {
    bVar3 = bVar6;
  }
  bVar6 = 0;
  if (uVar10 - 1 < param_3) {
    bVar6 = bVar3;
  }
  if (uVar10 - 1 < param_2) {
    param_2 = param_2 - uVar10;
    if (uVar13 < 4) {
      iVar14 = (param_2 >> (ulong)(uVar7 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar13 == 2) {
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
      iVar14 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar14;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar14;
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
      if ((int)uVar2 < 0) {
        puVar12 = (uint *)((ulong)((long)param_1 + uVar11 + 8) & ~uVar11);
        if (param_2 < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100609054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x38))(puVar12,param_2 + 2);
          return;
        }
        uVar7 = (uint)sVar8;
        uVar10 = 0x7fffffff;
        if (uVar7 < 4) {
          uVar10 = ~(-1 << (ulong)((uVar7 & 3) << 3));
        }
        if (uVar7 != 0) {
          uVar10 = uVar10 & param_2 - uVar2;
          uVar2 = 4;
          if (uVar7 < 4) {
            uVar2 = uVar7;
          }
          _bzero(puVar12,sVar8);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar12 = (char)uVar10;
            }
            else {
              *(short *)puVar12 = (short)uVar10;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar12 = (short)uVar10;
            *(char *)((long)puVar12 + 2) = (char)(uVar10 >> 0x10);
          }
          else {
            *puVar12 = uVar10;
          }
        }
      }
      else if ((int)(param_2 + 1) < 0) {
        *param_1 = (ulong)(param_2 + 0x80000001);
      }
      else {
        *param_1 = (ulong)param_2;
      }
    }
  }
  return;
}



/* Address: 0x100609134 | FUN_100609134 */

int FUN_100609134(ulong *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  if (*(uint *)(lVar3 + 0x54) < 0x80000001) {
    uVar4 = *param_1;
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    return (int)uVar4 + 1;
  }
  uVar2 = (int)param_1 + (uint)*(byte *)(lVar3 + 0x50) + 8 & (*(byte *)(lVar3 + 0x50) ^ 0xffffffff);
  (**(code **)(lVar3 + 0x30))();
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = uVar2 - 1;
  }
  return iVar1;
}



/* Address: 0x100609194 | FUN_100609194 */

void FUN_100609194(ulong *param_1,uint param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar1 = *(int *)(lVar6 + 0x54);
  uVar5 = 0;
  if (iVar1 != 0) {
    uVar5 = iVar1 - 1;
  }
  uVar7 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  bVar2 = *(byte *)(lVar6 + 0x50);
  uVar8 = ~(ulong)bVar2;
  sVar4 = *(size_t *)(lVar6 + 0x40);
  if (iVar1 == 0) {
    sVar4 = sVar4 + 1;
  }
  uVar3 = (uint)sVar4;
  if (uVar7 < param_2) {
    uVar3 = (bVar2 + 8 & (uint)uVar8) + uVar3;
    uVar5 = 0xffffffff;
    if (uVar3 < 4) {
      uVar5 = ~(-1 << (ulong)(uVar3 * 8 & 0x1f));
    }
    if (uVar3 != 0) {
      uVar5 = uVar5 & (uVar7 - param_2 ^ 0xffffffff);
      uVar7 = 4;
      if (uVar3 < 4) {
        uVar7 = uVar3;
      }
      _bzero(param_1,(ulong)uVar3);
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          *(char *)param_1 = (char)uVar5;
        }
        else {
          *(short *)param_1 = (short)uVar5;
        }
      }
      else if (uVar7 == 3) {
        *(short *)param_1 = (short)uVar5;
        *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar5;
      }
    }
  }
  else if (param_2 != 0) {
    if ((int)uVar5 < 0) {
      puVar9 = (uint *)((long)param_1 + (ulong)bVar2 + 8 & uVar8);
      if (param_2 <= uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010060930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))(puVar9,param_2 + 1);
        return;
      }
      uVar7 = 0xffffffff;
      if (uVar3 < 4) {
        uVar7 = ~(-1 << (ulong)((uVar3 & 3) << 3));
      }
      if (uVar3 != 0) {
        uVar7 = uVar7 & (uVar5 - param_2 ^ 0xffffffff);
        uVar5 = 4;
        if (uVar3 < 4) {
          uVar5 = uVar3;
        }
        _bzero(puVar9,sVar4);
        if ((int)uVar5 < 3) {
          if (uVar5 == 1) {
            *(char *)puVar9 = (char)uVar7;
          }
          else {
            *(short *)puVar9 = (short)uVar7;
          }
        }
        else if (uVar5 == 3) {
          *(short *)puVar9 = (short)uVar7;
          *(char *)((long)puVar9 + 2) = (char)(uVar7 >> 0x10);
        }
        else {
          *puVar9 = uVar7;
        }
      }
    }
    else {
      if ((int)param_2 < 0) {
        param_2 = param_2 & 0x7fffffff;
      }
      else {
        param_2 = param_2 - 1;
      }
      *param_1 = (ulong)param_2;
    }
  }
  return;
}



/* Address: 0x100609338 | FUN_100609338 */

int FUN_100609338(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Address: 0x10060938c | FUN_10060938c */

void FUN_10060938c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x1006093e8 | FUN_1006093e8 */

void FUN_1006093e8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb77ec);
  return;
}



/* Address: 0x1006093f4 | FUN_1006093f4 */

void FUN_1006093f4(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long local_38;
  long lStack_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x18);
    lStack_30 = local_38;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_28 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    }
  }
  return;
}



/* Address: 0x10060947c | FUN_10060947c */

long * FUN_10060947c(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar11 = *(long *)(lVar9 + -8);
  uVar6 = *(ulong *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar1 = uVar6;
  if (uVar6 <= *(ulong *)(lVar5 + 0x40)) {
    uVar1 = *(ulong *)(lVar5 + 0x40);
  }
  uVar8 = *(uint *)(lVar11 + 0x50) | *(uint *)(lVar5 + 0x50);
  uVar7 = uVar8 & 0xff;
  if ((7 < uVar7 || (uVar8 & 0x100000) != 0) || 0x18 < uVar1 + 1) {
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    _swift_retain();
    return (long *)(lVar5 + ((ulong)uVar7 + 0x10 & ((ulong)uVar7 ^ 0xffffffffffffffff)));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar2;
  if (2 < bVar2) {
    uVar10 = (uint)uVar1;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10060958c;
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
    uVar7 = uVar8 | bVar2 - 3 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_10060958c:
  if (uVar7 == 2) {
    puVar3 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,1,lVar9);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar9);
      (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar9);
    }
    else {
      _memcpy(param_1,param_2,uVar6);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar7 == 1) {
    (**(code **)(lVar5 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar7 != 0) {
      plVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar4;
    }
    (**(code **)(lVar5 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100609650 | FUN_100609650 */

void FUN_100609650(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar9 + -8);
  lVar10 = *(long *)(lVar1 + -8);
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 <= *(ulong *)(lVar4 + 0x40)) {
    uVar8 = *(ulong *)(lVar4 + 0x40);
  }
  bVar2 = *(byte *)((long)param_1 + uVar8);
  uVar6 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = (uint)uVar8;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1006096fc;
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
    uVar6 = uVar7 | bVar2 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1006096fc:
  if ((1 < uVar6) &&
     ((uVar6 != 2 ||
      (puVar3 = param_1, (**(code **)(lVar10 + 0x30))(param_1,1,lVar1), lVar9 = lVar1,
      lVar4 = lVar10, (int)puVar3 != 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100609720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1,lVar9);
  return;
}



/* Address: 0x100609758 | FUN_100609758 */

void * FUN_100609758(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint *puVar3;
  void *pvVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar12 = *(long *)(lVar10 + -8);
  uVar9 = *(ulong *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  uVar1 = uVar9;
  if (uVar9 <= *(ulong *)(lVar6 + 0x40)) {
    uVar1 = *(ulong *)(lVar6 + 0x40);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar2;
  if (2 < bVar2) {
    uVar11 = (uint)uVar1;
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100609814;
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
    uVar7 = uVar8 | bVar2 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_100609814:
  if (uVar7 == 2) {
    puVar3 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar10);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar10);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar10);
    }
    else {
      _memcpy(param_1,param_2,uVar9);
    }
    uVar5 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(lVar6 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      pvVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return pvVar4;
    }
    (**(code **)(lVar6 + 0x10))(param_1);
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar5;
  return param_1;
}



/* Address: 0x1006098e8 | FUN_1006098e8 */

uint * FUN_1006098e8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar3 + -8);
  uVar10 = *(ulong *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar1 = uVar10;
  if (uVar10 <= *(ulong *)(lVar13 + 0x40)) {
    uVar1 = *(ulong *)(lVar13 + 0x40);
  }
  uVar11 = (uint)uVar1;
  bVar6 = *(byte *)((long)param_1 + uVar1);
  uVar8 = (uint)bVar6;
  if (2 < bVar6) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1006099b0;
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
    uVar8 = uVar9 | bVar6 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_1006099b0:
  lVar5 = lVar2;
  lVar7 = lVar13;
  if ((uVar8 < 2) ||
     ((uVar8 == 2 &&
      (puVar4 = param_1, (**(code **)(lVar12 + 0x30))(param_1,1,lVar3), lVar5 = lVar3,
      lVar7 = lVar12, (int)puVar4 == 0)))) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar6;
  if (2 < bVar6) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100609a64;
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
    uVar8 = uVar9 | bVar6 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_100609a64:
  if (uVar8 == 2) {
    puVar4 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar10);
    }
    bVar6 = 2;
  }
  else {
    if (uVar8 != 1) {
      if (uVar8 == 0) {
        (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar2);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      puVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar4;
    }
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar2);
    bVar6 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar6;
  return param_1;
}



/* Address: 0x100609b58 | FUN_100609b58 */

void * FUN_100609b58(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint *puVar3;
  void *pvVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar12 = *(long *)(lVar10 + -8);
  uVar9 = *(ulong *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  uVar1 = uVar9;
  if (uVar9 <= *(ulong *)(lVar6 + 0x40)) {
    uVar1 = *(ulong *)(lVar6 + 0x40);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar2;
  if (2 < bVar2) {
    uVar11 = (uint)uVar1;
    uVar8 = 4;
    if (uVar11 < 4) {
      uVar8 = uVar11;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100609c14;
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
    uVar7 = uVar8 | bVar2 - 3 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_100609c14:
  if (uVar7 == 2) {
    puVar3 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar10);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar10);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar10);
    }
    else {
      _memcpy(param_1,param_2,uVar9);
    }
    uVar5 = 2;
  }
  else {
    if (uVar7 != 1) {
      if (uVar7 == 0) {
        (**(code **)(lVar6 + 0x20))(param_1);
        *(undefined1 *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      pvVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return pvVar4;
    }
    (**(code **)(lVar6 + 0x20))(param_1);
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar5;
  return param_1;
}



/* Address: 0x100609ce8 | FUN_100609ce8 */

uint * FUN_100609ce8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar3 + -8);
  uVar10 = *(ulong *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar1 = uVar10;
  if (uVar10 <= *(ulong *)(lVar13 + 0x40)) {
    uVar1 = *(ulong *)(lVar13 + 0x40);
  }
  uVar11 = (uint)uVar1;
  bVar6 = *(byte *)((long)param_1 + uVar1);
  uVar8 = (uint)bVar6;
  if (2 < bVar6) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100609db0;
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
    uVar8 = uVar9 | bVar6 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_100609db0:
  lVar5 = lVar2;
  lVar7 = lVar13;
  if ((uVar8 < 2) ||
     ((uVar8 == 2 &&
      (puVar4 = param_1, (**(code **)(lVar12 + 0x30))(param_1,1,lVar3), lVar5 = lVar3,
      lVar7 = lVar12, (int)puVar4 == 0)))) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar8 = (uint)bVar6;
  if (2 < bVar6) {
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100609e64;
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
    uVar8 = uVar9 | bVar6 - 3 << (ulong)(uVar11 << 3 & 0x1f);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_100609e64:
  if (uVar8 == 2) {
    puVar4 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar10);
    }
    bVar6 = 2;
  }
  else {
    if (uVar8 != 1) {
      if (uVar8 == 0) {
        (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar2);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      puVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar4;
    }
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar2);
    bVar6 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar6;
  return param_1;
}



/* Address: 0x100609f58 | FUN_100609f58 */

int FUN_100609f58(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(ulong *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  uVar2 = 4U >> (ulong)(((uint)uVar7 & 3) << 3) ^ 0xfc;
  if (3 < (uint)uVar7) {
    uVar2 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar2) goto LAB_10060a02c;
  uVar5 = uVar7 + 1;
  uVar8 = (uint)uVar5;
  uVar3 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar2 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_10060a02c;
      goto LAB_100609fb8;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_100609fb8:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar9 != 0) {
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar8 != 0) {
      uVar3 = 4;
      if (uVar8 < 4) {
        uVar3 = uVar8;
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
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + uVar2 + 1;
  }
LAB_10060a02c:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar7);
  if (uVar2 <= (*(byte *)((long)param_1 + uVar7) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x10060a094 | FUN_10060a094 */

void FUN_10060a094(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar7 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar8 = *(ulong *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  uVar3 = 4U >> (ulong)(((uint)uVar8 & 3) << 3) ^ 0xfc;
  if (3 < (uint)uVar8) {
    uVar3 = 0xfc;
  }
  sVar2 = uVar8 + 1;
  uVar10 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar10 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar10 << 3 & 0x1f)
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
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar10 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar10 == 2) {
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
      *(char *)((long)param_1 + uVar8) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x10060a264 | FUN_10060a264 */

uint FUN_10060a264(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  lVar6 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar7 = *(ulong *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = (uint)uVar7;
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



/* Address: 0x10060a308 | FUN_10060a308 */

void FUN_10060a308(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 < 3) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar4 = *(ulong *)(lVar2 + 0x40);
    if (*(int *)(lVar2 + 0x54) == 0) {
      uVar4 = uVar4 + 1;
    }
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    uVar4 = *(ulong *)(lVar2 + 0x40);
    if (*(int *)(lVar2 + 0x54) == 0) {
      uVar4 = uVar4 + 1;
    }
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    param_2 = param_2 - 3;
    uVar1 = (uint)uVar4;
    if (uVar1 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar1 << 3 & 0x1f)) + '\x03';
      if (uVar1 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar1 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar1) {
      uVar1 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar1 < 3) {
      if (uVar1 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar1 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10060a418 | FUN_10060a418 */

void FUN_10060a418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10060363c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),param_3);
  return;
}



/* Address: 0x10060a44c | FUN_10060a44c */

void FUN_10060a44c(undefined8 param_1)

{
  FUN_10060a468(param_1,FUN_100602994);
  return;
}



/* Address: 0x10060a468 | FUN_10060a468 */

void FUN_10060a468(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10060a490 | FUN_10060a490 */

void FUN_10060a490(undefined8 param_1)

{
  FUN_10060a468(param_1,FUN_100600728);
  return;
}



/* Address: 0x10060a4ac | FUN_10060a4ac */

void FUN_10060a4ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006016ec(param_1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10060a4dc | FUN_10060a4dc */

void FUN_10060a4dc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100602320(param_1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10060a50c | FUN_10060a50c */

void FUN_10060a50c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10060a530 | thunk_FUN_10060a50c */

void thunk_FUN_10060a50c(void)

{
  FUN_10060a50c();
  return;
}



/* Address: 0x10060a534 | thunk_FUN_100603200 */

void thunk_FUN_100603200(void)

{
  FUN_100603200();
  return;
}



/* Address: 0x10060a538 | thunk_FUN_1001670d0 */

void thunk_FUN_1001670d0(void)

{
  FUN_1001670d0();
  return;
}



/* Address: 0x10060a53c | thunk_FUN_100603e9c */

void thunk_FUN_100603e9c(void)

{
  thunk_FUN_100603e9c();
  return;
}



/* Address: 0x10060a540 | thunk_FUN_100606fbc */

void thunk_FUN_100606fbc(void)

{
  thunk_FUN_100606fbc();
  return;
}



/* Address: 0x10060a544 | thunk_FUN_10060749c */

void thunk_FUN_10060749c(void)

{
  FUN_10060749c();
  return;
}



/* Address: 0x10060a548 | thunk_FUN_1006031d8 */

void thunk_FUN_1006031d8(void)

{
  FUN_1006031d8();
  return;
}



/* Address: 0x10060a54c | FUN_10060a54c */

ulong FUN_10060a54c(ulong param_1)

{
  return param_1 >> 0x20;
}



/* Address: 0x10060a554 | FUN_10060a554 */

void FUN_10060a554(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 4) = param_1;
  return;
}



/* Address: 0x10060a55c | FUN_10060a55c */

undefined1  [16] FUN_10060a55c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 4;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10060a56c | FUN_10060a56c */

ulong FUN_10060a56c(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Address: 0x10060a578 | FUN_10060a578 */

undefined8 FUN_10060a578(void)

{
  return 0x29;
}



/* Address: 0x10060a580 | FUN_10060a580 */

undefined8 FUN_10060a580(void)

{
  return 0x11c;
}



/* Address: 0x10060a588 | FUN_10060a588 */

undefined8 FUN_10060a588(void)

{
  return 0xffff;
}



/* Address: 0x10060a590 | FUN_10060a590 */

undefined8 FUN_10060a590(void)

{
  return 0x106;
}



/* Address: 0x10060a598 | FUN_10060a598 */

undefined8 FUN_10060a598(void)

{
  return 0x1007;
}



/* Address: 0x10060a5a0 | FUN_10060a5a0 */

undefined8 FUN_10060a5a0(void)

{
  return 0x1002;
}



/* Address: 0x10060a5a8 | FUN_10060a5a8 */

undefined8 FUN_10060a5a8(void)

{
  return 0x1001;
}



/* Address: 0x10060a5b0 | FUN_10060a5b0 */

undefined8 FUN_10060a5b0(void)

{
  return 0x1006;
}



/* Address: 0x10060a5b8 | thunk_FUN_10060a5bc */

void thunk_FUN_10060a5bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6eb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67500,&DAT_100eea700);
  DAT_100fd6eb8 = pTVar1;
  return;
}



/* Address: 0x10060a5bc | FUN_10060a5bc */

void FUN_10060a5bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6eb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67500,&DAT_100eea700);
  DAT_100fd6eb8 = pTVar1;
  return;
}



/* Address: 0x10060a5fc | thunk_FUN_10060a600 */

void thunk_FUN_10060a600(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c675a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c675a0,&DAT_100eea728);
  DAT_100fd6ec0 = pTVar1;
  return;
}



/* Address: 0x10060a600 | FUN_10060a600 */

void FUN_10060a600(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c675a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c675a0,&DAT_100eea728);
  DAT_100fd6ec0 = pTVar1;
  return;
}



/* Address: 0x10060a640 | thunk_FUN_10060a644 */

void thunk_FUN_10060a644(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67640;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67640,&DAT_100eea750);
  DAT_100fd6ec8 = pTVar1;
  return;
}



/* Address: 0x10060a644 | FUN_10060a644 */

void FUN_10060a644(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67640;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67640,&DAT_100eea750);
  DAT_100fd6ec8 = pTVar1;
  return;
}



/* Address: 0x10060a684 | thunk_FUN_10060a688 */

void thunk_FUN_10060a688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ed0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c676e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c676e0,&DAT_100eea778);
  DAT_100fd6ed0 = pTVar1;
  return;
}



/* Address: 0x10060a688 | FUN_10060a688 */

void FUN_10060a688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ed0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c676e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c676e0,&DAT_100eea778);
  DAT_100fd6ed0 = pTVar1;
  return;
}


