/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a85c5c | FUN_100a85c5c */

void FUN_100a85c5c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 in_x3;
  long in_x5;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,in_x3,0x100ccaf78,&TargetProtocolRequirement_100ccafa0)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,in_x3,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  lVar5 = *(long *)(in_x5 + 8);
  piVar6 = *(int **)(lVar5 + 0x60);
  uVar3 = 0;
  _swift_checkMetadataState(0,uVar2);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar3,lVar5);
  return;
}



/* Address: 0x100a85d38 | FUN_100a85d38 */

void FUN_100a85d38(void)

{
  FUN_100a86180(&TargetProtocolRequirement_100ccafa0);
  return;
}



/* Address: 0x100a85d44 | FUN_100a85d44 */

void FUN_100a85d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a85c5c(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a85dfc | FUN_100a85dfc */

void FUN_100a85dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,param_1,param_2,1,param_3,param_4);
  return;
}



/* Address: 0x100a85e90 | FUN_100a85e90 */

void FUN_100a85e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x48);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,param_1,param_2,1,param_3,param_4);
  return;
}



/* Address: 0x100a85f24 | FUN_100a85f24 */

void FUN_100a85f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  piVar3 = *(int **)(param_4 + 0x78);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a611d4;
                    /* WARNING: Could not recover jumptable at 0x000100a85fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_2,0,param_3,param_4);
  return;
}



/* Address: 0x100a85fb4 | FUN_100a85fb4 */

void FUN_100a85fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_10 + 0x90);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a86078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x100a8607c | FUN_100a8607c */

void FUN_100a8607c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  _swift_task_switch(FUN_100a86094,0,0);
  return;
}



/* Address: 0x100a86094 | FUN_100a86094 */

void FUN_100a86094(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_willThrow();
  _swift_errorRetain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a860dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a860e0 | FUN_100a860e0 */

void FUN_100a860e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a86174 | FUN_100a86174 */

void FUN_100a86174(void)

{
  FUN_100a86180(&TargetProtocolRequirement_100ccaf98);
  return;
}



/* Address: 0x100a86180 | FUN_100a86180 */

void FUN_100a86180(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),0x100ccaf78,
             param_1);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100a861ec | FUN_100a861ec */

void FUN_100a861ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccaf78,&TargetProtocolRequirement_100ccaf98);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a85aa8(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a862a4 | FUN_100a862a4 */

void FUN_100a862a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a862cc,0,0);
  return;
}



/* Address: 0x100a862cc | FUN_100a862cc */

void FUN_100a862cc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  puVar2 = &DAT_100f2e1a0;
  _swift_allocObject(&DAT_100f2e1a0,0x20,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  piVar5 = *(int **)(lVar6 + 0x90);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1008eb2b0;
                    /* WARNING: Could not recover jumptable at 0x000100a86390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),0,1,0,
             *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),&UNK_100c925a0,
             puVar2,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x100a86394 | FUN_100a86394 */

void FUN_100a86394(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10072a740;
                    /* WARNING: Could not recover jumptable at 0x000100a86404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(param_1,param_3);
  return;
}



/* Address: 0x100a86408 | FUN_100a86408 */

void FUN_100a86408(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a8642c | FUN_100a8642c */

void FUN_100a8642c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10072a740;
  FUN_100a86394(param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x100a864ac | FUN_100a864ac */

void FUN_100a864ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_8 + 0x90);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a8656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,8,0,0,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a86570 | FUN_100a86570 */

void FUN_100a86570(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100838ee4;
                    /* WARNING: Could not recover jumptable at 0x000100a865f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,8,0,1,param_2,param_3);
  return;
}



/* Address: 0x100a865fc | FUN_100a865fc */

void FUN_100a865fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100838ee4;
                    /* WARNING: Could not recover jumptable at 0x000100a8668c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,8,0,param_2,param_3,param_4);
  return;
}



/* Address: 0x100a86690 | FUN_100a86690 */

void FUN_100a86690(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x50);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a8671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,0x1ed,param_3,param_4);
  return;
}



/* Address: 0x100a86720 | FUN_100a86720 */

void FUN_100a86720(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(long *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined2 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  lVar2 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  _swift_task_switch(FUN_100a86790,0,0);
  return;
}



/* Address: 0x100a86790 | FUN_100a86790 */

void FUN_100a86790(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68);
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain();
    FUN_1005b62ec(0x5858585858585858,&DAT_e800000000000000);
    *(long *)(unaff_x22 + 200) = lVar2;
    piVar4 = *(int **)(*(long *)(unaff_x22 + 0x90) + 0x70);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a869a0;
                    /* WARNING: Could not recover jumptable at 0x000100a8682c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))
              (lVar2,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x90));
    return;
  }
  piVar4 = *(int **)(*(long *)(unaff_x22 + 0x90) + 0x68);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a86884;
                    /* WARNING: Could not recover jumptable at 0x000100a86880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x100a86884 | FUN_100a86884 */

void FUN_100a86884(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100a868dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  _swift_task_switch(FUN_100a86908,0,0);
  return;
}



/* Address: 0x100a86908 | FUN_100a86908 */

void FUN_100a86908(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_1005b62ec(0x5858585858585858,&DAT_e800000000000000);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  piVar4 = *(int **)(*(long *)(unaff_x22 + 0x90) + 0x70);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a869a0;
                    /* WARNING: Could not recover jumptable at 0x000100a8699c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (uVar3,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x100a869a0 | FUN_100a869a0 */

void FUN_100a869a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 200);
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xd8) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100a86a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a86a2c,0,0);
  return;
}



/* Address: 0x100a86a2c | FUN_100a86a2c */

void FUN_100a86a2c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(byte *)(unaff_x22 + 0x48) = (byte)*(undefined2 *)(unaff_x22 + 0xf8) & 1;
  *(byte *)(unaff_x22 + 0x49) = (byte)((ushort)*(undefined2 *)(unaff_x22 + 0xf8) >> 8) & 1;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(lVar3 + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x98),uVar12);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar1 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100f2e1c8;
  _swift_allocObject(&DAT_100f2e1c8,uVar10 + 8,uVar5 | 7);
  *(undefined **)(unaff_x22 + 0xe0) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar12;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  (**(code **)(lVar3 + 0x20))(puVar4 + uVar9,uVar2,uVar12);
  *(undefined8 *)(puVar4 + uVar10) = uVar7;
  plVar6 = (long *)0xe0;
  _swift_bridgeObjectRetain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a86b78;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x60),&DAT_100c925d8,unaff_x22 + 0x10,
                &DAT_100c925e8,puVar4,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x100a86b78 | FUN_100a86b78 */

void FUN_100a86b78(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 != 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0xe0));
    _swift_task_switch(FUN_100a86c0c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0xd8);
  uVar3 = *(undefined8 *)(lVar2 + 0xb0);
  _swift_release(*(undefined8 *)(lVar2 + 0xe0));
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a86c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100a86c0c | FUN_100a86c0c */

void FUN_100a86c0c(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100a86c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a86c50 | FUN_100a86c50 */

void FUN_100a86c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_8;
  *(undefined8 *)(unaff_x22 + 0x88) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined2 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_100a86c80,0,0);
  return;
}



/* Address: 0x100a86c80 | FUN_100a86c80 */

void FUN_100a86c80(void)

{
  ushort uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ushort *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x60);
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006e2490;
  FUN_100a84f14(plVar2,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x60),
                uVar1 & 0x101,&UNK_100c92660,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x100a86d14 | FUN_100a86d14 */

void FUN_100a86d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar7 = *(byte *)(unaff_x20 + 0x38);
  uVar9 = 0x100;
  if (*(char *)(unaff_x20 + 0x39) == '\0') {
    uVar9 = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_1005c804c;
  FUN_100a86c50(plVar8,param_1,uVar5,uVar10,uVar9 | bVar7,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a86dd4 | FUN_100a86dd4 */

void FUN_100a86dd4(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a86e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,param_1,param_2,param_5);
  return;
}



/* Address: 0x100a86e5c | FUN_100a86e5c */

void FUN_100a86e5c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x6;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(in_x6 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a86eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(in_x3,8,0,1,in_x4,in_x6);
  return;
}



/* Address: 0x100a86ef0 | FUN_100a86ef0 */

void FUN_100a86ef0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a86f54 | FUN_100a86f54 */

void FUN_100a86f54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a86e5c(param_1,param_2,unaff_x20 + uVar5,uVar7,lVar1,uVar2,uVar6);
  return;
}



/* Address: 0x100a87008 | FUN_100a87008 */

void FUN_100a87008(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a86dd4(plVar7,param_1,param_2,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a870a4 | FUN_100a870a4 */

undefined1 FUN_100a870a4(char param_1)

{
  if ((byte)(param_1 - 1U) < 0xe) {
    return (&DAT_100c92812)[(byte)(param_1 - 1U)];
  }
  return 8;
}



/* Address: 0x100a870d0 | thunk_FUN_100a87258 */

void thunk_FUN_100a87258(void)

{
  FUN_100a87258();
  return;
}



/* Address: 0x100a870d4 | FUN_100a870d4 */

void FUN_100a870d4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff7050;
  FUN_1000f7830(&DAT_100ff7050,&DAT_100c92808);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x100a87114 | FUN_100a87114 */

undefined1  [16] FUN_100a87114(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 4) {
    puVar4 = (undefined1 *)0xe900000000000072;
    uVar1 = 0x6574636172616863;
    if (param_1 != 2) {
      puVar4 = &DAT_e400000000000000;
      uVar1 = 0x6f666966;
    }
    uVar2 = 0x72616c75676572;
    if (param_1 != 0) {
      uVar2 = 0x6b636f6c62;
    }
    puVar3 = &DAT_e700000000000000;
    if (param_1 != 0) {
      puVar3 = &DAT_e500000000000000;
    }
    if (param_1 < 2) {
      puVar4 = puVar3;
      uVar1 = uVar2;
    }
    auVar6._8_8_ = puVar4;
    auVar6._0_8_ = uVar1;
    return auVar6;
  }
  uVar1 = 0x74756f6574696877;
  if (param_1 != 7) {
    uVar1 = 0x6e776f6e6b6e75;
  }
  puVar4 = &DAT_e800000000000000;
  if (param_1 != 7) {
    puVar4 = &DAT_e700000000000000;
  }
  uVar2 = 0x74656b636f73;
  if (param_1 != 6) {
    uVar2 = uVar1;
  }
  puVar3 = &DAT_e600000000000000;
  if (param_1 != 6) {
    puVar3 = puVar4;
  }
  puVar4 = (undefined1 *)0xe900000000000079;
  uVar1 = 0x726f746365726964;
  if (param_1 != 4) {
    puVar4 = &DAT_e700000000000000;
    uVar1 = 0x6b6e696c6d7973;
  }
  if (param_1 < 6) {
    puVar3 = puVar4;
    uVar2 = uVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x100a87228 | FUN_100a87228 */

void FUN_100a87228(void)

{
  undefined1 *unaff_x20;
  
  FUN_100a87114(*unaff_x20);
  return;
}



/* Address: 0x100a87230 | thunk_FUN_100a87338 */

void thunk_FUN_100a87338(void)

{
  FUN_100a87338();
  return;
}



/* Address: 0x100a87234 | FUN_100a87234 */

void FUN_100a87234(undefined8 *param_1,undefined8 param_2)

{
  FUN_100a87338();
  *param_1 = param_2;
  return;
}



/* Address: 0x100a87258 | FUN_100a87258 */

undefined4 FUN_100a87258(ushort param_1)

{
  __uint16 _Var1;
  undefined4 uVar2;
  
  _Var1 = Darwin::get_S_IFMT();
  param_1 = _Var1 & param_1;
  _Var1 = Darwin::get_S_IFIFO();
  if (_Var1 == param_1) {
    uVar2 = 3;
  }
  else {
    _Var1 = Darwin::get_S_IFCHR();
    if (_Var1 == param_1) {
      uVar2 = 2;
    }
    else {
      _Var1 = Darwin::get_S_IFDIR();
      if (_Var1 == param_1) {
        uVar2 = 4;
      }
      else {
        _Var1 = Darwin::get_S_IFBLK();
        if (_Var1 == param_1) {
          uVar2 = 1;
        }
        else {
          _Var1 = Darwin::get_S_IFREG();
          if (_Var1 == param_1) {
            uVar2 = 0;
          }
          else {
            _Var1 = Darwin::get_S_IFLNK();
            if (_Var1 == param_1) {
              uVar2 = 5;
            }
            else {
              _Var1 = Darwin::get_S_IFSOCK();
              if (_Var1 == param_1) {
                uVar2 = 6;
              }
              else {
                _Var1 = Darwin::get_S_IFWHT();
                uVar2 = 7;
                if (_Var1 != param_1) {
                  uVar2 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Address: 0x100a87338 | FUN_100a87338 */

void FUN_100a87338(void)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100a8f60c(0,9,0);
  lVar4 = 0;
  uVar5 = *(ulong *)(puVar3 + 0x10);
  do {
    uVar2 = (&DAT_100ff7040)[lVar4];
    uVar1 = uVar5 + 1;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
      FUN_100a8f60c(1 < *(ulong *)(puVar3 + 0x18),uVar1,1);
    }
    lVar4 = lVar4 + 1;
    *(ulong *)(puVar3 + 0x10) = uVar1;
    puVar3[uVar5 + 0x20] = uVar2;
    uVar5 = uVar1;
  } while (lVar4 != 9);
  return;
}



/* Address: 0x100a873f8 | thunk_FUN_100a873fc */

void thunk_FUN_100a873fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fe8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c926a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c926a8,&DAT_100f2e250);
  DAT_100ff6fe8 = pTVar1;
  return;
}



/* Address: 0x100a873fc | FUN_100a873fc */

void FUN_100a873fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fe8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c926a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c926a8,&DAT_100f2e250);
  DAT_100ff6fe8 = pTVar1;
  return;
}



/* Address: 0x100a8743c | FUN_100a8743c */

void FUN_100a8743c(void)

{
  FUN_100583fb4(&DAT_100ff6ff0,&DAT_100ff6ff8,&DAT_100c926f8);
  return;
}



/* Address: 0x100a87468 | FUN_100a87468 */

undefined1  [16] FUN_100a87468(void)

{
  return ZEXT816(0x100f2e250);
}



/* Address: 0x100a87478 | thunk_FUN_10040a868 */

void thunk_FUN_10040a868(void)

{
  FUN_10040a868();
  return;
}



/* Address: 0x100a8747c | thunk_FUN_10040a8f8 */

void thunk_FUN_10040a8f8(void)

{
  FUN_10040a8f8();
  return;
}



/* Address: 0x100a87480 | FUN_100a87480 */

undefined1  [16] FUN_100a87480(void)

{
  return ZEXT816(0x100f2e2e8);
}



/* Address: 0x100a87490 | FUN_100a87490 */

void FUN_100a87490(void)

{
  FUN_100583fb4(&DAT_100ff7000,&DAT_100ff7008,&DAT_100c92760);
  return;
}



/* Address: 0x100a874bc | thunk_FUN_100a874c0 */

void thunk_FUN_100a874c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c927e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c927e0,&DAT_100f2e2e8);
  DAT_100ff7010 = pTVar1;
  return;
}



/* Address: 0x100a874c0 | FUN_100a874c0 */

void FUN_100a874c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c927e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c927e0,&DAT_100f2e2e8);
  DAT_100ff7010 = pTVar1;
  return;
}



/* Address: 0x100a87500 | thunk_FUN_10040a8f8 */

void thunk_FUN_10040a8f8(void)

{
  FUN_10040a8f8();
  return;
}



/* Address: 0x100a87504 | thunk_FUN_10040a868 */

void thunk_FUN_10040a868(void)

{
  FUN_10040a868();
  return;
}



/* Address: 0x100a87508 | FUN_100a87508 */

undefined * FUN_100a87508(void)

{
  return &DAT_100c92840;
}



/* Address: 0x100a87514 | FUN_100a87514 */

undefined * FUN_100a87514(void)

{
  return &DAT_100c92820;
}



/* Address: 0x100a87520 | FUN_100a87520 */

undefined * FUN_100a87520(void)

{
  return &DAT_100c92830;
}



/* Address: 0x100a8752c | thunk_FUN_100a87960 */

void thunk_FUN_100a87960(void)

{
  FUN_100a87960();
  return;
}



/* Address: 0x100a87530 | thunk_FUN_100a879c0 */

void thunk_FUN_100a879c0(void)

{
  FUN_100a879c0();
  return;
}


