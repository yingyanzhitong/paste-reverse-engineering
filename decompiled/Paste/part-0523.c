/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005fabec | FUN_1005fabec */

uint * FUN_1005fabec(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  if (param_1 != param_2) {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar10 = *(long *)(lVar7 + -8);
    lVar8 = *(long *)(lVar10 + 0x40);
    uVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 8;
    if (uVar1 < 0x12) {
      uVar1 = 0x11;
    }
    bVar3 = *(byte *)((long)param_1 + uVar1);
    uVar4 = (uint)bVar3;
    uVar9 = (uint)uVar1;
    if (1 < bVar3) {
      uVar5 = 4;
      if (uVar9 < 4) {
        uVar5 = uVar9;
      }
      if (uVar5 != 0) {
        if (uVar5 == 4) {
          uVar5 = *param_1;
        }
        else {
          uVar5 = (uint)(byte)*param_1;
        }
        uVar4 = uVar5 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
        if (3 < uVar9) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
    }
    if (uVar4 == 1) {
      (**(code **)(lVar10 + 8))(param_1,lVar7);
      _swift_errorRelease(*(undefined8 *)((ulong)((long)param_1 + lVar8 + 7) & 0xfffffffffffffff8));
    }
    else {
      FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
    }
    bVar3 = *(byte *)((long)param_2 + uVar1);
    uVar4 = (uint)bVar3;
    if (1 < bVar3) {
      uVar5 = 4;
      if (uVar9 < 4) {
        uVar5 = uVar9;
      }
      if (uVar5 != 0) {
        if (uVar5 == 4) {
          uVar5 = *param_2;
        }
        else {
          uVar5 = (uint)(byte)*param_2;
        }
        uVar4 = uVar5 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
        if (3 < uVar9) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
    }
    if (uVar4 != 1) {
      uVar6 = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar9 = param_2[4];
      FUN_1005e4618(uVar6,uVar2,(byte)uVar9);
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(byte *)(param_1 + 4) = (byte)uVar9;
    }
    else {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar7);
      uVar6 = *(undefined8 *)((ulong)((long)param_2 + lVar8 + 7) & 0xfffffffffffffff8);
      _swift_errorRetain(uVar6);
      *(undefined8 *)((ulong)((long)param_1 + lVar8 + 7) & 0xfffffffffffffff8) = uVar6;
    }
    *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  }
  return param_1;
}



/* Address: 0x1005fad94 | FUN_1005fad94 */

void FUN_1005fad94(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar7 = *(long *)(lVar3 + 0x40);
  uVar1 = (lVar7 + 7U & 0xfffffffffffffff8) + 8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = (uint)uVar1;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      if (uVar5 == 4) {
        uVar5 = *param_2;
      }
      else {
        uVar5 = (uint)(byte)*param_2;
      }
      uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
      if (3 < uVar6) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 + 2;
    }
  }
  if (uVar4 != 1) {
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    *(byte *)(param_1 + 2) = (byte)param_2[4];
  }
  else {
    (**(code **)(lVar3 + 0x20))();
    *(undefined8 *)((long)param_1 + lVar7 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + lVar7 + 7) & 0xfffffffffffffff8);
  }
  *(bool *)((long)param_1 + uVar1) = uVar4 == 1;
  return;
}



/* Address: 0x1005fae80 | FUN_1005fae80 */

uint * FUN_1005fae80(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    lVar5 = *(long *)(param_3 + 0x18);
    lVar8 = *(long *)(lVar5 + -8);
    lVar7 = *(long *)(lVar8 + 0x40);
    uVar1 = (lVar7 + 7U & 0xfffffffffffffff8) + 8;
    if (uVar1 < 0x12) {
      uVar1 = 0x11;
    }
    bVar2 = *(byte *)((long)param_1 + uVar1);
    uVar3 = (uint)bVar2;
    uVar6 = (uint)uVar1;
    if (1 < bVar2) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if (uVar4 != 0) {
        if (uVar4 == 4) {
          uVar4 = *param_1;
        }
        else {
          uVar4 = (uint)(byte)*param_1;
        }
        uVar3 = uVar4 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
        if (3 < uVar6) {
          uVar3 = uVar4;
        }
        uVar3 = uVar3 + 2;
      }
    }
    if (uVar3 == 1) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
      _swift_errorRelease(*(undefined8 *)((ulong)((long)param_1 + lVar7 + 7) & 0xfffffffffffffff8));
    }
    else {
      FUN_10000cae0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
    }
    bVar2 = *(byte *)((long)param_2 + uVar1);
    uVar3 = (uint)bVar2;
    if (1 < bVar2) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if (uVar4 != 0) {
        if (uVar4 == 4) {
          uVar4 = *param_2;
        }
        else {
          uVar4 = (uint)(byte)*param_2;
        }
        uVar3 = uVar4 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
        if (3 < uVar6) {
          uVar3 = uVar4;
        }
        uVar3 = uVar3 + 2;
      }
    }
    if (uVar3 != 1) {
      uVar9 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar9;
      *(byte *)(param_1 + 4) = (byte)param_2[4];
    }
    else {
      (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
      *(undefined8 *)((ulong)((long)param_1 + lVar7 + 7) & 0xfffffffffffffff8) =
           *(undefined8 *)((ulong)((long)param_2 + lVar7 + 7) & 0xfffffffffffffff8);
    }
    *(bool *)((long)param_1 + uVar1) = uVar3 == 1;
  }
  return param_1;
}



/* Address: 0x1005fb010 | FUN_1005fb010 */

int FUN_1005fb010(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_1005fb0c4;
  uVar6 = uVar1 + 1;
  uVar5 = (uint)uVar6;
  uVar4 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfe >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1005fb0c4;
      goto LAB_1005fb050;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1005fb050:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar7 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar2) + 0xff;
  }
LAB_1005fb0c4:
  iVar3 = 0;
  if (1 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1005fb120 | FUN_1005fb120 */

void FUN_1005fb120(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  sVar2 = uVar1 + 1;
  uVar5 = (uint)sVar2;
  if (param_3 < 0xff) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar3) {
      bVar6 = 4;
    }
    if (uVar3 < 0x100) {
      bVar6 = 1 < uVar3;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xff) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar6 == 2) {
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
    param_2 = param_2 - 0xff;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
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
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar7;
    }
  }
  return;
}



/* Address: 0x1005fb2d0 | FUN_1005fb2d0 */

uint FUN_1005fb2d0(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar3 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)uVar1;
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      if (uVar4 == 4) {
        uVar4 = *param_1;
      }
      else {
        uVar4 = (uint)(byte)*param_1;
      }
      uVar3 = uVar4 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
      if (3 < uVar5) {
        uVar3 = uVar4;
      }
      uVar3 = uVar3 + 2;
    }
  }
  return uVar3;
}



/* Address: 0x1005fb348 | FUN_1005fb348 */

void FUN_1005fb348(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (*(long *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40) + 7U & 0xfffffffffffffff8) +
          8;
  if (uVar1 < 0x12) {
    uVar1 = 0x11;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
    return;
  }
  param_2 = param_2 - 2;
  uVar2 = (uint)uVar1;
  if (uVar2 < 4) {
    *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)((uVar2 & 3) << 3)) + '\x02';
    if (uVar2 == 0) {
      return;
    }
    _bzero(param_1,uVar1);
    if (uVar2 == 1) {
      *(char *)param_1 = (char)param_2;
      return;
    }
    param_2 = param_2 & 0xff;
  }
  else {
    *(undefined1 *)((long)param_1 + uVar1) = 2;
    _bzero(param_1,uVar1);
  }
  *param_1 = param_2;
  return;
}



/* Address: 0x1005fb3fc | FUN_1005fb3fc */

void FUN_1005fb3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f0c40(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005fb450 | FUN_1005fb450 */

void FUN_1005fb450(undefined8 param_1)

{
  FUN_1005fb46c(param_1,FUN_1005eec50);
  return;
}



/* Address: 0x1005fb46c | FUN_1005fb46c */

void FUN_1005fb46c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  (*param_3)(param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1005fb4cc | FUN_1005fb4cc */

void FUN_1005fb4cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005f1ed8(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005fb4dc | FUN_1005fb4dc */

void FUN_1005fb4dc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005f2260(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005fb4fc | FUN_1005fb4fc */

void FUN_1005fb4fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005fb520 | FUN_1005fb520 */

void FUN_1005fb520(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_1005f0c40(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005fb578 | FUN_1005fb578 */

void FUN_1005fb578(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_1005eec50(param_1,uVar2,uVar1);
  return;
}



/* Address: 0x1005fb5d0 | FUN_1005fb5d0 */

void FUN_1005fb5d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005efc90(param_1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1005fb600 | FUN_1005fb600 */

void FUN_1005fb600(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005f003c(param_1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1005fb624 | FUN_1005fb624 */

void FUN_1005fb624(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005f4a48(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005fb644 | FUN_1005fb644 */

void FUN_1005fb644(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005f4cc8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005fb664 | FUN_1005fb664 */

void FUN_1005fb664(long *param_1,UnsafePointer<undefined> param_2,long param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_2.unknown == (undefined *)0x0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (*(long *)(unaff_x20 + 0x30) < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005fb6c8);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize
              (param_2,param_3,(UnsafeMutablePointer)*(undefined **)(unaff_x20 + 0x28));
  }
  *param_1 = param_3;
  return;
}



/* Address: 0x1005fb6c8 | thunk_FUN_1005fb4fc */

void thunk_FUN_1005fb4fc(void)

{
  FUN_1005fb4fc();
  return;
}



/* Address: 0x1005fb6cc | thunk_FUN_1005fb4fc */

void thunk_FUN_1005fb4fc(void)

{
  FUN_1005fb4fc();
  return;
}



/* Address: 0x1005fb6d0 | thunk_FUN_1005fb4fc */

void thunk_FUN_1005fb4fc(void)

{
  FUN_1005fb4fc();
  return;
}



/* Address: 0x1005fb6d4 | thunk_FUN_1002775b8 */

void thunk_FUN_1002775b8(void)

{
  FUN_1002775b8();
  return;
}



/* Address: 0x1005fb6d8 | thunk_FUN_1005ec984 */

void thunk_FUN_1005ec984(void)

{
  FUN_1005ec984();
  return;
}



/* Address: 0x1005fb6dc | thunk_FUN_1005ec994 */

void thunk_FUN_1005ec994(void)

{
  FUN_1005ec994();
  return;
}



/* Address: 0x1005fb6e0 | thunk_FUN_1001a7dac */

void thunk_FUN_1001a7dac(void)

{
  thunk_FUN_1001a7dac();
  return;
}



/* Address: 0x1005fb6e4 | FUN_1005fb6e4 */

uint FUN_1005fb6e4(uint param_1)

{
  FUN_1005f5444();
  return param_1 & 1;
}



/* Address: 0x1005fb6fc | thunk_FUN_1005ec9d4 */

void thunk_FUN_1005ec9d4(void)

{
  FUN_1005ec9d4();
  return;
}



/* Address: 0x1005fb700 | thunk_FUN_1002775cc */

void thunk_FUN_1002775cc(void)

{
  FUN_1002775cc();
  return;
}



/* Address: 0x1005fb704 | thunk_FUN_1005ec98c */

void thunk_FUN_1005ec98c(void)

{
  FUN_1005ec98c();
  return;
}



/* Address: 0x1005fb708 | thunk_FUN_1002c9be4 */

void thunk_FUN_1002c9be4(void)

{
  thunk_FUN_1002c9be4();
  return;
}



/* Address: 0x1005fb70c | thunk_FUN_1005f56ac */

void thunk_FUN_1005f56ac(void)

{
  thunk_FUN_1005f56ac();
  return;
}



/* Address: 0x1005fb710 | thunk_FUN_1005f86f4 */

void thunk_FUN_1005f86f4(void)

{
  thunk_FUN_1005f86f4();
  return;
}



/* Address: 0x1005fb714 | thunk_FUN_1005f8c6c */

void thunk_FUN_1005f8c6c(void)

{
  thunk_FUN_1005f8c6c();
  return;
}



/* Address: 0x1005fb718 | thunk_FUN_1005f3b8c */

void thunk_FUN_1005f3b8c(void)

{
  FUN_1005f3b8c();
  return;
}



/* Address: 0x1005fb71c | thunk_FUN_1005ed450 */

void thunk_FUN_1005ed450(void)

{
  FUN_1005ed450();
  return;
}



/* Address: 0x1005fb720 | FUN_1005fb720 */

void FUN_1005fb720(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_78 = param_6;
  local_70 = param_7;
  local_68 = param_8;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar1 = -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + lVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(long *)(param_4 + -8);
  (**(code **)(lVar4 + 0x10))(puVar6,param_1,param_4);
  (**(code **)(lVar4 + 0x38))(puVar6,0,1,param_4);
  _swift_retain(uVar5);
  *(undefined8 *)((long)auStack_90 + lVar1) = param_9;
  FUN_1005fc7c8(puVar6,uVar5,param_3,param_4,param_5,local_78,local_70,local_68);
  _swift_release(uVar5);
  (**(code **)(lVar3 + 8))(puVar6,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005fb828 | FUN_1005fb828 */

void FUN_1005fb828(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_7;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar1 = -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + lVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar5,1,1,param_3);
  _swift_retain(uVar4);
  *(undefined8 *)((long)auStack_80 + lVar1) = param_8;
  FUN_1005fc7c8(puVar5,uVar4,param_2,param_3,param_4,param_5,param_6,local_68);
  _swift_release(uVar4);
  (**(code **)(lVar3 + 8))(puVar5,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005fb920 | FUN_1005fb920 */

uint FUN_1005fb920(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _swift_retain(uVar1);
  FUN_1005fcd98(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11);
  _swift_release(uVar1);
  return (uint)param_1 & 0xff;
}



/* Address: 0x1005fb9d4 | FUN_1005fb9d4 */

undefined1  [16]
FUN_1005fb9d4(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  FUN_1006039e4(param_2,param_4,param_5,puVar2,param_6,param_7,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,param_8,
                param_9);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  local_78 = puVar1;
  local_68 = param_9;
  lVar3 = 0;
  local_98 = param_5;
  puStack_90 = puVar2;
  local_88 = param_6;
  uStack_80 = param_7;
  uStack_70 = param_8;
  FUN_100603a98(0,&local_98);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined1 *)(lVar3 + 0x18) = param_3;
  _swift_retain(uVar4);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1005fbac8 | FUN_1005fbac8 */

undefined8 FUN_1005fbac8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar2;
  _swift_retain(uVar2);
  FUN_100603750();
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x1005fbb50 | FUN_1005fbb50 */

void FUN_1005fbb50(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1005fc384(plVar1,param_1);
  return;
}



/* Address: 0x1005fbbb0 | FUN_1005fbbb0 */

undefined1  [16]
FUN_1005fbbb0(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar1 = PTR___type_metadata_for_Swift_Never_100eadc38;
  FUN_1006039e4(param_2,param_4,param_5,PTR___type_metadata_for_Swift_Never_100eadc38,param_6,
                param_7,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                param_8,param_9);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  puStack_90 = puVar1;
  local_78 = puVar2;
  local_68 = param_9;
  lVar3 = 0;
  local_98 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  uStack_70 = param_8;
  FUN_100603a98(0,&local_98);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined1 *)(lVar3 + 0x18) = param_3;
  _swift_retain(uVar4);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1005fbc88 | FUN_1005fbc88 */

void FUN_1005fbc88(void)

{
  FUN_1005fc13c(FUN_1005fbc94);
  return;
}



/* Address: 0x1005fbc94 | FUN_1005fbc94 */

void FUN_1005fbc94(void)

{
  FUN_1005fc1f4();
  return;
}



/* Address: 0x1005fbcbc | FUN_1005fbcbc */

void FUN_1005fbcbc(void)

{
  FUN_1005fbc88();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005fbcdc | FUN_1005fbcdc */

void FUN_1005fbcdc(void)

{
  FUN_1005fbf54();
  return;
}



/* Address: 0x1005fbd08 | FUN_1005fbd08 */

void FUN_1005fbd08(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = param_9;
  lVar1 = 0;
  local_58 = param_3;
  uStack_50 = param_4;
  local_48 = param_5;
  uStack_40 = param_6;
  local_38 = param_7;
  uStack_30 = param_8;
  FUN_100603a98(0,&local_58);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  return;
}



/* Address: 0x1005fbd64 | FUN_1005fbd64 */

undefined1  [16]
FUN_1005fbd64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_1006039e4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  local_78 = param_9;
  uStack_70 = param_10;
  local_68 = param_11;
  lVar1 = 0;
  local_98 = param_5;
  uStack_90 = param_6;
  local_88 = param_7;
  uStack_80 = param_8;
  FUN_100603a98(0,&local_98);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  _swift_retain(uVar2);
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Address: 0x1005fbe34 | FUN_1005fbe34 */

undefined1  [16]
FUN_1005fbe34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  FUN_1006039e4(param_2,param_3,param_4,puVar2,param_5,param_6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,param_7,
                param_8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  local_78 = puVar1;
  lVar3 = 0;
  local_98 = param_4;
  puStack_90 = puVar2;
  local_88 = param_5;
  uStack_80 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  FUN_100603a98(0,&local_98);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  _swift_retain(uVar4);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1005fbf28 | FUN_1005fbf28 */

void FUN_1005fbf28(void)

{
  FUN_1005fbf54();
  return;
}



/* Address: 0x1005fbf54 | FUN_1005fbf54 */

undefined8
FUN_1005fbf54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  undefined8 uVar1;
  code *in_stack_00000008;
  
  uVar1 = param_1;
  (*in_stack_00000008)();
  (**(code **)(*(long *)(param_6 + -8) + 8))(param_2,param_6);
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  return uVar1;
}



/* Address: 0x1005fbfd0 | FUN_1005fbfd0 */

undefined8 FUN_1005fbfd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100603750();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1005fc000 | FUN_1005fc000 */

void FUN_1005fc000(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_1005fbac8(uVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                *(undefined8 *)(param_2 + 0x40));
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005fc050 | FUN_1005fc050 */

undefined8 FUN_1005fc050(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100603718();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1005fc080 | FUN_1005fc080 */

undefined8 FUN_1005fc080(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006036a8();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1005fc0b0 | FUN_1005fc0b0 */

void FUN_1005fc0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = 0;
  local_c0 = param_2;
  uStack_b8 = param_3;
  local_b0 = param_4;
  uStack_a8 = param_5;
  local_a0 = param_6;
  uStack_98 = param_7;
  local_90 = param_8;
  local_70 = param_2;
  uStack_68 = param_3;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_6;
  uStack_48 = param_7;
  local_40 = param_8;
  FUN_100603a8c(0,&local_c0);
  FUN_10066ed6c(FUN_100603aa4,auStack_80,param_1,uVar1,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x1005fc130 | FUN_1005fc130 */

void FUN_1005fc130(void)

{
  FUN_1005fc13c(FUN_1005fc1cc);
  return;
}



/* Address: 0x1005fc13c | FUN_1005fc13c */

void FUN_1005fc13c(code *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  (*param_1)();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005fc1cc | FUN_1005fc1cc */

void FUN_1005fc1cc(void)

{
  FUN_1005fc1f4();
  return;
}



/* Address: 0x1005fc1f4 | FUN_1005fc1f4 */

void FUN_1005fc1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lVar2;
  
  local_100 = param_9;
  uStack_f8 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_100 - uVar5;
  lVar10 = lVar8 - uVar5;
  uVar3 = 0;
  local_f0 = param_2;
  uStack_e8 = param_3;
  local_e0 = param_4;
  lStack_d8 = param_5;
  local_d0 = param_6;
  uStack_c8 = param_7;
  local_c0 = param_8;
  local_a0 = param_2;
  uStack_98 = param_3;
  local_90 = param_4;
  lStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_8;
  FUN_100603a8c(0,&local_f0);
  FUN_10066ed6c(lVar10,local_100,auStack_b0,uStack_f8,uVar3,lVar2);
  (**(code **)(lVar6 + 0x10))(lVar8,lVar10,lVar2);
  lVar9 = *(long *)(param_5 + -8);
  lVar4 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,param_5);
  if ((int)lVar4 == 1) {
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(lVar10,lVar2);
    (*pcVar7)(lVar8,lVar2);
  }
  else {
    (**(code **)(param_8 + 0x10))(param_5,param_8);
    (**(code **)(lVar6 + 8))(lVar10,lVar2);
    (**(code **)(lVar9 + 8))(lVar8,param_5);
  }
  return;
}



/* Address: 0x1005fc364 | FUN_1005fc364 */

void FUN_1005fc364(void)

{
  FUN_1005fc130();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005fc384 | FUN_1005fc384 */

void FUN_1005fc384(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_1005fc3a4,0,0);
  return;
}


