/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a58868 | FUN_100a58868 */

void FUN_100a58868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a588c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  _swift_task_switch(FUN_100a588fc,0,0);
  return;
}



/* Address: 0x100a588fc | FUN_100a588fc */

void FUN_100a588fc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  auVar3 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x28),
                    *(undefined1 (*) [16])(unaff_x22 + 0x28),8,1);
  puVar2[1] = auVar3._8_8_;
  *puVar2 = auVar3._0_8_;
  *(int *)(puVar2 + 2) = (int)uVar1;
  *(char *)((long)puVar2 + 0x16) = (char)((ulong)uVar1 >> 0x30);
  *(short *)((long)puVar2 + 0x14) = (short)((ulong)uVar1 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x000100a5892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a58930 | FUN_100a58930 */

void FUN_100a58930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a58998;
  FUN_100a66b68();
  return;
}



/* Address: 0x100a58998 | FUN_100a58998 */

void FUN_100a58998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    pcVar2 = FUN_100a54970;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar3);
  return;
}



/* Address: 0x100a58a78 | FUN_100a58a78 */

void FUN_100a58a78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  FUN_100a586f8(uVar1,uVar2,uVar3);
  FUN_10026569c(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100a58abc | FUN_100a58abc */

void FUN_100a58abc(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [72];
  undefined8 local_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  short local_60;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x60));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58bc0);
    (*pcVar1)();
  }
  uStack_78 = *(ulong *)(lVar4 + 0x38);
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  uStack_68 = *(undefined8 *)(lVar4 + 0x48);
  uStack_70 = *(undefined8 *)(lVar4 + 0x40);
  lVar7 = *(long *)(lVar4 + 0x18);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  uVar9 = *(undefined8 *)(lVar4 + 0x28);
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  local_60 = *(short *)(lVar4 + 0x50);
  local_a0 = uVar6;
  lStack_98 = lVar7;
  uStack_90 = uVar8;
  local_88 = uVar9;
  local_80 = uVar5;
  if (local_60 < 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x60));
    if (iVar2 != 0) goto LAB_100a58bc0;
  }
  else {
    uVar3 = uStack_78 & 0xff;
    FUN_100a5a69c(&local_a0,auStack_e8);
    _swift_bridgeObjectRelease(uVar8);
    _swift_release(uVar6);
    FUN_1001b9e60(uVar9,uVar5,uVar3);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x60));
    if (iVar2 != 0) {
LAB_100a58bc0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58bc4);
      (*pcVar1)();
    }
    if (lVar7 != 0) {
      _swift_retain(lVar7);
      _swift_retain();
      FUN_100910ab0(FUN_100a5a694);
      _swift_release_n(lVar7,2);
      _swift_release();
    }
  }
  return;
}



/* Address: 0x100a58bc4 | FUN_100a58bc4 */

/* WARNING: Removing unreachable block (ram,0x000100a58c68) */
/* WARNING: Removing unreachable block (ram,0x000100a58df8) */

void FUN_100a58bc4(char param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CancellationError CVar6;
  CancellationError CVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  ulong uVar5;
  
  lVar10 = *(long *)(param_2 + 0x10);
  uVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x60));
  if (uVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58ddc);
    (*pcVar1)();
  }
  FUN_100a58dfc();
  uVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x60));
  uVar5 = (ulong)uVar3;
  if (uVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58de0);
    (*pcVar1)();
  }
  if ((uVar2 & 0xff) != 1) {
    if (param_1 == '\x01') {
      CVar6 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar6;
      FUN_100a5784c();
      _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
      Swift::CancellationError::init();
      _swift_errorRetain(CVar6.unknown);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x60));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58dec);
        (*pcVar1)();
      }
      uStack_78 = *(undefined8 *)(lVar10 + 0x28);
      local_80 = *(undefined8 *)(lVar10 + 0x20);
      uStack_68 = *(undefined8 *)(lVar10 + 0x38);
      local_70 = *(undefined8 *)(lVar10 + 0x30);
      uStack_58 = *(undefined8 *)(lVar10 + 0x48);
      uStack_60 = *(undefined8 *)(lVar10 + 0x40);
      local_50 = *(undefined2 *)(lVar10 + 0x50);
      uStack_88 = *(undefined8 *)(lVar10 + 0x18);
      local_90 = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined2 *)(lVar10 + 0x50) = 0x8000;
      FUN_100a57abc(&local_90);
      lVar8 = *(long *)(lVar10 + 0x58);
      _swift_retain(lVar8);
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x60));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58df0);
        (*pcVar1)();
      }
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x10);
        _swift_errorRetain(CVar6.unknown);
        _swift_retain(lVar8);
        FUN_100a56d20(CVar6.unknown,uVar9);
        _swift_release(lVar8);
        _swift_errorRelease(CVar6.unknown);
      }
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x60));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58df4);
        (*pcVar1)();
      }
      _swift_release(*(undefined8 *)(lVar10 + 0x58));
      *(undefined8 *)(lVar10 + 0x58) = 0;
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x60));
      FUN_10090ef88(CVar6.unknown,0,0,1);
      _swift_errorRelease(CVar6.unknown);
      _swift_release(lVar8);
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58df8);
        (*pcVar1)();
      }
    }
    else {
      FUN_100a59024();
      _swift_retain();
      FUN_100a59244();
      _swift_release_n(uVar5,2);
    }
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x60));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58de4);
      (*pcVar1)();
    }
    FUN_100a5956c(&local_90,lVar10 + 0x10);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x60));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58de8);
      (*pcVar1)();
    }
    if ((char)local_90 != '\x01') {
      FUN_100a58abc();
    }
  }
  return;
}



/* Address: 0x100a58dfc | FUN_100a58dfc */

undefined8 FUN_100a58dfc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_148 [72];
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ushort local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ushort local_70;
  
  local_b0 = *unaff_x20;
  uStack_a8 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uStack_88 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  uVar5 = unaff_x20[7];
  uVar6 = (ushort)unaff_x20[8];
  local_a0 = uVar1;
  uStack_98 = uVar4;
  local_90 = uVar2;
  local_80 = uVar3;
  uStack_78 = uVar5;
  if (uVar6 >> 0xe == 0) {
    local_70 = uVar6 & 0x3fff;
    uVar7 = uVar6 >> 8 & 0x3f;
    if (uVar7 == 0) goto LAB_100a58f50;
    if (uVar7 == 1) {
      uStack_d8 = unaff_x20[5];
      local_e0 = unaff_x20[4];
      uStack_c8 = unaff_x20[7];
      local_d0 = unaff_x20[6];
      uVar8 = local_b0 & 0xffffffffffffff9;
      uVar9 = uStack_a8 & 0xffffffffffffff8;
      uVar10 = uStack_88 & 0xff;
      local_c0 = (ushort)unaff_x20[8];
      uStack_f8 = unaff_x20[1];
      local_100 = *unaff_x20;
      uStack_e8 = unaff_x20[3];
      local_f0 = unaff_x20[2];
      FUN_100a5a6d0(&local_b0,auStack_148);
      FUN_100a57abc(&local_100);
      *unaff_x20 = uVar8;
      unaff_x20[1] = uVar9;
      unaff_x20[2] = uVar1;
      unaff_x20[3] = uVar4;
      unaff_x20[4] = uVar2;
      unaff_x20[5] = uVar10;
      unaff_x20[6] = uVar3;
      unaff_x20[7] = uVar5;
      *(ushort *)(unaff_x20 + 8) = uVar6 & 1 | 0x200;
      return 1;
    }
  }
  else {
    if (uVar6 >> 0xe != 1) {
      return 1;
    }
    local_70 = uVar6 & 0x3fff;
    uVar7 = uVar6 >> 8 & 0x3f;
    if (uVar7 == 0) {
LAB_100a58f50:
      local_70 = uVar6 & 0x3fff;
      uStack_d8 = unaff_x20[5];
      local_e0 = unaff_x20[4];
      uStack_c8 = unaff_x20[7];
      local_d0 = unaff_x20[6];
      uVar8 = local_b0 & 0xffffffffffffff9;
      uVar9 = uStack_a8 & 0xffffffffffffff8;
      uVar10 = uStack_88 & 0xff;
      local_c0 = (ushort)unaff_x20[8];
      uStack_f8 = unaff_x20[1];
      local_100 = *unaff_x20;
      uStack_e8 = unaff_x20[3];
      local_f0 = unaff_x20[2];
      FUN_100a5a6d0(&local_b0,auStack_148);
      FUN_100a57abc(&local_100);
      *unaff_x20 = uVar8;
      unaff_x20[1] = uVar9;
      unaff_x20[2] = uVar1;
      unaff_x20[3] = uVar4;
      unaff_x20[4] = uVar2;
      unaff_x20[5] = uVar10;
      unaff_x20[6] = uVar3;
      unaff_x20[7] = uVar5;
      *(ushort *)(unaff_x20 + 8) = uVar6 & 1 | 0x100;
      return 0;
    }
    if (uVar7 == 1) {
      uVar8 = local_b0 & 0xffffffffffffff9;
      uVar9 = uStack_a8 & 0xffffffffffffff8;
      uStack_d8 = unaff_x20[5];
      local_e0 = unaff_x20[4];
      uStack_c8 = unaff_x20[7];
      local_d0 = unaff_x20[6];
      uVar10 = uStack_88 & 0xff;
      local_c0 = (ushort)unaff_x20[8];
      uStack_f8 = unaff_x20[1];
      local_100 = *unaff_x20;
      uStack_e8 = unaff_x20[3];
      local_f0 = unaff_x20[2];
      FUN_100a5a6d0(&local_b0,auStack_148);
      FUN_100a57abc(&local_100);
      *unaff_x20 = uVar8;
      unaff_x20[1] = uVar9;
      unaff_x20[2] = uVar1;
      unaff_x20[3] = uVar4;
      unaff_x20[4] = uVar2;
      unaff_x20[5] = uVar10;
      unaff_x20[6] = uVar3;
      unaff_x20[7] = uVar5;
      *(ushort *)(unaff_x20 + 8) = uVar6 & 1 | 0x4200;
      return 1;
    }
  }
  local_c0 = uVar6 & 0x3fff;
  local_100 = local_b0;
  uStack_f8 = uStack_a8;
  local_f0 = uVar1;
  uStack_e8 = uVar4;
  local_e0 = uVar2;
  uStack_d8 = uStack_88;
  local_d0 = uVar3;
  uStack_c8 = uVar5;
  local_70 = local_c0;
  FUN_100a5a6d0(&local_b0,auStack_148);
  FUN_100a5a704(&local_100);
  return 1;
}



/* Address: 0x100a59024 | FUN_100a59024 */

undefined8 FUN_100a59024(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined7 extraout_var;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined4 uVar11;
  long lVar12;
  undefined8 local_198;
  ulong local_190;
  uint local_188;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined5 uStack_17e;
  undefined8 uStack_179;
  undefined8 local_171;
  undefined8 uStack_169;
  undefined8 local_161;
  undefined8 uStack_159;
  undefined1 local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined2 uStack_fc;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined5 uStack_f6;
  undefined3 uStack_f1;
  undefined5 uStack_ee;
  undefined3 uStack_e9;
  undefined5 local_e6;
  undefined3 uStack_e1;
  undefined5 uStack_de;
  undefined1 uStack_d9;
  undefined2 uStack_d8;
  undefined5 uStack_d6;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 local_c9;
  char local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined8 local_96;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined8 uStack_80;
  char local_78;
  undefined8 *puVar8;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x60));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a59240);
    (*pcVar5)();
  }
  FUN_100a59784(&local_c0);
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x60));
  uVar4 = uStack_f9;
  uVar3 = uStack_fa;
  uVar2 = uStack_fc;
  uVar1 = local_100;
  if (iVar7 == 0) {
    uStack_fa = (undefined1)(local_b0 >> 0x30);
    uStack_f9 = (undefined1)(local_b0 >> 0x38);
    uStack_fc = (undefined2)(local_b0 >> 0x20);
    local_100 = (uint)local_b0;
    if (local_78 == '\x01') {
      uStack_ee = (undefined5)uStack_9e;
      uStack_e9 = (undefined3)((ulong)uStack_9e >> 0x28);
      uStack_f6 = (undefined5)local_a6;
      uStack_f1 = (undefined3)((ulong)local_a6 >> 0x28);
      uStack_de = (undefined5)uStack_8e;
      uStack_d9 = (undefined1)((uint6)uStack_8e >> 0x28);
      local_e6 = (undefined5)local_96;
      uStack_e1 = (undefined3)((ulong)local_96 >> 0x28);
      uStack_d0 = (undefined7)uStack_80;
      local_c9 = (undefined1)((ulong)uStack_80 >> 0x38);
      uStack_d6 = (undefined5)uStack_86;
      uStack_d1 = (undefined1)((uint6)uStack_86 >> 0x28);
      uStack_f8 = local_a8;
      uStack_f7 = local_a7;
      uStack_148 = CONCAT53(uStack_ee,uStack_f1);
      local_150 = CONCAT53(uStack_f6,CONCAT12(local_a7,CONCAT11(local_a8,uStack_f9)));
      uStack_138 = CONCAT53(uStack_de,uStack_e1);
      uStack_140 = CONCAT53(local_e6,uStack_e9);
      uStack_128 = CONCAT71(uStack_d0,uStack_d1);
      local_130 = CONCAT53(uStack_d6,CONCAT21(uStack_88,uStack_d9));
      uVar10 = local_c0;
      uVar11 = (int)(uStack_b8 >> 0x20);
    }
    else {
      local_198 = local_c0;
      local_190 = uStack_b8;
      uStack_180 = local_a8;
      uStack_17f = local_a7;
      local_188 = local_100;
      uStack_184 = uStack_fc;
      uStack_182 = uStack_fa;
      uStack_181 = uStack_f9;
      local_100 = uVar1;
      uStack_fc = uVar2;
      uStack_fa = uVar3;
      uStack_f9 = uVar4;
      FUN_100a5999c(&local_110,&local_198);
      uStack_b8 = (ulong)local_108;
      local_b0 = (ulong)local_100;
      uStack_148 = CONCAT53(uStack_ee,uStack_f1);
      local_150 = CONCAT53(uStack_f6,CONCAT12(uStack_f7,CONCAT11(uStack_f8,uStack_f9)));
      uStack_138 = CONCAT53(uStack_de,uStack_e1);
      uStack_140 = CONCAT53(local_e6,uStack_e9);
      uStack_128 = CONCAT71(uStack_d0,uStack_d1);
      local_130 = CONCAT53(uStack_d6,CONCAT21(uStack_d8,uStack_d9));
      uVar10 = local_110;
      uVar11 = uStack_104;
      if (local_c8 != '\x01') {
        return local_110;
      }
    }
    uVar3 = uStack_fa;
    uVar2 = uStack_fc;
    local_190 = CONCAT44(uVar11,(int)uStack_b8);
    uStack_179 = uStack_148;
    uStack_181 = (undefined1)local_150;
    uStack_180 = (undefined1)((ulong)local_150 >> 8);
    uStack_17f = (undefined1)((ulong)local_150 >> 0x10);
    uStack_17e = (undefined5)((ulong)local_150 >> 0x18);
    uStack_169 = uStack_138;
    local_171 = uStack_140;
    uStack_159 = uStack_128;
    local_161 = local_130;
    local_151 = local_c9;
    local_188 = (int)local_b0;
    uStack_184 = uStack_fc;
    uStack_182 = uStack_fa;
    local_120 = local_c9;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar8 = (undefined8 *)CONCAT71(extraout_var,bVar6);
    puVar9 = puVar8;
    if ((bVar6 & 1) != 0) {
      FUN_100a500c0();
      puVar9 = &local_198;
      _swift_willThrowTypedImpl(puVar9,&DAT_100f2de38,puVar8);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar9,0,0);
    *(undefined8 *)((long)puVar9 + 0x1f) = uStack_148;
    *(undefined8 *)((long)puVar9 + 0x17) = local_150;
    *puVar9 = uVar10;
    *(int *)(puVar9 + 1) = (int)uStack_b8;
    *(undefined4 *)((long)puVar9 + 0xc) = uVar11;
    *(int *)(puVar9 + 2) = (int)local_b0;
    *(undefined2 *)((long)puVar9 + 0x14) = uVar2;
    *(undefined1 *)((long)puVar9 + 0x16) = uVar3;
    *(undefined8 *)((long)puVar9 + 0x2f) = uStack_138;
    *(undefined8 *)((long)puVar9 + 0x27) = uStack_140;
    *(undefined8 *)((long)puVar9 + 0x3f) = uStack_128;
    *(undefined8 *)((long)puVar9 + 0x37) = local_130;
    *(undefined1 *)((long)puVar9 + 0x47) = local_120;
    return uVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a59244);
  (*pcVar5)();
}



/* Address: 0x100a59244 | FUN_100a59244 */

void FUN_100a59244(ulong param_1,undefined8 param_2,ulong param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_238 [72];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined2 local_1b0;
  ulong local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ushort local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  short local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  short local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  short local_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x60));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59550);
    (*pcVar2)();
  }
  uVar5 = (ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)param_2);
  FUN_100a59e98(uVar5);
  if ((long)uVar5 < lVar4) {
    uStack_98 = *(undefined8 *)(lVar6 + 0x28);
    local_a0 = *(undefined8 *)(lVar6 + 0x20);
    uStack_88 = *(undefined8 *)(lVar6 + 0x38);
    local_90 = *(undefined8 *)(lVar6 + 0x30);
    local_78 = *(undefined8 *)(lVar6 + 0x48);
    uStack_80 = *(undefined8 *)(lVar6 + 0x40);
    uStack_70 = CONCAT62(uStack_70._2_6_,*(undefined2 *)(lVar6 + 0x50));
    uStack_a8 = *(undefined8 *)(lVar6 + 0x18);
    local_b0 = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined2 *)(lVar6 + 0x50) = 0x8000;
    FUN_100a57abc(&local_b0);
  }
  lVar4 = *(long *)(lVar6 + 0x58);
  uStack_138 = *(undefined8 *)(lVar6 + 0x28);
  local_140 = *(undefined8 *)(lVar6 + 0x20);
  uStack_128 = *(undefined8 *)(lVar6 + 0x38);
  local_130 = *(undefined8 *)(lVar6 + 0x30);
  uStack_118 = *(undefined8 *)(lVar6 + 0x48);
  uStack_120 = *(undefined8 *)(lVar6 + 0x40);
  local_110 = *(short *)(lVar6 + 0x50);
  uStack_148 = *(undefined8 *)(lVar6 + 0x18);
  local_150 = *(undefined8 *)(lVar6 + 0x10);
  local_a0 = *(undefined8 *)(lVar6 + 0x18);
  uStack_a8 = *(undefined8 *)(lVar6 + 0x10);
  local_90 = *(undefined8 *)(lVar6 + 0x28);
  uStack_98 = *(undefined8 *)(lVar6 + 0x20);
  uStack_80 = *(undefined8 *)(lVar6 + 0x38);
  uStack_88 = *(undefined8 *)(lVar6 + 0x30);
  uStack_70 = *(undefined8 *)(lVar6 + 0x48);
  local_78 = *(undefined8 *)(lVar6 + 0x40);
  local_68 = local_110;
  _swift_retain(lVar4);
  FUN_100a5a69c(&local_150,&local_100);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x60));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59554);
    (*pcVar2)();
  }
  uStack_d8 = uStack_80;
  local_e0 = uStack_88;
  uStack_c8 = uStack_70;
  uStack_d0 = local_78;
  local_c0 = local_68;
  uStack_f8 = local_a0;
  local_100 = uStack_a8;
  uStack_e8 = local_90;
  uStack_f0 = uStack_98;
  if (lVar4 != 0) {
    if (uVar5 == 0) {
      FUN_100a56d20(0,*(undefined8 *)(lVar4 + 0x10));
      iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x60));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59558);
        (*pcVar2)();
      }
      _swift_release(*(undefined8 *)(lVar6 + 0x58));
      *(undefined8 *)(lVar6 + 0x58) = 0;
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x60));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59560);
        (*pcVar2)();
      }
    }
    FUN_100a9f7d4(param_1,param_2,param_3 & 0xffffffffffffff,*(undefined8 *)(lVar4 + 0x10));
    if (local_c0 < 0) {
      FUN_100a56d20(0,*(undefined8 *)(lVar4 + 0x10));
      iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x60));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a5955c);
        (*pcVar2)();
      }
      _swift_release(*(undefined8 *)(lVar6 + 0x58));
      *(undefined8 *)(lVar6 + 0x58) = 0;
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x60));
      _swift_release(lVar4);
      if (iVar3 == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a594b8);
      (*pcVar2)();
    }
    if ((param_1 & 0xff) != 0) {
      if (((uint)param_1 & 0xff) != 1) {
        iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x60));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59568);
          (*pcVar2)();
        }
        uStack_188 = *(undefined8 *)(lVar6 + 0x28);
        local_190 = *(undefined8 *)(lVar6 + 0x20);
        uStack_178 = *(undefined8 *)(lVar6 + 0x38);
        local_180 = *(undefined8 *)(lVar6 + 0x30);
        uStack_168 = *(undefined8 *)(lVar6 + 0x48);
        uStack_170 = *(undefined8 *)(lVar6 + 0x40);
        local_160 = *(undefined2 *)(lVar6 + 0x50);
        uStack_198 = *(undefined8 *)(lVar6 + 0x18);
        local_1a0 = *(ulong *)(lVar6 + 0x10);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(undefined2 *)(lVar6 + 0x50) = 0x8000;
        FUN_100a57abc(&local_1a0);
        iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x60));
        FUN_100a57abc(&local_100);
        _swift_release(lVar4);
        if (iVar3 == 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a5956c);
        (*pcVar2)();
      }
      iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x60));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59564);
        (*pcVar2)();
      }
      uVar1 = *(ushort *)(lVar6 + 0x50);
      if (uVar1 >> 0xe == 0) {
        uStack_198 = *(ulong *)(lVar6 + 0x18);
        local_1a0 = *(ulong *)(lVar6 + 0x10);
        uStack_188 = *(undefined8 *)(lVar6 + 0x28);
        local_190 = *(undefined8 *)(lVar6 + 0x20);
        uStack_178 = *(undefined8 *)(lVar6 + 0x38);
        local_180 = *(undefined8 *)(lVar6 + 0x30);
        uStack_168 = *(undefined8 *)(lVar6 + 0x48);
        uStack_170 = *(undefined8 *)(lVar6 + 0x40);
        uStack_1d8 = *(undefined8 *)(lVar6 + 0x28);
        local_1e0 = *(undefined8 *)(lVar6 + 0x20);
        uStack_1c8 = *(undefined8 *)(lVar6 + 0x38);
        uStack_1d0 = *(undefined8 *)(lVar6 + 0x30);
        uStack_1b8 = *(undefined8 *)(lVar6 + 0x48);
        local_1c0 = *(undefined8 *)(lVar6 + 0x40);
        local_1b0 = *(undefined2 *)(lVar6 + 0x50);
        uStack_1e8 = *(undefined8 *)(lVar6 + 0x18);
        local_1f0 = *(undefined8 *)(lVar6 + 0x10);
        *(ulong *)(lVar6 + 0x18) = uStack_198 & 0xffffffffffffff8;
        *(ulong *)(lVar6 + 0x10) = local_1a0 & 0xffffffffffffff9;
        *(ulong *)(lVar6 + 0x38) = (ulong)*(byte *)(lVar6 + 0x38);
        *(ushort *)(lVar6 + 0x50) = uVar1 & 0x301 | 0x4000;
        local_160 = uVar1;
        FUN_100a5a6d0(&local_1a0,auStack_238);
        FUN_100a57abc(&local_1f0);
      }
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x60));
      FUN_100a57abc(&local_100);
      _swift_release(lVar4);
      if (iVar3 == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59478);
      (*pcVar2)();
    }
    _swift_release(lVar4);
  }
  FUN_100a57abc(&local_100);
  return;
}



/* Address: 0x100a5956c | FUN_100a5956c */

void FUN_100a5956c(undefined1 *param_1,ulong *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 auStack_1b0 [72];
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ushort local_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ushort local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined2 local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  ushort local_40;
  
  uStack_160 = param_2[1];
  local_168 = *param_2;
  uStack_150 = param_2[3];
  local_158 = param_2[2];
  uStack_140 = param_2[5];
  local_148 = param_2[4];
  uStack_130 = param_2[7];
  local_138 = param_2[6];
  local_40 = (ushort)param_2[8];
  local_120 = local_168;
  uStack_118 = uStack_160;
  uStack_110 = local_158;
  uStack_108 = uStack_150;
  local_100 = local_148;
  uStack_f8 = uStack_140;
  local_f0 = local_138;
  uStack_e8 = uStack_130;
  local_80 = local_168;
  uStack_78 = uStack_160;
  local_70 = local_158;
  uStack_68 = uStack_150;
  local_60 = local_148;
  uStack_58 = uStack_140;
  local_50 = local_138;
  uStack_48 = uStack_130;
  if (local_40 >> 0xe == 0) {
    uVar1 = local_40 & 0x3fff;
    local_128 = local_40 & 0xff;
    local_e0 = local_128;
    uStack_c8 = param_2[1];
    local_d0 = *param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    uStack_a8 = param_2[5];
    local_b0 = param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    local_90 = (undefined2)param_2[8];
    param_2[1] = uStack_160 & 0xffffffffffffff8;
    *param_2 = local_168 & 0xffffffffffffff9;
    param_2[3] = uStack_150;
    param_2[2] = local_158;
    param_2[4] = local_148;
    param_2[5] = uStack_140 & 0xff;
    param_2[7] = uStack_130;
    param_2[6] = local_138;
    *(ushort *)(param_2 + 8) = local_40 & 1;
    FUN_100a5a69c(&local_80,auStack_1b0);
    FUN_100a5a6d0(&local_120,auStack_1b0);
    FUN_100a57abc(&local_d0);
    if (uVar1 < 0x100) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59784);
      (*pcVar2)();
    }
  }
  else {
    if (local_40 >> 0xe != 1) {
      uVar3 = 1;
      goto LAB_100a59768;
    }
    uVar1 = local_40 >> 8 & 0x3f;
    local_128 = local_40 & 0xff;
    local_e0 = local_128;
    uStack_c8 = param_2[1];
    local_d0 = *param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    uStack_a8 = param_2[5];
    local_b0 = param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    local_90 = (undefined2)param_2[8];
    param_2[1] = uStack_160 & 0xffffffffffffff8;
    *param_2 = local_168 & 0xffffffffffffff9;
    param_2[3] = uStack_150;
    param_2[2] = local_158;
    param_2[4] = local_148;
    param_2[5] = uStack_140 & 0xff;
    param_2[7] = uStack_130;
    param_2[6] = local_138;
    *(ushort *)(param_2 + 8) = local_40 & 1 | 0x4000;
    FUN_100a5a69c(&local_80,auStack_1b0);
    FUN_100a5a6d0(&local_120,auStack_1b0);
    FUN_100a57abc(&local_d0);
    if (uVar1 == 1) {
      FUN_100a5a704(&local_168);
      uVar3 = 1;
      goto LAB_100a59768;
    }
    if (uVar1 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59688);
      (*pcVar2)();
    }
  }
  FUN_100a5a704(&local_168);
  uVar3 = 0;
LAB_100a59768:
  *param_1 = uVar3;
  return;
}



/* Address: 0x100a59784 | FUN_100a59784 */

void FUN_100a59784(ulong *param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined1 uVar6;
  ushort uVar7;
  long *unaff_x20;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined6 uStack_168;
  undefined2 local_162;
  undefined6 uStack_160;
  ulong uStack_15a;
  undefined1 local_130;
  undefined7 uStack_12f;
  ulong local_128;
  ulong uStack_120;
  byte local_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 local_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  char *local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  ulong uStack_68;
  ushort local_60;
  
  uVar7 = *(ushort *)(unaff_x20 + 8);
  lStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  uVar12 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  lStack_98 = unaff_x20[1];
  lVar10 = *unaff_x20;
  lStack_88 = unaff_x20[3];
  pcVar9 = (char *)unaff_x20[2];
  if ((short)uVar7 < 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uStack_117 = 1;
  }
  else {
    _Var5.unknown = (undefined *)&local_e8;
    local_a0 = lVar10;
    local_90 = pcVar9;
    local_70 = uVar11;
    uStack_68 = uVar12;
    local_60 = uVar7;
    FUN_100a5a69c(&local_a0);
    iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x18));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a59998);
      (*pcVar2)();
    }
    uVar8 = (ulong)*(uint *)(lVar10 + 0x10);
    cVar1 = *(char *)(lVar10 + 0x14);
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x18));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a5999c);
      (*pcVar2)();
    }
    if (cVar1 == '\x01') {
      local_e8 = 0;
      local_e0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x24,_Var5);
      _swift_bridgeObjectRelease(local_e0);
      local_e8 = 0xd00000000000001f;
      local_e0 = 0x8000000100db8780;
      _swift_bridgeObjectRetain(pcVar9);
      FUN_100a57abc(&local_a0);
      pcVar4 = pcVar9;
      FUN_1005b32e4();
      SVar13.bridgeObject = _Var5.unknown;
      SVar13.str = pcVar4;
      SVar15.bridgeObject = param_5;
      SVar15.str = param_4;
      Swift::String::append(SVar13,SVar15);
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(_Var5.unknown);
      SVar14.bridgeObject = (void *)0xe300000000000000;
      SVar14.str = (char *)0x2e2927;
      SVar16.bridgeObject = param_5;
      SVar16.str = param_4;
      Swift::String::append(SVar14,SVar16);
      uStack_d8 = local_e0;
      uVar11 = local_e8;
      local_130 = 0;
      local_128 = local_e8;
      uStack_120 = local_e0;
      uStack_110 = 0x12;
      uStack_10e = 0xd00000000000;
      local_118 = 0;
      uStack_117 = 0;
      uStack_116 = 0;
      local_108 = 0x87a0;
      uStack_106 = 0x8000000100db;
      uStack_100 = 0x1f;
      uStack_fe = 0xd00000000000;
      uStack_f8 = 0x8760;
      uStack_f6 = 0x8000000100db;
      uStack_f0 = 0x1db;
      local_e8 = local_e8 & 0xffffffffffffff00;
      local_e0 = uVar11;
      uStack_c8 = 0xd000000000000012;
      local_d0 = 0;
      local_c0 = 0x8000000100db87a0;
      uStack_b8 = 0xd00000000000001f;
      local_b0 = 0x8000000100db8760;
      uStack_a8 = 0x1db;
      FUN_100a50050(&local_130,&local_180);
      FUN_100a5008c(&local_e8);
      uVar8 = CONCAT71(uStack_12f,local_130);
      uVar7 = (ushort)local_118;
      uStack_178 = CONCAT26(local_108,uStack_10e);
      local_180 = CONCAT26(uStack_110,uStack_116);
      uStack_170 = CONCAT26(uStack_100,uStack_106);
      uStack_168 = uStack_fe;
      uStack_15a = uStack_f0;
      local_162 = uStack_f8;
      uStack_160 = uStack_f6;
      uVar6 = 1;
      uVar11 = local_128;
      uVar12 = uStack_120;
    }
    else {
      FUN_100a57abc(&local_a0);
      uStack_117 = 0;
      uVar6 = 0;
    }
  }
  *param_1 = uVar8;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  *(char *)(param_1 + 3) = (char)uVar7;
  *(undefined1 *)((long)param_1 + 0x19) = uStack_117;
  *(undefined8 *)((long)param_1 + 0x22) = uStack_178;
  *(undefined8 *)((long)param_1 + 0x1a) = local_180;
  *(ulong *)((long)param_1 + 0x32) = CONCAT26(local_162,uStack_168);
  *(undefined8 *)((long)param_1 + 0x2a) = uStack_170;
  param_1[8] = uStack_15a;
  param_1[7] = CONCAT62(uStack_160,local_162);
  *(undefined1 *)(param_1 + 9) = uVar6;
  return;
}



/* Address: 0x100a5999c | FUN_100a5999c */

void FUN_100a5999c(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  ulong uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  uint *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auStack_e8 [24];
  long local_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 uStack_b9;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  uint local_88 [10];
  uint *puVar9;
  
  if (*(char *)((long)param_2 + 0x19) == '\x01') {
    FUN_1006116e8();
    lVar15 = *param_2;
    lVar14 = param_2[2];
    uVar2 = *(undefined2 *)((long)param_2 + 0x14);
    uVar1 = *(undefined1 *)((long)param_2 + 0x16);
    *param_1 = lVar15;
    param_1[1] = param_2[1];
    *(int *)(param_1 + 2) = (int)lVar14;
    *(undefined2 *)((long)param_1 + 0x14) = uVar2;
    *(undefined1 *)((long)param_1 + 0x16) = uVar1;
    *(undefined1 *)(param_1 + 9) = 0;
    _swift_retain(lVar15);
    return;
  }
  lVar14 = *param_2;
  if ((char)param_2[3] == '\x01') {
    lVar15 = *(long *)(param_3 + 0x20);
    FUN_1006116e8();
    local_d0 = *param_2;
    local_c0 = (int)param_2[2];
    local_bc = *(undefined2 *)((long)param_2 + 0x14);
    local_ba = *(undefined1 *)((long)param_2 + 0x16);
    uStack_c8 = param_2[1];
    _swift_retain(local_d0);
    if (0 < lVar15) {
      FUN_1006117fc(lVar15);
    }
    FUN_100612cb0();
    uVar1 = local_ba;
    uVar2 = local_bc;
    iVar5 = local_c0;
    lVar3 = local_d0;
    _swift_beginAccess(local_d0 + 0x18,auStack_e8,0,0);
    uVar16 = (uint)CONCAT21(uVar2,uVar1);
    lVar12 = *(long *)(lVar3 + 0x18) + (ulong)uVar16;
    uVar4 = uStack_c8._4_4_;
    uVar18 = (ulong)uStack_c8._4_4_;
    lVar13 = lVar12 + (ulong)(iVar5 - uVar16);
    FUN_10095a0a8();
    if (lVar13 == 0) {
      uVar8 = 0;
      lVar15 = 0;
    }
    else {
      uVar8 = lVar13 + uVar18;
      if (lVar15 < (long)(lVar12 - uVar18)) {
        lVar15 = uVar8 + lVar15;
      }
      else {
        lVar15 = lVar13 + lVar12;
      }
    }
    FUN_1005ac3a8(uVar8,lVar15,1,(int)lVar14);
    uVar16 = (uint)uVar8;
    if (((uint)lVar15 & 0xff) == 1) {
      local_88[0] = uVar16;
      bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar9 = (uint *)CONCAT71(extraout_var,bVar7);
      puVar10 = puVar9;
      if ((bVar7 & 1) != 0) {
        FUN_100a54208();
        puVar10 = local_88;
        _swift_willThrowTypedImpl(puVar10,&DAT_100ee42f8,puVar9);
      }
      FUN_100a54208();
      puVar11 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,puVar10,0,0);
      *puVar10 = uVar16;
      _swift_release(lVar3);
      local_88[0] = 0x64616572;
      local_88[1] = 0x7478654e;
      local_88[2] = 0x6e756843;
      local_88[3] = 0xef29286b;
      local_88[4] = 0x1f;
      local_88[5] = 0xd0000000;
      local_88[6] = 0xdb8760;
      local_88[7] = 0x80000001;
      local_88[8] = 0xfb;
      local_88[9] = 0;
      FUN_100a7e64c(&local_d0,0,puVar11,*(undefined8 *)(param_3 + 0x18),local_88);
      _swift_errorRelease(puVar11);
      param_1[5] = lStack_a8;
      param_1[4] = local_b0;
      param_1[7] = lStack_98;
      param_1[6] = lStack_a0;
      param_1[8] = local_90;
      param_1[1] = uStack_c8;
      *param_1 = local_d0;
      param_1[3] = lStack_b8;
      param_1[2] = CONCAT17(uStack_b9,CONCAT16(local_ba,CONCAT24(local_bc,local_c0)));
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e84);
      (*pcVar6)();
    }
    if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e88);
      (*pcVar6)();
    }
    if (CARRY4(uVar4,uVar16)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e90);
      (*pcVar6)();
    }
    *param_1 = lVar3;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c8;
    *(uint *)((long)param_1 + 0xc) = uVar4 + uVar16;
    *(int *)(param_1 + 2) = iVar5;
    *(undefined2 *)((long)param_1 + 0x14) = uVar2;
    *(undefined1 *)((long)param_1 + 0x16) = uVar1;
  }
  else {
    uVar18 = param_2[1];
    lVar14 = param_2[2] - uVar18;
    if (SBORROW8(param_2[2],uVar18)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e80);
      (*pcVar6)();
    }
    if (*(long *)(param_3 + 0x20) <= lVar14) {
      lVar14 = *(long *)(param_3 + 0x20);
    }
    FUN_1006116e8();
    local_d0 = *param_2;
    local_c0 = (int)param_2[2];
    local_bc = *(undefined2 *)((long)param_2 + 0x14);
    local_ba = *(undefined1 *)((long)param_2 + 0x16);
    uStack_c8 = param_2[1];
    _swift_retain(local_d0);
    if (0 < lVar14) {
      FUN_1006117fc(lVar14);
    }
    FUN_100612cb0();
    uVar1 = local_ba;
    uVar2 = local_bc;
    iVar5 = local_c0;
    lVar15 = local_d0;
    _swift_beginAccess(local_d0 + 0x18,auStack_e8,0,0);
    uVar16 = (uint)CONCAT21(uVar2,uVar1);
    uVar4 = uStack_c8._4_4_;
    lVar14 = *(long *)(lVar15 + 0x18) + (ulong)uVar16 + (ulong)(iVar5 - uVar16);
    uVar16 = uStack_c8._4_4_;
    FUN_10095a0a8();
    if (lVar14 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (int)lVar14 + uVar16;
    }
    FUN_1005ac430();
    uVar17 = (uint)uVar18;
    if ((uVar16 & 0xff) == 1) {
      local_88[0] = uVar17;
      bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar9 = (uint *)CONCAT71(extraout_var_00,bVar7);
      puVar10 = puVar9;
      if ((bVar7 & 1) != 0) {
        FUN_100a54208();
        puVar10 = local_88;
        _swift_willThrowTypedImpl(puVar10,&DAT_100ee42f8,puVar9);
      }
      FUN_100a54208();
      puVar11 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,puVar10,0,0);
      *puVar10 = uVar17;
      _swift_release(lVar15);
      local_88[0] = 0x64616572;
      local_88[1] = 0x7478654e;
      local_88[2] = 0x6e756843;
      local_88[3] = 0xef29286b;
      local_88[4] = 0x1f;
      local_88[5] = 0xd0000000;
      local_88[6] = 0xdb8760;
      local_88[7] = 0x80000001;
      local_88[8] = 0xf7;
      local_88[9] = 0;
      FUN_100a7e64c(&local_d0,1,puVar11,*(undefined8 *)(param_3 + 0x18),local_88);
      _swift_errorRelease(puVar11);
      param_1[5] = lStack_a8;
      param_1[4] = local_b0;
      param_1[7] = lStack_98;
      param_1[6] = lStack_a0;
      param_1[8] = local_90;
      param_1[1] = uStack_c8;
      *param_1 = local_d0;
      param_1[3] = lStack_b8;
      param_1[2] = CONCAT17(uStack_b9,CONCAT16(local_ba,CONCAT24(local_bc,local_c0)));
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e8c);
      (*pcVar6)();
    }
    if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e94);
      (*pcVar6)();
    }
    if (CARRY4(uVar4,uVar17)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a59e98);
      (*pcVar6)();
    }
    *param_1 = lVar15;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c8;
    *(uint *)((long)param_1 + 0xc) = uVar4 + uVar17;
    *(int *)(param_1 + 2) = iVar5;
    *(undefined2 *)((long)param_1 + 0x14) = uVar2;
    *(undefined1 *)((long)param_1 + 0x16) = uVar1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Address: 0x100a59e98 | FUN_100a59e98 */

void FUN_100a59e98(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort uVar10;
  ulong uVar11;
  undefined1 auStack_148 [72];
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ushort local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ushort local_70;
  
  local_100 = *unaff_x20;
  uStack_f8 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uStack_d8 = unaff_x20[5];
  local_80 = unaff_x20[6];
  uVar4 = unaff_x20[7];
  local_c0 = (ushort)unaff_x20[8];
  uVar6 = local_80;
  local_b0 = local_100;
  uStack_a8 = uStack_f8;
  uStack_88 = uStack_d8;
  local_a0 = uVar1;
  uStack_98 = uVar3;
  local_90 = uVar2;
  uStack_78 = uVar4;
  if (local_c0 >> 0xe == 0) {
    uVar10 = local_c0 & 0x3fff;
    if ((local_c0 & 0xff) != 1) {
      uVar6 = local_80 + param_1;
      if (SCARRY8(local_80,param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a5a048);
        (*pcVar5)();
      }
      if ((long)uVar4 <= (long)uVar6) goto LAB_100a59fc8;
      uVar10 = local_c0 & 0x3f00;
    }
    uVar11 = unaff_x20[5];
    local_e0 = unaff_x20[4];
    uStack_c8 = unaff_x20[7];
    local_d0 = unaff_x20[6];
    uVar10 = uVar10 & 0x301;
  }
  else {
    if (local_c0 >> 0xe != 1) {
      return;
    }
    uVar10 = local_c0 & 0x3fff;
    if ((local_c0 & 0xff) != 1) {
      uVar6 = local_80 + param_1;
      if (SCARRY8(local_80,param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a5a044);
        (*pcVar5)();
      }
      if ((long)uVar4 <= (long)uVar6) {
LAB_100a59fc8:
        local_70 = local_c0 & 0x3fff;
        local_c0 = local_c0 & 0x3f00;
        local_f0 = uVar1;
        uStack_e8 = uVar3;
        local_e0 = uVar2;
        local_d0 = uVar4;
        uStack_c8 = uVar4;
        FUN_100a5a6d0(&local_b0,auStack_148);
        FUN_100a5a704(&local_100);
        FUN_100a57abc();
        unaff_x20[5] = 0;
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 8) = 0x8000;
        return;
      }
      uVar10 = local_c0 & 0x3f00;
    }
    uVar11 = unaff_x20[5];
    local_e0 = unaff_x20[4];
    uStack_c8 = unaff_x20[7];
    local_d0 = unaff_x20[6];
    uVar10 = uVar10 & 0x301 | 0x4000;
  }
  local_70 = local_c0 & 0x3fff;
  uVar9 = uStack_d8 & 0xff;
  uVar8 = uStack_f8 & 0xffffffffffffff8;
  uVar7 = local_100 & 0xffffffffffffff9;
  local_c0 = (ushort)unaff_x20[8];
  uStack_e8 = unaff_x20[3];
  local_f0 = unaff_x20[2];
  local_100 = *unaff_x20;
  uStack_f8 = unaff_x20[1];
  uStack_d8 = uVar11;
  FUN_100a5a6d0(&local_b0,auStack_148);
  FUN_100a57abc(&local_100);
  *unaff_x20 = uVar7;
  unaff_x20[1] = uVar8;
  unaff_x20[2] = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[4] = uVar2;
  unaff_x20[5] = uVar9;
  unaff_x20[6] = uVar6;
  unaff_x20[7] = uVar4;
  *(ushort *)(unaff_x20 + 8) = uVar10;
  return;
}



/* Address: 0x100a5a048 | FUN_100a5a048 */

void FUN_100a5a048(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a5a074 | FUN_100a5a074 */

void FUN_100a5a074(void)

{
  FUN_100a58abc();
  return;
}



/* Address: 0x100a5a094 | FUN_100a5a094 */

void FUN_100a5a094(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *(long *)(*unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x60));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5a0e8);
    (*pcVar1)();
  }
  FUN_100a57abc(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined2 *)(lVar3 + 0x50) = 0x8000;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x60));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5a0ec);
  (*pcVar1)();
}



/* Address: 0x100a5a0ec | thunk_FUN_100a5a0f0 */

void thunk_FUN_100a5a0f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6bf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90fd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90fd0,&DAT_100f2bc98);
  DAT_100ff6bf8 = pTVar1;
  return;
}



/* Address: 0x100a5a0f0 | FUN_100a5a0f0 */

void FUN_100a5a0f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6bf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90fd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90fd0,&DAT_100f2bc98);
  DAT_100ff6bf8 = pTVar1;
  return;
}



/* Address: 0x100a5a130 | FUN_100a5a130 */

undefined1  [16] FUN_100a5a130(void)

{
  return ZEXT816(0x100f2bc18);
}



/* Address: 0x100a5a140 | FUN_100a5a140 */

undefined8 * FUN_100a5a140(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_100a5a1c0(param_1);
    if (*(char *)(param_2 + 5) == '\x01') {
      lVar1 = param_2[3];
      param_1[3] = lVar1;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 5) = 0;
      _swift_retain();
    }
  }
  return param_1;
}



/* Address: 0x100a5a1c0 | FUN_100a5a1c0 */

undefined8 FUN_100a5a1c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff6c00;
  FUN_1000f7830(&DAT_100ff6c00,&DAT_100c91080);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a5a208 | FUN_100a5a208 */

undefined8 * FUN_100a5a208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_100a5a1c0();
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar1 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar1;
  }
  return param_1;
}



/* Address: 0x100a5a248 | FUN_100a5a248 */

undefined1  [16] FUN_100a5a248(void)

{
  return ZEXT816(0x100f2bc98);
}



/* Address: 0x100a5a258 | FUN_100a5a258 */

void FUN_100a5a258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  short param_9)

{
  if (-1 < param_9) {
    _swift_retain();
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_10036c934(param_4,param_5,param_6);
    return;
  }
  return;
}



/* Address: 0x100a5a2d0 | FUN_100a5a2d0 */

void FUN_100a5a2d0(undefined8 *param_1)

{
  FUN_100a5a318(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined2 *)(param_1 + 8));
  _swift_release(param_1[9]);
  return;
}



/* Address: 0x100a5a318 | FUN_100a5a318 */

void FUN_100a5a318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  short param_9)

{
  if (-1 < param_9) {
    _swift_release();
    _swift_release(param_2);
    _swift_bridgeObjectRelease(param_3);
    FUN_1001b9e60(param_4,param_5,param_6);
    return;
  }
  return;
}



/* Address: 0x100a5a390 | FUN_100a5a390 */

undefined8 * FUN_100a5a390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined2 *)(param_2 + 8);
  FUN_100a5a258(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined2 *)(param_1 + 8) = uVar9;
  param_1[9] = param_2[9];
  _swift_retain();
  return param_1;
}



/* Address: 0x100a5a440 | FUN_100a5a440 */

undefined8 * FUN_100a5a440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  
  uVar18 = *param_2;
  uVar8 = param_2[1];
  uVar1 = param_2[2];
  uVar9 = param_2[3];
  uVar2 = param_2[4];
  uVar10 = param_2[5];
  uVar3 = param_2[6];
  uVar11 = param_2[7];
  uVar16 = *(undefined2 *)(param_2 + 8);
  FUN_100a5a258(uVar18,uVar8,uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar16);
  uVar4 = *param_1;
  uVar12 = param_1[1];
  uVar5 = param_1[2];
  uVar13 = param_1[3];
  uVar6 = param_1[4];
  uVar14 = param_1[5];
  uVar7 = param_1[6];
  uVar15 = param_1[7];
  uVar17 = *(undefined2 *)(param_1 + 8);
  *param_1 = uVar18;
  param_1[1] = uVar8;
  param_1[2] = uVar1;
  param_1[3] = uVar9;
  param_1[4] = uVar2;
  param_1[5] = uVar10;
  param_1[6] = uVar3;
  param_1[7] = uVar11;
  *(undefined2 *)(param_1 + 8) = uVar16;
  FUN_100a5a318(uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar17);
  uVar18 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar18);
  return param_1;
}



/* Address: 0x100a5a518 | FUN_100a5a518 */

undefined8 * FUN_100a5a518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = *(undefined2 *)(param_2 + 8);
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar2 = param_1[5];
  uVar5 = param_1[6];
  uVar10 = param_1[7];
  uVar7 = *(undefined2 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined2 *)(param_1 + 8) = uVar6;
  FUN_100a5a318(uVar8,uVar9,uVar3,uVar1,uVar4,uVar2,uVar5,uVar10,uVar7);
  uVar9 = param_1[9];
  param_1[9] = param_2[9];
  _swift_release(uVar9);
  return param_1;
}



/* Address: 0x100a5a58c | FUN_100a5a58c */

int FUN_100a5a58c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x33) & 0x1e00 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x3a) & 0x3c |
          (uint)*(undefined8 *)param_1 >> 1 & 3 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 6 |
          ((uint)param_1[10] >> 8) << 0xd;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Address: 0x100a5a600 | FUN_100a5a600 */

void FUN_100a5a600(ulong *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_2 = -param_2;
      uVar1 = (ulong)param_2;
      *param_1 = (uVar1 << 0x3a | uVar1 << 1) & 0xf000000000000007;
      param_1[1] = ((ulong)(param_2 >> 6) | uVar1 << 0x33) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = (ulong)(param_2 >> 5) & 0x7ffff00;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined2 *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}



/* Address: 0x100a5a684 | FUN_100a5a684 */

undefined1  [16] FUN_100a5a684(void)

{
  return ZEXT816(0x100f2bd18);
}



/* Address: 0x100a5a694 | FUN_100a5a694 */

void FUN_100a5a694(void)

{
  FUN_100a58bc4();
  return;
}



/* Address: 0x100a5a69c | FUN_100a5a69c */

undefined8 FUN_100a5a69c(undefined8 param_1,undefined8 param_2)

{
  FUN_100a5aee8(param_2,param_1,&DAT_100f2be50);
  return param_2;
}



/* Address: 0x100a5a6d0 | FUN_100a5a6d0 */

undefined8 FUN_100a5a6d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100a5ab10(param_2,param_1,&DAT_100f2bdb0);
  return param_2;
}



/* Address: 0x100a5a704 | FUN_100a5a704 */

undefined8 FUN_100a5a704(undefined8 param_1)

{
  FUN_100a5aac0(param_1,&DAT_100f2bdb0);
  return param_1;
}



/* Address: 0x100a5a730 | FUN_100a5a730 */

void FUN_100a5a730(long param_1,long param_2,char param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long local_138;
  pthread_mutexattr_t local_120;
  undefined1 auStack_110 [80];
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long local_90;
  long lStack_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 == '\x01') {
    local_138 = 0;
    uVar2 = 1;
    param_2 = 0;
  }
  else {
    local_138 = param_1;
    if (param_1 == param_2) {
      uVar7 = 0;
      uVar8 = 0;
      local_80 = 0x8000;
      uVar6 = 1;
      goto LAB_100a5a804;
    }
    uVar2 = 0;
  }
  param_1 = param_2;
  uVar1 = *(ulong *)(param_4 + 0x18);
  unaff_x25 = *(undefined8 *)(param_4 + 0x20);
  unaff_x26 = *(undefined8 *)(param_4 + 0x28);
  unaff_x27 = *(undefined8 *)(param_4 + 0x30);
  uVar8 = (ulong)*(byte *)(param_4 + 0x38);
  uVar6 = *(ulong *)(param_4 + 0x10) & 0xffffffffffffff9;
  uVar7 = uVar1 & 0xffffffffffffff8;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(unaff_x25);
  FUN_10036c934(unaff_x26,unaff_x27,uVar8);
  local_80 = uVar2;
LAB_100a5a804:
  uStack_78 = 0;
  puVar5 = &DAT_100ff6cc8;
  local_c0 = uVar6;
  uStack_b8 = uVar7;
  local_b0 = unaff_x25;
  uStack_a8 = unaff_x26;
  local_a0 = unaff_x27;
  uStack_98 = uVar8;
  local_90 = local_138;
  lStack_88 = param_1;
  FUN_1000f7830(&DAT_100ff6cc8,&DAT_100c91108);
  _swift_allocObject();
  *(ulong *)(puVar5 + 0x38) = uStack_98;
  *(undefined8 *)(puVar5 + 0x30) = local_a0;
  *(long *)(puVar5 + 0x48) = lStack_88;
  *(long *)(puVar5 + 0x40) = local_90;
  *(undefined8 *)(puVar5 + 0x58) = uStack_78;
  *(ulong *)(puVar5 + 0x50) = CONCAT62(uStack_7e,local_80);
  *(ulong *)(puVar5 + 0x18) = uStack_b8;
  *(ulong *)(puVar5 + 0x10) = local_c0;
  *(undefined8 *)(puVar5 + 0x28) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x20) = local_b0;
  local_120.__sig = 0;
  local_120.__opaque[0] = '\0';
  local_120.__opaque[1] = '\0';
  local_120.__opaque[2] = '\0';
  local_120.__opaque[3] = '\0';
  local_120.__opaque[4] = '\0';
  local_120.__opaque[5] = '\0';
  local_120.__opaque[6] = '\0';
  local_120.__opaque[7] = '\0';
  FUN_100a5aa60(&local_c0,auStack_110);
  _pthread_mutexattr_init(&local_120);
  iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar5 + 0x60),&local_120);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a5a8d8);
    (*pcVar3)();
  }
  FUN_100a5aa94(&local_c0);
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  _swift_bridgeObjectRetain();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a5a8dc | FUN_100a5a8dc */

undefined * FUN_100a5a8dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  bVar2 = param_3 == 0;
  bVar3 = param_4 == 0x7fffffffffffffff;
  lVar6 = 0;
  if (!bVar2 || !bVar3) {
    lVar6 = param_3;
  }
  lVar9 = 0;
  if (!bVar2 || !bVar3) {
    lVar9 = param_4;
  }
  uVar5 = 0;
  FUN_100a586d8(0);
  _swift_allocObject();
  FUN_100a5a730(lVar6,lVar9,bVar2 && bVar3,param_1,param_2,uVar5);
  _swift_retain();
  uVar5 = 4;
  FUN_100a56a44(4,8,1,lVar6);
  puVar7 = &DAT_100ff6cb8;
  FUN_1000f7830(&DAT_100ff6cb8,&DAT_100c910f8);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  puVar8 = &DAT_100ff6cc0;
  FUN_1000f7830(&DAT_100ff6cc0,&DAT_100c91100);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x10) = uVar5;
  puVar8[0x18] = 0;
  lVar9 = *(long *)(lVar6 + 0x10);
  _swift_retain(uVar5);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar9 + 0x60));
  if (iVar4 == 0) {
    if (*(short *)(lVar9 + 0x50) < 0) {
      if ((*(byte *)(lVar9 + 0x10) & 1) != 0) {
        FUN_100a56d20(0,uVar5);
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar9 + 0x58);
      *(undefined **)(lVar9 + 0x58) = puVar8;
      _swift_retain(puVar8);
      _swift_release(uVar5);
    }
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x60));
    _swift_release(param_1);
    if (iVar4 == 0) {
      _swift_release(puVar8);
      _swift_release(lVar6);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5aa60);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5aa5c);
  (*pcVar1)();
}



/* Address: 0x100a5aa60 | FUN_100a5aa60 */

undefined8 FUN_100a5aa60(undefined8 param_1,undefined8 param_2)

{
  FUN_100a5a390(param_2,param_1,&DAT_100f2bd18);
  return param_2;
}



/* Address: 0x100a5aa94 | FUN_100a5aa94 */

undefined8 FUN_100a5aa94(undefined8 param_1)

{
  FUN_100a5a2d0(param_1,&DAT_100f2bd18);
  return param_1;
}



/* Address: 0x100a5aac0 | FUN_100a5aac0 */

void FUN_100a5aac0(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  if (param_1[3] != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[4]);
    return;
  }
  return;
}



/* Address: 0x100a5ab10 | FUN_100a5ab10 */

undefined8 * FUN_100a5ab10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  lVar2 = param_2[3];
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    lVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar2;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x100a5abbc | FUN_100a5abbc */

undefined8 * FUN_100a5abbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  plVar4 = param_1 + 3;
  lVar5 = *plVar4;
  plVar6 = param_2 + 3;
  lVar2 = *plVar6;
  if (lVar5 == 0) {
    if (lVar2 == 0) {
      uVar3 = param_2[4];
      lVar2 = *plVar6;
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[4] = uVar3;
      *plVar4 = lVar2;
    }
    else {
      param_1[3] = lVar2;
      uVar3 = param_2[4];
      param_1[4] = uVar3;
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (lVar2 == 0) {
    FUN_100a5acf0(plVar4);
    uVar1 = *(undefined1 *)(param_2 + 5);
    lVar2 = *plVar6;
    param_1[4] = param_2[4];
    *plVar4 = lVar2;
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  else {
    param_1[3] = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar5);
    uVar3 = param_1[4];
    param_1[4] = param_2[4];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  uVar7 = param_2[7];
  uVar3 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar7;
  param_1[6] = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  return param_1;
}



/* Address: 0x100a5acf0 | FUN_100a5acf0 */

undefined8 FUN_100a5acf0(undefined8 param_1)

{
  FUN_1001b6840();
  return param_1;
}



/* Address: 0x100a5ad24 | FUN_100a5ad24 */

void FUN_100a5ad24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100a5ad48 | FUN_100a5ad48 */

undefined8 * FUN_100a5ad48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  plVar2 = param_1 + 3;
  if (*plVar2 != 0) {
    if (param_2[3] != 0) {
      param_1[3] = param_2[3];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      goto LAB_100a5ade0;
    }
    FUN_100a5acf0(plVar2);
  }
  lVar3 = param_2[3];
  param_1[4] = param_2[4];
  *plVar2 = lVar3;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
LAB_100a5ade0:
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x100a5ae04 | FUN_100a5ae04 */

int FUN_100a5ae04(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100a5ae4c | FUN_100a5ae4c */

void FUN_100a5ae4c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100a5aea0 | FUN_100a5aea0 */

undefined1  [16] FUN_100a5aea0(void)

{
  return ZEXT816(0x100f2bdb0);
}



/* Address: 0x100a5aeb0 | FUN_100a5aeb0 */

void FUN_100a5aeb0(undefined8 *param_1)

{
  FUN_100a5a318(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined2 *)(param_1 + 8));
  return;
}



/* Address: 0x100a5aee8 | FUN_100a5aee8 */

undefined8 * FUN_100a5aee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined2 *)(param_2 + 8);
  FUN_100a5a258(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined2 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Address: 0x100a5af80 | FUN_100a5af80 */

undefined8 * FUN_100a5af80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar17 = *(undefined2 *)(param_2 + 8);
  FUN_100a5a258(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar17);
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar7 = param_1[4];
  uVar15 = param_1[5];
  uVar8 = param_1[6];
  uVar16 = param_1[7];
  uVar18 = *(undefined2 *)(param_1 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  *(undefined2 *)(param_1 + 8) = uVar17;
  FUN_100a5a318(uVar5,uVar13,uVar6,uVar14,uVar7,uVar15,uVar8,uVar16,uVar18);
  return param_1;
}



/* Address: 0x100a5b034 | FUN_100a5b034 */

undefined8 * FUN_100a5b034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined2 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined2 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined2 *)(param_1 + 8) = uVar7;
  FUN_100a5a318(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Address: 0x100a5b098 | FUN_100a5b098 */

int FUN_100a5b098(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x33) & 0x1e00 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x3a) & 0x3c |
          (uint)*(undefined8 *)param_1 >> 1 & 3 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 6 |
          ((uint)param_1[10] >> 8) << 0xd;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Address: 0x100a5b10c | FUN_100a5b10c */

void FUN_100a5b10c(ulong *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    if (param_2 != 0) {
      param_2 = -param_2;
      uVar1 = (ulong)param_2;
      *param_1 = (uVar1 << 0x3a | uVar1 << 1) & 0xf000000000000007;
      param_1[1] = ((ulong)(param_2 >> 6) | uVar1 << 0x33) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = (ulong)(param_2 >> 5) & 0x7ffff00;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined2 *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}



/* Address: 0x100a5b190 | FUN_100a5b190 */

ushort FUN_100a5b190(long param_1)

{
  return *(ushort *)(param_1 + 0x40) >> 0xe;
}



/* Address: 0x100a5b19c | FUN_100a5b19c */

void FUN_100a5b19c(long param_1)

{
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0x3fff;
  return;
}



/* Address: 0x100a5b1ac | FUN_100a5b1ac */

void FUN_100a5b1ac(ulong *param_1,short param_2)

{
  param_1[1] = param_1[1] & 0xffffffffffffff8;
  *param_1 = *param_1 & 0xffffffffffffff9;
  param_1[5] = (ulong)(byte)param_1[5];
  *(ushort *)(param_1 + 8) = (ushort)param_1[8] & 0x301 | param_2 << 0xe;
  return;
}



/* Address: 0x100a5b1e0 | FUN_100a5b1e0 */

undefined1  [16] FUN_100a5b1e0(void)

{
  return ZEXT816(0x100f2be50);
}



/* Address: 0x100a5b1f0 | FUN_100a5b1f0 */

void FUN_100a5b1f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a5b1fc | FUN_100a5b1fc */

undefined1  [16] FUN_100a5b1fc(void)

{
  return ZEXT816(0x100f2bee0);
}



/* Address: 0x100a5b20c | thunk_FUN_100a5b210 */

void thunk_FUN_100a5b210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6cd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91170;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91170,&DAT_100f2bee0);
  DAT_100ff6cd0 = pTVar1;
  return;
}



/* Address: 0x100a5b210 | FUN_100a5b210 */

void FUN_100a5b210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6cd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91170;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91170,&DAT_100f2bee0);
  DAT_100ff6cd0 = pTVar1;
  return;
}


