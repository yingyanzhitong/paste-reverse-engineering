/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10016e568 | FUN_10016e568 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016e568(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10016e594 | FUN_10016e594 */

void FUN_10016e594(long param_1)

{
  undefined8 uVar1;
  
  FUN_10016e60c();
  _swift_allocObject();
  uVar1 = 0xd00000000000001c;
  FUN_10016e3b8(0xd00000000000001c,0x8000000100d94c90);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = 0xd000000000000018;
  FUN_10016e3b8(0xd000000000000018,0x8000000100d94cb0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  DAT_101057338 = param_1;
  return;
}



/* Address: 0x10016e60c | FUN_10016e60c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10016e60c(void)

{
  return ZEXT816(0x100fb2a48);
}



/* Address: 0x10016e62c | FUN_10016e62c */

void FUN_10016e62c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000021;
  FUN_10016e3b8(0xd000000000000021,0x8000000100d94c60);
  DAT_100fb2ab8 = uVar1;
  return;
}



/* Address: 0x10016e660 | FUN_10016e660 */

void FUN_10016e660(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  __swift_stdlib_strtod_clocale(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Address: 0x10016e6d8 | FUN_10016e6d8 */

void FUN_10016e6d8(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e6ec | FUN_10016e6ec */

void FUN_10016e6ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 auStack_50 [32];
  
  uStack_68 = param_1[1];
  local_70 = *param_1;
  local_58 = param_1[3];
  uStack_60 = param_1[2];
  if (local_58 == 0) {
    FUN_1000faea8(&local_70);
    FUN_10016fcc4(auStack_50,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000faea8(auStack_50);
  }
  else {
    FUN_100011080(&local_70,auStack_50);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_70 = *unaff_x20;
    FUN_10016fe74(auStack_50,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_70;
  }
  return;
}



/* Address: 0x10016e7a0 | FUN_10016e7a0 */

void FUN_10016e7a0(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e7b4 | FUN_10016e7b4 */

void FUN_10016e7b4(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  UUID UVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    lVar4 = *unaff_x20;
    _swift_bridgeObjectRetain(lVar4);
    lVar2 = param_3;
    FUN_10016f998();
    _swift_bridgeObjectRelease(lVar4);
    if ((param_2 & 1) == 0) {
      UVar3 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010016e920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_3,UVar3.unknown);
      return;
    }
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100170bb0(param_4,param_5);
    }
    lVar5 = *(long *)(lVar4 + 0x30);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    pcVar6 = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
    (*pcVar6)(lVar5 + *(long *)(*(long *)(UVar3.unknown + -8) + 0x48) * lVar2,UVar3.unknown);
    _swift_release(*(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 0x10 + 8));
    FUN_100171f14(lVar2,lVar4);
    (*pcVar6)(param_3,UVar3.unknown);
    *unaff_x20 = lVar4;
  }
  else {
    lVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar2);
    lVar4 = *unaff_x20;
    FUN_100170298(param_1,param_2,param_3,lVar2,param_4,param_5);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_3,UVar3.unknown);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Address: 0x10016e93c | FUN_10016e93c */

void FUN_10016e93c(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e950 | FUN_10016e950 */

void FUN_10016e950(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e964 | FUN_10016e964 */

void FUN_10016e964(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e978 | FUN_10016e978 */

void FUN_10016e978(void)

{
  FUN_10016e7b4();
  return;
}



/* Address: 0x10016e98c | FUN_10016e98c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016e98c(Data param_1,undefined8 param_2,undefined8 param_3)

{
  NSData *pNVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_68 [2];
  undefined8 local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  local_58[0] = 0;
  IVar2 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar1,param_3,local_58);
  if (IVar2 == 0) {
    uVar5 = local_58[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
    local_68[0] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
    puVar3 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    puVar4 = local_68;
    _swift_dynamicCast(puVar4,local_58,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
    if ((int)puVar4 == 0) {
      local_68[0] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_68[0]);
  }
  return;
}



/* Address: 0x10016ead0 | FUN_10016ead0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10016ead0(code *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  char *pcVar3;
  void *pvVar4;
  code *pcVar5;
  Date DVar6;
  URL UVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  NSDate *pNVar11;
  code *pcVar12;
  char *pcVar13;
  code *pcVar14;
  code *pcVar15;
  _StringGuts _Var16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  undefined *extraout_x14;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String separator;
  code *local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char *local_180;
  undefined *local_178;
  long local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  code *local_138;
  code *local_130;
  void *local_128;
  undefined *local_118;
  String local_110;
  undefined *local_f8;
  char *local_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar20 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  puVar21 = (undefined *)((long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = (long)puVar21 - extraout_x12;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar7.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  if ((param_1 == (code *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    return (undefined *)0x0;
  }
  uVar19 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar24 = 0xffffffffffffffff;
  if (((byte)param_1[0x20] & 0x3f) < 6) {
    uVar24 = ~(-1L << (uVar19 & 0x3f));
  }
  uVar24 = uVar24 & *(ulong *)(param_1 + 0x40);
  uVar19 = uVar19 + 0x3f >> 6;
  local_180 = "yyyy-MM-dd\'T\'HH:mm:ss\'Z\'";
  local_178 = puVar21;
  local_170 = lVar20;
  local_168 = extraout_x14;
  local_160 = extraout_x13;
  local_158 = DVar6.unknown;
  local_140 = UVar7.unknown;
  _swift_bridgeObjectRetain_n(param_1,2);
  uStack_188 = 2;
  local_190 = 1;
  lVar20 = 0;
  lVar9 = (lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  local_138 = param_1;
LAB_10016ec44:
  do {
    lVar8 = lVar20;
    if (uVar24 == 0) {
      uVar24 = uVar19;
      if ((long)uVar19 <= lVar20 + 1) {
        uVar24 = lVar20 + 1;
      }
      lVar22 = uVar24 - 1;
      do {
        lVar8 = lVar20 + 1;
        if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f3f4);
          (*pcVar5)();
        }
        if ((long)uVar19 <= lVar8) {
          uVar24 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          pcStack_c8 = (code *)0x0;
          local_d0 = (char *)0x0;
          goto LAB_10016ecc0;
        }
        uVar24 = *(ulong *)(param_1 + 0x40 + lVar8 * 8);
        lVar20 = lVar20 + 1;
      } while (uVar24 == 0);
    }
    lVar22 = lVar8;
    uVar18 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 - 1 & uVar24;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar22 << 6;
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar18 * 0x10);
    local_d0 = (char *)*puVar1;
    pcVar5 = (code *)puVar1[1];
    pcStack_c8 = pcVar5;
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar18 * 0x20,&local_c0);
    _swift_bridgeObjectRetain(pcVar5);
LAB_10016ecc0:
    pcVar5 = pcStack_c8;
    pcVar3 = local_d0;
    pcStack_98 = pcStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    uStack_90 = local_c0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    if (pcStack_c8 == (code *)0x0) {
      _swift_release(param_1);
      return local_138;
    }
    FUN_100011080(&uStack_90,&local_d0);
    uVar18 = 0;
    FUN_10016f67c();
    lVar20 = lVar22;
    if ((uVar18 & 1) != 0) {
      FUN_100004594(&local_d0);
      _swift_bridgeObjectRelease(pcVar5);
      goto LAB_10016ec44;
    }
    FUN_10000cbfc(&local_d0,&local_f0);
    puVar21 = local_140;
    lVar8 = lVar9;
    _swift_dynamicCast(lVar9,&local_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,local_140,6);
    local_150 = lVar23;
    local_148 = lVar9;
    if ((int)lVar8 == 0) {
      FUN_10000cbfc(&local_d0,&local_f0);
      puVar2 = local_158;
      puVar21 = PTR___type_metadata_for_Any_100eae0c0;
      pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
      lVar9 = lVar23;
      puVar10 = local_158;
      _swift_dynamicCast(lVar23,&local_f0,pcVar13,local_158,6);
      pcVar15 = local_138;
      if ((int)lVar9 != 0) {
        local_1a0 = *(code **)(local_170 + 8);
        (*local_1a0)(lVar23,puVar2);
        puVar10 = &_OBJC_CLASS___NSISO8601DateFormatter;
        _objc_allocWithZone();
        local_198 = (code *)objc_stub::init((ID)puVar10);
        FUN_10000cbfc(&local_d0,&local_f0);
        puVar10 = local_178;
        DVar6.unknown = local_178;
        _swift_dynamicCast(local_178,&local_f0,puVar21 + 8,puVar2,7);
        pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar6);
        (*local_1a0)(puVar10,puVar2);
        objc_stub::stringFromDate_((ID)local_198,pNVar11);
        local_110 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        local_f8 = PTR___type_metadata_for_Swift_String_100eac208;
        FUN_100011080(&local_110,&local_f0);
        pcVar15 = local_138;
        pcVar12 = local_138;
        _swift_isUniquelyReferenced_nonNull_native();
        local_110.str = (char *)pcVar15;
        pcVar13 = pcVar3;
        pcVar14 = pcVar5;
        FUN_100071370();
        uVar18 = (ulong)~(uint)pcVar14 & 1;
        lVar23 = *(long *)(pcVar15 + 0x10) + uVar18;
        if (SCARRY8(*(long *)(pcVar15 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f3fc);
          (*pcVar5)();
        }
        if (*(long *)(pcVar15 + 0x18) < lVar23) {
          FUN_100170ddc(lVar23,pcVar12);
          pcVar13 = pcVar3;
          pcVar15 = pcVar5;
          FUN_100071370();
          if (((uint)pcVar14 & 1) != ((uint)pcVar15 & 1)) goto LAB_10016f404;
        }
        else if (((ulong)pcVar12 & 1) == 0) {
          FUN_10017057c();
        }
        lVar9 = local_148;
        local_138 = (code *)local_110.str;
        if (((ulong)pcVar14 & 1) == 0) {
          *(ulong *)(local_110.str + ((ulong)pcVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(local_110.str + ((ulong)pcVar13 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar13 & 0x3f);
          puVar1 = (ulong *)(*(long *)(local_110.str + 0x30) + (long)pcVar13 * 0x10);
          *puVar1 = (ulong)pcVar3;
          puVar1[1] = (ulong)pcVar5;
          FUN_100011080(&local_f0,*(long *)(local_110.str + 0x38) + (long)pcVar13 * 0x20);
          FUN_100004594(&local_d0);
          lVar23 = *(long *)(local_138 + 0x10);
          if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f404);
            (*pcVar5)();
          }
          goto LAB_10016f370;
        }
        lVar23 = *(long *)(local_110.str + 0x38) + (long)pcVar13 * 0x20;
        FUN_100004594(lVar23);
        lVar8 = -0xe0;
        goto LAB_10016f2f0;
      }
      _swift_bridgeObjectRetain(local_138);
      pcVar17 = pcVar3;
      pcVar12 = pcVar5;
      FUN_100071370();
      _Var16.unknown = pcVar12;
      _swift_bridgeObjectRelease(pcVar15);
      if (((ulong)pcVar12 & 1) == 0) {
        pvStack_e8 = (void *)0x0;
        local_f0 = (char *)0x0;
        uStack_d8 = 0;
        uStack_e0 = 0;
      }
      else {
        pcVar12 = pcVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        local_110.str = (char *)pcVar15;
        _Var16.unknown = pcVar15;
        if ((int)pcVar12 == 0) {
          FUN_10017057c();
          _Var16.unknown = local_110.str;
        }
        _swift_bridgeObjectRelease
                  (*(undefined8 *)(*(long *)(_Var16.unknown + 0x30) + (long)pcVar17 * 0x10 + 8));
        FUN_100011080(*(long *)(_Var16.unknown + 0x38) + (long)pcVar17 * 0x20,&local_f0);
        local_138 = (code *)_Var16.unknown;
        FUN_1000d9d9c(pcVar17);
      }
      FUN_1000faea8(&local_f0);
      local_f0 = (char *)0x0;
      pvStack_e8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var16);
      _swift_bridgeObjectRelease(pvStack_e8);
      local_f0 = (char *)0x79747265706f7270;
      pvStack_e8 = (void *)0xea0000000000203a;
      SVar25.bridgeObject = pcVar5;
      SVar25.str = pcVar3;
      SVar29.bridgeObject = puVar10;
      SVar29.str = pcVar13;
      Swift::String::append(SVar25,SVar29);
      _swift_bridgeObjectRelease(pcVar5);
      SVar26.bridgeObject = (void *)((ulong)local_180 | 0x8000000000000000);
      SVar26.str = (char *)0xd000000000000026;
      SVar30.bridgeObject = puVar10;
      SVar30.str = pcVar13;
      Swift::String::append(SVar26,SVar30);
      pvVar4 = pvStack_e8;
      pcVar3 = local_f0;
      if (DAT_101057340 == '\x01') {
        pcVar13 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar17 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(pcVar13 + 0x18) = uStack_188;
        *(undefined8 *)(pcVar13 + 0x10) = local_190;
        local_f0 = (char *)0x676f4874736f505b;
        pvStack_e8 = (void *)0xea0000000000205d;
        SVar27.bridgeObject = pvVar4;
        SVar27.str = pcVar3;
        SVar31.bridgeObject = puVar10;
        SVar31.str = pcVar17;
        Swift::String::append(SVar27,SVar31);
        *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar13 + 0x20) = local_f0;
        *(void **)(pcVar13 + 0x28) = pvStack_e8;
        SVar28.bridgeObject = (void *)0x20;
        SVar28.str = pcVar13;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar28,separator);
        _swift_bridgeObjectRelease(pvVar4);
        _swift_release(pcVar13);
        FUN_100004594(&local_d0);
        lVar23 = local_150;
        lVar9 = local_148;
      }
      else {
        FUN_100004594(&local_d0);
        _swift_bridgeObjectRelease(pvVar4);
        lVar23 = local_150;
        lVar9 = local_148;
      }
    }
    else {
      local_198 = *(code **)(local_160 + 8);
      (*local_198)(lVar9,puVar21);
      FUN_10000cbfc(&local_d0,&local_f0);
      puVar2 = local_168;
      UVar7.unknown = local_168;
      _swift_dynamicCast(local_168,&local_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar21,7);
      SVar25 = Foundation::URL::get_absoluteString(UVar7);
      local_1a0 = (code *)SVar25.str;
      (*local_198)(puVar2,puVar21);
      local_130 = local_1a0;
      local_118 = PTR___type_metadata_for_Swift_String_100eac208;
      local_128 = SVar25.bridgeObject;
      FUN_100011080(&local_130,&local_110);
      pcVar15 = local_138;
      pcVar12 = local_138;
      _swift_isUniquelyReferenced_nonNull_native();
      local_130 = pcVar15;
      pcVar13 = pcVar3;
      pcVar14 = pcVar5;
      FUN_100071370();
      uVar18 = (ulong)~(uint)pcVar14 & 1;
      lVar23 = *(long *)(pcVar15 + 0x10) + uVar18;
      if (SCARRY8(*(long *)(pcVar15 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f3f8);
        (*pcVar5)();
      }
      if (*(long *)(pcVar15 + 0x18) < lVar23) {
        local_138 = (code *)CONCAT44(local_138._4_4_,(uint)pcVar14);
        FUN_100170ddc(lVar23,pcVar12);
        pcVar13 = pcVar3;
        pcVar15 = pcVar5;
        FUN_100071370();
        pcVar14 = (code *)((ulong)local_138 & 0xffffffff);
        if (((uint)local_138 & 1) != ((uint)pcVar15 & 1)) {
LAB_10016f404:
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f414);
          (*pcVar5)();
        }
      }
      else if (((ulong)pcVar12 & 1) == 0) {
        FUN_10017057c();
      }
      lVar9 = local_148;
      local_138 = local_130;
      if (((ulong)pcVar14 & 1) == 0) {
        *(ulong *)(local_130 + ((ulong)pcVar13 >> 6) * 8 + 0x40) =
             *(ulong *)(local_130 + ((ulong)pcVar13 >> 6) * 8 + 0x40) |
             1L << ((ulong)pcVar13 & 0x3f);
        puVar1 = (ulong *)(*(long *)(local_130 + 0x30) + (long)pcVar13 * 0x10);
        *puVar1 = (ulong)pcVar3;
        puVar1[1] = (ulong)pcVar5;
        FUN_100011080(&local_110,*(long *)(local_130 + 0x38) + (long)pcVar13 * 0x20);
        FUN_100004594(&local_d0);
        lVar23 = *(long *)(local_138 + 0x10);
        if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016f400);
          (*pcVar5)();
        }
LAB_10016f370:
        *(long *)(local_138 + 0x10) = lVar23 + 1;
        lVar23 = local_150;
      }
      else {
        lVar23 = *(long *)(local_130 + 0x38) + (long)pcVar13 * 0x20;
        FUN_100004594(lVar23);
        lVar8 = -0x100;
LAB_10016f2f0:
        FUN_100011080(&stack0xfffffffffffffff0 + lVar8,lVar23);
        _swift_bridgeObjectRelease(pcVar5);
        FUN_100004594(&local_d0);
        lVar23 = local_150;
      }
    }
  } while( true );
}



/* Address: 0x10016f414 | FUN_10016f414 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016f414(long param_1,void *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  void *pvVar3;
  NSDictionary *pNVar4;
  Data DVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *extraout_x1;
  _StringGuts _Var9;
  char *pcVar10;
  undefined *puVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  char *local_68;
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10016ead0();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_1 != 0) {
    pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
    local_60 = (char *)0x0;
    DVar5.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar4,param_2,&local_60);
    if (DVar5.unknown == (undefined *)0x0) {
      pcVar6 = local_60;
      _Var9.unknown = extraout_x1;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_60 = (char *)0x0;
      local_58 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x2a,_Var9);
      SVar12.bridgeObject = (void *)0x8000000100d94d00;
      SVar12.str = (char *)0xd000000000000028;
      SVar15.bridgeObject = param_2;
      SVar15.str = (char *)pNVar4;
      Swift::String::append(SVar12,SVar15);
      puVar7 = &DAT_100faf510;
      local_68 = pcVar6;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_68,&local_60,puVar7,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pvVar3 = local_58;
      pcVar2 = local_60;
      if (DAT_101057340 == '\x01') {
        pcVar8 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar10 = (char *)0x7;
        _swift_allocObject();
        pcVar8[0x18] = '\x02';
        pcVar8[0x19] = '\0';
        pcVar8[0x1a] = '\0';
        pcVar8[0x1b] = '\0';
        pcVar8[0x1c] = '\0';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
        pcVar8[0x10] = '\x01';
        pcVar8[0x11] = '\0';
        pcVar8[0x12] = '\0';
        pcVar8[0x13] = '\0';
        pcVar8[0x14] = '\0';
        pcVar8[0x15] = '\0';
        pcVar8[0x16] = '\0';
        pcVar8[0x17] = '\0';
        local_60 = (char *)0x676f4874736f505b;
        local_58 = (void *)0xea0000000000205d;
        SVar13.bridgeObject = pvVar3;
        SVar13.str = pcVar2;
        SVar16.bridgeObject = puVar11;
        SVar16.str = pcVar10;
        Swift::String::append(SVar13,SVar16);
        *(undefined **)(pcVar8 + 0x38) = puVar1;
        *(char **)(pcVar8 + 0x20) = local_60;
        *(void **)(pcVar8 + 0x28) = local_58;
        SVar14.bridgeObject = (void *)0x20;
        SVar14.str = pcVar8;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar14,separator);
        _swift_bridgeObjectRelease(pvVar3);
        _swift_errorRelease(pcVar6);
        _swift_release(pcVar8);
      }
      else {
        _swift_bridgeObjectRelease(local_58);
        _swift_errorRelease(pcVar6);
      }
    }
    else {
      Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10016f67c | FUN_10016f67c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ulong FUN_10016f67c(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined *puVar7;
  NSArray *pNVar8;
  undefined1 auStack_78 [40];
  uint local_50;
  uint uStack_4c;
  undefined8 local_48;
  
  FUN_10000cbfc(param_1,auStack_78);
  puVar7 = PTR___type_metadata_for_Any_100eae0c0;
  puVar2 = &local_50;
  _swift_dynamicCast(puVar2,auStack_78,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,6);
  if ((int)puVar2 != 0) {
    _swift_bridgeObjectRelease(local_48);
    return 1;
  }
  FUN_10000cbfc(param_1,auStack_78);
  puVar2 = &local_50;
  _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6);
  if (((ulong)puVar2 & 1) != 0) {
    return 1;
  }
  FUN_10000cbfc(param_1,auStack_78);
  puVar2 = &local_50;
  _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,PTR___type_metadata_for_Swift_Double_100eac5d0,6);
  if ((int)puVar2 == 0) {
    FUN_10000cbfc(param_1,auStack_78);
    puVar2 = &local_50;
    _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,PTR___type_metadata_for_Swift_Float_100eac620,6)
    ;
    if ((int)puVar2 != 0) {
      uVar1 = (local_50 ^ 0xffffffff) & 0x7f800000;
      goto LAB_10016f77c;
    }
    FUN_10000cbfc(param_1,auStack_78);
    puVar2 = &local_50;
    _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,
                       PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528,6);
    if ((int)puVar2 == 0) {
      FUN_10000cbfc(param_1,&local_50);
      puVar3 = &DAT_100fb2ae8;
      FUN_1000f7830(&DAT_100fb2ae8,&DAT_100c2ffc0);
      puVar4 = auStack_78;
      _swift_dynamicCast(puVar4,&local_50,puVar7 + 8,puVar3,6);
      if ((int)puVar4 != 0) {
        FUN_100004594(auStack_78);
        return 1;
      }
      FUN_10000cbfc(param_1,auStack_78);
      uVar5 = 0;
      FUN_100108da8(0);
      puVar2 = &local_50;
      _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,uVar5,6);
      if ((int)puVar2 == 0) {
        FUN_10000cbfc(param_1,auStack_78);
        puVar3 = &DAT_100fb2af0;
        FUN_1000f7830(&DAT_100fb2af0,&DAT_100c2ffc8);
        puVar2 = &local_50;
        _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,puVar3,6);
        if ((int)puVar2 == 0) {
          FUN_10000cbfc(param_1,auStack_78);
          puVar3 = &DAT_100fb2af8;
          FUN_1000f7830(&DAT_100fb2af8,&DAT_100c2ffd0);
          puVar2 = &local_50;
          _swift_dynamicCast(puVar2,auStack_78,puVar7 + 8,puVar3,6);
          if ((int)puVar2 == 0) {
            puVar7 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            *(undefined8 *)(puVar7 + 0x18) = 2;
            *(undefined8 *)(puVar7 + 0x10) = 1;
            FUN_10000cbfc(param_1,puVar7 + 0x20);
            pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
            _swift_release(puVar7);
            IVar6 = NSJSONSerialization::isValidJSONObject_
                              ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar8);
            return IVar6;
          }
        }
        _swift_bridgeObjectRelease(CONCAT44(uStack_4c,local_50));
        FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
        Swift::__bridgeAnythingToObjectiveC();
        IVar6 = NSJSONSerialization::isValidJSONObject_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,param_1);
        _swift_unknownObjectRelease(param_1);
        return IVar6;
      }
      return 1;
    }
  }
  uVar1 = (uStack_4c ^ 0xffffffff) & 0x7ff00000;
LAB_10016f77c:
  return (ulong)(uVar1 != 0);
}



/* Address: 0x10016f998 | FUN_10016f998 */

void FUN_10016f998(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Foundation::UUID::typeMetadataAccessor();
  FUN_100171ed4(&DAT_100fb2ac8,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_10016fa34(param_1,_Var1);
  return;
}



/* Address: 0x10016f9fc | FUN_10016f9fc */

void FUN_10016f9fc(__uint64 param_1,undefined8 param_2,Hasher param_3)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = Swift::Hasher::_hash(*(__int64 *)(unaff_x20 + 0x28),param_1,param_3);
  FUN_100071554(param_1,_Var1);
  return;
}



/* Address: 0x10016fa34 | FUN_10016fa34 */

undefined1  [16] FUN_10016fa34(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  UUID UVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,UVar2.unknown);
      puVar3 = &DAT_100fb2ad0;
      FUN_100171ed4(&DAT_100fb2ad0,PTR_Foundation__Foundation__UUID_>Swift__Equatable_100ea7520);
      bVar1 = Swift::Equatable::___infix(puVar6,local_68,UVar2.unknown,puVar3);
      uVar8 = (ulong)bVar1;
      (**(code **)(lVar9 + 8))(puVar6,UVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Address: 0x10016fb64 | FUN_10016fb64 */

void FUN_10016fb64(ulong param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 0x28);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  puVar3[4] = param_2[4];
  FUN_100011080(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10016fbdc);
  (*pcVar2)();
}



/* Address: 0x10016fbdc | FUN_10016fbdc */

void FUN_10016fbdc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  UUID UVar3;
  long lVar4;
  
  lVar4 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (param_1 & 0x3f);
  lVar4 = *(long *)(param_5 + 0x30);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(UVar3.unknown + -8) + 0x48) * param_1,param_2,UVar3.unknown
            );
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10016fc7c);
  (*pcVar2)();
}



/* Address: 0x10016fc7c | FUN_10016fc7c */

void FUN_10016fc7c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10016fcc4);
  (*pcVar3)();
}



/* Address: 0x10016fcc4 | FUN_10016fcc4 */

void FUN_10016fcc4(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10017057c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1000d9d9c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x10016fd94 | FUN_10016fd94 */

undefined8 FUN_10016fd94(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100170a50(&DAT_100fae468,&DAT_100c2de38);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_100172164(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Address: 0x10016fe60 | FUN_10016fe60 */

void FUN_10016fe60(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x10016fe74 | FUN_10016fe74 */

void FUN_10016fe74(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10016ff54);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100170ddc(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10016ff14);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10017057c();
    lVar4 = *unaff_x20;
    goto joined_r0x00010016ff68;
  }
  lVar4 = *unaff_x20;
joined_r0x00010016ff68:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x10016ff98 | FUN_10016ff98 */

void FUN_10016ff98(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x10016ffac | FUN_10016ffac */

void FUN_10016ffac(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x10016ffc0 | FUN_10016ffc0 */

void FUN_10016ffc0(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x10016ffd4 | FUN_10016ffd4 */

void FUN_10016ffd4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [40];
  
  lVar6 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1000f1290(param_2);
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001700a8);
    (*pcVar1)();
  }
  if (*(long *)(lVar6 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    FUN_100171984(lVar7);
    uVar2 = param_2;
    FUN_1000f1290(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100170068);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1001708ac();
    lVar7 = *unaff_x20;
    goto joined_r0x0001001700bc;
  }
  lVar7 = *unaff_x20;
joined_r0x0001001700bc:
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar7);
    FUN_100011080(param_1,lVar7);
    return;
  }
  FUN_1000f1c9c(param_2,auStack_68);
  FUN_10016fb64(uVar2,auStack_68,param_1,lVar7);
  return;
}



/* Address: 0x1001700fc | FUN_1001700fc */

void FUN_1001700fc(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x100170110 | FUN_100170110 */

void FUN_100170110(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001701f8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_100171c40(lVar6,param_4 & 1,&DAT_100fb2ad8,&DAT_100c2ffb0);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_100071370();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001701c0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100170a50(&DAT_100fb2ad8,&DAT_100c2ffb0);
    lVar6 = *unaff_x20;
    goto joined_r0x000100170220;
  }
  lVar6 = *unaff_x20;
joined_r0x000100170220:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100170284);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100170284 | FUN_100170284 */

void FUN_100170284(void)

{
  FUN_100170298();
  return;
}



/* Address: 0x100170298 | FUN_100170298 */

void FUN_100170298(undefined8 param_1,ulong param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  UUID UVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = param_2;
  local_70 = param_5;
  uStack_68 = param_6;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *unaff_x20;
  lVar4 = param_3;
  FUN_10016f998();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar9 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001703b4);
    (*pcVar2)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar9) {
    param_4 = param_4 & 1;
    FUN_100171630(lVar9,param_4,local_70,uStack_68);
    lVar4 = param_3;
    FUN_10016f998();
    if (((uint)uVar6 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100170374);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100170bb0(local_70,uStack_68);
    lVar9 = *unaff_x20;
    goto joined_r0x0001001703cc;
  }
  lVar9 = *unaff_x20;
joined_r0x0001001703cc:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_release(uVar5);
    return;
  }
  (**(code **)(lVar11 + 0x10))(lVar12,param_3,UVar3.unknown);
  FUN_10016fbdc(lVar4,lVar12,param_1,param_2,lVar9);
  return;
}



/* Address: 0x100170420 | FUN_100170420 */

void FUN_100170420(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_100071370();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001704fc);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_100171098(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    FUN_100071370();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001704c4);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_100170720();
    lVar8 = *unaff_x20;
    goto joined_r0x000100170510;
  }
  lVar8 = *unaff_x20;
joined_r0x000100170510:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017057c);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x10017057c | FUN_10017057c */

void FUN_10017057c(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fae488;
  FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001706f8:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100170664;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100170664:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100170720);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1001706f8;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x100170720 | FUN_100170720 */

void FUN_100170720(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fae438;
  FUN_1000f7830(&DAT_100fae438,&DAT_100c2de08);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_1001707fc;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_1001707fc:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100170898);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100170870;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_100170870:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x100170898 | FUN_100170898 */

void FUN_100170898(void)

{
  FUN_100170a50(&DAT_100fae468,&DAT_100c2de38);
  return;
}



/* Address: 0x1001708ac | FUN_1001708ac */

void FUN_1001708ac(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  this = (_DictionaryStorage *)&DAT_100fae440;
  FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar8 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_100170990;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar8 << 6;
        lVar10 = uVar7 * 0x28;
        FUN_1000f1c9c(*(long *)(original + 0x30) + lVar10,&local_88);
        lVar9 = uVar7 * 0x20;
        FUN_10000cbfc(*(long *)(original + 0x38) + lVar9,auStack_a8);
        puVar2 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + lVar10);
        puVar2[4] = local_68;
        puVar2[1] = uStack_80;
        *puVar2 = local_88;
        puVar2[3] = uStack_70;
        puVar2[2] = local_78;
        FUN_100011080(auStack_a8,*(long *)(p_Var4 + 0x38) + lVar9);
        if (uVar5 != 0) break;
LAB_100170990:
        do {
          lVar9 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100170a50);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar9) goto LAB_100170a20;
          uVar5 = *(ulong *)(p_Var1 + lVar9 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar8 = lVar9;
      }
    } while( true );
  }
LAB_100170a20:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x100170a50 | FUN_100170a50 */

void FUN_100170a50(_DictionaryStorage *param_1)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  FUN_1000f7830();
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(param_1,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_100170b1c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar11);
        if (uVar8 != 0) break;
LAB_100170b1c:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100170bb0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_100170b88;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_100170b88:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100170bb0 | FUN_100170bb0 */

void FUN_100170bb0(_DictionaryStorage *param_1,undefined8 param_2)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  code *pcVar3;
  UUID UVar4;
  __RawDictionaryStorage *p_Var5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  __RawDictionaryStorage *original;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_68;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  FUN_1000f7830(param_1,param_2);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(param_1,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100170db4:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var5 != original || p_Var1 + uVar7 * 8 <= p_Var5 + 0x40) {
    _memmove(p_Var5 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar7 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_100170ce4;
  do {
    uVar8 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar8 = LZCOUNT(uVar8) | lVar12 << 6;
      lVar9 = *(long *)(lVar6 + 0x48) * uVar8;
      (**(code **)(lVar6 + 0x10))
                (&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x30) + lVar9,UVar4.unknown);
      lVar10 = uVar8 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar10);
      uVar11 = puVar2[1];
      uVar14 = puVar2[1];
      uVar13 = *puVar2;
      (**(code **)(lVar6 + 0x20))
                (*(long *)(p_Var5 + 0x30) + lVar9,
                 &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar4.unknown
                );
      puVar2 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + lVar10);
      puVar2[1] = uVar14;
      *puVar2 = uVar13;
      _swift_retain(uVar11);
      if (local_68 != 0) break;
LAB_100170ce4:
      do {
        lVar9 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100170ddc);
          (*pcVar3)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          _swift_release(original);
          goto LAB_100170db4;
        }
        local_68 = *(ulong *)(p_Var1 + lVar9 * 8);
        lVar12 = lVar12 + 1;
      } while (local_68 == 0);
      uVar8 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar12 = lVar9;
    }
  } while( true );
}



/* Address: 0x100170ddc | FUN_100170ddc */

void FUN_100170ddc(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fae488;
  FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100171064:
    _swift_release(original);
LAB_10017106c:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100171094);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10017106c;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100171064;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100171098);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x100171098 | FUN_100171098 */

void FUN_100171098(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fae438;
  FUN_1000f7830(&DAT_100fae438,&DAT_100c2de08);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100171318:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100171348);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100171318;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10017134c);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x10017134c | FUN_10017134c */

void FUN_10017134c(undefined8 param_1,undefined8 param_2)

{
  FUN_100171c40(param_1,param_2,&DAT_100fae468,&DAT_100c2de38);
  return;
}



/* Address: 0x100171360 | FUN_100171360 */

void FUN_100171360(undefined8 param_1,undefined8 param_2)

{
  FUN_100171c40(param_1,param_2,&DAT_100fb2ae0,&DAT_100c2ffb8);
  return;
}



/* Address: 0x100171374 | FUN_100171374 */

void FUN_100171374(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fae420;
  FUN_1000f7830(&DAT_100fae420,&DAT_100c2ddf0);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001715fc:
    _swift_release(original);
LAB_100171604:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10017162c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100171604;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001715fc;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar5 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x20);
    if ((param_2 & 1U) == 0) {
      FUN_100108d58(puVar2,&local_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      uStack_78 = puVar2[1];
      local_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100171630);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar4;
    puVar2 = (undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    puVar2[1] = uStack_78;
    *puVar2 = local_80;
    puVar2[3] = uStack_68;
    puVar2[2] = uStack_70;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x100171630 | FUN_100171630 */

void FUN_100171630(long param_1,bool param_2,_DictionaryStorage *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  UUID UVar4;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x20;
  __int64 _Var13;
  undefined1 *puVar14;
  long lVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  ulong uVar17;
  long lVar18;
  undefined8 local_90;
  undefined8 uStack_88;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var13 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var13 = param_1;
  }
  FUN_1000f7830(param_3,param_4);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(param_3,original,_Var13,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100171954:
    _swift_release();
LAB_100171958:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var16 = original + 0x40;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var16;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar18 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100171980);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) == 0) {
            _swift_release();
            goto LAB_100171958;
          }
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100171954;
        }
        uVar17 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar18 = lVar7;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    lVar11 = *(long *)(lVar15 + 0x48);
    lVar7 = *(long *)(original + 0x30) + lVar11 * uVar8;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar15 + 0x10))(puVar14,lVar7,UVar4.unknown);
      puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
      uStack_88 = puVar1[1];
      local_90 = *puVar1;
      _swift_retain(puVar1[1]);
    }
    else {
      (**(code **)(lVar15 + 0x20))(puVar14,lVar7,UVar4.unknown);
      puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
      uStack_88 = puVar1[1];
      local_90 = *puVar1;
    }
    _Var13 = *(__int64 *)(p_Var5 + 0x28);
    FUN_100171ed4(&DAT_100fb2ac8,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
    uVar6 = Swift::Hashable::_rawHashValue(_Var13);
    uVar12 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100171984);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar6 != uVar8) {
          uVar9 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar8 | bVar2);
      } while (*(ulong *)(p_Var5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar8 = ~*(ulong *)(p_Var5 + uVar9 * 8 + 0x40);
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar9 + 0x40) = 1L << (uVar8 & 0x3f) | *(ulong *)(p_Var5 + uVar9 + 0x40);
    (**(code **)(lVar15 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar11 * uVar8,puVar14,UVar4.unknown);
    puVar1 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
    puVar1[1] = uStack_88;
    *puVar1 = local_90;
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar18;
  } while( true );
}



/* Address: 0x100171984 | FUN_100171984 */

void FUN_100171984(long param_1,bool param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  undefined8 *puVar4;
  ulong uVar5;
  AnyHashable AVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var13;
  long lVar14;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fae440;
  FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100171c14:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x40;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100171c3c);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) != 0) {
            uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          _swift_release(original);
          goto LAB_100171c14;
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
    uVar7 = LZCOUNT(uVar7) | lVar14 << 6;
    puVar4 = (undefined8 *)(*(long *)(original + 0x30) + uVar7 * 0x28);
    if ((param_2 & 1U) == 0) {
      FUN_1000f1c9c(puVar4,&local_90);
      AVar6.unknown = auStack_b0;
      FUN_10000cbfc(*(long *)(original + 0x38) + uVar7 * 0x20);
    }
    else {
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      uStack_78 = puVar4[3];
      uStack_80 = puVar4[2];
      local_70 = puVar4[4];
      AVar6.unknown = auStack_b0;
      FUN_100011080(*(long *)(original + 0x38) + uVar7 * 0x20);
    }
    uVar5 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(p_Var3 + 0x28),AVar6);
    uVar11 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar1 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar9 + 1;
        if ((uVar5 == uVar7) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100171c40);
          (*pcVar2)();
        }
        uVar9 = 0;
        if (uVar5 != uVar7) {
          uVar9 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar7 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var3 + uVar9 * 8 + 0x40);
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
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var3 + uVar9 + 0x40);
    puVar4 = (undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar7 * 0x28);
    puVar4[4] = local_70;
    puVar4[1] = uStack_88;
    *puVar4 = local_90;
    puVar4[3] = uStack_78;
    puVar4[2] = uStack_80;
    FUN_100011080(auStack_b0,*(long *)(p_Var3 + 0x38) + uVar7 * 0x20);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar8 = lVar14;
  } while( true );
}



/* Address: 0x100171c40 | FUN_100171c40 */

void FUN_100171c40(long param_1,bool param_2,_DictionaryStorage *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000f7830(param_3,param_4);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(param_3,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100171ea0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100171ed0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100171ea0;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100171ed4);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x100171ed4 | FUN_100171ed4 */

void FUN_100171ed4(long *param_1,long param_2)

{
  UUID UVar1;
  
  if (*param_1 == 0) {
    UVar1 = Foundation::UUID::typeMetadataAccessor();
    _swift_getWitnessTable(param_2,UVar1.unknown);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100171f14 | FUN_100171f14 */

void FUN_100171f14(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  UUID UVar6;
  Bucket BVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  __int64 seed;
  undefined8 uVar14;
  undefined1 auStack_80 [8];
  code *local_78;
  ulong local_70;
  long local_68;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1.offset + 1U & (uVar9 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar9 = ~uVar9;
    BVar7 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = BVar7.offset + 1U & uVar9;
    lVar11 = *(long *)(lVar13 + 0x48);
    local_78 = *(code **)(lVar13 + 0x10);
    local_68 = lVar13;
    do {
      lVar13 = lVar11 * uVar12;
      (*local_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                  *(long *)(param_2 + 0x30) + lVar13,UVar6.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_100171ed4(&DAT_100fb2ac8,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
      uVar8 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))
                (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar6.unknown);
      uVar8 = uVar8 & uVar9;
      if (param_1.offset < (long)local_70) {
        if (local_70 <= uVar8 || (long)uVar8 <= param_1.offset) {
LAB_100172080:
          lVar10 = lVar11 * param_1.offset;
          uVar8 = *(long *)(param_2 + 0x30) + lVar10;
          lVar2 = *(long *)(param_2 + 0x30) + lVar13;
          if ((lVar10 < lVar13) || ((ulong)(lVar2 + lVar11) <= uVar8)) {
            _swift_arrayInitWithTakeFrontToBack(uVar8,lVar2,1,UVar6.unknown);
          }
          else if (lVar10 - lVar13 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar8,lVar2,1,UVar6.unknown);
          }
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x10);
          puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 0x10);
          if ((param_1.offset != uVar12) || (puVar4 + 2 <= puVar3)) {
            uVar14 = *puVar4;
            puVar3[1] = puVar4[1];
            *puVar3 = uVar14;
            param_1.offset = uVar12;
          }
        }
      }
      else if (local_70 <= uVar8 && (long)uVar8 <= param_1.offset) goto LAB_100172080;
      uVar12 = uVar12 + 1 & uVar9;
    } while ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar9 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar9) =
       *(ulong *)(_Var1.unknown + uVar9) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100172164);
  (*pcVar5)();
}



/* Address: 0x100172164 | FUN_100172164 */

void FUN_100172164(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar8.offset + 1U & uVar10;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar10;
      if (param_1.offset < (long)uVar12) {
        if (uVar9 < uVar12) {
LAB_100172258:
          if (param_1.offset < (long)uVar9) goto LAB_1001721e0;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar4 + 2 <= puVar3 || param_1.offset != uVar11)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 8);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 8);
        if (((param_1.offset < (long)uVar11) || (puVar4 + 1 <= puVar3)) ||
           (param_1.offset != uVar11)) {
          *puVar3 = *puVar4;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar9) goto LAB_100172258;
LAB_1001721e0:
      uVar11 = uVar11 + 1 & uVar10;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar10 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar10) =
       *(ulong *)(_Var1.unknown + uVar10) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100172314);
  (*pcVar7)();
}



/* Address: 0x100172314 | thunk_FUN_10016f9fc */

void thunk_FUN_10016f9fc(__uint64 param_1,undefined8 param_2,Hasher param_3)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = Swift::Hasher::_hash(*(__int64 *)(unaff_x20 + 0x28),param_1,param_3);
  FUN_100071554(param_1,_Var1);
  return;
}



/* Address: 0x100172318 | FUN_100172318 */

undefined8 * FUN_100172318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100172344 | FUN_100172344 */

undefined8 * FUN_100172344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100172384 | FUN_100172384 */

undefined8 * FUN_100172384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1001723b4 | FUN_1001723b4 */

undefined1  [16] FUN_1001723b4(void)

{
  return ZEXT816(0x100eb9e08);
}



/* Address: 0x1001723c4 | thunk_FUN_100172318 */

undefined8 * thunk_FUN_100172318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1001723c8 | FUN_1001723c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_1001723c8(void)

{
  char *pcVar1;
  void *pvVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  NSURL *pNVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *extraout_x1;
  _StringGuts _Var10;
  char *pcVar11;
  char **ppcVar12;
  undefined *puVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String separator;
  char *local_68;
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar14 = Foundation::URL::get_path(UVar3);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  IVar5 = NSFileManager::fileExistsAtPath_((ID)UVar3.unknown,pNVar4);
  pcVar7 = (char *)0x0;
  if ((int)IVar5 != 0) {
    UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar3);
    local_60 = (char *)0x0;
    ppcVar12 = &local_60;
    IVar5 = NSFileManager::removeItemAtURL_error_((ID)UVar3.unknown);
    if ((int)IVar5 != 0) {
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
        return local_60;
      }
      goto LAB_10017269c;
    }
    pcVar7 = local_60;
    _Var10.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_60 = (char *)0x0;
    local_58 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x21,_Var10);
    UVar3.unknown = (undefined *)0xd00000000000001c;
    SVar14.bridgeObject = (void *)0x8000000100d94d30;
    SVar14.str = (char *)0xd00000000000001c;
    SVar18.bridgeObject = ppcVar12;
    SVar18.str = (char *)pNVar6;
    Swift::String::append(SVar14,SVar18);
    SVar14 = Foundation::URL::get_path(UVar3);
    SVar19.bridgeObject = ppcVar12;
    SVar19.str = (char *)pNVar6;
    Swift::String::append(SVar14,SVar19);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar15.bridgeObject = (void *)0xe100000000000000;
    SVar15.str = (char *)0x20;
    SVar20.bridgeObject = ppcVar12;
    SVar20.str = (char *)pNVar6;
    Swift::String::append(SVar15,SVar20);
    puVar8 = &DAT_100faf510;
    local_68 = pcVar7;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar13 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_68,&local_60,puVar8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar2 = local_58;
    pcVar1 = local_60;
    if (DAT_101057340 == '\x01') {
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
      _swift_allocObject();
      pcVar9[0x18] = '\x02';
      pcVar9[0x19] = '\0';
      pcVar9[0x1a] = '\0';
      pcVar9[0x1b] = '\0';
      pcVar9[0x1c] = '\0';
      pcVar9[0x1d] = '\0';
      pcVar9[0x1e] = '\0';
      pcVar9[0x1f] = '\0';
      pcVar9[0x10] = '\x01';
      pcVar9[0x11] = '\0';
      pcVar9[0x12] = '\0';
      pcVar9[0x13] = '\0';
      pcVar9[0x14] = '\0';
      pcVar9[0x15] = '\0';
      pcVar9[0x16] = '\0';
      pcVar9[0x17] = '\0';
      local_60 = (char *)0x676f4874736f505b;
      local_58 = (void *)0xea0000000000205d;
      SVar16.bridgeObject = pvVar2;
      SVar16.str = pcVar1;
      SVar21.bridgeObject = puVar13;
      SVar21.str = pcVar11;
      Swift::String::append(SVar16,SVar21);
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar9 + 0x20) = local_60;
      *(void **)(pcVar9 + 0x28) = local_58;
      SVar17.bridgeObject = (void *)0x20;
      SVar17.str = pcVar9;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar17,separator);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar7);
      _swift_release(pcVar9);
      pcVar7 = pcVar9;
    }
    else {
      _swift_bridgeObjectRelease(local_58);
      _swift_errorRelease(pcVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return pcVar7;
  }
LAB_10017269c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001726a0 | FUN_1001726a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_1001726a0(void)

{
  char *pcVar1;
  void *pvVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *extraout_x1;
  _StringGuts _Var9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String separator;
  char *local_68;
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar13 = Foundation::URL::get_path(UVar3);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  IVar5 = NSFileManager::fileExistsAtPath_((ID)UVar3.unknown,pNVar4);
  pcVar6 = (char *)0x0;
  if ((IVar5 & 1) == 0) {
    UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar13 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    local_60 = (char *)0x0;
    puVar11 = &DAT_00000001;
    IVar5 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      ((ID)UVar3.unknown,pNVar4,1,0,&local_60);
    if ((int)IVar5 != 0) {
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
        return local_60;
      }
      goto LAB_10017295c;
    }
    pcVar6 = local_60;
    _Var9.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_60 = (char *)0x0;
    local_58 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x24,_Var9);
    SVar13.bridgeObject = (void *)0x8000000100d94d50;
    SVar13.str = (char *)0xd000000000000022;
    SVar16.bridgeObject = puVar11;
    SVar16.str = (char *)pNVar4;
    Swift::String::append(SVar13,SVar16);
    puVar7 = &DAT_100faf510;
    local_68 = pcVar6;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_68,&local_60,puVar7,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar2 = local_58;
    pcVar1 = local_60;
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar10 = (char *)0x7;
      _swift_allocObject();
      pcVar8[0x18] = '\x02';
      pcVar8[0x19] = '\0';
      pcVar8[0x1a] = '\0';
      pcVar8[0x1b] = '\0';
      pcVar8[0x1c] = '\0';
      pcVar8[0x1d] = '\0';
      pcVar8[0x1e] = '\0';
      pcVar8[0x1f] = '\0';
      pcVar8[0x10] = '\x01';
      pcVar8[0x11] = '\0';
      pcVar8[0x12] = '\0';
      pcVar8[0x13] = '\0';
      pcVar8[0x14] = '\0';
      pcVar8[0x15] = '\0';
      pcVar8[0x16] = '\0';
      pcVar8[0x17] = '\0';
      local_60 = (char *)0x676f4874736f505b;
      local_58 = (void *)0xea0000000000205d;
      SVar14.bridgeObject = pvVar2;
      SVar14.str = pcVar1;
      SVar17.bridgeObject = puVar12;
      SVar17.str = pcVar10;
      Swift::String::append(SVar14,SVar17);
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar8 + 0x20) = local_60;
      *(void **)(pcVar8 + 0x28) = local_58;
      SVar15.bridgeObject = (void *)0x20;
      SVar15.str = pcVar8;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar15,separator);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar6);
      _swift_release(pcVar8);
      pcVar6 = pcVar8;
    }
    else {
      _swift_bridgeObjectRelease(local_58);
      _swift_errorRelease(pcVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return pcVar6;
  }
LAB_10017295c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100172960 | FUN_100172960 */

void FUN_100172960(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_20 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_18 = &DAT_100c300a0;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x58);
  return;
}



/* Address: 0x1001729bc | FUN_1001729bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001729bc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001729e8 | FUN_1001729e8 */

void FUN_1001729e8(void)

{
  FUN_1001729bc();
  _swift_deallocClassInstance();
  return;
}


