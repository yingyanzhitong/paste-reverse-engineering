/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005305d4 | FUN_1005305d4 */

void FUN_1005305d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100530118;
  }
  else {
    pcVar1 = thunk_FUN_100530158;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x20),0);
  return;
}



/* Address: 0x100530630 | FUN_100530630 */

void FUN_100530630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10053064c);
  return;
}



/* Address: 0x10053064c | FUN_10053064c */

/* WARNING: Removing unreachable block (ram,0x0001005306c8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005306bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10053064c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  Data DVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  JSONEncoder *pJVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar6 + 0x78);
    pJVar9 = *(JSONEncoder **)(lVar6 + 0x130);
    uVar2 = 0;
    FUN_1004e4dd4(0,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
    _swift_unknownObjectRetain(lVar8);
    pTVar3 = &TargetProtocolConformanceDescriptor_100c52d60;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52d60,uVar2);
    DVar4 = Foundation::JSONEncoder::_encode(pJVar9,pTVar3,uVar2,pTVar3);
    *(undefined **)(unaff_x22 + 0x38) = DVar4.unknown;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
    _swift_getObjectType(lVar8);
    piVar7 = *(int **)(lVar10 + 0x28);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1005307b4;
                    /* WARNING: Could not recover jumptable at 0x0001005307b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(DVar4.unknown,uVar2,lVar8,lVar10);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100530740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005307b4 | FUN_1005307b4 */

void FUN_1005307b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100530810;
  }
  else {
    pcVar1 = FUN_100530850;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x28),0);
  return;
}



/* Address: 0x100530810 | FUN_100530810 */

void FUN_100530810(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053084c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530850 | FUN_100530850 */

void FUN_100530850(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530890 | FUN_100530890 */

void FUN_100530890(undefined8 *param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)((long)param_1 + 0x2a);
  *(undefined8 *)(unaff_x22 + 0x42) = *(undefined8 *)((long)param_1 + 0x32);
  *(undefined8 *)(unaff_x22 + 0x3a) = uVar1;
  _swift_task_switch(FUN_1005308c0);
  return;
}



/* Address: 0x1005308c0 | FUN_1005308c0 */

/* WARNING: Removing unreachable block (ram,0x000100530958) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010053094c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005308c0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  JSONEncoder *pJVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar6 + 0x78);
    pJVar9 = *(JSONEncoder **)(lVar6 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar2 = &DAT_100fcb3e0;
    FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
    puVar3 = &DAT_100fcef28;
    FUN_100134584(&DAT_100fcef28,&DAT_100fcb3e0,&DAT_100c50230,
                  &TargetProtocolConformanceDescriptor_100c52ca8);
    DVar4 = Foundation::JSONEncoder::_encode(pJVar9,puVar3,puVar2,puVar3);
    *(undefined **)(unaff_x22 + 0x60) = DVar4.unknown;
    *(undefined **)(unaff_x22 + 0x68) = puVar2;
    _swift_getObjectType(lVar8);
    piVar7 = *(int **)(lVar10 + 0x28);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100530a4c;
                    /* WARNING: Could not recover jumptable at 0x000100530a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(DVar4.unknown,puVar2,lVar8,lVar10);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001005309d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530a4c | FUN_100530a4c */

void FUN_100530a4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100530aa8;
  }
  else {
    pcVar1 = FUN_100530ae8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x50),0);
  return;
}



/* Address: 0x100530aa8 | FUN_100530aa8 */

void FUN_100530aa8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100530ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530ae8 | FUN_100530ae8 */

void FUN_100530ae8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100530b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530b28 | FUN_100530b28 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100530c34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_100530b28(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  long extraout_x8;
  long unaff_x20;
  JSONEncoder *pJVar6;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_2a0 [8];
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined1 auStack_278 [168];
  long local_1d0;
  long lStack_1c8;
  ulong local_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long local_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  
  puVar2 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_98 = param_1[0x11];
  local_a0 = param_1[0x10];
  lStack_88 = param_1[0x13];
  lStack_90 = param_1[0x12];
  local_80 = param_1[0x14];
  lStack_d8 = param_1[9];
  local_e0 = param_1[8];
  lStack_c8 = param_1[0xb];
  lStack_d0 = param_1[10];
  lStack_b8 = param_1[0xd];
  local_c0 = param_1[0xc];
  lStack_a8 = param_1[0xf];
  lStack_b0 = param_1[0xe];
  lStack_118 = param_1[1];
  local_120 = *param_1;
  lStack_108 = param_1[3];
  uStack_110 = param_1[2];
  lStack_f8 = param_1[5];
  local_100 = param_1[4];
  lStack_e8 = param_1[7];
  lStack_f0 = param_1[6];
  lVar7 = *(long *)(unaff_x20 + 0x70);
  if (lVar7 == 0) {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
    *puVar2 = 0xd000000000000021;
    puVar2[1] = 0x8000000100dad330;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 4;
    _swift_willThrow();
  }
  else {
    local_280 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar6 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar7);
    puVar3 = &DAT_100fcf0b8;
    FUN_1000f7830(&DAT_100fcf0b8,&DAT_100c56fc0);
    puVar4 = &DAT_100fcf0d0;
    FUN_100134584(&DAT_100fcf0d0,&DAT_100fcf0b8,&DAT_100c56fc0,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    local_288 = (undefined *)Foundation::JSONEncoder::_encode(pJVar6,puVar4,puVar3,puVar4);
    if (unaff_x21 == 0) {
      local_290 = puVar3;
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))
                (auStack_2a0 + -extraout_x8,1,1,TVar5.unknown);
      lVar1 = lStack_118;
      unaff_x21 = local_120;
      lStack_148 = lStack_98;
      local_150 = local_a0;
      lStack_138 = lStack_88;
      lStack_140 = lStack_90;
      local_130 = local_80;
      lStack_188 = lStack_d8;
      local_190 = local_e0;
      lStack_178 = lStack_c8;
      lStack_180 = lStack_d0;
      lStack_168 = lStack_b8;
      local_170 = local_c0;
      lStack_158 = lStack_a8;
      lStack_160 = lStack_b0;
      lStack_1c8 = lStack_118;
      local_1d0 = local_120;
      lStack_1b8 = lStack_108;
      local_1c0 = uStack_110;
      lStack_1a8 = lStack_f8;
      local_1b0 = local_100;
      lStack_198 = lStack_e8;
      lStack_1a0 = lStack_f0;
      uVar8 = uStack_110 & 0xff;
      puVar3 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar4 = &DAT_100ede318;
      local_298 = puVar3;
      _swift_allocObject(&DAT_100ede318,0xf0,7);
      *(long *)(puVar4 + 0xa0) = lStack_a8;
      *(long *)(puVar4 + 0x98) = lStack_b0;
      *(long *)(puVar4 + 0xb0) = lStack_98;
      *(long *)(puVar4 + 0xa8) = local_a0;
      *(long *)(puVar4 + 0xc0) = lStack_88;
      *(long *)(puVar4 + 0xb8) = lStack_90;
      *(long *)(puVar4 + 0x60) = lStack_e8;
      *(long *)(puVar4 + 0x58) = lStack_f0;
      *(long *)(puVar4 + 0x70) = lStack_d8;
      *(long *)(puVar4 + 0x68) = local_e0;
      *(long *)(puVar4 + 0x80) = lStack_c8;
      *(long *)(puVar4 + 0x78) = lStack_d0;
      *(long *)(puVar4 + 0x90) = lStack_b8;
      *(long *)(puVar4 + 0x88) = local_c0;
      *(long *)(puVar4 + 0x30) = lStack_118;
      *(long *)(puVar4 + 0x28) = local_120;
      *(long *)(puVar4 + 0x40) = lStack_108;
      *(ulong *)(puVar4 + 0x38) = uStack_110;
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = local_298;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(long *)(puVar4 + 0x50) = lStack_f8;
      *(long *)(puVar4 + 0x48) = local_100;
      *(long *)(puVar4 + 200) = local_80;
      *(long *)(puVar4 + 0xd0) = lVar7;
      *(undefined8 *)(puVar4 + 0xd8) = local_280;
      *(undefined **)(puVar4 + 0xe0) = local_288;
      *(undefined **)(puVar4 + 0xe8) = local_290;
      _swift_retain_n();
      FUN_1000f8cac(&local_1d0,auStack_278,&DAT_100fcf0b8,&DAT_100c56fc0);
      FUN_1004a7398(unaff_x21,lVar1,uVar8);
      FUN_1005876bc(0,0,auStack_2a0 + -extraout_x8,&DAT_100c56fe0,puVar4);
    }
    else {
      _swift_unknownObjectRelease(lVar7);
    }
  }
  return unaff_x21;
}



/* Address: 0x100530e20 | FUN_100530e20 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100530f00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100530e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  local_80 = param_1[4];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcf098;
    FUN_1000f7830(&DAT_100fcf098,&DAT_100c56f48);
    puVar5 = &DAT_100fcf0a0;
    FUN_100134584(&DAT_100fcf0a0,&DAT_100fcf098,&DAT_100c56f48,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_b8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_c0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_d0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      local_70 = param_1[3];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100ede228;
      local_c8 = puVar4;
      _swift_allocObject(&DAT_100ede228,0x70,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_c8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      *(undefined8 *)(puVar5 + 0x48) = param_1[4];
      *(long *)(puVar5 + 0x50) = lVar9;
      *(undefined8 *)(puVar5 + 0x58) = uVar7;
      *(undefined **)(puVar5 + 0x60) = puStack_b8;
      *(undefined **)(puVar5 + 0x68) = local_c0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&local_70,auStack_b0);
      FUN_1005876c8(0,0,auStack_d0 + -extraout_x8,&DAT_100c56f58,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x100531098 | FUN_100531098 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100531174 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100531098(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Data DVar5;
  TaskPriority TVar6;
  long extraout_x8;
  long unaff_x20;
  JSONEncoder *pJVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined1 auStack_130 [64];
  JSONEncoder *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  JSONEncoder *local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = param_1[1];
  local_b0 = (JSONEncoder *)*param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 == 0) {
    pJVar7 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
    *puVar2 = 0xd000000000000021;
    puVar2[1] = 0x8000000100dad330;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar7 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar3 = &DAT_100fce8e0;
    FUN_1000f7830(&DAT_100fce8e0,&DAT_100c558b0);
    puVar4 = &DAT_100fcf080;
    FUN_100134584(&DAT_100fcf080,&DAT_100fce8e0,&DAT_100c558b0,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    DVar5 = Foundation::JSONEncoder::_encode(pJVar7,puVar4,puVar3,puVar4);
    if (unaff_x21 == 0) {
      local_138 = puVar3;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_140 + -extraout_x8,1,1,TVar6.unknown);
      uVar1 = uStack_a8;
      pJVar7 = local_b0;
      uStack_e8 = uStack_a8;
      local_f0 = local_b0;
      uStack_d8 = uStack_98;
      local_e0 = uStack_a0;
      uStack_c8 = uStack_88;
      local_d0 = local_90;
      uStack_b8 = uStack_78;
      uStack_c0 = uStack_80;
      uVar9 = uStack_a0 & 0xff;
      puVar3 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar4 = &DAT_100ede188;
      _swift_allocObject(&DAT_100ede188,0x88,7);
      *(undefined8 *)(puVar4 + 0x30) = uStack_a8;
      *(JSONEncoder **)(puVar4 + 0x28) = local_b0;
      *(undefined8 *)(puVar4 + 0x40) = uStack_98;
      *(ulong *)(puVar4 + 0x38) = uStack_a0;
      *(undefined8 *)(puVar4 + 0x50) = uStack_88;
      *(undefined8 *)(puVar4 + 0x48) = local_90;
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x60) = uStack_78;
      *(undefined8 *)(puVar4 + 0x58) = uStack_80;
      *(long *)(puVar4 + 0x68) = lVar8;
      *(undefined8 *)(puVar4 + 0x70) = uVar10;
      *(undefined **)(puVar4 + 0x78) = DVar5.unknown;
      *(undefined **)(puVar4 + 0x80) = local_138;
      _swift_retain_n();
      FUN_1000f8cac(&local_f0,auStack_130,&DAT_100fce8e0,&DAT_100c558b0);
      FUN_1004a7398(pJVar7,uVar1,uVar9);
      FUN_100587920(0,0,auStack_140 + -extraout_x8,&DAT_100c56f08,puVar4);
    }
    else {
      _swift_unknownObjectRelease(lVar8);
    }
  }
  return pJVar7;
}



/* Address: 0x100531320 | FUN_100531320 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100531408 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100531320(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcf060;
    FUN_1000f7830(&DAT_100fcf060,&DAT_100c56eb0);
    puVar5 = &DAT_100fcf068;
    FUN_100134584(&DAT_100fcf068,&DAT_100fcf060,&DAT_100c56eb0,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100ede0e8;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100ede0e8,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054c088(&local_80,auStack_d0);
      FUN_100587b80(0,0,auStack_f0 + -extraout_x8,&DAT_100c56ec0,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x1005315b8 | FUN_1005315b8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005316a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_1005315b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcf040;
    FUN_1000f7830(&DAT_100fcf040,&DAT_100c56e60);
    puVar5 = &DAT_100fcf048;
    FUN_100134584(&DAT_100fcf048,&DAT_100fcf040,&DAT_100c56e60,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100ede048;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100ede048,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054bdac(&local_80,auStack_d0);
      FUN_100587b8c(0,0,auStack_f0 + -extraout_x8,&DAT_100c56e70,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x100531850 | FUN_100531850 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100531938 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100531850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcf020;
    FUN_1000f7830(&DAT_100fcf020,&DAT_100c56e10);
    puVar5 = &DAT_100fcf028;
    FUN_100134584(&DAT_100fcf028,&DAT_100fcf020,&DAT_100c56e10,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100eddfa8;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100eddfa8,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054bb70(&local_80,auStack_d0);
      FUN_100587b98(0,0,auStack_f0 + -extraout_x8,&DAT_100c56e20,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x100531ae8 | FUN_100531ae8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100531bd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100531ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcf010;
    FUN_1000f7830(&DAT_100fcf010,&DAT_100c56dd0);
    puVar5 = &DAT_100fcf018;
    FUN_100134584(&DAT_100fcf018,&DAT_100fcf010,&DAT_100c56dd0,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100eddf08;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100eddf08,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054b974(&local_80,auStack_d0);
      FUN_1005876c8(0,0,auStack_f0 + -extraout_x8,&DAT_100c56de0,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x100531d80 | FUN_100531d80 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100531e68 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100531d80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fceff0;
    FUN_1000f7830(&DAT_100fceff0,&DAT_100c56d80);
    puVar5 = &DAT_100fceff8;
    FUN_100134584(&DAT_100fceff8,&DAT_100fceff0,&DAT_100c56d80,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100edde68;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100edde68,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054b738(&local_80,auStack_d0);
      FUN_100587ba4(0,0,auStack_f0 + -extraout_x8,&DAT_100c56d90,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x100532018 | FUN_100532018 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100532100 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100532018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  local_90 = param_1[6];
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcefd0;
    FUN_1000f7830(&DAT_100fcefd0,&DAT_100c56d30);
    puVar5 = &DAT_100fcefd8;
    FUN_100134584(&DAT_100fcefd8,&DAT_100fcefd0,&DAT_100c56d30,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_d8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_e0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_f0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      uStack_70 = param_1[3];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100edddc8;
      local_e8 = puVar4;
      _swift_allocObject(&DAT_100edddc8,0x80,7);
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_e8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = param_1[4];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar10;
      *(undefined8 *)(puVar5 + 0x58) = param_1[6];
      *(long *)(puVar5 + 0x60) = lVar9;
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined **)(puVar5 + 0x70) = puStack_d8;
      *(undefined **)(puVar5 + 0x78) = local_e0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&uStack_70,auStack_d0);
      FUN_10054b4fc(&local_80,auStack_d0);
      FUN_100587bb0(0,0,auStack_f0 + -extraout_x8,&DAT_100c56d40,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x1005322b0 | FUN_1005322b0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010053239c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_1005322b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  JSONEncoder *pJVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long local_170;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_158 [72];
  JSONEncoder *local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  JSONEncoder *local_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar2 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  local_80 = param_1[8];
  uStack_b8 = param_1[1];
  local_c0 = (JSONEncoder *)*param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 == 0) {
    pJVar7 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
    *puVar2 = 0xd000000000000021;
    puVar2[1] = 0x8000000100dad330;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar7 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar3 = &DAT_100fce8e8;
    FUN_1000f7830(&DAT_100fce8e8,&DAT_100c55960);
    puVar4 = &DAT_100fcefb8;
    FUN_100134584(&DAT_100fcefb8,&DAT_100fce8e8,&DAT_100c55960,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    local_160 = (undefined *)Foundation::JSONEncoder::_encode(pJVar7,puVar4,puVar3,puVar4);
    if (unaff_x21 == 0) {
      local_168 = puVar3;
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))
                ((long)&local_170 - extraout_x8,1,1,TVar5.unknown);
      uVar1 = uStack_b8;
      pJVar7 = local_c0;
      uStack_108 = uStack_b8;
      local_110 = local_c0;
      uStack_f8 = uStack_a8;
      local_100 = uStack_b0;
      uStack_e8 = uStack_98;
      local_f0 = local_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      local_d0 = local_80;
      uVar9 = uStack_b0 & 0xff;
      puVar3 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar4 = &DAT_100eddd28;
      _swift_allocObject(&DAT_100eddd28,0x90,7);
      *(undefined8 *)(puVar4 + 0x40) = uStack_a8;
      *(ulong *)(puVar4 + 0x38) = uStack_b0;
      *(undefined8 *)(puVar4 + 0x50) = uStack_98;
      *(undefined8 *)(puVar4 + 0x48) = local_a0;
      *(undefined8 *)(puVar4 + 0x60) = uStack_88;
      *(undefined8 *)(puVar4 + 0x58) = uStack_90;
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x30) = uStack_b8;
      *(JSONEncoder **)(puVar4 + 0x28) = local_c0;
      *(undefined8 *)(puVar4 + 0x68) = local_80;
      *(long *)(puVar4 + 0x70) = lVar8;
      *(undefined8 *)(puVar4 + 0x78) = uVar6;
      *(undefined **)(puVar4 + 0x80) = local_160;
      *(undefined **)(puVar4 + 0x88) = local_168;
      local_170 = (long)&local_170 - extraout_x8;
      _swift_retain_n();
      FUN_1000f8cac(&local_110,auStack_158,&DAT_100fce8e8,&DAT_100c55960);
      FUN_1004a7398(pJVar7,uVar1,uVar9);
      FUN_100587bbc(0,0,local_170,&DAT_100c56cf0,puVar4);
    }
    else {
      _swift_unknownObjectRelease(lVar8);
    }
  }
  return pJVar7;
}



/* Address: 0x10053256c | FUN_10053256c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010053264c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_10053256c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  JSONEncoder *pJVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_90 = param_1[2];
  uStack_88 = (undefined1)param_1[3];
  uStack_7f = *(undefined8 *)((long)param_1 + 0x21);
  local_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if (lVar9 == 0) {
    pJVar8 = (JSONEncoder *)0x8000000100dad330;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000021;
    puVar3[1] = 0x8000000100dad330;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar8 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar9);
    puVar4 = &DAT_100fcef88;
    FUN_1000f7830(&DAT_100fcef88,&DAT_100c56c90);
    puVar5 = &DAT_100fcef90;
    FUN_100134584(&DAT_100fcef90,&DAT_100fcef88,&DAT_100c56c90,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    puStack_b8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar8,puVar5,puVar4,puVar5);
    if (unaff_x21 == 0) {
      local_c0 = puVar4;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                (auStack_d0 + -extraout_x8,1,1,TVar6.unknown);
      pJVar8 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uStack_68 = param_1[4];
      local_70 = param_1[3];
      uVar2 = *(undefined1 *)(param_1 + 2);
      puVar4 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar5 = &DAT_100eddc88;
      local_c8 = puVar4;
      _swift_allocObject(&DAT_100eddc88,0x78,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = local_c8;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      uVar10 = *param_1;
      uVar12 = param_1[3];
      uVar11 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(undefined8 *)(puVar5 + 0x40) = uVar12;
      *(undefined8 *)(puVar5 + 0x38) = uVar11;
      uVar10 = *(undefined8 *)((long)param_1 + 0x19);
      *(undefined8 *)(puVar5 + 0x49) = *(undefined8 *)((long)param_1 + 0x21);
      *(undefined8 *)(puVar5 + 0x41) = uVar10;
      *(long *)(puVar5 + 0x58) = lVar9;
      *(undefined8 *)(puVar5 + 0x60) = uVar7;
      *(undefined **)(puVar5 + 0x68) = puStack_b8;
      *(undefined **)(puVar5 + 0x70) = local_c0;
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_1004a7398(pJVar8,uVar1,uVar2);
      _swift_retain();
      FUN_10000ca28(&local_70,auStack_b0);
      FUN_1005876c8(0,0,auStack_d0 + -extraout_x8,&DAT_100c56ca0,puVar5);
    }
    else {
      _swift_unknownObjectRelease(lVar9);
    }
  }
  return pJVar8;
}



/* Address: 0x1005327e4 | FUN_1005327e4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005328e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1005327e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  long extraout_x8;
  long unaff_x20;
  JSONEncoder *pJVar6;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_210 [8];
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [120];
  long local_170;
  long lStack_168;
  ulong local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long local_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  puVar2 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = param_1[9];
  local_b0 = param_1[8];
  lStack_98 = param_1[0xb];
  lStack_a0 = param_1[10];
  lStack_88 = param_1[0xd];
  local_90 = param_1[0xc];
  local_80 = param_1[0xe];
  lStack_e8 = param_1[1];
  local_f0 = *param_1;
  lStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  lStack_c8 = param_1[5];
  local_d0 = param_1[4];
  lStack_b8 = param_1[7];
  lStack_c0 = param_1[6];
  lVar7 = *(long *)(unaff_x20 + 0x70);
  if (lVar7 == 0) {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
    *puVar2 = 0xd000000000000021;
    puVar2[1] = 0x8000000100dad330;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 4;
    _swift_willThrow();
  }
  else {
    local_1f0 = *(undefined8 *)(unaff_x20 + 0x78);
    pJVar6 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar7);
    puVar3 = &DAT_100fce908;
    FUN_1000f7830(&DAT_100fce908,&DAT_100c55a40);
    puVar4 = &DAT_100fcef70;
    FUN_100134584(&DAT_100fcef70,&DAT_100fce908,&DAT_100c55a40,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    local_1f8 = (undefined *)Foundation::JSONEncoder::_encode(pJVar6,puVar4,puVar3,puVar4);
    if (unaff_x21 == 0) {
      local_200 = puVar3;
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))
                (auStack_210 + -extraout_x8,1,1,TVar5.unknown);
      lVar1 = lStack_e8;
      unaff_x21 = local_f0;
      lStack_168 = lStack_e8;
      local_170 = local_f0;
      lStack_118 = lStack_98;
      local_120 = lStack_a0;
      lStack_108 = lStack_88;
      lStack_110 = local_90;
      lStack_158 = lStack_d8;
      local_160 = uStack_e0;
      lStack_148 = lStack_c8;
      lStack_150 = local_d0;
      local_100 = local_80;
      lStack_138 = lStack_b8;
      local_140 = lStack_c0;
      lStack_128 = lStack_a8;
      lStack_130 = local_b0;
      uVar8 = uStack_e0 & 0xff;
      puVar3 = &DAT_100fce8b8;
      FUN_1003b6598();
      puVar4 = &DAT_100eddbe8;
      local_208 = puVar3;
      _swift_allocObject(&DAT_100eddbe8,0xc0,7);
      *(long *)(puVar4 + 0x70) = lStack_a8;
      *(long *)(puVar4 + 0x68) = local_b0;
      *(long *)(puVar4 + 0x80) = lStack_98;
      *(long *)(puVar4 + 0x78) = lStack_a0;
      *(long *)(puVar4 + 0x90) = lStack_88;
      *(long *)(puVar4 + 0x88) = local_90;
      *(long *)(puVar4 + 0x30) = lStack_e8;
      *(long *)(puVar4 + 0x28) = local_f0;
      *(long *)(puVar4 + 0x40) = lStack_d8;
      *(ulong *)(puVar4 + 0x38) = uStack_e0;
      *(long *)(puVar4 + 0x50) = lStack_c8;
      *(long *)(puVar4 + 0x48) = local_d0;
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = local_208;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(long *)(puVar4 + 0x60) = lStack_b8;
      *(long *)(puVar4 + 0x58) = lStack_c0;
      *(long *)(puVar4 + 0x98) = local_80;
      *(long *)(puVar4 + 0xa0) = lVar7;
      *(undefined8 *)(puVar4 + 0xa8) = local_1f0;
      *(undefined **)(puVar4 + 0xb0) = local_1f8;
      *(undefined **)(puVar4 + 0xb8) = local_200;
      _swift_retain_n();
      FUN_1000f8cac(&local_170,auStack_1e8,&DAT_100fce908,&DAT_100c55a40);
      FUN_1004a7398(unaff_x21,lVar1,uVar8);
      FUN_100587bc8(0,0,auStack_210 + -extraout_x8,&DAT_100c56c50,puVar4);
    }
    else {
      _swift_unknownObjectRelease(lVar7);
    }
  }
  return unaff_x21;
}



/* Address: 0x100532abc | FUN_100532abc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100532ba0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

JSONEncoder * FUN_100532abc(undefined8 *param_1,JSONEncoder *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  TaskPriority TVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  JSONEncoder *pJVar15;
  ulong uVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  
  lVar3 = 0;
  FUN_1004e3b34();
  lVar18 = *(long *)(lVar3 + -8);
  lVar17 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)&local_a0 - extraout_x8;
  puVar4 = (undefined8 *)&DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(puVar4[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(unaff_x20 + 0x70);
  if (lVar19 == 0) {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar4,0,0);
    *puVar4 = 0xd000000000000021;
    puVar4[1] = 0x8000000100dad330;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 4;
    _swift_willThrow();
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0x78);
    pJVar15 = *(JSONEncoder **)(unaff_x20 + 0x130);
    _swift_unknownObjectRetain(lVar19);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c52bb8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52bb8,lVar3);
    lVar11 = lVar3;
    puStack_88 = (undefined *)Foundation::JSONEncoder::_encode(pJVar15,pTVar5,lVar3,pTVar5);
    if (unaff_x21 == 0) {
      local_90 = lVar11;
      TVar6 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar20 - extraout_x8_00,1,1,TVar6.unknown)
      ;
      (**(code **)(lVar18 + 0x10))(lVar20,param_1,lVar3);
      puVar7 = &DAT_100fce8b8;
      FUN_1003b6598();
      uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
      uVar16 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
      uVar14 = lVar17 + uVar16 + 7 & 0xfffffffffffffff8;
      local_98 = uVar14 + 0x10;
      puVar8 = &DAT_100edd308;
      local_a0 = puVar7;
      _swift_allocObject(&DAT_100edd308,uVar14 + 0x20,uVar13 | 7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(undefined **)(puVar8 + 0x18) = local_a0;
      *(JSONEncoder **)(puVar8 + 0x20) = param_2;
      *(undefined8 *)(puVar8 + 0x28) = param_3;
      *(long *)(puVar8 + 0x30) = unaff_x20;
      (**(code **)(lVar18 + 0x20))(puVar8 + uVar16,lVar20,lVar3);
      *(long *)(puVar8 + uVar14) = lVar19;
      *(long *)((long)(puVar8 + uVar14) + 8) = lVar12;
      *(undefined **)(puVar8 + local_98) = puStack_88;
      *(long *)((long)(puVar8 + local_98) + 8) = local_90;
      uVar9 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_3,param_2,0x100cb270c,&TargetProtocolRequirement_100cb274c);
      _swift_retain_n();
      uVar10 = 0;
      FUN_100537cac(0,0,lVar20 - extraout_x8_00,&DAT_100c55838,puVar8,uVar9);
      pJVar15 = (JSONEncoder *)*param_1;
      uVar1 = param_1[1];
      uVar2 = *(undefined1 *)(param_1 + 2);
      _swift_getAssociatedConformanceWitness
                (param_3,param_2,uVar9,0x100cb270c,&TargetProtocolRequirement_100cb272c);
      param_2 = pJVar15;
      FUN_100004520(pJVar15,uVar1,uVar2,uVar10,uVar9,param_3);
      FUN_1004a7398(pJVar15,uVar1,uVar2);
    }
    else {
      _swift_unknownObjectRelease(lVar19);
      param_2 = pJVar15;
    }
  }
  return param_2;
}



/* Address: 0x100532ddc | FUN_100532ddc */

void FUN_100532ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x338) = param_9;
  *(undefined8 *)(unaff_x22 + 0x330) = param_8;
  *(undefined8 *)(unaff_x22 + 0x328) = param_7;
  *(undefined8 *)(unaff_x22 + 800) = param_6;
  *(undefined8 *)(unaff_x22 + 0x318) = param_4;
  *(undefined8 *)(unaff_x22 + 0x310) = param_1;
  uVar1 = param_5[0x10];
  uVar3 = param_5[0x13];
  uVar2 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x118) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = param_5[0x14];
  uVar1 = param_5[8];
  uVar3 = param_5[0xb];
  uVar2 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  uVar3 = param_5[0xc];
  uVar2 = param_5[0xf];
  uVar1 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
  uVar1 = *param_5;
  uVar3 = param_5[3];
  uVar2 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar3 = param_5[4];
  uVar2 = param_5[7];
  uVar1 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  _swift_task_switch(FUN_100532e40,param_4,0);
  return;
}



/* Address: 0x100532e40 | FUN_100532e40 */

void FUN_100532e40(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  String isolation;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar4 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x340) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x328);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 800);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_x22 + 0x318);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x348) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100532f88;
    isolation.str = *(char **)(unaff_x22 + 0x310);
    isolation.bridgeObject = pvVar5;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x318) == 0) {
    UVar3.unknown = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x318));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100532fe8,UVar3.unknown,puVar4);
  return;
}



/* Address: 0x100532f88 | FUN_100532f88 */

void FUN_100532f88(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x348));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x318);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x350) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x318);
    pcVar1 = FUN_1005333c0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100532fe8 | FUN_100532fe8 */

void FUN_100532fe8(void)

{
  undefined8 *puVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String function;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x138);
  uVar13 = *(ulong *)(unaff_x22 + 0x318);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x288;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_10053331c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar2 = &DAT_100fcf0d8;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  lVar12 = *(long *)(puVar2 + -8);
  lVar16 = *(long *)(lVar12 + 0x40);
  uVar6 = lVar16 + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x98);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_isCurrentExecutor(uVar13,0);
  if ((uVar13 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x318),0);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar4 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar13 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar17 = *(undefined8 *)(unaff_x22 + 800);
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar13,1,1,TVar5.unknown);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar12 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar10 + 0xd0 & (uVar10 ^ 0xffffffffffffffff);
  uVar14 = lVar16 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede340;
  _swift_allocObject(&DAT_100ede340,uVar14 + 0x20,uVar10 | 7);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(puVar4 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(puVar4 + 0x98) = uVar18;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(puVar4 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(puVar4 + 0xa8) = uVar18;
  *(undefined8 *)(puVar4 + 0xc0) = uVar23;
  *(undefined8 *)(puVar4 + 0xb8) = uVar22;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(puVar4 + 0x60) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(puVar4 + 0x58) = uVar18;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar25 = *(undefined8 *)(unaff_x22 + 400);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(puVar4 + 0x70) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(puVar4 + 0x68) = uVar18;
  *(undefined8 *)(puVar4 + 0x80) = uVar25;
  *(undefined8 *)(puVar4 + 0x78) = uVar24;
  *(undefined8 *)(puVar4 + 0x90) = uVar21;
  *(undefined8 *)(puVar4 + 0x88) = uVar20;
  uVar18 = *puVar1;
  uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(puVar4 + 0x28) = uVar18;
  *(undefined8 *)(puVar4 + 0x40) = uVar21;
  *(undefined8 *)(puVar4 + 0x38) = uVar20;
  *(undefined8 *)(puVar4 + 0x10) = uVar15;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar15;
  *(undefined8 *)(puVar4 + 200) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(puVar4 + 0x50) = uVar23;
  *(undefined8 *)(puVar4 + 0x48) = uVar22;
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar11,uVar6,puVar2);
  *(undefined8 *)((long)(puVar4 + uVar14) + 8) = uVar19;
  *(undefined8 *)(puVar4 + uVar14) = uVar17;
  *(undefined8 *)(puVar4 + uVar14 + 0x10) = uVar9;
  *(undefined8 *)((long)(puVar4 + uVar14 + 0x10) + 8) = uVar8;
  _swift_task_dealloc(uVar6);
  _swift_retain_n(uVar15,2);
  FUN_1000f8cac(puVar1,unaff_x22 + 0x1e0,&DAT_100fcf0b8,&DAT_100c56fc0);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar9,uVar8);
  FUN_1004e9c98(0,0,uVar13,&DAT_100c57000,puVar4);
  _swift_release();
  _swift_task_dealloc(uVar13);
  (**(code **)(lVar12 + 8))(uVar3,puVar2);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x10053331c | FUN_10053331c */

void FUN_10053331c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x70);
  if (lVar5 == 0) {
    puVar3 = *(undefined8 **)(lVar4 + 0x310);
    uVar2 = *(undefined8 *)(lVar4 + 0x288);
    puVar3[1] = *(undefined8 *)(lVar4 + 0x290);
    *puVar3 = uVar2;
    uVar6 = *(undefined8 *)(lVar4 + 0x2a0);
    uVar2 = *(undefined8 *)(lVar4 + 0x298);
    uVar8 = *(undefined8 *)(lVar4 + 0x2b0);
    uVar7 = *(undefined8 *)(lVar4 + 0x2a8);
    uVar9 = *(undefined8 *)(lVar4 + 0x2b8);
    uVar11 = *(undefined8 *)(lVar4 + 0x2d0);
    uVar10 = *(undefined8 *)(lVar4 + 0x2c8);
    puVar3[7] = *(undefined8 *)(lVar4 + 0x2c0);
    puVar3[6] = uVar9;
    puVar3[9] = uVar11;
    puVar3[8] = uVar10;
    puVar3[3] = uVar6;
    puVar3[2] = uVar2;
    puVar3[5] = uVar8;
    puVar3[4] = uVar7;
    uVar6 = *(undefined8 *)(lVar4 + 0x2e0);
    uVar2 = *(undefined8 *)(lVar4 + 0x2d8);
    uVar8 = *(undefined8 *)(lVar4 + 0x2f0);
    uVar7 = *(undefined8 *)(lVar4 + 0x2e8);
    uVar10 = *(undefined8 *)(lVar4 + 0x300);
    uVar9 = *(undefined8 *)(lVar4 + 0x2f8);
    puVar3[0x10] = *(undefined8 *)(lVar4 + 0x308);
    puVar3[0xd] = uVar8;
    puVar3[0xc] = uVar7;
    puVar3[0xf] = uVar10;
    puVar3[0xe] = uVar9;
    puVar3[0xb] = uVar6;
    puVar3[10] = uVar2;
    uVar2 = *(undefined8 *)(lVar4 + 0x318);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0x350) = lVar5;
    uVar2 = *(undefined8 *)(lVar4 + 0x318);
    pcVar1 = FUN_1005333c0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005333c0 | FUN_1005333c0 */

void FUN_1005333c0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005333c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005333cc | FUN_1005333cc */

void FUN_1005333cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_4;
  uVar1 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5[8];
  uVar3 = *param_5;
  uVar2 = param_5[3];
  uVar1 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  _swift_task_switch(FUN_10053340c,param_4,0);
  return;
}



/* Address: 0x10053340c | FUN_10053340c */

void FUN_10053340c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1d0) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x1a8);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1d8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100533550;
    isolation.str = *(char **)(unaff_x22 + 0x1a0);
    isolation.bridgeObject = pvVar7;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x1a8) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x1a8));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1005335b0,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100533550 | FUN_100533550 */

void FUN_100533550(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1d8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x1a8);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x1e0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x1a8);
    pcVar1 = FUN_100533928;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005335b0 | FUN_1005335b0 */

void FUN_1005335b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String function;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x1a8);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x168;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_10053389c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100fcefc0;
  FUN_1000f7830(&DAT_100fcefc0,&DAT_100c56d00);
  lVar10 = *(long *)(puVar3 + -8);
  lVar15 = *(long *)(lVar10 + 0x40);
  uVar7 = lVar15 + 0xf;
  uVar4 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_isCurrentExecutor(uVar11,0);
  if ((uVar11 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x1a8),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
  puVar5 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar11 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(uVar11,1,1,TVar6.unknown);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar10 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar12 = uVar9 + 0x70 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = lVar15 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100eddd50;
  _swift_allocObject(&DAT_100eddd50,uVar13 + 0x20,uVar9 | 7);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(puVar5 + 0x38) = uVar17;
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(puVar5 + 0x60) = uVar22;
  *(undefined8 *)(puVar5 + 0x58) = uVar21;
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar14;
  *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(puVar5 + 0x30) = uVar20;
  *(undefined8 *)(puVar5 + 0x28) = uVar19;
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar12,uVar7,puVar3);
  *(undefined8 *)((long)(puVar5 + uVar13) + 8) = uVar18;
  *(undefined8 *)(puVar5 + uVar13) = uVar16;
  *(undefined8 *)(puVar5 + uVar13 + 0x10) = uVar8;
  *(undefined8 *)((long)(puVar5 + uVar13 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar7);
  _swift_retain_n(uVar14,2);
  FUN_1000f8cac((undefined8 *)(unaff_x22 + 0xd8),unaff_x22 + 0x120,&DAT_100fce8e8,&DAT_100c55960);
  _swift_unknownObjectRetain(uVar16);
  FUN_1001037b4(uVar8,uVar1);
  FUN_1004e9c98(0,0,uVar11,&DAT_100c56d10,puVar5);
  _swift_release();
  _swift_task_dealloc(uVar11);
  (**(code **)(lVar10 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x10053389c | FUN_10053389c */

void FUN_10053389c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x70);
  if (lVar5 == 0) {
    puVar3 = *(undefined8 **)(lVar4 + 0x1a0);
    uVar6 = *(undefined8 *)(lVar4 + 0x170);
    uVar2 = *(undefined8 *)(lVar4 + 0x168);
    uVar8 = *(undefined8 *)(lVar4 + 0x180);
    uVar7 = *(undefined8 *)(lVar4 + 0x178);
    uVar10 = *(undefined8 *)(lVar4 + 400);
    uVar9 = *(undefined8 *)(lVar4 + 0x188);
    puVar3[6] = *(undefined8 *)(lVar4 + 0x198);
    puVar3[3] = uVar8;
    puVar3[2] = uVar7;
    puVar3[5] = uVar10;
    puVar3[4] = uVar9;
    puVar3[1] = uVar6;
    *puVar3 = uVar2;
    uVar2 = *(undefined8 *)(lVar4 + 0x1a8);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0x1e0) = lVar5;
    uVar2 = *(undefined8 *)(lVar4 + 0x1a8);
    pcVar1 = FUN_100533928;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100533928 | FUN_100533928 */

void FUN_100533928(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100533930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100533934 | FUN_100533934 */

void FUN_100533934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_11;
  *(undefined8 *)(unaff_x22 + 0x98) = param_10;
  *(undefined8 *)(unaff_x22 + 0x90) = param_9;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_8;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  _swift_task_switch(FUN_100533968,param_4,0);
  return;
}



/* Address: 0x100533968 | FUN_100533968 */

void FUN_100533968(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar7,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100533a6c;
  FUN_1005289d4(*(undefined8 *)(unaff_x22 + 0x60),uVar6,puVar2,0x293a5f28646e6573,
                &DAT_e800000000000000,FUN_10054cb94,unaff_x22 + 0x10,uVar4);
  return;
}



/* Address: 0x100533a6c | FUN_100533a6c */

void FUN_100533a6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000100533aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100533aa8 | FUN_100533aa8 */

void FUN_100533aa8(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_140 [8];
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [176];
  
  puVar1 = &DAT_100fcf0d8;
  local_130 = param_5;
  local_128 = param_4;
  local_120 = param_6;
  local_118 = param_7;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_140 + -extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            ((long)puVar9 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(puVar9,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar5 + 0xd0 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = lVar10 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede390;
  local_138 = (long)puVar9 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede390,uVar7 + 0x20,uVar5 | 7);
  uVar13 = param_3[0xd];
  uVar12 = param_3[0xc];
  uVar11 = param_3[0xe];
  *(undefined8 *)(puVar4 + 0xa0) = param_3[0xf];
  *(undefined8 *)(puVar4 + 0x98) = uVar11;
  uVar11 = param_3[0x10];
  uVar15 = param_3[0x13];
  uVar14 = param_3[0x12];
  *(undefined8 *)(puVar4 + 0xb0) = param_3[0x11];
  *(undefined8 *)(puVar4 + 0xa8) = uVar11;
  *(undefined8 *)(puVar4 + 0xc0) = uVar15;
  *(undefined8 *)(puVar4 + 0xb8) = uVar14;
  uVar15 = param_3[5];
  uVar14 = param_3[4];
  uVar11 = param_3[6];
  *(undefined8 *)(puVar4 + 0x60) = param_3[7];
  *(undefined8 *)(puVar4 + 0x58) = uVar11;
  uVar11 = param_3[8];
  uVar17 = param_3[0xb];
  uVar16 = param_3[10];
  *(undefined8 *)(puVar4 + 0x70) = param_3[9];
  *(undefined8 *)(puVar4 + 0x68) = uVar11;
  *(undefined8 *)(puVar4 + 0x80) = uVar17;
  *(undefined8 *)(puVar4 + 0x78) = uVar16;
  *(undefined8 *)(puVar4 + 0x90) = uVar13;
  *(undefined8 *)(puVar4 + 0x88) = uVar12;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 200) = param_3[0x14];
  *(undefined8 *)(puVar4 + 0x50) = uVar15;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar8,puVar9,puVar1);
  uVar13 = local_118;
  uVar12 = local_120;
  uVar11 = local_128;
  *(undefined8 *)(puVar4 + uVar7) = local_128;
  *(undefined8 *)((long)(puVar4 + uVar7) + 8) = local_130;
  *(undefined8 *)(puVar4 + uVar7 + 0x10) = local_120;
  *(undefined8 *)((long)(puVar4 + uVar7 + 0x10) + 8) = local_118;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_110,&DAT_100fcf0b8,&DAT_100c56fc0);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_138,&DAT_100c57018,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100533d4c | FUN_100533d4c */

void FUN_100533d4c(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcef98;
  local_c8 = param_5;
  uStack_c0 = param_4;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_d0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar9 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar10 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede2a0;
  local_d0 = lVar9 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede2a0,uVar8 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = param_3[4];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar9,puVar1);
  uVar13 = uStack_b0;
  uVar12 = local_b8;
  uVar11 = uStack_c0;
  *(undefined8 *)(puVar4 + uVar8) = uStack_c0;
  *(undefined8 *)((long)(puVar4 + uVar8) + 8) = local_c8;
  *(undefined8 *)(puVar4 + uVar8 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar4 + uVar8 + 0x10) + 8) = uStack_b0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_a8);
  FUN_10000ca28(&local_90,auStack_a8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_d0,&DAT_100c56f80,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100533f98 | FUN_100533f98 */

void FUN_100533f98(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  puVar1 = &DAT_100fcf088;
  local_c0 = param_5;
  uStack_b8 = param_4;
  local_b0 = param_6;
  uStack_a8 = param_7;
  FUN_1000f7830(&DAT_100fcf088,&DAT_100c56f18);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_d0 + -extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            ((long)puVar9 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(puVar9,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x68 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar10 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede200;
  local_c8 = (long)puVar9 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede200,uVar8 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  *(undefined8 *)(puVar4 + 0x58) = uVar12;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,puVar9,puVar1);
  uVar13 = uStack_a8;
  uVar12 = local_b0;
  uVar11 = uStack_b8;
  *(undefined8 *)(puVar4 + uVar8) = uStack_b8;
  *(undefined8 *)((long)(puVar4 + uVar8) + 8) = local_c0;
  *(undefined8 *)(puVar4 + uVar8 + 0x10) = local_b0;
  *(undefined8 *)((long)(puVar4 + uVar8 + 0x10) + 8) = uStack_a8;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_a0,&DAT_100fce8e0,&DAT_100c558b0);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_c8,&DAT_100c56f40,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1005341d8 | FUN_1005341d8 */

void FUN_1005341d8(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcf070;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcf070,&DAT_100c56ed0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede160;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede160,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054c088(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56ef8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100534440 | FUN_100534440 */

void FUN_100534440(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcf050;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcf050,&DAT_100c56e80);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede0c0;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede0c0,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054bdac(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56ea8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1005346a8 | FUN_1005346a8 */

void FUN_1005346a8(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcf030;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcf030,&DAT_100c56e30);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede020;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100ede020,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054bb70(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56e58,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100534910 | FUN_100534910 */

void FUN_100534910(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcef98;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddf80;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100eddf80,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054b974(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56e08,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100534b78 | FUN_100534b78 */

void FUN_100534b78(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcf000;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcf000,&DAT_100c56da0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddee0;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100eddee0,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054b738(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56dc8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100534de0 | FUN_100534de0 */

void FUN_100534de0(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcefe0;
  local_d8 = param_5;
  uStack_d0 = param_4;
  local_c8 = param_6;
  uStack_c0 = param_7;
  FUN_1000f7830(&DAT_100fcefe0,&DAT_100c56d50);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_e0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  uStack_98 = param_3[6];
  local_a0 = param_3[5];
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100edde40;
  local_e0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100edde40,uVar10 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = param_3[6];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_c0;
  uVar12 = local_c8;
  uVar11 = uStack_d0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_d0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_d8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_c8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_c0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_b8);
  FUN_10000ca28(&local_90,auStack_b8);
  FUN_10054b4fc(&local_a0,auStack_b8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_e0,&DAT_100c56d78,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100535048 | FUN_100535048 */

void FUN_100535048(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [72];
  
  puVar1 = &DAT_100fcefc0;
  local_c8 = param_5;
  uStack_c0 = param_4;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1000f7830(&DAT_100fcefc0,&DAT_100c56d00);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_d0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x70 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddda0;
  local_d0 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100eddda0,uVar10 + 0x20,uVar5 | 7);
  uVar13 = param_3[1];
  uVar12 = *param_3;
  uVar11 = param_3[2];
  *(undefined8 *)(puVar4 + 0x40) = param_3[3];
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  uVar11 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x60) = uVar15;
  *(undefined8 *)(puVar4 + 0x58) = uVar14;
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x68) = param_3[8];
  *(undefined8 *)(puVar4 + 0x30) = uVar13;
  *(undefined8 *)(puVar4 + 0x28) = uVar12;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = uStack_b0;
  uVar12 = local_b8;
  uVar11 = uStack_c0;
  *(undefined8 *)(puVar4 + uVar10) = uStack_c0;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_c8;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_b0;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_a8,&DAT_100fce8e8,&DAT_100c55960);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_d0,&DAT_100c56d28,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100535290 | FUN_100535290 */

void FUN_100535290(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fcef98;
  local_c8 = param_5;
  uStack_c0 = param_4;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_d0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar9 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x51 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar10 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddd00;
  local_d0 = lVar9 - extraout_x8_00;
  _swift_allocObject(&DAT_100eddd00,uVar8 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = *(undefined8 *)((long)param_3 + 0x19);
  *(undefined8 *)(puVar4 + 0x49) = *(undefined8 *)((long)param_3 + 0x21);
  *(undefined8 *)(puVar4 + 0x41) = uVar11;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar9,puVar1);
  uVar13 = uStack_b0;
  uVar12 = local_b8;
  uVar11 = uStack_c0;
  *(undefined8 *)(puVar4 + uVar8) = uStack_c0;
  *(undefined8 *)((long)(puVar4 + uVar8) + 8) = local_c8;
  *(undefined8 *)(puVar4 + uVar8 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar4 + uVar8 + 0x10) + 8) = uStack_b0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_a8);
  FUN_10000ca28(&local_90,auStack_a8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_d0,&DAT_100c56cd8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1005354dc | FUN_1005354dc */

void FUN_1005354dc(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_110 [8];
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [128];
  
  puVar1 = &DAT_100fcef78;
  local_100 = param_5;
  uStack_f8 = param_4;
  local_f0 = param_6;
  uStack_e8 = param_7;
  FUN_1000f7830(&DAT_100fcef78,&DAT_100c56c60);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_110 + -extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            ((long)puVar8 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(puVar8,param_1,puVar1);
  puVar2 = &DAT_100fce8b8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0xa0 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddc60;
  local_108 = (long)puVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100eddc60,uVar10 + 0x20,uVar5 | 7);
  uVar11 = param_3[8];
  uVar13 = param_3[0xb];
  uVar12 = param_3[10];
  *(undefined8 *)(puVar4 + 0x70) = param_3[9];
  *(undefined8 *)(puVar4 + 0x68) = uVar11;
  *(undefined8 *)(puVar4 + 0x80) = uVar13;
  *(undefined8 *)(puVar4 + 0x78) = uVar12;
  uVar11 = param_3[0xc];
  *(undefined8 *)(puVar4 + 0x90) = param_3[0xd];
  *(undefined8 *)(puVar4 + 0x88) = uVar11;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x98) = param_3[0xe];
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  *(undefined8 *)(puVar4 + 0x58) = uVar12;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,puVar8,puVar1);
  uVar13 = uStack_e8;
  uVar12 = local_f0;
  uVar11 = uStack_f8;
  *(undefined8 *)(puVar4 + uVar10) = uStack_f8;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_100;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_f0;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_e8;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_e0,&DAT_100fce908,&DAT_100c55a40);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_108,&DAT_100c56c88,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100535738 | FUN_100535738 */

void FUN_100535738(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CheckedContinuation CVar7;
  long lVar8;
  undefined *puVar9;
  TaskPriority TVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a8 = (undefined *)param_3;
  local_98 = param_1;
  local_80 = param_5;
  uStack_78 = param_4;
  local_70 = param_6;
  uStack_68 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar7 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar17 = *(long *)(CVar7.unknown + -8);
  lVar13 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_c0 + -extraout_x8;
  lVar8 = 0;
  local_90 = param_9;
  uStack_88 = param_8;
  FUN_1004e3b34(0,param_8,param_9);
  lVar12 = *(long *)(lVar8 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  local_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar18 - extraout_x8_00;
  puVar9 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,400,param_2,0);
  }
  TVar10 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(lVar8 - extraout_x8_01,1,1,TVar10.unknown);
  lVar3 = local_a0;
  local_b0 = lVar8;
  (**(code **)(lVar12 + 0x10))(lVar8,local_a8,local_a0);
  (**(code **)(lVar17 + 0x10))(puVar18,local_98,CVar7.unknown);
  puVar9 = &DAT_100fce8b8;
  FUN_1003b6598();
  bVar1 = *(byte *)(lVar12 + 0x50);
  uVar19 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar17 + 0x50);
  uVar15 = lVar14 + (ulong)bVar2 + uVar19 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar16 = lVar13 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar11 = &DAT_100ede2f0;
  local_b8 = puVar18;
  local_a8 = CVar7.unknown;
  local_98 = lVar8 - extraout_x8_01;
  _swift_allocObject(&DAT_100ede2f0,uVar16 + 0x20,bVar1 | bVar2 | 7);
  *(ulong *)(puVar11 + 0x10) = param_2;
  *(undefined **)(puVar11 + 0x18) = puVar9;
  *(undefined8 *)(puVar11 + 0x20) = uStack_88;
  *(undefined8 *)(puVar11 + 0x28) = local_90;
  *(ulong *)(puVar11 + 0x30) = param_2;
  (**(code **)(lVar12 + 0x20))(puVar11 + uVar19,local_b0,lVar3);
  (**(code **)(lVar17 + 0x20))(puVar11 + uVar15,local_b8,local_a8);
  uVar6 = uStack_68;
  uVar5 = local_70;
  uVar4 = uStack_78;
  *(undefined8 *)(puVar11 + uVar16) = uStack_78;
  *(undefined8 *)((long)(puVar11 + uVar16) + 8) = local_80;
  *(undefined8 *)(puVar11 + uVar16 + 0x10) = local_70;
  *(undefined8 *)((long)(puVar11 + uVar16 + 0x10) + 8) = uStack_68;
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar4);
  FUN_1001037b4(uVar5,uVar6);
  FUN_1004e9c98(0,0,local_98,&DAT_100c56fb8,puVar11);
  _swift_release();
  return;
}



/* Address: 0x100535a2c | FUN_100535a2c */

void FUN_100535a2c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fcf0e0;
  FUN_1000f7830(&DAT_100fcf0e0,&DAT_100c57010);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_100535abc,in_x3,0);
  return;
}



/* Address: 0x100535abc | FUN_100535abc */

void FUN_100535abc(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fcf0d8;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fcf0e0,&DAT_100c57010);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ede368;
  _swift_allocObject(&DAT_100ede368,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fcf0e0,&DAT_100c57010);
  _swift_beginAccess(lVar15 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x128);
  *(undefined8 *)(lVar15 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054d1d4,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x128) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100535c94;
                    /* WARNING: Could not recover jumptable at 0x000100535c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100535c94 | FUN_100535c94 */

void FUN_100535c94(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100535d08,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100535d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100535d08 | FUN_100535d08 */

void FUN_100535d08(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined1 *)(unaff_x22 + 200);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x48) + 0x128,unaff_x22 + 0x28,0x21,0);
  FUN_1005064d4(lVar2,uVar3,uVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  if (lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xc0));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_100004550(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x40),uVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100535dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100535dc4 | FUN_100535dc4 */

void FUN_100535dc4(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcefa0;
  FUN_1000f7830(&DAT_100fcefa0,&DAT_100c56cd0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100535e68,in_x3,0);
  return;
}



/* Address: 0x100535e68 | FUN_100535e68 */

void FUN_100535e68(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcefa0,&DAT_100c56cd0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ede278;
  _swift_allocObject(&DAT_100ede278,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcefa0,&DAT_100c56cd0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(thunk_FUN_10054affc,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x000100536020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100536024 | FUN_100536024 */

void FUN_100536024(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100536648,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100536094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100536098 | FUN_100536098 */

void FUN_100536098(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fcf090;
  FUN_1000f7830(&DAT_100fcf090,&DAT_100c56f38);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_100536128,in_x3,0);
  return;
}



/* Address: 0x100536128 | FUN_100536128 */

void FUN_100536128(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fcf088;
  FUN_1000f7830(&DAT_100fcf088,&DAT_100c56f18);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fcf090,&DAT_100c56f38);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ede1d8;
  _swift_allocObject(&DAT_100ede1d8,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fcf090,&DAT_100c56f38);
  _swift_beginAccess(lVar15 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x128);
  *(undefined8 *)(lVar15 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054c534,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x128) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100536300;
                    /* WARNING: Could not recover jumptable at 0x0001005362fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100536300 | FUN_100536300 */

void FUN_100536300(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100535d08,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100536370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100536374 | FUN_100536374 */

void FUN_100536374(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcf078;
  FUN_1000f7830(&DAT_100fcf078,&DAT_100c56ef0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100536418,in_x3,0);
  return;
}



/* Address: 0x100536418 | FUN_100536418 */

void FUN_100536418(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcf070;
  FUN_1000f7830(&DAT_100fcf070,&DAT_100c56ed0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcf078,&DAT_100c56ef0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ede138;
  _swift_allocObject(&DAT_100ede138,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcf078,&DAT_100c56ef0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054c1f8,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_1005365d4;
                    /* WARNING: Could not recover jumptable at 0x0001005365d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}


