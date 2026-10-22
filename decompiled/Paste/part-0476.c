/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10059ffc0 | FUN_10059ffc0 */

void FUN_10059ffc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10058ce24(plVar3,param_1,uVar1,uVar2,uVar4,unaff_x20 + 0x28);
  return;
}



/* Address: 0x1005a0038 | FUN_1005a0038 */

void FUN_1005a0038(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005a005c | FUN_1005a005c */

void FUN_1005a005c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1005a0090 | FUN_1005a0090 */

void FUN_1005a0090(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x360;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100599158(plVar3,param_1,param_2,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1005a010c | FUN_1005a010c */

void FUN_1005a010c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x200;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10059b4dc(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x1005a018c | FUN_1005a018c */

void FUN_1005a018c(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



/* Address: 0x1005a0194 | FUN_1005a0194 */

void FUN_1005a0194(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f508;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f508,&DAT_100ee3028);
  DAT_100fd25b8 = pTVar1;
  return;
}



/* Address: 0x1005a01d4 | FUN_1005a01d4 */

void FUN_1005a01d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f450,&DAT_100ee3008);
  DAT_100fd25c0 = pTVar1;
  return;
}



/* Address: 0x1005a0214 | FUN_1005a0214 */

void FUN_1005a0214(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f398;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f398,&DAT_100ee2fe0);
  DAT_100fd25c8 = pTVar1;
  return;
}



/* Address: 0x1005a0254 | FUN_1005a0254 */

void FUN_1005a0254(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f228;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f228,&DAT_100ee2ee0);
  DAT_100fd25d0 = pTVar1;
  return;
}



/* Address: 0x1005a0294 | FUN_1005a0294 */

void FUN_1005a0294(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f2e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f2e0,&DAT_100ee2f60);
  DAT_100fd25d8 = pTVar1;
  return;
}



/* Address: 0x1005a02d4 | FUN_1005a02d4 */

void FUN_1005a02d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    FUN_100524e98(param_2,param_3,param_4,param_5,param_6);
    _swift_bridgeObjectRelease(param_7);
    return;
  }
  return;
}



/* Address: 0x1005a033c | FUN_1005a033c */

void FUN_1005a033c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6084c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6084c,&DAT_100ee3d68);
  DAT_100fd25f0 = pTVar1;
  return;
}



/* Address: 0x1005a037c | FUN_1005a037c */

undefined8 FUN_1005a037c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005a9ee0(param_2,param_1);
  return param_2;
}



/* Address: 0x1005a03b8 | FUN_1005a03b8 */

void FUN_1005a03b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd25f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c606c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c606c0,&DAT_100ee3c38);
  DAT_100fd25f8 = pTVar1;
  return;
}



/* Address: 0x1005a03f8 | FUN_1005a03f8 */

void FUN_1005a03f8(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1005a0414 | FUN_1005a0414 */

undefined1  [16] FUN_1005a0414(void)

{
  return ZEXT816(0x100ee37a8);
}



/* Address: 0x1005a0424 | FUN_1005a0424 */

undefined1  [16] FUN_1005a0424(void)

{
  return ZEXT816(0x100ee37c8);
}



/* Address: 0x1005a0434 | FUN_1005a0434 */

void FUN_1005a0434(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  if (param_10 < '\0') {
    _swift_bridgeObjectRetain(param_2);
    param_9 = param_6;
  }
  else {
    FUN_1004a7398(param_1,param_2,param_3);
    _swift_bridgeObjectRetain(param_5);
    param_3 = param_6;
    param_4 = param_7;
    param_5 = param_8;
    param_7 = (long)param_10;
  }
  FUN_10045b2bc(param_3,param_4,param_5,param_9,param_7);
  return;
}



/* Address: 0x1005a04cc | FUN_1005a04cc */

void FUN_1005a04cc(undefined8 *param_1)

{
  FUN_1005a050c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],*(undefined1 *)(param_1 + 9));
  return;
}



/* Address: 0x1005a050c | FUN_1005a050c */

void FUN_1005a050c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  if (param_10 < '\0') {
    _swift_bridgeObjectRelease(param_2);
    param_9 = param_6;
  }
  else {
    FUN_1004dc818(param_1,param_2,param_3);
    _swift_bridgeObjectRelease(param_5);
    param_3 = param_6;
    param_4 = param_7;
    param_5 = param_8;
    param_7 = (long)param_10;
  }
  FUN_1004dbde0(param_3,param_4,param_5,param_9,param_7);
  return;
}



/* Address: 0x1005a05a4 | FUN_1005a05a4 */

undefined8 * FUN_1005a05a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar10 = param_2[8];
  uVar9 = *(undefined1 *)(param_2 + 9);
  FUN_1005a0434(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  param_1[8] = uVar10;
  *(undefined1 *)(param_1 + 9) = uVar9;
  return param_1;
}



/* Address: 0x1005a0650 | FUN_1005a0650 */

undefined8 * FUN_1005a0650(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar20 = param_2[8];
  uVar17 = *(undefined1 *)(param_2 + 9);
  FUN_1005a0434(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar20,uVar17);
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  uVar15 = param_1[5];
  uVar8 = param_1[6];
  uVar16 = param_1[7];
  uVar19 = param_1[8];
  uVar18 = *(undefined1 *)(param_1 + 9);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  param_1[8] = uVar20;
  *(undefined1 *)(param_1 + 9) = uVar17;
  FUN_1005a050c(uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar8,uVar16,uVar19,uVar18);
  return param_1;
}



/* Address: 0x1005a0720 | FUN_1005a0720 */

void FUN_1005a0720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1005a0744 | FUN_1005a0744 */

undefined8 * FUN_1005a0744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = param_2[8];
  uVar9 = *(undefined1 *)(param_2 + 9);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar10 = *(undefined1 *)(param_1 + 9);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  param_1[8] = uVar12;
  *(undefined1 *)(param_1 + 9) = uVar9;
  FUN_1005a050c(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1005a07b4 | FUN_1005a07b4 */

int FUN_1005a07b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 0x12) & 0x7e | (uint)(*(byte *)(param_1 + 0x12) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005a0804 | FUN_1005a0804 */

void FUN_1005a0804(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 0;
    }
    if (param_2 != 0) {
      param_1[8] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(byte *)(param_1 + 9) = (((byte)(-param_2 >> 1) & 0x3f) + (char)param_2 * -0x40) * '\x02';
      return;
    }
  }
  else {
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 1;
    }
  }
  return;
}



/* Address: 0x1005a0878 | FUN_1005a0878 */

byte FUN_1005a0878(long param_1)

{
  return *(byte *)(param_1 + 0x48) >> 7;
}



/* Address: 0x1005a0884 | FUN_1005a0884 */

void FUN_1005a0884(long param_1)

{
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0x7f;
  return;
}



/* Address: 0x1005a0894 | FUN_1005a0894 */

void FUN_1005a0894(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 1 | param_2 << 7;
  return;
}



/* Address: 0x1005a08a8 | FUN_1005a08a8 */

undefined1  [16] FUN_1005a08a8(void)

{
  return ZEXT816(0x100ee3860);
}



/* Address: 0x1005a08b8 | thunk_FUN_1005a08bc */

void thunk_FUN_1005a08bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60254;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60254,&DAT_100ee37a8);
  DAT_100fd2608 = pTVar1;
  return;
}



/* Address: 0x1005a08bc | FUN_1005a08bc */

void FUN_1005a08bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60254;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60254,&DAT_100ee37a8);
  DAT_100fd2608 = pTVar1;
  return;
}



/* Address: 0x1005a08fc | thunk_FUN_1005a0900 */

void thunk_FUN_1005a0900(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c601b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c601b4,&DAT_100ee37a8);
  DAT_100fd2610 = pTVar1;
  return;
}



/* Address: 0x1005a0900 | FUN_1005a0900 */

void FUN_1005a0900(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c601b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c601b4,&DAT_100ee37a8);
  DAT_100fd2610 = pTVar1;
  return;
}



/* Address: 0x1005a0940 | thunk_FUN_1005a0944 */

void thunk_FUN_1005a0944(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2618 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6018c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6018c,&DAT_100ee37a8);
  DAT_100fd2618 = pTVar1;
  return;
}



/* Address: 0x1005a0944 | FUN_1005a0944 */

void FUN_1005a0944(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2618 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6018c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6018c,&DAT_100ee37a8);
  DAT_100fd2618 = pTVar1;
  return;
}



/* Address: 0x1005a0984 | thunk_FUN_1005a0038 */

void thunk_FUN_1005a0038(void)

{
  FUN_1005a0038();
  return;
}



/* Address: 0x1005a0988 | thunk_FUN_10059a2d0 */

void thunk_FUN_10059a2d0(void)

{
  FUN_10059a2d0();
  return;
}



/* Address: 0x1005a098c | thunk_FUN_100590b34 */

void thunk_FUN_100590b34(void)

{
  FUN_100590b34();
  return;
}



/* Address: 0x1005a0990 | thunk_FUN_1005296dc */

void thunk_FUN_1005296dc(void)

{
  thunk_FUN_1005296dc();
  return;
}



/* Address: 0x1005a0994 | thunk_FUN_100529aec */

void thunk_FUN_100529aec(void)

{
  thunk_FUN_100529aec();
  return;
}



/* Address: 0x1005a0998 | thunk_FUN_100529b30 */

void thunk_FUN_100529b30(void)

{
  thunk_FUN_100529b30();
  return;
}



/* Address: 0x1005a099c | thunk_FUN_100529d8c */

void thunk_FUN_100529d8c(void)

{
  FUN_100529d8c();
  return;
}



/* Address: 0x1005a09a0 | thunk_FUN_10058dfa8 */

void thunk_FUN_10058dfa8(void)

{
  FUN_10058dfa8();
  return;
}



/* Address: 0x1005a09a4 | thunk_FUN_1005298dc */

void thunk_FUN_1005298dc(void)

{
  thunk_FUN_1005298dc();
  return;
}



/* Address: 0x1005a09a8 | thunk_FUN_10058e004 */

void thunk_FUN_10058e004(void)

{
  FUN_10058e004();
  return;
}



/* Address: 0x1005a09ac | thunk_FUN_100529a8c */

void thunk_FUN_100529a8c(void)

{
  thunk_FUN_100529a8c();
  return;
}



/* Address: 0x1005a09b0 | thunk_FUN_100549e98 */

void thunk_FUN_100549e98(void)

{
  thunk_FUN_100549e98();
  return;
}



/* Address: 0x1005a09b4 | thunk_FUN_100529920 */

void thunk_FUN_100529920(void)

{
  thunk_FUN_100529920();
  return;
}



/* Address: 0x1005a09b8 | thunk_FUN_10059f59c */

void thunk_FUN_10059f59c(void)

{
  thunk_FUN_10059f59c();
  return;
}



/* Address: 0x1005a09bc | thunk_FUN_10059f90c */

void thunk_FUN_10059f90c(void)

{
  thunk_FUN_10059f90c();
  return;
}



/* Address: 0x1005a09c0 | thunk_FUN_10059fdb4 */

void thunk_FUN_10059fdb4(void)

{
  thunk_FUN_10059fdb4();
  return;
}



/* Address: 0x1005a09c4 | thunk_FUN_1005297b4 */

void thunk_FUN_1005297b4(void)

{
  FUN_1005297b4();
  return;
}



/* Address: 0x1005a09c8 | FUN_1005a09c8 */

void FUN_1005a09c8(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  __uint8 *p_Var3;
  
  HVar1 = Swift::Hasher::init(param_1);
  FUN_10050e324();
  Swift::Hasher::_combine(*(__uint64 *)(HVar1.unknown + 0x10),param_2);
  lVar2 = *(long *)(HVar1.unknown + 0x10);
  if (lVar2 != 0) {
    p_Var3 = HVar1.unknown + 0x20;
    do {
      Swift::Hasher::_combine(*p_Var3,param_2);
      lVar2 = lVar2 + -1;
      p_Var3 = p_Var3 + 1;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a0a3c | FUN_1005a0a3c */

void FUN_1005a0a3c(__int64 param_1,byte param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  puVar6 = (undefined1 *)0xed000064496e6f69;
  pcVar2 = (char *)0x7461746963696c65;
  if (param_2 != 4) {
    puVar6 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x6c7275;
  if (param_2 != 3) {
    pcVar1 = pcVar2;
  }
  HVar5.unknown = (undefined1 *)0xe300000000000000;
  if (param_2 != 3) {
    HVar5.unknown = puVar6;
  }
  pcVar2 = (char *)0x6567617373656d;
  if (param_2 != 1) {
    pcVar2 = (char *)0x6574736575716572;
  }
  puVar6 = &DAT_e700000000000000;
  if (param_2 != 1) {
    puVar6 = (undefined1 *)0xef616d6568635364;
  }
  pcVar3 = (char *)0x65646f6d;
  if (param_2 != 0) {
    pcVar3 = pcVar2;
  }
  puVar4 = &DAT_e400000000000000;
  if (param_2 != 0) {
    puVar4 = puVar6;
  }
  if (param_2 < 3) {
    HVar5.unknown = puVar4;
    pcVar1 = pcVar3;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a0b40 | FUN_1005a0b40 */

void FUN_1005a0b40(__int64 param_1,byte param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  if (param_2 < 3) {
    puVar1 = (undefined1 *)0x8000000100da8450;
    pcVar2 = (char *)0xd000000000000016;
    if (param_2 != 1) {
      puVar1 = (undefined1 *)0xee00746e696f7064;
      pcVar2 = (char *)0x6e655f6e656b6f74;
    }
    pcVar6 = (char *)0x726575737369;
    if (param_2 != 0) {
      pcVar6 = pcVar2;
    }
    HVar5.unknown = &DAT_e600000000000000;
    if (param_2 != 0) {
      HVar5.unknown = puVar1;
    }
  }
  else {
    pcVar2 = "ethods_supported";
    if (param_2 != 5) {
      pcVar2 = "_in";
    }
    pcVar3 = "dpoint";
    pcVar4 = (char *)0xd000000000000015;
    if (param_2 != 3) {
      pcVar3 = "grant_types_supported";
      pcVar4 = (char *)0xd000000000000020;
    }
    pcVar6 = (char *)0xd000000000000025;
    if (param_2 < 5) {
      pcVar2 = pcVar3;
      pcVar6 = pcVar4;
    }
    HVar5.unknown = (undefined1 *)((ulong)pcVar2 | 0x8000000000000000);
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar6;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a0c78 | FUN_1005a0c78 */

void FUN_1005a0c78(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar4 = (char *)0x736e6f6369;
  if (param_2 != 6) {
    pcVar4 = (char *)0x6174656d5f;
  }
  puVar3 = (undefined1 *)0xec000000616d6568;
  pcVar5 = (char *)0x635374757074756f;
  if (param_2 != 4) {
    puVar3 = (undefined1 *)0xeb00000000736e6f;
    pcVar5 = (char *)0x697461746f6e6e61;
  }
  HVar6.unknown = &DAT_e500000000000000;
  if (param_2 < 6) {
    HVar6.unknown = puVar3;
    pcVar4 = pcVar5;
  }
  puVar3 = &DAT_eb000000006e6f69;
  pcVar5 = (char *)0x7470697263736564;
  if (param_2 != 2) {
    puVar3 = (undefined1 *)0xeb00000000616d65;
    pcVar5 = (char *)0x6863537475706e69;
  }
  pcVar1 = (char *)0x656d616e;
  if (param_2 != 0) {
    pcVar1 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_2 != 0) {
    puVar2 = &DAT_e500000000000000;
  }
  if (param_2 < 2) {
    puVar3 = puVar2;
    pcVar5 = pcVar1;
  }
  if (param_2 < 4) {
    HVar6.unknown = puVar3;
    pcVar4 = pcVar5;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1005a0dc4 | FUN_1005a0dc4 */

void FUN_1005a0dc4(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar6.unknown = (undefined1 *)0xe900000000000073;
  pcVar1 = (char *)0x736e6f6369;
  if (param_2 != 4) {
    pcVar1 = (char *)0x6174656d5f;
  }
  pcVar5 = (char *)0x746e656d75677261;
  if (param_2 != 3) {
    HVar6.unknown = &DAT_e500000000000000;
    pcVar5 = pcVar1;
  }
  pcVar1 = (char *)0x656c746974;
  if (param_2 != 1) {
    pcVar1 = (char *)0x7470697263736564;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_2 != 1) {
    puVar2 = &DAT_eb000000006e6f69;
  }
  pcVar3 = (char *)0x656d616e;
  if (param_2 != 0) {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (param_2 != 0) {
    puVar4 = puVar2;
  }
  if (param_2 < 3) {
    HVar6.unknown = puVar4;
    pcVar5 = pcVar3;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar5;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1005a0ebc | FUN_1005a0ebc */

void FUN_1005a0ebc(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x7472656c61;
  if (param_2 != 6) {
    pcVar1 = (char *)0x636e656772656d65;
  }
  HVar6.unknown = &DAT_e500000000000000;
  if (param_2 != 6) {
    HVar6.unknown = (undefined1 *)0xe900000000000079;
  }
  pcVar3 = (char *)0x726f727265;
  if (param_2 != 4) {
    pcVar3 = (char *)0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_2 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  if (param_2 < 6) {
    HVar6.unknown = puVar2;
    pcVar1 = pcVar3;
  }
  pcVar3 = (char *)0x656369746f6e;
  if (param_2 != 2) {
    pcVar3 = (char *)0x676e696e726177;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_2 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  pcVar4 = (char *)0x6775626564;
  if (param_2 != 0) {
    pcVar4 = (char *)0x6f666e69;
  }
  puVar5 = &DAT_e500000000000000;
  if (param_2 != 0) {
    puVar5 = &DAT_e400000000000000;
  }
  if (param_2 < 2) {
    puVar2 = puVar5;
    pcVar3 = pcVar4;
  }
  if (param_2 < 4) {
    HVar6.unknown = puVar2;
    pcVar1 = pcVar3;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1005a0fe8 | FUN_1005a0fe8 */

undefined8 FUN_1005a0fe8(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Address: 0x1005a1000 | FUN_1005a1000 */

void FUN_1005a1000(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10052797c(unaff_x20 + 0x30,param_1);
  return;
}



/* Address: 0x1005a100c | FUN_1005a100c */

void FUN_1005a100c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1005a1014 | FUN_1005a1014 */

void FUN_1005a1014(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  return;
}


