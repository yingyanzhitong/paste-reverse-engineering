/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a6241c | FUN_100a6241c */

void FUN_100a6241c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = *unaff_x20;
  _swift_task_switch(FUN_100a62448,0,0);
  return;
}



/* Address: 0x100a62448 | FUN_100a62448 */

void FUN_100a62448(void)

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
  puVar7 = &DAT_100f2cc20;
  _swift_allocObject(&DAT_100f2cc20,0x69,7);
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
  plVar8[1] = (long)FUN_100a60cec;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62540 | FUN_100a62540 */

void FUN_100a62540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  _swift_task_switch(FUN_100a6255c,0,0);
  return;
}



/* Address: 0x100a6255c | FUN_100a6255c */

void FUN_100a6255c(void)

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
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
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
  puVar3 = &DAT_100f2c3d8;
  _swift_allocObject(&DAT_100f2c3d8,0x50,7);
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
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a610f0;
  FUN_100912dec(plVar4,unaff_x22 + 0x70,FUN_100a64214,puVar3,&DAT_100eeaaa8);
  return;
}



/* Address: 0x100a62630 | FUN_100a62630 */

void FUN_100a62630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_retain(param_4);
  FUN_100a5a8dc(param_4,param_3,param_1,param_2);
  return;
}



/* Address: 0x100a62678 | FUN_100a62678 */

void FUN_100a62678(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  _swift_task_switch(FUN_100a62690,0,0);
  return;
}



/* Address: 0x100a62690 | FUN_100a62690 */

void FUN_100a62690(void)

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
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
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
  puVar3 = &DAT_100f2c400;
  _swift_allocObject(&DAT_100f2c400,0x48,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar3;
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
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a61d94;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62754 | FUN_100a62754 */

void FUN_100a62754(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  _swift_task_switch(FUN_100a62770,0,0);
  return;
}



/* Address: 0x100a62770 | FUN_100a62770 */

void FUN_100a62770(void)

{
  undefined1 uVar1;
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
  uVar1 = *(undefined1 *)(unaff_x22 + 0x39);
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
  puVar2 = &DAT_100f2c428;
  _swift_allocObject(&DAT_100f2c428,0x3a,7);
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
  puVar2[0x39] = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62838 | FUN_100a62838 */

void FUN_100a62838(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a62860,0,0);
  return;
}



/* Address: 0x100a62860 | FUN_100a62860 */

void FUN_100a62860(void)

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
  puVar7 = &DAT_100f2c450;
  _swift_allocObject(&DAT_100f2c450,0x69,7);
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
  plVar8[1] = (long)FUN_100a60cec;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62958 | FUN_100a62958 */

void FUN_100a62958(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = *unaff_x20;
  _swift_task_switch(FUN_100a62978,0,0);
  return;
}



/* Address: 0x100a62978 | FUN_100a62978 */

void FUN_100a62978(void)

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
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
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
  puVar3 = &DAT_100f2cbf8;
  _swift_allocObject(&DAT_100f2cbf8,0x50,7);
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
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a610f0;
  FUN_100912dec(plVar4,unaff_x22 + 0x70,FUN_100a64214,puVar3,&DAT_100eeaaa8);
  return;
}



/* Address: 0x100a62a4c | FUN_100a62a4c */

void FUN_100a62a4c(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  FUN_100a5a8dc();
  return;
}



/* Address: 0x100a62a8c | FUN_100a62a8c */

void FUN_100a62a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a6185c(param_1,param_2,uVar2,param_3,param_4);
  return;
}



/* Address: 0x100a62b10 | FUN_100a62b10 */

void FUN_100a62b10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100a62b2c,0,0);
  return;
}



/* Address: 0x100a62b2c | FUN_100a62b2c */

void FUN_100a62b2c(void)

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
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
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
  puVar3 = &DAT_100f2cbd0;
  _swift_allocObject(&DAT_100f2cbd0,0x48,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar3;
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
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a61d94;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62bf0 | FUN_100a62bf0 */

void FUN_100a62bf0(undefined1 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a62c10,0,0);
  return;
}



/* Address: 0x100a62c10 | FUN_100a62c10 */

void FUN_100a62c10(void)

{
  undefined1 uVar1;
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
  uVar1 = *(undefined1 *)(unaff_x22 + 0x39);
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
  puVar2 = &DAT_100f2cba8;
  _swift_allocObject(&DAT_100f2cba8,0x3a,7);
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
  puVar2[0x39] = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100a62cd8 | FUN_100a62cd8 */

void FUN_100a62cd8(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100a611d4;
  FUN_100a5b6a4(plVar1,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x100a62d4c | FUN_100a62d4c */

void FUN_100a62d4c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5bda4(param_1,uVar2);
  return;
}



/* Address: 0x100a62dc0 | FUN_100a62dc0 */

void FUN_100a62dc0(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5c568(param_1,uVar2);
  return;
}



/* Address: 0x100a62e34 | FUN_100a62e34 */

void FUN_100a62e34(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5cc74(param_1,uVar2);
  return;
}



/* Address: 0x100a62ea8 | FUN_100a62ea8 */

void FUN_100a62ea8(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5d450(uVar2);
  return;
}



/* Address: 0x100a62f10 | FUN_100a62f10 */

void FUN_100a62f10(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5dcbc(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a62f90 | FUN_100a62f90 */

void FUN_100a62f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e268(param_1,param_2,param_3,param_6,param_4,&PTR_PTR_100f2c6a0,param_5);
  return;
}



/* Address: 0x100a6302c | FUN_100a6302c */

void FUN_100a6302c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e6ec(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a630ac | FUN_100a630ac */

void FUN_100a630ac(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5ed8c(uVar2);
  return;
}



/* Address: 0x100a63114 | FUN_100a63114 */

void FUN_100a63114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f180(plVar1,param_1,param_2,param_3,param_5,param_4,&PTR_PTR_100f2c6a0);
  return;
}



/* Address: 0x100a631a4 | FUN_100a631a4 */

void FUN_100a631a4(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f728(uVar2);
  return;
}



/* Address: 0x100a6320c | FUN_100a6320c */

void FUN_100a6320c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = *unaff_x20;
  _swift_task_switch(FUN_100a63238,0,0);
  return;
}



/* Address: 0x100a63238 | FUN_100a63238 */

void FUN_100a63238(void)

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
  puVar7 = &DAT_100f2ca18;
  _swift_allocObject(&DAT_100f2ca18,0x69,7);
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
  plVar8[1] = (long)FUN_100a60cec;
  FUN_100912dec();
  return;
}



/* Address: 0x100a63330 | FUN_100a63330 */

void FUN_100a63330(undefined8 param_1,undefined8 param_2)

{
  _swift_retain(param_2);
  FUN_100a578f0(param_2,param_1);
  return;
}



/* Address: 0x100a63360 | FUN_100a63360 */

void FUN_100a63360(undefined8 param_1,uint param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100aaa0d8(param_1,param_2 & 0x101);
  return;
}



/* Address: 0x100a633d0 | FUN_100a633d0 */

void FUN_100a633d0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100aaa26c(param_1,param_2 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100a63444 | FUN_100a63444 */

void FUN_100a63444(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100aaa438(param_1,param_2 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100a634b8 | FUN_100a634b8 */

void FUN_100a634b8(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3a) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  _swift_task_switch(FUN_100a634d4,0,0);
  return;
}



/* Address: 0x100a634d4 | FUN_100a634d4 */

void FUN_100a634d4(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar1 = 0x100000;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0x100100;
  }
  uVar9 = *(undefined8 *)(lVar3 + 0x31);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar8;
  puVar5 = &DAT_100f2c478;
  _swift_allocObject(&DAT_100f2c478,0x4c,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar5;
  uVar11 = *(undefined8 *)(lVar3 + 0x18);
  uVar10 = *(undefined8 *)(lVar3 + 0x10);
  uVar9 = *(undefined8 *)(lVar3 + 0x28);
  uVar8 = *(undefined8 *)(lVar3 + 0x20);
  uVar12 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar5 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar5 + 0x29) = uVar12;
  *(undefined8 *)(puVar5 + 0x18) = uVar11;
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  *(uint *)(puVar5 + 0x48) = uVar1 | ((byte)(uVar4 >> 8) & 1) << 0x18 | 4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar7 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  puVar6 = &DAT_100ff6ce0;
  FUN_1000f7830(&DAT_100ff6ce0,&DAT_100c912e8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a635e8;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100a64020,puVar5,puVar6);
  return;
}



/* Address: 0x100a635e8 | FUN_100a635e8 */

void FUN_100a635e8(void)

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
    pcVar2 = thunk_FUN_100a53494;
  }
  else {
    pcVar2 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a63654 | FUN_100a63654 */

void FUN_100a63654(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  FUN_100a578f0();
  return;
}



/* Address: 0x100a6367c | FUN_100a6367c */

void FUN_100a6367c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a53f20;
  FUN_100aaa0d8(param_2,param_3 & 0x101);
  return;
}



/* Address: 0x100a636f0 | FUN_100a636f0 */

void FUN_100a636f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a52370;
  FUN_100aaa26c(param_2,param_3 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100a63768 | FUN_100a63768 */

void FUN_100a63768(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a52370;
  FUN_100aaa438(param_2,param_3 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100a637e0 | FUN_100a637e0 */

void FUN_100a637e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bc5c;
  FUN_100a634b8(param_2,param_3 & 0x101,uVar2);
  return;
}



/* Address: 0x100a63854 | FUN_100a63854 */

void FUN_100a63854(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100a611d4;
  FUN_100a5b5b8(plVar1,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x100a638c8 | FUN_100a638c8 */

void FUN_100a638c8(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5be90(param_1,uVar2);
  return;
}



/* Address: 0x100a6393c | FUN_100a6393c */

void FUN_100a6393c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5c658(param_1,uVar2);
  return;
}



/* Address: 0x100a639b0 | FUN_100a639b0 */

void FUN_100a639b0(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5cd64(param_1,uVar2);
  return;
}



/* Address: 0x100a63a24 | FUN_100a63a24 */

void FUN_100a63a24(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5d544(uVar2);
  return;
}



/* Address: 0x100a63a8c | FUN_100a63a8c */

void FUN_100a63a8c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a5ddd0(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a63b0c | FUN_100a63b0c */

void FUN_100a63b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e268(param_1,param_2,param_3,param_6,param_4,&PTR_PTR_100f2c728,param_5);
  return;
}



/* Address: 0x100a63ba8 | FUN_100a63ba8 */

void FUN_100a63ba8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e7ec(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a63c28 | FUN_100a63c28 */

void FUN_100a63c28(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5ee6c(uVar2);
  return;
}



/* Address: 0x100a63c90 | FUN_100a63c90 */

void FUN_100a63c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f180(plVar1,param_1,param_2,param_3,param_5,param_4,&PTR_PTR_100f2c728);
  return;
}



/* Address: 0x100a63d20 | FUN_100a63d20 */

void FUN_100a63d20(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f808(uVar2);
  return;
}



/* Address: 0x100a63d88 | FUN_100a63d88 */

void FUN_100a63d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5fab0(param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  return;
}



/* Address: 0x100a63e38 | FUN_100a63e38 */

void FUN_100a63e38(void)

{
  FUN_100a51c64(0x39);
  return;
}



/* Address: 0x100a63e40 | FUN_100a63e40 */

void FUN_100a63e40(void)

{
  long unaff_x20;
  
  FUN_100aaabc8(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100a63e58 | FUN_100a63e58 */

void FUN_100a63e58(void)

{
  FUN_100a51c64(0x3c);
  return;
}



/* Address: 0x100a63e60 | FUN_100a63e60 */

void FUN_100a63e60(void)

{
  long unaff_x20;
  
  FUN_100aab568(unaff_x20 + 0x10,*(undefined2 *)(unaff_x20 + 0x3a));
  return;
}



/* Address: 0x100a63e7c | FUN_100a63e7c */

void FUN_100a63e7c(void)

{
  long unaff_x20;
  
  FUN_100aab89c(unaff_x20 + 0x10,*(undefined2 *)(unaff_x20 + 0x3a));
  return;
}



/* Address: 0x100a63e98 | FUN_100a63e98 */

void FUN_100a63e98(void)

{
  long unaff_x20;
  
  FUN_100aabad4(unaff_x20 + 0x10,*(undefined2 *)(unaff_x20 + 0x3a));
  return;
}



/* Address: 0x100a63eb4 | FUN_100a63eb4 */

void FUN_100a63eb4(void)

{
  long unaff_x20;
  
  FUN_100aabd14(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100a63ecc | FUN_100a63ecc */

void FUN_100a63ecc(void)

{
  long unaff_x20;
  
  FUN_100aac020(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48)
               );
  return;
}


