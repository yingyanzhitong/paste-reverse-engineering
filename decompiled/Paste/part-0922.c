/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009e94f4 | FUN_1009e94f4 */

void FUN_1009e94f4(void)

{
  long unaff_x20;
  
  FUN_1009ec4a8(0,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10));
  return;
}



/* Address: 0x1009e9504 | FUN_1009e9504 */

void FUN_1009e9504(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  _swift_errorRetain();
  FUN_1009ec4a8(param_1,uVar1);
  _swift_errorRelease(param_1);
  return;
}



/* Address: 0x1009e953c | FUN_1009e953c */

void FUN_1009e953c(void)

{
  FUN_1000c495c();
  return;
}



/* Address: 0x1009e9560 | FUN_1009e9560 */

void FUN_1009e9560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = &DAT_100ff3bf0;
  FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
  iVar1 = *(int *)(puVar2 + 0x30);
  puVar2 = &DAT_100eeaaa8;
  FUN_100a2f5bc(param_2,&DAT_100eeaaa8,param_3,param_4);
  *param_1 = param_2;
  param_1[1] = puVar2;
  lVar3 = 0;
  FUN_1009e908c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar3);
  uVar4 = 0;
  FUN_1009e8f94(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,2);
  return;
}



/* Address: 0x1009e9604 | FUN_1009e9604 */

void FUN_1009e9604(void)

{
  FUN_1009e9628();
  FUN_10005241c();
  return;
}



/* Address: 0x1009e9628 | FUN_1009e9628 */

void FUN_1009e9628(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar6 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar7 = 0;
  FUN_1009e908c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_1009e8f94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1000c495c();
  puVar9 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar8);
  if ((int)puVar9 == 0) {
    uVar10 = *puVar13;
    uVar1 = *(undefined4 *)(puVar13 + 2);
    uVar3 = *(undefined2 *)((long)puVar13 + 0x14);
    uVar2 = *(undefined1 *)((long)puVar13 + 0x16);
    puVar6 = &DAT_100ff3bf8;
    FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
    iVar5 = *(int *)(puVar6 + 0x30);
    *param_1 = uVar10;
    param_1[1] = puVar13[1];
    *(undefined4 *)(param_1 + 2) = uVar1;
    *(undefined2 *)((long)param_1 + 0x14) = uVar3;
    *(undefined1 *)((long)param_1 + 0x16) = uVar2;
    uVar10 = 0;
    FUN_1009eda78(0);
    _swift_storeEnumTagMultiPayload(param_1,uVar10,0);
  }
  else {
    if ((int)puVar9 == 1) {
      FUN_1000523d8(puVar13,lVar14,FUN_1009e908c);
      lVar7 = *(long *)(lVar14 + *(int *)(lVar7 + 0x14));
      iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
      if (iVar5 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009e98c8);
        (*pcVar4)();
      }
      uVar2 = *(undefined1 *)(lVar7 + 0x10);
      *(undefined1 *)(lVar7 + 0x10) = 1;
      iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
      if (iVar5 == 0) {
        FUN_1000f8cac(lVar14,puVar12,&DAT_100ff3ce0,&DAT_100c8d348);
        FUN_10011532c(puVar12,param_1,&DAT_100ff3c00,&DAT_100c8d460);
        lVar7 = 0;
        FUN_1009eda8c();
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) = uVar2;
        FUN_10005241c(lVar14,FUN_1009e908c);
        uVar10 = 0;
        FUN_1009eda78(0);
        _swift_storeEnumTagMultiPayload(param_1,uVar10,1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009e98cc);
      (*pcVar4)();
    }
    pcVar4 = (code *)*puVar13;
    uVar10 = puVar13[1];
    puVar6 = &DAT_100ff3bf0;
    puVar11 = &DAT_100c8d490;
    FUN_1000f7830();
    iVar5 = *(int *)(puVar6 + 0x30);
    (*pcVar4)();
    _swift_release(uVar10);
    *param_1 = puVar6;
    param_1[1] = puVar11;
    uVar10 = 0;
    FUN_1009eda78(0);
    _swift_storeEnumTagMultiPayload(param_1,uVar10,2);
  }
  FUN_1000fb4c4((long)puVar13 + (long)iVar5,&DAT_100ff3be8,&DAT_100c8d4b0);
  return;
}



/* Address: 0x1009e98cc | FUN_1009e98cc */

void FUN_1009e98cc(void)

{
  FUN_1000c495c();
  return;
}



/* Address: 0x1009e98f0 | FUN_1009e98f0 */

void FUN_1009e98f0(void)

{
  FUN_1009edaa0();
  return;
}



/* Address: 0x1009e98f8 | FUN_1009e98f8 */

void FUN_1009e98f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1000523d8(param_2,param_1,FUN_1009eda78);
  return;
}



/* Address: 0x1009e9918 | FUN_1009e9918 */

void FUN_1009e9918(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  lVar1 = 0;
  FUN_1009eda8c();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar1 = 0;
  FUN_1009eda78();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  _swift_task_switch(FUN_1009e99a0,0,0);
  return;
}



/* Address: 0x1009e99a0 | FUN_1009e99a0 */

void FUN_1009e99a0(void)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint7 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0x28),uVar8,FUN_1009eda78);
  _swift_getEnumCaseMultiPayload(uVar8,uVar9);
  iVar6 = (int)uVar8;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      puVar3 = *(undefined8 **)(unaff_x22 + 0x48);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar9 = *puVar3;
      uVar8 = puVar3[1];
      uVar5 = *(uint7 *)(puVar3 + 2);
      FUN_10005241c(uVar11,FUN_1009eda78);
      _swift_storeEnumTagMultiPayload(uVar11,uVar12,3);
      uVar10 = (ulong)uVar5;
      goto LAB_1009e9b10;
    }
    lVar2 = *(long *)(unaff_x22 + 0x30);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x48),lVar4,FUN_1009eda8c);
    iVar6 = *(int *)(lVar2 + 0x14);
    *(int *)(unaff_x22 + 0x90) = iVar6;
    if ((*(byte *)(lVar4 + iVar6) & 1) == 0) {
      plVar7 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x50) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1009e9ba8;
      FUN_1009eb934();
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_10005241c(uVar12,FUN_1009eda78);
    FUN_1000523d8(uVar9,uVar12,FUN_1009eda8c);
    _swift_storeEnumTagMultiPayload(uVar12,uVar8,1);
  }
  else if (iVar6 == 2) {
    piVar1 = (int *)**(undefined8 **)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x78) = (*(undefined8 **)(unaff_x22 + 0x48))[1];
    iVar6 = *piVar1;
    plVar7 = (long *)(ulong)(uint)piVar1[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1009e9df0;
                    /* WARNING: Could not recover jumptable at 0x0001009e9a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar6 + (long)piVar1))(plVar7,unaff_x22 + 0x10);
    return;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar10 = 0;
LAB_1009e9b10:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001009e9b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar8,uVar10);
  return;
}



/* Address: 0x1009e9ba8 | FUN_1009e9ba8 */

void FUN_1009e9ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e9c14;
  }
  else {
    pcVar1 = FUN_1009e9d98;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e9c14 | FUN_1009e9c14 */

void FUN_1009e9c14(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x68);
  if (uVar4 >> 0x38 < 0xff) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    cVar3 = (char)(uVar4 >> 0x38);
    if (cVar3 == '\0') {
      FUN_1009edae4();
      _swift_allocError(&DAT_100f28438,param_1,0,0);
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar4 & 0xffffffffffffff;
      _swift_willThrow();
      FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x38),FUN_1009eda8c);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
      _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009e9cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if (cVar3 == '\x01') {
      uVar4 = uVar4 & 0xffffffffffffff;
    }
    else {
      iVar2 = *(int *)(unaff_x22 + 0x90);
      lVar8 = *(long *)(unaff_x22 + 0x38);
      FUN_1009e8f0c(uVar5,uVar6);
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
      *(undefined1 *)(lVar8 + iVar2) = 1;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_10005241c(uVar9,FUN_1009eda78);
  FUN_1000523d8(uVar7,uVar9,FUN_1009eda8c);
  _swift_storeEnumTagMultiPayload(uVar9,uVar1,1);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001009e9d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,uVar6,uVar4);
  return;
}



/* Address: 0x1009e9d98 | FUN_1009e9d98 */

void FUN_1009e9d98(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x38),FUN_1009eda8c);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e9dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e9df0 | FUN_1009e9df0 */

void FUN_1009e9df0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e9e54;
  }
  else {
    pcVar1 = FUN_1009e9ed0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e9e54 | FUN_1009e9e54 */

void FUN_1009e9e54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint7 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(uint7 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001009e9ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,(ulong)uVar3);
  return;
}



/* Address: 0x1009e9ed0 | FUN_1009e9ed0 */

void FUN_1009e9ed0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e9f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e9f20 | FUN_1009e9f20 */

void FUN_1009e9f20(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_1009e9f38,0,0);
  return;
}



/* Address: 0x1009e9f38 | FUN_1009e9f38 */

void FUN_1009e9f38(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar2 = 0;
  FUN_1009eda8c();
  iVar1 = *(int *)(lVar2 + 0x14);
  *(int *)(unaff_x22 + 0x38) = iVar1;
  if ((*(byte *)(lVar4 + iVar1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009e9f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0,0);
    return;
  }
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009e9fdc;
  FUN_1009eb934();
  return;
}



/* Address: 0x1009e9fdc | FUN_1009e9fdc */

void FUN_1009e9fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009ea02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_task_switch(FUN_1009ea050,0,0);
  return;
}



/* Address: 0x1009ea050 | FUN_1009ea050 */

void FUN_1009ea050(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x30);
  if (uVar5 >> 0x38 < 0xff) {
    cVar2 = (char)(uVar5 >> 0x38);
    if (cVar2 == '\0') {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      FUN_1009edae4();
      _swift_allocError(&DAT_100f28438,param_1,0,0);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5 & 0xffffffffffffff;
      _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001009ea0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if (cVar2 == '\x01') {
      uVar5 = uVar5 & 0xffffffffffffff;
      uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    }
    else {
      iVar1 = *(int *)(unaff_x22 + 0x38);
      lVar6 = *(long *)(unaff_x22 + 0x10);
      FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      *(undefined1 *)(lVar6 + iVar1) = 1;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009ea140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar4,uVar5);
  return;
}



/* Address: 0x1009ea144 | FUN_1009ea144 */

void FUN_1009ea144(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009ea194;
  FUN_1009e9918();
  return;
}



/* Address: 0x1009ea194 | FUN_1009ea194 */

void FUN_1009ea194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(int *)(puVar1 + 2) = (int)param_3;
    *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
    *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009ea210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1009ea214 | FUN_1009ea214 */

void FUN_1009ea214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009ea268;
  FUN_1009e9918();
  return;
}



/* Address: 0x1009ea268 | FUN_1009ea268 */

void FUN_1009ea268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  lVar4 = *(long *)(lVar5 + 0x20);
  *(long *)(lVar5 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x38));
  if (unaff_x20 == 0) {
    if (lVar4 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      _swift_getObjectType(*(undefined8 *)(lVar5 + 0x20));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined8 *)(lVar5 + 0x48) = param_3;
    *(undefined8 *)(lVar5 + 0x50) = param_2;
    *(undefined8 *)(lVar5 + 0x58) = param_1;
    pcVar2 = FUN_1009ea348;
  }
  else {
    if (lVar4 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      _swift_getObjectType(*(undefined8 *)(lVar5 + 0x20));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    pcVar2 = FUN_1009ea37c;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar3);
  return;
}



/* Address: 0x1009ea348 | FUN_1009ea348 */

void FUN_1009ea348(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x18);
  auVar3 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x50),
                    *(undefined1 (*) [16])(unaff_x22 + 0x50),8,1);
  puVar2[1] = auVar3._8_8_;
  *puVar2 = auVar3._0_8_;
  *(int *)(puVar2 + 2) = (int)uVar1;
  *(char *)((long)puVar2 + 0x16) = (char)((ulong)uVar1 >> 0x30);
  *(short *)((long)puVar2 + 0x14) = (short)((ulong)uVar1 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001009ea378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009ea37c | FUN_1009ea37c */

void FUN_1009ea37c(void)

{
  byte bVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    _swift_willThrowTypedImpl
              ((undefined8 *)(unaff_x22 + 0x10),puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  **(undefined8 **)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x0001009ea40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009ea410 | FUN_1009ea410 */

void FUN_1009ea410(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_1009ea42c,0,0);
  return;
}



/* Address: 0x1009ea42c | FUN_1009ea42c */

void FUN_1009ea42c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  lVar2 = 0;
  FUN_1009eda8c();
  iVar1 = *(int *)(lVar2 + 0x14);
  *(int *)(unaff_x22 + 0x58) = iVar1;
  if ((*(byte *)(lVar4 + iVar1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009ea484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0,0);
    return;
  }
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009ea4d0;
  FUN_1009eb934();
  return;
}



/* Address: 0x1009ea4d0 | FUN_1009ea4d0 */

void FUN_1009ea4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  *(undefined8 *)(lVar3 + 0x40) = param_2;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1009ea574;
    UVar1.unknown = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    *(long *)(lVar3 + 0x50) = unaff_x20;
    if (*(long *)(lVar3 + 0x18) == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      _swift_getObjectType(*(long *)(lVar3 + 0x18));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    pcVar2 = FUN_1009ea6a4;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar4);
  return;
}



/* Address: 0x1009ea574 | FUN_1009ea574 */

void FUN_1009ea574(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x48);
  if (uVar7 >> 0x38 < 0xff) {
    cVar2 = (char)(uVar7 >> 0x38);
    if (cVar2 == '\0') {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      FUN_1009edae4();
      puVar4 = &DAT_100f28438;
      _swift_allocError(&DAT_100f28438,param_1,0,0);
      *param_1 = uVar3;
      param_1[1] = uVar6;
      param_1[2] = uVar7 & 0xffffffffffffff;
      _swift_willThrow();
      *(undefined **)(unaff_x22 + 0x50) = puVar4;
      if (*(long *)(unaff_x22 + 0x18) == 0) {
        UVar5.unknown = (undefined *)0x0;
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
        _swift_getObjectType(*(long *)(unaff_x22 + 0x18));
        UVar5 = Swift::Actor::get_unownedExecutor();
      }
      _swift_task_switch(FUN_1009ea6a4,UVar5.unknown,uVar3);
      return;
    }
    if (cVar2 == '\x01') {
      uVar7 = uVar7 & 0xffffffffffffff;
      uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    }
    else {
      iVar1 = *(int *)(unaff_x22 + 0x58);
      lVar8 = *(long *)(unaff_x22 + 0x28);
      FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
      uVar3 = 0;
      uVar6 = 0;
      uVar7 = 0;
      *(undefined1 *)(lVar8 + iVar1) = 1;
    }
  }
  else {
    uVar3 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009ea674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar6,uVar7);
  return;
}



/* Address: 0x1009ea6a4 | FUN_1009ea6a4 */

void FUN_1009ea6a4(void)

{
  byte bVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x50);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    _swift_willThrowTypedImpl
              ((undefined8 *)(unaff_x22 + 0x10),puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009ea728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009ea72c | FUN_1009ea72c */

void FUN_1009ea72c(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  
  puVar4 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1009e908c();
  lVar5 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ea818);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)(lVar5 + 0x10);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar3 == 0) {
    FUN_1000f8cac();
    FUN_10011532c(&stack0xffffffffffffffc0 + -extraout_x8,param_1,&DAT_100ff3c00,&DAT_100c8d460);
    lVar5 = 0;
    FUN_1009eda8c();
    *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x14)) = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ea81c);
  (*pcVar2)();
}



/* Address: 0x1009ea81c | FUN_1009ea81c */

long * FUN_1009ea81c(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 auStack_50 [8];
  pthread_mutexattr_t local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_storeEnumTagMultiPayload(puVar6);
  plVar5 = (long *)&DAT_100ff3d58;
  FUN_1000f7830(&DAT_100ff3d58,&DAT_100c8d478);
  _swift_allocObject();
  FUN_1000c495c(puVar6,(undefined *)
                       ((long)plVar5 +
                       *(long *)(*plVar5 + *(long *)
                                            PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                                + 0x10)),FUN_1009ea95c);
  uVar1 = *(uint *)(*plVar5 + 0x30);
  local_48.__sig = 0;
  local_48.__opaque[0] = '\0';
  local_48.__opaque[1] = '\0';
  local_48.__opaque[2] = '\0';
  local_48.__opaque[3] = '\0';
  local_48.__opaque[4] = '\0';
  local_48.__opaque[5] = '\0';
  local_48.__opaque[6] = '\0';
  local_48.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_48);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)((long)plVar5 + ((ulong)uVar1 + 7 & 0x1fffffff8)),
                              &local_48);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ea958);
    (*pcVar2)();
  }
  FUN_10005241c(puVar6,FUN_1009ea95c);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009ea95c | FUN_1009ea95c */

void FUN_1009ea95c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff4240,&TargetEnumDescriptor_100cc8f40);
  return;
}



/* Address: 0x1009ea970 | FUN_1009ea970 */

void FUN_1009ea970(undefined8 param_1)

{
  FUN_1009ea980(param_1,2);
  return;
}



/* Address: 0x1009ea978 | FUN_1009ea978 */

void FUN_1009ea978(undefined8 param_1)

{
  FUN_1009ea980(param_1,3);
  return;
}



/* Address: 0x1009ea980 | FUN_1009ea980 */

void FUN_1009ea980(long *param_1,undefined4 param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong *puVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong auStack_a0 [4];
  undefined4 local_7c;
  long *local_78;
  ulong *local_70;
  ulong local_68;
  
  lVar4 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = (ulong *)((long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar13 = *(long *)(*param_1 +
                     *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                    0x10);
  uVar12 = (ulong)*(uint *)(*param_1 + 0x30) + 7 & 0x1fffffff8;
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + uVar12));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eae78);
    (*pcVar2)();
  }
  FUN_1000c495c((long)param_1 + lVar13,puVar9,FUN_1009ea95c);
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    auStack_a0[1] = lVar13;
    auStack_a0[2] = uVar12;
    auStack_a0[3] = lVar4;
    local_7c = param_2;
    local_78 = param_1;
    if (iVar3 == 0) {
      FUN_10005241c((long)param_1 + lVar13,FUN_1009ea95c);
      puVar6 = &DAT_100ff3d50;
      FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
      lVar4 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
      local_70 = puVar9;
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      uVar12 = lVar4 + 0xfU & 0xfffffffffffffff0;
      lVar11 = (long)puVar9 - uVar12;
      FUN_10011532c(puVar9,lVar11,&DAT_100ff3d50,&DAT_100c8d458);
      puVar6 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      lVar15 = *(long *)(puVar6 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = lVar11 - extraout_x8_00;
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      lVar14 = lVar13 - uVar12;
      FUN_1000f8cac(lVar11,lVar14,&DAT_100ff3d50,&DAT_100c8d458);
      lVar4 = lVar14;
      (**(code **)(lVar15 + 0x30))(lVar14,1,puVar6);
      if ((int)lVar4 == 1) {
        FUN_1000fb4c4(lVar11,&DAT_100ff3d50,&DAT_100c8d458);
        FUN_1000fb4c4(lVar14,&DAT_100ff3d50,&DAT_100c8d458);
      }
      else {
        (**(code **)(lVar15 + 0x20))(lVar13,lVar14,puVar6);
        Swift::CheckedContinuation::resume();
        (**(code **)(lVar15 + 8))(lVar13,puVar6);
        FUN_1000fb4c4(lVar11,&DAT_100ff3d50,&DAT_100c8d458);
      }
      param_1 = local_78;
      uVar12 = auStack_a0[2];
      _swift_storeEnumTagMultiPayload((long)local_78 + auStack_a0[1],auStack_a0[3],local_7c);
    }
    else {
      FUN_10005241c((long)param_1 + lVar13,FUN_1009ea95c);
      uVar12 = *puVar9;
      puVar6 = &DAT_100ff3d48;
      local_68 = uVar12;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      lVar4 = *(long *)(puVar6 + -8);
      bVar1 = *(byte *)(lVar4 + 0x50);
      lVar13 = *(long *)(lVar4 + 0x40);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar13 + 0xfU & 0xfffffffffffffff0);
      lVar11 = (long)puVar9 - extraout_x8_01;
      puVar7 = &DAT_100ff3d50;
      FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar14 = lVar11 - extraout_x8_02;
      if (*(long *)(uVar12 + 0x18) < 1) {
        pcVar2 = *(code **)(lVar4 + 0x38);
      }
      else {
        local_70 = (ulong *)(ulong)(bVar1 + 0x28 & (bVar1 ^ 0xffffffff));
        do {
          uVar8 = uVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar8 & 1) == 0) {
            FUN_1009ed5b0();
            uVar12 = local_68;
          }
          pcVar10 = *(code **)(lVar4 + 0x20);
          (*pcVar10)(lVar14,(long)local_70 +
                            *(long *)(lVar4 + 0x48) * *(long *)(uVar12 + 0x20) + uVar12,puVar6);
          lVar15 = *(long *)(uVar12 + 0x20) + 1;
          if (SCARRY8(*(long *)(uVar12 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eae70);
            (*pcVar2)();
          }
          if (*(long *)(uVar12 + 0x10) <= lVar15) {
            lVar15 = 0;
          }
          *(long *)(uVar12 + 0x20) = lVar15;
          if (SBORROW8(*(long *)(uVar12 + 0x18),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eae74);
            (*pcVar2)();
          }
          *(long *)(uVar12 + 0x18) = *(long *)(uVar12 + 0x18) + -1;
          pcVar2 = *(code **)(lVar4 + 0x38);
          (*pcVar2)(lVar14,0,1,puVar6);
          (*pcVar10)(lVar11,lVar14,puVar6);
          Swift::CheckedContinuation::resume();
          (**(code **)(lVar4 + 8))(lVar11,puVar6);
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          lVar11 = (long)puVar9 - (lVar13 + 0xfU & 0xfffffffffffffff0);
          puVar7 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar14 = lVar11 - extraout_x8_03;
        } while (0 < *(long *)(uVar12 + 0x18));
      }
      (*pcVar2)(lVar14,1,1,puVar6);
      _swift_release(uVar12);
      FUN_1000fb4c4(lVar14,&DAT_100ff3d50,&DAT_100c8d458);
      param_1 = local_78;
      _swift_storeEnumTagMultiPayload((long)local_78 + auStack_a0[1],auStack_a0[3],local_7c);
      uVar12 = auStack_a0[2];
    }
  }
  else if (iVar3 != 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eab98);
    (*pcVar2)();
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + uVar12));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eae7c);
    (*pcVar2)();
  }
  return;
}



/* Address: 0x1009eae7c | FUN_1009eae7c */

void FUN_1009eae7c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1009eae94,0,0);
  return;
}



/* Address: 0x1009eae94 | FUN_1009eae94 */

/* WARNING: Removing unreachable block (ram,0x0001009eb0d4) */
/* WARNING: Removing unreachable block (ram,0x0001009eb0d8) */
/* WARNING: Removing unreachable block (ram,0x0001009eb144) */

void FUN_1009eae94(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  long unaff_x22;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  String isolation;
  String function;
  
  plVar8 = *(long **)(unaff_x22 + 0x50);
  lVar4 = 0;
  FUN_1009ea95c();
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar10 = *(long *)(*plVar8 + *(long *)
                                PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                    0x10);
  uVar9 = (ulong)*(uint *)(*plVar8 + 0x30) + 7 & 0x1fffffff8;
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar8 + uVar9));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb13c);
    (*pcVar1)();
  }
  FUN_1000c495c((long)plVar8 + lVar10,uVar5,FUN_1009ea95c);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar8 + uVar9));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb140);
    (*pcVar1)();
  }
  uVar6 = uVar5;
  _swift_getEnumCaseMultiPayload(uVar5,lVar4);
  if (1 < (uint)uVar6) {
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009eb028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_10005241c(uVar5,FUN_1009ea95c);
  _swift_task_dealloc(uVar5);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) == 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1008c4d50;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,0);
    puVar7 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar4 = *(long *)(puVar7 + -8);
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar5);
    function.bridgeObject = (void *)0x8000000100db7d90;
    function.str = (char *)0xd000000000000014;
    Swift::CheckedContinuation::init(continuation,function);
    iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar8 + uVar9));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb144);
      (*pcVar1)();
    }
    FUN_1009eb230((long)plVar8 + lVar10,uVar5);
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar8 + uVar9));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb14c);
      (*pcVar1)();
    }
    (**(code **)(lVar4 + 8))(uVar5,puVar7);
    _swift_task_dealloc(uVar5);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  plVar8 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1009eb14c;
  isolation.bridgeObject = (void *)0x0;
  isolation.str = (char *)plVar8;
  Swift::_withCheckedContinuation(isolation);
  return;
}



/* Address: 0x1009eb14c | FUN_1009eb14c */

void FUN_1009eb14c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x1009eb19c | FUN_1009eb19c */

/* WARNING: Removing unreachable block (ram,0x0001009eb22c) */

void FUN_1009eb19c(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *param_2;
  lVar5 = *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  uVar4 = (ulong)*(uint *)(lVar3 + 0x30) + 7 & 0x1fffffff8;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + uVar4));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb228);
    (*pcVar1)();
  }
  FUN_1009eb230((long)param_2 + *(long *)(lVar3 + lVar5 + 0x10),param_1);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + uVar4));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb22c);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1009eb230 | FUN_1009eb230 */

void FUN_1009eb230(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong local_90 [2];
  undefined *local_80;
  ulong *local_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = (ulong *)((long)local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1000c495c(param_1,puVar5);
  puVar8 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  if ((int)puVar8 < 2) {
    if ((int)puVar8 == 0) {
      local_68 = param_2;
      FUN_10005241c(param_1,FUN_1009ea95c);
      puVar4 = &DAT_100ff3d50;
      FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
      lVar10 = *(long *)(*(long *)(puVar4 + -8) + 0x40);
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      uVar9 = lVar10 + 0xfU & 0xfffffffffffffff0;
      lVar13 = (long)puVar5 - uVar9;
      FUN_10011532c(puVar5,lVar13,&DAT_100ff3d50,&DAT_100c8d458);
      puVar4 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      uVar12 = *(ulong *)(puVar4 + -8);
      local_70 = lVar13;
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(uVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar8 = (ulong *)(lVar13 - extraout_x8_00);
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      lVar11 = (long)puVar8 - uVar9;
      FUN_1000f8cac(lVar13,lVar11,&DAT_100ff3d50,&DAT_100c8d458);
      lVar10 = lVar11;
      (**(code **)(uVar12 + 0x30))(lVar11,1,puVar4);
      if ((int)lVar10 == 1) {
        FUN_1000fb4c4(lVar13,&DAT_100ff3d50,&DAT_100c8d458);
        FUN_1000fb4c4(lVar11,&DAT_100ff3d50,&DAT_100c8d458);
        (**(code **)(uVar12 + 0x10))(param_1,local_68,puVar4);
        (**(code **)(uVar12 + 0x38))(param_1,0,1,puVar4);
        _swift_storeEnumTagMultiPayload(param_1,lVar3,0);
      }
      else {
        puVar5 = puVar8;
        local_90[1] = lVar13;
        local_80 = puVar4;
        (**(code **)(uVar12 + 0x20))(puVar8,lVar11);
        FUN_1006883ac();
        uVar9 = *puVar5;
        *param_1 = uVar9;
        _swift_retain();
        _swift_isUniquelyReferenced_nonNull_native();
        bVar1 = *(byte *)(uVar12 + 0x50);
        uVar6 = *param_1;
        if ((*(long *)(uVar6 + 0x10) < 2) || ((uVar9 & 1) == 0)) {
          FUN_100a05acc(uVar9,2,1);
          uVar6 = *param_1;
        }
        lVar10 = *(long *)(uVar6 + 0x18);
        local_90[0] = uVar12;
        local_78 = puVar8;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eb6a4);
          (*pcVar2)();
        }
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = *param_1;
        if ((*(long *)(uVar9 + 0x10) < lVar10 + 1) || ((uVar6 & 1) == 0)) {
          FUN_100a05acc();
          uVar9 = *param_1;
        }
        uVar12 = (ulong)(bVar1 + 0x28 & (bVar1 ^ 0xffffffff));
        FUN_1009ed990(uVar9 + 0x10,uVar9 + uVar12,local_78);
        lVar10 = *(long *)(uVar9 + 0x18);
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eb6a8);
          (*pcVar2)();
        }
        uVar6 = *param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = local_90[1];
        uVar7 = *param_1;
        if ((*(long *)(uVar7 + 0x10) < lVar10 + 1) || ((uVar6 & 1) == 0)) {
          FUN_100a05acc();
          uVar7 = *param_1;
        }
        FUN_1009ed990(uVar7 + 0x10,uVar7 + uVar12,local_68);
        FUN_1000fb4c4(uVar9,&DAT_100ff3d50,&DAT_100c8d458);
        (**(code **)(local_90[0] + 8))(local_78,local_80);
        _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
      }
    }
    else {
      FUN_10005241c(param_1,FUN_1009ea95c);
      uVar9 = *puVar5;
      *param_1 = uVar9;
      puVar4 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      lVar10 = *(long *)(uVar9 + 0x18);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009eb6a0);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = *param_1;
      if ((*(long *)(uVar12 + 0x10) < lVar10 + 1) || ((uVar9 & 1) == 0)) {
        FUN_100a05acc();
        uVar12 = *param_1;
      }
      FUN_1009ed990(uVar12 + 0x10,uVar12 + (bVar1 + 0x28 & (bVar1 ^ 0xffffffff)),param_2);
      _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
    }
  }
  else {
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    Swift::CheckedContinuation::resume();
  }
  return;
}



/* Address: 0x1009eb6a8 | FUN_1009eb6a8 */

void FUN_1009eb6a8(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  
  lVar3 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(*param_1 +
                    *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                   0x10);
  uVar7 = (ulong)*(uint *)(*param_1 + 0x30) + 7 & 0x1fffffff8;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + uVar7));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb7e4);
    (*pcVar1)();
  }
  FUN_1000c495c((long)param_1 + lVar8,puVar6,FUN_1009ea95c);
  puVar4 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar3);
  if ((int)puVar4 < 2) {
    FUN_10005241c(puVar6,FUN_1009ea95c);
  }
  else if ((int)puVar4 == 2) {
    FUN_10005241c((long)param_1 + lVar8,FUN_1009ea95c);
    puVar5 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    (**(code **)(*(long *)(puVar5 + -8) + 0x38))((long)param_1 + lVar8,1,1,puVar5);
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,lVar3,0);
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + uVar7));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eb7e8);
  (*pcVar1)();
}



/* Address: 0x1009eb7e8 | FUN_1009eb7e8 */

void FUN_1009eb7e8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1009ea970(*unaff_x20);
  return;
}



/* Address: 0x1009eb7f0 | FUN_1009eb7f0 */

void FUN_1009eb7f0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1009ea978(*unaff_x20);
  return;
}



/* Address: 0x1009eb7f8 | FUN_1009eb7f8 */

void FUN_1009eb7f8(void)

{
  FUN_1000f8cac();
  return;
}



/* Address: 0x1009eb824 | FUN_1009eb824 */

void FUN_1009eb824(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1009e908c();
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x14)));
  return;
}



/* Address: 0x1009eb844 | FUN_1009eb844 */

void FUN_1009eb844(void)

{
  FUN_1000f8cac();
  return;
}



/* Address: 0x1009eb870 | FUN_1009eb870 */

void FUN_1009eb870(void)

{
  FUN_1009edb2c();
  return;
}



/* Address: 0x1009eb878 | FUN_1009eb878 */

undefined1 FUN_1009eb878(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1009eda8c();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x14));
}



/* Address: 0x1009eb898 | FUN_1009eb898 */

void FUN_1009eb898(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1009eda8c();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x14)) = param_1;
  return;
}



/* Address: 0x1009eb8c4 | FUN_1009eb8c4 */

undefined1  [16] FUN_1009eb8c4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1009eda8c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x14);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1009eb8ec | FUN_1009eb8ec */

void FUN_1009eb8ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  FUN_10011532c(param_2,param_1,&DAT_100ff3c00,&DAT_100c8d460);
  lVar1 = 0;
  FUN_1009eda8c();
  *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x14)) = param_3;
  return;
}



/* Address: 0x1009eb934 | FUN_1009eb934 */

void FUN_1009eb934(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_1009eb9a4,0,0);
  return;
}



/* Address: 0x1009eb9a4 | FUN_1009eb9a4 */

void FUN_1009eb9a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x28),uVar1,&DAT_100ff3c10,&DAT_100c8e0d0);
  _swift_getEnumCaseMultiPayload(uVar1,uVar7);
  if ((int)uVar1 == 1) {
    lVar5 = **(long **)(unaff_x22 + 0x38);
    *(long *)(unaff_x22 + 0x68) = lVar5;
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1009ebb58;
    FUN_1009f5fc4(uVar7);
    return;
  }
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  *(undefined **)(unaff_x22 + 0x40) = puVar2;
  lVar5 = *(long *)(puVar2 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  pcVar6 = *(code **)(lVar5 + 0x20);
  *(code **)(unaff_x22 + 0x50) = pcVar6;
  (*pcVar6)();
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009ebaf4;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1009ebaf4 | FUN_1009ebaf4 */

void FUN_1009ebaf4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1009ebf30;
  }
  else {
    pcVar1 = thunk_FUN_1009ebfe4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009ebb58 | FUN_1009ebb58 */

void FUN_1009ebb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x88) = param_2;
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = thunk_FUN_1009ebe8c;
  }
  else {
    pcVar1 = thunk_FUN_1009ebeec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009ebbe0 | FUN_1009ebbe0 */

void FUN_1009ebbe0(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_1009ebc50,0,0);
  return;
}



/* Address: 0x1009ebc50 | FUN_1009ebc50 */

void FUN_1009ebc50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x28),uVar1,&DAT_100ff3c10,&DAT_100c8e0d0);
  _swift_getEnumCaseMultiPayload(uVar1,uVar7);
  if ((int)uVar1 == 1) {
    lVar5 = **(long **)(unaff_x22 + 0x38);
    *(long *)(unaff_x22 + 0x68) = lVar5;
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1009ebe04;
    FUN_1009f6174(uVar7);
    return;
  }
  puVar2 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  *(undefined **)(unaff_x22 + 0x40) = puVar2;
  lVar5 = *(long *)(puVar2 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  pcVar6 = *(code **)(lVar5 + 0x20);
  *(code **)(unaff_x22 + 0x50) = pcVar6;
  (*pcVar6)();
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009ebda0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1009ebda0 | FUN_1009ebda0 */

void FUN_1009ebda0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009ebf30;
  }
  else {
    pcVar1 = FUN_1009ebfe4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009ebe04 | FUN_1009ebe04 */

void FUN_1009ebe04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x88) = param_2;
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_1009ebe8c;
  }
  else {
    pcVar1 = FUN_1009ebeec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009ebe8c | FUN_1009ebe8c */

void FUN_1009ebe8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009ebee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1009ebeec | FUN_1009ebeec */

void FUN_1009ebeec(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009ebf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


