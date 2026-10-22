/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100761af8 | FUN_100761af8 */

undefined1  [16] FUN_100761af8(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c76a78;
  uVar3 = *(ulong *)(param_1 + 0x28);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = &DAT_100c76a90;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x48);
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



/* Address: 0x100761b78 | FUN_100761b78 */

long * FUN_100761b78(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(lVar4 + -8);
  uVar2 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  sVar3 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar3 = sVar3 + 1;
  }
  if (((uint)uVar2 < 8 && (*(uint *)(lVar7 + 0x50) & 0x100000) == 0) &&
      sVar3 - (-uVar2 - 9 | uVar2) < 0x19) {
    *param_1 = *param_2;
    pvVar5 = (void *)((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
    pvVar6 = (void *)((long)param_2 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
    pvVar1 = pvVar6;
    (**(code **)(lVar7 + 0x30))(pvVar6,1,lVar4);
    if ((int)pvVar1 == 0) {
      (**(code **)(lVar7 + 0x10))(pvVar5,pvVar6,lVar4);
      (**(code **)(lVar7 + 0x38))(pvVar5,0,1,lVar4);
    }
    else {
      _memcpy(pvVar5,pvVar6,sVar3);
    }
    *(undefined1 *)((long)pvVar5 + sVar3) = *(undefined1 *)((long)pvVar6 + sVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100761c8c | FUN_100761c8c */

void FUN_100761c8c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = param_1 + uVar5 + 8;
  uVar2 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100761cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Address: 0x100761cf4 | FUN_100761cf4 */

undefined8 * FUN_100761cf4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x28);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar4 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar5 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar5;
  (**(code **)(lVar8 + 0x30))(pvVar5,1,lVar7);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x10))(pvVar4,pvVar5,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar4,0,1,lVar7);
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar6 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar4,pvVar5,sVar1);
  }
  if (iVar6 == 0) {
    sVar9 = sVar9 + 1;
  }
  *(undefined1 *)(sVar9 + (long)pvVar4) = *(undefined1 *)(sVar9 + (long)pvVar5);
  return param_1;
}



/* Address: 0x100761dc8 | FUN_100761dc8 */

undefined8 * FUN_100761dc8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x28);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar5 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar6 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar1 = pvVar5;
  (*pcVar9)(pvVar5,1,lVar7);
  pvVar2 = pvVar6;
  (*pcVar9)(pvVar6,1,lVar7);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x18))(pvVar5,pvVar6,lVar7);
      goto LAB_100761e9c;
    }
    (**(code **)(lVar8 + 8))(pvVar5,lVar7);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x10))(pvVar5,pvVar6,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar5,0,1,lVar7);
    goto LAB_100761e9c;
  }
  sVar4 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(pvVar5,pvVar6,sVar4);
LAB_100761e9c:
  lVar7 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + (long)pvVar5) = *(undefined1 *)(lVar7 + (long)pvVar6);
  return param_1;
}



/* Address: 0x100761ee8 | FUN_100761ee8 */

undefined8 * FUN_100761ee8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x28);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar4 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar5 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar5;
  (**(code **)(lVar8 + 0x30))(pvVar5,1,lVar7);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(pvVar4,pvVar5,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar4,0,1,lVar7);
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar6 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar4,pvVar5,sVar1);
  }
  if (iVar6 == 0) {
    sVar9 = sVar9 + 1;
  }
  *(undefined1 *)(sVar9 + (long)pvVar4) = *(undefined1 *)(sVar9 + (long)pvVar5);
  return param_1;
}



/* Address: 0x100761fbc | FUN_100761fbc */

undefined8 * FUN_100761fbc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x28);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar5 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar6 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar1 = pvVar5;
  (*pcVar9)(pvVar5,1,lVar7);
  pvVar2 = pvVar6;
  (*pcVar9)(pvVar6,1,lVar7);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x28))(pvVar5,pvVar6,lVar7);
      goto LAB_100762090;
    }
    (**(code **)(lVar8 + 8))(pvVar5,lVar7);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(pvVar5,pvVar6,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar5,0,1,lVar7);
    goto LAB_100762090;
  }
  sVar4 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(pvVar5,pvVar6,sVar4);
LAB_100762090:
  lVar7 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + (long)pvVar5) = *(undefined1 *)(lVar7 + (long)pvVar6);
  return param_1;
}



/* Address: 0x1007620dc | FUN_1007620dc */

int FUN_1007620dc(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = iVar3 - 1;
  }
  uVar2 = uVar6;
  if (uVar6 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar1 = 1;
  if (iVar3 == 0) {
    lVar1 = 2;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar4 = *(byte *)(lVar9 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10076219c;
  uVar8 = lVar1 + *(long *)(lVar9 + 0x40) + ((ulong)bVar4 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff))
  ;
  uVar7 = (uint)uVar8;
  uVar5 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar10 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_10076219c;
      goto LAB_10076215c;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_10076215c:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar10 != 0) {
    uVar6 = 0;
    if (uVar7 < 4) {
      uVar6 = uVar10 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar5 = 4;
      if (uVar7 < 4) {
        uVar5 = uVar7;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)(uint)*param_1;
      }
    }
    return uVar2 + ((uint)uVar8 | uVar6) + 1;
  }
LAB_10076219c:
  if (uVar6 < 0x7fffffff) {
    uVar8 = *param_1;
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar3 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar3 = (int)uVar8;
    }
    return iVar3;
  }
  uVar6 = (int)param_1 + (uint)bVar4 + 8 & ~(uint)bVar4;
  (**(code **)(lVar9 + 0x30))();
  iVar3 = 0;
  if (uVar6 != 0) {
    iVar3 = uVar6 - 1;
  }
  return iVar3;
}



/* Address: 0x100762250 | FUN_100762250 */

void FUN_100762250(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  iVar12 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar12 != 0) {
    uVar2 = iVar12 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar7 = 0x7ffffffe;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar12 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = sVar6 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 1;
  uVar5 = (uint)sVar1;
  bVar10 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    if (uVar5 < 4) {
      uVar3 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
      bVar10 = 2;
      if (0xfffe < uVar3) {
        bVar10 = 4;
      }
      if (uVar3 < 0xff) {
        bVar10 = uVar3 != 0;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar12;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar12;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *param_1 = (ulong)param_2;
        }
        else {
          *param_1 = 0;
          *(uint *)param_1 = param_2 + 0x80000001;
        }
      }
      else {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100762474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1007624f4 | FUN_1007624f4 */

void FUN_1007624f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *param_1 = param_2;
  uStack_50 = param_10;
  local_48 = param_11;
  lVar3 = 0;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_7;
  uStack_60 = param_8;
  local_58 = param_9;
  FUN_100761aec(0,&local_78);
  iVar1 = *(int *)(lVar3 + 0x4c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x50)) = param_4;
  return;
}



/* Address: 0x10076258c | FUN_10076258c */

void FUN_10076258c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  int iVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,OVar3.value);
  lVar4 = 0;
  _swift_getTupleTypeMetadata3(0,param_5,param_6,lVar6,"base1 base2 base3 ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  iVar2 = *(int *)(lVar4 + 0x40);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + iVar1,param_3,param_6);
  lVar4 = *(long *)(lVar6 + -8);
  (**(code **)(lVar4 + 0x10))(param_1 + iVar2,param_4,lVar6);
  uStack_68 = param_10;
  uVar5 = 0;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_10075d188(0,&local_90);
  _swift_storeEnumTagMultiPayload(param_1,uVar5,0);
  uVar5 = param_4;
  (**(code **)(*(long *)(param_7 + -8) + 0x30))(param_4,1,param_7);
  (**(code **)(lVar4 + 8))(param_4,lVar6);
  if ((int)uVar5 == 1) {
    uStack_68 = param_10;
    lVar6 = 0;
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    FUN_10075d17c(0,&local_90);
    uVar5 = 2;
  }
  else {
    uStack_68 = param_10;
    lVar6 = 0;
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    FUN_10075d17c(0,&local_90);
    uVar5 = 3;
  }
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x44)) = uVar5;
  return;
}



/* Address: 0x100762724 | FUN_100762724 */

undefined1  [16] FUN_100762724(long param_1)

{
  Optional OVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  long local_140;
  code *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar17 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lStack_98 = *(undefined8 *)(param_1 + 0x18);
  lVar22 = *(long *)(param_1 + 0x10);
  uVar26 = *(undefined8 *)(param_1 + 0x30);
  uVar24 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0xff;
  local_f0 = lVar22;
  local_a0 = lVar22;
  _swift_getAssociatedTypeWitness
            (0xff,uVar24,lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar28 = *(undefined8 *)(param_1 + 0x38);
  uVar25 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = 0xff;
  local_f8 = uVar3;
  local_90 = uVar13;
  local_88 = uVar3;
  uStack_80 = uVar24;
  uStack_78 = uVar26;
  local_70 = uVar15;
  FUN_100761aec(0xff,&local_a0);
  uVar3 = 0xff;
  local_100 = lVar12;
  _swift_getAssociatedTypeWitness(0xff,uVar25,lVar12,puVar9,puVar17);
  lVar5 = 0xff;
  local_108 = uVar3;
  local_a0 = lVar22;
  lStack_98 = lVar12;
  local_90 = uVar27;
  local_88 = uVar3;
  uStack_80 = uVar24;
  uStack_78 = uVar25;
  local_70 = uVar28;
  FUN_100761aec(0xff,&local_a0);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,uVar13,puVar9,puVar17);
  lVar6 = 0xff;
  local_118 = uVar3;
  local_a0 = lVar22;
  lStack_98 = lVar12;
  local_90 = uVar13;
  local_88 = uVar3;
  uStack_80 = uVar24;
  uStack_78 = uVar25;
  local_70 = uVar15;
  FUN_100761aec(0xff,&local_a0);
  lVar7 = 0;
  local_110 = lVar4;
  _swift_getTupleTypeMetadata3(0,lVar4,lVar5,lVar6,0,0);
  lVar20 = *(long *)(lVar7 + -8);
  uVar11 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = ((long)&local_140 - uVar11) - uVar11;
  plVar21 = (long *)(lVar18 - uVar11);
  lVar4 = 0;
  local_a0 = lVar22;
  lStack_98 = lVar12;
  local_90 = uVar13;
  local_88 = uVar24;
  uStack_80 = uVar25;
  uStack_78 = uVar15;
  FUN_10075d188(0,&local_a0);
  lVar22 = *(long *)(lVar4 + -8);
  puVar16 = (undefined8 *)
            (((long)plVar21 - uVar11) - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar22 + 0x10))(puVar16,unaff_x20,lVar4);
  puVar8 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar4);
  iVar2 = (int)puVar8;
  if (iVar2 < 3) {
    local_130 = (long)&local_140 - uVar11;
    local_128 = lVar18;
    local_120 = (long)plVar21 - uVar11;
    if (iVar2 != 0) {
      if (iVar2 != 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100762e0c);
        (*pcVar14)();
      }
      local_f0 = *puVar16;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      uVar3 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,local_f8,local_108,OVar1.value,0,0);
      uVar13 = 0xff;
      FUN_1006883a0(0xff,uVar3);
      lVar18 = 0;
      _swift_getTupleTypeMetadata3(0,puVar17,lVar7,uVar13,"task upstreams buffer ",0);
      iVar2 = *(int *)(lVar18 + 0x30);
      _swift_release(*(undefined8 *)((long)puVar16 + (long)*(int *)(lVar18 + 0x40)));
      lVar12 = local_120;
      (**(code **)(lVar20 + 0x20))(local_120,(long)puVar16 + (long)iVar2,lVar7);
      (**(code **)(lVar22 + 8))(unaff_x20,lVar4);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar4,5);
      pcVar14 = *(code **)(lVar20 + 0x10);
      (*pcVar14)(plVar21,lVar12,lVar7);
      lVar22 = local_110;
      local_100 = (long)*(int *)(lVar7 + 0x30);
      local_118 = (long)*(int *)(lVar7 + 0x40);
      local_108 = *plVar21;
      local_138 = *(code **)(*(long *)(local_110 + -8) + 8);
      (*local_138)(plVar21,local_110);
      lVar18 = local_128;
      (*pcVar14)(local_128,lVar12,lVar7);
      local_140 = (long)*(int *)(lVar7 + 0x40);
      local_f8 = *(long *)(lVar18 + *(int *)(lVar7 + 0x30));
      pcVar23 = *(code **)(*(long *)(lVar5 + -8) + 8);
      (*pcVar23)(lVar18 + *(int *)(lVar7 + 0x30),lVar5);
      lVar4 = local_130;
      (*pcVar14)(local_130,lVar12,lVar7);
      iVar2 = *(int *)(lVar7 + 0x30);
      lVar12 = *(long *)(lVar4 + *(int *)(lVar7 + 0x40));
      pcVar19 = *(code **)(*(long *)(lVar6 + -8) + 8);
      (*pcVar19)(lVar4 + *(int *)(lVar7 + 0x40),lVar6);
      (*pcVar23)(lVar4 + iVar2,lVar5);
      pcVar14 = local_138;
      (*local_138)(lVar4,lVar22);
      (*pcVar19)(lVar18 + local_140,lVar6);
      (*pcVar14)(lVar18,lVar22);
      (*pcVar19)((long)plVar21 + local_118,lVar6);
      lVar6 = local_108;
      (*pcVar23)((long)plVar21 + local_100,lVar5);
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar4 = local_120;
      lVar5 = local_f8;
      if (lVar6 != 0) {
        puVar9 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar11 = *(ulong *)(puVar9 + 0x10);
        puVar17 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1007b784c(puVar17,uVar11 + 1,1,puVar9);
        }
        *(ulong *)(puVar17 + 0x10) = uVar11 + 1;
        *(long *)(puVar17 + uVar11 * 8 + 0x20) = lVar6;
        lVar4 = local_120;
        lVar5 = local_f8;
      }
      local_120 = lVar4;
      local_f8 = lVar5;
      if (lVar5 != 0) {
        puVar9 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar17;
        if (((ulong)puVar9 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar11 = *(ulong *)(puVar10 + 0x10);
        puVar17 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_1007b784c(puVar17,uVar11 + 1,1,puVar10);
        }
        *(ulong *)(puVar17 + 0x10) = uVar11 + 1;
        *(long *)(puVar17 + uVar11 * 8 + 0x20) = lVar5;
      }
      if (lVar12 != 0) {
        puVar9 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar17;
        if (((ulong)puVar9 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar11 = *(ulong *)(puVar10 + 0x10);
        puVar17 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_1007b784c(puVar17,uVar11 + 1,1,puVar10);
        }
        *(ulong *)(puVar17 + 0x10) = uVar11 + 1;
        *(long *)(puVar17 + uVar11 * 8 + 0x20) = lVar12;
      }
      (**(code **)(lVar20 + 8))(lVar4,lVar7);
      lVar4 = local_f0;
      goto LAB_100762d44;
    }
    OVar1 = Swift::Optional::typeMetadataAccessor();
    lVar5 = local_f0;
    lVar4 = local_100;
    lVar6 = CONCAT71(extraout_var,OVar1.value);
    lVar7 = 0;
    _swift_getTupleTypeMetadata3(0,local_f0,local_100,lVar6,"base1 base2 base3 ",0);
    iVar2 = *(int *)(lVar7 + 0x30);
    (**(code **)(*(long *)(lVar6 + -8) + 8))((long)puVar16 + (long)*(int *)(lVar7 + 0x40),lVar6);
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar16 + (long)iVar2,lVar4);
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar16,lVar5);
  }
  else {
    if (1 < iVar2 - 3U) {
      puVar17 = (undefined *)0x0;
      lVar4 = 0;
      if (iVar2 != 5) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100762c30);
        (*pcVar14)();
      }
      goto LAB_100762d44;
    }
    pcVar14 = *(code **)(lVar22 + 8);
    (*pcVar14)(puVar16,lVar4);
    (*pcVar14)(unaff_x20,lVar4);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar4,5);
  }
  puVar17 = (undefined *)0x0;
  lVar4 = 0;
LAB_100762d44:
  auVar29._8_8_ = puVar17;
  auVar29._0_8_ = lVar4;
  return auVar29;
}



/* Address: 0x100762e0c | FUN_100762e0c */

void FUN_100762e0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  long lVar7;
  undefined7 extraout_var_01;
  long lVar8;
  undefined7 extraout_var_02;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 unaff_x20;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_1b0;
  undefined2 uStack_1a3;
  char acStack_1a1 [8];
  char acStack_199 [7];
  char acStack_192 [8];
  undefined1 auStack_18a [7];
  undefined1 auStack_183 [19];
  long alStack_170 [4];
  undefined8 *local_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  long local_e0;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar14 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x38);
  uVar18 = *(undefined8 *)(param_3 + 0x20);
  lVar5 = 0xff;
  local_110 = param_2;
  local_e8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,lVar22,uVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var,OVar3.value);
  lVar15 = (long)alStack_170 -
           (*(long *)(*(long *)(local_e0 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(param_3 + 0x30);
  lVar23 = *(long *)(param_3 + 0x18);
  lVar6 = 0xff;
  local_118 = lVar15;
  _swift_getAssociatedTypeWitness(0xff,lVar19,lVar23,puVar1,puVar14);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar15 = lVar15 - (*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0);
  lVar20 = *(long *)(param_3 + 0x28);
  lVar21 = *(long *)(param_3 + 0x10);
  lVar7 = 0xff;
  local_120 = lVar15;
  _swift_getAssociatedTypeWitness(0xff,lVar20,lVar21,puVar1,puVar14);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar15 = lVar15 - (*(long *)(*(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0);
  lVar8 = 0;
  local_128 = lVar15;
  local_a0 = lVar21;
  lStack_98 = lVar23;
  local_90 = uVar18;
  lStack_88 = lVar20;
  local_80 = lVar19;
  lStack_78 = lVar22;
  FUN_10075d188(0,&local_a0);
  local_108 = *(long *)(lVar8 + -8);
  uVar16 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = (undefined8 *)(lVar15 - uVar16);
  puVar17 = (undefined8 *)((long)local_f0 - uVar16);
  (**(code **)(local_108 + 0x10))(puVar17,unaff_x20,lVar8);
  puVar13 = puVar17;
  local_100 = lVar8;
  local_f8 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar8);
  iVar4 = (int)puVar13;
  if (iVar4 == 0) {
    OVar3 = Swift::Optional::typeMetadataAccessor();
    local_138 = CONCAT71(extraout_var_02,OVar3.value);
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,lVar21,lVar23,local_138,"base1 base2 base3 ",0);
    local_130 = (long)*(int *)(lVar8 + 0x30);
    local_140 = (long)*(int *)(lVar8 + 0x40);
    local_150 = puVar17 + -8;
    local_148 = puVar17;
    *(undefined1 *)((long)puVar17 + -0x3c) = 0x20;
    *(undefined4 *)(puVar17 + -8) = 0x6b736174;
    *(undefined2 *)((long)puVar17 + -0x33) = 0x2073;
    builtin_strncpy((char *)((long)puVar17 + -0x3b),"upstream",8);
    builtin_strncpy((char *)((long)puVar17 + -0x29),"amContin",8);
    builtin_strncpy((char *)((long)puVar17 + -0x31),"downstre",8);
    builtin_strncpy((char *)((long)puVar17 + -0x22),"nuation ",8);
    *(undefined4 *)((long)puVar17 + -0x1a) = 0x66667562;
    *(undefined4 *)((long)puVar17 + -0x17) = 0x20726566;
    *(undefined1 *)((long)puVar17 + -0x13) = 0;
    puVar14 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    uVar9 = 0xff;
    local_c0 = puVar14;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar7;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    uVar10 = 0xff;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar6;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    uVar11 = 0xff;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar5;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    uVar12 = 0xff;
    _swift_getTupleTypeMetadata3(0xff,uVar9,uVar10,uVar11,0,0);
    uVar9 = 0xff;
    local_b8 = uVar12;
    _swift_getTupleTypeMetadata3(0xff,lVar7,lVar6,local_e0,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::Result::typeMetadataAccessor();
    local_b0 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
    uVar10 = 0xff;
    FUN_1006883a0(0xff,uVar9);
    lVar8 = 0;
    local_a8 = uVar10;
    _swift_getTupleTypeMetadata(0,0x10004,&local_c0,local_150,0);
    puVar13 = local_148;
    alStack_170[3] = (long)local_f0 + (long)*(int *)(lVar8 + 0x30);
    local_150 = (undefined8 *)(long)*(int *)(lVar8 + 0x40);
    local_148 = (undefined8 *)(long)*(int *)(lVar8 + 0x50);
    *local_f0 = local_e8;
    uVar9 = 0xff;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar7;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    uVar10 = 0xff;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar6;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    uVar11 = 0xff;
    local_a0 = lVar21;
    lStack_98 = lVar23;
    local_90 = uVar18;
    lStack_88 = lVar5;
    local_80 = lVar20;
    lStack_78 = lVar19;
    local_70 = lVar22;
    FUN_100761aec(0xff,&local_a0);
    lVar8 = 0;
    _swift_getTupleTypeMetadata3(0,uVar9,uVar10,uVar11,0,0);
    lVar15 = local_128;
    iVar4 = *(int *)(lVar8 + 0x30);
    alStack_170[2] = (long)*(int *)(lVar8 + 0x40);
    alStack_170[1] = lVar7;
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_128,1,1,lVar7);
    puVar13[-2] = lVar19;
    puVar13[-1] = lVar22;
    lVar8 = alStack_170[3];
    FUN_1007624f4(alStack_170[3],0,lVar15,0,lVar21,lVar23,uVar18,lVar7,lVar20);
    lVar7 = local_120;
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(local_120,1,1,lVar6);
    puVar13[-2] = lVar19;
    puVar13[-1] = lVar22;
    FUN_1007624f4(lVar8 + iVar4,0,lVar7,0,lVar21,lVar23,uVar18,lVar6,lVar20);
    lVar7 = local_118;
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(local_118,1,1,lVar5);
    puVar13[-2] = lVar19;
    puVar13[-1] = lVar22;
    FUN_1007624f4(lVar8 + alStack_170[2],0,lVar7,0,lVar21,lVar23,uVar18,lVar5,lVar20);
    puVar13 = local_f0;
    *(undefined8 *)((long)local_f0 + (long)local_150) = local_110;
    _swift_retain(local_e8);
    uVar18 = 0;
    _swift_getTupleTypeMetadata3(0,alStack_170[1],lVar6,local_e0,0,0);
    thunk_FUN_100683d64();
    lVar5 = local_100;
    *(undefined8 *)((long)puVar13 + (long)local_148) = uVar18;
    _swift_storeEnumTagMultiPayload(puVar13,local_100,2);
    (**(code **)(local_108 + 0x28))(unaff_x20,puVar13,lVar5);
    puVar13 = local_f8;
    (**(code **)(*(long *)(local_138 + -8) + 8))((long)local_f8 + local_140);
    (**(code **)(*(long *)(lVar23 + -8) + 8))((long)puVar13 + local_130,lVar23);
    (**(code **)(*(long *)(lVar21 + -8) + 8))(puVar13,lVar21);
    return;
  }
  if (iVar4 < 3) {
    if (iVar4 == 1) {
      _swift_release(*local_f8);
      puVar14 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar13 = (undefined8 *)0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar7;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar9 = 0xff;
      local_e8 = puVar13;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar6;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar10 = 0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar5;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      lVar5 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,local_e8,uVar9,uVar10,0,0);
      uVar18 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,lVar7,lVar6,local_e0,0,0);
      uVar9 = 0xff;
      FUN_1006883a0(0xff,uVar18);
      lVar6 = 0;
      _swift_getTupleTypeMetadata3(0,puVar14,lVar5,uVar9,"task upstreams buffer ",0);
      iVar4 = *(int *)(lVar6 + 0x30);
      _swift_release(*(undefined8 *)((long)local_f8 + (long)*(int *)(lVar6 + 0x40)));
    }
    else {
      _swift_release(*local_f8);
      local_e8 = puVar17 + -8;
      *(undefined1 *)((long)puVar17 + -0x3c) = 0x20;
      *(undefined4 *)(puVar17 + -8) = 0x6b736174;
      *(undefined2 *)((long)puVar17 + -0x33) = 0x2073;
      builtin_strncpy((char *)((long)puVar17 + -0x3b),"upstream",8);
      builtin_strncpy((char *)((long)puVar17 + -0x29),"amContin",8);
      builtin_strncpy((char *)((long)puVar17 + -0x31),"downstre",8);
      builtin_strncpy((char *)((long)puVar17 + -0x22),"nuation ",8);
      *(undefined4 *)((long)puVar17 + -0x1a) = 0x66667562;
      *(undefined4 *)((long)puVar17 + -0x17) = 0x20726566;
      *(undefined1 *)((long)puVar17 + -0x13) = 0;
      puVar14 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      puVar13 = (undefined8 *)0xff;
      local_c0 = puVar14;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar7;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar9 = 0xff;
      local_f0 = puVar13;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar6;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar10 = 0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar5;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar11 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,local_f0,uVar9,uVar10,0,0);
      uVar9 = 0xff;
      local_b8 = uVar11;
      _swift_getTupleTypeMetadata3(0xff,lVar7,lVar6,local_e0,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_b0 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar10 = 0xff;
      FUN_1006883a0(0xff,uVar9);
      lVar8 = 0;
      local_a8 = uVar10;
      _swift_getTupleTypeMetadata(0,0x10004,&local_c0,local_e8,0);
      iVar4 = *(int *)(lVar8 + 0x30);
      _swift_release(*(undefined8 *)((long)local_f8 + (long)*(int *)(lVar8 + 0x50)));
      uVar9 = 0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar7;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar10 = 0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar6;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      uVar11 = 0xff;
      local_a0 = lVar21;
      lStack_98 = lVar23;
      local_90 = uVar18;
      lStack_88 = lVar5;
      local_80 = lVar20;
      lStack_78 = lVar19;
      local_70 = lVar22;
      FUN_100761aec(0xff,&local_a0);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3(0,uVar9,uVar10,uVar11,0,0);
    }
    local_f8 = (undefined8 *)((long)local_f8 + (long)iVar4);
    lVar6 = *(long *)(lVar5 + -8);
  }
  else {
    lVar6 = local_108;
    lVar5 = local_100;
    if (1 < iVar4 - 3U) {
      if (iVar4 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100763504);
        (*pcVar2)();
      }
      goto LAB_100763898;
    }
  }
  (**(code **)(lVar6 + 8))(local_f8,lVar5);
LAB_100763898:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10076389c);
  (*pcVar2)();
}



/* Address: 0x10076389c | FUN_10076389c */

undefined1  [16] FUN_10076389c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  Optional OVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  CancellationError CVar15;
  CancellationError CVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *unaff_x20;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_130;
  undefined2 uStack_123;
  char acStack_121 [8];
  char acStack_119 [7];
  char acStack_112 [8];
  undefined1 auStack_10a [7];
  undefined1 auStack_103 [19];
  long local_f0 [4];
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar17 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uStack_c8 = *(undefined8 *)(param_3 + 0x18);
  local_d0 = *(undefined **)(param_3 + 0x10);
  uStack_a8 = *(undefined8 *)(param_3 + 0x30);
  local_b0 = *(undefined8 *)(param_3 + 0x28);
  uVar6 = 0xff;
  local_f0[0] = param_1;
  local_f0[1] = param_2;
  local_a0 = local_d0;
  lStack_98 = uStack_c8;
  _swift_getAssociatedTypeWitness
            (0xff,local_b0,local_d0,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uStack_78 = uStack_a8;
  uStack_80 = local_b0;
  uVar21 = *(undefined8 *)(param_3 + 0x20);
  local_f0[3] = *(undefined8 *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar24 = *(undefined8 *)(param_3 + 0x38);
  uStack_b8 = *(undefined8 *)(param_3 + 0x38);
  local_c0 = *(undefined8 *)(param_3 + 0x30);
  uVar7 = 0xff;
  local_f0[2] = uVar9;
  local_90 = (undefined *)uVar21;
  local_88 = uVar6;
  local_70 = uVar24;
  FUN_100761aec(0xff,&local_a0);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_c0,uVar9,puVar2,puVar17);
  local_a0 = local_d0;
  local_90 = (undefined *)local_f0[3];
  lStack_98 = local_f0[2];
  uStack_80 = local_b0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  uVar9 = 0xff;
  local_88 = uVar8;
  FUN_100761aec(0xff,&local_a0);
  uVar10 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar24,uVar21,puVar2,puVar17);
  uStack_c8 = local_f0[2];
  uStack_a8 = local_c0;
  lStack_98 = local_f0[2];
  local_a0 = local_d0;
  uStack_78 = local_c0;
  uStack_80 = local_b0;
  uVar11 = 0xff;
  local_90 = (undefined *)uVar21;
  local_88 = uVar10;
  local_70 = uVar24;
  FUN_100761aec(0xff,&local_a0);
  lVar12 = 0;
  _swift_getTupleTypeMetadata3(0,uVar7,uVar9,uVar11,0,0);
  lVar19 = *(long *)(lVar12 + -8);
  puVar25 = (undefined8 *)((long)local_f0 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_80 = uStack_a8;
  local_88 = local_b0;
  lVar13 = 0;
  local_90 = (undefined *)uVar21;
  uStack_78 = uVar24;
  FUN_10075d188(0,&local_a0);
  lVar20 = *(long *)(lVar13 + -8);
  puVar22 = (undefined8 *)((long)puVar25 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar20 + 0x10))(puVar22);
  puVar14 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar13);
  iVar5 = (int)puVar14;
  if (iVar5 < 3) {
    if (iVar5 == 1) {
      local_c0 = *puVar22;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      local_b0 = lVar19;
      OVar4 = Swift::Optional::typeMetadataAccessor();
      uVar7 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar6,uVar8,OVar4.value,0,0);
      uVar6 = 0xff;
      FUN_1006883a0(0xff,uVar7);
      lVar13 = 0;
      _swift_getTupleTypeMetadata3(0,puVar17,lVar12,uVar6,"task upstreams buffer ",0);
      uVar6 = *(undefined8 *)((long)puVar22 + (long)*(int *)(lVar13 + 0x40));
      pcVar23 = *(code **)(local_b0 + 0x20);
      (*pcVar23)(puVar25,(long)puVar22 + (long)*(int *)(lVar13 + 0x30),lVar12);
      pcVar3 = *(code **)(lVar20 + 8);
      (*pcVar3)();
      _swift_storeEnumTagMultiPayload();
      if (local_f0[0] == 0) {
        *puVar25 = local_f0[1];
      }
      else {
        if (local_f0[0] == 1) {
          iVar5 = *(int *)(lVar12 + 0x30);
        }
        else {
          if (local_f0[0] != 2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100763dcc);
            (*pcVar3)();
          }
          iVar5 = *(int *)(lVar12 + 0x40);
        }
        *(long *)((long)puVar25 + (long)iVar5) = local_f0[1];
      }
      (*pcVar3)();
      iVar5 = *(int *)(lVar13 + 0x30);
      iVar1 = *(int *)(lVar13 + 0x40);
      *unaff_x20 = local_c0;
      (*pcVar23)((long)unaff_x20 + (long)iVar5,puVar25,lVar12);
      *(undefined8 *)((long)unaff_x20 + (long)iVar1) = uVar6;
      _swift_storeEnumTagMultiPayload();
      uVar18 = 0xf000000000000007;
      local_f0[1] = 0xf00000000000000f;
    }
    else {
      if (iVar5 != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100763dd4);
        (*pcVar3)();
      }
      _swift_release(*puVar22);
      *(undefined1 *)((long)puVar22 + -0x3c) = 0x20;
      *(undefined4 *)(puVar22 + -8) = 0x6b736174;
      *(undefined2 *)((long)puVar22 + -0x33) = 0x2073;
      builtin_strncpy((char *)((long)puVar22 + -0x3b),"upstream",8);
      builtin_strncpy((char *)((long)puVar22 + -0x29),"amContin",8);
      builtin_strncpy((char *)((long)puVar22 + -0x31),"downstre",8);
      builtin_strncpy((char *)((long)puVar22 + -0x22),"nuation ",8);
      *(undefined4 *)((long)puVar22 + -0x1a) = 0x66667562;
      *(undefined4 *)((long)puVar22 + -0x17) = 0x20726566;
      *(undefined1 *)((long)puVar22 + -0x13) = 0;
      puVar17 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      local_a0 = puVar17;
      lStack_98 = lVar12;
      OVar4 = Swift::Optional::typeMetadataAccessor();
      uVar7 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar6,uVar8,OVar4.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar6 = 0xff;
      FUN_1006883a0(0xff,uVar7);
      lVar13 = 0;
      local_88 = uVar6;
      _swift_getTupleTypeMetadata(0,0x10004,&local_a0,puVar22 + -8,0);
      iVar5 = *(int *)(lVar13 + 0x30);
      _swift_release(*(undefined8 *)((long)puVar22 + (long)*(int *)(lVar13 + 0x50)));
      (**(code **)(lVar19 + 8))((long)puVar22 + (long)iVar5,lVar12);
      uVar18 = 0;
    }
  }
  else {
    if (iVar5 < 5) {
      if (iVar5 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100763dd0);
        (*pcVar3)();
      }
      (**(code **)(lVar20 + 8))(puVar22,lVar13);
    }
    else if (iVar5 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100763dd8);
      (*pcVar3)();
    }
    CVar15 = Swift::CancellationError::typeMetadataAccessor();
    CVar16 = CVar15;
    FUN_10076915c();
    _swift_allocError(CVar15.unknown,CVar16.unknown,0,0);
    Swift::CancellationError::init();
    uVar18 = (ulong)CVar15.unknown | 0x8000000000000000;
  }
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = local_f0[1];
  return auVar26;
}



/* Address: 0x100763dd8 | FUN_100763dd8 */

void FUN_100763dd8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  Optional OVar8;
  bool bVar9;
  Result RVar10;
  int iVar11;
  code *pcVar12;
  undefined7 extraout_var;
  long lVar13;
  long lVar14;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  undefined7 extraout_var_02;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  UnsafeContinuation UVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  code *pcVar30;
  code *pcVar31;
  long *unaff_x20;
  code *pcVar32;
  code *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
  undefined *puVar39;
  code *pcVar40;
  undefined1 auStack_310 [4];
  undefined1 auStack_30c [9];
  undefined1 auStack_303 [10];
  undefined1 auStack_2f9 [7];
  undefined1 auStack_2f2 [8];
  undefined1 auStack_2ea [7];
  undefined1 auStack_2e3 [11];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  undefined1 *local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  code *local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  code *local_240;
  long local_238;
  long local_230;
  long local_228;
  code *local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  code *local_1f0;
  undefined *local_1e8;
  code *local_1e0;
  code *local_1d8;
  long local_1d0;
  long local_1c8;
  code *local_1c0;
  code *local_1b8;
  long local_1b0;
  code *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  code *local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  code *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  code *local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  long local_d0;
  code *local_c8;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar29 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar24 = *(undefined8 *)(param_5 + 0x38);
  uVar25 = *(undefined8 *)(param_5 + 0x20);
  pcVar12 = (code *)0xff;
  local_140 = param_1;
  local_138 = (code *)param_4;
  local_100 = (code *)param_2;
  local_f0 = (code *)param_3;
  _swift_getAssociatedTypeWitness();
  local_d8 = pcVar12;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  pcVar33 = (code *)CONCAT71(extraout_var,OVar8.value);
  local_118 = *(long *)(pcVar33 + -8);
  uVar26 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_2a0 = auStack_2d0 + -uVar26;
  local_1d0 = (long)local_2a0 - uVar26;
  local_198 = *(long *)(pcVar12 + -8);
  uVar26 = *(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_2c8 = local_1d0 - uVar26;
  local_2a8 = local_2c8 - uVar26;
  lVar27 = local_2a8 - uVar26;
  uVar35 = *(undefined8 *)(param_5 + 0x30);
  uVar36 = *(undefined8 *)(param_5 + 0x18);
  lVar13 = 0;
  local_228 = lVar27;
  local_c8 = pcVar33;
  _swift_getAssociatedTypeWitness(0,uVar35,uVar36,puVar5,puVar29);
  local_170 = *(long *)(lVar13 + -8);
  uVar26 = *(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_2b8 = lVar27 - uVar26;
  local_260 = local_2b8 - uVar26;
  local_2b0 = local_260 - uVar26;
  pcVar12 = (code *)(local_2b0 - uVar26);
  uVar38 = *(undefined8 *)(param_5 + 0x28);
  puVar39 = *(undefined **)(param_5 + 0x10);
  lVar27 = 0xff;
  local_2c0 = param_5;
  local_240 = pcVar12;
  _swift_getAssociatedTypeWitness(0xff,uVar38,puVar39,puVar5,puVar29);
  lVar14 = 0;
  _swift_getTupleTypeMetadata3(0,lVar27,lVar13,pcVar33,0,0);
  local_1c8 = *(long *)(lVar14 + -8);
  lVar28 = (long)pcVar12 - (*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1f8 = lVar28;
  local_178 = lVar14;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_00,OVar8.value);
  local_e0 = *(code **)(lVar14 + -8);
  uVar26 = *(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_210 = lVar28 - uVar26;
  local_270 = local_210 - uVar26;
  local_258 = local_270 - uVar26;
  local_298 = local_258 - uVar26;
  local_280 = local_298 - uVar26;
  local_278 = (code *)(local_280 - uVar26);
  local_1f0 = local_278 + -uVar26;
  local_110 = *(long *)(lVar27 + -8);
  uVar26 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_238 = (long)local_1f0 - uVar26;
  local_230 = local_238 - uVar26;
  local_268 = local_230 - uVar26;
  local_248 = local_268 - uVar26;
  puVar29 = (undefined *)(local_248 - uVar26);
  local_1e8 = puVar29;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  lVar28 = CONCAT71(extraout_var_01,OVar8.value);
  local_e8 = *(code **)(lVar28 + -8);
  uVar26 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_218 = (long)puVar29 - uVar26;
  local_208 = local_218 - uVar26;
  local_200 = local_208 - uVar26;
  local_250 = local_200 - uVar26;
  local_288 = local_250 - uVar26;
  local_290 = local_288 - uVar26;
  pcVar12 = (code *)(local_290 - uVar26);
  lVar15 = 0xff;
  local_1d8 = pcVar12;
  local_128 = lVar27;
  local_a0 = puVar39;
  lStack_98 = uVar36;
  local_90 = (undefined *)uVar25;
  local_88 = (code *)lVar27;
  local_80 = uVar38;
  uStack_78 = uVar35;
  local_70 = uVar24;
  FUN_100761aec(0xff,&local_a0);
  lVar27 = 0xff;
  local_f8 = lVar13;
  local_a0 = puVar39;
  lStack_98 = uVar36;
  local_90 = (undefined *)uVar25;
  local_88 = (code *)lVar13;
  local_80 = uVar38;
  uStack_78 = uVar35;
  local_70 = uVar24;
  FUN_100761aec(0xff,&local_a0);
  local_88 = local_d8;
  lVar13 = 0xff;
  local_a0 = puVar39;
  lStack_98 = uVar36;
  local_90 = (undefined *)uVar25;
  local_80 = uVar38;
  uStack_78 = uVar35;
  local_70 = uVar24;
  FUN_100761aec(0xff,&local_a0);
  lVar16 = 0;
  local_1a0 = lVar13;
  local_190 = lVar15;
  local_180 = lVar27;
  _swift_getTupleTypeMetadata3(0,lVar15,lVar27,lVar13,0,0);
  local_130 = *(long *)(lVar16 + -8);
  uVar26 = *(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_188 = pcVar12 + -uVar26;
  pcVar30 = local_188 + -uVar26;
  pcVar17 = (code *)0x0;
  local_1a8 = pcVar30;
  local_160 = puVar39;
  local_158 = uVar38;
  local_150 = uVar36;
  local_148 = uVar25;
  local_108 = uVar35;
  local_d0 = lVar16;
  local_a0 = puVar39;
  lStack_98 = uVar36;
  local_90 = (undefined *)uVar25;
  local_88 = (code *)uVar38;
  local_80 = uVar35;
  uStack_78 = uVar24;
  FUN_10075d188(0,&local_a0);
  pcVar33 = local_c8;
  lVar13 = *(long *)(pcVar17 + -8);
  pcVar30 = pcVar30 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar18 = (code *)0x0;
  _swift_getTupleTypeMetadata3(0,lVar28,lVar14,local_c8,0,0);
  pcVar12 = local_100;
  local_168 = *(long *)(pcVar18 + -8);
  uVar26 = *(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1e0 = pcVar30 + -uVar26;
  local_1b0 = (long)local_1e0 - uVar26;
  pcVar40 = (code *)(local_1b0 - uVar26);
  local_100 = *(code **)(local_e8 + 0x10);
  local_120 = lVar28;
  (*local_100)(pcVar40,pcVar12,lVar28);
  local_1b8 = (code *)(long)*(int *)(pcVar18 + 0x30);
  pcVar32 = *(code **)(local_e0 + 0x10);
  (*pcVar32)(pcVar40 + (long)local_1b8,local_f0,lVar14);
  iVar2 = *(int *)(pcVar18 + 0x40);
  pcVar31 = *(code **)(local_118 + 0x10);
  local_f0 = pcVar18;
  (*pcVar31)(pcVar40 + iVar2,local_138,pcVar33);
  (**(code **)(lVar13 + 0x10))(pcVar30,unaff_x20,pcVar17);
  pcVar12 = pcVar30;
  _swift_getEnumCaseMultiPayload(pcVar30,pcVar17);
  iVar11 = (int)pcVar12;
  if (2 < iVar11) {
    if (iVar11 < 5) {
      if (iVar11 != 4) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e44);
        (*pcVar12)();
      }
      (**(code **)(local_168 + 8))(pcVar40,local_f0);
      pcVar12 = *(code **)(lVar13 + 8);
      pcVar40 = pcVar30;
    }
    else {
      if (iVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e4c);
        (*pcVar12)();
      }
      pcVar12 = *(code **)(local_168 + 8);
      pcVar17 = local_f0;
    }
    (*pcVar12)(pcVar40,pcVar17);
    local_a0 = local_160;
    lStack_98 = local_150;
    local_90 = (undefined *)local_148;
    local_88 = (code *)local_158;
    local_80 = local_108;
    lVar13 = 0;
    uStack_78 = uVar24;
    FUN_100769150(0,&local_a0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(local_140,1,1,lVar13);
    return;
  }
  local_1c0 = pcVar17;
  local_220 = pcVar31;
  if (iVar11 == 1) {
    local_138 = *(code **)pcVar30;
    puVar29 = &DAT_100fe2d00;
    FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
    lVar28 = 0xff;
    FUN_1006883a0(0xff,local_178);
    lVar27 = local_d0;
    pcVar12 = (code *)0x0;
    local_208 = lVar28;
    _swift_getTupleTypeMetadata3(0,puVar29,local_d0,lVar28,"task upstreams buffer ",0);
    local_188 = pcVar12;
    uVar25 = *(undefined8 *)(pcVar30 + *(int *)(pcVar12 + 0x40));
    (**(code **)(local_130 + 0x20))(local_1a8,pcVar30 + *(int *)(pcVar12 + 0x30),lVar27);
    local_1e0 = *(code **)(lVar13 + 8);
    (*local_1e0)(unaff_x20,pcVar17);
    _swift_storeEnumTagMultiPayload(unaff_x20,pcVar17,6);
    pcVar12 = local_100;
    lVar15 = local_120;
    lVar27 = local_1b0;
    lVar13 = (long)*(int *)(local_f0 + 0x30);
    lVar37 = (long)*(int *)(local_f0 + 0x40);
    (*local_100)(local_1b0,pcVar40,local_120);
    (*pcVar32)(lVar27 + lVar13,pcVar40 + (long)local_1b8,lVar14);
    (*pcVar31)(lVar27 + lVar37,pcVar40 + iVar2,local_c8);
    lVar16 = local_110;
    local_1b8 = *(code **)(local_110 + 0x30);
    lVar19 = lVar27;
    (*local_1b8)(lVar27,1,local_128);
    lVar28 = local_170;
    local_200 = lVar13;
    if ((int)lVar19 != 1) {
      (*pcVar12)(local_1d8,lVar27,lVar15);
      pcVar12 = *(code **)(local_170 + 0x30);
      lVar13 = lVar27 + lVar13;
      (*pcVar12)(lVar13,1,local_f8);
      if ((int)lVar13 == 1) {
        lVar27 = lVar27 + lVar37;
        (**(code **)(local_198 + 0x30))(lVar27,1,local_d8);
        lVar28 = local_128;
        puVar29 = local_1e8;
        pcVar33 = local_1f0;
        lVar13 = local_248;
        if ((int)lVar27 == 1) {
          local_d8 = *(code **)(lVar16 + 0x20);
          (*local_d8)(local_1e8,local_1d8,local_128);
          (**(code **)(lVar16 + 0x10))(lVar13,puVar29,lVar28);
          lVar19 = local_d0;
          pcVar17 = local_1a8;
          (*pcVar32)(pcVar33,local_1a8 +
                             (long)*(int *)(local_d0 + 0x30) + (long)*(int *)(local_180 + 0x4c),
                     lVar14);
          lVar16 = local_f8;
          (*pcVar12)(pcVar33,1,local_f8);
          pcVar12 = local_d8;
          lVar15 = local_178;
          lVar27 = local_1f8;
          if ((int)pcVar33 == 1) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e50);
            (*pcVar12)();
          }
          iVar2 = *(int *)(lVar19 + 0x40);
          iVar11 = *(int *)(local_1a0 + 0x4c);
          iVar3 = *(int *)(local_178 + 0x30);
          iVar4 = *(int *)(local_178 + 0x40);
          (*local_d8)(local_1f8,lVar13,lVar28);
          (**(code **)(local_170 + 0x20))(lVar27 + iVar3,local_1f0,lVar16);
          (*local_220)(lVar27 + iVar4,pcVar17 + (long)iVar2 + (long)iVar11,local_c8);
          FUN_100679d80(lVar27,local_208);
          lVar16 = local_d0;
          (**(code **)(local_1c8 + 8))(lVar27,lVar15);
          (**(code **)(local_168 + 8))(pcVar40,local_f0);
          pcVar33 = local_e8;
          lVar13 = local_120;
          iVar2 = *(int *)(local_190 + 0x4c);
          (**(code **)(local_e8 + 8))(pcVar17 + iVar2,local_120);
          (*pcVar12)(pcVar17 + iVar2,local_1e8,lVar28);
          (**(code **)(local_110 + 0x38))(pcVar17 + iVar2,0,1,lVar28);
          pcVar12 = local_e0;
          goto LAB_100765184;
        }
      }
LAB_100765e68:
      (**(code **)(local_110 + 8))(local_1d8,local_128);
LAB_100765e84:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e88);
      (*pcVar12)();
    }
    pcVar17 = *(code **)(local_170 + 0x30);
    lVar15 = lVar27 + lVar13;
    (*pcVar17)(lVar15,1,local_f8);
    pcVar33 = local_d8;
    lVar16 = local_198;
    pcVar12 = local_278;
    if ((int)lVar15 == 1) {
      lVar13 = lVar27 + lVar37;
      (**(code **)(local_198 + 0x30))(lVar13,1,local_d8);
      if ((int)lVar13 == 1) goto LAB_100765e84;
      local_1d8 = *(code **)(lVar16 + 0x20);
      (*local_1d8)(local_228,lVar27 + lVar37,pcVar33);
      pcVar12 = local_1a8;
      lVar13 = local_288;
      (*local_100)(local_288,local_1a8 + *(int *)(local_190 + 0x4c),local_120);
      lVar28 = lVar13;
      (*local_1b8)(lVar13,1,local_128);
      lVar27 = local_280;
      if ((int)lVar28 == 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e8c);
        (*pcVar12)();
      }
      (*pcVar32)(local_280,
                 pcVar12 + (long)*(int *)(local_d0 + 0x30) + (long)*(int *)(local_180 + 0x4c),lVar14
                );
      lVar15 = local_f8;
      lVar19 = lVar27;
      (*pcVar17)(lVar27,1,local_f8);
      pcVar12 = local_d8;
      lVar28 = local_1d0;
      if ((int)lVar19 == 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e94);
        (*pcVar12)();
      }
      (**(code **)(lVar16 + 0x10))(local_1d0,local_228,local_d8);
      local_100 = *(code **)(lVar16 + 0x38);
      (*local_100)(lVar28,0,1,pcVar12);
      lVar19 = local_178;
      lVar16 = local_1f8;
      iVar2 = *(int *)(local_178 + 0x30);
      iVar11 = *(int *)(local_178 + 0x40);
      (**(code **)(local_110 + 0x20))(local_1f8,lVar13,local_128);
      (**(code **)(local_170 + 0x20))(lVar16 + iVar2,lVar27,lVar15);
      pcVar33 = local_c8;
      lVar27 = local_118;
      (**(code **)(local_118 + 0x20))(lVar16 + iVar11,lVar28,local_c8);
      FUN_100679d80(lVar16,local_208);
      (**(code **)(local_1c8 + 8))(lVar16,lVar19);
      (**(code **)(local_168 + 8))(pcVar40,local_f0);
      lVar16 = local_d0;
      pcVar17 = local_1a8;
      lVar13 = (long)*(int *)(local_d0 + 0x40) + (long)*(int *)(local_1a0 + 0x4c);
      (**(code **)(lVar27 + 8))(local_1a8 + lVar13,pcVar33);
      (*local_1d8)(pcVar17 + lVar13,local_228,pcVar12);
      (*local_100)(pcVar17 + lVar13,0,1,pcVar12);
      pcVar12 = local_e0;
      pcVar33 = local_e8;
      lVar13 = local_120;
    }
    else {
      (*pcVar32)(local_278,lVar27 + lVar13,lVar14);
      lVar27 = lVar27 + lVar37;
      (**(code **)(lVar16 + 0x30))(lVar27,1,pcVar33);
      if ((int)lVar27 != 1) {
        local_110 = lVar28;
        local_128 = local_f8;
        local_1d8 = pcVar12;
        goto LAB_100765e68;
      }
      local_d8 = *(code **)(lVar28 + 0x20);
      (*local_d8)(local_240,pcVar12,local_f8);
      pcVar17 = local_1a8;
      lVar13 = local_290;
      (*local_100)(local_290,local_1a8 + *(int *)(local_190 + 0x4c),local_120);
      lVar19 = local_128;
      lVar37 = lVar13;
      (*local_1b8)(lVar13,1,local_128);
      lVar16 = local_d0;
      lVar15 = local_178;
      lVar27 = local_1f8;
      if ((int)lVar37 == 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e90);
        (*pcVar12)();
      }
      iVar2 = *(int *)(local_d0 + 0x40);
      iVar11 = *(int *)(local_1a0 + 0x4c);
      iVar3 = *(int *)(local_178 + 0x30);
      iVar4 = *(int *)(local_178 + 0x40);
      (**(code **)(local_110 + 0x20))(local_1f8,lVar13,lVar19);
      lVar19 = local_f8;
      pcVar33 = local_240;
      (**(code **)(lVar28 + 0x10))(lVar27 + iVar3,local_240,local_f8);
      (*local_220)(lVar27 + iVar4,pcVar17 + (long)iVar2 + (long)iVar11,local_c8);
      FUN_100679d80(lVar27,local_208);
      (**(code **)(local_1c8 + 8))(lVar27,lVar15);
      (**(code **)(local_168 + 8))(pcVar40,local_f0);
      pcVar12 = local_e0;
      lVar13 = (long)*(int *)(lVar16 + 0x30) + (long)*(int *)(local_180 + 0x4c);
      (**(code **)(local_e0 + 8))(pcVar17 + lVar13,lVar14);
      (*local_d8)(pcVar17 + lVar13,pcVar33,lVar19);
      (**(code **)(lVar28 + 0x38))(pcVar17 + lVar13,0,1,lVar19);
      pcVar33 = local_e8;
      lVar13 = local_120;
    }
LAB_100765184:
    lVar27 = local_1b0;
    (**(code **)(pcVar12 + 8))(local_1b0 + local_200,lVar14);
    (**(code **)(pcVar33 + 8))(lVar27,lVar13);
    pcVar12 = local_1c0;
    (*local_1e0)(unaff_x20,local_1c0);
    lVar13 = local_130;
    iVar2 = *(int *)(local_188 + 0x30);
    iVar11 = *(int *)(local_188 + 0x40);
    *unaff_x20 = (long)local_138;
    (**(code **)(local_130 + 0x10))((long)unaff_x20 + (long)iVar2,pcVar17,lVar16);
    *(undefined8 *)((long)unaff_x20 + (long)iVar11) = uVar25;
    _swift_storeEnumTagMultiPayload(unaff_x20,pcVar12,1);
    local_a0 = local_160;
    lStack_98 = local_150;
    local_90 = (undefined *)local_148;
    local_88 = (code *)local_158;
    local_80 = local_108;
    lVar27 = 0;
    uStack_78 = uVar24;
    FUN_100769150(0,&local_a0);
    (**(code **)(*(long *)(lVar27 + -8) + 0x38))(local_140,1,1,lVar27);
    pcVar12 = *(code **)(lVar13 + 8);
    goto LAB_100765e18;
  }
  local_138 = pcVar32;
  if (iVar11 != 2) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e48);
    (*pcVar12)();
  }
  local_1b0 = *(long *)pcVar30;
  pcVar40[-0x3c] = (code)0x20;
  *(undefined4 *)(pcVar40 + -0x40) = 0x6b736174;
  *(undefined2 *)(pcVar40 + -0x33) = 0x2073;
  *(undefined8 *)(pcVar40 + -0x3b) = 0x6d61657274737075;
  *(undefined8 *)(pcVar40 + -0x29) = 0x6e69746e6f436d61;
  *(undefined8 *)(pcVar40 + -0x31) = 0x657274736e776f64;
  *(undefined8 *)(pcVar40 + -0x22) = 0x206e6f697461756e;
  *(undefined4 *)(pcVar40 + -0x1a) = 0x66667562;
  *(undefined4 *)(pcVar40 + -0x17) = 0x20726566;
  pcVar40[-0x13] = (code)0x0;
  puVar29 = &DAT_100fe2d00;
  FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
  lVar28 = local_d0;
  lVar27 = local_178;
  lStack_98 = local_d0;
  local_a0 = puVar29;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_248 = CONCAT71(extraout_var_02,OVar8.value);
  Swift::Result::typeMetadataAccessor();
  local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
  uVar25 = 0xff;
  FUN_1006883a0(0xff,lVar27);
  lVar15 = 0;
  local_88 = (code *)uVar25;
  _swift_getTupleTypeMetadata(0,0x10004,&local_a0,pcVar40 + -0x40,0);
  pcVar18 = *(code **)(pcVar30 + *(int *)(lVar15 + 0x40));
  local_1f8 = lVar15;
  puVar29 = *(undefined **)(pcVar30 + *(int *)(lVar15 + 0x50));
  (**(code **)(local_130 + 0x20))(local_188,pcVar30 + *(int *)(lVar15 + 0x30),lVar28);
  pcVar17 = (code *)0x0;
  local_a0 = puVar29;
  FUN_1006883a0(0,lVar27);
  _swift_getWitnessTable(0x100c6d780,pcVar17);
  bVar9 = (extension_Swift)::Swift::Collection::get_isEmpty();
  pcVar33 = local_1c0;
  pcVar12 = local_1e0;
  if (!bVar9) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100765e40);
    (*pcVar12)();
  }
  local_1f0 = *(code **)(lVar13 + 8);
  local_1e8 = puVar29;
  (*local_1f0)(unaff_x20,local_1c0);
  _swift_storeEnumTagMultiPayload(unaff_x20,pcVar33,6);
  pcVar33 = local_100;
  lVar27 = local_120;
  lVar28 = (long)*(int *)(local_f0 + 0x30);
  iVar11 = *(int *)(local_f0 + 0x40);
  (*local_100)(pcVar12,pcVar40,local_120);
  (*local_138)(pcVar12 + lVar28,pcVar40 + (long)local_1b8,lVar14);
  (*local_220)(pcVar12 + iVar11,pcVar40 + iVar2,local_c8);
  local_1a8 = *(code **)(local_110 + 0x30);
  pcVar30 = pcVar12;
  (*local_1a8)(pcVar12,1,local_128);
  lVar13 = local_250;
  local_278 = pcVar17;
  local_1d8 = pcVar18;
  if ((int)pcVar30 != 1) {
    (*pcVar33)(local_250,pcVar12,lVar27);
    local_1b8 = *(code **)(local_170 + 0x30);
    pcVar33 = pcVar12 + lVar28;
    (*local_1b8)(pcVar33,1,local_f8);
    lVar27 = local_190;
    if ((int)pcVar33 == 1) {
      local_240 = *(code **)(local_198 + 0x30);
      pcVar33 = pcVar12 + iVar11;
      local_228 = lVar28;
      (*local_240)(pcVar33,1,local_d8);
      lVar28 = local_110;
      if ((int)pcVar33 == 1) {
        (**(code **)(local_168 + 8))(pcVar40,local_f0);
        lVar19 = local_128;
        lVar15 = local_268;
        pcVar18 = *(code **)(lVar28 + 0x20);
        (*pcVar18)(local_268,lVar13,local_128);
        pcVar33 = local_e8;
        lVar13 = local_120;
        pcVar17 = local_188;
        iVar2 = *(int *)(lVar27 + 0x4c);
        (**(code **)(local_e8 + 8))(local_188 + iVar2,local_120);
        (*pcVar18)(pcVar17 + iVar2,lVar15,lVar19);
        (**(code **)(lVar28 + 0x38))(pcVar17 + iVar2,0,1,lVar19);
        lVar28 = local_228;
        goto LAB_1007653ac;
      }
    }
LAB_100765eb4:
    (**(code **)(local_110 + 8))(local_250,local_128);
LAB_100765ed0:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100765ed4);
    (*pcVar12)();
  }
  local_1b8 = *(code **)(local_170 + 0x30);
  pcVar33 = pcVar12 + lVar28;
  (*local_1b8)(pcVar33,1,local_f8);
  pcVar18 = local_d8;
  lVar27 = local_198;
  lVar13 = local_298;
  if ((int)pcVar33 == 1) {
    local_240 = *(code **)(local_198 + 0x30);
    pcVar33 = pcVar12 + iVar11;
    (*local_240)(pcVar33,1,local_d8);
    if ((int)pcVar33 == 1) goto LAB_100765ed0;
    (**(code **)(local_168 + 8))(pcVar40,local_f0);
    lVar15 = local_2a8;
    pcVar33 = *(code **)(lVar27 + 0x20);
    (*pcVar33)(local_2a8,pcVar12 + iVar11,pcVar18);
    pcVar17 = local_188;
    lVar13 = (long)*(int *)(local_d0 + 0x40) + (long)*(int *)(local_1a0 + 0x4c);
    (**(code **)(local_118 + 8))(local_188 + lVar13,local_c8);
    (*pcVar33)(pcVar17 + lVar13,lVar15,pcVar18);
    (**(code **)(lVar27 + 0x38))(pcVar17 + lVar13,0,1,pcVar18);
    lVar13 = local_120;
    lVar19 = local_128;
    pcVar33 = local_e8;
    lVar27 = local_190;
  }
  else {
    local_228 = lVar28;
    (*local_138)(local_298,pcVar12 + lVar28,lVar14);
    local_240 = *(code **)(local_198 + 0x30);
    pcVar33 = pcVar12 + iVar11;
    (*local_240)(pcVar33,1,local_d8);
    lVar27 = local_d0;
    if ((int)pcVar33 != 1) {
      local_110 = local_170;
      local_128 = local_f8;
      local_250 = lVar13;
      goto LAB_100765eb4;
    }
    (**(code **)(local_168 + 8))(pcVar40,local_f0);
    lVar16 = local_f8;
    lVar15 = local_170;
    lVar28 = local_2b0;
    pcVar33 = *(code **)(local_170 + 0x20);
    (*pcVar33)(local_2b0,lVar13,local_f8);
    pcVar18 = local_e0;
    pcVar17 = local_188;
    lVar13 = (long)*(int *)(lVar27 + 0x30) + (long)*(int *)(local_180 + 0x4c);
    (**(code **)(local_e0 + 8))(local_188 + lVar13,lVar14);
    (*pcVar33)(pcVar17 + lVar13,lVar28,lVar16);
    (**(code **)(lVar15 + 0x38))(pcVar17 + lVar13,0,1,lVar16);
    lVar13 = local_120;
    lVar19 = local_128;
    pcVar33 = local_e8;
    local_e0 = pcVar18;
    lVar28 = local_228;
    lVar27 = local_190;
  }
LAB_1007653ac:
  local_e0 = *(code **)(local_e0 + 8);
  (*local_e0)(pcVar12 + lVar28,lVar14);
  pcVar18 = *(code **)(pcVar33 + 8);
  (*pcVar18)(pcVar12,lVar13);
  lVar28 = local_200;
  pcVar33 = (code *)(long)*(int *)(lVar27 + 0x4c);
  (*local_100)(local_200,pcVar17 + (long)pcVar33,lVar13);
  pcVar12 = local_1a8;
  lVar16 = lVar28;
  (*local_1a8)(lVar28,1,lVar19);
  lVar15 = local_110;
  lVar27 = local_230;
  if ((int)lVar16 == 1) {
    (*pcVar18)(lVar28,lVar13);
    lVar15 = local_110;
  }
  else {
    local_e8 = *(code **)(local_110 + 0x20);
    (*local_e8)(local_230,lVar28,lVar19);
    lVar28 = local_258;
    (*local_138)(local_258,
                 pcVar17 + (long)*(int *)(local_d0 + 0x30) + (long)*(int *)(local_180 + 0x4c),lVar14
                );
    lVar37 = local_f8;
    lVar20 = lVar28;
    (*local_1b8)(lVar28,1,local_f8);
    lVar16 = local_170;
    if ((int)lVar20 == 1) {
      (**(code **)(lVar15 + 8))(lVar27,lVar19);
      (*local_e0)(lVar28,lVar14);
      pcVar12 = local_1a8;
    }
    else {
      pcVar31 = *(code **)(local_170 + 0x20);
      (*pcVar31)(local_260,lVar28,lVar37);
      pcVar30 = local_c8;
      puVar6 = local_2a0;
      (*local_220)(local_2a0,
                   pcVar17 + (long)*(int *)(local_d0 + 0x40) + (long)*(int *)(local_1a0 + 0x4c),
                   local_c8);
      pcVar12 = local_d8;
      puVar21 = puVar6;
      (*local_240)(puVar6,1);
      lVar13 = local_2c8;
      if ((int)puVar21 != 1) {
        pcVar40 = *(code **)(local_198 + 0x20);
        (*pcVar40)(local_2c8,puVar6,pcVar12);
        pcVar33 = local_1c0;
        local_c8 = pcVar31;
        (*local_1f0)(unaff_x20,local_1c0);
        puVar29 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        lVar27 = local_d0;
        lVar14 = 0;
        _swift_getTupleTypeMetadata3(0,puVar29,local_d0,local_278,"task upstreams buffer ",0);
        lVar28 = local_130;
        iVar2 = *(int *)(lVar14 + 0x30);
        iVar11 = *(int *)(lVar14 + 0x40);
        *unaff_x20 = local_1b0;
        (**(code **)(local_130 + 0x10))((long)unaff_x20 + (long)iVar2,pcVar17,lVar27);
        *(undefined **)((long)unaff_x20 + (long)iVar11) = local_1e8;
        _swift_storeEnumTagMultiPayload(unaff_x20,pcVar33,1);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        RVar10 = Swift::Result::typeMetadataAccessor();
        UVar23 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar27 = 0;
        _swift_getTupleTypeMetadata2
                  (0,UVar23.unknown,RVar10.value,"downstreamContinuation result ",0);
        plVar7 = local_140;
        lVar14 = local_178;
        lVar27 = (long)local_140 + (long)*(int *)(lVar27 + 0x30);
        *local_140 = (long)local_1d8;
        iVar2 = *(int *)(local_178 + 0x30);
        iVar11 = *(int *)(local_178 + 0x40);
        (*local_e8)(lVar27,local_230,local_128);
        (*local_c8)(lVar27 + iVar2,local_260,local_f8);
        (*pcVar40)(lVar27 + iVar11,lVar13,pcVar12);
        (**(code **)(local_198 + 0x38))(lVar27 + iVar11,0,1,pcVar12);
        (**(code **)(local_1c8 + 0x38))(lVar27,0,1,lVar14);
        _swift_storeEnumTagMultiPayload(lVar27,RVar10.value,0);
        local_a0 = local_160;
        lStack_98 = local_150;
        local_90 = (undefined *)local_148;
        local_88 = (code *)local_158;
        local_80 = local_108;
        lVar13 = 0;
        uStack_78 = uVar24;
        FUN_100769150(0,&local_a0);
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(plVar7,0,1,lVar13);
        pcVar12 = *(code **)(lVar28 + 8);
        lVar16 = local_d0;
        goto LAB_100765e18;
      }
      (**(code **)(lVar16 + 8))(local_260,lVar37);
      lVar15 = local_110;
      (**(code **)(local_110 + 8))(local_230,lVar19);
      (**(code **)(local_118 + 8))(puVar6,pcVar30);
      pcVar12 = local_1a8;
      lVar13 = local_120;
    }
  }
  pcVar17 = local_188;
  lVar28 = local_208;
  (*local_100)(local_208,local_188 + (long)pcVar33,lVar13);
  lVar16 = lVar28;
  (*pcVar12)(lVar28,1,lVar19);
  lVar27 = local_238;
  if ((int)lVar16 == 1) {
    (*pcVar18)(lVar28,lVar13);
  }
  else {
    local_f0 = *(code **)(lVar15 + 0x20);
    local_e8 = pcVar33;
    (*local_f0)(local_238,lVar28,lVar19);
    lVar16 = local_270;
    (*local_138)(local_270,
                 pcVar17 + (long)*(int *)(local_d0 + 0x30) + (long)*(int *)(local_180 + 0x4c),lVar14
                );
    lVar20 = local_f8;
    lVar22 = lVar16;
    (*local_1b8)(lVar16,1,local_f8);
    lVar37 = local_170;
    lVar28 = local_2b8;
    if ((int)lVar22 == 1) {
      (**(code **)(lVar15 + 8))(lVar27,lVar19);
      lVar27 = lVar14;
      pcVar12 = local_e0;
    }
    else {
      pcVar33 = *(code **)(local_170 + 0x20);
      (*pcVar33)(local_2b8,lVar16,lVar20);
      pcVar12 = local_1c0;
      if (*(long *)((long)unaff_x20 + (long)*(int *)(local_2c0 + 0x44)) == 2) {
        (*local_1f0)(unaff_x20,local_1c0);
        puVar29 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        lVar16 = local_d0;
        lVar13 = 0;
        _swift_getTupleTypeMetadata3(0,puVar29,local_d0,local_278,"task upstreams buffer ",0);
        iVar2 = *(int *)(lVar13 + 0x30);
        iVar11 = *(int *)(lVar13 + 0x40);
        *unaff_x20 = local_1b0;
        (**(code **)(local_130 + 0x10))((long)unaff_x20 + (long)iVar2,pcVar17,lVar16);
        *(undefined **)((long)unaff_x20 + (long)iVar11) = local_1e8;
        _swift_storeEnumTagMultiPayload(unaff_x20,pcVar12,1);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        RVar10 = Swift::Result::typeMetadataAccessor();
        UVar23 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar13 = 0;
        _swift_getTupleTypeMetadata2
                  (0,UVar23.unknown,RVar10.value,"downstreamContinuation result ",0);
        plVar7 = local_140;
        lVar27 = local_178;
        lVar13 = (long)local_140 + (long)*(int *)(lVar13 + 0x30);
        *local_140 = (long)local_1d8;
        iVar2 = *(int *)(local_178 + 0x30);
        iVar11 = *(int *)(local_178 + 0x40);
        (*local_f0)(lVar13,local_238,lVar19);
        (*pcVar33)(lVar13 + iVar2,lVar28,local_f8);
        (**(code **)(local_198 + 0x38))(lVar13 + iVar11,1,1,local_d8);
        (**(code **)(local_1c8 + 0x38))(lVar13,0,1,lVar27);
        _swift_storeEnumTagMultiPayload(lVar13,RVar10.value,0);
        local_a0 = local_160;
        lStack_98 = local_150;
        local_90 = (undefined *)local_148;
        local_88 = (code *)local_158;
        local_80 = local_108;
        lVar13 = 0;
        uStack_78 = uVar24;
        FUN_100769150(0,&local_a0);
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(plVar7,0,1,lVar13);
        pcVar12 = *(code **)(local_130 + 8);
        goto LAB_100765e18;
      }
      (**(code **)(lVar37 + 8))(lVar28,lVar20);
      pcVar12 = *(code **)(local_110 + 8);
      lVar16 = local_238;
      lVar27 = lVar19;
    }
    (*pcVar12)(lVar16,lVar27);
    pcVar33 = local_e8;
  }
  lVar15 = local_190;
  (*local_1f0)(unaff_x20,local_1c0);
  lVar16 = local_d0;
  lVar28 = local_218;
  lVar27 = (long)unaff_x20 + (long)*(int *)(local_1f8 + 0x30);
  local_e0 = (code *)(long)*(int *)(local_1f8 + 0x40);
  local_e8 = (code *)(long)*(int *)(local_1f8 + 0x50);
  *unaff_x20 = local_1b0;
  local_110 = (long)*(int *)(local_d0 + 0x30);
  local_f0 = (code *)(long)*(int *)(local_d0 + 0x40);
  uVar34 = *(undefined8 *)pcVar17;
  local_118 = lVar27;
  (*local_100)(local_218,pcVar17 + (long)pcVar33,lVar13);
  cVar1 = pcVar17[*(int *)(lVar15 + 0x50)];
  *(undefined8 *)(pcVar40 + -8) = uVar24;
  uVar38 = local_108;
  *(undefined8 *)(pcVar40 + -0x10) = local_108;
  uVar36 = local_148;
  uVar35 = local_150;
  uVar25 = local_158;
  puVar29 = local_160;
  FUN_1007624f4(lVar27,uVar34,lVar28,cVar1,local_160,local_150,local_148,lVar19,local_158);
  lVar27 = local_180;
  lVar13 = local_210;
  pcVar12 = pcVar17 + *(int *)(lVar16 + 0x30);
  local_100 = *(code **)pcVar12;
  (*local_138)(local_210,pcVar12 + *(int *)(local_180 + 0x4c),lVar14);
  cVar1 = pcVar12[*(int *)(lVar27 + 0x50)];
  *(undefined8 *)(pcVar40 + -0x10) = uVar38;
  *(undefined8 *)(pcVar40 + -8) = uVar24;
  lVar14 = local_118;
  FUN_1007624f4(local_118 + local_110,local_100,lVar13,cVar1,puVar29,uVar35,uVar36,local_f8,uVar25);
  lVar27 = local_1a0;
  lVar13 = local_1d0;
  pcVar12 = pcVar17 + *(int *)(local_d0 + 0x40);
  uVar34 = *(undefined8 *)pcVar12;
  (*local_220)(local_1d0,pcVar12 + *(int *)(local_1a0 + 0x4c),local_c8);
  cVar1 = pcVar12[*(int *)(lVar27 + 0x50)];
  *(undefined8 *)(pcVar40 + -8) = uVar24;
  uVar38 = local_108;
  *(undefined8 *)(pcVar40 + -0x10) = local_108;
  FUN_1007624f4(local_f0 + lVar14,uVar34,lVar13,cVar1,puVar29,uVar35,uVar36,local_d8,uVar25);
  *(code **)((long)unaff_x20 + (long)local_e0) = local_1d8;
  *(undefined **)((long)unaff_x20 + (long)local_e8) = local_1e8;
  _swift_storeEnumTagMultiPayload(unaff_x20,local_1c0,2);
  local_a0 = puVar29;
  lStack_98 = uVar35;
  local_90 = (undefined *)uVar36;
  local_88 = (code *)uVar25;
  local_80 = uVar38;
  lVar13 = 0;
  uStack_78 = uVar24;
  FUN_100769150(0,&local_a0);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(local_140,1,1,lVar13);
  pcVar12 = *(code **)(local_130 + 8);
  lVar16 = local_d0;
LAB_100765e18:
  (*pcVar12)(pcVar17,lVar16);
  return;
}



/* Address: 0x100765ed4 | FUN_100765ed4 */

/* WARNING: Type propagation algorithm not settling */

long * FUN_100765ed4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  Optional OVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined7 extraout_var;
  long lVar14;
  undefined7 extraout_var_00;
  long lVar15;
  undefined7 extraout_var_01;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  code *pcVar23;
  long lVar24;
  long *plVar25;
  long *unaff_x20;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uStack_1b0;
  undefined2 uStack_1a3;
  char acStack_1a1 [8];
  char acStack_199 [7];
  char acStack_192 [8];
  undefined1 auStack_18a [7];
  undefined1 auStack_183 [19];
  long alStack_170 [4];
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long *local_f0;
  long local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar18 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar19 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar26 = *(undefined8 *)(param_2 + 0x38);
  puVar29 = *(undefined **)(param_2 + 0x20);
  lVar13 = 0xff;
  local_d8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar26,puVar29,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar10 = Swift::Optional::typeMetadataAccessor();
  local_b8 = (undefined *)CONCAT71(extraout_var,OVar10.value);
  local_138 = *(long *)(local_b8 + -8);
  lVar20 = (long)alStack_170 - (*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = *(undefined8 *)(param_2 + 0x30);
  lVar24 = *(long *)(param_2 + 0x18);
  lVar14 = 0xff;
  local_140 = lVar20;
  _swift_getAssociatedTypeWitness(0xff,uVar27,lVar24,puVar18,puVar19);
  OVar10 = Swift::Optional::typeMetadataAccessor();
  local_100 = (undefined *)CONCAT71(extraout_var_00,OVar10.value);
  local_108 = *(long *)(local_100 + -8);
  lVar20 = lVar20 - (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar30 = *(undefined8 *)(param_2 + 0x28);
  puVar31 = *(undefined **)(param_2 + 0x10);
  lVar15 = 0xff;
  local_148 = param_2;
  local_110 = lVar20;
  _swift_getAssociatedTypeWitness(0xff,uVar30,puVar31,puVar18,puVar19);
  OVar10 = Swift::Optional::typeMetadataAccessor();
  local_118 = CONCAT71(extraout_var_01,OVar10.value);
  local_120 = *(long *)(local_118 + -8);
  lVar20 = lVar20 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0xff;
  local_128 = lVar20;
  local_c8 = lVar15;
  local_a0 = puVar31;
  lStack_98 = lVar24;
  local_90 = puVar29;
  local_88 = lVar15;
  local_80 = uVar30;
  uStack_78 = uVar27;
  local_70 = uVar26;
  FUN_100761aec(0xff,&local_a0);
  lVar15 = 0xff;
  local_c0 = lVar14;
  local_a0 = puVar31;
  lStack_98 = lVar24;
  local_90 = puVar29;
  local_88 = lVar14;
  local_80 = uVar30;
  uStack_78 = uVar27;
  local_70 = uVar26;
  FUN_100761aec(0xff,&local_a0);
  lVar14 = 0xff;
  local_130 = lVar13;
  local_a0 = puVar31;
  lStack_98 = lVar24;
  local_90 = puVar29;
  local_88 = lVar13;
  local_80 = uVar30;
  uStack_78 = uVar27;
  local_70 = uVar26;
  FUN_100761aec(0xff,&local_a0);
  lVar13 = 0;
  local_f8 = lVar14;
  local_e8 = lVar15;
  local_d0 = lVar16;
  _swift_getTupleTypeMetadata3(0,lVar16,lVar15,lVar14,0,0);
  lVar16 = *(long *)(lVar13 + -8);
  uVar21 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0 = (long *)(lVar20 - uVar21);
  plVar22 = (long *)((long)local_e0 - uVar21);
  lVar15 = 0;
  local_f0 = plVar22;
  local_b0 = lVar13;
  local_a0 = puVar31;
  lStack_98 = lVar24;
  local_90 = puVar29;
  local_88 = uVar30;
  local_80 = uVar27;
  uStack_78 = uVar26;
  FUN_10075d188(0,&local_a0);
  lVar20 = *(long *)(lVar15 + -8);
  plVar22 = (long *)((long)plVar22 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar20 + 0x10))(plVar22,unaff_x20,lVar15);
  plVar17 = plVar22;
  _swift_getEnumCaseMultiPayload(plVar22,lVar15);
  puVar19 = local_b8;
  lVar14 = local_c0;
  lVar13 = local_c8;
  iVar12 = (int)plVar17;
  if (iVar12 < 3) {
    local_150 = lVar16;
    if (iVar12 == 1) {
      local_e0 = (long *)*plVar22;
      puVar19 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      uVar26 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,local_c8,local_c0,local_b8,0,0);
      uVar27 = 0xff;
      FUN_1006883a0(0xff,uVar26);
      lVar13 = local_b0;
      lVar24 = 0;
      _swift_getTupleTypeMetadata3(0,puVar19,local_b0,uVar27,"task upstreams buffer ",0);
      plVar25 = local_f0;
      local_b8 = *(undefined **)((long)plVar22 + (long)*(int *)(lVar24 + 0x40));
      pcVar28 = *(code **)(lVar16 + 0x20);
      (*pcVar28)(local_f0,(long)plVar22 + (long)*(int *)(lVar24 + 0x30),lVar13);
      pcVar9 = *(code **)(lVar20 + 8);
      (*pcVar9)(unaff_x20,lVar15);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,6);
      puVar19 = local_b8;
      lVar14 = local_d0;
      plVar17 = plVar25;
      if (local_d8 != 0) {
        if (local_d8 == 1) {
          lVar16 = 0x30;
          lVar14 = local_e8;
        }
        else {
          if (local_d8 != 2) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100766bf8);
            (*pcVar9)();
          }
          lVar16 = 0x40;
          lVar14 = local_f8;
        }
        plVar17 = (long *)((long)plVar25 + (long)*(int *)(lVar13 + lVar16));
      }
      *(undefined1 *)((long)plVar17 + (long)*(int *)(lVar14 + 0x50)) = 1;
      if ((*(char *)((long)plVar25 + (long)*(int *)(local_d0 + 0x50)) == '\x01') &&
         (plVar17 = (long *)((long)plVar25 + (long)*(int *)(lVar13 + 0x30)),
         *(char *)((long)plVar17 + (long)*(int *)(local_e8 + 0x50)) == '\x01')) {
        plVar22 = (long *)((long)plVar25 + (long)*(int *)(lVar13 + 0x40));
        if (*(char *)((long)plVar22 + (long)*(int *)(local_f8 + 0x50)) == '\x01') {
          local_a0 = local_b8;
          _swift_getWitnessTable(0x100c6d780,uVar27);
          bVar11 = (extension_Swift)::Swift::Collection::get_isEmpty();
          (*pcVar9)(unaff_x20,lVar15);
          if (bVar11) {
            _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,5);
          }
          else {
            *unaff_x20 = (long)puVar19;
            _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,3);
            _swift_retain(puVar19);
          }
          lVar16 = *local_f0;
          lVar15 = *plVar17;
          lVar14 = *plVar22;
          puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (lVar16 != 0) {
            puVar29 = (undefined *)0x0;
            FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
            uVar21 = *(ulong *)(puVar29 + 0x10);
            puVar18 = puVar29;
            if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar21) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
              FUN_1007b784c(puVar18,uVar21 + 1,1,puVar29);
            }
            *(ulong *)(puVar18 + 0x10) = uVar21 + 1;
            *(long *)(puVar18 + uVar21 * 8 + 0x20) = lVar16;
          }
          if (lVar15 != 0) {
            puVar29 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar31 = puVar18;
            if (((ulong)puVar29 & 1) == 0) {
              puVar31 = (undefined *)0x0;
              FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
            }
            uVar21 = *(ulong *)(puVar31 + 0x10);
            puVar18 = puVar31;
            if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar21) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
              FUN_1007b784c(puVar18,uVar21 + 1,1,puVar31);
            }
            *(ulong *)(puVar18 + 0x10) = uVar21 + 1;
            *(long *)(puVar18 + uVar21 * 8 + 0x20) = lVar15;
          }
joined_r0x000100766b3c:
          if (lVar14 != 0) {
            puVar29 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar31 = puVar18;
            if (((ulong)puVar29 & 1) == 0) {
              puVar31 = (undefined *)0x0;
              FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
            }
            uVar21 = *(ulong *)(puVar31 + 0x10);
            puVar18 = puVar31;
            if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar21) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
              FUN_1007b784c(puVar18,uVar21 + 1,1,puVar31);
            }
            *(ulong *)(puVar18 + 0x10) = uVar21 + 1;
            *(long *)(puVar18 + uVar21 * 8 + 0x20) = lVar14;
          }
          _swift_release(puVar19);
          (**(code **)(local_150 + 8))(local_f0,lVar13);
          return local_e0;
        }
        if (*(long *)((long)unaff_x20 + (long)*(int *)(local_148 + 0x44)) == 2) {
          local_a0 = local_b8;
          _swift_getWitnessTable(0x100c6d780,uVar27);
          bVar11 = (extension_Swift)::Swift::Collection::get_isEmpty();
          (*pcVar9)(unaff_x20,lVar15);
          if (bVar11) {
            _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,5);
          }
          else {
            *unaff_x20 = (long)puVar19;
            _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,3);
            _swift_retain(puVar19);
          }
          lVar16 = *local_f0;
          lVar15 = *plVar17;
          lVar14 = *plVar22;
          puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (lVar16 != 0) {
            puVar29 = (undefined *)0x0;
            FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
            uVar21 = *(ulong *)(puVar29 + 0x10);
            puVar18 = puVar29;
            if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar21) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
              FUN_1007b784c(puVar18,uVar21 + 1,1,puVar29);
            }
            *(ulong *)(puVar18 + 0x10) = uVar21 + 1;
            *(long *)(puVar18 + uVar21 * 8 + 0x20) = lVar16;
          }
          if (lVar15 != 0) {
            puVar29 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar31 = puVar18;
            if (((ulong)puVar29 & 1) == 0) {
              puVar31 = (undefined *)0x0;
              FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
            }
            uVar21 = *(ulong *)(puVar31 + 0x10);
            puVar18 = puVar31;
            if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar21) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
              FUN_1007b784c(puVar18,uVar21 + 1,1,puVar31);
            }
            *(ulong *)(puVar18 + 0x10) = uVar21 + 1;
            *(long *)(puVar18 + uVar21 * 8 + 0x20) = lVar15;
          }
          goto joined_r0x000100766b3c;
        }
      }
      (*pcVar9)(unaff_x20,lVar15);
      iVar12 = *(int *)(lVar24 + 0x30);
      iVar1 = *(int *)(lVar24 + 0x40);
      *unaff_x20 = (long)local_e0;
      (*pcVar28)((long)unaff_x20 + (long)iVar12,plVar25,lVar13);
      *(undefined **)((long)unaff_x20 + (long)iVar1) = local_b8;
      uVar26 = 1;
    }
    else {
      if (iVar12 != 2) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100766d44);
        (*pcVar9)();
      }
      local_f0 = plVar22;
      alStack_170[3] = *plVar22;
      *(undefined1 *)((long)plVar22 + -0x3c) = 0x20;
      *(undefined4 *)(plVar22 + -8) = 0x6b736174;
      *(undefined2 *)((long)plVar22 + -0x33) = 0x2073;
      builtin_strncpy((char *)((long)plVar22 + -0x3b),"upstream",8);
      builtin_strncpy((char *)((long)plVar22 + -0x29),"amContin",8);
      builtin_strncpy((char *)((long)plVar22 + -0x31),"downstre",8);
      builtin_strncpy((char *)((long)plVar22 + -0x22),"nuation ",8);
      *(undefined4 *)((long)plVar22 + -0x1a) = 0x66667562;
      *(undefined4 *)((long)plVar22 + -0x17) = 0x20726566;
      *(undefined1 *)((long)plVar22 + -0x13) = 0;
      puVar18 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      lVar16 = local_b0;
      lStack_98 = local_b0;
      uVar26 = 0xff;
      local_a0 = puVar18;
      _swift_getTupleTypeMetadata3(0xff,lVar13,lVar14,puVar19,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar27 = 0xff;
      FUN_1006883a0(0xff,uVar26);
      lVar24 = 0;
      local_88 = uVar27;
      _swift_getTupleTypeMetadata(0,0x10004,&local_a0,plVar22 + -8,0);
      plVar25 = *(long **)((long)plVar22 + (long)*(int *)(lVar24 + 0x40));
      alStack_170[1] = lVar24;
      uVar26 = *(undefined8 *)((long)plVar22 + (long)*(int *)(lVar24 + 0x50));
      pcVar28 = *(code **)(local_150 + 0x20);
      (*pcVar28)(local_e0,(long)plVar22 + (long)*(int *)(lVar24 + 0x30),lVar16);
      pcVar9 = *(code **)(lVar20 + 8);
      (*pcVar9)(unaff_x20,lVar15);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,6);
      lVar16 = local_b0;
      lVar8 = local_d0;
      plVar17 = local_e0;
      puVar18 = local_100;
      lVar7 = local_108;
      lVar6 = local_110;
      lVar5 = local_118;
      lVar4 = local_120;
      lVar3 = local_128;
      lVar24 = local_138;
      lVar20 = local_140;
      alStack_170[2] = uVar26;
      local_f0 = plVar25;
      if (local_d8 == 0) {
        *(undefined1 *)((long)local_e0 + (long)*(int *)(local_d0 + 0x50)) = 1;
        (**(code **)(local_120 + 0x10))
                  (local_128,(long)local_e0 + (long)*(int *)(local_d0 + 0x4c),local_118);
        lVar14 = lVar3;
        (**(code **)(*(long *)(lVar13 + -8) + 0x30))(lVar3,1,lVar13);
        (**(code **)(lVar4 + 8))(lVar3,lVar5);
        iVar12 = (int)lVar14;
        lVar16 = local_b0;
      }
      else {
        if (local_d8 == 1) {
          iVar12 = *(int *)(local_b0 + 0x30);
          *(undefined1 *)((long)local_e0 + (long)*(int *)(local_e8 + 0x50) + (long)iVar12) = 1;
          (**(code **)(local_108 + 0x10))
                    (local_110,(long)local_e0 + (long)*(int *)(local_e8 + 0x4c) + (long)iVar12,
                     local_100);
          lVar13 = lVar6;
          (**(code **)(*(long *)(lVar14 + -8) + 0x30))(lVar6,1,lVar14);
          iVar12 = (int)lVar13;
          pcVar23 = *(code **)(lVar7 + 8);
          lVar20 = lVar6;
          puVar19 = puVar18;
        }
        else {
          if (local_d8 != 2) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100766bfc);
            (*pcVar9)();
          }
          iVar12 = *(int *)(local_b0 + 0x40);
          *(undefined1 *)((long)local_e0 + (long)*(int *)(local_f8 + 0x50) + (long)iVar12) = 1;
          (**(code **)(local_138 + 0x10))
                    (local_140,(long)local_e0 + (long)*(int *)(local_f8 + 0x4c) + (long)iVar12,
                     puVar19);
          lVar13 = lVar20;
          (**(code **)(*(long *)(local_130 + -8) + 0x30))(lVar20,1);
          iVar12 = (int)lVar13;
          pcVar23 = *(code **)(lVar24 + 8);
        }
        (*pcVar23)(lVar20,puVar19);
      }
      if (iVar12 == 1) {
        (*pcVar9)(unaff_x20,lVar15);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,5);
        lVar15 = *plVar17;
        lVar13 = *(long *)((long)plVar17 + (long)*(int *)(lVar16 + 0x30));
        lVar14 = *(long *)((long)plVar17 + (long)*(int *)(lVar16 + 0x40));
        puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar15 != 0) {
          puVar18 = (undefined *)0x0;
          FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
          uVar21 = *(ulong *)(puVar18 + 0x10);
          puVar19 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar21) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            FUN_1007b784c(puVar19,uVar21 + 1,1,puVar18);
          }
          *(ulong *)(puVar19 + 0x10) = uVar21 + 1;
          *(long *)(puVar19 + uVar21 * 8 + 0x20) = lVar15;
        }
joined_r0x000100766820:
        if (lVar13 != 0) {
          puVar18 = puVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar29 = puVar19;
          if (((ulong)puVar18 & 1) == 0) {
            puVar29 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
          }
          uVar21 = *(ulong *)(puVar29 + 0x10);
          puVar19 = puVar29;
          if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar21) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
            FUN_1007b784c(puVar19,uVar21 + 1,1,puVar29);
          }
          *(ulong *)(puVar19 + 0x10) = uVar21 + 1;
          *(long *)(puVar19 + uVar21 * 8 + 0x20) = lVar13;
        }
        if (lVar14 != 0) {
          puVar18 = puVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar29 = puVar19;
          if (((ulong)puVar18 & 1) == 0) {
            puVar29 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
          }
          uVar21 = *(ulong *)(puVar29 + 0x10);
          puVar19 = puVar29;
          if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar21) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
            FUN_1007b784c(puVar19,uVar21 + 1,1,puVar29);
          }
          *(ulong *)(puVar19 + 0x10) = uVar21 + 1;
          *(long *)(puVar19 + uVar21 * 8 + 0x20) = lVar14;
        }
        (**(code **)(local_150 + 8))(plVar17,lVar16);
        _swift_release(alStack_170[2]);
        return (long *)((ulong)local_f0 | 0x8000000000000000);
      }
      if (((*(char *)((long)plVar17 + (long)*(int *)(lVar8 + 0x50)) == '\x01') &&
          (plVar22 = (long *)((long)plVar17 + (long)*(int *)(lVar16 + 0x30)),
          *(char *)((long)plVar22 + (long)*(int *)(local_e8 + 0x50)) == '\x01')) &&
         ((plVar25 = (long *)((long)plVar17 + (long)*(int *)(lVar16 + 0x40)),
          *(char *)((long)plVar25 + (long)*(int *)(local_f8 + 0x50)) == '\x01' ||
          (*(long *)((long)unaff_x20 + (long)*(int *)(local_148 + 0x44)) == 2)))) {
        (*pcVar9)(unaff_x20,lVar15);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,5);
        lVar15 = *plVar17;
        lVar13 = *plVar22;
        lVar14 = *plVar25;
        puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar15 != 0) {
          puVar18 = (undefined *)0x0;
          FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
          uVar21 = *(ulong *)(puVar18 + 0x10);
          puVar19 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar21) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            FUN_1007b784c(puVar19,uVar21 + 1,1,puVar18);
          }
          *(ulong *)(puVar19 + 0x10) = uVar21 + 1;
          *(long *)(puVar19 + uVar21 * 8 + 0x20) = lVar15;
        }
        goto joined_r0x000100766820;
      }
      (*pcVar9)(unaff_x20,lVar15);
      iVar12 = *(int *)(alStack_170[1] + 0x30);
      iVar1 = *(int *)(alStack_170[1] + 0x40);
      iVar2 = *(int *)(alStack_170[1] + 0x50);
      *unaff_x20 = alStack_170[3];
      (*pcVar28)((long)unaff_x20 + (long)iVar12,plVar17,lVar16);
      *(long **)((long)unaff_x20 + (long)iVar1) = local_f0;
      *(long *)((long)unaff_x20 + (long)iVar2) = alStack_170[2];
      uVar26 = 2;
    }
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar15,uVar26);
  }
  else if (iVar12 < 5) {
    if (iVar12 != 4) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100766d40);
      (*pcVar9)();
    }
    (**(code **)(lVar20 + 8))(plVar22,lVar15);
  }
  else if (iVar12 != 5) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007663d8);
    (*pcVar9)();
  }
  return (long *)0xf000000000000007;
}



/* Address: 0x100766d44 | FUN_100766d44 */

long FUN_100766d44(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  Optional OVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *unaff_x20;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  long lVar28;
  code *pcVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uStack_190;
  undefined2 uStack_183;
  char acStack_181 [8];
  char acStack_179 [7];
  char acStack_172 [8];
  undefined1 auStack_16a [7];
  undefined1 auStack_163 [19];
  long local_150 [4];
  long *local_130;
  long local_128;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar16 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar18 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lStack_98 = *(undefined8 *)(param_2 + 0x18);
  puVar17 = *(undefined **)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  uVar31 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = 0xff;
  local_a0 = puVar17;
  _swift_getAssociatedTypeWitness
            (0xff,uVar31,puVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar25 = *(undefined8 *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar32 = *(undefined8 *)(param_2 + 0x18);
  uVar26 = *(undefined8 *)(param_2 + 0x38);
  uVar34 = *(undefined8 *)(param_2 + 0x38);
  uVar33 = *(undefined8 *)(param_2 + 0x30);
  lVar8 = 0xff;
  local_90 = (undefined *)uVar25;
  local_88 = uVar7;
  uStack_80 = uVar31;
  uStack_78 = uVar9;
  local_70 = uVar26;
  FUN_100761aec(0xff,&local_a0);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar33,uVar32,puVar16,puVar18);
  lVar10 = 0xff;
  local_a0 = puVar17;
  lStack_98 = uVar32;
  local_90 = (undefined *)uVar11;
  local_88 = uVar9;
  uStack_80 = uVar31;
  uStack_78 = uVar33;
  local_70 = uVar34;
  FUN_100761aec(0xff,&local_a0);
  uVar11 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar26,uVar25,puVar16,puVar18);
  lVar12 = 0xff;
  local_a0 = puVar17;
  lStack_98 = uVar32;
  local_90 = (undefined *)uVar25;
  local_88 = uVar11;
  uStack_80 = uVar31;
  uStack_78 = uVar33;
  local_70 = uVar26;
  FUN_100761aec(0xff,&local_a0);
  lVar13 = 0;
  _swift_getTupleTypeMetadata3(0,lVar8,lVar10,lVar12,0,0);
  lVar22 = *(long *)(lVar13 + -8);
  uVar19 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar30 = ((long)local_150 - uVar19) - uVar19;
  lVar28 = lVar30 - uVar19;
  plVar21 = (long *)(lVar28 - uVar19);
  lVar24 = (long)plVar21 - uVar19;
  lVar14 = 0;
  local_a0 = puVar17;
  lStack_98 = uVar32;
  local_90 = (undefined *)uVar25;
  local_88 = uVar31;
  uStack_80 = uVar33;
  uStack_78 = uVar26;
  FUN_10075d188(0,&local_a0);
  lVar20 = *(long *)(lVar14 + -8);
  plVar23 = (long *)(lVar24 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar20 + 0x10))(plVar23);
  plVar15 = plVar23;
  _swift_getEnumCaseMultiPayload(plVar23,lVar14);
  iVar6 = (int)plVar15;
  if (iVar6 < 3) {
    local_150[1] = lVar24;
    local_150[2] = lVar30;
    local_150[3] = lVar28;
    local_130 = plVar21;
    local_128 = (long)local_150 - uVar19;
    if (iVar6 == 1) {
      local_150[0] = *plVar23;
      puVar18 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      uVar11 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar7,uVar9,OVar5.value,0,0);
      uVar7 = 0xff;
      FUN_1006883a0(0xff,uVar11);
      lVar24 = 0;
      _swift_getTupleTypeMetadata3(0,puVar18,lVar13,uVar7,"task upstreams buffer ",0);
      iVar6 = *(int *)(lVar24 + 0x30);
      _swift_release(*(undefined8 *)((long)plVar23 + (long)*(int *)(lVar24 + 0x40)));
      lVar24 = local_150[1];
      (**(code **)(lVar22 + 0x20))(local_150[1],(long)plVar23 + (long)iVar6,lVar13);
      (**(code **)(lVar20 + 8))(unaff_x20,lVar14);
      *unaff_x20 = param_1;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar14,4);
      plVar15 = local_130;
      pcVar27 = *(code **)(lVar22 + 0x10);
      (*pcVar27)(local_130,lVar24,lVar13);
      iVar6 = *(int *)(lVar13 + 0x30);
      iVar1 = *(int *)(lVar13 + 0x40);
      lVar28 = *plVar15;
      _swift_errorRetain(param_1);
      pcVar4 = *(code **)(*(long *)(lVar8 + -8) + 8);
      (*pcVar4)(plVar15,lVar8);
      lVar20 = local_150[3];
      (*pcVar27)(local_150[3],lVar24,lVar13);
      iVar2 = *(int *)(lVar13 + 0x40);
      lVar30 = *(long *)(lVar20 + *(int *)(lVar13 + 0x30));
      pcVar29 = *(code **)(*(long *)(lVar10 + -8) + 8);
      (*pcVar29)(lVar20 + *(int *)(lVar13 + 0x30),lVar10);
      lVar14 = local_150[2];
      (*pcVar27)(local_150[2],lVar24,lVar13);
      iVar3 = *(int *)(lVar13 + 0x30);
      lVar24 = *(long *)(lVar14 + *(int *)(lVar13 + 0x40));
      pcVar27 = *(code **)(*(long *)(lVar12 + -8) + 8);
      (*pcVar27)(lVar14 + *(int *)(lVar13 + 0x40),lVar12);
      (*pcVar29)(lVar14 + iVar3,lVar10);
      (*pcVar4)(lVar14,lVar8);
      (*pcVar27)(lVar20 + iVar2,lVar12);
      (*pcVar4)(lVar20,lVar8);
      (*pcVar27)((long)plVar15 + (long)iVar1,lVar12);
      (*pcVar29)((long)plVar15 + (long)iVar6,lVar10);
      puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar28 != 0) {
        puVar16 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar19 = *(ulong *)(puVar16 + 0x10);
        puVar18 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar16);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar28;
      }
      lVar10 = local_150[1];
      lVar8 = local_150[0];
      if (lVar30 != 0) {
        puVar16 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar17 = puVar18;
        if (((ulong)puVar16 & 1) == 0) {
          puVar17 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
        }
        uVar19 = *(ulong *)(puVar17 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar30;
      }
      if (lVar24 != 0) {
        puVar16 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar17 = puVar18;
        if (((ulong)puVar16 & 1) == 0) {
          puVar17 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
        }
        uVar19 = *(ulong *)(puVar17 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar24;
      }
      (**(code **)(lVar22 + 8))(lVar10,lVar13);
    }
    else {
      if (iVar6 != 2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100767890);
        (*pcVar4)();
      }
      local_150[1] = *plVar23;
      *(undefined1 *)((long)plVar23 + -0x3c) = 0x20;
      *(undefined4 *)(plVar23 + -8) = 0x6b736174;
      *(undefined2 *)((long)plVar23 + -0x33) = 0x2073;
      builtin_strncpy((char *)((long)plVar23 + -0x3b),"upstream",8);
      builtin_strncpy((char *)((long)plVar23 + -0x29),"amContin",8);
      builtin_strncpy((char *)((long)plVar23 + -0x31),"downstre",8);
      builtin_strncpy((char *)((long)plVar23 + -0x22),"nuation ",8);
      *(undefined4 *)((long)plVar23 + -0x1a) = 0x66667562;
      *(undefined4 *)((long)plVar23 + -0x17) = 0x20726566;
      *(undefined1 *)((long)plVar23 + -0x13) = 0;
      puVar18 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      local_a0 = puVar18;
      lStack_98 = lVar13;
      OVar5 = Swift::Optional::typeMetadataAccessor();
      uVar11 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar7,uVar9,OVar5.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::Result::typeMetadataAccessor();
      local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar7 = 0xff;
      FUN_1006883a0(0xff,uVar11);
      lVar24 = 0;
      local_88 = uVar7;
      _swift_getTupleTypeMetadata(0,0x10004,&local_a0,plVar23 + -8,0);
      iVar6 = *(int *)(lVar24 + 0x30);
      local_150[0] = *(long *)((long)plVar23 + (long)*(int *)(lVar24 + 0x40));
      _swift_release(*(undefined8 *)((long)plVar23 + (long)*(int *)(lVar24 + 0x50)));
      lVar24 = local_128;
      (**(code **)(lVar22 + 0x20))(local_128,(long)plVar23 + (long)iVar6,lVar13);
      (**(code **)(lVar20 + 8))(unaff_x20,lVar14);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar14,5);
      plVar15 = local_130;
      pcVar4 = *(code **)(lVar22 + 0x10);
      (*pcVar4)(local_130,lVar24,lVar13);
      iVar6 = *(int *)(lVar13 + 0x30);
      iVar1 = *(int *)(lVar13 + 0x40);
      lVar28 = *plVar15;
      pcVar29 = *(code **)(*(long *)(lVar8 + -8) + 8);
      (*pcVar29)(plVar15,lVar8);
      lVar20 = local_150[3];
      (*pcVar4)(local_150[3],lVar24,lVar13);
      iVar2 = *(int *)(lVar13 + 0x40);
      lVar30 = *(long *)(lVar20 + *(int *)(lVar13 + 0x30));
      pcVar27 = *(code **)(*(long *)(lVar10 + -8) + 8);
      (*pcVar27)(lVar20 + *(int *)(lVar13 + 0x30),lVar10);
      lVar14 = local_150[2];
      (*pcVar4)(local_150[2],lVar24,lVar13);
      iVar3 = *(int *)(lVar13 + 0x30);
      lVar24 = *(long *)(lVar14 + *(int *)(lVar13 + 0x40));
      pcVar4 = *(code **)(*(long *)(lVar12 + -8) + 8);
      (*pcVar4)(lVar14 + *(int *)(lVar13 + 0x40),lVar12);
      (*pcVar27)(lVar14 + iVar3,lVar10);
      (*pcVar29)(lVar14,lVar8);
      (*pcVar4)(lVar20 + iVar2,lVar12);
      (*pcVar29)(lVar20,lVar8);
      (*pcVar4)((long)plVar15 + (long)iVar1,lVar12);
      (*pcVar27)((long)plVar15 + (long)iVar6,lVar10);
      puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar8 = local_150[0];
      lVar10 = local_128;
      if (lVar28 != 0) {
        puVar16 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar19 = *(ulong *)(puVar16 + 0x10);
        puVar18 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar16);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar28;
        lVar8 = local_150[0];
        lVar10 = local_128;
      }
      local_150[0] = lVar8;
      local_128 = lVar10;
      if (lVar30 != 0) {
        puVar16 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar17 = puVar18;
        if (((ulong)puVar16 & 1) == 0) {
          puVar17 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
        }
        uVar19 = *(ulong *)(puVar17 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar30;
      }
      if (lVar24 != 0) {
        puVar16 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar17 = puVar18;
        if (((ulong)puVar16 & 1) == 0) {
          puVar17 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
        }
        uVar19 = *(ulong *)(puVar17 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
          FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
        }
        *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
        *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar24;
      }
      (**(code **)(lVar22 + 8))(lVar10,lVar13);
      _swift_errorRetain(param_1);
    }
  }
  else {
    if (iVar6 < 5) {
      (**(code **)(lVar20 + 8))(plVar23,lVar14);
    }
    else if (iVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10076788c);
      (*pcVar4)();
    }
    lVar8 = -0xffffffffffffff9;
  }
  return lVar8;
}



/* Address: 0x100767890 | FUN_100767890 */

ulong FUN_100767890(long param_1)

{
  int iVar1;
  long *plVar2;
  Optional OVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined7 extraout_var;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 unaff_x20;
  undefined8 uVar19;
  ulong *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uStack_190;
  undefined2 uStack_183;
  char acStack_181 [8];
  char acStack_179 [7];
  char acStack_172 [8];
  undefined1 auStack_16a [7];
  undefined1 auStack_163 [19];
  ulong auStack_150 [2];
  code *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  ulong local_118;
  long local_110;
  long *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar13 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lStack_c8 = *(undefined8 *)(param_1 + 0x18);
  puVar15 = *(undefined **)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar25 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = 0xff;
  local_d0 = puVar15;
  local_a0 = puVar15;
  lStack_98 = lStack_c8;
  _swift_getAssociatedTypeWitness
            (0xff,uVar25,puVar15,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x20);
  lVar26 = *(long *)(param_1 + 0x18);
  uVar19 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  local_c0 = *(undefined8 *)(param_1 + 0x30);
  lVar6 = 0xff;
  local_120 = uVar5;
  local_e0 = lVar26;
  local_90 = (undefined *)uVar22;
  local_88 = uVar5;
  uStack_80 = uVar25;
  uStack_78 = uVar8;
  local_70 = uVar19;
  FUN_100761aec(0xff,&local_a0);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_c0,lVar26,puVar13,puVar11);
  local_a0 = local_d0;
  local_90 = (undefined *)uStack_d8;
  lStack_98 = local_e0;
  local_70 = uStack_b8;
  uStack_78 = local_c0;
  lVar7 = 0xff;
  local_88 = uVar5;
  uStack_80 = uVar25;
  FUN_100761aec(0xff,&local_a0);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar19,uVar22,puVar13,puVar11);
  lVar23 = local_c0;
  lStack_c8 = local_e0;
  lStack_98 = local_e0;
  local_a0 = local_d0;
  uStack_78 = local_c0;
  lVar9 = 0xff;
  local_90 = (undefined *)uVar22;
  local_88 = uVar8;
  uStack_80 = uVar25;
  local_70 = uVar19;
  FUN_100761aec(0xff,&local_a0);
  lVar10 = 0;
  local_100 = lVar9;
  local_f0 = lVar7;
  local_e8 = lVar6;
  _swift_getTupleTypeMetadata3(0,lVar6,lVar7,lVar9,0,0);
  local_e0 = *(long *)(lVar10 + -8);
  uVar16 = *(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = (long)auStack_150 - uVar16;
  lVar7 = local_f8 - uVar16;
  local_110 = lVar7 - uVar16;
  local_108 = (long *)(local_110 - uVar16);
  lVar6 = (long)local_108 - uVar16;
  lStack_98 = lStack_c8;
  local_a0 = local_d0;
  uStack_80 = lVar23;
  puVar11 = (undefined *)0x0;
  local_118 = lVar6;
  local_c0 = lVar10;
  local_90 = (undefined *)uVar22;
  local_88 = uVar25;
  uStack_78 = uVar19;
  FUN_10075d188(0,&local_a0);
  lVar23 = *(long *)(puVar11 + -8);
  puVar20 = (ulong *)(lVar6 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar23 + 0x10))(puVar20);
  puVar12 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,puVar11);
  iVar4 = (int)puVar12;
  if (iVar4 < 3) {
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        local_118 = *puVar20;
        *(undefined1 *)((long)puVar20 + -0x3c) = 0x20;
        *(undefined4 *)(puVar20 + -8) = 0x6b736174;
        *(undefined2 *)((long)puVar20 + -0x33) = 0x2073;
        builtin_strncpy((char *)((long)puVar20 + -0x3b),"upstream",8);
        builtin_strncpy((char *)((long)puVar20 + -0x29),"amContin",8);
        builtin_strncpy((char *)((long)puVar20 + -0x31),"downstre",8);
        builtin_strncpy((char *)((long)puVar20 + -0x22),"nuation ",8);
        *(undefined4 *)((long)puVar20 + -0x1a) = 0x66667562;
        *(undefined4 *)((long)puVar20 + -0x17) = 0x20726566;
        *(undefined1 *)((long)puVar20 + -0x13) = 0;
        puVar13 = &DAT_100fe2d00;
        FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
        lVar26 = local_c0;
        lStack_98 = local_c0;
        local_a0 = puVar13;
        OVar3 = Swift::Optional::typeMetadataAccessor();
        uVar8 = 0xff;
        _swift_getTupleTypeMetadata3(0xff,local_120,uVar5,OVar3.value,0,0);
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::Result::typeMetadataAccessor();
        local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
        uVar5 = 0xff;
        FUN_1006883a0(0xff,uVar8);
        lVar6 = 0;
        local_88 = uVar5;
        _swift_getTupleTypeMetadata(0,0x10004,&local_a0,puVar20 + -8,0);
        iVar4 = *(int *)(lVar6 + 0x30);
        local_d0 = (undefined *)*(ulong *)((long)puVar20 + (long)*(int *)(lVar6 + 0x40));
        _swift_release(*(undefined8 *)((long)puVar20 + (long)*(int *)(lVar6 + 0x50)));
        lVar9 = local_e0;
        lVar6 = local_f8;
        (**(code **)(local_e0 + 0x20))(local_f8,(long)puVar20 + (long)iVar4,lVar26);
        (**(code **)(lVar23 + 8))(unaff_x20,puVar11);
        _swift_storeEnumTagMultiPayload(unaff_x20,puVar11,5);
        plVar2 = local_108;
        pcVar18 = *(code **)(lVar9 + 0x10);
        (*pcVar18)(local_108,lVar6,lVar26);
        lVar10 = local_e8;
        local_128 = (long)*(int *)(lVar26 + 0x30);
        local_138 = (long)*(int *)(lVar26 + 0x40);
        local_130 = *plVar2;
        local_140 = *(code **)(*(long *)(local_e8 + -8) + 8);
        (*local_140)(plVar2,local_e8);
        lVar23 = local_110;
        (*pcVar18)(local_110,lVar6,lVar26);
        lVar9 = local_f0;
        auStack_150[1] = (ulong)*(int *)(lVar26 + 0x40);
        local_120 = *(long *)(lVar23 + *(int *)(lVar26 + 0x30));
        pcVar24 = *(code **)(*(long *)(local_f0 + -8) + 8);
        (*pcVar24)(lVar23 + *(int *)(lVar26 + 0x30),local_f0);
        (*pcVar18)(lVar7,lVar6,lVar26);
        lVar6 = local_100;
        iVar4 = *(int *)(lVar26 + 0x30);
        lVar17 = *(long *)(lVar7 + *(int *)(lVar26 + 0x40));
        pcVar21 = *(code **)(*(long *)(local_100 + -8) + 8);
        (*pcVar21)(lVar7 + *(int *)(lVar26 + 0x40),local_100);
        (*pcVar24)(lVar7 + iVar4,lVar9);
        pcVar18 = local_140;
        (*local_140)(lVar7,lVar10);
        (*pcVar21)(lVar23 + auStack_150[1],lVar6);
        (*pcVar18)(lVar23,lVar10);
        (*pcVar21)((long)plVar2 + local_138,lVar6);
        lVar6 = local_130;
        (*pcVar24)((long)plVar2 + local_128,lVar9);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar23 = local_120;
        if (lVar6 != 0) {
          puVar13 = (undefined *)0x0;
          FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
          uVar16 = *(ulong *)(puVar13 + 0x10);
          puVar11 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar16) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
            FUN_1007b784c(puVar11,uVar16 + 1,1,puVar13);
          }
          *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
          *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar6;
          lVar23 = local_120;
        }
        local_120 = lVar23;
        if (lVar23 != 0) {
          puVar13 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar15 = puVar11;
          if (((ulong)puVar13 & 1) == 0) {
            puVar15 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar16 = *(ulong *)(puVar15 + 0x10);
          puVar11 = puVar15;
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar16) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
            FUN_1007b784c(puVar11,uVar16 + 1,1,puVar15);
          }
          *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
          *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar23;
        }
        if (lVar17 != 0) {
          puVar13 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar15 = puVar11;
          if (((ulong)puVar13 & 1) == 0) {
            puVar15 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar16 = *(ulong *)(puVar15 + 0x10);
          puVar11 = puVar15;
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar16) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
            FUN_1007b784c(puVar11,uVar16 + 1,1,puVar15);
          }
          *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
          *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar17;
        }
        (**(code **)(local_e0 + 8))(local_f8,local_c0);
        return (ulong)local_d0;
      }
      local_d0 = (undefined *)*puVar20;
      puVar13 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      uVar8 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,local_120,uVar5,OVar3.value,0,0);
      uVar5 = 0xff;
      FUN_1006883a0(0xff,uVar8);
      lVar26 = local_c0;
      lVar6 = 0;
      _swift_getTupleTypeMetadata3(0,puVar13,local_c0,uVar5,"task upstreams buffer ",0);
      iVar4 = *(int *)(lVar6 + 0x30);
      _swift_release(*(undefined8 *)((long)puVar20 + (long)*(int *)(lVar6 + 0x40)));
      lVar6 = local_e0;
      uVar16 = local_118;
      (**(code **)(local_e0 + 0x20))(local_118,(long)puVar20 + (long)iVar4,lVar26);
      (**(code **)(lVar23 + 8))(unaff_x20,puVar11);
      _swift_storeEnumTagMultiPayload(unaff_x20,puVar11,5);
      plVar2 = local_108;
      pcVar18 = *(code **)(lVar6 + 0x10);
      (*pcVar18)(local_108,uVar16,lVar26);
      lVar6 = local_e8;
      local_120 = (long)*(int *)(lVar26 + 0x30);
      local_130 = (long)*(int *)(lVar26 + 0x40);
      local_128 = *plVar2;
      pcVar21 = *(code **)(*(long *)(local_e8 + -8) + 8);
      (*pcVar21)(plVar2,local_e8);
      lVar23 = local_110;
      (*pcVar18)(local_110,uVar16,lVar26);
      lVar10 = local_f0;
      local_138 = (long)*(int *)(lVar26 + 0x40);
      local_f8 = *(long *)(lVar23 + *(int *)(lVar26 + 0x30));
      pcVar24 = *(code **)(*(long *)(local_f0 + -8) + 8);
      (*pcVar24)(lVar23 + *(int *)(lVar26 + 0x30),local_f0);
      (*pcVar18)(lVar7,uVar16,lVar26);
      lVar9 = local_100;
      iVar4 = *(int *)(lVar26 + 0x30);
      lVar17 = *(long *)(lVar7 + *(int *)(lVar26 + 0x40));
      pcVar18 = *(code **)(*(long *)(local_100 + -8) + 8);
      (*pcVar18)(lVar7 + *(int *)(lVar26 + 0x40),local_100);
      (*pcVar24)(lVar7 + iVar4,lVar10);
      (*pcVar21)(lVar7,lVar6);
      (*pcVar18)(lVar23 + local_138,lVar9);
      (*pcVar21)(lVar23,lVar6);
      lVar6 = local_128;
      (*pcVar18)((long)plVar2 + local_130,lVar9);
      (*pcVar24)((long)plVar2 + local_120,lVar10);
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar23 = local_f8;
      puVar13 = local_d0;
      if (lVar6 != 0) {
        puVar13 = (undefined *)0x0;
        FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        uVar16 = *(ulong *)(puVar13 + 0x10);
        puVar11 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar16) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1007b784c(puVar11,uVar16 + 1,1,puVar13);
        }
        *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
        *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar6;
        lVar23 = local_f8;
        puVar13 = local_d0;
      }
      local_f8 = lVar23;
      local_d0 = puVar13;
      if (lVar23 != 0) {
        puVar15 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar11;
        if (((ulong)puVar15 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puVar11 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_1007b784c(puVar11,uVar16 + 1,1,puVar14);
        }
        *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
        *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar23;
      }
      if (lVar17 != 0) {
        puVar15 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar11;
        if (((ulong)puVar15 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          FUN_1007b784c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar16 = *(ulong *)(puVar14 + 0x10);
        puVar11 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_1007b784c(puVar11,uVar16 + 1,1,puVar14);
        }
        *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
        *(long *)(puVar11 + uVar16 * 8 + 0x20) = lVar17;
      }
      (**(code **)(local_e0 + 8))(local_118,local_c0);
      return (ulong)puVar13 | 0x8000000000000000;
    }
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar6 = CONCAT71(extraout_var,OVar3.value);
    lVar7 = 0;
    _swift_getTupleTypeMetadata3(0,puVar15,lVar26,lVar6,"base1 base2 base3 ",0);
    iVar4 = *(int *)(lVar7 + 0x30);
    iVar1 = *(int *)(lVar7 + 0x40);
    (**(code **)(lVar23 + 8))(unaff_x20,puVar11);
    _swift_storeEnumTagMultiPayload(unaff_x20,puVar11,5);
    (**(code **)(*(long *)(lVar6 + -8) + 8))((long)puVar20 + (long)iVar1,lVar6);
    (**(code **)(*(long *)(lVar26 + -8) + 8))((long)puVar20 + (long)iVar4,lVar26);
    pcVar18 = *(code **)(*(long *)(puVar15 + -8) + 8);
  }
  else {
    if (4 < iVar4) {
      if (iVar4 == 5) {
        return 0xf000000000000007;
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100767d80);
      (*pcVar18)();
    }
    if (iVar4 == 3) {
      pcVar18 = *(code **)(lVar23 + 8);
      (*pcVar18)(puVar20,puVar11);
      (*pcVar18)(unaff_x20,puVar11);
      _swift_storeEnumTagMultiPayload(unaff_x20,puVar11,5);
      return 0xf000000000000007;
    }
    pcVar18 = *(code **)(lVar23 + 8);
    puVar15 = puVar11;
  }
  (*pcVar18)(puVar20,puVar15);
  return 0xf000000000000007;
}



/* Address: 0x100768408 | FUN_100768408 */

void FUN_100768408(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  Optional OVar3;
  Result RVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined7 extraout_var;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined7 extraout_var_00;
  UnsafeContinuation UVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  code *pcVar20;
  undefined8 *unaff_x20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  code *pcVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [9];
  undefined1 auStack_193 [10];
  undefined1 auStack_189 [7];
  undefined1 auStack_182 [8];
  undefined1 auStack_17a [7];
  undefined1 auStack_173 [19];
  long local_160;
  code *local_158;
  long local_150;
  long local_148;
  code *local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 *local_f0;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar18 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x18);
  lVar32 = *(long *)(param_3 + 0x18);
  puVar14 = *(undefined **)(param_3 + 0x10);
  uVar28 = *(undefined8 *)(param_3 + 0x38);
  uVar33 = *(undefined8 *)(param_3 + 0x38);
  uVar30 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = 0xff;
  local_128 = param_2;
  local_120 = uVar30;
  local_f0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar30,lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar27 = *(undefined8 *)(param_3 + 0x28);
  uVar34 = *(undefined8 *)(param_3 + 0x28);
  uVar31 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = 0xff;
  local_f8 = puVar14;
  _swift_getAssociatedTypeWitness(0xff,uVar27,puVar14,puVar18,puVar13);
  uVar8 = 0xff;
  local_100 = uVar31;
  _swift_getAssociatedTypeWitness(0xff,uVar28,uVar31,puVar18,puVar13);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  pcVar9 = (code *)0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar7,uVar6,OVar3.value,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_110 = CONCAT71(extraout_var,OVar3.value);
  local_150 = *(long *)(local_110 + -8);
  uVar19 = *(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_148 = (long)&local_160 - uVar19;
  lVar29 = local_148 - uVar19;
  local_138 = *(long *)(pcVar9 + -8);
  uVar19 = *(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_158 = (code *)(lVar29 - uVar19);
  pcVar20 = local_158 + -uVar19;
  uVar10 = 0xff;
  local_140 = pcVar9;
  local_a0 = puVar14;
  lStack_98 = lVar22;
  local_90 = (undefined *)uVar31;
  local_88 = uVar7;
  local_80 = uVar27;
  uStack_78 = uVar30;
  local_70 = uVar28;
  FUN_100761aec(0xff,&local_a0);
  uVar7 = 0xff;
  local_a0 = puVar14;
  lStack_98 = lVar22;
  local_90 = (undefined *)uVar31;
  local_88 = uVar6;
  local_80 = uVar27;
  uStack_78 = uVar30;
  local_70 = uVar28;
  FUN_100761aec(0xff,&local_a0);
  uVar6 = 0xff;
  local_a0 = puVar14;
  lStack_98 = lVar22;
  local_90 = (undefined *)uVar31;
  local_88 = uVar8;
  local_80 = uVar27;
  uStack_78 = uVar30;
  local_70 = uVar28;
  FUN_100761aec(0xff,&local_a0);
  lVar11 = 0;
  _swift_getTupleTypeMetadata3(0,uVar10,uVar7,uVar6,0,0);
  lVar24 = *(long *)(lVar11 + -8);
  pcVar26 = pcVar20 + -(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  local_130 = uVar27;
  local_118 = uVar28;
  local_108 = lVar22;
  local_a0 = puVar14;
  lStack_98 = lVar22;
  local_90 = (undefined *)uVar31;
  local_88 = uVar27;
  local_80 = uVar30;
  uStack_78 = uVar28;
  FUN_10075d188(0,&local_a0);
  lVar22 = *(long *)(lVar12 + -8);
  pcVar21 = pcVar26 + -(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar22 + 0x10))(pcVar21,unaff_x20,lVar12);
  pcVar9 = pcVar21;
  _swift_getEnumCaseMultiPayload(pcVar21,lVar12);
  iVar5 = (int)pcVar9;
  if (iVar5 < 3) {
    local_148 = lVar29;
    local_158 = pcVar20;
    local_160 = lVar11;
    if (iVar5 == 0) {
      OVar3 = Swift::Optional::typeMetadataAccessor();
      puVar13 = local_f8;
      lVar11 = local_108;
      lVar12 = CONCAT71(extraout_var_00,OVar3.value);
      lVar22 = 0;
      _swift_getTupleTypeMetadata3(0,local_f8,local_108,lVar12,"base1 base2 base3 ",0);
      puVar16 = local_f0;
      iVar5 = *(int *)(lVar22 + 0x30);
      iVar1 = *(int *)(lVar22 + 0x40);
      (**(code **)(*(long *)(puVar13 + -8) + 0x20))(local_f0,pcVar21,puVar13);
      lVar22 = 0;
      _swift_getTupleTypeMetadata3(0,puVar13,lVar11,lVar12,0,0);
      (**(code **)(*(long *)(lVar11 + -8) + 0x20))
                ((long)puVar16 + (long)*(int *)(lVar22 + 0x30),pcVar21 + iVar5,lVar11);
      (**(code **)(*(long *)(lVar12 + -8) + 0x20))
                ((long)puVar16 + (long)*(int *)(lVar22 + 0x40),pcVar21 + iVar1,lVar12);
      uVar6 = 0;
      local_a0 = puVar14;
      lStack_98 = lVar32;
      local_90 = (undefined *)uVar31;
      local_88 = uVar34;
      local_80 = uVar30;
      uStack_78 = uVar33;
      FUN_1007691a0(0,&local_a0);
      uVar7 = 0;
    }
    else {
      if (iVar5 != 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100769150);
        (*pcVar9)();
      }
      uVar7 = *(undefined8 *)pcVar21;
      puVar13 = &DAT_100fe2d00;
      FUN_1000f8b08(&DAT_100fe2d00,&DAT_100c76eb0);
      pcVar20 = local_140;
      uVar6 = 0xff;
      FUN_1006883a0(0xff,local_140);
      lVar11 = local_160;
      lVar29 = 0;
      _swift_getTupleTypeMetadata3(0,puVar13,local_160,uVar6,"task upstreams buffer ",0);
      uVar8 = *(undefined8 *)(pcVar21 + *(int *)(lVar29 + 0x40));
      pcVar25 = *(code **)(lVar24 + 0x20);
      (*pcVar25)(pcVar26,pcVar21 + *(int *)(lVar29 + 0x30),lVar11);
      pcVar23 = *(code **)(lVar22 + 8);
      (*pcVar23)(unaff_x20,lVar12);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,6);
      lVar11 = local_148;
      FUN_100681318(local_148,uVar6);
      lVar22 = local_138;
      lVar24 = lVar11;
      (**(code **)(local_138 + 0x30))(lVar11,1,pcVar20);
      pcVar9 = local_158;
      if ((int)lVar24 == 1) {
        local_158 = pcVar23;
        local_140 = pcVar25;
        (**(code **)(local_150 + 8))(lVar11,local_110);
        lVar22 = *(long *)pcVar26;
        lVar11 = (long)*(int *)(local_160 + 0x30);
        lVar24 = *(long *)(pcVar26 + lVar11);
        local_148 = (long)*(int *)(local_160 + 0x40);
        local_138 = *(long *)(pcVar26 + *(int *)(local_160 + 0x40));
        puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar22 != 0) {
          puVar14 = (undefined *)0x0;
          FUN_1007b784c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
          uVar19 = *(ulong *)(puVar14 + 0x10);
          puVar18 = puVar14;
          if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar19) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
            FUN_1007b784c(puVar18,uVar19 + 1,1,puVar14);
          }
          *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
          *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar22;
        }
        lVar22 = local_160;
        pcVar9 = local_158;
        local_150 = lVar11;
        if (lVar24 != 0) {
          puVar14 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar17 = puVar18;
          if (((ulong)puVar14 & 1) == 0) {
            puVar17 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
          }
          pcVar9 = local_158;
          uVar19 = *(ulong *)(puVar17 + 0x10);
          puVar18 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
            FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
          }
          *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
          *(long *)(puVar18 + uVar19 * 8 + 0x20) = lVar24;
        }
        if (local_138 != 0) {
          puVar14 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar17 = puVar18;
          if (((ulong)puVar14 & 1) == 0) {
            puVar17 = (undefined *)0x0;
            FUN_1007b784c(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
          }
          uVar19 = *(ulong *)(puVar17 + 0x10);
          puVar18 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar19) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
            FUN_1007b784c(puVar18,uVar19 + 1,1,puVar17);
          }
          *(ulong *)(puVar18 + 0x10) = uVar19 + 1;
          *(long *)(puVar18 + uVar19 * 8 + 0x20) = local_138;
        }
        *(undefined8 *)pcVar26 = 0;
        *(undefined8 *)(pcVar26 + local_150) = 0;
        *(undefined8 *)(pcVar26 + local_148) = 0;
        (*pcVar9)(unaff_x20,lVar12);
        pcVar21[-0x3c] = (code)0x20;
        *(undefined4 *)(pcVar21 + -0x40) = 0x6b736174;
        *(undefined2 *)(pcVar21 + -0x33) = 0x2073;
        *(undefined8 *)(pcVar21 + -0x3b) = 0x6d61657274737075;
        *(undefined8 *)(pcVar21 + -0x29) = 0x6e69746e6f436d61;
        *(undefined8 *)(pcVar21 + -0x31) = 0x657274736e776f64;
        *(undefined8 *)(pcVar21 + -0x22) = 0x206e6f697461756e;
        *(undefined4 *)(pcVar21 + -0x1a) = 0x66667562;
        *(undefined4 *)(pcVar21 + -0x17) = 0x20726566;
        pcVar21[-0x13] = (code)0x0;
        lStack_98 = lVar22;
        local_a0 = puVar13;
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        Swift::Result::typeMetadataAccessor();
        local_90 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar11 = 0;
        local_88 = uVar6;
        _swift_getTupleTypeMetadata(0,0x10004,&local_a0,pcVar21 + -0x40,0);
        iVar5 = *(int *)(lVar11 + 0x30);
        iVar1 = *(int *)(lVar11 + 0x40);
        iVar2 = *(int *)(lVar11 + 0x50);
        *unaff_x20 = uVar7;
        (*local_140)((long)unaff_x20 + (long)iVar5,pcVar26,lVar22);
        *(undefined8 *)((long)unaff_x20 + (long)iVar1) = local_128;
        *(undefined8 *)((long)unaff_x20 + (long)iVar2) = uVar8;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,2);
        puVar16 = local_f0;
        *local_f0 = puVar18;
        local_a0 = local_f8;
        lStack_98 = local_108;
        local_90 = (undefined *)local_100;
        local_88 = local_130;
        local_80 = local_120;
        uStack_78 = local_118;
        uVar6 = 0;
        FUN_1007691a0(0,&local_a0);
        uVar7 = 1;
      }
      else {
        pcVar21 = *(code **)(lVar22 + 0x20);
        (*pcVar21)(local_158,lVar11,pcVar20);
        (*pcVar23)(unaff_x20,lVar12);
        iVar5 = *(int *)(lVar29 + 0x30);
        iVar1 = *(int *)(lVar29 + 0x40);
        *unaff_x20 = uVar7;
        (*pcVar25)((long)unaff_x20 + (long)iVar5,pcVar26,local_160);
        *(undefined8 *)((long)unaff_x20 + (long)iVar1) = uVar8;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,1);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        RVar4 = Swift::Result::typeMetadataAccessor();
        UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar11 = 0;
        _swift_getTupleTypeMetadata2
                  (0,UVar15.unknown,RVar4.value,"downstreamContinuation result ",0);
        puVar16 = local_f0;
        lVar11 = (long)*(int *)(lVar11 + 0x30);
        *local_f0 = local_128;
        (*pcVar21)((long)local_f0 + lVar11,pcVar9,pcVar20);
        (**(code **)(local_138 + 0x38))((long)puVar16 + lVar11,0,1,pcVar20);
        _swift_storeEnumTagMultiPayload((long)puVar16 + lVar11,RVar4.value,0);
        local_a0 = local_f8;
        lStack_98 = local_108;
        local_90 = (undefined *)local_100;
        local_88 = local_130;
        local_80 = local_120;
        uStack_78 = local_118;
        uVar6 = 0;
        FUN_1007691a0(0,&local_a0);
        uVar7 = 2;
      }
    }
    goto LAB_100769084;
  }
  if (iVar5 < 5) {
    if (iVar5 != 3) {
      uVar6 = *(undefined8 *)pcVar21;
      (**(code **)(lVar22 + 8))(unaff_x20,lVar12);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,5);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar4 = Swift::Result::typeMetadataAccessor();
      UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar11 = 0;
      _swift_getTupleTypeMetadata2(0,UVar15.unknown,RVar4.value,"downstreamContinuation result ",0);
      puVar16 = local_f0;
      iVar5 = *(int *)(lVar11 + 0x30);
      *local_f0 = local_128;
      *(undefined8 *)((long)local_f0 + (long)iVar5) = uVar6;
      _swift_storeEnumTagMultiPayload((long)local_f0 + (long)iVar5,RVar4.value,1);
      local_a0 = local_f8;
      lStack_98 = local_108;
      local_90 = (undefined *)local_100;
      local_88 = local_130;
      local_80 = local_120;
      uStack_78 = local_118;
      uVar6 = 0;
      FUN_1007691a0(0,&local_a0);
      uVar7 = 2;
      goto LAB_100769084;
    }
    uVar6 = *(undefined8 *)pcVar21;
    pcVar21 = *(code **)(lVar22 + 8);
    (*pcVar21)(unaff_x20,lVar12);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,6);
    pcVar20 = local_140;
    FUN_1006883a0(0,local_140);
    lVar11 = local_148;
    FUN_100681318(local_148);
    lVar22 = local_138;
    lVar24 = lVar11;
    (**(code **)(local_138 + 0x30))(lVar11,1,pcVar20);
    pcVar9 = local_158;
    if ((int)lVar24 != 1) {
      pcVar26 = *(code **)(lVar22 + 0x20);
      (*pcVar26)(local_158,lVar11,pcVar20);
      (*pcVar21)(unaff_x20,lVar12);
      *unaff_x20 = uVar6;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,3);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar4 = Swift::Result::typeMetadataAccessor();
      UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar11 = 0;
      _swift_getTupleTypeMetadata2(0,UVar15.unknown,RVar4.value,"downstreamContinuation result ",0);
      puVar16 = local_f0;
      lVar11 = (long)*(int *)(lVar11 + 0x30);
      *local_f0 = local_128;
      (*pcVar26)((long)local_f0 + lVar11,pcVar9,pcVar20);
      (**(code **)(lVar22 + 0x38))((long)puVar16 + lVar11,0,1,pcVar20);
      _swift_storeEnumTagMultiPayload((long)puVar16 + lVar11,RVar4.value,0);
      local_a0 = local_f8;
      lStack_98 = local_108;
      local_90 = (undefined *)local_100;
      local_88 = local_130;
      local_80 = local_120;
      uStack_78 = local_118;
      uVar6 = 0;
      FUN_1007691a0(0,&local_a0);
      uVar7 = 2;
      goto LAB_100769084;
    }
    _swift_release(uVar6);
    (**(code **)(local_150 + 8))(lVar11,local_110);
    (*pcVar21)(unaff_x20,lVar12);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar12,5);
  }
  else if (iVar5 != 5) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10076914c);
    (*pcVar9)();
  }
  puVar16 = local_f0;
  *local_f0 = local_128;
  local_a0 = local_f8;
  lStack_98 = local_108;
  local_90 = (undefined *)local_100;
  local_88 = local_130;
  local_80 = local_120;
  uStack_78 = local_118;
  uVar6 = 0;
  FUN_1007691a0(0,&local_a0);
  uVar7 = 3;
LAB_100769084:
  _swift_storeEnumTagMultiPayload(puVar16,uVar6,uVar7);
  return;
}



/* Address: 0x100769150 | FUN_100769150 */

void FUN_100769150(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbefcc);
  return;
}



/* Address: 0x10076915c | FUN_10076915c */

void FUN_10076915c(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100fe2d08 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100fe2d08 = puVar2;
  return;
}



/* Address: 0x1007691a0 | FUN_1007691a0 */

void FUN_1007691a0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf074);
  return;
}



/* Address: 0x1007691ac | FUN_1007691ac */

undefined8 * FUN_1007691ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1007691e8(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x1007691e8 | FUN_1007691e8 */

void FUN_1007691e8(undefined8 param_1,ulong param_2)

{
  if (-1 < (long)param_2) {
    return;
  }
  _swift_errorRetain(param_2 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x1007691f8 | FUN_1007691f8 */

void FUN_1007691f8(undefined8 *param_1)

{
  FUN_100769204(*param_1,param_1[1]);
  return;
}



/* Address: 0x100769204 | FUN_100769204 */

void FUN_100769204(undefined8 param_1,ulong param_2)

{
  if (-1 < (long)param_2) {
    return;
  }
  _swift_errorRelease(param_2 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x100769214 | FUN_100769214 */

undefined8 * FUN_100769214(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1007691e8(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_100769204(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100769258 | FUN_100769258 */

undefined8 * FUN_100769258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_100769204(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100769290 | FUN_100769290 */

int FUN_100769290(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x11 & 0x3800 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 8 |
          (byte)((ulong)*(undefined8 *)param_1 >> 0x38) & 0xf0 | (uint)*(undefined8 *)param_1 & 0xf)
          << 1) ^ 0x7fff;
  if (0x7ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100769308 | FUN_100769308 */

void FUN_100769308(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x7fff) {
    if (0x7ffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x3fff | (-param_2 & 0x7fff) << 0xe;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x38) & 0xf00000000000000f;
      param_1[1] = ((ulong)(uVar1 >> 8) | uVar2 << 0x31) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7fff);
    param_1[1] = 0;
    if (0x7ffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100769374 | FUN_100769374 */

ulong FUN_100769374(long param_1)

{
  return *(ulong *)(param_1 + 8) >> 0x3f;
}



/* Address: 0x100769380 | FUN_100769380 */

void FUN_100769380(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0x7fffffffffffffff;
  return;
}



/* Address: 0x100769390 | FUN_100769390 */

void FUN_100769390(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff0;
  param_1[1] = param_1[1] & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x1007693a8 | FUN_1007693a8 */

void FUN_1007693a8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbef24);
  return;
}



/* Address: 0x1007693b4 | FUN_1007693b4 */

void FUN_1007693b4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x1007693c0 | FUN_1007693c0 */

void FUN_1007693c0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_3;
    param_1 = param_2;
  }
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(uVar1);
  return;
}



/* Address: 0x1007693ec | FUN_1007693ec */

void FUN_1007693ec(undefined8 *param_1)

{
  FUN_1007693fc(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007693fc | FUN_1007693fc */

void FUN_1007693fc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_3;
    param_1 = param_2;
  }
  _swift_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100769428 | FUN_100769428 */

void FUN_100769428(void)

{
  FUN_10076ef9c();
  return;
}



/* Address: 0x10076943c | FUN_10076943c */

void FUN_10076943c(void)

{
  FUN_10076f008();
  return;
}



/* Address: 0x100769448 | FUN_100769448 */

void FUN_100769448(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbef78);
  return;
}



/* Address: 0x100769454 | FUN_100769454 */

undefined1  [16] FUN_100769454(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined7 extraout_var_00;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  undefined7 extraout_var;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar7 = CONCAT71(extraout_var,OVar3.value);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var_00,RVar4.value);
  if (uVar7 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_60,&DAT_100c76a28,*(long *)(lVar8 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_60);
    lVar8 = 0;
    uVar5 = 0;
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_4c;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = lVar8;
  return auVar9;
}



/* Address: 0x100769598 | FUN_100769598 */

long * FUN_100769598(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  size_t sVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  uint *puVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  
  puVar10 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar9 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar25 = *(long *)(lVar12 + -8);
  uVar21 = *(uint *)(lVar25 + 0x50);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar10,puVar9);
  lVar27 = *(long *)(lVar13 + -8);
  uVar17 = *(uint *)(lVar27 + 0x50);
  uVar23 = (ulong)uVar17 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar10,puVar9);
  lVar28 = *(long *)(lVar14 + -8);
  iVar11 = *(int *)(lVar28 + 0x54);
  uVar18 = (ulong)*(uint *)(lVar28 + 0x50) & 0xff;
  uVar8 = uVar17 | uVar21 | *(uint *)(lVar28 + 0x50);
  uVar19 = (ulong)(uVar8 & 0xf8 | 7);
  uVar17 = *(uint *)(lVar25 + 0x54);
  uVar6 = *(uint *)(lVar27 + 0x54);
  uVar21 = uVar6;
  if (uVar6 <= uVar17) {
    uVar21 = uVar17;
  }
  uVar4 = 0;
  if (iVar11 != 0) {
    uVar4 = iVar11 - 1;
  }
  if (uVar4 <= uVar21) {
    uVar4 = uVar21;
  }
  uVar16 = *(long *)(lVar25 + 0x40) + uVar23;
  lVar1 = *(long *)(lVar27 + 0x40) + uVar18;
  sVar22 = *(size_t *)(lVar28 + 0x40);
  if (iVar11 == 0) {
    sVar22 = sVar22 + 1;
  }
  uVar2 = (lVar1 + (uVar16 & (uVar23 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          sVar22;
  uVar3 = uVar2;
  if (uVar4 == 0) {
    uVar3 = uVar2 + 1;
  }
  uVar5 = uVar3;
  if (uVar3 < 9) {
    uVar5 = 8;
  }
  if ((uVar8 & 0x1000f8) != 0 || (-uVar19 - 9 | uVar19 & 0xfe) - uVar5 < 0xffffffffffffffe7) {
    lVar12 = *param_2;
    *param_1 = lVar12;
    _swift_retain();
    return (long *)(lVar12 + (uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff)));
  }
  *param_1 = *param_2;
  puVar20 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar26 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar7 = *(byte *)((long)puVar26 + uVar5);
  uVar21 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_10076977c:
    if (uVar21 == 1) {
LAB_100769784:
      uVar24 = *(undefined8 *)puVar26;
      _swift_errorRetain(uVar24);
      *puVar20 = uVar24;
      *(undefined1 *)((long)puVar20 + uVar5) = 1;
      return param_1;
    }
  }
  else {
    uVar29 = (uint)uVar5;
    uVar8 = 4;
    if (uVar29 < 4) {
      uVar8 = uVar29;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10076977c;
      uVar21 = (uint)(byte)*puVar26;
    }
    else if (uVar8 == 2) {
      uVar21 = (uint)(ushort)*puVar26;
    }
    else if (uVar8 == 3) {
      uVar21 = (uint)(uint3)*puVar26;
    }
    else {
      uVar21 = *puVar26;
    }
    if (3 < uVar29) {
      uVar21 = uVar21 + 2;
      goto LAB_10076977c;
    }
    if ((uVar21 | bVar7 - 2 << (ulong)((uVar29 & 3) << 3)) == 0xffffffff) goto LAB_100769784;
  }
  uVar23 = ~uVar23;
  uVar18 = ~uVar18;
  if (uVar4 == 0) {
    if (*(byte *)((long)puVar26 + uVar2) != 0) {
      uVar17 = (uint)uVar2;
      uVar21 = 0;
      if (uVar17 < 4) {
        uVar21 = *(byte *)((long)puVar26 + uVar2) - 1 << (ulong)((uVar17 & 3) << 3);
      }
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar17 < 4) {
          uVar6 = uVar17;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar17 = (uint)(byte)*puVar26;
          }
          else {
            uVar17 = (uint)(ushort)*puVar26;
          }
        }
        else if (uVar6 == 3) {
          uVar17 = (uint)(uint3)*puVar26;
        }
        else {
          uVar17 = *puVar26;
        }
      }
      if ((uVar17 | uVar21) != 0xffffffff) goto LAB_1007698b4;
    }
  }
  else {
    if (uVar17 == uVar4) {
      puVar15 = puVar26;
      (**(code **)(lVar25 + 0x30))(puVar26,uVar17,lVar12);
      iVar11 = (int)puVar15;
    }
    else {
      uVar19 = (ulong)(uVar16 + (long)puVar26) & uVar23;
      if (uVar6 == uVar4) {
        (**(code **)(lVar27 + 0x30))(uVar19,uVar6,lVar13);
        iVar11 = (int)uVar19;
      }
      else {
        uVar19 = lVar1 + uVar19 & uVar18;
        (**(code **)(lVar28 + 0x30))(uVar19,iVar11,lVar14);
        iVar11 = 0;
        if ((int)uVar19 != 0) {
          iVar11 = (int)uVar19 + -1;
        }
      }
    }
    if (iVar11 != 0) {
LAB_1007698b4:
      _memcpy(puVar20,puVar26,uVar3);
      goto LAB_1007699bc;
    }
  }
  (**(code **)(lVar25 + 0x10))(puVar20,puVar26,lVar12);
  uVar19 = uVar16 + (long)puVar20 & uVar23;
  uVar23 = (ulong)(uVar16 + (long)puVar26) & uVar23;
  (**(code **)(lVar27 + 0x10))(uVar19,uVar23,lVar13);
  uVar19 = lVar1 + uVar19;
  uVar23 = lVar1 + uVar23;
  uVar16 = uVar23 & uVar18;
  (**(code **)(lVar28 + 0x30))(uVar16,1,lVar14);
  if ((int)uVar16 == 0) {
    (**(code **)(lVar28 + 0x10))(uVar19 & uVar18,uVar23 & uVar18,lVar14);
    (**(code **)(lVar28 + 0x38))(uVar19 & uVar18,0,1,lVar14);
  }
  else {
    _memcpy((void *)(uVar19 & uVar18),(void *)(uVar23 & uVar18),sVar22);
  }
  if (uVar4 == 0) {
    *(undefined1 *)((long)puVar20 + uVar2) = 0;
  }
LAB_1007699bc:
  *(undefined1 *)((long)puVar20 + uVar5) = 0;
  return param_1;
}



/* Address: 0x1007699e4 | FUN_1007699e4 */

void FUN_1007699e4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar24 = *(long *)(lVar9 + -8);
  uVar20 = *(uint *)(lVar24 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x18),puVar8,puVar7);
  lVar25 = *(long *)(lVar10 + -8);
  uVar14 = *(uint *)(lVar25 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20),puVar8,puVar7);
  lVar23 = *(long *)(lVar11 + -8);
  iVar4 = *(int *)(lVar23 + 0x54);
  uVar15 = (ulong)((uVar14 | uVar20 | *(uint *)(lVar23 + 0x50)) & 0xf8 | 7);
  uVar16 = (ulong)uVar14 & 0xff;
  uVar17 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  puVar22 = (uint *)(param_1 + uVar15 + 8 & (uVar15 ^ 0xffffffffffffffff));
  uVar14 = *(uint *)(lVar24 + 0x54);
  uVar5 = *(uint *)(lVar25 + 0x54);
  uVar20 = uVar5;
  if (uVar5 <= uVar14) {
    uVar20 = uVar14;
  }
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = iVar4 - 1;
  }
  if (uVar3 <= uVar20) {
    uVar3 = uVar20;
  }
  uVar15 = *(long *)(lVar24 + 0x40) + uVar16;
  lVar1 = *(long *)(lVar25 + 0x40) + uVar17;
  lVar19 = *(long *)(lVar23 + 0x40);
  if (iVar4 == 0) {
    lVar19 = lVar19 + 1;
  }
  uVar13 = lVar19 + (lVar1 + (uVar15 & (uVar16 ^ 0xffffffffffffffff)) &
                    (uVar17 ^ 0xffffffffffffffff));
  uVar2 = uVar13;
  if (uVar3 == 0) {
    uVar2 = uVar13 + 1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar6 = *(byte *)((long)puVar22 + uVar2);
  uVar20 = (uint)bVar6;
  if (1 < bVar6) {
    uVar18 = (uint)uVar2;
    uVar21 = 4;
    if (uVar18 < 4) {
      uVar21 = uVar18;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100769b80;
      uVar21 = (uint)(byte)*puVar22;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar22;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar22;
    }
    else {
      uVar21 = *puVar22;
    }
    uVar20 = uVar21 | bVar6 - 2 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar20 = uVar21;
    }
    uVar20 = uVar20 + 2;
  }
LAB_100769b80:
  if (uVar20 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar22);
    return;
  }
  uVar17 = ~uVar17;
  if (uVar3 == 0) {
    if (*(byte *)((long)puVar22 + uVar13) != 0) {
      uVar14 = (uint)uVar13;
      uVar20 = 0;
      if (uVar14 < 4) {
        uVar20 = *(byte *)((long)puVar22 + uVar13) - 1 << (ulong)((uVar14 & 3) << 3);
      }
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar5 = 4;
        if (uVar14 < 4) {
          uVar5 = uVar14;
        }
        if ((int)uVar5 < 3) {
          if (uVar5 == 1) {
            uVar14 = (uint)(byte)*puVar22;
          }
          else {
            uVar14 = (uint)(ushort)*puVar22;
          }
        }
        else if (uVar5 == 3) {
          uVar14 = (uint)(uint3)*puVar22;
        }
        else {
          uVar14 = *puVar22;
        }
      }
      if ((uVar14 | uVar20) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    if (uVar14 == uVar3) {
      puVar12 = puVar22;
      (**(code **)(lVar24 + 0x30))(puVar22,uVar14,lVar9);
      iVar4 = (int)puVar12;
    }
    else {
      uVar13 = (ulong)(uVar15 + (long)puVar22) & ~uVar16;
      if (uVar5 == uVar3) {
        (**(code **)(lVar25 + 0x30))(uVar13,uVar5,lVar10);
        iVar4 = (int)uVar13;
      }
      else {
        uVar13 = lVar1 + uVar13 & uVar17;
        (**(code **)(lVar23 + 0x30))(uVar13,iVar4,lVar11);
        iVar4 = 0;
        if ((int)uVar13 != 0) {
          iVar4 = (int)uVar13 + -1;
        }
      }
    }
    if (iVar4 != 0) {
      return;
    }
  }
  (**(code **)(lVar24 + 8))(puVar22,lVar9);
  uVar15 = (ulong)(uVar15 + (long)puVar22) & ~uVar16;
  (**(code **)(lVar25 + 8))(uVar15,lVar10);
  uVar15 = lVar1 + uVar15;
  uVar16 = uVar15 & uVar17;
  (**(code **)(lVar23 + 0x30))(uVar16,1,lVar11);
  if ((int)uVar16 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100769d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar23 + 8))(uVar15 & uVar17,lVar11);
  return;
}



/* Address: 0x100769d44 | FUN_100769d44 */

undefined8 * FUN_100769d44(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  size_t sVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  long lVar30;
  
  *param_1 = *param_2;
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar27 = *(long *)(lVar10 + -8);
  uVar20 = *(uint *)(lVar27 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar8,puVar7);
  lVar23 = *(long *)(lVar11 + -8);
  uVar17 = *(uint *)(lVar23 + 0x50);
  uVar25 = (ulong)uVar17 & 0xff;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar8,puVar7);
  lVar30 = *(long *)(lVar12 + -8);
  iVar9 = *(int *)(lVar30 + 0x54);
  uVar18 = (ulong)*(uint *)(lVar30 + 0x50) & 0xff;
  uVar16 = (ulong)((uVar17 | uVar20 | *(uint *)(lVar30 + 0x50)) & 0xf8 | 7);
  puVar19 = (undefined8 *)(uVar16 + 8 + (long)param_1 & (uVar16 ^ 0xffffffffffffffff));
  puVar28 = (uint *)(uVar16 + 8 + (long)param_2 & (uVar16 ^ 0xffffffffffffffff));
  uVar17 = *(uint *)(lVar27 + 0x54);
  uVar5 = *(uint *)(lVar23 + 0x54);
  uVar20 = uVar5;
  if (uVar5 <= uVar17) {
    uVar20 = uVar17;
  }
  uVar3 = 0;
  if (iVar9 != 0) {
    uVar3 = iVar9 - 1;
  }
  if (uVar3 <= uVar20) {
    uVar3 = uVar20;
  }
  uVar16 = *(long *)(lVar27 + 0x40) + uVar25;
  lVar1 = *(long *)(lVar23 + 0x40) + uVar18;
  sVar22 = *(size_t *)(lVar30 + 0x40);
  if (iVar9 == 0) {
    sVar22 = sVar22 + 1;
  }
  uVar2 = (lVar1 + (uVar16 & (uVar25 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          sVar22;
  uVar26 = uVar2;
  if (uVar3 == 0) {
    uVar26 = uVar2 + 1;
  }
  uVar4 = uVar26;
  if (uVar26 < 9) {
    uVar4 = 8;
  }
  bVar6 = *(byte *)((long)puVar28 + uVar4);
  uVar20 = (uint)bVar6;
  if (1 < bVar6) {
    uVar29 = (uint)uVar4;
    uVar21 = 4;
    if (uVar29 < 4) {
      uVar21 = uVar29;
    }
    if ((int)uVar21 < 2) {
      if (uVar21 == 0) goto LAB_100769ef4;
      uVar21 = (uint)(byte)*puVar28;
    }
    else if (uVar21 == 2) {
      uVar21 = (uint)(ushort)*puVar28;
    }
    else if (uVar21 == 3) {
      uVar21 = (uint)(uint3)*puVar28;
    }
    else {
      uVar21 = *puVar28;
    }
    uVar20 = uVar21 | bVar6 - 2 << (ulong)((uVar29 & 3) << 3);
    if (3 < uVar29) {
      uVar20 = uVar21;
    }
    uVar20 = uVar20 + 2;
  }
LAB_100769ef4:
  if (uVar20 == 1) {
    uVar24 = *(undefined8 *)puVar28;
    _swift_errorRetain(uVar24);
    *puVar19 = uVar24;
    uVar15 = 1;
    goto LAB_10076a0bc;
  }
  uVar25 = ~uVar25;
  uVar18 = ~uVar18;
  if (uVar3 == 0) {
    if (*(byte *)((long)puVar28 + uVar2) != 0) {
      uVar17 = (uint)uVar2;
      uVar20 = 0;
      if (uVar17 < 4) {
        uVar20 = *(byte *)((long)puVar28 + uVar2) - 1 << (ulong)((uVar17 & 3) << 3);
      }
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar5 = 4;
        if (uVar17 < 4) {
          uVar5 = uVar17;
        }
        if ((int)uVar5 < 3) {
          if (uVar5 == 1) {
            uVar17 = (uint)(byte)*puVar28;
          }
          else {
            uVar17 = (uint)(ushort)*puVar28;
          }
        }
        else if (uVar5 == 3) {
          uVar17 = (uint)(uint3)*puVar28;
        }
        else {
          uVar17 = *puVar28;
        }
      }
      if ((uVar17 | uVar20) != 0xffffffff) goto LAB_100769fe8;
    }
  }
  else {
    if (uVar17 == uVar3) {
      puVar13 = puVar28;
      (**(code **)(lVar27 + 0x30))(puVar28,uVar17,lVar10);
      iVar9 = (int)puVar13;
    }
    else {
      uVar14 = (ulong)(uVar16 + (long)puVar28) & uVar25;
      if (uVar5 == uVar3) {
        (**(code **)(lVar23 + 0x30))(uVar14,uVar5,lVar11);
        iVar9 = (int)uVar14;
      }
      else {
        uVar14 = lVar1 + uVar14 & uVar18;
        (**(code **)(lVar30 + 0x30))(uVar14,iVar9,lVar12);
        iVar9 = 0;
        if ((int)uVar14 != 0) {
          iVar9 = (int)uVar14 + -1;
        }
      }
    }
    if (iVar9 != 0) {
LAB_100769fe8:
      _memcpy(puVar19,puVar28,uVar26);
      uVar15 = 0;
      goto LAB_10076a0bc;
    }
  }
  (**(code **)(lVar27 + 0x10))(puVar19,puVar28,lVar10);
  uVar26 = uVar16 + (long)puVar19 & uVar25;
  uVar25 = (ulong)(uVar16 + (long)puVar28) & uVar25;
  (**(code **)(lVar23 + 0x10))(uVar26,uVar25,lVar11);
  uVar26 = lVar1 + uVar26;
  uVar25 = lVar1 + uVar25;
  uVar16 = uVar25 & uVar18;
  (**(code **)(lVar30 + 0x30))(uVar16,1,lVar12);
  if ((int)uVar16 == 0) {
    (**(code **)(lVar30 + 0x10))(uVar26 & uVar18,uVar25 & uVar18,lVar12);
    (**(code **)(lVar30 + 0x38))(uVar26 & uVar18,0,1,lVar12);
  }
  else {
    _memcpy((void *)(uVar26 & uVar18),(void *)(uVar25 & uVar18),sVar22);
  }
  uVar15 = 0;
  if (uVar3 == 0) {
    uVar15 = 0;
    *(undefined1 *)((long)puVar19 + uVar2) = 0;
  }
LAB_10076a0bc:
  *(undefined1 *)((long)puVar19 + uVar4) = uVar15;
  return param_1;
}



/* Address: 0x10076a11c | FUN_10076a11c */

undefined8 * FUN_10076a11c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  byte bVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  size_t sVar26;
  uint *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint *puVar33;
  long lVar34;
  uint uVar35;
  
  *param_1 = *param_2;
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar30 = *(long *)(lVar9 + -8);
  uVar24 = *(uint *)(lVar30 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar7,puVar6);
  lVar34 = *(long *)(lVar10 + -8);
  uVar20 = *(uint *)(lVar34 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar7,puVar6);
  lVar32 = *(long *)(lVar11 + -8);
  uVar21 = (ulong)((uVar20 | uVar24 | *(uint *)(lVar32 + 0x50)) & 0xf8 | 7);
  puVar27 = (uint *)(uVar21 + 8 + (long)param_1 & (uVar21 ^ 0xffffffffffffffff));
  puVar33 = (uint *)(uVar21 + 8 + (long)param_2 & (uVar21 ^ 0xffffffffffffffff));
  if (puVar27 == puVar33) {
    return param_1;
  }
  uVar28 = (ulong)uVar20 & 0xff;
  uVar21 = (ulong)*(uint *)(lVar32 + 0x50) & 0xff;
  uVar20 = *(uint *)(lVar30 + 0x54);
  uVar15 = *(uint *)(lVar34 + 0x54);
  uVar24 = uVar15;
  if (uVar15 <= uVar20) {
    uVar24 = uVar20;
  }
  iVar5 = *(int *)(lVar32 + 0x54);
  uVar3 = 0;
  if (iVar5 != 0) {
    uVar3 = iVar5 - 1;
  }
  if (uVar3 <= uVar24) {
    uVar3 = uVar24;
  }
  lVar22 = *(long *)(lVar30 + 0x40);
  lVar1 = *(long *)(lVar34 + 0x40) + uVar21;
  sVar26 = *(size_t *)(lVar32 + 0x40);
  if (iVar5 == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar2 = (lVar1 + (lVar22 + uVar28 & (uVar28 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)
          ) + sVar26;
  uVar31 = uVar2;
  if (uVar3 == 0) {
    uVar31 = uVar2 + 1;
  }
  uVar4 = uVar31;
  if (uVar31 < 9) {
    uVar4 = 8;
  }
  bVar17 = *(byte *)((long)puVar27 + uVar4);
  uVar24 = (uint)bVar17;
  uVar35 = (uint)uVar4;
  if (1 < bVar17) {
    uVar25 = 4;
    if (uVar35 < 4) {
      uVar25 = uVar35;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto LAB_10076a2ec;
      uVar25 = (uint)(byte)*puVar27;
    }
    else if (uVar25 == 2) {
      uVar25 = (uint)(ushort)*puVar27;
    }
    else if (uVar25 == 3) {
      uVar25 = (uint)(uint3)*puVar27;
    }
    else {
      uVar25 = *puVar27;
    }
    uVar24 = uVar25 | bVar17 - 2 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar24 = uVar25;
    }
    uVar24 = uVar24 + 2;
  }
LAB_10076a2ec:
  uVar23 = ~uVar28;
  uVar21 = ~uVar21;
  uVar25 = (uint)uVar2;
  if (uVar24 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar27);
  }
  else {
    if (uVar3 == 0) {
      if (*(byte *)((long)puVar27 + uVar2) != 0) {
        uVar24 = 0;
        if (uVar25 < 4) {
          uVar24 = *(byte *)((long)puVar27 + uVar2) - 1 << (ulong)((uVar25 & 3) << 3);
        }
        if (uVar25 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = 4;
          if (uVar25 < 4) {
            uVar19 = uVar25;
          }
          if ((int)uVar19 < 3) {
            if (uVar19 == 1) {
              uVar19 = (uint)(byte)*puVar27;
            }
            else {
              uVar19 = (uint)(ushort)*puVar27;
            }
          }
          else if (uVar19 == 3) {
            uVar19 = (uint)(uint3)*puVar27;
          }
          else {
            uVar19 = *puVar27;
          }
        }
        iVar8 = (uVar19 | uVar24) + 1;
        goto LAB_10076a408;
      }
    }
    else {
      if (uVar20 == uVar3) {
        puVar13 = puVar27;
        (**(code **)(lVar30 + 0x30))(puVar27,uVar20,lVar9);
        iVar8 = (int)puVar13;
      }
      else {
        uVar14 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
        if (uVar15 == uVar3) {
          (**(code **)(lVar34 + 0x30))(uVar14,uVar15,lVar10);
          iVar8 = (int)uVar14;
        }
        else {
          uVar14 = lVar1 + uVar14 & uVar21;
          (**(code **)(lVar32 + 0x30))(uVar14,iVar5,lVar11);
          iVar8 = 0;
          if ((int)uVar14 != 0) {
            iVar8 = (int)uVar14 + -1;
          }
        }
      }
LAB_10076a408:
      if (iVar8 != 0) goto LAB_10076a470;
    }
    (**(code **)(lVar30 + 8))(puVar27,lVar9);
    uVar14 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
    (**(code **)(lVar34 + 8))(uVar14,lVar10);
    uVar14 = lVar1 + uVar14;
    uVar12 = uVar14 & uVar21;
    (**(code **)(lVar32 + 0x30))(uVar12,1,lVar11);
    if ((int)uVar12 == 0) {
      (**(code **)(lVar32 + 8))(uVar14 & uVar21,lVar11);
    }
  }
LAB_10076a470:
  bVar17 = *(byte *)((long)puVar33 + uVar4);
  uVar24 = (uint)bVar17;
  if (1 < bVar17) {
    uVar19 = 4;
    if (uVar35 < 4) {
      uVar19 = uVar35;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10076a4f4;
      uVar19 = (uint)(byte)*puVar33;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar33;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar33;
    }
    else {
      uVar19 = *puVar33;
    }
    uVar24 = uVar19 | bVar17 - 2 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar24 = uVar19;
    }
    uVar24 = uVar24 + 2;
  }
LAB_10076a4f4:
  if (uVar24 == 1) {
    uVar29 = *(undefined8 *)puVar33;
    _swift_errorRetain(uVar29);
    *(undefined8 *)puVar27 = uVar29;
    bVar17 = 1;
    goto LAB_10076a6f8;
  }
  if (uVar3 == 0) {
    if (*(byte *)((long)puVar33 + uVar2) != 0) {
      uVar24 = 0;
      if (uVar25 < 4) {
        uVar24 = *(byte *)((long)puVar33 + uVar2) - 1 << (ulong)((uVar25 & 3) << 3);
      }
      if (uVar25 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = 4;
        if (uVar25 < 4) {
          uVar20 = uVar25;
        }
        if ((int)uVar20 < 3) {
          if (uVar20 == 1) {
            uVar20 = (uint)(byte)*puVar33;
          }
          else {
            uVar20 = (uint)(ushort)*puVar33;
          }
        }
        else if (uVar20 == 3) {
          uVar20 = (uint)(uint3)*puVar33;
        }
        else {
          uVar20 = *puVar33;
        }
      }
      if ((uVar20 | uVar24) != 0xffffffff) goto LAB_10076a6e4;
    }
  }
  else {
    if (uVar20 == uVar3) {
      pcVar18 = *(code **)(lVar30 + 0x30);
      puVar13 = puVar33;
      lVar16 = lVar9;
      uVar15 = uVar20;
LAB_10076a5a8:
      (*pcVar18)(puVar13,uVar15,lVar16);
      iVar5 = (int)puVar13;
    }
    else {
      puVar13 = (uint *)((ulong)((long)puVar33 + lVar22 + uVar28) & uVar23);
      if (uVar15 == uVar3) {
        pcVar18 = *(code **)(lVar34 + 0x30);
        lVar16 = lVar10;
        goto LAB_10076a5a8;
      }
      uVar14 = (ulong)(lVar1 + (long)puVar13) & uVar21;
      (**(code **)(lVar32 + 0x30))(uVar14,iVar5,lVar11);
      iVar5 = 0;
      if ((int)uVar14 != 0) {
        iVar5 = (int)uVar14 + -1;
      }
    }
    if (iVar5 != 0) {
LAB_10076a6e4:
      _memcpy(puVar27,puVar33,uVar31);
      bVar17 = 0;
      goto LAB_10076a6f8;
    }
  }
  (**(code **)(lVar30 + 0x10))(puVar27,puVar33,lVar9);
  uVar31 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
  uVar23 = (ulong)((long)puVar33 + lVar22 + uVar28) & uVar23;
  (**(code **)(lVar34 + 0x10))(uVar31,uVar23,lVar10);
  uVar31 = lVar1 + uVar31;
  uVar23 = lVar1 + uVar23;
  uVar28 = uVar23 & uVar21;
  (**(code **)(lVar32 + 0x30))(uVar28,1,lVar11);
  if ((int)uVar28 == 0) {
    (**(code **)(lVar32 + 0x10))(uVar31 & uVar21,uVar23 & uVar21,lVar11);
    (**(code **)(lVar32 + 0x38))(uVar31 & uVar21,0,1,lVar11);
  }
  else {
    _memcpy((void *)(uVar31 & uVar21),(void *)(uVar23 & uVar21),sVar26);
  }
  bVar17 = 0;
  if (uVar3 == 0) {
    bVar17 = 0;
    *(byte *)((long)puVar27 + uVar2) = 0;
  }
LAB_10076a6f8:
  *(byte *)((long)puVar27 + uVar4) = bVar17;
  return param_1;
}



/* Address: 0x10076a720 | FUN_10076a720 */

undefined8 * FUN_10076a720(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  size_t sVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  uint uVar29;
  
  *param_1 = *param_2;
  puVar8 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar7 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar26 = *(long *)(lVar10 + -8);
  uVar19 = *(uint *)(lVar26 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar8,puVar7);
  lVar23 = *(long *)(lVar11 + -8);
  uVar17 = *(uint *)(lVar23 + 0x50);
  uVar24 = (ulong)uVar17 & 0xff;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar8,puVar7);
  lVar28 = *(long *)(lVar12 + -8);
  iVar9 = *(int *)(lVar28 + 0x54);
  uVar18 = (ulong)*(uint *)(lVar28 + 0x50) & 0xff;
  uVar16 = (ulong)((uVar17 | uVar19 | *(uint *)(lVar28 + 0x50)) & 0xf8 | 7);
  puVar22 = (undefined8 *)(uVar16 + 8 + (long)param_1 & (uVar16 ^ 0xffffffffffffffff));
  puVar27 = (uint *)(uVar16 + 8 + (long)param_2 & (uVar16 ^ 0xffffffffffffffff));
  uVar17 = *(uint *)(lVar26 + 0x54);
  uVar5 = *(uint *)(lVar23 + 0x54);
  uVar19 = uVar5;
  if (uVar5 <= uVar17) {
    uVar19 = uVar17;
  }
  uVar3 = 0;
  if (iVar9 != 0) {
    uVar3 = iVar9 - 1;
  }
  if (uVar3 <= uVar19) {
    uVar3 = uVar19;
  }
  uVar16 = *(long *)(lVar26 + 0x40) + uVar24;
  lVar1 = *(long *)(lVar23 + 0x40) + uVar18;
  sVar21 = *(size_t *)(lVar28 + 0x40);
  if (iVar9 == 0) {
    sVar21 = sVar21 + 1;
  }
  uVar2 = (lVar1 + (uVar16 & (uVar24 ^ 0xffffffffffffffff)) & (uVar18 ^ 0xffffffffffffffff)) +
          sVar21;
  uVar25 = uVar2;
  if (uVar3 == 0) {
    uVar25 = uVar2 + 1;
  }
  uVar4 = uVar25;
  if (uVar25 < 9) {
    uVar4 = 8;
  }
  bVar6 = *(byte *)((long)puVar27 + uVar4);
  uVar19 = (uint)bVar6;
  if (1 < bVar6) {
    uVar29 = (uint)uVar4;
    uVar20 = 4;
    if (uVar29 < 4) {
      uVar20 = uVar29;
    }
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) goto LAB_10076a8d0;
      uVar20 = (uint)(byte)*puVar27;
    }
    else if (uVar20 == 2) {
      uVar20 = (uint)(ushort)*puVar27;
    }
    else if (uVar20 == 3) {
      uVar20 = (uint)(uint3)*puVar27;
    }
    else {
      uVar20 = *puVar27;
    }
    uVar19 = uVar20 | bVar6 - 2 << (ulong)((uVar29 & 3) << 3);
    if (3 < uVar29) {
      uVar19 = uVar20;
    }
    uVar19 = uVar19 + 2;
  }
LAB_10076a8d0:
  if (uVar19 == 1) {
    *puVar22 = *(undefined8 *)puVar27;
    uVar15 = 1;
    goto LAB_10076aad8;
  }
  uVar24 = ~uVar24;
  uVar18 = ~uVar18;
  if (uVar3 == 0) {
    if (*(byte *)((long)puVar27 + uVar2) != 0) {
      uVar17 = (uint)uVar2;
      uVar19 = 0;
      if (uVar17 < 4) {
        uVar19 = *(byte *)((long)puVar27 + uVar2) - 1 << (ulong)((uVar17 & 3) << 3);
      }
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar5 = 4;
        if (uVar17 < 4) {
          uVar5 = uVar17;
        }
        if ((int)uVar5 < 3) {
          if (uVar5 == 1) {
            uVar17 = (uint)(byte)*puVar27;
          }
          else {
            uVar17 = (uint)(ushort)*puVar27;
          }
        }
        else if (uVar5 == 3) {
          uVar17 = (uint)(uint3)*puVar27;
        }
        else {
          uVar17 = *puVar27;
        }
      }
      if ((uVar17 | uVar19) != 0xffffffff) goto LAB_10076a9cc;
    }
  }
  else {
    if (uVar17 == uVar3) {
      puVar13 = puVar27;
      (**(code **)(lVar26 + 0x30))(puVar27,uVar17,lVar10);
      iVar9 = (int)puVar13;
    }
    else {
      uVar14 = (ulong)(uVar16 + (long)puVar27) & uVar24;
      if (uVar5 == uVar3) {
        (**(code **)(lVar23 + 0x30))(uVar14,uVar5,lVar11);
        iVar9 = (int)uVar14;
      }
      else {
        uVar14 = lVar1 + uVar14 & uVar18;
        (**(code **)(lVar28 + 0x30))(uVar14,iVar9,lVar12);
        iVar9 = 0;
        if ((int)uVar14 != 0) {
          iVar9 = (int)uVar14 + -1;
        }
      }
    }
    if (iVar9 != 0) {
LAB_10076a9cc:
      _memcpy(puVar22,puVar27,uVar25);
      uVar15 = 0;
      goto LAB_10076aad8;
    }
  }
  (**(code **)(lVar26 + 0x20))(puVar22,puVar27,lVar10);
  uVar25 = uVar16 + (long)puVar22 & uVar24;
  uVar24 = (ulong)(uVar16 + (long)puVar27) & uVar24;
  (**(code **)(lVar23 + 0x20))(uVar25,uVar24,lVar11);
  uVar25 = lVar1 + uVar25;
  uVar24 = lVar1 + uVar24;
  uVar16 = uVar24 & uVar18;
  (**(code **)(lVar28 + 0x30))(uVar16,1,lVar12);
  if ((int)uVar16 == 0) {
    (**(code **)(lVar28 + 0x20))(uVar25 & uVar18,uVar24 & uVar18,lVar12);
    (**(code **)(lVar28 + 0x38))(uVar25 & uVar18,0,1,lVar12);
  }
  else {
    _memcpy((void *)(uVar25 & uVar18),(void *)(uVar24 & uVar18),sVar21);
  }
  uVar15 = 0;
  if (uVar3 == 0) {
    *(undefined1 *)((long)puVar22 + uVar2) = 0;
  }
LAB_10076aad8:
  *(undefined1 *)((long)puVar22 + uVar4) = uVar15;
  return param_1;
}



/* Address: 0x10076ab00 | FUN_10076ab00 */

undefined8 * FUN_10076ab00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  byte bVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  size_t sVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  
  *param_1 = *param_2;
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar29 = *(long *)(lVar9 + -8);
  uVar24 = *(uint *)(lVar29 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar7,puVar6);
  lVar33 = *(long *)(lVar10 + -8);
  uVar20 = *(uint *)(lVar33 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar7,puVar6);
  lVar31 = *(long *)(lVar11 + -8);
  uVar21 = (ulong)((uVar20 | uVar24 | *(uint *)(lVar31 + 0x50)) & 0xf8 | 7);
  puVar27 = (uint *)(uVar21 + 8 + (long)param_1 & (uVar21 ^ 0xffffffffffffffff));
  puVar32 = (uint *)(uVar21 + 8 + (long)param_2 & (uVar21 ^ 0xffffffffffffffff));
  if (puVar27 == puVar32) {
    return param_1;
  }
  uVar28 = (ulong)uVar20 & 0xff;
  uVar21 = (ulong)*(uint *)(lVar31 + 0x50) & 0xff;
  uVar20 = *(uint *)(lVar29 + 0x54);
  uVar15 = *(uint *)(lVar33 + 0x54);
  uVar24 = uVar15;
  if (uVar15 <= uVar20) {
    uVar24 = uVar20;
  }
  iVar5 = *(int *)(lVar31 + 0x54);
  uVar3 = 0;
  if (iVar5 != 0) {
    uVar3 = iVar5 - 1;
  }
  if (uVar3 <= uVar24) {
    uVar3 = uVar24;
  }
  lVar22 = *(long *)(lVar29 + 0x40);
  lVar1 = *(long *)(lVar33 + 0x40) + uVar21;
  sVar26 = *(size_t *)(lVar31 + 0x40);
  if (iVar5 == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar2 = (lVar1 + (lVar22 + uVar28 & (uVar28 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)
          ) + sVar26;
  uVar30 = uVar2;
  if (uVar3 == 0) {
    uVar30 = uVar2 + 1;
  }
  uVar4 = uVar30;
  if (uVar30 < 9) {
    uVar4 = 8;
  }
  bVar17 = *(byte *)((long)puVar27 + uVar4);
  uVar24 = (uint)bVar17;
  uVar34 = (uint)uVar4;
  if (1 < bVar17) {
    uVar25 = 4;
    if (uVar34 < 4) {
      uVar25 = uVar34;
    }
    if ((int)uVar25 < 2) {
      if (uVar25 == 0) goto LAB_10076acd0;
      uVar25 = (uint)(byte)*puVar27;
    }
    else if (uVar25 == 2) {
      uVar25 = (uint)(ushort)*puVar27;
    }
    else if (uVar25 == 3) {
      uVar25 = (uint)(uint3)*puVar27;
    }
    else {
      uVar25 = *puVar27;
    }
    uVar24 = uVar25 | bVar17 - 2 << (ulong)((uVar34 & 3) << 3);
    if (3 < uVar34) {
      uVar24 = uVar25;
    }
    uVar24 = uVar24 + 2;
  }
LAB_10076acd0:
  uVar23 = ~uVar28;
  uVar21 = ~uVar21;
  uVar25 = (uint)uVar2;
  if (uVar24 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar27);
  }
  else {
    if (uVar3 == 0) {
      if (*(byte *)((long)puVar27 + uVar2) != 0) {
        uVar24 = 0;
        if (uVar25 < 4) {
          uVar24 = *(byte *)((long)puVar27 + uVar2) - 1 << (ulong)((uVar25 & 3) << 3);
        }
        if (uVar25 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = 4;
          if (uVar25 < 4) {
            uVar19 = uVar25;
          }
          if ((int)uVar19 < 3) {
            if (uVar19 == 1) {
              uVar19 = (uint)(byte)*puVar27;
            }
            else {
              uVar19 = (uint)(ushort)*puVar27;
            }
          }
          else if (uVar19 == 3) {
            uVar19 = (uint)(uint3)*puVar27;
          }
          else {
            uVar19 = *puVar27;
          }
        }
        iVar8 = (uVar19 | uVar24) + 1;
        goto LAB_10076adec;
      }
    }
    else {
      if (uVar20 == uVar3) {
        puVar13 = puVar27;
        (**(code **)(lVar29 + 0x30))(puVar27,uVar20,lVar9);
        iVar8 = (int)puVar13;
      }
      else {
        uVar14 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
        if (uVar15 == uVar3) {
          (**(code **)(lVar33 + 0x30))(uVar14,uVar15,lVar10);
          iVar8 = (int)uVar14;
        }
        else {
          uVar14 = lVar1 + uVar14 & uVar21;
          (**(code **)(lVar31 + 0x30))(uVar14,iVar5,lVar11);
          iVar8 = 0;
          if ((int)uVar14 != 0) {
            iVar8 = (int)uVar14 + -1;
          }
        }
      }
LAB_10076adec:
      if (iVar8 != 0) goto LAB_10076ae54;
    }
    (**(code **)(lVar29 + 8))(puVar27,lVar9);
    uVar14 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
    (**(code **)(lVar33 + 8))(uVar14,lVar10);
    uVar14 = lVar1 + uVar14;
    uVar12 = uVar14 & uVar21;
    (**(code **)(lVar31 + 0x30))(uVar12,1,lVar11);
    if ((int)uVar12 == 0) {
      (**(code **)(lVar31 + 8))(uVar14 & uVar21,lVar11);
    }
  }
LAB_10076ae54:
  bVar17 = *(byte *)((long)puVar32 + uVar4);
  uVar24 = (uint)bVar17;
  if (1 < bVar17) {
    uVar19 = 4;
    if (uVar34 < 4) {
      uVar19 = uVar34;
    }
    if ((int)uVar19 < 2) {
      if (uVar19 == 0) goto LAB_10076aed8;
      uVar19 = (uint)(byte)*puVar32;
    }
    else if (uVar19 == 2) {
      uVar19 = (uint)(ushort)*puVar32;
    }
    else if (uVar19 == 3) {
      uVar19 = (uint)(uint3)*puVar32;
    }
    else {
      uVar19 = *puVar32;
    }
    uVar24 = uVar19 | bVar17 - 2 << (ulong)((uVar34 & 3) << 3);
    if (3 < uVar34) {
      uVar24 = uVar19;
    }
    uVar24 = uVar24 + 2;
  }
LAB_10076aed8:
  if (uVar24 == 1) {
    *(undefined8 *)puVar27 = *(undefined8 *)puVar32;
    bVar17 = 1;
    goto LAB_10076b0d4;
  }
  if (uVar3 == 0) {
    if (*(byte *)((long)puVar32 + uVar2) != 0) {
      uVar24 = 0;
      if (uVar25 < 4) {
        uVar24 = *(byte *)((long)puVar32 + uVar2) - 1 << (ulong)((uVar25 & 3) << 3);
      }
      if (uVar25 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = 4;
        if (uVar25 < 4) {
          uVar20 = uVar25;
        }
        if ((int)uVar20 < 3) {
          if (uVar20 == 1) {
            uVar20 = (uint)(byte)*puVar32;
          }
          else {
            uVar20 = (uint)(ushort)*puVar32;
          }
        }
        else if (uVar20 == 3) {
          uVar20 = (uint)(uint3)*puVar32;
        }
        else {
          uVar20 = *puVar32;
        }
      }
      if ((uVar20 | uVar24) != 0xffffffff) goto LAB_10076b0c0;
    }
  }
  else {
    if (uVar20 == uVar3) {
      pcVar18 = *(code **)(lVar29 + 0x30);
      puVar13 = puVar32;
      lVar16 = lVar9;
      uVar15 = uVar20;
LAB_10076af84:
      (*pcVar18)(puVar13,uVar15,lVar16);
      iVar5 = (int)puVar13;
    }
    else {
      puVar13 = (uint *)((ulong)((long)puVar32 + lVar22 + uVar28) & uVar23);
      if (uVar15 == uVar3) {
        pcVar18 = *(code **)(lVar33 + 0x30);
        lVar16 = lVar10;
        goto LAB_10076af84;
      }
      uVar14 = (ulong)(lVar1 + (long)puVar13) & uVar21;
      (**(code **)(lVar31 + 0x30))(uVar14,iVar5,lVar11);
      iVar5 = 0;
      if ((int)uVar14 != 0) {
        iVar5 = (int)uVar14 + -1;
      }
    }
    if (iVar5 != 0) {
LAB_10076b0c0:
      _memcpy(puVar27,puVar32,uVar30);
      bVar17 = 0;
      goto LAB_10076b0d4;
    }
  }
  (**(code **)(lVar29 + 0x20))(puVar27,puVar32,lVar9);
  uVar30 = (ulong)((long)puVar27 + lVar22 + uVar28) & uVar23;
  uVar23 = (ulong)((long)puVar32 + lVar22 + uVar28) & uVar23;
  (**(code **)(lVar33 + 0x20))(uVar30,uVar23,lVar10);
  uVar30 = lVar1 + uVar30;
  uVar23 = lVar1 + uVar23;
  uVar28 = uVar23 & uVar21;
  (**(code **)(lVar31 + 0x30))(uVar28,1,lVar11);
  if ((int)uVar28 == 0) {
    (**(code **)(lVar31 + 0x20))(uVar30 & uVar21,uVar23 & uVar21,lVar11);
    (**(code **)(lVar31 + 0x38))(uVar30 & uVar21,0,1,lVar11);
  }
  else {
    _memcpy((void *)(uVar30 & uVar21),(void *)(uVar23 & uVar21),sVar26);
  }
  bVar17 = 0;
  if (uVar3 == 0) {
    bVar17 = 0;
    *(byte *)((long)puVar27 + uVar2) = 0;
  }
LAB_10076b0d4:
  *(byte *)((long)puVar27 + uVar4) = bVar17;
  return param_1;
}



/* Address: 0x10076b0fc | FUN_10076b0fc */

uint FUN_10076b0fc(ulong *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar14 = *(long *)(lVar7 + -8);
  uVar9 = *(uint *)(lVar14 + 0x54);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),puVar6,puVar5);
  lVar7 = *(long *)(lVar7 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  if (*(uint *)(lVar7 + 0x54) <= uVar9) {
    uVar4 = uVar9;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),puVar6,puVar5);
  lVar8 = *(long *)(lVar8 + -8);
  iVar3 = *(int *)(lVar8 + 0x54);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  uVar11 = (ulong)(iVar1 == 0 && uVar4 == 0);
  uVar12 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar13 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  if (iVar3 == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 + *(long *)(lVar8 + 0x40) +
                    ((*(long *)(lVar14 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar7 + 0x40) + uVar13 & (uVar13 ^ 0xffffffffffffffff));
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (-1 < param_2) goto LAB_10076b1fc;
  uVar12 = (ulong)((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar14 + 0x50) | *(uint *)(lVar8 + 0x50)) &
                   0xf8 | 7);
  uVar11 = uVar11 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)uVar11;
  uVar4 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar10 = (uint)(param_2 + -0x7fffffff + ~(-1 << (ulong)(uVar4 & 0x1f))) >> (ulong)(uVar4 & 0x1f)
    ;
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_10076b1fc;
      goto LAB_10076b274;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar11);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar11);
    }
  }
  else {
LAB_10076b274:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar11);
  }
  if (uVar10 != 0) {
    uVar2 = 0;
    if (uVar9 < 4) {
      uVar2 = uVar10 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar9 != 0) {
      uVar4 = 4;
      if (uVar9 < 4) {
        uVar4 = uVar9;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar11 = (ulong)(byte)*param_1;
        }
        else {
          uVar11 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar11 = (ulong)(uint3)*param_1;
      }
      else {
        uVar11 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar11 | uVar2) ^ 0x80000000;
  }
LAB_10076b1fc:
  uVar11 = *param_1;
  if (0xfffffffe < uVar11) {
    uVar11 = 0xffffffff;
  }
  return (int)uVar11 + 1;
}



/* Address: 0x10076b314 | FUN_10076b314 */

void FUN_10076b314(ulong *param_1,uint param_2,int param_3,long param_4)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar16 = *(long *)(lVar8 + -8);
  uVar3 = *(uint *)(lVar16 + 0x54);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x18),puVar6,puVar5);
  lVar8 = *(long *)(lVar8 + -8);
  uVar14 = *(uint *)(lVar8 + 0x54);
  if (*(uint *)(lVar8 + 0x54) <= uVar3) {
    uVar14 = uVar3;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x20),puVar6,puVar5);
  bVar7 = 0;
  lVar9 = *(long *)(lVar9 + -8);
  iVar2 = *(int *)(lVar9 + 0x54);
  iVar15 = 0;
  if (iVar2 != 0) {
    iVar15 = iVar2 + -1;
  }
  uVar11 = (ulong)(iVar15 == 0 && uVar14 == 0);
  uVar12 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  uVar13 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  uVar10 = (ulong)((*(uint *)(lVar8 + 0x50) | *(uint *)(lVar16 + 0x50) | *(uint *)(lVar9 + 0x50)) &
                   0xf8 | 7);
  if (iVar2 == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 + *(long *)(lVar9 + 0x40) +
                    ((*(long *)(lVar16 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar8 + 0x40) + uVar13 & (uVar13 ^ 0xffffffffffffffff));
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  sVar1 = uVar11 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) + 1;
  uVar14 = (uint)sVar1;
  if (param_3 < 0) {
    if (uVar14 < 4) {
      uVar3 = (uint)(param_3 + -0x7fffffff + ~(-1 << (ulong)(uVar14 << 3 & 0x1f))) >>
              (ulong)(uVar14 << 3 & 0x1f);
      bVar7 = 2;
      if (0xfffe < uVar3) {
        bVar7 = 4;
      }
      if (uVar3 < 0xff) {
        bVar7 = uVar3 != 0;
      }
    }
    else {
      bVar7 = 1;
    }
  }
  if ((int)param_2 < 0) {
    if (uVar14 < 4) {
      iVar15 = ((param_2 & 0x7fffffff) >> (ulong)(uVar14 << 3 & 0x1f)) + 1;
      if (uVar14 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar14 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar3;
        if (uVar14 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar14 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2 & 0x7fffffff;
      iVar15 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar15;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar15;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar15;
    }
  }
  else {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x10076b5a8 | FUN_10076b5a8 */

void FUN_10076b5a8(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if ((long)param_3 < 0) {
    param_1 = param_3 & 0x7fffffffffffffff;
    _swift_errorRetain(param_2);
    param_2 = param_4;
  }
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x10076b5f0 | FUN_10076b5f0 */

void FUN_10076b5f0(undefined8 *param_1)

{
  FUN_10076b600(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Address: 0x10076b600 | FUN_10076b600 */

void FUN_10076b600(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (-1 < (long)param_3) {
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  _swift_errorRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _swift_release(param_3 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x10076b65c | FUN_10076b65c */

undefined8 * FUN_10076b65c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_10076b5a8(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Address: 0x10076b6b0 | FUN_10076b6b0 */

undefined8 * FUN_10076b6b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  FUN_10076b5a8(uVar1,uVar5,uVar2,uVar6);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  FUN_10076b600(uVar3,uVar7,uVar4,uVar8);
  return param_1;
}



/* Address: 0x10076b710 | FUN_10076b710 */

void FUN_10076b710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10076b71c | FUN_10076b71c */

undefined8 * FUN_10076b71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_10076b600(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x10076b758 | FUN_10076b758 */

int FUN_10076b758(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[8] != '\0')) {
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



/* Address: 0x10076b7d4 | FUN_10076b7d4 */

void FUN_10076b7d4(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[1] = 0;
      param_1[2] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      param_1[3] = 0;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    param_1[1] = 0;
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x10076b848 | FUN_10076b848 */

void FUN_10076b848(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8;
  param_1[2] = param_1[2] & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x10076b868 | FUN_10076b868 */

void FUN_10076b868(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf020);
  return;
}



/* Address: 0x10076b874 | FUN_10076b874 */

void FUN_10076b874(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  long lVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 *local_60;
  undefined *puStack_58;
  undefined1 *local_50;
  undefined *puStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  lVar5 = 0x13f;
  _swift_checkMetadataState();
  if (uVar9 < 0x40) {
    lVar11 = *(long *)(lVar5 + -8);
    uVar9 = *(ulong *)(param_1 + 0x18);
    lVar6 = 0x13f;
    _swift_checkMetadataState();
    if (uVar9 < 0x40) {
      uVar10 = *(ulong *)(param_1 + 0x20);
      uVar9 = uVar10;
      OVar3 = Swift::Optional::typeMetadataAccessor();
      if (uVar9 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_80,lVar11 + 0x40,*(long *)(lVar6 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40);
        puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
        puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
        puStack_58 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
        uVar7 = 0xff;
        local_60 = auStack_80;
        _swift_getAssociatedTypeWitness
                  (0xff,*(undefined8 *)(param_1 + 0x28),lVar5,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
        uVar8 = 0xff;
        _swift_getAssociatedTypeWitness(0xff,*(undefined8 *)(param_1 + 0x30),lVar6,puVar2,puVar1);
        _swift_getAssociatedTypeWitness(0xff,*(undefined8 *)(param_1 + 0x38),uVar10,puVar2,puVar1);
        OVar3 = Swift::Optional::typeMetadataAccessor();
        _swift_getTupleTypeMetadata3(0xff,uVar7,uVar8,OVar3.value,0,0);
        OVar3 = Swift::Optional::typeMetadataAccessor();
        uVar9 = CONCAT71(extraout_var_00,OVar3.value);
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        RVar4 = Swift::Result::typeMetadataAccessor();
        if (uVar9 < 0x40) {
          _swift_getTupleTypeLayout2
                    (auStack_a0,&DAT_100c76a28,
                     *(long *)(CONCAT71(extraout_var_01,RVar4.value) + -8) + 0x40);
          puStack_48 = &DAT_100c76a28;
          local_50 = auStack_a0;
          _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_60);
        }
      }
    }
  }
  return;
}



/* Address: 0x10076ba44 | FUN_10076ba44 */

long * FUN_10076ba44(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  size_t sVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  size_t sVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  long lVar43;
  uint *puVar44;
  
  puVar16 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar15 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar22 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar24 = *(long *)(lVar22 + -8);
  lVar27 = *(long *)(lVar9 + -8);
  uVar26 = *(uint *)(lVar27 + 0x50);
  uVar29 = (ulong)uVar26 & 0xff;
  uVar40 = *(long *)(lVar24 + 0x40) + uVar29;
  lVar30 = *(long *)(lVar27 + 0x40);
  lVar33 = *(long *)(lVar10 + -8);
  uVar32 = *(uint *)(lVar33 + 0x50);
  uVar34 = (ulong)uVar32 & 0xff;
  sVar28 = *(size_t *)(lVar33 + 0x40);
  if (*(int *)(lVar33 + 0x54) == 0) {
    sVar28 = sVar28 + 1;
  }
  uVar1 = sVar28 + (lVar30 + uVar34 + (uVar40 & (uVar29 ^ 0xffffffffffffffff)) &
                   (uVar34 ^ 0xffffffffffffffff));
  lVar18 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar22,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar43 = *(long *)(lVar18 + -8);
  uVar36 = *(uint *)(lVar43 + 0x50);
  lVar19 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar16,puVar15);
  lVar38 = *(long *)(lVar19 + -8);
  uVar11 = *(uint *)(lVar38 + 0x50);
  uVar37 = (ulong)uVar11 & 0xff;
  lVar20 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar16,puVar15);
  lVar42 = *(long *)(lVar20 + -8);
  iVar17 = *(int *)(lVar42 + 0x54);
  uVar31 = (ulong)*(uint *)(lVar42 + 0x50) & 0xff;
  uVar14 = uVar11 | uVar36 | *(uint *)(lVar42 + 0x50);
  uVar25 = (ulong)(uVar14 & 0xf8 | 7);
  uVar11 = *(uint *)(lVar43 + 0x54);
  uVar12 = *(uint *)(lVar38 + 0x54);
  uVar36 = uVar12;
  if (uVar12 <= uVar11) {
    uVar36 = uVar11;
  }
  uVar7 = 0;
  if (iVar17 != 0) {
    uVar7 = iVar17 - 1;
  }
  if (uVar7 <= uVar36) {
    uVar7 = uVar36;
  }
  uVar2 = *(long *)(lVar43 + 0x40) + uVar37;
  lVar3 = *(long *)(lVar38 + 0x40) + uVar31;
  sVar35 = *(size_t *)(lVar42 + 0x40);
  if (iVar17 == 0) {
    sVar35 = sVar35 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar37 ^ 0xffffffffffffffff)) & (uVar31 ^ 0xffffffffffffffff)) + sVar35
  ;
  uVar6 = uVar4;
  if (uVar7 == 0) {
    uVar6 = uVar4 + 1;
  }
  uVar8 = uVar6;
  if (uVar6 < 9) {
    uVar8 = 8;
  }
  lVar5 = uVar8 + (uVar25 + 8 & (uVar25 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar14 = uVar14 | uVar32 | uVar26 | *(uint *)(lVar24 + 0x50);
  if (((uVar14 & 0x1000f8) != 0) || (0x18 < uVar1 + 1)) {
    uVar40 = (ulong)(uVar14 & 0xf8 | 7);
    lVar30 = *param_2;
    *param_1 = lVar30;
    _swift_retain();
    return (long *)(lVar30 + (uVar40 + 0x10 & (uVar40 ^ 0xffffffffffffffff)));
  }
  uVar32 = (uint)*(byte *)((long)param_2 + uVar1);
  if (3 < *(byte *)((long)param_2 + uVar1)) {
    uVar32 = (int)*param_2 + 4;
  }
  if ((int)uVar32 < 2) {
    if (uVar32 != 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar25 = ~uVar34;
    (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar22);
    uVar37 = uVar40 + (long)param_1 & ~uVar29;
    uVar40 = uVar40 + (long)param_2 & ~uVar29;
    (**(code **)(lVar27 + 0x10))(uVar37,uVar40,lVar9);
    lVar30 = lVar30 + uVar34;
    uVar37 = uVar37 + lVar30;
    uVar40 = uVar40 + lVar30;
    uVar29 = uVar40 & uVar25;
    (**(code **)(lVar33 + 0x30))(uVar29,1,lVar10);
    if ((int)uVar29 != 0) {
      _memcpy((void *)(uVar37 & uVar25),(void *)(uVar40 & uVar25),sVar28);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar33 + 0x10))(uVar37 & uVar25,uVar40 & uVar25,lVar10);
    (**(code **)(lVar33 + 0x38))(uVar37 & uVar25,0,1,lVar10);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  if (uVar32 != 2) {
    *param_1 = *param_2;
    *(undefined1 *)((long)param_1 + uVar1) = 3;
    return param_1;
  }
  *param_1 = *param_2;
  puVar41 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar44 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar13 = *(byte *)((long)puVar44 + uVar8);
  uVar32 = (uint)bVar13;
  if (bVar13 < 2) {
LAB_10076be10:
    if (uVar32 != 1) {
LAB_10076be50:
      uVar37 = ~uVar37;
      uVar31 = ~uVar31;
      if (uVar7 == 0) {
        if (*(byte *)((long)puVar44 + uVar4) != 0) {
          uVar26 = (uint)uVar4;
          uVar32 = 0;
          if (uVar26 < 4) {
            uVar32 = *(byte *)((long)puVar44 + uVar4) - 1 << (ulong)((uVar26 & 3) << 3);
          }
          if (uVar26 == 0) {
            uVar26 = 0;
          }
          else {
            uVar36 = 4;
            if (uVar26 < 4) {
              uVar36 = uVar26;
            }
            if ((int)uVar36 < 3) {
              if (uVar36 == 1) {
                uVar26 = (uint)(byte)*puVar44;
              }
              else {
                uVar26 = (uint)(ushort)*puVar44;
              }
            }
            else if (uVar36 == 3) {
              uVar26 = (uint)(uint3)*puVar44;
            }
            else {
              uVar26 = *puVar44;
            }
          }
          iVar17 = (uVar26 | uVar32) + 1;
          goto LAB_10076bf6c;
        }
      }
      else {
        if (uVar11 == uVar7) {
          puVar21 = puVar44;
          (**(code **)(lVar43 + 0x30))(puVar44,uVar11,lVar18);
          iVar17 = (int)puVar21;
        }
        else {
          uVar40 = (ulong)(uVar2 + (long)puVar44) & uVar37;
          if (uVar12 == uVar7) {
            (**(code **)(lVar38 + 0x30))(uVar40,uVar12,lVar19);
            iVar17 = (int)uVar40;
          }
          else {
            uVar40 = lVar3 + uVar40 & uVar31;
            (**(code **)(lVar42 + 0x30))(uVar40,iVar17,lVar20);
            iVar17 = 0;
            if ((int)uVar40 != 0) {
              iVar17 = (int)uVar40 + -1;
            }
          }
        }
LAB_10076bf6c:
        if (iVar17 != 0) {
          _memcpy(puVar41,puVar44,uVar6);
          uVar23 = 0;
          goto LAB_10076c05c;
        }
      }
      (**(code **)(lVar43 + 0x10))(puVar41,puVar44,lVar18);
      uVar40 = uVar2 + (long)puVar41 & uVar37;
      uVar37 = (ulong)(uVar2 + (long)puVar44) & uVar37;
      (**(code **)(lVar38 + 0x10))(uVar40,uVar37,lVar19);
      uVar40 = lVar3 + uVar40;
      uVar37 = lVar3 + uVar37;
      uVar29 = uVar37 & uVar31;
      (**(code **)(lVar42 + 0x30))(uVar29,1,lVar20);
      if ((int)uVar29 == 0) {
        (**(code **)(lVar42 + 0x10))(uVar40 & uVar31,uVar37 & uVar31,lVar20);
        (**(code **)(lVar42 + 0x38))(uVar40 & uVar31,0,1,lVar20);
      }
      else {
        _memcpy((void *)(uVar40 & uVar31),(void *)(uVar37 & uVar31),sVar35);
      }
      if (uVar7 == 0) {
        *(undefined1 *)((long)puVar41 + uVar4) = 0;
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
      }
      goto LAB_10076c05c;
    }
  }
  else {
    uVar36 = (uint)uVar8;
    uVar26 = 4;
    if (uVar36 < 4) {
      uVar26 = uVar36;
    }
    if ((int)uVar26 < 2) {
      if (uVar26 == 0) goto LAB_10076be10;
      uVar32 = (uint)(byte)*puVar44;
    }
    else if (uVar26 == 2) {
      uVar32 = (uint)(ushort)*puVar44;
    }
    else if (uVar26 == 3) {
      uVar32 = (uint)(uint3)*puVar44;
    }
    else {
      uVar32 = *puVar44;
    }
    if (3 < uVar36) {
      uVar32 = uVar32 + 2;
      goto LAB_10076be10;
    }
    if ((uVar32 | bVar13 - 2 << (ulong)((uVar36 & 3) << 3)) != 0xffffffff) goto LAB_10076be50;
  }
  uVar39 = *(undefined8 *)puVar44;
  _swift_errorRetain(uVar39);
  *puVar41 = uVar39;
  uVar23 = 1;
LAB_10076c05c:
  *(undefined1 *)((long)puVar41 + uVar8) = uVar23;
  *(undefined1 *)((long)param_1 + uVar1) = 2;
  return param_1;
}



/* Address: 0x10076c06c | FUN_10076c06c */

void FUN_10076c06c(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  code *UNRECOVERED_JUMPTABLE;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar11 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar7 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(param_2 + 0x18);
  lVar18 = *(long *)(lVar7 + -8);
  lVar20 = *(long *)(lVar8 + -8);
  uVar23 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar31 = *(long *)(lVar18 + 0x40) + uVar23;
  lVar21 = *(long *)(lVar20 + 0x40);
  lVar16 = *(long *)(param_2 + 0x20);
  lVar32 = *(long *)(lVar16 + -8);
  uVar24 = (ulong)*(byte *)(lVar32 + 0x50);
  lVar22 = *(long *)(lVar32 + 0x40);
  if (*(int *)(lVar32 + 0x54) == 0) {
    lVar22 = lVar22 + 1;
  }
  uVar1 = lVar22 + (lVar21 + uVar24 + (uVar31 & (uVar23 ^ 0xffffffffffffffff)) &
                   (uVar24 ^ 0xffffffffffffffff));
  lVar22 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar35 = *(long *)(lVar22 + -8);
  uVar30 = *(uint *)(lVar35 + 0x50);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar8,puVar12,puVar11);
  lVar36 = *(long *)(lVar13 + -8);
  uVar19 = *(uint *)(lVar36 + 0x50);
  uVar33 = (ulong)uVar19 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar16,puVar12,puVar11);
  lVar37 = *(long *)(lVar14 + -8);
  iVar17 = *(int *)(lVar37 + 0x54);
  uVar25 = (ulong)*(uint *)(lVar37 + 0x50) & 0xff;
  uVar28 = (ulong)((uVar19 | uVar30 | *(uint *)(lVar37 + 0x50)) & 0xf8 | 7);
  uVar19 = *(uint *)(lVar35 + 0x54);
  uVar9 = *(uint *)(lVar36 + 0x54);
  uVar30 = uVar9;
  if (uVar9 <= uVar19) {
    uVar30 = uVar19;
  }
  uVar6 = 0;
  if (iVar17 != 0) {
    uVar6 = iVar17 - 1;
  }
  if (uVar6 <= uVar30) {
    uVar6 = uVar30;
  }
  uVar2 = *(long *)(lVar35 + 0x40) + uVar33;
  lVar3 = *(long *)(lVar36 + 0x40) + uVar25;
  lVar27 = *(long *)(lVar37 + 0x40);
  if (iVar17 == 0) {
    lVar27 = lVar27 + 1;
  }
  uVar4 = lVar27 + (lVar3 + (uVar2 & (uVar33 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff))
  ;
  uVar5 = uVar4;
  if (uVar6 == 0) {
    uVar5 = uVar4 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar27 = uVar5 + (uVar28 + 8 & (uVar28 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar27 + 1U) {
    uVar1 = lVar27 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar10 = *(byte *)((long)param_1 + uVar1);
  uVar30 = (uint)bVar10;
  if (3 < bVar10) {
    uVar26 = (uint)uVar1;
    uVar29 = 4;
    if (uVar26 < 4) {
      uVar29 = uVar26;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto joined_r0x00010076c284;
      uVar30 = (uint)(byte)*param_1;
    }
    else if (uVar29 == 2) {
      uVar30 = (uint)(ushort)*param_1;
    }
    else if (uVar29 == 3) {
      uVar30 = (uint)(uint3)*param_1;
    }
    else {
      uVar30 = *param_1;
    }
    if (uVar26 < 4) {
      uVar30 = (uVar30 | bVar10 - 4 << (ulong)((uVar26 & 3) << 3)) + 4;
    }
    else {
      uVar30 = uVar30 + 4;
    }
  }
joined_r0x00010076c284:
  if ((int)uVar30 < 2) {
    if (uVar30 != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
    (**(code **)(lVar18 + 8))(param_1,lVar7);
    uVar31 = (ulong)(uVar31 + (long)param_1) & ~uVar23;
    (**(code **)(lVar20 + 8))(uVar31,lVar8);
    uVar31 = uVar31 + lVar21 + uVar24;
    uVar23 = uVar31 & ~uVar24;
    (**(code **)(lVar32 + 0x30))(uVar23,1,lVar16);
    if ((int)uVar23 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar32 + 8);
    uVar31 = uVar31 & ~uVar24;
    goto LAB_10076c300;
  }
  if (uVar30 != 2) {
    return;
  }
  puVar34 = (uint *)((ulong)((long)param_1 + uVar28 + 8) & ~uVar28);
  bVar10 = *(byte *)((long)puVar34 + uVar5);
  uVar30 = (uint)bVar10;
  if (1 < bVar10) {
    uVar26 = (uint)uVar5;
    uVar29 = 4;
    if (uVar26 < 4) {
      uVar29 = uVar26;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_10076c3f4;
      uVar29 = (uint)(byte)*puVar34;
    }
    else if (uVar29 == 2) {
      uVar29 = (uint)(ushort)*puVar34;
    }
    else if (uVar29 == 3) {
      uVar29 = (uint)(uint3)*puVar34;
    }
    else {
      uVar29 = *puVar34;
    }
    uVar30 = uVar29 | bVar10 - 2 << (ulong)((uVar26 & 3) << 3);
    if (3 < uVar26) {
      uVar30 = uVar29;
    }
    uVar30 = uVar30 + 2;
  }
LAB_10076c3f4:
  if (uVar30 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar34);
    return;
  }
  uVar25 = ~uVar25;
  if (uVar6 == 0) {
    if (*(byte *)((long)puVar34 + uVar4) != 0) {
      uVar19 = (uint)uVar4;
      uVar30 = 0;
      if (uVar19 < 4) {
        uVar30 = *(byte *)((long)puVar34 + uVar4) - 1 << (ulong)((uVar19 & 3) << 3);
      }
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar19 < 4) {
          uVar9 = uVar19;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar19 = (uint)(byte)*puVar34;
          }
          else {
            uVar19 = (uint)(ushort)*puVar34;
          }
        }
        else if (uVar9 == 3) {
          uVar19 = (uint)(uint3)*puVar34;
        }
        else {
          uVar19 = *puVar34;
        }
      }
      iVar17 = (uVar19 | uVar30) + 1;
      goto LAB_10076c520;
    }
  }
  else {
    if (uVar19 == uVar6) {
      puVar15 = puVar34;
      (**(code **)(lVar35 + 0x30))(puVar34,uVar19,lVar22);
      iVar17 = (int)puVar15;
    }
    else {
      uVar31 = (ulong)(uVar2 + (long)puVar34) & ~uVar33;
      if (uVar9 == uVar6) {
        (**(code **)(lVar36 + 0x30))(uVar31,uVar9,lVar13);
        iVar17 = (int)uVar31;
      }
      else {
        uVar31 = lVar3 + uVar31 & uVar25;
        (**(code **)(lVar37 + 0x30))(uVar31,iVar17,lVar14);
        iVar17 = 0;
        if ((int)uVar31 != 0) {
          iVar17 = (int)uVar31 + -1;
        }
      }
    }
LAB_10076c520:
    if (iVar17 != 0) {
      return;
    }
  }
  (**(code **)(lVar35 + 8))(puVar34,lVar22);
  uVar31 = (ulong)(uVar2 + (long)puVar34) & ~uVar33;
  (**(code **)(lVar36 + 8))(uVar31,lVar13);
  uVar31 = lVar3 + uVar31;
  uVar23 = uVar31 & uVar25;
  (**(code **)(lVar37 + 0x30))(uVar23,1,lVar14);
  if ((int)uVar23 != 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar37 + 8);
  uVar31 = uVar31 & uVar25;
  lVar16 = lVar14;
LAB_10076c300:
                    /* WARNING: Could not recover jumptable at 0x00010076c31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar31,lVar16);
  return;
}


