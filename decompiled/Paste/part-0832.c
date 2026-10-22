/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009095c0 | FUN_1009095c0 */

undefined1 FUN_1009095c0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 9);
}



/* Address: 0x1009095c8 | FUN_1009095c8 */

undefined4 FUN_1009095c8(void)

{
  long unaff_x20;
  
  return *(undefined4 *)(unaff_x20 + 0xc);
}



/* Address: 0x1009095d0 | FUN_1009095d0 */

void FUN_1009095d0(undefined8 param_1,undefined *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  StaticString file;
  code *pcVar3;
  int iVar4;
  DispatchTime DVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  __uint64 _Var10;
  long lVar11;
  undefined **ppuVar12;
  _StringGuts _Var13;
  char *pcVar14;
  void *pvVar15;
  long extraout_x8;
  undefined8 extraout_x12;
  long extraout_x13;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_100 [16];
  StaticString local_f0;
  __uint64 _Stack_e8;
  undefined8 local_c8 [3];
  long local_b0;
  pthread_mutexattr_t local_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __uint64 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar5 = Dispatch::DispatchTime::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppuVar6 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  if (*ppuVar6 != (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b7c);
    (*pcVar3)();
  }
  *ppuVar6 = param_2;
  local_150 = extraout_x13;
  local_148 = extraout_x12;
  local_138 = param_8;
  local_130 = param_3;
  (*param_6)(param_1);
  uVar18 = param_1;
  (*param_4)();
  local_140 = 0;
  puVar7 = (undefined *)0x0;
  local_128 = uVar18;
  FUN_100947828();
  _swift_allocObject();
  puVar7[0x20] = 0;
  puVar17 = (undefined8 *)&DAT_100feb9d8;
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  _swift_allocObject();
  puVar17[2] = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 **)(puVar7 + 0x28) = puVar17;
  *(undefined **)(puVar7 + 0x30) = puVar8;
  FUN_1006883ac();
  uVar18 = *puVar17;
  *(undefined8 *)(puVar7 + 0x38) = uVar18;
  *(undefined **)(puVar7 + 0x48) = puVar8;
  *(undefined8 *)(puVar7 + 0x50) = 0;
  puVar8 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  puVar9 = puVar8;
  _swift_allocObject();
  local_a0.__sig = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  local_a0.__opaque[4] = '\0';
  local_a0.__opaque[5] = '\0';
  local_a0.__opaque[6] = '\0';
  local_a0.__opaque[7] = '\0';
  _swift_retain(uVar18);
  _pthread_mutexattr_init(&local_a0);
  iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x10),&local_a0);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b80);
    (*pcVar3)();
  }
  *(undefined **)(puVar7 + 0x60) = puVar9;
  puVar9 = puVar8;
  _swift_allocObject(puVar8,0x50,7);
  local_a0.__sig = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  local_a0.__opaque[4] = '\0';
  local_a0.__opaque[5] = '\0';
  local_a0.__opaque[6] = '\0';
  local_a0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_a0);
  iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x10),&local_a0);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b84);
    (*pcVar3)();
  }
  *(undefined **)(puVar7 + 0x68) = puVar9;
  *(undefined2 *)(puVar7 + 0x70) = 0;
  _swift_allocObject(puVar8,0x50,7);
  local_a0.__sig = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  local_a0.__opaque[4] = '\0';
  local_a0.__opaque[5] = '\0';
  local_a0.__opaque[6] = '\0';
  local_a0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_a0);
  iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x10),&local_a0);
  if (iVar4 == 0) {
    *(undefined **)(puVar7 + 0x90) = puVar8;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_120 = param_2;
    FUN_10090dc04();
    puVar17 = (undefined8 *)(puVar7 + 0xa0);
    *(undefined8 *)(puVar7 + 0xa8) = 0;
    *puVar17 = 0;
    *(undefined **)(puVar7 + 0x98) = puVar9;
    *(undefined8 *)(puVar7 + 0xb8) = 0;
    *(undefined8 *)(puVar7 + 0xb0) = 0;
    *(undefined8 *)(puVar7 + 200) = 0;
    *(undefined8 *)(puVar7 + 0xc0) = 0;
    FUN_1000f8cac(local_138,local_c8,&DAT_100feca78,&DAT_100c845e0);
    if (local_b0 == 0) {
      local_80 = 0;
      local_a0.__opaque[0] = '\0';
      local_a0.__opaque[1] = '\0';
      local_a0.__opaque[2] = '\0';
      local_a0.__opaque[3] = '\0';
      local_a0.__opaque[4] = '\0';
      local_a0.__opaque[5] = '\0';
      local_a0.__opaque[6] = '\0';
      local_a0.__opaque[7] = '\0';
      local_a0.__sig = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      _Var10 = 0;
    }
    else {
      FUN_100076508(local_c8,&local_f0);
      DVar5.unknown = (undefined *)&local_f0;
      FUN_100076688(DVar5.unknown,&local_a0);
      DVar5 = Dispatch::DispatchTime::now(DVar5);
      _Var10 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar5);
      (**(code **)(local_150 + 8))((long)&local_150 + lVar1,local_148);
      FUN_100004594(&local_f0);
      if (0x7ffffffffffffffe < _Var10) {
        _Var10 = 0x7fffffffffffffff;
      }
    }
    local_78 = _Var10;
    _swift_beginAccess(puVar17,local_c8,0x21,0);
    FUN_10090de04(&local_a0,puVar17);
    _swift_endAccess(local_c8);
    uVar2 = local_128;
    uVar18 = local_130;
    *(int *)(puVar7 + 0x40) = (int)local_120;
    *(int *)(puVar7 + 0x44) = (int)((ulong)param_2 >> 0x20);
    *(undefined8 *)(puVar7 + 0x88) = local_130;
    *(undefined8 *)(puVar7 + 0x10) = local_128;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    puVar9 = &DAT_100fecab8;
    FUN_1000f7830(&DAT_100fecab8,&DAT_100c84610);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x10) = 0x10;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined **)(puVar7 + 0x78) = puVar9;
    puVar9 = &DAT_100fecac0;
    FUN_1000f7830(&DAT_100fecac0,&DAT_100c84618);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x10) = 0x10;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined **)(puVar7 + 0x80) = puVar9;
    _swift_beginAccess(puVar7 + 0x48,&local_a0,0x21,0);
    lVar16 = *(long *)(puVar7 + 0x48);
    _swift_retain(uVar18);
    _swift_retain(uVar2);
    _swift_retain(param_1);
    lVar11 = lVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    *(long *)(puVar7 + 0x48) = lVar16;
    if (((int)lVar11 == 0) || (*(ulong *)(lVar16 + 0x18) >> 0xd == 0)) {
      FUN_10090d9f4();
    }
    _swift_endAccess(&local_a0);
    puVar7[0x58] = 0;
    puVar8 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(undefined **)(puVar8 + 0x20) = puVar7;
    *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    puVar8[0x18] = 0xff;
    *(undefined8 *)(puVar8 + 0x38) = 0;
    *(undefined8 *)(puVar8 + 0x40) = 0;
    *(undefined8 *)(puVar8 + 0x30) = 0;
    _swift_retain(puVar7);
    FUN_10090d4a4(0,0,puVar8,FUN_100630328,&DAT_100f153f8,FUN_100308524,FUN_10090f070);
    _swift_beginAccess(puVar7 + 0x50,&local_a0,1,0);
    uVar18 = *(undefined8 *)(puVar7 + 0x50);
    *(undefined **)(puVar7 + 0x50) = puVar8;
    _swift_retain(puVar8);
    _swift_release(uVar18);
    if (*ppuVar6 != *(undefined **)(puVar7 + 0x40)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b8c);
      (*pcVar3)();
    }
    _swift_release(uVar2);
    _swift_release(puVar8);
    ppuVar12 = &PTR___tlv_bootstrap_101048e60;
    (*(code *)PTR___tlv_bootstrap_101048e60)();
    if (*ppuVar12 != (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b94);
      (*pcVar3)();
    }
    *ppuVar12 = puVar7;
    _swift_retain(puVar7);
    local_c8[0] = 0;
    FUN_100671cfc(local_c8);
    _Var13.unknown = (undefined *)local_c8;
    pcVar14 = &DAT_00000001;
    pvVar15 = (void *)0x0;
    _swift_beginAccess(param_11 + 0x10);
    uVar18 = *(undefined8 *)(param_11 + 0x10);
    *(undefined **)(param_11 + 0x10) = puVar7;
    _swift_release(uVar18);
    local_f0.unknown = (undefined *)0x1;
    _swift_retain(puVar7);
    FUN_10067215c(&local_f0);
    lVar11 = local_140;
    FUN_10093dd30();
    puVar8 = local_120;
    if (lVar11 != 0) {
      local_140 = lVar11;
      if (*ppuVar12 != (undefined *)0x0) {
        _swift_release();
        *ppuVar12 = (undefined *)0x0;
        _swift_release(puVar7);
        lVar11 = local_140;
        local_f0.unknown = (undefined *)0x0;
        _Stack_e8 = 0xe000000000000000;
        _swift_errorRetain(local_140);
        Swift::_StringGuts::grow(0x37,_Var13);
        SVar19.bridgeObject = (void *)0x8000000100db4970;
        SVar19.str = (char *)0xd000000000000034;
        SVar22.bridgeObject = pvVar15;
        SVar22.str = pcVar14;
        Swift::String::append(SVar19,SVar22);
        pcVar14 = (char *)&local_118;
        _swift_getErrorValue(lVar11,auStack_100);
        Swift::DefaultStringInterpolation::_appendInterpolation(local_118,local_110);
        SVar20.bridgeObject = (void *)0xe100000000000000;
        SVar20.str = (char *)0x2e;
        SVar23.bridgeObject = pvVar15;
        SVar23.str = pcVar14;
        Swift::String::append(SVar20,SVar23);
        _Var10 = _Stack_e8;
        file.unknown = local_f0.unknown;
        *(undefined4 *)((long)auStack_158 + lVar1) = 0;
        *(undefined8 *)((long)&uStack_160 + lVar1) = 0x8b;
        SVar21.bridgeObject = (void *)0x2;
        SVar21.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,_Var10,0xdb4960);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100909c70);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100909ba4);
      (*pcVar3)();
    }
    if (*ppuVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100909ba8);
      (*pcVar3)();
    }
    _swift_release();
    *ppuVar12 = (undefined *)0x0;
    _swift_release(puVar7);
    if (*ppuVar6 != puVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b90);
      (*pcVar3)();
    }
    *ppuVar6 = (undefined *)0x0;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100909b88);
  (*pcVar3)();
}



/* Address: 0x100909c70 | FUN_100909c70 */

undefined8 FUN_100909c70(long param_1)

{
  code *pcVar1;
  undefined8 unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (0 < param_1) {
    pcVar1 = FUN_100004520;
    FUN_10090dcf8(FUN_100004520,0,param_1);
    FUN_1000f8cac(&local_50,auStack_78,&DAT_100feca78,&DAT_100c845e0);
    _swift_allocObject();
    FUN_100909ed8(pcVar1,0,0x2d544c452d4f494e,&DAT_e800000000000000,auStack_78,FUN_10090f344,0);
    FUN_10090dda0(&local_50);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100909d2c);
  (*pcVar1)();
}



/* Address: 0x100909d2c | FUN_100909d2c */

undefined8 FUN_100909d2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 unaff_x20;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_2,auStack_58);
  if (0 < param_1) {
    pcVar1 = FUN_100004520;
    FUN_10090dcf8(FUN_100004520,0,param_1);
    FUN_1000f8cac(auStack_58,auStack_80,&DAT_100feca78,&DAT_100c845e0);
    _swift_allocObject();
    FUN_100909ed8(pcVar1,0,0x2d544c452d4f494e,&DAT_e800000000000000,auStack_80,FUN_10090f344,0);
    FUN_100004594(param_2);
    FUN_10090dda0(auStack_58);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100909e00);
  (*pcVar1)();
}



/* Address: 0x100909e00 | FUN_100909e00 */

void FUN_100909e00(void)

{
  FUN_10090c698();
  return;
}



/* Address: 0x100909e14 | FUN_100909e14 */

undefined8 FUN_100909e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 unaff_x20;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (0 < param_3) {
    pcVar1 = FUN_100004520;
    FUN_10090dcf8(FUN_100004520,0);
    FUN_1000f8cac(&local_60,auStack_88,&DAT_100feca78,&DAT_100c845e0);
    _swift_allocObject();
    _swift_bridgeObjectRetain(param_2);
    FUN_100909ed8(pcVar1,1,param_1,param_2,auStack_88,FUN_10090f344,0);
    FUN_10090dda0(&local_60);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100909ed8);
  (*pcVar1)();
}



/* Address: 0x100909ed8 | FUN_100909ed8 */

long FUN_100909ed8(long param_1,undefined1 param_2,long param_3,void *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar16;
  char *pcVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x20;
  long lVar21;
  long *plVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined1 local_140 [16];
  char acStack_130 [8];
  char acStack_128 [8];
  char local_120 [8];
  char acStack_118 [8];
  char acStack_110 [8];
  char acStack_108 [8];
  undefined *local_100;
  undefined1 auStack_f8 [24];
  pthread_t local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  pthread_mutexattr_t local_b0;
  char acStack_a0 [48];
  long local_70;
  ulong uVar15;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar7 = &DAT_100feb9c8;
  pvVar18 = param_4;
  FUN_1000f7830(&DAT_100feb9c8,&DAT_100c83090);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x18) = puVar7;
  puVar7 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  _swift_allocObject();
  local_b0.__sig = 0;
  local_b0.__opaque[0] = '\0';
  local_b0.__opaque[1] = '\0';
  local_b0.__opaque[2] = '\0';
  local_b0.__opaque[3] = '\0';
  local_b0.__opaque[4] = '\0';
  local_b0.__opaque[5] = '\0';
  local_b0.__opaque[6] = '\0';
  local_b0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_b0);
  iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x10),&local_b0);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a470);
    (*pcVar3)();
  }
  *(undefined1 *)(unaff_x20 + 0x48) = 2;
  *(undefined **)(unaff_x20 + 0x28) = puVar7;
  *(long *)(unaff_x20 + 0x30) = param_3;
  *(void **)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar7 = &DAT_100feb9d8;
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(param_4);
  uVar4 = *(ulong *)(puVar7 + 0x10);
  *(ulong *)(puVar7 + 0x10) = uVar4 + 1;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a474);
    (*pcVar3)();
  }
  *(undefined8 *)(unaff_x20 + 0x20) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(ulong *)(unaff_x20 + 0x10) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x49) = param_2;
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_7);
    _swift_bridgeObjectRelease(param_1);
    FUN_10090dda0(param_5);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_100 = puVar7;
    FUN_10090da2c(0,uVar20,0);
    lVar21 = 0x28;
    local_b0.__opaque[0] = '\0';
    local_b0.__opaque[1] = '\0';
    local_b0.__opaque[2] = '\0';
    local_b0.__opaque[3] = '\0';
    local_b0.__opaque[4] = '\0';
    local_b0.__opaque[5] = '\0';
    local_b0.__opaque[6] = '\0';
    local_b0.__opaque[7] = '\0';
    local_b0.__sig = 0;
    acStack_a0[8] = '\0';
    acStack_a0[9] = '\0';
    acStack_a0[10] = '\0';
    acStack_a0[0xb] = '\0';
    acStack_a0[0xc] = '\0';
    acStack_a0[0xd] = '\0';
    acStack_a0[0xe] = '\0';
    acStack_a0[0xf] = '\0';
    acStack_a0[0] = '\0';
    acStack_a0[1] = '\0';
    acStack_a0[2] = '\0';
    acStack_a0[3] = '\0';
    acStack_a0[4] = '\0';
    acStack_a0[5] = '\0';
    acStack_a0[6] = '\0';
    acStack_a0[7] = '\0';
    acStack_a0[0x18] = '\0';
    acStack_a0[0x19] = '\0';
    acStack_a0[0x1a] = '\0';
    acStack_a0[0x1b] = '\0';
    acStack_a0[0x1c] = '\0';
    acStack_a0[0x1d] = '\0';
    acStack_a0[0x1e] = '\0';
    acStack_a0[0x1f] = '\0';
    acStack_a0[0x10] = '\0';
    acStack_a0[0x11] = '\0';
    acStack_a0[0x12] = '\0';
    acStack_a0[0x13] = '\0';
    acStack_a0[0x14] = '\0';
    acStack_a0[0x15] = '\0';
    acStack_a0[0x16] = '\0';
    acStack_a0[0x17] = '\0';
    acStack_a0[0x28] = '\0';
    acStack_a0[0x29] = '\0';
    acStack_a0[0x2a] = '\0';
    acStack_a0[0x2b] = '\0';
    acStack_a0[0x2c] = '\0';
    acStack_a0[0x2d] = '\0';
    acStack_a0[0x2e] = '\0';
    acStack_a0[0x2f] = '\0';
    acStack_a0[0x20] = '\0';
    acStack_a0[0x21] = '\0';
    acStack_a0[0x22] = '\0';
    acStack_a0[0x23] = '\0';
    acStack_a0[0x24] = '\0';
    acStack_a0[0x25] = '\0';
    acStack_a0[0x26] = '\0';
    acStack_a0[0x27] = '\0';
    uVar19 = 0;
    do {
      puVar7 = local_100;
      if (*(ulong *)(param_1 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a464);
        (*pcVar3)();
      }
      uVar1 = uVar19 + 1;
      lVar23 = param_1 + uVar19 * 0x10;
      puVar8 = &DAT_100f15678;
      pcVar17 = (char *)0x7;
      _swift_allocObject(&DAT_100f15678,0x20);
      uVar9 = *(undefined8 *)(param_1 + lVar21);
      uVar16 = *(undefined8 *)(lVar23 + 0x20);
      *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(lVar23 + 0x28);
      *(undefined8 *)(puVar8 + 0x10) = uVar16;
      local_140._0_8_ = param_3;
      local_140._8_8_ = param_4;
      local_d8 = uVar4;
      _swift_retain_n(uVar9,2);
      _swift_bridgeObjectRetain(param_4);
      SVar24 = Swift::CustomStringConvertible::get_description();
      SVar25.bridgeObject = pvVar18;
      SVar25.str = pcVar17;
      Swift::String::append(SVar24,SVar25);
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
      SVar24.bridgeObject = &SUB_e200000000000000;
      SVar24.str = (char *)0x232d;
      SVar26.bridgeObject = pvVar18;
      SVar26.str = pcVar17;
      Swift::String::append(SVar24,SVar26);
      local_d8 = uVar1;
      SVar24 = Swift::CustomStringConvertible::get_description();
      SVar27.bridgeObject = pvVar18;
      SVar27.str = pcVar17;
      Swift::String::append(SVar24,SVar27);
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
      uVar2 = local_140._8_8_;
      uVar16 = local_140._0_8_;
      local_140._0_8_ = 0;
      FUN_1000f7830(&DAT_100fecbd8,&DAT_100c84900);
      _swift_allocObject();
      puVar10 = local_140;
      FUN_100671b38();
      puVar11 = &DAT_100f156a0;
      _swift_allocObject(&DAT_100f156a0,0x18,7);
      plVar22 = (long *)(puVar11 + 0x10);
      *plVar22 = 0;
      FUN_1000f8cac(param_5,&local_d8,&DAT_100feca78,&DAT_100c845e0);
      puVar12 = &DAT_100f156c8;
      _swift_allocObject(&DAT_100f156c8,0x78,7);
      *(int *)(puVar12 + 0x10) = (int)uVar19 + 1;
      *(int *)(puVar12 + 0x14) = (int)uVar4;
      *(long *)(puVar12 + 0x18) = unaff_x20;
      *(undefined8 *)(puVar12 + 0x20) = param_6;
      *(undefined8 *)(puVar12 + 0x28) = param_7;
      *(code **)(puVar12 + 0x30) = FUN_100134330;
      *(undefined **)(puVar12 + 0x38) = puVar8;
      *(undefined8 *)(puVar12 + 0x48) = uStack_d0;
      *(ulong *)(puVar12 + 0x40) = local_d8;
      *(undefined8 *)(puVar12 + 0x58) = uStack_c0;
      *(undefined8 *)(puVar12 + 0x50) = local_c8;
      *(undefined8 *)(puVar12 + 0x60) = local_b8;
      *(undefined1 **)(puVar12 + 0x68) = puVar10;
      *(undefined **)(puVar12 + 0x70) = puVar11;
      puVar13 = &DAT_100f156f0;
      _swift_allocObject(&DAT_100f156f0,0x20,7);
      *(code **)(puVar13 + 0x10) = FUN_10090f294;
      *(undefined **)(puVar13 + 0x18) = puVar12;
      puVar14 = &DAT_100fecbe0;
      FUN_1000f7830(&DAT_100fecbe0,&DAT_100c848a0);
      _swift_allocObject();
      *(code **)(puVar14 + 0x10) = FUN_10090f2c8;
      *(undefined **)(puVar14 + 0x18) = puVar13;
      *(undefined8 *)(puVar14 + 0x20) = uVar16;
      *(undefined8 *)(puVar14 + 0x28) = uVar2;
      local_e0 = (pthread_t)0x0;
      local_140[8] = local_b0.__opaque[0];
      local_140[9] = local_b0.__opaque[1];
      local_140[10] = local_b0.__opaque[2];
      local_140[0xb] = local_b0.__opaque[3];
      local_140[0xc] = local_b0.__opaque[4];
      local_140[0xd] = local_b0.__opaque[5];
      local_140[0xe] = local_b0.__opaque[6];
      local_140[0xf] = local_b0.__opaque[7];
      local_140._0_8_ = local_b0.__sig;
      acStack_128[0] = acStack_a0[8];
      acStack_128[1] = acStack_a0[9];
      acStack_128[2] = acStack_a0[10];
      acStack_128[3] = acStack_a0[0xb];
      acStack_128[4] = acStack_a0[0xc];
      acStack_128[5] = acStack_a0[0xd];
      acStack_128[6] = acStack_a0[0xe];
      acStack_128[7] = acStack_a0[0xf];
      acStack_130[0] = acStack_a0[0];
      acStack_130[1] = acStack_a0[1];
      acStack_130[2] = acStack_a0[2];
      acStack_130[3] = acStack_a0[3];
      acStack_130[4] = acStack_a0[4];
      acStack_130[5] = acStack_a0[5];
      acStack_130[6] = acStack_a0[6];
      acStack_130[7] = acStack_a0[7];
      acStack_118[0] = acStack_a0[0x18];
      acStack_118[1] = acStack_a0[0x19];
      acStack_118[2] = acStack_a0[0x1a];
      acStack_118[3] = acStack_a0[0x1b];
      acStack_118[4] = acStack_a0[0x1c];
      acStack_118[5] = acStack_a0[0x1d];
      acStack_118[6] = acStack_a0[0x1e];
      acStack_118[7] = acStack_a0[0x1f];
      local_120[0] = acStack_a0[0x10];
      local_120[1] = acStack_a0[0x11];
      local_120[2] = acStack_a0[0x12];
      local_120[3] = acStack_a0[0x13];
      local_120[4] = acStack_a0[0x14];
      local_120[5] = acStack_a0[0x15];
      local_120[6] = acStack_a0[0x16];
      local_120[7] = acStack_a0[0x17];
      acStack_108[0] = acStack_a0[0x28];
      acStack_108[1] = acStack_a0[0x29];
      acStack_108[2] = acStack_a0[0x2a];
      acStack_108[3] = acStack_a0[0x2b];
      acStack_108[4] = acStack_a0[0x2c];
      acStack_108[5] = acStack_a0[0x2d];
      acStack_108[6] = acStack_a0[0x2e];
      acStack_108[7] = acStack_a0[0x2f];
      acStack_110[0] = acStack_a0[0x20];
      acStack_110[1] = acStack_a0[0x21];
      acStack_110[2] = acStack_a0[0x22];
      acStack_110[3] = acStack_a0[0x23];
      acStack_110[4] = acStack_a0[0x24];
      acStack_110[5] = acStack_a0[0x25];
      acStack_110[6] = acStack_a0[0x26];
      acStack_110[7] = acStack_a0[0x27];
      _swift_retain(unaff_x20);
      _swift_retain(param_7);
      _swift_retain(puVar8);
      _swift_retain(puVar10);
      _swift_retain(puVar11);
      _swift_retain(puVar12);
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(puVar14);
      uVar6 = _pthread_attr_init((pthread_attr_t *)local_140);
      uVar15 = (ulong)uVar6;
      _qos_class_main();
      _pthread_attr_set_qos_class_np(local_140,uVar15,0);
      iVar5 = _pthread_create(&local_e0,(pthread_attr_t *)local_140,(void **)thunk_FUN_100960398,
                              puVar14);
      _pthread_attr_destroy((pthread_attr_t *)local_140);
      _swift_release(puVar12);
      _swift_release(puVar14);
      if (iVar5 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a468);
        (*pcVar3)();
      }
      local_140._0_8_ = 1;
      FUN_100671cfc(local_140);
      pvVar18 = (void *)0x0;
      _swift_beginAccess(plVar22,auStack_f8,0);
      lVar23 = *plVar22;
      if (lVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a478);
        (*pcVar3)();
      }
      _swift_retain(lVar23);
      FUN_100671c28();
      _swift_release(puVar8);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(uVar9);
      _swift_release(puVar10);
      _swift_release(puVar11);
      if (uVar19 == 0xfffffffe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a46c);
        (*pcVar3)();
      }
      uVar19 = *(ulong *)(puVar7 + 0x10);
      local_100 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
        FUN_10090da2c(1 < *(ulong *)(puVar7 + 0x18),uVar19 + 1,1);
      }
      puVar7 = local_100;
      *(ulong *)(local_100 + 0x10) = uVar19 + 1;
      *(long *)(local_100 + uVar19 * 8 + 0x20) = lVar23;
      lVar21 = lVar21 + 0x10;
      uVar19 = uVar1;
    } while (uVar20 != uVar1);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_7);
    _swift_bridgeObjectRelease(param_1);
    FUN_10090dda0(param_5);
  }
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x20),&local_b0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puVar7;
  _swift_bridgeObjectRelease(uVar16);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10090a47c | FUN_10090a47c */

void FUN_10090a47c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_10090dde8(*(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10090a4bc | FUN_10090a4bc */

void FUN_10090a4bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_10090dde8(*(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10090a504 | FUN_10090a504 */

undefined1  [16] FUN_10090a504(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1009093ac();
  _swift_bridgeObjectRelease(uVar2);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10090a55c | FUN_10090a55c */

void FUN_10090a55c(void)

{
  FUN_10090a578();
  return;
}



/* Address: 0x10090a578 | FUN_10090a578 */

ulong FUN_10090a578(long *param_1)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
  lVar4 = *param_1;
  *param_1 = lVar4 + 1;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  puVar6 = *(undefined **)(unaff_x20 + 0x20);
  if ((ulong)puVar6 >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      _Var1.unknown = puVar6;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar5 != 0) {
    if (lVar4 == -0x8000000000000000 && lVar5 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a67c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar4 / lVar5;
    }
    uVar7 = lVar4 - lVar2 * lVar5;
    uVar8 = -uVar7;
    if (-1 < (long)uVar7) {
      uVar8 = uVar7;
    }
    _swift_beginAccess(unaff_x20 + 0x20,auStack_50,0x20,0);
    uVar7 = *(ulong *)(unaff_x20 + 0x20);
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a678);
        (*pcVar3)();
      }
      uVar8 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
      _swift_retain(uVar8);
    }
    else {
      FUN_100942c70(uVar8);
    }
    _swift_endAccess(auStack_50);
    return uVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10090a664);
  (*pcVar3)();
}



/* Address: 0x10090a67c | FUN_10090a67c */

void FUN_10090a67c(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  puVar2 = *ppuVar1;
  if (puVar2 != (undefined *)0x0) {
    _swift_retain(puVar2);
    _swift_beginAccess(puVar2 + 0x88,auStack_38,0,0);
    if (*(long *)(puVar2 + 0x88) != 0 && unaff_x20 == *(long *)(puVar2 + 0x88)) {
      return;
    }
    _swift_release(puVar2);
  }
  FUN_10090a578();
  return;
}



/* Address: 0x10090a6f4 | FUN_10090a6f4 */

void FUN_10090a6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10090a704(param_1,0,param_2,param_3);
  return;
}



/* Address: 0x10090a704 | FUN_10090a704 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010090ae48) */

void FUN_10090a704(OS_dispatch_queue *param_1,ulong param_2,undefined8 param_3,DispatchQoS param_4)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  AutoreleaseFrequency AVar3;
  int iVar4;
  undefined7 extraout_var;
  Attributes AVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  dispatch_group_t group;
  DispatchQoS DVar8;
  undefined *puVar9;
  OS_dispatch_queue *queue;
  void *pvVar10;
  undefined8 *puVar11;
  long lVar12;
  DispatchWorkItemFlags qos;
  code *pcVar13;
  long lVar14;
  long lVar15;
  DispatchQoS unaff_x20;
  long lVar16;
  undefined *puVar17;
  Attributes attributes;
  undefined *puVar18;
  String label;
  DispatchWorkItemFlags local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  char *local_110;
  OS_dispatch_queue *local_108;
  undefined *local_c8 [2];
  pthread_mutexattr_t local_b8;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88 [3];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  AVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar12 = *(long *)(CONCAT71(extraout_var,AVar3.value) + -8);
  lVar15 = (long)&local_130 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar5 = Attributes::_typeMetadataAccessor();
  attributes.unknown =
       (undefined *)
       (lVar15 - (*(long *)(*(long *)(AVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar16 = *(long *)(DVar6.unknown + -8);
  puVar17 = attributes.unknown + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  qos.unknown = puVar17 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (unaff_x20.unknown[0x49] == '\0') {
LAB_10090a850:
    local_130.unknown = puVar17;
    local_128 = lVar16;
    local_120 = DVar6.unknown;
    group = _dispatch_group_create();
    DVar8.unknown = (undefined *)0x0;
    FUN_100903d90();
    local_110 = "te:isolation:_:)";
    local_108 = (OS_dispatch_queue *)DVar8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_b8.__sig = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar17 = &DAT_100fec710;
    FUN_100003a00(&DAT_100fec710,PTR__typeMetadataAccessor_100eae788,
                  PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
    puVar18 = &DAT_100fec718;
    FUN_1000f7830(&DAT_100fec718,&DAT_100c84870);
    puVar9 = &DAT_100fec720;
    local_118 = CONCAT71(extraout_var,AVar3.value);
    FUN_100155c48(&DAT_100fec720,&DAT_100fec718,&DAT_100c84870);
    Swift::SetAlgebra::_init(attributes.unknown,&local_b8,puVar18,puVar9,AVar5.unknown,puVar17);
    (**(code **)(lVar12 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
               ,local_118);
    label.bridgeObject = (void *)((ulong)local_110 | 0x8000000000000000);
    label.str = (char *)0xd00000000000001b;
    queue = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (local_108,label,(DispatchQoS)qos.unknown,attributes,
                       (AutoreleaseFrequency)(__int8)lVar15);
    lVar12 = *(long *)(unaff_x20.unknown + 0x28);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10090ae18);
      (*pcVar13)();
    }
    FUN_10090ae4c(&local_b8,unaff_x20.unknown,queue,param_3,param_4.unknown);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10090ae1c);
      (*pcVar13)();
    }
    if ((local_b8.__sig & 1U) == 0) goto LAB_10090addc;
    puVar17 = &DAT_100fecbd0;
    FUN_1000f7830(&DAT_100fecbd0,&DAT_100c84898);
    _swift_allocObject();
    *(undefined8 *)(puVar17 + 0x10) = 0;
    puVar17[0x18] = 0;
    local_b8.__sig = 0;
    local_b8.__opaque[0] = '\0';
    local_b8.__opaque[1] = '\0';
    local_b8.__opaque[2] = '\0';
    local_b8.__opaque[3] = '\0';
    local_b8.__opaque[4] = '\0';
    local_b8.__opaque[5] = '\0';
    local_b8.__opaque[6] = '\0';
    local_b8.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_b8);
    iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar17 + 0x20),&local_b8);
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10090ae20);
      (*pcVar13)();
    }
    _swift_beginAccess(unaff_x20.unknown + 0x20,local_88,0,0);
    puVar18 = *(undefined **)(unaff_x20.unknown + 0x20);
    if ((ulong)puVar18 >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar18) {
        _Var1.unknown = puVar18;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar12 != 0) {
      local_108 = param_1;
      if (lVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10090ae44);
        (*pcVar13)();
      }
      _swift_bridgeObjectRetain(puVar18);
      lVar15 = 0;
      do {
        if (((ulong)puVar18 & 0xc000000000000001) == 0) {
          lVar16 = *(long *)(puVar18 + lVar15 * 8 + 0x20);
          _swift_retain(lVar16);
        }
        else {
          lVar16 = lVar15;
          FUN_100942c70(lVar15,puVar18);
        }
        lVar15 = lVar15 + 1;
        _dispatch_group_enter(group);
        puVar9 = &DAT_100f15470;
        _swift_allocObject(&DAT_100f15470,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar17;
        *(dispatch_group_t *)(puVar9 + 0x18) = group;
        _swift_retain(puVar17);
        FUN_10093df44(queue,FUN_10090f0ec,puVar9);
        _swift_release(lVar16);
        _swift_release(puVar9);
      } while (lVar12 != lVar15);
      _swift_bridgeObjectRelease(puVar18);
      param_1 = local_108;
    }
    puVar18 = &DAT_100f15498;
    _swift_allocObject(&DAT_100f15498,0x38,7);
    *(undefined **)(puVar18 + 0x10) = unaff_x20.unknown;
    *(undefined **)(puVar18 + 0x18) = puVar17;
    *(OS_dispatch_queue **)(puVar18 + 0x20) = param_1;
    *(undefined8 *)(puVar18 + 0x28) = param_3;
    *(undefined **)(puVar18 + 0x30) = param_4.unknown;
    local_98 = FUN_10090f130;
    local_b8.__sig = (long)PTR___NSConcreteStackBlock_100ea82a0;
    local_b8.__opaque[0] = '\0';
    local_b8.__opaque[1] = '\0';
    local_b8.__opaque[2] = '\0';
    local_b8.__opaque[3] = 'B';
    local_b8.__opaque[4] = '\0';
    local_b8.__opaque[5] = '\0';
    local_b8.__opaque[6] = '\0';
    local_b8.__opaque[7] = '\0';
    local_a8 = FUN_100030410;
    puStack_a0 = &DAT_100f154b0;
    local_90 = puVar18;
    pvVar10 = __Block_copy(&local_b8);
    _swift_retain(param_4.unknown);
    _swift_retain(puVar17);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(unaff_x20);
    local_c8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar18 = &DAT_100fec6d8;
    FUN_100003a00(&DAT_100fec6d8,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar9 = &DAT_100fec6e0;
    FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
    puVar11 = &DAT_100fec6e8;
    FUN_100155c48(&DAT_100fec6e8,&DAT_100fec6e0,&DAT_100c84890);
    puVar2 = local_120;
    DVar6.unknown = local_130.unknown;
    Swift::SetAlgebra::_init(local_130.unknown,local_c8,puVar9,puVar11,local_120,puVar18);
    (extension_Dispatch)::__C::OS_dispatch_group::_notify((DispatchQoS)qos.unknown,DVar6,queue);
    __Block_release(pvVar10);
    _swift_release(puVar17);
    (**(code **)(local_128 + 8))(DVar6.unknown,puVar2);
    pcVar13 = *(code **)(lVar14 + 8);
  }
  else {
    if (unaff_x20.unknown[0x49] == '\x01') {
      puVar18 = &DAT_100f154e8;
      _swift_allocObject(&DAT_100f154e8,0x20,7);
      *(undefined8 *)(puVar18 + 0x10) = param_3;
      *(undefined **)(puVar18 + 0x18) = param_4.unknown;
      local_98 = thunk_FUN_10090f140;
      puStack_a0 = &DAT_100f15500;
      local_90 = puVar18;
    }
    else {
      if ((param_2 & 1) != 0) goto LAB_10090a850;
      puVar18 = &DAT_100f15420;
      _swift_allocObject(&DAT_100f15420,0x20,7);
      *(undefined8 *)(puVar18 + 0x10) = param_3;
      *(undefined **)(puVar18 + 0x18) = param_4.unknown;
      local_98 = thunk_FUN_10090f140;
      puStack_a0 = &DAT_100f15438;
      local_90 = puVar18;
    }
    local_b8.__opaque[0] = '\0';
    local_b8.__opaque[1] = '\0';
    local_b8.__opaque[2] = '\0';
    local_b8.__opaque[3] = 'B';
    local_b8.__opaque[4] = '\0';
    local_b8.__opaque[5] = '\0';
    local_b8.__opaque[6] = '\0';
    local_b8.__opaque[7] = '\0';
    local_a8 = FUN_100030410;
    local_b8.__sig = (long)PTR___NSConcreteStackBlock_100ea82a0;
    pvVar10 = __Block_copy(&local_b8);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_4);
    local_88[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar18 = &DAT_100fec6d8;
    FUN_100003a00(&DAT_100fec6d8,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar9 = &DAT_100fec6e0;
    FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
    puVar11 = &DAT_100fec6e8;
    FUN_100155c48(&DAT_100fec6e8,&DAT_100fec6e0,&DAT_100c84890);
    Swift::SetAlgebra::_init(puVar17,local_88,puVar9,puVar11,DVar6.unknown,puVar18);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar10);
    (**(code **)(lVar16 + 8))(puVar17,DVar6.unknown);
    pcVar13 = *(code **)(lVar14 + 8);
  }
  (*pcVar13)(qos.unknown,DVar7.unknown);
  _swift_release(local_90);
LAB_10090addc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10090ae4c | FUN_10090ae4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10090ae4c(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  DispatchQoS param_5)

{
  void *aBlock;
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  DispatchWorkItemFlags qos;
  undefined *local_c0;
  void *local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  local_98 = param_3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar9 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar9 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar10 = *(ulong *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x48) == '\0') {
    puVar4 = &DAT_100f15650;
    _swift_allocObject(&DAT_100f15650,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined **)(puVar4 + 0x18) = param_5.unknown;
    FUN_10090e948(uVar10,0);
    uVar5 = local_98;
    _swift_retain(param_5.unknown);
    uVar7 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar10;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      FUN_100903104(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100903104(uVar7,uVar10 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar10 + 1;
    lVar9 = uVar7 + uVar10 * 0x18;
    *(undefined8 *)(lVar9 + 0x20) = uVar5;
    *(code **)(lVar9 + 0x28) = FUN_100134360;
    *(undefined **)(lVar9 + 0x30) = puVar4;
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(ulong *)(param_2 + 0x40) = uVar7;
    uVar8 = *(undefined1 *)(param_2 + 0x48);
    *(undefined1 *)(param_2 + 0x48) = 0;
    FUN_10090dde8(uVar5,uVar8);
    uVar8 = 0;
  }
  else if (*(char *)(param_2 + 0x48) == '\x01') {
    puVar4 = &DAT_100f15600;
    _swift_allocObject(&DAT_100f15600,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined **)(puVar4 + 0x18) = param_5.unknown;
    *(ulong *)(puVar4 + 0x20) = uVar10;
    local_70 = FUN_100653c20;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100f15618;
    local_68 = puVar4;
    local_b8 = __Block_copy(&local_90);
    FUN_10090e948(uVar10,1);
    FUN_10090e948(uVar10,1);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_5);
    local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar4 = &DAT_100fec6d8;
    FUN_100003a00(&DAT_100fec6d8,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar2 = &DAT_100fec6e0;
    local_c0 = puVar4;
    FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
    puVar3 = &DAT_100fec6e8;
    FUN_100155c48(&DAT_100fec6e8,&DAT_100fec6e0,&DAT_100c84890);
    Swift::SetAlgebra::_init(lVar9,&local_58,puVar2,puVar3,DVar1.unknown,local_c0);
    aBlock = local_b8;
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    FUN_10090dde8(uVar10,1);
    (**(code **)(local_a0 + 8))(lVar9,DVar1.unknown);
    (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
    _swift_release(local_68);
    uVar8 = 0;
  }
  else {
    *(undefined **)(param_2 + 0x40) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined1 *)(param_2 + 0x48) = 0;
    uVar8 = 1;
  }
  *param_1 = uVar8;
  return;
}



/* Address: 0x10090b180 | FUN_10090b180 */

void FUN_10090b180(undefined8 param_1,char param_2,long param_3,dispatch_group_t param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 == '\x01') {
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090b1f8);
      (*pcVar1)();
    }
    FUN_1002ec258(*(undefined8 *)(param_3 + 0x10),*(undefined1 *)(param_3 + 0x18));
    *(undefined8 *)(param_3 + 0x10) = param_1;
    *(undefined1 *)(param_3 + 0x18) = 1;
    _swift_errorRetain(param_1);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090b1fc);
      (*pcVar1)();
    }
  }
  _dispatch_group_leave(param_4);
  return;
}



/* Address: 0x10090b1fc | FUN_10090b1fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090b1fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  _CocoaArrayWrapper _Var1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  DispatchWorkItemFlags DVar6;
  undefined8 uVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  long lVar12;
  pthread_t p_Var13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  __int64 _Var24;
  undefined8 uVar25;
  undefined8 local_130;
  DispatchWorkItemFlags local_128;
  undefined *local_120;
  long local_118;
  code *local_110;
  undefined8 local_108;
  code *local_100;
  undefined8 *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_90 [32];
  ulong uVar7;
  
  local_f0 = (undefined *)param_2;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  pcVar18 = *(code **)(DVar6.unknown + -8);
  lVar12 = (long)&local_130 - (*(long *)(pcVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar20 = *(long *)(local_e0 + -8);
  puVar15 = (undefined *)(lVar12 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1 + 0x20,auStack_90,0,0);
  puVar23 = *(undefined **)(param_1 + 0x20);
  local_130 = param_4;
  local_128.unknown = puVar15;
  local_120 = DVar6.unknown;
  local_118 = lVar20;
  local_110 = pcVar18;
  local_100 = (code *)param_3;
  local_f8 = (undefined8 *)param_5;
  local_e8 = (undefined *)param_1;
  local_d8 = lVar12;
  if ((ulong)puVar23 >> 0x3e == 0) {
    _Var24 = *(long *)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar23) {
      _Var1.unknown = puVar23;
    }
    _Var24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRetain(puVar23);
  if (_Var24 != 0) {
    uVar22 = 0;
    do {
      if (((ulong)puVar23 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b810);
          (*pcVar18)();
        }
        uVar16 = *(ulong *)(puVar23 + uVar22 * 8 + 0x20);
        _swift_retain(uVar16);
      }
      else {
        uVar16 = uVar22;
        FUN_100942c70(uVar22,puVar23);
      }
      if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b42c);
        (*pcVar18)();
      }
      lVar20 = uVar22 + 1;
      lVar12 = *(long *)(uVar16 + 0x68);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b814);
        (*pcVar18)();
      }
      if (*(byte *)(uVar16 + 0x71) - 3 < 2) {
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
        if (iVar4 != 0) goto LAB_10090b814;
      }
      else {
        if (*(byte *)(uVar16 + 0x71) != 2) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b864);
          (*pcVar18)();
        }
        *(undefined1 *)(uVar16 + 0x71) = 3;
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
        if (iVar4 != 0) {
LAB_10090b814:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b818);
          (*pcVar18)();
        }
        lVar12 = *(long *)(uVar16 + 0x18);
        lVar19 = *(long *)(lVar12 + 0x20);
        uVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar19 + 0x18));
        uVar7 = (ulong)uVar5;
        if (uVar5 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b81c);
          (*pcVar18)();
        }
        p_Var13 = *(pthread_t *)(lVar19 + 0x10);
        if (p_Var13 == (pthread_t)0x0) {
          FUN_10090de54();
          puVar15 = &DAT_100f1be58;
          _swift_allocError(&DAT_100f1be58,uVar7,0,0);
          _swift_willThrow();
          iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar19 + 0x18));
          if (iVar4 == 0) {
            _swift_unexpectedError(puVar15,"NIOPosix/Thread.swift",0x15,1,0x81);
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b8c0);
            (*pcVar18)();
          }
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b89c);
          (*pcVar18)();
        }
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar19 + 0x18));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b820);
          (*pcVar18)();
        }
        _pthread_join(p_Var13,(void **)0x0);
        lVar12 = *(long *)(lVar12 + 0x20);
        iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x18));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b824);
          (*pcVar18)();
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b828);
          (*pcVar18)();
        }
        *(undefined8 *)(lVar12 + 0x10) = 0;
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x18));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b82c);
          (*pcVar18)();
        }
        lVar12 = *(long *)(uVar16 + 0x68);
        iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b830);
          (*pcVar18)();
        }
        if (*(char *)(uVar16 + 0x71) != '\x03') {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b834);
          (*pcVar18)();
        }
        *(undefined1 *)(uVar16 + 0x71) = 4;
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b838);
          (*pcVar18)();
        }
      }
      _swift_release(uVar16);
      uVar22 = uVar22 + 1;
    } while (lVar20 != _Var24);
  }
  _swift_bridgeObjectRelease(puVar23);
  puVar15 = local_e8;
  lVar12 = *(long *)((long)local_e8 + 0x28);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b854);
    (*pcVar18)();
  }
  if (*(char *)((long)puVar15 + 0x48) != '\0') {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b8a0);
    (*pcVar18)();
  }
  lVar20 = *(long *)((long)puVar15 + 0x40);
  _swift_bridgeObjectRetain(lVar20);
  puVar23 = local_f0;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)local_f0 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b858);
    (*pcVar18)();
  }
  if (*(char *)((long)puVar23 + 0x18) == '\x01') {
    uVar8 = *(undefined8 *)((long)puVar23 + 0x10);
    _swift_errorRetain();
  }
  else {
    uVar8 = 0;
  }
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)puVar23 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b85c);
    (*pcVar18)();
  }
  uVar14 = *(undefined8 *)((long)puVar15 + 0x40);
  *(undefined8 *)((long)puVar15 + 0x40) = uVar8;
  uVar2 = *(undefined1 *)((long)puVar15 + 0x48);
  *(undefined1 *)((long)puVar15 + 0x48) = 1;
  _swift_errorRetain(uVar8);
  FUN_10090dde8(uVar14,uVar2);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10090b860);
    (*pcVar18)();
  }
  puVar15 = &DAT_100f15538;
  _swift_allocObject(&DAT_100f15538,0x28,7);
  DVar10.unknown = (undefined *)local_f8;
  *(undefined8 *)(puVar15 + 0x10) = local_130;
  *(undefined8 **)(puVar15 + 0x18) = local_f8;
  *(undefined8 *)(puVar15 + 0x20) = uVar8;
  puVar21 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = thunk_FUN_100653c20;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  local_b8 = FUN_100030410;
  puStack_b0 = &DAT_100f15550;
  local_a0 = puVar15;
  pvVar9 = __Block_copy(&local_c8);
  _swift_errorRetain(uVar8);
  _swift_retain();
  DVar6.unknown = local_128.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar10);
  local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar15 = &DAT_100fec6d8;
  FUN_100003a00(&DAT_100fec6d8,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar23 = &DAT_100fec6e0;
  FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
  puVar11 = &DAT_100fec6e8;
  FUN_100155c48(&DAT_100fec6e8,&DAT_100fec6e0,&DAT_100c84890);
  lVar12 = local_d8;
  puVar3 = local_120;
  local_f8 = puVar11;
  local_f0 = puVar23;
  local_e8 = puVar15;
  Swift::SetAlgebra::_init(local_d8,&local_d0,puVar23,puVar11,local_120,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
  __Block_release(pvVar9);
  pcVar18 = *(code **)(local_110 + 8);
  (*pcVar18)(lVar12,puVar3);
  local_100 = *(code **)(local_118 + 8);
  (*local_100)(DVar6.unknown,local_e0);
  _swift_release(local_a0);
  lVar12 = *(long *)(lVar20 + 0x10);
  local_118 = lVar20;
  if (lVar12 != 0) {
    puVar11 = (undefined8 *)(lVar20 + 0x30);
    local_110 = pcVar18;
    local_108 = uVar8;
    do {
      uVar14 = puVar11[-2];
      puVar15 = &DAT_100f15588;
      _swift_allocObject(&DAT_100f15588,0x20,7);
      uVar17 = *puVar11;
      uVar25 = puVar11[-1];
      *(undefined8 *)(puVar15 + 0x18) = *puVar11;
      *(undefined8 *)(puVar15 + 0x10) = uVar25;
      puVar23 = &DAT_100f155b0;
      _swift_allocObject(&DAT_100f155b0,0x30,7);
      *(undefined8 *)(puVar23 + 0x10) = uVar14;
      *(code **)(puVar23 + 0x18) = FUN_100134330;
      *(undefined **)(puVar23 + 0x20) = puVar15;
      *(undefined8 *)(puVar23 + 0x28) = uVar8;
      local_a8 = FUN_10090f1c8;
      local_c0 = 0x42000000;
      local_b8 = FUN_100030410;
      puStack_b0 = &DAT_100f155c8;
      local_c8 = puVar21;
      local_a0 = puVar23;
      pvVar9 = __Block_copy(&local_c8);
      _swift_errorRetain(uVar8);
      lVar20 = local_d8;
      _swift_retain(uVar17);
      DVar10.unknown = puVar15;
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(DVar10);
      local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      Swift::SetAlgebra::_init(lVar20,&local_d0,local_f0,local_f8,puVar3,local_e8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
      puVar21 = PTR___NSConcreteStackBlock_100ea82a0;
      __Block_release(pvVar9);
      pcVar18 = local_110;
      _swift_release(puVar15);
      uVar8 = local_108;
      (*pcVar18)(lVar20,puVar3);
      (*local_100)(DVar6.unknown,local_e0);
      _swift_release(local_a0);
      puVar11 = puVar11 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  FUN_10090dde8(local_118,0);
  _swift_errorRelease(uVar8);
  return;
}



/* Address: 0x10090b8c0 | FUN_10090b8c0 */

void FUN_10090b8c0(code *param_1,undefined8 param_2)

{
  StaticString file;
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  DispatchTime DVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  __uint64 _Var13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  char *pcVar17;
  void *pvVar18;
  long extraout_x8;
  long extraout_x9;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  undefined *local_180;
  long local_178;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [40];
  StaticString local_f8;
  __uint64 _Stack_f0;
  long local_e0;
  pthread_mutexattr_t local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  __uint64 local_a8;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar5 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar21 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  p_Var6 = _pthread_self();
  lVar7 = 0;
  FUN_100960288();
  _swift_allocObject();
  puVar8 = &DAT_100feca80;
  FUN_1000f7830(&DAT_100feca80,&DAT_100c845e8);
  _swift_allocObject();
  *(pthread_t *)(puVar8 + 0x10) = p_Var6;
  local_d0.__sig = 0;
  local_d0.__opaque[0] = '\0';
  local_d0.__opaque[1] = '\0';
  local_d0.__opaque[2] = '\0';
  local_d0.__opaque[3] = '\0';
  local_d0.__opaque[4] = '\0';
  local_d0.__opaque[5] = '\0';
  local_d0.__opaque[6] = '\0';
  local_d0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_d0);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x18),&local_d0);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf18);
    (*pcVar1)();
  }
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined **)(lVar7 + 0x20) = puVar8;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  puVar22 = (undefined8 *)&DAT_100feb9d8;
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  puVar9 = puVar22;
  _swift_initStaticObject();
  uVar2 = puVar9[2];
  puVar9[2] = uVar2 + 1;
  if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf1c);
    (*pcVar1)();
  }
  ppuVar10 = &PTR___tlv_bootstrap_101048e48;
  local_178 = lVar21;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  local_80 = 0;
  *(undefined8 *)(extraout_x9 + 0x38) = 0;
  *(undefined8 *)(extraout_x9 + 0x30) = 0;
  *(undefined8 *)(extraout_x9 + 0x48) = 0;
  *(undefined8 *)(extraout_x9 + 0x40) = 0;
  if (*ppuVar10 != (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf20);
    (*pcVar1)();
  }
  local_170 = (undefined *)(uVar2 << 0x20 | 1);
  *ppuVar10 = local_170;
  local_180 = DVar5.unknown;
  local_168 = param_2;
  local_160 = param_1;
  FUN_1000f7830(&DAT_100fecaa8,&DAT_100c845f8);
  _swift_allocObject();
  lVar21 = lVar7;
  _swift_retain();
  FUN_10090cdb4();
  local_158 = 0;
  puVar11 = (undefined *)0x0;
  local_150 = lVar21;
  FUN_100947828();
  _swift_allocObject();
  puVar11[0x20] = 0;
  _swift_allocObject(puVar22,0x18,7);
  puVar22[2] = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 **)(puVar11 + 0x28) = puVar22;
  *(undefined **)(puVar11 + 0x30) = puVar8;
  FUN_1006883ac();
  uVar23 = *puVar22;
  *(undefined8 *)(puVar11 + 0x38) = uVar23;
  *(undefined **)(puVar11 + 0x48) = puVar8;
  *(undefined8 *)(puVar11 + 0x50) = 0;
  puVar8 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  puVar12 = puVar8;
  _swift_allocObject();
  local_d0.__sig = 0;
  local_d0.__opaque[0] = '\0';
  local_d0.__opaque[1] = '\0';
  local_d0.__opaque[2] = '\0';
  local_d0.__opaque[3] = '\0';
  local_d0.__opaque[4] = '\0';
  local_d0.__opaque[5] = '\0';
  local_d0.__opaque[6] = '\0';
  local_d0.__opaque[7] = '\0';
  _swift_retain(uVar23);
  _pthread_mutexattr_init(&local_d0);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar12 + 0x10),&local_d0);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf24);
    (*pcVar1)();
  }
  *(undefined **)(puVar11 + 0x60) = puVar12;
  puVar12 = puVar8;
  _swift_allocObject(puVar8,0x50,7);
  local_d0.__sig = 0;
  local_d0.__opaque[0] = '\0';
  local_d0.__opaque[1] = '\0';
  local_d0.__opaque[2] = '\0';
  local_d0.__opaque[3] = '\0';
  local_d0.__opaque[4] = '\0';
  local_d0.__opaque[5] = '\0';
  local_d0.__opaque[6] = '\0';
  local_d0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_d0);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar12 + 0x10),&local_d0);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf28);
    (*pcVar1)();
  }
  *(undefined **)(puVar11 + 0x68) = puVar12;
  *(undefined2 *)(puVar11 + 0x70) = 0;
  _swift_allocObject(puVar8,0x50,7);
  local_d0.__sig = 0;
  local_d0.__opaque[0] = '\0';
  local_d0.__opaque[1] = '\0';
  local_d0.__opaque[2] = '\0';
  local_d0.__opaque[3] = '\0';
  local_d0.__opaque[4] = '\0';
  local_d0.__opaque[5] = '\0';
  local_d0.__opaque[6] = '\0';
  local_d0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_d0);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x10),&local_d0);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf2c);
    (*pcVar1)();
  }
  *(undefined **)(puVar11 + 0x90) = puVar8;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10090dc04();
  puVar22 = (undefined8 *)(puVar11 + 0xa0);
  *(undefined8 *)(puVar11 + 0xa8) = 0;
  *puVar22 = 0;
  *(undefined **)(puVar11 + 0x98) = puVar12;
  *(undefined8 *)(puVar11 + 0xb8) = 0;
  *(undefined8 *)(puVar11 + 0xb0) = 0;
  *(undefined8 *)(puVar11 + 200) = 0;
  *(undefined8 *)(puVar11 + 0xc0) = 0;
  FUN_1000f8cac(auStack_a0,&local_f8,&DAT_100feca78,&DAT_100c845e0);
  if (local_e0 == 0) {
    local_b0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_d0.__opaque[0] = '\0';
    local_d0.__opaque[1] = '\0';
    local_d0.__opaque[2] = '\0';
    local_d0.__opaque[3] = '\0';
    local_d0.__opaque[4] = '\0';
    local_d0.__opaque[5] = '\0';
    local_d0.__opaque[6] = '\0';
    local_d0.__opaque[7] = '\0';
    local_d0.__sig = 0;
    _Var13 = 0;
  }
  else {
    FUN_100076508(&local_f8,auStack_120);
    DVar5.unknown = auStack_120;
    FUN_100076688(DVar5.unknown,&local_d0);
    DVar5 = Dispatch::DispatchTime::now(DVar5);
    _Var13 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar5);
    (**(code **)(local_178 + 8))((long)&local_180 + lVar20,local_180);
    FUN_100004594(auStack_120);
    if (0x7ffffffffffffffe < _Var13) {
      _Var13 = 0x7fffffffffffffff;
    }
  }
  local_a8 = _Var13;
  _swift_beginAccess(puVar22,&local_f8,0x21,0);
  FUN_10090de04(&local_d0,puVar22);
  _swift_endAccess(&local_f8);
  lVar21 = local_150;
  *(undefined4 *)(puVar11 + 0x40) = 1;
  *(int *)(puVar11 + 0x44) = (int)uVar2;
  *(undefined8 *)(puVar11 + 0x88) = 0;
  *(long *)(puVar11 + 0x10) = local_150;
  *(long *)(puVar11 + 0x18) = lVar7;
  puVar12 = &DAT_100fecab8;
  FUN_1000f7830(&DAT_100fecab8,&DAT_100c84610);
  _swift_allocObject();
  *(undefined8 *)(puVar12 + 0x10) = 0x10;
  *(undefined **)(puVar12 + 0x18) = puVar8;
  *(undefined **)(puVar11 + 0x78) = puVar12;
  puVar12 = &DAT_100fecac0;
  FUN_1000f7830(&DAT_100fecac0,&DAT_100c84618);
  _swift_allocObject();
  *(undefined8 *)(puVar12 + 0x10) = 0x10;
  *(undefined **)(puVar12 + 0x18) = puVar8;
  *(undefined **)(puVar11 + 0x80) = puVar12;
  _swift_beginAccess(puVar11 + 0x48,&local_d0,0x21,0);
  lVar19 = *(long *)(puVar11 + 0x48);
  _swift_retain(lVar7);
  _swift_retain(lVar21);
  lVar14 = lVar19;
  _swift_isUniquelyReferenced_nonNull_native();
  *(long *)(puVar11 + 0x48) = lVar19;
  if (((int)lVar14 == 0) || (*(ulong *)(lVar19 + 0x18) >> 0xd == 0)) {
    FUN_10090d9f4();
  }
  _swift_endAccess(&local_d0);
  puVar11[0x58] = 1;
  puVar8 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined **)(puVar8 + 0x20) = puVar11;
  *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  puVar8[0x18] = 0xff;
  *(undefined8 *)(puVar8 + 0x38) = 0;
  *(undefined8 *)(puVar8 + 0x40) = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  _swift_retain(puVar11);
  FUN_10090d4a4(0,0,puVar8,FUN_100630328,&DAT_100f153f8,FUN_100308524,FUN_10090f070);
  pcVar17 = &DAT_00000001;
  pvVar18 = (void *)0x0;
  _swift_beginAccess(puVar11 + 0x50,&local_d0);
  uVar23 = *(undefined8 *)(puVar11 + 0x50);
  *(undefined **)(puVar11 + 0x50) = puVar8;
  _swift_retain(puVar8);
  _swift_release(uVar23);
  if (*ppuVar10 != *(undefined **)(puVar11 + 0x40)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf30);
    (*pcVar1)();
  }
  _swift_release(lVar21);
  _swift_release(puVar8);
  ppuVar15 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  if (*ppuVar15 != (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf40);
    (*pcVar1)();
  }
  *ppuVar15 = puVar11;
  _swift_retain(puVar11);
  ppuVar16 = &PTR_PTR_100f19fa8;
  (*local_160)();
  lVar21 = local_158;
  FUN_10093dd30();
  if (lVar21 != 0) {
    local_158 = lVar21;
    if (*ppuVar15 != (undefined *)0x0) {
      _swift_release();
      *ppuVar15 = (undefined *)0x0;
      _swift_release(puVar11);
      lVar7 = local_158;
      local_f8.unknown = (undefined *)0x0;
      _Stack_f0 = 0xe000000000000000;
      _swift_errorRetain(local_158);
      Swift::_StringGuts::grow(0x37,(_StringGuts)ppuVar16);
      SVar24.bridgeObject = (void *)0x8000000100db4970;
      SVar24.str = (char *)0xd000000000000034;
      SVar27.bridgeObject = pvVar18;
      SVar27.str = pcVar17;
      Swift::String::append(SVar24,SVar27);
      pcVar17 = (char *)&local_148;
      _swift_getErrorValue(lVar7,auStack_130);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_148,local_140);
      SVar25.bridgeObject = (void *)0xe100000000000000;
      SVar25.str = (char *)0x2e;
      SVar28.bridgeObject = pvVar18;
      SVar28.str = pcVar17;
      Swift::String::append(SVar25,SVar28);
      _Var13 = _Stack_f0;
      file.unknown = local_f8.unknown;
      *(undefined4 *)((long)auStack_188 + lVar20) = 0;
      *(undefined8 *)((long)&uStack_190 + lVar20) = 0x8b;
      SVar26.bridgeObject = (void *)0x2;
      SVar26.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar26,file,_Var13,0xdb4960);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c058);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf50);
    (*pcVar1)();
  }
  if (*ppuVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf54);
    (*pcVar1)();
  }
  _swift_release();
  *ppuVar15 = (undefined *)0x0;
  _swift_release(puVar11);
  if (*ppuVar10 != local_170) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf34);
    (*pcVar1)();
  }
  *ppuVar10 = (undefined *)0x0;
  FUN_10090dda0(auStack_a0);
  lVar20 = *(long *)(lVar7 + 0x20);
  uVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar20 + 0x18));
  uVar2 = (ulong)uVar4;
  if (uVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf38);
    (*pcVar1)();
  }
  if (*(long *)(lVar20 + 0x10) == 0) {
    FUN_10090de54();
    puVar8 = &DAT_100f1be58;
    _swift_allocError(&DAT_100f1be58,uVar2,0,0);
    _swift_willThrow();
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar20 + 0x18));
    if (iVar3 == 0) {
      _swift_unexpectedError(puVar8,"NIOPosix/Thread.swift",0x15,1,0x77);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c078);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf8c);
    (*pcVar1)();
  }
  *(undefined8 *)(lVar20 + 0x10) = 0;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar20 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090bf3c);
    (*pcVar1)();
  }
  _swift_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10090c078 | FUN_10090c078 */

void FUN_10090c078(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  if (*ppuVar2 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c0a4);
  (*pcVar1)();
}



/* Address: 0x10090c0a4 | FUN_10090c0a4 */

void FUN_10090c0a4(void)

{
  FUN_10090a67c();
  return;
}



/* Address: 0x10090c0c0 | FUN_10090c0c0 */

void FUN_10090c0c0(long param_1)

{
  code *pcVar1;
  
  FUN_10090957c();
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c0dc);
  (*pcVar1)();
}



/* Address: 0x10090c0dc | FUN_10090c0dc */

undefined1  [16] FUN_10090c0dc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long unaff_x20;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  Swift::_StringGuts::grow(0x37,param_2);
  SVar1.bridgeObject = (void *)0x8000000100db49d0;
  SVar1.str = (char *)0xd00000000000002e;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x30),SVar4);
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar1,SVar5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  SVar2.bridgeObject = &DAT_e500000000000000;
  SVar2.str = (char *)0x7d202a232d;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x10090c190 | FUN_10090c190 */

void FUN_10090c190(void)

{
  FUN_10090c0dc();
  return;
}



/* Address: 0x10090c1b0 | FUN_10090c1b0 */

void FUN_10090c1b0(void)

{
  FUN_10000cbfc();
  return;
}



/* Address: 0x10090c1bc | FUN_10090c1bc */

undefined8 FUN_10090c1bc(void)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined1 auStack_30 [32];
  
  FUN_10000cbfc();
  puVar1 = &DAT_100fec4c0;
  FUN_1000f7830(&DAT_100fec4c0,&DAT_100c83b80);
  _swift_dynamicCast(&local_38,auStack_30,puVar1,PTR___type_metadata_for_Swift_UnownedJob_100eaebf8,
                     7);
  return local_38;
}



/* Address: 0x10090c214 | FUN_10090c214 */

void FUN_10090c214(void)

{
  FUN_10090de94();
  return;
}



/* Address: 0x10090c220 | FUN_10090c220 */

undefined8 FUN_10090c220(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x38);
}



/* Address: 0x10090c228 | FUN_10090c228 */

void FUN_10090c228(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  param_1[6] = param_2;
  param_1[7] = param_7;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Address: 0x10090c23c | FUN_10090c23c */

void FUN_10090c23c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  FUN_100076508(param_3,param_1);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Address: 0x10090c270 | FUN_10090c270 */

undefined1  [16] FUN_10090c270(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x1c,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_10090dec8();
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x29;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0x8000000100db4a00;
  auVar1._0_8_ = 0xd000000000000019;
  return auVar1;
}



/* Address: 0x10090c30c | thunk_FUN_10090c270 */

void thunk_FUN_10090c270(void)

{
  FUN_10090c270();
  return;
}



/* Address: 0x10090c310 | FUN_10090c310 */

bool FUN_10090c310(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_2 + 0x38);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar2 = *(ulong *)(param_2 + 0x30) <= *(ulong *)(param_1 + 0x30);
    }
    return !bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c340);
  (*pcVar1)();
}



/* Address: 0x10090c340 | FUN_10090c340 */

bool FUN_10090c340(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30);
}



/* Address: 0x10090c354 | FUN_10090c354 */

bool FUN_10090c354(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x38);
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar2 = *(ulong *)(param_1 + 0x30) <= *(ulong *)(param_2 + 0x30);
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c388);
  (*pcVar1)();
}



/* Address: 0x10090c388 | FUN_10090c388 */

bool FUN_10090c388(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_2 + 0x38);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar2 = *(ulong *)(param_2 + 0x30) <= *(ulong *)(param_1 + 0x30);
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c3bc);
  (*pcVar1)();
}



/* Address: 0x10090c3bc | FUN_10090c3bc */

bool FUN_10090c3bc(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x38);
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = uVar4 <= uVar3;
    if (uVar3 == uVar4) {
      bVar2 = *(ulong *)(param_1 + 0x30) <= *(ulong *)(param_2 + 0x30);
    }
    return !bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10090c3ec);
  (*pcVar1)();
}



/* Address: 0x10090c3ec | FUN_10090c3ec */

long FUN_10090c3ec(ulong param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  
  if (-1 < (long)(param_2 | param_1)) {
    lVar1 = 0;
    if (param_1 <= param_2) {
      lVar1 = param_2 - param_1;
    }
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10090c404);
  (*pcVar2)();
}



/* Address: 0x10090c404 | FUN_10090c404 */

void FUN_10090c404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(long *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  if (param_4 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_5 = 0;
  }
  else {
    _swift_getObjectType(param_4);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0xb0) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  _swift_task_switch(FUN_10090c484,UVar1.unknown);
  return;
}



/* Address: 0x10090c484 | FUN_10090c484 */

void FUN_10090c484(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (0 < *(long *)(unaff_x22 + 0x70)) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    pcVar2 = FUN_100004520;
    FUN_10090dcf8(FUN_100004520,0);
    FUN_1000f8cac(uVar4,unaff_x22 + 0x40,&DAT_100feca78,&DAT_100c845e0);
    _swift_allocObject(uVar3,0x4a,7);
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    FUN_100909ed8(pcVar2,2,0x2d544c452d4f494e,&DAT_e800000000000000,unaff_x22 + 0x40,FUN_10090f344,0
                 );
    *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
    plVar5 = (long *)0xb0;
    _swift_retain(uVar3);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 200) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10090c5c0;
    FUN_10095b7c8(plVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x80),
                  *(undefined8 *)(unaff_x22 + 0x88),&DAT_100c84630,unaff_x22 + 0x10,&DAT_100c84640,
                  uVar3,*(undefined8 *)(unaff_x22 + 0xa0));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10090c5c0);
  (*pcVar2)();
}



/* Address: 0x10090c5c0 | FUN_10090c5c0 */

void FUN_10090c5c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10090c620;
  }
  else {
    pcVar1 = FUN_10090c65c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xb0),*(undefined8 *)(lVar2 + 0xb8));
  return;
}



/* Address: 0x10090c620 | FUN_10090c620 */

void FUN_10090c620(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010090c658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10090c65c | FUN_10090c65c */

void FUN_10090c65c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010090c694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10090c698 | FUN_10090c698 */

void FUN_10090c698(undefined8 param_1)

{
  FUN_1000f7830(&DAT_100fecaa8,&DAT_100c845f8);
  _swift_allocObject();
  _swift_retain(param_1);
  FUN_10090cdb4();
  return;
}



/* Address: 0x10090c6f0 | FUN_10090c6f0 */

void FUN_10090c6f0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x00010090c768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,param_4);
  return;
}



/* Address: 0x10090c76c | FUN_10090c76c */

void FUN_10090c76c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  _swift_task_switch(FUN_10090c784,0,0);
  return;
}



/* Address: 0x10090c784 | FUN_10090c784 */

void FUN_10090c784(void)

{
  AutoreleaseFrequency AVar1;
  byte bVar2;
  OS_dispatch_queue *this;
  DispatchQoS DVar3;
  Attributes AVar4;
  Attributes attributes;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  ulong uVar8;
  OS_dispatch_queue *pOVar9;
  long *plVar10;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  ulong uVar16;
  String label;
  String isolation;
  String function;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  this = (OS_dispatch_queue *)0x0;
  FUN_100903d90();
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  DVar3.unknown =
       (undefined *)(*(long *)(*(long *)(DVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  AVar4 = Attributes::_typeMetadataAccessor();
  attributes.unknown =
       (undefined *)(*(long *)(*(long *)(AVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x70) = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fec710;
  FUN_100003a00(&DAT_100fec710,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar6 = &DAT_100fec718;
  FUN_1000f7830(&DAT_100fec718,&DAT_100c84870);
  puVar7 = &DAT_100fec720;
  FUN_100155c48(&DAT_100fec720,&DAT_100fec718,&DAT_100c84870);
  Swift::SetAlgebra::_init
            (attributes.unknown,(undefined8 *)(unaff_x22 + 0x70),puVar6,puVar7,AVar4.unknown,puVar5)
  ;
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar14 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar14 + 0x68))();
  label.bridgeObject = (void *)0xee006e776f647475;
  label.str = (char *)0x68732e474c45544d;
  pOVar9 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (this,label,DVar3,attributes,(AutoreleaseFrequency)(__int8)uVar8);
  *(OS_dispatch_queue **)(unaff_x22 + 0x80) = pOVar9;
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(attributes.unknown);
  _swift_task_dealloc(DVar3.unknown);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(OS_dispatch_queue **)(unaff_x22 + 0x68) = pOVar9;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar10 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10090cb18;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar10;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10090cb7c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar5 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  lVar14 = *(long *)(puVar5 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  uVar8 = lVar15 + 0xf;
  uVar11 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar11);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0x8000000100db4a20;
  function.str = (char *)0xd000000000000040;
  Swift::CheckedContinuation::init(continuation,function);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar14 + 0x10))();
  uVar13 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100f153a8;
  _swift_allocObject(&DAT_100f153a8,uVar16 + lVar15,uVar13 | 7);
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar16,uVar8,puVar5);
  FUN_10090a704(pOVar9,1,thunk_FUN_10090f01c,puVar6);
  _swift_release(puVar6);
  (**(code **)(lVar14 + 8))(uVar11,puVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10090cb18 | FUN_10090cb18 */

void FUN_10090cb18(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10090cbec;
  }
  else {
    *(long *)(lVar2 + 0x90) = unaff_x20;
    pcVar1 = FUN_10090cc28;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10090cb7c | FUN_10090cb7c */

void FUN_10090cb7c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    pcVar1 = FUN_10090cbec;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x90) = lVar3;
    pcVar1 = FUN_10090cc28;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10090cbec | FUN_10090cbec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090cbec(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010090cc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10090cc28 | FUN_10090cc28 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090cc28(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010090cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10090cc64 | FUN_10090cc64 */

void FUN_10090cc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  lVar4 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,puVar1);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f153d0;
  _swift_allocObject(&DAT_100f153d0,uVar6 + lVar5,uVar3 | 7);
  (**(code **)(lVar4 + 0x20))
            (puVar2 + uVar6,&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
  FUN_10090a704(param_3,1,thunk_FUN_10090f01c,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10090cd44 | FUN_10090cd44 */

void FUN_10090cd44(long param_1)

{
  undefined *puVar1;
  long local_28;
  
  if (param_1 == 0) {
    FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
    Swift::CheckedContinuation::resume();
  }
  else {
    local_28 = param_1;
    _swift_errorRetain();
    puVar1 = &DAT_100fecbc0;
    FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
    Swift::CheckedContinuation::resume(&local_28,puVar1);
  }
  return;
}



/* Address: 0x10090cdb4 | FUN_10090cdb4 */

void FUN_10090cdb4(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  pthread_mutexattr_t local_b0;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long local_48;
  ulong uVar4;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  *(undefined4 *)(unaff_x20 + 0x20) = 0xffffffff;
  puVar3 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  _swift_allocObject();
  local_b0.__sig = 0;
  local_b0.__opaque[0] = '\0';
  local_b0.__opaque[1] = '\0';
  local_b0.__opaque[2] = '\0';
  local_b0.__opaque[3] = '\0';
  local_b0.__opaque[4] = '\0';
  local_b0.__opaque[5] = '\0';
  local_b0.__opaque[6] = '\0';
  local_b0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_b0);
  uVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x10),&local_b0);
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090cf8c);
    (*pcVar1)();
  }
  *(undefined4 *)(unaff_x20 + 0x38) = 0xffffffff;
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x40;
  FUN_10095fa70();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090cf90);
    (*pcVar1)();
  }
  *(undefined1 *)(unaff_x20 + 0x10) = 2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x48),auStack_60,0,0);
  if (*(long *)(unaff_x20 + 0x48) + 0xfc00000000000000U >> 0x3b < 0x1f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090cf94);
    (*pcVar1)();
  }
  puVar5 = (undefined8 *)(*(long *)(unaff_x20 + 0x48) << 5);
  _swift_retain(param_1);
  _swift_slowAlloc(puVar5,0xffffffffffffffff);
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *(undefined8 **)(unaff_x20 + 0x40) = puVar5;
  FUN_10095eed4();
  if (unaff_x21 == 0) {
    _swift_beginAccess((undefined4 *)(unaff_x20 + 0x38),auStack_78,1,0);
    *(int *)(unaff_x20 + 0x38) = (int)puVar5;
    _swift_beginAccess((undefined1 *)(unaff_x20 + 0x10),auStack_90,1,0);
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
    local_b0.__sig = 0;
    local_b0.__opaque[0] = -10;
    local_b0.__opaque[1] = -1;
    local_b0.__opaque[2] = '%';
    local_b0.__opaque[3] = '\0';
    local_9c = 0;
    local_b0.__opaque[4] = '\0';
    local_b0.__opaque[5] = '\0';
    local_b0.__opaque[6] = '\0';
    local_b0.__opaque[7] = '\0';
    uStack_a0 = 0;
    local_94 = 0;
    FUN_10090cf98(&local_b0);
    _swift_release(param_1);
  }
  else {
    _swift_release(param_1);
    _swift_release();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10090cf98 | FUN_10090cf98 */

void FUN_10090cf98(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x21;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x38,auStack_48,0,0);
  FUN_10095ebc4(*(undefined4 *)(param_2 + 0x38),param_1,1,0,0,0);
  if (unaff_x21 != (undefined8 *)0x0) {
    _swift_errorRetain();
    puVar1 = &DAT_100febaf0;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    puVar2 = &local_68;
    _swift_dynamicCast(puVar2,&stack0xffffffffffffffb0,puVar1,&DAT_100ef11e8,0);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = unaff_x21;
      _swift_errorRelease();
      if (local_58 == 4) {
        _swift_bridgeObjectRelease(local_60);
        _swift_errorRelease(unaff_x21);
        return;
      }
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
      *puVar2 = local_68;
      puVar2[1] = local_60;
      *(int *)(puVar2 + 2) = local_58;
      _swift_willThrow();
    }
    _swift_errorRelease(unaff_x21);
  }
  return;
}



/* Address: 0x10090d0b8 | FUN_10090d0b8 */

void FUN_10090d0b8(void)

{
  FUN_10090d4a4();
  return;
}



/* Address: 0x10090d0dc | FUN_10090d0dc */

void FUN_10090d0dc(void)

{
  FUN_10090d114();
  return;
}



/* Address: 0x10090d0f8 | FUN_10090d0f8 */

void FUN_10090d0f8(void)

{
  FUN_10090d114();
  return;
}



/* Address: 0x10090d114 | FUN_10090d114 */

void FUN_10090d114(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *(ulong *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    (*param_5)(param_1,param_2,param_3);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  _swift_allocObject(param_6,0x29,7);
  *(long *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(char *)(param_6 + 0x28) = (char)param_3;
  pcVar4 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_1008fde58(param_1,param_2,param_3);
  (*pcVar4)(param_7,param_6,uVar2,lVar1);
  _swift_release(param_6);
  return;
}



/* Address: 0x10090d22c | FUN_10090d22c */

void FUN_10090d22c(void)

{
  FUN_10090d248();
  return;
}



/* Address: 0x10090d248 | FUN_10090d248 */

void FUN_10090d248(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar4 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    (*param_4)(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar4);
    return;
  }
  _swift_allocObject(param_5,0x21,7);
  *(long *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(char *)(param_5 + 0x20) = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_1008fa558(param_1,param_2);
  (*pcVar5)(param_6,param_5,uVar2,lVar1);
  _swift_release(param_5);
  return;
}



/* Address: 0x10090d350 | FUN_10090d350 */

void FUN_10090d350(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008f1c14(param_1,param_2,param_3);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f15380;
  _swift_allocObject(&DAT_100f15380,0x30,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar4[0x2e] = (char)(param_3 >> 0x30);
  *(short *)(puVar4 + 0x2c) = (short)(param_3 >> 0x20);
  *(int *)(puVar4 + 0x28) = (int)param_3;
  puVar4[0x2f] = (char)(param_3 >> 0x38);
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_1008fa5cc(param_1,param_2,param_3,param_3 >> 0x38);
  (*pcVar5)(FUN_10090ef9c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10090d480 | FUN_10090d480 */

void FUN_10090d480(void)

{
  FUN_10090d4a4();
  return;
}


