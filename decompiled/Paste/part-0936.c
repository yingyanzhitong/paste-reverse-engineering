/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a16f30 | FUN_100a16f30 */

void FUN_100a16f30(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x428));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x470) = *(undefined8 *)(lVar3 + 0x2b8);
    *(undefined8 *)(lVar3 + 0x468) = *(undefined8 *)(lVar3 + 0x2c0);
    *(undefined8 *)(lVar3 + 0x460) = *(undefined8 *)(lVar3 + 0x2c8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a16ff4;
    pcVar1 = FUN_100a171c4;
  }
  else {
    *(long *)(lVar3 + 0x478) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a16ff4:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a17f50;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a16ff8 | FUN_100a16ff8 */

void FUN_100a16ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x440) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x438));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x448) = param_3;
    *(undefined8 *)(lVar3 + 0x450) = param_2;
    *(undefined8 *)(lVar3 + 0x458) = param_1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a170c4;
    pcVar1 = FUN_100a170c8;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a170c4:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1714c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a170c8 | FUN_100a170c8 */

void FUN_100a170c8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x430));
  *(undefined8 *)(unaff_x22 + 0x470) = *(undefined8 *)(unaff_x22 + 0x458);
  *(undefined8 *)(unaff_x22 + 0x468) = *(undefined8 *)(unaff_x22 + 0x450);
  *(undefined8 *)(unaff_x22 + 0x460) = *(undefined8 *)(unaff_x22 + 0x448);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a171c4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1714c | FUN_100a1714c */

void FUN_100a1714c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x430));
  *(undefined8 *)(unaff_x22 + 0x478) = *(undefined8 *)(unaff_x22 + 0x440);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a17f50,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a171c4 | FUN_100a171c4 */

void FUN_100a171c4(void)

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
  int *piVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x420));
  lVar18 = *(long *)(unaff_x22 + 0x470);
  lVar17 = *(long *)(unaff_x22 + 0x468);
  uVar23 = *(ulong *)(unaff_x22 + 0x460);
  *(ulong *)(unaff_x22 + 0x490) = uVar23;
  *(long *)(unaff_x22 + 0x488) = lVar17;
  *(long *)(unaff_x22 + 0x480) = lVar18;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x3d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  FUN_1009e8f0c(uVar24,uVar21,uVar19);
  uVar27 = uVar23 >> 0x38;
  if (uVar27 < 0xff) {
    cVar2 = (char)(uVar23 >> 0x38);
    if (cVar2 == '\x01') {
      *(ulong *)(unaff_x22 + 0x3e0) = uVar23;
      *(long *)(unaff_x22 + 0x3d8) = lVar17;
      *(long *)(unaff_x22 + 0x3d0) = lVar18;
      uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
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
          pcVar29 = FUN_100a1585c;
          _swift_task_addCancellationHandler(FUN_100a1585c,uVar19);
          *(code **)(unaff_x22 + 0x430) = pcVar29;
          plVar10 = (long *)0xc0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x438) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a16ff8;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_1009f6d74(uVar19);
            return;
          }
        }
        else {
          plVar10 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x428) = plVar10;
          FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a16f30;
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
        uVar23 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x400) = uVar23;
        pcVar29 = *(code **)(lVar17 + 0x20);
        *(code **)(unaff_x22 + 0x408) = pcVar29;
        (*pcVar29)();
        plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x410) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a16e88;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
          Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
          return;
        }
      }
    }
    else if (cVar2 == '\x02') {
      plVar10 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x498) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a1947c;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
        FUN_1009ebbe0();
        return;
      }
    }
    else {
      plVar10 = (long *)lVar18;
      FUN_1008758fc(lVar18,lVar17,uVar23,uVar27);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
      if (uVar27 == 0) {
        ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
        FUN_1009e8f0c(lVar18,lVar17,uVar23);
        _swift_release(uVar24);
        _swift_release(uVar25);
        FUN_100a15820(uVar21);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar21);
        *(long *)(unaff_x22 + 0x3a0) = lVar17;
        *(long *)(unaff_x22 + 0x398) = lVar18;
        uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
        lVar16 = *(long *)(unaff_x22 + 0x348);
        lVar11 = 0;
        FUN_1009e1f14();
        puVar20 = (undefined8 *)
                  (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        *(undefined8 **)(unaff_x22 + 0x3a8) = puVar20;
        uVar23 = lVar16 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar23);
        FUN_1000f8cac(uVar19,uVar23,&DAT_100ff3c00,&DAT_100c8d460);
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
        uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
        puVar20[3] = *(undefined8 *)(unaff_x22 + 0x68);
        puVar20[2] = uVar24;
        puVar20[5] = uVar26;
        puVar20[4] = uVar25;
        puVar20[1] = uVar21;
        *puVar20 = uVar19;
        uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xb0);
        puVar20[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
        puVar20[10] = uVar26;
        puVar20[0xd] = uVar30;
        puVar20[0xc] = uVar28;
        puVar20[7] = uVar21;
        puVar20[6] = uVar19;
        puVar20[9] = uVar25;
        puVar20[8] = uVar24;
        uVar21 = *(undefined8 *)(unaff_x22 + 200);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xf0);
        puVar20[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
        puVar20[0x12] = uVar26;
        puVar20[0x15] = uVar30;
        puVar20[0x14] = uVar28;
        puVar20[0xf] = uVar21;
        puVar20[0xe] = uVar19;
        puVar20[0x11] = uVar25;
        puVar20[0x10] = uVar24;
        puVar20[0x16] = lVar18;
        puVar20[0x17] = lVar17;
        lVar17 = (long)puVar20 + (long)*(int *)(lVar11 + 0x18);
        FUN_1000f8cac(uVar23,lVar17,&DAT_100ff3c00,&DAT_100c8d460);
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
          pcVar29 = (code *)SoftwareBreakpoint(1,0x100a17f4c);
          (*pcVar29)();
        }
        pcVar29 = *(code **)(unaff_x22 + 0x380);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x340);
        piVar22 = *(int **)(unaff_x22 + 0x338);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x318);
        FUN_1000fb4c4(uVar23,&DAT_100ff3c00,&DAT_100c8d460);
        lVar18 = 0;
        FUN_1009e908c();
        *(undefined **)(lVar17 + *(int *)(lVar18 + 0x14)) = puVar9;
        uVar19 = 0;
        FUN_1009e8f94(0);
        _swift_storeEnumTagMultiPayload(lVar17,uVar19,1);
        _swift_task_dealloc(uVar23);
        lVar17 = 0;
        FUN_100a03644();
        uVar23 = *(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x3b0) = uVar23;
        FUN_1000f8cac(uVar24,uVar23,&DAT_100ff4568,&DAT_100c8dc00);
        (*pcVar29)();
        *(undefined8 *)(unaff_x22 + 0x3b8) = uVar21;
        iVar4 = *piVar22;
        plVar10 = (long *)(ulong)(uint)piVar22[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3c0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a16704;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a179b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar4 + (long)piVar22))
                    (puVar20,uVar23,*(undefined8 *)(unaff_x22 + 0x388),
                     *(undefined8 *)(unaff_x22 + 0x390));
          return;
        }
      }
      else {
        uVar30 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x360);
        FUN_1009edae4();
        puVar9 = &DAT_100f28438;
        _swift_allocError(&DAT_100f28438,plVar10,0,0);
        *plVar10 = lVar18;
        plVar10[1] = lVar17;
        plVar10[2] = uVar23;
        _swift_willThrow();
        FUN_1008758fc(lVar18,lVar17,uVar23,uVar27);
        _swift_release(uVar24);
        _swift_release(uVar25);
        FUN_100875938(lVar18,lVar17,uVar23,uVar27);
        FUN_1009e8f0c(lVar18,lVar17,uVar23);
        FUN_1009e8f0c(uVar28,uVar26,uVar30);
        FUN_100a15820(uVar21);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar21);
        *(undefined **)(unaff_x22 + 0x308) = puVar9;
        _swift_errorRetain(puVar9);
        puVar13 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        uVar23 = unaff_x22 + 0x500;
        _swift_dynamicCast(uVar23,unaff_x22 + 0x308,puVar13,&DAT_100f0ace8,0);
        if ((uVar23 & 1) == 0) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
          _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a17f44. Too many branches */
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
          *(undefined8 *)(unaff_x22 + 0x4d0) = uVar19;
          *(undefined8 *)(unaff_x22 + 0x4d8) = uVar21;
          plVar10 = (long *)0x70;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x4e0) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a1a174;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_100a0392c(uVar19,uVar21,0);
            return;
          }
        }
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x360);
    FUN_100a15820(uVar24);
    _swift_release(uVar26);
    _swift_release(uVar25);
    FUN_1009e8f0c(uVar21,uVar30,uVar28);
    FUN_1009e8f0c(lVar18,lVar17,uVar23);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar24);
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
      uVar23 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar23);
      (**(code **)(lVar17 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar6);
      (**(code **)(lVar17 + 8))(uVar23,CVar6.unknown);
      _swift_task_dealloc(uVar23);
    }
    puVar20 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar5);
    puVar7 = (undefined *)*puVar20;
    lVar17 = puVar20[1];
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x20))();
    *(undefined **)(unaff_x22 + 0x4c0) = puVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a19fac;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar9 = &DAT_100f28458;
    _swift_allocObject(&DAT_100f28458,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar17;
    puVar13 = &DAT_100f28480;
    _swift_allocObject(&DAT_100f28480,0x28,7);
    *(code **)(puVar13 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar13 + 0x18) = puVar9;
    *(undefined **)(puVar13 + 0x20) = puVar7;
    uVar23 = *(ulong *)(puVar7 + 0x20);
    lVar18 = *(long *)(puVar7 + 0x28);
    _swift_getObjectType();
    pcVar29 = *(code **)(lVar18 + 0x10);
    _swift_retain_n(puVar9,2);
    _swift_retain_n(puVar7,2);
    uVar27 = uVar23;
    (*pcVar29)(uVar23,lVar18);
    if ((uVar27 & 1) == 0) {
      puVar8 = &DAT_100f284a8;
      _swift_allocObject(&DAT_100f284a8,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar8 + 0x20) = puVar13;
      pcVar29 = *(code **)(lVar18 + 0x18);
      _swift_retain(puVar7);
      _swift_retain(puVar13);
      (*pcVar29)(FUN_1008c1400,puVar8,uVar23,lVar18);
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



/* Address: 0x100a17f50 | FUN_100a17f50 */

void FUN_100a17f50(void)

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
  uVar5 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x360);
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
  lVar9 = unaff_x22 + 0x500;
  _swift_dynamicCast(lVar9,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar9 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a182d0. Too many branches */
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
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x4d8) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4e0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a1a174;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a182d8 | FUN_100a182d8 */

void FUN_100a182d8(void)

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
  int *piVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar18 = *(code **)(unaff_x22 + 0x408);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar24 = *(undefined8 *)(unaff_x22 + 1000);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x350);
  lVar29 = *(long *)(unaff_x22 + 0x2d0);
  lVar17 = *(long *)(unaff_x22 + 0x2d8);
  uVar21 = *(ulong *)(unaff_x22 + 0x2e0);
  FUN_1000fb4c4(uVar25,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar18)(uVar25,uVar19,uVar22);
  _swift_storeEnumTagMultiPayload(uVar25,uVar24,0);
  _swift_task_dealloc(uVar19);
  *(ulong *)(unaff_x22 + 0x490) = uVar21;
  *(long *)(unaff_x22 + 0x488) = lVar17;
  *(long *)(unaff_x22 + 0x480) = lVar29;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x3d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3f0));
  FUN_1009e8f0c(uVar24,uVar22,uVar19);
  uVar27 = uVar21 >> 0x38;
  if (uVar27 < 0xff) {
    cVar2 = (char)(uVar21 >> 0x38);
    if (cVar2 == '\x01') {
      *(ulong *)(unaff_x22 + 0x3e0) = uVar21;
      *(long *)(unaff_x22 + 0x3d8) = lVar17;
      *(long *)(unaff_x22 + 0x3d0) = lVar29;
      uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
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
          *(code **)(unaff_x22 + 0x430) = pcVar18;
          plVar10 = (long *)0xc0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x438) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a16ff8;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_1009f6d74(uVar19);
            return;
          }
        }
        else {
          plVar10 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x428) = plVar10;
          FUN_1000f7830(&DAT_100ff4430,&DAT_100c8e0e0);
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a16f30;
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
        plVar10[1] = (long)FUN_100a16e88;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
          Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x2d0));
          return;
        }
      }
    }
    else if (cVar2 == '\x02') {
      plVar10 = (long *)0xa0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x498) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a1947c;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
        FUN_1009ebbe0();
        return;
      }
    }
    else {
      plVar10 = (long *)lVar29;
      FUN_1008758fc(lVar29,lVar17,uVar21,uVar27);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
      if (uVar27 == 0) {
        ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
        FUN_1009e8f0c(lVar29,lVar17,uVar21);
        _swift_release(uVar24);
        _swift_release(uVar25);
        FUN_100a15820(uVar22);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar22);
        *(long *)(unaff_x22 + 0x3a0) = lVar17;
        *(long *)(unaff_x22 + 0x398) = lVar29;
        uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
        lVar16 = *(long *)(unaff_x22 + 0x348);
        lVar11 = 0;
        FUN_1009e1f14();
        puVar20 = (undefined8 *)
                  (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        *(undefined8 **)(unaff_x22 + 0x3a8) = puVar20;
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
        uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x70);
        puVar20[3] = *(undefined8 *)(unaff_x22 + 0x68);
        puVar20[2] = uVar24;
        puVar20[5] = uVar26;
        puVar20[4] = uVar25;
        puVar20[1] = uVar22;
        *puVar20 = uVar19;
        uVar22 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xb0);
        puVar20[0xb] = *(undefined8 *)(unaff_x22 + 0xa8);
        puVar20[10] = uVar26;
        puVar20[0xd] = uVar30;
        puVar20[0xc] = uVar28;
        puVar20[7] = uVar22;
        puVar20[6] = uVar19;
        puVar20[9] = uVar25;
        puVar20[8] = uVar24;
        uVar22 = *(undefined8 *)(unaff_x22 + 200);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xf0);
        puVar20[0x13] = *(undefined8 *)(unaff_x22 + 0xe8);
        puVar20[0x12] = uVar26;
        puVar20[0x15] = uVar30;
        puVar20[0x14] = uVar28;
        puVar20[0xf] = uVar22;
        puVar20[0xe] = uVar19;
        puVar20[0x11] = uVar25;
        puVar20[0x10] = uVar24;
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
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100a190a4);
          (*pcVar18)();
        }
        pcVar18 = *(code **)(unaff_x22 + 0x380);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x340);
        piVar23 = *(int **)(unaff_x22 + 0x338);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x318);
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
        *(ulong *)(unaff_x22 + 0x3b0) = uVar21;
        FUN_1000f8cac(uVar24,uVar21,&DAT_100ff4568,&DAT_100c8dc00);
        (*pcVar18)();
        *(undefined8 *)(unaff_x22 + 0x3b8) = uVar22;
        iVar4 = *piVar23;
        plVar10 = (long *)(ulong)(uint)piVar23[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3c0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a16704;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a18b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar4 + (long)piVar23))
                    (puVar20,uVar21,*(undefined8 *)(unaff_x22 + 0x388),
                     *(undefined8 *)(unaff_x22 + 0x390));
          return;
        }
      }
      else {
        uVar30 = *(undefined8 *)(unaff_x22 + 0x370);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x360);
        FUN_1009edae4();
        puVar9 = &DAT_100f28438;
        _swift_allocError(&DAT_100f28438,plVar10,0,0);
        *plVar10 = lVar29;
        plVar10[1] = lVar17;
        plVar10[2] = uVar21;
        _swift_willThrow();
        FUN_1008758fc(lVar29,lVar17,uVar21,uVar27);
        _swift_release(uVar24);
        _swift_release(uVar25);
        FUN_100875938(lVar29,lVar17,uVar21,uVar27);
        FUN_1009e8f0c(lVar29,lVar17,uVar21);
        FUN_1009e8f0c(uVar28,uVar26,uVar30);
        FUN_100a15820(uVar22);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar22);
        *(undefined **)(unaff_x22 + 0x308) = puVar9;
        _swift_errorRetain(puVar9);
        puVar13 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        uVar21 = unaff_x22 + 0x500;
        _swift_dynamicCast(uVar21,unaff_x22 + 0x308,puVar13,&DAT_100f0ace8,0);
        if ((uVar21 & 1) == 0) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
          _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000100a1909c. Too many branches */
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
          *(undefined8 *)(unaff_x22 + 0x4d0) = uVar19;
          *(undefined8 *)(unaff_x22 + 0x4d8) = uVar22;
          plVar10 = (long *)0x70;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x4e0) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_100a1a174;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
            FUN_100a0392c(uVar19,uVar22,0);
            return;
          }
        }
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x360);
    FUN_100a15820(uVar24);
    _swift_release(uVar26);
    _swift_release(uVar25);
    FUN_1009e8f0c(uVar22,uVar30,uVar28);
    FUN_1009e8f0c(lVar29,lVar17,uVar21);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar24);
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
    *(undefined **)(unaff_x22 + 0x4c0) = puVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a19fac;
    lVar17 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar17,1);
    puVar9 = &DAT_100f28458;
    _swift_allocObject(&DAT_100f28458,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar17;
    puVar13 = &DAT_100f28480;
    _swift_allocObject(&DAT_100f28480,0x28,7);
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
      puVar8 = &DAT_100f284a8;
      _swift_allocObject(&DAT_100f284a8,0x28,7);
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



/* Address: 0x100a190a8 | FUN_100a190a8 */

void FUN_100a190a8(void)

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
  uVar9 = *(undefined8 *)(unaff_x22 + 0x350);
  FUN_1000fb4c4(uVar9,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar12)(uVar9,uVar5,uVar4);
  _swift_storeEnumTagMultiPayload(uVar9,uVar6,0);
  _swift_task_dealloc(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
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
  lVar8 = unaff_x22 + 0x500;
  _swift_dynamicCast(lVar8,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar8 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a19474. Too many branches */
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
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x4d8) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4e0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a1a174;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1947c | FUN_100a1947c */

void FUN_100a1947c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x4a0) = param_1;
  *(undefined8 *)(lVar3 + 0x4a8) = param_2;
  *(undefined8 *)(lVar3 + 0x4b0) = param_3;
  *(long *)(lVar3 + 0x4b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x498));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a19530;
    pcVar1 = FUN_100a19534;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a19530:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1ad08;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a19534 | FUN_100a19534 */

void FUN_100a19534(void)

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
  int *piVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  ulong uVar29;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  cVar3 = *(char *)(unaff_x22 + 0x4b7);
  FUN_1009e8f0c(*(undefined8 *)(unaff_x22 + 0x480),*(undefined8 *)(unaff_x22 + 0x488),
                *(undefined8 *)(unaff_x22 + 0x490));
  uVar23 = *(ulong *)(unaff_x22 + 0x4b0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x4a8);
  puVar17 = *(undefined8 **)(unaff_x22 + 0x4a0);
  if (cVar3 == -1) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x360);
    FUN_100a15820(uVar21);
    _swift_release(uVar25);
    _swift_release(uVar24);
    FUN_1009e8f0c(uVar20,uVar28,uVar26);
    FUN_1009e8f0c(puVar17,uVar18,uVar23);
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
      uVar23 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar23);
      (**(code **)(lVar19 + 0x20))();
      Swift::AsyncStream::Continuation::finish(CVar7);
      (**(code **)(lVar19 + 8))(uVar23,CVar7.unknown);
      _swift_task_dealloc(uVar23);
    }
    puVar17 = *(undefined8 **)(unaff_x22 + 0x328);
    _swift_task_dealloc(plVar5);
    puVar8 = (undefined *)*puVar17;
    lVar19 = puVar17[1];
    _swift_getObjectType();
    (**(code **)(lVar19 + 0x20))();
    *(undefined **)(unaff_x22 + 0x4c0) = puVar8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100a19fac;
    lVar19 = unaff_x22 + 0x10;
    _swift_continuation_init(lVar19,1);
    puVar9 = &DAT_100f28458;
    _swift_allocObject(&DAT_100f28458,0x18,7);
    *(long *)(puVar9 + 0x10) = lVar19;
    puVar10 = &DAT_100f28480;
    _swift_allocObject(&DAT_100f28480,0x28,7);
    *(code **)(puVar10 + 0x10) = FUN_100a157c0;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    *(undefined **)(puVar10 + 0x20) = puVar8;
    uVar23 = *(ulong *)(puVar8 + 0x20);
    lVar15 = *(long *)(puVar8 + 0x28);
    _swift_getObjectType();
    pcVar27 = *(code **)(lVar15 + 0x10);
    _swift_retain_n(puVar9,2);
    _swift_retain_n(puVar8,2);
    uVar29 = uVar23;
    (*pcVar27)(uVar23,lVar15);
    if ((uVar29 & 1) == 0) {
      puVar12 = &DAT_100f284a8;
      _swift_allocObject(&DAT_100f284a8,0x28,7);
      *(undefined **)(puVar12 + 0x10) = puVar8;
      *(code **)(puVar12 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar12 + 0x20) = puVar10;
      pcVar27 = *(code **)(lVar15 + 0x18);
      _swift_retain(puVar8);
      _swift_retain(puVar10);
      (*pcVar27)(FUN_1008c1400,puVar12,uVar23,lVar15);
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
    uVar29 = uVar23 >> 0x38;
    FUN_1008758fc(puVar17,uVar18,uVar23,uVar29);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x4b0);
    lVar19 = *(long *)(unaff_x22 + 0x4a8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x4a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x398);
    if (uVar29 == 0) {
      ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2f8);
      FUN_1009e8f0c(uVar20,lVar19);
      _swift_release(uVar14);
      _swift_release(uVar24);
      FUN_100a15820(uVar21);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar21);
      *(long *)(unaff_x22 + 0x3a0) = lVar19;
      *(undefined8 *)(unaff_x22 + 0x398) = uVar20;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x350);
      lVar15 = *(long *)(unaff_x22 + 0x348);
      lVar6 = 0;
      FUN_1009e1f14();
      puVar17 = (undefined8 *)(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined8 **)(unaff_x22 + 0x3a8) = puVar17;
      uVar23 = lVar15 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar23);
      FUN_1000f8cac(uVar18,uVar23,&DAT_100ff3c00,&DAT_100c8d460);
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
      uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar17[3] = *(undefined8 *)(unaff_x22 + 0x68);
      puVar17[2] = uVar21;
      puVar17[5] = uVar25;
      puVar17[4] = uVar24;
      puVar17[1] = uVar14;
      *puVar17 = uVar18;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x98);
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
      puVar17[9] = uVar24;
      puVar17[8] = uVar21;
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
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
      puVar17[0x11] = uVar24;
      puVar17[0x10] = uVar21;
      puVar17[0x16] = uVar20;
      puVar17[0x17] = lVar19;
      lVar19 = (long)puVar17 + (long)*(int *)(lVar6 + 0x18);
      FUN_1000f8cac(uVar23,lVar19,&DAT_100ff3c00,&DAT_100c8d460);
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
        pcVar27 = (code *)SoftwareBreakpoint(1,0x100a19fa8);
        (*pcVar27)();
      }
      pcVar27 = *(code **)(unaff_x22 + 0x380);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x340);
      piVar22 = *(int **)(unaff_x22 + 0x338);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x318);
      FUN_1000fb4c4(uVar23,&DAT_100ff3c00,&DAT_100c8d460);
      lVar15 = 0;
      FUN_1009e908c();
      *(undefined **)(lVar19 + *(int *)(lVar15 + 0x14)) = puVar9;
      uVar18 = 0;
      FUN_1009e8f94(0);
      _swift_storeEnumTagMultiPayload(lVar19,uVar18,1);
      _swift_task_dealloc(uVar23);
      lVar19 = 0;
      FUN_100a03644();
      uVar23 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x3b0) = uVar23;
      FUN_1000f8cac(uVar20,uVar23,&DAT_100ff4568,&DAT_100c8dc00);
      (*pcVar27)();
      *(undefined8 *)(unaff_x22 + 0x3b8) = uVar14;
      iVar4 = *piVar22;
      plVar11 = (long *)(ulong)(uint)piVar22[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3c0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a16704;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000100a19950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar4 + (long)piVar22))
                  (puVar17,uVar23,*(undefined8 *)(unaff_x22 + 0x388),
                   *(undefined8 *)(unaff_x22 + 0x390));
        return;
      }
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x360);
      FUN_1009edae4();
      puVar9 = &DAT_100f28438;
      _swift_allocError(&DAT_100f28438,puVar17,0,0);
      *puVar17 = uVar20;
      puVar17[1] = lVar19;
      puVar17[2] = uVar23;
      _swift_willThrow();
      FUN_1008758fc(uVar20,lVar19,uVar23,uVar29);
      _swift_release(uVar14);
      _swift_release(uVar24);
      FUN_100875938(uVar20,lVar19,uVar23,uVar29);
      FUN_1009e8f0c(uVar20,lVar19,uVar18);
      FUN_1009e8f0c(uVar28,uVar26,uVar16);
      FUN_100a15820(uVar21);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar21);
      *(undefined **)(unaff_x22 + 0x308) = puVar9;
      _swift_errorRetain(puVar9);
      puVar10 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      uVar23 = unaff_x22 + 0x500;
      _swift_dynamicCast(uVar23,unaff_x22 + 0x308,puVar10,&DAT_100f0ace8,0);
      if ((uVar23 & 1) == 0) {
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
        _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000100a19ebc. Too many branches */
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
        *(undefined8 *)(unaff_x22 + 0x4d0) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x4d8) = uVar14;
        plVar11 = (long *)0x70;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x4e0) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_100a1a174;
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



/* Address: 0x100a19fac | FUN_100a19fac */

void FUN_100a19fac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x4c8) = lVar3;
  if (lVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a1a058;
    pcVar1 = FUN_100a1a05c;
  }
  else {
    _swift_willThrow();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a1a058:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1a0e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a1a05c | FUN_100a1a05c */

void FUN_100a1a05c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x4c0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x350);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a1a0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1a0e8 | FUN_100a1a0e8 */

void FUN_100a1a0e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x4c0));
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a1a16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1a174 | FUN_100a1a174 */

void FUN_100a1a174(void)

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
  *(long *)(lVar3 + 0x4e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x4e0));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x4d8);
    _swift_release(*(undefined8 *)(lVar3 + 0x4d0));
    _swift_release(uVar4);
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(lVar3 + 0x4f0) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_100a1a288;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
      FUN_100a0392c(0,0,0x200000000000000);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
    _swift_task_switch(FUN_100a1b074,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1a288 | FUN_100a1a288 */

void FUN_100a1a288(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x4f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x4f0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a1a32c;
    pcVar1 = FUN_100a1a330;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a1a32c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a1b11c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a1a330 | FUN_100a1a330 */

void FUN_100a1a330(void)

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
  *(undefined **)(unaff_x22 + 0x4c0) = puVar8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100a19fac;
  lVar14 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar14,1);
  puVar3 = &DAT_100f28458;
  _swift_allocObject(&DAT_100f28458,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar14;
  puVar9 = &DAT_100f28480;
  _swift_allocObject(&DAT_100f28480,0x28,7);
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
    puVar11 = &DAT_100f284a8;
    _swift_allocObject(&DAT_100f284a8,0x28,7);
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



/* Address: 0x100a1a6d0 | FUN_100a1a6d0 */

void FUN_100a1a6d0(void)

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
  uVar5 = *(undefined8 *)(unaff_x22 + 0x378);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar5;
  _swift_errorRetain(uVar5);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar6 = unaff_x22 + 0x500;
  _swift_dynamicCast(lVar6,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar6 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100a1a9bc. Too many branches */
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
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x4d8) = uVar3;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4e0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a1a174;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      FUN_100a0392c(uVar5,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1a9c4 | FUN_100a1a9c4 */

void FUN_100a1a9c4(void)

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
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x360);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x398));
  _swift_release(uVar6);
  FUN_1009e8f0c(uVar11,uVar10,uVar8);
  FUN_100a15820(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3c8);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar4;
  _swift_errorRetain(uVar4);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar7 = unaff_x22 + 0x500;
  _swift_dynamicCast(lVar7,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar7 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a1ad00. Too many branches */
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
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x4d8) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4e0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a1a174;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1ad08 | FUN_100a1ad08 */

void FUN_100a1ad08(void)

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
  uVar5 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x480);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x360);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x398));
  _swift_release(uVar11);
  FUN_1009e8f0c(uVar6,uVar4,uVar5);
  FUN_1009e8f0c(uVar14,uVar13,uVar12);
  FUN_100a15820(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4b8);
  *(undefined8 *)(unaff_x22 + 0x308) = uVar4;
  _swift_errorRetain(uVar4);
  puVar1 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  lVar7 = unaff_x22 + 0x500;
  _swift_dynamicCast(lVar7,unaff_x22 + 0x308,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar7 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a1b06c. Too many branches */
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
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x4d8) = uVar5;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4e0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a1a174;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      FUN_100a0392c(uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1b074 | FUN_100a1b074 */

void FUN_100a1b074(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x4d0));
  _swift_release(uVar3);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c00,&DAT_100c8d460);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a1b114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1b11c | FUN_100a1b11c */

void FUN_100a1b11c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x350),&DAT_100ff3c00,&DAT_100c8d460);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x308));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x350));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a1b19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a1b1a4 | FUN_100a1b1a4 */

void FUN_100a1b1a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = *param_1;
  lVar3 = param_1[1];
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  lVar3 = *(long *)(lVar3 + 8);
  pcVar4 = *(code **)(lVar3 + 0x40);
  _swift_unknownObjectRetain(uVar1);
  (*pcVar4)(1,0,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x100a1b218 | thunk_FUN_100a1b24c */

void thunk_FUN_100a1b24c(void)

{
  FUN_100a1b24c();
  return;
}



/* Address: 0x100a1b21c | FUN_100a1b21c */

void FUN_100a1b21c(undefined8 *param_1)

{
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    FUN_100875938(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
    return;
  }
  return;
}



/* Address: 0x100a1b24c | FUN_100a1b24c */

undefined8 * FUN_100a1b24c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  undefined8 uVar6;
  
  bVar2 = *(byte *)((long)param_2 + 0x17);
  if (bVar2 < 3) {
    uVar6 = *param_2;
    uVar1 = param_2[1];
    uVar5 = *(uint7 *)(param_2 + 2);
    uVar3 = *(undefined1 *)((long)param_2 + 0x16);
    uVar4 = *(undefined3 *)((long)param_2 + 0x14);
    FUN_1008758fc(uVar6,uVar1,(ulong)*(uint7 *)(param_2 + 2),bVar2);
    *param_1 = uVar6;
    param_1[1] = uVar1;
    *(undefined1 *)((long)param_1 + 0x16) = uVar3;
    *(short *)((long)param_1 + 0x14) = (short)uVar4;
    *(int *)(param_1 + 2) = (int)uVar5;
    *(byte *)((long)param_1 + 0x17) = bVar2;
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[2] = param_2[2];
  }
  return param_1;
}



/* Address: 0x100a1b2e0 | FUN_100a1b2e0 */

undefined8 * FUN_100a1b2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  uint7 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  bVar2 = *(byte *)((long)param_2 + 0x17);
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    if (bVar2 < 3) {
      uVar7 = *param_2;
      uVar9 = param_2[1];
      uVar5 = *(uint7 *)(param_2 + 2);
      uVar3 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_1008758fc(uVar7,uVar9,(ulong)*(uint7 *)(param_2 + 2),bVar2);
      uVar8 = *param_1;
      uVar1 = param_1[1];
      uVar6 = *(uint7 *)(param_1 + 2);
      *param_1 = uVar7;
      param_1[1] = uVar9;
      *(int *)(param_1 + 2) = (int)uVar5;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      uVar3 = *(undefined1 *)((long)param_1 + 0x17);
      *(byte *)((long)param_1 + 0x17) = bVar2;
      FUN_100875938(uVar8,uVar1,(ulong)uVar6,uVar3);
      return param_1;
    }
    FUN_100875938(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar7 = param_2[2];
  }
  else {
    if (bVar2 < 3) {
      uVar7 = *param_2;
      uVar8 = param_2[1];
      uVar6 = *(uint7 *)(param_2 + 2);
      uVar3 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_1008758fc(uVar7,uVar8,(ulong)*(uint7 *)(param_2 + 2),bVar2);
      *param_1 = uVar7;
      param_1[1] = uVar8;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      *(int *)(param_1 + 2) = (int)uVar6;
      *(byte *)((long)param_1 + 0x17) = bVar2;
      return param_1;
    }
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar7 = param_2[2];
  }
  param_1[2] = uVar7;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  return param_1;
}



/* Address: 0x100a1b41c | FUN_100a1b41c */

undefined8 * FUN_100a1b41c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint7 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (bVar3 < 3) {
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar5 = *(undefined2 *)((long)param_2 + 0x14);
      uVar4 = *(undefined1 *)((long)param_2 + 0x16);
      uVar8 = *param_1;
      uVar1 = param_1[1];
      uVar6 = *(uint7 *)(param_1 + 2);
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined2 *)((long)param_1 + 0x14) = uVar5;
      *(undefined1 *)((long)param_1 + 0x16) = uVar4;
      *(byte *)((long)param_1 + 0x17) = bVar3;
      FUN_100875938(uVar8,uVar1,(ulong)uVar6);
    }
    else {
      FUN_100875938(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
      uVar8 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar8;
      param_1[2] = param_2[2];
    }
  }
  else {
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[2] = param_2[2];
  }
  return param_1;
}



/* Address: 0x100a1b4f8 | FUN_100a1b4f8 */

uint FUN_100a1b4f8(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar2 = *(byte *)((long)param_1 + 0x17) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x100a1b540 | FUN_100a1b540 */

void FUN_100a1b540(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      *(byte *)((long)param_1 + 0x17) = ~(byte)param_2;
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfd;
    if (0xfc < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x100a1b588 | FUN_100a1b588 */

int FUN_100a1b588(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 0x17)) {
    iVar1 = (*(byte *)(param_1 + 0x17) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100a1b59c | FUN_100a1b59c */

void FUN_100a1b59c(ulong *param_1,uint param_2)

{
  if (param_2 < 0xfe) {
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x17) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
  }
  return;
}



/* Address: 0x100a1b5c4 | FUN_100a1b5c4 */

undefined1  [16] FUN_100a1b5c4(void)

{
  return ZEXT816(0x100f28438);
}



/* Address: 0x100a1b5d4 | FUN_100a1b5d4 */

void FUN_100a1b5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar5 = (long *)0x510;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100a15e6c(plVar5,param_1,param_2,param_3,uVar2,uVar4,uVar6,uVar1,uVar3);
  return;
}



/* Address: 0x100a1b674 | FUN_100a1b674 */

void FUN_100a1b674(undefined8 param_1,undefined8 param_2)

{
  FUN_100a1b680(param_1,param_2,thunk_FUN_1009fd5ac);
  return;
}



/* Address: 0x100a1b680 | FUN_100a1b680 */

void FUN_100a1b680(ulong param_1,ulong param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\x01') {
    if (*(long *)(uVar3 + 0x10) == 0) {
      FUN_10000cae0(uVar3,uVar5,1);
      *unaff_x20 = param_1;
      unaff_x20[1] = param_2;
      *(undefined1 *)(unaff_x20 + 2) = 0;
    }
    else {
      FUN_100a1babc(param_1,param_2,param_3);
      *unaff_x20 = uVar3;
      unaff_x20[1] = 0;
      *(undefined1 *)(unaff_x20 + 2) = 1;
    }
  }
  else {
    uVar6 = 0;
    (*param_3)(0,2,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar4 = *(ulong *)(uVar6 + 0x10);
    uVar7 = *(ulong *)(uVar6 + 0x18);
    uVar8 = uVar7 >> 1;
    lVar1 = uVar4 + 1;
    if (uVar8 <= uVar4) {
      uVar6 = (ulong)(1 < uVar7);
      (*param_3)(uVar6,lVar1,1);
      uVar7 = *(ulong *)(uVar6 + 0x18);
      uVar8 = uVar7 >> 1;
    }
    *(long *)(uVar6 + 0x10) = lVar1;
    lVar2 = uVar6 + uVar4 * 0x10;
    *(ulong *)(lVar2 + 0x20) = uVar3;
    *(ulong *)(lVar2 + 0x28) = uVar5;
    lVar2 = uVar4 + 2;
    if ((long)uVar8 < lVar2) {
      uVar6 = (ulong)(1 < uVar7);
      (*param_3)(uVar6,lVar2,1);
    }
    *(long *)(uVar6 + 0x10) = lVar2;
    lVar1 = uVar6 + lVar1 * 0x10;
    *(ulong *)(lVar1 + 0x20) = param_1;
    *(ulong *)(lVar1 + 0x28) = param_2;
    *unaff_x20 = uVar6;
    *(undefined1 *)(unaff_x20 + 2) = 1;
  }
  return;
}



/* Address: 0x100a1b7c8 | FUN_100a1b7c8 */

void FUN_100a1b7c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar6 = *unaff_x20;
  if ((char)unaff_x20[1] != '\x01') {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = 0;
    thunk_FUN_1009fd59c(0,lVar9 + 1,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar8 = *(ulong *)(uVar2 + 0x10);
    uVar12 = *(ulong *)(uVar2 + 0x18);
    uVar4 = uVar12 >> 1;
    lVar11 = uVar8 + 1;
    if (uVar4 <= uVar8) {
      uVar2 = (ulong)(1 < uVar12);
      thunk_FUN_1009fd59c(uVar2,lVar11,1);
      uVar12 = *(ulong *)(uVar2 + 0x18);
      uVar4 = uVar12 >> 1;
    }
    *(long *)(uVar2 + 0x10) = lVar11;
    *(ulong *)(uVar2 + uVar8 * 8 + 0x20) = uVar6;
    lVar1 = uVar8 + 2;
    if ((long)uVar4 < lVar1) {
      uVar2 = (ulong)(1 < uVar12);
      thunk_FUN_1009fd59c(uVar2,lVar1,1);
    }
    *(long *)(uVar2 + 0x10) = lVar1;
    *(undefined8 *)(uVar2 + lVar11 * 8 + 0x20) = uVar10;
    *unaff_x20 = uVar2;
    lVar9 = lVar9 + -1;
    if (lVar9 != 0) {
      puVar7 = (undefined8 *)(param_1 + 0x28);
      uVar6 = *(ulong *)(uVar2 + 0x10);
      do {
        uVar10 = *puVar7;
        uVar8 = uVar6 + 1;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar6) {
          uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          thunk_FUN_1009fd59c(uVar2,uVar8,1);
        }
        *(ulong *)(uVar2 + 0x10) = uVar8;
        *(undefined8 *)(uVar2 + uVar6 * 8 + 0x20) = uVar10;
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
        uVar6 = uVar8;
      } while (lVar9 != 0);
      *unaff_x20 = uVar2;
    }
    goto LAB_100a1b918;
  }
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    if (uVar8 == 0) {
      return;
    }
    uVar12 = *(ulong *)(param_1 + 0x20);
    if (uVar8 == 1) {
      FUN_1005e46ac(uVar6,1);
      *unaff_x20 = uVar12;
      *(undefined1 *)(unaff_x20 + 1) = 0;
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((int)uVar2 == 0) {
LAB_100a1b95c:
      thunk_FUN_1009fd59c();
      uVar4 = *(ulong *)(uVar2 + 0x18);
      uVar5 = uVar4 >> 1;
      uVar6 = uVar2;
    }
    else {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      uVar5 = uVar4 >> 1;
      if (uVar5 < uVar8) goto LAB_100a1b95c;
    }
    uVar3 = *(ulong *)(uVar6 + 0x10);
    lVar9 = uVar3 + 1;
    uVar2 = uVar6;
    if (uVar5 <= uVar3) {
      uVar2 = (ulong)(1 < uVar4);
      thunk_FUN_1009fd59c(uVar2,lVar9,1,uVar6);
      uVar4 = *(ulong *)(uVar2 + 0x18);
      uVar5 = uVar4 >> 1;
    }
    *(long *)(uVar2 + 0x10) = lVar9;
    *(ulong *)(uVar2 + uVar3 * 8 + 0x20) = uVar12;
    lVar11 = uVar3 + 2;
    uVar6 = uVar2;
    if ((long)uVar5 < lVar11) {
      uVar6 = (ulong)(1 < uVar4);
      thunk_FUN_1009fd59c(uVar6,lVar11,1,uVar2);
    }
    *(long *)(uVar6 + 0x10) = lVar11;
    *(undefined8 *)(uVar6 + lVar9 * 8 + 0x20) = uVar10;
    lVar9 = uVar8 - 2;
    if (lVar9 != 0) {
      lVar11 = uVar3 + 6;
      uVar8 = uVar6;
      puVar7 = (undefined8 *)(param_1 + 0x30);
      do {
        uVar10 = *puVar7;
        uVar6 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= lVar11 - 4U) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          thunk_FUN_1009fd59c(uVar6,lVar11 + -3,1,uVar8);
        }
        *(long *)(uVar6 + 0x10) = lVar11 + -3;
        *(undefined8 *)(uVar6 + lVar11 * 8) = uVar10;
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + -1;
        uVar8 = uVar6;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    FUN_100a1bb54();
  }
  *unaff_x20 = uVar6;
LAB_100a1b918:
  *(undefined1 *)(unaff_x20 + 1) = 1;
  return;
}



/* Address: 0x100a1babc | FUN_100a1babc */

void FUN_100a1babc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *unaff_x20;
  uVar5 = *(ulong *)(lVar4 + 0x10);
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, uVar3 <= uVar5)) {
    (*param_3)();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar4 = lVar2;
  }
  uVar5 = *(ulong *)(lVar4 + 0x10);
  if (uVar3 != uVar5) {
    lVar2 = lVar4 + uVar5 * 0x10;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(ulong *)(lVar4 + 0x10) = uVar5 + 1;
    *unaff_x20 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bb54);
  (*pcVar1)();
}



/* Address: 0x100a1bb54 | FUN_100a1bb54 */

void FUN_100a1bb54(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bc38);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    thunk_FUN_1009fd59c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bc3c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bc40);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20),(void *)(param_1 + 0x20),uVar5 << 3
           );
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bc44);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100a1bc44 | FUN_100a1bc44 */

void FUN_100a1bc44(undefined8 param_1,long param_2,undefined8 param_3,void *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  ulong local_a8;
  undefined *puStack_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 uStack_70;
  char local_68;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1be84);
    (*pcVar1)();
  }
  FUN_100a1bf48(&local_a8,param_1);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1be88);
    (*pcVar1)();
  }
  if (local_68 == '\0') {
    uVar8 = local_a8;
    _swift_getObjectType();
    uVar3 = uVar8;
    (**(code **)(puStack_a0 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100f284d0;
      _swift_allocObject(&DAT_100f284d0,0x58,7);
      *(ulong *)(puVar4 + 0x10) = local_a8;
      *(undefined **)(puVar4 + 0x18) = puStack_a0;
      *(char **)(puVar4 + 0x20) = local_98;
      *(undefined8 *)(puVar4 + 0x28) = uStack_90;
      *(undefined8 *)(puVar4 + 0x30) = local_88;
      *(code **)(puVar4 + 0x40) = pcStack_78;
      *(undefined8 *)(puVar4 + 0x38) = local_80;
      *(undefined8 *)(puVar4 + 0x48) = uStack_70;
      *(undefined8 *)(puVar4 + 0x50) = param_1;
      pcVar1 = *(code **)(puStack_a0 + 0x18);
      _swift_unknownObjectRetain(local_a8);
      _swift_retain(uStack_90);
      _swift_retain(local_80);
      _swift_retain(uStack_70);
      _swift_errorRetain(param_1);
      (*pcVar1)(FUN_1005e4670,puVar4,uVar8,puStack_a0);
      _swift_release(puVar4);
      _swift_release(uStack_70);
    }
    else {
      (*pcStack_78)(param_1);
      _swift_release(uStack_70);
    }
    _swift_release(local_80);
    _swift_release(uStack_90);
    _swift_unknownObjectRelease(local_a8);
    return;
  }
  if (local_68 != '\x01') {
    return;
  }
  _Var5.unknown = puStack_a0;
  pcVar6 = local_98;
  FUN_1005e4618(local_a8);
  uVar8 = 0;
  plVar7 = (long *)(local_a8 + 0x28);
  do {
    if (((uint)local_98 & 0xff) == 1) {
      if (uVar8 == *(ulong *)(local_a8 + 0x10)) goto LAB_100a1be2c;
      if (*(ulong *)(local_a8 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1be80);
        (*pcVar1)();
      }
      puVar4 = (undefined *)*plVar7;
    }
    else {
      puVar4 = puStack_a0;
      if (uVar8 != 0) {
        if (uVar8 != 1) {
          Swift::_StringGuts::grow(0x16,_Var5);
          _swift_bridgeObjectRelease(0xe000000000000000);
          SVar9 = Swift::CustomStringConvertible::get_description();
          SVar11.bridgeObject = param_4;
          SVar11.str = pcVar6;
          Swift::String::append(SVar9,SVar11);
          _swift_bridgeObjectRelease(SVar9.bridgeObject);
          SVar9.bridgeObject = (void *)0xee0073646e756f62;
          SVar9.str = (char *)0x20666f2074756f20;
          SVar12.bridgeObject = param_4;
          SVar12.str = pcVar6;
          Swift::String::append(SVar9,SVar12);
          SVar10.bridgeObject = (void *)0x2;
          SVar10.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar10,(StaticString)0x207865646e69,
                     0xe600000000000000,0xdae790);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bf48);
          (*pcVar1)();
        }
LAB_100a1be2c:
        FUN_1000fb4c4(&local_a8,&DAT_100ff4b50,&DAT_100c8e1c0);
        FUN_1000fb4c4(&local_a8,&DAT_100ff4b50,&DAT_100c8e1c0);
        return;
      }
    }
    uVar8 = uVar8 + 1;
    **(undefined1 **)(*(long *)(puVar4 + 0x40) + 0x28) = 1;
    _swift_continuation_throwingResume();
    plVar7 = plVar7 + 2;
  } while( true );
}



/* Address: 0x100a1bf48 | FUN_100a1bf48 */

void FUN_100a1bf48(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  _StringGuts _Var8;
  char *pcVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 local_338;
  undefined *puStack_330;
  undefined *local_328;
  char cStack_320;
  undefined7 uStack_31f;
  undefined *local_318;
  undefined *puStack_310;
  undefined1 local_308;
  undefined7 uStack_307;
  undefined *puStack_300;
  undefined *local_2f8;
  undefined *puStack_2f0;
  undefined *local_2e8;
  undefined *puStack_2e0;
  undefined *local_2d8;
  undefined *puStack_2d0;
  undefined *local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *local_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 local_230;
  StaticString local_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uStack_138 = unaff_x20[0xb];
  uStack_140 = unaff_x20[10];
  uStack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xd];
  local_130 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_178 = unaff_x20[3];
  uStack_180 = unaff_x20[2];
  uStack_d8 = unaff_x20[5];
  local_e0 = unaff_x20[4];
  uStack_168 = unaff_x20[5];
  local_170 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_158 = unaff_x20[7];
  uStack_160 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  local_c0 = unaff_x20[8];
  uStack_148 = unaff_x20[9];
  local_150 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_188 = unaff_x20[1];
  local_190 = (undefined *)*unaff_x20;
  uStack_118 = unaff_x20[0xf];
  uStack_120 = unaff_x20[0xe];
  local_80 = *(undefined1 *)(unaff_x20 + 0x10);
  local_110 = *(undefined1 *)(unaff_x20 + 0x10);
  iVar6 = (int)&local_190;
  FUN_1005e4694();
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      ppuVar7 = &local_190;
      FUN_100004520();
      puVar25 = ppuVar7[4];
      puVar24 = ppuVar7[3];
      puVar23 = ppuVar7[2];
      puVar22 = ppuVar7[1];
      puVar21 = ppuVar7[8];
      puVar20 = ppuVar7[7];
      puVar19 = ppuVar7[6];
      puVar18 = ppuVar7[5];
      puStack_288 = (undefined *)unaff_x20[5];
      local_290 = (undefined *)unaff_x20[4];
      puStack_278 = (undefined *)unaff_x20[7];
      uStack_280 = unaff_x20[6];
      puStack_2a8 = (undefined *)unaff_x20[1];
      local_2b0 = (undefined *)*unaff_x20;
      uStack_298 = unaff_x20[3];
      puStack_2a0 = (undefined *)unaff_x20[2];
      local_230 = *(undefined1 *)(unaff_x20 + 0x10);
      puStack_248 = (undefined *)unaff_x20[0xd];
      local_250 = (undefined *)unaff_x20[0xc];
      uStack_238 = unaff_x20[0xf];
      puStack_240 = (undefined *)unaff_x20[0xe];
      puStack_268 = (undefined *)unaff_x20[9];
      local_270 = (undefined *)unaff_x20[8];
      puStack_258 = (undefined *)unaff_x20[0xb];
      puStack_260 = (undefined *)unaff_x20[10];
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
      local_220.unknown = (undefined *)0x0;
      FUN_1005e46cc(&local_220);
      uVar11 = 0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
      unaff_x20[0xd] = uStack_1b8;
      unaff_x20[0xc] = local_1c0;
      unaff_x20[0xf] = uStack_1a8;
      unaff_x20[0xe] = uStack_1b0;
      unaff_x20[5] = uStack_1f8;
      unaff_x20[4] = local_200;
      unaff_x20[7] = uStack_1e8;
      unaff_x20[6] = uStack_1f0;
      unaff_x20[9] = uStack_1d8;
      unaff_x20[8] = local_1e0;
      unaff_x20[0xb] = uStack_1c8;
      unaff_x20[10] = uStack_1d0;
      unaff_x20[1] = puStack_218;
      *unaff_x20 = local_220.unknown;
      unaff_x20[3] = uStack_208;
      unaff_x20[2] = uStack_210;
    }
    else {
      ppuVar7 = &local_190;
      FUN_100004520();
      uVar11 = *(undefined1 *)ppuVar7;
      puVar10 = *ppuVar7;
      uVar4 = *(undefined2 *)ppuVar7;
      local_318 = ppuVar7[1];
      puVar1 = ppuVar7[2];
      puVar12 = ppuVar7[3];
      cVar3 = *(char *)(ppuVar7 + 4);
      puStack_2f0 = ppuVar7[7];
      local_2e8 = ppuVar7[8];
      puStack_300 = ppuVar7[5];
      local_2f8 = ppuVar7[6];
      puStack_2d0 = ppuVar7[0xb];
      local_2c8 = ppuVar7[0xc];
      puStack_2e0 = ppuVar7[9];
      local_2d8 = ppuVar7[10];
      uStack_2c0 = param_2;
      if (cVar3 == '\x01') {
        puVar17 = *(undefined1 **)(puVar1 + 0x10);
        if (puVar17 == (undefined1 *)0x0) {
          puVar25 = ppuVar7[8];
          puVar24 = ppuVar7[7];
          puVar23 = ppuVar7[6];
          puVar22 = ppuVar7[5];
          puVar21 = ppuVar7[0xc];
          puVar20 = ppuVar7[0xb];
          puVar19 = ppuVar7[10];
          puVar18 = ppuVar7[9];
          FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
          FUN_10000cae0(puVar1,puVar12,1);
          if (((ulong)puVar10 & 0x100) == 0) {
            _swift_bridgeObjectRelease(local_318);
            FUN_1000fb4c4();
            local_220.unknown = (undefined *)0x0;
            FUN_1005e46cc(&local_220);
            uVar11 = 0;
            *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
            unaff_x20[0xd] = uStack_1b8;
            unaff_x20[0xc] = local_1c0;
            unaff_x20[0xf] = uStack_1a8;
            unaff_x20[0xe] = uStack_1b0;
            unaff_x20[5] = uStack_1f8;
            unaff_x20[4] = local_200;
            unaff_x20[7] = uStack_1e8;
            unaff_x20[6] = uStack_1f0;
            unaff_x20[9] = uStack_1d8;
            unaff_x20[8] = local_1e0;
            unaff_x20[0xb] = uStack_1c8;
            unaff_x20[10] = uStack_1d0;
            unaff_x20[1] = puStack_218;
            *unaff_x20 = local_220.unknown;
            unaff_x20[3] = uStack_208;
            unaff_x20[2] = uStack_210;
          }
          else {
            local_338._0_2_ = CONCAT11(1,uVar11);
            puStack_330 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_328 = (undefined *)0x0;
            cStack_320 = 1;
            puStack_310 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_308 = 1;
            FUN_1005e46c0(&local_338);
            puStack_248 = puStack_2d0;
            local_250 = local_2d8;
            uStack_238 = uStack_2c0;
            puStack_240 = local_2c8;
            local_230 = local_2b8;
            uStack_280 = CONCAT71(uStack_307,local_308);
            puStack_288 = puStack_310;
            local_290 = local_318;
            puStack_278 = puStack_300;
            puStack_268 = puStack_2f0;
            local_270 = local_2f8;
            puStack_258 = puStack_2e0;
            puStack_260 = local_2e8;
            uStack_298 = CONCAT71(uStack_31f,cStack_320);
            puStack_2a8 = puStack_330;
            local_2b0 = local_338;
            puStack_2a0 = local_328;
            uStack_1b8 = unaff_x20[0xd];
            local_1c0 = unaff_x20[0xc];
            uStack_1a8 = unaff_x20[0xf];
            uStack_1b0 = unaff_x20[0xe];
            local_1a0 = *(undefined1 *)(unaff_x20 + 0x10);
            uStack_1f8 = unaff_x20[5];
            local_200 = unaff_x20[4];
            uStack_1e8 = unaff_x20[7];
            uStack_1f0 = unaff_x20[6];
            uStack_1d8 = unaff_x20[9];
            local_1e0 = unaff_x20[8];
            uStack_1c8 = unaff_x20[0xb];
            uStack_1d0 = unaff_x20[10];
            puStack_218 = (undefined1 *)unaff_x20[1];
            local_220.unknown = (undefined *)*unaff_x20;
            uStack_208 = unaff_x20[3];
            uStack_210 = unaff_x20[2];
            _swift_errorRetain(param_2);
            FUN_1000fb4c4(&local_220,&DAT_100ff46d8,&DAT_100c8dd10);
            unaff_x20[0xd] = puStack_248;
            unaff_x20[0xc] = local_250;
            unaff_x20[0xf] = uStack_238;
            unaff_x20[0xe] = puStack_240;
            unaff_x20[5] = puStack_288;
            unaff_x20[4] = local_290;
            unaff_x20[7] = puStack_278;
            unaff_x20[6] = uStack_280;
            unaff_x20[9] = puStack_268;
            unaff_x20[8] = local_270;
            unaff_x20[0xb] = puStack_258;
            unaff_x20[10] = puStack_260;
            puVar22 = (undefined *)0x0;
            puVar23 = (undefined *)0x0;
            uVar11 = 2;
            puVar24 = (undefined *)0x0;
            puVar25 = (undefined *)0x0;
            unaff_x20[1] = puStack_2a8;
            *unaff_x20 = local_2b0;
            unaff_x20[3] = uStack_298;
            unaff_x20[2] = puStack_2a0;
            puVar18 = (undefined *)0x0;
            puVar19 = (undefined *)0x0;
            puVar20 = (undefined *)0x0;
            puVar21 = (undefined *)0x0;
            *(undefined1 *)(unaff_x20 + 0x10) = local_230;
          }
          goto LAB_100a1c574;
        }
      }
      else {
        puVar17 = &DAT_00000001;
      }
      puVar10 = &DAT_100c8dd08;
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0);
      local_2b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      pcVar9 = (char *)0x0;
      _Var8.unknown = puVar17;
      FUN_1009fd714(0);
      puVar22 = puVar1;
      if (cVar3 == '\x01') {
        if (*(long *)(puVar1 + 0x10) == 0) {
LAB_100a1c694:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a1c698);
          (*pcVar5)();
        }
        puVar22 = *(undefined **)(puVar1 + 0x20);
      }
      uVar2 = *(ulong *)(local_2b0 + 0x10);
      if (*(ulong *)(local_2b0 + 0x18) >> 1 <= uVar2) {
        pcVar9 = &DAT_00000001;
        _Var8.unknown = (undefined1 *)(uVar2 + 1);
        FUN_1009fd714(1 < *(ulong *)(local_2b0 + 0x18));
      }
      *(undefined1 **)(local_2b0 + 0x10) = (undefined1 *)(uVar2 + 1);
      *(undefined **)(local_2b0 + uVar2 * 8 + 0x20) = puVar22;
      if ((cVar3 == '\x01') && (*(long *)(puVar1 + 0x10) == 0)) {
LAB_100a1c690:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a1c694);
        (*pcVar5)();
      }
      if (puVar17 != &DAT_00000001) {
        lVar14 = uVar2 + 5;
        puVar13 = (undefined8 *)(puVar1 + 0x30);
        puVar16 = &DAT_00000001;
        do {
          if (cVar3 != '\x01') {
            local_220.unknown = (undefined *)0x0;
            puStack_218 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var8);
            _swift_bridgeObjectRelease(puStack_218);
            local_220.unknown = (undefined *)0x207865646e69;
            puStack_218 = &DAT_e600000000000000;
            local_338 = puVar16;
            SVar26 = Swift::CustomStringConvertible::get_description();
            SVar28.bridgeObject = puVar10;
            SVar28.str = pcVar9;
            Swift::String::append(SVar26,SVar28);
            _swift_bridgeObjectRelease(SVar26.bridgeObject);
            SVar26.bridgeObject = (void *)0xee0073646e756f62;
            SVar26.str = (char *)0x20666f2074756f20;
            SVar29.bridgeObject = puVar10;
            SVar29.str = pcVar9;
            Swift::String::append(SVar26,SVar29);
            SVar27.bridgeObject = (void *)0x2;
            SVar27.str = (char *)0xb;
            Swift::_assertionFailure
                      ((StaticString)0x100d8deb0,SVar27,local_220,(__uint64)puStack_218,0xdae790);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a1c788);
            (*pcVar5)();
          }
          if (*(undefined1 **)(puVar1 + 0x10) <= puVar16) goto LAB_100a1c694;
          uVar15 = *puVar13;
          if (*(ulong *)(local_2b0 + 0x18) >> 1 <= lVar14 - 4U) {
            pcVar9 = &DAT_00000001;
            _Var8.unknown = (undefined *)(lVar14 + -3);
            FUN_1009fd714(1 < *(ulong *)(local_2b0 + 0x18));
          }
          *(undefined **)(local_2b0 + 0x10) = (undefined *)(lVar14 + -3);
          *(undefined8 *)(local_2b0 + lVar14 * 8) = uVar15;
          if (*(undefined1 **)(puVar1 + 0x10) <= puVar16) goto LAB_100a1c690;
          puVar16 = puVar16 + 1;
          lVar14 = lVar14 + 1;
          puVar13 = puVar13 + 2;
        } while (puVar17 != puVar16);
      }
      puVar10 = local_2b0;
      local_220.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      puStack_218 = (undefined1 *)CONCAT71(puStack_218._1_7_,1);
      FUN_100a1b7c8(local_2b0);
      _swift_bridgeObjectRelease(puVar10);
      local_338 = (undefined1 *)CONCAT62(local_338._2_6_,uVar4);
      puStack_310 = local_220.unknown;
      local_308 = puStack_218._0_1_;
      puStack_330 = puVar1;
      local_328 = puVar12;
      cStack_320 = cVar3;
      FUN_1005e46c0(&local_338);
      puStack_248 = puStack_2d0;
      local_250 = local_2d8;
      uStack_238 = uStack_2c0;
      puStack_240 = local_2c8;
      local_230 = local_2b8;
      uStack_280 = CONCAT71(uStack_307,local_308);
      puStack_288 = puStack_310;
      local_290 = local_318;
      puStack_278 = puStack_300;
      puStack_268 = puStack_2f0;
      local_270 = local_2f8;
      puStack_258 = puStack_2e0;
      puStack_260 = local_2e8;
      uStack_298 = CONCAT71(uStack_31f,cStack_320);
      puStack_2a8 = puStack_330;
      local_2b0 = local_338;
      puStack_2a0 = local_328;
      uStack_1b8 = unaff_x20[0xd];
      local_1c0 = unaff_x20[0xc];
      uStack_1a8 = unaff_x20[0xf];
      uStack_1b0 = unaff_x20[0xe];
      local_1a0 = *(undefined1 *)(unaff_x20 + 0x10);
      uStack_1f8 = unaff_x20[5];
      local_200 = unaff_x20[4];
      uStack_1e8 = unaff_x20[7];
      uStack_1f0 = unaff_x20[6];
      uStack_1d8 = unaff_x20[9];
      local_1e0 = unaff_x20[8];
      uStack_1c8 = unaff_x20[0xb];
      uStack_1d0 = unaff_x20[10];
      puStack_218 = (undefined1 *)unaff_x20[1];
      local_220.unknown = (undefined *)*unaff_x20;
      uStack_208 = unaff_x20[3];
      uStack_210 = unaff_x20[2];
      _swift_errorRetain(param_2);
      FUN_1000fb4c4(&local_220,&DAT_100ff46d8,&DAT_100c8dd10);
      unaff_x20[0xd] = puStack_248;
      unaff_x20[0xc] = local_250;
      unaff_x20[0xf] = uStack_238;
      unaff_x20[0xe] = puStack_240;
      unaff_x20[5] = puStack_288;
      unaff_x20[4] = local_290;
      unaff_x20[7] = puStack_278;
      unaff_x20[6] = uStack_280;
      unaff_x20[9] = puStack_268;
      unaff_x20[8] = local_270;
      unaff_x20[0xb] = puStack_258;
      unaff_x20[10] = puStack_260;
      puVar22 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      uVar11 = 2;
      puVar24 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
      unaff_x20[1] = puStack_2a8;
      *unaff_x20 = local_2b0;
      unaff_x20[3] = uStack_298;
      unaff_x20[2] = puStack_2a0;
      puVar18 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
      puVar20 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_230;
    }
  }
  else {
    if (iVar6 == 2) {
      ppuVar7 = &local_190;
      FUN_100004520();
      puVar1 = ppuVar7[1];
      puVar10 = ppuVar7[2];
      uVar11 = *(undefined1 *)(ppuVar7 + 3);
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_10000cae0(puVar1,puVar10,uVar11);
      _swift_bridgeObjectRelease(ppuVar7[4]);
      FUN_1005e46ac(ppuVar7[5],*(undefined1 *)(ppuVar7 + 6));
      _swift_errorRelease(ppuVar7[0xf]);
      _swift_unknownObjectRelease(ppuVar7[7]);
      _swift_release(ppuVar7[10]);
      _swift_release(ppuVar7[0xc]);
      _swift_release(ppuVar7[0xe]);
    }
    else {
      if (iVar6 != 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a1c6c8);
        (*pcVar5)();
      }
      uStack_1b8 = uStack_128;
      local_1c0 = local_130;
      uStack_1a8 = uStack_118;
      uStack_1b0 = uStack_120;
      local_1a0 = local_110;
      uStack_1f8 = uStack_168;
      local_200 = local_170;
      uStack_1e8 = uStack_158;
      uStack_1f0 = uStack_160;
      uStack_1d8 = uStack_148;
      local_1e0 = local_150;
      uStack_1c8 = uStack_138;
      uStack_1d0 = uStack_140;
      puStack_218 = (undefined1 *)uStack_188;
      local_220.unknown = local_190;
      uStack_208 = uStack_178;
      uStack_210 = uStack_180;
      FUN_1000f8cac(&local_100,&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
    }
    puVar22 = (undefined *)0x0;
    puVar23 = (undefined *)0x0;
    uVar11 = 2;
    puVar24 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puVar21 = (undefined *)0x0;
  }
LAB_100a1c574:
  param_1[1] = puVar23;
  *param_1 = puVar22;
  param_1[3] = puVar25;
  param_1[2] = puVar24;
  param_1[5] = puVar19;
  param_1[4] = puVar18;
  param_1[7] = puVar21;
  param_1[6] = puVar20;
  *(undefined1 *)(param_1 + 8) = uVar11;
  return;
}



/* Address: 0x100a1c788 | FUN_100a1c788 */

void FUN_100a1c788(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  AsyncThrowingStream AVar5;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = &DAT_100ff4a20;
  FUN_1000f7830(&DAT_100ff4a20,&DAT_100c8e098);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)(&stack0xffffffffffffffb0 + -extraout_x8);
  FUN_1000f8cac(param_2,plVar6,&DAT_100ff4a20,&DAT_100c8e098);
  plVar4 = plVar6;
  _swift_getEnumCaseMultiPayload(plVar6,puVar3);
  if ((int)plVar4 == 1) {
    lVar7 = *plVar6;
    lVar8 = *(long *)(lVar7 + 0x10);
    puVar3 = &DAT_100ff4b58;
    FUN_1000f7830(&DAT_100ff4b58,&DAT_100c8e1c8);
    _swift_allocObject();
    *(long *)(puVar3 + 0x10) = lVar8;
    _swift_retain(lVar8);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x80));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1c994);
      (*pcVar1)();
    }
    FUN_100a1c99c();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x80));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1c998);
      (*pcVar1)();
    }
    FUN_1000fb4c4(param_2,&DAT_100ff4a20,&DAT_100c8e098);
    _swift_release(lVar7);
    *param_1 = puVar3;
    puVar3 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    _swift_storeEnumTagMultiPayload(param_1,puVar3,1);
  }
  else {
    AVar5.unknown = &DAT_100ff4b60;
    FUN_1000f7830(&DAT_100ff4b60,&DAT_100c8e1d0);
    lVar7 = *(long *)(AVar5.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar7 + 0x20))((long)plVar6 - extraout_x8_00,plVar6,AVar5.unknown);
    Swift::AsyncThrowingStream::_makeAsyncIterator(AVar5);
    FUN_1000fb4c4(param_2,&DAT_100ff4a20,&DAT_100c8e098);
    (**(code **)(lVar7 + 8))((long)plVar6 - extraout_x8_00,AVar5.unknown);
    puVar3 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    _swift_storeEnumTagMultiPayload(param_1,puVar3,0);
  }
  return;
}



/* Address: 0x100a1c998 | thunk_FUN_100a1c99c */

void thunk_FUN_100a1c99c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined6 uVar13;
  undefined3 uVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  undefined3 uVar17;
  undefined7 uVar18;
  undefined2 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  byte *unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbVar24;
  String SVar25;
  
  bVar4 = *unaff_x20;
  bVar5 = unaff_x20[7];
  uVar14 = *(undefined3 *)(unaff_x20 + 5);
  uVar15 = *(undefined7 *)(unaff_x20 + 1);
  uVar16 = *(undefined8 *)unaff_x20;
  uVar23 = *(undefined8 *)unaff_x20;
  pbVar24 = unaff_x20 + 8;
  uVar22 = *(undefined8 *)pbVar24;
  bVar6 = *pbVar24;
  bVar7 = unaff_x20[0x10];
  bVar8 = unaff_x20[0x11];
  uVar19 = *(undefined2 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined2 *)(unaff_x20 + 0x28);
  bVar9 = unaff_x20[0x2a];
  if (1 < bVar9) {
    if (bVar9 < 4) {
      if (bVar9 == 2) {
        uVar13 = *(undefined6 *)(unaff_x20 + 0x12);
        FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,2);
        if ((bVar6 & 1) == 0) {
          FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,2);
          *(undefined8 *)unaff_x20 = uVar16;
          unaff_x20[8] = 1;
          unaff_x20[0x10] = bVar7;
          unaff_x20[0x11] = bVar8;
          *(int *)(unaff_x20 + 0x12) = (int)uVar13;
          *(short *)(unaff_x20 + 0x16) = (short)((uint6)uVar13 >> 0x20);
          goto LAB_100a1cc7c;
        }
        _swift_release(uVar16);
        _swift_errorRelease(CONCAT62(uVar13,uVar19));
      }
      else {
        if ((bVar4 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1cca8);
          (*pcVar20)();
        }
        FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,3);
      }
    }
    else {
      if (bVar9 != 4) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1ccac);
        (*pcVar20)();
      }
      FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,4);
      if ((bVar4 & 1) == 0) {
        FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,4);
        unaff_x20[0] = 1;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        unaff_x20[3] = 0;
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[6] = 0;
        unaff_x20[7] = 0;
        unaff_x20[0x10] = 0;
        unaff_x20[0x11] = 0;
        unaff_x20[0x12] = 0;
        unaff_x20[0x13] = 0;
        unaff_x20[0x14] = 0;
        unaff_x20[0x15] = 0;
        unaff_x20[0x16] = 0;
        unaff_x20[0x17] = 0;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        unaff_x20[0x20] = 0;
        unaff_x20[0x21] = 0;
        unaff_x20[0x22] = 0;
        unaff_x20[0x23] = 0;
        unaff_x20[0x24] = 0;
        unaff_x20[0x25] = 0;
        unaff_x20[0x26] = 0;
        unaff_x20[0x27] = 0;
        unaff_x20[0x18] = 0;
        unaff_x20[0x19] = 0;
        unaff_x20[0x1a] = 0;
        unaff_x20[0x1b] = 0;
        unaff_x20[0x1c] = 0;
        unaff_x20[0x1d] = 0;
        unaff_x20[0x1e] = 0;
        unaff_x20[0x1f] = 0;
        unaff_x20[0x28] = 0;
        unaff_x20[0x29] = 0;
        goto LAB_100a1cc7c;
      }
    }
LAB_100a1ccd4:
    SVar25.bridgeObject = (void *)0x2;
    SVar25.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar25,(StaticString)0xd000000000000051,0x8000000100daeac0,
               0xdaeab0);
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1cd20);
    (*pcVar20)();
  }
  bVar10 = unaff_x20[0xf];
  uVar17 = *(undefined3 *)(unaff_x20 + 0xd);
  uVar3 = *(undefined4 *)(unaff_x20 + 9);
  uVar18 = *(undefined7 *)(unaff_x20 + 9);
  if (bVar9 == 0) {
    FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,0);
    if ((bVar8 & 1) != 0) goto LAB_100a1ccd4;
    FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,0);
    *unaff_x20 = bVar4;
    *(int *)(unaff_x20 + 1) = (int)uVar15;
    unaff_x20[7] = bVar5;
    *(short *)(unaff_x20 + 5) = (short)uVar14;
    unaff_x20[8] = bVar6;
    *(int *)(unaff_x20 + 9) = (int)uVar18;
    unaff_x20[0xf] = (byte)((uint7)uVar18 >> 0x30);
    *(short *)(unaff_x20 + 0xd) = (short)((uint7)uVar18 >> 0x20);
    unaff_x20[0x10] = bVar7 & 1;
    unaff_x20[0x11] = 1;
  }
  else {
    bVar8 = unaff_x20[0x28];
    bVar11 = unaff_x20[0x29];
    FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,1);
    if ((bVar11 & 1) != 0) {
      _swift_release(uVar2);
      goto LAB_100a1ccd4;
    }
    FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,1);
    *unaff_x20 = bVar4;
    *(int *)(unaff_x20 + 1) = (int)uVar15;
    unaff_x20[7] = bVar5;
    *(short *)(unaff_x20 + 5) = (short)uVar14;
    unaff_x20[8] = bVar6;
    *(undefined4 *)(unaff_x20 + 9) = uVar3;
    unaff_x20[0xf] = bVar10;
    *(short *)(unaff_x20 + 0xd) = (short)uVar17;
    unaff_x20[0x10] = bVar7 & 1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar21;
    unaff_x20[0x28] = bVar8 & 1;
    unaff_x20[0x29] = 1;
  }
LAB_100a1cc7c:
  unaff_x20[0x2a] = bVar9;
  return;
}



/* Address: 0x100a1c99c | FUN_100a1c99c */

void FUN_100a1c99c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined6 uVar13;
  undefined3 uVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  undefined3 uVar17;
  undefined7 uVar18;
  undefined2 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  byte *unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbVar24;
  String SVar25;
  
  bVar4 = *unaff_x20;
  bVar5 = unaff_x20[7];
  uVar14 = *(undefined3 *)(unaff_x20 + 5);
  uVar15 = *(undefined7 *)(unaff_x20 + 1);
  uVar16 = *(undefined8 *)unaff_x20;
  uVar23 = *(undefined8 *)unaff_x20;
  pbVar24 = unaff_x20 + 8;
  uVar22 = *(undefined8 *)pbVar24;
  bVar6 = *pbVar24;
  bVar7 = unaff_x20[0x10];
  bVar8 = unaff_x20[0x11];
  uVar19 = *(undefined2 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined2 *)(unaff_x20 + 0x28);
  bVar9 = unaff_x20[0x2a];
  if (1 < bVar9) {
    if (bVar9 < 4) {
      if (bVar9 == 2) {
        uVar13 = *(undefined6 *)(unaff_x20 + 0x12);
        FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,2);
        if ((bVar6 & 1) == 0) {
          FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,2);
          *(undefined8 *)unaff_x20 = uVar16;
          unaff_x20[8] = 1;
          unaff_x20[0x10] = bVar7;
          unaff_x20[0x11] = bVar8;
          *(int *)(unaff_x20 + 0x12) = (int)uVar13;
          *(short *)(unaff_x20 + 0x16) = (short)((uint6)uVar13 >> 0x20);
          goto LAB_100a1cc7c;
        }
        _swift_release(uVar16);
        _swift_errorRelease(CONCAT62(uVar13,uVar19));
      }
      else {
        if ((bVar4 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1cca8);
          (*pcVar20)();
        }
        FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,3);
      }
    }
    else {
      if (bVar9 != 4) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1ccac);
        (*pcVar20)();
      }
      FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,4);
      if ((bVar4 & 1) == 0) {
        FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,4);
        unaff_x20[0] = 1;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        unaff_x20[3] = 0;
        unaff_x20[4] = 0;
        unaff_x20[5] = 0;
        unaff_x20[6] = 0;
        unaff_x20[7] = 0;
        unaff_x20[0x10] = 0;
        unaff_x20[0x11] = 0;
        unaff_x20[0x12] = 0;
        unaff_x20[0x13] = 0;
        unaff_x20[0x14] = 0;
        unaff_x20[0x15] = 0;
        unaff_x20[0x16] = 0;
        unaff_x20[0x17] = 0;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        unaff_x20[0x20] = 0;
        unaff_x20[0x21] = 0;
        unaff_x20[0x22] = 0;
        unaff_x20[0x23] = 0;
        unaff_x20[0x24] = 0;
        unaff_x20[0x25] = 0;
        unaff_x20[0x26] = 0;
        unaff_x20[0x27] = 0;
        unaff_x20[0x18] = 0;
        unaff_x20[0x19] = 0;
        unaff_x20[0x1a] = 0;
        unaff_x20[0x1b] = 0;
        unaff_x20[0x1c] = 0;
        unaff_x20[0x1d] = 0;
        unaff_x20[0x1e] = 0;
        unaff_x20[0x1f] = 0;
        unaff_x20[0x28] = 0;
        unaff_x20[0x29] = 0;
        goto LAB_100a1cc7c;
      }
    }
LAB_100a1ccd4:
    SVar25.bridgeObject = (void *)0x2;
    SVar25.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar25,(StaticString)0xd000000000000051,0x8000000100daeac0,
               0xdaeab0);
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100a1cd20);
    (*pcVar20)();
  }
  bVar10 = unaff_x20[0xf];
  uVar17 = *(undefined3 *)(unaff_x20 + 0xd);
  uVar3 = *(undefined4 *)(unaff_x20 + 9);
  uVar18 = *(undefined7 *)(unaff_x20 + 9);
  if (bVar9 == 0) {
    FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,0);
    if ((bVar8 & 1) != 0) goto LAB_100a1ccd4;
    FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,0);
    *unaff_x20 = bVar4;
    *(int *)(unaff_x20 + 1) = (int)uVar15;
    unaff_x20[7] = bVar5;
    *(short *)(unaff_x20 + 5) = (short)uVar14;
    unaff_x20[8] = bVar6;
    *(int *)(unaff_x20 + 9) = (int)uVar18;
    unaff_x20[0xf] = (byte)((uint7)uVar18 >> 0x30);
    *(short *)(unaff_x20 + 0xd) = (short)((uint7)uVar18 >> 0x20);
    unaff_x20[0x10] = bVar7 & 1;
    unaff_x20[0x11] = 1;
  }
  else {
    bVar8 = unaff_x20[0x28];
    bVar11 = unaff_x20[0x29];
    FUN_1009e8ec8(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,1);
    if ((bVar11 & 1) != 0) {
      _swift_release(uVar2);
      goto LAB_100a1ccd4;
    }
    FUN_1009e8f30(uVar23,uVar22,uVar1,uVar2,uVar21,uVar12,1);
    *unaff_x20 = bVar4;
    *(int *)(unaff_x20 + 1) = (int)uVar15;
    unaff_x20[7] = bVar5;
    *(short *)(unaff_x20 + 5) = (short)uVar14;
    unaff_x20[8] = bVar6;
    *(undefined4 *)(unaff_x20 + 9) = uVar3;
    unaff_x20[0xf] = bVar10;
    *(short *)(unaff_x20 + 0xd) = (short)uVar17;
    unaff_x20[0x10] = bVar7 & 1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar21;
    unaff_x20[0x28] = bVar8 & 1;
    unaff_x20[0x29] = 1;
  }
LAB_100a1cc7c:
  unaff_x20[0x2a] = bVar9;
  return;
}



/* Address: 0x100a1cd44 | FUN_100a1cd44 */

void FUN_100a1cd44(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x30))(param_2);
  return;
}



/* Address: 0x100a1cd68 | FUN_100a1cd68 */

void FUN_100a1cd68(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100a1cd78 | FUN_100a1cd78 */

void FUN_100a1cd78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a1cda4 | FUN_100a1cda4 */

void FUN_100a1cda4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a1cdd0 | FUN_100a1cdd0 */

void FUN_100a1cdd0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a1ce14 | thunk_FUN_100a1cd44 */

void thunk_FUN_100a1cd44(void)

{
  FUN_100a1cd44();
  return;
}



/* Address: 0x100a1ce18 | thunk_FUN_100a1b24c */

void thunk_FUN_100a1b24c(void)

{
  thunk_FUN_100a1b24c();
  return;
}



/* Address: 0x100a1ce1c | FUN_100a1ce1c */

undefined8
FUN_100a1ce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_100a1f4ac(param_1,param_2,param_3,param_4);
  _swift_release(param_4);
  return param_1;
}



/* Address: 0x100a1ce8c | FUN_100a1ce8c */

undefined8
FUN_100a1ce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100a1f4ac();
  _swift_release(param_4);
  return param_1;
}



/* Address: 0x100a1cebc | FUN_100a1cebc */

void FUN_100a1cebc(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  Instant IVar8;
  long extraout_x8;
  code *pcVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  uVar4 = param_1;
  FUN_100627f08();
  uVar5 = uVar4;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(uVar4);
  if ((uVar5 & 1) != 0) {
    puVar6 = &DAT_100ff4b68;
    FUN_1000f7830(&DAT_100ff4b68,&DAT_100c8e1e0);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar10 = auStack_a0 + -extraout_x8;
    puVar1 = (undefined8 *)(unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state);
    _swift_beginAccess(puVar1,auStack_78,0x21,0);
    puVar6 = &DAT_100ff4b70;
    FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x34)) = 1;
    cVar2 = *(char *)(puVar1 + 2);
    if (cVar2 != '\x01') {
      uStack_88 = puVar1[1];
      local_90 = *puVar1;
      IVar8 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
      lVar11 = *(long *)(IVar8.unknown + -8);
      local_98 = puVar10;
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
      Swift::ContinuousClock::typeMetadataAccessor();
      FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                    PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
      Swift::Clock::_get_now();
      FUN_100003a00(&DAT_100ff4b88,PTR_typeMetadataAccessor_100eaeef0,
                    PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
      Swift::InstantProtocol::_advanced();
      (**(code **)(lVar11 + 8))
                ((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),IVar8.unknown);
      puVar3 = local_98;
      puVar6 = &DAT_100ff4b78;
      FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
      pcVar9 = *(code **)(*(long *)(puVar6 + -8) + 0x38);
    }
    else {
      puVar6 = &DAT_100ff4b78;
      FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
      pcVar9 = *(code **)(*(long *)(puVar6 + -8) + 0x38);
      puVar3 = puVar10;
    }
    (*pcVar9)(puVar10,cVar2 == '\x01',1,puVar6);
    _swift_endAccess(auStack_78);
    puVar6 = &DAT_100ff4b78;
    FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
    puVar7 = puVar10;
    (**(code **)(*(long *)(puVar6 + -8) + 0x30))(puVar10,1,puVar6);
    if ((int)puVar7 != 1) {
      IVar8 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
      lVar12 = *(long *)(IVar8.unknown + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
      lVar11 = (long)puVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar12 + 0x20))(lVar11,puVar10,IVar8.unknown);
      FUN_100a1d1a4(param_1,lVar11);
      (**(code **)(lVar12 + 8))(lVar11,IVar8.unknown);
    }
  }
  return;
}



/* Address: 0x100a1d1a4 | FUN_100a1d1a4 */

void FUN_100a1d1a4(long param_1,Instant param_2)

{
  long *plVar1;
  undefined *puVar2;
  Instant IVar3;
  Instant IVar4;
  Duration DVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  Instant IVar9;
  code *pcVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  tuple2_conflict14 tVar15;
  undefined1 auStack_70 [8];
  long local_68;
  
  plVar1 = (long *)(unaff_x20 +
                   _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  if (*plVar1 == 0) {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x30);
    local_68 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    IVar9.unknown = param_2.unknown;
    IVar3 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
    lVar13 = *(long *)(IVar3.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
    IVar4.unknown = puVar2;
    _swift_unknownObjectRetain();
    Swift::ContinuousClock::Instant::get_now(IVar4);
    DVar5 = Swift::ContinuousClock::Instant::duration(param_2,IVar9);
    (**(code **)(lVar13 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown)
    ;
    tVar15 = Swift::Duration::get_components(DVar5);
    lVar12 = tVar15.seconds * 1000000000;
    lVar8 = tVar15.attoseconds / 1000000000;
    lVar13 = 0x7fffffffffffffff;
    if (!SCARRY8(lVar12,lVar8)) {
      lVar13 = lVar12 + lVar8;
    }
    lVar8 = 0x7fffffffffffffff;
    if (SUB168(SEXT816(tVar15.seconds) * SEXT816(1000000000),8) == lVar12 >> 0x3f) {
      lVar8 = lVar13;
    }
    puVar6 = &DAT_100f28788;
    _swift_allocObject(&DAT_100f28788,0x20,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(long *)(puVar6 + 0x18) = param_1;
    puVar7 = &DAT_100f287b0;
    _swift_allocObject(&DAT_100f287b0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_100a219a8;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    _swift_getObjectType(puVar2);
    pcVar14 = *(code **)(local_68 + 0xb0);
    _swift_retain();
    _swift_retain(param_1);
    pcVar10 = FUN_1006226e4;
    puVar6 = puVar7;
    (*pcVar14)();
    _swift_unknownObjectRelease(puVar2);
    _swift_release(puVar7);
    lVar13 = *plVar1;
    lVar12 = plVar1[1];
    lVar11 = plVar1[2];
    *plVar1 = lVar8;
    plVar1[1] = (long)pcVar10;
    plVar1[2] = (long)puVar6;
    FUN_100622430(lVar13,lVar12,lVar11);
  }
  return;
}



/* Address: 0x100a1d398 | thunk_FUN_100a1f638 */

void thunk_FUN_100a1f638(void)

{
  FUN_100a1f638();
  return;
}



/* Address: 0x100a1d39c | FUN_100a1d39c */

void FUN_100a1d39c(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  Instant IVar6;
  long extraout_x8;
  code *pcVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100ff4b68;
  FUN_1000f7830(&DAT_100ff4b68,&DAT_100c8e1e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + -extraout_x8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state);
  _swift_beginAccess(puVar1,auStack_78,0x21,0);
  puVar4 = &DAT_100ff4b70;
  FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar4 + 0x34)) = 1;
  cVar2 = *(char *)(puVar1 + 2);
  if (cVar2 != '\x01') {
    uStack_88 = puVar1[1];
    local_90 = *puVar1;
    IVar6 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
    lVar9 = *(long *)(IVar6.unknown + -8);
    local_98 = puVar8;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
    Swift::ContinuousClock::typeMetadataAccessor();
    FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                  PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
    Swift::Clock::_get_now();
    FUN_100003a00(&DAT_100ff4b88,PTR_typeMetadataAccessor_100eaeef0,
                  PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
    Swift::InstantProtocol::_advanced();
    (**(code **)(lVar9 + 8))
              ((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),IVar6.unknown);
    puVar3 = local_98;
    puVar4 = &DAT_100ff4b78;
    FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
    pcVar7 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
  }
  else {
    puVar4 = &DAT_100ff4b78;
    FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
    pcVar7 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
    puVar3 = puVar8;
  }
  (*pcVar7)(puVar8,cVar2 == '\x01',1,puVar4);
  _swift_endAccess(auStack_78);
  puVar4 = &DAT_100ff4b78;
  FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
  puVar5 = puVar8;
  (**(code **)(*(long *)(puVar4 + -8) + 0x30))(puVar8,1,puVar4);
  if ((int)puVar5 != 1) {
    IVar6 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
    lVar10 = *(long *)(IVar6.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
    lVar9 = (long)puVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar10 + 0x20))(lVar9,puVar8,IVar6.unknown);
    FUN_100a1d1a4(param_1,lVar9);
    (**(code **)(lVar10 + 8))(lVar9,IVar6.unknown);
  }
  FUN_100626b80();
  return;
}



/* Address: 0x100a1d654 | FUN_100a1d654 */

void FUN_100a1d654(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state;
  _swift_beginAccess(lVar1,auStack_38,1,0);
  puVar2 = &DAT_100ff4b70;
  FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
  *(undefined1 *)(lVar1 + *(int *)(puVar2 + 0x34)) = 0;
  return;
}



/* Address: 0x100a1d6b0 | FUN_100a1d6b0 */

void FUN_100a1d6b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  undefined *puVar4;
  Instant IVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100f08218;
  puVar6 = puVar4;
  local_80 = param_1;
  FUN_100a1ec80();
  lVar1 = unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state;
  local_90 = puVar6;
  puStack_88 = puVar4;
  _swift_beginAccess(lVar1,auStack_78,0x21,0);
  puVar4 = &DAT_100ff4b70;
  FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
  IVar5 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  lVar7 = *(long *)(IVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  (**(code **)(lVar7 + 0x28))
            (lVar1 + *(int *)(puVar4 + 0x30),
             (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar5.unknown);
  cVar2 = (char)(param_3 >> 0x38);
  if (cVar2 == '\0') {
    *(undefined1 *)(lVar1 + *(int *)(puVar4 + 0x2c)) = 1;
    lVar7 = *(long *)(lVar1 + *(int *)(puVar4 + 0x28));
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a1d844);
      (*pcVar3)();
    }
    *(long *)(lVar1 + *(int *)(puVar4 + 0x28)) = lVar7 + 1;
  }
  else if (cVar2 != '\x01') {
    *(undefined1 *)(lVar1 + *(int *)(puVar4 + 0x2c)) = 0;
  }
  _swift_endAccess(auStack_78);
  FUN_100626ce0(param_2);
  FUN_100875938(puStack_88,local_90,param_3,param_3 >> 0x38);
  return;
}



/* Address: 0x100a1d844 | FUN_100a1d844 */

void FUN_100a1d844(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  Instant IVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined *local_90;
  ulong uStack_88;
  undefined1 *local_80;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f082a8;
  puVar5 = puVar1;
  uVar6 = param_3;
  FUN_100a1ec80();
  puVar2 = &DAT_100ff4b90;
  FUN_1000f7830(&DAT_100ff4b90,&DAT_100c8e1f8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  _swift_beginAccess(unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state,auStack_78
                     ,0x21,0);
  FUN_100a1da58(puVar9,puVar1,puVar5,uVar6);
  _swift_endAccess(auStack_78);
  puVar2 = &DAT_100ff4b78;
  FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
  puVar3 = puVar9;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(puVar9,2,puVar2);
  if ((int)puVar3 == 0) {
    IVar4 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
    lVar7 = *(long *)(IVar4.unknown + -8);
    local_90 = puVar5;
    uStack_88 = uVar6 >> 0x38;
    local_80 = puVar9;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
    lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    local_98 = param_3;
    (**(code **)(lVar7 + 0x20))(lVar8,puVar9,IVar4.unknown);
    FUN_100a1d1a4(param_1,lVar8);
    FUN_100626ebc(param_2,local_98);
    FUN_100875938(puVar1,local_90,uVar6,uStack_88);
    (**(code **)(lVar7 + 8))(lVar8,IVar4.unknown);
  }
  else {
    if ((int)puVar3 == 1) {
      FUN_10062dee8(param_2,param_3);
      FUN_100626d64(2,0);
    }
    else {
      FUN_100626ebc(param_2,param_3);
    }
    FUN_100875938(puVar1,puVar5,uVar6,uVar6 >> 0x38);
  }
  return;
}



/* Address: 0x100a1da58 | FUN_100a1da58 */

void FUN_100a1da58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  Instant IVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined1 auStack_90 [8];
  ulong local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_4 >> 0x39 != 0) {
    puVar2 = &DAT_100ff4b70;
    FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
    lVar5 = *(long *)((long)unaff_x20 + (long)*(int *)(puVar2 + 0x28));
    lVar6 = lVar5 + -1;
    if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a1dce4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(long *)((long)unaff_x20 + (long)*(int *)(puVar2 + 0x28)) = lVar6;
    if (lVar6 == 0) {
      if (*(char *)((long)unaff_x20 + (long)*(int *)(puVar2 + 0x38)) == '\x01') {
        puVar2 = &DAT_100ff4b78;
        FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x38);
        uVar4 = 1;
        goto LAB_100a1dad8;
      }
      if (*(char *)(unaff_x20 + 2) != '\x01') {
        uStack_68 = unaff_x20[1];
        local_70 = *unaff_x20;
        if (*(char *)((long)unaff_x20 + (long)*(int *)(puVar2 + 0x34)) == '\x01') {
          local_80 = puVar2;
          IVar3 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
          lVar5 = *(long *)(IVar3.unknown + -8);
          lVar6 = *(long *)(lVar5 + 0x40);
          local_78 = auStack_90;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          local_88 = lVar6 + 0xfU & 0xfffffffffffffff0;
          lVar6 = -local_88;
          Swift::ContinuousClock::typeMetadataAccessor();
          FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                        PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
          Swift::Clock::_get_now();
          (**(code **)(lVar5 + 0x28))
                    ((long)unaff_x20 + (long)*(int *)(local_80 + 0x30),auStack_90 + lVar6,
                     IVar3.unknown);
          puVar1 = local_78;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          lVar6 = (long)puVar1 - local_88;
          Swift::Clock::_get_now();
          FUN_100003a00(&DAT_100ff4b88,PTR_typeMetadataAccessor_100eaeef0,
                        PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08
                       );
          Swift::InstantProtocol::_advanced();
          (**(code **)(lVar5 + 8))(lVar6,IVar3.unknown);
          puVar2 = &DAT_100ff4b78;
          FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
          (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,0,2,puVar2);
          return;
        }
      }
    }
  }
  puVar2 = &DAT_100ff4b78;
  FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x38);
  uVar4 = 2;
LAB_100a1dad8:
                    /* WARNING: Could not recover jumptable at 0x000100a1daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,2,puVar2);
  return;
}



/* Address: 0x100a1dce4 | FUN_100a1dce4 */

void FUN_100a1dce4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  Instant IVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)
           (param_1 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar10 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_100622430(uVar2,uVar3,uVar10);
  puVar7 = &DAT_100ff4e68;
  FUN_1000f7830(&DAT_100ff4e68,&DAT_100c8e388);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)((long)&local_b0 - extraout_x8);
  puVar1 = (undefined8 *)(param_1 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state);
  _swift_beginAccess(puVar1,auStack_78,0x21,0);
  if (*(char *)(puVar1 + 2) != '\x01') {
    uStack_88 = puVar1[1];
    local_90 = *puVar1;
    puVar7 = &DAT_100ff4b70;
    FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
    if ((*(char *)((long)puVar1 + (long)*(int *)(puVar7 + 0x34)) == '\x01') &&
       (((*(byte *)((long)puVar1 + (long)*(int *)(puVar7 + 0x2c)) & 1) != 0 ||
        (*(long *)((long)puVar1 + (long)*(int *)(puVar7 + 0x28)) < 1)))) {
      local_98 = param_2;
      IVar9 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
      local_a8 = *(long *)(IVar9.unknown + -8);
      lVar12 = *(long *)(local_a8 + 0x40);
      local_a0 = puVar11;
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      uVar14 = lVar12 + 0xfU & 0xfffffffffffffff0;
      lVar12 = (long)puVar11 - uVar14;
      Swift::ContinuousClock::typeMetadataAccessor();
      FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                    PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
      Swift::Clock::_get_now();
      local_b0 = lVar12;
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      puVar4 = PTR_typeMetadataAccessor_100eaeef0;
      lVar13 = lVar12 - uVar14;
      FUN_100003a00(&DAT_100ff4b88,PTR_typeMetadataAccessor_100eaeef0,
                    PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
      Swift::InstantProtocol::_advanced();
      puVar7 = &DAT_100ff4e70;
      FUN_100003a00(&DAT_100ff4e70,puVar4,
                    PTR_Swift__Swift__ContinuousClock__Instant_>Swift__Comparable_100eaef00);
      bVar6 = Swift::Comparable::>__infix(lVar12,lVar13,IVar9.unknown,puVar7);
      pcVar15 = *(code **)(local_a8 + 8);
      (*pcVar15)(lVar13,IVar9.unknown);
      (*pcVar15)(lVar12,IVar9.unknown);
      puVar5 = local_a0;
      if (!bVar6) {
        Swift::InstantProtocol::_advanced();
        puVar7 = &DAT_100ff4b78;
        FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
        pcVar15 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
      }
      else {
        puVar7 = &DAT_100ff4b78;
        FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
        pcVar15 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
      }
      (*pcVar15)(puVar11,bVar6,2,puVar7);
      param_2 = local_98;
      goto LAB_100a1de0c;
    }
  }
  puVar7 = &DAT_100ff4b78;
  FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(puVar11,2,2,puVar7);
  puVar5 = puVar11;
LAB_100a1de0c:
  _swift_endAccess(auStack_78);
  puVar7 = &DAT_100ff4b78;
  FUN_1000f7830(&DAT_100ff4b78,&DAT_100c8e1f0);
  puVar8 = puVar11;
  (**(code **)(*(long *)(puVar7 + -8) + 0x30))(puVar11,2,puVar7);
  if ((int)puVar8 == 0) {
    IVar9 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
    lVar13 = *(long *)(IVar9.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
    lVar12 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar13 + 0x20))(lVar12,puVar11,IVar9.unknown);
    FUN_100a1d1a4(param_2,lVar12);
    (**(code **)(lVar13 + 8))(lVar12,IVar9.unknown);
  }
  else if ((int)puVar8 == 1) {
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x100a1e0c4 | FUN_100a1e0c4 */

void FUN_100a1e0c4(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f28760;
    _swift_allocObject(&DAT_100f28760,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(FUN_1008777d0,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x100a1e1bc | FUN_100a1e1bc */

void FUN_100a1e1bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  undefined8 uVar3;
  
  uVar3 = param_2;
  FUN_10000cbfc(param_2,auStack_50);
  iVar2 = (int)uVar3;
  _swift_dynamicCast();
  if (iVar2 == 0) {
    FUN_100626b98(param_2);
  }
  else {
    lVar1 = unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state;
    _swift_beginAccess(lVar1,auStack_68,1,0);
    puVar4 = &DAT_100ff4b70;
    FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
    if (*(long *)(lVar1 + *(int *)(puVar4 + 0x28)) < 1) {
      FUN_100626d64(2,0);
    }
    else {
      *(undefined1 *)(lVar1 + *(int *)(puVar4 + 0x38)) = 1;
    }
  }
  FUN_100004594(auStack_50);
  return;
}



/* Address: 0x100a1e298 | FUN_100a1e298 */

void FUN_100a1e298(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1000fb4c4(unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state,&DAT_100ff4b70,
                &DAT_100c8e1e8);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  FUN_100622430(*puVar1,puVar1[1],puVar1[2]);
  return;
}


