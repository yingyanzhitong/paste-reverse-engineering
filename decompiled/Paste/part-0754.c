/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10084e8e4 | FUN_10084e8e4 */

void FUN_10084e8e4(void)

{
  _swift_getAtKeyPath();
  return;
}



/* Address: 0x10084e90c | FUN_10084e90c */

void FUN_10084e90c(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_10084b968(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  iVar1 = *(int *)(lVar3 + 0x2c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,param_2 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10084e980 | FUN_10084e980 */

undefined1 FUN_10084e980(void)

{
  undefined1 local_11;
  
  _swift_getAtKeyPath(&local_11);
  return local_11;
}



/* Address: 0x10084e9b0 | FUN_10084e9b0 */

void FUN_10084e9b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084e9bc | FUN_10084e9bc */

void FUN_10084e9bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084e9c8 | FUN_10084e9c8 */

void FUN_10084e9c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10084e9d4 | FUN_10084e9d4 */

void FUN_10084e9d4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084e9e0 | FUN_10084e9e0 */

void FUN_10084e9e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084e9ec | FUN_10084e9ec */

undefined1  [16] FUN_10084e9ec(long param_1)

{
  Optional OVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  ulong uVar3;
  
  Swift::Array<undefined>::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,OVar1.value);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,RVar2.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c7d338,*(long *)(lVar4 + -8) + 0x40);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_40);
    lVar4 = 0;
    uVar5 = 0;
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_2c;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Address: 0x10084ea84 | FUN_10084ea84 */

long * FUN_10084ea84(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xf8 | 7;
  uVar7 = *(ulong *)(lVar3 + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar7 - (-uVar4 - 9 | uVar4)) {
    lVar3 = *param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  *param_1 = *param_2;
  puVar2 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar1 = *(byte *)((long)puVar2 + uVar7);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar9 = (uint)uVar7;
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10084eb80;
      uVar6 = (uint)(byte)*puVar2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*puVar2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*puVar2;
    }
    else {
      uVar6 = *puVar2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10084eb80:
  puVar8 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar5 == 1) {
    (**(code **)(lVar3 + 0x10))(puVar8);
    *(undefined1 *)((long)puVar8 + uVar7) = 1;
  }
  else {
    *puVar8 = *(undefined8 *)puVar2;
    *(undefined1 *)((long)puVar8 + uVar7) = 0;
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Address: 0x10084ebc8 | FUN_10084ebc8 */

void FUN_10084ebc8(long param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x50) & 0xf8 | 7;
  puVar2 = (uint *)(param_1 + uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff));
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)puVar2 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084ec6c;
      uVar7 = (uint)(byte)*puVar2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar2;
    }
    else {
      uVar7 = *puVar2;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10084ec6c:
  if (uVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010084ec78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)puVar2);
  return;
}



/* Address: 0x10084ec84 | FUN_10084ec84 */

undefined8 * FUN_10084ec84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8;
  lVar1 = uVar5 + 0xf;
  uVar5 = (uVar5 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar8 = (undefined8 *)(lVar1 + (long)param_1 & uVar5);
  puVar3 = (uint *)(lVar1 + (long)param_2 & uVar5);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar2 = *(byte *)((long)puVar3 + uVar5);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar5;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084ed50;
      uVar7 = (uint)(byte)*puVar3;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar3;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar3;
    }
    else {
      uVar7 = *puVar3;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10084ed50:
  if (uVar6 != 1) {
    *puVar8 = *(undefined8 *)puVar3;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar4 + 0x10))(puVar8);
  }
  *(bool *)((long)puVar8 + uVar5) = uVar6 == 1;
  return param_1;
}



/* Address: 0x10084ed94 | FUN_10084ed94 */

undefined8 * FUN_10084ed94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  *param_1 = *param_2;
  lVar6 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8;
  lVar1 = uVar3 + 0xf;
  uVar3 = (uVar3 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar7 = (uint *)(lVar1 + (long)param_1 & uVar3);
  puVar8 = (uint *)(lVar1 + (long)param_2 & uVar3);
  if (puVar7 == puVar8) {
    return param_1;
  }
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)puVar7 + uVar3);
  uVar4 = (uint)bVar2;
  uVar10 = (uint)uVar3;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084ee68;
      uVar5 = (uint)(byte)*puVar7;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar7;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar7;
    }
    else {
      uVar5 = *puVar7;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10084ee68:
  if (uVar4 == 1) {
    (**(code **)(lVar9 + 8))(puVar7,lVar6);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)puVar7);
  }
  bVar2 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084ef04;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10084ef04:
  if (uVar4 == 1) {
    (**(code **)(lVar9 + 0x10))(puVar7,puVar8,lVar6);
    *(byte *)((long)puVar7 + uVar3) = 1;
  }
  else {
    *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
    *(byte *)((long)puVar7 + uVar3) = 0;
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Address: 0x10084ef54 | FUN_10084ef54 */

undefined8 * FUN_10084ef54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8;
  lVar1 = uVar5 + 0xf;
  uVar5 = (uVar5 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar8 = (undefined8 *)(lVar1 + (long)param_1 & uVar5);
  puVar3 = (uint *)(lVar1 + (long)param_2 & uVar5);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar2 = *(byte *)((long)puVar3 + uVar5);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)uVar5;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084f01c;
      uVar7 = (uint)(byte)*puVar3;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar3;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar3;
    }
    else {
      uVar7 = *puVar3;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10084f01c:
  if (uVar6 != 1) {
    *puVar8 = *(undefined8 *)puVar3;
  }
  else {
    (**(code **)(lVar4 + 0x20))(puVar8);
  }
  *(bool *)((long)puVar8 + uVar5) = uVar6 == 1;
  return param_1;
}



/* Address: 0x10084f060 | FUN_10084f060 */

undefined8 * FUN_10084f060(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8;
  lVar1 = uVar3 + 0xf;
  uVar3 = (uVar3 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar6 = (uint *)(lVar1 + (long)param_1 & uVar3);
  puVar8 = (uint *)(lVar1 + (long)param_2 & uVar3);
  if (puVar6 == puVar8) {
    return param_1;
  }
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar2 = *(byte *)((long)puVar6 + uVar3);
  uVar4 = (uint)bVar2;
  uVar10 = (uint)uVar3;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084f134;
      uVar5 = (uint)(byte)*puVar6;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar6;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar6;
    }
    else {
      uVar5 = *puVar6;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10084f134:
  if (uVar4 == 1) {
    (**(code **)(lVar9 + 8))(puVar6,lVar7);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)puVar6);
  }
  bVar2 = *(byte *)((long)puVar8 + uVar3);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar10 < 4) {
      uVar5 = uVar10;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084f1d0;
      uVar5 = (uint)(byte)*puVar8;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar8;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar8;
    }
    else {
      uVar5 = *puVar8;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10084f1d0:
  if (uVar4 != 1) {
    *(undefined8 *)puVar6 = *(undefined8 *)puVar8;
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar6,puVar8,lVar7);
  }
  *(bool *)((long)puVar6 + uVar3) = uVar4 == 1;
  return param_1;
}



/* Address: 0x10084f21c | FUN_10084f21c */

uint FUN_10084f21c(ulong *param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (-1 < param_2) goto LAB_10084f23c;
  uVar1 = *(uint *)(lVar4 + 0x50) & 0xf8;
  uVar5 = uVar5 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar3 = (uint)uVar5;
  uVar1 = uVar3 << 3;
  if (uVar3 < 4) {
    uVar6 = (uint)(param_2 + -0x7fffffff + ~(-1 << (ulong)(uVar1 & 0x1f))) >> (ulong)(uVar1 & 0x1f);
    if (uVar6 < 0xff) {
      if (uVar6 == 0) goto LAB_10084f23c;
      goto LAB_10084f2ac;
    }
    if (uVar6 < 0xffff) {
      uVar6 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar6 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10084f2ac:
    uVar6 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar6 != 0) {
    uVar2 = 0;
    if (uVar3 < 4) {
      uVar2 = uVar6 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar3 != 0) {
      uVar1 = 4;
      if (uVar3 < 4) {
        uVar1 = uVar3;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar5 | uVar2) ^ 0x80000000;
  }
LAB_10084f23c:
  uVar5 = *param_1;
  if (0xfffffffe < uVar5) {
    uVar5 = 0xffffffff;
  }
  return (int)uVar5 + 1;
}



/* Address: 0x10084f338 | FUN_10084f338 */

void FUN_10084f338(ulong *param_1,uint param_2,int param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar7 = *(uint *)(lVar5 + 0x50) & 0xf8;
  sVar1 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0) {
    if (uVar7 < 4) {
      uVar2 = (uint)(param_3 + -0x7fffffff + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) >>
              (ulong)(uVar7 << 3 & 0x1f);
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
  }
  else {
    bVar4 = 0;
  }
  if ((int)param_2 < 0) {
    if (uVar7 < 4) {
      iVar8 = ((param_2 & 0x7fffffff) >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
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
      *(uint *)param_1 = param_2 & 0x7fffffff;
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
  else {
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
      *param_1 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x10084f4f8 | FUN_10084f4f8 */

void FUN_10084f4f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined1 auStack_50 [32];
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = &DAT_100c7d378;
  local_70 = &DAT_100c7d338;
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_58 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    _swift_getTupleTypeLayout(auStack_50,0,4,&local_70);
    local_28 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x10084f5b0 | FUN_10084f5b0 */

long * FUN_10084f5b0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  lVar2 = *(long *)(lVar3 + 0x40) + 7;
  uVar1 = (lVar2 + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  if (((uint)uVar5 < 8 && (*(uint *)(lVar3 + 0x50) & 0x100000) == 0) && (uVar1 | 1) < 0x19) {
    uVar7 = (uint)*(byte *)((long)param_2 + uVar1);
    if (1 < *(byte *)((long)param_2 + uVar1)) {
      uVar7 = (int)*param_2 + 2;
    }
    if (uVar7 == 1) {
      *param_1 = *param_2;
      uVar8 = (long)param_1 + uVar5 + 8 & ~uVar5;
      uVar5 = (long)param_2 + uVar5 + 8 & ~uVar5;
      (**(code **)(lVar3 + 0x10))(uVar8,uVar5);
      plVar4 = (long *)(lVar2 + uVar8 & 0xfffffffffffffff8);
      plVar6 = (long *)(lVar2 + uVar5 & 0xfffffffffffffff8);
      lVar2 = *plVar6;
      *plVar4 = lVar2;
      lVar3 = plVar6[1];
      plVar4[1] = lVar3;
      *(undefined1 *)((long)param_1 + uVar1) = 1;
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar2;
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
    _swift_retain(lVar2);
    _swift_bridgeObjectRetain(lVar3);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10084f700 | FUN_10084f700 */

void FUN_10084f700(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  uVar5 = (lVar1 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  uVar4 = (uint)*(byte *)((long)param_1 + uVar5);
  if (1 < *(byte *)((long)param_1 + uVar5) && (uVar5 & 0xffffffff) != 0) {
    uVar4 = *param_1 + 2;
  }
  if (uVar4 == 1) {
    uVar5 = (long)param_1 + uVar3 + 8 & ~uVar3;
    (**(code **)(lVar2 + 8))(uVar5);
    param_1 = (int *)(lVar1 + uVar5 & 0xfffffffffffffff8);
    _swift_release(*(undefined8 *)param_1);
  }
  else {
    _swift_release(*(undefined8 *)param_1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  return;
}



/* Address: 0x10084f7bc | FUN_10084f7bc */

undefined8 * FUN_10084f7bc(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  uVar8 = (uint)*(byte *)((long)param_2 + uVar2);
  if (1 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar8 = *param_2 + 2;
  }
  if (uVar8 != 1) {
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar3;
  }
  else {
    *param_1 = *(undefined8 *)param_2;
    uVar9 = (long)param_1 + uVar6 + 8 & ~uVar6;
    uVar6 = (long)param_2 + uVar6 + 8 & ~uVar6;
    (**(code **)(lVar4 + 0x10))(uVar9,uVar6);
    puVar5 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(lVar1 + uVar6 & 0xfffffffffffffff8);
    uVar3 = *puVar7;
    *puVar5 = uVar3;
    uVar10 = puVar7[1];
    puVar5[1] = uVar10;
  }
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  *(bool *)((long)param_1 + uVar2) = uVar8 == 1;
  return param_1;
}



/* Address: 0x10084f8d4 | FUN_10084f8d4 */

int * FUN_10084f8d4(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 != param_2) {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar10 = *(long *)(lVar7 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    if (uVar2 < 0x11) {
      uVar2 = 0x10;
    }
    uVar3 = (uint)*(byte *)((long)param_1 + uVar2);
    if (1 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar3 = *param_1 + 2;
    }
    uVar12 = ~uVar11;
    if (uVar3 == 1) {
      uVar8 = (long)param_1 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 8))(uVar8,lVar7);
      piVar9 = (int *)(lVar1 + uVar8 & 0xfffffffffffffff8);
      _swift_release(*(undefined8 *)piVar9);
    }
    else {
      _swift_release(*(undefined8 *)param_1);
      piVar9 = param_1;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(piVar9 + 2));
    uVar3 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 1 < *(byte *)((long)param_2 + uVar2)) {
      uVar3 = *param_2 + 2;
    }
    if (uVar3 != 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar8 = (long)param_1 + uVar11 + 8 & uVar12;
      uVar12 = (long)param_2 + uVar11 + 8 & uVar12;
      (**(code **)(lVar10 + 0x10))(uVar8,uVar12,lVar7);
      puVar4 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
      puVar5 = (undefined8 *)(lVar1 + uVar12 & 0xfffffffffffffff8);
      *puVar4 = *puVar5;
      uVar6 = puVar5[1];
      puVar4[1] = uVar6;
    }
    *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar6);
  }
  return param_1;
}



/* Address: 0x10084fa74 | FUN_10084fa74 */

void FUN_10084fa74(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar1 = *(long *)(lVar3 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  uVar7 = (uint)*(byte *)((long)param_2 + uVar2);
  if (1 < *(byte *)((long)param_2 + uVar2) && (uVar2 & 0xffffffff) != 0) {
    uVar7 = *param_2 + 2;
  }
  if (uVar7 != 1) {
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
  }
  else {
    *param_1 = *(undefined8 *)param_2;
    uVar8 = (long)param_1 + uVar5 + 8 & ~uVar5;
    uVar5 = (long)param_2 + uVar5 + 8 & ~uVar5;
    (**(code **)(lVar3 + 0x20))(uVar8,uVar5);
    puVar4 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)(lVar1 + uVar5 & 0xfffffffffffffff8);
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
  }
  *(bool *)((long)param_1 + uVar2) = uVar7 == 1;
  return;
}



/* Address: 0x10084fb78 | FUN_10084fb78 */

int * FUN_10084fb78(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (param_1 != param_2) {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar9 = *(long *)(lVar6 + -8);
    uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
    lVar1 = *(long *)(lVar9 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    if (uVar2 < 0x11) {
      uVar2 = 0x10;
    }
    uVar3 = (uint)*(byte *)((long)param_1 + uVar2);
    if (1 < *(byte *)((long)param_1 + uVar2) && (uVar2 & 0xffffffff) != 0) {
      uVar3 = *param_1 + 2;
    }
    uVar11 = ~uVar10;
    if (uVar3 == 1) {
      uVar7 = (long)param_1 + uVar10 + 8 & uVar11;
      (**(code **)(lVar9 + 8))(uVar7,lVar6);
      piVar8 = (int *)(lVar1 + uVar7 & 0xfffffffffffffff8);
      _swift_release(*(undefined8 *)piVar8);
    }
    else {
      _swift_release(*(undefined8 *)param_1);
      piVar8 = param_1;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(piVar8 + 2));
    uVar3 = (uint)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 & 0xffffffff) != 0 && 1 < *(byte *)((long)param_2 + uVar2)) {
      uVar3 = *param_2 + 2;
    }
    if (uVar3 != 1) {
      uVar12 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar12;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar7 = (long)param_1 + uVar10 + 8 & uVar11;
      uVar11 = (long)param_2 + uVar10 + 8 & uVar11;
      (**(code **)(lVar9 + 0x20))(uVar7,uVar11,lVar6);
      puVar4 = (undefined8 *)(lVar1 + uVar7 & 0xfffffffffffffff8);
      puVar5 = (undefined8 *)(lVar1 + uVar11 & 0xfffffffffffffff8);
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
    }
    *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
  }
  return param_1;
}



/* Address: 0x10084fd04 | FUN_10084fd04 */

int FUN_10084fd04(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar6 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar6 = (*(long *)(lVar3 + 0x40) + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 0x10;
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    uVar7 = uVar6 | 1;
    uVar4 = (uint)uVar7;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar4 < 4) {
      uVar5 = (param_2 + 1 >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar1 = 0;
    if (1 < uVar5) {
      uVar1 = uVar8;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10084fdb0;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10084fdb0:
        uVar8 = uVar8 - 1 << (ulong)((uVar4 & 3) << 3);
        if (uVar4 < 4) {
          uVar5 = (uint)(byte)*param_1;
        }
        else {
          uVar5 = *param_1;
          uVar8 = 0;
        }
        return (uVar5 | uVar8) + 0xff;
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
      if (uVar8 != 0) goto LAB_10084fdb0;
    }
  }
  iVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar6)) {
    iVar2 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x10084fdfc | FUN_10084fdfc */

void FUN_10084fdfc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = (*(long *)(lVar4 + 0x40) + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 0x10;
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  uVar7 = uVar5 | 1;
  if (param_3 < 0xff) {
    uVar2 = 0;
  }
  else {
    uVar6 = 2;
    uVar1 = uVar6;
    if ((uint)uVar7 < 4) {
      uVar1 = (param_3 + 1 >> 8) + 1;
    }
    if (0xffff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 < 0x100) {
      uVar6 = 1;
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = uVar6;
    }
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)((long)param_1 + uVar7) = 0;
      }
    }
    else if (uVar2 == 2) {
      *(undefined2 *)((long)param_1 + uVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + uVar7) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    _bzero(param_1,uVar7);
    iVar3 = 1;
    if ((uint)uVar7 < 4) {
      iVar3 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)((long)param_1 + uVar7) = (char)iVar3;
      }
    }
    else if (uVar2 == 2) {
      *(short *)((long)param_1 + uVar7) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + uVar7) = iVar3;
    }
  }
  return;
}



/* Address: 0x10084ff50 | FUN_10084ff50 */

uint FUN_10084ff50(int *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = (*(long *)(lVar2 + 0x40) + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 0x10;
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  uVar1 = (uint)*(byte *)((long)param_1 + uVar3);
  if (1 < *(byte *)((long)param_1 + uVar3) && (uVar3 & 0xffffffff) != 0) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x10084ffb0 | FUN_10084ffb0 */

void FUN_10084ffb0(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar1 = (*(long *)(lVar3 + 0x40) + 7 + (uVar1 + 8 & (uVar1 ^ 0xffffffffffffffff)) &
          0xfffffffffffffff8) + 0x10;
  if (param_2 < 2) {
    if (uVar1 < 0x11) {
      uVar1 = 0x10;
    }
    *(char *)((long)param_1 + uVar1) = (char)param_2;
    return;
  }
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  uVar2 = param_2;
  if ((int)uVar1 != 0) {
    uVar2 = 2;
  }
  *(char *)((long)param_1 + uVar1) = (char)uVar2;
  if ((int)uVar1 != 0) {
    _bzero(param_1,uVar1);
    *param_1 = param_2 - 2;
  }
  return;
}



/* Address: 0x100850044 | FUN_100850044 */

undefined1  [16] FUN_100850044(undefined8 param_1)

{
  Optional OVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [32];
  undefined *local_50;
  undefined *puStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  ulong uVar3;
  
  local_50 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_48 = local_50;
  Swift::Array<undefined>::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,OVar1.value);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,RVar2.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_70,&DAT_100c7d338,*(long *)(lVar4 + -8) + 0x40);
    puStack_38 = &DAT_100c7d338;
    local_40 = auStack_70;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_50);
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



/* Address: 0x1008500f8 | FUN_1008500f8 */

long * FUN_1008500f8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8;
  uVar8 = uVar9 | 7;
  uVar10 = *(ulong *)(lVar6 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  lVar1 = uVar10 + (uVar9 + 0xf & (uVar8 ^ 0xffffffffffffffff));
  lVar3 = 8;
  if (8 < lVar1 + 1U) {
    lVar3 = lVar1 + 1;
  }
  if ((*(uint *)(lVar6 + 0x50) & 0x1000f8) != 0 || 0x18 < lVar3 + 1U) {
    lVar6 = *param_2;
    *param_1 = lVar6;
    _swift_retain();
    return (long *)(lVar6 + (uVar8 + 0x10 & ~uVar8));
  }
  uVar7 = (uint)*(byte *)((long)param_2 + lVar3);
  if (3 < *(byte *)((long)param_2 + lVar3)) {
    uVar7 = (int)*param_2 + 4;
  }
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + lVar3) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    *param_1 = *param_2;
    *(undefined1 *)((long)param_1 + lVar3) = 1;
    _swift_bridgeObjectRetain();
    return param_1;
  }
  if (uVar7 != 2) {
    *param_1 = *param_2;
    *(undefined1 *)((long)param_1 + lVar3) = 3;
    return param_1;
  }
  *param_1 = *param_2;
  puVar5 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar4 = *(byte *)((long)puVar5 + uVar10);
  uVar7 = (uint)bVar4;
  if (1 < bVar4) {
    uVar12 = (uint)uVar10;
    uVar2 = 4;
    if (uVar12 < 4) {
      uVar2 = uVar12;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_100850280;
      uVar7 = (uint)(byte)*puVar5;
    }
    else if (uVar2 == 2) {
      uVar7 = (uint)(ushort)*puVar5;
    }
    else if (uVar2 == 3) {
      uVar7 = (uint)(uint3)*puVar5;
    }
    else {
      uVar7 = *puVar5;
    }
    if (uVar12 < 4) {
      uVar7 = (uVar7 | bVar4 - 2 << (ulong)((uVar12 & 3) << 3)) + 2;
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
LAB_100850280:
  puVar11 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar7 != 1) {
    *puVar11 = *(undefined8 *)puVar5;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar6 + 0x10))(puVar11);
  }
  *(bool *)((long)puVar11 + uVar10) = uVar7 == 1;
  *(undefined1 *)((long)param_1 + lVar3) = 2;
  return param_1;
}



/* Address: 0x1008502c0 | FUN_1008502c0 */

void FUN_1008502c0(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8;
  uVar8 = uVar6 | 7;
  uVar7 = *(ulong *)(lVar4 + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar1 = uVar7 + (uVar6 + 0xf & (uVar8 ^ 0xffffffffffffffff));
  lVar2 = 8;
  if (8 < lVar1 + 1U) {
    lVar2 = lVar1 + 1;
  }
  bVar3 = *(byte *)((long)param_1 + lVar2);
  uVar10 = (uint)bVar3;
  if (3 < bVar3) {
    uVar5 = (uint)lVar2;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100850370;
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
    uVar10 = uVar9 | bVar3 - 4 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar10 = uVar9;
    }
    uVar10 = uVar10 + 4;
  }
LAB_100850370:
  if ((int)uVar10 < 2) goto LAB_100850378;
  if (uVar10 != 2) {
    return;
  }
  param_1 = (uint *)((ulong)((long)param_1 + uVar8 + 8) & ~uVar8);
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar5 = (uint)uVar7;
    uVar9 = 4;
    if (uVar5 < 4) {
      uVar9 = uVar5;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100850410;
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
    uVar10 = uVar9 | bVar3 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar10 = uVar9;
    }
    uVar10 = uVar10 + 2;
  }
LAB_100850410:
  if (uVar10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010085041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
LAB_100850378:
  _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  return;
}



/* Address: 0x100850420 | FUN_100850420 */

undefined8 * FUN_100850420(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint *puVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8;
  uVar7 = uVar9 | 7;
  uVar11 = *(ulong *)(lVar6 + 0x40);
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  lVar1 = uVar11 + (uVar9 + 0xf & (uVar7 ^ 0xffffffffffffffff));
  lVar2 = 8;
  if (8 < lVar1 + 1U) {
    lVar2 = lVar1 + 1;
  }
  bVar3 = *(byte *)((long)param_2 + lVar2);
  uVar10 = (uint)bVar3;
  if (3 < bVar3) {
    uVar13 = (uint)lVar2;
    uVar8 = 4;
    if (uVar13 < 4) {
      uVar8 = uVar13;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008504e4;
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
    uVar10 = uVar8 | bVar3 - 4 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 + 4;
  }
LAB_1008504e4:
  if ((int)uVar10 < 2) {
    if (uVar10 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + lVar2) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + lVar2) = 1;
    _swift_bridgeObjectRetain();
    return param_1;
  }
  if (uVar10 != 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar5 = 3;
    goto LAB_100850600;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar12 = (undefined8 *)((long)param_1 + uVar7 + 8 & ~uVar7);
  puVar4 = (uint *)((ulong)((long)param_2 + uVar7 + 8) & ~uVar7);
  bVar3 = *(byte *)((long)puVar4 + uVar11);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar13 = (uint)uVar11;
    uVar8 = 4;
    if (uVar13 < 4) {
      uVar8 = uVar13;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008505cc;
      uVar8 = (uint)(byte)*puVar4;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar4;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar4;
    }
    else {
      uVar8 = *puVar4;
    }
    uVar10 = uVar8 | bVar3 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1008505cc:
  if (uVar10 != 1) {
    *puVar12 = *(undefined8 *)puVar4;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar6 + 0x10))(puVar12);
  }
  *(bool *)((long)puVar12 + uVar11) = uVar10 == 1;
  uVar5 = 2;
LAB_100850600:
  *(undefined1 *)((long)param_1 + lVar2) = uVar5;
  return param_1;
}



/* Address: 0x100850618 | FUN_100850618 */

uint * FUN_100850618(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar11 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar11 + -8);
  uVar6 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8;
  uVar15 = uVar6 | 7;
  uVar10 = *(ulong *)(lVar14 + 0x40);
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  lVar1 = uVar10 + (uVar6 + 0xf & (uVar15 ^ 0xffffffffffffffff));
  lVar2 = 8;
  if (8 < lVar1 + 1U) {
    lVar2 = lVar1 + 1;
  }
  bVar5 = *(byte *)((long)param_1 + lVar2);
  uVar7 = (uint)bVar5;
  uVar9 = (uint)lVar2;
  if (3 < bVar5) {
    uVar13 = 4;
    if (uVar9 < 4) {
      uVar13 = uVar9;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100850708;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar13 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar13 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    if (uVar9 < 4) {
      uVar7 = (uVar7 | bVar5 - 4 << (ulong)((uVar9 & 3) << 3)) + 4;
    }
    else {
      uVar7 = uVar7 + 4;
    }
  }
LAB_100850708:
  uVar6 = ~uVar15;
  uVar13 = (uint)uVar10;
  if ((int)uVar7 < 2) {
    uVar3 = *(undefined8 *)param_1;
LAB_100850718:
    _swift_bridgeObjectRelease(uVar3);
  }
  else if (uVar7 == 2) {
    puVar4 = (uint *)((ulong)((long)param_1 + uVar15 + 8) & uVar6);
    bVar5 = *(byte *)((long)puVar4 + uVar10);
    uVar7 = (uint)bVar5;
    if (1 < bVar5) {
      uVar8 = 4;
      if (uVar13 < 4) {
        uVar8 = uVar13;
      }
      if ((int)uVar8 < 2) {
        if (uVar8 == 0) goto LAB_1008507a8;
        uVar8 = (uint)(byte)*puVar4;
      }
      else if (uVar8 == 2) {
        uVar8 = (uint)(ushort)*puVar4;
      }
      else if (uVar8 == 3) {
        uVar8 = (uint)(uint3)*puVar4;
      }
      else {
        uVar8 = *puVar4;
      }
      uVar7 = uVar8 | bVar5 - 2 << (ulong)((uVar13 & 3) << 3);
      if (3 < uVar13) {
        uVar7 = uVar8;
      }
      uVar7 = uVar7 + 2;
    }
LAB_1008507a8:
    if (uVar7 != 1) {
      uVar3 = *(undefined8 *)puVar4;
      goto LAB_100850718;
    }
    (**(code **)(lVar14 + 8))(puVar4,lVar11);
  }
  bVar5 = *(byte *)((long)param_2 + lVar2);
  uVar7 = (uint)bVar5;
  if (3 < bVar5) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto joined_r0x000100850834;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    if (uVar9 < 4) {
      uVar7 = (uVar7 | bVar5 - 4 << (ulong)((uVar9 & 3) << 3)) + 4;
    }
    else {
      uVar7 = uVar7 + 4;
    }
  }
joined_r0x000100850834:
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + lVar2) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + lVar2) = 1;
    _swift_bridgeObjectRetain();
    return param_1;
  }
  if (uVar7 != 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar5 = 3;
    goto LAB_100850970;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar12 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar6);
  puVar4 = (uint *)((ulong)((long)param_2 + uVar15 + 8) & uVar6);
  bVar5 = *(byte *)((long)puVar4 + uVar10);
  uVar7 = (uint)bVar5;
  if (1 < bVar5) {
    uVar9 = 4;
    if (uVar13 < 4) {
      uVar9 = uVar13;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100850938;
      uVar9 = (uint)(byte)*puVar4;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar4;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar4;
    }
    else {
      uVar9 = *puVar4;
    }
    uVar7 = uVar9 | bVar5 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar7 = uVar9;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100850938:
  if (uVar7 != 1) {
    *puVar12 = *(undefined8 *)puVar4;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar14 + 0x10))(puVar12,puVar4,lVar11);
  }
  *(bool *)((long)puVar12 + uVar10) = uVar7 == 1;
  bVar5 = 2;
LAB_100850970:
  *(byte *)((long)param_1 + lVar2) = bVar5;
  return param_1;
}



/* Address: 0x100850990 | FUN_100850990 */

void FUN_100850990(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8;
  uVar7 = uVar9 | 7;
  uVar11 = *(ulong *)(lVar6 + 0x40);
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  lVar1 = uVar11 + (uVar9 + 0xf & (uVar7 ^ 0xffffffffffffffff));
  lVar2 = 8;
  if (8 < lVar1 + 1U) {
    lVar2 = lVar1 + 1;
  }
  bVar3 = *(byte *)((long)param_2 + lVar2);
  uVar10 = (uint)bVar3;
  if (3 < bVar3) {
    uVar13 = (uint)lVar2;
    uVar8 = 4;
    if (uVar13 < 4) {
      uVar8 = uVar13;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100850a50;
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
    uVar10 = uVar8 | bVar3 - 4 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 + 4;
  }
LAB_100850a50:
  *param_1 = *(undefined8 *)param_2;
  if ((int)uVar10 < 2) {
    uVar4 = uVar10 != 0;
    goto LAB_100850b48;
  }
  if (uVar10 != 2) {
    uVar4 = 3;
    goto LAB_100850b48;
  }
  puVar12 = (undefined8 *)((long)param_1 + uVar7 + 8 & ~uVar7);
  puVar5 = (uint *)((ulong)((long)param_2 + uVar7 + 8) & ~uVar7);
  bVar3 = *(byte *)((long)puVar5 + uVar11);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar13 = (uint)uVar11;
    uVar8 = 4;
    if (uVar13 < 4) {
      uVar8 = uVar13;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100850b10;
      uVar8 = (uint)(byte)*puVar5;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar5;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar5;
    }
    else {
      uVar8 = *puVar5;
    }
    uVar10 = uVar8 | bVar3 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 + 2;
  }
LAB_100850b10:
  if (uVar10 != 1) {
    *puVar12 = *(undefined8 *)puVar5;
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar12);
  }
  *(bool *)((long)puVar12 + uVar11) = uVar10 == 1;
  uVar4 = 2;
LAB_100850b48:
  *(undefined1 *)((long)param_1 + lVar2) = uVar4;
  return;
}



/* Address: 0x100850b5c | FUN_100850b5c */

void FUN_100850b5c(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return;
  }
  lVar12 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar12 + -8);
  uVar5 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8;
  uVar15 = uVar5 | 7;
  uVar11 = *(ulong *)(lVar14 + 0x40);
  if (uVar11 < 9) {
    uVar11 = 8;
  }
  lVar1 = uVar11 + (uVar5 + 0xf & (uVar15 ^ 0xffffffffffffffff));
  lVar2 = 8;
  if (8 < lVar1 + 1U) {
    lVar2 = lVar1 + 1;
  }
  bVar4 = *(byte *)((long)param_1 + lVar2);
  uVar7 = (uint)bVar4;
  uVar10 = (uint)lVar2;
  if (3 < bVar4) {
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100850c30;
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
    uVar7 = uVar8 | bVar4 - 4 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 4;
  }
LAB_100850c30:
  uVar5 = ~uVar15;
  uVar8 = (uint)uVar11;
  if ((int)uVar7 < 2) {
    uVar6 = *(undefined8 *)param_1;
LAB_100850c48:
    _swift_bridgeObjectRelease(uVar6);
  }
  else if (uVar7 == 2) {
    puVar3 = (uint *)((ulong)((long)param_1 + uVar15 + 8) & uVar5);
    bVar4 = *(byte *)((long)puVar3 + uVar11);
    uVar7 = (uint)bVar4;
    if (1 < bVar4) {
      uVar9 = 4;
      if (uVar8 < 4) {
        uVar9 = uVar8;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_100850df0;
        uVar9 = (uint)(byte)*puVar3;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar3;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar3;
      }
      else {
        uVar9 = *puVar3;
      }
      uVar7 = uVar9 | bVar4 - 2 << (ulong)((uVar8 & 3) << 3);
      if (3 < uVar8) {
        uVar7 = uVar9;
      }
      uVar7 = uVar7 + 2;
    }
LAB_100850df0:
    if (uVar7 != 1) {
      uVar6 = *(undefined8 *)puVar3;
      goto LAB_100850c48;
    }
    (**(code **)(lVar14 + 8))(puVar3,lVar12);
  }
  bVar4 = *(byte *)((long)param_2 + lVar2);
  uVar7 = (uint)bVar4;
  if (3 < bVar4) {
    uVar9 = 4;
    if (uVar10 < 4) {
      uVar9 = uVar10;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100850d1c;
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
    uVar7 = uVar9 | bVar4 - 4 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar9;
    }
    uVar7 = uVar7 + 4;
  }
LAB_100850d1c:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    goto LAB_100850e74;
  }
  if (uVar7 != 2) {
    bVar4 = 3;
    goto LAB_100850e74;
  }
  puVar13 = (undefined8 *)((ulong)((long)param_1 + uVar15 + 8) & uVar5);
  puVar3 = (uint *)((ulong)((long)param_2 + uVar15 + 8) & uVar5);
  bVar4 = *(byte *)((long)puVar3 + uVar11);
  uVar7 = (uint)bVar4;
  if (1 < bVar4) {
    uVar10 = 4;
    if (uVar8 < 4) {
      uVar10 = uVar8;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_100850e38;
      uVar10 = (uint)(byte)*puVar3;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar3;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar3;
    }
    else {
      uVar10 = *puVar3;
    }
    uVar7 = uVar10 | bVar4 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar7 = uVar10;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100850e38:
  if (uVar7 != 1) {
    *puVar13 = *(undefined8 *)puVar3;
  }
  else {
    (**(code **)(lVar14 + 0x20))(puVar13,puVar3,lVar12);
  }
  *(bool *)((long)puVar13 + uVar11) = uVar7 == 1;
  bVar4 = 2;
LAB_100850e74:
  *(byte *)((long)param_1 + lVar2) = bVar4;
  return;
}



/* Address: 0x100850e90 | FUN_100850e90 */

int FUN_100850e90(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = *(uint *)(lVar6 + 0x50) & 0xf8;
  uVar7 = *(ulong *)(lVar6 + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar6 = uVar7 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8);
  lVar4 = 8;
  if (8 < lVar6 + 1U) {
    lVar4 = lVar6 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_100850f5c;
  uVar7 = lVar4 + 1;
  uVar5 = (uint)uVar7;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar1 & 0x1f))) - 0xfc >> (ulong)(uVar1 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100850f5c;
      goto LAB_100850ee8;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100850ee8:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar2) + 0xfd;
  }
LAB_100850f5c:
  iVar3 = 0;
  if (3 < *(byte *)((long)param_1 + lVar4)) {
    iVar3 = (*(byte *)((long)param_1 + lVar4) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x100850fb8 | FUN_100850fb8 */

void FUN_100850fb8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar7 = *(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar5 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8);
  lVar3 = 8;
  if (8 < lVar5 + 1U) {
    lVar3 = lVar5 + 1;
  }
  sVar1 = lVar3 + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0xfd) {
    bVar8 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar7 << 3 & 0x1f)) +
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
      *(char *)((long)param_1 + lVar3) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar7 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
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
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar9;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar9;
    }
  }
  return;
}



/* Address: 0x100851180 | FUN_100851180 */

uint FUN_100851180(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar3 = *(uint *)(lVar5 + 0x50) & 0xf8;
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar5 = uVar6 + ((ulong)(uVar3 + 0xf & (uVar3 ^ 0xffffffff)) & 0x1f8);
  lVar1 = 8;
  if (8 < lVar5 + 1U) {
    lVar1 = lVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar3 = (uint)bVar2;
  if (3 < bVar2) {
    uVar7 = (uint)lVar1;
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
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
    uVar3 = uVar4 | bVar2 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}



/* Address: 0x100851238 | FUN_100851238 */

void FUN_100851238(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  uVar5 = uVar5 + 1 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff));
  if (param_2 < 4) {
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    *(char *)((long)param_1 + uVar5) = (char)param_2;
  }
  else {
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    param_2 = param_2 - 4;
    uVar6 = (uint)uVar5;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + uVar5) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x04';
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar5);
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
      *(undefined1 *)((long)param_1 + uVar5) = 4;
      _bzero(param_1,uVar5);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100851330 | FUN_100851330 */

void FUN_100851330(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10085133c | FUN_10085133c */

uint FUN_10085133c(uint param_1)

{
  FUN_10084e980();
  return param_1 & 1;
}



/* Address: 0x100851354 | thunk_FUN_10076f0ac */

void thunk_FUN_10076f0ac(void)

{
  thunk_FUN_10076f0ac();
  return;
}



/* Address: 0x100851358 | FUN_100851358 */

void FUN_100851358(void)

{
  FUN_10084e8e4();
  return;
}



/* Address: 0x10085136c | thunk_FUN_10084a7dc */

void thunk_FUN_10084a7dc(void)

{
  thunk_FUN_10084a7dc();
  return;
}



/* Address: 0x100851370 | thunk_FUN_10076f04c */

void thunk_FUN_10076f04c(void)

{
  thunk_FUN_10076f04c();
  return;
}



/* Address: 0x100851374 | FUN_100851374 */

undefined1  [16] FUN_100851374(Mutex param_1)

{
  ulong uVar1;
  Mutex MVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_28;
  
  uVar1 = 0xff;
  FUN_10084a568(0xff,*(undefined8 *)(param_1.unknown + 0x50),*(undefined8 *)(param_1.unknown + 0x58)
                ,*(undefined8 *)(param_1.unknown + 0x60));
  MVar2 = Synchronization::Mutex::typeMetadataAccessor();
  if (uVar1 < 0x40) {
    local_28 = *(long *)(MVar2.unknown + -8) + 0x40;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1.unknown,0,1,&local_28,param_1.unknown + 0x68);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = MVar2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1.unknown;
  return auVar4;
}



/* Address: 0x1008513f4 | FUN_1008513f4 */

undefined8 FUN_1008513f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100851800(param_1);
  return unaff_x20;
}



/* Address: 0x100851430 | FUN_100851430 */

void FUN_100851430(void)

{
  long lVar1;
  undefined8 uVar2;
  Task TVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar4 = *unaff_x20;
  lVar5 = (long)unaff_x20 + *(long *)(lVar4 + 0x68);
  _os_unfair_lock_lock(lVar5);
  lVar1 = *(long *)(lVar4 + 0x50);
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  uVar7 = *(undefined8 *)(lVar4 + 0x60);
  FUN_10084a568(0xff,lVar1,uVar2,uVar7);
  Synchronization::Mutex::typeMetadataAccessor();
  TVar3.unknown = (undefined *)0x0;
  lVar4 = lVar1;
  FUN_10084a568(0,lVar1,uVar2,uVar7);
  FUN_10084b6b4();
  FUN_10084de44(0xff,lVar1,uVar2,uVar7);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar5);
  if (TVar3.unknown != (undefined *)0x0) {
    Swift::Task::cancel(TVar3);
    lVar5 = *(long *)(lVar4 + 0x10);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      do {
        _swift_continuation_throwingResume(*puVar6);
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
    FUN_100774094(TVar3.unknown,lVar4);
    return;
  }
  return;
}



/* Address: 0x100851544 | FUN_100851544 */

void FUN_100851544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Result RVar1;
  ulong uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long unaff_x22;
  long lVar5;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  lVar5 = *(long *)(*unaff_x20 + 0x58);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x48) = CONCAT71(extraout_var,RVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0x50) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100851678;
  FUN_10085224c(uVar2,&DAT_100c7d438);
  return;
}



/* Address: 0x100851678 | FUN_100851678 */

void FUN_100851678(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x68));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1008516f4,uVar1,uVar2);
  return;
}



/* Address: 0x1008516f4 | FUN_1008516f4 */

void FUN_1008516f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(unaff_x22 + 0x58),uVar2,uVar1);
  FUN_100628180(unaff_x22 + 0x10,uVar1,uVar6);
  (**(code **)(lVar3 + 8))(uVar2,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x28),uVar6,*(undefined8 *)(unaff_x22 + 0x30));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001008517b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001008517fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Address: 0x100851800 | FUN_100851800 */

void FUN_100851800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Mutex MVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined4 auStack_70 [2];
  undefined8 local_68;
  
  lVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  uVar6 = *(undefined8 *)(lVar4 + 0x60);
  lVar4 = 0;
  local_68 = param_1;
  FUN_10084a568(0,uVar1,uVar2,uVar6);
  lVar5 = *(long *)(lVar4 + -8);
  lVar7 = (long)auStack_70 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar3 = Synchronization::Mutex::typeMetadataAccessor();
  sVar8 = *(size_t *)(*(long *)(MVar3.unknown + -8) + 0x40);
  puVar9 = (undefined4 *)(lVar7 - (sVar8 + 0xf & 0xfffffffffffffff0));
  FUN_10084b604(lVar7,local_68,uVar1,uVar2,uVar6);
  *puVar9 = 0;
  (**(code **)(lVar5 + 0x20))((long)puVar9 + (long)*(int *)(MVar3.unknown + 0x1c),lVar7,lVar4);
  _memcpy((void *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)),puVar9,sVar8);
  return;
}



/* Address: 0x100851900 | FUN_100851900 */

void FUN_100851900(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_2;
  _swift_task_switch(FUN_100851920,0,0);
  return;
}



/* Address: 0x100851920 | FUN_100851920 */

void FUN_100851920(void)

{
  Result RVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  RVar1 = Swift::Result::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008519cc;
  FUN_10072f29c(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_1008543f4,
                *(undefined8 *)(unaff_x22 + 0x18),RVar1.value);
  return;
}



/* Address: 0x1008519cc | FUN_1008519cc */

void FUN_1008519cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100851a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100851a14 | FUN_100851a14 */

void FUN_100851a14(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  Result RVar5;
  Optional OVar6;
  int iVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined7 extraout_var_00;
  Mutex MVar10;
  long *plVar11;
  UnsafeContinuation UVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  String SVar21;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long local_90 [2];
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  long lVar9;
  
  lVar17 = *param_2;
  uVar20 = *(undefined8 *)(lVar17 + 0x50);
  local_70 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  uVar1 = *(undefined8 *)(lVar17 + 0x58);
  uVar2 = *(undefined8 *)(lVar17 + 0x60);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_78 = CONCAT71(extraout_var,RVar5.value);
  local_90[1] = *(long *)(local_78 + -8);
  uVar13 = *(long *)(local_90[1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90[0] = (long)local_90 - uVar13;
  puVar14 = (undefined8 *)(local_90[0] - uVar13);
  lVar8 = 0xff;
  local_80 = puVar14;
  FUN_10084e9bc(0xff,uVar20,uVar1,uVar2);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var_00,OVar6.value);
  lVar19 = *(long *)(lVar9 + -8);
  uVar13 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar18 = (long *)((long)puVar14 - uVar13);
  lVar15 = (long)plVar18 - uVar13;
  lVar17 = (long)param_2 + *(long *)(lVar17 + 0x68);
  _os_unfair_lock_lock(lVar17);
  FUN_10084a568(0xff,uVar20,uVar1,uVar2);
  MVar10 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_100851d18(lVar15,lVar17 + *(int *)(MVar10.unknown + 0x1c),local_70,param_2);
  _os_unfair_lock_unlock(lVar17);
  (**(code **)(lVar19 + 0x10))(plVar18,lVar15,lVar9);
  plVar11 = plVar18;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(plVar18,1,lVar8);
  if ((int)plVar11 != 1) {
    plVar11 = plVar18;
    _swift_getEnumCaseMultiPayload(plVar18,lVar8);
    lVar17 = local_78;
    puVar14 = local_80;
    iVar7 = (int)plVar11;
    if (iVar7 < 3) {
      if (iVar7 == 1) {
        lVar8 = *plVar18;
        lVar17 = *(long *)(lVar8 + 0x10);
        if (lVar17 != 0) {
          puVar14 = (undefined8 *)(lVar8 + 0x20);
          do {
            _swift_continuation_throwingResume(*puVar14);
            lVar17 = lVar17 + -1;
            puVar14 = puVar14 + 1;
          } while (lVar17 != 0);
        }
        _swift_bridgeObjectRelease(lVar8);
      }
      else {
        if (iVar7 != 2) {
          *(undefined4 *)(lVar15 + -8) = 0;
          *(undefined8 *)(lVar15 + -0x10) = 0x57;
          SVar21.bridgeObject = (void *)0x2;
          SVar21.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000016,
                     0x8000000100db1320,0xdb2050);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100851d18);
          (*pcVar4)();
        }
        lVar16 = *plVar18;
        UVar12 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar8 = 0;
        _swift_getTupleTypeMetadata2(0,UVar12.unknown,lVar17,"downstreamContinuation result ",0);
        puVar14 = local_80;
        lVar3 = local_90[1];
        (**(code **)(local_90[1] + 0x20))
                  (local_80,(long)plVar18 + (long)*(int *)(lVar8 + 0x30),lVar17);
        lVar8 = local_90[0];
        (**(code **)(lVar3 + 0x10))(local_90[0],puVar14,lVar17);
        FUN_10072e9c0(lVar8,lVar16,lVar17);
        (**(code **)(lVar3 + 8))(puVar14,lVar17);
      }
    }
    else {
      lVar8 = *plVar18;
      *local_80 = 0;
      _swift_storeEnumTagMultiPayload(puVar14,lVar17,0);
      FUN_10072e9c0(puVar14,lVar8,lVar17);
    }
  }
  (**(code **)(lVar19 + 8))(lVar15,lVar9);
  return;
}



/* Address: 0x100851d18 | FUN_100851d18 */

void FUN_100851d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  Result RVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined7 extraout_var;
  UnsafeContinuation UVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *local_70 [2];
  long lVar6;
  
  lVar10 = *param_4;
  uVar13 = *(undefined8 *)(lVar10 + 0x50);
  uVar1 = *(undefined8 *)(lVar10 + 0x58);
  uVar16 = *(undefined8 *)(lVar10 + 0x60);
  lVar10 = 0;
  local_70[0] = param_4;
  local_70[1] = (long *)param_1;
  FUN_10084e9bc(0,uVar13,uVar1,uVar16);
  lVar17 = *(long *)(lVar10 + -8);
  uVar11 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (undefined8 *)((long)local_70 - uVar11);
  lVar14 = (long)puVar15 - uVar11;
  uVar4 = 0;
  FUN_10084a568(0,uVar13,uVar1,uVar16);
  FUN_10084d7d0(lVar14,param_3,uVar4);
  (**(code **)(lVar17 + 0x10))(puVar15,lVar14,lVar10);
  puVar5 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar10);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      uVar13 = *puVar15;
      FUN_100851f44(param_2,uVar13,param_3);
      _swift_bridgeObjectRelease(uVar13);
      (**(code **)(lVar17 + 8))(lVar14,lVar10);
      pcVar12 = *(code **)(lVar17 + 0x38);
      uVar13 = 1;
      plVar9 = local_70[1];
      goto LAB_100851f14;
    }
    (**(code **)(lVar17 + 8))(puVar15,lVar10);
  }
  else if (iVar3 == 2) {
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Optional::typeMetadataAccessor();
    RVar2 = Swift::Result::typeMetadataAccessor();
    lVar6 = CONCAT71(extraout_var,RVar2.value);
    UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar8 = 0;
    _swift_getTupleTypeMetadata2(0,UVar7.unknown,lVar6,"downstreamContinuation result ",0);
    plVar9 = local_70[1];
    iVar3 = *(int *)(lVar8 + 0x30);
    (**(code **)(lVar17 + 0x20))(local_70[1],lVar14,lVar10);
    (**(code **)(lVar17 + 0x38))(plVar9,0,1,lVar10);
    (**(code **)(*(long *)(lVar6 + -8) + 8))((long)puVar15 + (long)iVar3,lVar6);
    return;
  }
  plVar9 = local_70[1];
  (**(code **)(lVar17 + 0x20))(local_70[1],lVar14,lVar10);
  pcVar12 = *(code **)(lVar17 + 0x38);
  uVar13 = 0;
LAB_100851f14:
  (*pcVar12)(plVar9,uVar13,1,lVar10);
  return;
}



/* Address: 0x100851f44 | FUN_100851f44 */

void FUN_100851f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  puVar1 = &DAT_100fe7fc0;
  FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
  lVar5 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,TVar2.unknown);
  puVar1 = &DAT_100f06b48;
  _swift_allocObject(&DAT_100f06b48,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(long **)(puVar1 + 0x28) = unaff_x20;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain();
  uVar3 = 0;
  FUN_100853d5c(0,0,&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),&DAT_100c7d468,
                puVar1);
  uVar4 = 0;
  FUN_10084a568(0,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),
                *(undefined8 *)(lVar6 + 0x60));
  FUN_10084b974(uVar3,param_3,uVar4);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100852058 | FUN_100852058 */

void FUN_100852058(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Result RVar3;
  undefined7 extraout_var;
  ulong uVar5;
  Task TVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar4;
  
  lVar8 = *param_1;
  puVar10 = *(undefined **)(lVar8 + 0x50);
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  lVar1 = *(long *)(lVar8 + 0x58);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar3.value);
  puVar9 = (undefined8 *)
           (&stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = (long)param_1 + *(long *)(lVar8 + 0x68);
  _os_unfair_lock_lock(lVar8);
  FUN_10084a568(0xff,puVar10,lVar1,uVar2);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar5 = 0;
  TVar6.unknown = puVar10;
  lVar7 = lVar1;
  FUN_10084a568();
  FUN_10084d37c();
  FUN_100851330(0xff,puVar10,lVar1,uVar2);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar8);
  if (((uVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)uVar5 < 0) {
      Swift::Task::cancel((undefined *)(uVar5 & 0x7fffffffffffffff));
      lVar8 = *(long *)(TVar6.unknown + 0x10);
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(TVar6.unknown + 0x20);
        do {
          _swift_continuation_throwingResume(*puVar9);
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      FUN_100774188(uVar5,TVar6.unknown,lVar7);
      return;
    }
    Swift::Task::cancel(TVar6);
    lVar8 = *(long *)(lVar7 + 0x10);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar7 + 0x20);
      do {
        _swift_continuation_throwingResume(*puVar11);
        lVar8 = lVar8 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
    *puVar9 = 0;
    _swift_storeEnumTagMultiPayload(puVar9,lVar4,0);
    FUN_10072e9c0(puVar9,uVar5,lVar4);
    FUN_100774188(uVar5,TVar6.unknown,lVar7);
  }
  return;
}



/* Address: 0x10085224c | FUN_10085224c */

void FUN_10085224c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::_withTaskCancellationHandler();
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1005f4884(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100852394 | FUN_100852394 */

void FUN_100852394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 **)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = *param_5;
  _swift_task_switch(FUN_1008523b8,0,0);
  return;
}



/* Address: 0x1008523b8 | FUN_1008523b8 */

void FUN_1008523b8(void)

{
  undefined *puVar1;
  Result RVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar1 = PTR___type_metadata_for____100eae0c8 + 8;
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10082d628;
  FUN_100853c04(*(undefined8 *)(unaff_x22 + 0x30),RVar2.value,puVar1,0,0,&DAT_100c7d490,
                unaff_x22 + 0x10,RVar2.value,puVar1);
  return;
}



/* Address: 0x100852474 | FUN_100852474 */

void FUN_100852474(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  undefined7 extraout_var_00;
  ulong uVar5;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  *(long **)(unaff_x22 + 0x128) = param_4;
  *(undefined8 *)(unaff_x22 + 0x118) = param_2;
  lVar6 = *param_4;
  uVar9 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar9;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(lVar6 + 0x58);
  *(long *)(unaff_x22 + 0x138) = lVar8;
  uVar7 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar7;
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x148) = CONCAT71(extraout_var,RVar1.value);
  uVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar3;
  uVar4 = 0xff;
  FUN_10084e9b0(0xff,uVar9,lVar8,uVar7);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x160) = CONCAT71(extraout_var_00,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x168) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar3;
  lVar6 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x198) = CONCAT71(extraout_var_01,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x1a0) = CONCAT71(extraout_var_02,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_02,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x1a8) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar3;
  _swift_task_switch(FUN_1008525f4,0,0);
  return;
}



/* Address: 0x1008525f4 | FUN_1008525f4 */

void FUN_1008525f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  EnumeratedSequence EVar6;
  Iterator IVar7;
  undefined *puVar8;
  ulong uVar9;
  TaskPriority TVar10;
  TaskGroup TVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c7d020,(undefined8 *)(unaff_x22 + 0xf8));
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar5);
  (extension_Swift)::Swift::Sequence::enumerated();
  EVar6 = Swift::EnumeratedSequence::typeMetadataAccessor();
  Swift::EnumeratedSequence::_makeIterator(EVar6);
  IVar7 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
  Swift::EnumeratedSequence::Iterator::_next(IVar7);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    lVar13 = unaff_x22 + 0x70;
    do {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
      FUN_100076508(unaff_x22 + 0x18,lVar13);
      puVar8 = &DAT_100fe7fc0;
      FUN_1000f7830(&DAT_100fe7fc0,&DAT_100c7d458);
      uVar9 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      TVar10 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(uVar9,1,1,TVar10.unknown);
      FUN_100076688(lVar13,unaff_x22 + 0x98);
      puVar8 = &DAT_100f06bc0;
      _swift_allocObject(&DAT_100f06bc0,0x58,7);
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      FUN_100076508(unaff_x22 + 0x98,puVar8 + 0x20);
      *(undefined8 *)(puVar8 + 0x48) = uVar16;
      *(undefined8 *)(puVar8 + 0x50) = uVar5;
      TVar11 = Swift::TaskGroup::typeMetadataAccessor();
      _swift_retain(uVar16);
      FUN_100853964(uVar9,&DAT_100c7d4b8,puVar8,TVar11.unknown);
      FUN_100854500(uVar9);
      FUN_100004594(lVar13);
      _swift_task_dealloc(uVar9);
      Swift::EnumeratedSequence::Iterator::_next(IVar7);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
    } while (*(long *)(unaff_x22 + 0x30) != 0);
  }
  puVar14 = *(undefined8 **)(unaff_x22 + 0x118);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xe0));
  bVar4 = Swift::TaskGroup::get_isEmpty((undefined *)*puVar14);
  if (bVar4) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar2 = *(undefined8 *)(unaff_x22 + 400);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x150);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001008528b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(**(long **)(unaff_x22 + 0x128) + 0x68);
  plVar12 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar12;
  TVar11 = Swift::TaskGroup::typeMetadataAccessor();
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_100852940;
  FUN_100853b00(*(undefined8 *)(unaff_x22 + 0x1b8),0,0,TVar11.unknown);
  return;
}


