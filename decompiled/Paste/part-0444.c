/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005655d4 | FUN_1005655d4 */

void FUN_1005655d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005655f0 | FUN_1005655f0 */

void FUN_1005655f0(void)

{
  FUN_100565868();
  return;
}



/* Address: 0x1005655fc | FUN_1005655fc */

int FUN_1005655fc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1e < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x1f;
  }
  uVar1 = (*(byte *)(param_1 + 0xc) >> 2 & 0x1e | (uint)(*(byte *)(param_1 + 0xc) >> 7)) ^ 0x1f;
  if (0x1d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100565650 | FUN_100565650 */

void FUN_100565650(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x1f) {
    if (0x1e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(byte *)(param_1 + 6) = (((byte)(-param_2 >> 1) & 0xf) + (char)param_2 * -0x10) * '\b';
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 - 0x1f);
    if (0x1e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x1005656bc | FUN_1005656bc */

byte FUN_1005656bc(long param_1)

{
  return *(byte *)(param_1 + 0x30) >> 7;
}



/* Address: 0x1005656c8 | FUN_1005656c8 */

void FUN_1005656c8(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x7f;
  return;
}



/* Address: 0x1005656d8 | FUN_1005656d8 */

void FUN_1005656d8(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 7 | param_2 << 7;
  return;
}



/* Address: 0x1005656ec | FUN_1005656ec */

undefined1  [16] FUN_1005656ec(void)

{
  return ZEXT816(0x100edf3e0);
}



/* Address: 0x1005656fc | FUN_1005656fc */

void FUN_1005656fc(undefined8 param_1,undefined8 param_2)

{
  FUN_100565708(param_1,param_2,FUN_1004dbbd4);
  return;
}



/* Address: 0x100565708 | FUN_100565708 */

void FUN_100565708(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  (*param_3)(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
             *(undefined1 *)(param_1 + 6));
  return;
}



/* Address: 0x100565724 | FUN_100565724 */

void FUN_100565724(void)

{
  FUN_100565730();
  return;
}



/* Address: 0x100565730 | FUN_100565730 */

undefined8 * FUN_100565730(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  (*param_4)(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Address: 0x1005657ac | FUN_1005657ac */

void FUN_1005657ac(void)

{
  FUN_1005657c0();
  return;
}



/* Address: 0x1005657c0 | FUN_1005657c0 */

undefined8 *
FUN_1005657c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar13 = *(undefined1 *)(param_2 + 6);
  (*param_4)(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar13);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  uVar14 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar13;
  (*param_5)(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar14);
  return param_1;
}



/* Address: 0x10056585c | FUN_10056585c */

void FUN_10056585c(void)

{
  FUN_100565868();
  return;
}



/* Address: 0x100565868 | FUN_100565868 */

undefined8 * FUN_100565868(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  (*param_4)(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Address: 0x1005658c0 | FUN_1005658c0 */

int FUN_1005658c0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100565908 | FUN_100565908 */

void FUN_100565908(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 6) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x10056595c | FUN_10056595c */

undefined1 FUN_10056595c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Address: 0x100565964 | FUN_100565964 */

void FUN_100565964(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



/* Address: 0x10056596c | FUN_10056596c */

undefined1  [16] FUN_10056596c(void)

{
  return ZEXT816(0x100edf470);
}



/* Address: 0x10056597c | FUN_10056597c */

undefined8 * FUN_10056597c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005659d0 | FUN_1005659d0 */

undefined8 * FUN_1005659d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar1;
  return param_1;
}



/* Address: 0x100565a44 | FUN_100565a44 */

undefined8 * FUN_100565a44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Address: 0x100565aa8 | FUN_100565aa8 */

int FUN_100565aa8(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
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



/* Address: 0x100565b04 | FUN_100565b04 */

void FUN_100565b04(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x100565b68 | FUN_100565b68 */

undefined1  [16] FUN_100565b68(void)

{
  return ZEXT816(0x100edf4e8);
}



/* Address: 0x100565b78 | FUN_100565b78 */

undefined1  [16] FUN_100565b78(void)

{
  return ZEXT816(0x100edf570);
}



/* Address: 0x100565b88 | FUN_100565b88 */

undefined1  [16] FUN_100565b88(void)

{
  return ZEXT816(0x100edf608);
}



/* Address: 0x100565b98 | FUN_100565b98 */

undefined1  [16] FUN_100565b98(void)

{
  return ZEXT816(0x100edf680);
}



/* Address: 0x100565ba8 | FUN_100565ba8 */

undefined1  [16] FUN_100565ba8(void)

{
  return ZEXT816(0x100edf700);
}



/* Address: 0x100565bb8 | FUN_100565bb8 */

void FUN_100565bb8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100565bf0 | FUN_100565bf0 */

undefined8 * FUN_100565bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  param_1[5] = uVar3;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x100565c60 | FUN_100565c60 */

undefined8 * FUN_100565c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100565cfc | FUN_100565cfc */

undefined8 * FUN_100565cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100565d68 | FUN_100565d68 */

undefined1  [16] FUN_100565d68(void)

{
  return ZEXT816(0x100edf788);
}



/* Address: 0x100565d78 | FUN_100565d78 */

void FUN_100565d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,byte param_16)

{
  if (param_16 < 2) {
    param_15 = param_2;
    if (param_16 == 0) goto LAB_100565ea0;
    if (param_16 != 1) {
      return;
    }
  }
  else if (param_16 != 2) {
    if (param_16 != 3) {
      if (param_16 != 4) {
        return;
      }
      _swift_bridgeObjectRetain(param_10);
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(param_8);
      FUN_1004dbc6c(param_11,param_12,param_13,param_14,param_15);
      return;
    }
    _swift_bridgeObjectRetain(param_9);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1004dbc6c(param_10,param_11,param_12,param_13,param_14);
    goto LAB_100565ea0;
  }
  _swift_bridgeObjectRetain(param_2);
  param_15 = param_4;
LAB_100565ea0:
  _swift_bridgeObjectRetain(param_15);
  return;
}



/* Address: 0x100565ed8 | FUN_100565ed8 */

void FUN_100565ed8(undefined8 *param_1)

{
  FUN_100565f28(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],*(undefined1 *)(param_1 + 0xf));
  return;
}



/* Address: 0x100565f28 | FUN_100565f28 */

void FUN_100565f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,byte param_16)

{
  if (param_16 < 2) {
    param_15 = param_2;
    if (param_16 == 0) goto LAB_10056604c;
    if (param_16 != 1) {
      return;
    }
  }
  else if (param_16 != 2) {
    if (param_16 != 3) {
      if (param_16 != 4) {
        return;
      }
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_6);
      _swift_bridgeObjectRelease(param_8);
      _swift_bridgeObjectRelease(param_10);
      FUN_100558f34(param_11,param_12,param_13,param_14,param_15);
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_8);
    _swift_bridgeObjectRelease(param_9);
    FUN_100558f34(param_10,param_11,param_12,param_13,param_14);
    goto LAB_10056604c;
  }
  _swift_bridgeObjectRelease(param_2);
  param_15 = param_4;
LAB_10056604c:
  _swift_bridgeObjectRelease(param_15);
  return;
}



/* Address: 0x100566084 | FUN_100566084 */

undefined8 * FUN_100566084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar16 = param_2[0xe];
  uVar15 = *(undefined1 *)(param_2 + 0xf);
  FUN_100565d78(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,uVar16,uVar15);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar16;
  *(undefined1 *)(param_1 + 0xf) = uVar15;
  return param_1;
}



/* Address: 0x100566174 | FUN_100566174 */

undefined8 * FUN_100566174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar1 = *param_2;
  uVar12 = param_2[1];
  uVar2 = param_2[2];
  uVar13 = param_2[3];
  uVar3 = param_2[4];
  uVar14 = param_2[5];
  uVar4 = param_2[6];
  uVar15 = param_2[7];
  uVar5 = param_2[8];
  uVar16 = param_2[9];
  uVar6 = param_2[10];
  uVar17 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar18 = param_2[0xd];
  uVar26 = param_2[0xe];
  uVar23 = *(undefined1 *)(param_2 + 0xf);
  FUN_100565d78(uVar1,uVar12,uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar5,uVar16,uVar6,uVar17,uVar7,
                uVar18,uVar26,uVar23);
  uVar8 = *param_1;
  uVar19 = param_1[1];
  uVar9 = param_1[2];
  uVar20 = param_1[3];
  uVar10 = param_1[4];
  uVar21 = param_1[5];
  uVar11 = param_1[6];
  uVar22 = param_1[7];
  uVar28 = param_1[9];
  uVar27 = param_1[8];
  uVar30 = param_1[0xb];
  uVar29 = param_1[10];
  uVar32 = param_1[0xd];
  uVar31 = param_1[0xc];
  uVar25 = param_1[0xe];
  uVar24 = *(undefined1 *)(param_1 + 0xf);
  *param_1 = uVar1;
  param_1[1] = uVar12;
  param_1[2] = uVar2;
  param_1[3] = uVar13;
  param_1[4] = uVar3;
  param_1[5] = uVar14;
  param_1[6] = uVar4;
  param_1[7] = uVar15;
  param_1[8] = uVar5;
  param_1[9] = uVar16;
  param_1[10] = uVar6;
  param_1[0xb] = uVar17;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar26;
  *(undefined1 *)(param_1 + 0xf) = uVar23;
  FUN_100565f28(uVar8,uVar19,uVar9,uVar20,uVar10,uVar21,uVar11,uVar22,uVar27,uVar28,uVar29,uVar30,
                uVar31,uVar32,uVar25,uVar24);
  return param_1;
}



/* Address: 0x100566298 | FUN_100566298 */

void FUN_100566298(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar7 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar7;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Address: 0x1005662c4 | FUN_1005662c4 */

undefined8 * FUN_1005662c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar11 = param_2[0xe];
  uVar7 = *(undefined1 *)(param_2 + 0xf);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar12 = param_1[0xe];
  uVar8 = *(undefined1 *)(param_1 + 0xf);
  uVar19 = *param_2;
  uVar21 = param_2[3];
  uVar20 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar19;
  param_1[3] = uVar21;
  param_1[2] = uVar20;
  uVar19 = param_2[4];
  uVar21 = param_2[7];
  uVar20 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar19;
  param_1[7] = uVar21;
  param_1[6] = uVar20;
  uVar19 = param_2[8];
  uVar21 = param_2[0xb];
  uVar20 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar19;
  param_1[0xb] = uVar21;
  param_1[10] = uVar20;
  uVar19 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar19;
  param_1[0xe] = uVar11;
  *(undefined1 *)(param_1 + 0xf) = uVar7;
  FUN_100565f28(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar15,uVar16,uVar17,
                uVar18,uVar12,uVar8);
  return param_1;
}



/* Address: 0x100566358 | FUN_100566358 */

int FUN_100566358(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 0x1e) ^ 0xff;
  if (*(byte *)(param_1 + 0x1e) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005663a0 | FUN_1005663a0 */

void FUN_1005663a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x79) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0xf) = -(char)param_2;
      return;
    }
  }
  else {
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
    *(undefined1 *)(param_1 + 0xf) = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x79) = 1;
    }
  }
  return;
}



/* Address: 0x100566404 | FUN_100566404 */

void FUN_100566404(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  return;
}



/* Address: 0x10056640c | FUN_10056640c */

undefined1  [16] FUN_10056640c(void)

{
  return ZEXT816(0x100edf830);
}



/* Address: 0x10056641c | FUN_10056641c */

undefined1  [16] FUN_10056641c(void)

{
  return ZEXT816(0x100edf850);
}



/* Address: 0x10056642c | FUN_10056642c */

int FUN_10056642c(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar3 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar3 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar3 = 1;
    }
    if (iVar3 == 4) {
      uVar2 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar3 == 2) {
        uVar2 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1005664a8;
        goto LAB_10056648c;
      }
      uVar2 = (uint)param_1[1];
    }
    if (uVar2 != 0) {
LAB_10056648c:
      return ((uint)*param_1 | uVar2 << 8) - 3;
    }
  }
LAB_1005664a8:
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (bVar1 < 4) {
    uVar2 = 3;
  }
  iVar3 = uVar2 - 4;
  if (bVar1 < 3) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Address: 0x1005664cc | FUN_1005664cc */

undefined1  [16] FUN_1005664cc(void)

{
  return ZEXT816(0x100edf8c8);
}



/* Address: 0x1005664dc | FUN_1005664dc */

undefined1  [16] FUN_1005664dc(void)

{
  return ZEXT816(0x100edf960);
}



/* Address: 0x1005664ec | FUN_1005664ec */

void FUN_1005664ec(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  if (param_1[1] != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(param_1[9]);
  _swift_bridgeObjectRelease(param_1[0xe]);
  _swift_bridgeObjectRelease(param_1[0xf]);
  _swift_bridgeObjectRelease(param_1[0x10]);
  _swift_bridgeObjectRelease(param_1[0x12]);
  return;
}



/* Address: 0x100566544 | FUN_100566544 */

undefined8 * FUN_100566544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  _swift_bridgeObjectRetain();
  if (lVar3 == 1) {
    lVar3 = param_2[1];
    uVar5 = param_2[4];
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[1] = lVar3;
    param_1[4] = uVar5;
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  }
  else {
    uVar1 = param_2[2];
    param_1[1] = lVar3;
    param_1[2] = uVar1;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    _swift_bridgeObjectRetain(lVar3);
  }
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  uVar4 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  uVar1 = param_2[0xf];
  uVar5 = param_2[0x10];
  param_1[0x10] = uVar5;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar2 = param_2[0x12];
  param_1[0x12] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100566668 | FUN_100566668 */

undefined8 * FUN_100566668(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 1;
  lVar4 = *plVar3;
  plVar5 = param_2 + 1;
  lVar1 = *plVar5;
  if (lVar4 == 1) {
    if (lVar1 == 1) {
      uVar2 = param_2[2];
      lVar1 = *plVar5;
      uVar7 = param_2[4];
      uVar6 = param_2[3];
      uVar9 = param_2[6];
      uVar8 = param_2[5];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[4] = uVar7;
      param_1[3] = uVar6;
      param_1[6] = uVar9;
      param_1[5] = uVar8;
      param_1[2] = uVar2;
      *plVar3 = lVar1;
    }
    else {
      param_1[1] = lVar1;
      uVar2 = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[2] = uVar2;
      uVar2 = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[4] = uVar2;
      uVar2 = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = uVar2;
      _swift_bridgeObjectRetain();
    }
  }
  else if (lVar1 == 1) {
    FUN_100108dec(plVar3);
    uVar8 = param_2[4];
    uVar7 = param_2[3];
    uVar6 = param_2[6];
    uVar2 = param_2[5];
    uVar9 = param_2[2];
    lVar1 = *plVar5;
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[4] = uVar8;
    param_1[3] = uVar7;
    param_1[6] = uVar6;
    param_1[5] = uVar2;
    param_1[2] = uVar9;
    *plVar3 = lVar1;
  }
  else {
    param_1[1] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar2 = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[2] = uVar2;
    uVar2 = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[4] = uVar2;
    uVar2 = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[6] = uVar2;
  }
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100566840 | FUN_100566840 */

void FUN_100566840(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Address: 0x100566874 | FUN_100566874 */

undefined8 * FUN_100566874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  plVar4 = param_1 + 1;
  if (*plVar4 != 1) {
    lVar3 = param_2[1];
    if (lVar3 != 1) {
      param_1[1] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      goto LAB_100566918;
    }
    FUN_100108dec(plVar4);
  }
  lVar3 = param_2[1];
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *plVar4 = lVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
LAB_100566918:
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10056699c | FUN_10056699c */

int FUN_10056699c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x13] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1005669e4 | FUN_1005669e4 */

void FUN_1005669e4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
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
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x13) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100566a48 | FUN_100566a48 */

undefined1  [16] FUN_100566a48(void)

{
  return ZEXT816(0x100edf9d8);
}



/* Address: 0x100566a58 | FUN_100566a58 */

void FUN_100566a58(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  FUN_1004dbbc8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined1 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Address: 0x100566a9c | FUN_100566a9c */

undefined8 * FUN_100566a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  uVar5 = param_2[6];
  uVar1 = param_2[7];
  uVar6 = param_2[8];
  uVar2 = param_2[9];
  uVar7 = param_2[10];
  uVar8 = *(undefined1 *)(param_2 + 0xb);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  FUN_1004dbb20(uVar3,uVar5,uVar1,uVar6,uVar2,uVar7,uVar8);
  param_1[5] = uVar3;
  param_1[6] = uVar5;
  param_1[7] = uVar1;
  param_1[8] = uVar6;
  param_1[9] = uVar2;
  param_1[10] = uVar7;
  *(undefined1 *)(param_1 + 0xb) = uVar8;
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100566b50 | FUN_100566b50 */

undefined8 * FUN_100566b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar14 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  param_1[2] = param_2[2];
  uVar14 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar14 = param_2[5];
  uVar6 = param_2[6];
  uVar1 = param_2[7];
  uVar7 = param_2[8];
  uVar2 = param_2[9];
  uVar8 = param_2[10];
  uVar12 = *(undefined1 *)(param_2 + 0xb);
  FUN_1004dbb20(uVar14,uVar6,uVar1,uVar7,uVar2,uVar8,uVar12);
  uVar3 = param_1[5];
  uVar9 = param_1[6];
  uVar4 = param_1[7];
  uVar10 = param_1[8];
  uVar5 = param_1[9];
  uVar11 = param_1[10];
  param_1[5] = uVar14;
  param_1[6] = uVar6;
  param_1[7] = uVar1;
  param_1[8] = uVar7;
  param_1[9] = uVar2;
  param_1[10] = uVar8;
  uVar13 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar12;
  FUN_1004dbbc8(uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar13);
  uVar14 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  return param_1;
}



/* Address: 0x100566c48 | FUN_100566c48 */

void FUN_100566c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100566c74 | FUN_100566c74 */

undefined8 * FUN_100566c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = param_2[1];
  uVar7 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  uVar8 = param_2[3];
  uVar7 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar5 = *(undefined1 *)(param_2 + 0xb);
  uVar8 = param_1[5];
  uVar2 = param_1[6];
  uVar7 = param_1[7];
  uVar3 = param_1[8];
  uVar1 = param_1[9];
  uVar4 = param_1[10];
  uVar9 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar9;
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  uVar9 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar5;
  FUN_1004dbbc8(uVar8,uVar2,uVar7,uVar3,uVar1,uVar4,uVar6);
  uVar8 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}


