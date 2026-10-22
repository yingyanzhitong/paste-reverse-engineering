/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10014c7c8 | FUN_10014c7c8 */

void FUN_10014c7c8(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100fafe90;
  FUN_1000f7830(&DAT_100fafe90,&DAT_100c2e870);
  lVar11 = 0x13;
  Swift::_SetStorage::_allocate(this,0x13);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(s__feature_flag_100fb0b68 + lVar17 * 0x10))->str;
    puVar6 = *(undefined **)(s__feature_flag_100fb0b68 + lVar17 * 0x10 + 8);
    SVar8 = *(String *)(s__feature_flag_100fb0b68 + lVar17 * 0x10);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_10014c830;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10014c948);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_10014c830:
    lVar17 = lVar17 + 1;
    if (lVar17 == 0x13) {
      _swift_arrayDestroy(s__feature_flag_100fb0b68,0x13,
                          PTR___type_metadata_for_Swift_String_100eac208);
      DAT_100fb0b38 = lVar11;
      return;
    }
  } while( true );
}



/* Address: 0x10014c948 | FUN_10014c948 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10014c948(undefined8 ******param_1,undefined8 ******param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  Date DVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 ******ppppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  undefined1 extraout_w1;
  undefined1 uVar14;
  undefined8 extraout_x1;
  undefined1 *puVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *extraout_x13;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined8 *******pppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  long lVar25;
  undefined8 ******ppppppuVar26;
  char *pcVar27;
  undefined8 *******pppppppuVar28;
  byte bVar29;
  undefined1 *puVar30;
  long lVar31;
  ID IVar32;
  String SVar33;
  String SVar34;
  String separator;
  String separator_00;
  undefined1 auStack_230 [8];
  undefined1 *local_228;
  undefined8 ******local_220;
  uint local_214;
  undefined8 ******local_210;
  undefined8 *******local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 *******local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 *******local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined1 auStack_160 [24];
  undefined8 *******local_148;
  undefined8 *******local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 *******local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 *******local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char local_69;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar31 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar31 + 0x40));
  puVar15 = auStack_230 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = _TtC7PostHog10PostHogSDK::remoteConfig;
  puVar30 = puVar15 + (-extraout_x12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig) == 0) {
    return;
  }
  local_69 = '\x01';
  IVar32 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::flagCallReportedLock);
  objc_stub::lock(IVar32);
  FUN_10014e2d0();
  objc_stub::unlock(IVar32);
  if (local_69 != '\x01') {
    return;
  }
  lVar24 = *(long *)(unaff_x20 + lVar25);
  local_228 = puVar15;
  if (lVar24 == 0) {
LAB_10014cb14:
    ppppppuVar22 = (undefined8 ******)0x0;
    ppppppuVar26 = (undefined8 ******)0xe000000000000000;
  }
  else {
    IVar32 = *(ID *)(lVar24 + 0x60);
    _swift_retain(lVar24);
    objc_stub::lock(IVar32);
    ppppppuVar26 = *(undefined8 *******)(lVar24 + 0x140);
    if (ppppppuVar26 == (undefined8 ******)0x0) {
      uVar6 = extraout_x1;
      _swift_retain(lVar24);
      uVar5 = 0x15;
      FUN_10015c2fc();
      uVar17 = *(undefined8 *)(lVar24 + 0x140);
      *(undefined8 *)(lVar24 + 0x138) = uVar5;
      *(undefined8 *)(lVar24 + 0x140) = uVar6;
      _swift_release(lVar24);
      _swift_bridgeObjectRelease(uVar17);
      ppppppuVar26 = *(undefined8 *******)(lVar24 + 0x140);
    }
    ppppppuVar22 = *(undefined8 *******)(lVar24 + 0x138);
    _swift_bridgeObjectRetain(ppppppuVar26);
    objc_stub::unlock(IVar32);
    _swift_release(lVar24);
    if (ppppppuVar26 == (undefined8 ******)0x0) goto LAB_10014cb14;
  }
  lVar24 = *(long *)(unaff_x20 + lVar25);
  local_210 = ppppppuVar22;
  if (lVar24 == 0) {
    local_220 = (undefined8 ******)0x0;
    local_214 = 1;
LAB_10014cc58:
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    IVar32 = *(ID *)(lVar24 + 0x60);
    _swift_retain(lVar24);
    objc_stub::lock(IVar32);
    if (*(char *)(lVar24 + 0x150) == '\x01') {
      uVar14 = extraout_w1;
      _swift_retain(lVar24);
      uVar6 = 0x16;
      FUN_10015b4d0();
      *(undefined8 *)(lVar24 + 0x148) = uVar6;
      *(undefined1 *)(lVar24 + 0x150) = uVar14;
      _swift_release(lVar24);
      local_214 = (uint)(*(char *)(lVar24 + 0x150) == '\x01');
    }
    else {
      local_214 = 0;
    }
    local_220 = *(undefined8 *******)(lVar24 + 0x148);
    objc_stub::unlock(IVar32);
    _swift_release(lVar24);
    lVar24 = *(long *)(unaff_x20 + lVar25);
    if (lVar24 == 0) goto LAB_10014cc58;
    IVar32 = *(ID *)(lVar24 + 0x60);
    _swift_retain(lVar24);
    objc_stub::lock(IVar32);
    puVar10 = &DAT_100c2ef30;
    _swift_getKeyPath();
    puVar7 = puVar10;
    FUN_10012fef0();
    _swift_release(puVar10);
    objc_stub::unlock(IVar32);
    if (puVar7 == (undefined *)0x0) {
      _swift_release(lVar24);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      if (*(long *)(puVar7 + 0x10) != 0) {
        _swift_bridgeObjectRetain(puVar7);
        ppppppuVar22 = param_1;
        ppppppuVar8 = param_2;
        FUN_100071370(param_1);
        if (((ulong)ppppppuVar8 & 1) != 0) {
          FUN_10000cbfc(*(long *)(puVar7 + 0x38) + (long)ppppppuVar22 * 0x20,&local_a0);
          _swift_release(lVar24);
          _swift_bridgeObjectRelease_n(puVar7,2);
          goto LAB_10014ccb0;
        }
        _swift_bridgeObjectRelease(puVar7);
      }
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      _swift_bridgeObjectRelease(puVar7);
      _swift_release(lVar24);
    }
  }
LAB_10014ccb0:
  pppppppuVar11 = (undefined8 *******)&DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_allocObject();
  pppppppuVar11[3] = (undefined8 ******)0x6;
  pppppppuVar11[2] = (undefined8 ******)0x3;
  pppppppuVar11[4] = (undefined8 ******)0x6572757461656624;
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  pppppppuVar11[5] = (undefined8 ******)0xed000067616c665f;
  pppppppuVar11[6] = param_1;
  pppppppuVar11[7] = param_2;
  pppppppuVar11[9] = (undefined8 ******)puVar10;
  pppppppuVar11[10] = (undefined8 ******)0xd000000000000016;
  pppppppuVar11[0xb] = (undefined8 ******)0x8000000100d93090;
  FUN_1000f8cac(param_3,&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_d8 == (undefined *)0x0) {
    puVar10 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(param_2);
    ppppppuVar22 = (undefined8 ******)objc_stub::init((ID)puVar10);
    ppppppuVar8 = (undefined8 ******)0x0;
    FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
    pppppppuVar11[0xf] = ppppppuVar8;
    pppppppuVar11[0xc] = ppppppuVar22;
    if (local_d8 != (undefined *)0x0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
    }
  }
  else {
    FUN_100011080(&local_f0,pppppppuVar11 + 0xc);
    _swift_bridgeObjectRetain(param_2);
  }
  pppppppuVar11[0x10] = (undefined8 ******)0xd000000000000018;
  pppppppuVar11[0x11] = (undefined8 ******)0x8000000100d930b0;
  pppppppuVar11[0x15] = (undefined8 ******)PTR___type_metadata_for_Swift_String_100eac208;
  pppppppuVar11[0x12] = local_210;
  pppppppuVar11[0x13] = ppppppuVar26;
  pppppppuVar21 = pppppppuVar11;
  FUN_1000f8154();
  _swift_setDeallocating(pppppppuVar11);
  puVar10 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(pppppppuVar11 + 4,3,puVar10);
  _swift_deallocClassInstance(pppppppuVar11,0x20,7);
  if ((local_214 & 1) == 0) {
    local_140 = (undefined8 *******)local_220;
    local_128 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    local_a8 = pppppppuVar21;
    FUN_100011080(&local_140,&local_f0);
    pppppppuVar11 = pppppppuVar21;
    _swift_isUniquelyReferenced_nonNull_native(pppppppuVar21);
    local_140 = pppppppuVar21;
    FUN_10016fe74(&local_f0,0xd00000000000001a,0x8000000100d931d0,pppppppuVar11);
    pppppppuVar21 = local_140;
  }
  local_a8 = pppppppuVar21;
  FUN_1000f8cac(&local_a0,&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_d8 == (undefined *)0x0) {
    FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
    bVar29 = 2;
    lVar24 = *(long *)(unaff_x20 + lVar25);
    if (lVar24 == 0) goto LAB_10014d018;
LAB_10014d61c:
    IVar32 = *(ID *)(lVar24 + 0x60);
    _swift_retain(lVar24);
    objc_stub::lock(IVar32);
    FUN_10012fd68(&local_140,lVar24,param_1,param_2);
    objc_stub::unlock(IVar32);
    _swift_release(lVar24);
    if (local_128 == (undefined *)0x0) goto LAB_10014d6e8;
    uStack_c8 = uStack_118;
    local_d0 = local_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    local_b0 = local_100;
    uStack_e8 = uStack_138;
    local_f0 = local_140;
    local_d8 = local_128;
    uStack_e0 = uStack_130;
    FUN_10000cbfc(&local_f0,&local_140);
    uStack_198 = uStack_138;
    local_1a0 = local_140;
    local_188 = local_128;
    uStack_190 = uStack_130;
    if (local_128 == (undefined *)0x0) {
      FUN_1000fb4c4(&local_1a0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_180,0xd000000000000023,0x8000000100d930d0);
      FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_1a0,&local_180);
      pppppppuVar11 = local_a8;
      pppppppuVar21 = local_a8;
      _swift_isUniquelyReferenced_nonNull_native(local_a8);
      local_1a0 = pppppppuVar11;
      FUN_10016fe74(&local_180,0xd000000000000023,0x8000000100d930d0,pppppppuVar21);
      local_a8 = local_1a0;
    }
    FUN_1000f8cac(&local_d0,&local_180,&DAT_100fae668,&DAT_100c2e4a0);
    if (local_168 == (undefined *)0x0) {
      FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_180,&local_140);
      FUN_10000cbfc(&local_140,&local_180);
      uStack_1b8 = uStack_178;
      local_1c0 = local_180;
      local_1a8 = local_168;
      uStack_1b0 = uStack_170;
      if (local_168 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_1c0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_1a0,0xd000000000000022,0x8000000100d93120);
        FUN_1000fb4c4(&local_1a0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_1c0,&local_1a0);
        pppppppuVar11 = local_a8;
        pppppppuVar21 = local_a8;
        _swift_isUniquelyReferenced_nonNull_native(local_a8);
        local_1c0 = pppppppuVar11;
        FUN_10016fe74(&local_1a0,0xd000000000000022,0x8000000100d93120,pppppppuVar21);
        local_a8 = local_1c0;
      }
      FUN_100004594(&local_140);
    }
    local_180 = (undefined8 *******)CONCAT71(local_180._1_7_,local_b0);
    local_168 = PTR___type_metadata_for_Swift_Bool_100eac570;
    FUN_100011080(&local_180,&local_140);
    pppppppuVar11 = local_a8;
    pppppppuVar21 = local_a8;
    _swift_isUniquelyReferenced_nonNull_native(local_a8);
    local_180 = pppppppuVar11;
    FUN_10016fe74(&local_140,0xd000000000000015,0x8000000100d93100,pppppppuVar21);
    local_a8 = local_180;
    FUN_100155964(&local_f0);
    lVar25 = *(long *)(unaff_x20 + lVar25);
    if (lVar25 != 0) goto LAB_10014d708;
LAB_10014d988:
    pppppppuVar11 = local_a8;
    (**(code **)(lVar31 + 0x38))(puVar30,1,1,DVar4.unknown);
LAB_10014d99c:
    lVar25 = 0;
  }
  else {
    puVar10 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    puVar7 = PTR___type_metadata_for_Any_100eae0c0;
    pppppppuVar11 = &local_140;
    _swift_dynamicCast(pppppppuVar11,&local_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
    pppppppuVar28 = local_140;
    if (((ulong)pppppppuVar11 & 1) == 0) {
LAB_10014d60c:
      bVar29 = 2;
    }
    else {
      if (local_140[2] != (undefined8 ******)0x0) {
        _swift_bridgeObjectRetain(local_140);
        lVar24 = 0x6e6f73616572;
        uVar16 = 0;
        FUN_100071370(0x6e6f73616572);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(pppppppuVar28);
        }
        else {
          FUN_10000cbfc(pppppppuVar28[7] + lVar24 * 4,&local_f0);
          _swift_bridgeObjectRelease(pppppppuVar28);
          pppppppuVar11 = &local_140;
          _swift_dynamicCast(pppppppuVar11,&local_f0,puVar7 + 8,puVar10,6);
          pppppppuVar23 = local_140;
          if (((ulong)pppppppuVar11 & 1) != 0) {
            if (local_140[2] == (undefined8 ******)0x0) {
LAB_10014d040:
              uStack_138 = 0;
              local_140 = (undefined8 *******)0x0;
              local_128 = (undefined *)0x0;
              uStack_130 = 0;
            }
            else {
              _swift_bridgeObjectRetain(local_140);
              lVar24 = 0x7470697263736564;
              puVar15 = &DAT_eb000000006e6f69;
              FUN_100071370(0x7470697263736564);
              if (((ulong)puVar15 & 1) == 0) {
                _swift_bridgeObjectRelease(pppppppuVar23);
                goto LAB_10014d040;
              }
              FUN_10000cbfc(pppppppuVar23[7] + lVar24 * 4,&local_140);
              _swift_bridgeObjectRelease(pppppppuVar23);
            }
            _swift_bridgeObjectRelease(pppppppuVar23);
            uStack_178 = uStack_138;
            local_180 = local_140;
            local_168 = local_128;
            uStack_170 = uStack_130;
            if (local_128 == (undefined *)0x0) {
              puVar9 = &_OBJC_CLASS___NSNull;
              _objc_allocWithZone();
              pppppppuVar11 = (undefined8 *******)objc_stub::init((ID)puVar9);
              puVar9 = (undefined *)0x0;
              FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
              local_f0 = pppppppuVar11;
              local_d8 = puVar9;
              if (local_168 != (undefined *)0x0) {
                FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
              }
            }
            else {
              FUN_100011080(&local_180,&local_f0);
            }
            uStack_178 = uStack_e8;
            local_180 = local_f0;
            local_168 = local_d8;
            uStack_170 = uStack_e0;
            if (local_d8 == (undefined *)0x0) {
              FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_10016fcc4(&local_140,0xd000000000000014,0x8000000100d931b0);
              FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
            }
            else {
              FUN_100011080(&local_180,&local_140);
              pppppppuVar11 = pppppppuVar21;
              _swift_isUniquelyReferenced_nonNull_native(pppppppuVar21);
              local_180 = pppppppuVar21;
              FUN_10016fe74(&local_140,0xd000000000000014,0x8000000100d931b0,pppppppuVar11);
              local_a8 = local_180;
            }
          }
        }
      }
      if (pppppppuVar28[2] == (undefined8 ******)0x0) {
LAB_10014d1c4:
        uStack_e8 = 0;
        local_f0 = (undefined8 *******)0x0;
        local_d8 = (undefined *)0x0;
        uStack_e0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pppppppuVar28);
        lVar24 = 0x617461646174656d;
        uVar16 = 0;
        FUN_100071370(0x617461646174656d);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(pppppppuVar28);
          goto LAB_10014d1c4;
        }
        FUN_10000cbfc(pppppppuVar28[7] + lVar24 * 4,&local_f0);
        _swift_bridgeObjectRelease(pppppppuVar28);
      }
      _swift_bridgeObjectRelease(pppppppuVar28);
      if (local_d8 == (undefined *)0x0) {
LAB_10014d5f4:
        FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
        goto LAB_10014d60c;
      }
      pppppppuVar11 = &local_140;
      _swift_dynamicCast(pppppppuVar11,&local_f0,puVar7 + 8,puVar10,6);
      pppppppuVar21 = local_140;
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_10014d60c;
      if (local_140[2] == (undefined8 ******)0x0) {
LAB_10014d244:
        uStack_138 = 0;
        local_140 = (undefined8 *******)0x0;
        local_128 = (undefined *)0x0;
        uStack_130 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_140);
        puVar15 = &SUB_00006469;
        uVar16 = 0;
        FUN_100071370(&SUB_00006469);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(pppppppuVar21);
          goto LAB_10014d244;
        }
        FUN_10000cbfc(pppppppuVar21[7] + (long)puVar15 * 4,&local_140);
        _swift_bridgeObjectRelease(pppppppuVar21);
      }
      uStack_178 = uStack_138;
      local_180 = local_140;
      local_168 = local_128;
      uStack_170 = uStack_130;
      if (local_128 == (undefined *)0x0) {
        puVar10 = &_OBJC_CLASS___NSNull;
        _objc_allocWithZone();
        pppppppuVar11 = (undefined8 *******)objc_stub::init((ID)puVar10);
        puVar10 = (undefined *)0x0;
        FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
        local_f0 = pppppppuVar11;
        local_d8 = puVar10;
        if (local_168 != (undefined *)0x0) {
          FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
        }
      }
      else {
        FUN_100011080(&local_180,&local_f0);
      }
      uStack_178 = uStack_e8;
      local_180 = local_f0;
      local_168 = local_d8;
      uStack_170 = uStack_e0;
      if (local_d8 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_140,0xd000000000000010,0x8000000100d93150);
        FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_180,&local_140);
        pppppppuVar11 = local_a8;
        pppppppuVar28 = local_a8;
        _swift_isUniquelyReferenced_nonNull_native(local_a8);
        local_180 = pppppppuVar11;
        FUN_10016fe74(&local_140,0xd000000000000010,0x8000000100d93150,pppppppuVar28);
        local_a8 = local_180;
      }
      if (pppppppuVar21[2] == (undefined8 ******)0x0) {
LAB_10014d3c4:
        uStack_138 = 0;
        local_140 = (undefined8 *******)0x0;
        local_128 = (undefined *)0x0;
        uStack_130 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pppppppuVar21);
        lVar24 = 0x6e6f6973726576;
        uVar16 = 0;
        FUN_100071370(0x6e6f6973726576);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(pppppppuVar21);
          goto LAB_10014d3c4;
        }
        FUN_10000cbfc(pppppppuVar21[7] + lVar24 * 4,&local_140);
        _swift_bridgeObjectRelease(pppppppuVar21);
      }
      uStack_178 = uStack_138;
      local_180 = local_140;
      local_168 = local_128;
      uStack_170 = uStack_130;
      if (local_128 == (undefined *)0x0) {
        puVar10 = &_OBJC_CLASS___NSNull;
        _objc_allocWithZone();
        pppppppuVar11 = (undefined8 *******)objc_stub::init((ID)puVar10);
        puVar10 = (undefined *)0x0;
        FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
        local_f0 = pppppppuVar11;
        local_d8 = puVar10;
        if (local_168 != (undefined *)0x0) {
          FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
        }
      }
      else {
        FUN_100011080(&local_180,&local_f0);
      }
      uStack_178 = uStack_e8;
      local_180 = local_f0;
      local_168 = local_d8;
      uStack_170 = uStack_e0;
      if (local_d8 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_180,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_140,0xd000000000000015,0x8000000100d93170);
        FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_180,&local_140);
        pppppppuVar11 = local_a8;
        pppppppuVar28 = local_a8;
        _swift_isUniquelyReferenced_nonNull_native(local_a8);
        local_180 = pppppppuVar11;
        FUN_10016fe74(&local_140,0xd000000000000015,0x8000000100d93170,pppppppuVar28);
        local_a8 = local_180;
      }
      if (pppppppuVar21[2] == (undefined8 ******)0x0) {
LAB_10014d554:
        uStack_e8 = 0;
        local_f0 = (undefined8 *******)0x0;
        local_d8 = (undefined *)0x0;
        uStack_e0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pppppppuVar21);
        lVar24 = 0x657078655f736168;
        uVar16 = 0;
        FUN_100071370(0x657078655f736168);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(pppppppuVar21);
          goto LAB_10014d554;
        }
        FUN_10000cbfc(pppppppuVar21[7] + lVar24 * 4,&local_f0);
        _swift_bridgeObjectRelease(pppppppuVar21);
      }
      _swift_bridgeObjectRelease(pppppppuVar21);
      puVar10 = PTR___type_metadata_for_Swift_Bool_100eac570;
      if (local_d8 == (undefined *)0x0) goto LAB_10014d5f4;
      pppppppuVar11 = &local_140;
      _swift_dynamicCast(pppppppuVar11,&local_f0,puVar7 + 8,
                         PTR___type_metadata_for_Swift_Bool_100eac570,6);
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_10014d60c;
      bVar29 = (byte)local_140;
      local_128 = puVar10;
      FUN_100011080(&local_140,&local_f0);
      pppppppuVar11 = local_a8;
      pppppppuVar21 = local_a8;
      _swift_isUniquelyReferenced_nonNull_native(local_a8);
      local_140 = pppppppuVar11;
      FUN_10016fe74(&local_f0,0xd00000000000001c,0x8000000100d93190,pppppppuVar21);
      local_a8 = local_140;
    }
    lVar24 = *(long *)(unaff_x20 + lVar25);
    if (lVar24 != 0) goto LAB_10014d61c;
LAB_10014d018:
    local_100 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    local_140 = (undefined8 *******)0x0;
    local_128 = (undefined *)0x0;
    uStack_130 = 0;
LAB_10014d6e8:
    FUN_1000fb4c4(&local_140,&DAT_100fb0b28,&DAT_100c2ef58);
    lVar25 = *(long *)(unaff_x20 + lVar25);
    if (lVar25 == 0) goto LAB_10014d988;
LAB_10014d708:
    IVar32 = *(ID *)(lVar25 + 0x60);
    _swift_retain(lVar25);
    objc_stub::lock(IVar32);
    bVar2 = *(byte *)(lVar25 + 0x151);
    if (bVar2 == 2) {
      _swift_retain(lVar25);
      uVar14 = 0x17;
      FUN_10015c47c();
      *(undefined1 *)(lVar25 + 0x151) = uVar14;
      _swift_release(lVar25);
      bVar2 = *(byte *)(lVar25 + 0x151);
    }
    objc_stub::unlock(IVar32);
    _swift_release(lVar25);
    pppppppuVar11 = local_a8;
    if (((bVar2 & 1) == 0) || (bVar29 == 2)) goto LAB_10014d988;
    (**(code **)(lVar31 + 0x38))(puVar30,1,1,DVar4.unknown);
    if ((bVar29 & 1) != 0) goto LAB_10014d99c;
    if (DAT_100fb0b30 != -1) {
      _swift_once(&DAT_100fb0b30,FUN_10014c7c8);
    }
    lVar25 = DAT_100fb0b38;
    _swift_bridgeObjectRetain(DAT_100fb0b38);
  }
  IVar32 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar32);
  bVar29 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar32);
  lVar19 = PostHogConfig::optOut;
  lVar24 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar29 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar27 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar27[0x18] = '\x02';
      pcVar27[0x19] = '\0';
      pcVar27[0x1a] = '\0';
      pcVar27[0x1b] = '\0';
      pcVar27[0x1c] = '\0';
      pcVar27[0x1d] = '\0';
      pcVar27[0x1e] = '\0';
      pcVar27[0x1f] = '\0';
      pcVar27[0x10] = '\x01';
      pcVar27[0x11] = '\0';
      pcVar27[0x12] = '\0';
      pcVar27[0x13] = '\0';
      pcVar27[0x14] = '\0';
      pcVar27[0x15] = '\0';
      pcVar27[0x16] = '\0';
      pcVar27[0x17] = '\0';
      pcVar12 = 
      "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
      *(undefined **)(pcVar27 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar6 = 0xd000000000000058;
LAB_10014dad8:
      *(undefined8 *)(pcVar27 + 0x20) = uVar6;
      *(ulong *)(pcVar27 + 0x28) = (ulong)(pcVar12 + -0x20) | 0x8000000000000000;
      SVar33.bridgeObject = (void *)0x20;
      SVar33.str = pcVar27;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar33,separator);
LAB_10014daf4:
      _swift_release(pcVar27);
    }
  }
  else {
    lVar18 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar18 + PostHogConfig::optOut,&local_180,0,0);
    if (*(char *)(lVar18 + lVar19) == '\x01') {
      if (DAT_101057340 == '\x01') {
        pcVar27 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar27[0x18] = '\x02';
        pcVar27[0x19] = '\0';
        pcVar27[0x1a] = '\0';
        pcVar27[0x1b] = '\0';
        pcVar27[0x1c] = '\0';
        pcVar27[0x1d] = '\0';
        pcVar27[0x1e] = '\0';
        pcVar27[0x1f] = '\0';
        pcVar27[0x10] = '\x01';
        pcVar27[0x11] = '\0';
        pcVar27[0x12] = '\0';
        pcVar27[0x13] = '\0';
        pcVar27[0x14] = '\0';
        pcVar27[0x15] = '\0';
        pcVar27[0x16] = '\0';
        pcVar27[0x17] = '\0';
        pcVar12 = "[PostHog] PostHog is in OptOut state.";
        *(undefined **)(pcVar27 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        uVar6 = 0xd000000000000025;
        goto LAB_10014dad8;
      }
    }
    else {
      pcVar27 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
      if (pcVar27 != (char *)0x0) {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000014,(_StringGuts)0x8000000100d91be0,
                           (_StringComparisonResult)0x24);
        lVar19 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
        if (bVar3) {
          lVar18 = *(long *)(lVar18 + PostHogConfig::errorTrackingConfig);
          _swift_beginAccess(lVar18 + _TtC7PostHog26PostHogErrorTrackingConfig::
                                      ignoredExceptionTypes,auStack_160,0,0);
          lVar19 = *(long *)(lVar18 + lVar19);
          lVar18 = *(long *)(lVar19 + 0x10);
          _swift_retain(pcVar27);
          if (lVar18 != 0) {
            _swift_bridgeObjectRetain(lVar19);
            pppppppuVar21 = pppppppuVar11;
            _swift_bridgeObjectRetain();
            FUN_100103b68();
            _swift_bridgeObjectRelease(lVar19);
            _swift_bridgeObjectRelease(pppppppuVar11);
            if (((ulong)pppppppuVar21 & 1) != 0) {
              if (DAT_101057340 == '\x01') {
                pcVar12 = &DAT_100fae660;
                FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
                _swift_allocObject();
                pcVar12[0x18] = '\x02';
                pcVar12[0x19] = '\0';
                pcVar12[0x1a] = '\0';
                pcVar12[0x1b] = '\0';
                pcVar12[0x1c] = '\0';
                pcVar12[0x1d] = '\0';
                pcVar12[0x1e] = '\0';
                pcVar12[0x1f] = '\0';
                pcVar12[0x10] = '\x01';
                pcVar12[0x11] = '\0';
                pcVar12[0x12] = '\0';
                pcVar12[0x13] = '\0';
                pcVar12[0x14] = '\0';
                pcVar12[0x15] = '\0';
                pcVar12[0x16] = '\0';
                pcVar12[0x17] = '\0';
                *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
                pcVar12[0x20] = '\\';
                pcVar12[0x21] = '\0';
                pcVar12[0x22] = '\0';
                pcVar12[0x23] = '\0';
                pcVar12[0x24] = '\0';
                pcVar12[0x25] = '\0';
                pcVar12[0x26] = '\0';
                pcVar12[0x27] = -0x30;
                pcVar12[0x28] = -0x60;
                pcVar12[0x29] = '\x15';
                pcVar12[0x2a] = -0x27;
                pcVar12[0x2b] = '\0';
                pcVar12[0x2c] = '\x01';
                pcVar12[0x2d] = '\0';
                pcVar12[0x2e] = '\0';
                pcVar12[0x2f] = -0x80;
                SVar34.bridgeObject = (void *)0x20;
                SVar34.str = pcVar12;
                separator_00.bridgeObject = (void *)0xa;
                separator_00.str = (char *)0xe100000000000000;
                Swift::_print(SVar34,separator_00);
                _swift_release(pcVar12);
              }
              goto LAB_10014daf4;
            }
          }
        }
        else {
          _swift_retain(pcVar27);
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000014,(_StringGuts)0x8000000100d91be0,
                           (_StringComparisonResult)0x24);
        FUN_1000f8cac(puVar30,extraout_x13,&DAT_100faf508,&DAT_100c2e2e0);
        pcVar20 = *(code **)(lVar31 + 0x30);
        puVar15 = extraout_x13;
        (*pcVar20)(extraout_x13,1,DVar4.unknown);
        if ((int)puVar15 == 1) {
          Foundation::Date::init();
          puVar15 = extraout_x13;
          (*pcVar20)(extraout_x13,1,DVar4.unknown);
          if ((int)puVar15 != 1) {
            puVar15 = extraout_x13;
            FUN_1000fb4c4(extraout_x13,&DAT_100faf508,&DAT_100c2e2e0);
          }
        }
        else {
          puVar15 = local_228;
          (**(code **)(lVar31 + 0x20))(local_228,extraout_x13,DVar4.unknown);
        }
        FUN_10014e7d4();
        lVar19 = PostHogConfig::storageManager;
        if (((ulong)puVar15 & 1) == 0) {
LAB_10014ddcc:
          pppppppuVar23 = (undefined8 *******)0x0;
          pppppppuVar28 = (undefined8 *******)0xe000000000000000;
        }
        else {
          lVar24 = *(long *)(unaff_x20 + lVar24);
          pppppppuVar28 = &local_1c0;
          _swift_beginAccess(lVar24 + PostHogConfig::storageManager,pppppppuVar28,0,0);
          pppppppuVar21 = *(undefined8 ********)(lVar24 + lVar19);
          if (pppppppuVar21 == (undefined8 *******)0x0) goto LAB_10014ddcc;
          pppppppuVar23 = pppppppuVar21;
          _swift_retain();
          FUN_10015cd34();
          _swift_release(pppppppuVar21);
        }
        pppppppuVar21 = pppppppuVar11;
        FUN_10016ead0(pppppppuVar11);
        pppppppuVar13 = pppppppuVar23;
        FUN_10013ec54(pppppppuVar23,pppppppuVar28,pppppppuVar21,0,0,0,(bVar3 ^ 0xffU) & 1,puVar30);
        _swift_bridgeObjectRelease(pppppppuVar21);
        pppppppuVar21 = pppppppuVar13;
        if (lVar25 != 0) {
          local_148 = pppppppuVar13;
          _swift_bridgeObjectRetain(lVar25);
          _swift_bridgeObjectRetain();
          FUN_100155144();
          _swift_bridgeObjectRelease_n(pppppppuVar13,2);
          _swift_bridgeObjectRelease(lVar25);
        }
        local_148 = pppppppuVar21;
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000014,(_StringGuts)0x8000000100d91be0,
                           (_StringComparisonResult)0x24);
        if (bVar3) {
          if (pppppppuVar21[2] != (undefined8 ******)0x0) {
            _swift_bridgeObjectRetain(pppppppuVar21);
            lVar24 = -0x2ffffffffffffff0;
            uVar16 = 0;
            FUN_100071370(0xd000000000000010);
            if ((uVar16 & 1) != 0) {
              FUN_10000cbfc(pppppppuVar21[7] + lVar24 * 4,&local_f0);
              _swift_bridgeObjectRelease(pppppppuVar21);
              FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
              goto LAB_10014dfec;
            }
            _swift_bridgeObjectRelease(pppppppuVar21);
          }
          uStack_e8 = 0;
          local_f0 = (undefined8 *******)0x0;
          local_d8 = (undefined *)0x0;
          uStack_e0 = 0;
          pppppppuVar13 = &local_f0;
          FUN_1000fb4c4(pppppppuVar13,&DAT_100fae668,&DAT_100c2e4a0);
          FUN_100150cd8();
          if (pppppppuVar13 != (undefined8 *******)0x0) {
            puVar10 = &DAT_100fae868;
            FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
            local_140 = pppppppuVar13;
            local_128 = puVar10;
            if (puVar10 == (undefined *)0x0) {
              FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_10016fcc4(&local_f0,0xd000000000000010,0x8000000100d914f0);
              FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
              pppppppuVar21 = local_148;
            }
            else {
              FUN_100011080(&local_140,&local_f0);
              pppppppuVar13 = pppppppuVar21;
              _swift_isUniquelyReferenced_nonNull_native(pppppppuVar21);
              local_140 = pppppppuVar21;
              FUN_10016fe74(&local_f0,0xd000000000000010,0x8000000100d914f0,pppppppuVar13);
              local_148 = local_140;
              pppppppuVar21 = local_140;
            }
          }
        }
LAB_10014dfec:
        puVar15 = local_228;
        lVar24 = -0x2fffffffffffffec;
        FUN_100149464(0xd000000000000014,0x8000000100d91be0,pppppppuVar23,pppppppuVar28,
                      pppppppuVar21,local_228);
        _swift_bridgeObjectRelease(pppppppuVar28);
        if (lVar24 == 0) {
          _swift_release(pcVar27);
          _swift_bridgeObjectRelease(lVar25);
          pcVar20 = *(code **)(lVar31 + 8);
LAB_10014e200:
          (*pcVar20)(puVar15,DVar4.unknown);
          FUN_1000fb4c4(puVar30,&DAT_100faf508,&DAT_100c2e2e0);
          lVar25 = -0x90;
        }
        else {
          puVar1 = (undefined8 *)(lVar24 + PostHogEvent::event);
          _swift_beginAccess(puVar1,&local_140,0,0);
          if ((((undefined *)*puVar1 != (undefined *)0x6f687370616e7324) ||
              ((undefined *)puVar1[1] != (undefined *)0xe900000000000074)) &&
             (bVar3 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar1,(undefined *)puVar1[1],
                                 (_StringComparisonResult)0x24), !bVar3)) {
            FUN_100142640(0,0);
            FUN_100136870(lVar24,FUN_10013662c);
            puVar15 = local_228;
LAB_10014e1c0:
            FUN_1001349c8(lVar24,FUN_10010f72c);
            _swift_release(pcVar27);
            _swift_bridgeObjectRelease(lVar25);
            pcVar20 = *(code **)(lVar31 + 8);
            goto LAB_10014e200;
          }
          lVar19 = PostHogEvent::properties;
          _swift_beginAccess(lVar24 + PostHogEvent::properties,&local_1a0,0,0);
          puVar15 = local_228;
          lVar19 = *(long *)(lVar24 + lVar19);
          if (*(long *)(lVar19 + 0x10) == 0) {
            uStack_e8 = 0;
            local_f0 = (undefined8 *******)0x0;
            local_d8 = (undefined *)0x0;
            uStack_e0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar19);
            lVar18 = 0x6e6f697373657324;
            uVar16 = 0xeb0000000064695f;
            FUN_100071370(0x6e6f697373657324);
            if ((uVar16 & 1) == 0) {
              uStack_e8 = 0;
              local_f0 = (undefined8 *******)0x0;
              local_d8 = (undefined *)0x0;
              uStack_e0 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(lVar19 + 0x38) + lVar18 * 0x20,&local_f0);
            }
            _swift_bridgeObjectRelease(lVar19);
            if (local_d8 != (undefined *)0x0) {
              FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_100142640(0,0);
              lVar19 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
              if (lVar19 != 0) {
                _swift_retain(lVar19);
                FUN_100167d84(lVar24);
                _swift_release(lVar19);
              }
              goto LAB_10014e1c0;
            }
          }
          _swift_release(pcVar27);
          _swift_bridgeObjectRelease(lVar25);
          (**(code **)(lVar31 + 8))(puVar15,DVar4.unknown);
          FUN_1000fb4c4(puVar30,&DAT_100faf508,&DAT_100c2e2e0);
          FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
          lVar25 = -0xe0;
        }
        FUN_1000fb4c4(&stack0xfffffffffffffff0 + lVar25,&DAT_100fae668,&DAT_100c2e4a0);
        _swift_bridgeObjectRelease(pppppppuVar11);
        goto LAB_10014db34;
      }
    }
  }
  _swift_bridgeObjectRelease(lVar25);
  FUN_1000fb4c4(puVar30,&DAT_100faf508,&DAT_100c2e2e0);
  FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
  pppppppuVar21 = pppppppuVar11;
LAB_10014db34:
  _swift_bridgeObjectRelease(pppppppuVar21);
  return;
}



/* Address: 0x10014e2d0 | FUN_10014e2d0 */

void FUN_10014e2d0(long param_1,long param_2,ulong param_3,undefined8 param_4,char *param_5)

{
  _StringGuts _Var1;
  undefined *puVar2;
  long lVar3;
  _StringGuts _Var4;
  code *pcVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  _StringComparisonResult *p_Var9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  _StringComparisonResult local_170;
  undefined7 uStack_16f;
  undefined *puStack_168;
  byte local_160;
  undefined7 uStack_15f;
  _StringGuts _Stack_158;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long local_f8;
  undefined1 auStack_f0 [24];
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = _TtC7PostHog10PostHogSDK::flagCallReported;
  _swift_beginAccess(param_1 + _TtC7PostHog10PostHogSDK::flagCallReported,auStack_88,0,0);
  lVar12 = *(long *)(param_1 + lVar3);
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar14 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _swift_bridgeObjectRetain_n(lVar12,2);
    lVar7 = param_2;
    uVar14 = param_3;
    FUN_100071370();
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((uVar14 & 1) != 0) {
      puVar15 = *(undefined **)(*(long *)(lVar12 + 0x38) + lVar7 * 8);
      _swift_bridgeObjectRetain_n(puVar15,2);
    }
    _swift_bridgeObjectRelease_n(lVar12,2);
    uVar14 = *(ulong *)(puVar15 + 0x10);
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  PTR___type_metadata_for_Swift_String_100eac208 = puVar10;
  if (uVar14 != 0) {
    uVar16 = 0;
    puVar13 = puVar15;
    do {
      puVar2 = PTR___type_metadata_for_Any_100eae0c0;
      puVar13 = puVar13 + 0x20;
      if (*(ulong *)(puVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10014e794);
        (*pcVar5)();
      }
      FUN_1000f8cac(puVar13,&local_a8,&DAT_100fae668,&DAT_100c2e4a0);
      uStack_c8 = uStack_a0;
      local_d0 = local_a8;
      uStack_b8 = uStack_90;
      uStack_c0 = uStack_98;
      FUN_1000f8cac(&local_d0,&local_110,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_1000f8cac(param_4,auStack_f0,&DAT_100fae668,&DAT_100c2e4a0);
      if (local_f8 == 0) {
        FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
        if (local_d8 == 0) {
          _swift_bridgeObjectRelease(puVar15);
          FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10014e758:
          *param_5 = '\0';
          goto LAB_10014e760;
        }
LAB_10014e3e4:
        FUN_1000fb4c4(&local_110,&DAT_100fb0c98,&DAT_100c2ef60);
      }
      else {
        FUN_1000f8cac(&local_110,auStack_130,&DAT_100fae668,&DAT_100c2e4a0);
        if (local_d8 == 0) {
          FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10014e5c4:
          FUN_100004594(auStack_130);
          goto LAB_10014e3e4;
        }
        FUN_1000f8cac(auStack_f0,auStack_150,&DAT_100fae668,&DAT_100c2e4a0);
        pbVar8 = &local_160;
        _swift_dynamicCast(pbVar8,auStack_130,puVar2 + 8,
                           PTR___type_metadata_for_Swift_Bool_100eac570,0);
        bVar6 = local_160;
        if (((ulong)pbVar8 & 1) == 0) {
LAB_10014e520:
          pbVar8 = &local_160;
          _swift_dynamicCast(pbVar8,auStack_130,puVar2 + 8,puVar10,0);
          _Var4.unknown = _Stack_158.unknown;
          if ((int)pbVar8 == 0) {
            FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_100004594(auStack_150);
          }
          else {
            _Var1.unknown._1_7_ = uStack_15f;
            _Var1.unknown._0_1_ = local_160;
            p_Var9 = &local_170;
            _swift_dynamicCast(p_Var9,auStack_150,puVar2 + 8,puVar10,0);
            puVar2 = puStack_168;
            if (((ulong)p_Var9 & 1) != 0) {
              if ((_Var1.unknown == (undefined *)CONCAT71(uStack_16f,local_170.value)) &&
                 (_Var4.unknown == puStack_168)) {
                bVar6 = true;
              }
              else {
                bVar6 = Swift::_stringCompareWithSmolCheck(_Var1,_Var4,local_170);
              }
              _swift_bridgeObjectRelease(_Var4.unknown);
              _swift_bridgeObjectRelease(puVar2);
              FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
              goto LAB_10014e60c;
            }
            FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
            _swift_bridgeObjectRelease(_Var4.unknown);
            FUN_100004594(auStack_150);
          }
          goto LAB_10014e5c4;
        }
        p_Var9 = &local_170;
        _swift_dynamicCast(p_Var9,auStack_150,puVar2 + 8,
                           PTR___type_metadata_for_Swift_Bool_100eac570,0);
        if ((int)p_Var9 == 0) goto LAB_10014e520;
        FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
        bVar6 = bVar6 ^ local_170.value ^ 1;
LAB_10014e60c:
        FUN_100004594(auStack_150);
        FUN_100004594(auStack_130);
        FUN_1000fb4c4(auStack_f0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
        if ((bVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar15);
          goto LAB_10014e758;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar14 != uVar16);
  }
  _swift_bridgeObjectRelease(puVar15);
  if (*param_5 == '\x01') {
    FUN_1000f8cac(param_4,&local_110,&DAT_100fae668,&DAT_100c2e4a0);
    puVar10 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = puVar15;
    if (((ulong)puVar10 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100105fa0(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
    }
    uVar14 = *(ulong *)(puVar13 + 0x10);
    puVar15 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar14) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100105fa0(puVar15,uVar14 + 1,1,puVar13);
    }
    *(ulong *)(puVar15 + 0x10) = uVar14 + 1;
    *(undefined8 *)(puVar15 + uVar14 * 0x20 + 0x28) = uStack_108;
    *(undefined8 *)(puVar15 + uVar14 * 0x20 + 0x20) = local_110;
    *(long *)(puVar15 + uVar14 * 0x20 + 0x38) = local_f8;
    *(undefined8 *)(puVar15 + uVar14 * 0x20 + 0x30) = uStack_100;
    _swift_beginAccess(param_1 + lVar3,&local_110,0x21,0);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(puVar15);
    uVar11 = *(undefined8 *)(param_1 + lVar3);
    _swift_isUniquelyReferenced_nonNull_native(uVar11);
    local_a8 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0x8000000000000000;
    FUN_100170110(puVar15,param_2,param_3,uVar11);
    _swift_bridgeObjectRelease(param_3);
    *(undefined8 *)(param_1 + lVar3) = local_a8;
    _swift_endAccess(&local_110);
  }
LAB_10014e760:
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x10014e7d4 | FUN_10014e7d4 */

byte FUN_10014e7d4(void)

{
  byte bVar1;
  char *pcVar2;
  long unaff_x20;
  ID self;
  String SVar3;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if (((bVar1 & 1) == 0) && (DAT_101057340 == '\x01')) {
    pcVar2 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar2[0x18] = '\x02';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x01';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar2[0x20] = 'X';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = -0x30;
    pcVar2[0x28] = '@';
    pcVar2[0x29] = '\x15';
    pcVar2[0x2a] = -0x27;
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\x01';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = -0x80;
    SVar3.bridgeObject = (void *)0x20;
    SVar3.str = pcVar2;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar3,separator);
    _swift_release(pcVar2);
  }
  return bVar1;
}



/* Address: 0x10014e8a8 | FUN_10014e8a8 */

void FUN_10014e8a8(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  ID self;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String separator;
  String separator_00;
  String separator_01;
  undefined1 auStack_a0 [24];
  undefined1 local_88 [24];
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar8 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = 'X';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = '@';
    pcVar3[0x29] = '\x15';
    pcVar3[0x2a] = -0x27;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar10.bridgeObject = (void *)0x20;
    SVar10.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar10,separator);
    _swift_release(pcVar3);
    return;
  }
  objc_stub::lock(self);
  bVar2 = *(byte *)(unaff_x20 + lVar8);
  objc_stub::unlock(self);
  lVar7 = PostHogConfig::optOut;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar11.bridgeObject = (void *)0x20;
      SVar11.str = pcVar3;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar11,separator_00);
      _swift_release(pcVar3);
    }
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar5 + PostHogConfig::optOut,auStack_a0,0,0);
    if (*(char *)(lVar5 + lVar7) != '\x01') {
      return;
    }
  }
  IVar9 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::optOutLock);
  objc_stub::lock(IVar9);
  lVar5 = PostHogConfig::optOut;
  lVar7 = _TtC7PostHog10PostHogSDK::config;
  lVar6 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar6 + PostHogConfig::optOut,auStack_68,1,0);
  *(undefined1 *)(lVar6 + lVar5) = 0;
  lVar5 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar5 != 0) {
    local_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_88[0] = 0;
    _swift_retain(lVar5);
    FUN_10015ab00(0xe,local_88);
    _swift_release(lVar5);
    FUN_100004594(local_88);
  }
  objc_stub::unlock(IVar9);
  objc_stub::lock(self);
  FUN_100151218();
  FUN_100150ae0();
  FUN_100151c48();
  objc_stub::lock(self);
  bVar2 = *(byte *)(unaff_x20 + lVar8);
  objc_stub::unlock(self);
  lVar8 = PostHogConfig::optOut;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_10014eca8;
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar1 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar4 = 0xd000000000000058;
  }
  else {
    lVar7 = *(long *)(unaff_x20 + lVar7);
    _swift_beginAccess(lVar7 + PostHogConfig::optOut,local_88,0,0);
    if (*(char *)(lVar7 + lVar8) != '\x01') {
      IVar9 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
      objc_stub::lock(IVar9);
      lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
      _swift_retain(lVar8);
      IVar9 = objc_stub::unlock(IVar9);
      if (lVar8 != 0) {
        FUN_100108738();
        _swift_release(lVar8);
        if (*(long *)(IVar9 + 0x10) != 0) {
          FUN_1001349c8(IVar9,FUN_10010f8e8);
        }
        _swift_bridgeObjectRelease(IVar9);
      }
      goto LAB_10014eca8;
    }
    if (DAT_101057340 != '\x01') goto LAB_10014eca8;
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar1 = "[PostHog] PostHog is in OptOut state.";
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar4 = 0xd000000000000025;
  }
  *(undefined8 *)(pcVar3 + 0x20) = uVar4;
  *(ulong *)(pcVar3 + 0x28) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  SVar12.bridgeObject = (void *)0x20;
  SVar12.str = pcVar3;
  separator_01.bridgeObject = (void *)0xa;
  separator_01.str = (char *)0xe100000000000000;
  Swift::_print(SVar12,separator_01);
  _swift_release(pcVar3);
LAB_10014eca8:
  objc_stub::unlock(self);
  return;
}



/* Address: 0x10014eccc | _TtC7PostHog10PostHogSDK::optIn */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::optIn(ID param_1,SEL param_2)

{
  FUN_10014e8a8(param_1);
  return;
}



/* Address: 0x10014ecf4 | FUN_10014ecf4 */

void FUN_10014ecf4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  char *pcVar10;
  ID self;
  long unaff_x20;
  long lVar11;
  ID IVar12;
  long lVar13;
  String SVar14;
  String separator;
  undefined1 local_90 [24];
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar13 = _TtC7PostHog10PostHogSDK::enabled;
  bVar8 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar8 & 1) != 0) {
    objc_stub::lock(self);
    bVar8 = *(byte *)(unaff_x20 + lVar13);
    objc_stub::unlock(self);
    lVar9 = PostHogConfig::optOut;
    lVar13 = _TtC7PostHog10PostHogSDK::config;
    if ((bVar8 & 1) != 0) {
      lVar11 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
      _swift_beginAccess(lVar11 + PostHogConfig::optOut,auStack_58,0,0);
      if ((*(byte *)(lVar11 + lVar9) & 1) != 0) {
        return;
      }
      IVar12 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::optOutLock);
      objc_stub::lock(IVar12);
      lVar9 = PostHogConfig::optOut;
      lVar13 = *(long *)(unaff_x20 + lVar13);
      _swift_beginAccess(lVar13 + PostHogConfig::optOut,auStack_70,1,0);
      *(undefined1 *)(lVar13 + lVar9) = 1;
      lVar13 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage);
      if (lVar13 != 0) {
        local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_90[0] = 1;
        _swift_retain(lVar13);
        FUN_10015ab00(0xe,local_90);
        _swift_release(lVar13);
        FUN_100004594(local_90);
      }
      objc_stub::unlock(IVar12);
      lVar13 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler);
      if (lVar13 != 0) {
        IVar12 = *(ID *)(lVar13 + 0x60);
        _swift_retain(lVar13);
        objc_stub::lock(IVar12);
        puVar1 = (undefined8 *)
                 (lVar13 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
        uVar2 = *puVar1;
        uVar5 = puVar1[1];
        uVar3 = puVar1[2];
        uVar6 = puVar1[3];
        uVar4 = puVar1[4];
        uVar7 = puVar1[5];
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        FUN_1001553c4(uVar2,uVar5,uVar3,uVar6,uVar4,uVar7);
        *(undefined1 *)(lVar13 + _TtC7PostHog30PostHogPushSubscriptionHandler::didAuthRetry) = 0;
        objc_stub::unlock(IVar12);
        _swift_release(lVar13);
      }
      objc_stub::lock(self);
      FUN_1001519f8();
      objc_stub::unlock(self);
      return;
    }
  }
  if (DAT_101057340 != '\x01') {
    return;
  }
  pcVar10 = &DAT_100fae660;
  FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
  _swift_allocObject();
  pcVar10[0x18] = '\x02';
  pcVar10[0x19] = '\0';
  pcVar10[0x1a] = '\0';
  pcVar10[0x1b] = '\0';
  pcVar10[0x1c] = '\0';
  pcVar10[0x1d] = '\0';
  pcVar10[0x1e] = '\0';
  pcVar10[0x1f] = '\0';
  pcVar10[0x10] = '\x01';
  pcVar10[0x11] = '\0';
  pcVar10[0x12] = '\0';
  pcVar10[0x13] = '\0';
  pcVar10[0x14] = '\0';
  pcVar10[0x15] = '\0';
  pcVar10[0x16] = '\0';
  pcVar10[0x17] = '\0';
  *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar10[0x20] = 'X';
  pcVar10[0x21] = '\0';
  pcVar10[0x22] = '\0';
  pcVar10[0x23] = '\0';
  pcVar10[0x24] = '\0';
  pcVar10[0x25] = '\0';
  pcVar10[0x26] = '\0';
  pcVar10[0x27] = -0x30;
  pcVar10[0x28] = '@';
  pcVar10[0x29] = '\x15';
  pcVar10[0x2a] = -0x27;
  pcVar10[0x2b] = '\0';
  pcVar10[0x2c] = '\x01';
  pcVar10[0x2d] = '\0';
  pcVar10[0x2e] = '\0';
  pcVar10[0x2f] = -0x80;
  SVar14.bridgeObject = (void *)0x20;
  SVar14.str = pcVar10;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar14,separator);
  _swift_release(pcVar10);
  return;
}



/* Address: 0x10014ef44 | _TtC7PostHog10PostHogSDK::optOut */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::optOut(ID param_1,SEL param_2)

{
  FUN_10014ecf4(param_1);
  return;
}



/* Address: 0x10014ef6c | FUN_10014ef6c */

undefined1 FUN_10014ef6c(void)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  char *pcVar4;
  ID self;
  long lVar5;
  long unaff_x20;
  String SVar6;
  String separator;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = PostHogConfig::optOut;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar6.bridgeObject = (void *)0x20;
      SVar6.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar6,separator);
      _swift_release(pcVar4);
    }
    uVar3 = 1;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar5 + PostHogConfig::optOut,auStack_48,0,0);
    uVar3 = *(undefined1 *)(lVar5 + lVar2);
  }
  return uVar3;
}



/* Address: 0x10014f07c | _TtC7PostHog10PostHogSDK::isOptOut */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC7PostHog10PostHogSDK::isOptOut(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  IVar2 = param_1;
  FUN_10014e7d4();
  lVar1 = PostHogConfig::optOut;
  if ((IVar2 & 1) == 0) {
    bVar3 = 1;
  }
  else {
    lVar4 = *(long *)(param_1 + config);
    _swift_beginAccess(lVar4 + PostHogConfig::optOut,auStack_48,0,0);
    bVar3 = (bool)*(byte *)(lVar4 + lVar1);
  }
  return bVar3;
}



/* Address: 0x10014f100 | FUN_10014f100 */

void FUN_10014f100(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  ID IVar5;
  long unaff_x20;
  String SVar6;
  String separator;
  
  IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar5);
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar5);
  if ((bVar2 & 1) != 0) {
    objc_stub::lock(IVar5);
    FUN_10014f248();
    objc_stub::unlock(IVar5);
    IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::lastScreenLock);
    objc_stub::lock(IVar5);
    puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_bridgeObjectRelease(uVar3);
    objc_stub::unlock(IVar5);
    return;
  }
  if (DAT_101057340 == '\x01') {
    pcVar4 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar4[0x18] = '\x02';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\x01';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar4[0x20] = 'X';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = -0x30;
    pcVar4[0x28] = '@';
    pcVar4[0x29] = '\x15';
    pcVar4[0x2a] = -0x27;
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\x01';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = -0x80;
    SVar6.bridgeObject = (void *)0x20;
    SVar6.str = pcVar4;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar6,separator);
    _swift_release(pcVar4);
    return;
  }
  return;
}



/* Address: 0x10014f248 | FUN_10014f248 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10014f248(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  Date DVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  ID IVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_f0 + -extraout_x8;
  *(undefined1 *)(param_1 + _TtC7PostHog10PostHogSDK::enabled) = 0;
  if (DAT_100fb0ca8 != -1) {
    _swift_once(&DAT_100fb0ca8,FUN_1001394e8);
  }
  lVar4 = _TtC7PostHog10PostHogSDK::config;
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + _TtC7PostHog10PostHogSDK::config) + PostHogConfig::projectToken);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  _swift_beginAccess(&DAT_100fb0cb0,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(uVar2);
  uVar9 = uVar2;
  FUN_1001535ec(uVar7,uVar2);
  _swift_endAccess(auStack_78);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar9);
  lVar13 = _TtC7PostHog10PostHogSDK::queue;
  lVar10 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::queue);
  if (lVar10 != 0) {
    _swift_retain(lVar10);
    FUN_100136270(&DAT_100eb8990,thunk_FUN_100155a44,&DAT_100eb89a8);
    _swift_release(lVar10);
  }
  lVar10 = _TtC7PostHog10PostHogSDK::replayQueue;
  lVar15 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::replayQueue);
  if (lVar15 != 0) {
    _swift_retain(lVar15);
    FUN_100136270(&DAT_100eb8990,thunk_FUN_100155a44,&DAT_100eb89a8);
    _swift_release(lVar15);
  }
  lVar15 = _TtC7PostHog10PostHogSDK::logsQueue;
  lVar11 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::logsQueue);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    FUN_100136270(&DAT_100eb8940,FUN_100155a44,&DAT_100eb8958);
    _swift_release(lVar11);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = 0;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = 0;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = 0;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler);
  *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler) = 0;
  _swift_release(uVar7);
  IVar12 = *(ID *)(param_1 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
  objc_stub::lock(IVar12);
  lVar13 = _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer;
  lVar10 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
  _swift_retain(lVar10);
  objc_stub::unlock(IVar12);
  objc_stub::lock(IVar12);
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = 0;
  _swift_release(uVar7);
  objc_stub::unlock(IVar12);
  if (lVar10 != 0) {
    _swift_retain(lVar10);
    FUN_100108844();
    _swift_release(lVar10);
  }
  lVar15 = PostHogConfig::storageManager;
  lVar11 = *(long *)(param_1 + lVar4);
  _swift_beginAccess(lVar11 + PostHogConfig::storageManager,auStack_78,0,0);
  lVar13 = PostHogConfig::reuseAnonymousId;
  lVar15 = *(long *)(lVar11 + lVar15);
  if (lVar15 != 0) {
    _swift_beginAccess(lVar11 + PostHogConfig::reuseAnonymousId,auStack_90,0,0);
    uVar3 = *(undefined1 *)(lVar11 + lVar13);
    _swift_retain(lVar15);
    FUN_10015d208(uVar3,0);
    _swift_release(lVar15);
  }
  lVar13 = PostHogConfig::storageManager;
  lVar15 = *(long *)(param_1 + lVar4);
  _swift_beginAccess(lVar15 + PostHogConfig::storageManager,auStack_a8,1,0);
  uVar7 = *(undefined8 *)(lVar15 + lVar13);
  *(undefined8 *)(lVar15 + lVar13) = 0;
  _swift_release(uVar7);
  FUN_100123b5c(0);
  _objc_allocWithZone();
  uVar7 = 0;
  FUN_1001221c4(0,0xe000000000000000);
  *(undefined8 *)(param_1 + lVar4) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::remoteConfig);
  *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::remoteConfig) = 0;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::storage);
  *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::storage) = 0;
  _swift_release(uVar7);
  lVar4 = _TtC7PostHog10PostHogSDK::reachability;
  lVar13 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::reachability);
  if (lVar13 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar13 + 0x38);
    _swift_retain(lVar13);
    _SCNetworkReachabilitySetCallback(uVar7,0,0);
    _SCNetworkReachabilitySetDispatchQueue(*(undefined8 *)(lVar13 + 0x38),0);
    *(undefined1 *)(lVar13 + 0x30) = 0;
    _swift_release(lVar13);
    uVar7 = *(undefined8 *)(param_1 + lVar4);
  }
  *(undefined8 *)(param_1 + lVar4) = 0;
  _swift_release(uVar7);
  IVar12 = *(ID *)(param_1 + _TtC7PostHog10PostHogSDK::flagCallReportedLock);
  objc_stub::lock(IVar12);
  lVar4 = _TtC7PostHog10PostHogSDK::flagCallReported;
  _swift_beginAccess(param_1 + _TtC7PostHog10PostHogSDK::flagCallReported,auStack_c0,1,0);
  uVar7 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar7);
  objc_stub::unlock(IVar12);
  uVar7 = *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::context);
  *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::context) = 0;
  _swift_release(uVar7);
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_d8,0,0);
  if (((s_posthog_ios_100fb15a8._0_8_ != -0x2fffffffffffffec) ||
      (ram0x000100fb15b0 != (undefined *)0x8000000100d92b80)) &&
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                         (_StringComparisonResult)0x14), !bVar5)) {
    DVar8 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))(puVar14,1,1,DVar8.unknown);
    FUN_100157428(0,0,puVar14,2);
    FUN_1000fb4c4(puVar14,&DAT_100faf508,&DAT_100c2e2e0);
  }
  uVar7 = *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::didEnterBackgroundToken);
  *(undefined8 *)(param_1 + _TtC7PostHog10PostHogSDK::didEnterBackgroundToken) = 0;
  _swift_release(uVar7);
  lVar4 = _TtC7PostHog10PostHogSDK::logger;
  _swift_beginAccess(param_1 + _TtC7PostHog10PostHogSDK::logger,auStack_f0,1,0);
  *(undefined8 *)(param_1 + lVar4) = 0;
  DAT_101057340 = 0;
  FUN_1001519f8(0);
  _swift_release(lVar10);
  return;
}



/* Address: 0x10014f778 | _TtC7PostHog10PostHogSDK::close */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int _TtC7PostHog10PostHogSDK::close(int param_1)

{
  FUN_10014f100(param_1);
  return 0;
}



/* Address: 0x10014f7a0 | FUN_10014f7a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10014f7a0(long param_1)

{
  long lVar1;
  ID self;
  
  FUN_100151c28();
  _objc_allocWithZone();
  lVar1 = param_1;
  FUN_1001391c0();
  self = *(ID *)(lVar1 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  FUN_100139ba8(param_1,lVar1);
  objc_stub::unlock(self);
  return lVar1;
}



/* Address: 0x10014f81c | _TtC7PostHog10PostHogSDK::with: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog10PostHogSDK::with_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  FUN_100151c28();
  _objc_allocWithZone();
  IVar1 = param_3;
  FUN_1001391c0();
  self = *(ID *)(IVar1 + setupLock);
  objc_stub::lock(self);
  FUN_100139ba8(param_3,IVar1);
  objc_stub::unlock(self);
  return IVar1;
}



/* Address: 0x10014f8a4 | FUN_10014f8a4 */

void FUN_10014f8a4(undefined8 param_1,undefined8 param_2)

{
  FUN_10014f9b0(param_1,param_2,FUN_100106f28);
  return;
}



/* Address: 0x10014f8b0 | _TtC7PostHog10PostHogSDK::captureExceptionWithError:properties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureExceptionWithError_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  if (param_4 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10014f8a4(param_3,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014f948 | FUN_10014f948 */

void FUN_10014f948(undefined8 param_1)

{
  FUN_10014fc88(param_1,FUN_100106f28);
  return;
}



/* Address: 0x10014f954 | _TtC7PostHog10PostHogSDK::captureExceptionWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureExceptionWithError_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10014f948(param_3);
  return;
}



/* Address: 0x10014f9a4 | FUN_10014f9a4 */

void FUN_10014f9a4(undefined8 param_1,undefined8 param_2)

{
  FUN_10014f9b0(param_1,param_2,FUN_100107ac8);
  return;
}



/* Address: 0x10014f9b0 | FUN_10014f9b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014f9b0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  long unaff_x20;
  ID self;
  String SVar5;
  String separator;
  undefined *local_58;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
      _swift_release(pcVar4);
      return;
    }
  }
  else {
    (*param_3)(param_1,1,0x636972656e6567,&DAT_e700000000000000,
               *(undefined8 *)
                (*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) +
                PostHogConfig::errorTrackingConfig));
    puVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000010;
    *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(puVar2 + 0x28) = 0x8000000100d90b70;
    *(undefined8 *)(puVar2 + 0x30) = 0x726f727265;
    *(undefined1 **)(puVar2 + 0x38) = &DAT_e500000000000000;
    puVar3 = puVar2;
    FUN_1000f8154();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fae490,&DAT_100c2de60);
    local_58 = puVar3;
    FUN_100107f38(param_1,&local_58);
    _swift_bridgeObjectRelease(param_1);
    puVar2 = local_58;
    FUN_100150dc4(local_58,param_2);
    _swift_bridgeObjectRelease(puVar2);
  }
  return;
}



/* Address: 0x10014fbe4 | _TtC7PostHog10PostHogSDK::captureExceptionWithNSException:properties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureExceptionWithNSException_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  if (param_4 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10014f9a4(param_3,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014fc7c | FUN_10014fc7c */

void FUN_10014fc7c(undefined8 param_1)

{
  FUN_10014fc88(param_1,FUN_100107ac8);
  return;
}



/* Address: 0x10014fc88 | FUN_10014fc88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014fc88(undefined8 param_1,code *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ID self;
  long unaff_x20;
  String SVar5;
  String separator;
  undefined *local_48;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
      _swift_release(pcVar4);
      return;
    }
  }
  else {
    (*param_2)(param_1,1,0x636972656e6567,&DAT_e700000000000000,
               *(undefined8 *)
                (*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) +
                PostHogConfig::errorTrackingConfig));
    puVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000010;
    *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(puVar2 + 0x28) = 0x8000000100d90b70;
    *(undefined8 *)(puVar2 + 0x30) = 0x726f727265;
    *(undefined1 **)(puVar2 + 0x38) = &DAT_e500000000000000;
    puVar3 = puVar2;
    FUN_1000f8154();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fae490,&DAT_100c2de60);
    local_48 = puVar3;
    FUN_100107f38(param_1,&local_48);
    _swift_bridgeObjectRelease(param_1);
    puVar2 = local_48;
    FUN_1001432c4(0x6974706563786524,0xea00000000006e6f,local_48);
    _swift_bridgeObjectRelease(puVar2);
  }
  return;
}



/* Address: 0x10014fec0 | _TtC7PostHog10PostHogSDK::captureExceptionWithNSException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureExceptionWithNSException_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10014fc7c(param_3);
  return;
}



/* Address: 0x10014ff10 | FUN_10014ff10 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014ff10(char *param_1,void *param_2,long param_3)

{
  String *pSVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  Date DVar6;
  char *pcVar7;
  char *pcVar8;
  Date DVar9;
  NSDate *pNVar10;
  uint uVar11;
  _StringGuts _Var12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined1 *puVar16;
  long extraout_x8;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long unaff_x20;
  char *pcVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  void *pvVar26;
  ID IVar27;
  long lVar28;
  long lVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String separator;
  String SVar36;
  String separator_00;
  String SVar37;
  String SVar38;
  String SVar39;
  String separator_01;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  void *local_190;
  char *local_188;
  char *local_180;
  long local_178;
  char *local_170;
  void *pvStack_168;
  undefined8 uStack_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  void *pvStack_128;
  undefined8 uStack_120;
  long lStack_118;
  String local_110;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar29 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar29 + 0x40));
  lVar28 = (long)&local_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar27 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar27);
  bVar3 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar27);
  lVar19 = PostHogConfig::optOut;
  if ((bVar3 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar15 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar15[0x18] = '\x02';
    pcVar15[0x19] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    pcVar15[0x10] = '\x01';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar15[0x20] = 'X';
    pcVar15[0x21] = '\0';
    pcVar15[0x22] = '\0';
    pcVar15[0x23] = '\0';
    pcVar15[0x24] = '\0';
    pcVar15[0x25] = '\0';
    pcVar15[0x26] = '\0';
    pcVar15[0x27] = -0x30;
    pcVar15[0x28] = '@';
    pcVar15[0x29] = '\x15';
    pcVar15[0x2a] = -0x27;
    pcVar15[0x2b] = '\0';
    pcVar15[0x2c] = '\x01';
    pcVar15[0x2d] = '\0';
    pcVar15[0x2e] = '\0';
    pcVar15[0x2f] = -0x80;
    SVar35.bridgeObject = (void *)0x20;
    SVar35.str = pcVar15;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar35,separator);
    _swift_release(pcVar15);
    return;
  }
  lVar23 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  local_190 = param_2;
  _swift_beginAccess(lVar23 + PostHogConfig::optOut,auStack_80,0,0);
  lVar24 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  if (*(char *)(lVar23 + lVar19) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar15 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar15[0x18] = '\x02';
    pcVar15[0x19] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    pcVar15[0x10] = '\x01';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    uVar17 = 0x8000000100d91600;
    *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar21 = 0xd000000000000025;
  }
  else {
    lVar23 = *(long *)(lVar23 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar23 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,auStack_98,
                       0,0);
    lVar19 = _TtC7PostHog27PostHogExceptionStepsConfig::enabled;
    lVar24 = *(long *)(lVar23 + lVar24);
    pcVar15 = (char *)0x0;
    puVar16 = (undefined1 *)0x0;
    _swift_beginAccess(lVar24 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled,auStack_b0);
    pvVar26 = local_190;
    if (*(char *)(lVar24 + lVar19) == '\x01') {
      uVar25 = (ulong)param_1 & 0xffffffffffff;
      if (((ulong)local_190 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)local_190 >> 0x38 & 0xf;
      }
      if (uVar25 != 0) {
        IVar27 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
        objc_stub::lock(IVar27);
        pcVar22 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
        _swift_retain(pcVar22);
        objc_stub::unlock(IVar27);
        if (pcVar22 == (char *)0x0) {
          return;
        }
        pcVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1000f8154();
        local_1a8 = pcVar22;
        if (param_3 != 0) {
          uVar20 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
          uVar25 = 0xffffffffffffffff;
          if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
            uVar25 = ~(-1L << (uVar20 & 0x3f));
          }
          uVar25 = uVar25 & *(ulong *)(param_3 + 0x40);
          uVar20 = uVar20 + 0x3f >> 6;
          local_188 = "addExceptionStep: reserved key ";
          local_180 = "steps are disabled, ignoring";
          local_1c8 = lVar28;
          local_1c0 = lVar29;
          local_1b8 = DVar6.unknown;
          local_1b0 = pcVar7;
          _swift_bridgeObjectRetain(param_3);
          uStack_198 = 2;
          local_1a0 = 1;
          lVar19 = 0;
          do {
            lVar28 = lVar19;
            if (uVar25 == 0) {
              uVar25 = uVar20;
              if ((long)uVar20 <= lVar19 + 1) {
                uVar25 = lVar19 + 1;
              }
              lVar29 = uVar25 - 1;
              do {
                lVar28 = lVar19 + 1;
                if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10015098c);
                  (*pcVar4)();
                }
                if ((long)uVar20 <= lVar28) {
                  uVar25 = 0;
                  puStack_f8 = (undefined *)0x0;
                  local_100 = 0;
                  uStack_e8 = 0;
                  local_f0 = 0;
                  local_110 = (String)ZEXT816(0);
                  goto LAB_100150350;
                }
                uVar25 = ((ulong *)(param_3 + 0x40))[lVar28];
                lVar19 = lVar19 + 1;
              } while (uVar25 == 0);
            }
            lVar29 = lVar28;
            uVar18 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar25 - 1 & uVar25;
            uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar29 << 6;
            pSVar1 = (String *)(*(long *)(param_3 + 0x30) + uVar18 * 0x10);
            pvVar26 = pSVar1->bridgeObject;
            local_110 = *pSVar1;
            FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar18 * 0x20,&local_100);
            _swift_bridgeObjectRetain(pvVar26);
LAB_100150350:
            SVar35 = local_110;
            pcVar7 = (char *)0x6567617373656d24;
            pvVar26 = local_110.bridgeObject;
            pcVar22 = local_110.str;
            puStack_d8 = local_110.bridgeObject;
            local_e0 = local_110.str;
            puStack_c8 = puStack_f8;
            uStack_d0 = local_100;
            uStack_b8 = uStack_e8;
            local_c0 = local_f0;
            if (local_110.bridgeObject == (undefined *)0x0) {
              _swift_release(param_3);
              pvVar26 = local_190;
              pcVar7 = local_1b0;
              lVar28 = local_1c8;
              DVar6.unknown = local_1b8;
              lVar29 = local_1c0;
              break;
            }
            _Var12.unknown = (undefined *)&local_110;
            local_178 = lVar29;
            FUN_100011080(&uStack_d0);
            if ((pcVar22 == (undefined *)0x6567617373656d24) && (pvVar26 == &DAT_e800000000000000))
            {
LAB_100150404:
              local_130 = (char *)0x0;
              pvStack_128 = (void *)0xe000000000000000;
              Swift::_StringGuts::grow(0x3a,_Var12);
              SVar32.bridgeObject = (void *)((ulong)local_180 | 0x8000000000000000);
              SVar32.str = (char *)0xd00000000000001f;
              SVar37.bridgeObject = puVar16;
              SVar37.str = pcVar15;
              Swift::String::append(SVar32,SVar37);
              SVar38.bridgeObject = puVar16;
              SVar38.str = pcVar15;
              Swift::String::append(SVar35,SVar38);
              _swift_bridgeObjectRelease(pvVar26);
              SVar33.bridgeObject = (void *)((ulong)local_188 | 0x8000000000000000);
              SVar33.str = (char *)0xd000000000000019;
              SVar39.bridgeObject = puVar16;
              SVar39.str = pcVar15;
              Swift::String::append(SVar33,SVar39);
              pvVar26 = pvStack_128;
              pcVar22 = local_130;
              if (DAT_101057340 == '\x01') {
                pcVar7 = &DAT_100fae660;
                FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
                pcVar15 = (char *)0x7;
                _swift_allocObject();
                *(undefined8 *)(pcVar7 + 0x18) = uStack_198;
                *(undefined8 *)(pcVar7 + 0x10) = local_1a0;
                local_130 = (char *)0x676f4874736f505b;
                pvStack_128 = (void *)0xea0000000000205d;
                SVar30.bridgeObject = pvVar26;
                SVar30.str = pcVar22;
                SVar36.bridgeObject = puVar16;
                SVar36.str = pcVar15;
                Swift::String::append(SVar30,SVar36);
                *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
                *(char **)(pcVar7 + 0x20) = local_130;
                *(void **)(pcVar7 + 0x28) = pvStack_128;
                SVar31.bridgeObject = (void *)0x20;
                SVar31.str = pcVar7;
                separator_00.bridgeObject = (void *)0xa;
                separator_00.str = (char *)0xe100000000000000;
                puVar16 = (undefined1 *)0xa;
                pcVar15 = (char *)0xe100000000000000;
                Swift::_print(SVar31,separator_00);
                _swift_bridgeObjectRelease(pvVar26);
                _swift_release(pcVar7);
                FUN_100004594(&local_110);
                lVar19 = local_178;
              }
              else {
                FUN_100004594(&local_110);
                _swift_bridgeObjectRelease(pvVar26);
                lVar19 = local_178;
              }
            }
            else {
              puVar16 = &DAT_e800000000000000;
              _Var12.unknown = pvVar26;
              bVar5 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)pcVar22,(_StringGuts)pvVar26,
                                 (_StringComparisonResult)0x24);
              pcVar15 = pcVar7;
              if ((bVar5) ||
                 ((pcVar22 == (undefined *)0x617473656d697424 &&
                  (pvVar26 == (undefined *)0xea0000000000706d)))) goto LAB_100150404;
              pcVar15 = (char *)0x617473656d697424;
              puVar16 = (undefined1 *)0xea0000000000706d;
              _Var12.unknown = pvVar26;
              bVar5 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)pcVar22,(_StringGuts)pvVar26,
                                 (_StringComparisonResult)0x24);
              if (bVar5) goto LAB_100150404;
              FUN_10000cbfc(&local_110,&local_130);
              pvStack_168 = pvStack_128;
              local_170 = local_130;
              local_158 = lStack_118;
              uStack_160 = uStack_120;
              if (lStack_118 == 0) {
                FUN_1000fb4c4(&local_170,&DAT_100fae668,&DAT_100c2e4a0);
                pcVar15 = local_1b0;
                _swift_bridgeObjectRetain(local_1b0);
                puVar14 = pvVar26;
                FUN_100071370();
                local_1d0 = pcVar22;
                _swift_bridgeObjectRelease(pcVar15);
                if (((ulong)puVar14 & 1) == 0) {
                  FUN_100004594(&local_110);
                  _swift_bridgeObjectRelease(pvVar26);
                  uStack_148 = 0;
                  local_150 = 0;
                  uStack_138 = 0;
                  uStack_140 = 0;
                }
                else {
                  pcVar22 = pcVar15;
                  _swift_isUniquelyReferenced_nonNull_native();
                  local_170 = pcVar15;
                  if ((int)pcVar22 == 0) {
                    FUN_10017057c();
                  }
                  pcVar15 = local_170;
                  puVar14 = local_1d0;
                  _swift_bridgeObjectRelease
                            (*(undefined8 *)
                              (*(long *)(local_170 + 0x30) + (long)local_1d0 * 0x10 + 8));
                  FUN_100011080(*(long *)(pcVar15 + 0x38) + (long)puVar14 * 0x20,&local_150);
                  local_1b0 = pcVar15;
                  FUN_1000d9d9c(puVar14,pcVar15);
                  _swift_bridgeObjectRelease(pvVar26);
                  FUN_100004594(&local_110);
                }
                pcVar15 = &DAT_100c2e4a0;
                FUN_1000fb4c4(&local_150,&DAT_100fae668);
                lVar19 = local_178;
              }
              else {
                FUN_100011080(&local_170,&local_150);
                pcVar7 = local_1b0;
                pcVar8 = local_1b0;
                _swift_isUniquelyReferenced_nonNull_native();
                local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,(int)pcVar8);
                local_170 = pcVar7;
                pcVar8 = pcVar22;
                puVar14 = pvVar26;
                FUN_100071370();
                uVar11 = (uint)puVar14;
                lVar19 = *(long *)(pcVar7 + 0x10) + ((ulong)~uVar11 & 1);
                if (SCARRY8(*(long *)(pcVar7 + 0x10),(ulong)~uVar11 & 1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001509a8);
                  (*pcVar4)();
                }
                if (*(long *)(pcVar7 + 0x18) < lVar19) {
                  local_1b0 = (char *)CONCAT44(local_1b0._4_4_,uVar11);
                  FUN_100170ddc(lVar19,(ulong)local_1d0 & 0xffffffff);
                  pcVar8 = pcVar22;
                  puVar13 = pvVar26;
                  FUN_100071370();
                  puVar14 = (undefined *)((ulong)local_1b0 & 0xffffffff);
                  if (((uint)local_1b0 & 1) != ((uint)puVar13 & 1)) {
                    Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001509bc);
                    (*pcVar4)();
                  }
                }
                else if (((ulong)local_1d0 & 1) == 0) {
                  local_1b0 = (char *)CONCAT44(local_1b0._4_4_,uVar11);
                  local_1d0 = pcVar8;
                  FUN_10017057c();
                  puVar14 = (undefined *)((ulong)local_1b0 & 0xffffffff);
                  pcVar8 = local_1d0;
                }
                pcVar7 = local_170;
                local_1b0 = local_170;
                if (((ulong)puVar14 & 1) == 0) {
                  *(ulong *)(local_170 + ((ulong)pcVar8 >> 6) * 8 + 0x40) =
                       *(ulong *)(local_170 + ((ulong)pcVar8 >> 6) * 8 + 0x40) |
                       1L << ((ulong)pcVar8 & 0x3f);
                  puVar2 = (undefined8 *)(*(long *)(local_170 + 0x30) + (long)pcVar8 * 0x10);
                  *puVar2 = pcVar22;
                  puVar2[1] = pvVar26;
                  FUN_100011080(&local_150,*(long *)(local_170 + 0x38) + (long)pcVar8 * 0x20);
                  FUN_100004594(&local_110);
                  lVar19 = *(long *)(pcVar7 + 0x10);
                  if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001509ac);
                    (*pcVar4)();
                  }
                  *(long *)(pcVar7 + 0x10) = lVar19 + 1;
                  lVar19 = local_178;
                }
                else {
                  lVar19 = *(long *)(local_170 + 0x38) + (long)pcVar8 * 0x20;
                  FUN_100004594(lVar19);
                  FUN_100011080(&local_150,lVar19);
                  _swift_bridgeObjectRelease(pvVar26);
                  FUN_100004594(&local_110);
                  lVar19 = local_178;
                }
              }
            }
          } while( true );
        }
        puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
        puStack_f8 = PTR___type_metadata_for_Swift_String_100eac208;
        local_110.str = param_1;
        local_110.bridgeObject = pvVar26;
        FUN_100011080(&local_110,&local_e0);
        _swift_bridgeObjectRetain(pvVar26);
        pcVar15 = pcVar7;
        _swift_isUniquelyReferenced_nonNull_native(pcVar7);
        local_110.str = pcVar7;
        FUN_10016fe74(&local_e0,0x6567617373656d24,&DAT_e800000000000000,pcVar15);
        pcVar15 = local_110.str;
        DVar9 = Foundation::Date::init();
        if (DAT_100fb2a00 != -1) {
          DVar9.unknown = (undefined *)&DAT_100fb2a00;
          _swift_once(&DAT_100fb2a00,FUN_10016e594);
        }
        IVar27 = *(ID *)(DAT_101057338 + 0x10);
        pNVar10 = Foundation::Date::_bridgeToObjectiveC(DVar9);
        objc_stub::stringFromDate_(IVar27,pNVar10);
        SVar35 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        (**(code **)(lVar29 + 8))(lVar28,DVar6.unknown);
        puStack_f8 = puVar14;
        local_110 = SVar35;
        FUN_100011080(&local_110,&local_e0);
        pcVar22 = pcVar15;
        _swift_isUniquelyReferenced_nonNull_native(pcVar15);
        local_110 = (String)CONCAT88(local_110.bridgeObject,pcVar15);
        FUN_10016fe74(&local_e0,0x617473656d697424,0xea0000000000706d,pcVar22);
        pcVar15 = local_1a8;
        pcVar22 = local_110.str;
        FUN_100108088(local_110.str);
        _swift_bridgeObjectRelease(pcVar22);
        goto LAB_100150810;
      }
      if (DAT_101057340 != '\x01') {
        return;
      }
      pcVar15 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar15[0x18] = '\x02';
      pcVar15[0x19] = '\0';
      pcVar15[0x1a] = '\0';
      pcVar15[0x1b] = '\0';
      pcVar15[0x1c] = '\0';
      pcVar15[0x1d] = '\0';
      pcVar15[0x1e] = '\0';
      pcVar15[0x1f] = '\0';
      pcVar15[0x10] = '\x01';
      pcVar15[0x11] = '\0';
      pcVar15[0x12] = '\0';
      pcVar15[0x13] = '\0';
      pcVar15[0x14] = '\0';
      pcVar15[0x15] = '\0';
      pcVar15[0x16] = '\0';
      pcVar15[0x17] = '\0';
      uVar17 = 0x8000000100d92f80;
      *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar21 = 0xd000000000000041;
    }
    else {
      if (DAT_101057340 != '\x01') {
        return;
      }
      pcVar15 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar15[0x18] = '\x02';
      pcVar15[0x19] = '\0';
      pcVar15[0x1a] = '\0';
      pcVar15[0x1b] = '\0';
      pcVar15[0x1c] = '\0';
      pcVar15[0x1d] = '\0';
      pcVar15[0x1e] = '\0';
      pcVar15[0x1f] = '\0';
      pcVar15[0x10] = '\x01';
      pcVar15[0x11] = '\0';
      pcVar15[0x12] = '\0';
      pcVar15[0x13] = '\0';
      pcVar15[0x14] = '\0';
      pcVar15[0x15] = '\0';
      pcVar15[0x16] = '\0';
      pcVar15[0x17] = '\0';
      uVar17 = 0x8000000100d92ef0;
      *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar21 = 0xd00000000000004c;
    }
  }
  *(undefined8 *)(pcVar15 + 0x20) = uVar21;
  *(undefined8 *)(pcVar15 + 0x28) = uVar17;
  SVar34.bridgeObject = (void *)0x20;
  SVar34.str = pcVar15;
  separator_01.bridgeObject = (void *)0xa;
  separator_01.str = (char *)0xe100000000000000;
  Swift::_print(SVar34,separator_01);
LAB_100150810:
  _swift_release(pcVar15);
  return;
}



/* Address: 0x1001509bc | _TtC7PostHog10PostHogSDK::addExceptionStep:properties: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::addExceptionStep_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_1001509c8();
  return;
}



/* Address: 0x1001509c8 | FUN_1001509c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001509c8(void)

{
  Dictionary<undefined,undefined> DVar1;
  long in_x3;
  code *in_x4;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (in_x3 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  (*in_x4)(SVar2.str,SVar2.bridgeObject,DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100150a6c | FUN_100150a6c */

void FUN_100150a6c(undefined8 param_1,undefined8 param_2)

{
  FUN_10014ff10(param_1,param_2,0);
  return;
}



/* Address: 0x100150a74 | _TtC7PostHog10PostHogSDK::addExceptionStep: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::addExceptionStep_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100150a80();
  return;
}



/* Address: 0x100150a80 | FUN_100150a80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100150a80(void)

{
  code *in_x3;
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (*in_x3)(SVar1.str,SVar1.bridgeObject,0);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100150ae0 | FUN_100150ae0 */

void FUN_100150ae0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID self;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
  objc_stub::lock(self);
  lVar1 = _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer;
  lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
  _swift_retain(lVar4);
  objc_stub::unlock(self);
  lVar6 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  if (lVar4 != 0) {
    _swift_release(lVar4);
    return;
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) +
                   PostHogConfig::errorTrackingConfig);
  _swift_beginAccess(lVar5 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,auStack_58,0,0
                    );
  lVar4 = _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes;
  lVar6 = *(long *)(lVar5 + lVar6);
  _swift_beginAccess(lVar6 + _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes,auStack_70,0,0);
  uVar7 = *(undefined8 *)(lVar6 + lVar4);
  puVar2 = &DAT_100eb89e0;
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  uVar3 = 0;
  FUN_10010891c(0);
  _swift_allocObject();
  FUN_100108014(uVar7,FUN_100155a8c,puVar2,uVar3);
  objc_stub::lock(self);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar7;
  _swift_retain(uVar7);
  _swift_release(uVar3);
  objc_stub::unlock(self);
  _swift_release(uVar7);
  return;
}



/* Address: 0x100150c50 | FUN_100150c50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100150c50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::onExceptionStepsChanged);
    _swift_retain(uVar1);
    FUN_1001349c8(param_1,FUN_10010f8e8);
    _swift_release(uVar1);
  }
  return;
}



/* Address: 0x100150cd8 | FUN_100150cd8 */

ID FUN_100150cd8(void)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) +
                   PostHogConfig::errorTrackingConfig);
  _swift_beginAccess(lVar1 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,auStack_48,0,0
                    );
  lVar4 = _TtC7PostHog27PostHogExceptionStepsConfig::enabled;
  lVar2 = *(long *)(lVar1 + lVar2);
  _swift_beginAccess(lVar2 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled,auStack_60,0,0);
  if (*(char *)(lVar2 + lVar4) == '\x01') {
    IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
    objc_stub::lock(IVar3);
    lVar2 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
    _swift_retain(lVar2);
    IVar3 = objc_stub::unlock(IVar3);
    if (lVar2 != 0) {
      FUN_100108738();
      lVar4 = *(long *)(IVar3 + 0x10);
      _swift_release(lVar2);
      if (lVar4 != 0) {
        return IVar3;
      }
      _swift_bridgeObjectRelease(IVar3);
    }
  }
  return 0;
}



/* Address: 0x100150dc4 | FUN_100150dc4 */

void FUN_100150dc4(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [8];
  undefined8 local_110;
  undefined1 auStack_108 [32];
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  if (param_2 == 0) {
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    puVar15 = (ulong *)(param_2 + 0x40);
    uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if (-uVar13 < 0x40) {
      uVar14 = ~(-1L << (-uVar13 & 0x3f));
    }
    uVar14 = uVar14 & *puVar15;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
    lVar16 = 0;
    lVar17 = lVar16;
    while( true ) {
      for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
        uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        local_98 = *puVar1;
        uVar3 = puVar1[1];
        uStack_90 = uVar3;
        FUN_10000cbfc(*(long *)(param_2 + 0x38) + uVar11 * 0x20,auStack_88);
        FUN_1000f8cac(&local_98,&local_c8,&DAT_100fae908,&DAT_100c2eec0);
        FUN_1000f8cac(&local_98,auStack_118,&DAT_100fae908,&DAT_100c2eec0);
        uVar4 = local_110;
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRelease(uVar4);
        FUN_100011080(auStack_108,&local_e8);
        uVar5 = uStack_c0;
        uVar11 = local_c8;
        uStack_158 = uStack_e0;
        local_160 = local_e8;
        local_148 = lStack_d0;
        uStack_150 = local_d8;
        if (lStack_d0 == 0) {
          FUN_1000fb4c4(&local_160,&DAT_100fae668,&DAT_100c2e4a0);
          _swift_bridgeObjectRetain(param_1);
          uVar9 = uVar5;
          FUN_100071370();
          _swift_bridgeObjectRelease(param_1);
          if ((uVar9 & 1) == 0) {
            FUN_1000fb4c4(&local_98,&DAT_100fae908,&DAT_100c2eec0);
            _swift_bridgeObjectRelease(uVar5);
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
          }
          else {
            uVar9 = param_1;
            _swift_isUniquelyReferenced_nonNull_native();
            local_160 = param_1;
            if ((int)uVar9 == 0) {
              FUN_10017057c();
            }
            param_1 = local_160;
            _swift_bridgeObjectRelease
                      (*(undefined8 *)(*(long *)(local_160 + 0x30) + uVar11 * 0x10 + 8));
            FUN_100011080(*(long *)(param_1 + 0x38) + uVar11 * 0x20,&local_140);
            FUN_1000d9d9c(uVar11,param_1);
            _swift_bridgeObjectRelease(uVar5);
            FUN_1000fb4c4(&local_98,&DAT_100fae908,&DAT_100c2eec0);
          }
          FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
        }
        else {
          FUN_100011080(&local_160,&local_140);
          uVar9 = param_1;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = uVar11;
          uVar10 = uVar5;
          local_160 = param_1;
          FUN_100071370();
          uVar12 = (ulong)~(uint)uVar10 & 1;
          lVar17 = *(long *)(param_1 + 0x10) + uVar12;
          if (SCARRY8(*(long *)(param_1 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100151204);
            (*pcVar6)();
          }
          if (*(long *)(param_1 + 0x18) < lVar17) {
            FUN_100170ddc(lVar17,uVar9);
            uVar8 = uVar11;
            uVar9 = uVar5;
            FUN_100071370();
            if (((uint)uVar10 & 1) != ((uint)uVar9 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100151218);
              (*pcVar6)();
            }
          }
          else if ((uVar9 & 1) == 0) {
            FUN_10017057c();
          }
          param_1 = local_160;
          if ((uVar10 & 1) == 0) {
            lVar17 = local_160 + (uVar8 >> 6) * 8;
            *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar8 & 0x3f);
            puVar2 = (ulong *)(*(long *)(local_160 + 0x30) + uVar8 * 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar5;
            FUN_100011080(&local_140,*(long *)(local_160 + 0x38) + uVar8 * 0x20);
            FUN_1000fb4c4(&local_98,&DAT_100fae908,&DAT_100c2eec0);
            if (SCARRY8(*(long *)(param_1 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100151208);
              (*pcVar6)();
            }
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
          }
          else {
            lVar17 = *(long *)(local_160 + 0x38) + uVar8 * 0x20;
            FUN_100004594(lVar17);
            FUN_100011080(&local_140,lVar17);
            _swift_bridgeObjectRelease(uVar5);
            FUN_1000fb4c4(&local_98,&DAT_100fae908,&DAT_100c2eec0);
          }
        }
        FUN_100004594(auStack_b8);
        lVar17 = lVar16;
      }
      bVar7 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100151200);
        (*pcVar6)();
      }
      if ((long)(0x3f - uVar13 >> 6) <= lVar16) break;
      uVar14 = puVar15[lVar16];
    }
    FUN_10000c650(param_2,puVar15,~uVar13,lVar17,0);
  }
  FUN_1001432c4(0x6974706563786524,0xea00000000006e6f,param_1);
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x100151218 | FUN_100151218 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100151218(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  _StringGuts _Var11;
  void *pvVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  ulong unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  char *pcVar20;
  undefined *puVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String separator;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String separator_00;
  char *local_d8;
  undefined1 auStack_a0 [24];
  char *local_88;
  void *local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC7PostHog10PostHogSDK::installedIntegrations;
  puVar15 = (undefined *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog10PostHogSDK::installedIntegrations,auStack_78,1);
  lVar1 = _TtC7PostHog10PostHogSDK::config;
  if (*(long *)(*(long *)(unaff_x20 + lVar2) + 0x10) == 0) {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    FUN_1001230c4();
    lVar17 = *(long *)(lVar4 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar17 != 0) {
      puVar18 = (undefined8 *)(lVar4 + 0x28);
      local_d8 = "Not available on this platform";
      do {
        pcVar20 = (char *)*puVar18;
        uVar10 = *puVar18;
        puVar21 = (undefined *)puVar18[-1];
        _Var5.unknown = puVar21;
        _swift_getObjectType();
        pcVar19 = *(code **)(pcVar20 + 8);
        _swift_unknownObjectRetain(puVar21);
        puVar6 = _Var5.unknown;
        (*pcVar19)(_Var5.unknown,pcVar20);
        lVar3 = PostHogConfig::enableSwizzling;
        if (((ulong)puVar6 & 1) == 0) {
LAB_100151400:
          uVar7 = unaff_x20;
          (**(code **)(pcVar20 + 0x10))();
          if (((uint)uVar7 & 0xff) == 3) {
            _swift_unknownObjectRetain(puVar21);
            puVar6 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            pcVar13 = pcVar20;
            puVar8 = puVar9;
            if (((ulong)puVar6 & 1) == 0) {
              _Var5.unknown = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
              puVar8 = (undefined *)0x0;
              pcVar13 = &DAT_00000001;
              FUN_100105994();
              puVar15 = puVar9;
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              pcVar13 = &DAT_00000001;
              _Var5.unknown = (undefined *)(uVar7 + 1);
              FUN_100105994();
              puVar15 = puVar8;
            }
            *(undefined **)(puVar9 + 0x10) = (undefined *)(uVar7 + 1);
            *(undefined8 *)(puVar9 + uVar7 * 0x10 + 0x28) = uVar10;
            *(undefined **)(puVar9 + uVar7 * 0x10 + 0x20) = puVar21;
            local_88 = (char *)0x0;
            local_80 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x18,_Var5);
            _swift_bridgeObjectRelease(local_80);
            local_88 = (char *)0x7461726765746e49;
            local_80 = (void *)0xec000000206e6f69;
            puVar6 = puVar21;
            _swift_getObjectType();
            SVar23 = Swift::__typeName(SUB81(puVar6,0));
            SVar29.bridgeObject = puVar15;
            SVar29.str = pcVar13;
            Swift::String::append(SVar23,SVar29);
            _swift_bridgeObjectRelease(SVar23.bridgeObject);
            pcVar20 = (char *)0x6c6c6174736e6920;
            pvVar12 = (void *)0xea00000000006465;
            goto LAB_100151604;
          }
          local_88 = (char *)0x0;
          local_80 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1a,_Var5);
          _swift_bridgeObjectRelease(local_80);
          local_88 = (char *)0x7461726765746e49;
          local_80 = (void *)0xec000000206e6f69;
          puVar6 = puVar21;
          _swift_getObjectType();
          SVar23 = Swift::__typeName(SUB81(puVar6,0));
          SVar30.bridgeObject = puVar15;
          SVar30.str = pcVar20;
          Swift::String::append(SVar23,SVar30);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          SVar23.bridgeObject = (void *)0xea0000000000203a;
          SVar23.str = (char *)0x64657070696b7320;
          SVar31.bridgeObject = puVar15;
          SVar31.str = pcVar20;
          Swift::String::append(SVar23,SVar31);
          if ((uVar7 & 0xff) == 0) {
            pcVar13 = (char *)0xd000000000000030;
            pcVar14 = "Disabled in remote config";
          }
          else if (((uint)uVar7 & 0xff) == 1) {
            pcVar13 = (char *)0xd000000000000019;
            pcVar14 = local_d8;
          }
          else {
            pcVar13 = (char *)0xd00000000000001e;
            pcVar14 = "Failed to migrate file ";
          }
          SVar26.bridgeObject = (void *)((ulong)pcVar14 | 0x8000000000000000);
          SVar26.str = pcVar13;
          SVar35.bridgeObject = puVar15;
          SVar35.str = pcVar20;
          Swift::String::append(SVar26,SVar35);
          _swift_bridgeObjectRelease((ulong)pcVar14 | 0x8000000000000000);
        }
        else {
          lVar16 = *(long *)(unaff_x20 + lVar1);
          _Var11.unknown = auStack_a0;
          pcVar13 = (char *)0x0;
          puVar15 = (undefined *)0x0;
          _swift_beginAccess(lVar16 + PostHogConfig::enableSwizzling);
          if ((*(byte *)(lVar16 + lVar3) & 1) != 0) goto LAB_100151400;
          local_88 = (char *)0x0;
          local_80 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x60,_Var11);
          SVar24.bridgeObject = (void *)0xec000000206e6f69;
          SVar24.str = (char *)0x7461726765746e49;
          SVar32.bridgeObject = puVar15;
          SVar32.str = pcVar13;
          Swift::String::append(SVar24,SVar32);
          puVar6 = puVar21;
          _swift_getObjectType();
          SVar23 = Swift::__typeName(SUB81(puVar6,0));
          SVar33.bridgeObject = puVar15;
          SVar33.str = pcVar13;
          Swift::String::append(SVar23,SVar33);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          pcVar20 = (char *)0xd000000000000052;
          pvVar12 = (void *)0x8000000100d93390;
LAB_100151604:
          SVar25.bridgeObject = pvVar12;
          SVar25.str = pcVar20;
          SVar34.bridgeObject = puVar15;
          SVar34.str = pcVar13;
          Swift::String::append(SVar25,SVar34);
        }
        pvVar12 = local_80;
        pcVar20 = local_88;
        if (DAT_101057340 == '\x01') {
          pcVar13 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar14 = (char *)0x7;
          _swift_allocObject();
          pcVar13[0x18] = '\x02';
          pcVar13[0x19] = '\0';
          pcVar13[0x1a] = '\0';
          pcVar13[0x1b] = '\0';
          pcVar13[0x1c] = '\0';
          pcVar13[0x1d] = '\0';
          pcVar13[0x1e] = '\0';
          pcVar13[0x1f] = '\0';
          pcVar13[0x10] = '\x01';
          pcVar13[0x11] = '\0';
          pcVar13[0x12] = '\0';
          pcVar13[0x13] = '\0';
          pcVar13[0x14] = '\0';
          pcVar13[0x15] = '\0';
          pcVar13[0x16] = '\0';
          pcVar13[0x17] = '\0';
          local_88 = (char *)0x676f4874736f505b;
          local_80 = (void *)0xea0000000000205d;
          SVar27.bridgeObject = pvVar12;
          SVar27.str = pcVar20;
          SVar36.bridgeObject = puVar15;
          SVar36.str = pcVar14;
          Swift::String::append(SVar27,SVar36);
          *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar13 + 0x20) = local_88;
          *(void **)(pcVar13 + 0x28) = local_80;
          SVar28.bridgeObject = (void *)0x20;
          SVar28.str = pcVar13;
          separator_00.bridgeObject = (void *)0xa;
          separator_00.str = (char *)0xe100000000000000;
          puVar15 = (undefined *)0xa;
          Swift::_print(SVar28,separator_00);
          _swift_release(pcVar13);
        }
        puVar18 = puVar18 + 2;
        _swift_unknownObjectRelease(puVar21);
        _swift_bridgeObjectRelease(pvVar12);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    _swift_bridgeObjectRelease(lVar4);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar9;
    _swift_bridgeObjectRelease(uVar10);
  }
  else if (DAT_101057340 == '\x01') {
    pcVar20 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar20[0x18] = '\x02';
    pcVar20[0x19] = '\0';
    pcVar20[0x1a] = '\0';
    pcVar20[0x1b] = '\0';
    pcVar20[0x1c] = '\0';
    pcVar20[0x1d] = '\0';
    pcVar20[0x1e] = '\0';
    pcVar20[0x1f] = '\0';
    pcVar20[0x10] = '\x01';
    pcVar20[0x11] = '\0';
    pcVar20[0x12] = '\0';
    pcVar20[0x13] = '\0';
    pcVar20[0x14] = '\0';
    pcVar20[0x15] = '\0';
    pcVar20[0x16] = '\0';
    pcVar20[0x17] = '\0';
    *(undefined **)(pcVar20 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar20[0x20] = 'M';
    pcVar20[0x21] = '\0';
    pcVar20[0x22] = '\0';
    pcVar20[0x23] = '\0';
    pcVar20[0x24] = '\0';
    pcVar20[0x25] = '\0';
    pcVar20[0x26] = '\0';
    pcVar20[0x27] = -0x30;
    pcVar20[0x28] = '@';
    pcVar20[0x29] = '3';
    pcVar20[0x2a] = -0x27;
    pcVar20[0x2b] = '\0';
    pcVar20[0x2c] = '\x01';
    pcVar20[0x2d] = '\0';
    pcVar20[0x2e] = '\0';
    pcVar20[0x2f] = -0x80;
    SVar22.bridgeObject = (void *)0x20;
    SVar22.str = pcVar20;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar22,separator);
    _swift_release(pcVar20);
  }
  return;
}



/* Address: 0x100151770 | FUN_100151770 */

void FUN_100151770(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  _StringGuts _Var8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long *plVar12;
  long lVar13;
  void *pvVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String separator;
  char *local_80;
  void *local_78;
  undefined1 auStack_68 [24];
  
  _Var8.unknown = (undefined *)&local_80;
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _TtC7PostHog10PostHogSDK::installedIntegrations;
  _swift_beginAccess(param_3 + _TtC7PostHog10PostHogSDK::installedIntegrations,auStack_68,0,0);
  lVar4 = *(long *)(*(long *)(param_3 + lVar2) + 0x10) + 1;
  plVar12 = (long *)(*(long *)(param_3 + lVar2) + 0x20);
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      lVar4 = param_3;
      (**(code **)(param_2 + 0x10))(param_3,lVar3,param_2);
      if (((uint)lVar4 & 0xff) != 3) {
        return;
      }
      pcVar9 = (char *)0x21;
      pvVar11 = (void *)0x0;
      _swift_beginAccess(param_3 + lVar2);
      pvVar14 = *(void **)(param_3 + lVar2);
      pvVar7 = pvVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      *(void **)(param_3 + lVar2) = pvVar14;
      pvVar6 = pvVar14;
      if (((ulong)pvVar7 & 1) == 0) {
        _Var8.unknown = (undefined *)(*(long *)((long)pvVar14 + 0x10) + 1);
        pvVar6 = (void *)0x0;
        pcVar9 = &DAT_00000001;
        FUN_100105994();
        *(void **)(param_3 + lVar2) = pvVar6;
        pvVar11 = pvVar14;
      }
      uVar1 = *(ulong *)((long)pvVar6 + 0x10);
      pvVar7 = pvVar6;
      if (*(ulong *)((long)pvVar6 + 0x18) >> 1 <= uVar1) {
        pvVar7 = (void *)(ulong)(1 < *(ulong *)((long)pvVar6 + 0x18));
        pcVar9 = &DAT_00000001;
        _Var8.unknown = (undefined1 *)(uVar1 + 1);
        FUN_100105994();
        pvVar11 = pvVar6;
      }
      *(undefined1 **)((long)pvVar7 + 0x10) = (undefined1 *)(uVar1 + 1);
      *(long *)((long)pvVar7 + uVar1 * 0x10 + 0x20) = param_1;
      *(long *)((long)pvVar7 + uVar1 * 0x10 + 0x28) = param_2;
      *(void **)(param_3 + lVar2) = pvVar7;
      _swift_endAccess(&local_80);
      local_80 = (char *)0x0;
      local_78 = (void *)0xe000000000000000;
      _swift_unknownObjectRetain(param_1);
      Swift::_StringGuts::grow(0x14,_Var8);
      _swift_bridgeObjectRelease(local_78);
      local_80 = (char *)0x7461726765746e49;
      local_78 = (void *)0xec000000206e6f69;
      _swift_getObjectType();
      SVar15 = Swift::__typeName(SUB81(param_1,0));
      SVar18.bridgeObject = pvVar11;
      SVar18.str = pcVar9;
      Swift::String::append(SVar15,SVar18);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      SVar15.bridgeObject = &DAT_e600000000000000;
      SVar15.str = (char *)0x646564646120;
      SVar19.bridgeObject = pvVar11;
      SVar19.str = pcVar9;
      Swift::String::append(SVar15,SVar19);
      pvVar7 = local_78;
      pcVar9 = local_80;
      if (DAT_101057340 == '\x01') {
        pcVar5 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar10 = (char *)0x7;
        _swift_allocObject();
        pcVar5[0x18] = '\x02';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        pcVar5[0x10] = '\x01';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
        local_80 = (char *)0x676f4874736f505b;
        local_78 = (void *)0xea0000000000205d;
        SVar16.bridgeObject = pvVar7;
        SVar16.str = pcVar9;
        SVar20.bridgeObject = pvVar11;
        SVar20.str = pcVar10;
        Swift::String::append(SVar16,SVar20);
        *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar5 + 0x20) = local_80;
        *(void **)(pcVar5 + 0x28) = local_78;
        SVar17.bridgeObject = (void *)0x20;
        SVar17.str = pcVar5;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar17,separator);
        _swift_release(pcVar5);
      }
      _swift_bridgeObjectRelease(pvVar7);
      return;
    }
    lVar13 = *plVar12;
    plVar12 = plVar12 + 2;
  } while (lVar13 != param_1);
  return;
}



/* Address: 0x1001519f8 | FUN_1001519f8 */

void FUN_1001519f8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String separator;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC7PostHog10PostHogSDK::installedIntegrations;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog10PostHogSDK::installedIntegrations,auStack_78,1);
  lVar3 = *(long *)(unaff_x20 + lVar2);
  lVar10 = *(long *)(lVar3 + 0x10);
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain();
    plVar11 = (long *)(lVar3 + 0x28);
    do {
      puVar1 = (undefined *)plVar11[-1];
      pcVar6 = (char *)*plVar11;
      _Var4.unknown = puVar1;
      _swift_getObjectType();
      pcVar9 = *(code **)(pcVar6 + 0x18);
      _swift_unknownObjectRetain(puVar1);
      (*pcVar9)();
      Swift::_StringGuts::grow(0x1a,_Var4);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar5 = puVar1;
      _swift_getObjectType();
      SVar12 = Swift::__typeName(SUB81(puVar5,0));
      SVar15.bridgeObject = pvVar8;
      SVar15.str = pcVar6;
      Swift::String::append(SVar12,SVar15);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      SVar12.bridgeObject = (void *)0xec00000064656c6c;
      SVar12.str = (char *)0x6174736e696e7520;
      SVar16.bridgeObject = pvVar8;
      SVar16.str = pcVar6;
      Swift::String::append(SVar12,SVar16);
      if (DAT_101057340 == '\x01') {
        pcVar6 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar7 = (char *)0x7;
        _swift_allocObject();
        pcVar6[0x18] = '\x02';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar6[0x10] = '\x01';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        SVar13.bridgeObject = (void *)0xec000000206e6f69;
        SVar13.str = (char *)0x7461726765746e49;
        SVar17.bridgeObject = pvVar8;
        SVar17.str = pcVar7;
        Swift::String::append(SVar13,SVar17);
        *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar6[0x20] = '[';
        pcVar6[0x21] = 'P';
        pcVar6[0x22] = 'o';
        pcVar6[0x23] = 's';
        pcVar6[0x24] = 't';
        pcVar6[0x25] = 'H';
        pcVar6[0x26] = 'o';
        pcVar6[0x27] = 'g';
        pcVar6[0x28] = ']';
        pcVar6[0x29] = ' ';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\0';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = -0x16;
        SVar14.bridgeObject = (void *)0x20;
        SVar14.str = pcVar6;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        pvVar8 = (void *)0xa;
        Swift::_print(SVar14,separator);
        _swift_release(pcVar6);
      }
      plVar11 = plVar11 + 2;
      _swift_unknownObjectRelease(puVar1);
      _swift_bridgeObjectRelease(0xec000000206e6f69);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(lVar3);
    lVar3 = *(long *)(unaff_x20 + lVar2);
  }
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(lVar3);
  return;
}



/* Address: 0x100151c28 | FUN_100151c28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100151c28(void)

{
  return ZEXT816(0x100f93fc8);
}



/* Address: 0x100151c48 | FUN_100151c48 */

void FUN_100151c48(void)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  Date DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  ID self;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  String SVar11;
  String SVar12;
  String separator;
  String separator_00;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [152];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_f0 + -extraout_x8;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar8 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = 'X';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = '@';
    pcVar3[0x29] = '\x15';
    pcVar3[0x2a] = -0x27;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar11.bridgeObject = (void *)0x20;
    SVar11.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar11,separator);
    _swift_release(pcVar3);
    return;
  }
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + lVar8);
  objc_stub::unlock(self);
  lVar8 = PostHogConfig::storageManager;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar12.bridgeObject = (void *)0x20;
      SVar12.str = pcVar3;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar12,separator_00);
      _swift_release(pcVar3);
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    puVar10 = auStack_e8;
    _swift_beginAccess(lVar7 + PostHogConfig::storageManager,puVar10,0,0);
    lVar8 = *(long *)(lVar7 + lVar8);
    if (lVar8 != 0) {
      lVar7 = lVar8;
      _swift_retain();
      FUN_10015cd34();
      _swift_release(lVar8);
      goto LAB_100151e64;
    }
  }
  lVar7 = 0;
  puVar10 = (undefined1 *)0xe000000000000000;
LAB_100151e64:
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))(puVar9,1,1,DVar4.unknown);
  lVar8 = lVar7;
  FUN_10013ec54(lVar7,puVar10,0,0,0,0,1,puVar9);
  FUN_1000fb4c4(puVar9,&DAT_100faf508,&DAT_100c2e2e0);
  puVar2 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x74636e6974736964;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb0000000064695f;
  *(long *)(puVar2 + 0x30) = lVar7;
  *(undefined1 **)(puVar2 + 0x38) = puVar10;
  *(undefined **)(puVar2 + 0x48) = puVar5;
  *(undefined8 *)(puVar2 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar2 + 0x58) = 0x8000000100d914d0;
  puVar5 = &DAT_100fae898;
  FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
  *(undefined **)(puVar2 + 0x78) = puVar5;
  *(long *)(puVar2 + 0x60) = lVar8;
  puVar6 = puVar2;
  FUN_1000f8154(puVar2);
  _swift_setDeallocating(puVar2);
  puVar5 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar5);
  FUN_1001349c8(puVar6,FUN_10010f8d4);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x100151fdc | FUN_100151fdc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001520b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100151fdc(ID param_1)

{
  long lVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  char *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined1 auStack_88 [40];
  
  IVar2 = objc_stub::notification(param_1);
  IVar2 = objc_stub::request(IVar2);
  IVar2 = objc_stub::content(IVar2);
  objc_stub::userInfo(IVar2);
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  local_b0 = 0x676f6874736f70;
  puStack_a8 = &DAT_e700000000000000;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (auStack_88,DVar3.unknown,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(DVar3.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(DVar3.unknown);
    puVar4 = auStack_88;
    FUN_1000f1290(puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      FUN_10000cbfc(*(long *)(DVar3.unknown + 0x38) + (long)puVar4 * 0x20,&local_b0);
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_100152108;
    }
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
  puStack_a8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
LAB_100152108:
  _swift_bridgeObjectRelease(DVar3.unknown);
  FUN_100089674(auStack_88);
  lVar1 = local_98;
  FUN_1000fb4c4(&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  if (lVar1 == 0) {
    SVar8 = (String)ZEXT816(0);
    SVar7 = (String)ZEXT816(0);
    SVar6 = (String)ZEXT816(0);
  }
  else {
    objc_stub::title(IVar2);
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    objc_stub::subtitle(IVar2);
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    objc_stub::body(IVar2);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_c0 = SVar6.str;
  objc_stub::userInfo(IVar2);
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  objc_stub::actionIdentifier(param_1);
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_1001522f0(local_c0,SVar6.bridgeObject,SVar7.str,SVar7.bridgeObject,SVar8.str,
                SVar8.bridgeObject,DVar3.unknown,SVar9.str);
  _swift_bridgeObjectRelease(DVar3.unknown);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  return;
}



/* Address: 0x1001522a0 | _TtC7PostHog10PostHogSDK::capturePushNotificationOpenedWithResponse: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::capturePushNotificationOpenedWithResponse_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100151fdc(param_3);
  return;
}



/* Address: 0x1001522f0 | FUN_1001522f0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100152690 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001522f0(char ******param_1,ulong param_2,char ******param_3,ulong param_4,
                  char ******param_5,ulong param_6,long param_7,_StringGuts param_8,
                  _StringGuts param_9)

{
  char *****pppppcVar1;
  byte bVar2;
  String SVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  char *****pppppcVar14;
  char *****pppppcVar15;
  char *******pppppppcVar16;
  char ******ppppppcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  ID self;
  char ******ppppppcVar22;
  ulong uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String separator;
  String separator_00;
  String SVar27;
  char *******local_140;
  char *****pppppcStack_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *******local_100;
  char *****pppppcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  char *******local_e0;
  char *****pppppcStack_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *******local_b0;
  char *****pppppcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  SVar3.bridgeObject = param_9.unknown;
  SVar3.str = param_8.unknown;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar21 = PostHogConfig::optOut;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar6 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar6[0x20] = 'X';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = '@';
    pcVar6[0x29] = '\x15';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar26.bridgeObject = (void *)0x20;
    SVar26.str = pcVar6;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar26,separator_00);
    _swift_release(pcVar6);
    return;
  }
  lVar20 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  pppppppcVar16 = (char *******)0x0;
  _swift_beginAccess(lVar20 + PostHogConfig::optOut,auStack_80,0);
  if (*(char *)(lVar20 + lVar21) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar6 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar6[0x20] = '%';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = '\0';
    pcVar6[0x29] = '\x16';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar24.bridgeObject = (void *)0x20;
    SVar24.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar24,separator);
    _swift_release(pcVar6);
    return;
  }
  pppppppcVar7 = (char *******)PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  pppppppcVar8 = pppppppcVar7;
  if (param_2 != 0) {
    uVar23 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar23 = param_2 >> 0x38 & 0xf;
    }
    if (uVar23 != 0) {
      puStack_c8 = PTR___type_metadata_for_Swift_String_100eac208;
      local_e0 = (char *******)param_1;
      pppppcStack_d8 = (char *****)param_2;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(param_2);
      pppppppcVar16 = pppppppcVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppcVar8 = (char *******)&local_b0;
      local_e0 = pppppppcVar7;
      FUN_10016fe74(pppppppcVar8,0xd000000000000013,0x8000000100d93050);
      pppppppcVar7 = local_e0;
    }
  }
  if (param_4 != 0) {
    uVar23 = (ulong)param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar23 = param_4 >> 0x38 & 0xf;
    }
    if (uVar23 != 0) {
      puStack_c8 = PTR___type_metadata_for_Swift_String_100eac208;
      local_e0 = (char *******)param_3;
      pppppcStack_d8 = (char *****)param_4;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(param_4);
      pppppppcVar16 = pppppppcVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppcVar8 = (char *******)&local_b0;
      local_e0 = pppppppcVar7;
      FUN_10016fe74(pppppppcVar8,0xd000000000000016,0x8000000100d93030);
      pppppppcVar7 = local_e0;
    }
  }
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_6 != 0) {
    uVar23 = (ulong)param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar23 = param_6 >> 0x38 & 0xf;
    }
    if (uVar23 != 0) {
      puStack_c8 = PTR___type_metadata_for_Swift_String_100eac208;
      local_e0 = (char *******)param_5;
      pppppcStack_d8 = (char *****)param_6;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(param_6);
      pppppppcVar16 = pppppppcVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppcVar8 = (char *******)&local_b0;
      local_e0 = pppppppcVar7;
      FUN_10016fe74(pppppppcVar8,0xd000000000000012,0x8000000100d93010);
      pppppppcVar7 = local_e0;
      puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    }
  }
  PTR___type_metadata_for_Swift_String_100eac208 = puVar12;
  if (param_7 == 0) {
    pppppcStack_d8 = (char *****)0x0;
    local_e0 = (char *******)0x0;
    puStack_c8 = (undefined *)0x0;
    local_d0 = 0;
    goto LAB_1001526ec;
  }
  local_e0 = (char *******)0x676f6874736f70;
  pppppcStack_d8 = (char *****)&DAT_e700000000000000;
  Swift::AnyHashable::_init
            (&local_b0,pppppppcVar8,puVar12,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(param_7 + 0x10) == 0) {
LAB_1001526d8:
    pppppcStack_d8 = (char *****)0x0;
    local_e0 = (char *******)0x0;
    puStack_c8 = (undefined *)0x0;
    local_d0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_7);
    pppppppcVar8 = (char *******)&local_b0;
    FUN_1000f1290(pppppppcVar8);
    if (((ulong)puVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_7);
      goto LAB_1001526d8;
    }
    FUN_10000cbfc(*(long *)(param_7 + 0x38) + (long)pppppppcVar8 * 0x20,&local_e0);
    _swift_bridgeObjectRelease(param_7);
  }
  FUN_100089674(&local_b0);
LAB_1001526ec:
  pppppppcVar8 = (char *******)&local_e0;
  FUN_100155674();
  pcVar6 = &DAT_100c2e4a0;
  FUN_1000fb4c4(&local_e0,&DAT_100fae668);
  if (pppppppcVar8 == (char *******)0x0) {
joined_r0x000100152aa8:
    if (param_9.unknown != (undefined *)0x0) {
      uVar23 = (ulong)param_8.unknown & 0xffffffffffff;
      if (((ulong)param_9.unknown & 0x2000000000000000) != 0) {
        uVar23 = (ulong)param_9.unknown >> 0x38 & 0xf;
      }
      if (uVar23 != 0) {
        SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar26 == SVar3) {
          _swift_bridgeObjectRelease(SVar26.bridgeObject);
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (param_8,param_9,(_StringComparisonResult)(__int8)SVar26.str);
          _swift_bridgeObjectRetain(param_9.unknown);
          _swift_bridgeObjectRelease(SVar26.bridgeObject);
          if (bVar5) {
            _swift_bridgeObjectRelease(param_9.unknown);
          }
          else {
            puStack_c8 = PTR___type_metadata_for_Swift_String_100eac208;
            local_e0 = (char *******)param_8.unknown;
            pppppcStack_d8 = (char *****)param_9.unknown;
            FUN_100011080(&local_e0,&local_b0);
            pppppppcVar16 = pppppppcVar7;
            _swift_isUniquelyReferenced_nonNull_native(pppppppcVar7);
            local_e0 = pppppppcVar7;
            FUN_10016fe74(&local_b0,0xd000000000000014,0x8000000100d92ff0,pppppppcVar16);
            pppppppcVar7 = local_e0;
          }
        }
      }
    }
    FUN_1001432c4(0xd000000000000019,0x8000000100d92fd0,pppppppcVar7);
    _swift_bridgeObjectRelease(pppppppcVar7);
    return;
  }
  uVar18 = 1L << ((ulong)*(byte *)(pppppppcVar8 + 4) & 0x3f);
  uVar23 = 0xffffffffffffffff;
  if ((*(byte *)(pppppppcVar8 + 4) & 0x3f) < 6) {
    uVar23 = ~(-1L << (uVar18 & 0x3f));
  }
  ppppppcVar22 = (char ******)(uVar23 & (ulong)pppppppcVar8[8]);
  uVar23 = uVar18 + 0x3f >> 6;
  lVar21 = 0;
  do {
    if (ppppppcVar22 == (char ******)0x0) {
      uVar18 = uVar23;
      if ((long)uVar23 <= lVar21 + 1) {
        uVar18 = lVar21 + 1;
      }
      lVar19 = uVar18 - 1;
      lVar20 = lVar21;
      do {
        lVar21 = lVar20 + 1;
        if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100152be8);
          (*pcVar4)();
        }
        if ((long)uVar23 <= lVar21) {
          ppppppcVar22 = (char ******)0x0;
          puStack_c8 = (undefined *)0x0;
          local_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          pppppcStack_d8 = (char *****)0x0;
          local_e0 = (char *******)0x0;
          goto LAB_1001527fc;
        }
        ppppppcVar22 = (pppppppcVar8 + 8)[lVar21];
        lVar20 = lVar20 + 1;
      } while (ppppppcVar22 == (char ******)0x0);
    }
    uVar18 = ((ulong)ppppppcVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 |
             ((ulong)ppppppcVar22 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    ppppppcVar22 = (char ******)((long)ppppppcVar22 - 1U & (ulong)ppppppcVar22);
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar21 << 6;
    local_e0 = (char *******)pppppppcVar8[6][uVar18 * 2];
    pppppcVar1 = (pppppppcVar8[6] + uVar18 * 2)[1];
    pppppcStack_d8 = pppppcVar1;
    FUN_10000cbfc(pppppppcVar8[7] + uVar18 * 4,&local_d0);
    _swift_bridgeObjectRetain(pppppcVar1);
    lVar19 = lVar21;
LAB_1001527fc:
    pppppcVar1 = pppppcStack_d8;
    pppppppcVar10 = local_e0;
    pppppcStack_a8 = pppppcStack_d8;
    local_b0 = local_e0;
    puStack_98 = puStack_c8;
    uStack_a0 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    if (pppppcStack_d8 == (char *****)0x0) {
      _swift_release(pppppppcVar8);
      goto joined_r0x000100152aa8;
    }
    _Var13.unknown = (undefined *)&local_e0;
    FUN_100011080(&uStack_a0);
    local_100 = (char *******)0x0;
    pppppcStack_f8 = (char *****)0xe000000000000000;
    Swift::_StringGuts::grow(0x10,_Var13);
    _swift_bridgeObjectRelease(pppppcStack_f8);
    local_100 = (char *******)0x63696669746f6e24;
    pppppcStack_f8 = (char *****)0xee005f6e6f697461;
    SVar25.bridgeObject = pppppcVar1;
    SVar25.str = (char *)pppppppcVar10;
    SVar27.bridgeObject = pppppppcVar16;
    SVar27.str = pcVar6;
    Swift::String::append(SVar25,SVar27);
    _swift_bridgeObjectRelease(pppppcVar1);
    pppppcVar1 = pppppcStack_f8;
    pppppppcVar10 = local_100;
    FUN_10000cbfc(&local_e0,&local_100);
    pppppcStack_138 = pppppcStack_f8;
    local_140 = local_100;
    local_128 = lStack_e8;
    uStack_130 = uStack_f0;
    lVar21 = lVar19;
    if (lStack_e8 == 0) {
      FUN_1000fb4c4(&local_140,&DAT_100fae668,&DAT_100c2e4a0);
      _swift_bridgeObjectRetain(pppppppcVar7);
      pppppcVar15 = pppppcVar1;
      FUN_100071370();
      _swift_bridgeObjectRelease(pppppppcVar7);
      if (((ulong)pppppcVar15 & 1) == 0) {
        FUN_100004594(&local_e0);
        _swift_bridgeObjectRelease(pppppcVar1);
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
      }
      else {
        pppppppcVar11 = pppppppcVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        local_140 = pppppppcVar7;
        if ((int)pppppppcVar11 == 0) {
          FUN_10017057c();
        }
        pppppppcVar7 = local_140;
        _swift_bridgeObjectRelease(local_140[6][(long)pppppppcVar10 * 2 + 1]);
        FUN_100011080(pppppppcVar7[7] + (long)pppppppcVar10 * 4,&local_120);
        FUN_1000d9d9c(pppppppcVar10,pppppppcVar7);
        _swift_bridgeObjectRelease(pppppcVar1);
        FUN_100004594(&local_e0);
      }
      pcVar6 = &DAT_100c2e4a0;
      FUN_1000fb4c4(&local_120,&DAT_100fae668);
    }
    else {
      FUN_100011080(&local_140,&local_120);
      pppppppcVar9 = pppppppcVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppcVar11 = pppppppcVar10;
      pppppcVar15 = pppppcVar1;
      local_140 = pppppppcVar7;
      FUN_100071370();
      uVar18 = (ulong)~(uint)pppppcVar15 & 1;
      lVar20 = (long)pppppppcVar7[2] + uVar18;
      if (SCARRY8((long)pppppppcVar7[2],uVar18)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100152bec);
        (*pcVar4)();
      }
      if ((long)pppppppcVar7[3] < lVar20) {
        FUN_100170ddc(lVar20,pppppppcVar9);
        pppppppcVar11 = pppppppcVar10;
        pppppcVar14 = pppppcVar1;
        FUN_100071370();
        if (((uint)pppppcVar15 & 1) != ((uint)pppppcVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100152c00);
          (*pcVar4)();
        }
joined_r0x000100152a80:
        if (((ulong)pppppcVar15 & 1) != 0) goto LAB_100152754;
LAB_1001529d4:
        pppppppcVar7 = local_140;
        local_140[((ulong)pppppppcVar11 >> 6) + 8] =
             (char ******)
             ((ulong)local_140[((ulong)pppppppcVar11 >> 6) + 8] |
             1L << ((ulong)pppppppcVar11 & 0x3f));
        ppppppcVar17 = local_140[6];
        ppppppcVar17[(long)pppppppcVar11 * 2] = (char *****)pppppppcVar10;
        (ppppppcVar17 + (long)pppppppcVar11 * 2)[1] = pppppcVar1;
        FUN_100011080(&local_120,local_140[7] + (long)pppppppcVar11 * 4);
        FUN_100004594(&local_e0);
        if (SCARRY8((long)pppppppcVar7[2],1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100152bf0);
          (*pcVar4)();
        }
        pppppppcVar7[2] = (char ******)((long)pppppppcVar7[2] + 1);
      }
      else {
        if (((ulong)pppppppcVar9 & 1) == 0) {
          FUN_10017057c();
          goto joined_r0x000100152a80;
        }
        if (((ulong)pppppcVar15 & 1) == 0) goto LAB_1001529d4;
LAB_100152754:
        pppppppcVar7 = local_140;
        ppppppcVar17 = local_140[7];
        FUN_100004594(ppppppcVar17 + (long)pppppppcVar11 * 4);
        FUN_100011080(&local_120,ppppppcVar17 + (long)pppppppcVar11 * 4);
        _swift_bridgeObjectRelease(pppppcVar1);
        FUN_100004594(&local_e0);
      }
    }
  } while( true );
}



/* Address: 0x100152c00 | _TtC7PostHog10PostHogSDK::capturePushNotificationOpenedWithTitle:subtitle:body:payload:action: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC7PostHog10PostHogSDK::capturePushNotificationOpenedWithTitle_subtitle_body_payload_action_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  undefined8 local_68;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_4 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_5 == 0) {
    SVar4 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_68 = SVar2.str;
  if (param_6 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_7 == 0) {
    SVar5 = (String)ZEXT816(0);
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1001522f0(local_68,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,SVar4.str,
                SVar4.bridgeObject,DVar1.unknown,SVar5.str,SVar5.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x100152d90 | _TtC7PostHog10PostHogSDK::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogSDK",0x12,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100152dbc);
  (*pcVar1)();
}



/* Address: 0x100152dbc | FUN_100152dbc */

void FUN_100152dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10000cbfc(param_2 + 2,param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return;
}



/* Address: 0x100152df4 | FUN_100152df4 */

void * FUN_100152df4(long param_1)

{
  void *pvVar1;
  byte bVar2;
  void *pvVar3;
  undefined *puVar4;
  size_t sVar5;
  void *unaff_x21;
  ulong uVar6;
  size_t sVar7;
  void *local_60;
  void *local_58 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar7 = uVar6 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar2 & 1) == 0) ||
       (sVar5 = sVar7, _swift_stdlib_isStackAllocationSafe(sVar7,8), (sVar5 & 1) == 0)) {
      _swift_slowAlloc(sVar7,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_1001539bc(local_58,sVar7,uVar6,param_1,FUN_10013fac8,0,&local_60);
      pvVar3 = local_58[0];
      if (unaff_x21 != (void *)0x0) {
        pvVar3 = local_60;
      }
      _swift_slowDealloc(sVar7,0xffffffffffffffff,0xffffffffffffffff);
      pvVar1 = pvVar3;
      goto joined_r0x000100152fc4;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar3 = (void *)((long)local_58 + (-8 - (sVar7 + 0xf & 0x3ffffffffffffff0)));
  _bzero(pvVar3,sVar7);
  FUN_10015300c(pvVar3,uVar6,param_1);
  pvVar1 = unaff_x21;
joined_r0x000100152fc4:
  if (unaff_x21 == (void *)0x0) {
    _swift_release(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100faf510;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      _swift_willThrowTypedImpl
                (&local_60,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
    pvVar3 = pvVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar3;
}



/* Address: 0x10015300c | FUN_10015300c */

void FUN_10015300c(long param_1,undefined8 param_2,long param_3)

{
  String *pSVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  String SVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  String SVar13;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  long local_58;
  
  local_58 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
  lVar8 = 0;
LAB_100153084:
  do {
    if (uVar12 == 0) {
      do {
        lVar11 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10015322c);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          FUN_1001533ac(param_1,param_2,local_58,param_3);
          return;
        }
        uVar12 = ((ulong *)(param_3 + 0x40))[lVar11];
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
      lVar11 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7);
    uVar10 = uVar7 | lVar11 << 6;
    pSVar1 = (String *)(*(long *)(param_3 + 0x30) + uVar10 * 0x10);
    _Var2.unknown = pSVar1->str;
    _Var3.unknown = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar10 * 0x20,auStack_80);
    local_b0 = _Var2.unknown;
    puStack_a8 = _Var3.unknown;
    FUN_10000cbfc(auStack_80,auStack_a0);
    _swift_bridgeObjectRetain_n(_Var3.unknown,2);
    SVar13.bridgeObject = (void *)0xe90000000000002f;
    SVar13.str = (char *)0x6572757461656624;
    bVar6 = Swift::String::hasPrefix(SVar13,SVar4);
    lVar8 = lVar11;
    if ((bVar6) ||
       (_Var2.unknown == (undefined *)0xd000000000000015 &&
        _Var3.unknown == (undefined *)0x8000000100d93230)) {
      FUN_1000fb4c4(&local_b0,&DAT_100fae908,&DAT_100c2eec0);
      FUN_100004594(auStack_80);
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x15);
      FUN_1000fb4c4(&local_b0,&DAT_100fae908,&DAT_100c2eec0);
      FUN_100004594(auStack_80);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar6) goto LAB_100153084;
    }
    uVar10 = (uVar7 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
    *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) | 1L << (uVar7 & 0x3f);
    bVar6 = SCARRY8(local_58,1);
    local_58 = local_58 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001531f0);
      (*pcVar5)();
    }
  } while( true );
}



/* Address: 0x10015322c | FUN_10015322c */

void FUN_10015322c(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long local_a0;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a0 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001533ac);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          FUN_1001533ac(param_1,param_2,local_a0,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar10 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar10 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    local_70 = *puVar4;
    uVar1 = puVar4[1];
    uStack_68 = uVar1;
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar8 * 0x20,auStack_90);
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &local_70;
    (*param_4)(puVar4,auStack_90);
    FUN_100004594(auStack_90);
    _swift_bridgeObjectRelease(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar10;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(local_a0,1);
      local_a0 = local_a0 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100153374);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Address: 0x1001533ac | FUN_1001533ac */

undefined * FUN_1001533ac(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar8 = param_4;
    }
    else {
      this = (_DictionaryStorage *)&DAT_100fae488;
      FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
      puVar8 = param_3;
      Swift::_DictionaryStorage::_allocate(this,(__int64)param_3);
      if (param_2 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *param_1;
      }
      lVar11 = 0;
      do {
        if (uVar14 == 0) {
          do {
            lVar15 = lVar11 + 1;
            if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001535e4);
              (*pcVar6)();
            }
            if (param_2 <= lVar15) {
              return puVar8;
            }
            uVar14 = param_1[lVar15];
            lVar11 = lVar11 + 1;
          } while (uVar14 == 0);
          uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
        }
        else {
          uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar15 = lVar11;
        }
        uVar10 = LZCOUNT(uVar10) | lVar15 << 6;
        pSVar1 = (String *)(*(long *)(param_4 + 0x30) + uVar10 * 0x10);
        pcVar3 = pSVar1->str;
        pvVar4 = pSVar1->bridgeObject;
        SVar5 = *pSVar1;
        FUN_10000cbfc(*(long *)(param_4 + 0x38) + uVar10 * 0x20,auStack_80);
        Swift::Hasher::init(*(__int64 *)(puVar8 + 0x28));
        _swift_bridgeObjectRetain(pvVar4);
        into.unknown = auStack_c8;
        Swift::String::hash(into,SVar5);
        uVar9 = Swift::Hasher::_finalize(into);
        uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
        uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
        uVar12 = uVar9 >> 6;
        uVar10 = -1L << (uVar9 & 0x3f) &
                 (*(ulong *)(puVar8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar7 = false;
          uVar10 = 0x3f - uVar13 >> 6;
          do {
            uVar9 = uVar12 + 1;
            if ((uVar9 == uVar10) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001535e8);
              (*pcVar6)();
            }
            uVar12 = 0;
            if (uVar9 != uVar10) {
              uVar12 = uVar9;
            }
            bVar7 = (bool)(uVar9 == uVar10 | bVar7);
          } while (*(ulong *)(puVar8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar8 + uVar12 * 8 + 0x40);
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
        *(ulong *)(puVar8 + uVar12 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar8 + uVar12 + 0x40);
        puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x30) + uVar10 * 0x10);
        *puVar2 = pcVar3;
        puVar2[1] = pvVar4;
        FUN_100011080(auStack_80,*(long *)(puVar8 + 0x38) + uVar10 * 0x20);
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
        bVar7 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001535ec);
          (*pcVar6)();
        }
        lVar11 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar8;
}



/* Address: 0x1001535ec | FUN_1001535ec */

undefined1  [16] FUN_1001535ec(char *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  String SVar11;
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar9 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  Swift::String::hash(into,SVar11);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(uVar9 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar6 & 1) == 0) {
          FUN_100166130();
        }
        uVar6 = local_98[0];
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar5 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_100007cc4(uVar5);
        *unaff_x20 = uVar6;
        goto LAB_1001536e4;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_1001536e4:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Address: 0x100153718 | thunk_FUN_10015371c */

long thunk_FUN_10015371c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10015386c);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100153868);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10015382c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      _swift_bridgeObjectRetain();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    _swift_bridgeObjectRetain();
  }
LAB_10015382c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x10015371c | FUN_10015371c */

long FUN_10015371c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10015386c);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100153868);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10015382c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      _swift_bridgeObjectRetain();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    _swift_bridgeObjectRetain();
  }
LAB_10015382c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x10015386c | FUN_10015386c */

long FUN_10015386c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001539bc);
      (*pcVar3)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar4 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001539b8);
          (*pcVar3)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10015397c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar5 = puVar1[1];
      uVar13 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar13;
      if (lVar10 == param_3) break;
      _swift_retain(uVar5);
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    _swift_retain(uVar5);
  }
LAB_10015397c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x1001539bc | FUN_1001539bc */

void FUN_1001539bc(undefined8 *param_1,void *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100153a88);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_10015322c(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100153a84);
  (*pcVar1)();
}



/* Address: 0x100153a88 | FUN_100153a88 */

void FUN_100153a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return;
}



/* Address: 0x100153abc | FUN_100153abc */

void FUN_100153abc(void)

{
  FUN_100136574();
  return;
}



/* Address: 0x100153aec | FUN_100153aec */

void FUN_100153aec(void)

{
  FUN_100136574();
  return;
}



/* Address: 0x100153b1c | FUN_100153b1c */

void FUN_100153b1c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      local_80 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      local_70 = *puVar1;
      uVar8 = puVar1[1];
      uStack_78 = uVar4;
      uStack_68 = uVar8;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar8);
      (*param_2)(&local_a0,&local_80);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar4);
      uVar8 = uStack_88;
      uVar4 = local_90;
      uVar5 = uStack_98;
      uVar11 = local_a0;
      lVar15 = *param_5;
      uVar9 = local_a0;
      uVar10 = uStack_98;
      FUN_100071370();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100153d98);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        FUN_100171098(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        FUN_100071370();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100153dac);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_100170720();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar8;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100153d9c);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar4 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRelease(uVar8);
        _swift_bridgeObjectRelease(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar4;
        puVar1[1] = uVar3;
        _swift_bridgeObjectRelease(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100153d94);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x100153dac | FUN_100153dac */

void FUN_100153dac(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [32];
  long local_a0;
  ulong *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  local_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    local_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  local_80 = local_80 & *puStack_98;
  local_a0 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  FUN_100131f64(&local_d0);
  uVar6 = local_d0;
  uVar2 = local_c8;
  do {
    if (uVar2 == 0) {
      FUN_10000c650(local_a0,puStack_98,local_90,uStack_88,local_80);
      _swift_release(param_3);
      return;
    }
    local_d0 = uVar6;
    local_c8 = uVar2;
    FUN_100011080(auStack_c0,auStack_f0);
    lVar10 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    FUN_100071370();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar9 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100153fd4);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar9) {
      FUN_100170ddc(lVar9,param_4 & 1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      FUN_100071370();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100153fe8);
        (*pcVar3)();
      }
LAB_100153f2c:
      if ((uVar5 & 1) == 0) goto LAB_100153f30;
LAB_100153e44:
      lVar9 = *param_5;
      lVar7 = uVar4 * 0x20;
      FUN_10000cbfc(*(long *)(lVar9 + 0x38) + lVar7,auStack_130);
      FUN_10000cbfc(auStack_130,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      FUN_100004594(auStack_130);
      FUN_100004594(auStack_f0);
      lVar9 = *(long *)(lVar9 + 0x38);
      FUN_100004594(lVar9 + lVar7);
      FUN_100011080(auStack_110,lVar9 + lVar7);
    }
    else {
      if ((param_4 & 1) != 0) goto LAB_100153f2c;
      FUN_10017057c();
      if ((uVar5 & 1) != 0) goto LAB_100153e44;
LAB_100153f30:
      lVar7 = *param_5;
      lVar9 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      FUN_100011080(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100153fd8);
        (*pcVar3)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    FUN_100131f64(&local_d0);
    param_4 = 1;
    uVar6 = local_d0;
    uVar2 = local_c8;
  } while( true );
}



/* Address: 0x100153fe8 | FUN_100153fe8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100153fe8(long param_1,undefined8 param_2,byte *param_3,byte *param_4,undefined *param_5,
                  undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  AutoreleaseFrequency AVar3;
  QoSClass QVar4;
  undefined7 extraout_var;
  Attributes AVar5;
  DispatchQoS DVar6;
  undefined7 extraout_var_00;
  URL UVar8;
  undefined *puVar9;
  ID IVar10;
  Date DVar11;
  char *pcVar12;
  long lVar13;
  undefined *puVar14;
  OS_dispatch_queue *this;
  undefined8 *puVar15;
  undefined8 *puVar16;
  OS_dispatch_queue *pOVar17;
  undefined **ppuVar18;
  URL UVar19;
  long lVar20;
  long extraout_x8;
  undefined1 *puVar21;
  long extraout_x8_00;
  Attributes attributes;
  long extraout_x8_01;
  long lVar22;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long unaff_x20;
  code *pcVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_1b0 [8];
  byte *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_138 [27];
  long lVar7;
  
  local_1a8 = param_4;
  local_1a0 = param_2;
  local_198 = param_5;
  AVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar20 = *(long *)(CONCAT71(extraout_var,AVar3.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  puVar21 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar5 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar5.unknown + -8) + 0x40));
  attributes.unknown = puVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar6.unknown + -8) + 0x40));
  QVar4 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,QVar4.value);
  lVar22 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  DVar6.unknown =
       attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + 0xf8) = IVar10;
  *(undefined1 *)(unaff_x20 + 0x100) = 0;
  lVar24 = DAT_100fb02f8;
  DVar11 = Foundation::Date::typeMetadataAccessor();
  pcVar23 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x38);
  (*pcVar23)(unaff_x20 + lVar24,1,1,DVar11.unknown);
  *(undefined8 *)(unaff_x20 + DAT_100fb0300) = 0;
  *(undefined8 *)(unaff_x20 + DAT_100fb0310) = 0;
  *(undefined8 *)(unaff_x20 + DAT_100fb0318) = 0;
  *(undefined1 *)(unaff_x20 + DAT_100fb0320) = 0;
  lVar24 = DAT_100fb0328;
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + lVar24) = IVar10;
  lVar24 = DAT_100fb0330;
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + lVar24) = IVar10;
  *(undefined8 *)(unaff_x20 + DAT_100fb0338) = 0;
  *(undefined1 *)(unaff_x20 + DAT_100fb0340) = 0;
  lVar24 = DAT_100fb0358;
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + lVar24) = IVar10;
  lVar24 = DAT_100fb0370;
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + lVar24) = IVar10;
  (*pcVar23)(unaff_x20 + DAT_100fb0378,1,1,DVar11.unknown);
  pbVar25 = local_1a8;
  *(undefined8 *)(unaff_x20 + DAT_100fb0380) = 0;
  *(undefined1 *)(unaff_x20 + DAT_100fb0388) = 0;
  uVar28 = *(undefined8 *)(param_3 + 0x90);
  uVar30 = *(undefined8 *)(param_3 + 0xa8);
  uVar29 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar28;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar30;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar29;
  uVar28 = *(undefined8 *)(param_3 + 0xb0);
  uVar30 = *(undefined8 *)(param_3 + 200);
  uVar29 = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xd0) = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(unaff_x20 + 200) = uVar28;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar30;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar29;
  uVar28 = *(undefined8 *)(param_3 + 0x50);
  uVar30 = *(undefined8 *)(param_3 + 0x68);
  uVar29 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar28;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar30;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar29;
  uVar28 = *(undefined8 *)(param_3 + 0x70);
  uVar30 = *(undefined8 *)(param_3 + 0x88);
  uVar29 = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar28;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar30;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar29;
  uVar30 = *(undefined8 *)(param_3 + 8);
  uVar29 = *(undefined8 *)param_3;
  uVar28 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar28;
  uVar28 = *(undefined8 *)(param_3 + 0x20);
  uVar32 = *(undefined8 *)(param_3 + 0x38);
  uVar31 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar28;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar32;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar31;
  uVar28 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar28;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar30;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar29;
  *(byte **)(unaff_x20 + DAT_100fb0308) = local_1a8;
  pcVar23 = *(code **)(param_3 + 0x40);
  ppuVar18 = local_138;
  UVar19.unknown = local_198;
  FUN_1000f8cac(param_3,ppuVar18,local_198,param_6);
  _swift_retain(pbVar25);
  lVar24 = param_1;
  (*pcVar23)();
  *(long *)(unaff_x20 + 0xe8) = lVar24;
  (**(code **)(param_3 + 0x50))(param_1);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar28;
  lVar24 = param_1;
  (**(code **)(param_3 + 0x20))();
  lVar13 = param_1;
  (**(code **)(param_3 + 0x30))();
  if (lVar24 < 2) {
    lVar24 = 1;
  }
  if (lVar13 < 2) {
    lVar13 = 1;
  }
  plVar1 = (long *)(unaff_x20 + DAT_100fb0350);
  *plVar1 = lVar24;
  plVar1[1] = lVar13;
  lVar24 = param_1;
  (**(code **)(param_3 + 0x60))();
  *(long *)(unaff_x20 + DAT_100fb0360) = lVar24;
  (**(code **)(param_3 + 0x70))(param_1);
  *(undefined8 *)(unaff_x20 + DAT_100fb0368) = uVar28;
  pcVar12 = (char *)(ulong)*param_3;
  FUN_100159c0c();
  SVar33.bridgeObject = ppuVar18;
  SVar33.str = pcVar12;
  local_198 = (undefined *)
              ((long)(DVar6.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) - extraout_x12)
  ;
  Foundation::URL::appendingPathComponent(SVar33,UVar19);
  _swift_bridgeObjectRelease(ppuVar18);
  lVar24 = *(long *)(param_3 + 8);
  puVar9 = *(undefined **)(lVar24 + 0x10);
  puVar27 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar9 != (undefined *)0x0) {
    local_138[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    UVar19.unknown = (undefined *)0x0;
    puVar14 = puVar9;
    local_1a8 = param_3;
    FUN_10010fab8(0);
    pbVar25 = (byte *)(lVar24 + 0x20);
    puVar27 = local_138[0];
    do {
      pcVar12 = (char *)(ulong)*pbVar25;
      FUN_100159c0c();
      SVar34.bridgeObject = puVar14;
      SVar34.str = pcVar12;
      Foundation::URL::appendingPathComponent(SVar34,UVar19);
      _swift_bridgeObjectRelease(puVar14);
      uVar2 = *(ulong *)(puVar27 + 0x10);
      local_138[0] = puVar27;
      if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar2) {
        FUN_10010fab8(1 < *(ulong *)(puVar27 + 0x18),uVar2 + 1,1);
      }
      puVar27 = local_138[0];
      *(ulong *)(local_138[0] + 0x10) = uVar2 + 1;
      puVar14 = DVar6.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
      UVar19 = UVar8;
      (**(code **)(lVar26 + 0x20))
                (local_138[0] +
                 *(long *)(lVar26 + 0x48) * uVar2 +
                 ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff)));
      puVar9 = puVar9 + -1;
      pbVar25 = pbVar25 + 1;
      param_3 = local_1a8;
    } while (puVar9 != (undefined *)0x0);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar13 = 0;
  FUN_100128c1c();
  _swift_allocObject();
  *(undefined **)(lVar13 + _TtC7PostHog22PostHogFileBackedQueue::items) = puVar9;
  lVar24 = _TtC7PostHog22PostHogFileBackedQueue::itemsLock;
  puVar14 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar14);
  puVar14 = local_198;
  *(ID *)(lVar13 + lVar24) = IVar10;
  (**(code **)(lVar26 + 0x10))
            (lVar13 + _TtC7PostHog22PostHogFileBackedQueue::queue,local_198,UVar8.unknown);
  FUN_100126b0c(puVar27);
  _swift_bridgeObjectRelease(puVar27);
  (**(code **)(lVar26 + 8))(puVar14,UVar8.unknown);
  *(long *)(unaff_x20 + DAT_101057300) = lVar13;
  this = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  uVar28 = *(undefined8 *)(param_3 + 0x18);
  SVar33 = *(String *)(param_3 + 0x10);
  (**(code **)(lVar22 + 0x68))
            (DVar6.unknown,
             *(undefined4 *)
              PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
             ,lVar7);
  _swift_bridgeObjectRetain(uVar28);
  (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar6.unknown);
  (**(code **)(lVar22 + 8))(DVar6.unknown,lVar7);
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_138[0] = puVar9;
  puVar15 = &DAT_100fae2f0;
  FUN_100003a00(&DAT_100fae2f0,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar9 = &DAT_100fae2f8;
  FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
  puVar16 = &DAT_100fae300;
  FUN_100155c48(&DAT_100fae300,&DAT_100fae2f8,&DAT_100c2db90);
  Swift::SetAlgebra::_init(attributes.unknown,local_138,puVar9,puVar16,AVar5.unknown,puVar15);
  (**(code **)(lVar20 + 0x68))
            (puVar21,*(undefined4 *)
                      PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar3.value));
  pOVar17 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (this,SVar33,
                       (DispatchQoS)
                       (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                       attributes,(AutoreleaseFrequency)(__int8)puVar21);
  *(OS_dispatch_queue **)(unaff_x20 + DAT_100fb0348) = pOVar17;
  return unaff_x20;
}



/* Address: 0x100154774 | FUN_100154774 */

void FUN_100154774(ulong param_1,char param_2,double param_3,char param_4,undefined *param_5,
                  code *param_6)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  _StringGuts _Var8;
  _StringGuts extraout_x1;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  long unaff_x20;
  ID IVar13;
  long lVar14;
  __int64 _Var15;
  ID self;
  long lVar16;
  double dVar17;
  double dVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String separator;
  String SVar33;
  String separator_00;
  String SVar34;
  char *local_98;
  void *local_90;
  undefined1 auStack_88 [24];
  
  if ((param_2 == '\x01' || param_1 == 0xffffffffffffffff) ||
     (uVar4 = param_1, (**(code **)(unaff_x20 + 0xd8))(), (uVar4 & 1) != 0)) {
    IVar13 = *(ID *)(unaff_x20 + 0xf8);
    objc_stub::lock(IVar13);
    lVar14 = *(long *)(unaff_x20 + DAT_100fb0300) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + DAT_100fb0300),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100154d9c);
      (*pcVar3)();
    }
    *(long *)(unaff_x20 + DAT_100fb0300) = lVar14;
    objc_stub::unlock(IVar13);
    lVar12 = PostHogConfig::maxRetries;
    lVar16 = *(long *)(unaff_x20 + 0x10);
    _Var8.unknown = auStack_88;
    pcVar9 = (char *)0x0;
    pvVar11 = (void *)0x0;
    _swift_beginAccess(lVar16 + PostHogConfig::maxRetries);
    if (lVar14 <= *(long *)(lVar16 + lVar12)) {
      dVar17 = 30.0;
      if ((double)lVar14 <= 30.0) {
        dVar17 = (double)lVar14;
      }
      dVar18 = 0.0;
      if (param_4 != '\x01') {
        dVar18 = param_3;
      }
      if (dVar18 < dVar17) {
        dVar18 = dVar17;
      }
      FUN_10013777c(dVar18);
      local_98 = (char *)0x0;
      local_90 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x42,_Var8);
      SVar19.bridgeObject = (void *)0x8000000100d93700;
      SVar19.str = (char *)0xd00000000000001e;
      SVar28.bridgeObject = pvVar11;
      SVar28.str = pcVar9;
      Swift::String::append(SVar19,SVar28);
      pcVar9 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      double::_write((undefined *)&local_98,dVar18);
      SVar21.bridgeObject = (void *)0x8000000100d93720;
      SVar21.str = (char *)0xd000000000000010;
      SVar29.bridgeObject = pvVar11;
      SVar29.str = pcVar9;
      Swift::String::append(SVar21,SVar29);
      SVar19 = Swift::CustomStringConvertible::get_description();
      SVar30.bridgeObject = pvVar11;
      SVar30.str = pcVar9;
      Swift::String::append(SVar19,SVar30);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      SVar22.bridgeObject = (void *)0x8000000100d93740;
      SVar22.str = (char *)0xd000000000000010;
      SVar31.bridgeObject = pvVar11;
      SVar31.str = pcVar9;
      Swift::String::append(SVar22,SVar31);
      pvVar7 = local_90;
      if ((DAT_101057340 & 1) != 0) {
LAB_1001549f0:
        pvVar7 = local_90;
        pcVar5 = local_98;
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar10 = (char *)0x7;
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
        local_98 = (char *)0x676f4874736f505b;
        local_90 = (void *)0xea0000000000205d;
        SVar23.bridgeObject = pvVar7;
        SVar23.str = pcVar5;
        SVar32.bridgeObject = pvVar11;
        SVar32.str = pcVar10;
        Swift::String::append(SVar23,SVar32);
        *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar9 + 0x20) = local_98;
        *(void **)(pcVar9 + 0x28) = local_90;
        SVar24.bridgeObject = (void *)0x20;
        SVar24.str = pcVar9;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar24,separator);
        _swift_release(pcVar9);
      }
LAB_100154a84:
      _swift_bridgeObjectRelease(pvVar7);
      uVar6 = 0;
      goto LAB_100154c94;
    }
    local_98 = (char *)0x0;
    local_90 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x19,_Var8);
    _swift_bridgeObjectRelease(local_90);
    local_98 = (char *)0x727465722078616d;
    local_90 = (void *)0xed00002820736569;
    SVar19 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = pvVar11;
    SVar26.str = pcVar9;
    Swift::String::append(SVar19,SVar26);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    pcVar5 = (char *)0x6465656378652029;
    pvVar7 = (void *)0xea00000000006465;
LAB_1001548bc:
    SVar20.bridgeObject = pvVar7;
    SVar20.str = pcVar5;
    SVar27.bridgeObject = pvVar11;
    SVar27.str = pcVar9;
    Swift::String::append(SVar20,SVar27);
    pvVar11 = local_90;
    FUN_100134ed0(local_98,local_90);
    _swift_bridgeObjectRelease(pvVar11);
  }
  else {
    if (param_1 == 0x19d) {
      IVar13 = *(ID *)(unaff_x20 + DAT_100fb0358);
      objc_stub::lock(IVar13);
      plVar1 = (long *)(unaff_x20 + DAT_100fb0350);
      if (*plVar1 < 2) {
        objc_stub::unlock(IVar13);
      }
      else {
        if ((ulong)param_5 >> 0x3e == 0) {
          _Var15 = *(__int64 *)((undefined *)((ulong)param_5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
          if (((ulong)param_5 & 0x8000000000000000) != 0) {
            _Var2.unknown = param_5;
          }
          _Var15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        objc_stub::unlock(IVar13);
        if (1 < _Var15) {
          self = *(ID *)(unaff_x20 + 0xf8);
          objc_stub::lock(self);
          lVar14 = *(long *)(unaff_x20 + DAT_100fb0300) + 1;
          if (SCARRY8(*(long *)(unaff_x20 + DAT_100fb0300),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100154db4);
            (*pcVar3)();
          }
          *(long *)(unaff_x20 + DAT_100fb0300) = lVar14;
          objc_stub::unlock(self);
          lVar12 = PostHogConfig::maxRetries;
          lVar16 = *(long *)(unaff_x20 + 0x10);
          _Var8.unknown = auStack_88;
          pcVar9 = (char *)0x0;
          pvVar11 = (void *)0x0;
          _swift_beginAccess(lVar16 + PostHogConfig::maxRetries);
          if (lVar14 <= *(long *)(lVar16 + lVar12)) {
            if ((ulong)param_5 >> 0x3e == 0) {
              lVar14 = *(long *)(((ulong)param_5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              _Var2.unknown = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
              if (((ulong)param_5 & 0x8000000000000000) != 0) {
                _Var2.unknown = param_5;
              }
              lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
            }
            objc_stub::lock(IVar13);
            if (*plVar1 <= lVar14) {
              lVar14 = *plVar1;
            }
            lVar12 = lVar14 / 2;
            if (lVar14 < 2) {
              lVar12 = 1;
            }
            lVar14 = lVar12;
            if (plVar1[1] / 2 <= lVar12) {
              lVar14 = plVar1[1] / 2;
            }
            if (lVar14 < 2) {
              lVar14 = 1;
            }
            *plVar1 = lVar12;
            plVar1[1] = lVar14;
            objc_stub::unlock(IVar13);
            local_98 = (char *)0x0;
            local_90 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x27,extraout_x1);
            _swift_bridgeObjectRelease(local_90);
            local_98 = (char *)0xd000000000000025;
            local_90 = (void *)0x8000000100d936a0;
            SVar19 = Swift::CustomStringConvertible::get_description();
            SVar34.bridgeObject = pvVar11;
            SVar34.str = pcVar9;
            Swift::String::append(SVar19,SVar34);
            _swift_bridgeObjectRelease(SVar19.bridgeObject);
            pvVar7 = local_90;
            if (DAT_101057340 == 1) goto LAB_1001549f0;
            goto LAB_100154a84;
          }
          local_98 = (char *)0x0;
          local_90 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x31,_Var8);
          _swift_bridgeObjectRelease(local_90);
          local_98 = (char *)0x727465722078616d;
          local_90 = (void *)0xed00002820736569;
          SVar19 = Swift::CustomStringConvertible::get_description();
          SVar33.bridgeObject = pvVar11;
          SVar33.str = pcVar9;
          Swift::String::append(SVar19,SVar33);
          _swift_bridgeObjectRelease(SVar19.bridgeObject);
          pcVar5 = (char *)0xd000000000000022;
          pvVar7 = (void *)0x8000000100d936d0;
          goto LAB_1001548bc;
        }
      }
      if (DAT_101057340 == 1) {
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
        *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar9[0x20] = '9';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = -0x30;
        pcVar9[0x28] = '`';
        pcVar9[0x29] = '6';
        pcVar9[0x2a] = -0x27;
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\x01';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = -0x80;
        SVar25.bridgeObject = (void *)0x20;
        SVar25.str = pcVar9;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar25,separator_00);
        _swift_release(pcVar9);
      }
    }
    IVar13 = *(ID *)(unaff_x20 + 0xf8);
    objc_stub::lock(IVar13);
    *(undefined8 *)(unaff_x20 + DAT_100fb0300) = 0;
    objc_stub::unlock(IVar13);
  }
  uVar6 = 1;
LAB_100154c94:
  (*param_6)(uVar6);
  return;
}



/* Address: 0x100154dcc | FUN_100154dcc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100154dcc(long param_1)

{
  ID self;
  char *pcVar1;
  String SVar2;
  String separator;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    self = *(ID *)(param_1 + 0xf8);
    objc_stub::lock(self);
    if (DAT_101057340 == '\x01') {
      pcVar1 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar1[0x18] = '\x02';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\x01';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar1[0x20] = '8';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = -0x30;
      pcVar1[0x28] = -0x30;
      pcVar1[0x29] = '9';
      pcVar1[0x2a] = -0x27;
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\x01';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = -0x80;
      SVar2.bridgeObject = (void *)0x20;
      SVar2.str = pcVar1;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar2,separator);
      _swift_release(pcVar1);
    }
    *(undefined1 *)(param_1 + 0x100) = 1;
    objc_stub::unlock(self);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100154ed0 | FUN_100154ed0 */

void FUN_100154ed0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long local_118;
  ulong local_108;
  undefined1 auStack_100 [72];
  char *local_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  local_118 = 0;
  uVar13 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  local_108 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    local_108 = ~(-1L << (uVar13 & 0x3f));
  }
  local_108 = local_108 & *(ulong *)(param_3 + 0x40);
  lVar11 = 0;
LAB_100154f7c:
  do {
    if (local_108 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100155144);
          (*pcVar8)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) {
          FUN_1001533ac(param_1,param_2,local_118,param_3);
          return;
        }
        local_108 = ((ulong *)(param_3 + 0x40))[lVar15];
        lVar11 = lVar11 + 1;
      } while (local_108 == 0);
      uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_108 = local_108 - 1 & local_108;
    }
    else {
      uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_108 = local_108 - 1 & local_108;
      lVar15 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10);
    uVar14 = uVar10 | lVar15 << 6;
    pSVar1 = (String *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar1->str;
    puVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar14 * 0x20,auStack_88);
    local_b8 = pcVar3;
    puStack_b0 = puVar5;
    FUN_10000cbfc(auStack_88,auStack_a8);
    lVar11 = lVar15;
    if (*(long *)(param_4 + 0x10) == 0) {
      _swift_bridgeObjectRetain_n(puVar5,2);
    }
    else {
      Swift::Hasher::init(*(__int64 *)(param_4 + 0x28));
      _swift_bridgeObjectRetain_n(puVar5,2);
      into.unknown = auStack_100;
      Swift::String::hash(into,SVar7);
      uVar14 = Swift::Hasher::_finalize(into);
      uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
      uVar14 = uVar14 & (uVar12 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar14 * 0x10);
          _Var4.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar5) ||
             (bVar9 = Swift::_stringCompareWithSmolCheck
                                (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar9)) {
            FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
            FUN_100004594(auStack_88);
            _swift_bridgeObjectRelease(puVar5);
            uVar14 = (uVar10 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
            *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar10 & 0x3f);
            bVar9 = SCARRY8(local_118,1);
            local_118 = local_118 + 1;
            if (bVar9) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10015510c);
              (*pcVar8)();
            }
            goto LAB_100154f7c;
          }
          uVar14 = uVar14 + 1 & ~uVar12;
        } while ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
      }
    }
    FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
    FUN_100004594(auStack_88);
    _swift_bridgeObjectRelease(puVar5);
  } while( true );
}


