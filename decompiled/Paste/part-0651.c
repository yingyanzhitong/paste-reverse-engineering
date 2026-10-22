/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006e425c | FUN_1006e425c */

void FUN_1006e425c(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  TaskLocal *pTVar6;
  undefined *puVar7;
  long *plVar8;
  _StringGuts _Var9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  
  lVar1 = unaff_x22 + 0x1b8;
  FUN_100a48e2c();
  if (param_1 == 0) {
    FUN_1000d4c98();
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
  *(long *)(unaff_x22 + 0x208) = param_1;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar17 = *(long *)(unaff_x22 + 0x230);
  uVar12 = *(undefined8 *)(unaff_x22 + 600);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar20 = *(undefined8 *)(unaff_x22 + 600);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
  FUN_100a4a610(unaff_x22 + 400);
  lVar4 = *(long *)(unaff_x22 + 0x1b0);
  FUN_100004640(unaff_x22 + 400,*(undefined8 *)(unaff_x22 + 0x1a8));
  puVar7 = &DAT_100f072e0;
  _Var9.unknown = (undefined *)(unaff_x22 + 0x208);
  (**(code **)(lVar4 + 8))(lVar17 + 0xb8);
  FUN_100004594(unaff_x22 + 400);
  Swift::_StringGuts::grow(0x17,_Var9);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar3 = *(char **)(lVar17 + 0xb0);
  pvVar10 = *(void **)(lVar17 + 0xb8);
  FUN_100867ea8();
  SVar25.bridgeObject = pvVar10;
  SVar25.str = pcVar3;
  SVar27.bridgeObject = puVar7;
  SVar27.str = param_3;
  Swift::String::append(SVar25,SVar27);
  _swift_bridgeObjectRelease(pvVar10);
  SVar26.bridgeObject = (void *)0x8000000100db0dd0;
  SVar26.str = (char *)0xd000000000000010;
  SVar28.bridgeObject = puVar7;
  SVar28.str = param_3;
  Swift::String::append(SVar26,SVar28);
  *(undefined **)(unaff_x22 + 0x140) = (undefined *)(unaff_x22 + 0x208);
  FUN_100a42ba8(lVar1,0x2050545448,&DAT_e500000000000000,FUN_1006e7f1c,unaff_x22 + 0x130,0,
                0xd000000000000017,0x8000000100db0cd0,0xd000000000000023,0x8000000100db0df0,0x4d);
  _swift_bridgeObjectRelease(&DAT_e500000000000000);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar4 = lVar1;
  FUN_100004640(lVar1,uVar5);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  *(long *)(unaff_x22 + 0xa8) = lVar17;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
  pcVar15 = FUN_1006e7f28;
  FUN_100a3eab8(FUN_1006e7f28,unaff_x22 + 0x70,uVar5,uVar16,lVar4);
  FUN_100a48dac();
  uVar16 = *(undefined8 *)pcVar15;
  *(undefined8 *)(unaff_x22 + 0x278) = uVar16;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  lVar4 = *(long *)(unaff_x22 + 0x1d8);
  FUN_100004640(lVar1,uVar5);
  pcVar15 = *(code **)(lVar4 + 8);
  _swift_retain(uVar16);
  (*pcVar15)(uVar5,lVar4);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar19;
  *(long *)(unaff_x22 + 0x40) = lVar17;
  *(long *)(unaff_x22 + 0x50) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar5;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    pTVar6 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x288) = pTVar6;
    *(long *)pTVar6 = unaff_x22;
    *(code **)(pTVar6 + 8) = FUN_1006e45f8;
    Swift::TaskLocal::_withValue
              (pTVar6,uVar16,unaff_x22 + 0xb8,unaff_x22 + 0x210,&DAT_100c724d0,unaff_x22 + 0x10,0,0,
               0xd000000000000023,0x8000000100db0df0,0x78,&DAT_100f277d8);
    return;
  }
  _swift_bridgeObjectRetain(uVar5);
  *(undefined8 *)(unaff_x22 + 0x218) = uVar5;
  puVar7 = &DAT_100fddb48;
  FUN_1000f7830(&DAT_100fddb48,&DAT_100c724d8);
  _swift_task_localValuePush(uVar16,unaff_x22 + 0x218,puVar7);
  plVar8 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x290) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1006e4678;
  FUN_1006e56fc(plVar8,unaff_x22 + 0xb8,*(undefined8 *)(unaff_x22 + 0x240),
                *(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230),
                *(undefined8 *)(unaff_x22 + 0x238),lVar1,*(undefined8 *)(unaff_x22 + 0x250),
                *(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x260),
                *(undefined8 *)(unaff_x22 + 0x268),*(undefined8 *)(unaff_x22 + 0x270));
  return;
}



/* Address: 0x1006e45f8 | FUN_1006e45f8 */

void FUN_1006e45f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x280);
    _swift_release(*(undefined8 *)(lVar2 + 0x278));
    _swift_bridgeObjectRelease(uVar3);
    pcVar1 = FUN_1006e46dc;
  }
  else {
    *(long *)(lVar2 + 0x2a0) = unaff_x20;
    _swift_release(*(undefined8 *)(lVar2 + 0x278));
    pcVar1 = FUN_1006e4768;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e4678 | FUN_1006e4678 */

void FUN_1006e4678(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x298) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x290));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e49b0;
  }
  else {
    pcVar1 = FUN_1006e4a04;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e46dc | FUN_1006e46dc */

void FUN_1006e46dc(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined1 *)(unaff_x22 + 0x188) = *(undefined1 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 200);
  FUN_100004594(unaff_x22 + 0x1b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x208));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x150);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 0x188);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001006e4764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e4768 | FUN_1006e4768 */

void FUN_1006e4768(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x1e0);
  lVar8 = *(long *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x280));
  FUN_1006fb2a4(uVar7);
  if (lVar8 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
    lVar6 = *(long *)(unaff_x22 + 0x1d8);
    FUN_100004640(unaff_x22 + 0x1b8,uVar2);
    (**(code **)(lVar6 + 0x18))(uVar7,lVar8,uVar2,lVar6);
  }
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x2a0);
  _swift_errorRetain();
  puVar3 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar4 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  puVar5 = puVar1;
  _swift_dynamicCast(puVar1,unaff_x22 + 0x220,puVar3,puVar4,0xe);
  if ((int)puVar5 == 0) {
    *(undefined8 *)(unaff_x22 + 0x200) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
    *puVar1 = 0;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0;
    FUN_1000fb4c4(puVar1,&DAT_100fdc4d0,&DAT_100c724e0);
    lVar8 = 500;
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x1f8);
    lVar6 = *(long *)(unaff_x22 + 0x200);
    FUN_100004640(puVar1,lVar8);
    (**(code **)(lVar6 + 0x18))(lVar8,lVar6);
    _swift_bridgeObjectRelease(puVar3);
    FUN_100004594(puVar1);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar6 = unaff_x22 + 0x1b8;
  FUN_100004640(lVar6,uVar7);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  *(long *)(unaff_x22 + 0x128) = lVar8;
  FUN_100a3eab8(FUN_1006e7ff0,unaff_x22 + 0x100,uVar7,uVar2,lVar6);
  if (lVar8 - 500U < 100) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
    lVar8 = *(long *)(unaff_x22 + 0x1d8);
    FUN_100004640(unaff_x22 + 0x1b8,uVar7);
    (**(code **)(lVar8 + 0x28))(1,0,0,uVar7,lVar8);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar8 = unaff_x22 + 0x1b8;
  FUN_100004640(lVar8,uVar7);
  FUN_100a3e9f8(uVar9,uVar7,uVar2,lVar8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar8 = unaff_x22 + 0x1b8;
  FUN_100004640(lVar8,uVar7);
  FUN_100a3e888(uVar7,uVar2,lVar8);
  _swift_willThrow();
  FUN_100004594(unaff_x22 + 0x1b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x208));
                    /* WARNING: Could not recover jumptable at 0x0001006e49ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e49b0 | FUN_1006e49b0 */

void FUN_1006e49b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_task_localValuePop();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x280);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x278));
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_switch(FUN_1006e46dc,0,0);
  return;
}



/* Address: 0x1006e4a04 | FUN_1006e4a04 */

void FUN_1006e4a04(void)

{
  long unaff_x22;
  
  _swift_task_localValuePop();
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x298);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x278));
  _swift_task_switch(FUN_1006e4768,0,0);
  return;
}



/* Address: 0x1006e4a54 | FUN_1006e4a54 */

void FUN_1006e4a54(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  char *pcVar7;
  _StringObject _Var8;
  String *pSVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  ulong uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  uint uVar18;
  long extraout_x8;
  ulong uVar19;
  ulong uVar20;
  UnsafeBufferPointer<__int8> UVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  String SVar27;
  long local_230;
  undefined8 uStack_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  undefined8 *local_208;
  String local_200;
  code *local_1f0;
  char *local_1e8;
  undefined **local_1e0;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined **local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined **local_100;
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
  
  local_230 = *(long *)(param_7 + -8);
  lVar23 = param_4;
  uStack_228 = param_6;
  local_218 = param_7;
  local_210 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_230 + 0x40));
  local_220 = (long)&local_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lVar23 != 0) {
    FUN_100a40408(param_4);
  }
  uVar25 = param_5[0x16];
  uVar11 = param_5[0x17];
  uVar12 = uVar11;
  local_208 = param_1;
  FUN_100867ea8();
  puVar26 = local_208;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  local_108 = PTR___type_metadata_for_Swift_String_100eac208;
  local_100 = &PTR_PTR_100f2a550;
  puVar3 = &local_120;
  uVar13 = 0xd000000000000013;
  local_120 = uVar25;
  uStack_118 = uVar12;
  FUN_100a3f5a8(puVar3,0xd000000000000013,0x8000000100db0d30);
  uStack_98 = param_5[0x11];
  local_a0 = param_5[0x10];
  uStack_88 = param_5[0x13];
  uStack_90 = param_5[0x12];
  uStack_78 = param_5[0x15];
  local_80 = param_5[0x14];
  uStack_d8 = param_5[9];
  local_e0 = param_5[8];
  uStack_c8 = param_5[0xb];
  uStack_d0 = param_5[10];
  uStack_b8 = param_5[0xd];
  local_c0 = param_5[0xc];
  uStack_a8 = param_5[0xf];
  uStack_b0 = param_5[0xe];
  uStack_118 = param_5[1];
  local_120 = *param_5;
  local_108 = (undefined *)param_5[3];
  uStack_110 = param_5[2];
  uStack_f8 = param_5[5];
  local_100 = (undefined **)param_5[4];
  uStack_e8 = param_5[7];
  uStack_f0 = param_5[6];
  FUN_1009fc75c();
  local_1b8 = puVar1;
  local_1b0 = &PTR_PTR_100f2a550;
  pvVar14 = (void *)0x687461702e6c7275;
  ppuVar6 = &local_1d0;
  local_1d0 = puVar3;
  uStack_1c8 = uVar13;
  FUN_100a3f5a8(ppuVar6,0x687461702e6c7275,&DAT_e800000000000000);
  if (*(long *)(param_3 + 0x10) == 0) {
    uStack_148 = param_5[0x11];
    local_150 = param_5[0x10];
    uStack_138 = param_5[0x13];
    uStack_140 = param_5[0x12];
    uStack_128 = param_5[0x15];
    local_130 = param_5[0x14];
    uStack_188 = param_5[9];
    local_190 = param_5[8];
    uStack_178 = param_5[0xb];
    uStack_180 = param_5[10];
    uStack_168 = param_5[0xd];
    local_170 = param_5[0xc];
    uStack_158 = param_5[0xf];
    uStack_160 = param_5[0xe];
    uStack_1c8 = param_5[1];
    local_1d0 = (undefined8 *)*param_5;
    local_1b8 = (undefined *)param_5[3];
    uStack_1c0 = param_5[2];
    uStack_1a8 = param_5[5];
    local_1b0 = (undefined **)param_5[4];
    uStack_198 = param_5[7];
    uStack_1a0 = param_5[6];
    FUN_1009fc7f0();
    if (pvVar14 == (void *)0x0) {
      ppuVar6 = (undefined8 **)0x0;
      local_1e8 = (undefined *)0x0;
      local_1e0 = (undefined **)0x0;
      local_1f0 = (code *)0x0;
    }
    else {
      local_1e0 = &PTR_PTR_100f2a550;
      local_1e8 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    local_200.bridgeObject = pvVar14;
    local_200.str = (char *)ppuVar6;
    FUN_100a3f5a8(&local_200,0x726575712e6c7275,0xe900000000000079);
  }
  else {
    uStack_148 = param_5[0x11];
    local_150 = param_5[0x10];
    uStack_138 = param_5[0x13];
    uStack_140 = param_5[0x12];
    uStack_128 = param_5[0x15];
    local_130 = param_5[0x14];
    uStack_188 = param_5[9];
    local_190 = param_5[8];
    uStack_178 = param_5[0xb];
    uStack_180 = param_5[10];
    uStack_168 = param_5[0xd];
    local_170 = param_5[0xc];
    uStack_158 = param_5[0xf];
    uStack_160 = param_5[0xe];
    uStack_1c8 = param_5[1];
    local_1d0 = (undefined8 *)*param_5;
    local_1b8 = (undefined *)param_5[3];
    uStack_1c0 = param_5[2];
    uStack_1a8 = param_5[5];
    local_1b0 = (undefined **)param_5[4];
    uStack_198 = param_5[7];
    uStack_1a0 = param_5[6];
    FUN_1009fc8a8();
    puVar4 = &DAT_100ef9d08;
    _swift_allocObject(&DAT_100ef9d08,0x38,7);
    uVar25 = local_210;
    *(long *)(puVar4 + 0x10) = local_218;
    *(undefined8 *)(puVar4 + 0x18) = param_8;
    *(undefined8 *)(puVar4 + 0x20) = local_210;
    *(long *)(puVar4 + 0x28) = param_3;
    *(long *)(puVar4 + 0x30) = param_4;
    puVar5 = &DAT_100ef9d30;
    _swift_allocObject(&DAT_100ef9d30,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1006e83bc;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    local_200.bridgeObject = pvVar14;
    local_200.str = (char *)ppuVar6;
    local_1f0 = FUN_1006e8414;
    local_1e8 = puVar5;
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(param_3);
    FUN_1000f7830(&DAT_100fddce8,&DAT_100c72680);
    FUN_1006e8450();
    FUN_1006b7aa4();
    SVar27.bridgeObject = (void *)0xe100000000000000;
    SVar27.str = (char *)0x26;
    SVar27 = (extension_Swift)::Swift::Sequence::_joined(SVar27);
    _swift_release(puVar5);
    puVar26 = local_208;
    _swift_bridgeObjectRelease(pvVar14);
    _swift_bridgeObjectRelease(ppuVar6);
    local_1e8 = puVar1;
    local_1e0 = &PTR_PTR_100f2a550;
    local_200 = SVar27;
    FUN_100a3f5a8(&local_200,0x726575712e6c7275,0xe900000000000079);
  }
  pcVar7 = (char *)0x6567412d72657355;
  pvVar14 = (void *)0xea0000000000746e;
  FUN_10085c5ec(0x6567412d72657355,0xea0000000000746e,0x6567612d72657375,0xea0000000000746e,uVar11);
  if (pvVar14 == (void *)0x0) {
    pcVar7 = (char *)0x0;
    local_1e8 = (undefined *)0x0;
    local_1e0 = (undefined **)0x0;
    local_1f0 = (code *)0x0;
  }
  else {
    local_1e0 = &PTR_PTR_100f2a550;
    local_1e8 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  local_200.str = pcVar7;
  local_200.bridgeObject = pvVar14;
  FUN_100a3f5a8(&local_200,0xd000000000000013,0x8000000100db0e60);
  _Var8.unknown = (undefined *)0x2d746e65746e6f43;
  uVar15 = 0xee006874676e654c;
  FUN_10085c5ec(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar11);
  if (uVar15 == 0) {
LAB_1006e50b0:
    local_1e0 = (undefined **)0x0;
    local_200 = (String)ZEXT816(0);
    local_1e8 = (char *)0x0;
    local_1f0 = (code *)0x0;
  }
  else {
    uVar19 = (ulong)_Var8.unknown & 0xffffffffffff;
    uVar20 = uVar15 >> 0x38 & 0xf;
    uVar17 = uVar19;
    if ((uVar15 & 0x2000000000000000) != 0) {
      uVar17 = uVar20;
    }
    if (uVar17 == 0) {
      _swift_bridgeObjectRelease(uVar15);
      goto LAB_1006e50b0;
    }
    if ((uVar15 >> 0x3c & 1) == 0) {
      if ((uVar15 >> 0x3d & 1) == 0) {
        if (((ulong)_Var8.unknown >> 0x3c & 1) == 0) {
          uVar19 = uVar15;
          UVar21 = Swift::_StringObject::get_sharedUTF8(_Var8);
        }
        else {
          UVar21.unknown = (undefined *)((uVar15 & 0xfffffffffffffff) + 0x20);
        }
        if (*UVar21.unknown == 0x2b) {
          if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e53d8);
            (*pcVar2)();
          }
          lVar23 = uVar19 - 1;
          if (lVar23 == 0) goto LAB_1006e5094;
          _Var8.unknown = (char *)0x0;
          do {
            UVar21.unknown = UVar21.unknown + 1;
            if (((9 < (byte)*UVar21.unknown - 0x30) ||
                (lVar24 = (long)_Var8.unknown * 10,
                SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar17 = (ulong)(byte)((byte)*UVar21.unknown - 0x30),
               _Var8.unknown = (undefined *)(lVar24 + uVar17), SCARRY8(lVar24,uVar17)))
            goto LAB_1006e5094;
            uVar18 = 0;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        else if (*UVar21.unknown == 0x2d) {
          if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e53d0);
            (*pcVar2)();
          }
          lVar23 = uVar19 - 1;
          if (lVar23 == 0) {
LAB_1006e5094:
            _Var8.unknown = (char *)0x0;
            uVar18 = 1;
          }
          else {
            _Var8.unknown = (char *)0x0;
            do {
              UVar21.unknown = UVar21.unknown + 1;
              if (((9 < (byte)*UVar21.unknown - 0x30) ||
                  (lVar24 = (long)_Var8.unknown * 10,
                  SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
                 (uVar17 = (ulong)(byte)((byte)*UVar21.unknown - 0x30),
                 _Var8.unknown = (undefined *)(lVar24 - uVar17), SBORROW8(lVar24,uVar17)))
              goto LAB_1006e5094;
              uVar18 = 0;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
        }
        else {
          if (uVar19 == 0) goto LAB_1006e5094;
          _Var8.unknown = (char *)0x0;
          if (UVar21.unknown == (byte *)0x0) {
            uVar18 = 0;
          }
          else {
            do {
              if (((9 < (byte)*UVar21.unknown - 0x30) ||
                  (lVar23 = (long)_Var8.unknown * 10,
                  SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar23 >> 0x3f)) ||
                 (uVar17 = (ulong)(byte)((byte)*UVar21.unknown - 0x30),
                 _Var8.unknown = (undefined *)(lVar23 + uVar17), SCARRY8(lVar23,uVar17)))
              goto LAB_1006e5094;
              uVar18 = 0;
              uVar19 = uVar19 - 1;
              UVar21.unknown = UVar21.unknown + 1;
            } while (uVar19 != 0);
          }
        }
      }
      else {
        local_200.str = _Var8.unknown;
        local_200.bridgeObject = (void *)(uVar15 & 0xffffffffffffff);
        uVar18 = (uint)_Var8.unknown & 0xff;
        if (uVar18 == 0x2b) {
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e53dc);
            (*pcVar2)();
          }
          lVar23 = uVar20 - 1;
          if (lVar23 == 0) goto LAB_1006e5094;
          _Var8.unknown = (char *)0x0;
          pbVar22 = (byte *)((ulong)&local_200 | 1);
          do {
            if (((9 < *pbVar22 - 0x30) ||
                (lVar24 = (long)_Var8.unknown * 10,
                SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar17 = (ulong)(byte)(*pbVar22 - 0x30),
               _Var8.unknown = (undefined *)(lVar24 + uVar17), SCARRY8(lVar24,uVar17)))
            goto LAB_1006e5094;
            uVar18 = 0;
            lVar23 = lVar23 + -1;
            pbVar22 = pbVar22 + 1;
          } while (lVar23 != 0);
        }
        else if (uVar18 == 0x2d) {
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e53d4);
            (*pcVar2)();
          }
          lVar23 = uVar20 - 1;
          if (lVar23 == 0) goto LAB_1006e5094;
          _Var8.unknown = (char *)0x0;
          pbVar22 = (byte *)((ulong)&local_200 | 1);
          do {
            if (((9 < *pbVar22 - 0x30) ||
                (lVar24 = (long)_Var8.unknown * 10,
                SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar17 = (ulong)(byte)(*pbVar22 - 0x30),
               _Var8.unknown = (undefined *)(lVar24 - uVar17), SBORROW8(lVar24,uVar17)))
            goto LAB_1006e5094;
            uVar18 = 0;
            lVar23 = lVar23 + -1;
            pbVar22 = pbVar22 + 1;
          } while (lVar23 != 0);
        }
        else {
          if (uVar20 == 0) goto LAB_1006e5094;
          _Var8.unknown = (char *)0x0;
          pSVar9 = &local_200;
          do {
            uVar18 = *(byte *)&pSVar9->str - 0x30;
            if (((9 < uVar18) ||
                (lVar23 = (long)_Var8.unknown * 10,
                SUB168(SEXT816((long)_Var8.unknown) * SEXT816(10),8) != lVar23 >> 0x3f)) ||
               (uVar17 = (ulong)(byte)uVar18, _Var8.unknown = (undefined *)(lVar23 + uVar17),
               SCARRY8(lVar23,uVar17))) goto LAB_1006e5094;
            uVar18 = 0;
            uVar20 = uVar20 - 1;
            pSVar9 = (String *)((long)&pSVar9->str + 1);
          } while (uVar20 != 0);
        }
      }
    }
    else {
      uVar17 = uVar15;
      thunk_FUN_1006c9d88();
      uVar18 = (uint)uVar17;
    }
    _swift_bridgeObjectRelease(uVar15);
    if ((uVar18 & 0xff) == 1) goto LAB_1006e50b0;
    local_1e8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    local_1e0 = &PTR_PTR_100f2a560;
    local_200.str = _Var8.unknown;
  }
  FUN_100a3f5a8(&local_200,0xd000000000000016,0x8000000100db0e80);
  lVar24 = local_218;
  lVar23 = local_220;
  (**(code **)(local_230 + 0x10))(local_220,uStack_228,local_218);
  puVar4 = &DAT_100fddcf8;
  FUN_1000f7830(&DAT_100fddcf8,&DAT_100c72688);
  pSVar9 = &local_200;
  _swift_dynamicCast(pSVar9,lVar23,lVar24,puVar4,0xe);
  ppuVar16 = local_1e0;
  pcVar7 = local_1e8;
  if (((ulong)pSVar9 & 1) == 0) {
    local_1e0 = (undefined **)0x0;
    local_200 = (String)ZEXT816(0);
    local_1e8 = (char *)0x0;
    local_1f0 = (code *)0x0;
    FUN_1000fb4c4(&local_200,&DAT_100fddd00,&DAT_100c72690);
    goto LAB_1006e5328;
  }
  FUN_100004640(&local_200,local_1e8);
  puVar26 = local_208;
  (*(code *)ppuVar16[2])();
  uVar18 = (uint)ppuVar16;
  FUN_100004594(&local_200);
  if ((((ulong)pcVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) goto LAB_1006e5328;
  pcVar10 = pcVar7;
  FUN_100666f78();
  if ((uVar18 & 0xff) == 1) {
    pcVar10 = (char *)0x0;
    local_1e0 = (undefined **)0x0;
    local_200.bridgeObject = (void *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (undefined *)0x0;
  }
  else {
    local_1e0 = &PTR_PTR_100f2a560;
    local_1e8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  }
  pvVar14 = (void *)0xd000000000000012;
  local_200.str = pcVar10;
  FUN_100a3f5a8(&local_200,0xd000000000000012,0x8000000100db0ec0);
  uVar18 = (uint)((ulong)pcVar7 >> 0x3e);
  pcVar10 = pcVar7;
  if (uVar18 == 0) {
LAB_1006e526c:
    FUN_100667050();
    if (pvVar14 != (void *)0x0) goto LAB_1006e5278;
LAB_1006e52e4:
    pcVar10 = (char *)0x0;
    local_1e8 = (char *)0x0;
    local_1e0 = (undefined **)0x0;
    local_1f0 = (code *)0x0;
  }
  else {
    if (uVar18 == 1) {
      local_1e8 = puVar1;
      local_1e0 = &PTR_PTR_100f2a550;
      local_200.str = (char *)0x3674656e69;
      local_200.bridgeObject = &DAT_e500000000000000;
      pvVar14 = (void *)0x6b636f732e74656e;
      FUN_100a3f5a8(&local_200,0x6b636f732e74656e,0xef796c696d61662e);
      goto LAB_1006e526c;
    }
    local_1e8 = puVar1;
    local_1e0 = &PTR_PTR_100f2a550;
    local_200.str = (char *)0x78696e75;
    local_200.bridgeObject = &DAT_e400000000000000;
    pvVar14 = (void *)0x6b636f732e74656e;
    FUN_100a3f5a8(&local_200,0x6b636f732e74656e,0xef796c696d61662e);
    FUN_100666fac();
    if (pvVar14 == (void *)0x0) goto LAB_1006e52e4;
LAB_1006e5278:
    local_1e0 = &PTR_PTR_100f2a550;
    local_1e8 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  local_200.bridgeObject = pvVar14;
  local_200.str = pcVar10;
  FUN_100a3f5a8(&local_200,0xd000000000000012,0x8000000100db0ee0);
  FUN_1005d8534(pcVar7);
LAB_1006e5328:
  uVar25 = *puVar26;
  FUN_1006e54d0(uVar11,uVar25,0xd000000000000014,0x8000000100db0ea0,local_210);
  _swift_bridgeObjectRelease(uVar25);
  *puVar26 = uVar11;
  return;
}



/* Address: 0x1006e53dc | FUN_1006e53dc */

String FUN_1006e53dc(char *param_1,void *param_2,char *param_3,void *param_4,char *param_5,
                    void *param_6,char *param_7,void *param_8)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 local_60 [16];
  String SVar6;
  
  pcVar1 = param_1;
  FUN_1006e3eb4();
  if (((ulong)pcVar1 & 1) == 0) {
    SVar5.bridgeObject = param_2;
    SVar5.str = param_1;
    local_60 = (undefined1  [16])Swift::String::__fromSubstring(SVar5);
    SVar4.bridgeObject = (void *)0xe100000000000000;
    SVar4.str = (char *)0x3d;
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar4,SVar9);
    SVar6.bridgeObject = param_6;
    SVar6.str = param_5;
    SVar5 = Swift::String::__fromSubstring(SVar6);
    SVar10.bridgeObject = param_8;
    SVar10.str = param_7;
    Swift::String::append(SVar5,SVar10);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  else {
    SVar2.bridgeObject = param_2;
    SVar2.str = param_1;
    local_60 = (undefined1  [16])Swift::String::__fromSubstring(SVar2);
    SVar3.bridgeObject = (void *)0xe900000000000044;
    SVar3.str = (char *)0x455443414445523d;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar3,SVar8);
  }
  SVar7.str = (char *)local_60._0_8_;
  SVar7.bridgeObject = (void *)local_60._8_8_;
  return SVar7;
}



/* Address: 0x1006e54d0 | FUN_1006e54d0 */

undefined8
FUN_1006e54d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  String SVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined **ppuVar11;
  char *pcVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  String SVar18;
  long local_90;
  undefined8 uStack_88;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  
  uVar16 = 1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_5 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_5 + 0x38);
  local_68 = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_5);
  lVar14 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar5 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      plVar15 = (long *)(*(long *)(param_5 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x30 +
                        lVar14 * 0xc00);
      lVar10 = *plVar15;
      lVar1 = plVar15[1];
      pcVar12 = (char *)plVar15[2];
      pvVar2 = (void *)plVar15[3];
      lVar3 = plVar15[5];
      SVar6 = *(String *)(plVar15 + 4);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(pvVar2);
      _swift_bridgeObjectRetain(lVar3);
      pvVar13 = pvVar2;
      FUN_10085ca84(lVar10,lVar1,pcVar12,pvVar2,param_1);
      if (*(long *)(lVar10 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(pvVar2);
        _swift_bridgeObjectRelease(lVar1);
        _swift_bridgeObjectRelease(lVar10);
      }
      else {
        local_90 = param_3;
        uStack_88 = param_4;
        _swift_bridgeObjectRetain();
        SVar18.bridgeObject = pvVar13;
        SVar18.str = pcVar12;
        Swift::String::append(SVar6,SVar18);
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(pvVar2);
        _swift_bridgeObjectRelease(lVar1);
        uVar7 = uStack_88;
        lVar1 = local_90;
        if (*(long *)(lVar10 + 0x10) == 1) {
          local_78 = (undefined **)PTR___type_metadata_for_Swift_String_100eac208;
          local_70 = &PTR_PTR_100f2a550;
          lVar3 = *(long *)(lVar10 + 0x20);
          uVar4 = *(undefined8 *)(lVar10 + 0x28);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRelease(lVar10);
          local_90 = lVar3;
          uStack_88 = uVar4;
        }
        else {
          ppuVar11 = (undefined **)&DAT_100fdc3a8;
          FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
          local_78 = ppuVar11;
          FUN_1006e8320();
          local_90 = lVar10;
          local_70 = ppuVar11;
        }
        FUN_100a3f5a8(&local_90,lVar1,uVar7);
      }
    }
    bVar9 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar9) break;
    if ((long)(uVar16 + 0x3f >> 6) <= lVar14) {
      _swift_release(param_5);
      return local_68;
    }
    uVar17 = ((ulong *)(param_5 + 0x38))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1006e56fc);
  (*pcVar8)();
}



/* Address: 0x1006e56fc | FUN_1006e56fc */

void FUN_1006e56fc(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_11;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_10;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006e579c;
                    /* WARNING: Could not recover jumptable at 0x0001006e5798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,unaff_x22 + 0x58,param_4,param_5);
  return;
}



/* Address: 0x1006e579c | FUN_1006e579c */

void FUN_1006e579c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e5800;
  }
  else {
    pcVar1 = FUN_10054672c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e5800 | FUN_1006e5800 */

void FUN_1006e5800(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  lVar3 = *(long *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined1 *)(unaff_x22 + 0xe0) = *(undefined1 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1006fb2a4(uVar8);
  if (lVar3 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x1b0);
    uVar10 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    FUN_100004640(lVar1,uVar10);
    (**(code **)(lVar2 + 0x18))(uVar8,lVar3,uVar10,lVar2);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar3 = *(long *)(unaff_x22 + 0x1b0);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(lVar3 + 0x18);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b8);
  lVar2 = lVar3;
  FUN_100004640(lVar3,uVar10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  *(undefined8 **)(unaff_x22 + 0x50) = (undefined8 *)(unaff_x22 + 0xa0);
  FUN_100a3eab8(FUN_1006e821c,unaff_x22 + 0x10,uVar10,uVar12,lVar2);
  lVar2 = 0;
  FUN_1006e80f4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  puVar4 = (undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *puVar4 = 0;
  FUN_100076688(lVar3,unaff_x22 + 0xe8);
  _swift_beginAccess(puVar4,unaff_x22 + 0x188,0x21,0);
  FUN_1006e8230(unaff_x22 + 0xe8,puVar4);
  _swift_endAccess(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined1 *)(unaff_x22 + 0x130) = *(undefined1 *)(unaff_x22 + 0xe0);
  FUN_1006e1660(unaff_x22 + 0x110,unaff_x22 + 0x160);
  _swift_retain(lVar2);
  FUN_100a017e8(unaff_x22 + 0x138,&DAT_100c72670,lVar2);
  _swift_release(lVar2);
  FUN_1006e169c(unaff_x22 + 0x110);
  FUN_1009ffcfc(unaff_x22 + 0x138);
  _swift_release(lVar2);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar5[1] = *(undefined8 *)(unaff_x22 + 0xa8);
  *puVar5 = uVar8;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(unaff_x22 + 0xe0);
  puVar5[5] = uVar6;
  puVar5[4] = uVar12;
  puVar5[7] = uVar9;
  puVar5[6] = uVar7;
  puVar5[3] = uVar10;
  puVar5[2] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0001006e59f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e59f8 | FUN_1006e59f8 */

void FUN_1006e59f8(ulong *param_1)

{
  undefined *puVar1;
  ulong *in_x5;
  ulong in_x6;
  long in_x7;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined **local_60;
  
  FUN_1006fb2a4();
  if (in_x7 == 0) {
    in_x6 = 0;
    local_68 = (undefined *)0x0;
    local_60 = (undefined **)0x0;
    local_70 = 0;
  }
  else {
    local_60 = &PTR_PTR_100f2a550;
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  local_80 = in_x6;
  lStack_78 = in_x7;
  FUN_100a3f5a8(&local_80,0x756f722e70747468,0xea00000000006574);
  uVar3 = in_x5[3];
  uVar4 = *param_1;
  uVar2 = uVar3;
  _swift_retain();
  FUN_1006e54d0();
  _swift_release(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  *param_1 = uVar2;
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_80 = *in_x5;
  local_68 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_60 = &PTR_PTR_100f2a560;
  FUN_100a3f5a8(&local_80,0xd000000000000019,0x8000000100db0d50);
  uVar2 = in_x5[5];
  if ((char)in_x5[8] == '\0') {
    local_80 = (ulong)(uint)((int)(uVar2 >> 0x20) - (int)uVar2);
  }
  else if ((char)in_x5[8] == '\x01') {
    if ((uVar2 & 0xff) == 1) {
      local_60 = (undefined **)0x0;
      lStack_78 = 0;
      local_80 = 0;
      local_68 = (undefined *)0x0;
      local_70 = 0;
      goto LAB_1006e5b64;
    }
    local_80 = in_x5[4];
  }
  else {
    local_80 = 0;
  }
  local_68 = puVar1;
  local_60 = &PTR_PTR_100f2a560;
LAB_1006e5b64:
  FUN_100a3f5a8(&local_80,0xd000000000000017,0x8000000100db0e40);
  return;
}



/* Address: 0x1006e5ba0 | FUN_1006e5ba0 */

void FUN_1006e5ba0(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_1006e5bb8,0,0);
  return;
}



/* Address: 0x1006e5bb8 | FUN_1006e5bb8 */

void FUN_1006e5bb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x60,0,0);
  FUN_1006e82d0(lVar4 + 0x10,unaff_x22 + 0x10);
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fddcd8,&DAT_100c72650);
  }
  else {
    FUN_100076688(unaff_x22 + 0x10,unaff_x22 + 0x38);
    FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fddcd8,&DAT_100c72650);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar3 = unaff_x22 + 0x38;
    FUN_100004640(lVar3,uVar1);
    FUN_100a3e888(uVar1,uVar2,lVar3);
    FUN_100004594(unaff_x22 + 0x38);
  }
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x38,0x21,0);
  FUN_1006e8230(unaff_x22 + 0x10,lVar4 + 0x10);
  _swift_endAccess(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001006e5cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e5cbc | FUN_1006e5cbc */

void FUN_1006e5cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined **ppuStack_38;
  
  FUN_1006fb2a4();
  if (param_5 == 0) {
    param_4 = 0;
    local_40 = (undefined *)0x0;
    ppuStack_38 = (undefined **)0x0;
    local_48 = 0;
  }
  else {
    ppuStack_38 = &PTR_PTR_100f2a550;
    local_40 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  local_58 = param_4;
  lStack_50 = param_5;
  FUN_100a3f5a8(&local_58,0x756f722e70747468,0xea00000000006574);
  local_40 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  ppuStack_38 = &PTR_PTR_100f2a560;
  local_58 = param_3;
  FUN_100a3f5a8(&local_58,0xd000000000000019,0x8000000100db0d50);
  return;
}



/* Address: 0x1006e5d88 | FUN_1006e5d88 */

void FUN_1006e5d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar5 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar6 = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  plVar3 = (long *)0x2b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006d6040;
  FUN_1006e4218(plVar3,unaff_x22 + 0x40,param_2,param_3,&DAT_100c72660,unaff_x22 + 0x10,uVar1,uVar2,
                uVar4,uVar5,uVar6);
  return;
}



/* Address: 0x1006e5e40 | FUN_1006e5e40 */

void FUN_1006e5e40(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_70;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_100076688(unaff_x20 + 0x10,auStack_70);
    FUN_100004640(auStack_70,local_58);
    FUN_100a3e888(local_58,uStack_50,puVar1);
    FUN_100004594(auStack_70);
  }
  FUN_1000fb4c4(unaff_x20 + 0x10,&DAT_100fddcd8,&DAT_100c72650);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006e5ee8 | FUN_1006e5ee8 */

void FUN_1006e5ee8(void)

{
  String SVar1;
  String SVar2;
  Hasher into;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *(String *)(unaff_x20 + 0x10);
  SVar2 = *(String *)(unaff_x20 + 0x20);
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1006e5f4c | FUN_1006e5f4c */

void FUN_1006e5f4c(Hasher param_1)

{
  String SVar1;
  long unaff_x20;
  
  SVar1 = *(String *)(unaff_x20 + 0x20);
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 0x10));
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x1006e5f88 | FUN_1006e5f88 */

void FUN_1006e5f88(__int64 param_1)

{
  String SVar1;
  String SVar2;
  Hasher into;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *(String *)(unaff_x20 + 0x10);
  SVar2 = *(String *)(unaff_x20 + 0x20);
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1006e5fe8 | FUN_1006e5fe8 */

bool FUN_1006e5fe8(long param_1,long param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  bool bVar4;
  _StringGuts _Var5;
  
  _Var2.unknown = *(undefined **)(param_1 + 0x20);
  _Var5.unknown = *(undefined **)(param_1 + 0x28);
  puVar1 = *(undefined **)(param_2 + 0x20);
  puVar3 = *(undefined **)(param_2 + 0x28);
  if ((*(undefined **)(param_1 + 0x10) != *(undefined **)(param_2 + 0x10) ||
       *(undefined **)(param_1 + 0x18) != *(undefined **)(param_2 + 0x18)) &&
     (bVar4 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x10),
                         (_StringGuts)*(undefined **)(param_1 + 0x18),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10)), !bVar4))
  {
    return false;
  }
  if (_Var2.unknown == puVar1 && _Var5.unknown == puVar3) {
    return true;
  }
  bVar4 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,(_StringComparisonResult)(__int8)puVar1);
  return bVar4;
}



/* Address: 0x1006e6078 | FUN_1006e6078 */

undefined1  [16]
FUN_1006e6078(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  _swift_bridgeObjectRetain(param_2);
  thunk_FUN_10085af9c(param_1);
  if (param_2 == 0) {
    param_1 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_10085c5ec();
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_2);
  }
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x1006e60f8 | FUN_1006e60f8 */

undefined8 FUN_1006e60f8(__uint32 *param_1,undefined *param_2)

{
  __uint32 _Var1;
  ulong uVar3;
  undefined8 uVar4;
  Hasher HVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  Hasher HVar2;
  
  lVar8 = *unaff_x20;
  HVar5.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  _Var1 = (__uint32)param_2;
  HVar2.unknown = param_2;
  Swift::Hasher::_combine(_Var1,HVar5);
  uVar3 = Swift::Hasher::_finalize(HVar2);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint32 *)(*(long *)(lVar8 + 0x30) + uVar3 * 4) == _Var1) {
        uVar4 = 0;
        goto LAB_1006e61c8;
      }
      uVar3 = uVar3 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  lVar6 = *unaff_x20;
  FUN_1006e658c(param_2,uVar3,lVar8);
  *unaff_x20 = lVar6;
  uVar4 = 1;
LAB_1006e61c8:
  *param_1 = _Var1;
  return uVar4;
}



/* Address: 0x1006e61e4 | FUN_1006e61e4 */

undefined8
FUN_1006e61e4(ulong *param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5)

{
  ulong *puVar1;
  bool bVar2;
  Hasher into;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  long local_a8 [9];
  
  lVar5 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar5 + 0x28));
  into.unknown = (undefined *)local_a8;
  Swift::Hashable::hash(into);
  uVar3 = Swift::Hasher::_finalize(into);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar3 * 0x20);
      if (((((undefined *)puVar1[2] == param_4 && (undefined *)puVar1[3] == param_5) &&
           (undefined *)(*puVar1 >> 0x10) == (undefined *)(param_2 >> 0x10)) &&
           (undefined *)(puVar1[1] >> 0x10) == (undefined *)(param_3 >> 0x10)) ||
         (bVar2 = Swift::_stringCompareInternal
                            ((undefined *)puVar1[2],(undefined *)puVar1[3],
                             (undefined *)(*puVar1 >> 0x10),(undefined *)(puVar1[1] >> 0x10),
                             (_StringComparisonResult)(__int8)param_4), bVar2)) {
        _swift_bridgeObjectRelease(param_5);
        puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar3 * 0x20);
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        uVar6 = *puVar1;
        param_1[1] = puVar1[1];
        *param_1 = uVar6;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar3 = uVar3 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  local_a8[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_5);
  FUN_1006e66bc(param_2,param_3,param_4,param_5,uVar3,lVar5);
  *unaff_x20 = local_a8[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = (ulong)param_4;
  param_1[3] = (ulong)param_5;
  return 1;
}



/* Address: 0x1006e6390 | FUN_1006e6390 */

undefined8 FUN_1006e6390(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  bool bVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_b8 [72];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uStack_68 = param_2[1];
  local_70 = *param_2;
  pcVar1 = ((String *)(param_2 + 2))->str;
  puVar4 = (undefined *)param_2[3];
  SVar9 = *(String *)(param_2 + 2);
  pcVar2 = ((String *)(param_2 + 4))->str;
  puVar5 = (undefined *)param_2[5];
  SVar10 = *(String *)(param_2 + 4);
  lVar16 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar16 + 0x28));
  Swift::String::hash((Hasher)auStack_b8,SVar9);
  into.unknown = auStack_b8;
  Swift::String::hash(into,SVar10);
  uVar12 = Swift::Hasher::_finalize(into);
  uVar13 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar16 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    lVar17 = *(long *)(lVar16 + 0x30);
    do {
      lVar14 = lVar17 + uVar12 * 0x30;
      _Var3.unknown = *(undefined **)(lVar14 + 0x20);
      _Var6.unknown = *(undefined **)(lVar14 + 0x28);
      if (((*(undefined **)(lVar14 + 0x10) == pcVar1 && *(undefined **)(lVar14 + 0x18) == puVar4) ||
          (bVar11 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)*(undefined **)(lVar14 + 0x10),
                               (_StringGuts)*(undefined **)(lVar14 + 0x18),
                               (_StringComparisonResult)(__int8)pcVar1), bVar11)) &&
         ((_Var3.unknown == pcVar2 && _Var6.unknown == puVar5 ||
          (bVar11 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var6,(_StringComparisonResult)(__int8)pcVar2), bVar11)))) {
        FUN_10000caac(&local_70);
        _swift_bridgeObjectRelease(puVar4);
        _swift_bridgeObjectRelease(puVar5);
        puVar15 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x30);
        uVar20 = puVar15[1];
        uVar18 = puVar15[2];
        uVar7 = puVar15[3];
        uVar19 = puVar15[4];
        uVar8 = puVar15[5];
        *param_1 = *puVar15;
        param_1[1] = uVar20;
        param_1[2] = uVar18;
        param_1[3] = uVar7;
        param_1[4] = uVar19;
        param_1[5] = uVar8;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        return 0;
      }
      uVar12 = uVar12 + 1 & ~uVar13;
    } while ((*(ulong *)(lVar16 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
  }
  lVar16 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar16);
  lVar17 = *unaff_x20;
  FUN_10000ca28(&local_70,auStack_b8);
  _swift_bridgeObjectRetain(puVar4);
  _swift_bridgeObjectRetain(puVar5);
  FUN_1006e6884(param_2,uVar12,lVar16);
  *unaff_x20 = lVar17;
  uVar18 = *param_2;
  uVar20 = param_2[3];
  uVar19 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar18;
  param_1[3] = uVar20;
  param_1[2] = uVar19;
  uVar18 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar18;
  return 1;
}



/* Address: 0x1006e658c | FUN_1006e658c */

void FUN_1006e658c(Hasher param_1,Hasher param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  __uint32 _Var5;
  long *unaff_x20;
  long lVar6;
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  _Var5 = (__uint32)param_1.unknown;
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1006e7138();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1006e6a48(uVar2 + 1);
    }
    else {
      FUN_1006e7564();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    Swift::Hasher::_combine(_Var5,param_2);
    uVar2 = Swift::Hasher::_finalize(param_1);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar2 & (uVar4 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      do {
        if (*(__uint32 *)(*(long *)(lVar6 + 0x30) + (long)param_2.unknown * 4) == _Var5) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e66bc);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar6 = lVar3 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  *(__uint32 *)(*(long *)(lVar3 + 0x30) + (long)param_2.unknown * 4) = _Var5;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e66ac);
  (*pcVar1)();
}



/* Address: 0x1006e66bc | FUN_1006e66bc */

void FUN_1006e66bc(ulong param_1,ulong param_2,undefined *param_3,undefined *param_4,ulong param_5,
                  ulong param_6)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  Hasher into;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_a8 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_6 & 1) == 0) {
      FUN_1006e7278();
    }
  }
  else {
    if ((param_6 & 1) == 0) {
      FUN_1006e6c58(uVar4 + 1);
    }
    else {
      FUN_1006e77b8();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    into.unknown = auStack_a8;
    Swift::Hashable::hash(into);
    param_5 = Swift::Hasher::_finalize(into);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_5 = param_5 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + param_5 * 0x20);
        if (((((undefined *)puVar1[2] == param_3 && (undefined *)puVar1[3] == param_4) &&
             (undefined *)(*puVar1 >> 0x10) == (undefined *)(param_1 >> 0x10)) &&
             (undefined *)(puVar1[1] >> 0x10) == (undefined *)(param_2 >> 0x10)) ||
           (bVar3 = Swift::_stringCompareInternal
                              ((undefined *)puVar1[2],(undefined *)puVar1[3],
                               (undefined *)(*puVar1 >> 0x10),(undefined *)(puVar1[1] >> 0x10),
                               (_StringComparisonResult)(__int8)param_3), bVar3)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e6884);
          (*pcVar2)();
        }
        param_5 = param_5 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + (param_5 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_5 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + param_5 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = (ulong)param_3;
  puVar1[3] = (ulong)param_4;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e6874);
  (*pcVar2)();
}



/* Address: 0x1006e6884 | FUN_1006e6884 */

void FUN_1006e6884(undefined8 *param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  Hasher into;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  uVar11 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar11 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1006e73dc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1006e6eb4(uVar11 + 1);
    }
    else {
      FUN_1006e7a4c();
    }
    pcVar1 = ((String *)(param_1 + 2))->str;
    puVar4 = (undefined *)param_1[3];
    SVar7 = *(String *)(param_1 + 2);
    pcVar2 = ((String *)(param_1 + 4))->str;
    puVar5 = (undefined *)param_1[5];
    SVar8 = *(String *)(param_1 + 4);
    lVar15 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar15 + 0x28));
    Swift::String::hash((Hasher)auStack_a8,SVar7);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    param_2 = Swift::Hasher::_finalize(into);
    uVar11 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar11 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar15 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      lVar13 = *(long *)(lVar15 + 0x30);
      do {
        lVar12 = lVar13 + param_2 * 0x30;
        _Var3.unknown = *(undefined **)(lVar12 + 0x20);
        _Var6.unknown = *(undefined **)(lVar12 + 0x28);
        if (((*(undefined **)(lVar12 + 0x10) == pcVar1 && *(undefined **)(lVar12 + 0x18) == puVar4)
            || (bVar10 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)*(undefined **)(lVar12 + 0x10),
                                    (_StringGuts)*(undefined **)(lVar12 + 0x18),
                                    (_StringComparisonResult)(__int8)pcVar1), bVar10)) &&
           ((_Var3.unknown == pcVar2 && _Var6.unknown == puVar5 ||
            (bVar10 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var6,(_StringComparisonResult)(__int8)pcVar2), bVar10)))) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006e69d0);
          (*pcVar9)();
        }
        param_2 = param_2 + 1 & ~uVar11;
      } while ((*(ulong *)(lVar15 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar13 = *unaff_x20;
  lVar15 = lVar13 + (param_2 >> 6) * 8;
  *(ulong *)(lVar15 + 0x38) = *(ulong *)(lVar15 + 0x38) | 1L << (param_2 & 0x3f);
  puVar14 = (undefined8 *)(*(long *)(lVar13 + 0x30) + param_2 * 0x30);
  uVar16 = *param_1;
  uVar18 = param_1[3];
  uVar17 = param_1[2];
  puVar14[1] = param_1[1];
  *puVar14 = uVar16;
  puVar14[3] = uVar18;
  puVar14[2] = uVar17;
  uVar16 = param_1[4];
  puVar14[5] = param_1[5];
  puVar14[4] = uVar16;
  if (!SCARRY8(*(long *)(lVar13 + 0x10),1)) {
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1006e6a48);
  (*pcVar9)();
}



/* Address: 0x1006e6a48 | FUN_1006e6a48 */

void FUN_1006e6a48(undefined *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  Hasher HVar12;
  long lVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd28;
  FUN_1000f7830(&DAT_100fddd28,&DAT_100c726a8);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006e6c20:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e6c54);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_1006e6c20;
        uVar11 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar7;
    }
    uVar1 = *(uint *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 4);
    HVar12.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine(uVar1,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar12);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e6c58);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(uint *)(*(long *)(p_Var4 + 0x30) + uVar6 * 4) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x1006e6c58 | FUN_1006e6c58 */

void FUN_1006e6c58(long param_1)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd08;
  FUN_1000f7830(&DAT_100fddd08,&DAT_100c72698);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1006e6e88:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006e6eb0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          _swift_release(original);
          goto LAB_1006e6e88;
        }
        uVar15 = *(ulong *)(original + 0x38 + lVar16 * 8);
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
      lVar16 = lVar11;
    }
    puVar1 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x20);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(uVar5);
    into.unknown = auStack_a8;
    Swift::Hashable::hash(into);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006e6eb4);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
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
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar5;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1006e6eb4 | FUN_1006e6eb4 */

void FUN_1006e6eb4(long param_1)

{
  __int64 capacity;
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  bool bVar9;
  code *pcVar10;
  _SetStorage *this;
  __RawSetStorage *p_Var11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  __RawSetStorage *original;
  ulong local_c8;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd18;
  FUN_1000f7830(&DAT_100fddd18,&DAT_100c726a0);
  p_Var11 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006e7100:
    _swift_release(original);
    *unaff_x20 = (long)p_Var11;
    return;
  }
  uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_c8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_c8 = ~(-1L << (uVar17 & 0x3f));
  }
  local_c8 = local_c8 & *(ulong *)(original + 0x38);
  lVar14 = 0;
  do {
    if (local_c8 == 0) {
      do {
        lVar19 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006e7134);
          (*pcVar10)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar19) goto LAB_1006e7100;
        local_c8 = *(ulong *)(original + 0x38 + lVar19 * 8);
        lVar14 = lVar14 + 1;
      } while (local_c8 == 0);
      uVar13 = (local_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      local_c8 = local_c8 - 1 & local_c8;
    }
    else {
      uVar13 = (local_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      local_c8 = local_c8 - 1 & local_c8;
      lVar19 = lVar14;
    }
    puVar15 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar13) | lVar19 << 6) * 0x30);
    uVar1 = *puVar15;
    uVar4 = puVar15[1];
    pcVar2 = ((String *)(puVar15 + 2))->str;
    uVar5 = puVar15[3];
    SVar7 = *(String *)(puVar15 + 2);
    pcVar3 = ((String *)(puVar15 + 4))->str;
    uVar6 = puVar15[5];
    SVar8 = *(String *)(puVar15 + 4);
    Swift::Hasher::init(*(__int64 *)(p_Var11 + 0x28));
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    Swift::String::hash((Hasher)auStack_a8,SVar7);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar18 = -1L << ((ulong)(byte)p_Var11[0x20] & 0x3f);
    uVar12 = uVar12 & (uVar18 ^ 0xffffffffffffffff);
    uVar16 = uVar12 >> 6;
    uVar13 = -1L << (uVar12 & 0x3f) & (*(ulong *)(p_Var11 + uVar16 * 8 + 0x38) ^ 0xffffffffffffffff)
    ;
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar18 >> 6;
      do {
        uVar12 = uVar16 + 1;
        if ((uVar12 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006e7138);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar12 != uVar13) {
          uVar16 = uVar12;
        }
        bVar9 = (bool)(uVar12 == uVar13 | bVar9);
      } while (*(ulong *)(p_Var11 + uVar16 * 8 + 0x38) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var11 + uVar16 * 8 + 0x38);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var11 + uVar16 + 0x38) =
         1L << (uVar13 & 0x3f) | *(ulong *)(p_Var11 + uVar16 + 0x38);
    puVar15 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + uVar13 * 0x30);
    *puVar15 = uVar1;
    puVar15[1] = uVar4;
    puVar15[2] = pcVar2;
    puVar15[3] = uVar5;
    puVar15[4] = pcVar3;
    puVar15[5] = uVar6;
    *(long *)(p_Var11 + 0x10) = *(long *)(p_Var11 + 0x10) + 1;
    lVar14 = lVar19;
  } while( true );
}



/* Address: 0x1006e7138 | FUN_1006e7138 */

void FUN_1006e7138(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100fddd28;
  FUN_1000f7830(&DAT_100fddd28,&DAT_100c726a8);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006e7278);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1006e7258;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined4 *)(*(long *)(p_Var3 + 0x30) + uVar8 * 4) =
           *(undefined4 *)(*(long *)(original + 0x30) + uVar8 * 4);
    } while( true );
  }
LAB_1006e7258:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1006e7278 | FUN_1006e7278 */

void FUN_1006e7278(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  _SetStorage *this;
  __RawSetStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar12;
  undefined8 uVar13;
  
  this = (_SetStorage *)&DAT_100fddd08;
  FUN_1000f7830(&DAT_100fddd08,&DAT_100c72698);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x38) {
      _memmove(p_Var7 + 0x38,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x38);
    if (uVar8 == 0) goto LAB_1006e7354;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        lVar11 = (LZCOUNT(uVar10) | lVar12 << 6) * 0x20;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar3 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
        uVar13 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar13;
        puVar3[2] = uVar4;
        puVar3[3] = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1006e7354:
        do {
          lVar11 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1006e73dc);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_1006e73b4;
          uVar8 = *(ulong *)(p_Var1 + lVar11 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar11;
      }
    } while( true );
  }
LAB_1006e73b4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x1006e73dc | FUN_1006e73dc */

void FUN_1006e73dc(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  _SetStorage *this;
  __RawSetStorage *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  
  this = (_SetStorage *)&DAT_100fddd18;
  FUN_1000f7830(&DAT_100fddd18,&DAT_100c726a0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var10 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar11 = (1L << ((ulong)(byte)p_Var10[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var10 != original || p_Var1 + uVar11 * 8 <= p_Var10 + 0x38) {
      _memmove(p_Var10 + 0x38,p_Var1,uVar11 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var10 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(original + 0x38);
    if (uVar11 == 0) goto LAB_1006e74bc;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        lVar14 = (LZCOUNT(uVar13) | lVar15 << 6) * 0x30;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar6 = puVar2[1];
        uVar4 = puVar2[2];
        uVar7 = puVar2[3];
        uVar5 = puVar2[4];
        uVar8 = puVar2[5];
        puVar3 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + lVar14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar4;
        puVar3[3] = uVar7;
        puVar3[4] = uVar5;
        puVar3[5] = uVar8;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        if (uVar11 != 0) break;
LAB_1006e74bc:
        do {
          lVar14 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1006e7564);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_1006e7538;
          uVar11 = *(ulong *)(p_Var1 + lVar14 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar15 = lVar14;
      }
    } while( true );
  }
LAB_1006e7538:
  _swift_release(original);
  *unaff_x20 = (long)p_Var10;
  return;
}



/* Address: 0x1006e7564 | FUN_1006e7564 */

void FUN_1006e7564(undefined *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var12;
  Hasher HVar13;
  long lVar14;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd28;
  FUN_1000f7830(&DAT_100fddd28,&DAT_100c726a8);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006e7784:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var12 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e77b4);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1006e7784;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    uVar1 = *(uint *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 4);
    HVar13.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine(uVar1,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar13);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e77b8);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(uint *)(*(long *)(p_Var4 + 0x30) + uVar6 * 4) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x1006e77b8 | FUN_1006e77b8 */

void FUN_1006e77b8(long param_1)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd08;
  FUN_1000f7830(&DAT_100fddd08,&DAT_100c72698);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006e7a18:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006e7a48);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1006e7a18;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    puVar1 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x20);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::Hashable::hash(into);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006e7a4c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
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
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar5;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1006e7a4c | FUN_1006e7a4c */

void FUN_1006e7a4c(long param_1)

{
  __int64 capacity;
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  bool bVar9;
  code *pcVar10;
  _SetStorage *this;
  __RawSetStorage *p_Var11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  ulong uVar19;
  __RawSetStorage *p_Var20;
  __RawSetStorage *original;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fddd18;
  FUN_1000f7830(&DAT_100fddd18,&DAT_100c726a0);
  p_Var11 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006e7cbc:
    _swift_release(original);
    *unaff_x20 = (long)p_Var11;
    return;
  }
  p_Var20 = original + 0x38;
  uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var20;
  lVar14 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar21 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006e7cec);
          (*pcVar10)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar21) {
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var20 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1006e7cbc;
        }
        uVar19 = *(ulong *)(p_Var20 + lVar21 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar19 == 0);
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar21 = lVar14;
    }
    puVar15 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar13) | lVar21 << 6) * 0x30);
    uVar1 = *puVar15;
    uVar4 = puVar15[1];
    pcVar2 = ((String *)(puVar15 + 2))->str;
    uVar5 = puVar15[3];
    SVar7 = *(String *)(puVar15 + 2);
    pcVar3 = ((String *)(puVar15 + 4))->str;
    uVar6 = puVar15[5];
    SVar8 = *(String *)(puVar15 + 4);
    Swift::Hasher::init(*(__int64 *)(p_Var11 + 0x28));
    Swift::String::hash((Hasher)auStack_a8,SVar7);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar18 = -1L << ((ulong)(byte)p_Var11[0x20] & 0x3f);
    uVar12 = uVar12 & (uVar18 ^ 0xffffffffffffffff);
    uVar16 = uVar12 >> 6;
    uVar13 = -1L << (uVar12 & 0x3f) & (*(ulong *)(p_Var11 + uVar16 * 8 + 0x38) ^ 0xffffffffffffffff)
    ;
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar18 >> 6;
      do {
        uVar12 = uVar16 + 1;
        if ((uVar12 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006e7cf0);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar12 != uVar13) {
          uVar16 = uVar12;
        }
        bVar9 = (bool)(uVar12 == uVar13 | bVar9);
      } while (*(ulong *)(p_Var11 + uVar16 * 8 + 0x38) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var11 + uVar16 * 8 + 0x38);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var11 + uVar16 + 0x38) =
         1L << (uVar13 & 0x3f) | *(ulong *)(p_Var11 + uVar16 + 0x38);
    puVar15 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + uVar13 * 0x30);
    *puVar15 = uVar1;
    puVar15[1] = uVar4;
    puVar15[2] = pcVar2;
    puVar15[3] = uVar5;
    puVar15[4] = pcVar3;
    puVar15[5] = uVar6;
    *(long *)(p_Var11 + 0x10) = *(long *)(p_Var11 + 0x10) + 1;
    lVar14 = lVar21;
  } while( true );
}



/* Address: 0x1006e7cf0 | FUN_1006e7cf0 */

Set<undefined> FUN_1006e7cf0(long param_1)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  FUN_1006e84a0();
  local_98 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_88 = puVar1[1];
      local_90 = *puVar1;
      uStack_78 = puVar1[3];
      uStack_80 = puVar1[2];
      uStack_68 = puVar1[5];
      local_70 = puVar1[4];
      local_60 = uStack_80;
      uStack_58 = uStack_78;
      uStack_50 = local_90;
      uStack_48 = uStack_88;
      local_40 = local_70;
      uStack_38 = uStack_68;
      FUN_10000ca28(&uStack_50,auStack_c8);
      FUN_10000ca28(&local_60,auStack_c8);
      FUN_10000ca28(&local_40,auStack_c8);
      FUN_1006e6390(auStack_c8,&local_90);
      _swift_bridgeObjectRelease(local_c0);
      _swift_bridgeObjectRelease(local_b0);
      _swift_bridgeObjectRelease(local_a0);
      puVar1 = puVar1 + 6;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_98;
}



/* Address: 0x1006e7db8 | FUN_1006e7db8 */

Set<undefined> FUN_1006e7db8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long minimumCapacity;
  undefined8 *puVar5;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined *local_58;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_58 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar5[-1];
      uVar3 = *puVar5;
      uVar2 = puVar5[-3];
      uVar4 = puVar5[-2];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006e61e4(auStack_78,uVar2,uVar4,uVar1,uVar3);
      _swift_bridgeObjectRelease(local_60);
      puVar5 = puVar5 + 4;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_58;
}



/* Address: 0x1006e7e60 | FUN_1006e7e60 */

code * FUN_1006e7e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = FUN_1006e4148;
  FUN_100193cd8(FUN_1006e4148,0,param_5,&DAT_100ef9cc0,PTR___type_metadata_for_Swift_Never_100eadc38
                ,param_7,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  pcVar2 = pcVar1;
  FUN_1006e7cf0();
  _swift_bridgeObjectRelease(pcVar1);
  uVar3 = param_2;
  FUN_1006e3b8c(param_2);
  _swift_bridgeObjectRelease(param_2);
  FUN_1006e7db8(uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return pcVar2;
}



/* Address: 0x1006e7f1c | FUN_1006e7f1c */

void FUN_1006e7f1c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(**(undefined8 **)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006e7f28 | FUN_1006e7f28 */

void FUN_1006e7f28(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006e4a54(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006e7f3c | FUN_1006e7f3c */

void FUN_1006e7f3c(undefined8 param_1)

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
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar11 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_1005c804c;
  FUN_1006e56fc(plVar11,param_1,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar1,uVar6);
  return;
}



/* Address: 0x1006e7ff0 | FUN_1006e7ff0 */

void FUN_1006e7ff0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006e5cbc(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006e7ffc | FUN_1006e7ffc */

void FUN_1006e7ffc(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72510;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006e8028 | FUN_1006e8028 */

undefined8 * FUN_1006e8028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006e809c | FUN_1006e809c */

undefined8 * FUN_1006e809c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006e80e8 | FUN_1006e80e8 */

void FUN_1006e80e8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e80f4 | FUN_1006e80f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006e80f4(void)

{
  return ZEXT816(0x100fddc38);
}



/* Address: 0x1006e8114 | FUN_1006e8114 */

undefined1  [16] FUN_1006e8114(void)

{
  return ZEXT816(0x100ef9cc0);
}



/* Address: 0x1006e8124 | FUN_1006e8124 */

undefined1  [16] FUN_1006e8124(void)

{
  return ZEXT816(0x100ef9ce8);
}



/* Address: 0x1006e8134 | thunk_FUN_1006e8138 */

void thunk_FUN_1006e8138(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fddcb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c725d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c725d8,&DAT_100ef9cc0);
  DAT_100fddcb8 = pTVar1;
  return;
}



/* Address: 0x1006e8138 | FUN_1006e8138 */

void FUN_1006e8138(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fddcb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c725d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c725d8,&DAT_100ef9cc0);
  DAT_100fddcb8 = pTVar1;
  return;
}



/* Address: 0x1006e8178 | FUN_1006e8178 */

void FUN_1006e8178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1006e3fec(plVar5,param_1,param_2,param_3,uVar2,uVar4,uVar1,uVar3);
  return;
}



/* Address: 0x1006e821c | FUN_1006e821c */

void FUN_1006e821c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006e59f8(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006e8230 | FUN_1006e8230 */

undefined8 FUN_1006e8230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fddcd8;
  FUN_1000f7830(&DAT_100fddcd8,&DAT_100c72650);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006e8280 | FUN_1006e8280 */

void FUN_1006e8280(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006e5ba0();
  return;
}



/* Address: 0x1006e82d0 | FUN_1006e82d0 */

undefined8 FUN_1006e82d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fddcd8;
  FUN_1000f7830(&DAT_100fddcd8,&DAT_100c72650);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006e8320 | FUN_1006e8320 */

void FUN_1006e8320(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined **local_18;
  
  if (DAT_100fddce0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdc3a8;
  FUN_1000f8b08(&DAT_100fdc3a8,&DAT_100c71a80);
  local_18 = &PTR_PTR_100f2a550;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8fd88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fd88,puVar1,&local_18);
  DAT_100fddce0 = pTVar2;
  return;
}



/* Address: 0x1006e8388 | FUN_1006e8388 */

void FUN_1006e8388(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006e83bc | FUN_1006e83bc */

void FUN_1006e83bc(void)

{
  FUN_1006e53dc();
  return;
}



/* Address: 0x1006e83f0 | FUN_1006e83f0 */

void FUN_1006e83f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


