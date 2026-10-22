/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100939c74 | FUN_100939c74 */

undefined1  [16] FUN_100939c74(void)

{
  return ZEXT816(0x100f196a8);
}



/* Address: 0x100939c84 | FUN_100939c84 */

void FUN_100939c84(void)

{
  long *unaff_x20;
  
  FUN_100939b9c(*unaff_x20 + 0x10,*unaff_x20 + 0x30);
  return;
}



/* Address: 0x100939cb8 | FUN_100939cb8 */

void FUN_100939cb8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 + 0xff00000000000000U >> 0x39 < 0x7f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d6c);
    (*pcVar1)();
  }
  lVar2 = 4;
  FUN_100673550();
  if (lVar2 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d70);
    (*pcVar1)();
  }
  lVar3 = lVar2 * 4 * param_1;
  if (SUB168(SEXT816(lVar2 * 4) * SEXT816(param_1),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d74);
    (*pcVar1)();
  }
  if (!SCARRY8(param_1 * 0x38,param_1 * 0x80)) {
    if (SCARRY8(param_1 * 0xb8,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d7c);
      (*pcVar1)();
    }
    if (!SCARRY8(param_1 * 0xb8 + lVar3,4)) {
      lVar2 = 0;
      FUN_100939b44();
      _swift_allocObject();
      *(long *)(lVar2 + 0x10) = param_1;
      *(long *)(lVar2 + 0x18) = param_1 * 0x38;
      *(long *)(lVar2 + 0x20) = param_1 * 0x80;
      *(long *)(lVar2 + 0x28) = lVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d80);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100939d78);
  (*pcVar1)();
}



/* Address: 0x100939d80 | FUN_100939d80 */

void FUN_100939d80(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ec0);
    (*pcVar2)();
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar3 = 4;
  FUN_100673550();
  if (uVar3 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ec4);
    (*pcVar2)();
  }
  if (lVar6 < (long)(uVar3 * 4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ec8);
    (*pcVar2)();
  }
  if ((uVar3 & 0x3fffffffffffffff) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ecc);
    (*pcVar2)();
  }
  lVar6 = param_1 + 0x30;
  lVar1 = lVar6 + lVar1 + lVar5;
  FUN_100955a50(lVar1,lVar1 + uVar3 * 4);
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
    if (SCARRY8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ee4);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ee8);
      (*pcVar2)();
    }
    lVar4 = 4;
    FUN_100673550();
    if (lVar4 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939eec);
      (*pcVar2)();
    }
    if (lVar5 < lVar4 * 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ef0);
      (*pcVar2)();
    }
    if (*(int *)(lVar6 + lVar1 + lVar5) != -0x21524111) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ef4);
      (*pcVar2)();
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
    if (SCARRY8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ed0);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ed4);
      (*pcVar2)();
    }
    lVar4 = 4;
    FUN_100673550();
    if (lVar4 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ed8);
      (*pcVar2)();
    }
    if (lVar5 < lVar4 * 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939edc);
      (*pcVar2)();
    }
    if (*(int *)(lVar6 + lVar1 + lVar5) != -0x21524111) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939ee0);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x100939ef4 | FUN_100939ef4 */

undefined1  [16]
FUN_100939ef4(long param_1,char *param_2,long param_3,long param_4,long param_5,undefined8 param_6,
             undefined4 param_7)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x21;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  String SVar14;
  undefined8 local_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  long lStack_88;
  undefined8 *local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar1 = *(long *)(param_1 + 0x18);
  lVar12 = *(long *)(param_1 + 0x20);
  if (SCARRY8(lVar1,lVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1c8);
    (*pcVar3)();
  }
  lVar10 = *(long *)(param_1 + 0x28);
  uVar4 = 4;
  pcVar7 = param_2;
  FUN_100673550();
  if (uVar4 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1cc);
    (*pcVar3)();
  }
  if (lVar10 < (long)(uVar4 * 4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1d0);
    (*pcVar3)();
  }
  if ((uVar4 & 0x3fffffffffffffff) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1d4);
    (*pcVar3)();
  }
  lVar10 = param_1 + 0x30;
  puVar11 = (undefined8 *)(lVar10 + lVar1 + lVar12);
  lStack_78 = (long)puVar11 + uVar4 * 4;
  local_70 = 0;
  local_80 = puVar11;
  thunk_FUN_100937a78();
  FUN_1005d8534(pcVar7);
  if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    uVar8 = 0x100000000;
  }
  else {
    FUN_1005d8534(uVar4);
    uVar8 = *(undefined8 *)(&DAT_100c855b8 + (uVar4 >> 0x3e) * 8);
  }
  FUN_1009006e4(param_2,uVar8);
  if ((*param_2 != '\x04') && (param_2[0x20] != '\x01')) {
    SVar14.bridgeObject = (void *)0x2;
    SVar14.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar14,(StaticString)0xd00000000000002b,0x8000000100db4bc0,
               0xdb4bc0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a254);
    (*pcVar3)();
  }
  if (local_70 == 0) {
    puVar11 = (undefined8 *)0x0;
    lVar1 = 0;
  }
  else {
    if (local_70 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1ec);
      (*pcVar3)();
    }
    lVar1 = (long)puVar11 + local_70;
  }
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a0e0);
    (*pcVar3)();
  }
  lStack_88 = param_5 - param_4;
  uVar2 = *(uint *)(*(long *)(param_3 + 0x20) + 0x10);
  puVar5 = (undefined8 *)(ulong)uVar2;
  local_90 = param_4;
  if ((int)uVar2 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd00000000000001f;
    puVar5[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar5 + 2) = 9;
    _swift_willThrow();
  }
  else {
    local_b0 = &local_90;
    local_a8 = 1;
    uVar4 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      uVar4 = lVar1 - (long)puVar11;
    }
    local_c0 = param_6;
    local_b8 = param_7;
    local_a0 = puVar11;
    if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1f0);
      (*pcVar3)();
    }
    local_98 = (undefined4)uVar4;
    uStack_94 = 0;
    puVar9 = &local_c0;
    FUN_10095e03c(puVar5,puVar9,0);
    if (unaff_x21 == 0) {
      lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
      if (SCARRY8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1f4);
        (*pcVar3)();
      }
      lVar12 = *(long *)(param_1 + 0x28);
      if (SCARRY8(lVar1,lVar12)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1f8);
        (*pcVar3)();
      }
      lVar6 = 4;
      FUN_100673550();
      if (lVar6 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1fc);
        (*pcVar3)();
      }
      if (lVar12 < lVar6 * 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a200);
        (*pcVar3)();
      }
      puVar11 = puVar9;
      if (*(int *)(lVar10 + lVar1 + lVar12) != -0x21524111) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a0d4);
        (*pcVar3)();
      }
      goto LAB_10093a180;
    }
  }
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
  if (SCARRY8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1d8);
    (*pcVar3)();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (SCARRY8(lVar1,(long)puVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1dc);
    (*pcVar3)();
  }
  lVar12 = 4;
  FUN_100673550();
  if (lVar12 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1e0);
    (*pcVar3)();
  }
  if ((long)puVar5 < lVar12 * 4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1e4);
    (*pcVar3)();
  }
  if (*(int *)((long)puVar5 + lVar10 + lVar1) != -0x21524111) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093a1e8);
    (*pcVar3)();
  }
LAB_10093a180:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar13._8_8_ = puVar11;
  auVar13._0_8_ = puVar5;
  return auVar13;
}



/* Address: 0x10093a254 | FUN_10093a254 */

void FUN_10093a254(UnownedJob param_1)

{
  FUN_10093a4d4();
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10093a294 | FUN_10093a294 */

void FUN_10093a294(void)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  StaticString file;
  long lVar7;
  String SVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xe,0,0);
  if ((bVar3 & 1) == 0) {
LAB_10093a340:
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar7) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  puVar5 = &DAT_100fecf58;
  FUN_1000f7830(&DAT_100fecf58,&DAT_100c84f70);
  _swift_initStaticObject();
  if (puVar5[0x10] == '\0') {
    puVar5[0x10] = '\x01';
    iVar4 = _pthread_main_np();
    if (iVar4 == 1) {
      plVar6 = (long *)0x0;
      _dlopen(0,2);
      _dlsym();
      if ((plVar6 != (long *)0x0) && (*plVar6 == 0)) {
        *plVar6 = (long)FUN_10093a3f8;
      }
      goto LAB_10093a340;
    }
    pcVar1 = "Must be called from the main thread";
    file.unknown = (undefined *)0xd000000000000023;
  }
  else {
    pcVar1 = "Must be called only once";
    file.unknown = (undefined *)0xd000000000000018;
  }
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
             0xdb4ec0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10093a3f8);
  (*pcVar2)();
}



/* Address: 0x10093a3f8 | FUN_10093a3f8 */

void FUN_10093a3f8(UnownedJob param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 auStack_48 [24];
  
  if (DAT_100fed838 != -1) {
    _swift_once(&DAT_100fed838,FUN_10093a590);
  }
  puVar1 = DAT_100fed840;
  ppuVar2 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  ppuVar3 = (undefined **)*ppuVar2;
  if (ppuVar3 != (undefined **)0x0) {
    _swift_retain(ppuVar3);
    _swift_beginAccess(ppuVar3 + 0x11,auStack_48,0,0);
    ppuVar2 = ppuVar3;
    if (ppuVar3[0x11] != (undefined *)0x0 && puVar1 == ppuVar3[0x11]) goto LAB_10093a47c;
    _swift_release(ppuVar3);
    ppuVar2 = ppuVar3;
  }
  FUN_10090a578();
LAB_10093a47c:
  FUN_100947828(0);
  FUN_10093a4d4();
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  _swift_release(ppuVar2);
  return;
}



/* Address: 0x10093a4d4 | FUN_10093a4d4 */

void FUN_10093a4d4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fed830 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100947828(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c85854;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85854,uVar1);
  DAT_100fed830 = pTVar2;
  return;
}



/* Address: 0x10093a518 | FUN_10093a518 */

void FUN_10093a518(void)

{
  FUN_10093a550(&DAT_100fed838,&DAT_100fed840,FUN_10093a590);
  return;
}



/* Address: 0x10093a534 | FUN_10093a534 */

void FUN_10093a534(void)

{
  FUN_10093a550(&DAT_100fed848,&DAT_100fed850,FUN_10093a6c0);
  return;
}



/* Address: 0x10093a550 | FUN_10093a550 */

void FUN_10093a550(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 == -1) {
    _swift_retain(*param_2);
    return;
  }
  _swift_once(param_1,param_3);
  _swift_retain(*param_2);
  return;
}



/* Address: 0x10093a590 | FUN_10093a590 */

void FUN_10093a590(undefined8 param_1)

{
  FUN_10093a5ac();
  DAT_100fed840 = param_1;
  return;
}



/* Address: 0x10093a5ac | FUN_10093a5ac */

void FUN_10093a5ac(ulong param_1)

{
  code *pcVar1;
  String SVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_1006558c4();
  if ((param_1 & 1) == 0) {
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd0000000000000ab,0x8000000100db5010,
               0xdb4f70);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093a6c0);
    (*pcVar1)();
  }
  FUN_100655238();
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (0 < (long)param_1) {
    pcVar1 = FUN_100004520;
    FUN_10090dcf8(FUN_100004520,0,param_1);
    FUN_10093a790(&local_50,auStack_78);
    FUN_10090e224(0);
    _swift_allocObject();
    FUN_100909ed8(pcVar1,1,0x544c47532d4f494e,0xea00000000002d4e,auStack_78,FUN_10090f344,0);
    FUN_10090dda0(&local_50);
    _swift_retain(pcVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093a674);
  (*pcVar1)();
}



/* Address: 0x10093a6c0 | FUN_10093a6c0 */

void FUN_10093a6c0(ulong param_1)

{
  code *pcVar1;
  String SVar2;
  
  FUN_1006558c4();
  if ((param_1 & 1) != 0) {
    FUN_10065575c();
    FUN_100914120(0);
    _swift_allocObject();
    FUN_100911034(param_1,0,0);
    FUN_100910d44(0x50542d4e544c4753,0xea0000000000232d);
    DAT_100fed850 = param_1;
    _swift_retain(param_1);
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd00000000000009c,0x8000000100db4f70,
             0xdb4f70);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093a790);
  (*pcVar1)();
}



/* Address: 0x10093a790 | FUN_10093a790 */

undefined8 FUN_10093a790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feca78;
  FUN_1000f7830(&DAT_100feca78,&DAT_100c845e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10093a7e0 | thunk_FUN_10093a518 */

void thunk_FUN_10093a518(void)

{
  FUN_10093a550(&DAT_100fed838,&DAT_100fed840,FUN_10093a590);
  return;
}



/* Address: 0x10093a7e4 | FUN_10093a7e4 */

void FUN_10093a7e4(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10093a80c | FUN_10093a80c */

long FUN_10093a80c(class_t *param_1,undefined8 param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  long lVar3;
  long unaff_x20;
  
  pcVar2 = param_1;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    _swift_allocObject();
    lVar3 = unaff_x20;
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(long *)(unaff_x20 + 0x30) = lVar3;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093a884);
  (*pcVar1)();
}



/* Address: 0x10093a884 | FUN_10093a884 */

long FUN_10093a884(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(class_t **)(unaff_x20 + 0x30) = pcVar1;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance(unaff_x20);
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x10093a920 | FUN_10093a920 */

long FUN_10093a920(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(class_t **)(unaff_x20 + 0x30) = pcVar1;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x10093a9a8 | FUN_10093a9a8 */

/* WARNING: Removing unreachable block (ram,0x00010093a9d0) */

code * FUN_10093a9a8(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 auStack_60 [16];
  ulong local_50;
  undefined1 local_48;
  
  FUN_100668048(param_1,param_2,0);
  uVar4 = (uint)param_2;
  FUN_100666f78();
  if ((uVar4 & 0xff) != 1) {
    uVar2 = param_1;
    FUN_100666f78();
    if ((uVar4 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093aae8);
      (*pcVar1)();
    }
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093aae4);
      (*pcVar1)();
    }
  }
  puVar3 = &DAT_100f19710;
  local_50 = param_1;
  local_48 = param_3;
  _swift_allocObject(&DAT_100f19710,0x18,7);
  *(ulong *)(puVar3 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar1 = FUN_10093ab5c;
  FUN_10093aba8(FUN_10093ab5c,auStack_60,FUN_10093ab7c,puVar3);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(puVar3);
  return pcVar1;
}



/* Address: 0x10093aae8 | FUN_10093aae8 */

void FUN_10093aae8(undefined8 param_1)

{
  FUN_1009546f0(0);
  _swift_allocObject();
  _swift_retain(param_1);
  FUN_100954760();
  return;
}



/* Address: 0x10093ab5c | FUN_10093ab5c */

void FUN_10093ab5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10093aae8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093ab78 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  FUN_10093cdc8();
  return;
}



/* Address: 0x10093ab7c | FUN_10093ab7c */

void FUN_10093ab7c(void)

{
  FUN_10093b314();
  return;
}



/* Address: 0x10093aba8 | FUN_10093aba8 */

/* WARNING: Removing unreachable block (ram,0x00010093acd4) */

code * FUN_10093aba8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  class_t *pcVar13;
  class_t *pcVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  pcVar13 = *(class_t **)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar12 + 0x10))();
  lVar16 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar16 == 0) {
    puVar3 = &DAT_100f19aa8;
    _swift_allocObject(&DAT_100f19aa8,0x20,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    _swift_unknownObjectRetain(pcVar13);
    pcVar2 = thunk_FUN_1008fe70c;
  }
  else {
    puVar3 = &DAT_100f19c10;
    _swift_allocObject(&DAT_100f19c10,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar16;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    pcVar2 = thunk_FUN_10093c770;
  }
  puVar4 = &DAT_100f19ad0;
  _swift_allocObject(&DAT_100f19ad0,0x20,7);
  *(code **)(puVar4 + 0x10) = pcVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar5 = pcVar13;
  _object_getClass();
  if (pcVar5 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093b200);
    (*pcVar2)();
  }
  _swift_unknownObjectRetain(pcVar13);
  FUN_100011128(lVar16,uVar1);
  _swift_bridgeObjectRetain(uVar15);
  pcVar5 = pcVar13;
  (*param_1)();
  _swift_unknownObjectRelease(pcVar13);
  pcVar14 = pcVar13;
  _swift_getObjectType();
  pcVar6 = pcVar14;
  (**(code **)(lVar12 + 0x10))();
  if (((ulong)pcVar6 & 1) == 0) {
    puVar3 = &DAT_100f19af8;
    _swift_allocObject(&DAT_100f19af8,0x50,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    *(undefined8 *)(puVar3 + 0x20) = uVar15;
    *(class_t **)(puVar3 + 0x28) = pcVar5;
    *(code **)(puVar3 + 0x30) = thunk_FUN_10093c220;
    *(undefined **)(puVar3 + 0x38) = puVar4;
    *(undefined8 *)(puVar3 + 0x40) = param_3;
    *(undefined8 *)(puVar3 + 0x48) = param_4;
    _swift_unknownObjectRetain(pcVar13);
    _swift_retain(puVar4);
    _swift_retain(pcVar5);
    _swift_retain(param_4);
    puVar9 = &DAT_100febf90;
    FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
    pcVar2 = FUN_10093ceac;
    FUN_100641014(FUN_10093ceac,puVar3,pcVar14,puVar9,lVar12);
    _swift_release(pcVar5);
    _swift_release(puVar3);
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(puVar4);
  }
  else {
    pcVar14 = pcVar5;
    FUN_100623594(pcVar5,&PTR_PTR_100f0f5c8,uVar15);
    puVar3 = &DAT_100f19b20;
    _swift_allocObject(&DAT_100f19b20,0x28,7);
    *(code **)(puVar3 + 0x10) = thunk_FUN_10093c220;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    *(class_t **)(puVar3 + 0x20) = pcVar5;
    _swift_retain();
    _swift_retain(puVar4);
    _swift_retain(pcVar5);
    pcVar6 = pcVar14;
    FUN_1008f7070(pcVar14,FUN_1008fcb94,puVar3);
    _swift_release(pcVar14);
    _swift_release_n(puVar3,2);
    puVar3 = &DAT_100f19b48;
    _swift_allocObject(&DAT_100f19b48,0x38,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(class_t **)(puVar3 + 0x30) = pcVar5;
    _swift_retain_n(pcVar5,2);
    _swift_unknownObjectRetain(pcVar13);
    _swift_retain(puVar3);
    _swift_retain(param_4);
    pcVar14 = pcVar6;
    FUN_1008f7070(pcVar6,thunk_FUN_1008fd6b0,puVar3);
    _swift_release(pcVar6);
    _swift_release_n(puVar3,2);
    puVar3 = &DAT_100f19b70;
    _swift_allocObject(&DAT_100f19b70,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1008fdcb4;
    *(class_t **)(puVar3 + 0x18) = pcVar5;
    pcVar7 = thunk_FUN_10093d450;
    FUN_1008f5090(thunk_FUN_10093d450,puVar3);
    _swift_release(pcVar14);
    _swift_release(puVar3);
    puVar3 = &DAT_100f19b98;
    _swift_allocObject(&DAT_100f19b98,0x20,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    pcVar2 = (code *)&DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    lVar16 = *(long *)(pcVar7 + 0x30);
    uVar18 = *(ulong *)(pcVar7 + 0x28);
    *(undefined8 *)(pcVar2 + 0x30) = *(undefined8 *)(pcVar7 + 0x30);
    *(ulong *)(pcVar2 + 0x28) = uVar18;
    *(undefined8 *)(pcVar2 + 0x10) = 0;
    *(undefined8 *)(pcVar2 + 0x18) = 0;
    pcVar2[0x20] = (code)0xff;
    *(undefined8 *)(pcVar2 + 0x40) = 0;
    *(undefined8 *)(pcVar2 + 0x48) = 0;
    *(undefined8 *)(pcVar2 + 0x38) = 0;
    puVar9 = &DAT_100f19bc0;
    _swift_allocObject(&DAT_100f19bc0,0x30,7);
    *(code **)(puVar9 + 0x10) = pcVar7;
    *(code **)(puVar9 + 0x18) = pcVar2;
    *(code **)(puVar9 + 0x20) = FUN_1008fd674;
    *(undefined **)(puVar9 + 0x28) = puVar3;
    uVar8 = uVar18;
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar16 + 0x10);
    _swift_unknownObjectRetain_n(pcVar13,2);
    _swift_retain_n(pcVar7,2);
    _swift_retain_n(pcVar2,2);
    _swift_retain_n(puVar3,2);
    _swift_unknownObjectRetain(uVar18);
    uVar18 = uVar8;
    (*pcVar11)(uVar8,lVar16);
    if ((uVar18 & 1) == 0) {
      puVar10 = &DAT_100f19be8;
      _swift_allocObject(&DAT_100f19be8,0x28,7);
      *(code **)(puVar10 + 0x10) = pcVar7;
      *(code **)(puVar10 + 0x18) = FUN_1008fbab4;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcVar11 = *(code **)(lVar16 + 0x18);
      _swift_retain(pcVar7);
      _swift_retain(puVar9);
      (*pcVar11)(FUN_1009082d0,puVar10,uVar8,lVar16);
      _swift_release(pcVar5);
      _swift_bridgeObjectRelease(uVar15);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(pcVar7 + 0x10,auStack_98,0,0);
      if (pcVar7[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar7 + 0x38,auStack_b0,0x21,0);
        FUN_10064967c(FUN_1008fbab4,puVar9);
        _swift_endAccess(auStack_b0);
        pcVar11 = (code *)0x0;
        pcVar17 = (code *)0x0;
        pcVar14 = (class_t *)0x0;
      }
      else {
        _swift_unknownObjectRetain(pcVar13);
        pcVar11 = pcVar7;
        pcVar17 = pcVar2;
        pcVar14 = pcVar13;
        FUN_10093cecc(pcVar7,pcVar2,pcVar13,lVar12);
        _swift_unknownObjectRelease(pcVar13);
      }
      FUN_1006486f8(pcVar11,pcVar17,pcVar14);
      FUN_100004550(pcVar11,pcVar17);
      _swift_release(pcVar5);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(pcVar14);
    }
    _swift_release(pcVar2);
    _swift_release(puVar9);
    _swift_release_n(puVar3,2);
    _swift_release_n(pcVar7,2);
    _swift_release(puVar4);
    _swift_unknownObjectRelease_n(pcVar13,2);
  }
  return pcVar2;
}



/* Address: 0x10093b200 | FUN_10093b200 */

/* WARNING: Removing unreachable block (ram,0x00010093b228) */

code * FUN_10093b200(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auStack_60 [16];
  ulong local_50;
  undefined1 local_48;
  
  FUN_100668048(param_1,param_2,0);
  puVar1 = &DAT_100f19738;
  local_50 = param_1;
  local_48 = param_3;
  _swift_allocObject(&DAT_100f19738,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar2 = FUN_10093d4ec;
  FUN_10093aba8(FUN_10093d4ec,auStack_60,FUN_10093b3f4,puVar1);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x10093b314 | FUN_10093b314 */

char * FUN_10093b314(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = 0;
  FUN_1009546f0(0);
  _swift_retain(param_4 & 0x3fffffffffffffff);
  pcVar2 = "NIOPosix/RawSocketBootstrap.swift";
  FUN_100622844("NIOPosix/RawSocketBootstrap.swift",0x21,2,param_5,uVar1,&PTR_PTR_100f0f570);
  _swift_allocObject(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_3;
  *(ulong *)(param_6 + 0x18) = param_4;
  _swift_retain();
  _swift_retain(param_3);
  pcVar3 = pcVar2;
  FUN_1008f7070(pcVar2,param_7,param_6);
  _swift_release(pcVar2);
  _swift_release_n(param_6,2);
  return pcVar3;
}



/* Address: 0x10093b3f4 | FUN_10093b3f4 */

void FUN_10093b3f4(void)

{
  FUN_10093b314();
  return;
}



/* Address: 0x10093b420 | FUN_10093b420 */

void FUN_10093b420(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1009546f0(0);
  (*param_4)(param_2,"NIOPosix/RawSocketBootstrap.swift",0x21,2,param_3,uVar1,&PTR_PTR_100f0f570);
  return;
}



/* Address: 0x10093b48c | FUN_10093b48c */

undefined *
FUN_10093b48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar7 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar1 = &DAT_100f19d78;
  _swift_allocObject(&DAT_100f19d78,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain();
  _swift_retain(param_6);
  _swift_retain(param_4);
  uVar2 = uVar7;
  FUN_1008f7070(uVar7,thunk_FUN_1008fcb94,puVar1);
  _swift_release(uVar7);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f19da0;
  _swift_allocObject(&DAT_100f19da0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  _swift_retain_n(param_4,2);
  _swift_retain(puVar1);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_8);
  uVar7 = uVar2;
  FUN_1008f7070(uVar2,thunk_FUN_1008fd6b0,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f19dc8;
  _swift_allocObject(&DAT_100f19dc8,0x20,7);
  *(code **)(puVar1 + 0x10) = thunk_FUN_1008fdcb4;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcVar3 = thunk_FUN_10093d450;
  FUN_1008f5090(thunk_FUN_10093d450,puVar1);
  _swift_release(uVar7);
  _swift_release(puVar1);
  puVar1 = &DAT_100f19df0;
  _swift_allocObject(&DAT_100f19df0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar4 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar8 = *(long *)(pcVar3 + 0x30);
  uVar11 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f19e18;
  _swift_allocObject(&DAT_100f19e18,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = thunk_FUN_1008fd674;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  uVar6 = uVar11;
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar8 + 0x10);
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar6;
  (*pcVar10)(uVar6,lVar8);
  if ((uVar11 & 1) == 0) {
    puVar9 = &DAT_100f19e40;
    _swift_allocObject(&DAT_100f19e40,0x28,7);
    *(code **)(puVar9 + 0x10) = pcVar3;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar9 + 0x20) = puVar5;
    pcVar10 = *(code **)(lVar8 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar5);
    (*pcVar10)(thunk_FUN_1009082d0,puVar9,uVar6,lVar8);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_release(puVar9);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar5);
      _swift_endAccess(auStack_90);
      pcVar10 = (code *)0x0;
      puVar9 = (undefined *)0x0;
      uVar7 = 0;
    }
    else {
      _swift_unknownObjectRetain(param_1);
      pcVar10 = pcVar3;
      puVar9 = puVar4;
      uVar7 = param_1;
      FUN_10093cecc(pcVar3,puVar4,param_1,param_2);
      _swift_unknownObjectRelease(param_1);
    }
    FUN_1006486f8(pcVar10,puVar9,uVar7);
    FUN_100004550(pcVar10,puVar9);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_unknownObjectRelease(param_1);
  _swift_release(puVar1);
  _swift_release(puVar4);
  _swift_release(pcVar3);
  _swift_release(puVar5);
  return puVar4;
}



/* Address: 0x10093b868 | FUN_10093b868 */

void FUN_10093b868(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10093b89c | FUN_10093b89c */

void FUN_10093b89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined1 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10093b8c4,0,0);
  return;
}



/* Address: 0x10093b8c4 | FUN_10093b8c4 */

void FUN_10093b8c4(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar1 = &DAT_100f19760;
  _swift_allocObject(&DAT_100f19760,0x18,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005dbf20;
  FUN_10093b95c(plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined1 *)(unaff_x22 + 0x58),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),FUN_1008f8b14,
                puVar1,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x10093b95c | FUN_10093b95c */

void FUN_10093b95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_9;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined1 *)(unaff_x22 + 0x29) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_10093b990,0,0);
  return;
}



/* Address: 0x10093b990 | FUN_10093b990 */

/* WARNING: Removing unreachable block (ram,0x00010093b9d4) */

void FUN_10093b990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_100668048(uVar6,uVar11,0);
  uVar10 = (uint)uVar11;
  *(ulong *)(unaff_x22 + 0x80) = uVar6;
  FUN_100666f78();
  if ((uVar10 & 0xff) != 1) {
    uVar7 = uVar6;
    FUN_100666f78();
    if ((uVar10 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10093bafc);
      (*pcVar5)();
    }
    if (uVar7 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10093baf8);
      (*pcVar5)();
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  *(ulong *)(unaff_x22 + 0x20) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(unaff_x22 + 0x29);
  puVar8 = &DAT_100f19a30;
  _swift_allocObject(&DAT_100f19a30,0x18,7);
  *(ulong *)(puVar8 + 0x10) = uVar6;
  _swift_retain(uVar6 & 0x3fffffffffffffff);
  pcVar5 = FUN_10093d4ec;
  FUN_10093bd94(FUN_10093d4ec,unaff_x22 + 0x10,uVar12,uVar2,FUN_10093cdf0,puVar8,uVar4,uVar1,uVar3,
                uVar11);
  *(code **)(unaff_x22 + 0x88) = pcVar5;
  _swift_release(puVar8);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008eb100;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x10093bafc | FUN_10093bafc */

void FUN_10093bafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined1 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10093bb24,0,0);
  return;
}



/* Address: 0x10093bb24 | FUN_10093bb24 */

void FUN_10093bb24(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar1 = &DAT_100f19788;
  _swift_allocObject(&DAT_100f19788,0x18,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005dbf20;
  FUN_10093bbcc(plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined1 *)(unaff_x22 + 0x58),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x10093bbbc | FUN_10093bbbc */

void FUN_10093bbbc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10093bbcc | FUN_10093bbcc */

void FUN_10093bbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_9;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined1 *)(unaff_x22 + 0x29) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_10093bc00,0,0);
  return;
}



/* Address: 0x10093bc00 | FUN_10093bc00 */

/* WARNING: Removing unreachable block (ram,0x00010093bc44) */

void FUN_10093bc00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  FUN_100668048(uVar6,*(undefined8 *)(unaff_x22 + 0x40),0);
  *(ulong *)(unaff_x22 + 0x80) = uVar6;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  *(ulong *)(unaff_x22 + 0x20) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(unaff_x22 + 0x29);
  puVar7 = &DAT_100f197b0;
  _swift_allocObject(&DAT_100f197b0,0x18,7);
  *(ulong *)(puVar7 + 0x10) = uVar6;
  _swift_retain(uVar6 & 0x3fffffffffffffff);
  pcVar8 = FUN_10093d4ec;
  FUN_10093bd94(FUN_10093d4ec,unaff_x22 + 0x10,uVar10,uVar3,FUN_10093bd68,puVar7,uVar5,uVar2,uVar4,
                uVar1);
  *(code **)(unaff_x22 + 0x88) = pcVar8;
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008eb690;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x10093bd40 | FUN_10093bd40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10093bd40(void)

{
  return ZEXT816(0x100fed898);
}



/* Address: 0x10093bd60 | FUN_10093bd60 */

void FUN_10093bd60(void)

{
  FUN_1008fa0d4(0);
  return;
}



/* Address: 0x10093bd68 | FUN_10093bd68 */

void FUN_10093bd68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10093c0cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x11e,&DAT_100f19a08,FUN_10093c894
               );
  return;
}



/* Address: 0x10093bd94 | FUN_10093bd94 */

/* WARNING: Removing unreachable block (ram,0x00010093bf14) */

class_t * FUN_10093bd94(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  class_t *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  pcVar11 = *(class_t **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x10))();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    puVar4 = &DAT_100f197d8;
    _swift_allocObject(&DAT_100f197d8,0x20,7);
    *(class_t **)(puVar4 + 0x10) = pcVar11;
    *(long *)(puVar4 + 0x18) = lVar10;
    _swift_unknownObjectRetain(pcVar11);
    pcVar3 = thunk_FUN_1008fe70c;
  }
  else {
    puVar4 = &DAT_100f19878;
    _swift_allocObject(&DAT_100f19878,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar2;
    pcVar3 = FUN_10093c770;
  }
  puVar5 = &DAT_100f19800;
  _swift_allocObject(&DAT_100f19800,0x20,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar4 = &DAT_100f19828;
  _swift_allocObject(&DAT_100f19828,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_9;
  *(undefined8 *)(puVar4 + 0x18) = param_10;
  *(code **)(puVar4 + 0x20) = FUN_10093c220;
  *(undefined **)(puVar4 + 0x28) = puVar5;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = pcVar11;
  _object_getClass();
  if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10093c0cc);
    (*pcVar3)();
  }
  _swift_unknownObjectRetain(pcVar11);
  FUN_100011128(lVar1,uVar2);
  _swift_retain(puVar5);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(uVar12);
  pcVar6 = pcVar11;
  (*param_1)();
  _swift_unknownObjectRelease(pcVar11);
  pcVar7 = pcVar11;
  _swift_getObjectType();
  pcVar8 = pcVar7;
  (**(code **)(lVar10 + 0x10))();
  if (((ulong)pcVar8 & 1) == 0) {
    puVar9 = &DAT_100f19850;
    _swift_allocObject(&DAT_100f19850,0x70,7);
    *(undefined8 *)(puVar9 + 0x10) = param_9;
    *(undefined8 *)(puVar9 + 0x18) = param_10;
    *(class_t **)(puVar9 + 0x20) = pcVar11;
    *(long *)(puVar9 + 0x28) = lVar10;
    *(undefined8 *)(puVar9 + 0x30) = uVar12;
    *(class_t **)(puVar9 + 0x38) = pcVar6;
    *(code **)(puVar9 + 0x40) = FUN_10093c330;
    *(undefined **)(puVar9 + 0x48) = puVar4;
    *(undefined8 *)(puVar9 + 0x50) = param_5;
    *(undefined8 *)(puVar9 + 0x58) = param_6;
    *(undefined8 *)(puVar9 + 0x60) = param_7;
    *(undefined8 *)(puVar9 + 0x68) = param_8;
    _swift_unknownObjectRetain(pcVar11);
    _swift_retain(pcVar6);
    _swift_retain(puVar4);
    _swift_retain(param_6);
    _swift_retain(param_8);
    pcVar3 = FUN_10093c734;
    FUN_100641014(FUN_10093c734,puVar9,pcVar7,param_10,lVar10);
    _swift_release(pcVar6);
    _swift_release(puVar9);
  }
  else {
    pcVar3 = (code *)pcVar11;
    FUN_10093c340(pcVar11,lVar10,uVar12,pcVar6,FUN_10093c330,puVar4,param_5,param_6,param_7,param_8,
                  param_9,param_10);
    _swift_release(pcVar6);
    _swift_bridgeObjectRelease(uVar12);
  }
  _swift_unknownObjectRelease(pcVar11);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return (class_t *)pcVar3;
}



/* Address: 0x10093c0cc | FUN_10093c0cc */

char * FUN_10093c0cc(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = param_1;
  _swift_getObjectType();
  pcVar2 = "NIOPosix/RawSocketBootstrap.swift";
  FUN_100622844("NIOPosix/RawSocketBootstrap.swift",0x21,2,param_4,uVar1,
                *(undefined8 *)(param_2 + 8));
  _swift_allocObject(param_5,0x28,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(long *)(param_5 + 0x18) = param_2;
  *(ulong *)(param_5 + 0x20) = param_3;
  _swift_retain(param_3 & 0x3fffffffffffffff);
  _swift_retain(param_5);
  _swift_unknownObjectRetain(param_1);
  pcVar3 = pcVar2;
  FUN_1008f7070(pcVar2,param_6,param_5);
  _swift_release(pcVar2);
  _swift_release_n(param_5,2);
  return pcVar3;
}



/* Address: 0x10093c1ac | FUN_10093c1ac */

void FUN_10093c1ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  _swift_getObjectType();
  (*param_5)(param_3,"NIOPosix/RawSocketBootstrap.swift",0x21,2,param_4,param_1,
             *(undefined8 *)(param_2 + 8));
  return;
}



/* Address: 0x10093c220 | FUN_10093c220 */

void FUN_10093c220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008e11f4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x10093c228 | FUN_10093c228 */

code * FUN_10093c228(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  uVar1 = param_1;
  (*param_3)();
  puVar2 = &DAT_100f199b8;
  _swift_allocObject(&DAT_100f199b8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  puVar3 = &DAT_100f199e0;
  _swift_allocObject(&DAT_100f199e0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(code **)(puVar3 + 0x20) = FUN_1008fd9fc;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_1);
  pcVar4 = thunk_FUN_1005e664c;
  thunk_FUN_10064a5bc(thunk_FUN_1005e664c,puVar3,param_7);
  _swift_release(uVar1);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x10093c304 | FUN_10093c304 */

void FUN_10093c304(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093c330 | FUN_10093c330 */

void FUN_10093c330(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10093c228(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093c340 | FUN_10093c340 */

code * FUN_10093c340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar2 = &DAT_100f198a0;
  _swift_allocObject(&DAT_100f198a0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  puVar3 = &DAT_100f198c8;
  _swift_allocObject(&DAT_100f198c8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_12;
  *(code **)(puVar3 + 0x20) = FUN_1008fd8bc;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_retain(param_6);
  _swift_retain(param_4);
  pcVar4 = FUN_1005e664c;
  thunk_FUN_10064a5bc(FUN_1005e664c,puVar3,param_11);
  _swift_release(uVar1);
  _swift_release(puVar3);
  puVar2 = &DAT_100f198f0;
  _swift_allocObject(&DAT_100f198f0,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _swift_retain_n(param_4,2);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_8);
  pcVar5 = FUN_10093c7e0;
  thunk_FUN_10064a5bc(FUN_10093c7e0,puVar2,param_11);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100f19918;
  _swift_allocObject(&DAT_100f19918,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  *(undefined8 *)(puVar2 + 0x28) = param_10;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_10);
  pcVar4 = FUN_1008fd83c;
  thunk_FUN_10064a5bc(FUN_1008fd83c,puVar2,param_12);
  _swift_release(pcVar5);
  _swift_release(puVar2);
  puVar2 = &DAT_100f19940;
  _swift_allocObject(&DAT_100f19940,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _swift_unknownObjectRetain(param_1);
  pcVar5 = FUN_10093c830;
  FUN_100649240(FUN_10093c830,puVar2);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  return pcVar5;
}



/* Address: 0x10093c574 | FUN_10093c574 */

code * FUN_10093c574(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_7 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  (*param_4)(param_6,&PTR_PTR_100f0f5c8);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_1,param_7);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar7 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f19968;
  _swift_allocObject(&DAT_100f19968,uVar7 + lVar6,uVar4 | 7);
  *(long *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  (**(code **)(lVar5 + 0x20))
            (puVar1 + uVar7,&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_7)
  ;
  puVar2 = &DAT_100f19990;
  _swift_allocObject(&DAT_100f19990,0x30,7);
  *(long *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(code **)(puVar2 + 0x20) = FUN_1008fd898;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  pcVar3 = FUN_1001aeadc;
  thunk_FUN_10064b138(FUN_1001aeadc,puVar2,param_7);
  _swift_release(param_6);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x10093c68c | FUN_10093c68c */

void FUN_10093c68c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  
  FUN_10094e2ec(param_1,2,0);
  uVar1 = 0;
  FUN_100947828(0);
  FUN_10063dd74(param_1,uVar1,in_x5,&PTR_PTR_100f19fa8);
  return;
}



/* Address: 0x10093c6e8 | FUN_10093c6e8 */

void FUN_10093c6e8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093c734 | FUN_10093c734 */

void FUN_10093c734(void)

{
  long unaff_x20;
  
  FUN_10093c340(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093c770 | FUN_10093c770 */

void FUN_10093c770(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e11c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093c778 | FUN_10093c778 */

void FUN_10093c778(void)

{
  FUN_1008fd9b8(PTR__swift_release_100eae3e8,0x38);
  return;
}



/* Address: 0x10093c788 | FUN_10093c788 */

void FUN_10093c788(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093c7ac | FUN_10093c7ac */

void FUN_10093c7ac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093c7e0 | FUN_10093c7e0 */

void FUN_10093c7e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10093c574(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093c7f4 | FUN_10093c7f4 */

void FUN_10093c7f4(void)

{
  FUN_1008fd9b8(PTR__swift_unknownObjectRelease_100eae458,0x40);
  return;
}



/* Address: 0x10093c804 | FUN_10093c804 */

void FUN_10093c804(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}


