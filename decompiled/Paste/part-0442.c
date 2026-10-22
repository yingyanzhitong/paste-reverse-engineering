/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10055fb18 | FUN_10055fb18 */

uint FUN_10055fb18(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  local_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  local_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  local_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  local_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  local_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  local_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  local_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  local_20 = param_2[0xc];
  FUN_100560fcc(&local_f0,&local_80);
  return uVar1 & 1;
}



/* Address: 0x10055fb80 | FUN_10055fb80 */

void FUN_10055fb80(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  long lVar2;
  String SVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  __uint64 _Var6;
  long lVar7;
  char *pcVar8;
  String SVar9;
  
  lVar7 = *unaff_x20;
  if (lVar7 != 1) {
    uVar5 = unaff_x20[1];
    lVar2 = unaff_x20[4];
    SVar3 = *(String *)(unaff_x20 + 3);
    lVar4 = unaff_x20[2];
    Swift::Hasher::_combine(1,param_2);
    if (lVar7 == 0) {
      Swift::Hasher::_combine(0,param_2);
    }
    else {
      Swift::Hasher::_combine(1,param_2);
      _Var6 = *(__uint64 *)(lVar7 + 0x10);
      Swift::Hasher::_combine(_Var6,param_2);
      if (_Var6 != 0) {
        pcVar8 = (char *)(lVar7 + 0x20);
        do {
          puVar1 = (undefined1 *)0xe900000000000074;
          param_2.unknown = (char *)0x6e61747369737361;
          if (*pcVar8 != '\x01') {
            puVar1 = &DAT_e400000000000000;
            param_2.unknown = (char *)0x72657375;
          }
          SVar9.bridgeObject = puVar1;
          SVar9.str = param_2.unknown;
          Swift::String::hash(param_1,SVar9);
          _swift_bridgeObjectRelease(puVar1);
          _Var6 = _Var6 - 1;
          pcVar8 = pcVar8 + 1;
        } while (_Var6 != 0);
      }
    }
    if ((char)lVar4 == '\x01') {
      Swift::Hasher::_combine(0,param_2);
    }
    else {
      Swift::Hasher::_combine(1,param_2);
      _Var6 = 0;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        _Var6 = uVar5;
      }
      Swift::Hasher::_combine(_Var6,param_2);
    }
    if (lVar2 != 0) {
      Swift::Hasher::_combine(1,param_2);
      Swift::String::hash(param_1,SVar3);
      return;
    }
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x10055fcf0 | FUN_10055fcf0 */

void FUN_10055fcf0(Hasher param_1,Hasher param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  __uint64 _Var8;
  String *pSVar9;
  Hasher HVar10;
  Hasher HVar11;
  void *pvVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_228 [168];
  char *local_180;
  void *pvStack_178;
  char *local_170;
  void *pvStack_168;
  char *local_160;
  void *local_158;
  char *local_150;
  void *pvStack_148;
  char *pcStack_140;
  void *pvStack_138;
  char *local_130;
  undefined *puStack_128;
  char *local_120;
  void *pvStack_118;
  char *local_110;
  void *pvStack_108;
  char *local_100;
  undefined *puStack_f8;
  char *local_f0;
  void *local_e8;
  undefined4 local_e0;
  char *local_d0;
  void *pvStack_c8;
  char *local_c0;
  void *pvStack_b8;
  char local_b0;
  char *local_a0;
  void *pvStack_98;
  char *pcStack_90;
  void *pvStack_88;
  undefined1 local_80;
  
  if (param_2.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,(Hasher)0x0);
  }
  else {
    HVar10.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    _Var8 = *(__uint64 *)(param_2.unknown + 0x10);
    Swift::Hasher::_combine(_Var8,HVar10);
    if (_Var8 != 0) {
      pSVar9 = (String *)(param_2.unknown + 0x20);
      do {
        pvStack_178 = pSVar9->bridgeObject;
        HVar10.unknown = pSVar9->str;
        SVar13 = *pSVar9;
        pvVar12 = pSVar9[1].bridgeObject;
        HVar11.unknown = pSVar9[1].str;
        SVar14 = pSVar9[1];
        local_158 = pSVar9[2].bridgeObject;
        local_160 = pSVar9[2].str;
        pvStack_148 = pSVar9[3].bridgeObject;
        local_150 = pSVar9[3].str;
        pvStack_138 = pSVar9[4].bridgeObject;
        pcStack_140 = pSVar9[4].str;
        puStack_128 = pSVar9[5].bridgeObject;
        local_130 = pSVar9[5].str;
        pvStack_118 = pSVar9[6].bridgeObject;
        local_120 = pSVar9[6].str;
        pvStack_108 = pSVar9[7].bridgeObject;
        local_110 = pSVar9[7].str;
        puStack_f8 = pSVar9[8].bridgeObject;
        local_100 = pSVar9[8].str;
        local_e8 = pSVar9[9].bridgeObject;
        local_f0 = pSVar9[9].str;
        local_e0 = *(uint *)&pSVar9[10].str;
        local_180 = HVar10.unknown;
        local_170 = HVar11.unknown;
        pvStack_168 = pvVar12;
        FUN_100558d60(&local_180,auStack_228);
        Swift::String::hash(param_1,SVar13);
        if (pvVar12 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar10);
          HVar11.unknown = HVar10.unknown;
          if (local_158 == (void *)0x0) goto LAB_10055fe2c;
LAB_10055fdf4:
          pvVar12 = local_158;
          HVar10.unknown = local_160;
          Swift::Hasher::_combine(1,HVar11);
          SVar13.bridgeObject = pvVar12;
          SVar13.str = HVar10.unknown;
          Swift::String::hash(param_1,SVar13);
        }
        else {
          Swift::Hasher::_combine(1,HVar10);
          Swift::String::hash(param_1,SVar14);
          HVar10.unknown = HVar11.unknown;
          if (local_158 != (void *)0x0) goto LAB_10055fdf4;
LAB_10055fe2c:
          Swift::Hasher::_combine(0,HVar10);
        }
        puVar6 = puStack_128;
        pvStack_98 = pvStack_148;
        local_a0 = local_150;
        pvStack_88 = pvStack_138;
        pcStack_90 = pcStack_140;
        local_80 = local_130._0_1_;
        FUN_100525cfc(param_1.unknown);
        if (puVar6 == (undefined *)0x0) {
          Swift::Hasher::_combine(0,HVar10);
        }
        else {
          Swift::Hasher::_combine(1,HVar10);
          FUN_1004d7564(param_1.unknown);
          HVar10.unknown = puVar6;
        }
        if (((((ulong)pvStack_108 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           ((char)local_100 == -1)) {
          Swift::Hasher::_combine(0,HVar10);
          if (puStack_f8 == (undefined *)0x0) goto LAB_10055feb4;
LAB_10055fefc:
          HVar11.unknown = puStack_f8;
          Swift::Hasher::_combine(1,HVar10);
          FUN_1004df778(param_1.unknown);
        }
        else {
          pvStack_c8 = pvStack_118;
          local_d0 = local_120;
          local_c0 = local_110;
          pvStack_b8 = pvStack_108;
          local_b0 = (char)local_100;
          Swift::Hasher::_combine(1,HVar10);
          FUN_100525cfc(param_1.unknown);
          if (puStack_f8 != (undefined *)0x0) goto LAB_10055fefc;
LAB_10055feb4:
          Swift::Hasher::_combine(0,HVar10);
          HVar11.unknown = HVar10.unknown;
        }
        uVar1 = local_e0;
        pvVar12 = local_e8;
        pcVar7 = local_f0;
        bVar3 = local_e0._1_1_;
        bVar4 = local_e0._2_1_;
        bVar5 = local_e0._3_1_;
        if (local_e8 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar11);
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          SVar14.bridgeObject = pvVar12;
          SVar14.str = pcVar7;
          Swift::String::hash(param_1,SVar14);
          HVar11.unknown = pcVar7;
        }
        if ((uVar1 & 0xff) == 2) {
          bVar2 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          bVar2 = (byte)uVar1 & 1;
        }
        Swift::Hasher::_combine(bVar2,HVar11);
        if (bVar3 == 2) {
          bVar3 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          bVar3 = bVar3 & 1;
        }
        Swift::Hasher::_combine(bVar3,HVar11);
        if (bVar4 == 2) {
          bVar4 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          bVar4 = bVar4 & 1;
        }
        Swift::Hasher::_combine(bVar4,HVar11);
        if (bVar5 == 2) {
          bVar5 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          bVar5 = bVar5 & 1;
        }
        Swift::Hasher::_combine(bVar5,HVar11);
        FUN_100558d9c(&local_180);
        pSVar9 = (String *)&pSVar9[10].bridgeObject;
        _Var8 = _Var8 - 1;
      } while (_Var8 != 0);
    }
  }
  return;
}



/* Address: 0x100560020 | FUN_100560020 */

bool FUN_100560020(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  _StringGuts _Var16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  bool bVar21;
  int iVar22;
  long *plVar23;
  _StringGuts _Var24;
  long lVar25;
  _StringGuts _Var26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long local_290;
  long lStack_288;
  long local_280;
  long local_278;
  long local_270;
  long lStack_268;
  long local_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  long local_138;
  long local_130;
  undefined1 local_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  
  lStack_178 = param_1[9];
  local_180 = param_1[8];
  lStack_168 = param_1[0xb];
  lStack_170 = param_1[10];
  local_160 = param_1[0xc];
  uStack_158 = (undefined1)param_1[0xd];
  uStack_14f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_157 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  lStack_1b8 = param_1[1];
  local_1c0 = *param_1;
  lStack_1a8 = param_1[3];
  lStack_1b0 = param_1[2];
  lStack_198 = param_1[5];
  local_1a0 = param_1[4];
  lStack_188 = param_1[7];
  lStack_190 = param_1[6];
  iVar22 = (int)&local_1c0;
  FUN_1004dbae4();
  if (iVar22 < 2) {
    if (iVar22 == 0) {
      plVar23 = &local_1c0;
      FUN_100004520();
      _Var24.unknown = (undefined *)*plVar23;
      _Var26.unknown = (undefined *)plVar23[1];
      lStack_1f8 = param_2[9];
      local_200 = param_2[8];
      lStack_1e8 = param_2[0xb];
      local_1f0 = param_2[10];
      lStack_1e0 = param_2[0xc];
      uStack_1d8 = (undefined1)param_2[0xd];
      uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
      local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
      uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
      lStack_238 = param_2[1];
      local_240 = *param_2;
      lStack_228 = param_2[3];
      lStack_230 = param_2[2];
      lStack_218 = param_2[5];
      local_220 = param_2[4];
      lStack_208 = param_2[7];
      lStack_210 = param_2[6];
      iVar22 = (int)&local_240;
      FUN_1004dbae4();
      if (iVar22 != 0) {
        return false;
      }
      plVar23 = &local_240;
      FUN_100004520();
      puVar28 = (undefined *)*plVar23;
      if ((_Var24.unknown == puVar28) && (_Var26.unknown == (undefined *)plVar23[1])) {
        return true;
      }
      goto LAB_100560440;
    }
    plVar23 = &local_1c0;
    FUN_100004520();
    _Var4.unknown = (undefined *)*plVar23;
    _Var5.unknown = (undefined *)plVar23[1];
    _Var24.unknown = (undefined *)plVar23[2];
    _Var26.unknown = (undefined *)plVar23[3];
    lStack_1f8 = param_2[9];
    local_200 = param_2[8];
    lStack_1e8 = param_2[0xb];
    local_1f0 = param_2[10];
    lStack_1e0 = param_2[0xc];
    uStack_1d8 = (undefined1)param_2[0xd];
    uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
    local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
    uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    lStack_238 = param_2[1];
    local_240 = *param_2;
    lStack_228 = param_2[3];
    lStack_230 = param_2[2];
    lStack_218 = param_2[5];
    local_220 = param_2[4];
    lStack_208 = param_2[7];
    lStack_210 = param_2[6];
    iVar22 = (int)&local_240;
    FUN_1004dbae4();
    if (iVar22 != 1) {
      return false;
    }
    plVar23 = &local_240;
    FUN_100004520();
    puVar28 = (undefined *)plVar23[2];
    puVar34 = (undefined *)plVar23[3];
    if (((_Var4.unknown != (undefined *)*plVar23) || (_Var5.unknown != (undefined *)plVar23[1])) &&
       (bVar21 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var5,(_StringComparisonResult)(__int8)(undefined *)*plVar23),
       !bVar21)) {
      return false;
    }
    if (_Var24.unknown != puVar28) goto LAB_100560440;
  }
  else {
    if (iVar22 != 2) {
      if (iVar22 != 3) {
        plVar23 = &local_1c0;
        FUN_100004520();
        _Var24.unknown = (undefined *)*plVar23;
        _Var12.unknown = (undefined *)plVar23[1];
        _Var26.unknown = (undefined *)plVar23[2];
        _Var13.unknown = (undefined *)plVar23[3];
        _Var4.unknown = (undefined *)plVar23[4];
        _Var14.unknown = (undefined *)plVar23[5];
        _Var5.unknown = (undefined *)plVar23[6];
        _Var15.unknown = (undefined *)plVar23[7];
        _Var6.unknown = (undefined *)plVar23[8];
        _Var16.unknown = (undefined *)plVar23[9];
        lVar25 = plVar23[10];
        lVar27 = plVar23[0xb];
        lVar29 = plVar23[0xc];
        lVar30 = plVar23[0xd];
        lVar35 = plVar23[0xe];
        lStack_218 = param_2[5];
        local_220 = param_2[4];
        lStack_208 = param_2[7];
        lStack_210 = param_2[6];
        lStack_1f8 = param_2[9];
        local_200 = param_2[8];
        lStack_1e8 = param_2[0xb];
        local_1f0 = param_2[10];
        lStack_1e0 = param_2[0xc];
        uStack_1d8 = (undefined1)param_2[0xd];
        uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
        local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
        uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
        lStack_238 = param_2[1];
        local_240 = *param_2;
        lStack_228 = param_2[3];
        lStack_230 = param_2[2];
        iVar22 = (int)&local_240;
        FUN_1004dbae4();
        if (iVar22 != 4) {
          return false;
        }
        plVar23 = &local_240;
        FUN_100004520();
        puVar28 = (undefined *)plVar23[2];
        puVar17 = (undefined *)plVar23[3];
        puVar34 = (undefined *)plVar23[4];
        puVar18 = (undefined *)plVar23[5];
        puVar7 = (undefined *)plVar23[6];
        puVar19 = (undefined *)plVar23[7];
        puVar8 = (undefined *)plVar23[8];
        puVar20 = (undefined *)plVar23[9];
        lVar1 = plVar23[10];
        lVar37 = plVar23[0xb];
        lVar36 = plVar23[0xc];
        lVar38 = plVar23[0xd];
        lVar32 = plVar23[0xe];
        if (((_Var24.unknown != (undefined *)*plVar23) ||
            (_Var12.unknown != (undefined *)plVar23[1])) &&
           (bVar21 = Swift::_stringCompareWithSmolCheck
                               (_Var24,_Var12,(_StringComparisonResult)(__int8)(undefined *)*plVar23
                               ), !bVar21)) {
          return false;
        }
        if (((_Var26.unknown != puVar28) || (_Var13.unknown != puVar17)) &&
           (bVar21 = Swift::_stringCompareWithSmolCheck
                               (_Var26,_Var13,(_StringComparisonResult)(__int8)puVar28), !bVar21)) {
          return false;
        }
        if (_Var14.unknown == (undefined *)0x0) {
          if (puVar18 != (undefined *)0x0) {
            return false;
          }
        }
        else {
          if (puVar18 == (undefined *)0x0) {
            return false;
          }
          if (((_Var4.unknown != puVar34) || (_Var14.unknown != puVar18)) &&
             (bVar21 = Swift::_stringCompareWithSmolCheck
                                 (_Var4,_Var14,(_StringComparisonResult)(__int8)puVar34), !bVar21))
          {
            return false;
          }
        }
        if (_Var15.unknown == (undefined *)0x0) {
          if (puVar19 != (undefined *)0x0) {
            return false;
          }
        }
        else {
          if (puVar19 == (undefined *)0x0) {
            return false;
          }
          if (((_Var5.unknown != puVar7) || (_Var15.unknown != puVar19)) &&
             (bVar21 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var15,(_StringComparisonResult)(__int8)puVar7), !bVar21)) {
            return false;
          }
        }
        if (_Var16.unknown == (undefined *)0x0) {
          if (puVar20 != (undefined *)0x0) {
            return false;
          }
        }
        else {
          if (puVar20 == (undefined *)0x0) {
            return false;
          }
          if (((_Var6.unknown != puVar8) || (_Var16.unknown != puVar20)) &&
             (bVar21 = Swift::_stringCompareWithSmolCheck
                                 (_Var6,_Var16,(_StringComparisonResult)(__int8)puVar8), !bVar21)) {
            return false;
          }
        }
        if (lVar25 == 1) {
          if (lVar1 == 1) {
            return true;
          }
        }
        else if (lVar1 != 1) {
          local_280 = CONCAT71(local_280._1_7_,(char)lVar36);
          local_b0 = CONCAT71(local_b0._1_7_,(char)lVar29);
          local_290 = lVar1;
          lStack_288 = lVar37;
          local_278 = lVar38;
          local_270 = lVar32;
          local_c0 = lVar25;
          lStack_b8 = lVar27;
          local_a8 = lVar30;
          local_a0 = lVar35;
          FUN_1004dbc6c();
          FUN_1004dbc6c(lVar25,lVar27,lVar29,lVar30,lVar35);
          plVar23 = &local_c0;
          FUN_10057f470(plVar23,&local_290);
          _swift_bridgeObjectRelease(lVar1);
          _swift_bridgeObjectRelease(lVar32);
          FUN_100558f34(lVar25,lVar27,lVar29,lVar30,lVar35);
          goto joined_r0x000100560734;
        }
        local_290 = lVar25;
        lStack_288 = lVar27;
        local_280 = lVar29;
        local_278 = lVar30;
        local_270 = lVar35;
        lStack_268 = lVar1;
        local_260 = lVar37;
        lStack_258 = lVar36;
        local_250 = lVar38;
        lStack_248 = lVar32;
        FUN_1004dbc6c();
        goto LAB_100560494;
      }
      plVar23 = &local_1c0;
      FUN_100004520();
      lVar38 = plVar23[5];
      lVar36 = plVar23[4];
      lVar41 = plVar23[7];
      lVar39 = plVar23[6];
      lVar1 = plVar23[8];
      lVar25 = plVar23[9];
      lVar42 = plVar23[1];
      lVar40 = *plVar23;
      lVar32 = plVar23[3];
      lVar37 = plVar23[2];
      lVar27 = plVar23[10];
      lVar29 = plVar23[0xb];
      lVar30 = plVar23[0xc];
      lVar35 = plVar23[0xd];
      plVar33 = (long *)plVar23[0xe];
      lStack_238 = param_2[1];
      local_240 = *param_2;
      lStack_228 = param_2[3];
      lStack_230 = param_2[2];
      lStack_218 = param_2[5];
      local_220 = param_2[4];
      lStack_208 = param_2[7];
      lStack_210 = param_2[6];
      uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
      uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
      lStack_1e8 = param_2[0xb];
      local_1f0 = param_2[10];
      lStack_1e0 = param_2[0xc];
      uStack_1d8 = (undefined1)param_2[0xd];
      local_1d7 = (undefined7)((ulong)param_2[0xd] >> 8);
      lStack_1f8 = param_2[9];
      local_200 = param_2[8];
      iVar22 = (int)&local_240;
      FUN_1004dbae4();
      if (iVar22 != 3) {
        return false;
      }
      plVar23 = &local_240;
      FUN_100004520();
      lStack_98 = plVar23[5];
      local_a0 = plVar23[4];
      lStack_88 = plVar23[7];
      lStack_90 = plVar23[6];
      local_80 = plVar23[8];
      lVar9 = plVar23[9];
      lStack_b8 = plVar23[1];
      local_c0 = *plVar23;
      local_a8 = plVar23[3];
      local_b0 = plVar23[2];
      lVar2 = plVar23[10];
      lVar10 = plVar23[0xb];
      lVar3 = plVar23[0xc];
      lVar11 = plVar23[0xd];
      lVar31 = plVar23[0xe];
      plVar23 = &local_110;
      local_110 = lVar40;
      lStack_108 = lVar42;
      lStack_100 = lVar37;
      lStack_f8 = lVar32;
      local_f0 = lVar36;
      lStack_e8 = lVar38;
      lStack_e0 = lVar39;
      lStack_d8 = lVar41;
      local_d0 = lVar1;
      FUN_10057fa24(plVar23,&local_c0);
      if (((ulong)plVar23 & 1) == 0) {
        return false;
      }
      if (lVar25 == 1) {
        if (lVar9 != 1) {
LAB_100560454:
          local_290 = lVar25;
          lStack_288 = lVar27;
          local_280 = lVar29;
          local_278 = lVar30;
          local_270 = lVar35;
          lStack_268 = lVar9;
          local_260 = lVar2;
          lStack_258 = lVar10;
          local_250 = lVar3;
          lStack_248 = lVar11;
          FUN_1004dbc6c(lVar9,lVar2,lVar10,lVar3,lVar11);
LAB_100560494:
          FUN_1004dbc6c(lVar25,lVar27,lVar29,lVar30,lVar35);
          FUN_100558eb0(&local_290);
          return false;
        }
      }
      else {
        if (lVar9 == 1) goto LAB_100560454;
        local_280 = CONCAT71(local_280._1_7_,(char)lVar10);
        local_128 = (undefined1)lVar29;
        local_290 = lVar9;
        lStack_288 = lVar2;
        local_278 = lVar3;
        local_270 = lVar11;
        local_138 = lVar25;
        local_130 = lVar27;
        local_120 = lVar30;
        local_118 = lVar35;
        FUN_1004dbc6c(lVar9,lVar2,lVar10,lVar3,lVar11);
        FUN_1004dbc6c(lVar25,lVar27,lVar29,lVar30,lVar35);
        plVar23 = &local_138;
        FUN_10057f470(plVar23,&local_290);
        _swift_bridgeObjectRelease(lVar9);
        _swift_bridgeObjectRelease(lVar11);
        FUN_100558f34(lVar25,lVar27,lVar29,lVar30,lVar35);
        if (((ulong)plVar23 & 1) == 0) {
          return false;
        }
      }
      if (plVar33 == (long *)0x0) {
        if (lVar31 == 0) {
          return true;
        }
        return false;
      }
      if (lVar31 == 0) {
        return false;
      }
      _swift_bridgeObjectRetain(lVar31);
      plVar23 = plVar33;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(plVar33);
      _swift_bridgeObjectRelease(lVar31);
joined_r0x000100560734:
      if (((ulong)plVar23 & 1) != 0) {
        return true;
      }
      return false;
    }
    plVar23 = &local_1c0;
    FUN_100004520();
    _Var4.unknown = (undefined *)*plVar23;
    _Var5.unknown = (undefined *)plVar23[1];
    _Var24.unknown = (undefined *)plVar23[2];
    _Var26.unknown = (undefined *)plVar23[3];
    lStack_1f8 = param_2[9];
    local_200 = param_2[8];
    lStack_1e8 = param_2[0xb];
    local_1f0 = param_2[10];
    lStack_1e0 = param_2[0xc];
    uStack_1d8 = (undefined1)param_2[0xd];
    uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
    local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
    uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    lStack_238 = param_2[1];
    local_240 = *param_2;
    lStack_228 = param_2[3];
    lStack_230 = param_2[2];
    lStack_218 = param_2[5];
    local_220 = param_2[4];
    lStack_208 = param_2[7];
    lStack_210 = param_2[6];
    iVar22 = (int)&local_240;
    FUN_1004dbae4();
    if (iVar22 != 2) {
      return false;
    }
    plVar23 = &local_240;
    FUN_100004520();
    puVar28 = (undefined *)plVar23[2];
    puVar34 = (undefined *)plVar23[3];
    if (((_Var4.unknown != (undefined *)*plVar23) || (_Var5.unknown != (undefined *)plVar23[1])) &&
       (bVar21 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var5,(_StringComparisonResult)(__int8)(undefined *)*plVar23),
       !bVar21)) {
      return false;
    }
    if (_Var24.unknown != puVar28) goto LAB_100560440;
  }
  if (_Var26.unknown == puVar34) {
    return true;
  }
LAB_100560440:
  bVar21 = Swift::_stringCompareWithSmolCheck
                     (_Var24,_Var26,(_StringComparisonResult)(__int8)puVar28);
  return bVar21;
}



/* Address: 0x10056073c | FUN_10056073c */

undefined8 FUN_10056073c(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_1d0 [128];
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar2)) {
    lVar6 = param_1[2];
    lVar5 = param_2[2];
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 == *(long *)(lVar5 + 0x10)) {
      if (lVar7 != 0 && lVar6 != lVar5) {
        puVar9 = (undefined8 *)(lVar6 + 0x20);
        puVar10 = (undefined8 *)(lVar5 + 0x20);
        do {
          uStack_148 = puVar9[1];
          local_150 = *puVar9;
          uStack_138 = puVar9[3];
          uStack_140 = puVar9[2];
          uStack_128 = puVar9[5];
          local_130 = puVar9[4];
          uStack_118 = puVar9[7];
          uStack_120 = puVar9[6];
          uStack_108 = puVar9[9];
          local_110 = puVar9[8];
          uStack_f8 = puVar9[0xb];
          local_100 = puVar9[10];
          uStack_f0 = puVar9[0xc];
          uStack_df = *(undefined8 *)((long)puVar9 + 0x71);
          uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x69) >> 0x38);
          uStack_e8 = (undefined1)puVar9[0xd];
          local_e7 = (undefined7)((ulong)puVar9[0xd] >> 8);
          uStack_78 = puVar10[0xb];
          local_80 = puVar10[10];
          uStack_70 = puVar10[0xc];
          uStack_5f = *(undefined8 *)((long)puVar10 + 0x71);
          uStack_88 = puVar10[9];
          local_90 = puVar10[8];
          uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)puVar10 + 0x69) >> 0x38);
          uStack_68 = (undefined1)puVar10[0xd];
          local_67 = (undefined7)((ulong)puVar10[0xd] >> 8);
          uStack_c8 = puVar10[1];
          local_d0 = *puVar10;
          uStack_b8 = puVar10[3];
          uStack_c0 = puVar10[2];
          uStack_a8 = puVar10[5];
          local_b0 = puVar10[4];
          uStack_98 = puVar10[7];
          uStack_a0 = puVar10[6];
          FUN_100558ef8(&local_150,auStack_1d0);
          FUN_100558ef8(&local_d0,auStack_1d0);
          puVar3 = &local_150;
          FUN_100560020(puVar3,&local_d0);
          FUN_1004dbca0(&local_d0);
          FUN_1004dbca0(&local_150);
          if (((ulong)puVar3 & 1) == 0) {
            return 0;
          }
          puVar9 = puVar9 + 0x10;
          puVar10 = puVar10 + 0x10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar8 = param_1[3];
      lVar7 = param_2[3];
      if (uVar8 == 0) {
        if (lVar7 != 0) {
          return 0;
        }
      }
      else {
        if (lVar7 == 0) {
          return 0;
        }
        _swift_bridgeObjectRetain(lVar7);
        uVar4 = uVar8;
        _swift_bridgeObjectRetain();
        FUN_100523efc();
        _swift_bridgeObjectRelease(uVar8);
        _swift_bridgeObjectRelease(lVar7);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      bVar1 = *(byte *)(param_2 + 4);
      if (*(byte *)(param_1 + 4) == 2) {
        if (bVar1 != 2) {
          return 0;
        }
      }
      else {
        if (bVar1 == 2) {
          return 0;
        }
        if (((*(byte *)(param_1 + 4) ^ bVar1) & 1) != 0) {
          return 0;
        }
      }
      uVar8 = param_1[5];
      lVar7 = param_2[5];
      if (uVar8 == 0) {
        if (lVar7 == 0) {
          return 1;
        }
      }
      else if (lVar7 != 0) {
        _swift_bridgeObjectRetain(lVar7);
        uVar4 = uVar8;
        _swift_bridgeObjectRetain();
        FUN_100523efc();
        _swift_bridgeObjectRelease(uVar8);
        _swift_bridgeObjectRelease(lVar7);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x100560934 | FUN_100560934 */

uint FUN_100560934(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined **ppuVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  _StringGuts _Var12;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  local_80 = (undefined *)*param_1;
  puStack_78 = (undefined *)param_1[1];
  _Var8.unknown = (undefined *)param_1[2];
  uStack_60 = param_1[4];
  _Var12.unknown = (undefined *)param_1[3];
  bVar4 = *(byte *)(param_1 + 6);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      if ((char)param_2[6] == '\0') {
        puVar9 = (undefined *)*param_2;
        _Var8.unknown = local_80;
        _Var12.unknown = puStack_78;
        if (local_80 != puVar9 || puStack_78 != (undefined *)param_2[1]) goto LAB_100560b08;
        goto LAB_100560af4;
      }
    }
    else if ((char)param_2[6] == '\x01') goto LAB_100560ab4;
  }
  else if (bVar4 == 2) {
    if ((char)param_2[6] == '\x02') {
LAB_100560ab4:
      puVar9 = (undefined *)param_2[2];
      puVar2 = (undefined *)param_2[3];
      if (((local_80 == (undefined *)*param_2) && (puStack_78 == (undefined *)param_2[1])) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)local_80,(_StringGuts)puStack_78,
                             (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar5)) {
        if ((_Var8.unknown != puVar9) || (_Var12.unknown != puVar2)) {
LAB_100560b08:
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var8,_Var12,(_StringComparisonResult)(__int8)puVar9);
          return (uint)bVar5;
        }
        goto LAB_100560af4;
      }
    }
  }
  else {
    uVar10 = param_1[5];
    if (bVar4 == 3) {
      if ((char)param_2[6] == '\x03') {
        uVar11 = param_1[4];
        puVar9 = (undefined *)param_2[2];
        puVar2 = (undefined *)param_2[3];
        lVar1 = param_2[4];
        lVar3 = param_2[5];
        if (((((local_80 == (undefined *)*param_2) && (puStack_78 == (undefined *)param_2[1])) ||
             (bVar5 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)local_80,(_StringGuts)puStack_78,
                                 (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar5)) &&
            (((_Var8.unknown == puVar9 && (_Var12.unknown == puVar2)) ||
             (bVar5 = Swift::_stringCompareWithSmolCheck
                                (_Var8,_Var12,(_StringComparisonResult)(__int8)puVar9), bVar5)))) &&
           (FUN_100523efc(uVar11,lVar1), (uVar11 & 1) != 0)) {
          if (uVar10 == 0) {
            if (lVar3 == 0) {
LAB_100560af4:
              uVar6 = 1;
              goto LAB_100560b30;
            }
          }
          else if (lVar3 != 0) {
            _swift_bridgeObjectRetain(lVar3);
            uVar11 = uVar10;
            _swift_bridgeObjectRetain();
            FUN_100523efc();
            _swift_bridgeObjectRelease(uVar10);
            _swift_bridgeObjectRelease(lVar3);
            if ((uVar11 & 1) != 0) goto LAB_100560af4;
          }
        }
      }
    }
    else if ((char)param_2[6] == '\x04') {
      lStack_a8 = param_2[1];
      local_b0 = *param_2;
      lStack_98 = param_2[3];
      lStack_a0 = param_2[2];
      lStack_88 = param_2[5];
      local_90 = param_2[4];
      ppuVar7 = &local_80;
      local_70 = _Var8.unknown;
      local_68 = _Var12.unknown;
      local_58 = uVar10;
      FUN_10056073c(ppuVar7,&local_b0);
      uVar6 = (uint)ppuVar7;
      goto LAB_100560b30;
    }
  }
  uVar6 = 0;
LAB_100560b30:
  return uVar6 & 1;
}



/* Address: 0x100560b50 | FUN_100560b50 */

undefined8 FUN_100560b50(ulong *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    if (*param_2 == 0) {
      return 0;
    }
    FUN_1005558dc();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if (((char)param_2[2] != '\x01') &&
       (bVar1 = false, !NAN((double)param_1[1]) && !NAN((double)param_2[1]))) {
      bVar1 = (double)param_1[1] == (double)param_2[1];
    }
    if (!bVar1) {
      return 0;
    }
  }
  if ((char)param_1[4] == '\x01') {
    if ((char)param_2[4] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[4] == '\x01') {
      return 0;
    }
    if ((double)param_1[3] != (double)param_2[3]) {
      return 0;
    }
  }
  if ((char)param_1[6] == '\x01') {
    if ((char)param_2[6] == '\x01') {
      return 1;
    }
  }
  else if (((char)param_2[6] != '\x01') && ((double)param_1[5] == (double)param_2[5])) {
    return 1;
  }
  return 0;
}



/* Address: 0x100560c38 | FUN_100560c38 */

undefined8 FUN_100560c38(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  _StringGuts _Var18;
  undefined *puVar19;
  long lVar20;
  ulong local_d8;
  ulong uStack_d0;
  undefined1 local_c8;
  ulong local_c0;
  undefined1 local_b8;
  ulong local_b0;
  undefined1 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  uVar15 = *param_1;
  FUN_100555974(uVar15,*param_2);
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  uVar15 = param_1[1];
  uVar4 = param_1[2];
  uVar17 = param_1[3];
  uVar5 = param_1[4];
  uVar1 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = (undefined1)param_1[7];
  lVar20 = param_2[1];
  uVar7 = param_2[2];
  uVar2 = param_2[3];
  uVar8 = param_2[4];
  uVar3 = param_2[5];
  uVar9 = param_2[6];
  uVar11 = *(undefined1 *)(param_2 + 7);
  if (uVar15 == 1) {
    if (lVar20 != 1) {
LAB_100560cac:
      FUN_1005679d8(uVar15,uVar4,uVar17,uVar5,uVar1,uVar6,uVar10);
      FUN_1005679d8(lVar20,uVar7,uVar2,uVar8,uVar3,uVar9,uVar11);
      FUN_1005677a8(uVar15,uVar4,uVar17,uVar5,uVar1,uVar6,uVar10);
      FUN_1005677a8(lVar20,uVar7,uVar2,uVar8,uVar3,uVar9,uVar11);
      return 0;
    }
  }
  else {
    if (lVar20 == 1) goto LAB_100560cac;
    local_90 = (undefined1)uVar2;
    local_80 = (undefined1)uVar3;
    local_c8 = (undefined1)uVar17;
    local_b8 = (undefined1)uVar1;
    puVar16 = &local_d8;
    local_d8 = uVar15;
    uStack_d0 = uVar4;
    local_c0 = uVar5;
    local_b0 = uVar6;
    local_a8 = uVar10;
    local_a0 = lVar20;
    uStack_98 = uVar7;
    local_88 = uVar8;
    local_78 = uVar9;
    local_70 = uVar11;
    FUN_100560b50(puVar16,&local_a0);
    if (((ulong)puVar16 & 1) == 0) {
      return 0;
    }
  }
  _Var18.unknown = (undefined *)param_1[9];
  puVar19 = (undefined *)param_2[9];
  if (_Var18.unknown == (undefined *)0x0) {
    if (puVar19 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar19 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[8] != (undefined *)param_2[8]) || (_Var18.unknown != puVar19)) &&
       (bVar14 = Swift::_stringCompareWithSmolCheck
                           ((undefined *)param_1[8],_Var18,
                            (_StringComparisonResult)(__int8)(undefined *)param_2[8]), !bVar14)) {
      return 0;
    }
  }
  if ((char)param_1[10] == '\x03') {
    if (*(char *)(param_2 + 10) != '\x03') {
      return 0;
    }
  }
  else if ((char)param_1[10] != *(char *)(param_2 + 10)) {
    return 0;
  }
  if ((char)param_1[0xc] == '\x01') {
    if (*(char *)(param_2 + 0xc) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      return 0;
    }
    if ((double)param_1[0xb] != (double)param_2[0xb]) {
      return 0;
    }
  }
  if (param_1[0xd] != param_2[0xd]) {
    return 0;
  }
  uVar15 = param_1[0xe];
  if (uVar15 == 0) {
    if (param_2[0xe] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0xe] == 0) {
      return 0;
    }
    FUN_1004827e8();
    if ((uVar15 & 1) == 0) {
      return 0;
    }
  }
  uVar15 = param_1[0xf];
  lVar20 = param_2[0xf];
  if (uVar15 == 0) {
    if (lVar20 != 0) {
      return 0;
    }
  }
  else {
    if (lVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar20);
    uVar17 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar20);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
  }
  uVar15 = param_1[0x10];
  lVar20 = param_2[0x10];
  if (uVar15 == 0) {
    if (lVar20 != 0) {
      return 0;
    }
  }
  else {
    if (lVar20 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar20);
    uVar17 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_100554334();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar20);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
  }
  cVar12 = (char)param_1[0x11];
  cVar13 = *(char *)(param_2 + 0x11);
  if (cVar12 == '\x04') {
    if (cVar13 != '\x04') {
      return 0;
    }
  }
  else {
    if (cVar13 == '\x04') {
      return 0;
    }
    if (cVar12 == '\x03') {
      if (cVar13 != '\x03') {
        return 0;
      }
    }
    else if (cVar12 != cVar13) {
      return 0;
    }
  }
  uVar15 = param_1[0x12];
  lVar20 = param_2[0x12];
  if (uVar15 == 0) {
    if (lVar20 == 0) {
      return 1;
    }
  }
  else if (lVar20 != 0) {
    _swift_bridgeObjectRetain(lVar20);
    uVar17 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar20);
    if ((uVar17 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100560f94 | FUN_100560f94 */

undefined8 FUN_100560f94(char param_1,char param_2)

{
  if (param_1 == '\x03') {
    if (param_2 == '\x03') {
      return 1;
    }
  }
  else if (param_1 == param_2) {
    return 1;
  }
  return 0;
}



/* Address: 0x100560fcc | FUN_100560fcc */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100560fcc(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *****pppppuVar3;
  ulong *****pppppuVar4;
  ulong uVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *****local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  char local_40;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar2)) {
    return 0;
  }
  _Var6.unknown = (undefined *)param_1[3];
  puVar7 = (undefined *)param_2[3];
  if (_Var6.unknown == (undefined *)0x0) {
    if (puVar7 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var6.unknown != puVar7) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var6,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar2)) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 4) == (char)param_2[4]) {
    pppppuVar3 = (ulong *****)param_1[5];
    cVar1 = (char)param_2[0xb];
    if (*(char *)(param_1 + 0xb) < '\0') {
      if (-1 < cVar1) {
        return 0;
      }
      FUN_1005547e0(pppppuVar3,param_2[5]);
      pppppuVar4 = pppppuVar3;
    }
    else {
      lStack_68 = param_2[6];
      local_70 = param_2[5];
      lStack_58 = param_2[8];
      lStack_60 = param_2[7];
      lStack_48 = param_2[10];
      local_50 = param_2[9];
      local_80 = param_1[10];
      uStack_98 = param_1[7];
      local_a0 = param_1[6];
      uStack_88 = param_1[9];
      uStack_90 = param_1[8];
      if (cVar1 < '\0') {
        return 0;
      }
      pppppuVar4 = (ulong *****)&local_a8;
      local_a8 = pppppuVar3;
      local_78 = *(char *)(param_1 + 0xb);
      local_40 = cVar1;
      FUN_100560934(pppppuVar4,&local_70);
    }
    if (((ulong)pppppuVar4 & 1) != 0) {
      uVar9 = param_1[0xc];
      lVar8 = param_2[0xc];
      if (uVar9 == 0) {
        if (lVar8 == 0) {
          return 1;
        }
      }
      else if (lVar8 != 0) {
        _swift_bridgeObjectRetain(lVar8);
        uVar5 = uVar9;
        _swift_bridgeObjectRetain();
        FUN_100523efc();
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(lVar8);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x100561120 | FUN_100561120 */

undefined8 FUN_100561120(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar1)) {
      uVar2 = param_1[4];
      FUN_100523efc(uVar2,param_2[4]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[5];
        lVar4 = param_2[5];
        if (uVar2 == 0) {
          if (lVar4 == 0) {
            return 1;
          }
        }
        else if (lVar4 != 0) {
          _swift_bridgeObjectRetain(lVar4);
          uVar3 = uVar2;
          _swift_bridgeObjectRetain();
          FUN_100523efc();
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(lVar4);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Address: 0x1005611ec | FUN_1005611ec */

undefined8 FUN_1005611ec(char *param_1,char *param_2)

{
  char cVar1;
  ulong *****pppppuVar2;
  ulong uVar3;
  ulong *****pppppuVar4;
  long lVar5;
  ulong uVar6;
  ulong ****local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40;
  
  if (*param_1 == *param_2) {
    pppppuVar4 = *(ulong ******)(param_1 + 8);
    cVar1 = param_2[0x38];
    if (param_1[0x38] < '\0') {
      if (-1 < cVar1) {
        return 0;
      }
      FUN_1005547e0(pppppuVar4,*(undefined8 *)(param_2 + 8));
      pppppuVar2 = pppppuVar4;
    }
    else {
      uStack_68 = *(undefined8 *)(param_2 + 0x10);
      local_70 = *(undefined8 *)(param_2 + 8);
      uStack_58 = *(undefined8 *)(param_2 + 0x20);
      uStack_60 = *(undefined8 *)(param_2 + 0x18);
      uStack_48 = *(undefined8 *)(param_2 + 0x30);
      local_50 = *(undefined8 *)(param_2 + 0x28);
      local_80 = *(undefined8 *)(param_1 + 0x30);
      uStack_98 = *(undefined8 *)(param_1 + 0x18);
      local_a0 = *(undefined8 *)(param_1 + 0x10);
      uStack_88 = *(undefined8 *)(param_1 + 0x28);
      uStack_90 = *(undefined8 *)(param_1 + 0x20);
      if (cVar1 < '\0') {
        return 0;
      }
      pppppuVar2 = &local_a8;
      local_a8 = (ulong ****)pppppuVar4;
      local_78 = param_1[0x38];
      local_40 = cVar1;
      FUN_100560934(pppppuVar2,&local_70);
    }
    if (((ulong)pppppuVar2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x40);
      lVar5 = *(long *)(param_2 + 0x40);
      if (uVar6 == 0) {
        if (lVar5 == 0) {
          return 1;
        }
      }
      else if (lVar5 != 0) {
        _swift_bridgeObjectRetain(lVar5);
        uVar3 = uVar6;
        _swift_bridgeObjectRetain();
        FUN_100523efc();
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(lVar5);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x1005612f0 | FUN_1005612f0 */

void FUN_1005612f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfa98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a270;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a270,&DAT_100ee0038);
  DAT_100fcfa98 = pTVar1;
  return;
}



/* Address: 0x100561330 | FUN_100561330 */

void FUN_100561330(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a220,&DAT_100edffa8);
  DAT_100fcfab0 = pTVar1;
  return;
}



/* Address: 0x100561370 | FUN_100561370 */

void FUN_100561370(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fcfac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcfab8;
  FUN_1000f8b08(&DAT_100fcfab8,&BYTE_100c58830);
  puVar2 = puVar1;
  FUN_1005613e0();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fcfac0 = puVar3;
  return;
}



/* Address: 0x1005613e0 | FUN_1005613e0 */

void FUN_1005613e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58b40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58b40,&DAT_100edf570);
  DAT_100fcfac8 = pTVar1;
  return;
}



/* Address: 0x100561420 | FUN_100561420 */

void FUN_100561420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfad0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54a10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54a10,&DAT_100edc918);
  DAT_100fcfad0 = pTVar1;
  return;
}



/* Address: 0x100561460 | FUN_100561460 */

undefined4 FUN_100561460(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x73746e6968 || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x73746e6968,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x6f69725074736f63) && (param_2 == (undefined1 *)0xec00000079746972)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6f69725074736f63,(_StringGuts)0xec00000079746972,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6972506465657073) || (param_2 != (undefined1 *)0xed0000797469726f)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6972506465657073,(_StringGuts)0xed0000797469726f,
                             expecting), !bVar1)) {
        if ((param_1 == -0x2fffffffffffffec) && (param_2 == (undefined1 *)0x8000000100dad910)) {
          _swift_bridgeObjectRelease(0x8000000100dad910);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000014,(_StringGuts)0x8000000100dad910,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1005615d0 | FUN_1005615d0 */

/* WARNING: Removing unreachable block (ram,0x000100561794) */
/* WARNING: Removing unreachable block (ram,0x0001005617a4) */
/* WARNING: Removing unreachable block (ram,0x0001005616cc) */

void FUN_1005615d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_90 [12];
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100fd0428;
  FUN_1000f7830(&DAT_100fd0428,&DAT_100c5a310);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100561330();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar4 = &DAT_100fcfab8;
    FUN_1000f7830(&DAT_100fcfab8,&BYTE_100c58830);
    local_51 = 0;
    puVar5 = puVar4;
    FUN_100567bbc();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_70,puVar4,&local_51,puVar3,puVar4,puVar5)
    ;
    uVar1 = local_70;
    local_51 = 1;
    FUN_100567c6c();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,&DAT_100edc918,&local_51,puVar3,&DAT_100edc918,puVar4);
    bVar2 = local_68;
    local_78 = local_70;
    local_51 = 2;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,&DAT_100edc918,&local_51,puVar3,&DAT_100edc918,puVar4);
    local_80 = local_70;
    local_84 = (uint)local_68;
    local_51 = 3;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,&DAT_100edc918,&local_51,puVar3,&DAT_100edc918,puVar4);
    (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar3);
    FUN_100004594(param_2);
    *param_1 = uVar1;
    param_1[1] = local_78;
    *(byte *)(param_1 + 2) = bVar2;
    param_1[3] = local_80;
    *(char *)(param_1 + 4) = (char)local_84;
    param_1[5] = local_70;
    *(byte *)(param_1 + 6) = local_68;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10056184c | FUN_10056184c */

void FUN_10056184c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a1d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a1d0,&DAT_100edff18);
  DAT_100fcfae0 = pTVar1;
  return;
}



/* Address: 0x10056188c | FUN_10056188c */

undefined4 FUN_10056188c(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x656d616e) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != (undefined1 *)0x7475706e69) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7475706e69,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == (undefined1 *)0x6174656d5f) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1005619dc | FUN_1005619dc */

/* WARNING: Removing unreachable block (ram,0x000100561c00) */
/* WARNING: Removing unreachable block (ram,0x000100561b14) */
/* WARNING: Removing unreachable block (ram,0x000100561ba4) */
/* WARNING: Removing unreachable block (ram,0x000100561c18) */
/* WARNING: Removing unreachable block (ram,0x000100561c2c) */
/* WARNING: Removing unreachable block (ram,0x000100561c34) */
/* WARNING: Removing unreachable block (ram,0x000100561c38) */
/* WARNING: Removing unreachable block (ram,0x000100561aac) */

void FUN_1005619dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  String local_80;
  void *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100fd03b0;
  FUN_1000f7830(&DAT_100fd03b0,&DAT_100c5a308);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10056184c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    SVar6 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar2);
    local_70 = SVar6.bridgeObject;
    local_58 = 1;
    local_80 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar2);
    puVar3 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_61 = 2;
    puVar4 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3,&local_61,puVar2,puVar3,puVar4);
    local_88 = CONCAT71(uStack_57,local_58);
    local_61 = 3;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar2,&DAT_100edcda0,puVar3);
    (**(code **)(lVar5 + 8))(auStack_90 + -extraout_x8,puVar2);
    uVar1 = CONCAT71(uStack_57,local_58);
    FUN_100004594(param_2);
    *param_1 = SVar6.str;
    param_1[1] = local_70;
    param_1[2] = local_80.str;
    param_1[3] = local_80.bridgeObject;
    param_1[4] = local_88;
    param_1[5] = uVar1;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100561c7c | FUN_100561c7c */

void FUN_100561c7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfaf0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a180;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a180,&DAT_100edfe88);
  DAT_100fcfaf0 = pTVar1;
  return;
}



/* Address: 0x100561cbc | FUN_100561cbc */

void FUN_100561cbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fcfb00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcfaf8;
  FUN_1000f8b08(&DAT_100fcfaf8,&BYTE_100c58850);
  puVar2 = puVar1;
  FUN_100561d2c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fcfb00 = puVar3;
  return;
}



/* Address: 0x100561d2c | FUN_100561d2c */

void FUN_100561d2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c592c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c592c8,&DAT_100edf830);
  DAT_100fcfb08 = pTVar1;
  return;
}



/* Address: 0x100561d6c | FUN_100561d6c */

undefined4 FUN_100561d6c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x496573556c6f6f74 || param_2 != (undefined1 *)0xe900000000000064) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x496573556c6f6f74,(_StringGuts)0xe900000000000064,expecting);
    if (!bVar1) {
      if (((param_1 == 0x746e65746e6f63) && (param_2 == &DAT_e700000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x746e65746e6f63,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != -0x2fffffffffffffef) || (param_2 != (undefined1 *)0x8000000100dad930)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000011,(_StringGuts)0x8000000100dad930,
                             expecting), !bVar1)) {
        if (((param_1 != 0x726f7272457369) || (param_2 != &DAT_e700000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x726f7272457369,(_StringGuts)0xe700000000000000,
                               expecting), !bVar1)) {
          if ((param_1 == 0x6174656d5f) && (param_2 == &DAT_e500000000000000)) {
            _swift_bridgeObjectRelease(&DAT_e500000000000000);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100561f24 | FUN_100561f24 */

/* WARNING: Removing unreachable block (ram,0x0001005621a4) */
/* WARNING: Removing unreachable block (ram,0x00010056211c) */
/* WARNING: Removing unreachable block (ram,0x000100562088) */
/* WARNING: Removing unreachable block (ram,0x0001005621bc) */
/* WARNING: Removing unreachable block (ram,0x0001005621d0) */
/* WARNING: Removing unreachable block (ram,0x0001005621d8) */
/* WARNING: Removing unreachable block (ram,0x0001005621dc) */
/* WARNING: Removing unreachable block (ram,0x000100561ff4) */

void FUN_100561f24(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  String SVar8;
  undefined1 auStack_90 [12];
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  void *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar2 = &DAT_100fd03a8;
  FUN_1000f7830(&DAT_100fd03a8,&DAT_100c5a2f8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100561c7c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    SVar8 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar2);
    local_70 = SVar8.bridgeObject;
    puVar3 = &DAT_100fcfaf8;
    FUN_1000f7830(&DAT_100fcfaf8,&BYTE_100c58850);
    local_61 = 1;
    puVar4 = puVar3;
    FUN_100567b0c();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3,&local_61,puVar2,puVar3,puVar4);
    local_78 = CONCAT71(uStack_57,local_58);
    puVar3 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_61 = 2;
    puVar5 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar3,&local_61,puVar2,puVar3,puVar5)
    ;
    local_80 = CONCAT71(uStack_57,local_58);
    local_58 = 3;
    puVar6 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar6,puVar2);
    local_84 = SUB84(puVar6,0);
    local_61 = 4;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar2,&DAT_100edcda0,puVar6);
    (**(code **)(lVar7 + 8))(auStack_90 + -extraout_x8,puVar2);
    uVar1 = CONCAT71(uStack_57,local_58);
    FUN_100004594(param_2);
    *param_1 = SVar8.str;
    param_1[1] = local_70;
    param_1[2] = local_78;
    param_1[3] = local_80;
    *(char *)(param_1 + 4) = (char)local_84;
    param_1[5] = uVar1;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100562224 | FUN_100562224 */

/* WARNING: Removing unreachable block (ram,0x000100562418) */
/* WARNING: Removing unreachable block (ram,0x000100562358) */

void FUN_100562224(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_170 [4];
  uint local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [72];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd03a0;
  FUN_1000f7830(&DAT_100fd03a0,&DAT_100c5a2f0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005624cc();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_148[0] = 0;
    FUN_100567728();
    puVar3 = &DAT_100edf350;
    Swift::KeyedDecodingContainer::_decode
              (&local_100,&DAT_100edf350,local_148,puVar1,&DAT_100edf350,KVar2.unknown);
    local_b0 = (undefined1)local_100;
    local_148[0] = 1;
    FUN_100567768();
    puVar4 = &DAT_100edf3e0;
    Swift::KeyedDecodingContainer::_decode
              (&local_100,&DAT_100edf3e0,local_148,puVar1,&DAT_100edf3e0,puVar3);
    uStack_a8 = local_100;
    uStack_a0 = uStack_f8;
    local_150 = local_f0;
    local_98 = local_f0;
    local_90 = uStack_e8;
    local_158 = uStack_e8;
    local_160 = local_e0;
    uStack_88 = local_e0;
    uStack_80 = uStack_d8;
    local_168 = uStack_d8;
    local_16c = (uint)(byte)local_d0;
    local_78 = (byte)local_d0;
    local_b1 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_b1,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_170 + -extraout_x8,puVar1);
    local_70 = local_58;
    uStack_c8 = CONCAT71(uStack_77,local_78);
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    local_d0 = uStack_80;
    local_c0 = local_58;
    local_100 = CONCAT71(uStack_af,local_b0);
    uStack_f8 = uStack_a8;
    uStack_e8 = local_98;
    local_f0 = uStack_a0;
    FUN_100558e40(&local_100,local_148);
    FUN_100004594(param_2);
    FUN_100558e7c(&local_b0);
    param_1[5] = uStack_d8;
    param_1[4] = local_e0;
    param_1[7] = uStack_c8;
    param_1[6] = local_d0;
    param_1[8] = local_c0;
    param_1[1] = uStack_f8;
    *param_1 = local_100;
    param_1[3] = uStack_e8;
    param_1[2] = local_f0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1005624cc | FUN_1005624cc */

void FUN_1005624cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a130,&DAT_100edfdf8);
  DAT_100fcfb18 = pTVar1;
  return;
}



/* Address: 0x10056250c | FUN_10056250c */

void FUN_10056250c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58978;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58978,&DAT_100edf350);
  DAT_100fcfb20 = pTVar1;
  return;
}



/* Address: 0x10056254c | FUN_10056254c */

void FUN_10056254c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59180;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59180,&DAT_100edf3e0);
  DAT_100fcfb28 = pTVar1;
  return;
}



/* Address: 0x10056258c | FUN_10056258c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005625c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10056258c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Address: 0x1005625f0 | FUN_1005625f0 */

/* WARNING: Removing unreachable block (ram,0x0001005627d8) */
/* WARNING: Removing unreachable block (ram,0x000100562a2c) */
/* WARNING: Removing unreachable block (ram,0x000100562d30) */
/* WARNING: Removing unreachable block (ram,0x000100562a40) */
/* WARNING: Removing unreachable block (ram,0x000100562c7c) */
/* WARNING: Removing unreachable block (ram,0x000100562840) */
/* WARNING: Removing unreachable block (ram,0x000100562c1c) */
/* WARNING: Removing unreachable block (ram,0x000100562854) */

void FUN_1005625f0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  DecodingError DVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  void *pvVar10;
  void *pvVar11;
  _StringComparisonResult expecting;
  long extraout_x8;
  undefined8 uVar12;
  long unaff_x21;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  String SVar17;
  void *local_80;
  char *local_78;
  char *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_100fd0380;
  FUN_1000f7830(&DAT_100fd0380,&DAT_100c5a2e8);
  lVar16 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_80 - extraout_x8;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100562d70();
  Swift::Decoder::_container();
  if (unaff_x21 != 0) {
LAB_1005627ec:
    FUN_100004594(param_2);
    return;
  }
  local_58 = 0;
  SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
  puVar9 = SVar17.bridgeObject;
  pcVar4 = SVar17.str;
  if (pcVar4 != (char *)0x74786574 || puVar9 != &DAT_e400000000000000) {
    expecting.value = SVar17.str._0_1_;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if ((pcVar4 == (char *)0x6567616d69 && puVar9 == &DAT_e500000000000000) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(puVar9);
        local_58 = 2;
        SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
        pvVar10 = SVar17.bridgeObject;
        local_70 = SVar17.str;
        local_58 = 3;
        SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
        pvVar11 = SVar17.bridgeObject;
        local_78 = SVar17.str;
        (**(code **)(lVar16 + 8))(lVar14,puVar3);
        uVar13 = 1;
      }
      else {
        if ((pcVar4 != (char *)0x6f69647561 || puVar9 != &DAT_e500000000000000) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f69647561,(_StringGuts)0xe500000000000000,expecting),
           !bVar1)) {
          if ((pcVar4 == (char *)0x6573755f6c6f6f74 && puVar9 == &DAT_e800000000000000) ||
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x6573755f6c6f6f74,(_StringGuts)0xe800000000000000,
                                 expecting), bVar1)) {
            _swift_bridgeObjectRelease(puVar9);
            local_58 = 4;
            SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
            pvVar10 = SVar17.bridgeObject;
            local_70 = SVar17.str;
            local_58 = 5;
            SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
            local_80 = SVar17.bridgeObject;
            local_78 = SVar17.str;
            puVar5 = &DAT_100fcc380;
            FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
            local_61 = 6;
            puVar7 = &DAT_100fcc470;
            FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                          PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                          ,
                          PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78
                         );
            Swift::KeyedDecodingContainer::_decode(&local_58,puVar5,&local_61,puVar3,puVar5,puVar7);
            uVar15 = CONCAT71(uStack_57,local_58);
            local_61 = 7;
            FUN_1004e16ac();
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (&local_58,&DAT_100edcda0,&local_61,puVar3,&DAT_100edcda0,puVar5);
            (**(code **)(lVar16 + 8))(lVar14,puVar3);
            uVar12 = CONCAT71(uStack_57,local_58);
            uVar13 = 3;
            pcVar4 = local_78;
            pvVar11 = local_80;
          }
          else {
            if (pcVar4 == (char *)0x7365725f6c6f6f74 && puVar9 == (undefined1 *)0xeb00000000746c75)
            {
              _swift_bridgeObjectRelease(puVar9);
            }
            else {
              bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x7365725f6c6f6f74,(_StringGuts)0xeb00000000746c75,
                                 expecting);
              _swift_bridgeObjectRelease(puVar9);
              if (!bVar1) {
                local_58 = 0;
                DVar2 = Swift::DecodingError::typeMetadataAccessor();
                puVar6 = 
                PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                ;
                _swift_allocError(DVar2.value,
                                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                                  ,0,0);
                puVar5 = &DAT_100fd0388;
                FUN_100134584(&DAT_100fd0388,&DAT_100fd0380,&DAT_100c5a2e8,
                              PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                             );
                Swift::DecodingError::_dataCorruptedError
                          (puVar6,&local_58,lVar14,0xd00000000000002b,0x8000000100dad9f0,puVar3,
                           puVar5);
                _swift_willThrow();
                (**(code **)(lVar16 + 8))(lVar14,puVar3);
                goto LAB_1005627ec;
              }
            }
            local_58 = 8;
            SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
            pvVar10 = SVar17.bridgeObject;
            local_70 = SVar17.str;
            puVar5 = &DAT_100fcfaf8;
            FUN_1000f7830(&DAT_100fcfaf8,&BYTE_100c58850);
            local_61 = 9;
            puVar6 = puVar5;
            FUN_100567b0c();
            Swift::KeyedDecodingContainer::_decode(&local_58,puVar5,&local_61,puVar3,puVar5,puVar6);
            local_78 = (char *)CONCAT71(uStack_57,local_58);
            puVar5 = &DAT_100fcc380;
            FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
            local_61 = 10;
            puVar7 = &DAT_100fcc470;
            FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                          PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                          ,
                          PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78
                         );
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (&local_58,puVar5,&local_61,puVar3,puVar5,puVar7);
            local_80 = (void *)CONCAT71(uStack_57,local_58);
            local_58 = 0xb;
            puVar8 = &local_58;
            Swift::KeyedDecodingContainer::_decodeIfPresent(puVar8,puVar3);
            local_61 = 7;
            puVar9 = puVar8;
            FUN_1004e16ac();
            Swift::KeyedDecodingContainer::_decodeIfPresent
                      (&local_58,&DAT_100edcda0,&local_61,puVar3,&DAT_100edcda0,puVar9);
            (**(code **)(lVar16 + 8))(lVar14,puVar3);
            uVar12 = CONCAT71(uStack_57,local_58);
            uVar15 = (ulong)puVar8 & 0xff;
            uVar13 = 4;
            pcVar4 = local_78;
            pvVar11 = local_80;
          }
          goto LAB_100562758;
        }
        _swift_bridgeObjectRelease(puVar9);
        local_58 = 2;
        SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
        pvVar10 = SVar17.bridgeObject;
        local_70 = SVar17.str;
        local_58 = 3;
        SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
        pvVar11 = SVar17.bridgeObject;
        local_78 = SVar17.str;
        (**(code **)(lVar16 + 8))(lVar14,puVar3);
        uVar13 = 2;
      }
      uVar15 = 0;
      uVar12 = 0;
      pcVar4 = local_78;
      goto LAB_100562758;
    }
  }
  _swift_bridgeObjectRelease(puVar9);
  local_58 = 1;
  SVar17 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
  pvVar10 = SVar17.bridgeObject;
  local_70 = SVar17.str;
  (**(code **)(lVar16 + 8))(lVar14,puVar3);
  uVar15 = 0;
  uVar12 = 0;
  uVar13 = 0;
  pcVar4 = (char *)0x0;
  pvVar11 = (void *)0x0;
LAB_100562758:
  FUN_100004594(param_2);
  *param_1 = local_70;
  param_1[1] = pvVar10;
  param_1[2] = pcVar4;
  param_1[3] = pvVar11;
  param_1[4] = uVar15;
  param_1[5] = uVar12;
  *(undefined1 *)(param_1 + 6) = uVar13;
  return;
}



/* Address: 0x100562d70 | FUN_100562d70 */

void FUN_100562d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a0e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a0e0,&DAT_100edfd68);
  DAT_100fcfb38 = pTVar1;
  return;
}



/* Address: 0x100562db0 | FUN_100562db0 */

/* WARNING: Removing unreachable block (ram,0x000100562e34) */

void FUN_100562db0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [40];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_58;
  
  FUN_100076688(param_2,auStack_c0);
  FUN_100567acc();
  puVar2 = auStack_c0;
  (extension_Swift)::Swift::Array<undefined>::_init();
  if (unaff_x21 == 0) {
    if (*(long *)(puVar2 + 0x10) != 1) {
      FUN_100004594(param_2);
      local_58 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = 0x80;
      uVar4 = 0;
      goto LAB_100562ed8;
    }
    puVar1 = *(undefined1 **)(puVar2 + 0x20);
    uVar4 = *(undefined8 *)(puVar2 + 0x28);
    local_58 = *(undefined8 *)(puVar2 + 0x30);
    uVar5 = *(undefined8 *)(puVar2 + 0x38);
    uVar6 = *(undefined8 *)(puVar2 + 0x40);
    uVar7 = *(undefined8 *)(puVar2 + 0x48);
    uVar3 = puVar2[0x50];
    FUN_1004dbb2c(puVar1,uVar4,local_58,uVar5,uVar6,uVar7,uVar3);
    _swift_bridgeObjectRelease(puVar2);
    puVar2 = puVar1;
  }
  else {
    _swift_errorRelease();
    FUN_100076688(param_2,auStack_c0);
    FUN_1005625f0(&local_98,auStack_c0);
    local_58 = local_88;
    puVar2 = local_98;
    uVar4 = uStack_90;
    uVar5 = uStack_80;
    uVar6 = local_78;
    uVar7 = uStack_70;
    uVar3 = local_68;
  }
  FUN_100004594(param_2);
LAB_100562ed8:
  *param_1 = puVar2;
  param_1[1] = uVar4;
  param_1[2] = local_58;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  *(undefined1 *)(param_1 + 6) = uVar3;
  return;
}



/* Address: 0x100562f0c | FUN_100562f0c */

void FUN_100562f0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59130,&DAT_100edf470);
  DAT_100fcfb40 = pTVar1;
  return;
}



/* Address: 0x100562f4c | FUN_100562f4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100562f88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100562f4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Address: 0x100562fb0 | FUN_100562fb0 */

/* WARNING: Removing unreachable block (ram,0x000100563444) */
/* WARNING: Removing unreachable block (ram,0x000100563760) */
/* WARNING: Removing unreachable block (ram,0x0001005636bc) */
/* WARNING: Removing unreachable block (ram,0x000100563248) */
/* WARNING: Removing unreachable block (ram,0x0001005635a8) */
/* WARNING: Removing unreachable block (ram,0x000100563704) */
/* WARNING: Removing unreachable block (ram,0x000100563784) */
/* WARNING: Removing unreachable block (ram,0x00010056378c) */
/* WARNING: Removing unreachable block (ram,0x00010056325c) */
/* WARNING: Removing unreachable block (ram,0x000100563618) */
/* WARNING: Removing unreachable block (ram,0x000100563638) */
/* WARNING: Removing unreachable block (ram,0x0001005631e0) */

void FUN_100562fb0(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [8];
  bool bVar3;
  DecodingError DVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  _StringComparisonResult expecting;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 *puVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_270 [8];
  undefined1 *local_268;
  undefined *local_260;
  undefined1 *local_258;
  undefined *local_250;
  char *local_248;
  undefined *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  undefined1 local_219;
  undefined1 local_218;
  undefined7 uStack_217;
  char *local_210;
  char *pcStack_208;
  char *pcStack_200;
  void *pvStack_1f8;
  char *local_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  char *pcStack_1b8;
  char *local_1b0;
  void *pvStack_1a8;
  char *local_1a0;
  undefined *puStack_198;
  undefined1 *local_190;
  undefined *puStack_188;
  undefined1 *local_180;
  undefined1 local_170 [8];
  char *pcStack_168;
  String local_160;
  char *local_150;
  undefined *puStack_148;
  undefined1 *local_140;
  undefined *puStack_138;
  undefined1 *local_130;
  undefined *puStack_128;
  undefined *local_120;
  char *pcStack_118;
  char *local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  char *local_f0;
  void *pvStack_e8;
  char *pcStack_e0;
  void *pvStack_d8;
  char *local_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  char *pcStack_98;
  char *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 local_71 [17];
  
  puVar5 = &DAT_100fd0358;
  FUN_1000f7830(&DAT_100fd0358,&DAT_100c5a2e0);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_270 + -extraout_x8;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005637ec();
  Swift::Decoder::_container();
  if (unaff_x21 != 0) {
LAB_1005631f4:
    FUN_100004594(param_2);
    return;
  }
  local_71[0] = 0;
  SVar13 = Swift::KeyedDecodingContainer::_decode(local_71,puVar5);
  puVar10 = SVar13.bridgeObject;
  pcVar6 = SVar13.str;
  if (pcVar6 != (char *)0x74786574 || puVar10 != &DAT_e400000000000000) {
    expecting.value = SVar13.str._0_1_;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar3) {
      if ((pcVar6 == (char *)0x6567616d69 && puVar10 == &DAT_e500000000000000) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,expecting),
         bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_170[0] = 2;
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar13.str;
        local_1c0 = 3;
        SVar14 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_228;
        local_160 = SVar14;
        FUN_10049c188(local_170);
      }
      else if ((pcVar6 == (char *)0x6f69647561 && puVar10 == &DAT_e500000000000000) ||
              (bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x6f69647561,(_StringGuts)0xe500000000000000,
                                  expecting), bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_170[0] = 2;
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar13.str;
        local_1c0 = 3;
        SVar14 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_228;
        local_160 = SVar14;
        FUN_100567ac0(local_170);
      }
      else if ((pcVar6 == (char *)0x656372756f736572 && puVar10 == &DAT_e800000000000000) ||
              (bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x656372756f736572,(_StringGuts)0xe800000000000000,
                                  expecting), bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_1c1 = 4;
        FUN_100567a74();
        puVar8 = &DAT_100ee1c80;
        Swift::KeyedDecodingContainer::_decode
                  (&local_1c0,&DAT_100ee1c80,&local_1c1,puVar5,&DAT_100ee1c80,puVar10);
        puStack_1e8 = puStack_198;
        local_1f0 = local_1a0;
        puStack_1d8 = puStack_188;
        puStack_1e0 = local_190;
        local_1d0 = local_180;
        local_210 = (char *)CONCAT71(uStack_1bf,local_1c0);
        pcStack_208 = pcStack_1b8;
        pvStack_1f8 = pvStack_1a8;
        pcStack_200 = local_1b0;
        local_218 = 5;
        FUN_100567a28();
        puVar7 = &DAT_100ee1da8;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (local_170,&DAT_100ee1da8,&local_218,puVar5,&DAT_100ee1da8,puVar8);
        auVar2 = local_170;
        local_240 = pcStack_168;
        local_238 = local_160.str;
        local_230 = local_160.bridgeObject;
        local_228 = local_150;
        local_219 = 6;
        FUN_1004e16ac();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_218,&DAT_100edcda0,&local_219,puVar5,&DAT_100edcda0,puVar7);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        puStack_148 = puStack_1e8;
        local_150 = local_1f0;
        puStack_138 = puStack_1d8;
        local_140 = puStack_1e0;
        pcStack_168 = pcStack_208;
        local_170 = (undefined1  [8])local_210;
        local_160.bridgeObject = pvStack_1f8;
        local_160.str = pcStack_200;
        local_130 = local_1d0;
        puStack_128 = (undefined *)auVar2;
        local_120 = local_240;
        pcStack_118 = local_238;
        local_110 = local_230;
        uStack_108 = SUB81(local_228,0);
        uStack_107 = (undefined7)((ulong)local_228 >> 8);
        local_100 = local_218;
        uStack_ff = uStack_217;
        FUN_100567ab4(local_170);
      }
      else {
        if (pcVar6 == (char *)0x656372756f736572 && puVar10 == (undefined1 *)0xed00006b6e696c5f) {
          _swift_bridgeObjectRelease(puVar10);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656372756f736572,(_StringGuts)0xed00006b6e696c5f,
                             expecting);
          _swift_bridgeObjectRelease(puVar10);
          if (!bVar3) {
            auVar1[0xf] = 0;
            auVar1._0_15_ = stack0xfffffffffffffe91;
            _local_170 = (String)(auVar1 << 8);
            DVar4 = Swift::DecodingError::typeMetadataAccessor();
            puVar7 = 
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
            _swift_allocError(DVar4.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            puVar8 = &DAT_100fd0360;
            FUN_100134584(&DAT_100fd0360,&DAT_100fd0358,&DAT_100c5a2e0,
                          PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                         );
            Swift::DecodingError::_dataCorruptedError
                      (puVar7,local_170,puVar12,0xd000000000000026,0x8000000100dad9c0,puVar5,puVar8)
            ;
            _swift_willThrow();
            (**(code **)(lVar11 + 8))(puVar12,puVar5);
            goto LAB_1005631f4;
          }
        }
        local_170[0] = '\a';
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_230 = SVar13.str;
        local_170[0] = '\b';
        SVar14 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar14.bridgeObject;
        local_238 = SVar14.str;
        local_170[0] = '\t';
        pcVar6 = local_170;
        local_240 = puVar5;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_170[0] = '\n';
        puVar10 = local_170;
        puVar8 = local_240;
        local_248 = pcVar6;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_170[0] = 3;
        puVar9 = local_170;
        puVar7 = local_240;
        local_258 = puVar10;
        local_250 = puVar8;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_210 = (char *)CONCAT71(local_210._1_7_,5);
        local_268 = puVar9;
        local_260 = puVar7;
        FUN_100567a28();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_1c0,&DAT_100ee1da8,&local_210,local_240,&DAT_100ee1da8,puVar9);
        (**(code **)(lVar11 + 8))(puVar12,local_240);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_230;
        local_160.bridgeObject = local_228;
        local_160.str = local_238;
        local_150 = local_248;
        local_140 = local_258;
        puStack_138 = local_250;
        local_130 = local_268;
        puStack_128 = local_260;
        local_120 = (undefined *)CONCAT71(uStack_1bf,local_1c0);
        pcStack_118 = pcStack_1b8;
        uStack_108 = SUB81(pvStack_1a8,0);
        uStack_107 = (undefined7)((ulong)pvStack_1a8 >> 8);
        local_110 = local_1b0;
        local_100 = SUB81(local_1a0,0);
        uStack_ff = (undefined7)((ulong)local_1a0 >> 8);
        puStack_148 = puVar5;
        FUN_100567a68(local_170);
      }
      uStack_7f = CONCAT17(uStack_f8,uStack_ff);
      goto LAB_10056313c;
    }
  }
  _swift_bridgeObjectRelease(puVar10);
  local_1c0 = 1;
  SVar13 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
  (**(code **)(lVar11 + 8))(puVar12,puVar5);
  _local_170 = SVar13;
  FUN_10049a544(local_170);
  uStack_7f = CONCAT17(uStack_f8,uStack_ff);
LAB_10056313c:
  pvStack_e8 = pcStack_168;
  local_f0 = (char *)local_170;
  pvStack_d8 = local_160.bridgeObject;
  pcStack_e0 = local_160.str;
  puStack_c8 = puStack_148;
  local_d0 = local_150;
  puStack_b8 = puStack_138;
  puStack_c0 = local_140;
  local_b0 = local_130;
  puStack_a8 = puStack_128;
  puStack_a0 = local_120;
  pcStack_98 = pcStack_118;
  local_90 = local_110;
  uStack_88 = uStack_108;
  uStack_87 = uStack_107;
  uStack_80 = local_100;
  FUN_100004594(param_2);
  param_1[9] = puStack_a8;
  param_1[8] = local_b0;
  param_1[0xb] = pcStack_98;
  param_1[10] = puStack_a0;
  param_1[0xd] = CONCAT71(uStack_87,uStack_88);
  param_1[0xc] = local_90;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_7f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_80,uStack_87);
  param_1[1] = pvStack_e8;
  *param_1 = local_f0;
  param_1[3] = pvStack_d8;
  param_1[2] = pcStack_e0;
  param_1[5] = puStack_c8;
  param_1[4] = local_d0;
  param_1[7] = puStack_b8;
  param_1[6] = puStack_c0;
  return;
}



/* Address: 0x1005637ec | FUN_1005637ec */

void FUN_1005637ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a090,&DAT_100edfcd8);
  DAT_100fcfb50 = pTVar1;
  return;
}



/* Address: 0x10056382c | FUN_10056382c */

void FUN_10056382c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d338,&DAT_100ee1da8);
  DAT_100fcfb58 = pTVar1;
  return;
}



/* Address: 0x10056386c | FUN_10056386c */

void FUN_10056386c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d0d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d0d8,&DAT_100ee1c80);
  DAT_100fcfb60 = pTVar1;
  return;
}



/* Address: 0x1005638ac | FUN_1005638ac */

char FUN_1005638ac(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [15];
  char local_51;
  
  puVar2 = &DAT_100fd02d8;
  FUN_1000f7830(&DAT_100fd02d8,&DAT_100c5a2d8);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005639dc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    FUN_1005679e8();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_51);
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar2);
    cVar1 = '\0';
    if (local_51 != '\x03') {
      cVar1 = local_51;
    }
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    cVar1 = '\0';
  }
  return cVar1;
}



/* Address: 0x1005639dc | FUN_1005639dc */

void FUN_1005639dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a040,&DAT_100edfc48);
  DAT_100fcfb70 = pTVar1;
  return;
}



/* Address: 0x100563a1c | FUN_100563a1c */

void FUN_100563a1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c593b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c593b8,&DAT_100edf960);
  DAT_100fcfb78 = pTVar1;
  return;
}



/* Address: 0x100563a5c | FUN_100563a5c */

undefined8 FUN_100563a5c(undefined8 param_1,undefined8 param_2)

{
  FUN_100566544(param_2,param_1,&DAT_100edf9d8);
  return param_2;
}



/* Address: 0x100563a90 | FUN_100563a90 */

undefined8 FUN_100563a90(undefined8 param_1)

{
  FUN_1005664ec(param_1,&DAT_100edf9d8);
  return param_1;
}



/* Address: 0x100563abc | FUN_100563abc */

void FUN_100563abc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfb90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59ff0,&DAT_100edfbb8);
  DAT_100fcfb90 = pTVar1;
  return;
}



/* Address: 0x100563afc | FUN_100563afc */

void FUN_100563afc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fcfba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcfb98;
  FUN_1000f8b08(&DAT_100fcfb98,&BYTE_100c58890);
  puVar2 = puVar1;
  FUN_100563b6c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fcfba0 = puVar3;
  return;
}



/* Address: 0x100563b6c | FUN_100563b6c */

void FUN_100563b6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfba8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c590e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c590e0,&DAT_100edf2b0);
  DAT_100fcfba8 = pTVar1;
  return;
}



/* Address: 0x100563bac | FUN_100563bac */

void FUN_100563bac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58bf8,&DAT_100edf4e8);
  DAT_100fcfbb0 = pTVar1;
  return;
}



/* Address: 0x100563bec | FUN_100563bec */

void FUN_100563bec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58d10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58d10,&DAT_100edf608);
  DAT_100fcfbb8 = pTVar1;
  return;
}



/* Address: 0x100563c2c | FUN_100563c2c */

void FUN_100563c2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fcfbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcfbc0;
  FUN_1000f8b08(&DAT_100fcfbc0,&BYTE_100c588a0);
  puVar2 = puVar1;
  FUN_100563c9c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fcfbc8 = puVar3;
  return;
}



/* Address: 0x100563c9c | FUN_100563c9c */

void FUN_100563c9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60568;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60568,&DAT_100ee39e0);
  DAT_100fcfbd0 = pTVar1;
  return;
}



/* Address: 0x100563cdc | FUN_100563cdc */

void FUN_100563cdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59448;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59448,&DAT_100edf8c8);
  DAT_100fcfbd8 = pTVar1;
  return;
}



/* Address: 0x100563d1c | FUN_100563d1c */

undefined4 FUN_100563d1c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x736567617373656d || param_2 != &DAT_e800000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x736567617373656d,(_StringGuts)0xe800000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == -0x2ffffffffffffff0) && (param_2 == (undefined1 *)0x8000000100dad980)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000010,(_StringGuts)0x8000000100dad980,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == 0x72506d6574737973) && (param_2 == (undefined1 *)0xec00000074706d6f)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x72506d6574737973,(_StringGuts)0xec00000074706d6f,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == 0x436564756c636e69) && (param_2 == (undefined1 *)0xee00747865746e6f)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x436564756c636e69,(_StringGuts)0xee00747865746e6f,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == 0x74617265706d6574) && (param_2 == (undefined1 *)0xeb00000000657275)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x74617265706d6574,(_StringGuts)0xeb00000000657275,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != 0x6e656b6f5478616d) || (param_2 != (undefined1 *)0xe900000000000073)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e656b6f5478616d,(_StringGuts)0xe900000000000073,
                             expecting), !bVar1)) {
        if (((param_1 == 0x75716553706f7473) && (param_2 == (undefined1 *)0xed00007365636e65)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x75716553706f7473,(_StringGuts)0xed00007365636e65,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 6;
        }
        if (((param_1 == 0x6174656d5f) && (param_2 == &DAT_e500000000000000)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting),
           bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        if (((param_1 != 0x736c6f6f74) || (param_2 != &DAT_e500000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x736c6f6f74,(_StringGuts)0xe500000000000000,expecting),
           !bVar1)) {
          if (((param_1 != 0x696f68436c6f6f74) || (param_2 != (undefined1 *)0xea00000000006563)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x696f68436c6f6f74,(_StringGuts)0xea00000000006563,
                                 expecting), !bVar1)) {
            if ((param_1 == 0x617461646174656d) && (param_2 == &DAT_e800000000000000)) {
              _swift_bridgeObjectRelease(&DAT_e800000000000000);
              return 10;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x617461646174656d,(_StringGuts)0xe800000000000000,
                               expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 10;
            }
            return 0xb;
          }
          _swift_bridgeObjectRelease(param_2);
          return 9;
        }
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1005640b8 | FUN_1005640b8 */

/* WARNING: Removing unreachable block (ram,0x0001005645e4) */
/* WARNING: Removing unreachable block (ram,0x00010056450c) */
/* WARNING: Removing unreachable block (ram,0x0001005645f8) */
/* WARNING: Removing unreachable block (ram,0x00010056440c) */
/* WARNING: Removing unreachable block (ram,0x000100564410) */
/* WARNING: Removing unreachable block (ram,0x0001005643dc) */
/* WARNING: Removing unreachable block (ram,0x0001005642bc) */
/* WARNING: Removing unreachable block (ram,0x0001005643f0) */
/* WARNING: Removing unreachable block (ram,0x00010056424c) */
/* WARNING: Removing unreachable block (ram,0x0001005643f8) */
/* WARNING: Removing unreachable block (ram,0x000100564420) */
/* WARNING: Removing unreachable block (ram,0x00010056443c) */
/* WARNING: Removing unreachable block (ram,0x000100564494) */
/* WARNING: Removing unreachable block (ram,0x0001005645fc) */
/* WARNING: Removing unreachable block (ram,0x00010056463c) */
/* WARNING: Removing unreachable block (ram,0x0001005641c0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100564364 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005640b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_2a0 [8];
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  uint local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [152];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  __int64 _Stack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 *local_c8;
  undefined *puStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 *puStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  __int64 _Stack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  
  puVar1 = &DAT_100fd0298;
  FUN_1000f7830(&DAT_100fd0298,&DAT_100c5a2d0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100563abc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fcfb98;
    FUN_1000f7830(&DAT_100fcfb98,&BYTE_100c58890);
    local_248[0] = 0;
    puVar3 = puVar2;
    FUN_1005677b8();
    Swift::KeyedDecodingContainer::_decode(&local_1b0,puVar2,local_248,puVar1,puVar2,puVar3);
    local_108 = local_1b0;
    local_248[0] = 1;
    FUN_100567868();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,&DAT_100edf4e8,local_248,puVar1,&DAT_100edf4e8,puVar2);
    local_268 = local_1b0;
    uStack_260 = uStack_1a8;
    uStack_100 = local_1b0;
    local_f8 = uStack_1a8;
    local_258 = local_1a0;
    uStack_250 = uStack_198;
    uStack_f0 = local_1a0;
    local_e8 = uStack_198;
    local_280 = local_190;
    uStack_278 = uStack_188;
    uStack_e0 = local_190;
    local_d8 = uStack_188;
    local_26c = (uint)(byte)local_180;
    bStack_d0 = (byte)local_180;
    local_1b0._0_1_ = 2;
    puVar4 = &local_1b0;
    puVar2 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_248[0] = 3;
    local_288 = puVar2;
    local_c8 = puVar4;
    puStack_c0 = puVar2;
    FUN_1005678a8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,&DAT_100edf608,local_248,puVar1,&DAT_100edf608,puVar4);
    local_b8 = (undefined1)local_1b0;
    local_1b0._0_1_ = 4;
    puVar4 = &local_1b0;
    puVar2 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_a8 = SUB81(puVar2,0);
    local_1b0 = CONCAT71(local_1b0._1_7_,5);
    puStack_b0 = puVar4;
    _Stack_a0 = Swift::KeyedDecodingContainer::_decode(puVar4,puVar1);
    puVar2 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_248[0] = 6;
    puVar3 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,puVar2,local_248,puVar1,puVar2,puVar3);
    local_290 = local_1b0;
    local_98 = local_1b0;
    local_248[0] = 7;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,&DAT_100edcda0,local_248,puVar1,&DAT_100edcda0,puVar2);
    local_298 = local_1b0;
    uStack_90 = local_1b0;
    puVar2 = &DAT_100fcfbc0;
    FUN_1000f7830(&DAT_100fcfbc0,&BYTE_100c588a0);
    local_248[0] = 8;
    puVar3 = puVar2;
    FUN_1005678e8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,puVar2,local_248,puVar1,puVar2,puVar3);
    local_88 = local_1b0;
    local_248[0] = 9;
    FUN_100567998();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,&DAT_100edf8c8,local_248,puVar1,&DAT_100edf8c8,puVar2);
    uStack_80 = (undefined1)local_1b0;
    puVar2 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_111 = 10;
    puVar4 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_110,puVar2,&local_111,puVar1,puVar2,puVar4);
    (**(code **)(lVar5 + 8))(auStack_2a0 + -extraout_x8,puVar1);
    local_78 = local_110;
    local_150 = CONCAT71(uStack_a7,local_a8);
    _Stack_148 = _Stack_a0;
    uStack_138 = uStack_90;
    uStack_140 = local_98;
    uStack_128 = CONCAT71(uStack_7f,uStack_80);
    local_130 = local_88;
    local_120 = local_110;
    uStack_178 = CONCAT71(uStack_cf,bStack_d0);
    uStack_188 = uStack_e0;
    local_190 = local_e8;
    local_180 = local_d8;
    uStack_160 = CONCAT71(uStack_b7,local_b8);
    puStack_168 = puStack_c0;
    local_170 = local_c8;
    puStack_158 = puStack_b0;
    uStack_1a8 = uStack_100;
    local_1b0 = local_108;
    uStack_198 = uStack_f0;
    local_1a0 = local_f8;
    FUN_100563a5c(&local_1b0,local_248);
    FUN_100004594(param_2);
    FUN_100563a90(&local_108);
    param_1[0xd] = _Stack_148;
    param_1[0xc] = local_150;
    param_1[0xf] = uStack_138;
    param_1[0xe] = uStack_140;
    param_1[0x11] = uStack_128;
    param_1[0x10] = local_130;
    param_1[0x12] = local_120;
    param_1[5] = uStack_188;
    param_1[4] = local_190;
    param_1[7] = uStack_178;
    param_1[6] = local_180;
    param_1[9] = puStack_168;
    param_1[8] = local_170;
    param_1[0xb] = puStack_158;
    param_1[10] = uStack_160;
    param_1[1] = uStack_1a8;
    *param_1 = local_1b0;
    param_1[3] = uStack_198;
    param_1[2] = local_1a0;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x1005646e8 | FUN_1005646e8 */

undefined8 FUN_1005646e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100566a9c(param_2,param_1,&DAT_100edfa80);
  return param_2;
}



/* Address: 0x10056471c | FUN_10056471c */

undefined8 FUN_10056471c(undefined8 param_1)

{
  FUN_100566a58(param_1,&DAT_100edfa80);
  return param_1;
}



/* Address: 0x100564748 | FUN_100564748 */

void FUN_100564748(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbe8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59fa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59fa0,&DAT_100edfb28);
  DAT_100fcfbe8 = pTVar1;
  return;
}



/* Address: 0x100564788 | FUN_100564788 */

void FUN_100564788(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfbf0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58dd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58dd8,&DAT_100edf680);
  DAT_100fcfbf0 = pTVar1;
  return;
}



/* Address: 0x1005647c8 | FUN_1005647c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100564804 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005647c8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x10056482c | FUN_10056482c */

/* WARNING: Removing unreachable block (ram,0x000100564afc) */
/* WARNING: Removing unreachable block (ram,0x000100564988) */
/* WARNING: Removing unreachable block (ram,0x000100564a38) */
/* WARNING: Removing unreachable block (ram,0x000100564a50) */
/* WARNING: Removing unreachable block (ram,0x000100564a64) */
/* WARNING: Removing unreachable block (ram,0x000100564a6c) */
/* WARNING: Removing unreachable block (ram,0x000100564a70) */
/* WARNING: Removing unreachable block (ram,0x00010056490c) */

void FUN_10056482c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 local_200;
  char *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined *local_1c0;
  undefined1 local_1b8 [104];
  char *local_150;
  void *pvStack_148;
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e1;
  undefined8 local_e0;
  String local_d8;
  char *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  
  puVar1 = &DAT_100fd0278;
  FUN_1000f7830(&DAT_100fd0278,&DAT_100c5a2c8);
  lVar5 = *(long *)(puVar1 + -8);
  local_1c0 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100564748();
  Swift::Decoder::_container();
  puVar1 = local_1c0;
  if (unaff_x21 == 0) {
    local_150 = (char *)((ulong)local_150 & 0xffffffffffffff00);
    local_d8 = Swift::KeyedDecodingContainer::_decode(&local_150,local_1c0);
    local_1c8 = local_d8.bridgeObject;
    pcVar2 = local_d8.str;
    local_1b8[0] = 1;
    FUN_1005676e8();
    puVar3 = &DAT_100edf680;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_150,&DAT_100edf680,local_1b8,puVar1,&DAT_100edf680,pcVar2);
    local_1d0 = pvStack_148;
    uStack_c0 = pvStack_148;
    local_c8 = local_150;
    local_1b8[0] = 2;
    FUN_100567728();
    puVar4 = &DAT_100edf350;
    Swift::KeyedDecodingContainer::_decode
              (&local_150,&DAT_100edf350,local_1b8,puVar1,&DAT_100edf350,puVar3);
    local_b8 = local_150._0_1_;
    local_1b8[0] = 3;
    FUN_100567768();
    puVar3 = &DAT_100edf3e0;
    Swift::KeyedDecodingContainer::_decode
              (&local_150,&DAT_100edf3e0,local_1b8,puVar1,&DAT_100edf3e0,puVar4);
    local_1f8 = local_150;
    uStack_1f0 = pvStack_148;
    pcStack_b0 = local_150;
    local_a8 = pvStack_148;
    local_1e8 = local_140;
    uStack_1e0 = uStack_138;
    uStack_a0 = local_140;
    local_98 = uStack_138;
    local_1d8 = local_130;
    uStack_90 = local_130;
    local_88 = pcStack_128;
    local_200 = pcStack_128;
    uStack_80 = (undefined1)local_120;
    local_e1 = 4;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_e0,&DAT_100edcda0,&local_e1,puVar1,&DAT_100edcda0,puVar3);
    (**(code **)(lVar5 + 8))((long)&local_200 - extraout_x8,puVar1);
    local_78 = local_e0;
    uStack_f8 = CONCAT71(uStack_7f,uStack_80);
    uStack_108 = uStack_90;
    local_110 = local_98;
    uStack_100 = local_88;
    local_f0 = local_e0;
    pvStack_148 = local_d8.bridgeObject;
    local_150 = local_d8.str;
    uStack_138 = uStack_c0;
    local_140 = local_c8;
    local_130 = CONCAT71(uStack_b7,local_b8);
    pcStack_128 = pcStack_b0;
    uStack_118 = uStack_a0;
    local_120 = local_a8;
    FUN_1005646e8(&local_150,local_1b8);
    FUN_100004594(param_2);
    FUN_10056471c(&local_d8);
    param_1[9] = uStack_108;
    param_1[8] = local_110;
    param_1[0xb] = uStack_f8;
    param_1[10] = uStack_100;
    param_1[0xc] = local_f0;
    param_1[1] = pvStack_148;
    *param_1 = local_150;
    param_1[3] = uStack_138;
    param_1[2] = local_140;
    param_1[5] = pcStack_128;
    param_1[4] = local_130;
    param_1[7] = uStack_118;
    param_1[6] = local_120;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100564ba4 | thunk_FUN_100564ba8 */

void thunk_FUN_100564ba8(void)

{
  undefined *puVar1;
  
  if (DAT_100fcfbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c588b0;
  _swift_getWitnessTable(&DAT_100c588b0,&DAT_100edf350);
  DAT_100fcfbf8 = puVar1;
  return;
}



/* Address: 0x100564ba8 | FUN_100564ba8 */

void FUN_100564ba8(void)

{
  undefined *puVar1;
  
  if (DAT_100fcfbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c588b0;
  _swift_getWitnessTable(&DAT_100c588b0,&DAT_100edf350);
  DAT_100fcfbf8 = puVar1;
  return;
}


