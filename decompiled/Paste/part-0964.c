/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a5b250 | FUN_100a5b250 */

void FUN_100a5b250(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b268,0,0);
  return;
}



/* Address: 0x100a5b268 | FUN_100a5b268 */

void FUN_100a5b268(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  _swift_retain(lVar3);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x109) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x101) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
  puVar1 = &DAT_100f2cf68;
  _swift_allocObject(&DAT_100f2cf68,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5b33c;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5b33c | FUN_100a5b33c */

void FUN_100a5b33c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  _swift_release(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a5b3a8;
  }
  else {
    pcVar1 = FUN_100a5b424;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a5b3a8 | FUN_100a5b3a8 */

void FUN_100a5b3a8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x150));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100a5b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5b424 | FUN_100a5b424 */

void FUN_100a5b424(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x000100a5b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5b460 | FUN_100a5b460 */

void FUN_100a5b460(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b478,0,0);
  return;
}



/* Address: 0x100a5b478 | FUN_100a5b478 */

void FUN_100a5b478(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  _swift_retain(lVar3);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x109) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x101) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
  puVar1 = &DAT_100f2cd88;
  _swift_allocObject(&DAT_100f2cd88,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5b54c;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5b54c | FUN_100a5b54c */

void FUN_100a5b54c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  _swift_release(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a5b3a8;
  }
  else {
    pcVar1 = thunk_FUN_100a5b424;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a5b5b8 | FUN_100a5b5b8 */

void FUN_100a5b5b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b5d0,0,0);
  return;
}



/* Address: 0x100a5b5d0 | FUN_100a5b5d0 */

void FUN_100a5b5d0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  _swift_retain(lVar3);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x109) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x101) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
  puVar1 = &DAT_100f2c9f0;
  _swift_allocObject(&DAT_100f2c9f0,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5b54c;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5b6a4 | FUN_100a5b6a4 */

void FUN_100a5b6a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b6bc,0,0);
  return;
}



/* Address: 0x100a5b6bc | FUN_100a5b6bc */

void FUN_100a5b6bc(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  _swift_retain(lVar3);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x109) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x101) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
  puVar1 = &DAT_100f2cb80;
  _swift_allocObject(&DAT_100f2cb80,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5b54c;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5b790 | FUN_100a5b790 */

void FUN_100a5b790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_3;
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b7ac,0,0);
  return;
}



/* Address: 0x100a5b7ac | FUN_100a5b7ac */

void FUN_100a5b7ac(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(unaff_x22 + 0x150);
  (**(code **)(*(long *)(unaff_x22 + 0x158) + 0x10))();
  *(long *)(unaff_x22 + 0x168) = lVar1;
  uVar5 = *(undefined8 *)(lVar1 + 0x31);
  uVar4 = *(undefined8 *)(lVar1 + 0x29);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x109) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x101) = uVar4;
  puVar2 = &DAT_100f2bfa0;
  _swift_allocObject(&DAT_100f2bfa0,0x39,7);
  *(undefined **)(unaff_x22 + 0x170) = puVar2;
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar8 = *(undefined8 *)(lVar1 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar1 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5b88c;
  FUN_100912dec(plVar3,unaff_x22 + 0x10,FUN_100a63e40,puVar2,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5b88c | FUN_100a5b88c */

void FUN_100a5b88c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  _swift_release(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a5b8f8;
  }
  else {
    pcVar1 = FUN_100a5b978;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a5b8f8 | FUN_100a5b8f8 */

void FUN_100a5b8f8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x168));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100a5b974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5b978 | FUN_100a5b978 */

void FUN_100a5b978(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x000100a5b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5b9b4 | FUN_100a5b9b4 */

void FUN_100a5b9b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  _swift_task_switch(FUN_100a5b9cc,0,0);
  return;
}



/* Address: 0x100a5b9cc | FUN_100a5b9cc */

void FUN_100a5b9cc(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x109) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x101) = uVar4;
  puVar1 = &DAT_100f2bfc8;
  _swift_allocObject(&DAT_100f2bfc8,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5ba98;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a5ba98 | FUN_100a5ba98 */

void FUN_100a5ba98(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  _swift_release(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a5bb04;
  }
  else {
    pcVar1 = FUN_100a5bb54;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a5bb04 | FUN_100a5bb04 */

void FUN_100a5bb04(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100a5bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5bb54 | FUN_100a5bb54 */

void FUN_100a5bb54(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a5bb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5bb60 | FUN_100a5bb60 */

void FUN_100a5bb60(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5bb7c,0,0);
  return;
}



/* Address: 0x100a5bb7c | FUN_100a5bb7c */

void FUN_100a5bb7c(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar2 = &DAT_100f2cf40;
  _swift_allocObject(&DAT_100f2cf40,0x3c,7);
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
  _swift_retain(lVar4);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5bc4c | FUN_100a5bc4c */

void FUN_100a5bc4c(void)

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
    pcVar2 = thunk_FUN_1005dd380;
  }
  else {
    pcVar2 = thunk_FUN_100a5c3d0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5bcb8 | FUN_100a5bcb8 */

void FUN_100a5bcb8(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5bcd4,0,0);
  return;
}



/* Address: 0x100a5bcd4 | FUN_100a5bcd4 */

void FUN_100a5bcd4(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar2 = &DAT_100f2cd60;
  _swift_allocObject(&DAT_100f2cd60,0x3c,7);
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
  _swift_retain(lVar4);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5bda4 | FUN_100a5bda4 */

void FUN_100a5bda4(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5bdc0,0,0);
  return;
}



/* Address: 0x100a5bdc0 | FUN_100a5bdc0 */

void FUN_100a5bdc0(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar2 = &DAT_100f2cb58;
  _swift_allocObject(&DAT_100f2cb58,0x3c,7);
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
  _swift_retain(lVar4);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5be90 | FUN_100a5be90 */

void FUN_100a5be90(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5beac,0,0);
  return;
}



/* Address: 0x100a5beac | FUN_100a5beac */

void FUN_100a5beac(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar2 = &DAT_100f2c9c8;
  _swift_allocObject(&DAT_100f2c9c8,0x3c,7);
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
  _swift_retain(lVar4);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5bf7c | FUN_100a5bf7c */

void FUN_100a5bf7c(undefined2 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5bf9c,0,0);
  return;
}



/* Address: 0x100a5bf9c | FUN_100a5bf9c */

void FUN_100a5bf9c(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar3 = &DAT_100f2bff0;
  _swift_allocObject(&DAT_100f2bff0,0x3c,7);
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
  plVar4[1] = (long)FUN_100a5c078;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5c078 | FUN_100a5c078 */

void FUN_100a5c078(void)

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
    pcVar2 = thunk_FUN_1005dbe14;
  }
  else {
    pcVar2 = thunk_FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5c0e4 | FUN_100a5c0e4 */

void FUN_100a5c0e4(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100a5c100,0,0);
  return;
}



/* Address: 0x100a5c100 | FUN_100a5c100 */

void FUN_100a5c100(void)

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
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
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
  puVar2 = &DAT_100f2c018;
  _swift_allocObject(&DAT_100f2c018,0x3c,7);
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
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5c1c8 | FUN_100a5c1c8 */

void FUN_100a5c1c8(void)

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
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = thunk_FUN_100a4bc88;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5c234 | FUN_100a5c234 */

void FUN_100a5c234(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c250,0,0);
  return;
}



/* Address: 0x100a5c250 | FUN_100a5c250 */

void FUN_100a5c250(void)

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
  puVar2 = &DAT_100f2cf18;
  _swift_allocObject(&DAT_100f2cf18,0x3c,7);
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
  plVar3[1] = (long)FUN_100a5c324;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5c324 | FUN_100a5c324 */

void FUN_100a5c324(void)

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
    pcVar2 = FUN_100a5c390;
  }
  else {
    pcVar2 = FUN_100a5c3d0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5c390 | FUN_100a5c390 */

void FUN_100a5c390(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100a5c3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined2 *)(unaff_x22 + 0x3a));
  return;
}



/* Address: 0x100a5c3d0 | FUN_100a5c3d0 */

void FUN_100a5c3d0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100a5c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5c40c | FUN_100a5c40c */

void FUN_100a5c40c(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c428,0,0);
  return;
}



/* Address: 0x100a5c428 | FUN_100a5c428 */

void FUN_100a5c428(void)

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
  puVar2 = &DAT_100f2cd38;
  _swift_allocObject(&DAT_100f2cd38,0x3c,7);
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
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5c4fc | FUN_100a5c4fc */

void FUN_100a5c4fc(void)

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
    pcVar2 = thunk_FUN_100a5c390;
  }
  else {
    pcVar2 = thunk_FUN_100a5c3d0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5c568 | FUN_100a5c568 */

void FUN_100a5c568(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c584,0,0);
  return;
}



/* Address: 0x100a5c584 | FUN_100a5c584 */

void FUN_100a5c584(void)

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
  puVar2 = &DAT_100f2cb30;
  _swift_allocObject(&DAT_100f2cb30,0x3c,7);
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
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5c658 | FUN_100a5c658 */

void FUN_100a5c658(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c674,0,0);
  return;
}



/* Address: 0x100a5c674 | FUN_100a5c674 */

void FUN_100a5c674(void)

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
  puVar2 = &DAT_100f2c9a0;
  _swift_allocObject(&DAT_100f2c9a0,0x3c,7);
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
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5c748 | FUN_100a5c748 */

void FUN_100a5c748(undefined2 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c768,0,0);
  return;
}



/* Address: 0x100a5c768 | FUN_100a5c768 */

void FUN_100a5c768(void)

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
  puVar3 = &DAT_100f2c040;
  _swift_allocObject(&DAT_100f2c040,0x3c,7);
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
  plVar4[1] = (long)FUN_100a5c848;
  FUN_100912dec(plVar4,unaff_x22 + 0x3a,FUN_100a63e7c,puVar3,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5c848 | FUN_100a5c848 */

void FUN_100a5c848(void)

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
    pcVar2 = FUN_100a5c8b4;
  }
  else {
    pcVar2 = FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5c8b4 | FUN_100a5c8b4 */

void FUN_100a5c8b4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100a5c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined2 *)(unaff_x22 + 0x3a));
  return;
}



/* Address: 0x100a5c8f4 | FUN_100a5c8f4 */

void FUN_100a5c8f4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100a5c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5c930 | FUN_100a5c930 */

void FUN_100a5c930(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5c94c,0,0);
  return;
}



/* Address: 0x100a5c94c | FUN_100a5c94c */

void FUN_100a5c94c(void)

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
  puVar2 = &DAT_100f2c068;
  _swift_allocObject(&DAT_100f2c068,0x3c,7);
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
  plVar3[1] = (long)FUN_100a5ca18;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a5ca18 | FUN_100a5ca18 */

void FUN_100a5ca18(void)

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
    pcVar2 = FUN_100a5ca84;
  }
  else {
    pcVar2 = FUN_100a4bc88;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5ca84 | FUN_100a5ca84 */

void FUN_100a5ca84(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a5ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined2 *)(unaff_x22 + 0x3a));
  return;
}



/* Address: 0x100a5ca94 | FUN_100a5ca94 */

void FUN_100a5ca94(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5cab0,0,0);
  return;
}



/* Address: 0x100a5cab0 | FUN_100a5cab0 */

void FUN_100a5cab0(void)

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
  puVar2 = &DAT_100f2cef0;
  _swift_allocObject(&DAT_100f2cef0,0x3c,7);
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



/* Address: 0x100a5cb84 | FUN_100a5cb84 */

void FUN_100a5cb84(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5cba0,0,0);
  return;
}



/* Address: 0x100a5cba0 | FUN_100a5cba0 */

void FUN_100a5cba0(void)

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
  puVar2 = &DAT_100f2cd10;
  _swift_allocObject(&DAT_100f2cd10,0x3c,7);
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



/* Address: 0x100a5cc74 | FUN_100a5cc74 */

void FUN_100a5cc74(undefined2 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100a5cc90,0,0);
  return;
}



/* Address: 0x100a5cc90 | FUN_100a5cc90 */

void FUN_100a5cc90(void)

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
  puVar2 = &DAT_100f2cb08;
  _swift_allocObject(&DAT_100f2cb08,0x3c,7);
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


