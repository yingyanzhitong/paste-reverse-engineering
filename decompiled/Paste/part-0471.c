/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10059146c | FUN_10059146c */

void FUN_10059146c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x3a0));
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2020,&DAT_100c5efe0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x398));
                    /* WARNING: Could not recover jumptable at 0x0001005914bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005914c0 | FUN_1005914c0 */

void FUN_1005914c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x218) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1e8) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x1f0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  _swift_task_switch(FUN_10059152c);
  return;
}



/* Address: 0x10059152c | FUN_10059152c */

/* WARNING: Removing unreachable block (ram,0x00010059174c) */
/* WARNING: Removing unreachable block (ram,0x000100591594) */

void FUN_10059152c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined *puVar8;
  UUID UVar9;
  long lVar10;
  long *plVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x1e0) + 200) != 0) {
    puVar8 = &DAT_100c5eff0;
    _swift_getKeyPath(&DAT_100c5eff0);
    FUN_100598c88();
    lVar10 = *(long *)(unaff_x22 + 0x1f0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x218);
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1d0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_release(puVar8);
    uStack_89 = (undefined1)puVar1[1];
    uStack_88 = (undefined7)((ulong)puVar1[1] >> 8);
    local_91 = (undefined1)*puVar1;
    uStack_90 = (undefined7)((ulong)*puVar1 >> 8);
    uStack_79 = (undefined1)puVar1[3];
    uStack_78 = (undefined7)((ulong)puVar1[3] >> 8);
    local_81 = (undefined1)puVar1[2];
    uStack_80 = (undefined7)((ulong)puVar1[2] >> 8);
    uVar13 = puVar1[5];
    uStack_69 = (undefined1)uVar13;
    local_71 = (undefined1)puVar1[4];
    uStack_70 = (undefined7)((ulong)puVar1[4] >> 8);
    *(ulong *)(unaff_x22 + 0xf1) = CONCAT17(uStack_89,uStack_90);
    *(ulong *)(unaff_x22 + 0xe9) = CONCAT17(local_91,uStack_98);
    *(ulong *)(unaff_x22 + 0x101) = CONCAT17(uStack_79,uStack_80);
    *(ulong *)(unaff_x22 + 0xf9) = CONCAT17(local_81,uStack_88);
    *(ulong *)(unaff_x22 + 0x111) = CONCAT17(uStack_69,uStack_70);
    *(ulong *)(unaff_x22 + 0x109) = CONCAT17(local_71,uStack_78);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar12;
    *(undefined1 *)(unaff_x22 + 0xe8) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
    *(undefined1 *)(unaff_x22 + 0x98) = uVar6;
    *(undefined8 *)(unaff_x22 + 200) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
    *(ulong *)(unaff_x22 + 0xc1) = CONCAT17(uStack_69,uStack_70);
    *(ulong *)(unaff_x22 + 0xb9) = CONCAT17(local_71,uStack_78);
    *(ulong *)(unaff_x22 + 0xb1) = CONCAT17(uStack_79,uStack_80);
    *(ulong *)(unaff_x22 + 0xa9) = CONCAT17(local_81,uStack_88);
    *(ulong *)(unaff_x22 + 0xa1) = CONCAT17(uStack_89,uStack_90);
    *(ulong *)(unaff_x22 + 0x99) = CONCAT17(local_91,uStack_98);
    _swift_bridgeObjectRetain(uVar12);
    FUN_100551714(puVar1,unaff_x22 + 0x178);
    _swift_bridgeObjectRetain(uVar5);
    FUN_10055177c(unaff_x22 + 0xd8,unaff_x22 + 0x128);
    FUN_1005517b0(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    bVar7 = *(byte *)(unaff_x22 + 0xe8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
    UVar9 = Foundation::UUID::init();
    SVar19 = Foundation::UUID::get_uuidString(UVar9);
    (**(code **)(lVar10 + 8))(uVar3,uVar4);
    *(String *)(unaff_x22 + 0x10) = SVar19;
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad450;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    *(ulong *)(unaff_x22 + 0x48) = (ulong)bVar7;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
    lVar10 = unaff_x22 + 0x10;
    FUN_10058f08c();
    *(long *)(unaff_x22 + 0x200) = lVar10;
    plVar11 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x208) = plVar11;
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100591810;
    Swift::Task::get_value((undefined *)(unaff_x22 + 0x1a8));
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x000100591790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591810 | FUN_100591810 */

void FUN_100591810(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x208));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10059186c;
  }
  else {
    pcVar1 = FUN_1005918e0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x1e0),0);
  return;
}



/* Address: 0x10059186c | FUN_10059186c */

void FUN_10059186c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2028,&DAT_100c5f010);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005918dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar2,uVar3);
  return;
}



/* Address: 0x1005918e0 | FUN_1005918e0 */

void FUN_1005918e0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x200));
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2028,&DAT_100c5f010);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x000100591930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591934 | FUN_100591934 */

void FUN_100591934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 400) = param_7;
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x180) = param_5;
  *(undefined8 *)(unaff_x22 + 0x188) = param_6;
  *(undefined8 *)(unaff_x22 + 0x170) = param_3;
  *(undefined8 *)(unaff_x22 + 0x178) = param_4;
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  *(undefined8 *)(unaff_x22 + 0x168) = param_2;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1a0) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x1a8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
  _swift_task_switch(FUN_1005919a0);
  return;
}



/* Address: 0x1005919a0 | FUN_1005919a0 */

/* WARNING: Removing unreachable block (ram,0x000100591b90) */
/* WARNING: Removing unreachable block (ram,0x000100591a08) */

void FUN_1005919a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  UUID UVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x198) + 200) != 0) {
    puVar6 = &DAT_100c5eff0;
    _swift_getKeyPath(&DAT_100c5eff0);
    FUN_100598c88();
    lVar8 = *(long *)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar12 = *(undefined8 *)(unaff_x22 + 400);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
    _swift_release(puVar6);
    *(undefined8 *)(unaff_x22 + 200) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
    *(undefined1 *)(unaff_x22 + 0xd8) = 1;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
    *(undefined1 *)(unaff_x22 + 0x98) = 1;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar1);
    FUN_100551ce0(unaff_x22 + 200,unaff_x22 + 0x108);
    FUN_100551d14(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    bVar5 = *(byte *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
    UVar7 = Foundation::UUID::init();
    SVar15 = Foundation::UUID::get_uuidString(UVar7);
    (**(code **)(lVar8 + 8))(uVar3,uVar4);
    *(String *)(unaff_x22 + 0x10) = SVar15;
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad450;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
    *(ulong *)(unaff_x22 + 0x48) = (ulong)bVar5 | 0x8000000000000000;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
    lVar8 = unaff_x22 + 0x10;
    FUN_10058f08c();
    *(long *)(unaff_x22 + 0x1b8) = lVar8;
    plVar9 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c0) = plVar9;
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100591c54;
    Swift::Task::get_value((undefined *)(unaff_x22 + 0x148));
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x000100591bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591c54 | FUN_100591c54 */

void FUN_100591c54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100591cb0;
  }
  else {
    pcVar1 = FUN_100591d24;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x198),0);
  return;
}



/* Address: 0x100591cb0 | FUN_100591cb0 */

void FUN_100591cb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2028,&DAT_100c5f010);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x148);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100591d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar2,uVar3);
  return;
}



/* Address: 0x100591d24 | FUN_100591d24 */

void FUN_100591d24(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b8));
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2028,&DAT_100c5f010);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x000100591d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591d78 | FUN_100591d78 */

void FUN_100591d78(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined1 *)(unaff_x22 + 0x59) = param_1;
  _swift_task_switch(FUN_100591d98);
  return;
}



/* Address: 0x100591d98 | FUN_100591d98 */

void FUN_100591d98(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  uVar6 = *puVar1;
  uVar5 = puVar1[3];
  uVar4 = puVar1[2];
  *(undefined8 *)(unaff_x22 + 0x40) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000015;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x8000000100dada90;
  *(undefined1 *)(unaff_x22 + 0x20) = *(undefined1 *)(unaff_x22 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x90));
  FUN_10052797c(puVar1,unaff_x22 + 0x60);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100591e58;
  FUN_10058e054((undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100591e58 | FUN_100591e58 */

void FUN_100591e58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100591eb4;
  }
  else {
    pcVar1 = FUN_100591ef8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xa0),0);
  return;
}



/* Address: 0x100591eb4 | FUN_100591eb4 */

void FUN_100591eb4(void)

{
  long unaff_x22;
  
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2030,&DAT_100c5f030);
                    /* WARNING: Could not recover jumptable at 0x000100591ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591ef8 | FUN_100591ef8 */

void FUN_100591ef8(void)

{
  long unaff_x22;
  
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2030,&DAT_100c5f030);
                    /* WARNING: Could not recover jumptable at 0x000100591f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591f3c | FUN_100591f3c */

void FUN_100591f3c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(long *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined1 *)(unaff_x22 + 0x31) = param_1;
  lVar2 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100591fa0);
  return;
}



/* Address: 0x100591fa0 | FUN_100591fa0 */

/* WARNING: Removing unreachable block (ram,0x000100591ff8) */

void FUN_100591fa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x48),uVar4);
  FUN_1005259a8(unaff_x22 + 0x10,uVar2,uVar4,uVar1,uVar3);
  plVar5 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10059206c;
  FUN_100591d78(*(undefined1 *)(unaff_x22 + 0x31),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),unaff_x22 + 0x10);
  return;
}



/* Address: 0x10059206c | FUN_10059206c */

void FUN_10059206c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005920c8;
  }
  else {
    pcVar1 = FUN_100592108;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x68),0);
  return;
}



/* Address: 0x1005920c8 | FUN_1005920c8 */

void FUN_1005920c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1004e15f8(unaff_x22 + 0x10);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100592104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100592108 | FUN_100592108 */

void FUN_100592108(void)

{
  long unaff_x22;
  
  FUN_1004e15f8(unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100592140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100592144 | FUN_100592144 */

void FUN_100592144(void)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  _swift_task_switch(FUN_1005921a4);
  return;
}



/* Address: 0x1005921a4 | FUN_1005921a4 */

/* WARNING: Removing unreachable block (ram,0x0001005922d0) */
/* WARNING: Removing unreachable block (ram,0x0001005921fc) */

void FUN_1005921a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  UUID UVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  String SVar7;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x48) + 200) != 0) {
    puVar3 = &DAT_100c5f048;
    _swift_getKeyPath(&DAT_100c5f048);
    FUN_100598e04();
    lVar5 = *(long *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_release(puVar3);
    UVar4 = Foundation::UUID::init();
    SVar7 = Foundation::UUID::get_uuidString(UVar4);
    *(void **)(unaff_x22 + 0x68) = SVar7.bridgeObject;
    (**(code **)(lVar5 + 8))(uVar1,uVar2);
    *(String *)(unaff_x22 + 0x10) = SVar7;
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0x696c2f73746f6f72;
    *(undefined8 *)(unaff_x22 + 0x30) = 0xea00000000007473;
    lVar5 = unaff_x22 + 0x10;
    FUN_10058f4a0();
    *(long *)(unaff_x22 + 0x70) = lVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10059237c;
    Swift::Task::get_value((undefined *)(unaff_x22 + 0x38));
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100592300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059237c | FUN_10059237c */

void FUN_10059237c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005923d8;
  }
  else {
    pcVar1 = FUN_10059242c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x48),0);
  return;
}



/* Address: 0x1005923d8 | FUN_1005923d8 */

void FUN_1005923d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100592428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x10059242c | FUN_10059242c */

void FUN_10059242c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010059246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100592470 | FUN_100592470 */

void FUN_100592470(undefined8 param_1)

{
  OutputFormatting OVar1;
  ulong uVar2;
  UUID UVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x478) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x470) = param_1;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x480) = OVar1.unknown;
  lVar4 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x488) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x490) = uVar2;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x498) = UVar3.unknown;
  lVar4 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x4a0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4a8) = uVar2;
  _swift_task_switch(FUN_1005924fc);
  return;
}



/* Address: 0x1005924fc | FUN_1005924fc */

void FUN_1005924fc(void)

{
  undefined *puVar1;
  UnownedSerialExecutor UVar2;
  long *plVar3;
  UUID UVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x478) + 200);
  *(long *)(unaff_x22 + 0x4b0) = lVar6;
  if (lVar6 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x478) + 0xd0);
    *(long *)(unaff_x22 + 0x4b8) = lVar9;
    lVar5 = lVar6;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x4c0) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x4c8) = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar6);
    UVar2 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1005927f8,UVar2.unknown,uVar10);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x470);
  lVar6 = *(long *)(lVar5 + 0x10);
  *(long *)(unaff_x22 + 0x4d8) = lVar6;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    *(undefined **)(unaff_x22 + 0x450) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined **)(unaff_x22 + 0x4f8) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar10;
    uVar8 = *(undefined8 *)(lVar5 + 0x38);
    uVar10 = *(undefined8 *)(lVar5 + 0x30);
    uVar12 = *(undefined8 *)(lVar5 + 0x48);
    uVar11 = *(undefined8 *)(lVar5 + 0x40);
    uVar13 = *(undefined8 *)(lVar5 + 0x58);
    uVar7 = *(undefined8 *)(lVar5 + 0x50);
    uVar14 = *(undefined8 *)(lVar5 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar5 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x1b9) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar8;
    *(undefined8 *)(unaff_x22 + 400) = uVar10;
    uVar10 = *(undefined8 *)(unaff_x22 + 400);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (-1 < *(char *)(unaff_x22 + 0x1c8)) {
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x150) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
      *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
      *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x1d0) = uVar10;
      uVar7 = *(undefined8 *)(lVar5 + 0x48);
      uVar12 = *(undefined8 *)(lVar5 + 0x40);
      uVar8 = *(undefined8 *)(lVar5 + 0x58);
      uVar10 = *(undefined8 *)(lVar5 + 0x50);
      uVar11 = *(undefined8 *)(lVar5 + 0x59);
      uVar14 = *(undefined8 *)(lVar5 + 0x38);
      uVar13 = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar5 + 0x61);
      *(undefined8 *)(unaff_x22 + 0x209) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x1f8) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x1f0) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x200) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x1e8) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x1e0) = uVar13;
      *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
      FUN_1000f8cac(unaff_x22 + 0x1d0,unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268);
      plVar3 = (long *)0x7d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x500) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100592de8;
      FUN_100594580(plVar3,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x380) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x390) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x398) = uVar12;
    *(char *)(unaff_x22 + 0x3a0) = (char)uVar7;
    _swift_bridgeObjectRetain();
    FUN_10045b2bc(uVar10,uVar11,uVar8,uVar12,uVar7);
    plVar3 = (long *)0x4d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x518) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100593400;
    FUN_100597890(plVar3,unaff_x22 + 0x370);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4a8);
  lVar6 = *(long *)(unaff_x22 + 0x4a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x498);
  UVar4 = Foundation::UUID::init();
  SVar15 = Foundation::UUID::get_uuidString(UVar4);
  (**(code **)(lVar6 + 8))(uVar8,uVar10);
  *(String *)(unaff_x22 + 0x270) = SVar15;
  *(undefined1 *)(unaff_x22 + 0x280) = 0;
  *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100daddf0;
  *(undefined8 *)(unaff_x22 + 0x298) = 0;
  *(undefined8 *)(unaff_x22 + 0x2a0) = 1;
  *(undefined2 *)(unaff_x22 + 0x2a8) = 0x100;
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4e0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100592d34;
  FUN_10058d7e8(plVar3,unaff_x22 + 0x270);
  return;
}



/* Address: 0x1005927f8 | FUN_1005927f8 */

void FUN_1005927f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x478);
  (**(code **)(unaff_x22 + 0x4c8))(uVar1,*(undefined8 *)(unaff_x22 + 0x4b8));
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100592850,uVar2,0);
  return;
}



/* Address: 0x100592850 | FUN_100592850 */

void FUN_100592850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  UUID UVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  
  lVar13 = *(long *)(unaff_x22 + 0x4d0);
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x418,0);
  FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x3a8);
  uVar8 = *(ulong *)(unaff_x22 + 0x3c0);
  lVar12 = *(long *)(unaff_x22 + 0x3c8);
  FUN_100004640(unaff_x22 + 0x3a8,uVar8);
  (**(code **)(lVar12 + 0x70))(uVar8,lVar12);
  FUN_100004594(unaff_x22 + 0x3a8);
  if ((uVar8 & 0xff) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4d0);
    lVar15 = *(long *)(unaff_x22 + 0x470);
    FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x3d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 1000);
    lVar12 = *(long *)(unaff_x22 + 0x3f0);
    FUN_100004640(unaff_x22 + 0x3d0,uVar11);
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0x60;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x657a6973;
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
    SVar20.bridgeObject = pcVar6;
    SVar20.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar20);
    *(undefined8 *)(unaff_x22 + 0x448) = *(undefined8 *)(lVar15 + 0x10);
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar21.bridgeObject = pvVar7;
    SVar21.str = pcVar6;
    Swift::String::append(SVar20,SVar21);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    FUN_1000fb4c4(puVar1 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar1,0x20,7);
    puVar14 = (undefined1 *)(unaff_x22 + 0x10);
    *puVar14 = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100daddd0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x6142656c646e6168;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xef293a5f28686374;
    *(undefined1 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x2a8;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100daddd0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x6142656c646e6168;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xef293a5f28686374;
    *(undefined8 *)(unaff_x22 + 200) = 0x2a8;
    FUN_1004eaa00(puVar14,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar12 + 0x28))(puVar14,uVar11,lVar12);
    _swift_release(uVar9);
    FUN_1004eaa3c(puVar14);
    FUN_100004594(unaff_x22 + 0x3d0);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x4d0));
  }
  lVar13 = *(long *)(unaff_x22 + 0x470);
  lVar12 = *(long *)(lVar13 + 0x10);
  *(long *)(unaff_x22 + 0x4d8) = lVar12;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar12 != 0) {
    *(undefined **)(unaff_x22 + 0x450) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined **)(unaff_x22 + 0x4f8) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
    uVar9 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar9;
    uVar11 = *(undefined8 *)(lVar13 + 0x38);
    uVar9 = *(undefined8 *)(lVar13 + 0x30);
    uVar17 = *(undefined8 *)(lVar13 + 0x48);
    uVar16 = *(undefined8 *)(lVar13 + 0x40);
    uVar18 = *(undefined8 *)(lVar13 + 0x58);
    uVar10 = *(undefined8 *)(lVar13 + 0x50);
    uVar19 = *(undefined8 *)(lVar13 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar13 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x1b9) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar11;
    *(undefined8 *)(unaff_x22 + 400) = uVar9;
    uVar9 = *(undefined8 *)(unaff_x22 + 400);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (-1 < *(char *)(unaff_x22 + 0x1c8)) {
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x158) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x160) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
      *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
      *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
      uVar9 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar13 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
      uVar10 = *(undefined8 *)(lVar13 + 0x48);
      uVar17 = *(undefined8 *)(lVar13 + 0x40);
      uVar11 = *(undefined8 *)(lVar13 + 0x58);
      uVar9 = *(undefined8 *)(lVar13 + 0x50);
      uVar16 = *(undefined8 *)(lVar13 + 0x59);
      uVar19 = *(undefined8 *)(lVar13 + 0x38);
      uVar18 = *(undefined8 *)(lVar13 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar13 + 0x61);
      *(undefined8 *)(unaff_x22 + 0x209) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x1f8) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x1f0) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x200) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x1e8) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x1e0) = uVar18;
      *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
      FUN_1000f8cac(unaff_x22 + 0x1d0,unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268);
      plVar3 = (long *)0x7d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x500) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100592de8;
      FUN_100594580(plVar3,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x380) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x390) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x398) = uVar17;
    *(char *)(unaff_x22 + 0x3a0) = (char)uVar10;
    _swift_bridgeObjectRetain();
    FUN_10045b2bc(uVar9,uVar16,uVar11,uVar17,uVar10);
    plVar3 = (long *)0x4d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x518) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100593400;
    FUN_100597890(plVar3,unaff_x22 + 0x370);
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x4a8);
  lVar12 = *(long *)(unaff_x22 + 0x4a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x498);
  UVar4 = Foundation::UUID::init();
  SVar20 = Foundation::UUID::get_uuidString(UVar4);
  (**(code **)(lVar12 + 8))(uVar11,uVar9);
  *(String *)(unaff_x22 + 0x270) = SVar20;
  *(undefined1 *)(unaff_x22 + 0x280) = 0;
  *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100daddf0;
  *(undefined8 *)(unaff_x22 + 0x298) = 0;
  *(undefined8 *)(unaff_x22 + 0x2a0) = 1;
  *(undefined2 *)(unaff_x22 + 0x2a8) = 0x100;
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4e0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100592d34;
  FUN_10058d7e8(plVar3,unaff_x22 + 0x270);
  return;
}



/* Address: 0x100592d34 | FUN_100592d34 */

void FUN_100592d34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100592d90;
  }
  else {
    pcVar1 = FUN_1005939e0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x478),0);
  return;
}



/* Address: 0x100592d90 | FUN_100592d90 */

void FUN_100592d90(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_1000fb4c4(unaff_x22 + 0x270,&DAT_100fcb3e0,&DAT_100c50230);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x490);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100592de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100592de8 | FUN_100592de8 */

void FUN_100592de8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x508) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x500));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100592e44;
  }
  else {
    pcVar1 = FUN_100593a38;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x478),0);
  return;
}



/* Address: 0x100592e44 | FUN_100592e44 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005930a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100592e44(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  JSONEncoder *pJVar4;
  OutputFormatting OVar5;
  OutputFormatting OVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  Data DVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  Data DVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long unaff_x22;
  OutputFormatting OVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x180);
  if ((~(uint)*(undefined8 *)(unaff_x22 + 0x300) & 0xff) == 0) {
    FUN_10059f220(puVar1);
    uVar15 = *(ulong *)(unaff_x22 + 0x4f8);
  }
  else {
    puVar2 = (undefined8 *)(unaff_x22 + 0x2b0);
    uVar16 = *(ulong *)(unaff_x22 + 0x4f8);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x2f8);
    *puVar2 = *(undefined8 *)(unaff_x22 + 0x2f0);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x300);
    *(undefined2 *)(unaff_x22 + 0x2e8) = *(undefined2 *)(unaff_x22 + 0x328);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x310);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x308);
    *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 800);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x318);
    FUN_1000f8cac(puVar2,unaff_x22 + 0x330,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar15 = *(ulong *)(unaff_x22 + 0x4f8);
    uVar13 = uVar15;
    if ((uVar16 & 1) == 0) {
      uVar13 = 0;
      FUN_1004a4e58(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
    }
    uVar16 = *(ulong *)(uVar13 + 0x10);
    uVar15 = uVar13;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar16) {
      uVar15 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_1004a4e58(uVar15,uVar16 + 1,1,uVar13);
    }
    *(ulong *)(uVar15 + 0x10) = uVar16 + 1;
    lVar20 = uVar15 + uVar16 * 0x40;
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar22 = *puVar2;
    uVar25 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2da);
    *(undefined8 *)(lVar20 + 0x52) = *(undefined8 *)(unaff_x22 + 0x2e2);
    *(undefined8 *)(lVar20 + 0x4a) = uVar27;
    *(undefined8 *)(lVar20 + 0x38) = uVar25;
    *(undefined8 *)(lVar20 + 0x30) = uVar24;
    *(undefined8 *)(lVar20 + 0x48) = uVar26;
    *(undefined8 *)(lVar20 + 0x40) = uVar18;
    *(undefined8 *)(lVar20 + 0x28) = uVar23;
    *(undefined8 *)(lVar20 + 0x20) = uVar22;
    FUN_10059f220(puVar1);
    FUN_1000fb4c4(unaff_x22 + 0x2f0,&DAT_100fd2528,&DAT_100c60010);
    *(ulong *)(unaff_x22 + 0x450) = uVar15;
  }
  lVar19 = *(long *)(unaff_x22 + 0x508);
  *(ulong *)(unaff_x22 + 0x510) = uVar15;
  lVar20 = *(long *)(unaff_x22 + 0x4f0) + 1;
  if (lVar20 == *(long *)(unaff_x22 + 0x4d8)) {
    if (*(long *)(uVar15 + 0x10) == 0) {
      _swift_bridgeObjectRelease(uVar15);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x490);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
      _swift_task_dealloc(uVar22);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      OVar21.unknown = *(undefined **)(unaff_x22 + 0x490);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x480);
      pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar4 = Foundation::JSONEncoder::init(pJVar4);
      *(JSONEncoder **)(unaff_x22 + 0x528) = pJVar4;
      OVar5.unknown = &DAT_100fd2000;
      FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
      _swift_allocObject();
      *(undefined8 *)(OVar5.unknown + 0x18) = 4;
      *(undefined8 *)(OVar5.unknown + 0x10) = 2;
      OVar6 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar5);
      Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar6);
      *(undefined **)(unaff_x22 + 0x458) = OVar5.unknown;
      puVar7 = &DAT_100fd2008;
      FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                    PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                   );
      puVar8 = &DAT_100fd2010;
      FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
      puVar9 = &DAT_100fd2018;
      FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      Swift::SetAlgebra::_init(OVar21.unknown,unaff_x22 + 0x458,puVar8,puVar9,uVar22,puVar7);
      Foundation::JSONEncoder::set_outputFormatting(pJVar4,OVar21);
      puVar7 = &DAT_100fcf0f8;
      FUN_1000f7830(&DAT_100fcf0f8,&DAT_100c57030);
      puVar8 = puVar7;
      FUN_10059f24c();
      DVar10 = Foundation::JSONEncoder::_encode(pJVar4,puVar8,puVar7,puVar8);
      *(undefined **)(unaff_x22 + 0x530) = DVar10.unknown;
      *(undefined **)(unaff_x22 + 0x538) = puVar7;
      if (lVar19 == 0) {
        lVar20 = *(long *)(*(long *)(unaff_x22 + 0x478) + 200);
        *(long *)(unaff_x22 + 0x540) = lVar20;
        if (lVar20 != 0) {
          lVar17 = *(long *)(*(long *)(unaff_x22 + 0x478) + 0xd0);
          lVar19 = lVar20;
          _swift_getObjectType(lVar20);
          piVar14 = *(int **)(lVar17 + 0x28);
          iVar3 = *piVar14;
          plVar11 = (long *)(ulong)(uint)piVar14[1];
          _swift_unknownObjectRetain(lVar20);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x548) = plVar11;
          *plVar11 = unaff_x22;
          plVar11[1] = (long)FUN_10059390c;
                    /* WARNING: Could not recover jumptable at 0x000100593348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar3 + (long)piVar14))(DVar10.unknown,puVar7,lVar19,lVar17);
          return;
        }
        DVar12 = DVar10;
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,DVar12.unknown,0,0);
        *(undefined8 *)DVar12.unknown = 0xd000000000000021;
        *(undefined8 *)((long)DVar12.unknown + 8) = 0x8000000100dadcb0;
        *(undefined8 *)((long)DVar12.unknown + 0x10) = 0;
        *(undefined1 *)((long)DVar12.unknown + 0x18) = 4;
        _swift_willThrow();
        FUN_10003bf2c(DVar10.unknown,puVar7);
        _swift_release(pJVar4);
        _swift_bridgeObjectRelease(uVar15);
      }
      else {
        _swift_bridgeObjectRelease(uVar15);
        _swift_release(pJVar4);
      }
      uVar22 = *(undefined8 *)(unaff_x22 + 0x490);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
      _swift_task_dealloc(uVar22);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010059322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(ulong *)(unaff_x22 + 0x4f8) = uVar15;
  *(long *)(unaff_x22 + 0x4f0) = lVar20;
  lVar20 = *(long *)(unaff_x22 + 0x470) + lVar20 * 0x50;
  uVar22 = *(undefined8 *)(lVar20 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar20 + 0x28);
  *puVar1 = uVar22;
  uVar23 = *(undefined8 *)(lVar20 + 0x38);
  uVar22 = *(undefined8 *)(lVar20 + 0x30);
  uVar25 = *(undefined8 *)(lVar20 + 0x48);
  uVar24 = *(undefined8 *)(lVar20 + 0x40);
  uVar26 = *(undefined8 *)(lVar20 + 0x58);
  uVar18 = *(undefined8 *)(lVar20 + 0x50);
  uVar27 = *(undefined8 *)(lVar20 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar20 + 0x61);
  *(undefined8 *)(unaff_x22 + 0x1b9) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar23;
  *(undefined8 *)(unaff_x22 + 400) = uVar22;
  uVar22 = *(undefined8 *)(unaff_x22 + 400);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  if (-1 < *(char *)(unaff_x22 + 0x1c8)) {
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x140) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
    uVar22 = *(undefined8 *)(lVar20 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar20 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar22;
    uVar18 = *(undefined8 *)(lVar20 + 0x48);
    uVar25 = *(undefined8 *)(lVar20 + 0x40);
    uVar23 = *(undefined8 *)(lVar20 + 0x58);
    uVar22 = *(undefined8 *)(lVar20 + 0x50);
    uVar24 = *(undefined8 *)(lVar20 + 0x59);
    uVar27 = *(undefined8 *)(lVar20 + 0x38);
    uVar26 = *(undefined8 *)(lVar20 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar20 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x209) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x208) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x200) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar26;
    *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
    FUN_1000f8cac((undefined8 *)(unaff_x22 + 0x1d0),unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268)
    ;
    plVar11 = (long *)0x7d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x500) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100592de8;
    FUN_100594580(plVar11,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x380) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x388) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x390) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x398) = uVar25;
  *(char *)(unaff_x22 + 0x3a0) = (char)uVar18;
  _swift_bridgeObjectRetain();
  FUN_10045b2bc(uVar22,uVar24,uVar23,uVar25,uVar18);
  plVar11 = (long *)0x4d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x518) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100593400;
  FUN_100597890(plVar11,unaff_x22 + 0x370);
  return;
}



/* Address: 0x100593400 | FUN_100593400 */

void FUN_100593400(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x520) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x518));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10059345c;
  }
  else {
    pcVar1 = FUN_10059404c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x478),0);
  return;
}



/* Address: 0x10059345c | FUN_10059345c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005935f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10059345c(void)

{
  int iVar1;
  JSONEncoder *pJVar2;
  OutputFormatting OVar3;
  OutputFormatting OVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data DVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  Data DVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  OutputFormatting OVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  FUN_10059f220((undefined8 *)(unaff_x22 + 0x180));
  lVar14 = *(long *)(unaff_x22 + 0x520);
  lVar12 = *(long *)(unaff_x22 + 0x4f8);
  *(long *)(unaff_x22 + 0x510) = lVar12;
  lVar15 = *(long *)(unaff_x22 + 0x4f0) + 1;
  if (lVar15 != *(long *)(unaff_x22 + 0x4d8)) {
    *(long *)(unaff_x22 + 0x4f0) = lVar15;
    lVar15 = *(long *)(unaff_x22 + 0x470) + lVar15 * 0x50;
    uVar17 = *(undefined8 *)(lVar15 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar15 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar17;
    uVar18 = *(undefined8 *)(lVar15 + 0x38);
    uVar17 = *(undefined8 *)(lVar15 + 0x30);
    uVar20 = *(undefined8 *)(lVar15 + 0x48);
    uVar19 = *(undefined8 *)(lVar15 + 0x40);
    uVar21 = *(undefined8 *)(lVar15 + 0x58);
    uVar13 = *(undefined8 *)(lVar15 + 0x50);
    uVar22 = *(undefined8 *)(lVar15 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar15 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x1b9) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar18;
    *(undefined8 *)(unaff_x22 + 400) = uVar17;
    uVar17 = *(undefined8 *)(unaff_x22 + 400);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (-1 < *(char *)(unaff_x22 + 0x1c8)) {
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x140) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x150) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x158) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
      *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
      *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
      uVar17 = *(undefined8 *)(lVar15 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar15 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x1d0) = uVar17;
      uVar13 = *(undefined8 *)(lVar15 + 0x48);
      uVar20 = *(undefined8 *)(lVar15 + 0x40);
      uVar18 = *(undefined8 *)(lVar15 + 0x58);
      uVar17 = *(undefined8 *)(lVar15 + 0x50);
      uVar19 = *(undefined8 *)(lVar15 + 0x59);
      uVar22 = *(undefined8 *)(lVar15 + 0x38);
      uVar21 = *(undefined8 *)(lVar15 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar15 + 0x61);
      *(undefined8 *)(unaff_x22 + 0x209) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1f0) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x200) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x1e8) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x1e0) = uVar21;
      *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
      FUN_1000f8cac(unaff_x22 + 0x1d0,unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268);
      plVar9 = (long *)0x7d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x500) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_100592de8;
      FUN_100594580(plVar9,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x380) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x390) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x398) = uVar20;
    *(char *)(unaff_x22 + 0x3a0) = (char)uVar13;
    _swift_bridgeObjectRetain();
    FUN_10045b2bc(uVar17,uVar19,uVar18,uVar20,uVar13);
    plVar9 = (long *)0x4d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x518) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100593400;
    FUN_100597890(plVar9,unaff_x22 + 0x370);
    return;
  }
  if (*(long *)(lVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar12);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar17);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    OVar16.unknown = *(undefined **)(unaff_x22 + 0x490);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
    pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
    pJVar2 = Foundation::JSONEncoder::init(pJVar2);
    *(JSONEncoder **)(unaff_x22 + 0x528) = pJVar2;
    OVar3.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar3.unknown + 0x18) = 4;
    *(undefined8 *)(OVar3.unknown + 0x10) = 2;
    OVar4 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar3);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar4);
    *(undefined **)(unaff_x22 + 0x458) = OVar3.unknown;
    puVar5 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar6 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar7 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(OVar16.unknown,unaff_x22 + 0x458,puVar6,puVar7,uVar17,puVar5);
    Foundation::JSONEncoder::set_outputFormatting(pJVar2,OVar16);
    puVar5 = &DAT_100fcf0f8;
    FUN_1000f7830(&DAT_100fcf0f8,&DAT_100c57030);
    puVar6 = puVar5;
    FUN_10059f24c();
    DVar8 = Foundation::JSONEncoder::_encode(pJVar2,puVar6,puVar5,puVar6);
    *(undefined **)(unaff_x22 + 0x530) = DVar8.unknown;
    *(undefined **)(unaff_x22 + 0x538) = puVar5;
    if (lVar14 == 0) {
      lVar15 = *(long *)(*(long *)(unaff_x22 + 0x478) + 200);
      *(long *)(unaff_x22 + 0x540) = lVar15;
      if (lVar15 != 0) {
        lVar14 = *(long *)(*(long *)(unaff_x22 + 0x478) + 0xd0);
        lVar12 = lVar15;
        _swift_getObjectType(lVar15);
        piVar11 = *(int **)(lVar14 + 0x28);
        iVar1 = *piVar11;
        plVar9 = (long *)(ulong)(uint)piVar11[1];
        _swift_unknownObjectRetain(lVar15);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x548) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_10059390c;
                    /* WARNING: Could not recover jumptable at 0x000100593894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar11))(DVar8.unknown,puVar5,lVar12,lVar14);
        return;
      }
      DVar10 = DVar8;
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,DVar10.unknown,0,0);
      *(undefined8 *)DVar10.unknown = 0xd000000000000021;
      *(undefined8 *)((long)DVar10.unknown + 8) = 0x8000000100dadcb0;
      *(undefined8 *)((long)DVar10.unknown + 0x10) = 0;
      *(undefined1 *)((long)DVar10.unknown + 0x18) = 4;
      _swift_willThrow();
      FUN_10003bf2c(DVar8.unknown,puVar5);
      _swift_release(pJVar2);
      _swift_bridgeObjectRelease(lVar12);
    }
    else {
      _swift_bridgeObjectRelease(lVar12);
      _swift_release(pJVar2);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar17);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100593778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10059390c | FUN_10059390c */

void FUN_10059390c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x550) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x548));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100593968;
  }
  else {
    pcVar1 = FUN_100594508;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x478),0);
  return;
}



/* Address: 0x100593968 | FUN_100593968 */

void FUN_100593968(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x540);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x528);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x510);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x530),*(undefined8 *)(unaff_x22 + 0x538));
  _swift_release(uVar1);
  _swift_unknownObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x490);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005939dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005939e0 | FUN_1005939e0 */

void FUN_1005939e0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_1000fb4c4(unaff_x22 + 0x270,&DAT_100fcb3e0,&DAT_100c50230);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x490);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100593a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100593a38 | FUN_100593a38 */

/* WARNING: Removing unreachable block (ram,0x000100593d00) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100593cf0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100593a38(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char *pcVar4;
  JSONEncoder *pJVar5;
  OutputFormatting OVar6;
  OutputFormatting OVar7;
  undefined *puVar8;
  undefined *puVar9;
  Data DVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long lVar12;
  Data DVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  undefined8 uVar21;
  OutputFormatting OVar22;
  long lVar23;
  long unaff_x22;
  undefined8 uVar24;
  undefined8 uVar25;
  void *pvVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  
  uVar25 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined1 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x460) = *(undefined8 *)(unaff_x22 + 0x508);
  _swift_errorRetain();
  puVar3 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  pcVar4 = (char *)(unaff_x22 + 0x3f8);
  _swift_dynamicCast(pcVar4,unaff_x22 + 0x460,puVar3,&DAT_100eda9c8,6);
  if (((ulong)pcVar4 & 1) == 0) {
    _swift_getErrorValue(*(undefined8 *)(unaff_x22 + 0x508),unaff_x22 + 0x468,unaff_x22 + 0x430);
    SVar31 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pcVar20 = SVar31.str;
    uVar27 = 0;
    uVar15 = 4;
  }
  else {
    pcVar20 = *(char **)(unaff_x22 + 0x3f8);
    SVar31.bridgeObject = *(void **)(unaff_x22 + 0x400);
    SVar31.str = pcVar4;
    uVar27 = *(undefined8 *)(unaff_x22 + 0x408);
    uVar15 = (ulong)*(byte *)(unaff_x22 + 0x410);
  }
  pvVar26 = SVar31.bridgeObject;
  uVar17 = *(ulong *)(unaff_x22 + 0x4f8);
  FUN_1004d9ee8(pcVar20,pvVar26,uVar27);
  FUN_1004a7398(uVar25,uVar28,uVar2);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar18 = *(ulong *)(unaff_x22 + 0x4f8);
  uVar14 = uVar18;
  if ((uVar17 & 1) == 0) {
    uVar14 = 0;
    FUN_1004a4e58(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
  }
  uVar17 = *(ulong *)(uVar14 + 0x10);
  uVar18 = uVar14;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar17) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_1004a4e58(uVar18,uVar17 + 1,1,uVar14);
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x508);
  *(ulong *)(uVar18 + 0x10) = uVar17 + 1;
  lVar23 = uVar18 + uVar17 * 0x40;
  *(undefined8 *)(lVar23 + 0x20) = uVar25;
  *(undefined8 *)(lVar23 + 0x28) = uVar28;
  *(undefined1 *)(lVar23 + 0x30) = uVar2;
  *(char **)(lVar23 + 0x38) = pcVar20;
  *(void **)(lVar23 + 0x40) = pvVar26;
  *(undefined8 *)(lVar23 + 0x48) = uVar27;
  *(ulong *)(lVar23 + 0x50) = uVar15;
  *(undefined2 *)(lVar23 + 0x58) = 0x100;
  FUN_1004d9f84(pcVar20,pvVar26,uVar27,uVar15);
  FUN_10059f220((undefined8 *)(unaff_x22 + 0x180));
  _swift_errorRelease(uVar24);
  *(ulong *)(unaff_x22 + 0x450) = uVar18;
  *(ulong *)(unaff_x22 + 0x510) = uVar18;
  lVar23 = *(long *)(unaff_x22 + 0x4f0) + 1;
  if (lVar23 != *(long *)(unaff_x22 + 0x4d8)) {
    *(ulong *)(unaff_x22 + 0x4f8) = uVar18;
    *(long *)(unaff_x22 + 0x4f0) = lVar23;
    lVar23 = *(long *)(unaff_x22 + 0x470) + lVar23 * 0x50;
    uVar25 = *(undefined8 *)(lVar23 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar23 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar25;
    uVar28 = *(undefined8 *)(lVar23 + 0x38);
    uVar25 = *(undefined8 *)(lVar23 + 0x30);
    uVar24 = *(undefined8 *)(lVar23 + 0x48);
    uVar27 = *(undefined8 *)(lVar23 + 0x40);
    uVar29 = *(undefined8 *)(lVar23 + 0x58);
    uVar21 = *(undefined8 *)(lVar23 + 0x50);
    uVar30 = *(undefined8 *)(lVar23 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar23 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x1b9) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar28;
    *(undefined8 *)(unaff_x22 + 400) = uVar25;
    uVar25 = *(undefined8 *)(unaff_x22 + 400);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (*(char *)(unaff_x22 + 0x1c8) < '\0') {
      *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x380) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x388) = uVar27;
      *(undefined8 *)(unaff_x22 + 0x390) = uVar28;
      *(undefined8 *)(unaff_x22 + 0x398) = uVar24;
      *(char *)(unaff_x22 + 0x3a0) = (char)uVar21;
      _swift_bridgeObjectRetain();
      FUN_10045b2bc(uVar25,uVar27,uVar28,uVar24,uVar21);
      plVar11 = (long *)0x4d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x518) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100593400;
      FUN_100597890(plVar11,unaff_x22 + 0x370);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x140) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar28;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
    uVar25 = *(undefined8 *)(lVar23 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar23 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar25;
    uVar21 = *(undefined8 *)(lVar23 + 0x48);
    uVar24 = *(undefined8 *)(lVar23 + 0x40);
    uVar28 = *(undefined8 *)(lVar23 + 0x58);
    uVar25 = *(undefined8 *)(lVar23 + 0x50);
    uVar27 = *(undefined8 *)(lVar23 + 0x59);
    uVar30 = *(undefined8 *)(lVar23 + 0x38);
    uVar29 = *(undefined8 *)(lVar23 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar23 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x209) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x208) = uVar28;
    *(undefined8 *)(unaff_x22 + 0x200) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar29;
    *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
    FUN_1000f8cac((undefined8 *)(unaff_x22 + 0x1d0),unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268)
    ;
    plVar11 = (long *)0x7d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x500) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100592de8;
    FUN_100594580(plVar11,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
    return;
  }
  if (*(long *)(uVar18 + 0x10) == 0) {
    _swift_bridgeObjectRelease(uVar18);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    OVar22.unknown = *(undefined **)(unaff_x22 + 0x490);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x480);
    pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONEncoder::init(pJVar5);
    *(JSONEncoder **)(unaff_x22 + 0x528) = pJVar5;
    OVar6.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar6.unknown + 0x18) = 4;
    *(undefined8 *)(OVar6.unknown + 0x10) = 2;
    OVar7 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar6);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar7);
    *(undefined **)(unaff_x22 + 0x458) = OVar6.unknown;
    puVar3 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar8 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar9 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(OVar22.unknown,unaff_x22 + 0x458,puVar8,puVar9,uVar25,puVar3);
    Foundation::JSONEncoder::set_outputFormatting(pJVar5,OVar22);
    puVar3 = &DAT_100fcf0f8;
    FUN_1000f7830(&DAT_100fcf0f8,&DAT_100c57030);
    puVar8 = puVar3;
    FUN_10059f24c();
    DVar10 = Foundation::JSONEncoder::_encode(pJVar5,puVar8,puVar3,puVar8);
    *(undefined **)(unaff_x22 + 0x530) = DVar10.unknown;
    *(undefined **)(unaff_x22 + 0x538) = puVar3;
    lVar23 = *(long *)(*(long *)(unaff_x22 + 0x478) + 200);
    *(long *)(unaff_x22 + 0x540) = lVar23;
    if (lVar23 != 0) {
      lVar19 = *(long *)(*(long *)(unaff_x22 + 0x478) + 0xd0);
      lVar12 = lVar23;
      _swift_getObjectType(lVar23);
      piVar16 = *(int **)(lVar19 + 0x28);
      iVar1 = *piVar16;
      plVar11 = (long *)(ulong)(uint)piVar16[1];
      _swift_unknownObjectRetain(lVar23);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x548) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10059390c;
                    /* WARNING: Could not recover jumptable at 0x000100593f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar16))(DVar10.unknown,puVar3,lVar12,lVar19);
      return;
    }
    DVar13 = DVar10;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,DVar13.unknown,0,0);
    *(undefined8 *)DVar13.unknown = 0xd000000000000021;
    *(undefined8 *)((long)DVar13.unknown + 8) = 0x8000000100dadcb0;
    *(undefined8 *)((long)DVar13.unknown + 0x10) = 0;
    *(undefined1 *)((long)DVar13.unknown + 0x18) = 4;
    _swift_willThrow();
    FUN_10003bf2c(DVar10.unknown,puVar3);
    _swift_release(pJVar5);
    _swift_bridgeObjectRelease(uVar18);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100593e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10059404c | FUN_10059404c */

/* WARNING: Removing unreachable block (ram,0x000100594200) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005941f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10059404c(void)

{
  int iVar1;
  JSONEncoder *pJVar2;
  OutputFormatting OVar3;
  OutputFormatting OVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data DVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  Data DVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  OutputFormatting OVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x520);
  FUN_10059f220((undefined8 *)(unaff_x22 + 0x180));
  _swift_errorRelease(uVar12);
  lVar13 = *(long *)(unaff_x22 + 0x4f8);
  *(long *)(unaff_x22 + 0x510) = lVar13;
  lVar17 = *(long *)(unaff_x22 + 0x4f0) + 1;
  if (lVar17 != *(long *)(unaff_x22 + 0x4d8)) {
    *(long *)(unaff_x22 + 0x4f0) = lVar17;
    lVar17 = *(long *)(unaff_x22 + 0x470) + lVar17 * 0x50;
    uVar12 = *(undefined8 *)(lVar17 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x180) = uVar12;
    uVar18 = *(undefined8 *)(lVar17 + 0x38);
    uVar12 = *(undefined8 *)(lVar17 + 0x30);
    uVar20 = *(undefined8 *)(lVar17 + 0x48);
    uVar19 = *(undefined8 *)(lVar17 + 0x40);
    uVar21 = *(undefined8 *)(lVar17 + 0x58);
    uVar15 = *(undefined8 *)(lVar17 + 0x50);
    uVar22 = *(undefined8 *)(lVar17 + 0x59);
    *(undefined8 *)(unaff_x22 + 0x1c1) = *(undefined8 *)(lVar17 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x1b9) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar18;
    *(undefined8 *)(unaff_x22 + 400) = uVar12;
    uVar12 = *(undefined8 *)(unaff_x22 + 400);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (*(char *)(unaff_x22 + 0x1c8) < '\0') {
      *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x380) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x388) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x390) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x398) = uVar20;
      *(char *)(unaff_x22 + 0x3a0) = (char)uVar15;
      _swift_bridgeObjectRetain();
      FUN_10045b2bc(uVar12,uVar19,uVar18,uVar20,uVar15);
      plVar9 = (long *)0x4d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x518) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_100593400;
      FUN_100597890(plVar9,unaff_x22 + 0x370);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x140) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(char *)(unaff_x22 + 0x178) = *(char *)(unaff_x22 + 0x1c8);
    uVar12 = *(undefined8 *)(lVar17 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar12;
    uVar15 = *(undefined8 *)(lVar17 + 0x48);
    uVar20 = *(undefined8 *)(lVar17 + 0x40);
    uVar18 = *(undefined8 *)(lVar17 + 0x58);
    uVar12 = *(undefined8 *)(lVar17 + 0x50);
    uVar19 = *(undefined8 *)(lVar17 + 0x59);
    uVar22 = *(undefined8 *)(lVar17 + 0x38);
    uVar21 = *(undefined8 *)(lVar17 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(lVar17 + 0x61);
    *(undefined8 *)(unaff_x22 + 0x209) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x208) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x200) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar21;
    *(byte *)(unaff_x22 + 0x218) = *(byte *)(unaff_x22 + 0x218) & 0x7f;
    FUN_1000f8cac(unaff_x22 + 0x1d0,unaff_x22 + 0x220,&DAT_100fcb418,&DAT_100c50268);
    plVar9 = (long *)0x7d0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x500) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100592de8;
    FUN_100594580(plVar9,unaff_x22 + 0x2f0,unaff_x22 + 0x130,0);
    return;
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar13);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    OVar16.unknown = *(undefined **)(unaff_x22 + 0x490);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x480);
    pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
    pJVar2 = Foundation::JSONEncoder::init(pJVar2);
    *(JSONEncoder **)(unaff_x22 + 0x528) = pJVar2;
    OVar3.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar3.unknown + 0x18) = 4;
    *(undefined8 *)(OVar3.unknown + 0x10) = 2;
    OVar4 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar3);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar4);
    *(undefined **)(unaff_x22 + 0x458) = OVar3.unknown;
    puVar5 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar6 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar7 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(OVar16.unknown,unaff_x22 + 0x458,puVar6,puVar7,uVar12,puVar5);
    Foundation::JSONEncoder::set_outputFormatting(pJVar2,OVar16);
    puVar5 = &DAT_100fcf0f8;
    FUN_1000f7830(&DAT_100fcf0f8,&DAT_100c57030);
    puVar6 = puVar5;
    FUN_10059f24c();
    DVar8 = Foundation::JSONEncoder::_encode(pJVar2,puVar6,puVar5,puVar6);
    *(undefined **)(unaff_x22 + 0x530) = DVar8.unknown;
    *(undefined **)(unaff_x22 + 0x538) = puVar5;
    lVar17 = *(long *)(*(long *)(unaff_x22 + 0x478) + 200);
    *(long *)(unaff_x22 + 0x540) = lVar17;
    if (lVar17 != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x22 + 0x478) + 0xd0);
      lVar13 = lVar17;
      _swift_getObjectType(lVar17);
      piVar11 = *(int **)(lVar14 + 0x28);
      iVar1 = *piVar11;
      plVar9 = (long *)(ulong)(uint)piVar11[1];
      _swift_unknownObjectRetain(lVar17);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x548) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10059390c;
                    /* WARNING: Could not recover jumptable at 0x000100594490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar11))(DVar8.unknown,puVar5,lVar13,lVar14);
      return;
    }
    DVar10 = DVar8;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,DVar10.unknown,0,0);
    *(undefined8 *)DVar10.unknown = 0xd000000000000021;
    *(undefined8 *)((long)DVar10.unknown + 8) = 0x8000000100dadcb0;
    *(undefined8 *)((long)DVar10.unknown + 0x10) = 0;
    *(undefined1 *)((long)DVar10.unknown + 0x18) = 4;
    _swift_willThrow();
    FUN_10003bf2c(DVar8.unknown,puVar5);
    _swift_release(pJVar2);
    _swift_bridgeObjectRelease(lVar13);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x490);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100594374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100594508 | FUN_100594508 */

void FUN_100594508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x540);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x528);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x510);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x530),*(undefined8 *)(unaff_x22 + 0x538));
  _swift_release(uVar1);
  _swift_unknownObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x490);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x4a8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010059457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100594580 | FUN_100594580 */

void FUN_100594580(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x650) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x2b9) = param_3;
  *(undefined8 *)(unaff_x22 + 0x648) = param_2;
  *(undefined8 *)(unaff_x22 + 0x640) = param_1;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x658) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x660) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x668) = uVar2;
  puVar3 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x670) = uVar2;
  _swift_task_switch(FUN_100594618);
  return;
}



/* Address: 0x100594618 | FUN_100594618 */

void FUN_100594618(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  String SVar4;
  bool bVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  UnownedSerialExecutor UVar7;
  undefined7 extraout_var;
  undefined *puVar8;
  undefined *puVar9;
  TaskPriority TVar10;
  long *plVar11;
  _StringGuts _Var12;
  char *pcVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long unaff_x22;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String SVar33;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar15 = *(undefined8 **)(unaff_x22 + 0x648);
  uVar18 = puVar15[3];
  *(ulong *)(unaff_x22 + 0x678) = uVar18;
  uVar19 = puVar15[4];
  *(ulong *)(unaff_x22 + 0x680) = uVar19;
  uVar18 = uVar18 & 0xffffffffffff;
  if ((uVar19 & 0x2000000000000000) != 0) {
    uVar18 = uVar19 >> 0x38 & 0xf;
  }
  if ((uVar18 == 0) && ((*(byte *)(unaff_x22 + 0x2b9) & 1) == 0)) {
    uVar25 = puVar15[1];
    uVar23 = *puVar15;
    *(undefined1 *)(unaff_x22 + 0x5a8) = *(undefined1 *)(puVar15 + 2);
    *(undefined8 *)(unaff_x22 + 0x5a0) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x598) = uVar23;
    local_68 = 0x8000000100dadd90;
    uVar23 = *(undefined8 *)(unaff_x22 + 0x598);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x5a0);
    uVar18 = (ulong)*(byte *)(unaff_x22 + 0x5a8);
    FUN_10054a890((undefined8 *)(unaff_x22 + 0x598),unaff_x22 + 0x5f8);
    local_70 = 0xd000000000000019;
    uVar16 = 1;
  }
  else {
    lVar21 = *(long *)(unaff_x22 + 0x650);
    lVar22 = *(long *)(lVar21 + 200);
    *(long *)(unaff_x22 + 0x688) = lVar22;
    if (lVar22 != 0) {
      lVar24 = *(long *)(lVar21 + 0xd0);
      *(long *)(unaff_x22 + 0x690) = lVar24;
      lVar21 = lVar22;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0x698) = lVar21;
      *(undefined8 *)(unaff_x22 + 0x6a0) = *(undefined8 *)(lVar24 + 0x10);
      uVar23 = *(undefined8 *)(lVar24 + 8);
      _swift_unknownObjectRetain(lVar22);
      UVar7 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_100594ed0,UVar7.unknown,uVar23);
      return;
    }
    _swift_beginAccess(lVar21 + 0xee,unaff_x22 + 0x4d8,0,0);
    if (((*(char *)(lVar21 + 0xee) == '\x01') &&
        (((*(long *)(unaff_x22 + 0x680) != -0x15ffffffffff9a86 ||
          (*(long *)(unaff_x22 + 0x678) != 0x696c616974696e69)) &&
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x696c616974696e69,(_StringGuts)0xea0000000000657a,
                             (_StringComparisonResult)(__int8)*(long *)(unaff_x22 + 0x678)), !bVar5)
         ))) && ((*(undefined1 **)(unaff_x22 + 0x680) != &DAT_e400000000000000 ||
                 (*(long *)(unaff_x22 + 0x678) != 0x676e6970)))) {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x676e6970,(_StringGuts)0xe400000000000000,
                         (_StringComparisonResult)(__int8)*(long *)(unaff_x22 + 0x678));
      puVar15 = (undefined8 *)CONCAT71(extraout_var,bVar5);
      if ((!bVar5) && ((*(byte *)(*(long *)(unaff_x22 + 0x650) + 0x110) & 1) == 0)) {
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,puVar15,0,0);
        *puVar15 = 0xd000000000000019;
        puVar15[1] = 0x8000000100dadd10;
        puVar15[2] = 0;
        *(undefined1 *)(puVar15 + 3) = 1;
        _swift_willThrow();
        uVar23 = *(undefined8 *)(unaff_x22 + 0x668);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x670));
        _swift_task_dealloc(uVar23);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1005946e8;
      }
    }
    lVar21 = *(long *)(unaff_x22 + 0x650);
    _Var12.unknown = (undefined *)(unaff_x22 + 0x4c0);
    pcVar13 = (char *)0x0;
    pvVar14 = (void *)0x0;
    _swift_beginAccess(lVar21 + 0xf0);
    lVar21 = *(long *)(lVar21 + 0xf0);
    if (*(long *)(lVar21 + 0x10) != 0) {
      uVar18 = *(ulong *)(unaff_x22 + 0x680);
      lVar22 = *(long *)(unaff_x22 + 0x678);
      _swift_bridgeObjectRetain_n(lVar21,2);
      FUN_100071370();
      if ((uVar18 & 1) != 0) {
        puVar15 = (undefined8 *)(unaff_x22 + 0x3f8);
        lVar24 = *(long *)(unaff_x22 + 0x650);
        *(undefined8 *)(unaff_x22 + 0x6b0) = *(undefined8 *)(*(long *)(lVar21 + 0x38) + lVar22 * 8);
        _swift_retain();
        _swift_bridgeObjectRelease_n(lVar21,2);
        lVar21 = *(long *)(lVar24 + 200);
        if (lVar21 != 0) {
          uVar23 = *(undefined8 *)(*(long *)(unaff_x22 + 0x650) + 0xd0);
          *(long *)(unaff_x22 + 0x610) = lVar21;
          *(undefined8 *)(unaff_x22 + 0x618) = uVar23;
          _swift_unknownObjectRetain();
          puVar8 = &DAT_100fd2510;
          FUN_1000f7830(&DAT_100fd2510,&DAT_100c60000);
          puVar9 = &DAT_100fd2518;
          FUN_1000f7830(&DAT_100fd2518,&DAT_100c60008);
          puVar26 = puVar15;
          _swift_dynamicCast(puVar15,unaff_x22 + 0x610,puVar8,puVar9,0xe);
          if (((ulong)puVar26 & 1) != 0) {
            lVar21 = *(long *)(unaff_x22 + 0x410);
            if (lVar21 != 0) {
              puVar26 = *(undefined8 **)(unaff_x22 + 0x648);
              lVar22 = *(long *)(unaff_x22 + 0x418);
              FUN_100004640(puVar15,lVar21);
              uVar23 = *puVar26;
              *(undefined8 *)(unaff_x22 + 0x6b8) = uVar23;
              uVar25 = puVar26[1];
              *(undefined8 *)(unaff_x22 + 0x6c0) = uVar25;
              uVar2 = *(undefined1 *)(puVar26 + 2);
              *(undefined1 *)(unaff_x22 + 0x2ba) = uVar2;
              piVar17 = *(int **)(lVar22 + 8);
              iVar1 = *piVar17;
              plVar11 = (long *)(ulong)(uint)piVar17[1];
              _swift_task_alloc();
              *(long **)(unaff_x22 + 0x6c8) = plVar11;
              *plVar11 = unaff_x22;
              plVar11[1] = (long)FUN_100595998;
                    /* WARNING: Could not recover jumptable at 0x0001005949a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar17))
                        (plVar11,unaff_x22 + 0x3c0,uVar23,uVar25,uVar2,lVar21,lVar22);
              return;
            }
            goto LAB_100594b00;
          }
        }
        *(undefined8 *)(unaff_x22 + 0x418) = 0;
        *(undefined8 *)(unaff_x22 + 0x400) = 0;
        *puVar15 = 0;
        *(undefined8 *)(unaff_x22 + 0x410) = 0;
        *(undefined8 *)(unaff_x22 + 0x408) = 0;
LAB_100594b00:
        puVar26 = *(undefined8 **)(unaff_x22 + 0x648);
        FUN_1000fb4c4(puVar15,&DAT_100fd2500,&DAT_100c5ffe0);
        uVar23 = *puVar26;
        uVar25 = puVar26[1];
        uVar2 = *(undefined1 *)(puVar26 + 2);
        *(undefined8 *)(unaff_x22 + 0x720) = 0;
        *(undefined8 *)(unaff_x22 + 0x718) = 0;
        *(undefined8 *)(unaff_x22 + 0x730) = 0;
        *(undefined8 *)(unaff_x22 + 0x728) = 0;
        *(undefined8 *)(unaff_x22 + 0x740) = 0;
        *(undefined8 *)(unaff_x22 + 0x738) = 0;
        *(undefined8 *)(unaff_x22 + 0x748) = 0;
        *(undefined8 *)(unaff_x22 + 0x710) = uVar23;
        *(undefined8 *)(unaff_x22 + 0x708) = uVar25;
        *(undefined1 *)(unaff_x22 + 699) = uVar2;
        *(undefined8 *)(unaff_x22 + 0x220) = uVar23;
        *(undefined8 *)(unaff_x22 + 0x228) = uVar25;
        *(undefined1 *)(unaff_x22 + 0x230) = uVar2;
        *(undefined8 *)(unaff_x22 + 0x240) = 0;
        *(undefined8 *)(unaff_x22 + 0x238) = 0;
        *(undefined8 *)(unaff_x22 + 0x250) = 0;
        *(undefined8 *)(unaff_x22 + 0x248) = 0;
        *(undefined8 *)(unaff_x22 + 0x260) = 0;
        *(undefined8 *)(unaff_x22 + 600) = 0;
        *(undefined8 *)(unaff_x22 + 0x268) = 0;
        FUN_1004a7398(uVar23,uVar25,uVar2);
        FUN_1004a7398(uVar23,uVar25,uVar2);
        FUN_1004a7398(uVar23,uVar25,uVar2);
        FUN_10059f090(0,0,0,0,0,0,0);
        if (DAT_100fd1ff8 != -1) {
          _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
        }
        uVar16 = DAT_101057b40;
        uVar18 = *(ulong *)(unaff_x22 + 0x650);
        *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x248);
        *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x240);
        *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 600);
        *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x250);
        *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x268);
        *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x260);
        *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x228);
        *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x220);
        *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x238);
        *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x230);
        FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x1d0);
        FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x180);
        puVar8 = &DAT_100fd2508;
        FUN_1000f7830(&DAT_100fd2508,&DAT_100c5ffe8);
        _swift_task_localValuePush(uVar16,unaff_x22 + 0x130,puVar8);
        _swift_task_isCurrentExecutor(uVar18,0);
        if ((uVar18 & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("MCP/Server.swift",0x10,1,0x317,*(undefined8 *)(unaff_x22 + 0x650),0);
        }
        uVar16 = *(undefined8 *)(unaff_x22 + 0x6b0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x670);
        lVar21 = *(long *)(unaff_x22 + 0x650);
        puVar15 = *(undefined8 **)(unaff_x22 + 0x648);
        TVar10 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(uVar6,1,1,TVar10.unknown);
        puVar8 = &DAT_100fd1fe8;
        FUN_1003b6598();
        puVar9 = &DAT_100ee3490;
        _swift_allocObject(&DAT_100ee3490,0x80,7);
        *(long *)(puVar9 + 0x10) = lVar21;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        *(undefined8 *)(puVar9 + 0x20) = uVar16;
        uVar20 = *puVar15;
        *(undefined8 *)(puVar9 + 0x30) = puVar15[1];
        *(undefined8 *)(puVar9 + 0x28) = uVar20;
        uVar27 = puVar15[3];
        uVar20 = puVar15[2];
        uVar29 = puVar15[5];
        uVar28 = puVar15[4];
        uVar31 = puVar15[7];
        uVar30 = puVar15[6];
        uVar32 = *(undefined8 *)((long)puVar15 + 0x39);
        *(undefined8 *)(puVar9 + 0x69) = *(undefined8 *)((long)puVar15 + 0x41);
        *(undefined8 *)(puVar9 + 0x61) = uVar32;
        *(undefined8 *)(puVar9 + 0x60) = uVar31;
        *(undefined8 *)(puVar9 + 0x58) = uVar30;
        *(undefined8 *)(puVar9 + 0x50) = uVar29;
        *(undefined8 *)(puVar9 + 0x48) = uVar28;
        *(undefined8 *)(puVar9 + 0x40) = uVar27;
        *(undefined8 *)(puVar9 + 0x38) = uVar20;
        *(long *)(puVar9 + 0x78) = lVar21;
        _swift_retain_n(lVar21,2);
        _swift_retain(uVar16);
        FUN_1000f8cac(puVar15,unaff_x22 + 0x270,&DAT_100fcb418,&DAT_100c50268);
        uVar16 = 0;
        FUN_100587bd4(0,0,uVar6,&DAT_100c5fff8,puVar9);
        *(undefined8 *)(unaff_x22 + 0x750) = uVar16;
        _swift_task_localValuePop();
        FUN_10059f1f4(unaff_x22 + 0x220);
        _swift_beginAccess(lVar21 + 0x100,unaff_x22 + 0x520,0x21,0);
        _swift_retain(uVar16);
        uVar6 = *(undefined8 *)(lVar21 + 0x100);
        _swift_isUniquelyReferenced_nonNull_native(uVar6);
        uVar20 = *(undefined8 *)(lVar21 + 0x100);
        *(undefined8 *)(lVar21 + 0x100) = 0x8000000000000000;
        FUN_1004b5b0c(uVar16,uVar23,uVar25,uVar2,uVar6);
        FUN_1004dc818(uVar23,uVar25,uVar2);
        *(undefined8 *)(lVar21 + 0x100) = uVar20;
        _swift_endAccess(unaff_x22 + 0x520);
        plVar11 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x758) = plVar11;
        FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
        puVar8 = &DAT_100fcb578;
        FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
        *(undefined **)(unaff_x22 + 0x760) = puVar8;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_100595dbc;
        Swift::Task::get_value((undefined *)(unaff_x22 + 0x2c0));
        return;
      }
      _Var12.unknown = (undefined *)0x2;
      _swift_bridgeObjectRelease_n(lVar21);
    }
    puVar15 = (undefined8 *)(unaff_x22 + 0x5e0);
    SVar4 = *(String *)(unaff_x22 + 0x678);
    cVar3 = *(char *)(unaff_x22 + 0x2b9);
    puVar26 = *(undefined8 **)(unaff_x22 + 0x648);
    Swift::_StringGuts::grow(0x12,_Var12);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_70 = 0xd000000000000010;
    local_68 = 0x8000000100dad600;
    SVar33.bridgeObject = pvVar14;
    SVar33.str = pcVar13;
    Swift::String::append(SVar4,SVar33);
    *(undefined8 *)(unaff_x22 + 0x780) = 0x8000000100dad600;
    uVar25 = puVar26[1];
    uVar23 = *puVar26;
    *(undefined1 *)(unaff_x22 + 0x5f0) = *(undefined1 *)(puVar26 + 2);
    *(undefined8 *)(unaff_x22 + 0x5e8) = uVar25;
    *puVar15 = uVar23;
    uVar23 = *(undefined8 *)(unaff_x22 + 0x5e0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x5e8);
    uVar18 = (ulong)*(byte *)(unaff_x22 + 0x5f0);
    *(undefined8 *)(unaff_x22 + 0x300) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x308) = uVar25;
    *(ulong *)(unaff_x22 + 0x310) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dad600;
    *(undefined8 *)(unaff_x22 + 0x328) = 0;
    *(undefined8 *)(unaff_x22 + 0x330) = 2;
    *(undefined2 *)(unaff_x22 + 0x338) = 0x100;
    if (cVar3 == '\x01') {
      _swift_bridgeObjectRetain(0x8000000100dad600);
      FUN_10054a890(puVar15,unaff_x22 + 0x5b0);
      plVar11 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x788) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_1005961c4;
      FUN_10058d7e8(plVar11,unaff_x22 + 0x300);
      return;
    }
    FUN_10054a890(puVar15,unaff_x22 + 0x5c8);
    uVar16 = 2;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar15 = *(undefined8 **)(unaff_x22 + 0x640);
  *puVar15 = uVar23;
  puVar15[1] = uVar25;
  puVar15[2] = uVar18;
  puVar15[3] = local_70;
  puVar15[4] = local_68;
  puVar15[5] = 0;
  puVar15[6] = uVar16;
  *(undefined2 *)(puVar15 + 7) = 0x100;
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar20);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1005946e8:
                    /* WARNING: Could not recover jumptable at 0x000100594704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100594ed0 | FUN_100594ed0 */

void FUN_100594ed0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x698);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x650);
  (**(code **)(unaff_x22 + 0x6a0))(uVar1,*(undefined8 *)(unaff_x22 + 0x690));
  *(undefined8 *)(unaff_x22 + 0x6a8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100594f28,uVar2,0);
  return;
}



/* Address: 0x100594f28 | FUN_100594f28 */

void FUN_100594f28(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  code *UNRECOVERED_JUMPTABLE;
  TaskPriority TVar9;
  long *plVar10;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  undefined8 uVar27;
  void *pvVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  
  lVar22 = *(long *)(unaff_x22 + 0x6a8);
  pvVar14 = (void *)0x0;
  _swift_beginAccess(lVar22 + 0x20,unaff_x22 + 0x508,0);
  FUN_100076688(lVar22 + 0x20,unaff_x22 + 0x420);
  uVar18 = *(ulong *)(unaff_x22 + 0x438);
  lVar20 = *(long *)(unaff_x22 + 0x440);
  FUN_100004640(unaff_x22 + 0x420,uVar18);
  (**(code **)(lVar20 + 0x70))(uVar18,lVar20);
  FUN_100004594(unaff_x22 + 0x420);
  if ((uVar18 & 0xff) == 0) {
    pcVar26 = *(char **)(unaff_x22 + 0x680);
    SVar37 = *(String *)(unaff_x22 + 0x678);
    puVar25 = *(undefined8 **)(unaff_x22 + 0x648);
    FUN_100076688(lVar22 + 0x20,unaff_x22 + 0x448);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x460);
    lVar20 = *(long *)(unaff_x22 + 0x468);
    FUN_100004640();
    puVar6 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar13 = (char *)0xa0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar6 + 0x18) = 4;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e600000000000000;
    SVar36.bridgeObject = pcVar12;
    SVar36.str = pcVar13;
    Swift::String::reserveCapacity(2,SVar36);
    SVar38.bridgeObject = pvVar14;
    SVar38.str = pcVar12;
    Swift::String::write(SVar37,SVar38);
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0xe000000000000000;
    puVar6[0x58] = 0;
    *(undefined1 **)(puVar6 + 0x60) = &SUB_00006469;
    *(undefined1 **)(puVar6 + 0x68) = &SUB_e200000000000000;
    SVar37.bridgeObject = pcVar12;
    SVar37.str = pcVar26;
    Swift::String::reserveCapacity(2,SVar37);
    pcVar13 = (char *)*puVar25;
    if (*(char *)(puVar25 + 2) == '\x01') {
      *(char **)(unaff_x22 + 0x638) = pcVar13;
      SVar35 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar28 = *(void **)(*(long *)(unaff_x22 + 0x648) + 8);
      SVar35.bridgeObject = pvVar28;
      SVar35.str = pcVar13;
      _swift_bridgeObjectRetain(pvVar28);
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x6a8);
    SVar39.bridgeObject = pvVar14;
    SVar39.str = pcVar12;
    Swift::String::append(SVar35,SVar39);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    *(undefined8 *)(puVar6 + 0x70) = 0;
    *(undefined8 *)(puVar6 + 0x78) = 0xe000000000000000;
    puVar6[0x98] = 0;
    puVar7 = puVar6;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar6);
    puVar8 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dadd70;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dadd50;
    *(undefined8 *)(unaff_x22 + 200) = 0x2ee;
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dadd70;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dadd50;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x2ee;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0xd0);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x70,uVar15,lVar20);
    _swift_release(uVar23);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x448);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x6a8));
  }
  lVar20 = *(long *)(unaff_x22 + 0x650);
  _swift_beginAccess(lVar20 + 0xee,unaff_x22 + 0x4d8,0,0);
  if (((*(char *)(lVar20 + 0xee) == '\x01') &&
      (((*(long *)(unaff_x22 + 0x680) != -0x15ffffffffff9a86 ||
        (*(long *)(unaff_x22 + 0x678) != 0x696c616974696e69)) &&
       (bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x696c616974696e69,(_StringGuts)0xea0000000000657a,
                           (_StringComparisonResult)(__int8)*(long *)(unaff_x22 + 0x678)), !bVar5)))
      ) && ((*(undefined1 **)(unaff_x22 + 0x680) != &DAT_e400000000000000 ||
            (*(long *)(unaff_x22 + 0x678) != 0x676e6970)))) {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x676e6970,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)*(long *)(unaff_x22 + 0x678));
    puVar25 = (undefined8 *)CONCAT71(extraout_var,bVar5);
    if ((!bVar5) && ((*(byte *)(*(long *)(unaff_x22 + 0x650) + 0x110) & 1) == 0)) {
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,puVar25,0,0);
      *puVar25 = 0xd000000000000019;
      puVar25[1] = 0x8000000100dadd10;
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 1;
      _swift_willThrow();
      uVar15 = *(undefined8 *)(unaff_x22 + 0x668);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x670));
      _swift_task_dealloc(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1005955a0;
    }
  }
  lVar20 = *(long *)(unaff_x22 + 0x650);
  _Var11.unknown = (undefined *)(unaff_x22 + 0x4c0);
  pcVar13 = (char *)0x0;
  pvVar14 = (void *)0x0;
  _swift_beginAccess(lVar20 + 0xf0);
  lVar20 = *(long *)(lVar20 + 0xf0);
  if (*(long *)(lVar20 + 0x10) != 0) {
    uVar18 = *(ulong *)(unaff_x22 + 0x680);
    lVar22 = *(long *)(unaff_x22 + 0x678);
    _swift_bridgeObjectRetain_n(lVar20,2);
    FUN_100071370();
    if ((uVar18 & 1) != 0) {
      puVar25 = (undefined8 *)(unaff_x22 + 0x3f8);
      lVar21 = *(long *)(unaff_x22 + 0x650);
      *(undefined8 *)(unaff_x22 + 0x6b0) = *(undefined8 *)(*(long *)(lVar20 + 0x38) + lVar22 * 8);
      _swift_retain();
      _swift_bridgeObjectRelease_n(lVar20,2);
      lVar20 = *(long *)(lVar21 + 200);
      if (lVar20 != 0) {
        uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0x650) + 0xd0);
        *(long *)(unaff_x22 + 0x610) = lVar20;
        *(undefined8 *)(unaff_x22 + 0x618) = uVar15;
        _swift_unknownObjectRetain();
        puVar6 = &DAT_100fd2510;
        FUN_1000f7830(&DAT_100fd2510,&DAT_100c60000);
        puVar8 = &DAT_100fd2518;
        FUN_1000f7830(&DAT_100fd2518,&DAT_100c60008);
        puVar24 = puVar25;
        _swift_dynamicCast(puVar25,unaff_x22 + 0x610,puVar6,puVar8,0xe);
        if (((ulong)puVar24 & 1) != 0) {
          lVar20 = *(long *)(unaff_x22 + 0x410);
          if (lVar20 != 0) {
            puVar24 = *(undefined8 **)(unaff_x22 + 0x648);
            lVar22 = *(long *)(unaff_x22 + 0x418);
            FUN_100004640(puVar25,lVar20);
            uVar15 = *puVar24;
            *(undefined8 *)(unaff_x22 + 0x6b8) = uVar15;
            uVar23 = puVar24[1];
            *(undefined8 *)(unaff_x22 + 0x6c0) = uVar23;
            uVar2 = *(undefined1 *)(puVar24 + 2);
            *(undefined1 *)(unaff_x22 + 0x2ba) = uVar2;
            piVar16 = *(int **)(lVar22 + 8);
            iVar1 = *piVar16;
            plVar10 = (long *)(ulong)(uint)piVar16[1];
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x6c8) = plVar10;
            *plVar10 = unaff_x22;
            plVar10[1] = (long)FUN_100595998;
                    /* WARNING: Could not recover jumptable at 0x00010059542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar16))
                      (plVar10,unaff_x22 + 0x3c0,uVar15,uVar23,uVar2,lVar20,lVar22);
            return;
          }
          goto LAB_1005955cc;
        }
      }
      *(undefined8 *)(unaff_x22 + 0x418) = 0;
      *(undefined8 *)(unaff_x22 + 0x400) = 0;
      *puVar25 = 0;
      *(undefined8 *)(unaff_x22 + 0x410) = 0;
      *(undefined8 *)(unaff_x22 + 0x408) = 0;
LAB_1005955cc:
      puVar24 = *(undefined8 **)(unaff_x22 + 0x648);
      FUN_1000fb4c4(puVar25,&DAT_100fd2500,&DAT_100c5ffe0);
      uVar15 = *puVar24;
      uVar23 = puVar24[1];
      uVar2 = *(undefined1 *)(puVar24 + 2);
      *(undefined8 *)(unaff_x22 + 0x720) = 0;
      *(undefined8 *)(unaff_x22 + 0x718) = 0;
      *(undefined8 *)(unaff_x22 + 0x730) = 0;
      *(undefined8 *)(unaff_x22 + 0x728) = 0;
      *(undefined8 *)(unaff_x22 + 0x740) = 0;
      *(undefined8 *)(unaff_x22 + 0x738) = 0;
      *(undefined8 *)(unaff_x22 + 0x748) = 0;
      *(undefined8 *)(unaff_x22 + 0x710) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x708) = uVar23;
      *(undefined1 *)(unaff_x22 + 699) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x220) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x228) = uVar23;
      *(undefined1 *)(unaff_x22 + 0x230) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x240) = 0;
      *(undefined8 *)(unaff_x22 + 0x238) = 0;
      *(undefined8 *)(unaff_x22 + 0x250) = 0;
      *(undefined8 *)(unaff_x22 + 0x248) = 0;
      *(undefined8 *)(unaff_x22 + 0x260) = 0;
      *(undefined8 *)(unaff_x22 + 600) = 0;
      *(undefined8 *)(unaff_x22 + 0x268) = 0;
      FUN_1004a7398(uVar15,uVar23,uVar2);
      FUN_1004a7398(uVar15,uVar23,uVar2);
      FUN_1004a7398(uVar15,uVar23,uVar2);
      FUN_10059f090(0,0,0,0,0,0,0);
      if (DAT_100fd1ff8 != -1) {
        _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
      }
      uVar27 = DAT_101057b40;
      uVar18 = *(ulong *)(unaff_x22 + 0x650);
      *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x248);
      *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x240);
      *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 600);
      *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x250);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x268);
      *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x260);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x228);
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x220);
      *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x238);
      *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x230);
      FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x1d0);
      FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x180);
      puVar6 = &DAT_100fd2508;
      FUN_1000f7830(&DAT_100fd2508,&DAT_100c5ffe8);
      _swift_task_localValuePush(uVar27,unaff_x22 + 0x130,puVar6);
      _swift_task_isCurrentExecutor(uVar18,0);
      if ((uVar18 & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("MCP/Server.swift",0x10,1,0x317,*(undefined8 *)(unaff_x22 + 0x650),0);
      }
      uVar27 = *(undefined8 *)(unaff_x22 + 0x6b0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x670);
      lVar20 = *(long *)(unaff_x22 + 0x650);
      puVar25 = *(undefined8 **)(unaff_x22 + 0x648);
      TVar9 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(uVar19,1,1,TVar9.unknown);
      puVar6 = &DAT_100fd1fe8;
      FUN_1003b6598();
      puVar8 = &DAT_100ee3490;
      _swift_allocObject(&DAT_100ee3490,0x80,7);
      *(long *)(puVar8 + 0x10) = lVar20;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      *(undefined8 *)(puVar8 + 0x20) = uVar27;
      uVar17 = *puVar25;
      *(undefined8 *)(puVar8 + 0x30) = puVar25[1];
      *(undefined8 *)(puVar8 + 0x28) = uVar17;
      uVar29 = puVar25[3];
      uVar17 = puVar25[2];
      uVar31 = puVar25[5];
      uVar30 = puVar25[4];
      uVar33 = puVar25[7];
      uVar32 = puVar25[6];
      uVar34 = *(undefined8 *)((long)puVar25 + 0x39);
      *(undefined8 *)(puVar8 + 0x69) = *(undefined8 *)((long)puVar25 + 0x41);
      *(undefined8 *)(puVar8 + 0x61) = uVar34;
      *(undefined8 *)(puVar8 + 0x60) = uVar33;
      *(undefined8 *)(puVar8 + 0x58) = uVar32;
      *(undefined8 *)(puVar8 + 0x50) = uVar31;
      *(undefined8 *)(puVar8 + 0x48) = uVar30;
      *(undefined8 *)(puVar8 + 0x40) = uVar29;
      *(undefined8 *)(puVar8 + 0x38) = uVar17;
      *(long *)(puVar8 + 0x78) = lVar20;
      _swift_retain_n(lVar20,2);
      _swift_retain(uVar27);
      FUN_1000f8cac(puVar25,unaff_x22 + 0x270,&DAT_100fcb418,&DAT_100c50268);
      uVar27 = 0;
      FUN_100587bd4(0,0,uVar19,&DAT_100c5fff8,puVar8);
      *(undefined8 *)(unaff_x22 + 0x750) = uVar27;
      _swift_task_localValuePop();
      FUN_10059f1f4(unaff_x22 + 0x220);
      _swift_beginAccess(lVar20 + 0x100,unaff_x22 + 0x520,0x21,0);
      _swift_retain(uVar27);
      uVar19 = *(undefined8 *)(lVar20 + 0x100);
      _swift_isUniquelyReferenced_nonNull_native(uVar19);
      uVar17 = *(undefined8 *)(lVar20 + 0x100);
      *(undefined8 *)(lVar20 + 0x100) = 0x8000000000000000;
      FUN_1004b5b0c(uVar27,uVar15,uVar23,uVar2,uVar19);
      FUN_1004dc818(uVar15,uVar23,uVar2);
      *(undefined8 *)(lVar20 + 0x100) = uVar17;
      _swift_endAccess(unaff_x22 + 0x520);
      plVar10 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x758) = plVar10;
      FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
      puVar6 = &DAT_100fcb578;
      FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
      *(undefined **)(unaff_x22 + 0x760) = puVar6;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100595dbc;
      Swift::Task::get_value((undefined *)(unaff_x22 + 0x2c0));
      return;
    }
    _Var11.unknown = (undefined *)0x2;
    _swift_bridgeObjectRelease_n(lVar20);
  }
  puVar25 = (undefined8 *)(unaff_x22 + 0x5e0);
  SVar37 = *(String *)(unaff_x22 + 0x678);
  cVar3 = *(char *)(unaff_x22 + 0x2b9);
  puVar24 = *(undefined8 **)(unaff_x22 + 0x648);
  Swift::_StringGuts::grow(0x12,_Var11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar40.bridgeObject = pvVar14;
  SVar40.str = pcVar13;
  Swift::String::append(SVar37,SVar40);
  *(undefined8 *)(unaff_x22 + 0x780) = 0x8000000100dad600;
  uVar23 = puVar24[1];
  uVar15 = *puVar24;
  *(undefined1 *)(unaff_x22 + 0x5f0) = *(undefined1 *)(puVar24 + 2);
  *(undefined8 *)(unaff_x22 + 0x5e8) = uVar23;
  *puVar25 = uVar15;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x5e0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x5e8);
  bVar4 = *(byte *)(unaff_x22 + 0x5f0);
  *(undefined8 *)(unaff_x22 + 0x300) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x308) = uVar23;
  *(ulong *)(unaff_x22 + 0x310) = (ulong)bVar4;
  *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000010;
  *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dad600;
  *(undefined8 *)(unaff_x22 + 0x328) = 0;
  *(undefined8 *)(unaff_x22 + 0x330) = 2;
  *(undefined2 *)(unaff_x22 + 0x338) = 0x100;
  if (cVar3 == '\x01') {
    _swift_bridgeObjectRetain(0x8000000100dad600);
    FUN_10054a890(puVar25,unaff_x22 + 0x5b0);
    plVar10 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x788) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1005961c4;
    FUN_10058d7e8(plVar10,unaff_x22 + 0x300);
    return;
  }
  FUN_10054a890(puVar25,unaff_x22 + 0x5c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar25 = *(undefined8 **)(unaff_x22 + 0x640);
  *puVar25 = uVar15;
  puVar25[1] = uVar23;
  puVar25[2] = (ulong)bVar4;
  puVar25[3] = 0xd000000000000010;
  puVar25[4] = 0x8000000100dad600;
  puVar25[6] = 2;
  puVar25[5] = 0;
  *(undefined2 *)(puVar25 + 7) = 0x100;
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar19);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1005955a0:
                    /* WARNING: Could not recover jumptable at 0x0001005955bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100595998 | FUN_100595998 */

void FUN_100595998(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x650);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x6c8));
  *(undefined8 *)(lVar1 + 0x6d8) = *(undefined8 *)(lVar1 + 0x3c8);
  *(undefined8 *)(lVar1 + 0x6d0) = *(undefined8 *)(lVar1 + 0x3c0);
  *(undefined8 *)(lVar1 + 0x6e8) = *(undefined8 *)(lVar1 + 0x3d8);
  *(undefined8 *)(lVar1 + 0x6e0) = *(undefined8 *)(lVar1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x6f8) = *(undefined8 *)(lVar1 + 1000);
  *(undefined8 *)(lVar1 + 0x6f0) = *(undefined8 *)(lVar1 + 0x3e0);
  *(undefined8 *)(lVar1 + 0x700) = *(undefined8 *)(lVar1 + 0x3f0);
  _swift_task_switch(FUN_100595a00,uVar2,0);
  return;
}



/* Address: 0x100595a00 | FUN_100595a00 */

void FUN_100595a00(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  FUN_100004594(unaff_x22 + 0x3f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x700);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x6f8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x6f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x6e8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x6e0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x6d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x6d0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x2ba);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x6c0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x6b8);
  *(undefined8 *)(unaff_x22 + 0x748) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x740) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x738) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x730) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x728) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x720) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x718) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x710) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x708) = uVar10;
  *(undefined1 *)(unaff_x22 + 699) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar10;
  *(undefined1 *)(unaff_x22 + 0x230) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x248) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x250) = uVar15;
  *(undefined8 *)(unaff_x22 + 600) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x260) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x268) = uVar6;
  FUN_1004a7398(uVar8,uVar10,uVar1);
  FUN_1004a7398(uVar8,uVar10,uVar1);
  FUN_1004a7398(uVar8,uVar10,uVar1);
  FUN_10059f090(uVar7,uVar17,uVar16,uVar15,uVar13,uVar11,uVar6);
  if (DAT_100fd1ff8 != -1) {
    _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
  }
  uVar6 = DAT_101057b40;
  uVar9 = *(ulong *)(unaff_x22 + 0x650);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x230);
  FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x1d0);
  FUN_10059f0e8(unaff_x22 + 0x220,unaff_x22 + 0x180);
  puVar2 = &DAT_100fd2508;
  FUN_1000f7830(&DAT_100fd2508,&DAT_100c5ffe8);
  _swift_task_localValuePush(uVar6,unaff_x22 + 0x130,puVar2);
  _swift_task_isCurrentExecutor(uVar9,0);
  if ((uVar9 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Server.swift",0x10,1,0x317,*(undefined8 *)(unaff_x22 + 0x650),0);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x6b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar12 = *(long *)(unaff_x22 + 0x650);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x648);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(uVar7,1,1,TVar3.unknown);
  puVar2 = &DAT_100fd1fe8;
  FUN_1003b6598();
  puVar4 = &DAT_100ee3490;
  _swift_allocObject(&DAT_100ee3490,0x80,7);
  *(long *)(puVar4 + 0x10) = lVar12;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar11 = *puVar14;
  *(undefined8 *)(puVar4 + 0x30) = puVar14[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  uVar13 = puVar14[3];
  uVar11 = puVar14[2];
  uVar16 = puVar14[5];
  uVar15 = puVar14[4];
  uVar18 = puVar14[7];
  uVar17 = puVar14[6];
  uVar19 = *(undefined8 *)((long)puVar14 + 0x39);
  *(undefined8 *)(puVar4 + 0x69) = *(undefined8 *)((long)puVar14 + 0x41);
  *(undefined8 *)(puVar4 + 0x61) = uVar19;
  *(undefined8 *)(puVar4 + 0x60) = uVar18;
  *(undefined8 *)(puVar4 + 0x58) = uVar17;
  *(undefined8 *)(puVar4 + 0x50) = uVar16;
  *(undefined8 *)(puVar4 + 0x48) = uVar15;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(long *)(puVar4 + 0x78) = lVar12;
  _swift_retain_n(lVar12,2);
  _swift_retain(uVar6);
  FUN_1000f8cac(puVar14,unaff_x22 + 0x270,&DAT_100fcb418,&DAT_100c50268);
  uVar6 = 0;
  FUN_100587bd4(0,0,uVar7,&DAT_100c5fff8,puVar4);
  *(undefined8 *)(unaff_x22 + 0x750) = uVar6;
  _swift_task_localValuePop();
  FUN_10059f1f4(unaff_x22 + 0x220);
  _swift_beginAccess(lVar12 + 0x100,unaff_x22 + 0x520,0x21,0);
  _swift_retain(uVar6);
  uVar7 = *(undefined8 *)(lVar12 + 0x100);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar11 = *(undefined8 *)(lVar12 + 0x100);
  *(undefined8 *)(lVar12 + 0x100) = 0x8000000000000000;
  FUN_1004b5b0c(uVar6,uVar8,uVar10,uVar1,uVar7);
  FUN_1004dc818(uVar8,uVar10,uVar1);
  *(undefined8 *)(lVar12 + 0x100) = uVar11;
  _swift_endAccess(unaff_x22 + 0x520);
  plVar5 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x758) = plVar5;
  FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
  puVar2 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *(undefined **)(unaff_x22 + 0x760) = puVar2;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100595dbc;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x2c0));
  return;
}



/* Address: 0x100595dbc | FUN_100595dbc */

void FUN_100595dbc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x768) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x758));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100595e18;
  }
  else {
    pcVar1 = FUN_1005964d8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x650),0);
  return;
}



/* Address: 0x100595e18 | FUN_100595e18 */

void FUN_100595e18(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  *(undefined8 *)(unaff_x22 + 0x388) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x2c0);
  *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x3b2) = *(undefined8 *)(unaff_x22 + 0x2f2);
  *(undefined8 *)(unaff_x22 + 0x3aa) = *(undefined8 *)(unaff_x22 + 0x2ea);
  if (*(char *)(unaff_x22 + 0x2b9) == '\x01') {
    plVar3 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x770) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100596008;
    FUN_10058d7e8(unaff_x22 + 0x380);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x748);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x720);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x718);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x6b0);
  lVar11 = *(long *)(unaff_x22 + 0x650);
  uVar2 = *(undefined2 *)(unaff_x22 + 0x2f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar1 = *(undefined1 *)(unaff_x22 + 699);
  FUN_1004dc818(uVar10,uVar12,uVar1);
  _swift_beginAccess(lVar11 + 0x100,unaff_x22 + 0x4f0,0x21,0);
  FUN_1005065b4(uVar10,uVar12,uVar1);
  _swift_endAccess(unaff_x22 + 0x4f0);
  _swift_release(uVar10);
  FUN_1005080ac(uVar17,uVar16,uVar15,uVar14,uVar13,uVar5,uVar9);
  FUN_10059f1f4(unaff_x22 + 0x220);
  _swift_release(uVar6);
  _swift_release(uVar4);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x640);
  puVar8[3] = uVar20;
  puVar8[2] = uVar18;
  puVar8[5] = uVar21;
  puVar8[4] = uVar19;
  puVar8[1] = uVar23;
  *puVar8 = uVar22;
  puVar8[6] = uVar7;
  *(undefined2 *)(puVar8 + 7) = uVar2;
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100596004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100596008 | FUN_100596008 */

void FUN_100596008(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x778) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x770));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x650);
    FUN_1004dc818(*(undefined8 *)(lVar3 + 0x710),*(undefined8 *)(lVar3 + 0x708),
                  *(undefined1 *)(lVar3 + 699));
    pcVar1 = FUN_10059607c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x650);
    pcVar1 = FUN_1005968ac;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10059607c | FUN_10059607c */

void FUN_10059607c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x748);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x720);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x718);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x6b0);
  lVar8 = *(long *)(unaff_x22 + 0x650);
  uVar1 = *(undefined1 *)(unaff_x22 + 699);
  FUN_1000fb4c4(unaff_x22 + 0x380,&DAT_100fcb3e0,&DAT_100c50230);
  _swift_beginAccess(lVar8 + 0x100,unaff_x22 + 0x538,0x21,0);
  FUN_1005065b4(uVar7,uVar9,uVar1);
  _swift_endAccess(unaff_x22 + 0x538);
  _swift_release(uVar7);
  FUN_1005080ac(uVar14,uVar13,uVar12,uVar11,uVar10,uVar6,uVar2);
  FUN_10059f1f4(unaff_x22 + 0x220);
  _swift_release(uVar3);
  _swift_release(uVar5);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x640);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0xff;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined2 *)(puVar4 + 7) = 0;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005961c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005961c4 | FUN_1005961c4 */

void FUN_1005961c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x790) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x788));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100596220;
  }
  else {
    pcVar1 = FUN_1005962a4;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x650),0);
  return;
}



/* Address: 0x100596220 | FUN_100596220 */

void FUN_100596220(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x780);
  FUN_1000fb4c4(unaff_x22 + 0x300,&DAT_100fcb3e0,&DAT_100c50230);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x640);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0xff;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005962a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005962a4 | FUN_1005962a4 */

void FUN_1005962a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x780));
  FUN_1000fb4c4(unaff_x22 + 0x300,&DAT_100fcb3e0,&DAT_100c50230);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x668);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x670));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100596300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100596304 | FUN_100596304 */

void FUN_100596304(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x7c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x7b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100596360;
  }
  else {
    pcVar1 = FUN_100596c98;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x650),0);
  return;
}



/* Address: 0x100596360 | FUN_100596360 */

void FUN_100596360(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x7b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x798);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x748);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x720);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x718);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x6b0);
  lVar16 = *(long *)(unaff_x22 + 0x650);
  uVar1 = *(undefined1 *)(unaff_x22 + 700);
  uVar2 = *(undefined1 *)(unaff_x22 + 699);
  FUN_1000fb4c4(unaff_x22 + 0x340,&DAT_100fcb3e0,&DAT_100c50230);
  FUN_1004d9f84(uVar13,uVar19,uVar14,uVar1);
  _swift_errorRelease(uVar15);
  _swift_beginAccess(lVar16 + 0x100,unaff_x22 + 0x490,0x21,0);
  FUN_1005065b4(uVar17,uVar18,uVar2);
  _swift_endAccess(unaff_x22 + 0x490);
  _swift_release(uVar17);
  FUN_1005080ac(uVar6,uVar12,uVar5,uVar11,uVar4,uVar10,uVar3);
  FUN_10059f1f4(unaff_x22 + 0x220);
  _swift_release(uVar7);
  _swift_release(uVar9);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x640);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0xff;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  *(undefined2 *)(puVar8 + 7) = 0;
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005964d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005964d8 | FUN_1005964d8 */

void FUN_1005964d8(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  String SVar25;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0x768);
  *(undefined8 *)(unaff_x22 + 0x798) = uVar20;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar14 = *(ulong *)(unaff_x22 + 0x668);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x658);
  *(undefined8 *)(unaff_x22 + 0x630) = uVar20;
  _swift_errorRetain(uVar20);
  _swift_dynamicCast(uVar14,unaff_x22 + 0x630,uVar16,uVar18,0);
  if ((uVar14 & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x630));
    *(undefined8 *)(unaff_x22 + 0x628) = uVar20;
    _swift_errorRetain(uVar20);
    lVar15 = unaff_x22 + 0x470;
    _swift_dynamicCast(lVar15,unaff_x22 + 0x628,uVar16,&DAT_100eda9c8,6);
    if ((int)lVar15 == 0) {
      _swift_getErrorValue(uVar20,unaff_x22 + 0x620,unaff_x22 + 0x580);
      SVar25 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      uVar16 = 0;
      uVar4 = 4;
    }
    else {
      SVar25 = *(String *)(unaff_x22 + 0x470);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x480);
      uVar4 = (uint)*(byte *)(unaff_x22 + 0x488);
    }
    *(char *)(unaff_x22 + 700) = (char)uVar4;
    *(undefined8 *)(unaff_x22 + 0x7b0) = uVar16;
    *(String *)(unaff_x22 + 0x7a0) = SVar25;
    uVar18 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
    uVar1 = *(undefined1 *)(unaff_x22 + 699);
    uVar14 = (ulong)uVar4;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x348) = uVar5;
    *(undefined1 *)(unaff_x22 + 0x350) = uVar1;
    *(String *)(unaff_x22 + 0x358) = SVar25;
    *(undefined8 *)(unaff_x22 + 0x368) = uVar16;
    *(ulong *)(unaff_x22 + 0x370) = uVar14;
    *(undefined2 *)(unaff_x22 + 0x378) = 0x100;
    if (*(char *)(unaff_x22 + 0x2b9) == '\x01') {
      FUN_1004d9ee8(SVar25.str,SVar25.bridgeObject,uVar16,uVar14);
      plVar2 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x7b8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100596304;
      FUN_10058d7e8(plVar2,unaff_x22 + 0x340);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x750);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x748);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x738);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x730);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x728);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x720);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x718);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x6b0);
    lVar15 = *(long *)(unaff_x22 + 0x650);
    _swift_errorRelease(uVar20);
    _swift_beginAccess(lVar15 + 0x100,unaff_x22 + 0x568,0x21,0);
    FUN_1005065b4(uVar18,uVar5,uVar1);
    _swift_endAccess(unaff_x22 + 0x568);
    _swift_release(uVar18);
    FUN_1005080ac(uVar10,uVar9,uVar21,uVar8,uVar19,uVar7,uVar17);
    FUN_10059f1f4(unaff_x22 + 0x220);
    _swift_release(uVar11);
    _swift_release(uVar6);
    uVar12 = (ulong)*(byte *)(unaff_x22 + 699);
    auVar24 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x708),
                       *(undefined1 (*) [16])(unaff_x22 + 0x708),8,1);
    uVar3 = 0x100;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x750);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x748);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x738);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x730);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x728);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x720);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x718);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x708);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x6b0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x668);
    lVar23 = *(long *)(unaff_x22 + 0x660);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x658);
    lVar15 = *(long *)(unaff_x22 + 0x650);
    uVar1 = *(undefined1 *)(unaff_x22 + 699);
    FUN_1004dc818(uVar16,uVar21,uVar1);
    _swift_errorRelease(uVar20);
    (**(code **)(lVar23 + 8))(uVar17,uVar22);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x630));
    _swift_beginAccess(lVar15 + 0x100,unaff_x22 + 0x4a8,0x21,0);
    FUN_1005065b4(uVar16,uVar21,uVar1);
    _swift_endAccess(unaff_x22 + 0x4a8);
    _swift_release(uVar16);
    FUN_1005080ac(uVar19,uVar7,uVar6,uVar11,uVar5,uVar10,uVar18);
    FUN_10059f1f4(unaff_x22 + 0x220);
    _swift_release(uVar8);
    _swift_release(uVar9);
    SVar25 = (String)ZEXT816(0);
    uVar16 = 0;
    uVar14 = 0;
    uVar3 = 0;
    auVar24 = ZEXT816(0);
    uVar12 = 0xff;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar13 = *(undefined8 **)(unaff_x22 + 0x640);
  puVar13[1] = auVar24._8_8_;
  *puVar13 = auVar24._0_8_;
  puVar13[2] = uVar12;
  *(String *)(puVar13 + 3) = SVar25;
  puVar13[5] = uVar16;
  puVar13[6] = uVar14;
  *(undefined2 *)(puVar13 + 7) = uVar3;
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001005968a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005968ac | FUN_1005968ac */

void FUN_1005968ac(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  String SVar25;
  
  FUN_1000fb4c4(unaff_x22 + 0x380,&DAT_100fcb3e0,&DAT_100c50230);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x778);
  *(undefined8 *)(unaff_x22 + 0x798) = uVar20;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar14 = *(ulong *)(unaff_x22 + 0x668);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x658);
  *(undefined8 *)(unaff_x22 + 0x630) = uVar20;
  _swift_errorRetain(uVar20);
  _swift_dynamicCast(uVar14,unaff_x22 + 0x630,uVar16,uVar18,0);
  if ((uVar14 & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x630));
    *(undefined8 *)(unaff_x22 + 0x628) = uVar20;
    _swift_errorRetain(uVar20);
    lVar15 = unaff_x22 + 0x470;
    _swift_dynamicCast(lVar15,unaff_x22 + 0x628,uVar16,&DAT_100eda9c8,6);
    if ((int)lVar15 == 0) {
      _swift_getErrorValue(uVar20,unaff_x22 + 0x620,unaff_x22 + 0x580);
      SVar25 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      uVar16 = 0;
      uVar4 = 4;
    }
    else {
      SVar25 = *(String *)(unaff_x22 + 0x470);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x480);
      uVar4 = (uint)*(byte *)(unaff_x22 + 0x488);
    }
    *(char *)(unaff_x22 + 700) = (char)uVar4;
    *(undefined8 *)(unaff_x22 + 0x7b0) = uVar16;
    *(String *)(unaff_x22 + 0x7a0) = SVar25;
    uVar18 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
    uVar1 = *(undefined1 *)(unaff_x22 + 699);
    uVar14 = (ulong)uVar4;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x348) = uVar5;
    *(undefined1 *)(unaff_x22 + 0x350) = uVar1;
    *(String *)(unaff_x22 + 0x358) = SVar25;
    *(undefined8 *)(unaff_x22 + 0x368) = uVar16;
    *(ulong *)(unaff_x22 + 0x370) = uVar14;
    *(undefined2 *)(unaff_x22 + 0x378) = 0x100;
    if (*(char *)(unaff_x22 + 0x2b9) == '\x01') {
      FUN_1004d9ee8(SVar25.str,SVar25.bridgeObject,uVar16,uVar14);
      plVar2 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x7b8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100596304;
      FUN_10058d7e8(plVar2,unaff_x22 + 0x340);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x750);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x748);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x738);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x730);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x728);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x720);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x718);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x6b0);
    lVar15 = *(long *)(unaff_x22 + 0x650);
    _swift_errorRelease(uVar20);
    _swift_beginAccess(lVar15 + 0x100,unaff_x22 + 0x568,0x21,0);
    FUN_1005065b4(uVar18,uVar5,uVar1);
    _swift_endAccess(unaff_x22 + 0x568);
    _swift_release(uVar18);
    FUN_1005080ac(uVar10,uVar9,uVar21,uVar8,uVar19,uVar7,uVar17);
    FUN_10059f1f4(unaff_x22 + 0x220);
    _swift_release(uVar11);
    _swift_release(uVar6);
    uVar12 = (ulong)*(byte *)(unaff_x22 + 699);
    auVar24 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x708),
                       *(undefined1 (*) [16])(unaff_x22 + 0x708),8,1);
    uVar3 = 0x100;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x750);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x748);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x738);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x730);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x728);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x720);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x718);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x708);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x6b0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x668);
    lVar23 = *(long *)(unaff_x22 + 0x660);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x658);
    lVar15 = *(long *)(unaff_x22 + 0x650);
    uVar1 = *(undefined1 *)(unaff_x22 + 699);
    FUN_1004dc818(uVar16,uVar21,uVar1);
    _swift_errorRelease(uVar20);
    (**(code **)(lVar23 + 8))(uVar17,uVar22);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x630));
    _swift_beginAccess(lVar15 + 0x100,unaff_x22 + 0x4a8,0x21,0);
    FUN_1005065b4(uVar16,uVar21,uVar1);
    _swift_endAccess(unaff_x22 + 0x4a8);
    _swift_release(uVar16);
    FUN_1005080ac(uVar19,uVar7,uVar6,uVar11,uVar5,uVar10,uVar18);
    FUN_10059f1f4(unaff_x22 + 0x220);
    _swift_release(uVar8);
    _swift_release(uVar9);
    SVar25 = (String)ZEXT816(0);
    uVar16 = 0;
    uVar14 = 0;
    uVar3 = 0;
    auVar24 = ZEXT816(0);
    uVar12 = 0xff;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x670);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x668);
  puVar13 = *(undefined8 **)(unaff_x22 + 0x640);
  puVar13[1] = auVar24._8_8_;
  *puVar13 = auVar24._0_8_;
  puVar13[2] = uVar12;
  *(String *)(puVar13 + 3) = SVar25;
  puVar13[5] = uVar16;
  puVar13[6] = uVar14;
  *(undefined2 *)(puVar13 + 7) = uVar3;
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x000100596c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100596c98 | FUN_100596c98 */

void FUN_100596c98(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7b0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x748);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x720);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x718);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x6b0);
  lVar13 = *(long *)(unaff_x22 + 0x650);
  uVar1 = *(undefined1 *)(unaff_x22 + 700);
  uVar2 = *(undefined1 *)(unaff_x22 + 699);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x798));
  FUN_1004d9f84(uVar11,uVar17,uVar12,uVar1);
  FUN_1000fb4c4(unaff_x22 + 0x340,&DAT_100fcb3e0,&DAT_100c50230);
  _swift_beginAccess(lVar13 + 0x100,unaff_x22 + 0x550,0x21,0);
  FUN_1005065b4(uVar15,uVar16,uVar2);
  _swift_endAccess(unaff_x22 + 0x550);
  _swift_release(uVar15);
  FUN_1005080ac(uVar14,uVar6,uVar5,uVar10,uVar4,uVar9,uVar3);
  FUN_10059f1f4(unaff_x22 + 0x220);
  _swift_release(uVar7);
  _swift_release(uVar8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x668);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x670));
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000100596dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100596df0 | FUN_100596df0 */

void FUN_100596df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  CancellationError CVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x348) = param_6;
  *(undefined8 *)(unaff_x22 + 0x340) = param_5;
  *(undefined8 *)(unaff_x22 + 0x338) = param_4;
  *(undefined8 *)(unaff_x22 + 0x330) = param_1;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x350) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x358) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x360) = uVar2;
  _swift_task_switch(FUN_100596e60,param_6,0);
  return;
}



/* Address: 0x100596e60 | FUN_100596e60 */

/* WARNING: Removing unreachable block (ram,0x000100596e8c) */
/* WARNING: Removing unreachable block (ram,0x000100596fc0) */
/* WARNING: Removing unreachable block (ram,0x000100597058) */
/* WARNING: Removing unreachable block (ram,0x000100596ffc) */
/* WARNING: Removing unreachable block (ram,0x0001005970c8) */
/* WARNING: Removing unreachable block (ram,0x000100596ed4) */
/* WARNING: Removing unreachable block (ram,0x000100596eec) */
/* WARNING: Removing unreachable block (ram,0x0001005970e0) */
/* WARNING: Removing unreachable block (ram,0x00010059715c) */

void FUN_100596e60(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  (extension_Swift)::Swift::Task::_checkCancellation();
  piVar3 = *(int **)(**(long **)(unaff_x22 + 0x338) + 0x50);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x368) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100597178;
                    /* WARNING: Could not recover jumptable at 0x000100596fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,unaff_x22 + 0x1d0,*(undefined8 *)(unaff_x22 + 0x340));
  return;
}



/* Address: 0x100597178 | FUN_100597178 */

void FUN_100597178(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x370) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x368));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005971d4;
  }
  else {
    pcVar1 = FUN_1005975e4;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x348),0);
  return;
}



/* Address: 0x1005971d4 | FUN_1005971d4 */

void FUN_1005971d4(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x330);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1fa);
  *(undefined8 *)((long)puVar1 + 0x32) = *(undefined8 *)(unaff_x22 + 0x202);
  *(undefined8 *)((long)puVar1 + 0x2a) = uVar8;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x360));
                    /* WARNING: Could not recover jumptable at 0x000100597224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


