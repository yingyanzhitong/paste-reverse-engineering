/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a100e8 | FUN_100a100e8 */

void FUN_100a100e8(void)

{
  FUN_100a100f0(0);
  return;
}



/* Address: 0x100a100f0 | FUN_100a100f0 */

void FUN_100a100f0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff4a08 != 0) {
    return;
  }
  puVar1 = &DAT_100ff4a10;
  FUN_1000f8b08(&DAT_100ff4a10,&DAT_100c8e040);
  uVar2 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,puVar1);
  DAT_100ff4a08 = uVar2;
  return;
}



/* Address: 0x100a10144 | FUN_100a10144 */

undefined1  [16] FUN_100a10144(void)

{
  return ZEXT816(0x100f28308);
}



/* Address: 0x100a10154 | FUN_100a10154 */

void FUN_100a10154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x330) = param_6;
  *(undefined8 *)(unaff_x22 + 0x328) = param_5;
  *(undefined8 *)(unaff_x22 + 800) = param_4;
  *(undefined8 *)(unaff_x22 + 0x318) = param_3;
  *(undefined8 *)(unaff_x22 + 0x310) = param_2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a101d0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a101d0 | FUN_100a101d0 */

void FUN_100a101d0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x310);
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  lVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  *(long *)(unaff_x22 + 0x338) = lVar6;
  uVar2 = lVar6 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x340) = uVar2;
  puVar1 = &DAT_100ff4a20;
  FUN_1000f7830(&DAT_100ff4a20,&DAT_100c8e098);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  FUN_1000f8cac(uVar7,uVar3,&DAT_100ff4a20,&DAT_100c8e098);
  FUN_100a1c788(uVar2,uVar3);
  _swift_task_dealloc(uVar3);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x348) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a102f8;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    FUN_1009ebbe0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a102f8 | FUN_100a102f8 */

void FUN_100a102f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x350) = param_1;
  *(undefined8 *)(lVar3 + 0x358) = param_2;
  *(undefined8 *)(lVar3 + 0x360) = param_3;
  *(long *)(lVar3 + 0x368) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x348));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a103ac;
    pcVar1 = FUN_100a103b0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a103ac:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a109dc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a103b0 | FUN_100a103b0 */

void FUN_100a103b0(undefined8 *param_1)

{
  pthread_mutexattr_t *ppVar1;
  long lVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar12 = *(ulong *)(unaff_x22 + 0x360);
  if (uVar12 >> 0x38 < 0xff) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
    if (uVar12 >> 0x38 == 0) {
      ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
      *(undefined8 *)(unaff_x22 + 0x370) = **(undefined8 **)(unaff_x22 + 0x328);
      *(undefined8 *)(unaff_x22 + 0x378) = (*(undefined8 **)(unaff_x22 + 0x328))[1];
      *(long *)(unaff_x22 + 0x2e8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x380) = **(undefined8 **)(unaff_x22 + 800);
      *(undefined8 *)(unaff_x22 + 0x388) = (*(undefined8 **)(unaff_x22 + 800))[1];
      FUN_1008758fc(uVar14,uVar11,uVar12,0);
      lVar13 = *(long *)(unaff_x22 + 0x358);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x350);
      *(long *)(unaff_x22 + 0x398) = lVar13;
      *(undefined8 *)(unaff_x22 + 0x390) = uVar15;
      uVar11 = *(undefined8 *)(unaff_x22 + 0x340);
      lVar10 = *(long *)(unaff_x22 + 0x338);
      lVar4 = 0;
      FUN_1009e1f14();
      puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined8 **)(unaff_x22 + 0x3a0) = puVar5;
      uVar12 = lVar10 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar12);
      FUN_1000f8cac(uVar11,uVar12,&DAT_100ff3c00,&DAT_100c8d460);
      _swift_retain(uVar15);
      _swift_retain(lVar13);
      uVar14 = uVar15;
      lVar10 = lVar13;
      FUN_100867fec(uVar15);
      uVar11 = 0;
      if (lVar10 != 0) {
        uVar11 = uVar14;
      }
      lVar2 = -0x2000000000000000;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      FUN_1009fe520(unaff_x22 + 0x50,uVar11,lVar2);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar5[3] = *(undefined8 *)(unaff_x22 + 0x68);
      puVar5[2] = uVar17;
      puVar5[5] = uVar19;
      puVar5[4] = uVar18;
      puVar5[1] = uVar14;
      *puVar5 = uVar11;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
      puVar5[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
      puVar5[10] = uVar19;
      puVar5[0xd] = uVar21;
      puVar5[0xc] = uVar20;
      puVar5[7] = uVar14;
      puVar5[6] = uVar11;
      puVar5[9] = uVar18;
      puVar5[8] = uVar17;
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
      puVar5[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
      puVar5[0x12] = uVar19;
      puVar5[0x15] = uVar21;
      puVar5[0x14] = uVar20;
      puVar5[0xf] = uVar14;
      puVar5[0xe] = uVar11;
      puVar5[0x11] = uVar18;
      puVar5[0x10] = uVar17;
      puVar5[0x16] = uVar15;
      puVar5[0x17] = lVar13;
      lVar10 = (long)puVar5 + (long)*(int *)(lVar4 + 0x18);
      FUN_1000f8cac(uVar12,lVar10,&DAT_100ff3c00,&DAT_100c8d460);
      puVar6 = &DAT_100ff3c08;
      FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
      _swift_allocObject();
      puVar6[0x10] = 0;
      *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2f0);
      ppVar1->__sig = *(long *)(unaff_x22 + 0x2e8);
      _pthread_mutexattr_init(ppVar1);
      iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar6 + 0x18),ppVar1);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a109dc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x388);
      piVar16 = *(int **)(unaff_x22 + 0x380);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
      FUN_1000fb4c4(uVar12,&DAT_100ff3c00,&DAT_100c8d460);
      lVar4 = 0;
      FUN_1009e908c();
      *(undefined **)(lVar10 + *(int *)(lVar4 + 0x14)) = puVar6;
      uVar11 = 0;
      FUN_1009e8f94(0);
      _swift_storeEnumTagMultiPayload(lVar10,uVar11,1);
      _swift_task_dealloc(uVar12);
      lVar10 = 0;
      FUN_100a03644();
      uVar12 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x3a8) = uVar12;
      FUN_1000f8cac(uVar15,uVar12,&DAT_100ff4568,&DAT_100c8dc00);
      iVar3 = *piVar16;
      plVar8 = (long *)(ulong)(uint)piVar16[1];
      _swift_retain(uVar14);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3b0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a10cd0;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a10700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar3 + (long)piVar16))
                  (puVar5,uVar12,*(undefined8 *)(unaff_x22 + 0x370),
                   *(undefined8 *)(unaff_x22 + 0x378));
        return;
      }
      goto LAB_100a109d4;
    }
    FUN_1009edae4();
    puVar6 = &DAT_100f28438;
    _swift_allocError(&DAT_100f28438,param_1,0,0);
    *param_1 = uVar14;
    param_1[1] = uVar11;
    param_1[2] = uVar12;
    _swift_willThrow();
    *(undefined8 *)(unaff_x22 + 0x308) = puVar6;
    _swift_errorRetain(puVar6);
    puVar7 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    uVar12 = unaff_x22 + 0x4f0;
    _swift_dynamicCast(uVar12,(undefined8 *)(unaff_x22 + 0x308),puVar7,&DAT_100f0ace8,0);
    if ((uVar12 & 1) != 0) {
      lVar4 = *(long *)(unaff_x22 + 0x330);
      _swift_errorRelease(puVar6);
      _swift_beginAccess(lVar4 + 0x20,unaff_x22 + 0x270,0,0);
      FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x220);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x238);
      lVar10 = *(long *)(unaff_x22 + 0x240);
      FUN_100004640(unaff_x22 + 0x220,uVar11);
      (**(code **)(lVar10 + 0x70))(uVar11,lVar10);
      FUN_100004594(unaff_x22 + 0x220);
      if (((uint)uVar11 & 0xff) < 2) {
        FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x248);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar10 = *(long *)(unaff_x22 + 0x268);
        FUN_100004640(unaff_x22 + 0x248,uVar11);
        *(undefined1 *)(unaff_x22 + 0x100) = 1;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
        *(undefined8 *)(unaff_x22 + 0x120) = 0;
        *(undefined8 *)(unaff_x22 + 0x118) = 0;
        *(undefined8 *)(unaff_x22 + 0x130) = 0;
        *(undefined8 *)(unaff_x22 + 0x128) = 0;
        *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
        *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
        *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
        *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
        *(undefined1 *)(unaff_x22 + 0x160) = 1;
        *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
        *(undefined8 *)(unaff_x22 + 0x180) = 0;
        *(undefined8 *)(unaff_x22 + 0x178) = 0;
        *(undefined8 *)(unaff_x22 + 400) = 0;
        *(undefined8 *)(unaff_x22 + 0x188) = 0;
        *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
        FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
        FUN_1004eaa3c(unaff_x22 + 0x160);
        (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x100,uVar11,lVar10);
        FUN_1004eaa3c(unaff_x22 + 0x100);
        FUN_100004594(unaff_x22 + 0x248);
      }
      puVar6 = &DAT_100ff4ab0;
      FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
      _swift_initStaticObject();
      FUN_10085d78c();
      uVar14 = 0x7571655220646142;
      uVar11 = 400;
      FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar6);
      *(undefined8 *)(unaff_x22 + 0x468) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x470) = uVar14;
      plVar8 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x478) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a13a28;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
        FUN_100a0392c(uVar11,uVar14,0);
        return;
      }
      goto LAB_100a109d4;
    }
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar10 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x340);
    FUN_1000fb4c4(uVar11,&DAT_100ff3c00,&DAT_100c8d460);
    _swift_task_dealloc(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar10 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar10 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a1045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_100a109d4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a109dc | FUN_100a109dc */

void FUN_100a109dc(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x368);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar5;
  _swift_errorRetain(uVar5);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar6 = unaff_x22 + 0x4f0;
  _swift_dynamicCast(lVar6,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar6 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100a10cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x330);
    _swift_errorRelease(uVar5);
    _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x270,0,0);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x220);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar6 = *(long *)(unaff_x22 + 0x240);
    FUN_100004640(unaff_x22 + 0x220,uVar5);
    (**(code **)(lVar6 + 0x70))(uVar5,lVar6);
    FUN_100004594(unaff_x22 + 0x220);
    if (((uint)uVar5 & 0xff) < 2) {
      FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x248);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar6 = *(long *)(unaff_x22 + 0x268);
      FUN_100004640(unaff_x22 + 0x248,uVar5);
      *(undefined1 *)(unaff_x22 + 0x100) = 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x120) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
      *(undefined8 *)(unaff_x22 + 0x128) = 0;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
      *(undefined1 *)(unaff_x22 + 0x160) = 1;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x180) = 0;
      *(undefined8 *)(unaff_x22 + 0x178) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
      FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
      FUN_1004eaa3c(unaff_x22 + 0x160);
      (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x100,uVar5,lVar6);
      FUN_1004eaa3c(unaff_x22 + 0x100);
      FUN_100004594(unaff_x22 + 0x248);
    }
    puVar1 = &DAT_100ff4ab0;
    FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
    _swift_initStaticObject();
    FUN_10085d78c();
    uVar3 = 0x7571655220646142;
    uVar5 = 400;
    FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar1);
    *(undefined8 *)(unaff_x22 + 0x468) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar3;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x478) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a13a28;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      FUN_100a0392c(uVar5,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a10cd0 | FUN_100a10cd0 */

void FUN_100a10cd0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x3b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x3b0));
  _swift_release(*(undefined8 *)(lVar3 + 0x388));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a10d84;
    pcVar1 = FUN_100a10d88;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a10d84:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a11454;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a10d88 | FUN_100a10d88 */

void FUN_100a10d88(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  _StringGuts _Var5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  Continuation_conflict CVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  _StringGuts _Var15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long unaff_x22;
  undefined8 uVar23;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var5.unknown = (undefined *)0x697463656e6e6f43;
  _Var15.unknown = (undefined *)0xea00000000006e6f;
  FUN_10085c5ec(0x697463656e6e6f43,0xea00000000006e6f,0x697463656e6e6f63,0xea00000000006e6f,
                *(undefined8 *)(unaff_x22 + 0x398));
  if (_Var15.unknown == (undefined *)0x0) {
LAB_100a10e30:
    *(undefined8 *)(unaff_x22 + 0x3e0) = 0xff00000000000000;
    *(undefined8 *)(unaff_x22 + 0x3d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
    uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
    puVar8 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    *(undefined **)(unaff_x22 + 1000) = puVar8;
    plVar6 = (long *)(*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3f0) = plVar6;
    FUN_1000f8cac(uVar19,plVar6,&DAT_100ff3c10,&DAT_100c8e0d0);
    plVar7 = plVar6;
    _swift_getEnumCaseMultiPayload(plVar6,puVar8);
    if ((int)plVar7 == 1) {
      lVar17 = *plVar6;
      *(long *)(unaff_x22 + 0x420) = lVar17;
      uVar19 = *(undefined8 *)(lVar17 + 0x10);
      bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar4 & 1) == 0) {
        pcVar18 = FUN_100a1585c;
        _swift_task_addCancellationHandler(FUN_100a1585c,uVar19);
        *(code **)(unaff_x22 + 0x4a0) = pcVar18;
        plVar7 = (long *)0xc0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x4a8) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100a1417c;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
          FUN_1009f6d74(uVar19);
          return;
        }
      }
      else {
        plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x498) = plVar7;
        FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100a140b4;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
          Swift::_withTaskCancellationHandler();
          return;
        }
      }
    }
    else {
      puVar8 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      *(undefined **)(unaff_x22 + 0x3f8) = puVar8;
      lVar17 = *(long *)(puVar8 + -8);
      uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x400) = uVar9;
      pcVar18 = *(code **)(lVar17 + 0x20);
      *(code **)(unaff_x22 + 0x408) = pcVar18;
      (*pcVar18)();
      plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x410) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100a11960;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
        Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
        return;
      }
    }
  }
  else {
    if (_Var5.unknown == (undefined *)0x65736f6c63 && _Var15.unknown == &DAT_e500000000000000) {
      _swift_bridgeObjectRelease(_Var15.unknown);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var15,(_StringComparisonResult)0x63);
      _swift_bridgeObjectRelease(_Var15.unknown);
      if (!bVar3) goto LAB_100a10e30;
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x390);
    FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x350),*(undefined8 *)(unaff_x22 + 0x358),
                  *(undefined8 *)(unaff_x22 + 0x360));
    _swift_release(uVar21);
    _swift_release(uVar23);
    FUN_100a15820(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar8 = &DAT_100ff4578;
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    plVar6 = (long *)(*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1000f8cac(uVar19,plVar6,&DAT_100ff4578,&DAT_100c8e0b0);
    plVar7 = plVar6;
    _swift_getEnumCaseMultiPayload(plVar6,puVar8);
    if ((int)plVar7 == 1) {
      lVar17 = *plVar6;
      FUN_100a1bc44(0,*(undefined8 *)(lVar17 + 0x10));
      _swift_release(lVar17);
    }
    else {
      CVar10.unknown = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      lVar17 = *(long *)(CVar10.unknown + -8);
      uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      (**(code **)(lVar17 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar10);
      (**(code **)(lVar17 + 8))(uVar9,CVar10.unknown);
      _swift_task_dealloc(uVar9);
    }
    puVar22 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar6);
    puVar11 = (undefined *)*puVar22;
    lVar17 = puVar22[1];
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x20))();
    *(undefined **)(unaff_x22 + 0x3c0) = puVar11;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a11798;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar8 = &DAT_100f28338;
    _swift_allocObject(&DAT_100f28338,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar17;
    puVar12 = &DAT_100f28360;
    _swift_allocObject(&DAT_100f28360,0x28,7);
    *(code **)(puVar12 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar12 + 0x18) = puVar8;
    *(undefined **)(puVar12 + 0x20) = puVar11;
    uVar9 = *(ulong *)(puVar11 + 0x20);
    lVar1 = *(long *)(puVar11 + 0x28);
    _swift_getObjectType();
    pcVar18 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(puVar8,2);
    _swift_retain_n(puVar11,2);
    uVar13 = uVar9;
    (*pcVar18)(uVar9,lVar1);
    if ((uVar13 & 1) == 0) {
      puVar14 = &DAT_100f28388;
      _swift_allocObject(&DAT_100f28388,0x28,7);
      *(undefined **)(puVar14 + 0x10) = puVar11;
      *(code **)(puVar14 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar14 + 0x20) = puVar12;
      pcVar18 = *(code **)(lVar1 + 0x18);
      _swift_retain(puVar11);
      _swift_retain(puVar12);
      (*pcVar18)(FUN_1008c1400,puVar14,uVar9,lVar1);
      _swift_release(puVar12);
      puVar12 = puVar8;
    }
    else {
      _swift_beginAccess(puVar11 + 0x10,unaff_x22 + 0x288,0,0);
      uVar19 = *(undefined8 *)(puVar11 + 0x10);
      cVar2 = puVar11[0x18];
      if (cVar2 == '\x01') {
        puVar14 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar22 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar22 = uVar19;
        FUN_1005dfeb4(uVar19,1);
        _swift_continuation_throwingResumeWithError(lVar17,puVar14);
      }
      else if (cVar2 == -1) {
        _swift_beginAccess(puVar11 + 0x30,unaff_x22 + 0x2a0,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar12);
        _swift_endAccess(unaff_x22 + 0x2a0);
      }
      else {
        _swift_continuation_throwingResume(lVar17);
        FUN_100308538(uVar19,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_bridgeObjectRelease(0);
      puVar14 = puVar11;
      puVar11 = puVar8;
    }
    _swift_release(puVar12);
    _swift_release(puVar8);
    _swift_release(puVar11);
    _swift_release(puVar14);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a11454 | FUN_100a11454 */

void FUN_100a11454(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
  _swift_release(uVar6);
  FUN_1009e8f0c(uVar11,uVar10,uVar8);
  FUN_100a15820(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3b8);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar4;
  _swift_errorRetain(uVar4);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar7 = unaff_x22 + 0x4f0;
  _swift_dynamicCast(lVar7,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar7 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a11790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x330);
    _swift_errorRelease(uVar4);
    _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x270,0,0);
    FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x220);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar7 = *(long *)(unaff_x22 + 0x240);
    FUN_100004640(unaff_x22 + 0x220,uVar4);
    (**(code **)(lVar7 + 0x70))(uVar4,lVar7);
    FUN_100004594(unaff_x22 + 0x220);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x248);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar7 = *(long *)(unaff_x22 + 0x268);
      FUN_100004640(unaff_x22 + 0x248,uVar4);
      *(undefined1 *)(unaff_x22 + 0x100) = 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x120) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
      *(undefined8 *)(unaff_x22 + 0x128) = 0;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
      *(undefined1 *)(unaff_x22 + 0x160) = 1;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x180) = 0;
      *(undefined8 *)(unaff_x22 + 0x178) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
      FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
      FUN_1004eaa3c(unaff_x22 + 0x160);
      (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x100,uVar4,lVar7);
      FUN_1004eaa3c(unaff_x22 + 0x100);
      FUN_100004594(unaff_x22 + 0x248);
    }
    puVar1 = &DAT_100ff4ab0;
    FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
    _swift_initStaticObject();
    FUN_10085d78c();
    uVar5 = 0x7571655220646142;
    uVar4 = 400;
    FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar1);
    *(undefined8 *)(unaff_x22 + 0x468) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x478) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a13a28;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a11798 | FUN_100a11798 */

void FUN_100a11798(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x3c8) = lVar3;
  if (lVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a11844;
    pcVar1 = FUN_100a11848;
  }
  else {
    _swift_willThrow();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a11844:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a118d4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a11848 | FUN_100a11848 */

void FUN_100a11848(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x3c0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x340);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a118cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a118d4 | FUN_100a118d4 */

void FUN_100a118d4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x340);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x3c0));
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a11958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a11960 | FUN_100a11960 */

void FUN_100a11960(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x418) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x410));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a11a04;
    pcVar1 = FUN_100a11a08;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a11a04:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a127c8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a11a08 | FUN_100a11a08 */

void FUN_100a11a08(void)

{
  pthread_mutexattr_t *ppVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  Continuation_conflict CVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x22;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int *piVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar18 = *(code **)(unaff_x22 + 0x408);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar23 = *(undefined8 *)(unaff_x22 + 1000);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x340);
  lVar29 = *(long *)(unaff_x22 + 0x2d0);
  lVar17 = *(long *)(unaff_x22 + 0x2d8);
  uVar21 = *(ulong *)(unaff_x22 + 0x2e0);
  FUN_1000fb4c4(uVar24,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar18)(uVar24,uVar19,uVar22);
  _swift_storeEnumTagMultiPayload(uVar24,uVar23,0);
  _swift_task_dealloc(uVar19);
  *(ulong *)(unaff_x22 + 0x438) = uVar21;
  *(long *)(unaff_x22 + 0x430) = lVar17;
  *(long *)(unaff_x22 + 0x428) = lVar29;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  FUN_1009e8f0c(uVar23,uVar22,uVar19);
  uVar27 = uVar21 >> 0x38;
  if (uVar27 < 0xff) {
    cVar2 = (char)(uVar21 >> 0x38);
    if (cVar2 == '\x01') {
      *(ulong *)(unaff_x22 + 0x3e0) = uVar21;
      *(long *)(unaff_x22 + 0x3d8) = lVar17;
      *(long *)(unaff_x22 + 0x3d0) = lVar29;
      uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
      puVar9 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      *(undefined **)(unaff_x22 + 1000) = puVar9;
      plVar5 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3f0) = plVar5;
      FUN_1000f8cac(uVar19,plVar5,&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar10 = plVar5;
      _swift_getEnumCaseMultiPayload(plVar5,puVar9);
      if ((int)plVar10 == 1) {
        lVar17 = *plVar5;
        *(long *)(unaff_x22 + 0x420) = lVar17;
        uVar19 = *(undefined8 *)(lVar17 + 0x10);
        bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar3 & 1) == 0) {
          pcVar18 = FUN_100a1585c;
          _swift_task_addCancellationHandler(FUN_100a1585c,uVar19);
          *(code **)(unaff_x22 + 0x4a0) = pcVar18;
          plVar10 = (long *)0xc0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x4a8) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a1417c;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_1009f6d74(uVar19);
            return;
          }
        }
        else {
          plVar10 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x498) = plVar10;
          FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a140b4;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            Swift::_withTaskCancellationHandler();
            return;
          }
        }
      }
      else {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        *(undefined **)(unaff_x22 + 0x3f8) = puVar9;
        lVar17 = *(long *)(puVar9 + -8);
        uVar21 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x400) = uVar21;
        pcVar18 = *(code **)(lVar17 + 0x20);
        *(code **)(unaff_x22 + 0x408) = pcVar18;
        (*pcVar18)();
        plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x410) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a11960;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
          Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
          return;
        }
      }
    }
    else if (cVar2 == '\x02') {
      plVar10 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x440) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a12b9c;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
        FUN_1009ebbe0();
        return;
      }
    }
    else {
      plVar10 = (long *)lVar29;
      FUN_1008758fc(lVar29,lVar17,uVar21,uVar27);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x390);
      if (uVar27 == 0) {
        ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
        FUN_1009e8f0c(lVar29,lVar17,uVar21);
        _swift_release(uVar23);
        _swift_release(uVar24);
        FUN_100a15820(uVar22);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar22);
        *(long *)(unaff_x22 + 0x398) = lVar17;
        *(long *)(unaff_x22 + 0x390) = lVar29;
        uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
        lVar16 = *(long *)(unaff_x22 + 0x338);
        lVar11 = 0;
        FUN_1009e1f14();
        puVar20 = (undefined8 *)
                  (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        *(undefined8 **)(unaff_x22 + 0x3a0) = puVar20;
        uVar21 = lVar16 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar21);
        FUN_1000f8cac(uVar19,uVar21,&DAT_100ff3c00,&DAT_100c8d460);
        _swift_retain(lVar29);
        _swift_retain(lVar17);
        lVar12 = lVar29;
        lVar14 = lVar17;
        FUN_100867fec(lVar29);
        lVar16 = 0;
        if (lVar14 != 0) {
          lVar16 = lVar12;
        }
        lVar12 = -0x2000000000000000;
        if (lVar14 != 0) {
          lVar12 = lVar14;
        }
        FUN_1009fe520(unaff_x22 + 0x50,lVar16,lVar12);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
        puVar20[3] = *(undefined8 *)(unaff_x22 + 0x68);
        puVar20[2] = uVar23;
        puVar20[5] = uVar25;
        puVar20[4] = uVar24;
        puVar20[1] = uVar22;
        *puVar20 = uVar19;
        uVar22 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xb0);
        puVar20[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
        puVar20[10] = uVar25;
        puVar20[0xd] = uVar30;
        puVar20[0xc] = uVar28;
        puVar20[7] = uVar22;
        puVar20[6] = uVar19;
        puVar20[9] = uVar24;
        puVar20[8] = uVar23;
        uVar22 = *(undefined8 *)(unaff_x22 + 200);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xf0);
        puVar20[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
        puVar20[0x12] = uVar25;
        puVar20[0x15] = uVar30;
        puVar20[0x14] = uVar28;
        puVar20[0xf] = uVar22;
        puVar20[0xe] = uVar19;
        puVar20[0x11] = uVar24;
        puVar20[0x10] = uVar23;
        puVar20[0x16] = lVar29;
        puVar20[0x17] = lVar17;
        lVar17 = (long)puVar20 + (long)*(int *)(lVar11 + 0x18);
        FUN_1000f8cac(uVar21,lVar17,&DAT_100ff3c00,&DAT_100c8d460);
        puVar9 = &DAT_100ff3c08;
        FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
        _swift_allocObject();
        puVar9[0x10] = 0;
        *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2f0);
        ppVar1->__sig = *(long *)(unaff_x22 + 0x2e8);
        _pthread_mutexattr_init(ppVar1);
        iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x18),ppVar1);
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100a127c4);
          (*pcVar18)();
        }
        uVar22 = *(undefined8 *)(unaff_x22 + 0x388);
        piVar26 = *(int **)(unaff_x22 + 0x380);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x318);
        FUN_1000fb4c4(uVar21,&DAT_100ff3c00,&DAT_100c8d460);
        lVar29 = 0;
        FUN_1009e908c();
        *(undefined **)(lVar17 + *(int *)(lVar29 + 0x14)) = puVar9;
        uVar19 = 0;
        FUN_1009e8f94(0);
        _swift_storeEnumTagMultiPayload(lVar17,uVar19,1);
        _swift_task_dealloc(uVar21);
        lVar17 = 0;
        FUN_100a03644();
        uVar21 = *(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x3a8) = uVar21;
        FUN_1000f8cac(uVar23,uVar21,&DAT_100ff4568,&DAT_100c8dc00);
        iVar4 = *piVar26;
        plVar10 = (long *)(ulong)(uint)piVar26[1];
        _swift_retain(uVar22);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3b0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a10cd0;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a12234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar4 + (long)piVar26))
                    (puVar20,uVar21,*(undefined8 *)(unaff_x22 + 0x370),
                     *(undefined8 *)(unaff_x22 + 0x378));
          return;
        }
      }
      else {
        uVar30 = *(undefined8 *)(unaff_x22 + 0x360);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x358);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x350);
        FUN_1009edae4();
        puVar9 = &DAT_100f28438;
        _swift_allocError(&DAT_100f28438,plVar10,0,0);
        *plVar10 = lVar29;
        plVar10[1] = lVar17;
        plVar10[2] = uVar21;
        _swift_willThrow();
        FUN_1008758fc(lVar29,lVar17,uVar21,uVar27);
        _swift_release(uVar23);
        _swift_release(uVar24);
        FUN_100875938(lVar29,lVar17,uVar21,uVar27);
        FUN_1009e8f0c(lVar29,lVar17,uVar21);
        FUN_1009e8f0c(uVar28,uVar25,uVar30);
        FUN_100a15820(uVar22);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar22);
        *(undefined **)(unaff_x22 + 0x308) = puVar9;
        _swift_errorRetain(puVar9);
        puVar13 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        lVar17 = unaff_x22 + 0x4f0;
        _swift_dynamicCast(lVar17,unaff_x22 + 0x308,puVar13,&DAT_100f0ace8,0);
        if ((int)lVar17 == 0) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
          _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a127bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))();
            return;
          }
        }
        else {
          lVar29 = *(long *)(unaff_x22 + 0x330);
          _swift_errorRelease(puVar9);
          _swift_beginAccess(lVar29 + 0x20,unaff_x22 + 0x270,0,0);
          FUN_100076688(lVar29 + 0x20,unaff_x22 + 0x220);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
          lVar17 = *(long *)(unaff_x22 + 0x240);
          FUN_100004640(unaff_x22 + 0x220,uVar19);
          (**(code **)(lVar17 + 0x70))(uVar19,lVar17);
          FUN_100004594(unaff_x22 + 0x220);
          if (((uint)uVar19 & 0xff) < 2) {
            FUN_100076688(lVar29 + 0x20,unaff_x22 + 0x248);
            uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
            lVar17 = *(long *)(unaff_x22 + 0x268);
            FUN_100004640(unaff_x22 + 0x248,uVar19);
            *(undefined1 *)(unaff_x22 + 0x100) = 1;
            *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
            *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
            *(undefined8 *)(unaff_x22 + 0x120) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(undefined8 *)(unaff_x22 + 0x130) = 0;
            *(undefined8 *)(unaff_x22 + 0x128) = 0;
            *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
            *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
            *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
            *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
            *(undefined1 *)(unaff_x22 + 0x160) = 1;
            *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
            *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
            *(undefined8 *)(unaff_x22 + 0x180) = 0;
            *(undefined8 *)(unaff_x22 + 0x178) = 0;
            *(undefined8 *)(unaff_x22 + 400) = 0;
            *(undefined8 *)(unaff_x22 + 0x188) = 0;
            *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
            *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
            *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
            *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
            FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
            FUN_1004eaa3c(unaff_x22 + 0x160);
            (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x100,uVar19,lVar17);
            FUN_1004eaa3c(unaff_x22 + 0x100);
            FUN_100004594(unaff_x22 + 0x248);
          }
          puVar9 = &DAT_100ff4ab0;
          FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
          _swift_initStaticObject();
          FUN_10085d78c();
          uVar22 = 0x7571655220646142;
          uVar19 = 400;
          FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar9);
          *(undefined8 *)(unaff_x22 + 0x468) = uVar19;
          *(undefined8 *)(unaff_x22 + 0x470) = uVar22;
          plVar10 = (long *)0x70;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x478) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a13a28;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_100a0392c(uVar19,uVar22,0);
            return;
          }
        }
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x390);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_100a15820(uVar23);
    _swift_release(uVar25);
    _swift_release(uVar24);
    FUN_1009e8f0c(uVar22,uVar30,uVar28);
    FUN_1009e8f0c(lVar29,lVar17,uVar21);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar23);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar9 = &DAT_100ff4578;
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    plVar5 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1000f8cac(uVar19,plVar5,&DAT_100ff4578,&DAT_100c8e0b0);
    plVar10 = plVar5;
    _swift_getEnumCaseMultiPayload(plVar5,puVar9);
    if ((int)plVar10 == 1) {
      lVar17 = *plVar5;
      FUN_100a1bc44(0,*(undefined8 *)(lVar17 + 0x10));
      _swift_release(lVar17);
    }
    else {
      CVar6.unknown = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      lVar17 = *(long *)(CVar6.unknown + -8);
      uVar21 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar21);
      (**(code **)(lVar17 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar6);
      (**(code **)(lVar17 + 8))(uVar21,CVar6.unknown);
      _swift_task_dealloc(uVar21);
    }
    puVar20 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar5);
    puVar7 = (undefined *)*puVar20;
    lVar17 = puVar20[1];
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x20))();
    *(undefined **)(unaff_x22 + 0x3c0) = puVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a11798;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar9 = &DAT_100f28338;
    _swift_allocObject(&DAT_100f28338,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar17;
    puVar13 = &DAT_100f28360;
    _swift_allocObject(&DAT_100f28360,0x28,7);
    *(code **)(puVar13 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar13 + 0x18) = puVar9;
    *(undefined **)(puVar13 + 0x20) = puVar7;
    uVar21 = *(ulong *)(puVar7 + 0x20);
    lVar29 = *(long *)(puVar7 + 0x28);
    _swift_getObjectType();
    pcVar18 = *(code **)(lVar29 + 0x10);
    _swift_retain_n(puVar9,2);
    _swift_retain_n(puVar7,2);
    uVar27 = uVar21;
    (*pcVar18)(uVar21,lVar29);
    if ((uVar27 & 1) == 0) {
      puVar8 = &DAT_100f28388;
      _swift_allocObject(&DAT_100f28388,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar8 + 0x20) = puVar13;
      pcVar18 = *(code **)(lVar29 + 0x18);
      _swift_retain(puVar7);
      _swift_retain(puVar13);
      (*pcVar18)(FUN_1008c1400,puVar8,uVar21,lVar29);
      _swift_release(puVar13);
      puVar13 = puVar9;
    }
    else {
      _swift_beginAccess(puVar7 + 0x10,unaff_x22 + 0x288,0,0);
      uVar19 = *(undefined8 *)(puVar7 + 0x10);
      cVar2 = puVar7[0x18];
      if (cVar2 == '\x01') {
        puVar8 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar20 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar20 = uVar19;
        FUN_1005dfeb4(uVar19,1);
        _swift_continuation_throwingResumeWithError(lVar17,puVar8);
      }
      else if (cVar2 == -1) {
        _swift_beginAccess(puVar7 + 0x30,unaff_x22 + 0x2a0,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar13);
        _swift_endAccess(unaff_x22 + 0x2a0);
      }
      else {
        _swift_continuation_throwingResume(lVar17);
        FUN_100308538(uVar19,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_bridgeObjectRelease(0);
      puVar8 = puVar7;
      puVar7 = puVar9;
    }
    _swift_release(puVar13);
    _swift_release(puVar9);
    _swift_release(puVar7);
    _swift_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a127c8 | FUN_100a127c8 */

void FUN_100a127c8(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar12 = *(code **)(unaff_x22 + 0x408);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 1000);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x340);
  FUN_1000fb4c4(uVar9,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar12)(uVar9,uVar5,uVar4);
  _swift_storeEnumTagMultiPayload(uVar9,uVar6,0);
  _swift_task_dealloc(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  _swift_release(uVar16);
  _swift_release(uVar15);
  FUN_1009e8f0c(uVar10,uVar7,uVar6);
  FUN_1009e8f0c(uVar13,uVar9,uVar17);
  FUN_100a15820(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar5;
  _swift_errorRetain(uVar5);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar8 = unaff_x22 + 0x4f0;
  _swift_dynamicCast(lVar8,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar8 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a12b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x330);
    _swift_errorRelease(uVar5);
    _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x270,0,0);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x220);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar8 = *(long *)(unaff_x22 + 0x240);
    FUN_100004640(unaff_x22 + 0x220,uVar4);
    (**(code **)(lVar8 + 0x70))(uVar4,lVar8);
    FUN_100004594(unaff_x22 + 0x220);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x248);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar8 = *(long *)(unaff_x22 + 0x268);
      FUN_100004640(unaff_x22 + 0x248,uVar4);
      *(undefined1 *)(unaff_x22 + 0x100) = 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x120) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
      *(undefined8 *)(unaff_x22 + 0x128) = 0;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
      *(undefined1 *)(unaff_x22 + 0x160) = 1;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x180) = 0;
      *(undefined8 *)(unaff_x22 + 0x178) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
      FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
      FUN_1004eaa3c(unaff_x22 + 0x160);
      (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x100,uVar4,lVar8);
      FUN_1004eaa3c(unaff_x22 + 0x100);
      FUN_100004594(unaff_x22 + 0x248);
    }
    puVar1 = &DAT_100ff4ab0;
    FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
    _swift_initStaticObject();
    FUN_10085d78c();
    uVar5 = 0x7571655220646142;
    uVar4 = 400;
    FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar1);
    *(undefined8 *)(unaff_x22 + 0x468) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x478) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a13a28;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a12b9c | FUN_100a12b9c */

void FUN_100a12b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x448) = param_1;
  *(undefined8 *)(lVar3 + 0x450) = param_2;
  *(undefined8 *)(lVar3 + 0x458) = param_3;
  *(long *)(lVar3 + 0x460) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x440));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a12c50;
    pcVar1 = FUN_100a12c54;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a12c50:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a136bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a12c54 | FUN_100a12c54 */

void FUN_100a12c54(void)

{
  pthread_mutexattr_t *ppVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  Continuation_conflict CVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  ulong uVar29;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  cVar3 = *(char *)(unaff_x22 + 0x45f);
  FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x428),*(undefined8 *)(unaff_x22 + 0x430),
                *(undefined8 *)(unaff_x22 + 0x438));
  uVar22 = *(ulong *)(unaff_x22 + 0x458);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x450);
  puVar17 = *(undefined8 **)(unaff_x22 + 0x448);
  if (cVar3 == -1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x390);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_100a15820(uVar21);
    _swift_release(uVar25);
    _swift_release(uVar23);
    FUN_1009e8f0c(uVar20,uVar28,uVar26);
    FUN_1009e8f0c(puVar17,uVar18,uVar22);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar21);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar9 = &DAT_100ff4578;
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    plVar5 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1000f8cac(uVar18,plVar5,&DAT_100ff4578,&DAT_100c8e0b0);
    plVar11 = plVar5;
    _swift_getEnumCaseMultiPayload(plVar5,puVar9);
    if ((int)plVar11 == 1) {
      lVar19 = *plVar5;
      FUN_100a1bc44(0,*(undefined8 *)(lVar19 + 0x10));
      _swift_release(lVar19);
    }
    else {
      CVar7.unknown = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      lVar19 = *(long *)(CVar7.unknown + -8);
      uVar22 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar22);
      (**(code **)(lVar19 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar7);
      (**(code **)(lVar19 + 8))(uVar22,CVar7.unknown);
      _swift_task_dealloc(uVar22);
    }
    puVar17 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar5);
    puVar8 = (undefined *)*puVar17;
    lVar19 = puVar17[1];
    _swift_getObjectType();
    (**(code **)(lVar19 + 0x20))();
    *(undefined **)(unaff_x22 + 0x3c0) = puVar8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a11798;
    lVar19 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar19,1);
    puVar9 = &DAT_100f28338;
    _swift_allocObject(&DAT_100f28338,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar19;
    puVar10 = &DAT_100f28360;
    _swift_allocObject(&DAT_100f28360,0x28,7);
    *(code **)(puVar10 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    *(undefined **)(puVar10 + 0x20) = puVar8;
    uVar22 = *(ulong *)(puVar8 + 0x20);
    lVar15 = *(long *)(puVar8 + 0x28);
    _swift_getObjectType();
    pcVar27 = *(code **)(lVar15 + 0x10);
    _swift_retain_n(puVar9,2);
    _swift_retain_n(puVar8,2);
    uVar29 = uVar22;
    (*pcVar27)(uVar22,lVar15);
    if ((uVar29 & 1) == 0) {
      puVar12 = &DAT_100f28388;
      _swift_allocObject(&DAT_100f28388,0x28,7);
      *(undefined **)(puVar12 + 0x10) = puVar8;
      *(code **)(puVar12 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar12 + 0x20) = puVar10;
      pcVar27 = *(code **)(lVar15 + 0x18);
      _swift_retain(puVar8);
      _swift_retain(puVar10);
      (*pcVar27)(FUN_1008c1400,puVar12,uVar22,lVar15);
      _swift_release(puVar10);
      puVar10 = puVar9;
    }
    else {
      _swift_beginAccess(puVar8 + 0x10,unaff_x22 + 0x288,0,0);
      uVar18 = *(undefined8 *)(puVar8 + 0x10);
      cVar3 = puVar8[0x18];
      if (cVar3 == '\x01') {
        puVar12 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar17 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar17 = uVar18;
        FUN_1005dfeb4(uVar18,1);
        _swift_continuation_throwingResumeWithError(lVar19,puVar12);
      }
      else if (cVar3 == -1) {
        _swift_beginAccess(puVar8 + 0x30,unaff_x22 + 0x2a0,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar10);
        _swift_endAccess(unaff_x22 + 0x2a0);
      }
      else {
        _swift_continuation_throwingResume(lVar19);
        FUN_100308538(uVar18,cVar3);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_bridgeObjectRelease(0);
      puVar12 = puVar8;
      puVar8 = puVar9;
    }
    _swift_release(puVar10);
    _swift_release(puVar9);
    _swift_release(puVar8);
    _swift_release(puVar12);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
  else {
    uVar29 = uVar22 >> 0x38;
    FUN_1008758fc(puVar17,uVar18,uVar22,uVar29);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x458);
    lVar19 = *(long *)(unaff_x22 + 0x450);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x448);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x390);
    if (uVar29 == 0) {
      ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
      FUN_1009e8f0c(uVar20,lVar19);
      _swift_release(uVar14);
      _swift_release(uVar23);
      FUN_100a15820(uVar21);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar21);
      *(long *)(unaff_x22 + 0x398) = lVar19;
      *(undefined8 *)(unaff_x22 + 0x390) = uVar20;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x340);
      lVar15 = *(long *)(unaff_x22 + 0x338);
      lVar6 = 0;
      FUN_1009e1f14();
      puVar17 = (undefined8 *)(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined8 **)(unaff_x22 + 0x3a0) = puVar17;
      uVar22 = lVar15 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar22);
      FUN_1000f8cac(uVar18,uVar22,&DAT_100ff3c00,&DAT_100c8d460);
      _swift_retain(uVar20);
      _swift_retain(lVar19);
      uVar14 = uVar20;
      lVar15 = lVar19;
      FUN_100867fec(uVar20);
      uVar18 = 0;
      if (lVar15 != 0) {
        uVar18 = uVar14;
      }
      lVar2 = -0x2000000000000000;
      if (lVar15 != 0) {
        lVar2 = lVar15;
      }
      FUN_1009fe520(unaff_x22 + 0x50,uVar18,lVar2);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar17[3] = *(undefined8 *)(unaff_x22 + 0x68);
      puVar17[2] = uVar21;
      puVar17[5] = uVar25;
      puVar17[4] = uVar23;
      puVar17[1] = uVar14;
      *puVar17 = uVar18;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xb0);
      puVar17[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
      puVar17[10] = uVar25;
      puVar17[0xd] = uVar28;
      puVar17[0xc] = uVar26;
      puVar17[7] = uVar14;
      puVar17[6] = uVar18;
      puVar17[9] = uVar23;
      puVar17[8] = uVar21;
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xf0);
      puVar17[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
      puVar17[0x12] = uVar25;
      puVar17[0x15] = uVar28;
      puVar17[0x14] = uVar26;
      puVar17[0xf] = uVar14;
      puVar17[0xe] = uVar18;
      puVar17[0x11] = uVar23;
      puVar17[0x10] = uVar21;
      puVar17[0x16] = uVar20;
      puVar17[0x17] = lVar19;
      lVar19 = (long)puVar17 + (long)*(int *)(lVar6 + 0x18);
      FUN_1000f8cac(uVar22,lVar19,&DAT_100ff3c00,&DAT_100c8d460);
      puVar9 = &DAT_100ff3c08;
      FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
      _swift_allocObject();
      puVar9[0x10] = 0;
      *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2f0);
      ppVar1->__sig = *(long *)(unaff_x22 + 0x2e8);
      _pthread_mutexattr_init(ppVar1);
      iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x18),ppVar1);
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100a136b8);
        (*pcVar27)();
      }
      uVar20 = *(undefined8 *)(unaff_x22 + 0x388);
      piVar24 = *(int **)(unaff_x22 + 0x380);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x318);
      FUN_1000fb4c4(uVar22,&DAT_100ff3c00,&DAT_100c8d460);
      lVar15 = 0;
      FUN_1009e908c();
      *(undefined **)(lVar19 + *(int *)(lVar15 + 0x14)) = puVar9;
      uVar18 = 0;
      FUN_1009e8f94(0);
      _swift_storeEnumTagMultiPayload(lVar19,uVar18,1);
      _swift_task_dealloc(uVar22);
      lVar19 = 0;
      FUN_100a03644();
      uVar22 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x3a8) = uVar22;
      FUN_1000f8cac(uVar14,uVar22,&DAT_100ff4568,&DAT_100c8dc00);
      iVar4 = *piVar24;
      plVar11 = (long *)(ulong)(uint)piVar24[1];
      _swift_retain(uVar20);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3b0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a10cd0;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000100a13060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar4 + (long)piVar24))
                  (puVar17,uVar22,*(undefined8 *)(unaff_x22 + 0x370),
                   *(undefined8 *)(unaff_x22 + 0x378));
        return;
      }
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x350);
      FUN_1009edae4();
      puVar9 = &DAT_100f28438;
      _swift_allocError(&DAT_100f28438,puVar17,0,0);
      *puVar17 = uVar20;
      puVar17[1] = lVar19;
      puVar17[2] = uVar22;
      _swift_willThrow();
      FUN_1008758fc(uVar20,lVar19,uVar22,uVar29);
      _swift_release(uVar14);
      _swift_release(uVar23);
      FUN_100875938(uVar20,lVar19,uVar22,uVar29);
      FUN_1009e8f0c(uVar20,lVar19,uVar18);
      FUN_1009e8f0c(uVar28,uVar26,uVar16);
      FUN_100a15820(uVar21);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar21);
      *(undefined **)(unaff_x22 + 0x308) = puVar9;
      _swift_errorRetain(puVar9);
      puVar10 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      lVar19 = unaff_x22 + 0x4f0;
      _swift_dynamicCast(lVar19,unaff_x22 + 0x308,puVar10,&DAT_100f0ace8,0);
      if ((int)lVar19 == 0) {
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
        _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000100a135cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
      }
      else {
        lVar15 = *(long *)(unaff_x22 + 0x330);
        _swift_errorRelease(puVar9);
        _swift_beginAccess(lVar15 + 0x20,unaff_x22 + 0x270,0,0);
        FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x220);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x238);
        lVar19 = *(long *)(unaff_x22 + 0x240);
        FUN_100004640(unaff_x22 + 0x220,uVar18);
        (**(code **)(lVar19 + 0x70))(uVar18,lVar19);
        FUN_100004594(unaff_x22 + 0x220);
        if (((uint)uVar18 & 0xff) < 2) {
          FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x248);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
          lVar19 = *(long *)(unaff_x22 + 0x268);
          FUN_100004640(unaff_x22 + 0x248,uVar18);
          *(undefined1 *)(unaff_x22 + 0x100) = 1;
          *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
          *(undefined8 *)(unaff_x22 + 0x120) = 0;
          *(undefined8 *)(unaff_x22 + 0x118) = 0;
          *(undefined8 *)(unaff_x22 + 0x130) = 0;
          *(undefined8 *)(unaff_x22 + 0x128) = 0;
          *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
          *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
          *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
          *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
          *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
          *(undefined1 *)(unaff_x22 + 0x160) = 1;
          *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
          *(undefined8 *)(unaff_x22 + 0x180) = 0;
          *(undefined8 *)(unaff_x22 + 0x178) = 0;
          *(undefined8 *)(unaff_x22 + 400) = 0;
          *(undefined8 *)(unaff_x22 + 0x188) = 0;
          *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
          *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
          *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
          *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
          FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
          FUN_1004eaa3c(unaff_x22 + 0x160);
          (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x100,uVar18,lVar19);
          FUN_1004eaa3c(unaff_x22 + 0x100);
          FUN_100004594(unaff_x22 + 0x248);
        }
        puVar9 = &DAT_100ff4ab0;
        FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
        _swift_initStaticObject();
        FUN_10085d78c();
        uVar14 = 0x7571655220646142;
        uVar18 = 400;
        FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar9);
        *(undefined8 *)(unaff_x22 + 0x468) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x470) = uVar14;
        plVar11 = (long *)0x70;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x478) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_100a13a28;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
          FUN_100a0392c(uVar18,uVar14,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a136bc | FUN_100a136bc */

void FUN_100a136bc(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
  _swift_release(uVar11);
  FUN_1009e8f0c(uVar6,uVar4,uVar5);
  FUN_1009e8f0c(uVar14,uVar13,uVar12);
  FUN_100a15820(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x460);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar4;
  _swift_errorRetain(uVar4);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar7 = unaff_x22 + 0x4f0;
  _swift_dynamicCast(lVar7,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar7 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a13a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x330);
    _swift_errorRelease(uVar4);
    _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x270,0,0);
    FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x220);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar7 = *(long *)(unaff_x22 + 0x240);
    FUN_100004640(unaff_x22 + 0x220,uVar4);
    (**(code **)(lVar7 + 0x70))(uVar4,lVar7);
    FUN_100004594(unaff_x22 + 0x220);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x248);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar7 = *(long *)(unaff_x22 + 0x268);
      FUN_100004640(unaff_x22 + 0x248,uVar4);
      *(undefined1 *)(unaff_x22 + 0x100) = 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x120) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
      *(undefined8 *)(unaff_x22 + 0x128) = 0;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
      *(undefined1 *)(unaff_x22 + 0x160) = 1;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x180) = 0;
      *(undefined8 *)(unaff_x22 + 0x178) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
      FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
      FUN_1004eaa3c(unaff_x22 + 0x160);
      (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x100,uVar4,lVar7);
      FUN_1004eaa3c(unaff_x22 + 0x100);
      FUN_100004594(unaff_x22 + 0x248);
    }
    puVar1 = &DAT_100ff4ab0;
    FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
    _swift_initStaticObject();
    FUN_10085d78c();
    uVar5 = 0x7571655220646142;
    uVar4 = 400;
    FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar1);
    *(undefined8 *)(unaff_x22 + 0x468) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x478) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a13a28;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a13a28 | FUN_100a13a28 */

void FUN_100a13a28(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar3 + 0x480) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x478));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x470);
    _swift_release(*(undefined8 *)(lVar3 + 0x468));
    _swift_release(uVar4);
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(lVar3 + 0x488) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_100a13b3c;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
      FUN_100a0392c(0,0,0x200000000000000);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
    _swift_task_switch(FUN_100a13be4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a13b3c | FUN_100a13b3c */

void FUN_100a13b3c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x490) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x488));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a13be0;
    pcVar1 = FUN_100a13c8c;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a13be0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1402c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a13be4 | FUN_100a13be4 */

void FUN_100a13be4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x340);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x468));
  _swift_release(uVar3);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a13c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a13c8c | FUN_100a13c8c */

void FUN_100a13c8c(void)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  Continuation_conflict CVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x22;
  code *pcVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
  uVar13 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar3 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  plVar4 = (long *)(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  FUN_1000f8cac(uVar13,plVar4,&DAT_100ff4578,&DAT_100c8e0b0);
  plVar5 = plVar4;
  _swift_getEnumCaseMultiPayload(plVar4,puVar3);
  if ((int)plVar5 == 1) {
    lVar14 = *plVar4;
    FUN_100a1bc44(0,*(undefined8 *)(lVar14 + 0x10));
    _swift_release(lVar14);
  }
  else {
    CVar6.unknown = &DAT_100ff4580;
    FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
    lVar14 = *(long *)(CVar6.unknown + -8);
    uVar7 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    (**(code **)(lVar14 + 0x20))();
    Swift::AsyncStream::Continuation::finish(CVar6);
    (**(code **)(lVar14 + 8))(uVar7,CVar6.unknown);
    _swift_task_dealloc(uVar7);
  }
  puVar15 = *(undefined8 **)(unaff_x22 + 0x328);
  _swift_task_dealloc(plVar4);
  puVar8 = (undefined *)*puVar15;
  lVar14 = puVar15[1];
  _swift_getObjectType();
  (**(code **)(lVar14 + 0x20))();
  *(undefined **)(unaff_x22 + 0x3c0) = puVar8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100a11798;
  lVar14 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar14,1);
  puVar3 = &DAT_100f28338;
  _swift_allocObject(&DAT_100f28338,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar14;
  puVar9 = &DAT_100f28360;
  _swift_allocObject(&DAT_100f28360,0x28,7);
  *(code **)(puVar9 + 0x10) = FUN_100a157c0;
  *(undefined **)(puVar9 + 0x18) = puVar3;
  *(undefined **)(puVar9 + 0x20) = puVar8;
  uVar7 = *(ulong *)(puVar8 + 0x20);
  lVar1 = *(long *)(puVar8 + 0x28);
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(puVar8,2);
  uVar10 = uVar7;
  (*pcVar16)(uVar7,lVar1);
  if ((uVar10 & 1) == 0) {
    puVar11 = &DAT_100f28388;
    _swift_allocObject(&DAT_100f28388,0x28,7);
    *(undefined **)(puVar11 + 0x10) = puVar8;
    *(code **)(puVar11 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar11 + 0x20) = puVar9;
    pcVar16 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar8);
    _swift_retain(puVar9);
    (*pcVar16)(FUN_1008c1400,puVar11,uVar7,lVar1);
    _swift_release(puVar9);
    puVar9 = puVar3;
  }
  else {
    _swift_beginAccess(puVar8 + 0x10,unaff_x22 + 0x288,0,0);
    uVar13 = *(undefined8 *)(puVar8 + 0x10);
    cVar2 = puVar8[0x18];
    if (cVar2 == '\x01') {
      puVar11 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar15 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar15 = uVar13;
      FUN_1005dfeb4(uVar13,1);
      _swift_continuation_throwingResumeWithError(lVar14,puVar11);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(puVar8 + 0x30,unaff_x22 + 0x2a0,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar9);
      _swift_endAccess(unaff_x22 + 0x2a0);
    }
    else {
      _swift_continuation_throwingResume(lVar14);
      FUN_100308538(uVar13,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_bridgeObjectRelease(0);
    puVar11 = puVar8;
    puVar8 = puVar3;
  }
  _swift_release(puVar9);
  _swift_release(puVar3);
  _swift_release(puVar8);
  _swift_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1402c | FUN_100a1402c */

void FUN_100a1402c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a140ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a140b4 | FUN_100a140b4 */

void FUN_100a140b4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x498));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x2b8);
    *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x2c0);
    *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x2c8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a14178;
    pcVar1 = FUN_100a14348;
  }
  else {
    *(long *)(lVar3 + 0x4e8) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a14178:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a150c4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a1417c | FUN_100a1417c */

void FUN_100a1417c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x4b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x4a8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x4b8) = param_3;
    *(undefined8 *)(lVar3 + 0x4c0) = param_2;
    *(undefined8 *)(lVar3 + 0x4c8) = param_1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a14248;
    pcVar1 = FUN_100a1424c;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a14248:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a142d0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a1424c | FUN_100a1424c */

void FUN_100a1424c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x4a0));
  *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x4c8);
  *(undefined8 *)(unaff_x22 + 0x4d8) = *(undefined8 *)(unaff_x22 + 0x4c0);
  *(undefined8 *)(unaff_x22 + 0x4d0) = *(undefined8 *)(unaff_x22 + 0x4b8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a14348,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a142d0 | FUN_100a142d0 */

void FUN_100a142d0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x4a0));
  *(undefined8 *)(unaff_x22 + 0x4e8) = *(undefined8 *)(unaff_x22 + 0x4b0);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a150c4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a14348 | FUN_100a14348 */

void FUN_100a14348(void)

{
  pthread_mutexattr_t *ppVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  Continuation_conflict CVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x22;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  code *pcVar28;
  int *piVar29;
  undefined8 uVar30;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x420));
  lVar18 = *(long *)(unaff_x22 + 0x4e0);
  lVar17 = *(long *)(unaff_x22 + 0x4d8);
  uVar22 = *(ulong *)(unaff_x22 + 0x4d0);
  *(ulong *)(unaff_x22 + 0x438) = uVar22;
  *(long *)(unaff_x22 + 0x430) = lVar17;
  *(long *)(unaff_x22 + 0x428) = lVar18;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  FUN_1009e8f0c(uVar23,uVar21,uVar19);
  uVar26 = uVar22 >> 0x38;
  if (uVar26 < 0xff) {
    cVar2 = (char)(uVar22 >> 0x38);
    if (cVar2 == '\x01') {
      *(ulong *)(unaff_x22 + 0x3e0) = uVar22;
      *(long *)(unaff_x22 + 0x3d8) = lVar17;
      *(long *)(unaff_x22 + 0x3d0) = lVar18;
      uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
      puVar9 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      *(undefined **)(unaff_x22 + 1000) = puVar9;
      plVar5 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3f0) = plVar5;
      FUN_1000f8cac(uVar19,plVar5,&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar10 = plVar5;
      _swift_getEnumCaseMultiPayload(plVar5,puVar9);
      if ((int)plVar10 == 1) {
        lVar17 = *plVar5;
        *(long *)(unaff_x22 + 0x420) = lVar17;
        uVar19 = *(undefined8 *)(lVar17 + 0x10);
        bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar3 & 1) == 0) {
          pcVar28 = FUN_100a1585c;
          _swift_task_addCancellationHandler(FUN_100a1585c,uVar19);
          *(code **)(unaff_x22 + 0x4a0) = pcVar28;
          plVar10 = (long *)0xc0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x4a8) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a1417c;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_1009f6d74(uVar19);
            return;
          }
        }
        else {
          plVar10 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x498) = plVar10;
          FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a140b4;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            Swift::_withTaskCancellationHandler();
            return;
          }
        }
      }
      else {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        *(undefined **)(unaff_x22 + 0x3f8) = puVar9;
        lVar17 = *(long *)(puVar9 + -8);
        uVar22 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x400) = uVar22;
        pcVar28 = *(code **)(lVar17 + 0x20);
        *(code **)(unaff_x22 + 0x408) = pcVar28;
        (*pcVar28)();
        plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x410) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a11960;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
          Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
          return;
        }
      }
    }
    else if (cVar2 == '\x02') {
      plVar10 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x440) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a12b9c;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
        FUN_1009ebbe0();
        return;
      }
    }
    else {
      plVar10 = (long *)lVar18;
      FUN_1008758fc(lVar18,lVar17,uVar22,uVar26);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x390);
      if (uVar26 == 0) {
        ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
        FUN_1009e8f0c(lVar18,lVar17,uVar22);
        _swift_release(uVar23);
        _swift_release(uVar24);
        FUN_100a15820(uVar21);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar21);
        *(long *)(unaff_x22 + 0x398) = lVar17;
        *(long *)(unaff_x22 + 0x390) = lVar18;
        uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
        lVar16 = *(long *)(unaff_x22 + 0x338);
        lVar11 = 0;
        FUN_1009e1f14();
        puVar20 = (undefined8 *)
                  (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        *(undefined8 **)(unaff_x22 + 0x3a0) = puVar20;
        uVar22 = lVar16 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar22);
        FUN_1000f8cac(uVar19,uVar22,&DAT_100ff3c00,&DAT_100c8d460);
        _swift_retain(lVar18);
        _swift_retain(lVar17);
        lVar12 = lVar18;
        lVar14 = lVar17;
        FUN_100867fec(lVar18);
        lVar16 = 0;
        if (lVar14 != 0) {
          lVar16 = lVar12;
        }
        lVar12 = -0x2000000000000000;
        if (lVar14 != 0) {
          lVar12 = lVar14;
        }
        FUN_1009fe520(unaff_x22 + 0x50,lVar16,lVar12);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
        puVar20[3] = *(undefined8 *)(unaff_x22 + 0x68);
        puVar20[2] = uVar23;
        puVar20[5] = uVar25;
        puVar20[4] = uVar24;
        puVar20[1] = uVar21;
        *puVar20 = uVar19;
        uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xb0);
        puVar20[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
        puVar20[10] = uVar25;
        puVar20[0xd] = uVar30;
        puVar20[0xc] = uVar27;
        puVar20[7] = uVar21;
        puVar20[6] = uVar19;
        puVar20[9] = uVar24;
        puVar20[8] = uVar23;
        uVar21 = *(undefined8 *)(unaff_x22 + 200);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
        puVar20[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
        puVar20[0x12] = uVar25;
        puVar20[0x15] = uVar30;
        puVar20[0x14] = uVar27;
        puVar20[0xf] = uVar21;
        puVar20[0xe] = uVar19;
        puVar20[0x11] = uVar24;
        puVar20[0x10] = uVar23;
        puVar20[0x16] = lVar18;
        puVar20[0x17] = lVar17;
        lVar17 = (long)puVar20 + (long)*(int *)(lVar11 + 0x18);
        FUN_1000f8cac(uVar22,lVar17,&DAT_100ff3c00,&DAT_100c8d460);
        puVar9 = &DAT_100ff3c08;
        FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
        _swift_allocObject();
        puVar9[0x10] = 0;
        *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2f0);
        ppVar1->__sig = *(long *)(unaff_x22 + 0x2e8);
        _pthread_mutexattr_init(ppVar1);
        iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x18),ppVar1);
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x100a150c0);
          (*pcVar28)();
        }
        uVar21 = *(undefined8 *)(unaff_x22 + 0x388);
        piVar29 = *(int **)(unaff_x22 + 0x380);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x318);
        FUN_1000fb4c4(uVar22,&DAT_100ff3c00,&DAT_100c8d460);
        lVar18 = 0;
        FUN_1009e908c();
        *(undefined **)(lVar17 + *(int *)(lVar18 + 0x14)) = puVar9;
        uVar19 = 0;
        FUN_1009e8f94(0);
        _swift_storeEnumTagMultiPayload(lVar17,uVar19,1);
        _swift_task_dealloc(uVar22);
        lVar17 = 0;
        FUN_100a03644();
        uVar22 = *(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x3a8) = uVar22;
        FUN_1000f8cac(uVar23,uVar22,&DAT_100ff4568,&DAT_100c8dc00);
        iVar4 = *piVar29;
        plVar10 = (long *)(ulong)(uint)piVar29[1];
        _swift_retain(uVar21);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3b0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a10cd0;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a14b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar4 + (long)piVar29))
                    (puVar20,uVar22,*(undefined8 *)(unaff_x22 + 0x370),
                     *(undefined8 *)(unaff_x22 + 0x378));
          return;
        }
      }
      else {
        uVar30 = *(undefined8 *)(unaff_x22 + 0x360);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x358);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x350);
        FUN_1009edae4();
        puVar9 = &DAT_100f28438;
        _swift_allocError(&DAT_100f28438,plVar10,0,0);
        *plVar10 = lVar18;
        plVar10[1] = lVar17;
        plVar10[2] = uVar22;
        _swift_willThrow();
        FUN_1008758fc(lVar18,lVar17,uVar22,uVar26);
        _swift_release(uVar23);
        _swift_release(uVar24);
        FUN_100875938(lVar18,lVar17,uVar22,uVar26);
        FUN_1009e8f0c(lVar18,lVar17,uVar22);
        FUN_1009e8f0c(uVar27,uVar25,uVar30);
        FUN_100a15820(uVar21);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar21);
        *(undefined **)(unaff_x22 + 0x308) = puVar9;
        _swift_errorRetain(puVar9);
        puVar13 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        lVar17 = unaff_x22 + 0x4f0;
        _swift_dynamicCast(lVar17,unaff_x22 + 0x308,puVar13,&DAT_100f0ace8,0);
        if ((int)lVar17 == 0) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
          _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a150b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))();
            return;
          }
        }
        else {
          lVar18 = *(long *)(unaff_x22 + 0x330);
          _swift_errorRelease(puVar9);
          _swift_beginAccess(lVar18 + 0x20,unaff_x22 + 0x270,0,0);
          FUN_100076688(lVar18 + 0x20,unaff_x22 + 0x220);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
          lVar17 = *(long *)(unaff_x22 + 0x240);
          FUN_100004640(unaff_x22 + 0x220,uVar19);
          (**(code **)(lVar17 + 0x70))(uVar19,lVar17);
          FUN_100004594(unaff_x22 + 0x220);
          if (((uint)uVar19 & 0xff) < 2) {
            FUN_100076688(lVar18 + 0x20,unaff_x22 + 0x248);
            uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
            lVar17 = *(long *)(unaff_x22 + 0x268);
            FUN_100004640(unaff_x22 + 0x248,uVar19);
            *(undefined1 *)(unaff_x22 + 0x100) = 1;
            *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
            *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
            *(undefined8 *)(unaff_x22 + 0x120) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(undefined8 *)(unaff_x22 + 0x130) = 0;
            *(undefined8 *)(unaff_x22 + 0x128) = 0;
            *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
            *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
            *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
            *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
            *(undefined1 *)(unaff_x22 + 0x160) = 1;
            *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
            *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
            *(undefined8 *)(unaff_x22 + 0x180) = 0;
            *(undefined8 *)(unaff_x22 + 0x178) = 0;
            *(undefined8 *)(unaff_x22 + 400) = 0;
            *(undefined8 *)(unaff_x22 + 0x188) = 0;
            *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
            *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
            *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
            *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
            FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
            FUN_1004eaa3c(unaff_x22 + 0x160);
            (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x100,uVar19,lVar17);
            FUN_1004eaa3c(unaff_x22 + 0x100);
            FUN_100004594(unaff_x22 + 0x248);
          }
          puVar9 = &DAT_100ff4ab0;
          FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
          _swift_initStaticObject();
          FUN_10085d78c();
          uVar21 = 0x7571655220646142;
          uVar19 = 400;
          FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar9);
          *(undefined8 *)(unaff_x22 + 0x468) = uVar19;
          *(undefined8 *)(unaff_x22 + 0x470) = uVar21;
          plVar10 = (long *)0x70;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x478) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a13a28;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_100a0392c(uVar19,uVar21,0);
            return;
          }
        }
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x390);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_100a15820(uVar23);
    _swift_release(uVar25);
    _swift_release(uVar24);
    FUN_1009e8f0c(uVar21,uVar30,uVar27);
    FUN_1009e8f0c(lVar18,lVar17,uVar22);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar23);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar9 = &DAT_100ff4578;
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    plVar5 = (long *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1000f8cac(uVar19,plVar5,&DAT_100ff4578,&DAT_100c8e0b0);
    plVar10 = plVar5;
    _swift_getEnumCaseMultiPayload(plVar5,puVar9);
    if ((int)plVar10 == 1) {
      lVar17 = *plVar5;
      FUN_100a1bc44(0,*(undefined8 *)(lVar17 + 0x10));
      _swift_release(lVar17);
    }
    else {
      CVar6.unknown = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      lVar17 = *(long *)(CVar6.unknown + -8);
      uVar22 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar22);
      (**(code **)(lVar17 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar6);
      (**(code **)(lVar17 + 8))(uVar22,CVar6.unknown);
      _swift_task_dealloc(uVar22);
    }
    puVar20 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar5);
    puVar7 = (undefined *)*puVar20;
    lVar17 = puVar20[1];
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x20))();
    *(undefined **)(unaff_x22 + 0x3c0) = puVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a11798;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar9 = &DAT_100f28338;
    _swift_allocObject(&DAT_100f28338,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar17;
    puVar13 = &DAT_100f28360;
    _swift_allocObject(&DAT_100f28360,0x28,7);
    *(code **)(puVar13 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar13 + 0x18) = puVar9;
    *(undefined **)(puVar13 + 0x20) = puVar7;
    uVar22 = *(ulong *)(puVar7 + 0x20);
    lVar18 = *(long *)(puVar7 + 0x28);
    _swift_getObjectType();
    pcVar28 = *(code **)(lVar18 + 0x10);
    _swift_retain_n(puVar9,2);
    _swift_retain_n(puVar7,2);
    uVar26 = uVar22;
    (*pcVar28)(uVar22,lVar18);
    if ((uVar26 & 1) == 0) {
      puVar8 = &DAT_100f28388;
      _swift_allocObject(&DAT_100f28388,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar8 + 0x20) = puVar13;
      pcVar28 = *(code **)(lVar18 + 0x18);
      _swift_retain(puVar7);
      _swift_retain(puVar13);
      (*pcVar28)(FUN_1008c1400,puVar8,uVar22,lVar18);
      _swift_release(puVar13);
      puVar13 = puVar9;
    }
    else {
      _swift_beginAccess(puVar7 + 0x10,unaff_x22 + 0x288,0,0);
      uVar19 = *(undefined8 *)(puVar7 + 0x10);
      cVar2 = puVar7[0x18];
      if (cVar2 == '\x01') {
        puVar8 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar20 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar20 = uVar19;
        FUN_1005dfeb4(uVar19,1);
        _swift_continuation_throwingResumeWithError(lVar17,puVar8);
      }
      else if (cVar2 == -1) {
        _swift_beginAccess(puVar7 + 0x30,unaff_x22 + 0x2a0,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar13);
        _swift_endAccess(unaff_x22 + 0x2a0);
      }
      else {
        _swift_continuation_throwingResume(lVar17);
        FUN_100308538(uVar19,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_bridgeObjectRelease(0);
      puVar8 = puVar7;
      puVar7 = puVar9;
    }
    _swift_release(puVar13);
    _swift_release(puVar9);
    _swift_release(puVar7);
    _swift_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a150c4 | FUN_100a150c4 */

void FUN_100a150c4(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x420));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  _swift_release(uVar15);
  _swift_release(uVar14);
  FUN_1009e8f0c(uVar10,uVar8,uVar6);
  FUN_1009e8f0c(uVar12,uVar7,uVar16);
  FUN_100a15820(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar5;
  _swift_errorRetain(uVar5);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar9 = unaff_x22 + 0x4f0;
  _swift_dynamicCast(lVar9,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar9 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x340),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a15444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x330);
    _swift_errorRelease(uVar5);
    _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x270,0,0);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x220);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar9 = *(long *)(unaff_x22 + 0x240);
    FUN_100004640(unaff_x22 + 0x220,uVar4);
    (**(code **)(lVar9 + 0x70))(uVar4,lVar9);
    FUN_100004594(unaff_x22 + 0x220);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x248);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar9 = *(long *)(unaff_x22 + 0x268);
      FUN_100004640(unaff_x22 + 0x248,uVar4);
      *(undefined1 *)(unaff_x22 + 0x100) = 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x120) = 0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0;
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
      *(undefined8 *)(unaff_x22 + 0x128) = 0;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
      *(undefined1 *)(unaff_x22 + 0x160) = 1;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
      *(undefined8 *)(unaff_x22 + 0x180) = 0;
      *(undefined8 *)(unaff_x22 + 0x178) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
      FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
      FUN_1004eaa3c(unaff_x22 + 0x160);
      (**(code **)(lVar9 + 0x28))(unaff_x22 + 0x100,uVar4,lVar9);
      FUN_1004eaa3c(unaff_x22 + 0x100);
      FUN_100004594(unaff_x22 + 0x248);
    }
    puVar1 = &DAT_100ff4ab0;
    FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
    _swift_initStaticObject();
    FUN_10085d78c();
    uVar5 = 0x7571655220646142;
    uVar4 = 400;
    FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar1);
    *(undefined8 *)(unaff_x22 + 0x468) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x478) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a13a28;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1544c | FUN_100a1544c */

void FUN_100a1544c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar1 = param_3[2];
  *(undefined8 *)(unaff_x22 + 0x50) = param_3[3];
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  uVar1 = param_3[4];
  uVar5 = param_3[7];
  uVar4 = param_3[6];
  *(undefined8 *)(unaff_x22 + 0x60) = param_3[5];
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3[8];
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_100a15484,0,0);
  return;
}



/* Address: 0x100a15484 | FUN_100a15484 */

void FUN_100a15484(void)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = unaff_x22 + 0x38;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  puVar2 = &DAT_100ff49c8;
  FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a15524;
  FUN_1005e175c(*(undefined8 *)(unaff_x22 + 0x80),0,0,&DAT_100c8e0f0,unaff_x22 + 0x10,puVar2,
                PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x100a15524 | FUN_100a15524 */

void FUN_100a15524(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x98));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a15590,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a1558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a15590 | FUN_100a15590 */

void FUN_100a15590(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a15598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a1559c | FUN_100a1559c */

void FUN_100a1559c(undefined8 param_1)

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
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a1544c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a15624 | FUN_100a15624 */

void FUN_100a15624(void)

{
  long unaff_x20;
  
  FUN_100a1b1a4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a1562c | FUN_100a1562c */

void FUN_100a1562c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_4[4];
  uVar4 = param_4[7];
  uVar3 = param_4[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_4[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4[8];
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  plVar1 = (long *)0x500;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081d37c;
  FUN_100a10154(plVar1,param_1,param_2,param_3,unaff_x22 + 0x10,param_5,param_6);
  return;
}



/* Address: 0x100a156d0 | FUN_100a156d0 */

void FUN_100a156d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a1562c(plVar3,param_1,param_2,param_3,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a15770 | FUN_100a15770 */

void FUN_100a15770(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4a18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ee0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ee0,&DAT_100ee6ec8);
  DAT_100ff4a18 = pTVar1;
  return;
}



/* Address: 0x100a157b0 | FUN_100a157b0 */

void FUN_100a157b0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100a157c0 | FUN_100a157c0 */

void FUN_100a157c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a2adc0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a157c8 | FUN_100a157c8 */

void FUN_100a157c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a157f4 | FUN_100a157f4 */

void FUN_100a157f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a15820 | FUN_100a15820 */

undefined8 FUN_100a15820(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009e1f14();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100a1585c | FUN_100a1585c */

void FUN_100a1585c(void)

{
  FUN_1009f82bc();
  return;
}



/* Address: 0x100a15864 | FUN_100a15864 */

void FUN_100a15864(void)

{
  FUN_100a0f314();
  return;
}



/* Address: 0x100a15878 | FUN_100a15878 */

void FUN_100a15878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x238) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x230) = param_4;
  *(undefined8 *)(unaff_x22 + 0x228) = param_3;
  *(undefined8 *)(unaff_x22 + 0x220) = param_2;
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
  _swift_task_switch(FUN_100a158a0,0,0);
  return;
}



/* Address: 0x100a158a0 | FUN_100a158a0 */

void FUN_100a158a0(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x218);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x240) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a159b8;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = FUN_100a15624;
  _swift_task_addCancellationHandler(FUN_100a15624,unaff_x22 + 400);
  *(code **)(unaff_x22 + 0x248) = pcVar3;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x250) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a15a1c;
  FUN_100a15d1c();
  return;
}



/* Address: 0x100a159b8 | FUN_100a159b8 */

void FUN_100a159b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x240));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002e1208;
  }
  else {
    *(long *)(lVar2 + 0x260) = unaff_x20;
    pcVar1 = FUN_100a15a80;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a15a1c | FUN_100a15a1c */

void FUN_100a15a1c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 600) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x250));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a15c8c;
  }
  else {
    pcVar1 = FUN_100a15cd0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a15a80 | FUN_100a15a80 */

void FUN_100a15a80(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  String SVar9;
  String SVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x220);
  pcVar5 = (char *)0x0;
  pvVar6 = (void *)0x0;
  _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x1d0);
  FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x168);
  uVar3 = *(ulong *)(unaff_x22 + 0x180);
  lVar2 = *(long *)(unaff_x22 + 0x188);
  FUN_100004640(unaff_x22 + 0x168,uVar3);
  (**(code **)(lVar2 + 0x70))(uVar3,lVar2);
  FUN_100004594(unaff_x22 + 0x168);
  if ((uVar3 & 0xff) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
    FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x1a8);
    puVar1 = *(undefined **)(unaff_x22 + 0x1c0);
    lVar2 = *(long *)(unaff_x22 + 0x1c8);
    _Var4.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x1a8);
    Swift::_StringGuts::grow(0x2a,_Var4);
    SVar9.bridgeObject = (void *)0x8000000100db7f30;
    SVar9.str = (char *)0xd000000000000028;
    SVar10.bridgeObject = pvVar6;
    SVar10.str = pcVar5;
    Swift::String::append(SVar9,SVar10);
    _swift_getErrorValue(uVar7,unaff_x22 + 0x210,unaff_x22 + 0x1e8);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1f0));
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0x0);
    *(undefined1 *)(unaff_x22 + 0xa8) = 0;
    *(undefined1 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x200);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db7ed0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x8000000100db7f00;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x5e;
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x200);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db7ed0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x8000000100db7f00;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x5e;
    FUN_1005bf638(unaff_x22 + 0x48,unaff_x22 + 0x108);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xa8));
    (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x48,puVar1,lVar2);
    _swift_errorRelease(uVar7);
    FUN_1004eaa3c(unaff_x22 + 0x48);
    FUN_100004594(unaff_x22 + 0x1a8);
  }
  else {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x260));
  }
                    /* WARNING: Could not recover jumptable at 0x000100a15c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a15c8c | FUN_100a15c8c */

void FUN_100a15c8c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x100a15cd0 | FUN_100a15cd0 */

void FUN_100a15cd0(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x248));
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 600);
  _swift_task_switch(FUN_100a15a80,0,0);
  return;
}



/* Address: 0x100a15d1c | FUN_100a15d1c */

void FUN_100a15d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  _swift_task_switch(FUN_100a15d3c,0,0);
  return;
}



/* Address: 0x100a15d3c | FUN_100a15d3c */

void FUN_100a15d3c(void)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x22;
  undefined1 auVar3 [16];
  
  auVar3 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x50),
                    *(undefined1 (*) [16])(unaff_x22 + 0x50),8,1);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x38) = auVar3._8_8_;
  *(long *)(unaff_x22 + 0x30) = auVar3._0_8_;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  puVar2 = &DAT_100ff49c8;
  FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100912fb0;
  FUN_1005e175c(*(undefined8 *)(unaff_x22 + 0x48),0,0,&DAT_100c8e1b0,unaff_x22 + 0x10,puVar2,
                PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x100a15de4 | FUN_100a15de4 */

void FUN_100a15de4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a15d1c(plVar5,param_1,uVar2,uVar4,uVar6,uVar1,uVar3);
  return;
}



/* Address: 0x100a15e6c | FUN_100a15e6c */

void FUN_100a15e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x340) = param_8;
  *(undefined8 *)(unaff_x22 + 0x338) = param_7;
  *(undefined8 *)(unaff_x22 + 0x330) = param_6;
  *(undefined8 *)(unaff_x22 + 0x328) = param_5;
  *(undefined8 *)(unaff_x22 + 800) = param_4;
  *(undefined8 *)(unaff_x22 + 0x318) = param_3;
  *(undefined8 *)(unaff_x22 + 0x310) = param_2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a15ef0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a15ef0 | FUN_100a15ef0 */

void FUN_100a15ef0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x310);
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  lVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  *(long *)(unaff_x22 + 0x348) = lVar6;
  uVar2 = lVar6 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x350) = uVar2;
  puVar1 = &DAT_100ff4a20;
  FUN_1000f7830(&DAT_100ff4a20,&DAT_100c8e098);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  FUN_1000f8cac(uVar7,uVar3,&DAT_100ff4a20,&DAT_100c8e098);
  FUN_100a1c788(uVar2,uVar3);
  _swift_task_dealloc(uVar3);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x358) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a16018;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    FUN_1009ebbe0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a16018 | FUN_100a16018 */

void FUN_100a16018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x360) = param_1;
  *(undefined8 *)(lVar3 + 0x368) = param_2;
  *(undefined8 *)(lVar3 + 0x370) = param_3;
  *(long *)(lVar3 + 0x378) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x358));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a160cc;
    pcVar1 = FUN_100a160d0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a160cc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1a6d0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a160d0 | FUN_100a160d0 */

void FUN_100a160d0(undefined8 *param_1)

{
  pthread_mutexattr_t *ppVar1;
  long lVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar11 = *(ulong *)(unaff_x22 + 0x370);
  if (uVar11 >> 0x38 < 0xff) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
    if (uVar11 >> 0x38 == 0) {
      ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
      *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(*(long *)(unaff_x22 + 0x340) + 0x10);
      *(undefined8 *)(unaff_x22 + 0x388) = **(undefined8 **)(unaff_x22 + 0x328);
      *(undefined8 *)(unaff_x22 + 0x390) = (*(undefined8 **)(unaff_x22 + 0x328))[1];
      *(long *)(unaff_x22 + 0x2e8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
      FUN_1008758fc(uVar13,uVar12,uVar11,0);
      lVar14 = *(long *)(unaff_x22 + 0x368);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x360);
      *(long *)(unaff_x22 + 0x3a0) = lVar14;
      *(undefined8 *)(unaff_x22 + 0x398) = uVar15;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x350);
      lVar10 = *(long *)(unaff_x22 + 0x348);
      lVar4 = 0;
      FUN_1009e1f14();
      puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined8 **)(unaff_x22 + 0x3a8) = puVar5;
      uVar11 = lVar10 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar11);
      FUN_1000f8cac(uVar12,uVar11,&DAT_100ff3c00,&DAT_100c8d460);
      _swift_retain(uVar15);
      _swift_retain(lVar14);
      uVar13 = uVar15;
      lVar10 = lVar14;
      FUN_100867fec(uVar15);
      uVar12 = 0;
      if (lVar10 != 0) {
        uVar12 = uVar13;
      }
      lVar2 = -0x2000000000000000;
      if (lVar10 != 0) {
        lVar2 = lVar10;
      }
      FUN_1009fe520(unaff_x22 + 0x50,uVar12,lVar2);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar5[3] = *(undefined8 *)(unaff_x22 + 0x68);
      puVar5[2] = uVar17;
      puVar5[5] = uVar19;
      puVar5[4] = uVar18;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
      puVar5[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
      puVar5[10] = uVar19;
      puVar5[0xd] = uVar21;
      puVar5[0xc] = uVar20;
      puVar5[7] = uVar13;
      puVar5[6] = uVar12;
      puVar5[9] = uVar18;
      puVar5[8] = uVar17;
      uVar13 = *(undefined8 *)(unaff_x22 + 200);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
      puVar5[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
      puVar5[0x12] = uVar19;
      puVar5[0x15] = uVar21;
      puVar5[0x14] = uVar20;
      puVar5[0xf] = uVar13;
      puVar5[0xe] = uVar12;
      puVar5[0x11] = uVar18;
      puVar5[0x10] = uVar17;
      puVar5[0x16] = uVar15;
      puVar5[0x17] = lVar14;
      lVar10 = (long)puVar5 + (long)*(int *)(lVar4 + 0x18);
      FUN_1000f8cac(uVar11,lVar10,&DAT_100ff3c00,&DAT_100c8d460);
      puVar6 = &DAT_100ff3c08;
      FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
      _swift_allocObject();
      puVar6[0x10] = 0;
      *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2f0);
      ppVar1->__sig = *(long *)(unaff_x22 + 0x2e8);
      _pthread_mutexattr_init(ppVar1);
      iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar6 + 0x18),ppVar1);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a16704);
        (*UNRECOVERED_JUMPTABLE)();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x380);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x340);
      piVar16 = *(int **)(unaff_x22 + 0x338);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
      FUN_1000fb4c4(uVar11,&DAT_100ff3c00,&DAT_100c8d460);
      lVar4 = 0;
      FUN_1009e908c();
      *(undefined **)(lVar10 + *(int *)(lVar4 + 0x14)) = puVar6;
      uVar12 = 0;
      FUN_1009e8f94(0);
      _swift_storeEnumTagMultiPayload(lVar10,uVar12,1);
      _swift_task_dealloc(uVar11);
      lVar10 = 0;
      FUN_100a03644();
      uVar11 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x3b0) = uVar11;
      FUN_1000f8cac(uVar15,uVar11,&DAT_100ff4568,&DAT_100c8dc00);
      (*UNRECOVERED_JUMPTABLE)();
      *(undefined8 *)(unaff_x22 + 0x3b8) = uVar13;
      iVar3 = *piVar16;
      plVar8 = (long *)(ulong)(uint)piVar16[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3c0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a16704;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a16428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar3 + (long)piVar16))
                  (puVar5,uVar11,*(undefined8 *)(unaff_x22 + 0x388),
                   *(undefined8 *)(unaff_x22 + 0x390));
        return;
      }
      goto LAB_100a166fc;
    }
    FUN_1009edae4();
    puVar6 = &DAT_100f28438;
    _swift_allocError(&DAT_100f28438,param_1,0,0);
    *param_1 = uVar13;
    param_1[1] = uVar12;
    param_1[2] = uVar11;
    _swift_willThrow();
    *(undefined8 *)(unaff_x22 + 0x308) = puVar6;
    _swift_errorRetain(puVar6);
    puVar7 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    uVar11 = unaff_x22 + 0x500;
    _swift_dynamicCast(uVar11,(undefined8 *)(unaff_x22 + 0x308),puVar7,&DAT_100f0ace8,0);
    if ((uVar11 & 1) != 0) {
      lVar4 = *(long *)(unaff_x22 + 0x330);
      _swift_errorRelease(puVar6);
      _swift_beginAccess(lVar4 + 0x20,unaff_x22 + 0x270,0,0);
      FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x220);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x238);
      lVar10 = *(long *)(unaff_x22 + 0x240);
      FUN_100004640(unaff_x22 + 0x220,uVar12);
      (**(code **)(lVar10 + 0x70))(uVar12,lVar10);
      FUN_100004594(unaff_x22 + 0x220);
      if (((uint)uVar12 & 0xff) < 2) {
        FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x248);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
        lVar10 = *(long *)(unaff_x22 + 0x268);
        FUN_100004640(unaff_x22 + 0x248,uVar12);
        *(undefined1 *)(unaff_x22 + 0x100) = 1;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db7f60;
        *(undefined8 *)(unaff_x22 + 0x120) = 0;
        *(undefined8 *)(unaff_x22 + 0x118) = 0;
        *(undefined8 *)(unaff_x22 + 0x130) = 0;
        *(undefined8 *)(unaff_x22 + 0x128) = 0;
        *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000028;
        *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100db7ed0;
        *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100db7f00;
        *(undefined8 *)(unaff_x22 + 0x158) = 0x51;
        *(undefined1 *)(unaff_x22 + 0x160) = 1;
        *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db7f60;
        *(undefined8 *)(unaff_x22 + 0x180) = 0;
        *(undefined8 *)(unaff_x22 + 0x178) = 0;
        *(undefined8 *)(unaff_x22 + 400) = 0;
        *(undefined8 *)(unaff_x22 + 0x188) = 0;
        *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db7ed0;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db7f00;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0x51;
        FUN_1005bf638(unaff_x22 + 0x100,unaff_x22 + 0x1c0);
        FUN_1004eaa3c(unaff_x22 + 0x160);
        (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x100,uVar12,lVar10);
        FUN_1004eaa3c(unaff_x22 + 0x100);
        FUN_100004594(unaff_x22 + 0x248);
      }
      puVar6 = &DAT_100ff4ab0;
      FUN_1000f7830(&DAT_100ff4ab0,&DAT_100c8e0a8);
      _swift_initStaticObject();
      FUN_10085d78c();
      uVar13 = 0x7571655220646142;
      uVar12 = 400;
      FUN_10086e2c8(400,0x7571655220646142,0xeb00000000747365,puVar6);
      *(undefined8 *)(unaff_x22 + 0x4d0) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x4d8) = uVar13;
      plVar8 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x4e0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a1a174;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
        FUN_100a0392c(uVar12,uVar13,0);
        return;
      }
      goto LAB_100a166fc;
    }
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar10 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_1000fb4c4(uVar12,&DAT_100ff3c00,&DAT_100c8d460);
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar10 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar10 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a1617c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_100a166fc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a16704 | FUN_100a16704 */

void FUN_100a16704(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x3c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x3c0));
  _swift_release(*(undefined8 *)(lVar3 + 0x3b8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a167b8;
    pcVar1 = FUN_100a167bc;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a167b8:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1a9c4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a167bc | FUN_100a167bc */

void FUN_100a167bc(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  _StringGuts _Var5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  Continuation_conflict CVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  _StringGuts _Var15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long unaff_x22;
  undefined8 uVar23;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var5.unknown = (undefined *)0x697463656e6e6f43;
  _Var15.unknown = (undefined *)0xea00000000006e6f;
  FUN_10085c5ec(0x697463656e6e6f43,0xea00000000006e6f,0x697463656e6e6f63,0xea00000000006e6f,
                *(undefined8 *)(unaff_x22 + 0x3a0));
  if (_Var15.unknown == (undefined *)0x0) {
LAB_100a16864:
    *(undefined8 *)(unaff_x22 + 0x3e0) = 0xff00000000000000;
    *(undefined8 *)(unaff_x22 + 0x3d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
    uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
    puVar8 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    *(undefined **)(unaff_x22 + 1000) = puVar8;
    plVar6 = (long *)(*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3f0) = plVar6;
    FUN_1000f8cac(uVar19,plVar6,&DAT_100ff3c10,&DAT_100c8e0d0);
    plVar7 = plVar6;
    _swift_getEnumCaseMultiPayload(plVar6,puVar8);
    if ((int)plVar7 == 1) {
      lVar17 = *plVar6;
      *(long *)(unaff_x22 + 0x420) = lVar17;
      uVar19 = *(undefined8 *)(lVar17 + 0x10);
      bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar4 & 1) == 0) {
        pcVar18 = FUN_100a1585c;
        _swift_task_addCancellationHandler(FUN_100a1585c,uVar19);
        *(code **)(unaff_x22 + 0x430) = pcVar18;
        plVar7 = (long *)0xc0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x438) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100a16ff8;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
          FUN_1009f6d74(uVar19);
          return;
        }
      }
      else {
        plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x428) = plVar7;
        FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100a16f30;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
          Swift::_withTaskCancellationHandler();
          return;
        }
      }
    }
    else {
      puVar8 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      *(undefined **)(unaff_x22 + 0x3f8) = puVar8;
      lVar17 = *(long *)(puVar8 + -8);
      uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x400) = uVar9;
      pcVar18 = *(code **)(lVar17 + 0x20);
      *(code **)(unaff_x22 + 0x408) = pcVar18;
      (*pcVar18)();
      plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x410) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100a16e88;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
        Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
        return;
      }
    }
  }
  else {
    if (_Var5.unknown == (undefined *)0x65736f6c63 && _Var15.unknown == &DAT_e500000000000000) {
      _swift_bridgeObjectRelease(_Var15.unknown);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var15,(_StringComparisonResult)0x63);
      _swift_bridgeObjectRelease(_Var15.unknown);
      if (!bVar3) goto LAB_100a16864;
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x398);
    FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x360),*(undefined8 *)(unaff_x22 + 0x368),
                  *(undefined8 *)(unaff_x22 + 0x370));
    _swift_release(uVar21);
    _swift_release(uVar23);
    FUN_100a15820(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar8 = &DAT_100ff4578;
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    plVar6 = (long *)(*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1000f8cac(uVar19,plVar6,&DAT_100ff4578,&DAT_100c8e0b0);
    plVar7 = plVar6;
    _swift_getEnumCaseMultiPayload(plVar6,puVar8);
    if ((int)plVar7 == 1) {
      lVar17 = *plVar6;
      FUN_100a1bc44(0,*(undefined8 *)(lVar17 + 0x10));
      _swift_release(lVar17);
    }
    else {
      CVar10.unknown = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      lVar17 = *(long *)(CVar10.unknown + -8);
      uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      (**(code **)(lVar17 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar10);
      (**(code **)(lVar17 + 8))(uVar9,CVar10.unknown);
      _swift_task_dealloc(uVar9);
    }
    puVar22 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar6);
    puVar11 = (undefined *)*puVar22;
    lVar17 = puVar22[1];
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x20))();
    *(undefined **)(unaff_x22 + 0x4c0) = puVar11;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a19fac;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar8 = &DAT_100f28458;
    _swift_allocObject(&DAT_100f28458,0x18,7);
    *(long *)(puVar8 + 0x10) = lVar17;
    puVar12 = &DAT_100f28480;
    _swift_allocObject(&DAT_100f28480,0x28,7);
    *(code **)(puVar12 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar12 + 0x18) = puVar8;
    *(undefined **)(puVar12 + 0x20) = puVar11;
    uVar9 = *(ulong *)(puVar11 + 0x20);
    lVar1 = *(long *)(puVar11 + 0x28);
    _swift_getObjectType();
    pcVar18 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(puVar8,2);
    _swift_retain_n(puVar11,2);
    uVar13 = uVar9;
    (*pcVar18)(uVar9,lVar1);
    if ((uVar13 & 1) == 0) {
      puVar14 = &DAT_100f284a8;
      _swift_allocObject(&DAT_100f284a8,0x28,7);
      *(undefined **)(puVar14 + 0x10) = puVar11;
      *(code **)(puVar14 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar14 + 0x20) = puVar12;
      pcVar18 = *(code **)(lVar1 + 0x18);
      _swift_retain(puVar11);
      _swift_retain(puVar12);
      (*pcVar18)(FUN_1008c1400,puVar14,uVar9,lVar1);
      _swift_release(puVar12);
      puVar12 = puVar8;
    }
    else {
      _swift_beginAccess(puVar11 + 0x10,unaff_x22 + 0x288,0,0);
      uVar19 = *(undefined8 *)(puVar11 + 0x10);
      cVar2 = puVar11[0x18];
      if (cVar2 == '\x01') {
        puVar14 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar22 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar22 = uVar19;
        FUN_1005dfeb4(uVar19,1);
        _swift_continuation_throwingResumeWithError(lVar17,puVar14);
      }
      else if (cVar2 == -1) {
        _swift_beginAccess(puVar11 + 0x30,unaff_x22 + 0x2a0,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar12);
        _swift_endAccess(unaff_x22 + 0x2a0);
      }
      else {
        _swift_continuation_throwingResume(lVar17);
        FUN_100308538(uVar19,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_bridgeObjectRelease(0);
      puVar14 = puVar11;
      puVar11 = puVar8;
    }
    _swift_release(puVar12);
    _swift_release(puVar8);
    _swift_release(puVar11);
    _swift_release(puVar14);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
      _swift_continuation_await(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a16e88 | FUN_100a16e88 */

void FUN_100a16e88(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x418) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x410));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a16f2c;
    pcVar1 = FUN_100a182d8;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a16f2c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a190a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}


