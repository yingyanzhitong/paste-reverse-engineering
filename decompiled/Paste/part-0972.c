/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a67060 | FUN_100a67060 */

void FUN_100a67060(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x68);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a670f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,0,0,0,1,param_3,param_4);
  return;
}



/* Address: 0x100a670fc | FUN_100a670fc */

void FUN_100a670fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x68);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a67194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0,1,param_1,param_2,0,param_3,param_4);
  return;
}



/* Address: 0x100a67198 | FUN_100a67198 */

void FUN_100a67198(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_2 + 0x68);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a67220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0,1,0,0,1,param_1,param_2);
  return;
}



/* Address: 0x100a67224 | FUN_100a67224 */

void FUN_100a67224(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100a67234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x48))(0,param_1);
  return;
}



/* Address: 0x100a67238 | FUN_100a67238 */

void FUN_100a67238(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccad0c,&TargetProtocolRequirement_100ccad3c);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x50);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a67330;
                    /* WARNING: Could not recover jumptable at 0x000100a6732c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,uVar4,param_2,param_3 & 0x101,param_6,param_8);
  return;
}



/* Address: 0x100a67330 | FUN_100a67330 */

void FUN_100a67330(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a67394;
  }
  else {
    pcVar1 = FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a67394 | FUN_100a67394 */

void FUN_100a67394(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2d168;
  _swift_allocObject(&DAT_100f2d168,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a674a0;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c91838,unaff_x22 + 0x10,
                &DAT_100c91848,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a674a0 | FUN_100a674a0 */

void FUN_100a674a0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a6750c;
  }
  else {
    pcVar2 = FUN_100a675a8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6750c | FUN_100a6750c */

void FUN_100a6750c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a67560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a67564 | FUN_100a67564 */

void FUN_100a67564(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a675a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a675a8 | FUN_100a675a8 */

void FUN_100a675a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a675f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a675fc | FUN_100a675fc */

void FUN_100a675fc(void)

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
  _swift_getAssociatedTypeWitness(0xff,in_x5,in_x3,0x100ccad0c,&TargetProtocolRequirement_100ccad3c)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,in_x3,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad1c);
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
                    /* WARNING: Could not recover jumptable at 0x000100a676d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar3,lVar5);
  return;
}



/* Address: 0x100a676d8 | FUN_100a676d8 */

void FUN_100a676d8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x58);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a677d4;
                    /* WARNING: Could not recover jumptable at 0x000100a677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4,param_2,param_3 & 0x101ffffffff00ff,param_6,param_8);
  return;
}



/* Address: 0x100a677d4 | FUN_100a677d4 */

void FUN_100a677d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a67838;
  }
  else {
    pcVar1 = thunk_FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a67838 | FUN_100a67838 */

void FUN_100a67838(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2d190;
  _swift_allocObject(&DAT_100f2d190,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a67944;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c91860,unaff_x22 + 0x10,
                &DAT_100c91870,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a67944 | FUN_100a67944 */

void FUN_100a67944(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a6750c;
  }
  else {
    pcVar2 = thunk_FUN_100a675a8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a679b0 | FUN_100a679b0 */

void FUN_100a679b0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  int *piVar5;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad34);
  piVar5 = *(int **)(param_6 + 0x20);
  uVar3 = 0;
  _swift_checkMetadataState(0,uVar2);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  if (param_2 != '\x01') {
    plVar4[1] = (long)FUN_1005c804c;
  }
  else {
    plVar4[1] = (long)thunk_FUN_1005c804c;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a67ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_2 != '\x01',uVar3,param_6);
  return;
}



/* Address: 0x100a67ab8 | FUN_100a67ab8 */

void FUN_100a67ab8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccad0c,&TargetProtocolRequirement_100ccad4c);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x60);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a67bb4;
                    /* WARNING: Could not recover jumptable at 0x000100a67bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4,param_2,param_3 & 0x101ffffffff00ff,param_6,param_8);
  return;
}



/* Address: 0x100a67bb4 | FUN_100a67bb4 */

void FUN_100a67bb4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a67c18;
  }
  else {
    pcVar1 = thunk_FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a67c18 | FUN_100a67c18 */

void FUN_100a67c18(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2d1b8;
  _swift_allocObject(&DAT_100f2d1b8,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a67944;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c91888,unaff_x22 + 0x10,
                &DAT_100c91898,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a67d24 | FUN_100a67d24 */

void FUN_100a67d24(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  int *piVar5;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,0x100ccad0c,&TargetProtocolRequirement_100ccad4c);
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad2c);
  piVar5 = *(int **)(param_6 + 0x20);
  uVar3 = 0;
  _swift_checkMetadataState(0,uVar2);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  if (param_2 != '\x01') {
    plVar4[1] = (long)thunk_FUN_1005c804c;
  }
  else {
    plVar4[1] = (long)thunk_FUN_1005c804c;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a67e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_2 != '\x01',uVar3,param_6);
  return;
}



/* Address: 0x100a67e2c | FUN_100a67e2c */

void FUN_100a67e2c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(long *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar5 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  uVar3 = lVar5 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  piVar6 = *(int **)(param_8 + 0x68);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a67f04;
                    /* WARNING: Could not recover jumptable at 0x000100a67f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar4,uVar3,param_2,param_3 & 0x101,param_6,param_8);
  return;
}



/* Address: 0x100a67f04 | FUN_100a67f04 */

void FUN_100a67f04(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a67f68;
  }
  else {
    pcVar1 = FUN_100a6813c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a67f68 | FUN_100a67f68 */

void FUN_100a67f68(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar3 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x98),uVar10);
  uVar6 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar7 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100f2d1e0;
  _swift_allocObject(&DAT_100f2d1e0,uVar7 + lVar3,uVar6 | 7);
  *(undefined **)(unaff_x22 + 0xb0) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  (**(code **)(lVar2 + 0x20))(puVar4 + uVar7,uVar1,uVar10);
  plVar5 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a68074;
  FUN_100a92a24(plVar5,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c918b0,unaff_x22 + 0x10,
                &DAT_100c918c0,puVar4,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a68074 | FUN_100a68074 */

void FUN_100a68074(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xb8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a680e0;
  }
  else {
    pcVar2 = FUN_100a68180;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a680e0 | FUN_100a680e0 */

void FUN_100a680e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a68138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6813c | FUN_100a6813c */

void FUN_100a6813c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a6817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a68180 | FUN_100a68180 */

void FUN_100a68180(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a681d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a681d8 | FUN_100a681d8 */

void FUN_100a681d8(void)

{
  int iVar1;
  long *plVar2;
  undefined8 in_x3;
  long in_x5;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(in_x5 + 8);
  piVar3 = *(int **)(lVar4 + 0x60);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a6824c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(in_x3,lVar4);
  return;
}



/* Address: 0x100a68250 | FUN_100a68250 */

void FUN_100a68250(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  _swift_task_switch(FUN_100a68268,0,0);
  return;
}



/* Address: 0x100a68268 | FUN_100a68268 */

void FUN_100a68268(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  FUN_10007d048(lVar4,uVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x48) = CONCAT71(extraout_var,OVar3.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a68338;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a68338 | FUN_100a68338 */

void FUN_100a68338(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a6839c;
  }
  else {
    pcVar1 = FUN_100a68498;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6839c | FUN_100a6839c */

void FUN_100a6839c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar6 = *(long *)(lVar4 + -8);
  uVar3 = uVar5;
  (**(code **)(lVar6 + 0x30))(uVar5,1,lVar4);
  if ((int)uVar3 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x48));
    _swift_task_dealloc(uVar5);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x28) = lVar4;
    FUN_10000cbb0(unaff_x22 + 0x10);
    (**(code **)(lVar6 + 0x20))();
    _swift_task_dealloc(uVar5);
  }
  puVar1 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar2 = &DAT_100ff6ad0;
  FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
  lVar4 = unaff_x22 + 0x30;
  _swift_dynamicCast(lVar4,unaff_x22 + 0x10,puVar1,puVar2,6);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  if ((int)lVar4 == 0) {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a68494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Address: 0x100a68498 | FUN_100a68498 */

void FUN_100a68498(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100a684d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a684d4 | FUN_100a684d4 */

void FUN_100a684d4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  _swift_task_switch(FUN_100a684ec,0,0);
  return;
}



/* Address: 0x100a684ec | FUN_100a684ec */

void FUN_100a684ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  FUN_10007d048(lVar4,uVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar3.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a685bc;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a685bc | FUN_100a685bc */

void FUN_100a685bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a68620;
  }
  else {
    pcVar1 = FUN_100a68728;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a68620 | FUN_100a68620 */

void FUN_100a68620(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(lVar4 + -8);
  uVar2 = uVar5;
  (**(code **)(lVar6 + 0x30))(uVar5,1,lVar4);
  if ((int)uVar2 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x58));
    _swift_task_dealloc(uVar5);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x28) = lVar4;
    FUN_10000cbb0(unaff_x22 + 0x10);
    (**(code **)(lVar6 + 0x20))();
    _swift_task_dealloc(uVar5);
  }
  puVar1 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  lVar4 = unaff_x22 + 0x30;
  _swift_dynamicCast(lVar4,unaff_x22 + 0x10,puVar1,&DAT_100eeaaa8,6);
  if ((int)lVar4 == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = (ulong)*(uint7 *)(unaff_x22 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000100a68724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x100a68728 | FUN_100a68728 */

void FUN_100a68728(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000100a68760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a68764 | FUN_100a68764 */

void FUN_100a68764(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a6877c,0,0);
  return;
}



/* Address: 0x100a6877c | FUN_100a6877c */

void FUN_100a6877c(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    FUN_1000f7830(&DAT_100ff6d68,&DAT_100c919c0);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a6888c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = FUN_100a6ab5c;
  _swift_task_addCancellationHandler(FUN_100a6ab5c,*(undefined8 *)(unaff_x22 + 0x18));
  *(code **)(unaff_x22 + 0x28) = pcVar3;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a688ec;
  FUN_100a68b38(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x100a6888c | FUN_100a6888c */

void FUN_100a6888c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a688d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a688e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Address: 0x100a688ec | FUN_100a688ec */

void FUN_100a688ec(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_100a68960;
  }
  else {
    pcVar1 = FUN_100a689a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a68960 | FUN_100a68960 */

void FUN_100a68960(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100a6899c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x100a689a0 | FUN_100a689a0 */

void FUN_100a689a0(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100a689d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a689dc | FUN_100a689dc */

void FUN_100a689dc(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_100a689f4,0,0);
  return;
}



/* Address: 0x100a689f4 | FUN_100a689f4 */

void FUN_100a689f4(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009f6530;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = thunk_FUN_100a6a4a0;
  _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,*(undefined8 *)(unaff_x22 + 0x28));
  *(code **)(unaff_x22 + 0x38) = pcVar3;
  plVar2 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009f65a4;
  FUN_100a691b0(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a68b04 | FUN_100a68b04 */

undefined8 FUN_100a68b04(undefined8 param_1)

{
  FUN_100a572c8();
  return param_1;
}



/* Address: 0x100a68b38 | FUN_100a68b38 */

void FUN_100a68b38(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_100a68b50,0,0);
  return;
}



/* Address: 0x100a68b50 | FUN_100a68b50 */

void FUN_100a68b50(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  CancellationError CVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  __uint32 flags;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  String SVar19;
  
  lVar18 = *(long *)(unaff_x22 + 0x58);
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar18 + 0x58));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690ac);
    (*pcVar6)();
  }
  uVar8 = 0;
  FUN_100a9e2c0(*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 == 1 || (param_2 & 0xff) == 0) {
    if ((param_2 & 0xff) == 0) {
      uVar15 = param_2 & 0xff;
    }
    else {
      uVar15 = *(ulong *)(*(long *)(unaff_x22 + 0x58) + 0x40);
      _swift_retain(uVar15);
    }
  }
  else if (uVar1 == 2) {
    uVar15 = *(ulong *)(*(long *)(unaff_x22 + 0x58) + 0x40);
    *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x40) = 0;
  }
  else {
    if (2 < uVar8) {
      flags = 0xdaeab0;
      goto LAB_100a68cec;
    }
    uVar15 = 0;
  }
  *(ulong *)(unaff_x22 + 0x60) = uVar15;
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x58));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690b0);
    (*pcVar6)();
  }
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 == 1 || (param_2 & 0xff) == 0) {
    if ((param_2 & 0xff) != 0) {
      if (uVar15 == 0) goto LAB_100a68d54;
      lVar18 = *(long *)(uVar15 + 0x10);
      _swift_bridgeObjectRetain(uVar8);
      iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar18 + 0x50));
      if (iVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690b4);
        (*pcVar6)();
      }
      lVar17 = *(long *)(lVar18 + 0x10);
      lVar2 = *(long *)(lVar18 + 0x18);
      uVar4 = *(ushort *)(lVar18 + 0x38);
      uVar5 = uVar4 >> 0xe;
      if (uVar5 < 2) {
        if (uVar5 == 0) {
          _swift_retain(lVar2);
          lVar17 = lVar2;
        }
        else {
          _swift_retain(lVar17);
        }
LAB_100a68fb8:
        iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x50));
        if (iVar7 != 0) {
LAB_100a690bc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690c0);
          (*pcVar6)();
        }
        if (lVar17 != 0) {
          _swift_retain(lVar17);
          _swift_retain(uVar15);
          FUN_100910ab0(FUN_100a57844,uVar15);
          _swift_release(uVar15);
          FUN_100a6aa9c(uVar8,1);
          _swift_release(uVar15);
          _swift_release_n(lVar17,2);
          goto LAB_100a68d54;
        }
      }
      else {
        uVar16 = *(ulong *)(lVar18 + 0x20);
        lVar3 = *(long *)(lVar18 + 0x28);
        if (uVar5 == 2) {
          FUN_100a57448(lVar17,lVar2,uVar16,lVar3,*(long *)(lVar18 + 0x30),uVar4);
          _swift_retain(lVar17);
          FUN_100a57528();
          *(long *)(lVar18 + 0x10) = lVar17;
          *(long *)(lVar18 + 0x18) = lVar2;
          *(ulong *)(lVar18 + 0x20) = uVar16 & 0xff;
          *(long *)(lVar18 + 0x28) = lVar3;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined2 *)(lVar18 + 0x38) = 0x4000;
          goto LAB_100a68fb8;
        }
        if (uVar4 == 0xc000 &&
            (((uVar16 == 0 && lVar2 == 0) && (lVar17 == 0 && lVar3 == 0)) &&
            *(long *)(lVar18 + 0x30) == 0)) {
          flags = 0xdb8660;
          goto LAB_100a68cec;
        }
        iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x50));
        if (iVar7 != 0) goto LAB_100a690bc;
      }
      _swift_release(uVar15);
      FUN_100a6aa9c(uVar8,1);
      goto LAB_100a68d54;
    }
  }
  else {
    if (uVar1 != 2) {
      if (2 < (long)uVar8) {
        flags = 0xdaeab0;
LAB_100a68cec:
        SVar19.bridgeObject = (void *)0x2;
        SVar19.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar19,(StaticString)0x0,0xe000000000000000,flags);
        return;
      }
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_100a690c0;
          _swift_continuation_init(unaff_x22 + 0x10,1);
          FUN_100a9d1e8();
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
        _swift_release(uVar15);
        uVar8 = 0;
        goto LAB_100a68d54;
      }
      CVar10 = Swift::CancellationError::typeMetadataAccessor();
      lVar18 = *(long *)(CVar10.unknown + -8);
      uVar8 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar8);
      CVar11 = Swift::CancellationError::init();
      FUN_100a5784c();
      CVar12 = CVar10;
      _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
      (**(code **)(lVar18 + 0x20))(CVar11.unknown,uVar8,CVar10.unknown);
      _swift_task_dealloc(uVar8);
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      puVar14 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar14 = CVar12.unknown;
      _swift_willThrow();
      _swift_release(uVar15);
      goto LAB_100a68f38;
    }
    if (uVar15 == 0) {
      _swift_errorRetain(uVar8);
    }
    else {
      lVar18 = *(long *)(uVar15 + 0x10);
      FUN_100a6aac0(uVar8,2);
      _swift_retain(uVar15);
      iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar18 + 0x50));
      if (iVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690b8);
        (*pcVar6)();
      }
      uVar16 = *(ulong *)(lVar18 + 0x10);
      uVar4 = *(ushort *)(lVar18 + 0x38) >> 0xe;
      if (uVar4 < 2) {
        if (uVar4 == 0) {
          uVar16 = 0;
        }
        else {
LAB_100a68dfc:
          _swift_retain(uVar16);
        }
      }
      else {
        if (uVar4 == 2) goto LAB_100a68dfc;
        if (*(ushort *)(lVar18 + 0x38) == 0xc000 &&
            (((*(long *)(lVar18 + 0x28) == 0 && uVar16 == 0) &&
             (*(long *)(lVar18 + 0x30) == 0 && *(long *)(lVar18 + 0x20) == 0)) &&
            *(long *)(lVar18 + 0x18) == 0)) {
          flags = 0xdb8660;
          goto LAB_100a68cec;
        }
        uVar16 = 0;
      }
      iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x50));
      if (iVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a690bc);
        (*pcVar6)();
      }
      uVar9 = uVar15;
      if (uVar16 != 0) {
        _swift_retain(uVar15);
        FUN_100910ab0(FUN_100a6aae4,uVar15);
        _swift_release_n(uVar15,2);
        uVar9 = uVar16;
      }
      _swift_release(uVar9);
    }
    if (uVar8 != 0) {
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      puVar13 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar13 = uVar8;
      _swift_willThrow();
      _swift_release(uVar15);
      FUN_100a6aa9c(uVar8,2);
LAB_100a68f38:
                    /* WARNING: Could not recover jumptable at 0x000100a68f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    FUN_100a6aa9c(0,2);
  }
  _swift_release(uVar15);
LAB_100a68d54:
                    /* WARNING: Could not recover jumptable at 0x000100a68d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Address: 0x100a690c0 | FUN_100a690c0 */

void FUN_100a690c0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_100a69134;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a69174;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a69134 | FUN_100a69134 */

void FUN_100a69134(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100a69170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a69174 | FUN_100a69174 */

void FUN_100a69174(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100a691ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a691b0 | FUN_100a691b0 */

void FUN_100a691b0(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  _swift_task_switch(FUN_100a691c8,0,0);
  return;
}



/* Address: 0x100a691c8 | FUN_100a691c8 */

void FUN_100a691c8(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  CancellationError CVar7;
  ulong uVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  
  lVar14 = *(long *)(unaff_x22 + 0xf8);
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x58));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696c4);
    (*pcVar4)();
  }
  lVar6 = 0;
  FUN_100a9e890(*(undefined8 *)(unaff_x22 + 0xf8));
  uVar13 = param_3 >> 0x38;
  bVar3 = (byte)(param_3 >> 0x38);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      uVar13 = *(ulong *)(*(long *)(unaff_x22 + 0xf8) + 0x40);
      _swift_retain(uVar13);
    }
  }
  else if (bVar3 == 2) {
    uVar13 = *(ulong *)(*(long *)(unaff_x22 + 0xf8) + 0x40);
    *(undefined8 *)(*(long *)(unaff_x22 + 0xf8) + 0x40) = 0;
  }
  else {
    if ((((lVar6 != 0 || param_2 != 0) || (param_3 & 0xffffffffffffff) != 0) &&
        ((lVar6 != 1 || param_2 != 0) || (param_3 & 0xffffffffffffff) != 0)) &&
       ((lVar6 != 2 || ((param_2 != 0 || ((param_3 & 0xffffffffffffff) != 0))))))
    goto LAB_100a6966c;
    uVar13 = 0;
  }
  *(ulong *)(unaff_x22 + 0x100) = uVar13;
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x58));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696c8);
    (*pcVar4)();
  }
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      _swift_release(uVar13);
    }
    else if (uVar13 != 0) {
      lVar14 = *(long *)(uVar13 + 0x10);
      _swift_retain(lVar6);
      iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x60));
      if (iVar5 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696d0);
        (*pcVar4)();
      }
      uVar16 = *(undefined8 *)(lVar14 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x50) = uVar16;
      uVar17 = *(undefined8 *)(lVar14 + 0x28);
      uVar16 = *(undefined8 *)(lVar14 + 0x20);
      uVar15 = *(undefined8 *)(lVar14 + 0x38);
      uVar18 = *(undefined8 *)(lVar14 + 0x30);
      uVar20 = *(undefined8 *)(lVar14 + 0x48);
      uVar19 = *(undefined8 *)(lVar14 + 0x40);
      *(undefined2 *)(unaff_x22 + 0x90) = *(undefined2 *)(lVar14 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x80) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
      if (*(short *)(unaff_x22 + 0x90) < 0) {
        iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x60));
        if (iVar5 != 0) goto LAB_100a696d4;
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
        lVar1 = *(long *)(unaff_x22 + 0x58);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar2 = *(undefined1 *)(unaff_x22 + 0x78);
        FUN_100a5a69c(unaff_x22 + 0x50,unaff_x22 + 0x98);
        _swift_release(uVar15);
        _swift_bridgeObjectRelease(uVar18);
        FUN_1001b9e60(uVar16,uVar17,uVar2);
        iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x60));
        if (iVar5 != 0) {
LAB_100a696d4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696d8);
          (*pcVar4)();
        }
        if (lVar1 != 0) {
          _swift_retain(lVar1);
          _swift_retain(uVar13);
          FUN_100910ab0(FUN_100a5a694,uVar13);
          _swift_release(uVar13);
          FUN_1009fc0bc(lVar6,param_2,param_3,1);
          _swift_release(uVar13);
          _swift_release_n(lVar1,2);
          goto LAB_100a6962c;
        }
      }
      _swift_release(uVar13);
      FUN_1009fc0bc(lVar6,param_2,param_3,1);
    }
  }
  else {
    if (bVar3 == 2) {
      if (uVar13 == 0) {
        _swift_errorRetain(lVar6);
      }
      else {
        lVar14 = *(long *)(uVar13 + 0x10);
        FUN_1009fc0e0(lVar6,param_2,param_3,2);
        _swift_retain(uVar13);
        iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x60));
        if (iVar5 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696cc);
          (*pcVar4)();
        }
        FUN_100a57abc(lVar14 + 0x10);
        *(undefined8 *)(lVar14 + 0x38) = 0;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(undefined2 *)(lVar14 + 0x50) = 0x8000;
        iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x60));
        if (iVar5 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a696d4);
          (*pcVar4)();
        }
        _swift_release(uVar13);
      }
      if (lVar6 != 0) {
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        plVar11 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar11 = lVar6;
        _swift_willThrow();
        _swift_release(uVar13);
        FUN_1009fc0bc(lVar6,param_2,param_3,2);
        goto LAB_100a69524;
      }
      FUN_1009fc0bc(0,param_2,param_3,2);
      _swift_release(uVar13);
    }
    else {
      if ((lVar6 == 0 && param_2 == 0) && ((param_3 & 0xffffffffffffff) == 0)) {
        CVar7 = Swift::CancellationError::typeMetadataAccessor();
        lVar14 = *(long *)(CVar7.unknown + -8);
        uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar8);
        CVar9 = Swift::CancellationError::init();
        FUN_100a5784c();
        CVar10 = CVar7;
        _swift_allocError(CVar7.unknown,CVar9.unknown,0,0);
        (**(code **)(lVar14 + 0x20))(CVar9.unknown,uVar8,CVar7.unknown);
        _swift_task_dealloc(uVar8);
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar12 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar12 = CVar10.unknown;
        _swift_willThrow();
        _swift_release(uVar13);
LAB_100a69524:
                    /* WARNING: Could not recover jumptable at 0x000100a69544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      if (((lVar6 != 1) || (param_2 != 0)) || ((param_3 & 0xffffffffffffff) != 0)) {
        if (((lVar6 == 2) && (param_2 == 0)) && ((param_3 & 0xffffffffffffff) == 0)) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xe0;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_100a696d8;
          _swift_continuation_init(unaff_x22 + 0x10,1);
          FUN_100a9d924();
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
LAB_100a6966c:
        SVar21.bridgeObject = (void *)0x2;
        SVar21.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar21,(StaticString)0x0,0xe000000000000000,0xdaeab0);
        return;
      }
      _swift_release(uVar13);
      lVar6 = 0;
    }
    param_2 = 0;
    param_3 = 0;
  }
LAB_100a6962c:
                    /* WARNING: Could not recover jumptable at 0x000100a6965c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100a696d8 | FUN_100a696d8 */

void FUN_100a696d8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined4 *)(lVar2 + 0x120) = *(undefined4 *)(lVar2 + 0xf0);
    *(undefined2 *)(lVar2 + 0x124) = *(undefined2 *)(lVar2 + 0xf4);
    *(undefined1 *)(lVar2 + 0x126) = *(undefined1 *)(lVar2 + 0xf6);
    pcVar1 = FUN_100a69768;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a697bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a69768 | FUN_100a69768 */

void FUN_100a69768(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x000100a697b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118),
             (ulong)*(uint7 *)(unaff_x22 + 0x120));
  return;
}



/* Address: 0x100a697bc | FUN_100a697bc */

void FUN_100a697bc(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x000100a697f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a697f8 | FUN_100a697f8 */

void FUN_100a697f8(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_100a69810,0,0);
  return;
}



/* Address: 0x100a69810 | FUN_100a69810 */

void FUN_100a69810(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  CancellationError CVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  String SVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x68);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69a68);
    (*pcVar1)();
  }
  uVar3 = 0;
  FUN_100a9eef8(*(undefined8 *)(unaff_x22 + 0x68));
  if (1 < (param_4 & 0xff)) {
    if ((param_4 & 0xff) == 2) {
      *(undefined1 *)(*(long *)(unaff_x22 + 0x68) + 0x23) = 1;
    }
    else if (((param_3 != 0 || param_2 != 0) || uVar3 != 0) &&
            (1 < uVar3 - 1 || (param_3 != 0 || param_2 != 0))) goto LAB_100a69a18;
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69a6c);
    (*pcVar1)();
  }
  if (1 < (param_4 & 0xff)) {
    if ((param_4 & 0xff) == 2) {
      if ((uVar3 & 0xff) != 1) {
LAB_100a69998:
        _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                          PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ,0,0);
        _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a699d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
    }
    else if ((param_3 == 0 && param_2 == 0) && uVar3 == 0) {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      uVar5 = *(long *)(*(long *)(CVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar5);
      Swift::CancellationError::init();
      uVar3 = unaff_x22 + 0x70;
      _swift_dynamicCast(uVar3,uVar5,CVar4.unknown,PTR___type_metadata_for_Swift_Never_100eadc38,6);
      _swift_task_dealloc(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_100a69998;
    }
    else if ((uVar3 != 1) || (param_3 != 0 || param_2 != 0)) {
      if ((uVar3 == 2) && (param_3 == 0 && param_2 == 0)) {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a69a6c;
        _swift_continuation_init(unaff_x22 + 0x10,1);
        FUN_100a9dfe0();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
LAB_100a69a18:
      SVar7.bridgeObject = (void *)0x2;
      SVar7.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar7,(StaticString)0x0,0xe000000000000000,0xdaeab0);
      return;
    }
    param_2 = 0;
    param_3 = 0;
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a69a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,param_2,param_3);
  return;
}



/* Address: 0x100a69a6c | FUN_100a69a6c */

void FUN_100a69a6c(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a69abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a69adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
             *(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Address: 0x100a69ae0 | FUN_100a69ae0 */

void FUN_100a69ae0(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 extraout_var;
  CancellationError CVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  ulong uVar4;
  
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  uVar4 = CONCAT44(extraout_var,iVar3);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a69d18);
    (*pcVar2)();
  }
  FUN_100a69ffc();
  if (uVar4 == 1) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a69d1c);
    (*pcVar2)();
  }
  if (1 < uVar4) {
    CVar5 = Swift::CancellationError::typeMetadataAccessor();
    lVar15 = *(long *)(CVar5.unknown + -8);
    lVar12 = *(long *)(lVar15 + 0x40);
    CVar6 = Swift::CancellationError::init();
    FUN_100a5784c();
    CVar7 = CVar5;
    _swift_allocError(CVar5.unknown,CVar6.unknown,0,0);
    (**(code **)(lVar15 + 0x20))
              (CVar6.unknown,&stack0xffffffffffffffb0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),
               CVar5.unknown);
    puVar8 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar9 = puVar8;
    puVar10 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar10 = CVar7.unknown;
    _swift_allocError(puVar8,puVar11,0,0);
    *puVar11 = puVar9;
    _swift_continuation_throwingResumeWithError(uVar4,puVar8);
  }
  if (lVar13 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar13 + 0x10);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x50));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a69d20);
    (*pcVar2)();
  }
  lVar15 = *(long *)(lVar12 + 0x10);
  uVar1 = *(ushort *)(lVar12 + 0x38) >> 0xe;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      lVar14 = 0;
      goto LAB_100a69c48;
    }
  }
  else if (uVar1 != 2) {
    lVar14 = 0;
    if ((*(ushort *)(lVar12 + 0x38) == 0xc000) &&
       (((*(long *)(lVar12 + 0x28) == 0 && lVar15 == 0) &&
        (*(long *)(lVar12 + 0x30) == 0 && *(long *)(lVar12 + 0x20) == 0)) &&
        *(long *)(lVar12 + 0x18) == 0)) {
      SVar16.bridgeObject = (void *)0x2;
      SVar16.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar16,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a69d14);
      (*pcVar2)();
    }
    goto LAB_100a69c48;
  }
  _swift_retain();
  lVar14 = lVar15;
LAB_100a69c48:
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x50));
  if (iVar3 == 0) {
    if (lVar14 != 0) {
      _swift_retain(lVar13);
      FUN_100910ab0(thunk_FUN_100a6aae4,lVar13);
      _swift_release(lVar14);
      _swift_release(lVar13);
    }
    _swift_release(lVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a69d24);
  (*pcVar2)();
}



/* Address: 0x100a69d24 | FUN_100a69d24 */

void FUN_100a69d24(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_var;
  CancellationError CVar4;
  CancellationError CVar5;
  CancellationError CVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar3;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  uVar3 = CONCAT44(extraout_var,iVar2);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69eac);
    (*pcVar1)();
  }
  FUN_100a69ffc();
  if (uVar3 == 1) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69eb0);
    (*pcVar1)();
  }
  if (1 < uVar3) {
    CVar4 = Swift::CancellationError::typeMetadataAccessor();
    lVar13 = *(long *)(CVar4.unknown + -8);
    lVar11 = *(long *)(lVar13 + 0x40);
    CVar5 = Swift::CancellationError::init();
    FUN_100a5784c();
    CVar6 = CVar4;
    _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
    (**(code **)(lVar13 + 0x20))
              (CVar5.unknown,&stack0xffffffffffffffb0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),
               CVar4.unknown);
    puVar7 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar10 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar8 = puVar7;
    puVar9 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar9 = CVar6.unknown;
    _swift_allocError(puVar7,puVar10,0,0);
    *puVar10 = puVar8;
    _swift_continuation_throwingResumeWithError(uVar3,puVar7);
  }
  if (lVar12 != 0) {
    lVar11 = *(long *)(lVar12 + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x60));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69eb4);
      (*pcVar1)();
    }
    FUN_100a57abc(lVar11 + 0x10);
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined2 *)(lVar11 + 0x50) = 0x8000;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x60));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69eb8);
      (*pcVar1)();
    }
    _swift_release(lVar12);
  }
  return;
}



/* Address: 0x100a69eb8 | FUN_100a69eb8 */

void FUN_100a69eb8(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_var;
  CancellationError CVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_40 [15];
  undefined1 uStack_31;
  ulong uVar3;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar3 = CONCAT44(extraout_var,iVar2);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69ff8);
    (*pcVar1)();
  }
  FUN_100a6a26c();
  if (uVar3 != 1) {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  if (iVar2 == 0) {
    if (1 < uVar3) {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      lVar8 = *(long *)(*(long *)(CVar4.unknown + -8) + 0x40);
      Swift::CancellationError::init();
      puVar5 = &uStack_31;
      _swift_dynamicCast(puVar5,auStack_40 + -(lVar8 + 0xfU & 0xfffffffffffffff0),CVar4.unknown,
                         PTR___type_metadata_for_Swift_Never_100eadc38,6);
      if (((ulong)puVar5 & 1) == 0) {
        puVar9 = *(undefined8 **)(*(long *)(uVar3 + 0x40) + 0x28);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 1;
        _swift_continuation_throwingResume(uVar3);
      }
      else {
        puVar6 = PTR___type_metadata_for_Swift_Never_100eadc38;
        _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                          PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ,0,0);
        puVar7 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar9 = (undefined8 *)
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar9 = puVar6;
        _swift_continuation_throwingResumeWithError(uVar3,puVar7);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a69ffc);
  (*pcVar1)();
}


