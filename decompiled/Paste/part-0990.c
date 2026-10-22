/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a9a710 | FUN_100a9a710 */

void FUN_100a9a710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_10;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_9;
  *(undefined1 *)(unaff_x22 + 0x2c2) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_5;
  *(undefined8 *)(unaff_x22 + 400) = param_2;
  *(undefined8 *)(unaff_x22 + 0x198) = param_3;
  _swift_task_switch(FUN_100a9a748,0,0);
  return;
}



/* Address: 0x100a9a748 | FUN_100a9a748 */

void FUN_100a9a748(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  FUN_1005ebbb4(uVar2,&DAT_100f2d7d8,&DAT_100f2f2a0,&DAT_100f2f280,&PTR_PTR_100f2f2c8,
                &PTR_PTR_100f2f2b0);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar2;
  if (lVar5 < 0) {
    *(undefined1 *)(unaff_x22 + 0x2c4) = *(undefined1 *)(unaff_x22 + 0x2c2);
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    *(byte *)(unaff_x22 + 0x2c5) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x248) = plVar3;
      FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100a9b37c;
      Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x2c0));
      return;
    }
    _swift_taskGroup_wait_next_throwing
              (unaff_x22 + 0x2c1,**(undefined8 **)(unaff_x22 + 400),FUN_100a9b3ec,unaff_x22 + 0x50);
    return;
  }
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x2c3) = bVar1 & 1;
  *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x1e0) + 0x10);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1f0) = plVar3;
    FUN_1000f7830(&DAT_100ff7f78,&DAT_100c93420);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a9a96c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar4 = thunk_FUN_100aa233c;
  _swift_task_addCancellationHandler(thunk_FUN_100aa233c,uVar2);
  *(code **)(unaff_x22 + 0x1f8) = pcVar4;
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a9a9ec;
  FUN_100a697f8(uVar2);
  return;
}



/* Address: 0x100a9a96c | FUN_100a9a96c */

void FUN_100a9a96c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar3 [16];
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f0));
  if (unaff_x20 == 0) {
    auVar3 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x130),*(undefined1 (*) [16])(lVar2 + 0x130),8,
                      1);
    *(long *)(lVar2 + 0x230) = auVar3._8_8_;
    *(long *)(lVar2 + 0x228) = auVar3._0_8_;
    *(undefined8 *)(lVar2 + 0x220) = *(undefined8 *)(lVar2 + 0x140);
    pcVar1 = FUN_100a9ab18;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_100a9b238;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9a9ec | FUN_100a9a9ec */

void FUN_100a9a9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x200));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x208) = param_3;
    *(undefined8 *)(lVar2 + 0x210) = param_2;
    *(undefined8 *)(lVar2 + 0x218) = param_1;
    pcVar1 = FUN_100a9aa7c;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_100a9aad4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9aa7c | FUN_100a9aa7c */

void FUN_100a9aa7c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x1f8));
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x208);
  _swift_task_switch(FUN_100a9ab18,0,0);
  return;
}



/* Address: 0x100a9aad4 | FUN_100a9aad4 */

void FUN_100a9aad4(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_switch(FUN_100a9b238,0,0);
  return;
}



/* Address: 0x100a9ab18 | FUN_100a9ab18 */

/* WARNING: Removing unreachable block (ram,0x000100a9ab60) */

void FUN_100a9ab18(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined7 uVar5;
  code *pcVar6;
  __uint8 _Var7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  TaskPriority TVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 extraout_var;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  long lVar25;
  long unaff_x22;
  undefined8 uVar26;
  undefined8 uVar27;
  TaskPriority TVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar22 = *(long *)(unaff_x22 + 0x230);
  if (lVar22 != 0) {
    if (lVar22 == 1) {
      (extension_Swift)::Swift::Task::_checkCancellation();
      plVar13 = (long *)0x90;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x238) = plVar13;
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_100a9b2dc;
      FUN_100a9cd88(0,0);
      return;
    }
    cVar1 = *(char *)(unaff_x22 + 0x228);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
    if (cVar1 == '\x04') {
      lVar20 = *(long *)(unaff_x22 + 0x198);
      _swift_beginAccess(lVar20 + 0x10,unaff_x22 + 0x160,1,0);
      lVar20 = *(long *)(lVar20 + 0x10);
      if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b22c);
        (*pcVar6)();
      }
      *(long *)(*(long *)(unaff_x22 + 0x198) + 0x10) = lVar20 + 1;
    }
    TVar28.unknown = *(undefined **)(unaff_x22 + 0x1d0);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x2c2);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1b8);
    puVar15 = &DAT_100ff7e38;
    FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
    uVar12 = *(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xf;
    uVar10 = uVar12 & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar11 = Swift::TaskPriority::typeMetadataAccessor();
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1c0);
    lVar20 = *(long *)(TVar11.unknown + -8);
    (**(code **)(lVar20 + 0x38))(uVar10,1,1,TVar11.unknown);
    puVar15 = &DAT_100f2f4a8;
    _swift_allocObject(&DAT_100f2f4a8,0x78,7);
    *(undefined8 *)(puVar15 + 0x10) = 0;
    *(undefined8 *)(puVar15 + 0x18) = 0;
    *(undefined8 *)(puVar15 + 0x20) = uVar26;
    puVar15[0x28] = uVar2;
    *(long *)(puVar15 + 0x30) = lVar22;
    puVar15[0x38] = cVar1;
    *(undefined8 *)(puVar15 + 0x40) = uVar17;
    *(undefined8 *)(puVar15 + 0x50) = uVar32;
    *(undefined8 *)(puVar15 + 0x48) = uVar31;
    *(undefined8 *)(puVar15 + 0x58) = uVar27;
    *(undefined8 *)(puVar15 + 0x68) = uVar30;
    *(undefined8 *)(puVar15 + 0x60) = uVar29;
    *(undefined **)(puVar15 + 0x70) = TVar28.unknown;
    uVar12 = uVar12 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100a93ce0(uVar10,uVar12);
    uVar23 = uVar12;
    (**(code **)(lVar20 + 0x30))(uVar12,1,TVar11.unknown);
    _swift_bridgeObjectRetain(lVar22);
    _swift_bridgeObjectRetain(uVar17);
    _swift_retain(uVar26);
    _swift_retain(uVar31);
    _swift_retain(uVar18);
    _swift_retain(uVar29);
    _swift_retain();
    if ((int)uVar23 == 1) {
      FUN_100a93d30(uVar12);
      uVar23 = 0x3100;
    }
    else {
      _Var7 = Swift::TaskPriority::get_rawValue(TVar28);
      (**(code **)(lVar20 + 8))(uVar12,TVar11.unknown);
      uVar23 = (ulong)_Var7 | 0x3100;
    }
    _swift_task_dealloc(uVar12);
    uVar17 = **(undefined8 **)(unaff_x22 + 400);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar20 = *(long *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0x148) = 1;
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar17;
    _swift_retain(puVar15);
    _swift_task_create(uVar23,unaff_x22 + 0x148,PTR___type_metadata_for____100eae0c8 + 8,
                       &DAT_100c93430,puVar15);
    _swift_release();
    FUN_100aa2418(uVar26,uVar27,uVar18);
    _swift_release(puVar15);
    FUN_100a93d30(uVar10);
    _swift_task_dealloc(uVar10);
    lVar22 = lVar20 + 1;
    if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b228);
      (*pcVar6)();
    }
    goto LAB_100a9ae14;
  }
  lVar22 = *(long *)(unaff_x22 + 0x198);
  _swift_beginAccess(lVar22 + 0x10,unaff_x22 + 0x178,1,0);
  lVar20 = *(long *)(lVar22 + 0x10);
  lVar22 = lVar20 + -1;
  if (SBORROW8(lVar20,1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b224);
    (*pcVar6)();
  }
  *(long *)(*(long *)(unaff_x22 + 0x198) + 0x10) = lVar22;
  if (lVar22 == 0) {
    lVar22 = *(long *)(*(long *)(unaff_x22 + 0x1a0) + 0x10);
    iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar22 + 0x38));
    puVar19 = (undefined8 *)CONCAT44(extraout_var,iVar9);
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b230);
      (*pcVar6)();
    }
    uVar16 = (uint)*(byte *)(lVar22 + 0x22);
    if (*(byte *)(lVar22 + 0x22) < 3) {
      bVar8 = *(byte *)(lVar22 + 0x10);
      if (uVar16 == 0) {
        FUN_1006883ac();
        uVar17 = *(undefined8 *)(lVar22 + 0x10);
        uVar26 = *(undefined8 *)(lVar22 + 0x18);
        *(undefined8 *)(lVar22 + 0x10) = *puVar19;
        *(ulong *)(lVar22 + 0x18) = (ulong)bVar8 & 1 | 0x100;
        uVar4 = *(undefined2 *)(lVar22 + 0x20);
        *(undefined2 *)(lVar22 + 0x20) = 0;
        uVar2 = *(undefined1 *)(lVar22 + 0x22);
        *(undefined1 *)(lVar22 + 0x22) = 2;
        _swift_retain();
        FUN_100aa2428(uVar17,uVar26,uVar4,uVar2);
        goto LAB_100a9b15c;
      }
      uVar5 = *(undefined7 *)(lVar22 + 0x11);
      if (uVar16 != 1) {
        _swift_retain(*(undefined8 *)(lVar22 + 0x10));
        _swift_release(CONCAT71(uVar5,bVar8));
        goto LAB_100a9b15c;
      }
      lVar20 = *(long *)(lVar22 + 0x18);
      bVar3 = *(byte *)(lVar22 + 0x21);
      lVar21 = CONCAT71(uVar5,bVar8);
      if (lVar20 == 0) {
        bVar24 = false;
        *(long *)(lVar22 + 0x10) = lVar21;
        *(byte *)(lVar22 + 0x18) = bVar3 & 1;
        *(undefined1 *)(lVar22 + 0x19) = 1;
        *(undefined1 *)(lVar22 + 0x22) = 2;
      }
      else {
        lVar25 = *(long *)(lVar21 + 0x18);
        _swift_retain(*(undefined8 *)(lVar22 + 0x10));
        _swift_release(lVar21);
        if (lVar25 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b238);
          (*pcVar6)();
        }
        FUN_100aa2428(*(undefined8 *)(lVar22 + 0x10),*(undefined8 *)(lVar22 + 0x18),
                      *(undefined2 *)(lVar22 + 0x20),*(undefined1 *)(lVar22 + 0x22));
        *(ulong *)(lVar22 + 0x10) = (ulong)bVar3 & 1;
        *(undefined8 *)(lVar22 + 0x18) = 0;
        *(undefined4 *)(lVar22 + 0x20) = 0x1040000;
        bVar24 = true;
      }
    }
    else {
      if (1 < uVar16 - 3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b104);
        (*pcVar6)();
      }
LAB_100a9b15c:
      lVar20 = 0;
      bVar24 = false;
    }
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x38));
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9b234);
      (*pcVar6)();
    }
    if (lVar20 != 0) {
      if (!bVar24) {
        puVar14 = PTR___type_metadata_for_Swift_Never_100eadc38;
        _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                          PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ,0,0);
        puVar15 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar19 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar19 = puVar14;
        _swift_continuation_throwingResumeWithError(lVar20,puVar15);
        lVar22 = *(long *)(unaff_x22 + 0x1e8);
        goto LAB_100a9ae14;
      }
      puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x40) + 0x28);
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 1;
      _swift_continuation_throwingResume(lVar20);
    }
  }
  lVar22 = *(long *)(unaff_x22 + 0x1e8);
LAB_100a9ae14:
  if (lVar22 <= *(long *)(unaff_x22 + 0x1d8)) {
    *(long *)(unaff_x22 + 0x1e8) = lVar22;
    uVar17 = *(undefined8 *)(*(long *)(unaff_x22 + 0x1e0) + 0x10);
    if (*(char *)(unaff_x22 + 0x2c3) != '\x01') {
      pcVar6 = thunk_FUN_100aa233c;
      _swift_task_addCancellationHandler(thunk_FUN_100aa233c,uVar17);
      *(code **)(unaff_x22 + 0x1f8) = pcVar6;
      plVar13 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x200) = plVar13;
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_100a9a9ec;
      FUN_100a697f8(uVar17);
      return;
    }
    plVar13 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1f0) = plVar13;
    FUN_1000f7830(&DAT_100ff7f78,&DAT_100c93420);
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_100a9a96c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  *(undefined1 *)(unaff_x22 + 0x2c4) = *(undefined1 *)(unaff_x22 + 0x2c2);
  bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x2c5) = bVar8 & 1;
  if ((bVar8 & 1) == 0) {
    _swift_taskGroup_wait_next_throwing
              (unaff_x22 + 0x2c1,**(undefined8 **)(unaff_x22 + 400),FUN_100a9b3ec,unaff_x22 + 0x50);
    return;
  }
  plVar13 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x248) = plVar13;
  FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100a9b37c;
  Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x2c0));
  return;
}



/* Address: 0x100a9b238 | FUN_100a9b238 */

/* WARNING: Removing unreachable block (ram,0x000100a9b264) */

void FUN_100a9b238(void)

{
  long *plVar1;
  long unaff_x22;
  
  (extension_Swift)::Swift::Task::_checkCancellation();
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x238) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a9b2dc;
  FUN_100a9cd88(0,0);
  return;
}



/* Address: 0x100a9b2dc | FUN_100a9b2dc */

void FUN_100a9b2dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x238));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9b340;
  }
  else {
    pcVar1 = FUN_100a9c274;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b340 | FUN_100a9b340 */

void FUN_100a9b340(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9b378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9b37c | FUN_100a9b37c */

void FUN_100a9b37c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x2c6) = *(undefined1 *)(lVar2 + 0x2c0);
    *(undefined8 *)(lVar2 + 0x250) = 0;
    pcVar1 = FUN_100a9b420;
  }
  else {
    *(long *)(lVar2 + 600) = unaff_x20;
    pcVar1 = FUN_100a9b748;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b3ec | FUN_100a9b3ec */

void FUN_100a9b3ec(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x2c6) = *(undefined1 *)(unaff_x22 + 0x2c1);
    *(undefined8 *)(unaff_x22 + 0x250) = 0;
    pcVar1 = FUN_100a9b420;
  }
  else {
    *(long *)(unaff_x22 + 600) = unaff_x20;
    pcVar1 = FUN_100a9b748;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b420 | FUN_100a9b420 */

void FUN_100a9b420(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  CancellationError CVar5;
  CancellationError CVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  String SVar10;
  
  if (*(char *)(unaff_x22 + 0x2c6) == '\x01') {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x260) = uVar9;
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x1e0) + 0x10);
  if ((*(byte *)(unaff_x22 + 0x2c5) & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x268) = plVar3;
    FUN_1000f7830(&DAT_100ff7f78,&DAT_100c93420);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a9b784;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar1 = thunk_FUN_100aa233c;
  lVar8 = lVar7;
  _swift_task_addCancellationHandler();
  *(code **)(unaff_x22 + 0x270) = pcVar1;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9b744);
    (*pcVar1)();
  }
  uVar4 = 0;
  FUN_100a9eef8();
  if (1 < (param_4 & 0xff)) {
    if ((param_4 & 0xff) == 2) {
      *(undefined1 *)(lVar7 + 0x23) = 1;
    }
    else if (((param_3 != 0 || lVar8 != 0) || uVar4 != 0) &&
            (1 < uVar4 - 1 || (param_3 != 0 || lVar8 != 0))) goto LAB_100a9b6f0;
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9b748);
    (*pcVar1)();
  }
  if (1 < (param_4 & 0xff)) {
    if ((param_4 & 0xff) == 2) {
      if ((uVar4 & 0xff) != 1) {
LAB_100a9b680:
        _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
        *(undefined8 *)(unaff_x22 + 0x2b8) = uVar9;
        pcVar1 = FUN_100a9c188;
        goto LAB_100a9b6c8;
      }
    }
    else if ((param_3 == 0 && lVar8 == 0) && uVar4 == 0) {
      CVar5 = Swift::CancellationError::typeMetadataAccessor();
      uVar4 = *(long *)(*(long *)(CVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar4);
      CVar6 = Swift::CancellationError::init();
      _swift_dynamicCast(CVar6.unknown,uVar4,CVar5.unknown,
                         PTR___type_metadata_for_Swift_Never_100eadc38,6);
      _swift_task_dealloc(uVar4);
      if (((ulong)CVar6.unknown & 1) != 0) goto LAB_100a9b680;
    }
    else if ((uVar4 != 1) || (param_3 != 0 || lVar8 != 0)) {
      if ((uVar4 == 2) && (param_3 == 0 && lVar8 == 0)) {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a9b80c;
        _swift_continuation_init(unaff_x22 + 0x10,1);
        FUN_100a9dfe0();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
LAB_100a9b6f0:
      SVar10.bridgeObject = (void *)0x2;
      SVar10.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar10,(StaticString)0x0,0xe000000000000000,0xdaeab0);
      return;
    }
    lVar8 = 0;
    param_3 = 0;
    uVar4 = 1;
  }
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
  *(ulong *)(unaff_x22 + 0x2b0) = uVar4;
  *(long *)(unaff_x22 + 0x2a8) = lVar8;
  *(long *)(unaff_x22 + 0x2a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x260);
  pcVar1 = FUN_100a9b944;
LAB_100a9b6c8:
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b748 | FUN_100a9b748 */

void FUN_100a9b748(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9b780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9b784 | FUN_100a9b784 */

void FUN_100a9b784(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar3 [16];
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x268));
  if (unaff_x20 == 0) {
    auVar3 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0xb8),*(undefined1 (*) [16])(lVar2 + 0xb8),8,1)
    ;
    *(long *)(lVar2 + 0x2b0) = auVar3._8_8_;
    *(long *)(lVar2 + 0x2a8) = auVar3._0_8_;
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x298) = 0;
    pcVar1 = FUN_100a9b944;
  }
  else {
    _swift_errorRelease();
    *(undefined8 *)(lVar2 + 0x2b8) = 0;
    pcVar1 = FUN_100a9c188;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b80c | FUN_100a9b80c */

void FUN_100a9b80c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x288) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 0x280) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0x290) = *(undefined8 *)(lVar2 + 0xe0);
    pcVar1 = FUN_100a9b888;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a9b8f4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9b888 | FUN_100a9b888 */

void FUN_100a9b888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x280);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x260);
  _swift_task_switch(FUN_100a9b944,0,0);
  return;
}



/* Address: 0x100a9b8f4 | FUN_100a9b8f4 */

void FUN_100a9b8f4(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x278));
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
  *(undefined8 *)(unaff_x22 + 0x2b8) = 0;
  _swift_task_switch(FUN_100a9c188,0,0);
  return;
}



/* Address: 0x100a9b944 | FUN_100a9b944 */

void FUN_100a9b944(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined7 uVar5;
  code *pcVar6;
  __uint8 _Var7;
  int iVar8;
  ulong uVar9;
  TaskPriority TVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 extraout_var;
  undefined *puVar13;
  CancellationError CVar14;
  CancellationError CVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  long lVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  TaskPriority TVar33;
  undefined8 uVar34;
  String SVar35;
  
  lVar24 = *(long *)(unaff_x22 + 0x2b0);
  if (lVar24 != 0) {
    if (lVar24 == 1) {
      lVar24 = *(long *)(unaff_x22 + 0x298);
      (extension_Swift)::Swift::Task::_checkCancellation();
      if (lVar24 != 0) {
        _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9b9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
    }
    else {
      cVar1 = *(char *)(unaff_x22 + 0x2a8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x2a0);
      if (cVar1 == '\x04') {
        lVar22 = *(long *)(unaff_x22 + 0x198);
        _swift_beginAccess(lVar22 + 0x10,unaff_x22 + 0x100,1,0);
        lVar22 = *(long *)(lVar22 + 0x10);
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c174);
          (*pcVar6)();
        }
        *(long *)(*(long *)(unaff_x22 + 0x198) + 0x10) = lVar22 + 1;
      }
      uVar2 = *(undefined1 *)(unaff_x22 + 0x2c4);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x1d0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1b8);
      puVar16 = &DAT_100ff7e38;
      FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
      uVar11 = *(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xf;
      uVar9 = uVar11 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      TVar10 = Swift::TaskPriority::typeMetadataAccessor();
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1a8);
      TVar33.unknown = *(undefined **)(unaff_x22 + 0x1a0);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
      lVar22 = *(long *)(TVar10.unknown + -8);
      (**(code **)(lVar22 + 0x38))(uVar9,1,1,TVar10.unknown);
      puVar16 = &DAT_100f2f480;
      _swift_allocObject(&DAT_100f2f480,0x78,7);
      *(undefined8 *)(puVar16 + 0x10) = 0;
      *(undefined8 *)(puVar16 + 0x18) = 0;
      *(undefined8 *)(puVar16 + 0x20) = uVar28;
      puVar16[0x28] = uVar2;
      *(long *)(puVar16 + 0x30) = lVar24;
      puVar16[0x38] = cVar1;
      *(undefined8 *)(puVar16 + 0x40) = uVar19;
      *(undefined8 *)(puVar16 + 0x50) = uVar34;
      *(undefined **)(puVar16 + 0x48) = TVar33.unknown;
      *(undefined8 *)(puVar16 + 0x58) = uVar29;
      *(undefined8 *)(puVar16 + 0x68) = uVar32;
      *(undefined8 *)(puVar16 + 0x60) = uVar31;
      *(undefined8 *)(puVar16 + 0x70) = uVar30;
      uVar11 = uVar11 & 0xfffffffffffffff0;
      _swift_task_alloc();
      FUN_100a93ce0(uVar9,uVar11);
      uVar25 = uVar11;
      (**(code **)(lVar22 + 0x30))(uVar11,1,TVar10.unknown);
      _swift_retain(uVar28);
      _swift_retain(uVar20);
      _swift_retain(uVar31);
      _swift_retain(uVar30);
      _swift_bridgeObjectRetain(lVar24);
      _swift_bridgeObjectRetain(uVar19);
      _swift_retain();
      if ((int)uVar25 == 1) {
        FUN_100a93d30(uVar11);
        uVar25 = 0x3100;
      }
      else {
        _Var7 = Swift::TaskPriority::get_rawValue(TVar33);
        (**(code **)(lVar22 + 8))(uVar11,TVar10.unknown);
        uVar25 = (ulong)_Var7 | 0x3100;
      }
      _swift_task_dealloc(uVar11);
      uVar19 = **(undefined8 **)(unaff_x22 + 400);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x2a8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x2a0);
      *(undefined8 *)(unaff_x22 + 0xe8) = 1;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0;
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar19;
      _swift_retain(puVar16);
      _swift_task_create(uVar25,unaff_x22 + 0xe8,PTR___type_metadata_for____100eae0c8 + 8,
                         &DAT_100c93418,puVar16);
      _swift_release();
      FUN_100aa2418(uVar28,uVar29,uVar20);
      _swift_release(puVar16);
      FUN_100a93d30(uVar9);
      _swift_task_dealloc(uVar9);
    }
    if (*(char *)(unaff_x22 + 0x2c5) == '\x01') {
      plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x248) = plVar12;
      FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_100a9b37c;
      Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x2c0));
      return;
    }
    _swift_taskGroup_wait_next_throwing
              (unaff_x22 + 0x2c1,**(undefined8 **)(unaff_x22 + 400),FUN_100a9b3ec,unaff_x22 + 0x50);
    return;
  }
  lVar24 = *(long *)(unaff_x22 + 0x198);
  puVar16 = (undefined *)0x1;
  uVar17 = 0;
  _swift_beginAccess(lVar24 + 0x10,unaff_x22 + 0x118);
  lVar22 = *(long *)(lVar24 + 0x10);
  lVar24 = lVar22 + -1;
  if (SBORROW8(lVar22,1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c170);
    (*pcVar6)();
  }
  *(long *)(*(long *)(unaff_x22 + 0x198) + 0x10) = lVar24;
  if (lVar24 == 0) {
    lVar24 = *(long *)(*(long *)(unaff_x22 + 0x1a0) + 0x10);
    iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar24 + 0x38));
    puVar21 = (undefined8 *)CONCAT44(extraout_var,iVar8);
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c180);
      (*pcVar6)();
    }
    uVar18 = (uint)*(byte *)(lVar24 + 0x22);
    if (*(byte *)(lVar24 + 0x22) < 3) {
      bVar3 = *(byte *)(lVar24 + 0x10);
      if (uVar18 == 0) {
        FUN_1006883ac();
        uVar19 = *(undefined8 *)(lVar24 + 0x10);
        uVar28 = *(undefined8 *)(lVar24 + 0x18);
        *(undefined8 *)(lVar24 + 0x10) = *puVar21;
        *(ulong *)(lVar24 + 0x18) = (ulong)bVar3 & 1 | 0x100;
        puVar16 = (undefined *)(ulong)*(ushort *)(lVar24 + 0x20);
        *(undefined2 *)(lVar24 + 0x20) = 0;
        uVar17 = (uint)*(byte *)(lVar24 + 0x22);
        *(undefined1 *)(lVar24 + 0x22) = 2;
        _swift_retain();
        FUN_100aa2428(uVar19,uVar28);
        goto LAB_100a9bf90;
      }
      uVar5 = *(undefined7 *)(lVar24 + 0x11);
      if (uVar18 != 1) {
        _swift_retain(*(undefined8 *)(lVar24 + 0x10));
        _swift_release(CONCAT71(uVar5,bVar3));
        goto LAB_100a9bf90;
      }
      lVar22 = *(long *)(lVar24 + 0x18);
      bVar4 = *(byte *)(lVar24 + 0x21);
      lVar23 = CONCAT71(uVar5,bVar3);
      if (lVar22 == 0) {
        bVar26 = false;
        *(long *)(lVar24 + 0x10) = lVar23;
        *(byte *)(lVar24 + 0x18) = bVar4 & 1;
        *(undefined1 *)(lVar24 + 0x19) = 1;
        *(undefined1 *)(lVar24 + 0x22) = 2;
      }
      else {
        lVar27 = *(long *)(lVar23 + 0x18);
        _swift_retain(*(undefined8 *)(lVar24 + 0x10));
        _swift_release(lVar23);
        if (lVar27 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c188);
          (*pcVar6)();
        }
        uVar17 = (uint)*(byte *)(lVar24 + 0x22);
        puVar16 = (undefined *)(ulong)*(ushort *)(lVar24 + 0x20);
        FUN_100aa2428(*(undefined8 *)(lVar24 + 0x10),*(undefined8 *)(lVar24 + 0x18));
        *(ulong *)(lVar24 + 0x10) = (ulong)bVar4 & 1;
        *(undefined8 *)(lVar24 + 0x18) = 0;
        *(undefined4 *)(lVar24 + 0x20) = 0x1040000;
        bVar26 = true;
      }
    }
    else {
      if (1 < uVar18 - 3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9be78);
        (*pcVar6)();
      }
LAB_100a9bf90:
      lVar22 = 0;
      bVar26 = false;
    }
    iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar24 + 0x38));
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c184);
      (*pcVar6)();
    }
    if (lVar22 != 0) {
      if (bVar26) {
        puVar21 = *(undefined8 **)(*(long *)(lVar22 + 0x40) + 0x28);
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 1;
        _swift_continuation_throwingResume(lVar22);
      }
      else {
        puVar13 = PTR___type_metadata_for_Swift_Never_100eadc38;
        _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                          PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ,0,0);
        puVar16 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        uVar17 = 0;
        puVar21 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar21 = puVar13;
        _swift_continuation_throwingResumeWithError(lVar22,puVar16);
      }
    }
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x260) = uVar19;
  lVar24 = *(long *)(*(long *)(unaff_x22 + 0x1e0) + 0x10);
  if ((*(byte *)(unaff_x22 + 0x2c5) & 1) != 0) {
    plVar12 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x268) = plVar12;
    FUN_1000f7830(&DAT_100ff7f78,&DAT_100c93420);
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_100a9b784;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar6 = thunk_FUN_100aa233c;
  lVar22 = lVar24;
  _swift_task_addCancellationHandler();
  *(code **)(unaff_x22 + 0x270) = pcVar6;
  iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar24 + 0x38));
  if (iVar8 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c178);
    (*pcVar6)();
  }
  uVar11 = 0;
  FUN_100a9eef8();
  if (1 < (uVar17 & 0xff)) {
    if ((uVar17 & 0xff) == 2) {
      *(undefined1 *)(lVar24 + 0x23) = 1;
    }
    else if (((puVar16 != (undefined *)0x0 || lVar22 != 0) || uVar11 != 0) &&
            (1 < uVar11 - 1 || (puVar16 != (undefined *)0x0 || lVar22 != 0))) goto LAB_100a9c118;
  }
  iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar24 + 0x38));
  if (iVar8 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9c17c);
    (*pcVar6)();
  }
  if (1 < (uVar17 & 0xff)) {
    if ((uVar17 & 0xff) == 2) {
      if ((uVar11 & 0xff) != 1) {
LAB_100a9c080:
        _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
        *(undefined8 *)(unaff_x22 + 0x2b8) = uVar19;
        pcVar6 = FUN_100a9c188;
        goto LAB_100a9c0c8;
      }
    }
    else if ((puVar16 == (undefined *)0x0 && lVar22 == 0) && uVar11 == 0) {
      CVar14 = Swift::CancellationError::typeMetadataAccessor();
      uVar11 = *(long *)(*(long *)(CVar14.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar11);
      CVar15 = Swift::CancellationError::init();
      _swift_dynamicCast(CVar15.unknown,uVar11,CVar14.unknown,
                         PTR___type_metadata_for_Swift_Never_100eadc38,6);
      _swift_task_dealloc(uVar11);
      if (((ulong)CVar15.unknown & 1) != 0) goto LAB_100a9c080;
    }
    else if ((uVar11 != 1) || (puVar16 != (undefined *)0x0 || lVar22 != 0)) {
      if ((uVar11 == 2) && (puVar16 == (undefined *)0x0 && lVar22 == 0)) {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a9b80c;
        _swift_continuation_init(unaff_x22 + 0x10,1);
        FUN_100a9dfe0();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
LAB_100a9c118:
      SVar35.bridgeObject = (void *)0x2;
      SVar35.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar35,(StaticString)0x0,0xe000000000000000,0xdaeab0);
      return;
    }
    lVar22 = 0;
    puVar16 = (undefined *)0x0;
    uVar11 = 1;
  }
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x270));
  *(ulong *)(unaff_x22 + 0x2b0) = uVar11;
  *(long *)(unaff_x22 + 0x2a8) = lVar22;
  *(undefined **)(unaff_x22 + 0x2a0) = puVar16;
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x260);
  pcVar6 = FUN_100a9b944;
LAB_100a9c0c8:
  _swift_task_switch(pcVar6,0,0);
  return;
}



/* Address: 0x100a9c188 | FUN_100a9c188 */

void FUN_100a9c188(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x2b8);
  (extension_Swift)::Swift::Task::_checkCancellation();
  if (lVar2 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9c1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x2c5) == '\x01') {
    plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x248) = plVar1;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a9b37c;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x2c0));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x2c1,**(undefined8 **)(unaff_x22 + 400),FUN_100a9b3ec,unaff_x22 + 0x50);
  return;
}



/* Address: 0x100a9c274 | FUN_100a9c274 */

void FUN_100a9c274(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100a9c2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9c2b0 | FUN_100a9c2b0 */

void FUN_100a9c2b0(void)

{
  undefined8 in_x3;
  undefined1 in_w4;
  undefined8 in_x5;
  undefined1 in_w6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x198) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x1a0) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x188) = in_x7;
  *(undefined8 *)(unaff_x22 + 400) = in_stack_00000000;
  *(undefined1 *)(unaff_x22 + 0x249) = in_w6;
  *(undefined1 *)(unaff_x22 + 0x248) = in_w4;
  *(undefined8 *)(unaff_x22 + 0x178) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x180) = in_x5;
  _swift_task_switch(FUN_100a9c2ec,0,0);
  return;
}



/* Address: 0x100a9c2ec | FUN_100a9c2ec */

void FUN_100a9c2ec(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  long unaff_x22;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  cVar2 = *(char *)(unaff_x22 + 0x249);
  if (cVar2 == '\x05') {
    uVar3 = *(undefined1 *)(unaff_x22 + 0x248);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
    puVar4 = &DAT_100f2f2f0;
    _swift_allocObject(&DAT_100f2f2f0,0x31,7);
    *(undefined **)(unaff_x22 + 0x1e0) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    puVar4[0x18] = uVar3;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(puVar4 + 0x20) = uVar13;
    puVar4[0x30] = 0;
    plVar11 = (long *)0xa0;
    _swift_retain(uVar7);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1e8) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a9c898;
  }
  else {
    if (cVar2 == '\x04') {
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(unaff_x22 + 0x248);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1b0);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1a8);
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1a0);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x198);
      plVar11 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x208) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a9ca50;
      FUN_100a970b4(*(undefined8 *)(unaff_x22 + 0x180),1,&DAT_100c93388,unaff_x22 + 0x10,
                    *(undefined8 *)(unaff_x22 + 0x178),*(undefined1 *)(unaff_x22 + 0x248));
      return;
    }
    if (cVar2 != '\0') {
      piVar12 = *(int **)(unaff_x22 + 0x198);
      pcVar10 = *(char **)(unaff_x22 + 0x180);
      Swift::_StringGuts::grow(0x5f,param_2);
      pvVar5 = (void *)0xec00000027207970;
      SVar17.bridgeObject = (void *)0xec00000027207970;
      SVar17.str = (char *)0x6f632074276e6143;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar17,SVar21);
      FUN_1005b32e4();
      SVar18.bridgeObject = pvVar5;
      SVar18.str = pcVar10;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar18,SVar22);
      _swift_bridgeObjectRelease(pvVar5);
      SVar19.bridgeObject = (void *)0xeb00000000272065;
      SVar19.str = (char *)0x70797420666f2027;
      SVar23.bridgeObject = param_4;
      SVar23.str = param_3;
      Swift::String::append(SVar19,SVar23);
      FUN_100a6c3b8(cVar2);
      SVar20.bridgeObject = (void *)0x8000000100db8a90;
      SVar20.str = (char *)0xd000000000000044;
      SVar24.bridgeObject = param_4;
      SVar24.str = param_3;
      Swift::String::append(SVar20,SVar24);
      puVar8 = (undefined8 *)(unaff_x22 + 0xa0);
      *(undefined1 *)puVar8 = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0xe000000000000000;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000051;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100dbad40;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x504;
      puVar6 = (undefined8 *)(unaff_x22 + 0x58);
      *(undefined1 *)puVar6 = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000051;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dbad40;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x504;
      FUN_100a50050(puVar8,unaff_x22 + 0xe8);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar4 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar6,0,0);
      *(undefined **)(unaff_x22 + 0x218) = puVar4;
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar6[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar6[5] = uVar14;
      puVar6[4] = uVar13;
      puVar6[7] = uVar16;
      puVar6[6] = uVar15;
      puVar6[3] = uVar9;
      puVar6[2] = uVar7;
      uVar7 = *puVar8;
      puVar6[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar6 = uVar7;
      FUN_100a50050(puVar8,unaff_x22 + 0x130);
      iVar1 = *piVar12;
      plVar11 = (long *)(ulong)(uint)piVar12[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x220) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a9cac4;
                    /* WARNING: Could not recover jumptable at 0x000100a9c6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar12))
                (*(undefined8 *)(unaff_x22 + 0x180),*(undefined1 *)(unaff_x22 + 0x249),puVar4);
      return;
    }
    uVar3 = *(undefined1 *)(unaff_x22 + 0x248);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
    puVar4 = &DAT_100f2f318;
    _swift_allocObject(&DAT_100f2f318,0x31,7);
    *(undefined **)(unaff_x22 + 0x1b8) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    puVar4[0x18] = uVar3;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(puVar4 + 0x20) = uVar13;
    puVar4[0x30] = 0;
    plVar11 = (long *)0xa0;
    _swift_retain(uVar7);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c0) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a9c6e0;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a9c6e0 | FUN_100a9c6e0 */

void FUN_100a9c6e0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1b8);
  *(long *)(lVar3 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1c0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100a9c74c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a9c74c | FUN_100a9c74c */

void FUN_100a9c74c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x198);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a9c7bc;
                    /* WARNING: Could not recover jumptable at 0x000100a9c7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x180),0,*(undefined8 *)(unaff_x22 + 0x1c8));
  return;
}



/* Address: 0x100a9c7bc | FUN_100a9c7bc */

void FUN_100a9c7bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9c820;
  }
  else {
    pcVar1 = FUN_100a9c85c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9c820 | FUN_100a9c820 */

void FUN_100a9c820(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x000100a9c858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9c85c | FUN_100a9c85c */

void FUN_100a9c85c(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x000100a9c894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9c898 | FUN_100a9c898 */

void FUN_100a9c898(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1e0);
  *(long *)(lVar3 + 0x1f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1e8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100a9c904;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a9c904 | FUN_100a9c904 */

void FUN_100a9c904(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x198);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a9c974;
                    /* WARNING: Could not recover jumptable at 0x000100a9c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x180),5,*(undefined8 *)(unaff_x22 + 0x1f0));
  return;
}



/* Address: 0x100a9c974 | FUN_100a9c974 */

void FUN_100a9c974(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9c9d8;
  }
  else {
    pcVar1 = FUN_100a9ca14;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9c9d8 | FUN_100a9c9d8 */

void FUN_100a9c9d8(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x000100a9ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9ca14 | FUN_100a9ca14 */

void FUN_100a9ca14(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x000100a9ca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9ca50 | FUN_100a9ca50 */

void FUN_100a9ca50(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x208));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x230) = param_1;
    pcVar1 = FUN_100a9cb30;
  }
  else {
    pcVar1 = FUN_100a9cb80;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9cac4 | FUN_100a9cac4 */

void FUN_100a9cac4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    _swift_errorRelease(*(undefined8 *)(lVar2 + 0x218));
    pcVar1 = FUN_100a9cd08;
  }
  else {
    pcVar1 = FUN_100a9cd44;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9cb30 | FUN_100a9cb30 */

void FUN_100a9cb30(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x230);
  FUN_100a9fae8(uVar1,*(undefined8 *)(*(long *)(unaff_x22 + 400) + 0x10));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a9cb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9cb80 | FUN_100a9cb80 */

void FUN_100a9cb80(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x22 + 0x198);
  puVar3 = &DAT_100ff7f70;
  FUN_1000f7830(&DAT_100ff7f70,&DAT_100c93398);
  _swift_initStaticObject();
  FUN_100a9fae8();
  FUN_100aa2460(puVar3 + 0x20);
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x238) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a9cc2c;
                    /* WARNING: Could not recover jumptable at 0x000100a9cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x180),4,*(undefined8 *)(unaff_x22 + 0x210));
  return;
}



/* Address: 0x100a9cc2c | FUN_100a9cc2c */

void FUN_100a9cc2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x238));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9cc90;
  }
  else {
    pcVar1 = FUN_100a9cccc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9cc90 | FUN_100a9cc90 */

void FUN_100a9cc90(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x000100a9ccc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9cccc | FUN_100a9cccc */

void FUN_100a9cccc(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x000100a9cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9cd08 | FUN_100a9cd08 */

void FUN_100a9cd08(void)

{
  long unaff_x22;
  
  FUN_100a5008c(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x000100a9cd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9cd44 | FUN_100a9cd44 */

void FUN_100a9cd44(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x218));
  FUN_100a5008c(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x000100a9cd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a9cd88 | FUN_100a9cd88 */

void FUN_100a9cd88(long param_1,undefined8 param_2)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(long *)(unaff_x22 + 0x38) = param_1;
  if (param_1 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType();
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_100a9cdf8,UVar1.unknown);
  return;
}



/* Address: 0x100a9cdf8 | FUN_100a9cdf8 */

void FUN_100a9cdf8(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  ThrowingTaskGroup TVar5;
  long unaff_x22;
  
  TVar5.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x48);
  *(undefined **)(unaff_x22 + 0x60) = TVar5.unknown;
  puVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x68) = puVar3;
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty(TVar5);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a9ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x8a) = bVar2 & 1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  if ((bVar2 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar4;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100a9cf24;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x88));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x89,**(undefined8 **)(unaff_x22 + 0x48),FUN_100a9cf90,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a9cf24 | FUN_100a9cf24 */

void FUN_100a9cf24(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x8b) = *(undefined1 *)(lVar4 + 0x88);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_100a9cfc0;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_100a9d0d0;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100a9cf90 | FUN_100a9cf90 */

void FUN_100a9cf90(void)

{
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 != 0) {
    *(long *)(unaff_x22 + 0x80) = unaff_x20;
    _swift_task_switch(FUN_100a9d0d0,*(undefined8 *)(unaff_x22 + 0x50),
                       *(undefined8 *)(unaff_x22 + 0x58));
    return;
  }
  *(undefined1 *)(unaff_x22 + 0x8b) = *(undefined1 *)(unaff_x22 + 0x89);
  _swift_task_switch(FUN_100a9cfc0,*(undefined8 *)(unaff_x22 + 0x50),
                     *(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a9cfc0 | FUN_100a9cfc0 */

void FUN_100a9cfc0(void)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x8b) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    bVar2 = Swift::ThrowingTaskGroup::get_isEmpty
                      ((ThrowingTaskGroup)*(undefined **)(unaff_x22 + 0x60));
    if (bVar2) {
      if (lVar1 != 0) {
        _swift_willThrow();
      }
                    /* WARNING: Could not recover jumptable at 0x000100a9d030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x70) = lVar1;
  }
  if (*(char *)(unaff_x22 + 0x8a) == '\x01') {
    plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a9cf24;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x88));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x89,**(undefined8 **)(unaff_x22 + 0x48),FUN_100a9cf90,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a9d0d0 | FUN_100a9d0d0 */

void FUN_100a9d0d0(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x80);
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    _swift_errorRelease(lVar3);
    lVar3 = *(long *)(unaff_x22 + 0x70);
  }
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty
                    ((ThrowingTaskGroup)*(undefined **)(unaff_x22 + 0x60));
  if (bVar1) {
    if (lVar3 != 0) {
      _swift_willThrow();
    }
                    /* WARNING: Could not recover jumptable at 0x000100a9d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x70) = lVar3;
  if (*(char *)(unaff_x22 + 0x8a) == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a9cf24;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x88));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x89,**(undefined8 **)(unaff_x22 + 0x48),FUN_100a9cf90,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a9d1e8 | FUN_100a9d1e8 */

void FUN_100a9d1e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  CancellationError CVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  __uint32 flags;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  String SVar25;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  ulong local_78;
  code *local_70;
  uint local_64;
  
  uVar24 = param_2;
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8c4);
    (*pcVar6)();
  }
  lVar8 = param_1;
  FUN_100a9e2c0();
  lVar1 = *(long *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar20 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    pcVar6 = (code *)0x0;
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = &DAT_100f2f598;
    _swift_allocObject(&DAT_100f2f598,0x20,7);
    *(long *)(puVar18 + 0x10) = lVar1;
    *(undefined8 *)(puVar18 + 0x18) = uVar2;
    pcVar6 = thunk_FUN_1000386a0;
  }
  _swift_retain(lVar20);
  FUN_100011128(lVar1,uVar2);
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8c8);
    (*pcVar6)();
  }
  if (lVar1 == 0) {
    pcVar6 = (code *)0x0;
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = &DAT_100f2f570;
    _swift_allocObject(&DAT_100f2f570,0x20,7);
    *(code **)(puVar21 + 0x10) = pcVar6;
    *(undefined **)(puVar21 + 0x18) = puVar18;
    pcVar6 = thunk_FUN_1000386a0;
  }
  uVar23 = (uint)uVar24;
  if ((uVar23 & 0xff) != 1 && (uVar24 & 0xff) != 0) {
    if ((uVar23 & 0xff) == 2) {
      if (lVar20 == 0) {
        _swift_errorRetain(lVar8);
      }
      else {
        lVar22 = *(long *)(lVar20 + 0x10);
        _swift_retain(lVar20);
        FUN_100a6aac0(lVar8,2);
        iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar22 + 0x50));
        if (iVar7 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8cc);
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar22 + 0x10);
        uVar4 = *(ushort *)(lVar22 + 0x38) >> 0xe;
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            lVar19 = 0;
          }
          else {
LAB_100a9d4dc:
            _swift_retain();
            lVar19 = lVar9;
          }
        }
        else {
          if (uVar4 == 2) goto LAB_100a9d4dc;
          lVar19 = 0;
          if ((*(ushort *)(lVar22 + 0x38) == 0xc000) &&
             (((*(long *)(lVar22 + 0x28) == 0 && lVar9 == 0) &&
              (*(long *)(lVar22 + 0x30) == 0 && *(long *)(lVar22 + 0x20) == 0)) &&
              *(long *)(lVar22 + 0x18) == 0)) goto LAB_100a9d8ec;
        }
        iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x50));
        if (iVar7 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8d4);
          (*pcVar6)();
        }
        if (lVar19 == 0) {
          _swift_release(lVar20);
        }
        else {
          _swift_retain();
          FUN_100910ab0(FUN_100a6aae4,lVar20);
          _swift_release(lVar19);
          _swift_release_n(lVar20,2);
        }
      }
      if (lVar8 == 0) {
LAB_100a9d4b8:
        **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
        goto LAB_100a9d728;
      }
      puVar18 = &DAT_100ff69f8;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      puVar15 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar13 = puVar18;
      plVar16 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *plVar16 = lVar8;
      _swift_allocError(puVar18,puVar15,0,0);
      *puVar15 = puVar13;
    }
    else {
      if (1 < lVar8) {
        if (lVar8 != 3) {
          if (lVar8 == 4) goto LAB_100a9d730;
          flags = 0xdaeab0;
          goto LAB_100a9d914;
        }
        if (lVar20 == 0) goto LAB_100a9d730;
        lVar22 = *(long *)(lVar20 + 0x10);
        _swift_retain(lVar20);
        iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar22 + 0x50));
        if (iVar7 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8dc);
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar22 + 0x10);
        lVar19 = *(long *)(lVar22 + 0x18);
        uVar4 = *(ushort *)(lVar22 + 0x38);
        uVar5 = uVar4 >> 0xe;
        if (uVar5 < 2) {
          if (uVar5 == 0) {
            _swift_retain(lVar19);
            lVar9 = lVar19;
          }
          else {
            _swift_retain(lVar9);
          }
LAB_100a9d838:
          iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x50));
          if (iVar7 != 0) {
LAB_100a9d8dc:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8e0);
            (*pcVar6)();
          }
          if (lVar9 != 0) {
            _swift_retain(lVar20);
            _swift_retain(lVar9);
            FUN_100910ab0(FUN_100a57844,lVar20);
            _swift_release_n(lVar9,2);
            _swift_release_n(lVar20,2);
            goto LAB_100a9d730;
          }
        }
        else {
          uVar24 = *(ulong *)(lVar22 + 0x20);
          lVar3 = *(long *)(lVar22 + 0x28);
          lVar17 = *(long *)(lVar22 + 0x30);
          if (uVar5 == 2) {
            local_78 = uVar24 & 0xff;
            local_80 = lVar17;
            local_70 = pcVar6;
            local_64 = uVar23;
            FUN_100a57448(lVar9,lVar19,uVar24,lVar3,lVar17,uVar4);
            _swift_retain(lVar9);
            FUN_100a57528();
            *(long *)(lVar22 + 0x10) = lVar9;
            *(long *)(lVar22 + 0x18) = lVar19;
            *(ulong *)(lVar22 + 0x20) = local_78;
            *(long *)(lVar22 + 0x28) = lVar3;
            *(undefined8 *)(lVar22 + 0x30) = 0;
            *(undefined2 *)(lVar22 + 0x38) = 0x4000;
            uVar24 = (ulong)local_64;
            pcVar6 = local_70;
            goto LAB_100a9d838;
          }
          if ((((uVar24 == 0 && lVar19 == 0) && (lVar9 == 0 && lVar3 == 0)) && lVar17 == 0) &&
             (local_70 = pcVar6, local_64 = uVar23, uVar4 == 0xc000)) goto LAB_100a9d8ec;
          local_70 = pcVar6;
          local_64 = uVar23;
          iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x50));
          uVar24 = (ulong)local_64;
          pcVar6 = local_70;
          if (iVar7 != 0) goto LAB_100a9d8dc;
        }
        _swift_release(lVar20);
        goto LAB_100a9d730;
      }
      if (lVar8 != 0) goto LAB_100a9d4b8;
      CVar10 = Swift::CancellationError::typeMetadataAccessor();
      lVar9 = *(long *)(CVar10.unknown + -8);
      lVar22 = *(long *)(lVar9 + 0x40);
      local_70 = pcVar6;
      local_64 = uVar23;
      CVar11 = Swift::CancellationError::init();
      FUN_100a5784c();
      CVar12 = CVar10;
      _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
      (**(code **)(lVar9 + 0x20))
                (CVar11.unknown,auStack_90 + -(lVar22 + 0xfU & 0xfffffffffffffff0),CVar10.unknown);
      pcVar6 = local_70;
      puVar18 = &DAT_100ff69f8;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      puVar15 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar13 = puVar18;
      puVar14 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar14 = CVar12.unknown;
      _swift_allocError(puVar18,puVar15,0,0);
      *puVar15 = puVar13;
      uVar24 = (ulong)local_64;
    }
    _swift_continuation_throwingResumeWithError(param_1,puVar18);
    goto LAB_100a9d730;
  }
  if ((uVar24 & 0xff) == 0) {
    **(long **)(*(long *)(param_1 + 0x40) + 0x28) = lVar8;
    _swift_bridgeObjectRetain(lVar8);
  }
  else {
    if (lVar20 == 0) {
      _swift_bridgeObjectRetain(lVar8);
    }
    else {
      lVar22 = *(long *)(lVar20 + 0x10);
      local_70 = pcVar6;
      local_64 = uVar23;
      _swift_retain(lVar20);
      FUN_100a6aac0(lVar8,1);
      iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar22 + 0x50));
      if (iVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8d0);
        (*pcVar6)();
      }
      lVar9 = *(long *)(lVar22 + 0x10);
      lVar19 = *(long *)(lVar22 + 0x18);
      uVar4 = *(ushort *)(lVar22 + 0x38);
      uVar5 = uVar4 >> 0xe;
      if (uVar5 < 2) {
        if (uVar5 == 0) {
          _swift_retain(lVar19);
          lVar9 = lVar19;
        }
        else {
          _swift_retain(lVar9);
        }
LAB_100a9d658:
        uVar24 = (ulong)local_64;
        iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x50));
        if (iVar7 != 0) {
LAB_100a9d8d4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d8d8);
          (*pcVar6)();
        }
        if (lVar9 != 0) {
          _swift_retain(lVar20);
          _swift_retain(lVar9);
          FUN_100910ab0(thunk_FUN_100a57844,lVar20);
          _swift_release_n(lVar9,2);
          _swift_release_n(lVar20,2);
          pcVar6 = local_70;
          goto LAB_100a9d71c;
        }
      }
      else {
        uVar24 = *(ulong *)(lVar22 + 0x20);
        lVar3 = *(long *)(lVar22 + 0x28);
        lVar17 = *(long *)(lVar22 + 0x30);
        if (uVar5 == 2) {
          local_78 = uVar24 & 0xff;
          local_88 = lVar3;
          local_80 = lVar17;
          FUN_100a57448(lVar9,lVar19,uVar24,lVar3,lVar17,uVar4);
          _swift_retain(lVar9);
          lVar3 = local_88;
          FUN_100a57528();
          *(long *)(lVar22 + 0x10) = lVar9;
          *(long *)(lVar22 + 0x18) = lVar19;
          *(ulong *)(lVar22 + 0x20) = local_78;
          *(long *)(lVar22 + 0x28) = lVar3;
          *(undefined8 *)(lVar22 + 0x30) = 0;
          *(undefined2 *)(lVar22 + 0x38) = 0x4000;
          goto LAB_100a9d658;
        }
        if ((((uVar24 == 0 && lVar19 == 0) && (lVar9 == 0 && lVar3 == 0)) && lVar17 == 0) &&
           (uVar4 == 0xc000)) {
LAB_100a9d8ec:
          flags = 0xdb8660;
LAB_100a9d914:
          SVar25.bridgeObject = (void *)0x2;
          SVar25.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar25,(StaticString)0x0,0xe000000000000000,flags);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9d924);
          (*pcVar6)();
        }
        iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar22 + 0x50));
        uVar24 = (ulong)local_64;
        if (iVar7 != 0) goto LAB_100a9d8d4;
      }
      _swift_release(lVar20);
      pcVar6 = local_70;
    }
LAB_100a9d71c:
    **(long **)(*(long *)(param_1 + 0x40) + 0x28) = lVar8;
  }
LAB_100a9d728:
  _swift_continuation_throwingResume(param_1);
LAB_100a9d730:
  if (lVar1 == 0) {
    _swift_release(lVar20);
    FUN_100a6aa9c(lVar8,uVar24);
  }
  else {
    _swift_retain(puVar21);
    (*pcVar6)();
    _swift_release(lVar20);
    FUN_100a6aa9c(lVar8,uVar24);
    FUN_100004550(pcVar6,puVar21);
    FUN_100004550(pcVar6,puVar21);
  }
  return;
}



/* Address: 0x100a9d924 | FUN_100a9d924 */

void FUN_100a9d924(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  String SVar24;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  uint local_11c;
  undefined *local_118;
  undefined1 *local_110;
  long local_108;
  code *local_100;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  short local_70;
  
  lVar22 = param_2;
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df80);
    (*pcVar5)();
  }
  lVar7 = param_1;
  FUN_100a9e890();
  lVar1 = *(long *)(param_2 + 0x48);
  uVar21 = *(undefined8 *)(param_2 + 0x50);
  lVar17 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    pcVar5 = (code *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = &DAT_100f2f728;
    _swift_allocObject(&DAT_100f2f728,0x20,7);
    *(long *)(puVar15 + 0x10) = lVar1;
    *(undefined8 *)(puVar15 + 0x18) = uVar21;
    pcVar5 = thunk_FUN_1000386a0;
  }
  _swift_retain(lVar17);
  FUN_100011128(lVar1,uVar21);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df84);
    (*pcVar5)();
  }
  uVar18 = (ulong)param_3 >> 0x38;
  bVar4 = (byte)((ulong)param_3 >> 0x38);
  if (lVar1 == 0) {
    pcVar5 = (code *)0x0;
    puVar19 = (undefined *)0x0;
    if (bVar4 < 2) goto LAB_100a9da00;
LAB_100a9da40:
    if (bVar4 == 2) {
      if (lVar17 == 0) {
        _swift_errorRetain(lVar7);
      }
      else {
        lVar16 = *(long *)(lVar17 + 0x10);
        _swift_retain(lVar17);
        FUN_1009fc0e0(lVar7,lVar22,param_3,2);
        iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x60));
        if (iVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df88);
          (*pcVar5)();
        }
        FUN_100a57abc(lVar16 + 0x10);
        *(undefined8 *)(lVar16 + 0x38) = 0;
        *(undefined8 *)(lVar16 + 0x10) = 0;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        *(undefined2 *)(lVar16 + 0x50) = 0x8000;
        iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x60));
        if (iVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df90);
          (*pcVar5)();
        }
        _swift_release(lVar17);
      }
      if (lVar7 != 0) {
        puVar15 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar11 = puVar15;
        plVar13 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar13 = lVar7;
        puVar14 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        local_100 = param_3;
        _swift_allocError(puVar15,
                          PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0,
                          0);
        *puVar14 = puVar11;
        param_3 = local_100;
        goto LAB_100a9de6c;
      }
    }
    else {
      if ((lVar7 == 0 && lVar22 == 0) && (((ulong)param_3 & 0xffffffffffffff) == 0)) {
        CVar8 = Swift::CancellationError::typeMetadataAccessor();
        lVar20 = *(long *)(CVar8.unknown + -8);
        lVar16 = *(long *)(lVar20 + 0x40);
        local_110 = auStack_130;
        local_108 = lVar22;
        local_100 = pcVar5;
        CVar9 = Swift::CancellationError::init();
        FUN_100a5784c();
        CVar10 = CVar8;
        _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
        local_118 = CVar10.unknown;
        (**(code **)(lVar20 + 0x20))
                  (CVar9.unknown,auStack_130 + -(lVar16 + 0xfU & 0xfffffffffffffff0),CVar8.unknown);
        puVar15 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar14 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar11 = puVar15;
        puVar12 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        pcVar5 = local_100;
        *puVar12 = local_118;
        _swift_allocError(puVar15,puVar14,0,0);
        *puVar14 = puVar11;
        lVar22 = local_108;
LAB_100a9de6c:
        _swift_continuation_throwingResumeWithError(param_1,puVar15);
        goto joined_r0x000100a9dde4;
      }
      if (((lVar7 != 1) || (lVar22 != 0)) || (((ulong)param_3 & 0xffffffffffffff) != 0)) {
        if (((lVar7 == 2) && (lVar22 == 0)) && (((ulong)param_3 & 0xffffffffffffff) == 0)) {
          SVar24.bridgeObject = (void *)0x2;
          SVar24.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar24,(StaticString)0x0,0xe000000000000000,0xdaeab0)
          ;
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9dfe0);
          (*pcVar5)();
        }
        if (((lVar7 == 3) && (lVar22 == 0)) &&
           ((((ulong)param_3 & 0xffffffffffffff) == 0 && (lVar17 != 0)))) {
          lVar16 = *(long *)(lVar17 + 0x10);
          local_108 = lVar22;
          _swift_retain(lVar17);
          iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x60));
          if (iVar6 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df98);
            (*pcVar5)();
          }
          uStack_88 = *(undefined8 *)(lVar16 + 0x38);
          local_90 = *(undefined1 **)(lVar16 + 0x30);
          uStack_78 = *(undefined8 *)(lVar16 + 0x48);
          uStack_80 = *(undefined8 *)(lVar16 + 0x40);
          lVar22 = *(long *)(lVar16 + 0x18);
          uVar21 = *(undefined8 *)(lVar16 + 0x10);
          local_98 = *(undefined **)(lVar16 + 0x28);
          uVar23 = *(undefined8 *)(lVar16 + 0x20);
          local_70 = *(short *)(lVar16 + 0x50);
          local_b0 = uVar21;
          lStack_a8 = lVar22;
          uStack_a0 = uVar23;
          if (local_70 < 0) {
            iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x60));
            if (iVar6 != 0) goto LAB_100a9df98;
          }
          else {
            local_11c = (uint)(byte)uStack_88;
            local_118 = local_98;
            local_110 = local_90;
            local_100 = pcVar5;
            FUN_100a5a69c(&local_b0,auStack_f8);
            _swift_bridgeObjectRelease(uVar23);
            pcVar5 = local_100;
            _swift_release(uVar21);
            FUN_1001b9e60(local_118,local_110,local_11c);
            iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x60));
            if (iVar6 != 0) {
LAB_100a9df98:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df9c);
              (*pcVar5)();
            }
            if (lVar22 != 0) {
              _swift_retain(lVar17);
              _swift_retain(lVar22);
              FUN_100910ab0(FUN_100a5a694,lVar17);
              _swift_release_n(lVar22,2);
              _swift_release_n(lVar17,2);
              lVar22 = local_108;
              goto joined_r0x000100a9dde4;
            }
          }
          _swift_release(lVar17);
          lVar22 = local_108;
        }
        goto joined_r0x000100a9dde4;
      }
    }
    puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined8 *)((long)puVar14 + 0xf) = 0;
  }
  else {
    puVar19 = &DAT_100f2f700;
    _swift_allocObject(&DAT_100f2f700,0x20,7);
    *(code **)(puVar19 + 0x10) = pcVar5;
    *(undefined **)(puVar19 + 0x18) = puVar15;
    pcVar5 = thunk_FUN_1000386a0;
    if (1 < bVar4) goto LAB_100a9da40;
LAB_100a9da00:
    uVar3 = (undefined2)((ulong)param_3 >> 0x20);
    uVar2 = (undefined1)((ulong)param_3 >> 0x30);
    if (bVar4 == 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
      *plVar13 = lVar7;
      plVar13[1] = lVar22;
      *(undefined1 *)((long)plVar13 + 0x16) = uVar2;
      *(undefined2 *)((long)plVar13 + 0x14) = uVar3;
      *(int *)(plVar13 + 2) = (int)param_3;
      _swift_retain(lVar7);
    }
    else {
      if (lVar17 == 0) {
        _swift_retain(lVar7);
      }
      else {
        lVar16 = *(long *)(lVar17 + 0x10);
        _swift_retain(lVar17);
        FUN_1009fc0e0(lVar7,lVar22,param_3,1);
        iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x60));
        if (iVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df8c);
          (*pcVar5)();
        }
        uStack_88 = *(undefined8 *)(lVar16 + 0x38);
        local_90 = *(undefined1 **)(lVar16 + 0x30);
        uStack_78 = *(undefined8 *)(lVar16 + 0x48);
        uStack_80 = *(undefined8 *)(lVar16 + 0x40);
        lStack_a8 = *(long *)(lVar16 + 0x18);
        local_b0 = *(undefined8 *)(lVar16 + 0x10);
        local_98 = *(undefined **)(lVar16 + 0x28);
        uVar21 = *(undefined8 *)(lVar16 + 0x20);
        local_70 = *(short *)(lVar16 + 0x50);
        uStack_a0 = uVar21;
        if (local_70 < 0) {
          iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x60));
          if (iVar6 != 0) goto LAB_100a9df90;
        }
        else {
          local_11c = (uint)(byte)uStack_88;
          local_128 = local_b0;
          local_118 = local_98;
          local_110 = local_90;
          local_108 = lStack_a8;
          local_100 = pcVar5;
          FUN_100a5a69c(&local_b0,auStack_f8);
          pcVar5 = local_100;
          _swift_bridgeObjectRelease(uVar21);
          _swift_release(local_128);
          FUN_1001b9e60(local_118,local_110,local_11c);
          iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x60));
          if (iVar6 != 0) {
LAB_100a9df90:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9df94);
            (*pcVar5)();
          }
          if (local_108 != 0) {
            _swift_retain(lVar17);
            lVar16 = local_108;
            _swift_retain(local_108);
            FUN_100910ab0(thunk_FUN_100a5a694,lVar17);
            _swift_release_n(lVar16,2);
            _swift_release_n(lVar17,2);
            goto LAB_100a9deb0;
          }
        }
        _swift_release(lVar17);
      }
LAB_100a9deb0:
      plVar13 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
      *plVar13 = lVar7;
      plVar13[1] = lVar22;
      *(undefined1 *)((long)plVar13 + 0x16) = uVar2;
      *(undefined2 *)((long)plVar13 + 0x14) = uVar3;
      *(int *)(plVar13 + 2) = (int)param_3;
    }
  }
  _swift_continuation_throwingResume(param_1);
joined_r0x000100a9dde4:
  if (lVar1 == 0) {
    _swift_release(lVar17);
    FUN_1009fc0bc(lVar7,lVar22,param_3,uVar18);
  }
  else {
    _swift_retain(puVar19);
    (*pcVar5)();
    _swift_release(lVar17);
    FUN_1009fc0bc(lVar7,lVar22,param_3,uVar18);
    FUN_100004550(pcVar5,puVar19);
    FUN_100004550(pcVar5,puVar19);
  }
  return;
}



/* Address: 0x100a9dfe0 | FUN_100a9dfe0 */

void FUN_100a9dfe0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  CancellationError CVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  String SVar16;
  undefined1 *local_70;
  undefined1 uStack_61;
  
  uVar10 = param_2;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9e2bc);
    (*pcVar4)();
  }
  uVar6 = param_1;
  FUN_100a9eef8();
  lVar2 = *(long *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  if (lVar2 == 0) {
    pcVar4 = (code *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = &DAT_100f2f458;
    _swift_allocObject(&DAT_100f2f458,0x20,7);
    *(long *)(puVar15 + 0x10) = lVar2;
    *(undefined8 *)(puVar15 + 0x18) = uVar3;
    pcVar4 = FUN_1000386a0;
  }
  FUN_100011128(lVar2,uVar3);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9e2c0);
    (*pcVar4)();
  }
  if (lVar2 == 0) {
    pcVar4 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = &DAT_100f2f430;
    _swift_allocObject(&DAT_100f2f430,0x20,7);
    *(code **)(puVar14 + 0x10) = pcVar4;
    *(undefined **)(puVar14 + 0x18) = puVar15;
    pcVar4 = FUN_1000386a0;
  }
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 1 || (param_4 & 0xff) == 0) {
    FUN_100a7c25c(uVar6,uVar10,param_3);
    puVar11 = *(ulong **)(*(long *)(param_1 + 0x40) + 0x28);
    *puVar11 = uVar6;
    puVar11[1] = uVar10;
    puVar11[2] = param_3;
  }
  else {
    if (uVar1 == 2) {
      if ((uVar6 & 0xff) != 1) {
LAB_100a9e1c4:
        puVar9 = PTR___type_metadata_for_Swift_Never_100eadc38;
        _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                          PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                          ,0,0);
        puVar15 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar13 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar13 = puVar9;
        _swift_continuation_throwingResumeWithError(param_1,puVar15);
        goto joined_r0x000100a9e220;
      }
    }
    else if ((param_3 == 0 && uVar10 == 0) && uVar6 == 0) {
      CVar7 = Swift::CancellationError::typeMetadataAccessor();
      lVar12 = *(long *)(*(long *)(CVar7.unknown + -8) + 0x40);
      local_70 = (undefined1 *)&local_70;
      Swift::CancellationError::init();
      puVar8 = &uStack_61;
      _swift_dynamicCast(puVar8,(long)&local_70 - (lVar12 + 0xfU & 0xfffffffffffffff0),CVar7.unknown
                         ,PTR___type_metadata_for_Swift_Never_100eadc38,6);
      if (((ulong)puVar8 & 1) != 0) goto LAB_100a9e1c4;
    }
    else if ((uVar6 != 1) || (param_3 != 0 || uVar10 != 0)) {
      if ((uVar6 == 2) && (param_3 == 0 && uVar10 == 0)) {
        SVar16.bridgeObject = (void *)0x2;
        SVar16.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar16,(StaticString)0x0,0xe000000000000000,0xdaeab0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9e164);
        (*pcVar4)();
      }
      goto joined_r0x000100a9e220;
    }
    puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28);
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 1;
  }
  _swift_continuation_throwingResume(param_1);
joined_r0x000100a9e220:
  if (lVar2 == 0) {
    FUN_100aa298c(uVar6,uVar10,param_3,param_4);
  }
  else {
    _swift_retain(puVar14);
    (*pcVar4)();
    FUN_100aa298c(uVar6,uVar10,param_3,param_4);
    FUN_100004550(pcVar4,puVar14);
    FUN_100004550(pcVar4,puVar14);
  }
  return;
}



/* Address: 0x100a9e2c0 | FUN_100a9e2c0 */

undefined1  [16] FUN_100a9e2c0(ulong param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  byte *pbVar11;
  undefined3 uVar12;
  undefined7 uVar13;
  undefined7 uVar14;
  code *pcVar15;
  ulong *puVar16;
  ulong uVar17;
  byte bVar18;
  undefined2 uVar19;
  long lVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  ulong *unaff_x20;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  undefined1 auVar30 [16];
  
  bVar18 = (byte)*unaff_x20;
  puVar16 = (ulong *)*unaff_x20;
  puVar29 = unaff_x20 + 1;
  uVar27 = *puVar29;
  uVar24 = unaff_x20[2];
  uVar23 = unaff_x20[3];
  uVar17 = unaff_x20[4];
  uVar19 = (undefined2)unaff_x20[5];
  bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar4 < 3) {
    bVar5 = *(byte *)((long)unaff_x20 + 7);
    uVar12 = *(undefined3 *)((long)unaff_x20 + 5);
    uVar3 = *(undefined4 *)((long)unaff_x20 + 1);
    uVar13 = *(undefined7 *)((long)unaff_x20 + 1);
    bVar6 = (byte)*puVar29;
    uVar14 = *(undefined7 *)((long)unaff_x20 + 9);
    bVar7 = (byte)unaff_x20[2];
    bVar8 = *(byte *)((long)unaff_x20 + 0x11);
    bVar9 = (byte)((uint7)uVar14 >> 0x30);
    uVar10 = (undefined2)((uint7)uVar14 >> 0x20);
    uVar21 = (undefined4)uVar14;
    if (bVar4 == 0) {
      if (param_1 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e878);
        (*pcVar15)();
      }
      FUN_1009e8ec8(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,0);
      FUN_1006883ac();
      uVar24 = *puVar16;
      uVar19 = 0x100;
      if ((bVar8 & 1) == 0) {
        uVar19 = 0;
      }
      uVar23 = *unaff_x20;
      uVar27 = unaff_x20[1];
      uVar17 = unaff_x20[2];
      uVar25 = unaff_x20[3];
      uVar28 = unaff_x20[4];
      bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
      uVar26 = unaff_x20[5];
      _swift_retain();
      FUN_1009e8f30(uVar23,uVar27,uVar17,uVar25,uVar28,(short)uVar26,bVar4);
      *(byte *)unaff_x20 = bVar18;
      *(byte *)((long)unaff_x20 + 7) = bVar5;
      *(short *)((long)unaff_x20 + 5) = (short)uVar12;
      *(undefined4 *)((long)unaff_x20 + 1) = uVar3;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar21;
      unaff_x20[2] = (ulong)bVar7 & 1;
      unaff_x20[3] = uVar24;
      unaff_x20[4] = 0;
      *(undefined2 *)(unaff_x20 + 5) = uVar19;
    }
    else {
      if (bVar4 != 1) {
        uVar26 = CONCAT71(uVar13,bVar18);
        uVar25 = (ulong)(ushort)unaff_x20[2] |
                 (ulong)*(uint *)((long)unaff_x20 + 0x12) << 0x10 |
                 (ulong)*(ushort *)((long)unaff_x20 + 0x16) << 0x30;
        FUN_1009e8ec8(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,2);
        FUN_1009e8f30(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,2);
        pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
        pbVar11 = (byte *)((long)unaff_x20 + 0x22);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        *(byte *)((long)unaff_x20 + 0x2a) = 5;
        if (*(long *)(uVar26 + 0x18) < 1) {
          _swift_release(uVar26);
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = (ulong)bVar6 & 1;
          unaff_x20[2] = 0;
          *puVar29 = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          *(undefined2 *)(unaff_x20 + 5) = 0;
          uVar24 = 2;
          *(byte *)((long)unaff_x20 + 0x2a) = 4;
        }
        else {
          uVar24 = uVar26;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar24 & 1) == 0) {
            FUN_100a9f20c();
          }
          lVar22 = *(long *)(uVar26 + 0x20);
          lVar20 = lVar22 + 1;
          if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e87c);
            (*pcVar15)();
          }
          uVar23 = *(ulong *)(uVar26 + lVar22 * 8 + 0x28);
          if (*(long *)(uVar26 + 0x10) <= lVar20) {
            lVar20 = 0;
          }
          *(long *)(uVar26 + 0x20) = lVar20;
          if (SBORROW8(*(long *)(uVar26 + 0x18),1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e884);
            (*pcVar15)();
          }
          *(long *)(uVar26 + 0x18) = *(long *)(uVar26 + 0x18) + -1;
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          uVar24 = 0;
          *unaff_x20 = uVar26;
          *(byte *)(unaff_x20 + 1) = bVar6 & 1;
          unaff_x20[2] = uVar25;
          *(byte *)((long)unaff_x20 + 0x2a) = 2;
          uVar25 = uVar23;
        }
        goto LAB_100a9e760;
      }
      if (uVar17 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e890);
        (*pcVar15)();
      }
      bVar4 = (byte)unaff_x20[5];
      bVar5 = *(byte *)((long)unaff_x20 + 0x29);
      uVar17 = CONCAT71(uVar13,bVar18);
      FUN_1009e8ec8(puVar16,uVar27,uVar24,uVar23,0,uVar19,1);
      FUN_1009e8f30(puVar16,uVar27,uVar24,uVar23,0,uVar19,1);
      pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
      pbVar11 = (byte *)((long)unaff_x20 + 0x22);
      pbVar11[0] = 0;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 5;
      lVar20 = *(long *)(uVar23 + 0x18);
      if (0 < lVar20) {
        uVar24 = uVar23;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar24 & 1) == 0) {
          FUN_100a9f20c();
        }
        lVar22 = *(long *)(uVar23 + 0x20);
        lVar20 = lVar22 + 1;
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e880);
          (*pcVar15)();
        }
        uVar25 = *(ulong *)(uVar23 + lVar22 * 8 + 0x28);
        if (*(long *)(uVar23 + 0x10) <= lVar20) {
          lVar20 = 0;
        }
        *(long *)(uVar23 + 0x20) = lVar20;
        lVar20 = *(long *)(uVar23 + 0x18) + -1;
        if (SBORROW8(*(long *)(uVar23 + 0x18),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e888);
          (*pcVar15)();
        }
        *(long *)(uVar23 + 0x18) = lVar20;
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = uVar17;
        *(byte *)(unaff_x20 + 1) = bVar6;
        *(byte *)((long)unaff_x20 + 0xf) = bVar9;
        *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
        *(undefined4 *)((long)unaff_x20 + 9) = uVar21;
        uVar2 = (lVar20 < (long)uVar17 | bVar7) & 1;
        bVar18 = (byte)uVar2;
        *(byte *)(unaff_x20 + 2) = bVar18;
        unaff_x20[3] = uVar23;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar18;
        *(byte *)((long)unaff_x20 + 0x29) = bVar5 & 1;
        uVar24 = (ulong)(uVar2 & (bVar4 ^ 1));
        *(byte *)((long)unaff_x20 + 0x2a) = 1;
        goto LAB_100a9e760;
      }
      if (param_1 != 0) {
        FUN_1009e8f30(0,0,0,0,0,0,5);
        *unaff_x20 = uVar17;
        *(byte *)(unaff_x20 + 1) = bVar6;
        *(undefined4 *)((long)unaff_x20 + 9) = uVar21;
        *(byte *)((long)unaff_x20 + 0xf) = bVar9;
        *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
        bVar18 = lVar20 < (long)uVar17 | bVar7 & 1;
        *(byte *)(unaff_x20 + 2) = bVar18;
        unaff_x20[3] = uVar23;
        unaff_x20[4] = param_1;
        *(byte *)(unaff_x20 + 5) = bVar18;
        bVar18 = 1;
        *(byte *)((long)unaff_x20 + 0x29) = bVar5 & 1;
        uVar25 = 3;
        if ((((uint)bVar4 | (lVar20 < (long)uVar17 | bVar7) ^ 0xffffffff) & 1) != 0) {
          uVar25 = 4;
        }
        goto LAB_100a9e600;
      }
      FUN_1009e8f30(0,0,0,0,0,0,5);
      *unaff_x20 = uVar17;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar21;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
      *(byte *)(unaff_x20 + 2) = bVar7 & 1;
      unaff_x20[3] = uVar23;
      unaff_x20[4] = 0;
      *(byte *)(unaff_x20 + 5) = bVar4 & 1;
      *(byte *)((long)unaff_x20 + 0x29) = bVar5 & 1;
    }
    bVar18 = 1;
    uVar25 = 2;
  }
  else {
    if (bVar4 != 3) {
      if (bVar4 != 4) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100a9e88c);
        (*pcVar15)();
      }
      FUN_1009e8ec8(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,4);
      uVar24 = 3;
      uVar25 = 1;
      goto LAB_100a9e760;
    }
    FUN_1009e8ec8(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,3);
    FUN_1009e8f30(puVar16,uVar27,uVar24,uVar23,uVar17,uVar19,3);
    uVar25 = 0;
    *unaff_x20 = (ulong)bVar18 & 1;
    unaff_x20[2] = 0;
    *puVar29 = 0;
    unaff_x20[4] = 0;
    unaff_x20[3] = 0;
    *(undefined2 *)(unaff_x20 + 5) = 0;
    bVar18 = 4;
  }
LAB_100a9e600:
  uVar24 = 3;
  *(byte *)((long)unaff_x20 + 0x2a) = bVar18;
LAB_100a9e760:
  auVar30._8_8_ = uVar24;
  auVar30._0_8_ = uVar25;
  return auVar30;
}



/* Address: 0x100a9e890 | FUN_100a9e890 */

ulong FUN_100a9e890(ulong param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  byte *pbVar12;
  undefined3 uVar13;
  undefined7 uVar14;
  undefined7 uVar15;
  code *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 uVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  ulong *unaff_x20;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  
  bVar10 = (byte)*unaff_x20;
  puVar17 = (ulong *)*unaff_x20;
  puVar27 = unaff_x20 + 1;
  uVar18 = *puVar27;
  uVar24 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar19 = unaff_x20[4];
  uVar20 = (undefined2)unaff_x20[5];
  bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
  if (2 < bVar4) {
    if (bVar4 == 3) {
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,uVar19,uVar20,3);
      *unaff_x20 = (ulong)bVar10 & 1;
      unaff_x20[2] = 0;
      *puVar27 = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 4;
      return 0;
    }
    if (bVar4 == 4) {
      FUN_1009e8ec8();
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eef4);
    (*pcVar16)();
  }
  bVar5 = *(byte *)((long)unaff_x20 + 7);
  uVar13 = *(undefined3 *)((long)unaff_x20 + 5);
  uVar3 = *(undefined4 *)((long)unaff_x20 + 1);
  uVar14 = *(undefined7 *)((long)unaff_x20 + 1);
  bVar6 = (byte)*puVar27;
  uVar15 = *(undefined7 *)((long)unaff_x20 + 9);
  bVar7 = (byte)unaff_x20[2];
  bVar8 = *(byte *)((long)unaff_x20 + 0x11);
  bVar9 = (byte)((uint7)uVar15 >> 0x30);
  uVar11 = (undefined2)((uint7)uVar15 >> 0x20);
  uVar23 = (undefined4)uVar15;
  if (bVar4 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eee0);
      (*pcVar16)();
    }
    FUN_1009e8ec8();
    FUN_1006883ac();
    uVar24 = *puVar17;
    uVar20 = 0x100;
    if ((bVar8 & 1) == 0) {
      uVar20 = 0;
    }
    uVar2 = *unaff_x20;
    uVar19 = unaff_x20[1];
    uVar18 = unaff_x20[2];
    uVar26 = unaff_x20[3];
    uVar25 = unaff_x20[4];
    bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
    uVar28 = unaff_x20[5];
    _swift_retain();
    FUN_1009e8f30(uVar2,uVar19,uVar18,uVar26,uVar25,(short)uVar28,bVar4);
    *(byte *)unaff_x20 = bVar10;
    *(byte *)((long)unaff_x20 + 7) = bVar5;
    *(short *)((long)unaff_x20 + 5) = (short)uVar13;
    *(undefined4 *)((long)unaff_x20 + 1) = uVar3;
    *(byte *)(unaff_x20 + 1) = bVar6;
    *(byte *)((long)unaff_x20 + 0xf) = bVar9;
    *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
    *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
    unaff_x20[2] = (ulong)bVar7 & 1;
    unaff_x20[3] = uVar24;
    unaff_x20[4] = 0;
    *(undefined2 *)(unaff_x20 + 5) = uVar20;
  }
  else {
    if (bVar4 != 1) {
      uVar26 = CONCAT71(uVar14,bVar10);
      uVar28 = (ulong)(ushort)unaff_x20[2] |
               (ulong)*(uint *)((long)unaff_x20 + 0x12) << 0x10 |
               (ulong)*(ushort *)((long)unaff_x20 + 0x16) << 0x30;
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,uVar19,uVar20,2);
      pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
      pbVar12 = (byte *)((long)unaff_x20 + 0x22);
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 5;
      if (*(long *)(uVar26 + 0x18) < 1) {
        _swift_release(uVar26);
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = (ulong)bVar6 & 1;
        unaff_x20[2] = 0;
        *puVar27 = 0;
        unaff_x20[4] = 0;
        unaff_x20[3] = 0;
        *(undefined2 *)(unaff_x20 + 5) = 0;
        *(byte *)((long)unaff_x20 + 0x2a) = 4;
        return uVar28;
      }
      uVar24 = uVar26;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar24 & 1) == 0) {
        FUN_100a9f2a8(&DAT_100ff7f20,&DAT_100c93378,FUN_1009ed678);
      }
      lVar22 = *(long *)(uVar26 + 0x20);
      lVar21 = lVar22 + 1;
      if (!SCARRY8(lVar22,1)) {
        uVar24 = *(ulong *)(uVar26 + lVar22 * 0x18 + 0x28);
        if (*(long *)(uVar26 + 0x10) <= lVar21) {
          lVar21 = 0;
        }
        *(long *)(uVar26 + 0x20) = lVar21;
        if (!SBORROW8(*(long *)(uVar26 + 0x18),1)) {
          *(long *)(uVar26 + 0x18) = *(long *)(uVar26 + 0x18) + -1;
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = uVar26;
          *(byte *)(unaff_x20 + 1) = bVar6 & 1;
          unaff_x20[2] = uVar28;
          *(byte *)((long)unaff_x20 + 0x2a) = 2;
          return uVar24;
        }
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eeec);
        (*pcVar16)();
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eee4);
      (*pcVar16)();
    }
    if (uVar19 != 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eef8);
      (*pcVar16)();
    }
    uVar19 = unaff_x20[5];
    bVar4 = *(byte *)((long)unaff_x20 + 0x29);
    uVar26 = CONCAT71(uVar14,bVar10);
    FUN_1009e8ec8();
    FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,0,uVar20,1);
    pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
    pbVar12 = (byte *)((long)unaff_x20 + 0x22);
    pbVar12[0] = 0;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    pbVar12[6] = 0;
    pbVar12[7] = 0;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    *(byte *)((long)unaff_x20 + 0x2a) = 5;
    lVar21 = *(long *)(uVar2 + 0x18);
    if (0 < lVar21) {
      uVar24 = uVar2;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar24 & 1) == 0) {
        FUN_100a9f2a8(&DAT_100ff7f20,&DAT_100c93378,FUN_1009ed678);
      }
      lVar22 = *(long *)(uVar2 + 0x20);
      lVar21 = lVar22 + 1;
      if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eee8);
        (*pcVar16)();
      }
      uVar24 = *(ulong *)(uVar2 + lVar22 * 0x18 + 0x28);
      if (*(long *)(uVar2 + 0x10) <= lVar21) {
        lVar21 = 0;
      }
      *(long *)(uVar2 + 0x20) = lVar21;
      lVar21 = *(long *)(uVar2 + 0x18) + -1;
      if (!SBORROW8(*(long *)(uVar2 + 0x18),1)) {
        *(long *)(uVar2 + 0x18) = lVar21;
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = uVar26;
        *(byte *)(unaff_x20 + 1) = bVar6;
        *(byte *)((long)unaff_x20 + 0xf) = bVar9;
        *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
        bVar10 = lVar21 < (long)uVar26 | bVar7 & 1;
        *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
        *(byte *)(unaff_x20 + 2) = bVar10;
        unaff_x20[3] = uVar2;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar10;
        *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
        *(byte *)((long)unaff_x20 + 0x2a) = 1;
        return uVar24;
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9eef0);
      (*pcVar16)();
    }
    if (param_1 != 0) {
      FUN_1009e8f30(0,0,0,0,0,0,5);
      *unaff_x20 = uVar26;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
      bVar10 = lVar21 < (long)uVar26 | bVar7 & 1;
      *(byte *)(unaff_x20 + 2) = bVar10;
      unaff_x20[3] = uVar2;
      unaff_x20[4] = param_1;
      *(byte *)(unaff_x20 + 5) = bVar10;
      *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
      uVar24 = 3;
      if ((((byte)uVar19 | (lVar21 < (long)uVar26 | bVar7) ^ 0xff) & 1) != 0) {
        uVar24 = 4;
      }
      *(byte *)((long)unaff_x20 + 0x2a) = 1;
      return uVar24;
    }
    FUN_1009e8f30(0,0,0,0,0,0,5);
    *unaff_x20 = uVar26;
    *(byte *)(unaff_x20 + 1) = bVar6;
    *(byte *)((long)unaff_x20 + 0xf) = bVar9;
    *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
    *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
    *(byte *)(unaff_x20 + 2) = bVar7 & 1;
    unaff_x20[3] = uVar2;
    unaff_x20[4] = 0;
    *(byte *)(unaff_x20 + 5) = (byte)uVar19 & 1;
    *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
  }
  *(byte *)((long)unaff_x20 + 0x2a) = 1;
  return 2;
}



/* Address: 0x100a9eef8 | FUN_100a9eef8 */

ulong FUN_100a9eef8(ulong *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined2 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  
  bVar2 = (byte)*unaff_x20;
  bVar3 = *(byte *)((long)unaff_x20 + 0x12);
  if (2 < bVar3) {
    if (bVar3 == 3) {
      *unaff_x20 = (ulong)bVar2 & 1;
      unaff_x20[1] = 0;
      *(undefined2 *)(unaff_x20 + 2) = 0;
      *(byte *)((long)unaff_x20 + 0x12) = 4;
      return 0;
    }
    if (bVar3 == 4) {
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f208);
    (*pcVar6)();
  }
  if (bVar3 == 0) {
    if (param_1 != (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f1f4);
      (*pcVar6)();
    }
    FUN_1006883ac();
    uVar7 = 0x100;
    if ((bVar2 & 1) == 0) {
      uVar7 = 0;
    }
    *unaff_x20 = *param_1;
    unaff_x20[1] = 0;
    *(undefined2 *)(unaff_x20 + 2) = uVar7;
    *(byte *)((long)unaff_x20 + 0x12) = 1;
    _swift_retain();
  }
  else {
    bVar4 = (byte)unaff_x20[1];
    bVar5 = *(byte *)((long)unaff_x20 + 9);
    if (bVar3 != 1) {
      uVar10 = CONCAT71(*(undefined7 *)((long)unaff_x20 + 1),bVar2);
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      *(undefined2 *)(unaff_x20 + 2) = 0;
      *(byte *)((long)unaff_x20 + 0x12) = 5;
      if (*(long *)(uVar10 + 0x18) < 1) {
        _swift_release(uVar10);
        *unaff_x20 = (ulong)bVar4 & 1;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        *(byte *)((long)unaff_x20 + 0x12) = 4;
        return (ulong)bVar5;
      }
      uVar9 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
      }
      lVar8 = *(long *)(uVar10 + 0x20);
      lVar1 = lVar8 + 1;
      if (!SCARRY8(lVar8,1)) {
        uVar9 = *(ulong *)(uVar10 + lVar8 * 0x18 + 0x28);
        if (*(long *)(uVar10 + 0x10) <= lVar1) {
          lVar1 = 0;
        }
        *(long *)(uVar10 + 0x20) = lVar1;
        if (!SBORROW8(*(long *)(uVar10 + 0x18),1)) {
          *(long *)(uVar10 + 0x18) = *(long *)(uVar10 + 0x18) + -1;
          *unaff_x20 = uVar10;
          *(byte *)(unaff_x20 + 1) = bVar4 & 1;
          *(byte *)((long)unaff_x20 + 9) = bVar5;
          *(byte *)((long)unaff_x20 + 0x12) = 2;
          return uVar9;
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f200);
        (*pcVar6)();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f1f8);
      (*pcVar6)();
    }
    if (*(int6 *)((long)unaff_x20 + 10) != 0 || (bVar5 != 0 || bVar4 != 0)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f20c);
      (*pcVar6)();
    }
    uVar10 = unaff_x20[2];
    bVar3 = *(byte *)((long)unaff_x20 + 0x11);
    uVar9 = CONCAT71(*(undefined7 *)((long)unaff_x20 + 1),bVar2);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined2 *)(unaff_x20 + 2) = 0;
    *(byte *)((long)unaff_x20 + 0x12) = 5;
    if (0 < *(long *)(uVar9 + 0x18)) {
      uVar10 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar10 & 1) == 0) {
        FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
      }
      lVar8 = *(long *)(uVar9 + 0x20);
      lVar1 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f1fc);
        (*pcVar6)();
      }
      uVar10 = *(ulong *)(uVar9 + lVar8 * 0x18 + 0x28);
      if (*(long *)(uVar9 + 0x10) <= lVar1) {
        lVar1 = 0;
      }
      *(long *)(uVar9 + 0x20) = lVar1;
      if (!SBORROW8(*(long *)(uVar9 + 0x18),1)) {
        *(long *)(uVar9 + 0x18) = *(long *)(uVar9 + 0x18) + -1;
        *unaff_x20 = uVar9;
        unaff_x20[1] = 0;
        *(byte *)(unaff_x20 + 2) = 1;
        *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
        *(byte *)((long)unaff_x20 + 0x12) = 1;
        return uVar10;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9f204);
      (*pcVar6)();
    }
    *unaff_x20 = uVar9;
    if (param_1 != (ulong *)0x0) {
      unaff_x20[1] = (ulong)param_1;
      *(byte *)(unaff_x20 + 2) = 1;
      *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
      *(byte *)((long)unaff_x20 + 0x12) = 1;
      if (((byte)uVar10 & 1) == 0) {
        return 3;
      }
      return 4;
    }
    unaff_x20[1] = 0;
    *(byte *)(unaff_x20 + 2) = (byte)uVar10 & 1;
    *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
    *(byte *)((long)unaff_x20 + 0x12) = 1;
  }
  return 2;
}



/* Address: 0x100a9f20c | FUN_100a9f20c */

void FUN_100a9f20c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff7f18;
  FUN_1000f7830(&DAT_100ff7f18,&DAT_100c93368);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_100a9f404(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100a9f2a8 | FUN_100a9f2a8 */

void FUN_100a9f2a8(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  FUN_1000f7830();
  _swift_allocObject();
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (0 < lVar1) {
    (*param_3)((undefined8 *)(param_1 + 0x10),param_1 + 0x28,(undefined8 *)(lVar2 + 0x10),
               lVar2 + 0x28);
  }
  _swift_release(lVar2);
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a9f33c | FUN_100a9f33c */

void FUN_100a9f33c(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  puVar2 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  bVar1 = *(byte *)(*(long *)(puVar2 + -8) + 0x50);
  puVar2 = &DAT_100ff7f80;
  FUN_1000f7830(&DAT_100ff7f80,&DAT_100c93480);
  uVar5 = (ulong)bVar1 + 0x28 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  _swift_allocObject();
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x18);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  if (0 < lVar3) {
    FUN_100a9f5e8(puVar2 + 0x10,puVar2 + uVar5,(undefined8 *)(lVar4 + 0x10),lVar4 + uVar5);
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x100a9f404 | FUN_100a9f404 */

void FUN_100a9f404(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_3[2];
  lVar1 = *param_3 - lVar6;
  if (SBORROW8(*param_3,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f504);
    (*pcVar4)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar7 = lVar8 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f508);
      (*pcVar4)();
    }
  }
  else {
    lVar7 = 0;
    lVar2 = lVar8;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f50c);
      (*pcVar4)();
    }
    puVar5 = &DAT_100ff6ad0;
    FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
    _swift_arrayInitWithCopy(param_2 + lVar6 * 8,param_4 + lVar6 * 8,lVar2,puVar5);
  }
  if (lVar1 < lVar8 && lVar7 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f510);
      (*pcVar4)();
    }
    puVar5 = &DAT_100ff6ad0;
    FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
    _swift_arrayInitWithCopy(param_2,lVar3,lVar7,puVar5);
  }
  return;
}



/* Address: 0x100a9f510 | FUN_100a9f510 */

void FUN_100a9f510(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f5dc);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f5e0);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f5e4);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x18,param_4 + lVar5 * 0x18,lVar2,&DAT_100f2d7d8);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a9f5e8);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,&DAT_100f2d7d8);
  }
  return;
}



/* Address: 0x100a9f5e8 | FUN_100a9f5e8 */

void FUN_100a9f5e8(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_3[2];
  lVar1 = *param_3 - lVar9;
  if (SBORROW8(*param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a9f720);
    (*pcVar3)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar6 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a9f724);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    lVar2 = lVar1;
    lVar7 = param_4;
  }
  else {
    puVar4 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    lVar7 = 0;
    lVar6 = 0;
    lVar2 = lVar8;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a9f728);
      (*pcVar3)();
    }
    lVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
    puVar4 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    _swift_arrayInitWithCopy
              (param_2 + *(long *)(*(long *)(puVar4 + -8) + 0x48) * lVar9,param_4 + lVar5 * lVar9,
               lVar2,puVar4);
  }
  if ((lVar1 < lVar8) && (lVar6 != 0)) {
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a9f72c);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    _swift_arrayInitWithCopy(param_2,lVar7,lVar6,puVar4);
  }
  return;
}



/* Address: 0x100a9f72c | FUN_100a9f72c */

long FUN_100a9f72c(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_2;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9f7d0);
    (*pcVar1)();
  }
  FUN_100a9fbbc();
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar2 == 0) {
    if ((param_3 & 0xff) == 0) {
      **(long **)(*(long *)(param_1 + 0x40) + 0x28) = lVar3;
      _swift_continuation_throwingResume(param_1);
      param_1 = 0;
    }
    else if (((uint)param_3 & 0xff) == 1) {
      **(long **)(*(long *)(param_1 + 0x40) + 0x28) = lVar3;
      _swift_continuation_throwingResume(param_1);
      param_1 = 1;
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9f7d4);
  (*pcVar1)();
}



/* Address: 0x100a9f7d4 | FUN_100a9f7d4 */

undefined8 FUN_100a9f7d4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_60;
  long lStack_58;
  long local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  char local_41;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9f9f8);
    (*pcVar1)();
  }
  FUN_100a9ffec(&local_60,param_1,param_2,param_3 & 0xffffffffffffff);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9f9fc);
    (*pcVar1)();
  }
  uVar5 = (ulong)CONCAT16(local_42,CONCAT24(local_44,local_48));
  if (local_41 == '\0') {
    FUN_1009f1e24(local_60,lStack_58,local_50,uVar5,0);
    plVar4 = *(long **)(*(long *)(local_60 + 0x40) + 0x28);
    *plVar4 = lStack_58;
    plVar4[1] = local_50;
    *(undefined1 *)((long)plVar4 + 0x16) = local_42;
    *(undefined2 *)((long)plVar4 + 0x14) = local_44;
    *(undefined4 *)(plVar4 + 2) = local_48;
    _swift_continuation_throwingResume(local_60);
    uVar6 = 0;
LAB_100a9f950:
    FUN_1009f1e3c(local_60,lStack_58,local_50,uVar5,uVar6);
    uVar6 = 0;
  }
  else {
    if (local_41 == '\x01') {
      uVar6 = 1;
      FUN_1009f1e24(local_60,lStack_58,local_50,uVar5,1);
      plVar4 = *(long **)(*(long *)(local_60 + 0x40) + 0x28);
      *plVar4 = lStack_58;
      plVar4[1] = local_50;
      *(undefined1 *)((long)plVar4 + 0x16) = local_42;
      *(undefined2 *)((long)plVar4 + 0x14) = local_44;
      *(undefined4 *)(plVar4 + 2) = local_48;
      _swift_continuation_throwingResume(local_60);
      uVar3 = 1;
    }
    else {
      if (((local_50 == 0 && lStack_58 == 0) && local_60 == 0) && (uVar5 == 0)) {
        FUN_1009f1e24(0,0,0,0,2);
        local_60 = 0;
        lStack_58 = 0;
        local_50 = 0;
        uVar5 = 0;
        uVar6 = 2;
        goto LAB_100a9f950;
      }
      if ((uVar5 == 0 && local_60 == 1) && (local_50 == 0 && lStack_58 == 0)) {
        FUN_1009f1e24(1,0,0,0,2);
        FUN_1009f1e3c(1,0,0,0,2);
        return 1;
      }
      uVar6 = 2;
      FUN_1009f1e24(2,0,0,0,2);
      local_60 = 2;
      lStack_58 = 0;
      local_50 = 0;
      uVar5 = 0;
      uVar3 = 2;
    }
    FUN_1009f1e3c(local_60,lStack_58,local_50,uVar5,uVar3);
  }
  return uVar6;
}



/* Address: 0x100a9f9fc | FUN_100a9f9fc */

undefined4 FUN_100a9f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  char local_48;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9fae4);
    (*pcVar1)();
  }
  FUN_100aa0494(&local_68,param_1,param_2,param_3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9fae8);
    (*pcVar1)();
  }
  if (local_48 == '\0') {
    plVar3 = *(long **)(*(long *)(local_68 + 0x40) + 0x28);
    *plVar3 = lStack_60;
    plVar3[1] = local_58;
    plVar3[2] = lStack_50;
    _swift_continuation_throwingResume();
  }
  else {
    if (local_48 == '\x01') {
      plVar3 = *(long **)(*(long *)(local_68 + 0x40) + 0x28);
      *plVar3 = lStack_60;
      plVar3[1] = local_58;
      plVar3[2] = lStack_50;
      _swift_continuation_throwingResume();
      return 1;
    }
    if (((local_58 != 0 || lStack_60 != 0) || lStack_50 != 0) || local_68 != 0) {
      if (((local_58 == 0 && lStack_60 == 0) && lStack_50 == 0) && local_68 == 1) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}



/* Address: 0x100a9fae8 | FUN_100a9fae8 */

undefined4 FUN_100a9fae8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  char local_38;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9fbb8);
    (*pcVar1)();
  }
  FUN_100aa0700(&local_58,param_1);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9fbbc);
    (*pcVar1)();
  }
  if (local_38 == '\0') {
    plVar3 = *(long **)(*(long *)(local_58 + 0x40) + 0x28);
    *plVar3 = lStack_50;
    plVar3[1] = local_48;
    plVar3[2] = lStack_40;
    _swift_continuation_throwingResume();
  }
  else {
    if (local_38 == '\x01') {
      plVar3 = *(long **)(*(long *)(local_58 + 0x40) + 0x28);
      *plVar3 = lStack_50;
      plVar3[1] = local_48;
      plVar3[2] = lStack_40;
      _swift_continuation_throwingResume();
      return 1;
    }
    if (((local_48 != 0 || lStack_50 != 0) || lStack_40 != 0) || local_58 != 0) {
      if (((local_48 == 0 && lStack_50 == 0) && lStack_40 == 0) && local_58 == 1) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


