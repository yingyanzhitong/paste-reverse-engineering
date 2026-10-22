/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a5cd64 | FUN_100a5cd64 */

void FUN_100a5cd64(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5cd80,0,0);
  return;
}



/* Address: 0x100a5cd80 | FUN_100a5cd80 */

void FUN_100a5cd80(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  _swift_retain(lVar4);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  puVar2 = &DAT_100f2c978;
  _swift_allocObject(&DAT_100f2c978,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c4fc;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a6419c,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5ce54 | FUN_100a5ce54 */

void FUN_100a5ce54(undefined2 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5ce74,0,0);
  return;
}



/* Address: 0x100a5ce74 | FUN_100a5ce74 */

void FUN_100a5ce74(void)

{
  undefined2 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar6 = *(undefined8 *)(lVar2 + 0x31);
  uVar5 = *(undefined8 *)(lVar2 + 0x29);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar3 = &DAT_100f2c090;
  _swift_allocObject(&DAT_100f2c090,0x3c,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar9;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined2 *)(puVar3 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5cf54;
  FUN_100912dec(plVar4,unaff_x22 + 0x3a,FUN_100a63e98,puVar3,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5cf54 | FUN_100a5cf54 */

void FUN_100a5cf54(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a5c8b4;
  }
  else {
    pcVar2 = thunk_FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5cfc0 | FUN_100a5cfc0 */

void FUN_100a5cfc0(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5cfdc,0,0);
  return;
}



/* Address: 0x100a5cfdc | FUN_100a5cfdc */

void FUN_100a5cfdc(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2c0b8;
  _swift_allocObject(&DAT_100f2c0b8,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5d0a8;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a6419c,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5d0a8 | FUN_100a5d0a8 */

void FUN_100a5d0a8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(long *)(lVar3 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a5ca84;
  }
  else {
    pcVar2 = thunk_FUN_100a4bc88;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5d114 | FUN_100a5d114 */

void FUN_100a5d114(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d12c,0,0);
  return;
}



/* Address: 0x100a5d12c | FUN_100a5d12c */

void FUN_100a5d12c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  _swift_retain(lVar4);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  puVar1 = &DAT_100f2cec8;
  _swift_allocObject(&DAT_100f2cec8,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5d208;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a5d208 | FUN_100a5d208 */

void FUN_100a5d208(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5d274;
  }
  else {
    pcVar2 = FUN_100a5d2b4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5d274 | FUN_100a5d274 */

void FUN_100a5d274(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100a5d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a5d2b4 | FUN_100a5d2b4 */

void FUN_100a5d2b4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100a5d2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5d2f0 | FUN_100a5d2f0 */

void FUN_100a5d2f0(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d308,0,0);
  return;
}



/* Address: 0x100a5d308 | FUN_100a5d308 */

void FUN_100a5d308(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  _swift_retain(lVar4);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  puVar1 = &DAT_100f2cce8;
  _swift_allocObject(&DAT_100f2cce8,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5d3e4;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a5d3e4 | FUN_100a5d3e4 */

void FUN_100a5d3e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a5d274;
  }
  else {
    pcVar2 = thunk_FUN_100a5d2b4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5d450 | FUN_100a5d450 */

void FUN_100a5d450(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d468,0,0);
  return;
}



/* Address: 0x100a5d468 | FUN_100a5d468 */

void FUN_100a5d468(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  _swift_retain(lVar4);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  puVar1 = &DAT_100f2cae0;
  _swift_allocObject(&DAT_100f2cae0,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5d3e4;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a5d544 | FUN_100a5d544 */

void FUN_100a5d544(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d55c,0,0);
  return;
}



/* Address: 0x100a5d55c | FUN_100a5d55c */

void FUN_100a5d55c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  _swift_retain(lVar4);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  puVar1 = &DAT_100f2c950;
  _swift_allocObject(&DAT_100f2c950,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5d3e4;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a5d638 | FUN_100a5d638 */

void FUN_100a5d638(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d654,0,0);
  return;
}



/* Address: 0x100a5d654 | FUN_100a5d654 */

void FUN_100a5d654(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar6 = *(undefined8 *)(lVar1 + 0x31);
  uVar5 = *(undefined8 *)(lVar1 + 0x29);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2c0e0;
  _swift_allocObject(&DAT_100f2c0e0,0x39,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar2;
  uVar8 = *(undefined8 *)(lVar1 + 0x18);
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar9 = *(undefined8 *)(lVar1 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar1 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  puVar4 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5d73c;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a63eb4,puVar2,puVar4);
  return;
}



/* Address: 0x100a5d73c | FUN_100a5d73c */

void FUN_100a5d73c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5d7a8;
  }
  else {
    pcVar2 = FUN_100a5d7e8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5d7a8 | FUN_100a5d7a8 */

void FUN_100a5d7a8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100a5d7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a5d7e8 | FUN_100a5d7e8 */

void FUN_100a5d7e8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100a5d820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5d824 | FUN_100a5d824 */

void FUN_100a5d824(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d83c,0,0);
  return;
}



/* Address: 0x100a5d83c | FUN_100a5d83c */

void FUN_100a5d83c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar1 = &DAT_100f2c108;
  _swift_allocObject(&DAT_100f2c108,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5d910;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a5d910 | FUN_100a5d910 */

void FUN_100a5d910(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a53494;
  }
  else {
    pcVar2 = FUN_1006c140c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5d97c | FUN_100a5d97c */

void FUN_100a5d97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5d998,0,0);
  return;
}



/* Address: 0x100a5d998 | FUN_100a5d998 */

void FUN_100a5d998(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_retain(lVar2);
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  puVar3 = &DAT_100f2cea0;
  _swift_allocObject(&DAT_100f2cea0,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5da90;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a5da90 | FUN_100a5da90 */

void FUN_100a5da90(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5dafc;
  }
  else {
    pcVar2 = FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5dafc | FUN_100a5dafc */

void FUN_100a5dafc(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100a5db38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a5db3c | FUN_100a5db3c */

void FUN_100a5db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5db58,0,0);
  return;
}



/* Address: 0x100a5db58 | FUN_100a5db58 */

void FUN_100a5db58(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_retain(lVar2);
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  puVar3 = &DAT_100f2ccc0;
  _swift_allocObject(&DAT_100f2ccc0,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5dc50;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a5dc50 | FUN_100a5dc50 */

void FUN_100a5dc50(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a5dafc;
  }
  else {
    pcVar2 = thunk_FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5dcbc | FUN_100a5dcbc */

void FUN_100a5dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5dcd8,0,0);
  return;
}



/* Address: 0x100a5dcd8 | FUN_100a5dcd8 */

void FUN_100a5dcd8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_retain(lVar2);
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  puVar3 = &DAT_100f2cab8;
  _swift_allocObject(&DAT_100f2cab8,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5dc50;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a5ddd0 | FUN_100a5ddd0 */

void FUN_100a5ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5ddec,0,0);
  return;
}



/* Address: 0x100a5ddec | FUN_100a5ddec */

void FUN_100a5ddec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_retain(lVar2);
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  puVar3 = &DAT_100f2c928;
  _swift_allocObject(&DAT_100f2c928,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5dc50;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a5dee4 | FUN_100a5dee4 */

void FUN_100a5dee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5df04,0,0);
  return;
}



/* Address: 0x100a5df04 | FUN_100a5df04 */

void FUN_100a5df04(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x10))();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar8 = *(undefined8 *)(lVar2 + 0x31);
  uVar7 = *(undefined8 *)(lVar2 + 0x29);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar7;
  puVar3 = &DAT_100f2c130;
  _swift_allocObject(&DAT_100f2c130,0x50,7);
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5e008;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a63ecc,puVar3,puVar4);
  return;
}



/* Address: 0x100a5e008 | FUN_100a5e008 */

void FUN_100a5e008(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xb0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5e074;
  }
  else {
    pcVar2 = FUN_100a5e0b4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5e074 | FUN_100a5e074 */

void FUN_100a5e074(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100a5e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a5e0b4 | FUN_100a5e0b4 */

void FUN_100a5e0b4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100a5e0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5e0f0 | FUN_100a5e0f0 */

void FUN_100a5e0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100a5e10c,0,0);
  return;
}



/* Address: 0x100a5e10c | FUN_100a5e10c */

void FUN_100a5e10c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(lVar2 + 0x31);
  uVar7 = *(undefined8 *)(lVar2 + 0x29);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar7;
  puVar3 = &DAT_100f2c158;
  _swift_allocObject(&DAT_100f2c158,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a5e1fc;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a5e1fc | FUN_100a5e1fc */

void FUN_100a5e1fc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a53494;
  }
  else {
    pcVar2 = FUN_100a15590;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5e268 | FUN_100a5e268 */

void FUN_100a5e268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a5e28c,0,0);
  return;
}



/* Address: 0x100a5e28c | FUN_100a5e28c */

void FUN_100a5e28c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x10))();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008e3580;
  FUN_100a5e30c(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),uVar1,*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x100a5e30c | FUN_100a5e30c */

void FUN_100a5e30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100aa933c(param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Address: 0x100a5e39c | FUN_100a5e39c */

void FUN_100a5e39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5e3b8,0,0);
  return;
}



/* Address: 0x100a5e3b8 | FUN_100a5e3b8 */

void FUN_100a5e3b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2ce78;
  _swift_allocObject(&DAT_100f2ce78,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  _swift_retain(lVar2);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5e49c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5e49c | FUN_100a5e49c */

void FUN_100a5e49c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5e508;
  }
  else {
    pcVar2 = FUN_100a5e544;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5e508 | FUN_100a5e508 */

void FUN_100a5e508(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100a5e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5e544 | FUN_100a5e544 */

void FUN_100a5e544(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100a5e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5e580 | FUN_100a5e580 */

void FUN_100a5e580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5e59c,0,0);
  return;
}



/* Address: 0x100a5e59c | FUN_100a5e59c */

void FUN_100a5e59c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2cc98;
  _swift_allocObject(&DAT_100f2cc98,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  _swift_retain(lVar2);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5e680;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5e680 | FUN_100a5e680 */

void FUN_100a5e680(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a5e508;
  }
  else {
    pcVar2 = thunk_FUN_100a5e544;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5e6ec | FUN_100a5e6ec */

void FUN_100a5e6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5e708,0,0);
  return;
}



/* Address: 0x100a5e708 | FUN_100a5e708 */

void FUN_100a5e708(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2ca90;
  _swift_allocObject(&DAT_100f2ca90,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  _swift_retain(lVar2);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5e680;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5e7ec | FUN_100a5e7ec */

void FUN_100a5e7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5e808,0,0);
  return;
}



/* Address: 0x100a5e808 | FUN_100a5e808 */

void FUN_100a5e808(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2c900;
  _swift_allocObject(&DAT_100f2c900,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  _swift_retain(lVar2);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5e680;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5e8ec | FUN_100a5e8ec */

void FUN_100a5e8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5e90c,0,0);
  return;
}



/* Address: 0x100a5e90c | FUN_100a5e90c */

void FUN_100a5e90c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x10))();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2c180;
  _swift_allocObject(&DAT_100f2c180,0x50,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a4fbc0;
  FUN_100912dec();
  return;
}


