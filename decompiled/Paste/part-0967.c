/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a60714 | FUN_100a60714 */

void FUN_100a60714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e30c(param_1,param_2,param_3,uVar2,param_4,param_5);
  return;
}



/* Address: 0x100a607a0 | FUN_100a607a0 */

void FUN_100a607a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = *unaff_x20;
  _swift_task_switch(FUN_100a607c0,0,0);
  return;
}



/* Address: 0x100a607c0 | FUN_100a607c0 */

void FUN_100a607c0(void)

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
  puVar3 = &DAT_100f2d030;
  _swift_allocObject(&DAT_100f2d030,0x50,7);
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
  plVar4[1] = (long)FUN_100a6089c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a6089c | FUN_100a6089c */

void FUN_100a6089c(void)

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
    pcVar2 = thunk_FUN_1002e20ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a60908 | FUN_100a60908 */

void FUN_100a60908(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a60924,0,0);
  return;
}



/* Address: 0x100a60924 | FUN_100a60924 */

void FUN_100a60924(void)

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
  puVar1 = &DAT_100f2d008;
  _swift_allocObject(&DAT_100f2d008,0x39,7);
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



/* Address: 0x100a609e4 | FUN_100a609e4 */

void FUN_100a609e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f2e4(plVar1,param_1,param_2,param_3,uVar2,param_4);
  return;
}



/* Address: 0x100a60a6c | FUN_100a60a6c */

undefined4 FUN_100a60a6c(void)

{
  code *pcVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined4 local_24;
  
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a60ae4);
    (*pcVar1)();
  }
  FUN_100aacc54(&local_24,lVar4 + 0x10,lVar3);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a60aec);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a60ae8);
      (*pcVar1)();
    }
    local_24 = 0;
  }
  return local_24;
}



/* Address: 0x100a60aec | FUN_100a60aec */

void FUN_100a60aec(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a60b08,0,0);
  return;
}



/* Address: 0x100a60b08 | FUN_100a60b08 */

void FUN_100a60b08(void)

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
  puVar1 = &DAT_100f2cfe0;
  _swift_allocObject(&DAT_100f2cfe0,0x39,7);
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



/* Address: 0x100a60bc8 | FUN_100a60bc8 */

void FUN_100a60bc8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a60bf4,0,0);
  return;
}



/* Address: 0x100a60bf4 | FUN_100a60bf4 */

void FUN_100a60bf4(void)

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
  puVar7 = &DAT_100f2cfb8;
  _swift_allocObject(&DAT_100f2cfb8,0x69,7);
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



/* Address: 0x100a60cec | FUN_100a60cec */

void FUN_100a60cec(void)

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
    pcVar2 = thunk_FUN_1006e19e8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a60d58 | FUN_100a60d58 */

void FUN_100a60d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  _swift_task_switch(FUN_100a60d74,0,0);
  return;
}



/* Address: 0x100a60d74 | FUN_100a60d74 */

void FUN_100a60d74(void)

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
  puVar3 = &DAT_100f2c310;
  _swift_allocObject(&DAT_100f2c310,0x50,7);
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
  plVar4[1] = (long)FUN_100a60e48;
  FUN_100912dec(plVar4,unaff_x22 + 0x70,FUN_100a63f88,puVar3,&DAT_100eeaaa8);
  return;
}



/* Address: 0x100a60e48 | FUN_100a60e48 */

void FUN_100a60e48(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a60eb4;
  }
  else {
    pcVar2 = FUN_100a0176c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a60eb4 | FUN_100a60eb4 */

void FUN_100a60eb4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a60ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
             (ulong)*(uint7 *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x100a60ed8 | thunk_FUN_100a62630 */

void thunk_FUN_100a62630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  _swift_retain(param_4);
  FUN_100a5a8dc(param_4,param_3,param_1,param_2);
  return;
}



/* Address: 0x100a60edc | FUN_100a60edc */

void FUN_100a60edc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a60f04,0,0);
  return;
}



/* Address: 0x100a60f04 | FUN_100a60f04 */

void FUN_100a60f04(void)

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
  puVar7 = &DAT_100f2c338;
  _swift_allocObject(&DAT_100f2c338,0x69,7);
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



/* Address: 0x100a60ffc | FUN_100a60ffc */

void FUN_100a60ffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = *unaff_x20;
  _swift_task_switch(FUN_100a6101c,0,0);
  return;
}



/* Address: 0x100a6101c | FUN_100a6101c */

void FUN_100a6101c(void)

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
  puVar3 = &DAT_100f2cf90;
  _swift_allocObject(&DAT_100f2cf90,0x50,7);
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



/* Address: 0x100a610f0 | FUN_100a610f0 */

void FUN_100a610f0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a60eb4;
  }
  else {
    pcVar2 = thunk_FUN_100a0176c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6115c | thunk_FUN_100a62a4c */

void thunk_FUN_100a62a4c(void)

{
  FUN_100a62a4c();
  return;
}



/* Address: 0x100a61160 | FUN_100a61160 */

void FUN_100a61160(undefined8 param_1)

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
  plVar1[1] = (long)FUN_100a611d4;
  FUN_100a5b250(plVar1,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x100a611d4 | FUN_100a611d4 */

void FUN_100a611d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xe8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    uVar10 = *(undefined8 *)(lVar2 + 0x68);
    uVar9 = *(undefined8 *)(lVar2 + 0x60);
    puVar1[9] = *(undefined8 *)(lVar2 + 0x58);
    puVar1[8] = uVar8;
    puVar1[0xb] = uVar10;
    puVar1[10] = uVar9;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    uVar7 = *(undefined8 *)(lVar2 + 0x88);
    uVar6 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x90);
    uVar10 = *(undefined8 *)(lVar2 + 0xa8);
    uVar9 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[0x11] = *(undefined8 *)(lVar2 + 0x98);
    puVar1[0x10] = uVar8;
    puVar1[0x13] = uVar10;
    puVar1[0x12] = uVar9;
    puVar1[0xd] = uVar5;
    puVar1[0xc] = uVar4;
    puVar1[0xf] = uVar7;
    puVar1[0xe] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0xb8);
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    uVar7 = *(undefined8 *)(lVar2 + 200);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    uVar9 = *(undefined8 *)(lVar2 + 0xd8);
    uVar8 = *(undefined8 *)(lVar2 + 0xd0);
    puVar1[0x1a] = *(undefined8 *)(lVar2 + 0xe0);
    puVar1[0x17] = uVar7;
    puVar1[0x16] = uVar6;
    puVar1[0x19] = uVar9;
    puVar1[0x18] = uVar8;
    puVar1[0x15] = uVar5;
    puVar1[0x14] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a6125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100a61260 | FUN_100a61260 */

void FUN_100a61260(undefined8 param_1)

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
  FUN_100a5bb60(param_1,uVar2);
  return;
}



/* Address: 0x100a612d4 | FUN_100a612d4 */

void FUN_100a612d4(undefined8 param_1)

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
  plVar1[1] = (long)FUN_100838ee4;
  FUN_100a5c234(param_1,uVar2);
  return;
}



/* Address: 0x100a61348 | FUN_100a61348 */

void FUN_100a61348(undefined8 param_1)

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
  FUN_100a5ca94(param_1,uVar2);
  return;
}



/* Address: 0x100a613bc | FUN_100a613bc */

void FUN_100a613bc(void)

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
  plVar1[1] = (long)FUN_100838ee4;
  FUN_100a5d114(uVar2);
  return;
}



/* Address: 0x100a61424 | FUN_100a61424 */

void FUN_100a61424(undefined8 param_1,undefined8 param_2)

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
  FUN_100a5d97c(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a614a4 | FUN_100a614a4 */

void FUN_100a614a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e268(param_1,param_2,param_3,param_6,param_4,&PTR_PTR_100f2c520,param_5);
  return;
}



/* Address: 0x100a61540 | FUN_100a61540 */

void FUN_100a61540(undefined8 param_1,undefined8 param_2)

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
  FUN_100a5e39c(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a615c0 | FUN_100a615c0 */

void FUN_100a615c0(void)

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
  FUN_100a5eb60(uVar2);
  return;
}



/* Address: 0x100a61628 | FUN_100a61628 */

void FUN_100a61628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f180(plVar1,param_1,param_2,param_3,param_5,param_4,&PTR_PTR_100f2c520);
  return;
}



/* Address: 0x100a616b8 | FUN_100a616b8 */

void FUN_100a616b8(void)

{
  undefined8 *unaff_x20;
  
  FUN_100a5f3ac(*unaff_x20);
  return;
}



/* Address: 0x100a616d0 | FUN_100a616d0 */

void FUN_100a616d0(void)

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
  FUN_100a5f568(uVar2);
  return;
}



/* Address: 0x100a61738 | FUN_100a61738 */

void FUN_100a61738(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a61764,0,0);
  return;
}



/* Address: 0x100a61764 | FUN_100a61764 */

void FUN_100a61764(void)

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
  puVar7 = &DAT_100f2ce00;
  _swift_allocObject(&DAT_100f2ce00,0x69,7);
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



/* Address: 0x100a6185c | FUN_100a6185c */

void FUN_100a6185c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100aa9ca0(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x100a618e4 | FUN_100a618e4 */

void FUN_100a618e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  _swift_task_switch(FUN_100a618fc,0,0);
  return;
}



/* Address: 0x100a618fc | FUN_100a618fc */

void FUN_100a618fc(void)

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
  puVar3 = &DAT_100f2c360;
  _swift_allocObject(&DAT_100f2c360,0x48,7);
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
  plVar4[1] = (long)FUN_100a619c0;
  FUN_100912dec();
  return;
}



/* Address: 0x100a619c0 | FUN_100a619c0 */

void FUN_100a619c0(void)

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
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_1006c140c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a61a2c | FUN_100a61a2c */

void FUN_100a61a2c(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  _swift_task_switch(FUN_100a61a48,0,0);
  return;
}



/* Address: 0x100a61a48 | FUN_100a61a48 */

void FUN_100a61a48(void)

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
  puVar2 = &DAT_100f2c388;
  _swift_allocObject(&DAT_100f2c388,0x3a,7);
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



/* Address: 0x100a61b10 | FUN_100a61b10 */

void FUN_100a61b10(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a61b38,0,0);
  return;
}



/* Address: 0x100a61b38 | FUN_100a61b38 */

void FUN_100a61b38(void)

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
  puVar7 = &DAT_100f2c3b0;
  _swift_allocObject(&DAT_100f2c3b0,0x69,7);
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



/* Address: 0x100a61c30 | FUN_100a61c30 */

void FUN_100a61c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Address: 0x100a61cb4 | FUN_100a61cb4 */

void FUN_100a61cb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100a61cd0,0,0);
  return;
}



/* Address: 0x100a61cd0 | FUN_100a61cd0 */

void FUN_100a61cd0(void)

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
  puVar3 = &DAT_100f2cdd8;
  _swift_allocObject(&DAT_100f2cdd8,0x48,7);
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



/* Address: 0x100a61d94 | FUN_100a61d94 */

void FUN_100a61d94(void)

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
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = thunk_FUN_1006c140c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a61e00 | FUN_100a61e00 */

void FUN_100a61e00(undefined1 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100a61e20,0,0);
  return;
}



/* Address: 0x100a61e20 | FUN_100a61e20 */

void FUN_100a61e20(void)

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
  puVar2 = &DAT_100f2cdb0;
  _swift_allocObject(&DAT_100f2cdb0,0x3a,7);
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



/* Address: 0x100a61ee8 | FUN_100a61ee8 */

void FUN_100a61ee8(undefined8 param_1)

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
  FUN_100a5b460(plVar1,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x100a61f5c | FUN_100a61f5c */

void FUN_100a61f5c(undefined8 param_1)

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
  FUN_100a5bcb8(param_1,uVar2);
  return;
}



/* Address: 0x100a61fd0 | FUN_100a61fd0 */

void FUN_100a61fd0(undefined8 param_1)

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
  FUN_100a5c40c(param_1,uVar2);
  return;
}



/* Address: 0x100a62044 | FUN_100a62044 */

void FUN_100a62044(undefined8 param_1)

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
  FUN_100a5cb84(param_1,uVar2);
  return;
}



/* Address: 0x100a620b8 | FUN_100a620b8 */

void FUN_100a620b8(void)

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
  FUN_100a5d2f0(uVar2);
  return;
}



/* Address: 0x100a62120 | FUN_100a62120 */

void FUN_100a62120(undefined8 param_1,undefined8 param_2)

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
  FUN_100a5db3c(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a621a0 | FUN_100a621a0 */

void FUN_100a621a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5e268(param_1,param_2,param_3,param_6,param_4,&PTR_PTR_100f2c5d0,param_5);
  return;
}



/* Address: 0x100a6223c | FUN_100a6223c */

void FUN_100a6223c(undefined8 param_1,undefined8 param_2)

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
  FUN_100a5e580(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a622bc | FUN_100a622bc */

void FUN_100a622bc(void)

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
  FUN_100a5ecac(uVar2);
  return;
}



/* Address: 0x100a62324 | FUN_100a62324 */

void FUN_100a62324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a5f180(plVar1,param_1,param_2,param_3,param_5,param_4,&PTR_PTR_100f2c5d0);
  return;
}



/* Address: 0x100a623b4 | FUN_100a623b4 */

void FUN_100a623b4(void)

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
  FUN_100a5f648(uVar2);
  return;
}


