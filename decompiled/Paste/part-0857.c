/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100949db8 | FUN_100949db8 */

undefined * FUN_100949db8(void)

{
  return &DAT_100c85b14;
}



/* Address: 0x100949dc4 | FUN_100949dc4 */

undefined * FUN_100949dc4(void)

{
  return &DAT_100c85b13;
}



/* Address: 0x100949dd0 | FUN_100949dd0 */

undefined * FUN_100949dd0(void)

{
  return &DAT_100c85b12;
}



/* Address: 0x100949ddc | FUN_100949ddc */

undefined * FUN_100949ddc(void)

{
  return &DAT_100c85b16;
}



/* Address: 0x100949de8 | FUN_100949de8 */

void FUN_100949de8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100949e64 | FUN_100949e64 */

undefined * FUN_100949e64(void)

{
  return &DAT_100c85b15;
}



/* Address: 0x100949e70 | FUN_100949e70 */

void FUN_100949e70(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined1 local_a8 [8];
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *(long *)(param_4 + -8);
  puVar7 = auStack_c0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_4 + 0x10);
  lVar4 = *(long *)(lVar5 + -8);
  lVar6 = (long)puVar7 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = param_1;
  (**(code **)(lVar3 + 0x10))(puVar7);
  puVar1 = puVar7;
  (**(code **)(lVar4 + 0x30))(puVar7,1,lVar5);
  if ((int)puVar1 == 1) {
    (**(code **)(lVar3 + 8))(puVar7,param_4);
    (*param_2)(local_b8,0);
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6,puVar7,lVar5);
    puVar2 = &DAT_100febaf0;
    local_90 = lVar5;
    uStack_88 = param_5;
    local_80 = param_2;
    uStack_78 = param_3;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    FUN_100949de8(local_b8,lVar6,FUN_1005bc2cc,auStack_a0,lVar5,puVar2,param_5,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_a8);
    (**(code **)(lVar4 + 8))(lVar6,lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10094a004 | FUN_10094a004 */

void FUN_10094a004(long param_1)

{
  code *pcVar1;
  
  if (!SBORROW8(param_1,(param_1 / 1000000000) * 1000000000)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094a040);
  (*pcVar1)();
}



/* Address: 0x10094a040 | FUN_10094a040 */

undefined * FUN_10094a040(void)

{
  return &DAT_100c85b10;
}



/* Address: 0x10094a04c | FUN_10094a04c */

void FUN_10094a04c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10094a080 | FUN_10094a080 */

void FUN_10094a080(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10094a0c4 | FUN_10094a0c4 */

undefined4 FUN_10094a0c4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  return *(undefined4 *)(unaff_x20 + 0x20);
}



/* Address: 0x10094a0f4 | FUN_10094a0f4 */

void FUN_10094a0f4(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,1,0);
  *(undefined4 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Address: 0x10094a130 | FUN_10094a130 */

undefined4 FUN_10094a130(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_28,0,0);
  return *(undefined4 *)(unaff_x20 + 0x38);
}



/* Address: 0x10094a160 | FUN_10094a160 */

void FUN_10094a160(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_38,1,0);
  *(undefined4 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Address: 0x10094a19c | FUN_10094a19c */

undefined1  [16] FUN_10094a19c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x38,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10094a1cc | FUN_10094a1cc */

undefined8 FUN_10094a1cc(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x40);
}



/* Address: 0x10094a1fc | FUN_10094a1fc */

void FUN_10094a1fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Address: 0x10094a238 | FUN_10094a238 */

undefined1  [16] FUN_10094a238(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x40,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10094a268 | FUN_10094a268 */

undefined8 FUN_10094a268(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x48);
}



/* Address: 0x10094a298 | FUN_10094a298 */

void FUN_10094a298(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  return;
}



/* Address: 0x10094a2d4 | FUN_10094a2d4 */

undefined1  [16] FUN_10094a2d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x48,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10094a304 | FUN_10094a304 */

void FUN_10094a304(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (0x1e < param_1 + 0xfc00000000000000U >> 0x3b) {
    puVar2 = (undefined8 *)(param_1 << 5);
    _swift_slowAlloc(puVar2,0xffffffffffffffff);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094a340);
  (*pcVar1)();
}



/* Address: 0x10094a318 | FUN_10094a318 */

void FUN_10094a318(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 << 5);
  _swift_slowAlloc(puVar1,0xffffffffffffffff);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return;
}



/* Address: 0x10094a340 | FUN_10094a340 */

void FUN_10094a340(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_28,0,0);
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x40),0xffffffffffffffff,0xffffffffffffffff);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10094a398 | FUN_10094a398 */

void FUN_10094a398(undefined8 param_1)

{
  _swift_slowDealloc(param_1,0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Address: 0x10094a3a4 | FUN_10094a3a4 */

void FUN_10094a3a4(void)

{
  FUN_10094a340();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10094a3c4 | FUN_10094a3c4 */

void FUN_10094a3c4(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_38,1,0);
  if (param_1 == *(long *)(unaff_x20 + 0x48)) {
    _swift_beginAccess(unaff_x20 + 0x40,auStack_50,1,0);
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x40),0xffffffffffffffff,0xffffffffffffffff);
    *(long *)(unaff_x20 + 0x48) = param_1 * 2;
    if (param_1 * 2 + 0xfc00000000000000U >> 0x3b < 0x1f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094a464);
      (*pcVar1)();
    }
    puVar2 = (undefined8 *)(param_1 << 6);
    _swift_slowAlloc(puVar2,0xffffffffffffffff);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(unaff_x20 + 0x40) = puVar2;
  }
  return;
}



/* Address: 0x10094a464 | FUN_10094a464 */

void FUN_10094a464(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_3 + 0x10);
  _Var6.unknown = auStack_58;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(param_3 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000002c;
      puVar4[1] = 0x8000000100db4dc0;
      *(undefined4 *)(puVar4 + 2) = 9;
      _swift_willThrow();
      goto LAB_10094a56c;
    }
    _swift_beginAccess(param_3 + 0x20,&local_70,1,0);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    _swift_retain(param_4);
    FUN_100951b7c(iVar1,param_2,0x100,uVar2);
    if (unaff_x21 == 0) {
      uVar3 = *(uint *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = uVar3 + 1;
      _swift_beginAccess(param_3 + 0x18,local_88,0x21,0);
      _swift_retain(param_4);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(param_4,(param_2 & 0xff) << 8 | (ulong)uVar3 << 0x20 | 0xc0,iVar1,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      _swift_endAccess(local_88);
      _swift_release_n(param_4,2);
      return;
    }
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(param_4);
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db54b0;
    SVar11.str = (char *)0xd000000000000023;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_88[0] = *(undefined1 *)(param_3 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_88,&local_70,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar10 = uStack_68;
    uVar5 = local_70;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar10;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  _swift_release(param_4);
LAB_10094a56c:
  _swift_release(param_4);
  return;
}



/* Address: 0x10094a6b0 | FUN_10094a6b0 */

void FUN_10094a6b0(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_3 + 0x10);
  _Var6.unknown = auStack_58;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(param_3 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000002c;
      puVar4[1] = 0x8000000100db4dc0;
      *(undefined4 *)(puVar4 + 2) = 9;
      _swift_willThrow();
      goto LAB_10094a7b8;
    }
    _swift_beginAccess(param_3 + 0x20,&local_70,1,0);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    _swift_retain(param_4);
    FUN_100951b7c(iVar1,param_2,0x100,uVar2);
    if (unaff_x21 == 0) {
      uVar3 = *(uint *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = uVar3 + 1;
      _swift_beginAccess(param_3 + 0x18,local_88,0x21,0);
      _swift_retain(param_4);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(param_4,(param_2 & 0xff) << 8 | (ulong)uVar3 << 0x20 | 0xc1,iVar1,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      _swift_endAccess(local_88);
      _swift_release_n(param_4,2);
      return;
    }
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(param_4);
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db54b0;
    SVar11.str = (char *)0xd000000000000023;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_88[0] = *(undefined1 *)(param_3 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_88,&local_70,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar10 = uStack_68;
    uVar5 = local_70;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar10;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  _swift_release(param_4);
LAB_10094a7b8:
  _swift_release(param_4);
  return;
}



/* Address: 0x10094a900 | FUN_10094a900 */

void FUN_10094a900(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_3 + 0x10);
  _Var6.unknown = auStack_58;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(param_3 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000001f;
      puVar4[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar4 + 2) = 9;
      _swift_willThrow();
      goto LAB_10094aa0c;
    }
    _swift_beginAccess(param_3 + 0x20,&local_70,1,0);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    _swift_retain(param_4);
    FUN_100951b7c(iVar1,param_2,0x100,uVar2);
    if (unaff_x21 == 0) {
      uVar3 = *(uint *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = uVar3 + 1;
      _swift_beginAccess(param_3 + 0x18,local_88,0x21,0);
      _swift_retain(param_4);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(param_4,(param_2 & 0xff) << 8 | (ulong)uVar3 << 0x20 | 0x40,iVar1,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      _swift_endAccess(local_88);
      _swift_release_n(param_4,2);
      return;
    }
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(param_4);
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db54b0;
    SVar11.str = (char *)0xd000000000000023;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_88[0] = *(undefined1 *)(param_3 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_88,&local_70,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar10 = uStack_68;
    uVar5 = local_70;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar10;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  _swift_release(param_4);
LAB_10094aa0c:
  _swift_release(param_4);
  return;
}



/* Address: 0x10094ab4c | FUN_10094ab4c */

void FUN_10094ab4c(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_3 + 0x10);
  _Var6.unknown = auStack_58;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(param_3 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000001f;
      puVar4[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar4 + 2) = 9;
      _swift_willThrow();
      goto LAB_10094ac58;
    }
    _swift_beginAccess(param_3 + 0x20,&local_70,1,0);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    _swift_retain(param_4);
    FUN_100951b7c(iVar1,param_2,0x100,uVar2);
    if (unaff_x21 == 0) {
      uVar3 = *(uint *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = uVar3 + 1;
      _swift_beginAccess(param_3 + 0x18,local_88,0x21,0);
      _swift_retain(param_4);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(param_4,(param_2 & 0xff) << 8 | (ulong)uVar3 << 0x20 | 0x80,iVar1,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      _swift_endAccess(local_88);
      _swift_release_n(param_4,2);
      return;
    }
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(param_4);
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db54b0;
    SVar11.str = (char *)0xd000000000000023;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_88[0] = *(undefined1 *)(param_3 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_88,&local_70,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar10 = uStack_68;
    uVar5 = local_70;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar10;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  _swift_release(param_4);
LAB_10094ac58:
  _swift_release(param_4);
  return;
}



/* Address: 0x10094ad98 | FUN_10094ad98 */

void FUN_10094ad98(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(param_3 + 0x10);
  _Var6.unknown = auStack_58;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(param_3 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000001f;
      puVar4[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar4 + 2) = 9;
      _swift_willThrow();
      goto LAB_10094aea4;
    }
    _swift_beginAccess(param_3 + 0x20,&local_70,1,0);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    _swift_retain(param_4);
    FUN_100951b7c(iVar1,param_2,0x100,uVar2);
    if (unaff_x21 == 0) {
      uVar3 = *(uint *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = uVar3 + 1;
      _swift_beginAccess(param_3 + 0x18,local_88,0x21,0);
      _swift_retain(param_4);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar5);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(param_4,(param_2 & 0xff) << 8 | (ulong)uVar3 << 0x20,iVar1,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar10;
      _swift_endAccess(local_88);
      _swift_release_n(param_4,2);
      return;
    }
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(param_4);
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db54b0;
    SVar11.str = (char *)0xd000000000000023;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_88[0] = *(undefined1 *)(param_3 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_88,&local_70,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar10 = uStack_68;
    uVar5 = local_70;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar10;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  _swift_release(param_4);
LAB_10094aea4:
  _swift_release(param_4);
  return;
}



/* Address: 0x10094afe0 | FUN_10094afe0 */

void FUN_10094afe0(void)

{
  int *unaff_x20;
  
  *unaff_x20 = *unaff_x20 + 1;
  return;
}



/* Address: 0x10094aff0 | FUN_10094aff0 */

void FUN_10094aff0(void)

{
  FUN_10094bb98();
  return;
}



/* Address: 0x10094b004 | FUN_10094b004 */

void FUN_10094b004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Dictionary DVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  undefined *puVar8;
  long unaff_x20;
  long unaff_x21;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  undefined1 auStack_48 [24];
  
  _Var5.unknown = auStack_48;
  pcVar6 = &DAT_00000001;
  pvVar7 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10);
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    FUN_10094c338();
    if (unaff_x21 == 0) {
      *(undefined1 *)(unaff_x20 + 0x10) = 2;
      _swift_beginAccess(unaff_x20 + 0x18,&local_68,0x21,0);
      DVar4 = Swift::Dictionary::typeMetadataAccessor();
      Swift::Dictionary::removeAll(false,DVar4);
      _swift_endAccess(&local_68);
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x20,_Var5);
    SVar9.bridgeObject = (void *)0x8000000100db5360;
    SVar9.str = (char *)0xd00000000000001d;
    SVar11.bridgeObject = pvVar7;
    SVar11.str = pcVar6;
    Swift::String::append(SVar9,SVar11);
    local_49 = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar6 = "\x01\x02";
    puVar8 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_49,&local_68,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar10.bridgeObject = (void *)0xe100000000000000;
    SVar10.str = (char *)0x2e;
    puVar3 = (undefined8 *)0x2e;
    SVar12.bridgeObject = puVar8;
    SVar12.str = pcVar6;
    Swift::String::append(SVar10,SVar12);
    uVar2 = uStack_60;
    uVar1 = local_68;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10094b170 | FUN_10094b170 */

undefined1  [16] FUN_10094b170(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_10095fa70();
  if ((param_1 & 1) != 0) {
    FUN_10094b1f0();
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  lVar3 = *(long *)(unaff_x20 + 0x30);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 == 0) {
    FUN_10094b1f0();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 == 0) {
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = unaff_x20;
      return auVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094b1f0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094b1ec);
  (*pcVar1)();
}



/* Address: 0x10094b1f0 | FUN_10094b1f0 */

undefined1  [16] FUN_10094b1f0(long param_1,_StringGuts param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,param_2);
  _swift_bridgeObjectRelease(local_40);
  local_30 = 0xd000000000000018;
  uStack_28 = 0x8000000100db5270;
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(param_1 + 0x38,&local_48);
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = pcVar2;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x7d20;
  SVar6.bridgeObject = pvVar3;
  SVar6.str = pcVar2;
  Swift::String::append(SVar4,SVar6);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x10094b2a8 | FUN_10094b2a8 */

void FUN_10094b2a8(void)

{
  FUN_10094b170();
  return;
}



/* Address: 0x10094b2c8 | FUN_10094b2c8 */

undefined1 FUN_10094b2c8(long param_1)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x1c));
}



/* Address: 0x10094b2d4 | FUN_10094b2d4 */

void FUN_10094b2d4(undefined1 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x1c)) = param_1;
  return;
}



/* Address: 0x10094b2e0 | FUN_10094b2e0 */

void FUN_10094b2e0(long param_1,undefined1 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10094b3fc(0,param_4);
  *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x1c)) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010094b334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Address: 0x10094b338 | FUN_10094b338 */

void FUN_10094b338(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  undefined1 local_48;
  undefined8 uStack_38;
  
  uVar2 = 0;
  uStack_38 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(&local_50,&uStack_38,puVar1,&DAT_100eeb710,6);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_50;
    thunk_FUN_10061dfe8(local_50,local_48,3,3);
    FUN_10061e298(local_50,local_48);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  _swift_willThrow();
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x10094b3f0 | FUN_10094b3f0 */

void FUN_10094b3f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10094b3fc | FUN_10094b3fc */

void FUN_10094b3fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10094b408 | FUN_10094b408 */

void FUN_10094b408(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((__uint32)param_2.unknown,param_2);
  return;
}



/* Address: 0x10094b42c | FUN_10094b42c */

void FUN_10094b42c(Hasher param_1,Hasher param_2)

{
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint32)param_1.unknown,param_2);
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x10094b470 | thunk_FUN_10094b474 */

void thunk_FUN_10094b474(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedaa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85b20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85b20,&DAT_100f1aaf8);
  DAT_100fedaa0 = pTVar1;
  return;
}



/* Address: 0x10094b474 | FUN_10094b474 */

void FUN_10094b474(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedaa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85b20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85b20,&DAT_100f1aaf8);
  DAT_100fedaa0 = pTVar1;
  return;
}



/* Address: 0x10094b4b4 | thunk_FUN_10094b4b8 */

void thunk_FUN_10094b4b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedaa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85be8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85be8,&DAT_100f1ab18);
  DAT_100fedaa8 = pTVar1;
  return;
}



/* Address: 0x10094b4b8 | FUN_10094b4b8 */

void FUN_10094b4b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedaa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85be8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85be8,&DAT_100f1ab18);
  DAT_100fedaa8 = pTVar1;
  return;
}



/* Address: 0x10094b4f8 | thunk_FUN_10094b4fc */

void thunk_FUN_10094b4fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85c20,&DAT_100f1ab18);
  DAT_100fedab0 = pTVar1;
  return;
}



/* Address: 0x10094b4fc | FUN_10094b4fc */

void FUN_10094b4fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85c20,&DAT_100f1ab18);
  DAT_100fedab0 = pTVar1;
  return;
}



/* Address: 0x10094b53c | thunk_FUN_10094b540 */

void thunk_FUN_10094b540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85bc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85bc0,&DAT_100f1ab18);
  DAT_100fedab8 = pTVar1;
  return;
}



/* Address: 0x10094b540 | FUN_10094b540 */

void FUN_10094b540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85bc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85bc0,&DAT_100f1ab18);
  DAT_100fedab8 = pTVar1;
  return;
}



/* Address: 0x10094b580 | thunk_FUN_10094b584 */

void thunk_FUN_10094b584(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedac0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85ce8,&DAT_100f1ab18);
  DAT_100fedac0 = pTVar1;
  return;
}



/* Address: 0x10094b584 | FUN_10094b584 */

void FUN_10094b584(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedac0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85ce8,&DAT_100f1ab18);
  DAT_100fedac0 = pTVar1;
  return;
}



/* Address: 0x10094b5c4 | thunk_FUN_10094b5c8 */

void thunk_FUN_10094b5c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85d80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85d80,&DAT_100f1ad08);
  DAT_100fedac8 = pTVar1;
  return;
}



/* Address: 0x10094b5c8 | FUN_10094b5c8 */

void FUN_10094b5c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fedac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85d80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85d80,&DAT_100f1ad08);
  DAT_100fedac8 = pTVar1;
  return;
}



/* Address: 0x10094b608 | FUN_10094b608 */

undefined1  [16] FUN_10094b608(void)

{
  return ZEXT816(0x100f1aaf8);
}



/* Address: 0x10094b618 | FUN_10094b618 */

undefined1  [16] FUN_10094b618(void)

{
  return ZEXT816(0x100f1ab18);
}



/* Address: 0x10094b628 | FUN_10094b628 */

void FUN_10094b628(long param_1)

{
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  puStack_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_50 = &DAT_100c85e60;
  local_40 = PTR___value_witness_table_for_Builtin_Int32_100eabd40 + 0x40;
  puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_20 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
  puStack_18 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_30 = puStack_38;
  puStack_28 = local_40;
  _swift_initClassMetadata2(param_1,0,8,&local_50,param_1 + 0x60);
  return;
}



/* Address: 0x10094b6b0 | FUN_10094b6b0 */

void FUN_10094b6b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int8_100eabd50 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x10094b728 | FUN_10094b728 */

long * FUN_10094b728(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar3 = *(long *)(lVar1 + 0x40);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && lVar3 + 1U < 0x19) && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1);
    *(undefined1 *)(lVar3 + (long)param_1) = *(undefined1 *)(lVar3 + (long)param_2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}


