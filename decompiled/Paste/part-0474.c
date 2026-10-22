/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10059d064 | FUN_10059d064 */

void FUN_10059d064(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10059d078 | FUN_10059d078 */

int FUN_10059d078(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    if ((0xfc < param_2) && (*(char *)((long)param_1 + 6) != '\0')) {
      return *param_1 + 0xfd;
    }
    bVar2 = *(byte *)((long)param_1 + 2);
    if ((1 < bVar2) && (uVar1 = (bVar2 & 0xfe) + 0x7ffffffe, (uVar1 & 0x7ffffffe) != 0)) {
      return (uVar1 & 0x7ffffffe | bVar2 & 1) - 1;
    }
  }
  return 0;
}



/* Address: 0x10059d0e0 | FUN_10059d0e0 */

void FUN_10059d0e0(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 2) = (char)param_2 + '\x03';
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = param_2 - 0xfd;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x10059d124 | FUN_10059d124 */

undefined1  [16] FUN_10059d124(void)

{
  return ZEXT816(0x100ee2e50);
}



/* Address: 0x10059d134 | FUN_10059d134 */

int FUN_10059d134(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff02 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff02 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_10059d1b0;
        goto LAB_10059d190;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10059d190:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff02;
    }
  }
LAB_10059d1b0:
  uVar1 = 0xfffffffe;
  if (1 < (byte)*param_1) {
    uVar1 = ((byte)*param_1 + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10059d1e0 | FUN_10059d1e0 */

void FUN_10059d1e0(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff02 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff02 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfd < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10059d25c;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_10059d25c:
      *param_1 = (char)param_2 + '\x02';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfe >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xfe);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10059d28c | FUN_10059d28c */

undefined1  [16] FUN_10059d28c(void)

{
  return ZEXT816(0x100ee2ee0);
}



/* Address: 0x10059d29c | thunk_FUN_100549e98 */

int thunk_FUN_100549e98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100549f14;
        goto LAB_100549ef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100549ef8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100549f14:
  uVar1 = 0xfffffffe;
  if (1 < *param_1) {
    uVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10059d2a0 | FUN_10059d2a0 */

undefined1  [16] FUN_10059d2a0(void)

{
  return ZEXT816(0x100ee2f60);
}



/* Address: 0x10059d2b0 | FUN_10059d2b0 */

undefined1  [16] FUN_10059d2b0(void)

{
  return ZEXT816(0x100ee2fe0);
}



/* Address: 0x10059d2c0 | FUN_10059d2c0 */

undefined1  [16] FUN_10059d2c0(void)

{
  return ZEXT816(0x100ee3008);
}



/* Address: 0x10059d2d0 | FUN_10059d2d0 */

undefined1  [16] FUN_10059d2d0(void)

{
  return ZEXT816(0x100ee3028);
}



/* Address: 0x10059d2e0 | FUN_10059d2e0 */

void FUN_10059d2e0(undefined8 *param_1)

{
  FUN_1004dc818(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  if (param_1[4] != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[5]);
    if ((ulong)param_1[7] >> 0x3c < 0xf) {
      FUN_10003bf2c(param_1[6]);
    }
    _swift_bridgeObjectRelease(param_1[9]);
    return;
  }
  return;
}



/* Address: 0x10059d348 | FUN_10059d348 */

undefined8 * FUN_10059d348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar5,uVar1,uVar2);
  *param_1 = uVar5;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    uVar5 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar5;
    param_1[9] = param_2[9];
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = lVar3;
    uVar5 = param_2[5];
    param_1[5] = uVar5;
    uVar4 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    if (uVar4 >> 0x3c < 0xf) {
      uVar5 = param_2[6];
      FUN_1001037b4(uVar5,uVar4);
      param_1[6] = uVar5;
      param_1[7] = uVar4;
    }
    else {
      uVar5 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar5;
    }
    uVar5 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar5;
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Address: 0x10059d420 | FUN_10059d420 */

undefined8 * FUN_10059d420(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar4,uVar6,uVar1);
  uVar7 = *param_1;
  uVar8 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1004dc818(uVar7,uVar8,uVar2);
  lVar3 = param_1[4];
  if (lVar3 == 0) {
    if (param_2[4] != 0) {
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      uVar4 = param_2[5];
      param_1[5] = uVar4;
      uVar5 = param_2[7];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      if (uVar5 >> 0x3c < 0xf) {
        uVar4 = param_2[6];
        FUN_1001037b4(uVar4,uVar5);
        param_1[6] = uVar4;
        param_1[7] = uVar5;
      }
      else {
        uVar4 = param_2[6];
        param_1[7] = param_2[7];
        param_1[6] = uVar4;
      }
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar7 = param_2[4];
    uVar4 = param_2[3];
    uVar8 = param_2[6];
    uVar6 = param_2[5];
    uVar10 = param_2[8];
    uVar9 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar10;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[5] = uVar6;
    param_1[4] = uVar7;
    param_1[3] = uVar4;
    return param_1;
  }
  if (param_2[4] == 0) {
    FUN_10059d618(param_1 + 3);
    uVar6 = param_2[6];
    uVar7 = param_2[5];
    uVar9 = param_2[8];
    uVar8 = param_2[7];
    uVar4 = param_2[9];
    uVar10 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar10;
    param_1[9] = uVar4;
    param_1[8] = uVar9;
    param_1[7] = uVar8;
    param_1[6] = uVar6;
    param_1[5] = uVar7;
    return param_1;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(lVar3);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[7];
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      uVar6 = param_2[6];
      FUN_1001037b4(uVar6,uVar5);
      uVar4 = param_1[6];
      uVar7 = param_1[7];
      param_1[6] = uVar6;
      param_1[7] = uVar5;
      FUN_10003bf2c(uVar4,uVar7);
      goto LAB_10059d5e0;
    }
    FUN_10031275c(param_1 + 6);
  }
  else if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[6];
    FUN_1001037b4(uVar4,uVar5);
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    goto LAB_10059d5e0;
  }
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
LAB_10059d5e0:
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x10059d618 | FUN_10059d618 */

undefined8 FUN_10059d618(undefined8 param_1)

{
  FUN_1004ffd4c();
  return param_1;
}



/* Address: 0x10059d64c | FUN_10059d64c */

undefined8 * FUN_10059d64c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1004dc818(uVar3,uVar4,uVar2);
  if (param_1[4] == 0) {
LAB_10059d6e8:
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[9] = param_2[9];
    return param_1;
  }
  lVar5 = param_2[4];
  if (lVar5 == 0) {
    FUN_10059d618(param_1 + 3);
    goto LAB_10059d6e8;
  }
  param_1[3] = param_2[3];
  param_1[4] = lVar5;
  _swift_bridgeObjectRelease();
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar3);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar6 = param_2[7];
    if (uVar6 >> 0x3c < 0xf) {
      uVar3 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      FUN_10003bf2c(uVar3);
      goto LAB_10059d71c;
    }
    FUN_10031275c(param_1 + 6);
  }
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
LAB_10059d71c:
  uVar3 = param_2[9];
  uVar4 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x10059d73c | FUN_10059d73c */

int FUN_10059d73c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10059d798 | FUN_10059d798 */

void FUN_10059d798(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  return;
}



/* Address: 0x10059d800 | FUN_10059d800 */

undefined1  [16] FUN_10059d800(void)

{
  return ZEXT816(0x100ee30a0);
}



/* Address: 0x10059d810 | FUN_10059d810 */

undefined1  [16] FUN_10059d810(void)

{
  return ZEXT816(0x100ee3138);
}



/* Address: 0x10059d820 | FUN_10059d820 */

undefined1  [16] FUN_10059d820(void)

{
  return ZEXT816(0x100ee3158);
}



/* Address: 0x10059d830 | FUN_10059d830 */

undefined1  [16] FUN_10059d830(void)

{
  return ZEXT816(0x100ee3178);
}



/* Address: 0x10059d840 | FUN_10059d840 */

undefined1  [16] FUN_10059d840(void)

{
  return ZEXT816(0x100ee3208);
}



/* Address: 0x10059d850 | FUN_10059d850 */

undefined1  [16] FUN_10059d850(void)

{
  return ZEXT816(0x100ee3298);
}



/* Address: 0x10059d860 | FUN_10059d860 */

undefined1  [16] FUN_10059d860(void)

{
  return ZEXT816(0x100ee3328);
}



/* Address: 0x10059d870 | FUN_10059d870 */

undefined1  [16] FUN_10059d870(void)

{
  return ZEXT816(0x100ee33b8);
}



/* Address: 0x10059d880 | FUN_10059d880 */

undefined1  [16] FUN_10059d880(void)

{
  return ZEXT816(0x100ee3448);
}



/* Address: 0x10059d890 | thunk_FUN_10059d894 */

void thunk_FUN_10059d894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f810;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f810,&DAT_100ee3448);
  DAT_100fd23c8 = pTVar1;
  return;
}



/* Address: 0x10059d894 | FUN_10059d894 */

void FUN_10059d894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f810;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f810,&DAT_100ee3448);
  DAT_100fd23c8 = pTVar1;
  return;
}



/* Address: 0x10059d8d4 | thunk_FUN_10059d8d8 */

void thunk_FUN_10059d8d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f8c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f8c8,&DAT_100ee33b8);
  DAT_100fd23d0 = pTVar1;
  return;
}



/* Address: 0x10059d8d8 | FUN_10059d8d8 */

void FUN_10059d8d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f8c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f8c8,&DAT_100ee33b8);
  DAT_100fd23d0 = pTVar1;
  return;
}



/* Address: 0x10059d918 | thunk_FUN_10059d91c */

void thunk_FUN_10059d91c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f980;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f980,&DAT_100ee3328);
  DAT_100fd23d8 = pTVar1;
  return;
}



/* Address: 0x10059d91c | FUN_10059d91c */

void FUN_10059d91c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f980;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f980,&DAT_100ee3328);
  DAT_100fd23d8 = pTVar1;
  return;
}



/* Address: 0x10059d95c | thunk_FUN_10059d960 */

void thunk_FUN_10059d960(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa38,&DAT_100ee3298);
  DAT_100fd23e0 = pTVar1;
  return;
}



/* Address: 0x10059d960 | FUN_10059d960 */

void FUN_10059d960(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa38,&DAT_100ee3298);
  DAT_100fd23e0 = pTVar1;
  return;
}



/* Address: 0x10059d9a0 | thunk_FUN_10059d9a4 */

void thunk_FUN_10059d9a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5faf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5faf0,&DAT_100ee3208);
  DAT_100fd23e8 = pTVar1;
  return;
}



/* Address: 0x10059d9a4 | FUN_10059d9a4 */

void FUN_10059d9a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5faf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5faf0,&DAT_100ee3208);
  DAT_100fd23e8 = pTVar1;
  return;
}



/* Address: 0x10059d9e4 | thunk_FUN_10059d9e8 */

void thunk_FUN_10059d9e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fc48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fc48,&DAT_100ee3138);
  DAT_100fd23f0 = pTVar1;
  return;
}



/* Address: 0x10059d9e8 | FUN_10059d9e8 */

void FUN_10059d9e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fc48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fc48,&DAT_100ee3138);
  DAT_100fd23f0 = pTVar1;
  return;
}



/* Address: 0x10059da28 | thunk_FUN_10059da2c */

void thunk_FUN_10059da2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fbe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fbe0,&DAT_100ee3138);
  DAT_100fd23f8 = pTVar1;
  return;
}



/* Address: 0x10059da2c | FUN_10059da2c */

void FUN_10059da2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd23f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fbe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fbe0,&DAT_100ee3138);
  DAT_100fd23f8 = pTVar1;
  return;
}



/* Address: 0x10059da6c | thunk_FUN_10059da70 */

void thunk_FUN_10059da70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fbb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fbb8,&DAT_100ee3138);
  DAT_100fd2400 = pTVar1;
  return;
}



/* Address: 0x10059da70 | FUN_10059da70 */

void FUN_10059da70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fbb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fbb8,&DAT_100ee3138);
  DAT_100fd2400 = pTVar1;
  return;
}



/* Address: 0x10059dab0 | thunk_FUN_10059dab4 */

void thunk_FUN_10059dab4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb90,&DAT_100ee3158);
  DAT_100fd2408 = pTVar1;
  return;
}



/* Address: 0x10059dab4 | FUN_10059dab4 */

void FUN_10059dab4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb90,&DAT_100ee3158);
  DAT_100fd2408 = pTVar1;
  return;
}



/* Address: 0x10059daf4 | thunk_FUN_10059daf8 */

void thunk_FUN_10059daf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb68,&DAT_100ee3158);
  DAT_100fd2410 = pTVar1;
  return;
}



/* Address: 0x10059daf8 | FUN_10059daf8 */

void FUN_10059daf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb68,&DAT_100ee3158);
  DAT_100fd2410 = pTVar1;
  return;
}



/* Address: 0x10059db38 | thunk_FUN_10059db3c */

void thunk_FUN_10059db3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb40,&DAT_100ee3178);
  DAT_100fd2418 = pTVar1;
  return;
}



/* Address: 0x10059db3c | FUN_10059db3c */

void FUN_10059db3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb40,&DAT_100ee3178);
  DAT_100fd2418 = pTVar1;
  return;
}



/* Address: 0x10059db7c | thunk_FUN_10059db80 */

void thunk_FUN_10059db80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb18,&DAT_100ee3178);
  DAT_100fd2420 = pTVar1;
  return;
}



/* Address: 0x10059db80 | FUN_10059db80 */

void FUN_10059db80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fb18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fb18,&DAT_100ee3178);
  DAT_100fd2420 = pTVar1;
  return;
}



/* Address: 0x10059dbc0 | thunk_FUN_10059dbc4 */

void thunk_FUN_10059dbc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa88,&DAT_100ee3208);
  DAT_100fd2428 = pTVar1;
  return;
}



/* Address: 0x10059dbc4 | FUN_10059dbc4 */

void FUN_10059dbc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa88,&DAT_100ee3208);
  DAT_100fd2428 = pTVar1;
  return;
}



/* Address: 0x10059dc04 | thunk_FUN_10059dc08 */

void thunk_FUN_10059dc08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa60,&DAT_100ee3208);
  DAT_100fd2430 = pTVar1;
  return;
}



/* Address: 0x10059dc08 | FUN_10059dc08 */

void FUN_10059dc08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fa60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fa60,&DAT_100ee3208);
  DAT_100fd2430 = pTVar1;
  return;
}



/* Address: 0x10059dc48 | thunk_FUN_10059dc4c */

void thunk_FUN_10059dc4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f9d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f9d0,&DAT_100ee3298);
  DAT_100fd2438 = pTVar1;
  return;
}



/* Address: 0x10059dc4c | FUN_10059dc4c */

void FUN_10059dc4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f9d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f9d0,&DAT_100ee3298);
  DAT_100fd2438 = pTVar1;
  return;
}



/* Address: 0x10059dc8c | thunk_FUN_10059dc90 */

void thunk_FUN_10059dc90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f9a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f9a8,&DAT_100ee3298);
  DAT_100fd2440 = pTVar1;
  return;
}



/* Address: 0x10059dc90 | FUN_10059dc90 */

void FUN_10059dc90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f9a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f9a8,&DAT_100ee3298);
  DAT_100fd2440 = pTVar1;
  return;
}



/* Address: 0x10059dcd0 | thunk_FUN_10059dcd4 */

void thunk_FUN_10059dcd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f918;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f918,&DAT_100ee3328);
  DAT_100fd2448 = pTVar1;
  return;
}



/* Address: 0x10059dcd4 | FUN_10059dcd4 */

void FUN_10059dcd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f918;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f918,&DAT_100ee3328);
  DAT_100fd2448 = pTVar1;
  return;
}



/* Address: 0x10059dd14 | thunk_FUN_10059dd18 */

void thunk_FUN_10059dd18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f8f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f8f0,&DAT_100ee3328);
  DAT_100fd2450 = pTVar1;
  return;
}



/* Address: 0x10059dd18 | FUN_10059dd18 */

void FUN_10059dd18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f8f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f8f0,&DAT_100ee3328);
  DAT_100fd2450 = pTVar1;
  return;
}


