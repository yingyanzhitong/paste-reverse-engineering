/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100543458 | FUN_100543458 */

void FUN_100543458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005431e0;
  FUN_100536964(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x10054350c | FUN_10054350c */

void FUN_10054350c(void)

{
  long *plVar1;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  
  uVar2 = *in_x4;
  uVar4 = in_x4[3];
  uVar3 = in_x4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = in_x4[4];
  *(undefined8 *)(unaff_x22 + 0x38) = in_x4[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4[6];
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005431e0;
  FUN_100547804(in_x3,unaff_x22 + 0x10,in_x5,in_x6,in_x7,in_stack_00000000);
  return;
}



/* Address: 0x1005435a4 | FUN_1005435a4 */

void FUN_1005435a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005431e0;
  FUN_100536bc4(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100543658 | FUN_100543658 */

void FUN_100543658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005430c0;
  FUN_100547d50(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x1005436f0 | FUN_1005436f0 */

void FUN_1005436f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005431e0;
  FUN_100536e24(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005437a4 | FUN_1005437a4 */

void FUN_1005437a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005430c0;
  FUN_1005481ec(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x10054383c | FUN_10054383c */

void FUN_10054383c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005431e0;
  FUN_100537084(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005438f0 | FUN_1005438f0 */

void FUN_1005438f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5[8];
  uVar4 = *param_5;
  uVar3 = param_5[3];
  uVar2 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  plVar1 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005439a4;
  FUN_1005333cc(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005439a4 | FUN_1005439a4 */

void FUN_1005439a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001005439dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005439e0 | FUN_1005439e0 */

void FUN_1005439e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5[8];
  uVar4 = *param_5;
  uVar3 = param_5[3];
  uVar2 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005439a4;
  FUN_1005372e4(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100543a94 | FUN_100543a94 */

void FUN_100543a94(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
  uVar3 = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(unaff_x22 + 0x160) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x20) = uVar3;
  uVar5 = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)(unaff_x22 + 0x99) = *(undefined8 *)((long)param_2 + 0x89);
  *(undefined8 *)(unaff_x22 + 0x91) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)(unaff_x22 + 0xa9) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)(unaff_x22 + 0xa1) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0xa1);
  *(undefined8 *)(unaff_x22 + 0xb9) = *(undefined8 *)((long)param_2 + 0xa9);
  *(undefined8 *)(unaff_x22 + 0xb1) = uVar5;
  uVar5 = param_2[0x16];
  *(undefined8 *)(unaff_x22 + 200) = param_2[0x17];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x51) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x69) = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x61) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)(unaff_x22 + 0x79) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)(unaff_x22 + 0x71) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)(unaff_x22 + 0x89) = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)(unaff_x22 + 0x81) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)(unaff_x22 + 0x29) = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(unaff_x22 + 0x21) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x49) = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)(unaff_x22 + 0x41) = uVar5;
  iVar1 = *param_3;
  plVar4 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100543b68;
                    /* WARNING: Could not recover jumptable at 0x000100543b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar4,unaff_x22 + 0xd0,unaff_x22 + 0x38);
  return;
}



/* Address: 0x100543b68 | FUN_100543b68 */

void FUN_100543b68(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100543bc4;
  }
  else {
    pcVar1 = FUN_100543c3c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100543bc4 | FUN_100543bc4 */

void FUN_100543bc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x160);
  puVar4[8] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar4[7] = uVar9;
  puVar4[6] = uVar8;
  puVar4[5] = uVar7;
  puVar4[4] = uVar6;
  puVar4[3] = uVar5;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar4[0xf] = *(undefined8 *)(unaff_x22 + 0x130);
  puVar4[0xe] = uVar10;
  puVar4[0xd] = uVar9;
  puVar4[0xc] = uVar8;
  puVar4[0xb] = uVar7;
  puVar4[10] = uVar6;
  puVar4[9] = uVar5;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  *(undefined1 *)(puVar4 + 2) = uVar3;
  FUN_1004a7398();
                    /* WARNING: Could not recover jumptable at 0x000100543c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543c3c | FUN_100543c3c */

void FUN_100543c3c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100543c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543c48 | FUN_100543c48 */

void FUN_100543c48(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  uVar3 = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x20) = uVar3;
  uVar5 = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x51) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x69) = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x61) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)(unaff_x22 + 0x79) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)(unaff_x22 + 0x71) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2[0xe];
  uVar5 = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)(unaff_x22 + 0x29) = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(unaff_x22 + 0x21) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x49) = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)(unaff_x22 + 0x41) = uVar5;
  iVar1 = *param_3;
  plVar4 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100543cfc;
                    /* WARNING: Could not recover jumptable at 0x000100543cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar4,unaff_x22 + 0x88,unaff_x22 + 0x38);
  return;
}



/* Address: 0x100543cfc | FUN_100543cfc */

void FUN_100543cfc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100543d58;
  }
  else {
    pcVar1 = FUN_100543db0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100543d58 | FUN_100543d58 */

void FUN_100543d58(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xa0);
  bVar2 = *(byte *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined1 *)(unaff_x22 + 200);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar4[1] = uVar1;
  *(undefined1 *)(puVar4 + 2) = uVar3;
  puVar4[3] = (ulong)bVar2;
  puVar4[5] = uVar6;
  puVar4[4] = uVar5;
  *(undefined2 *)(puVar4 + 6) = 0;
  FUN_1004a7398();
                    /* WARNING: Could not recover jumptable at 0x000100543dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543db0 | FUN_100543db0 */

void FUN_100543db0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100543db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543dbc | FUN_100543dbc */

void FUN_100543dbc(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  uVar3 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x48) = *(undefined1 *)(param_2 + 2);
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100543e2c;
                    /* WARNING: Could not recover jumptable at 0x000100543e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100543e2c | FUN_100543e2c */

void FUN_100543e2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100543e88;
  }
  else {
    pcVar1 = FUN_100543edc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100543e88 | FUN_100543e88 */

void FUN_100543e88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x48);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3[1] = uVar2;
  *(undefined1 *)(puVar3 + 2) = uVar4;
  puVar3[3] = uVar5;
  puVar3[4] = uVar1;
  puVar3[5] = 0;
  *(undefined2 *)(puVar3 + 6) = 0;
  FUN_1004a7398();
                    /* WARNING: Could not recover jumptable at 0x000100543ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543edc | FUN_100543edc */

void FUN_100543edc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100543ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100543ee8 | FUN_100543ee8 */

void FUN_100543ee8(void)

{
  long *plVar1;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  
  uVar2 = *in_x4;
  uVar4 = in_x4[3];
  uVar3 = in_x4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)((long)in_x4 + 0x19);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)((long)in_x4 + 0x21);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar2;
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100543f78;
  FUN_100548688(in_x3,unaff_x22 + 0x10,in_x5,in_x6,in_x7,in_stack_00000000);
  return;
}



/* Address: 0x100543f78 | FUN_100543f78 */

void FUN_100543f78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100543fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100543fb4 | FUN_100543fb4 */

void FUN_100543fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)((long)param_5 + 0x19);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)((long)param_5 + 0x21);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar2;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100543f78;
  FUN_10053754c(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100544060 | FUN_100544060 */

void FUN_100544060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0x2a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100544108;
  FUN_100548b98(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x100544108 | FUN_100544108 */

void FUN_100544108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x88);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(char *)(puVar1 + 2) = (char)param_3;
    *(char *)((long)puVar1 + 0x11) = (char)((ulong)param_3 >> 8);
    puVar1[3] = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010054417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100544180 | FUN_100544180 */

void FUN_100544180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5[0xe];
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100544244;
  FUN_1005377ac(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100544244 | FUN_100544244 */

void FUN_100544244(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010054427c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100544280 | FUN_100544280 */

undefined8
FUN_100544280(ulong param_1,ulong param_2,byte param_3,ulong param_4,long param_5,byte param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1 & 0xff0000) == 0x10000) {
    if ((param_4 & 0xff0000) != 0x10000) {
      return 0;
    }
  }
  else {
    if ((param_4 & 0xff0000) == 0x10000) {
      return 0;
    }
    if ((param_1 & 0xff) == 1) {
      if ((param_4 & 0xff) != 1) {
        return 0;
      }
    }
    else if ((param_4 & 0xff) == 1) {
      return 0;
    }
    if ((param_1 & 0xff00) == 0x100) {
      if ((param_4 & 0xff00) != 0x100) {
        return 0;
      }
    }
    else if ((param_4 & 0xff00) == 0x100) {
      return 0;
    }
  }
  uVar1 = param_4 & 0xff0000000000;
  uVar2 = 0x10000000000;
  if ((param_1 & 0xff0000000000) != 0x10000000000) {
    if (uVar1 == 0x10000000000) {
      return 0;
    }
    if ((param_1 & 0xff000000) == 0x1000000) {
      if ((param_4 & 0xff000000) != 0x1000000) {
        return 0;
      }
    }
    else if ((param_4 & 0xff000000) == 0x1000000) {
      return 0;
    }
    uVar1 = param_4 & 0xff00000000;
    uVar2 = 0x100000000;
    if ((param_1 & 0xff00000000) != 0x100000000) {
      if (uVar1 == 0x100000000) {
        return 0;
      }
      goto LAB_1005442c8;
    }
  }
  if (uVar1 != uVar2) {
    return 0;
  }
LAB_1005442c8:
  if (param_2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(param_5);
    uVar1 = param_2;
    _swift_bridgeObjectRetain();
    FUN_100524400();
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_5);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_3 == 3) {
    if (param_6 == 3) {
      return 1;
    }
  }
  else if (param_6 != 3) {
    if (param_3 == 2) {
      if (param_6 == 2) {
        return 1;
      }
    }
    else if ((param_6 != 2) && (((param_3 ^ param_6) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100544444 | FUN_100544444 */

undefined8 FUN_100544444(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  _Var2.unknown = (undefined *)param_1[3];
  puVar3 = (undefined *)param_2[3];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var2.unknown != puVar3) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var2,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  if ((((undefined *)param_1[4] != (undefined *)param_2[4]) ||
      ((undefined *)param_1[5] != (undefined *)param_2[5])) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[4],(undefined *)param_1[5],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar1)) {
    return 0;
  }
  _Var2.unknown = (undefined *)param_1[7];
  puVar3 = (undefined *)param_2[7];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var2.unknown != puVar3)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var2,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar1)) {
      return 0;
    }
  }
  _Var2.unknown = (undefined *)param_1[9];
  puVar3 = (undefined *)param_2[9];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[8] != (undefined *)param_2[8]) || (_Var2.unknown != puVar3)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[8],_Var2,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[8]), !bVar1)) {
      return 0;
    }
  }
  uVar5 = param_1[10];
  lVar4 = param_2[10];
  if (uVar5 == 0) {
    if (lVar4 == 0) {
      return 1;
    }
  }
  else if (lVar4 != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_100554f9c(uVar5,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1005445a0 | FUN_1005445a0 */

void FUN_1005445a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56b7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56b7c,&DAT_100eddb10);
  DAT_100fce818 = pTVar1;
  return;
}



/* Address: 0x1005445e0 | FUN_1005445e0 */

void FUN_1005445e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce830 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52248;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52248,&DAT_100edae10);
  DAT_100fce830 = pTVar1;
  return;
}



/* Address: 0x100544620 | FUN_100544620 */

undefined4 FUN_100544620(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x656d616e || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x656c746974) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6e6f6973726576) || (param_2 != &DAT_e700000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6f6973726576,(_StringGuts)0xe700000000000000,expecting
                            ), !bVar1)) {
        if (((param_1 != 0x7470697263736564) || (param_2 != &DAT_eb000000006e6f69)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x7470697263736564,(_StringGuts)0xeb000000006e6f69,
                               expecting), !bVar1)) {
          if (((param_1 != 0x5565746973626577) || (param_2 != (undefined1 *)0xea00000000006c72)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x5565746973626577,(_StringGuts)0xea00000000006c72,
                                 expecting), !bVar1)) {
            if ((param_1 == 0x736e6f6369) && (param_2 == &DAT_e500000000000000)) {
              _swift_bridgeObjectRelease(&DAT_e500000000000000);
              return 5;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x736e6f6369,(_StringGuts)0xe500000000000000,expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 5;
            }
            return 6;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10054481c | FUN_10054481c */

/* WARNING: Removing unreachable block (ram,0x000100544a78) */
/* WARNING: Removing unreachable block (ram,0x0001005449cc) */
/* WARNING: Removing unreachable block (ram,0x000100544978) */
/* WARNING: Removing unreachable block (ram,0x000100544a20) */
/* WARNING: Removing unreachable block (ram,0x000100544b0c) */
/* WARNING: Removing unreachable block (ram,0x000100544b28) */
/* WARNING: Removing unreachable block (ram,0x000100544b30) */
/* WARNING: Removing unreachable block (ram,0x000100544b54) */
/* WARNING: Removing unreachable block (ram,0x000100544b44) */
/* WARNING: Removing unreachable block (ram,0x0001005448f4) */

void FUN_10054481c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_1b0 [8];
  undefined *local_1a8;
  undefined *local_1a0;
  void *local_198;
  long local_190;
  undefined1 auStack_188 [88];
  char *local_130;
  void *pvStack_128;
  char **local_120;
  undefined *puStack_118;
  char *local_110;
  void *pvStack_108;
  char **local_100;
  undefined *puStack_f8;
  char **ppcStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  undefined8 local_d0;
  String local_c8;
  char **local_b8;
  undefined *puStack_b0;
  String local_a8;
  char **local_98;
  undefined *puStack_90;
  char **local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fcf140;
  FUN_1000f7830(&DAT_100fcf140,&DAT_100c57040);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005445a0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_130 = (char *)((ulong)local_130 & 0xffffffffffffff00);
    local_190 = lVar7;
    local_c8 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    local_198 = local_c8.bridgeObject;
    local_130._0_1_ = 1;
    ppcVar2 = &local_130;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_130._0_1_ = 2;
    local_1a0 = puVar4;
    local_b8 = ppcVar2;
    puStack_b0 = puVar4;
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    local_130._0_1_ = 3;
    ppcVar2 = &local_130;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_130 = (char *)CONCAT71(local_130._1_7_,4);
    ppcVar3 = &local_130;
    puVar6 = puVar1;
    local_1a8 = puVar4;
    local_98 = ppcVar2;
    puStack_90 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar4 = &DAT_100fce820;
    local_88 = ppcVar3;
    puStack_80 = puVar6;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_d1 = 5;
    puVar5 = &DAT_100fcf148;
    FUN_10054d628(&DAT_100fcf148,FUN_10054d698,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_d0,puVar4,&local_d1,puVar1,puVar4,puVar5)
    ;
    (**(code **)(local_190 + 8))(auStack_1b0 + -extraout_x8,puVar1);
    local_78 = local_d0;
    puStack_f8 = puStack_90;
    local_100 = local_98;
    puStack_e8 = puStack_80;
    ppcStack_f0 = local_88;
    local_e0 = local_d0;
    pvStack_128 = local_c8.bridgeObject;
    local_130 = local_c8.str;
    puStack_118 = puStack_b0;
    local_120 = local_b8;
    pvStack_108 = local_a8.bridgeObject;
    local_110 = local_a8.str;
    FUN_1004ddb74(&local_130,auStack_188);
    FUN_100004594(param_2);
    FUN_1004e00e8(&local_c8);
    param_1[5] = pvStack_108;
    param_1[4] = local_110;
    param_1[7] = puStack_f8;
    param_1[6] = local_100;
    param_1[9] = puStack_e8;
    param_1[8] = ppcStack_f0;
    param_1[10] = local_e0;
    param_1[1] = pvStack_128;
    *param_1 = local_130;
    param_1[3] = puStack_118;
    param_1[2] = local_120;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x100544be0 | FUN_100544be0 */

void FUN_100544be0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce840 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56b2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56b2c,&DAT_100edda80);
  DAT_100fce840 = pTVar1;
  return;
}



/* Address: 0x100544c20 | FUN_100544c20 */

void FUN_100544c20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56adc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56adc,&DAT_100edd9f0);
  DAT_100fce858 = pTVar1;
  return;
}



/* Address: 0x100544c60 | FUN_100544c60 */

void FUN_100544c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce868 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56a8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56a8c,&DAT_100edd9d0);
  DAT_100fce868 = pTVar1;
  return;
}



/* Address: 0x100544ca0 | FUN_100544ca0 */

void FUN_100544ca0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56a3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56a3c,&DAT_100edd9b0);
  DAT_100fce878 = pTVar1;
  return;
}



/* Address: 0x100544ce0 | FUN_100544ce0 */

void FUN_100544ce0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce888 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c569ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c569ec,&DAT_100edd990);
  DAT_100fce888 = pTVar1;
  return;
}



/* Address: 0x100544d20 | FUN_100544d20 */

void FUN_100544d20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce898 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5699c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5699c,&DAT_100edd970);
  DAT_100fce898 = pTVar1;
  return;
}



/* Address: 0x100544d60 | FUN_100544d60 */

void FUN_100544d60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce8a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56168;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56168,&DAT_100edd6b8);
  DAT_100fce8a0 = pTVar1;
  return;
}



/* Address: 0x100544da0 | FUN_100544da0 */

void FUN_100544da0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c561b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c561b8,&DAT_100edd778);
  DAT_100fce8a8 = pTVar1;
  return;
}



/* Address: 0x100544de0 | FUN_100544de0 */

void FUN_100544de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55c38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55c38,&DAT_100edd638);
  DAT_100fce8b0 = pTVar1;
  return;
}



/* Address: 0x100544e20 | FUN_100544e20 */

undefined4 FUN_100544e20(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x676e696c706d6173 || param_2 != &DAT_e800000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x676e696c706d6173,(_StringGuts)0xe800000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x7461746963696c65) && (param_2 == &DAT_eb000000006e6f69)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7461746963696c65,(_StringGuts)0xeb000000006e6f69,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x656d697265707865) || (param_2 != (undefined1 *)0xec0000006c61746e)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d697265707865,(_StringGuts)0xec0000006c61746e,
                             expecting), !bVar1)) {
        if ((param_1 == 0x73746f6f72) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x73746f6f72,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100544f84 | FUN_100544f84 */

/* WARNING: Removing unreachable block (ram,0x000100545164) */
/* WARNING: Removing unreachable block (ram,0x00010054516c) */

void FUN_100544f84(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ushort local_68;
  byte bStack_66;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcf118;
  FUN_1000f7830(&DAT_100fcf118,&DAT_100c57038);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100544d20();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_10054d500();
    puVar3 = &DAT_100edd6b8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_100edd6b8,&local_51,puVar1,&DAT_100edd6b8,KVar2.unknown);
    uVar5 = (ulong)local_68;
    local_51 = 1;
    FUN_10054d540();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_100edd778,&local_51,puVar1,&DAT_100edd778,puVar3);
    puVar3 = &DAT_100fcc360;
    local_70 = uVar5;
    FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
    local_51 = 2;
    puVar4 = &DAT_100fcf130;
    FUN_10054d580(&DAT_100fcf130,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_68,puVar3,&local_51,puVar1,puVar3,puVar4)
    ;
    local_51 = 3;
    local_80 = (ulong)bStack_66;
    local_78 = (ulong)local_68;
    FUN_10054d5e8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_100edd638,&local_51,puVar1,&DAT_100edd638,puVar3);
    (**(code **)(lVar6 + 8))((long)&local_80 - extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return;
}



/* Address: 0x1005451e4 | FUN_1005451e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1005451e4(void)

{
  return ZEXT816(0x100fce9e0);
}



/* Address: 0x100545204 | FUN_100545204 */

void FUN_100545204(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100545230 | FUN_100545230 */

void FUN_100545230(undefined8 param_1)

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
  plVar3 = (long *)0x820;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10052b8d4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10054529c | FUN_10054529c */

void FUN_10054529c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1005452c0 | FUN_1005452c0 */

void FUN_1005452c0(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x310;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10052d3cc(param_1);
  return;
}



/* Address: 0x100545310 | FUN_100545310 */

void FUN_100545310(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_10054532c);
  return;
}



/* Address: 0x10054532c | FUN_10054532c */

void FUN_10054532c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)(unaff_x22 + 0x78);
  _swift_beginAccess(lVar9 + 0x110,unaff_x22 + 0x38,0,0);
  lVar5 = *(long *)(lVar9 + 0x110);
  lVar6 = *(long *)(lVar5 + 0x10);
  _swift_bridgeObjectRetain(lVar5);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    _swift_bridgeObjectRetain(lVar5);
    uVar3 = 0;
    lVar6 = -0x2fffffffffffffe9;
    FUN_100071370();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((uVar3 & 1) != 0) {
      puVar7 = *(undefined **)(*(long *)(lVar5 + 0x38) + lVar6 * 8);
      _swift_bridgeObjectRetain(puVar7);
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(lVar5);
  puVar1 = &DAT_100fcb6d8;
  FUN_1000f7830(&DAT_100fcb6d8,&DAT_100c50488);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &DAT_100fcf0e8;
  FUN_1000f7830(&DAT_100fcf0e8,&DAT_100c57020);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = uVar10;
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  _swift_retain(uVar8);
  FUN_1005428b0(puVar1);
  _swift_beginAccess(lVar9 + 0x110,unaff_x22 + 0x50,0x21,0);
  uVar8 = *(undefined8 *)(lVar9 + 0x110);
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uVar4 = *(undefined8 *)(lVar9 + 0x110);
  *(undefined8 *)(lVar9 + 0x110) = 0x8000000000000000;
  FUN_1004b578c(puVar7,0xd000000000000017,0x8000000100dad110,uVar8);
  *(undefined8 *)(lVar9 + 0x110) = uVar4;
  _swift_endAccess(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001005454cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x1005454d0 | FUN_1005454d0 */

void FUN_1005454d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005454f4 | FUN_1005454f4 */

void FUN_1005454f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10052fd34(plVar5,param_1,param_2,uVar2,uVar4,uVar1,uVar3);
  return;
}



/* Address: 0x100545574 | FUN_100545574 */

void FUN_100545574(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_1004e3b34(0,uVar2,uVar3);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar6 = uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  puVar1 = (undefined8 *)(unaff_x20 + uVar6);
  FUN_1004dc818(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  _swift_bridgeObjectRelease(puVar1[4]);
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + (long)iVar4,lVar5);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar7));
  puVar1 = (undefined8 *)(unaff_x20 + uVar7 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x100545664 | FUN_100545664 */

void FUN_100545664(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x20;
  long unaff_x22;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = 0;
  FUN_1004e3b34(0,uVar2,uVar6);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar13 = uVar12 + 0x38 & (uVar12 ^ 0xffffffffffffffff);
  uVar12 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + uVar12);
  uVar4 = *puVar1;
  uVar8 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar12 + 0x10);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  plVar11 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)thunk_FUN_100008284;
  FUN_100533934(plVar11,param_1,uVar3,uVar7,uVar14,unaff_x20 + uVar13,uVar4,uVar8,uVar5,uVar9,uVar2,
                uVar6);
  return;
}



/* Address: 0x10054574c | FUN_10054574c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10054574c(void)

{
  return ZEXT816(0x100fced18);
}



/* Address: 0x10054576c | FUN_10054576c */

void FUN_10054576c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_1004e3b34(0,uVar2,uVar3);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff)));
  FUN_1004dc818(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  _swift_bridgeObjectRelease(puVar1[4]);
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + (long)iVar4,lVar5);
  _swift_deallocObject();
  return;
}



/* Address: 0x100545834 | FUN_100545834 */

void FUN_100545834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_1004e3b34(0,uVar1,uVar3);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_100008284;
  FUN_100538688(plVar6,param_1,uVar2,uVar4,uVar8,
                unaff_x20 + (uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff)),uVar1,uVar3);
  return;
}



/* Address: 0x1005458e0 | FUN_1005458e0 */

void FUN_1005458e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fce8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fce8d0;
  FUN_1000f8b08(&DAT_100fce8d0,&DAT_100c55870);
  puVar2 = &DAT_100fcd020;
  FUN_100134584(&DAT_100fcd020,&DAT_100fcb418,&DAT_100c50268,
                &TargetProtocolConformanceDescriptor_100c52bb8);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fce8d8 = puVar3;
  return;
}



/* Address: 0x100545970 | FUN_100545970 */

undefined8 FUN_100545970(undefined8 param_1)

{
  FUN_1005a9e90();
  return param_1;
}



/* Address: 0x1005459a4 | FUN_1005459a4 */

void FUN_1005459a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005459c8 | FUN_1005459c8 */

void FUN_1005459c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10053c248(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}


