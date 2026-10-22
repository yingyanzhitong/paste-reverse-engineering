/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100553908 | FUN_100553908 */

undefined8 * FUN_100553908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100553988 | FUN_100553988 */

undefined8 * FUN_100553988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
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
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100553a34 | FUN_100553a34 */

undefined8 * FUN_100553a34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100553aa0 | FUN_100553aa0 */

undefined1  [16] FUN_100553aa0(void)

{
  return ZEXT816(0x100ede820);
}



/* Address: 0x100553ab0 | FUN_100553ab0 */

undefined1 * FUN_100553ab0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100553b14 | FUN_100553b14 */

undefined1  [16] FUN_100553b14(void)

{
  return ZEXT816(0x100ede8b0);
}



/* Address: 0x100553b24 | FUN_100553b24 */

undefined1  [16] FUN_100553b24(void)

{
  return ZEXT816(0x100ede950);
}



/* Address: 0x100553b34 | FUN_100553b34 */

undefined1  [16] FUN_100553b34(void)

{
  return ZEXT816(0x100ede970);
}



/* Address: 0x100553b44 | FUN_100553b44 */

undefined1  [16] FUN_100553b44(void)

{
  return ZEXT816(0x100ede9e8);
}



/* Address: 0x100553b54 | FUN_100553b54 */

undefined1  [16] FUN_100553b54(void)

{
  return ZEXT816(0x100edea10);
}



/* Address: 0x100553b64 | FUN_100553b64 */

undefined1  [16] FUN_100553b64(void)

{
  return ZEXT816(0x100edeaa0);
}



/* Address: 0x100553b74 | FUN_100553b74 */

undefined1  [16] FUN_100553b74(void)

{
  return ZEXT816(0x100edeb30);
}



/* Address: 0x100553b84 | FUN_100553b84 */

undefined1  [16] FUN_100553b84(void)

{
  return ZEXT816(0x100edebc0);
}



/* Address: 0x100553b94 | FUN_100553b94 */

undefined1  [16] FUN_100553b94(void)

{
  return ZEXT816(0x100edec50);
}



/* Address: 0x100553ba4 | FUN_100553ba4 */

undefined1  [16] FUN_100553ba4(void)

{
  return ZEXT816(0x100edece0);
}



/* Address: 0x100553bb4 | FUN_100553bb4 */

undefined1  [16] FUN_100553bb4(void)

{
  return ZEXT816(0x100eded70);
}



/* Address: 0x100553bc4 | thunk_FUN_100553bc8 */

void thunk_FUN_100553bc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a14,&DAT_100eded70);
  DAT_100fcf3d0 = pTVar1;
  return;
}



/* Address: 0x100553bc8 | FUN_100553bc8 */

void FUN_100553bc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a14,&DAT_100eded70);
  DAT_100fcf3d0 = pTVar1;
  return;
}



/* Address: 0x100553c08 | thunk_FUN_100553c0c */

void thunk_FUN_100553c0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57acc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57acc,&DAT_100edece0);
  DAT_100fcf3d8 = pTVar1;
  return;
}



/* Address: 0x100553c0c | FUN_100553c0c */

void FUN_100553c0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57acc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57acc,&DAT_100edece0);
  DAT_100fcf3d8 = pTVar1;
  return;
}



/* Address: 0x100553c4c | thunk_FUN_100553c50 */

void thunk_FUN_100553c50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57b84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57b84,&DAT_100edec50);
  DAT_100fcf3e0 = pTVar1;
  return;
}



/* Address: 0x100553c50 | FUN_100553c50 */

void FUN_100553c50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57b84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57b84,&DAT_100edec50);
  DAT_100fcf3e0 = pTVar1;
  return;
}



/* Address: 0x100553c90 | thunk_FUN_100553c94 */

void thunk_FUN_100553c94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcf3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcf3f0;
  FUN_1000f8b08(&DAT_100fcf3f0,&DAT_100c57c00);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcf3e8 = puVar2;
  return;
}



/* Address: 0x100553c94 | FUN_100553c94 */

void FUN_100553c94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcf3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcf3f0;
  FUN_1000f8b08(&DAT_100fcf3f0,&DAT_100c57c00);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcf3e8 = puVar2;
  return;
}



/* Address: 0x100553ce4 | thunk_FUN_100553ce8 */

void thunk_FUN_100553ce8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57cb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57cb8,&DAT_100edebc0);
  DAT_100fcf3f8 = pTVar1;
  return;
}



/* Address: 0x100553ce8 | FUN_100553ce8 */

void FUN_100553ce8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57cb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57cb8,&DAT_100edebc0);
  DAT_100fcf3f8 = pTVar1;
  return;
}



/* Address: 0x100553d28 | thunk_FUN_100553d2c */

void thunk_FUN_100553d2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57da8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57da8,&DAT_100edeb30);
  DAT_100fcf400 = pTVar1;
  return;
}



/* Address: 0x100553d2c | FUN_100553d2c */

void FUN_100553d2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57da8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57da8,&DAT_100edeb30);
  DAT_100fcf400 = pTVar1;
  return;
}



/* Address: 0x100553d6c | thunk_FUN_100553d70 */

void thunk_FUN_100553d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57e60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57e60,&DAT_100edeaa0);
  DAT_100fcf408 = pTVar1;
  return;
}



/* Address: 0x100553d70 | FUN_100553d70 */

void FUN_100553d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57e60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57e60,&DAT_100edeaa0);
  DAT_100fcf408 = pTVar1;
  return;
}



/* Address: 0x100553db0 | thunk_FUN_100553db4 */

void thunk_FUN_100553db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57eb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57eb0,&DAT_100edea10);
  DAT_100fcf410 = pTVar1;
  return;
}



/* Address: 0x100553db4 | FUN_100553db4 */

void FUN_100553db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57eb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57eb0,&DAT_100edea10);
  DAT_100fcf410 = pTVar1;
  return;
}



/* Address: 0x100553df4 | thunk_FUN_100553df8 */

void thunk_FUN_100553df8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57e88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57e88,&DAT_100edea10);
  DAT_100fcf418 = pTVar1;
  return;
}



/* Address: 0x100553df8 | FUN_100553df8 */

void FUN_100553df8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57e88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57e88,&DAT_100edea10);
  DAT_100fcf418 = pTVar1;
  return;
}



/* Address: 0x100553e38 | thunk_FUN_100553e3c */

void thunk_FUN_100553e3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57df8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57df8,&DAT_100edeaa0);
  DAT_100fcf420 = pTVar1;
  return;
}



/* Address: 0x100553e3c | FUN_100553e3c */

void FUN_100553e3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57df8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57df8,&DAT_100edeaa0);
  DAT_100fcf420 = pTVar1;
  return;
}



/* Address: 0x100553e7c | thunk_FUN_100553e80 */

void thunk_FUN_100553e80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57dd0,&DAT_100edeaa0);
  DAT_100fcf428 = pTVar1;
  return;
}



/* Address: 0x100553e80 | FUN_100553e80 */

void FUN_100553e80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57dd0,&DAT_100edeaa0);
  DAT_100fcf428 = pTVar1;
  return;
}



/* Address: 0x100553ec0 | thunk_FUN_100553ec4 */

void thunk_FUN_100553ec4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57d08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57d08,&DAT_100edeb30);
  DAT_100fcf430 = pTVar1;
  return;
}



/* Address: 0x100553ec4 | FUN_100553ec4 */

void FUN_100553ec4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57d08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57d08,&DAT_100edeb30);
  DAT_100fcf430 = pTVar1;
  return;
}



/* Address: 0x100553f04 | thunk_FUN_100553f08 */

void thunk_FUN_100553f08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57ce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57ce0,&DAT_100edeb30);
  DAT_100fcf438 = pTVar1;
  return;
}



/* Address: 0x100553f08 | FUN_100553f08 */

void FUN_100553f08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57ce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57ce0,&DAT_100edeb30);
  DAT_100fcf438 = pTVar1;
  return;
}



/* Address: 0x100553f48 | thunk_FUN_100553f4c */

void thunk_FUN_100553f4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57bd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57bd4,&DAT_100edebc0);
  DAT_100fcf440 = pTVar1;
  return;
}



/* Address: 0x100553f4c | FUN_100553f4c */

void FUN_100553f4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57bd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57bd4,&DAT_100edebc0);
  DAT_100fcf440 = pTVar1;
  return;
}



/* Address: 0x100553f8c | thunk_FUN_100553f90 */

void thunk_FUN_100553f90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57bac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57bac,&DAT_100edebc0);
  DAT_100fcf448 = pTVar1;
  return;
}



/* Address: 0x100553f90 | FUN_100553f90 */

void FUN_100553f90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57bac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57bac,&DAT_100edebc0);
  DAT_100fcf448 = pTVar1;
  return;
}



/* Address: 0x100553fd0 | thunk_FUN_100553fd4 */

void thunk_FUN_100553fd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57b1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57b1c,&DAT_100edec50);
  DAT_100fcf450 = pTVar1;
  return;
}



/* Address: 0x100553fd4 | FUN_100553fd4 */

void FUN_100553fd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57b1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57b1c,&DAT_100edec50);
  DAT_100fcf450 = pTVar1;
  return;
}



/* Address: 0x100554014 | thunk_FUN_100554018 */

void thunk_FUN_100554018(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57af4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57af4,&DAT_100edec50);
  DAT_100fcf458 = pTVar1;
  return;
}



/* Address: 0x100554018 | FUN_100554018 */

void FUN_100554018(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57af4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57af4,&DAT_100edec50);
  DAT_100fcf458 = pTVar1;
  return;
}



/* Address: 0x100554058 | thunk_FUN_10055405c */

void thunk_FUN_10055405c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf460 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a64,&DAT_100edece0);
  DAT_100fcf460 = pTVar1;
  return;
}



/* Address: 0x10055405c | FUN_10055405c */

void FUN_10055405c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf460 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a64,&DAT_100edece0);
  DAT_100fcf460 = pTVar1;
  return;
}



/* Address: 0x10055409c | thunk_FUN_1005540a0 */

void thunk_FUN_1005540a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf468 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a3c,&DAT_100edece0);
  DAT_100fcf468 = pTVar1;
  return;
}



/* Address: 0x1005540a0 | FUN_1005540a0 */

void FUN_1005540a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf468 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57a3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57a3c,&DAT_100edece0);
  DAT_100fcf468 = pTVar1;
  return;
}



/* Address: 0x1005540e0 | thunk_FUN_1005540e4 */

void thunk_FUN_1005540e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57974;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57974,&DAT_100eded70);
  DAT_100fcf470 = pTVar1;
  return;
}



/* Address: 0x1005540e4 | FUN_1005540e4 */

void FUN_1005540e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57974;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57974,&DAT_100eded70);
  DAT_100fcf470 = pTVar1;
  return;
}



/* Address: 0x100554124 | thunk_FUN_100554128 */

void thunk_FUN_100554128(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5794c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5794c,&DAT_100eded70);
  DAT_100fcf478 = pTVar1;
  return;
}



/* Address: 0x100554128 | FUN_100554128 */

void FUN_100554128(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5794c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5794c,&DAT_100eded70);
  DAT_100fcf478 = pTVar1;
  return;
}



/* Address: 0x100554168 | FUN_100554168 */

void FUN_100554168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57520;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57520,&DAT_100ede950);
  DAT_100fcf680 = pTVar1;
  return;
}



/* Address: 0x1005541a8 | FUN_1005541a8 */

void FUN_1005541a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf688 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57258;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57258,&DAT_100ede670);
  DAT_100fcf688 = pTVar1;
  return;
}



/* Address: 0x1005541e8 | FUN_1005541e8 */

void FUN_1005541e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c570b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c570b0,&DAT_100ede5e0);
  DAT_100fcf690 = pTVar1;
  return;
}



/* Address: 0x100554228 | FUN_100554228 */

void FUN_100554228(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf6e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c572d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c572d0,&DAT_100ede670);
  DAT_100fcf6e0 = pTVar1;
  return;
}



/* Address: 0x100554268 | FUN_100554268 */

void FUN_100554268(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf6e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c571b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c571b8,&DAT_100ede538);
  DAT_100fcf6e8 = pTVar1;
  return;
}



/* Address: 0x1005542a8 | FUN_1005542a8 */

void FUN_1005542a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf6f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57598;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57598,&DAT_100ede950);
  DAT_100fcf6f8 = pTVar1;
  return;
}


