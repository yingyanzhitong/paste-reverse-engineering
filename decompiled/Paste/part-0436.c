/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005542e8 | FUN_1005542e8 */

void FUN_1005542e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf788 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c57128;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c57128,&DAT_100ede5e0);
  DAT_100fcf788 = pTVar1;
  return;
}



/* Address: 0x100554328 | thunk_FUN_1000df88c */

void thunk_FUN_1000df88c(void)

{
  FUN_1000df88c();
  return;
}



/* Address: 0x10055432c | thunk_FUN_1002332a4 */

void thunk_FUN_1002332a4(void)

{
  thunk_FUN_1002332a4();
  return;
}



/* Address: 0x100554330 | thunk_FUN_1000df7fc */

void thunk_FUN_1000df7fc(void)

{
  FUN_1000df7fc();
  return;
}



/* Address: 0x100554334 | FUN_100554334 */

uint FUN_100554334(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_248 [168];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_118 = puVar4[0x11];
        local_120 = puVar4[0x10];
        uStack_108 = puVar4[0x13];
        uStack_110 = puVar4[0x12];
        local_100 = *(undefined4 *)(puVar4 + 0x14);
        uStack_158 = puVar4[9];
        local_160 = puVar4[8];
        uStack_148 = puVar4[0xb];
        uStack_150 = puVar4[10];
        uStack_138 = puVar4[0xd];
        local_140 = puVar4[0xc];
        uStack_128 = puVar4[0xf];
        uStack_130 = puVar4[0xe];
        uStack_198 = puVar4[1];
        local_1a0 = *puVar4;
        uStack_188 = puVar4[3];
        uStack_190 = puVar4[2];
        uStack_178 = puVar4[5];
        local_180 = puVar4[4];
        uStack_168 = puVar4[7];
        uStack_170 = puVar4[6];
        uStack_68 = puVar5[0x11];
        local_70 = puVar5[0x10];
        uStack_58 = puVar5[0x13];
        uStack_60 = puVar5[0x12];
        local_50 = *(undefined4 *)(puVar5 + 0x14);
        uStack_a8 = puVar5[9];
        local_b0 = puVar5[8];
        uStack_98 = puVar5[0xb];
        uStack_a0 = puVar5[10];
        uStack_88 = puVar5[0xd];
        local_90 = puVar5[0xc];
        uStack_78 = puVar5[0xf];
        uStack_80 = puVar5[0xe];
        uStack_e8 = puVar5[1];
        local_f0 = *puVar5;
        uStack_d8 = puVar5[3];
        uStack_e0 = puVar5[2];
        uStack_c8 = puVar5[5];
        local_d0 = puVar5[4];
        uStack_b8 = puVar5[7];
        uStack_c0 = puVar5[6];
        FUN_100558d60(&local_1a0,auStack_248);
        FUN_100558d60(&local_f0,auStack_248);
        puVar1 = &local_1a0;
        FUN_1005a555c(puVar1,&local_f0);
        uVar3 = (uint)puVar1;
        FUN_100558d9c(&local_f0);
        FUN_100558d9c(&local_1a0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x15;
        puVar4 = puVar4 + 0x15;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Address: 0x100554454 | FUN_100554454 */

undefined8 FUN_100554454(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 != 0) && (param_1 != param_2)) {
      puVar14 = (ulong *)(param_1 + 0x40);
      plVar10 = (long *)(param_2 + 0x40);
      do {
        _Var3.unknown = (undefined *)puVar14[-3];
        _Var1.unknown = (undefined *)puVar14[-2];
        _Var4.unknown = (undefined *)puVar14[-1];
        uVar11 = *puVar14;
        puVar5 = (undefined *)plVar10[-3];
        puVar2 = (undefined *)plVar10[-2];
        puVar6 = (undefined *)plVar10[-1];
        lVar12 = *plVar10;
        if (((undefined *)puVar14[-4] != (undefined *)plVar10[-4] || _Var3.unknown != puVar5) &&
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar14[-4],_Var3,
                               (_StringComparisonResult)(__int8)(undefined *)plVar10[-4]), !bVar7))
        goto LAB_100554608;
        if (_Var4.unknown != (undefined *)0x0) {
          if ((puVar6 != (undefined *)0x0) &&
             ((_Var1.unknown == puVar2 && _Var4.unknown == puVar6 ||
              (bVar7 = Swift::_stringCompareWithSmolCheck
                                 (_Var1,_Var4,(_StringComparisonResult)(__int8)puVar2), bVar7))))
          goto LAB_100554554;
LAB_1005545f0:
          _swift_bridgeObjectRetain(uVar11);
LAB_100554600:
          _swift_bridgeObjectRelease(uVar11);
          goto LAB_100554608;
        }
        if (puVar6 != (undefined *)0x0) {
LAB_1005545fc:
          uVar11 = 0;
          goto LAB_100554600;
        }
LAB_100554554:
        if (uVar11 == 0) {
          if (lVar12 != 0) goto LAB_1005545fc;
          _swift_bridgeObjectRelease(0);
        }
        else {
          if (lVar12 == 0) goto LAB_1005545f0;
          _swift_bridgeObjectRetain(puVar6);
          _swift_bridgeObjectRetain(lVar12);
          _swift_bridgeObjectRetain(_Var3.unknown);
          _swift_bridgeObjectRetain(_Var4.unknown);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(puVar5);
          uVar8 = uVar11;
          FUN_100523efc(uVar11,lVar12);
          _swift_bridgeObjectRelease(uVar11);
          _swift_bridgeObjectRelease(_Var4.unknown);
          _swift_bridgeObjectRelease(_Var3.unknown);
          _swift_bridgeObjectRelease(lVar12);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar5);
          if ((uVar8 & 1) == 0) goto LAB_100554608;
        }
        puVar14 = puVar14 + 5;
        plVar10 = plVar10 + 5;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar9 = 1;
  }
  else {
LAB_100554608:
    uVar9 = 0;
  }
  return uVar9;
}



/* Address: 0x10055462c | FUN_10055462c */

uint FUN_10055462c(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_308 [136];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined7 local_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    if ((lVar4 == 0) || (param_1 == param_2)) {
      uVar5 = 1;
      goto LAB_1005547bc;
    }
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar7 = (undefined8 *)(param_2 + 0x20);
    while( true ) {
      lVar4 = lVar4 + -1;
      uStack_218 = puVar6[0xd];
      local_220 = puVar6[0xc];
      uStack_208 = (undefined1)puVar6[0xf];
      uStack_207 = (undefined7)((ulong)puVar6[0xf] >> 8);
      uStack_210 = (undefined1)puVar6[0xe];
      local_20f = (undefined7)((ulong)puVar6[0xe] >> 8);
      uStack_200 = *(undefined1 *)(puVar6 + 0x10);
      uStack_258 = puVar6[5];
      local_260 = puVar6[4];
      uStack_248 = puVar6[7];
      uStack_250 = puVar6[6];
      uStack_238 = puVar6[9];
      local_240 = puVar6[8];
      uStack_228 = puVar6[0xb];
      uStack_230 = puVar6[10];
      uStack_278 = puVar6[1];
      local_280 = *puVar6;
      uStack_268 = puVar6[3];
      uStack_270 = puVar6[2];
      uStack_188 = puVar7[0xd];
      local_190 = puVar7[0xc];
      uStack_178 = (undefined1)puVar7[0xf];
      uStack_177 = (undefined7)((ulong)puVar7[0xf] >> 8);
      uStack_180 = (undefined1)puVar7[0xe];
      local_17f = (undefined7)((ulong)puVar7[0xe] >> 8);
      uStack_170 = *(undefined1 *)(puVar7 + 0x10);
      uStack_1c8 = puVar7[5];
      local_1d0 = puVar7[4];
      uStack_1b8 = puVar7[7];
      uStack_1c0 = puVar7[6];
      uStack_1a8 = puVar7[9];
      local_1b0 = puVar7[8];
      uStack_198 = puVar7[0xb];
      uStack_1a0 = puVar7[10];
      uStack_1e8 = puVar7[1];
      local_1f0 = *puVar7;
      uStack_1d8 = puVar7[3];
      uStack_1e0 = puVar7[2];
      cVar1 = (char)local_280;
      cVar2 = (char)local_1f0;
      FUN_1004dbaa8(&local_280,auStack_308);
      FUN_1004dbaa8(&local_1f0,auStack_308);
      if (cVar1 != cVar2) break;
      uStack_118 = uStack_230;
      local_120 = uStack_238;
      uStack_108 = local_220;
      uStack_110 = uStack_228;
      uStack_f8 = uStack_210;
      local_100 = uStack_218;
      uStack_ef = CONCAT17(uStack_200,uStack_207);
      uStack_f7 = local_20f;
      uStack_f0 = uStack_208;
      uStack_158 = uStack_270;
      local_160 = uStack_278;
      uStack_148 = local_260;
      uStack_150 = uStack_268;
      uStack_138 = uStack_250;
      local_140 = uStack_258;
      uStack_128 = local_240;
      uStack_130 = uStack_248;
      uStack_b8 = uStack_1c0;
      local_c0 = uStack_1c8;
      uStack_a8 = local_1b0;
      uStack_b0 = uStack_1b8;
      uStack_d8 = uStack_1e0;
      local_e0 = uStack_1e8;
      uStack_c8 = local_1d0;
      uStack_d0 = uStack_1d8;
      uStack_6f = CONCAT17(uStack_170,uStack_177);
      uStack_70 = uStack_178;
      uStack_88 = local_190;
      local_90 = uStack_198;
      uStack_78 = uStack_180;
      local_77 = local_17f;
      uStack_80 = uStack_188;
      uStack_98 = uStack_1a0;
      local_a0 = uStack_1a8;
      puVar3 = &local_160;
      FUN_100560020(puVar3,&local_e0);
      uVar5 = (uint)puVar3;
      FUN_1004dbaec(&local_1f0);
      FUN_1004dbaec(&local_280);
      if ((((ulong)puVar3 & 1) == 0) || (lVar4 == 0)) goto LAB_1005547bc;
      puVar7 = puVar7 + 0x11;
      puVar6 = puVar6 + 0x11;
    }
    FUN_1004dbaec(&local_1f0);
    FUN_1004dbaec(&local_280);
  }
  uVar5 = 0;
LAB_1005547bc:
  return uVar5 & 1;
}



/* Address: 0x1005547e0 | FUN_1005547e0 */

undefined8 FUN_1005547e0(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  _StringGuts _Var11;
  ulong uVar12;
  _StringGuts _Var13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  _StringComparisonResult expecting;
  undefined *puVar17;
  undefined *puVar18;
  _StringGuts _Var19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined1 auStack_1f0 [128];
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
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
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      lVar21 = 0;
      do {
        puVar23 = (undefined8 *)(param_1 + 0x20 + lVar21 * 0x38);
        _Var1.unknown = (undefined *)*puVar23;
        _Var5.unknown = (undefined *)puVar23[1];
        _Var11.unknown = (undefined *)puVar23[2];
        _Var19.unknown = (undefined *)puVar23[3];
        bVar8 = *(byte *)(puVar23 + 6);
        puVar24 = (undefined8 *)(param_2 + 0x20 + lVar21 * 0x38);
        puVar2 = (undefined *)*puVar24;
        puVar6 = (undefined *)puVar24[1];
        puVar17 = (undefined *)puVar24[2];
        puVar18 = (undefined *)puVar24[3];
        cVar9 = *(char *)(puVar24 + 6);
        expecting.value = (__int8)puVar2;
        if (bVar8 < 2) {
          if (bVar8 != 0) {
            if (cVar9 == '\x01') goto LAB_100554b44;
            goto LAB_100554dbc;
          }
          if (cVar9 != '\0') goto LAB_100554dbc;
          _Var11.unknown = _Var1.unknown;
          _Var19.unknown = _Var5.unknown;
          puVar17 = puVar2;
          if (_Var1.unknown == puVar2 && _Var5.unknown == puVar6) goto LAB_100554840;
LAB_100554834:
          bVar10 = Swift::_stringCompareWithSmolCheck
                             (_Var11,_Var19,(_StringComparisonResult)(__int8)puVar17);
          if (!bVar10) goto LAB_100554dbc;
        }
        else if (bVar8 == 2) {
          if (cVar9 != '\x02') goto LAB_100554dbc;
LAB_100554b44:
          if ((_Var1.unknown != puVar2 || _Var5.unknown != puVar6) &&
             (bVar10 = Swift::_stringCompareWithSmolCheck(_Var1,_Var5,expecting), !bVar10))
          goto LAB_100554dbc;
          if (_Var11.unknown != puVar17 || _Var19.unknown != puVar18) goto LAB_100554834;
        }
        else {
          uVar3 = puVar23[4];
          uVar20 = puVar23[5];
          uVar4 = puVar24[4];
          lVar7 = puVar24[5];
          uVar14 = uVar20;
          if (bVar8 != 3) {
            if ((cVar9 == '\x04') &&
               (((_Var1.unknown == puVar2 && _Var5.unknown == puVar6 ||
                 (bVar10 = Swift::_stringCompareWithSmolCheck(_Var1,_Var5,expecting), bVar10)) &&
                (lVar22 = *(long *)(_Var11.unknown + 0x10), lVar22 == *(long *)(puVar17 + 0x10)))))
            {
              _Var13.unknown = puVar17;
              if ((lVar22 == 0) || (_Var13.unknown = _Var11.unknown, _Var11.unknown == puVar17)) {
                FUN_1004dbb2c(puVar2,puVar6,_Var13.unknown,puVar18,uVar4,lVar7,4);
                FUN_1004dbb2c(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,uVar20
                              ,4);
              }
              else {
                puVar23 = (undefined8 *)(_Var11.unknown + 0x20);
                puVar24 = (undefined8 *)(puVar17 + 0x20);
                FUN_1004dbb2c(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                FUN_1004dbb2c(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,uVar20
                              ,4);
                do {
                  uStack_168 = puVar23[1];
                  local_170 = *puVar23;
                  uStack_158 = puVar23[3];
                  uStack_160 = puVar23[2];
                  uStack_148 = puVar23[5];
                  local_150 = puVar23[4];
                  uStack_138 = puVar23[7];
                  uStack_140 = puVar23[6];
                  uStack_128 = puVar23[9];
                  local_130 = puVar23[8];
                  uStack_118 = puVar23[0xb];
                  local_120 = puVar23[10];
                  uStack_110 = puVar23[0xc];
                  uStack_ff = *(undefined8 *)((long)puVar23 + 0x71);
                  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)puVar23 + 0x69) >> 0x38);
                  uStack_108 = (undefined1)puVar23[0xd];
                  local_107 = (undefined7)((ulong)puVar23[0xd] >> 8);
                  uStack_98 = puVar24[0xb];
                  local_a0 = puVar24[10];
                  uStack_90 = puVar24[0xc];
                  uStack_7f = *(undefined8 *)((long)puVar24 + 0x71);
                  uStack_a8 = puVar24[9];
                  local_b0 = puVar24[8];
                  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar24 + 0x69) >> 0x38);
                  uStack_88 = (undefined1)puVar24[0xd];
                  local_87 = (undefined7)((ulong)puVar24[0xd] >> 8);
                  uStack_e8 = puVar24[1];
                  local_f0 = *puVar24;
                  uStack_d8 = puVar24[3];
                  uStack_e0 = puVar24[2];
                  uStack_c8 = puVar24[5];
                  local_d0 = puVar24[4];
                  uStack_b8 = puVar24[7];
                  uStack_c0 = puVar24[6];
                  FUN_100558ef8(&local_170,auStack_1f0);
                  FUN_100558ef8(&local_f0,auStack_1f0);
                  puVar15 = &local_170;
                  FUN_100560020(puVar15,&local_f0);
                  FUN_1004dbca0(&local_f0);
                  FUN_1004dbca0(&local_170);
                  if (((ulong)puVar15 & 1) == 0) {
                    FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                    goto LAB_100554ef0;
                  }
                  puVar23 = puVar23 + 0x10;
                  puVar24 = puVar24 + 0x10;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              if (_Var19.unknown == (undefined *)0x0) {
                if (puVar18 == (undefined *)0x0) {
LAB_100554bbc:
                  if ((uVar3 & 0xff) == 2) {
                    if ((uVar4 & 0xff) == 2) {
LAB_100554c00:
                      if (uVar20 == 0) {
                        if (lVar7 == 0) goto LAB_100554d7c;
                        FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                        uVar20 = 0;
                        goto LAB_100554ef0;
                      }
                      if (lVar7 != 0) {
                        _swift_bridgeObjectRetain(lVar7);
                        _swift_bridgeObjectRetain();
                        FUN_100523efc();
                        _swift_bridgeObjectRelease(uVar20);
                        _swift_bridgeObjectRelease(lVar7);
                        FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                        FUN_1004dbbd4(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,
                                      uVar3,uVar20,4);
                        goto joined_r0x000100554c88;
                      }
                    }
                  }
                  else if (((uVar4 & 0xff) != 2) && ((((uint)uVar3 ^ (uint)uVar4) & 1) == 0))
                  goto LAB_100554c00;
                  FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                }
                else {
                  FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
                  _Var19.unknown = (undefined *)0x0;
                }
              }
              else {
                if (puVar18 == (undefined *)0x0) {
                  puVar18 = (undefined *)0x0;
                }
                else {
                  _swift_bridgeObjectRetain();
                  _Var13.unknown = _Var19.unknown;
                  _swift_bridgeObjectRetain();
                  FUN_100523efc();
                  _swift_bridgeObjectRelease(_Var19.unknown);
                  _swift_bridgeObjectRelease(puVar18);
                  if (((ulong)_Var13.unknown & 1) != 0) goto LAB_100554bbc;
                }
                FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,4);
              }
LAB_100554ef0:
              uVar16 = 4;
              goto LAB_100554ef4;
            }
            goto LAB_100554dbc;
          }
          if (((cVar9 != '\x03') ||
              ((_Var1.unknown != puVar2 || _Var5.unknown != puVar6 &&
               (bVar10 = Swift::_stringCompareWithSmolCheck(_Var1,_Var5,expecting), !bVar10)))) ||
             ((_Var11.unknown != puVar17 || _Var19.unknown != puVar18 &&
              (bVar10 = Swift::_stringCompareWithSmolCheck
                                  (_Var11,_Var19,(_StringComparisonResult)(__int8)puVar17), !bVar10)
              ))) goto LAB_100554dbc;
          FUN_1004dbb2c(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,3);
          FUN_1004dbb2c(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,uVar20,3);
          uVar12 = uVar3;
          FUN_100523efc(uVar3,uVar4);
          if ((uVar12 & 1) == 0) {
            FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,3);
LAB_100554f30:
            uVar16 = 3;
LAB_100554ef4:
            FUN_1004dbbd4(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,uVar20,
                          uVar16);
            return 0;
          }
          if (uVar20 == 0) {
            if (lVar7 != 0) {
              FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,3);
              uVar20 = 0;
              goto LAB_100554f30;
            }
LAB_100554d7c:
            FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,0,bVar8);
            FUN_1004dbbd4(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,0,bVar8);
          }
          else {
            if (lVar7 == 0) {
              FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,0,3);
              goto LAB_100554f30;
            }
            _swift_bridgeObjectRetain(lVar7);
            _swift_bridgeObjectRetain();
            FUN_100523efc();
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(lVar7);
            FUN_1004dbbd4(puVar2,puVar6,puVar17,puVar18,uVar4,lVar7,3);
            FUN_1004dbbd4(_Var1.unknown,_Var5.unknown,_Var11.unknown,_Var19.unknown,uVar3,uVar20,3);
joined_r0x000100554c88:
            if ((uVar14 & 1) == 0) goto LAB_100554dbc;
          }
        }
LAB_100554840:
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar25);
    }
    uVar16 = 1;
  }
  else {
LAB_100554dbc:
    uVar16 = 0;
  }
  return uVar16;
}



/* Address: 0x100554f9c | FUN_100554f9c */

undefined8 FUN_100554f9c(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 == 0) || (param_1 == param_2)) {
      uVar8 = 1;
    }
    else {
      lVar14 = 0;
      do {
        puVar11 = (undefined8 *)(param_1 + 0x20 + lVar14 * 0x30);
        _Var1.unknown = (undefined *)puVar11[2];
        _Var3.unknown = (undefined *)puVar11[3];
        lVar9 = puVar11[4];
        cVar5 = *(char *)(puVar11 + 5);
        puVar12 = (undefined8 *)(param_2 + 0x20 + lVar14 * 0x30);
        puVar2 = (undefined *)puVar12[2];
        puVar4 = (undefined *)puVar12[3];
        lVar15 = puVar12[4];
        cVar6 = *(char *)(puVar12 + 5);
        if (((undefined *)*puVar11 != (undefined *)*puVar12 ||
             (undefined *)puVar11[1] != (undefined *)puVar12[1]) &&
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar11,(undefined *)puVar11[1],
                               (_StringComparisonResult)(__int8)(undefined *)*puVar12), !bVar7))
        goto LAB_100555128;
        if (_Var3.unknown != (undefined *)0x0) {
          if ((puVar4 != (undefined *)0x0) &&
             ((_Var1.unknown == puVar2 && _Var3.unknown == puVar4 ||
              (bVar7 = Swift::_stringCompareWithSmolCheck
                                 (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), bVar7))))
          goto LAB_10055508c;
LAB_100555118:
          _swift_bridgeObjectRetain(lVar9);
LAB_100555120:
          _swift_bridgeObjectRelease(lVar9);
          goto LAB_100555128;
        }
        if (puVar4 != (undefined *)0x0) {
LAB_10055514c:
          lVar9 = 0;
          goto LAB_100555120;
        }
LAB_10055508c:
        if (lVar9 == 0) {
          if (lVar15 != 0) goto LAB_10055514c;
        }
        else {
          if ((lVar15 == 0) ||
             (lVar10 = *(long *)(lVar9 + 0x10), lVar10 != *(long *)(lVar15 + 0x10)))
          goto LAB_100555118;
          if (lVar10 != 0 && lVar9 != lVar15) {
            puVar11 = (undefined8 *)(lVar15 + 0x28);
            puVar12 = (undefined8 *)(lVar9 + 0x28);
            do {
              if (((undefined *)puVar12[-1] != (undefined *)puVar11[-1] ||
                   (undefined *)*puVar12 != (undefined *)*puVar11) &&
                 (bVar7 = Swift::_stringCompareWithSmolCheck
                                    ((undefined *)puVar12[-1],(undefined *)*puVar12,
                                     (_StringComparisonResult)(__int8)(undefined *)puVar11[-1]),
                 !bVar7)) goto LAB_100555118;
              puVar11 = puVar11 + 2;
              puVar12 = puVar12 + 2;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        if (cVar5 == '\x02') {
          if (cVar6 != '\x02') goto LAB_100555128;
        }
        else {
          if (cVar6 == '\x02') goto LAB_100555118;
          if (cVar5 != cVar6) goto LAB_100555128;
        }
        lVar14 = lVar14 + 1;
        uVar8 = 1;
      } while (lVar14 != lVar13);
    }
  }
  else {
LAB_100555128:
    uVar8 = 0;
  }
  return uVar8;
}



/* Address: 0x100555154 | FUN_100555154 */

undefined8 FUN_100555154(long param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      puVar16 = (undefined8 *)(param_2 + 0x30);
      puVar17 = (undefined8 *)(param_1 + 0x30);
      do {
        _Var1.unknown = (undefined *)*puVar17;
        _Var7.unknown = (undefined *)puVar17[1];
        _Var2.unknown = (undefined *)puVar17[2];
        _Var8.unknown = (undefined *)puVar17[3];
        _Var3.unknown = (undefined *)puVar17[4];
        _Var9.unknown = (undefined *)puVar17[5];
        puVar4 = (undefined *)*puVar16;
        puVar10 = (undefined *)puVar16[1];
        puVar5 = (undefined *)puVar16[2];
        puVar11 = (undefined *)puVar16[3];
        puVar6 = (undefined *)puVar16[4];
        puVar12 = (undefined *)puVar16[5];
        if ((((((undefined *)puVar17[-2] != (undefined *)puVar16[-2]) ||
              ((undefined *)puVar17[-1] != (undefined *)puVar16[-1])) &&
             (bVar13 = Swift::_stringCompareWithSmolCheck
                                 ((undefined *)puVar17[-2],(undefined *)puVar17[-1],
                                  (_StringComparisonResult)(__int8)(undefined *)puVar16[-2]),
             !bVar13)) ||
            ((((_Var1.unknown != puVar4 || (_Var7.unknown != puVar10)) &&
              (bVar13 = Swift::_stringCompareWithSmolCheck
                                  (_Var1,_Var7,(_StringComparisonResult)(__int8)puVar4), !bVar13))
             || (((_Var2.unknown != puVar5 || (_Var8.unknown != puVar11)) &&
                 (bVar13 = Swift::_stringCompareWithSmolCheck
                                     (_Var2,_Var8,(_StringComparisonResult)(__int8)puVar5), !bVar13)
                 ))))) ||
           (((_Var3.unknown != puVar6 || (_Var9.unknown != puVar12)) &&
            (bVar13 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var9,(_StringComparisonResult)(__int8)puVar6), !bVar13))))
        goto LAB_100555274;
        puVar16 = puVar16 + 8;
        puVar17 = puVar17 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_100555274:
    uVar14 = 0;
  }
  return uVar14;
}



/* Address: 0x1005552a0 | FUN_1005552a0 */

undefined8 FUN_1005552a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      lVar16 = 0;
      do {
        lVar1 = param_1 + lVar16;
        _Var3.unknown = *(undefined **)(lVar1 + 0x30);
        _Var7.unknown = *(undefined **)(lVar1 + 0x38);
        _Var4.unknown = *(undefined **)(lVar1 + 0x40);
        _Var8.unknown = *(undefined **)(lVar1 + 0x48);
        bVar11 = *(byte *)(lVar1 + 0x50);
        lVar2 = param_2 + lVar16;
        puVar5 = *(undefined **)(lVar2 + 0x30);
        puVar9 = *(undefined **)(lVar2 + 0x38);
        puVar6 = *(undefined **)(lVar2 + 0x40);
        puVar10 = *(undefined **)(lVar2 + 0x48);
        bVar12 = *(byte *)(lVar2 + 0x50);
        if (((*(undefined **)(lVar1 + 0x20) != *(undefined **)(lVar2 + 0x20)) ||
            (*(undefined **)(lVar1 + 0x28) != *(undefined **)(lVar2 + 0x28))) &&
           (bVar13 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)*(undefined **)(lVar1 + 0x20),
                                (_StringGuts)*(undefined **)(lVar1 + 0x28),
                                (_StringComparisonResult)(__int8)*(undefined **)(lVar2 + 0x20)),
           !bVar13)) goto LAB_1005553e0;
        if (_Var7.unknown == (undefined *)0x0) {
          if (puVar9 != (undefined *)0x0) goto LAB_1005553e0;
        }
        else if ((puVar9 == (undefined *)0x0) ||
                (((_Var3.unknown != puVar5 || (_Var7.unknown != puVar9)) &&
                 (bVar13 = Swift::_stringCompareWithSmolCheck
                                     (_Var3,_Var7,(_StringComparisonResult)(__int8)puVar5), !bVar13)
                 ))) goto LAB_1005553e0;
        if (_Var8.unknown == (undefined *)0x0) {
          if (puVar10 != (undefined *)0x0) goto LAB_1005553e0;
        }
        else if ((puVar10 == (undefined *)0x0) ||
                (((_Var4.unknown != puVar6 || (_Var8.unknown != puVar10)) &&
                 (bVar13 = Swift::_stringCompareWithSmolCheck
                                     (_Var4,_Var8,(_StringComparisonResult)(__int8)puVar6), !bVar13)
                 ))) goto LAB_1005553e0;
        if (bVar11 == 2) {
          if (bVar12 != 2) goto LAB_1005553e0;
        }
        else {
          if (bVar12 == 2) {
            return 0;
          }
          if (((bVar11 ^ bVar12) & 1) != 0) {
            return 0;
          }
        }
        lVar16 = lVar16 + 0x38;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_1005553e0:
    uVar14 = 0;
  }
  return uVar14;
}



/* Address: 0x10055540c | thunk_FUN_100556d68 */

bool thunk_FUN_100556d68(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar3 = (char *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *pcVar2 == *pcVar3;
      if (*pcVar2 != *pcVar3) {
        return bVar1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Address: 0x100555410 | FUN_100555410 */

bool FUN_100555410(long param_1,long param_2)

{
  bool bVar1;
  URL UVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long local_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  local_68 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    if ((lVar4 == 0) || (param_1 == param_2)) {
      bVar1 = true;
    }
    else {
      uVar5 = (ulong)*(byte *)(local_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(local_68 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar5;
      param_2 = param_2 + uVar5;
      lVar9 = *(long *)(local_68 + 0x48);
      pcVar10 = *(code **)(local_68 + 0x10);
      do {
        lVar4 = lVar4 + -1;
        (*pcVar10)(lVar7,param_1,UVar2.unknown);
        puVar3 = puVar6;
        (*pcVar10)(puVar6,param_2,UVar2.unknown);
        FUN_1004d21b4();
        bVar1 = Swift::Equatable::___infix(lVar7,puVar6,UVar2.unknown,puVar3);
        pcVar8 = *(code **)(local_68 + 8);
        (*pcVar8)(puVar6,UVar2.unknown);
        (*pcVar8)(lVar7,UVar2.unknown);
        if (!bVar1) {
          return bVar1;
        }
        param_2 = param_2 + lVar9;
        param_1 = param_1 + lVar9;
      } while (lVar4 != 0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100555578 | FUN_100555578 */

undefined8 FUN_100555578(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  _StringGuts _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  uint local_7c;
  
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      pbVar19 = (byte *)(param_2 + 0x40);
      pbVar14 = (byte *)(param_1 + 0x40);
      do {
        _Var1.unknown = *(undefined **)(pbVar14 + -0x20);
        _Var3.unknown = *(undefined **)(pbVar14 + -0x18);
        uVar17 = *(undefined8 *)(pbVar14 + -8);
        bVar5 = *pbVar14;
        puVar2 = *(undefined **)(pbVar19 + -0x20);
        puVar4 = *(undefined **)(pbVar19 + -0x18);
        lVar16 = *(long *)(pbVar19 + -8);
        bVar6 = *pbVar19;
        uVar7 = (uint)((ulong)uVar17 >> 0x3c) & 0xfffffc03 | (bVar5 & 0x3f) << 2;
        uVar15 = (uint)bVar6;
        uVar8 = (uint)((ulong)lVar16 >> 0x20);
        if (uVar7 < 4) {
          if (uVar7 < 2) {
            if (uVar7 == 0) {
              if ((uVar8 >> 0x1c & 0xfffffc03) != 0 || (bVar6 & 0x3f) != 0) {
                return 0;
              }
              if ((((uint)puVar2 ^ (uint)_Var1.unknown) & 1) != 0) {
                return 0;
              }
            }
            else if ((uVar8 >> 0x1c & 0xfffffc03 | (uVar15 & 0x3f) << 2) != 1 ||
                     _Var1.unknown != puVar2) goto LAB_1005558b0;
          }
          else {
            if (uVar7 == 2) {
              bVar9 = false;
              if (((uVar8 >> 0x1c & 0xfffffc03 | (uVar15 & 0x3f) << 2) == 2) &&
                 (bVar9 = false, !NAN((double)_Var1.unknown) && !NAN((double)puVar2))) {
                bVar9 = (double)_Var1.unknown == (double)puVar2;
              }
            }
            else {
              if ((uVar8 >> 0x1c & 0xfffffc03 | (uVar15 & 0x3f) << 2) != 3) goto LAB_1005558b0;
              if ((_Var1.unknown == puVar2) && (_Var3.unknown == puVar4)) goto LAB_1005555d8;
              bVar9 = Swift::_stringCompareWithSmolCheck
                                (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2);
            }
            if (!bVar9) goto LAB_1005558b0;
          }
        }
        else {
          uVar12 = *(undefined8 *)(pbVar14 + -0x10);
          lVar13 = *(long *)(pbVar19 + -0x10);
          if (uVar7 < 6) {
            uVar8 = uVar8 >> 0x1c & 0xfffffc03 | (uVar15 & 0x3f) << 2;
            if (uVar7 != 4) {
              if (uVar8 == 5) {
                FUN_10045b2bc(puVar2,puVar4,lVar13,lVar16,bVar6);
                FUN_10045b2bc(_Var1.unknown,_Var3.unknown,uVar12,uVar17,bVar5);
                _Var10.unknown = _Var1.unknown;
                FUN_100555578(_Var1.unknown,puVar2);
                local_7c = (uint)_Var10.unknown;
                goto LAB_100555780;
              }
              goto LAB_1005558b0;
            }
            if (uVar8 != 4) goto LAB_1005558b0;
            if (_Var3.unknown == (undefined *)0x0) {
              if (puVar4 != (undefined *)0x0) goto LAB_1005558b0;
            }
            else if ((puVar4 == (undefined *)0x0) ||
                    (((_Var1.unknown != puVar2 || (_Var3.unknown != puVar4)) &&
                     (bVar9 = Swift::_stringCompareWithSmolCheck
                                        (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2),
                     !bVar9)))) goto LAB_1005558b0;
            FUN_10045b2bc(puVar2,puVar4,lVar13,lVar16,bVar6);
            FUN_10045b2bc(_Var1.unknown,_Var3.unknown,uVar12,uVar17,bVar5);
            uVar11 = uVar12;
            FUN_10031b830(uVar12,uVar17,lVar13,lVar16);
            local_7c = (uint)uVar11;
            FUN_1004dbde0(puVar2,puVar4,lVar13,lVar16,bVar6);
          }
          else {
            if (uVar7 != 6) {
              if ((uVar8 >> 0x1c & 0xfffffc03 | (bVar6 & 0x3f) << 2) == 7) {
                if ((puVar4 != (undefined *)0x0 || puVar2 != (undefined *)0x0) || lVar13 != 0) {
                  return 0;
                }
                if (lVar16 != 0x3000000000000000) {
                  return 0;
                }
                goto LAB_1005555d8;
              }
              goto LAB_1005558b0;
            }
            if ((uVar8 >> 0x1c & 0xfffffc03 | (bVar6 & 0x3f) << 2) != 6) goto LAB_1005558b0;
            FUN_10045b2bc(puVar2,puVar4,lVar13,lVar16,bVar6);
            FUN_10045b2bc(_Var1.unknown,_Var3.unknown,uVar12,uVar17,bVar5);
            _Var10.unknown = _Var1.unknown;
            FUN_100523efc(_Var1.unknown,puVar2);
            local_7c = (uint)_Var10.unknown;
LAB_100555780:
            FUN_1004dbde0(puVar2,puVar4,lVar13,lVar16,bVar6);
          }
          FUN_1004dbde0(_Var1.unknown,_Var3.unknown,uVar12,uVar17,bVar5);
          if ((local_7c & 1) == 0) goto LAB_1005558b0;
        }
LAB_1005555d8:
        pbVar19 = pbVar19 + 0x28;
        pbVar14 = pbVar14 + 0x28;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    uVar17 = 1;
  }
  else {
LAB_1005558b0:
    uVar17 = 0;
  }
  return uVar17;
}



/* Address: 0x1005558dc | FUN_1005558dc */

undefined8 FUN_1005558dc(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_2 + 0x10)) {
    if ((lVar5 != 0) && (param_1 != param_2)) {
      puVar6 = (undefined8 *)(param_2 + 0x28);
      puVar7 = (undefined8 *)(param_1 + 0x28);
      do {
        _Var3.unknown = (undefined *)*puVar7;
        puVar4 = (undefined *)*puVar6;
        if (_Var3.unknown == (undefined *)0x0) {
          if (puVar4 != (undefined *)0x0) goto LAB_100555958;
        }
        else {
          if (puVar4 == (undefined *)0x0) goto LAB_100555958;
          if (((undefined *)puVar7[-1] != (undefined *)puVar6[-1] || _Var3.unknown != puVar4) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar7[-1],_Var3,
                                 (_StringComparisonResult)(__int8)(undefined *)puVar6[-1]), !bVar1))
          goto LAB_100555958;
        }
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_100555958:
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x100555974 | FUN_100555974 */

undefined8 FUN_100555974(long param_1,long param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  _StringGuts _Var10;
  _StringGuts _Var11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  _StringGuts _Var14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte bVar19;
  char cVar20;
  _StringGuts _Var21;
  undefined **ppuVar22;
  char cVar23;
  undefined *puVar24;
  code *pcVar25;
  bool bVar26;
  int iVar27;
  _StringGuts _Var28;
  _StringGuts _Var29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long *plVar32;
  ulong uVar33;
  undefined **ppuVar34;
  long lVar35;
  _StringGuts _Var36;
  undefined8 uVar37;
  _StringGuts _Var38;
  _StringGuts _Var39;
  _StringComparisonResult expecting;
  _StringComparisonResult expecting_00;
  undefined *puVar40;
  undefined *puVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 *puVar50;
  _StringGuts _Var51;
  long lVar52;
  ulong uVar53;
  undefined8 uVar54;
  _StringGuts _Var55;
  long *plVar56;
  long lVar57;
  _StringGuts _Var58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  long *plVar63;
  long local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  long lStack_508;
  long local_500;
  long lStack_4f8;
  long local_4f0;
  long lStack_4e8;
  long local_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long local_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long local_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long local_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_43f;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined7 local_3c7;
  undefined1 uStack_3c0;
  undefined8 uStack_3bf;
  long local_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long local_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long local_370;
  long lStack_368;
  long local_360;
  long lStack_358;
  long lStack_350;
  undefined1 uStack_348;
  undefined7 local_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined8 uStack_2bf;
  undefined8 local_2b0;
  _StringGuts _Stack_2a8;
  _StringGuts local_2a0;
  _StringGuts _Stack_298;
  _StringGuts local_290;
  ulong local_288;
  undefined **local_280;
  undefined8 uStack_278;
  ulong local_270;
  undefined8 local_260;
  undefined *puStack_258;
  undefined *local_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 uStack_228;
  long local_220;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 local_1f0;
  undefined **local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  undefined1 local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  undefined1 local_88;
  long local_80;
  long lStack_78;
  
  lVar62 = *(long *)(param_1 + 0x10);
  if (lVar62 == *(long *)(param_2 + 0x10)) {
    if ((lVar62 != 0) && (param_1 != param_2)) {
      lVar57 = 0;
      do {
        puVar50 = (undefined8 *)(param_1 + 0x20 + lVar57 * 0x48);
        local_288 = puVar50[5];
        local_290.unknown = (undefined *)puVar50[4];
        uStack_278 = puVar50[7];
        local_280 = (undefined **)puVar50[6];
        local_270 = puVar50[8];
        _Stack_2a8.unknown = (undefined *)puVar50[1];
        local_2b0 = *puVar50;
        _Stack_298.unknown = (undefined *)puVar50[3];
        local_2a0.unknown = (undefined *)puVar50[2];
        puVar50 = (undefined8 *)(param_2 + 0x20 + lVar57 * 0x48);
        uStack_238 = puVar50[5];
        local_240 = (undefined *)puVar50[4];
        uStack_228 = puVar50[7];
        local_230 = puVar50[6];
        local_220 = puVar50[8];
        puStack_258 = (undefined *)puVar50[1];
        local_260 = *puVar50;
        puStack_248 = (undefined *)puVar50[3];
        local_250 = (undefined *)puVar50[2];
        cVar20 = (char)local_2b0;
        cVar23 = (char)local_260;
        FUN_100558e40(&local_2b0,&local_330);
        FUN_100558e40(&local_260,&local_330);
        lVar52 = local_230;
        uVar37 = uStack_238;
        puVar1 = local_240;
        puVar41 = puStack_248;
        puVar24 = puStack_258;
        ppuVar22 = local_280;
        uVar53 = local_288;
        _Var28.unknown = local_290.unknown;
        _Var36.unknown = _Stack_298.unknown;
        _Var21.unknown = _Stack_2a8.unknown;
        if (cVar20 != cVar23) {
LAB_100556d24:
          FUN_100558e7c(&local_260);
          FUN_100558e7c(&local_2b0);
          goto LAB_100556d34;
        }
        if (-1 < (char)(byte)uStack_278) {
          if (-1 < (char)uStack_228) {
            if ((byte)uStack_278 < 2) {
              if ((byte)uStack_278 == 0) {
                if ((char)uStack_228 == '\0') {
                  _Var36.unknown = _Stack_2a8.unknown;
                  _Var28.unknown = local_2a0.unknown;
                  puVar41 = puStack_258;
                  if ((_Stack_2a8.unknown == puStack_258) && (local_2a0.unknown == local_250))
                  goto LAB_1005569f8;
LAB_1005569ec:
                  bVar26 = Swift::_stringCompareWithSmolCheck
                                     (_Var36,_Var28,(_StringComparisonResult)(__int8)puVar41);
                  if (bVar26) goto LAB_1005569f8;
                }
              }
              else if ((char)uStack_228 == '\x01') goto LAB_1005569b0;
            }
            else if ((byte)uStack_278 == 2) {
              if ((char)uStack_228 == '\x02') {
LAB_1005569b0:
                if (((_Stack_2a8.unknown == puStack_258) && (local_2a0.unknown == local_250)) ||
                   (bVar26 = Swift::_stringCompareWithSmolCheck
                                       (_Stack_2a8,local_2a0,
                                        (_StringComparisonResult)(__int8)puStack_258), bVar26)) {
                  if ((_Var36.unknown == puVar41) && (_Var28.unknown == puVar1)) goto LAB_1005569f8;
                  goto LAB_1005569ec;
                }
              }
            }
            else if ((byte)uStack_278 == 3) {
              if (((char)uStack_228 == '\x03') &&
                 ((((_Stack_2a8.unknown == puStack_258 && (local_2a0.unknown == local_250)) ||
                   (bVar26 = Swift::_stringCompareWithSmolCheck
                                       (_Stack_2a8,local_2a0,
                                        (_StringComparisonResult)(__int8)puStack_258), bVar26)) &&
                  ((((_Var36.unknown == puVar41 && (_Var28.unknown == puVar1)) ||
                    (bVar26 = Swift::_stringCompareWithSmolCheck
                                        (_Var36,_Var28,(_StringComparisonResult)(__int8)puVar41),
                    bVar26)) && (FUN_100523efc(uVar53,uVar37), (uVar53 & 1) != 0)))))) {
                if (ppuVar22 == (undefined **)0x0) {
                  if (lVar52 == 0) goto LAB_1005569f8;
                }
                else if (lVar52 != 0) {
                  _swift_bridgeObjectRetain(lVar52);
                  ppuVar34 = ppuVar22;
                  _swift_bridgeObjectRetain();
                  FUN_100523efc();
                  _swift_bridgeObjectRelease(ppuVar22);
                  _swift_bridgeObjectRelease(lVar52);
                  goto joined_r0x0001005569a0;
                }
              }
            }
            else {
              local_210 = _Stack_2a8.unknown;
              local_208 = local_2a0.unknown;
              local_200 = _Stack_298.unknown;
              local_1f8 = local_290.unknown;
              local_1f0 = (undefined1)local_288;
              local_1e8 = local_280;
              if ((char)uStack_228 == '\x04') {
                local_1e0 = puStack_258;
                local_1d8 = local_250;
                local_1d0 = puStack_248;
                local_1c8 = local_240;
                local_1c0 = (undefined1)uStack_238;
                local_1b8 = local_230;
                ppuVar34 = &local_210;
                FUN_10056073c(ppuVar34,&local_1e0);
joined_r0x0001005569a0:
                if (((ulong)ppuVar34 & 1) != 0) goto LAB_1005569f8;
              }
            }
          }
          goto LAB_100556d24;
        }
        if ((-1 < (char)uStack_228) ||
           (uVar53 = *(ulong *)(_Stack_2a8.unknown + 0x10), uVar53 != *(ulong *)(puStack_258 + 0x10)
           )) goto LAB_100556d24;
        if ((uVar53 != 0) && (_Stack_2a8.unknown != puStack_258)) {
          uVar60 = 0;
LAB_100555bc4:
          if (*(ulong *)(_Var21.unknown + 0x10) <= uVar60) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x100556d5c);
            (*pcVar25)();
          }
          if (*(ulong *)(puVar24 + 0x10) <= uVar60) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x100556d60);
            (*pcVar25)();
          }
          puVar50 = (undefined8 *)(_Var21.unknown + uVar60 * 0x38 + 0x20);
          _Var36.unknown = (undefined *)*puVar50;
          _Var39.unknown = (undefined *)puVar50[1];
          _Var28.unknown = (undefined *)puVar50[2];
          _Var38.unknown = (undefined *)puVar50[3];
          bVar19 = *(byte *)(puVar50 + 6);
          puVar31 = (undefined8 *)(puVar24 + uVar60 * 0x38 + 0x20);
          puVar41 = (undefined *)*puVar31;
          puVar6 = (undefined *)puVar31[1];
          puVar1 = (undefined *)puVar31[2];
          puVar7 = (undefined *)puVar31[3];
          cVar20 = *(char *)(puVar31 + 6);
          expecting_00.value = (__int8)puVar41;
          expecting.value = (__int8)puVar1;
          if (1 < bVar19) {
            if (bVar19 == 2) {
              if ((cVar20 == '\x02') &&
                 ((_Var36.unknown == puVar41 && _Var39.unknown == puVar6 ||
                  (bVar26 = Swift::_stringCompareWithSmolCheck(_Var36,_Var39,expecting_00), bVar26))
                 )) {
                if (_Var28.unknown != puVar1 || _Var38.unknown != puVar7) goto LAB_100555ba4;
                goto LAB_100555bb4;
              }
              goto LAB_100556d24;
            }
            uVar43 = puVar50[4];
            uVar44 = puVar50[5];
            uVar45 = puVar31[4];
            uVar46 = puVar31[5];
            uVar33 = uVar44;
            if (bVar19 == 3) {
              if (((cVar20 != '\x03') ||
                  ((_Var36.unknown != puVar41 || _Var39.unknown != puVar6 &&
                   (bVar26 = Swift::_stringCompareWithSmolCheck(_Var36,_Var39,expecting_00), !bVar26
                   )))) || ((_Var28.unknown != puVar1 || _Var38.unknown != puVar7 &&
                            (bVar26 = Swift::_stringCompareWithSmolCheck(_Var28,_Var38,expecting),
                            !bVar26)))) goto LAB_100556d24;
              FUN_1004dbb2c(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,3);
              FUN_1004dbb2c(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                            uVar44,3);
              uVar59 = uVar43;
              FUN_100523efc(uVar43,uVar45);
              if ((uVar59 & 1) != 0) {
                if (uVar44 == 0) {
                  _swift_bridgeObjectRetain(uVar46);
                  FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,0
                                ,3);
                  if (uVar46 != 0) {
                    _swift_bridgeObjectRelease(uVar46);
                    _Var36.unknown = puVar41;
                    _Var39.unknown = puVar6;
                    _Var28.unknown = puVar1;
                    _Var38.unknown = puVar7;
                    uVar43 = uVar45;
                    uVar44 = uVar46;
                    goto LAB_100556c44;
                  }
LAB_100556928:
                  FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,0,bVar19);
                  goto LAB_100555bb4;
                }
                if (uVar46 == 0) {
                  _swift_bridgeObjectRetain(uVar44);
                  FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                                uVar44,3);
                  FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,0,3);
                  _swift_bridgeObjectRelease(uVar44);
                  goto LAB_100556d24;
                }
                _swift_bridgeObjectRetain(uVar46);
                _swift_bridgeObjectRetain();
                FUN_100523efc();
                FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,3);
                FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                              uVar44,3);
                _swift_bridgeObjectRelease(uVar44);
                _swift_bridgeObjectRelease(uVar46);
joined_r0x0001005568f0:
                if ((uVar33 & 1) == 0) goto LAB_100556d24;
                goto LAB_100555bb4;
              }
              FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,3);
LAB_100556c44:
              uVar37 = 3;
            }
            else {
              if ((cVar20 != '\x04') ||
                 (((_Var36.unknown != puVar41 || _Var39.unknown != puVar6 &&
                   (bVar26 = Swift::_stringCompareWithSmolCheck(_Var36,_Var39,expecting_00), !bVar26
                   )) || (uVar59 = *(ulong *)(_Var28.unknown + 0x10),
                         uVar59 != *(ulong *)(puVar1 + 0x10))))) goto LAB_100556d24;
              _Var29.unknown = puVar1;
              if ((uVar59 == 0) || (_Var29.unknown = _Var28.unknown, _Var28.unknown == puVar1)) {
                FUN_1004dbb2c(puVar41,puVar6,_Var29.unknown,puVar7,uVar45,uVar46,4);
                FUN_1004dbb2c(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                              uVar44,4);
              }
              else {
                puVar50 = (undefined8 *)(_Var28.unknown + 0x20);
                plVar63 = (long *)(puVar1 + 0x20);
                FUN_1004dbb2c(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,4);
                FUN_1004dbb2c(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                              uVar44,4);
                uVar61 = 0;
                do {
                  if (*(ulong *)(_Var28.unknown + 0x10) <= uVar61) {
                    /* WARNING: Does not return */
                    pcVar25 = (code *)SoftwareBreakpoint(1,0x100556d64);
                    (*pcVar25)();
                  }
                  uStack_428 = puVar50[1];
                  local_430 = *puVar50;
                  uStack_418 = puVar50[3];
                  local_420 = puVar50[2];
                  uStack_408 = puVar50[5];
                  local_410 = puVar50[4];
                  uStack_3f8 = puVar50[7];
                  uStack_400 = puVar50[6];
                  uStack_3e8 = puVar50[9];
                  local_3f0 = puVar50[8];
                  uStack_3d8 = puVar50[0xb];
                  local_3e0 = puVar50[10];
                  uStack_3d0 = puVar50[0xc];
                  uStack_3bf = *(undefined8 *)((long)puVar50 + 0x71);
                  uStack_3c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar50 + 0x69) >> 0x38);
                  uStack_3c8 = (undefined1)puVar50[0xd];
                  local_3c7 = (undefined7)((ulong)puVar50[0xd] >> 8);
                  if (*(ulong *)(puVar1 + 0x10) <= uVar61) {
                    /* WARNING: Does not return */
                    pcVar25 = (code *)SoftwareBreakpoint(1,0x100556d68);
                    (*pcVar25)();
                  }
                  lStack_3a8 = plVar63[1];
                  local_3b0 = *plVar63;
                  lStack_398 = plVar63[3];
                  lStack_3a0 = plVar63[2];
                  lStack_388 = plVar63[5];
                  local_390 = plVar63[4];
                  lStack_378 = plVar63[7];
                  lStack_380 = plVar63[6];
                  lStack_368 = plVar63[9];
                  local_370 = plVar63[8];
                  lStack_358 = plVar63[0xb];
                  local_360 = plVar63[10];
                  lStack_350 = plVar63[0xc];
                  uStack_33f = *(undefined8 *)((long)plVar63 + 0x71);
                  uStack_340 = (undefined1)((ulong)*(undefined8 *)((long)plVar63 + 0x69) >> 0x38);
                  uStack_348 = (undefined1)plVar63[0xd];
                  local_347 = (undefined7)((ulong)plVar63[0xd] >> 8);
                  uStack_2c7 = local_3c7;
                  uStack_2c0 = uStack_3c0;
                  iVar27 = (int)&local_430;
                  local_330 = local_430;
                  uStack_328 = uStack_428;
                  uStack_320 = local_420;
                  uStack_318 = uStack_418;
                  local_310 = local_410;
                  uStack_308 = uStack_408;
                  uStack_300 = uStack_400;
                  uStack_2f8 = uStack_3f8;
                  local_2f0 = local_3f0;
                  uStack_2e8 = uStack_3e8;
                  uStack_2e0 = local_3e0;
                  uStack_2d8 = uStack_3d8;
                  local_2d0 = uStack_3d0;
                  uStack_2c8 = uStack_3c8;
                  uStack_2bf = uStack_3bf;
                  FUN_1004dbae4();
                  if (iVar27 < 2) {
                    if (iVar27 == 0) {
                      puVar31 = &local_330;
                      FUN_100004520();
                      _Var29.unknown = (undefined *)*puVar31;
                      _Var51.unknown = (undefined *)puVar31[1];
                      lStack_468 = lStack_368;
                      local_470 = local_370;
                      lStack_458 = lStack_358;
                      lStack_460 = local_360;
                      uStack_448 = uStack_348;
                      local_450 = lStack_350;
                      uStack_43f = uStack_33f;
                      uStack_447 = local_347;
                      uStack_440 = uStack_340;
                      lStack_4a8 = lStack_3a8;
                      local_4b0 = local_3b0;
                      lStack_498 = lStack_398;
                      lStack_4a0 = lStack_3a0;
                      lStack_488 = lStack_388;
                      local_490 = local_390;
                      lStack_478 = lStack_378;
                      lStack_480 = lStack_380;
                      iVar27 = (int)&local_3b0;
                      FUN_1004dbae4();
                      if (iVar27 == 0) {
                        plVar32 = &local_4b0;
                        FUN_100004520();
                        if (((_Var29.unknown == (undefined *)*plVar32) &&
                            (_Var51.unknown == (undefined *)plVar32[1])) ||
                           (bVar26 = Swift::_stringCompareWithSmolCheck
                                               (_Var29,_Var51,
                                                (_StringComparisonResult)
                                                (__int8)(undefined *)*plVar32), bVar26))
                        goto LAB_100556064;
                      }
                    }
                    else {
                      puVar31 = &local_330;
                      FUN_100004520();
                      _Var29.unknown = (undefined *)*puVar31;
                      _Var58.unknown = (undefined *)puVar31[1];
                      _Var51.unknown = (undefined *)puVar31[2];
                      _Var55.unknown = (undefined *)puVar31[3];
                      lStack_468 = lStack_368;
                      local_470 = local_370;
                      lStack_458 = lStack_358;
                      lStack_460 = local_360;
                      uStack_448 = uStack_348;
                      local_450 = lStack_350;
                      uStack_43f = uStack_33f;
                      uStack_447 = local_347;
                      uStack_440 = uStack_340;
                      lStack_4a8 = lStack_3a8;
                      local_4b0 = local_3b0;
                      lStack_498 = lStack_398;
                      lStack_4a0 = lStack_3a0;
                      lStack_488 = lStack_388;
                      local_490 = local_390;
                      lStack_478 = lStack_378;
                      lStack_480 = lStack_380;
                      iVar27 = (int)&local_3b0;
                      FUN_1004dbae4();
                      if (iVar27 == 1) {
                        plVar32 = &local_4b0;
                        FUN_100004520();
                        goto LAB_1005564c8;
                      }
                    }
LAB_100556cfc:
                    FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,4);
                    goto LAB_100556d1c;
                  }
                  if (iVar27 != 2) {
                    if (iVar27 == 3) {
                      puVar31 = &local_330;
                      FUN_100004520();
                      lStack_468 = lStack_368;
                      local_470 = local_370;
                      lStack_458 = lStack_358;
                      lStack_460 = local_360;
                      uStack_448 = uStack_348;
                      local_450 = lStack_350;
                      uStack_43f = uStack_33f;
                      uStack_447 = local_347;
                      uStack_440 = uStack_340;
                      lStack_4a8 = lStack_3a8;
                      local_4b0 = local_3b0;
                      lStack_498 = lStack_398;
                      lStack_4a0 = lStack_3a0;
                      lStack_488 = lStack_388;
                      local_490 = local_390;
                      lStack_478 = lStack_378;
                      lStack_480 = lStack_380;
                      iVar27 = (int)&local_3b0;
                      FUN_1004dbae4();
                      if (iVar27 == 3) {
                        plVar32 = &local_4b0;
                        FUN_100004520();
                        uStack_138 = puVar31[5];
                        local_140 = puVar31[4];
                        uStack_128 = puVar31[7];
                        local_130 = puVar31[6];
                        local_120 = puVar31[8];
                        uStack_158 = puVar31[1];
                        local_160 = *puVar31;
                        uStack_148 = puVar31[3];
                        local_150 = puVar31[2];
                        lStack_e8 = plVar32[5];
                        local_f0 = plVar32[4];
                        lStack_d8 = plVar32[7];
                        lStack_e0 = plVar32[6];
                        local_d0 = plVar32[8];
                        lStack_108 = plVar32[1];
                        local_110 = *plVar32;
                        lStack_f8 = plVar32[3];
                        lStack_100 = plVar32[2];
                        FUN_100558ef8(&local_3b0,&local_530);
                        FUN_100558ef8(&local_430,&local_530);
                        puVar30 = &local_160;
                        FUN_10057fa24(puVar30,&local_110);
                        if (((ulong)puVar30 & 1) != 0) {
                          lVar52 = puVar31[9];
                          uVar8 = puVar31[10];
                          uVar37 = puVar31[0xb];
                          uVar9 = puVar31[0xc];
                          uVar54 = puVar31[0xd];
                          lVar35 = plVar32[9];
                          lVar42 = plVar32[0xd];
                          if (lVar52 == 1) {
                            if (lVar35 == 1) {
LAB_1005565c8:
                              plVar56 = (long *)puVar31[0xe];
                              lVar52 = plVar32[0xe];
                              if (plVar56 == (long *)0x0) {
                                FUN_1004dbca0(&local_3b0);
                                FUN_1004dbca0(&local_430);
                                if (lVar52 == 0) goto LAB_100556064;
                                goto LAB_100556cfc;
                              }
                              if (lVar52 == 0) goto LAB_100556bcc;
                              _swift_bridgeObjectRetain(lVar52);
                              plVar32 = plVar56;
                              _swift_bridgeObjectRetain();
                              FUN_100523efc();
                              _swift_bridgeObjectRelease(plVar56);
                              _swift_bridgeObjectRelease(lVar52);
                              FUN_1004dbca0(&local_3b0);
                              FUN_1004dbca0(&local_430);
joined_r0x000100556620:
                              if (((ulong)plVar32 & 1) != 0) goto LAB_100556064;
                              goto LAB_100556cfc;
                            }
LAB_100556b88:
                            local_530 = lVar52;
                            uStack_528 = uVar8;
                            local_520 = uVar37;
                            uStack_518 = uVar9;
                            local_510 = uVar54;
                            lStack_508 = lVar35;
                            local_500 = plVar32[10];
                            lStack_4f8 = plVar32[0xb];
                            local_4f0 = plVar32[0xc];
                            lStack_4e8 = lVar42;
                            FUN_1004dbc6c();
                            FUN_1004dbc6c(lVar52,uVar8,uVar37,uVar9,uVar54);
                            FUN_100558eb0(&local_530);
                          }
                          else {
                            if (lVar35 == 1) goto LAB_100556b88;
                            local_178 = (undefined1)plVar32[0xb];
                            local_1a0 = (undefined1)uVar37;
                            local_1b0 = lVar52;
                            local_1a8 = uVar8;
                            local_198 = uVar9;
                            local_190 = uVar54;
                            local_188 = lVar35;
                            local_180 = plVar32[10];
                            local_170 = plVar32[0xc];
                            local_168 = lVar42;
                            FUN_1004dbc6c();
                            FUN_1004dbc6c(lVar52,uVar8,uVar37,uVar9,uVar54);
                            plVar56 = &local_1b0;
                            FUN_10057f470(plVar56,&local_188);
                            _swift_bridgeObjectRelease(lVar35);
                            _swift_bridgeObjectRelease(lVar42);
                            FUN_100558f34(lVar52,uVar8,uVar37,uVar9,uVar54);
                            if (((ulong)plVar56 & 1) != 0) goto LAB_1005565c8;
                          }
                        }
LAB_100556bcc:
                        FUN_1004dbca0(&local_3b0);
                        FUN_1004dbca0(&local_430);
                      }
                    }
                    else {
                      puVar31 = &local_330;
                      FUN_100004520();
                      _Var29.unknown = (undefined *)*puVar31;
                      _Var10.unknown = (undefined *)puVar31[1];
                      _Var51.unknown = (undefined *)puVar31[2];
                      _Var11.unknown = (undefined *)puVar31[3];
                      _Var58.unknown = (undefined *)puVar31[4];
                      _Var12.unknown = (undefined *)puVar31[5];
                      _Var55.unknown = (undefined *)puVar31[6];
                      _Var13.unknown = (undefined *)puVar31[7];
                      _Var2.unknown = (undefined *)puVar31[8];
                      _Var14.unknown = (undefined *)puVar31[9];
                      lVar52 = puVar31[10];
                      uVar8 = puVar31[0xb];
                      uVar37 = puVar31[0xc];
                      uVar9 = puVar31[0xd];
                      uVar54 = puVar31[0xe];
                      lStack_488 = lStack_388;
                      local_490 = local_390;
                      lStack_478 = lStack_378;
                      lStack_480 = lStack_380;
                      lStack_468 = lStack_368;
                      local_470 = local_370;
                      lStack_458 = lStack_358;
                      lStack_460 = local_360;
                      uStack_448 = uStack_348;
                      local_450 = lStack_350;
                      uStack_43f = uStack_33f;
                      uStack_447 = local_347;
                      uStack_440 = uStack_340;
                      lStack_4a8 = lStack_3a8;
                      local_4b0 = local_3b0;
                      lStack_498 = lStack_398;
                      lStack_4a0 = lStack_3a0;
                      iVar27 = (int)&local_3b0;
                      FUN_1004dbae4();
                      if (iVar27 == 4) {
                        plVar32 = &local_4b0;
                        FUN_100004520();
                        puVar3 = (undefined *)plVar32[2];
                        puVar15 = (undefined *)plVar32[3];
                        puVar4 = (undefined *)plVar32[4];
                        puVar16 = (undefined *)plVar32[5];
                        puVar5 = (undefined *)plVar32[6];
                        puVar17 = (undefined *)plVar32[7];
                        puVar40 = (undefined *)plVar32[8];
                        puVar18 = (undefined *)plVar32[9];
                        lVar35 = plVar32[10];
                        lVar42 = plVar32[0xb];
                        lVar47 = plVar32[0xc];
                        lVar48 = plVar32[0xd];
                        lVar49 = plVar32[0xe];
                        if ((((_Var29.unknown == (undefined *)*plVar32) &&
                             (_Var10.unknown == (undefined *)plVar32[1])) ||
                            (bVar26 = Swift::_stringCompareWithSmolCheck
                                                (_Var29,_Var10,
                                                 (_StringComparisonResult)
                                                 (__int8)(undefined *)*plVar32), bVar26)) &&
                           (((_Var51.unknown == puVar3 && (_Var11.unknown == puVar15)) ||
                            (bVar26 = Swift::_stringCompareWithSmolCheck
                                                (_Var51,_Var11,
                                                 (_StringComparisonResult)(__int8)puVar3), bVar26)))
                           ) {
                          if (_Var12.unknown == (undefined *)0x0) {
                            if (puVar16 == (undefined *)0x0) goto LAB_100556644;
                          }
                          else if ((puVar16 != (undefined *)0x0) &&
                                  (((_Var58.unknown == puVar4 && (_Var12.unknown == puVar16)) ||
                                   (bVar26 = Swift::_stringCompareWithSmolCheck
                                                       (_Var58,_Var12,
                                                        (_StringComparisonResult)(__int8)puVar4),
                                   bVar26)))) {
LAB_100556644:
                            if (_Var13.unknown == (undefined *)0x0) {
                              if (puVar17 == (undefined *)0x0) goto LAB_100556698;
                            }
                            else if ((puVar17 != (undefined *)0x0) &&
                                    (((_Var55.unknown == puVar5 && (_Var13.unknown == puVar17)) ||
                                     (bVar26 = Swift::_stringCompareWithSmolCheck
                                                         (_Var55,_Var13,
                                                          (_StringComparisonResult)(__int8)puVar5),
                                     bVar26)))) {
LAB_100556698:
                              if (_Var14.unknown == (undefined *)0x0) {
                                puVar40 = puVar1;
                                if (puVar18 == (undefined *)0x0) goto LAB_100556708;
                              }
                              else if ((puVar18 != (undefined *)0x0) &&
                                      (((_Var2.unknown == puVar40 && (_Var14.unknown == puVar18)) ||
                                       (bVar26 = Swift::_stringCompareWithSmolCheck
                                                           (_Var2,_Var14,
                                                            (_StringComparisonResult)(__int8)puVar40
                                                           ), puVar40 = puVar1, bVar26)))) {
LAB_100556708:
                                if (lVar52 == 1) {
                                  if (lVar35 == 1) goto LAB_100556064;
                                }
                                else {
                                  if (lVar35 != 1) {
                                    local_88 = (undefined1)lVar47;
                                    local_b0 = (undefined1)uVar37;
                                    local_c0 = lVar52;
                                    uStack_b8 = uVar8;
                                    local_a8 = uVar9;
                                    uStack_a0 = uVar54;
                                    local_98 = lVar35;
                                    lStack_90 = lVar42;
                                    local_80 = lVar48;
                                    lStack_78 = lVar49;
                                    FUN_100558ef8(&local_3b0,&local_530,puVar40,puVar7);
                                    FUN_100558ef8(&local_430,&local_530);
                                    FUN_1004dbc6c(lVar35,lVar42,lVar47,lVar48,lVar49);
                                    FUN_1004dbc6c(lVar52,uVar8,uVar37,uVar9,uVar54);
                                    plVar32 = &local_c0;
                                    FUN_10057f470(plVar32,&local_98);
                                    _swift_bridgeObjectRelease(lVar35);
                                    _swift_bridgeObjectRelease(lVar49);
                                    FUN_100558f34(lVar52,uVar8,uVar37,uVar9,uVar54);
                                    FUN_1004dbca0(&local_3b0);
                                    FUN_1004dbca0(&local_430);
                                    goto joined_r0x000100556620;
                                  }
                                  lVar35 = 1;
                                }
                                local_530 = lVar52;
                                uStack_528 = uVar8;
                                local_520 = uVar37;
                                uStack_518 = uVar9;
                                local_510 = uVar54;
                                lStack_508 = lVar35;
                                local_500 = lVar42;
                                lStack_4f8 = lVar47;
                                local_4f0 = lVar48;
                                lStack_4e8 = lVar49;
                                FUN_1004dbc6c();
                                FUN_1004dbc6c(lVar52,uVar8,uVar37,uVar9,uVar54);
                                FUN_100558eb0(&local_530);
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_100556cfc;
                  }
                  puVar31 = &local_330;
                  FUN_100004520();
                  _Var29.unknown = (undefined *)*puVar31;
                  _Var58.unknown = (undefined *)puVar31[1];
                  _Var51.unknown = (undefined *)puVar31[2];
                  _Var55.unknown = (undefined *)puVar31[3];
                  lStack_468 = lStack_368;
                  local_470 = local_370;
                  lStack_458 = lStack_358;
                  lStack_460 = local_360;
                  uStack_448 = uStack_348;
                  local_450 = lStack_350;
                  uStack_43f = uStack_33f;
                  uStack_447 = local_347;
                  uStack_440 = uStack_340;
                  lStack_4a8 = lStack_3a8;
                  local_4b0 = local_3b0;
                  lStack_498 = lStack_398;
                  lStack_4a0 = lStack_3a0;
                  lStack_488 = lStack_388;
                  local_490 = local_390;
                  lStack_478 = lStack_378;
                  lStack_480 = lStack_380;
                  iVar27 = (int)&local_3b0;
                  FUN_1004dbae4();
                  if (iVar27 != 2) goto LAB_100556cfc;
                  plVar32 = &local_4b0;
                  FUN_100004520();
LAB_1005564c8:
                  puVar3 = (undefined *)plVar32[2];
                  puVar4 = (undefined *)plVar32[3];
                  if ((((_Var29.unknown != (undefined *)*plVar32) ||
                       (_Var58.unknown != (undefined *)plVar32[1])) &&
                      (bVar26 = Swift::_stringCompareWithSmolCheck
                                          (_Var29,_Var58,
                                           (_StringComparisonResult)(__int8)(undefined *)*plVar32),
                      !bVar26)) ||
                     (((_Var51.unknown != puVar3 || (_Var55.unknown != puVar4)) &&
                      (bVar26 = Swift::_stringCompareWithSmolCheck
                                          (_Var51,_Var55,(_StringComparisonResult)(__int8)puVar3),
                      !bVar26)))) goto LAB_100556cfc;
LAB_100556064:
                  uVar61 = uVar61 + 1;
                  puVar50 = puVar50 + 0x10;
                  plVar63 = plVar63 + 0x10;
                } while (uVar59 != uVar61);
              }
              if (_Var38.unknown != (undefined *)0x0) {
                if (puVar7 != (undefined *)0x0) {
                  _swift_bridgeObjectRetain(puVar7);
                  _Var29.unknown = _Var38.unknown;
                  _swift_bridgeObjectRetain();
                  FUN_100523efc();
                  _swift_bridgeObjectRelease(_Var38.unknown);
                  _swift_bridgeObjectRelease(puVar7);
                  if (((ulong)_Var29.unknown & 1) != 0) goto LAB_100556824;
                  goto LAB_100556b5c;
                }
                _swift_bridgeObjectRetain(_Var38.unknown);
                FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,
                              uVar44,4);
                FUN_1004dbbd4(puVar41,puVar6,puVar1,0,uVar45,uVar46,4);
                _swift_bridgeObjectRelease(_Var38.unknown);
                goto LAB_100556d24;
              }
              if (puVar7 == (undefined *)0x0) {
LAB_100556824:
                if ((uVar43 & 0xff) == 2) {
                  if ((uVar45 & 0xff) == 2) {
LAB_100556870:
                    if (uVar44 == 0) {
                      _swift_bridgeObjectRetain(uVar46,puVar6,puVar1,puVar7);
                      FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,
                                    uVar43,0,4);
                      if (uVar46 == 0) goto LAB_100556928;
                      _swift_bridgeObjectRelease(uVar46);
                      _Var36.unknown = puVar41;
                      _Var39.unknown = puVar6;
                      _Var28.unknown = puVar1;
                      _Var38.unknown = puVar7;
                      uVar43 = uVar45;
                      uVar44 = uVar46;
                      goto LAB_100556d1c;
                    }
                    if (uVar46 != 0) {
                      _swift_bridgeObjectRetain(uVar46,puVar6,puVar1,puVar7);
                      _swift_bridgeObjectRetain();
                      FUN_100523efc();
                      FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,4);
                      FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,
                                    uVar43,uVar44,4);
                      _swift_bridgeObjectRelease(uVar44);
                      _swift_bridgeObjectRelease(uVar46);
                      goto joined_r0x0001005568f0;
                    }
                    _swift_bridgeObjectRetain(uVar44,puVar6,puVar1,puVar7);
                    FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43
                                  ,uVar44,4);
                    FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,0,4);
                    _swift_bridgeObjectRelease(uVar44);
                    goto LAB_100556d24;
                  }
                }
                else if (((uVar45 & 0xff) != 2) && ((((uint)uVar43 ^ (uint)uVar45) & 1) == 0))
                goto LAB_100556870;
LAB_100556b5c:
                FUN_1004dbbd4(puVar41,puVar6,puVar1,puVar7,uVar45,uVar46,4);
              }
              else {
                FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,0,uVar43,uVar44,4);
                _Var36.unknown = puVar41;
                _Var39.unknown = puVar6;
                _Var28.unknown = puVar1;
                _Var38.unknown = puVar7;
                uVar43 = uVar45;
                uVar44 = uVar46;
              }
LAB_100556d1c:
              uVar37 = 4;
            }
            FUN_1004dbbd4(_Var36.unknown,_Var39.unknown,_Var28.unknown,_Var38.unknown,uVar43,uVar44,
                          uVar37);
            goto LAB_100556d24;
          }
          if (bVar19 == 0) {
            if (cVar20 != '\0') goto LAB_100556d24;
            _Var28.unknown = _Var36.unknown;
            _Var38.unknown = _Var39.unknown;
            expecting.value = expecting_00.value;
            if (_Var36.unknown != puVar41 || _Var39.unknown != puVar6) {
LAB_100555ba4:
              bVar26 = Swift::_stringCompareWithSmolCheck(_Var28,_Var38,expecting);
              if (!bVar26) goto LAB_100556d24;
            }
          }
          else {
            if ((cVar20 != '\x01') ||
               ((_Var36.unknown != puVar41 || _Var39.unknown != puVar6 &&
                (bVar26 = Swift::_stringCompareWithSmolCheck(_Var36,_Var39,expecting_00), !bVar26)))
               ) goto LAB_100556d24;
            if (_Var28.unknown != puVar1 || _Var38.unknown != puVar7) goto LAB_100555ba4;
          }
LAB_100555bb4:
          uVar60 = uVar60 + 1;
          if (uVar60 == uVar53) goto LAB_1005569f8;
          goto LAB_100555bc4;
        }
LAB_1005569f8:
        lVar52 = local_220;
        uVar53 = local_270;
        if (local_270 == 0) {
          FUN_100558e7c(&local_260);
          FUN_100558e7c(&local_2b0);
          if (lVar52 != 0) goto LAB_100556d34;
        }
        else {
          if (local_220 == 0) goto LAB_100556d24;
          _swift_bridgeObjectRetain(local_220);
          uVar60 = uVar53;
          _swift_bridgeObjectRetain();
          FUN_100523efc();
          _swift_bridgeObjectRelease(uVar53);
          _swift_bridgeObjectRelease(lVar52);
          FUN_100558e7c(&local_260);
          FUN_100558e7c(&local_2b0);
          if ((uVar60 & 1) == 0) goto LAB_100556d34;
        }
        lVar57 = lVar57 + 1;
      } while (lVar57 != lVar62);
    }
    uVar37 = 1;
  }
  else {
LAB_100556d34:
    uVar37 = 0;
  }
  return uVar37;
}



/* Address: 0x100556d68 | FUN_100556d68 */

bool FUN_100556d68(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar3 = (char *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *pcVar2 == *pcVar3;
      if (*pcVar2 != *pcVar3) {
        return bVar1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Address: 0x100556dc4 | FUN_100556dc4 */

undefined8 FUN_100556dc4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_138 [72];
  undefined *local_f0;
  undefined *puStack_e8;
  _StringGuts local_e0;
  _StringGuts local_d8;
  _StringGuts local_d0;
  _StringGuts _Stack_c8;
  _StringGuts local_c0;
  _StringGuts local_b8;
  ulong local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar5 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x20);
  puVar7 = (undefined8 *)(param_2 + 0x20);
  do {
    lVar5 = lVar5 + -1;
    _Stack_c8.unknown = (undefined *)puVar6[5];
    local_d0.unknown = (undefined *)puVar6[4];
    local_b8.unknown = (undefined *)puVar6[7];
    local_c0.unknown = (undefined *)puVar6[6];
    local_b0 = puVar6[8];
    puStack_e8 = (undefined *)puVar6[1];
    local_f0 = (undefined *)*puVar6;
    local_d8.unknown = (undefined *)puVar6[3];
    local_e0.unknown = (undefined *)puVar6[2];
    puStack_78 = (undefined *)puVar7[5];
    local_80 = (undefined *)puVar7[4];
    local_68 = (undefined *)puVar7[7];
    local_70 = (undefined *)puVar7[6];
    local_60 = puVar7[8];
    puStack_98 = (undefined *)puVar7[1];
    local_a0 = (undefined *)*puVar7;
    local_88 = (undefined *)puVar7[3];
    local_90 = (undefined *)puVar7[2];
    if (((local_f0 != local_a0) || (puStack_e8 != puStack_98)) &&
       (bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)local_f0,(_StringGuts)puStack_e8,
                           (_StringComparisonResult)(__int8)local_a0), !bVar3)) {
      return 0;
    }
    if (local_d8.unknown == (undefined *)0x0) {
      if (local_88 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (local_88 == (undefined *)0x0) {
        return 0;
      }
      if (((local_e0.unknown != local_90) || (local_d8.unknown != local_88)) &&
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_e0,local_d8,(_StringComparisonResult)(__int8)local_90), !bVar3))
      {
        return 0;
      }
    }
    if (_Stack_c8.unknown == (undefined *)0x0) {
      if (puStack_78 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (puStack_78 == (undefined *)0x0) {
        return 0;
      }
      if (((local_d0.unknown != local_80) || (_Stack_c8.unknown != puStack_78)) &&
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_d0,_Stack_c8,(_StringComparisonResult)(__int8)local_80), !bVar3))
      {
        return 0;
      }
    }
    if (local_b8.unknown == (undefined *)0x0) {
      if (local_68 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (local_68 == (undefined *)0x0) {
        return 0;
      }
      if (((local_c0.unknown != local_70) || (local_b8.unknown != local_68)) &&
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_c0,local_b8,(_StringComparisonResult)(__int8)local_70), !bVar3))
      {
        return 0;
      }
    }
    lVar2 = local_60;
    uVar1 = local_b0;
    if (local_b0 == 0) {
      if (local_60 != 0) {
        return 0;
      }
    }
    else {
      if (local_60 == 0) {
        return 0;
      }
      FUN_100558dd0(&local_f0,auStack_138);
      FUN_100558dd0(&local_a0,auStack_138);
      _swift_bridgeObjectRetain(lVar2);
      uVar4 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(lVar2);
      FUN_100558e0c(&local_a0);
      FUN_100558e0c(&local_f0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    if (lVar5 == 0) {
      return 1;
    }
    puVar6 = puVar6 + 9;
    puVar7 = puVar7 + 9;
  } while( true );
}



/* Address: 0x100556fd0 | FUN_100556fd0 */

void FUN_100556fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



/* Address: 0x100556fe0 | FUN_100556fe0 */

void FUN_100556fe0(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x697275;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = (undefined1 *)0xe300000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055706c | FUN_10055706c */

void FUN_10055706c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x656d616e;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x697275;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x1005570d4 | FUN_1005570d4 */

void FUN_1005570d4(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x697275;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = (undefined1 *)0xe300000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055715c | FUN_10055715c */

void FUN_10055715c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100558158(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100557188 | FUN_100557188 */

void FUN_100557188(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x697275;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x1005571d4 | FUN_1005571d4 */

undefined1  [16] FUN_1005571d4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x697275;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10055721c | FUN_10055721c */

void FUN_10055721c(undefined1 *param_1,undefined1 param_2)

{
  FUN_100558158();
  *param_1 = param_2;
  return;
}



/* Address: 0x100557240 | FUN_100557240 */

String FUN_100557240(void)

{
  String SVar1;
  
  FUN_10055839c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100557268 | FUN_100557268 */

String FUN_100557268(void)

{
  String SVar1;
  
  FUN_10055839c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100557290 | FUN_100557290 */

void FUN_100557290(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1005581bc(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    param_1[4] = local_28;
  }
  return;
}



/* Address: 0x1005572d4 | FUN_1005572d4 */

/* WARNING: Removing unreachable block (ram,0x0001005573d4) */

void FUN_1005572d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcf790;
  FUN_1000f7830(&DAT_100fcf790,&DAT_100c58150);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10055839c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[2];
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar2,unaff_x20[3],&local_52,puVar1);
    local_60 = unaff_x20[4];
    local_61 = 2;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_60,&local_61,puVar1,&DAT_100edcda0,uVar2)
    ;
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x100557458 | thunk_FUN_100558084 */

void thunk_FUN_100558084(void)

{
  FUN_100558084();
  return;
}



/* Address: 0x10055745c | FUN_10055745c */

void FUN_10055745c(Hasher param_1)

{
  Hasher HVar1;
  char *pcVar2;
  String *unaff_x20;
  void *pvVar3;
  Hasher HVar4;
  String SVar5;
  
  HVar1.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar3 = unaff_x20[1].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    pcVar2 = unaff_x20[2].str;
    HVar4.unknown = HVar1.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar1);
    SVar5.bridgeObject = pvVar3;
    SVar5.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar5);
    pcVar2 = unaff_x20[2].str;
  }
  if (pcVar2 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pcVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x1005574f0 | FUN_1005574f0 */

void FUN_1005574f0(void)

{
  Hasher HVar1;
  char *pcVar2;
  String *unaff_x20;
  void *pvVar3;
  Hasher HVar4;
  String SVar5;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = unaff_x20->str;
  Swift::String::hash((Hasher)auStack_78,*unaff_x20);
  pvVar3 = unaff_x20[1].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    pcVar2 = unaff_x20[2].str;
    HVar4.unknown = HVar1.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar1);
    SVar5.bridgeObject = pvVar3;
    SVar5.str = HVar4.unknown;
    Swift::String::hash((Hasher)auStack_78,SVar5);
    pcVar2 = unaff_x20[2].str;
  }
  if (pcVar2 == (char *)0x0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    HVar1.unknown = auStack_78;
    FUN_1004df778(HVar1.unknown,pcVar2);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005575a8 | thunk_FUN_1005574f0 */

void thunk_FUN_1005574f0(void)

{
  FUN_1005574f0();
  return;
}



/* Address: 0x1005575ac | FUN_1005575ac */

void FUN_1005575ac(Hasher param_1)

{
  void *pvVar1;
  String SVar2;
  Hasher HVar3;
  Hasher HVar4;
  char *pcVar5;
  String *unaff_x20;
  
  HVar3.unknown = unaff_x20->str;
  HVar4.unknown = unaff_x20[1].str;
  pvVar1 = unaff_x20[1].bridgeObject;
  SVar2 = unaff_x20[1];
  pcVar5 = unaff_x20[2].str;
  Swift::String::hash(param_1,*unaff_x20);
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    HVar4.unknown = HVar3.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    Swift::String::hash(param_1,SVar2);
  }
  if (pcVar5 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pcVar5);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x100557650 | FUN_100557650 */

void FUN_100557650(__int64 param_1)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  char *pcVar6;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  HVar5.unknown = unaff_x20[1].str;
  pvVar1 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[1];
  pcVar6 = unaff_x20[2].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    Swift::String::hash((Hasher)auStack_88,SVar3);
  }
  if (pcVar6 == (char *)0x0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_88;
    FUN_1004df778(HVar4.unknown,pcVar6);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100557704 | FUN_100557704 */

void FUN_100557704(void)

{
  FUN_1005572d4();
  return;
}



/* Address: 0x100557718 | FUN_100557718 */

uint FUN_100557718(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_100558084(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x100557760 | FUN_100557760 */

char * FUN_100557760(void)

{
  return "roots/list";
}



/* Address: 0x10055776c | FUN_10055776c */

undefined1  [16] FUN_10055776c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007473;
  auVar1._0_8_ = 0x696c2f73746f6f72;
  return auVar1;
}



/* Address: 0x100557788 | FUN_100557788 */

void FUN_100557788(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6174656d5f;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x73746f6f72;
  }
  SVar4.bridgeObject = &DAT_e500000000000000;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  HVar3.unknown = &DAT_e500000000000000;
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1005577f4 | FUN_1005577f4 */

void FUN_1005577f4(Hasher param_1)

{
  char *pcVar1;
  char *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x73746f6f72;
  }
  SVar2.bridgeObject = &DAT_e500000000000000;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(&DAT_e500000000000000);
  return;
}



/* Address: 0x100557834 | FUN_100557834 */

void FUN_100557834(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6174656d5f;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x73746f6f72;
  }
  SVar4.bridgeObject = &DAT_e500000000000000;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  HVar3.unknown = &DAT_e500000000000000;
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10055789c | FUN_10055789c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005578dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10055789c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100557914 | FUN_100557914 */

void FUN_100557914(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73746f6f72;
  }
  *param_1 = uVar1;
  param_1[1] = &DAT_e500000000000000;
  return;
}



/* Address: 0x100557944 | FUN_100557944 */

undefined1  [16] FUN_100557944(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73746f6f72;
  }
  auVar2._8_8_ = &DAT_e500000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100557970 | FUN_100557970 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005579b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100557970(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  __int64 _Var2;
  undefined1 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005579ec | FUN_1005579ec */

void FUN_1005579ec(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcfa00;
  FUN_1000f7830(&DAT_100fcfa00,&DAT_100c58780);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x100557a2c | FUN_100557a2c */

String FUN_100557a2c(void)

{
  String SVar1;
  
  FUN_1005583dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100557a54 | FUN_100557a54 */

String FUN_100557a54(void)

{
  String SVar1;
  
  FUN_1005583dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100557a7c | FUN_100557a7c */

void FUN_100557a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fcf7a0;
  FUN_1000f7830(&DAT_100fcf7a0,&DAT_100c58158);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005583dc();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fcf7b0;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fcf7b0,&DAT_100c58160);
  puVar3 = &DAT_100fcf7b8;
  FUN_100558f64(&DAT_100fcf7b8,FUN_10055841c,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  puVar4 = &local_58;
  Swift::KeyedEncodingContainer::_encode(puVar4,&local_61,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_61 = 1;
    local_58 = param_3;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_58,&local_61,puVar1,&DAT_100edcda0,puVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100557bf4 | FUN_100557bf4 */

void FUN_100557bf4(void)

{
  FUN_10055845c();
  return;
}



/* Address: 0x100557c08 | FUN_100557c08 */

undefined8 FUN_100557c08(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  FUN_100554454(param_1,param_3);
  if ((param_1 & 1) != 0) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      _swift_bridgeObjectRetain(param_4);
      uVar1 = param_2;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_4);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x100557c84 | FUN_100557c84 */

void FUN_100557c84(undefined8 param_1,Hasher param_2,long param_3)

{
  FUN_1004d7720();
  if (param_3 != 0) {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1,param_3);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x100557cd0 | FUN_100557cd0 */

void FUN_100557cd0(Hasher param_1,long param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  FUN_1004d7720(auStack_68);
  if (param_2 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_1);
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    HVar1.unknown = auStack_68;
    FUN_1004df778(HVar1.unknown,param_2);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100557d40 | FUN_100557d40 */

void FUN_100557d40(void)

{
  long lVar1;
  Hasher HVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  Swift::Hasher::init(0);
  FUN_1004d7720(auStack_78);
  if (lVar1 == 0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df778(HVar2.unknown,lVar1);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100557db4 | FUN_100557db4 */

void FUN_100557db4(undefined8 param_1)

{
  long lVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  FUN_1004d7720();
  if (lVar1 != 0) {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df778(param_1,lVar1);
    return;
  }
  Swift::Hasher::_combine(0,HVar2);
  return;
}



/* Address: 0x100557e14 | FUN_100557e14 */

void FUN_100557e14(__int64 param_1)

{
  long lVar1;
  Hasher HVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  FUN_1004d7720(auStack_78);
  if (lVar1 == 0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df778(HVar2.unknown,lVar1);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100557e84 | FUN_100557e84 */

void FUN_100557e84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10055845c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x100557eac | FUN_100557eac */

void FUN_100557eac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100557a7c(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100557ec4 | FUN_100557ec4 */

undefined8 FUN_100557ec4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  lVar2 = param_2[1];
  FUN_100554454(uVar3,*param_2);
  if ((uVar3 & 1) != 0) {
    if (uVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      _swift_bridgeObjectRetain(lVar2);
      uVar3 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(lVar2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x100557f44 | FUN_100557f44 */

undefined * FUN_100557f44(void)

{
  return &DAT_100edee80;
}



/* Address: 0x100557f50 | FUN_100557f50 */

undefined1  [16] FUN_100557f50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad470;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Address: 0x100557f6c | FUN_100557f6c */

String FUN_100557f6c(void)

{
  String SVar1;
  
  FUN_10055861c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}


