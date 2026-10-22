/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a5e9fc | FUN_100a5e9fc */

void FUN_100a5e9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5ea18,0,0);
  return;
}



/* Address: 0x100a5ea18 | FUN_100a5ea18 */

void FUN_100a5ea18(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  long *plVar4;
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
  puVar3 = &DAT_100f2c1a8;
  _swift_allocObject(&DAT_100f2c1a8,0x50,7);
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5eaf4;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5eaf4 | FUN_100a5eaf4 */

void FUN_100a5eaf4(void)

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
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5eb60 | FUN_100a5eb60 */

void FUN_100a5eb60(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5eb78,0,0);
  return;
}



/* Address: 0x100a5eb78 | FUN_100a5eb78 */

void FUN_100a5eb78(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2ce50;
  _swift_allocObject(&DAT_100f2ce50,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5ec40;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5ec40 | FUN_100a5ec40 */

void FUN_100a5ec40(void)

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
    pcVar2 = FUN_1005dd380;
  }
  else {
    pcVar2 = FUN_100a5c3d0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5ecac | FUN_100a5ecac */

void FUN_100a5ecac(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5ecc4,0,0);
  return;
}



/* Address: 0x100a5ecc4 | FUN_100a5ecc4 */

void FUN_100a5ecc4(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2cc70;
  _swift_allocObject(&DAT_100f2cc70,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5ed8c | FUN_100a5ed8c */

void FUN_100a5ed8c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5eda4,0,0);
  return;
}



/* Address: 0x100a5eda4 | FUN_100a5eda4 */

void FUN_100a5eda4(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2ca68;
  _swift_allocObject(&DAT_100f2ca68,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5ee6c | FUN_100a5ee6c */

void FUN_100a5ee6c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5ee84,0,0);
  return;
}



/* Address: 0x100a5ee84 | FUN_100a5ee84 */

void FUN_100a5ee84(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2c8d8;
  _swift_allocObject(&DAT_100f2c8d8,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5ef4c | FUN_100a5ef4c */

void FUN_100a5ef4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5ef68,0,0);
  return;
}



/* Address: 0x100a5ef68 | FUN_100a5ef68 */

void FUN_100a5ef68(void)

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
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar5 = *(undefined8 *)(lVar1 + 0x31);
  uVar4 = *(undefined8 *)(lVar1 + 0x29);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar2 = &DAT_100f2c1d0;
  _swift_allocObject(&DAT_100f2c1d0,0x39,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar2;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5f03c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f03c | FUN_100a5f03c */

void FUN_100a5f03c(void)

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
    pcVar2 = FUN_1005dbe14;
  }
  else {
    pcVar2 = FUN_100a5c8f4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5f0a8 | FUN_100a5f0a8 */

void FUN_100a5f0a8(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f0c0,0,0);
  return;
}



/* Address: 0x100a5f0c0 | FUN_100a5f0c0 */

void FUN_100a5f0c0(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2c1f8;
  _swift_allocObject(&DAT_100f2c1f8,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a4bc1c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f180 | FUN_100a5f180 */

void FUN_100a5f180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a5f1a4,0,0);
  return;
}



/* Address: 0x100a5f1a4 | FUN_100a5f1a4 */

void FUN_100a5f1a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = uVar6;
  (**(code **)(lVar1 + 0x10))(uVar6,lVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  puVar3 = &DAT_100f2c220;
  _swift_allocObject(&DAT_100f2c220,0x38,7);
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(long *)(puVar3 + 0x20) = lVar1;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  plVar4 = (long *)0x50;
  _swift_retain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5f284;
  FUN_100a5f2e4(plVar4,*(undefined8 *)(unaff_x22 + 0x10),FUN_1006423a4,puVar3,uVar2,
                *(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x100a5f284 | FUN_100a5f284 */

void FUN_100a5f284(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a5f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100a5f2e4 | FUN_100a5f2e4 */

void FUN_100a5f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a5f304,0,0);
  return;
}



/* Address: 0x100a5f304 | FUN_100a5f304 */

void FUN_100a5f304(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1 = &DAT_100f2c248;
  _swift_allocObject(&DAT_100f2c248,0x28,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  plVar2 = (long *)0xb0;
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005ec390;
  FUN_100aa97a0(plVar2,*(undefined8 *)(unaff_x22 + 0x10),FUN_100668f98,puVar1,
                *(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x100a5f3ac | FUN_100a5f3ac */

ulong FUN_100a5f3ac(long param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x21;
  ulong uVar3;
  uint local_24;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  _swift_retain();
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(uVar3 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f43c);
    (*pcVar1)();
  }
  FUN_100aacc54(&local_24,uVar3 + 0x10,param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(uVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f444);
      (*pcVar1)();
    }
    uVar3 = (ulong)local_24;
    _swift_release(param_1);
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(uVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f440);
      (*pcVar1)();
    }
    _swift_release(param_1);
  }
  return uVar3;
}



/* Address: 0x100a5f444 | FUN_100a5f444 */

ulong FUN_100a5f444(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong unaff_x21;
  long lVar3;
  uint local_34;
  
  (**(code **)(param_2 + 0x10))();
  lVar3 = *(long *)(param_1 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f4e0);
    (*pcVar1)();
  }
  FUN_100aacc54(&local_34,lVar3 + 0x10,param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f4e8);
      (*pcVar1)();
    }
    unaff_x21 = (ulong)local_34;
    _swift_release(param_1);
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f4e4);
      (*pcVar1)();
    }
    _swift_release(param_1);
  }
  return unaff_x21;
}



/* Address: 0x100a5f4e8 | FUN_100a5f4e8 */

undefined4 FUN_100a5f4e8(long param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x21;
  long lVar3;
  undefined4 local_24;
  
  lVar3 = *(long *)(param_1 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f560);
    (*pcVar1)();
  }
  FUN_100aacc54(&local_24,lVar3 + 0x10,param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f568);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5f564);
      (*pcVar1)();
    }
    local_24 = 0;
  }
  return local_24;
}



/* Address: 0x100a5f568 | FUN_100a5f568 */

void FUN_100a5f568(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f580,0,0);
  return;
}



/* Address: 0x100a5f580 | FUN_100a5f580 */

void FUN_100a5f580(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2ce28;
  _swift_allocObject(&DAT_100f2ce28,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f648 | FUN_100a5f648 */

void FUN_100a5f648(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f660,0,0);
  return;
}



/* Address: 0x100a5f660 | FUN_100a5f660 */

void FUN_100a5f660(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2cc48;
  _swift_allocObject(&DAT_100f2cc48,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f728 | FUN_100a5f728 */

void FUN_100a5f728(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f740,0,0);
  return;
}



/* Address: 0x100a5f740 | FUN_100a5f740 */

void FUN_100a5f740(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2ca40;
  _swift_allocObject(&DAT_100f2ca40,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f808 | FUN_100a5f808 */

void FUN_100a5f808(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f820,0,0);
  return;
}



/* Address: 0x100a5f820 | FUN_100a5f820 */

void FUN_100a5f820(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2c8b0;
  _swift_allocObject(&DAT_100f2c8b0,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5bc4c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f8e8 | FUN_100a5f8e8 */

void FUN_100a5f8e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f904,0,0);
  return;
}



/* Address: 0x100a5f904 | FUN_100a5f904 */

void FUN_100a5f904(void)

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
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x10))();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar5 = *(undefined8 *)(lVar1 + 0x31);
  uVar4 = *(undefined8 *)(lVar1 + 0x29);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar2 = &DAT_100f2c270;
  _swift_allocObject(&DAT_100f2c270,0x39,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar2;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c078;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5f9d8 | FUN_100a5f9d8 */

void FUN_100a5f9d8(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5f9f0,0,0);
  return;
}



/* Address: 0x100a5f9f0 | FUN_100a5f9f0 */

void FUN_100a5f9f0(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2c298;
  _swift_allocObject(&DAT_100f2c298,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5fab0 | FUN_100a5fab0 */

void FUN_100a5fab0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5fad8,0,0);
  return;
}



/* Address: 0x100a5fad8 | FUN_100a5fad8 */

void FUN_100a5fad8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(lVar3 + 0x31);
  uVar10 = *(undefined8 *)(lVar3 + 0x29);
  uVar14 = *(undefined8 *)(lVar3 + 0x10);
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar10;
  puVar7 = &DAT_100f2c888;
  _swift_allocObject(&DAT_100f2c888,0x69,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar7;
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar14 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar7 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar7 + 0x29) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar2;
  puVar7[0x50] = uVar6;
  *(undefined8 *)(puVar7 + 0x58) = uVar4;
  *(undefined8 *)(puVar7 + 0x60) = uVar1;
  puVar7[0x68] = uVar5;
  _swift_retain(lVar3);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a5fbd8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5fbd8 | FUN_100a5fbd8 */

void FUN_100a5fbd8(void)

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
    pcVar2 = FUN_100a5fc44;
  }
  else {
    pcVar2 = FUN_100a5d7e8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5fc44 | FUN_100a5fc44 */

void FUN_100a5fc44(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100a5fc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5fc80 | FUN_100a5fc80 */

void FUN_100a5fc80(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5fcac,0,0);
  return;
}



/* Address: 0x100a5fcac | FUN_100a5fcac */

void FUN_100a5fcac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar6 = *(long *)(unaff_x22 + 0x90);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x10))();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  uVar11 = *(undefined8 *)(lVar6 + 0x31);
  uVar10 = *(undefined8 *)(lVar6 + 0x29);
  uVar14 = *(undefined8 *)(lVar6 + 0x10);
  uVar13 = *(undefined8 *)(lVar6 + 0x28);
  uVar12 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar10;
  puVar7 = &DAT_100f2c2c0;
  _swift_allocObject(&DAT_100f2c2c0,0x69,7);
  *(undefined **)(unaff_x22 + 0xb0) = puVar7;
  uVar13 = *(undefined8 *)(lVar6 + 0x18);
  uVar12 = *(undefined8 *)(lVar6 + 0x10);
  uVar11 = *(undefined8 *)(lVar6 + 0x28);
  uVar10 = *(undefined8 *)(lVar6 + 0x20);
  uVar14 = *(undefined8 *)(lVar6 + 0x29);
  *(undefined8 *)(puVar7 + 0x31) = *(undefined8 *)(lVar6 + 0x31);
  *(undefined8 *)(puVar7 + 0x29) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar2;
  puVar7[0x50] = uVar5;
  *(undefined8 *)(puVar7 + 0x58) = uVar3;
  *(undefined8 *)(puVar7 + 0x60) = uVar1;
  puVar7[0x68] = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a5fdb8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5fdb8 | FUN_100a5fdb8 */

void FUN_100a5fdb8(void)

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
    pcVar2 = FUN_100a5fe24;
  }
  else {
    pcVar2 = FUN_100a5fe60;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5fe24 | FUN_100a5fe24 */

void FUN_100a5fe24(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000100a5fe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5fe60 | FUN_100a5fe60 */

void FUN_100a5fe60(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000100a5fe98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5fe9c | FUN_100a5fe9c */

void FUN_100a5fe9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100a5fec4,0,0);
  return;
}



/* Address: 0x100a5fec4 | FUN_100a5fec4 */

void FUN_100a5fec4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(lVar3 + 0x31);
  uVar10 = *(undefined8 *)(lVar3 + 0x29);
  uVar14 = *(undefined8 *)(lVar3 + 0x10);
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar10;
  puVar7 = &DAT_100f2c2e8;
  _swift_allocObject(&DAT_100f2c2e8,0x69,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar7;
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar14 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar7 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar7 + 0x29) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar2;
  puVar7[0x50] = uVar6;
  *(undefined8 *)(puVar7 + 0x58) = uVar4;
  *(undefined8 *)(puVar7 + 0x60) = uVar1;
  puVar7[0x68] = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a5ffbc;
  FUN_100912dec();
  return;
}



/* Address: 0x100a5ffbc | FUN_100a5ffbc */

void FUN_100a5ffbc(void)

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
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_1006e19e8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a60028 | FUN_100a60028 */

void FUN_100a60028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar1;
  _swift_task_switch(FUN_100a60044,0,0);
  return;
}



/* Address: 0x100a60044 | FUN_100a60044 */

void FUN_100a60044(void)

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
  puVar1 = &DAT_100f2d120;
  _swift_allocObject(&DAT_100f2d120,0x39,7);
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
  plVar2[1] = (long)FUN_100a60110;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a60110 | FUN_100a60110 */

void FUN_100a60110(void)

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
    pcVar1 = thunk_FUN_100a5bb04;
  }
  else {
    pcVar1 = thunk_FUN_100a5bb54;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6017c | FUN_100a6017c */

void FUN_100a6017c(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a6019c,0,0);
  return;
}



/* Address: 0x100a6019c | FUN_100a6019c */

void FUN_100a6019c(void)

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
  puVar2 = &DAT_100f2d0f8;
  _swift_allocObject(&DAT_100f2d0f8,0x3c,7);
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



/* Address: 0x100a60264 | FUN_100a60264 */

void FUN_100a60264(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a60284,0,0);
  return;
}



/* Address: 0x100a60284 | FUN_100a60284 */

void FUN_100a60284(void)

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
  puVar2 = &DAT_100f2d0d0;
  _swift_allocObject(&DAT_100f2d0d0,0x3c,7);
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
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100a64188,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100a60350 | FUN_100a60350 */

void FUN_100a60350(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a60370,0,0);
  return;
}



/* Address: 0x100a60370 | FUN_100a60370 */

void FUN_100a60370(void)

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
  puVar2 = &DAT_100f2d0a8;
  _swift_allocObject(&DAT_100f2d0a8,0x3c,7);
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



/* Address: 0x100a6043c | FUN_100a6043c */

void FUN_100a6043c(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = *unaff_x20;
  _swift_task_switch(FUN_100a60458,0,0);
  return;
}



/* Address: 0x100a60458 | FUN_100a60458 */

void FUN_100a60458(void)

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
  puVar1 = &DAT_100f2d080;
  _swift_allocObject(&DAT_100f2d080,0x39,7);
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
  plVar2[1] = (long)FUN_100a6052c;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64240,puVar1,puVar3);
  return;
}



/* Address: 0x100a6052c | FUN_100a6052c */

void FUN_100a6052c(void)

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
    pcVar2 = thunk_FUN_100a53494;
  }
  else {
    pcVar2 = thunk_FUN_1006c140c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a60598 | FUN_100a60598 */

void FUN_100a60598(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = *unaff_x20;
  _swift_task_switch(FUN_100a605b8,0,0);
  return;
}



/* Address: 0x100a605b8 | FUN_100a605b8 */

void FUN_100a605b8(void)

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
  puVar3 = &DAT_100f2d058;
  _swift_allocObject(&DAT_100f2d058,0x50,7);
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
  plVar5[1] = (long)FUN_100a606a8;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a641ec,puVar3,puVar4);
  return;
}



/* Address: 0x100a606a8 | FUN_100a606a8 */

void FUN_100a606a8(void)

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
    pcVar2 = thunk_FUN_100a15590;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}


