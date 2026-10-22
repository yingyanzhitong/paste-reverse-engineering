/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004e0ec8 | FUN_1004e0ec8 */

undefined1  [16] FUN_1004e0ec8(void)

{
  return ZEXT816(0x100edb0b8);
}



/* Address: 0x1004e0ed8 | FUN_1004e0ed8 */

void FUN_1004e0ed8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Address: 0x1004e0f38 | FUN_1004e0f38 */

undefined8 * FUN_1004e0f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  param_1[0xb] = param_2[0xb];
  uVar7 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar7;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar6 = param_2[0x10];
  uVar8 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Address: 0x1004e1028 | FUN_1004e1028 */

undefined8 * FUN_1004e1028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined2 *)((long)param_1 + 0x13) = *(undefined2 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004e118c | FUN_1004e118c */

void FUN_1004e118c(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Address: 0x1004e11c0 | FUN_1004e11c0 */

undefined8 * FUN_1004e11c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x11) = *(undefined4 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRelease(param_1[0xc]);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRelease(param_1[0xf]);
  uVar2 = param_1[0x10];
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1004e128c | FUN_1004e128c */

int FUN_1004e128c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004e12d4 | FUN_1004e12d4 */

void FUN_1004e12d4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x11) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004e1334 | FUN_1004e1334 */

undefined1  [16] FUN_1004e1334(void)

{
  return ZEXT816(0x100edb140);
}



/* Address: 0x1004e1344 | FUN_1004e1344 */

undefined1  [16] FUN_1004e1344(void)

{
  return ZEXT816(0x100edb178);
}



/* Address: 0x1004e1354 | FUN_1004e1354 */

undefined1  [16] FUN_1004e1354(void)

{
  return ZEXT816(0x100edb198);
}



/* Address: 0x1004e1364 | FUN_1004e1364 */

undefined1  [16] FUN_1004e1364(void)

{
  return ZEXT816(0x100edb228);
}



/* Address: 0x1004e1374 | FUN_1004e1374 */

undefined1  [16] FUN_1004e1374(void)

{
  return ZEXT816(0x100edb2b8);
}



/* Address: 0x1004e1384 | thunk_FUN_1004e1388 */

void thunk_FUN_1004e1388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5276c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5276c,&DAT_100edb2b8);
  DAT_100fcc6c8 = pTVar1;
  return;
}



/* Address: 0x1004e1388 | FUN_1004e1388 */

void FUN_1004e1388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5276c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5276c,&DAT_100edb2b8);
  DAT_100fcc6c8 = pTVar1;
  return;
}



/* Address: 0x1004e13c8 | thunk_FUN_1004e13cc */

void thunk_FUN_1004e13cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcc6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcc6d8;
  FUN_1000f8b08(&DAT_100fcc6d8,&DAT_100c527e8);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcc6d0 = puVar2;
  return;
}



/* Address: 0x1004e13cc | FUN_1004e13cc */

void FUN_1004e13cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcc6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcc6d8;
  FUN_1000f8b08(&DAT_100fcc6d8,&DAT_100c527e8);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcc6d0 = puVar2;
  return;
}



/* Address: 0x1004e141c | thunk_FUN_1004e1420 */

void thunk_FUN_1004e1420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528a0,&DAT_100edb228);
  DAT_100fcc6e0 = pTVar1;
  return;
}



/* Address: 0x1004e1420 | FUN_1004e1420 */

void FUN_1004e1420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528a0,&DAT_100edb228);
  DAT_100fcc6e0 = pTVar1;
  return;
}



/* Address: 0x1004e1460 | thunk_FUN_1004e1464 */

void thunk_FUN_1004e1464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528f0,&DAT_100edb198);
  DAT_100fcc6e8 = pTVar1;
  return;
}



/* Address: 0x1004e1464 | FUN_1004e1464 */

void FUN_1004e1464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528f0,&DAT_100edb198);
  DAT_100fcc6e8 = pTVar1;
  return;
}



/* Address: 0x1004e14a4 | thunk_FUN_1004e14a8 */

void thunk_FUN_1004e14a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528c8,&DAT_100edb198);
  DAT_100fcc6f0 = pTVar1;
  return;
}



/* Address: 0x1004e14a8 | FUN_1004e14a8 */

void FUN_1004e14a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c528c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c528c8,&DAT_100edb198);
  DAT_100fcc6f0 = pTVar1;
  return;
}



/* Address: 0x1004e14e8 | thunk_FUN_1004e14ec */

void thunk_FUN_1004e14ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c527bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c527bc,&DAT_100edb228);
  DAT_100fcc6f8 = pTVar1;
  return;
}



/* Address: 0x1004e14ec | FUN_1004e14ec */

void FUN_1004e14ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c527bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c527bc,&DAT_100edb228);
  DAT_100fcc6f8 = pTVar1;
  return;
}



/* Address: 0x1004e152c | thunk_FUN_1004e1530 */

void thunk_FUN_1004e1530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc700 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52794;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52794,&DAT_100edb228);
  DAT_100fcc700 = pTVar1;
  return;
}



/* Address: 0x1004e1530 | FUN_1004e1530 */

void FUN_1004e1530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc700 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52794;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52794,&DAT_100edb228);
  DAT_100fcc700 = pTVar1;
  return;
}



/* Address: 0x1004e1570 | thunk_FUN_1004e1574 */

void thunk_FUN_1004e1574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c526cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c526cc,&DAT_100edb2b8);
  DAT_100fcc708 = pTVar1;
  return;
}



/* Address: 0x1004e1574 | FUN_1004e1574 */

void FUN_1004e1574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c526cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c526cc,&DAT_100edb2b8);
  DAT_100fcc708 = pTVar1;
  return;
}



/* Address: 0x1004e15b4 | switchD_1004c6de4::caseD_2c */

void switchD_1004c6de4::caseD_2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc710 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c526a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c526a4,&DAT_100edb2b8);
  DAT_100fcc710 = pTVar1;
  return;
}



/* Address: 0x1004e15b8 | switchD_1004c6de4::caseD_2c */

void switchD_1004c6de4::caseD_2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc710 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c526a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c526a4,&DAT_100edb2b8);
  DAT_100fcc710 = pTVar1;
  return;
}



/* Address: 0x1004e15f8 | FUN_1004e15f8 */

undefined8 FUN_1004e15f8(undefined8 param_1)

{
  FUN_100528184();
  return param_1;
}



/* Address: 0x1004e162c | FUN_1004e162c */

void FUN_1004e162c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc868 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f5c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f5c0,&DAT_100ee2e50);
  DAT_100fcc868 = pTVar1;
  return;
}



/* Address: 0x1004e166c | FUN_1004e166c */

void FUN_1004e166c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc870 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f170;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f170,&DAT_100ee2dc0);
  DAT_100fcc870 = pTVar1;
  return;
}



/* Address: 0x1004e16ac | FUN_1004e16ac */

void FUN_1004e16ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5511c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5511c,&DAT_100edcda0);
  DAT_100fcc878 = pTVar1;
  return;
}



/* Address: 0x1004e16ec | FUN_1004e16ec */

void FUN_1004e16ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc888 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56078;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56078,&DAT_100edd5b0);
  DAT_100fcc888 = pTVar1;
  return;
}



/* Address: 0x1004e172c | FUN_1004e172c */

void FUN_1004e172c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc890 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55b58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55b58,&DAT_100edd520);
  DAT_100fcc890 = pTVar1;
  return;
}



/* Address: 0x1004e176c | FUN_1004e176c */

undefined8 FUN_1004e176c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004e0ba4(param_2,param_1,&DAT_100edb0b8);
  return param_2;
}



/* Address: 0x1004e17a0 | FUN_1004e17a0 */

undefined8 FUN_1004e17a0(undefined8 param_1)

{
  FUN_1004e0b4c(param_1,&DAT_100edb0b8);
  return param_1;
}



/* Address: 0x1004e17cc | FUN_1004e17cc */

String FUN_1004e17cc(void)

{
  String SVar1;
  
  FUN_1004e18e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004e17f4 | FUN_1004e17f4 */

String FUN_1004e17f4(void)

{
  String SVar1;
  
  FUN_1004e18e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004e181c | FUN_1004e181c */

void FUN_1004e181c(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcc898;
  FUN_1000f7830(&DAT_100fcc898,&DAT_100c52a30);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004e18e4();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1004e18e4 | FUN_1004e18e4 */

void FUN_1004e18e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53474;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53474,&DAT_100edb800);
  DAT_100fcc8a0 = pTVar1;
  return;
}



/* Address: 0x1004e1924 | FUN_1004e1924 */

void FUN_1004e1924(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x1004e1958 | FUN_1004e1958 */

void FUN_1004e1958(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x1004e1970 | FUN_1004e1970 */

void FUN_1004e1970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  pcVar3 = *(code **)(param_6 + 0x48);
  FUN_1004a7398();
  uVar1 = param_5;
  lVar2 = param_6;
  (*pcVar3)(param_5,param_6);
  FUN_1004e1a10(&local_80,param_2,param_3,param_4,uVar1,lVar2,param_7,param_5,param_6);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  *(undefined1 *)(param_1 + 2) = local_70;
  param_1[3] = local_68;
  param_1[4] = uStack_60;
  return;
}



/* Address: 0x1004e1a10 | FUN_1004e1a10 */

void FUN_1004e1a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  lVar2 = 0;
  FUN_1004e3b34(0,param_8,param_9);
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_8,0x100cb270c,&TargetProtocolRequirement_100cb2744);
                    /* WARNING: Could not recover jumptable at 0x0001004e1a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + (long)iVar1,param_7,lVar2);
  return;
}



/* Address: 0x1004e1a9c | FUN_1004e1a9c */

void FUN_1004e1a9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  FUN_1004e1b10(&local_68);
  FUN_1004a7398(param_2,param_3,param_4);
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  *(undefined2 *)(param_1 + 6) = local_38;
  return;
}



/* Address: 0x1004e1b10 | FUN_1004e1b10 */

void FUN_1004e1b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Result RVar1;
  long lVar2;
  undefined7 extraout_var;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  FUN_1004db3ac();
  RVar1 = Swift::Result::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(puVar3,param_5,lVar2);
  _swift_storeEnumTagMultiPayload(puVar3,CONCAT71(extraout_var,RVar1.value),0);
  FUN_1004e3a44(param_1,param_2,param_3,param_4,puVar3,param_6,param_7);
  return;
}



/* Address: 0x1004e1c18 | FUN_1004e1c18 */

void FUN_1004e1c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  local_70 = param_5;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar5 = *(code **)(param_7 + 0x48);
  FUN_1004a7398(param_2,param_3,param_4);
  uVar2 = param_6;
  lVar3 = param_7;
  (*pcVar5)(param_6,param_7);
  (**(code **)(lVar4 + 0x10))((long)&local_70 - extraout_x8,local_70,lVar1);
  FUN_1004e1a10(local_68,param_2,param_3,param_4,uVar2,lVar3,(long)&local_70 - extraout_x8,param_6,
                param_7);
  return;
}



/* Address: 0x1004e1d1c | FUN_1004e1d1c */

void FUN_1004e1d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long extraout_x8;
  long extraout_x12;
  
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x12,param_5);
  FUN_1004e1b10(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0 + -extraout_x12,param_6,
                param_7);
  FUN_1004a7398(param_2,param_3,param_4);
  return;
}



/* Address: 0x1004e1df4 | FUN_1004e1df4 */

void FUN_1004e1df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1004e1e74();
  FUN_1004a7398(param_1,param_2,param_3);
  FUN_1004d9ee8(param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x1004e1e74 | FUN_1004e1e74 */

void FUN_1004e1e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  Result RVar1;
  undefined7 extraout_var;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined4 local_64;
  long lVar2;
  
  local_64 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_9,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  FUN_1004db3ac();
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0,lVar2,lVar2);
  lVar2 = -extraout_x8;
  puVar3 = (undefined8 *)((long)&uStack_70 + lVar2);
  *puVar3 = param_5;
  *(undefined8 *)(&stack0xffffffffffffff98 + lVar2) = param_6;
  *(undefined8 *)(&stack0xffffffffffffffa0 + lVar2) = param_7;
  (&stack0xffffffffffffffa8)[lVar2] = param_8;
  _swift_storeEnumTagMultiPayload(puVar3);
  FUN_1004e3a44(param_1,param_2,param_3,local_64,puVar3,param_9,param_10);
  return;
}



/* Address: 0x1004e1f7c | FUN_1004e1f7c */

undefined8 FUN_1004e1f7c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1004a7398(uVar1,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return uVar1;
}



/* Address: 0x1004e1fc0 | FUN_1004e1fc0 */

void FUN_1004e1fc0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
                    /* WARNING: Could not recover jumptable at 0x0001004e2010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Address: 0x1004e2014 | FUN_1004e2014 */

void FUN_1004e2014(void)

{
  FUN_1004e3b8c();
  return;
}



/* Address: 0x1004e2030 | FUN_1004e2030 */

undefined1  [16] FUN_1004e2030(byte param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  puVar4 = (undefined1 *)0x6370726e6f736a;
  puVar3 = (undefined1 *)0x646f6874656d;
  if (param_1 != 2) {
    puVar3 = (undefined1 *)0x736d61726170;
  }
  if (param_1 != 0) {
    puVar4 = &SUB_00006469;
  }
  puVar1 = &DAT_e700000000000000;
  if (param_1 != 0) {
    puVar1 = &SUB_e200000000000000;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 < 2) {
    puVar2 = puVar1;
    puVar3 = puVar4;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Address: 0x1004e2098 | FUN_1004e2098 */

void FUN_1004e2098(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c530b0,param_1);
  (extension_Swift)::Swift::RawRepresentable::_get_hashValue();
  return;
}



/* Address: 0x1004e20e4 | FUN_1004e20e4 */

void FUN_1004e20e4(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c530b0);
  (extension_Swift)::Swift::RawRepresentable::_hash(param_1);
  return;
}



/* Address: 0x1004e2134 | FUN_1004e2134 */

void FUN_1004e2134(__int64 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c530b0);
  (extension_Swift)::Swift::RawRepresentable::__rawHashValue(param_1);
  return;
}



/* Address: 0x1004e2184 | FUN_1004e2184 */

void FUN_1004e2184(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004e3b8c(uVar1,param_2[1],*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                &DAT_100fcce98);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004e21c0 | FUN_1004e21c0 */

void FUN_1004e21c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004e4fc4(param_1,param_2,thunk_FUN_1004e2030);
  return;
}



/* Address: 0x1004e21cc | FUN_1004e21cc */

void FUN_1004e21cc(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1004e2030(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1004e21d8 | FUN_1004e21d8 */

void FUN_1004e21d8(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_1004e2014(param_2,param_3,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  *param_1 = (char)param_2;
  return;
}


