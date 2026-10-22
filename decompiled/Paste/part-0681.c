/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100741d4c | thunk_FUN_10035713c */

void thunk_FUN_10035713c(void)

{
  FUN_10035713c();
  return;
}



/* Address: 0x100741d50 | thunk_FUN_100741aa0 */

void thunk_FUN_100741aa0(void)

{
  thunk_FUN_100741aa0();
  return;
}



/* Address: 0x100741d54 | FUN_100741d54 */

void FUN_100741d54(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1007427e8(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18));
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100741dcc | FUN_100741dcc */

long * FUN_100741dcc(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar3 & 0xfffffffffffffff8) + 0x10) {
    uVar4 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar3;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100741eb4;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100741eb4:
  if (uVar4 == 2) {
    *param_1 = *(long *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
    _swift_retain();
  }
  else if (uVar4 == 1) {
    uVar6 = *(undefined8 *)(param_2 + 2);
    lVar2 = *(long *)param_2;
    lVar9 = *(long *)(param_2 + 6);
    lVar8 = *(long *)(param_2 + 4);
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar2;
    param_1[3] = lVar9;
    param_1[2] = lVar8;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
    _swift_retain(lVar2);
    _swift_retain(uVar6);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100741f60 | FUN_100741f60 */

undefined8 * FUN_100741f60(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar3;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100742004;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100742004:
  if (uVar4 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
    _swift_retain();
  }
  else if (uVar4 == 1) {
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
    _swift_retain(uVar8);
    _swift_retain(uVar6);
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007420b0 | FUN_1007420b0 */

uint * FUN_1007420b0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  if (param_1 == param_2) goto LAB_1007422a4;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100742160;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_100742160:
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)param_1;
LAB_10074219c:
    _swift_release(uVar6);
  }
  else {
    if (uVar3 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar6 = *(undefined8 *)(param_1 + 2);
      goto LAB_10074219c;
    }
    if (uVar3 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100742214;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
LAB_100742214:
  if (uVar3 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 2;
    _swift_retain();
  }
  else if (uVar3 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_retain();
    _swift_retain(uVar6);
  }
  else if (uVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar2 + 1);
  }
LAB_1007422a4:
  *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007422d8 | FUN_1007422d8 */

void FUN_1007422d8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100742378;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100742378:
  if (uVar4 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x100742410 | FUN_100742410 */

uint * FUN_100742410(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_1 == param_2) goto LAB_1007425dc;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007424c0;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1007424c0:
  if (uVar4 == 2) {
    uVar2 = *(undefined8 *)param_1;
LAB_1007424fc:
    _swift_release(uVar2);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar2 = *(undefined8 *)(param_1 + 2);
      goto LAB_1007424fc;
    }
    if (uVar4 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar6);
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100742574;
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
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100742574:
  if (uVar4 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar4 == 1) {
    uVar2 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar10;
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar3 + 1);
  }
LAB_1007425dc:
  *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100742610 | FUN_100742610 */

int FUN_100742610(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 0x10;
    param_2 = param_2 - 0xfb;
    uVar2 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar2;
    iVar6 = 2;
    if (uVar2 != 0) {
      param_2 = 2;
    }
    if (0xffff < param_2) {
      iVar6 = 4;
    }
    if (param_2 < 0x100) {
      iVar6 = 1;
    }
    if (iVar6 == 4) {
      uVar5 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar6 == 2) {
        uVar5 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_1007426b4;
        goto LAB_10074268c;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar5 != 0) {
LAB_10074268c:
      uVar5 = uVar5 - 1;
      if (uVar2 != 0) {
        uVar5 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar5) + 0xfd;
    }
  }
LAB_1007426b4:
  iVar6 = 0;
  if (3 < *(byte *)((long)param_1 + uVar3)) {
    iVar6 = (*(byte *)((long)param_1 + uVar3) ^ 0xff) + 1;
  }
  return iVar6;
}



/* Address: 0x1007426c8 | FUN_1007426c8 */

void FUN_1007426c8(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  sVar1 = (uVar2 & 0xfffffffffffffff8) + 0x10;
  if (param_3 < 0xfd) {
    uVar4 = 0;
  }
  else {
    param_3 = param_3 - 0xfb;
    uVar4 = 2;
    if ((int)sVar1 != 0) {
      param_3 = 2;
    }
    if (0xffff < param_3) {
      uVar4 = 4;
    }
    if (param_3 < 0x100) {
      uVar4 = 1;
    }
  }
  if (param_2 < 0xfd) {
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar2) = -(char)param_2;
    }
  }
  else {
    iVar3 = param_2 - 0xfc;
    if ((int)sVar1 != 0) {
      iVar3 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 - 0xfd;
    }
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar3;
      }
    }
    else if (uVar4 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar3;
    }
  }
  return;
}



/* Address: 0x1007427dc | FUN_1007427dc */

void FUN_1007427dc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007427e8 | FUN_1007427e8 */

void FUN_1007427e8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007427f4 | FUN_1007427f4 */

void FUN_1007427f4(long param_1)

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
    puStack_30 = &DAT_100c75da8;
    local_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}



/* Address: 0x100742874 | FUN_100742874 */

long * FUN_100742874(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar4 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar3 + 1) {
    uVar5 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
    goto LAB_1007428d8;
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
      if (uVar6 == 0) goto LAB_100742964;
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
LAB_100742964:
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
    lVar4 = *(long *)(param_2 + 2);
    lVar8 = *(long *)param_2;
    lVar10 = *(long *)(param_2 + 6);
    lVar9 = *(long *)(param_2 + 4);
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar8;
    param_1[3] = lVar10;
    param_1[2] = lVar9;
    *(undefined1 *)((long)param_1 + uVar3) = 1;
    _swift_retain(lVar8);
  }
LAB_1007428d8:
  _swift_retain(lVar4);
  return param_1;
}



/* Address: 0x1007429dc | thunk_FUN_1007429e0 */

void thunk_FUN_1007429e0(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
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
      if (uVar6 == 0) goto LAB_100742a6c;
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
LAB_100742a6c:
  if (uVar5 == 2) {
    _swift_release(*(undefined8 *)param_1);
    return;
  }
  if (uVar5 != 1) {
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100742a84. Too many branches */
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



/* Address: 0x1007429e0 | FUN_1007429e0 */

void FUN_1007429e0(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
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
      if (uVar6 == 0) goto LAB_100742a6c;
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
LAB_100742a6c:
  if (uVar5 == 2) {
    _swift_release(*(undefined8 *)param_1);
    return;
  }
  if (uVar5 != 1) {
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100742a84. Too many branches */
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



/* Address: 0x100742ac0 | FUN_100742ac0 */

undefined8 * FUN_100742ac0(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100742b60;
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
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_100742b60:
  if (uVar5 == 2) {
    uVar7 = *(undefined8 *)param_2;
    *param_1 = uVar7;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 0) {
        (**(code **)(lVar3 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar4) = 0;
        return param_1;
      }
      puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar2;
    }
    uVar7 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    *(undefined1 *)((long)param_1 + uVar4) = 1;
    _swift_retain(uVar9);
  }
  _swift_retain(uVar7);
  return param_1;
}



/* Address: 0x100742bec | FUN_100742bec */

uint * FUN_100742bec(uint *param_1,uint *param_2,long param_3)

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
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
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
      if (uVar5 == 0) goto LAB_100742c9c;
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
LAB_100742c9c:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_1;
LAB_100742cd8:
    _swift_release(uVar7);
  }
  else {
    if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar7 = *(undefined8 *)(param_1 + 2);
      goto LAB_100742cd8;
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
      if (uVar5 == 0) goto LAB_100742d50;
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
LAB_100742d50:
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
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(byte *)((long)param_1 + uVar3) = 1;
    _swift_retain();
  }
  _swift_retain(uVar7);
  return param_1;
}



/* Address: 0x100742e00 | FUN_100742e00 */

undefined8 * FUN_100742e00(undefined8 *param_1,uint *param_2,long param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
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
      if (uVar7 == 0) goto LAB_100742e98;
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
LAB_100742e98:
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
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar5) = uVar3;
  return param_1;
}



/* Address: 0x100742f00 | FUN_100742f00 */

uint * FUN_100742f00(uint *param_1,uint *param_2,long param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar4 = *(ulong *)(lVar9 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
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
      if (uVar6 == 0) goto LAB_100742fac;
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
LAB_100742fac:
  if (uVar5 == 2) {
    uVar1 = *(undefined8 *)param_1;
LAB_100742ff8:
    _swift_release(uVar1);
  }
  else {
    if (uVar5 == 1) {
      _swift_release(*(undefined8 *)param_1);
      uVar1 = *(undefined8 *)(param_1 + 2);
      goto LAB_100742ff8;
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
      if (uVar6 == 0) goto LAB_100743074;
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
LAB_100743074:
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
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar11;
    *(undefined8 *)(param_1 + 4) = uVar10;
    bVar3 = 1;
  }
  *(byte *)((long)param_1 + uVar4) = bVar3;
  return param_1;
}



/* Address: 0x1007430f8 | FUN_1007430f8 */

int FUN_1007430f8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_1007431a0;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1007431a0;
      goto LAB_10074312c;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10074312c:
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
LAB_1007431a0:
  iVar2 = 0;
  if (3 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1007431fc | FUN_1007431fc */

void FUN_1007431fc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
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



/* Address: 0x1007433a0 | FUN_1007433a0 */

uint FUN_1007433a0(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
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



/* Address: 0x100743434 | FUN_100743434 */

void FUN_100743434(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar3 < 0x21) {
    sVar3 = 0x20;
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



/* Address: 0x1007434fc | FUN_1007434fc */

void FUN_1007434fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  uVar1 = 0;
  FUN_1007427e8(0,param_4,param_5);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,0);
  lVar2 = 0;
  FUN_1007427dc(0,param_4,param_5);
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24)) = param_3;
  return;
}



/* Address: 0x100743578 | FUN_100743578 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100743578(undefined8 param_1,long param_2)

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
  FUN_1007427e8(0,lVar1,uVar9);
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
    *(undefined8 *)(&stack0xffffffffffffffa8 + lVar2) = 0;
    _swift_storeEnumTagMultiPayload(puVar14,lVar6,1);
    (**(code **)(lVar15 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar13,lVar1);
    return;
  }
  if (iVar5 != 1) {
    if (iVar5 == 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100743730);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100743738);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100743734);
  (*pcVar3)();
}



/* Address: 0x100743738 | FUN_100743738 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_100743738(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  Result RVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  long alStack_60 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar8 = 0;
  FUN_1007427e8(0,uVar1,uVar2);
  lVar12 = *(long *)(lVar8 + -8);
  lVar4 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)alStack_60 + lVar4);
  (**(code **)(lVar12 + 0x10))(puVar11);
  puVar9 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar8);
  iVar7 = (int)puVar9;
  if (iVar7 < 2) {
    if (iVar7 != 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007438d8);
      (*pcVar5)();
    }
    uVar3 = *(undefined8 *)((long)alStack_60 + lVar4 + 8U);
    lVar8 = *(long *)(&stack0xffffffffffffffb0 + lVar4);
    lVar4 = *(long *)(&stack0xffffffffffffffb8 + lVar4);
    _swift_release(*puVar11);
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007438e0);
      (*pcVar5)();
    }
    if (lVar4 == 0) {
      uVar10 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar2,uVar1,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1007c3a74(0xff,uVar10);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar6 = Swift::Result::typeMetadataAccessor();
      FUN_1006035b0(alStack_60 + 1,FUN_1006035a4,0,uVar3,&DAT_100ef5140,RVar6.value,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_release(uVar3);
      return *(long *)(unaff_x20 + *(int *)(param_1 + 0x24)) <= alStack_60[1];
    }
    _swift_release(uVar3);
  }
  else {
    if (iVar7 != 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007438dc);
      (*pcVar5)();
    }
    (**(code **)(lVar12 + 8))(puVar11,lVar8);
  }
  return false;
}



/* Address: 0x1007438e0 | FUN_1007438e0 */

undefined8 FUN_1007438e0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  Result RVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long *plVar12;
  long lVar13;
  long local_80 [4];
  
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  FUN_1007427e8(0,uVar10,uVar1);
  lVar13 = *(long *)(lVar7 + -8);
  lVar2 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar12 = (long *)((long)local_80 + lVar2);
  (**(code **)(lVar13 + 0x10))(plVar12);
  plVar8 = plVar12;
  _swift_getEnumCaseMultiPayload(plVar12,lVar7);
  iVar6 = (int)plVar8;
  if (iVar6 < 2) {
    if (iVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100743b74);
      (*pcVar3)();
    }
    if (*(long *)((long)local_80 + lVar2 + 0x10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100743b7c);
      (*pcVar3)();
    }
    uVar11 = *(undefined8 *)((long)local_80 + lVar2 + 8);
    local_80[1] = *(long *)((long)local_80 + lVar2 + 8);
    local_80[0] = *plVar12;
    if (*(long *)((long)local_80 + lVar2 + 0x18) == 0) {
      uVar9 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar1,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1007c3a74(0xff,uVar9);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar4 = Swift::Result::typeMetadataAccessor();
      FUN_1006035b0(local_80 + 3,FUN_1006035a4,0,uVar11,&DAT_100ef5140,RVar4.value,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      if (*(long *)((long)unaff_x20 + (long)*(int *)(param_2 + 0x24)) <= local_80[3]) {
        (**(code **)(lVar13 + 8))();
        unaff_x20[1] = local_80[1];
        *unaff_x20 = local_80[0];
        unaff_x20[2] = param_1;
        unaff_x20[3] = 0;
        _swift_storeEnumTagMultiPayload();
        return 0;
      }
      _swift_release(local_80[0]);
      _swift_release(uVar11);
    }
    else {
      _swift_release(local_80[0]);
      uVar9 = 0xff;
      local_80[3] = uVar11;
      _swift_getAssociatedTypeWitness
                (0xff,uVar1,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1007c3a74(0xff,uVar9);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar4 = Swift::Result::typeMetadataAccessor();
      uVar10 = 0;
      FUN_1006883a0(0,RVar4.value);
      _swift_getWitnessTable(0x100c6d780,uVar10);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      _swift_release(uVar11);
      if (!bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100743a2c);
        (*pcVar3)();
      }
    }
  }
  else {
    if (iVar6 != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100743b78);
      (*pcVar3)();
    }
    (**(code **)(lVar13 + 8))(plVar12,lVar7);
  }
  return 1;
}



/* Address: 0x100743b7c | FUN_100743b7c */

void FUN_100743b7c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  Result RVar2;
  Optional OVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  UnsafeContinuation UVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long local_c0 [7];
  long local_88;
  long *local_80;
  long local_70;
  long local_68;
  
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0xff;
  local_c0[6] = param_2;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  local_c0[4] = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var_00,OVar3.value);
  lVar14 = (long)local_c0 - (*(long *)(*(long *)(local_88 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_c0[5] = *(long *)(lVar6 + -8);
  lVar13 = lVar14 - (*(long *)(local_c0[5] + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1007c3a74(0xff,lVar6);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar11 = CONCAT71(extraout_var_01,RVar2.value);
  local_c0[3] = *(long *)(lVar11 + -8);
  lVar16 = lVar13 - (*(long *)(local_c0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_1007427e8(0,uVar9,uVar1);
  lVar17 = *(long *)(lVar7 + -8);
  plVar15 = (long *)(lVar16 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar17 + 0x10))(plVar15);
  plVar8 = plVar15;
  _swift_getEnumCaseMultiPayload(plVar15,lVar7);
  iVar5 = (int)plVar8;
  if (iVar5 < 2) {
    if (iVar5 != 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744000);
      (*pcVar12)();
    }
    if (plVar15[2] != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744008);
      (*pcVar12)();
    }
    local_68 = plVar15[1];
    local_c0[1] = plVar15[1];
    local_c0[0] = *plVar15;
    lVar7 = plVar15[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      FUN_1006883a0(0,lVar11);
      _swift_getWitnessTable(0x100c6d780,uVar9);
      bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100743ff8);
        (*pcVar12)();
      }
      (**(code **)(lVar17 + 8))();
      unaff_x20[1] = local_c0[1];
      *unaff_x20 = local_c0[0];
      unaff_x20[2] = 0;
      unaff_x20[3] = 0;
      _swift_storeEnumTagMultiPayload();
      lVar13 = local_88;
      uVar9 = 0xff;
      FUN_1007c3a74(0xff,local_88);
      UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar11 = 0;
      _swift_getTupleTypeMetadata2(0,UVar10.unknown,uVar9,"continuation result ",0);
      plVar8 = local_80;
      iVar5 = *(int *)(lVar11 + 0x30);
      *local_80 = lVar7;
      (**(code **)(local_c0[5] + 0x10))(lVar14,local_c0[6],lVar6);
      lVar6 = local_c0[4];
      _swift_storeEnumTagMultiPayload(lVar14,local_c0[4],0);
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar14,0,1,lVar6);
      FUN_1005cfcb0((long)plVar8 + (long)iVar5,lVar14,lVar13);
      pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
      uVar9 = 0;
      goto LAB_100743fd0;
    }
    FUN_1006035b0(&local_70,FUN_1006035a4,0,local_68,&DAT_100ef5140,lVar11,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (*(long *)((long)unaff_x20 + (long)*(int *)(param_3 + 0x24)) <= local_70) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100743ffc);
      (*pcVar12)();
    }
    pcVar12 = *(code **)(lVar17 + 8);
    (*pcVar12)();
    _swift_storeEnumTagMultiPayload();
    (**(code **)(local_c0[5] + 0x10))(lVar13,local_c0[6],lVar6);
    FUN_1005cfcb0(lVar16,lVar13,lVar6);
    _swift_storeEnumTagMultiPayload(lVar16,lVar11,0);
    uVar9 = 0;
    FUN_1006883a0(0,lVar11);
    FUN_100679d80(lVar16,uVar9);
    (**(code **)(local_c0[3] + 8))(lVar16,lVar11);
    (*pcVar12)();
    *unaff_x20 = local_c0[0];
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    unaff_x20[1] = local_68;
    _swift_storeEnumTagMultiPayload();
  }
  else {
    if (iVar5 != 2) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744004);
      (*pcVar12)();
    }
    (**(code **)(lVar17 + 8))(plVar15,lVar7);
  }
  uVar9 = 0xff;
  FUN_1007c3a74(0xff,local_88);
  UVar10 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar11 = 0;
  _swift_getTupleTypeMetadata2(0,UVar10.unknown,uVar9,"continuation result ",0);
  pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
  uVar9 = 1;
  plVar8 = local_80;
LAB_100743fd0:
  (*pcVar12)(plVar8,uVar9,1,lVar11);
  return;
}



/* Address: 0x100744008 | FUN_100744008 */

long FUN_100744008(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Result RVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  tuple2_conflict3 tVar20;
  undefined8 local_68;
  long lVar8;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1007c3a74(0xff,uVar7);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,RVar4.value);
  lVar19 = *(long *)(lVar8 + -8);
  plVar17 = (long *)(&stack0xffffffffffffff90 +
                    -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0;
  FUN_1007427e8(0,uVar13,uVar11);
  lVar18 = *(long *)(lVar9 + -8);
  uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (undefined8 *)((long)plVar17 - uVar14);
  puVar16 = (undefined8 *)((long)puVar15 - uVar14);
  (**(code **)(lVar18 + 0x10))(puVar16);
  puVar10 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar9);
  iVar6 = (int)puVar10;
  if (iVar6 < 2) {
    if (iVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007442bc);
      (*pcVar3)();
    }
    uVar13 = puVar16[1];
    lVar1 = puVar16[2];
    lVar2 = puVar16[3];
    _swift_release(*puVar16);
    if (lVar1 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007442c4);
      (*pcVar3)();
    }
    local_68 = uVar13;
    if (lVar2 != 0) {
      uVar11 = 0;
      FUN_1006883a0(0,lVar8);
      _swift_getWitnessTable(0x100c6d780,uVar11);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar5) {
        tVar20 = Swift::Array<undefined>::_allocateUninitialized(0,lVar8);
        uVar11 = 0;
        local_68 = tVar20._0_8_;
        Swift::Array<undefined>::typeMetadataAccessor();
        puVar12 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar11);
        puVar10 = &local_68;
        FUN_10074d4f0(puVar10,lVar8,uVar11,puVar12);
        _swift_release(uVar13);
        _swift_bridgeObjectRelease(tVar20._0_8_);
        *puVar15 = puVar10;
        _swift_storeEnumTagMultiPayload(puVar15,lVar9,2);
        (**(code **)(lVar18 + 0x28))(unaff_x20,puVar15,lVar9);
        return lVar2;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007442b8);
      (*pcVar3)();
    }
    if (param_1 != 0) {
      *plVar17 = param_1;
      _swift_storeEnumTagMultiPayload(plVar17,lVar8,1);
      _swift_errorRetain(param_1);
      uVar13 = 0;
      FUN_1006883a0(0,lVar8);
      FUN_100679d80(plVar17,uVar13);
      (**(code **)(lVar19 + 8))(plVar17,lVar8);
    }
    uVar13 = local_68;
    (**(code **)(lVar18 + 8))(unaff_x20,lVar9);
    *unaff_x20 = uVar13;
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,2);
  }
  else {
    if (iVar6 != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007442c0);
      (*pcVar3)();
    }
    (**(code **)(lVar18 + 8))(puVar16,lVar9);
  }
  return 1;
}



/* Address: 0x1007442c4 | FUN_1007442c4 */

void FUN_1007442c4(long *param_1,long param_2)

{
  undefined8 uVar1;
  Result RVar2;
  Optional OVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar8;
  undefined8 *puVar9;
  undefined7 extraout_var_01;
  long lVar10;
  undefined7 extraout_var_02;
  long lVar11;
  undefined7 extraout_var_03;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long alStack_f0 [7];
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90 [2];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  alStack_f0[5] = *(undefined8 *)(param_2 + 0x18);
  lVar21 = *(long *)(param_2 + 0x10);
  uVar6 = 0xff;
  alStack_f0[4] = lVar21;
  local_98 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar16,lVar21,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_b0 = uVar6;
  FUN_1007c3a74(0xff);
  puVar7 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_b8 = puVar7;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar13 = *(long *)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0;
  lVar11 = (long)alStack_f0 - uVar13;
  lVar18 = lVar11 - uVar13;
  local_a8 = *(long *)(lVar10 + -8);
  uVar13 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar18 - uVar13;
  lVar20 = lVar14 - uVar13;
  lVar8 = 0;
  local_a0 = uVar16;
  FUN_1007427e8(0,lVar21,uVar16);
  lVar19 = *(long *)(lVar8 + -8);
  puVar17 = (undefined8 *)(lVar20 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar19 + 0x10))(puVar17);
  puVar9 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar8);
  plVar12 = local_98;
  iVar5 = (int)puVar9;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      (**(code **)(*(long *)(lVar21 + -8) + 0x20))(local_98,puVar17,lVar21);
      uVar6 = 0;
      FUN_100745310(0,lVar21,local_a0);
      uVar16 = 0;
      goto LAB_1007448d8;
    }
    if (puVar17[3] != 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100744904);
      (*pcVar15)();
    }
    alStack_f0[3] = *puVar17;
    uVar6 = puVar17[1];
    alStack_f0[2] = puVar17[2];
    if (alStack_f0[2] == 0) {
      uVar16 = 0;
      local_90[0] = uVar6;
      FUN_1006883a0(0,lVar10);
      _swift_getWitnessTable(0x100c6d780,uVar16);
      bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar4) {
        _swift_release(alStack_f0[3]);
        _swift_release(uVar6);
        uVar6 = 0;
        FUN_100745310(0,lVar21,local_a0);
        uVar16 = 2;
        plVar12 = local_98;
        goto LAB_1007448d8;
      }
    }
    pcVar15 = *(code **)(lVar19 + 8);
    alStack_f0[1] = lVar21;
    local_68 = uVar6;
    (*pcVar15)();
    _swift_storeEnumTagMultiPayload();
    FUN_1006883a0(0,lVar10);
    FUN_100681318(lVar18);
    lVar8 = local_a8;
    lVar14 = lVar18;
    (**(code **)(local_a8 + 0x30))(lVar18,1,lVar10);
    if ((int)lVar14 == 1) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100744908);
      (*pcVar15)();
    }
    (**(code **)(lVar8 + 0x20))(lVar20,lVar18,lVar10);
    (*pcVar15)();
    uVar16 = local_68;
    lVar14 = alStack_f0[3];
    *unaff_x20 = alStack_f0[3];
    unaff_x20[1] = local_68;
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    _swift_storeEnumTagMultiPayload();
    puVar7 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    uVar6 = local_b0;
    RVar2 = Swift::Result::typeMetadataAccessor();
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar11 = 0;
    _swift_getTupleTypeMetadata2(0,puVar7,OVar3.value,"producerContinuation result ",0);
    plVar12 = local_98;
    iVar5 = *(int *)(lVar11 + 0x30);
    *local_98 = alStack_f0[2];
    uStack_78 = alStack_f0[5];
    local_80 = alStack_f0[4];
    _swift_retain(lVar14);
    _swift_retain(uVar16);
    FUN_10062f364((long)plVar12 + (long)iVar5,thunk_FUN_10074531c,local_90,lVar10,uVar6);
    _swift_release(lVar14);
    (**(code **)(lVar8 + 8))(lVar20,lVar10);
    _swift_release(uVar16);
    (**(code **)(*(long *)(CONCAT71(extraout_var_02,RVar2.value) + -8) + 0x38))
              ((long)plVar12 + (long)iVar5,0,1,CONCAT71(extraout_var_02,RVar2.value));
    uVar6 = 0;
    FUN_100745310(0,alStack_f0[1],local_a0);
  }
  else {
    if (iVar5 != 2) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100744900);
      (*pcVar15)();
    }
    uVar16 = *puVar17;
    uVar6 = 0;
    local_90[0] = uVar16;
    FUN_1006883a0(0,lVar10);
    _swift_getWitnessTable(0x100c6d780,uVar6);
    bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar4) {
      _swift_release(uVar16);
      puVar7 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      RVar2 = Swift::Result::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,puVar7,OVar3.value,"producerContinuation result ",0);
      plVar12 = local_98;
      iVar5 = *(int *)(lVar10 + 0x30);
      *local_98 = 0;
      (**(code **)(*(long *)(CONCAT71(extraout_var_01,RVar2.value) + -8) + 0x38))
                ((long)local_98 + (long)iVar5,1,1,CONCAT71(extraout_var_01,RVar2.value));
      uVar6 = 0;
      FUN_100745310(0,lVar21,local_a0);
    }
    else {
      pcVar15 = *(code **)(lVar19 + 8);
      local_68 = uVar16;
      (*pcVar15)();
      _swift_storeEnumTagMultiPayload();
      FUN_100681318(lVar11,uVar6);
      lVar8 = local_a8;
      lVar18 = lVar11;
      (**(code **)(local_a8 + 0x30))(lVar11,1,lVar10);
      if ((int)lVar18 == 1) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10074490c);
        (*pcVar15)();
      }
      (**(code **)(lVar8 + 0x20))(lVar14,lVar11,lVar10);
      (*pcVar15)();
      uVar1 = local_68;
      *unaff_x20 = local_68;
      _swift_storeEnumTagMultiPayload();
      puVar7 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      uVar6 = local_b0;
      RVar2 = Swift::Result::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,puVar7,OVar3.value,"producerContinuation result ",0);
      plVar12 = local_98;
      uVar16 = local_a0;
      iVar5 = *(int *)(lVar8 + 0x30);
      *local_98 = 0;
      uStack_78 = local_a0;
      local_80 = lVar21;
      _swift_retain(uVar1);
      FUN_10062f364((long)plVar12 + (long)iVar5,thunk_FUN_10074531c,local_90,lVar10,uVar6);
      (**(code **)(local_a8 + 8))(lVar14,lVar10);
      _swift_release(uVar1);
      (**(code **)(*(long *)(CONCAT71(extraout_var_03,RVar2.value) + -8) + 0x38))
                ((long)plVar12 + (long)iVar5,0,1,CONCAT71(extraout_var_03,RVar2.value));
      uVar6 = 0;
      FUN_100745310(0,lVar21,uVar16);
    }
  }
  uVar16 = 1;
LAB_1007448d8:
  _swift_storeEnumTagMultiPayload(plVar12,uVar6,uVar16);
  return;
}



/* Address: 0x10074490c | FUN_10074490c */

void FUN_10074490c(long *param_1,long param_2,long param_3)

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
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long alStack_e0 [6];
  undefined *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  long lVar7;
  
  uVar14 = *(undefined8 *)(param_3 + 0x18);
  alStack_e0[5] = *(undefined8 *)(param_3 + 0x18);
  uVar20 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = 0xff;
  alStack_e0[1] = param_2;
  alStack_e0[4] = uVar20;
  local_a0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar14,uVar20,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  local_a8 = uVar5;
  FUN_1007c3a74(0xff);
  puVar6 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  local_b0 = puVar6;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar11 = *(long *)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0;
  lVar18 = (long)alStack_e0 - uVar11;
  lVar16 = lVar18 - uVar11;
  local_98 = *(long *)(lVar7 + -8);
  uVar11 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar16 - uVar11;
  lVar19 = lVar13 - uVar11;
  lVar8 = 0;
  alStack_e0[2] = uVar14;
  FUN_1007427e8(0,uVar20,uVar14);
  lVar17 = *(long *)(lVar8 + -8);
  puVar15 = (undefined8 *)(lVar19 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar17 + 0x10))(puVar15);
  puVar9 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar8);
  iVar4 = (int)puVar9;
  if (iVar4 < 2) {
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744f60);
      (*pcVar12)();
    }
    if (puVar15[3] != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744f68);
      (*pcVar12)();
    }
    alStack_e0[3] = puVar15[1];
    alStack_e0[2] = *puVar15;
    uVar5 = puVar15[1];
    lVar8 = puVar15[2];
    if (lVar8 == 0) {
      uVar14 = 0;
      local_90[0] = uVar5;
      FUN_1006883a0(0,lVar7);
      _swift_getWitnessTable(0x100c6d780,uVar14);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar3) {
        (**(code **)(lVar17 + 8))();
        unaff_x20[1] = alStack_e0[3];
        *unaff_x20 = alStack_e0[2];
        unaff_x20[2] = 0;
        unaff_x20[3] = alStack_e0[1];
        _swift_storeEnumTagMultiPayload();
        puVar6 = &DAT_100fe0dd8;
        FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
        Swift::Result::typeMetadataAccessor();
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar8 = 0;
        _swift_getTupleTypeMetadata2(0,puVar6,OVar2.value,"producerContinuation result ",0);
        pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
        uVar5 = 1;
        plVar10 = local_a0;
        goto LAB_100744f38;
      }
    }
    pcVar12 = *(code **)(lVar17 + 8);
    alStack_e0[1] = lVar8;
    local_68 = uVar5;
    (*pcVar12)();
    _swift_storeEnumTagMultiPayload();
    FUN_1006883a0(0,lVar7);
    FUN_100681318(lVar16);
    lVar8 = local_98;
    lVar13 = lVar16;
    (**(code **)(local_98 + 0x30))(lVar16,1,lVar7);
    if ((int)lVar13 == 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744f6c);
      (*pcVar12)();
    }
    (**(code **)(lVar8 + 0x20))(lVar19,lVar16,lVar7);
    (*pcVar12)();
    uVar14 = local_68;
    lVar13 = alStack_e0[2];
    *unaff_x20 = alStack_e0[2];
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    unaff_x20[1] = local_68;
    _swift_storeEnumTagMultiPayload();
    puVar6 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    uVar5 = local_a8;
    RVar1 = Swift::Result::typeMetadataAccessor();
    lVar16 = CONCAT71(extraout_var_02,RVar1.value);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar8 = 0;
    _swift_getTupleTypeMetadata2(0,puVar6,OVar2.value,"producerContinuation result ",0);
    plVar10 = local_a0;
    lVar18 = (long)*(int *)(lVar8 + 0x30);
    *local_a0 = alStack_e0[1];
    uStack_78 = alStack_e0[5];
    local_80 = alStack_e0[4];
    _swift_retain(lVar13);
    _swift_retain(uVar14);
    FUN_10062f364((long)plVar10 + lVar18,thunk_FUN_10074531c,local_90,lVar7,uVar5);
    _swift_release(lVar13);
    (**(code **)(local_98 + 8))(lVar19,lVar7);
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744f64);
      (*pcVar12)();
    }
    uVar14 = *puVar15;
    uVar5 = 0;
    local_90[0] = uVar14;
    FUN_1006883a0(0,lVar7);
    _swift_getWitnessTable(0x100c6d780,uVar5);
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar3) {
      _swift_release(uVar14);
      puVar6 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      RVar1 = Swift::Result::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,puVar6,OVar2.value,"producerContinuation result ",0);
      plVar10 = local_a0;
      iVar4 = *(int *)(lVar8 + 0x30);
      *local_a0 = 0;
      (**(code **)(*(long *)(CONCAT71(extraout_var_01,RVar1.value) + -8) + 0x38))
                ((long)local_a0 + (long)iVar4,1,1,CONCAT71(extraout_var_01,RVar1.value));
      pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      uVar5 = 0;
      goto LAB_100744f38;
    }
    pcVar12 = *(code **)(lVar17 + 8);
    local_68 = uVar14;
    (*pcVar12)();
    _swift_storeEnumTagMultiPayload();
    FUN_100681318(lVar18,uVar5);
    lVar8 = local_98;
    lVar16 = lVar18;
    (**(code **)(local_98 + 0x30))(lVar18,1,lVar7);
    if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100744f70);
      (*pcVar12)();
    }
    (**(code **)(lVar8 + 0x20))(lVar13,lVar18,lVar7);
    (*pcVar12)();
    uVar14 = local_68;
    *unaff_x20 = local_68;
    _swift_storeEnumTagMultiPayload();
    puVar6 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    uVar5 = local_a8;
    RVar1 = Swift::Result::typeMetadataAccessor();
    lVar16 = CONCAT71(extraout_var_03,RVar1.value);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar8 = 0;
    _swift_getTupleTypeMetadata2(0,puVar6,OVar2.value,"producerContinuation result ",0);
    plVar10 = local_a0;
    lVar18 = (long)*(int *)(lVar8 + 0x30);
    *local_a0 = 0;
    uStack_78 = alStack_e0[2];
    local_80 = uVar20;
    _swift_retain(uVar14);
    FUN_10062f364((long)plVar10 + lVar18,thunk_FUN_10074531c,local_90,lVar7,uVar5);
    (**(code **)(local_98 + 8))(lVar13,lVar7);
  }
  _swift_release(uVar14);
  (**(code **)(*(long *)(lVar16 + -8) + 0x38))((long)plVar10 + lVar18,0,1,lVar16);
  pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  uVar5 = 0;
LAB_100744f38:
  (*pcVar12)(plVar10,uVar5,1,lVar8);
  return;
}



/* Address: 0x100744f70 | FUN_100744f70 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100744f70(long param_1)

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
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  tuple2_conflict3 tVar16;
  long alStack_70 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = 0;
  FUN_1007427e8(0,lVar1,uVar8);
  lVar15 = *(long *)(lVar5 + -8);
  uVar12 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar13 = (long *)((long)alStack_70 - uVar12);
  puVar14 = (undefined8 *)((long)plVar13 - uVar12);
  (**(code **)(lVar15 + 0x10))(puVar14);
  puVar6 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar5);
  iVar4 = (int)puVar6;
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      uVar7 = *puVar14;
      _swift_release(puVar14[1]);
      uVar11 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar8,lVar1,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      FUN_1007c3a74(0xff,uVar11);
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar3 = Swift::Result::typeMetadataAccessor();
      tVar16 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
      uVar8 = 0;
      alStack_70[1] = tVar16._0_8_;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
      plVar10 = alStack_70 + 1;
      FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
      _swift_bridgeObjectRelease(tVar16._0_8_);
      *plVar13 = (long)plVar10;
      _swift_storeEnumTagMultiPayload(plVar13,lVar5,2);
      (**(code **)(lVar15 + 0x28))();
      return uVar7;
    }
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar8,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1007c3a74(0xff,uVar7);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar3 = Swift::Result::typeMetadataAccessor();
    tVar16 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
    uVar8 = 0;
    alStack_70[1] = tVar16._0_8_;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
    plVar10 = alStack_70 + 1;
    FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
    _swift_bridgeObjectRelease(tVar16._0_8_);
    *plVar13 = (long)plVar10;
    _swift_storeEnumTagMultiPayload(plVar13,lVar5,2);
    (**(code **)(lVar15 + 0x28))();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar14,lVar1);
  }
  else {
    if (iVar4 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10074530c);
      (*pcVar2)();
    }
    (**(code **)(lVar15 + 8))(puVar14,lVar5);
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar8,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    FUN_1007c3a74(0xff,uVar7);
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar3 = Swift::Result::typeMetadataAccessor();
    tVar16 = Swift::Array<undefined>::_allocateUninitialized(0,RVar3.value);
    uVar8 = 0;
    alStack_70[1] = tVar16._0_8_;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
    plVar10 = alStack_70 + 1;
    FUN_10074d4f0(plVar10,RVar3.value,uVar8,puVar9);
    _swift_bridgeObjectRelease(tVar16._0_8_);
    *plVar13 = (long)plVar10;
    _swift_storeEnumTagMultiPayload(plVar13,lVar5,2);
    (**(code **)(lVar15 + 0x28))();
  }
  return 0;
}



/* Address: 0x10074530c | thunk_FUN_10074531c */

void thunk_FUN_10074531c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x000100745370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100745310 | FUN_100745310 */

void FUN_100745310(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074531c | FUN_10074531c */

void FUN_10074531c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x000100745370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100745374 | FUN_100745374 */

void FUN_100745374(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100745380 | FUN_100745380 */

void FUN_100745380(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074538c | FUN_10074538c */

void FUN_10074538c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100745398 | FUN_100745398 */

uint FUN_100745398(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x1007453f4 | FUN_1007453f4 */

int FUN_1007453f4(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100745418 | FUN_100745418 */

void FUN_100745418(ulong *param_1,uint param_2)

{
  if (param_2 < 0x7fffffff) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    param_2 = param_2 + 0x80000001;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x100745440 | FUN_100745440 */

void FUN_100745440(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10074544c | FUN_10074544c */

void FUN_10074544c(void)

{
  FUN_100746224();
  return;
}



/* Address: 0x100745458 | FUN_100745458 */

ulong * FUN_100745458(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar1 + -8);
  uVar4 = *(ulong *)(lVar6 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  uVar5 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8;
  uVar7 = uVar5 | 7;
  uVar5 = (uVar5 + 0xf & (uVar7 ^ 0xffffffffffffffff)) + uVar4 + 1;
  if ((*(uint *)(lVar6 + 0x50) & 0x1000f8) == 0 && uVar5 < 0x19) {
    if (*param_2 < 0xffffffff) {
      puVar2 = _memcpy(param_1,param_2,uVar5);
      return puVar2;
    }
    *param_1 = *param_2;
    puVar9 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar3 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    if (*(byte *)((long)puVar3 + uVar4) < 2) {
      if (*(byte *)((long)puVar3 + uVar4) == 1) {
        uVar8 = *puVar3;
        _swift_errorRetain(uVar8);
        *puVar9 = uVar8;
        *(undefined1 *)((long)puVar9 + uVar4) = 1;
      }
      else {
        (**(code **)(lVar6 + 0x10))(puVar9,puVar3,lVar1);
        *(undefined1 *)((long)puVar9 + uVar4) = 0;
      }
    }
    else {
      _memcpy(puVar9,puVar3,uVar4 + 1);
    }
  }
  else {
    uVar4 = *param_2;
    *param_1 = uVar4;
    param_1 = (ulong *)(uVar4 + (uVar7 + 0x10 & ~uVar7));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100745590 | FUN_100745590 */

void FUN_100745590(ulong *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (0xfffffffe < *param_1) {
    lVar3 = *(long *)(lVar1 + -8);
    uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xf8 | 7;
    uVar5 = *(ulong *)(lVar3 + 0x40);
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    puVar2 = (undefined8 *)((long)param_1 + uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff));
    if (*(byte *)((long)puVar2 + uVar5) < 2) {
      if (*(byte *)((long)puVar2 + uVar5) == 1) {
        _swift_errorRelease(*puVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000100745638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))(puVar2,lVar1);
      return;
    }
  }
  return;
}



/* Address: 0x10074563c | FUN_10074563c */

ulong * FUN_10074563c(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar7;
  if (0xfffffffe < *param_2) {
    *param_1 = *param_2;
    puVar8 = (undefined8 *)((long)param_1 + uVar7 + 8 & uVar6);
    puVar3 = (undefined8 *)((long)param_2 + uVar7 + 8 & uVar6);
    if (*(byte *)((long)puVar3 + uVar5) < 2) {
      if (*(byte *)((long)puVar3 + uVar5) == 1) {
        uVar9 = *puVar3;
        _swift_errorRetain(uVar9);
        *puVar8 = uVar9;
        *(undefined1 *)((long)puVar8 + uVar5) = 1;
      }
      else {
        (**(code **)(lVar4 + 0x10))(puVar8,puVar3,lVar1);
        *(undefined1 *)((long)puVar8 + uVar5) = 0;
      }
    }
    else {
      _memcpy(puVar8,puVar3,uVar5 + 1);
    }
    return param_1;
  }
  puVar2 = _memcpy(param_1,param_2,(uVar7 + 8 & uVar6) + uVar5 + 1);
  return puVar2;
}



/* Address: 0x100745748 | FUN_100745748 */

ulong * FUN_100745748(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar3 + -8);
  uVar5 = *(ulong *)(lVar18 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar12 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8;
  uVar11 = uVar12 | 7;
  uVar6 = ~uVar11;
  uVar13 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (uVar13 < 0xffffffff) goto LAB_1007458f0;
    *param_1 = uVar13;
    puVar14 = (uint *)((long)param_1 + uVar11 + 8 & uVar6);
    puVar15 = (uint *)((long)param_2 + uVar11 + 8 & uVar6);
    if (1 < *(byte *)((long)puVar15 + uVar5)) goto LAB_100745928;
    if (*(byte *)((long)puVar15 + uVar5) != 1) {
      pcVar8 = *(code **)(lVar18 + 0x10);
      goto LAB_1007458d4;
    }
    uVar16 = *(undefined8 *)puVar15;
    goto LAB_1007459c4;
  }
  if (uVar13 < 0xffffffff) {
    puVar7 = (undefined8 *)((long)param_1 + uVar11 + 8 & uVar6);
    if (*(byte *)((long)puVar7 + uVar5) < 2) {
      if (*(byte *)((long)puVar7 + uVar5) == 1) {
        _swift_errorRelease(*puVar7);
      }
      else {
        (**(code **)(lVar18 + 8))(puVar7,lVar3);
      }
    }
LAB_1007458f0:
    puVar4 = _memcpy(param_1,param_2,(uVar12 + 0xf & (uVar11 ^ 0xffffffffffffffff)) + uVar5 + 1);
    return puVar4;
  }
  *param_1 = uVar13;
  puVar14 = (uint *)((long)param_1 + uVar11 + 8 & uVar6);
  puVar15 = (uint *)((long)param_2 + uVar11 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar14 + uVar5);
  bVar2 = *(byte *)((long)puVar15 + uVar5);
  if (bVar1 < 2) {
    if (1 < bVar2) {
      if (bVar1 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar14);
      }
      else {
        (**(code **)(lVar18 + 8))(puVar14,lVar3);
      }
LAB_100745928:
      _memcpy(puVar14,puVar15,uVar5 + 1);
      return param_1;
    }
    if (puVar14 == puVar15) {
      return param_1;
    }
    if (bVar1 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar14);
    }
    else {
      (**(code **)(lVar18 + 8))(puVar14,lVar3);
    }
    bVar1 = *(byte *)((long)puVar15 + uVar5);
    uVar9 = (uint)bVar1;
    if (1 < bVar1) {
      uVar17 = (uint)uVar5;
      uVar10 = 4;
      if (uVar17 < 4) {
        uVar10 = uVar17;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_1007459b8;
        uVar10 = (uint)(byte)*puVar15;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar15;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar15;
      }
      else {
        uVar10 = *puVar15;
      }
      uVar9 = uVar10 | bVar1 - 2 << (ulong)((uVar17 & 3) << 3);
      if (3 < uVar17) {
        uVar9 = uVar10;
      }
      uVar9 = uVar9 + 2;
    }
LAB_1007459b8:
    if (uVar9 != 1) {
      pcVar8 = *(code **)(lVar18 + 0x10);
LAB_1007458d4:
      (*pcVar8)(puVar14,puVar15,lVar3);
      *(byte *)((long)puVar14 + uVar5) = 0;
      return param_1;
    }
  }
  else {
    if (1 < bVar2) goto LAB_100745928;
    if (bVar2 != 1) {
      pcVar8 = *(code **)(lVar18 + 0x10);
      goto LAB_1007458d4;
    }
  }
  uVar16 = *(undefined8 *)puVar15;
LAB_1007459c4:
  _swift_errorRetain(uVar16);
  *(undefined8 *)puVar14 = uVar16;
  *(byte *)((long)puVar14 + uVar5) = 1;
  return param_1;
}



/* Address: 0x100745a04 | FUN_100745a04 */

ulong * FUN_100745a04(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar6 = ~uVar7;
  if (0xfffffffe < *param_2) {
    *param_1 = *param_2;
    puVar8 = (undefined8 *)((long)param_1 + uVar7 + 8 & uVar6);
    puVar3 = (undefined8 *)((long)param_2 + uVar7 + 8 & uVar6);
    if (*(byte *)((long)puVar3 + uVar5) < 2) {
      if (*(byte *)((long)puVar3 + uVar5) == 1) {
        *puVar8 = *puVar3;
        *(undefined1 *)((long)puVar8 + uVar5) = 1;
      }
      else {
        (**(code **)(lVar4 + 0x20))(puVar8,puVar3,lVar1);
        *(undefined1 *)((long)puVar8 + uVar5) = 0;
      }
    }
    else {
      _memcpy(puVar8,puVar3,uVar5 + 1);
    }
    return param_1;
  }
  puVar2 = _memcpy(param_1,param_2,(uVar7 + 8 & uVar6) + uVar5 + 1);
  return puVar2;
}



/* Address: 0x100745b08 | FUN_100745b08 */

ulong * FUN_100745b08(ulong *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar18 = *(long *)(lVar3 + -8);
  uVar5 = *(ulong *)(lVar18 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar13 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8;
  uVar12 = uVar13 | 7;
  uVar6 = ~uVar12;
  uVar14 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (uVar14 < 0xffffffff) goto LAB_100745cb0;
    *param_1 = uVar14;
    puVar15 = (uint *)((long)param_1 + uVar12 + 8 & uVar6);
    puVar16 = (uint *)((long)param_2 + uVar12 + 8 & uVar6);
    if (1 < *(byte *)((long)puVar16 + uVar5)) goto LAB_100745ce8;
    if (*(byte *)((long)puVar16 + uVar5) != 1) {
      pcVar9 = *(code **)(lVar18 + 0x20);
      goto LAB_100745c94;
    }
    uVar8 = *(undefined8 *)puVar16;
    goto LAB_100745d84;
  }
  if (uVar14 < 0xffffffff) {
    puVar7 = (undefined8 *)((long)param_1 + uVar12 + 8 & uVar6);
    if (*(byte *)((long)puVar7 + uVar5) < 2) {
      if (*(byte *)((long)puVar7 + uVar5) == 1) {
        _swift_errorRelease(*puVar7);
      }
      else {
        (**(code **)(lVar18 + 8))(puVar7,lVar3);
      }
    }
LAB_100745cb0:
    puVar4 = _memcpy(param_1,param_2,(uVar13 + 0xf & (uVar12 ^ 0xffffffffffffffff)) + uVar5 + 1);
    return puVar4;
  }
  *param_1 = uVar14;
  puVar15 = (uint *)((long)param_1 + uVar12 + 8 & uVar6);
  puVar16 = (uint *)((long)param_2 + uVar12 + 8 & uVar6);
  bVar1 = *(byte *)((long)puVar15 + uVar5);
  bVar2 = *(byte *)((long)puVar16 + uVar5);
  if (bVar1 < 2) {
    if (1 < bVar2) {
      if (bVar1 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar15);
      }
      else {
        (**(code **)(lVar18 + 8))(puVar15,lVar3);
      }
LAB_100745ce8:
      _memcpy(puVar15,puVar16,uVar5 + 1);
      return param_1;
    }
    if (puVar15 == puVar16) {
      return param_1;
    }
    if (bVar1 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar15);
    }
    else {
      (**(code **)(lVar18 + 8))(puVar15,lVar3);
    }
    bVar1 = *(byte *)((long)puVar16 + uVar5);
    uVar10 = (uint)bVar1;
    if (1 < bVar1) {
      uVar17 = (uint)uVar5;
      uVar11 = 4;
      if (uVar17 < 4) {
        uVar11 = uVar17;
      }
      if ((int)uVar11 < 2) {
        if (uVar11 == 0) goto LAB_100745d78;
        uVar11 = (uint)(byte)*puVar16;
      }
      else if (uVar11 == 2) {
        uVar11 = (uint)(ushort)*puVar16;
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*puVar16;
      }
      else {
        uVar11 = *puVar16;
      }
      uVar10 = uVar11 | bVar1 - 2 << (ulong)((uVar17 & 3) << 3);
      if (3 < uVar17) {
        uVar10 = uVar11;
      }
      uVar10 = uVar10 + 2;
    }
LAB_100745d78:
    if (uVar10 != 1) {
      pcVar9 = *(code **)(lVar18 + 0x20);
LAB_100745c94:
      (*pcVar9)(puVar15,puVar16,lVar3);
      *(byte *)((long)puVar15 + uVar5) = 0;
      return param_1;
    }
  }
  else {
    if (1 < bVar2) goto LAB_100745ce8;
    if (bVar2 != 1) {
      pcVar9 = *(code **)(lVar18 + 0x20);
      goto LAB_100745c94;
    }
  }
  uVar8 = *(undefined8 *)puVar16;
LAB_100745d84:
  *(undefined8 *)puVar15 = uVar8;
  *(byte *)((long)puVar15 + uVar5) = 1;
  return param_1;
}



/* Address: 0x100745dbc | FUN_100745dbc */

int FUN_100745dbc(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
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
  if (param_2 < 0x7fffffff) goto LAB_100745ea4;
  uVar1 = *(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = uVar6 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = param_2 + 0x80000002 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar7 < 0xff) {
      if (uVar7 == 0) goto LAB_100745ea4;
      goto LAB_100745e64;
    }
    if (uVar7 < 0xffff) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100745e64:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0x7fffffff;
  }
LAB_100745ea4:
  uVar6 = *param_1;
  if (0xfffffffe < uVar6) {
    uVar6 = 0xffffffff;
  }
  iVar3 = 0;
  if (1 < (int)uVar6 + 1U) {
    iVar3 = (int)uVar6;
  }
  return iVar3;
}



/* Address: 0x100745f24 | FUN_100745f24 */

void FUN_100745f24(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar7 = *(uint *)(*(long *)(lVar5 + -8) + 0x50) & 0xf8;
  sVar1 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0x7fffffff) {
    bVar4 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = param_3 + 0x80000002 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f)
    ;
    bVar4 = 2;
    if (0xfffe < uVar2) {
      bVar4 = 4;
    }
    if (uVar2 < 0xff) {
      bVar4 = uVar2 != 0;
    }
  }
  else {
    bVar4 = 1;
  }
  if (param_2 < 0x7fffffff) {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    param_2 = param_2 + 0x80000001;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}



/* Address: 0x100746114 | FUN_100746114 */

void FUN_100746114(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar5 = *(ulong *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if ((int)param_2 < 0) {
    uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50) & 0xf8;
    uVar1 = (int)uVar5 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar4 = 0x7fffffff;
    if (uVar1 < 4) {
      uVar4 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 & param_2;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1,(ulong)uVar1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar4;
        }
        else {
          *(short *)param_1 = (short)uVar4;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar4;
        *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar4;
      }
    }
  }
  else if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
  }
  return;
}



/* Address: 0x10074620c | FUN_10074620c */

void FUN_10074620c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100746218 | FUN_100746218 */

void FUN_100746218(void)

{
  FUN_100746224();
  return;
}



/* Address: 0x100746224 | FUN_100746224 */

undefined1  [16]
FUN_100746224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [32];
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
    _swift_getTupleTypeLayout2(auStack_50,param_4,*(long *)(lVar4 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_50,1);
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



/* Address: 0x1007462ec | FUN_1007462ec */

ulong * FUN_1007462ec(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar1 + -8);
  uVar4 = *(ulong *)(lVar6 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  uVar5 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8;
  uVar7 = uVar5 | 7;
  uVar5 = (uVar5 + 0xf & (uVar7 ^ 0xffffffffffffffff)) + uVar4 + 1;
  if ((*(uint *)(lVar6 + 0x50) & 0x1000f8) == 0 && uVar5 < 0x19) {
    uVar8 = *param_2;
    uVar7 = uVar8;
    if (0xfffffffe < uVar8) {
      uVar7 = 0xffffffff;
    }
    if ((uVar8 != 0) && (1 < (int)uVar7 + 1U)) {
      puVar2 = _memcpy(param_1,param_2,uVar5);
      return puVar2;
    }
    *param_1 = uVar8;
    puVar10 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar3 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    if (*(byte *)((long)puVar3 + uVar4) < 2) {
      if (*(byte *)((long)puVar3 + uVar4) == 1) {
        uVar9 = *puVar3;
        _swift_errorRetain(uVar9);
        *puVar10 = uVar9;
        *(undefined1 *)((long)puVar10 + uVar4) = 1;
      }
      else {
        (**(code **)(lVar6 + 0x10))(puVar10,puVar3,lVar1);
        *(undefined1 *)((long)puVar10 + uVar4) = 0;
      }
    }
    else {
      _memcpy(puVar10,puVar3,uVar4 + 1);
    }
  }
  else {
    uVar4 = *param_2;
    *param_1 = uVar4;
    param_1 = (ulong *)(uVar4 + (uVar7 + 0x10 & ~uVar7));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100746434 | FUN_100746434 */

void FUN_100746434(ulong *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar3 = *param_1;
  uVar5 = uVar3;
  if (0xfffffffe < uVar3) {
    uVar5 = 0xffffffff;
  }
  if (uVar3 == 0 || ((int)uVar5 == -1 || (int)uVar5 == 0)) {
    lVar4 = *(long *)(lVar1 + -8);
    uVar3 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
    uVar5 = *(ulong *)(lVar4 + 0x40);
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    puVar2 = (undefined8 *)((long)param_1 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff));
    if (*(byte *)((long)puVar2 + uVar5) < 2) {
      if (*(byte *)((long)puVar2 + uVar5) == 1) {
        _swift_errorRelease(*puVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001007464ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))(puVar2,lVar1);
      return;
    }
  }
  return;
}



/* Address: 0x1007464f0 | FUN_1007464f0 */

ulong * FUN_1007464f0(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar2 + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar8 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8 | 7;
  uVar7 = ~uVar8;
  uVar9 = *param_2;
  uVar1 = uVar9;
  if (0xfffffffe < uVar9) {
    uVar1 = 0xffffffff;
  }
  if ((uVar9 != 0) && (1 < (int)uVar1 + 1U)) {
    puVar3 = _memcpy(param_1,param_2,(uVar8 + 8 & uVar7) + uVar6 + 1);
    return puVar3;
  }
  *param_1 = uVar9;
  puVar10 = (undefined8 *)((long)param_1 + uVar8 + 8 & uVar7);
  puVar4 = (undefined8 *)((long)param_2 + uVar8 + 8 & uVar7);
  if (*(byte *)((long)puVar4 + uVar6) < 2) {
    if (*(byte *)((long)puVar4 + uVar6) == 1) {
      uVar11 = *puVar4;
      _swift_errorRetain(uVar11);
      *puVar10 = uVar11;
      *(undefined1 *)((long)puVar10 + uVar6) = 1;
    }
    else {
      (**(code **)(lVar5 + 0x10))(puVar10,puVar4,lVar2);
      *(undefined1 *)((long)puVar10 + uVar6) = 0;
    }
  }
  else {
    _memcpy(puVar10,puVar4,uVar6 + 1);
  }
  return param_1;
}



/* Address: 0x10074660c | FUN_10074660c */

ulong * FUN_10074660c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar22 = *(long *)(lVar6 + -8);
  uVar9 = *(ulong *)(lVar22 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar16 = (ulong)*(uint *)(lVar22 + 0x50) & 0xf8;
  uVar15 = uVar16 | 7;
  uVar10 = ~uVar15;
  uVar18 = *param_1;
  uVar1 = uVar18;
  if (0xfffffffe < uVar18) {
    uVar1 = 0xffffffff;
  }
  uVar17 = *param_2;
  uVar2 = uVar17;
  if (0xfffffffe < uVar17) {
    uVar2 = 0xffffffff;
  }
  bVar5 = uVar17 != 0 && 1 < (int)uVar2 + 1U;
  if ((uVar18 == 0) || ((int)uVar1 + 1U < 2)) {
    if (bVar5) {
      puVar11 = (undefined8 *)((long)param_1 + uVar15 + 8 & uVar10);
      if (*(byte *)((long)puVar11 + uVar9) < 2) {
        if (*(byte *)((long)puVar11 + uVar9) == 1) {
          _swift_errorRelease(*puVar11);
        }
        else {
          (**(code **)(lVar22 + 8))(puVar11,lVar6);
        }
      }
      goto LAB_1007467b4;
    }
    *param_1 = uVar17;
    puVar19 = (uint *)((long)param_1 + uVar15 + 8 & uVar10);
    puVar8 = (uint *)((long)param_2 + uVar15 + 8 & uVar10);
    bVar3 = *(byte *)((long)puVar19 + uVar9);
    bVar4 = *(byte *)((long)puVar8 + uVar9);
    if (bVar3 < 2) {
      if (bVar4 < 2) {
        if (puVar19 == puVar8) {
          return param_1;
        }
        if (bVar3 == 1) {
          _swift_errorRelease(*(undefined8 *)puVar19);
        }
        else {
          (**(code **)(lVar22 + 8))(puVar19,lVar6);
        }
        bVar3 = *(byte *)((long)puVar8 + uVar9);
        uVar13 = (uint)bVar3;
        if (1 < bVar3) {
          uVar21 = (uint)uVar9;
          uVar14 = 4;
          if (uVar21 < 4) {
            uVar14 = uVar21;
          }
          if ((int)uVar14 < 2) {
            if (uVar14 == 0) goto LAB_100746894;
            uVar14 = (uint)(byte)*puVar8;
          }
          else if (uVar14 == 2) {
            uVar14 = (uint)(ushort)*puVar8;
          }
          else if (uVar14 == 3) {
            uVar14 = (uint)(uint3)*puVar8;
          }
          else {
            uVar14 = *puVar8;
          }
          uVar13 = uVar14 | bVar3 - 2 << (ulong)((uVar21 & 3) << 3);
          if (3 < uVar21) {
            uVar13 = uVar14;
          }
          uVar13 = uVar13 + 2;
        }
LAB_100746894:
        if (uVar13 != 1) {
          pcVar12 = *(code **)(lVar22 + 0x10);
LAB_1007467e0:
          (*pcVar12)(puVar19,puVar8,lVar6);
          *(byte *)((long)puVar19 + uVar9) = 0;
          return param_1;
        }
LAB_10074689c:
        uVar20 = *(undefined8 *)puVar8;
        goto LAB_1007468a0;
      }
      if (bVar3 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar19);
      }
      else {
        (**(code **)(lVar22 + 8))(puVar19,lVar6);
      }
    }
    else if (bVar4 < 2) {
      if (bVar4 != 1) {
        pcVar12 = *(code **)(lVar22 + 0x10);
        goto LAB_1007467e0;
      }
      goto LAB_10074689c;
    }
LAB_100746804:
    _memcpy(puVar19,puVar8,uVar9 + 1);
  }
  else {
    if (bVar5) {
LAB_1007467b4:
      puVar7 = _memcpy(param_1,param_2,(uVar16 + 0xf & (uVar15 ^ 0xffffffffffffffff)) + uVar9 + 1);
      return puVar7;
    }
    *param_1 = uVar17;
    puVar19 = (uint *)((long)param_1 + uVar15 + 8 & uVar10);
    puVar8 = (uint *)((long)param_2 + uVar15 + 8 & uVar10);
    if (1 < *(byte *)((long)puVar8 + uVar9)) goto LAB_100746804;
    if (*(byte *)((long)puVar8 + uVar9) != 1) {
      pcVar12 = *(code **)(lVar22 + 0x10);
      goto LAB_1007467e0;
    }
    uVar20 = *(undefined8 *)puVar8;
LAB_1007468a0:
    _swift_errorRetain(uVar20);
    *(undefined8 *)puVar19 = uVar20;
    *(byte *)((long)puVar19 + uVar9) = 1;
  }
  return param_1;
}



/* Address: 0x1007468e0 | FUN_1007468e0 */

ulong * FUN_1007468e0(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar2 + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar8 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8 | 7;
  uVar7 = ~uVar8;
  uVar9 = *param_2;
  uVar1 = uVar9;
  if (0xfffffffe < uVar9) {
    uVar1 = 0xffffffff;
  }
  if ((uVar9 != 0) && (1 < (int)uVar1 + 1U)) {
    puVar3 = _memcpy(param_1,param_2,(uVar8 + 8 & uVar7) + uVar6 + 1);
    return puVar3;
  }
  *param_1 = uVar9;
  puVar10 = (undefined8 *)((long)param_1 + uVar8 + 8 & uVar7);
  puVar4 = (undefined8 *)((long)param_2 + uVar8 + 8 & uVar7);
  if (*(byte *)((long)puVar4 + uVar6) < 2) {
    if (*(byte *)((long)puVar4 + uVar6) == 1) {
      *puVar10 = *puVar4;
      *(undefined1 *)((long)puVar10 + uVar6) = 1;
    }
    else {
      (**(code **)(lVar5 + 0x20))(puVar10,puVar4,lVar2);
      *(undefined1 *)((long)puVar10 + uVar6) = 0;
    }
  }
  else {
    _memcpy(puVar10,puVar4,uVar6 + 1);
  }
  return param_1;
}



/* Address: 0x1007469f4 | FUN_1007469f4 */

ulong * FUN_1007469f4(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  long lVar22;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar22 = *(long *)(lVar6 + -8);
  uVar9 = *(ulong *)(lVar22 + 0x40);
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  uVar17 = (ulong)*(uint *)(lVar22 + 0x50) & 0xf8;
  uVar16 = uVar17 | 7;
  uVar10 = ~uVar16;
  uVar19 = *param_1;
  uVar1 = uVar19;
  if (0xfffffffe < uVar19) {
    uVar1 = 0xffffffff;
  }
  uVar18 = *param_2;
  uVar2 = uVar18;
  if (0xfffffffe < uVar18) {
    uVar2 = 0xffffffff;
  }
  bVar5 = uVar18 != 0 && 1 < (int)uVar2 + 1U;
  if ((uVar19 == 0) || ((int)uVar1 + 1U < 2)) {
    if (bVar5) {
      puVar12 = (undefined8 *)((long)param_1 + uVar16 + 8 & uVar10);
      if (*(byte *)((long)puVar12 + uVar9) < 2) {
        if (*(byte *)((long)puVar12 + uVar9) == 1) {
          _swift_errorRelease(*puVar12);
        }
        else {
          (**(code **)(lVar22 + 8))(puVar12,lVar6);
        }
      }
      goto LAB_100746b9c;
    }
    *param_1 = uVar18;
    puVar20 = (uint *)((long)param_1 + uVar16 + 8 & uVar10);
    puVar8 = (uint *)((long)param_2 + uVar16 + 8 & uVar10);
    bVar3 = *(byte *)((long)puVar20 + uVar9);
    bVar4 = *(byte *)((long)puVar8 + uVar9);
    if (bVar3 < 2) {
      if (bVar4 < 2) {
        if (puVar20 == puVar8) {
          return param_1;
        }
        if (bVar3 == 1) {
          _swift_errorRelease(*(undefined8 *)puVar20);
        }
        else {
          (**(code **)(lVar22 + 8))(puVar20,lVar6);
        }
        bVar3 = *(byte *)((long)puVar8 + uVar9);
        uVar14 = (uint)bVar3;
        if (1 < bVar3) {
          uVar21 = (uint)uVar9;
          uVar15 = 4;
          if (uVar21 < 4) {
            uVar15 = uVar21;
          }
          if ((int)uVar15 < 2) {
            if (uVar15 == 0) goto LAB_100746c7c;
            uVar15 = (uint)(byte)*puVar8;
          }
          else if (uVar15 == 2) {
            uVar15 = (uint)(ushort)*puVar8;
          }
          else if (uVar15 == 3) {
            uVar15 = (uint)(uint3)*puVar8;
          }
          else {
            uVar15 = *puVar8;
          }
          uVar14 = uVar15 | bVar3 - 2 << (ulong)((uVar21 & 3) << 3);
          if (3 < uVar21) {
            uVar14 = uVar15;
          }
          uVar14 = uVar14 + 2;
        }
LAB_100746c7c:
        if (uVar14 != 1) {
          pcVar13 = *(code **)(lVar22 + 0x20);
LAB_100746bc8:
          (*pcVar13)(puVar20,puVar8,lVar6);
          *(byte *)((long)puVar20 + uVar9) = 0;
          return param_1;
        }
LAB_100746c84:
        uVar11 = *(undefined8 *)puVar8;
        goto LAB_100746c88;
      }
      if (bVar3 == 1) {
        _swift_errorRelease(*(undefined8 *)puVar20);
      }
      else {
        (**(code **)(lVar22 + 8))(puVar20,lVar6);
      }
    }
    else if (bVar4 < 2) {
      if (bVar4 != 1) {
        pcVar13 = *(code **)(lVar22 + 0x20);
        goto LAB_100746bc8;
      }
      goto LAB_100746c84;
    }
LAB_100746bec:
    _memcpy(puVar20,puVar8,uVar9 + 1);
  }
  else {
    if (bVar5) {
LAB_100746b9c:
      puVar7 = _memcpy(param_1,param_2,(uVar17 + 0xf & (uVar16 ^ 0xffffffffffffffff)) + uVar9 + 1);
      return puVar7;
    }
    *param_1 = uVar18;
    puVar20 = (uint *)((long)param_1 + uVar16 + 8 & uVar10);
    puVar8 = (uint *)((long)param_2 + uVar16 + 8 & uVar10);
    if (1 < *(byte *)((long)puVar8 + uVar9)) goto LAB_100746bec;
    if (*(byte *)((long)puVar8 + uVar9) != 1) {
      pcVar13 = *(code **)(lVar22 + 0x20);
      goto LAB_100746bc8;
    }
    uVar11 = *(undefined8 *)puVar8;
LAB_100746c88:
    *(undefined8 *)puVar20 = uVar11;
    *(byte *)((long)puVar20 + uVar9) = 1;
  }
  return param_1;
}



/* Address: 0x100746cc0 | FUN_100746cc0 */

int FUN_100746cc0(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar8 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7ffffffe) goto LAB_100746da4;
  uVar1 = *(uint *)(*(long *)(lVar5 + -8) + 0x50) & 0xf8;
  uVar8 = uVar8 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar6 = (uint)uVar8;
  uVar1 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = param_2 + 0x80000003 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_100746da4;
      goto LAB_100746d64;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_100746d64:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar1 = 4;
      if (uVar6 < 4) {
        uVar1 = uVar6;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar8 | uVar2) + 0x7ffffffe;
  }
LAB_100746da4:
  uVar8 = *param_1;
  if (0xfffffffe < uVar8) {
    uVar8 = 0xffffffff;
  }
  iVar7 = (int)uVar8;
  iVar3 = 0;
  if (iVar7 != 0) {
    iVar3 = iVar7 + -1;
  }
  iVar4 = 0;
  if (1 < iVar7 + 1U) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Address: 0x100746e2c | FUN_100746e2c */

void FUN_100746e2c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = *(ulong *)(*(long *)(lVar5 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar7 = *(uint *)(*(long *)(lVar5 + -8) + 0x50) & 0xf8;
  sVar1 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0x7ffffffe) {
    bVar4 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = param_3 + 0x80000003 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f)
    ;
    bVar4 = 2;
    if (0xfffe < uVar2) {
      bVar4 = 4;
    }
    if (uVar2 < 0xff) {
      bVar4 = uVar2 != 0;
    }
  }
  else {
    bVar4 = 1;
  }
  if (param_2 < 0x7ffffffe) {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
    }
  }
  else {
    param_2 = param_2 + 0x80000002;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}


