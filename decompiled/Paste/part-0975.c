/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a6d3c8 | FUN_100a6d3c8 */

void FUN_100a6d3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char local_28;
  undefined8 *puVar3;
  
  puVar4 = &local_c0;
  uVar1 = 0x1ed;
  if ((param_5 & 0xff0000) != 0x10000) {
    uVar1 = param_5;
  }
  FUN_100a79ba8(&local_70,param_3,param_4,uVar1,param_6);
  if (local_28 == '\x01') {
    uStack_98 = uStack_48;
    local_a0 = local_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    local_80 = local_30;
    uStack_b8 = uStack_68;
    local_c0 = local_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar3 = (undefined8 *)CONCAT71(extraout_var,bVar2);
    if ((bVar2 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_c0,&DAT_100f2de38,puVar3);
      puVar3 = puVar4;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    puVar3[5] = uStack_48;
    puVar3[4] = local_50;
    puVar3[7] = uStack_38;
    puVar3[6] = uStack_40;
    puVar3[8] = local_30;
    puVar3[1] = uStack_68;
    *puVar3 = local_70;
    puVar3[3] = uStack_58;
    puVar3[2] = uStack_60;
  }
  return;
}



/* Address: 0x100a6d4a8 | FUN_100a6d4a8 */

void FUN_100a6d4a8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  _swift_task_switch(FUN_100a6d4c4,0,0);
  return;
}



/* Address: 0x100a6d4c4 | FUN_100a6d4c4 */

void FUN_100a6d4c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x22;
  long *plVar5;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = &DAT_100f2d508;
  _swift_allocObject(&DAT_100f2d508,0x28,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  plVar5 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a6cfa4;
  FUN_100912dec(plVar5,unaff_x22 + 0x10,FUN_100a7394c,puVar4,&DAT_100ee4790);
  return;
}



/* Address: 0x100a6d580 | FUN_100a6d580 */

void FUN_100a6d580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 *puVar2;
  
  FUN_100a7a828(&local_80,param_4);
  if (local_38 == '\x01') {
    local_c8 = local_80;
    uStack_b8 = uStack_70;
    local_c0 = local_78;
    uStack_a8 = uStack_60;
    uStack_b0 = local_68;
    uStack_98 = uStack_50;
    local_a0 = local_58;
    uStack_88 = uStack_40;
    uStack_90 = local_48;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      puVar3 = &local_c8;
      _swift_willThrowTypedImpl(puVar3,&DAT_100f2de38,puVar2);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    *puVar3 = local_80;
    puVar3[2] = uStack_70;
    puVar3[1] = local_78;
    puVar3[4] = uStack_60;
    puVar3[3] = local_68;
    puVar3[6] = uStack_50;
    puVar3[5] = local_58;
    puVar3[8] = uStack_40;
    puVar3[7] = local_48;
  }
  else {
    *param_1 = local_80;
  }
  return;
}



/* Address: 0x100a6d674 | FUN_100a6d674 */

void FUN_100a6d674(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x119) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined1 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  _swift_task_switch(FUN_100a6d698,0,0);
  return;
}



/* Address: 0x100a6d698 | FUN_100a6d698 */

void FUN_100a6d698(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x119);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar5 = &DAT_100f2d530;
  _swift_allocObject(&DAT_100f2d530,0x29,7);
  *(undefined **)(unaff_x22 + 0x100) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = uVar4;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  puVar6 = &DAT_100ff6dc0;
  FUN_1000f7830(&DAT_100ff6dc0,&DAT_100c91ce8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6d774;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7396c,puVar5,puVar6);
  return;
}



/* Address: 0x100a6d774 | FUN_100a6d774 */

void FUN_100a6d774(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  _swift_release(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a6d7e0;
  }
  else {
    pcVar1 = FUN_100a6d830;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6d7e0 | FUN_100a6d7e0 */

void FUN_100a6d7e0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
  puVar1[0x19] = uVar7;
  puVar1[0x18] = uVar6;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100a6d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6d830 | FUN_100a6d830 */

void FUN_100a6d830(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6d838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6d83c | FUN_100a6d83c */

void FUN_100a6d83c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
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
  undefined8 local_220;
  undefined8 uStack_20f;
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
  undefined8 uStack_12f;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_4f;
  undefined8 *puVar4;
  
  puVar5 = &local_330;
  FUN_100a79624(&local_200,param_4,param_5);
  uStack_78 = uStack_158;
  local_80 = local_160;
  uStack_68 = uStack_148;
  uStack_70 = uStack_150;
  local_60 = local_140;
  uStack_4f = uStack_12f;
  uStack_b8 = uStack_198;
  local_c0 = local_1a0;
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_98 = uStack_178;
  local_a0 = local_180;
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  uStack_f8 = uStack_1d8;
  local_100 = local_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  local_e0 = local_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  uStack_108 = uStack_1e8;
  uStack_110 = uStack_1f0;
  iVar2 = (int)&local_120;
  FUN_100a7bec0();
  if (iVar2 == 1) {
    FUN_100004520(&local_120);
    uStack_238 = uStack_158;
    local_240 = local_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    local_220 = local_140;
    uStack_20f = uStack_12f;
    uStack_278 = uStack_198;
    local_280 = local_1a0;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_258 = uStack_178;
    local_260 = local_180;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_2b8 = uStack_1d8;
    local_2c0 = local_1e0;
    uStack_2a8 = uStack_1c8;
    uStack_2b0 = uStack_1d0;
    uStack_298 = uStack_1b8;
    local_2a0 = local_1c0;
    uStack_288 = uStack_1a8;
    uStack_290 = uStack_1b0;
    uStack_2d8 = uStack_1f8;
    local_2e0 = local_200;
    uStack_2c8 = uStack_1e8;
    uStack_2d0 = uStack_1f0;
    puVar3 = &local_2e0;
    FUN_100004520();
    uStack_328 = puVar3[1];
    local_330 = *puVar3;
    uStack_318 = puVar3[3];
    local_320 = puVar3[2];
    uStack_308 = puVar3[5];
    local_310 = puVar3[4];
    uStack_2f8 = puVar3[7];
    uStack_300 = puVar3[6];
    local_2f0 = puVar3[8];
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_330,&DAT_100f2de38,puVar4);
      puVar4 = puVar5;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar4,0,0);
    uVar6 = *puVar3;
    puVar4[1] = puVar3[1];
    *puVar4 = uVar6;
    uVar9 = puVar3[5];
    uVar8 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    uVar11 = puVar3[3];
    uVar10 = puVar3[2];
    puVar4[8] = puVar3[8];
    puVar4[5] = uVar9;
    puVar4[4] = uVar8;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
  }
  else {
    FUN_100004520(&local_120);
    uStack_238 = uStack_158;
    local_240 = local_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    local_220 = local_140;
    uStack_20f = uStack_12f;
    uStack_278 = uStack_198;
    local_280 = local_1a0;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_258 = uStack_178;
    local_260 = local_180;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_2b8 = uStack_1d8;
    local_2c0 = local_1e0;
    uStack_2a8 = uStack_1c8;
    uStack_2b0 = uStack_1d0;
    uStack_298 = uStack_1b8;
    local_2a0 = local_1c0;
    uStack_288 = uStack_1a8;
    uStack_290 = uStack_1b0;
    uStack_2d8 = uStack_1f8;
    local_2e0 = local_200;
    uStack_2c8 = uStack_1e8;
    uStack_2d0 = uStack_1f0;
    puVar5 = &local_2e0;
    FUN_100004520();
    uVar6 = puVar5[0x14];
    uVar8 = puVar5[0x17];
    uVar7 = puVar5[0x16];
    param_1[0x15] = puVar5[0x15];
    param_1[0x14] = uVar6;
    param_1[0x17] = uVar8;
    param_1[0x16] = uVar7;
    uVar6 = puVar5[0x18];
    param_1[0x19] = puVar5[0x19];
    param_1[0x18] = uVar6;
    param_1[0x1a] = puVar5[0x1a];
    uVar6 = puVar5[0xc];
    uVar8 = puVar5[0xf];
    uVar7 = puVar5[0xe];
    param_1[0xd] = puVar5[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar8;
    param_1[0xe] = uVar7;
    uVar6 = puVar5[0x10];
    uVar8 = puVar5[0x13];
    uVar7 = puVar5[0x12];
    param_1[0x11] = puVar5[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar7;
    uVar6 = puVar5[4];
    uVar8 = puVar5[7];
    uVar7 = puVar5[6];
    param_1[5] = puVar5[5];
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    uVar6 = puVar5[8];
    uVar8 = puVar5[0xb];
    uVar7 = puVar5[10];
    param_1[9] = puVar5[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
    uVar6 = *puVar5;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    param_1[1] = puVar5[1];
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
  }
  return;
}



/* Address: 0x100a6da64 | FUN_100a6da64 */

void FUN_100a6da64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x41a) = param_11;
  *(undefined8 *)(unaff_x22 + 0x3a8) = param_10;
  *(undefined8 *)(unaff_x22 + 0x3a0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x398) = param_8;
  *(undefined8 *)(unaff_x22 + 0x390) = param_7;
  *(undefined8 *)(unaff_x22 + 0x388) = param_6;
  *(undefined1 *)(unaff_x22 + 0x419) = param_5;
  *(undefined1 *)(unaff_x22 + 0x418) = param_4;
  *(undefined8 *)(unaff_x22 + 0x380) = param_3;
  *(undefined8 *)(unaff_x22 + 0x378) = param_2;
  *(undefined8 *)(unaff_x22 + 0x370) = param_1;
  _swift_task_switch(FUN_100a6dab0,0,0);
  return;
}



/* Address: 0x100a6dab0 | FUN_100a6dab0 */

void FUN_100a6dab0(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long *plVar6;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x41a);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
  puVar2 = &DAT_100f2d558;
  _swift_allocObject(&DAT_100f2d558,0x29,7);
  *(undefined **)(unaff_x22 + 0x3b0) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  puVar2[0x18] = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  puVar2[0x28] = 1;
  plVar6 = (long *)0xa0;
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3b8) = plVar6;
  puVar3 = &DAT_100ff6dc0;
  FUN_1000f7830(&DAT_100ff6dc0,&DAT_100c91ce8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a6db88;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c36c,puVar2,puVar3);
  return;
}



/* Address: 0x100a6db88 | FUN_100a6db88 */

void FUN_100a6db88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3b8));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x3b0));
    pcVar1 = FUN_100a6dbfc;
  }
  else {
    _swift_release(*(undefined8 *)(lVar2 + 0x3b0));
    pcVar1 = FUN_100a6de68;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6dbfc | FUN_100a6dbfc */

void FUN_100a6dbfc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  char *pcVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  iVar3 = (int)unaff_x22 + 0xe8;
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x179);
  *(undefined1 *)(unaff_x22 + 0x41b) = uVar1;
  FUN_1006c09cc();
  if (iVar3 == 1) {
    pcVar9 = *(char **)(unaff_x22 + 0x370);
    Swift::_StringGuts::grow(0x27,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1005b32e4();
    SVar16.bridgeObject = param_2.unknown;
    SVar16.str = pcVar9;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar16,SVar18);
    _swift_bridgeObjectRelease(param_2.unknown);
    SVar17.bridgeObject = (void *)0x8000000100db89f0;
    SVar17.str = (char *)0xd000000000000015;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar17,SVar19);
    *(undefined1 *)(unaff_x22 + 0x208) = 5;
    *(undefined8 *)(unaff_x22 + 0x210) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x218) = 0x8000000100db89d0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000050;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100db8a10;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100db8a70;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x166;
    *(undefined1 *)(unaff_x22 + 0x1c0) = 5;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100db89d0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0xd000000000000050;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x8000000100db8a10;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0x8000000100db8a70;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x166;
    FUN_100a50050((undefined8 *)(unaff_x22 + 0x208),unaff_x22 + 0x250);
    puVar4 = (undefined8 *)(unaff_x22 + 0x1c0);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar4,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x208);
    puVar4[1] = *(undefined8 *)(unaff_x22 + 0x210);
    *puVar4 = uVar10;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
    puVar4[8] = *(undefined8 *)(unaff_x22 + 0x248);
    puVar4[5] = uVar13;
    puVar4[4] = uVar12;
    puVar4[7] = uVar11;
    puVar4[6] = uVar10;
    puVar4[3] = uVar15;
    puVar4[2] = uVar14;
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a6ddd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar5 = *(undefined **)(unaff_x22 + 0x370);
  _swift_bridgeObjectRetain();
  FUN_1005ad054();
  puVar6 = puVar5;
  FUN_1005ac824();
  _swift_bridgeObjectRelease(puVar5);
  if (param_2.unknown != puVar6) {
    piVar8 = *(int **)(unaff_x22 + 0x398);
    iVar3 = *piVar8;
    plVar7 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3c8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a6de74;
                    /* WARNING: Could not recover jumptable at 0x000100a6de60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar3 + (long)piVar8))
              (*(undefined8 *)(unaff_x22 + 0x370),uVar1,*(undefined8 *)(unaff_x22 + 0x378));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6de68);
  (*pcVar2)();
}



/* Address: 0x100a6de68 | FUN_100a6de68 */

void FUN_100a6de68(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6de74 | FUN_100a6de74 */

void FUN_100a6de74(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x41c) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x3c8));
  _swift_task_switch(FUN_100a6decc,0,0);
  return;
}



/* Address: 0x100a6decc | FUN_100a6decc */

void FUN_100a6decc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long unaff_x22;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  if (*(char *)(unaff_x22 + 0x41c) != '\x01') {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100a6dfb8:
                    /* WARNING: Could not recover jumptable at 0x000100a6dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  cVar1 = *(char *)(unaff_x22 + 0x41b);
  if (cVar1 == '\x05') {
    uVar2 = *(undefined1 *)(unaff_x22 + 0x41a);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x419);
    puVar4 = &DAT_100f2d5a8;
    _swift_allocObject(&DAT_100f2d5a8,0x31,7);
    *(undefined **)(unaff_x22 + 1000) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    puVar4[0x18] = uVar2;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(puVar4 + 0x20) = uVar12;
    puVar4[0x30] = uVar3;
    plVar11 = (long *)0xa0;
    _swift_retain(uVar8);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3f0) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a6e3ac;
  }
  else {
    if (cVar1 == '\x04') {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x398);
      cVar1 = *(char *)(unaff_x22 + 0x418);
      puVar4 = &DAT_100f2d580;
      _swift_allocObject(&DAT_100f2d580,0x20,7);
      *(undefined **)(unaff_x22 + 0x400) = puVar4;
      *(undefined8 *)(puVar4 + 0x10) = uVar9;
      *(undefined8 *)(puVar4 + 0x18) = uVar8;
      _swift_retain(uVar8);
      if (cVar1 == '\x01') {
        plVar11 = (long *)0x290;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x408) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_100a6e424;
        FUN_100a75c78(*(undefined8 *)(unaff_x22 + 0x370),*(undefined8 *)(unaff_x22 + 0x378),
                      *(undefined8 *)(unaff_x22 + 0x388),*(undefined8 *)(unaff_x22 + 0x390),
                      &DAT_100c91d00,puVar4,*(undefined8 *)(unaff_x22 + 0x3a8),
                      *(undefined1 *)(unaff_x22 + 0x41a));
        return;
      }
      lVar7 = *(long *)(unaff_x22 + 0x380);
      plVar11 = (long *)0x420;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x410) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a6e470;
      FUN_100a97920(*(undefined8 *)(unaff_x22 + 0x370),*(undefined8 *)(unaff_x22 + 0x378),lVar7 / 2,
                    *(undefined8 *)(unaff_x22 + 0x388),*(undefined8 *)(unaff_x22 + 0x390),
                    &DAT_100c91d00,puVar4,*(undefined8 *)(unaff_x22 + 0x3a8),
                    *(undefined1 *)(unaff_x22 + 0x41a));
      return;
    }
    if (cVar1 != '\0') {
      pcVar10 = *(char **)(unaff_x22 + 0x370);
      Swift::_StringGuts::grow(0x5f,param_2);
      pvVar6 = (void *)0xec00000027207970;
      SVar16.bridgeObject = (void *)0xec00000027207970;
      SVar16.str = (char *)0x6f632074276e6143;
      SVar20.bridgeObject = param_4;
      SVar20.str = param_3;
      Swift::String::append(SVar16,SVar20);
      FUN_1005b32e4();
      SVar17.bridgeObject = pvVar6;
      SVar17.str = pcVar10;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar17,SVar21);
      _swift_bridgeObjectRelease(pvVar6);
      SVar18.bridgeObject = (void *)0xeb00000000272065;
      SVar18.str = (char *)0x70797420666f2027;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar18,SVar22);
      FUN_100a6c3b8(cVar1);
      SVar19.bridgeObject = (void *)0x8000000100db8a90;
      SVar19.str = (char *)0xd000000000000044;
      SVar23.bridgeObject = param_4;
      SVar23.str = param_3;
      Swift::String::append(SVar19,SVar23);
      *(undefined1 *)(unaff_x22 + 0x2e0) = 9;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0xe000000000000000;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
      *(undefined8 *)(unaff_x22 + 0x300) = 0xd000000000000050;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x8000000100db8a10;
      *(undefined8 *)(unaff_x22 + 0x310) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 800) = 0x186;
      *(undefined1 *)(unaff_x22 + 0x298) = 9;
      *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2a8) = 0xe000000000000000;
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000050;
      *(undefined8 *)(unaff_x22 + 0x2b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100db8a10;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x2d0) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0x186;
      FUN_100a50050(unaff_x22 + 0x2e0,unaff_x22 + 0x328);
      puVar5 = (undefined8 *)(unaff_x22 + 0x298);
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar5,0,0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x2e0);
      puVar5[1] = *(undefined8 *)(unaff_x22 + 0x2e8);
      *puVar5 = uVar8;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x308);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x300);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x310);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x2f8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x2f0);
      puVar5[8] = *(undefined8 *)(unaff_x22 + 800);
      puVar5[5] = uVar13;
      puVar5[4] = uVar12;
      puVar5[7] = uVar9;
      puVar5[6] = uVar8;
      puVar5[3] = uVar15;
      puVar5[2] = uVar14;
      _swift_willThrow();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100a6dfb8;
    }
    uVar2 = *(undefined1 *)(unaff_x22 + 0x41a);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x419);
    puVar4 = &DAT_100f2d5d0;
    _swift_allocObject(&DAT_100f2d5d0,0x31,7);
    *(undefined **)(unaff_x22 + 0x3d0) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    puVar4[0x18] = uVar2;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(puVar4 + 0x20) = uVar12;
    puVar4[0x30] = uVar3;
    plVar11 = (long *)0xa0;
    _swift_retain(uVar8);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3d8) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a6e334;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a6e334 | FUN_100a6e334 */

void FUN_100a6e334(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3d8));
  _swift_release(*(undefined8 *)(lVar2 + 0x3d0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_100a6e3a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6e3a0 | FUN_100a6e3a0 */

void FUN_100a6e3a0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6e3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6e3ac | FUN_100a6e3ac */

void FUN_100a6e3ac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3f0));
  _swift_release(*(undefined8 *)(lVar2 + 1000));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_100a6e418;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6e418 | FUN_100a6e418 */

void FUN_100a6e418(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6e420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6e424 | FUN_100a6e424 */

void FUN_100a6e424(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x408));
  _swift_release(*(undefined8 *)(lVar1 + 0x400));
                    /* WARNING: Could not recover jumptable at 0x000100a6e46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a6e470 | FUN_100a6e470 */

void FUN_100a6e470(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x410));
  _swift_release(*(undefined8 *)(lVar1 + 0x400));
                    /* WARNING: Could not recover jumptable at 0x000100a6e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a6e4bc | FUN_100a6e4bc */

void FUN_100a6e4bc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6e4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Address: 0x100a6e4c8 | FUN_100a6e4c8 */

void FUN_100a6e4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10072a740;
                    /* WARNING: Could not recover jumptable at 0x000100a6e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(param_1,param_2,param_3);
  return;
}



/* Address: 0x100a6e548 | FUN_100a6e548 */

void FUN_100a6e548(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined1 *)(unaff_x22 + 0x1c7) = param_6;
  *(undefined8 *)(unaff_x22 + 0x170) = param_2;
  *(undefined8 *)(unaff_x22 + 0x178) = param_5;
  *(undefined1 *)(unaff_x22 + 0x1c6) = param_4;
  *(undefined1 *)(unaff_x22 + 0x1c5) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = param_1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a6e5c4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6e5c4 | FUN_100a6e5c4 */

void FUN_100a6e5c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  puVar1 = &DAT_100f2d5f8;
  _swift_allocObject(&DAT_100f2d5f8,0x18,7);
  *(undefined **)(unaff_x22 + 0x180) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x188) = plVar4;
  puVar2 = &DAT_100ff6dc8;
  FUN_1000f7830(&DAT_100ff6dc8,&DAT_100c91d18);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a6e6a8;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
    FUN_100912dec(unaff_x22 + 0x1c0,FUN_100a792b4,puVar1,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6e6a8 | FUN_100a6e6a8 */

void FUN_100a6e6a8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x180);
  *(long *)(lVar4 + 400) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x188));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_100a6e75c;
    pcVar2 = FUN_100a6e760;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_100a6e75c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar2 = FUN_100a6ed88;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6e760 | FUN_100a6e760 */

void FUN_100a6e760(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x22 + 0x1c4) == '\x01') {
    uVar1 = *(uint *)(unaff_x22 + 0x1c0);
    puVar4 = (undefined8 *)(ulong)uVar1;
    if (uVar1 != 2) {
      if (uVar1 == 0x42) {
        if (*(char *)(unaff_x22 + 0x1c6) == '\x01') {
          if (*(char *)(unaff_x22 + 0x1c5) == '\x01') {
            plVar5 = (long *)0xb0;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x198) = plVar5;
            *plVar5 = unaff_x22;
            plVar5[1] = (long)FUN_100a6eb58;
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
              FUN_100a6ee68(*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x178),
                            *(undefined1 *)(unaff_x22 + 0x1c7));
              return;
            }
          }
          else {
            lVar12 = *(long *)(unaff_x22 + 0x170);
            puVar4 = (undefined8 *)0x0;
            FUN_100a947d0();
            _swift_allocObject();
            *(undefined8 **)(unaff_x22 + 0x1a0) = puVar4;
            if (lVar12 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6eb50);
              (*pcVar2)();
            }
            puVar6 = puVar4;
            FUN_1006883ac();
            uVar11 = *puVar6;
            puVar7 = &DAT_100ff6dd0;
            FUN_1000f7830(&DAT_100ff6dd0,&DAT_100c91d20);
            _swift_allocObject();
            *(long *)(puVar7 + 0x10) = lVar12;
            *(undefined8 *)(puVar7 + 0x18) = uVar11;
            *(undefined8 *)(unaff_x22 + 0x158) = 0;
            *(undefined8 *)(unaff_x22 + 0x160) = 0;
            _swift_retain_n(uVar11,2);
            _pthread_mutexattr_init((pthread_mutexattr_t *)(unaff_x22 + 0x158));
            iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x20),
                                        (pthread_mutexattr_t *)(unaff_x22 + 0x158));
            if (iVar3 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6eb54);
              (*pcVar2)();
            }
            _swift_release(uVar11);
            puVar4[2] = puVar7;
            plVar5 = (long *)0x2b0;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x1a8) = plVar5;
            *plVar5 = unaff_x22;
            plVar5[1] = (long)FUN_100a6ebfc;
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
              FUN_100aa2ed0(*(undefined8 *)(unaff_x22 + 0x168),puVar4,
                            *(undefined8 *)(unaff_x22 + 0x178),*(undefined1 *)(unaff_x22 + 0x1c7));
              return;
            }
          }
          goto LAB_100a6eb54;
        }
        pcVar10 = *(char **)(unaff_x22 + 0x168);
        Swift::_StringGuts::grow(0xd2,param_2);
        pvVar8 = (void *)0x8000000100db8b10;
        SVar19.bridgeObject = (void *)0x8000000100db8b10;
        SVar19.str = (char *)0xd000000000000020;
        SVar22.bridgeObject = param_4;
        SVar22.str = param_3;
        Swift::String::append(SVar19,SVar22);
        FUN_1005b32e4();
        SVar20.bridgeObject = pvVar8;
        SVar20.str = pcVar10;
        SVar23.bridgeObject = param_4;
        SVar23.str = param_3;
        Swift::String::append(SVar20,SVar23);
        _swift_bridgeObjectRelease(pvVar8);
        SVar21.bridgeObject = (void *)0x8000000100db8b40;
        SVar21.str = (char *)0xd0000000000000b0;
        SVar24.bridgeObject = param_4;
        SVar24.str = param_3;
        Swift::String::append(SVar21,SVar24);
        *(undefined1 *)(unaff_x22 + 0xa0) = 4;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0xe000000000000000;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0;
        *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8ae0;
        *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0x1c4;
        *(undefined1 *)(unaff_x22 + 0x58) = 4;
        *(undefined8 *)(unaff_x22 + 0x60) = 0;
        *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x70) = 0;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8ae0;
        *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
        *(undefined8 *)(unaff_x22 + 0x98) = 0x1c4;
        FUN_100a50050(unaff_x22 + 0xa0,unaff_x22 + 0xe8);
        puVar4 = (undefined8 *)(unaff_x22 + 0x58);
        FUN_100a5008c();
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar4,0,0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
        puVar4[1] = *(undefined8 *)(unaff_x22 + 0xa8);
        *puVar4 = uVar11;
        uVar16 = *(undefined8 *)(unaff_x22 + 200);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x130) = 0xd000000000000024;
        *(undefined8 *)(unaff_x22 + 0x138) = 0x8000000100db8ae0;
        *(undefined8 *)(unaff_x22 + 0x140) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x148) = 0x8000000100db8a70;
        *(undefined8 *)(unaff_x22 + 0x150) = 0x1d0;
        FUN_100a7f4e4(unaff_x22 + 0x10,puVar4,*(undefined8 *)(unaff_x22 + 0x168),unaff_x22 + 0x130);
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar4,0,0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
        puVar4[1] = *(undefined8 *)(unaff_x22 + 0x18);
        *puVar4 = uVar11;
        uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
      }
      puVar4[8] = uVar11;
      puVar4[5] = uVar16;
      puVar4[4] = uVar15;
      puVar4[7] = uVar14;
      puVar4[6] = uVar13;
      puVar4[3] = uVar18;
      puVar4[2] = uVar17;
      _swift_willThrow();
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a6ea58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      goto LAB_100a6eb54;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100a6e86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar11);
    return;
  }
LAB_100a6eb54:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6eb58 | FUN_100a6eb58 */

void FUN_100a6eb58(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x198));
  if (unaff_x20 == 0) {
    lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar2 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000100a6ebf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100a6ebfc | FUN_100a6ebfc */

void FUN_100a6ebfc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x1b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x1b8) = param_1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a6ecb0;
    pcVar1 = FUN_100a6ecb4;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a6ecb0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a6ed20;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6ecb4 | FUN_100a6ecb4 */

void FUN_100a6ecb4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a6ed18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(undefined8 *)(unaff_x22 + 0x1b8));
}



/* Address: 0x100a6ed20 | FUN_100a6ed20 */

void FUN_100a6ed20(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a6ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6ed88 | FUN_100a6ed88 */

void FUN_100a6ed88(void)

{
  long unaff_x22;
  
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
                    /* WARNING: Could not recover jumptable at 0x000100a6ede0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6ede8 | FUN_100a6ede8 */

void FUN_100a6ede8(__int32 *param_1,undefined8 param_2)

{
  __int32 _Var1;
  Darwin *unaff_x21;
  int local_24;
  
  Darwin::set_errno(unaff_x21,0);
  FUN_1005b32d0(&local_24,FUN_100aa7794,0,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (local_24 == -1) {
    _Var1 = Darwin::get_errno();
    *param_1 = _Var1;
  }
  *(bool *)(param_1 + 1) = local_24 == -1;
  return;
}



/* Address: 0x100a6ee68 | FUN_100a6ee68 */

void FUN_100a6ee68(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x29) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_100a6ee84,0,0);
  return;
}



/* Address: 0x100a6ee84 | FUN_100a6ee84 */

void FUN_100a6ee84(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(unaff_x22 + 0x29);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a6ef10;
  FUN_100a97390(*(undefined8 *)(unaff_x22 + 0x38),1,&DAT_100c91f88,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined1 *)(unaff_x22 + 0x29));
  return;
}



/* Address: 0x100a6ef10 | FUN_100a6ef10 */

void FUN_100a6ef10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a6ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  _swift_task_switch(FUN_100a6ef94,0,0);
  return;
}



/* Address: 0x100a6ef94 | FUN_100a6ef94 */

void FUN_100a6ef94(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(long *)(unaff_x22 + 0x60) = lVar4;
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar3 = &DAT_100f2db80;
    _swift_allocObject(&DAT_100f2db80,0x40,7);
    *(undefined **)(unaff_x22 + 0x98) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    *(undefined8 *)(puVar3 + 0x18) = 0xd00000000000001b;
    *(undefined8 *)(puVar3 + 0x20) = 0x8000000100db8e70;
    *(undefined8 *)(puVar3 + 0x28) = 0xd00000000000001f;
    *(undefined8 *)(puVar3 + 0x30) = 0x8000000100db8a70;
    *(undefined8 *)(puVar3 + 0x38) = 0x1f2;
    plVar5 = (long *)0xa0;
    _swift_bridgeObjectRetain(uVar6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a6f2dc;
    FUN_100912dec(plVar5,unaff_x22 + 0x30,FUN_100a7c490,puVar3,
                  PTR___type_metadata_for_Swift_Int_100eac6f8);
    return;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
    plVar5 = (long *)0xb0;
    _swift_bridgeObjectRetain(uVar6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a6f0e8;
    FUN_100a6ee68(uVar6,*(undefined8 *)(unaff_x22 + 0x40),*(undefined1 *)(unaff_x22 + 0x29));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6f0e8);
  (*pcVar2)();
}



/* Address: 0x100a6f0e8 | FUN_100a6f0e8 */

void FUN_100a6f0e8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    pcVar1 = FUN_100a6f164;
  }
  else {
    pcVar1 = FUN_100a6f3d4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6f164 | FUN_100a6f164 */

void FUN_100a6f164(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  if (SCARRY8(*(long *)(unaff_x22 + 0x68),*(long *)(unaff_x22 + 0x90))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6f2d8);
    (*pcVar2)();
  }
  uVar1 = *(long *)(unaff_x22 + 0x70) + 1;
  *(long *)(unaff_x22 + 0x68) = *(long *)(unaff_x22 + 0x68) + *(long *)(unaff_x22 + 0x90);
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  if (uVar1 == *(ulong *)(unaff_x22 + 0x60)) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar3 = &DAT_100f2db80;
    _swift_allocObject(&DAT_100f2db80,0x40,7);
    *(undefined **)(unaff_x22 + 0x98) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = 0xd00000000000001b;
    *(undefined8 *)(puVar3 + 0x20) = 0x8000000100db8e70;
    *(undefined8 *)(puVar3 + 0x28) = 0xd00000000000001f;
    *(undefined8 *)(puVar3 + 0x30) = 0x8000000100db8a70;
    *(undefined8 *)(puVar3 + 0x38) = 0x1f2;
    plVar5 = (long *)0xa0;
    _swift_bridgeObjectRetain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a6f2dc;
    FUN_100912dec(plVar5,unaff_x22 + 0x30,FUN_100a7c490,puVar3,
                  PTR___type_metadata_for_Swift_Int_100eac6f8);
    return;
  }
  if (uVar1 < *(ulong *)(*(long *)(unaff_x22 + 0x50) + 0x10)) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + uVar1 * 8 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
    plVar5 = (long *)0xb0;
    _swift_bridgeObjectRetain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a6f0e8;
    FUN_100a6ee68(uVar4,*(undefined8 *)(unaff_x22 + 0x40),*(undefined1 *)(unaff_x22 + 0x29));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6f2dc);
  (*pcVar2)();
}



/* Address: 0x100a6f2dc | FUN_100a6f2dc */

void FUN_100a6f2dc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a6f348;
  }
  else {
    pcVar2 = FUN_100a6f398;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6f348 | FUN_100a6f348 */

void FUN_100a6f348(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x50));
  if (!SCARRY8(lVar3,lVar2)) {
                    /* WARNING: Could not recover jumptable at 0x000100a6f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar3 + lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6f398);
  (*pcVar1)();
}



/* Address: 0x100a6f398 | FUN_100a6f398 */

void FUN_100a6f398(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100a6f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6f3d4 | FUN_100a6f3d4 */

void FUN_100a6f3d4(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100a6f40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6f410 | FUN_100a6f410 */

void FUN_100a6f410(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = *param_2;
  _swift_task_switch(FUN_100a6f430,0,0);
  return;
}



/* Address: 0x100a6f430 | FUN_100a6f430 */

void FUN_100a6f430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Optional OVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_retain(uVar4);
  uVar9 = 0;
  FUN_100a578f0();
  FUN_100a54424(unaff_x22 + 0x10);
  FUN_10026569c(uVar4,uVar9,param_3);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  lVar10 = *(long *)(unaff_x22 + 0x10);
  *(undefined **)(unaff_x22 + 200) = puVar1;
  *(long *)(unaff_x22 + 0xd0) = lVar10;
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    *(long *)(unaff_x22 + 0x40) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10007d048((long *)(unaff_x22 + 0x40),uVar4);
    uVar5 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar9,uVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
    OVar2 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x118) = CONCAT71(extraout_var,OVar2.value);
    lVar10 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
    *(long *)(unaff_x22 + 0x120) = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x128) = uVar6;
    plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x130) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a6fc5c;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar7;
    FUN_1000f7830(&DAT_100ff6d68,&DAT_100c919c0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a6f670;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar8 = FUN_100a6ab5c;
  _swift_task_addCancellationHandler(FUN_100a6ab5c,uVar4);
  *(code **)(unaff_x22 + 0xe0) = pcVar8;
  plVar7 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6f6dc;
  FUN_100a68b38(uVar4);
  return;
}



/* Address: 0x100a6f670 | FUN_100a6f670 */

void FUN_100a6f670(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(lVar2 + 0x98);
    pcVar1 = FUN_100a6f7e8;
  }
  else {
    *(long *)(lVar2 + 0x108) = unaff_x20;
    pcVar1 = FUN_100a6fc0c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6f6dc | FUN_100a6f6dc */

void FUN_100a6f6dc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xf8) = param_1;
    pcVar1 = FUN_100a6f750;
  }
  else {
    pcVar1 = FUN_100a6f79c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6f750 | FUN_100a6f750 */

void FUN_100a6f750(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0xe0));
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_task_switch(FUN_100a6f7e8,0,0);
  return;
}



/* Address: 0x100a6f79c | FUN_100a6f79c */

void FUN_100a6f79c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0xe0));
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xf0);
  _swift_task_switch(FUN_100a6fc0c,0,0);
  return;
}



/* Address: 0x100a6f7e8 | FUN_100a6f7e8 */

void FUN_100a6f7e8(void)

{
  char cVar1;
  code *pcVar2;
  Optional OVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined1 *)(unaff_x22 + 0x38) = 0;
  lVar5 = *(long *)(unaff_x22 + 0x100);
  *(long *)(unaff_x22 + 0x140) = lVar5;
  if (lVar5 == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    puVar13 = *(undefined8 **)(unaff_x22 + 0xa0);
    FUN_100a7b570((undefined8 *)(unaff_x22 + 0x10));
    *puVar13 = uVar14;
    puVar13[1] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x000100a6f93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  *(long *)(unaff_x22 + 0x148) = lVar5;
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    uVar10 = 0;
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar7 = *(ulong *)(unaff_x22 + 200);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
    do {
      *(ulong *)(unaff_x22 + 0x158) = uVar10;
      *(ulong *)(unaff_x22 + 0x160) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x150) = uVar14;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x140) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6fc0c);
        (*pcVar2)();
      }
      lVar5 = *(long *)(unaff_x22 + 0x140) + uVar10 * 0x10;
      uVar11 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x168) = uVar11;
      cVar1 = *(char *)(lVar5 + 0x28);
      _swift_bridgeObjectRetain_n(uVar11,2);
      if (cVar1 != '\x04') {
        puVar8 = &DAT_100f2dba8;
        _swift_allocObject(&DAT_100f2dba8,0x40,7);
        *(undefined **)(unaff_x22 + 0x170) = puVar8;
        *(undefined8 *)(puVar8 + 0x10) = uVar11;
        *(undefined8 *)(puVar8 + 0x18) = 0xd00000000000001b;
        *(undefined8 *)(puVar8 + 0x20) = 0x8000000100db8e70;
        *(undefined8 *)(puVar8 + 0x28) = 0xd00000000000001f;
        *(undefined8 *)(puVar8 + 0x30) = 0x8000000100db8a70;
        *(undefined8 *)(puVar8 + 0x38) = 0x1e5;
        plVar9 = (long *)0xa0;
        _swift_bridgeObjectRetain(uVar11);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x178) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_100a70214;
        FUN_100912dec(plVar9,unaff_x22 + 0x90,FUN_100a7c490,puVar8,
                      PTR___type_metadata_for_Swift_Int_100eac6f8);
        return;
      }
      uVar10 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar7;
      if ((uVar10 & 1) == 0) {
        uVar6 = 0;
        FUN_100aa7a78(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar10 = *(ulong *)(uVar6 + 0x10);
      uVar7 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_100aa7a78(uVar7,uVar10 + 1,1,uVar6);
      }
      *(ulong *)(uVar7 + 0x10) = uVar10 + 1;
      *(undefined8 *)(uVar7 + uVar10 * 8 + 0x20) = uVar11;
      _swift_bridgeObjectRelease(uVar11);
      uVar10 = *(long *)(unaff_x22 + 0x158) + 1;
    } while (uVar10 != *(ulong *)(unaff_x22 + 0x148));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x140));
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
    *(ulong *)(unaff_x22 + 200) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar14;
  }
  lVar5 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    *(long *)(unaff_x22 + 0x40) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10007d048((long *)(unaff_x22 + 0x40),uVar12);
    uVar11 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar14,uVar12,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 0x110) = uVar11;
    OVar3 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x118) = CONCAT71(extraout_var,OVar3.value);
    lVar5 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
    *(long *)(unaff_x22 + 0x120) = lVar5;
    uVar10 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x128) = uVar10;
    plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x130) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100a6fc5c;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar12 = *(undefined8 *)(lVar5 + 0x10);
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar4 & 1) != 0) {
    plVar9 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar9;
    FUN_1000f7830(&DAT_100ff6d68,&DAT_100c919c0);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100a6f670;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar2 = FUN_100a6ab5c;
  _swift_task_addCancellationHandler(FUN_100a6ab5c,uVar12);
  *(code **)(unaff_x22 + 0xe0) = pcVar2;
  plVar9 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100a6f6dc;
  FUN_100a68b38(uVar12);
  return;
}



/* Address: 0x100a6fc0c | FUN_100a6fc0c */

void FUN_100a6fc0c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined1 *)(unaff_x22 + 0x38) = 0;
  FUN_100a7b570();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a6fc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6fc5c | FUN_100a6fc5c */

void FUN_100a6fc5c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a6fcc0;
  }
  else {
    pcVar1 = FUN_100a701ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6fcc0 | FUN_100a6fcc0 */

void FUN_100a6fcc0(void)

{
  char cVar1;
  code *pcVar2;
  Optional OVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined7 extraout_var;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x22;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar11 = *(long *)(unaff_x22 + 0x110);
  lVar15 = *(long *)(lVar11 + -8);
  uVar14 = uVar12;
  (**(code **)(lVar15 + 0x30))(uVar12,1,lVar11);
  if ((int)uVar14 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x120) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x118));
    _swift_task_dealloc(uVar12);
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x80) = lVar11;
    FUN_10000cbb0(unaff_x22 + 0x68);
    (**(code **)(lVar15 + 0x20))();
    _swift_task_dealloc(uVar12);
  }
  puVar5 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar6 = &DAT_100ff6ad0;
  FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
  uVar10 = unaff_x22 + 0x88;
  _swift_dynamicCast(uVar10,unaff_x22 + 0x68,puVar5,puVar6,6);
  lVar11 = *(long *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined1 *)(unaff_x22 + 0x38) = 1;
  if ((uVar10 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x140) = lVar11;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x10);
      *(long *)(unaff_x22 + 0x148) = lVar11;
      if (lVar11 == 0) {
        _swift_bridgeObjectRelease();
      }
      else {
        uVar10 = 0;
        uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar8 = *(ulong *)(unaff_x22 + 200);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
        do {
          *(ulong *)(unaff_x22 + 0x158) = uVar10;
          *(ulong *)(unaff_x22 + 0x160) = uVar8;
          *(undefined8 *)(unaff_x22 + 0x150) = uVar12;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x140) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a701ac);
            (*pcVar2)();
          }
          lVar11 = *(long *)(unaff_x22 + 0x140) + uVar10 * 0x10;
          uVar13 = *(undefined8 *)(lVar11 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x168) = uVar13;
          cVar1 = *(char *)(lVar11 + 0x28);
          _swift_bridgeObjectRetain_n(uVar13,2);
          if (cVar1 != '\x04') {
            puVar5 = &DAT_100f2dba8;
            _swift_allocObject(&DAT_100f2dba8,0x40,7);
            *(undefined **)(unaff_x22 + 0x170) = puVar5;
            *(undefined8 *)(puVar5 + 0x10) = uVar13;
            *(undefined8 *)(puVar5 + 0x18) = 0xd00000000000001b;
            *(undefined8 *)(puVar5 + 0x20) = 0x8000000100db8e70;
            *(undefined8 *)(puVar5 + 0x28) = 0xd00000000000001f;
            *(undefined8 *)(puVar5 + 0x30) = 0x8000000100db8a70;
            *(undefined8 *)(puVar5 + 0x38) = 0x1e5;
            plVar9 = (long *)0xa0;
            _swift_bridgeObjectRetain(uVar13);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x178) = plVar9;
            *plVar9 = unaff_x22;
            plVar9[1] = (long)FUN_100a70214;
            FUN_100912dec(plVar9,unaff_x22 + 0x90,FUN_100a7c490,puVar5,
                          PTR___type_metadata_for_Swift_Int_100eac6f8);
            return;
          }
          uVar10 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar7 = uVar8;
          if ((uVar10 & 1) == 0) {
            uVar7 = 0;
            FUN_100aa7a78(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
          }
          uVar10 = *(ulong *)(uVar7 + 0x10);
          uVar8 = uVar7;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_100aa7a78(uVar8,uVar10 + 1,1,uVar7);
          }
          *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
          *(undefined8 *)(uVar8 + uVar10 * 8 + 0x20) = uVar13;
          _swift_bridgeObjectRelease(uVar13);
          uVar10 = *(long *)(unaff_x22 + 0x158) + 1;
        } while (uVar10 != *(ulong *)(unaff_x22 + 0x148));
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x140));
        *(undefined8 *)(unaff_x22 + 0xc0) = uVar14;
        *(ulong *)(unaff_x22 + 200) = uVar8;
        *(undefined8 *)(unaff_x22 + 0xb8) = uVar12;
      }
      lVar11 = *(long *)(unaff_x22 + 0x10);
      *(long *)(unaff_x22 + 0xd0) = lVar11;
      if (*(char *)(unaff_x22 + 0x38) == '\x01') {
        *(long *)(unaff_x22 + 0x40) = lVar11;
        *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
        *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
        FUN_10007d048(unaff_x22 + 0x40,uVar14);
        uVar13 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar12,uVar14,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
        OVar3 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x118) = CONCAT71(extraout_var,OVar3.value);
        lVar11 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
        *(long *)(unaff_x22 + 0x120) = lVar11;
        uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x128) = uVar10;
        plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x130) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_100a6fc5c;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar14 = *(undefined8 *)(lVar11 + 0x10);
      bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar4 & 1) != 0) {
        plVar9 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xd8) = plVar9;
        FUN_1000f7830(&DAT_100ff6d68,&DAT_100c919c0);
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_100a6f670;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar2 = FUN_100a6ab5c;
      _swift_task_addCancellationHandler(FUN_100a6ab5c,uVar14);
      *(code **)(unaff_x22 + 0xe0) = pcVar2;
      plVar9 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_100a6f6dc;
      FUN_100a68b38(uVar14);
      return;
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  puVar16 = *(undefined8 **)(unaff_x22 + 0xa0);
  FUN_100a7b570(unaff_x22 + 0x10);
  *puVar16 = uVar12;
  puVar16[1] = uVar14;
                    /* WARNING: Could not recover jumptable at 0x000100a6fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a701ac | FUN_100a701ac */

void FUN_100a701ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x128));
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined1 *)(unaff_x22 + 0x38) = 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  FUN_100a7b570(unaff_x22 + 0x10);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a70210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a70214 | FUN_100a70214 */

void FUN_100a70214(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  _swift_release(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a70280;
  }
  else {
    pcVar1 = FUN_100a70658;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a70280 | FUN_100a70280 */

void FUN_100a70280(void)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  Optional OVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  long *plVar15;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar13 = *(long *)(unaff_x22 + 0x150);
  _swift_bridgeObjectRelease(uVar11);
  lVar14 = *(long *)(unaff_x22 + 0x90);
  _swift_bridgeObjectRelease(uVar11);
  lVar10 = lVar13 + lVar14;
  if (SCARRY8(lVar13,lVar14)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a70658);
    (*pcVar3)();
  }
  uVar12 = *(ulong *)(unaff_x22 + 0x160);
  while( true ) {
    uVar6 = *(long *)(unaff_x22 + 0x158) + 1;
    if (uVar6 == *(ulong *)(unaff_x22 + 0x148)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x140));
      *(long *)(unaff_x22 + 0xb8) = lVar10;
      *(long *)(unaff_x22 + 0xc0) = lVar10;
      lVar10 = *(long *)(unaff_x22 + 0x10);
      *(ulong *)(unaff_x22 + 200) = uVar12;
      *(long *)(unaff_x22 + 0xd0) = lVar10;
      if (*(char *)(unaff_x22 + 0x38) == '\x01') {
        *(long *)(unaff_x22 + 0x40) = lVar10;
        *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
        *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
        FUN_10007d048((long *)(unaff_x22 + 0x40),uVar11);
        uVar8 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar1,uVar11,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 0x110) = uVar8;
        OVar4 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x118) = CONCAT71(extraout_var,OVar4.value);
        lVar10 = *(long *)(CONCAT71(extraout_var,OVar4.value) + -8);
        *(long *)(unaff_x22 + 0x120) = lVar10;
        uVar12 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x128) = uVar12;
        plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x130) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_100a6fc5c;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x10);
      bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar5 & 1) != 0) {
        plVar15 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xd8) = plVar15;
        FUN_1000f7830(&DAT_100ff6d68,&DAT_100c919c0);
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_100a6f670;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar3 = FUN_100a6ab5c;
      _swift_task_addCancellationHandler(FUN_100a6ab5c,uVar11);
      *(code **)(unaff_x22 + 0xe0) = pcVar3;
      plVar15 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar15;
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_100a6f6dc;
      FUN_100a68b38(uVar11);
      return;
    }
    *(ulong *)(unaff_x22 + 0x158) = uVar6;
    *(ulong *)(unaff_x22 + 0x160) = uVar12;
    *(long *)(unaff_x22 + 0x150) = lVar10;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x140) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a70654);
      (*pcVar3)();
    }
    lVar13 = *(long *)(unaff_x22 + 0x140) + uVar6 * 0x10;
    uVar11 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x168) = uVar11;
    cVar2 = *(char *)(lVar13 + 0x28);
    _swift_bridgeObjectRetain_n(uVar11,2);
    if (cVar2 != '\x04') break;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100aa7a78(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100aa7a78(uVar12,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined8 *)(uVar12 + uVar6 * 8 + 0x20) = uVar11;
    _swift_bridgeObjectRelease(uVar11);
  }
  puVar9 = &DAT_100f2dba8;
  _swift_allocObject(&DAT_100f2dba8,0x40,7);
  *(undefined **)(unaff_x22 + 0x170) = puVar9;
  *(undefined8 *)(puVar9 + 0x10) = uVar11;
  *(undefined8 *)(puVar9 + 0x18) = 0xd00000000000001b;
  *(undefined8 *)(puVar9 + 0x20) = 0x8000000100db8e70;
  *(undefined8 *)(puVar9 + 0x28) = 0xd00000000000001f;
  *(undefined8 *)(puVar9 + 0x30) = 0x8000000100db8a70;
  *(undefined8 *)(puVar9 + 0x38) = 0x1e5;
  plVar15 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar11);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_100a70214;
  FUN_100912dec(plVar15,(long *)(unaff_x22 + 0x90),FUN_100a7c490,puVar9,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x100a70658 | FUN_100a70658 */

void FUN_100a70658(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  FUN_100a7b570(unaff_x22 + 0x10);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a706bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a706c0 | FUN_100a706c0 */

void FUN_100a706c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a706e4,0,0);
  return;
}



/* Address: 0x100a706e4 | FUN_100a706e4 */

void FUN_100a706e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x22;
  long *plVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar7 = &DAT_100f2d620;
  _swift_allocObject(&DAT_100f2d620,0x40,7);
  *(undefined **)(unaff_x22 + 0x50) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar5;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = uVar4;
  plVar8 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a707bc;
  FUN_100912dec(plVar8,unaff_x22 + 0x10,FUN_100a7b02c,puVar7,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x100a707bc | FUN_100a707bc */

void FUN_100a707bc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x58));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a6c664;
  }
  else {
    pcVar2 = FUN_100913a60;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a70828 | FUN_100a70828 */

void FUN_100a70828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x51) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a70848,0,0);
  return;
}



/* Address: 0x100a70848 | FUN_100a70848 */

void FUN_100a70848(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x51);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = &DAT_100f2d648;
  _swift_allocObject(&DAT_100f2d648,0x30,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  puVar2[0x18] = uVar1;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  plVar5 = (long *)0xa0;
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a70924;
  FUN_100912dec(plVar5,unaff_x22 + 0x50,FUN_100a7b040,puVar2,&DAT_100f2d868);
  return;
}


