/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100637358 | FUN_100637358 */

uint FUN_100637358(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),0,0);
  (*pcVar1)(param_1,param_1 + *(int *)(lVar2 + 0x30));
  return (uint)param_1 & 1;
}



/* Address: 0x1006373b4 | FUN_1006373b4 */

void FUN_1006373b4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697f0,param_1);
  return;
}



/* Address: 0x1006373c4 | FUN_1006373c4 */

void FUN_1006373c4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69990,param_1);
  return;
}



/* Address: 0x1006373d4 | FUN_1006373d4 */

void FUN_1006373d4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697a8,param_1);
  return;
}



/* Address: 0x1006373e4 | FUN_1006373e4 */

void FUN_1006373e4(undefined8 param_1)

{
  _swift_getWitnessTable
            (PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0,param_1);
  return;
}



/* Address: 0x1006373f4 | FUN_1006373f4 */

void FUN_1006373f4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_1);
  return;
}



/* Address: 0x100637404 | FUN_100637404 */

void FUN_100637404(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69920,param_1);
  return;
}



/* Address: 0x100637414 | FUN_100637414 */

void FUN_100637414(undefined8 param_1)

{
  _swift_getWitnessTable
            (PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0,
             param_1);
  return;
}



/* Address: 0x100637424 | FUN_100637424 */

void FUN_100637424(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *local_28;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c699f8;
  _swift_getWitnessTable();
  local_28 = pTVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__RandomAccessCollection_100eabeb8,
             param_1,&local_28);
  return;
}



/* Address: 0x10063746c | FUN_10063746c */

void FUN_10063746c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c699f8,param_1);
  return;
}



/* Address: 0x10063747c | FUN_10063747c */

void FUN_10063747c(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *local_28;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69a48;
  _swift_getWitnessTable();
  local_28 = pTVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__BidirectionalCollection_100eabea8,
             param_1,&local_28);
  return;
}



/* Address: 0x1006374c4 | FUN_1006374c4 */

void FUN_1006374c4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48,param_1);
  return;
}



/* Address: 0x1006374d4 | FUN_1006374d4 */

void FUN_1006374d4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69aa8,param_1);
  return;
}



/* Address: 0x1006374e4 | FUN_1006374e4 */

void FUN_1006374e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69b60,param_1,&local_18);
  return;
}



/* Address: 0x10063751c | FUN_10063751c */

undefined8 * FUN_10063751c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x100637550 | FUN_100637550 */

undefined8 * FUN_100637550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1006375a4 | FUN_1006375a4 */

undefined8 * FUN_1006375a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x1006375e0 | FUN_1006375e0 */

int FUN_1006375e0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 7)) {
    uVar1 = *(byte *)((long)param_1 + 7) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100637634 | FUN_100637634 */

void FUN_100637634(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 7) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x100637674 | thunk_FUN_100637238 */

void thunk_FUN_100637238(void)

{
  FUN_100637238();
  return;
}



/* Address: 0x100637678 | thunk_FUN_100637238 */

void thunk_FUN_100637238(void)

{
  FUN_100637238();
  return;
}



/* Address: 0x10063767c | thunk_FUN_100637220 */

void thunk_FUN_100637220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100637234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x10))(param_1,param_2);
  return;
}



/* Address: 0x100637680 | thunk_FUN_100634ab8 */

void thunk_FUN_100634ab8(void)

{
  FUN_100634ab8();
  return;
}



/* Address: 0x100637684 | thunk_FUN_100634a40 */

void thunk_FUN_100634a40(void)

{
  thunk_FUN_100634a40();
  return;
}



/* Address: 0x100637688 | thunk_FUN_100634b1c */

void thunk_FUN_100634b1c(void)

{
  thunk_FUN_100634b1c();
  return;
}



/* Address: 0x10063768c | thunk_FUN_1006334a0 */

void thunk_FUN_1006334a0(void)

{
  FUN_1006334a0();
  return;
}



/* Address: 0x100637690 | thunk_FUN_10063751c */

void thunk_FUN_10063751c(void)

{
  FUN_10063751c();
  return;
}



/* Address: 0x100637694 | thunk_FUN_10063725c */

void thunk_FUN_10063725c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001006372a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Address: 0x100637698 | thunk_FUN_1006373f4 */

void thunk_FUN_1006373f4(void)

{
  FUN_1006373f4();
  return;
}



/* Address: 0x10063769c | thunk_FUN_1006374c4 */

void thunk_FUN_1006374c4(void)

{
  FUN_1006374c4();
  return;
}



/* Address: 0x1006376a0 | thunk_FUN_10063720c */

void thunk_FUN_10063720c(void)

{
  FUN_10063720c();
  return;
}



/* Address: 0x1006376a4 | thunk_FUN_10063720c */

void thunk_FUN_10063720c(void)

{
  FUN_10063720c();
  return;
}



/* Address: 0x1006376a8 | thunk_FUN_10063720c */

void thunk_FUN_10063720c(void)

{
  FUN_10063720c();
  return;
}



/* Address: 0x1006376ac | FUN_1006376ac */

void FUN_1006376ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar7 = unaff_x20[2];
  uVar6 = *unaff_x20;
  _swift_retain(param_2);
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    thunk_FUN_100651f14();
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100637764);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar6 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100637768);
    (*pcVar4)();
  }
  lVar1 = uVar6 + uVar7 * 0x10;
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  FUN_100004550(uVar2,uVar3);
  *unaff_x20 = uVar6;
  uVar5 = *(long *)(uVar6 + 0x10) + 0x7fffffffffffffffU & uVar7 + 1;
  unaff_x20[2] = uVar5;
  if (unaff_x20[1] == uVar5) {
    FUN_100647310();
    return;
  }
  return;
}



/* Address: 0x100637768 | FUN_100637768 */

void FUN_100637768(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  uVar4 = unaff_x20[2];
  FUN_1005e650c(param_1,auStack_78);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_100651eec();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_1004375f4(auStack_78,uVar3 + uVar4 * 0x48 + 0x20,&DAT_100fd4db0,&DAT_100c659e0);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_100647454();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100637820);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063781c);
  (*pcVar1)();
}



/* Address: 0x100637820 | FUN_100637820 */

void FUN_100637820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = unaff_x20[2];
  uVar5 = *unaff_x20;
  _swift_retain();
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100651f00();
  }
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006378f0);
    (*pcVar1)();
  }
  if (*(ulong *)(uVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006378f4);
    (*pcVar1)();
  }
  lVar3 = uVar5 + uVar6 * 0x18;
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(char *)(lVar3 + 0x36) = (char)((ulong)param_3 >> 0x30);
  *(short *)(lVar3 + 0x34) = (short)((ulong)param_3 >> 0x20);
  *(int *)(lVar3 + 0x30) = (int)param_3;
  _swift_release(uVar2);
  *unaff_x20 = uVar5;
  uVar4 = *(long *)(uVar5 + 0x10) + 0x7fffffffffffffffU & uVar6 + 1;
  unaff_x20[2] = uVar4;
  if (unaff_x20[1] == uVar4) {
    FUN_100647580();
    return;
  }
  return;
}



/* Address: 0x1006378f4 | FUN_1006378f4 */

void FUN_1006378f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar6 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar7 = *(long *)(uVar6 + 0x10) - 1U & uVar1 - 1;
  _swift_retain();
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_100651f00();
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006379d4);
    (*pcVar2)();
  }
  if (*(ulong *)(uVar6 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006379d8);
    (*pcVar2)();
  }
  lVar5 = uVar6 + uVar7 * 0x18;
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  *(char *)(lVar5 + 0x36) = (char)((ulong)param_3 >> 0x30);
  *(short *)(lVar5 + 0x34) = (short)((ulong)param_3 >> 0x20);
  *(int *)(lVar5 + 0x30) = (int)param_3;
  _swift_release(uVar4);
  *unaff_x20 = uVar6;
  uVar6 = *(long *)(uVar6 + 0x10) - 1U & uVar1 - 1;
  unaff_x20[1] = uVar6;
  if (uVar6 == unaff_x20[2]) {
    FUN_100647580();
    return;
  }
  return;
}



/* Address: 0x1006379d8 | FUN_1006379d8 */

void FUN_1006379d8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    _swift_release(*unaff_x20);
    *unaff_x20 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100624f78(0,1,1);
    lVar2 = *unaff_x20;
    uVar1 = *(ulong *)(lVar2 + 0x10);
    if (*(ulong *)(lVar2 + 0x18) >> 1 <= uVar1) {
      FUN_100624f78(1 < *(ulong *)(lVar2 + 0x18),uVar1 + 1,1);
      lVar2 = *unaff_x20;
    }
    *(ulong *)(lVar2 + 0x10) = uVar1 + 1;
    lVar3 = lVar2 + uVar1 * 0x18;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x2f) = 0;
    *unaff_x20 = lVar2;
  }
  else {
    lVar2 = unaff_x20[2] - unaff_x20[1];
    if (unaff_x20[2] < unaff_x20[1]) {
      lVar2 = lVar2 + *(long *)(*unaff_x20 + 0x10);
    }
    FUN_100637a8c(lVar2);
  }
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Address: 0x100637a8c | FUN_100637a8c */

void FUN_100637a8c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar3 = *unaff_x20;
  uVar7 = unaff_x20[1];
  lVar5 = unaff_x20[2] - uVar7;
  if ((long)unaff_x20[2] < (long)uVar7) {
    lVar5 = lVar5 + *(long *)(uVar3 + 0x10);
  }
  if (lVar5 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100637b5c);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100637b60);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_100651f00();
    }
    do {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100637b54);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100637b58);
        (*pcVar1)();
      }
      puVar6 = (undefined8 *)(uVar3 + 0x20 + uVar7 * 0x18);
      uVar4 = *puVar6;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)((long)puVar6 + 0xf) = 0;
      _swift_release(uVar4);
      uVar7 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar3;
  }
  unaff_x20[1] = uVar7;
  return;
}



/* Address: 0x100637b60 | FUN_100637b60 */

bool FUN_100637b60(long param_1,ulong param_2)

{
  bool bVar1;
  undefined1 auStack_38 [24];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 < 0x800) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    bVar1 = false;
    if (0x400 < *(uint *)(param_1 + 0x10)) {
      bVar1 = (long)(*(uint *)(param_1 + 0x10) - param_2) < (long)param_2;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Address: 0x100637bc4 | FUN_100637bc4 */

void FUN_100637bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb8688,&TargetProtocolRequirement_100cb8690);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  FUN_10065b2f8(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Address: 0x100637c54 | FUN_100637c54 */

undefined8
FUN_100637c54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_5 + 0x10);
  do {
    uVar1 = param_1;
    (*pcVar2)(param_1,param_2,param_4,param_5);
    if (unaff_x21 != 0) {
      return 1;
    }
  } while ((uVar1 & 0xff) == 0);
  return 1;
}



/* Address: 0x100637cb4 | FUN_100637cb4 */

void FUN_100637cb4(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint7 uVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong *unaff_x20;
  uint uVar19;
  size_t sVar20;
  ulong uVar21;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar17 = param_3 - param_2;
  if ((long)param_3 < (long)param_2) {
    lVar17 = lVar17 + *(long *)(param_1 + 0x10);
  }
  if (0 < lVar17) {
    if (0xffffffff < (long)param_2) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f74);
      (*pcVar10)();
    }
    if ((long)(param_3 | param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f78);
      (*pcVar10)();
    }
    if (0xffffffff < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f7c);
      (*pcVar10)();
    }
    uVar13 = (ulong)*(uint *)((long)unaff_x20 + 0xc);
    bVar1 = true;
    uVar15 = param_2 & 0xffffffff;
    while (((bool)((long)param_2 <= (long)param_3 ^ bVar1) || (uVar15 != param_3))) {
      if (*(ulong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f5c);
        (*pcVar10)();
      }
      plVar16 = (long *)(param_1 + 0x20 + uVar15 * 0x18);
      if (*plVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f80);
        (*pcVar10)();
      }
      uVar15 = *(ulong *)(param_1 + 0x10) + 0x1ffffffff & uVar15 + 1;
      if (uVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f60);
        (*pcVar10)();
      }
      lVar17 = plVar16[1];
      bVar1 = (long)param_2 <= (long)uVar15;
      uVar18 = (ulong)(uint)((int)((ulong)lVar17 >> 0x20) - (int)lVar17);
      bVar11 = SCARRY8(uVar13,uVar18);
      uVar13 = uVar13 + uVar18;
      if (bVar11) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100637d98);
        (*pcVar10)();
      }
    }
    FUN_100611328();
    _swift_retain(param_1);
    uVar13 = param_2;
    if (((param_2 & 0xffffffff) != param_3) || ((long)param_3 < (long)param_2)) {
      do {
        uVar13 = uVar13 & 0xffffffff;
        if (*(ulong *)(param_1 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f64);
          (*pcVar10)();
        }
        plVar16 = (long *)(param_1 + 0x20 + uVar13 * 0x18);
        lVar17 = *plVar16;
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f84);
          (*pcVar10)();
        }
        uVar13 = *(ulong *)(param_1 + 0x10) - 1 & uVar13 + 1;
        if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f68);
          (*pcVar10)();
        }
        uVar15 = plVar16[1];
        bVar5 = *(byte *)((long)plVar16 + 0x16);
        uVar9 = *(uint7 *)(plVar16 + 2);
        uVar4 = *(uint *)((long)unaff_x20 + 0xc);
        uVar18 = uVar15 & 0xffffffff;
        _swift_beginAccess(lVar17 + 0x18,auStack_78,0,0);
        sVar20 = (uVar15 >> 0x20) - uVar18;
        uVar19 = (uint)sVar20;
        if (CARRY4(uVar4,uVar19)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f6c);
          (*pcVar10)();
        }
        lVar14 = *(long *)(lVar17 + 0x18);
        _swift_retain(lVar17);
        uVar15 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar12 = (uint)uVar15;
        if ((uVar15 & 1) == 0) {
          iVar2 = 0;
          if ((uint)unaff_x20[2] <= uVar4 + uVar19) {
            iVar2 = (uVar4 + uVar19) - (uint)unaff_x20[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar2,uVar12 & 1);
        }
        FUN_100612380(sVar20,uVar4);
        uVar21 = *unaff_x20;
        uVar15 = unaff_x20[2];
        uVar7 = *(undefined2 *)((long)unaff_x20 + 0x14);
        uVar6 = *(undefined1 *)((long)unaff_x20 + 0x16);
        _swift_beginAccess(uVar21 + 0x18,auStack_90,0,0);
        uVar8 = (uint)CONCAT21(uVar7,uVar6);
        uVar12 = (int)uVar15 - uVar8;
        if (uVar4 <= uVar12) {
          uVar12 = uVar4;
        }
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar12;
        }
        _memmove((void *)(*(long *)(uVar21 + 0x18) + (ulong)uVar8 + (ulong)uVar3),
                 (void *)(lVar14 + (((ulong)uVar9 & 0xffff00000000) >> 0x18 | (ulong)bVar5) + uVar18
                         ),sVar20);
        _swift_release(lVar17);
        if (CARRY4(*(uint *)((long)unaff_x20 + 0xc),uVar19)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100637f70);
          (*pcVar10)();
        }
        *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + uVar19;
      } while (((long)param_2 <= (long)param_3 != (long)param_2 <= (long)uVar13) ||
              (uVar13 != param_3));
    }
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100637f84 | FUN_100637f84 */

void FUN_100637f84(undefined8 *param_1)

{
  long lVar1;
  undefined1 *unaff_x20;
  
  *unaff_x20 = 1;
  if (*(int *)((long)param_1 + 0xc) == *(int *)(param_1 + 1)) {
    if (*(long *)(unaff_x20 + 0x10) != *(long *)(unaff_x20 + 0x18)) {
      FUN_100613674();
      lVar1 = *(long *)(unaff_x20 + 8);
      FUN_100637cb4(lVar1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
      FUN_1006379d8(*(ulong *)(lVar1 + 0x10) < 0x10);
      FUN_100637820(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
    }
  }
  else {
    FUN_1006378f4(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
  }
  return;
}



/* Address: 0x100638044 | FUN_100638044 */

void FUN_100638044(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  FUN_1001a7d78(*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100638058 | FUN_100638058 */

void FUN_100638058(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7dac(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100638064 | FUN_100638064 */

void FUN_100638064(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7d88(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x100638070 | FUN_100638070 */

void FUN_100638070(__int64 param_1,long param_2)

{
  Hasher HVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1001a7d88(HVar1.unknown,*unaff_x20,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006380b4 | FUN_1006380b4 */

long FUN_1006380b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  lVar1 = *(long *)(lVar3 + 0x40);
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  _swift_allocObject();
  FUN_1006381a4(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),0,1);
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return unaff_x20;
}



/* Address: 0x100638150 | FUN_100638150 */

undefined8 FUN_100638150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1006381a4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1006381a4 | FUN_1006381a4 */

void FUN_1006381a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 local_70;
  
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x50);
  local_c0 = param_2;
  local_b4 = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar6 = (long)&local_c0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar5 + 0x60);
  lVar5 = *(long *)(lVar7 + -8);
  pcVar10 = *(code **)(lVar5 + 0x38);
  (*pcVar10)((long)unaff_x20 + lVar9,1,1,lVar7);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  uVar3 = 1;
  FUN_1006322b8(1);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_70 = 0xff00;
  puVar4 = &local_b0;
  FUN_1005d8e90(puVar4,uVar3 & 0xffffffff);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = puVar4;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = 0;
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x2f) = 0;
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  (**(code **)(lVar5 + 0x20))(lVar6,param_1,lVar7);
  (*pcVar10)(lVar6,0,1,lVar7);
  _swift_beginAccess((long)unaff_x20 + lVar9,&local_b0,0x21,0);
  (**(code **)(lVar8 + 0x28))((long)unaff_x20 + lVar9,lVar6,CONCAT71(extraout_var,OVar2.value));
  _swift_endAccess(&local_b0);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  *puVar1 = local_c0;
  *(char *)(puVar1 + 1) = (char)local_b4;
  return;
}



/* Address: 0x10063834c | FUN_10063834c */

void FUN_10063834c(void)

{
  undefined8 *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *(long *)(*unaff_x20 + 0x60);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            ((long)unaff_x20 + lVar3,CONCAT71(extraout_var,OVar2.value));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  FUN_10063a718(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  FUN_10063a728(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                (ulong)*(uint7 *)(puVar1 + 6));
  FUN_10063a758((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  return;
}



/* Address: 0x1006383f0 | FUN_1006383f0 */

void FUN_1006383f0(void)

{
  FUN_100639ee8(FUN_10063834c);
  return;
}



/* Address: 0x1006383fc | FUN_1006383fc */

void FUN_1006383fc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  TargetResilientWitness *pTVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_88 [40];
  
  lVar8 = *unaff_x20;
  lVar9 = *(long *)(lVar8 + 0x50);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,param_1,lVar9,0x100cb86dc,&TargetProtocolRequirement_100cb86ec);
  local_158 = *(long *)(lVar4 + -8);
  puVar10 = auStack_160 + -(*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(lVar8 + 0x70));
  lVar11 = *(long *)(lVar8 + 0x60);
  local_150 = lVar4;
  local_140 = lVar8;
  _swift_beginAccess(puVar1,auStack_88,0,0);
  local_148 = lVar9;
  while( true ) {
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    uVar12 = puVar1[2];
    lVar4 = uVar12 - uVar2;
    if ((long)uVar12 < (long)uVar2) {
      lVar4 = lVar4 + *(long *)(uVar5 + 0x10);
    }
    if (lVar4 < 1) {
      return;
    }
    _swift_beginAccess(puVar1,auStack_e8,0x21,0);
    if (uVar12 == uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006386ec);
      (*pcVar3)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006386f0);
      (*pcVar3)();
    }
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006386f4);
      (*pcVar3)();
    }
    uVar7 = *(ulong *)(uVar5 + 0x10);
    if (uVar7 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006386f8);
      (*pcVar3)();
    }
    FUN_1000f8cac(uVar5 + uVar2 * 0x48 + 0x20,&local_130,&DAT_100fd4db0,&DAT_100c659e0);
    if (0xfe < local_f0._1_1_) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100638704);
      (*pcVar3)();
    }
    uStack_a8 = uStack_108;
    local_b0 = local_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    local_90 = local_f0;
    uStack_c8 = uStack_128;
    local_d0 = local_130;
    uStack_b8 = uStack_118;
    uStack_c0 = local_120;
    if ((long)uVar2 <= (long)uVar12) {
      uVar7 = 0;
    }
    if ((long)((uVar12 - uVar2) + uVar7) < 1) break;
    uVar12 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *puVar1 = uVar5;
    if ((uVar12 & 1) == 0) {
      FUN_100651eec();
    }
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    local_f0 = 0xff00;
    *puVar1 = uVar5;
    if (*(ulong *)(uVar5 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100638700);
      (*pcVar3)();
    }
    FUN_1004375f4(&local_130,uVar5 + uVar2 * 0x48 + 0x20,&DAT_100fd4db0,&DAT_100c659e0);
    *puVar1 = uVar5;
    puVar1[1] = *(long *)(uVar5 + 0x10) + 0x1ffffffffU & uVar2 + 1;
    _swift_endAccess(auStack_e8);
    lVar4 = local_140;
    pTVar6 = &TargetResilientWitness_100c69dfc;
    local_138 = param_1;
    _swift_getWitnessTable(&TargetResilientWitness_100c69dfc,local_140,&local_138);
    thunk_FUN_10066a214(puVar10,&local_d0,lVar4,pTVar6);
    FUN_1005e70f4(&local_d0);
    _swift_beginAccess((long)unaff_x20 + lVar11,&local_d0,0x21,0);
    lVar8 = local_148;
    lVar4 = (long)unaff_x20 + lVar11;
    (**(code **)(*(long *)(local_148 + -8) + 0x30))(lVar4,1,local_148);
    if ((int)lVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100638708);
      (*pcVar3)();
    }
    (**(code **)(param_1 + 0x18))(puVar10,lVar8,param_1);
    _swift_endAccess(&local_d0);
    (**(code **)(local_158 + 8))(puVar10,local_150);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006386fc);
  (*pcVar3)();
}



/* Address: 0x100638708 | FUN_100638708 */

void FUN_100638708(undefined8 param_1,long param_2)

{
  FUN_1006383fc(*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x10063872c | FUN_10063872c */

void FUN_10063872c(undefined *param_1,long *param_2,ulong *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_78 [24];
  
  lVar4 = *param_2;
  lVar5 = *(long *)(lVar4 + 0x60);
  _swift_beginAccess((long)param_2 + lVar5,auStack_78,0x21,0);
  lVar2 = *(long *)(lVar4 + 0x50);
  Swift::Optional::typeMetadataAccessor();
  Swift::_swap(param_1,(undefined *)((long)param_2 + lVar5));
  _swift_endAccess(auStack_78);
  if ((*(int *)((long)param_3 + 0xc) != (int)param_3[1]) && (*param_4 == '\x01')) {
    uVar3 = *param_3;
    _swift_beginAccess((long)param_2 + lVar5,auStack_78,0x21,0);
    lVar5 = (long)param_2 + lVar5;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar5,1,lVar2);
    if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006388bc);
      (*pcVar6)();
    }
    pcVar6 = *(code **)(*(long *)(lVar4 + 0x58) + 0x30);
    uVar1 = uVar3;
    _swift_retain();
    (*pcVar6)();
    _swift_endAccess(auStack_78);
    _swift_release(uVar3);
    if ((uVar1 & 1) != 0) {
      FUN_100613674();
    }
  }
  lVar5 = (long)param_2 + *(long *)(*param_2 + 0x88);
  _swift_beginAccess(lVar5,auStack_78,0x21,0);
  if (*(long *)(lVar5 + 8) != 0) {
    FUN_100637f84(param_3);
    _swift_endAccess(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1006388b8);
  (*pcVar6)();
}



/* Address: 0x1006388bc | FUN_1006388bc */

/* WARNING: Removing unreachable block (ram,0x000100638908) */
/* WARNING: Removing unreachable block (ram,0x00010063892c) */
/* WARNING: Removing unreachable block (ram,0x00010063897c) */

void FUN_1006388bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  if (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) == 0) {
    FUN_1006389b0(param_1,1);
    uVar1 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
    if (((uint)param_1 & 0xff) == 2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = uVar2;
    FUN_10063a718(uVar1);
    return;
  }
  return;
}



/* Address: 0x1006389b0 | FUN_1006389b0 */

void FUN_1006389b0(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined3 uVar8;
  byte bVar9;
  code *pcVar10;
  Optional OVar11;
  undefined7 extraout_var;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long unaff_x21;
  ulong uVar22;
  undefined *puVar23;
  undefined auStack_130 [8];
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  uint local_fc;
  undefined1 local_b9;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  char local_a2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [31];
  byte local_69 [9];
  long lVar12;
  
  lVar20 = *unaff_x20;
  local_108 = *(long *)(lVar20 + 0x50);
  local_120 = param_1;
  OVar11 = Swift::Optional::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,OVar11.value);
  local_118 = *(long *)(lVar12 + -8);
  puVar23 = auStack_130 + -(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_69[0] = ((uint)param_2 & 0xff) == 1;
  local_128 = *(long *)(lVar20 + 0x80);
  pcVar1 = (char *)((long)unaff_x20 + *(long *)(lVar20 + 0x88));
  local_110 = *(long *)(lVar20 + 0x60);
  lVar4 = *(long *)(lVar20 + 0x78);
  plVar2 = (long *)((long)unaff_x20 + *(long *)(lVar20 + 0x70));
  _swift_beginAccess(plVar2,auStack_88,0,0);
  local_fc = (uint)param_2;
  do {
    bVar9 = local_69[0];
    if (*(long *)((long)unaff_x20 + lVar4) == 0) {
      if (*(char *)((long)unaff_x20 + local_128) != '\x01' && ((uint)param_2 & 0xff) != 1) {
        return;
      }
    }
    else if (((uint)param_2 & 0xff) != 1) {
      return;
    }
    _swift_beginAccess(pcVar1,auStack_a0,0x21,0);
    uVar22 = *(ulong *)(pcVar1 + 8);
    if (uVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ef8);
      (*pcVar10)();
    }
    if (*pcVar1 != '\x01') {
      _swift_endAccess(auStack_a0);
      return;
    }
    uVar15 = *(ulong *)(pcVar1 + 0x10);
    uVar5 = *(ulong *)(pcVar1 + 0x18);
    lVar20 = uVar5 - uVar15;
    if ((long)uVar5 < (long)uVar15) {
      lVar20 = lVar20 + *(long *)(uVar22 + 0x10);
    }
    if (lVar20 < 1) {
      if ((bVar9 & 1) != 0) {
        *pcVar1 = '\0';
        lVar20 = *(long *)(pcVar1 + 0x20);
        uVar18 = *(undefined8 *)(pcVar1 + 0x28);
        uVar17 = *(undefined4 *)(pcVar1 + 0x30);
        uVar7 = *(undefined2 *)(pcVar1 + 0x34);
        cVar6 = pcVar1[0x36];
        _swift_retain(lVar20);
        goto LAB_100638d08;
      }
LAB_100638e18:
      _swift_endAccess(auStack_a0);
LAB_100638e20:
      lVar20 = plVar2[2] - plVar2[1];
      if (plVar2[2] < plVar2[1]) {
        lVar20 = lVar20 + *(long *)(*plVar2 + 0x10);
      }
      if (lVar20 < 1) {
        return;
      }
    }
    else {
      if (uVar5 == uVar15) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ee0);
        (*pcVar10)();
      }
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ee4);
        (*pcVar10)();
      }
      if (uVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ee8);
        (*pcVar10)();
      }
      uVar16 = *(ulong *)(uVar22 + 0x10);
      if (uVar16 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638eec);
        (*pcVar10)();
      }
      lVar20 = uVar22 + uVar15 * 0x18;
      lVar21 = *(long *)(lVar20 + 0x20);
      if (lVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638efc);
        (*pcVar10)();
      }
      if ((long)uVar15 <= (long)uVar5) {
        uVar16 = 0;
      }
      if ((long)((uVar5 - uVar15) + uVar16) < 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ef0);
        (*pcVar10)();
      }
      uVar18 = *(undefined8 *)(lVar20 + 0x28);
      uVar8 = *(undefined3 *)(lVar20 + 0x34);
      uVar17 = *(undefined4 *)(lVar20 + 0x30);
      _swift_retain(lVar21);
      uVar16 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(pcVar1 + 8) = uVar22;
      if ((uVar16 & 1) == 0) {
        FUN_100651f00();
      }
      *(ulong *)(pcVar1 + 8) = uVar22;
      if (*(ulong *)(uVar22 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638ef4);
        (*pcVar10)();
      }
      lVar20 = uVar22 + uVar15 * 0x18;
      uVar13 = *(undefined8 *)(lVar20 + 0x20);
      *(undefined8 *)(lVar20 + 0x20) = 0;
      *(undefined8 *)(lVar20 + 0x28) = 0;
      *(undefined8 *)(lVar20 + 0x2f) = 0;
      _swift_release(uVar13);
      *(ulong *)(pcVar1 + 8) = uVar22;
      uVar16 = *(long *)(uVar22 + 0x10) + 0x1ffffffffU & uVar15 + 1;
      *(ulong *)(pcVar1 + 0x10) = uVar16;
      local_a4 = (undefined2)uVar8;
      local_a2 = (char)((uint3)uVar8 >> 0x10);
      local_b8 = lVar21;
      local_b0 = uVar18;
      local_a8 = uVar17;
      FUN_100637cb4(uVar22,uVar16,uVar5);
      puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar15 = *(ulong *)(uVar22 + 0x10);
      if (uVar15 < 0x10) {
        if ((long)uVar16 <= (long)uVar5) {
          uVar15 = 0;
        }
        FUN_100637a8c((uVar5 - uVar16) + uVar15);
        uVar3 = local_fc;
      }
      else {
        *(undefined **)(pcVar1 + 8) = PTR___swiftEmptyArrayStorage_100eae0d8;
        _swift_release(uVar22);
        *(undefined **)(pcVar1 + 8) = puVar14;
        FUN_100624f78(0,1,1);
        uVar3 = local_fc;
        lVar20 = *(long *)(pcVar1 + 8);
        uVar22 = *(ulong *)(lVar20 + 0x10);
        if (*(ulong *)(lVar20 + 0x18) >> 1 <= uVar22) {
          FUN_100624f78(1 < *(ulong *)(lVar20 + 0x18),uVar22 + 1,1);
          lVar20 = *(long *)(pcVar1 + 8);
        }
        *(ulong *)(lVar20 + 0x10) = uVar22 + 1;
        lVar21 = lVar20 + uVar22 * 0x18;
        *(undefined8 *)(lVar21 + 0x20) = 0;
        *(undefined8 *)(lVar21 + 0x28) = 0;
        *(undefined8 *)(lVar21 + 0x2f) = 0;
        *(long *)(pcVar1 + 8) = lVar20;
      }
      param_2 = (ulong)uVar3;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      if (local_b0._4_4_ == (int)local_b0 && (bVar9 & 1) == 0) {
        _swift_release(local_b8);
        goto LAB_100638e18;
      }
      *pcVar1 = '\0';
      lVar20 = local_b8;
      uVar18 = local_b0;
      uVar17 = local_a8;
      uVar7 = local_a4;
      cVar6 = local_a2;
LAB_100638d08:
      _swift_endAccess(auStack_a0);
      lVar21 = local_108;
      local_b9 = 0;
      lVar19 = *(long *)(local_108 + -8);
      local_b8 = lVar20;
      local_b0 = uVar18;
      local_a8 = uVar17;
      local_a4 = uVar7;
      local_a2 = cVar6;
      (**(code **)(lVar19 + 0x38))(puVar23,1,1,local_108);
      lVar20 = local_110;
      _swift_beginAccess((long)unaff_x20 + local_110,auStack_a0,0x21,0);
      Swift::_swap(puVar23,(undefined *)((long)unaff_x20 + lVar20));
      _swift_endAccess(auStack_a0);
      puVar14 = puVar23;
      (**(code **)(lVar19 + 0x30))(puVar23,1,lVar21);
      if ((int)puVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100638f00);
        (*pcVar10)();
      }
      puVar14 = puVar23;
      FUN_100638fd8(puVar23,&local_b8,param_2,unaff_x20,local_120,local_69);
      if (unaff_x21 != 0) {
        FUN_10063872c(puVar23,unaff_x20,&local_b8,&local_b9);
        _swift_release(local_b8);
        (**(code **)(local_118 + 8))(puVar23,lVar12);
        return;
      }
      uVar3 = (uint)puVar14 & 0xff;
      local_b9 = uVar3 == 1;
      FUN_10063872c(puVar23,unaff_x20,&local_b8,&local_b9);
      _swift_release(local_b8);
      (**(code **)(local_118 + 8))(puVar23,lVar12);
      if (uVar3 == 1) goto LAB_100638e20;
    }
    FUN_100638f00();
  } while( true );
}



/* Address: 0x100638f00 | FUN_100638f00 */

void FUN_100638f00(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar3 = plVar1[2] - plVar1[1];
  if (plVar1[2] < plVar1[1]) {
    lVar3 = lVar3 + *(long *)(*plVar1 + 0x10);
  }
  if (0 < lVar3) {
    lVar3 = *(long *)(*unaff_x20 + 0x98);
    _swift_beginAccess((long)unaff_x20 + lVar3,auStack_60,0,0);
    FUN_1000f8cac((long)unaff_x20 + lVar3,auStack_88,&DAT_100fd7cf0,0x100c69c90);
    if (local_70 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100638fd8);
      (*pcVar2)();
    }
    FUN_100004640(auStack_88,local_70);
    (**(code **)(local_68 + 8))(local_70,local_68);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x100638fd8 | FUN_100638fd8 */

void FUN_100638fd8(undefined8 param_1,long param_2,char param_3,long *param_4,undefined8 param_5,
                  undefined1 *param_6)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = *(long *)(*param_4 + 0x58);
  if (param_3 == '\0') {
    (**(code **)(lVar1 + 0x10))(param_5,param_2,*(undefined8 *)(*param_4 + 0x50),lVar1);
  }
  else {
    *param_6 = 0;
    (**(code **)(lVar1 + 0x18))
              (param_5,param_2,*(undefined1 *)((long)param_4 + *(long *)(*param_4 + 0x90)));
  }
  if ((((unaff_x21 == 0) && (((uint)param_5 & 0xff) == 1)) &&
      (param_4 = (long *)((long)param_4 + *(long *)(*param_4 + 0x68)), (char)param_4[1] != '\x01'))
     && (*param_4 < (long)(ulong)(uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)))) {
    FUN_10063b2bc();
    _swift_allocError(&DAT_100eee740,param_5,0,0);
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1006390cc | FUN_1006390cc */

void FUN_1006390cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long *unaff_x20;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_78 [24];
  
  lVar19 = *unaff_x20;
  if (*(char *)((long)unaff_x20 + *(long *)(lVar19 + 0x80)) != '\0') {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100639384);
    (*pcVar17)();
  }
  lVar16 = *(long *)(lVar19 + 0x50);
  *(undefined1 *)((long)unaff_x20 + *(long *)(lVar19 + 0x80)) = 1;
  lVar21 = *(long *)(param_1 + 0x20);
  lVar18 = *(long *)(lVar21 + 0x40);
  ppuVar20 = *(undefined ***)(lVar21 + 0x48);
  lVar10 = lVar18;
  if (lVar18 == 0) {
    lVar10 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar11 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar23 = *(undefined8 *)(lVar21 + 0x38);
    uVar22 = *(undefined8 *)(lVar21 + 0x30);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined ***)(lVar10 + 0x30) = ppuVar20;
    *(undefined2 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = uVar11;
    *(undefined ***)(lVar10 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar10 + 0x20) = lVar21;
    *(undefined8 *)(lVar10 + 0x18) = uVar23;
    *(undefined8 *)(lVar10 + 0x10) = uVar22;
    _swift_retain(lVar21);
    _swift_unknownObjectRetain(uVar22);
    ppuVar20 = &PTR_PTR_100eeeed8;
  }
  lVar21 = lVar10;
  _swift_getObjectType(lVar10);
  pcVar17 = (code *)ppuVar20[3];
  _swift_unknownObjectRetain(lVar18);
  (*pcVar17)(lVar21,ppuVar20);
  _swift_unknownObjectRelease(lVar10);
  if (DAT_100fd6f38 != -1) {
    _swift_once(&DAT_100fd6f38,FUN_100611c84);
  }
  uVar9 = DAT_101057be6;
  uVar8 = DAT_101057be4;
  uVar7 = DAT_101057be0;
  uVar6 = DAT_101057bd8;
  uVar5 = DAT_101057bd0;
  uVar12 = 4;
  FUN_1006322b8(4);
  _swift_retain(uVar5);
  uVar13 = 0;
  FUN_1005da068(0,0,0,uVar12 & 0xffffffff);
  puVar15 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  _swift_beginAccess(puVar15,auStack_78,1,0);
  uVar11 = *puVar15;
  uVar1 = puVar15[1];
  uVar22 = puVar15[2];
  uVar2 = puVar15[3];
  uVar23 = puVar15[4];
  uVar3 = puVar15[5];
  uVar4 = *(uint7 *)(puVar15 + 6);
  *puVar15 = 1;
  puVar15[1] = uVar13;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = uVar5;
  puVar15[5] = uVar6;
  *(undefined4 *)(puVar15 + 6) = uVar7;
  *(undefined1 *)((long)puVar15 + 0x36) = uVar9;
  *(undefined2 *)((long)puVar15 + 0x34) = uVar8;
  FUN_10063a728(uVar11,uVar1,uVar22,uVar2,uVar23,uVar3,(ulong)uVar4);
  _swift_retain();
  puVar14 = &DAT_100fd7cf8;
  FUN_1000f7830(&DAT_100fd7cf8,0x100c69c98);
  puVar15 = &local_b0;
  _swift_dynamicCast(puVar15,&stack0xffffffffffffff80,lVar19,puVar14,6);
  if (((ulong)puVar15 & 1) == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  lVar18 = *(long *)(*unaff_x20 + 0x98);
  _swift_beginAccess((long)unaff_x20 + lVar18,auStack_c8,0x21,0);
  FUN_1004375f4(&local_b0,(long)unaff_x20 + lVar18,&DAT_100fd7cf0,0x100c69c90);
  _swift_endAccess(auStack_c8);
  lVar18 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar18,&local_b0,0x21,0);
  lVar18 = (long)unaff_x20 + lVar18;
  (**(code **)(*(long *)(lVar16 + -8) + 0x30))(lVar18,1,lVar16);
  if ((int)lVar18 == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1006393a0);
    (*pcVar17)();
  }
  (**(code **)(*(long *)(lVar19 + 0x58) + 0x28))(param_1,lVar16);
  _swift_endAccess(&local_b0);
  return;
}



/* Address: 0x1006393a0 | FUN_1006393a0 */

void FUN_1006393a0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar4 = *unaff_x20;
  *(undefined1 *)((long)unaff_x20 + *(long *)(lVar4 + 0x80)) = 4;
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar4 + 0x50);
  if (*(ulong *)((long)unaff_x20 + *(long *)(lVar2 + 0x78)) < 2) {
    *(undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x78)) = 2;
    FUN_10063a718();
    lVar2 = *unaff_x20;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = *(long *)(lVar2 + 0x98);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_88,0x21,0);
  FUN_1004375f4(&local_70,(long)unaff_x20 + lVar2,&DAT_100fd7cf0,0x100c69c90);
  _swift_endAccess(auStack_88);
  lVar2 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar2,&local_70,0x21,0);
  lVar2 = (long)unaff_x20 + lVar2;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 != 1) {
    (**(code **)(*(long *)(lVar4 + 0x58) + 0x20))(param_1,lVar3);
    _swift_endAccess(&local_70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006394b4);
  (*pcVar1)();
}



/* Address: 0x1006394b4 | FUN_1006394b4 */

/* WARNING: Removing unreachable block (ram,0x000100639594) */
/* WARNING: Removing unreachable block (ram,0x0001006396c4) */
/* WARNING: Removing unreachable block (ram,0x0001006395b8) */

void FUN_1006394b4(long param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar5 = *unaff_x20;
  uVar4 = 0x100c69db0;
  _swift_getWitnessTable(0x100c69db0,lVar5);
  thunk_FUN_10066a0e4(&local_78,param_2,lVar5,uVar4);
  lVar5 = *(long *)(*unaff_x20 + 0x78);
  uVar6 = *(ulong *)((long)unaff_x20 + lVar5);
  if (uVar6 < 3) {
    lVar2 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x88);
    _swift_beginAccess(lVar2,&local_78,0x21,0);
    if (*(long *)(lVar2 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063971c);
      (*pcVar1)();
    }
    if (iStack_6c != local_70) {
      FUN_100637820(local_78,CONCAT44(iStack_6c,local_70),
                    (ulong)CONCAT16(local_62,CONCAT24(local_64,local_68)));
    }
    _swift_endAccess(&local_78);
    lVar2 = param_1;
    FUN_1006389b0(param_1,0);
    if (((((uint)lVar2 & 0xff) != 2) && (lVar5 = *(long *)((long)unaff_x20 + lVar5), lVar5 != 2)) &&
       (lVar5 == 1)) {
      FUN_1006389b0(param_1,1);
      if (((uint)param_1 & 0xff) == 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100639720);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
      *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = 2;
      FUN_10063a718(uVar4);
    }
    _swift_release(local_78);
  }
  else {
    FUN_10063a808();
    puVar3 = &DAT_100eee720;
    _swift_allocError(&DAT_100eee720,param_2,0,0);
    *param_2 = uVar6;
    param_2[1] = local_78;
    param_2[2] = CONCAT44(iStack_6c,local_70);
    *(undefined1 *)((long)param_2 + 0x1e) = local_62;
    *(undefined2 *)((long)param_2 + 0x1c) = local_64;
    *(undefined4 *)(param_2 + 3) = local_68;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      _swift_errorRetain(uVar6);
    }
    else {
      FUN_10063a848(uVar6);
      FUN_10063a848(uVar6);
      _swift_retain(local_78);
      _swift_retain(lVar5);
      FUN_10062b624(puVar3);
      _swift_release(local_78);
      FUN_10063a718(uVar6);
      _swift_release(lVar5);
    }
    _swift_errorRelease(puVar3);
  }
  return;
}



/* Address: 0x100639720 | FUN_100639720 */

void FUN_100639720(long param_1)

{
  long *unaff_x20;
  long lVar1;
  
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = 1;
  FUN_1006388bc();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b234();
    _swift_release(lVar1);
    return;
  }
  return;
}


