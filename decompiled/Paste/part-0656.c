/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006f2db4 | FUN_1006f2db4 */

void FUN_1006f2db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ec8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ec8,&DAT_100efa4e0);
  DAT_100fde270 = pTVar1;
  return;
}



/* Address: 0x1006f2df4 | thunk_FUN_1006f2df8 */

void thunk_FUN_1006f2df8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72df8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72df8,&DAT_100efa4e0);
  DAT_100fde278 = pTVar1;
  return;
}



/* Address: 0x1006f2df8 | FUN_1006f2df8 */

void FUN_1006f2df8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72df8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72df8,&DAT_100efa4e0);
  DAT_100fde278 = pTVar1;
  return;
}



/* Address: 0x1006f2e38 | thunk_FUN_1006f2e3c */

void thunk_FUN_1006f2e3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde280 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72f08,&DAT_100efa4e0);
  DAT_100fde280 = pTVar1;
  return;
}



/* Address: 0x1006f2e3c | FUN_1006f2e3c */

void FUN_1006f2e3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde280 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72f08,&DAT_100efa4e0);
  DAT_100fde280 = pTVar1;
  return;
}



/* Address: 0x1006f2e7c | thunk_FUN_1006f2e80 */

void thunk_FUN_1006f2e80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73038;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73038,&DAT_100efa4e0);
  DAT_100fde288 = pTVar1;
  return;
}



/* Address: 0x1006f2e80 | FUN_1006f2e80 */

void FUN_1006f2e80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73038;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73038,&DAT_100efa4e0);
  DAT_100fde288 = pTVar1;
  return;
}



/* Address: 0x1006f2ec0 | FUN_1006f2ec0 */

void FUN_1006f2ec0(void)

{
  FUN_100134584(&DAT_100fde290,&DAT_100fde298,&DAT_100c72f40,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x1006f2ef4 | FUN_1006f2ef4 */

void FUN_1006f2ef4(void)

{
  FUN_100134584(&DAT_100fde2a0,&DAT_100fde2a8,&DAT_100c72f48,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x1006f2f28 | FUN_1006f2f28 */

void FUN_1006f2f28(void)

{
  FUN_100134584(&DAT_100fde2b0,&DAT_100fde2b8,&DAT_100c73030,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x1006f2f5c | thunk_FUN_1006f2f88 */

void thunk_FUN_1006f2f88(void)

{
  FUN_1006f2f88();
  return;
}



/* Address: 0x1006f2f60 | FUN_1006f2f60 */

void FUN_1006f2f60(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}



/* Address: 0x1006f2f88 | FUN_1006f2f88 */

undefined8 * FUN_1006f2f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006f2fc4 | FUN_1006f2fc4 */

undefined8 * FUN_1006f2fc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006f3028 | FUN_1006f3028 */

undefined8 * FUN_1006f3028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006f306c | FUN_1006f306c */

undefined1  [16] FUN_1006f306c(void)

{
  return ZEXT816(0x100efa4e0);
}



/* Address: 0x1006f307c | FUN_1006f307c */

void FUN_1006f307c(void)

{
  undefined8 in_x3;
  undefined8 in_x7;
  byte in_stack_00000000;
  
  if (in_stack_00000000 < 6) {
    if ((1 << (ulong)(in_stack_00000000 & 0x1f) & 0x33U) == 0) {
      _swift_bridgeObjectRetain(in_x3);
      in_x3 = in_x7;
    }
    _swift_bridgeObjectRetain(in_x3);
    return;
  }
  return;
}



/* Address: 0x1006f30d0 | FUN_1006f30d0 */

void FUN_1006f30d0(void)

{
  undefined8 in_x3;
  undefined8 in_x7;
  byte in_stack_00000000;
  
  if (in_stack_00000000 < 6) {
    if ((1 << (ulong)(in_stack_00000000 & 0x1f) & 0x33U) == 0) {
      _swift_bridgeObjectRelease(in_x3);
      in_x3 = in_x7;
    }
    _swift_bridgeObjectRelease(in_x3);
    return;
  }
  return;
}



/* Address: 0x1006f3124 | FUN_1006f3124 */

void FUN_1006f3124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1006f3148 | FUN_1006f3148 */

undefined1  [16] FUN_1006f3148(void)

{
  return ZEXT816(0x100efa560);
}



/* Address: 0x1006f3158 | thunk_FUN_1006f315c */

void thunk_FUN_1006f315c(undefined8 *param_1)

{
  FUN_1006f30d0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Address: 0x1006f315c | FUN_1006f315c */

void FUN_1006f315c(undefined8 *param_1)

{
  FUN_1006f30d0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Address: 0x1006f3194 | thunk_FUN_1006f3198 */

undefined8 * thunk_FUN_1006f3198(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Address: 0x1006f3198 | FUN_1006f3198 */

undefined8 * FUN_1006f3198(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Address: 0x1006f3230 | thunk_FUN_1006f3234 */

undefined8 * thunk_FUN_1006f3234(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar17 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar17);
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  uVar15 = param_1[5];
  uVar8 = param_1[6];
  uVar16 = param_1[7];
  uVar18 = *(undefined1 *)(param_1 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar17;
  FUN_1006f30d0(uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar8,uVar16,uVar18);
  return param_1;
}



/* Address: 0x1006f3234 | FUN_1006f3234 */

undefined8 * FUN_1006f3234(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar17 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar17);
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  uVar15 = param_1[5];
  uVar8 = param_1[6];
  uVar16 = param_1[7];
  uVar18 = *(undefined1 *)(param_1 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar17;
  FUN_1006f30d0(uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar8,uVar16,uVar18);
  return param_1;
}



/* Address: 0x1006f32e8 | thunk_FUN_1006f32ec */

undefined8 * thunk_FUN_1006f32ec(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_1006f30d0(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Address: 0x1006f32ec | FUN_1006f32ec */

undefined8 * FUN_1006f32ec(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_1006f30d0(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Address: 0x1006f3350 | thunk_FUN_1006f3354 */

int thunk_FUN_1006f3354(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 0x10) ^ 0xff;
  if (*(byte *)(param_1 + 0x10) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006f3354 | FUN_1006f3354 */

int FUN_1006f3354(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 0x10) ^ 0xff;
  if (*(byte *)(param_1 + 0x10) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006f339c | thunk_FUN_1006f33a0 */

void thunk_FUN_1006f33a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 8) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
  }
  return;
}



/* Address: 0x1006f33a0 | FUN_1006f33a0 */

void FUN_1006f33a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 8) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
  }
  return;
}



/* Address: 0x1006f33f8 | FUN_1006f33f8 */

uint FUN_1006f33f8(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 6;
  if (*(byte *)(param_1 + 0x10) < 6) {
    uVar1 = (uint)*(byte *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Address: 0x1006f3410 | FUN_1006f3410 */

void FUN_1006f3410(ulong *param_1,uint param_2)

{
  if (5 < param_2) {
    *param_1 = (ulong)(param_2 - 6);
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_2 = 6;
  }
  *(char *)(param_1 + 8) = (char)param_2;
  return;
}



/* Address: 0x1006f343c | FUN_1006f343c */

undefined1  [16] FUN_1006f343c(void)

{
  return ZEXT816(0x100efa5f8);
}



/* Address: 0x1006f344c | thunk_FUN_1006f1298 */

undefined8 thunk_FUN_1006f1298(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Address: 0x1006f3450 | thunk_FUN_1006f33a0 */

void thunk_FUN_1006f33a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 8) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
  }
  return;
}



/* Address: 0x1006f3454 | thunk_FUN_1006f0f6c */

void thunk_FUN_1006f0f6c(void)

{
  FUN_1006f0f6c();
  return;
}



/* Address: 0x1006f3458 | thunk_FUN_1006f315c */

void thunk_FUN_1006f315c(void)

{
  thunk_FUN_1006f315c();
  return;
}



/* Address: 0x1006f345c | thunk_FUN_1006f2f88 */

void thunk_FUN_1006f2f88(void)

{
  FUN_1006f2f88();
  return;
}



/* Address: 0x1006f3460 | thunk_FUN_1006f3198 */

undefined8 * thunk_FUN_1006f3198(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Address: 0x1006f3464 | thunk_FUN_1006f3234 */

undefined8 * thunk_FUN_1006f3234(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar17 = *(undefined1 *)(param_2 + 8);
  FUN_1006f307c(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar17);
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  uVar15 = param_1[5];
  uVar8 = param_1[6];
  uVar16 = param_1[7];
  uVar18 = *(undefined1 *)(param_1 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar17;
  FUN_1006f30d0(uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar8,uVar16,uVar18);
  return param_1;
}



/* Address: 0x1006f3468 | thunk_FUN_1006f32ec */

undefined8 * thunk_FUN_1006f32ec(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_1006f30d0(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Address: 0x1006f346c | thunk_FUN_1006f3354 */

int thunk_FUN_1006f3354(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 0x10) ^ 0xff;
  if (*(byte *)(param_1 + 0x10) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006f3470 | thunk_FUN_1006f0850 */

uint thunk_FUN_1006f0850(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1006f192c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Address: 0x1006f3474 | FUN_1006f3474 */

void FUN_1006f3474(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  FUN_1006e8c6c(0xff,param_6);
  FUN_1006f5198(0,uVar1);
  uVar1 = param_3;
  FUN_1006f4f68(param_3,param_4);
  _swift_release(param_3);
  *param_1 = uVar1;
  param_1[6] = param_4;
  FUN_100076508(param_5,param_1 + 1);
  return;
}



/* Address: 0x1006f34f0 | FUN_1006f34f0 */

void FUN_1006f34f0(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  return;
}



/* Address: 0x1006f34f8 | FUN_1006f34f8 */

void FUN_1006f34f8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100076688(unaff_x20 + 8,param_1);
  return;
}



/* Address: 0x1006f3504 | FUN_1006f3504 */

undefined8 FUN_1006f3504(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x30);
}



/* Address: 0x1006f350c | FUN_1006f350c */

void FUN_1006f350c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b0) = unaff_x20;
  *(long *)(unaff_x22 + 0x2a8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x298) = param_2;
  *(undefined8 *)(unaff_x22 + 0x290) = param_1;
  lVar2 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x2b8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2c8) = uVar1;
  _swift_task_switch(FUN_1006f3580,0,0);
  return;
}



/* Address: 0x1006f3580 | FUN_1006f3580 */

void FUN_1006f3580(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *local_60;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x298);
  uVar17 = puVar6[3];
  uVar5 = puVar6[2];
  uVar4 = puVar6[5];
  uVar8 = puVar6[4];
  uVar9 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  uVar8 = puVar6[10];
  uVar5 = puVar6[0xd];
  uVar4 = puVar6[0xc];
  uVar11 = puVar6[7];
  uVar18 = puVar6[6];
  uVar9 = puVar6[9];
  uVar17 = puVar6[8];
  *(undefined8 *)(unaff_x22 + 0x68) = puVar6[0xb];
  *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  uVar8 = puVar6[0x12];
  uVar5 = puVar6[0x15];
  uVar4 = puVar6[0x14];
  uVar11 = puVar6[0xf];
  uVar18 = puVar6[0xe];
  uVar9 = puVar6[0x11];
  uVar17 = puVar6[0x10];
  *(undefined8 *)(unaff_x22 + 0xa8) = puVar6[0x13];
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar17;
  FUN_1009fc75c();
  FUN_1006f51a8(unaff_x22 + 0x198);
  _swift_bridgeObjectRelease(param_2);
  lVar10 = *(long *)(unaff_x22 + 0x198);
  if (lVar10 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x298) + 0xb8);
    FUN_100867ea8(*(undefined8 *)(*(long *)(unaff_x22 + 0x298) + 0xb0),uVar9);
    uVar18 = uVar11;
    FUN_1006e85cc(unaff_x22 + 0x240);
    _swift_bridgeObjectRelease(uVar9);
    if (*(long *)(unaff_x22 + 600) != 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
      lVar12 = *(long *)(unaff_x22 + 0x2c0);
      lVar14 = *(long *)(unaff_x22 + 0x2b8);
      lVar13 = *(long *)(unaff_x22 + 0x2a8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x2a0);
      FUN_100076508(unaff_x22 + 0x240,unaff_x22 + 0x218);
      (**(code **)(lVar12 + 0x10))(uVar9,uVar15,lVar14);
      lVar16 = *(long *)(lVar13 + 0x18);
      pcVar1 = (code *)(unaff_x22 + 0x268);
      lVar12 = lVar14;
      lVar13 = lVar16;
      (**(code **)(lVar16 + 0x50))(pcVar1,lVar14,lVar16);
      uVar9 = *(undefined8 *)(lVar12 + 0x10);
      uVar15 = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
      *(undefined8 *)(lVar12 + 0x18) = uVar5;
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar15);
      (*pcVar1)(unaff_x22 + 0x268,0);
      (**(code **)(lVar16 + 0x40))(lVar14);
      _swift_release();
      _swift_bridgeObjectRelease(lVar13);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRetain(uVar17);
      iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x20));
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f385c);
        (*pcVar1)();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar16 + 0x18));
      *(undefined8 *)(lVar16 + 0x10) = uVar4;
      *(undefined8 *)(lVar16 + 0x18) = uVar17;
      iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x20));
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f3860);
        (*pcVar1)();
      }
      _swift_release(lVar16);
      _swift_bridgeObjectRelease(lVar10);
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(uVar17);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar12 = *(long *)(unaff_x22 + 0x238);
      FUN_100004640(unaff_x22 + 0x218,uVar8);
      piVar7 = *(int **)(lVar12 + 0x10);
      plVar3 = (long *)(ulong)(uint)piVar7[1];
      local_60 = (code *)((long)*piVar7 + (long)piVar7);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2d0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1006f3860;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
      lVar10 = unaff_x22 + 0x150;
      goto LAB_1006f3828;
    }
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(lVar10);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(uVar17);
    if (*(long *)(unaff_x22 + 600) != 0) {
      FUN_100004594(unaff_x22 + 0x240);
    }
  }
  lVar10 = *(long *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(lVar10 + 0x20);
  lVar12 = *(long *)(lVar10 + 0x28);
  FUN_100004640(lVar10 + 8,uVar8);
  piVar7 = *(int **)(lVar12 + 0x10);
  plVar3 = (long *)(ulong)(uint)piVar7[1];
  local_60 = (code *)((long)*piVar7 + (long)piVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006f3938;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  lVar10 = unaff_x22 + 0x108;
LAB_1006f3828:
                    /* WARNING: Could not recover jumptable at 0x0001006f3854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_60)(plVar3,lVar10,uVar4,uVar5,uVar8,lVar12);
  return;
}



/* Address: 0x1006f3860 | FUN_1006f3860 */

void FUN_1006f3860(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006f38c4;
  }
  else {
    pcVar1 = FUN_1006f3b20;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006f38c4 | FUN_1006f38c4 */

void FUN_1006f38c4(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x2c8),*(undefined8 *)(unaff_x22 + 0x2b8));
  FUN_100004594(unaff_x22 + 0x218);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2c8);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x290);
  uVar1 = *(undefined1 *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar3[1] = *(undefined8 *)(unaff_x22 + 0x158);
  *puVar3 = uVar8;
  puVar3[3] = uVar10;
  puVar3[2] = uVar9;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  *(undefined1 *)(puVar3 + 8) = uVar1;
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006f3934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f3938 | FUN_1006f3938 */

void FUN_1006f3938(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x2e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2e0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006f39cc,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x2c8);
  puVar3 = *(undefined8 **)(lVar4 + 0x290);
  uVar1 = *(undefined1 *)(lVar4 + 0x148);
  uVar7 = *(undefined8 *)(lVar4 + 0x130);
  uVar6 = *(undefined8 *)(lVar4 + 0x128);
  uVar9 = *(undefined8 *)(lVar4 + 0x140);
  uVar8 = *(undefined8 *)(lVar4 + 0x138);
  uVar10 = *(undefined8 *)(lVar4 + 0x108);
  uVar12 = *(undefined8 *)(lVar4 + 0x120);
  uVar11 = *(undefined8 *)(lVar4 + 0x118);
  puVar3[1] = *(undefined8 *)(lVar4 + 0x110);
  *puVar3 = uVar10;
  puVar3[3] = uVar12;
  puVar3[2] = uVar11;
  puVar3[5] = uVar7;
  puVar3[4] = uVar6;
  puVar3[7] = uVar9;
  puVar3[6] = uVar8;
  *(undefined1 *)(puVar3 + 8) = uVar1;
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006f39c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x1006f39cc | FUN_1006f39cc */

void FUN_1006f39cc(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar6;
  _swift_errorRetain(uVar6);
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar3 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  lVar9 = unaff_x22 + 0x1c8;
  _swift_dynamicCast(lVar9,unaff_x22 + 0x288,puVar2,puVar3,8);
  if ((int)lVar9 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x288));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2b8);
    lVar9 = *(long *)(unaff_x22 + 0x2a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x298);
    _swift_errorRelease(uVar6);
    FUN_100076508(unaff_x22 + 0x1c8,unaff_x22 + 0x1f0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar10 = *(long *)(unaff_x22 + 0x210);
    FUN_100004640(unaff_x22 + 0x1f0,uVar6);
    (**(code **)(*(long *)(lVar10 + 8) + 8))
              (unaff_x22 + 0xc0,uVar8,uVar7,uVar5,*(undefined8 *)(lVar9 + 0x18),uVar6);
    FUN_100004594(unaff_x22 + 0x1f0);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x288));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x290);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar4[1] = *(undefined8 *)(unaff_x22 + 200);
    *puVar4 = uVar12;
    puVar4[3] = uVar14;
    puVar4[2] = uVar13;
    puVar4[5] = uVar7;
    puVar4[4] = uVar5;
    puVar4[7] = uVar11;
    puVar4[6] = uVar8;
    *(undefined1 *)(puVar4 + 8) = uVar1;
  }
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006f3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f3b20 | FUN_1006f3b20 */

void FUN_1006f3b20(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x2c8),*(undefined8 *)(unaff_x22 + 0x2b8));
  FUN_100004594(unaff_x22 + 0x218);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar6;
  _swift_errorRetain(uVar6);
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar3 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  lVar9 = unaff_x22 + 0x1c8;
  _swift_dynamicCast(lVar9,unaff_x22 + 0x288,puVar2,puVar3,8);
  if ((int)lVar9 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x288));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2b8);
    lVar9 = *(long *)(unaff_x22 + 0x2a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x298);
    _swift_errorRelease(uVar6);
    FUN_100076508(unaff_x22 + 0x1c8,unaff_x22 + 0x1f0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar10 = *(long *)(unaff_x22 + 0x210);
    FUN_100004640(unaff_x22 + 0x1f0,uVar6);
    (**(code **)(*(long *)(lVar10 + 8) + 8))
              (unaff_x22 + 0xc0,uVar8,uVar7,uVar5,*(undefined8 *)(lVar9 + 0x18),uVar6);
    FUN_100004594(unaff_x22 + 0x1f0);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x288));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x290);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar4[1] = *(undefined8 *)(unaff_x22 + 200);
    *puVar4 = uVar12;
    puVar4[3] = uVar14;
    puVar4[2] = uVar13;
    puVar4[5] = uVar7;
    puVar4[4] = uVar5;
    puVar4[7] = uVar11;
    puVar4[6] = uVar8;
    *(undefined1 *)(puVar4 + 8) = uVar1;
  }
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006f3c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f3c90 | FUN_1006f3c90 */

void FUN_1006f3c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar1 = (long *)0x2f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006da9d8;
  FUN_1006f350c(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4);
  return;
}



/* Address: 0x1006f3d08 | FUN_1006f3d08 */

void FUN_1006f3d08(undefined8 *param_1)

{
  _swift_release(*param_1);
  FUN_100004594(param_1 + 1);
  return;
}



/* Address: 0x1006f3d30 | FUN_1006f3d30 */

undefined8 * FUN_1006f3d30(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  _swift_retain();
  (*pcVar1)(param_1 + 1,param_2 + 1,lVar2);
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1006f3d94 | FUN_1006f3d94 */

undefined8 * FUN_1006f3d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  FUN_10008820c(param_1 + 1,param_2 + 1);
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1006f3dec | FUN_1006f3dec */

undefined8 * FUN_1006f3dec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  FUN_100004594(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  return param_1;
}



/* Address: 0x1006f3e40 | FUN_1006f3e40 */

void FUN_1006f3e40(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f3e4c | FUN_1006f3e4c */

void FUN_1006f3e4c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbc65c);
  return;
}



/* Address: 0x1006f3e58 | thunk_FUN_1006f3e5c */

void thunk_FUN_1006f3e5c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x30);
  }
  return;
}


