/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009510dc | FUN_1009510dc */

/* WARNING: Removing unreachable block (ram,0x000100951110) */
/* WARNING: Removing unreachable block (ram,0x0001009511b4) */
/* WARNING: Removing unreachable block (ram,0x000100951130) */

void FUN_1009510dc(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (*param_2)();
  uVar1 = 0;
  uVar2 = 0;
  FUN_100630328(0,0);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100951228 | FUN_100951228 */

void FUN_100951228(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f1b6c8;
  _swift_allocObject(&DAT_100f1b6c8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100951310 | FUN_100951310 */

void FUN_100951310(long param_1)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  char *pcVar3;
  void *pvVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _Var2.unknown = auStack_48;
  pcVar3 = (char *)0x0;
  pvVar4 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10);
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    puVar1 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
    if (-1 < (int)*(uint *)(param_1 + 0x10)) {
      FUN_1009515a0();
      return;
    }
    uVar6 = 0x8000000100db4dc0;
    uVar7 = 0xd00000000000002c;
  }
  else {
    local_58 = 0;
    uStack_50 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var2);
    SVar8.bridgeObject = (void *)0x8000000100db55b0;
    SVar8.str = (char *)0xd000000000000026;
    SVar10.bridgeObject = pvVar4;
    SVar10.str = pcVar3;
    Swift::String::append(SVar8,SVar10);
    local_59 = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar3 = "\x01\x02";
    puVar5 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_59,&local_58,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0x2e;
    puVar1 = (undefined8 *)0x2e;
    SVar11.bridgeObject = puVar5;
    SVar11.str = pcVar3;
    Swift::String::append(SVar9,SVar11);
    uVar6 = uStack_50;
    uVar7 = local_58;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
  *puVar1 = uVar7;
  puVar1[1] = uVar6;
  *(undefined4 *)(puVar1 + 2) = 9;
  _swift_willThrow();
  return;
}



/* Address: 0x100951458 | FUN_100951458 */

void FUN_100951458(long param_1)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  char *pcVar3;
  void *pvVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _Var2.unknown = auStack_48;
  pcVar3 = (char *)0x0;
  pvVar4 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10);
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    puVar1 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
    if (-1 < (int)*(uint *)(param_1 + 0x10)) {
      FUN_1009515a0();
      return;
    }
    uVar7 = 0x8000000100db4780;
    uVar6 = 0xd00000000000001f;
  }
  else {
    local_58 = 0;
    uStack_50 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var2);
    SVar8.bridgeObject = (void *)0x8000000100db55b0;
    SVar8.str = (char *)0xd000000000000026;
    SVar10.bridgeObject = pvVar4;
    SVar10.str = pcVar3;
    Swift::String::append(SVar8,SVar10);
    local_59 = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar3 = "\x01\x02";
    puVar5 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_59,&local_58,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0x2e;
    puVar1 = (undefined8 *)0x2e;
    SVar11.bridgeObject = puVar5;
    SVar11.str = pcVar3;
    Swift::String::append(SVar9,SVar11);
    uVar6 = local_58;
    uVar7 = uStack_50;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined4 *)(puVar1 + 2) = 9;
  _swift_willThrow();
  return;
}



/* Address: 0x1009515a0 | FUN_1009515a0 */

void FUN_1009515a0(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  _swift_beginAccess(param_2 + 0x18,puVar7,0,0);
  lVar10 = *(long *)(param_2 + 0x18);
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009516e4);
    (*pcVar4)();
  }
  lVar5 = (long)(int)param_1;
  FUN_100071340();
  if (((ulong)puVar7 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar5 * 0x10);
    uVar11 = *puVar1;
    uVar8 = (ulong)*(byte *)(puVar1 + 1);
    uVar3 = *(undefined1 *)((long)puVar1 + 9);
    uVar2 = *(uint *)((long)puVar1 + 0xc);
    _swift_retain(uVar11);
    FUN_100951b7c(param_1,param_3,uVar3,uVar2);
    if (unaff_x21 == 0) {
      _swift_beginAccess(param_2 + 0x18,auStack_90,0x21,0);
      _swift_retain(uVar11,uVar8);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
      FUN_10095a33c(uVar11,uVar8 | (param_3 & 0xff) << 8 | (ulong)uVar2 << 0x20,(long)(int)param_1,
                    uVar6);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      _swift_endAccess(auStack_90);
    }
    _swift_release(uVar11,uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1009516e8);
  (*pcVar4)();
}



/* Address: 0x1009516e8 | FUN_1009516e8 */

void FUN_1009516e8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *pvVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  undefined1 auStack_58 [24];
  
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  _Var4.unknown = auStack_58;
  pcVar5 = (char *)0x0;
  pvVar6 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (-1 < (int)uVar1) {
      puVar2 = &local_78;
      _swift_beginAccess(unaff_x20 + 0x18,puVar2,0x21,0);
      uVar3 = (ulong)uVar1;
      FUN_10095a29c();
      _swift_endAccess(&local_78);
      if ((((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) &&
         (((ulong)puVar2 & 0xfe) == 0xfe)) {
        return;
      }
      FUN_100951b7c((ulong)uVar1,1,(uint)puVar2 >> 8 & 0xff,(ulong)puVar2 >> 0x20);
      FUN_10095a96c(uVar3,puVar2);
      return;
    }
    uVar8 = 0x8000000100db4dc0;
    uVar9 = 0xd00000000000002c;
  }
  else {
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var4);
    SVar10.bridgeObject = (void *)0x8000000100db55e0;
    SVar10.str = (char *)0xd000000000000027;
    SVar12.bridgeObject = pvVar6;
    SVar12.str = pcVar5;
    Swift::String::append(SVar10,SVar12);
    local_59 = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar5 = "\x01\x02";
    puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_59,&local_78,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = (char *)0x2e;
    puVar2 = (undefined8 *)0x2e;
    SVar13.bridgeObject = puVar7;
    SVar13.str = pcVar5;
    Swift::String::append(SVar11,SVar13);
    uVar8 = uStack_70;
    uVar9 = local_78;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
  *puVar2 = uVar9;
  puVar2[1] = uVar8;
  *(undefined4 *)(puVar2 + 2) = 9;
  _swift_willThrow();
  return;
}



/* Address: 0x100951894 | FUN_100951894 */

void FUN_100951894(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *pvVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  undefined1 auStack_58 [24];
  
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  _Var4.unknown = auStack_58;
  pcVar5 = (char *)0x0;
  pvVar6 = (void *)0x0;
  _swift_beginAccess();
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (-1 < (int)uVar1) {
      puVar2 = &local_78;
      _swift_beginAccess(unaff_x20 + 0x18,puVar2,0x21,0);
      uVar3 = (ulong)uVar1;
      FUN_10095a29c();
      _swift_endAccess(&local_78);
      if ((((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) &&
         (((ulong)puVar2 & 0xfe) == 0xfe)) {
        return;
      }
      FUN_100951b7c((ulong)uVar1,1,(uint)puVar2 >> 8 & 0xff,(ulong)puVar2 >> 0x20);
      FUN_10095a96c(uVar3,puVar2);
      return;
    }
    uVar9 = 0x8000000100db4780;
    uVar8 = 0xd00000000000001f;
  }
  else {
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var4);
    SVar10.bridgeObject = (void *)0x8000000100db55e0;
    SVar10.str = (char *)0xd000000000000027;
    SVar12.bridgeObject = pvVar6;
    SVar12.str = pcVar5;
    Swift::String::append(SVar10,SVar12);
    local_59 = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar5 = "\x01\x02";
    puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_59,&local_78,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = (char *)0x2e;
    puVar2 = (undefined8 *)0x2e;
    SVar13.bridgeObject = puVar7;
    SVar13.str = pcVar5;
    Swift::String::append(SVar11,SVar13);
    uVar8 = local_78;
    uVar9 = uStack_70;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  *(undefined4 *)(puVar2 + 2) = 9;
  _swift_willThrow();
  return;
}



/* Address: 0x100951a40 | FUN_100951a40 */

void FUN_100951a40(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 auStack_48 [24];
  
  if (0 < (long)param_2) {
    _swift_beginAccess(unaff_x20 + 0x38,auStack_48,0,0);
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100951b7c);
      (*pcVar1)();
    }
    if (param_2 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100951b78);
      (*pcVar1)();
    }
    FUN_10095ebc4(*(undefined4 *)(unaff_x20 + 0x38),param_1,param_2,0,0,0);
    if (unaff_x21 != (undefined8 *)0x0) {
      _swift_errorRetain();
      puVar2 = &DAT_100febaf0;
      FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
      puVar3 = &local_68;
      _swift_dynamicCast(puVar3,&stack0xffffffffffffffb0,puVar2,&DAT_100ef11e8,0);
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = unaff_x21;
        _swift_errorRelease();
        if (local_58 == 4) {
          _swift_bridgeObjectRelease(local_60);
          _swift_errorRelease(unaff_x21);
          return;
        }
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
        *puVar3 = local_68;
        puVar3[1] = local_60;
        *(int *)(puVar3 + 2) = local_58;
        _swift_willThrow();
      }
      _swift_errorRelease(unaff_x21);
    }
  }
  return;
}



/* Address: 0x100951b7c | FUN_100951b7c */

void FUN_100951b7c(uint param_1,uint param_2,uint param_3,ulong param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  ulong uStack_68;
  ulong local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_3 & 0xff00) != 0x100) {
    if ((param_3 >> 2 & 1) != 0) {
      if ((param_3 >> 3 & 1) == 0) {
        uVar6 = 4;
        bVar2 = 0;
      }
      else {
        uVar6 = 0xc;
        bVar2 = 1;
      }
      goto code_r0x000100951cec;
    }
    if ((param_3 >> 3 & 1) != 0) {
      uVar6 = 0;
      bVar2 = 1;
      goto code_r0x000100951cec;
    }
  }
  uVar6 = 0;
  bVar2 = 0;
code_r0x000100951cec:
  bVar3 = ((param_2 & 0xff) >> 3 & 1) != 0;
  bVar1 = (bool)(bVar2 ^ bVar3);
  if (((uVar6 ^ param_2 & 4) >> 2 & 1) == 0) {
    if (bVar1) {
      if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100951d04);
        (*pcVar4)();
      }
      local_60 = 0;
      local_58 = 0;
      local_56 = 0;
      uStack_48 = 0;
      local_20 = 1;
      local_76 = 1;
      if (!bVar3) {
        local_76 = 2;
      }
      local_78 = 0xfffe;
    }
    else {
      local_20 = 0;
      local_60 = 0;
      local_58 = 0;
      local_56 = 0;
      uStack_48 = 0;
      param_1 = 0;
      local_78 = 0;
      local_76 = 0;
      param_4 = 0;
    }
  }
  else {
    local_76 = 1;
    if ((param_2 & 4) == 0) {
      local_76 = 2;
    }
    if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100951d00);
      (*pcVar4)();
    }
    uVar5 = 1;
    if (!bVar3) {
      uVar5 = 2;
    }
    local_20 = 1;
    if (bVar1) {
      local_20 = 2;
    }
    local_60 = 0;
    if (bVar1) {
      local_60 = (ulong)param_1;
    }
    local_58 = 0;
    if (bVar1) {
      local_58 = 0xfffe;
    }
    local_56 = 0;
    if (bVar1) {
      local_56 = uVar5;
    }
    uStack_48 = 0;
    if (bVar1) {
      uStack_48 = param_4 & 0xffffffff;
    }
    local_78 = 0xffff;
  }
  local_80 = (ulong)param_1;
  local_74 = 0;
  uStack_68 = param_4 & 0xffffffff;
  local_70 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_100951a40(&local_80);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100951d08 | FUN_100951d08 */

/* WARNING: Removing unreachable block (ram,0x000100952038) */
/* WARNING: Removing unreachable block (ram,0x000100951dd8) */
/* WARNING: Removing unreachable block (ram,0x000100951e98) */
/* WARNING: Removing unreachable block (ram,0x0001009520a4) */
/* WARNING: Removing unreachable block (ram,0x000100951ed8) */
/* WARNING: Removing unreachable block (ram,0x000100951ef0) */
/* WARNING: Removing unreachable block (ram,0x000100952020) */
/* WARNING: Removing unreachable block (ram,0x000100951de8) */
/* WARNING: Removing unreachable block (ram,0x000100951df0) */
/* WARNING: Removing unreachable block (ram,0x000100951f20) */

undefined8 * FUN_100951d08(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined *local_98 [3];
  undefined *local_80;
  undefined **ppuStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *unaff_x20;
  unaff_x20[0x30] = 0;
  *(undefined1 *)(unaff_x20 + 0x31) = 1;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
    FUN_10094cfe0(0);
    uVar2 = uVar1;
    _swift_allocObject();
    puVar3 = param_2;
    FUN_10095e480(param_2,1,0);
    if (unaff_x21 == 0) {
      FUN_10095ea98();
      if ((int)param_2 == 0x1e) {
        local_ec = 0;
        FUN_10095e2f8(puVar3,0x29,0x1b,&local_ec,4);
      }
      FUN_1008d5604(puVar3);
      FUN_1006648f0(&local_e8,0x40,0x800,0x10000);
      local_80 = &DAT_100ef25a0;
      ppuStack_78 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
      puVar4 = &DAT_100f1b5d8;
      _swift_allocObject(&DAT_100f1b5d8,0x38,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_e0;
      *(undefined8 *)(puVar4 + 0x10) = local_e8;
      *(undefined8 *)(puVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(puVar4 + 0x20) = local_d8;
      puVar4[0x30] = local_c8;
      *(undefined2 *)(unaff_x20 + 0x2e) = 0;
      *(undefined1 *)((long)unaff_x20 + 0x172) = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      local_98[0] = puVar4;
      FUN_100936434(0);
      _swift_allocObject();
      _swift_retain(puVar3);
      _swift_retain();
      FUN_1009362b4();
      unaff_x20[0x2f] = uVar5;
      unaff_x20[0x2c] = 0;
      unaff_x20[0x2d] = 0;
      unaff_x20[0x2b] = 0;
      FUN_100076688(local_98,&stack0xffffffffffffff40);
      unaff_x20 = puVar3;
      FUN_10094d4b0(puVar3,0,0,param_1,&stack0xffffffffffffff40,0);
      _swift_release(puVar3);
      FUN_100004594(local_98);
      goto LAB_100951e28;
    }
    _swift_release(param_1);
    _swift_deallocPartialClassInstance(uVar2,uVar1,0x14,7);
  }
  else {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar2 = DAT_1010581f0;
    _swift_willThrow();
    _swift_errorRetain(uVar2);
    _swift_release(param_1);
  }
  _swift_deallocPartialClassInstance(unaff_x20,uVar5,0x189,7);
LAB_100951e28:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_x20;
}



/* Address: 0x10095213c | FUN_10095213c */

long FUN_10095213c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_b8 [40];
  undefined *local_90 [3];
  undefined *local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined1 *)(unaff_x20 + 0x188) = 1;
  uVar1 = 0;
  FUN_10094cfe0(0);
  _swift_allocObject();
  FUN_1008d5604(param_2,uVar1);
  if (unaff_x21 == 0) {
    puVar2 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x10);
    if (-1 < (int)*(uint *)(param_2 + 0x10)) {
      FUN_10095ea98();
      FUN_1006648f0(&local_68,0x40,0x800,0x10000);
      local_78 = &DAT_100ef25a0;
      ppuStack_70 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
      puVar3 = &DAT_100f1b5d8;
      _swift_allocObject(&DAT_100f1b5d8,0x38,7);
      *(undefined8 *)(puVar3 + 0x18) = uStack_60;
      *(undefined8 *)(puVar3 + 0x10) = local_68;
      *(undefined8 *)(puVar3 + 0x28) = uStack_50;
      *(undefined8 *)(puVar3 + 0x20) = local_58;
      puVar3[0x30] = local_48;
      *(undefined2 *)(unaff_x20 + 0x170) = 0;
      *(undefined1 *)(unaff_x20 + 0x172) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      local_90[0] = puVar3;
      FUN_100936434(0);
      _swift_allocObject();
      _swift_retain(param_2);
      _swift_retain();
      FUN_1009362b4();
      *(undefined8 *)(unaff_x20 + 0x178) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x160) = 0;
      *(undefined8 *)(unaff_x20 + 0x168) = 0;
      *(undefined8 *)(unaff_x20 + 0x158) = 0;
      FUN_100076688(local_90,auStack_b8);
      lVar4 = param_2;
      FUN_10094d4b0(param_2,0,0,param_1,auStack_b8,0);
      _swift_release(param_2);
      FUN_100004594(local_90);
      return lVar4;
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
    *puVar2 = 0xd00000000000001f;
    puVar2[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar2 + 2) = 9;
    _swift_willThrow();
    _swift_release(param_2);
  }
  _swift_release(param_1);
  _swift_deallocPartialClassInstance();
  return unaff_x20;
}



/* Address: 0x100952340 | FUN_100952340 */

void FUN_100952340(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  long lVar4;
  
  lVar3 = 0;
  local_80 = param_2;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar8 = *(long *)(lVar3 + -8);
  lVar9 = (long)&local_80 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_3 + -8);
  lVar6 = lVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_68,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    lVar4 = lVar6;
    (**(code **)(lVar7 + 0x10))(lVar6,local_78,param_3);
    iVar2 = (int)lVar4;
    _swift_dynamicCast();
    if (iVar2 == 0) {
      FUN_1008db908(local_78,local_80,param_3,param_4);
    }
    else {
      (**(code **)(lVar8 + 0x10))(lVar9,local_80,lVar3);
      puVar5 = &local_70;
      _swift_dynamicCast(puVar5,lVar9,lVar3,&DAT_100eef4f0,6);
      if ((int)puVar5 == 0) {
        local_70 = 0;
      }
      *(undefined8 *)(unaff_x20 + 0x180) = local_70;
      *(byte *)(unaff_x20 + 0x188) = (byte)puVar5 ^ 1;
    }
    (**(code **)(lVar7 + 8))(lVar6,param_3);
  }
  return;
}



/* Address: 0x1009524ec | FUN_1009524ec */

void FUN_1009524ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [12];
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar8 = *(long *)(param_3 + -8);
  puVar7 = auStack_90 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_70,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar5 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar5);
    goto LAB_100952734;
  }
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x10))(puVar7,param_2,param_3);
  iVar2 = (int)puVar3;
  _swift_dynamicCast();
  if (iVar2 == 0) {
    _swift_dynamicCast();
    if (iVar2 == 0) {
      FUN_1008dbb94(param_1,param_2,param_3,param_4);
    }
    else {
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
      puVar6 = (undefined8 *)(ulong)uVar1;
      if ((int)uVar1 < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar6,0,0);
        *puVar6 = 0xd00000000000001f;
        puVar6[1] = 0x8000000100db4780;
        *(undefined4 *)(puVar6 + 2) = 9;
        _swift_willThrow();
      }
      else {
        local_84 = 0xffffffff;
        FUN_10095ecb4(puVar6,0x400473d1,&local_84);
        if (unaff_x21 == 0) {
          local_80 = CONCAT44(local_80._4_4_,local_84);
          uVar5 = 0;
          _swift_getAssociatedTypeWitness
                    (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
          puVar4 = &DAT_100f1c0a8;
          goto LAB_10095261c;
        }
      }
    }
  }
  else {
    local_80 = *(undefined8 *)(unaff_x20 + 0x180);
    local_78 = *(undefined1 *)(unaff_x20 + 0x188);
    puVar4 = &DAT_100feeb90;
    FUN_1000f7830(&DAT_100feeb90,&DAT_100c86110);
    uVar5 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
LAB_10095261c:
    _swift_dynamicCast(param_1,&local_80,puVar4,uVar5,7);
  }
  (**(code **)(lVar8 + 8))(puVar7,param_3);
LAB_100952734:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100952788 | FUN_100952788 */

void FUN_100952788(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1[0xc] != 0) {
    FUN_1008db6c4();
    puVar1 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_100950464();
    _swift_errorRelease(puVar1);
  }
  return;
}



/* Address: 0x1009527fc | FUN_1009527fc */

uint FUN_1009527fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint extraout_w8;
  uint uVar7;
  uint extraout_w8_00;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [16];
  int local_50;
  byte local_41;
  
  local_50 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (local_50 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000001f;
    param_1[1] = 0x8000000100db4780;
    *(undefined4 *)(param_1 + 2) = 9;
    _swift_willThrow();
    uVar7 = extraout_w8_00;
  }
  else {
    FUN_100667428(&local_41,FUN_10095b674,auStack_60,param_1,
                  PTR___type_metadata_for_Swift_Bool_100eac570);
    uVar7 = extraout_w8;
    if ((unaff_x21 == 0) && (uVar7 = (uint)local_41, local_41 != 1)) {
      if (*(char *)(unaff_x20 + 0x188) == '\x01') {
        uVar7 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x180);
        puVar3 = &DAT_100f1b7e0;
        _swift_allocObject(&DAT_100f1b7e0,0x20,7);
        *(long *)(puVar3 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar3 + 0x18) = uVar8;
        _swift_retain();
        pcVar4 = FUN_10095b68c;
        puVar5 = puVar3;
        FUN_100951028();
        _swift_release(puVar3);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x158);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x168);
        *(undefined8 *)(unaff_x20 + 0x158) = uVar8;
        *(code **)(unaff_x20 + 0x160) = pcVar4;
        *(undefined **)(unaff_x20 + 0x168) = puVar5;
        FUN_100622430(uVar1,uVar2,uVar6);
        uVar7 = 0;
      }
    }
  }
  return uVar7 & 1;
}



/* Address: 0x100952954 | FUN_100952954 */

uint FUN_100952954(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint extraout_w8;
  uint uVar8;
  uint extraout_w8_00;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar8 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  puVar3 = (undefined8 *)(ulong)uVar8;
  if ((int)uVar8 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
    uVar8 = extraout_w8_00;
  }
  else {
    uStack_50 = (undefined4)((ulong)param_1 >> 0x20);
    local_54 = 0x2800;
    local_4c = (undefined4)param_1;
    FUN_10095d9e8(puVar3,&local_54,0xc);
    uVar8 = extraout_w8;
    if (unaff_x21 == 0) {
      if (((ulong)puVar3 & 1) == 0) {
        if (*(char *)(unaff_x20 + 0x188) == '\x01') {
          uVar8 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x20 + 0x180);
          puVar4 = &DAT_100f1b628;
          _swift_allocObject(&DAT_100f1b628,0x20,7);
          *(long *)(puVar4 + 0x10) = unaff_x20;
          *(undefined8 *)(puVar4 + 0x18) = uVar9;
          _swift_retain();
          pcVar5 = FUN_10095b5a8;
          puVar6 = puVar4;
          FUN_100951028();
          _swift_release(puVar4);
          uVar1 = *(undefined8 *)(unaff_x20 + 0x158);
          uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
          uVar7 = *(undefined8 *)(unaff_x20 + 0x168);
          *(undefined8 *)(unaff_x20 + 0x158) = uVar9;
          *(code **)(unaff_x20 + 0x160) = pcVar5;
          *(undefined **)(unaff_x20 + 0x168) = puVar6;
          FUN_100622430(uVar1,uVar2,uVar7);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return uVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100952ad4 | FUN_100952ad4 */

void FUN_100952ad4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x158);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
    *(undefined8 *)(unaff_x20 + 0x158) = 0;
    *(undefined8 *)(unaff_x20 + 0x160) = 0;
    *(undefined8 *)(unaff_x20 + 0x168) = 0;
    FUN_100950b80(lVar3,uVar1,uVar2);
    _swift_release(uVar2);
    _swift_release(lVar3);
  }
  FUN_10094cdb0();
  return;
}



/* Address: 0x100952b34 | FUN_100952b34 */

void FUN_100952b34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain();
  FUN_10094a900(uVar1,param_2,param_1);
  return;
}



/* Address: 0x100952b7c | FUN_100952b7c */

void FUN_100952b7c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100951894(param_1,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100952ba4 | FUN_100952ba4 */

void FUN_100952ba4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100951458(param_1,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100952bcc | FUN_100952bcc */

void FUN_100952bcc(long param_1)

{
  FUN_10094d8e8();
  FUN_100622430(*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                *(undefined8 *)(param_1 + 0x168));
  _swift_release(*(undefined8 *)(param_1 + 0x178));
  _swift_deallocClassInstance(param_1,0x189,7);
  return;
}



/* Address: 0x100952c0c | FUN_100952c0c */

void FUN_100952c0c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fedf18,&TargetClassDescriptor_100cc5d98);
  return;
}



/* Address: 0x100952c20 | FUN_100952c20 */

void FUN_100952c20(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c85f90;
  _swift_initClassMetadata2(param_1,0x100,1,&local_18,param_1 + 0x420);
  return;
}



/* Address: 0x100952c60 | FUN_100952c60 */

void FUN_100952c60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 auStack_68 [24];
  long lVar4;
  
  lVar3 = 0;
  local_80 = param_2;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar3 + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_3 + -8);
  lVar5 = lVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_68,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    lVar4 = lVar5;
    (**(code **)(lVar6 + 0x10))(lVar5,local_78,param_3);
    iVar2 = (int)lVar4;
    _swift_dynamicCast();
    if (iVar2 == 0) {
      FUN_1008d7a78(local_78,local_80,param_3,param_4);
    }
    else {
      (**(code **)(lVar7 + 0x10))(lVar8,local_80,lVar3);
      _swift_dynamicCast(&local_6c,lVar8,lVar3,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
      *(undefined4 *)(unaff_x20 + 0x158) = local_6c;
    }
    (**(code **)(lVar6 + 8))(lVar5,param_3);
  }
  return;
}



/* Address: 0x100952dfc | FUN_100952dfc */

void FUN_100952dfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar8 = *(long *)(param_3 + -8);
  puVar7 = auStack_80 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_70,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar4 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar4);
    goto LAB_100953020;
  }
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x10))(puVar7,param_2,param_3);
  iVar2 = (int)puVar3;
  _swift_dynamicCast();
  if (iVar2 == 0) {
    _swift_dynamicCast();
    if (iVar2 == 0) {
      FUN_1008d81dc(param_1,param_2,param_3,param_4);
    }
    else {
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
      puVar5 = (undefined8 *)(ulong)uVar1;
      if ((int)uVar1 < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
        *puVar5 = 0xd00000000000001f;
        puVar5[1] = 0x8000000100db4780;
        *(undefined4 *)(puVar5 + 2) = 9;
        _swift_willThrow();
      }
      else {
        local_78 = 0xffffffff;
        FUN_10095ecb4(puVar5,0x400473d1,&local_78);
        if (unaff_x21 == 0) {
          local_74 = local_78;
          uVar4 = 0;
          _swift_getAssociatedTypeWitness
                    (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
          puVar6 = &DAT_100f1c0a8;
          goto LAB_100952f08;
        }
      }
    }
  }
  else {
    local_74 = *(undefined4 *)(unaff_x20 + 0x158);
    uVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    puVar6 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
LAB_100952f08:
    _swift_dynamicCast(param_1,&local_74,puVar6,uVar4,7);
  }
  (**(code **)(lVar8 + 8))(puVar7,param_3);
LAB_100953020:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100953074 | FUN_100953074 */

/* WARNING: Removing unreachable block (ram,0x000100953764) */
/* WARNING: Removing unreachable block (ram,0x000100953780) */
/* WARNING: Removing unreachable block (ram,0x0001009537e8) */

void FUN_100953074(undefined8 param_1,undefined4 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  code *pcVar19;
  ulong uVar20;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  uVar11 = 0;
  _swift_beginAccess(unaff_x20 + 0x118,auStack_80,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\0') {
    if (param_3 == (undefined *)0x0) {
      return;
    }
    if (DAT_100fec5f8 != -1) {
      _swift_once(&DAT_100fec5f8,FUN_100901f9c);
    }
    uVar17 = DAT_101058190;
    uVar1 = *(ulong *)(param_3 + 0x20);
    lVar15 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar20 = uVar1;
    lVar10 = lVar15;
    (**(code **)(lVar15 + 0x10))();
    if ((uVar20 & 1) != 0) {
LAB_10095317c:
      thunk_FUN_1005de8f4(uVar17);
      FUN_1006486f8();
      FUN_100004550(uVar17,lVar10);
      _swift_bridgeObjectRelease(uVar11);
      return;
    }
    puVar7 = &DAT_100f1b308;
    _swift_allocObject(&DAT_100f1b308,0x20,7);
    *(undefined **)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar17;
    pcVar19 = *(code **)(lVar15 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar17);
  }
  else {
    if (*(char *)(unaff_x20 + 0x132) != '\x05') {
      uVar20 = *(ulong *)(unaff_x20 + 0x30);
      puVar7 = &DAT_100fec0a0;
      FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
      _swift_allocObject();
      *(ulong *)(puVar7 + 0x20) = uVar20;
      *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f19fa8;
      puVar12 = (undefined8 *)(puVar7 + 0x10);
      *puVar12 = 0;
      puVar7[0x18] = 0xff;
      puVar13 = (undefined8 *)(puVar7 + 0x30);
      *puVar13 = 0;
      *(undefined8 *)(puVar7 + 0x38) = 0;
      *(undefined8 *)(puVar7 + 0x40) = 0;
      puVar2 = &DAT_100f1b330;
      _swift_allocObject(&DAT_100f1b330,0x20,7);
      *(long *)(puVar2 + 0x10) = unaff_x20;
      *(undefined **)(puVar2 + 0x18) = param_3;
      puVar3 = &DAT_100f1b358;
      _swift_allocObject(&DAT_100f1b358,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_10095b478;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      puVar4 = &DAT_100f1b380;
      _swift_allocObject(&DAT_100f1b380,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_1000386a0;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      puVar5 = &DAT_100f1b3a8;
      _swift_allocObject(&DAT_100f1b3a8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar7;
      *(code **)(puVar5 + 0x18) = FUN_1000386a0;
      *(undefined **)(puVar5 + 0x20) = puVar4;
      uVar1 = uVar20;
      _swift_getObjectType();
      _swift_retain_n(param_3,2);
      _swift_retain_n(puVar3,2);
      _swift_retain_n(puVar4,2);
      _swift_retain_n(puVar7,3);
      _swift_retain_n();
      _swift_retain(uVar20);
      _swift_retain(puVar2);
      uVar20 = uVar1;
      FUN_1009416b4();
      if ((uVar20 & 1) == 0) {
        _swift_release(puVar3);
        puVar6 = &DAT_100f1b3d0;
        _swift_allocObject(&DAT_100f1b3d0,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar7;
        *(code **)(puVar6 + 0x18) = FUN_1008a8990;
        *(undefined **)(puVar6 + 0x20) = puVar5;
        _swift_retain(puVar7);
        _swift_retain(puVar5);
        FUN_1009416dc(FUN_1008db360,puVar6,uVar1,&PTR_PTR_100f19fa8);
        _swift_release(puVar3);
        puVar14 = puVar4;
        puVar16 = puVar7;
        puVar18 = puVar5;
        puVar5 = puVar6;
        puVar3 = puVar4;
      }
      else {
        _swift_beginAccess(puVar12,auStack_d0,0,0);
        puVar14 = puVar3;
        puVar16 = puVar4;
        puVar18 = puVar4;
        if (puVar7[0x18] == '\x01') {
          _swift_release(puVar7);
        }
        else if (puVar7[0x18] == -1) {
          _swift_release(puVar3);
          _swift_beginAccess(puVar13,auStack_a0,0x21,0);
          FUN_10064967c(FUN_1008a8990,puVar5);
          _swift_endAccess(auStack_a0);
          puVar14 = puVar5;
          puVar5 = puVar7;
        }
        else {
          FUN_10094eff4(param_3);
          _swift_release(puVar7);
        }
      }
      _swift_release(puVar5);
      _swift_release(puVar14);
      _swift_release(puVar3);
      _swift_release(puVar16);
      _swift_release(puVar18);
      _swift_release(param_3);
      _swift_release(unaff_x20);
      _swift_release(puVar2);
      puVar2 = &DAT_100f1b3f8;
      _swift_allocObject(&DAT_100f1b3f8,0x18,7);
      *(undefined **)(puVar2 + 0x10) = param_3;
      puVar3 = &DAT_100f1b420;
      _swift_allocObject(&DAT_100f1b420,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar7;
      *(code **)(puVar3 + 0x18) = FUN_10095b4c0;
      *(undefined **)(puVar3 + 0x20) = puVar2;
      uVar1 = *(ulong *)(puVar7 + 0x20);
      lVar15 = *(long *)(puVar7 + 0x28);
      _swift_getObjectType();
      pcVar19 = *(code **)(lVar15 + 0x10);
      _swift_retain_n(puVar7,2);
      _swift_retain_n(param_3,2);
      _swift_retain_n(puVar2,2);
      uVar20 = uVar1;
      (*pcVar19)(uVar1,lVar15);
      if ((uVar20 & 1) == 0) {
        puVar4 = &DAT_100f1b448;
        _swift_allocObject(&DAT_100f1b448,0x28,7);
        *(undefined **)(puVar4 + 0x10) = puVar7;
        *(code **)(puVar4 + 0x18) = FUN_1008db354;
        *(undefined **)(puVar4 + 0x20) = puVar3;
        pcVar19 = *(code **)(lVar15 + 0x18);
        _swift_retain(puVar7);
        _swift_retain(puVar3);
        (*pcVar19)(thunk_FUN_1008db360,puVar4,uVar1,lVar15);
        _swift_release(param_3);
        param_3 = puVar2;
        puVar5 = puVar2;
        puVar2 = puVar7;
        puVar6 = puVar3;
      }
      else {
        uVar11 = 0;
        _swift_beginAccess(puVar12,auStack_a0,0,0);
        uVar17 = *(undefined8 *)(puVar7 + 0x10);
        cVar9 = puVar7[0x18];
        puVar4 = puVar7;
        puVar5 = puVar3;
        puVar6 = puVar2;
        if (cVar9 == '\x01') {
          if (param_3 == (undefined *)0x0) goto LAB_100953720;
          uVar1 = *(ulong *)(param_3 + 0x20);
          lVar15 = *(long *)(param_3 + 0x28);
          _swift_getObjectType();
          pcVar19 = *(code **)(lVar15 + 0x10);
          FUN_1005dfeb4(uVar17,1);
          uVar20 = uVar1;
          lVar10 = lVar15;
          (*pcVar19)(uVar1,lVar15);
          if ((uVar20 & 1) == 0) {
            puVar3 = &DAT_100f1b498;
            _swift_allocObject(&DAT_100f1b498,0x20,7);
            *(undefined **)(puVar3 + 0x10) = param_3;
            *(undefined8 *)(puVar3 + 0x18) = uVar17;
            pcVar19 = *(code **)(lVar15 + 0x18);
            _swift_retain(param_3);
            FUN_1005dfeb4(uVar17,1);
            (*pcVar19)(thunk_FUN_1008d678c,puVar3,uVar1,lVar15);
            _swift_release(puVar3);
          }
          else {
            uVar8 = uVar17;
            thunk_FUN_1005de8f4(uVar17);
            FUN_1006486f8();
            FUN_100004550(uVar8,lVar10);
            _swift_bridgeObjectRelease(uVar11);
          }
          cVar9 = '\x01';
        }
        else if (cVar9 == -1) {
          _swift_beginAccess(puVar13,auStack_b8,0x21,0);
          FUN_10064967c(FUN_1008db354,puVar3);
          _swift_endAccess(auStack_b8);
          goto LAB_100953720;
        }
        FUN_100308538(uVar17,cVar9);
      }
LAB_100953720:
      _swift_release(puVar4);
      _swift_release(puVar5);
      _swift_release(param_3);
      _swift_release(puVar2);
      _swift_release(puVar6);
      FUN_1009539b4(param_1,param_2,unaff_x20);
      FUN_10090d0b8(0,0,puVar7);
      _swift_release_n(puVar7,2);
      return;
    }
    if (param_3 == (undefined *)0x0) {
      return;
    }
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar17 = DAT_101058180;
    uVar1 = *(ulong *)(param_3 + 0x20);
    lVar15 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar20 = uVar1;
    lVar10 = lVar15;
    (**(code **)(lVar15 + 0x10))();
    if ((uVar20 & 1) != 0) goto LAB_10095317c;
    puVar7 = &DAT_100f1b2e0;
    _swift_allocObject(&DAT_100f1b2e0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar17;
    pcVar19 = *(code **)(lVar15 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar17);
  }
  (*pcVar19)(thunk_FUN_1008d678c,puVar7,uVar1,lVar15);
  _swift_release(puVar7);
  return;
}



/* Address: 0x1009538b0 | FUN_1009538b0 */

void FUN_1009538b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f1b4c0;
  _swift_allocObject(&DAT_100f1b4c0,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009539b4 | FUN_1009539b4 */

/* WARNING: Removing unreachable block (ram,0x000100953b18) */
/* WARNING: Removing unreachable block (ram,0x000100953ae0) */

void FUN_1009539b4(undefined8 param_1,char param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long unaff_x21;
  ulong uVar4;
  long lVar5;
  undefined4 local_174;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar5 = *(long *)(param_3 + 0x20);
  uVar1 = *(uint *)(lVar5 + 0x10);
  pcVar2 = (code *)(ulong)uVar1;
  if (param_2 == '\x01') {
    if (-1 < (int)uVar1) {
      local_f0 = CONCAT44((int)((ulong)param_1 >> 0x20),0x2800);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)param_1);
      puVar3 = &local_f0;
      FUN_10095d884(pcVar2,puVar3,0xc);
joined_r0x000100953a50:
      if (unaff_x21 != 0) goto LAB_100953bd8;
      thunk_FUN_100937a78();
      _swift_beginAccess(param_3 + 0x118,auStack_70,0,0);
      if (*(char *)(param_3 + 0x132) == '\x05') {
        if (DAT_100fec600 != -1) {
          _swift_once(&DAT_100fec600,FUN_100901fbc);
        }
        _swift_willThrow();
LAB_100953b24:
        uVar4 = 0xf000000000000007;
      }
      else {
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        local_174 = 0x80;
        uVar4 = (ulong)*(uint *)(lVar5 + 0x10);
        if ((int)*(uint *)(lVar5 + 0x10) < 0) goto LAB_100953b24;
        FUN_10095dc2c(uVar4,&local_f0,&local_174);
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        local_110 = local_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        uStack_168 = uStack_e8;
        local_170 = local_f0;
        uStack_158 = uStack_d8;
        uStack_160 = local_e0;
        uStack_148 = uStack_c8;
        local_150 = local_d0;
        uStack_138 = uStack_b8;
        uStack_140 = uStack_c0;
        FUN_1008d5380();
      }
      FUN_1005d84e8(puVar3);
      FUN_1005d84e8(uVar4);
      FUN_10095a9d8(uVar4,puVar3);
      FUN_1005d8534(uVar4);
      FUN_1005d8534(puVar3);
      FUN_1005d8534(uVar4);
      FUN_1005d8534(pcVar2);
      FUN_1005d8534(puVar3);
      pcVar2 = (code *)(ulong)*(uint *)(lVar5 + 0x10);
      if (-1 < (int)*(uint *)(lVar5 + 0x10)) {
        FUN_10095ddc4(pcVar2,*(undefined4 *)(param_3 + 0x158));
        goto LAB_100953bd8;
      }
    }
  }
  else if (-1 < (int)uVar1) {
    local_e0 = CONCAT44(local_e0._4_4_,uVar1);
    pcVar2 = FUN_10095b660;
    puVar3 = &local_f0;
    FUN_100667428(FUN_10095b660,puVar3,param_1,PTR___type_metadata_for____100eae0c8 + 8);
    goto joined_r0x000100953a50;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,pcVar2,0,0);
  *(undefined8 *)pcVar2 = 0xd00000000000001f;
  *(undefined8 *)(pcVar2 + 8) = 0x8000000100db4780;
  *(undefined4 *)(pcVar2 + 0x10) = 9;
  _swift_willThrow();
LAB_100953bd8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100953c34 | FUN_100953c34 */

void FUN_100953c34(undefined8 param_1,undefined8 param_2)

{
  FUN_100953074(param_1,0,param_2);
  return;
}



/* Address: 0x100953c40 | FUN_100953c40 */

/* WARNING: Removing unreachable block (ram,0x000100953ef4) */
/* WARNING: Removing unreachable block (ram,0x000100953ec8) */
/* WARNING: Removing unreachable block (ram,0x000100953ee0) */
/* WARNING: Removing unreachable block (ram,0x000100953efc) */

undefined8 FUN_100953c40(void)

{
  class_t *pcVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  class_t *pcVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  class_t *pcVar10;
  long unaff_x21;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  undefined *local_118 [3];
  undefined *local_100;
  undefined **local_f8;
  undefined1 local_d7;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar9 = *(long *)(unaff_x20 + 200);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100953f3c);
    (*pcVar13)();
  }
  pcVar1 = *(class_t **)(unaff_x20 + 0x160);
  lVar2 = *(long *)(unaff_x20 + 0x168);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_a8,0,0);
  uVar12 = 0;
  lVar11 = 1;
  while( true ) {
    if (*(char *)(unaff_x20 + 0x132) == '\x05') {
      if (DAT_100fec5b8 != -1) {
        _swift_once(&DAT_100fec5b8,FUN_100901f8c);
      }
      uVar3 = DAT_1010581c8;
      _swift_willThrow();
      _swift_errorRetain(uVar3);
      return uVar12;
    }
    puVar5 = (undefined *)0x1;
    FUN_10094c994();
    if (unaff_x21 != 0) {
      return uVar12;
    }
    if (puVar5 == (undefined *)0x0) {
      return uVar12;
    }
    *(undefined1 *)(unaff_x20 + 0x58) = 0;
    pcVar10 = pcVar1;
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar2 + 0x10);
    _swift_retain(puVar5);
    (*pcVar13)(pcVar10,lVar2);
    pcVar6 = pcVar10;
    _object_getClass();
    if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) break;
    lVar7 = 0;
    FUN_100952c0c();
    lVar14 = lVar7;
    _swift_allocObject();
    *(undefined8 *)(lVar14 + 0x180) = 0;
    *(undefined1 *)(lVar14 + 0x188) = 1;
    FUN_1006648f0(&local_90,0x40,0x800,0x10000);
    local_100 = &DAT_100ef25a0;
    local_f8 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar8 = &DAT_100f1b5d8;
    _swift_allocObject(&DAT_100f1b5d8,0x38,7);
    *(undefined8 *)(puVar8 + 0x18) = uStack_88;
    *(undefined8 *)(puVar8 + 0x10) = local_90;
    *(undefined8 *)(puVar8 + 0x28) = uStack_78;
    *(undefined8 *)(puVar8 + 0x20) = uStack_80;
    puVar8[0x30] = local_70;
    *(undefined2 *)(lVar14 + 0x170) = 0;
    *(undefined1 *)(lVar14 + 0x172) = 0;
    pcVar10 = pcVar10[3].isa;
    local_118[0] = puVar8;
    FUN_100936434(0);
    _swift_allocObject();
    _swift_retain(puVar5);
    _swift_retain();
    _swift_retain();
    FUN_1009362b4();
    *(class_t **)(lVar14 + 0x178) = pcVar10;
    *(undefined8 *)(lVar14 + 0x160) = 0;
    *(undefined8 *)(lVar14 + 0x168) = 0;
    *(undefined8 *)(lVar14 + 0x158) = 0;
    FUN_100076688(local_118,auStack_d0);
    puVar8 = puVar5;
    FUN_10094d4b0();
    _swift_release(puVar5);
    FUN_100004594(local_118);
    lVar14 = *(long *)(unaff_x20 + 0xd8);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100953f58);
      (*pcVar13)();
    }
    local_d7 = 2;
    local_118[0] = puVar8;
    local_100 = (undefined *)lVar7;
    _swift_retain(lVar14);
    _swift_retain(puVar8);
    FUN_10062cc34(local_118,lVar14);
    _swift_release(puVar5);
    _swift_release(puVar8);
    _swift_release(lVar14);
    FUN_1005e70f4(local_118);
    uVar12 = 1;
    if (lVar9 == lVar11) {
      return 1;
    }
    bVar4 = lVar11 == -1;
    lVar11 = lVar11 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100953e9c);
      (*pcVar13)();
    }
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100953f38);
  (*pcVar13)();
}



/* Address: 0x100953f58 | FUN_100953f58 */

uint FUN_100953f58(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  
  iVar1 = (int)&local_40;
  local_40 = param_1;
  _swift_errorRetain();
  puVar2 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  puVar3 = puVar2;
  _swift_dynamicCast();
  if (((ulong)puVar3 & 1) == 0) {
    local_28 = param_1;
    _swift_errorRetain(param_1);
    _swift_dynamicCast(&local_40,&local_28,puVar2,&DAT_100ef11e8,6);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      _swift_bridgeObjectRelease(local_38);
      uVar4 = (uint)(0x5ffffffe7fefff >> ((ulong)local_30 & 0x3f));
      if (0x37 < local_30) {
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Address: 0x100954020 | FUN_100954020 */

/* WARNING: Removing unreachable block (ram,0x000100954080) */

void FUN_100954020(long param_1)

{
  undefined8 uVar1;
  code *local_78;
  long lStack_70;
  undefined1 local_50;
  undefined1 local_38;
  
  FUN_1008f6908();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_78 = FUN_10095b4d8;
  local_50 = 0;
  local_38 = 1;
  lStack_70 = param_1;
  _swift_retain(uVar1);
  _swift_retain_n(param_1,2);
  FUN_10093efc4(&local_78);
  _swift_release(uVar1);
  _swift_release_n(param_1,2);
  FUN_1008fa458(&local_78);
  return;
}



/* Address: 0x1009540b8 | FUN_1009540b8 */

void FUN_1009540b8(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_80 [24];
  undefined8 *local_68 [3];
  
  uVar9 = *param_1;
  pcVar2 = "NIOPosix/SocketChannel.swift";
  local_68[0] = param_1;
  FUN_100622844("NIOPosix/SocketChannel.swift",0x1c,2,0x1a1,uVar9,&PTR_PTR_100f0f570);
  _swift_retain_n(param_1,2);
  pcVar3 = pcVar2;
  FUN_10095b09c(pcVar2,FUN_10095b4e0,param_1);
  _swift_release(pcVar2);
  _swift_release_n(param_1,2);
  puVar4 = &DAT_100f1b510;
  _swift_allocObject(&DAT_100f1b510,0x28,7);
  *(char **)(puVar4 + 0x10) = pcVar3;
  *(code **)(puVar4 + 0x18) = FUN_10095b4f8;
  *(undefined8 **)(puVar4 + 0x20) = param_1;
  uVar5 = *(ulong *)(pcVar3 + 0x20);
  lVar1 = *(long *)(pcVar3 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_1,4);
  _swift_retain_n(pcVar3,2);
  uVar6 = uVar5;
  (*pcVar11)(uVar5,lVar1);
  if ((uVar6 & 1) == 0) {
    puVar7 = &DAT_100f1b538;
    _swift_allocObject(&DAT_100f1b538,0x28,7);
    *(char **)(puVar7 + 0x10) = pcVar3;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1008db354;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    pcVar11 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar4);
    (*pcVar11)(thunk_FUN_1008db360,puVar7,uVar5,lVar1);
    _swift_release(puVar7);
    _swift_release_n(param_1,3);
    _swift_release(pcVar3);
    _swift_release(puVar4);
    goto LAB_1009542fc;
  }
  _swift_beginAccess(pcVar3 + 0x10,local_68,0,0);
  uVar10 = *(undefined8 *)(pcVar3 + 0x10);
  cVar8 = pcVar3[0x18];
  if (cVar8 == '\x01') {
    FUN_100308524(uVar10);
    FUN_10061cf14(2,0,uVar9,&PTR_PTR_100f0f5c8);
    cVar8 = '\x01';
LAB_1009542b8:
    FUN_100308538(uVar10,cVar8);
  }
  else {
    if (cVar8 != -1) goto LAB_1009542b8;
    _swift_beginAccess(pcVar3 + 0x30,auStack_80,0x21,0);
    FUN_10064967c(thunk_FUN_1008db354,puVar4);
    _swift_endAccess(auStack_80);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(param_1,3);
  _swift_release(pcVar3);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(0);
LAB_1009542fc:
  _swift_release(pcVar3);
  return;
}



/* Address: 0x100954320 | FUN_100954320 */

void FUN_100954320(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x118,auStack_38,0,0);
  if (*(char *)(param_1 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    FUN_10094f284(0);
  }
  return;
}



/* Address: 0x1009543b8 | FUN_1009543b8 */

void FUN_1009543b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_100fec610 != -1) {
    _swift_once(&DAT_100fec610,FUN_100901fcc);
  }
  uVar4 = DAT_1010581f0;
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100f1b4e8;
  _swift_allocObject(&DAT_100f1b4e8,0x20,7);
  *(long *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_1008d678c,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x1009544e8 | FUN_1009544e8 */

void FUN_1009544e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain();
  FUN_10094ad98(uVar1,param_2,param_1);
  return;
}



/* Address: 0x100954530 | FUN_100954530 */

void FUN_100954530(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x160));
  return;
}



/* Address: 0x100954538 | FUN_100954538 */

void FUN_100954538(long param_1)

{
  FUN_10094d8e8();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x160));
  _swift_deallocClassInstance(param_1,0x170,7);
  return;
}



/* Address: 0x10095456c | FUN_10095456c */

void FUN_10095456c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fee3a8,&TargetClassDescriptor_100cc5e60);
  return;
}



/* Address: 0x100954580 | FUN_100954580 */

void FUN_100954580(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_Int32_100eabd40 + 0x40;
  puStack_18 = &DAT_100c85fd8;
  _swift_initClassMetadata2(param_1,0x100,2,&local_20,param_1 + 0x378);
  return;
}



/* Address: 0x1009545cc | FUN_1009545cc */

byte FUN_1009545cc(byte *param_1)

{
  long unaff_x20;
  
  (**(code **)(**(long **)(*(long *)(unaff_x20 + 0x160) + 0x70) + 0x88))();
  return *param_1 & 1;
}



/* Address: 0x100954600 | FUN_100954600 */

bool FUN_100954600(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x118,auStack_28,0,0);
  return *(char *)(unaff_x20 + 0x132) != '\x05';
}



/* Address: 0x100954638 | FUN_100954638 */

void FUN_100954638(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x160));
  return;
}



/* Address: 0x100954640 | FUN_100954640 */

void FUN_100954640(long param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  bVar1 = *(byte *)(unaff_x20 + 0x1b0);
  if (bVar1 != 2) {
    param_1 = *(long *)(unaff_x20 + 0x168);
    lVar4 = *(long *)(unaff_x20 + 0x178);
    lVar3 = *(long *)(unaff_x20 + 0x188);
    lVar2 = *(long *)(unaff_x20 + 0x1a0);
    if (param_1 != 0) {
      _swift_slowDealloc(param_1,0xffffffffffffffff,0xffffffffffffffff);
    }
    if (lVar4 != 0) {
      _swift_slowDealloc(lVar4,0xffffffffffffffff,0xffffffffffffffff);
      param_1 = lVar4;
    }
    if (lVar3 != 0) {
      _swift_slowDealloc(lVar3,0xffffffffffffffff,0xffffffffffffffff);
      param_1 = lVar3;
    }
    if (((bVar1 & 1) != 0) && (lVar2 != 0)) {
      _swift_slowDealloc(lVar2,0xffffffffffffffff,0xffffffffffffffff);
      param_1 = lVar2;
    }
  }
  FUN_10094d8e8();
  _swift_release(*(undefined8 *)(param_1 + 0x160));
  _swift_deallocClassInstance(param_1,0x1b1,7);
  return;
}



/* Address: 0x1009546f0 | FUN_1009546f0 */

void FUN_1009546f0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fee788,&TargetClassDescriptor_100cc5f90);
  return;
}



/* Address: 0x100954704 | FUN_100954704 */

void FUN_100954704(long param_1)

{
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_38 = &DAT_100c86028;
  puStack_30 = &DAT_100c86028;
  puStack_20 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_28 = &DAT_100c86028;
  local_18 = &DAT_100c86040;
  _swift_initClassMetadata2(param_1,0x100,5,&local_38,param_1 + 0x378);
  return;
}



/* Address: 0x100954760 | FUN_100954760 */

/* WARNING: Removing unreachable block (ram,0x000100954a58) */
/* WARNING: Removing unreachable block (ram,0x00010095499c) */
/* WARNING: Removing unreachable block (ram,0x000100954854) */
/* WARNING: Removing unreachable block (ram,0x000100954ad0) */
/* WARNING: Removing unreachable block (ram,0x000100954894) */
/* WARNING: Removing unreachable block (ram,0x000100954984) */
/* WARNING: Removing unreachable block (ram,0x0001009548ac) */

void FUN_100954760(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 local_90 [3];
  undefined *local_78;
  undefined **ppuStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *unaff_x20;
  *(undefined2 *)(unaff_x20 + 0x2b) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x15a) = 0;
  unaff_x20[0x2e] = 0;
  unaff_x20[0x2d] = 0;
  unaff_x20[0x30] = 0;
  unaff_x20[0x2f] = 0;
  unaff_x20[0x32] = 0;
  unaff_x20[0x31] = 0;
  unaff_x20[0x34] = 0;
  unaff_x20[0x33] = 0;
  unaff_x20[0x35] = 0;
  *(undefined1 *)(unaff_x20 + 0x36) = 2;
  uVar1 = 0;
  FUN_10094cfe0(0);
  uVar2 = uVar1;
  _swift_allocObject();
  lVar3 = param_2;
  FUN_10095e480(param_2,param_4,param_3);
  if (unaff_x21 == 0) {
    if ((int)param_2 == 0x1e) {
      FUN_10095e2f8();
    }
    FUN_1008d5604();
    puVar4 = (undefined8 *)(ulong)*(uint *)(lVar3 + 0x10);
    if (-1 < (int)*(uint *)(lVar3 + 0x10)) {
      FUN_10095ea98();
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      FUN_100931a98(0);
      _swift_allocObject();
      _swift_retain(uVar2);
      _swift_retain(uVar1);
      FUN_10092f1c4(uVar2,uVar1);
      unaff_x20[0x2c] = uVar2;
      local_78 = &DAT_100ef2520;
      ppuStack_70 = &PTR_TargetResilientWitness_100c6bf2c_Implementation_100ef24b0;
      local_90[0] = 0x800;
      FUN_10094d4b0(lVar3,0,0,param_1,local_90,1);
      goto LAB_100954a90;
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001f;
    puVar4[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
    if (-1 < *(int *)(lVar3 + 0x10)) {
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      FUN_10095d958();
    }
    _swift_willThrow();
    _swift_release(lVar3);
    _swift_release(param_1);
  }
  else {
    _swift_release(param_1);
    _swift_deallocPartialClassInstance(uVar2,uVar1,0x14,7);
  }
  _swift_deallocPartialClassInstance(unaff_x20,uVar5,0x1b1,7);
LAB_100954a90:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100954b70 | FUN_100954b70 */

void FUN_100954b70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_78 [3];
  undefined *local_60;
  undefined **ppuStack_58;
  
  *(undefined2 *)(unaff_x20 + 0x158) = 0;
  *(undefined1 *)(unaff_x20 + 0x15a) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined1 *)(unaff_x20 + 0x1b0) = 2;
  puVar2 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
    *puVar2 = 0xd00000000000001f;
    puVar2[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar2 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095ea98();
    if (unaff_x21 == 0) {
      uVar3 = *(undefined8 *)(param_4 + 0x78);
      uVar1 = *(undefined8 *)(param_4 + 0x80);
      FUN_100931a98(0);
      _swift_allocObject();
      _swift_retain(uVar3);
      _swift_retain(uVar1);
      FUN_10092f1c4(uVar3,uVar1);
      *(undefined8 *)(unaff_x20 + 0x160) = uVar3;
      local_60 = &DAT_100ef2520;
      ppuStack_58 = &PTR_TargetResilientWitness_100c6bf2c_Implementation_100ef24b0;
      local_78[0] = 0x800;
      FUN_10094d4b0(param_1,param_2,param_3,param_4,local_78,1);
      return;
    }
  }
  _swift_release(param_4);
  _swift_unknownObjectRelease(param_2);
  _swift_release(param_1);
  _swift_deallocPartialClassInstance();
  return;
}



/* Address: 0x100954d00 | FUN_100954d00 */

void FUN_100954d00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar2 = 0;
  local_a0 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar12 = *(long *)(lVar2 + -8);
  puVar7 = auStack_b0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_3 + -8);
  uVar9 = (long)puVar7 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_80,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar6 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar6);
    goto LAB_100954ef8;
  }
  uVar3 = uVar9;
  local_a8 = lVar10;
  (**(code **)(lVar10 + 0x10))(uVar9,param_1,param_3);
  _swift_dynamicCast();
  if ((int)uVar3 == 0) {
    _swift_dynamicCast();
    if ((int)uVar3 == 0) {
      _swift_dynamicCast();
      iVar1 = (int)uVar3;
      if ((uVar3 & 1) == 0) {
        _swift_dynamicCast();
        if (iVar1 == 0) {
          _swift_dynamicCast();
          if (iVar1 == 0) {
            _swift_dynamicCast();
            if (((iVar1 == 0) && (_swift_dynamicCast(), iVar1 == 0)) &&
               (_swift_dynamicCast(), iVar1 == 0)) {
              FUN_1008d7a78(param_1,local_a0,param_3,param_4);
              goto LAB_100954ee8;
            }
          }
          else {
            (**(code **)(lVar12 + 0x10))(puVar7,local_a0,lVar2);
            puVar5 = &local_90;
            _swift_dynamicCast(puVar5,puVar7,lVar2,PTR___type_metadata_for_Swift_Bool_100eac570,7);
            uVar11 = local_90;
            thunk_FUN_100937a78();
            FUN_1005d8534(puVar7);
            if ((((ulong)puVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
              FUN_1005d8534(puVar5);
              uVar13 = (uint)((ulong)puVar5 >> 0x3e);
              uVar11 = uVar11 & 0xff;
              if (uVar13 == 0) {
                *(undefined1 *)(unaff_x20 + 0x159) = 1;
                uVar13 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
                puVar4 = (undefined8 *)(ulong)uVar13;
                local_90 = uVar11;
                if ((int)uVar13 < 0) goto LAB_100955188;
                uVar6 = 0;
                uVar8 = 0x1a;
              }
              else {
                if (uVar13 != 1) goto LAB_1009550f4;
                *(undefined1 *)(unaff_x20 + 0x159) = 1;
                lVar2 = *(long *)(unaff_x20 + 0x20);
                if (DAT_100febae8 != -1) {
                  _swift_once(&DAT_100febae8,FUN_1008d5000);
                }
                uVar13 = *(uint *)(lVar2 + 0x10);
                puVar4 = (undefined8 *)(ulong)uVar13;
                local_90 = uVar11;
                if ((int)uVar13 < 0) goto LAB_100955188;
                uVar6 = 0x29;
                uVar8 = DAT_101058178;
              }
              goto LAB_100955170;
            }
          }
        }
        else {
          (**(code **)(lVar12 + 0x10))(puVar7,local_a0,lVar2);
          puVar5 = &local_90;
          _swift_dynamicCast(puVar5,puVar7,lVar2,PTR___type_metadata_for_Swift_Bool_100eac570,7);
          uVar11 = local_90;
          thunk_FUN_100937a78();
          FUN_1005d8534(puVar7);
          if ((((ulong)puVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
            FUN_1005d8534(puVar5);
            uVar13 = (uint)((ulong)puVar5 >> 0x3e);
            uVar11 = uVar11 & 0xff;
            if (uVar13 == 0) {
              *(undefined1 *)(unaff_x20 + 0x158) = 1;
              uVar13 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              puVar4 = (undefined8 *)(ulong)uVar13;
              local_90 = uVar11;
              if ((int)uVar13 < 0) {
LAB_100955188:
                FUN_1008d5300();
                _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
                *puVar4 = 0xd00000000000001f;
                puVar4[1] = 0x8000000100db4780;
                *(undefined4 *)(puVar4 + 2) = 9;
                _swift_willThrow();
                goto LAB_100954ee8;
              }
              uVar6 = 0;
              uVar8 = 0x1b;
            }
            else {
              if (uVar13 != 1) goto LAB_1009550f4;
              *(undefined1 *)(unaff_x20 + 0x158) = 1;
              uVar13 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              puVar4 = (undefined8 *)(ulong)uVar13;
              local_90 = uVar11;
              if ((int)uVar13 < 0) goto LAB_100955188;
              uVar6 = 0x29;
              uVar8 = 0x23;
            }
LAB_100955170:
            FUN_10095e2f8(puVar4,uVar6,uVar8,&local_90,4);
            goto LAB_100954ee8;
          }
        }
LAB_1009550f4:
        if (DAT_100fec610 != -1) {
          _swift_once(&DAT_100fec610,FUN_100901fcc);
        }
        uVar6 = DAT_1010581f0;
        _swift_willThrow();
        _swift_errorRetain(uVar6);
      }
    }
    else {
      lVar10 = *(long *)(unaff_x20 + 0x160);
      (**(code **)(lVar12 + 0x10))(puVar7,local_a0,lVar2);
      _swift_dynamicCast(&local_90,puVar7,lVar2,&DAT_100eecab0,7);
      *(undefined8 *)(lVar10 + 0x68) = uStack_88;
      *(ulong *)(lVar10 + 0x60) = CONCAT44(uStack_8c,local_90);
    }
  }
  else {
    lVar10 = *(long *)(unaff_x20 + 0x160);
    (**(code **)(lVar12 + 0x10))(puVar7,local_a0,lVar2);
    _swift_dynamicCast(&local_90,puVar7,lVar2,PTR___type_metadata_for_Swift_UInt_100eacb00,7);
    *(ulong *)(lVar10 + 0x80) = CONCAT44(uStack_8c,local_90);
  }
LAB_100954ee8:
  (**(code **)(local_a8 + 8))(uVar9,param_3);
LAB_100954ef8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100955240 | FUN_100955240 */

void FUN_100955240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  lVar11 = *(long *)(param_3 + -8);
  uVar9 = (long)&local_90 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_68,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\x05') {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar3 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar3);
    return;
  }
  uVar2 = uVar9;
  (**(code **)(lVar11 + 0x10))(uVar9,param_2,param_3);
  _swift_dynamicCast();
  if ((int)uVar2 == 0) {
    _swift_dynamicCast();
    if ((int)uVar2 != 0) {
      uStack_88 = *(undefined8 *)(*(long *)(unaff_x20 + 0x160) + 0x68);
      local_90 = *(undefined8 *)(*(long *)(unaff_x20 + 0x160) + 0x60);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar7 = &DAT_100eecab0;
      goto LAB_100955468;
    }
    _swift_dynamicCast();
    if ((int)uVar2 != 0) {
      if (*(char *)(unaff_x20 + 0x1b0) == '\x02') {
        local_90 = 0;
      }
      else {
        local_90 = *(undefined8 *)(unaff_x20 + 0x170);
      }
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar7 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      goto LAB_100955468;
    }
    uVar5 = uVar9;
    _swift_dynamicCast();
    if ((int)uVar2 != 0) {
      thunk_FUN_100937a78();
      FUN_1005d8534(uVar5);
      if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) goto LAB_100955578;
      FUN_1005d8534(uVar2);
      uVar10 = (uint)(uVar2 >> 0x3e);
      if (uVar10 == 0) {
        uVar10 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
        puVar4 = (undefined8 *)(ulong)uVar10;
        if ((int)uVar10 < 0) {
LAB_1009556f8:
          FUN_1008d5300();
          _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
          *puVar4 = 0xd00000000000001f;
          puVar4[1] = 0x8000000100db4780;
          *(undefined4 *)(puVar4 + 2) = 9;
          _swift_willThrow();
          goto LAB_100955478;
        }
        uVar3 = 0;
        uVar6 = 0x1b;
      }
      else {
        if (uVar10 != 1) goto LAB_100955578;
        uVar10 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
        puVar4 = (undefined8 *)(ulong)uVar10;
        if ((int)uVar10 < 0) goto LAB_1009556f8;
        uVar3 = 0x29;
        uVar6 = 0x23;
      }
LAB_1009555d0:
      FUN_10094d3a0(puVar4,uVar3,uVar6);
      if (unaff_x21 != 0) goto LAB_100955478;
      local_90 = CONCAT71(local_90._1_7_,puVar4 != (undefined8 *)0x0);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
      goto LAB_100955468;
    }
    uVar5 = uVar9;
    _swift_dynamicCast();
    if ((int)uVar2 != 0) {
      thunk_FUN_100937a78();
      FUN_1005d8534(uVar5);
      if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
        FUN_1005d8534(uVar2);
        uVar10 = (uint)(uVar2 >> 0x3e);
        if (uVar10 == 0) {
          uVar10 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
          puVar4 = (undefined8 *)(ulong)uVar10;
          if ((int)uVar10 < 0) goto LAB_1009556f8;
          uVar3 = 0;
          uVar6 = 0x1a;
        }
        else {
          if (uVar10 != 1) goto LAB_100955578;
          lVar8 = *(long *)(unaff_x20 + 0x20);
          if (DAT_100febae8 == -1) {
            uVar10 = *(uint *)(lVar8 + 0x10);
          }
          else {
            _swift_once(&DAT_100febae8,FUN_1008d5000);
            uVar10 = *(uint *)(lVar8 + 0x10);
          }
          puVar4 = (undefined8 *)(ulong)uVar10;
          if ((int)uVar10 < 0) goto LAB_1009556f8;
          uVar3 = 0x29;
          uVar6 = DAT_101058178;
        }
        goto LAB_1009555d0;
      }
LAB_100955578:
      if (DAT_100fec610 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      uVar3 = DAT_1010581f0;
      _swift_willThrow();
      _swift_errorRetain(uVar3);
      goto LAB_100955478;
    }
    _swift_dynamicCast();
    iVar1 = (int)uVar2;
    if (((iVar1 != 0) || (_swift_dynamicCast(), iVar1 != 0)) || (_swift_dynamicCast(), iVar1 != 0))
    goto LAB_100955578;
    _swift_dynamicCast();
    if (iVar1 == 0) {
      FUN_1008d81dc(param_1,param_2,param_3,param_4);
      goto LAB_100955478;
    }
    lVar8 = *(long *)(unaff_x20 + 0x160);
    _swift_beginAccess(lVar8 + 0x20,&local_90,0,0);
    local_70 = *(undefined8 *)(lVar8 + 0x50);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    puVar4 = &local_70;
    puVar7 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  }
  else {
    local_90 = *(undefined8 *)(*(long *)(unaff_x20 + 0x160) + 0x80);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    puVar7 = PTR___type_metadata_for_Swift_UInt_100eacb00;
LAB_100955468:
    puVar4 = &local_90;
  }
  _swift_dynamicCast(param_1,puVar4,puVar7,uVar3,7);
LAB_100955478:
  (**(code **)(lVar11 + 8))(uVar9,param_3);
  return;
}



/* Address: 0x100955748 | FUN_100955748 */

undefined8 FUN_100955748(ulong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long lVar5;
  byte local_71;
  undefined1 auStack_70 [16];
  int local_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x160);
  puVar2 = (undefined8 *)(lVar5 + 0x20);
  _swift_beginAccess(puVar2,auStack_58,1,0);
  puVar3 = puVar2;
  if (*(long *)(lVar5 + 0x28) != *(long *)(lVar5 + 0x30)) {
    FUN_1008d5300();
    puVar3 = (undefined8 *)&DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
    *puVar2 = 0xd000000000000033;
    puVar2[1] = 0x8000000100db5670;
    *(undefined4 *)(puVar2 + 2) = 0x38;
    _swift_beginAccess(lVar5 + 0x20,auStack_70,0x21,0);
    FUN_10092ec70(puVar3);
    _swift_endAccess(auStack_70);
    _swift_errorRelease();
  }
  local_60 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (local_60 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_100667428(&local_71,FUN_10095b454,auStack_70,param_1,
                  PTR___type_metadata_for_Swift_Bool_100eac570);
    if (unaff_x21 == 0) {
      if ((local_71 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009558dc);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)(lVar5 + 0x58);
      *(ulong *)(lVar5 + 0x58) = param_1;
      _swift_retain(param_1 & 0x3fffffffffffffff);
      FUN_1005d8534(uVar4);
    }
  }
  return 1;
}



/* Address: 0x1009558dc | FUN_1009558dc */

void FUN_1009558dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  String SVar5;
  
  if (*(char *)(unaff_x20 + 0x1b0) == '\x02') {
    if ((((*(byte *)(unaff_x20 + 0x158) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x159) & 1) == 0)) &&
       (*(char *)(unaff_x20 + 0x15a) != '\x01')) {
      FUN_100955a50(0,0);
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x30);
      uVar3 = *(undefined8 *)(lVar4 + 0x80);
      uVar2 = uVar3;
      _swift_retain(uVar3);
      FUN_100931ca8();
      _swift_release(uVar3);
      _swift_retain();
      FUN_100939d80(uVar2);
      if (unaff_x21 == 0) {
        _swift_release();
        uVar3 = *(undefined8 *)(lVar4 + 0x80);
        _swift_retain(uVar3);
        FUN_100931dcc(uVar2);
        _swift_release(uVar2);
        _swift_release(uVar3);
      }
      else {
        _swift_release();
        uVar3 = *(undefined8 *)(lVar4 + 0x80);
        _swift_retain(uVar3);
        FUN_100931dcc(uVar2);
        _swift_release(uVar2);
        _swift_release(uVar3);
      }
    }
    return;
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000034,0x8000000100db5630,
             0xdb5630);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100955a50);
  (*pcVar1)();
}



/* Address: 0x100955a50 | FUN_100955a50 */

/* WARNING: Removing unreachable block (ram,0x000100955fe0) */

undefined8 FUN_100955a50(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 **extraout_x9;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x21;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *local_310;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined2 uStack_2a8;
  undefined2 uStack_2a6;
  undefined4 uStack_2a4;
  undefined2 local_2a0;
  undefined6 uStack_29e;
  undefined2 uStack_298;
  undefined6 uStack_296;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 local_272;
  undefined1 local_271;
  ushort local_270;
  uint local_26e;
  undefined8 local_26a;
  undefined8 uStack_262;
  undefined4 local_25a;
  undefined8 local_256;
  undefined8 uStack_24e;
  undefined8 local_246;
  undefined8 uStack_23e;
  undefined8 local_236;
  undefined8 uStack_22e;
  undefined8 local_226;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined8 uStack_210;
  undefined8 local_208;
  char local_200;
  undefined8 *local_1c0;
  undefined8 *puStack_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined1 local_17f;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 uStack_159;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  char local_f0;
  undefined1 auStack_e8 [24];
  byte local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_298 = 0;
  uStack_296 = 0;
  local_2a0 = 0;
  uStack_29e = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  local_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a6 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  local_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  local_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  local_304 = 0x80;
  uVar8 = unaff_x20[0x19];
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100956084);
    (*pcVar2)();
  }
  _swift_beginAccess(unaff_x20 + 0x23,auStack_e8,0,0);
  if (*(char *)((long)unaff_x20 + 0x132) != '\x05') {
    ppuVar4 = &PTR___tlv_bootstrap_101048e48;
    (*(code *)PTR___tlv_bootstrap_101048e48)();
    uVar11 = 0;
    uVar16 = 1;
    ppuVar9 = extraout_x9;
    do {
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_118 = 0;
      local_120 = 0;
      local_f0 = '\x01';
      ppuVar9[9] = param_1;
      ppuVar9[10] = param_2;
      if (*ppuVar4 == *(undefined **)(unaff_x20[6] + 0x40)) {
        puVar6 = (undefined8 *)unaff_x20[0x1e];
        puVar7 = (undefined8 *)unaff_x20[0x1f];
      }
      else {
        lVar15 = unaff_x20[7];
        iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar15 + 0x10));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10095607c);
          (*pcVar2)();
        }
        puVar6 = (undefined8 *)unaff_x20[0x1e];
        puVar7 = (undefined8 *)unaff_x20[0x1f];
        iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar15 + 0x10));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100956080);
          (*pcVar2)();
        }
      }
      _swift_beginAccess(unaff_x20 + 0xd,&local_178,0x21,0);
      _swift_retain_n(unaff_x20,2);
      FUN_1009588f0(&local_1c0,unaff_x20 + 0xd,unaff_x20,&local_300,&local_304,local_130);
      if (unaff_x21 != 0) {
        _swift_endAccess(&local_178);
        local_310 = unaff_x20;
LAB_100955ff0:
        _swift_release(local_310);
        goto LAB_100955ff4;
      }
      local_310 = local_1c0;
      if (local_1c0 == (undefined8 *)0x0) {
        _swift_retain(unaff_x20);
        local_310 = &local_208;
        FUN_100959244();
        cVar1 = local_200;
      }
      else {
        local_208 = uStack_1a8;
        puVar6 = puStack_1b8;
        puVar7 = local_1b0;
        cVar1 = (char)local_1a0;
      }
      uVar12 = local_208;
      _swift_endAccess(&local_178);
      puVar5 = unaff_x20;
      _swift_release();
      if (cVar1 != '\x01') {
        _swift_release(local_310);
        goto LAB_100955ff4;
      }
      if (local_300._1_1_ == '\x01') {
        local_272 = (undefined1)local_300;
        local_271 = 1;
        local_270 = local_300._2_2_;
        local_26e = local_300._4_4_;
        local_26a = uStack_2f8;
        uStack_262 = uStack_2f0;
        local_25a = local_2e8;
        uStack_23e = CONCAT44(uStack_2c8,uStack_2cc);
        local_246 = CONCAT44(uStack_2d0,uStack_2d4);
        uStack_22e = CONCAT44(uStack_2b8,uStack_2bc);
        local_236 = CONCAT44(local_2c0,uStack_2c4);
        uStack_21e = CONCAT24(uStack_2a8,uStack_2ac);
        local_226 = CONCAT44(uStack_2b0,uStack_2b4);
        uStack_210 = CONCAT26(uStack_298,uStack_29e);
        uStack_218 = uStack_2a6;
        uStack_216 = (undefined6)(CONCAT26(local_2a0,CONCAT42(uStack_2a4,uStack_2a6)) >> 0x10);
        uStack_24e = CONCAT44(uStack_2d8,uStack_2dc);
        local_256 = CONCAT44(local_2e0,uStack_2e4);
        puVar5 = (undefined8 *)&local_272;
        FUN_1006662c0();
      }
      else if (local_300._1_1_ == '\x1e') {
        puVar5 = (undefined8 *)
                 (local_300 & 0xff | (ulong)local_300._2_2_ << 0x10 | (ulong)local_300._4_4_ << 0x20
                 | 0x1e00);
        thunk_FUN_100668e40();
      }
      else {
        if (local_300._1_1_ != '\x02') {
          FUN_1008d5ed0();
          _swift_allocError(&DAT_100ef2820,puVar5,0,0);
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          *(undefined1 *)(puVar5 + 3) = 2;
          _swift_willThrow();
          goto LAB_100955ff0;
        }
        puVar5 = (undefined8 *)
                 (local_300 & 0xff | (ulong)local_300._2_2_ << 0x10 | (ulong)local_300._4_4_ << 0x20
                 | 0x200);
        thunk_FUN_100668d24();
      }
      _swift_beginAccess(unaff_x20 + 0xd,&local_1c0,0x21,0);
      uVar11 = unaff_x20[0x16];
      lVar15 = unaff_x20[0x17];
      FUN_10007d048(unaff_x20 + 0x13,uVar11);
      (**(code **)(lVar15 + 0x20))(uVar12,uVar11,lVar15);
      *(byte *)(unaff_x20 + 0x18) = (byte)uVar12 & 1;
      _swift_endAccess(&local_1c0);
      *(undefined1 *)(unaff_x20 + 0xb) = 0;
      if (((*(byte *)(unaff_x20 + 0x2b) & 1) == 0) &&
         ((*(byte *)((long)unaff_x20 + 0x159) & 1) == 0)) {
        uVar13 = 0;
        uVar11 = 0;
        if (*(char *)((long)unaff_x20 + 0x15a) == '\x01') {
          uVar14 = 4;
          uVar12 = 0;
          uVar10 = 0;
          if (local_f0 != '\x01') goto LAB_100955df4;
        }
        else {
          uVar14 = 4;
          uVar12 = 0;
          uVar10 = 0;
        }
      }
      else if (local_f0 == '\x01') {
        uVar11 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar13 = 0;
        uVar14 = 4;
      }
      else {
LAB_100955df4:
        local_a8 = local_120;
        local_98 = local_110;
        local_a0 = (undefined4)uStack_118;
        local_90 = (undefined4)uStack_108;
        local_88 = local_100;
        local_80 = (undefined4)uStack_f8;
        uStack_7c = (undefined4)((ulong)uStack_f8 >> 0x20);
        FUN_100901718(local_d0,&local_a8);
        uVar13 = local_b0;
        uVar10 = local_b8;
        uVar12 = uStack_c0;
        uVar11 = local_c8;
        uVar14 = (ulong)local_d0[0];
        FUN_1005d84e8(local_c8,uStack_c0);
      }
      puStack_170 = local_310;
      local_168 = SUB84(puVar6,0);
      local_164 = (undefined4)((ulong)puVar6 >> 0x20);
      local_160 = SUB84(puVar7,0);
      local_15c = (undefined2)((ulong)puVar7 >> 0x20);
      local_15a = (undefined1)((ulong)puVar7 >> 0x30);
      lVar15 = unaff_x20[0x1b];
      local_178 = puVar5;
      local_158 = uVar14;
      uStack_150 = uVar11;
      local_148 = uVar12;
      uStack_140 = uVar10;
      local_138 = uVar13;
      if (lVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009560a0);
        (*pcVar2)();
      }
      uStack_1a8 = CONCAT17(uStack_159,(int7)puVar7);
      puStack_1b8 = local_310;
      local_17f = 1;
      local_1c0 = puVar5;
      local_1b0 = puVar6;
      local_1a0 = uVar14;
      uStack_198 = uVar11;
      local_190 = uVar12;
      uStack_188 = uVar10;
      local_180 = uVar13;
      _swift_retain((ulong)puVar5 & 0x3fffffffffffffff);
      _swift_retain(lVar15);
      _swift_retain(local_310);
      FUN_1000f8cac(&local_178,&local_208,&DAT_100feeb70,&DAT_100c860f0);
      FUN_10062cc34(&local_1c0,lVar15);
      FUN_1005d8fac(uVar14,uVar11,uVar12,uVar10,uVar13);
      FUN_1000fb4c4(&local_178,&DAT_100feeb70,&DAT_100c860f0);
      _swift_release((ulong)puVar5 & 0x3fffffffffffffff);
      _swift_release(local_310);
      _swift_release(lVar15);
      FUN_1005e70f4(&local_1c0);
      if (uVar8 == uVar16) {
        uVar11 = 1;
        goto LAB_100955ff4;
      }
      if (0xfffffffffffffffe < uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100956078);
        (*pcVar2)();
      }
      uVar16 = uVar16 + 1;
      uVar11 = 1;
      ppuVar9 = &local_178;
    } while (*(char *)((long)unaff_x20 + 0x132) != '\x05');
  }
  if (DAT_100fec5b8 != -1) {
    _swift_once(&DAT_100fec5b8,FUN_100901f8c);
  }
  uVar11 = DAT_1010581c8;
  _swift_willThrow();
  _swift_errorRetain(uVar11);
LAB_100955ff4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009560a4 | FUN_1009560a4 */

bool FUN_1009560a4(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  
  iVar1 = (int)auStack_40;
  local_28 = param_1;
  _swift_errorRetain();
  puVar2 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(auStack_40,&local_28,puVar2,&DAT_100ef11e8,6);
  if (iVar1 != 0) {
    _swift_bridgeObjectRelease(local_38);
  }
  return iVar1 == 0 || local_30 != 0x3d && local_30 != 0xc;
}



/* Address: 0x100956120 | FUN_100956120 */

/* WARNING: Removing unreachable block (ram,0x000100956194) */
/* WARNING: Removing unreachable block (ram,0x0001009564c4) */
/* WARNING: Removing unreachable block (ram,0x000100956270) */

undefined8 FUN_100956120(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_6c [3];
  undefined4 local_60 [6];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar10 = *(long *)(unaff_x20 + 0x20);
  iVar2 = *(int *)(lVar10 + 0x10);
  if (iVar2 < 0) {
    FUN_1008d5300();
    puVar6 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000001f;
    param_1[1] = 0x8000000100db4780;
    *(undefined4 *)(param_1 + 2) = 9;
    _swift_willThrow();
    _swift_beginAccess(unaff_x20 + 0x118,local_60,0,0);
    if ((5 < *(byte *)(unaff_x20 + 0x132)) ||
       ((1 << (ulong)(*(byte *)(unaff_x20 + 0x132) & 0x1f) & 0x23U) == 0)) {
      uVar7 = (ulong)(*(byte *)(unaff_x20 + 0x110) & 0xfffffffd);
      FUN_10094dc20();
      while (*(byte *)(unaff_x20 + 0x132) - 3 < 2) {
        FUN_10094f79c();
        if (((uint)uVar7 & 0xfe) == 2) break;
        if (((uint)uVar7 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100956374);
          (*pcVar4)();
        }
      }
    }
    iVar2 = *(int *)(lVar10 + 0x10);
    if (iVar2 < 0) {
      uVar9 = 0;
    }
    else {
      local_6c[0] = 4;
      piVar5 = (int *)0x4;
      _swift_slowAlloc(4,0xffffffffffffffff);
      *piVar5 = 0;
      FUN_10095dcec(iVar2,0xffff,0x1007,piVar5,local_6c);
      iVar2 = *piVar5;
      _swift_slowDealloc(piVar5,0xffffffffffffffff,0xffffffffffffffff);
      uVar9 = 0xd000000000000050;
      pcVar1 = "OF which is unexpected";
      iVar3 = 0x36;
      if (iVar2 != 0) {
        uVar9 = 0xd00000000000001c;
        pcVar1 = " (no error set).";
        iVar3 = iVar2;
      }
      FUN_1008d5300();
      puVar8 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,piVar5,0,0);
      *(undefined8 *)piVar5 = uVar9;
      *(ulong *)(piVar5 + 2) = (ulong)pcVar1 | 0x8000000000000000;
      piVar5[4] = iVar3;
      FUN_10094e2ec();
      _swift_errorRelease(puVar6);
      _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
      uVar9 = 0;
      puVar6 = puVar8;
    }
  }
  else {
    local_60[0] = 4;
    piVar5 = (int *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *piVar5 = 0;
    FUN_10095dcec(iVar2,0xffff,0x1007,piVar5,local_60);
    iVar2 = *piVar5;
    _swift_slowDealloc(piVar5,0xffffffffffffffff,0xffffffffffffffff);
    if ((iVar2 == 0xc) || (iVar2 == 0x3d)) {
      lVar10 = *(long *)(unaff_x20 + 0xd8);
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009565d0);
        (*pcVar4)();
      }
      FUN_1008d5300();
      puVar6 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,piVar5,0,0);
      piVar5[0] = 0x655f6f73;
      piVar5[1] = 0x726f7272;
      *(undefined1 **)(piVar5 + 2) = &DAT_e800000000000000;
      piVar5[4] = iVar2;
      _swift_retain(lVar10);
      FUN_10062cce4(puVar6,lVar10);
      _swift_release(lVar10);
      uVar9 = 1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x118,local_60,0,0);
      if ((5 < *(byte *)(unaff_x20 + 0x132)) ||
         ((1 << (ulong)(*(byte *)(unaff_x20 + 0x132) & 0x1f) & 0x23U) == 0)) {
        uVar7 = (ulong)(*(byte *)(unaff_x20 + 0x110) & 0xfffffffd);
        FUN_10094dc20();
        while (*(byte *)(unaff_x20 + 0x132) - 3 < 2) {
          FUN_10094f79c();
          if (((uint)uVar7 & 0xfe) == 2) break;
          if (((uint)uVar7 & 0xff) != 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100956534);
            (*pcVar4)();
          }
        }
      }
      iVar2 = *(int *)(lVar10 + 0x10);
      if (iVar2 < 0) {
        uVar9 = 0;
        goto LAB_100956418;
      }
      local_6c[0] = 4;
      piVar5 = (int *)0x4;
      _swift_slowAlloc(4,0xffffffffffffffff);
      *piVar5 = 0;
      FUN_10095dcec(iVar2,0xffff,0x1007,piVar5,local_6c);
      iVar2 = *piVar5;
      _swift_slowDealloc(piVar5,0xffffffffffffffff,0xffffffffffffffff);
      uVar9 = 0xd000000000000050;
      pcVar1 = "OF which is unexpected";
      iVar3 = 0x36;
      if (iVar2 != 0) {
        uVar9 = 0xd00000000000001c;
        pcVar1 = " (no error set).";
        iVar3 = iVar2;
      }
      FUN_1008d5300();
      puVar6 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,piVar5,0,0);
      *(undefined8 *)piVar5 = uVar9;
      *(ulong *)(piVar5 + 2) = (ulong)pcVar1 | 0x8000000000000000;
      piVar5[4] = iVar3;
      FUN_10094e2ec();
      _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
      uVar9 = 0;
    }
  }
  _swift_errorRelease(puVar6);
LAB_100956418:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}



/* Address: 0x1009565d0 | FUN_1009565d0 */

void FUN_1009565d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  char local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  FUN_100877858(param_1,&local_c8);
  if (local_87 == '\x01') {
    uStack_58 = uStack_a0;
    local_60 = local_a8;
    uStack_48 = uStack_90;
    uStack_50 = local_98;
    local_40 = local_88;
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    uStack_68 = uStack_b0;
    uStack_70 = local_b8;
    FUN_10095668c(&local_80,param_2);
    FUN_1000fb4c4(&local_80,&DAT_100feeb70,&DAT_100c860f0);
  }
  else {
    puVar1 = &local_c8;
    FUN_1008b78fc(puVar1);
    FUN_10065b5f8();
    FUN_100956b4c();
    _swift_release(puVar1);
  }
  return;
}



/* Address: 0x10095668c | FUN_10095668c */

void FUN_10095668c(ulong *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_128;
  ulong uStack_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  long lStack_110;
  ulong local_108;
  ulong *puStack_100;
  ulong local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  char local_e0;
  undefined1 auStack_d8 [24];
  ulong local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong local_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar12 = (ulong *)param_1[4];
  cVar1 = (char)param_1[8];
  if (((ulong)puVar12 & 0xff) == 4 || cVar1 == '\x01') {
    uVar6 = param_1[5];
    uVar5 = param_1[6];
    uVar13 = param_1[7];
    FUN_1005d8f90(puVar12,uVar6,uVar5,uVar13,cVar1);
    uVar14 = uVar6;
    FUN_1005d8f90(puVar12,uVar6,uVar5,uVar13,cVar1);
    thunk_FUN_100937a78();
    FUN_1005d8534();
    if (((uVar14 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
LAB_100956750:
      lVar11 = *(long *)(unaff_x20 + 0x160);
      _swift_beginAccess(lVar11 + 0x20,auStack_d8,0,0);
      uVar14 = *(ulong *)(lVar11 + 0x58);
      uStack_f0 = (undefined1)uVar5;
      uStack_ef = (undefined7)(uVar5 >> 8);
      uStack_e8 = (undefined1)uVar13;
      uStack_e7 = (undefined7)(uVar13 >> 8);
      lStack_110 = param_2;
      puStack_100 = puVar12;
      local_f8 = uVar6;
      local_e0 = cVar1;
      lStack_a8 = param_2;
      puStack_98 = puVar12;
      uStack_90 = uVar6;
      uStack_88 = uStack_f0;
      if (((uVar14 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        FUN_1005d8fac(puVar12,uVar6,uVar5,uVar13,cVar1);
        local_118 = (undefined4)param_1[3];
        uStack_114 = *(undefined2 *)((long)param_1 + 0x1c);
        uStack_112 = *(undefined1 *)((long)param_1 + 0x1e);
        local_108 = *param_1;
        uVar6 = param_1[1];
        uStack_120 = param_1[2];
        uStack_7f = CONCAT17(cVar1,uStack_e7);
        local_87 = uStack_ef;
        uStack_80 = uStack_e8;
        uStack_b0 = CONCAT17(uStack_111,(int7)param_1[3]);
        local_128 = uVar6;
        local_c0 = uVar6;
        uStack_b8 = uStack_120;
        local_a0 = local_108;
        _swift_retain(local_108 & 0x3fffffffffffffff);
        _swift_retain(param_2);
        _swift_retain(uVar6);
        uVar6 = 0;
        FUN_10092f280();
        FUN_10095b330(&local_128);
      }
      else {
        _swift_retain(uVar14 & 0x3fffffffffffffff);
        FUN_1005d8fac(puVar12,uVar6,uVar5,uVar13,cVar1);
        uVar6 = *param_1;
        thunk_FUN_1006689fc(uVar6,uVar14);
        if ((uVar6 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100956b48);
          (*pcVar2)();
        }
        uVar6 = param_1[1];
        local_118 = (undefined4)param_1[3];
        uStack_114 = *(undefined2 *)((long)param_1 + 0x1c);
        uStack_112 = *(undefined1 *)((long)param_1 + 0x1e);
        uStack_120 = param_1[2];
        local_108 = 0xf000000000000007;
        uStack_b0 = CONCAT17(uStack_111,(int7)param_1[3]);
        uStack_7f = CONCAT17(cVar1,uStack_e7);
        uStack_80 = uStack_e8;
        local_a0 = 0xf000000000000007;
        local_128 = uVar6;
        local_c0 = uVar6;
        uStack_b8 = uStack_120;
        local_87 = uStack_ef;
        _swift_retain(param_2);
        _swift_retain(uVar6);
        uVar6 = 0;
        FUN_10092f280();
        FUN_10095b330(&local_128);
        FUN_1005d8534(uVar14);
      }
      if ((uVar6 & 1) == 0) {
        lVar11 = *(long *)(unaff_x20 + 0xd8);
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100956b4c);
          (*pcVar2)();
        }
        _swift_retain(lVar11);
        FUN_10062cc8c();
        _swift_release(lVar11);
      }
      return;
    }
    uVar10 = *param_1;
    _swift_retain(uVar10 & 0x3fffffffffffffff);
    uVar3 = uVar10;
    thunk_FUN_1006689fc(uVar10,uVar14);
    if ((uVar3 & 1) != 0) {
      _swift_release(uVar10 & 0x3fffffffffffffff);
      FUN_1005d8534(uVar14);
      goto LAB_100956750;
    }
    FUN_1005d8fac(puVar12,uVar6,uVar5,uVar13,cVar1);
    FUN_1005d8fac(puVar12,uVar6,uVar5,uVar13,cVar1);
    if (param_2 == 0) {
      _swift_release(uVar10 & 0x3fffffffffffffff);
      FUN_1005d8534(uVar14);
      return;
    }
    FUN_10095b364();
    puVar4 = &DAT_100eeb7e8;
    uVar9 = 0;
    _swift_allocError(&DAT_100eeb7e8,puVar12,0,0);
    *puVar12 = uVar10;
    puVar12[1] = uVar14;
    uVar6 = *(ulong *)(param_2 + 0x20);
    lVar11 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    pcVar2 = *(code **)(lVar11 + 0x10);
    _swift_retain(uVar14 & 0x3fffffffffffffff);
    uVar5 = uVar6;
    lVar8 = lVar11;
    (*pcVar2)(uVar6,lVar11);
    if ((uVar5 & 1) == 0) {
      puVar7 = &DAT_100f1b178;
      _swift_allocObject(&DAT_100f1b178,0x20,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      pcVar2 = *(code **)(lVar11 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar4);
      (*pcVar2)(thunk_FUN_1008d678c,puVar7,uVar6,lVar11);
      FUN_1005d8534(uVar14);
      goto LAB_1009569ec;
    }
    puVar7 = puVar4;
    thunk_FUN_1005de8f4(puVar4);
    FUN_1006486f8();
    FUN_1005d8534(uVar14);
  }
  else {
    if (param_2 == 0) {
      return;
    }
    FUN_1008db6c4();
    puVar4 = &DAT_100eeb710;
    uVar9 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar6 = *(ulong *)(param_2 + 0x20);
    lVar11 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar6;
    lVar8 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar7 = &DAT_100f1b1a0;
      _swift_allocObject(&DAT_100f1b1a0,0x20,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      pcVar2 = *(code **)(lVar11 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar4);
      (*pcVar2)(thunk_FUN_1008d678c,puVar7,uVar6,lVar11);
LAB_1009569ec:
      _swift_release(puVar7);
      goto LAB_1009569f4;
    }
    puVar7 = puVar4;
    thunk_FUN_1005de8f4(puVar4);
    FUN_1006486f8();
  }
  FUN_100004550(puVar7,lVar8);
  _swift_bridgeObjectRelease(uVar9);
LAB_1009569f4:
  _swift_errorRelease(puVar4);
  return;
}



/* Address: 0x100956b4c | FUN_100956b4c */

void FUN_100956b4c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 uStack_e9;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uVar1 = param_1;
  uVar4 = param_2;
  thunk_FUN_100937a78();
  FUN_1005d8534();
  if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if (param_4 != 0) {
      FUN_10095b3a4();
      puVar2 = &DAT_100eeb770;
      uVar7 = 0;
      _swift_allocError(&DAT_100eeb770,uVar1,0,0);
      uVar4 = *(ulong *)(param_4 + 0x20);
      lVar8 = *(long *)(param_4 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar4;
      lVar6 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar3 & 1) == 0) {
        puVar5 = &DAT_100f1b1c8;
        _swift_allocObject(&DAT_100f1b1c8,0x20,7);
        *(long *)(puVar5 + 0x10) = param_4;
        *(undefined **)(puVar5 + 0x18) = puVar2;
        pcVar9 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_4);
        _swift_errorRetain(puVar2);
        (*pcVar9)(thunk_FUN_1008d678c,puVar5,uVar4,lVar8);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar2;
        thunk_FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
      _swift_errorRelease(puVar2);
      return;
    }
  }
  else {
    FUN_1005d8534(uVar4);
    uStack_f8 = (undefined4)param_2;
    uStack_f4 = (undefined4)(param_2 >> 0x20);
    local_f0 = (undefined4)param_3;
    local_ec = (undefined2)((ulong)param_3 >> 0x20);
    local_ea = (undefined1)((ulong)param_3 >> 0x30);
    uStack_d8 = 4;
    local_e0 = 0xf000000000000007;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c7 = 0;
    uStack_c0 = 0;
    uStack_bf = 0;
    uStack_b8 = 0;
    uStack_88 = 4;
    local_90 = 0xf000000000000007;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_6f = 0;
    local_77 = 0;
    uStack_70 = 0;
    uStack_a0 = CONCAT17(uStack_e9,(int7)param_3);
    local_100 = param_1;
    local_e8 = param_4;
    local_b0 = param_1;
    uStack_a8 = param_2;
    lStack_98 = param_4;
    _swift_retain(param_4);
    _swift_retain(param_1);
    uVar4 = 0;
    FUN_10092f280();
    FUN_10095b330(&local_100);
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100956d4c);
        (*pcVar9)();
      }
      _swift_retain(lVar8);
      FUN_10062cc8c();
      _swift_release(lVar8);
    }
  }
  return;
}



/* Address: 0x100956d4c | FUN_100956d4c */

bool FUN_100956d4c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x160);
  _swift_beginAccess(lVar1 + 0x20,auStack_38,0,0);
  return *(char *)(lVar1 + 0x40) != '\x01';
}



/* Address: 0x100956d90 | FUN_100956d90 */

void FUN_100956d90(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x160);
  _swift_beginAccess(lVar2 + 0x20,auStack_38,1,0);
  lVar1 = *(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28);
  if (*(long *)(lVar2 + 0x30) < *(long *)(lVar2 + 0x28)) {
    lVar1 = lVar1 + *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
  }
  if (0 < lVar1) {
    *(long *)(lVar2 + 0x38) = lVar1 + -1;
    *(undefined1 *)(lVar2 + 0x40) = 0;
  }
  return;
}



/* Address: 0x100956df0 | FUN_100956df0 */

void FUN_100956df0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x160);
  *(undefined1 *)(lVar1 + 0x88) = 0;
  _swift_beginAccess(lVar1 + 0x20,auStack_38,0x21,0);
  FUN_10092ec70(param_1);
  _swift_endAccess(auStack_38);
  return;
}



/* Address: 0x100956e44 | FUN_100956e44 */

undefined1  [16] FUN_100956e44(void)

{
  code *pcVar1;
  code *extraout_x8;
  uint unaff_w20;
  long unaff_x21;
  undefined1 auVar2 [16];
  
  pcVar1 = FUN_10095a9a8;
  FUN_10092f344(FUN_10095a9a8);
  if (unaff_x21 != 0) {
    pcVar1 = extraout_x8;
  }
  auVar2._8_4_ = unaff_w20 & 0x1ff;
  auVar2._0_8_ = pcVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Address: 0x100956e88 | FUN_100956e88 */

void FUN_100956e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(param_6 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  uVar1 = uVar2;
  _swift_retain(uVar2);
  FUN_100931ca8();
  _swift_release(uVar2);
  FUN_1000f8cac(param_5,auStack_88,&DAT_100fec530,&DAT_100c83d78);
  _swift_retain(param_6);
  FUN_100939ef4(uVar1,param_5,param_6,param_1,param_2,param_3,param_4);
  if (unaff_x21 == 0) {
    _swift_release(param_6);
    FUN_1000fb4c4(param_5,&DAT_100fec530,&DAT_100c83d78);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    _swift_retain(uVar2);
    FUN_100931dcc(uVar1);
    _swift_release(uVar1);
    _swift_release(uVar2);
  }
  else {
    _swift_release(param_6);
    FUN_1000fb4c4(param_5,&DAT_100fec530,&DAT_100c83d78);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    _swift_retain(uVar2);
    FUN_100931dcc(uVar1);
    _swift_release(uVar1);
    _swift_release(uVar2);
  }
  return;
}



/* Address: 0x100956ff0 | FUN_100956ff0 */

void FUN_100956ff0(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + 0x20) + 0x10);
  puVar3 = (undefined8 *)(ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10095709c);
      (*pcVar2)();
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100957094);
      (*pcVar2)();
    }
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100957098);
      (*pcVar2)();
    }
    FUN_10095e548(puVar3,param_1,param_2,0);
  }
  return;
}


