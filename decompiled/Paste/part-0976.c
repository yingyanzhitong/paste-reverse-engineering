/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a70924 | FUN_100a70924 */

void FUN_100a70924(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a70990;
  }
  else {
    pcVar2 = FUN_100a70ac0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a70990 | FUN_100a70990 */

void FUN_100a70990(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    plVar1 = (long *)0x3f0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a70a2c;
    FUN_100a70bd0(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),8,0,
                  *(undefined8 *)(unaff_x22 + 0x20),*(undefined1 *)(unaff_x22 + 0x51));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a70a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a70a2c | FUN_100a70a2c */

void FUN_100a70a2c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a70a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x48) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1008bb640;
  FUN_100a6e548(*(undefined8 *)(lVar2 + 0x10),8,0,1,*(undefined8 *)(lVar2 + 0x20),
                *(undefined1 *)(lVar2 + 0x51));
  return;
}



/* Address: 0x100a70ac0 | FUN_100a70ac0 */

void FUN_100a70ac0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a70ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a70acc | FUN_100a70acc */

void FUN_100a70acc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_c8;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80 [72];
  char local_38;
  undefined1 *puVar2;
  
  FUN_100a7b8a4(local_80,param_4,param_5);
  if (local_38 == '\x01') {
    puVar4 = (undefined8 *)((ulong)local_80 | 1);
    local_c8 = local_80[0];
    uStack_bf = puVar4[1];
    local_c7 = *puVar4;
    uStack_af = puVar4[3];
    local_b7 = puVar4[2];
    uStack_9f = puVar4[5];
    local_a7 = puVar4[4];
    local_97 = puVar4[6];
    uStack_8f = (undefined7)puVar4[7];
    uStack_88 = (undefined1)*(undefined8 *)((long)puVar4 + 0x3f);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)((long)puVar4 + 0x3f) >> 8);
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined1 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      puVar3 = &local_c8;
      _swift_willThrowTypedImpl(puVar3,&DAT_100f2de38,puVar2);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    *puVar3 = local_80[0];
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    uVar5 = puVar4[2];
    *(undefined8 *)(puVar3 + 0x19) = puVar4[3];
    *(undefined8 *)(puVar3 + 0x11) = uVar5;
    uVar5 = puVar4[4];
    uVar9 = puVar4[7];
    uVar8 = puVar4[6];
    *(undefined8 *)(puVar3 + 0x29) = puVar4[5];
    *(undefined8 *)(puVar3 + 0x21) = uVar5;
    *(undefined8 *)(puVar3 + 0x39) = uVar9;
    *(undefined8 *)(puVar3 + 0x31) = uVar8;
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)((long)puVar4 + 0x3f);
    *(undefined8 *)(puVar3 + 9) = uVar7;
    *(undefined8 *)(puVar3 + 1) = uVar6;
  }
  else {
    *param_1 = local_80[0];
  }
  return;
}



/* Address: 0x100a70bd0 | FUN_100a70bd0 */

void FUN_100a70bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3e9) = param_6;
  *(undefined8 *)(unaff_x22 + 0x388) = param_5;
  *(undefined1 *)(unaff_x22 + 1000) = param_4;
  *(undefined8 *)(unaff_x22 + 0x380) = param_3;
  *(undefined8 *)(unaff_x22 + 0x378) = param_2;
  *(undefined8 *)(unaff_x22 + 0x370) = param_1;
  _swift_task_switch(FUN_100a70bfc,0,0);
  return;
}



/* Address: 0x100a70bfc | FUN_100a70bfc */

void FUN_100a70bfc(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long *plVar6;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3e9);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
  puVar2 = &DAT_100f2db08;
  _swift_allocObject(&DAT_100f2db08,0x29,7);
  *(undefined **)(unaff_x22 + 0x390) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  puVar2[0x18] = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  puVar2[0x28] = 1;
  plVar6 = (long *)0xa0;
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x398) = plVar6;
  puVar3 = &DAT_100ff6dc0;
  FUN_1000f7830(&DAT_100ff6dc0,&DAT_100c91ce8);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a70cd4;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c36c,puVar2,puVar3);
  return;
}



/* Address: 0x100a70cd4 | FUN_100a70cd4 */

void FUN_100a70cd4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x398));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x390));
    pcVar1 = FUN_100a70d48;
  }
  else {
    _swift_release(*(undefined8 *)(lVar2 + 0x390));
    pcVar1 = FUN_100a712e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a70d48 | FUN_100a70d48 */

void FUN_100a70d48(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  char *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  
  iVar4 = (int)unaff_x22 + 0xe8;
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
  cVar1 = *(char *)(unaff_x22 + 0x179);
  FUN_1006c09cc();
  if (iVar4 == 1) {
    puVar11 = (undefined8 *)(unaff_x22 + 0x208);
    puVar5 = (undefined8 *)(unaff_x22 + 0x1c0);
    pcVar14 = *(char **)(unaff_x22 + 0x370);
    Swift::_StringGuts::grow(0x27,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1005b32e4();
    SVar20.bridgeObject = param_2.unknown;
    SVar20.str = pcVar14;
    SVar26.bridgeObject = param_4;
    SVar26.str = param_3;
    Swift::String::append(SVar20,SVar26);
    _swift_bridgeObjectRelease(param_2.unknown);
    SVar21.bridgeObject = (void *)0x8000000100db89f0;
    SVar21.str = (char *)0xd000000000000015;
    SVar27.bridgeObject = param_4;
    SVar27.str = param_3;
    Swift::String::append(SVar21,SVar27);
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
    lVar10 = unaff_x22 + 0x250;
LAB_100a70eb4:
    FUN_100a50050(puVar11,lVar10);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar5,0,0);
    uVar12 = *puVar11;
    puVar5[1] = puVar11[1];
    *puVar5 = uVar12;
    uVar17 = puVar11[5];
    uVar16 = puVar11[4];
    uVar13 = puVar11[7];
    uVar12 = puVar11[6];
    uVar19 = puVar11[3];
    uVar18 = puVar11[2];
    puVar5[8] = puVar11[8];
    puVar5[5] = uVar17;
    puVar5[4] = uVar16;
    puVar5[7] = uVar13;
    puVar5[6] = uVar12;
    puVar5[3] = uVar19;
    puVar5[2] = uVar18;
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a70f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar6 = *(undefined **)(unaff_x22 + 0x370);
  _swift_bridgeObjectRetain();
  FUN_1005ad054();
  puVar7 = puVar6;
  _Var8.unknown = param_2.unknown;
  FUN_1005ac824();
  _swift_bridgeObjectRelease(puVar6);
  if (param_2.unknown == puVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a712e8);
    (*pcVar3)();
  }
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(unaff_x22 + 0x3e9);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x388);
    puVar7 = &DAT_100f2db58;
    _swift_allocObject(&DAT_100f2db58,0x31,7);
    *(undefined **)(unaff_x22 + 0x3a8) = puVar7;
    *(undefined8 *)(puVar7 + 0x10) = uVar12;
    puVar7[0x18] = uVar2;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(puVar7 + 0x20) = uVar16;
    puVar7[0x30] = 0;
    plVar15 = (long *)0xa0;
    _swift_retain(uVar12);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar13);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3b0) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_100a712f4;
  }
  else {
    if (cVar1 == '\x04') {
      if (*(char *)(unaff_x22 + 1000) == '\x01') {
        plVar15 = (long *)0x290;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3d8) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_100a713e4;
        FUN_100a75c78(*(undefined8 *)(unaff_x22 + 0x370),*(undefined8 *)(unaff_x22 + 0x378),
                      &UNK_100c92530,0,&UNK_100c91f70,0,*(undefined8 *)(unaff_x22 + 0x388),
                      *(undefined1 *)(unaff_x22 + 0x3e9));
        return;
      }
      lVar10 = *(long *)(unaff_x22 + 0x380);
      plVar15 = (long *)0x420;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3e0) = plVar15;
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_100a71428;
      FUN_100a97920(*(undefined8 *)(unaff_x22 + 0x370),*(undefined8 *)(unaff_x22 + 0x378),lVar10 / 2
                    ,&UNK_100c92530,0,&UNK_100c91f70,0,*(undefined8 *)(unaff_x22 + 0x388),
                    *(undefined1 *)(unaff_x22 + 0x3e9));
      return;
    }
    if (cVar1 != '\x05') {
      puVar5 = (undefined8 *)(unaff_x22 + 0x298);
      puVar11 = (undefined8 *)(unaff_x22 + 0x2e0);
      pcVar14 = *(char **)(unaff_x22 + 0x370);
      Swift::_StringGuts::grow(0x5f,_Var8);
      pvVar9 = (void *)0xec00000027207970;
      SVar22.bridgeObject = (void *)0xec00000027207970;
      SVar22.str = (char *)0x6f632074276e6143;
      SVar28.bridgeObject = param_4;
      SVar28.str = param_3;
      Swift::String::append(SVar22,SVar28);
      FUN_1005b32e4();
      SVar23.bridgeObject = pvVar9;
      SVar23.str = pcVar14;
      SVar29.bridgeObject = param_4;
      SVar29.str = param_3;
      Swift::String::append(SVar23,SVar29);
      _swift_bridgeObjectRelease(pvVar9);
      SVar24.bridgeObject = (void *)0xeb00000000272065;
      SVar24.str = (char *)0x70797420666f2027;
      SVar30.bridgeObject = param_4;
      SVar30.str = param_3;
      Swift::String::append(SVar24,SVar30);
      FUN_100a6c3b8(cVar1);
      SVar25.bridgeObject = (void *)0x8000000100db8a90;
      SVar25.str = (char *)0xd000000000000044;
      SVar31.bridgeObject = param_4;
      SVar31.str = param_3;
      Swift::String::append(SVar25,SVar31);
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
      lVar10 = unaff_x22 + 0x328;
      goto LAB_100a70eb4;
    }
    uVar2 = *(undefined1 *)(unaff_x22 + 0x3e9);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x388);
    puVar7 = &DAT_100f2db30;
    _swift_allocObject(&DAT_100f2db30,0x31,7);
    *(undefined **)(unaff_x22 + 0x3c0) = puVar7;
    *(undefined8 *)(puVar7 + 0x10) = uVar12;
    puVar7[0x18] = uVar2;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(puVar7 + 0x20) = uVar16;
    puVar7[0x30] = 0;
    plVar15 = (long *)0xa0;
    _swift_retain(uVar12);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar13);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3c8) = plVar15;
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_100a7136c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a712e8 | FUN_100a712e8 */

void FUN_100a712e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a712f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a712f4 | FUN_100a712f4 */

void FUN_100a712f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3b0));
  _swift_release(*(undefined8 *)(lVar2 + 0x3a8));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_100a71360;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a71360 | FUN_100a71360 */

void FUN_100a71360(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a71368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a7136c | FUN_100a7136c */

void FUN_100a7136c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3d0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3c8));
  _swift_release(*(undefined8 *)(lVar2 + 0x3c0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_100a713d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a713d8 | FUN_100a713d8 */

void FUN_100a713d8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a713e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a713e4 | FUN_100a713e4 */

void FUN_100a713e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x3d8));
                    /* WARNING: Could not recover jumptable at 0x000100a71424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a71428 | FUN_100a71428 */

void FUN_100a71428(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x3e0));
                    /* WARNING: Could not recover jumptable at 0x000100a71468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a7146c | FUN_100a7146c */

void FUN_100a7146c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(char *)(unaff_x22 + 0x210) = (char)param_4;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_1;
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a714f0;
  FUN_100a6e548(param_1,8,0,1,param_3,param_4);
  return;
}



/* Address: 0x100a714f0 | FUN_100a714f0 */

void FUN_100a714f0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a71628,0,0);
    return;
  }
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x1f0) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100a71588;
  FUN_100a70828(*(undefined8 *)(lVar2 + 0x1d0),*(undefined8 *)(lVar2 + 0x1c8),
                *(undefined8 *)(lVar2 + 0x1d8),*(undefined1 *)(lVar2 + 0x210));
  return;
}



/* Address: 0x100a71588 | FUN_100a71588 */

void FUN_100a71588(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a71b6c,0,0);
    return;
  }
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x200) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100a71894;
  FUN_100a6e548(*(undefined8 *)(lVar2 + 0x1d0),8,0,1,*(undefined8 *)(lVar2 + 0x1d8),
                *(undefined1 *)(lVar2 + 0x210));
  return;
}



/* Address: 0x100a71628 | FUN_100a71628 */

void FUN_100a71628(void)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 *puVar9;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar10;
  _swift_errorRetain(uVar10);
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100f2de38;
  iVar2 = (int)unaff_x22 + 0x10;
  _Var8.unknown = (undefined *)(unaff_x22 + 0x1c0);
  _swift_dynamicCast();
  if (iVar2 != 0) {
    pcVar4 = *(char **)(unaff_x22 + 0x1c8);
    pcVar5 = *(char **)(unaff_x22 + 0x1d0);
    _swift_errorRelease(uVar10);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x10);
    Swift::_StringGuts::grow(0x1d,_Var8);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1005b32e4();
    SVar17.bridgeObject = _Var8.unknown;
    SVar17.str = pcVar4;
    SVar21.bridgeObject = puVar7;
    SVar21.str = pcVar3;
    Swift::String::append(SVar17,SVar21);
    _swift_bridgeObjectRelease(_Var8.unknown);
    SVar18.bridgeObject = &DAT_e800000000000000;
    SVar18.str = (char *)0x2720687469772027;
    puVar9 = &DAT_e800000000000000;
    SVar22.bridgeObject = puVar7;
    SVar22.str = pcVar3;
    Swift::String::append(SVar18,SVar22);
    FUN_1005b32e4();
    SVar19.bridgeObject = puVar9;
    SVar19.str = pcVar5;
    SVar23.bridgeObject = puVar7;
    SVar23.str = pcVar3;
    Swift::String::append(SVar19,SVar23);
    _swift_bridgeObjectRelease(puVar9);
    SVar20.bridgeObject = &SUB_e200000000000000;
    SVar20.str = (char *)0x2e27;
    puVar6 = (undefined8 *)0x2e27;
    SVar24.bridgeObject = puVar7;
    SVar24.str = pcVar3;
    Swift::String::append(SVar20,SVar24);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xe8);
    FUN_100a500c0();
    puVar7 = &DAT_100f2de38;
    puVar11 = puVar6;
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0xf0);
    *puVar11 = uVar10;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar11[8] = *(undefined8 *)(unaff_x22 + 0x128);
    puVar11[5] = uVar12;
    puVar11[4] = uVar10;
    puVar11[7] = uVar14;
    puVar11[6] = uVar13;
    puVar11[3] = uVar16;
    puVar11[2] = uVar15;
    puVar11 = (undefined8 *)(unaff_x22 + 0xa0);
    *(undefined1 *)puVar11 = uVar1;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    *(undefined8 *)(unaff_x22 + 0xa8) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0xb8) = puVar7;
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 200) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined1 *)(unaff_x22 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0x70) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x128);
    FUN_100a50050(unaff_x22 + 0xe8,unaff_x22 + 0x130);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    FUN_100a50050(puVar11,unaff_x22 + 0x178);
    FUN_100a5008c((undefined1 *)(unaff_x22 + 0x58));
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *puVar11;
    puVar6[1] = *(undefined8 *)(unaff_x22 + 0xa8);
    *puVar6 = uVar10;
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar6[8] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar6[5] = uVar14;
    puVar6[4] = uVar13;
    puVar6[7] = uVar12;
    puVar6[6] = uVar10;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    _swift_willThrow();
    FUN_100a5008c(unaff_x22 + 0xe8);
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x000100a71890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a71894 | FUN_100a71894 */

void FUN_100a71894(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x208) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x200));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a71900,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a718fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a71900 | FUN_100a71900 */

void FUN_100a71900(void)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 *puVar9;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar10;
  _swift_errorRetain(uVar10);
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100f2de38;
  iVar2 = (int)unaff_x22 + 0x10;
  _Var8.unknown = (undefined *)(unaff_x22 + 0x1c0);
  _swift_dynamicCast();
  if (iVar2 != 0) {
    pcVar4 = *(char **)(unaff_x22 + 0x1c8);
    pcVar5 = *(char **)(unaff_x22 + 0x1d0);
    _swift_errorRelease(uVar10);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x10);
    Swift::_StringGuts::grow(0x1d,_Var8);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1005b32e4();
    SVar17.bridgeObject = _Var8.unknown;
    SVar17.str = pcVar4;
    SVar21.bridgeObject = puVar7;
    SVar21.str = pcVar3;
    Swift::String::append(SVar17,SVar21);
    _swift_bridgeObjectRelease(_Var8.unknown);
    SVar18.bridgeObject = &DAT_e800000000000000;
    SVar18.str = (char *)0x2720687469772027;
    puVar9 = &DAT_e800000000000000;
    SVar22.bridgeObject = puVar7;
    SVar22.str = pcVar3;
    Swift::String::append(SVar18,SVar22);
    FUN_1005b32e4();
    SVar19.bridgeObject = puVar9;
    SVar19.str = pcVar5;
    SVar23.bridgeObject = puVar7;
    SVar23.str = pcVar3;
    Swift::String::append(SVar19,SVar23);
    _swift_bridgeObjectRelease(puVar9);
    SVar20.bridgeObject = &SUB_e200000000000000;
    SVar20.str = (char *)0x2e27;
    puVar6 = (undefined8 *)0x2e27;
    SVar24.bridgeObject = puVar7;
    SVar24.str = pcVar3;
    Swift::String::append(SVar20,SVar24);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xe8);
    FUN_100a500c0();
    puVar7 = &DAT_100f2de38;
    puVar11 = puVar6;
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0xf0);
    *puVar11 = uVar10;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar11[8] = *(undefined8 *)(unaff_x22 + 0x128);
    puVar11[5] = uVar12;
    puVar11[4] = uVar10;
    puVar11[7] = uVar14;
    puVar11[6] = uVar13;
    puVar11[3] = uVar16;
    puVar11[2] = uVar15;
    puVar11 = (undefined8 *)(unaff_x22 + 0xa0);
    *(undefined1 *)puVar11 = uVar1;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    *(undefined8 *)(unaff_x22 + 0xa8) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0xb8) = puVar7;
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 200) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined1 *)(unaff_x22 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0x70) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x128);
    FUN_100a50050(unaff_x22 + 0xe8,unaff_x22 + 0x130);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    FUN_100a50050(puVar11,unaff_x22 + 0x178);
    FUN_100a5008c((undefined1 *)(unaff_x22 + 0x58));
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *puVar11;
    puVar6[1] = *(undefined8 *)(unaff_x22 + 0xa8);
    *puVar6 = uVar10;
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar6[8] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar6[5] = uVar14;
    puVar6[4] = uVar13;
    puVar6[7] = uVar12;
    puVar6[6] = uVar10;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    _swift_willThrow();
    FUN_100a5008c(unaff_x22 + 0xe8);
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x000100a71b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a71b6c | FUN_100a71b6c */

void FUN_100a71b6c(void)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 *puVar9;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar10;
  _swift_errorRetain(uVar10);
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100f2de38;
  iVar2 = (int)unaff_x22 + 0x10;
  _Var8.unknown = (undefined *)(unaff_x22 + 0x1c0);
  _swift_dynamicCast();
  if (iVar2 != 0) {
    pcVar4 = *(char **)(unaff_x22 + 0x1c8);
    pcVar5 = *(char **)(unaff_x22 + 0x1d0);
    _swift_errorRelease(uVar10);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x10);
    Swift::_StringGuts::grow(0x1d,_Var8);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1005b32e4();
    SVar17.bridgeObject = _Var8.unknown;
    SVar17.str = pcVar4;
    SVar21.bridgeObject = puVar7;
    SVar21.str = pcVar3;
    Swift::String::append(SVar17,SVar21);
    _swift_bridgeObjectRelease(_Var8.unknown);
    SVar18.bridgeObject = &DAT_e800000000000000;
    SVar18.str = (char *)0x2720687469772027;
    puVar9 = &DAT_e800000000000000;
    SVar22.bridgeObject = puVar7;
    SVar22.str = pcVar3;
    Swift::String::append(SVar18,SVar22);
    FUN_1005b32e4();
    SVar19.bridgeObject = puVar9;
    SVar19.str = pcVar5;
    SVar23.bridgeObject = puVar7;
    SVar23.str = pcVar3;
    Swift::String::append(SVar19,SVar23);
    _swift_bridgeObjectRelease(puVar9);
    SVar20.bridgeObject = &SUB_e200000000000000;
    SVar20.str = (char *)0x2e27;
    puVar6 = (undefined8 *)0x2e27;
    SVar24.bridgeObject = puVar7;
    SVar24.str = pcVar3;
    Swift::String::append(SVar20,SVar24);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xe8);
    FUN_100a500c0();
    puVar7 = &DAT_100f2de38;
    puVar11 = puVar6;
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0xf0);
    *puVar11 = uVar10;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar11[8] = *(undefined8 *)(unaff_x22 + 0x128);
    puVar11[5] = uVar12;
    puVar11[4] = uVar10;
    puVar11[7] = uVar14;
    puVar11[6] = uVar13;
    puVar11[3] = uVar16;
    puVar11[2] = uVar15;
    puVar11 = (undefined8 *)(unaff_x22 + 0xa0);
    *(undefined1 *)puVar11 = uVar1;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    *(undefined8 *)(unaff_x22 + 0xa8) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0xb8) = puVar7;
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 200) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined1 *)(unaff_x22 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x65722074276e6143;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xef27206563616c70;
    *(undefined **)(unaff_x22 + 0x70) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x128);
    FUN_100a50050(unaff_x22 + 0xe8,unaff_x22 + 0x130);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar12);
    FUN_100a50050(puVar11,unaff_x22 + 0x178);
    FUN_100a5008c((undefined1 *)(unaff_x22 + 0x58));
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    uVar10 = *puVar11;
    puVar6[1] = *(undefined8 *)(unaff_x22 + 0xa8);
    *puVar6 = uVar10;
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar6[8] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar6[5] = uVar14;
    puVar6[4] = uVar13;
    puVar6[7] = uVar12;
    puVar6[6] = uVar10;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    _swift_willThrow();
    FUN_100a5008c(unaff_x22 + 0xe8);
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x000100a71dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a71dd8 | FUN_100a71dd8 */

void FUN_100a71dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a71df8,0,0);
  return;
}



/* Address: 0x100a71df8 | FUN_100a71df8 */

void FUN_100a71df8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = &DAT_100f2d670;
  _swift_allocObject(&DAT_100f2d670,0x30,7);
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
  plVar5[1] = (long)FUN_100a71ed0;
  FUN_100912dec();
  return;
}



/* Address: 0x100a71ed0 | FUN_100a71ed0 */

void FUN_100a71ed0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100928d1c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a71f3c | FUN_100a71f3c */

void FUN_100a71f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7bd64(&local_70,param_3,param_4);
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



/* Address: 0x100a72008 | FUN_100a72008 */

void FUN_100a72008(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  _swift_task_switch(FUN_100a72024,0,0);
  return;
}



/* Address: 0x100a72024 | FUN_100a72024 */

void FUN_100a72024(void)

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
  puVar4 = &DAT_100f2d698;
  _swift_allocObject(&DAT_100f2d698,0x28,7);
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
  FUN_100912dec(plVar5,unaff_x22 + 0x10,FUN_100a7b080,puVar4,&DAT_100ee4790);
  return;
}



/* Address: 0x100a720e0 | FUN_100a720e0 */

void FUN_100a720e0(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *puVar2;
  
  puVar3 = &local_f0;
  FUN_100aa813c();
  if ((param_3 & 0xff) == 1) {
    local_58 = 0xd00000000000001f;
    uStack_50 = 0x8000000100db8ce0;
    local_48 = 0xd00000000000001f;
    uStack_40 = 0x8000000100db8a70;
    local_38 = 0x7a8;
    FUN_100a8067c(&local_a0);
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    local_b0 = local_60;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_f0,&DAT_100f2de38,puVar2);
      puVar2 = puVar3;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar2,0,0);
    puVar2[5] = uStack_78;
    puVar2[4] = local_80;
    puVar2[7] = uStack_68;
    puVar2[6] = uStack_70;
    puVar2[8] = local_60;
    puVar2[1] = uStack_98;
    *puVar2 = local_a0;
    puVar2[3] = uStack_88;
    puVar2[2] = uStack_90;
  }
  else {
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100a72204 | FUN_100a72204 */

void FUN_100a72204(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a72274;
  FUN_100912dec(plVar1,unaff_x22 + 0x10,FUN_100a722d8,0,&DAT_100ee4790);
  return;
}



/* Address: 0x100a72274 | FUN_100a72274 */

void FUN_100a72274(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a6c664;
  }
  else {
    pcVar1 = FUN_1006c19bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a722d8 | FUN_100a722d8 */

void FUN_100a722d8(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *puVar3;
  
  puVar4 = &local_120;
  FUN_100aa7f9c();
  if ((param_3 & 0xff) == 1) {
    puVar3 = param_2;
    FUN_100a57a58();
    puVar2 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
    *puVar3 = 0x647763746567;
    puVar3[1] = &DAT_e600000000000000;
    *(int *)(puVar3 + 2) = (int)param_2;
    local_d0 = 7;
    uStack_c8 = 0xd000000000000024;
    local_c0 = 0x8000000100db8cb0;
    local_b0 = 0xd000000000000017;
    uStack_a8 = 0x8000000100db8c90;
    uStack_a0 = 0xd00000000000001f;
    local_98 = 0x8000000100db8a70;
    local_90 = 0x290;
    local_88[0] = 7;
    local_80 = 0xd000000000000024;
    uStack_78 = 0x8000000100db8cb0;
    uStack_68 = 0xd000000000000017;
    local_60 = 0x8000000100db8c90;
    uStack_58 = 0xd00000000000001f;
    local_50 = 0x8000000100db8a70;
    uStack_48 = 0x290;
    puStack_b8 = puVar2;
    local_70 = puVar2;
    FUN_100a50050(&local_d0,&local_120);
    FUN_100a5008c(local_88);
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = local_98;
    uStack_f0 = uStack_a0;
    local_e0 = local_90;
    local_120 = CONCAT71(uStack_cf,local_d0);
    uStack_118 = uStack_c8;
    puStack_108 = puStack_b8;
    uStack_110 = local_c0;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar3 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_120,&DAT_100f2de38,puVar3);
      puVar3 = puVar4;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    puVar3[1] = uStack_c8;
    *puVar3 = CONCAT71(uStack_cf,local_d0);
    puVar3[8] = local_90;
    puVar3[5] = uStack_a8;
    puVar3[4] = local_b0;
    puVar3[7] = local_98;
    puVar3[6] = uStack_a0;
    puVar3[3] = puStack_b8;
    puVar3[2] = local_c0;
  }
  else {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100a72478 | FUN_100a72478 */

void FUN_100a72478(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a72490,0,0);
  return;
}



/* Address: 0x100a72490 | FUN_100a72490 */

void FUN_100a72490(void)

{
  UnsafePointer<__int8> cString;
  long *plVar1;
  long unaff_x22;
  String SVar2;
  
  cString.unknown = _getenv("HOME");
  if ((cString.unknown != (undefined *)0x0) && (*cString.unknown != '\0')) {
    SVar2 = Swift::String::init(cString);
    thunk_FUN_1005b3cd0(SVar2.str,SVar2.bridgeObject);
                    /* WARNING: Could not recover jumptable at 0x000100a724e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a72538;
  FUN_100912dec(plVar1,unaff_x22 + 0x10,FUN_100a7259c,0,&DAT_100ee4790);
  return;
}



/* Address: 0x100a72538 | FUN_100a72538 */

void FUN_100a72538(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a6c664;
  }
  else {
    pcVar1 = FUN_1002e7908;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a7259c | FUN_100a7259c */

void FUN_100a7259c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *puVar3;
  
  puVar4 = &local_110;
  FUN_100aa82ac();
  if ((param_3 & 0xff) == 1) {
    puVar3 = param_2;
    FUN_100a57a58();
    puVar2 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
    *puVar3 = 0x6469757770746567;
    puVar3[1] = 0xea0000000000725f;
    *(int *)(puVar3 + 2) = (int)param_2;
    local_c0 = 7;
    uStack_b8 = 0xd00000000000002a;
    local_b0 = 0x8000000100db8c60;
    local_a0 = 0x65726944656d6f68;
    uStack_98 = 0xed000079726f7463;
    uStack_90 = 0xd00000000000001f;
    local_88 = 0x8000000100db8a70;
    local_80 = 0x2ab;
    local_78[0] = 7;
    local_70 = 0xd00000000000002a;
    uStack_68 = 0x8000000100db8c60;
    uStack_58 = 0x65726944656d6f68;
    local_50 = 0xed000079726f7463;
    uStack_48 = 0xd00000000000001f;
    local_40 = 0x8000000100db8a70;
    uStack_38 = 0x2ab;
    puStack_a8 = puVar2;
    local_60 = puVar2;
    FUN_100a50050(&local_c0,&local_110);
    FUN_100a5008c(local_78);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = local_88;
    uStack_e0 = uStack_90;
    local_d0 = local_80;
    local_110 = CONCAT71(uStack_bf,local_c0);
    uStack_108 = uStack_b8;
    puStack_f8 = puStack_a8;
    uStack_100 = local_b0;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar3 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_110,&DAT_100f2de38,puVar3);
      puVar3 = puVar4;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    puVar3[1] = uStack_b8;
    *puVar3 = CONCAT71(uStack_bf,local_c0);
    puVar3[8] = local_80;
    puVar3[5] = uStack_98;
    puVar3[4] = local_a0;
    puVar3[7] = local_88;
    puVar3[6] = uStack_90;
    puVar3[3] = puStack_a8;
    puVar3[2] = local_b0;
  }
  else {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100a72748 | FUN_100a72748 */

void FUN_100a72748(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a72760,0,0);
  return;
}



/* Address: 0x100a72760 | FUN_100a72760 */

void FUN_100a72760(void)

{
  UnsafePointer<__int8> cString;
  long *plVar1;
  long unaff_x22;
  String SVar2;
  
  cString.unknown = _getenv("TMPDIR");
  if (cString.unknown != (undefined *)0x0) {
    SVar2 = Swift::String::init(cString);
    thunk_FUN_1005b3cd0(SVar2.str,SVar2.bridgeObject);
                    /* WARNING: Could not recover jumptable at 0x000100a727a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a72800;
  FUN_100912dec(plVar1,unaff_x22 + 0x10,FUN_100a72864,0,&DAT_100ee4790);
  return;
}



/* Address: 0x100a72800 | FUN_100a72800 */

void FUN_100a72800(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a6c664;
  }
  else {
    pcVar1 = thunk_FUN_1002e7908;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a72864 | FUN_100a72864 */

void FUN_100a72864(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x10001;
  FUN_100aa842c();
  if ((param_4 & 0xff) == 1) {
    uVar1 = 0x706d742f;
    FUN_1005b3548(0x706d742f,&DAT_e400000000000000);
  }
  else {
    thunk_FUN_1005b3cd0();
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a728b8 | FUN_100a728b8 */

void FUN_100a728b8(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = *unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x4a) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a728e4,0,0);
  return;
}



/* Address: 0x100a728e4 | FUN_100a728e4 */

void FUN_100a728e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x4a);
  uVar4 = *(undefined2 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar5 = &DAT_100f2d9c8;
  _swift_allocObject(&DAT_100f2d9c8,0x2a,7);
  *(undefined **)(unaff_x22 + 0x30) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = (byte)uVar4 & 1;
  puVar5[0x29] = (byte)((ushort)uVar4 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  puVar6 = &DAT_100ff6950;
  FUN_1000f7830(&DAT_100ff6950,&DAT_100c908b8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a729cc;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c454,puVar5,puVar6);
  return;
}



/* Address: 0x100a729cc | FUN_100a729cc */

void FUN_100a729cc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a72a38;
  }
  else {
    pcVar2 = FUN_100543edc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a72a38 | FUN_100a72a38 */

void FUN_100a72a38(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a72a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a72a4c | FUN_100a72a4c */

void FUN_100a72a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x50) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a72a74,0,0);
  return;
}



/* Address: 0x100a72a74 | FUN_100a72a74 */

void FUN_100a72a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = &DAT_100f2d9a0;
  _swift_allocObject(&DAT_100f2d9a0,0x30,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar4[0x28] = (char)uVar1;
  *(int *)(puVar4 + 0x2a) = (int)((ulong)uVar1 >> 0x10);
  puVar4[0x2e] = (byte)((ulong)uVar1 >> 0x30) & 1;
  puVar4[0x2f] = (byte)((ulong)uVar1 >> 0x38) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar7;
  puVar5 = &DAT_100ff6ab0;
  FUN_1000f7830(&DAT_100ff6ab0,&DAT_100c90ab8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a72b68;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c440,puVar4,puVar5);
  return;
}



/* Address: 0x100a72b68 | FUN_100a72b68 */

void FUN_100a72b68(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a72a38;
  }
  else {
    pcVar2 = FUN_100929054;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a72bd4 | FUN_100a72bd4 */

void FUN_100a72bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x50) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a72bfc,0,0);
  return;
}



/* Address: 0x100a72bfc | FUN_100a72bfc */

void FUN_100a72bfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = &DAT_100f2d978;
  _swift_allocObject(&DAT_100f2d978,0x30,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar4[0x28] = (char)uVar1;
  *(int *)(puVar4 + 0x2a) = (int)((ulong)uVar1 >> 0x10);
  puVar4[0x2e] = (byte)((ulong)uVar1 >> 0x30) & 1;
  puVar4[0x2f] = (byte)((ulong)uVar1 >> 0x38) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar7;
  puVar5 = &DAT_100ff6db0;
  FUN_1000f7830(&DAT_100ff6db0,&DAT_100c91cc0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a72cf0;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c42c,puVar4,puVar5);
  return;
}



/* Address: 0x100a72cf0 | FUN_100a72cf0 */

void FUN_100a72cf0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a72a38;
  }
  else {
    pcVar2 = thunk_FUN_100929054;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a72d5c | FUN_100a72d5c */

void FUN_100a72d5c(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = *unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x4a) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a72d88,0,0);
  return;
}



/* Address: 0x100a72d88 | FUN_100a72d88 */

void FUN_100a72d88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x4a);
  uVar4 = *(undefined2 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar5 = &DAT_100f2d950;
  _swift_allocObject(&DAT_100f2d950,0x2a,7);
  *(undefined **)(unaff_x22 + 0x30) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = (byte)uVar4 & 1;
  puVar5[0x29] = (byte)((ushort)uVar4 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  puVar6 = &DAT_100ff6db8;
  FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a72e70;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c418,puVar5,puVar6);
  return;
}



/* Address: 0x100a72e70 | FUN_100a72e70 */

void FUN_100a72e70(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a72a38;
  }
  else {
    pcVar2 = thunk_FUN_100543edc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a72edc | FUN_100a72edc */

void FUN_100a72edc(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x38) = param_3;
  *(undefined1 *)(unaff_x22 + 0x3c) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x3d) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a72f08,0,0);
  return;
}



/* Address: 0x100a72f08 | FUN_100a72f08 */

void FUN_100a72f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar4 = *(undefined1 *)(unaff_x22 + 0x3d);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3c);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar6 = &DAT_100f2d928;
  _swift_allocObject(&DAT_100f2d928,0x2e,7);
  *(undefined **)(unaff_x22 + 0x20) = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  puVar6[0x18] = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  puVar6[0x28] = uVar5;
  *(short *)(puVar6 + 0x2a) = (short)uVar3;
  puVar6[0x2c] = (char)((uint)uVar3 >> 0x10);
  puVar6[0x2d] = 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a72ff0;
  FUN_100912dec();
  return;
}



/* Address: 0x100a72ff0 | FUN_100a72ff0 */

void FUN_100a72ff0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x28));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = thunk_FUN_1002f312c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a7305c | FUN_100a7305c */

void FUN_100a7305c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a730cc;
  FUN_100912dec(plVar1,unaff_x22 + 0x10,FUN_100a722d8,0,&DAT_100ee4790);
  return;
}



/* Address: 0x100a730cc | FUN_100a730cc */

void FUN_100a730cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a6c664;
  }
  else {
    pcVar1 = thunk_FUN_1006c19bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a73130 | FUN_100a73130 */

void FUN_100a73130(void)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_100a72478(uVar2,0);
  return;
}



/* Address: 0x100a73188 | FUN_100a73188 */

void FUN_100a73188(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = *unaff_x20;
  _swift_task_switch(FUN_100a72760,0,0);
  return;
}



/* Address: 0x100a731a4 | FUN_100a731a4 */

void FUN_100a731a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x40) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a731c8,0,0);
  return;
}



/* Address: 0x100a731c8 | FUN_100a731c8 */

void FUN_100a731c8(void)

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
  puVar4 = &DAT_100f2d900;
  _swift_allocObject(&DAT_100f2d900,0x28,7);
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
  FUN_100912dec(plVar5,unaff_x22 + 0x10,FUN_100a7c3a8,puVar4,&DAT_100ee4790);
  return;
}



/* Address: 0x100a73284 | FUN_100a73284 */

void FUN_100a73284(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = *unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x119) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a732b0,0,0);
  return;
}


