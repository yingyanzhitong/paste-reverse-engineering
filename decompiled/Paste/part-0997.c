/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aad9c0 | FUN_100aad9c0 */

void FUN_100aad9c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = *unaff_x20;
  _swift_task_switch(FUN_100aad9e0,0,0);
  return;
}



/* Address: 0x100aad9e0 | FUN_100aad9e0 */

void FUN_100aad9e0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f30180;
  _swift_allocObject(&DAT_100f30180,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a6089c;
  FUN_100912dec();
  return;
}



/* Address: 0x100aadabc | FUN_100aadabc */

void FUN_100aadabc(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100aadad8,0,0);
  return;
}



/* Address: 0x100aadad8 | FUN_100aadad8 */

void FUN_100aadad8(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f30158;
  _swift_allocObject(&DAT_100f30158,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aadb98 | FUN_100aadb98 */

void FUN_100aadb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100aa97a0(plVar1,param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100aadc1c | FUN_100aadc1c */

void FUN_100aadc1c(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100aadc38,0,0);
  return;
}



/* Address: 0x100aadc38 | FUN_100aadc38 */

void FUN_100aadc38(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f30130;
  _swift_allocObject(&DAT_100f30130,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aadcf8 | FUN_100aadcf8 */

void FUN_100aadcf8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = *unaff_x20;
  _swift_task_switch(FUN_100aadd24,0,0);
  return;
}



/* Address: 0x100aadd24 | FUN_100aadd24 */

void FUN_100aadd24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(lVar3 + 0x31);
  uVar10 = *(undefined8 *)(lVar3 + 0x29);
  uVar14 = *(undefined8 *)(lVar3 + 0x10);
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar10;
  puVar7 = &DAT_100f30108;
  _swift_allocObject(&DAT_100f30108,0x69,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar7;
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar14 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar7 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar7 + 0x29) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar2;
  puVar7[0x50] = uVar6;
  *(undefined8 *)(puVar7 + 0x58) = uVar4;
  *(undefined8 *)(puVar7 + 0x60) = uVar1;
  puVar7[0x68] = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a60cec;
  FUN_100912dec();
  return;
}



/* Address: 0x100aade1c | FUN_100aade1c */

void FUN_100aade1c(mode_t *param_1,int param_2,Darwin *param_3,char *param_4,void *param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  __uint16 _Var11;
  int iVar12;
  __int32 _Var13;
  undefined8 *puVar14;
  int *piVar15;
  undefined6 extraout_var_00;
  undefined7 extraout_var;
  undefined *puVar17;
  mode_t mVar18;
  _StringGuts _Var19;
  void *pvVar20;
  char *pcVar21;
  char *pcVar22;
  undefined1 uVar23;
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
  undefined1 auStack_2e0 [72];
  undefined1 local_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_250 [8];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int aiStack_130 [38];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puVar16;
  
  _Var19.unknown = param_3;
  pcVar21 = param_4;
  FUN_100aa5ed8(aiStack_130);
  iVar12 = (int)aiStack_130;
  FUN_10092c924();
  if (iVar12 == 1) {
    piVar15 = aiStack_130;
    FUN_100004520();
    iVar12 = *piVar15;
    pcVar22 = *(char **)(param_4 + 0x10);
    if (iVar12 == 9) {
      local_1c0 = 0;
      uStack_1b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var19);
      pvVar20 = (void *)0x8000000100db8e20;
      SVar24.bridgeObject = (void *)0x8000000100db8e20;
      SVar24.str = (char *)0xd000000000000021;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar21;
      Swift::String::append(SVar24,SVar29);
      FUN_1005b32e4();
      SVar25.bridgeObject = pvVar20;
      SVar25.str = pcVar22;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar21;
      Swift::String::append(SVar25,SVar30);
      _swift_bridgeObjectRelease(pvVar20);
      puVar14 = (undefined8 *)0xd000000000000016;
      SVar26.bridgeObject = (void *)0x8000000100db8e50;
      SVar26.str = (char *)0xd000000000000016;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar21;
      Swift::String::append(SVar26,SVar31);
      uVar23 = 0;
    }
    else {
      local_1c0 = 0;
      uStack_1b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x25,_Var19);
      _swift_bridgeObjectRelease(uStack_1b8);
      local_1c0 = 0xd000000000000021;
      uStack_1b8 = 0x8000000100db8e20;
      FUN_1005b32e4();
      SVar27.bridgeObject = _Var19.unknown;
      SVar27.str = pcVar22;
      SVar32.bridgeObject = param_5;
      SVar32.str = pcVar21;
      Swift::String::append(SVar27,SVar32);
      _swift_bridgeObjectRelease(_Var19.unknown);
      SVar28.bridgeObject = &SUB_e200000000000000;
      SVar28.str = (char *)0x2e27;
      puVar14 = (undefined8 *)0x2e27;
      SVar33.bridgeObject = param_5;
      SVar33.str = pcVar21;
      Swift::String::append(SVar28,SVar33);
      uVar23 = 8;
    }
    uVar6 = uStack_1b8;
    uVar4 = local_1c0;
    FUN_100a57a58();
    puVar17 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar14,0,0);
    *puVar14 = 0x7461747366;
    puVar14[1] = &DAT_e500000000000000;
    *(int *)(puVar14 + 2) = iVar12;
    uStack_290 = uVar4;
    local_288 = uVar6;
    local_278 = 0xd000000000000013;
    uStack_270 = 0x8000000100dbaf10;
    local_268 = 0xd000000000000025;
    uStack_260 = 0x8000000100db85f0;
    local_258 = 0x1c4;
    local_248 = uVar4;
    uStack_240 = uVar6;
    uStack_230 = 0xd000000000000013;
    local_228 = 0x8000000100dbaf10;
    uStack_220 = 0xd000000000000025;
    local_218 = 0x8000000100db85f0;
    uStack_210 = 0x1c4;
    local_298 = uVar23;
    puStack_280 = puVar17;
    local_250[0] = uVar23;
    local_238 = puVar17;
    FUN_100a50050(&local_298,&local_1c0);
    puVar14 = (undefined8 *)local_250;
    FUN_100a5008c();
    uVar23 = local_298;
    FUN_100a500c0();
    puVar17 = &DAT_100f2de38;
    puVar16 = puVar14;
    _swift_allocError(&DAT_100f2de38,puVar14,0,0);
    uVar4 = CONCAT71(uStack_297,local_298);
    puVar16[1] = uStack_290;
    *puVar16 = uVar4;
    uVar9 = uStack_260;
    uVar8 = local_268;
    uVar7 = uStack_270;
    uVar6 = local_278;
    puVar5 = puStack_280;
    uVar4 = local_288;
    puVar16[8] = local_258;
    puVar16[5] = uVar7;
    puVar16[4] = uVar6;
    puVar16[7] = uVar9;
    puVar16[6] = uVar8;
    puVar16[3] = puVar5;
    puVar16[2] = uVar4;
    uVar4 = uStack_260;
    local_208 = uVar23;
    uStack_200 = 0xd00000000000001a;
    local_1f8 = 0x8000000100dbb1b0;
    local_1e8 = local_278;
    uStack_1e0 = uStack_270;
    uStack_1d8 = local_268;
    local_1d0 = uStack_260;
    local_1c8 = local_258;
    local_1c0 = CONCAT71(local_1c0._1_7_,uVar23);
    uStack_1b8 = 0xd00000000000001a;
    uStack_1b0 = 0x8000000100dbb1b0;
    local_1a0 = local_278;
    uStack_198 = uStack_270;
    uStack_190 = local_268;
    local_188 = uStack_260;
    local_180 = local_258;
    puStack_1f0 = puVar17;
    local_1a8 = puVar17;
    _swift_bridgeObjectRetain(uStack_270);
    _swift_bridgeObjectRetain(uVar4);
    FUN_100a50050(&local_208,auStack_2e0);
    FUN_100a5008c(&local_1c0);
    _swift_allocError(&DAT_100f2de38,puVar14,0,0);
    uVar4 = CONCAT71(uStack_207,local_208);
    puVar14[1] = uStack_200;
    *puVar14 = uVar4;
    uVar9 = local_1d0;
    uVar8 = uStack_1d8;
    uVar7 = uStack_1e0;
    uVar6 = local_1e8;
    puVar17 = puStack_1f0;
    uVar4 = local_1f8;
    puVar14[8] = local_1c8;
    puVar14[5] = uVar7;
    puVar14[4] = uVar6;
    puVar14[7] = uVar9;
    puVar14[6] = uVar8;
    puVar14[3] = puVar17;
    puVar14[2] = uVar4;
    _swift_willThrow();
  }
  else {
    piVar15 = aiStack_130;
    FUN_100004520();
    uVar2 = *(ushort *)(piVar15 + 1);
    FUN_100a87258(uVar2);
    _Var11 = Darwin::get_S_IFMT();
    uVar1 = (uint)uVar2 & ((uint)CONCAT62(extraout_var_00,_Var11) ^ 0xffffffff);
    uVar3 = uVar1 | (uint)param_3;
    mVar18 = (mode_t)uVar3;
    if ((uVar1 | (uint)param_3 & 0xffff) == uVar1) {
LAB_100aadf54:
      *param_1 = mVar18;
    }
    else {
      do {
        Darwin::set_errno(param_3,0);
        iVar12 = _fchmod(param_2,mVar18);
        if (iVar12 != -1) goto LAB_100aadf54;
        _Var13 = Darwin::get_errno();
      } while (_Var13 == 4);
      local_98 = &DAT_d000000000000032;
      uStack_90 = 0x8000000100dbaeb0;
      local_88 = 0xd000000000000025;
      uStack_80 = 0x8000000100db85f0;
      local_78 = 0x206;
      FUN_100a812fc(&local_178,1,param_3,uVar3,_Var13,*(undefined8 *)(param_4 + 0x10),&local_98);
      uStack_198 = uStack_150;
      local_1a0 = local_158;
      local_188 = uStack_140;
      uStack_190 = uStack_148;
      local_180 = local_138;
      uStack_1b8 = uStack_170;
      local_1c0 = local_178;
      local_1a8 = (undefined *)uStack_160;
      uStack_1b0 = uStack_168;
      bVar10 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar16 = (undefined8 *)CONCAT71(extraout_var,bVar10);
      puVar14 = puVar16;
      if ((bVar10 & 1) != 0) {
        FUN_100a500c0();
        puVar14 = &local_1c0;
        _swift_willThrowTypedImpl(puVar14,&DAT_100f2de38,puVar16);
      }
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar14,0,0);
      puVar14[5] = uStack_150;
      puVar14[4] = local_158;
      puVar14[7] = uStack_140;
      puVar14[6] = uStack_148;
      puVar14[8] = local_138;
      puVar14[1] = uStack_170;
      *puVar14 = local_178;
      puVar14[3] = uStack_160;
      puVar14[2] = uStack_168;
    }
  }
  return;
}



/* Address: 0x100aae264 | FUN_100aae264 */

void FUN_100aae264(mode_t *param_1,int param_2,Darwin *param_3,char *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  __uint16 _Var11;
  int iVar12;
  __int32 _Var13;
  undefined8 *puVar14;
  int *piVar15;
  undefined7 extraout_var;
  undefined *puVar17;
  _StringGuts _Var18;
  void *pvVar19;
  char *pcVar20;
  char *pcVar21;
  undefined1 uVar22;
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
  undefined1 auStack_2e0 [72];
  undefined1 local_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_250 [8];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int aiStack_130 [38];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puVar16;
  
  _Var18.unknown = param_3;
  pcVar20 = param_4;
  FUN_100aa5ed8(aiStack_130);
  iVar12 = (int)aiStack_130;
  FUN_10092c924();
  if (iVar12 == 1) {
    piVar15 = aiStack_130;
    FUN_100004520();
    iVar12 = *piVar15;
    pcVar21 = *(char **)(param_4 + 0x10);
    if (iVar12 == 9) {
      local_1c0 = 0;
      uStack_1b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var18);
      pvVar19 = (void *)0x8000000100db8e20;
      SVar23.bridgeObject = (void *)0x8000000100db8e20;
      SVar23.str = (char *)0xd000000000000021;
      SVar28.bridgeObject = param_5;
      SVar28.str = pcVar20;
      Swift::String::append(SVar23,SVar28);
      FUN_1005b32e4();
      SVar24.bridgeObject = pvVar19;
      SVar24.str = pcVar21;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar20;
      Swift::String::append(SVar24,SVar29);
      _swift_bridgeObjectRelease(pvVar19);
      puVar14 = (undefined8 *)0xd000000000000016;
      SVar25.bridgeObject = (void *)0x8000000100db8e50;
      SVar25.str = (char *)0xd000000000000016;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar20;
      Swift::String::append(SVar25,SVar30);
      uVar22 = 0;
    }
    else {
      local_1c0 = 0;
      uStack_1b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x25,_Var18);
      _swift_bridgeObjectRelease(uStack_1b8);
      local_1c0 = 0xd000000000000021;
      uStack_1b8 = 0x8000000100db8e20;
      FUN_1005b32e4();
      SVar26.bridgeObject = _Var18.unknown;
      SVar26.str = pcVar21;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar20;
      Swift::String::append(SVar26,SVar31);
      _swift_bridgeObjectRelease(_Var18.unknown);
      SVar27.bridgeObject = &SUB_e200000000000000;
      SVar27.str = (char *)0x2e27;
      puVar14 = (undefined8 *)0x2e27;
      SVar32.bridgeObject = param_5;
      SVar32.str = pcVar20;
      Swift::String::append(SVar27,SVar32);
      uVar22 = 8;
    }
    uVar6 = uStack_1b8;
    uVar4 = local_1c0;
    FUN_100a57a58();
    puVar17 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar14,0,0);
    *puVar14 = 0x7461747366;
    puVar14[1] = &DAT_e500000000000000;
    *(int *)(puVar14 + 2) = iVar12;
    uStack_290 = uVar4;
    local_288 = uVar6;
    local_278 = 0xd000000000000016;
    uStack_270 = 0x8000000100dbaf50;
    local_268 = 0xd000000000000025;
    uStack_260 = 0x8000000100db85f0;
    local_258 = 0x1eb;
    local_248 = uVar4;
    uStack_240 = uVar6;
    uStack_230 = 0xd000000000000016;
    local_228 = 0x8000000100dbaf50;
    uStack_220 = 0xd000000000000025;
    local_218 = 0x8000000100db85f0;
    uStack_210 = 0x1eb;
    local_298 = uVar22;
    puStack_280 = puVar17;
    local_250[0] = uVar22;
    local_238 = puVar17;
    FUN_100a50050(&local_298,&local_1c0);
    puVar14 = (undefined8 *)local_250;
    FUN_100a5008c();
    uVar22 = local_298;
    FUN_100a500c0();
    puVar17 = &DAT_100f2de38;
    puVar16 = puVar14;
    _swift_allocError(&DAT_100f2de38,puVar14,0,0);
    uVar4 = CONCAT71(uStack_297,local_298);
    puVar16[1] = uStack_290;
    *puVar16 = uVar4;
    uVar9 = uStack_260;
    uVar8 = local_268;
    uVar7 = uStack_270;
    uVar6 = local_278;
    puVar5 = puStack_280;
    uVar4 = local_288;
    puVar16[8] = local_258;
    puVar16[5] = uVar7;
    puVar16[4] = uVar6;
    puVar16[7] = uVar9;
    puVar16[6] = uVar8;
    puVar16[3] = puVar5;
    puVar16[2] = uVar4;
    uVar4 = uStack_260;
    local_208 = uVar22;
    uStack_200 = 0xd00000000000001d;
    local_1f8 = 0x8000000100dbb190;
    local_1e8 = local_278;
    uStack_1e0 = uStack_270;
    uStack_1d8 = local_268;
    local_1d0 = uStack_260;
    local_1c8 = local_258;
    local_1c0 = CONCAT71(local_1c0._1_7_,uVar22);
    uStack_1b8 = 0xd00000000000001d;
    uStack_1b0 = 0x8000000100dbb190;
    local_1a0 = local_278;
    uStack_198 = uStack_270;
    uStack_190 = local_268;
    local_188 = uStack_260;
    local_180 = local_258;
    puStack_1f0 = puVar17;
    local_1a8 = puVar17;
    _swift_bridgeObjectRetain(uStack_270);
    _swift_bridgeObjectRetain(uVar4);
    FUN_100a50050(&local_208,auStack_2e0);
    FUN_100a5008c(&local_1c0);
    _swift_allocError(&DAT_100f2de38,puVar14,0,0);
    uVar4 = CONCAT71(uStack_207,local_208);
    puVar14[1] = uStack_200;
    *puVar14 = uVar4;
    uVar9 = local_1d0;
    uVar8 = uStack_1d8;
    uVar7 = uStack_1e0;
    uVar6 = local_1e8;
    puVar17 = puStack_1f0;
    uVar4 = local_1f8;
    puVar14[8] = local_1c8;
    puVar14[5] = uVar7;
    puVar14[4] = uVar6;
    puVar14[7] = uVar9;
    puVar14[6] = uVar8;
    puVar14[3] = puVar17;
    puVar14[2] = uVar4;
    _swift_willThrow();
  }
  else {
    piVar15 = aiStack_130;
    FUN_100004520();
    uVar3 = *(ushort *)(piVar15 + 1);
    FUN_100a87258(uVar3);
    _Var11 = Darwin::get_S_IFMT();
    uVar1 = (uint)uVar3 & (_Var11 ^ 0xffffffff);
    uVar2 = uVar1 & ((uint)param_3 ^ 0xffffffff);
    if (uVar2 == uVar1) {
LAB_100aae3a0:
      *param_1 = (mode_t)uVar2;
    }
    else {
      do {
        Darwin::set_errno(param_3,0);
        iVar12 = _fchmod(param_2,(mode_t)uVar2);
        if (iVar12 != -1) goto LAB_100aae3a0;
        _Var13 = Darwin::get_errno();
      } while (_Var13 == 4);
      local_98 = &DAT_d000000000000032;
      uStack_90 = 0x8000000100dbaeb0;
      local_88 = 0xd000000000000025;
      uStack_80 = 0x8000000100db85f0;
      local_78 = 0x206;
      FUN_100a812fc(&local_178,2,param_3,uVar2,_Var13,*(undefined8 *)(param_4 + 0x10),&local_98);
      uStack_198 = uStack_150;
      local_1a0 = local_158;
      local_188 = uStack_140;
      uStack_190 = uStack_148;
      local_180 = local_138;
      uStack_1b8 = uStack_170;
      local_1c0 = local_178;
      local_1a8 = (undefined *)uStack_160;
      uStack_1b0 = uStack_168;
      bVar10 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar16 = (undefined8 *)CONCAT71(extraout_var,bVar10);
      puVar14 = puVar16;
      if ((bVar10 & 1) != 0) {
        FUN_100a500c0();
        puVar14 = &local_1c0;
        _swift_willThrowTypedImpl(puVar14,&DAT_100f2de38,puVar16);
      }
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar14,0,0);
      puVar14[5] = uStack_150;
      puVar14[4] = local_158;
      puVar14[7] = uStack_140;
      puVar14[6] = uStack_148;
      puVar14[8] = local_138;
      puVar14[1] = uStack_170;
      *puVar14 = local_178;
      puVar14[3] = uStack_160;
      puVar14[2] = uStack_168;
    }
  }
  return;
}



/* Address: 0x100aae6b4 | FUN_100aae6b4 */

void FUN_100aae6b4(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  void *pvVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_128 [72];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  _StringGuts _Var4;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x31,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd00000000000002d;
  local_90 = 0x8000000100db9b20;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3.unknown;
  SVar12.bridgeObject = param_5;
  SVar12.str = pcVar6;
  Swift::String::append(SVar7,SVar12);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2927;
  _Var4.unknown = &SUB_e200000000000000;
  SVar13.bridgeObject = param_5;
  SVar13.str = pcVar6;
  Swift::String::append(SVar8,SVar13);
  uVar2 = local_90;
  uVar1 = local_98;
  local_98 = 0;
  local_90 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var4);
  _swift_bridgeObjectRelease(local_90);
  local_98 = uVar1;
  local_90 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  pvVar5 = (void *)0xec0000002720656c;
  SVar9.bridgeObject = (void *)0xec0000002720656c;
  SVar9.str = (char *)0x696620656874202c;
  SVar14.bridgeObject = param_5;
  SVar14.str = pcVar6;
  Swift::String::append(SVar9,SVar14);
  pcVar3 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar10.bridgeObject = pvVar5;
  SVar10.str = pcVar3;
  SVar15.bridgeObject = param_5;
  SVar15.str = pcVar6;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(pvVar5);
  SVar11.bridgeObject = (void *)0xec0000002e646573;
  SVar11.str = (char *)0x6f6c632073692027;
  SVar16.bridgeObject = param_5;
  SVar16.str = pcVar6;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(uVar2);
  uStack_88 = local_90;
  uVar1 = local_98;
  local_e0 = 0;
  uStack_d8 = local_98;
  uStack_d0 = local_90;
  uStack_c0 = 0xd000000000000016;
  local_c8 = 0;
  local_b8 = 0x8000000100dbafc0;
  uStack_b0 = 0xd000000000000025;
  local_a8 = 0x8000000100db85f0;
  local_a0 = 0x23b;
  local_98 = local_98 & 0xffffffffffffff00;
  local_90 = uVar1;
  uStack_78 = 0xd000000000000016;
  local_80 = 0;
  local_70 = 0x8000000100dbafc0;
  uStack_68 = 0xd000000000000025;
  local_60 = 0x8000000100db85f0;
  uStack_58 = 0x23b;
  FUN_100a50050(&local_e0,auStack_128);
  FUN_100a5008c(&local_98);
  param_1[5] = local_b8;
  param_1[4] = uStack_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100aae858 | FUN_100aae858 */

void FUN_100aae858(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long unaff_x21;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  char local_41;
  
  lVar3 = *(long *)(param_4 + -8);
  puVar1 = auStack_70 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 8) + 8) + 8);
  local_60 = param_1;
  uStack_58 = param_2;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if ((unaff_x21 == 0) && (local_41 == '\x01')) {
    (**(code **)(lVar3 + 0x10))(puVar1,param_3,param_4);
    Swift::Array<undefined>::_init
              (puVar1,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_4,uVar2);
    (*param_1)(puVar1 + 0x20,*(undefined8 *)(puVar1 + 0x10));
    _swift_bridgeObjectRelease(puVar1);
  }
  return;
}



/* Address: 0x100aae958 | FUN_100aae958 */

void FUN_100aae958(long param_1,long param_2,undefined4 param_3,Darwin *param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  byte bVar2;
  __int32 _Var3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int local_c4;
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
  undefined8 *puVar4;
  
  puVar5 = &local_110;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 + param_1;
  }
  Darwin::set_errno(param_4,0);
  local_100 = CONCAT44(local_100._4_4_,param_3);
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  local_f8 = param_1;
  local_f0 = lVar1;
  FUN_1005b958c(&local_c4,FUN_100ab32d4,&local_110,param_4,param_5,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (local_c4 == -1) {
    _Var3 = Darwin::get_errno();
    local_78 = 0xd000000000000026;
    uStack_70 = 0x8000000100dbb160;
    local_68 = 0xd000000000000025;
    uStack_60 = 0x8000000100db85f0;
    local_58 = 0x255;
    FUN_100a81f60(&local_c0,param_4,param_5,_Var3,*(undefined8 *)(param_6 + 0x10),&local_78);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    local_d0 = local_80;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    local_f8 = uStack_a8;
    local_100 = uStack_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar2);
    if ((bVar2 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_110,&DAT_100f2de38,puVar4);
      puVar4 = puVar5;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar4,0,0);
    puVar4[5] = uStack_98;
    puVar4[4] = local_a0;
    puVar4[7] = uStack_88;
    puVar4[6] = uStack_90;
    puVar4[8] = local_80;
    puVar4[1] = uStack_b8;
    *puVar4 = local_c0;
    puVar4[3] = uStack_a8;
    puVar4[2] = uStack_b0;
  }
  return;
}



/* Address: 0x100aaeae0 | FUN_100aaeae0 */

void FUN_100aaeae0(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  void *pvVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_128 [72];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  _StringGuts _Var4;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x31,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd00000000000002d;
  local_90 = 0x8000000100db9a70;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3.unknown;
  SVar12.bridgeObject = param_5;
  SVar12.str = pcVar6;
  Swift::String::append(SVar7,SVar12);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2927;
  _Var4.unknown = &SUB_e200000000000000;
  SVar13.bridgeObject = param_5;
  SVar13.str = pcVar6;
  Swift::String::append(SVar8,SVar13);
  uVar2 = local_90;
  uVar1 = local_98;
  local_98 = 0;
  local_90 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var4);
  _swift_bridgeObjectRelease(local_90);
  local_98 = uVar1;
  local_90 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  pvVar5 = (void *)0xec0000002720656c;
  SVar9.bridgeObject = (void *)0xec0000002720656c;
  SVar9.str = (char *)0x696620656874202c;
  SVar14.bridgeObject = param_5;
  SVar14.str = pcVar6;
  Swift::String::append(SVar9,SVar14);
  pcVar3 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar10.bridgeObject = pvVar5;
  SVar10.str = pcVar3;
  SVar15.bridgeObject = param_5;
  SVar15.str = pcVar6;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(pvVar5);
  SVar11.bridgeObject = (void *)0xec0000002e646573;
  SVar11.str = (char *)0x6f6c632073692027;
  SVar16.bridgeObject = param_5;
  SVar16.str = pcVar6;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(uVar2);
  uStack_88 = local_90;
  uVar1 = local_98;
  local_e0 = 0;
  uStack_d8 = local_98;
  uStack_d0 = local_90;
  uStack_c0 = 0xd000000000000026;
  local_c8 = 0;
  local_b8 = 0x8000000100dbb160;
  uStack_b0 = 0xd000000000000025;
  local_a8 = 0x8000000100db85f0;
  local_a0 = 0x260;
  local_98 = local_98 & 0xffffffffffffff00;
  local_90 = uVar1;
  uStack_78 = 0xd000000000000026;
  local_80 = 0;
  local_70 = 0x8000000100dbb160;
  uStack_68 = 0xd000000000000025;
  local_60 = 0x8000000100db85f0;
  uStack_58 = 0x260;
  FUN_100a50050(&local_e0,auStack_128);
  FUN_100a5008c(&local_98);
  param_1[5] = local_b8;
  param_1[4] = uStack_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100aaec84 | FUN_100aaec84 */

void FUN_100aaec84(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  void *pvVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_128 [72];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  _StringGuts _Var4;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x2a,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd000000000000026;
  local_90 = 0x8000000100db9970;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3.unknown;
  SVar12.bridgeObject = param_5;
  SVar12.str = pcVar6;
  Swift::String::append(SVar7,SVar12);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2927;
  _Var4.unknown = &SUB_e200000000000000;
  SVar13.bridgeObject = param_5;
  SVar13.str = pcVar6;
  Swift::String::append(SVar8,SVar13);
  uVar2 = local_90;
  uVar1 = local_98;
  local_98 = 0;
  local_90 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var4);
  _swift_bridgeObjectRelease(local_90);
  local_98 = uVar1;
  local_90 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  pvVar5 = (void *)0xec0000002720656c;
  SVar9.bridgeObject = (void *)0xec0000002720656c;
  SVar9.str = (char *)0x696620656874202c;
  SVar14.bridgeObject = param_5;
  SVar14.str = pcVar6;
  Swift::String::append(SVar9,SVar14);
  pcVar3 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar10.bridgeObject = pvVar5;
  SVar10.str = pcVar3;
  SVar15.bridgeObject = param_5;
  SVar15.str = pcVar6;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(pvVar5);
  SVar11.bridgeObject = (void *)0xec0000002e646573;
  SVar11.str = (char *)0x6f6c632073692027;
  SVar16.bridgeObject = param_5;
  SVar16.str = pcVar6;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(uVar2);
  uStack_88 = local_90;
  uVar1 = local_98;
  local_e0 = 0;
  uStack_d8 = local_98;
  uStack_d0 = local_90;
  uStack_c0 = 0xd00000000000001c;
  local_c8 = 0;
  local_b8 = 0x8000000100dbafe0;
  uStack_b0 = 0xd000000000000025;
  local_a8 = 0x8000000100db85f0;
  local_a0 = 0x275;
  local_98 = local_98 & 0xffffffffffffff00;
  local_90 = uVar1;
  uStack_78 = 0xd00000000000001c;
  local_80 = 0;
  local_70 = 0x8000000100dbafe0;
  uStack_68 = 0xd000000000000025;
  local_60 = 0x8000000100db85f0;
  uStack_58 = 0x275;
  FUN_100a50050(&local_e0,auStack_128);
  FUN_100a5008c(&local_98);
  param_1[5] = local_b8;
  param_1[4] = uStack_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100aaee28 | FUN_100aaee28 */

void FUN_100aaee28(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char acStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char acStack_68 [40];
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x39,param_3);
  pvVar3 = (void *)0x8000000100db98c0;
  SVar4.bridgeObject = (void *)0x8000000100db98c0;
  SVar4.str = (char *)0xd000000000000035;
  SVar7.bridgeObject = param_5;
  SVar7.str = param_4;
  Swift::String::append(SVar4,SVar7);
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = pcVar2;
  SVar8.bridgeObject = param_5;
  SVar8.str = param_4;
  Swift::String::append(SVar5,SVar8);
  _swift_bridgeObjectRelease(pvVar3);
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x2e27;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar6,SVar9);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  builtin_strncpy(acStack_b0,"_duplica",8);
  local_b8 = 0;
  local_a8 = 0xec00000029286574;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x296;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  builtin_strncpy(acStack_68,"_duplicate()",0xd);
  local_70 = 0;
  acStack_68[0xd] = '\0';
  acStack_68[0xe] = '\0';
  acStack_68[0xf] = -0x14;
  acStack_68[0x10] = '%';
  acStack_68[0x11] = '\0';
  acStack_68[0x12] = '\0';
  acStack_68[0x13] = '\0';
  acStack_68[0x14] = '\0';
  acStack_68[0x15] = '\0';
  acStack_68[0x16] = '\0';
  acStack_68[0x17] = -0x30;
  acStack_68[0x18] = -0x10;
  acStack_68[0x19] = -0x7b;
  acStack_68[0x1a] = -0x25;
  acStack_68[0x1b] = '\0';
  acStack_68[0x1c] = '\x01';
  acStack_68[0x1d] = '\0';
  acStack_68[0x1e] = '\0';
  acStack_68[0x1f] = -0x80;
  acStack_68[0x20] = -0x6a;
  acStack_68[0x21] = '\x02';
  acStack_68[0x22] = '\0';
  acStack_68[0x23] = '\0';
  acStack_68[0x24] = '\0';
  acStack_68[0x25] = '\0';
  acStack_68[0x26] = '\0';
  acStack_68[0x27] = '\0';
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = acStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100aaef40 | FUN_100aaef40 */

void FUN_100aaef40(undefined8 param_1,ulong param_2,ulong param_3,char param_4,ulong param_5,
                  ulong param_6,char param_7,Darwin *param_8)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_1c0 [32];
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  ulong uStack_188;
  undefined1 auStack_180 [32];
  ulong local_160;
  ulong uStack_158;
  undefined8 local_150;
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
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puVar2;
  
  if (param_4 == '\x01') {
    if (param_7 == '\x01') {
      Darwin::set_errno(param_8,0);
      _futimens(param_1,0);
      if ((int)param_1 != -1) {
        return;
      }
      Darwin::get_errno();
      goto LAB_100aaf088;
    }
    uStack_198 = 0xfffffffffffffffe;
    local_1a0 = 0;
    local_190 = param_5 & ((long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
    uVar5 = param_6 & ((long)param_6 >> 0x3f ^ 0xffffffffffffffffU);
    if (999999999 < (long)uVar5) {
      uVar5 = 1000000000;
    }
    puVar6 = auStack_1c0;
    uStack_188 = param_6;
    if (param_6 < 0xfffffffffffffffe || param_5 != 0) {
      puVar6 = auStack_1c0;
      uStack_188 = uVar5;
    }
  }
  else {
    uVar4 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
    uVar5 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
    if (999999999 < (long)uVar5) {
      uVar5 = 1000000000;
    }
    if (param_3 < 0xfffffffffffffffe || param_2 != 0) {
      param_3 = uVar5;
    }
    if (param_7 == '\x01') {
      uStack_148 = 0xfffffffffffffffe;
      local_150 = 0;
      puVar6 = auStack_180;
      local_160 = uVar4;
      uStack_158 = param_3;
    }
    else {
      local_c0 = param_5 & ((long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
      uVar5 = param_6 & ((long)param_6 >> 0x3f ^ 0xffffffffffffffffU);
      if (999999999 < (long)uVar5) {
        uVar5 = 1000000000;
      }
      puVar6 = auStack_f0;
      local_d0 = uVar4;
      uStack_c8 = param_3;
      uStack_b8 = param_6;
      if (param_6 < 0xfffffffffffffffe || param_5 != 0) {
        uStack_b8 = uVar5;
      }
    }
  }
  Darwin::set_errno(param_8,0);
  _futimens(param_1,puVar6 + 0x20);
  if ((int)param_1 != -1) {
    return;
  }
  Darwin::get_errno();
LAB_100aaf088:
  local_68 = 0xd00000000000002b;
  uStack_60 = 0x8000000100dbb3b0;
  local_58 = 0xd000000000000025;
  uStack_50 = 0x8000000100db85f0;
  local_48 = 0x3de;
  FUN_100a83074(&local_b0);
  uStack_118 = uStack_88;
  local_120 = local_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  local_100 = local_70;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
  puVar3 = puVar2;
  if ((bVar1 & 1) != 0) {
    FUN_100a500c0();
    puVar3 = &local_140;
    _swift_willThrowTypedImpl(puVar3,&DAT_100f2de38,puVar2);
  }
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,puVar3,0,0);
  puVar3[5] = uStack_88;
  puVar3[4] = local_90;
  puVar3[7] = uStack_78;
  puVar3[6] = uStack_80;
  puVar3[8] = local_70;
  puVar3[1] = uStack_a8;
  *puVar3 = local_b0;
  puVar3[3] = uStack_98;
  puVar3[2] = uStack_a0;
  return;
}



/* Address: 0x100aaf178 | FUN_100aaf178 */

void FUN_100aaf178(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x34,param_3);
  pvVar3 = (void *)0x8000000100dbb3e0;
  SVar4.bridgeObject = (void *)0x8000000100dbb3e0;
  SVar4.str = (char *)0xd000000000000026;
  SVar7.bridgeObject = param_5;
  SVar7.str = param_4;
  Swift::String::append(SVar4,SVar7);
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = pcVar2;
  SVar8.bridgeObject = param_5;
  SVar8.str = param_4;
  Swift::String::append(SVar5,SVar8);
  _swift_bridgeObjectRelease(pvVar3);
  SVar6.bridgeObject = (void *)0xec0000002e646573;
  SVar6.str = (char *)0x6f6c632073692027;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar6,SVar9);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  uStack_b0 = 0xd00000000000002b;
  local_b8 = 0;
  local_a8 = 0x8000000100dbb3b0;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x3e6;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  uStack_68 = 0xd00000000000002b;
  local_70 = 0;
  local_60 = 0x8000000100dbb3b0;
  uStack_58 = 0xd000000000000025;
  local_50 = 0x8000000100db85f0;
  uStack_48 = 0x3e6;
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = uStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100aaf2a8 | FUN_100aaf2a8 */

void FUN_100aaf2a8(undefined8 *param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined7 extraout_var;
  uint *puVar12;
  undefined8 *****pppppuVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****ppppuVar26;
  long lVar27;
  undefined2 uVar28;
  ulong uVar29;
  uint uVar30;
  undefined8 ****local_288;
  uint local_280 [18];
  uint local_238 [2];
  undefined8 ***local_230;
  undefined8 ***pppuStack_228;
  undefined8 ***local_220;
  undefined8 ***pppuStack_218;
  undefined8 ***local_210;
  undefined8 ***pppuStack_208;
  undefined8 ***local_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ****local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 ***local_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***local_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***local_1b8;
  undefined8 ***pppuStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 local_190 [8];
  undefined8 ***local_188;
  undefined8 ***pppuStack_180;
  undefined8 ***local_178;
  undefined8 ***pppuStack_170;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  undefined8 ***local_158;
  undefined8 ***pppuStack_150;
  undefined1 local_148 [8];
  undefined8 ***local_140;
  undefined8 ***pppuStack_138;
  undefined8 ***local_130;
  undefined8 ***pppuStack_128;
  undefined8 ***local_120;
  undefined8 ***pppuStack_118;
  undefined8 ***local_110;
  undefined8 ***pppuStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint *puVar11;
  undefined4 extraout_var_00;
  
  lVar27 = *param_2;
  iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar27 + 0x18));
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8e8);
    (*pcVar7)();
  }
  uVar3 = *(undefined4 *)(lVar27 + 0x10);
  cVar4 = *(char *)(lVar27 + 0x14);
  iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar27 + 0x18));
  puVar10 = (undefined8 *)CONCAT44(extraout_var_00,iVar9);
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8ec);
    (*pcVar7)();
  }
  if (cVar4 == '\x01') {
    FUN_100aaf904(&local_100);
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,param_2,0,0);
    param_2[5] = lStack_d8;
    param_2[4] = local_e0;
    param_2[7] = lStack_c8;
    param_2[6] = lStack_d0;
    param_2[8] = local_c0;
    param_2[1] = lStack_f8;
    *param_2 = local_100;
    param_2[3] = lStack_e8;
    param_2[2] = lStack_f0;
    _swift_willThrow();
    return;
  }
  FUN_1006116e8();
  local_1f0 = (undefined8 ****)*puVar10;
  local_1e8 = (undefined8 ****)puVar10[1];
  local_1e0 = (undefined8 ****)CONCAT17(local_1e0._7_1_,*(undefined7 *)(puVar10 + 2));
  _swift_retain();
  if (0 < param_4) {
    FUN_1006117fc(param_4);
  }
  FUN_100612cb0();
  local_288 = local_1f0;
  iVar9 = (int)local_1e0;
  uVar28 = local_1e0._4_2_;
  uVar5 = local_1e0._6_1_;
  _swift_beginAccess(local_1f0 + 3,auStack_1a8,0,0);
  lVar27 = (long)local_288[3] + (ulong)(uint)CONCAT21(uVar28,uVar5);
  uVar6 = local_1e8._4_4_;
  uVar29 = (ulong)local_1e8._4_4_;
  lVar17 = lVar27 + (ulong)(iVar9 - (uint)CONCAT21(uVar28,uVar5));
  FUN_10095a0a8();
  lVar1 = lVar17 + lVar27;
  if (param_4 < (long)(lVar27 - uVar29)) {
    lVar1 = lVar17 + uVar29 + param_4;
  }
  lVar27 = 0;
  if (lVar17 != 0) {
    lVar27 = lVar17 + uVar29;
  }
  lVar2 = 0;
  if (lVar17 != 0) {
    lVar2 = lVar1;
  }
  uVar29 = param_3;
  FUN_1005ac430(param_3,lVar27,lVar2,1,uVar3);
  uVar30 = (uint)uVar29;
  if (((uint)lVar27 & 0xff) == 1) {
    local_238[0] = uVar30;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar11 = (uint *)CONCAT71(extraout_var,bVar8);
    puVar12 = puVar11;
    if ((bVar8 & 1) != 0) {
      FUN_100a54208();
      puVar12 = local_238;
      _swift_willThrowTypedImpl(puVar12,&DAT_100ee42f8,puVar11);
    }
    FUN_100a54208();
    pppppuVar13 = (undefined8 *****)&DAT_100ee42f8;
    puVar11 = puVar12;
    _swift_allocError(&DAT_100ee42f8,puVar12,0,0);
    *puVar11 = uVar30;
    _swift_release(local_288);
    local_1f0 = pppppuVar13;
    _swift_errorRetain(pppppuVar13);
    puVar14 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar11 = local_238;
    _swift_dynamicCast(puVar11,&local_1f0,puVar14,&DAT_100ee42f8,6);
    if (((int)puVar11 == 0) || (local_238[0] != 0x1d)) {
      local_90 = 0xd000000000000025;
      uStack_88 = 0x8000000100dbb320;
      local_80 = 0xd000000000000025;
      uStack_78 = 0x8000000100db85f0;
      local_70 = 0x432;
      FUN_100a7e64c(local_148,1,pppppuVar13,param_2[2],&local_90);
      _swift_errorRelease();
      ppppuVar19 = (undefined8 ****)local_120;
      ppppuVar20 = (undefined8 ****)pppuStack_118;
      ppppuVar21 = (undefined8 ****)local_110;
      ppppuVar22 = (undefined8 ****)pppuStack_108;
      ppppuVar23 = (undefined8 ****)pppuStack_128;
      ppppuVar24 = (undefined8 ****)local_130;
      ppppuVar25 = (undefined8 ****)local_140;
      ppppuVar26 = (undefined8 ****)pppuStack_138;
      uVar5 = local_148[0];
    }
    else if (param_3 == 0) {
      local_1f0 = (undefined8 ****)*puVar10;
      local_1e8 = (undefined8 ****)puVar10[1];
      local_1e0 = (undefined8 ****)CONCAT17(local_1e0._7_1_,*(undefined7 *)(puVar10 + 2));
      _swift_retain();
      if (0 < param_4) {
        FUN_1006117fc(param_4);
      }
      FUN_100612cb0();
      local_288 = local_1f0;
      iVar9 = (int)local_1e0;
      uVar28 = local_1e0._4_2_;
      uVar5 = local_1e0._6_1_;
      _swift_beginAccess(local_1f0 + 3,local_238,0,0);
      lVar27 = (long)local_288[3] + (ulong)(uint)CONCAT21(uVar28,uVar5);
      uVar6 = local_1e8._4_4_;
      uVar29 = (ulong)local_1e8._4_4_;
      lVar17 = lVar27 + (ulong)(iVar9 - (uint)CONCAT21(uVar28,uVar5));
      FUN_10095a0a8();
      if (lVar17 == 0) {
        uVar16 = 0;
        param_4 = 0;
      }
      else {
        uVar16 = lVar17 + uVar29;
        if (param_4 < (long)(lVar27 - uVar29)) {
          param_4 = uVar16 + param_4;
        }
        else {
          param_4 = lVar17 + lVar27;
        }
      }
      FUN_1005ac3a8(uVar16,param_4,1,uVar3);
      uVar30 = (uint)uVar16;
      if (((uint)param_4 & 0xff) != 1) {
        _swift_errorRelease(pppppuVar13);
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8fc);
          (*pcVar7)();
        }
        if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf900);
          (*pcVar7)();
        }
        iVar18 = uVar6 + uVar30;
        if (CARRY4(uVar6,uVar30)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf904);
          (*pcVar7)();
        }
        goto LAB_100aaf5d8;
      }
      local_280[0] = uVar30;
      if ((bVar8 & 1) != 0) {
        _swift_willThrowTypedImpl(local_280,&DAT_100ee42f8,puVar12);
      }
      puVar14 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,puVar12,0,0);
      *puVar12 = uVar30;
      _swift_release(local_288);
      local_b8 = 0xd000000000000025;
      uStack_b0 = 0x8000000100dbb320;
      local_a8 = 0xd000000000000025;
      uStack_a0 = 0x8000000100db85f0;
      local_98 = 0x429;
      FUN_100a7e64c(local_190,0,puVar14,param_2[2],&local_b8);
      _swift_errorRelease(puVar14);
      _swift_errorRelease();
      ppppuVar19 = (undefined8 ****)local_168;
      ppppuVar20 = (undefined8 ****)pppuStack_160;
      ppppuVar21 = (undefined8 ****)local_158;
      ppppuVar22 = (undefined8 ****)pppuStack_150;
      ppppuVar23 = (undefined8 ****)pppuStack_170;
      ppppuVar24 = (undefined8 ****)local_178;
      ppppuVar25 = (undefined8 ****)local_188;
      ppppuVar26 = (undefined8 ****)pppuStack_180;
      uVar5 = local_190[0];
    }
    else {
      _swift_errorRelease(pppppuVar13);
      local_238[0] = CONCAT31(local_238[0]._1_3_,9);
      local_230 = (undefined8 ****)0xd000000000000013;
      pppuStack_228 = (undefined8 ****)0x8000000100db8620;
      pppuStack_218 = (undefined8 ****)0xd000000000000025;
      local_220 = (undefined8 ****)0x0;
      local_210 = (undefined8 ****)0x8000000100dbb320;
      pppuStack_208 = (undefined8 ****)0xd000000000000025;
      local_200 = (undefined8 ****)0x8000000100db85f0;
      pppuStack_1f8 = (undefined8 ****)0x41f;
      local_1f0 = (undefined8 ****)CONCAT71(local_1f0._1_7_,9);
      local_1e8 = (undefined8 ****)0xd000000000000013;
      local_1e0 = (undefined8 ****)0x8000000100db8620;
      pppuStack_1d0 = (undefined8 ***)0xd000000000000025;
      local_1d8 = (undefined8 ***)0x0;
      local_1c8 = (undefined8 ***)0x8000000100dbb320;
      pppuStack_1c0 = (undefined8 ***)0xd000000000000025;
      local_1b8 = (undefined8 ***)0x8000000100db85f0;
      pppuStack_1b0 = (undefined8 ***)0x41f;
      FUN_100a50050(local_238,local_280);
      pppppuVar13 = &local_1f0;
      FUN_100a5008c();
      ppppuVar19 = (undefined8 ****)local_210;
      ppppuVar20 = (undefined8 ****)pppuStack_208;
      ppppuVar21 = (undefined8 ****)local_200;
      ppppuVar22 = (undefined8 ****)pppuStack_1f8;
      ppppuVar23 = (undefined8 ****)pppuStack_218;
      ppppuVar24 = (undefined8 ****)local_220;
      ppppuVar25 = (undefined8 ****)local_230;
      ppppuVar26 = (undefined8 ****)pppuStack_228;
      uVar5 = (undefined1)local_238[0];
    }
    local_1f0 = (undefined8 ****)CONCAT71(local_1f0._1_7_,uVar5);
    pppppuVar15 = pppppuVar13;
    local_1e8 = ppppuVar25;
    local_1e0 = ppppuVar26;
    local_1d8 = ppppuVar24;
    pppuStack_1d0 = ppppuVar23;
    local_1c8 = ppppuVar19;
    pppuStack_1c0 = ppppuVar20;
    local_1b8 = ppppuVar21;
    pppuStack_1b0 = ppppuVar22;
    if ((bVar8 & 1) != 0) {
      FUN_100a500c0();
      pppppuVar15 = &local_1f0;
      _swift_willThrowTypedImpl(pppppuVar15,&DAT_100f2de38,pppppuVar13);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,pppppuVar15,0,0);
    *(undefined1 *)pppppuVar15 = uVar5;
    pppppuVar15[1] = ppppuVar25;
    pppppuVar15[2] = ppppuVar26;
    pppppuVar15[3] = ppppuVar24;
    pppppuVar15[4] = ppppuVar23;
    pppppuVar15[5] = ppppuVar19;
    pppppuVar15[6] = ppppuVar20;
    pppppuVar15[7] = ppppuVar21;
    pppppuVar15[8] = ppppuVar22;
  }
  else {
    if ((long)uVar29 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8f0);
      (*pcVar7)();
    }
    if (uVar29 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8f4);
      (*pcVar7)();
    }
    iVar18 = uVar6 + uVar30;
    if (CARRY4(uVar6,uVar30)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100aaf8f8);
      (*pcVar7)();
    }
LAB_100aaf5d8:
    *param_1 = local_288;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_1e8;
    *(int *)((long)param_1 + 0xc) = iVar18;
    *(int *)(param_1 + 2) = iVar9;
    *(undefined2 *)((long)param_1 + 0x14) = uVar28;
    *(undefined1 *)((long)param_1 + 0x16) = uVar5;
  }
  return;
}



/* Address: 0x100aaf904 | FUN_100aaf904 */

void FUN_100aaf904(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2d,param_3);
  _swift_bridgeObjectRelease(local_80);
  local_88 = 0xd00000000000001f;
  local_80 = 0x8000000100dbb350;
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar3.bridgeObject = param_3.unknown;
  SVar3.str = pcVar2;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(param_3.unknown);
  SVar4.bridgeObject = (void *)0xec0000002e646573;
  SVar4.str = (char *)0x6f6c632073692027;
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar4,SVar6);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  uStack_b0 = 0xd000000000000025;
  local_b8 = 0;
  local_a8 = 0x8000000100dbb320;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x43d;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  uStack_68 = 0xd000000000000025;
  local_70 = 0;
  local_60 = 0x8000000100dbb320;
  uStack_58 = 0xd000000000000025;
  local_50 = 0x8000000100db85f0;
  uStack_48 = 0x43d;
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = uStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100aafa34 | FUN_100aafa34 */

void FUN_100aafa34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = *unaff_x20;
  _swift_task_switch(FUN_100aafa54,0,0);
  return;
}



/* Address: 0x100aafa54 | FUN_100aafa54 */

void FUN_100aafa54(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f300e0;
  _swift_allocObject(&DAT_100f300e0,0x50,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a610f0;
  FUN_100912dec(plVar4,unaff_x22 + 0x70,FUN_100a64214,puVar3,&DAT_100eeaaa8);
  return;
}



/* Address: 0x100aafb28 | FUN_100aafb28 */

void FUN_100aafb28(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long unaff_x21;
  long lVar5;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 local_58;
  
  lVar5 = *param_2;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aafc48);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100ab0038(&local_a8);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,param_2,0,0);
      param_2[5] = lStack_80;
      param_2[4] = local_88;
      param_2[7] = lStack_70;
      param_2[6] = local_78;
      param_2[8] = local_68;
      param_2[1] = lStack_a0;
      *param_2 = local_a8;
      param_2[3] = lStack_90;
      param_2[2] = local_98;
      _swift_willThrow();
    }
    else {
      FUN_100aafc4c(&local_58,uVar1,param_3,param_4,param_2,param_5,param_6);
      if (unaff_x21 == 0) {
        *param_1 = local_58;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aafc4c);
  (*pcVar3)();
}



/* Address: 0x100aafc4c | FUN_100aafc4c */

void FUN_100aafc4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68;
  undefined8 *puVar3;
  
  uVar2 = param_3;
  uVar5 = param_4;
  FUN_100aa6998(param_3,param_4,param_2,param_6,param_7);
  if (((uint)uVar5 & 0xff) == 1) {
    local_f8 = uVar2;
    FUN_100aafdc8(&local_b0,&local_f8,param_4,param_2,param_3,param_5,param_6,param_7);
    FUN_1002ec258(uVar2,1);
    uVar2 = local_b0;
    if (local_68 == '\x01') {
      local_f8 = local_b0;
      uStack_e8 = uStack_a0;
      local_f0 = local_a8;
      uStack_d8 = uStack_90;
      uStack_e0 = local_98;
      uStack_c8 = uStack_80;
      local_d0 = local_88;
      uStack_b8 = uStack_70;
      uStack_c0 = local_78;
      bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar3 = (undefined8 *)CONCAT71(extraout_var,bVar1);
      puVar4 = puVar3;
      if ((bVar1 & 1) != 0) {
        FUN_100a500c0();
        puVar4 = &local_f8;
        _swift_willThrowTypedImpl(puVar4,&DAT_100f2de38,puVar3);
      }
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar4,0,0);
      *puVar4 = local_b0;
      puVar4[2] = uStack_a0;
      puVar4[1] = local_a8;
      puVar4[4] = uStack_90;
      puVar4[3] = local_98;
      puVar4[6] = uStack_80;
      puVar4[5] = local_88;
      puVar4[8] = uStack_70;
      puVar4[7] = local_78;
      return;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Address: 0x100aafdc8 | FUN_100aafdc8 */

void FUN_100aafdc8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [72];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar3 = *param_2;
  local_a8 = uVar3;
  _swift_errorRetain(uVar3);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar2 = &local_f0;
  _swift_dynamicCast(puVar2,&local_a8,puVar1,&DAT_100ee42f8,6);
  if ((((ulong)puVar2 & 1) == 0) || ((int)local_f0 != 0x1d)) {
    local_f0 = 0xd000000000000023;
    uStack_e8 = 0x8000000100db85c0;
    local_e0 = 0xd000000000000025;
    local_d8 = 0x8000000100db85f0;
    uStack_d0 = 0x473;
    FUN_100a82d5c(&local_a8,1,uVar3,*(undefined8 *)(param_6 + 0x10),&local_f0);
  }
  else {
    if (param_3 != 0) {
      local_f0 = CONCAT71(local_f0._1_7_,9);
      uStack_e8 = 0xd000000000000013;
      local_e0 = 0x8000000100db8620;
      uStack_d0 = 0xd000000000000023;
      local_d8 = 0;
      local_c8 = 0x8000000100db85c0;
      uStack_c0 = 0xd000000000000025;
      local_b8 = 0x8000000100db85f0;
      local_b0 = 0x45f;
      local_a8 = CONCAT71(local_a8._1_7_,9);
      uStack_a0 = 0xd000000000000013;
      uStack_98 = 0x8000000100db8620;
      uStack_88 = 0xd000000000000023;
      local_90 = 0;
      local_80 = 0x8000000100db85c0;
      local_78 = 0xd000000000000025;
      uStack_70 = 0x8000000100db85f0;
      local_68 = 0x45f;
      FUN_100a50050(&local_f0,auStack_138);
      FUN_100a5008c(&local_a8);
      param_1[5] = local_c8;
      param_1[4] = uStack_d0;
      param_1[7] = local_b8;
      param_1[6] = uStack_c0;
      param_1[8] = local_b0;
      param_1[1] = uStack_e8;
      *param_1 = local_f0;
      param_1[3] = local_d8;
      param_1[2] = local_e0;
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
    FUN_100aa6a78(param_5,param_4,param_7,param_8);
    if (((uint)param_4 & 0xff) != 1) {
      *param_1 = param_5;
      *(undefined1 *)(param_1 + 9) = 0;
      return;
    }
    local_f0 = 0xd000000000000023;
    uStack_e8 = 0x8000000100db85c0;
    local_e0 = 0xd000000000000025;
    local_d8 = 0x8000000100db85f0;
    uStack_d0 = 0x46a;
    FUN_100a82d5c(&local_a8,0,param_5,*(undefined8 *)(param_6 + 0x10),&local_f0);
    FUN_1002ec258(param_5,1);
  }
  param_1[5] = local_80;
  param_1[4] = uStack_88;
  param_1[7] = uStack_70;
  param_1[6] = local_78;
  param_1[8] = local_68;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  param_1[3] = local_90;
  param_1[2] = uStack_98;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



/* Address: 0x100ab0038 | FUN_100ab0038 */

void FUN_100ab0038(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2e,param_3);
  _swift_bridgeObjectRelease(local_80);
  local_88 = 0xd000000000000020;
  local_80 = 0x8000000100dbb2f0;
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar3.bridgeObject = param_3.unknown;
  SVar3.str = pcVar2;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(param_3.unknown);
  SVar4.bridgeObject = (void *)0xec0000002e646573;
  SVar4.str = (char *)0x6f6c632073692027;
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar4,SVar6);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  uStack_b0 = 0xd000000000000023;
  local_b8 = 0;
  local_a8 = 0x8000000100db85c0;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x47e;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  uStack_68 = 0xd000000000000023;
  local_70 = 0;
  local_60 = 0x8000000100db85c0;
  uStack_58 = 0xd000000000000025;
  local_50 = 0x8000000100db85f0;
  uStack_48 = 0x47e;
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = uStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100ab0168 | FUN_100ab0168 */

void FUN_100ab0168(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
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
  undefined8 *puVar2;
  
  puVar3 = &local_c0;
  FUN_100ab0234(&local_70,param_2);
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
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_c0,&DAT_100f2de38,puVar2);
      puVar2 = puVar3;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar2,0,0);
    puVar2[5] = uStack_48;
    puVar2[4] = local_50;
    puVar2[7] = uStack_38;
    puVar2[6] = uStack_40;
    puVar2[8] = local_30;
    puVar2[1] = uStack_68;
    *puVar2 = local_70;
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
  }
  return;
}



/* Address: 0x100ab0234 | FUN_100ab0234 */

void FUN_100ab0234(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puVar6;
  
  lVar10 = *unaff_x20;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ab03bc);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar10 + 0x10);
  cVar2 = *(char *)(lVar10 + 0x14);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x18));
  if (iVar5 == 0) {
    if (cVar2 == '\x01') {
      FUN_100ab0608(&local_b0);
      uVar9 = 1;
    }
    else {
      FUN_1005ac6a4(param_2,1,uVar1);
      if ((param_2 & 0xff00000000) == 0x100000000) {
        local_68 = CONCAT44(local_68._4_4_,(int)param_2);
        bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar6 = (undefined8 *)CONCAT71(extraout_var,bVar4);
        puVar7 = puVar6;
        if ((bVar4 & 1) != 0) {
          FUN_100a54208();
          puVar7 = &local_68;
          _swift_willThrowTypedImpl(puVar7,&DAT_100ee42f8,puVar6);
        }
        FUN_100a54208();
        puVar8 = &DAT_100ee42f8;
        _swift_allocError(&DAT_100ee42f8,puVar7,0,0);
        *(int *)puVar7 = (int)param_2;
        local_68 = 0x28657a697365725f;
        uStack_60 = 0xec000000293a6f74;
        local_58 = 0xd000000000000025;
        uStack_50 = 0x8000000100db85f0;
        local_48 = 0x492;
        FUN_100a8298c(&local_b0);
        uVar9 = 1;
        FUN_1002ec258(puVar8,1);
      }
      else {
        uVar9 = 0;
      }
    }
    param_1[5] = uStack_88;
    param_1[4] = local_90;
    param_1[7] = uStack_78;
    param_1[6] = uStack_80;
    param_1[8] = local_70;
    param_1[1] = uStack_a8;
    *param_1 = local_b0;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
    *(undefined1 *)(param_1 + 9) = uVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ab03c0);
  (*pcVar3)();
}



/* Address: 0x100ab03c0 | FUN_100ab03c0 */

void FUN_100ab03c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838ee4;
  FUN_100aa9ca0(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100ab0440 | FUN_100ab0440 */

void FUN_100ab0440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100ab045c,0,0);
  return;
}



/* Address: 0x100ab045c | FUN_100ab045c */

void FUN_100ab045c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(lVar2 + 0x31);
  uVar5 = *(undefined8 *)(lVar2 + 0x29);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar3 = &DAT_100f300b8;
  _swift_allocObject(&DAT_100f300b8,0x48,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar3;
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar9;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a61d94;
  FUN_100912dec();
  return;
}



/* Address: 0x100ab0520 | FUN_100ab0520 */

void FUN_100ab0520(undefined1 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100ab0540,0,0);
  return;
}



/* Address: 0x100ab0540 | FUN_100ab0540 */

void FUN_100ab0540(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f30090;
  _swift_allocObject(&DAT_100f30090,0x3a,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  puVar2[0x39] = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100ab0608 | FUN_100ab0608 */

void FUN_100ab0608(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char acStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char acStack_68 [40];
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1b,param_3);
  _swift_bridgeObjectRelease(local_80);
  local_88 = 0xd000000000000017;
  local_80 = 0x8000000100dbb2d0;
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar3.bridgeObject = param_3.unknown;
  SVar3.str = pcVar2;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(param_3.unknown);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x2e27;
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar4,SVar6);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  builtin_strncpy(acStack_b0,"_resize(",8);
  local_b8 = 0;
  local_a8 = 0xec000000293a6f74;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x499;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  builtin_strncpy(acStack_68,"_resize(to:)",0xd);
  local_70 = 0;
  acStack_68[0xd] = '\0';
  acStack_68[0xe] = '\0';
  acStack_68[0xf] = -0x14;
  acStack_68[0x10] = '%';
  acStack_68[0x11] = '\0';
  acStack_68[0x12] = '\0';
  acStack_68[0x13] = '\0';
  acStack_68[0x14] = '\0';
  acStack_68[0x15] = '\0';
  acStack_68[0x16] = '\0';
  acStack_68[0x17] = -0x30;
  acStack_68[0x18] = -0x10;
  acStack_68[0x19] = -0x7b;
  acStack_68[0x1a] = -0x25;
  acStack_68[0x1b] = '\0';
  acStack_68[0x1c] = '\x01';
  acStack_68[0x1d] = '\0';
  acStack_68[0x1e] = '\0';
  acStack_68[0x1f] = -0x80;
  acStack_68[0x20] = -0x67;
  acStack_68[0x21] = '\x04';
  acStack_68[0x22] = '\0';
  acStack_68[0x23] = '\0';
  acStack_68[0x24] = '\0';
  acStack_68[0x25] = '\0';
  acStack_68[0x26] = '\0';
  acStack_68[0x27] = '\0';
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = acStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100ab0720 | FUN_100ab0720 */

void FUN_100ab0720(char (*param_1) [8],long *param_2,char param_3 [8],undefined4 param_4,
                  uint3 param_5,ulong param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  __int32 _Var10;
  char acVar11 [8];
  undefined4 extraout_var_00;
  char acVar13 [8];
  undefined *puVar14;
  undefined7 extraout_var;
  pthread_mutexattr_t *ppVar16;
  long lVar17;
  char acVar18 [8];
  char local_278 [8];
  char local_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  pthread_mutexattr_t local_240;
  undefined8 uStack_230;
  ulong local_228;
  long lStack_220;
  undefined8 local_218;
  long lStack_210;
  undefined8 local_208;
  long lStack_200;
  char local_1f0 [8];
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  char local_1a8 [8];
  char local_1a0 [8];
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined8 local_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  char local_160;
  char local_158 [8];
  char local_150 [8];
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char local_110;
  char local_108 [8];
  char local_100 [8];
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  char local_c0 [8];
  char local_b8 [8];
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long local_78;
  __int32 *p_Var12;
  pthread_mutexattr_t *ppVar15;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_6 >> 0x28 & 1) == 0) {
LAB_100ab0770:
    lVar17 = *param_2;
    iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x18));
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab0bd4);
      (*pcVar7)();
    }
    cVar2 = *(char *)(lVar17 + 0x14);
    uVar1 = 0;
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(lVar17 + 0x10);
    }
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x18));
    puVar14 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab0bd8);
      (*pcVar7)();
    }
    if (cVar2 == '\x01') {
      FUN_100ab1620(local_108,param_3,param_2);
      lStack_1e8 = lStack_f8;
      local_1f0[0] = local_100[0];
      local_1f0[1] = local_100[1];
      local_1f0[2] = local_100[2];
      local_1f0[3] = local_100[3];
      local_1f0[4] = local_100[4];
      local_1f0[5] = local_100[5];
      local_1f0[6] = local_100[6];
      local_1f0[7] = local_100[7];
      lStack_1d8 = lStack_e8;
      uStack_1e0 = local_f0;
      lStack_1c8 = lStack_d8;
      local_1d0 = local_e0;
      lStack_1b8 = lStack_c8;
      uStack_1c0 = local_d0;
      acVar11 = local_108;
    }
    else {
      do {
        Darwin::set_errno((Darwin *)param_3,0);
        uStack_230 = CONCAT53(uStack_230._3_5_,param_5);
        uStack_230 = CONCAT44(uVar1,(undefined4)uStack_230);
        local_228 = CONCAT44(param_4,param_4) | 2;
        FUN_1005b32d0(local_278,FUN_100ab33c0,&local_240,param_3,puVar14);
        uVar3 = local_278._0_4_;
        if (local_278._0_4_ != -1) {
          local_270 = *(char (*) [8])(param_2 + 2);
          _swift_bridgeObjectRetain(param_3);
          acVar11 = (char  [8])&local_240;
          FUN_100ab3308(local_270);
          FUN_1005ad054();
          local_278[0] = local_270[0];
          local_278[1] = local_270[1];
          local_278[2] = local_270[2];
          local_278[3] = local_270[3];
          local_278[4] = local_270[4];
          local_278[5] = local_270[5];
          local_278[6] = local_270[6];
          local_278[7] = local_270[7];
          local_240.__sig = (long)param_3;
          local_240.__opaque = acVar11;
          FUN_100ab2cf4();
          FUN_1005b62b0(&local_240,&DAT_100ee49c8,param_3);
          acVar13 = local_278;
          FUN_1005b5b8c();
          lVar17 = param_2[1];
          acVar11 = acVar13;
          FUN_100ab2d90();
          _swift_allocObject();
          puVar14 = &DAT_100ff6ea0;
          FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
          _swift_allocObject();
          *(undefined4 *)(puVar14 + 0x10) = uVar3;
          puVar14[0x14] = 0;
          local_240.__sig._0_1_ = '\0';
          local_240.__sig._1_1_ = '\0';
          local_240.__sig._2_1_ = '\0';
          local_240.__sig._3_1_ = '\0';
          local_240.__sig._4_1_ = '\0';
          local_240.__sig._5_1_ = '\0';
          local_240.__sig._6_1_ = '\0';
          local_240.__sig._7_1_ = '\0';
          local_240.__opaque[0] = '\0';
          local_240.__opaque[1] = '\0';
          local_240.__opaque[2] = '\0';
          local_240.__opaque[3] = '\0';
          local_240.__opaque[4] = '\0';
          local_240.__opaque[5] = '\0';
          local_240.__opaque[6] = '\0';
          local_240.__opaque[7] = '\0';
          _swift_retain(lVar17);
          _pthread_mutexattr_init(&local_240);
          iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar14 + 0x18),&local_240);
          if (iVar9 != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab0bdc);
            (*pcVar7)();
          }
          *(undefined **)((long)acVar11 + 0x10) = puVar14;
          *(long *)((long)acVar11 + 0x18) = lVar17;
          *(undefined8 *)((long)acVar11 + 0x28) = 0;
          *(undefined8 *)((long)acVar11 + 0x30) = 0;
          *(char (*) [8])((long)acVar11 + 0x20) = acVar13;
          *(Darwin *)((long)acVar11 + 0x38) = (Darwin)0x0;
          goto LAB_100ab0a04;
        }
        _Var10 = Darwin::get_errno();
        p_Var12 = (__int32 *)CONCAT44(extraout_var_00,_Var10);
      } while (_Var10 == 4);
      FUN_100a54208();
      puVar14 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,p_Var12,0,0);
      *p_Var12 = _Var10;
      local_268 = 0xd00000000000003f;
      uStack_260 = 0x8000000100dbb290;
      local_258 = 0xd000000000000025;
      uStack_250 = 0x8000000100db85f0;
      local_248 = 0x52c;
      FUN_100a7da48(local_c0,0x74616e65706f,&DAT_e600000000000000,puVar14,param_2[2],&local_268);
      _swift_errorRelease(puVar14);
      lStack_1e8 = lStack_b0;
      local_1f0[0] = local_b8[0];
      local_1f0[1] = local_b8[1];
      local_1f0[2] = local_b8[2];
      local_1f0[3] = local_b8[3];
      local_1f0[4] = local_b8[4];
      local_1f0[5] = local_b8[5];
      local_1f0[6] = local_b8[6];
      local_1f0[7] = local_b8[7];
      lStack_1d8 = lStack_a0;
      uStack_1e0 = uStack_a8;
      lStack_1c8 = lStack_90;
      local_1d0 = local_98;
      lStack_1b8 = lStack_80;
      uStack_1c0 = uStack_88;
      acVar11 = local_c0;
    }
  }
  else {
    acVar11 = param_3;
    acVar13 = param_3;
    FUN_1005b4370();
    if (((ulong)acVar11 & 1) == 0) {
      acVar18 = *(char (*) [8])(param_2 + 2);
      acVar11 = acVar18;
      _swift_bridgeObjectRetain();
      FUN_1005b4370();
      if (((ulong)acVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(acVar18);
        goto LAB_100ab0770;
      }
      _swift_bridgeObjectRetain();
      FUN_1005ad054();
      local_278 = acVar18;
      local_240.__sig = (long)param_3;
      local_240.__opaque = acVar13;
      FUN_100ab2cf4();
      FUN_1005b62b0(&local_240,&DAT_100ee49c8,param_3);
      acVar11 = local_278;
      FUN_100ab2300(local_158,local_278,2,param_4,(uint)param_5,1,param_2[1]);
      lStack_1e8 = lStack_148;
      local_1f0[0] = local_150[0];
      local_1f0[1] = local_150[1];
      local_1f0[2] = local_150[2];
      local_1f0[3] = local_150[3];
      local_1f0[4] = local_150[4];
      local_1f0[5] = local_150[5];
      local_1f0[6] = local_150[6];
      local_1f0[7] = local_150[7];
      lStack_1d8 = lStack_138;
      uStack_1e0 = uStack_140;
      lStack_1c8 = lStack_128;
      local_1d0 = local_130;
      lStack_1b8 = lStack_118;
      uStack_1c0 = uStack_120;
      _swift_bridgeObjectRelease(acVar11);
      acVar11 = local_158;
    }
    else {
      FUN_100ab2300(local_1a8,param_3,2,param_4,(uint)param_5,1,param_2[1]);
      local_1f0 = local_1a0;
      lStack_1e8 = lStack_198;
      uStack_1e0 = uStack_190;
      lStack_1d8 = lStack_188;
      local_1d0 = local_180;
      lStack_1c8 = lStack_178;
      uStack_1c0 = uStack_170;
      lStack_1b8 = lStack_168;
      acVar11 = local_1a8;
      local_110 = local_160;
    }
    if (local_110 != '\x01') {
LAB_100ab0a04:
      *param_1 = acVar11;
      goto LAB_100ab0b84;
    }
  }
  uStack_230 = lStack_1e8;
  local_240.__opaque[0] = local_1f0[0];
  local_240.__opaque[1] = local_1f0[1];
  local_240.__opaque[2] = local_1f0[2];
  local_240.__opaque[3] = local_1f0[3];
  local_240.__opaque[4] = local_1f0[4];
  local_240.__opaque[5] = local_1f0[5];
  local_240.__opaque[6] = local_1f0[6];
  local_240.__opaque[7] = local_1f0[7];
  lStack_220 = lStack_1d8;
  local_228 = uStack_1e0;
  lStack_210 = lStack_1c8;
  local_218 = local_1d0;
  lStack_200 = lStack_1b8;
  local_208 = uStack_1c0;
  local_240.__sig = (long)acVar11;
  bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  ppVar15 = (pthread_mutexattr_t *)CONCAT71(extraout_var,bVar8);
  ppVar16 = ppVar15;
  if ((bVar8 & 1) != 0) {
    FUN_100a500c0();
    ppVar16 = &local_240;
    _swift_willThrowTypedImpl(ppVar16,&DAT_100f2de38,ppVar15);
  }
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,ppVar16,0,0);
  ppVar16->__sig = (long)acVar11;
  lVar17 = lStack_1d8;
  uVar4 = uStack_1e0;
  acVar11 = local_1f0;
  ppVar16[1].__sig = lStack_1e8;
  *&ppVar16->__opaque = acVar11;
  ppVar16[2].__sig = lVar17;
  *(ulong *)ppVar16[1].__opaque = uVar4;
  lVar17 = lStack_1b8;
  uVar6 = uStack_1c0;
  uVar5 = local_1d0;
  ppVar16[3].__sig = lStack_1c8;
  *(undefined8 *)ppVar16[2].__opaque = uVar5;
  ppVar16[4].__sig = lVar17;
  *(undefined8 *)ppVar16[3].__opaque = uVar6;
LAB_100ab0b84:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ab0be0 | FUN_100ab0be0 */

void FUN_100ab0be0(char (*param_1) [8],long *param_2,char param_3 [8],undefined4 param_4,
                  uint3 param_5,ulong param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  __int32 _Var10;
  char acVar11 [8];
  undefined4 extraout_var_00;
  char acVar13 [8];
  undefined *puVar14;
  undefined7 extraout_var;
  pthread_mutexattr_t *ppVar16;
  long lVar17;
  char acVar18 [8];
  char local_278 [8];
  char local_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  pthread_mutexattr_t local_240;
  undefined8 uStack_230;
  ulong local_228;
  long lStack_220;
  undefined8 local_218;
  long lStack_210;
  undefined8 local_208;
  long lStack_200;
  char local_1f0 [8];
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  char local_1a8 [8];
  char local_1a0 [8];
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined8 local_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  char local_160;
  char local_158 [8];
  char local_150 [8];
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char local_110;
  char local_108 [8];
  char local_100 [8];
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  char local_c0 [8];
  char local_b8 [8];
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long local_78;
  __int32 *p_Var12;
  pthread_mutexattr_t *ppVar15;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_6 >> 0x28 & 1) == 0) {
LAB_100ab0c30:
    lVar17 = *param_2;
    iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x18));
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab1094);
      (*pcVar7)();
    }
    cVar2 = *(char *)(lVar17 + 0x14);
    uVar1 = 0;
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(lVar17 + 0x10);
    }
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x18));
    puVar14 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab1098);
      (*pcVar7)();
    }
    if (cVar2 == '\x01') {
      FUN_100ab1620(local_108,param_3,param_2);
      lStack_1e8 = lStack_f8;
      local_1f0[0] = local_100[0];
      local_1f0[1] = local_100[1];
      local_1f0[2] = local_100[2];
      local_1f0[3] = local_100[3];
      local_1f0[4] = local_100[4];
      local_1f0[5] = local_100[5];
      local_1f0[6] = local_100[6];
      local_1f0[7] = local_100[7];
      lStack_1d8 = lStack_e8;
      uStack_1e0 = local_f0;
      lStack_1c8 = lStack_d8;
      local_1d0 = local_e0;
      lStack_1b8 = lStack_c8;
      uStack_1c0 = local_d0;
      acVar11 = local_108;
    }
    else {
      do {
        Darwin::set_errno((Darwin *)param_3,0);
        uStack_230 = CONCAT53(uStack_230._3_5_,param_5);
        uStack_230 = CONCAT44(uVar1,(undefined4)uStack_230);
        local_228 = CONCAT44(param_4,param_4) | 1;
        FUN_1005b32d0(local_278,FUN_100ab33c0,&local_240,param_3,puVar14);
        uVar3 = local_278._0_4_;
        if (local_278._0_4_ != -1) {
          local_270 = *(char (*) [8])(param_2 + 2);
          _swift_bridgeObjectRetain(param_3);
          acVar11 = (char  [8])&local_240;
          FUN_100ab3308(local_270);
          FUN_1005ad054();
          local_278[0] = local_270[0];
          local_278[1] = local_270[1];
          local_278[2] = local_270[2];
          local_278[3] = local_270[3];
          local_278[4] = local_270[4];
          local_278[5] = local_270[5];
          local_278[6] = local_270[6];
          local_278[7] = local_270[7];
          local_240.__sig = (long)param_3;
          local_240.__opaque = acVar11;
          FUN_100ab2cf4();
          FUN_1005b62b0(&local_240,&DAT_100ee49c8,param_3);
          acVar13 = local_278;
          FUN_1005b5b8c();
          lVar17 = param_2[1];
          acVar11 = acVar13;
          FUN_100ab2d90();
          _swift_allocObject();
          puVar14 = &DAT_100ff6ea0;
          FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
          _swift_allocObject();
          *(undefined4 *)(puVar14 + 0x10) = uVar3;
          puVar14[0x14] = 0;
          local_240.__sig._0_1_ = '\0';
          local_240.__sig._1_1_ = '\0';
          local_240.__sig._2_1_ = '\0';
          local_240.__sig._3_1_ = '\0';
          local_240.__sig._4_1_ = '\0';
          local_240.__sig._5_1_ = '\0';
          local_240.__sig._6_1_ = '\0';
          local_240.__sig._7_1_ = '\0';
          local_240.__opaque[0] = '\0';
          local_240.__opaque[1] = '\0';
          local_240.__opaque[2] = '\0';
          local_240.__opaque[3] = '\0';
          local_240.__opaque[4] = '\0';
          local_240.__opaque[5] = '\0';
          local_240.__opaque[6] = '\0';
          local_240.__opaque[7] = '\0';
          _swift_retain(lVar17);
          _pthread_mutexattr_init(&local_240);
          iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar14 + 0x18),&local_240);
          if (iVar9 != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab109c);
            (*pcVar7)();
          }
          *(undefined **)((long)acVar11 + 0x10) = puVar14;
          *(long *)((long)acVar11 + 0x18) = lVar17;
          *(undefined8 *)((long)acVar11 + 0x28) = 0;
          *(undefined8 *)((long)acVar11 + 0x30) = 0;
          *(char (*) [8])((long)acVar11 + 0x20) = acVar13;
          *(Darwin *)((long)acVar11 + 0x38) = (Darwin)0x0;
          goto LAB_100ab0ec4;
        }
        _Var10 = Darwin::get_errno();
        p_Var12 = (__int32 *)CONCAT44(extraout_var_00,_Var10);
      } while (_Var10 == 4);
      FUN_100a54208();
      puVar14 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,p_Var12,0,0);
      *p_Var12 = _Var10;
      local_268 = 0xd00000000000003f;
      uStack_260 = 0x8000000100dbb290;
      local_258 = 0xd000000000000025;
      uStack_250 = 0x8000000100db85f0;
      local_248 = 0x52c;
      FUN_100a7da48(local_c0,0x74616e65706f,&DAT_e600000000000000,puVar14,param_2[2],&local_268);
      _swift_errorRelease(puVar14);
      lStack_1e8 = lStack_b0;
      local_1f0[0] = local_b8[0];
      local_1f0[1] = local_b8[1];
      local_1f0[2] = local_b8[2];
      local_1f0[3] = local_b8[3];
      local_1f0[4] = local_b8[4];
      local_1f0[5] = local_b8[5];
      local_1f0[6] = local_b8[6];
      local_1f0[7] = local_b8[7];
      lStack_1d8 = lStack_a0;
      uStack_1e0 = uStack_a8;
      lStack_1c8 = lStack_90;
      local_1d0 = local_98;
      lStack_1b8 = lStack_80;
      uStack_1c0 = uStack_88;
      acVar11 = local_c0;
    }
  }
  else {
    acVar11 = param_3;
    acVar13 = param_3;
    FUN_1005b4370();
    if (((ulong)acVar11 & 1) == 0) {
      acVar18 = *(char (*) [8])(param_2 + 2);
      acVar11 = acVar18;
      _swift_bridgeObjectRetain();
      FUN_1005b4370();
      if (((ulong)acVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(acVar18);
        goto LAB_100ab0c30;
      }
      _swift_bridgeObjectRetain();
      FUN_1005ad054();
      local_278 = acVar18;
      local_240.__sig = (long)param_3;
      local_240.__opaque = acVar13;
      FUN_100ab2cf4();
      FUN_1005b62b0(&local_240,&DAT_100ee49c8,param_3);
      acVar11 = local_278;
      FUN_100ab2300(local_158,local_278,1,param_4,(uint)param_5,1,param_2[1]);
      lStack_1e8 = lStack_148;
      local_1f0[0] = local_150[0];
      local_1f0[1] = local_150[1];
      local_1f0[2] = local_150[2];
      local_1f0[3] = local_150[3];
      local_1f0[4] = local_150[4];
      local_1f0[5] = local_150[5];
      local_1f0[6] = local_150[6];
      local_1f0[7] = local_150[7];
      lStack_1d8 = lStack_138;
      uStack_1e0 = uStack_140;
      lStack_1c8 = lStack_128;
      local_1d0 = local_130;
      lStack_1b8 = lStack_118;
      uStack_1c0 = uStack_120;
      _swift_bridgeObjectRelease(acVar11);
      acVar11 = local_158;
    }
    else {
      FUN_100ab2300(local_1a8,param_3,1,param_4,(uint)param_5,1,param_2[1]);
      local_1f0 = local_1a0;
      lStack_1e8 = lStack_198;
      uStack_1e0 = uStack_190;
      lStack_1d8 = lStack_188;
      local_1d0 = local_180;
      lStack_1c8 = lStack_178;
      uStack_1c0 = uStack_170;
      lStack_1b8 = lStack_168;
      acVar11 = local_1a8;
      local_110 = local_160;
    }
    if (local_110 != '\x01') {
LAB_100ab0ec4:
      *param_1 = acVar11;
      goto LAB_100ab1044;
    }
  }
  uStack_230 = lStack_1e8;
  local_240.__opaque[0] = local_1f0[0];
  local_240.__opaque[1] = local_1f0[1];
  local_240.__opaque[2] = local_1f0[2];
  local_240.__opaque[3] = local_1f0[3];
  local_240.__opaque[4] = local_1f0[4];
  local_240.__opaque[5] = local_1f0[5];
  local_240.__opaque[6] = local_1f0[6];
  local_240.__opaque[7] = local_1f0[7];
  lStack_220 = lStack_1d8;
  local_228 = uStack_1e0;
  lStack_210 = lStack_1c8;
  local_218 = local_1d0;
  lStack_200 = lStack_1b8;
  local_208 = uStack_1c0;
  local_240.__sig = (long)acVar11;
  bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  ppVar15 = (pthread_mutexattr_t *)CONCAT71(extraout_var,bVar8);
  ppVar16 = ppVar15;
  if ((bVar8 & 1) != 0) {
    FUN_100a500c0();
    ppVar16 = &local_240;
    _swift_willThrowTypedImpl(ppVar16,&DAT_100f2de38,ppVar15);
  }
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,ppVar16,0,0);
  ppVar16->__sig = (long)acVar11;
  lVar17 = lStack_1d8;
  uVar4 = uStack_1e0;
  acVar11 = local_1f0;
  ppVar16[1].__sig = lStack_1e8;
  *&ppVar16->__opaque = acVar11;
  ppVar16[2].__sig = lVar17;
  *(ulong *)ppVar16[1].__opaque = uVar4;
  lVar17 = lStack_1b8;
  uVar6 = uStack_1c0;
  uVar5 = local_1d0;
  ppVar16[3].__sig = lStack_1c8;
  *(undefined8 *)ppVar16[2].__opaque = uVar5;
  ppVar16[4].__sig = lVar17;
  *(undefined8 *)ppVar16[3].__opaque = uVar6;
LAB_100ab1044:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ab10a0 | FUN_100ab10a0 */

void FUN_100ab10a0(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100ab10f0();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ab10f0 | FUN_100ab10f0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100ab10f0(long *param_1,long *param_2,Darwin *param_3,undefined4 param_4,undefined8 param_5
                  )

{
  undefined4 uVar1;
  char cVar2;
  char acVar3 [8];
  char acVar4 [8];
  code *pcVar5;
  byte bVar6;
  int iVar7;
  __int32 _Var8;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  pthread_mutexattr_t *ppVar11;
  long lVar12;
  undefined *puVar13;
  char acVar14 [8];
  long *plVar15;
  long lVar16;
  long lVar17;
  char (*pacVar18) [8];
  long local_1d8;
  long local_1d0 [6];
  pthread_mutexattr_t local_1a0;
  undefined8 uStack_190;
  undefined8 local_188;
  char acStack_180 [8];
  char local_178 [8];
  char acStack_170 [8];
  char local_168 [8];
  char acStack_160 [8];
  char local_150 [8];
  char acStack_148 [8];
  char acStack_140 [8];
  char acStack_138 [8];
  char local_130 [8];
  char acStack_128 [8];
  char acStack_120 [8];
  char acStack_118 [8];
  long local_108;
  char local_100 [64];
  long lStack_c0;
  char acStack_b8 [64];
  long local_78;
  __int32 *p_Var9;
  pthread_mutexattr_t *ppVar10;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar16 = *param_2;
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab144c);
    (*pcVar5)();
  }
  cVar2 = *(char *)(lVar16 + 0x14);
  uVar1 = 0;
  if (cVar2 != '\x01') {
    uVar1 = *(undefined4 *)(lVar16 + 0x10);
  }
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x18));
  puVar13 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab1450);
    (*pcVar5)();
  }
  if (cVar2 == '\x01') {
    pacVar18 = (char (*) [8])local_100;
    plVar15 = &local_108;
    FUN_100ab1620(&local_108,param_3,param_2);
  }
  else {
    pacVar18 = (char (*) [8])acStack_b8;
    do {
      Darwin::set_errno(param_3,0);
      uStack_190._0_4_ = (undefined4)CONCAT53(uStack_190._3_5_,0x10000);
      uStack_190._4_1_ = (char)uVar1;
      uStack_190._5_1_ = (char)((uint)uVar1 >> 8);
      uStack_190._6_1_ = (char)((uint)uVar1 >> 0x10);
      uStack_190._7_1_ = (char)((uint)uVar1 >> 0x18);
      local_188._4_4_ = param_4;
      local_188._0_4_ = param_4;
      FUN_1005b32d0(&local_1d8,param_5,&local_1a0,param_3,puVar13);
      iVar7 = (int)local_1d8;
      if ((int)local_1d8 != -1) {
        local_1d0[0] = param_2[2];
        acVar14 = (char  [8])&local_1a0;
        FUN_100ab3308(local_1d0);
        _swift_bridgeObjectRetain();
        FUN_1005ad054();
        local_1d8 = local_1d0[0];
        local_1a0.__sig = (long)param_3;
        local_1a0.__opaque = acVar14;
        FUN_100ab2cf4();
        FUN_1005b62b0(&local_1a0,&DAT_100ee49c8,param_3);
        lVar16 = local_1d8;
        FUN_1005b5b8c();
        lVar17 = param_2[1];
        lVar12 = lVar16;
        FUN_100ab2d90();
        _swift_allocObject();
        puVar13 = &DAT_100ff6ea0;
        FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
        _swift_allocObject();
        *(int *)(puVar13 + 0x10) = iVar7;
        puVar13[0x14] = 0;
        local_1a0.__sig = 0;
        local_1a0.__opaque[0] = '\0';
        local_1a0.__opaque[1] = '\0';
        local_1a0.__opaque[2] = '\0';
        local_1a0.__opaque[3] = '\0';
        local_1a0.__opaque[4] = '\0';
        local_1a0.__opaque[5] = '\0';
        local_1a0.__opaque[6] = '\0';
        local_1a0.__opaque[7] = '\0';
        _swift_retain(lVar17);
        _pthread_mutexattr_init(&local_1a0);
        iVar7 = _pthread_mutex_init((pthread_mutex_t *)(puVar13 + 0x18),&local_1a0);
        if (iVar7 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab1454);
          (*pcVar5)();
        }
        *(undefined **)(lVar12 + 0x10) = puVar13;
        *(long *)(lVar12 + 0x18) = lVar17;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(long *)(lVar12 + 0x20) = lVar16;
        *(undefined1 *)(lVar12 + 0x38) = 0;
        *param_1 = lVar12;
        goto LAB_100ab140c;
      }
      _Var8 = Darwin::get_errno();
      p_Var9 = (__int32 *)CONCAT44(extraout_var_00,_Var8);
    } while (_Var8 == 4);
    FUN_100a54208();
    puVar13 = &DAT_100ee42f8;
    _swift_allocError(&DAT_100ee42f8,p_Var9,0,0);
    *p_Var9 = _Var8;
    local_1d0[1] = 0xd00000000000003f;
    local_1d0[2] = 0x8000000100dbb290;
    local_1d0[3] = 0xd000000000000025;
    local_1d0[4] = 0x8000000100db85f0;
    local_1d0[5] = 0x52c;
    plVar15 = &lStack_c0;
    FUN_100a7da48(&lStack_c0,0x74616e65706f,&DAT_e600000000000000,puVar13,param_2[2],local_1d0 + 1);
    _swift_errorRelease(puVar13);
  }
  lVar16 = *plVar15;
  uStack_190 = pacVar18[1];
  local_1a0.__opaque = *pacVar18;
  acStack_180 = pacVar18[3];
  local_188 = pacVar18[2];
  acStack_170 = pacVar18[5];
  local_178 = pacVar18[4];
  acStack_160 = pacVar18[7];
  local_168 = pacVar18[6];
  local_1a0.__sig = lVar16;
  local_150 = local_1a0.__opaque;
  acStack_148 = uStack_190;
  acStack_140 = local_188;
  acStack_138 = acStack_180;
  local_130 = local_178;
  acStack_128 = acStack_170;
  acStack_120 = local_168;
  acStack_118 = acStack_160;
  bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  ppVar10 = (pthread_mutexattr_t *)CONCAT71(extraout_var,bVar6);
  ppVar11 = ppVar10;
  if ((bVar6 & 1) != 0) {
    FUN_100a500c0();
    ppVar11 = &local_1a0;
    _swift_willThrowTypedImpl(ppVar11,&DAT_100f2de38,ppVar10);
  }
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,ppVar11,0,0);
  ppVar11->__sig = lVar16;
  acVar4 = acStack_138;
  acVar3 = acStack_140;
  acVar14 = local_150;
  ppVar11[1].__sig = (long)acStack_148;
  *&ppVar11->__opaque = acVar14;
  ppVar11[2].__sig = (long)acVar4;
  *&ppVar11[1].__opaque = acVar3;
  acVar4 = acStack_118;
  acVar3 = acStack_120;
  acVar14 = local_130;
  ppVar11[3].__sig = (long)acStack_128;
  *&ppVar11[2].__opaque = acVar14;
  ppVar11[4].__sig = (long)acVar4;
  *&ppVar11[3].__opaque = acVar3;
LAB_100ab140c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ab1458 | FUN_100ab1458 */

void FUN_100ab1458(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bc5c;
  FUN_100aaa0d8(param_2,param_3 & 0x101);
  return;
}



/* Address: 0x100ab14c8 | FUN_100ab14c8 */

void FUN_100ab14c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10092bc5c;
  FUN_100aaa26c(param_2,param_3 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100ab153c | FUN_100ab153c */

void FUN_100ab153c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10092bc5c;
  FUN_100aaa438(param_2,param_3 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100ab15b0 | FUN_100ab15b0 */

void FUN_100ab15b0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10092bc5c;
  FUN_100aaa604(param_2,param_3 & 0x101);
  return;
}



/* Address: 0x100ab1620 | FUN_100ab1620 */

void FUN_100ab1620(undefined8 *param_1,char *param_2,_StringGuts param_3,char *param_4,void *param_5
                  )

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x46,param_3);
  pvVar3 = (void *)0x8000000100dba910;
  SVar4.bridgeObject = (void *)0x8000000100dba910;
  SVar4.str = (char *)0xd00000000000001d;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar4,SVar9);
  FUN_1005b32e4();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = param_2;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar5,SVar10);
  _swift_bridgeObjectRelease(pvVar3);
  pvVar3 = (void *)0xef27206f74206576;
  SVar6.bridgeObject = (void *)0xef27206f74206576;
  SVar6.str = (char *)0x6974616c65722027;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar6,SVar11);
  pcVar2 = *(char **)(param_3.unknown + 0x10);
  FUN_1005b32e4();
  SVar7.bridgeObject = pvVar3;
  SVar7.str = pcVar2;
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar7,SVar12);
  _swift_bridgeObjectRelease(pvVar3);
  SVar8.bridgeObject = (void *)0x8000000100db8e50;
  SVar8.str = (char *)0xd000000000000016;
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  Swift::String::append(SVar8,SVar13);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  uStack_b0 = 0xd00000000000003f;
  local_b8 = 0;
  local_a8 = 0x8000000100dbb290;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x536;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  uStack_68 = 0xd00000000000003f;
  local_70 = 0;
  local_60 = 0x8000000100dbb290;
  uStack_58 = 0xd000000000000025;
  local_50 = 0x8000000100db85f0;
  uStack_48 = 0x536;
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = uStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100ab1788 | FUN_100ab1788 */

/* WARNING: Removing unreachable block (ram,0x000100ab1ac8) */

void FUN_100ab1788(char (*param_1) [8],char param_2 [8],undefined *param_3,char *param_4,
                  void *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char acVar3 [8];
  char acVar4 [8];
  long lVar5;
  long lVar6;
  char acVar7 [8];
  code *pcVar8;
  int iVar9;
  char acVar10 [8];
  undefined8 *puVar11;
  char *pcVar12;
  char acVar13 [8];
  undefined *puVar14;
  _StringGuts _Var15;
  void *pvVar16;
  char acVar17 [8];
  char *pcVar18;
  void *pvVar19;
  char cVar20;
  char unaff_x20 [8];
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  char local_1e0 [8];
  char acStack_1d8 [8];
  char acStack_1d0 [8];
  char acStack_1c8 [8];
  char local_1c0 [8];
  char acStack_1b8 [8];
  char acStack_1b0 [8];
  char acStack_1a8 [8];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined *puStack_180;
  char local_178 [8];
  char acStack_170 [8];
  char local_168 [8];
  char acStack_160 [8];
  char local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char local_108 [8];
  char local_100 [8];
  char acStack_f8 [8];
  char local_f0 [8];
  char acStack_e8 [8];
  char local_e0 [8];
  char acStack_d8 [8];
  char local_d0 [8];
  char acStack_c8 [8];
  pthread_mutexattr_t local_c0;
  char acStack_b0 [8];
  char local_a8 [8];
  char acStack_a0 [8];
  char local_98 [8];
  char acStack_90 [8];
  char local_88 [8];
  char acStack_80 [8];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  acVar10 = param_2;
  _Var15.unknown = param_3;
  pcVar18 = param_4;
  pvVar19 = param_5;
  FUN_1005b439c();
  if (((ulong)acVar10 & 1) == 0) {
    acVar10 = param_2;
    _swift_bridgeObjectRetain();
    FUN_1005b4c38();
    pcVar12 = (char *)0x6;
    FUN_100ab3e78();
    local_c0.__sig = 0x2d706d742e;
    local_c0.__opaque = (char  [8])&DAT_e500000000000000;
    SVar24.bridgeObject = _Var15.unknown;
    SVar24.str = pcVar12;
    SVar28.bridgeObject = pvVar19;
    SVar28.str = pcVar18;
    Swift::String::append(SVar24,SVar28);
    _swift_bridgeObjectRelease(_Var15.unknown);
    lVar5 = local_c0.__sig;
    local_c0.__sig = (long)acVar10;
    FUN_1005b62ec(lVar5,local_c0.__opaque);
    acVar13 = (char  [8])local_c0.__sig;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(acVar13);
  }
  else {
    FUN_100aa7f9c();
    if (((uint)_Var15.unknown & 0xff) == 1) {
      local_c0.__sig._0_1_ = '\0';
      local_c0.__sig._1_1_ = '\0';
      local_c0.__sig._2_1_ = '\0';
      local_c0.__sig._3_1_ = '\0';
      local_c0.__sig._4_1_ = '\0';
      local_c0.__sig._5_1_ = '\0';
      local_c0.__sig._6_1_ = '\0';
      local_c0.__sig._7_1_ = '\0';
      local_c0.__opaque[0] = '\0';
      local_c0.__opaque[1] = '\0';
      local_c0.__opaque[2] = '\0';
      local_c0.__opaque[3] = '\0';
      local_c0.__opaque[4] = '\0';
      local_c0.__opaque[5] = '\0';
      local_c0.__opaque[6] = '\0';
      local_c0.__opaque[7] = -0x20;
      Swift::_StringGuts::grow(0x51,_Var15);
      pvVar16 = (void *)0x8000000100dbb090;
      SVar21.bridgeObject = (void *)0x8000000100dbb090;
      SVar21.str = (char *)0xd000000000000015;
      SVar25.bridgeObject = pvVar19;
      SVar25.str = pcVar18;
      Swift::String::append(SVar21,SVar25);
      FUN_1005b32e4();
      SVar22.bridgeObject = pvVar16;
      SVar22.str = (char *)param_2;
      SVar26.bridgeObject = pvVar19;
      SVar26.str = pcVar18;
      Swift::String::append(SVar22,SVar26);
      _swift_bridgeObjectRelease(pvVar16);
      puVar11 = (undefined8 *)0xd00000000000003a;
      SVar23.bridgeObject = (void *)0x8000000100dbb0b0;
      SVar23.str = (char *)0xd00000000000003a;
      SVar27.bridgeObject = pvVar19;
      SVar27.str = pcVar18;
      Swift::String::append(SVar23,SVar27);
      acVar7 = local_c0.__opaque;
      lVar5 = local_c0.__sig;
      FUN_100a57a58();
      puVar14 = &DAT_100f2dfc8;
      _swift_allocError(&DAT_100f2dfc8,puVar11,0,0);
      *puVar11 = 0x647763746567;
      puVar11[1] = &DAT_e600000000000000;
      *(int *)(puVar11 + 2) = acVar10._0_4_;
      local_198 = CONCAT31(local_198._1_3_,7);
      uStack_190 = 0xd000000000000024;
      local_188 = 0x8000000100db8cb0;
      local_178[0] = 'c';
      local_178[1] = '\0';
      local_178[2] = '\0';
      local_178[3] = '\0';
      local_178[4] = '\0';
      local_178[5] = '\0';
      local_178[6] = '\0';
      local_178[7] = -0x30;
      acStack_170[0] = ' ';
      acStack_170[1] = -0x50;
      acStack_170[2] = -0x25;
      acStack_170[3] = '\0';
      acStack_170[4] = '\x01';
      acStack_170[5] = '\0';
      acStack_170[6] = '\0';
      acStack_170[7] = -0x80;
      local_168[0] = '%';
      local_168[1] = '\0';
      local_168[2] = '\0';
      local_168[3] = '\0';
      local_168[4] = '\0';
      local_168[5] = '\0';
      local_168[6] = '\0';
      local_168[7] = -0x30;
      acStack_160[0] = -0x10;
      acStack_160[1] = -0x7b;
      acStack_160[2] = -0x25;
      acStack_160[3] = '\0';
      acStack_160[4] = '\x01';
      acStack_160[5] = '\0';
      acStack_160[6] = '\0';
      acStack_160[7] = -0x80;
      local_158[0] = -0x49;
      local_158[1] = '\x05';
      local_158[2] = '\0';
      local_158[3] = '\0';
      local_158[4] = '\0';
      local_158[5] = '\0';
      local_158[6] = '\0';
      local_158[7] = '\0';
      local_150._0_1_ = 7;
      local_148 = 0xd000000000000024;
      local_140 = 0x8000000100db8cb0;
      uStack_130 = 0xd000000000000063;
      local_128 = 0x8000000100dbb020;
      uStack_120 = 0xd000000000000025;
      local_118 = 0x8000000100db85f0;
      uStack_110 = 0x5b7;
      puStack_180 = puVar14;
      local_138 = puVar14;
      FUN_100a50050(&local_198,&local_c0);
      puVar11 = &local_150;
      FUN_100a5008c();
      cVar20 = (char)local_198;
      FUN_100a500c0();
      acVar10 = (char  [8])&DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar11,0,0);
      uVar1 = CONCAT44(uStack_194,local_198);
      puVar11[1] = uStack_190;
      *puVar11 = uVar1;
      acVar4 = acStack_160;
      acVar3 = local_168;
      acVar17 = acStack_170;
      acVar13 = local_178;
      puVar14 = puStack_180;
      uVar1 = local_188;
      *(char (*) [8])(puVar11 + 8) = local_158;
      *(char (*) [8])(puVar11 + 5) = acVar17;
      *(char (*) [8])(puVar11 + 4) = acVar13;
      *(char (*) [8])(puVar11 + 7) = acVar4;
      *(char (*) [8])(puVar11 + 6) = acVar3;
      puVar11[3] = puVar14;
      puVar11[2] = uVar1;
      lVar6 = local_c0.__sig;
      acVar13 = acStack_160;
      local_108[0] = cVar20;
      local_c0.__sig._0_1_ = (undefined1)lVar5;
      local_c0.__sig._1_1_ = SUB81(lVar5,1);
      local_c0.__sig._2_1_ = SUB81(lVar5,2);
      local_c0.__sig._3_1_ = SUB81(lVar5,3);
      local_c0.__sig._4_1_ = SUB81(lVar5,4);
      local_c0.__sig._5_1_ = SUB81(lVar5,5);
      local_c0.__sig._6_1_ = SUB81(lVar5,6);
      local_c0.__sig._7_1_ = SUB81(lVar5,7);
      local_100[0] = (undefined1)local_c0.__sig;
      local_100[1] = local_c0.__sig._1_1_;
      local_100[2] = local_c0.__sig._2_1_;
      local_100[3] = local_c0.__sig._3_1_;
      local_100[4] = local_c0.__sig._4_1_;
      local_100[5] = local_c0.__sig._5_1_;
      local_100[6] = local_c0.__sig._6_1_;
      local_100[7] = local_c0.__sig._7_1_;
      local_c0.__opaque[0] = acVar7[0];
      local_c0.__opaque[1] = acVar7[1];
      local_c0.__opaque[2] = acVar7[2];
      local_c0.__opaque[3] = acVar7[3];
      local_c0.__opaque[4] = acVar7[4];
      local_c0.__opaque[5] = acVar7[5];
      local_c0.__opaque[6] = acVar7[6];
      local_c0.__opaque[7] = acVar7[7];
      acStack_f8[0] = local_c0.__opaque[0];
      acStack_f8[1] = local_c0.__opaque[1];
      acStack_f8[2] = local_c0.__opaque[2];
      acStack_f8[3] = local_c0.__opaque[3];
      acStack_f8[4] = local_c0.__opaque[4];
      acStack_f8[5] = local_c0.__opaque[5];
      acStack_f8[6] = local_c0.__opaque[6];
      acStack_f8[7] = local_c0.__opaque[7];
      acStack_e8[0] = local_178[0];
      acStack_e8[1] = local_178[1];
      acStack_e8[2] = local_178[2];
      acStack_e8[3] = local_178[3];
      acStack_e8[4] = local_178[4];
      acStack_e8[5] = local_178[5];
      acStack_e8[6] = local_178[6];
      acStack_e8[7] = local_178[7];
      local_e0[0] = acStack_170[0];
      local_e0[1] = acStack_170[1];
      local_e0[2] = acStack_170[2];
      local_e0[3] = acStack_170[3];
      local_e0[4] = acStack_170[4];
      local_e0[5] = acStack_170[5];
      local_e0[6] = acStack_170[6];
      local_e0[7] = acStack_170[7];
      acStack_d8[0] = local_168[0];
      acStack_d8[1] = local_168[1];
      acStack_d8[2] = local_168[2];
      acStack_d8[3] = local_168[3];
      acStack_d8[4] = local_168[4];
      acStack_d8[5] = local_168[5];
      acStack_d8[6] = local_168[6];
      acStack_d8[7] = local_168[7];
      local_d0[0] = acStack_160[0];
      local_d0[1] = acStack_160[1];
      local_d0[2] = acStack_160[2];
      local_d0[3] = acStack_160[3];
      local_d0[4] = acStack_160[4];
      local_d0[5] = acStack_160[5];
      local_d0[6] = acStack_160[6];
      local_d0[7] = acStack_160[7];
      acStack_c8[0] = local_158[0];
      acStack_c8[1] = local_158[1];
      acStack_c8[2] = local_158[2];
      acStack_c8[3] = local_158[3];
      acStack_c8[4] = local_158[4];
      acStack_c8[5] = local_158[5];
      acStack_c8[6] = local_158[6];
      acStack_c8[7] = local_158[7];
      local_c0.__sig._1_7_ = SUB87(lVar6,1);
      local_c0.__sig = CONCAT71(local_c0.__sig._1_7_,cVar20);
      lVar6 = local_c0.__sig;
      local_c0.__sig._0_1_ = (undefined1)lVar5;
      local_c0.__sig._1_1_ = SUB81(lVar5,1);
      local_c0.__sig._2_1_ = SUB81(lVar5,2);
      local_c0.__sig._3_1_ = SUB81(lVar5,3);
      local_c0.__sig._4_1_ = SUB81(lVar5,4);
      local_c0.__sig._5_1_ = SUB81(lVar5,5);
      local_c0.__sig._6_1_ = SUB81(lVar5,6);
      local_c0.__sig._7_1_ = SUB81(lVar5,7);
      local_c0.__opaque[0] = (undefined1)local_c0.__sig;
      local_c0.__opaque[1] = local_c0.__sig._1_1_;
      local_c0.__opaque[2] = local_c0.__sig._2_1_;
      local_c0.__opaque[3] = local_c0.__sig._3_1_;
      local_c0.__opaque[4] = local_c0.__sig._4_1_;
      local_c0.__opaque[5] = local_c0.__sig._5_1_;
      local_c0.__opaque[6] = local_c0.__sig._6_1_;
      local_c0.__opaque[7] = local_c0.__sig._7_1_;
      acVar17 = local_c0.__opaque;
      local_c0.__opaque[0] = acVar7[0];
      local_c0.__opaque[1] = acVar7[1];
      local_c0.__opaque[2] = acVar7[2];
      local_c0.__opaque[3] = acVar7[3];
      local_c0.__opaque[4] = acVar7[4];
      local_c0.__opaque[5] = acVar7[5];
      local_c0.__opaque[6] = acVar7[6];
      local_c0.__opaque[7] = acVar7[7];
      acStack_b0[0] = local_c0.__opaque[0];
      acStack_b0[1] = local_c0.__opaque[1];
      acStack_b0[2] = local_c0.__opaque[2];
      acStack_b0[3] = local_c0.__opaque[3];
      acStack_b0[4] = local_c0.__opaque[4];
      acStack_b0[5] = local_c0.__opaque[5];
      acStack_b0[6] = local_c0.__opaque[6];
      acStack_b0[7] = local_c0.__opaque[7];
      acStack_a0[0] = local_178[0];
      acStack_a0[1] = local_178[1];
      acStack_a0[2] = local_178[2];
      acStack_a0[3] = local_178[3];
      acStack_a0[4] = local_178[4];
      acStack_a0[5] = local_178[5];
      acStack_a0[6] = local_178[6];
      acStack_a0[7] = local_178[7];
      local_98[0] = acStack_170[0];
      local_98[1] = acStack_170[1];
      local_98[2] = acStack_170[2];
      local_98[3] = acStack_170[3];
      local_98[4] = acStack_170[4];
      local_98[5] = acStack_170[5];
      local_98[6] = acStack_170[6];
      local_98[7] = acStack_170[7];
      acStack_90[0] = local_168[0];
      acStack_90[1] = local_168[1];
      acStack_90[2] = local_168[2];
      acStack_90[3] = local_168[3];
      acStack_90[4] = local_168[4];
      acStack_90[5] = local_168[5];
      acStack_90[6] = local_168[6];
      acStack_90[7] = local_168[7];
      local_88[0] = acStack_160[0];
      local_88[1] = acStack_160[1];
      local_88[2] = acStack_160[2];
      local_88[3] = acStack_160[3];
      local_88[4] = acStack_160[4];
      local_88[5] = acStack_160[5];
      local_88[6] = acStack_160[6];
      local_88[7] = acStack_160[7];
      acStack_80[0] = local_158[0];
      acStack_80[1] = local_158[1];
      acStack_80[2] = local_158[2];
      acStack_80[3] = local_158[3];
      acStack_80[4] = local_158[4];
      acStack_80[5] = local_158[5];
      acStack_80[6] = local_158[6];
      acStack_80[7] = local_158[7];
      local_f0 = acVar10;
      local_c0.__sig = lVar6;
      local_c0.__opaque = acVar17;
      local_a8 = acVar10;
      _swift_bridgeObjectRetain(acStack_170);
      _swift_bridgeObjectRetain(acVar13);
      FUN_100a50050(local_108,local_1e0);
      FUN_100a5008c(&local_c0);
      acStack_1d8[0] = acStack_f8[0];
      acStack_1d8[1] = acStack_f8[1];
      acStack_1d8[2] = acStack_f8[2];
      acStack_1d8[3] = acStack_f8[3];
      acStack_1d8[4] = acStack_f8[4];
      acStack_1d8[5] = acStack_f8[5];
      acStack_1d8[6] = acStack_f8[6];
      acStack_1d8[7] = acStack_f8[7];
      local_1e0[0] = local_100[0];
      local_1e0[1] = local_100[1];
      local_1e0[2] = local_100[2];
      local_1e0[3] = local_100[3];
      local_1e0[4] = local_100[4];
      local_1e0[5] = local_100[5];
      local_1e0[6] = local_100[6];
      local_1e0[7] = local_100[7];
      acStack_1c8[0] = acStack_e8[0];
      acStack_1c8[1] = acStack_e8[1];
      acStack_1c8[2] = acStack_e8[2];
      acStack_1c8[3] = acStack_e8[3];
      acStack_1c8[4] = acStack_e8[4];
      acStack_1c8[5] = acStack_e8[5];
      acStack_1c8[6] = acStack_e8[6];
      acStack_1c8[7] = acStack_e8[7];
      acStack_1d0[0] = local_f0[0];
      acStack_1d0[1] = local_f0[1];
      acStack_1d0[2] = local_f0[2];
      acStack_1d0[3] = local_f0[3];
      acStack_1d0[4] = local_f0[4];
      acStack_1d0[5] = local_f0[5];
      acStack_1d0[6] = local_f0[6];
      acStack_1d0[7] = local_f0[7];
      acStack_1b8[0] = acStack_d8[0];
      acStack_1b8[1] = acStack_d8[1];
      acStack_1b8[2] = acStack_d8[2];
      acStack_1b8[3] = acStack_d8[3];
      acStack_1b8[4] = acStack_d8[4];
      acStack_1b8[5] = acStack_d8[5];
      acStack_1b8[6] = acStack_d8[6];
      acStack_1b8[7] = acStack_d8[7];
      local_1c0[0] = local_e0[0];
      local_1c0[1] = local_e0[1];
      local_1c0[2] = local_e0[2];
      local_1c0[3] = local_e0[3];
      local_1c0[4] = local_e0[4];
      local_1c0[5] = local_e0[5];
      local_1c0[6] = local_e0[6];
      local_1c0[7] = local_e0[7];
      acStack_1a8[0] = acStack_c8[0];
      acStack_1a8[1] = acStack_c8[1];
      acStack_1a8[2] = acStack_c8[2];
      acStack_1a8[3] = acStack_c8[3];
      acStack_1a8[4] = acStack_c8[4];
      acStack_1a8[5] = acStack_c8[5];
      acStack_1a8[6] = acStack_c8[6];
      acStack_1a8[7] = acStack_c8[7];
      acStack_1b0[0] = local_d0[0];
      acStack_1b0[1] = local_d0[1];
      acStack_1b0[2] = local_d0[2];
      acStack_1b0[3] = local_d0[3];
      acStack_1b0[4] = local_d0[4];
      acStack_1b0[5] = local_d0[5];
      acStack_1b0[6] = local_d0[6];
      acStack_1b0[7] = local_d0[7];
      cVar20 = '\x01';
      unaff_x20 = local_108;
      goto LAB_100ab1bf0;
    }
    acVar13 = acVar10;
    acVar17 = param_2;
    FUN_100ab1c50();
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain();
    FUN_1005ad054();
    local_108 = acVar10;
    local_c0.__sig = (long)param_2;
    local_c0.__opaque = acVar17;
    FUN_100ab2cf4();
    FUN_1005b62b0(&local_c0,&DAT_100ee49c8,param_2);
    param_2 = local_108;
  }
  local_140 = CONCAT44((uint)param_4,(int)param_3);
  local_138._0_4_ = CONCAT13(1,(int3)param_5);
  _swift_bridgeObjectRetain(acVar13);
  FUN_1005b32d0(&local_198,FUN_100a7c144,&local_150,acVar13,&DAT_100ee4520);
  _swift_bridgeObjectRelease(acVar13);
  uVar2 = local_198;
  _swift_allocObject();
  puVar14 = &DAT_100ff6ea0;
  FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
  _swift_allocObject();
  *(undefined4 *)(puVar14 + 0x10) = uVar2;
  puVar14[0x14] = 0;
  local_c0.__sig = 0;
  local_c0.__opaque[0] = '\0';
  local_c0.__opaque[1] = '\0';
  local_c0.__opaque[2] = '\0';
  local_c0.__opaque[3] = '\0';
  local_c0.__opaque[4] = '\0';
  local_c0.__opaque[5] = '\0';
  local_c0.__opaque[6] = '\0';
  local_c0.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_c0);
  iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar14 + 0x18),&local_c0);
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100ab1c4c);
    (*pcVar8)();
  }
  *(undefined **)((long)unaff_x20 + 0x10) = puVar14;
  *(undefined8 *)((long)unaff_x20 + 0x18) = param_6;
  *(char (*) [8])((long)unaff_x20 + 0x20) = acVar13;
  *(char (*) [8])((long)unaff_x20 + 0x28) = acVar13;
  *(char (*) [8])((long)unaff_x20 + 0x30) = param_2;
  *(byte *)((long)unaff_x20 + 0x38) = (byte)((uint)param_4 >> 0xb) & 1;
  _swift_retain(param_6);
  cVar20 = '\0';
LAB_100ab1bf0:
  *param_1 = unaff_x20;
  param_1[2] = acStack_1d8;
  param_1[1] = local_1e0;
  param_1[4] = acStack_1c8;
  param_1[3] = acStack_1d0;
  param_1[6] = acStack_1b8;
  param_1[5] = local_1c0;
  param_1[8] = acStack_1a8;
  param_1[7] = acStack_1b0;
  param_1[9][0] = cVar20;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ab1c50 | FUN_100ab1c50 */

undefined8 FUN_100ab1c50(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  void *pvVar6;
  String SVar7;
  String SVar8;
  undefined8 local_48;
  undefined1 *puStack_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  pvVar5 = param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain();
  FUN_1005ad054();
  uVar1 = 1;
  pvVar6 = pvVar5;
  FUN_100ab1d1c();
  pcVar2 = &DAT_100ff8100;
  local_48 = uVar1;
  puStack_40 = param_2;
  local_38 = pvVar5;
  pvStack_30 = pvVar6;
  local_28 = param_1;
  FUN_1000f7830(&DAT_100ff8100,&DAT_100c93a28);
  pcVar3 = pcVar2;
  FUN_100ab3200();
  FUN_1005b62b0(&local_48);
  pcVar4 = (char *)0x6;
  FUN_100ab3e78();
  local_48 = 0x2d706d742e;
  puStack_40 = &DAT_e500000000000000;
  SVar7.bridgeObject = pcVar2;
  SVar7.str = pcVar4;
  SVar8.bridgeObject = pvVar6;
  SVar8.str = pcVar3;
  Swift::String::append(SVar7,SVar8);
  _swift_bridgeObjectRelease(pcVar2);
  FUN_1005b62ec(local_48,puStack_40);
  return local_28;
}



/* Address: 0x100ab1d1c | FUN_100ab1d1c */

long FUN_100ab1d1c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1ddc);
    (*pcVar1)();
  }
  lVar2 = param_2;
  FUN_100ab1e9c(param_2,param_3);
  if (SBORROW8(lVar2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1de0);
    (*pcVar1)();
  }
  uVar4 = lVar2 - param_1 & (lVar2 - param_1 >> 0x3f ^ 0xffffffffffffffffU);
  lVar2 = param_2;
  FUN_1005ac824(param_2,param_3);
  lVar3 = param_3;
  FUN_100ab1f48(param_3,uVar4,lVar2,param_2,param_3);
  if (((uint)uVar4 & 0xff) == 1) {
    lVar3 = param_2;
    FUN_1005ac824(param_2,param_3);
  }
  if (lVar3 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1de4);
    (*pcVar1)();
  }
  FUN_1005ac824(param_2,param_3);
  if (param_2 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1de8);
    (*pcVar1)();
  }
  if (lVar3 <= param_2) {
    return param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1dec);
  (*pcVar1)();
}



/* Address: 0x100ab1dec | FUN_100ab1dec */

void FUN_100ab1dec(undefined4 *param_1,ulong param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 *puVar2;
  
  FUN_1005ac238();
  uVar4 = (undefined4)param_2;
  if ((param_2 & 0xff00000000) == 0x100000000) {
    local_24 = uVar4;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined4 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a54208();
      puVar3 = &local_24;
      _swift_willThrowTypedImpl(puVar3,&DAT_100ee42f8,puVar2);
    }
    FUN_100a54208();
    _swift_allocError(&DAT_100ee42f8,puVar3,0,0);
    *puVar3 = uVar4;
  }
  else {
    *param_1 = uVar4;
  }
  return;
}



/* Address: 0x100ab1e9c | FUN_100ab1e9c */

long FUN_100ab1e9c(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  FUN_1005ac824();
  if (param_2 < param_1) {
    lVar4 = 0;
    do {
      lVar3 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1f44);
        (*pcVar1)();
      }
      FUN_1005ad494();
      lVar4 = lVar4 + 1;
    } while (param_2 != param_1);
  }
  else if (param_1 < param_2) {
    lVar3 = 0;
    do {
      bVar2 = SBORROW8(lVar3,1);
      lVar3 = lVar3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab1f48);
        (*pcVar1)();
      }
      thunk_FUN_1005b2ac8();
    } while (param_2 != param_1);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Address: 0x100ab1f48 | FUN_100ab1f48 */

void FUN_100ab1f48(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 < 0) {
    lVar1 = 0;
    do {
      if (param_1 == param_3) {
        return;
      }
      lVar1 = lVar1 + -1;
      thunk_FUN_1005b2ac8();
    } while (param_2 < lVar1);
  }
  else {
    while ((param_2 != 0 && (param_1 != param_3))) {
      FUN_1005ad494();
      param_2 = param_2 + -1;
    }
  }
  return;
}



/* Address: 0x100ab1fdc | FUN_100ab1fdc */

void FUN_100ab1fdc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  }
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar3 + 0x49 & (uVar3 ^ 0xffffffffffffffff)),lVar2);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ab2068 | FUN_100ab2068 */

void FUN_100ab2068(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar2 = uVar2 + 0x49 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100aafb28(unaff_x20 + 0x20,unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 + (*(long *)(lVar1 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)),
                *(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ab20ac | FUN_100ab20ac */

void FUN_100ab20ac(void)

{
  FUN_100ab2180(0x4c);
  return;
}



/* Address: 0x100ab20b4 | FUN_100ab20b4 */

void FUN_100ab20b4(void)

{
  long unaff_x20;
  
  FUN_100ab10f0(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x48)
                ,FUN_100ab33c0);
  return;
}



/* Address: 0x100ab20dc | FUN_100ab20dc */

void FUN_100ab20dc(void)

{
  FUN_100ab2180(0x58);
  return;
}



/* Address: 0x100ab20e4 | FUN_100ab20e4 */

void FUN_100ab20e4(void)

{
  FUN_100ab211c(FUN_100ab0be0);
  return;
}



/* Address: 0x100ab2100 | FUN_100ab2100 */

void FUN_100ab2100(void)

{
  FUN_100ab211c(FUN_100ab0720);
  return;
}



/* Address: 0x100ab211c | FUN_100ab211c */

void FUN_100ab211c(code *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)(unaff_x20 + 0x57) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (*(char *)(unaff_x20 + 0x56) == '\0') {
    uVar2 = 0;
  }
  (*param_1)(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x48),
             (ulong)*(uint3 *)(unaff_x20 + 0x4c),
             uVar2 | uVar1 | (ulong)*(uint *)(unaff_x20 + 0x52) << 0x10 |
             (ulong)*(byte *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100ab2180 | FUN_100ab2180 */

void FUN_100ab2180(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ab21dc | FUN_100ab21dc */

void FUN_100ab21dc(void)

{
  long unaff_x20;
  
  FUN_100ab10f0(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x48)
                ,FUN_100ab32f4);
  return;
}



/* Address: 0x100ab2204 | FUN_100ab2204 */

void FUN_100ab2204(undefined8 *param_1,Darwin *param_2)

{
  bool bVar1;
  __int32 _Var2;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  Darwin::set_errno(param_2,0);
  FUN_1005b32d0(&local_a8,FUN_100aa72c4,0,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  bVar1 = local_a8 == -1;
  if (bVar1) {
    _Var2 = Darwin::get_errno();
    local_58 = 0xd00000000000001c;
    uStack_50 = 0x8000000100dbb480;
    local_48 = 0xd000000000000025;
    uStack_40 = 0x8000000100db85f0;
    local_38 = 0x13d;
    FUN_100a7ed30(&local_a8,0x6b6e696c6e75,&DAT_e600000000000000,_Var2,param_2,&local_58);
  }
  param_1[5] = uStack_80;
  param_1[4] = local_88;
  param_1[7] = uStack_70;
  param_1[6] = local_78;
  param_1[8] = local_68;
  param_1[1] = uStack_a0;
  *param_1 = CONCAT44(uStack_a4,local_a8);
  param_1[3] = uStack_90;
  param_1[2] = local_98;
  *(bool *)(param_1 + 9) = bVar1;
  return;
}



/* Address: 0x100ab2300 | FUN_100ab2300 */

/* WARNING: Removing unreachable block (ram,0x000100ab2790) */
/* WARNING: Removing unreachable block (ram,0x000100ab25a0) */
/* WARNING: Removing unreachable block (ram,0x000100ab281c) */

void FUN_100ab2300(char (*param_1) [8],char param_2 [8],_StringGuts param_3,char *param_4,
                  void *param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  char acVar4 [8];
  char acVar5 [8];
  long lVar6;
  long lVar7;
  char acVar8 [8];
  code *pcVar9;
  int iVar10;
  char acVar11 [8];
  undefined8 *puVar12;
  char *pcVar13;
  undefined *puVar14;
  char acVar15 [8];
  void *pvVar16;
  char acVar17 [8];
  char cVar18;
  uint uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  char local_1e0 [8];
  char acStack_1d8 [8];
  char acStack_1d0 [8];
  char acStack_1c8 [8];
  char local_1c0 [8];
  char acStack_1b8 [8];
  char acStack_1b0 [8];
  char acStack_1a8 [8];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined *puStack_180;
  char local_178 [8];
  char acStack_170 [8];
  char local_168 [8];
  char acStack_160 [8];
  char local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char local_108 [8];
  char local_100 [8];
  char acStack_f8 [8];
  char local_f0 [8];
  char acStack_e8 [8];
  char local_e0 [8];
  char acStack_d8 [8];
  char local_d0 [8];
  char acStack_c8 [8];
  pthread_mutexattr_t local_c0;
  char acStack_b0 [8];
  char local_a8 [8];
  char acStack_a0 [8];
  char local_98 [8];
  char acStack_90 [8];
  char local_88 [8];
  char acStack_80 [8];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar19 = (uint)param_4;
  iVar10 = (int)param_3.unknown;
  uVar2 = SUB83(param_5,0);
  if ((((param_6 & 1) == 0) || (iVar10 - 3U < 0xfffffffe)) || (((ulong)param_4 & 0xc00) == 0)) {
    local_140 = CONCAT44(uVar19,iVar10);
    local_138._0_4_ = CONCAT13(1,uVar2);
    pcVar9 = FUN_100a7c3c4;
    FUN_1005b32d0(&local_198,FUN_100a7c3c4,&local_150,param_2,&DAT_100ee4520);
    uVar3 = local_198;
    FUN_100ab2d90();
    _swift_allocObject();
    puVar14 = &DAT_100ff6ea0;
    FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
    _swift_allocObject();
    *(undefined4 *)(puVar14 + 0x10) = uVar3;
    puVar14[0x14] = 0;
    local_c0.__sig = 0;
    local_c0.__opaque[0] = '\0';
    local_c0.__opaque[1] = '\0';
    local_c0.__opaque[2] = '\0';
    local_c0.__opaque[3] = '\0';
    local_c0.__opaque[4] = '\0';
    local_c0.__opaque[5] = '\0';
    local_c0.__opaque[6] = '\0';
    local_c0.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_c0);
    iVar10 = _pthread_mutex_init((pthread_mutex_t *)(puVar14 + 0x18),&local_c0);
    if (iVar10 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100ab2910);
      (*pcVar9)();
    }
    *(undefined **)((long)pcVar9 + 0x10) = puVar14;
    *(undefined8 *)((long)pcVar9 + 0x18) = param_7;
    *(undefined8 *)((long)pcVar9 + 0x28) = 0;
    *(undefined8 *)((long)pcVar9 + 0x30) = 0;
    *(char (*) [8])((long)pcVar9 + 0x20) = param_2;
    *(code *)((long)pcVar9 + 0x38) = (code)0x0;
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    acVar11 = param_2;
    FUN_1005b439c();
    if (((ulong)acVar11 & 1) == 0) {
      acVar11 = param_2;
      _swift_bridgeObjectRetain();
      FUN_1005b4c38();
      pcVar13 = (char *)0x6;
      FUN_100ab3e78();
      local_c0.__sig = 0x2d706d742e;
      local_c0.__opaque = (char  [8])&DAT_e500000000000000;
      SVar23.bridgeObject = param_3.unknown;
      SVar23.str = pcVar13;
      SVar27.bridgeObject = param_5;
      SVar27.str = param_4;
      Swift::String::append(SVar23,SVar27);
      _swift_bridgeObjectRelease(param_3.unknown);
      lVar6 = local_c0.__sig;
      local_c0.__sig = (long)acVar11;
      FUN_1005b62ec(lVar6,local_c0.__opaque);
      acVar15 = (char  [8])local_c0.__sig;
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(acVar15);
    }
    else {
      FUN_100aa7f9c();
      if (((uint)param_3.unknown & 0xff) == 1) {
        local_c0.__sig._0_1_ = '\0';
        local_c0.__sig._1_1_ = '\0';
        local_c0.__sig._2_1_ = '\0';
        local_c0.__sig._3_1_ = '\0';
        local_c0.__sig._4_1_ = '\0';
        local_c0.__sig._5_1_ = '\0';
        local_c0.__sig._6_1_ = '\0';
        local_c0.__sig._7_1_ = '\0';
        local_c0.__opaque[0] = '\0';
        local_c0.__opaque[1] = '\0';
        local_c0.__opaque[2] = '\0';
        local_c0.__opaque[3] = '\0';
        local_c0.__opaque[4] = '\0';
        local_c0.__opaque[5] = '\0';
        local_c0.__opaque[6] = '\0';
        local_c0.__opaque[7] = -0x20;
        Swift::_StringGuts::grow(0x51,param_3);
        pvVar16 = (void *)0x8000000100dbb090;
        SVar20.bridgeObject = (void *)0x8000000100dbb090;
        SVar20.str = (char *)0xd000000000000015;
        SVar24.bridgeObject = param_5;
        SVar24.str = param_4;
        Swift::String::append(SVar20,SVar24);
        FUN_1005b32e4();
        SVar21.bridgeObject = pvVar16;
        SVar21.str = (char *)param_2;
        SVar25.bridgeObject = param_5;
        SVar25.str = param_4;
        Swift::String::append(SVar21,SVar25);
        _swift_bridgeObjectRelease(pvVar16);
        puVar12 = (undefined8 *)0xd00000000000003a;
        SVar22.bridgeObject = (void *)0x8000000100dbb0b0;
        SVar22.str = (char *)0xd00000000000003a;
        SVar26.bridgeObject = param_5;
        SVar26.str = param_4;
        Swift::String::append(SVar22,SVar26);
        acVar8 = local_c0.__opaque;
        lVar6 = local_c0.__sig;
        FUN_100a57a58();
        puVar14 = &DAT_100f2dfc8;
        _swift_allocError(&DAT_100f2dfc8,puVar12,0,0);
        *puVar12 = 0x647763746567;
        puVar12[1] = &DAT_e600000000000000;
        *(int *)(puVar12 + 2) = acVar11._0_4_;
        local_198 = CONCAT31(local_198._1_3_,7);
        uStack_190 = 0xd000000000000024;
        local_188 = 0x8000000100db8cb0;
        local_178[0] = 'c';
        local_178[1] = '\0';
        local_178[2] = '\0';
        local_178[3] = '\0';
        local_178[4] = '\0';
        local_178[5] = '\0';
        local_178[6] = '\0';
        local_178[7] = -0x30;
        acStack_170[0] = ' ';
        acStack_170[1] = -0x50;
        acStack_170[2] = -0x25;
        acStack_170[3] = '\0';
        acStack_170[4] = '\x01';
        acStack_170[5] = '\0';
        acStack_170[6] = '\0';
        acStack_170[7] = -0x80;
        local_168[0] = '%';
        local_168[1] = '\0';
        local_168[2] = '\0';
        local_168[3] = '\0';
        local_168[4] = '\0';
        local_168[5] = '\0';
        local_168[6] = '\0';
        local_168[7] = -0x30;
        acStack_160[0] = -0x10;
        acStack_160[1] = -0x7b;
        acStack_160[2] = -0x25;
        acStack_160[3] = '\0';
        acStack_160[4] = '\x01';
        acStack_160[5] = '\0';
        acStack_160[6] = '\0';
        acStack_160[7] = -0x80;
        local_158[0] = -0x49;
        local_158[1] = '\x05';
        local_158[2] = '\0';
        local_158[3] = '\0';
        local_158[4] = '\0';
        local_158[5] = '\0';
        local_158[6] = '\0';
        local_158[7] = '\0';
        local_150._0_1_ = 7;
        local_148 = 0xd000000000000024;
        local_140 = 0x8000000100db8cb0;
        uStack_130 = 0xd000000000000063;
        local_128 = 0x8000000100dbb020;
        uStack_120 = 0xd000000000000025;
        local_118 = 0x8000000100db85f0;
        uStack_110 = 0x5b7;
        puStack_180 = puVar14;
        local_138 = puVar14;
        FUN_100a50050(&local_198,&local_c0);
        puVar12 = &local_150;
        FUN_100a5008c();
        cVar18 = (char)local_198;
        FUN_100a500c0();
        acVar11 = (char  [8])&DAT_100f2de38;
        _swift_allocError(&DAT_100f2de38,puVar12,0,0);
        uVar1 = CONCAT44(uStack_194,local_198);
        puVar12[1] = uStack_190;
        *puVar12 = uVar1;
        acVar5 = acStack_160;
        acVar4 = local_168;
        acVar17 = acStack_170;
        acVar15 = local_178;
        puVar14 = puStack_180;
        uVar1 = local_188;
        *(char (*) [8])(puVar12 + 8) = local_158;
        *(char (*) [8])(puVar12 + 5) = acVar17;
        *(char (*) [8])(puVar12 + 4) = acVar15;
        *(char (*) [8])(puVar12 + 7) = acVar5;
        *(char (*) [8])(puVar12 + 6) = acVar4;
        puVar12[3] = puVar14;
        puVar12[2] = uVar1;
        lVar7 = local_c0.__sig;
        acVar15 = acStack_160;
        local_108[0] = cVar18;
        local_c0.__sig._0_1_ = (undefined1)lVar6;
        local_c0.__sig._1_1_ = SUB81(lVar6,1);
        local_c0.__sig._2_1_ = SUB81(lVar6,2);
        local_c0.__sig._3_1_ = SUB81(lVar6,3);
        local_c0.__sig._4_1_ = SUB81(lVar6,4);
        local_c0.__sig._5_1_ = SUB81(lVar6,5);
        local_c0.__sig._6_1_ = SUB81(lVar6,6);
        local_c0.__sig._7_1_ = SUB81(lVar6,7);
        local_100[0] = (undefined1)local_c0.__sig;
        local_100[1] = local_c0.__sig._1_1_;
        local_100[2] = local_c0.__sig._2_1_;
        local_100[3] = local_c0.__sig._3_1_;
        local_100[4] = local_c0.__sig._4_1_;
        local_100[5] = local_c0.__sig._5_1_;
        local_100[6] = local_c0.__sig._6_1_;
        local_100[7] = local_c0.__sig._7_1_;
        local_c0.__opaque[0] = acVar8[0];
        local_c0.__opaque[1] = acVar8[1];
        local_c0.__opaque[2] = acVar8[2];
        local_c0.__opaque[3] = acVar8[3];
        local_c0.__opaque[4] = acVar8[4];
        local_c0.__opaque[5] = acVar8[5];
        local_c0.__opaque[6] = acVar8[6];
        local_c0.__opaque[7] = acVar8[7];
        acStack_f8[0] = local_c0.__opaque[0];
        acStack_f8[1] = local_c0.__opaque[1];
        acStack_f8[2] = local_c0.__opaque[2];
        acStack_f8[3] = local_c0.__opaque[3];
        acStack_f8[4] = local_c0.__opaque[4];
        acStack_f8[5] = local_c0.__opaque[5];
        acStack_f8[6] = local_c0.__opaque[6];
        acStack_f8[7] = local_c0.__opaque[7];
        acStack_e8[0] = local_178[0];
        acStack_e8[1] = local_178[1];
        acStack_e8[2] = local_178[2];
        acStack_e8[3] = local_178[3];
        acStack_e8[4] = local_178[4];
        acStack_e8[5] = local_178[5];
        acStack_e8[6] = local_178[6];
        acStack_e8[7] = local_178[7];
        local_e0[0] = acStack_170[0];
        local_e0[1] = acStack_170[1];
        local_e0[2] = acStack_170[2];
        local_e0[3] = acStack_170[3];
        local_e0[4] = acStack_170[4];
        local_e0[5] = acStack_170[5];
        local_e0[6] = acStack_170[6];
        local_e0[7] = acStack_170[7];
        acStack_d8[0] = local_168[0];
        acStack_d8[1] = local_168[1];
        acStack_d8[2] = local_168[2];
        acStack_d8[3] = local_168[3];
        acStack_d8[4] = local_168[4];
        acStack_d8[5] = local_168[5];
        acStack_d8[6] = local_168[6];
        acStack_d8[7] = local_168[7];
        local_d0[0] = acStack_160[0];
        local_d0[1] = acStack_160[1];
        local_d0[2] = acStack_160[2];
        local_d0[3] = acStack_160[3];
        local_d0[4] = acStack_160[4];
        local_d0[5] = acStack_160[5];
        local_d0[6] = acStack_160[6];
        local_d0[7] = acStack_160[7];
        acStack_c8[0] = local_158[0];
        acStack_c8[1] = local_158[1];
        acStack_c8[2] = local_158[2];
        acStack_c8[3] = local_158[3];
        acStack_c8[4] = local_158[4];
        acStack_c8[5] = local_158[5];
        acStack_c8[6] = local_158[6];
        acStack_c8[7] = local_158[7];
        local_c0.__sig._1_7_ = SUB87(lVar7,1);
        local_c0.__sig = CONCAT71(local_c0.__sig._1_7_,cVar18);
        lVar7 = local_c0.__sig;
        local_c0.__sig._0_1_ = (undefined1)lVar6;
        local_c0.__sig._1_1_ = SUB81(lVar6,1);
        local_c0.__sig._2_1_ = SUB81(lVar6,2);
        local_c0.__sig._3_1_ = SUB81(lVar6,3);
        local_c0.__sig._4_1_ = SUB81(lVar6,4);
        local_c0.__sig._5_1_ = SUB81(lVar6,5);
        local_c0.__sig._6_1_ = SUB81(lVar6,6);
        local_c0.__sig._7_1_ = SUB81(lVar6,7);
        local_c0.__opaque[0] = (undefined1)local_c0.__sig;
        local_c0.__opaque[1] = local_c0.__sig._1_1_;
        local_c0.__opaque[2] = local_c0.__sig._2_1_;
        local_c0.__opaque[3] = local_c0.__sig._3_1_;
        local_c0.__opaque[4] = local_c0.__sig._4_1_;
        local_c0.__opaque[5] = local_c0.__sig._5_1_;
        local_c0.__opaque[6] = local_c0.__sig._6_1_;
        local_c0.__opaque[7] = local_c0.__sig._7_1_;
        acVar17 = local_c0.__opaque;
        local_c0.__opaque[0] = acVar8[0];
        local_c0.__opaque[1] = acVar8[1];
        local_c0.__opaque[2] = acVar8[2];
        local_c0.__opaque[3] = acVar8[3];
        local_c0.__opaque[4] = acVar8[4];
        local_c0.__opaque[5] = acVar8[5];
        local_c0.__opaque[6] = acVar8[6];
        local_c0.__opaque[7] = acVar8[7];
        acStack_b0[0] = local_c0.__opaque[0];
        acStack_b0[1] = local_c0.__opaque[1];
        acStack_b0[2] = local_c0.__opaque[2];
        acStack_b0[3] = local_c0.__opaque[3];
        acStack_b0[4] = local_c0.__opaque[4];
        acStack_b0[5] = local_c0.__opaque[5];
        acStack_b0[6] = local_c0.__opaque[6];
        acStack_b0[7] = local_c0.__opaque[7];
        acStack_a0[0] = local_178[0];
        acStack_a0[1] = local_178[1];
        acStack_a0[2] = local_178[2];
        acStack_a0[3] = local_178[3];
        acStack_a0[4] = local_178[4];
        acStack_a0[5] = local_178[5];
        acStack_a0[6] = local_178[6];
        acStack_a0[7] = local_178[7];
        local_98[0] = acStack_170[0];
        local_98[1] = acStack_170[1];
        local_98[2] = acStack_170[2];
        local_98[3] = acStack_170[3];
        local_98[4] = acStack_170[4];
        local_98[5] = acStack_170[5];
        local_98[6] = acStack_170[6];
        local_98[7] = acStack_170[7];
        acStack_90[0] = local_168[0];
        acStack_90[1] = local_168[1];
        acStack_90[2] = local_168[2];
        acStack_90[3] = local_168[3];
        acStack_90[4] = local_168[4];
        acStack_90[5] = local_168[5];
        acStack_90[6] = local_168[6];
        acStack_90[7] = local_168[7];
        local_88[0] = acStack_160[0];
        local_88[1] = acStack_160[1];
        local_88[2] = acStack_160[2];
        local_88[3] = acStack_160[3];
        local_88[4] = acStack_160[4];
        local_88[5] = acStack_160[5];
        local_88[6] = acStack_160[6];
        local_88[7] = acStack_160[7];
        acStack_80[0] = local_158[0];
        acStack_80[1] = local_158[1];
        acStack_80[2] = local_158[2];
        acStack_80[3] = local_158[3];
        acStack_80[4] = local_158[4];
        acStack_80[5] = local_158[5];
        acStack_80[6] = local_158[6];
        acStack_80[7] = local_158[7];
        local_f0 = acVar11;
        local_c0.__sig = lVar7;
        local_c0.__opaque = acVar17;
        local_a8 = acVar11;
        _swift_bridgeObjectRetain(acStack_170);
        _swift_bridgeObjectRetain(acVar15);
        FUN_100a50050(local_108,local_1e0);
        FUN_100a5008c(&local_c0);
        acStack_1d8[0] = acStack_f8[0];
        acStack_1d8[1] = acStack_f8[1];
        acStack_1d8[2] = acStack_f8[2];
        acStack_1d8[3] = acStack_f8[3];
        acStack_1d8[4] = acStack_f8[4];
        acStack_1d8[5] = acStack_f8[5];
        acStack_1d8[6] = acStack_f8[6];
        acStack_1d8[7] = acStack_f8[7];
        local_1e0[0] = local_100[0];
        local_1e0[1] = local_100[1];
        local_1e0[2] = local_100[2];
        local_1e0[3] = local_100[3];
        local_1e0[4] = local_100[4];
        local_1e0[5] = local_100[5];
        local_1e0[6] = local_100[6];
        local_1e0[7] = local_100[7];
        acStack_1c8[0] = acStack_e8[0];
        acStack_1c8[1] = acStack_e8[1];
        acStack_1c8[2] = acStack_e8[2];
        acStack_1c8[3] = acStack_e8[3];
        acStack_1c8[4] = acStack_e8[4];
        acStack_1c8[5] = acStack_e8[5];
        acStack_1c8[6] = acStack_e8[6];
        acStack_1c8[7] = acStack_e8[7];
        acStack_1d0[0] = local_f0[0];
        acStack_1d0[1] = local_f0[1];
        acStack_1d0[2] = local_f0[2];
        acStack_1d0[3] = local_f0[3];
        acStack_1d0[4] = local_f0[4];
        acStack_1d0[5] = local_f0[5];
        acStack_1d0[6] = local_f0[6];
        acStack_1d0[7] = local_f0[7];
        acStack_1b8[0] = acStack_d8[0];
        acStack_1b8[1] = acStack_d8[1];
        acStack_1b8[2] = acStack_d8[2];
        acStack_1b8[3] = acStack_d8[3];
        acStack_1b8[4] = acStack_d8[4];
        acStack_1b8[5] = acStack_d8[5];
        acStack_1b8[6] = acStack_d8[6];
        acStack_1b8[7] = acStack_d8[7];
        local_1c0[0] = local_e0[0];
        local_1c0[1] = local_e0[1];
        local_1c0[2] = local_e0[2];
        local_1c0[3] = local_e0[3];
        local_1c0[4] = local_e0[4];
        local_1c0[5] = local_e0[5];
        local_1c0[6] = local_e0[6];
        local_1c0[7] = local_e0[7];
        acStack_1a8[0] = acStack_c8[0];
        acStack_1a8[1] = acStack_c8[1];
        acStack_1a8[2] = acStack_c8[2];
        acStack_1a8[3] = acStack_c8[3];
        acStack_1a8[4] = acStack_c8[4];
        acStack_1a8[5] = acStack_c8[5];
        acStack_1a8[6] = acStack_c8[6];
        acStack_1a8[7] = acStack_c8[7];
        acStack_1b0[0] = local_d0[0];
        acStack_1b0[1] = local_d0[1];
        acStack_1b0[2] = local_d0[2];
        acStack_1b0[3] = local_d0[3];
        acStack_1b0[4] = local_d0[4];
        acStack_1b0[5] = local_d0[5];
        acStack_1b0[6] = local_d0[6];
        acStack_1b0[7] = local_d0[7];
        cVar18 = '\x01';
        pcVar9 = (code *)local_108;
        goto LAB_100ab28b4;
      }
      acVar15 = acVar11;
      acVar17 = param_2;
      FUN_100ab1c50();
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(acVar15);
      FUN_1005ad054();
      local_108 = acVar11;
      local_c0.__sig = (long)param_2;
      local_c0.__opaque = acVar17;
      FUN_100ab2cf4();
      FUN_1005b62b0(&local_c0,&DAT_100ee49c8,param_2);
      param_2 = local_108;
    }
    local_140 = CONCAT44(uVar19,iVar10);
    local_138._0_4_ = CONCAT13(1,uVar2);
    _swift_bridgeObjectRetain(acVar15);
    FUN_1005b32d0(&local_198,FUN_100a7c3c4,&local_150,acVar15,&DAT_100ee4520);
    pcVar9 = (code *)acVar15;
    _swift_bridgeObjectRelease();
    uVar3 = local_198;
    FUN_100ab2d90();
    _swift_allocObject();
    puVar14 = &DAT_100ff6ea0;
    FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
    _swift_allocObject();
    *(undefined4 *)(puVar14 + 0x10) = uVar3;
    puVar14[0x14] = 0;
    local_c0.__sig = 0;
    local_c0.__opaque[0] = '\0';
    local_c0.__opaque[1] = '\0';
    local_c0.__opaque[2] = '\0';
    local_c0.__opaque[3] = '\0';
    local_c0.__opaque[4] = '\0';
    local_c0.__opaque[5] = '\0';
    local_c0.__opaque[6] = '\0';
    local_c0.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_c0);
    iVar10 = _pthread_mutex_init((pthread_mutex_t *)(puVar14 + 0x18),&local_c0);
    if (iVar10 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100ab2914);
      (*pcVar9)();
    }
    *(undefined **)((long)pcVar9 + 0x10) = puVar14;
    *(undefined8 *)((long)pcVar9 + 0x18) = param_7;
    *(char (*) [8])((long)pcVar9 + 0x20) = acVar15;
    *(char (*) [8])((long)pcVar9 + 0x28) = acVar15;
    *(char (*) [8])((long)pcVar9 + 0x30) = param_2;
    *(byte *)((long)pcVar9 + 0x38) = (byte)(uVar19 >> 0xb) & 1;
  }
  _swift_retain(param_7);
  cVar18 = '\0';
LAB_100ab28b4:
  *param_1 = (char  [8])pcVar9;
  param_1[2] = acStack_1d8;
  param_1[1] = local_1e0;
  param_1[4] = acStack_1c8;
  param_1[3] = acStack_1d0;
  param_1[6] = acStack_1b8;
  param_1[5] = local_1c0;
  param_1[8] = acStack_1a8;
  param_1[7] = acStack_1b0;
  param_1[9][0] = cVar18;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ab2918 | FUN_100ab2918 */

void FUN_100ab2918(undefined8 *param_1,ulong param_2)

{
  __int32 _Var1;
  undefined1 uVar2;
  undefined4 uVar3;
  Darwin *unaff_x20;
  Darwin *this;
  undefined8 uVar4;
  long lVar5;
  int local_c4 [3];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 == 0) {
LAB_100ab2a88:
    uVar2 = 0;
  }
  else {
    if ((param_2 & 1) == 0) {
      Darwin::set_errno(unaff_x20,0);
      FUN_1005b32d0(&local_70,FUN_100aa7794,0,lVar5,PTR___type_metadata_for_Swift_Int32_100eadbd0);
      if ((int)local_70 != -1) goto LAB_100ab2a88;
      _Var1 = Darwin::get_errno();
      local_70 = 0xd000000000000033;
      uStack_68 = 0x8000000100dbb120;
      local_60 = 0xd000000000000025;
      local_58 = 0x8000000100db85f0;
      local_50 = 0x3ab;
      FUN_100a7f4e4(&local_b8,_Var1,lVar5,&local_70);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
      this = (Darwin *)(ulong)(byte)unaff_x20[0x28];
      uVar3 = 4;
      if (((byte)unaff_x20[0x28] & 1) == 0) {
        uVar3 = 0;
      }
      Darwin::set_errno(this,0);
      local_58 = CONCAT44(local_58._4_4_,uVar3);
      local_60 = uVar4;
      FUN_1005b32d0(local_c4,FUN_100ab3298,&local_70,lVar5,
                    PTR___type_metadata_for_Swift_Int32_100eadbd0);
      if (local_c4[0] != -1) goto LAB_100ab2a88;
      _Var1 = Darwin::get_errno();
      if ((((ulong)this & 1) != 0) && (_Var1 == 0x11)) {
        Darwin::set_errno(this,0);
        FUN_1005b32d0(&local_70,FUN_100aa7794,0,lVar5,PTR___type_metadata_for_Swift_Int32_100eadbd0)
        ;
        if ((int)local_70 == -1) {
          Darwin::get_errno();
        }
        _Var1 = 0x11;
      }
      local_70 = 0xd000000000000033;
      uStack_68 = 0x8000000100dbb120;
      local_60 = 0xd000000000000025;
      local_58 = 0x8000000100db85f0;
      local_50 = 0x3a5;
      FUN_100a7f894(&local_b8,0x5f78656d616e6572,0xea0000000000706e,_Var1,lVar5,uVar4,&local_70);
    }
    uVar2 = 1;
  }
  param_1[5] = uStack_90;
  param_1[4] = local_98;
  param_1[7] = uStack_80;
  param_1[6] = local_88;
  param_1[8] = local_78;
  param_1[1] = uStack_b0;
  *param_1 = local_b8;
  param_1[3] = uStack_a0;
  param_1[2] = local_a8;
  *(undefined1 *)(param_1 + 9) = uVar2;
  return;
}



/* Address: 0x100ab2b20 | FUN_100ab2b20 */

void FUN_100ab2b20(undefined8 *param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined *puVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puVar4;
  
  lVar8 = *unaff_x20;
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab2cd8);
    (*pcVar1)();
  }
  if (*(char *)(lVar8 + 0x14) == '\x01') {
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x18));
    if (iVar3 != 0) {
LAB_100ab2cd8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab2cdc);
      (*pcVar1)();
    }
    local_70 = 0;
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar8 + 0x10);
    *(undefined4 *)(lVar8 + 0x10) = 1;
    *(undefined1 *)(lVar8 + 0x14) = 1;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x18));
    if (iVar3 != 0) goto LAB_100ab2cd8;
    FUN_100ab2918(&local_b8,param_2 & 1);
    FUN_1005ac32c();
    if ((uVar7 & 0xff00000000) == 0x100000000) {
      local_68 = CONCAT44(local_68._4_4_,(int)uVar7);
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar2);
      puVar5 = puVar4;
      if ((bVar2 & 1) != 0) {
        FUN_100a54208();
        puVar5 = &local_68;
        _swift_willThrowTypedImpl(puVar5,&DAT_100ee42f8,puVar4);
      }
      FUN_100a54208();
      puVar6 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,puVar5,0,0);
      *(int *)puVar5 = (int)uVar7;
      local_68 = 0xd00000000000002c;
      uStack_60 = 0x8000000100dbb0f0;
      local_58 = 0xd000000000000025;
      uStack_50 = 0x8000000100db85f0;
      local_48 = 0x2b5;
      FUN_100a80fe0(&local_100);
      FUN_1002ec258(puVar6,1);
      FUN_100ab3250(&local_b8);
      local_70 = 1;
    }
    else {
      uStack_d8 = uStack_90;
      local_e0 = local_98;
      uStack_c8 = uStack_80;
      uStack_d0 = local_88;
      local_c0 = local_78;
      uStack_f8 = uStack_b0;
      local_100 = local_b8;
      uStack_e8 = uStack_a0;
      uStack_f0 = local_a8;
    }
  }
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  *(undefined1 *)(param_1 + 9) = local_70;
  return;
}


