/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006e203c | FUN_1006e203c */

void FUN_1006e203c(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x1006e2080 | FUN_1006e2080 */

void FUN_1006e2080(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e208c | FUN_1006e208c */

void FUN_1006e208c(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocObject();
  return;
}



/* Address: 0x1006e20b0 | FUN_1006e20b0 */

void FUN_1006e20b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006e1e60(plVar1,param_1,param_2,param_3,unaff_x20 + 0x18,uVar2);
  return;
}



/* Address: 0x1006e2134 | FUN_1006e2134 */

void FUN_1006e2134(undefined8 param_1,undefined8 param_2)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001006e2148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x4 + -8) + 0x10))(param_1,param_2,in_x4);
  return;
}



/* Address: 0x1006e214c | FUN_1006e214c */

void FUN_1006e214c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_x5;
  long in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 in_stack_00000000;
  
  lVar3 = *(long *)(in_x6 + -8);
  lVar2 = in_x5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40),param_2,param_2);
  puVar1 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar2);
  (**(code **)(lVar3 + 0x10))(puVar1,param_3,in_x6);
  FUN_1006e2320(param_1,lVar2,puVar1,in_x5,in_x6,in_x7,in_stack_00000000);
  return;
}



/* Address: 0x1006e2240 | FUN_1006e2240 */

void FUN_1006e2240(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x4;
  undefined8 in_x5;
  long extraout_x8;
  long extraout_x12;
  
  Swift::Optional::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffc0 + -extraout_x12,param_2);
  FUN_1006e2d7c(param_1,&stack0xffffffffffffffc0 + -extraout_x12,in_x4,in_x5);
  return;
}



/* Address: 0x1006e22d8 | FUN_1006e22d8 */

undefined8 FUN_1006e22d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  
  uVar1 = param_1;
  FUN_100004520(param_1,in_x4,in_x5);
  _swift_bridgeObjectRetain(param_1);
  return uVar1;
}



/* Address: 0x1006e2310 | FUN_1006e2310 */

void FUN_1006e2310(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e231c | thunk_FUN_1006e2134 */

void thunk_FUN_1006e2134(void)

{
  FUN_1006e2134();
  return;
}



/* Address: 0x1006e2320 | FUN_1006e2320 */

void FUN_1006e2320(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  lVar1 = 0;
  local_60 = param_4;
  lStack_58 = param_5;
  local_50 = param_6;
  uStack_48 = param_7;
  FUN_1006e23ac(0,&local_60);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x34),param_3,param_5);
  return;
}



/* Address: 0x1006e23ac | FUN_1006e23ac */

void FUN_1006e23ac(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbc0c8);
  return;
}



/* Address: 0x1006e23b8 | FUN_1006e23b8 */

void FUN_1006e23b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_1006e23dc,0,0);
  return;
}



/* Address: 0x1006e23dc | FUN_1006e23dc */

void FUN_1006e23dc(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(lVar2 + 0x18);
  lVar6 = *(long *)(lVar2 + 0x20);
  *(long *)(unaff_x22 + 0x30) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x70);
  piVar4 = *(int **)(lVar6 + 0x20);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006e2490;
                    /* WARNING: Could not recover jumptable at 0x0001006e248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68),&UNK_100c722c0,unaff_x22 + 0x10,uVar5,lVar6);
  return;
}



/* Address: 0x1006e2490 | FUN_1006e2490 */

void FUN_1006e2490(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001006e24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1006e24d4 | FUN_1006e24d4 */

void FUN_1006e24d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_9;
  *(long *)(unaff_x22 + 0x28) = param_10;
  FUN_1006e23ac();
  piVar3 = *(int **)(param_10 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006a2030;
                    /* WARNING: Could not recover jumptable at 0x0001006e25ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,param_1,param_2,param_3,param_5,param_6,param_8,param_10);
  return;
}



/* Address: 0x1006e25b0 | FUN_1006e25b0 */

void FUN_1006e25b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1006e24d4(plVar7,param_1,param_2,param_3,uVar3,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x1006e2668 | FUN_1006e2668 */

void FUN_1006e2668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006e23b8(plVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1006e2700 | FUN_1006e2700 */

void FUN_1006e2700(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c722d0;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006e272c | FUN_1006e272c */

void FUN_1006e272c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
    }
  }
  return;
}



/* Address: 0x1006e27b8 | FUN_1006e27b8 */

long * FUN_1006e27b8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar1 = *(long *)(lVar4 + 0x40) + uVar5;
  uVar3 = *(uint *)(lVar4 + 0x50) | *(uint *)(lVar7 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1);
    (**(code **)(lVar7 + 0x10))(uVar1 + (long)param_1 & ~uVar5,uVar1 + (long)param_2 & ~uVar5,lVar6)
    ;
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006e2884 | FUN_1006e2884 */

long FUN_1006e2884(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar2;
  (**(code **)(lVar1 + 0x10))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006e28f0 | FUN_1006e28f0 */

long FUN_1006e28f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x18))();
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar2;
  (**(code **)(lVar1 + 0x18))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006e295c | FUN_1006e295c */

long FUN_1006e295c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar2;
  (**(code **)(lVar1 + 0x20))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006e29c8 | FUN_1006e29c8 */

long FUN_1006e29c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x28))();
  lVar1 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar2;
  (**(code **)(lVar1 + 0x28))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006e2a34 | FUN_1006e2a34 */

uint * FUN_1006e2a34(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar9 + 0x54);
  lVar10 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = *(long *)(lVar9 + 0x40) + uVar11;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1006e2af8;
  lVar2 = (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar8 = (uint)lVar2;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar12 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (0xff < uVar12) {
      if (uVar12 >> 0x10 == 0) {
        uVar12 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar12 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_1006e2a90;
    }
    if (1 < uVar12) goto LAB_1006e2a8c;
  }
  else {
LAB_1006e2a8c:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1006e2a90:
    if (uVar12 != 0) {
      uVar4 = 0;
      if (uVar8 < 4) {
        uVar4 = uVar12 - 1 << (ulong)(uVar5 & 0x1f);
      }
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar8 < 4) {
          uVar7 = uVar8;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar7 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1006e2af8:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001006e2b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))(param_1,uVar4);
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001006e2b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Address: 0x1006e2b80 | FUN_1006e2b80 */

void FUN_1006e2b80(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar10 + 0x54);
  lVar11 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar11 + 0x54);
  uVar3 = uVar5;
  if (uVar5 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar1 = *(long *)(lVar10 + 0x40) + uVar12;
  sVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar13 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar15 = 0;
  }
  else if (uVar13 < 4) {
    uVar7 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar15 = 2;
    if (0xffff < uVar7) {
      bVar15 = 4;
    }
    if (uVar7 < 0x100) {
      bVar15 = 1 < uVar7;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar7 = (uint)param_2;
  if (uVar3 < uVar7) {
    uVar7 = uVar7 + ~uVar3;
    if (uVar13 < 4) {
      iVar14 = (uVar7 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar3 = uVar7 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar6 = (undefined2)uVar3;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar6;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar6;
        }
        else {
          *(char *)param_1 = (char)uVar7;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar7;
      iVar14 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar14;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar14;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar7 != 0) {
      if (uVar4 < uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar12);
        lVar8 = lVar9;
        uVar4 = uVar5;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001006e2d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar4,lVar8);
      return;
    }
  }
  return;
}



/* Address: 0x1006e2d7c | FUN_1006e2d7c */

void FUN_1006e2d7c(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006e2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x20))
            (param_1,param_2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1006e2db8 | FUN_1006e2db8 */

void FUN_1006e2db8(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006e2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1006e2df4 | FUN_1006e2df4 */

void FUN_1006e2df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar4 = *(long *)(param_6 + 0x10);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar3 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  _swift_task_switch(FUN_1006e2e90,0,0);
  return;
}



/* Address: 0x1006e2e90 | FUN_1006e2e90 */

void FUN_1006e2e90(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar6 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (uVar3,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar6 + 0x30))(uVar3,1,uVar2);
  if ((int)uVar3 == 1) {
    piVar5 = *(int **)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
              (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1006e3080;
                    /* WARNING: Could not recover jumptable at 0x0001006e2f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (plVar4,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
               *(undefined8 *)(unaff_x22 + 0x20));
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x48));
  lVar6 = *(long *)(lVar6 + 0x18);
  piVar5 = *(int **)(lVar6 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1006e2fc4;
                    /* WARNING: Could not recover jumptable at 0x0001006e2fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x48),lVar6);
  return;
}



/* Address: 0x1006e2fc4 | FUN_1006e2fc4 */

void FUN_1006e2fc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e3028;
  }
  else {
    pcVar1 = FUN_1006e30d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e3028 | FUN_1006e3028 */

void FUN_1006e3028(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e3080 | FUN_1006e3080 */

void FUN_1006e3080(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x70));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006e30d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006e30d8 | FUN_1006e30d8 */

void FUN_1006e30d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e3130 | FUN_1006e3130 */

void FUN_1006e3130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006e2df4(plVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1006e31c8 | FUN_1006e31c8 */

void FUN_1006e31c8(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72380;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006e31f4 | FUN_1006e31f4 */

undefined1  [16] FUN_1006e31f4(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1006e3260 | FUN_1006e3260 */

void FUN_1006e3260(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e326c | FUN_1006e326c */

void FUN_1006e326c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  plVar3 = (long *)0xf0;
  _swift_bridgeObjectRetain(param_6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006e3354;
  FUN_1006e3404(param_1,(undefined8 *)(unaff_x22 + 0x10),param_2,param_3,param_4,param_5,param_7,
                uVar1,param_8,puVar2);
  return;
}



/* Address: 0x1006e3354 | FUN_1006e3354 */

void FUN_1006e3354(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006e33c8,0,0);
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001006e33c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1006e33c8 | FUN_1006e33c8 */

void FUN_1006e33c8(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001006e3400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e3404 | FUN_1006e3404 */

void FUN_1006e3404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_10;
  *(long *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xa8) = CONCAT71(extraout_var,OVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar3 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  _swift_task_switch(FUN_1006e34a4,0,0);
  return;
}



/* Address: 0x1006e34a4 | FUN_1006e34a4 */

void FUN_1006e34a4(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar9 = *(long *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  (extension_Swift)::Swift::Collection::_get_first();
  (**(code **)(lVar9 + 0x30))(uVar4,1,uVar5);
  if ((int)uVar4 == 1) {
    piVar3 = *(int **)(unaff_x22 + 0x78);
    (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa8));
    iVar1 = *piVar3;
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1006e36d0;
                    /* WARNING: Could not recover jumptable at 0x0001006e3560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar3))
              (plVar2,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x68),
               *(undefined8 *)(unaff_x22 + 0x70));
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar9 = *(long *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20))
            (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb8),uVar5);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(long *)(unaff_x22 + 0x30) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  piVar3 = *(int **)(lVar9 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006e3614;
                    /* WARNING: Could not recover jumptable at 0x0001006e3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x68),
             *(undefined8 *)(unaff_x22 + 0x70),&UNK_100c724b8,unaff_x22 + 0x10,
             *(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x1006e3614 | FUN_1006e3614 */

void FUN_1006e3614(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e3678;
  }
  else {
    pcVar1 = switchD_1006c4b30::caseD_d6;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e3678 | FUN_1006e3678 */

void FUN_1006e3678(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
            (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e36cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e36d0 | FUN_1006e36d0 */

void FUN_1006e36d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xe0));
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 200));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006e3724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006e3728 | switchD_1006c4b30::caseD_d6 */

void switchD_1006c4b30::caseD_d6(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
            (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e3780 | FUN_1006e3780 */

void FUN_1006e3780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(long *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  _swift_task_switch(FUN_1006e3838,0,0);
  return;
}



/* Address: 0x1006e3838 | FUN_1006e3838 */

void FUN_1006e3838(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x28),uVar4);
  (extension_Swift)::Swift::Collection::_dropFirst(1);
  plVar2 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  *plVar2 = unaff_x22;
  plVar2[1] = (long)switchD_1006c4b30::caseD_68;
  FUN_1006e3404(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x80),
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined8 *)(unaff_x22 + 0x50),uVar3);
  return;
}



/* Address: 0x1006e3918 | switchD_1006c4b30::caseD_68 */

void switchD_1006c4b30::caseD_68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006e39ac,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  (**(code **)(*(long *)(lVar3 + 0x78) + 8))(uVar2,*(undefined8 *)(lVar3 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e39a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1006e39ac | FUN_1006e39ac */

void FUN_1006e39ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006e3a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e3a04 | FUN_1006e3a04 */

void FUN_1006e3a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *unaff_x20;
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = *(undefined8 *)(param_6 + 0x18);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1006e326c(plVar3,param_1,param_2,param_3,param_4,param_5,uVar4,uVar1,uVar2);
  return;
}



/* Address: 0x1006e3aa4 | FUN_1006e3aa4 */

void FUN_1006e3aa4(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72428;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006e3ad0 | FUN_1006e3ad0 */

void FUN_1006e3ad0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e3adc | FUN_1006e3adc */

void FUN_1006e3adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1006e3780(plVar7,param_1,param_2,param_3,uVar3,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x1006e3b8c | FUN_1006e3b8c */

undefined * FUN_1006e3b8c(long param_1)

{
  _HashTable _Var1;
  void *pvVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  Bucket BVar6;
  Substring SVar7;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  String SVar19;
  void *pvVar8;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    FUN_1006bf860(0,lVar14,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar6 = Swift::_HashTable::get_startBucket(_Var1);
    lVar11 = 0;
    do {
      if ((ulong)BVar6.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006e3de8);
        (*pcVar5)();
      }
      uVar13 = (ulong)BVar6.offset >> 6;
      uVar18 = 1L << (BVar6.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar18) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006e3dec);
        (*pcVar5)();
      }
      iVar3 = *(int *)(param_1 + 0x24);
      puVar12 = (ulong *)(*(long *)(param_1 + 0x30) + BVar6.offset * 0x10);
      pvVar8 = (void *)*puVar12;
      uVar16 = puVar12[1];
      pvVar2 = pvVar8;
      if ((uVar16 & 0x2000000000000000) != 0) {
        pvVar2 = (void *)(uVar16 >> 0x38 & 0xf);
      }
      uVar10 = (uint)((ulong)pvVar8 >> 0x3b) & 1;
      if ((uVar16 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar9 = 7;
      if (uVar10 == 0) {
        uVar9 = 0xb;
      }
      pcVar15 = (char *)(uVar9 | (long)pvVar2 << 0x10);
      _swift_bridgeObjectRetain(uVar16);
      SVar19.bridgeObject = pvVar8;
      SVar19.str = pcVar15;
      uVar9 = uVar16;
      SVar7 = Swift::String::get_subscript((Range<Index>)0xf,SVar19);
      _swift_bridgeObjectRelease(uVar16);
      uVar16 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar16) {
        FUN_1006bf860(1 < *(ulong *)(puVar4 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar16 + 1;
      *(undefined **)(puVar4 + uVar16 * 0x20 + 0x20) = SVar7.unknown;
      *(char **)(puVar4 + uVar16 * 0x20 + 0x28) = pcVar15;
      *(void **)(puVar4 + uVar16 * 0x20 + 0x30) = pvVar8;
      *(ulong *)(puVar4 + uVar16 * 0x20 + 0x38) = uVar9;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= (ulong)BVar6.offset) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006e3df0);
        (*pcVar5)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar18) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006e3df4);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006e3df8);
        (*pcVar5)();
      }
      uVar18 = *(ulong *)(_Var1.unknown + uVar13 * 8) & -2L << (BVar6.offset & 0x3fU);
      if (uVar18 == 0) {
        lVar17 = uVar13 << 6;
        puVar12 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar13) {
            FUN_10000cae0(BVar6.offset,iVar3,0);
            goto LAB_1006e3c28;
          }
          uVar18 = *puVar12;
          lVar17 = lVar17 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar18 == 0);
        FUN_10000cae0(BVar6.offset,iVar3,0);
        uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar17;
      }
      else {
        uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | BVar6.offset & 0x7fffffffffffffc0U;
      }
LAB_1006e3c28:
      lVar11 = lVar11 + 1;
      BVar6.offset = uVar16;
    } while (lVar11 != lVar14);
  }
  return puVar4;
}



/* Address: 0x1006e3df8 | FUN_1006e3df8 */

undefined1 FUN_1006e3df8(Hasher param_1,undefined *param_2)

{
  __uint32 _Var1;
  ulong uVar2;
  Hasher HVar3;
  ulong uVar4;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  HVar3.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
  _Var1 = (__uint32)param_1.unknown;
  Swift::Hasher::_combine(_Var1,HVar3);
  uVar2 = Swift::Hasher::_finalize(param_1);
  uVar4 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar2 = uVar2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + (uVar2 >> 6) * 8 + 0x38) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint32 *)(*(long *)(param_2 + 0x30) + uVar2 * 4) == _Var1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar4;
    } while ((*(ulong *)(param_2 + (uVar2 >> 6) * 8 + 0x38) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x1006e3eb4 | FUN_1006e3eb4 */

undefined8
FUN_1006e3eb4(ulong param_1,ulong param_2,undefined *param_3,undefined *param_4,long param_5)

{
  ulong *puVar1;
  bool bVar2;
  Hasher into;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_a8 [72];
  
  if (*(long *)(param_5 + 0x10) == 0) {
    return 0;
  }
  Swift::Hasher::init(*(__int64 *)(param_5 + 0x28));
  into.unknown = auStack_a8;
  Swift::Hashable::hash(into);
  uVar3 = Swift::Hasher::_finalize(into);
  uVar4 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(param_5 + 0x30) + uVar3 * 0x20);
      if (((((undefined *)puVar1[2] == param_3 && (undefined *)puVar1[3] == param_4) &&
           (undefined *)(*puVar1 >> 0x10) == (undefined *)(param_1 >> 0x10)) &&
           (undefined *)(puVar1[1] >> 0x10) == (undefined *)(param_2 >> 0x10)) ||
         (bVar2 = Swift::_stringCompareInternal
                            ((undefined *)puVar1[2],(undefined *)puVar1[3],
                             (undefined *)(*puVar1 >> 0x10),(undefined *)(puVar1[1] >> 0x10),
                             (_StringComparisonResult)(__int8)param_3), bVar2)) {
        return 1;
      }
      uVar3 = uVar3 + 1 & ~uVar4;
    } while ((*(ulong *)(param_5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x1006e3fec | FUN_1006e3fec */

void FUN_1006e3fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006da9d8;
                    /* WARNING: Could not recover jumptable at 0x0001006e4068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0x10,param_2,param_3);
  return;
}



/* Address: 0x1006e406c | FUN_1006e406c */

undefined8
FUN_1006e406c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006e7e60(param_1,PTR___swiftEmptySetSingleton_100eae0e8,param_2,param_3,param_4,param_5,
                param_6);
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  return uVar1;
}



/* Address: 0x1006e40e8 | FUN_1006e40e8 */

undefined8 FUN_1006e40e8(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x4;
  
  uVar1 = param_1;
  FUN_1006e7e60();
  (**(code **)(*(long *)(in_x4 + -8) + 8))(param_1,in_x4);
  return uVar1;
}



/* Address: 0x1006e4148 | FUN_1006e4148 */

void FUN_1006e4148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  local_80 = 0x2d;
  uStack_78 = 0xe100000000000000;
  local_90 = 0x5f;
  uStack_88 = 0xe100000000000000;
  local_70 = uVar2;
  uStack_68 = uVar4;
  FUN_1006e84e0();
  puVar5 = param_2;
  FUN_1006b79c0();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  (extension__StringProcessing)::Swift::RangeReplaceableCollection::_replacing
            (&local_60,&local_80,&local_90,0x7fffffffffffffff,
             PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,param_2,puVar5,puVar5,
             PTR___protocol_witness_table_for_Swift_Character___Swift_Equatable_in_Swift_100eabf28);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = local_60;
  param_1[5] = uStack_58;
  return;
}



/* Address: 0x1006e4218 | FUN_1006e4218 */

void FUN_1006e4218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = param_10;
  *(undefined8 *)(unaff_x22 + 0x268) = param_9;
  *(undefined8 *)(unaff_x22 + 0x260) = param_8;
  *(undefined8 *)(unaff_x22 + 600) = param_7;
  *(undefined8 *)(unaff_x22 + 0x250) = param_6;
  *(undefined8 *)(unaff_x22 + 0x248) = param_5;
  *(undefined8 *)(unaff_x22 + 0x240) = param_4;
  *(undefined8 *)(unaff_x22 + 0x238) = param_3;
  *(undefined8 *)(unaff_x22 + 0x230) = param_2;
  *(undefined8 *)(unaff_x22 + 0x228) = param_1;
  _swift_task_switch(FUN_1006e425c,0,0);
  return;
}


