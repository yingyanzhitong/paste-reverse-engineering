/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009d4efc | FUN_1009d4efc */

void FUN_1009d4efc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a48));
  _swift_release(uVar3);
  _swift_errorRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  FUN_1009d7d7c(unaff_x22 + 0x1180);
                    /* WARNING: Could not recover jumptable at 0x0001009d4f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d4f70 | FUN_1009d4f70 */

void FUN_1009d4f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009d4f8c,0,0);
  return;
}



/* Address: 0x1009d4f8c | FUN_1009d4f8c */

void FUN_1009d4f8c(void)

{
  Duration DVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  long *plVar4;
  __int64 attosecondsComponent;
  long lVar5;
  long unaff_x22;
  
  attosecondsComponent = *(__int64 *)(unaff_x22 + 0x20);
  DVar1 = Swift::Duration::init(*(__int64 *)(unaff_x22 + 0x18),attosecondsComponent);
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = CVar2.unknown;
  lVar5 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009d5050;
  FUN_1009d653c(DVar1.unknown,attosecondsComponent,0,0,1);
  return;
}



/* Address: 0x1009d5050 | FUN_1009d5050 */

void FUN_1009d5050(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    (**(code **)(*(long *)(lVar3 + 0x30) + 8))(uVar1,*(undefined8 *)(lVar3 + 0x28));
    _swift_task_dealloc(uVar1);
    pcVar2 = FUN_1009d50d4;
  }
  else {
    _swift_errorRelease();
    pcVar2 = FUN_1009d510c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1009d50d4 | FUN_1009d50d4 */

void FUN_1009d50d4(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = 3;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001009d5108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d510c | FUN_1009d510c */

void FUN_1009d510c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar1);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar2 = 3;
  puVar2[2] = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 10) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001009d5184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5188 | FUN_1009d5188 */

ulong FUN_1009d5188(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  uVar7 = param_1;
  FUN_1009d758c();
  uVar11 = *(ulong *)(uVar7 + 0x10);
  _swift_bridgeObjectRelease(param_1);
  if (1 < uVar11) {
    lVar12 = 0;
    uVar13 = 0;
    uVar14 = uVar11 >> 1;
    lVar15 = uVar11 * 0x10 + 0x18;
    do {
      uVar11 = uVar11 - 1;
      if (uVar13 != uVar11) {
        if (*(ulong *)(uVar7 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009d52a4);
          (*pcVar6)();
        }
        if (*(ulong *)(uVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009d52a8);
          (*pcVar6)();
        }
        uVar3 = *(undefined8 *)(uVar7 + lVar12 + 0x20);
        uVar4 = *(undefined8 *)(uVar7 + lVar12 + 0x28);
        uVar8 = ((undefined8 *)(uVar7 + lVar15))[-1];
        uVar5 = *(undefined8 *)(uVar7 + lVar15);
        _swift_retain(uVar4);
        _swift_retain(uVar5);
        uVar9 = uVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar9 & 1) == 0) {
          FUN_1009d676c();
        }
        lVar2 = uVar7 + lVar12;
        uVar10 = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar8;
        *(undefined8 *)(lVar2 + 0x28) = uVar5;
        _swift_release(uVar10);
        if (*(ulong *)(uVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009d52ac);
          (*pcVar6)();
        }
        puVar1 = (undefined8 *)(uVar7 + lVar15);
        uVar8 = *puVar1;
        puVar1[-1] = uVar3;
        *puVar1 = uVar4;
        _swift_release(uVar8);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + -0x10;
      lVar12 = lVar12 + 0x10;
    } while (uVar14 != uVar13);
  }
  return uVar7;
}



/* Address: 0x1009d52ac | FUN_1009d52ac */

void FUN_1009d52ac(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  undefined1 *puVar6;
  long unaff_x20;
  ThrowingTaskGroup TVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_1c0 [96];
  undefined1 auStack_160 [24];
  undefined8 local_148;
  long lStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*param_2 == 0) {
    TVar7.unknown = (undefined *)*param_1;
    FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
    Swift::ThrowingTaskGroup::cancelAll(TVar7);
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
    if (((bVar3 & 1) == 0) || (*(char *)(unaff_x20 + 0x100) == '\x01')) {
      *param_2 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
      uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
      puVar4 = &DAT_100ff3080;
      FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
      puVar8 = auStack_1c0 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      puVar6 = puVar8;
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar8,1,1,TVar5.unknown);
      FUN_1009d8494();
      puVar4 = &DAT_100f260c0;
      _swift_allocObject(&DAT_100f260c0,0x38,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined1 **)(puVar4 + 0x18) = puVar6;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x28) = uVar1;
      *(undefined8 *)(puVar4 + 0x30) = uVar2;
      _swift_retain_n();
      lVar9 = 0;
      FUN_1009ca434(0,0,puVar8,&DAT_100c8c800,puVar4);
      *param_2 = lVar9;
    }
  }
  else {
    lVar9 = *(long *)(unaff_x20 + 0x70);
    _swift_beginAccess(lVar9 + 0x20,auStack_d8,0,0);
    FUN_100076688(lVar9 + 0x20,local_c0);
    FUN_100004640(local_c0,local_a8);
    (**(code **)(lStack_a0 + 0x70))(local_a8,lStack_a0);
    FUN_100004594(local_c0);
    if (((uint)local_a8 & 0xff) < 2) {
      FUN_100076688(lVar9 + 0x20,auStack_160);
      FUN_100004640(auStack_160,local_148);
      local_c0[0] = 1;
      local_b8 = 0xd00000000000002f;
      uStack_b0 = 0x8000000100db7380;
      lStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      local_88 = 0xd000000000000023;
      uStack_80 = 0x8000000100db72d0;
      local_78 = 0xd000000000000042;
      uStack_70 = 0x8000000100db7330;
      local_68 = 0x33a;
      local_138[0] = 1;
      local_130 = 0xd00000000000002f;
      uStack_128 = 0x8000000100db7380;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0xd000000000000023;
      uStack_f8 = 0x8000000100db72d0;
      local_f0 = 0xd000000000000042;
      uStack_e8 = 0x8000000100db7330;
      local_e0 = 0x33a;
      FUN_1005bf638(local_c0,auStack_1c0);
      FUN_1004eaa3c(local_138);
      (**(code **)(lStack_140 + 0x28))(local_c0,local_148,lStack_140);
      FUN_1004eaa3c(local_c0);
      FUN_100004594(auStack_160);
    }
  }
  return;
}



/* Address: 0x1009d554c | FUN_1009d554c */

void FUN_1009d554c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x318) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x310) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x308) = in_x3;
  _swift_task_switch(FUN_1009d556c,in_x3,0);
  return;
}



/* Address: 0x1009d556c | FUN_1009d556c */

void FUN_1009d556c(void)

{
  Duration DVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  long *plVar4;
  __int64 attosecondsComponent;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined1 *puVar8;
  
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x308) + 0x70);
  *(long *)(unaff_x22 + 800) = lVar7;
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x2f0,0,0);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x250);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar6 = *(long *)(unaff_x22 + 0x270);
  FUN_100004640(unaff_x22 + 0x250,uVar5);
  (**(code **)(lVar6 + 0x70))(uVar5,lVar6);
  FUN_100004594(unaff_x22 + 0x250);
  if (((uint)uVar5 & 0xff) < 2) {
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x278);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x290);
    lVar6 = *(long *)(unaff_x22 + 0x298);
    FUN_100004640(unaff_x22 + 0x278,uVar5);
    *(undefined1 *)(unaff_x22 + 0xd0) = 1;
    puVar8 = (undefined1 *)(unaff_x22 + 0x10);
    *puVar8 = 1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100db73b0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000042;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100db7330;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x349;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100db73b0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000042;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100db7330;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x349;
    FUN_1005bf638(puVar8,unaff_x22 + 0x130);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar6 + 0x28))(puVar8,uVar5,lVar6);
    FUN_1004eaa3c(puVar8);
    FUN_100004594(unaff_x22 + 0x278);
  }
  attosecondsComponent = *(__int64 *)(unaff_x22 + 0x318);
  DVar1 = Swift::Duration::init(*(__int64 *)(unaff_x22 + 0x310),attosecondsComponent);
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x328) = CVar2.unknown;
  lVar6 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x330) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x338) = uVar3;
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x340) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009d5794;
  FUN_1009d653c(DVar1.unknown,attosecondsComponent,0,0,1);
  return;
}



/* Address: 0x1009d5794 | FUN_1009d5794 */

void FUN_1009d5794(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x348) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x340));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x338);
    uVar2 = *(undefined8 *)(lVar3 + 0x308);
    (**(code **)(*(long *)(lVar3 + 0x330) + 8))(uVar4,*(undefined8 *)(lVar3 + 0x328));
    _swift_task_dealloc(uVar4);
    pcVar1 = FUN_1009d5820;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x308);
    pcVar1 = FUN_1009d59e8;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1009d5820 | FUN_1009d5820 */

void FUN_1009d5820(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  undefined1 *puVar3;
  String SVar4;
  
  FUN_100076688(*(long *)(unaff_x22 + 800) + 0x20,unaff_x22 + 0x2a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b8);
  lVar2 = *(long *)(unaff_x22 + 0x2c0);
  FUN_100004640(unaff_x22 + 0x2a0,uVar1);
  (**(code **)(lVar2 + 0x70))(uVar1,lVar2);
  FUN_100004594(unaff_x22 + 0x2a0);
  if (((uint)uVar1 & 0xff) < 2) {
    FUN_100076688(*(long *)(unaff_x22 + 800) + 0x20,unaff_x22 + 0x2c8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x2e0);
    lVar2 = *(long *)(unaff_x22 + 0x2e8);
    FUN_100004640(unaff_x22 + 0x2c8,uVar1);
    puVar3 = (undefined1 *)(unaff_x22 + 0x70);
    *puVar3 = 1;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000003b;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db73e0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000042;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100db7330;
    *(undefined8 *)(unaff_x22 + 200) = 0x352;
    *(undefined1 *)(unaff_x22 + 400) = 1;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd00000000000003b;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db73e0;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000042;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100db7330;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x352;
    FUN_1005bf638(puVar3,unaff_x22 + 0x1f0);
    FUN_1004eaa3c(unaff_x22 + 400);
    (**(code **)(lVar2 + 0x28))(puVar3,uVar1,lVar2);
    FUN_1004eaa3c(puVar3);
    FUN_100004594(unaff_x22 + 0x2c8);
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd00000000000003b,0x8000000100db73e0,
             0xdb72f0);
  return;
}



/* Address: 0x1009d59e8 | FUN_1009d59e8 */

void FUN_1009d59e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x338);
  (**(code **)(*(long *)(unaff_x22 + 0x330) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x328));
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009d5a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5a44 | FUN_1009d5a44 */

void FUN_1009d5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  _swift_task_switch(FUN_1009d5a60,0,0);
  return;
}



/* Address: 0x1009d5a60 | FUN_1009d5a60 */

void FUN_1009d5a60(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  TaskLocal *pTVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  uVar2 = DAT_101058298;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar5 & 1) != 0) {
    pTVar6 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x60) = pTVar6;
    *(long *)pTVar6 = unaff_x22;
    *(code **)(pTVar6 + 8) = FUN_1009d5c00;
    Swift::TaskLocal::_withValue
              (pTVar6,uVar2,*(undefined8 *)(unaff_x22 + 0x40),unaff_x22 + 0x30,&DAT_100c8c968,
               unaff_x22 + 0x10,0,0,0xd000000000000023,0x8000000100db72d0,0x368,&DAT_100f263d8);
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x50);
  _swift_retain(*(undefined8 *)(unaff_x22 + 0x48));
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  puVar7 = &DAT_100ff34c8;
  FUN_1000f7830(&DAT_100ff34c8,&DAT_100c8c970);
  _swift_task_localValuePush(uVar2,(undefined8 *)(unaff_x22 + 0x38),puVar7);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x20);
  FUN_100004640(lVar3,uVar2);
  piVar9 = *(int **)(lVar4 + 8);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1009d5c5c;
                    /* WARNING: Could not recover jumptable at 0x0001009d5be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(uVar2,lVar4);
  return;
}



/* Address: 0x1009d5c00 | FUN_1009d5c00 */

void FUN_1009d5c00(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009d5c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009d5c5c | FUN_1009d5c5c */

void FUN_1009d5c5c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009d5cc0;
  }
  else {
    pcVar1 = FUN_1009d5d14;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009d5cc0 | FUN_1009d5cc0 */

void FUN_1009d5cc0(void)

{
  long lVar1;
  long unaff_x22;
  
  FUN_1009d7d40(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  lVar1 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined1 *)(lVar1 + 0x50) = 0;
  _swift_task_localValuePop();
                    /* WARNING: Could not recover jumptable at 0x0001009d5d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5d14 | FUN_1009d5d14 */

void FUN_1009d5d14(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  FUN_1009d7d40(*(undefined8 *)(unaff_x22 + 0x50),lVar2);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  lVar2 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined1 *)(lVar2 + 0x50) = 1;
  _swift_task_localValuePop();
                    /* WARNING: Could not recover jumptable at 0x0001009d5d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5d78 | FUN_1009d5d78 */

void FUN_1009d5d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009d5d94,0,0);
  return;
}



/* Address: 0x1009d5d94 | FUN_1009d5d94 */

void FUN_1009d5d94(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1009d5e14;
                    /* WARNING: Could not recover jumptable at 0x0001009d5e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Address: 0x1009d5e14 | FUN_1009d5e14 */

void FUN_1009d5e14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009d5e78;
  }
  else {
    pcVar1 = FUN_1009d5ec4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009d5e78 | FUN_1009d5e78 */

void FUN_1009d5e78(void)

{
  long lVar1;
  long unaff_x22;
  
  FUN_1009d7d40(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x10));
  lVar1 = *(long *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(lVar1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001009d5ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5ec4 | FUN_1009d5ec4 */

void FUN_1009d5ec4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  FUN_1009d7d40(*(undefined8 *)(unaff_x22 + 0x18),lVar1);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  lVar1 = *(long *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(lVar1 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001009d5f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d5f20 | FUN_1009d5f20 */

void FUN_1009d5f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1009d5f38,0,0);
  return;
}



/* Address: 0x1009d5f38 | FUN_1009d5f38 */

void FUN_1009d5f38(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009d6020;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar3 = FUN_1009d8ddc;
  _swift_task_addCancellationHandler(FUN_1009d8ddc,*(undefined8 *)(unaff_x22 + 0x18));
  *(code **)(unaff_x22 + 0x28) = pcVar3;
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009d607c;
  FUN_1009d6154(plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009d6020 | FUN_1009d6020 */

void FUN_1009d6020(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009d6078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009d607c | FUN_1009d607c */

void FUN_1009d607c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009d60e4;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_1009d6120;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009d60e4 | FUN_1009d60e4 */

void FUN_1009d60e4(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001009d611c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d6120 | FUN_1009d6120 */

void FUN_1009d6120(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009d6154 | FUN_1009d6154 */

void FUN_1009d6154(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  _swift_task_switch(FUN_1009d616c,0,0);
  return;
}



/* Address: 0x1009d616c | FUN_1009d616c */

void FUN_1009d616c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x22;
  
  FUN_100750e8c();
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar1;
  puVar2 = &DAT_100ff34a8;
  FUN_1000f7830(&DAT_100ff34a8,&DAT_100c8c948);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009d61f4;
  FUN_100750ec0(unaff_x22 + 0x50,puVar2);
  return;
}



/* Address: 0x1009d61f4 | FUN_1009d61f4 */

void FUN_1009d61f4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xc0));
  _swift_task_switch(FUN_1009d6244,0,0);
  return;
}



/* Address: 0x1009d6244 | FUN_1009d6244 */

void FUN_1009d6244(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_release(uVar3);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa0);
  if (*(long *)(unaff_x22 + 0x68) == 0) {
    FUN_1000fb4c4(unaff_x22 + 0x50,&DAT_100ff31c8,&DAT_100c8c5d0);
    *puVar2 = 2;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    uVar1 = 4;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
    puVar2[5] = *(undefined8 *)(unaff_x22 + 0x78);
    puVar2[4] = uVar7;
    puVar2[7] = uVar9;
    puVar2[6] = uVar8;
    uVar1 = 3;
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0xa0) + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001009d62f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d62f8 | FUN_1009d62f8 */

void FUN_1009d62f8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x110));
  FUN_10005241c(unaff_x20 + _TtC16ServiceLifecycle12ServiceGroup::state,FUN_1009d7ca4);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1009d63a0 | FUN_1009d63a0 */

void FUN_1009d63a0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x110));
  FUN_10005241c(unaff_x20 + _TtC16ServiceLifecycle12ServiceGroup::state,FUN_1009d7ca4);
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1009d644c | FUN_1009d644c */

void FUN_1009d644c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009cb098(0xd000000000000023,0x8000000100db72d0,0x9d);
  return;
}



/* Address: 0x1009d64b8 | FUN_1009d64b8 */

void FUN_1009d64b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1000fb4c4(param_2,&DAT_100ff34e0,&DAT_100c8c988);
  puVar1 = &DAT_100ff3228;
  FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
  lVar2 = *(long *)(puVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009d6538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,puVar1);
  return;
}



/* Address: 0x1009d653c | FUN_1009d653c */

void FUN_1009d653c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_1009d6560,0,0);
  return;
}



/* Address: 0x1009d6560 | FUN_1009d6560 */

void FUN_1009d6560(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0x40) = IVar2.unknown;
  lVar7 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100ff3468,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100ff3470,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar6 = *(code **)(lVar7 + 8);
  *(code **)(unaff_x22 + 0x50) = pcVar6;
  (*pcVar6)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1009d66a8;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1009d66a8 | FUN_1009d66a8 */

void FUN_1009d66a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  pcVar1 = *(code **)(lVar5 + 0x50);
  uVar2 = *(undefined8 *)(lVar5 + 0x40);
  uVar3 = *(undefined8 *)(lVar5 + 0x48);
  lVar4 = *unaff_x22;
  *(long *)(lVar5 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x58));
  (*pcVar1)(uVar3,uVar2);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1008e7d20,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001009d6740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1009d6744 | FUN_1009d6744 */

void FUN_1009d6744(long param_1)

{
  FUN_1009c7f6c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1009d6758 | FUN_1009d6758 */

void FUN_1009d6758(long param_1)

{
  FUN_1009c82b4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1009d676c | FUN_1009d676c */

void FUN_1009d676c(long param_1)

{
  FUN_1009c83e4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1009d6780 | FUN_1009d6780 */

undefined8 FUN_1009d6780(long param_1,long param_2)

{
  undefined1 uVar1;
  Hasher HVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a8 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x20 + lVar7);
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        HVar2.unknown = auStack_a8;
        FUN_1001a7d88(HVar2.unknown,uVar1);
        uVar3 = Swift::Hasher::_finalize(HVar2);
        uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
          do {
            uVar4 = (ulong)*(byte *)(*(long *)(param_2 + 0x30) + uVar3);
            FUN_1001a7d78(uVar4,uVar1);
            if ((uVar4 & 1) != 0) {
              return 0;
            }
            uVar3 = uVar3 + 1 & ~uVar5;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  return 1;
}



/* Address: 0x1009d6884 | FUN_1009d6884 */

undefined8 FUN_1009d6884(undefined1 *param_1,ulong param_2)

{
  Hasher HVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long local_98 [9];
  
  lVar6 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
  HVar1.unknown = (undefined *)local_98;
  FUN_1001a7d88(HVar1.unknown,param_2);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar5 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar6 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      lVar7 = *(long *)(lVar6 + 0x30);
      uVar3 = (ulong)*(byte *)(lVar7 + uVar2);
      FUN_1001a7d78(uVar3,param_2);
      if ((uVar3 & 1) != 0) {
        uVar4 = 0;
        param_2 = (ulong)*(byte *)(lVar7 + uVar2);
        goto LAB_1009d6960;
      }
      uVar2 = uVar2 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar6 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar6);
  local_98[0] = *unaff_x20;
  FUN_1009d6980(param_2,uVar2,lVar6);
  *unaff_x20 = local_98[0];
  uVar4 = 1;
LAB_1009d6960:
  *param_1 = (char)param_2;
  return uVar4;
}



/* Address: 0x1009d6980 | FUN_1009d6980 */

void FUN_1009d6980(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  Hasher HVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_88 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1009d6cc8();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1009d6ab8(uVar4 + 1);
    }
    else {
      FUN_1009d6e08();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    HVar2.unknown = auStack_88;
    FUN_1001a7d88(HVar2.unknown,param_1);
    param_2 = Swift::Hasher::_finalize(HVar2);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        uVar3 = (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + param_2);
        FUN_1001a7d78(uVar3,param_1);
        if ((uVar3 & 1) != 0) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d6ab8);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_2 & 0x3f);
  *(char *)(*(long *)(lVar5 + 0x30) + param_2) = (char)param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d6aa8);
  (*pcVar1)();
}



/* Address: 0x1009d6ab8 | FUN_1009d6ab8 */

void FUN_1009d6ab8(long param_1)

{
  __int64 capacity;
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  Hasher HVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100ff34f8;
  FUN_1000f7830(&DAT_100ff34f8,&DAT_100c8c9a0);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009d6c90:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(original + 0x38);
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar13 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d6cc4);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar13) goto LAB_1009d6c90;
        uVar12 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar13 = lVar8;
    }
    uVar1 = *(undefined1 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar7) | lVar13 << 6));
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    HVar5.unknown = auStack_a8;
    FUN_1001a7d88(HVar5.unknown,uVar1);
    uVar6 = Swift::Hasher::_finalize(HVar5);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var4 + uVar9 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d6cc8);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar7 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar9 * 8 + 0x38) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar9 * 8 + 0x38);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar9 + 0x38) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar9 + 0x38);
    *(undefined1 *)(*(long *)(p_Var4 + 0x30) + uVar7) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar8 = lVar13;
  } while( true );
}



/* Address: 0x1009d6cc8 | FUN_1009d6cc8 */

void FUN_1009d6cc8(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100ff34f8;
  FUN_1000f7830(&DAT_100ff34f8,&DAT_100c8c9a0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d6e08);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1009d6de8;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(p_Var3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(original + 0x30) + uVar8);
    } while( true );
  }
LAB_1009d6de8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1009d6e08 | FUN_1009d6e08 */

void FUN_1009d6e08(long param_1)

{
  __int64 capacity;
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  Hasher HVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100ff34f8;
  FUN_1000f7830(&DAT_100ff34f8,&DAT_100c8c9a0);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009d7028:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var13 = original + 0x38;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var13;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar14 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d7058);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1009d7028;
        }
        uVar12 = *(ulong *)(p_Var13 + lVar14 * 8);
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar14 = lVar8;
    }
    uVar1 = *(undefined1 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar7) | lVar14 << 6));
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    HVar5.unknown = auStack_a8;
    FUN_1001a7d88(HVar5.unknown,uVar1);
    uVar6 = Swift::Hasher::_finalize(HVar5);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var4 + uVar9 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d705c);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar7 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar9 * 8 + 0x38) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar9 * 8 + 0x38);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar9 + 0x38) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar9 + 0x38);
    *(undefined1 *)(*(long *)(p_Var4 + 0x30) + uVar7) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar8 = lVar14;
  } while( true );
}



/* Address: 0x1009d705c | FUN_1009d705c */

void FUN_1009d705c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009d70b0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009d7078 | FUN_1009d7078 */

void FUN_1009d7078(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009d71b8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009d7094 | FUN_1009d7094 */

void FUN_1009d7094(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009d72c0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009d70b0 | FUN_1009d70b0 */

undefined * FUN_1009d70b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d71b8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff31f0;
    FUN_1000f7830(&DAT_100ff31f0,&DAT_100c8c5f8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f26610);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009d71b8 | FUN_1009d71b8 */

undefined * FUN_1009d71b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d72c0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff34d8;
    FUN_1000f7830(&DAT_100ff34d8,&DAT_100c8c980);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009d72c0 | FUN_1009d72c0 */

undefined * FUN_1009d72c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d73f0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff31c0;
    FUN_1000f7830(&DAT_100ff31c0,&DAT_100c8c5c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff31c8;
    FUN_1000f7830(&DAT_100ff31c8,&DAT_100c8c5d0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009d73f0 | FUN_1009d73f0 */

ulong FUN_1009d73f0(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d74c0);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d74c4);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_1009c9458();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_1009c9458();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100db7730;
  SVar8.str = (char *)0xd000000000000017;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d758c);
  (*pcVar3)();
}



/* Address: 0x1009d758c | FUN_1009d758c */

undefined * FUN_1009d758c(undefined *param_1)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  __int64 _Var10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var10 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (_Var10 == 0) {
    lVar14 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar11 = 0;
    lVar14 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar15 = (ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d7754);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        _swift_retain(uVar13);
      }
      else {
        uVar13 = uVar11;
        FUN_1009d73f0(uVar11,param_1);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d770c);
        (*pcVar3)();
      }
      lVar12 = uVar11 + 1;
      puVar5 = puVar9;
      if (lVar14 == 0) {
        uVar7 = *(ulong *)(puVar9 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d775c);
          (*pcVar3)();
        }
        uVar8 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar8 = 1;
        }
        puVar5 = &DAT_100ff31d0;
        FUN_1000f7830(&DAT_100ff31d0,&DAT_100c8c5d8);
        _swift_allocObject();
        puVar6 = puVar5;
        _malloc_size();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar8;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar9 + 0x18) >> 1;
        if (*(long *)(puVar9 + 0x10) != 0) {
          if ((puVar5 != puVar9) || (puVar9 + 0x20 + uVar7 * 0x10 <= puVar6)) {
            _memmove(puVar6,puVar9 + 0x20,uVar7 << 4);
          }
          *(undefined8 *)(puVar9 + 0x10) = 0;
        }
        puVar15 = (ulong *)(puVar6 + uVar7 * 0x10);
        lVar14 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - uVar7;
        _swift_release(puVar9);
      }
      bVar4 = SBORROW8(lVar14,1);
      lVar14 = lVar14 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d7758);
        (*pcVar3)();
      }
      *puVar15 = uVar11;
      puVar15[1] = uVar13;
      uVar11 = uVar11 + 1;
      puVar9 = puVar5;
      puVar15 = puVar15 + 2;
    } while (lVar12 != _Var10);
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar11 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar11,lVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d7778);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar11 - lVar14;
  }
  return puVar5;
}



/* Address: 0x1009d7778 | FUN_1009d7778 */

Set<undefined> FUN_1009d7778(long param_1)

{
  long minimumCapacity;
  undefined1 *puVar1;
  undefined1 uStack_39;
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  FUN_1009d8f20();
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x20);
    do {
      FUN_1009d6884(&uStack_39,*puVar1);
      minimumCapacity = minimumCapacity + -1;
      puVar1 = puVar1 + 1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x1009d77e8 | FUN_1009d77e8 */

void FUN_1009d77e8(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_148 [96];
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68 [3];
  
  _swift_defaultActor_initialize();
  uVar6 = param_1[1];
  uVar5 = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  FUN_1009d7778();
  _swift_bridgeObjectRelease(uVar6);
  uVar7 = param_1[2];
  uVar4 = uVar7;
  FUN_1009d6780(uVar7,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d7980);
    (*pcVar2)();
  }
  lVar9 = param_1[3];
  local_68[0] = lVar9;
  _swift_beginAccess(lVar9 + 0x10,auStack_e8,0,0);
  if (*(undefined **)(lVar9 + 0x10) != (undefined *)0xd00000000000002a ||
      *(undefined **)(lVar9 + 0x18) != (undefined *)0x8000000100db7a70) {
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(lVar9 + 0x10),
                       (_StringGuts)*(undefined **)(lVar9 + 0x18),(_StringComparisonResult)0x2a);
    lVar1 = _TtC16ServiceLifecycle12ServiceGroup::state;
    if (!bVar3) {
      uVar8 = *param_1;
      *(undefined8 *)(unaff_x20 + _TtC16ServiceLifecycle12ServiceGroup::state) = uVar8;
      uVar5 = 0;
      FUN_1009d7ca4(0);
      _swift_storeEnumTagMultiPayload(unaff_x20 + lVar1,uVar5,0);
      *(undefined8 *)(unaff_x20 + 0x108) = uVar6;
      *(ulong *)(unaff_x20 + 0x110) = uVar7;
      *(long *)(unaff_x20 + 0x70) = lVar9;
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      local_a0 = param_1[10];
      uStack_88 = param_1[0xd];
      uStack_90 = param_1[0xc];
      uStack_78 = param_1[0xf];
      local_80 = param_1[0xe];
      uStack_c8 = param_1[5];
      local_d0 = param_1[4];
      uStack_b8 = param_1[7];
      local_c0 = param_1[6];
      *(undefined8 *)(unaff_x20 + 0x90) = uStack_b8;
      *(undefined8 *)(unaff_x20 + 0x88) = local_c0;
      *(undefined8 *)(unaff_x20 + 0x80) = uStack_c8;
      *(undefined8 *)(unaff_x20 + 0x78) = local_d0;
      *(undefined8 *)(unaff_x20 + 0xd0) = uStack_78;
      *(undefined8 *)(unaff_x20 + 200) = local_80;
      *(undefined8 *)(unaff_x20 + 0xb0) = uStack_98;
      *(undefined8 *)(unaff_x20 + 0xa8) = local_a0;
      *(undefined8 *)(unaff_x20 + 0xa0) = uStack_a8;
      *(undefined8 *)(unaff_x20 + 0x98) = uStack_b0;
      *(undefined8 *)(unaff_x20 + 0xc0) = uStack_88;
      *(undefined8 *)(unaff_x20 + 0xb8) = uStack_90;
      *(undefined1 *)(unaff_x20 + 0xe8) = *(undefined1 *)(param_1 + 0x12);
      uVar5 = param_1[0x10];
      *(undefined8 *)(unaff_x20 + 0xe0) = param_1[0x11];
      *(undefined8 *)(unaff_x20 + 0xd8) = uVar5;
      *(undefined1 *)(unaff_x20 + 0x100) = *(undefined1 *)(param_1 + 0x15);
      uVar5 = param_1[0x13];
      *(undefined8 *)(unaff_x20 + 0xf8) = param_1[0x14];
      *(undefined8 *)(unaff_x20 + 0xf0) = uVar5;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      FUN_1009d8ee4(local_68,auStack_148);
      FUN_1009d8ea8(&local_d0,auStack_148);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d7984);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d7988);
  (*pcVar2)();
}



/* Address: 0x1009d7988 | FUN_1009d7988 */

undefined8 FUN_1009d7988(undefined8 param_1)

{
  FUN_1009da3fc();
  return param_1;
}



/* Address: 0x1009d79bc | FUN_1009d79bc */

undefined8 FUN_1009d79bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1009da464(param_2,param_1);
  return param_2;
}



/* Address: 0x1009d79f8 | FUN_1009d79f8 */

void FUN_1009d79f8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3280,&TargetClassDescriptor_100cc8830);
  return;
}



/* Address: 0x1009d7a0c | FUN_1009d7a0c */

void FUN_1009d7a0c(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long alStack_160 [4];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *local_70 [2];
  
  lVar4 = 0;
  FUN_1009d7ca4();
  puVar6 = (undefined8 *)
           ((long)alStack_160 -
           (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  _swift_defaultActor_initialize();
  if (*(long *)(*param_2 + 0x10) == 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
      _swift_bridgeObjectRelease(param_1);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_70[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      alStack_160[2] = lVar4;
      alStack_160[3] = param_3;
      FUN_1009d705c(0,lVar7,0);
      lVar4 = param_1 + 0x20;
      alStack_160[1] = param_1;
      do {
        puVar5 = local_70[0];
        FUN_100076688(lVar4,auStack_140);
        FUN_100076688(auStack_140,&local_d0);
        uStack_a8 = uStack_a8 & 0xffffffffffff0000;
        local_e0 = 0;
        uStack_d8 = 0xe000000000000000;
        FUN_100004640(auStack_140,local_128);
        Swift::DefaultStringInterpolation::_appendInterpolation();
        uVar2 = uStack_d8;
        lVar8 = local_e0;
        FUN_100004594(auStack_140);
        local_a0 = lVar8;
        lStack_98 = uVar2;
        uVar1 = *(ulong *)(puVar5 + 0x10);
        local_70[0] = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          FUN_1009d705c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        puVar5 = local_70[0];
        *(ulong *)(local_70[0] + 0x10) = uVar1 + 1;
        *(ulong *)(local_70[0] + uVar1 * 0x40 + 0x48) = uStack_a8;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x40) = local_b0;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x58) = lStack_98;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x50) = local_a0;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x28) = lStack_c8;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x20) = local_d0;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x38) = lStack_b8;
        *(long *)(local_70[0] + uVar1 * 0x40 + 0x30) = lStack_c0;
        lVar4 = lVar4 + 0x28;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      _swift_bridgeObjectRelease(alStack_160[1]);
      param_3 = alStack_160[3];
      lVar4 = alStack_160[2];
    }
    *puVar6 = puVar5;
    _swift_storeEnumTagMultiPayload(puVar6,lVar4,0);
    FUN_1009d8e64(puVar6,unaff_x20 + _TtC16ServiceLifecycle12ServiceGroup::state);
    lVar8 = param_2[9];
    lVar7 = param_2[8];
    lStack_98 = param_2[0xb];
    local_a0 = param_2[10];
    lVar12 = param_2[7];
    lVar11 = param_2[6];
    uStack_a8 = param_2[9];
    local_b0 = param_2[8];
    lVar10 = param_2[0xd];
    lVar9 = param_2[0xc];
    lStack_78 = param_2[0xf];
    lStack_80 = param_2[0xe];
    lVar16 = param_2[0xb];
    lVar15 = param_2[10];
    lStack_88 = param_2[0xd];
    local_90 = param_2[0xc];
    lStack_c8 = param_2[5];
    local_d0 = param_2[4];
    lStack_b8 = param_2[7];
    lStack_c0 = param_2[6];
    lVar18 = param_2[5];
    lVar17 = param_2[4];
    lVar4 = param_2[0xe];
    lVar14 = param_2[0x11];
    lVar13 = param_2[0x10];
    *(long *)(unaff_x20 + 0xd0) = param_2[0xf];
    *(long *)(unaff_x20 + 200) = lVar4;
    *(long *)(unaff_x20 + 0xc0) = lVar10;
    *(long *)(unaff_x20 + 0xb8) = lVar9;
    *(long *)(unaff_x20 + 0xb0) = lVar16;
    *(long *)(unaff_x20 + 0xa8) = lVar15;
    *(long *)(unaff_x20 + 0xa0) = lVar8;
    *(long *)(unaff_x20 + 0x98) = lVar7;
    *(long *)(unaff_x20 + 0x90) = lVar12;
    *(long *)(unaff_x20 + 0x88) = lVar11;
    *(long *)(unaff_x20 + 0x80) = lVar18;
    *(long *)(unaff_x20 + 0x78) = lVar17;
    local_e0 = param_2[1];
    local_70[0] = (undefined *)param_2[2];
    *(long *)(unaff_x20 + 0x108) = local_e0;
    *(undefined **)(unaff_x20 + 0x110) = local_70[0];
    *(long *)(unaff_x20 + 0x70) = param_3;
    *(char *)(unaff_x20 + 0xe8) = (char)param_2[0x12];
    *(long *)(unaff_x20 + 0xe0) = lVar14;
    *(long *)(unaff_x20 + 0xd8) = lVar13;
    lVar7 = param_2[0x14];
    lVar4 = param_2[0x13];
    *(char *)(unaff_x20 + 0x100) = (char)param_2[0x15];
    *(long *)(unaff_x20 + 0xf8) = lVar7;
    *(long *)(unaff_x20 + 0xf0) = lVar4;
    FUN_1000f8cac(&local_e0,auStack_140,&DAT_100ff34e8,&DAT_100c8c990);
    FUN_1000f8cac(local_70,auStack_140,&DAT_100ff34e8,&DAT_100c8c990);
    FUN_1009d8ea8(&local_d0,auStack_140);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d7ca4);
  (*pcVar3)();
}


