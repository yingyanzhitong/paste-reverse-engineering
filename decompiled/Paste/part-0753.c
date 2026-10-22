/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100849260 | FUN_100849260 */

void FUN_100849260(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084926c | FUN_10084926c */

void FUN_10084926c(undefined8 *param_1)

{
  _swift_getFunctionTypeMetadata2
            (0x44000002,*param_1,param_1[1],PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100849284 | thunk_FUN_100849180 */

void thunk_FUN_100849180(void)

{
  thunk_FUN_100849180();
  return;
}



/* Address: 0x100849288 | FUN_100849288 */

void FUN_100849288(undefined8 param_1)

{
  FUN_100854038(0);
  _swift_bridgeObjectRetain(param_1);
  FUN_1008513f4();
  FUN_1008492bc();
  return;
}



/* Address: 0x1008492bc | FUN_1008492bc */

void FUN_1008492bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = 0;
  FUN_10084935c(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58),
                *(undefined8 *)(lVar2 + 0x60));
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x1008492fc | FUN_1008492fc */

void FUN_1008492fc(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_100851430();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10084933c | FUN_10084933c */

void FUN_10084933c(void)

{
  FUN_1008492fc();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10084935c | FUN_10084935c */

void FUN_10084935c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100849368 | FUN_100849368 */

void FUN_100849368(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100849374 | FUN_100849374 */

void FUN_100849374(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100849380 | FUN_100849380 */

void FUN_100849380(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10084941c;
  FUN_100851544(param_1,param_2 & 0xcfffffffffffffff,uVar1);
  return;
}



/* Address: 0x10084941c | FUN_10084941c */

void FUN_10084941c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010084948c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001008494b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1);
  return;
}



/* Address: 0x1008494b4 | FUN_1008494b4 */

void FUN_1008494b4(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_3 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_10084941c;
  FUN_100849380(param_1,param_2 & 0xcfffffffffffffff,uVar1);
  return;
}



/* Address: 0x10084954c | FUN_10084954c */

void FUN_10084954c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  *(long *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar5 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0;
  uVar4 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1008495d4,uVar3,uVar4);
  return;
}



/* Address: 0x1008495d4 | FUN_1008495d4 */

void FUN_1008495d4(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100849630;
  FUN_1008494b4(0,0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x100849630 | FUN_100849630 */

void FUN_100849630(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x48));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0x38);
    uVar4 = *(undefined8 *)(lVar7 + 0x40);
    **(undefined8 **)(lVar7 + 0x10) = param_1;
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    lVar1 = *(long *)(lVar7 + 0x38);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    lVar3 = *(long *)(lVar7 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + 0x30) + 0x20);
    (*UNRECOVERED_JUMPTABLE)(lVar1,*(undefined8 *)(lVar7 + 0x40),uVar2);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    Swift::__getErrorEmbeddedNSError(lVar1,uVar2,uVar4);
    uVar2 = *(undefined8 *)(lVar7 + 0x38);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      _swift_allocError(uVar6,uVar4,0,0);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar2,uVar6);
    }
    else {
      (**(code **)(*(long *)(lVar7 + 0x30) + 8))(uVar2,*(undefined8 *)(lVar7 + 0x28));
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x40));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100849738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10084973c | FUN_10084973c */

void FUN_10084973c(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 in_x3;
  long in_x4;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar3 = *(long *)(in_x4 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100708dfc;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100849800 | FUN_100849800 */

void FUN_100849800(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d0b0,param_1);
  return;
}



/* Address: 0x100849810 | FUN_100849810 */

void FUN_100849810(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_100849288(uVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  _swift_bridgeObjectRelease(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100849858 | thunk_FUN_10084941c */

void thunk_FUN_10084941c(void)

{
  FUN_10084941c();
  return;
}



/* Address: 0x10084985c | FUN_10084985c */

void FUN_10084985c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_10084a574(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1008498d8 | FUN_1008498d8 */

long * FUN_1008498d8(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar4 & 0xfffffffffffffff8) + 0x10) {
    uVar5 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + ((ulong)(uVar5 + 0x17 & (uVar5 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (4 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1008499c4;
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
    uVar5 = uVar6 | bVar1 - 5 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_1008499c4:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      *param_1 = *(long *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      _swift_bridgeObjectRetain();
      goto LAB_100849a9c;
    }
    if (uVar5 == 1) {
      lVar9 = *(long *)param_2;
      param_1[1] = *(long *)(param_2 + 2);
      *param_1 = lVar9;
      uVar7 = *(undefined8 *)(param_2 + 2);
      lVar3 = *(long *)(param_2 + 4);
      param_1[2] = lVar3;
      uVar2 = 1;
      goto LAB_100849a40;
    }
  }
  else {
    if (uVar5 == 2) {
      lVar9 = *(long *)param_2;
      param_1[1] = *(long *)(param_2 + 2);
      *param_1 = lVar9;
      uVar7 = *(undefined8 *)(param_2 + 2);
      lVar3 = *(long *)(param_2 + 6);
      param_1[2] = *(long *)(param_2 + 4);
      param_1[3] = lVar3;
      uVar2 = 2;
LAB_100849a40:
      *(undefined1 *)((long)param_1 + uVar4) = uVar2;
      _swift_retain(lVar9);
      _swift_bridgeObjectRetain(uVar7);
      _swift_retain(lVar3);
      goto LAB_100849a9c;
    }
    if (uVar5 == 3) {
      *param_1 = *(long *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 3;
      _swift_retain();
      goto LAB_100849a9c;
    }
    if (uVar5 == 4) {
      (**(code **)(lVar3 + 0x10))(param_1,param_2);
      *(undefined1 *)((long)param_1 + uVar4) = 4;
      goto LAB_100849a9c;
    }
  }
  _memcpy(param_1,param_2,uVar4 + 1);
LAB_100849a9c:
  *(undefined8 *)((long)param_1 + uVar4 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar4 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100849ad4 | FUN_100849ad4 */

undefined8 * FUN_100849ad4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (4 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar6 = 4;
    if (uVar9 < 4) {
      uVar6 = uVar9;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100849b7c;
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
    uVar5 = uVar6 | bVar1 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_100849b7c:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      _swift_bridgeObjectRetain();
      goto LAB_100849c50;
    }
    if (uVar5 == 1) {
      uVar10 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar10;
      uVar7 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_2 + 4);
      param_1[2] = uVar8;
      uVar2 = 1;
      goto LAB_100849bf4;
    }
  }
  else {
    if (uVar5 == 2) {
      uVar10 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar10;
      uVar7 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_2 + 6);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[3] = uVar8;
      uVar2 = 2;
LAB_100849bf4:
      *(undefined1 *)((long)param_1 + uVar4) = uVar2;
      _swift_retain(uVar10);
      _swift_bridgeObjectRetain(uVar7);
      _swift_retain(uVar8);
      goto LAB_100849c50;
    }
    if (uVar5 == 3) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 3;
      _swift_retain();
      goto LAB_100849c50;
    }
    if (uVar5 == 4) {
      (**(code **)(lVar3 + 0x10))(param_1,param_2);
      *(undefined1 *)((long)param_1 + uVar4) = 4;
      goto LAB_100849c50;
    }
  }
  _memcpy(param_1,param_2,uVar4 + 1);
LAB_100849c50:
  *(undefined8 *)(uVar4 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100849c84 | FUN_100849c84 */

uint * FUN_100849c84(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
  }
  if (param_1 == param_2) goto LAB_100849f10;
  uVar9 = (uint)uVar2;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  if (4 < bVar1) {
    uVar4 = 4;
    if (uVar9 < 4) {
      uVar4 = uVar9;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100849d34;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 5 << (ulong)(uVar9 << 3 & 0x1f);
    if (3 < uVar9) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 5;
  }
LAB_100849d34:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar3 == 1) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar6 = *(undefined8 *)(param_1 + 4);
      goto LAB_100849da8;
    }
  }
  else {
    if (uVar3 == 2) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar6 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (uVar3 != 3) {
        if (uVar3 == 4) {
          (**(code **)(lVar7 + 8))(param_1,lVar5);
        }
        goto LAB_100849db8;
      }
      uVar6 = *(undefined8 *)param_1;
    }
LAB_100849da8:
    _swift_release(uVar6);
  }
LAB_100849db8:
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (4 < bVar1) {
    uVar4 = 4;
    if (uVar9 < 4) {
      uVar4 = uVar9;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100849e28;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 5 << (ulong)(uVar9 << 3 & 0x1f);
    if (3 < uVar9) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 5;
  }
LAB_100849e28:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar2) = 0;
      _swift_bridgeObjectRetain();
      goto LAB_100849f10;
    }
    if (uVar3 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
      uVar8 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 4) = uVar8;
      bVar1 = 1;
      goto LAB_100849eb8;
    }
  }
  else {
    if (uVar3 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      uVar8 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 6) = uVar8;
      bVar1 = 2;
LAB_100849eb8:
      *(byte *)((long)param_1 + uVar2) = bVar1;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar6);
      _swift_retain(uVar8);
      goto LAB_100849f10;
    }
    if (uVar3 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar2) = 3;
      _swift_retain();
      goto LAB_100849f10;
    }
    if (uVar3 == 4) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      *(byte *)((long)param_1 + uVar2) = 4;
      goto LAB_100849f10;
    }
  }
  _memcpy(param_1,param_2,uVar2 + 1);
LAB_100849f10:
  *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100849f44 | FUN_100849f44 */

void FUN_100849f44(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (4 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100849fe0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 5 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
LAB_100849fe0:
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar3) = 0;
      goto LAB_10084a09c;
    }
    if (uVar4 == 1) {
      uVar7 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar7;
      param_1[2] = *(undefined8 *)(param_2 + 4);
      *(undefined1 *)((long)param_1 + uVar3) = 1;
      goto LAB_10084a09c;
    }
  }
  else {
    if (uVar4 == 2) {
      uVar7 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_2 + 6);
      uVar8 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar7;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      *(undefined1 *)((long)param_1 + uVar3) = 2;
      goto LAB_10084a09c;
    }
    if (uVar4 == 3) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar3) = 3;
      goto LAB_10084a09c;
    }
    if (uVar4 == 4) {
      (**(code **)(lVar2 + 0x20))();
      *(undefined1 *)((long)param_1 + uVar3) = 4;
      goto LAB_10084a09c;
    }
  }
  _memcpy(param_1,param_2,uVar3 + 1);
LAB_10084a09c:
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x10084a0c8 | FUN_10084a0c8 */

uint * FUN_10084a0c8(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  if (param_1 == param_2) goto LAB_10084a31c;
  uVar7 = (uint)uVar3;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  if (4 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084a178;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 5 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
LAB_10084a178:
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar2 = *(undefined8 *)(param_1 + 4);
      goto LAB_10084a1ec;
    }
  }
  else {
    if (uVar4 == 2) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar2 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (uVar4 != 3) {
        if (uVar4 == 4) {
          (**(code **)(lVar8 + 8))(param_1,lVar6);
        }
        goto LAB_10084a1fc;
      }
      uVar2 = *(undefined8 *)param_1;
    }
LAB_10084a1ec:
    _swift_release(uVar2);
  }
LAB_10084a1fc:
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (4 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084a26c;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 5 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
LAB_10084a26c:
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar3) = 0;
      goto LAB_10084a31c;
    }
    if (uVar4 == 1) {
      uVar2 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(byte *)((long)param_1 + uVar3) = 1;
      goto LAB_10084a31c;
    }
  }
  else {
    if (uVar4 == 2) {
      uVar2 = *(undefined8 *)param_2;
      uVar10 = *(undefined8 *)(param_2 + 6);
      uVar9 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar10;
      *(undefined8 *)(param_1 + 4) = uVar9;
      *(byte *)((long)param_1 + uVar3) = 2;
      goto LAB_10084a31c;
    }
    if (uVar4 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar3) = 3;
      goto LAB_10084a31c;
    }
    if (uVar4 == 4) {
      (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
      *(byte *)((long)param_1 + uVar3) = 4;
      goto LAB_10084a31c;
    }
  }
  _memcpy(param_1,param_2,uVar3 + 1);
LAB_10084a31c:
  *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x10084a350 | FUN_10084a350 */

int FUN_10084a350(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar7 < 0x21) {
    uVar7 = 0x20;
  }
  uVar3 = 0xfa;
  if ((uint)uVar7 < 4) {
    uVar3 = 0xfa - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (uVar7 & 0xfffffffffffffff8) + 0x10;
    uVar2 = uVar1 & 0xfffffff8;
    uVar8 = (uint)uVar2;
    uVar9 = 2;
    uVar5 = uVar9;
    if (uVar2 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar9 = 4;
    }
    if (uVar5 < 0x100) {
      uVar9 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar9;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_10084a3f0;
    }
    else if (uVar4 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_10084a3f0:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar8 = *param_1;
        }
        return uVar3 + (uVar8 | uVar9) + 1;
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_10084a3f0;
    }
  }
  iVar6 = 0x100 - (uint)*(byte *)((long)param_1 + uVar7);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar7) ^ 0xff)) {
    iVar6 = 0;
  }
  return iVar6;
}



/* Address: 0x10084a438 | FUN_10084a438 */

void FUN_10084a438(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar6 < 0x21) {
    uVar6 = 0x20;
  }
  uVar2 = 0xfa;
  if ((uint)uVar6 < 4) {
    uVar2 = 0xfa - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  }
  sVar1 = (uVar6 & 0xfffffffffffffff8) + 0x10;
  uVar7 = 2;
  uVar4 = uVar7;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar7 = 4;
  }
  if (uVar4 < 0x100) {
    uVar7 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar7;
  }
  uVar7 = 0;
  if (uVar2 < param_3) {
    uVar7 = uVar3;
  }
  iVar5 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar5 == 0) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}



/* Address: 0x10084a568 | FUN_10084a568 */

void FUN_10084a568(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084a574 | FUN_10084a574 */

void FUN_10084a574(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084a580 | FUN_10084a580 */

void FUN_10084a580(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_40 = &DAT_100c7d188;
  puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_38 = &DAT_100c7d1a0;
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_48);
  }
  return;
}



/* Address: 0x10084a618 | FUN_10084a618 */

long * FUN_10084a618(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar5 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar4 + 1) {
    uVar6 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
    goto LAB_10084a794;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar6 = (uint)bVar1;
  if (4 < bVar1) {
    uVar9 = (uint)uVar4;
    uVar7 = 4;
    if (uVar9 < 4) {
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084a6f4;
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
    uVar6 = uVar7 | bVar1 - 5 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 5;
  }
LAB_10084a6f4:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      *param_1 = *(long *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar6 != 1) {
LAB_10084a7c0:
      plVar2 = _memcpy(param_1,param_2,uVar4 + 1);
      return plVar2;
    }
    lVar10 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar10;
    uVar8 = *(undefined8 *)(param_2 + 2);
    lVar5 = *(long *)(param_2 + 4);
    param_1[2] = lVar5;
    uVar3 = 1;
  }
  else {
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        if (uVar6 == 4) {
          (**(code **)(lVar5 + 0x10))(param_1);
          *(undefined1 *)((long)param_1 + uVar4) = 4;
          return param_1;
        }
        goto LAB_10084a7c0;
      }
      lVar5 = *(long *)param_2;
      *param_1 = lVar5;
      *(undefined1 *)((long)param_1 + uVar4) = 3;
      goto LAB_10084a794;
    }
    lVar10 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar10;
    uVar8 = *(undefined8 *)(param_2 + 2);
    lVar5 = *(long *)(param_2 + 6);
    param_1[2] = *(long *)(param_2 + 4);
    param_1[3] = lVar5;
    uVar3 = 2;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar3;
  _swift_retain(lVar10);
  _swift_bridgeObjectRetain(uVar8);
LAB_10084a794:
  _swift_retain(lVar5);
  return param_1;
}



/* Address: 0x10084a7d8 | thunk_FUN_10084a7dc */

void thunk_FUN_10084a7dc(uint *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (4 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084a874;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 5;
  }
LAB_10084a874:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
    if (uVar6 != 1) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    uVar2 = *(undefined8 *)(param_1 + 4);
  }
  else if (uVar6 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    uVar2 = *(undefined8 *)(param_1 + 6);
  }
  else {
    if (uVar6 != 3) {
      if (uVar6 != 4) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010084a8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))();
      return;
    }
    uVar2 = *(undefined8 *)param_1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x10084a7dc | FUN_10084a7dc */

void FUN_10084a7dc(uint *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (4 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084a874;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 5 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 5;
  }
LAB_10084a874:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
    if (uVar6 != 1) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    uVar2 = *(undefined8 *)(param_1 + 4);
  }
  else if (uVar6 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    uVar2 = *(undefined8 *)(param_1 + 6);
  }
  else {
    if (uVar6 != 3) {
      if (uVar6 != 4) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010084a8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))();
      return;
    }
    uVar2 = *(undefined8 *)param_1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x10084a91c | FUN_10084a91c */

undefined8 * FUN_10084a91c(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar1;
  if (4 < bVar1) {
    uVar10 = (uint)uVar5;
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10084a9bc;
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
    uVar6 = uVar7 | bVar1 - 5 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 5;
  }
LAB_10084a9bc:
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar5) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar6 != 1) goto LAB_10084aa8c;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar8 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar9;
    uVar3 = 1;
  }
  else {
    if (uVar6 != 2) {
      if (uVar6 == 3) {
        *param_1 = *(undefined8 *)param_2;
        *(undefined1 *)((long)param_1 + uVar5) = 3;
        _swift_retain();
        return param_1;
      }
      if (uVar6 == 4) {
        (**(code **)(lVar4 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar5) = 4;
        return param_1;
      }
LAB_10084aa8c:
      puVar2 = _memcpy(param_1,param_2,uVar5 + 1);
      return puVar2;
    }
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar8 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)(param_2 + 6);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    param_1[3] = uVar9;
    uVar3 = 2;
  }
  *(undefined1 *)((long)param_1 + uVar5) = uVar3;
  _swift_retain(uVar11);
  _swift_bridgeObjectRetain(uVar8);
  _swift_retain(uVar9);
  return param_1;
}



/* Address: 0x10084aaa4 | FUN_10084aaa4 */

uint * FUN_10084aaa4(uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar7 + -8);
  uVar3 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  uVar9 = (uint)uVar3;
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  if (4 < bVar2) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084ab54;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 5 << (ulong)(uVar9 << 3 & 0x1f);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
LAB_10084ab54:
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar4 == 1) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar6 = *(undefined8 *)(param_1 + 4);
      goto LAB_10084abc8;
    }
  }
  else {
    if (uVar4 == 2) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar6 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (uVar4 != 3) {
        if (uVar4 == 4) {
          (**(code **)(lVar10 + 8))(param_1,lVar7);
        }
        goto LAB_10084abd8;
      }
      uVar6 = *(undefined8 *)param_1;
    }
LAB_10084abc8:
    _swift_release(uVar6);
  }
LAB_10084abd8:
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (4 < bVar2) {
    uVar5 = 4;
    if (uVar9 < 4) {
      uVar5 = uVar9;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10084ac48;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 5 << (ulong)(uVar9 << 3 & 0x1f);
    if (3 < uVar9) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
LAB_10084ac48:
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar3) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar4 != 1) goto LAB_10084ad34;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar8;
    uVar6 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar6;
    bVar2 = 1;
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar3) = 3;
        _swift_retain();
        return param_1;
      }
      if (uVar4 == 4) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar7);
        *(byte *)((long)param_1 + uVar3) = 4;
        return param_1;
      }
LAB_10084ad34:
      puVar1 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 6) = uVar6;
    bVar2 = 2;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_retain(uVar6);
  return param_1;
}



/* Address: 0x10084ad54 | FUN_10084ad54 */

undefined8 * FUN_10084ad54(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (4 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10084adec;
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
    uVar5 = uVar6 | bVar1 - 5 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_10084adec:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + uVar4) = 0;
    }
    else {
      if (uVar5 != 1) {
LAB_10084ae90:
        puVar2 = _memcpy(param_1,param_2,uVar4 + 1);
        return puVar2;
      }
      uVar8 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar8;
      param_1[2] = *(undefined8 *)(param_2 + 4);
      *(undefined1 *)((long)param_1 + uVar4) = 1;
    }
  }
  else if (uVar5 == 2) {
    uVar8 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else if (uVar5 == 3) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar4) = 3;
  }
  else {
    if (uVar5 != 4) goto LAB_10084ae90;
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar4) = 4;
  }
  return param_1;
}



/* Address: 0x10084aea0 | FUN_10084aea0 */

uint * FUN_10084aea0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar7 + -8);
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 0x21) {
    uVar3 = 0x20;
  }
  uVar8 = (uint)uVar3;
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar5 = (uint)bVar1;
  if (4 < bVar1) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10084af4c;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 5 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_10084af4c:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar5 == 1) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar4 = *(undefined8 *)(param_1 + 4);
      goto LAB_10084afd8;
    }
  }
  else {
    if (uVar5 == 2) {
      _swift_release(*(undefined8 *)param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      uVar4 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (uVar5 != 3) {
        if (uVar5 == 4) {
          (**(code **)(lVar9 + 8))(param_1,lVar7);
        }
        goto LAB_10084aff4;
      }
      uVar4 = *(undefined8 *)param_1;
    }
LAB_10084afd8:
    _swift_release(uVar4);
  }
LAB_10084aff4:
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar5 = (uint)bVar1;
  if (4 < bVar1) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10084b064;
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
    uVar5 = uVar6 | bVar1 - 5 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 5;
  }
LAB_10084b064:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar3) = 0;
    }
    else {
      if (uVar5 != 1) {
LAB_10084b118:
        puVar2 = _memcpy(param_1,param_2,uVar3 + 1);
        return puVar2;
      }
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(byte *)((long)param_1 + uVar3) = 1;
    }
  }
  else if (uVar5 == 2) {
    uVar4 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 6) = uVar11;
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar5 == 3) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar3) = 3;
  }
  else {
    if (uVar5 != 4) goto LAB_10084b118;
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar7);
    *(byte *)((long)param_1 + uVar3) = 4;
  }
  return param_1;
}



/* Address: 0x10084b134 | FUN_10084b134 */

int FUN_10084b134(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (uVar5 < 0x21) {
    uVar5 = 0x20;
  }
  uVar1 = 0xfa;
  if ((uint)uVar5 < 4) {
    uVar1 = 0xfa - (1U >> (ulong)(((uint)uVar5 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_10084b1f8;
  uVar7 = uVar5 + 1;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar1 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10084b1f8;
      goto LAB_10084b184;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_10084b184:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_10084b1f8:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar5);
  if (uVar1 <= (*(byte *)((long)param_1 + uVar5) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x10084b260 | FUN_10084b260 */

void FUN_10084b260(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x40);
  if (uVar6 < 0x21) {
    uVar6 = 0x20;
  }
  uVar3 = 0xfa;
  if ((uint)uVar6 < 4) {
    uVar3 = 0xfa - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  }
  sVar2 = uVar6 + 1;
  uVar8 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar8 < 4) {
      bVar5 = bVar7;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar9;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar9;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x10084b424 | FUN_10084b424 */

uint FUN_10084b424(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x40);
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (4 < bVar1) {
    uVar5 = (uint)uVar4;
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
    uVar2 = uVar3 | bVar1 - 5 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}



/* Address: 0x10084b4b8 | FUN_10084b4b8 */

void FUN_10084b4b8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x40);
  if (sVar3 < 0x21) {
    sVar3 = 0x20;
  }
  if (param_2 < 5) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 5;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x05';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 5;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10084b580 | FUN_10084b580 */

void FUN_10084b580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  
  *param_1 = param_2;
  lVar3 = 0;
  FUN_10084b968(0,param_5,param_6,param_7);
  iVar1 = *(int *)(lVar3 + 0x2c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) = param_4;
  return;
}



/* Address: 0x10084b604 | FUN_10084b604 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010084b670 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10084b604(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  __int64 _Var3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = param_2;
  uVar1 = 0;
  FUN_10084a574(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,0);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = &DAT_100c7d020;
  local_50 = param_3;
  uStack_48 = param_4;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c7d020,&local_50);
  _Var3 = Swift::Array<undefined>::get_count(puVar2,puVar2);
  _swift_bridgeObjectRelease(param_2);
  lVar4 = 0;
  FUN_10084a568(0,param_3,param_4,param_5);
  *(__int64 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) = _Var3;
  return;
}



/* Address: 0x10084b6b4 | FUN_10084b6b4 */

undefined1  [16] FUN_10084b6b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 local_b0 [4];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_b0[1] = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = 0;
  local_b0[0] = uVar17;
  FUN_10084a574(0,uVar17,lVar12,uVar6);
  lVar16 = *(long *)(lVar4 + -8);
  lVar14 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)local_b0 + lVar14);
  (**(code **)(lVar16 + 0x10))(puVar15);
  puVar5 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 != 0) {
      if (iVar3 != 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10084b968);
        (*pcVar11)();
      }
      uVar9 = *puVar15;
      uVar2 = *(undefined8 *)((long)local_b0 + lVar14 + 8);
      _swift_release(*(undefined8 *)((long)local_b0 + lVar14 + 0x10));
      (**(code **)(lVar16 + 8))();
      _swift_storeEnumTagMultiPayload();
      uStack_78 = local_b0[1];
      local_80 = local_b0[0];
      local_70 = uVar6;
      uStack_68 = uVar2;
      FUN_10084b968(0xff,uVar17,lVar12,uVar6);
      uVar6 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar10 = &DAT_100fe7b28;
      FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
      puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar6);
      pcVar11 = FUN_100003284;
      FUN_1005f45bc(FUN_100003284,auStack_90,uVar6,puVar10,
                    PTR___type_metadata_for_Swift_Never_100eadc38,puVar7,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_bridgeObjectRelease(uVar2);
      lVar12 = *(long *)(pcVar11 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar12 != 0) {
        pcVar13 = pcVar11 + 0x20;
        do {
          lVar14 = *(long *)pcVar13;
          if (lVar14 != 0) {
            puVar7 = puVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar10;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_100836c94(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
            }
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar10 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_100836c94(puVar10,uVar1 + 1,1,puVar8);
            }
            *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
            *(long *)(puVar10 + uVar1 * 8 + 0x20) = lVar14;
          }
          lVar12 = lVar12 + -1;
          pcVar13 = pcVar13 + 8;
        } while (lVar12 != 0);
      }
      _swift_bridgeObjectRelease(pcVar11);
      goto LAB_10084b940;
    }
    (**(code **)(lVar16 + 8))(puVar15,lVar4);
  }
  else {
    if (4 < iVar3) {
      puVar10 = (undefined *)0x0;
      uVar9 = 0;
      if (iVar3 != 5) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10084b8d8);
        (*pcVar11)();
      }
      goto LAB_10084b940;
    }
    if (iVar3 == 3) {
      pcVar11 = *(code **)(lVar16 + 8);
      (*pcVar11)(puVar15,lVar4);
    }
    else {
      (**(code **)(*(long *)(lVar12 + -8) + 8))(puVar15,lVar12);
      pcVar11 = *(code **)(lVar16 + 8);
    }
    (*pcVar11)();
    _swift_storeEnumTagMultiPayload();
  }
  uVar9 = 0;
  puVar10 = (undefined *)0x0;
LAB_10084b940:
  auVar18._8_8_ = puVar10;
  auVar18._0_8_ = uVar9;
  return auVar18;
}



/* Address: 0x10084b968 | FUN_10084b968 */

void FUN_10084b968(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084b974 | FUN_10084b974 */

void FUN_10084b974(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long alStack_90 [5];
  
  lVar11 = *(long *)(param_3 + 0x10);
  alStack_90[3] = param_1;
  alStack_90[4] = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar7 = (long)alStack_90 -
          (*(long *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0);
  lVar1 = *(long *)(param_3 + 0x18);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  lVar5 = 0;
  FUN_10084b968(0,lVar11,lVar1,uVar9);
  alStack_90[1] = *(long *)(lVar5 + -8);
  lVar14 = lVar7 - (*(long *)(alStack_90[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  alStack_90[2] = lVar5;
  FUN_10084a574(0,lVar11,lVar1,uVar9);
  lVar12 = *(long *)(lVar6 + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar13 = (undefined8 *)(lVar14 - uVar8);
  lVar10 = (long)puVar13 - uVar8;
  (**(code **)(lVar12 + 0x10))(lVar10,unaff_x20,lVar6);
  lVar5 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar6);
  iVar4 = (int)lVar5;
  if (iVar4 == 0) {
    (**(code **)(lVar12 + 8))(lVar10,lVar6);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar7,1,1,lVar11);
    FUN_10084b580(lVar14,0,lVar7,0,lVar11,lVar1,uVar9);
    lVar5 = alStack_90[3];
    uVar9 = *(undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x2c));
    _swift_retain(alStack_90[3]);
    lVar1 = alStack_90[2];
    lVar7 = lVar14;
    FUN_10084e7e4(lVar14,uVar9,alStack_90[2]);
    (**(code **)(alStack_90[1] + 8))(lVar14,lVar1);
    uVar9 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    thunk_FUN_100683d64();
    *puVar13 = lVar5;
    puVar13[1] = lVar7;
    puVar13[2] = alStack_90[4];
    puVar13[3] = uVar9;
    _swift_storeEnumTagMultiPayload(puVar13,lVar6,2);
    (**(code **)(lVar12 + 0x28))(unaff_x20,puVar13,lVar6);
    return;
  }
  if (3 < iVar4) {
    if (iVar4 != 4) {
      if (iVar4 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10084bb74);
        (*pcVar2)();
      }
      goto LAB_10084bb8c;
    }
    lVar12 = *(long *)(lVar1 + -8);
    lVar6 = lVar1;
  }
  (**(code **)(lVar12 + 8))(lVar10,lVar6);
LAB_10084bb8c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10084bb90);
  (*pcVar2)();
}



/* Address: 0x10084bb90 | FUN_10084bb90 */

undefined8 FUN_10084bb90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  _ArrayBuffer _Var3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  _ContiguousArrayBuffer<undefined> _Var9;
  undefined8 *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  _ArrayBuffer local_70 [2];
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  lVar6 = 0;
  FUN_10084a574(0,uVar1,lVar10,uVar11);
  lVar14 = *(long *)(lVar6 + -8);
  lVar8 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)local_70 + lVar8);
  (**(code **)(lVar14 + 0x10))(puVar12);
  puVar7 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar6);
  iVar5 = (int)puVar7;
  if (iVar5 < 3) {
    if (iVar5 == 1) {
      uVar2 = *puVar12;
      local_70[1].unknown = *(undefined **)((long)local_70 + lVar8 + 8);
      local_70[0].unknown = *(undefined **)(&stack0xffffffffffffffa0 + lVar8);
      pcVar4 = *(code **)(lVar14 + 8);
      (*pcVar4)();
      _swift_storeEnumTagMultiPayload();
      lVar8 = 0xff;
      FUN_10084b968(0xff,uVar1,lVar10,uVar11);
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::_makeMutableAndUnique();
      _Var3.unknown = local_70[1].unknown;
      FUN_100662648(param_1,local_70[1].unknown,lVar8);
      _Var9 = Swift::_ArrayBuffer::get__native(_Var3);
      lVar10 = *(long *)(lVar8 + -8);
      uVar13 = (ulong)*(byte *)(lVar10 + 0x50);
      _swift_release();
      *(undefined8 *)
       (_Var9.unknown +
       *(long *)(lVar10 + 0x48) * param_1 + (uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff))) =
           param_2;
      (*pcVar4)();
      *unaff_x20 = uVar2;
      unaff_x20[1] = _Var3.unknown;
      unaff_x20[2] = local_70[0].unknown;
      _swift_storeEnumTagMultiPayload();
      param_2 = 0;
    }
    else {
      if (iVar5 != 2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10084bd6c);
        (*pcVar4)();
      }
      (**(code **)(lVar14 + 8))(puVar12,lVar6);
    }
  }
  else if (iVar5 < 5) {
    if (iVar5 != 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10084bd68);
      (*pcVar4)();
    }
    (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar12,lVar10);
  }
  else if (iVar5 != 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10084bc74);
    (*pcVar4)();
  }
  return param_2;
}



/* Address: 0x10084bd6c | FUN_10084bd6c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010084c1fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10084bd6c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  _ArrayBuffer _Var2;
  Optional OVar3;
  bool bVar4;
  Result RVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  _ContiguousArrayBuffer<undefined> _Var10;
  undefined *puVar11;
  __int64 _Var12;
  UnsafeContinuation UVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  undefined8 *puVar18;
  undefined *puVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  code *local_120 [5];
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  _ArrayBuffer local_b0;
  long lStack_a8;
  undefined *local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  _ArrayBuffer local_70;
  
  puVar19 = *(undefined **)(param_4 + 0x10);
  local_d0 = param_2;
  local_b8 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_c8 = CONCAT71((int7)((ulong)param_2 >> 8),OVar3.value);
  local_d8 = *(long *)(local_c8 + -8);
  lVar24 = (long)local_120 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar20 = *(code **)(param_4 + 0x20);
  uStack_e8 = *(undefined8 *)(param_4 + 0x20);
  lVar22 = *(long *)(param_4 + 0x18);
  lVar7 = 0;
  local_f0 = lVar22;
  local_c0 = lVar24;
  FUN_10084a574(0,puVar19,lVar22,pcVar20);
  lVar23 = *(long *)(lVar7 + -8);
  puVar18 = (undefined8 *)(lVar24 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar23 + 0x10))(puVar18);
  puVar8 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar7);
  iVar6 = (int)puVar8;
  if (iVar6 < 3) {
    local_120[4] = pcVar20;
    local_f8 = lVar22;
    if (iVar6 == 1) {
      local_120[3] = (code *)*puVar18;
      puVar11 = (undefined *)puVar18[1];
      local_80 = puVar18[2];
      uStack_90 = uStack_e8;
      local_98 = local_f0;
      lVar7 = 0xff;
      local_a0 = puVar19;
      local_88 = puVar11;
      local_70.unknown = puVar11;
      FUN_10084b968(0xff,puVar19,lVar22,pcVar20);
      pcVar9 = (code *)0x0;
      local_f0 = lVar7;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_bridgeObjectRetain(puVar11);
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,pcVar9);
      pcVar20 = FUN_10084e90c;
      local_120[2] = pcVar9;
      (extension_Swift)::Swift::Sequence::_compactMap();
      _swift_bridgeObjectRelease(puVar11);
      local_b0.unknown = pcVar20;
      _swift_bridgeObjectRetain(pcVar20);
      _Var12 = Swift::Array<undefined>::get_count(pcVar20,puVar19);
      _swift_bridgeObjectRelease(pcVar20);
      if (_Var12 != *(long *)((long)unaff_x20 + (long)*(int *)(param_4 + 0x2c))) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10084c44c);
        (*pcVar20)();
      }
      local_120[1] = *(code **)(lVar23 + 8);
      (*local_120[1])();
      _swift_storeEnumTagMultiPayload();
      uVar14 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::_makeMutableAndUnique();
      _Var2.unknown = local_b0.unknown;
      FUN_100662648(param_3,local_b0.unknown,puVar19);
      _Var10 = Swift::_ArrayBuffer::get__native(_Var2);
      lVar22 = *(long *)(puVar19 + -8);
      bVar1 = *(byte *)(lVar22 + 0x50);
      _swift_release();
      uVar17 = local_d0;
      (**(code **)(lVar22 + 0x18))
                (_Var10.unknown +
                 *(long *)(lVar22 + 0x48) * param_3 +
                 ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),local_d0,puVar19);
      uVar15 = 0;
      FUN_1006883a0(0,uVar14);
      FUN_100679d80(&local_b0,uVar15);
      lVar7 = local_c0;
      (**(code **)(lVar22 + 0x10))(local_c0,uVar17,puVar19);
      (**(code **)(lVar22 + 0x38))(lVar7,0,1,puVar19);
      Swift::Array<undefined>::_makeMutableAndUnique(local_120[2]);
      _Var2.unknown = local_70.unknown;
      lVar22 = local_f0;
      FUN_100662648(param_3,local_70.unknown,local_f0);
      _Var10 = Swift::_ArrayBuffer::get__native(_Var2);
      lVar24 = *(long *)(lVar22 + -8);
      uVar21 = (ulong)*(byte *)(lVar24 + 0x50);
      _swift_release();
      (**(code **)(local_d8 + 0x28))
                (_Var10.unknown +
                 (long)*(int *)(lVar22 + 0x2c) +
                 *(long *)(lVar24 + 0x48) * param_3 +
                 (uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff)),lVar7,local_c8);
      _swift_bridgeObjectRelease(local_b0.unknown);
      (*local_120[1])();
      *unaff_x20 = local_120[3];
      unaff_x20[1] = _Var2.unknown;
      unaff_x20[2] = local_80;
      _swift_storeEnumTagMultiPayload();
      lVar22 = local_f8;
      pcVar20 = local_120[4];
    }
    else {
      if (iVar6 != 2) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10084c458);
        (*pcVar20)();
      }
      local_70.unknown = (undefined *)puVar18[1];
      local_120[3] = (code *)*puVar18;
      local_120[1] = (code *)puVar18[3];
      uStack_e8 = puVar18[3];
      local_f0 = puVar18[2];
      pcVar9 = (code *)0xff;
      local_b0.unknown = local_120[1];
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar17 = 0;
      local_120[0] = pcVar9;
      FUN_1006883a0(0);
      _swift_getWitnessTable(0x100c6d780,uVar17);
      bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10084c450);
        (*pcVar20)();
      }
      local_120[2] = *(code **)(lVar23 + 8);
      (*local_120[2])();
      _swift_storeEnumTagMultiPayload();
      lVar22 = local_c0;
      lVar7 = *(long *)(puVar19 + -8);
      (**(code **)(lVar7 + 0x10))(local_c0,local_d0,puVar19);
      (**(code **)(lVar7 + 0x38))(lVar22,0,1,puVar19);
      lVar22 = local_f8;
      lVar7 = 0xff;
      FUN_10084b968(0xff,puVar19,local_f8,pcVar20);
      uVar17 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      local_d0 = uVar17;
      Swift::Array<undefined>::_makeMutableAndUnique();
      _Var2.unknown = local_70.unknown;
      FUN_100662648(param_3,local_70.unknown,lVar7);
      _Var10 = Swift::_ArrayBuffer::get__native(_Var2);
      lVar24 = *(long *)(lVar7 + -8);
      uVar21 = (ulong)*(byte *)(lVar24 + 0x50);
      _swift_release();
      pcVar20 = local_120[4];
      (**(code **)(local_d8 + 0x28))
                (_Var10.unknown +
                 (long)*(int *)(lVar7 + 0x2c) +
                 *(long *)(lVar24 + 0x48) * param_3 +
                 (uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff)),local_c0,local_c8);
      lStack_a8 = lVar22;
      local_a0 = pcVar20;
      puVar11 = &DAT_100c7d270;
      local_b0.unknown = puVar19;
      _swift_getKeyPath(&DAT_100c7d270,&local_b0);
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,local_d0)
      ;
      pcVar9 = FUN_10084e8e4;
      (extension_Swift)::Swift::Sequence::_compactMap();
      _swift_release(puVar11);
      _Var12 = Swift::Array<undefined>::get_count(pcVar9,puVar19);
      if (_Var12 == *(long *)((long)unaff_x20 + (long)*(int *)(param_4 + 0x2c))) {
        (*local_120[2])();
        *unaff_x20 = local_120[3];
        unaff_x20[1] = local_70.unknown;
        unaff_x20[2] = local_120[1];
        _swift_storeEnumTagMultiPayload();
        Swift::Optional::typeMetadataAccessor();
        RVar5 = Swift::Result::typeMetadataAccessor();
        UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar7 = 0;
        _swift_getTupleTypeMetadata2
                  (0,UVar13.unknown,RVar5.value,"downstreamContinuation result ",0);
        plVar16 = local_b8;
        iVar6 = *(int *)(lVar7 + 0x30);
        *local_b8 = local_f0;
        *(code **)((long)local_b8 + (long)iVar6) = pcVar9;
        _swift_storeEnumTagMultiPayload((long)local_b8 + (long)iVar6,RVar5.value,0);
        lVar7 = 0;
        FUN_10084e8d8(0,puVar19,lVar22,pcVar20);
        pcVar20 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
        uVar17 = 0;
        goto LAB_10084c420;
      }
      _swift_bridgeObjectRelease(pcVar9);
      (*local_120[2])();
      *unaff_x20 = local_120[3];
      unaff_x20[1] = local_70.unknown;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = local_f0;
      _swift_storeEnumTagMultiPayload();
    }
  }
  else if (iVar6 < 5) {
    if (iVar6 != 4) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10084c454);
      (*pcVar20)();
    }
    (**(code **)(*(long *)(lVar22 + -8) + 8))(puVar18,lVar22);
  }
  else if (iVar6 != 5) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x10084c45c);
    (*pcVar20)();
  }
  lVar7 = 0;
  FUN_10084e8d8(0,puVar19,lVar22,pcVar20);
  pcVar20 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  uVar17 = 1;
  plVar16 = local_b8;
LAB_10084c420:
  (*pcVar20)(plVar16,uVar17,1,lVar7);
  return;
}



/* Address: 0x10084c45c | FUN_10084c45c */

ulong FUN_10084c45c(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  _ArrayBuffer _Var3;
  code *pcVar4;
  Optional OVar5;
  bool bVar6;
  int iVar7;
  undefined7 extraout_var;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  _ContiguousArrayBuffer<undefined> _Var12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong *unaff_x20;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong *puVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong auStack_f0 [2];
  code *local_e0;
  ulong local_d8;
  code *local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong local_80;
  ulong local_78;
  undefined8 uStack_70;
  _ArrayBuffer local_68;
  
  uVar24 = *(ulong *)(param_2 + 0x10);
  local_a0 = param_1;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var,OVar5.value);
  lVar23 = *(long *)(local_b0 - 8);
  lVar18 = (long)auStack_f0 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  uStack_b8 = *(undefined8 *)(param_2 + 0x20);
  uVar25 = *(ulong *)(param_2 + 0x18);
  lVar8 = 0;
  local_c0 = uVar25;
  FUN_10084b968(0,uVar24,uVar25,uVar19);
  local_a8 = *(long *)(lVar8 + -8);
  lVar17 = lVar18 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_98 = uVar19;
  local_90 = uVar25;
  FUN_10084a574(0,uVar24,uVar25,uVar19);
  lVar20 = *(long *)(lVar9 + -8);
  puVar21 = (ulong *)(lVar17 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar20 + 0x10))(puVar21);
  puVar10 = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar9);
  iVar7 = (int)puVar10;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
      uVar25 = *puVar21;
      local_68.unknown = (undefined *)puVar21[1];
      local_b0 = puVar21[2];
      local_d0 = *(code **)(lVar20 + 8);
      (*local_d0)();
      _swift_storeEnumTagMultiPayload();
      uVar19 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::_makeMutableAndUnique();
      _Var3.unknown = local_68.unknown;
      lVar17 = local_a0;
      FUN_100662648(local_a0,local_68.unknown,lVar8);
      _Var12 = Swift::_ArrayBuffer::get__native(_Var3);
      lVar9 = local_a8;
      bVar1 = *(byte *)(local_a8 + 0x50);
      _swift_release();
      _Var12.unknown
      [(long)*(int *)(lVar8 + 0x30) +
       *(long *)(lVar9 + 0x48) * lVar17 +
       ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff))] = 1;
      local_78 = local_90;
      uStack_70 = local_98;
      puVar13 = &DAT_100c7d290;
      local_80 = uVar24;
      _swift_getKeyPath(&DAT_100c7d290,&local_80);
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar19);
      bVar6 = (extension_Swift)::Swift::Sequence::_allSatisfy();
      _swift_release(puVar13);
      uVar2 = local_b0;
      if (bVar6) {
        local_80 = local_b0;
        uVar11 = 0xff;
        Swift::Array<undefined>::typeMetadataAccessor();
        uVar15 = 0;
        FUN_1006883a0(0,uVar11);
        _swift_getWitnessTable(0x100c6d780,uVar15);
        bVar6 = (extension_Swift)::Swift::Collection::get_isEmpty();
        (*local_d0)();
        if (bVar6) {
          _swift_storeEnumTagMultiPayload();
        }
        else {
          *unaff_x20 = uVar2;
          _swift_storeEnumTagMultiPayload();
          _swift_retain(uVar2);
        }
        uStack_70 = uStack_b8;
        local_78 = local_c0;
        puVar13 = &DAT_100c7d250;
        local_80 = uVar24;
        _swift_getKeyPath(&DAT_100c7d250,&local_80);
        puVar16 = &DAT_100fe7b28;
        FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
        puVar14 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar19);
        pcVar4 = FUN_100851358;
        FUN_1005f45bc(FUN_100851358,puVar13,uVar19,puVar16,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar14,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        _swift_release(puVar13);
        lVar8 = *(long *)(pcVar4 + 0x10);
        if (lVar8 != 0) {
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pcVar22 = pcVar4 + 0x20;
          do {
            lVar9 = *(long *)pcVar22;
            if (lVar9 != 0) {
              puVar16 = puVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar14 = puVar13;
              if (((ulong)puVar16 & 1) == 0) {
                puVar14 = (undefined *)0x0;
                FUN_100836c94(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
              }
              uVar24 = *(ulong *)(puVar14 + 0x10);
              puVar13 = puVar14;
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar24) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                FUN_100836c94(puVar13,uVar24 + 1,1,puVar14);
              }
              *(ulong *)(puVar13 + 0x10) = uVar24 + 1;
              *(long *)(puVar13 + uVar24 * 8 + 0x20) = lVar9;
            }
            lVar8 = lVar8 + -1;
            pcVar22 = pcVar22 + 8;
          } while (lVar8 != 0);
        }
        _swift_release(uVar2);
        _swift_bridgeObjectRelease(pcVar4);
        _swift_bridgeObjectRelease(local_68.unknown);
        return uVar25;
      }
      (*local_d0)();
      *unaff_x20 = uVar25;
      unaff_x20[1] = (ulong)local_68.unknown;
      unaff_x20[2] = local_b0;
    }
    else {
      local_c0 = uVar24;
      if (iVar7 != 2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10084cd40);
        (*pcVar4)();
      }
      local_d8 = *puVar21;
      puVar13 = (undefined *)puVar21[1];
      auStack_f0[1] = puVar21[3];
      uStack_c8 = puVar21[3];
      local_d0 = (code *)puVar21[2];
      local_e0 = *(code **)(lVar20 + 8);
      local_68.unknown = puVar13;
      (*local_e0)();
      _swift_storeEnumTagMultiPayload();
      lVar20 = local_a0;
      Swift::Array<undefined>::get_subscript(lVar17,local_a0,puVar13,lVar8);
      uVar25 = local_b0;
      (**(code **)(lVar23 + 0x20))(lVar18,lVar17 + *(int *)(lVar8 + 0x2c),local_b0);
      uVar24 = local_c0;
      lVar17 = lVar18;
      (**(code **)(*(long *)(local_c0 - 8) + 0x30))(lVar18,1,local_c0);
      (**(code **)(lVar23 + 8))(lVar18,uVar25);
      uVar11 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::_makeMutableAndUnique();
      _Var3.unknown = local_68.unknown;
      FUN_100662648(lVar20,local_68.unknown,lVar8);
      _Var12 = Swift::_ArrayBuffer::get__native(_Var3);
      lVar9 = local_a8;
      bVar1 = *(byte *)(local_a8 + 0x50);
      _swift_release();
      uVar25 = local_90;
      uVar19 = local_98;
      _Var12.unknown
      [(long)*(int *)(lVar8 + 0x30) +
       *(long *)(lVar9 + 0x48) * lVar20 +
       ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff))] = 1;
      if ((int)lVar17 == 1) {
        (*local_e0)();
        _swift_storeEnumTagMultiPayload();
        local_80 = uVar24;
        local_78 = local_90;
        uStack_70 = local_98;
        puVar13 = &DAT_100c7d250;
        _swift_getKeyPath(&DAT_100c7d250,&local_80);
        puVar16 = &DAT_100fe7b28;
        FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
        puVar14 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar11);
        pcVar4 = FUN_100851358;
        FUN_1005f45bc(FUN_100851358,puVar13,uVar11,puVar16,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar14,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        _swift_release(puVar13);
        lVar8 = *(long *)(pcVar4 + 0x10);
        if (lVar8 != 0) {
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pcVar22 = pcVar4 + 0x20;
          do {
            lVar9 = *(long *)pcVar22;
            if (lVar9 != 0) {
              puVar16 = puVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar14 = puVar13;
              if (((ulong)puVar16 & 1) == 0) {
                puVar14 = (undefined *)0x0;
                FUN_100836c94(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
              }
              uVar24 = *(ulong *)(puVar14 + 0x10);
              puVar13 = puVar14;
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar24) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                FUN_100836c94(puVar13,uVar24 + 1,1,puVar14);
              }
              *(ulong *)(puVar13 + 0x10) = uVar24 + 1;
              *(long *)(puVar13 + uVar24 * 8 + 0x20) = lVar9;
            }
            lVar8 = lVar8 + -1;
            pcVar22 = pcVar22 + 8;
          } while (lVar8 != 0);
        }
LAB_10084cce8:
        _swift_bridgeObjectRelease(pcVar4);
        _swift_release(auStack_f0[1]);
        uVar24 = (ulong)local_d0 | 0x8000000000000000;
        _swift_bridgeObjectRelease(local_68.unknown);
        return uVar24;
      }
      local_80 = uVar24;
      local_78 = local_90;
      uStack_70 = local_98;
      puVar13 = &DAT_100c7d290;
      _swift_getKeyPath(&DAT_100c7d290,&local_80);
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar11);
      bVar6 = (extension_Swift)::Swift::Sequence::_allSatisfy();
      _swift_release(puVar13);
      (*local_e0)();
      if (bVar6) {
        _swift_storeEnumTagMultiPayload();
        local_80 = uVar24;
        local_78 = uVar25;
        uStack_70 = uVar19;
        puVar13 = &DAT_100c7d250;
        _swift_getKeyPath(&DAT_100c7d250,&local_80);
        puVar16 = &DAT_100fe7b28;
        FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
        puVar14 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar11);
        pcVar4 = FUN_100851358;
        FUN_1005f45bc(FUN_100851358,puVar13,uVar11,puVar16,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar14,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        _swift_release(puVar13);
        lVar8 = *(long *)(pcVar4 + 0x10);
        if (lVar8 != 0) {
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pcVar22 = pcVar4 + 0x20;
          do {
            lVar9 = *(long *)pcVar22;
            if (lVar9 != 0) {
              puVar16 = puVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar14 = puVar13;
              if (((ulong)puVar16 & 1) == 0) {
                puVar14 = (undefined *)0x0;
                FUN_100836c94(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
              }
              uVar24 = *(ulong *)(puVar14 + 0x10);
              puVar13 = puVar14;
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar24) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                FUN_100836c94(puVar13,uVar24 + 1,1,puVar14);
              }
              *(ulong *)(puVar13 + 0x10) = uVar24 + 1;
              *(long *)(puVar13 + uVar24 * 8 + 0x20) = lVar9;
            }
            lVar8 = lVar8 + -1;
            pcVar22 = pcVar22 + 8;
          } while (lVar8 != 0);
        }
        goto LAB_10084cce8;
      }
      *unaff_x20 = local_d8;
      unaff_x20[1] = (ulong)local_68.unknown;
      unaff_x20[3] = uStack_c8;
      unaff_x20[2] = (ulong)local_d0;
    }
    _swift_storeEnumTagMultiPayload();
  }
  else if (iVar7 < 5) {
    if (iVar7 != 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10084cd3c);
      (*pcVar4)();
    }
    (**(code **)(*(long *)(local_90 - 8) + 8))(puVar21);
  }
  else if (iVar7 != 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10084c7fc);
    (*pcVar4)();
  }
  return 0xf000000000000007;
}



/* Address: 0x10084cd40 | FUN_10084cd40 */

void FUN_10084cd40(long *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  code *pcVar18;
  char acStack_110 [8];
  char acStack_108 [7];
  char acStack_101 [8];
  undefined4 uStack_f9;
  undefined2 uStack_f5;
  char acStack_f3 [4];
  char acStack_ef [9];
  char acStack_e6 [6];
  char acStack_e0 [8];
  undefined1 auStack_d8 [8];
  long local_d0 [2];
  code *local_c0 [5];
  undefined8 local_98;
  undefined8 local_88;
  undefined *local_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *local_68;
  
  local_c0[1] = *(code **)(param_3 + 0x18);
  puVar17 = *(undefined **)(param_3 + 0x10);
  local_98 = *(undefined8 *)(param_3 + 0x20);
  local_c0[3] = *(code **)(param_3 + 0x20);
  pcVar18 = *(code **)(param_3 + 0x18);
  pcVar6 = (code *)0x0;
  local_c0[0] = (code *)puVar17;
  local_c0[2] = pcVar18;
  FUN_10084a574(0,puVar17,pcVar18);
  lVar15 = *(long *)(pcVar6 + -8);
  lVar10 = -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)local_d0 + lVar10);
  (**(code **)(lVar15 + 0x10))(puVar16);
  puVar7 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,pcVar6);
  iVar5 = (int)puVar7;
  if (iVar5 < 3) {
    if (iVar5 == 1) {
      uVar13 = *(undefined8 *)((long)local_d0 + lVar10 + 8);
      local_c0[2] = (code *)*puVar16;
      _swift_release(*(undefined8 *)((long)local_d0 + lVar10 + 0x10));
      (**(code **)(lVar15 + 8))();
      (**(code **)(*(long *)(pcVar18 + -8) + 0x10))();
      _swift_storeEnumTagMultiPayload();
      uVar11 = local_98;
      pcStack_78 = local_c0[1];
      local_80 = local_c0[0];
      puStack_70 = (undefined *)local_98;
      puVar8 = &DAT_100c7d250;
      local_88 = uVar13;
      _swift_getKeyPath(&DAT_100c7d250,&local_80);
      FUN_10084b968(0xff,puVar17,pcVar18,uVar11);
      uVar11 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar12 = &DAT_100fe7b28;
      FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
      puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar11)
      ;
      pcVar6 = FUN_10084e8e4;
      FUN_1005f45bc(FUN_10084e8e4,puVar8,uVar11,puVar12,
                    PTR___type_metadata_for_Swift_Never_100eadc38,puVar9,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_bridgeObjectRelease(uVar13);
      _swift_release(puVar8);
      lVar10 = *(long *)(pcVar6 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar10 != 0) {
        pcVar14 = pcVar6 + 0x20;
        do {
          lVar15 = *(long *)pcVar14;
          if (lVar15 != 0) {
            puVar12 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar12 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100836c94(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar2 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_100836c94(puVar8,uVar2 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
            *(long *)(puVar8 + uVar2 * 8 + 0x20) = lVar15;
          }
          lVar10 = lVar10 + -1;
          pcVar14 = pcVar14 + 8;
        } while (lVar10 != 0);
      }
      _swift_bridgeObjectRelease(pcVar6);
      *param_1 = (long)local_c0[2];
      param_1[1] = (long)puVar8;
      lVar10 = 0;
      FUN_10084e9b0(0,puVar17,pcVar18,local_98);
      uVar13 = 0;
    }
    else {
      if (iVar5 != 2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10084d37c);
        (*pcVar6)();
      }
      local_d0[1] = *(undefined8 *)((long)local_d0 + lVar10 + 8);
      local_c0[0] = (code *)*puVar16;
      local_d0[0] = *(long *)((long)local_d0 + lVar10 + 0x10);
      _swift_release(*(undefined8 *)((long)local_d0 + lVar10 + 0x18));
      (**(code **)(lVar15 + 8))();
      _swift_storeEnumTagMultiPayload();
      builtin_strncpy(acStack_108 + lVar10,"amContin",8);
      builtin_strncpy(acStack_110 + lVar10,"downstre",8);
      builtin_strncpy(acStack_101 + lVar10,"nuation ",8);
      *(undefined4 *)((long)&uStack_f9 + lVar10) = 0x6f727265;
      *(undefined2 *)((long)&uStack_f5 + lVar10) = 0x2072;
      pcVar1 = acStack_ef + lVar10 + -4;
      pcVar1[0] = 't';
      pcVar1[1] = 'a';
      pcVar1[2] = 's';
      pcVar1[3] = 'k';
      acStack_ef[lVar10] = ' ';
      pcVar1 = acStack_ef + lVar10 + 1;
      builtin_strncpy(acStack_e6 + lVar10,"Continua",8);
      pcVar1[0] = 'u';
      pcVar1[1] = 'p';
      pcVar1[2] = 's';
      pcVar1[3] = 't';
      pcVar1[4] = 'r';
      pcVar1[5] = 'e';
      pcVar1[6] = 'a';
      pcVar1[7] = 'm';
      builtin_strncpy(acStack_e0 + lVar10,"uations ",8);
      auStack_d8[lVar10] = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Optional::typeMetadataAccessor();
      uVar13 = local_98;
      Swift::Result::typeMetadataAccessor();
      local_80 = (undefined *)Swift::UnsafeContinuation::typeMetadataAccessor();
      puVar8 = &DAT_100fe7c30;
      pcStack_78 = pcVar18;
      FUN_1000f8b08(&DAT_100fe7c30,&DAT_100c7d2b0);
      puVar12 = &DAT_100fe7c38;
      puStack_70 = puVar8;
      FUN_1000f8b08(&DAT_100fe7c38,&DAT_100c7d2b8);
      lVar15 = 0;
      local_68 = puVar12;
      _swift_getTupleTypeMetadata(0,0x10004,&local_80,acStack_110 + lVar10,0);
      iVar5 = *(int *)(lVar15 + 0x30);
      iVar3 = *(int *)(lVar15 + 0x40);
      iVar4 = *(int *)(lVar15 + 0x50);
      *param_1 = local_d0[0];
      (**(code **)(*(long *)(pcVar18 + -8) + 0x10))((long)param_1 + (long)iVar5,param_2,pcVar18);
      pcVar6 = local_c0[0];
      lVar10 = local_d0[1];
      *(code **)((long)param_1 + (long)iVar3) = local_c0[0];
      local_88 = local_d0[1];
      puStack_70 = local_c0[3];
      pcStack_78 = local_c0[2];
      puVar8 = &DAT_100c7d250;
      local_80 = puVar17;
      _swift_getKeyPath(&DAT_100c7d250,&local_80);
      FUN_10084b968(0xff,puVar17,pcVar18,uVar13);
      uVar13 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_retain(pcVar6);
      puVar12 = &DAT_100fe7b28;
      FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
      puVar9 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar13)
      ;
      pcVar6 = FUN_100851358;
      FUN_1005f45bc(FUN_100851358,puVar8,uVar13,puVar12,
                    PTR___type_metadata_for_Swift_Never_100eadc38,puVar9,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_bridgeObjectRelease(lVar10);
      _swift_release(puVar8);
      *(undefined **)((long)param_1 + (long)iVar4) = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar10 = *(long *)(pcVar6 + 0x10);
      local_c0[2] = pcVar6;
      if (lVar10 != 0) {
        puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        pcVar6 = pcVar6 + 0x20;
        do {
          lVar15 = *(long *)pcVar6;
          if (lVar15 != 0) {
            puVar12 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar12 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100836c94(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar2 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_100836c94(puVar8,uVar2 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
            *(long *)(puVar8 + uVar2 * 8 + 0x20) = lVar15;
            *(undefined **)((long)param_1 + (long)iVar4) = puVar8;
          }
          lVar10 = lVar10 + -1;
          pcVar6 = pcVar6 + 8;
        } while (lVar10 != 0);
      }
      _swift_release(local_c0[0]);
      _swift_bridgeObjectRelease(local_c0[2]);
      lVar10 = 0;
      FUN_10084e9b0(0,puVar17,pcVar18,local_98);
      uVar13 = 1;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar10,uVar13);
    pcVar6 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
    uVar13 = 0;
  }
  else {
    if (iVar5 < 5) {
      if (iVar5 == 3) {
        pcVar14 = *(code **)(lVar15 + 8);
      }
      else {
        pcVar14 = *(code **)(*(long *)(pcVar18 + -8) + 8);
        pcVar6 = pcVar18;
      }
      (*pcVar14)(puVar16,pcVar6);
    }
    else if (iVar5 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10084d0ec);
      (*pcVar6)();
    }
    lVar10 = 0;
    FUN_10084e9b0(0,puVar17,pcVar18,local_98);
    pcVar6 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
    uVar13 = 1;
  }
  (*pcVar6)(param_1,uVar13,1,lVar10);
  return;
}



/* Address: 0x10084d37c | FUN_10084d37c */

ulong FUN_10084d37c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong local_b0 [7];
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_b0[3] = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  local_b0[1] = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(ulong *)(param_1 + 0x18);
  lVar4 = 0;
  local_b0[0] = uVar16;
  local_b0[2] = uVar15;
  FUN_10084a574(0,uVar15,uVar16,uVar10);
  lVar14 = *(long *)(lVar4 + -8);
  lVar11 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (ulong *)((long)local_b0 + lVar11);
  (**(code **)(lVar14 + 0x10))(puVar13);
  puVar5 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        uVar2 = *(undefined8 *)((long)local_b0 + lVar11 + 8);
        uVar1 = *(ulong *)((long)local_b0 + lVar11 + 0x10);
        _swift_release(*(undefined8 *)((long)local_b0 + lVar11 + 0x18));
        (**(code **)(lVar14 + 8))();
        _swift_storeEnumTagMultiPayload();
        local_70 = local_b0[1];
        uStack_78 = local_b0[0];
        puVar6 = &DAT_100c7d250;
        local_b0[6] = uVar15;
        local_68 = uVar2;
        _swift_getKeyPath(&DAT_100c7d250,local_b0 + 6);
        FUN_10084b968(0xff,uVar15,uVar16,uVar10);
        uVar10 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        puVar8 = &DAT_100fe7b28;
        FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
        puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar10);
        pcVar9 = FUN_100851358;
        FUN_1005f45bc(FUN_100851358,puVar6,uVar10,puVar8,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar7,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        _swift_bridgeObjectRelease(uVar2);
        _swift_release(puVar6);
        lVar11 = *(long *)(pcVar9 + 0x10);
        if (lVar11 != 0) {
          puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pcVar12 = pcVar9 + 0x20;
          do {
            lVar4 = *(long *)pcVar12;
            if (lVar4 != 0) {
              puVar8 = puVar6;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar7 = puVar6;
              if (((ulong)puVar8 & 1) == 0) {
                puVar7 = (undefined *)0x0;
                FUN_100836c94(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
              }
              uVar16 = *(ulong *)(puVar7 + 0x10);
              puVar6 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
                puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                FUN_100836c94(puVar6,uVar16 + 1,1,puVar7);
              }
              *(ulong *)(puVar6 + 0x10) = uVar16 + 1;
              *(long *)(puVar6 + uVar16 * 8 + 0x20) = lVar4;
            }
            lVar11 = lVar11 + -1;
            pcVar12 = pcVar12 + 8;
          } while (lVar11 != 0);
        }
        _swift_bridgeObjectRelease(pcVar9);
        return uVar1;
      }
      uVar1 = *puVar13;
      uVar2 = *(undefined8 *)((long)local_b0 + lVar11 + 8);
      _swift_release(*(undefined8 *)((long)local_b0 + lVar11 + 0x10));
      (**(code **)(lVar14 + 8))();
      _swift_storeEnumTagMultiPayload();
      uStack_78 = local_b0[3];
      local_b0[6] = local_b0[2];
      puVar6 = &DAT_100c7d250;
      local_70 = uVar10;
      local_68 = uVar2;
      _swift_getKeyPath(&DAT_100c7d250,local_b0 + 6);
      FUN_10084b968(0xff,uVar15,uVar16,uVar10);
      uVar10 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar8 = &DAT_100fe7b28;
      FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
      puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar10)
      ;
      pcVar9 = FUN_100851358;
      FUN_1005f45bc(FUN_100851358,puVar6,uVar10,puVar8,PTR___type_metadata_for_Swift_Never_100eadc38
                    ,puVar7,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(puVar6);
      lVar11 = *(long *)(pcVar9 + 0x10);
      if (lVar11 != 0) {
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        pcVar12 = pcVar9 + 0x20;
        do {
          lVar4 = *(long *)pcVar12;
          if (lVar4 != 0) {
            puVar8 = puVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar7 = puVar6;
            if (((ulong)puVar8 & 1) == 0) {
              puVar7 = (undefined *)0x0;
              FUN_100836c94(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
            }
            uVar16 = *(ulong *)(puVar7 + 0x10);
            puVar6 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              FUN_100836c94(puVar6,uVar16 + 1,1,puVar7);
            }
            *(ulong *)(puVar6 + 0x10) = uVar16 + 1;
            *(long *)(puVar6 + uVar16 * 8 + 0x20) = lVar4;
          }
          lVar11 = lVar11 + -1;
          pcVar12 = pcVar12 + 8;
        } while (lVar11 != 0);
      }
      _swift_bridgeObjectRelease(pcVar9);
      return uVar1 | 0x8000000000000000;
    }
  }
  else {
    if (4 < iVar3) {
      if (iVar3 == 5) {
        return 0xf000000000000007;
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10084d7d0);
      (*pcVar9)();
    }
    if (iVar3 != 3) {
      (**(code **)(*(long *)(uVar16 - 8) + 8))(puVar13,uVar16);
      return 0xf000000000000007;
    }
  }
  pcVar9 = *(code **)(lVar14 + 8);
  (*pcVar9)(puVar13,lVar4);
  (*pcVar9)();
  _swift_storeEnumTagMultiPayload();
  return 0xf000000000000007;
}



/* Address: 0x10084d7d0 | FUN_10084d7d0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010084dd2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10084d7d0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  Result RVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UnsafeContinuation UVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  __int64 _Var17;
  _ContiguousArrayBuffer<undefined> _Var18;
  undefined8 uVar19;
  code *pcVar20;
  long *unaff_x20;
  long *plVar21;
  _ArrayBuffer _Var22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  long local_f0;
  code *local_e8;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  long local_70;
  _ArrayBuffer local_68;
  
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  puVar27 = *(undefined **)(param_3 + 0x10);
  lVar1 = *(long *)(param_3 + 0x18);
  uVar19 = *(undefined8 *)(param_3 + 0x20);
  lVar5 = 0;
  FUN_10084a574(0,puVar27,lVar1,uVar19);
  lVar23 = *(long *)(lVar5 + -8);
  lVar10 = -(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar21 = (long *)((long)&local_f0 + lVar10);
  (**(code **)(lVar23 + 0x10))(plVar21);
  plVar6 = plVar21;
  _swift_getEnumCaseMultiPayload(plVar21,lVar5);
  iVar4 = (int)plVar6;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      *param_1 = *plVar21;
      uVar7 = 0;
      FUN_10084e9bc(0,puVar27,lVar1,uVar19);
      uVar19 = 0;
      goto LAB_10084de18;
    }
    if (iVar4 != 1) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10084de44);
      (*pcVar20)();
    }
    lVar25 = *(long *)((long)&local_e8 + lVar10);
    lVar28 = *plVar21;
    puVar2 = *(undefined **)((long)&local_e8 + lVar10);
    local_70 = *(long *)(&stack0xffffffffffffff20 + lVar10);
    pcVar20 = *(code **)(lVar23 + 8);
    local_68.unknown = puVar2;
    (*pcVar20)();
    _swift_storeEnumTagMultiPayload();
    uVar8 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    FUN_1006883a0(0,uVar8);
    FUN_100681318(&local_90);
    _Var22.unknown = local_90;
    if (local_90 == (undefined *)0x0) {
      puVar11 = &DAT_100c7d250;
      local_f0 = lVar5;
      local_e8 = pcVar20;
      local_90 = puVar27;
      uStack_88 = uVar7;
      local_80 = uVar19;
      puStack_78 = puVar2;
      _swift_getKeyPath(&DAT_100c7d250,&local_90);
      lVar5 = 0xff;
      FUN_10084b968(0xff,puVar27,lVar1,uVar19);
      uVar7 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_bridgeObjectRetain(puVar2);
      puVar12 = &DAT_100fe7b28;
      FUN_1000f7830(&DAT_100fe7b28,&DAT_100c7d1c8);
      puVar13 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar7);
      pcVar20 = FUN_100851358;
      FUN_1005f45bc(FUN_100851358,puVar11,uVar7,puVar12,
                    PTR___type_metadata_for_Swift_Never_100eadc38,puVar13,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      _swift_bridgeObjectRelease(puVar2);
      _swift_release(puVar11);
      lVar10 = *(long *)(pcVar20 + 0x10);
      pcVar15 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
      pcVar14 = pcVar20;
      if (lVar10 != 0) {
        pcVar24 = pcVar20 + 0x20;
        do {
          lVar23 = *(long *)pcVar24;
          if (lVar23 != 0) {
            pcVar14 = pcVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            pcVar16 = pcVar15;
            if (((ulong)pcVar14 & 1) == 0) {
              pcVar16 = (code *)0x0;
              FUN_100836c94(0,*(long *)(pcVar15 + 0x10) + 1,1,pcVar15);
              pcVar14 = pcVar16;
            }
            uVar26 = *(ulong *)(pcVar16 + 0x10);
            pcVar15 = pcVar16;
            if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar26) {
              pcVar15 = (code *)(ulong)(1 < *(ulong *)(pcVar16 + 0x18));
              FUN_100836c94(pcVar15,uVar26 + 1,1,pcVar16);
              pcVar14 = pcVar15;
            }
            *(ulong *)(pcVar15 + 0x10) = uVar26 + 1;
            *(long *)(pcVar15 + uVar26 * 8 + 0x20) = lVar23;
          }
          lVar10 = lVar10 + -1;
          pcVar24 = pcVar24 + 8;
        } while (lVar10 != 0);
      }
      _swift_bridgeObjectRelease(pcVar20);
      _Var17 = Swift::Array<undefined>::get_count(pcVar14,lVar5);
      if (_Var17 < 0) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10084de40);
        (*pcVar20)();
      }
      _Var22.unknown = local_68.unknown;
      if (_Var17 != 0) {
        lVar10 = 0;
        do {
          lVar23 = lVar10 + 1;
          Swift::Array<undefined>::_makeMutableAndUnique(uVar7);
          _Var22.unknown = local_68.unknown;
          FUN_100662648(lVar10,local_68.unknown,lVar5);
          _Var18 = Swift::_ArrayBuffer::get__native(_Var22);
          lVar25 = *(long *)(lVar5 + -8);
          uVar26 = (ulong)*(byte *)(lVar25 + 0x50);
          _swift_release();
          *(undefined8 *)
           (_Var18.unknown +
           *(long *)(lVar25 + 0x48) * lVar10 + (uVar26 + 0x20 & (uVar26 ^ 0xffffffffffffffff))) = 0;
          lVar10 = lVar23;
        } while (_Var17 != lVar23);
      }
      lVar10 = local_f0;
      (*local_e8)(unaff_x20,local_f0);
      *unaff_x20 = lVar28;
      unaff_x20[1] = (long)_Var22.unknown;
      unaff_x20[2] = param_2;
      unaff_x20[3] = local_70;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,2);
      *param_1 = (long)pcVar15;
      uVar7 = 0;
      FUN_10084e9bc(0,puVar27,lVar1,uVar19);
      uVar19 = 1;
      goto LAB_10084de18;
    }
    (*pcVar20)();
    unaff_x20[1] = lVar25;
    *unaff_x20 = lVar28;
    unaff_x20[2] = local_70;
LAB_10084d988:
    _swift_storeEnumTagMultiPayload();
    Swift::Optional::typeMetadataAccessor();
    RVar3 = Swift::Result::typeMetadataAccessor();
    UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar10 = 0;
    _swift_getTupleTypeMetadata2(0,UVar9.unknown,RVar3.value,"downstreamContinuation result ",0);
    iVar4 = *(int *)(lVar10 + 0x30);
    *param_1 = param_2;
    *(undefined **)((long)param_1 + (long)iVar4) = _Var22.unknown;
    _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar4,RVar3.value,0);
    uVar7 = 0;
    FUN_10084e9bc(0,puVar27,lVar1,uVar19);
    uVar19 = 2;
  }
  else {
    if (iVar4 < 5) {
      if (iVar4 != 3) {
        Swift::Array<undefined>::typeMetadataAccessor();
        Swift::Optional::typeMetadataAccessor();
        RVar3 = Swift::Result::typeMetadataAccessor();
        UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar10 = 0;
        _swift_getTupleTypeMetadata2(0,UVar9.unknown,RVar3.value,"downstreamContinuation result ",0)
        ;
        iVar4 = *(int *)(lVar10 + 0x30);
        (**(code **)(*(long *)(lVar1 + -8) + 0x20))((long)param_1 + (long)iVar4,plVar21,lVar1);
        (**(code **)(lVar23 + 8))();
        _swift_storeEnumTagMultiPayload();
        *param_1 = param_2;
        _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar4,RVar3.value,1);
        uVar7 = 0;
        FUN_10084e9bc(0,puVar27,lVar1,uVar19);
        uVar19 = 2;
        goto LAB_10084de18;
      }
      local_90 = (undefined *)*plVar21;
      pcVar20 = *(code **)(lVar23 + 8);
      (*pcVar20)();
      _swift_storeEnumTagMultiPayload();
      uVar7 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      FUN_1006883a0(0,uVar7);
      FUN_100681318(&local_68);
      _Var22.unknown = local_68.unknown;
      if (local_68.unknown != (undefined *)0x0) {
        (*pcVar20)();
        *unaff_x20 = (long)local_90;
        goto LAB_10084d988;
      }
      _swift_release(local_90);
      (*pcVar20)();
      _swift_storeEnumTagMultiPayload();
    }
    else if (iVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10084da38);
      (*pcVar20)();
    }
    *param_1 = param_2;
    uVar7 = 0;
    FUN_10084e9bc(0,puVar27,lVar1,uVar19);
    uVar19 = 3;
  }
LAB_10084de18:
  _swift_storeEnumTagMultiPayload(param_1,uVar7,uVar19);
  return;
}



/* Address: 0x10084de44 | FUN_10084de44 */

void FUN_10084de44(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10084de50 | FUN_10084de50 */

undefined1  [16] FUN_10084de50(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c7d210;
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = &DAT_100c7d228;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
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



/* Address: 0x10084ded0 | FUN_10084ded0 */

long * FUN_10084ded0(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  uVar2 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  sVar3 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar3 = sVar3 + 1;
  }
  if (((uint)uVar2 < 8 && (*(uint *)(lVar7 + 0x50) & 0x100000) == 0) &&
      sVar3 - (-uVar2 - 9 | uVar2) < 0x19) {
    *param_1 = *param_2;
    pvVar5 = (void *)((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
    pvVar6 = (void *)((long)param_2 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
    pvVar1 = pvVar6;
    (**(code **)(lVar7 + 0x30))(pvVar6,1,lVar4);
    if ((int)pvVar1 == 0) {
      (**(code **)(lVar7 + 0x10))(pvVar5,pvVar6,lVar4);
      (**(code **)(lVar7 + 0x38))(pvVar5,0,1,lVar4);
    }
    else {
      _memcpy(pvVar5,pvVar6,sVar3);
    }
    *(undefined1 *)((long)pvVar5 + sVar3) = *(undefined1 *)((long)pvVar6 + sVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10084dfe4 | FUN_10084dfe4 */

undefined8 * FUN_10084dfe4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar4 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar5 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar5;
  (**(code **)(lVar8 + 0x30))(pvVar5,1,lVar7);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x10))(pvVar4,pvVar5,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar4,0,1,lVar7);
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar6 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar4,pvVar5,sVar1);
  }
  if (iVar6 == 0) {
    sVar9 = sVar9 + 1;
  }
  *(undefined1 *)(sVar9 + (long)pvVar4) = *(undefined1 *)(sVar9 + (long)pvVar5);
  return param_1;
}



/* Address: 0x10084e0b8 | FUN_10084e0b8 */

undefined8 * FUN_10084e0b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar5 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar6 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar1 = pvVar5;
  (*pcVar9)(pvVar5,1,lVar7);
  pvVar2 = pvVar6;
  (*pcVar9)(pvVar6,1,lVar7);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x18))(pvVar5,pvVar6,lVar7);
      goto LAB_10084e18c;
    }
    (**(code **)(lVar8 + 8))(pvVar5,lVar7);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x10))(pvVar5,pvVar6,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar5,0,1,lVar7);
    goto LAB_10084e18c;
  }
  sVar4 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(pvVar5,pvVar6,sVar4);
LAB_10084e18c:
  lVar7 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + (long)pvVar5) = *(undefined1 *)(lVar7 + (long)pvVar6);
  return param_1;
}



/* Address: 0x10084e1d8 | FUN_10084e1d8 */

undefined8 * FUN_10084e1d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar4 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar5 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar5;
  (**(code **)(lVar8 + 0x30))(pvVar5,1,lVar7);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(pvVar4,pvVar5,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar4,0,1,lVar7);
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar6 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(pvVar4,pvVar5,sVar1);
  }
  if (iVar6 == 0) {
    sVar9 = sVar9 + 1;
  }
  *(undefined1 *)(sVar9 + (long)pvVar4) = *(undefined1 *)(sVar9 + (long)pvVar5);
  return param_1;
}



/* Address: 0x10084e2ac | FUN_10084e2ac */

undefined8 * FUN_10084e2ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  pvVar5 = (void *)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff));
  pvVar6 = (void *)(uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar1 = pvVar5;
  (*pcVar9)(pvVar5,1,lVar7);
  pvVar2 = pvVar6;
  (*pcVar9)(pvVar6,1,lVar7);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x28))(pvVar5,pvVar6,lVar7);
      goto LAB_10084e380;
    }
    (**(code **)(lVar8 + 8))(pvVar5,lVar7);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar8 + 0x20))(pvVar5,pvVar6,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar5,0,1,lVar7);
    goto LAB_10084e380;
  }
  sVar4 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(pvVar5,pvVar6,sVar4);
LAB_10084e380:
  lVar7 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + (long)pvVar5) = *(undefined1 *)(lVar7 + (long)pvVar6);
  return param_1;
}



/* Address: 0x10084e3cc | FUN_10084e3cc */

int FUN_10084e3cc(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = iVar3 - 1;
  }
  uVar2 = uVar6;
  if (uVar6 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar1 = 1;
  if (iVar3 == 0) {
    lVar1 = 2;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar4 = *(byte *)(lVar9 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10084e48c;
  uVar8 = lVar1 + *(long *)(lVar9 + 0x40) + ((ulong)bVar4 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff))
  ;
  uVar7 = (uint)uVar8;
  uVar5 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar10 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f);
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_10084e48c;
      goto LAB_10084e44c;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_10084e44c:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar10 != 0) {
    uVar6 = 0;
    if (uVar7 < 4) {
      uVar6 = uVar10 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar5 = 4;
      if (uVar7 < 4) {
        uVar5 = uVar7;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)(uint)*param_1;
      }
    }
    return uVar2 + ((uint)uVar8 | uVar6) + 1;
  }
LAB_10084e48c:
  if (uVar6 < 0x7fffffff) {
    uVar8 = *param_1;
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar3 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar3 = (int)uVar8;
    }
    return iVar3;
  }
  uVar6 = (int)param_1 + (uint)bVar4 + 8 & ~(uint)bVar4;
  (**(code **)(lVar9 + 0x30))();
  iVar3 = 0;
  if (uVar6 != 0) {
    iVar3 = uVar6 - 1;
  }
  return iVar3;
}



/* Address: 0x10084e540 | FUN_10084e540 */

void FUN_10084e540(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar12 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar12 != 0) {
    uVar2 = iVar12 - 1;
  }
  uVar7 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar7 = 0x7ffffffe;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar12 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = sVar6 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 1;
  uVar5 = (uint)sVar1;
  bVar10 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    if (uVar5 < 4) {
      uVar3 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
      bVar10 = 2;
      if (0xfffe < uVar3) {
        bVar10 = 4;
      }
      if (uVar3 < 0xff) {
        bVar10 = uVar3 != 0;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar12;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar12;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *param_1 = (ulong)param_2;
        }
        else {
          *param_1 = 0;
          *(uint *)param_1 = param_2 + 0x80000001;
        }
      }
      else {
        puVar11 = (uint *)((long)param_1 + uVar9 + 8 & ~uVar9);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010084e764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar11,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar11,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar11 = (char)uVar7;
            }
            else {
              *(short *)puVar11 = (short)uVar7;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar11 = (short)uVar7;
            *(char *)((long)puVar11 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *puVar11 = uVar7;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10084e7e4 | FUN_10084e7e4 */

undefined8 FUN_10084e7e4(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  UnsafeMutablePointer<undefined> UVar2;
  code *pcVar3;
  long lVar4;
  tuple2_conflict3 tVar5;
  
  lVar4 = *(long *)(param_3 + -8);
  puVar1 = &stack0xffffffffffffffa0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  tVar5 = Swift::Array<undefined>::_allocateUninitialized(param_2,param_3);
  UVar2 = tVar5._.unknown;
  if (-1 < param_2) {
    if (param_2 != 0) {
      pcVar3 = *(code **)(lVar4 + 0x10);
      (*pcVar3)(puVar1,param_1,param_3);
      FUN_1006331c4(puVar1,UVar2.unknown,param_3);
      param_2 = param_2 + -1;
      if (param_2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x48);
        do {
          UVar2.unknown = UVar2.unknown + lVar4;
          (*pcVar3)(puVar1,param_1,param_3);
          FUN_1006331c4(puVar1,UVar2.unknown,param_3);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    Swift::Array<undefined>::typeMetadataAccessor();
    return tVar5._0_8_;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10084e8d8);
  (*pcVar3)();
}



/* Address: 0x10084e8d8 | FUN_10084e8d8 */

void FUN_10084e8d8(void)

{
  FUN_100024ee0();
  return;
}


