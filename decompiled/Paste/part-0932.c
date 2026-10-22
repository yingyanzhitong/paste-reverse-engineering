/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a09950 | FUN_100a09950 */

void FUN_100a09950(undefined8 *param_1,byte *param_2,code *param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  code *pcVar12;
  CancellationError CVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  byte *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar16;
  CancellationError CVar17;
  undefined *puVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong unaff_x25;
  ulong uVar21;
  undefined *unaff_x26;
  undefined *puVar22;
  undefined *unaff_x27;
  undefined *puVar23;
  ulong unaff_x28;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_3c0 [17];
  char local_338;
  char cStack_337;
  undefined6 uStack_336;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 local_320;
  undefined1 local_318;
  undefined7 uStack_317;
  undefined *puStack_310;
  ulong uStack_308;
  undefined *local_300;
  code *local_2f8;
  undefined *puStack_2f0;
  byte *pbStack_2e8;
  ulong local_2e0;
  undefined *local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  byte local_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined *puStack_288;
  ulong uStack_280;
  undefined *puStack_278;
  code *local_270;
  undefined *puStack_268;
  byte *pbStack_260;
  ulong uStack_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  byte local_230;
  long local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  long local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  byte local_110;
  long local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte local_80;
  
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  local_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
  local_130 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
  local_170 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
  local_150 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 8);
  local_100 = *(long *)unaff_x20;
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_188 = *(undefined8 *)(unaff_x20 + 8);
  local_190 = *(long *)unaff_x20;
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x70);
  local_80 = unaff_x20[0x80];
  local_110 = unaff_x20[0x80];
  iVar8 = (int)&local_190;
  FUN_1005e4694();
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      plVar9 = &local_190;
      FUN_100004520();
      cVar2 = (char)*plVar9;
      puVar18 = (undefined *)plVar9[1];
      uVar24 = plVar9[2];
      unaff_x26 = (undefined *)plVar9[3];
      pcVar7 = (code *)plVar9[4];
      unaff_x27 = (undefined *)plVar9[5];
      pbVar20 = (byte *)plVar9[6];
      uVar21 = plVar9[7];
      puVar16 = (undefined *)plVar9[8];
      puStack_330 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puStack_328 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_320 = 0;
      local_318 = 1;
      local_338 = cVar2;
      cStack_337 = cVar2;
      puStack_310 = puVar18;
      uStack_308 = uVar24;
      local_300 = unaff_x26;
      local_2f8 = pcVar7;
      puStack_2f0 = unaff_x27;
      pbStack_2e8 = pbVar20;
      local_2e0 = uVar21;
      local_2d8 = puVar16;
      FUN_100a0c4a0(&local_338);
      uStack_248 = uStack_2d0;
      local_250 = local_2d8;
      uStack_238 = uStack_2c0;
      uStack_240 = uStack_2c8;
      local_230 = local_2b8;
      local_290 = CONCAT71(uStack_317,local_318);
      puStack_288 = puStack_310;
      puStack_278 = local_300;
      uStack_280 = uStack_308;
      puStack_268 = puStack_2f0;
      local_270 = local_2f8;
      uStack_258 = local_2e0;
      pbStack_260 = pbStack_2e8;
      local_2b0 = (undefined *)CONCAT62(uStack_336,CONCAT11(cStack_337,local_338));
      puStack_2a8 = puStack_330;
      uStack_298 = local_320;
      puStack_2a0 = puStack_328;
      uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x68);
      local_1c0 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x70);
      local_1a0 = unaff_x20[0x80];
      uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x28);
      local_200 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x48);
      local_1e0 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x58);
      uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_218 = *(undefined8 *)(unaff_x20 + 8);
      local_220 = *(long *)unaff_x20;
      uStack_208 = *(undefined8 *)(unaff_x20 + 0x18);
      uStack_210 = *(undefined8 *)(unaff_x20 + 0x10);
      FUN_1000f8cac(&local_100,local_3c0,&DAT_100ff46d0,&DAT_100c8dd08);
      _swift_unknownObjectRetain(puVar18);
      _swift_retain(pcVar7);
      _swift_retain(pbVar20);
      _swift_retain(puVar16);
      FUN_1000fb4c4(&local_220,&DAT_100ff46d8,&DAT_100c8dd10);
      *(undefined8 *)(unaff_x20 + 0x68) = uStack_248;
      *(undefined **)(unaff_x20 + 0x60) = local_250;
      *(undefined8 *)(unaff_x20 + 0x78) = uStack_238;
      *(undefined8 *)(unaff_x20 + 0x70) = uStack_240;
      unaff_x20[0x80] = local_230;
      *(undefined **)(unaff_x20 + 0x28) = puStack_288;
      *(undefined8 *)(unaff_x20 + 0x20) = local_290;
      *(undefined **)(unaff_x20 + 0x38) = puStack_278;
      *(ulong *)(unaff_x20 + 0x30) = uStack_280;
      *(undefined **)(unaff_x20 + 0x48) = puStack_268;
      *(code **)(unaff_x20 + 0x40) = local_270;
      *(ulong *)(unaff_x20 + 0x58) = uStack_258;
      *(byte **)(unaff_x20 + 0x50) = pbStack_260;
      *(undefined **)(unaff_x20 + 8) = puStack_2a8;
      *(undefined **)unaff_x20 = local_2b0;
      *(undefined8 *)(unaff_x20 + 0x18) = uStack_298;
      *(undefined **)(unaff_x20 + 0x10) = puStack_2a0;
      if (cVar2 == '\x01') {
        uVar14 = 0;
        goto LAB_100a0a1ec;
      }
      _swift_release(puVar16);
      _swift_release(pbVar20);
      _swift_release(pcVar7);
      _swift_unknownObjectRelease(puVar18);
    }
    else {
      pbVar10 = (byte *)&local_190;
      FUN_100004520();
      bVar3 = *pbVar10;
      unaff_x28 = (ulong)bVar3;
      bVar4 = pbVar10[1];
      unaff_x25 = *(ulong *)(pbVar10 + 8);
      uVar1 = *(undefined8 *)(pbVar10 + 0x10);
      uVar15 = *(undefined8 *)(pbVar10 + 0x18);
      bVar5 = pbVar10[0x20];
      puVar18 = *(undefined **)(pbVar10 + 0x28);
      uVar24 = *(ulong *)(pbVar10 + 0x30);
      unaff_x26 = *(undefined **)(pbVar10 + 0x38);
      unaff_x27 = *(undefined **)(pbVar10 + 0x48);
      uVar27 = *(undefined8 *)(pbVar10 + 0x48);
      pcVar7 = *(code **)(pbVar10 + 0x40);
      uVar25 = *(undefined8 *)(pbVar10 + 0x58);
      pbVar20 = *(byte **)(pbVar10 + 0x50);
      puVar16 = *(undefined **)(pbVar10 + 0x60);
      uVar26 = *(undefined8 *)(pbVar10 + 0x60);
      uVar21 = *(ulong *)(pbVar10 + 0x58);
      puStack_2a8 = *(undefined **)(unaff_x20 + 8);
      local_2b0 = *(undefined **)unaff_x20;
      uStack_298 = *(undefined8 *)(unaff_x20 + 0x18);
      puStack_2a0 = *(undefined **)(unaff_x20 + 0x10);
      local_230 = unaff_x20[0x80];
      uStack_248 = *(undefined8 *)(unaff_x20 + 0x68);
      local_250 = *(undefined **)(unaff_x20 + 0x60);
      uStack_238 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_240 = *(undefined8 *)(unaff_x20 + 0x70);
      puStack_288 = *(undefined **)(unaff_x20 + 0x28);
      local_290 = *(undefined8 *)(unaff_x20 + 0x20);
      puStack_278 = *(undefined **)(unaff_x20 + 0x38);
      uStack_280 = *(ulong *)(unaff_x20 + 0x30);
      puStack_268 = *(undefined **)(unaff_x20 + 0x48);
      local_270 = *(code **)(unaff_x20 + 0x40);
      uStack_258 = *(ulong *)(unaff_x20 + 0x58);
      pbStack_260 = *(byte **)(unaff_x20 + 0x50);
      puVar23 = &DAT_100c8dd08;
      local_3c0[0] = unaff_x25;
      FUN_1000f8cac(&local_100,&local_338,&DAT_100ff46d0,&DAT_100c8dd08);
      _swift_bridgeObjectRetain(unaff_x25);
      FUN_1000fb4c4(&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_100a0c480(&local_220);
      *(undefined8 *)(unaff_x20 + 0x28) = uStack_1f8;
      *(undefined8 *)(unaff_x20 + 0x20) = local_200;
      *(undefined8 *)(unaff_x20 + 0x38) = uStack_1e8;
      *(undefined8 *)(unaff_x20 + 0x30) = uStack_1f0;
      unaff_x20[0x80] = local_1a0;
      *(undefined8 *)(unaff_x20 + 0x68) = uStack_1b8;
      *(undefined8 *)(unaff_x20 + 0x60) = local_1c0;
      *(undefined8 *)(unaff_x20 + 0x78) = uStack_1a8;
      *(undefined8 *)(unaff_x20 + 0x70) = uStack_1b0;
      *(undefined8 *)(unaff_x20 + 0x48) = uStack_1d8;
      *(undefined8 *)(unaff_x20 + 0x40) = local_1e0;
      *(undefined8 *)(unaff_x20 + 0x58) = uStack_1c8;
      *(undefined8 *)(unaff_x20 + 0x50) = uStack_1d0;
      *(undefined8 *)(unaff_x20 + 8) = uStack_218;
      *(long *)unaff_x20 = local_220;
      *(undefined8 *)(unaff_x20 + 0x18) = uStack_208;
      *(undefined8 *)(unaff_x20 + 0x10) = uStack_210;
      if (*(undefined **)(unaff_x25 + 0x10) != (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
        do {
          if (*(byte **)(unaff_x25 + (long)puVar22 * 8 + 0x20) == param_2) {
            _swift_bridgeObjectRelease(unaff_x25);
            (*param_3)(puVar22);
            FUN_1000fb4c4();
            *unaff_x20 = bVar3;
            unaff_x20[1] = bVar4;
            *(ulong *)(unaff_x20 + 8) = local_3c0[0];
            *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
            *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
            unaff_x20[0x20] = bVar5;
            *(undefined **)(unaff_x20 + 0x28) = puVar18;
            *(ulong *)(unaff_x20 + 0x30) = uVar24;
            *(undefined **)(unaff_x20 + 0x38) = unaff_x26;
            *(code **)(unaff_x20 + 0x40) = pcVar7;
            *(undefined **)(unaff_x20 + 0x48) = unaff_x27;
            *(ulong *)(unaff_x20 + 0x58) = uVar21;
            *(byte **)(unaff_x20 + 0x50) = pbVar20;
            *(undefined **)(unaff_x20 + 0x60) = puVar16;
            FUN_100a0c4a0();
            unaff_x21 = puVar16;
            goto LAB_100a0a1b8;
          }
          puVar22 = puVar22 + 1;
        } while (*(undefined **)(unaff_x25 + 0x10) != puVar22);
      }
      _swift_bridgeObjectRelease(unaff_x25);
      FUN_1000fb4c4();
      *unaff_x20 = bVar3;
      if ((bVar3 != 0) && ((bVar4 & 1) == 0)) {
        unaff_x20[1] = 1;
        *(ulong *)(unaff_x20 + 8) = unaff_x25;
        *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
        *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
        unaff_x20[0x20] = bVar5;
        *(undefined **)(unaff_x20 + 0x28) = puVar18;
        *(ulong *)(unaff_x20 + 0x30) = uVar24;
        *(undefined **)(unaff_x20 + 0x38) = unaff_x26;
        *(code **)(unaff_x20 + 0x40) = pcVar7;
        *(undefined **)(unaff_x20 + 0x48) = unaff_x27;
        *(byte **)(unaff_x20 + 0x50) = pbVar20;
        *(undefined8 *)(unaff_x20 + 0x60) = uVar26;
        *(ulong *)(unaff_x20 + 0x58) = uVar21;
        FUN_100a0c4a0();
        _swift_unknownObjectRetain(puVar18);
        _swift_retain(pcVar7);
        _swift_retain(pbVar20);
LAB_100a09f38:
        _swift_retain(puVar16);
        uVar14 = 0;
        goto LAB_100a0a1ec;
      }
      unaff_x20[1] = bVar4;
      *(ulong *)(unaff_x20 + 8) = unaff_x25;
      *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
      unaff_x20[0x20] = bVar5;
      *(undefined **)(unaff_x20 + 0x28) = puVar18;
      *(ulong *)(unaff_x20 + 0x30) = uVar24;
      *(undefined **)(unaff_x20 + 0x38) = unaff_x26;
      *(undefined8 *)(unaff_x20 + 0x48) = uVar27;
      *(code **)(unaff_x20 + 0x40) = pcVar7;
      *(undefined8 *)(unaff_x20 + 0x58) = uVar25;
      *(byte **)(unaff_x20 + 0x50) = pbVar20;
      *(undefined **)(unaff_x20 + 0x60) = puVar16;
      FUN_100a0c4a0();
    }
LAB_100a0a114:
    puVar18 = (undefined *)0x0;
    uVar24 = 0;
    unaff_x26 = (undefined *)0x0;
    pcVar7 = (code *)0x0;
    unaff_x27 = (undefined *)0x0;
    pbVar20 = (byte *)0x0;
    uVar21 = 0;
    puVar16 = (undefined *)0x0;
    uVar14 = 2;
  }
  else {
    if (iVar8 == 2) {
      pbVar10 = (byte *)&local_190;
      FUN_100004520();
      bVar3 = *pbVar10;
      bVar4 = pbVar10[1];
      pcVar12 = *(code **)(pbVar10 + 8);
      uVar1 = *(undefined8 *)(pbVar10 + 0x10);
      bVar5 = pbVar10[0x18];
      unaff_x28 = (ulong)bVar5;
      puVar23 = *(undefined **)(pbVar10 + 0x20);
      unaff_x21 = *(undefined **)(pbVar10 + 0x28);
      bVar6 = pbVar10[0x30];
      unaff_x25 = (ulong)bVar6;
      puVar18 = *(undefined **)(pbVar10 + 0x38);
      uVar24 = *(ulong *)(pbVar10 + 0x40);
      unaff_x26 = *(undefined **)(pbVar10 + 0x48);
      unaff_x27 = *(undefined **)(pbVar10 + 0x58);
      uVar26 = *(undefined8 *)(pbVar10 + 0x58);
      pcVar7 = *(code **)(pbVar10 + 0x50);
      uVar15 = *(undefined8 *)(pbVar10 + 0x68);
      pbVar20 = *(byte **)(pbVar10 + 0x60);
      puVar16 = *(undefined **)(pbVar10 + 0x70);
      pcVar19 = *(code **)(pbVar10 + 0x78);
      uVar25 = *(undefined8 *)(pbVar10 + 0x70);
      uVar21 = *(ulong *)(pbVar10 + 0x68);
      local_2b0 = puVar23;
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
      pbVar10 = param_2;
      FUN_100a096dc(param_2,unaff_x21,unaff_x25);
      if (((ulong)pbVar10 & 1) != 0) {
        FUN_1000fb4c4();
        FUN_100a0c480(&local_220);
        *(undefined8 *)(unaff_x20 + 0x28) = uStack_1f8;
        *(undefined8 *)(unaff_x20 + 0x20) = local_200;
        *(undefined8 *)(unaff_x20 + 0x38) = uStack_1e8;
        *(undefined8 *)(unaff_x20 + 0x30) = uStack_1f0;
        unaff_x20[0x80] = local_1a0;
        *(undefined8 *)(unaff_x20 + 0x68) = uStack_1b8;
        *(undefined8 *)(unaff_x20 + 0x60) = local_1c0;
        *(undefined8 *)(unaff_x20 + 0x78) = uStack_1a8;
        *(undefined8 *)(unaff_x20 + 0x70) = uStack_1b0;
        *(undefined8 *)(unaff_x20 + 0x48) = uStack_1d8;
        *(undefined8 *)(unaff_x20 + 0x40) = local_1e0;
        *(undefined8 *)(unaff_x20 + 0x58) = uStack_1c8;
        *(undefined8 *)(unaff_x20 + 0x50) = uStack_1d0;
        *(undefined8 *)(unaff_x20 + 8) = uStack_218;
        *(long *)unaff_x20 = local_220;
        *(undefined8 *)(unaff_x20 + 0x18) = uStack_208;
        *(undefined8 *)(unaff_x20 + 0x10) = uStack_210;
        if (*(long *)(puVar23 + 0x10) != 0) {
          lVar11 = 0;
LAB_100a09e74:
          if (*(byte **)(puVar23 + lVar11 * 8 + 0x20) != param_2) goto code_r0x000100a09e80;
          (*param_3)();
          FUN_1000fb4c4();
          *unaff_x20 = bVar3;
          unaff_x20[1] = bVar4;
          *(code **)(unaff_x20 + 8) = pcVar12;
          *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
          unaff_x20[0x18] = bVar5;
          *(undefined **)(unaff_x20 + 0x20) = local_2b0;
          *(undefined **)(unaff_x20 + 0x28) = unaff_x21;
          unaff_x20[0x30] = bVar6;
          *(undefined **)(unaff_x20 + 0x38) = puVar18;
          *(ulong *)(unaff_x20 + 0x40) = uVar24;
          *(undefined **)(unaff_x20 + 0x48) = unaff_x26;
          *(code **)(unaff_x20 + 0x50) = pcVar7;
          *(undefined **)(unaff_x20 + 0x58) = unaff_x27;
          *(ulong *)(unaff_x20 + 0x68) = uVar21;
          *(byte **)(unaff_x20 + 0x60) = pbVar20;
          *(undefined **)(unaff_x20 + 0x70) = puVar16;
          *(code **)(unaff_x20 + 0x78) = pcVar19;
          FUN_1005e46c0();
          param_3 = pcVar12;
          puVar22 = puVar18;
LAB_100a0a1b8:
          CVar17 = Swift::CancellationError::typeMetadataAccessor();
          CVar13 = CVar17;
          FUN_1009e8a00();
          _swift_allocError(CVar17.unknown,CVar13.unknown,0,0);
          Swift::CancellationError::init();
          pcVar19 = param_3;
          pbVar20 = unaff_x20;
          unaff_x26 = puVar22;
          unaff_x27 = puVar23;
          goto LAB_100a0a1e8;
        }
LAB_100a09e8c:
        FUN_1000fb4c4();
        *unaff_x20 = bVar3;
        if ((bVar3 != 0) && ((bVar4 & 1) == 0)) {
          unaff_x20[1] = 1;
          *(code **)(unaff_x20 + 8) = pcVar12;
          *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
          unaff_x20[0x18] = bVar5;
          *(undefined **)(unaff_x20 + 0x20) = puVar23;
          *(undefined **)(unaff_x20 + 0x28) = unaff_x21;
          unaff_x20[0x30] = bVar6;
          *(undefined **)(unaff_x20 + 0x38) = puVar18;
          *(ulong *)(unaff_x20 + 0x40) = uVar24;
          *(undefined **)(unaff_x20 + 0x48) = unaff_x26;
          *(code **)(unaff_x20 + 0x50) = pcVar7;
          *(undefined **)(unaff_x20 + 0x58) = unaff_x27;
          *(byte **)(unaff_x20 + 0x60) = pbVar20;
          *(undefined8 *)(unaff_x20 + 0x70) = uVar25;
          *(ulong *)(unaff_x20 + 0x68) = uVar21;
          *(code **)(unaff_x20 + 0x78) = pcVar19;
          FUN_1005e46c0();
          _swift_unknownObjectRetain(puVar18);
          _swift_retain(pcVar7);
          _swift_retain(pbVar20);
          goto LAB_100a09f38;
        }
        unaff_x20[1] = bVar4;
        *(code **)(unaff_x20 + 8) = pcVar12;
        *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
        unaff_x20[0x18] = bVar5;
        *(undefined **)(unaff_x20 + 0x20) = puVar23;
        *(undefined **)(unaff_x20 + 0x28) = unaff_x21;
        unaff_x20[0x30] = bVar6;
        *(undefined **)(unaff_x20 + 0x38) = puVar18;
        *(ulong *)(unaff_x20 + 0x40) = uVar24;
        *(undefined **)(unaff_x20 + 0x48) = unaff_x26;
        *(undefined8 *)(unaff_x20 + 0x58) = uVar26;
        *(code **)(unaff_x20 + 0x50) = pcVar7;
        *(undefined8 *)(unaff_x20 + 0x68) = uVar15;
        *(byte **)(unaff_x20 + 0x60) = pbVar20;
        *(undefined **)(unaff_x20 + 0x70) = puVar16;
        *(code **)(unaff_x20 + 0x78) = pcVar19;
        FUN_1005e46c0();
        goto LAB_100a0a114;
      }
      FUN_1005e46ac(unaff_x21,unaff_x25);
      FUN_10000cae0(pcVar12,uVar1,unaff_x28);
      FUN_100a0c4d0();
      CVar17.unknown = &DAT_100ee94c0;
      _swift_allocError(&DAT_100ee94c0,pcVar12,0,0);
      *(undefined8 *)pcVar12 = 0xd00000000000001c;
      *(undefined8 *)(pcVar12 + 8) = 0x8000000100dae8b0;
      *(undefined8 *)(pcVar12 + 0x10) = 0x4bb;
      _swift_errorRelease(pcVar19);
      _swift_bridgeObjectRelease(puVar23);
      _swift_release(puVar16);
      _swift_release(pbVar20);
      _swift_release(pcVar7);
      _swift_unknownObjectRelease(puVar18);
      pbVar20 = param_2;
      unaff_x26 = puVar16;
      unaff_x27 = puVar23;
    }
    else {
      if (iVar8 != 3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0a224);
        (*pcVar7)();
      }
      uStack_1b8 = uStack_128;
      local_1c0 = local_130;
      uStack_1a8 = uStack_118;
      uStack_1b0 = uStack_120;
      local_1a0 = local_110;
      uStack_1f8 = uStack_168;
      local_200 = local_170;
      uStack_1e8 = uStack_158;
      uStack_1f0 = uStack_160;
      uStack_1d8 = uStack_148;
      local_1e0 = local_150;
      uStack_1c8 = uStack_138;
      uStack_1d0 = uStack_140;
      uStack_218 = uStack_188;
      local_220 = local_190;
      uStack_208 = uStack_178;
      uStack_210 = uStack_180;
      plVar9 = &local_220;
      FUN_100004520();
      CVar17.unknown = (undefined *)*plVar9;
      if (CVar17.unknown == (undefined *)0x0) {
        FUN_100a0c4d0();
        CVar17.unknown = &DAT_100ee94c0;
        _swift_allocError(&DAT_100ee94c0,plVar9,0,0);
        *plVar9 = -0x2fffffffffffffe4;
        plVar9[1] = -0x7ffffffeff251750;
        plVar9[2] = 0x4c0;
      }
      FUN_1000f8cac(&local_100,&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
      pcVar19 = param_3;
      pbVar20 = param_2;
    }
LAB_100a0a1e8:
    uVar14 = 1;
    puVar16 = unaff_x21;
    puVar18 = CVar17.unknown;
    pcVar7 = pcVar19;
    uVar21 = unaff_x25;
    uVar24 = unaff_x28;
  }
LAB_100a0a1ec:
  *param_1 = puVar18;
  param_1[1] = uVar24;
  param_1[2] = unaff_x26;
  param_1[3] = pcVar7;
  param_1[4] = unaff_x27;
  param_1[5] = pbVar20;
  param_1[6] = uVar21;
  param_1[7] = puVar16;
  *(undefined1 *)(param_1 + 8) = uVar14;
  return;
code_r0x000100a09e80:
  lVar11 = lVar11 + 1;
  if (*(long *)(puVar23 + 0x10) == lVar11) goto LAB_100a09e8c;
  goto LAB_100a09e74;
}



/* Address: 0x100a0a224 | FUN_100a0a224 */

void FUN_100a0a224(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  CancellationError CVar1;
  CancellationError CVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  
  FUN_100a09950(&local_88,param_3,FUN_100a30620);
  if (local_48 < 2) {
    pcVar3 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar4 = local_78;
    uVar7 = uStack_70;
    uVar8 = local_58;
    uVar9 = uStack_50;
    uVar10 = local_68;
    uVar11 = uStack_60;
    FUN_100a0ab40(param_4,param_3,FUN_100a30620,FUN_100a1b674);
    if (((uint)param_4 & 0xff) == 1) {
      lVar6 = *(long *)(param_2 + 0x88);
      if (lVar6 == 0) {
        pcVar3 = (code *)0x0;
        puVar5 = (undefined *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x90);
        puVar5 = &DAT_100f27cb8;
        _swift_allocObject(&DAT_100f27cb8,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar6;
        *(undefined8 *)(puVar5 + 0x18) = uVar4;
        _swift_retain(uVar4);
        pcVar3 = thunk_FUN_100209b34;
      }
    }
    else {
      CVar1 = Swift::CancellationError::typeMetadataAccessor();
      CVar2 = CVar1;
      FUN_1009e8a00();
      _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
      Swift::CancellationError::init();
      pcVar3 = (code *)0x0;
      puVar5 = (undefined *)0x0;
      uStack_80 = 0;
      local_48 = 1;
      local_88 = CVar1.unknown;
      local_78 = uVar4;
      uStack_70 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      local_68 = uVar10;
      uStack_60 = uVar11;
    }
  }
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[7] = uStack_50;
  param_1[6] = local_58;
  *(byte *)(param_1 + 8) = local_48;
  param_1[9] = pcVar3;
  param_1[10] = puVar5;
  return;
}



/* Address: 0x100a0a378 | FUN_100a0a378 */

void FUN_100a0a378(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  CancellationError CVar1;
  CancellationError CVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  
  FUN_100a09950(&local_88,param_3,FUN_100a30620);
  if (local_48 < 2) {
    pcVar3 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar4 = local_78;
    uVar7 = uStack_70;
    uVar8 = local_58;
    uVar9 = uStack_50;
    uVar10 = local_68;
    uVar11 = uStack_60;
    FUN_100a0ab40(param_4,param_3,FUN_100a30620,FUN_100a1b674);
    if (((uint)param_4 & 0xff) == 1) {
      lVar6 = *(long *)(param_2 + 0x88);
      if (lVar6 == 0) {
        pcVar3 = (code *)0x0;
        puVar5 = (undefined *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x90);
        puVar5 = &DAT_100f27b00;
        _swift_allocObject(&DAT_100f27b00,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar6;
        *(undefined8 *)(puVar5 + 0x18) = uVar4;
        _swift_retain(uVar4);
        pcVar3 = FUN_100209b34;
      }
    }
    else {
      CVar1 = Swift::CancellationError::typeMetadataAccessor();
      CVar2 = CVar1;
      FUN_1009e8a00();
      _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
      Swift::CancellationError::init();
      pcVar3 = (code *)0x0;
      puVar5 = (undefined *)0x0;
      uStack_80 = 0;
      local_48 = 1;
      local_88 = CVar1.unknown;
      local_78 = uVar4;
      uStack_70 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      local_68 = uVar10;
      uStack_60 = uVar11;
    }
  }
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[7] = uStack_50;
  param_1[6] = local_58;
  *(byte *)(param_1 + 8) = local_48;
  param_1[9] = pcVar3;
  param_1[10] = puVar5;
  return;
}



/* Address: 0x100a0a4cc | FUN_100a0a4cc */

void FUN_100a0a4cc(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x10;
  long extraout_x10_00;
  long lVar11;
  long extraout_x11;
  long extraout_x11_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  byte *unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong unaff_x25;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined7 uStack_448;
  undefined1 local_441;
  undefined7 uStack_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  undefined1 local_431;
  undefined7 uStack_430;
  undefined1 uStack_429;
  undefined7 uStack_428;
  undefined1 local_421;
  undefined7 uStack_420;
  undefined1 uStack_419;
  undefined7 uStack_418;
  undefined1 local_411;
  undefined7 uStack_410;
  undefined1 uStack_409;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  byte local_340;
  byte local_338;
  undefined1 uStack_337;
  undefined6 uStack_336;
  undefined *puStack_330;
  undefined *local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 local_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 local_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  byte local_2b8;
  undefined8 local_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  long local_278;
  long local_270;
  ulong uStack_268;
  undefined *local_260;
  long local_258;
  long local_250;
  ulong uStack_248;
  undefined *local_240;
  long local_238;
  byte local_230;
  undefined8 local_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long local_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  long local_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  byte local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  byte local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte local_80;
  
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  local_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
  local_130 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
  local_170 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
  local_150 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 8);
  local_100 = *(undefined8 *)unaff_x20;
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_188 = *(undefined8 *)(unaff_x20 + 8);
  local_190 = *(undefined8 *)unaff_x20;
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x70);
  local_80 = unaff_x20[0x80];
  local_110 = unaff_x20[0x80];
  iVar7 = (int)&local_190;
  FUN_1005e4694();
  if (iVar7 < 2) {
    if (iVar7 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a0ab40);
      (*pcVar6)();
    }
    pbVar8 = (byte *)&local_190;
    FUN_100004520();
    bVar3 = *pbVar8;
    puVar14 = (undefined *)(ulong)bVar3;
    puVar13 = *(undefined **)(pbVar8 + 8);
    lVar20 = *(long *)(pbVar8 + 0x10);
    lVar16 = *(long *)(pbVar8 + 0x18);
    bVar4 = pbVar8[0x20];
    uVar23 = *(undefined8 *)(pbVar8 + 0x30);
    uVar21 = *(undefined8 *)(pbVar8 + 0x28);
    uVar27 = *(undefined8 *)(pbVar8 + 0x40);
    uVar25 = *(undefined8 *)(pbVar8 + 0x38);
    uVar24 = *(undefined8 *)(pbVar8 + 0x50);
    uVar22 = *(undefined8 *)(pbVar8 + 0x48);
    uVar28 = *(undefined8 *)(pbVar8 + 0x60);
    uVar26 = *(undefined8 *)(pbVar8 + 0x58);
    if (pbVar8[1] != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a0ab38);
      (*pcVar6)();
    }
    if ((bVar4 != 1) || (*(long *)(lVar20 + 0x10) != 0)) {
      uStack_439 = (undefined1)*(undefined8 *)(pbVar8 + 0x30);
      uStack_438 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x30) >> 8);
      local_441 = (undefined1)*(undefined8 *)(pbVar8 + 0x28);
      uStack_440 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x28) >> 8);
      uStack_429 = (undefined1)*(undefined8 *)(pbVar8 + 0x40);
      uStack_428 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x40) >> 8);
      local_431 = (undefined1)*(undefined8 *)(pbVar8 + 0x38);
      uStack_430 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x38) >> 8);
      uStack_419 = (undefined1)*(undefined8 *)(pbVar8 + 0x50);
      uStack_418 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x50) >> 8);
      local_421 = (undefined1)*(undefined8 *)(pbVar8 + 0x48);
      uStack_420 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x48) >> 8);
      uStack_409 = (undefined1)*(undefined8 *)(pbVar8 + 0x60);
      local_411 = (undefined1)*(undefined8 *)(pbVar8 + 0x58);
      uStack_410 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x58) >> 8);
      uStack_2ff = uStack_430;
      local_2f8 = uStack_429;
      uStack_307 = uStack_438;
      uStack_300 = local_431;
      uStack_2ef = uStack_420;
      local_2e8 = uStack_419;
      uStack_2f7 = uStack_428;
      uStack_2f0 = local_421;
      uStack_2df = uStack_410;
      uStack_2e7 = uStack_418;
      uStack_2e0 = local_411;
      uStack_337 = 0;
      local_328 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uStack_320 = 0;
      local_318 = 1;
      uStack_2d7 = (undefined7)((ulong)*(undefined8 *)(pbVar8 + 0x60) >> 8);
      uStack_30f = uStack_440;
      local_308 = uStack_439;
      uStack_317 = uStack_448;
      uStack_310 = local_441;
      local_338 = bVar3;
      puStack_330 = puVar13;
      local_2d8 = uStack_409;
      FUN_100a0c4a0(&local_338);
      local_250 = CONCAT71(uStack_2d7,local_2d8);
      uStack_248 = uStack_2d0;
      local_238 = uStack_2c0;
      local_240 = (undefined *)local_2c8;
      local_230 = local_2b8;
      uStack_288 = CONCAT71(uStack_30f,uStack_310);
      local_290 = CONCAT71(uStack_317,local_318);
      local_278 = CONCAT71(uStack_2ff,uStack_300);
      local_280 = CONCAT71(uStack_307,local_308);
      local_258 = CONCAT71(uStack_2df,uStack_2e0);
      local_260 = (undefined *)CONCAT71(uStack_2e7,local_2e8);
      uStack_268 = CONCAT71(uStack_2ef,uStack_2f0);
      local_270 = CONCAT71(uStack_2f7,local_2f8);
      local_2b0 = CONCAT62(uStack_336,CONCAT11(uStack_337,local_338));
      puStack_2a8 = puStack_330;
      local_298 = uStack_320;
      puStack_2a0 = local_328;
      uStack_1b8 = *(ulong *)(unaff_x20 + 0x68);
      local_1c0 = *(long *)(unaff_x20 + 0x60);
      lStack_1a8 = *(long *)(unaff_x20 + 0x78);
      puStack_1b0 = *(undefined **)(unaff_x20 + 0x70);
      local_1a0 = unaff_x20[0x80];
      uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x28);
      local_200 = *(undefined8 *)(unaff_x20 + 0x20);
      lStack_1e8 = *(long *)(unaff_x20 + 0x38);
      uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_1d8 = *(ulong *)(unaff_x20 + 0x48);
      local_1e0 = *(long *)(unaff_x20 + 0x40);
      lStack_1c8 = *(long *)(unaff_x20 + 0x58);
      puStack_1d0 = *(undefined **)(unaff_x20 + 0x50);
      puStack_218 = *(undefined **)(unaff_x20 + 8);
      local_220 = *(undefined8 *)unaff_x20;
      uStack_208 = *(undefined8 *)(unaff_x20 + 0x18);
      puStack_210 = *(undefined **)(unaff_x20 + 0x10);
      FUN_1000f8cac(&local_100,&local_3c0,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_220,&DAT_100ff46d8,&DAT_100c8dd10);
      *(ulong *)(unaff_x20 + 0x68) = uStack_248;
      *(long *)(unaff_x20 + 0x60) = local_250;
      *(long *)(unaff_x20 + 0x78) = local_238;
      *(undefined **)(unaff_x20 + 0x70) = local_240;
      unaff_x20[0x80] = local_230;
      *(undefined8 *)(unaff_x20 + 0x28) = uStack_288;
      *(undefined8 *)(unaff_x20 + 0x20) = local_290;
      *(long *)(unaff_x20 + 0x38) = local_278;
      *(undefined8 *)(unaff_x20 + 0x30) = local_280;
      *(ulong *)(unaff_x20 + 0x48) = uStack_268;
      *(long *)(unaff_x20 + 0x40) = local_270;
      *(long *)(unaff_x20 + 0x58) = local_258;
      *(undefined **)(unaff_x20 + 0x50) = local_260;
      lVar10 = extraout_x10;
      lVar11 = extraout_x11;
      lVar12 = extraout_x12;
      puStack_210 = puStack_2a0;
      uStack_208 = local_298;
      local_220 = local_2b0;
      puStack_218 = puStack_2a8;
      goto LAB_100a0a9a4;
    }
    uStack_1b8 = *(ulong *)(unaff_x20 + 0x68);
    local_1c0 = *(long *)(unaff_x20 + 0x60);
    lStack_1a8 = *(long *)(unaff_x20 + 0x78);
    puStack_1b0 = *(undefined **)(unaff_x20 + 0x70);
    local_1a0 = unaff_x20[0x80];
    uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x28);
    local_200 = *(undefined8 *)(unaff_x20 + 0x20);
    lStack_1e8 = *(long *)(unaff_x20 + 0x38);
    uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_1d8 = *(ulong *)(unaff_x20 + 0x48);
    local_1e0 = *(long *)(unaff_x20 + 0x40);
    lStack_1c8 = *(long *)(unaff_x20 + 0x58);
    puStack_1d0 = *(undefined **)(unaff_x20 + 0x50);
    puStack_218 = *(undefined **)(unaff_x20 + 8);
    local_220 = *(undefined8 *)unaff_x20;
    uStack_208 = *(undefined8 *)(unaff_x20 + 0x18);
    puStack_210 = *(undefined **)(unaff_x20 + 0x10);
    FUN_1000f8cac(&local_100,&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
    FUN_1000fb4c4(&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar23;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar21;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar27;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar25;
    *(undefined8 *)(unaff_x20 + 0x50) = uVar24;
    *(undefined8 *)(unaff_x20 + 0x48) = uVar22;
    *unaff_x20 = bVar3;
    unaff_x20[1] = 0;
    *(undefined **)(unaff_x20 + 8) = puVar13;
    *(long *)(unaff_x20 + 0x10) = lVar20;
    *(long *)(unaff_x20 + 0x18) = lVar16;
    unaff_x20[0x20] = 1;
    *(undefined8 *)(unaff_x20 + 0x60) = uVar28;
    *(undefined8 *)(unaff_x20 + 0x58) = uVar26;
    FUN_100a0c4a0();
  }
  else {
    if (iVar7 == 2) {
      pbVar8 = (byte *)&local_190;
      FUN_100004520();
      if (pbVar8[1] != 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a0ab34);
        (*pcVar6)();
      }
      bVar3 = *pbVar8;
      unaff_x25 = (ulong)bVar3;
      lVar1 = *(long *)(pbVar8 + 8);
      lVar2 = *(long *)(pbVar8 + 0x10);
      bVar4 = pbVar8[0x18];
      uVar21 = *(undefined8 *)(pbVar8 + 0x20);
      uVar22 = *(undefined8 *)(pbVar8 + 0x28);
      bVar5 = pbVar8[0x30];
      puVar13 = *(undefined **)(pbVar8 + 0x70);
      lVar12 = *(long *)(pbVar8 + 0x78);
      lVar20 = *(long *)(pbVar8 + 0x38);
      lVar16 = *(long *)(pbVar8 + 0x40);
      uVar9 = *(ulong *)(pbVar8 + 0x48);
      puVar15 = *(undefined **)(pbVar8 + 0x50);
      lVar10 = *(long *)(pbVar8 + 0x58);
      lVar11 = *(long *)(pbVar8 + 0x60);
      uVar18 = *(ulong *)(pbVar8 + 0x68);
      if ((bVar4 == 1) && (*(long *)(lVar1 + 0x10) == 0)) {
        FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
        FUN_1005e46ac(uVar22,bVar5);
        _swift_bridgeObjectRelease(uVar21);
        uVar19 = 1;
        FUN_10000cae0(lVar1,lVar2,1);
        FUN_1000fb4c4();
        local_220 = 0;
        FUN_1005e46cc(&local_220);
        *(ulong *)(unaff_x20 + 0x68) = uStack_1b8;
        *(long *)(unaff_x20 + 0x60) = local_1c0;
        *(long *)(unaff_x20 + 0x78) = lStack_1a8;
        *(undefined **)(unaff_x20 + 0x70) = puStack_1b0;
        unaff_x20[0x80] = local_1a0;
        *(undefined8 *)(unaff_x20 + 0x28) = uStack_1f8;
        *(undefined8 *)(unaff_x20 + 0x20) = local_200;
        *(long *)(unaff_x20 + 0x38) = lStack_1e8;
        *(undefined8 *)(unaff_x20 + 0x30) = uStack_1f0;
        *(ulong *)(unaff_x20 + 0x48) = uStack_1d8;
        *(long *)(unaff_x20 + 0x40) = local_1e0;
        *(long *)(unaff_x20 + 0x58) = lStack_1c8;
        *(undefined **)(unaff_x20 + 0x50) = puStack_1d0;
        uVar17 = (ulong)((uint)uVar9 & 0xff);
        uVar9 = uVar9 & 0xffffffffffffff00;
        *(undefined **)(unaff_x20 + 8) = puStack_218;
        *(undefined8 *)unaff_x20 = local_220;
        *(undefined8 *)(unaff_x20 + 0x18) = uStack_208;
        *(undefined **)(unaff_x20 + 0x10) = puStack_210;
        goto LAB_100a0a9a8;
      }
      uStack_358 = *(undefined8 *)(unaff_x20 + 0x68);
      local_360 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_348 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_350 = *(undefined8 *)(unaff_x20 + 0x70);
      local_340 = unaff_x20[0x80];
      uStack_398 = *(undefined8 *)(unaff_x20 + 0x28);
      local_3a0 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack_388 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_390 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_378 = *(undefined8 *)(unaff_x20 + 0x48);
      local_380 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_368 = *(undefined8 *)(unaff_x20 + 0x58);
      uStack_370 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_3b8 = *(undefined8 *)(unaff_x20 + 8);
      local_3c0 = *(undefined8 *)unaff_x20;
      uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x18);
      uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar14 = &DAT_100c8dd08;
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_3c0,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_100a0c480(&local_338);
      *(undefined8 *)(unaff_x20 + 0x68) = uStack_2d0;
      *(ulong *)(unaff_x20 + 0x60) = CONCAT71(uStack_2d7,local_2d8);
      *(undefined8 *)(unaff_x20 + 0x78) = uStack_2c0;
      *(undefined8 *)(unaff_x20 + 0x70) = local_2c8;
      unaff_x20[0x80] = local_2b8;
      *(ulong *)(unaff_x20 + 0x28) = CONCAT71(uStack_30f,uStack_310);
      *(ulong *)(unaff_x20 + 0x20) = CONCAT71(uStack_317,local_318);
      *(ulong *)(unaff_x20 + 0x38) = CONCAT71(uStack_2ff,uStack_300);
      *(ulong *)(unaff_x20 + 0x30) = CONCAT71(uStack_307,local_308);
      *(ulong *)(unaff_x20 + 0x48) = CONCAT71(uStack_2ef,uStack_2f0);
      *(ulong *)(unaff_x20 + 0x40) = CONCAT71(uStack_2f7,local_2f8);
      *(ulong *)(unaff_x20 + 0x58) = CONCAT71(uStack_2df,uStack_2e0);
      *(ulong *)(unaff_x20 + 0x50) = CONCAT71(uStack_2e7,local_2e8);
      *(undefined **)(unaff_x20 + 8) = puStack_330;
      *(ulong *)unaff_x20 = CONCAT62(uStack_336,CONCAT11(uStack_337,local_338));
      *(undefined8 *)(unaff_x20 + 0x18) = uStack_320;
      *(undefined **)(unaff_x20 + 0x10) = local_328;
      local_2b0._0_2_ = (ushort)bVar3;
      puStack_2a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puStack_2a0 = (undefined *)0x0;
      local_298 = CONCAT71(local_298._1_7_,1);
      local_280 = CONCAT71(local_280._1_7_,bVar5);
      local_290 = uVar21;
      uStack_288 = uVar22;
      local_278 = lVar20;
      local_270 = lVar16;
      uStack_268 = uVar9;
      local_260 = puVar15;
      local_258 = lVar10;
      local_250 = lVar11;
      uStack_248 = uVar18;
      local_240 = puVar13;
      local_238 = lVar12;
      FUN_1005e46c0(&local_2b0);
      uStack_1b8 = uStack_248;
      local_1c0 = local_250;
      lStack_1a8 = local_238;
      puStack_1b0 = local_240;
      local_1a0 = local_230;
      uStack_1f8 = uStack_288;
      local_200 = local_290;
      lStack_1e8 = local_278;
      uStack_1f0 = local_280;
      uStack_1d8 = uStack_268;
      local_1e0 = local_270;
      lStack_1c8 = local_258;
      puStack_1d0 = local_260;
      puStack_218 = puStack_2a8;
      local_220 = local_2b0;
      uStack_208 = local_298;
      puStack_210 = puStack_2a0;
      FUN_1000fb4c4();
      *(ulong *)(unaff_x20 + 0x68) = uStack_1b8;
      *(long *)(unaff_x20 + 0x60) = local_1c0;
      *(long *)(unaff_x20 + 0x78) = lStack_1a8;
      *(undefined **)(unaff_x20 + 0x70) = puStack_1b0;
      unaff_x20[0x80] = local_1a0;
      *(undefined8 *)(unaff_x20 + 0x28) = uStack_1f8;
      *(undefined8 *)(unaff_x20 + 0x20) = local_200;
      *(long *)(unaff_x20 + 0x38) = lStack_1e8;
      *(undefined8 *)(unaff_x20 + 0x30) = uStack_1f0;
      *(ulong *)(unaff_x20 + 0x48) = uStack_1d8;
      *(long *)(unaff_x20 + 0x40) = local_1e0;
      *(long *)(unaff_x20 + 0x58) = lStack_1c8;
      *(undefined **)(unaff_x20 + 0x50) = puStack_1d0;
      lVar10 = extraout_x10_00;
      lVar11 = extraout_x11_00;
      lVar12 = extraout_x12_00;
      lVar16 = lVar2;
      lVar20 = lVar1;
LAB_100a0a9a4:
      uVar17 = (ulong)bVar4;
      uVar19 = 0;
      uVar9 = 0;
      *(undefined **)(unaff_x20 + 8) = puStack_218;
      *(undefined8 *)unaff_x20 = local_220;
      *(undefined8 *)(unaff_x20 + 0x18) = uStack_208;
      *(undefined **)(unaff_x20 + 0x10) = puStack_210;
      puVar15 = puVar14;
      uVar18 = unaff_x25;
      goto LAB_100a0a9a8;
    }
    if (iVar7 != 3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a0ab3c);
      (*pcVar6)();
    }
    uStack_1b8 = uStack_128;
    local_1c0 = local_130;
    lStack_1a8 = uStack_118;
    puStack_1b0 = (undefined *)uStack_120;
    local_1a0 = local_110;
    uStack_1f8 = uStack_168;
    local_200 = local_170;
    lStack_1e8 = uStack_158;
    uStack_1f0 = uStack_160;
    uStack_1d8 = uStack_148;
    local_1e0 = local_150;
    lStack_1c8 = uStack_138;
    puStack_1d0 = (undefined *)uStack_140;
    puStack_218 = (undefined *)uStack_188;
    local_220 = local_190;
    uStack_208 = uStack_178;
    puStack_210 = (undefined *)uStack_180;
    FUN_1000f8cac(&local_100,&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
    FUN_1000fb4c4(&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
  }
  lVar20 = 0;
  lVar16 = 0;
  lVar10 = 0;
  lVar11 = 0;
  puVar13 = (undefined *)0x0;
  lVar12 = 0;
  uVar17 = 0;
  uVar9 = 0;
  uVar19 = 0xff;
  puVar15 = (undefined *)0x0;
  uVar18 = 0;
LAB_100a0a9a8:
  *param_1 = lVar20;
  param_1[1] = lVar16;
  param_1[2] = uVar9 | uVar17;
  param_1[3] = (long)puVar15;
  param_1[4] = lVar10;
  param_1[5] = lVar11;
  param_1[6] = uVar18;
  param_1[7] = (long)puVar13;
  param_1[8] = lVar12;
  *(undefined1 *)(param_1 + 9) = uVar19;
  return;
}



/* Address: 0x100a0ab40 | FUN_100a0ab40 */

undefined8 FUN_100a0ab40(undefined8 param_1,long param_2,code *param_3,code *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_390 [136];
  long local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined1 local_190;
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
  undefined1 local_100;
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
  undefined1 local_70;
  
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  local_90 = unaff_x20[0xc];
  uStack_118 = unaff_x20[0xd];
  local_120 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  local_d0 = unaff_x20[4];
  uStack_158 = unaff_x20[5];
  local_160 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  local_b0 = unaff_x20[8];
  uStack_138 = unaff_x20[9];
  local_140 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_e8 = unaff_x20[1];
  local_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_178 = unaff_x20[1];
  local_180 = *unaff_x20;
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  local_70 = *(undefined1 *)(unaff_x20 + 0x10);
  local_100 = *(undefined1 *)(unaff_x20 + 0x10);
  iVar8 = (int)&local_180;
  FUN_1005e4694();
  if (iVar8 < 2) {
    if (iVar8 != 1) {
      puVar9 = &local_180;
      FUN_100004520();
      uVar11 = puVar9[1];
      FUN_1000f8cac(&local_f0,&local_210,&DAT_100ff46d0,&DAT_100c8dd08);
      _swift_unknownObjectRelease(uVar11);
      _swift_release(puVar9[4]);
      _swift_release(puVar9[6]);
      _swift_release(puVar9[8]);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0b0cc);
      (*pcVar7)();
    }
    puVar9 = &local_180;
    FUN_100004520();
    uVar3 = *(undefined1 *)puVar9;
    uVar4 = *(undefined1 *)((long)puVar9 + 1);
    lVar1 = puVar9[1];
    uVar11 = puVar9[2];
    uVar13 = puVar9[3];
    uVar5 = *(undefined1 *)(puVar9 + 4);
    uStack_2d8 = puVar9[6];
    local_2e0 = puVar9[5];
    uStack_2c8 = puVar9[8];
    uStack_2d0 = puVar9[7];
    uStack_2b8 = puVar9[10];
    local_2c0 = puVar9[9];
    uStack_2a8 = puVar9[0xc];
    uStack_2b0 = puVar9[0xb];
    uStack_238 = unaff_x20[0xd];
    local_240 = unaff_x20[0xc];
    uStack_228 = unaff_x20[0xf];
    uStack_230 = unaff_x20[0xe];
    local_220 = *(undefined1 *)(unaff_x20 + 0x10);
    uStack_258 = unaff_x20[9];
    local_260 = unaff_x20[8];
    uStack_248 = unaff_x20[0xb];
    uStack_250 = unaff_x20[10];
    uStack_298 = unaff_x20[1];
    local_2a0 = *unaff_x20;
    uStack_288 = unaff_x20[3];
    uStack_290 = unaff_x20[2];
    uStack_278 = unaff_x20[5];
    local_280 = unaff_x20[4];
    uStack_268 = unaff_x20[7];
    uStack_270 = unaff_x20[6];
    local_308 = lVar1;
    local_300 = uVar11;
    uStack_2f8 = uVar13;
    local_2f0 = uVar5;
    FUN_1000f8cac(&local_f0,auStack_390,&DAT_100ff46d0,&DAT_100c8dd08);
    _swift_bridgeObjectRetain(lVar1);
    FUN_1000fb4c4(&local_2a0,&DAT_100ff46d0,&DAT_100c8dd08);
    FUN_100a0c480(&local_210);
    unaff_x20[5] = uStack_1e8;
    unaff_x20[4] = local_1f0;
    unaff_x20[7] = uStack_1d8;
    unaff_x20[6] = uStack_1e0;
    *(undefined1 *)(unaff_x20 + 0x10) = local_190;
    unaff_x20[0xd] = uStack_1a8;
    unaff_x20[0xc] = local_1b0;
    unaff_x20[0xf] = uStack_198;
    unaff_x20[0xe] = uStack_1a0;
    unaff_x20[9] = uStack_1c8;
    unaff_x20[8] = local_1d0;
    unaff_x20[0xb] = uStack_1b8;
    unaff_x20[10] = uStack_1c0;
    unaff_x20[1] = uStack_208;
    *unaff_x20 = local_210;
    unaff_x20[3] = uStack_1f8;
    unaff_x20[2] = uStack_200;
    if (*(long *)(lVar1 + 0x10) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(lVar1 + lVar12 * 8 + 0x20) == param_2) {
          _swift_bridgeObjectRelease(lVar1);
          (*param_3)(lVar12);
          FUN_1000fb4c4();
          unaff_x20[6] = uStack_2d8;
          unaff_x20[5] = local_2e0;
          unaff_x20[8] = uStack_2c8;
          unaff_x20[7] = uStack_2d0;
          unaff_x20[10] = uStack_2b8;
          unaff_x20[9] = local_2c0;
          *(undefined1 *)unaff_x20 = uVar3;
          *(undefined1 *)((long)unaff_x20 + 1) = uVar4;
          unaff_x20[1] = local_308;
          unaff_x20[2] = uVar11;
          unaff_x20[3] = uVar13;
          *(undefined1 *)(unaff_x20 + 4) = uVar5;
          unaff_x20[0xc] = uStack_2a8;
          unaff_x20[0xb] = uStack_2b0;
          FUN_100a0c4a0();
          return 0;
        }
        lVar12 = lVar12 + 1;
      } while (*(long *)(lVar1 + 0x10) != lVar12);
    }
    _swift_bridgeObjectRelease(lVar1);
    (*param_4)(param_2,param_1);
    FUN_1000fb4c4();
    unaff_x20[3] = uStack_2f8;
    unaff_x20[2] = local_300;
    unaff_x20[6] = uStack_2d8;
    unaff_x20[5] = local_2e0;
    unaff_x20[8] = uStack_2c8;
    unaff_x20[7] = uStack_2d0;
    unaff_x20[10] = uStack_2b8;
    unaff_x20[9] = local_2c0;
    *(undefined1 *)unaff_x20 = uVar3;
    *(undefined1 *)((long)unaff_x20 + 1) = uVar4;
    unaff_x20[1] = lVar1;
    *(undefined1 *)(unaff_x20 + 4) = local_2f0;
    unaff_x20[0xc] = uStack_2a8;
    unaff_x20[0xb] = uStack_2b0;
    FUN_100a0c4a0();
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        uStack_1a8 = uStack_118;
        local_1b0 = local_120;
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        local_190 = local_100;
        uStack_1e8 = uStack_158;
        local_1f0 = local_160;
        uStack_1d8 = uStack_148;
        uStack_1e0 = uStack_150;
        uStack_1c8 = uStack_138;
        local_1d0 = local_140;
        uStack_1b8 = uStack_128;
        uStack_1c0 = uStack_130;
        uStack_208 = uStack_178;
        local_210 = local_180;
        uStack_1f8 = uStack_168;
        uStack_200 = uStack_170;
        FUN_1000f8cac(&local_f0,&local_2a0,&DAT_100ff46d0,&DAT_100c8dd08);
        FUN_1000fb4c4(&local_210,&DAT_100ff46d0,&DAT_100c8dd08);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0b078);
        (*pcVar7)();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0b07c);
      (*pcVar7)();
    }
    puVar9 = &local_180;
    FUN_100004520();
    uVar3 = *(undefined1 *)puVar9;
    uVar4 = *(undefined1 *)((long)puVar9 + 1);
    uVar11 = puVar9[1];
    uVar13 = puVar9[2];
    uVar5 = *(undefined1 *)(puVar9 + 3);
    lVar1 = puVar9[4];
    uVar2 = puVar9[5];
    uVar6 = *(undefined1 *)(puVar9 + 6);
    uVar10 = puVar9[0xf];
    uStack_2d8 = puVar9[8];
    local_2e0 = puVar9[7];
    uStack_2c8 = puVar9[10];
    uStack_2d0 = puVar9[9];
    uStack_2b8 = puVar9[0xc];
    local_2c0 = puVar9[0xb];
    uStack_2a8 = puVar9[0xe];
    uStack_2b0 = puVar9[0xd];
    uStack_238 = unaff_x20[0xd];
    local_240 = unaff_x20[0xc];
    uStack_228 = unaff_x20[0xf];
    uStack_230 = unaff_x20[0xe];
    local_220 = *(undefined1 *)(unaff_x20 + 0x10);
    uStack_298 = unaff_x20[1];
    local_2a0 = *unaff_x20;
    uStack_288 = unaff_x20[3];
    uStack_290 = unaff_x20[2];
    uStack_278 = unaff_x20[5];
    local_280 = unaff_x20[4];
    uStack_268 = unaff_x20[7];
    uStack_270 = unaff_x20[6];
    uStack_258 = unaff_x20[9];
    local_260 = unaff_x20[8];
    uStack_248 = unaff_x20[0xb];
    uStack_250 = unaff_x20[10];
    local_308 = lVar1;
    local_300 = uVar11;
    uStack_2f8 = uVar13;
    local_2f0 = uVar5;
    FUN_1000f8cac(&local_f0,auStack_390,&DAT_100ff46d0,&DAT_100c8dd08);
    _swift_bridgeObjectRetain(lVar1);
    FUN_1000fb4c4(&local_2a0,&DAT_100ff46d0,&DAT_100c8dd08);
    FUN_100a0c480(&local_210);
    unaff_x20[5] = uStack_1e8;
    unaff_x20[4] = local_1f0;
    unaff_x20[7] = uStack_1d8;
    unaff_x20[6] = uStack_1e0;
    *(undefined1 *)(unaff_x20 + 0x10) = local_190;
    unaff_x20[0xd] = uStack_1a8;
    unaff_x20[0xc] = local_1b0;
    unaff_x20[0xf] = uStack_198;
    unaff_x20[0xe] = uStack_1a0;
    unaff_x20[9] = uStack_1c8;
    unaff_x20[8] = local_1d0;
    unaff_x20[0xb] = uStack_1b8;
    unaff_x20[10] = uStack_1c0;
    unaff_x20[1] = uStack_208;
    *unaff_x20 = local_210;
    unaff_x20[3] = uStack_1f8;
    unaff_x20[2] = uStack_200;
    if (*(long *)(lVar1 + 0x10) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(lVar1 + lVar12 * 8 + 0x20) == param_2) {
          _swift_bridgeObjectRelease(lVar1);
          (*param_3)(lVar12);
          FUN_1000fb4c4();
          unaff_x20[8] = uStack_2d8;
          unaff_x20[7] = local_2e0;
          unaff_x20[10] = uStack_2c8;
          unaff_x20[9] = uStack_2d0;
          unaff_x20[0xc] = uStack_2b8;
          unaff_x20[0xb] = local_2c0;
          *(undefined1 *)unaff_x20 = uVar3;
          *(undefined1 *)((long)unaff_x20 + 1) = uVar4;
          unaff_x20[1] = uVar11;
          unaff_x20[2] = uVar13;
          *(undefined1 *)(unaff_x20 + 3) = uVar5;
          unaff_x20[4] = local_308;
          unaff_x20[5] = uVar2;
          *(undefined1 *)(unaff_x20 + 6) = uVar6;
          unaff_x20[0xe] = uStack_2a8;
          unaff_x20[0xd] = uStack_2b0;
          unaff_x20[0xf] = uVar10;
          FUN_1005e46c0();
          return 0;
        }
        lVar12 = lVar12 + 1;
      } while (*(long *)(lVar1 + 0x10) != lVar12);
    }
    _swift_bridgeObjectRelease(lVar1);
    (*param_4)(param_2,param_1);
    FUN_1000fb4c4();
    unaff_x20[2] = uStack_2f8;
    unaff_x20[1] = local_300;
    unaff_x20[8] = uStack_2d8;
    unaff_x20[7] = local_2e0;
    unaff_x20[10] = uStack_2c8;
    unaff_x20[9] = uStack_2d0;
    unaff_x20[0xc] = uStack_2b8;
    unaff_x20[0xb] = local_2c0;
    *(undefined1 *)unaff_x20 = uVar3;
    *(undefined1 *)((long)unaff_x20 + 1) = uVar4;
    *(undefined1 *)(unaff_x20 + 3) = local_2f0;
    unaff_x20[4] = lVar1;
    unaff_x20[5] = uVar2;
    *(undefined1 *)(unaff_x20 + 6) = uVar6;
    unaff_x20[0xe] = uStack_2a8;
    unaff_x20[0xd] = uStack_2b0;
    unaff_x20[0xf] = uVar10;
    FUN_1005e46c0();
  }
  return 1;
}



/* Address: 0x100a0b0cc | FUN_100a0b0cc */

void FUN_100a0b0cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  _swift_task_switch(FUN_100a0b0e4,0,0);
  return;
}



/* Address: 0x100a0b0e4 | FUN_100a0b0e4 */

void FUN_100a0b0e4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined4 extraout_var;
  
  FUN_1005ec520();
  (**(code **)(*(long *)*param_1 + 0x88))();
  lVar4 = *param_1;
  *param_1 = lVar4 + 1;
  *(long *)(unaff_x22 + 0xf8) = lVar4;
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(byte *)(unaff_x22 + 0xbb) = bVar5 & 1;
  lVar4 = *(long *)(unaff_x22 + 0xf0);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 **)(unaff_x22 + 0x70) = (undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xd0) = lVar4;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xf8);
  if ((bVar5 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x100) = plVar7;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a0b478;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar13 = FUN_100a0c438;
  _swift_task_addCancellationHandler(FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x108) = pcVar13;
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0xa8));
  if (iVar6 == 0) {
    lVar4 = *(long *)(unaff_x22 + 0xf0);
    FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0xf8),FUN_100a30620);
    lVar15 = *(long *)(unaff_x22 + 0x80);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar19 = *(ulong *)(unaff_x22 + 0x78);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
    pcVar13 = *(code **)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
    iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0xa8));
    puVar8 = (undefined8 *)CONCAT44(extraout_var,iVar6);
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100a0b478);
      (*pcVar13)();
    }
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
      FUN_1006883ac();
      uVar9 = *puVar8;
      _swift_retain();
      FUN_100a05894(uVar16);
      uVar10 = uVar19;
      _swift_getObjectType();
      uVar11 = uVar10;
      (**(code **)(lVar15 + 0x10))();
      if ((uVar11 & 1) == 0) {
        puVar12 = &DAT_100f27b50;
        _swift_allocObject(&DAT_100f27b50,0x58,7);
        *(undefined8 *)(puVar12 + 0x18) = uVar20;
        *(ulong *)(puVar12 + 0x10) = uVar19;
        *(undefined8 *)(puVar12 + 0x28) = uVar18;
        *(code **)(puVar12 + 0x20) = pcVar13;
        *(undefined8 *)(puVar12 + 0x30) = uVar14;
        *(undefined8 *)(puVar12 + 0x38) = uVar2;
        *(undefined8 *)(puVar12 + 0x40) = uVar3;
        *(undefined8 *)(puVar12 + 0x48) = uVar17;
        *(undefined8 *)(puVar12 + 0x50) = uVar9;
        pcVar13 = *(code **)(lVar15 + 0x18);
        _swift_unknownObjectRetain(uVar19);
        _swift_retain(uVar1);
        _swift_retain(uVar2);
        _swift_retain(uVar17);
        _swift_retain(uVar9);
        (*pcVar13)(FUN_100a0c5a4,puVar12,uVar10,lVar15);
        _swift_release(puVar12);
      }
      else {
        (*pcVar13)(uVar9);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
      _swift_release(uVar9);
      FUN_100a08874(uVar14,&DAT_100f27b78,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar19);
      _swift_release(uVar1);
      _swift_release(uVar2);
      _swift_release(uVar17);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar13 = FUN_100a0b5ec;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a0b4e4;
        _swift_continuation_init(unaff_x22 + 0x10,1);
        FUN_100a0bd60();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow(uVar19);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
      *(ulong *)(unaff_x22 + 0x118) = uVar19;
      pcVar13 = FUN_100a0b964;
    }
    _swift_task_switch(pcVar13,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100a0b474);
  (*pcVar13)();
}



/* Address: 0x100a0b478 | FUN_100a0b478 */

void FUN_100a0b478(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xbd) = *(undefined1 *)(lVar2 + 0xb9);
    pcVar1 = FUN_100a0b5ec;
  }
  else {
    *(long *)(lVar2 + 0x118) = unaff_x20;
    pcVar1 = FUN_100a0b964;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0b4e4 | FUN_100a0b4e4 */

void FUN_100a0b4e4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined1 *)(lVar2 + 0xbc) = *(undefined1 *)(lVar2 + 0xba);
    pcVar1 = FUN_100a0b558;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a0b5a4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0b558 | FUN_100a0b558 */

void FUN_100a0b558(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xbc);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
  *(undefined1 *)(unaff_x22 + 0xbd) = uVar1;
  _swift_task_switch(FUN_100a0b5ec,0,0);
  return;
}



/* Address: 0x100a0b5a4 | FUN_100a0b5a4 */

void FUN_100a0b5a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  _swift_task_switch(FUN_100a0b964,0,0);
  return;
}



/* Address: 0x100a0b5ec | FUN_100a0b5ec */

void FUN_100a0b5ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined4 extraout_var;
  
  if (*(char *)(unaff_x22 + 0xbd) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a0b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(long *)(unaff_x22 + 0x70) = unaff_x22 + 0xe0;
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  if (*(char *)(unaff_x22 + 0xbb) == '\x01') {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x100) = plVar6;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a0b478;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar12 = FUN_100a0c438;
  _swift_task_addCancellationHandler(FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x108) = pcVar12;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0xa8));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100a0b960);
    (*pcVar12)();
  }
  lVar1 = *(long *)(unaff_x22 + 0xf0);
  FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0xf8),FUN_100a30620);
  lVar14 = *(long *)(unaff_x22 + 0x80);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar18 = *(ulong *)(unaff_x22 + 0x78);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar12 = *(code **)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0xa8));
  puVar7 = (undefined8 *)CONCAT44(extraout_var,iVar5);
  if (iVar5 == 0) {
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
      FUN_1006883ac();
      uVar8 = *puVar7;
      _swift_retain();
      FUN_100a05894(uVar15);
      uVar9 = uVar18;
      _swift_getObjectType();
      uVar10 = uVar9;
      (**(code **)(lVar14 + 0x10))();
      if ((uVar10 & 1) == 0) {
        puVar11 = &DAT_100f27b50;
        _swift_allocObject(&DAT_100f27b50,0x58,7);
        *(undefined8 *)(puVar11 + 0x18) = uVar19;
        *(ulong *)(puVar11 + 0x10) = uVar18;
        *(undefined8 *)(puVar11 + 0x28) = uVar17;
        *(code **)(puVar11 + 0x20) = pcVar12;
        *(undefined8 *)(puVar11 + 0x30) = uVar13;
        *(undefined8 *)(puVar11 + 0x38) = uVar3;
        *(undefined8 *)(puVar11 + 0x40) = uVar4;
        *(undefined8 *)(puVar11 + 0x48) = uVar16;
        *(undefined8 *)(puVar11 + 0x50) = uVar8;
        pcVar12 = *(code **)(lVar14 + 0x18);
        _swift_unknownObjectRetain(uVar18);
        _swift_retain(uVar2);
        _swift_retain(uVar3);
        _swift_retain(uVar16);
        _swift_retain(uVar8);
        (*pcVar12)(FUN_100a0c5a4,puVar11,uVar9,lVar14);
        _swift_release(puVar11);
      }
      else {
        (*pcVar12)(uVar8);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
      _swift_release(uVar8);
      FUN_100a08874(uVar13,&DAT_100f27b78,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar18);
      _swift_release(uVar2);
      _swift_release(uVar3);
      _swift_release(uVar16);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar12 = FUN_100a0b5ec;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a0b4e4;
        _swift_continuation_init(unaff_x22 + 0x10,1);
        FUN_100a0bd60();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow(uVar18);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x108));
      *(ulong *)(unaff_x22 + 0x118) = uVar18;
      pcVar12 = FUN_100a0b964;
    }
    _swift_task_switch(pcVar12,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100a0b964);
  (*pcVar12)();
}



/* Address: 0x100a0b964 | FUN_100a0b964 */

void FUN_100a0b964(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a0b96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a0b970 | FUN_100a0b970 */

void FUN_100a0b970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  _swift_task_switch(FUN_100a0b98c,0,0);
  return;
}



/* Address: 0x100a0b98c | FUN_100a0b98c */

void FUN_100a0b98c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 extraout_var;
  
  lVar13 = *(long *)(unaff_x22 + 0x98);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar13 + 0xa8));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a0bc0c);
    (*pcVar10)();
  }
  FUN_100a09950(unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0),FUN_100a30620);
  lVar12 = *(long *)(unaff_x22 + 0x58);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar17 = *(ulong *)(unaff_x22 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  pcVar10 = *(code **)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar13 + 0xa8));
  puVar5 = (undefined8 *)CONCAT44(extraout_var,iVar4);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a0bc10);
    (*pcVar10)();
  }
  if (*(char *)(unaff_x22 + 0x90) == '\0') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    FUN_1006883ac();
    uVar6 = *puVar5;
    _swift_retain();
    FUN_100a05894(uVar14);
    uVar7 = uVar17;
    _swift_getObjectType();
    uVar8 = uVar7;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar8 & 1) == 0) {
      puVar9 = &DAT_100f27c18;
      _swift_allocObject(&DAT_100f27c18,0x58,7);
      *(undefined8 *)(puVar9 + 0x18) = uVar18;
      *(ulong *)(puVar9 + 0x10) = uVar17;
      *(undefined8 *)(puVar9 + 0x28) = uVar16;
      *(code **)(puVar9 + 0x20) = pcVar10;
      *(undefined8 *)(puVar9 + 0x30) = uVar11;
      *(undefined8 *)(puVar9 + 0x38) = uVar2;
      *(undefined8 *)(puVar9 + 0x40) = uVar3;
      *(undefined8 *)(puVar9 + 0x48) = uVar15;
      *(undefined8 *)(puVar9 + 0x50) = uVar6;
      pcVar10 = *(code **)(lVar12 + 0x18);
      _swift_unknownObjectRetain(uVar17);
      _swift_retain(uVar1);
      _swift_retain(uVar2);
      _swift_retain(uVar15);
      _swift_retain(uVar6);
      (*pcVar10)(thunk_FUN_100a0c5a4,puVar9,uVar7,lVar12);
      _swift_release(puVar9);
    }
    else {
      (*pcVar10)(uVar6);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    _swift_release(uVar6);
    FUN_100a08874(uVar11,&DAT_100f27b78,FUN_100a0c474);
    _swift_unknownObjectRelease(uVar17);
    _swift_release(uVar1);
    _swift_release(uVar2);
    _swift_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000100a0bc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    _swift_willThrow(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000100a0ba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x91;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100a0bc10;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100a0bd60();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a0bc10 | FUN_100a0bc10 */

void FUN_100a0bc10(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a0bc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a0bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined1 *)(*unaff_x22 + 0x91));
  return;
}



/* Address: 0x100a0bc80 | FUN_100a0bc80 */

void FUN_100a0bc80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  CancellationError CVar3;
  CancellationError CVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa8));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0bd5c);
    (*pcVar1)();
  }
  FUN_100a08ca4(param_2,param_3,param_4);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa8));
  if (iVar2 == 0) {
    if (param_2 != 0) {
      CVar3 = Swift::CancellationError::typeMetadataAccessor();
      CVar4 = CVar3;
      FUN_1009e8a00();
      _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
      Swift::CancellationError::init();
      puVar5 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar6 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar6 = CVar3.unknown;
      _swift_continuation_throwingResumeWithError(param_2,puVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0bd60);
  (*pcVar1)();
}



/* Address: 0x100a0bd60 | FUN_100a0bd60 */

/* WARNING: Removing unreachable block (ram,0x000100a0c048) */

void FUN_100a0bd60(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 extraout_var;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  ulong *puVar10;
  ulong local_c8;
  long lStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char local_88;
  ulong local_80;
  ulong uStack_78;
  
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100a0c044);
    (*pcVar9)();
  }
  FUN_100a0c04c(&local_c8,param_2 + 0x10,param_3,param_1);
  uVar1 = local_c8;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar3 == 0) {
    if (local_80 == 0) {
      pcVar9 = (code *)0x0;
      puVar10 = (ulong *)0x0;
      puVar4 = (ulong *)CONCAT44(extraout_var,iVar3);
    }
    else {
      puVar10 = (ulong *)&DAT_100f27bc8;
      _swift_allocObject(&DAT_100f27bc8,0x20,7);
      puVar10[2] = local_80;
      puVar10[3] = uStack_78;
      pcVar9 = thunk_FUN_100209b34;
      puVar4 = puVar10;
    }
    if (local_88 == '\0') {
      FUN_1006883ac();
      local_c8 = *puVar4;
      _swift_retain();
      FUN_100a05894(param_4);
      uVar2 = local_c8;
      uVar5 = uVar1;
      _swift_getObjectType();
      uVar6 = uVar5;
      (**(code **)(lStack_c0 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_100f27ba0;
        _swift_allocObject(&DAT_100f27ba0,0x58,7);
        *(long *)(puVar7 + 0x18) = lStack_c0;
        *(ulong *)(puVar7 + 0x10) = uVar1;
        *(undefined8 *)(puVar7 + 0x28) = uStack_b0;
        *(code **)(puVar7 + 0x20) = local_b8;
        *(undefined8 *)(puVar7 + 0x30) = uStack_a8;
        *(undefined8 *)(puVar7 + 0x38) = local_a0;
        *(undefined8 *)(puVar7 + 0x40) = uStack_98;
        *(undefined8 *)(puVar7 + 0x48) = local_90;
        *(ulong *)(puVar7 + 0x50) = uVar2;
        pcVar8 = *(code **)(lStack_c0 + 0x18);
        _swift_unknownObjectRetain(uVar1);
        _swift_retain(uStack_b0);
        _swift_retain(local_a0);
        _swift_retain(local_90);
        _swift_retain(uVar2);
        (*pcVar8)(thunk_FUN_100a0c5a4,puVar7,uVar5,lStack_c0);
        _swift_release(puVar7);
      }
      else {
        (*local_b8)(uVar2);
      }
      _swift_release(uVar2);
      FUN_100a08874(param_2,&DAT_100f27b78,FUN_100a0c474);
      **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
      _swift_continuation_throwingResume(param_1);
      _swift_release(local_90);
      _swift_release(local_a0);
      _swift_release(uStack_b0);
      _swift_unknownObjectRelease(uVar1);
    }
    else if (local_88 == '\x01') {
      puVar7 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar4 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar4 = uVar1;
      _swift_continuation_throwingResumeWithError(param_1,puVar7);
    }
    else {
      if (local_80 == 0) {
        return;
      }
      _swift_retain(puVar10);
      (*pcVar9)();
      FUN_100004550(pcVar9,puVar10);
    }
    FUN_100004550(pcVar9,puVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100a0c048);
  (*pcVar9)();
}



/* Address: 0x100a0c04c | FUN_100a0c04c */

void FUN_100a0c04c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  CancellationError CVar1;
  CancellationError CVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  
  FUN_100a09950(&local_88,param_3,FUN_100a30620);
  if (local_48 < 2) {
    pcVar3 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar4 = local_78;
    uVar7 = uStack_70;
    uVar8 = local_58;
    uVar9 = uStack_50;
    uVar10 = local_68;
    uVar11 = uStack_60;
    FUN_100a0ab40(param_4,param_3,FUN_100a30620,FUN_100a1b674);
    if (((uint)param_4 & 0xff) == 1) {
      lVar6 = *(long *)(param_2 + 0x88);
      if (lVar6 == 0) {
        pcVar3 = (code *)0x0;
        puVar5 = (undefined *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x90);
        puVar5 = &DAT_100f27bf0;
        _swift_allocObject(&DAT_100f27bf0,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar6;
        *(undefined8 *)(puVar5 + 0x18) = uVar4;
        _swift_retain(uVar4);
        pcVar3 = thunk_FUN_100209b34;
      }
    }
    else {
      CVar1 = Swift::CancellationError::typeMetadataAccessor();
      CVar2 = CVar1;
      FUN_1009e8a00();
      _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
      Swift::CancellationError::init();
      pcVar3 = (code *)0x0;
      puVar5 = (undefined *)0x0;
      uStack_80 = 0;
      local_48 = 1;
      local_88 = CVar1.unknown;
      local_78 = uVar4;
      uStack_70 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      local_68 = uVar10;
      uStack_60 = uVar11;
    }
  }
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[7] = uStack_50;
  param_1[6] = local_58;
  *(byte *)(param_1 + 8) = local_48;
  param_1[9] = pcVar3;
  param_1[10] = puVar5;
  return;
}



/* Address: 0x100a0c1a0 | FUN_100a0c1a0 */

void FUN_100a0c1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = *param_4;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a0c224;
  FUN_100a0b970(param_2,param_3,uVar2);
  return;
}



/* Address: 0x100a0c224 | FUN_100a0c224 */

void FUN_100a0c224(undefined1 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 == 0) {
    **(undefined1 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a0c27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a0c280 | FUN_100a0c280 */

void FUN_100a0c280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100a0c224;
  FUN_100a07c94(param_2,param_3,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a0c318 | FUN_100a0c318 */

void FUN_100a0c318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100a0c224;
  FUN_100a07f70(param_2,param_3,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a0c3b0 | FUN_100a0c3b0 */

void FUN_100a0c3b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a0c318(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a0c438 | FUN_100a0c438 */

void FUN_100a0c438(void)

{
  long unaff_x20;
  
  FUN_100a0bc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_100a30614,
                thunk_FUN_1009fd59c);
  return;
}



/* Address: 0x100a0c460 | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  FUN_100a0c6a0();
  return;
}



/* Address: 0x100a0c464 | thunk_FUN_100a0c6fc */

void thunk_FUN_100a0c6fc(void)

{
  FUN_100a0c6fc();
  return;
}



/* Address: 0x100a0c468 | FUN_100a0c468 */

void FUN_100a0c468(void)

{
  FUN_100a0c5c8(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100a0c474 | FUN_100a0c474 */

void FUN_100a0c474(void)

{
  long unaff_x20;
  
  thunk_FUN_100a1cd44(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100a0c480 | FUN_100a0c480 */

void FUN_100a0c480(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x10) = 4;
  return;
}



/* Address: 0x100a0c4a0 | FUN_100a0c4a0 */

void FUN_100a0c4a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Address: 0x100a0c4ac | FUN_100a0c4ac */

void FUN_100a0c4ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0c4d0 | FUN_100a0c4d0 */

void FUN_100a0c4d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff46e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c669f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c669f0,&DAT_100ee94c0);
  DAT_100ff46e0 = pTVar1;
  return;
}



/* Address: 0x100a0c510 | FUN_100a0c510 */

void FUN_100a0c510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a0c1a0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a0c598 | FUN_100a0c598 */

void FUN_100a0c598(void)

{
  FUN_100a0c5c8(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100a0c5a4 | FUN_100a0c5a4 */

void FUN_100a0c5a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100a0c5c8 | FUN_100a0c5c8 */

void FUN_100a0c5c8(code *param_1)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0c618 | FUN_100a0c618 */

void FUN_100a0c618(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a0c280(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a0c6a0 | FUN_100a0c6a0 */

void FUN_100a0c6a0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100875938(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                (ulong)*(uint7 *)(unaff_x20 + 0x60),*(undefined1 *)(unaff_x20 + 0x67));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0c6fc | FUN_100a0c6fc */

void FUN_100a0c6fc(void)

{
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_30 = *(undefined4 *)(unaff_x20 + 0x60);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x58);
  local_40 = *(undefined8 *)(unaff_x20 + 0x50);
  local_2c = *(undefined2 *)(unaff_x20 + 100);
  local_2a = *(undefined2 *)(unaff_x20 + 0x66);
  (**(code **)(unaff_x20 + 0x30))(&local_40);
  return;
}



/* Address: 0x100a0c74c | thunk_FUN_100a04f28 */

void thunk_FUN_100a04f28(void)

{
  FUN_100a04f28();
  return;
}



/* Address: 0x100a0c750 | thunk_FUN_100a0c4ac */

void thunk_FUN_100a0c4ac(void)

{
  FUN_100a0c4ac();
  return;
}



/* Address: 0x100a0c754 | thunk_FUN_100a0c4ac */

void thunk_FUN_100a0c4ac(void)

{
  FUN_100a0c4ac();
  return;
}



/* Address: 0x100a0c758 | thunk_FUN_100a0c4ac */

void thunk_FUN_100a0c4ac(void)

{
  FUN_100a0c4ac();
  return;
}



/* Address: 0x100a0c75c | thunk_FUN_100a0c4ac */

void thunk_FUN_100a0c4ac(void)

{
  FUN_100a0c4ac();
  return;
}



/* Address: 0x100a0c760 | thunk_FUN_100a0c4ac */

void thunk_FUN_100a0c4ac(void)

{
  FUN_100a0c4ac();
  return;
}



/* Address: 0x100a0c764 | thunk_FUN_100a0c224 */

void thunk_FUN_100a0c224(void)

{
  FUN_100a0c224();
  return;
}



/* Address: 0x100a0c768 | thunk_FUN_100a05608 */

void thunk_FUN_100a05608(void)

{
  thunk_FUN_100a05608();
  return;
}



/* Address: 0x100a0c76c | thunk_FUN_100548b8c */

void thunk_FUN_100548b8c(void)

{
  FUN_100548b8c();
  return;
}



/* Address: 0x100a0c770 | thunk_FUN_100a0c438 */

void thunk_FUN_100a0c438(void)

{
  FUN_100a0c438();
  return;
}



/* Address: 0x100a0c774 | thunk_FUN_100a03430 */

void thunk_FUN_100a03430(void)

{
  FUN_100a03430();
  return;
}



/* Address: 0x100a0c778 | thunk_FUN_100a03404 */

void thunk_FUN_100a03404(void)

{
  FUN_100a03404();
  return;
}



/* Address: 0x100a0c77c | thunk_FUN_100a05240 */

void thunk_FUN_100a05240(void)

{
  thunk_FUN_100a05240();
  return;
}



/* Address: 0x100a0c780 | thunk_FUN_100a03c44 */

void thunk_FUN_100a03c44(void)

{
  FUN_100a03c44();
  return;
}



/* Address: 0x100a0c784 | thunk_FUN_100a0c5a4 */

void thunk_FUN_100a0c5a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100a0c788 | thunk_FUN_100a0bc10 */

void thunk_FUN_100a0bc10(void)

{
  FUN_100a0bc10();
  return;
}



/* Address: 0x100a0c78c | thunk_FUN_100a03c00 */

void thunk_FUN_100a03c00(void)

{
  FUN_100a03c00();
  return;
}



/* Address: 0x100a0c790 | thunk_FUN_100a05428 */

void thunk_FUN_100a05428(void)

{
  thunk_FUN_100a05428();
  return;
}



/* Address: 0x100a0c794 | thunk_FUN_100a054d8 */

void thunk_FUN_100a054d8(void)

{
  thunk_FUN_100a054d8();
  return;
}



/* Address: 0x100a0c798 | thunk_FUN_100a055b4 */

void thunk_FUN_100a055b4(void)

{
  thunk_FUN_100a055b4();
  return;
}



/* Address: 0x100a0c79c | thunk_FUN_100a05654 */

void thunk_FUN_100a05654(void)

{
  thunk_FUN_100a05654();
  return;
}



/* Address: 0x100a0c7a0 | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  thunk_FUN_100a0c6a0();
  return;
}



/* Address: 0x100a0c7a4 | thunk_FUN_100a0c6fc */

void thunk_FUN_100a0c6fc(void)

{
  FUN_100a0c6fc();
  return;
}



/* Address: 0x100a0c7a8 | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  thunk_FUN_100a0c6a0();
  return;
}


