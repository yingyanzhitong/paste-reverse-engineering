/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006600e8 | FUN_1006600e8 */

void FUN_1006600e8(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2);
  return;
}



/* Address: 0x100660148 | FUN_100660148 */

void FUN_100660148(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x28))((long)unaff_x20 + lVar2,param_1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1006601b0 | FUN_1006601b0 */

undefined1  [16] FUN_1006601b0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1006601f0 | FUN_1006601f0 */

void FUN_1006601f0(undefined8 param_1,long param_2,long param_3)

{
  long *unaff_x20;
  
  unaff_x20[2] = param_2;
  unaff_x20[3] = param_3;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return;
}



/* Address: 0x10066022c | FUN_10066022c */

long * FUN_10066022c(undefined8 param_1,long param_2,long param_3)

{
  long *unaff_x20;
  
  _swift_getObjectType(param_2);
  FUN_100642338();
  _swift_allocObject();
  unaff_x20[2] = param_2;
  unaff_x20[3] = param_3;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return unaff_x20;
}



/* Address: 0x1006602a8 | FUN_1006602a8 */

long * FUN_1006602a8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20[10] + -8) + 0x40);
  (**(code **)(*(long *)(*(long *)(unaff_x20[10] + 0x10) + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),1,1);
  _swift_allocObject();
  unaff_x20[2] = param_2;
  unaff_x20[3] = param_3;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),
             &stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  _swift_unknownObjectRetain(param_2);
  return unaff_x20;
}



/* Address: 0x100660354 | FUN_100660354 */

long * FUN_100660354(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20[10] + -8) + 0x40);
  (**(code **)(*(long *)(unaff_x20[10] + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_1);
  _swift_allocObject();
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),
             &stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  _swift_unknownObjectRetain(param_3);
  return unaff_x20;
}



/* Address: 0x1006603f4 | FUN_1006603f4 */

long * FUN_1006603f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *unaff_x20;
  
  _swift_allocObject();
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  _swift_unknownObjectRetain(param_3);
  return unaff_x20;
}



/* Address: 0x100660464 | FUN_100660464 */

void FUN_100660464(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = *unaff_x20;
  _swift_getObjectType(unaff_x20[2]);
  FUN_100642338();
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_58,0x21,0);
  lVar2 = *(long *)(lVar2 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  (**(code **)(lVar3 + 0x18))((long)unaff_x20 + lVar1,param_1,lVar2);
  _swift_endAccess(auStack_58);
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Address: 0x100660508 | FUN_100660508 */

void FUN_100660508(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar3 + 0x40);
  local_80 = param_7;
  _swift_getObjectType(unaff_x20[2]);
  FUN_100642338();
  lVar2 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_78,0x21,0);
  (*param_2)(param_1,(long)unaff_x20 + lVar2,auStack_78 + (-8 - (lVar1 + 0xfU & 0xfffffffffffffff0))
            );
  if (unaff_x21 == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    (**(code **)(lVar3 + 0x20))
              (local_80,auStack_78 + (-8 - (lVar1 + 0xfU & 0xfffffffffffffff0)),param_5);
    _swift_endAccess(auStack_78);
  }
  return;
}



/* Address: 0x100660604 | FUN_100660604 */

void FUN_100660604(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_unknownObjectRelease(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  return;
}



/* Address: 0x100660648 | FUN_100660648 */

void FUN_100660648(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_unknownObjectRelease(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100660698 | FUN_100660698 */

void FUN_100660698(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006606a4 | FUN_1006606a4 */

void FUN_1006606a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c6bc20;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x10066071c | FUN_10066071c */

long * FUN_10066071c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar3 - 0x11 | uVar3) - *(long *)(lVar1 + 0x40)) {
    lVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    pcVar4 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(lVar5);
    (*pcVar4)((long)param_1 + uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff),
              (long)param_2 + uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar3 & 0xf8 ^ 0x1f8) & uVar3 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006607dc | FUN_1006607dc */

void FUN_1006607dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_unknownObjectRelease(*param_1);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010066081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)param_1 + uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x100660820 | FUN_100660820 */

undefined8 * FUN_100660820(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  pcVar4 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar4)(uVar3 + 0x10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
            uVar3 + 0x10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  return param_1;
}



/* Address: 0x10066088c | FUN_10066088c */

undefined8 * FUN_10066088c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar4);
  param_1[1] = uVar1;
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x18))
            (uVar3 + 0x10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 0x10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100660908 | FUN_100660908 */

undefined8 * FUN_100660908(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x28))
            (uVar4 + 0x10 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 0x10 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100660974 | FUN_100660974 */

ulong FUN_100660974(ulong *param_1,uint param_2,long param_3)

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
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100660a1c;
  uVar5 = (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_100660a1c;
      goto LAB_1006609dc;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1006609dc:
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
LAB_100660a1c:
  if (-1 < (int)uVar2) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = (long)param_1 + uVar7 + 0x10 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x000100660a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x100660aa8 | FUN_100660aa8 */

void FUN_100660aa8(ulong *param_1,uint param_2,uint param_3,long param_4)

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
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
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
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000100660c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 0x10 & ~uVar8);
        return;
      }
      if ((int)param_2 < 0) {
        *param_1 = (ulong)(param_2 & 0x7fffffff);
        param_1[1] = 0;
      }
      else {
        *param_1 = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x100660c9c | FUN_100660c9c */

void FUN_100660c9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c6bc20;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x58);
  }
  return;
}



/* Address: 0x100660d18 | FUN_100660d18 */

void FUN_100660d18(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100660d24 | thunk_FUN_1005e0308 */

void thunk_FUN_1005e0308(void)

{
  FUN_1005e0308();
  return;
}



/* Address: 0x100660d28 | thunk_FUN_1006600c4 */

void thunk_FUN_1006600c4(void)

{
  FUN_1006600c4();
  return;
}



/* Address: 0x100660d2c | FUN_100660d2c */

void FUN_100660d2c(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  return;
}



/* Address: 0x100660d68 | FUN_100660d68 */

void FUN_100660d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  *(char *)((long)unaff_x20 + 0x16) = (char)((ulong)param_3 >> 0x30);
  *(short *)((long)unaff_x20 + 0x14) = (short)((ulong)param_3 >> 0x20);
  *(int *)(unaff_x20 + 2) = (int)param_3;
  return;
}



/* Address: 0x100660db4 | FUN_100660db4 */

undefined8 FUN_100660db4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x28);
}



/* Address: 0x100660dbc | FUN_100660dbc */

void FUN_100660dbc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100076688(unaff_x20 + 0x30,param_1);
  return;
}



/* Address: 0x100660dc8 | FUN_100660dc8 */

void FUN_100660dc8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x30);
  FUN_100076508(param_1,unaff_x20 + 0x30);
  return;
}



/* Address: 0x100660df4 | FUN_100660df4 */

undefined1 FUN_100660df4(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x58);
}



/* Address: 0x100660dfc | FUN_100660dfc */

void FUN_100660dfc(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x58) = param_1;
  return;
}



/* Address: 0x100660e04 | FUN_100660e04 */

void FUN_100660e04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (0 < param_2) {
    param_1[5] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((long)param_1 + 0xf) = 0;
    param_1[3] = PTR___swiftEmptyArrayStorage_100eae0d8;
    param_1[4] = 0;
    FUN_100076508(param_3,param_1 + 6);
    *(undefined1 *)(param_1 + 0xb) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100660e58);
  (*pcVar1)();
}



/* Address: 0x100660e58 | FUN_100660e58 */

undefined8 FUN_100660e58(void)

{
  long *unaff_x20;
  
  if (*unaff_x20 != 0) {
    return 1;
  }
  return *(undefined8 *)(unaff_x20[3] + 0x10);
}



/* Address: 0x100660e74 | FUN_100660e74 */

void FUN_100660e74(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  
  if ((long)param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100660f88);
    (*pcVar1)();
  }
  if ((long)*(ulong *)(unaff_x20 + 0x28) < (long)param_1) {
    *(ulong *)(unaff_x20 + 0x28) = param_1;
    lVar5 = *(long *)(unaff_x20 + 0x18);
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar2 = lVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar2 == 0) || (*(ulong *)(lVar5 + 0x18) >> 1 < param_1)) {
        thunk_FUN_100624910();
        lVar5 = lVar2;
      }
      *(long *)(unaff_x20 + 0x18) = lVar5;
    }
  }
  else if (param_1 < *(ulong *)(unaff_x20 + 0x28)) {
    *(ulong *)(unaff_x20 + 0x28) = param_1;
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    if (param_1 < *(ulong *)(uVar6 + 0x10)) {
      lVar5 = 1;
      do {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100660f84);
          (*pcVar1)();
        }
        uVar3 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar3 & 1) == 0) {
          thunk_FUN_100624ee4();
          lVar5 = *(long *)(uVar6 + 0x10);
        }
        else {
          lVar5 = *(long *)(uVar6 + 0x10);
        }
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100660f5c);
          (*pcVar1)();
        }
        uVar4 = *(undefined8 *)(uVar6 + lVar5 * 0x18 + 8);
        *(long *)(uVar6 + 0x10) = lVar5 + -1;
        _swift_release(uVar4);
        lVar5 = *(long *)(uVar6 + 0x10);
      } while ((long)param_1 < lVar5);
      *(ulong *)(unaff_x20 + 0x18) = uVar6;
    }
    if ((long)param_1 <= *(long *)(unaff_x20 + 0x20)) {
      *(undefined8 *)(unaff_x20 + 0x20) = 0;
    }
  }
  return;
}



/* Address: 0x100660f88 | FUN_100660f88 */

void FUN_100660f88(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  FUN_10007d048(unaff_x20 + 0x30,uVar1);
  (**(code **)(lVar2 + 0x20))(param_1,uVar1,lVar2);
  *(byte *)(unaff_x20 + 0x58) = (byte)param_1 & 1;
  return;
}



/* Address: 0x100660fe4 | FUN_100660fe4 */

undefined8
FUN_100660fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long alStack_c0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  lVar4 = 0xff;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  local_68 = param_1;
  _swift_getTupleTypeMetadata2(0xff,&DAT_100eeaaa8,param_8,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  lVar9 = (long)alStack_c0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = (undefined8 *)(lVar9 - uVar6);
  local_a0 = param_6;
  lStack_70 = lVar4;
  FUN_1006611d8(lVar9,param_6,param_7,param_8);
  lVar2 = lStack_70;
  lVar4 = local_78;
  if (unaff_x21 == 0) {
    lVar5 = lVar9;
    alStack_c0[1] = (long)puVar8 - uVar6;
    alStack_c0[2] = param_7;
    alStack_c0[3] = param_8;
    (**(code **)(local_78 + 0x30))(lVar9,1,lStack_70);
    lVar1 = alStack_c0[1];
    if ((int)lVar5 == 1) {
      (**(code **)(lVar10 + 8))(lVar9,CONCAT71(extraout_var,OVar3.value));
      FUN_100661774(local_68,local_98,uStack_90,local_88,uStack_80,local_a0,alStack_c0[2],
                    alStack_c0[3]);
      unaff_x20 = local_68;
    }
    else {
      pcVar7 = *(code **)(lVar4 + 0x20);
      (*pcVar7)(alStack_c0[1],lVar9,lVar2);
      (*pcVar7)(puVar8,lVar1,lVar2);
      unaff_x20 = *puVar8;
      (**(code **)(*(long *)(alStack_c0[3] + -8) + 0x20))
                (local_68,(long)puVar8 + (long)*(int *)(lVar2 + 0x30));
    }
  }
  return unaff_x20;
}



/* Address: 0x1006611d8 | FUN_1006611d8 */

void FUN_1006611d8(ulong *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  Optional OVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  ulong *local_d8;
  undefined8 local_d0;
  code *local_c8;
  long local_c0;
  undefined1 auStack_b0 [16];
  long local_a0;
  ulong uStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = 0xff;
  local_d8 = param_1;
  local_d0 = param_3;
  local_c8 = param_2;
  _swift_getTupleTypeMetadata2(0xff,param_4,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
  local_108 = lVar7;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_f0 = CONCAT71(extraout_var,OVar6.value);
  local_f8 = *(long *)(local_f0 + -8);
  uVar13 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (long)&local_110 - uVar13;
  lVar14 = local_100 - uVar13;
  local_e8 = lVar14;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar17 = *(long *)(CONCAT71(extraout_var_00,OVar6.value) + -8);
  lVar14 = lVar14 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e0 = *(long *)(param_4 + -8);
  uVar13 = *(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = lVar14 - uVar13;
  local_110 = lVar20 - uVar13;
  lVar18 = local_110 - uVar13;
  uVar13 = unaff_x20[9];
  uVar10 = unaff_x20[10];
  local_c0 = param_4;
  FUN_100004640(unaff_x20 + 6,uVar13);
  (**(code **)(uVar10 + 0x18))();
  lVar7 = local_c0;
  if (((uint)uVar10 & 0xff) == 1) {
    if ((*unaff_x20 != 0) && ((unaff_x20[0xb] & 1) == 0)) {
      uVar10 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *unaff_x20;
      uVar13 = uVar16;
      if ((uVar10 & 1) == 0) {
        _swift_beginAccess(uVar16 + 0x10,auStack_b0,0,0);
        uVar13 = (ulong)*(uint *)(uVar16 + 0x10);
        FUN_10061204c();
        _swift_release(uVar16);
        *unaff_x20 = uVar13;
      }
      pcVar15 = local_c8;
      _swift_beginAccess(uVar13 + 0x10,auStack_80,0,0);
      *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(uVar13 + 0x10);
      *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
      *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
      unaff_x20[1] = 0;
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10066176c);
        (*pcVar15)();
      }
      (*pcVar15)(lVar20);
      lVar7 = local_c0;
      if (unaff_x21 != 0) {
        return;
      }
      uVar13 = *unaff_x20;
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100661774);
        (*pcVar15)();
      }
      uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
      local_c8 = (code *)CONCAT44(local_c8._4_4_,(uint)*(uint3 *)((long)unaff_x20 + 0x14));
      uVar10 = unaff_x20[2];
      uVar16 = unaff_x20[1];
      lVar14 = 0;
      _swift_getTupleTypeMetadata2(0,&DAT_100eeaaa8,local_c0,0,0);
      puVar11 = local_d8;
      iVar4 = *(int *)(lVar14 + 0x30);
      *local_d8 = uVar13;
      *(int *)(local_d8 + 1) = (int)uVar16;
      *(int *)((long)local_d8 + 0xc) = (int)(uVar16 >> 0x20);
      *(int *)(local_d8 + 2) = (int)uVar10;
      *(short *)((long)local_d8 + 0x14) = (short)local_c8;
      *(undefined1 *)((long)local_d8 + 0x16) = uVar2;
      (**(code **)(local_e0 + 0x20))((long)local_d8 + (long)iVar4,lVar20,lVar7);
      pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
LAB_100661650:
      (*pcVar15)(puVar11,0,1,lVar14);
      _swift_retain(uVar13);
      return;
    }
  }
  else {
    if (*unaff_x20 == 0) {
      (**(code **)(local_e0 + 0x38))(lVar14,1,1,local_c0);
    }
    else {
      FUN_100661c70(lVar14,uVar13,local_c8,local_d0,local_c0);
      if (unaff_x21 != 0) {
        return;
      }
      lVar20 = lVar14;
      (**(code **)(local_e0 + 0x30))(lVar14,1,lVar7);
      if ((int)lVar20 != 1) {
        local_c8 = *(code **)(local_e0 + 0x20);
        (*local_c8)(lVar18,lVar14,lVar7);
        uVar13 = *unaff_x20;
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100661770);
          (*pcVar15)();
        }
        uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
        local_d0 = CONCAT44(local_d0._4_4_,(uint)*(uint3 *)((long)unaff_x20 + 0x14));
        uVar10 = unaff_x20[2];
        uVar16 = unaff_x20[1];
        lVar14 = 0;
        _swift_getTupleTypeMetadata2(0,&DAT_100eeaaa8,lVar7,0,0);
        puVar11 = local_d8;
        iVar4 = *(int *)(lVar14 + 0x30);
        *local_d8 = uVar13;
        *(int *)(local_d8 + 1) = (int)uVar16;
        *(int *)((long)local_d8 + 0xc) = (int)(uVar16 >> 0x20);
        *(int *)(local_d8 + 2) = (int)uVar10;
        *(short *)((long)local_d8 + 0x14) = (short)local_d0;
        *(undefined1 *)((long)local_d8 + 0x16) = uVar2;
        (*local_c8)((long)local_d8 + (long)iVar4,lVar18,lVar7);
        pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
        goto LAB_100661650;
      }
    }
    (**(code **)(lVar17 + 8))(lVar14,CONCAT71(extraout_var_00,OVar6.value));
    uVar10 = unaff_x20[4];
    local_a0 = lVar7;
    local_90 = local_c8;
    uStack_88 = local_d0;
    puVar8 = &DAT_100fd8e40;
    uStack_98 = uVar13;
    FUN_1000f7830(&DAT_100fd8e40,&DAT_100c6bc60);
    lVar20 = local_e8;
    FUN_100661cf4(local_e8,uVar10,FUN_10066231c,auStack_b0,puVar8,lVar7);
    lVar18 = local_f0;
    lVar17 = local_f8;
    lVar14 = local_100;
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(local_f8 + 0x10))(local_100,lVar20,local_f0);
    lVar5 = local_108;
    lVar9 = lVar14;
    (**(code **)(*(long *)(local_108 + -8) + 0x30))(lVar14,1,local_108);
    if ((int)lVar9 != 1) {
      uVar13 = *(ulong *)(lVar14 + *(int *)(lVar5 + 0x30));
      pcVar15 = *(code **)(local_e0 + 0x20);
      (*pcVar15)(local_110,lVar14,lVar7);
      unaff_x20[4] = uVar13;
      lVar14 = 0;
      _swift_getTupleTypeMetadata2(0,&DAT_100eeaaa8,lVar7,0,0);
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100661764);
        (*pcVar15)();
      }
      if (*(ulong *)(unaff_x20[3] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100661768);
        (*pcVar15)();
      }
      iVar4 = *(int *)(lVar14 + 0x30);
      lVar18 = unaff_x20[3] + uVar13 * 0x18;
      uVar13 = *(ulong *)(lVar18 + 0x20);
      uVar1 = *(undefined4 *)(lVar18 + 0x30);
      uVar3 = *(undefined2 *)(lVar18 + 0x34);
      uVar2 = *(undefined1 *)(lVar18 + 0x36);
      pcVar19 = *(code **)(lVar17 + 8);
      _swift_retain(uVar13);
      uVar10 = *(ulong *)(lVar18 + 0x28);
      (*pcVar19)(local_e8,local_f0);
      puVar11 = local_d8;
      *local_d8 = uVar13;
      local_d8[1] = uVar10;
      *(undefined4 *)(local_d8 + 2) = uVar1;
      *(undefined2 *)((long)local_d8 + 0x14) = uVar3;
      *(undefined1 *)((long)local_d8 + 0x16) = uVar2;
      (*pcVar15)((long)local_d8 + (long)iVar4,local_110,lVar7);
      pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      uVar12 = 0;
      goto LAB_100661354;
    }
    pcVar15 = *(code **)(lVar17 + 8);
    (*pcVar15)(lVar20,lVar18);
    (*pcVar15)(lVar14,lVar18);
  }
  lVar14 = 0;
  _swift_getTupleTypeMetadata2(0,&DAT_100eeaaa8,lVar7,0,0);
  pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
  uVar12 = 1;
  puVar11 = local_d8;
LAB_100661354:
  (*pcVar15)(puVar11,uVar12,1,lVar14);
  return;
}



/* Address: 0x100661774 | FUN_100661774 */

long FUN_100661774(long param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  code *pcStack_80;
  long local_78;
  ulong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_a8 = *(long *)(param_8 + -8);
  local_a0 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar8 = (long)&local_d0 - local_a0;
  lVar7 = uVar8 - local_a0;
  local_a0 = lVar7 - local_a0;
  lVar9 = unaff_x20[10];
  local_98 = param_1;
  local_90 = param_8;
  local_88 = param_7;
  pcStack_80 = param_6;
  FUN_100004640(unaff_x20 + 6,unaff_x20[9]);
  (**(code **)(lVar9 + 0x10))();
  uVar5 = (undefined4)param_4;
  uVar2 = (undefined1)(param_4 >> 0x30);
  uVar3 = (undefined2)(param_4 >> 0x20);
  lVar9 = *unaff_x20;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = uVar5;
  local_64 = uVar3;
  local_62 = uVar2;
  if (lVar9 == 0) {
    uVar11 = unaff_x20[3];
    lVar9 = *(long *)(uVar11 + 0x10);
    local_a0 = lVar7;
    if (lVar9 == 0) {
      *unaff_x20 = param_2;
      unaff_x20[1] = param_3;
      *(undefined4 *)(unaff_x20 + 2) = uVar5;
      *(undefined1 *)((long)unaff_x20 + 0x16) = uVar2;
      *(undefined2 *)((long)unaff_x20 + 0x14) = uVar3;
      _swift_retain(param_2);
      (*pcStack_80)(local_a0);
      lVar7 = param_2;
      if (unaff_x21 == 0) {
        lVar9 = *unaff_x20;
        if (lVar9 != 0) {
          _swift_retain(lVar9);
          _swift_release(param_2);
          (**(code **)(local_a8 + 0x20))(local_98,local_a0,local_90);
          return lVar9;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100661c70);
        (*pcVar4)();
      }
    }
    else {
      if (lVar9 < unaff_x20[5]) {
        local_a0 = param_3 >> 0x20;
        _swift_retain(param_2);
        uVar8 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar11;
        if ((uVar8 & 1) == 0) {
          uVar10 = 0;
          thunk_FUN_100624910(0,lVar9 + 1,1,uVar11);
        }
        uVar8 = *(ulong *)(uVar10 + 0x10);
        uVar11 = uVar10;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          thunk_FUN_100624910(uVar11,uVar8 + 1,1,uVar10);
        }
        *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
        lVar9 = uVar11 + uVar8 * 0x18;
        *(long *)(lVar9 + 0x20) = param_2;
        *(int *)(lVar9 + 0x28) = (int)param_3;
        *(int *)(lVar9 + 0x2c) = (int)local_a0;
        *(undefined4 *)(lVar9 + 0x30) = uVar5;
        *(undefined2 *)(lVar9 + 0x34) = uVar3;
        *(undefined1 *)(lVar9 + 0x36) = uVar2;
        unaff_x20[3] = uVar11;
        unaff_x20[4] = uVar8;
        lVar7 = local_98;
        FUN_100661e9c(local_98,uVar8,pcStack_80,local_88,local_90);
        _swift_release(param_2);
        goto joined_r0x000100661960;
      }
      (*pcStack_80)(uVar8,&local_78);
      lVar7 = local_78;
      if (unaff_x21 == 0) goto LAB_100661b6c;
    }
LAB_100661b54:
    _swift_release(lVar7);
  }
  else {
    uVar8 = unaff_x20[5];
    if ((long)uVar8 < 2) {
      _swift_retain(lVar9);
      uVar8 = local_a0;
      (*pcStack_80)(local_a0,&local_78);
      lVar7 = local_78;
      if (unaff_x21 == 0) {
        _swift_release(lVar9);
LAB_100661b6c:
        lVar9 = local_78;
        (**(code **)(local_a8 + 0x20))(local_98,uVar8,local_90);
        return lVar9;
      }
      _swift_release(lVar9);
      goto LAB_100661b54;
    }
    local_a8 = (ulong)*(uint3 *)((long)unaff_x20 + 0x14);
    local_b4 = (undefined4)unaff_x20[2];
    uStack_c4 = (undefined4)unaff_x20[1];
    local_c8 = *(undefined4 *)((long)unaff_x20 + 0xc);
    local_c0 = (ulong)(*(uint3 *)((long)unaff_x20 + 0x14) >> 0x10);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined8 *)((long)unaff_x20 + 0xf) = 0;
    uVar10 = unaff_x20[3];
    uVar11 = uVar10;
    local_a0 = param_3 >> 0x20;
    _swift_isUniquelyReferenced_nonNull_native();
    local_b0 = param_4 >> 0x30;
    if ((int)uVar11 == 0) {
LAB_1006619b0:
      thunk_FUN_100624910();
      local_d0 = *(ulong *)(uVar11 + 0x18);
      uVar6 = local_d0 >> 1;
      uVar10 = uVar11;
    }
    else {
      local_d0 = *(ulong *)(uVar10 + 0x18);
      uVar6 = local_d0 >> 1;
      if (uVar6 < uVar8) goto LAB_1006619b0;
    }
    uVar11 = *(ulong *)(uVar10 + 0x10);
    lVar1 = uVar11 + 1;
    _swift_retain(lVar9);
    uVar8 = uVar10;
    if (uVar6 <= uVar11) {
      uVar8 = (ulong)(1 < local_d0);
      thunk_FUN_100624910(uVar8,lVar1,1,uVar10);
      local_d0 = *(ulong *)(uVar8 + 0x18);
      uVar6 = local_d0 >> 1;
    }
    *(long *)(uVar8 + 0x10) = lVar1;
    lVar7 = uVar8 + uVar11 * 0x18;
    *(long *)(lVar7 + 0x20) = lVar9;
    *(undefined4 *)(lVar7 + 0x28) = uStack_c4;
    *(undefined4 *)(lVar7 + 0x2c) = local_c8;
    *(undefined4 *)(lVar7 + 0x30) = local_b4;
    *(short *)(lVar7 + 0x34) = (short)local_a8;
    *(char *)(lVar7 + 0x36) = (char)local_c0;
    lVar7 = uVar11 + 2;
    _swift_retain(param_2);
    uVar11 = uVar8;
    if ((long)uVar6 < lVar7) {
      uVar11 = (ulong)(1 < local_d0);
      thunk_FUN_100624910(uVar11,lVar7,1,uVar8);
    }
    *(long *)(uVar11 + 0x10) = lVar7;
    lVar7 = uVar11 + lVar1 * 0x18;
    *(long *)(lVar7 + 0x20) = param_2;
    *(int *)(lVar7 + 0x28) = (int)param_3;
    *(int *)(lVar7 + 0x2c) = (int)local_a0;
    *(undefined4 *)(lVar7 + 0x30) = uVar5;
    *(undefined2 *)(lVar7 + 0x34) = uVar3;
    *(char *)(lVar7 + 0x36) = (char)local_b0;
    unaff_x20[3] = uVar11;
    unaff_x20[4] = lVar1;
    lVar7 = local_98;
    FUN_100661e9c(local_98,lVar1,pcStack_80,local_88,local_90);
    _swift_release(lVar9);
    _swift_release(param_2);
joined_r0x000100661960:
    if (unaff_x21 != 0) {
      return param_2;
    }
  }
  return lVar7;
}



/* Address: 0x100661c70 | FUN_100661c70 */

void FUN_100661c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28 [8];
  
  puVar1 = &DAT_100fd4f20;
  local_50 = param_5;
  uStack_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  FUN_100613da4(param_1,FUN_100662348,auStack_60,param_5,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_28);
  return;
}



/* Address: 0x100661cf4 | FUN_100661cf4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100661d9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100661cf4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  Optional OVar3;
  long lVar4;
  __int64 _Var5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x21;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  
  lVar4 = 0xff;
  local_70 = param_1;
  _swift_getTupleTypeMetadata2(0xff,param_6,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_78 = CONCAT71((int7)((ulong)lVar4 >> 8),OVar3.value);
  local_80 = *(long *)(lStack_78 + -8);
  puVar8 = auStack_90 + -(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar4 + -8);
  lVar9 = (long)puVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var5 = Swift::Array<undefined>::get_endIndex(lStack_78,*(undefined8 *)(param_5 + 0x10));
  if (_Var5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100661e98);
    (*pcVar2)();
  }
  FUN_1006620c8(puVar8,param_2,_Var5,param_3,param_4,param_5,param_6);
  if (unaff_x21 == 0) {
    puVar6 = puVar8;
    local_88 = param_5;
    (**(code **)(lVar7 + 0x30))(puVar8,1,lVar4);
    if ((int)puVar6 == 1) {
      (**(code **)(local_80 + 8))(puVar8,lStack_78);
      if (param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100661e9c);
        (*pcVar2)();
      }
      FUN_1006620c8(local_70,0,param_2,param_3,param_4,local_88,param_6);
    }
    else {
      pcVar2 = *(code **)(lVar7 + 0x20);
      (*pcVar2)(lVar9,puVar8,lVar4);
      uVar1 = local_70;
      (*pcVar2)(local_70,lVar9,lVar4);
      (**(code **)(lVar7 + 0x38))(uVar1,0,1,lVar4);
    }
  }
  return;
}



/* Address: 0x100661e9c | FUN_100661e9c */

undefined1  [16]
FUN_100661e9c(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar5 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    thunk_FUN_100624ee4();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100661fc0);
    (*pcVar1)();
  }
  if (*(ulong *)(uVar6 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100661fc4);
    (*pcVar1)();
  }
  lVar4 = uVar6 + param_2 * 0x18;
  local_68 = param_5;
  (*param_3)(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar4 + 0x20);
  *(ulong *)(unaff_x20 + 0x18) = uVar6;
  if (unaff_x21 == 0) {
    if (*(ulong *)(uVar6 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100661fc8);
      (*pcVar1)();
    }
    param_4 = *(undefined8 *)(lVar4 + 0x20);
    param_2 = *(ulong *)(lVar4 + 0x28);
    (**(code **)(lVar5 + 0x20))(param_1,auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),local_68);
    _swift_retain(param_4);
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Address: 0x100661fc8 | FUN_100661fc8 */

void FUN_100661fc8(undefined8 param_1,ulong *param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x21;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_3 >> 0x20 == 0) {
    iVar2 = (int)*param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *param_2;
    if (iVar2 == 0) {
      FUN_10061204c();
      _swift_release(uVar3);
      *param_2 = param_3;
      uVar3 = param_3;
    }
    else {
      _swift_beginAccess(uVar3 + 0x10,auStack_80,0,0);
      if (*(uint *)(uVar3 + 0x10) < (uint)param_3) {
        FUN_10061217c(param_3);
      }
    }
    _swift_beginAccess(uVar3 + 0x10,auStack_68,0,0);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(uVar3 + 0x10);
    *(undefined2 *)((long)param_2 + 0x14) = 0;
    *(undefined1 *)((long)param_2 + 0x16) = 0;
    param_2[1] = 0;
    (*param_4)(param_1,param_2);
    if (unaff_x21 != 0) {
      *param_7 = unaff_x21;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006620c8);
  (*pcVar1)();
}



/* Address: 0x1006620c8 | FUN_1006620c8 */

void FUN_1006620c8(long param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  code *local_70;
  undefined8 uStack_68;
  
  local_88 = param_1;
  local_70 = param_4;
  uStack_68 = param_5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lStack_78 = CONCAT71(extraout_var,OVar2.value);
  local_80 = *(long *)(lStack_78 + -8);
  lVar3 = (long)&local_90 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_7 + -8);
  if (param_2 != param_3) {
    local_90 = lVar3 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    if (param_3 < param_2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006622e0);
      (*pcVar5)();
    }
    do {
      if (param_3 == param_2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006622dc);
        (*pcVar5)();
      }
      Swift::Array<undefined>::_makeMutableAndUnique(param_6);
      lVar6 = *unaff_x20;
      lVar7 = *(long *)(param_6 + 0x10);
      FUN_100662648(param_2,lVar6,lVar7);
      FUN_1006622e0(lVar6,lVar7);
      (*local_70)(lVar3,lVar6 + *(long *)(*(long *)(lVar7 + -8) + 0x48) * param_2);
      Swift::Array<undefined>::typeMetadataAccessor();
      if (unaff_x21 != 0) {
        return;
      }
      lVar7 = lVar3;
      (**(code **)(lVar8 + 0x30))(lVar3,1,param_7);
      lVar6 = local_90;
      if ((int)lVar7 != 1) {
        pcVar5 = *(code **)(lVar8 + 0x20);
        (*pcVar5)(local_90,lVar3,param_7);
        lVar3 = 0;
        _swift_getTupleTypeMetadata2(0,param_7,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
        lVar8 = local_88;
        iVar1 = *(int *)(lVar3 + 0x30);
        (*pcVar5)(local_88,lVar6,param_7);
        *(long *)(lVar8 + iVar1) = param_2;
        pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
        uVar4 = 0;
        goto LAB_1006622b0;
      }
      param_2 = param_2 + 1;
      (**(code **)(local_80 + 8))(lVar3,lStack_78);
    } while (param_3 != param_2);
  }
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,param_7,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
  pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar4 = 1;
  lVar8 = local_88;
LAB_1006622b0:
  (*pcVar5)(lVar8,uVar4,1,lVar3);
  return;
}



/* Address: 0x1006622e0 | FUN_1006622e0 */

undefined * FUN_1006622e0(_ArrayBuffer param_1,undefined8 param_2)

{
  _ContiguousArrayBuffer<undefined> _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  
  _Var1 = Swift::_ArrayBuffer::get__native(param_1);
  _Var2 = _Var1;
  FUN_100636dd8(_Var1.unknown,param_2);
  _swift_release(_Var1.unknown);
  return _Var2.unknown;
}



/* Address: 0x10066231c | FUN_10066231c */

void FUN_10066231c(void)

{
  long unaff_x20;
  
  FUN_100661c70(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100662348 | FUN_100662348 */

void FUN_100662348(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100661fc8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x100662368 | thunk_FUN_100662648 */

void thunk_FUN_100662648(ulong param_1,_ArrayBuffer param_2)

{
  code *pcVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  
  _Var2 = Swift::_ArrayBuffer::get__native(param_2);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100662688);
    (*pcVar1)();
  }
  uVar3 = *(ulong *)(_Var2.unknown + 0x10);
  _swift_release();
  if (param_1 < uVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066268c);
  (*pcVar1)();
}



/* Address: 0x10066236c | FUN_10066236c */

void FUN_10066236c(void)

{
  Swift::Array<undefined>::typeMetadataAccessor();
  return;
}



/* Address: 0x100662374 | FUN_100662374 */

void FUN_100662374(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[3]);
  FUN_100004594(param_1 + 6);
  return;
}



/* Address: 0x1006623a4 | FUN_1006623a4 */

undefined8 * FUN_1006623a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  lVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar4;
  pcVar2 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar2)(param_1 + 6,param_2 + 6,lVar4);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Address: 0x100662440 | FUN_100662440 */

undefined8 * FUN_100662440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  FUN_10008820c(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Address: 0x1006624e8 | FUN_1006624e8 */

void FUN_1006624e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar7 = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)((long)param_1 + 0x49) = uVar7;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x10066250c | FUN_10066250c */

undefined8 * FUN_10066250c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  FUN_100004594(param_1 + 6);
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Address: 0x100662598 | FUN_100662598 */

int FUN_100662598(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1006625e0 | FUN_1006625e0 */

void FUN_1006625e0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
    *(undefined1 *)(param_1 + 0xb) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x59) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x59) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100662638 | FUN_100662638 */

undefined1  [16] FUN_100662638(void)

{
  return ZEXT816(0x100ef1ef8);
}



/* Address: 0x100662648 | FUN_100662648 */

void FUN_100662648(ulong param_1,_ArrayBuffer param_2)

{
  code *pcVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  
  _Var2 = Swift::_ArrayBuffer::get__native(param_2);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100662688);
    (*pcVar1)();
  }
  uVar3 = *(ulong *)(_Var2.unknown + 0x10);
  _swift_release();
  if (param_1 < uVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066268c);
  (*pcVar1)();
}



/* Address: 0x10066268c | FUN_10066268c */

void FUN_10066268c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2);
  FUN_10065fde0(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,
                param_7,param_4);
  (**(code **)(lVar2 + 8))(param_2,param_4);
  return;
}



/* Address: 0x100662728 | FUN_100662728 */

void FUN_100662728(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x10066275c | FUN_10066275c */

undefined8 FUN_10066275c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1006627ac(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  return uVar1;
}



/* Address: 0x1006627ac | FUN_1006627ac */

void FUN_1006627ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    return;
  }
  _swift_retain();
  _swift_retain(param_3);
  return;
}



/* Address: 0x1006627dc | FUN_1006627dc */

void FUN_1006627dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  
  FUN_100662830(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Address: 0x100662830 | FUN_100662830 */

void FUN_100662830(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    return;
  }
  _swift_release();
  _swift_release(param_3);
  return;
}


