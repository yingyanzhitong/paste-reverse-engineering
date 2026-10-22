/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004c23f4 | FUN_1004c23f4 */

undefined1  [16] FUN_1004c23f4(char *param_1,void *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  String SVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar3;
  
  if (param_2 == (void *)0x0) {
LAB_1004c24c0:
    uVar2 = 0;
    uVar4 = 1;
  }
  else {
    SVar5.bridgeObject = param_2;
    SVar5.str = param_1;
    SVar5 = Swift::String::lowercased(SVar5);
    puVar3 = SVar5.bridgeObject;
    if ((SVar5.str != (char *)0x70747468) || (puVar3 != &DAT_e400000000000000)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x70747468,(_StringGuts)0xe400000000000000,
                         (_StringComparisonResult)(__int8)SVar5.str);
      if (!bVar1) {
        if ((SVar5.str == (char *)0x7370747468) && (puVar3 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7370747468,(_StringGuts)0xe500000000000000,
                             (_StringComparisonResult)(__int8)SVar5.str);
          _swift_bridgeObjectRelease(puVar3);
          if (!bVar1) goto LAB_1004c24c0;
        }
        uVar4 = 0;
        uVar2 = 0x1bb;
        goto LAB_1004c24c8;
      }
    }
    _swift_bridgeObjectRelease(puVar3);
    uVar4 = 0;
    uVar2 = 0x50;
  }
LAB_1004c24c8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x1004c24d8 | FUN_1004c24d8 */

void FUN_1004c24d8(long param_1,char *param_2,void *param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  code *pcVar4;
  __int64 _Var5;
  char *pcVar6;
  ulong offsetBy;
  uint uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004c2590);
    (*pcVar4)();
  }
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2;
  _Var5 = Swift::String::get_count(SVar8);
  if (!SBORROW8(_Var5,param_1)) {
    offsetBy = _Var5 - param_1 & (_Var5 - param_1 >> 0x3f ^ 0xffffffffffffffffU);
    pcVar1 = param_2;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      pcVar1 = (char *)((ulong)param_3 >> 0x38 & 0xf);
    }
    uVar7 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if (((ulong)param_3 & 0x1000000000000000) == 0) {
      uVar7 = 1;
    }
    uVar2 = 7;
    if (uVar7 == 0) {
      uVar2 = 0xb;
    }
    pcVar6 = (char *)0xf;
    SVar10.bridgeObject = param_3;
    SVar10.str = param_2;
    Swift::String::_index((Index)0xf,offsetBy,(Index)(uVar2 | (long)pcVar1 << 0x10),SVar10);
    pcVar3 = (char *)((long)pcVar1 << 0x10 | 0xb);
    if (uVar7 != 0) {
      pcVar3 = (char *)((long)pcVar1 << 0x10 | 7);
    }
    if (((uint)offsetBy & 0xff) == 1) {
      pcVar6 = pcVar3;
    }
    SVar9.bridgeObject = param_2;
    SVar9.str = pcVar6;
    Swift::String::get_subscript((Range<Index>)0xf,SVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004c2594);
  (*pcVar4)();
}



/* Address: 0x1004c2594 | FUN_1004c2594 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1004c2594(bool param_1,bool param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  URLComponents UVar4;
  long lVar5;
  _StringGuts _Var6;
  URLComponents UVar7;
  __int64 _Var8;
  char *pcVar9;
  uint uVar10;
  _StringGuts _Var13;
  _StringGuts _Var14;
  uint uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  undefined *puVar17;
  void *pvVar18;
  long lVar19;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  String SVar24;
  String SVar25;
  String SVar27;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  undefined auStack_a0 [4];
  uint local_9c;
  char *local_98;
  _StringGuts local_90;
  uint local_84;
  char *local_80;
  _StringGuts local_78;
  String local_70;
  String SVar26;
  String SVar28;
  undefined7 extraout_var;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar3 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar3 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)puVar3 - extraout_x12;
  UVar4 = Foundation::URLComponents::typeMetadataAccessor();
  lVar22 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  puVar17 = (undefined *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar17 - extraout_x12_00;
  Foundation::URLComponents::_init(param_1);
  pcVar21 = *(code **)(lVar22 + 0x30);
  lVar5 = lVar19;
  (*pcVar21)(lVar19,1,UVar4.unknown);
  if ((int)lVar5 == 1) {
    FUN_1000fb4c4(lVar19,&DAT_100fcb380,&DAT_100c504a0);
    return false;
  }
  pcVar23 = *(code **)(lVar22 + 0x20);
  (*pcVar23)(lVar16,lVar19,UVar4.unknown);
  Foundation::URLComponents::_init(param_2);
  puVar11 = puVar3;
  (*pcVar21)(puVar3,1,UVar4.unknown);
  if ((int)puVar11 == 1) {
    (**(code **)(lVar22 + 8))(lVar16,UVar4.unknown);
    FUN_1000fb4c4(puVar3,&DAT_100fcb380,&DAT_100c504a0);
    return false;
  }
  UVar7.unknown = puVar17;
  (*pcVar23)(puVar17,puVar3,UVar4.unknown);
  Foundation::URLComponents::_get_scheme(UVar7);
  if (puVar3 == (undefined *)0x0) {
    SVar24.bridgeObject = (void *)0x0;
    SVar24.str = UVar7.unknown;
  }
  else {
    SVar27.bridgeObject = puVar3;
    SVar27.str = UVar7.unknown;
    SVar24 = Swift::String::lowercased(SVar27);
    puVar11 = SVar24.bridgeObject;
    _swift_bridgeObjectRelease();
    UVar7.unknown = puVar3;
    puVar3 = puVar11;
  }
  _Var6.unknown = SVar24.bridgeObject;
  Foundation::URLComponents::_get_scheme(UVar7);
  if (puVar3 == (undefined *)0x0) {
    SVar25.bridgeObject = (void *)0x0;
    SVar25.str = UVar7.unknown;
  }
  else {
    SVar26.bridgeObject = puVar3;
    SVar26.str = UVar7.unknown;
    SVar25 = Swift::String::lowercased(SVar26);
    puVar11 = SVar25.bridgeObject;
    _swift_bridgeObjectRelease();
    UVar7.unknown = puVar3;
    puVar3 = puVar11;
  }
  puVar11 = SVar25.bridgeObject;
  Foundation::URLComponents::_get_host(UVar7);
  if (puVar3 == (undefined *)0x0) {
    local_78.unknown = (undefined *)0x0;
    local_90.unknown = UVar7.unknown;
  }
  else {
    SVar28.bridgeObject = puVar3;
    SVar28.str = UVar7.unknown;
    SVar27 = Swift::String::lowercased(SVar28);
    puVar12 = SVar27.bridgeObject;
    local_90.unknown = SVar27.str;
    local_78.unknown = puVar12;
    _swift_bridgeObjectRelease();
    UVar7.unknown = puVar3;
    puVar3 = puVar12;
  }
  Foundation::URLComponents::_get_host(UVar7);
  if (puVar3 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    local_80 = UVar7.unknown;
  }
  else {
    SVar29.bridgeObject = puVar3;
    SVar29.str = UVar7.unknown;
    SVar27 = Swift::String::lowercased(SVar29);
    puVar20 = SVar27.bridgeObject;
    local_80 = SVar27.str;
    puVar12 = puVar20;
    _swift_bridgeObjectRelease();
    UVar7.unknown = puVar3;
  }
  Foundation::URLComponents::_get_port(UVar7);
  SVar30.bridgeObject = puVar12;
  SVar30.str = UVar7.unknown;
  if (((uint)puVar12 & 0xff) == 1) {
    SVar30 = SVar24;
    FUN_1004c23f4();
    local_84 = (uint)(((uint)SVar30.bridgeObject & 0xff) == 1);
    local_98 = SVar30.str;
  }
  else {
    local_84 = 0;
    local_98 = UVar7.unknown;
  }
  uVar10 = (uint)SVar30.bridgeObject;
  Foundation::URLComponents::_get_port((URLComponents)SVar30.str);
  UVar7.unknown = SVar30.str;
  if ((uVar10 & 0xff) == 1) {
    SVar27 = SVar25;
    FUN_1004c23f4();
    UVar7.unknown = SVar27.str;
    uVar15 = (uint)(((uint)SVar27.bridgeObject & 0xff) == 1);
    uVar10 = uVar15;
    if (_Var6.unknown != (undefined *)0x0) goto LAB_1004c2864;
LAB_1004c28a0:
    local_9c = uVar10;
    _Var6.unknown = puVar20;
    _Var14.unknown = local_78.unknown;
    _Var13.unknown = puVar11;
    if (puVar11 == (undefined *)0x0) goto LAB_1004c2904;
LAB_1004c28b8:
    _swift_bridgeObjectRelease(_Var6.unknown);
    puVar20 = _Var14.unknown;
LAB_1004c28c0:
    _swift_bridgeObjectRelease(puVar20);
  }
  else {
    uVar15 = 0;
    uVar10 = 0;
    if (_Var6.unknown == (undefined *)0x0) goto LAB_1004c28a0;
LAB_1004c2864:
    _Var14.unknown = puVar20;
    _Var13.unknown = local_78.unknown;
    if (puVar11 == (undefined *)0x0) goto LAB_1004c28b8;
    local_9c = uVar15;
    if (SVar24 != SVar25) {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar24.str,_Var6,(_StringComparisonResult)(__int8)SVar25.str);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(puVar11);
      _Var13.unknown = local_78.unknown;
      if (bVar2) goto LAB_1004c2904;
      goto LAB_1004c28c0;
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(puVar11);
LAB_1004c2904:
    _Var6.unknown = local_78.unknown;
    if (local_78.unknown == (undefined *)0x0) {
      _Var13.unknown = puVar20;
      if (puVar20 == (undefined *)0x0) goto LAB_1004c29d4;
    }
    else {
      _Var13.unknown = local_78.unknown;
      if (puVar20 != (undefined *)0x0) {
        if ((local_90.unknown == local_80) && (local_78.unknown == puVar20)) {
          _swift_bridgeObjectRelease(local_78.unknown);
          _swift_bridgeObjectRelease(puVar20);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            (local_90,local_78,(_StringComparisonResult)(__int8)local_80);
          _swift_bridgeObjectRelease(_Var6.unknown);
          _swift_bridgeObjectRelease(puVar20);
          if (!bVar2) goto LAB_1004c2958;
        }
LAB_1004c29d4:
        if ((local_84 & 1) == 0) {
          if (((local_9c & 1) == 0) && (local_98 == UVar7.unknown)) goto LAB_1004c29fc;
        }
        else if ((local_9c & 1) != 0) {
LAB_1004c29fc:
          SVar24 = Foundation::URLComponents::get_path(UVar7);
          _Var13.unknown = SVar24.bridgeObject;
          _Var6.unknown = SVar24.str;
          uVar1 = (ulong)_Var6.unknown & 0xffffffffffff;
          if (((ulong)_Var13.unknown & 0x2000000000000000) != 0) {
            uVar1 = (ulong)_Var13.unknown >> 0x38 & 0xf;
          }
          if ((uVar1 == 0) ||
             (((_Var6.unknown == (undefined *)0x2f &&
               (_Var13.unknown == (undefined *)0xe100000000000000)) ||
              (bVar2 = Swift::_stringCompareWithSmolCheck
                                 (_Var6,_Var13,(_StringComparisonResult)0x2f), bVar2)))) {
            _swift_bridgeObjectRelease();
            SVar24 = (String)(ZEXT816(0xe000000000000000) << 0x40);
            UVar7.unknown = _Var13.unknown;
          }
          else {
            UVar7.unknown = (undefined *)Swift::String::get_count(SVar24);
            if (1 < (long)UVar7.unknown) {
              SVar31.bridgeObject = (void *)0xe100000000000000;
              SVar31.str = (char *)0x2f;
              _Var14.unknown = _Var13.unknown;
              bVar2 = Swift::String::hasSuffix(SVar31,SVar24);
              UVar7.unknown = (undefined *)CONCAT71(extraout_var,bVar2);
              if (bVar2) {
                _swift_bridgeObjectRetain(_Var13.unknown);
                pcVar9 = &DAT_00000001;
                UVar7.unknown = _Var14.unknown;
                FUN_1004c24d8(1,_Var6.unknown,_Var13.unknown);
                _swift_bridgeObjectRelease(_Var13.unknown);
                SVar32.bridgeObject = _Var6.unknown;
                SVar32.str = pcVar9;
                SVar24 = Swift::String::__fromSubstring(SVar32);
                _swift_bridgeObjectRelease(_Var13.unknown);
                _swift_bridgeObjectRelease();
              }
            }
          }
          pvVar18 = SVar24.bridgeObject;
          SVar27 = Foundation::URLComponents::get_path(UVar7);
          _Var13.unknown = SVar27.bridgeObject;
          _Var6.unknown = SVar27.str;
          uVar1 = (ulong)_Var6.unknown & 0xffffffffffff;
          if (((ulong)_Var13.unknown & 0x2000000000000000) != 0) {
            uVar1 = (ulong)_Var13.unknown >> 0x38 & 0xf;
          }
          if (((uVar1 == 0) ||
              ((_Var6.unknown == (undefined *)0x2f &&
               (_Var13.unknown == (undefined *)0xe100000000000000)))) ||
             (bVar2 = Swift::_stringCompareWithSmolCheck(_Var6,_Var13,(_StringComparisonResult)0x2f)
             , bVar2)) {
            _swift_bridgeObjectRelease(_Var13.unknown);
            SVar27 = (String)(ZEXT816(0xe000000000000000) << 0x40);
          }
          else {
            _Var8 = Swift::String::get_count(SVar27);
            if ((1 < _Var8) &&
               (SVar33.bridgeObject = (void *)0xe100000000000000, SVar33.str = (char *)0x2f,
               _Var14.unknown = _Var13.unknown, bVar2 = Swift::String::hasSuffix(SVar33,SVar27),
               bVar2)) {
              _swift_bridgeObjectRetain(_Var13.unknown);
              pcVar9 = &DAT_00000001;
              FUN_1004c24d8(1,_Var6.unknown,_Var13.unknown);
              local_78.unknown = _Var6.unknown;
              _swift_bridgeObjectRelease(_Var13.unknown);
              SVar34.bridgeObject = local_78.unknown;
              SVar34.str = pcVar9;
              SVar27 = Swift::String::__fromSubstring(SVar34);
              _swift_bridgeObjectRelease(_Var13.unknown);
              _swift_bridgeObjectRelease(_Var14.unknown);
            }
          }
          _Var6.unknown = SVar27.bridgeObject;
          uVar1 = (ulong)SVar24.str & 0xffffffffffff;
          if (((ulong)pvVar18 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)pvVar18 >> 0x38 & 0xf;
          }
          if (((uVar1 != 0) && (SVar24 != SVar27)) &&
             (SVar25 = SVar24,
             bVar2 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)SVar27.str,_Var6,
                                (_StringComparisonResult)(__int8)SVar24.str), !bVar2)) {
            local_70 = SVar24;
            _swift_bridgeObjectRetain(pvVar18);
            SVar35.bridgeObject = (void *)0xe100000000000000;
            SVar35.str = (char *)0x2f;
            Swift::String::append(SVar35,SVar25);
            _swift_bridgeObjectRelease(pvVar18);
            pvVar18 = local_70.bridgeObject;
            bVar2 = Swift::String::hasPrefix(local_70,SVar27);
            _swift_bridgeObjectRelease(pvVar18);
            _swift_bridgeObjectRelease(_Var6.unknown);
            pcVar21 = *(code **)(lVar22 + 8);
            (*pcVar21)(puVar17,UVar4.unknown);
            (*pcVar21)(lVar16,UVar4.unknown);
            return bVar2;
          }
          _swift_bridgeObjectRelease(pvVar18);
          _swift_bridgeObjectRelease(_Var6.unknown);
          pcVar21 = *(code **)(lVar22 + 8);
          (*pcVar21)(puVar17,UVar4.unknown);
          (*pcVar21)(lVar16,UVar4.unknown);
          return true;
        }
        goto LAB_1004c2958;
      }
    }
  }
  _swift_bridgeObjectRelease(_Var13.unknown);
LAB_1004c2958:
  pcVar21 = *(code **)(lVar22 + 8);
  (*pcVar21)(puVar17,UVar4.unknown);
  (*pcVar21)(lVar16,UVar4.unknown);
  return false;
}



/* Address: 0x1004c2cc4 | FUN_1004c2cc4 */

undefined * FUN_1004c2cc4(bool param_1)

{
  ulong uVar1;
  URL UVar2;
  CharacterSet CVar3;
  URLComponents UVar4;
  URLComponents UVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  void *pvVar15;
  URLComponents *pUVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x13;
  URLComponents *pUVar17;
  CharacterSet in;
  code *pcVar18;
  URLComponents UVar19;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  URLComponents local_130;
  undefined *local_128;
  long local_120;
  char *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  void *local_e0;
  long local_d8;
  URLComponents *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  void *local_a0;
  URLComponents *local_98;
  URLComponents *local_90;
  URLComponents *local_88;
  URLComponents *local_80;
  String local_78;
  void *pvVar12;
  
  puVar11 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  pvVar15 = (void *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_e0 = pvVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)pvVar15 - extraout_x12;
  local_f8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar15 = (void *)(lVar14 - extraout_x12_00);
  local_a0 = pvVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)pvVar15 - extraout_x12_01;
  local_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_02;
  local_c0 = lVar14;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  puVar20 = *(undefined **)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(puVar20 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_03;
  local_d8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_04;
  local_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_05;
  local_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_06;
  local_100 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_07;
  local_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_08;
  local_a8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_09;
  local_b8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_10;
  local_c8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_11;
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar22 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  in.unknown = (undefined *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar19.unknown = in.unknown + -extraout_x8_02;
  UVar4 = Foundation::URLComponents::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  local_d0 = (URLComponents *)(UVar19.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)
            ((long)(UVar19.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) -
            extraout_x12_12);
  local_98 = pUVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)((long)pUVar16 - extraout_x12_13);
  local_90 = pUVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)((long)pUVar16 - extraout_x12_14);
  local_88 = pUVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)((long)pUVar16 - extraout_x12_15);
  local_80 = pUVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)((long)pUVar16 - extraout_x12_16);
  Foundation::URLComponents::_init(param_1);
  puVar11 = UVar19.unknown;
  (**(code **)(extraout_x13 + 0x30))(UVar19.unknown,1,UVar4.unknown);
  if ((int)puVar11 == 1) {
    FUN_1000fb4c4(UVar19.unknown,&DAT_100fcb380,&DAT_100c504a0);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  UVar5.unknown = (undefined *)pUVar16;
  (**(code **)(extraout_x13 + 0x20))(pUVar16,UVar19.unknown,UVar4.unknown);
  Foundation::URLComponents::_get_scheme(UVar5);
  if (UVar19.unknown == (undefined *)0x0) {
    pcVar18 = *(code **)(extraout_x13 + 8);
  }
  else {
    SVar24.bridgeObject = UVar19.unknown;
    SVar24.str = UVar5.unknown;
    local_128 = UVar2.unknown;
    local_118 = (char *)UVar4;
    SVar24 = Swift::String::lowercased(SVar24);
    pvVar12 = SVar24.bridgeObject;
    pcVar6 = SVar24.str;
    pvVar15 = pvVar12;
    _swift_bridgeObjectRelease();
    Foundation::URLComponents::_get_host(UVar19);
    if (pvVar15 == (void *)0x0) {
      _swift_bridgeObjectRelease(pvVar12);
      pcVar18 = *(code **)(extraout_x13 + 8);
      UVar4.unknown = local_118;
    }
    else {
      SVar25.bridgeObject = pvVar15;
      SVar25.str = UVar19.unknown;
      local_130.unknown = puVar20;
      local_120 = extraout_x13;
      SVar24 = Swift::String::lowercased(SVar25);
      _swift_bridgeObjectRelease(pvVar15);
      puVar11 = SVar24.bridgeObject;
      FUN_1004c1c40(pcVar6,pvVar12,SVar24.str);
      _swift_bridgeObjectRelease(pvVar12);
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
      if (((ulong)pcVar6 & 1) != 0) {
        pUVar17 = pUVar16;
        Foundation::URLComponents::_set_query(pUVar16);
        UVar4.unknown = (undefined *)0x0;
        Foundation::URLComponents::_set_fragment(pUVar17);
        local_78 = Foundation::URLComponents::get_path(UVar4);
        pvVar15 = local_78.bridgeObject;
        Foundation::CharacterSet::_init();
        FUN_1004b8f18();
        SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        SVar27.bridgeObject = SVar24.bridgeObject;
        (**(code **)(lVar22 + 8))(in.unknown,CVar3.unknown);
        _swift_bridgeObjectRelease(pvVar15);
        pUVar17 = local_80;
        pcVar6 = local_118;
        uVar1 = (ulong)SVar24.str & 0xffffffffffff;
        if (((ulong)SVar27.bridgeObject & 0x2000000000000000) != 0) {
          uVar1 = (ulong)SVar27.bridgeObject >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(SVar27.bridgeObject);
          pUVar17 = local_98;
          pcVar18 = *(code **)(local_120 + 0x10);
          (*pcVar18)(local_98,pUVar16,pcVar6);
          UVar4.unknown = (undefined *)0xd000000000000027;
          SVar26.bridgeObject = (void *)0x8000000100da71c0;
          SVar26.str = (char *)0xd000000000000027;
          Foundation::URLComponents::set_path(pUVar17,SVar26);
          lVar14 = local_f8;
          Foundation::URLComponents::_get_url(UVar4);
          puVar11 = local_128;
          UVar4.unknown = local_130.unknown;
          pcVar23 = *(code **)(local_130.unknown + 0x30);
          lVar7 = lVar14;
          (*pcVar23)(lVar14,1,local_128);
          lVar22 = local_f0;
          if ((int)lVar7 == 1) {
            FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
            puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
            pvVar15 = local_e0;
          }
          else {
            pcVar21 = *(code **)(UVar4.unknown + 0x20);
            (*pcVar21)(local_f0,lVar14,puVar11);
            (**(code **)(UVar4.unknown + 0x10))(local_e8,lVar22,puVar11);
            puVar8 = (undefined *)0x0;
            FUN_1004a4640(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
            pvVar15 = local_e0;
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar20 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_1004a4640(puVar20,uVar1 + 1,1,puVar8);
            }
            UVar4.unknown = local_130.unknown;
            *(ulong *)(puVar20 + 0x10) = uVar1 + 1;
            (*pcVar21)(puVar20 + *(long *)(local_130.unknown + 0x48) * uVar1 +
                                 ((ulong)(byte)local_130.unknown[0x50] + 0x20 &
                                 ((ulong)(byte)local_130.unknown[0x50] ^ 0xffffffffffffffff)),
                       local_e8,puVar11);
            (**(code **)(UVar4.unknown + 8))(local_f0,puVar11);
          }
          pUVar17 = local_d0;
          (*pcVar18)(local_d0,pUVar16,pcVar6);
          UVar19.unknown = (undefined *)0xd000000000000021;
          SVar30.bridgeObject = (void *)0x8000000100daa870;
          SVar30.str = (char *)0xd000000000000021;
          Foundation::URLComponents::set_path(pUVar17,SVar30);
          Foundation::URLComponents::_get_url(UVar19);
          pvVar12 = pvVar15;
          (*pcVar23)(pvVar15,1,puVar11);
          lVar14 = local_d8;
          if ((int)pvVar12 != 1) {
            pcVar18 = *(code **)(UVar4.unknown + 0x20);
            (*pcVar18)(local_d8,pvVar15,puVar11);
            lVar22 = local_110;
            (**(code **)(UVar4.unknown + 0x10))(local_110,lVar14,puVar11);
            puVar8 = puVar20;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar10 = puVar20;
            if (((ulong)puVar8 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              FUN_1004a4640(0,*(long *)(puVar20 + 0x10) + 1,1,puVar20);
            }
            uVar1 = *(ulong *)(puVar10 + 0x10);
            puVar20 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
              puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              FUN_1004a4640(puVar20,uVar1 + 1,1,puVar10);
            }
            *(ulong *)(puVar20 + 0x10) = uVar1 + 1;
            (*pcVar18)(puVar20 + *(long *)(UVar4.unknown + 0x48) * uVar1 +
                                 ((ulong)(byte)UVar4.unknown[0x50] + 0x20 &
                                 ((ulong)(byte)UVar4.unknown[0x50] ^ 0xffffffffffffffff)),lVar22,
                       puVar11);
            (**(code **)(UVar4.unknown + 8))(local_d8,puVar11);
            pcVar18 = *(code **)(local_120 + 8);
            (*pcVar18)(local_d0,pcVar6);
            (*pcVar18)(local_98,pcVar6);
            (*pcVar18)(pUVar16,pcVar6);
            return puVar20;
          }
          pcVar18 = *(code **)(local_120 + 8);
          (*pcVar18)(pUVar17,pcVar6);
          (*pcVar18)(local_98,pcVar6);
          (*pcVar18)(pUVar16,pcVar6);
        }
        else {
          pcVar23 = *(code **)(local_120 + 0x10);
          (*pcVar23)(local_80,pUVar16);
          local_78.bridgeObject = (void *)0x8000000100daa810;
          local_78.str = (char *)0xd000000000000028;
          SVar31.bridgeObject = puVar11;
          SVar31.str = pcVar6;
          local_98 = (URLComponents *)SVar24.str;
          Swift::String::append(SVar24,SVar31);
          UVar4.unknown = local_78.str;
          Foundation::URLComponents::set_path(pUVar17,local_78);
          lVar22 = local_c0;
          Foundation::URLComponents::_get_url(UVar4);
          puVar8 = local_128;
          UVar4.unknown = local_130.unknown;
          pcVar18 = *(code **)(local_130.unknown + 0x30);
          lVar7 = lVar22;
          (*pcVar18)(lVar22,1,local_128);
          local_d0 = pUVar16;
          if ((int)lVar7 == 1) {
            FUN_1000fb4c4(lVar22,&DAT_100fcb378,&DAT_100c50170);
            puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
            pvVar15 = local_a0;
          }
          else {
            pcVar21 = *(code **)(UVar4.unknown + 0x20);
            (*pcVar21)(lVar14,lVar22,puVar8);
            (**(code **)(UVar4.unknown + 0x10))(local_c8,lVar14,puVar8);
            puVar8 = (undefined *)0x0;
            puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_1004a4640(0,1,1);
            pvVar15 = local_a0;
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar20 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_1004a4640(puVar20,uVar1 + 1,1);
              puVar11 = puVar8;
            }
            puVar8 = local_128;
            UVar4.unknown = local_130.unknown;
            *(ulong *)(puVar20 + 0x10) = uVar1 + 1;
            (*pcVar21)(puVar20 + *(long *)(local_130.unknown + 0x48) * uVar1 +
                                 ((ulong)(byte)local_130.unknown[0x50] + 0x20 &
                                 ((ulong)(byte)local_130.unknown[0x50] ^ 0xffffffffffffffff)),
                       local_c8,local_128);
            (**(code **)(UVar4.unknown + 8))(lVar14,puVar8);
            pUVar16 = local_d0;
          }
          pUVar17 = local_88;
          pcVar6 = local_118;
          (*pcVar23)(local_88,pUVar16);
          local_78.bridgeObject = (void *)0x8000000100daa840;
          local_78.str = (char *)0xd000000000000022;
          SVar27.str = (char *)local_98;
          SVar32.bridgeObject = puVar11;
          SVar32.str = pcVar6;
          local_a0 = SVar27.bridgeObject;
          Swift::String::append(SVar27,SVar32);
          UVar4.unknown = local_78.str;
          Foundation::URLComponents::set_path(pUVar17,local_78);
          lVar22 = local_b0;
          Foundation::URLComponents::_get_url(UVar4);
          lVar7 = lVar22;
          (*pcVar18)(lVar22,1,puVar8);
          pUVar16 = local_90;
          lVar14 = local_b8;
          UVar4.unknown = local_130.unknown;
          if ((int)lVar7 == 1) {
            FUN_1000fb4c4(lVar22,&DAT_100fcb378,&DAT_100c50170);
          }
          else {
            pcVar21 = *(code **)(local_130.unknown + 0x20);
            (*pcVar21)(local_b8,lVar22,puVar8);
            (**(code **)(UVar4.unknown + 0x10))(local_a8,lVar14,puVar8);
            puVar10 = puVar20;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar20;
            if (((ulong)puVar10 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_1004a4640(0,*(long *)(puVar20 + 0x10) + 1,1);
              puVar11 = puVar20;
            }
            uVar1 = *(ulong *)(puVar9 + 0x10);
            puVar20 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
              puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_1004a4640(puVar20,uVar1 + 1,1);
              puVar11 = puVar9;
            }
            UVar4.unknown = local_130.unknown;
            *(ulong *)(puVar20 + 0x10) = uVar1 + 1;
            (*pcVar21)(puVar20 + *(long *)(local_130.unknown + 0x48) * uVar1 +
                                 ((ulong)(byte)local_130.unknown[0x50] + 0x20 &
                                 ((ulong)(byte)local_130.unknown[0x50] ^ 0xffffffffffffffff)),
                       local_a8,puVar8);
            (**(code **)(UVar4.unknown + 8))(local_b8,puVar8);
          }
          pUVar17 = local_d0;
          pcVar6 = local_118;
          pcVar13 = local_118;
          (*pcVar23)(pUVar16,local_d0);
          pvVar12 = local_a0;
          local_78.bridgeObject = (void *)0xe100000000000000;
          local_78.str = (char *)0x2f;
          SVar28.bridgeObject = local_a0;
          SVar28.str = (char *)local_98;
          SVar33.bridgeObject = puVar11;
          SVar33.str = pcVar13;
          Swift::String::append(SVar28,SVar33);
          _swift_bridgeObjectRelease(pvVar12);
          SVar29.bridgeObject = (void *)0x8000000100daa870;
          SVar29.str = (char *)0xd000000000000021;
          SVar34.bridgeObject = puVar11;
          SVar34.str = pcVar13;
          Swift::String::append(SVar29,SVar34);
          UVar4.unknown = local_78.str;
          Foundation::URLComponents::set_path(pUVar16,local_78);
          Foundation::URLComponents::_get_url(UVar4);
          pvVar12 = pvVar15;
          (*pcVar18)(pvVar15,1,puVar8);
          lVar14 = local_108;
          UVar4.unknown = local_130.unknown;
          if ((int)pvVar12 != 1) {
            pcVar18 = *(code **)(local_130.unknown + 0x20);
            (*pcVar18)(local_108,pvVar15,puVar8);
            lVar22 = local_100;
            (**(code **)(UVar4.unknown + 0x10))(local_100,lVar14,puVar8);
            puVar11 = puVar20;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar10 = puVar20;
            if (((ulong)puVar11 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              FUN_1004a4640(0,*(long *)(puVar20 + 0x10) + 1,1,puVar20);
            }
            pUVar16 = local_d0;
            uVar1 = *(ulong *)(puVar10 + 0x10);
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              FUN_1004a4640(puVar11,uVar1 + 1,1,puVar10);
            }
            *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
            (*pcVar18)(puVar11 + *(long *)(UVar4.unknown + 0x48) * uVar1 +
                                 ((ulong)(byte)UVar4.unknown[0x50] + 0x20 &
                                 ((ulong)(byte)UVar4.unknown[0x50] ^ 0xffffffffffffffff)),lVar22,
                       puVar8);
            (**(code **)(UVar4.unknown + 8))(lVar14,puVar8);
            pcVar6 = local_118;
            pcVar18 = *(code **)(local_120 + 8);
            (*pcVar18)(local_90,local_118);
            (*pcVar18)(local_88,pcVar6);
            (*pcVar18)(local_80,pcVar6);
            (*pcVar18)(pUVar16,pcVar6);
            return puVar11;
          }
          pcVar18 = *(code **)(local_120 + 8);
          (*pcVar18)(pUVar16,pcVar6);
          (*pcVar18)(local_88,pcVar6);
          (*pcVar18)(local_80,pcVar6);
          (*pcVar18)(pUVar17,pcVar6);
        }
        FUN_1000fb4c4(pvVar15,&DAT_100fcb378,&DAT_100c50170);
        return puVar20;
      }
      pcVar18 = *(code **)(local_120 + 8);
      UVar4.unknown = local_118;
    }
  }
  (*pcVar18)(pUVar16,UVar4.unknown);
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x1004c3a1c | FUN_1004c3a1c */

Set<undefined> FUN_1004c3a1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1004c12b4(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1004c3ab0 | FUN_1004c3ab0 */

undefined * FUN_1004c3ab0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  String SVar14;
  
  _swift_bridgeObjectRetain(param_2);
  lVar7 = 0x7fffffffffffffff;
  FUN_1004c0730(0x7fffffffffffffff,1,param_1,param_2);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar11 = *(ulong *)(lVar7 + 0x10);
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease();
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1004d6e0c(0,uVar11,0);
    uVar12 = 0;
    puVar13 = (undefined8 *)(lVar7 + 0x38);
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004c3ce8);
        (*pcVar6)();
      }
      SVar14 = *(String *)(puVar13 + -3);
      uVar3 = *puVar13;
      _swift_bridgeObjectRetain(uVar3);
      SVar14 = Swift::String::__fromSubstring(SVar14);
      _swift_bridgeObjectRelease(uVar3);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_1004d6e0c(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(String *)(puVar9 + uVar1 * 0x10 + 0x20) = SVar14;
      puVar13 = puVar13 + 4;
    } while (uVar11 != uVar12);
    _swift_bridgeObjectRelease(lVar7);
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar11 = 0;
  uVar12 = *(ulong *)(puVar9 + 0x10);
  do {
    puVar10 = (ulong *)(puVar9 + uVar11 * 0x10 + 0x28);
    do {
      if (uVar12 == uVar11) {
        _swift_bridgeObjectRelease(puVar9);
        puVar9 = puVar5;
        FUN_1004c3a1c(puVar5);
        _swift_release(puVar5);
        return puVar9;
      }
      if (*(ulong *)(puVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004c3ce4);
        (*pcVar6)();
      }
      uVar2 = puVar10[-1];
      uVar4 = *puVar10;
      puVar10 = puVar10 + 2;
      uVar11 = uVar11 + 1;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    _swift_bridgeObjectRetain(uVar4);
    puVar8 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar8 & 1) == 0) {
      FUN_1004d6e0c(0,*(long *)(puVar5 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      FUN_1004d6e0c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar5 + uVar1 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puVar5 + uVar1 * 0x10 + 0x28) = uVar4;
  } while( true );
}



/* Address: 0x1004c3ce8 | FUN_1004c3ce8 */

void FUN_1004c3ce8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  CharacterSet CVar4;
  CharacterSet CVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  undefined *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  String SVar14;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(CVar4.unknown + -8) + 0x40));
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar11 = *(ulong *)(param_3 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar11 != 0) {
      uVar13 = 0;
      local_88 = -uVar11;
      local_98 = uVar11;
      local_80 = extraout_x12;
      do {
        uVar2 = uVar13;
        if (uVar13 <= uVar11) {
          uVar2 = uVar11;
        }
        puVar12 = (undefined8 *)(param_3 + 0x28 + uVar13 * 0x10);
        uVar13 = uVar13 + 1;
        local_90 = puVar10;
        while( true ) {
          if (uVar13 - uVar2 == 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1004c3f20);
            (*pcVar3)();
          }
          uVar1 = puVar12[-1];
          puVar10 = (undefined *)*puVar12;
          CVar5.unknown = puVar10;
          local_78 = uVar1;
          puStack_70 = puVar10;
          _swift_bridgeObjectRetain();
          Foundation::CharacterSet::get_whitespaces(CVar5);
          FUN_1004b8f18();
          SVar14 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                             ((CharacterSet)
                              (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
          pvVar8 = SVar14.bridgeObject;
          (**(code **)(local_80 + 8))
                    (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar4.unknown);
          _swift_bridgeObjectRelease(pvVar8);
          puVar7 = local_90;
          uVar11 = (ulong)SVar14.str & 0xffffffffffff;
          if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
            uVar11 = (ulong)pvVar8 >> 0x38 & 0xf;
          }
          if (uVar11 != 0) break;
          _swift_bridgeObjectRelease(puVar10);
          uVar13 = uVar13 + 1;
          puVar12 = puVar12 + 2;
          puVar10 = local_90;
          if (local_88 + uVar13 == 1) goto LAB_1004c3ed4;
        }
        puVar6 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1004d6e0c(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar11 = local_98;
        uVar2 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar2) {
          FUN_1004d6e0c(1 < *(ulong *)(local_68 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar2 + 1;
        *(undefined8 *)(local_68 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined **)(local_68 + uVar2 * 0x10 + 0x28) = puVar10;
        puVar10 = local_68;
      } while (local_88 + uVar13 != 0);
    }
LAB_1004c3ed4:
    puVar7 = puVar10;
    FUN_1004c3a1c();
    _swift_release(puVar10);
    lVar9 = *(long *)(puVar7 + 0x10);
  }
  else {
    FUN_1004c3ab0();
    lVar9 = *(long *)(param_1 + 0x10);
  }
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease();
  }
  return;
}



/* Address: 0x1004c3f20 | FUN_1004c3f20 */

undefined1  [16] FUN_1004c3f20(void)

{
  return ZEXT816(0x100ed9d38);
}



/* Address: 0x1004c3f30 | FUN_1004c3f30 */

undefined1  [16] FUN_1004c3f30(void)

{
  return ZEXT816(0x100ed9d58);
}



/* Address: 0x1004c3f40 | thunk_FUN_100004594 */

void thunk_FUN_100004594(void)

{
  FUN_100004594();
  return;
}



/* Address: 0x1004c3f44 | FUN_1004c3f44 */

long FUN_1004c3f44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



/* Address: 0x1004c3f88 | FUN_1004c3f88 */

long FUN_1004c3f88(long param_1,long param_2)

{
  FUN_10008820c();
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



/* Address: 0x1004c3fb8 | FUN_1004c3fb8 */

void FUN_1004c3fb8(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1004c3fcc | FUN_1004c3fcc */

undefined8 * FUN_1004c3fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1004c400c | FUN_1004c400c */

int FUN_1004c400c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004c4054 | FUN_1004c4054 */

void FUN_1004c4054(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004c40a0 | FUN_1004c40a0 */

undefined1  [16] FUN_1004c40a0(void)

{
  return ZEXT816(0x100ed9dd0);
}



/* Address: 0x1004c40b0 | FUN_1004c40b0 */

void FUN_1004c40b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  URLRequest_conflict UVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar3.unknown;
  lVar6 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = UVar4.unknown;
  lVar6 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar5;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar5;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_1004c418c,0,0);
  return;
}



/* Address: 0x1004c418c | FUN_1004c418c */

tuple2_conflict7 FUN_1004c418c(void)

{
  URLRequest *this;
  uint uVar1;
  JSONDecoder *pJVar2;
  long *plVar3;
  NSURLResponse *pNVar4;
  Data UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  URL url;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  String SVar15;
  tuple2_conflict7 tVar16;
  tuple2_conflict7 tVar17;
  
  lVar7 = *(long *)(unaff_x22 + 0x60);
  pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONDecoder::init(pJVar2);
  *(JSONDecoder **)(unaff_x22 + 200) = pJVar2;
  lVar7 = *(long *)(lVar7 + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  lVar12 = *(long *)(unaff_x22 + 0xa0);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar12 + 0x50);
    *(uint *)(unaff_x22 + 0x34) = uVar1;
    uVar6 = (ulong)uVar1 & 0xff;
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar12 + 0x48);
    pcVar14 = *(code **)(lVar12 + 0x10);
    *(code **)(unaff_x22 + 0xe0) = pcVar14;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    url.unknown = *(undefined **)(unaff_x22 + 0xb0);
    this = *(URLRequest **)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
    (*pcVar14)(uVar9,*(long *)(unaff_x22 + 0x60) + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff)),
               uVar10);
    (**(code **)(lVar12 + 0x20))(uVar8,uVar9,uVar10);
    (*pcVar14)(url.unknown,uVar8,uVar10);
    Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
    Foundation::URLRequest::_set_httpMethod(this);
    SVar15.bridgeObject = (void *)0x8000000100d8fc90;
    SVar15.str = (char *)0xd000000000000010;
    Foundation::URLRequest::_setValue(SVar15,(URLRequest_conflict)0x747065636341);
    plVar3 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1004c44e0;
    tVar16 = (extension_Foundation)::__C::NSURLSession::_data
                       ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x90));
    return tVar16;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x68),uVar8,&DAT_100fcb378,&DAT_100c50170);
  (**(code **)(lVar12 + 0x30))(uVar8,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  if ((int)uVar8 == 1) {
    pNVar4 = *(NSURLResponse **)(unaff_x22 + 0x78);
    FUN_1000fb4c4(pNVar4,&DAT_100fcb378,&DAT_100c50170);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,pNVar4,0,0);
    *(undefined8 *)pNVar4 = 1;
    *(undefined8 *)(pNVar4 + 8) = 0;
    *(undefined8 *)(pNVar4 + 0x10) = 0;
    *(undefined8 *)(pNVar4 + 0x18) = 0;
    pNVar4[0x20] = (NSURLResponse)0xe;
    _swift_willThrow();
    _swift_release(uVar9);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar13);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004c43f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar17._ = pNVar4;
    tVar17._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar17;
  }
  lVar7 = *(long *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  pcVar14 = *(code **)(lVar7 + 0x20);
  (*pcVar14)(uVar8,*(undefined8 *)(unaff_x22 + 0x78),uVar10);
  _swift_release(uVar9);
  puVar5 = &DAT_100fcb4a0;
  FUN_1000f7830(&DAT_100fcb4a0,&DAT_100c502f0);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  (*pcVar14)(puVar5 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff)),uVar8,uVar10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
  UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x0;
  pNVar4 = (NSURLResponse *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001004c44dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,puVar5,0);
  tVar16._ = pNVar4;
  tVar16._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar16;
}



/* Address: 0x1004c44e0 | FUN_1004c44e0 */

void FUN_1004c44e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xf8) = param_1;
  *(undefined8 *)(lVar2 + 0x100) = param_2;
  *(undefined8 *)(lVar2 + 0x108) = param_3;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004c4544;
  }
  else {
    pcVar1 = FUN_1004c4b04;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004c4544 | FUN_1004c4544 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

tuple2_conflict7 FUN_1004c4544(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  NSURLResponse *pNVar5;
  Data UNRECOVERED_JUMPTABLE;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  JSONDecoder *this;
  URLRequest *this_00;
  undefined8 *puVar11;
  URL url;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  tuple2_conflict7 tVar20;
  String SVar21;
  tuple2_conflict7 tVar22;
  
  IVar10 = *(ID *)(unaff_x22 + 0x108);
  _swift_dynamicCastObjCClass(IVar10,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar10 == 0) {
    FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100));
LAB_1004c46f4:
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar1 + 8))(uVar8,uVar9);
  }
  else {
    IVar10 = objc_stub::statusCode(IVar10);
    if (((long)IVar10 < 200) || (299 < IVar10)) {
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100));
      goto LAB_1004c46f4;
    }
    puVar11 = *(undefined8 **)(unaff_x22 + 0x110);
    this = *(JSONDecoder **)(unaff_x22 + 200);
    FUN_1004c6d6c();
    Foundation::JSONDecoder::_decode(this,(Data)0x100eda010);
    if (puVar11 == (undefined8 *)0x0) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar2 = *(long *)(unaff_x22 + 0xa0);
      lVar1 = *(long *)(unaff_x22 + 0x88);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
      UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 0x38);
      pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x40);
      puVar4 = *(undefined **)(unaff_x22 + 0x48);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar17 = *(long *)(puVar4 + 0x10);
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100));
      (**(code **)(lVar1 + 8))(uVar8,uVar14);
      (**(code **)(lVar2 + 8))(uVar15,uVar9);
      if (lVar17 != 0) {
        _swift_release(*(undefined8 *)(unaff_x22 + 200));
        goto LAB_1004c49c8;
      }
      _swift_bridgeObjectRelease(puVar4);
      _swift_bridgeObjectRelease(pNVar5);
      _swift_bridgeObjectRelease(uVar12);
    }
    else {
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100));
      *(undefined8 **)(unaff_x22 + 0x58) = puVar11;
      _swift_errorRetain(puVar11);
      puVar4 = &DAT_100fcb578;
      FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
      uVar7 = unaff_x22 + 0x10;
      _swift_dynamicCast(uVar7,unaff_x22 + 0x58,puVar4,&DAT_100ed9e90,0);
      if ((uVar7 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 200);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
        pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x98);
        lVar2 = *(long *)(unaff_x22 + 0xa0);
        lVar1 = *(long *)(unaff_x22 + 0x88);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
        _swift_errorRelease();
        uVar3 = *(undefined1 *)(unaff_x22 + 0x30);
        FUN_1004a3fb4();
        uVar19 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
        _swift_allocError(&DAT_100ed9e90,puVar11,0,0);
        puVar11[1] = uVar19;
        *puVar11 = uVar18;
        puVar11[3] = uVar16;
        puVar11[2] = uVar14;
        *(undefined1 *)(puVar11 + 4) = uVar3;
        _swift_willThrow();
        _swift_release(uVar8);
        (**(code **)(lVar1 + 8))(uVar9,uVar15);
        (**(code **)(lVar2 + 8))(uVar12,pNVar5);
        _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x58));
        goto LAB_1004c47e0;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar1 = *(long *)(unaff_x22 + 0xa0);
      (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
                (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
      (**(code **)(lVar1 + 8))(uVar8,uVar9);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x58));
      _swift_errorRelease(puVar11);
    }
  }
  lVar1 = *(long *)(unaff_x22 + 0xe8) + 1;
  if (lVar1 != *(long *)(unaff_x22 + 0xd0)) {
    *(long *)(unaff_x22 + 0xe8) = lVar1;
    pcVar13 = *(code **)(unaff_x22 + 0xe0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    url.unknown = *(undefined **)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    this_00 = *(URLRequest **)(unaff_x22 + 0x90);
    (*pcVar13)(uVar12,*(long *)(unaff_x22 + 0x60) +
                      ((ulong)*(byte *)(unaff_x22 + 0x34) + 0x20 &
                      ((ulong)*(byte *)(unaff_x22 + 0x34) ^ 0xffffffffffffffff)) +
                      *(long *)(unaff_x22 + 0xd8) * lVar1,uVar8);
    (**(code **)(lVar2 + 0x20))(uVar9,uVar12,uVar8);
    (*pcVar13)(url.unknown,uVar9,uVar8);
    Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
    Foundation::URLRequest::_set_httpMethod(this_00);
    SVar21.bridgeObject = (void *)0x8000000100d8fc90;
    SVar21.str = (char *)0xd000000000000010;
    Foundation::URLRequest::_setValue(SVar21,(URLRequest_conflict)0x747065636341);
    plVar6 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1004c44e0;
    tVar22 = (extension_Foundation)::__C::NSURLSession::_data
                       ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x90));
    return tVar22;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x68),uVar8,&DAT_100fcb378,&DAT_100c50170);
  (**(code **)(lVar1 + 0x30))(uVar8,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  if ((int)uVar8 != 1) {
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
    pcVar13 = *(code **)(lVar1 + 0x20);
    (*pcVar13)(uVar8,*(undefined8 *)(unaff_x22 + 0x78),uVar12);
    _swift_release(uVar9);
    puVar4 = &DAT_100fcb4a0;
    FUN_1000f7830(&DAT_100fcb4a0,&DAT_100c502f0);
    uVar7 = (ulong)*(byte *)(lVar1 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    (*pcVar13)(puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),uVar8,uVar12);
    UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x0;
    pNVar5 = (NSURLResponse *)0x0;
    uVar12 = 0;
LAB_1004c49c8:
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001004c4a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(UNRECOVERED_JUMPTABLE.unknown,pNVar5,puVar4,uVar12);
    tVar22._ = pNVar5;
    tVar22._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar22;
  }
  pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x78);
  FUN_1000fb4c4(pNVar5,&DAT_100fcb378,&DAT_100c50170);
  FUN_1004a3fb4();
  _swift_allocError(&DAT_100ed9e90,pNVar5,0,0);
  *(undefined8 *)pNVar5 = 1;
  *(undefined8 *)(pNVar5 + 8) = 0;
  *(undefined8 *)(pNVar5 + 0x10) = 0;
  *(undefined8 *)(pNVar5 + 0x18) = 0;
  pNVar5[0x20] = (NSURLResponse)0xe;
  _swift_willThrow();
  _swift_release(uVar9);
LAB_1004c47e0:
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004c483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar20._ = pNVar5;
  tVar20._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar20;
}



/* Address: 0x1004c4b04 | FUN_1004c4b04 */

tuple2_conflict7 FUN_1004c4b04(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  URLRequest *this;
  ulong uVar10;
  URL url;
  long unaff_x22;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  tuple2_conflict7 tVar18;
  String SVar19;
  tuple2_conflict7 tVar20;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x110);
  *(long *)(unaff_x22 + 0x58) = (long)puVar9;
  uVar10 = unaff_x22 + 0x10;
  _swift_errorRetain(puVar9);
  puVar4 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  _swift_dynamicCast(uVar10,(long *)(unaff_x22 + 0x58),puVar4,&DAT_100ed9e90,0);
  if ((uVar10 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar1 + 8))(uVar7,uVar8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x58));
    _swift_errorRelease(puVar9);
    lVar1 = *(long *)(unaff_x22 + 0xe8) + 1;
    if (lVar1 != *(long *)(unaff_x22 + 0xd0)) {
      *(long *)(unaff_x22 + 0xe8) = lVar1;
      pcVar12 = *(code **)(unaff_x22 + 0xe0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
      url.unknown = *(undefined **)(unaff_x22 + 0xb0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar2 = *(long *)(unaff_x22 + 0xa0);
      this = *(URLRequest **)(unaff_x22 + 0x90);
      (*pcVar12)(uVar11,*(long *)(unaff_x22 + 0x60) +
                        ((ulong)*(byte *)(unaff_x22 + 0x34) + 0x20 &
                        ((ulong)*(byte *)(unaff_x22 + 0x34) ^ 0xffffffffffffffff)) +
                        *(long *)(unaff_x22 + 0xd8) * lVar1,uVar7);
      (**(code **)(lVar2 + 0x20))(uVar8,uVar11,uVar7);
      (*pcVar12)(url.unknown,uVar8,uVar7);
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      Foundation::URLRequest::_set_httpMethod(this);
      SVar19.bridgeObject = (void *)0x8000000100d8fc90;
      SVar19.str = (char *)0xd000000000000010;
      Foundation::URLRequest::_setValue(SVar19,(URLRequest_conflict)0x747065636341);
      plVar6 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1004c44e0;
      tVar20 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x90));
      return tVar20;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x68),uVar7,&DAT_100fcb378,&DAT_100c50170);
    (**(code **)(lVar1 + 0x30))(uVar7,1,uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    if ((int)uVar7 != 1) {
      lVar1 = *(long *)(unaff_x22 + 0xa0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      pcVar12 = *(code **)(lVar1 + 0x20);
      (*pcVar12)(uVar7,*(undefined8 *)(unaff_x22 + 0x78),uVar11);
      _swift_release(uVar8);
      puVar4 = &DAT_100fcb4a0;
      FUN_1000f7830(&DAT_100fcb4a0,&DAT_100c502f0);
      uVar10 = (ulong)*(byte *)(lVar1 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      (*pcVar12)(puVar4 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)),uVar7,uVar11);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar13);
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x0;
      pNVar5 = (NSURLResponse *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001004c4f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0,0,puVar4,0);
      tVar20._ = pNVar5;
      tVar20._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar20;
    }
    pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x78);
    FUN_1000fb4c4(pNVar5,&DAT_100fcb378,&DAT_100c50170);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,pNVar5,0,0);
    *(undefined8 *)pNVar5 = 1;
    *(undefined8 *)(pNVar5 + 8) = 0;
    *(undefined8 *)(pNVar5 + 0x10) = 0;
    *(undefined8 *)(pNVar5 + 0x18) = 0;
    pNVar5[0x20] = (NSURLResponse)0xe;
    _swift_willThrow();
    _swift_release(uVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x98);
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_errorRelease();
    uVar3 = *(undefined1 *)(unaff_x22 + 0x30);
    FUN_1004a3fb4();
    uVar17 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
    _swift_allocError(&DAT_100ed9e90,puVar9,0,0);
    puVar9[1] = uVar17;
    *puVar9 = uVar16;
    puVar9[3] = uVar15;
    puVar9[2] = uVar13;
    *(undefined1 *)(puVar9 + 4) = uVar3;
    _swift_willThrow();
    _swift_release(uVar7);
    (**(code **)(lVar1 + 8))(uVar8,uVar14);
    (**(code **)(lVar2 + 8))(uVar11,pNVar5);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x58));
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004c4c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar18._ = pNVar5;
  tVar18._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar18;
}



/* Address: 0x1004c4f40 | FUN_1004c4f40 */

void FUN_1004c4f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  URLRequest_conflict UVar4;
  URL UVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  puVar1 = &DAT_100fcbb30;
  FUN_1000f7830(&DAT_100fcbb30,&DAT_100c50a40);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  lVar6 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  puVar1 = &DAT_100fcb580;
  FUN_1000f7830(&DAT_100fcb580,&DAT_100c503a0);
  *(undefined **)(unaff_x22 + 0x58) = puVar1;
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar6 = 0;
  FUN_1004ce850();
  *(long *)(unaff_x22 + 0x88) = lVar6;
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = UVar4.unknown;
  lVar6 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  puVar1 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb8) = UVar5.unknown;
  lVar6 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  puVar1 = &DAT_100fcbb38;
  FUN_1000f7830(&DAT_100fcbb38,&DAT_100c50a50);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  _swift_task_switch(FUN_1004c5154,0,0);
  return;
}



/* Address: 0x1004c5154 | FUN_1004c5154 */

/* WARNING: Removing unreachable block (ram,0x0001004c5280) */

tuple2_conflict7 FUN_1004c5154(void)

{
  undefined8 *puVar1;
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
  byte bVar14;
  int iVar15;
  JSONDecoder *pJVar16;
  URLComponents UVar17;
  char *pcVar18;
  undefined8 *puVar19;
  Data UNRECOVERED_JUMPTABLE;
  long *plVar20;
  undefined1 *puVar21;
  NSURLResponse *pNVar22;
  code *pcVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined8 uVar29;
  URLComponents UVar30;
  URLRequest *this;
  URL url;
  long unaff_x22;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  code *pcVar34;
  long lVar35;
  String SVar36;
  String SVar37;
  tuple2_conflict7 tVar38;
  
  uVar29 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar24 = *(long *)(unaff_x22 + 0x40);
  lVar31 = *(long *)(unaff_x22 + 0x20);
  pJVar16 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar16,*(undefined4 *)(pJVar16 + 0x30),*(undefined2 *)(pJVar16 + 0x34));
  pJVar16 = Foundation::JSONDecoder::init(pJVar16);
  *(JSONDecoder **)(unaff_x22 + 0x108) = pJVar16;
  pcVar23 = *(code **)(lVar24 + 0x38);
  *(code **)(unaff_x22 + 0x110) = pcVar23;
  (*pcVar23)(uVar29,1,1,uVar33);
  lVar24 = *(long *)(lVar31 + 0x10);
  *(long *)(unaff_x22 + 0x118) = lVar24;
  if (lVar24 == 0) {
LAB_1004c53e0:
    uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar24 = *(long *)(unaff_x22 + 0x40);
    FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x100),uVar29,&DAT_100fcbb38,&DAT_100c50a50);
    (**(code **)(lVar24 + 0x30))(uVar29,1,uVar33);
    if ((int)uVar29 == 1) {
      uVar33 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
      puVar1 = *(undefined8 **)(unaff_x22 + 0xf0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar29 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar25 = *(undefined8 *)(unaff_x22 + 200);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
      pNVar22 = (NSURLResponse *)&DAT_100fcbb38;
      puVar19 = puVar1;
      FUN_1000fb4c4(puVar1,&DAT_100fcbb38,&DAT_100c50a50);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar19,0,0);
      *puVar19 = 2;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *(undefined1 *)(puVar19 + 4) = 0xe;
      _swift_willThrow();
      _swift_release(uVar6);
      FUN_1000fb4c4(uVar33,&DAT_100fcbb38,&DAT_100c50a50);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(puVar1);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar29);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar32);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar27);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar26);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar5);
      UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    }
    else {
      uVar33 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
      lVar31 = *(long *)(unaff_x22 + 0xc0);
      lVar24 = *(long *)(unaff_x22 + 0x48);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar35 = *(long *)(unaff_x22 + 0x38);
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x100),&DAT_100fcbb38,&DAT_100c50a50);
      _swift_release(uVar33);
      FUN_1004c6c9c(uVar32,uVar29);
      FUN_1004c6c9c(uVar29,lVar24);
      iVar15 = *(int *)(lVar35 + 0x30);
      uVar33 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar29 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar2 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
      pNVar22 = *(NSURLResponse **)(unaff_x22 + 0x18);
      (**(code **)(lVar31 + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x10),uVar6,*(undefined8 *)(unaff_x22 + 0xb8));
      FUN_1004c6cec(lVar24 + iVar15,pNVar22);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar29);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar32);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar27);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar26);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar6);
      UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001004c56e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar38._ = pNVar22;
    tVar38._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar38;
  }
  lVar24 = 0;
  lVar35 = *(long *)(unaff_x22 + 0xc0);
  bVar14 = *(byte *)(*(long *)(unaff_x22 + 0x30) + 0x28);
  *(byte *)(unaff_x22 + 0x184) = bVar14;
  uVar28 = *(uint *)(lVar35 + 0x50);
  *(uint *)(unaff_x22 + 0x180) = uVar28;
  lVar31 = *(long *)(lVar35 + 0x48);
  *(long *)(unaff_x22 + 0x120) = lVar31;
  pcVar23 = *(code **)(lVar35 + 0x10);
  *(code **)(unaff_x22 + 0x128) = pcVar23;
  do {
    *(long *)(unaff_x22 + 0x130) = lVar24;
    uVar33 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xb8);
    (*pcVar23)(uVar29,*(long *)(unaff_x22 + 0x20) +
                      ((ulong)(uVar28 & 0xff) + 0x20 & ((ulong)(uVar28 & 0xff) ^ 0xffffffffffffffff)
                      ) + lVar31 * lVar24,uVar32);
    pcVar23 = *(code **)(lVar35 + 0x20);
    *(code **)(unaff_x22 + 0x138) = pcVar23;
    (*pcVar23)(uVar33,uVar29,uVar32);
    FUN_1004d0d18(uVar33,0xd00000000000001b,0x8000000100daa530,bVar14 & 1);
    UVar30.unknown = *(undefined **)(unaff_x22 + 0xb0);
    Foundation::URLComponents::_init(SUB81(*(undefined8 *)(unaff_x22 + 0xe0),0));
    UVar17 = Foundation::URLComponents::typeMetadataAccessor();
    lVar24 = *(long *)(UVar17.unknown + -8);
    puVar21 = &DAT_00000001;
    (**(code **)(lVar24 + 0x30))(UVar30.unknown,1,UVar17.unknown);
    uVar33 = *(undefined8 *)(unaff_x22 + 0xb0);
    if ((int)UVar30.unknown == 1) {
      FUN_1000fb4c4(uVar33,&DAT_100fcb380,&DAT_100c504a0);
LAB_1004c5354:
      lVar35 = *(long *)(unaff_x22 + 0xe0);
      lVar31 = *(long *)(unaff_x22 + 0x30);
      uVar33 = *(undefined8 *)(lVar31 + 0x18);
      lVar24 = *(long *)(lVar31 + 0x20);
      FUN_100004640(lVar31,uVar33);
      (**(code **)(lVar24 + 0x10))(lVar35,uVar33,lVar24);
      *(long *)(unaff_x22 + 0x140) = lVar35;
      lVar24 = *(long *)(lVar35 + 0x10);
      *(long *)(unaff_x22 + 0x148) = lVar24;
      if (lVar24 != 0) {
        *(undefined8 *)(unaff_x22 + 0x150) = 0;
        if (*(long *)(lVar35 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1004c57f4);
          (*pcVar23)();
        }
        pcVar23 = *(code **)(unaff_x22 + 0x138);
        pcVar34 = *(code **)(unaff_x22 + 0x128);
        uVar33 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xd8);
        url.unknown = *(undefined **)(unaff_x22 + 200);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xb8);
        this = *(URLRequest **)(unaff_x22 + 0xa8);
        (*pcVar34)(uVar29,lVar35 + ((ulong)*(byte *)(unaff_x22 + 0x180) + 0x20 &
                                   ((ulong)*(byte *)(unaff_x22 + 0x180) ^ 0xffffffffffffffff)),
                   uVar32);
        (*pcVar23)(uVar33,uVar29,uVar32);
        (*pcVar34)(url.unknown,uVar33,uVar32);
        Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
        Foundation::URLRequest::_set_httpMethod(this);
        SVar37.bridgeObject = (void *)0x8000000100d8fc90;
        SVar37.str = (char *)0xd000000000000010;
        Foundation::URLRequest::_setValue(SVar37,(URLRequest_conflict)0x747065636341);
        plVar20 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x158) = plVar20;
        *plVar20 = unaff_x22;
        plVar20[1] = (long)FUN_1004c57f4;
        tVar38 = (extension_Foundation)::__C::NSURLSession::_data
                           ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xa8));
        return tVar38;
      }
      lVar24 = *(long *)(unaff_x22 + 0xc0);
      _swift_bridgeObjectRelease();
    }
    else {
      Foundation::URLComponents::_get_host(UVar30);
      (**(code **)(lVar24 + 8))(uVar33,UVar17.unknown);
      if (puVar21 == (undefined1 *)0x0) goto LAB_1004c5354;
      SVar36.bridgeObject = puVar21;
      SVar36.str = UVar30.unknown;
      SVar36 = Swift::String::lowercased(SVar36);
      pcVar18 = SVar36.str;
      _swift_bridgeObjectRelease(puVar21);
      FUN_1004d19e4(pcVar18,SVar36.bridgeObject);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      if (((ulong)pcVar18 & 1) == 0) goto LAB_1004c5354;
      lVar24 = *(long *)(unaff_x22 + 0xc0);
    }
    lVar31 = *(long *)(unaff_x22 + 0x130);
    lVar35 = *(long *)(unaff_x22 + 0x118);
    (**(code **)(lVar24 + 8))(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar31 + 1 == lVar35) goto LAB_1004c53e0;
    pcVar23 = *(code **)(unaff_x22 + 0x128);
    lVar24 = *(long *)(unaff_x22 + 0x130) + 1;
    lVar31 = *(long *)(unaff_x22 + 0x120);
    uVar28 = (uint)*(byte *)(unaff_x22 + 0x180);
    bVar14 = *(byte *)(unaff_x22 + 0x184);
    lVar35 = *(long *)(unaff_x22 + 0xc0);
  } while( true );
}



/* Address: 0x1004c57f4 | FUN_1004c57f4 */

void FUN_1004c57f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x160) = param_1;
  *(undefined8 *)(lVar2 + 0x168) = param_2;
  *(undefined8 *)(lVar2 + 0x170) = param_3;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004c5858;
  }
  else {
    pcVar1 = FUN_1004c660c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004c5858 | FUN_1004c5858 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

tuple2_conflict7 FUN_1004c5858(void)

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
  undefined1 uVar10;
  bool bVar11;
  long lVar12;
  undefined8 *puVar13;
  Data UNRECOVERED_JUMPTABLE;
  URLComponents UVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  NSURLResponse *pNVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  _StringGuts _Var25;
  ID IVar26;
  JSONDecoder *this;
  long lVar27;
  URLComponents UVar28;
  URLRequest *this_00;
  long lVar29;
  undefined8 uVar30;
  URL UVar31;
  long unaff_x22;
  undefined8 uVar32;
  long *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  code *pcVar36;
  code *pcVar37;
  long lVar38;
  undefined8 uVar39;
  String SVar40;
  tuple2_conflict7 tVar41;
  String SVar42;
  String SVar43;
  long local_68;
  
  IVar26 = *(ID *)(unaff_x22 + 0x170);
  _swift_dynamicCastObjCClass(IVar26,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar26 == 0) {
    FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
LAB_1004c5980:
    uVar30 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar29 = *(long *)(unaff_x22 + 0xc0);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
    pcVar37 = *(code **)(lVar29 + 8);
    (*pcVar37)(uVar30,uVar35);
    lVar29 = *(long *)(unaff_x22 + 0x178);
LAB_1004c59ac:
    uVar22 = *(long *)(unaff_x22 + 0x150) + 1;
    lVar12 = *(long *)(unaff_x22 + 0x140);
    if (uVar22 != *(ulong *)(unaff_x22 + 0x148)) {
LAB_1004c5fd8:
      *(ulong *)(unaff_x22 + 0x150) = uVar22;
      if (uVar22 < *(ulong *)(lVar12 + 0x10)) {
        pcVar36 = *(code **)(unaff_x22 + 0x138);
        pcVar37 = *(code **)(unaff_x22 + 0x128);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xd8);
        UVar31.unknown = *(undefined **)(unaff_x22 + 200);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
        this_00 = *(URLRequest **)(unaff_x22 + 0xa8);
        (*pcVar37)(uVar30,lVar12 + ((ulong)*(byte *)(unaff_x22 + 0x180) + 0x20 &
                                   ((ulong)*(byte *)(unaff_x22 + 0x180) ^ 0xffffffffffffffff)) +
                          *(long *)(unaff_x22 + 0x120) * uVar22,uVar24);
        (*pcVar36)(uVar35,uVar30,uVar24);
        (*pcVar37)(UVar31.unknown,uVar35,uVar24);
        Foundation::URLRequest::init(UVar31,(NSURLRequestCachePolicy)0x0,60.0);
        Foundation::URLRequest::_set_httpMethod(this_00);
        SVar42.bridgeObject = (void *)0x8000000100d8fc90;
        SVar42.str = (char *)0xd000000000000010;
        Foundation::URLRequest::_setValue(SVar42,(URLRequest_conflict)0x747065636341);
        plVar33 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x158) = plVar33;
        *plVar33 = unaff_x22;
        plVar33[1] = (long)FUN_1004c57f4;
        tVar41 = (extension_Foundation)::__C::NSURLSession::_data
                           ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xa8));
        return tVar41;
      }
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x1004c660c);
      (*pcVar37)();
    }
    _swift_bridgeObjectRelease();
    lVar12 = *(long *)(unaff_x22 + 0x130);
    lVar27 = *(long *)(unaff_x22 + 0x118);
    (*pcVar37)(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar12 + 1 != lVar27) {
      do {
        lVar12 = *(long *)(unaff_x22 + 0x130) + 1;
        *(long *)(unaff_x22 + 0x130) = lVar12;
        uVar10 = *(undefined1 *)(unaff_x22 + 0x184);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar27 = *(long *)(unaff_x22 + 0xc0);
        (**(code **)(unaff_x22 + 0x128))
                  (uVar24,*(long *)(unaff_x22 + 0x20) +
                          ((ulong)*(byte *)(unaff_x22 + 0x180) + 0x20 &
                          ((ulong)*(byte *)(unaff_x22 + 0x180) ^ 0xffffffffffffffff)) +
                          *(long *)(unaff_x22 + 0x120) * lVar12,uVar30);
        pcVar37 = *(code **)(lVar27 + 0x20);
        *(code **)(unaff_x22 + 0x138) = pcVar37;
        (*pcVar37)(uVar35,uVar24,uVar30);
        FUN_1004d0d18(uVar35,0xd00000000000001b,0x8000000100daa530,uVar10);
        if (lVar29 == 0) {
          UVar28.unknown = *(undefined **)(unaff_x22 + 0xb0);
          Foundation::URLComponents::_init(SUB81(*(undefined8 *)(unaff_x22 + 0xe0),0));
          UVar14 = Foundation::URLComponents::typeMetadataAccessor();
          lVar29 = *(long *)(UVar14.unknown + -8);
          puVar17 = &DAT_00000001;
          (**(code **)(lVar29 + 0x30))(UVar28.unknown,1,UVar14.unknown);
          uVar35 = *(undefined8 *)(unaff_x22 + 0xb0);
          if ((int)UVar28.unknown == 1) {
            FUN_1000fb4c4(uVar35,&DAT_100fcb380,&DAT_100c504a0);
          }
          else {
            Foundation::URLComponents::_get_host(UVar28);
            (**(code **)(lVar29 + 8))(uVar35,UVar14.unknown);
            if (puVar17 != (undefined1 *)0x0) {
              SVar40.bridgeObject = puVar17;
              SVar40.str = UVar28.unknown;
              SVar40 = Swift::String::lowercased(SVar40);
              pcVar15 = SVar40.str;
              _swift_bridgeObjectRelease(puVar17);
              FUN_1004d19e4(pcVar15,SVar40.bridgeObject);
              _swift_bridgeObjectRelease(SVar40.bridgeObject);
              if (((ulong)pcVar15 & 1) != 0) {
                puVar16 = (undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 8);
                goto LAB_1004c5bb0;
              }
            }
          }
          lVar12 = *(long *)(unaff_x22 + 0xe0);
          lVar27 = *(long *)(unaff_x22 + 0x30);
          uVar35 = *(undefined8 *)(lVar27 + 0x18);
          lVar29 = *(long *)(lVar27 + 0x20);
          FUN_100004640(lVar27,uVar35);
          (**(code **)(lVar29 + 0x10))(lVar12,uVar35,lVar29);
          *(long *)(unaff_x22 + 0x140) = lVar12;
          lVar29 = *(long *)(lVar12 + 0x10);
          *(long *)(unaff_x22 + 0x148) = lVar29;
          if (lVar29 != 0) {
            uVar22 = 0;
            goto LAB_1004c5fd8;
          }
          lVar29 = *(long *)(unaff_x22 + 0xc0);
          _swift_bridgeObjectRelease();
          puVar16 = (undefined8 *)(lVar29 + 8);
        }
        else {
          puVar16 = (undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 8);
          _swift_errorRelease(lVar29);
        }
LAB_1004c5bb0:
        lVar12 = *(long *)(unaff_x22 + 0x130);
        lVar27 = *(long *)(unaff_x22 + 0x118);
        (*(code *)*puVar16)(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xb8));
        lVar29 = 0;
      } while (lVar12 + 1 != lVar27);
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar29 = *(long *)(unaff_x22 + 0x40);
    FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x100),uVar24,&DAT_100fcbb38,&DAT_100c50a50);
    (**(code **)(lVar29 + 0x30))(uVar24,1,uVar35);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x108);
    if ((int)uVar24 == 1) {
      puVar16 = *(undefined8 **)(unaff_x22 + 0xf0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar34 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar20 = *(undefined8 *)(unaff_x22 + 200);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      pNVar18 = (NSURLResponse *)&DAT_100fcbb38;
      puVar13 = puVar16;
      FUN_1000fb4c4(puVar16,&DAT_100fcbb38,&DAT_100c50a50);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar13,0,0);
      *puVar13 = 2;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined1 *)(puVar13 + 4) = 0xe;
      _swift_willThrow();
      _swift_release(uVar30);
      FUN_1000fb4c4(uVar35,&DAT_100fcbb38,&DAT_100c50a50);
      _swift_task_dealloc(uVar35);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(puVar16);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar24);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar34);
      _swift_task_dealloc(uVar20);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar32);
      _swift_task_dealloc(uVar23);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar39);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar1);
      _swift_task_dealloc(uVar21);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar2);
      UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
      goto LAB_1004c5eb4;
    }
    plVar33 = (long *)(unaff_x22 + 0x48);
    lVar29 = *plVar33;
    uVar24 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar12 = *(long *)(unaff_x22 + 0xc0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar27 = *(long *)(unaff_x22 + 0x38);
    FUN_1000fb4c4(uVar35,&DAT_100fcbb38,&DAT_100c50a50);
    _swift_release(uVar30);
    FUN_1004c6c9c(uVar24,uVar34);
    FUN_1004c6c9c(uVar34,lVar29);
    lVar29 = lVar29 + *(int *)(lVar27 + 0x30);
    puVar16 = (undefined8 *)(lVar12 + 0x20);
    local_68 = *(long *)(unaff_x22 + 0x90);
  }
  else {
    IVar26 = objc_stub::statusCode(IVar26);
    if (((long)IVar26 < 200) || (299 < IVar26)) {
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
      goto LAB_1004c5980;
    }
    lVar29 = *(long *)(unaff_x22 + 0x178);
    this = *(JSONDecoder **)(unaff_x22 + 0x108);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 0x88);
    FUN_100003a00(&DAT_100fcbb40,FUN_1004ce850,&TargetProtocolConformanceDescriptor_100c50df8);
    Foundation::JSONDecoder::_decode(this,UNRECOVERED_JUMPTABLE);
    if (lVar29 != 0) {
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar27 = *(long *)(unaff_x22 + 0xc0);
      lVar12 = *(long *)(unaff_x22 + 0xa0);
      uVar30 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x98);
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
      (**(code **)(lVar12 + 8))(uVar30,uVar34);
      pcVar37 = *(code **)(lVar27 + 8);
      (*pcVar37)(uVar24,uVar35);
      _swift_errorRelease(lVar29);
LAB_1004c5948:
      lVar29 = 0;
      goto LAB_1004c59ac;
    }
    uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar27 = *(long *)(unaff_x22 + 0xc0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar12 = *(long *)(unaff_x22 + 0x58);
    lVar29 = *(long *)(unaff_x22 + 0x60);
    (**(code **)(lVar27 + 0x38))(uVar24,1,1,uVar35);
    lVar38 = (long)*(int *)(lVar12 + 0x30);
    FUN_1000f8cac(uVar30,lVar29,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(uVar24,lVar29 + lVar38,&DAT_100fcb378,&DAT_100c50170);
    pcVar36 = *(code **)(lVar27 + 0x30);
    lVar12 = lVar29;
    (*pcVar36)(lVar29,1,uVar35);
    uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
    if ((int)lVar12 == 1) {
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x80),&DAT_100fcb378,&DAT_100c50170);
      lVar29 = lVar29 + lVar38;
      (*pcVar36)(lVar29,1,uVar35);
      if ((int)lVar29 != 1) {
LAB_1004c6148:
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x60),&DAT_100fcb580,&DAT_100c503a0);
        goto LAB_1004c6160;
      }
      uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
      _swift_release(uVar30);
      _swift_bridgeObjectRelease(uVar35);
      FUN_1000fb4c4(uVar24,&DAT_100fcb378,&DAT_100c50170);
LAB_1004c6378:
      uVar30 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar29 = *(long *)(unaff_x22 + 0xc0);
      (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
      (**(code **)(lVar29 + 8))(uVar30,uVar35);
    }
    else {
      FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x78),
                    &DAT_100fcb378,&DAT_100c50170);
      lVar12 = lVar29 + lVar38;
      (*pcVar36)(lVar12,1,uVar35);
      if ((int)lVar12 == 1) {
        uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar29 = *(long *)(unaff_x22 + 0xc0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x78);
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x80),&DAT_100fcb378,&DAT_100c50170);
        (**(code **)(lVar29 + 8))(uVar30,uVar35);
        goto LAB_1004c6148;
      }
      lVar12 = *(long *)(unaff_x22 + 0xc0);
      uVar30 = *(undefined8 *)(unaff_x22 + 200);
      uVar34 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x60);
      (**(code **)(unaff_x22 + 0x138))(uVar30,lVar29 + lVar38,uVar34);
      puVar16 = &DAT_100fcb590;
      FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      bVar11 = Swift::Equatable::___infix(uVar35,uVar30,uVar34,puVar16);
      pcVar37 = *(code **)(lVar12 + 8);
      (*pcVar37)(uVar30,uVar34);
      FUN_1000fb4c4(uVar24,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar37)(uVar35,uVar34);
      FUN_1000fb4c4(uVar32,&DAT_100fcb378,&DAT_100c50170);
      if (bVar11) {
        uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x108);
        FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
        _swift_release(uVar30);
        _swift_bridgeObjectRelease(uVar35);
        goto LAB_1004c6378;
      }
LAB_1004c6160:
      uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
      UVar31.unknown = *(undefined **)(unaff_x22 + 0x70);
      FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x90),UVar31.unknown,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar36)(UVar31.unknown,1,uVar35);
      if ((int)UVar31.unknown == 1) {
        UVar31.unknown = *(undefined **)(unaff_x22 + 0x70);
        FUN_1000fb4c4(UVar31.unknown,&DAT_100fcb378,&DAT_100c50170);
        SVar40 = (String)ZEXT816(0);
      }
      else {
        uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar29 = *(long *)(unaff_x22 + 0xc0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x70);
        SVar40 = Foundation::URL::get_absoluteString(UVar31);
        UVar31.unknown = SVar40.bridgeObject;
        (**(code **)(lVar29 + 8))(uVar30,uVar35);
        SVar40 = Swift::String::lowercased(SVar40);
        _swift_bridgeObjectRelease();
      }
      _Var25.unknown = SVar40.bridgeObject;
      SVar42 = Foundation::URL::get_absoluteString(UVar31);
      SVar43 = Swift::String::lowercased(SVar42);
      pvVar19 = SVar43.bridgeObject;
      _swift_bridgeObjectRelease(SVar42.bridgeObject);
      if (_Var25.unknown == (undefined *)0x0) {
        uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar12 = *(long *)(unaff_x22 + 0xc0);
        lVar29 = *(long *)(unaff_x22 + 0xa0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar34 = *(undefined8 *)(unaff_x22 + 0x98);
        FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
        (**(code **)(lVar29 + 8))(uVar30,uVar34);
        pcVar37 = *(code **)(lVar12 + 8);
        (*pcVar37)(uVar24,uVar35);
        _swift_bridgeObjectRelease(pvVar19);
LAB_1004c6498:
        uVar35 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x38);
        lVar29 = *(long *)(unaff_x22 + 0x40);
        FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x100),uVar35,&DAT_100fcbb38,&DAT_100c50a50);
        (**(code **)(lVar29 + 0x30))(uVar35,1,uVar30);
        if ((int)uVar35 == 1) {
          uVar35 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x90);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x68);
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x100),&DAT_100fcbb38,&DAT_100c50a50);
          FUN_1000fb4c4(uVar35,&DAT_100fcbb38,&DAT_100c50a50);
          FUN_1000f8cac(uVar34,uVar30,&DAT_100fcb378,&DAT_100c50170);
          (*pcVar36)(uVar30,1,uVar24);
          if ((int)uVar30 == 1) {
            uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
            uVar35 = *(undefined8 *)(unaff_x22 + 0x68);
            (**(code **)(unaff_x22 + 0x128))
                      (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0xe0),uVar30);
            (*pcVar36)(uVar35,1,uVar30);
            if ((int)uVar35 != 1) {
              FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x68),&DAT_100fcb378,&DAT_100c50170);
            }
          }
          else {
            (**(code **)(unaff_x22 + 0x138))
                      (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x68),
                       *(undefined8 *)(unaff_x22 + 0xb8));
          }
          pcVar36 = *(code **)(unaff_x22 + 0x110);
          lVar12 = *(long *)(unaff_x22 + 0x100);
          lVar29 = *(long *)(unaff_x22 + 0x38);
          FUN_1004c6cec(*(undefined8 *)(unaff_x22 + 0x90),lVar12 + *(int *)(lVar29 + 0x30));
          (*pcVar36)(lVar12,0,1,lVar29);
        }
        else {
          uVar35 = *(undefined8 *)(unaff_x22 + 0xf8);
          FUN_1004c6d30(*(undefined8 *)(unaff_x22 + 0x90));
          FUN_1000fb4c4(uVar35,&DAT_100fcbb38,&DAT_100c50a50);
        }
        goto LAB_1004c5948;
      }
      uVar35 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar34 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar30 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar12 = *(long *)(unaff_x22 + 0xc0);
      lVar29 = *(long *)(unaff_x22 + 0xa0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x98);
      if (SVar40 == SVar43) {
        FUN_10003bf2c(uVar32,uVar35);
        _swift_bridgeObjectRelease(pvVar19);
        _swift_bridgeObjectRelease(_Var25.unknown);
        (**(code **)(lVar29 + 8))(uVar24,uVar39);
        (**(code **)(lVar12 + 8))(uVar34,uVar30);
      }
      else {
        bVar11 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)SVar40.str,_Var25,
                            (_StringComparisonResult)(__int8)SVar43.str);
        FUN_10003bf2c(uVar32,uVar35);
        _swift_bridgeObjectRelease(pvVar19);
        _swift_bridgeObjectRelease(_Var25.unknown);
        (**(code **)(lVar29 + 8))(uVar24,uVar39);
        pcVar37 = *(code **)(lVar12 + 8);
        (*pcVar37)(uVar34,uVar30);
        if (!bVar11) goto LAB_1004c6498;
      }
      uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
      _swift_bridgeObjectRelease(uVar35);
    }
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x100),&DAT_100fcbb38,&DAT_100c50a50);
    puVar16 = (undefined8 *)(unaff_x22 + 0x138);
    plVar33 = (long *)(unaff_x22 + 0xe0);
    lVar29 = *(long *)(unaff_x22 + 0x90);
    local_68 = lVar29;
  }
  uVar35 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar30 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar34 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  pNVar18 = *(NSURLResponse **)(unaff_x22 + 0x18);
  (*(code *)*puVar16)(*(undefined8 *)(unaff_x22 + 0x10),*plVar33,*(undefined8 *)(unaff_x22 + 0xb8));
  FUN_1004c6cec(lVar29,pNVar18);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(local_68);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar2);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
LAB_1004c5eb4:
                    /* WARNING: Could not recover jumptable at 0x0001004c5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar41._ = pNVar18;
  tVar41._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar41;
}



/* Address: 0x1004c660c | FUN_1004c660c */

/* WARNING: Removing unreachable block (ram,0x0001004c6860) */

tuple2_conflict7 FUN_1004c660c(void)

{
  undefined8 *puVar1;
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
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  Data UNRECOVERED_JUMPTABLE;
  URLComponents UVar18;
  char *pcVar19;
  long *plVar20;
  undefined1 *puVar21;
  NSURLResponse *pNVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  URLComponents UVar30;
  URLRequest *this;
  URL url;
  long unaff_x22;
  code *pcVar31;
  undefined8 uVar32;
  long lVar33;
  code *pcVar34;
  String SVar35;
  String SVar36;
  tuple2_conflict7 tVar37;
  
  uVar28 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar27 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar16 = *(long *)(unaff_x22 + 0xc0);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
  pcVar31 = *(code **)(lVar16 + 8);
  (*pcVar31)(uVar27,uVar32);
  _swift_errorRelease(uVar28);
  uVar25 = *(long *)(unaff_x22 + 0x150) + 1;
  lVar16 = *(long *)(unaff_x22 + 0x140);
  if (uVar25 != *(ulong *)(unaff_x22 + 0x148)) {
LAB_1004c6b88:
    *(ulong *)(unaff_x22 + 0x150) = uVar25;
    if (uVar25 < *(ulong *)(lVar16 + 0x10)) {
      pcVar34 = *(code **)(unaff_x22 + 0x138);
      pcVar31 = *(code **)(unaff_x22 + 0x128);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xd8);
      url.unknown = *(undefined **)(unaff_x22 + 200);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xb8);
      this = *(URLRequest **)(unaff_x22 + 0xa8);
      (*pcVar31)(uVar27,lVar16 + ((ulong)*(byte *)(unaff_x22 + 0x180) + 0x20 &
                                 ((ulong)*(byte *)(unaff_x22 + 0x180) ^ 0xffffffffffffffff)) +
                        *(long *)(unaff_x22 + 0x120) * uVar25,uVar28);
      (*pcVar34)(uVar32,uVar27,uVar28);
      (*pcVar31)(url.unknown,uVar32,uVar28);
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      Foundation::URLRequest::_set_httpMethod(this);
      SVar36.bridgeObject = (void *)0x8000000100d8fc90;
      SVar36.str = (char *)0xd000000000000010;
      Foundation::URLRequest::_setValue(SVar36,(URLRequest_conflict)0x747065636341);
      plVar20 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x158) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_1004c57f4;
      tVar37 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xa8));
      return tVar37;
    }
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x1004c6c9c);
    (*pcVar31)();
  }
  _swift_bridgeObjectRelease();
  lVar16 = *(long *)(unaff_x22 + 0x130);
  lVar29 = *(long *)(unaff_x22 + 0x118);
  (*pcVar31)(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xb8));
  if (lVar16 + 1 != lVar29) {
    do {
      lVar16 = *(long *)(unaff_x22 + 0x130) + 1;
      *(long *)(unaff_x22 + 0x130) = lVar16;
      uVar14 = *(undefined1 *)(unaff_x22 + 0x184);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar29 = *(long *)(unaff_x22 + 0xc0);
      (**(code **)(unaff_x22 + 0x128))
                (uVar28,*(long *)(unaff_x22 + 0x20) +
                        ((ulong)*(byte *)(unaff_x22 + 0x180) + 0x20 &
                        ((ulong)*(byte *)(unaff_x22 + 0x180) ^ 0xffffffffffffffff)) +
                        *(long *)(unaff_x22 + 0x120) * lVar16,uVar27);
      pcVar31 = *(code **)(lVar29 + 0x20);
      *(code **)(unaff_x22 + 0x138) = pcVar31;
      (*pcVar31)(uVar32,uVar28,uVar27);
      FUN_1004d0d18(uVar32,0xd00000000000001b,0x8000000100daa530,uVar14);
      UVar30.unknown = *(undefined **)(unaff_x22 + 0xb0);
      Foundation::URLComponents::_init(SUB81(*(undefined8 *)(unaff_x22 + 0xe0),0));
      UVar18 = Foundation::URLComponents::typeMetadataAccessor();
      lVar16 = *(long *)(UVar18.unknown + -8);
      puVar21 = &DAT_00000001;
      (**(code **)(lVar16 + 0x30))(UVar30.unknown,1,UVar18.unknown);
      uVar32 = *(undefined8 *)(unaff_x22 + 0xb0);
      if ((int)UVar30.unknown == 1) {
        FUN_1000fb4c4(uVar32,&DAT_100fcb380,&DAT_100c504a0);
LAB_1004c69c8:
        lVar16 = *(long *)(unaff_x22 + 0xe0);
        lVar33 = *(long *)(unaff_x22 + 0x30);
        uVar32 = *(undefined8 *)(lVar33 + 0x18);
        lVar29 = *(long *)(lVar33 + 0x20);
        FUN_100004640(lVar33,uVar32);
        (**(code **)(lVar29 + 0x10))(lVar16,uVar32,lVar29);
        *(long *)(unaff_x22 + 0x140) = lVar16;
        lVar29 = *(long *)(lVar16 + 0x10);
        *(long *)(unaff_x22 + 0x148) = lVar29;
        if (lVar29 != 0) {
          uVar25 = 0;
          goto LAB_1004c6b88;
        }
        lVar16 = *(long *)(unaff_x22 + 0xc0);
        _swift_bridgeObjectRelease();
      }
      else {
        Foundation::URLComponents::_get_host(UVar30);
        (**(code **)(lVar16 + 8))(uVar32,UVar18.unknown);
        if (puVar21 == (undefined1 *)0x0) goto LAB_1004c69c8;
        SVar35.bridgeObject = puVar21;
        SVar35.str = UVar30.unknown;
        SVar35 = Swift::String::lowercased(SVar35);
        pcVar19 = SVar35.str;
        _swift_bridgeObjectRelease(puVar21);
        FUN_1004d19e4(pcVar19,SVar35.bridgeObject);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        if (((ulong)pcVar19 & 1) == 0) goto LAB_1004c69c8;
        lVar16 = *(long *)(unaff_x22 + 0xc0);
      }
      lVar29 = *(long *)(unaff_x22 + 0x130);
      lVar33 = *(long *)(unaff_x22 + 0x118);
      (**(code **)(lVar16 + 8))(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xb8))
      ;
    } while (lVar29 + 1 != lVar33);
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar16 = *(long *)(unaff_x22 + 0x40);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x100),uVar27,&DAT_100fcbb38,&DAT_100c50a50);
  (**(code **)(lVar16 + 0x30))(uVar27,1,uVar32);
  if ((int)uVar27 == 1) {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
    puVar1 = *(undefined8 **)(unaff_x22 + 0xf0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar23 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
    pNVar22 = (NSURLResponse *)&DAT_100fcbb38;
    puVar17 = puVar1;
    FUN_1000fb4c4(puVar1,&DAT_100fcbb38,&DAT_100c50a50);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,puVar17,0,0);
    *puVar17 = 2;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined1 *)(puVar17 + 4) = 0xe;
    _swift_willThrow();
    _swift_release(uVar6);
    FUN_1000fb4c4(uVar32,&DAT_100fcbb38,&DAT_100c50a50);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(puVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
  }
  else {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar29 = *(long *)(unaff_x22 + 0xc0);
    lVar16 = *(long *)(unaff_x22 + 0x48);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar33 = *(long *)(unaff_x22 + 0x38);
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x100),&DAT_100fcbb38,&DAT_100c50a50);
    _swift_release(uVar32);
    FUN_1004c6c9c(uVar28,uVar27);
    FUN_1004c6c9c(uVar27,lVar16);
    iVar15 = *(int *)(lVar33 + 0x30);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
    pNVar22 = *(NSURLResponse **)(unaff_x22 + 0x18);
    (**(code **)(lVar29 + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x10),uVar6,*(undefined8 *)(unaff_x22 + 0xb8));
    FUN_1004c6cec(lVar16 + iVar15,pNVar22);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004c6b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar37._ = pNVar22;
  tVar37._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar37;
}



/* Address: 0x1004c6c9c | FUN_1004c6c9c */

undefined8 FUN_1004c6c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcbb30;
  FUN_1000f7830(&DAT_100fcbb30,&DAT_100c50a40);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004c6cec | FUN_1004c6cec */

undefined8 FUN_1004c6cec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004ce850();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004c6d30 | FUN_1004c6d30 */

undefined8 FUN_1004c6d30(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004ce850();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1004c6d6c | FUN_1004c6d6c */

void FUN_1004c6d6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbb48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51080,&DAT_100eda010);
  DAT_100fcbb48 = pTVar1;
  return;
}



/* Address: 0x1004c6dac | FUN_1004c6dac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004fc688) */
/* WARNING: Removing unreachable block (ram,0x0001004ecaa4) */
/* WARNING: Removing unreachable block (ram,0x0001004e2d60) */
/* WARNING: Removing unreachable block (ram,0x0001004ed63c) */
/* WARNING: Removing unreachable block (ram,0x0001004c8248) */
/* WARNING: Removing unreachable block (ram,0x0001004c818c) */
/* WARNING: Removing unreachable block (ram,0x0001004c807c) */
/* WARNING: Removing unreachable block (ram,0x0001004c7f4c) */
/* WARNING: Removing unreachable block (ram,0x0001004e2a9c) */
/* WARNING: Removing unreachable block (ram,0x0001004e2b20) */
/* WARNING: Removing unreachable block (ram,0x0001004c7ebc) */
/* WARNING: Removing unreachable block (ram,0x0001004c7fc8) */
/* WARNING: Removing unreachable block (ram,0x0001004c7fdc) */
/* WARNING: Removing unreachable block (ram,0x0001004c8000) */
/* WARNING: Removing unreachable block (ram,0x0001004c8130) */
/* WARNING: Removing unreachable block (ram,0x0001004c81dc) */
/* WARNING: Removing unreachable block (ram,0x0001004c81f4) */
/* WARNING: Removing unreachable block (ram,0x0001004c8260) */
/* WARNING: Removing unreachable block (ram,0x0001004c824c) */
/* WARNING: Removing unreachable block (ram,0x0001004c825c) */
/* WARNING: Removing unreachable block (ram,0x0001004c8280) */
/* WARNING: Removing unreachable block (ram,0x0001004c8284) */
/* WARNING: Removing unreachable block (ram,0x0001004e2984) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e2eec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

tuple2_conflict7
FUN_1004c6dac(void *param_1,Hasher UNRECOVERED_JUMPTABLE_00,_StringGuts param_3,
             KeyedDecodingContainer param_4,_StringGuts param_5,URLRequest_conflict param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  _StringGuts _Var6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  DecodingError DVar9;
  Hasher HVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  URL UVar13;
  URLComponents UVar14;
  Hasher HVar16;
  TargetProtocolConformanceDescriptor *pTVar17;
  _StringGuts *p_Var18;
  KeyedEncodingContainer KVar19;
  ID IVar20;
  Iterator IVar21;
  void **ppvVar22;
  char *pcVar23;
  undefined1 *puVar24;
  NSURLResponse *extraout_x1;
  void *pvVar26;
  int iVar27;
  String *pSVar28;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  Data UNRECOVERED_JUMPTABLE;
  ulong uVar29;
  uint uVar30;
  ushort *puVar31;
  char *pcVar32;
  long lVar33;
  undefined8 uVar34;
  ulong in_x12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 unaff_x19;
  Data UNRECOVERED_JUMPTABLE_01;
  ulong uVar35;
  Hasher unaff_x20;
  String *pSVar36;
  AsyncBytes AVar37;
  undefined8 unaff_x21;
  NSURLResponse *pNVar38;
  char *pcVar39;
  long unaff_x22;
  String *unaff_x23;
  undefined8 uVar40;
  void *pvVar41;
  void *pvVar42;
  Data DVar43;
  undefined8 uVar44;
  String *unaff_x24;
  long lVar45;
  long lVar46;
  String *unaff_x25;
  KeyedDecodingContainer unaff_x26;
  undefined8 uVar47;
  String *unaff_x27;
  code *pcVar48;
  _StringGuts unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar49;
  char *in_register_00005008;
  undefined8 uVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String separator;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  tuple2_conflict7 tVar59;
  tuple2_conflict7 tVar60;
  tuple2_conflict7 tVar61;
  tuple2_conflict7 tVar62;
  tuple2_conflict7 tVar63;
  tuple2_conflict7 tVar64;
  tuple2_conflict7 tVar65;
  tuple2_conflict7 tVar66;
  tuple2_conflict7 tVar67;
  tuple2_conflict7 tVar68;
  tuple2_conflict7 tVar69;
  String SVar70;
  String SVar71;
  String SVar73;
  String SVar74;
  tuple2_conflict7 tVar75;
  String SVar76;
  tuple2_conflict7 tVar77;
  tuple2_conflict7 tVar78;
  tuple2_conflict7 tVar79;
  tuple2_conflict7 tVar80;
  tuple2_conflict7 tVar81;
  tuple2_conflict7 tVar82;
  tuple2_conflict7 tVar83;
  tuple2_conflict7 tVar84;
  tuple2_conflict7 tVar85;
  tuple2_conflict7 tVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  tuple2_conflict7 tVar91;
  tuple2_conflict7 tVar92;
  tuple2_conflict7 tVar93;
  tuple2_conflict7 tVar94;
  tuple2_conflict7 tVar95;
  tuple2_conflict7 tVar96;
  tuple2_conflict7 tVar97;
  String separator_00;
  String SVar98;
  String SVar99;
  String SVar100;
  String separator_01;
  tuple2_conflict7 tVar101;
  tuple2_conflict7 tVar102;
  String SVar103;
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  String SVar109;
  String SVar110;
  String SVar111;
  String SVar112;
  String SVar113;
  String SVar114;
  String SVar115;
  String SVar116;
  String SVar117;
  String SVar118;
  String SVar119;
  String SVar120;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String SVar121;
  String SVar122;
  String SVar123;
  String SVar124;
  String SVar125;
  String SVar126;
  String SVar127;
  String SVar128;
  String SVar129;
  String *in_stack_00000000;
  String *in_stack_00000008;
  String *in_stack_00000010;
  String *in_stack_00000018;
  long in_stack_00000020;
  String *pSStack_138;
  String *pSStack_130;
  long lStack_128;
  NSURLResponse *pNStack_120;
  long lStack_118;
  NSURLResponse *pNStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  String *pSStack_e0;
  void *pvStack_d8;
  String *pSStack_d0;
  String SStack_c8;
  NSURLResponse *pNStack_b8;
  undefined8 in_stack_ffffffffffffff50;
  String *pSStack_a8;
  long lStack_a0;
  String *pSStack_98;
  _StringGuts _Stack_90;
  _StringGuts _Stack_88;
  _StringGuts _Stack_80;
  char *in_stack_ffffffffffffff90;
  undefined1 *in_stack_ffffffffffffff98;
  String SStack_60;
  String *local_50;
  void *local_48;
  String *pSVar130;
  _StringGuts _Var15;
  String SVar72;
  undefined *puVar25;
  
  SVar52.bridgeObject = param_3.unknown;
  SVar52.str = UNRECOVERED_JUMPTABLE_00.unknown;
  pSVar36 = &SStack_60;
  UNRECOVERED_JUMPTABLE_01.unknown = ((String *)unaff_x20.unknown)->str;
  UNRECOVERED_JUMPTABLE.unknown = ((String *)unaff_x20.unknown)->bridgeObject;
  SVar104 = *(String *)unaff_x20.unknown;
  SVar121 = *(String *)unaff_x20.unknown;
  _Var12.unknown = ((String *)((long)unaff_x20.unknown + 0x10))->str;
  SVar76 = *(String *)&((String *)unaff_x20.unknown)->bridgeObject;
  DVar43.unknown = ((String *)((long)unaff_x20.unknown + 0x10))->bridgeObject;
  pSVar28 = (String *)(ulong)*(byte *)&((String *)((long)unaff_x20.unknown + 0x20))->str;
  puVar31 = &switchD_1004c6de4::switchdataD_100c50a60;
  HVar10.unknown =
       (undefined *)
       ((long)(ulong)(&switchD_1004c6de4::switchdataD_100c50a60)[(long)pSVar28] * 4 + 0x1004c6de8);
  HVar16.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
  SVar71 = *(String *)unaff_x20.unknown;
  pSVar130 = unaff_x24;
  switch(*(byte *)&((String *)((long)unaff_x20.unknown + 0x20))->str) {
  default:
    if ((String *)_Var12.unknown != (String *)0x0) goto switchD_1004c6de4_caseD_3b;
    goto LAB_1004c7304;
  case 1:
    local_50 = (String *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x18,param_3);
    _swift_bridgeObjectRelease(local_48);
    local_50 = (String *)0xd000000000000016;
    local_48 = (String *)0x8000000100daadf0;
    goto LAB_1004c72e4;
  case 2:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x45,param_3);
    pcVar39 = "urce mismatch. Expected ";
    pcVar32 = (char *)0xd000000000000043;
    goto LAB_1004c72cc;
  case 3:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x42,param_3);
    pcVar39 = " client credentials";
    pcVar32 = (char *)0xd000000000000038;
    break;
  case 4:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0xb2,param_3);
    pcVar39 = "or SSRF protection: ";
    pcVar32 = (char *)0xd0000000000000b0;
    goto LAB_1004c72cc;
  case 5:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x58,param_3);
    SVar111.bridgeObject = param_5.unknown;
    SVar111.str = param_4.unknown;
    Swift::String::append(SVar121,SVar111);
    pcVar39 = "or loopback http: ";
    pcVar32 = (char *)0xd000000000000054;
    goto LAB_1004c7210;
  case 6:
    local_50 = (String *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,param_3);
    pvVar42 = local_48;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE.unknown);
    _swift_bridgeObjectRelease(pvVar42);
    pcVar39 = " must use https: ";
    pcVar32 = (char *)0xd000000000000022;
    local_50 = (String *)UNRECOVERED_JUMPTABLE_01.unknown;
    local_48 = UNRECOVERED_JUMPTABLE.unknown;
    goto LAB_1004c7210;
  case 7:
    local_50 = (String *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x15,param_3);
    pvVar42 = local_48;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE.unknown);
    _swift_bridgeObjectRelease(pvVar42);
    pcVar39 = " must not include fragments: ";
    pcVar32 = (char *)0xd000000000000011;
    local_50 = (String *)UNRECOVERED_JUMPTABLE_01.unknown;
    local_48 = UNRECOVERED_JUMPTABLE.unknown;
LAB_1004c7210:
    puVar24 = (undefined1 *)((ulong)pcVar39 | 0x8000000000000000);
    goto LAB_1004c7284;
  case 8:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x4f,param_3);
    pcVar39 = "quest failed with status ";
    pcVar32 = (char *)0xd00000000000004d;
LAB_1004c72cc:
    SVar57.bridgeObject = (void *)((ulong)pcVar39 | 0x8000000000000000);
    SVar57.str = pcVar32;
    SVar115.bridgeObject = param_5.unknown;
    SVar115.str = param_4.unknown;
    Swift::String::append(SVar57,SVar115);
    goto LAB_1004c72e4;
  case 9:
    local_50 = (String *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2b,param_3);
    _swift_bridgeObjectRelease(local_48);
    pcVar32 = "Authorization request failed with status ";
    local_50 = (String *)0xd000000000000029;
    goto LAB_1004c7338;
  case 10:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x41,param_3);
    pcVar39 = "sponse is missing state";
    pcVar32 = (char *)0xd000000000000037;
    break;
  case 0xb:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3a,param_3);
    pcVar39 = "g the authorization code";
    pcVar32 = (char *)0xd000000000000030;
    break;
  case 0xc:
    param_4.unknown = &DAT_100fcb568;
    local_50 = (String *)UNRECOVERED_JUMPTABLE_01.unknown;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    param_5.unknown = param_4.unknown;
    FUN_1004b8a64();
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar52 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    SVar71 = SVar52;
  case 0x73:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x45,(_StringGuts)SVar52.bridgeObject);
    SVar54.bridgeObject = (void *)0x8000000100daa920;
    SVar54.str = (char *)0xd000000000000042;
    SVar109.bridgeObject = param_5.unknown;
    SVar109.str = param_4.unknown;
    Swift::String::append(SVar54,SVar109);
    SVar110.bridgeObject = param_5.unknown;
    SVar110.str = param_4.unknown;
    Swift::String::append(SVar71,SVar110);
    _swift_bridgeObjectRelease(SVar71.bridgeObject);
    goto LAB_1004c7008;
  case 0xd:
    local_50 = (String *)0x0;
    local_48 = (String *)0xe000000000000000;
    Swift::_StringGuts::grow(0x39,param_3);
    pcVar39 = "nid-configuration";
    pcVar32 = (char *)0xd00000000000002f;
    break;
  case 0xe:
    pSVar28 = (String *)0xd000000000000021;
    if (((String *)_Var12.unknown == (String *)0x0 &&
        (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
        ((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x0 &&
        (String *)DVar43.unknown == (String *)0x0)) {
      local_48 = (String *)0x8000000100daaf10;
      local_50 = (String *)0xd000000000000040;
      goto LAB_1004c72ec;
    }
    if ((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)&DAT_00000001 &&
        (((String *)_Var12.unknown == (String *)0x0 &&
         (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
        (String *)DVar43.unknown == (String *)0x0)) {
      local_48 = (String *)0x8000000100daaee0;
      local_50 = (String *)0xd00000000000002e;
      goto LAB_1004c72ec;
    }
    if ((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x2 &&
        (((String *)_Var12.unknown == (String *)0x0 &&
         (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
        (String *)DVar43.unknown == (String *)0x0)) {
      local_48 = (String *)0x8000000100daaea0;
      local_50 = (String *)0xd000000000000030;
      goto LAB_1004c72ec;
    }
    if (((String *)UNRECOVERED_JUMPTABLE_01.unknown != (String *)0x3) ||
       (((String *)_Var12.unknown != (String *)0x0 ||
        (String *)UNRECOVERED_JUMPTABLE.unknown != (String *)0x0) ||
        (String *)DVar43.unknown != (String *)0x0)) {
      if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x4) &&
         (((String *)_Var12.unknown == (String *)0x0 &&
          (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
          (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daae10;
        local_50 = (String *)0xd000000000000019;
      }
      else if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x5) &&
              (((String *)_Var12.unknown == (String *)0x0 &&
               (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
               (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daacf0;
        local_50 = (String *)0xd000000000000063;
      }
      else if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x6) &&
              (((String *)_Var12.unknown == (String *)0x0 &&
               (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
               (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daaac0;
        local_50 = (String *)0xd000000000000033;
      }
      else if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x7) &&
              (((String *)_Var12.unknown == (String *)0x0 &&
               (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
               (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daaa50;
        local_50 = (String *)0xd000000000000027;
      }
      else if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x8) &&
              (((String *)_Var12.unknown == (String *)0x0 &&
               (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
               (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daa9d0;
        local_50 = (String *)0xd000000000000038;
      }
      else if (((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)&DAT_00000009) &&
              (((String *)_Var12.unknown == (String *)0x0 &&
               (String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) &&
               (String *)DVar43.unknown == (String *)0x0)) {
        local_48 = (String *)0x8000000100daa970;
        local_50 = (String *)0xd000000000000054;
      }
      else {
        local_48 = (String *)0x8000000100daa8d0;
        local_50 = (String *)0xd000000000000043;
      }
      goto LAB_1004c72ec;
    }
    puVar31 = (ushort *)0x100daae60;
  case 0x3f:
  case 0x5f:
  case 0xab:
  case 0xbf:
  case 0xd3:
  case 0xe7:
  case 0xfb:
    local_48 = (void *)((ulong)puVar31 | 0x8000000000000000);
    local_50 = (String *)((long)&pSVar28[1].str + 6);
    goto LAB_1004c72ec;
  case 0xf:
    FUN_100004640();
    FUN_1004cebd0();
    pcVar7 = (code *)&DAT_100eda3e8;
    pvVar42 = stack0xffffffffffffff88;
    _Stack_88.unknown = DVar43.unknown;
    Swift::Decoder::_container();
    if (pvVar42 == (void *)0x0) {
      UVar13 = Foundation::URL::typeMetadataAccessor();
      SStack_60.bridgeObject = (void *)((ulong)SStack_60.bridgeObject & 0xffffffffffffff00);
      puVar11 = &DAT_100fcbb98;
      FUN_100003a00(&DAT_100fcbb98,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
      _Var6.unknown = _Stack_80.unknown;
      _Var15.unknown = _Stack_88.unknown;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (_Stack_90.unknown,UVar13.unknown,&SStack_60.bridgeObject,_Stack_80.unknown,
                 UVar13.unknown,puVar11);
      FUN_10011532c(_Stack_90.unknown,
                    (String *)((long)&switchD_1004c6de4::switchdataD_100c50a60 - (long)pSVar28),
                    &DAT_100fcb378,&DAT_100c50170);
      SStack_60.bridgeObject._0_1_ = 1;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (UVar13.unknown,&SStack_60.bridgeObject,_Var6.unknown,UVar13.unknown,puVar11);
      FUN_10011532c();
      SStack_60.bridgeObject._0_1_ = 2;
      _Stack_90.unknown =
           (undefined *)((long)&switchD_1004c6de4::switchdataD_100c50a60 - (long)pSVar28);
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (_Var12.unknown,UVar13.unknown,&SStack_60.bridgeObject,_Var6.unknown,UVar13.unknown,
                 puVar11);
      FUN_10011532c(_Var12.unknown,
                    _Stack_90.unknown + *(int *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x18),
                    &DAT_100fcb378,&DAT_100c50170);
      SStack_60.bridgeObject = (void *)CONCAT71(SStack_60.bridgeObject._1_7_,3);
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (pSStack_98,UVar13.unknown,&SStack_60.bridgeObject,_Stack_80.unknown,UVar13.unknown,
                 puVar11);
      _Var12.unknown = _Stack_90.unknown;
      FUN_10011532c(pSStack_98,_Stack_90.unknown + *(int *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x1c)
                    ,&DAT_100fcb378,&DAT_100c50170);
      puVar11 = &DAT_100fcb568;
      FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
      puVar25 = &DAT_100fcbe68;
      FUN_1004cb1cc(&DAT_100fcbe68,
                    PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                    ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
      _Var6.unknown = _Stack_80.unknown;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&SStack_60.bridgeObject,puVar11,&stack0xffffffffffffff9f,_Stack_80.unknown,puVar11,
                 puVar25);
      *(void **)(_Var12.unknown +
                *(int *)&((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x20))->str) =
           SStack_60.bridgeObject;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&SStack_60.bridgeObject,puVar11,&stack0xffffffffffffff9f,_Var6.unknown,puVar11,
                 puVar25);
      *(void **)(_Var12.unknown + *(int *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x24)) =
           SStack_60.bridgeObject;
      SStack_60.bridgeObject = (void *)CONCAT71(SStack_60.bridgeObject._1_7_,6);
      ppvVar22 = &SStack_60.bridgeObject;
      Swift::KeyedDecodingContainer::_decodeIfPresent(ppvVar22,_Var6.unknown);
      (*unaff_x27->bridgeObject)(_Var15.unknown,_Var6.unknown);
      _Var12.unknown[*(int *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x28)] = (char)ppvVar22;
      pcVar7 = FUN_1004ce850;
      FUN_1000c495c(_Var12.unknown,lStack_a0,FUN_1004ce850);
      FUN_100004594(unaff_x20.unknown);
      FUN_10005241c(_Var12.unknown,FUN_1004ce850);
    }
    else {
      FUN_100004594(unaff_x20.unknown);
      _Var12.unknown = unaff_x20.unknown;
    }
    tVar61._ = (NSURLResponse *)pcVar7;
    tVar61._.unknown = _Var12.unknown;
    return tVar61;
  case 0x10:
  case 0x11:
  case 0x48:
    goto switchD_1004c6de4_caseD_10;
  case 0x13:
    iVar27 = (int)UNRECOVERED_JUMPTABLE_01.unknown;
    pNVar38 = (NSURLResponse *)(ulong)(&switchD_1004c6de4::switchdataD_100c50a60)[(long)pSVar28];
    if (iVar27 != 2) {
      HVar10.unknown = (undefined *)(String *)0x8000000100dab010;
      pNVar38 = (NSURLResponse *)(in_x12 & 0xffffffffffff | 0xd000000000000000);
    }
    if (iVar27 != 0) {
      pSVar28 = (String *)0xed00007465726365;
      puVar31 = (ushort *)(NSURLResponse *)0x735f746e65696c63;
    }
    if (iVar27 < 2) {
      HVar10.unknown = (undefined *)pSVar28;
      pNVar38 = (NSURLResponse *)puVar31;
    }
    SVar103.bridgeObject = HVar10.unknown;
    SVar103.str = (char *)pNVar38;
    Swift::String::hash((Hasher)&SStack_60.bridgeObject,SVar103);
    _swift_bridgeObjectRelease();
    tVar62._.unknown = (undefined *)Swift::Hasher::_finalize(HVar10);
    tVar62._ = pNVar38;
    return tVar62;
  case 0x15:
  case 0x92:
    goto switchD_1004c6de4_caseD_15;
  case 0x1c:
    goto switchD_1004c6de4_caseD_1c;
  case 0x1d:
  case 0x27:
  case 0x2b:
  case 0x2f:
  case 0x33:
  case 0x37:
  case 0x41:
  case 0x4b:
  case 0x4f:
  case 0x53:
  case 0x57:
  case 0x99:
  case 0xa3:
  case 0xad:
  case 0xb7:
  case 0xc1:
  case 0xcb:
  case 0xd5:
  case 0xdf:
  case 0xe9:
  case 0xf3:
    goto switchD_1004c6de4_caseD_1d;
  case 0x1e:
    FUN_1000f7830(UNRECOVERED_JUMPTABLE_00.unknown,param_3.unknown + 0xb50);
    _memcpy(UNRECOVERED_JUMPTABLE_01.unknown + (long)DVar43.unknown,
            (undefined1 *)
            ((long)&((String *)DVar43.unknown)->str + (long)&((String *)unaff_x20.unknown)->str),
            *(size_t *)(*(long *)(UNRECOVERED_JUMPTABLE_00.unknown + -8) + 0x40));
    lVar46 = (long)*(int *)((long)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x10))->
                                   bridgeObject + 4);
    lVar33 = (long)*(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->str;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) =
         *(undefined8 *)((long)&((String *)unaff_x20.unknown)->str + lVar46);
    UVar13 = Foundation::URL::typeMetadataAccessor();
    lVar45 = *(long *)(UVar13.unknown + -8);
    lVar46 = (long)&((String *)unaff_x20.unknown)->str + lVar33;
    (**(code **)(lVar45 + 0x30))(lVar46,1,UVar13.unknown);
    if ((int)lVar46 == 0) {
      (**(code **)(lVar45 + 0x20))
                (UNRECOVERED_JUMPTABLE_01.unknown + lVar33,
                 (long)&((String *)unaff_x20.unknown)->str + lVar33,UVar13.unknown);
      pNVar38 = (NSURLResponse *)0x0;
      (**(code **)(lVar45 + 0x38))(UNRECOVERED_JUMPTABLE_01.unknown + lVar33,0,1,UVar13.unknown);
    }
    else {
      puVar11 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      pNVar38 = (NSURLResponse *)((long)&((String *)unaff_x20.unknown)->str + lVar33);
      _memcpy(UNRECOVERED_JUMPTABLE_01.unknown + lVar33,pNVar38,
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar46 = (long)*(int *)((long)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->str + 4
                           );
    iVar27 = *(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->bridgeObject;
    puVar2 = (undefined8 *)((long)&((String *)unaff_x20.unknown)->str + lVar46);
    uVar40 = *puVar2;
    *(undefined8 *)((long)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) + 8) = puVar2[1];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) = uVar40;
    puVar2 = (undefined8 *)((long)&((String *)unaff_x20.unknown)->str + (long)iVar27);
    uVar40 = *puVar2;
    *(undefined8 *)((long)(UNRECOVERED_JUMPTABLE_01.unknown + iVar27) + 8) = puVar2[1];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + iVar27) = uVar40;
    tVar65._ = pNVar38;
    tVar65._.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    return tVar65;
  case 0x1f:
  case 0x43:
  case 0x86:
  case 0x9b:
  case 0xaf:
  case 0xc3:
  case 0xd7:
  case 0xeb:
    goto switchD_1004c6de4_caseD_1f;
  case 0x23:
  case 0x47:
  case 0x9f:
  case 0xb3:
  case 199:
  case 0xdb:
  case 0xef:
    goto switchD_1004c6de4_caseD_23;
  case 0x24:
    goto switchD_1004c6de4_caseD_24;
  case 0x26:
  case 0x2a:
  case 0x2e:
  case 0x32:
  case 0x36:
    goto switchD_1004c6de4_caseD_26;
  case 0x28:
switchD_1004c6de4_caseD_28:
LAB_1004fc310:
    ((String *)((long)DVar43.unknown + 0x10))->str = unaff_x20.unknown;
    ((String *)((long)DVar43.unknown + (undefined1 *)((long)&unaff_x27->str + 2) * 0x10))->str =
         UNRECOVERED_JUMPTABLE.unknown;
    ((String *)((long)DVar43.unknown + (undefined1 *)((long)&unaff_x27->str + 2) * 0x10))->
    bridgeObject = unaff_x25;
    _Var15.unknown = param_3.unknown;
    goto joined_r0x0001004fc330;
  case 0x29:
  case 0x79:
  case 0x81:
  case 0x85:
  case 0x89:
  case 0x8d:
  case 0x91:
    goto switchD_1004c6de4_caseD_29;
  case 0x2c:
    if (DAT_100fcc710.unknown == (undefined *)0x0) {
      pTVar17 = &TargetProtocolConformanceDescriptor_100c526a4;
      pNVar38 = (NSURLResponse *)&DAT_100edb2b8;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c526a4,&DAT_100edb2b8);
      DAT_100fcc710.unknown = (undefined *)pTVar17;
      tVar82._ = pNVar38;
      tVar82._.unknown = (undefined *)pTVar17;
      return tVar82;
    }
    tVar81._ = (NSURLResponse *)param_3.unknown;
    tVar81._.unknown = DAT_100fcc710.unknown;
    return tVar81;
  case 0x2d:
  case 0xa5:
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xf5:
    while( true ) {
      pcVar32 = (&((String *)_Var12.unknown)->str)[(long)unaff_x27];
      pSVar28 = (String *)((long)&pSVar28->str + 1);
      if (pcVar32 != (char *)0x0) {
        uVar29 = ((ulong)pcVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)pcVar32 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = uVar29 >> 0x20 | uVar29 << 0x20;
        uVar35 = (ulong)(pcVar32 + -1) & (ulong)pcVar32;
        while( true ) {
          uVar29 = LZCOUNT(uVar29) | (long)unaff_x27 << 6;
          lVar33 = uVar29 * 0x10;
          uVar3 = *(undefined8 *)
                   (((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x30))->str + lVar33 + 8);
          lVar46 = uVar29 * 0x38;
          puVar2 = (undefined8 *)
                   ((long)((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x30))->bridgeObject +
                   lVar46);
          uVar34 = *puVar2;
          uVar44 = puVar2[6];
          pcVar32 = ((String *)((long)unaff_x20.unknown + 0x30))->str;
          uVar50 = puVar2[5];
          uVar49 = puVar2[4];
          uVar40 = puVar2[3];
          param_3.unknown = (undefined *)puVar2[4];
          uVar47 = puVar2[2];
          local_48 = (void *)puVar2[2];
          local_50 = (String *)puVar2[1];
          *(undefined8 *)(pcVar32 + lVar33) =
               *(undefined8 *)
                (((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x30))->str + lVar33);
          *(undefined8 *)(pcVar32 + lVar33 + 8) = uVar3;
          puVar2 = (undefined8 *)
                   ((long)((String *)((long)unaff_x20.unknown + 0x30))->bridgeObject + lVar46);
          *puVar2 = uVar34;
          puVar2[2] = local_48;
          puVar2[1] = local_50;
          puVar2[3] = uVar40;
          puVar2[5] = uVar50;
          puVar2[4] = uVar49;
          puVar2[6] = uVar44;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(local_50);
          _swift_bridgeObjectRetain(uVar47);
          FUN_10011da54(uVar40,param_3.unknown);
          _swift_bridgeObjectRetain(uVar44);
          pSVar28 = unaff_x27;
          if (uVar35 == 0) break;
          uVar29 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = uVar29 >> 0x20 | uVar29 << 0x20;
          uVar35 = uVar35 - 1 & uVar35;
        }
      }
      unaff_x27 = (String *)((long)&pSVar28->str + 1);
      if (SCARRY8((long)pSVar28,1)) break;
      if ((long)unaff_x28.unknown <= (long)unaff_x27) {
        _swift_release(UNRECOVERED_JUMPTABLE.unknown);
        *(undefined **)SStack_60.bridgeObject = unaff_x20.unknown;
        tVar102._ = (NSURLResponse *)param_3.unknown;
        tVar102._.unknown = UNRECOVERED_JUMPTABLE.unknown;
        return tVar102;
      }
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100506cec);
    (*pcVar7)();
  case 0x30:
    goto switchD_1004c6de4_caseD_30;
  case 0x31:
  case 0x35:
  case 0x39:
  case 0x4d:
  case 0x51:
  case 0x55:
  case 0x59:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100506b0c);
    (*pcVar7)();
  case 0x34:
switchD_1004c6de4_caseD_34:
    in_stack_00000010 =
         (String *)
         ((long)((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + -0x10))->bridgeObject + 0x40);
    UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)0x13f;
    in_stack_00000018 = (String *)UNRECOVERED_JUMPTABLE.unknown;
    goto switchD_1004c6de4_caseD_30;
  case 0x38:
    UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)0x13f;
    FUN_1004f9364();
    if (param_3.unknown < (undefined *)0x40) goto switchD_1004c6de4_caseD_34;
    goto LAB_1004f934c;
  case 0x3b:
  case 0x5b:
  case 0xa0:
  case 0xa7:
  case 0xb4:
  case 0xbb:
  case 200:
  case 0xcf:
  case 0xdc:
  case 0xe3:
  case 0xf0:
  case 0xf7:
switchD_1004c6de4_caseD_3b:
    pSVar28 = (String *)((ulong)UNRECOVERED_JUMPTABLE.unknown & 0xffffffffffff);
    puVar31 = (ushort *)((ulong)_Var12.unknown >> 0x38 & 0xf);
switchD_1004c6de4_caseD_23:
    in_ZR = ((ulong)_Var12.unknown & 0x2000000000000000) == 0;
switchD_1004c6de4_caseD_10:
    if (!(bool)in_ZR) {
      pSVar28 = (String *)puVar31;
    }
switchD_1004c6de4_caseD_24:
    if (pSVar28 == (String *)0x0) {
LAB_1004c7304:
      local_50 = (String *)0x0;
      local_48 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x23,param_3);
      _swift_bridgeObjectRelease(local_48);
      pcVar32 = "Token request failed with status ";
      local_50 = (String *)0xd000000000000021;
LAB_1004c7338:
      local_48 = (void *)((ulong)(pcVar32 + -0x20) | 0x8000000000000000);
      SStack_60.bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
      SVar52 = Swift::CustomStringConvertible::get_description();
      SVar117.bridgeObject = param_5.unknown;
      SVar117.str = param_4.unknown;
      Swift::String::append(SVar52,SVar117);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      goto LAB_1004c72ec;
    }
switchD_1004c6de4_caseD_1f:
    pSVar28 = (String *)0xe000000000000000;
switchD_1004c6de4_caseD_7a:
    local_50 = (String *)0x0;
    local_48 = pSVar28;
switchD_1004c6de4_caseD_15:
    UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)0x35;
switchD_1004c6de4_caseD_29:
    Swift::_StringGuts::grow((__int64)UNRECOVERED_JUMPTABLE_00.unknown,param_3);
    pSVar28 = local_50;
    puVar31 = local_48;
switchD_1004c6de4_caseD_82:
    SVar51.bridgeObject = (void *)0x8000000100daae30;
    SVar51.str = (char *)0xd000000000000021;
    SVar105.bridgeObject = param_5.unknown;
    SVar105.str = param_4.unknown;
    local_50 = pSVar28;
    local_48 = puVar31;
    Swift::String::append(SVar51,SVar105);
    SStack_60.bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
    SVar52 = Swift::CustomStringConvertible::get_description();
    SVar106.bridgeObject = param_5.unknown;
    SVar106.str = param_4.unknown;
    Swift::String::append(SVar52,SVar106);
    _swift_bridgeObjectRelease(SVar52.bridgeObject);
    UNRECOVERED_JUMPTABLE_00.unknown = (char *)0x5f687475616f2820;
    param_3.unknown = (undefined *)0x3a726f727265;
switchD_1004c6de4_caseD_1d:
    SVar53.bridgeObject = (void *)((ulong)param_3.unknown & 0xffffffffffff | 0xef20000000000000);
    SVar53.str = UNRECOVERED_JUMPTABLE_00.unknown;
    SVar107.bridgeObject = param_5.unknown;
    SVar107.str = param_4.unknown;
    Swift::String::append(SVar53,SVar107);
    SVar108.bridgeObject = param_5.unknown;
    SVar108.str = param_4.unknown;
    Swift::String::append(SVar76,SVar108);
LAB_1004c7008:
    UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)(String *)0x29;
    UNRECOVERED_JUMPTABLE.unknown = (undefined *)(String *)0xe100000000000000;
    goto LAB_1004c72e4;
  case 0x3e:
    pNVar38 = ((String *)((long)_Var12.unknown + 0x130))->bridgeObject;
    (*pSVar28->bridgeObject)(UNRECOVERED_JUMPTABLE_00.unknown,pNVar38);
    pcVar32 = ((String *)((long)_Var12.unknown + 0x130))->str;
    pvVar42 = ((String *)((long)_Var12.unknown + 0x110))->bridgeObject;
    _swift_task_dealloc(((String *)((long)_Var12.unknown + 0x140))->bridgeObject);
    _swift_task_dealloc(pcVar32);
    _swift_task_dealloc(pvVar42);
    UNRECOVERED_JUMPTABLE.unknown = ((String *)_Var12.unknown)->bridgeObject;
                    /* WARNING: Could not recover jumptable at 0x0001004d0abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar66._ = pNVar38;
    tVar66._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar66;
  case 0x40:
switchD_1004c6de4_caseD_40:
    UNRECOVERED_JUMPTABLE_00.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    pcVar32 = *(char **)((long)&pSVar28->str + (long)puVar31);
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_00.unknown);
    SVar88.bridgeObject = UNRECOVERED_JUMPTABLE_00.unknown;
    SVar88.str = pcVar32;
    forHTTPHeaderField_00.bridgeObject = (void *)0x8000000100dab710;
    forHTTPHeaderField_00.str = (char *)((long)&unaff_x24->str + 4);
    Foundation::URLRequest::addValue(SVar88,forHTTPHeaderField_00,param_6);
    goto switchD_1004c6de4_caseD_26;
  case 0x42:
    FUN_1000f7830(UNRECOVERED_JUMPTABLE_00.unknown,param_3.unknown + 0x170);
    pNVar38 = (NSURLResponse *)((long)&unaff_x24->str + (long)&((String *)unaff_x20.unknown)->str);
    _memcpy(UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x24,pNVar38,
            *(size_t *)(*(long *)(UNRECOVERED_JUMPTABLE_00.unknown + -8) + 0x40));
    lVar46 = (long)*(int *)((long)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->str + 4
                           );
    puVar2 = (undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46);
    puVar1 = (undefined8 *)((long)&((String *)unaff_x20.unknown)->str + lVar46);
    *puVar2 = *puVar1;
    uVar40 = puVar2[1];
    puVar2[1] = puVar1[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar40);
    puVar2 = (undefined8 *)
             (UNRECOVERED_JUMPTABLE_01.unknown +
             *(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->bridgeObject);
    puVar1 = (undefined8 *)
             ((long)&((String *)unaff_x20.unknown)->str +
             (long)*(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->bridgeObject);
    *puVar2 = *puVar1;
    uVar40 = puVar2[1];
    puVar2[1] = puVar1[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar40);
    tVar64._ = pNVar38;
    tVar64._.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    return tVar64;
  case 0x4a:
  case 0x4e:
  case 0x52:
  case 0x56:
    SVar87.bridgeObject = param_3.unknown;
    SVar87.str = UNRECOVERED_JUMPTABLE_00.unknown;
    forHTTPHeaderField.bridgeObject = param_5.unknown;
    forHTTPHeaderField.str = param_4.unknown;
    Foundation::URLRequest::addValue(SVar87,forHTTPHeaderField,param_6);
    FUN_1001037b4(DVar43.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
    Foundation::URLRequest::_set_httpBody((URLRequest *)unaff_x20.unknown);
    if (unaff_x25->bridgeObject != (String *)0x0) {
      pSVar28 = (String *)((String *)((long)_Var12.unknown + 0x130))->str;
      puVar31 = ((String *)((long)_Var12.unknown + 0xa0))->bridgeObject;
      UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)unaff_x25->bridgeObject;
      goto switchD_1004c6de4_caseD_40;
    }
    goto LAB_1004ebde0;
  case 0x4c:
    goto switchD_1004c6de4_caseD_4c;
  case 0x50:
    goto switchD_1004c6de4_caseD_50;
  case 0x54:
    goto switchD_1004c6de4_caseD_54;
  case 0x58:
    pSVar28->str = UNRECOVERED_JUMPTABLE_00.unknown;
    pSVar28->bridgeObject = param_3.unknown;
    DVar43.unknown = (undefined *)pSVar28;
    unaff_x25 = in_stack_00000010;
    unaff_x26.unknown = (undefined *)in_stack_00000008;
    unaff_x27 = in_stack_00000000;
    goto switchD_1004c6de4_caseD_54;
  case 0x5e:
    local_48 = (void *)((ulong)param_4.unknown & 0xffffffffffff);
    if (((ulong)param_5.unknown & 0x2000000000000000) != 0) {
      local_48 = (void *)((ulong)param_5.unknown >> 0x38 & 0xf);
    }
    local_50 = (String *)0x0;
    _Var12.unknown = param_3.unknown;
    SStack_60.str = param_4.unknown;
    SStack_60.bridgeObject = param_5.unknown;
    _swift_bridgeObjectRetain();
    do {
      Swift::String::Iterator::_next((Iterator)param_5.unknown);
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)(ulong)(_Var12.unknown != (undefined *)0x0);
      _Var15.unknown = _Var12.unknown;
      if (_Var12.unknown == (undefined *)0x0) break;
      if ((param_5.unknown == UNRECOVERED_JUMPTABLE_00.unknown) &&
         (_Var12.unknown == param_3.unknown)) {
        _swift_bridgeObjectRelease(_Var12.unknown);
        UNRECOVERED_JUMPTABLE.unknown = &DAT_00000001;
        _Var15.unknown = _Var12.unknown;
        break;
      }
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (param_5,_Var12,
                         (_StringComparisonResult)(__int8)UNRECOVERED_JUMPTABLE_00.unknown);
      _swift_bridgeObjectRelease();
      param_5.unknown = _Var12.unknown;
      _Var12.unknown = _Var15.unknown;
    } while (!bVar8);
    _swift_bridgeObjectRelease(SStack_60.bridgeObject);
    tVar68._ = (NSURLResponse *)_Var15.unknown;
    tVar68._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar68;
  case 0x68:
    _Var12.unknown = param_3.unknown;
    if (((ulong)param_4.unknown & 1) != 0) {
      _Var12.unknown =
           (undefined *)((ulong)((String *)((long)param_5.unknown + 0x10))->bridgeObject >> 1);
      if ((long)_Var12.unknown < (long)param_3.unknown) {
        if ((long)((long)_Var12.unknown + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004d7448);
          (*pcVar7)();
        }
        _Var12.unknown =
             (undefined *)
             ((ulong)((String *)((long)param_5.unknown + 0x10))->bridgeObject & 0xfffffffffffffffe);
        if ((long)_Var12.unknown <= (long)param_3.unknown) {
          _Var12.unknown = param_3.unknown;
        }
      }
    }
    UNRECOVERED_JUMPTABLE.unknown = ((String *)((long)param_5.unknown + 0x10))->str;
    if ((long)_Var12.unknown <= (long)UNRECOVERED_JUMPTABLE.unknown) {
      _Var12.unknown = UNRECOVERED_JUMPTABLE.unknown;
    }
    HVar16.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((String *)_Var12.unknown == (String *)0x0) goto LAB_1004d73c8;
    HVar16.unknown = &DAT_100fcc450;
    param_3.unknown = &DAT_100c51ec0;
    UNRECOVERED_JUMPTABLE_01.unknown = param_5.unknown;
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
  case 0x6a:
    FUN_1000f7830(HVar16.unknown,param_3.unknown);
    param_3.unknown = (undefined *)((long)_Var12.unknown * 0x20 + 0x20);
    _swift_allocObject();
    pSVar130 = (String *)HVar16.unknown;
    _malloc_size();
    pSVar28 = (String *)((long)&pSVar130[-1].bridgeObject + 7);
    if (0x1f < (long)pSVar130) {
      pSVar28 = pSVar130 + -2;
    }
    ((String *)((long)HVar16.unknown + 0x10))->str = UNRECOVERED_JUMPTABLE.unknown;
    ((String *)((long)HVar16.unknown + 0x10))->bridgeObject = (void *)(((long)pSVar28 >> 5) << 1);
    param_5.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    UNRECOVERED_JUMPTABLE_00.unknown = unaff_x20.unknown;
LAB_1004d73c8:
    pSVar28 = (String *)(HVar16.unknown + 0x20);
    pSVar130 = (String *)((long)param_5.unknown + 0x20);
    if (((ulong)UNRECOVERED_JUMPTABLE_00.unknown & 1) == 0) {
      puVar11 = &DAT_100fcc458;
      FUN_1000f7830(&DAT_100fcc458,&DAT_100c51ec8);
      _swift_arrayInitWithCopy(pSVar28,pSVar130,UNRECOVERED_JUMPTABLE.unknown,puVar11);
    }
    else {
      if (HVar16.unknown != param_5.unknown ||
          pSVar130 + (long)UNRECOVERED_JUMPTABLE.unknown * 2 <= pSVar28) {
        _memmove(pSVar28,pSVar130,(long)UNRECOVERED_JUMPTABLE.unknown << 5);
        param_3.unknown = (undefined *)pSVar130;
      }
      ((String *)((long)param_5.unknown + 0x10))->str = (char *)0x0;
      pSVar130 = (String *)param_3.unknown;
    }
    _swift_release(param_5.unknown);
    tVar77._ = (NSURLResponse *)pSVar130;
    tVar77._.unknown = HVar16.unknown;
    return tVar77;
  case 0x69:
  case 0x6b:
    uVar40 = 0xff;
    SStack_c8.str = _Var12.unknown;
    SStack_c8.bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
    FUN_1004e422c(0xff,UNRECOVERED_JUMPTABLE_01.unknown,_Var12.unknown);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c533d4,uVar40);
    KVar19 = Swift::KeyedEncodingContainer::typeMetadataAccessor();
    pNVar38 = *(NSURLResponse **)(KVar19.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(pNVar38 + 0x40) + 0xfU & 0xfffffffffffffff0)
    ;
    pcVar32 = (char *)((long)pSVar28 - extraout_x8_03);
    FUN_100004640();
    Swift::Encoder::_container();
    _Var12.unknown = _Stack_88.unknown;
    _Stack_80.unknown._0_1_ = 0;
    uVar40 = 0x302e32;
    Swift::KeyedEncodingContainer::_encode(0x302e32,0xe300000000000000,&_Stack_80,KVar19.unknown);
    if ((NSURLResponse *)_Var12.unknown == (NSURLResponse *)0x0) {
      _Stack_80.unknown._0_1_ = 1;
      _Stack_88.unknown = pNVar38;
      FUN_1004e3af4();
      Swift::KeyedEncodingContainer::_encode
                (_Stack_90.unknown,&_Stack_80,KVar19.unknown,&DAT_100edaca0,uVar40);
      (*(code *)pSStack_a8[1].str)
                (pSVar28,_Stack_90.unknown + *(int *)((long)&pSStack_98[2].str + 4),pNStack_b8);
      pSVar130 = pSVar28;
      _swift_getEnumCaseMultiPayload(pSVar28,pNStack_b8);
      if ((int)pSVar130 == 1) {
        UNRECOVERED_JUMPTABLE.unknown = pSVar28->str;
        pNVar38 = pSVar28->bridgeObject;
        __Stack_80 = *pSVar28;
        pcVar39 = pSVar28[1].str;
        uVar4 = *(undefined1 *)&pSVar28[1].bridgeObject;
        SStack_60.bridgeObject = (void *)CONCAT17(3,SStack_60.bridgeObject._0_7_);
        FUN_1004e4238();
        Swift::KeyedEncodingContainer::_encode
                  (&_Stack_80,(undefined1 *)((long)&SStack_60.bridgeObject + 7),KVar19.unknown,
                   &DAT_100eda9c8,pSVar130);
        (**(code **)(_Stack_88.unknown + 8))(pcVar32,KVar19.unknown);
        FUN_1004d9f84(UNRECOVERED_JUMPTABLE.unknown,pNVar38,pcVar39,uVar4);
        goto LAB_1004e4208;
      }
      (**(code **)(lStack_a0 + 0x20))(pSStack_d0,pSVar28);
      _Stack_80.unknown._0_1_ = 2;
      _swift_getAssociatedConformanceWitness(SStack_c8.str,SStack_c8.bridgeObject);
      Swift::KeyedEncodingContainer::_encode(pSStack_d0,&_Stack_80,KVar19.unknown);
      (**(code **)(lStack_a0 + 8))(pSStack_d0);
      pcVar7 = *(code **)(_Stack_88.unknown + 8);
    }
    else {
      pcVar7 = *(code **)(pNVar38 + 8);
    }
    (*pcVar7)(pcVar32,KVar19.unknown);
    UNRECOVERED_JUMPTABLE.unknown = pcVar32;
    pNVar38 = (NSURLResponse *)KVar19.unknown;
LAB_1004e4208:
    tVar85._ = pNVar38;
    tVar85._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar85;
  case 0x6c:
    goto switchD_1004c6de4_caseD_6c;
  case 0x6d:
    _swift_getWitnessTable();
    pSVar28 = (String *)0x100fcc000;
  case 0x6f:
    pSVar28[0x6c].bridgeObject = UNRECOVERED_JUMPTABLE_00.unknown;
    tVar80._ = (NSURLResponse *)param_3.unknown;
    tVar80._.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    return tVar80;
  case 0x6e:
    Swift::String::hash(UNRECOVERED_JUMPTABLE_00,*(String *)((long)unaff_x20.unknown + 0x10));
    if ((String *)UNRECOVERED_JUMPTABLE.unknown == (String *)0x0) {
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,(Hasher)_Var12.unknown);
      tVar79._ = (NSURLResponse *)_Var12.unknown;
      tVar79._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar79;
    }
    Swift::Hasher::_combine(1,(Hasher)_Var12.unknown);
    FUN_1004df778(UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE.unknown);
    tVar78._ = (NSURLResponse *)UNRECOVERED_JUMPTABLE.unknown;
    tVar78._.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    return tVar78;
  case 0x70:
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lStack_f0 = (long)&SStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lStack_f8 = lStack_f0 - extraout_x12;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    pvStack_d8 = ((String *)((long)unaff_x20.unknown + -0x10))->bridgeObject;
    pSStack_e0 = (String *)(lStack_f8 - extraout_x12_00);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)pvStack_d8 + 0x40));
    lStack_108 = (lStack_f8 - extraout_x12_00) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lStack_100 = lStack_108 - extraout_x12_01;
    pNStack_120 = (NSURLResponse *)0xff;
    FUN_1004e3ae8(0xff,_Var12.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53424,pNStack_120);
    pNStack_b8 = (NSURLResponse *)Swift::KeyedDecodingContainer::typeMetadataAccessor();
    lStack_a0 = *(long *)(pNStack_b8 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lStack_128 = lStack_100 - extraout_x8_01;
    pNStack_110 = (NSURLResponse *)0x0;
    pSStack_d0 = (String *)_Var12.unknown;
    FUN_1004e3b34(0,_Var12.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
    lStack_118 = *(long *)(pNStack_110 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pSVar28 = (String *)(lStack_128 - extraout_x8_02);
    FUN_100004640(DVar43.unknown,((String *)((long)DVar43.unknown + 0x10))->bridgeObject);
    Swift::Decoder::_container();
    unaff_x26.unknown = pNStack_b8;
    if (pSStack_98 != (String *)0x0) {
LAB_1004e2ab4:
      FUN_100004594(DVar43.unknown);
      goto LAB_1004e2abc;
    }
    _Stack_90.unknown = _Stack_90.unknown & 0xffffffffffffff00;
    SVar52 = Swift::KeyedDecodingContainer::_decode(&_Stack_90,pNStack_b8);
    _Var12.unknown = SVar52.bridgeObject;
    if (SVar52.str == (undefined *)0x302e32 && _Var12.unknown == (undefined *)0xe300000000000000) {
      _swift_bridgeObjectRelease(_Var12.unknown);
    }
    else {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar52.str,_Var12,(_StringComparisonResult)0x32);
      _swift_bridgeObjectRelease(_Var12.unknown);
      if (!bVar8) {
        _Stack_90.unknown = _Stack_90.unknown & 0xffffffffffffff00;
        DVar9 = Swift::DecodingError::typeMetadataAccessor();
        puVar25 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(DVar9.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        puVar11 = 
        PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
        ;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                   ,unaff_x26.unknown);
        Swift::DecodingError::_dataCorruptedError
                  (puVar25,&_Stack_90,lStack_128,0xd000000000000018,0x8000000100dab550,
                   unaff_x26.unknown,puVar11);
        _swift_willThrow();
        (**(code **)(lStack_a0 + 8))(lStack_128,unaff_x26.unknown);
        pNStack_120 = (NSURLResponse *)unaff_x26.unknown;
        goto LAB_1004e2ab4;
      }
    }
    SStack_60.bridgeObject = (void *)CONCAT17(1,SStack_60.bridgeObject._0_7_);
    FUN_1004e3b40();
    Swift::KeyedDecodingContainer::_decode
              (&_Stack_90,&DAT_100edaca0,(undefined1 *)((long)&SStack_60.bridgeObject + 7),
               unaff_x26.unknown,&DAT_100edaca0,_Var12.unknown);
    pSStack_138 = (String *)_Stack_90.unknown;
    pSVar28->str = _Stack_90.unknown;
    pSVar28->bridgeObject = _Stack_88.unknown;
    pNStack_120 = (NSURLResponse *)_Stack_88.unknown;
    SStack_60.bridgeObject =
         (void *)CONCAT44(SStack_60.bridgeObject._4_4_,(uint)(byte)_Stack_80.unknown);
    *(byte *)&pSVar28[1].str = (byte)_Stack_80.unknown;
    _Stack_90.unknown._0_1_ = 2;
    SVar52 = Swift::KeyedDecodingContainer::_decode(&_Stack_90,unaff_x26.unknown);
    pSStack_130 = pSStack_98;
    *(String *)&pSVar28[1].bridgeObject = SVar52;
    unaff_x25 = (String *)unaff_x20.unknown;
    _swift_conformsToProtocol(unaff_x20.unknown,&TargetProtocolDescriptor_100cb2678);
    _swift_getAssociatedConformanceWitness
              (UNRECOVERED_JUMPTABLE_01.unknown,pSStack_d0,unaff_x20.unknown,0x100cb270c,
               &TargetProtocolRequirement_100cb2714);
    HVar16.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
    unaff_x24 = (String *)unaff_x20.unknown;
    pSStack_98 = pSVar28;
switchD_1004c6de4_caseD_6c:
    param_4.unknown = unaff_x26.unknown;
    UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)unaff_x24;
    if (unaff_x25 == (String *)0x0) {
      _Stack_90.unknown._0_1_ = 3;
      Swift::KeyedDecodingContainer::_decode
                (lStack_f0,UNRECOVERED_JUMPTABLE_00.unknown,&_Stack_90,param_4.unknown,
                 UNRECOVERED_JUMPTABLE_00.unknown,HVar16.unknown);
      if (pSStack_130 == (String *)0x0) {
        (**(code **)(lStack_a0 + 8))(lStack_128,param_4.unknown);
        pvVar42 = pvStack_d8;
        (**(code **)((long)pvStack_d8 + 0x38))(lStack_f0,0,1,UNRECOVERED_JUMPTABLE_00.unknown);
        pcVar7 = *(code **)((long)pvVar42 + 0x20);
        (*pcVar7)(lStack_108,lStack_f0,UNRECOVERED_JUMPTABLE_00.unknown);
        (*pcVar7)((undefined1 *)((long)&pSStack_98->str + (long)*(int *)(pNStack_110 + 0x28)),
                  lStack_108,UNRECOVERED_JUMPTABLE_00.unknown);
        pNStack_120 = pNStack_110;
LAB_1004e2e34:
        (**(code **)(lStack_118 + 0x10))(uStack_e8,pSStack_98,pNStack_120);
        FUN_100004594(DVar43.unknown);
        (**(code **)(lStack_118 + 8))(pSStack_98,pNStack_120);
        DVar43.unknown = (undefined *)pSStack_98;
        goto LAB_1004e2abc;
      }
      uVar40 = 0xd000000000000014;
      _swift_errorRelease(pSStack_130);
      (**(code **)((long)pvStack_d8 + 0x38))(lStack_f0,1,1,UNRECOVERED_JUMPTABLE_00.unknown);
      (**(code **)(SStack_c8.str + 8))(lStack_f0,SStack_c8.bridgeObject);
      _Stack_90.unknown._0_1_ = 3;
      bVar8 = Swift::KeyedDecodingContainer::contains(&_Stack_90,param_4.unknown);
      if (bVar8) {
        _Stack_90.unknown._0_1_ = 3;
        bVar8 = Swift::KeyedDecodingContainer::_decodeNil(&_Stack_90,param_4.unknown);
        if (bVar8) goto LAB_1004e2e70;
        pcVar32 = "Invalid params field";
      }
      else {
LAB_1004e2e70:
        if ((String *)UNRECOVERED_JUMPTABLE_00.unknown == (String *)&DAT_100edb3f8) {
          (**(code **)(lStack_a0 + 8))(lStack_128,param_4.unknown);
          _swift_dynamicCast((undefined1 *)
                             ((long)&pSStack_98->str + (long)*(int *)(pNStack_110 + 0x28)));
          pNStack_120 = pNStack_110;
          goto LAB_1004e2e34;
        }
        pcVar32 = "Missing required params field";
        uVar40 = 0xd00000000000001d;
      }
      DVar9 = Swift::DecodingError::typeMetadataAccessor();
      lVar46 = CONCAT71((int7)((ulong)&_Stack_90 >> 8),DVar9.value);
      puVar11 = 
      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
      _swift_allocError(lVar46,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      Swift::KeyedDecodingContainer::_get_codingPath(param_4);
      Swift::DecodingError::Context::_init
                (puVar11,lVar46,uVar40,(ulong)(pcVar32 + -0x20) | 0x8000000000000000,0);
      (**(code **)(*(long *)(lVar46 + -8) + 0x68))
                (puVar11,*(undefined4 *)
                          PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                 ,lVar46);
      _swift_willThrow();
    }
    else {
      _Stack_90.unknown._0_1_ = 3;
      param_3.unknown = (undefined *)&_Stack_90;
      param_5.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
      pSVar28 = pSStack_e0;
      UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)pSStack_e0;
      unaff_x24 = (String *)UNRECOVERED_JUMPTABLE_00.unknown;
      unaff_x26.unknown = param_4.unknown;
switchD_1004c6de4_caseD_72:
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (pSVar28,UNRECOVERED_JUMPTABLE_00.unknown,param_3.unknown,param_4.unknown,
                 param_5.unknown);
      param_4.unknown = unaff_x26.unknown;
      if (pSStack_130 == (String *)0x0) {
        (**(code **)(SStack_c8.str + 0x20))
                  (lStack_f8,UNRECOVERED_JUMPTABLE_01.unknown,SStack_c8.bridgeObject);
        pvVar42 = pvStack_d8;
        pcVar7 = *(code **)((long)pvStack_d8 + 0x30);
        lVar46 = lStack_f8;
        (*pcVar7)(lStack_f8,1,unaff_x24);
        if ((int)lVar46 == 1) {
          pcVar48 = unaff_x25->bridgeObject;
          stack0xffffffffffffff88 = unaff_x24;
          p_Var18 = &_Stack_90;
          FUN_10000cbb0(p_Var18);
          (*pcVar48)(p_Var18,unaff_x24,unaff_x25);
          (**(code **)(lStack_a0 + 8))(lStack_128,unaff_x26.unknown);
          puVar11 = &DAT_100fcc8b8;
          FUN_1000f7830(&DAT_100fcc8b8,&DAT_100c52a38);
          _swift_dynamicCast(lStack_100,&_Stack_90,puVar11,unaff_x24,7);
          lVar46 = lStack_f8;
          (*pcVar7)(lStack_f8,1,unaff_x24);
          if ((int)lVar46 != 1) {
            (**(code **)(SStack_c8.str + 8))(lStack_f8,SStack_c8.bridgeObject);
          }
        }
        else {
          (**(code **)(lStack_a0 + 8))(lStack_128,unaff_x26.unknown);
          (**(code **)((long)pvVar42 + 0x20))(lStack_100,lStack_f8,unaff_x24);
        }
        (**(code **)((long)pvStack_d8 + 0x20))
                  ((undefined1 *)((long)&pSStack_98->str + (long)*(int *)(pNStack_110 + 0x28)),
                   lStack_100,unaff_x24);
        pNStack_120 = pNStack_110;
        goto LAB_1004e2e34;
      }
    }
    (**(code **)(lStack_a0 + 8))(lStack_128,param_4.unknown);
    FUN_100004594(DVar43.unknown);
    FUN_1004dc818(pSStack_138,pNStack_120,(ulong)SStack_60.bridgeObject & 0xffffffff);
    DVar43.unknown = (undefined *)pSStack_138;
    if (pSStack_130 == (String *)0x0) {
      DVar43.unknown = pSStack_98[2].str;
      _swift_bridgeObjectRelease(DVar43.unknown);
    }
LAB_1004e2abc:
    tVar83._ = pNStack_120;
    tVar83._.unknown = DVar43.unknown;
    return tVar83;
  case 0x71:
    _swift_task_dealloc();
    _swift_task_dealloc();
    UNRECOVERED_JUMPTABLE.unknown = ((String *)_Var12.unknown)->bridgeObject;
                    /* WARNING: Could not recover jumptable at 0x0001004e38d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar84._ = (NSURLResponse *)param_3.unknown;
    tVar84._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar84;
  case 0x72:
    goto switchD_1004c6de4_caseD_72;
  case 0x78:
    _swift_setDeallocating();
    FUN_1000fb4c4();
    FUN_10002cca0(*(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 8));
    _swift_bridgeObjectRelease(DVar43.unknown);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
    UNRECOVERED_JUMPTABLE.unknown = ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x40))->str;
    UNRECOVERED_JUMPTABLE.unknown[8] = 'U';
    UNRECOVERED_JUMPTABLE.unknown[9] = 'n';
    UNRECOVERED_JUMPTABLE.unknown[10] = 'a';
    UNRECOVERED_JUMPTABLE.unknown[0xb] = 'u';
    UNRECOVERED_JUMPTABLE.unknown[0xc] = 't';
    UNRECOVERED_JUMPTABLE.unknown[0xd] = 'h';
    UNRECOVERED_JUMPTABLE.unknown[0xe] = 'o';
    UNRECOVERED_JUMPTABLE.unknown[0xf] = 'r';
    UNRECOVERED_JUMPTABLE.unknown[0] = -0x6f;
    UNRECOVERED_JUMPTABLE.unknown[1] = '\x01';
    UNRECOVERED_JUMPTABLE.unknown[2] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[3] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[4] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[5] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[6] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[7] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x18] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x19] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1a] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1b] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1c] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1d] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1e] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x1f] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x10] = 'i';
    UNRECOVERED_JUMPTABLE.unknown[0x11] = 'z';
    UNRECOVERED_JUMPTABLE.unknown[0x12] = 'e';
    UNRECOVERED_JUMPTABLE.unknown[0x13] = 'd';
    UNRECOVERED_JUMPTABLE.unknown[0x14] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x15] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x16] = '\0';
    UNRECOVERED_JUMPTABLE.unknown[0x17] = -0x14;
    UNRECOVERED_JUMPTABLE.unknown[0x20] = '\x01';
    *(String **)(UNRECOVERED_JUMPTABLE.unknown + 0x28) = unaff_x27;
    *(undefined **)(UNRECOVERED_JUMPTABLE.unknown + 0x30) = _Var12.unknown;
    *(undefined **)(UNRECOVERED_JUMPTABLE.unknown + 0x38) = unaff_x20.unknown;
    lVar46 = 0;
    FUN_1004fe770();
    _swift_storeEnumTagMultiPayload(UNRECOVERED_JUMPTABLE.unknown,lVar46,4);
    pNVar38 = (NSURLResponse *)0x0;
    (**(code **)(*(long *)(lVar46 + -8) + 0x38))(UNRECOVERED_JUMPTABLE.unknown,0,1,lVar46);
    tVar97._ = pNVar38;
    tVar97._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar97;
  case 0x7a:
    goto switchD_1004c6de4_caseD_7a;
  case 0x80:
    goto switchD_1004c6de4_caseD_80;
  case 0x82:
  case 0x8a:
  case 0x8e:
    goto switchD_1004c6de4_caseD_82;
  case 0x84:
  case 0x88:
    goto switchD_1004c6de4_caseD_84;
  case 0x8c:
    FUN_1004a4448();
    ((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->str = unaff_x20.unknown;
    ((String *)
    ((long)UNRECOVERED_JUMPTABLE_00.unknown +
    (ushort *)((long)&((String *)unaff_x28.unknown)->str + 2) * 0x10))->str = (char *)unaff_x25;
    ((String *)
    ((long)UNRECOVERED_JUMPTABLE_00.unknown +
    (ushort *)((long)&((String *)unaff_x28.unknown)->str + 2) * 0x10))->bridgeObject = unaff_x27;
    DVar43.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    _Var15.unknown = param_3.unknown;
    if (((String *)UNRECOVERED_JUMPTABLE.unknown != (String *)0x0) &&
       (pcVar32 = ((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x10))->str,
       pcVar32 != (char *)0x0)) {
      _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE.unknown);
      pcVar23 = pcVar32;
      FUN_1004b4ca0(pcVar32,0);
      pcVar39 = &stack0xffffffffffffffd8;
      FUN_100370d3c(pcVar39,pcVar23 + 0x20,pcVar32,UNRECOVERED_JUMPTABLE.unknown);
      FUN_10000c650(unaff_x21,unaff_x20.unknown,unaff_x19,unaff_x29,unaff_x30);
      if (pcVar39 != pcVar32) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1004fc648);
        (*pcVar7)();
      }
      FUN_1004b7b80(&stack0xffffffffffffffd8);
      FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
      FUN_1004b8a64();
      separator_00.bridgeObject = (void *)0xe100000000000000;
      separator_00.str = (char *)0x20;
      SVar52 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
      _swift_release(pcVar23);
      in_stack_00000010 = (String *)0x5c;
      in_stack_00000018 = (String *)0xe100000000000000;
      in_stack_00000000 = (String *)0x5c5c;
      in_stack_00000008 = (String *)&SUB_e200000000000000;
      __Stack_80 = SVar52;
      SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
      SStack_60.bridgeObject = _Var12.unknown;
      local_50 = (String *)_Var12.unknown;
      local_48 = _Var12.unknown;
      __Stack_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&stack0x00000010,&stack0x00000000,0,0,0,1,
                              UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
      pvVar42 = _Stack_80._8_8_;
      in_stack_00000010 = (String *)0x22;
      in_stack_00000018 = (String *)0xe100000000000000;
      in_stack_00000000 = (String *)0x225c;
      in_stack_00000008 = (String *)&SUB_e200000000000000;
      pcVar32 = (char *)0x0;
      pvVar26 = (void *)0x0;
      SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
      SStack_60.bridgeObject = _Var12.unknown;
      local_50 = (String *)_Var12.unknown;
      local_48 = _Var12.unknown;
      SVar76 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&stack0x00000010,&stack0x00000000,0,0,0,1,UNRECOVERED_JUMPTABLE_01.unknown
                          ,UNRECOVERED_JUMPTABLE_01.unknown);
      _swift_bridgeObjectRelease(pvVar42);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      SVar123.bridgeObject = pvVar26;
      SVar123.str = pcVar32;
      Swift::String::append(SVar76,SVar123);
      _swift_bridgeObjectRelease(SVar76.bridgeObject);
      SVar98.bridgeObject = (void *)0xe100000000000000;
      SVar98.str = (char *)0x22;
      param_3.unknown = (undefined *)0xe100000000000000;
      SVar124.bridgeObject = pvVar26;
      SVar124.str = pcVar32;
      Swift::String::append(SVar98,SVar124);
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x223d65706f6373;
      unaff_x25 = (String *)&DAT_e700000000000000;
      unaff_x27 = (String *)((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->str;
      unaff_x20.unknown = (undefined *)((long)&unaff_x27->str + 1);
      if ((String *)
          ((ulong)((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->bridgeObject >> 1) <=
          unaff_x27) {
        DVar43.unknown =
             (undefined *)
             (ulong)(&DAT_00000001 <
                    ((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->bridgeObject);
        param_3.unknown = unaff_x20.unknown;
        FUN_1004a4448(DVar43.unknown,unaff_x20.unknown,1,UNRECOVERED_JUMPTABLE_00.unknown);
        goto switchD_1004c6de4_caseD_28;
      }
      goto LAB_1004fc310;
    }
joined_r0x0001004fc330:
    if ((String *)unaff_x26.unknown != (String *)0x0) {
      in_stack_00000010 = (String *)0x5c;
      in_stack_00000018 = (String *)0xe100000000000000;
      in_stack_00000000 = (String *)0x5c5c;
      in_stack_00000008 = (String *)&SUB_e200000000000000;
      SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
      SStack_60.bridgeObject = _Var12.unknown;
      local_50 = (String *)_Var12.unknown;
      local_48 = _Var12.unknown;
      __Stack_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&stack0x00000010,&stack0x00000000,0,0,0,1,
                              UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
      pvVar42 = _Stack_80._8_8_;
      in_stack_00000010 = (String *)0x22;
      in_stack_00000018 = (String *)0xe100000000000000;
      in_stack_00000000 = (String *)0x225c;
      in_stack_00000008 = (String *)&SUB_e200000000000000;
      pcVar32 = (char *)0x0;
      pvVar26 = (void *)0x0;
      SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
      SStack_60.bridgeObject = _Var12.unknown;
      local_50 = (String *)_Var12.unknown;
      local_48 = _Var12.unknown;
      SVar52 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&stack0x00000010,&stack0x00000000,0,0,0,1,UNRECOVERED_JUMPTABLE_01.unknown
                          ,UNRECOVERED_JUMPTABLE_01.unknown);
      _swift_bridgeObjectRelease(pvVar42);
      SVar125.bridgeObject = pvVar26;
      SVar125.str = pcVar32;
      Swift::String::append(SVar52,SVar125);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      SVar99.bridgeObject = (void *)0xe100000000000000;
      SVar99.str = (char *)0x22;
      _Var15.unknown = (undefined *)0xe100000000000000;
      SVar126.bridgeObject = pvVar26;
      SVar126.str = pcVar32;
      Swift::String::append(SVar99,SVar126);
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x223d726f727265;
      unaff_x25 = (String *)&DAT_e700000000000000;
      unaff_x26.unknown = ((String *)((long)DVar43.unknown + 0x10))->str;
      param_3.unknown = (undefined *)((long)&((String *)unaff_x26.unknown)->str + 1);
      if ((String *)((ulong)((String *)((long)DVar43.unknown + 0x10))->bridgeObject >> 1) <=
          unaff_x26.unknown) {
        UNRECOVERED_JUMPTABLE_00.unknown =
             (undefined *)
             (ulong)(&DAT_00000001 < ((String *)((long)DVar43.unknown + 0x10))->bridgeObject);
        unaff_x20.unknown = param_3.unknown;
        unaff_x28.unknown = (undefined *)unaff_x23;
switchD_1004c6de4_caseD_90:
        unaff_x23 = (String *)unaff_x28.unknown;
        FUN_1004a4448(UNRECOVERED_JUMPTABLE_00.unknown,param_3.unknown,1,DVar43.unknown);
        _Var15.unknown = param_3.unknown;
        param_3.unknown = unaff_x20.unknown;
        DVar43.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
      }
      ((String *)((long)DVar43.unknown + 0x10))->str = param_3.unknown;
      ((String *)
      ((long)DVar43.unknown + (undefined *)((long)&((String *)unaff_x26.unknown)->str + 2) * 0x10))
      ->str = UNRECOVERED_JUMPTABLE.unknown;
      ((String *)
      ((long)DVar43.unknown + (undefined *)((long)&((String *)unaff_x26.unknown)->str + 2) * 0x10))
      ->bridgeObject = unaff_x25;
    }
    pSVar28 = (String *)DVar43.unknown;
    if (unaff_x24 != (String *)0x0) {
      uVar29 = (ulong)unaff_x23 & 0xffffffffffff;
      if (((ulong)unaff_x24 & 0x2000000000000000) != 0) {
        uVar29 = (ulong)unaff_x24 >> 0x38 & 0xf;
      }
      if (uVar29 != 0) {
        Swift::_StringGuts::grow(0x16,_Var15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        in_stack_00000010 = (String *)0x5c;
        in_stack_00000018 = (String *)0xe100000000000000;
        in_stack_00000000 = (String *)0x5c5c;
        in_stack_00000008 = (String *)&SUB_e200000000000000;
        SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
        SStack_60.bridgeObject = _Var12.unknown;
        local_50 = (String *)_Var12.unknown;
        local_48 = _Var12.unknown;
        __Stack_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                               (&stack0x00000010,&stack0x00000000,0,0,0,1,
                                UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
        pvVar42 = _Stack_80._8_8_;
        in_stack_00000010 = (String *)0x22;
        in_stack_00000018 = (String *)0xe100000000000000;
        in_stack_00000000 = (String *)0x225c;
        in_stack_00000008 = (String *)&SUB_e200000000000000;
        pcVar32 = (char *)0x0;
        pvVar26 = (void *)0x0;
        SStack_60.str = UNRECOVERED_JUMPTABLE_01.unknown;
        SStack_60.bridgeObject = _Var12.unknown;
        local_50 = (String *)_Var12.unknown;
        local_48 = _Var12.unknown;
        SVar52 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&stack0x00000010,&stack0x00000000,0,0,0,1,
                            UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE_01.unknown);
        _swift_bridgeObjectRelease(pvVar42);
        SVar127.bridgeObject = pvVar26;
        SVar127.str = pcVar32;
        Swift::String::append(SVar52,SVar127);
        _swift_bridgeObjectRelease(SVar52.bridgeObject);
        SVar100.bridgeObject = (void *)0xe100000000000000;
        SVar100.str = (char *)0x22;
        SVar128.bridgeObject = pvVar26;
        SVar128.str = pcVar32;
        Swift::String::append(SVar100,SVar128);
        pcVar32 = ((String *)((long)DVar43.unknown + 0x10))->str;
        if ((char *)((ulong)((String *)((long)DVar43.unknown + 0x10))->bridgeObject >> 1) <= pcVar32
           ) {
          pSVar28 = (String *)
                    (ulong)(&DAT_00000001 < ((String *)((long)DVar43.unknown + 0x10))->bridgeObject)
          ;
          FUN_1004a4448(pSVar28,pcVar32 + 1,1,DVar43.unknown);
        }
        pSVar28[1].str = pcVar32 + 1;
        pSVar28[(long)(pcVar32 + 2)].str = (char *)0xd000000000000013;
        pSVar28[(long)(pcVar32 + 2)].bridgeObject = (void *)0x8000000100dac3c0;
      }
    }
    pcVar32 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    pcVar39 = pcVar32;
    FUN_1004b8a64();
    separator_01.bridgeObject = &SUB_e200000000000000;
    separator_01.str = (char *)0x202c;
    SVar52 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_01);
    SVar129.bridgeObject = pcVar39;
    SVar129.str = pcVar32;
    Swift::String::append(SVar52,SVar129);
    _swift_bridgeObjectRelease(pSVar28);
    _swift_bridgeObjectRelease(SVar52.bridgeObject);
    UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)0x20726572616542;
    param_3.unknown = &DAT_e700000000000000;
switchD_1004c6de4_caseD_80:
switchD_1004c6de4_caseD_84:
    tVar101._ = (NSURLResponse *)param_3.unknown;
    tVar101._.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    return tVar101;
  case 0x90:
    goto switchD_1004c6de4_caseD_90;
  case 0x98:
    goto switchD_1004c6de4_caseD_98;
  case 0x9a:
    goto switchD_1004c6de4_caseD_9a;
  case 0xa2:
    goto switchD_1004c6de4_caseD_a2;
  case 0xa4:
    goto switchD_1004c6de4_caseD_a4;
  case 0xaa:
                    /* WARNING: Could not recover jumptable at 0x0001004d0b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00.unknown)();
    tVar67._ = (NSURLResponse *)param_3.unknown;
    tVar67._.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    return tVar67;
  case 0xac:
    goto switchD_1004c6de4_caseD_ac;
  case 0xae:
  case 0xc2:
  case 0xd6:
    goto switchD_1004c6de4_caseD_ae;
  case 0xb6:
    goto switchD_1004c6de4_caseD_b6;
  case 0xb8:
    unaff_x24 = (String *)
                ((long)&switchD_1004c6de4::switchdataD_100c50a60 -
                ((ulong)HVar10.unknown & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    pSVar36 = (String *)((long)unaff_x24 - extraout_x12_02);
    UNRECOVERED_JUMPTABLE.unknown = &DAT_100fcb398;
    FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
    unaff_x28.unknown = ((String *)((long)UNRECOVERED_JUMPTABLE.unknown + -0x10))->bridgeObject;
    pSVar28 = (String *)
              ((ulong)(((String *)((long)unaff_x28.unknown + 0x40))->str + 0xf) & 0xfffffffffffffff0
              );
    unaff_x20.unknown = (undefined *)pSVar36;
switchD_1004c6de4_caseD_a4:
    (*(code *)PTR____chkstk_darwin_100ea82c0)(pSVar28);
    unaff_x27 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
    _Var12.unknown = (undefined *)((long)pSVar36 - extraout_x8_04);
    _swift_beginAccess((undefined1 *)
                       ((long)&_TtC3MCP19HTTPClientTransport::initialSessionIDContinuation->str +
                       (long)&((String *)DVar43.unknown)->str),&pSStack_e0,0,0);
    FUN_1000f8cac((undefined1 *)((long)&unaff_x27->str + (long)&((String *)DVar43.unknown)->str),
                  unaff_x20.unknown);
    pSVar28 = (String *)unaff_x20.unknown;
    (*(code *)((String *)((long)unaff_x28.unknown + 0x30))->str)
              (unaff_x20.unknown,1,UNRECOVERED_JUMPTABLE.unknown);
    if ((int)pSVar28 == 1) {
      FUN_1000fb4c4(unaff_x20.unknown,&DAT_100fcd1d8,&DAT_100c53780);
      lVar46 = *(long *)((long)&((String *)DVar43.unknown)->str +
                        _TtC3MCP19HTTPClientTransport::logger);
      _swift_beginAccess(lVar46 + 0x20,UNRECOVERED_JUMPTABLE_01.unknown + 0xe8,0,0);
      FUN_100076688(lVar46 + 0x20,&SStack_c8);
      FUN_100004640(&SStack_c8,in_stack_ffffffffffffff50);
      (*(code *)pSStack_a8[7].str)(in_stack_ffffffffffffff50,pSStack_a8);
      _Var12.unknown = (undefined *)&SStack_c8;
      FUN_100004594(_Var12.unknown);
      if (1 < ((uint)in_stack_ffffffffffffff50 & 0xff)) goto LAB_1004ea628;
      FUN_100076688(lVar46 + 0x20,(String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x60));
                    /* WARNING: Load size is inaccurate */
      UNRECOVERED_JUMPTABLE.unknown = UNRECOVERED_JUMPTABLE_01.unknown[0x78];
      pcVar32 = ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x80))->str;
      FUN_100004640((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x60),
                    UNRECOVERED_JUMPTABLE.unknown);
      SStack_c8.str = (char *)CONCAT71(SStack_c8.str._1_7_,1);
      SStack_c8.bridgeObject = (void *)0x1000000000000050;
      pNStack_b8 = (NSURLResponse *)0x8000000100dabdb0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x138) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x130))->str = (char *)0x0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x148) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x140))->str = (char *)0x0;
      _Stack_90.unknown = (undefined *)0xd00000000000001d;
      _Stack_88.unknown = (undefined *)0x8000000100dab630;
      stack0xffffffffffffff88 = (String *)0x8000000100dabd90;
      _Stack_80.unknown = (undefined *)0xd00000000000001f;
      UNRECOVERED_JUMPTABLE_01.unknown[0x88] = 1;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x90))->str = (char *)0x1000000000000050;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x98) = (void *)0x8000000100dabdb0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xa8) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xa0))->str = (char *)0x0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xb8) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xb0))->str = (char *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xc0))->str = (char *)0xd00000000000001d;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 200) = (void *)0x8000000100dab630;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xd0))->str = (char *)0xd00000000000001f;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xd8) = (void *)0x8000000100dabd90;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xe0))->str = (char *)0xb3;
      FUN_1004eaa00(&SStack_c8,UNRECOVERED_JUMPTABLE_01.unknown);
      FUN_1004eaa3c(UNRECOVERED_JUMPTABLE_01.unknown + 0x88);
      (**(code **)(pcVar32 + 0x28))(&SStack_c8,UNRECOVERED_JUMPTABLE.unknown,pcVar32);
      FUN_1004eaa3c(&SStack_c8);
    }
    else {
      (*(code *)((String *)((long)unaff_x28.unknown + 0x20))->str)
                (_Var12.unknown,unaff_x20.unknown,UNRECOVERED_JUMPTABLE.unknown);
switchD_1004c6de4_caseD_cc:
      Swift::CheckedContinuation::resume();
      (*((String *)((long)unaff_x28.unknown + 0x30))->bridgeObject)
                (unaff_x24,1,1,UNRECOVERED_JUMPTABLE.unknown);
      _swift_beginAccess((undefined1 *)
                         ((long)&unaff_x27->str + (long)&((String *)DVar43.unknown)->str),&SStack_c8
                         ,0x21,0);
      FUN_1004eaf80(unaff_x24,
                    (undefined1 *)((long)&unaff_x27->str + (long)&((String *)DVar43.unknown)->str));
      _swift_endAccess(&SStack_c8);
      lVar46 = *(long *)((long)&((String *)DVar43.unknown)->str +
                        _TtC3MCP19HTTPClientTransport::logger);
      _swift_beginAccess(lVar46 + 0x20,UNRECOVERED_JUMPTABLE_01.unknown + 0xe8,0,0);
      FUN_100076688(lVar46 + 0x20,&SStack_c8);
      FUN_100004640(&SStack_c8,in_stack_ffffffffffffff50);
      (*(code *)pSStack_a8[7].str)(in_stack_ffffffffffffff50,pSStack_a8);
      FUN_100004594(&SStack_c8);
      if (1 < ((uint)in_stack_ffffffffffffff50 & 0xff)) {
        (*((String *)unaff_x28.unknown)->bridgeObject)(_Var12.unknown,UNRECOVERED_JUMPTABLE.unknown)
        ;
        pSStack_a8 = (String *)UNRECOVERED_JUMPTABLE.unknown;
        goto LAB_1004ea628;
      }
      FUN_100076688(lVar46 + 0x20,(String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x60));
      pvVar42 = *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x78);
      pcVar32 = ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x80))->str;
      FUN_100004640((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x60),pvVar42);
      SStack_c8.str = (char *)CONCAT71(SStack_c8.str._1_7_,1);
      SStack_c8.bridgeObject = (void *)0x1000000000000034;
      pNStack_b8 = (NSURLResponse *)0x8000000100dabe10;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x138) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x130))->str = (char *)0x0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x148) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x140))->str = (char *)0x0;
      _Stack_90.unknown = (undefined *)0xd00000000000001d;
      _Stack_88.unknown = (undefined *)0x8000000100dab630;
      stack0xffffffffffffff88 = (String *)0x8000000100dabd90;
      _Stack_80.unknown = (undefined *)0xd00000000000001f;
      UNRECOVERED_JUMPTABLE_01.unknown[0x88] = 1;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x90))->str = (char *)0x1000000000000034;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0x98) = (void *)0x8000000100dabe10;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xa8) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xa0))->str = (char *)0x0;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xb8) = (void *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xb0))->str = (char *)0x0;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xc0))->str = (char *)0xd00000000000001d;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 200) = (void *)0x8000000100dab630;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xd0))->str = (char *)0xd00000000000001f;
      *(void **)(UNRECOVERED_JUMPTABLE_01.unknown + 0xd8) = (void *)0x8000000100dabd90;
      ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0xe0))->str = (char *)0xb1;
      FUN_1004eaa00(&SStack_c8,UNRECOVERED_JUMPTABLE_01.unknown);
      FUN_1004eaa3c(UNRECOVERED_JUMPTABLE_01.unknown + 0x88);
      (**(code **)(pcVar32 + 0x28))(&SStack_c8,pvVar42,pcVar32);
      FUN_1004eaa3c(&SStack_c8);
      (*((String *)unaff_x28.unknown)->bridgeObject)(_Var12.unknown,UNRECOVERED_JUMPTABLE.unknown);
    }
    _Var12.unknown = UNRECOVERED_JUMPTABLE_01.unknown + 0x60;
    FUN_100004594(_Var12.unknown);
    pSStack_a8 = (String *)UNRECOVERED_JUMPTABLE.unknown;
LAB_1004ea628:
    tVar86._ = (NSURLResponse *)pSStack_a8;
    tVar86._.unknown = _Var12.unknown;
    return tVar86;
  case 0xbe:
    lVar46 = (long)&switchD_1004c6de4::switchdataD_100c50a60 - (long)pSVar28;
    pcVar39 = ((String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x10))->str;
    pcVar32 = (char *)0x0;
    do {
      pcVar23 = pcVar32;
      if (pcVar39 == pcVar23) break;
      (*(code *)unaff_x24[1].str)
                (lVar46,UNRECOVERED_JUMPTABLE_01.unknown +
                        (long)unaff_x24[4].bridgeObject * (long)pcVar23 +
                        ((ulong)*(byte *)&unaff_x24[5].str + 0x20 &
                        ((ulong)*(byte *)&unaff_x24[5].str ^ 0xffffffffffffffff)));
      FUN_1004d21b4();
      bVar8 = Swift::Equatable::___infix(lVar46,UNRECOVERED_JUMPTABLE.unknown);
      param_3.unknown = unaff_x20.unknown;
      (*unaff_x24->bridgeObject)(lVar46);
      pcVar32 = pcVar23 + 1;
    } while (!bVar8);
    tVar69._.unknown._1_7_ = 0;
    tVar69._.unknown._0_1_ = pcVar39 != pcVar23;
    tVar69._ = (NSURLResponse *)param_3.unknown;
    return tVar69;
  case 0xc0:
    goto switchD_1004c6de4_caseD_c0;
  case 0xca:
    goto switchD_1004c6de4_caseD_ca;
  case 0xcc:
    goto switchD_1004c6de4_caseD_cc;
  case 0xd2:
    param_4.unknown = (undefined *)unaff_x25;
    (*(code *)pSVar28)(UNRECOVERED_JUMPTABLE_00.unknown,1);
    if ((int)UNRECOVERED_JUMPTABLE_00.unknown == 1) {
      FUN_1004d11b0();
    }
    else {
      UVar14.unknown = unaff_x26.unknown;
      param_4.unknown = (undefined *)unaff_x25;
      (*(code *)unaff_x27[2].str)();
      Foundation::URLComponents::_get_scheme(UVar14);
      if ((String *)unaff_x20.unknown == (String *)0x0) {
        (*unaff_x27->bridgeObject)();
      }
      else {
        stack0xffffffffffffff88 = (String *)UNRECOVERED_JUMPTABLE_01.unknown;
        SVar70.bridgeObject = unaff_x20.unknown;
        SVar70.str = UVar14.unknown;
        SStack_60.bridgeObject = _Var12.unknown;
        SVar52 = Swift::String::lowercased(SVar70);
        pcVar32 = SVar52.bridgeObject;
        _Stack_88.unknown = SVar52.str;
        SVar71.bridgeObject = pcVar32;
        SVar71.str = _Var12.unknown;
        UVar14.unknown = pcVar32;
        _swift_bridgeObjectRelease();
        Foundation::URLComponents::_get_host((URLComponents)unaff_x20.unknown);
        if (UVar14.unknown == (char *)0x0) {
          (*unaff_x27->bridgeObject)();
        }
        else {
          _Stack_80.unknown = pcVar32;
          SVar72.bridgeObject = UVar14.unknown;
          SVar72.str = unaff_x20.unknown;
          SVar71 = Swift::String::lowercased(SVar72);
          puVar25 = SVar71.bridgeObject;
          _Var15.unknown = SVar71.str;
          puVar11 = puVar25;
          _swift_bridgeObjectRelease();
          uVar29 = (ulong)_Var15.unknown & 0xffffffffffff;
          if (((ulong)puVar25 & 0x2000000000000000) != 0) {
            uVar29 = (ulong)puVar25 >> 0x38 & 0xf;
          }
          if (uVar29 != 0) {
            _Stack_90.unknown = puVar25;
            Foundation::URLComponents::_get_fragment(UVar14);
            _Var12.unknown = SStack_60.bridgeObject;
            UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)stack0xffffffffffffff88;
            if (puVar11 != (undefined *)0x0) {
              _swift_bridgeObjectRelease(_Stack_90.unknown);
              _swift_bridgeObjectRelease(_Stack_80.unknown);
              _swift_bridgeObjectRelease(puVar11);
              (*unaff_x27->bridgeObject)();
              _Var12.unknown = SStack_60.bridgeObject;
              goto LAB_1004d0f0c;
            }
            if ((((ulong)unaff_x28.unknown & 1) == 0) ||
               ((_Stack_88.unknown != (undefined *)0x70747468 ||
                 _Stack_80.unknown != &DAT_e400000000000000 &&
                (bVar8 = Swift::_stringCompareWithSmolCheck
                                   (_Stack_88,_Stack_80,(_StringComparisonResult)0x68), !bVar8)))) {
              _swift_bridgeObjectRelease(_Stack_90.unknown);
              unaff_x28.unknown = _Stack_80.unknown;
switchD_1004c6de4_caseD_fa:
              if (_Stack_88.unknown == (undefined *)0x7370747468 &&
                  unaff_x28.unknown == &DAT_e500000000000000) goto LAB_1004d1138;
              bVar8 = Swift::_stringCompareWithSmolCheck
                                (_Stack_88,unaff_x28,(_StringComparisonResult)0x68);
              _swift_bridgeObjectRelease(unaff_x28.unknown);
              if (!bVar8) {
                UVar13.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
                _swift_bridgeObjectRetain();
                SVar76 = Foundation::URL::get_absoluteString(UVar13);
                SVar52 = SVar76;
                FUN_1004a3fb4();
                pcVar32 = SVar52.str;
                _swift_allocError(&DAT_100ed9e90,pcVar32,0,0);
                *(undefined **)pcVar32 = _Var12.unknown;
                *(undefined **)(pcVar32 + 8) = UNRECOVERED_JUMPTABLE_01.unknown;
                *(String *)(pcVar32 + 0x10) = SVar76;
                pcVar32[0x20] = '\a';
                _swift_willThrow();
              }
            }
            else {
              _Var12.unknown = _Stack_90.unknown;
              if (_Var15.unknown == (undefined *)0x736f686c61636f6c &&
                  _Stack_90.unknown == (undefined *)0xe900000000000074) {
                unaff_x28.unknown = _Stack_80.unknown;
              }
              else {
                bVar8 = Swift::_stringCompareWithSmolCheck
                                  (_Var15,_Stack_90,(_StringComparisonResult)0x6c);
                unaff_x28.unknown = _Stack_80.unknown;
                if ((!bVar8) &&
                   (((_Var15.unknown != (undefined *)0x2e302e302e373231 ||
                     (_Var12.unknown != (undefined *)0xe900000000000031)) &&
                    (bVar8 = Swift::_stringCompareWithSmolCheck
                                       (_Var15,_Var12,(_StringComparisonResult)0x31), !bVar8)))) {
                  if ((_Var15.unknown != (undefined *)0x313a3a) ||
                     (_Var12.unknown != (undefined *)0xe300000000000000)) {
                    bVar8 = Swift::_stringCompareWithSmolCheck
                                      (_Var15,_Var12,(_StringComparisonResult)0x3a);
                    _swift_bridgeObjectRelease(_Var12.unknown);
                    _Var12.unknown = SStack_60.bridgeObject;
                    if (!bVar8) goto switchD_1004c6de4_caseD_fa;
                    goto LAB_1004d1138;
                  }
                  _Var12.unknown = unaff_x28.unknown;
                  unaff_x28.unknown = (char *)0xe300000000000000;
                }
              }
              _swift_bridgeObjectRelease(_Var12.unknown);
LAB_1004d1138:
              _swift_bridgeObjectRelease(unaff_x28.unknown);
            }
            (*unaff_x27->bridgeObject)();
            goto LAB_1004d0f98;
          }
          (*unaff_x27->bridgeObject)();
          _swift_bridgeObjectRelease(_Stack_80.unknown);
        }
        _swift_bridgeObjectRelease(SVar71.bridgeObject);
        UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)stack0xffffffffffffff88;
        _Var12.unknown = SStack_60.bridgeObject;
      }
    }
LAB_1004d0f0c:
    in_stack_ffffffffffffff90 = (char *)0x2064696c61766e49;
    in_stack_ffffffffffffff98 = &DAT_e800000000000000;
    SVar73.bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
    SVar73.str = _Var12.unknown;
    SVar118.bridgeObject = param_5.unknown;
    SVar118.str = param_4.unknown;
    Swift::String::append(SVar73,SVar118);
    UNRECOVERED_JUMPTABLE_00.unknown = (char *)0x203a;
  case 0xe6:
    SVar74.bridgeObject = &SUB_e200000000000000;
    SVar74.str = UNRECOVERED_JUMPTABLE_00.unknown;
    SVar119.bridgeObject = param_5.unknown;
    SVar119.str = param_4.unknown;
    Swift::String::append(SVar74,SVar119);
    SVar52 = Foundation::URL::get_absoluteString((URL)UNRECOVERED_JUMPTABLE_00.unknown);
    unaff_x25 = SVar52.bridgeObject;
    SVar120.bridgeObject = param_5.unknown;
    SVar120.str = param_4.unknown;
    Swift::String::append(SVar52,SVar120);
    _swift_bridgeObjectRelease();
    FUN_1004a3fb4();
    unaff_x26.unknown = &DAT_100ed9e90;
    _swift_allocError(&DAT_100ed9e90,unaff_x25,0,0);
    unaff_x25->str = in_stack_ffffffffffffff90;
    unaff_x25->bridgeObject = in_stack_ffffffffffffff98;
    unaff_x25[1].str = (char *)0x0;
    unaff_x25[1].bridgeObject = (void *)0x0;
    *(undefined1 *)&unaff_x25[2].str = 1;
    _swift_willThrow();
LAB_1004d0f98:
    tVar75._ = (NSURLResponse *)unaff_x25;
    tVar75._.unknown = unaff_x26.unknown;
    return tVar75;
  case 0xd4:
    goto switchD_1004c6de4_caseD_d4;
  case 0xde:
    goto switchD_1004c6de4_caseD_de;
  case 0xe0:
    _swift_deallocClassInstance(UNRECOVERED_JUMPTABLE_00.unknown,0x20,7);
    unaff_x28.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
  case 0xf4:
    *(undefined1 *)&((String *)((long)_Var12.unknown + 0x310))->str = 1;
    ((String *)((long)_Var12.unknown + 0x310))->bridgeObject = (void *)0xd000000000000013;
    ((String *)((long)_Var12.unknown + 800))->str = (char *)unaff_x27;
    ((String *)((long)_Var12.unknown + 800))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0x330))->str = unaff_x20.unknown;
    ((String *)((long)_Var12.unknown + 0x340))->str = (char *)0x0;
    ((String *)((long)_Var12.unknown + 0x330))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0x340))->bridgeObject = (void *)0xd00000000000001d;
    ((String *)((long)_Var12.unknown + 0x350))->str = SStack_60.str;
    ((String *)((long)_Var12.unknown + 0x350))->bridgeObject = (void *)0xd000000000000021;
    ((String *)((long)_Var12.unknown + 0x360))->str = unaff_x26.unknown;
    ((String *)((long)_Var12.unknown + 0x360))->bridgeObject = (void *)0x161;
    *(undefined1 *)&((String *)((long)_Var12.unknown + 0xd0))->str = 1;
    ((String *)((long)_Var12.unknown + 0xd0))->bridgeObject = (void *)0xd000000000000013;
    ((String *)((long)_Var12.unknown + 0xe0))->str = (char *)unaff_x27;
    ((String *)((long)_Var12.unknown + 0xe0))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0xf0))->str = unaff_x20.unknown;
    ((String *)((long)_Var12.unknown + 0xf0))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0x100))->str = (char *)0x0;
    ((String *)((long)_Var12.unknown + 0x100))->bridgeObject = (void *)0xd00000000000001d;
    ((String *)((long)_Var12.unknown + 0x110))->str = SStack_60.str;
    ((String *)((long)_Var12.unknown + 0x110))->bridgeObject = (void *)0xd000000000000021;
    ((String *)((long)_Var12.unknown + 0x120))->str = unaff_x26.unknown;
    ((String *)((long)_Var12.unknown + 0x120))->bridgeObject = (void *)0x161;
    FUN_1004eaa00((String *)((long)_Var12.unknown + 0x310),(String *)((long)_Var12.unknown + 0x10));
    FUN_1004eaa3c((String *)((long)_Var12.unknown + 0xd0));
    (*local_50[2].bridgeObject)((String *)((long)_Var12.unknown + 0x310),local_48);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
    FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x310));
    FUN_100004594((String *)((long)_Var12.unknown + 0x600));
    FUN_1004edafc();
    IVar20 = objc_stub::statusCode((ID)unaff_x24);
    if (((long)IVar20 < 200) || (299 < IVar20)) {
      pNVar38 = extraout_x1;
      _swift_bridgeObjectRelease(unaff_x28.unknown);
    }
    else {
      ((String *)((long)_Var12.unknown + 0x830))->bridgeObject = unaff_x24;
      ((String *)((long)_Var12.unknown + 0x840))->str = unaff_x28.unknown;
      FUN_1004b8f18();
      bVar8 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&DAT_100edc1c8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,IVar20,IVar20);
      if (bVar8) {
        pcVar32 = ((String *)((long)_Var12.unknown + 0x860))->str;
        _swift_bridgeObjectRelease(unaff_x28.unknown);
        pvVar42 = *(void **)(pcVar32 + _TtC3MCP19HTTPClientTransport::logger);
        ((String *)((long)_Var12.unknown + 0x890))->bridgeObject = pvVar42;
        _swift_beginAccess((long)pvVar42 + 0x20,
                           &((String *)((long)_Var12.unknown + 0x760))->bridgeObject,0,0);
        FUN_100076688((long)pvVar42 + 0x20,&((String *)((long)_Var12.unknown + 0x5d0))->bridgeObject
                     );
        pcVar32 = ((String *)((long)_Var12.unknown + 0x5f0))->str;
        pNVar38 = ((String *)((long)_Var12.unknown + 0x5f0))->bridgeObject;
        FUN_100004640(&((String *)((long)_Var12.unknown + 0x5d0))->bridgeObject,pcVar32);
        (**(code **)(pNVar38 + 0x70))(pcVar32,pNVar38);
        FUN_100004594(&((String *)((long)_Var12.unknown + 0x5d0))->bridgeObject);
        if (((ulong)pcVar32 & 0xff) == 0) {
          FUN_100076688((long)pvVar42 + 0x20,(String *)((long)_Var12.unknown + 0x740));
          pNVar38 = ((String *)((long)_Var12.unknown + 0x750))->bridgeObject;
          pcVar32 = ((String *)((long)_Var12.unknown + 0x760))->str;
          FUN_100004640((String *)((long)_Var12.unknown + 0x740),pNVar38);
          *(undefined1 *)&((String *)((long)_Var12.unknown + 0x130))->str = 0;
          ((String *)((long)_Var12.unknown + 0x130))->bridgeObject = (void *)0xd000000000000033;
          ((String *)((long)_Var12.unknown + 0x140))->str = (char *)0x8000000100dabec0;
          ((String *)((long)_Var12.unknown + 0x150))->str = (char *)0x0;
          ((String *)((long)_Var12.unknown + 0x140))->bridgeObject = (void *)0x0;
          ((String *)((long)_Var12.unknown + 0x160))->str = (char *)0x0;
          ((String *)((long)_Var12.unknown + 0x150))->bridgeObject = (void *)0x0;
          ((String *)((long)_Var12.unknown + 0x160))->bridgeObject = (void *)0xd00000000000001d;
          ((String *)((long)_Var12.unknown + 0x170))->str = (char *)0x8000000100dab630;
          ((String *)((long)_Var12.unknown + 0x170))->bridgeObject = (void *)0xd000000000000021;
          ((String *)((long)_Var12.unknown + 0x180))->str = (char *)0x8000000100dabe50;
          ((String *)((long)_Var12.unknown + 0x180))->bridgeObject = (void *)0x168;
          *(undefined1 *)&((String *)((long)_Var12.unknown + 0x3d0))->str = 0;
          ((String *)((long)_Var12.unknown + 0x3d0))->bridgeObject = (void *)0xd000000000000033;
          ((String *)((long)_Var12.unknown + 0x3e0))->str = (char *)0x8000000100dabec0;
          ((String *)((long)_Var12.unknown + 0x3f0))->str = (char *)0x0;
          ((String *)((long)_Var12.unknown + 0x3e0))->bridgeObject = (void *)0x0;
          ((String *)((long)_Var12.unknown + 0x400))->str = (char *)0x0;
          ((String *)((long)_Var12.unknown + 0x3f0))->bridgeObject = (void *)0x0;
          ((String *)((long)_Var12.unknown + 0x400))->bridgeObject = (void *)0xd00000000000001d;
          ((String *)((long)_Var12.unknown + 0x410))->str = (char *)0x8000000100dab630;
          ((String *)((long)_Var12.unknown + 0x410))->bridgeObject = (void *)0xd000000000000021;
          ((String *)((long)_Var12.unknown + 0x420))->str = (char *)0x8000000100dabe50;
          ((String *)((long)_Var12.unknown + 0x420))->bridgeObject = (void *)0x168;
          FUN_1004eaa00((String *)((long)_Var12.unknown + 0x130),
                        (String *)((long)_Var12.unknown + 0x550));
          FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x3d0));
          (**(code **)(pcVar32 + 0x28))((String *)((long)_Var12.unknown + 0x130),pNVar38,pcVar32);
          FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x130));
          FUN_100004594((String *)((long)_Var12.unknown + 0x740));
        }
        pcVar32 = (char *)0xa50;
        _swift_task_alloc();
        ((String *)((long)_Var12.unknown + 0x8a0))->str = pcVar32;
        *(undefined **)pcVar32 = _Var12.unknown;
        *(code **)(pcVar32 + 8) = FUN_1004ed014;
        UNRECOVERED_JUMPTABLE.unknown = ((String *)((long)_Var12.unknown + 0x850))->bridgeObject;
        if (*(String **)PTR____stack_chk_guard_100ea82f0 == (String *)unaff_x20.unknown) {
          FUN_1004f7344(UNRECOVERED_JUMPTABLE.unknown);
          tVar93._ = pNVar38;
          tVar93._.unknown = UNRECOVERED_JUMPTABLE.unknown;
          return tVar93;
        }
        goto LAB_1004ed010;
      }
      ((String *)((long)_Var12.unknown + 0x820))->bridgeObject = unaff_x24;
      ((String *)((long)_Var12.unknown + 0x830))->str = unaff_x28.unknown;
      bVar8 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&DAT_100edc1b8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,IVar20,IVar20);
      if (bVar8) {
        AVar37.unknown = ((String *)((long)_Var12.unknown + 0x890))->str;
        pvVar42 = ((String *)((long)_Var12.unknown + 0x880))->bridgeObject;
        pcVar39 = ((String *)((long)_Var12.unknown + 0x880))->str;
        pcVar32 = ((String *)((long)_Var12.unknown + 0x850))->bridgeObject;
        _swift_bridgeObjectRelease(unaff_x28.unknown);
        ((String *)((long)_Var12.unknown + 0x800))->bridgeObject = (void *)0x0;
        ((String *)((long)_Var12.unknown + 0x810))->str = (char *)0xc000000000000000;
        (**(code **)((long)pvVar42 + 0x10))();
        IVar21 = AsyncBytes::_makeAsyncIterator(AVar37);
        ((String *)((long)_Var12.unknown + 0x7c0))->bridgeObject = IVar21.unknown;
        ((String *)((long)_Var12.unknown + 2000))->str = pcVar32;
        ((String *)((long)_Var12.unknown + 2000))->bridgeObject = pcVar39;
        if (*(String **)PTR____stack_chk_guard_100ea82f0 == (String *)unaff_x20.unknown) {
          pcVar7 = FUN_1004ed2cc;
          pNVar38 = (NSURLResponse *)0x0;
          _swift_task_switch(FUN_1004ed2cc,0,0);
          tVar94._ = pNVar38;
          tVar94._.unknown = pcVar7;
          return tVar94;
        }
        goto LAB_1004ed010;
      }
      lVar46 = *(long *)(((String *)((long)_Var12.unknown + 0x860))->str +
                        _TtC3MCP19HTTPClientTransport::logger);
      pcVar32 = (char *)0x0;
      pvVar26 = (void *)0x0;
      _swift_beginAccess(lVar46 + 0x20,(String *)((long)_Var12.unknown + 0x7e0));
      FUN_100076688(lVar46 + 0x20,(String *)((long)_Var12.unknown + 0x6f0));
      pvVar42 = ((String *)((long)_Var12.unknown + 0x700))->bridgeObject;
      pNVar38 = (NSURLResponse *)((String *)((long)_Var12.unknown + 0x710))->str;
      FUN_100004640((String *)((long)_Var12.unknown + 0x6f0),pvVar42);
      (**(code **)(pNVar38 + 0x70))(pvVar42,pNVar38);
      FUN_100004594((String *)((long)_Var12.unknown + 0x6f0));
      if (((uint)pvVar42 & 0xff) < 5) {
        FUN_100076688(lVar46 + 0x20,(String *)((long)_Var12.unknown + 0x6a0));
        pNVar38 = ((String *)((long)_Var12.unknown + 0x6b0))->bridgeObject;
        pcVar39 = ((String *)((long)_Var12.unknown + 0x6c0))->str;
        _Var15.unknown = pNVar38;
        FUN_100004640();
        Swift::_StringGuts::grow(0x1b,_Var15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar76.bridgeObject = unaff_x28.unknown;
        SVar76.str = (char *)unaff_x24;
        SVar121.bridgeObject = pvVar26;
        SVar121.str = pcVar32;
        Swift::String::append(SVar76,SVar121);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                  ((DefaultStringInterpolation)0xd000000000000019);
        pvVar42 = ((String *)((long)_Var12.unknown + 0x810))->bridgeObject;
        pcVar32 = ((String *)((long)_Var12.unknown + 0x820))->str;
        *(undefined1 *)&((String *)((long)_Var12.unknown + 0x70))->str = 4;
        ((String *)((long)_Var12.unknown + 0x70))->bridgeObject = pvVar42;
        ((String *)((long)_Var12.unknown + 0x80))->str = pcVar32;
        ((String *)((long)_Var12.unknown + 0x90))->str = (char *)0x0;
        ((String *)((long)_Var12.unknown + 0x80))->bridgeObject = (void *)0x0;
        ((String *)((long)_Var12.unknown + 0xa0))->str = (char *)0x0;
        ((String *)((long)_Var12.unknown + 0x90))->bridgeObject = (void *)0x0;
        ((String *)((long)_Var12.unknown + 0xa0))->bridgeObject = (void *)0xd00000000000001d;
        ((String *)((long)_Var12.unknown + 0xb0))->str = (char *)0x8000000100dab630;
        ((String *)((long)_Var12.unknown + 0xb0))->bridgeObject = (void *)0xd000000000000021;
        ((String *)((long)_Var12.unknown + 0xc0))->str = (char *)0x8000000100dabe50;
        ((String *)((long)_Var12.unknown + 0xc0))->bridgeObject = (void *)0x177;
        *(undefined1 *)&((String *)((long)_Var12.unknown + 0x1f0))->str = 4;
        ((String *)((long)_Var12.unknown + 0x1f0))->bridgeObject = pvVar42;
        ((String *)((long)_Var12.unknown + 0x200))->str = pcVar32;
        ((String *)((long)_Var12.unknown + 0x210))->str = (char *)0x0;
        ((String *)((long)_Var12.unknown + 0x200))->bridgeObject = (void *)0x0;
        ((String *)((long)_Var12.unknown + 0x220))->str = (char *)0x0;
        ((String *)((long)_Var12.unknown + 0x210))->bridgeObject = (void *)0x0;
        ((String *)((long)_Var12.unknown + 0x220))->bridgeObject = (void *)0xd00000000000001d;
        ((String *)((long)_Var12.unknown + 0x230))->str = (char *)0x8000000100dab630;
        ((String *)((long)_Var12.unknown + 0x230))->bridgeObject = (void *)0xd000000000000021;
        ((String *)((long)_Var12.unknown + 0x240))->str = (char *)0x8000000100dabe50;
        ((String *)((long)_Var12.unknown + 0x240))->bridgeObject = (void *)0x177;
        FUN_1004eaa00((String *)((long)_Var12.unknown + 0x70),
                      (String *)((long)_Var12.unknown + 0x250));
        FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x1f0));
        (**(code **)(pcVar39 + 0x28))((String *)((long)_Var12.unknown + 0x70),pNVar38,pcVar39);
        _swift_bridgeObjectRelease(unaff_x28.unknown);
        FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x70));
        FUN_100004594((String *)((long)_Var12.unknown + 0x6a0));
      }
      else {
        _swift_bridgeObjectRelease(unaff_x28.unknown);
      }
    }
    pvVar42 = ((String *)((long)_Var12.unknown + 0x870))->bridgeObject;
    _swift_task_dealloc(((String *)((long)_Var12.unknown + 0x890))->str);
    _swift_task_dealloc(pvVar42);
    UNRECOVERED_JUMPTABLE.unknown = ((String *)_Var12.unknown)->bridgeObject;
    if (*(String **)PTR____stack_chk_guard_100ea82f0 == (String *)unaff_x20.unknown) {
                    /* WARNING: Could not recover jumptable at 0x0001004ecb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar92._ = pNVar38;
      tVar92._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar92;
    }
LAB_1004ed010:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case 0xe8:
    FUN_100076688();
    DVar43.unknown = ((String *)((long)_Var12.unknown + 0x5c0))->bridgeObject;
    unaff_x24 = (String *)((String *)((long)_Var12.unknown + 0x5d0))->str;
    unaff_x25 = (String *)((long)_Var12.unknown + 0x5b0);
    FUN_100004640(unaff_x25,DVar43.unknown);
    UNRECOVERED_JUMPTABLE_00.unknown = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
switchD_1004c6de4_caseD_de:
    param_3.unknown = (char *)0x60;
    param_4.unknown = (undefined *)0x7;
    _swift_allocObject();
    unaff_x27 = (String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x20);
    unaff_x27->str = (char *)0x657a6973;
    ((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->bridgeObject = (void *)0x2;
    ((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->str = (char *)0x1;
    pSVar28 = (String *)&DAT_e400000000000000;
    unaff_x26.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
switchD_1004c6de4_caseD_d4:
    ((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x20))->bridgeObject = pSVar28;
    pSVar130 = (String *)0x0;
    unaff_x23 = (String *)0xe000000000000000;
    SVar104.bridgeObject = param_4.unknown;
    SVar104.str = param_3.unknown;
    Swift::String::reserveCapacity(2,SVar104);
    UNRECOVERED_JUMPTABLE_01.unknown = ((String *)((long)_Var12.unknown + 0x800))->bridgeObject;
    UNRECOVERED_JUMPTABLE.unknown = ((String *)((long)_Var12.unknown + 0x810))->str;
    uVar5 = (uint)((ulong)UNRECOVERED_JUMPTABLE.unknown >> 0x20);
    uVar30 = uVar5 >> 0x1e;
    local_48 = DVar43.unknown;
    SStack_60.bridgeObject = unaff_x25;
    local_50 = unaff_x24;
    if (uVar30 < 2) {
      if (uVar5 >> 0x1e == 0) {
        pSVar28 = (String *)((ulong)UNRECOVERED_JUMPTABLE.unknown >> 0x30 & 0xff);
      }
      else {
        iVar27 = (int)((ulong)UNRECOVERED_JUMPTABLE_01.unknown >> 0x20);
        if (SBORROW4(iVar27,(int)UNRECOVERED_JUMPTABLE_01.unknown)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004ed9ec);
          (*pcVar7)();
        }
        pSVar28 = (String *)(long)(iVar27 - (int)UNRECOVERED_JUMPTABLE_01.unknown);
      }
    }
    else {
      pSVar28 = (String *)0x0;
      in_ZR = uVar30 == 2;
switchD_1004c6de4_caseD_ca:
      if (((bool)in_ZR) &&
         (pSVar28 = (String *)
                    ((long)((String *)((long)UNRECOVERED_JUMPTABLE_01.unknown + 0x10))->bridgeObject
                    - (long)((String *)((long)UNRECOVERED_JUMPTABLE_01.unknown + 0x10))->str),
         SBORROW8((long)((String *)((long)UNRECOVERED_JUMPTABLE_01.unknown + 0x10))->bridgeObject,
                  (long)((String *)((long)UNRECOVERED_JUMPTABLE_01.unknown + 0x10))->str))) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1004ed7b0);
        (*pcVar7)();
      }
    }
    puVar31 = (ushort *)"mcp.transport.http.client";
switchD_1004c6de4_caseD_c0:
    unaff_x25 = (String *)((ulong)puVar31 | 0x8000000000000000);
    unaff_x24 = (String *)0x8000000100dabe50;
    DVar43.unknown = (undefined *)0x8000000100dabea0;
    ((String *)((long)_Var12.unknown + 0x840))->bridgeObject = pSVar28;
switchD_1004c6de4_caseD_b6:
    SVar52 = Swift::CustomStringConvertible::get_description();
    SVar122.bridgeObject = param_5.unknown;
    SVar122.str = param_4.unknown;
    Swift::String::append(SVar52,SVar122);
    _swift_bridgeObjectRelease(SVar52.bridgeObject);
    ((String *)((long)unaff_x26.unknown + 0x30))->str = (char *)pSVar130;
    ((String *)((long)unaff_x26.unknown + 0x30))->bridgeObject = unaff_x23;
    *(undefined1 *)&((String *)((long)unaff_x26.unknown + 0x50))->bridgeObject = 0;
switchD_1004c6de4_caseD_ac:
    UNRECOVERED_JUMPTABLE_00.unknown = unaff_x26.unknown;
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    FUN_1004a6a1c();
    _swift_setDeallocating(UNRECOVERED_JUMPTABLE_00.unknown);
    FUN_1000fb4c4(unaff_x27,&DAT_100fcb448,&DAT_100c538d0);
switchD_1004c6de4_caseD_a2:
    _swift_deallocClassInstance(UNRECOVERED_JUMPTABLE_00.unknown,0x20,7);
    *(undefined1 *)&((String *)((long)_Var12.unknown + 0x4f0))->str = 0;
    pSVar28 = (String *)0xd000000000000016;
    ((String *)((long)_Var12.unknown + 0x4f0))->bridgeObject = (void *)0xd000000000000016;
    ((String *)((long)_Var12.unknown + 0x500))->str = DVar43.unknown;
    ((String *)((long)_Var12.unknown + 0x500))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0x510))->str = unaff_x20.unknown;
    puVar31 = (ushort *)&((String *)((long)_Var12.unknown + 0x510))->bridgeObject;
    param_1 = (void *)0x0;
    in_register_00005008 = (char *)0x0;
switchD_1004c6de4_caseD_98:
    *(char **)((long)puVar31 + 8) = in_register_00005008;
    *(void **)puVar31 = param_1;
    pvVar42 = (void *)((long)&pSVar28->str + 7);
    ((String *)((long)_Var12.unknown + 0x520))->bridgeObject = pvVar42;
    ((String *)((long)_Var12.unknown + 0x530))->str = (char *)unaff_x25;
    pvVar26 = (void *)((long)&pSVar28->bridgeObject + 3);
    ((String *)((long)_Var12.unknown + 0x530))->bridgeObject = pvVar26;
    ((String *)((long)_Var12.unknown + 0x540))->str = (char *)unaff_x24;
    ((String *)((long)_Var12.unknown + 0x540))->bridgeObject = (void *)0x174;
    *(undefined1 *)&((String *)((long)_Var12.unknown + 0x2b0))->str = 0;
    ((String *)((long)_Var12.unknown + 0x2b0))->bridgeObject = pSVar28;
    ((String *)((long)_Var12.unknown + 0x2c0))->str = DVar43.unknown;
    ((String *)((long)_Var12.unknown + 0x2c0))->bridgeObject = (void *)0x0;
    ((String *)((long)_Var12.unknown + 0x2d0))->str = unaff_x20.unknown;
    ((String *)((long)_Var12.unknown + 0x2e0))->str = in_register_00005008;
    ((String *)((long)_Var12.unknown + 0x2d0))->bridgeObject = param_1;
    ((String *)((long)_Var12.unknown + 0x2e0))->bridgeObject = pvVar42;
    ((String *)((long)_Var12.unknown + 0x2f0))->str = (char *)unaff_x25;
    ((String *)((long)_Var12.unknown + 0x2f0))->bridgeObject = pvVar26;
    ((String *)((long)_Var12.unknown + 0x300))->str = (char *)unaff_x24;
    ((String *)((long)_Var12.unknown + 0x300))->bridgeObject = (void *)0x174;
    FUN_1004eaa00((String *)((long)_Var12.unknown + 0x4f0),(String *)((long)_Var12.unknown + 0x370))
    ;
    FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x2b0));
    (*local_50[2].bridgeObject)((String *)((long)_Var12.unknown + 0x4f0),local_48);
    FUN_1004eaa3c((String *)((long)_Var12.unknown + 0x4f0));
    FUN_100004594((String *)((long)_Var12.unknown + 0x5b0));
    pvVar42 = ((String *)((long)_Var12.unknown + 0x870))->bridgeObject;
    pcVar32 = ((String *)((long)_Var12.unknown + 0x870))->str;
    pvVar26 = ((String *)((long)_Var12.unknown + 0x860))->bridgeObject;
    ((String *)((long)_Var12.unknown + 0x7f0))->bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
    ((String *)((long)_Var12.unknown + 0x800))->str = UNRECOVERED_JUMPTABLE.unknown;
    FUN_1001037b4(UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE.unknown);
    puVar11 = &DAT_100fcb3a0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_yield
              (pvVar42,&((String *)((long)_Var12.unknown + 0x7f0))->bridgeObject,puVar11);
    (**(code **)(pcVar32 + 8))(pvVar42,pvVar26);
    FUN_10003bf2c(UNRECOVERED_JUMPTABLE_01.unknown,UNRECOVERED_JUMPTABLE.unknown);
    pvVar42 = ((String *)((long)_Var12.unknown + 0x870))->bridgeObject;
    _swift_task_dealloc(((String *)((long)_Var12.unknown + 0x890))->str);
    _swift_task_dealloc(pvVar42);
    UNRECOVERED_JUMPTABLE_01.unknown = ((String *)_Var12.unknown)->bridgeObject;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == unaff_x22) {
                    /* WARNING: Could not recover jumptable at 0x0001004ed9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_01.unknown)();
      tVar95._ = (NSURLResponse *)UNRECOVERED_JUMPTABLE.unknown;
      tVar95._.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
      return tVar95;
    }
LAB_1004ed9ec:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case 0xea:
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain();
    puVar24 = (undefined1 *)((long)&unaff_x25->str + (long)&((String *)unaff_x20.unknown)->str);
    (*(code *)unaff_x27)(puVar24,1,_Var12.unknown);
    if ((int)puVar24 == 0) {
      (*(code *)((String *)((long)unaff_x26.unknown + 0x10))->str)
                (UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x25,
                 (undefined1 *)((long)&unaff_x25->str + (long)&((String *)unaff_x20.unknown)->str),
                 _Var12.unknown);
      (*((String *)((long)unaff_x26.unknown + 0x30))->bridgeObject)
                (UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x25,0,1,_Var12.unknown);
    }
    else {
      puVar11 = &DAT_100fcb550;
      FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
      _memcpy(UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x25,
              (undefined1 *)((long)&unaff_x25->str + (long)&((String *)unaff_x20.unknown)->str),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar46 = (long)*(int *)((long)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x10))->
                                   bridgeObject + 4);
    unaff_x24 = (String *)
                (long)*(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->str;
    uVar40 = *(undefined8 *)((long)&((String *)unaff_x20.unknown)->str + lVar46);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) = uVar40;
    _Var12.unknown = (undefined *)Foundation::URL::typeMetadataAccessor();
    unaff_x25 = *(String **)(_Var12.unknown + -8);
    unaff_x26.unknown = unaff_x25[3].str;
    _swift_bridgeObjectRetain(uVar40);
switchD_1004c6de4_caseD_ae:
    puVar24 = (undefined1 *)((long)&unaff_x24->str + (long)&((String *)unaff_x20.unknown)->str);
    (*(code *)unaff_x26.unknown)(puVar24,1,_Var12.unknown);
    if ((int)puVar24 == 0) {
      (*(code *)unaff_x25[1].str)
                (UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x24,
                 (undefined1 *)((long)&unaff_x24->str + (long)&((String *)unaff_x20.unknown)->str),
                 _Var12.unknown);
      param_3.unknown = (NSURLResponse *)0x0;
      (*unaff_x25[3].bridgeObject)
                (UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x24,0,1,_Var12.unknown);
    }
    else {
      puVar11 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      param_3.unknown =
           (undefined *)((long)&unaff_x24->str + (long)&((String *)unaff_x20.unknown)->str);
      _memcpy(UNRECOVERED_JUMPTABLE_01.unknown + (long)unaff_x24,param_3.unknown,
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar46 = (long)*(int *)((long)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->str + 4
                           );
    iVar27 = *(int *)&((String *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20))->bridgeObject;
    puVar2 = (undefined8 *)((long)&((String *)unaff_x20.unknown)->str + lVar46);
    uVar40 = puVar2[1];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) = *puVar2;
    *(undefined8 *)((long)(UNRECOVERED_JUMPTABLE_01.unknown + lVar46) + 8) = uVar40;
    puVar2 = (undefined8 *)((long)&((String *)unaff_x20.unknown)->str + (long)iVar27);
    uVar40 = puVar2[1];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_01.unknown + iVar27) = *puVar2;
    *(undefined8 *)((long)(UNRECOVERED_JUMPTABLE_01.unknown + iVar27) + 8) = uVar40;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar40);
    UNRECOVERED_JUMPTABLE_00.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
switchD_1004c6de4_caseD_9a:
    tVar63._ = (NSURLResponse *)param_3.unknown;
    tVar63._.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    return tVar63;
  case 0xf2:
    pcVar32 = &DAT_100fcd4e0;
    FUN_1000f7830(&DAT_100fcd4e0,&DAT_100c53918);
    ((String *)((long)_Var12.unknown + 0x640))->str = pcVar32;
    pcVar39 = pcVar32;
    FUN_1004f96c0();
    ((String *)((long)_Var12.unknown + 0x640))->bridgeObject = pcVar39;
    *(char *)&((String *)((long)_Var12.unknown + 0x620))->bridgeObject =
         (char)UNRECOVERED_JUMPTABLE.unknown;
    ppvVar22 = &((String *)((long)_Var12.unknown + 0x620))->bridgeObject;
    FUN_100004640(ppvVar22,pcVar32);
    *(undefined1 *)((long)&((String *)((long)_Var12.unknown + 0x8c0))->str + 2) =
         *(undefined1 *)ppvVar22;
    Foundation::Data::_Representation::_replaceSubrange
              ((Range<__int64>)0x0,0,(_Representation)((char)_Var12.unknown + -0x3e),1);
    FUN_100004594(&((String *)((long)_Var12.unknown + 0x620))->bridgeObject);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == unaff_x22) {
      pcVar7 = FUN_1004ed2cc;
      pNVar38 = (NSURLResponse *)0x0;
      _swift_task_switch(FUN_1004ed2cc,0,0);
      tVar91._ = pNVar38;
      tVar91._.unknown = pcVar7;
      return tVar91;
    }
    goto LAB_1004ed9ec;
  case 0xfa:
    goto switchD_1004c6de4_caseD_fa;
  }
  SVar55.bridgeObject = (void *)((ulong)pcVar39 | 0x8000000000000000);
  SVar55.str = pcVar32;
  SVar112.bridgeObject = param_5.unknown;
  SVar112.str = param_4.unknown;
  Swift::String::append(SVar55,SVar112);
  SVar113.bridgeObject = param_5.unknown;
  SVar113.str = param_4.unknown;
  Swift::String::append(SVar104,SVar113);
  pcVar32 = (char *)0x20746f67202c;
  puVar24 = &DAT_e600000000000000;
LAB_1004c7284:
  SVar56.bridgeObject = puVar24;
  SVar56.str = pcVar32;
  SVar114.bridgeObject = param_5.unknown;
  SVar114.str = param_4.unknown;
  Swift::String::append(SVar56,SVar114);
  UNRECOVERED_JUMPTABLE_01.unknown = _Var12.unknown;
  UNRECOVERED_JUMPTABLE.unknown = DVar43.unknown;
LAB_1004c72e4:
  SVar58.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
  SVar58.str = UNRECOVERED_JUMPTABLE_01.unknown;
  SVar116.bridgeObject = param_5.unknown;
  SVar116.str = param_4.unknown;
  Swift::String::append(SVar58,SVar116);
LAB_1004c72ec:
  tVar59._ = local_48;
  tVar59._.unknown = (undefined *)local_50;
  return tVar59;
switchD_1004c6de4_caseD_54:
  pSVar28[1].str = param_4.unknown;
  pSVar28[1].bridgeObject = param_5.unknown;
  UNRECOVERED_JUMPTABLE_00.unknown = (undefined *)0x0;
  FUN_1004c78dc();
  unaff_x24 = (String *)UNRECOVERED_JUMPTABLE_00.unknown;
switchD_1004c6de4_caseD_50:
  pSVar28 = (String *)
            (long)*(int *)&((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + 0x10))->bridgeObject
  ;
  param_4.unknown = &DAT_100fcb550;
  param_5.unknown = &DAT_100c50000;
switchD_1004c6de4_caseD_4c:
  FUN_10011532c(_Var12.unknown,
                (undefined1 *)((long)&pSVar28->str + (long)&((String *)DVar43.unknown)->str),
                param_4.unknown,(String *)((long)param_5.unknown + 0xb50));
  *(undefined **)
   ((long)&((String *)DVar43.unknown)->str + (long)*(int *)((long)&unaff_x24[1].bridgeObject + 4)) =
       UNRECOVERED_JUMPTABLE.unknown;
  pNVar38 = (NSURLResponse *)
            ((long)&((String *)DVar43.unknown)->str + (long)*(int *)&unaff_x24[2].str);
  FUN_10011532c();
  puVar2 = (undefined8 *)
           ((long)&((String *)DVar43.unknown)->str + (long)*(int *)((long)&unaff_x24[2].str + 4));
  *puVar2 = UNRECOVERED_JUMPTABLE_01.unknown;
  puVar2[1] = unaff_x27;
  puVar2 = (undefined8 *)
           ((long)&((String *)DVar43.unknown)->str + (long)*(int *)&unaff_x24[2].bridgeObject);
  *puVar2 = unaff_x26.unknown;
  puVar2[1] = unaff_x25;
  tVar60._ = pNVar38;
  tVar60._.unknown = unaff_x20.unknown;
  return tVar60;
switchD_1004c6de4_caseD_30:
  FUN_1004f93d8();
  if (param_3.unknown < (undefined *)0x40) {
    in_stack_00000020 =
         (long)((String *)((long)UNRECOVERED_JUMPTABLE_00.unknown + -0x10))->bridgeObject + 0x40;
    pNVar38 = (NSURLResponse *)0x100;
    _swift_updateClassMetadata2
              (UNRECOVERED_JUMPTABLE_01.unknown,0x100,0x13,&SStack_60.bridgeObject,
               (String *)(UNRECOVERED_JUMPTABLE_01.unknown + 0x50));
    if ((String *)UNRECOVERED_JUMPTABLE_01.unknown == (String *)0x0) {
      pNVar38 = (NSURLResponse *)0x0;
    }
  }
  else {
LAB_1004f934c:
    UNRECOVERED_JUMPTABLE_01.unknown = UNRECOVERED_JUMPTABLE_00.unknown;
    pNVar38 = (NSURLResponse *)0x3f;
  }
  tVar96._ = pNVar38;
  tVar96._.unknown = UNRECOVERED_JUMPTABLE_01.unknown;
  return tVar96;
switchD_1004c6de4_caseD_26:
  _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_00.unknown);
LAB_1004ebde0:
  puVar2 = (undefined8 *)
           ((long)((String *)((long)_Var12.unknown + 0xa0))->bridgeObject +
           (long)((String *)((long)_Var12.unknown + 0x130))->bridgeObject);
  UNRECOVERED_JUMPTABLE_01.unknown = (undefined *)puVar2[1];
  if ((String *)UNRECOVERED_JUMPTABLE_01.unknown != (String *)0x0) {
    UNRECOVERED_JUMPTABLE.unknown = (undefined *)*puVar2;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_01.unknown);
    param_4.unknown = (undefined *)0x2d50434d;
switchD_1004c6de4_caseD_1c:
    forHTTPHeaderField_01.str = (char *)((ulong)param_4.unknown & 0xffffffff | 0x7373655300000000);
    SVar89.bridgeObject = UNRECOVERED_JUMPTABLE_01.unknown;
    SVar89.str = UNRECOVERED_JUMPTABLE.unknown;
    forHTTPHeaderField_01.bridgeObject = (void *)0xee0064492d6e6f69;
    Foundation::URLRequest::addValue(SVar89,forHTTPHeaderField_01,param_6);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_01.unknown);
  }
  pcVar32 = ((String *)((long)_Var12.unknown + 0x100))->str;
  if (pcVar32 != (char *)0x0) {
    pvVar26 = ((String *)((long)_Var12.unknown + 0x120))->bridgeObject;
    pvVar42 = ((String *)((long)_Var12.unknown + 0x100))->bridgeObject;
    pvVar41 = ((String *)((long)_Var12.unknown + 0xa0))->bridgeObject;
    _swift_getObjectType();
    pcVar39 = (char *)((long)pvVar41 + (long)pvVar26);
    (**(code **)((long)pvVar42 + 0x18))(pcVar39,pcVar32,pvVar42);
    if (pcVar32 != (char *)0x0) {
      SVar90.bridgeObject = pcVar32;
      SVar90.str = pcVar39;
      Foundation::URLRequest::_setValue(SVar90,(URLRequest_conflict)0x7a69726f68747541);
      _swift_bridgeObjectRelease(pcVar32);
    }
  }
  pcVar32 = ((String *)((long)_Var12.unknown + 0xf0))->str;
  pvVar42 = ((String *)((long)_Var12.unknown + 0xf0))->bridgeObject;
  pcVar39 = ((String *)((long)_Var12.unknown + 0xe0))->str;
  pvVar26 = ((String *)((long)_Var12.unknown + 0xe0))->bridgeObject;
  (*(code *)((String *)((long)_Var12.unknown + 0x140))->str)(pcVar32,pvVar42);
  pcVar7 = *(code **)((long)pvVar26 + 8);
  ((String *)((long)_Var12.unknown + 0x160))->bridgeObject = pcVar7;
  (*pcVar7)(pvVar42,pcVar39);
  (**(code **)((long)pvVar26 + 0x20))(pvVar42,pcVar32,pcVar39);
  pcVar32 = (char *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
  _swift_task_alloc();
  ((String *)((long)_Var12.unknown + 0x170))->str = pcVar32;
  *(undefined **)pcVar32 = _Var12.unknown;
  *(code **)(pcVar32 + 8) = FUN_1004eba10;
  tVar91 = (extension_Foundation)::__C::NSURLSession::_bytes
                     ((URLRequest_conflict)((String *)((long)_Var12.unknown + 0xc0))->str);
  return tVar91;
}



/* Address: 0x1004c74a8 | thunk_FUN_1004a3fb4 */

void thunk_FUN_1004a3fb4(void)

{
  FUN_1004a3fb4();
  return;
}



/* Address: 0x1004c74ac | thunk_FUN_1004c6dac */

void thunk_FUN_1004c6dac(void)

{
  FUN_1004c6dac();
  return;
}



/* Address: 0x1004c74b0 | FUN_1004c74b0 */

void FUN_1004c74b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  switch(param_5) {
  case 0:
    break;
  case 1:
  case 2:
  case 4:
  case 8:
    param_3 = param_2;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xd:
    _swift_bridgeObjectRetain(param_2);
    param_3 = param_4;
    break;
  default:
    return;
  case 0xc:
    param_3 = param_1;
  }
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004c7520 | FUN_1004c7520 */

void FUN_1004c7520(undefined8 *param_1)

{
  FUN_1004b8b24(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1004c7534 | FUN_1004c7534 */

undefined8 * FUN_1004c7534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1004c74b0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1004c7594 | FUN_1004c7594 */

undefined8 * FUN_1004c7594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1004c74b0(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1004b8b24(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1004c7604 | FUN_1004c7604 */

undefined8 * FUN_1004c7604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1004b8b24(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1004c764c | FUN_1004c764c */

int FUN_1004c764c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf1 < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xf2;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 0xf) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1004c7694 | FUN_1004c7694 */

void FUN_1004c7694(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf2) {
    if (0xf1 < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 4) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 0xf2);
    param_1[1] = 0;
    if (0xf1 < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x1004c76dc | FUN_1004c76dc */

uint FUN_1004c76dc(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 0xe;
  if (*(byte *)(param_1 + 8) < 0xe) {
    uVar1 = (uint)*(byte *)(param_1 + 8);
  }
  return uVar1;
}



/* Address: 0x1004c76f4 | FUN_1004c76f4 */

void FUN_1004c76f4(ulong *param_1,uint param_2)

{
  if (0xd < param_2) {
    *param_1 = (ulong)(param_2 - 0xe);
    param_1[1] = 0;
    param_2 = 0xe;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(char *)(param_1 + 4) = (char)param_2;
  return;
}



/* Address: 0x1004c7710 | FUN_1004c7710 */

undefined1  [16] FUN_1004c7710(void)

{
  return ZEXT816(0x100ed9e90);
}



/* Address: 0x1004c7720 | FUN_1004c7720 */

bool FUN_1004c7720(double param_1)

{
  bool bVar1;
  Date DVar2;
  long lVar3;
  undefined1 *puVar4;
  Date DVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  
  puVar8 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffff90 + -extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = (undefined *)(lVar7 - extraout_x12);
  lVar3 = 0;
  FUN_1004c78dc();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar3 + 0x18),puVar9,&DAT_100fcb550,&USHORT_100c50b50);
  puVar4 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,DVar2.unknown);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100fcb550,&USHORT_100c50b50);
    bVar1 = false;
  }
  else {
    DVar5.unknown = puVar8;
    (**(code **)(lVar11 + 0x20))(puVar8,puVar9,DVar2.unknown);
    Foundation::Date::addingTimeInterval(param_1,DVar5);
    puVar6 = &DAT_100fcb560;
    FUN_100003a00(&DAT_100fcb560,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar1 = Swift::Comparable::>__infix(lVar7,puVar8,DVar2.unknown,puVar6);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(lVar7,DVar2.unknown);
    (*pcVar10)(puVar8,DVar2.unknown);
  }
  return bVar1;
}



/* Address: 0x1004c78dc | FUN_1004c78dc */

void FUN_1004c78dc(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcbc20,&TargetStructDescriptor_100cb2138);
  return;
}



/* Address: 0x1004c78f0 | FUN_1004c78f0 */

void FUN_1004c78f0(undefined8 param_1)

{
  FUN_1004c7910(param_1,0x65706f6373);
  return;
}



/* Address: 0x1004c7900 | FUN_1004c7900 */

void FUN_1004c7900(undefined8 param_1)

{
  FUN_1004c7910(param_1,0x726f727265);
  return;
}



/* Address: 0x1004c7910 | FUN_1004c7910 */

undefined1  [16] FUN_1004c7910(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    uVar2 = 0;
    FUN_100071370();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + param_2 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      _swift_bridgeObjectRetain(uVar4);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x1004c7990 | FUN_1004c7990 */

void FUN_1004c7990(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  URL UVar3;
  ulong uVar4;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    uVar4 = 0;
    lVar2 = -0x2fffffffffffffef;
    FUN_100071370();
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar2 * 0x10 + 8);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(param_2);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uVar1);
      return;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004c7a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(param_1,1,1,UVar3.unknown);
  return;
}



/* Address: 0x1004c7a4c | FUN_1004c7a4c */

void FUN_1004c7a4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  lVar2 = 0;
  FUN_1004c78dc();
  FUN_10011532c(param_6,(long)param_1 + (long)*(int *)(lVar2 + 0x18),&DAT_100fcb550,
                &USHORT_100c50b50);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x1c)) = param_7;
  FUN_10011532c(param_8,(long)param_1 + (long)*(int *)(lVar2 + 0x20),&DAT_100fcb378,&DAT_100c50170);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = param_9;
  puVar1[1] = param_10;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x28));
  *param_1 = param_11;
  param_1[1] = param_12;
  return;
}



/* Address: 0x1004c7b14 | FUN_1004c7b14 */

undefined1  [16] FUN_1004c7b14(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    uVar3 = 0;
    lVar2 = -0x2fffffffffffffef;
    FUN_100071370();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar2 * 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      _swift_bridgeObjectRetain(uVar5);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1004c7ba0 | thunk_FUN_1004c9e28 */

void thunk_FUN_1004c9e28(void)

{
  FUN_1004c9e28();
  return;
}



/* Address: 0x1004c7ba4 | thunk_FUN_1004c9ed0 */

void thunk_FUN_1004c9ed0(void)

{
  FUN_1004c9ed0();
  return;
}



/* Address: 0x1004c7ba8 | thunk_FUN_1004c9f54 */

void thunk_FUN_1004c9f54(void)

{
  FUN_1004c9f54();
  return;
}



/* Address: 0x1004c7bac | FUN_1004c7bac */

void FUN_1004c7bac(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fcbef8);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004c7be0 | thunk_FUN_1004ca02c */

void thunk_FUN_1004ca02c(void)

{
  FUN_1004ca02c();
  return;
}



/* Address: 0x1004c7be4 | FUN_1004c7be4 */

undefined1  [16] FUN_1004c7be4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar3 = *unaff_x20;
  uVar5 = 0xd000000000000015;
  pcVar4 = "int_auth_methods_supported";
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000010;
    pcVar4 = "authorizationServer";
  }
  uVar1 = 0x656372756f736572;
  if (cVar3 != '\0') {
    uVar1 = uVar5;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar3 != '\0') {
    puVar2 = (undefined1 *)((ulong)pcVar4 | 0x8000000000000000);
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1004c7c48 | FUN_1004c7c48 */

void FUN_1004c7c48(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fcbef8);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1004c7c74 | FUN_1004c7c74 */

String FUN_1004c7c74(void)

{
  String SVar1;
  
  FUN_1004cea90();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004c7c9c | FUN_1004c7c9c */

String FUN_1004c7c9c(void)

{
  String SVar1;
  
  FUN_1004cea90();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004c7cc4 | FUN_1004c7cc4 */

/* WARNING: Removing unreachable block (ram,0x0001004c8248) */
/* WARNING: Removing unreachable block (ram,0x0001004c818c) */
/* WARNING: Removing unreachable block (ram,0x0001004c807c) */
/* WARNING: Removing unreachable block (ram,0x0001004c7f4c) */
/* WARNING: Removing unreachable block (ram,0x0001004c7fc8) */
/* WARNING: Removing unreachable block (ram,0x0001004c7fdc) */
/* WARNING: Removing unreachable block (ram,0x0001004c8000) */
/* WARNING: Removing unreachable block (ram,0x0001004c8130) */
/* WARNING: Removing unreachable block (ram,0x0001004c81dc) */
/* WARNING: Removing unreachable block (ram,0x0001004c81f4) */
/* WARNING: Removing unreachable block (ram,0x0001004c8260) */
/* WARNING: Removing unreachable block (ram,0x0001004c8280) */
/* WARNING: Removing unreachable block (ram,0x0001004c824c) */
/* WARNING: Removing unreachable block (ram,0x0001004c825c) */
/* WARNING: Removing unreachable block (ram,0x0001004c8284) */
/* WARNING: Removing unreachable block (ram,0x0001004c7ebc) */

void FUN_1004c7cc4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100fcb378;
  local_a0 = param_1;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  local_98 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = &DAT_100fcbe80;
  local_90 = lVar11 - extraout_x12_01;
  FUN_1000f7830(&DAT_100fcbe80,&DAT_100c51160);
  lVar10 = *(long *)(puVar2 + -8);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (lVar11 - extraout_x12_01) - extraout_x8_00;
  lVar3 = 0;
  FUN_1004ce850();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004cebd0();
  local_88 = lVar8;
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_a8 = lVar7;
    UVar4 = Foundation::URL::typeMetadataAccessor();
    local_58 = 0;
    puVar2 = &DAT_100fcbb98;
    FUN_100003a00(&DAT_100fcbb98,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
    puVar5 = local_80;
    lVar8 = local_88;
    lVar7 = local_90;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_90,UVar4.unknown,&local_58,local_80,UVar4.unknown,puVar2);
    FUN_10011532c(lVar7,lVar9,&DAT_100fcb378,&DAT_100c50170);
    local_58 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar11,UVar4.unknown,&local_58,puVar5,UVar4.unknown,puVar2);
    FUN_10011532c(lVar11,lVar9 + *(int *)(lVar3 + 0x14),&DAT_100fcb378,&DAT_100c50170);
    lVar7 = local_a8;
    local_58 = 2;
    local_90 = lVar9;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_a8,UVar4.unknown,&local_58,puVar5,UVar4.unknown,puVar2);
    FUN_10011532c(lVar7,local_90 + *(int *)(lVar3 + 0x18),&DAT_100fcb378,&DAT_100c50170);
    puVar6 = local_98;
    local_58 = 3;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_98,UVar4.unknown,&local_58,local_80,UVar4.unknown,puVar2);
    lVar7 = local_90;
    FUN_10011532c(puVar6,local_90 + *(int *)(lVar3 + 0x1c),&DAT_100fcb378,&DAT_100c50170);
    puVar2 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_61 = 4;
    puVar5 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    puVar1 = local_80;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,puVar2,&local_61,local_80,puVar2,puVar5);
    *(ulong *)(lVar7 + *(int *)(lVar3 + 0x20)) = CONCAT71(uStack_57,local_58);
    local_61 = 5;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar2,&local_61,puVar1,puVar2,puVar5)
    ;
    *(ulong *)(lVar7 + *(int *)(lVar3 + 0x24)) = CONCAT71(uStack_57,local_58);
    local_58 = 6;
    puVar6 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar6,puVar1);
    (**(code **)(lVar10 + 8))(lVar8,puVar1);
    *(char *)(lVar7 + *(int *)(lVar3 + 0x28)) = (char)puVar6;
    FUN_1000c495c(lVar7,local_a0,FUN_1004ce850);
    FUN_100004594(param_2);
    FUN_10005241c(lVar7,FUN_1004ce850);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004c82e0 | FUN_1004c82e0 */

void FUN_1004c82e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1004cb234();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x1004c830c | FUN_1004c830c */

void FUN_1004c830c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1004cada8(*param_1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],param_2[3])
  ;
  return;
}


