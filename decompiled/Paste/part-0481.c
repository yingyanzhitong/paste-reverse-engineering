/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005a9e2c | FUN_1005a9e2c */

undefined8 * FUN_1005a9e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005a9e80 | FUN_1005a9e80 */

undefined1  [16] FUN_1005a9e80(void)

{
  return ZEXT816(0x100ee3ce0);
}



/* Address: 0x1005a9e90 | FUN_1005a9e90 */

void FUN_1005a9e90(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  if ((((param_1[4] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 5) != -1)) {
    FUN_1004dbde0(param_1[1],param_1[2],param_1[3]);
  }
  _swift_bridgeObjectRelease(param_1[6]);
  return;
}



/* Address: 0x1005a9ee0 | FUN_1005a9ee0 */

undefined8 * FUN_1005a9ee0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_2[4];
  cVar1 = *(char *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  if ((((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar1 == -1)) {
    uVar4 = param_2[1];
    uVar3 = param_2[4];
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    param_1[4] = uVar3;
    param_1[3] = uVar5;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  else {
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar3 = param_2[3];
    FUN_10045b2bc(uVar4,uVar5,uVar3,uVar2,cVar1);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar3;
    param_1[4] = uVar2;
    *(char *)(param_1 + 5) = cVar1;
  }
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005a9fa0 | FUN_1005a9fa0 */

undefined8 * FUN_1005a9fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar7 = param_2[4];
  cVar3 = *(char *)(param_2 + 5);
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  if ((((param_1[4] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(char *)(param_1 + 5) == -1)) {
    if (bVar5 || cVar3 != -1) {
      uVar6 = param_2[1];
      uVar10 = param_2[2];
      uVar9 = param_2[3];
      FUN_10045b2bc(uVar6,uVar10,uVar9,uVar7,cVar3);
      param_1[1] = uVar6;
      param_1[2] = uVar10;
      param_1[3] = uVar9;
      param_1[4] = uVar7;
      *(char *)(param_1 + 5) = cVar3;
    }
    else {
      uVar10 = param_2[2];
      uVar6 = param_2[1];
      uVar11 = param_2[4];
      uVar9 = param_2[3];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[4] = uVar11;
      param_1[3] = uVar9;
      param_1[2] = uVar10;
      param_1[1] = uVar6;
    }
  }
  else if (bVar5 || cVar3 != -1) {
    uVar6 = param_2[1];
    uVar11 = param_2[2];
    uVar8 = param_2[3];
    FUN_10045b2bc(uVar6,uVar11,uVar8,uVar7,cVar3);
    uVar10 = param_1[1];
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    uVar2 = param_1[4];
    param_1[1] = uVar6;
    param_1[2] = uVar11;
    param_1[3] = uVar8;
    param_1[4] = uVar7;
    uVar4 = *(undefined1 *)(param_1 + 5);
    *(char *)(param_1 + 5) = cVar3;
    FUN_1004dbde0(uVar10,uVar1,uVar9,uVar2,uVar4);
  }
  else {
    FUN_1004e15f8(param_1 + 1);
    uVar4 = *(undefined1 *)(param_2 + 5);
    uVar10 = param_2[4];
    uVar6 = param_2[3];
    uVar9 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar9;
    param_1[4] = uVar10;
    param_1[3] = uVar6;
    *(undefined1 *)(param_1 + 5) = uVar4;
  }
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x1005aa0fc | FUN_1005aa0fc */

undefined8 * FUN_1005aa0fc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  if ((((param_1[4] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 5) != -1)) {
    uVar4 = param_2[4];
    cVar1 = *(char *)(param_2 + 5);
    if ((((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (cVar1 != -1)) {
      uVar5 = param_2[3];
      uVar2 = param_1[1];
      uVar7 = param_1[2];
      uVar3 = param_1[3];
      uVar6 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      param_1[3] = uVar5;
      param_1[4] = uVar4;
      *(char *)(param_1 + 5) = cVar1;
      FUN_1004dbde0(uVar2,uVar7,uVar3);
      goto LAB_1005aa19c;
    }
    FUN_1004e15f8(param_1 + 1);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[4];
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[4] = uVar3;
  param_1[3] = uVar7;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
LAB_1005aa19c:
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1005aa1c8 | FUN_1005aa1c8 */

undefined1  [16] FUN_1005aa1c8(void)

{
  return ZEXT816(0x100ee3d68);
}



/* Address: 0x1005aa1d8 | FUN_1005aa1d8 */

undefined1  [16] FUN_1005aa1d8(void)

{
  return ZEXT816(0x100ee3d98);
}



/* Address: 0x1005aa1e8 | FUN_1005aa1e8 */

undefined1  [16] FUN_1005aa1e8(void)

{
  return ZEXT816(0x100ee3db8);
}



/* Address: 0x1005aa1f8 | FUN_1005aa1f8 */

undefined1  [16] FUN_1005aa1f8(void)

{
  return ZEXT816(0x100ee3e48);
}



/* Address: 0x1005aa208 | FUN_1005aa208 */

undefined1  [16] FUN_1005aa208(void)

{
  return ZEXT816(0x100ee3ed8);
}



/* Address: 0x1005aa218 | FUN_1005aa218 */

undefined1  [16] FUN_1005aa218(void)

{
  return ZEXT816(0x100ee3f68);
}



/* Address: 0x1005aa228 | FUN_1005aa228 */

undefined1  [16] FUN_1005aa228(void)

{
  return ZEXT816(0x100ee3ff8);
}



/* Address: 0x1005aa238 | FUN_1005aa238 */

undefined1  [16] FUN_1005aa238(void)

{
  return ZEXT816(0x100ee4088);
}



/* Address: 0x1005aa248 | FUN_1005aa248 */

int FUN_1005aa248(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1005aa2c4;
        goto LAB_1005aa2a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1005aa2a8:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_1005aa2c4:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1005aa2d8 | FUN_1005aa2d8 */

void FUN_1005aa2d8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0xd) {
    uVar3 = 4;
  }
  if (param_3 + 0xd >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf2 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf3) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1005aa358;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1005aa358:
      *param_1 = (char)param_2 + '\r';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf3 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf3);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1005aa388 | FUN_1005aa388 */

undefined1  [16] FUN_1005aa388(void)

{
  return ZEXT816(0x100ee4118);
}



/* Address: 0x1005aa398 | FUN_1005aa398 */

undefined1  [16] FUN_1005aa398(void)

{
  return ZEXT816(0x100ee41a8);
}



/* Address: 0x1005aa3a8 | thunk_FUN_1005aa3ac */

void thunk_FUN_1005aa3ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ab8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ab8,&DAT_100ee41a8);
  DAT_100fd28e8 = pTVar1;
  return;
}



/* Address: 0x1005aa3ac | FUN_1005aa3ac */

void FUN_1005aa3ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ab8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ab8,&DAT_100ee41a8);
  DAT_100fd28e8 = pTVar1;
  return;
}



/* Address: 0x1005aa3ec | thunk_FUN_1005aa3f0 */

void thunk_FUN_1005aa3f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ba8,&DAT_100ee4118);
  DAT_100fd28f0 = pTVar1;
  return;
}



/* Address: 0x1005aa3f0 | FUN_1005aa3f0 */

void FUN_1005aa3f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ba8,&DAT_100ee4118);
  DAT_100fd28f0 = pTVar1;
  return;
}



/* Address: 0x1005aa430 | thunk_FUN_1005aa434 */

void thunk_FUN_1005aa434(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60c98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60c98,&DAT_100ee4088);
  DAT_100fd28f8 = pTVar1;
  return;
}



/* Address: 0x1005aa434 | FUN_1005aa434 */

void FUN_1005aa434(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd28f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60c98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60c98,&DAT_100ee4088);
  DAT_100fd28f8 = pTVar1;
  return;
}



/* Address: 0x1005aa474 | thunk_FUN_1005aa478 */

void thunk_FUN_1005aa478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60d50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60d50,&DAT_100ee3ff8);
  DAT_100fd2900 = pTVar1;
  return;
}



/* Address: 0x1005aa478 | FUN_1005aa478 */

void FUN_1005aa478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60d50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60d50,&DAT_100ee3ff8);
  DAT_100fd2900 = pTVar1;
  return;
}



/* Address: 0x1005aa4b8 | FUN_1005aa4b8 */

void FUN_1005aa4b8(void)

{
  FUN_100134584(&DAT_100fd2908,&DAT_100fd2910,&DAT_100c60dc8,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x1005aa4ec | thunk_FUN_1005aa4f0 */

void thunk_FUN_1005aa4f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2918 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60e80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60e80,&DAT_100ee3f68);
  DAT_100fd2918 = pTVar1;
  return;
}



/* Address: 0x1005aa4f0 | FUN_1005aa4f0 */

void FUN_1005aa4f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2918 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60e80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60e80,&DAT_100ee3f68);
  DAT_100fd2918 = pTVar1;
  return;
}



/* Address: 0x1005aa530 | thunk_FUN_1005aa534 */

void thunk_FUN_1005aa534(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2920 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60f70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60f70,&DAT_100ee3ed8);
  DAT_100fd2920 = pTVar1;
  return;
}



/* Address: 0x1005aa534 | FUN_1005aa534 */

void FUN_1005aa534(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2920 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60f70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60f70,&DAT_100ee3ed8);
  DAT_100fd2920 = pTVar1;
  return;
}



/* Address: 0x1005aa574 | FUN_1005aa574 */

void FUN_1005aa574(void)

{
  FUN_100134584(&DAT_100fd2928,&DAT_100fd2930,&DAT_100c60fe8,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x1005aa5a8 | thunk_FUN_1005aa5ac */

void thunk_FUN_1005aa5ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2938 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610a0,&DAT_100ee3e48);
  DAT_100fd2938 = pTVar1;
  return;
}



/* Address: 0x1005aa5ac | FUN_1005aa5ac */

void FUN_1005aa5ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2938 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610a0,&DAT_100ee3e48);
  DAT_100fd2938 = pTVar1;
  return;
}



/* Address: 0x1005aa5ec | thunk_FUN_1005aa5f0 */

void thunk_FUN_1005aa5f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610f0,&DAT_100ee3db8);
  DAT_100fd2940 = pTVar1;
  return;
}



/* Address: 0x1005aa5f0 | FUN_1005aa5f0 */

void FUN_1005aa5f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610f0,&DAT_100ee3db8);
  DAT_100fd2940 = pTVar1;
  return;
}



/* Address: 0x1005aa630 | thunk_FUN_1005aa634 */

void thunk_FUN_1005aa634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610c8,&DAT_100ee3db8);
  DAT_100fd2948 = pTVar1;
  return;
}



/* Address: 0x1005aa634 | FUN_1005aa634 */

void FUN_1005aa634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c610c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c610c8,&DAT_100ee3db8);
  DAT_100fd2948 = pTVar1;
  return;
}



/* Address: 0x1005aa674 | thunk_FUN_1005aa678 */

void thunk_FUN_1005aa678(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60fc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60fc0,&DAT_100ee3e48);
  DAT_100fd2950 = pTVar1;
  return;
}



/* Address: 0x1005aa678 | FUN_1005aa678 */

void FUN_1005aa678(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60fc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60fc0,&DAT_100ee3e48);
  DAT_100fd2950 = pTVar1;
  return;
}



/* Address: 0x1005aa6b8 | thunk_FUN_1005aa6bc */

void thunk_FUN_1005aa6bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2958 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60f98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60f98,&DAT_100ee3e48);
  DAT_100fd2958 = pTVar1;
  return;
}



/* Address: 0x1005aa6bc | FUN_1005aa6bc */

void FUN_1005aa6bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2958 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60f98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60f98,&DAT_100ee3e48);
  DAT_100fd2958 = pTVar1;
  return;
}



/* Address: 0x1005aa6fc | thunk_FUN_1005aa700 */

void thunk_FUN_1005aa700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ed0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ed0,&DAT_100ee3ed8);
  DAT_100fd2960 = pTVar1;
  return;
}



/* Address: 0x1005aa700 | FUN_1005aa700 */

void FUN_1005aa700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ed0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ed0,&DAT_100ee3ed8);
  DAT_100fd2960 = pTVar1;
  return;
}



/* Address: 0x1005aa740 | thunk_FUN_1005aa744 */

void thunk_FUN_1005aa744(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ea8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ea8,&DAT_100ee3ed8);
  DAT_100fd2968 = pTVar1;
  return;
}



/* Address: 0x1005aa744 | FUN_1005aa744 */

void FUN_1005aa744(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ea8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ea8,&DAT_100ee3ed8);
  DAT_100fd2968 = pTVar1;
  return;
}



/* Address: 0x1005aa784 | thunk_FUN_1005aa788 */

void thunk_FUN_1005aa788(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2970 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60da0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60da0,&DAT_100ee3f68);
  DAT_100fd2970 = pTVar1;
  return;
}



/* Address: 0x1005aa788 | FUN_1005aa788 */

void FUN_1005aa788(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2970 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60da0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60da0,&DAT_100ee3f68);
  DAT_100fd2970 = pTVar1;
  return;
}



/* Address: 0x1005aa7c8 | thunk_FUN_1005aa7cc */

void thunk_FUN_1005aa7cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2978 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60d78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60d78,&DAT_100ee3f68);
  DAT_100fd2978 = pTVar1;
  return;
}



/* Address: 0x1005aa7cc | FUN_1005aa7cc */

void FUN_1005aa7cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2978 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60d78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60d78,&DAT_100ee3f68);
  DAT_100fd2978 = pTVar1;
  return;
}



/* Address: 0x1005aa80c | thunk_FUN_1005aa810 */

void thunk_FUN_1005aa810(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ce8,&DAT_100ee3ff8);
  DAT_100fd2980 = pTVar1;
  return;
}



/* Address: 0x1005aa810 | FUN_1005aa810 */

void FUN_1005aa810(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ce8,&DAT_100ee3ff8);
  DAT_100fd2980 = pTVar1;
  return;
}



/* Address: 0x1005aa850 | thunk_FUN_1005aa854 */

void thunk_FUN_1005aa854(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60cc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60cc0,&DAT_100ee3ff8);
  DAT_100fd2988 = pTVar1;
  return;
}



/* Address: 0x1005aa854 | FUN_1005aa854 */

void FUN_1005aa854(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60cc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60cc0,&DAT_100ee3ff8);
  DAT_100fd2988 = pTVar1;
  return;
}



/* Address: 0x1005aa894 | thunk_FUN_1005aa898 */

void thunk_FUN_1005aa898(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60bf8,&DAT_100ee4088);
  DAT_100fd2990 = pTVar1;
  return;
}



/* Address: 0x1005aa898 | FUN_1005aa898 */

void FUN_1005aa898(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60bf8,&DAT_100ee4088);
  DAT_100fd2990 = pTVar1;
  return;
}



/* Address: 0x1005aa8d8 | thunk_FUN_1005aa8dc */

void thunk_FUN_1005aa8dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60bd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60bd0,&DAT_100ee4088);
  DAT_100fd2998 = pTVar1;
  return;
}



/* Address: 0x1005aa8dc | FUN_1005aa8dc */

void FUN_1005aa8dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60bd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60bd0,&DAT_100ee4088);
  DAT_100fd2998 = pTVar1;
  return;
}



/* Address: 0x1005aa91c | thunk_FUN_1005aa920 */

void thunk_FUN_1005aa920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60b08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60b08,&DAT_100ee4118);
  DAT_100fd29a0 = pTVar1;
  return;
}



/* Address: 0x1005aa920 | FUN_1005aa920 */

void FUN_1005aa920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60b08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60b08,&DAT_100ee4118);
  DAT_100fd29a0 = pTVar1;
  return;
}



/* Address: 0x1005aa960 | thunk_FUN_1005aa964 */

void thunk_FUN_1005aa964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ae0,&DAT_100ee4118);
  DAT_100fd29a8 = pTVar1;
  return;
}



/* Address: 0x1005aa964 | FUN_1005aa964 */

void FUN_1005aa964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60ae0,&DAT_100ee4118);
  DAT_100fd29a8 = pTVar1;
  return;
}



/* Address: 0x1005aa9a4 | thunk_FUN_1005aa9a8 */

void thunk_FUN_1005aa9a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60a50,&DAT_100ee41a8);
  DAT_100fd29b0 = pTVar1;
  return;
}



/* Address: 0x1005aa9a8 | FUN_1005aa9a8 */

void FUN_1005aa9a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60a50,&DAT_100ee41a8);
  DAT_100fd29b0 = pTVar1;
  return;
}


