/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a3e1cc | FUN_100a3e1cc */

/* WARNING: Removing unreachable block (ram,0x000100a3e234) */

undefined1  [16] FUN_100a3e1cc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined *local_40 [2];
  
  local_40[0] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  FUN_100a3e2a0(PTR___swiftEmptyArrayStorage_100eae0d8,1,local_40);
  *param_1 = local_40[0];
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = thunk_FUN_100108cb8;
  return auVar1;
}



/* Address: 0x100a3e254 | thunk_FUN_100a3e038 */

void thunk_FUN_100a3e038(void)

{
  FUN_100a3e038();
  return;
}



/* Address: 0x100a3e258 | FUN_100a3e258 */

void FUN_100a3e258(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Address: 0x100a3e278 | FUN_100a3e278 */

void FUN_100a3e278(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  (*param_4)();
  *param_1 = param_2;
  return;
}



/* Address: 0x100a3e2a0 | FUN_100a3e2a0 */

void FUN_100a3e2a0(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  _StringGuts _Var7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 local_100 [16];
  StaticString local_f0;
  __uint64 _Stack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined *local_58;
  
  uVar19 = *(ulong *)(param_1 + 0x10);
  if (uVar19 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    FUN_100a3e6a0(param_1 + 0x20,&local_a8);
    uVar17 = uStack_a0;
    uVar2 = local_a8;
    uStack_d8 = uStack_90;
    local_e0 = local_98;
    uStack_c8 = uStack_80;
    uStack_d0 = local_88;
    uStack_bf = uStack_77;
    local_c7 = uStack_7f;
    uStack_c0 = uStack_78;
    lVar15 = *param_3;
    uVar14 = local_a8;
    uVar6 = uStack_a0;
    FUN_100071370();
    lVar10 = *(long *)(lVar15 + 0x10);
    uVar11 = (ulong)~(uint)uVar6 & 1;
    lVar18 = lVar10 + uVar11;
    if (SCARRY8(lVar10,uVar11)) {
LAB_100a3e5bc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3e5c0);
      (*pcVar3)();
    }
    if (*(long *)(lVar15 + 0x18) < lVar18) {
      FUN_100a40984(lVar18,param_2 & 1);
      uVar14 = uVar2;
      uVar11 = uVar17;
      FUN_100071370();
      if (((uint)uVar6 & 1) != ((uint)uVar11 & 1)) {
LAB_100a3e364:
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3e374);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_100a407d4();
    }
    if ((uVar6 & 1) == 0) {
      lVar10 = *param_3;
      lVar18 = lVar10 + (uVar14 >> 6) * 8;
      *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar14 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar14 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar17;
      puVar12 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar14 * 0x30);
      *(undefined8 *)((long)puVar12 + 0x21) = uStack_bf;
      *(ulong *)((long)puVar12 + 0x19) = CONCAT17(uStack_c0,local_c7);
      puVar12[1] = uStack_d8;
      *puVar12 = local_e0;
      puVar12[3] = CONCAT71(local_c7,uStack_c8);
      puVar12[2] = uStack_d0;
      if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
LAB_100a3e5c0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3e5c4);
        (*pcVar3)();
      }
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      if (uVar19 != 1) {
        lVar18 = param_1 + 0x60;
        uVar14 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3e5c8);
            (*pcVar3)();
          }
          FUN_100a3e6a0(lVar18,&local_a8);
          uVar17 = uStack_a0;
          uVar2 = local_a8;
          uStack_d8 = uStack_90;
          local_e0 = local_98;
          uStack_c8 = uStack_80;
          uStack_d0 = local_88;
          uStack_bf = uStack_77;
          local_c7 = uStack_7f;
          uStack_c0 = uStack_78;
          lVar16 = *param_3;
          uVar6 = local_a8;
          uVar11 = uStack_a0;
          FUN_100071370();
          lVar15 = *(long *)(lVar16 + 0x10);
          uVar13 = (ulong)~(uint)uVar11 & 1;
          lVar10 = lVar15 + uVar13;
          if (SCARRY8(lVar15,uVar13)) goto LAB_100a3e5bc;
          if (*(long *)(lVar16 + 0x18) < lVar10) {
            FUN_100a40984(lVar10,1);
            uVar6 = uVar2;
            uVar13 = uVar17;
            FUN_100071370();
            if (((uint)uVar11 & 1) != ((uint)uVar13 & 1)) goto LAB_100a3e364;
          }
          if ((uVar11 & 1) != 0) goto LAB_100a3e388;
          lVar15 = *param_3;
          lVar10 = lVar15 + (uVar6 >> 6) * 8;
          *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar6 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar6 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar17;
          puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar6 * 0x30);
          *(undefined8 *)((long)puVar12 + 0x21) = uStack_bf;
          *(ulong *)((long)puVar12 + 0x19) = CONCAT17(uStack_c0,local_c7);
          puVar12[1] = uStack_d8;
          *puVar12 = local_e0;
          puVar12[3] = CONCAT71(local_c7,uStack_c8);
          puVar12[2] = uStack_d0;
          if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_100a3e5c0;
          uVar14 = uVar14 + 1;
          *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
          lVar18 = lVar18 + 0x40;
        } while (uVar19 != uVar14);
      }
      _swift_bridgeObjectRelease(param_1);
    }
    else {
LAB_100a3e388:
      puVar9 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      puVar4 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      _swift_allocError(PTR___type_metadata_for_Swift__MergeError_100eacdf0,
                        PTR___protocol_witness_table_for_Swift__MergeError___Swift_Error_in_Swift_100eacdf8
                        ,0,0);
      _swift_willThrow();
      _swift_bridgeObjectRelease(param_1);
      local_58 = puVar4;
      _swift_errorRetain(puVar4);
      pcVar5 = &DAT_100ff64d8;
      FUN_1000f7830(&DAT_100ff64d8,&DAT_100c8fac0);
      _Var7.unknown = (undefined *)&local_58;
      pcVar8 = pcVar5;
      _swift_dynamicCast();
      if (((ulong)pcVar5 & 1) != 0) {
        local_f0.unknown = (undefined *)0x0;
        _Stack_e8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1e,_Var7);
        SVar20.bridgeObject = (void *)0x8000000100da6c70;
        SVar20.str = (char *)0xd00000000000001b;
        SVar23.bridgeObject = puVar9;
        SVar23.str = pcVar8;
        Swift::String::append(SVar20,SVar23);
        pcVar5 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (local_100,&local_f0,PTR___type_metadata_for_Swift_String_100eac208,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar21.bridgeObject = (void *)0xe100000000000000;
        SVar21.str = (char *)0x27;
        SVar24.bridgeObject = puVar9;
        SVar24.str = pcVar5;
        Swift::String::append(SVar21,SVar24);
        SVar22.bridgeObject = (void *)0x2;
        SVar22.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar22,local_f0,_Stack_e8,0xda6c60);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3e674);
        (*pcVar3)();
      }
      FUN_100a3e6f0(&local_e0);
      _swift_bridgeObjectRelease(uVar17);
      _swift_errorRelease(local_58);
    }
  }
  return;
}



/* Address: 0x100a3e674 | FUN_100a3e674 */

undefined ** FUN_100a3e674(void)

{
  return &PTR_PTR_100f2a3f8;
}



/* Address: 0x100a3e680 | FUN_100a3e680 */

undefined1  [16] FUN_100a3e680(void)

{
  return ZEXT816(0x100f2a4b0);
}



/* Address: 0x100a3e690 | FUN_100a3e690 */

undefined1  [16] FUN_100a3e690(void)

{
  return ZEXT816(0x100f2a4d0);
}



/* Address: 0x100a3e6a0 | FUN_100a3e6a0 */

undefined8 FUN_100a3e6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff64d0;
  FUN_1000f7830(&DAT_100ff64d0,&DAT_100c8fab8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a3e6f0 | FUN_100a3e6f0 */

undefined8 FUN_100a3e6f0(undefined8 param_1)

{
  FUN_100a422cc();
  return param_1;
}



/* Address: 0x100a3e724 | FUN_100a3e724 */

/* WARNING: Removing unreachable block (ram,0x000100a3e7ac) */

undefined * FUN_100a3e724(long param_1)

{
  _DictionaryStorage *this;
  undefined *capacity;
  undefined *local_38;
  
  capacity = *(undefined **)(param_1 + 0x10);
  local_38 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff64e0;
    FUN_1000f7830(&DAT_100ff64e0,&DAT_100c8fb20);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    local_38 = capacity;
  }
  FUN_100a3e2a0(param_1,1,&local_38);
  return local_38;
}



/* Address: 0x100a3e7cc | FUN_100a3e7cc */

void FUN_100a3e7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_4 + 0x38);
  pcVar1 = UNRECOVERED_JUMPTABLE;
  FUN_100a40794();
                    /* WARNING: Could not recover jumptable at 0x000100a3e840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,FUN_100a42a80,0,&DAT_100f2ab30,pcVar1,param_3,param_4);
  return;
}



/* Address: 0x100a3e844 | FUN_100a3e844 */

void FUN_100a3e844(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100a3e8e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a3e888 | FUN_100a3e888 */

void FUN_100a3e888(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x68);
  pcVar1 = UNRECOVERED_JUMPTABLE;
  FUN_100a40794();
                    /* WARNING: Could not recover jumptable at 0x000100a3e8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(FUN_100a42a80,0,&DAT_100f2ab30,pcVar1,param_1,param_2);
  return;
}



/* Address: 0x100a3e8e8 | FUN_100a3e8e8 */

void FUN_100a3e8e8(long *param_1)

{
  code *pcVar1;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_38 = 0;
  local_30 = 0;
  _clock_gettime(0,&local_38);
  if (local_38 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3e968);
    (*pcVar1)();
  }
  if (-1 < local_30) {
    *param_1 = local_30 + local_38 * 1000000000;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3e96c);
  (*pcVar1)();
}



/* Address: 0x100a3e970 | FUN_100a3e970 */

void FUN_100a3e970(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = param_3;
  (**(code **)(param_4 + 8))(param_3,param_4);
  pcVar2 = *(code **)(param_4 + 0x60);
  _swift_bridgeObjectRetain(param_2);
  (*pcVar2)(uVar1,param_2,param_3,param_4);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100a3e9f8 | FUN_100a3e9f8 */

/* WARNING: Removing unreachable block (ram,0x000100a3ea98) */

void FUN_100a3e9f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100a3e2a0(PTR___swiftEmptyArrayStorage_100eae0d8,1,&local_48);
  puVar1 = local_48;
  pcVar3 = *(code **)(param_3 + 0x38);
  FUN_100a40794();
  (*pcVar3)(param_1,puVar1,FUN_100a42a80,0,&DAT_100f2ab30,puVar2,param_2,param_3);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100a3eab8 | FUN_100a3eab8 */

void FUN_100a3eab8(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_48;
  
  uVar1 = param_3;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  local_48 = uVar1;
  (*param_1)(&local_48);
                    /* WARNING: Could not recover jumptable at 0x000100a3eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x48))(local_48,param_3,param_4);
  return;
}



/* Address: 0x100a3eb2c | FUN_100a3eb2c */

ulong FUN_100a3eb2c(void)

{
  ulong in_x3;
  
  return in_x3 / 1000000;
}



/* Address: 0x100a3eb48 | FUN_100a3eb48 */

undefined8
FUN_100a3eb48(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(param_7 + 0x18))(param_6,param_7);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_6);
  return param_1;
}



/* Address: 0x100a3ebf0 | FUN_100a3ebf0 */

undefined8 FUN_100a3ebf0(undefined8 param_1)

{
  code *pcVar1;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_48 = 0;
  local_40 = 0;
  _clock_gettime(0,&local_48);
  if (local_48 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3ec88);
    (*pcVar1)();
  }
  if (-1 < local_40) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3ec8c);
  (*pcVar1)();
}



/* Address: 0x100a3ec90 | FUN_100a3ec90 */

uint FUN_100a3ec90(_StringGuts param_1,_StringGuts param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  
  if (((param_1.unknown != param_5) || (param_2.unknown != param_6)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_5), !bVar1)) {
    return 0;
  }
  FUN_100a3fcb4(param_3,param_7);
  return (uint)param_3 & (uint)(param_4 == param_8);
}



/* Address: 0x100a3ed04 | FUN_100a3ed04 */

uint FUN_100a3ed04(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = param_1[2];
  lVar5 = param_1[3];
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar3)) {
    return 0;
  }
  FUN_100a3fcb4(uVar4,lVar1);
  return (uint)uVar4 & (uint)(lVar5 == lVar2);
}



/* Address: 0x100a3ed78 | thunk_FUN_100a416b8 */

void thunk_FUN_100a416b8(void)

{
  FUN_100a416b8();
  return;
}



/* Address: 0x100a3ed7c | thunk_FUN_100a3ed80 */

void thunk_FUN_100a3ed80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100a416b8();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x100a3ed80 | FUN_100a3ed80 */

void FUN_100a3ed80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100a416b8();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x100a3edb0 | FUN_100a3edb0 */

void FUN_100a3edb0(void)

{
  undefined8 *unaff_x20;
  
  FUN_10020c28c(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100a3edb8 | FUN_100a3edb8 */

void FUN_100a3edb8(Hasher param_1)

{
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  return;
}



/* Address: 0x100a3edc0 | FUN_100a3edc0 */

void FUN_100a3edc0(__int64 param_1)

{
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  Swift::String::hash(into,*unaff_x20);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100a3edfc | FUN_100a3edfc */

void FUN_100a3edfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100004520();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x100a3ee28 | FUN_100a3ee28 */

void FUN_100a3ee28(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10020c134(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Address: 0x100a3ee3c | FUN_100a3ee3c */

void FUN_100a3ee3c(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 8))();
  return;
}



/* Address: 0x100a3ee60 | FUN_100a3ee60 */

void FUN_100a3ee60(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_140;
  undefined4 uStack_13c;
  char local_118;
  undefined1 auStack_110 [32];
  long local_f0;
  undefined1 local_e8;
  long local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_af;
  char cStack_a8;
  long local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_78;
  
  puVar9 = PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28;
  lVar11 = *param_2;
  lVar8 = *(long *)(lVar11 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28);
  lVar12 = *(long *)(lVar8 + -8);
  lVar10 = (long)&local_140 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar8,0x100cca240,&TargetProtocolRequirement_100cca248);
  (**(code **)(lVar2 + 0x10))(lVar10,lVar8,lVar2);
  _swift_getAtKeyPath(&local_a0,lVar10,param_2);
  (**(code **)(lVar12 + 8))(lVar10,lVar8);
  uVar1 = uStack_98;
  lVar2 = local_a0;
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  if ((*(long *)(param_3 + 0x10) == 0) || (uVar6 = uVar1, FUN_100071370(lVar2), (uVar6 & 1) == 0)) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(uVar1);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_87 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    cStack_78 = -1;
  }
  else {
    FUN_100a417a0(*(long *)(param_3 + 0x38) + lVar2 * 0x30,&local_a0);
    uStack_c8 = uStack_98;
    local_d0 = local_a0;
    uStack_c0 = uStack_90;
    cStack_a8 = cStack_78;
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(uVar1);
    FUN_100a417a0(&local_d0,&local_a0);
    FUN_100a3e6f0(&local_d0);
  }
  FUN_1000f8cac(&local_a0,&local_d0,&DAT_100ff64f0,&DAT_100c8fb28);
  if (cStack_a8 == -1) {
LAB_100a3f0e4:
    FUN_1000f8cac(&local_a0,&local_140,&DAT_100ff64f0,&DAT_100c8fb28);
    if (local_118 == -1) {
      FUN_1000fb4c4(&local_a0,&DAT_100ff64f0,&DAT_100c8fb28);
      FUN_1000fb4c4(&local_140,&DAT_100ff64f0,&DAT_100c8fb28);
      puVar9 = *(undefined **)(*(long *)(lVar11 + *(long *)puVar9 + 8) + 0x10);
      pcVar7 = *(code **)(*(long *)(puVar9 + -8) + 0x38);
      uVar5 = 1;
    }
    else {
      FUN_100a3f344(auStack_110);
      FUN_1000fb4c4(&local_a0,&DAT_100ff64f0,&DAT_100c8fb28);
      FUN_100a3e6f0(&local_140);
      FUN_100011080(auStack_110,&local_f0);
      FUN_100011080(&local_f0,&local_140);
      puVar9 = *(undefined **)(*(long *)(lVar11 + *(long *)puVar9 + 8) + 0x10);
      uVar3 = param_1;
      _swift_dynamicCast(param_1,&local_140,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar9,6);
      pcVar7 = *(code **)(*(long *)(puVar9 + -8) + 0x38);
      uVar5 = (uint)uVar3 ^ 1;
    }
  }
  else {
    FUN_1000f8cac(&local_d0,&local_140,&DAT_100ff64f0,&DAT_100c8fb28);
    if (local_118 == '\x01') {
      FUN_1000fb4c4(&local_a0,&DAT_100ff64f0,&DAT_100c8fb28);
      local_f0 = CONCAT44(uStack_13c,local_140);
      puVar9 = *(undefined **)(*(long *)(lVar11 + *(long *)puVar9 + 8) + 0x10);
      puVar4 = PTR___type_metadata_for_Swift_Int64_100eadc00;
      if (puVar9 == PTR___type_metadata_for_Swift_Int_100eac6f8) {
LAB_100a3f1f4:
        puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        local_e8 = 0;
        puVar4 = &DAT_100ff64f8;
        FUN_1000f7830(&DAT_100ff64f8,&DAT_100c8fb30);
        _swift_dynamicCast(param_1,&local_f0,puVar4,puVar9,7);
        pcVar7 = *(code **)(*(long *)(puVar9 + -8) + 0x38);
        uVar5 = 0;
        goto LAB_100a3f240;
      }
    }
    else {
      if (local_118 != '\0') {
        FUN_100a3e6f0(&local_140);
        goto LAB_100a3f0e4;
      }
      FUN_1000fb4c4(&local_a0,&DAT_100ff64f0,&DAT_100c8fb28);
      puVar9 = *(undefined **)(*(long *)(lVar11 + *(long *)puVar9 + 8) + 0x10);
      if (puVar9 == PTR___type_metadata_for_Swift_Int_100eac6f8) {
        local_f0 = (long)local_140;
        goto LAB_100a3f1f4;
      }
      local_f0 = CONCAT44(local_f0._4_4_,local_140);
      puVar4 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    }
    uVar3 = param_1;
    _swift_dynamicCast(param_1,&local_f0,puVar4,puVar9,6);
    pcVar7 = *(code **)(*(long *)(puVar9 + -8) + 0x38);
    uVar5 = (uint)uVar3 ^ 1;
  }
LAB_100a3f240:
  (*pcVar7)(param_1,uVar5,1,puVar9);
  FUN_1000fb4c4(&local_d0,&DAT_100ff64f0,&DAT_100c8fb28);
  return;
}



/* Address: 0x100a3f27c | FUN_100a3f27c */

void FUN_100a3f27c(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_4);
    FUN_100071370(param_2);
    if ((param_3 & 1) != 0) {
      FUN_100a417a0(*(long *)(param_4 + 0x38) + param_2 * 0x30,&local_60);
      _swift_bridgeObjectRelease(param_4);
      param_1[3] = &DAT_100f2a720;
      param_1[4] = &PTR_PTR_100f2a530;
      puVar1 = &DAT_100f2a518;
      _swift_allocObject(&DAT_100f2a518,0x39,7);
      *param_1 = puVar1;
      *(undefined8 *)(puVar1 + 0x18) = uStack_58;
      *(undefined8 *)(puVar1 + 0x10) = local_60;
      *(ulong *)(puVar1 + 0x28) = CONCAT71(local_47,uStack_48);
      *(undefined8 *)(puVar1 + 0x20) = uStack_50;
      *(undefined8 *)(puVar1 + 0x31) = uStack_3f;
      *(ulong *)(puVar1 + 0x29) = CONCAT17(uStack_40,local_47);
      return;
    }
    _swift_bridgeObjectRelease(param_4);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100a3f344 | FUN_100a3f344 */

void FUN_100a3f344(ivar_list_t param_1,ivar_list_t param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,StaticString param_6,__uint64 param_7,__uint32 param_8)

{
  code *pcVar1;
  undefined7 extraout_var;
  char *pcVar2;
  undefined7 extraout_var_00;
  ivar_list_t *piVar3;
  ivar_list_t iVar4;
  undefined **ppuVar5;
  method_list_t mVar6;
  byte *pbVar7;
  ivar_list_t unaff_x20;
  ivar_list_t unaff_x21;
  Implementation unaff_x22;
  ivar_list_t unaff_x23;
  ivar_list_t unaff_x24;
  long unaff_x25;
  qword in_register_00005008;
  String SVar8;
  undefined4 local_98 [4];
  undefined1 auStack_88 [8];
  ivar_list_t iStack_80;
  ivar_list_t iStack_78;
  ivar_list_t local_70;
  qword qStack_68;
  ivar_list_t local_60;
  qword qStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  byte local_38;
  
  piVar3 = &local_60;
  pcVar2 = (char *)unaff_x20;
  FUN_100a417a0();
  ppuVar5._1_7_ = 0;
  ppuVar5._0_1_ = local_38;
  pbVar7 = &switchD_100a3f380::switchdataD_100c8fad0;
  iVar4 = (ivar_list_t)pcVar2;
  switch(local_38) {
  default:
    ppuVar5 = (undefined **)((ulong)local_60 & 0xffffffff);
  case 0x27:
  case 0x90:
  case 0x9e:
  case 0xde:
    pbVar7 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    goto switchD_100a3f380_caseD_86;
  case 1:
    ppuVar5 = (undefined **)local_60;
  case 0x32:
  case 0x3a:
    pbVar7 = (byte *)&PTR_Swift__JoinedSequence__Iterator_100ead000;
    goto switchD_100a3f380_caseD_45;
  case 2:
  case 0x42:
    unaff_x20 = local_60;
  case 0x2f:
    pcVar2 = (char *)&objc::class_t::_TtC11CoreMetrics23MultiplexMetricsHandler.vtable;
    goto switchD_100a3f380_caseD_37;
  case 3:
  case 0x3b:
    pcVar2._0_4_ = 0xff6610;
    pcVar2._4_4_ = 1;
    unaff_x20 = local_60;
  case 0x2d:
  case 0x35:
  case 0x47:
    goto LAB_100a3f458;
  case 4:
    param_2 = local_60;
  case 0x31:
  case 0x38:
    ppuVar5 = &PTR_Swift__UnsafePointer_100eac000;
    goto switchD_100a3f380_caseD_44;
  case 5:
  case 0x14:
  case 0x3e:
    unaff_x20 = local_60;
  case 0x46:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0xc1:
  case 0xc9:
  case 0xd1:
    pcVar2 = &DAT_100ff6608;
    goto LAB_100a3f458;
  case 6:
  case 0x48:
    *(undefined **)((long)param_1 + 0x18) = PTR___type_metadata_for_Swift_Bool_100eac570;
    *(undefined1 *)param_1 = (undefined1)local_60.entsize;
    break;
  case 7:
    pcVar2 = (char *)&objc::class_t::_TtC11CoreMetrics23MultiplexMetricsHandler.vtable;
    unaff_x20 = local_60;
  case 0x2e:
    pcVar2 = (char *)((long)pcVar2 + 0x600);
    goto switchD_100a3f380_caseD_39;
  case 8:
    *(undefined **)((long)param_1 + 0x18) = PTR___type_metadata_for_Swift_String_100eac208;
    *(ivar_list_t *)param_1 = local_60;
    *(qword *)((long)param_1 + 8) = qStack_58;
    break;
  case 9:
  case 0x3d:
    unaff_x20 = local_60;
  case 0x49:
    pcVar2 = &DAT_100ff65f8;
    goto switchD_100a3f380_caseD_2b;
  case 10:
  case 0xa6:
  case 0xe6:
    FUN_100076508();
    FUN_100004640(auStack_88,local_70);
    unaff_x20 = local_70;
    goto switchD_100a3f380_caseD_24;
  case 0xb:
    unaff_x20 = local_60;
  case 0x5c:
  case 0x74:
    pcVar2 = (char *)&objc::class_t::_TtC11CoreMetrics23MultiplexMetricsHandler.vtable;
    goto switchD_100a3f380_caseD_2c;
  case 0xc:
    local_98[0] = 0;
    pcVar2 = "Fatal error";
    param_8 = 0xdb8420;
    param_7 = 0x8000000100db8450;
    piVar3 = (ivar_list_t *)0xb;
    param_5 = (void *)0x2;
    param_6.unknown = (undefined *)0xd000000000000041;
  case 0xe4:
    SVar8.bridgeObject = param_5;
    SVar8.str = (char *)piVar3;
    Swift::_assertionFailure((StaticString)pcVar2,SVar8,param_6,param_7,param_8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3f540);
    (*pcVar1)();
  case 0x10:
    goto switchD_100a3f380_caseD_10;
  case 0x12:
    FUN_1000f8cac();
    param_1 = (ivar_list_t)pcVar2;
    unaff_x23 = iStack_80;
    unaff_x24 = iStack_78;
    if (iStack_80 == (ivar_list_t)0x0) goto switchD_100a3f380_caseD_50;
  case 0x98:
    FUN_100004640(local_98,unaff_x23);
    pbVar7 = *(byte **)((long)unaff_x24 + 8);
    ppuVar5 = (undefined **)&local_70;
switchD_100a3f380_caseD_a5:
    (*(code *)pbVar7)(ppuVar5,unaff_x23,unaff_x24);
switchD_100a3f380_caseD_1a:
    FUN_100004594(local_98);
switchD_100a3f380_caseD_68:
switchD_100a3f380_caseD_70:
    FUN_100a3fecc();
switchD_100a3f380_caseD_18:
    FUN_1000fb4c4(param_1);
    return;
  case 0x16:
    goto switchD_100a3f380_caseD_16;
  case 0x18:
  case 0xd8:
    goto switchD_100a3f380_caseD_18;
  case 0x1a:
  case 0x85:
  case 0xad:
  case 0xed:
    goto switchD_100a3f380_caseD_1a;
  case 0x1c:
    goto switchD_100a3f380_caseD_1c;
  case 0x1e:
    FUN_100a418e4();
    unaff_x21 = (ivar_list_t)pcVar2;
  case 0x84:
    _swift_release();
switchD_100a3f380_caseD_c0:
    pcVar2._0_1_ = Swift::Optional::typeMetadataAccessor();
    pcVar2._1_7_ = extraout_var;
switchD_100a3f380_caseD_10:
                    /* WARNING: Could not recover jumptable at 0x000100a3f5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(objc_property_list **)((long)pcVar2 + -8))[1])(unaff_x21,pcVar2);
    return;
  case 0x20:
    pcVar2 = _malloc((size_t)pcVar2);
    *(char **)unaff_x24 = pcVar2;
    unaff_x23 = (ivar_list_t)pcVar2;
  case 0x9a:
    *(ivar_list_t *)((long)pcVar2 + 0x10) = param_1;
    *(ivar_list_t *)((long)pcVar2 + 0x18) = unaff_x20;
switchD_100a3f380_caseD_da:
    *(Implementation *)pcVar2 = unaff_x22;
    *(ivar_list_t *)((long)pcVar2 + 8) = unaff_x21;
    pcVar2._0_1_ = Swift::Optional::typeMetadataAccessor();
    pcVar2._1_7_ = extraout_var_00;
switchD_100a3f380_caseD_1c:
    *(char **)((long)unaff_x23 + 0x20) = pcVar2;
    mVar6 = *(method_list_t *)((long)pcVar2 + -8);
    *(method_list_t *)((long)unaff_x23 + 0x28) = mVar6;
    unaff_x24 = *(ivar_list_t *)((long)mVar6 + 0x40);
    if (unaff_x25 == 0) {
      piVar3 = _malloc((size_t)unaff_x24);
      *(ivar_list_t **)((long)unaff_x23 + 0x30) = piVar3;
      iVar4 = (ivar_list_t)_malloc((size_t)unaff_x24);
    }
    else {
      pcVar2 = (char *)unaff_x24;
      _swift_coroFrameAlloc(unaff_x24,0xbe65);
switchD_100a3f380_caseD_fc:
      iVar4 = unaff_x24;
      *(char **)((long)unaff_x23 + 0x30) = pcVar2;
      _swift_coroFrameAlloc(iVar4,0xbe65);
switchD_100a3f380_caseD_99:
    }
    *(ivar_list_t *)((long)unaff_x23 + 0x38) = iVar4;
    ppuVar5 = (undefined **)iVar4;
switchD_100a3f380_caseD_e8:
    FUN_100a3ee60(ppuVar5);
switchD_100a3f380_caseD_9b:
    return;
  case 0x22:
  case 0x3f:
  case 0x4b:
  case 0x6c:
    goto switchD_100a3f380_caseD_22;
  case 0x24:
    goto switchD_100a3f380_caseD_24;
  case 0x26:
  case 0x36:
    goto switchD_100a3f380_caseD_26;
  case 0x29:
  case 0x43:
  case 0x94:
    goto switchD_100a3f380_caseD_29;
  case 0x2a:
  case 0xa8:
    goto switchD_100a3f380_caseD_2a;
  case 0x2b:
    goto switchD_100a3f380_caseD_2b;
  case 0x2c:
  case 0x52:
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x7a:
  case 0xc2:
  case 0xca:
  case 0xd2:
    goto switchD_100a3f380_caseD_2c;
  case 0x30:
  case 0x4a:
    goto switchD_100a3f380_caseD_30;
  case 0x33:
  case 100:
  case 0xb8:
  case 0xf8:
    goto switchD_100a3f380_caseD_33;
  case 0x37:
    goto switchD_100a3f380_caseD_37;
  case 0x39:
  case 0x41:
    goto switchD_100a3f380_caseD_39;
  case 0x3c:
    break;
  case 0x44:
  case 0x54:
    goto switchD_100a3f380_caseD_44;
  case 0x45:
  case 0xa4:
    goto switchD_100a3f380_caseD_45;
  case 0x50:
switchD_100a3f380_caseD_50:
  case 0xe9:
  case 0xfd:
switchD_100a3f380_caseD_81:
    FUN_1000fb4c4(local_98);
    param_2.entsize = 0;
    param_2.count = 0;
    in_register_00005008 = 0;
switchD_100a3f380_caseD_16:
    local_70 = param_2;
    qStack_68 = in_register_00005008;
    local_60 = param_2;
    qStack_58 = in_register_00005008;
switchD_100a3f380_caseD_58:
    uStack_50 = 0;
    uStack_48 = 0xff;
    goto switchD_100a3f380_caseD_68;
  case 0x58:
  case 0x60:
    goto switchD_100a3f380_caseD_58;
  case 0x68:
    goto switchD_100a3f380_caseD_68;
  case 0x70:
  case 0x78:
    goto switchD_100a3f380_caseD_70;
  case 0x7c:
    goto switchD_100a3f380_caseD_7c;
  case 0x80:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xbe:
  case 0xc6:
  case 0xce:
  case 0xd6:
  case 0xea:
  case 0xfe:
    goto switchD_100a3f380_caseD_80;
  case 0x81:
  case 0x95:
  case 0xa9:
  case 0xbd:
  case 0xc5:
  case 0xcd:
  case 0xd5:
    goto switchD_100a3f380_caseD_81;
  case 0x86:
  case 0x8e:
  case 0xae:
  case 0xb6:
  case 0xee:
  case 0xf6:
    goto switchD_100a3f380_caseD_86;
  case 0x99:
    goto switchD_100a3f380_caseD_99;
  case 0x9b:
  case 0xdb:
    goto switchD_100a3f380_caseD_9b;
  case 0xa5:
  case 0xe5:
    goto switchD_100a3f380_caseD_a5;
  case 0xac:
    goto switchD_100a3f380_caseD_ac;
  case 0xbc:
  case 0xc4:
  case 0xcc:
  case 0xd4:
    goto switchD_100a3f380_caseD_bc;
  case 0xc0:
  case 200:
  case 0xd0:
    goto switchD_100a3f380_caseD_c0;
  case 0xd9:
    goto switchD_100a3f380_caseD_d9;
  case 0xda:
    goto switchD_100a3f380_caseD_da;
  case 0xe8:
    goto switchD_100a3f380_caseD_e8;
  case 0xec:
    goto switchD_100a3f380_caseD_ec;
  case 0xfc:
    goto switchD_100a3f380_caseD_fc;
  }
  return;
switchD_100a3f380_caseD_2c:
  pcVar2 = (char *)((long)pcVar2 + 0x5f0);
switchD_100a3f380_caseD_22:
switchD_100a3f380_caseD_7c:
  goto LAB_100a3f458;
switchD_100a3f380_caseD_2b:
switchD_100a3f380_caseD_26:
  goto LAB_100a3f458;
switchD_100a3f380_caseD_39:
switchD_100a3f380_caseD_80:
  goto LAB_100a3f458;
switchD_100a3f380_caseD_44:
  *(ivar_list_t *)((long)param_1 + 0x18) = *(ivar_list_t *)((long)ppuVar5 + 0x5d0);
  goto switchD_100a3f380_caseD_ec;
switchD_100a3f380_caseD_37:
  pcVar2 = (char *)((long)pcVar2 + 0x618);
  goto switchD_100a3f380_caseD_29;
switchD_100a3f380_caseD_86:
  *(byte **)((long)param_1 + 0x18) = pbVar7;
  goto switchD_100a3f380_caseD_33;
switchD_100a3f380_caseD_24:
  *(ivar_list_t *)((long)param_1 + 0x18) = unaff_x20;
  FUN_10000cbb0(param_1);
  ppuVar5 = *(undefined ***)((long)*(ivar_list_t *)((long)unaff_x20 + -8) + 0x10);
switchD_100a3f380_caseD_ac:
  (*(code *)ppuVar5)();
  FUN_100004594(auStack_88);
  return;
switchD_100a3f380_caseD_ec:
  *(ivar_list_t *)param_1 = param_2;
switchD_100a3f380_caseD_2a:
  return;
switchD_100a3f380_caseD_45:
  *(undefined **)((long)param_1 + 0x18) = *(undefined **)((long)pbVar7 + 0xc00);
switchD_100a3f380_caseD_d9:
  *(undefined ***)param_1 = ppuVar5;
  return;
switchD_100a3f380_caseD_33:
  *(dword *)param_1 = (dword)ppuVar5;
switchD_100a3f380_caseD_bc:
  return;
switchD_100a3f380_caseD_29:
LAB_100a3f458:
  FUN_1000f7830();
switchD_100a3f380_caseD_30:
  *(char **)((long)param_1 + 0x18) = pcVar2;
  *(ivar_list_t *)param_1 = unaff_x20;
  return;
}



/* Address: 0x100a3f540 | switchD_100a3f380::caseD_1e */

void switchD_100a3f380::caseD_1e(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  FUN_100a418e4();
  _swift_release(param_2);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100a3f5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x100a3f5a8 | FUN_100a3f5a8 */

void FUN_100a3f5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  
  FUN_1000f8cac(param_1,auStack_a8,&DAT_100ff6500,&DAT_100c8fb38);
  if (local_90 == 0) {
    FUN_1000fb4c4(auStack_a8,&DAT_100ff6500,&DAT_100c8fb38);
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_60 = 0;
    local_58 = 0xff;
  }
  else {
    FUN_100004640(auStack_a8,local_90);
    (**(code **)(local_88 + 8))(&local_80,local_90,local_88);
    FUN_100004594(auStack_a8);
  }
  FUN_100a3fecc(&local_80,param_2,param_3);
  FUN_1000fb4c4(param_1,&DAT_100ff6500,&DAT_100c8fb38);
  return;
}



/* Address: 0x100a3f69c | FUN_100a3f69c */

undefined1  [16]
FUN_100a3f69c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  Optional OVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  void *pvVar4;
  long lVar5;
  undefined8 unaff_x20;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0xbe65);
  }
  *param_1 = puVar3;
  puVar3[2] = param_4;
  puVar3[3] = unaff_x20;
  *puVar3 = param_2;
  puVar3[1] = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar3[4] = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar3[5] = lVar5;
  pvVar6 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar6);
    puVar3[6] = pvVar4;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar4 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xbe65);
    puVar3[6] = pvVar4;
    _swift_coroFrameAlloc(pvVar6,0xbe65);
  }
  puVar3[7] = pvVar6;
  FUN_100a3ee60(pvVar6,param_2,param_3,param_4);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_100a3f79c;
  return auVar7;
}



/* Address: 0x100a3f79c | FUN_100a3f79c */

void FUN_100a3f79c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[6];
  pvVar5 = (void *)param_1[7];
  uVar2 = param_1[4];
  lVar6 = param_1[5];
  uVar3 = param_1[2];
  uVar4 = *param_1;
  uVar7 = param_1[1];
  if ((param_2 & 1) == 0) {
    _swift_retain(uVar4);
    FUN_100a418e4(pvVar5,uVar4,uVar7,uVar3);
    _swift_release(uVar4);
    pcVar8 = *(code **)(lVar6 + 8);
  }
  else {
    (**(code **)(lVar6 + 0x10))(pvVar1,pvVar5,uVar2);
    _swift_retain(uVar4);
    FUN_100a418e4(pvVar1,uVar4,uVar7,uVar3);
    _swift_release(uVar4);
    pcVar8 = *(code **)(lVar6 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar5,uVar2);
  _free(pvVar5);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x100a3f880 | FUN_100a3f880 */

void FUN_100a3f880(undefined8 param_1)

{
  undefined8 local_40 [5];
  undefined1 local_18;
  
  local_40[0] = 0;
  local_18 = 1;
  _swift_getAtKeyPath(local_40,param_1);
  FUN_100a3e6f0(local_40);
  return;
}



/* Address: 0x100a3f8b8 | thunk_FUN_100a4119c */

void thunk_FUN_100a4119c(void)

{
  FUN_100a4119c();
  return;
}



/* Address: 0x100a3f8bc | FUN_100a3f8bc */

void FUN_100a3f8bc(void)

{
  FUN_100a417a0();
  return;
}



/* Address: 0x100a3f8c8 | FUN_100a3f8c8 */

void FUN_100a3f8c8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    FUN_100a40ea4(0,lVar3,0);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    uVar5 = *(ulong *)(puVar2 + 0x10);
    do {
      uVar6 = *puVar4;
      uVar1 = uVar5 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        FUN_100a40ea4(1 < *(ulong *)(puVar2 + 0x18),uVar1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1;
      *(undefined8 *)(puVar2 + uVar5 * 8 + 0x20) = uVar6;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
      uVar5 = uVar1;
    } while (lVar3 != 0);
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 5) = 3;
  return;
}



/* Address: 0x100a3f99c | FUN_100a3f99c */

void FUN_100a3f99c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a3f9ac | FUN_100a3f9ac */

void FUN_100a3f9ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 3;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a3f9bc | FUN_100a3f9bc */

void FUN_100a3f9bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 5;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a3f9cc | FUN_100a3f9cc */

void FUN_100a3f9cc(long *param_1,long param_2,_StringGuts param_3,undefined8 param_4,void *param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  undefined1 uVar5;
  String SVar6;
  String SVar7;
  
  lVar3 = param_2;
  Swift::__arrayConditionalCast
            (param_2,param_3.unknown,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (lVar3 == 0) {
    lVar3 = param_2;
    Swift::__arrayConditionalCast
              (param_2,param_3.unknown,PTR___type_metadata_for_Swift_Int64_100eadc00);
    if (lVar3 == 0) {
      lVar3 = param_2;
      Swift::__arrayConditionalCast
                (param_2,param_3.unknown,PTR___type_metadata_for_Swift_Double_100eac5d0);
      if (lVar3 == 0) {
        lVar3 = param_2;
        Swift::__arrayConditionalCast
                  (param_2,param_3.unknown,PTR___type_metadata_for_Swift_Bool_100eac570);
        if (lVar3 == 0) {
          lVar3 = param_2;
          Swift::__arrayConditionalCast
                    (param_2,param_3.unknown,PTR___type_metadata_for_Swift_String_100eac208);
          if (lVar3 == 0) {
            pcVar4 = &DAT_100ff6508;
            FUN_1000f7830(&DAT_100ff6508,&DAT_100c8fb40);
            Swift::__arrayConditionalCast();
            if (param_2 == 0) {
              Swift::_StringGuts::grow(0x2a,param_3);
              _swift_bridgeObjectRelease(0xe000000000000000);
              bVar2 = false;
              Swift::Array<undefined>::typeMetadataAccessor();
              SVar6 = Swift::__typeName(bVar2);
              SVar7.bridgeObject = param_5;
              SVar7.str = pcVar4;
              Swift::String::append(SVar6,SVar7);
              _swift_bridgeObjectRelease(SVar6.bridgeObject);
              SVar6.bridgeObject = (void *)0x2;
              SVar6.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000028,
                         0x8000000100db8420,0xdb8420);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3fb64);
              (*pcVar1)();
            }
            uVar5 = 0xb;
          }
          else {
            uVar5 = 9;
            param_2 = lVar3;
          }
        }
        else {
          uVar5 = 7;
          param_2 = lVar3;
        }
      }
      else {
        uVar5 = 5;
        param_2 = lVar3;
      }
    }
    else {
      uVar5 = 3;
      param_2 = lVar3;
    }
  }
  else {
    uVar5 = 2;
    param_2 = lVar3;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return;
}



/* Address: 0x100a3fb64 | FUN_100a3fb64 */

void FUN_100a3fb64(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3f9cc(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100a3fb74 | FUN_100a3fb74 */

void FUN_100a3fb74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 5) = 8;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100a3fb88 | FUN_100a3fb88 */

void FUN_100a3fb88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 8;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a3fb9c | FUN_100a3fb9c */

void FUN_100a3fb9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 5) = 8;
  return;
}



/* Address: 0x100a3fbac | FUN_100a3fbac */

void FUN_100a3fbac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 8;
  return;
}



/* Address: 0x100a3fbc0 | FUN_100a3fbc0 */

void FUN_100a3fbc0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x100a3fbd0 | FUN_100a3fbd0 */

void FUN_100a3fbd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x100a3fbe4 | FUN_100a3fbe4 */

void FUN_100a3fbe4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x100a3fbf8 | FUN_100a3fbf8 */

void FUN_100a3fbf8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



/* Address: 0x100a3fc04 | FUN_100a3fc04 */

void FUN_100a3fc04(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



/* Address: 0x100a3fc14 | FUN_100a3fc14 */

void FUN_100a3fc14(double *param_1,float param_2)

{
  *param_1 = (double)param_2;
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



/* Address: 0x100a3fc28 | FUN_100a3fc28 */

void FUN_100a3fc28(double *param_1)

{
  float *unaff_x20;
  
  *param_1 = (double)*unaff_x20;
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



/* Address: 0x100a3fc40 | FUN_100a3fc40 */

void FUN_100a3fc40(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



/* Address: 0x100a3fc54 | FUN_100a3fc54 */

void FUN_100a3fc54(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



/* Address: 0x100a3fc64 | FUN_100a3fc64 */

void FUN_100a3fc64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 5) = 4;
  return;
}



/* Address: 0x100a3fc78 | FUN_100a3fc78 */

void FUN_100a3fc78(undefined1 *param_1)

{
  undefined1 *unaff_x20;
  
  *param_1 = *unaff_x20;
  param_1[0x28] = 6;
  return;
}



/* Address: 0x100a3fc8c | FUN_100a3fc8c */

void FUN_100a3fc8c(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[0x28] = 6;
  return;
}


