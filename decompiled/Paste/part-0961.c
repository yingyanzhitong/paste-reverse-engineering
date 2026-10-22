/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a5470c | FUN_100a5470c */

void FUN_100a5470c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838ee4;
  FUN_100a66914();
  return;
}



/* Address: 0x100a5476c | FUN_100a5476c */

void FUN_100a5476c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a547bc;
  FUN_100a5450c();
  return;
}



/* Address: 0x100a547bc | FUN_100a547bc */

void FUN_100a547bc(undefined8 param_1,undefined1 param_2)

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
    *(undefined1 *)(puVar1 + 1) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a5481c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a54820 | FUN_100a54820 */

void FUN_100a54820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a54874;
  FUN_100a5450c();
  return;
}



/* Address: 0x100a54874 | FUN_100a54874 */

void FUN_100a54874(undefined8 param_1,undefined1 param_2)

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
    *(undefined1 *)(lVar5 + 0x50) = param_2;
    *(undefined8 *)(lVar5 + 0x48) = param_1;
    pcVar2 = FUN_100a54950;
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



/* Address: 0x100a54950 | FUN_100a54950 */

void FUN_100a54950(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x50);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x18);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100a5496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a54970 | FUN_100a54970 */

void FUN_100a54970(void)

{
  byte bVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    _swift_willThrowTypedImpl
              ((undefined8 *)(unaff_x22 + 0x10),puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  **(undefined8 **)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000100a54a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a54a04 | FUN_100a54a04 */

void FUN_100a54a04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = *(undefined1 *)(unaff_x20 + 2);
  FUN_100a54424(uVar2,uVar3,uVar4);
  FUN_10026569c(uVar2,uVar3,uVar4);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20;
  *(undefined **)(param_1 + 0x30) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(param_1 + 0x38) = puVar1;
  *(undefined8 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Address: 0x100a54a6c | FUN_100a54a6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a54a6c(void)

{
  return ZEXT816(0x100ff6b38);
}



/* Address: 0x100a54a8c | FUN_100a54a8c */

void FUN_100a54a8c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a53f20;
  FUN_100a66914();
  return;
}



/* Address: 0x100a54af0 | FUN_100a54af0 */

void FUN_100a54af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  plVar1[1] = (long)FUN_100a54b58;
  FUN_100a66914();
  return;
}



/* Address: 0x100a54b58 | FUN_100a54b58 */

void FUN_100a54b58(undefined8 param_1)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
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
    *(undefined8 *)(lVar5 + 0x48) = param_1;
    pcVar2 = FUN_100a54c24;
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
    pcVar2 = thunk_FUN_100a54970;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar3);
  return;
}



/* Address: 0x100a54c24 | FUN_100a54c24 */

void FUN_100a54c24(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a54c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a54c3c | FUN_100a54c3c */

void FUN_100a54c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  FUN_100a54424(uVar1,uVar2,uVar3);
  FUN_10026569c(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100a54c80 | FUN_100a54c80 */

void FUN_100a54c80(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  pthread_mutexattr_t local_100;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ushort uStack_88;
  undefined6 uStack_86;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  bVar5 = *(byte *)(param_1 + 0x38);
  uStack_88 = 0x100;
  if ((param_2 & 1) == 0) {
    uStack_88 = 0;
  }
  uStack_88 = uStack_88 | bVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = 0;
  puVar8 = &DAT_100ff6bd0;
  local_b0 = uVar9;
  local_a0 = uVar4;
  uStack_98 = uVar1;
  local_90 = uVar3;
  local_80 = uVar4;
  FUN_1000f7830(&DAT_100ff6bd0,&DAT_100c90ed0);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = uStack_a8;
  *(undefined8 *)(puVar8 + 0x10) = local_b0;
  *(undefined8 *)(puVar8 + 0x28) = uStack_98;
  *(undefined8 *)(puVar8 + 0x20) = local_a0;
  *(ulong *)(puVar8 + 0x38) = CONCAT62(uStack_86,uStack_88);
  *(undefined8 *)(puVar8 + 0x30) = local_90;
  *(undefined8 *)(puVar8 + 0x48) = uStack_78;
  *(undefined8 *)(puVar8 + 0x40) = local_80;
  local_100.__sig = 0;
  local_100.__opaque[0] = '\0';
  local_100.__opaque[1] = '\0';
  local_100.__opaque[2] = '\0';
  local_100.__opaque[3] = '\0';
  local_100.__opaque[4] = '\0';
  local_100.__opaque[5] = '\0';
  local_100.__opaque[6] = '\0';
  local_100.__opaque[7] = '\0';
  _swift_retain(uVar9);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  FUN_10036c934(uVar1,uVar3,bVar5);
  _swift_bridgeObjectRetain(uVar4);
  FUN_100a57af0(&local_b0,auStack_f0);
  _pthread_mutexattr_init(&local_100);
  iVar7 = _pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x50),&local_100);
  if (iVar7 == 0) {
    _swift_release(param_1);
    FUN_100a57b24(&local_b0);
    *(undefined **)(unaff_x20 + 0x10) = puVar8;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a54dd4);
  (*pcVar6)();
}



/* Address: 0x100a54dd8 | thunk_FUN_100a55b24 */

void thunk_FUN_100a55b24(void)

{
  FUN_100a55b24();
  return;
}



/* Address: 0x100a54ddc | FUN_100a54ddc */

void FUN_100a54ddc(long *param_1,long param_2)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  String SVar4;
  
  uVar1 = *(ushort *)(param_1 + 5) >> 0xe;
  if (uVar1 == 0) {
    lVar3 = param_1[7];
    _swift_retain(param_2);
    _swift_release(lVar3);
    param_1[7] = param_2;
  }
  else {
    if ((uVar1 != 3) ||
       (*(ushort *)(param_1 + 5) == 0xc000 &&
        (((param_1[3] == 0 && param_1[4] == 0) && (*param_1 == 0 && param_1[2] == 0)) &&
        param_1[1] == 0))) {
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a54ec0);
      (*pcVar2)();
    }
    FUN_100a56bc8(0,*(undefined8 *)(param_2 + 0x10));
  }
  return;
}



/* Address: 0x100a54ec0 | FUN_100a54ec0 */

void FUN_100a54ec0(void)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  String SVar10;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar9 + 0x50));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a5502c);
    (*pcVar5)();
  }
  lVar7 = *(long *)(lVar9 + 0x10);
  lVar2 = *(long *)(lVar9 + 0x18);
  uVar3 = *(ushort *)(lVar9 + 0x38);
  uVar4 = uVar3 >> 0xe;
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      _swift_retain(lVar2);
      lVar7 = lVar2;
    }
    else {
      _swift_retain(lVar7);
    }
  }
  else {
    uVar1 = *(ulong *)(lVar9 + 0x20);
    lVar8 = *(long *)(lVar9 + 0x30);
    if (uVar4 != 2) {
      if ((((uVar1 == 0 && lVar2 == 0) && (lVar7 == 0 && *(long *)(lVar9 + 0x28) == 0)) &&
           lVar8 == 0) && (uVar3 == 0xc000)) {
        SVar10.bridgeObject = (void *)0x2;
        SVar10.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar10,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a5506c);
        (*pcVar5)();
      }
      iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x50));
      if (iVar6 == 0) {
        return;
      }
      goto LAB_100a5502c;
    }
    *(ulong *)(lVar9 + 0x20) = uVar1 & 0xff;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined2 *)(lVar9 + 0x38) = 0x4000;
    FUN_100a57448(lVar7,lVar2,uVar1,*(long *)(lVar9 + 0x28),lVar8,uVar3);
    _swift_retain(lVar7);
    FUN_100a57528();
  }
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x50));
  if (iVar6 == 0) {
    if (lVar7 == 0) {
      return;
    }
    _swift_retain(lVar7);
    _swift_retain();
    FUN_100910ab0(FUN_100a57844);
    _swift_release_n(lVar7,2);
    _swift_release();
    return;
  }
LAB_100a5502c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a55030);
  (*pcVar5)();
}



/* Address: 0x100a5506c | FUN_100a5506c */

void FUN_100a5506c(char param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  ushort uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  ushort uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  String SVar31;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined *puStack_298;
  undefined4 *local_278;
  undefined4 *puStack_270;
  undefined4 *local_268;
  undefined *puStack_260;
  long local_258;
  ushort local_250;
  undefined *local_248;
  undefined *puStack_240;
  undefined *local_238;
  undefined *puStack_230;
  undefined *local_228;
  undefined *puStack_220;
  undefined *local_218;
  undefined *puStack_210;
  undefined *local_208;
  char local_200;
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined *local_1e8;
  undefined *puStack_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined *local_1b8;
  char local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_180;
  undefined1 local_160;
  undefined4 *local_158;
  byte local_150;
  uint local_14f;
  uint3 local_14b;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  char local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined4 *puStack_90;
  undefined4 *local_88;
  undefined *puStack_80;
  long local_78;
  undefined1 local_70;
  
  if (param_1 == '\x01') {
    CVar6 = Swift::CancellationError::typeMetadataAccessor();
    CVar7 = CVar6;
    FUN_100a5784c();
    _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
    Swift::CancellationError::init();
  }
  else {
    lVar23 = *(long *)(param_2 + 0x10);
    iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar23 + 0x50));
    if (iVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55770);
      (*pcVar3)();
    }
    uVar19 = *(undefined8 *)(param_2 + 0x18);
    puVar20 = *(undefined4 **)(lVar23 + 0x18);
    puVar26 = *(undefined4 **)(lVar23 + 0x10);
    puVar25 = *(undefined4 **)(lVar23 + 0x20);
    puVar29 = *(undefined **)(lVar23 + 0x28);
    lVar18 = *(long *)(lVar23 + 0x30);
    uVar24 = *(ushort *)(lVar23 + 0x38);
    do {
      uVar13 = uVar24 >> 0xe;
      puVar8 = puVar20;
      puVar17 = puVar25;
      puVar27 = puVar26;
      if (uVar13 == 0) {
        local_70 = (undefined1)uVar24;
        local_98 = puVar26;
        puStack_90 = puVar20;
        local_88 = puVar25;
        puStack_80 = puVar29;
        local_78 = lVar18;
        _swift_retain(puVar26);
        _swift_retain(puVar20);
        _swift_bridgeObjectRetain(puVar25);
        FUN_10036c934(puVar29,lVar18,uVar24);
        if ((uVar24 >> 8 & 1) == 0) {
          FUN_100a55d50(&local_158,&local_98);
          puVar17 = (undefined4 *)(ulong)local_150;
          puVar8 = local_158;
          if (local_110 == '\x01') {
            local_2c8 = puStack_130;
            FUN_100a57528(puVar26,puVar20,puVar25,puVar29,lVar18,uVar24);
            puVar9 = (undefined *)
                     ((ulong)local_14f << 8 | (ulong)local_14b << 0x28 | (ulong)puVar17);
            puVar22 = local_128;
            puVar14 = local_118;
            puVar16 = local_120;
            puVar15 = local_138;
            puVar28 = puStack_140;
            puVar30 = local_148;
LAB_100a5553c:
            FUN_100a57528(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 0x18),
                          *(undefined8 *)(lVar23 + 0x20),*(undefined8 *)(lVar23 + 0x28),
                          *(undefined8 *)(lVar23 + 0x30),*(undefined2 *)(lVar23 + 0x38));
            *(undefined8 *)(lVar23 + 0x10) = 8;
            *(undefined8 *)(lVar23 + 0x20) = 0;
            *(undefined8 *)(lVar23 + 0x18) = 0;
            *(undefined8 *)(lVar23 + 0x30) = 0;
            *(undefined8 *)(lVar23 + 0x28) = 0;
            *(undefined2 *)(lVar23 + 0x38) = 0xc000;
            puVar21 = (undefined *)((ulong)local_158 & 0xff);
            local_1a8 = (undefined *)CONCAT71(local_1a8._1_7_,(char)local_158);
            local_180 = local_2c8;
            goto LAB_100a555a0;
          }
        }
        else {
          uVar12 = 0x14;
          puVar8 = puVar25;
          FUN_100aa7e20();
          if ((uVar12 & 0xff) == 1) {
            puVar17 = puVar8;
            FUN_100a54208();
            puVar9 = &DAT_100ee42f8;
            _swift_allocError(&DAT_100ee42f8,puVar17,0,0);
            *puVar17 = (int)puVar8;
            local_c0 = 0xd000000000000011;
            uStack_b8 = 0x8000000100db8670;
            local_b0 = 0xd000000000000025;
            uStack_a8 = 0x8000000100db8640;
            local_a0 = 0x21c;
            FUN_100a7da48(&local_108,0x6e65706f5f737466,&DAT_e800000000000000,puVar9,puVar25,
                          &local_c0);
            _swift_errorRelease(puVar9);
            FUN_100a57528(puVar26,puVar20,puVar25,puVar29,lVar18,uVar24);
            local_2c8 = local_e0;
            local_158 = (undefined4 *)((ulong)local_108 & 0xff);
            puVar9 = local_100;
            puVar22 = puStack_d8;
            puVar14 = puStack_c8;
            puVar16 = local_d0;
            puVar15 = puStack_e8;
            puVar28 = local_f0;
            puVar30 = puStack_f8;
            goto LAB_100a5553c;
          }
          puVar17 = (undefined4 *)&DAT_00000001;
        }
        _swift_retain(puVar20);
        FUN_100a57528(puVar26,puVar20,puVar25,puVar29,lVar18,uVar24);
        FUN_100a57528(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 0x18),
                      *(undefined8 *)(lVar23 + 0x20),*(undefined8 *)(lVar23 + 0x28),
                      *(undefined8 *)(lVar23 + 0x30),*(undefined2 *)(lVar23 + 0x38));
        lVar18 = 0;
        *(undefined4 **)(lVar23 + 0x10) = puVar20;
        *(undefined4 **)(lVar23 + 0x18) = puVar8;
        *(undefined4 **)(lVar23 + 0x20) = puVar17;
        puVar29 = PTR___swiftEmptyArrayStorage_100eae0d8;
        *(undefined **)(lVar23 + 0x28) = PTR___swiftEmptyArrayStorage_100eae0d8;
        *(undefined8 *)(lVar23 + 0x30) = 0;
        uVar24 = 0x4000;
        *(undefined2 *)(lVar23 + 0x38) = 0x4000;
        uVar13 = 1;
        puVar27 = puVar20;
      }
      if (uVar13 != 1) {
        if (((uVar13 != 2) &&
            (((puVar17 == (undefined4 *)0x0 && puVar8 == (undefined4 *)0x0) &&
             (puVar27 == (undefined4 *)0x0 && puVar29 == (undefined *)0x0)) && lVar18 == 0)) &&
           (uVar24 == 0xc000)) {
          SVar31.bridgeObject = (void *)0x2;
          SVar31.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar31,(StaticString)0x0,0xe000000000000000,0xdb8660)
          ;
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a557b4);
          (*pcVar3)();
        }
        local_1b0 = '\0';
        puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
        goto LAB_100a553c0;
      }
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x28) = 0;
      *(undefined8 *)(lVar23 + 0x20) = 0;
      *(undefined8 *)(lVar23 + 0x30) = 0;
      *(undefined2 *)(lVar23 + 0x38) = 0xc000;
      local_108 = puVar29;
      _swift_retain(puVar27);
      _swift_bridgeObjectRetain(puVar29);
      FUN_100a57528(puVar27,puVar8,puVar17,puVar29,lVar18,uVar24);
      if (((ulong)puVar17 & 0xff) == 1) {
        FUN_100a564b4(&local_278,puVar27,puVar8,&local_108,uVar19);
      }
      else {
        FUN_100a56170(&local_278,puVar27,puVar8,&local_108,uVar19);
      }
      cVar2 = local_200;
      puVar14 = local_208;
      puVar16 = puStack_210;
      puVar22 = local_218;
      puVar1 = puStack_220;
      puVar15 = local_228;
      puVar28 = puStack_230;
      puVar30 = local_238;
      puVar9 = puStack_240;
      puVar21 = local_248;
      uVar24 = local_250;
      lVar18 = local_258;
      puVar29 = puStack_260;
      puVar25 = local_268;
      puVar20 = puStack_270;
      puVar26 = local_278;
      _swift_release(puVar27);
      _swift_bridgeObjectRelease(local_108);
      FUN_100a57528(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 0x18),
                    *(undefined8 *)(lVar23 + 0x20),*(undefined8 *)(lVar23 + 0x28),
                    *(undefined8 *)(lVar23 + 0x30),*(undefined2 *)(lVar23 + 0x38));
      *(undefined4 **)(lVar23 + 0x10) = puVar26;
      *(undefined4 **)(lVar23 + 0x18) = puVar20;
      *(undefined4 **)(lVar23 + 0x20) = puVar25;
      *(undefined **)(lVar23 + 0x28) = puVar29;
      *(long *)(lVar23 + 0x30) = lVar18;
      *(ushort *)(lVar23 + 0x38) = uVar24;
    } while (cVar2 == -1);
    if (cVar2 != '\x01') {
      puStack_1f0 = puVar9;
      local_1e8 = puVar30;
      puStack_1e0 = puVar28;
      local_1d8 = puVar15;
      puStack_1d0 = puVar1;
      local_1c8 = puVar22;
      puStack_1c0 = puVar16;
      local_1b8 = puVar14;
      local_1b0 = cVar2;
LAB_100a553c0:
      local_1f8 = puVar21;
      iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar23 + 0x50));
      if (iVar5 == 0) {
        FUN_100a57890(&local_1f8,&local_278);
        FUN_100a557b4(puVar21);
        FUN_100a578c4(&local_1f8);
        FUN_100a578c4(&local_1f8);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55774);
      (*pcVar3)();
    }
    local_1a8 = puVar21;
    local_180 = puVar1;
LAB_100a555a0:
    puVar29 = local_180;
    local_160 = 1;
    puStack_298 = local_180;
    local_2c0 = puVar21;
    puStack_2b8 = puVar9;
    local_1a0 = puVar9;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) == 0) {
      ppuVar11 = &local_1a8;
      FUN_100a57890(ppuVar11,&local_278);
    }
    else {
      ppuVar10 = &local_1a8;
      FUN_100a57890(ppuVar10,&local_278);
      FUN_100a500c0();
      ppuVar11 = &local_2c0;
      _swift_willThrowTypedImpl(ppuVar11,&DAT_100f2de38,ppuVar10);
    }
    FUN_100a500c0();
    CVar6.unknown = &DAT_100f2de38;
    _swift_allocError(&DAT_100f2de38,ppuVar11,0,0);
    *ppuVar11 = puVar21;
    ppuVar11[1] = puVar9;
    ppuVar11[2] = puVar30;
    ppuVar11[3] = puVar28;
    ppuVar11[4] = puVar15;
    ppuVar11[5] = puVar29;
    ppuVar11[6] = puVar22;
    ppuVar11[7] = puVar16;
    ppuVar11[8] = puVar14;
    FUN_100a578c4(&local_1a8);
    iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar23 + 0x50));
    if (iVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55778);
      (*pcVar3)();
    }
  }
  _swift_errorRetain(CVar6.unknown);
  FUN_100a55a00(thunk_FUN_100a5782c);
  lVar23 = *(long *)(param_2 + 0x10);
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar23 + 0x50));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55760);
    (*pcVar3)();
  }
  lVar18 = *(long *)(lVar23 + 0x48);
  _swift_retain(lVar18);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar23 + 0x50));
  if (iVar5 == 0) {
    if (lVar18 != 0) {
      uVar19 = *(undefined8 *)(lVar18 + 0x10);
      _swift_retain(lVar18);
      FUN_1008fa558(CVar6.unknown,1);
      FUN_100a56bc8(CVar6.unknown,uVar19);
      _swift_release(lVar18);
      FUN_100908090(CVar6.unknown,1);
    }
    iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar23 + 0x50));
    if (iVar5 == 0) {
      _swift_release(*(undefined8 *)(lVar23 + 0x48));
      *(undefined8 *)(lVar23 + 0x48) = 0;
      iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar23 + 0x50));
      _swift_release(lVar18);
      if (iVar5 == 0) {
        FUN_100908090(CVar6.unknown,1);
        FUN_100908090(CVar6.unknown,1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a5576c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55768);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a55764);
  (*pcVar3)();
}



/* Address: 0x100a557b4 | FUN_100a557b4 */

void FUN_100a557b4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x50));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559b0);
    (*pcVar5)();
  }
  lVar7 = *(long *)(lVar11 + 0x48);
  _swift_retain(lVar7);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x50));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559b4);
    (*pcVar5)();
  }
  if (lVar7 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
      FUN_100a56bc8(0,*(undefined8 *)(lVar7 + 0x10));
      iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x50));
      if (iVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559b8);
        (*pcVar5)();
      }
      _swift_release(*(undefined8 *)(lVar11 + 0x48));
      *(undefined8 *)(lVar11 + 0x48) = 0;
      iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x50));
      _swift_release(lVar7);
      if (iVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a558a0);
        (*pcVar5)();
      }
    }
    else {
      lVar10 = *(long *)(unaff_x20 + 0x18);
      FUN_100a9f72c(param_1,*(undefined8 *)(lVar7 + 0x10));
      if (lVar10 <= lVar9) {
        if ((param_1 & 0xff) == 0) {
          FUN_100a54ec0();
        }
        else {
          if (((uint)param_1 & 0xff) == 1) {
            iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x50));
            if (iVar6 != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559c0);
              (*pcVar5)();
            }
            lVar9 = *(long *)(lVar11 + 0x10);
            lVar10 = *(long *)(lVar11 + 0x18);
            uVar1 = *(ulong *)(lVar11 + 0x20);
            lVar2 = *(long *)(lVar11 + 0x28);
            lVar8 = *(long *)(lVar11 + 0x30);
            uVar3 = *(ushort *)(lVar11 + 0x38);
            uVar4 = uVar3 >> 0xe;
            if (uVar4 < 2) {
              if (uVar4 != 0) {
                *(ulong *)(lVar11 + 0x20) = uVar1 & 0xff;
                *(undefined8 *)(lVar11 + 0x30) = 0;
                *(undefined2 *)(lVar11 + 0x38) = 0x8000;
                _swift_retain(lVar9);
                _swift_bridgeObjectRetain(lVar2);
                FUN_100a57528(lVar9,lVar10,uVar1,lVar2,lVar8,uVar3);
              }
            }
            else if (((uVar4 != 2) &&
                     (((uVar1 == 0 && lVar10 == 0) && (lVar9 == 0 && lVar2 == 0)) && lVar8 == 0)) &&
                    (uVar3 == 0xc000)) {
              SVar12.bridgeObject = (void *)0x2;
              SVar12.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar12,(StaticString)0x0,0xe000000000000000,
                         0xdb8660);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a55a00);
              (*pcVar5)();
            }
            iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x50));
            _swift_release(lVar7);
            if (iVar6 == 0) {
              return;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559c4);
            (*pcVar5)();
          }
          FUN_100a55a00(thunk_FUN_100a5782c);
        }
        _swift_release(lVar7);
        return;
      }
      FUN_100a56bc8(0,*(undefined8 *)(lVar7 + 0x10));
      iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x50));
      if (iVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a559bc);
        (*pcVar5)();
      }
      _swift_release(*(undefined8 *)(lVar11 + 0x48));
      *(undefined8 *)(lVar11 + 0x48) = 0;
      iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x50));
      _swift_release(lVar7);
      if (iVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a55860);
        (*pcVar5)();
      }
    }
  }
  return;
}



/* Address: 0x100a55a00 | FUN_100a55a00 */

void FUN_100a55a00(undefined8 param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  String SVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x50));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a55ae4);
    (*pcVar2)();
  }
  lVar4 = *(long *)(lVar5 + 0x10);
  uVar1 = *(ushort *)(lVar5 + 0x38) >> 0xe;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      lVar4 = 0;
      goto LAB_100a55a88;
    }
  }
  else if (uVar1 != 2) {
    if (*(ushort *)(lVar5 + 0x38) == 0xc000 &&
        (((*(long *)(lVar5 + 0x28) == 0 && lVar4 == 0) &&
         (*(long *)(lVar5 + 0x30) == 0 && *(long *)(lVar5 + 0x20) == 0)) &&
        *(long *)(lVar5 + 0x18) == 0)) {
      SVar6.bridgeObject = (void *)0x2;
      SVar6.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar6,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a55b24);
      (*pcVar2)();
    }
    lVar4 = 0;
    goto LAB_100a55a88;
  }
  _swift_retain(lVar4);
LAB_100a55a88:
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x50));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a55ae8);
    (*pcVar2)();
  }
  if (lVar4 != 0) {
    _swift_retain();
    FUN_100910ab0(param_1);
    _swift_release(lVar4);
    _swift_release();
    return;
  }
  return;
}



/* Address: 0x100a55b24 | FUN_100a55b24 */

/* WARNING: Removing unreachable block (ram,0x000100a55b80) */

void FUN_100a55b24(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x50));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a55b7c);
    (*pcVar1)();
  }
  FUN_100a55b84(lVar3 + 0x10);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x50));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a55b80);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100a55b84 | FUN_100a55b84 */

void FUN_100a55b84(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  __int32 _Var4;
  long lVar5;
  uint uVar6;
  FTS *this;
  long *plVar7;
  String SVar8;
  
  lVar5 = *param_1;
  plVar7 = param_1 + 1;
  this = (FTS *)*plVar7;
  uVar1 = param_1[2];
  uVar6 = (uint)(*(ushort *)(param_1 + 5) >> 0xe);
  if (uVar6 - 1 < 2) {
    FUN_100a57528(lVar5,this,uVar1);
    *param_1 = 8;
    param_1[2] = 0;
    *plVar7 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 5) = 0xc000;
    if ((uVar1 & 0xff) == 1) {
      do {
        Darwin::set_errno((Darwin *)this,0);
        iVar3 = _fts_close(this);
        if (iVar3 != -1) {
          return;
        }
        _Var4 = Darwin::get_errno();
      } while (_Var4 == 4);
    }
    else {
      Darwin::set_errno((Darwin *)this,0);
      iVar3 = (int)this;
      _closedir();
      if (iVar3 == -1) {
        Darwin::get_errno();
      }
    }
  }
  else if (uVar6 == 0) {
    FUN_100a57528(lVar5,this,uVar1);
    *param_1 = 8;
    param_1[2] = 0;
    *plVar7 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 5) = 0xc000;
  }
  else if ((((uVar1 == 0 && this == (FTS *)0x0) && (lVar5 == 0 && param_1[3] == 0)) &&
            param_1[4] == 0) && (*(ushort *)(param_1 + 5) == 0xc000)) {
    SVar8.bridgeObject = (void *)0x2;
    SVar8.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar8,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a55ce4);
    (*pcVar2)();
  }
  return;
}



/* Address: 0x100a55ce4 | FUN_100a55ce4 */

void FUN_100a55ce4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a55d08 | FUN_100a55d08 */

void FUN_100a55d08(void)

{
  FUN_100a54ec0();
  return;
}



/* Address: 0x100a55d28 | FUN_100a55d28 */

void FUN_100a55d28(void)

{
  FUN_100a55a00(FUN_100a5782c);
  return;
}



/* Address: 0x100a55d50 | FUN_100a55d50 */

void FUN_100a55d50(ulong *param_1,undefined *param_2,Darwin *param_3,_StringGuts param_4,
                  char *param_5,undefined1 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  byte bVar6;
  __int32 _Var7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong unaff_x21;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong in_register_00005008;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_188 [72];
  byte local_140 [8];
  ulong local_138;
  ulong uStack_130;
  undefined *local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  uint local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  uint local_b0 [17];
  undefined4 local_6c;
  char local_68;
  
  FUN_100aa8b80(local_b0);
  uVar12 = (ulong)local_b0[0];
  if (local_68 == '\x01') {
    uStack_dc = (undefined4)local_b0._28_8_;
    uStack_d8 = SUB84(local_b0._28_8_,4);
    local_e4 = (undefined4)local_b0._20_8_;
    uStack_e0 = SUB84(local_b0._20_8_,4);
    uStack_cc = (undefined4)local_b0._44_8_;
    uStack_c8 = SUB84(local_b0._44_8_,4);
    local_d4 = (undefined4)local_b0._36_8_;
    uStack_d0 = SUB84(local_b0._36_8_,4);
    uStack_bc = (undefined4)local_b0._60_8_;
    uStack_b8 = SUB84(local_b0._60_8_,4);
    local_c4 = (undefined4)local_b0._52_8_;
    uStack_c0 = SUB84(local_b0._52_8_,4);
    local_f8 = local_b0[0];
    local_b4 = local_6c;
    uStack_ec = (undefined4)local_b0._12_8_;
    uStack_e8 = SUB84(local_b0._12_8_,4);
    uStack_f4 = (undefined4)local_b0._4_8_;
    uStack_f0 = SUB84(local_b0._4_8_,4);
    FUN_100a55ff8(local_140,&local_f8,param_3);
    uVar14 = (ulong)local_140[0];
    FUN_100a5008c(&local_f8);
    uVar10 = 0;
    uVar11 = 1;
    uVar12 = uStack_110;
  }
  else {
    Darwin::set_errno(param_3,0);
    uVar14 = uVar12;
    _fdopendir();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a55ff8);
      (*pcVar5)();
    }
    _Var7 = Darwin::get_errno();
    if (_Var7 == 0) {
      uVar11 = 0;
      local_138 = 0;
      uVar10 = uVar14 & 0xffffffffffffff00;
      local_118 = unaff_x21;
      local_108 = unaff_x24;
      uStack_130 = unaff_x25;
      uStack_100 = unaff_x26;
      local_128 = param_2;
      uStack_120 = in_register_00005008;
    }
    else {
      FUN_1005ac32c();
      if ((uVar12 & 0xff00000000) == 0x100000000) {
        local_f8 = (uint)uVar12;
        param_4.unknown = (undefined *)0x0;
        param_5 = (char *)0x0;
        param_6 = &DAT_00000012;
        bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        pcVar13 = (char *)CONCAT71(extraout_var,bVar6);
        if ((bVar6 & 1) != 0) {
          FUN_100a54208();
          param_4.unknown = &DAT_100ee42f8;
          _swift_willThrowTypedImpl(&local_f8);
          param_5 = pcVar13;
        }
      }
      pcVar13 = *(char **)(param_3 + 0x10);
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0xe0000000;
      Swift::_StringGuts::grow(0x29,param_4);
      _swift_bridgeObjectRelease(CONCAT44(uStack_ec,uStack_f0));
      local_f8 = 0x25;
      uStack_f4 = 0xd0000000;
      uStack_f0 = 0xdb86b0;
      uStack_ec = 0x80000001;
      FUN_1005b32e4();
      SVar15.bridgeObject = param_4.unknown;
      SVar15.str = pcVar13;
      SVar17.bridgeObject = param_6;
      SVar17.str = param_5;
      Swift::String::append(SVar15,SVar17);
      _swift_bridgeObjectRelease(param_4.unknown);
      SVar16.bridgeObject = &SUB_e200000000000000;
      SVar16.str = (char *)0x2e27;
      puVar8 = (undefined8 *)0x2e27;
      SVar18.bridgeObject = param_6;
      SVar18.str = param_5;
      Swift::String::append(SVar16,SVar18);
      uVar4 = uStack_ec;
      uVar3 = uStack_f0;
      uVar2 = uStack_f4;
      uVar1 = local_f8;
      uVar12 = CONCAT44(uStack_f4,local_f8);
      uVar14 = CONCAT44(uStack_ec,uStack_f0);
      FUN_100a57a58();
      puVar9 = &DAT_100f2dfc8;
      _swift_allocError(&DAT_100f2dfc8,puVar8,0,0);
      *puVar8 = 0x69646e65706f6466;
      puVar8[1] = 0xe900000000000072;
      *(__int32 *)(puVar8 + 2) = _Var7;
      local_140[0] = 8;
      uStack_120 = 0xd000000000000015;
      local_118 = 0x8000000100db8690;
      uStack_110 = 0xd000000000000025;
      local_108 = 0x8000000100db8640;
      uStack_100 = 0x211;
      local_f8 = CONCAT31(local_f8._1_3_,8);
      uStack_f0 = uVar1;
      uStack_ec = uVar2;
      uStack_e8 = uVar3;
      local_e4 = uVar4;
      uStack_e0 = SUB84(puVar9,0);
      uStack_dc = (undefined4)((ulong)puVar9 >> 0x20);
      uStack_d8 = 0x15;
      local_d4 = 0xd0000000;
      uStack_d0 = 0xdb8690;
      uStack_cc = 0x80000001;
      uStack_c8 = 0x25;
      local_c4 = 0xd0000000;
      uStack_c0 = 0xdb8640;
      uStack_bc = 0x80000001;
      uStack_b8 = 0x211;
      local_b4 = 0;
      local_138 = uVar12;
      uStack_130 = uVar14;
      local_128 = puVar9;
      FUN_100a50050(local_140,auStack_188);
      FUN_100a5008c(&local_f8);
      uVar10 = 0;
      uVar11 = 1;
      uVar14 = (ulong)local_140[0];
      uVar12 = uStack_110;
    }
  }
  *param_1 = uVar10 | uVar14 & 0xff;
  param_1[1] = local_138;
  param_1[2] = uStack_130;
  param_1[4] = uStack_120;
  param_1[3] = (ulong)local_128;
  param_1[5] = local_118;
  param_1[6] = uVar12;
  param_1[7] = local_108;
  param_1[8] = uStack_100;
  *(undefined1 *)(param_1 + 9) = uVar11;
  return;
}



/* Address: 0x100a55ff8 | FUN_100a55ff8 */

void FUN_100a55ff8(undefined8 *param_1,undefined8 *param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_178 [72];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_108 = param_2[5];
  local_110 = param_2[4];
  uStack_f8 = param_2[7];
  local_100 = param_2[6];
  local_f0 = param_2[8];
  uStack_128 = param_2[1];
  local_130 = *param_2;
  uStack_118 = param_2[3];
  local_120 = param_2[2];
  local_98 = 0;
  local_90 = 0xe000000000000000;
  _Var9.unknown = param_3.unknown;
  Swift::_StringGuts::grow(0x29,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd000000000000025;
  local_90 = 0x8000000100db86b0;
  pcVar6 = *(char **)(param_3.unknown + 0x10);
  FUN_1005b32e4();
  SVar10.bridgeObject = _Var9.unknown;
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar10,SVar12);
  _swift_bridgeObjectRelease(_Var9.unknown);
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x2e27;
  puVar7 = (undefined8 *)0x2e27;
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  Swift::String::append(SVar11,SVar13);
  uVar5 = local_90;
  uVar4 = local_98;
  uVar1 = (undefined1)local_130;
  FUN_100a500c0();
  puVar8 = &DAT_100f2de38;
  _swift_allocError(&DAT_100f2de38,puVar7,0,0);
  uVar3 = uStack_f8;
  uVar2 = uStack_108;
  puVar7[1] = uStack_128;
  *puVar7 = local_130;
  puVar7[8] = local_f0;
  puVar7[5] = uStack_108;
  puVar7[4] = local_110;
  puVar7[7] = uStack_f8;
  puVar7[6] = local_100;
  puVar7[3] = uStack_118;
  puVar7[2] = local_120;
  local_e0 = uVar1;
  uStack_d8 = uVar4;
  uStack_d0 = uVar5;
  local_c0 = local_110;
  uStack_b8 = uStack_108;
  uStack_b0 = local_100;
  local_a8 = uStack_f8;
  local_a0 = local_f0;
  local_98 = CONCAT71(local_98._1_7_,uVar1);
  local_90 = uVar4;
  uStack_88 = uVar5;
  uStack_78 = local_110;
  local_70 = uStack_108;
  uStack_68 = local_100;
  local_60 = uStack_f8;
  uStack_58 = local_f0;
  local_c8 = puVar8;
  local_80 = puVar8;
  FUN_100a50050(&local_130,auStack_178);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  FUN_100a50050(&local_e0,auStack_178);
  FUN_100a5008c(&local_98);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100a56170 | FUN_100a56170 */

void FUN_100a56170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong *param_8,ulong param_9)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  __int32 _Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long unaff_x20;
  Darwin *this;
  Darwin *pDVar13;
  Darwin DVar14;
  ulong uVar15;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  Darwin *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar4 = (int)*param_8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar15 = *param_8;
  if (iVar4 == 0) {
    uVar9 = *(ulong *)(uVar15 + 0x18) >> 1;
    this = (Darwin *)0x0;
    FUN_100a4ff00();
    _swift_bridgeObjectRelease(uVar15);
    *param_8 = (ulong)this;
  }
  else {
    uVar9 = *(ulong *)(uVar15 + 0x10);
    FUN_100a50948(0);
    this = (Darwin *)*param_8;
  }
  pDVar13 = this;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)pDVar13 == 0) || ((long)(*(ulong *)(this + 0x18) >> 1) < (long)param_9)) {
    uVar9 = *(ulong *)(this + 0x10);
    if ((long)*(ulong *)(this + 0x10) <= (long)param_9) {
      uVar9 = param_9;
    }
    FUN_100aa7854();
    this = pDVar13;
  }
  *param_8 = (ulong)this;
  pDVar13 = this;
  if (*(long *)(this + 0x10) < (long)param_9) {
    do {
      Darwin::set_errno(this,0);
      uVar15 = param_7;
      _readdir();
      if (uVar15 == 0) {
        _Var5 = Darwin::get_errno();
        Darwin::set_errno(this,0);
        _closedir();
        bVar3 = (int)param_7 == -1;
        if (_Var5 == 0) {
          if (bVar3) {
            Darwin::get_errno();
          }
          _swift_bridgeObjectRetain(this);
          uVar11 = 0;
          param_7 = 0;
          uStack_c8 = 0;
          uVar12 = 0xc000;
          param_6 = 8;
          pDVar13 = (Darwin *)0x0;
          local_90 = extraout_x10_00;
        }
        else {
          if (bVar3) {
            Darwin::get_errno();
          }
          local_88 = 0xd00000000000002f;
          uStack_80 = 0x8000000100db86e0;
          local_78 = 0xd000000000000025;
          uStack_70 = 0x8000000100db8640;
          local_68 = 0x24e;
          FUN_100a7e384(&local_d0,_Var5,*(undefined8 *)(unaff_x20 + 0x30),&local_88);
          param_7 = 0;
          pDVar13 = (Darwin *)0x0;
          uVar12 = 0xc000;
          uVar11 = 1;
          param_6 = 8;
          this = local_d0;
          param_3 = uStack_c0;
          in_register_00005028 = uStack_b8;
          param_4 = local_b0;
          in_register_00005048 = uStack_a8;
          param_5 = uStack_a0;
          in_register_00005068 = uStack_98;
        }
        goto LAB_100a56254;
      }
      if ((*(char *)(uVar15 + 0x15) != '\0') &&
         ((*(char *)(uVar15 + 0x15) != '.' ||
          ((*(char *)(uVar15 + 0x16) != '\0' &&
           ((*(char *)(uVar15 + 0x16) != '.' || (*(char *)(uVar15 + 0x17) != '\0')))))))) {
        uVar1 = *(byte *)(uVar15 + 0x14) - 1;
        if (uVar1 < 0xe) {
          DVar14 = *(Darwin *)(&DAT_100c90f06 + ((ulong)uVar1 & 0xff));
        }
        else {
          DVar14 = (Darwin)0x8;
        }
        FUN_100673560();
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a564b4);
          (*pcVar2)();
        }
        FUN_1005b32f4();
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a564b0);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
        uVar6 = uVar15;
        _swift_bridgeObjectRetain();
        FUN_1005b6510();
        uVar7 = uVar6;
        _swift_bridgeObjectRetain();
        FUN_1005ad054();
        uVar8 = uVar7;
        uVar10 = uVar9;
        FUN_1005ac824();
        _swift_bridgeObjectRelease(uVar7);
        if (uVar9 == uVar8) {
          _swift_bridgeObjectRelease(uVar6);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a564ac);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(this + 0x10);
        uVar9 = uVar10;
        if (*(ulong *)(this + 0x18) >> 1 <= uVar7) {
          this = (Darwin *)(ulong)(1 < *(ulong *)(this + 0x18));
          uVar9 = uVar7 + 1;
          FUN_100aa7854();
        }
        *(ulong *)(this + 0x10) = uVar7 + 1;
        *(ulong *)(this + uVar7 * 0x10 + 0x20) = uVar6;
        this[uVar7 * 0x10 + 0x28] = DVar14;
        _swift_bridgeObjectRelease(uVar15);
        *param_8 = (ulong)this;
      }
      pDVar13 = this;
    } while (*(ulong *)(this + 0x10) < param_9);
  }
  _swift_bridgeObjectRetain_n(pDVar13,2);
  _swift_retain();
  uVar11 = 0;
  uStack_c8 = 0;
  uVar12 = 0x4000;
  local_90 = extraout_x10;
  this = pDVar13;
LAB_100a56254:
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = 0;
  param_1[3] = pDVar13;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = uVar12;
  param_1[7] = uStack_c8;
  param_1[6] = this;
  param_1[9] = in_register_00005028;
  param_1[8] = param_3;
  param_1[0xb] = in_register_00005048;
  param_1[10] = param_4;
  param_1[0xd] = in_register_00005068;
  param_1[0xc] = param_5;
  param_1[0xe] = local_90;
  *(undefined1 *)(param_1 + 0xf) = uVar11;
  return;
}



/* Address: 0x100a564b4 | FUN_100a564b4 */

void FUN_100a564b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,FTS *param_7,ulong *param_8,char *param_9)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  __int32 _Var4;
  int iVar5;
  __int32 _Var6;
  FTSENT *pFVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined2 uVar17;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x20;
  Darwin *pDVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  undefined *in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  char *local_168;
  undefined1 auStack_158 [72];
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  
  iVar5 = (int)*param_8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar21 = *param_8;
  if (iVar5 == 0) {
    pcVar13 = (char *)(*(ulong *)(uVar21 + 0x18) >> 1);
    uVar20 = 0;
    FUN_100a4ff00();
    _swift_bridgeObjectRelease(uVar21);
    *param_8 = uVar20;
  }
  else {
    pcVar13 = *(char **)(uVar21 + 0x10);
    FUN_100a50948(0);
    uVar20 = *param_8;
  }
  uVar21 = uVar20;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar21 == 0) || ((long)(*(ulong *)(uVar20 + 0x18) >> 1) < (long)param_9)) {
    pcVar13 = *(char **)(uVar20 + 0x10);
    if ((long)*(char **)(uVar20 + 0x10) <= (long)param_9) {
      pcVar13 = param_9;
    }
    FUN_100aa7854();
    uVar20 = uVar21;
  }
  pDVar18 = (Darwin *)(uVar20 + 0x10);
  lVar15 = *(long *)pDVar18;
  while (lVar15 < (long)param_9) {
    while( true ) {
      Darwin::set_errno(pDVar18,0);
      pFVar7 = _fts_read(param_7);
      if (pFVar7 != (FTSENT *)0x0) break;
      _Var4 = Darwin::get_errno();
      if (_Var4 != 4) {
        if (_Var4 == 0) {
          *param_8 = uVar20;
          goto LAB_100a567c0;
        }
        *param_8 = uVar20;
        goto LAB_100a56814;
      }
    }
    puVar8 = (undefined8 *)(ulong)pFVar7->fts_info;
    FUN_100a57a98();
    uVar1 = (uint)puVar8 & 0xff;
    if (uVar1 < 6) {
      if (uVar1 < 3) {
        if (((ulong)puVar8 & 0xff) == 0) {
          local_168 = pFVar7->fts_path;
          if (local_168 == (char *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a24);
            (*pcVar3)();
          }
          thunk_FUN_1005b3a14();
          _swift_bridgeObjectRetain();
          pcVar9 = local_168;
          FUN_1005ad054();
          pcVar10 = pcVar9;
          pcVar14 = pcVar13;
          FUN_1005ac824();
          _swift_bridgeObjectRelease(pcVar9);
          if (pcVar13 == pcVar10) {
            _swift_bridgeObjectRelease(local_168);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a20);
            (*pcVar3)();
          }
          uVar19 = *(ulong *)pDVar18;
          uVar21 = *(ulong *)(uVar20 + 0x18);
          pcVar13 = (char *)(uVar19 + 1);
          uVar22 = 4;
        }
        else {
          if (uVar1 == 1) goto LAB_100a56754;
          local_168 = pFVar7->fts_path;
          if (local_168 == (char *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a34);
            (*pcVar3)();
          }
          thunk_FUN_1005b3a14();
          _swift_bridgeObjectRetain();
          pcVar9 = local_168;
          FUN_1005ad054();
          pcVar10 = pcVar9;
          pcVar14 = pcVar13;
          FUN_1005ac824();
          _swift_bridgeObjectRelease(pcVar9);
          if (pcVar13 == pcVar10) {
            _swift_bridgeObjectRelease(local_168);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a30);
            (*pcVar3)();
          }
          uVar19 = *(ulong *)pDVar18;
          uVar21 = *(ulong *)(uVar20 + 0x18);
          pcVar13 = (char *)(uVar19 + 1);
          uVar22 = 8;
        }
LAB_100a56730:
        uVar11 = uVar20;
        if (uVar21 >> 1 <= uVar19) {
          uVar11 = (ulong)(1 < uVar21);
          pcVar14 = pcVar13;
          FUN_100aa7854(uVar11,pcVar13,1,uVar20);
        }
        *(char **)(uVar11 + 0x10) = pcVar13;
        lVar15 = uVar11 + uVar19 * 0x10;
        *(char **)(lVar15 + 0x20) = local_168;
        *(undefined1 *)(lVar15 + 0x28) = uVar22;
        pcVar13 = pcVar14;
        uVar20 = uVar11;
      }
    }
    else {
      if (0xc < uVar1) {
LAB_100a568f0:
        *param_8 = uVar20;
        uVar1 = pFVar7->fts_errno;
        pDVar18 = (Darwin *)(ulong)uVar1;
        FUN_100a57a58();
        puVar12 = &DAT_100f2dfc8;
        _swift_allocError(&DAT_100f2dfc8,puVar8,0,0);
        *puVar8 = 0x646165725f737466;
        puVar8[1] = &DAT_e800000000000000;
        *(uint *)(puVar8 + 2) = uVar1;
        local_110 = CONCAT71(local_110._1_7_,8);
        uStack_108 = 0xd00000000000001c;
        local_100 = 0x8000000100db8740;
        local_f0 = 0xd00000000000002f;
        uStack_e8 = 0x8000000100db8710;
        uStack_e0 = 0xd000000000000025;
        local_d8 = 0x8000000100db8640;
        local_d0 = 0x280;
        local_c0 = 8;
        uStack_b8 = 0xd00000000000001c;
        uStack_b0 = 0x8000000100db8740;
        local_a0 = 0xd00000000000002f;
        uStack_98 = 0x8000000100db8710;
        uStack_90 = 0xd000000000000025;
        local_88 = 0x8000000100db8640;
        local_80 = 0x280;
        local_f8 = puVar12;
        local_a8 = puVar12;
        FUN_100a50050(&local_110,auStack_158);
        FUN_100a5008c(&local_c0);
        goto LAB_100a569b8;
      }
      uVar2 = 1 << (ulong)((uint)puVar8 & 0x1f);
      if ((uVar2 & 0x1300) == 0) {
        if ((uVar2 & 0xc00) == 0) {
          if (uVar1 != 7) goto LAB_100a568f0;
          local_168 = pFVar7->fts_path;
          if (local_168 == (char *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a44);
            (*pcVar3)();
          }
          thunk_FUN_1005b3a14();
          _swift_bridgeObjectRetain();
          pcVar9 = local_168;
          FUN_1005ad054();
          pcVar10 = pcVar9;
          pcVar14 = pcVar13;
          FUN_1005ac824();
          _swift_bridgeObjectRelease(pcVar9);
          if (pcVar13 == pcVar10) {
            _swift_bridgeObjectRelease(local_168);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a40);
            (*pcVar3)();
          }
          uVar22 = 0;
          uVar19 = *(ulong *)pDVar18;
          uVar21 = *(ulong *)(uVar20 + 0x18);
          pcVar13 = (char *)(uVar19 + 1);
        }
        else {
          local_168 = pFVar7->fts_path;
          if (local_168 == (char *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a14);
            (*pcVar3)();
          }
          thunk_FUN_1005b3a14();
          _swift_bridgeObjectRetain();
          pcVar9 = local_168;
          FUN_1005ad054();
          pcVar10 = pcVar9;
          pcVar14 = pcVar13;
          FUN_1005ac824();
          _swift_bridgeObjectRelease(pcVar9);
          if (pcVar13 == pcVar10) {
            _swift_bridgeObjectRelease(local_168);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a56a10);
            (*pcVar3)();
          }
          uVar19 = *(ulong *)pDVar18;
          uVar21 = *(ulong *)(uVar20 + 0x18);
          pcVar13 = (char *)(uVar19 + 1);
          uVar22 = 5;
        }
        goto LAB_100a56730;
      }
    }
LAB_100a56754:
    pDVar18 = (Darwin *)(uVar20 + 0x10);
    lVar15 = *(long *)pDVar18;
  }
  *param_8 = uVar20;
  _swift_bridgeObjectRetain_n(uVar20,2);
  _swift_retain(param_6);
  uVar22 = 0;
  uStack_b8 = 0;
  uVar17 = 0x4000;
  uVar16 = 1;
  local_80 = extraout_x11;
  uVar21 = uVar20;
  local_110 = uVar20;
  goto LAB_100a568b0;
  while (_Var4 = Darwin::get_errno(), _Var4 == 4) {
LAB_100a569b8:
    Darwin::set_errno(pDVar18,0);
    iVar5 = _fts_close(param_7);
    if (iVar5 != -1) break;
  }
  param_7 = (FTS *)0x0;
  uVar16 = 0;
  uVar21 = 0;
  uVar17 = 0xc000;
  uVar22 = 1;
  param_6 = 8;
  local_80 = local_d0;
  uStack_b8 = uStack_108;
  param_3 = local_100;
  in_register_00005028 = local_f8;
  param_4 = local_f0;
  in_register_00005048 = uStack_e8;
  param_5 = uStack_e0;
  in_register_00005068 = local_d8;
  goto LAB_100a568b0;
  while (_Var6 = Darwin::get_errno(), _Var6 == 4) {
LAB_100a56814:
    Darwin::set_errno(pDVar18,0);
    iVar5 = _fts_close(param_7);
    if (iVar5 != -1) break;
  }
  local_110 = 0xd00000000000002f;
  uStack_108 = 0x8000000100db8710;
  local_100 = 0xd000000000000025;
  local_f8 = (undefined *)0x8000000100db8640;
  local_f0 = 0x29f;
  FUN_100a7e4e8(&local_c0,_Var4,*(undefined8 *)(unaff_x20 + 0x30),&local_110);
  param_7 = (FTS *)0x0;
  uVar16 = 0;
  uVar17 = 0xc000;
  uVar22 = 1;
  param_6 = 8;
  uVar21 = 0;
  local_110 = CONCAT71(uStack_bf,local_c0);
  param_3 = uStack_b0;
  in_register_00005028 = local_a8;
  param_4 = local_a0;
  in_register_00005048 = uStack_98;
  param_5 = uStack_90;
  in_register_00005068 = local_88;
  goto LAB_100a568b0;
  while (_Var4 = Darwin::get_errno(), _Var4 == 4) {
LAB_100a567c0:
    Darwin::set_errno(pDVar18,0);
    iVar5 = _fts_close(param_7);
    if (iVar5 != -1) break;
  }
  _swift_bridgeObjectRetain(uVar20);
  uVar22 = 0;
  param_7 = (FTS *)0x0;
  uVar16 = 0;
  uStack_b8 = 0;
  uVar17 = 0xc000;
  param_6 = 8;
  local_80 = extraout_x11_00;
  uVar21 = 0;
  local_110 = uVar20;
LAB_100a568b0:
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = uVar16;
  param_1[3] = uVar21;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = uVar17;
  param_1[7] = uStack_b8;
  param_1[6] = local_110;
  param_1[9] = in_register_00005028;
  param_1[8] = param_3;
  param_1[0xb] = in_register_00005048;
  param_1[10] = param_4;
  param_1[0xd] = in_register_00005068;
  param_1[0xc] = param_5;
  param_1[0xe] = local_80;
  *(undefined1 *)(param_1 + 0xf) = uVar22;
  return;
}



/* Address: 0x100a56a44 | FUN_100a56a44 */

void FUN_100a56a44(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100a56aa8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a56aa8 | FUN_100a56aa8 */

long FUN_100a56aa8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  int iVar2;
  pthread_mutexattr_t local_130;
  undefined1 auStack_120 [72];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ushort uStack_b0;
  undefined1 uStack_ae;
  undefined5 uStack_ad;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_c8 = param_3 & 1;
  uStack_ae = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_50 = 0;
  uStack_68 = CONCAT53(uStack_ad,(uint3)uStack_b0);
  uStack_58 = 0;
  local_d8 = param_1;
  uStack_d0 = param_2;
  local_a8 = param_4;
  local_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = local_c8;
  uStack_60 = param_4;
  FUN_1000f7830(param_5,param_6);
  _swift_allocObject();
  *(ulong *)(param_5 + 0x38) = CONCAT53(uStack_ad,CONCAT12(uStack_ae,uStack_b0));
  *(undefined8 *)(param_5 + 0x30) = local_b8;
  *(undefined8 *)(param_5 + 0x48) = uStack_a0;
  *(undefined8 *)(param_5 + 0x40) = local_a8;
  *(undefined8 *)(param_5 + 0x50) = local_98;
  *(undefined8 *)(param_5 + 0x18) = uStack_d0;
  *(undefined8 *)(param_5 + 0x10) = local_d8;
  *(undefined8 *)(param_5 + 0x28) = uStack_c0;
  *(ulong *)(param_5 + 0x20) = local_c8;
  local_130.__sig = 0;
  local_130.__opaque[0] = '\0';
  local_130.__opaque[1] = '\0';
  local_130.__opaque[2] = '\0';
  local_130.__opaque[3] = '\0';
  local_130.__opaque[4] = '\0';
  local_130.__opaque[5] = '\0';
  local_130.__opaque[6] = '\0';
  local_130.__opaque[7] = '\0';
  FUN_1000f8cac(&local_90,auStack_120,param_7,param_8);
  _pthread_mutexattr_init(&local_130);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(param_5 + 0x58),&local_130);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56bc4);
    (*pcVar1)();
  }
  FUN_1000fb4c4(&local_d8,param_7,param_8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a56bc8 | FUN_100a56bc8 */

void FUN_100a56bc8(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar5 = param_2;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56d1c);
    (*pcVar1)();
  }
  FUN_1009ecacc();
  if (param_1 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar2 == 0) goto LAB_100a56cac;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    _swift_errorRetain(lVar5);
    _swift_errorRelease(lVar5);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar2 == 0) {
      if (lVar5 == 0) {
        _swift_errorRetain(0);
        **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
        _swift_continuation_throwingResume(param_1);
      }
      else {
        puVar3 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar7 = (undefined8 *)
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar4 = puVar3;
        plVar6 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar6 = lVar5;
        _swift_allocError(puVar3,puVar7,0,0);
        *puVar7 = puVar4;
        _swift_errorRetain(lVar5);
        _swift_continuation_throwingResumeWithError(param_1,puVar3);
      }
      if (lVar8 != 0) {
        FUN_100a55a00(FUN_100a5782c);
        FUN_1009e8f20(param_1,lVar5);
        _swift_release(lVar8);
        return;
      }
LAB_100a56cac:
      FUN_1009e8f20(param_1,lVar5);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56d20);
  (*pcVar1)();
}



/* Address: 0x100a56d20 | FUN_100a56d20 */

void FUN_100a56d20(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  
  lVar5 = param_2;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56ed4);
    (*pcVar1)();
  }
  FUN_1009ecacc();
  if (param_1 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar2 == 0) goto LAB_100a56e08;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    _swift_errorRetain(lVar5);
    _swift_errorRelease(lVar5);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar2 == 0) {
      if (lVar5 == 0) {
        _swift_errorRetain(0);
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28);
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined8 *)((long)puVar7 + 0xf) = 0;
        _swift_continuation_throwingResume(param_1);
      }
      else {
        puVar3 = &DAT_100ff69f8;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        puVar7 = (undefined8 *)
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar4 = puVar3;
        plVar6 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar6 = lVar5;
        _swift_allocError(puVar3,puVar7,0,0);
        *puVar7 = puVar4;
        _swift_errorRetain(lVar5);
        _swift_continuation_throwingResumeWithError(param_1,puVar3);
      }
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar9 + 0x60));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56edc);
          (*pcVar1)();
        }
        uStack_78 = *(undefined8 *)(lVar9 + 0x28);
        local_80 = *(undefined8 *)(lVar9 + 0x20);
        uStack_68 = *(undefined8 *)(lVar9 + 0x38);
        local_70 = *(undefined8 *)(lVar9 + 0x30);
        uStack_58 = *(undefined8 *)(lVar9 + 0x48);
        uStack_60 = *(undefined8 *)(lVar9 + 0x40);
        local_50 = *(undefined2 *)(lVar9 + 0x50);
        uStack_88 = *(undefined8 *)(lVar9 + 0x18);
        local_90 = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined2 *)(lVar9 + 0x50) = 0x8000;
        FUN_100a57abc(&local_90);
        iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x60));
        FUN_1009e8f20(param_1,lVar5);
        if (iVar2 == 0) {
          _swift_release(lVar8);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56ee0);
        (*pcVar1)();
      }
LAB_100a56e08:
      FUN_1009e8f20(param_1,lVar5);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a56ed8);
  (*pcVar1)();
}



/* Address: 0x100a56ee0 | thunk_FUN_100a56ee4 */

void thunk_FUN_100a56ee4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90cd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90cd0,&DAT_100f2b728);
  DAT_100ff6ae0 = pTVar1;
  return;
}



/* Address: 0x100a56ee4 | FUN_100a56ee4 */

void FUN_100a56ee4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90cd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90cd0,&DAT_100f2b728);
  DAT_100ff6ae0 = pTVar1;
  return;
}



/* Address: 0x100a56f24 | thunk_FUN_100a56f28 */

void thunk_FUN_100a56f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ae8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90d70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90d70,&DAT_100f2b828);
  DAT_100ff6ae8 = pTVar1;
  return;
}



/* Address: 0x100a56f28 | FUN_100a56f28 */

void FUN_100a56f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ae8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90d70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90d70,&DAT_100f2b828);
  DAT_100ff6ae8 = pTVar1;
  return;
}



/* Address: 0x100a56f68 | thunk_FUN_100a571d0 */

void thunk_FUN_100a571d0(void)

{
  FUN_100a571d0();
  return;
}



/* Address: 0x100a56f6c | FUN_100a56f6c */

void FUN_100a56f6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a56f80 | FUN_100a56f80 */

undefined1  [16] FUN_100a56f80(void)

{
  return ZEXT816(0x100f2b6a8);
}



/* Address: 0x100a56f90 | FUN_100a56f90 */

void FUN_100a56f90(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    FUN_100004594(param_1);
  }
  else {
    _swift_release(*param_1);
  }
  _swift_unknownObjectRelease(param_1[6]);
  return;
}



/* Address: 0x100a56fd0 | FUN_100a56fd0 */

undefined8 * FUN_100a56fd0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + 5);
  if (cVar1 != '\x01') {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
  }
  *(bool *)(param_1 + 5) = cVar1 == '\x01';
  param_1[6] = param_2[6];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  param_1[9] = param_2[9];
  _swift_unknownObjectRetain();
  return param_1;
}



/* Address: 0x100a57058 | FUN_100a57058 */

undefined8 * FUN_100a57058(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1000fb4c4(param_1,&DAT_100ff6af0,&DAT_100c90e18);
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
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x100a57120 | FUN_100a57120 */

void FUN_100a57120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x100a5713c | FUN_100a5713c */

undefined8 * FUN_100a5713c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_1000fb4c4(param_1,&DAT_100ff6af0,&DAT_100c90e18);
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
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_unknownObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  return param_1;
}



/* Address: 0x100a571b0 | FUN_100a571b0 */

undefined1  [16] FUN_100a571b0(void)

{
  return ZEXT816(0x100f2b728);
}



/* Address: 0x100a571c0 | FUN_100a571c0 */

void FUN_100a571c0(undefined8 *param_1)

{
  FUN_10026569c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100a571d0 | FUN_100a571d0 */

undefined8 * FUN_100a571d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1002654f8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100a57218 | thunk_FUN_100a5721c */

undefined8 * thunk_FUN_100a5721c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1002654f8(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10026569c(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100a5721c | FUN_100a5721c */

undefined8 * FUN_100a5721c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1002654f8(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10026569c(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100a57270 | thunk_FUN_100a57274 */

undefined8 * thunk_FUN_100a57274(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10026569c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100a57274 | FUN_100a57274 */

undefined8 * FUN_100a57274(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10026569c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100a572b8 | FUN_100a572b8 */

undefined1  [16] FUN_100a572b8(void)

{
  return ZEXT816(0x100f2b7a8);
}



/* Address: 0x100a572c8 | FUN_100a572c8 */

void FUN_100a572c8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    FUN_100004594();
    return;
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x100a572e0 | FUN_100a572e0 */

undefined8 * FUN_100a572e0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_2 + 5);
  if (cVar1 != '\x01') {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
  }
  *(bool *)(param_1 + 5) = cVar1 == '\x01';
  return param_1;
}



/* Address: 0x100a57344 | FUN_100a57344 */

undefined8 * FUN_100a57344(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_1000fb4c4(param_1,&DAT_100ff6af0,&DAT_100c90e18);
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



/* Address: 0x100a573d4 | FUN_100a573d4 */

void FUN_100a573d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100a573e8 | FUN_100a573e8 */

undefined8 * FUN_100a573e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_1000fb4c4(param_1,&DAT_100ff6af0,&DAT_100c90e18);
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



/* Address: 0x100a57438 | FUN_100a57438 */

undefined1  [16] FUN_100a57438(void)

{
  return ZEXT816(0x100f2b828);
}



/* Address: 0x100a57448 | FUN_100a57448 */

void FUN_100a57448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = (uint)param_6 >> 0xe & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      _swift_retain();
      _swift_retain(param_2);
      _swift_bridgeObjectRetain(param_3);
      FUN_10036c934(param_4,param_5,param_6);
      return;
    }
  }
  else if (uVar1 != 2) {
    return;
  }
  _swift_retain();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x100a574ec | FUN_100a574ec */

void FUN_100a574ec(undefined8 *param_1)

{
  FUN_100a57528(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],*(undefined2 *)(param_1 + 5));
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_release(param_1[7]);
  return;
}



/* Address: 0x100a57528 | FUN_100a57528 */

void FUN_100a57528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = (uint)param_6 >> 0xe & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      _swift_release();
      _swift_release(param_2);
      _swift_bridgeObjectRelease(param_3);
      FUN_1001b9e60(param_4,param_5,param_6);
      return;
    }
  }
  else if (uVar1 != 2) {
    return;
  }
  _swift_release();
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Address: 0x100a575cc | FUN_100a575cc */

undefined8 * FUN_100a575cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = param_2[3];
  uVar5 = param_2[4];
  uVar3 = *(undefined2 *)(param_2 + 5);
  FUN_100a57448(uVar4,uVar1,uVar6,uVar2,uVar5,uVar3);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = uVar2;
  param_1[4] = uVar5;
  *(undefined2 *)(param_1 + 5) = uVar3;
  uVar4 = param_2[7];
  uVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar4);
  return param_1;
}


