/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008a4ec4 | FUN_1008a4ec4 */

void FUN_1008a4ec4(void)

{
  FUN_100134584(&DAT_100fea030,&DAT_100fea038,&DAT_100c81218,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x1008a4ef8 | thunk_FUN_1008a4efc */

void thunk_FUN_1008a4efc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea040 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81328;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81328,&DAT_100f0ace8);
  DAT_100fea040 = pTVar1;
  return;
}



/* Address: 0x1008a4efc | FUN_1008a4efc */

void FUN_1008a4efc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea040 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81328;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81328,&DAT_100f0ace8);
  DAT_100fea040 = pTVar1;
  return;
}



/* Address: 0x1008a4f3c | thunk_FUN_1008a4f40 */

void thunk_FUN_1008a4f40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c813d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c813d0,&DAT_100f0ad78);
  DAT_100fea048 = pTVar1;
  return;
}



/* Address: 0x1008a4f40 | FUN_1008a4f40 */

void FUN_1008a4f40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c813d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c813d0,&DAT_100f0ad78);
  DAT_100fea048 = pTVar1;
  return;
}



/* Address: 0x1008a4f80 | thunk_FUN_1008a5cac */

undefined8 * thunk_FUN_1008a5cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1008a4f84 | thunk_FUN_1008a5cf0 */

undefined8 * thunk_FUN_1008a5cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1008a4f88 | FUN_1008a4f88 */

void FUN_1008a4f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008a4f9c | thunk_FUN_1008a5d54 */

undefined8 * thunk_FUN_1008a5d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1008a4fa0 | thunk_FUN_1004fd2c8 */

int thunk_FUN_1004fd2c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008a4fa4 | thunk_FUN_1004fd310 */

void thunk_FUN_1004fd310(void)

{
  FUN_1004fd310();
  return;
}



/* Address: 0x1008a4fa8 | FUN_1008a4fa8 */

undefined1  [16] FUN_1008a4fa8(void)

{
  return ZEXT816(0x100f0a9a8);
}



/* Address: 0x1008a4fb8 | FUN_1008a4fb8 */

void FUN_1008a4fb8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &DAT_100c81560;
      _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    }
  }
  return;
}



/* Address: 0x1008a5048 | FUN_1008a5048 */

long * FUN_1008a5048(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = *(ulong *)(lVar3 + 0x40);
  if (*(ulong *)(lVar3 + 0x40) <= *(ulong *)(lVar2 + 0x40)) {
    uVar1 = *(ulong *)(lVar2 + 0x40);
  }
  if (uVar1 < 10) {
    uVar1 = 9;
  }
  uVar4 = *(uint *)(lVar3 + 0x50) | *(uint *)(lVar2 + 0x50);
  if (uVar1 + 1 < 0x19 && (uVar4 & 0x1000f8) == 0) {
    uVar4 = (uint)*(byte *)((long)param_2 + uVar1);
    if (2 < *(byte *)((long)param_2 + uVar1)) {
      uVar4 = (int)*param_2 + 3;
    }
    if (uVar4 == 2) {
      *param_1 = *param_2;
      *(char *)(param_1 + 1) = (char)param_2[1];
      *(undefined1 *)((long)param_1 + uVar1) = 2;
      _swift_bridgeObjectRetain();
    }
    else if (uVar4 == 1) {
      (**(code **)(lVar3 + 0x10))(param_1,param_2,*(long *)(param_3 + 0x18));
      *(undefined1 *)((long)param_1 + uVar1) = 1;
    }
    else {
      (**(code **)(lVar2 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    uVar1 = (ulong)(uVar4 & 0xf8 | 7);
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1008a5150 | FUN_1008a5150 */

void FUN_1008a5150(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar2 + 0x40);
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = *(ulong *)(lVar3 + 0x40);
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 < 10) {
    uVar6 = 9;
  }
  bVar1 = *(byte *)((long)param_1 + uVar6);
  uVar7 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar6;
    uVar8 = 4;
    if (uVar4 < 4) {
      uVar8 = uVar4;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008a51f4;
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
    uVar7 = uVar8 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1008a51f4:
  if (uVar7 == 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    return;
  }
  if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001008a520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))(param_1,*(long *)(param_2 + 0x18));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008a521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008a5220 | FUN_1008a5220 */

undefined8 * FUN_1008a5220(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(ulong *)(lVar3 + 0x40);
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (uVar7 < 10) {
    uVar7 = 9;
  }
  bVar1 = *(byte *)((long)param_2 + uVar7);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar8 = (uint)uVar7;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1008a52d4;
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
LAB_1008a52d4:
  if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 1) = (byte)param_2[2];
    *(undefined1 *)((long)param_1 + uVar7) = 2;
    _swift_bridgeObjectRetain();
  }
  else if (uVar5 == 1) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,*(long *)(param_3 + 0x18));
    *(undefined1 *)((long)param_1 + uVar7) = 1;
  }
  else {
    (**(code **)(lVar2 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar7) = 0;
  }
  return param_1;
}



/* Address: 0x1008a5340 | FUN_1008a5340 */

uint * FUN_1008a5340(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar3 + -8);
  uVar1 = *(ulong *)(lVar11 + 0x40);
  if (*(ulong *)(lVar11 + 0x40) <= *(ulong *)(lVar10 + 0x40)) {
    uVar1 = *(ulong *)(lVar10 + 0x40);
  }
  if (uVar1 < 10) {
    uVar1 = 9;
  }
  bVar4 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar4;
  uVar9 = (uint)uVar1;
  if (2 < bVar4) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008a5404;
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
    uVar7 = uVar8 | bVar4 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1008a5404:
  if (uVar7 == 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    if (uVar7 == 1) {
      pcVar6 = *(code **)(lVar11 + 8);
      lVar5 = lVar3;
    }
    else {
      pcVar6 = *(code **)(lVar10 + 8);
      lVar5 = lVar2;
    }
    (*pcVar6)(param_1,lVar5);
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar4;
  if (2 < bVar4) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008a54b4;
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
    uVar7 = uVar8 | bVar4 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1008a54b4:
  if (uVar7 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 2) = (byte)param_2[2];
    *(byte *)((long)param_1 + uVar1) = 2;
    _swift_bridgeObjectRetain();
  }
  else if (uVar7 == 1) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar3);
    *(byte *)((long)param_1 + uVar1) = 1;
  }
  else {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1008a5538 | FUN_1008a5538 */

void FUN_1008a5538(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = *(ulong *)(lVar4 + 0x40);
  if (uVar8 <= uVar5) {
    uVar8 = uVar5;
  }
  if (uVar8 < 10) {
    uVar8 = 9;
  }
  bVar1 = *(byte *)((long)param_2 + uVar8);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar9 = (uint)uVar8;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1008a55e8;
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
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_1008a55e8:
  if (uVar6 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 1) = (byte)param_2[2];
    uVar2 = 2;
  }
  else if (uVar6 == 1) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,*(long *)(param_3 + 0x18));
    uVar2 = 1;
  }
  else {
    (**(code **)(lVar3 + 0x20))();
    uVar2 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar8) = uVar2;
  return;
}



/* Address: 0x1008a5650 | FUN_1008a5650 */

uint * FUN_1008a5650(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar3 + -8);
  uVar1 = *(ulong *)(lVar11 + 0x40);
  if (*(ulong *)(lVar11 + 0x40) <= *(ulong *)(lVar10 + 0x40)) {
    uVar1 = *(ulong *)(lVar10 + 0x40);
  }
  if (uVar1 < 10) {
    uVar1 = 9;
  }
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar5;
  uVar9 = (uint)uVar1;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008a5714;
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
    uVar7 = uVar8 | bVar5 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1008a5714:
  if (uVar7 == 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    if (uVar7 == 1) {
      pcVar6 = *(code **)(lVar11 + 8);
      lVar4 = lVar3;
    }
    else {
      pcVar6 = *(code **)(lVar10 + 8);
      lVar4 = lVar2;
    }
    (*pcVar6)(param_1,lVar4);
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar5;
  if (2 < bVar5) {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1008a57c4;
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
    uVar7 = uVar8 | bVar5 - 3 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1008a57c4:
  if (uVar7 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 2) = (byte)param_2[2];
    bVar5 = 2;
  }
  else if (uVar7 == 1) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar3);
    bVar5 = 1;
  }
  else {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar2);
    bVar5 = 0;
  }
  *(byte *)((long)param_1 + uVar1) = bVar5;
  return param_1;
}



/* Address: 0x1008a5840 | FUN_1008a5840 */

int FUN_1008a5840(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 < 10) {
    uVar6 = 9;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1008a58f8;
  uVar5 = uVar6 + 1;
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1008a58f8;
      goto LAB_1008a5884;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1008a5884:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
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
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + 0xfe;
  }
LAB_1008a58f8:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar6)) {
    iVar2 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1008a5954 | FUN_1008a5954 */

void FUN_1008a5954(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (uVar5 < 10) {
    uVar5 = 9;
  }
  sVar1 = uVar5 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar7 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar6 << 3 & 0x1f)) +
            1;
    bVar7 = 2;
    if (0xffff < uVar2) {
      bVar7 = 4;
    }
    if (uVar2 < 0x100) {
      bVar7 = 1 < uVar2;
    }
  }
  else {
    bVar7 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar6 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar6 == 2) {
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
      iVar8 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}



/* Address: 0x1008a5b08 | FUN_1008a5b08 */

uint FUN_1008a5b08(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  if (uVar6 < 10) {
    uVar6 = 9;
  }
  bVar1 = *(byte *)((long)param_1 + uVar6);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = (uint)uVar6;
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



/* Address: 0x1008a5bac | FUN_1008a5bac */

void FUN_1008a5bac(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t sVar5;
  uint uVar6;
  
  if (param_2 < 3) {
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
    uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar3 < 10) {
      uVar3 = 9;
    }
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
    sVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
    if (sVar5 <= uVar3) {
      sVar5 = uVar3;
    }
    if (sVar5 < 10) {
      sVar5 = 9;
    }
    param_2 = param_2 - 3;
    uVar6 = (uint)sVar5;
    if (uVar6 < 4) {
      *(char *)((long)param_1 + sVar5) = (char)(param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x03';
      if (uVar6 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar5);
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
      *(undefined1 *)((long)param_1 + sVar5) = 3;
      _bzero(param_1,sVar5);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1008a5cac | FUN_1008a5cac */

undefined8 * FUN_1008a5cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1008a5cf0 | FUN_1008a5cf0 */

undefined8 * FUN_1008a5cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1008a5d54 | FUN_1008a5d54 */

undefined8 * FUN_1008a5d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1008a5d98 | FUN_1008a5d98 */

undefined1  [16] FUN_1008a5d98(void)

{
  return ZEXT816(0x100f0aa98);
}



/* Address: 0x1008a5da8 | FUN_1008a5da8 */

void FUN_1008a5da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008a5dbc | FUN_1008a5dbc */

undefined1  [16] FUN_1008a5dbc(void)

{
  return ZEXT816(0x100f0ab18);
}



/* Address: 0x1008a5dcc | FUN_1008a5dcc */

undefined1  [16] FUN_1008a5dcc(void)

{
  return ZEXT816(0x100f0ab40);
}



/* Address: 0x1008a5ddc | FUN_1008a5ddc */

int FUN_1008a5ddc(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffdd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffde;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x22 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0x21;
  }
  return iVar1;
}



/* Address: 0x1008a5e34 | FUN_1008a5e34 */

void FUN_1008a5e34(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffde) {
    if (0x7fffffdd < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 0x21);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000022;
    if (0x7fffffdd < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1008a5e84 | FUN_1008a5e84 */

undefined1  [16] FUN_1008a5e84(void)

{
  return ZEXT816(0x100f0abd8);
}



/* Address: 0x1008a5e94 | FUN_1008a5e94 */

void FUN_1008a5e94(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1008a5ea0 | FUN_1008a5ea0 */

undefined1  [16] FUN_1008a5ea0(void)

{
  return ZEXT816(0x100f0ac50);
}



/* Address: 0x1008a5eb0 | FUN_1008a5eb0 */

int FUN_1008a5eb0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x17) {
      iVar2 = 4;
    }
    if (param_2 + 0x17 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1008a5f2c;
        goto LAB_1008a5f10;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1008a5f10:
      return ((uint)*param_1 | uVar1 << 8) - 0x17;
    }
  }
LAB_1008a5f2c:
  iVar2 = *param_1 - 0x18;
  if (*param_1 < 0x18) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1008a5f40 | FUN_1008a5f40 */

void FUN_1008a5f40(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0x17) {
    uVar3 = 4;
  }
  if (param_3 + 0x17 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xe8 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xe9) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1008a5fc0;
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
LAB_1008a5fc0:
      *param_1 = (char)param_2 + '\x17';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xe9 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xe9);
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



/* Address: 0x1008a5ff0 | FUN_1008a5ff0 */

undefined1  [16] FUN_1008a5ff0(void)

{
  return ZEXT816(0x100f0ace8);
}



/* Address: 0x1008a6000 | thunk_FUN_1008a601c */

undefined8 * thunk_FUN_1008a601c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  if (0xfffffffe < uVar1) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1008a6004 | FUN_1008a6004 */

void FUN_1008a6004(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 0x10)) {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1008a601c | FUN_1008a601c */

undefined8 * FUN_1008a601c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  if (0xfffffffe < uVar1) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1008a6074 | FUN_1008a6074 */

undefined8 * FUN_1008a6074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[2]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar1 = param_2[2];
  }
  else {
    if (0xfffffffe < (ulong)param_2[2]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar2);
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar1 = param_2[2];
  }
  param_1[2] = uVar1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  return param_1;
}



/* Address: 0x1008a6130 | FUN_1008a6130 */

undefined8 * FUN_1008a6130(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < 0xffffffff) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
  }
  else {
    uVar2 = param_2[2];
    if (uVar2 < 0xffffffff) {
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = param_2[2];
    }
    else {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1008a61bc | FUN_1008a61bc */

int FUN_1008a61bc(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffc3 < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffc4;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x3c < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0x3b;
  }
  return iVar1;
}



/* Address: 0x1008a6214 | FUN_1008a6214 */

void FUN_1008a6214(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffc4) {
    if (0x7fffffc3 < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 4) = (ulong)(param_2 + 0x3b);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 + 0x8000003c;
    if (0x7fffffc3 < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x1008a6268 | FUN_1008a6268 */

int FUN_1008a6268(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008a6280 | FUN_1008a6280 */

void FUN_1008a6280(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
  }
  else if (param_2 != 0) {
    param_1[2] = (ulong)(param_2 - 1);
    return;
  }
  return;
}



/* Address: 0x1008a62a4 | FUN_1008a62a4 */

undefined1  [16] FUN_1008a62a4(void)

{
  return ZEXT816(0x100f0ad78);
}



/* Address: 0x1008a62b4 | FUN_1008a62b4 */

undefined1  [16] FUN_1008a62b4(void)

{
  return ZEXT816(0x100f0ae08);
}



/* Address: 0x1008a62c4 | thunk_FUN_1008a62c8 */

void thunk_FUN_1008a62c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea228 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81664;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81664,&DAT_100f0ae08);
  DAT_100fea228 = pTVar1;
  return;
}



/* Address: 0x1008a62c8 | FUN_1008a62c8 */

void FUN_1008a62c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea228 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81664;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81664,&DAT_100f0ae08);
  DAT_100fea228 = pTVar1;
  return;
}



/* Address: 0x1008a6308 | FUN_1008a6308 */

void FUN_1008a6308(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  FUN_10089da18(uVar1,(*(undefined8 **)(unaff_x20 + 0x10))[1],param_2,param_3);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1008a633c | thunk_FUN_10089ff9c */

void thunk_FUN_10089ff9c(void)

{
  FUN_10089ff9c();
  return;
}



/* Address: 0x1008a6340 | thunk_FUN_10089e4d4 */

void thunk_FUN_10089e4d4(void)

{
  FUN_10089e4d4();
  return;
}



/* Address: 0x1008a6344 | thunk_FUN_10089ff74 */

void thunk_FUN_10089ff74(void)

{
  FUN_10089ff74();
  return;
}



/* Address: 0x1008a6348 | FUN_1008a6348 */

void FUN_1008a6348(void)

{
  FUN_1008a6308();
  return;
}



/* Address: 0x1008a635c | thunk_FUN_10089ffcc */

void thunk_FUN_10089ffcc(void)

{
  FUN_10089ffcc();
  return;
}



/* Address: 0x1008a6360 | thunk_FUN_10076f114 */

void thunk_FUN_10076f114(void)

{
  FUN_10076f114();
  return;
}



/* Address: 0x1008a6364 | thunk_FUN_1004fd310 */

void thunk_FUN_1004fd310(void)

{
  thunk_FUN_1004fd310();
  return;
}



/* Address: 0x1008a6368 | thunk_FUN_10089f744 */

void thunk_FUN_10089f744(void)

{
  return;
}



/* Address: 0x1008a636c | thunk_FUN_10089e4fc */

void thunk_FUN_10089e4fc(void)

{
  FUN_10089e4fc();
  return;
}



/* Address: 0x1008a6370 | thunk_FUN_1008a5cac */

void thunk_FUN_1008a5cac(void)

{
  thunk_FUN_1008a5cac();
  return;
}



/* Address: 0x1008a6374 | thunk_FUN_1008a5cf0 */

void thunk_FUN_1008a5cf0(void)

{
  thunk_FUN_1008a5cf0();
  return;
}



/* Address: 0x1008a6378 | thunk_FUN_1008a5d54 */

void thunk_FUN_1008a5d54(void)

{
  thunk_FUN_1008a5d54();
  return;
}


